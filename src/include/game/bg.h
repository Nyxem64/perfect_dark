#ifndef IN_GAME_BG_H
#define IN_GAME_BG_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

void roomUnpauseProps(u32 roomnum, bool tintedglassonly);
void roomSetOnscreen(s32 room, s32 draworder, struct screenbox *arg2);
void func0f158108(s32 roomnum, u8 *arg1, u8 *arg2);
struct var800a4640_00 *func0f158140(s32 roomnum);
Gfx *bg0f158184(Gfx *gdl, struct xraydata *xraydata);
Gfx *func0f158400(Gfx *gdl, struct xraydata *xraydata, s16 vertices1[3], s16 vertices2[3], s16 vertices3[3], u32 colour1, u32 colour2, u32 colour3);
void bgChooseXrayVtxColour(bool *inrange, s16 vertex[3], u32 *colour, struct xraydata *xraydata);
Gfx *func0f158d9c(Gfx *gdl, struct xraydata *xraydata, s16 arg2[3], s16 arg3[3], s16 arg4[3], s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10);
Gfx *bg0f1598b4(Gfx *gdl, Gfx *gdl2, struct gfxvtx *vertices, s16 arg3[3]);
Gfx *bgRenderRoomXrayPass(Gfx *gdl, s32 roomnum, struct roomblock *blocks, bool recurse, s16 arg4[3]);
Gfx *bgRenderRoomInXray(Gfx *gdl, s32 roomnum);
Gfx *bgRenderSceneInXray(Gfx *gdl);
Gfx *bgRenderScene(Gfx *gdl);
Gfx *bgRenderArtifacts(Gfx *gdl);
void bgLoadFile(void *memaddr, u32 offset, u32 len);
s32 stageGetIndex2(s32 stagenum);
f32 portal0f15b274(s32 portal);
u8 func0f15b4c0(s32 portal);
u32 not(u32 arg);
u32 xorBabebabe(u32 value);
void bgReset(s32 stagenum);
void bgBuildTables(s32 stagenum);
void bgStop(void);
void func0f15c880(f32 arg0);
f32 func0f15c888(void);
f32 currentPlayerGetScaleBg2Gfx(void);
void currentPlayerSetScaleBg2Gfx(f32 arg0);
void func0f15c920(void);
void bgTick(void);
Gfx *bgRender(Gfx *gdl);
Gfx *currentPlayerScissorToViewport(Gfx *gdl);
Gfx *currentPlayerScissorWithinViewportF(Gfx *gdl, f32 viewleft, f32 viewtop, f32 viewright, f32 viewbottom);
Gfx *currentPlayerScissorWithinViewport(Gfx *gdl, s32 viewleft, s32 viewtop, s32 viewright, s32 viewbottom);
void func0f15cd28(void);
bool func0f15cd90(u32 room, struct screenbox *arg1);
bool func0f15d08c(struct coord *a, struct coord *b);
bool g_PortalGetScreenBbox(s32 portal, struct screenbox *arg1);
Gfx *boxRenderBorder(Gfx *gdl, s32 x1, s32 y1, s32 x2, s32 y2);
bool boxGetIntersection(struct screenbox *a, struct screenbox *b);
void boxExpand(struct screenbox *a, struct screenbox *b);
void boxCopy(struct screenbox *dst, struct screenbox *src);
bool roomIsOnscreen(s32 room);
bool roomIsStandby(s32 room);
bool roomIsOnPlayerScreen(s32 room, u32 playernum);
bool roomIsOnPlayerStandby(s32 room, u32 aibotindex);
s32 portalFindNumByVertices(struct portalvertices *pvertices);
u32 bgInflate(u8 *src, u8 *dst, u32 len);
Gfx *roomGetNextGdlInBlock(struct roomblock *block, Gfx *start, Gfx *end);
Gfx *roomGetNextGdlInLayer(s32 roomnum, Gfx *start, u32 types);
struct gfxvtx *roomFindVerticesForGdl(s32 roomnum, Gfx *gdl);
void bgLoadRoom(s32 roomnum);
void bgUnloadRoom(s32 room);
void bgUnloadAllRooms(void);
void bgGarbageCollectRooms(s32 bytesneeded, bool desparate);
void bgTickRooms(void);
Gfx *bgRenderRoomPass(Gfx *gdl, s32 roomnum, struct roomblock *blocks, bool arg3);
Gfx *bgRenderRoomOpaque(Gfx *gdl, s32 roomnum);
Gfx *bgRenderRoomXlu(Gfx *gdl, s32 roomnum);
s32 bgPopulateVtxBatchType(s32 roomnum, struct vtxbatch *batches, Gfx *gdl, s32 batchindex, struct gfxvtx *vertices, s32 arg5);
void bgFindRoomVtxBatches(s32 roomnum);
bool func0f15f20c(struct coord *arg0, struct coord *arg1, s32 *arg2, s32 *arg3);
bool bgTestLineIntersectsBbox(struct coord *arg0, struct coord *arg1, struct coord *arg2, struct coord *arg3);
bool bgTestHitOnObj(struct coord *arg0, struct coord *arg1, struct coord *arg2, Gfx *gdl, Gfx *gdl2, struct gfxvtx *vertices, struct hitthing *hitthing);
bool bgTestHitOnChr(struct model *model, struct coord *arg1, struct coord *arg2, struct coord *arg3, Gfx *arg4, Gfx *arg5, struct gfxvtx *vertices, f32 *arg7, struct hitthing *hitthing);
bool bgTestHitInVtxBatch(struct coord *arg0, struct coord *arg1, struct coord *arg2, struct vtxbatch *batches, s32 roomnum, struct hitthing *hitthing);
s32 bg0f1612e4(struct coord *bbmin, struct coord *bbmax, struct coord *arg2, struct coord *arg3, struct coord *arg4, struct coord *arg5);
bool bgTestHitInRoom(struct coord *frompos, struct coord *topos, s32 roomnum, struct hitthing *hitthing);
bool roomIsLoaded(s32 room);
bool roomContainsCoord(struct coord *pos, s16 roomnum);
bool func0f161c08(struct coord *arg0, s16 roomnum);
bool func0f161d30(struct coord *arg0, s16 roomnum);
bool func0f162128(struct coord *arg0, s16 roomnum);
void bgFindRoomsByPos(struct coord *pos, s16 *inrooms, s16 *aboverooms, s32 max, s16 *bestroom);
bool bgPushValue(bool value);
bool bgPopValue(void);
bool bgGetNthValueFromEnd(s32 offset);
struct bgcmd *bgExecuteCommandsBranch(struct bgcmd *cmd, bool s2);
struct bgcmd *bgExecuteCommands(struct bgcmd *cmd);
void bgTickPortalsXray(void);
void func0f1632d4(s16 roomnum1, s16 roomnum2, s16 draworder, struct screenbox *box);
void func0f163528(struct var800a4d00 *arg0);
bool func0f163904(void);
void bgChooseRoomsToLoad(void);
void bgTickPortals(void);
Gfx *func0f164150(Gfx *gdl);
s32 roomsGetActive(s16 *rooms, s32 len);
s32 roomGetNeighbours(s32 room, s16 *rooms, s32 len);
bool roomsAreNeighbours(s32 roomnum1, s32 roomnum2);
void currentPlayerCalculateScreenProperties(void);
void bgExpandRoomToPortals(s32 roomnum);
void portalSwapRooms(s32 portal);
void func0f164ab8(s32 portalnum);
void room0f164c64(s32 roomnum);
void portalSetOpen(s32 portal, bool open);
s32 bg0f164e8c(struct coord *arg0, struct coord *arg1);
bool bgIsBboxOverlapping(struct coord *arg0, struct coord *arg1, struct coord *arg2, struct coord *arg3);
void portalFindBbox(s32 portalnum, struct coord *bbmin, struct coord *bbmax);
void bgFindEnteredRooms(struct coord *bbmin, struct coord *upper, s16 *rooms, s32 maxlen, bool arg4);

#endif
