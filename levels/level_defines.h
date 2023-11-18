#ifdef VERSION_JP
#define VAL_DIFF 25000
#else
#define VAL_DIFF 60000
#endif

// Define lists for list of level for macros. Each of the following fields are described:
// Argument 1: Internal ROM name of the level.
// Argument 2: Level enumerator for enum used to identify the level ID.
// Argument 3: Course enumerator for enum used to identify the course ID.
// Argument 4: Shorthand name of the level which should be the name of the levels/ folder of the level.
// Argument 5: The shared texture bin used.
// Argument 6: Acoustic reaches for each levels.
// Argument 7, 8, 9: Echo levels for individual areas.
// Argument 10: Specify dynamic music tables for levels, if specified. _ for none.
// Argument 11: Specify level camera table, if specified. _ for none.

// NOTE: Be sure to edit sZoomOutAreaMasks in camera.c, as there isnt a good way to macro those right now.
// TODO: Figure something out for sZoomOutAreaMasks?
DEFINE_LEVEL("PLEASANT PLEASANT FALLS", LEVEL_PPF, COURSE_PPF, ppf, generic, 20000, 0x00, 0x00, 0x00, _, sCamPpf) 
DEFINE_LEVEL("ABSTRACT APIARY", LEVEL_AA, COURSE_AA, aa, generic, 20000, 0x00, 0x00, 0x00, _, sCamAa) 
DEFINE_LEVEL("BLASTING BULLET FACTORY", LEVEL_BBF, COURSE_BBF, bbf, generic, 20000, 0x00, 0x00, 0x00, _, sCamBbf) 
DEFINE_LEVEL("BIG BOOS HAUNT", LEVEL_BBH, COURSE_BBH, bbh, spooky, 28000, 0x28, 0x28, 0x28, sDynBBH, sCamBBH) 
DEFINE_LEVEL("COOL COOL MOUNTAIN", LEVEL_CCM, COURSE_CCM, ccm, snow, 17000, 0x10, 0x38, 0x38, _, sCamCCM) 
DEFINE_LEVEL("PEACHS CASTLE", LEVEL_CASTLE, COURSE_NONE, castle_inside, inside, 20000, 0x20, 0x20, 0x30, _, sCamCastle) 
DEFINE_LEVEL("HAZY MAZE CAVE", LEVEL_HMC, COURSE_HMC, hmc, cave, 16000, 0x28, 0x28, 0x28, sDynHMC, sCamHMC) 
DEFINE_LEVEL("SHIFTING SAND LAND", LEVEL_SSL, COURSE_SSL, ssl, generic, 15000, 0x08, 0x30, 0x30, _, sCamSSL) 
DEFINE_LEVEL("BOB OMB BATTLEFIELD", LEVEL_BOB, COURSE_BOB, bob, generic, 15000, 0x08, 0x08, 0x08, _, _) 
DEFINE_LEVEL("SNOWMANS LAND", LEVEL_SL, COURSE_SL, sl, snow, 14000, 0x10, 0x28, 0x28, _, sCamSL) 
DEFINE_LEVEL("WET DRY WORLD", LEVEL_WDW, COURSE_WDW, wdw, grass, 17000, 0x10, 0x18, 0x18, sDynWDW, _) 
DEFINE_LEVEL("JOLLY ROGER BAY", LEVEL_JRB, COURSE_JRB, jrb, water, 20000, 0x10, 0x18, 0x18, sDynJRB, _) 
DEFINE_LEVEL("TINY HUGE ISLAND", LEVEL_THI, COURSE_THI, thi, grass, 20000, 0x0c, 0x0c, 0x20, _, sCamTHI) 
DEFINE_LEVEL("TICK TOCK CLOCK", LEVEL_TTC, COURSE_TTC, ttc, machine, 18000, 0x18, 0x18, 0x18, _, _) 
DEFINE_LEVEL("RAINBOW RIDE", LEVEL_RR, COURSE_RR, rr, sky, 20000, 0x20, 0x20, 0x20, _, sCamRR) 
DEFINE_LEVEL("CASTLE GROUNDS", LEVEL_CASTLE_GROUNDS, COURSE_NONE, castle_grounds, outside, 25000, 0x08, 0x08, 0x08, _, _) 
DEFINE_LEVEL("BOWSER DARK WORLD", LEVEL_BITDW, COURSE_BITDW, bitdw, sky, 16000, 0x28, 0x28, 0x28, _, _) 
DEFINE_LEVEL("VANISH CAP", LEVEL_VCUTM, COURSE_VCUTM, vcutm, outside, 30000, 0x28, 0x28, 0x28, _, _) 
DEFINE_LEVEL("BOWSER FIERY SEA", LEVEL_BITFS, COURSE_BITFS, bitfs, sky, 16000, 0x28, 0x28, 0x28, _, _) 
DEFINE_LEVEL("SECRET AQUARIUM", LEVEL_SA, COURSE_SA, sa, inside, 20000, 0x10, 0x10, 0x10, _, _) 
DEFINE_LEVEL("BOWSER SKY", LEVEL_BITS, COURSE_BITS, bits, sky, 16000, 0x28, 0x28, 0x28, _, _) 
DEFINE_LEVEL("LETHAL LAVA LAND", LEVEL_LLL, COURSE_LLL, lll, fire, 22000, 0x08, 0x30, 0x30, _, _) 
DEFINE_LEVEL("DIRE DIRE DOCKS", LEVEL_DDD, COURSE_DDD, ddd, water, 17000, 0x10, 0x20, 0x20, sDynDDD, _) 
DEFINE_LEVEL("WHOMPS FORTRESS", LEVEL_WF, COURSE_WF, wf, grass, 13000, 0x08, 0x08, 0x08, _, _) 
DEFINE_LEVEL("ENDING", LEVEL_ENDING, COURSE_CAKE_END, ending, generic, 20000, 0x00, 0x00, 0x00, _, _) 
DEFINE_LEVEL("CASTLE COURTYARD", LEVEL_CASTLE_COURTYARD, COURSE_NONE, castle_courtyard, outside, 20000, 0x00, 0x00, 0x00, _, sCamCastleCourtyard) 
DEFINE_LEVEL("PEACHS SECRET SLIDE", LEVEL_PSS, COURSE_PSS, pss, mountain, 20000, 0x28, 0x28, 0x28, _, _) 
DEFINE_LEVEL("METAL CAP", LEVEL_COTMC, COURSE_COTMC, cotmc, cave, 18000, 0x28, 0x28, 0x28, _, sCamCotMC) 
DEFINE_LEVEL("WING CAP", LEVEL_TOTWC, COURSE_TOTWC, totwc, sky, 20000, 0x20, 0x20, 0x20, _, _) 
DEFINE_LEVEL("BOWSER 1", LEVEL_BOWSER_1, COURSE_BITDW, bowser_1, generic, VAL_DIFF, 0x40, 0x40, 0x40, _, _) 
DEFINE_LEVEL("WINGED MARIO", LEVEL_WMOTR, COURSE_WMOTR, wmotr, generic, 20000, 0x28, 0x28, 0x28, _, _) 
DEFINE_LEVEL("DRY BONES DESERT", LEVEL_DBD, COURSE_DBD, dbd, generic, 20000, 0x00, 0x00, 0x00, _, sCamDbd) 
DEFINE_LEVEL("BOWSER 2", LEVEL_BOWSER_2, COURSE_BITFS, bowser_2, fire, VAL_DIFF, 0x40, 0x40, 0x40, _, _) 
DEFINE_LEVEL("BOWSER 3", LEVEL_BOWSER_3, COURSE_BITS, bowser_3, generic, VAL_DIFF, 0x40, 0x40, 0x40, _, _) 
DEFINE_LEVEL("BOILING HOT BASALT", LEVEL_BHB, COURSE_BHB, bhb, generic, 20000, 0x00, 0x00, 0x00, _, sCamBhb) 
DEFINE_LEVEL("TALL TALL MOUNTAIN", LEVEL_TTM, COURSE_TTM, ttm, mountain, 15000, 0x08, 0x08, 0x08, _, _) 
DEFINE_LEVEL("TOXIC CAVERN", LEVEL_TC, COURSE_TC, tc, generic, 20000, 0x00, 0x00, 0x00, _, sCamTc) 
DEFINE_LEVEL("POKEY OASIS", LEVEL_PO, COURSE_PO, po, generic, 20000, 0x00, 0x00, 0x00, sDynUnk38, sCamDdc) 
DEFINE_LEVEL("BOB OMB VILLAGE", LEVEL_BOV, COURSE_BOV, bov, generic, 20000, 0x00, 0x00, 0x00, _, sCamBov) 
DEFINE_LEVEL("THE STARRY NIGHT SKIES", LEVEL_TSSS, COURSE_TSSS, tsss, generic, 20000, 0x00, 0x00, 0x00, sDynUnk38, sCamTsss) 
DEFINE_LEVEL("PIRANHA PLANT VALLEY", LEVEL_PPV, COURSE_PPV, ppv, generic, 20000, 0x00, 0x00, 0x00, _, sCamPpv) 
DEFINE_LEVEL("LUNAR LANDSCAPE", LEVEL_LL, COURSE_LL, ll, generic, 20000, 0x00, 0x00, 0x00, sDynUnk38, sCamLl) 
DEFINE_LEVEL("FINE ART FRENZY", LEVEL_FAF, COURSE_FAF, faf, generic, 20000, 0x00, 0x00, 0x00, sDynUnk38, sCamFaf) 
DEFINE_LEVEL("SALTY SALTY SHORE", LEVEL_SSS, COURSE_SSS, sss, generic, 20000, 0x00, 0x00, 0x00, _, sCamSss) 
DEFINE_LEVEL("GRABYA FACTORY", LEVEL_GF, COURSE_GF, gf, generic, 20000, 0x00, 0x00, 0x00, sDynUnk38, sCamGf) 
DEFINE_LEVEL("CHROMA TUNDRA", LEVEL_CT, COURSE_CT, ct, generic, 20000, 0x00, 0x00, 0x00, sDynUnk38, sCamCt) 
DEFINE_LEVEL("AMP CAVERN", LEVEL_AC, COURSE_AC, ac, generic, 20000, 0x00, 0x00, 0x00, sDynUnk38, sCamAc) 
DEFINE_LEVEL("KOOPA BROS STUDIOS", LEVEL_KBS, COURSE_KBS, kbs, generic, 20000, 0x00, 0x00, 0x00, sDynUnk38, sCamKbs) 
DEFINE_LEVEL("HEAVENLY HIGHLANDS", LEVEL_HH, COURSE_HH, hh, generic, 20000, 0x00, 0x00, 0x00, sDynUnk38, sCamHh) 
DEFINE_LEVEL("BOWSER 4", LEVEL_BOWSER_4, COURSE_BITFT, bowser_4, generic, 20000, 0x00, 0x00, 0x00, sDynUnk38, sCamBowser4) 
DEFINE_LEVEL("BOWSER 5", LEVEL_BOWSER_5, COURSE_EF, bowser_5, generic, 20000, 0x00, 0x00, 0x00, sDynUnk38, sCamBowser5) 
DEFINE_LEVEL("BOWSER FURIOUS TEMPEST", LEVEL_BITFT, COURSE_BITFT, bitft, generic, 20000, 0x00, 0x00, 0x00, sDynUnk38, sCamBitft) 
DEFINE_LEVEL("ETERNAL FORT", LEVEL_EF, COURSE_EF, ef, generic, 20000, 0x00, 0x00, 0x00, sDynUnk38, sCamEf) 
DEFINE_LEVEL("REC ROOM", LEVEL_REC_ROOM, COURSE_NONE, REC_ROOM, generic, 20000, 0x00, 0x00, 0x00, _, sCamRecRoom) 
DEFINE_LEVEL("DRY DRY DUNES", LEVEL_DDD2, COURSE_DDD2, ddd2, generic, 20000, 0x00, 0x00, 0x00, _, sCamDdd2) 
DEFINE_LEVEL("CHEEP CHEEP BAY", LEVEL_CCB, COURSE_CCB, ccb, generic, 20000, 0x00, 0x00, 0x00, _, sCamCcb) 
DEFINE_LEVEL("HOLLOW HORROR WALLS", LEVEL_ET, COURSE_ET, et, generic, 20000, 0x00, 0x00, 0x00, _, sCamEt) 
DEFINE_LEVEL("DRIP DRIP CAVE", LEVEL_DDC, COURSE_DDC, ddc, generic, 20000, 0x00, 0x00, 0x00, _, sCamDdc) 
DEFINE_LEVEL("SKY SEAS", LEVEL_SS, COURSE_SS, ss, generic, 20000, 0x00, 0x00, 0x00, _, sCamSs) 
DEFINE_LEVEL("CITY WORLD", LEVEL_CW, COURSE_CW, cw, generic, 20000, 0x00, 0x00, 0x00, _, sCamCw) 
DEFINE_LEVEL("PIT OF PERIL", LEVEL_POP, COURSE_POP, pop, generic, 20000, 0x00, 0x00, 0x00, _, sCamPop) 
DEFINE_LEVEL("DELICIOUS CAKE", LEVEL_DELICIOUS_CAKE, COURSE_NONE, delicious_cake, generic, 20000, 0x00, 0x00, 0x00, _, sCamDeliciousCake) 
