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


/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/tc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_tc_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x7, _tc_segment_7SegmentRomStart, _tc_segment_7SegmentRomEnd), 
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _cave_mio0SegmentRomStart, _cave_mio0SegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x05, _group6_mio0SegmentRomStart, _group6_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x06, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*bhvParam*/ BPARAM4(0x01), /*bhv*/ bhvMario),
    JUMP_LINK(script_func_global_1),
    JUMP_LINK(script_func_global_7),
    JUMP_LINK(script_func_global_18),

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, tc_area_1),
		WARP_NODE(WARP_NODE_0A, LEVEL_TC, 0x01, WARP_NODE_0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x04, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -146, 359, 1724, 0, 0, 0, BPARAM2(WARP_NODE_0A), bhvSpinAirborneWarp),
		OBJECT(MODEL_SNUFIT, -877, 505, 566, 0, 24, 0, 0x00000000, bhvSnufit),
		OBJECT(MODEL_SNUFIT, 464, 505, -904, 0, -28, 0, 0x00000000, bhvSnufit),
		OBJECT(MODEL_GOOMBA, 967, 22, 552, 0, -28, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_PARGG, -3554, -115, -2139, 0, 50, 0, 0x00000000, bhvBlargg),
		OBJECT(MODEL_PARGG, -3484, -115, -3217, 0, 1, 0, 0x00000000, bhvBlargg),
		TERRAIN(tc_area_1_collision),
		MACRO_OBJECTS(tc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_UNDERGROUND),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -146, 359, 1724),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
