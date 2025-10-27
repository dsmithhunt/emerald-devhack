#include "global.h"
#include "tm_case.h"
#include "main.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "graphics.h"
#include "gpu_regs.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "move.h"
#include "list_menu.h"
#include "item.h"
#include "item_menu.h"
#include "link.h"
#include "money.h"
#include "party_menu.h"
#include "palette.h"
#include "pokemon_storage_system.h"
#include "shop.h"
#include "task.h"
#include "text_window.h"
#include "scanline_effect.h"
#include "sound.h"
#include "strings.h"
#include "string_util.h"
#include "constants/items.h"
#include "constants/rgb.h"
#include "constants/songs.h"

// Any item in the TM Case with nonzero importance is considered an HM
#define IS_HM(itemId) (GetItemTMHMIndex(itemId) > NUM_TECHNICAL_MACHINES)

#define TAG_SCROLL_ARROW 110

enum {
    WIN_LIST,
    WIN_DESCRIPTION,
    WIN_SELECTED_MSG,
    WIN_TITLE,
    WIN_MOVE_INFO_LABELS,
    WIN_MOVE_INFO,
    WIN_MESSAGE,
    WIN_SELL_QUANTITY,
    WIN_MONEY,
};

// Window IDs for the context menu that opens when a TM/HM is selected
enum {
    WIN_USE_GIVE_EXIT,
    WIN_GIVE_EXIT,
};

// IDs for the actions in the context menu
enum {
    ACTION_USE,
    ACTION_GIVE,
    ACTION_EXIT
};

enum {
    COLOR_LIGHT,
    COLOR_DARK,
    COLOR_CURSOR_SELECTED,
    COLOR_MOVE_INFO,
    COLOR_MESSAGE,
    COLOR_CURSOR_ERASE = 0xFF
};

// Base position for TM/HM disc sprite
#define DISC_BASE_X 41
#define DISC_BASE_Y 46

#define DISC_CASE_DISTANCE 20 // The total number of pixels a disc travels vertically in/out of the case
#define DISC_Y_MOVE 10 // The number of pixels a disc travels vertically per movement step

#define TAG_DISC 400

#define DISC_HIDDEN 0xFF // When no TM/HM is selected, hide the disc sprite

enum {
    ANIM_TM,
    ANIM_HM,
};

// The "static" resources are preserved even if the TM case is exited. This is
// useful for when its left temporarily (e.g. going to the party menu to teach a TM)
// but also to preserve the selected item when the TM case is fully closed.
static EWRAM_DATA struct {
    void (* exitCallback)(void);
    u8 menuType;
    bool8 allowSelectClose;
    u8 unused;
    u16 selectedRow;
    u16 scrollOffset;
} sTMCaseStaticResources = {};

// The "dynamic" resources will be reset any time the TM case is exited, even temporarily.
static EWRAM_DATA struct {
    void (* nextScreenCallback)(void);
    u8 discSpriteId;
    u8 maxTMsShown;
    u8 numTMs;
    u8 contextMenuWindowId;
    u8 scrollArrowsTaskId;
    u16 currItem;
    const u8 * menuActionIndices;
    u8 numMenuActions;
    s16 seqId;
} * sTMCaseDynamicResources = NULL;

static EWRAM_DATA void *sTilemapBuffer = NULL;
static EWRAM_DATA struct ListMenuItem * sListMenuItemsBuffer = NULL;
static EWRAM_DATA u8 (* sListMenuStringsBuffer)[29] = NULL;
static EWRAM_DATA u16 * sTMSpritePaletteBuffer = NULL;
static EWRAM_DATA u8 sIsInTMCase = FALSE;

static void CB2_SetUpTMCaseUI_Blocking(void);
static bool8 DoSetUpTMCaseUI(void);
static void ResetBufferPointers_NoFree(void);
static void LoadBGTemplates(void);
static bool8 HandleLoadTMCaseGraphicsAndPalettes(void);
static void CreateTMCaseListMenuBuffers(void);
static void InitTMCaseListMenuItems(void);
static void GetTMNumberAndMoveString(u8 * dest, u16 itemId);
static void List_MoveCursorFunc(s32 itemIndex, bool8 onInit, struct ListMenu *list);
static void List_ItemPrintFunc(u8 windowId, u32 itemId, u8 y);
static void PrintDescription(s32 itemIndex);
static void PrintMoveInfo(u16 itemId);
static void PrintListCursorAtRow(u8 y, u8 colorIdx);
static void CreateListScrollArrows(void);
static void TMCaseSetup_GetTMCount(void);
static void TMCaseSetup_InitListMenuPositions(void);
static void TMCaseSetup_UpdateVisualMenuOffset(void);
static void Task_FadeOutAndCloseTMCase(u8 taskId);
static void Task_HandleListInput(u8 taskId);
static void Task_SelectedTMHM_Field(u8 taskId);
static void Task_ContextMenu_HandleInput(u8 taskId);
static void Action_Use(u8 taskId);
static void Action_Give(u8 taskId);
static void PrintError_ThereIsNoPokemon(u8 taskId);
static void PrintError_ItemCantBeHeld(u8 taskId);
static void Task_WaitButtonAfterErrorPrint(u8 taskId);
static void CloseMessageAndReturnToList(u8 taskId);
static void Action_Exit(u8 taskId);
static void Task_SelectedTMHM_GiveParty(u8 taskId);
static void Task_SelectedTMHM_GivePC(u8 taskId);
static void Task_SelectedTMHM_Sell(u8 taskId);
static void Task_AskConfirmSaleWithAmount(u8 taskId);
static void Task_PlaceYesNoBox(u8 taskId);
static void Task_SaleOfTMsCanceled(u8 taskId);
static void Task_InitQuantitySelectUI(u8 taskId);
static void SellTM_PrintQuantityAndSalePrice(s16 quantity, s32 value);
static void Task_QuantitySelect_HandleInput(u8 taskId);
static void Task_PrintSaleConfirmedText(u8 taskId);
static void Task_DoSaleOfTMs(u8 taskId);
static void Task_AfterSale_ReturnToList(u8 taskId);
static void InitWindowTemplatesAndPals(void);
static void TMCase_Print(u8 windowId, u8 fontId, const u8 * str, u8 x, u8 y, u8 letterSpacing, u8 lineSpacing, u8 speed, u8 colorIdx);
static void TMCase_SetWindowBorder2(u8 windowId);
static void PrintMessageWithFollowupTask(u8 taskId, u8 fontId, const u8 * str, TaskFunc func);
static void PrintTitle(void);
static void DrawMoveInfoLabels(void);
static void PlaceHMTileInWindow(u8 windowId, u8 x, u8 y);
static void PrintPlayersMoney(void);
static void HandleCreateYesNoMenu(u8 taskId, const struct YesNoFuncTable * ptrs);
static u8 AddContextMenu(u8 * windowId, u8 windowIndex);
static void RemoveContextMenu(u8 * windowId);
static u8 CreateDiscSprite(u16 itemId);
static void SetDiscSpriteAnim(struct Sprite *sprite, u8 tmIdx);
static void TintDiscpriteByType(u8 type);
static void SetDiscSpritePosition(struct Sprite *sprite, u8 tmIdx);
static void SwapDisc(u8 spriteId, u16 itemId);
static void SpriteCB_SwapDisc(struct Sprite *sprite);
static void LoadDiscTypePalettes(void);

static const struct BgTemplate sBGTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 1,
        .baseTile = 0x000
    },
    {
        .bg = 1,
        .charBaseIndex = 0,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0x000
    },
    {
        .bg = 2,
        .charBaseIndex = 0,
        .mapBaseIndex = 29,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0x000
    }
};

// The list of functions to run when a TM/HM is selected.
// What happens when one is selected depends on how the player arrived at the TM case
static void (*const sSelectTMActionTasks[])(u8 taskId) =
{
    [TMCASE_FIELD]      = Task_SelectedTMHM_Field,
    [TMCASE_GIVE_PARTY] = Task_SelectedTMHM_GiveParty,
    [TMCASE_SELL]       = Task_SelectedTMHM_Sell,
    [TMCASE_GIVE_PC]    = Task_SelectedTMHM_GivePC
};

