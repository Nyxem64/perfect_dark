#include <ultra64.h>
#include "constants.h"
#include "bss.h"
#include "lib/memp.h"
#include "data.h"
#include "types.h"

void propsndReset(void)
{
	s32 i;

	g_AudioChannels = mempAlloc(ALIGN16((IS4MB() ? 30 : 40) * sizeof(struct audiochannel)), MEMPOOL_STAGE);

	for (i = 0; i < (IS4MB() ? 30 : 40); i++) {
		g_AudioChannels[i].flags = AUDIOCHANNELFLAG_IDLE;
		g_AudioChannels[i].audiohandle = NULL;
		g_AudioChannels[i].unk4c = -1;
	}
}
