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

#include "make_const_nonconst.h"
#include "levels/castle_inside/header.h"

static const LevelScript script_func_local_1[] = {
    WARP_NODE(/*id*/ WARP_NODE_00, /*destLevel*/ LEVEL_CASTLE_GROUNDS,   /*destArea*/ 1, /*destNode*/ WARP_NODE_00, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_01, /*destLevel*/ LEVEL_CASTLE_GROUNDS,   /*destArea*/ 1, /*destNode*/ WARP_NODE_01, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_02, /*destLevel*/ LEVEL_CASTLE_COURTYARD, /*destArea*/ 1, /*destNode*/ WARP_NODE_01, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_CASTLE_STAR_DOOR_8_STARS, /*pos*/ -2706,   512, -1409, /*angle*/ 0,  45, 0, /*bhvParam*/ BPARAM1(8), /*bhv*/ bhvStarDoor),
    OBJECT(/*model*/ MODEL_CASTLE_STAR_DOOR_8_STARS, /*pos*/ -2598,   512, -1517, /*angle*/ 0, 225, 0, /*bhvParam*/ BPARAM1(8), /*bhv*/ bhvStarDoor),
    OBJECT(/*model*/ MODEL_CASTLE_KEY_DOOR,          /*pos*/ -1100,   512, -1074, /*angle*/ 0,   0, 0, /*bhvParam*/ BPARAM1(0x01) | BPARAM2(WARP_NODE_03), /*bhv*/ bhvDoorWarp),
    OBJECT(/*model*/ MODEL_CASTLE_KEY_DOOR,          /*pos*/  -946,   512, -1074, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM1(0x01) | BPARAM2(WARP_NODE_04), /*bhv*/ bhvDoorWarp),
    OBJECT(/*model*/ MODEL_CASTLE_KEY_DOOR,          /*pos*/ -1100, -1074,   922, /*angle*/ 0,   0, 0, /*bhvParam*/ BPARAM1(0x02) | BPARAM2(WARP_NODE_05), /*bhv*/ bhvDoorWarp),
    OBJECT(/*model*/ MODEL_CASTLE_KEY_DOOR,          /*pos*/  -946, -1074,   922, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM1(0x02) | BPARAM2(WARP_NODE_06), /*bhv*/ bhvDoorWarp),
    WARP_NODE(/*id*/ WARP_NODE_03, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ WARP_NODE_00, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_04, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ WARP_NODE_01, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_05, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 3, /*destNode*/ WARP_NODE_00, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_06, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 3, /*destNode*/ WARP_NODE_01, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_00, /*destLevel*/ LEVEL_BOB, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_01, /*destLevel*/ LEVEL_BOB, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_02, /*destLevel*/ LEVEL_BOB, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_03, /*destLevel*/ LEVEL_CCM, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_04, /*destLevel*/ LEVEL_CCM, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_05, /*destLevel*/ LEVEL_CCM, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_06, /*destLevel*/ LEVEL_WF,  /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_07, /*destLevel*/ LEVEL_WF,  /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_08, /*destLevel*/ LEVEL_WF,  /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_09, /*destLevel*/ LEVEL_JRB, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_0A, /*destLevel*/ LEVEL_JRB, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_0B, /*destLevel*/ LEVEL_JRB, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  2013,  768, -2014, /*angle*/ 0,    0, 0, /*bhvParam*/ BPARAM2(WARP_NODE_0A), /*bhv*/ bhvWarp),
    WARP_NODE(/*id*/ WARP_NODE_0A,    /*destLevel*/ LEVEL_PSS,   /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -5513,  512, -4324, /*angle*/ 0,    0, 0, /*bhvParam*/ BPARAM1(0x30) | BPARAM2(WARP_NODE_0B), /*bhv*/ bhvWarp),
    WARP_NODE(/*id*/ WARP_NODE_0B,    /*destLevel*/ LEVEL_BITDW, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  1963,  819,  1280, /*angle*/ 0,    0, 0, /*bhvParam*/ BPARAM1(0x05) | BPARAM2(WARP_NODE_0C), /*bhv*/ bhvWarp),
    WARP_NODE(/*id*/ WARP_NODE_0C,    /*destLevel*/ LEVEL_SA,    /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_TOTWC, /*destLevel*/ LEVEL_TOTWC, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1024,  512,  -650, /*angle*/ 0,    0, 0, /*bhvParam*/ BPARAM2(WARP_NODE_1E), /*bhv*/ bhvInstantActiveWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1024,  -50,   717, /*angle*/ 0,  180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_1F), /*bhv*/ bhvInstantActiveWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1024,  900,   717, /*angle*/ 0,  180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_20), /*bhv*/ bhvAirborneWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1024,  900,   717, /*angle*/ 0,  180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_21), /*bhv*/ bhvAirborneDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1024,  900,   717, /*angle*/ 0,  180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_22), /*bhv*/ bhvHardAirKnockBackWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1024,  900,   717, /*angle*/ 0,  180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_23), /*bhv*/ bhvDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -5513,  512, -4324, /*angle*/ 0, -135, 0, /*bhvParam*/ BPARAM2(WARP_NODE_24), /*bhv*/ bhvLaunchStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -5513,  512, -4324, /*angle*/ 0, -135, 0, /*bhvParam*/ BPARAM2(WARP_NODE_25), /*bhv*/ bhvLaunchDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1024,  900,   717, /*angle*/ 0,    0, 0, /*bhvParam*/ BPARAM2(WARP_NODE_26), /*bhv*/ bhvAirborneStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  2816, 1200,  -256, /*angle*/ 0,   90, 0, /*bhvParam*/ BPARAM2(WARP_NODE_27), /*bhv*/ bhvAirborneStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  2816, 1200,  -256, /*angle*/ 0,  270, 0, /*bhvParam*/ BPARAM2(WARP_NODE_28), /*bhv*/ bhvDeathWarp),
    WARP_NODE(/*id*/ WARP_NODE_1E, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_1E, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_1F, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_1F, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_20, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_20, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_21, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_21, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_22, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_22, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_23, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_23, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_24, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_24, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_25, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_25, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_26, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_26, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_27, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_27, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_28, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_28, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -5422, 717,  -461, /*angle*/ 0, 270, 0, /*bhvParam*/ BPARAM2(WARP_NODE_32), /*bhv*/ bhvPaintingStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -2304,   0, -4552, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_33), /*bhv*/ bhvPaintingStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/   256, 102, -4706, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_34), /*bhv*/ bhvPaintingStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  4501, 717,  -230, /*angle*/ 0,  90, 0, /*bhvParam*/ BPARAM2(WARP_NODE_35), /*bhv*/ bhvPaintingStarCollectWarp),
    WARP_NODE(/*id*/ WARP_NODE_32, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_32, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_33, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_33, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_34, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_34, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_35, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_35, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -5422, 717,  -461, /*angle*/ 0, 270, 0, /*bhvParam*/ BPARAM2(WARP_NODE_64), /*bhv*/ bhvPaintingDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -2304,   0, -4552, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_65), /*bhv*/ bhvPaintingDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/   256, 102, -4706, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_66), /*bhv*/ bhvPaintingDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  4501, 717,  -230, /*angle*/ 0,  90, 0, /*bhvParam*/ BPARAM2(WARP_NODE_67), /*bhv*/ bhvPaintingDeathWarp),
    WARP_NODE(/*id*/ WARP_NODE_64, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_64, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_65, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_65, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_66, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_66, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_67, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_67, /*flags*/ WARP_NO_CHECKPOINT),
    RETURN(),
};