static const struct MenuAction sMenuActions[] =
{
    [ACTION_USE]  = {COMPOUND_STRING("Use"),  {Action_Use} },
    [ACTION_GIVE] = {COMPOUND_STRING("Give"), {Action_Give} },
    [ACTION_EXIT] = {COMPOUND_STRING("Exit"), {Action_Exit} },
};

static const u8 sMenuActionIndices_Field[] =
{
    ACTION_USE,
    ACTION_GIVE,
    ACTION_EXIT
};

static const u8 sMenuActionIndices_UnionRoom[] =
{
    ACTION_GIVE,
    ACTION_EXIT
};

static const struct YesNoFuncTable sYesNoFuncTable =
{
    Task_PrintSaleConfirmedText,
    Task_SaleOfTMsCanceled
};

static const u8 sText_ClearTo18[] = _("{CLEAR_TO 18}");
static const u8 sText_SingleSpace[] = _(" ");
static const u8 sText_Close[] = _("Close");
static const u8 sText_FontSmall[] = _("{FONT_SMALL}");
static const u8 sText_FontShort[] = _("{FONT_SHORT}");
static const u8 sText_TMCase[] = _("TM CASE");
static const u8 sText_TMCaseWillBePutAway[] = _("The TM Case will be\nput away.");

static const u32 sTMCase_Gfx[] = INCBIN_U32("graphics/tm_case/tm_case.4bpp.smol");
static const u32 sTMCaseMenu_Tilemap[] = INCBIN_U32("graphics/tm_case/menu.bin.smolTM");
static const u32 sTMCase_Tilemap[] = INCBIN_U32("graphics/tm_case/tm_case.bin.smolTM");
static const u16 gTMCaseMenu_Male_Pal[] = INCBIN_U16("graphics/tm_case/menu_male.gbapal");
static const u16 gTMCaseMenu_Female_Pal[] = INCBIN_U16("graphics/tm_case/menu_female.gbapal");
static const u32 sTMCaseDisc_Gfx[] = INCBIN_U32("graphics/tm_case/disc.4bpp.smol");
static const u16 gTMCaseDiscTypes1_Pal[] = INCBIN_U16("graphics/tm_case/disc_types_1.gbapal");
static const u16 gTMCaseDiscTypes2_Pal[] = INCBIN_U16("graphics/tm_case/disc_types_2.gbapal");
static const u8 sTMCaseHM_Gfx[] = INCBIN_U8("graphics/tm_case/hm.4bpp");


static ALIGNED(4) const u16 sPal3Override[] = {RGB(8, 8, 8), RGB(30, 16, 6)};

#define TEXT_COLOR_TMCASE_TRANSPARENT TEXT_COLOR_TRANSPARENT
#define TEXT_COLOR_TMCASE_DARK_GRAY TEXT_COLOR_DARK_GRAY
#define TEXT_COLOR_TMCASE_WHITE TEXT_COLOR_WHITE
#define TEXT_COLOR_TMCASE_LIGHT_GRAY TEXT_COLOR_LIGHT_GRAY
#define TEXT_COLOR_TMCASE_MESSAGE_NORMAL TEXT_COLOR_DARK_GRAY
#define TEXT_COLOR_TMCASE_MESSAGE_SHADOW TEXT_COLOR_LIGHT_GRAY

static const u8 sTextColors[][3] =
{
    [COLOR_LIGHT]           = {TEXT_COLOR_TMCASE_TRANSPARENT, TEXT_COLOR_TMCASE_WHITE, TEXT_COLOR_TMCASE_DARK_GRAY},
    [COLOR_DARK]            = {TEXT_COLOR_TMCASE_TRANSPARENT, TEXT_COLOR_TMCASE_DARK_GRAY, TEXT_COLOR_TMCASE_LIGHT_GRAY},
    [COLOR_CURSOR_SELECTED] = {TEXT_COLOR_TMCASE_TRANSPARENT, TEXT_COLOR_TMCASE_LIGHT_GRAY, TEXT_COLOR_TMCASE_DARK_GRAY},
    [COLOR_MOVE_INFO]       = {TEXT_COLOR_TMCASE_TRANSPARENT, 14, 10},
    [COLOR_MESSAGE]         = {TEXT_COLOR_TMCASE_TRANSPARENT, TEXT_COLOR_TMCASE_MESSAGE_NORMAL, TEXT_COLOR_TMCASE_MESSAGE_SHADOW},
};

static const struct WindowTemplate sWindowTemplates[] =
{
    [WIN_LIST] =
    {
        .bg = 0,
        .tilemapLeft = 10,
        .tilemapTop = 1,
        .width = 19,
        .height = 10,
        .paletteNum = 15,
        .baseBlock = 0x081
    },
    [WIN_DESCRIPTION] =
    {
        .bg = 0,
        .tilemapLeft = 12,
        .tilemapTop = 12,
        .width = 18,
        .height = 8,
        .paletteNum = 15,
        .baseBlock = 0x13f
    },
    [WIN_SELECTED_MSG] =
    {
        .bg = 1,
        .tilemapLeft = 5,
        .tilemapTop = 15,
        .width = 15,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 0x1f9
    },
    [WIN_TITLE] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 1,
        .width = 10,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 0x235
    },
    [WIN_MOVE_INFO_LABELS] =
    {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 13,
        .width = 5,
        .height = 6,
        .paletteNum = 12,
        .baseBlock = 0x249
    },
    [WIN_MOVE_INFO] =
    {
        .bg = 0,
        .tilemapLeft = 7,
        .tilemapTop = 13,
        .width = 5,
        .height = 6,
        .paletteNum = 12,
        .baseBlock = 0x267
    },
    [WIN_MESSAGE] =
    {
        .bg = 1,
        .tilemapLeft = 2,
        .tilemapTop = 15,
        .width = 26,
        .height = 4,
        .paletteNum = 13,
        .baseBlock = 0x285
    },
    [WIN_SELL_QUANTITY] =
    {
        .bg = 1,
        .tilemapLeft = 17,
        .tilemapTop = 9,
        .width = 12,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 0x2ed
    },
    [WIN_MONEY] =
    {
        .bg = 1,
        .tilemapLeft = 1,
        .tilemapTop = 1,
        .width = 10,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 0x31d
    },
    DUMMY_WIN_TEMPLATE
};

static const struct WindowTemplate sYesNoWindowTemplate = {
    .bg = 1,
    .tilemapLeft = 21,
    .tilemapTop = 9,
    .width = 6,
    .height = 4,
    .paletteNum = 15,
    .baseBlock = 0x335
};

static const struct WindowTemplate sWindowTemplates_ContextMenu[] = {
    [WIN_USE_GIVE_EXIT] = {
        .bg = 1,
        .tilemapLeft = 22,
        .tilemapTop = 13,
        .width = 7,
        .height = 6,
        .paletteNum = 15,
        .baseBlock = 0x1cf
    },
    [WIN_GIVE_EXIT] = {
        .bg = 1,
        .tilemapLeft = 22,
        .tilemapTop = 15,
        .width = 7,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 0x1cf
    },
};

static const struct OamData sTMSpriteOamData = {
    .size = 2,
    .priority = 2
};

static const union AnimCmd sAnim_TM[] = {
    ANIMCMD_FRAME(0, 0),
    ANIMCMD_END
};

static const union AnimCmd sAnim_HM[] = {
    ANIMCMD_FRAME(16, 0),
    ANIMCMD_END
};

static const union AnimCmd *const sAnims_Disc[] = {
    [ANIM_TM] = sAnim_TM,
    [ANIM_HM] = sAnim_HM
};

static const struct CompressedSpriteSheet sSpriteSheet_Disc = {
    .data = sTMCaseDisc_Gfx,
    .size = 0x400,
    .tag = TAG_DISC
};

