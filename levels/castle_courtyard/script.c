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
#include "actors/group0.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/castle_courtyard/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_courtyard_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0_TEXTURE(0x09, _outside_mio0SegmentRomStart, _outside_mio0SegmentRomEnd), 
	LOAD_MIO0(0x7, _castle_courtyard_segment_7SegmentRomStart, _castle_courtyard_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*bhvParam*/ BPARAM4(0x01), /*bhv*/ bhvMario),
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_10), 
	LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_SPIKY_TREE, spiky_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_COURTYARD_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_courtyard_geo_000200), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_courtyard_area_1),
        WARP_NODE(/*id*/ WARP_NODE_05,    /*destLevel*/ LEVEL_BBH,              /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_0A,    /*destLevel*/ LEVEL_CASTLE_COURTYARD, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_0B,    /*destLevel*/ LEVEL_CASTLE_COURTYARD, /*destArea*/ 1, /*destNode*/ WARP_NODE_0B, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_01,    /*destLevel*/ LEVEL_CASTLE,           /*destArea*/ 1, /*destNode*/ WARP_NODE_02, /*flags*/ WARP_NO_CHECKPOINT),
        WARP_NODE(/*id*/ WARP_NODE_DEATH, /*destLevel*/ LEVEL_CASTLE_GROUNDS,   /*destArea*/ 1, /*destNode*/ WARP_NODE_03, /*flags*/ WARP_NO_CHECKPOINT),
		WARP_NODE( WARP_NODE_06, LEVEL_PPF,                1, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_STATUE, 7, -49, -1736, 0, 0, 0,   0, bhvPushableMetalBox),
		OBJECT( MODEL_NONE, 6, -370, -1713, 0, 0, 0, ( WARP_NODE_06 << 16), bhvWarp),
		OBJECT( MODEL_NONE, -2700, 0, -1652, 0, 0, 0,   BPARAM2(0x00), bhvBirdsSoundLoop),
		OBJECT( MODEL_NONE, 2700, 0, -1652, 0, 0, 0,   BPARAM2(0x01), bhvBirdsSoundLoop),
		OBJECT( MODEL_BOO, -2360, -100, -2712, 0, 0, 0,   BPARAM1(1) | BPARAM2(WARP_NODE_05), bhvBooWithCage),
		OBJECT( MODEL_BOO, -3217, 100, -101, 0, 0, 0,   0, bhvCourtyardBooTriplet),
		OBJECT( MODEL_BOO, 3317, 100, -1701, 0, 0, 0,   0, bhvCourtyardBooTriplet),
		OBJECT( MODEL_BOO, -71, 1, -1387, 0, 0, 0,   0, bhvCourtyardBooTriplet),
		OBJECT( MODEL_NONE, 0, 51, -1000, 0, -180, 0,   BPARAM2(WARP_NODE_0B), bhvLaunchDeathWarp),
		OBJECT( MODEL_NONE, 0, 51, -1000, 0, -180, 0,   BPARAM2(WARP_NODE_0A), bhvLaunchStarCollectWarp),
		TERRAIN(castle_courtyard_area_1_collision),
		MACRO_OBJECTS(castle_courtyard_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_SOUND_PLAYER),
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
