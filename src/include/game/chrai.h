#ifndef _IN_CHR_CHRAI_H
#define _IN_CHR_CHRAI_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

s32 chraiGetListIdByList(u8 *ailist, bool *is_global);
u32 chraiGoToLabel(u8 *ailist, u32 aioffset, u8 label);
void chraiExecute(void *entity, s32 proptype);
u32 chraiGetCommandLength(u8 *ailist, u32 aioffset);

#endif