static const struct SpriteTemplate sSpriteTemplate_Disc = {
    .tileTag = TAG_DISC,
    .paletteTag = TAG_DISC,
    .oam = &sTMSpriteOamData,
    .anims = sAnims_Disc,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

// If including new types, please add onto this table as well to make the TM Case load the proper palette for it as well
static const u16 sTMSpritePaletteOffsetByType[] = {
    [TYPE_NORMAL]   = 0x000,
    [TYPE_FIRE]     = 0x010,
    [TYPE_WATER]    = 0x020,
    [TYPE_GRASS]    = 0x030,
    [TYPE_ELECTRIC] = 0x040,
    [TYPE_ROCK]     = 0x050,
    [TYPE_GROUND]   = 0x060,
    [TYPE_ICE]      = 0x070,
    [TYPE_FLYING]   = 0x080,
    [TYPE_FIGHTING] = 0x090,
    [TYPE_GHOST]    = 0x0a0,
    [TYPE_BUG]      = 0x0b0,
    [TYPE_POISON]   = 0x0c0,
    [TYPE_PSYCHIC]  = 0x0d0,
    [TYPE_STEEL]    = 0x0e0,
    [TYPE_DARK]     = 0x0f0,
    [TYPE_DRAGON]   = 0x100,
    [TYPE_FAIRY]    = 0x110,
};

void InitTMCase(u8 type, void (* exitCallback)(void), bool8 allowSelectClose)
{
    ResetBufferPointers_NoFree();
    sTMCaseDynamicResources = Alloc(sizeof(*sTMCaseDynamicResources));
    sTMCaseDynamicResources->nextScreenCallback = NULL;
    sTMCaseDynamicResources->scrollArrowsTaskId = TASK_NONE;
    sTMCaseDynamicResources->contextMenuWindowId = WINDOW_NONE;
    sIsInTMCase = TRUE;
    if (type != TMCASE_REOPENING)
        sTMCaseStaticResources.menuType = type;
    if (exitCallback != NULL)
        sTMCaseStaticResources.exitCallback = exitCallback;
    if (allowSelectClose != TMCASE_KEEP_PREV)
        sTMCaseStaticResources.allowSelectClose = allowSelectClose;
    gTextFlags.autoScroll = FALSE;
    SetMainCallback2(CB2_SetUpTMCaseUI_Blocking);
}

static void CB2_Idle(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void VBlankCB_Idle(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void CB2_SetUpTMCaseUI_Blocking(void)
{
    while (1)
    {
        if (MenuHelpers_ShouldWaitForLinkRecv())
            break;
        if (DoSetUpTMCaseUI())
            break;
        if (MenuHelpers_IsLinkActive())
            break;
    }
}

#define tListTaskId       data[0]
#define tListPosition     data[1]
#define tQuantity         data[2]
#define tItemCount        data[8]

static inline u16 GetTMCaseItemIdByPosition(u32 index)
{
    return GetBagItemId(POCKET_TM_HM, index);
}

static bool8 DoSetUpTMCaseUI(void)
{
    u8 taskId;

    switch (gMain.state)
    {
    case 0:
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        gMain.state++;
        break;
    case 1:
        ScanlineEffect_Stop();
        gMain.state++;
        break;
    case 2:
        FreeAllSpritePalettes();
        gMain.state++;
        break;
    case 3:
        ResetPaletteFade();
        gMain.state++;
        break;
    case 4:
        ResetSpriteData();
        gMain.state++;
        break;
    case 5:
        ResetTasks();
        gMain.state++;
        break;
    case 6:
        LoadBGTemplates();
        sTMCaseDynamicResources->seqId = 0;
        gMain.state++;
        break;
    case 7:
        InitWindowTemplatesAndPals();
        gMain.state++;
        break;
    case 8:
        if (HandleLoadTMCaseGraphicsAndPalettes())
            gMain.state++;
        break;
    case 9:
        SortItemsInBag(&gBagPockets[POCKET_TM_HM], SORT_BY_INDEX);
        gMain.state++;
        break;
    case 10:
        TMCaseSetup_GetTMCount();
        TMCaseSetup_InitListMenuPositions();
        TMCaseSetup_UpdateVisualMenuOffset();
        gMain.state++;
        break;
    case 11:
        DrawMoveInfoLabels();
        gMain.state++;
        break;
    case 12:
        CreateTMCaseListMenuBuffers();
        InitTMCaseListMenuItems();
        gMain.state++;
        break;
    case 13:
        PrintTitle();
        gMain.state++;
        break;
    case 14:
        taskId = CreateTask(Task_HandleListInput, 0);
        gTasks[taskId].tListTaskId = ListMenuInit(&gMultiuseListMenuTemplate, sTMCaseStaticResources.scrollOffset, sTMCaseStaticResources.selectedRow);
        gMain.state++;
        break;
    case 15:
        CreateListScrollArrows();
        gMain.state++;
        break;
    case 16:
        sTMCaseDynamicResources->discSpriteId = CreateDiscSprite(GetTMCaseItemIdByPosition(sTMCaseStaticResources.scrollOffset + sTMCaseStaticResources.selectedRow));
        gMain.state++;
        break;
    case 17:
        BlendPalettes(PALETTES_ALL, 16, 0);
        gMain.state++;
        break;
    case 18:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    default:
        SetVBlankCallback(VBlankCB_Idle);
        SetMainCallback2(CB2_Idle);
        return TRUE;
    }

    return FALSE;
}

static void ResetBufferPointers_NoFree(void)
{
    sTMCaseDynamicResources = NULL;
    sTilemapBuffer = NULL;
    sListMenuItemsBuffer = NULL;
    sListMenuStringsBuffer = NULL;
    sTMSpritePaletteBuffer = NULL;
}

static void LoadBGTemplates(void)
{
    void ** ptr;
    ResetAllBgsCoordinatesAndBgCntRegs();
    ptr = &sTilemapBuffer;
    *ptr = AllocZeroed(0x800);
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sBGTemplates, ARRAY_COUNT(sBGTemplates));
    SetBgTilemapBuffer(2, *ptr);
    ScheduleBgCopyTilemapToVram(1);
    ScheduleBgCopyTilemapToVram(2);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    ShowBg(0);
    ShowBg(1);
    ShowBg(2);
}

static bool8 HandleLoadTMCaseGraphicsAndPalettes(void)
{
    switch (sTMCaseDynamicResources->seqId)
    {
    case 0:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(1, sTMCase_Gfx, 0, 0, 0);
        sTMCaseDynamicResources->seqId++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            DecompressDataWithHeaderWram(sTMCaseMenu_Tilemap, sTilemapBuffer);
            sTMCaseDynamicResources->seqId++;
        }
        break;
    case 2:
        DecompressDataWithHeaderWram(sTMCase_Tilemap, GetBgTilemapBuffer(1));
        sTMCaseDynamicResources->seqId++;
        break;
    case 3:
        if (gSaveBlock2Ptr->playerGender == MALE)
            LoadPalette(gTMCaseMenu_Male_Pal, BG_PLTT_ID(0), 4 * PLTT_SIZE_4BPP);
        else
            LoadPalette(gTMCaseMenu_Female_Pal, BG_PLTT_ID(0), 4 * PLTT_SIZE_4BPP);
        sTMCaseDynamicResources->seqId++;
        break;
    case 4:
        LoadCompressedSpriteSheet(&sSpriteSheet_Disc);
        sTMCaseDynamicResources->seqId++;
        break;
    default:
        LoadDiscTypePalettes();
        sTMCaseDynamicResources->seqId = 0;
        return TRUE;
    }

    return FALSE;
}

static void CreateTMCaseListMenuBuffers(void)
{
    sListMenuItemsBuffer = Alloc((BAG_TMHM_COUNT + 1) * sizeof(struct ListMenuItem));
    sListMenuStringsBuffer = Alloc(sTMCaseDynamicResources->numTMs * 31);
}

static void InitTMCaseListMenuItems(void)
{
    u16 i;

    for (i = 0; i < sTMCaseDynamicResources->numTMs; i++)
    {
        GetTMNumberAndMoveString(sListMenuStringsBuffer[i], GetTMCaseItemIdByPosition(i));
        sListMenuItemsBuffer[i].name = sListMenuStringsBuffer[i];
        sListMenuItemsBuffer[i].id = i;
    }
    sListMenuItemsBuffer[i].name = sText_Close;
    sListMenuItemsBuffer[i].id = LIST_CANCEL;

    gMultiuseListMenuTemplate.items = sListMenuItemsBuffer;
    gMultiuseListMenuTemplate.totalItems = sTMCaseDynamicResources->numTMs + 1; // +1 for Cancel
    gMultiuseListMenuTemplate.windowId = WIN_LIST;
    gMultiuseListMenuTemplate.header_X = 0;
    gMultiuseListMenuTemplate.item_X = 8;
    gMultiuseListMenuTemplate.cursor_X = 0;
    gMultiuseListMenuTemplate.lettersSpacing = 0;
    gMultiuseListMenuTemplate.itemVerticalPadding = 2;
    gMultiuseListMenuTemplate.upText_Y = 2;
    gMultiuseListMenuTemplate.maxShowed = sTMCaseDynamicResources->maxTMsShown;
    gMultiuseListMenuTemplate.fontId = FONT_SHORT;
    gMultiuseListMenuTemplate.cursorPal = TEXT_COLOR_TMCASE_DARK_GRAY;
    gMultiuseListMenuTemplate.fillValue = TEXT_COLOR_TMCASE_TRANSPARENT;
    gMultiuseListMenuTemplate.cursorShadowPal = TEXT_COLOR_TMCASE_LIGHT_GRAY;
    gMultiuseListMenuTemplate.moveCursorFunc = List_MoveCursorFunc;
    gMultiuseListMenuTemplate.itemPrintFunc = List_ItemPrintFunc;
    gMultiuseListMenuTemplate.cursorKind = 0;
    gMultiuseListMenuTemplate.scrollMultiple = 0;
}

static void GetTMNumberAndMoveString(u8 * dest, u16 itemId)
{
    u8 tmIdx;
    StringCopy(gStringVar4, sText_FontSmall);
    tmIdx = GetItemTMHMIndex(itemId);
    if (tmIdx > NUM_TECHNICAL_MACHINES)
    {
        StringAppend(gStringVar4, sText_ClearTo18);
        StringAppend(gStringVar4, gText_NumberClear01);
        ConvertIntToDecimalStringN(gStringVar1, tmIdx - NUM_TECHNICAL_MACHINES, STR_CONV_MODE_LEADING_ZEROS, 1);
        StringAppend(gStringVar4, gStringVar1);
    }
    else
    {
        StringAppend(gStringVar4, gText_NumberClear01);
        ConvertIntToDecimalStringN(gStringVar1, tmIdx, STR_CONV_MODE_LEADING_ZEROS, 2);
        StringAppend(gStringVar4, gStringVar1);
    }
    StringAppend(gStringVar4, sText_SingleSpace);
    StringAppend(gStringVar4, sText_FontShort);
    StringAppend(gStringVar4, GetMoveName(ItemIdToBattleMoveId(itemId)));
    StringCopy(dest, gStringVar4);
}

static void List_MoveCursorFunc(s32 itemIndex, bool8 onInit, struct ListMenu *list)
{
    u16 itemId;

    if (itemIndex == LIST_CANCEL)
        itemId = ITEM_NONE;
    else
        itemId = GetTMCaseItemIdByPosition(itemIndex);

    if (onInit != TRUE)
    {
        PlaySE(SE_SELECT);
        SwapDisc(sTMCaseDynamicResources->discSpriteId, itemId);
    }
    PrintDescription(itemIndex);
    PrintMoveInfo(itemId);
}

static void List_ItemPrintFunc(u8 windowId, u32 itemIndex, u8 y)
{
    if (itemIndex != LIST_CANCEL)
    {
        if (IS_HM(GetTMCaseItemIdByPosition(itemIndex)))
        {
            PlaceHMTileInWindow(windowId, 8, y);
        }
        else if (!GetItemImportance(GetTMCaseItemIdByPosition(itemIndex)))
        {
            ConvertIntToDecimalStringN(gStringVar1, GetBagItemQuantity(POCKET_TM_HM, itemIndex), STR_CONV_MODE_RIGHT_ALIGN, MAX_ITEM_DIGITS);
            StringExpandPlaceholders(gStringVar4, gText_xVar1);
            TMCase_Print(windowId, FONT_SMALL, gStringVar4, 126, y, 0, 0, TEXT_SKIP_DRAW, COLOR_DARK);
        }
    }
}

static void PrintDescription(s32 itemIndex)
{
    const u8 * str;
    if (itemIndex != LIST_CANCEL)
        str = GetItemLongDescription(GetTMCaseItemIdByPosition(itemIndex));
    else
        str = sText_TMCaseWillBePutAway;
    FillWindowPixelBuffer(WIN_DESCRIPTION, 0);
    TMCase_Print(WIN_DESCRIPTION, FONT_SHORT, str, 2, 3, 1, 0, 0, COLOR_LIGHT);
}

// Darkens (or subsequently lightens) the blue bg tiles around the description window when a TM/HM is selected.
// shade=0: lighten, shade=1: darken
static void SetDescriptionWindowShade(s32 shade)
{
    SetBgTilemapPalette(2, 0, 12, 30, 8, 2 * shade + 1);
    ScheduleBgCopyTilemapToVram(2);
}

static void PrintListCursor(u8 listTaskId, u8 colorIdx)
{
    PrintListCursorAtRow(ListMenuGetYCoordForPrintingArrowCursor(listTaskId), colorIdx);
}

static void PrintListCursorAtRow(u8 y, u8 colorIdx)
{
    if (colorIdx == COLOR_CURSOR_ERASE)
    {
        // Never used. Would erase cursor (but also a portion of the list text)
        FillWindowPixelRect(WIN_LIST, 0, 0, y, GetFontAttribute(FONT_SHORT, FONTATTR_MAX_LETTER_WIDTH), GetFontAttribute(FONT_SHORT, FONTATTR_MAX_LETTER_HEIGHT));
        CopyWindowToVram(WIN_LIST, COPYWIN_GFX);
    }
    else
    {
        TMCase_Print(WIN_LIST, FONT_SHORT, gText_SelectorArrow2, 0, y, 0, 0, 0, colorIdx);
    }
}

static void CreateListScrollArrows(void)
{
    sTMCaseDynamicResources->scrollArrowsTaskId = AddScrollIndicatorArrowPairParameterized(SCROLL_ARROW_UP,
                                                                                           160, 8, 88,
                                                                                           sTMCaseDynamicResources->numTMs - sTMCaseDynamicResources->maxTMsShown + 1,
                                                                                           TAG_SCROLL_ARROW, TAG_SCROLL_ARROW,
                                                                                           &sTMCaseStaticResources.scrollOffset);
}

static void CreateQuantityScrollArrows(void)
{
    sTMCaseDynamicResources->currItem = 1;
    sTMCaseDynamicResources->scrollArrowsTaskId = AddScrollIndicatorArrowPairParameterized(SCROLL_ARROW_UP,
                                                                                           152, 72, 104,
                                                                                           2,
                                                                                           TAG_SCROLL_ARROW, TAG_SCROLL_ARROW,
                                                                                           &sTMCaseDynamicResources->currItem);
}

static void RemoveScrollArrows(void)
{
    if (sTMCaseDynamicResources->scrollArrowsTaskId != TASK_NONE)
    {
        RemoveScrollIndicatorArrowPair(sTMCaseDynamicResources->scrollArrowsTaskId);
        sTMCaseDynamicResources->scrollArrowsTaskId = TASK_NONE;
    }
}

void ResetTMCaseCursorPos(void)
{
    sTMCaseStaticResources.selectedRow = 0;
    sTMCaseStaticResources.scrollOffset = 0;
}

static void TMCaseSetup_GetTMCount(void)
{
    struct BagPocket * pocket = &gBagPockets[POCKET_TM_HM];

    CompactItemsInBagPocket(POCKET_TM_HM);
    sTMCaseDynamicResources->numTMs = 0;

    for (u32 i = 0; i < pocket->capacity && GetTMCaseItemIdByPosition(i); i++)
        sTMCaseDynamicResources->numTMs++;

    sTMCaseDynamicResources->maxTMsShown = min(sTMCaseDynamicResources->numTMs + 1, 5);
}

static void TMCaseSetup_InitListMenuPositions(void)
{
    if (sTMCaseStaticResources.scrollOffset != 0)
    {
        if (sTMCaseStaticResources.scrollOffset + sTMCaseDynamicResources->maxTMsShown > sTMCaseDynamicResources->numTMs + 1)
            sTMCaseStaticResources.scrollOffset = sTMCaseDynamicResources->numTMs + 1 - sTMCaseDynamicResources->maxTMsShown;
    }
    if (sTMCaseStaticResources.scrollOffset + sTMCaseStaticResources.selectedRow >= sTMCaseDynamicResources->numTMs + 1)
    {
        if (sTMCaseDynamicResources->numTMs + 1 < 2)
            sTMCaseStaticResources.selectedRow = 0;
        else
            sTMCaseStaticResources.selectedRow = sTMCaseDynamicResources->numTMs;
    }
}

static void TMCaseSetup_UpdateVisualMenuOffset(void)
{
    u8 i;
    if (sTMCaseStaticResources.selectedRow > 3)
    {
        for (i = 0; i <= sTMCaseStaticResources.selectedRow - 3 && sTMCaseStaticResources.scrollOffset + sTMCaseDynamicResources->maxTMsShown != sTMCaseDynamicResources->numTMs + 1; i++)
        {
            do {} while (0);
            sTMCaseStaticResources.selectedRow--;
            sTMCaseStaticResources.scrollOffset++;
        }
    }
}

static void DestroyTMCaseBuffers(void)
{
    if (sTMCaseDynamicResources != NULL)
        Free(sTMCaseDynamicResources);
    if (sTilemapBuffer != NULL)
        Free(sTilemapBuffer);
    if (sListMenuItemsBuffer != NULL)
        Free(sListMenuItemsBuffer);
    if (sListMenuStringsBuffer != NULL)
        Free(sListMenuStringsBuffer);
    if (sTMSpritePaletteBuffer != NULL)
        Free(sTMSpritePaletteBuffer);
    FreeAllWindowBuffers();
}

static void Task_BeginFadeOutFromTMCase(u8 taskId)
{
    BeginNormalPaletteFade(PALETTES_ALL, -2, 0, 16, RGB_BLACK);
    gTasks[taskId].func = Task_FadeOutAndCloseTMCase;
}

static void Task_FadeOutAndCloseTMCase(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    if (!gPaletteFade.active)
    {
        DestroyListMenuTask(tListTaskId, &sTMCaseStaticResources.scrollOffset, &sTMCaseStaticResources.selectedRow);
        if (sTMCaseDynamicResources->nextScreenCallback != NULL)
            SetMainCallback2(sTMCaseDynamicResources->nextScreenCallback);
        else
            SetMainCallback2(sTMCaseStaticResources.exitCallback);
        RemoveScrollArrows();
        DestroyTMCaseBuffers();
        DestroyTask(taskId);
    }
}

static void Task_HandleListInput(u8 taskId)
{
    s16 * data = gTasks[taskId].data;
    s32 input;

    if (!gPaletteFade.active)
    {
        if (MenuHelpers_ShouldWaitForLinkRecv() != TRUE)
        {
            input = ListMenu_ProcessInput(tListTaskId);
            ListMenuGetScrollAndRow(tListTaskId, &sTMCaseStaticResources.scrollOffset, &sTMCaseStaticResources.selectedRow);
            if (JOY_NEW(SELECT_BUTTON) && sTMCaseStaticResources.allowSelectClose == TRUE)
            {
                PlaySE(SE_SELECT);
                gSpecialVar_ItemId = ITEM_NONE;
                sIsInTMCase = FALSE;
                Task_BeginFadeOutFromTMCase(taskId);
            }
            else
            {
                switch (input)
                {
                case LIST_NOTHING_CHOSEN:
                    break;
                case LIST_CANCEL:
                    PlaySE(SE_SELECT);
                    gSpecialVar_ItemId = ITEM_NONE;
                    sIsInTMCase = FALSE;
                    Task_BeginFadeOutFromTMCase(taskId);
                    break;
                default:
                    PlaySE(SE_SELECT);
                    SetDescriptionWindowShade(1);
                    RemoveScrollArrows();
                    PrintListCursor(tListTaskId, COLOR_CURSOR_SELECTED);
                    tListPosition = input;
                    tQuantity = GetBagItemQuantity(POCKET_TM_HM, input);
                    gSpecialVar_ItemId = GetTMCaseItemIdByPosition(input);
                    gTasks[taskId].func = sSelectTMActionTasks[sTMCaseStaticResources.menuType];
                    break;
                }
            }
        }
    }
}

static void ReturnToList(u8 taskId)
{
    SetDescriptionWindowShade(0);
    CreateListScrollArrows();
    gTasks[taskId].func = Task_HandleListInput;
}

// When a TM/HM in the list is selected in the field, create a context
// menu with a list of actions that can be taken.
static void Task_SelectedTMHM_Field(u8 taskId)
{
    u8 * strbuf;
    
    // Create context window
    TMCase_SetWindowBorder2(WIN_SELECTED_MSG);
    if (!MenuHelpers_IsLinkActive() && InUnionRoom() != TRUE)
    {
        // Regular TM/HM context menu
        AddContextMenu(&sTMCaseDynamicResources->contextMenuWindowId, WIN_USE_GIVE_EXIT);
        sTMCaseDynamicResources->menuActionIndices = sMenuActionIndices_Field;
        sTMCaseDynamicResources->numMenuActions = ARRAY_COUNT(sMenuActionIndices_Field);
    }
    else
    {
        // In Union Room, "Use" is removed from the context menu
        AddContextMenu(&sTMCaseDynamicResources->contextMenuWindowId, WIN_GIVE_EXIT);
        sTMCaseDynamicResources->menuActionIndices = sMenuActionIndices_UnionRoom;
        sTMCaseDynamicResources->numMenuActions = ARRAY_COUNT(sMenuActionIndices_UnionRoom);
    }

    // Print context window actions
    PrintMenuActionTexts(sTMCaseDynamicResources->contextMenuWindowId,
                         FONT_SHORT,
                         GetMenuCursorDimensionByFont(FONT_SHORT, 0),
                         2,
                         0,
                         GetFontAttribute(FONT_SHORT, FONTATTR_MAX_LETTER_HEIGHT) + 2,
                         sTMCaseDynamicResources->numMenuActions,
                         sMenuActions,
                         sTMCaseDynamicResources->menuActionIndices);

    InitMenuNormal(sTMCaseDynamicResources->contextMenuWindowId, FONT_SHORT, 0, 2, GetFontAttribute(FONT_SHORT, FONTATTR_MAX_LETTER_HEIGHT) + 2, sTMCaseDynamicResources->numMenuActions, 0);
    
    // Print label text next to the context window
    strbuf = Alloc(256);
    GetTMNumberAndMoveString(strbuf, gSpecialVar_ItemId);
    StringAppend(strbuf, gText_Var1IsSelected + 2); // +2 skips over the stringvar
    TMCase_Print(WIN_SELECTED_MSG, FONT_SHORT, strbuf, 0, 2, 1, 0, 0, COLOR_MESSAGE);
    Free(strbuf);
    if (IS_HM(gSpecialVar_ItemId))
    {
        PlaceHMTileInWindow(WIN_SELECTED_MSG, 0, 2);
        CopyWindowToVram(WIN_SELECTED_MSG, COPYWIN_GFX);
    }

    ScheduleBgCopyTilemapToVram(0);
    ScheduleBgCopyTilemapToVram(1);
    gTasks[taskId].func = Task_ContextMenu_HandleInput;
}

static void Task_ContextMenu_HandleInput(u8 taskId)
{
    s8 input;

    if (MenuHelpers_ShouldWaitForLinkRecv() != TRUE)
    {
        input = Menu_ProcessInputNoWrap();
        switch (input)
        {
        case MENU_B_PRESSED:
            // Run last action in list (Exit)
            PlaySE(SE_SELECT);
            sMenuActions[sTMCaseDynamicResources->menuActionIndices[sTMCaseDynamicResources->numMenuActions - 1]].func.void_u8(taskId);
            break;
        case MENU_NOTHING_CHOSEN:
            break;
        default:
            PlaySE(SE_SELECT);
            sMenuActions[sTMCaseDynamicResources->menuActionIndices[input]].func.void_u8(taskId);
            break;
        }
    }
}

static void Action_Use(u8 taskId)
{
    RemoveContextMenu(&sTMCaseDynamicResources->contextMenuWindowId);
    ClearStdWindowAndFrameToTransparent(WIN_SELECTED_MSG, FALSE);
    ClearWindowTilemap(WIN_SELECTED_MSG);
    PutWindowTilemap(WIN_LIST);
    ScheduleBgCopyTilemapToVram(0);
    ScheduleBgCopyTilemapToVram(1);
    if (CalculatePlayerPartyCount() == 0)
    {
        PrintError_ThereIsNoPokemon(taskId);
    }
    else
    {
        // Chose a TM/HM to use, exit TM case for party menu
        gItemUseCB = ItemUseCB_TMHM;
        sTMCaseDynamicResources->nextScreenCallback = CB2_ShowPartyMenuForItemUse;
        Task_BeginFadeOutFromTMCase(taskId);
    }
}

static void Action_Give(u8 taskId)
{
    s16 * data = gTasks[taskId].data;
    u16 itemId = GetTMCaseItemIdByPosition(tListPosition);
    RemoveContextMenu(&sTMCaseDynamicResources->contextMenuWindowId);
    ClearStdWindowAndFrameToTransparent(WIN_SELECTED_MSG, FALSE);
    ClearWindowTilemap(WIN_SELECTED_MSG);
    PutWindowTilemap(WIN_DESCRIPTION);
    PutWindowTilemap(WIN_MOVE_INFO_LABELS);
    PutWindowTilemap(WIN_MOVE_INFO);
    ScheduleBgCopyTilemapToVram(0);
    ScheduleBgCopyTilemapToVram(1);
    if (!IS_HM(itemId) && !GetItemImportance(itemId))
    {
        if (CalculatePlayerPartyCount() == 0)
        {
            PrintError_ThereIsNoPokemon(taskId);
        }
        else
        {
            sTMCaseDynamicResources->nextScreenCallback = CB2_ChooseMonToGiveItem;
            Task_BeginFadeOutFromTMCase(taskId);
        }
    }
    else
    {
        PrintError_ItemCantBeHeld(taskId);
    }
}

static void PrintError_ThereIsNoPokemon(u8 taskId)
{
    PrintMessageWithFollowupTask(taskId, FONT_SHORT, gText_NoPokemon, Task_WaitButtonAfterErrorPrint);
}

static void PrintError_ItemCantBeHeld(u8 taskId)
{
    CopyItemName(gSpecialVar_ItemId, gStringVar1);
    StringExpandPlaceholders(gStringVar4, gText_Var1CantBeHeld);
    PrintMessageWithFollowupTask(taskId, FONT_SHORT, gStringVar4, Task_WaitButtonAfterErrorPrint);
}

static void Task_WaitButtonAfterErrorPrint(u8 taskId)
{
    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        CloseMessageAndReturnToList(taskId);
    }
}