static const LevelScript script_func_local_2[] = {
    OBJECT(/*model*/ MODEL_CASTLE_KEY_DOOR, /*pos*/ -1100, 512, 3021, /*angle*/ 0,   0, 0, /*bhvParam*/ BPARAM2(WARP_NODE_00), /*bhv*/ bhvDoorWarp),
    OBJECT(/*model*/ MODEL_CASTLE_KEY_DOOR, /*pos*/  -946, 512, 3021, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_01), /*bhv*/ bhvDoorWarp),
    WARP_NODE(/*id*/ WARP_NODE_00, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_03, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_01, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 1, /*destNode*/ WARP_NODE_04, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_CASTLE_STAR_DOOR_50_STARS, /*pos*/ -281, 2253, 4762, /*angle*/ 0,   0, 0, /*bhvParam*/ BPARAM1(50), /*bhv*/ bhvStarDoor),
    OBJECT(/*model*/ MODEL_CASTLE_STAR_DOOR_50_STARS, /*pos*/ -127, 2253, 4762, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM1(50), /*bhv*/ bhvStarDoor),
    OBJECT(/*model*/ MODEL_CASTLE_STAR_DOOR_70_STARS, /*pos*/ -281, 3174, 3772, /*angle*/ 0,   0, 0, /*bhvParam*/ BPARAM1(70), /*bhv*/ bhvStarDoor),
    OBJECT(/*model*/ MODEL_CASTLE_STAR_DOOR_70_STARS, /*pos*/ -127, 3174, 3772, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM1(70), /*bhv*/ bhvStarDoor),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_18, /*destLevel*/ LEVEL_WDW, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_19, /*destLevel*/ LEVEL_WDW, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_1A, /*destLevel*/ LEVEL_WDW, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_1B, /*destLevel*/ LEVEL_THI, /*destArea*/ 2, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_1C, /*destLevel*/ LEVEL_THI, /*destArea*/ 2, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_1D, /*destLevel*/ LEVEL_THI, /*destArea*/ 2, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_1E, /*destLevel*/ LEVEL_TTM, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_1F, /*destLevel*/ LEVEL_TTM, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_20, /*destLevel*/ LEVEL_TTM, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_21, /*destLevel*/ LEVEL_TTC, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_22, /*destLevel*/ LEVEL_TTC, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_23, /*destLevel*/ LEVEL_TTC, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_24, /*destLevel*/ LEVEL_SL,  /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_25, /*destLevel*/ LEVEL_SL,  /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_26, /*destLevel*/ LEVEL_SL,  /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_27, /*destLevel*/ LEVEL_THI, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_28, /*destLevel*/ LEVEL_THI, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_29, /*destLevel*/ LEVEL_THI, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_2A, /*destLevel*/ LEVEL_TSNS,  /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_2B, /*destLevel*/ LEVEL_TSNS, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_2C, /*destLevel*/ LEVEL_TSNS, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_2D, /*destLevel*/ LEVEL_TSNS,  /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  3002, 2816,  5886, /*angle*/ 0,   0, 0, /*bhvParam*/ BPARAM1(15) | BPARAM2(WARP_NODE_0A), /*bhv*/ bhvWarp),
    WARP_NODE(/*id*/ WARP_NODE_0A, /*destLevel*/ LEVEL_WMOTR, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  -230, 4813, -3352, /*angle*/ 0,   0, 0, /*bhvParam*/ BPARAM1(15) | BPARAM2(WARP_NODE_0B), /*bhv*/ bhvWarp),
    WARP_NODE(/*id*/ WARP_NODE_0B, /*destLevel*/ LEVEL_BITS,  /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  -659, 1613,  -350, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_32), /*bhv*/ bhvPaintingStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -4693, 2157,  1828, /*angle*/ 0, 270, 0, /*bhvParam*/ BPARAM2(WARP_NODE_33), /*bhv*/ bhvAirborneStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  -675, 1400,  3870, /*angle*/ 0,   0, 0, /*bhvParam*/ BPARAM2(WARP_NODE_34), /*bhv*/ bhvPaintingStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  -205, 2918,  7300, /*angle*/ 0,   0, 0, /*bhvParam*/ BPARAM2(WARP_NODE_35), /*bhv*/ bhvPaintingStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  3538, 1766,  -400, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_36), /*bhv*/ bhvPaintingStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -4693, 2157,  1828, /*angle*/ 0, 270, 0, /*bhvParam*/ BPARAM2(WARP_NODE_37), /*bhv*/ bhvAirborneStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  3002, 2816,  5886, /*angle*/ 0,  90, 0, /*bhvParam*/ BPARAM2(WARP_NODE_38), /*bhv*/ bhvLaunchStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3412, 2816,  5886, /*angle*/ 0, 270, 0, /*bhvParam*/ BPARAM2(WARP_NODE_3A), /*bhv*/ bhvLaunchStarCollectWarp),
    WARP_NODE(/*id*/ WARP_NODE_32, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ WARP_NODE_32, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_33, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ WARP_NODE_33, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_34, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ WARP_NODE_34, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_35, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ WARP_NODE_35, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_36, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ WARP_NODE_36, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_37, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ WARP_NODE_37, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_38, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ WARP_NODE_38, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x39, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ 0x39, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(WARP_NODE_3A, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ WARP_NODE_3A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  -659, 1613,  -350, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_64), /*bhv*/ bhvPaintingDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -4693, 2157,  1828, /*angle*/ 0, 270, 0, /*bhvParam*/ BPARAM2(WARP_NODE_65), /*bhv*/ bhvDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  -675, 1400,  3870, /*angle*/ 0,   0, 0, /*bhvParam*/ BPARAM2(WARP_NODE_66), /*bhv*/ bhvPaintingDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  -205, 2918,  7300, /*angle*/ 0,   0, 0, /*bhvParam*/ BPARAM2(WARP_NODE_67), /*bhv*/ bhvPaintingDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  3538, 1766,  -400, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_68), /*bhv*/ bhvPaintingDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -4693, 2157,  1828, /*angle*/ 0, 270, 0, /*bhvParam*/ BPARAM2(WARP_NODE_69), /*bhv*/ bhvDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  -230, 4813, -3352, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_6B), /*bhv*/ bhvLaunchDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -3412, 2816,  5886, /*angle*/ 0, 270, 0, /*bhvParam*/ BPARAM2(WARP_NODE_6C), /*bhv*/ bhvLaunchDeathWarp),
		OBJECT( MODEL_NONE, -483, 1478, 1585, 0, -180, 0,   BPARAM2(0x6E), bhvPaintingDeathWarp),
		OBJECT( MODEL_NONE, -483, 1478, 1585, 0, -180, 0,   BPARAM2(0x39), bhvPaintingStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  3002, 2816,  5886, /*angle*/ 0,  90, 0, /*bhvParam*/ BPARAM2(WARP_NODE_6D), /*bhv*/ bhvLaunchDeathWarp),
    WARP_NODE(/*id*/ WARP_NODE_64, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ WARP_NODE_64, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_65, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ WARP_NODE_65, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_66, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ WARP_NODE_66, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_67, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ WARP_NODE_67, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_68, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ WARP_NODE_68, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_69, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ WARP_NODE_69, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_6C, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ WARP_NODE_6C, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_6B, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ WARP_NODE_6B, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_6D, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ WARP_NODE_6D, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ 0x6E, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 2, /*destNode*/ 0x6E, /*flags*/ WARP_NO_CHECKPOINT),
    RETURN(),
};

