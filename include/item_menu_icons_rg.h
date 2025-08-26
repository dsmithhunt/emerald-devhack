#ifndef GUARD_ITEM_MENU_ICONS_RG_H
#define GUARD_ITEM_MENU_ICONS_RG_H

void ItemRG_ResetItemMenuIconState(void);
void ItemRG_CreateSwapLine(void);
void ItemRG_SetSwapLineInvisibility(bool8 invisible);
void ItemRG_UpdateSwapLinePos(s16 x, u16 y);
void ItemRG_DrawItemIcon(u16 itemId, u8 idx);
void CreateBerryPouchItemIcon(u16 itemId, u8 idx);
void ItemRG_EraseItemIcon(u8 idx);

#endif //GUARD_ITEM_MENU_ICONS_RG_H