static void CloseMessageAndReturnToList(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    DestroyListMenuTask(tListTaskId, &sTMCaseStaticResources.scrollOffset, &sTMCaseStaticResources.selectedRow);
    tListTaskId = ListMenuInit(&gMultiuseListMenuTemplate, sTMCaseStaticResources.scrollOffset, sTMCaseStaticResources.selectedRow);
    PrintListCursor(tListTaskId, COLOR_DARK);
    ClearDialogWindowAndFrameToTransparent(WIN_MESSAGE, FALSE);
    ClearWindowTilemap(WIN_MESSAGE);
    PutWindowTilemap(WIN_DESCRIPTION);
    PutWindowTilemap(WIN_MOVE_INFO_LABELS);
    PutWindowTilemap(WIN_MOVE_INFO);
    ScheduleBgCopyTilemapToVram(0);
    ScheduleBgCopyTilemapToVram(1);
    ReturnToList(taskId);
}

static void Action_Exit(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    RemoveContextMenu(&sTMCaseDynamicResources->contextMenuWindowId);
    ClearStdWindowAndFrameToTransparent(WIN_SELECTED_MSG, FALSE);
    ClearWindowTilemap(WIN_SELECTED_MSG);
    PutWindowTilemap(WIN_LIST);
    PrintListCursor(tListTaskId, COLOR_DARK);
    PutWindowTilemap(WIN_DESCRIPTION);
    PutWindowTilemap(WIN_MOVE_INFO_LABELS);
    PutWindowTilemap(WIN_MOVE_INFO);
    ScheduleBgCopyTilemapToVram(0);
    ScheduleBgCopyTilemapToVram(1);
    ReturnToList(taskId);
}

