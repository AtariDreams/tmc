
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "global.h"
#include "entity.h"
#include "manager.h"
#include "coord.h"
#include "player.h"
#include "room.h"
#include "structures.h"
#include "script.h"

// Identified - to be sorted into header files
extern void ShowNPCDialogue(Entity*, Dialog*);
extern void DoFade(u32, u32);
extern u32 CheckKinstoneFused(u32);
extern void ForceEquipItem(u32, u32);
extern void LoadRoomEntityList(EntityData* listPtr);
extern u32 GetAnimationState(Entity*);
extern void SetChildOffset(Entity*, s32, s32, s32);
extern Entity* CreatePlayerItem(u32, u32, u32, u32);
extern u32 GetTileTypeByPos(s32 x, s32 y, u32 layer);
extern u32 GetTileType(u32 pos, u32 layer);
extern void SetTile(u32, u32, u32);
extern void SetDirtTile(u32);
extern void LoadRoomTileEntities(); // tba
extern Entity* CreateDeathFx(Entity*, u32, u32);
extern void UpdateAnimationVariableFrames(Entity*, u32);
extern u8* GetSpriteSubEntryOffsetDataPointer(u32, u32);
extern bool32 LoadFixedGFX(Entity*, u32);
extern void CreateItemEntity(u32, u32, u32);
extern u32 ProcessMovement(Entity*);
extern void MenuFadeIn(u32, u32);
extern void LoadResourceAsync(const void*, u32, u32);
extern void LoadPaletteGroup(u32);
extern void TryLoadPrologueHyruleTown(void);
extern Manager* GetEmptyManager(void);
extern void LoadGfxGroup(u32);
extern void EnqueueSFX(u32);
extern void ResetPlayer(void);
extern u32 IsItemEquipped(u32);
extern void DeleteManager(Manager*);
extern bool32 CheckPlayerInRegion(u32 centerX, u32 centerY, u32 radiusX, u32 radiusY);
extern Entity* CreateProjectileWithParent(Entity*, u8, u8);
extern u32 GetBottleContaining(u32);
extern u32 GetTileTypeByEntity(Entity*);
extern u32 GetSaleItemConfirmMessageID(u32);
extern void FlushSprites(void);
extern void DispReset(u32);
extern void InitSoundPlayingInfo(void);
extern Entity* CreateProjectile(u32);
extern void RegisterPlayerHitbox();
extern s32 GetItemPrice();
extern void DoExitTransition(ScreenTransitionData*);
extern void CreateDustAt(s32, s32, u32);
extern void PutItemOnSlot(u32 itemID);
extern Entity* CreateSpeechBubbleQuestionMark(Entity*, s32, s32);
extern Entity* CreateSpeechBubbleExclamationMark(Entity*, s32, s32);
extern Entity* CreateSpeechBubbleSleep(Entity*, s32, s32);
extern u32 CheckPlayerProximity(u32, u32, u32, u32);
extern void ChangeLightLevel(s32);

