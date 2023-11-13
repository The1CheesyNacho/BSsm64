#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/REC_ROOM/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_REC_ROOM_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x7, _REC_ROOM_segment_7SegmentRomStart, _REC_ROOM_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS, castle_door_0_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR, castle_door_1_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS, castle_door_3_stars_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, REC_ROOM_area_1),
		WARP_NODE(0x0A, LEVEL_CASTLE, 0x01, 0x07, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xE0, LEVEL_REC_ROOM, 0x01, 0xE0, WARP_NO_CHECKPOINT),
		WARP_NODE(0xE1, LEVEL_REC_ROOM, 0x01, 0xE1, WARP_NO_CHECKPOINT),
		WARP_NODE(0xE2, LEVEL_REC_ROOM, 0x01, 0xE2, WARP_NO_CHECKPOINT),
		WARP_NODE(0xE3, LEVEL_REC_ROOM, 0x01, 0xE3, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CASTLE_DOOR_1_STAR, -1851, 787, 2509, 0, -46, 0, (0x0A << 16), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, -1090, 784, 407, 0, 0, 0,   (0xE1 << 16), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, -936, 784, 407, 0, -180, 0,   (0xE1 << 16), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, -427, 784, 407, 0, -180, 0,   (0xE0 << 16), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, -581, 784, 407, 0, 0, 0,   (0xE0 << 16), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, 250, 784, 1244, 0, 90, 0,   (0xE2 << 16), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, 250, 784, 1090, 0, -90, 0,   (0xE2 << 16), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, 250, 784, 1752, 0, 90, 0,   (0xE3 << 16), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, 250, 784, 1598, 0, -90, 0,   (0xE3 << 16), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, 97, 784, 670, 0, 135, 0,   0x00000000, bhvDoor),
		OBJECT(MODEL_CASTLE_CASTLE_DOOR, -12, 784, 561, 0, -45, 0,   0x00000000, bhvDoor),
		TERRAIN(REC_ROOM_area_1_collision),
		MACRO_OBJECTS(REC_ROOM_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_INSIDE_CASTLE),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