static void Task_SelectedTMHM_GiveParty(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    if (!GetItemImportance(GetTMCaseItemIdByPosition(tListPosition)))
    {
        sIsInTMCase = FALSE;
        sTMCaseDynamicResources->nextScreenCallback = CB2_GiveHoldItem;
        Task_BeginFadeOutFromTMCase(taskId);
    }
    else
    {
        // Can't hold "important" items (e.g. key items)
        PrintError_ItemCantBeHeld(taskId);
    }
}

static void Task_SelectedTMHM_GivePC(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    if (!GetItemImportance(GetTMCaseItemIdByPosition(tListPosition)))
    {
        sIsInTMCase = FALSE;
        sTMCaseDynamicResources->nextScreenCallback = CB2_ReturnToPokeStorage;
        Task_BeginFadeOutFromTMCase(taskId);
    }
    else
    {
        // Can't hold "important" items (e.g. key items)
        PrintError_ItemCantBeHeld(taskId);
    }
}

static void Task_SelectedTMHM_Sell(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    if (GetItemPrice(gSpecialVar_ItemId) == 0 || GetItemImportance(gSpecialVar_ItemId))
    {
        // Can't sell TM/HMs with no price (by default this is just the HMs)
        CopyItemName(gSpecialVar_ItemId, gStringVar2);
        StringExpandPlaceholders(gStringVar4, gText_CantBuyKeyItem);
        PrintMessageWithFollowupTask(taskId, FONT_SHORT, gStringVar4, CloseMessageAndReturnToList);
    }
    else
    {
        tItemCount = 1;
        if (tQuantity == 1)
        {
            PrintPlayersMoney();
            Task_AskConfirmSaleWithAmount(taskId);
        }
        else
        {
            u32 maxQuantity = MAX_MONEY / GetItemSellPrice(gSpecialVar_ItemId);

            if (tQuantity > maxQuantity)
                tQuantity = maxQuantity;

            CopyItemName(gSpecialVar_ItemId, gStringVar2);
            StringExpandPlaceholders(gStringVar4, gText_HowManyToSell);
            PrintMessageWithFollowupTask(taskId, FONT_SHORT, gStringVar4, Task_InitQuantitySelectUI);
        }
    }
}

