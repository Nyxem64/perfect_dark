#include <ultra64.h>
#include "constants.h"
#include "game/prop.h"
#include "bss.h"
#include "data.h"
#include "types.h"

void smokeStop(void)
{
	s32 i;

	if (g_Smokes) {
		for (i = 0; i < g_MaxSmokes; i++) {
			if (g_Smokes[i].prop) {
				propDelist(g_Smokes[i].prop);
				propDisable(g_Smokes[i].prop);
				propFree(g_Smokes[i].prop);

				g_Smokes[i].prop = NULL;
			}
		}
	}
}
