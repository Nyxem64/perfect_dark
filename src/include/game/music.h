#ifndef IN_GAME_MUSIC_H
#define IN_GAME_MUSIC_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

u16 musicGetVolume(void);
void musicSetVolume(u16 volume);
bool func0f16d0a8(s32 tracktype, s32 arg1);
s32 func0f16d124(s32 tracktype);
void musicQueueStartEvent(u32 tracktype, u32 tracknum, f32 arg2, u16 volume);
void musicQueueStopEvent(s32 tracktype);
void musicQueueFadeEvent(s32 tracktype, f32 arg1, bool fadetopause);
void musicReset(void);
void musicQueueStopAllEvent(void);
void func0f16d430(void);
void musicQueueType5Event(void);
void musicStartPrimary(f32 arg0);
void musicStartAmbient(f32 arg0);
bool musicIsAnyPlayerInAmbientRoom(void);
void musicStartNrg(f32 arg0);
void musicStartTrackAsMenu(s32 tracknum);
void musicSetStageAndStartMusic(s32 stagenum);
void musicSetStage(s32 stagenum);
void musicStop(void);
void musicActivateNrg(void);
void musicDeactivateNrg(void);
void musicStartMenu(void);
void musicEndMenu(void);
void musicStartSoloDeath(void);
void _musicStartMpDeath(f32 arg0);
void musicStartMpDeath(void);
void musicEndDeath(void);
void musicPlayTrackIsolated(s32 tracknum);
void musicPlayDefaultTracks(void);
void musicStartTemporaryPrimary(s32 tracknum);
void musicStartCutscene(s32 tracknum);
void musicEndCutscene(void);
void musicStartTemporaryAmbient(s32 tracknum);
void musicEndTemporaryAmbient(void);
void musicSetXReason(s32 reason, u32 minsecs, u32 maxsecs);
void musicUnsetXReason(s32 reason);
void musicTickAmbient(void);

#endif