static void Task_AskConfirmSaleWithAmount(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    ConvertIntToDecimalStringN(gStringVar1, GetItemSellPrice(GetTMCaseItemIdByPosition(tListPosition)) * tItemCount, STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
    StringExpandPlaceholders(gStringVar4, gText_ICanPayVar1);
    PrintMessageWithFollowupTask(taskId, FONT_SHORT, gStringVar4, Task_PlaceYesNoBox);
}

static void Task_PlaceYesNoBox(u8 taskId)
{
    HandleCreateYesNoMenu(taskId, &sYesNoFuncTable);
}

static void Task_SaleOfTMsCanceled(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    ClearStdWindowAndFrameToTransparent(WIN_MONEY, FALSE);
    ClearDialogWindowAndFrameToTransparent(WIN_MESSAGE, FALSE);
    PutWindowTilemap(WIN_LIST);
    PutWindowTilemap(WIN_DESCRIPTION);
    PutWindowTilemap(WIN_TITLE);
    PutWindowTilemap(WIN_MOVE_INFO_LABELS);
    PutWindowTilemap(WIN_MOVE_INFO);
    RemoveMoneyLabelObject();
    ScheduleBgCopyTilemapToVram(0);
    ScheduleBgCopyTilemapToVram(1);
    PrintListCursor(tListTaskId, COLOR_DARK);
    ReturnToList(taskId);
}

static void Task_InitQuantitySelectUI(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    TMCase_SetWindowBorder2(WIN_SELL_QUANTITY);
    ConvertIntToDecimalStringN(gStringVar1, 1, STR_CONV_MODE_LEADING_ZEROS, MAX_ITEM_DIGITS);
    StringExpandPlaceholders(gStringVar4, gText_xVar1);
    TMCase_Print(WIN_SELL_QUANTITY, FONT_SMALL, gStringVar4, 4, 10, 1, 0, 0, COLOR_MESSAGE);
    SellTM_PrintQuantityAndSalePrice(1, GetItemSellPrice(GetTMCaseItemIdByPosition(tListPosition)) * tItemCount);
    PrintPlayersMoney();
    CreateQuantityScrollArrows();
    ScheduleBgCopyTilemapToVram(0);
    ScheduleBgCopyTilemapToVram(1);
    gTasks[taskId].func = Task_QuantitySelect_HandleInput;
}

static void SellTM_PrintQuantityAndSalePrice(s16 quantity, s32 amount)
{
    FillWindowPixelBuffer(WIN_SELL_QUANTITY, 0x11);
    ConvertIntToDecimalStringN(gStringVar1, quantity, STR_CONV_MODE_LEADING_ZEROS, MAX_ITEM_DIGITS);
    StringExpandPlaceholders(gStringVar4, gText_xVar1);
    TMCase_Print(WIN_SELL_QUANTITY, FONT_SMALL, gStringVar4, 4, 10, 1, 0, 0, COLOR_MESSAGE);
    PrintMoneyAmount(WIN_SELL_QUANTITY, 40, 10, amount, 0);
}

static void Task_QuantitySelect_HandleInput(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    if (AdjustQuantityAccordingToDPadInput(&tItemCount, tQuantity) == 1)
    {
        SellTM_PrintQuantityAndSalePrice(tItemCount, GetItemSellPrice(GetTMCaseItemIdByPosition(tListPosition)) * tItemCount);
    }
    else if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        ClearStdWindowAndFrameToTransparent(WIN_SELL_QUANTITY, FALSE);
        ScheduleBgCopyTilemapToVram(0);
        ScheduleBgCopyTilemapToVram(1);
        RemoveScrollArrows();
        Task_AskConfirmSaleWithAmount(taskId);
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        ClearStdWindowAndFrameToTransparent(WIN_SELL_QUANTITY, FALSE);
        ClearStdWindowAndFrameToTransparent(WIN_MONEY, FALSE);
        ClearDialogWindowAndFrameToTransparent(WIN_MESSAGE, FALSE);
        PutWindowTilemap(WIN_TITLE);
        PutWindowTilemap(WIN_LIST);
        PutWindowTilemap(WIN_DESCRIPTION);
        RemoveMoneyLabelObject();
        ScheduleBgCopyTilemapToVram(0);
        ScheduleBgCopyTilemapToVram(1);
        RemoveScrollArrows();
        PrintListCursor(tListTaskId, COLOR_DARK);
        ReturnToList(taskId);
    }
}

