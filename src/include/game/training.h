#ifndef IN_GAME_TRAINING_TRAINING_H
#define IN_GAME_TRAINING_TRAINING_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

extern u8 g_FrIsValidWeapon;
extern s32 g_FrWeaponNum;
extern u8 g_ChrBioSlot;
extern u8 var80088bb4;
extern u8 g_HangarBioSlot;
extern u8 g_DtSlot;

bool ciIsTourDone(void);
u8 ciGetFiringRangeScore(s32 weaponindex);
void frSaveScoreIfBest(s32 weaponindex, s32 difficulty);
u8 frIsWeaponFound(s32 weapon);
void frSetWeaponFound(s32 weaponnum);
s32 ciIsStageComplete(s32 stageindex);
bool func0f19cbcc(s32 weapon);
bool frIsWeaponAvailable(s32 weapon);
u32 frGetWeaponIndexByWeapon(u32 weaponnum);
u32 frGetWeaponScriptIndex(u32 weaponnum);
s32 frIsClassicWeaponUnlocked(u32 weapon);
s32 frGetSlot(void);
void frSetSlot(s32 slot);
u32 frGetWeaponBySlot(s32 slot);
s32 frGetNumWeaponsAvailable(void);
void frInitLighting(void);
void frRestoreLighting(void);
void frReset(void);
void *frLoadRomData(u32 len);
void frSetDifficulty(s32 difficulty);
u32 frGetDifficulty(void);
void frInitDefaults(void);
struct frdata *frGetData(void);
u32 frResolveFrPad(u32 arg0);
bool frIsDifficulty(u32 difficulties);
void frExecuteWeaponScript(s32 scriptindex);
void frSetTargetProps(void);
bool frTargetIsAtScriptStart(s32 targetnum);
char *frGetInstructionalText(u32 index);
void frExecuteHelpScript(void);
bool frExecuteTargetScript(s32 targetnum);
void frHideAllTargets(void);
void frInitTargets(void);
void frCloseAndLockDoor(void);
void frUnlockDoor(void);
void frLoadData(void);
u32 frInitAmmo(s32 weapon);
void frBeginSession(s32 weapon);
char *frGetWeaponDescription(void);
void frEndSession(bool hidetargets);
bool frWasTooInaccurate(void);
void frSetFailReason(s32 failreason);
void frSetCompleted(void);
bool frIsTargetOneHitExplodable(struct prop *prop);
f32 frGetTargetAngleToPos(struct coord *a, f32 angle, struct coord *b);
bool frIsTargetFacingPos(struct prop *prop, struct coord *pos);
struct prop *frChooseAutogunTarget(struct coord *autogunpos);
bool frIsAmmoWasted(void);
void frTick(void);
void func0f1a0924(struct prop *prop);
bool frChooseFarsightTarget(void);
s32 frIsInTraining(void);
void frCalculateHit(struct defaultobj *obj, struct coord *hitpos, f32 maulercharge);
void frIncrementNumShots(void);
bool ciIsChrBioUnlocked(u32 bodynum);
struct chrbio *ciGetChrBioByBodynum(u32 bodynum);
char *ciGetChrBioDescription(void);
s32 ciGetNumUnlockedChrBios(void);
s32 ciGetChrBioBodynumBySlot(s32 slot);
struct miscbio *ciGetMiscBio(s32 index);
bool ciIsMiscBioUnlocked(s32 index);
s32 ciGetNumUnlockedMiscBios(void);
s32 ciGetMiscBioIndexBySlot(s32 slot);
char *ciGetMiscBioDescription(void);
bool ciIsHangarBioAVehicle(s32 index);
struct hangarbio *ciGetHangarBio(s32 index);
bool ciIsHangarBioUnlocked(u32 bioindex);
s32 ciGetNumUnlockedLocationBios(void);
s32 ciGetNumUnlockedHangarBios(void);
s32 ciGetHangarBioIndexBySlot(s32 slot);
char *ciGetHangarBioDescription(void);
struct trainingdata *dtGetData(void);
void dtRestorePlayer(void);
void dtPushEndscreen(void);
void dtTick(void);
void func0f1a1ac0(void);
void dtBegin(void);
void dtEnd(void);
bool dtIsAvailable(s32 deviceindex);
s32 dtGetNumAvailable(void);
s32 dtGetIndexBySlot(s32 wantindex);
u32 dtGetWeaponByDeviceIndex(s32 deviceindex);
u32 ciGetStageFlagByDeviceIndex(u32 deviceindex);
char *dtGetDescription(void);
char *dtGetTip1(void);
char *dtGetTip2(void);
struct trainingdata *getHoloTrainingData(void);
void htPushEndscreen(void);
void htTick(void);
void func0f1a2198(void);
void htBegin(void);
void htEnd(void);
bool htIsUnlocked(u32 value);
s32 htGetNumUnlocked(void);
s32 htGetIndexBySlot(s32 slot);
char *htGetName(s32 index);
u32 func0f1a25c0(s32 index);
char *htGetDescription(void);
char *htGetTip1(void);
char *htGetTip2(void);

#if VERSION >= VERSION_JPN_FINAL
void frGetGoalTargetsText(char *buffer1, char *buffer2);
void frGetGoalScoreText(char *buffer1, char *buffer2);
bool frGetMinAccuracy(char *buffer1, f32 accuracy, char *buffer2);
bool frGetHudMiddleSubtext(char *buffer1, char *buffer2);
bool frGetFeedback(char *score, char *zone, char *extrabuffer);
Gfx *frRenderHudElement(Gfx *gdl, s32 x, s32 y, char *string1, char *string2, char *string3, u32 colour, u8 alpha);
#else
void frGetGoalTargetsText(char *buffer);
void frGetGoalScoreText(char *buffer);
bool frGetMinAccuracy(char *buffer, f32 accuracy);
bool frGetHudMiddleSubtext(char *buffer);
bool frGetFeedback(char *score, char *zone);
Gfx *frRenderHudElement(Gfx *gdl, s32 x, s32 y, char *string1, char *string2, u32 colour, u8 alpha);
#endif

void frGetTargetsDestroyedValue(char *buffer);
void frGetScoreValue(char *buffer);
f32 frGetAccuracy(char *buffer);
bool frFormatTime(char *buffer);
Gfx *frRenderHud(Gfx *gdl);

#endif