static const LevelScript script_func_local_3[] = {
    OBJECT(/*model*/ MODEL_CASTLE_KEY_DOOR, /*pos*/ -1100, -1074, 922, /*angle*/ 0,   0, 0, /*bhvParam*/ BPARAM2(WARP_NODE_00), /*bhv*/ bhvDoorWarp),
    OBJECT(/*model*/ MODEL_CASTLE_KEY_DOOR, /*pos*/  -946, -1074, 922, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_01), /*bhv*/ bhvDoorWarp),
    WARP_NODE(/*id*/ WARP_NODE_00, /*destLevel*/ LEVEL_CASTLE,         /*destArea*/ 1, /*destNode*/ WARP_NODE_05, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_01, /*destLevel*/ LEVEL_CASTLE,         /*destArea*/ 1, /*destNode*/ WARP_NODE_06, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_02, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 1, /*destNode*/ WARP_NODE_02, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_CASTLE_STAR_DOOR_30_STARS, /*pos*/ 307, -1074, 2074, /*angle*/ 0,  90, 0, /*bhvParam*/ BPARAM1(30), /*bhv*/ bhvStarDoor),
    OBJECT(/*model*/ MODEL_CASTLE_STAR_DOOR_30_STARS, /*pos*/ 307, -1074, 1920, /*angle*/ 0, 270, 0, /*bhvParam*/ BPARAM1(30), /*bhv*/ bhvStarDoor),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_0C, /*destLevel*/ LEVEL_LLL, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_0D, /*destLevel*/ LEVEL_LLL, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_0E, /*destLevel*/ LEVEL_LLL, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_0F, /*destLevel*/ LEVEL_SSL, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_10, /*destLevel*/ LEVEL_SSL, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_11, /*destLevel*/ LEVEL_SSL, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_2A, /*destLevel*/ LEVEL_HMC, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_15, /*destLevel*/ LEVEL_DDD, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_16, /*destLevel*/ LEVEL_DDD, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    PAINTING_WARP_NODE(/*id*/ WARP_NODE_17, /*destLevel*/ LEVEL_DDD, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  4147, -1280,  1997, /*angle*/ 0,   0, 0, /*bhvParam*/ BPARAM1(15) | BPARAM2(WARP_NODE_18), /*bhv*/ bhvWarp),
    WARP_NODE(/*id*/ WARP_NODE_18, /*destLevel*/ LEVEL_BITFS, /*destArea*/ 1, /*destNode*/ WARP_NODE_0A, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1382,  -819, -4150, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_32), /*bhv*/ bhvPaintingStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -2918,  -870,  -875, /*angle*/ 0,   0, 0, /*bhvParam*/ BPARAM2(WARP_NODE_33), /*bhv*/ bhvPaintingStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  2483, -1688, -2662, /*angle*/ 0, 270, 0, /*bhvParam*/ BPARAM2(WARP_NODE_34), /*bhv*/ bhvLaunchStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  2381,  -500,  2011, /*angle*/ 0,  90, 0, /*bhvParam*/ BPARAM2(WARP_NODE_35), /*bhv*/ bhvAirborneStarCollectWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  4147, -1100,  1997, /*angle*/ 0,  90, 0, /*bhvParam*/ BPARAM2(WARP_NODE_36), /*bhv*/ bhvLaunchStarCollectWarp),
    WARP_NODE(/*id*/ WARP_NODE_32, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 3, /*destNode*/ WARP_NODE_32, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_33, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 3, /*destNode*/ WARP_NODE_33, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_34, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 3, /*destNode*/ WARP_NODE_34, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_35, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 3, /*destNode*/ WARP_NODE_35, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_36, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 3, /*destNode*/ WARP_NODE_36, /*flags*/ WARP_NO_CHECKPOINT),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -1382,  -819, -4150, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM2(WARP_NODE_64), /*bhv*/ bhvPaintingDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/ -2918,  -870,  -875, /*angle*/ 0,   0, 0, /*bhvParam*/ BPARAM2(WARP_NODE_65), /*bhv*/ bhvPaintingDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  2483, -1688, -2662, /*angle*/ 0, 270, 0, /*bhvParam*/ BPARAM2(WARP_NODE_66), /*bhv*/ bhvLaunchDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  2381,  -500,  2011, /*angle*/ 0,  90, 0, /*bhvParam*/ BPARAM2(WARP_NODE_67), /*bhv*/ bhvDeathWarp),
    OBJECT(/*model*/ MODEL_NONE, /*pos*/  4147, -1100,  1997, /*angle*/ 0,  90, 0, /*bhvParam*/ BPARAM2(WARP_NODE_68), /*bhv*/ bhvLaunchDeathWarp),
    WARP_NODE(/*id*/ WARP_NODE_64, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 3, /*destNode*/ WARP_NODE_64, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_65, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 3, /*destNode*/ WARP_NODE_65, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_66, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 3, /*destNode*/ WARP_NODE_66, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_67, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 3, /*destNode*/ WARP_NODE_67, /*flags*/ WARP_NO_CHECKPOINT),
    WARP_NODE(/*id*/ WARP_NODE_68, /*destLevel*/ LEVEL_CASTLE, /*destArea*/ 3, /*destNode*/ WARP_NODE_68, /*flags*/ WARP_NO_CHECKPOINT),
    RETURN(),
};