// Unidentified
extern u32 sub_0806ED78(Entity*);
extern u32 sub_0805ACC0(Entity*);
extern u32 sub_0801E99C(Entity*);
extern Entity* sub_080873AC(Entity*, u32, u32);
extern void sub_08078778(Entity*);
extern void sub_080787A8(Entity*, u32);
extern void sub_0806F118(Entity*);
extern void sub_080791D0();
extern void sub_0805EC9C();
extern void sub_0805EC60(Entity*);
extern u32 sub_080045D4(s16, s16, u32, u32);
extern void sub_0806F69C(Entity*);
extern void sub_0806D0B0(Entity*);
extern void sub_0806D02C(Entity*);
extern u32 sub_0806F5A4(u32);
extern void sub_08078784(Entity*, u32);
extern s32 sub_0806ED9C(Entity*, u32, u32);
extern void sub_0807000C(Entity*);
extern void sub_08068BEC(Entity*, u32);
extern s32 sub_0806F078(Entity*, s32);
extern void ChangeObjPalette(Entity*, u32);
extern void sub_0806FD3C(Entity*);
extern void sub_0805ED14(u32*);
extern void sub_080A7C18(u32, u32, u32);
extern void sub_0804AA30(Entity*, void (*const funcs[])(Entity*));
extern Entity* sub_0804A9FC(Entity*, u32);
extern void sub_0804A720(Entity*);
extern u32 sub_080AEFE0(Entity*);
extern u32 sub_08049FA0(Entity*);
extern u32 sub_08049FDC(Entity*, u32);
extern u32 EntityInRectRadius(Entity*, Entity*, u32, u32);
extern u32 sub_08049EE4(Entity*);
extern void sub_08077E54(ItemBehavior*);
extern void sub_080042BA(Entity*, u32);
extern bool32 sub_08077F24(ItemBehavior*, u32);
extern void sub_08079184();
extern void sub_08077F50(ItemBehavior* beh, u32 arg1);
extern void sub_0807AA80(Entity*);
extern s32 sub_0807887C(Entity*, u32, u32);
extern s32 sub_08078904();
extern void sub_080AD9B0(void);
extern void sub_080AD918(void);
extern void sub_0801E104(void);
extern void sub_080A57F4(void);
extern void sub_08030118(u32);
extern void sub_080575C8(u32);
extern void sub_08057688(void);
extern void sub_080580B0(u32);
extern void sub_080751E8(u32, u32, void*);
extern void sub_08052CA4(u32, u32, u32, u32);
extern void sub_08052878(void);
extern void sub_0808091C(ScreenTransitionData*, u32);
extern void sub_0805BC4C(void);
extern void sub_0807BB68(u32*, u32, u32);
extern void sub_08054570(void);
extern void sub_08059278(void);
extern void sub_0804C128(u32);
extern void sub_08058324(u32);
extern void sub_0804C2F0(void);
extern void sub_0801AFE4(void);
extern u32 sub_08060354(void);
extern void sub_08057E64(void);
extern void sub_0809F814(u32);
extern void sub_080300E8(void);
extern void sub_08058D34(void);
extern void sub_0807AABC(Entity*);
extern void UpdateGlobalProgress(void);
extern void sub_0805B4D0(u32);
extern void sub_0804D0B4(void);
extern void sub_080534AC();
extern void sub_0807BA8C(u32, u32);
extern void sub_0804D9B0();
extern void sub_0807BB98(u32, u32, u32, u32);
extern void sub_0801D000(u32);
extern void sub_08018C58(u32);
extern void sub_0804E150(void);
extern void sub_080AF284(void);
extern void sub_080A71C4(u32, u32, u32, u32);
extern void sub_08054564();
extern void sub_0801DD58(u32, u32);
extern void sub_0804ED18();
extern void sub_080AF2E4(void);
extern void sub_0804F578(void);
extern void sub_08059994(void);
extern s32 sub_0801CFA8(u32);
extern void sub_080ADA14(u32, u32); // trampoline to sub_080B27F4
extern void sub_0801E1B8(u32, u32);
extern void sub_0801E1EC(s32, s32, s32);
extern void sub_08050008(void);
extern void sub_080A3B74(void);
extern void sub_080A4054(void);
extern void sub_0801C1D4(void);
extern void sub_0801C208(void);
extern void sub_080A4D34(void);
extern u32 sub_080A4494(void);
extern void sub_080A4528(void);
extern void sub_080A4398(void);
extern void sub_0801E738(u32);
extern void sub_080A7114(u32);
extern void sub_08001324(Entity*);
extern void sub_08001242(Entity*);
extern u32 sub_08003FC4(Entity*, u32);
extern u32 sub_080043E8(Entity*);
extern void sub_08001290(Entity*, u32);
extern void sub_08004596(Entity*, u32);
extern u32 sub_080045B4(Entity*, u32, u32);
extern u32 sub_0807953C(void);
extern void sub_080AE068(Entity*);
extern u32 sub_0800445C(Entity*);
extern void sub_0807A108(void);
extern u32 sub_0801766C(Entity*);
extern void sub_08004168(Entity*);
extern u32 sub_08052638(u32);
extern void sub_08056208(void);
extern void sub_08050384();
extern u32 sub_0806F520();
extern void sub_0806F4E8(Entity*);
extern u32 sub_0806F3E4(Entity*);
extern void sub_0804A7D4(Entity*);
extern void sub_08033744(Entity*);
extern void sub_0800417E(Entity*, u32);
extern void sub_080784C8();
extern u32 sub_0808288C(Entity*, u32, u32, u32);
extern void sub_0806FDA0(Entity*);
extern bool32 LoadSwapGFX(Entity*, u16, u32);
extern u32 sub_08016A30(Entity*);
extern void sub_08077728();
extern void sub_0807AEE4();
extern u32 sub_08078EFC();
extern void sub_0807921C();
extern void sub_0807A1B8();
extern void sub_08079938();
extern void sub_0807ACCC(Entity*);
extern void sub_080A2BE4(Entity*, u32);
extern u32 sub_08097ADC(Entity*);
extern void sub_08097B24(Entity*);
extern u32 sub_08079F8C(void);
extern void sub_080787CC(Entity*);
extern void sub_080526F8(s32);
extern u32 sub_080044EC(Entity*, u32);
extern u32 sub_080002B8(Entity*);
extern u32 sub_08049F84(Entity*, u32);
extern void sub_0802F45C(Entity*);
extern u32 sub_0800419C(Entity*, Entity*, u32, u32);
extern void sub_08004542(Entity*);
extern void sub_08077B20();
extern bool32 sub_080040A8(Entity*);
extern u32 sub_08017850(Entity*);
extern void sub_080809D4(void);
extern void sub_08080CB4(Entity*);
extern u32 sub_0800442E(Entity*);
extern void sub_08081404(Entity*, u32);
extern void sub_0807B7D8(u32, u32, u32);
extern void RegisterTransitionManager(void*, void (*)(), void (*)());
extern void sub_0800451C(Entity*);
extern u32 sub_080002F0(u32, u32, u32);
extern u32 sub_080040D8(Entity*, u8*, s32, s32);
extern void sub_08053320();
extern void SetColor(u32, u32);
extern u32 sub_0805F8F8(u32);
extern void sub_08002724(void*, u8*);
extern void sub_080026C4(u8*, u8*, u8*, u32);
extern void sub_080026F2(u8*, void*, u8*, u32);
extern u32 sub_0805F7A0(u32);
extern u32* sub_0805F25C(u32);
extern u32 sub_080045DA(s32, s32);
u32 sub_0806FCB8(Entity*, u32, u32, u32);
extern void sub_080A1D70(Entity*, u32);
extern void sub_0806F62C(Entity*, u32, u32);
extern void sub_080A1ED0(u32, u32, u32);
extern u32 sub_0806F5B0(u32);
extern void sub_0801DFB4(Entity*, u32, u32, u32);
extern void sub_0801E00C();
extern void sub_08050038(u32);
extern void sub_080500F4(u32);
extern void sub_08050110(u32, u32, u32, u32);
extern u32 sub_08052734(); // has Dungeon Map?
extern u32 sub_08052764(); // has Dungeon Compass?
extern u32 sub_0805279C(); // has Dungeon Big Key?
extern u32 sub_080527CC(); // num Dungeon small keys?
extern void sub_08078790(Entity*, u32);
extern void sub_080788E0(Entity*);
extern void sub_08078AA8(u32, u32);
extern void sub_08078B48(void);
extern void sub_0807919C();
extern void sub_0807CAA0(u32, u32);
extern void sub_080085B0(Entity*);
extern u32 sub_08079D48();
extern u32 sub_08008B22();
extern void sub_080791BC9();
extern void sub_080791BC();
extern void MessageClose();
extern u32 sub_080542AC(u32);
extern u32 sub_08079FC4(u32);
extern void sub_0800455E(Entity*);
extern u32* sub_08008790(Entity*, u32);
extern void sub_0804ACF8();
extern void sub_08073904(Entity*);
extern u32 CheckHeaderValid(void);
extern void sub_08004484(Entity*, Entity*);
extern void sub_0805F8E4(u32 r0, WStruct* r1);
extern u32 sub_08002632(Entity*);
extern void sub_0807879C(Entity*);
extern void sub_080787C0(Entity*);
extern void sub_080787B4(Entity*);
extern void sub_0808C650(Entity*, u32);
extern u32 sub_0808C67C(void);
extern void sub_0808C688(void);

extern Entity* sub_08077C94(ItemBehavior*, u32);
extern Entity* sub_08077C0C(ItemBehavior*, u32);
extern void sub_08077D38(ItemBehavior*, u32);
extern void sub_08077E78(ItemBehavior*, u32);
extern void UpdateItemAnim(ItemBehavior*);
extern u32 sub_0806F948(Entity*);
extern void sub_08077DF4(ItemBehavior*, u32);
extern void sub_08077BB8(ItemBehavior*);
extern bool32 sub_08077EFC(ItemBehavior*);

extern void sub_08078E84(Entity*, Entity*);
extern void sub_080042D0(Entity*, u32, u16);

extern u32 sub_080002A8(u32, u32, u32);
extern void sub_080806BC(u32, u32, u32, u32);

extern void sub_080186C0(u32);
extern void sub_0801855C(void);

extern u32 sub_0807CAEC(u32);
extern void sub_0807CAC8(u32);
extern void LoadObjPalette(Entity*, u32);

void sub_0804B3C4(void*);
#endif
