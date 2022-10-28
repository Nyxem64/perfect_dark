#include <ultra64.h>
#include "game/acosfasinf.h"
#include "data.h"
#include "types.h"

f32 atan2f(f32 x, f32 z)
{
	f32 result;

	if (x == 0) {
		if (z >= 0) {
			result = 0;
		} else {
			result = M_PI;
		}
	} else if (z == 0) {
		if (x > 0) {
			result = 1.5707963705063f;
		} else {
			result = 1.5707963705063f * 3;
		}
	} else {
		result = sqrtf(x * x + z * z);

		if (z < x) {
			result = acosf(z / result);

			if (x < 0) {
				result = M_TAU - result;
			}
		} else {
			result = acosf(x / result);
			result = 1.5707963705063f - result;

			if (z < 0) {
				result = M_PI - result;
			}

			if (result < 0) {
				result = result + M_TAU;
			}
		}
	}

	return result;
}
