#include <ultra64.h>
#include "constants.h"
#include "bss.h"
#include "data.h"
#include "types.h"

void shardsStop(void)
{
	s32 i;

	for (i = 0; i < g_MaxShards; i++) {
		g_Shards[i].age60 = 0;
	}
}