static const LevelScript script_func_local_4[] = {
    OBJECT(/*model*/ MODEL_RED_FLAME,  /*pos*/ -2037,  -818,  -716, /*angle*/ 0, 0, 0, /*bhvParam*/ 0, /*bhv*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,  /*pos*/ -1648,  -818,  -716, /*angle*/ 0, 0, 0, /*bhvParam*/ 0, /*bhv*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,  /*pos*/ -1648,  -818,  -101, /*angle*/ 0, 0, 0, /*bhvParam*/ 0, /*bhv*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,  /*pos*/ -1648,  -818,   512, /*angle*/ 0, 0, 0, /*bhvParam*/ 0, /*bhv*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,  /*pos*/ -2037,  -818,  -101, /*angle*/ 0, 0, 0, /*bhvParam*/ 0, /*bhv*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,  /*pos*/ -2969,  -921,   420, /*angle*/ 0, 0, 0, /*bhvParam*/ 0, /*bhv*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,  /*pos*/ -2037,  -818, -1330, /*angle*/ 0, 0, 0, /*bhvParam*/ 0, /*bhv*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,  /*pos*/ -3839, -1023, -1422, /*angle*/ 0, 0, 0, /*bhvParam*/ 0, /*bhv*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,  /*pos*/ -1929,  -818, -3615, /*angle*/ 0, 0, 0, /*bhvParam*/ 0, /*bhv*/ bhvFlame),
    OBJECT(/*model*/ MODEL_RED_FLAME,  /*pos*/  -834,  -818, -3615, /*angle*/ 0, 0, 0, /*bhvParam*/ 0, /*bhv*/ bhvFlame),
    OBJECT(/*model*/ MODEL_BLUE_FLAME, /*pos*/ -3317,  -921,  1229, /*angle*/ 0, 0, 0, /*bhvParam*/ 0, /*bhv*/ bhvFlame),
    OBJECT(/*model*/ MODEL_BLUE_FLAME, /*pos*/  -204,  -921,  -624, /*angle*/ 0, 0, 0, /*bhvParam*/ 0, /*bhv*/ bhvFlame),
    OBJECT(/*model*/ MODEL_BLUE_FLAME, /*pos*/ -2876,  -921,  1229, /*angle*/ 0, 0, 0, /*bhvParam*/ 0, /*bhv*/ bhvFlame),
    RETURN(),
};

