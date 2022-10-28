#ifndef _IN_LIB_RNG_H
#define _IN_LIB_RNG_H
#include <ultra64.h>
#include "data.h"
#include "types.h"

u32 random(void);
void rngSetSeed(u32 seed);
u32 rngRotateSeed(u64 *value);

#endif
