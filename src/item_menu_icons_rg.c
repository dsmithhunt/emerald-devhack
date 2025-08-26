#include "global.h"
#include "main.h"
#include "data.h"
#include "graphics.h"
#include "item_icon.h"
#include "item_menu_icons_rg.h"

#define NUM_SWAP_LINE_SPRITES 9

enum {
    TAG_SWAP_LINE = 100,
    TAG_ITEM_ICON,
    TAG_ITEM_ICON_ALT,
    TAG_ARROWS = 110,
};

enum {
    ANIM_SWAP_LINE_START,
    ANIM_SWAP_LINE_MID,
    ANIM_SWAP_LINE_END,
};

enum {
    SPR_SWAP_LINE_START,
    SPR_ITEM_ICON = SPR_SWAP_LINE_START + NUM_SWAP_LINE_SPRITES,
    SPR_ITEM_ICON_ALT,
    SPR_COUNT
};

static EWRAM_DATA u8 sItemMenuIconSpriteIds[SPR_COUNT] = {};

static const struct OamData sOamData_SwapLine = 
{
    .affineMode = ST_OAM_AFFINE_OFF,
    .shape = SPRITE_SHAPE(16x16),
    .size = SPRITE_SIZE(16x16),
    .priority = 1,
    .paletteNum = 1
};

static const union AnimCmd sAnim_SwapLine_Start[] = 
{
    ANIMCMD_FRAME(0, 0),
    ANIMCMD_END
};

static const union AnimCmd sAnim_SwapLine_Mid[] = 
{
    ANIMCMD_FRAME(4, 0),
    ANIMCMD_END
};

static const union AnimCmd sAnim_SwapLine_End[] = 
{
    ANIMCMD_FRAME(0, 0, .hFlip = TRUE),
    ANIMCMD_END
};

static const union AnimCmd *const sAnims_SwapLine[] = {
    [ANIM_SWAP_LINE_START] = sAnim_SwapLine_Start,
    [ANIM_SWAP_LINE_MID]   = sAnim_SwapLine_Mid,
    [ANIM_SWAP_LINE_END]   = sAnim_SwapLine_End
};

const struct CompressedSpriteSheet sBagSwapSpriteSheet =
{
    .data = gSwapLineGfx,
    .size = 0x100,
    .tag = TAG_SWAP_LINE
};

const struct SpritePalette sBagSwapSpritePalette =
{
    .data = gSwapLinePal,
    .tag = TAG_SWAP_LINE
};

static const struct SpriteTemplate sSpriteTemplate_SwapLine =
{
    .tileTag = TAG_SWAP_LINE,
    .paletteTag = TAG_SWAP_LINE,
    .oam = &sOamData_SwapLine,
    .anims = sAnims_SwapLine,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

void ItemRG_ResetItemMenuIconState(void)
{
    u16 i;

    for (i = 0; i < SPR_COUNT; i++)
        sItemMenuIconSpriteIds[i] = SPRITE_NONE;
}

void ItemRG_CreateSwapLine(void)
{
    u8 i;
    u8 * spriteIds = &sItemMenuIconSpriteIds[SPR_SWAP_LINE_START];

    for (i = 0; i < NUM_SWAP_LINE_SPRITES; i++)
    {
        spriteIds[i] = CreateSprite(&sSpriteTemplate_SwapLine, i * 16 + 96, 7, 0);
        switch (i)
        {
        case 0:
            // ANIM_SWAP_LINE_START, by default
            break;
        case NUM_SWAP_LINE_SPRITES - 1:
            StartSpriteAnim(&gSprites[spriteIds[i]], ANIM_SWAP_LINE_END);
            break;
        default:
            StartSpriteAnim(&gSprites[spriteIds[i]], ANIM_SWAP_LINE_MID);
            break;
        }
        gSprites[spriteIds[i]].invisible = TRUE;
    }
}

void ItemRG_SetSwapLineInvisibility(bool8 invisible)
{
    u8 i;
    u8 * spriteIds = &sItemMenuIconSpriteIds[SPR_SWAP_LINE_START];

    for (i = 0; i < NUM_SWAP_LINE_SPRITES; i++)
        gSprites[spriteIds[i]].invisible = invisible;
}

void ItemRG_UpdateSwapLinePos(s16 x, u16 y)
{
    u8 i;
    u8 * spriteIds = &sItemMenuIconSpriteIds[SPR_SWAP_LINE_START];

    for (i = 0; i < NUM_SWAP_LINE_SPRITES; i++)
    {
        gSprites[spriteIds[i]].x2 = x;
        gSprites[spriteIds[i]].y = y + 7;
    }
}

void ItemRG_DrawItemIcon(u16 itemId, u8 idx)
{
    u8 spriteId;
    u8 *spriteIds = &sItemMenuIconSpriteIds[SPR_ITEM_ICON];

    if (spriteIds[idx] == SPRITE_NONE)
    {
        FreeSpriteTilesByTag(TAG_ITEM_ICON + idx);
        FreeSpritePaletteByTag(TAG_ITEM_ICON + idx);
        spriteId = AddItemIconSprite(TAG_ITEM_ICON + idx, TAG_ITEM_ICON + idx, itemId);
        if (spriteId != MAX_SPRITES)
        {
            spriteIds[idx] = spriteId;
            gSprites[spriteId].oam.priority = 0;
            gSprites[spriteId].x2 = 24;
            gSprites[spriteId].y2 = 140;
        }
    }
}

void CreateBerryPouchItemIcon(u16 itemId, u8 idx)
{
    u8 * spriteIds = &sItemMenuIconSpriteIds[SPR_ITEM_ICON];
    u8 spriteId;

    if (spriteIds[idx] == SPRITE_NONE)
    {
        // Either TAG_ITEM_ICON or TAG_ITEM_ICON_ALT
        FreeSpriteTilesByTag(TAG_ITEM_ICON + idx);
        FreeSpritePaletteByTag(TAG_ITEM_ICON + idx);
        spriteId = AddItemIconSprite(TAG_ITEM_ICON + idx, TAG_ITEM_ICON + idx, itemId);
        if (spriteId != MAX_SPRITES)
        {
            spriteIds[idx] = spriteId;
            gSprites[spriteId].x2 = 24;
            gSprites[spriteId].y2 = 147;
        }
    }
}

void ItemRG_EraseItemIcon(u8 idx)
{
    u8 *spriteIds = &sItemMenuIconSpriteIds[SPR_ITEM_ICON];
    if (spriteIds[idx] != SPRITE_NONE)
    {
        DestroySpriteAndFreeResources(&gSprites[spriteIds[idx]]);
        spriteIds[idx] = SPRITE_NONE;
    }
}