static void Task_PrintSaleConfirmedText(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    PutWindowTilemap(WIN_LIST);
    ScheduleBgCopyTilemapToVram(0);
    CopyItemName(gSpecialVar_ItemId, gStringVar2);
    ConvertIntToDecimalStringN(gStringVar1, GetItemSellPrice(GetTMCaseItemIdByPosition(tListPosition)) * tItemCount, STR_CONV_MODE_LEFT_ALIGN, MAX_MONEY_DIGITS);
    StringExpandPlaceholders(gStringVar4, gText_TurnedOverVar1ForVar2);
    PrintMessageWithFollowupTask(taskId, FONT_SHORT, gStringVar4, Task_DoSaleOfTMs);
}

static void Task_DoSaleOfTMs(u8 taskId)
{
    s16 * data = gTasks[taskId].data;

    PlaySE(SE_SHOP);
    RemoveBagItem(gSpecialVar_ItemId, tItemCount);
    AddMoney(&gSaveBlock1Ptr->money, GetItemSellPrice(gSpecialVar_ItemId) * tItemCount);
    DestroyListMenuTask(tListTaskId, &sTMCaseStaticResources.scrollOffset, &sTMCaseStaticResources.selectedRow);
    TMCaseSetup_GetTMCount();
    TMCaseSetup_InitListMenuPositions();
    InitTMCaseListMenuItems();
    tListTaskId = ListMenuInit(&gMultiuseListMenuTemplate, sTMCaseStaticResources.scrollOffset, sTMCaseStaticResources.selectedRow);
    PrintListCursor(tListTaskId, COLOR_CURSOR_SELECTED);
    PrintMoneyAmountInMoneyBox(WIN_MONEY, GetMoney(&gSaveBlock1Ptr->money), 0);
    gTasks[taskId].func = Task_AfterSale_ReturnToList;
}

static void Task_AfterSale_ReturnToList(u8 taskId)
{
    if (JOY_NEW(A_BUTTON) || JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        ClearStdWindowAndFrameToTransparent(WIN_MONEY, FALSE);
        ClearDialogWindowAndFrameToTransparent(WIN_MESSAGE, FALSE);
        PutWindowTilemap(WIN_DESCRIPTION);
        PutWindowTilemap(WIN_TITLE);
        PutWindowTilemap(WIN_MOVE_INFO_LABELS);
        PutWindowTilemap(WIN_MOVE_INFO);
        RemoveMoneyLabelObject();
        CloseMessageAndReturnToList(taskId);
    }
}

static void InitWindowTemplatesAndPals(void)
{
    u8 i;

    InitWindows(sWindowTemplates);
    DeactivateAllTextPrinters();
    LoadMessageBoxGfx(0, 0x64, BG_PLTT_ID(13));
    LoadUserWindowBorderGfx(0, 0x78, BG_PLTT_ID(14));
    LoadPalette(gStandardMenuPalette, BG_PLTT_ID(15), PLTT_SIZE_4BPP);
    LoadPalette(sPal3Override, BG_PLTT_ID(13) + 6, sizeof(sPal3Override));
    LoadPalette(sPal3Override, BG_PLTT_ID(15) + 6, sizeof(sPal3Override));
    ListMenuLoadStdPalAt(BG_PLTT_ID(12), 1);
    for (i = 0; i < ARRAY_COUNT(sWindowTemplates) - 1; i++)
        FillWindowPixelBuffer(i, 0x00);
    PutWindowTilemap(WIN_LIST);
    PutWindowTilemap(WIN_DESCRIPTION);
    PutWindowTilemap(WIN_TITLE);
    PutWindowTilemap(WIN_MOVE_INFO_LABELS);
    PutWindowTilemap(WIN_MOVE_INFO);
    ScheduleBgCopyTilemapToVram(0);
}

static void TMCase_Print(u8 windowId, u8 fontId, const u8 * str, u8 x, u8 y, u8 letterSpacing, u8 lineSpacing, u8 speed, u8 colorIdx)
{
    AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing, lineSpacing, sTextColors[colorIdx], speed, str);
}

static void TMCase_SetWindowBorder2(u8 windowId)
{
    DrawStdFrameWithCustomTileAndPalette(windowId, FALSE, 0x78, 14);
}

static void PrintMessageWithFollowupTask(u8 taskId, u8 fontId, const u8 * str, TaskFunc func)
{
    DisplayMessageAndContinueTask(taskId, WIN_MESSAGE, 0x64, 13, fontId, GetPlayerTextSpeedDelay(), str, func);
    ScheduleBgCopyTilemapToVram(1);
}

static void PrintTitle(void)
{
    u32 distance = 72 - GetStringWidth(FONT_SHORT, sText_TMCase, 0);
    AddTextPrinterParameterized3(WIN_TITLE, FONT_SHORT, distance / 2, 1, sTextColors[COLOR_LIGHT], 0, sText_TMCase);
}

static void DrawMoveInfoLabels(void)
{
    BlitMenuInfoIcon(WIN_MOVE_INFO_LABELS, MENU_INFO_ICON_TYPE, 0, 0);
    BlitMenuInfoIcon(WIN_MOVE_INFO_LABELS, MENU_INFO_ICON_POWER, 0, 12);
    BlitMenuInfoIcon(WIN_MOVE_INFO_LABELS, MENU_INFO_ICON_ACCURACY, 0, 24);
    BlitMenuInfoIcon(WIN_MOVE_INFO_LABELS, MENU_INFO_ICON_PP, 0, 36);
    CopyWindowToVram(WIN_MOVE_INFO_LABELS, COPYWIN_GFX);
}

