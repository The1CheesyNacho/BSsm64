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

#include "actors/common0.h"
#include "actors/common1.h"
#include "actors/group14.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/ppf/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ppf_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x7, _ppf_segment_7SegmentRomStart, _ppf_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0(0x5, _group3_mio0SegmentRomStart, _group3_mio0SegmentRomEnd), 
	LOAD_RAW(0xc, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_MIO0(0x6, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd), 
	LOAD_RAW(0xd, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CHAIN_CHOMP, chain_chomp_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_GOOMBA, goomba_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ppf_area_1),
		WARP_NODE(0x0A, LEVEL_PPF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B, LEVEL_PPF, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -2042, -454, 5669, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -2042, -454, 5669),
		OBJECT(MODEL_THI_WARP_PIPE, -1112, 3719, -1762, 0, 0, 0, 0x000A0000, bhvWarpPipe),
		OBJECT(MODEL_STAR, -94, 3905, -2525, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_GOOMBA, -120, -1713, 6160, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_CHAIN_CHOMP, -3181, 3490, -107, 0, 0, 0, 0x00000000, bhvChainChomp),
		OBJECT(MODEL_GOOMBA, 568, -1713, 5875, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -703, -1713, 5696, 0, 0, 0, 0x00000000, bhvGoomba),
		TERRAIN(ppf_area_1_collision),
		MACRO_OBJECTS(ppf_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_PPF),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, ppf_area_2),
		WARP_NODE(0x0A, LEVEL_PPF, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 3676, 7712, 2478, 0, 0, 0, (0X0A << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_LUIGI, 3676, 453, 3495, 0, 180, 0, (0X0A << 16), bhvLuisNpc),
		TERRAIN(ppf_area_2_collision),
		MACRO_OBJECTS(ppf_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_UNDERGROUND),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -2042, -454, 5669),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
