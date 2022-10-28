#include <os_internal.h>
#include "controller.h"

s32 osPfsFreeBlocks(OSPfs *pfs, s32 *remaining)
{
	s32 j;
	s32 pages = 0;
	__OSInode inode;
	s32 ret = 0;
	u8 bank;
	s32 offset;

	if (!(pfs->status & PFS_INITIALIZED)) {
		return PFS_ERR_INVALID;
	}

	if ((ret = __osCheckId(pfs)) != 0) {
		return ret;
	}

	for (bank = 0; bank < pfs->banks; bank++) {
		if ((ret = __osPfsRWInode(pfs, &inode, PFS_READ, bank)) != 0) {
			return ret;
		}

		offset = ((bank > 0) ? 1 : pfs->inode_start_page);

		for (j = offset; j < ARRLEN(inode.inode_page); j++) {
			if (inode.inode_page[j].ipage == 3) {
				pages++;
			}
		}
	}

	*remaining = pages * PFS_ONE_PAGE * BLOCKSIZE;

	return 0;
}