const LevelScript level_castle_inside_entry[] = {
    INIT_LEVEL(),
    LOAD_MIO0        (/*seg*/ 0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd),
    LOAD_MIO0_TEXTURE(/*seg*/ 0x09, _inside_mio0SegmentRomStart, _inside_mio0SegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x06, _group15_mio0SegmentRomStart, _group15_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0D, _group15_geoSegmentRomStart,  _group15_geoSegmentRomEnd),
    LOAD_MIO0        (/*seg*/ 0x08, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
    LOAD_RAW         (/*seg*/ 0x0F, _common0_geoSegmentRomStart,  _common0_geoSegmentRomEnd),
    ALLOC_LEVEL_POOL(),
    MARIO(/*model*/ MODEL_MARIO, /*bhvParam*/ BPARAM4(0x01), /*bhv*/ bhvMario),
    JUMP_LINK(script_func_global_16),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP,        castle_geo_000F18),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND,  castle_geo_001530),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND,    castle_geo_001548),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM,     castle_geo_001518),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR,        castle_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR,        wooden_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR,         metal_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS,       castle_door_0_star_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR,        castle_door_1_star_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS,       castle_door_3_stars_geo),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR,           key_door_geo),
    // The different sets of star doors all use different model IDs, despite them all loading the same geo layout.
    // It is possible that star doors were originally going to have numbers on them, similar to the other locked doors.
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS,  castle_geo_000F00),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00),
    LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00),

    AREA(/*index*/ 1, castle_geo_001400),
		WARP_NODE(/*id*/ 0x07, /*destLevel*/ LEVEL_REC_ROOM, /*destArea*/ 0x01, /*destNode*/ 0x0A, /*flags*/ WARP_NO_CHECKPOINT),
    	OBJECT(/*model*/ MODEL_CASTLE_DOOR_1_STAR, /*pos*/ 650, 614, -1475, /*angle*/ 0, -45, 0, /*behParam*/ 0x00070000, /*beh*/ bhvDoorWarp),        OBJECT(/*model*/ MODEL_NONE,       /*pos*/ -5513,  717, -4324, /*angle*/ 0,  45, 0, /*bhvParam*/ BPARAM2(0x14), /*bhv*/ bhvCastleFloorTrap),
        OBJECT(/*model*/ MODEL_NONE,       /*pos*/  2477,  307, -2000, /*angle*/ 0,   0, 0, /*bhvParam*/ 0, /*bhv*/ bhvFishGroup),
        OBJECT(/*model*/ MODEL_NONE,       /*pos*/  2774,  507, -1716, /*angle*/ 0,  90, 0, /*bhvParam*/ 0, /*bhv*/ bhvTankFishGroup),
        OBJECT(/*model*/ MODEL_NONE,       /*pos*/  3672,  507, -1307, /*angle*/ 0,  45, 0, /*bhvParam*/ 0, /*bhv*/ bhvTankFishGroup),
        OBJECT(/*model*/ MODEL_NONE,       /*pos*/  3748,  507,   773, /*angle*/ 0, -45, 0, /*bhvParam*/ 0, /*bhv*/ bhvTankFishGroup),
        OBJECT(/*model*/ MODEL_NONE,       /*pos*/  2778,  507,  1255, /*angle*/ 0, -90, 0, /*bhvParam*/ 0, /*bhv*/ bhvTankFishGroup),
        OBJECT(/*model*/ MODEL_BOO_CASTLE, /*pos*/ -1000,   50, -3500, /*angle*/ 0,   0, 0, /*bhvParam*/ 0, /*bhv*/ bhvBooInCastle),
        OBJECT(/*model*/ MODEL_TOAD,       /*pos*/ -1671,    0,  1313, /*angle*/ 0,  83, 0, /*bhvParam*/ BPARAM1(DIALOG_133), /*bhv*/ bhvToadMessage),
        OBJECT(/*model*/ MODEL_TOAD,       /*pos*/  1524,  307,   458, /*angle*/ 0, 110, 0, /*bhvParam*/ BPARAM1(DIALOG_134), /*bhv*/ bhvToadMessage),
        OBJECT(/*model*/ MODEL_TOAD,       /*pos*/   596, -306, -2637, /*angle*/ 0, 152, 0, /*bhvParam*/ BPARAM1(DIALOG_135), /*bhv*/ bhvToadMessage),
        JUMP_LINK(script_func_local_1),
        WARP_NODE(/*id*/ WARP_NODE_DEATH, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 1, /*destNode*/ WARP_NODE_03, /*flags*/ WARP_NO_CHECKPOINT),
        TERRAIN(/*terrainData*/ inside_castle_seg7_area_1_collision),
        ROOMS(/*surfaceRooms*/ inside_castle_seg7_area_1_rooms),
        MACRO_OBJECTS(/*objList*/ inside_castle_seg7_area_1_macro_objs),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_EF),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    AREA(/*index*/ 2, castle_geo_001858),
        OBJECT(/*model*/ MODEL_CASTLE_CLOCK_MINUTE_HAND, /*pos*/  -205, 2918, 7222, /*angle*/ 0, 180, 0, /*bhvParam*/ 0, /*bhv*/ bhvClockMinuteHand),
        OBJECT(/*model*/ MODEL_CASTLE_CLOCK_HOUR_HAND,   /*pos*/  -205, 2918, 7222, /*angle*/ 0, 180, 0, /*bhvParam*/ 0, /*bhv*/ bhvClockHourHand),
        OBJECT(/*model*/ MODEL_CASTLE_CLOCK_PENDULUM,    /*pos*/  -205, 2611, 7140, /*angle*/ 0,   0, 0, /*bhvParam*/ 0, /*bhv*/ bhvDecorativePendulum),
        OBJECT(/*model*/ MODEL_LAKITU,                   /*pos*/  4231, 1408, 1601, /*angle*/ 0,   0, 0, /*bhvParam*/ BPARAM2(CAMERA_LAKITU_BP_FOLLOW_CAMERA), /*bhv*/ bhvCameraLakitu),
        OBJECT(/*model*/ MODEL_TOAD,                     /*pos*/  -977, 1203, 2569, /*angle*/ 0,   0, 0, /*bhvParam*/ BPARAM1(DIALOG_076), /*bhv*/ bhvToadMessage),
        OBJECT(/*model*/ MODEL_TOAD,                     /*pos*/ -1584, 2253, 7157, /*angle*/ 0, 136, 0, /*bhvParam*/ BPARAM1(DIALOG_083), /*bhv*/ bhvToadMessage),
        OBJECT(/*model*/ MODEL_TOAD,                     /*pos*/   837, 1203, 3020, /*angle*/ 0, 180, 0, /*bhvParam*/ BPARAM1(DIALOG_137), /*bhv*/ bhvToadMessage),
        JUMP_LINK(script_func_local_2),
        WARP_NODE(/*id*/ WARP_NODE_DEATH, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 1, /*destNode*/ WARP_NODE_03, /*flags*/ WARP_NO_CHECKPOINT),
        TERRAIN(/*terrainData*/ inside_castle_seg7_area_2_collision),
        ROOMS(/*surfaceRooms*/ inside_castle_seg7_area_2_rooms),
        MACRO_OBJECTS(/*objList*/ inside_castle_seg7_area_2_macro_objs),
        INSTANT_WARP(/*index*/ 0, /*destArea*/ 2, /*displace*/ 0, -205, 410),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_EF),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    AREA(/*index*/ 3, castle_geo_001C10),
        OBJECT(/*model*/ MODEL_CASTLE_WATER_LEVEL_PILLAR, /*pos*/  7066, -1178,  -819, /*angle*/ 0,   0, 0, /*bhvParam*/ 0, /*bhv*/ bhvWaterLevelPillar),
        OBJECT(/*model*/ MODEL_CASTLE_WATER_LEVEL_PILLAR, /*pos*/  7066, -1178,  -205, /*angle*/ 0,   0, 0, /*bhvParam*/ 0, /*bhv*/ bhvWaterLevelPillar),
        OBJECT(/*model*/ MODEL_NONE,                      /*pos*/     0,     0,     0, /*angle*/ 0,   0, 0, /*bhvParam*/ 0, /*bhv*/ bhvDDDWarp),
        OBJECT(/*model*/ MODEL_MIPS,                      /*pos*/ -1509, -1177, -1564, /*angle*/ 0,   0, 0, /*bhvParam*/ BPARAM2(MIPS_BP_15_STARS), /*bhv*/ bhvMips),
        OBJECT(/*model*/ MODEL_TOAD,                      /*pos*/  1787, -1381, -1957, /*angle*/ 0, 126, 0, /*bhvParam*/ BPARAM1(DIALOG_082), /*bhv*/ bhvToadMessage),
        OBJECT(/*model*/ MODEL_TOAD,                      /*pos*/ -4048, -1381, -1334, /*angle*/ 0,  30, 0, /*bhvParam*/ BPARAM1(DIALOG_136), /*bhv*/ bhvToadMessage),
        JUMP_LINK(script_func_local_3),
        JUMP_LINK(script_func_local_4),
        WARP_NODE(/*id*/ WARP_NODE_DEATH, /*destLevel*/ LEVEL_CASTLE_GROUNDS, /*destArea*/ 1, /*destNode*/ WARP_NODE_03, /*flags*/ WARP_NO_CHECKPOINT),
        TERRAIN(/*terrainData*/ inside_castle_seg7_area_3_collision),
        ROOMS(/*surfaceRooms*/ inside_castle_seg7_area_3_rooms),
        MACRO_OBJECTS(/*objList*/ inside_castle_seg7_area_3_macro_objs),
        SET_BACKGROUND_MUSIC(/*settingsPreset*/ 0x0001, /*seq*/ SEQ_LEVEL_EF),
        TERRAIN_TYPE(/*terrainType*/ TERRAIN_STONE),
    END_AREA(),

    FREE_LEVEL_POOL(),
    MARIO_POS(/*area*/ 1, /*yaw*/ 180, /*pos*/ -1023, 0, 1152),
    CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
    CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
    CLEAR_LEVEL(),
    SLEEP_BEFORE_EXIT(/*frames*/ 1),
    EXIT(),
};