static void PrintMoveInfo(u16 itemId)
{
    u8 i;
    u16 move;
    const u8 * str;

    FillWindowPixelRect(WIN_MOVE_INFO, 0, 0, 0, 40, 48);
    if (itemId == ITEM_NONE)
    {
        for (i = 0; i < 4; i++)
            TMCase_Print(WIN_MOVE_INFO, FONT_SHORT, gText_ThreeDashes, 7, 12 * i, 0, 0, TEXT_SKIP_DRAW, COLOR_MOVE_INFO);
        CopyWindowToVram(WIN_MOVE_INFO, COPYWIN_GFX);
    }
    else
    {
        u32 power, accuracy;
        // Draw type icon
        move = ItemIdToBattleMoveId(itemId);
        BlitMenuInfoIcon(WIN_MOVE_INFO, GetMoveType(move) + 1, 0, 0);

        // Print power
        power = GetMovePower(move);
        if (power < 2)
        {
            str = gText_ThreeDashes;
        }
        else
        {
            ConvertIntToDecimalStringN(gStringVar1, power, STR_CONV_MODE_RIGHT_ALIGN, 3);
            str = gStringVar1;
        }
        TMCase_Print(WIN_MOVE_INFO, FONT_SHORT, str, 7, 12, 0, 0, TEXT_SKIP_DRAW, COLOR_MOVE_INFO);

        accuracy = GetMoveAccuracy(move);
        // Print accuracy
        if (accuracy == 0)
        {
            str = gText_ThreeDashes;
        }
        else
        {
            ConvertIntToDecimalStringN(gStringVar1, accuracy, STR_CONV_MODE_RIGHT_ALIGN, 3);
            str = gStringVar1;
        }
        TMCase_Print(WIN_MOVE_INFO, FONT_SHORT, str, 7, 24, 0, 0, TEXT_SKIP_DRAW, COLOR_MOVE_INFO);

        // Print PP
        ConvertIntToDecimalStringN(gStringVar1, GetMovePP(move), STR_CONV_MODE_RIGHT_ALIGN, 3);
        TMCase_Print(WIN_MOVE_INFO, FONT_SHORT, gStringVar1, 7, 36, 0, 0, TEXT_SKIP_DRAW, COLOR_MOVE_INFO);

        CopyWindowToVram(WIN_MOVE_INFO, COPYWIN_GFX);
    }
}

static void PlaceHMTileInWindow(u8 windowId, u8 x, u8 y)
{
    BlitBitmapToWindow(windowId, sTMCaseHM_Gfx, x, y, 16, 12);
}

static void PrintPlayersMoney(void)
{
    PrintMoneyAmountInMoneyBoxWithBorder(WIN_MONEY, 120, 14, GetMoney(&gSaveBlock1Ptr->money));
    AddMoneyLabelObject(19, 11);
}

static void HandleCreateYesNoMenu(u8 taskId, const struct YesNoFuncTable *ptrs)
{
    CreateYesNoMenuWithCallbacks(taskId, &sYesNoWindowTemplate, FONT_SHORT, 0, 2, 0x78, 14, ptrs);
}

static u8 AddContextMenu(u8 * windowId, u8 windowIndex)
{
    if (*windowId == WINDOW_NONE)
    {
        *windowId = AddWindow(&sWindowTemplates_ContextMenu[windowIndex]);
        TMCase_SetWindowBorder2(*windowId);
        ScheduleBgCopyTilemapToVram(0);
    }
    return *windowId;
}

static void RemoveContextMenu(u8 * windowId)
{
    ClearStdWindowAndFrameToTransparent(*windowId, FALSE);
    ClearWindowTilemap(*windowId);
    RemoveWindow(*windowId);
    ScheduleBgCopyTilemapToVram(0);
    *windowId = WINDOW_NONE;
}

static u8 CreateDiscSprite(u16 itemId)
{
    u8 spriteId = CreateSprite(&sSpriteTemplate_Disc, DISC_BASE_X, DISC_BASE_Y, 0);
    u8 tmIdx;
    if (itemId == ITEM_NONE)
    {
        SetDiscSpritePosition(&gSprites[spriteId], DISC_HIDDEN);
        return spriteId;
    }
    else
    {
        tmIdx = GetItemTMHMIndex(itemId);
        SetDiscSpriteAnim(&gSprites[spriteId], tmIdx);
        TintDiscpriteByType(GetMoveType(ItemIdToBattleMoveId(itemId)));
        SetDiscSpritePosition(&gSprites[spriteId], tmIdx);
        return spriteId;
    }
}

static void SetDiscSpriteAnim(struct Sprite *sprite, u8 tmIdx)
{
    if (tmIdx > NUM_TECHNICAL_MACHINES)
        StartSpriteAnim(sprite, ANIM_HM);
    else
        StartSpriteAnim(sprite, ANIM_TM);
}

static void TintDiscpriteByType(u8 type)
{
    u8 palOffset = PLTT_ID(IndexOfSpritePaletteTag(TAG_DISC));
    LoadPalette(sTMSpritePaletteBuffer + sTMSpritePaletteOffsetByType[type], OBJ_PLTT_OFFSET + palOffset, PLTT_SIZE_4BPP);
}

static void SetDiscSpritePosition(struct Sprite *sprite, u8 tmIdx)
{
    s32 x, y;
    if (tmIdx == DISC_HIDDEN)
    {
        x = 27;
        y = 54;
        sprite->y2 = DISC_CASE_DISTANCE;
    }
    else
    {
        if (FRLG_I_HMS_FIRST)
        {
            if (tmIdx > NUM_TECHNICAL_MACHINES)
                tmIdx -= NUM_TECHNICAL_MACHINES;
            else
                tmIdx += NUM_HIDDEN_MACHINES;
        }

        x = DISC_BASE_X - Q_24_8_TO_INT(Q_24_8(14 * tmIdx) / (NUM_TECHNICAL_MACHINES + NUM_HIDDEN_MACHINES));
        y = DISC_BASE_Y + Q_24_8_TO_INT(Q_24_8(8 * tmIdx) / (NUM_TECHNICAL_MACHINES + NUM_HIDDEN_MACHINES));
    }
    sprite->x = x;
    sprite->y = y;
}

#define sItemId  data[0]
#define sState   data[1]

static void SwapDisc(u8 spriteId, u16 itemId)
{
    gSprites[spriteId].sItemId = itemId;
    gSprites[spriteId].sState = 0;
    gSprites[spriteId].callback = SpriteCB_SwapDisc;
}

static void SpriteCB_SwapDisc(struct Sprite *sprite)
{
    switch (sprite->sState)
    {
    case 0:
        // Lower old disc back into case
        if (sprite->y2 >= DISC_CASE_DISTANCE)
        {
            // Old disc is hidden, set up new disc
            if (sprite->sItemId != ITEM_NONE)
            {
                sprite->sState++;
                TintDiscpriteByType(GetMoveType(ItemIdToBattleMoveId(sprite->sItemId)));
                sprite->sItemId = GetItemTMHMIndex(sprite->sItemId);
                SetDiscSpriteAnim(sprite, sprite->sItemId);
                SetDiscSpritePosition(sprite, sprite->sItemId);
            }
            else
                sprite->callback = SpriteCallbackDummy;
        }
        else
        {
            sprite->y2 += DISC_Y_MOVE;
        }
        break;
    case 1:
        // Raise new disc out of case
        if (sprite->y2 <= 0)
            sprite->callback = SpriteCallbackDummy;
        else
            sprite->y2 -= DISC_Y_MOVE;
    }
}

// - 3 excludes TYPE_NONE, TYPE_MYSTERY, and TYPE_STELLAR
#define NUM_DISC_COLORS ((NUMBER_OF_MON_TYPES - 3) * 16)

static void LoadDiscTypePalettes(void)
{
    struct SpritePalette spritePalette;

    sTMSpritePaletteBuffer = Alloc(NUM_DISC_COLORS * sizeof(u16));
    CpuCopy16(gTMCaseDiscTypes1_Pal, sTMSpritePaletteBuffer, sizeof(gTMCaseDiscTypes1_Pal)); // Copy over the first 16 types within
    CpuCopy16(gTMCaseDiscTypes2_Pal, sTMSpritePaletteBuffer + 0x100, sizeof(gTMCaseDiscTypes2_Pal)); // Copy over the rest
    spritePalette.data = sTMSpritePaletteBuffer + NUM_DISC_COLORS;
    spritePalette.tag = TAG_DISC;
    LoadSpritePalette(&spritePalette);
}

bool32 CheckIfInTMCase(void)
{
    return sIsInTMCase;
}

#undef sItemId
#undef sState

#undef tListTaskId
#undef tPosition
#undef tQuantity
#undef tItemCount
