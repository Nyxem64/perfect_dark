//
// Stage ID 0x4e
//

#include "stagesetup.h"

extern s32 intro[];
extern u32 props[];
extern struct path paths[];
extern struct ailist ailists[];

struct stagesetup setup = {
	NULL,
	NULL,
	NULL,
	intro,
	props,
	paths,
	ailists,
	NULL,
};

u32 props[] = {
	tag(0x00, 1)
	stdobject(0x0100, MODEL_A51_CRATE1, -1, OBJFLAG_00000001 | OBJFLAG_00000100 | OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_IGNOREROOMCOLOUR | OBJFLAG_INVINCIBLE, 0, 0, 1000)
	tag(0x01, 1)
	stdobject(0x0100, MODEL_A51_CRATE1, -1, OBJFLAG_00000001 | OBJFLAG_00000100 | OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_IGNOREROOMCOLOUR | OBJFLAG_INVINCIBLE, 0, 0, 1000)
	tag(0x02, 1)
	stdobject(0x0100, MODEL_A51_CRATE1, -1, OBJFLAG_00000001 | OBJFLAG_00000100 | OBJFLAG_IGNOREFLOORCOLOUR | OBJFLAG_IGNOREROOMCOLOUR | OBJFLAG_INVINCIBLE, 0, 0, 1000)
	endprops
};

s32 intro[] = {
	outfit(OUTFIT_DEFAULT)
	endintro
};

struct path paths[] = {
	{ NULL, 0, 0 },
};

/**
 * This function is an old and unused method of programming the title screen.
 */
u8 func0c00_017c[] = {
	set_chr_chrflag(CHR_COOP, CHRCFLAG_HIDDEN)
	set_chr_chrflag(CHR_ANTI, CHRCFLAG_HIDDEN)
	play_cutscene_track(MUSIC_G5_INTRO)
	camera_movement(ANIM_CUT_OLD_TITLE_CAM_01)
	title_init_mode(TITLEAIMODE_RARELOGO)

	beginloop(0x12)
		try_exit_title(/*goto*/ 0x59)
	endloop(0x12)

	label(0x59)
	title_init_mode(TITLEAIMODE_NINTENDOLOGO)

	beginloop(0x13)
		try_exit_title(/*goto*/ 0x59)
	endloop(0x13)

	label(0x59)
	camera_movement(ANIM_CUT_OLD_TITLE_CAM_01)
	enable_object(0x00)
	set_object_flag2(0x00, OBJFLAG2_04000000)
	set_object_flag3(0x00, OBJFLAG3_00000010)
	object_do_animation(ANIM_CUT_OLD_TITLE_CRATE1_01, 0x00, 0x04, 0xffff)

	beginloop(0x08)
		if_camera_animating(/*goto*/ 0x31)
		goto_next(0x59)

		label(0x31)
		if_controller_button_pressed(/*goto*/ 0x59)
		label(0x31)
	endloop(0x08)

	label(0x59)
	disable_object(0x00)
	camera_movement(ANIM_CUT_OLD_TITLE_CAM_02)
	enable_object(0x01)
	set_object_flag2(0x01, OBJFLAG2_04000000)
	set_object_flag3(0x01, OBJFLAG3_00000010)
	object_do_animation(ANIM_CUT_OLD_TITLE_CRATE2_01, 0x01, 0x04, 0xffff)

	beginloop(0x0b)
		if_camera_animating(/*goto*/ 0x31)
		goto_next(0x59)

		label(0x31)
		if_controller_button_pressed(/*goto*/ 0x59)
		label(0x31)
	endloop(0x0b)

	label(0x59)
	disable_object(0x01)
	camera_movement(ANIM_CUT_OLD_TITLE_CAM_03)

	enable_object(0x00)
	set_object_flag2(0x00, OBJFLAG2_04000000)
	set_object_flag3(0x00, OBJFLAG3_00000010)
	object_do_animation(ANIM_CUT_OLD_TITLE_CRATE1_02, 0x00, 0x04, 0xffff)

	enable_object(0x01)
	set_object_flag2(0x01, OBJFLAG2_04000000)
	set_object_flag3(0x01, OBJFLAG3_00000010)
	object_do_animation(ANIM_CUT_OLD_TITLE_CRATE2_02, 0x01, 0x04, 0xffff)

	beginloop(0x0a)
		if_camera_animating(/*goto*/ 0x31)
		goto_next(0x59)

		label(0x31)
		if_controller_button_pressed(/*goto*/ 0x59)
		label(0x31)
	endloop(0x0a)

	label(0x59)
	disable_object(0x01)
	disable_object(0x00)
	camera_movement(ANIM_CUT_OLD_TITLE_CAM_04)

	enable_object(0x01)
	unset_object_flag2(0x01, OBJFLAG2_04000000)
	set_object_flag3(0x01, OBJFLAG3_00000010)
	object_do_animation(ANIM_CUT_OLD_TITLE_CRATE2_03, 0x01, 0x04, 0xffff)

	enable_object(0x00)
	set_object_flag2(0x00, OBJFLAG2_04000000)
	set_object_flag3(0x00, OBJFLAG3_00000010)
	object_do_animation(ANIM_CUT_OLD_TITLE_CRATE1_03, 0x00, 0x04, 0xffff)

	enable_object(0x02)
	set_object_flag2(0x02, OBJFLAG2_04000000)
	set_object_flag3(0x02, OBJFLAG3_00000010)
	object_do_animation(ANIM_CUT_OLD_TITLE_CRATE3, 0x02, 0x04, 0xffff)

	beginloop(0x0e)
		if_camera_animating(/*goto*/ 0x31)
		goto_next(0x59)

		label(0x31)
		if_controller_button_pressed(/*goto*/ 0x59)
		label(0x31)
	endloop(0x0e)

	label(0x59)
	unset_chr_chrflag(CHR_COOP, CHRCFLAG_HIDDEN)
	unset_chr_chrflag(CHR_ANTI, CHRCFLAG_HIDDEN)
	title_init_mode(TITLEAIMODE_PDLOGO)

	beginloop(0x15)
		try_exit_title(/*goto*/ 0x59)
	endloop(0x15)

	label(0x59)
	stop_cutscene_track
	stop_ambient_track
	enter_firstperson
	set_ailist(CHR_SELF, GAILIST_IDLE)
	endlist
};

struct ailist ailists[] = {
	{ func0c00_017c, 0x0401 },
	{ func0c00_017c, 0x0c00 },
	{ NULL, 0 },
};
