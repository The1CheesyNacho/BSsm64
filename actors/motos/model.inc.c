
/**************************************************************/
/*	shape data motos_basedata_A (skeleton & animation) 		  */
/**************************************************************/

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-braces"

#define	softspriteON	1
#define ShapeColor_motos_basedata_A(r,g,b)   {{r/4 ,g/4 ,b/4 ,0 ,r/4 ,g/4 ,b/4 ,0 },{ r,g,b,0, r,g,b,0, 40, 40, 40, 0} }


/*-------------------------------------------------------------*/
/*	light data                                                 */
/*-------------------------------------------------------------*/
static Lights1 light_motos_basedata_A[]={
	ShapeColor_motos_basedata_A(228,131,0),
	ShapeColor_motos_basedata_A(76,76,98),
	ShapeColor_motos_basedata_A(13,28,48),
	ShapeColor_motos_basedata_A(15,54,111),
	ShapeColor_motos_basedata_A(255,0,0),
	ShapeColor_motos_basedata_A(255,255,255),
};

/*-------------------------------------------------------------*/
/*	texture data                                               */
/*-------------------------------------------------------------*/
ALIGNED8 static const Texture motos_skinA_txt[] = {
#include "actors/motos/motos_skina.rgba16.inc.c"  
};

ALIGNED8 static const Texture motos_skinB_txt[] = {
#include "actors/motos/motos_skinb.rgba16.inc.c"  
};

ALIGNED8 static const Texture motos_skinC_txt[] = {
#include "actors/motos/motos_skinc.rgba16.inc.c"  
};

ALIGNED8 static const Texture motos_skinD_txt[] = {
#include "actors/motos/motos_skind.rgba16.inc.c"  
};

ALIGNED8 static const Texture motos_eye_txt[] = {
#include "actors/motos/motos_face.rgba16.inc.c"  
};

ALIGNED8 static const Texture motos_parts_txt[] = {
#include "actors/motos/motos_limb.rgba16.inc.c"  
};

ALIGNED8 static const Texture motos_body1_txt[] = {
#include "actors/motos/bomb_left_side.rgba16.inc.c"
};

ALIGNED8 static const Texture motos_body2_txt[] = {
#include "actors/motos/bomb_right_side.rgba16.inc.c"
};



/* ========================================================================	
		: motos body sprite.
=========================================================================== */
static Vtx vtx_motos_body[] = {
	{   -209/4,    210/4,      0,     0,     0,     0,   181,   32,   64,  255}, 
	{   -209/4,   -209/4,      0,     0,     0,  2016,   181,   32,   64,  255}, 
	{      0/4,   -209/4,      0,     0,   992,  2016,   181,   32,   64,  255}, 
	{      0/4,    210/4,      0,     0,   992,     0,   181,   32,   64,  255}, 
	{      0/4,   -209/4,      0,     0,     0,  2016,   181,   32,   64,  255}, 
	{    210/4,    210/4,      0,     0,   992,     0,   181,   32,   64,  255}, 
	{      0/4,    210/4,      0,     0,     0,     0,   181,   32,   64,  255}, 
	{    210/4,   -209/4,      0,     0,   992,  2016,   181,   32,   64,  255}, 
};

const Gfx RCP_motos_body[] = {
	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
	gsSPClearGeometryMode(G_LIGHTING), 
	gsDPSetTile(G_IM_FMT_RGBA,G_IM_SIZ_16b, 0, 0, 7, 0,  0,0,0, 0,0,0),

	gsSPTexture(0xffff,0xffff, 0, 0, G_ON),

	gs_Tani_SetUpTileDescrip(G_IM_FMT_RGBA,G_IM_SIZ_16b, 32, 64,  0, 0, G_TX_CLAMP|G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_CLAMP|G_TX_NOMIRROR, 6, G_TX_NOLOD),

	gs_Tani_LoadTextureImage2(motos_body1_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 7),
	gsSPVertex(&vtx_motos_body[0],  4, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 0, 2, 3, 0),

	gs_Tani_LoadTextureImage2(motos_body2_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 7),
	gsSPVertex(&vtx_motos_body[4],  4, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 0, 3, 1, 0),

	gsSPTexture(0xffff, 0xffff, 0, 0, G_OFF),

	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPSetGeometryMode(G_LIGHTING), 
	gsSPEndDisplayList() 
};

/* ========================================================================	
		: motos arm sprite.
=========================================================================== */
static Vtx vtx_motos_arm[] = {
	{    -49/4,    -49/4,      0,     0,     0,   992,   181,   32,   64,  255}, 
	{     50/4,    -49/4,      0,     0,   992,   992,   181,   32,   64,  255}, 
	{     50/4,     50/4,      0,     0,   992,     0,   181,   32,   64,  255}, 
	{    -49/4,     50/4,      0,     0,     0,     0,   181,   32,   64,  255}, 
};

const Gfx RCP_motos_arm[] = {
	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
	gsSPClearGeometryMode(G_LIGHTING), 
	gsDPSetTile(G_IM_FMT_RGBA,G_IM_SIZ_16b, 0, 0, 7, 0,  0,0,0, 0,0,0),

	gsSPTexture(0xffff,0xffff, 0, 0, G_ON),

	gs_Tani_SetUpTileDescrip(G_IM_FMT_RGBA,G_IM_SIZ_16b, 32, 32,  0, 0, G_TX_CLAMP|G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_CLAMP|G_TX_NOMIRROR, 5, G_TX_NOLOD),
	gs_Tani_LoadTextureImage2(motos_parts_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 7),
	gsSPVertex(&vtx_motos_arm[0],  4, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 0, 2, 3, 0),

	gsSPTexture(0xffff, 0xffff, 0, 0, G_OFF),

	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPSetGeometryMode(G_LIGHTING), 
	gsSPEndDisplayList() 
};

/* ========================================================================	
		: motos leg sprite.
=========================================================================== */
static Vtx vtx_motos_leg[] = {
	{    -53/4,    -53/4,      0,     0,     0,   992,   181,   32,   64,  255}, 
	{     54/4,    -53/4,      0,     0,   992,   992,   181,   32,   64,  255}, 
	{     54/4,     54/4,      0,     0,   992,     0,   181,   32,   64,  255}, 
	{    -53/4,     54/4,      0,     0,     0,     0,   181,   32,   64,  255}, 
};

const Gfx RCP_motos_leg[] = {
	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_DECALRGBA, G_CC_DECALRGBA),
	gsSPClearGeometryMode(G_LIGHTING), 
	gsDPSetTile(G_IM_FMT_RGBA,G_IM_SIZ_16b, 0, 0, 7, 0,  0,0,0, 0,0,0),

	gsSPTexture(0xffff,0xffff, 0, 0, G_ON),

	gs_Tani_SetUpTileDescrip(G_IM_FMT_RGBA,G_IM_SIZ_16b, 32, 32,  0, 0, G_TX_CLAMP|G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_CLAMP|G_TX_NOMIRROR, 5, G_TX_NOLOD),

	gs_Tani_LoadTextureImage2(motos_parts_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 7),
	gsSPVertex(&vtx_motos_leg[0],  4, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 0, 2, 3, 0),

	gsSPTexture(0xffff, 0xffff, 0, 0, G_OFF),

	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPSetGeometryMode(G_LIGHTING), 
	gsSPEndDisplayList() 
};

/*-------------------------------------------------------------*/
/*	vertex & polygon data                                      */
/*-------------------------------------------------------------*/

static Vtx vtx_motos_LhandB_0[] = {
	{     -3,      0,     25,     0,   880,    22,   202,  209,  103,  255}, 
	{    139,     -1,      0,     0,   472,   990,   108,  190,    0,  255}, 
	{     42,     41,     25,     0,   214,   330,   217,  110,   48,  255}, 
	{     42,     41,     25,     0,   904,     6,   217,  110,   48,  255}, 
	{    139,     -1,      0,     0,   468,  1006,   108,  190,    0,  255}, 
	{     42,     41,    -24,     0,    152,     2,   248,  105,  187,  255}, 
	{     -3,      0,    -24,     0,     0,   990,   160,   24,  178,  255}, 
	{     42,     41,     25,     0,   990,     0,   217,  110,   48,  255}, 
	{     42,     41,    -24,     0,   990,   990,   248,  105,  187,  255}, 
	{     -3,      0,     25,     0,     0,     0,   202,  209,  103,  255}, 
	{     -3,      0,    -24,     0,    46,     8,   160,   24,  178,  255}, 
	{     42,     41,    -24,     0,   812,   242,   248,  105,  187,  255}, 
	{    139,     -1,      0,     0,   482,   988,   108,  190,    0,  255}, 
};

static Vtx vtx_motos_LhandB_1[] = {

	{     -3,      0,    -24,     0,   996, -2314,   160,   24,  178,  255}, 
	{    139,     -1,      0,     0,   654,  1072,   108,  190,    0,  255}, 
	{     -3,      0,     25,     0,    -8, -2318,   202,  209,  103,  255}, 
};
static Vtx vtx_motos_LhandA_0[] = {
	{     -2,      0,     25,     0,   900, -2988,   202,   48,  104,  255}, 
	{    140,      0,      0,     0,   480,  1004,   108,   66,    0,  255}, 
	{     -2,      0,    -24,     0,    16, -2966,   160,  232,  177,  255}, 
};

static Vtx vtx_motos_LhandA_1[] = {
	{     43,    -41,     25,     0,   392,    78,   217,  146,   48,  255}, 
	{    140,      0,      0,     0,   984,   954,   108,   66,    0,  255}, 
	{     -2,      0,     25,     0,    52,   920,   202,   48,  104,  255}, 
	{     43,    -41,    -24,     0,     0,     0,   248,  151,  187,  255}, 
	{     43,    -41,     25,     0,     0,   990,   217,  146,   48,  255}, 
	{     -2,      0,    -24,     0,   990,     0,   160,  232,  177,  255}, 
	{     -2,      0,     25,     0,   990,   990,   202,   48,  104,  255}, 
	{     43,    -41,    -24,     0,   186,   234,   248,  151,  187,  255}, 
	{     -2,      0,    -24,     0,   956,    32,   160,  232,  177,  255}, 
	{    140,      0,      0,     0,   382,   996,   108,   66,    0,  255}, 
	{     43,    -41,    -24,     0,   896,    -4,   248,  151,  187,  255}, 
	{    140,      0,      0,     0,   468,  1008,   108,   66,    0,  255}, 
	{     43,    -41,     25,     0,   112,    42,   217,  146,   48,  255}, 
};
static Vtx vtx_motos_RhandA_0[] = {
	{     -3,      1,     25,     0,   800,   -12,   160,  233,   78,  255}, 
	{     42,    -40,     25,     0,   170,   290,   249,  151,   69,  255}, 
	{    139,      2,      0,     0,   646,   986,   108,   66,    0,  255}, 
	{     42,    -40,    -24,     0,   116,   962,   217,  146,  208,  255}, 
	{    139,      2,      0,     0,   554,   -34,   108,   66,    0,  255}, 
	{     42,    -40,     25,     0,   864,   958,   249,  151,   69,  255}, 
	{     -3,      1,    -24,     0,    -6,     8,   201,   47,  152,  255}, 
	{    139,      2,      0,     0,   728,   974,   108,   66,    0,  255}, 
	{     42,    -40,    -24,     0,   722,   156,   217,  146,  208,  255}, 
	{     -3,      1,     25,     0,   990,   990,   160,  233,   78,  255}, 
	{     42,    -40,    -24,     0,     0,     0,   217,  146,  208,  255}, 
	{     42,    -40,     25,     0,     0,   990,   249,  151,   69,  255}, 
	{     -3,      1,    -24,     0,   990,     0,   201,   47,  152,  255}, 
};

static Vtx vtx_motos_RhandA_1[] = {
	{     -3,      1,     25,     0,   950, -3084,   160,  233,   78,  255}, 
	{    139,      2,      0,     0,   508,  1048,   108,   66,    0,  255}, 
	{     -3,      1,    -24,     0,   -12, -3084,   201,   47,  152,  255}, 
};
static Vtx vtx_motos_RhandB_0[] = {
	{     -3,      0,    -24,     0,    44, -3090,   160,   24,  178,  255}, 
	{    139,     -1,      0,     0,   442,   984,   108,  190,    0,  255}, 
	{     -3,      0,     25,     0,   876, -3076,   202,  209,  103,  255}, 
};

static Vtx vtx_motos_RhandB_1[] = {
	{     42,     41,    -24,     0,   390,   -62,   248,  105,  187,  255}, 
	{    139,     -1,      0,     0,   988,   988,   108,  190,    0,  255}, 
	{     -3,      0,    -24,     0,    64,   988,   160,   24,  178,  255}, 
	{     42,     41,     25,     0,   -22,   -50,   217,  110,   48,  255}, 
	{     -3,      0,    -24,     0,   990,   990,   160,   24,  178,  255}, 
	{     -3,      0,     25,     0,   990,     0,   202,  209,  103,  255}, 
	{     42,     41,    -24,     0,   -22,   972,   248,  105,  187,  255}, 
	{     42,     41,     25,     0,   136,   178,   217,  110,   48,  255}, 
	{     -3,      0,     25,     0,   898,   -20,   202,  209,  103,  255}, 
	{    139,     -1,      0,     0,   478,   928,   108,  190,    0,  255}, 
	{     42,     41,     25,     0,    10,   986,   217,  110,   48,  255}, 
	{    139,     -1,      0,     0,   510,   -34,   108,  190,    0,  255}, 
	{     42,     41,    -24,     0,   934,   986,   248,  105,  187,  255}, 
};
static Vtx vtx_motos_Lfoot[] = {
	{    -29,     35,     53,     0,   886,   430,     0,  118,   46,  255}, 
	{     72,      9,    -48,     0,    62,   530,    63,   58,  163,  255}, 
	{    -29,     35,    -48,     0,   462,   986,   223,   53,  146,  255}, 
	{    100,      2,      2,     0,   168,   130,   121,  221,    0,  255}, 
	{     72,      9,     53,     0,   486,   -26,    27,  232,  121,  255}, 
	{    -53,     41,      2,     0,   768,   814,   131,   22,    0,  255}, 
	{     24,    -30,    -30,     0,   616,   138,     9,  151,  187,  255}, 
	{    -29,     35,    -48,     0,   244,   886,   223,   53,  146,  255}, 
	{     72,      9,    -48,     0,   850,   904,    63,   58,  163,  255}, 
	{    -34,    -12,     32,     0,    18,    36,   178,  190,   74,  255}, 
	{    -53,     41,      2,     0,   512,   816,   131,   22,    0,  255}, 
	{    -34,    -12,    -26,     0,   868,    26,   174,  170,  215,  255}, 
	{     24,    -30,    -30,     0,    52,   -10,     9,  151,  187,  255}, 
	{    100,      2,      2,     0,   440,   990,   121,  221,    0,  255}, 
	{     24,    -30,     36,     0,   958,   -18,     4,  137,   41,  255}, 
	{    -34,    -12,     32,     0,   392,   262,   178,  190,   74,  255}, 
	{    -29,     35,     53,     0,    30,   964,     0,  118,   46,  255}, 
	{    -53,     41,      2,     0,   872,   852,   131,   22,    0,  255}, 
	{    -29,     35,    -48,     0,   100,   142,   223,   53,  146,  255}, 
	{    -34,    -12,    -26,     0,   958,   -28,   174,  170,  215,  255}, 
	{    -53,     41,      2,     0,   502,   930,   131,   22,    0,  255}, 
	{    -34,    -12,     32,     0,   706,   148,   178,  190,   74,  255}, 
	{     72,      9,     53,     0,   218,   892,    27,  232,  121,  255}, 
	{    -29,     35,     53,     0,   222,   112,     0,  118,   46,  255}, 
	{     24,    -30,    -30,     0,   616,   138,     9,  151,  187,  255}, 
	{    -34,    -12,    -26,     0,   262,   150,   174,  170,  215,  255}, 
	{    -29,     35,    -48,     0,   244,   886,   223,   53,  146,  255}, 
	{     24,    -30,     36,     0,   716,   602,     4,  137,   41,  255}, 
	{     24,    -30,     36,     0,   990,   990,     4,  137,   41,  255}, 
	{    -34,    -12,     32,     0,   922,   -22,   178,  190,   74,  255}, 
	{    -34,    -12,    -26,     0,    22,   -22,   174,  170,  215,  255}, 
	{     24,    -30,    -30,     0,     0,   990,     9,  151,  187,  255}, 
	{    100,      2,      2,     0,   208,   814,   121,  221,    0,  255}, 
	{     72,      9,     53,     0,   940,   702,    27,  232,  121,  255}, 
	{     24,    -30,     36,     0,   746,   228,     4,  137,   41,  255}, 
	{     24,    -30,    -30,     0,   394,   -20,     9,  151,  187,  255}, 
	{     72,      9,    -48,     0,   220,   592,    63,   58,  163,  255}, 
	{    100,      2,      2,     0,   946,   672,   121,  221,    0,  255}, 
};
static Vtx vtx_motos_Rfoot[] = {
	{     72,      9,     49,     0,    76,   964,    38,   25,  118,  255}, 
	{    -34,    -12,     27,     0,   694,   226,   179,  189,   74,  255}, 
	{     24,    -30,     31,     0,   300,   252,     4,  137,   41,  255}, 
	{    -34,    -12,     27,     0,    18,    28,   179,  189,   74,  255}, 
	{    -53,     41,     -1,     0,   468,   892,   198,  112,    0,  255}, 
	{    -34,    -12,    -31,     0,   940,    68,   173,  170,  215,  255}, 
	{     24,    -30,    -35,     0,   242,   272,    10,  151,  186,  255}, 
	{    100,      2,     -1,     0,   524,   750,   121,  221,    0,  255}, 
	{     24,    -30,     31,     0,   806,   220,     4,  137,   41,  255}, 
	{    -53,     41,     -1,     0,    22,   780,   198,  112,    0,  255}, 
	{    -29,     35,    -52,     0,   804,   742,   209,    9,  139,  255}, 
	{    -34,    -12,    -31,     0,   540,    62,   173,  170,  215,  255}, 
	{    -53,     41,     -1,     0,   964,   902,   198,  112,    0,  255}, 
	{    -34,    -12,     27,     0,   406,   136,   179,  189,   74,  255}, 
	{    -29,     35,     49,     0,   128,   866,   196,   36,  105,  255}, 
	{    -29,     35,    -52,     0,   224,   740,   209,    9,  139,  255}, 
	{     72,      9,    -52,     0,   892,   934,    63,   59,  164,  255}, 
	{     24,    -30,    -35,     0,   606,   182,    10,  151,  186,  255}, 
	{     72,      9,     49,     0,    76,   964,    38,   25,  118,  255}, 
	{    -29,     35,     49,     0,   750,   894,   196,   36,  105,  255}, 
	{    -34,    -12,     27,     0,   694,   226,   179,  189,   74,  255}, 
	{     24,    -30,    -35,     0,   700,   170,    10,  151,  186,  255}, 
	{     72,      9,    -52,     0,   224,   692,    63,   59,  164,  255}, 
	{    100,      2,     -1,     0,   716,   916,   121,  221,    0,  255}, 
	{    100,      2,     -1,     0,    80,   846,   121,  221,    0,  255}, 
	{     72,      9,     49,     0,   856,   740,    38,   25,  118,  255}, 
	{     24,    -30,     31,     0,   538,   162,     4,  137,   41,  255}, 
	{    -34,    -12,    -31,     0,   218,    90,   173,  170,  215,  255}, 
	{    -53,     41,     -1,     0,   876,   762,   198,  112,    0,  255}, 
	{     72,      9,    -52,     0,   -14,   596,    63,   59,  164,  255}, 
	{    -29,     35,    -52,     0,   520,   978,   209,    9,  139,  255}, 
	{    -29,     35,     49,     0,   984,   366,   196,   36,  105,  255}, 
	{     72,      9,     49,     0,   448,   -14,    38,   25,  118,  255}, 
	{    100,      2,     -1,     0,    74,   188,   121,  221,    0,  255}, 
	{     24,    -30,     31,     0,   994,   990,     4,  137,   41,  255}, 
	{    -34,    -12,    -31,     0,    22,   -26,   173,  170,  215,  255}, 
	{     24,    -30,    -35,     0,   -42,   986,    10,  151,  186,  255}, 
	{    -34,    -12,     27,     0,   936,   -24,   179,  189,   74,  255}, 
};
static Vtx vtx_motos_head_0[] = {
	{     51,    -53,    -30,     0,    -8,   990,    92,  175,  225,  255}, 
	{     51,      0,    -62,     0,   964,   990,    93,  243,  171,  255}, 
	{     73,      0,      0,     0,   478,  1932,   126,    0,    0,  255}, 
	{     51,    -53,     31,     0,     0,   990,    92,  188,   53,  255}, 
	{     51,    -53,    -30,     0,   970,   990,    92,  175,  225,  255}, 
	{     73,      0,      0,     0,   468,    18,   126,    0,    0,  255}, 
	{     51,      0,    -62,     0,     0,   990,    93,  243,  171,  255}, 
	{     51,     55,    -30,     0,   956,   990,    93,   67,  203,  255}, 
	{     73,      0,      0,     0,   462,    30,   126,    0,    0,  255}, 
	{     51,     55,    -30,     0,     0,   990,    93,   67,  203,  255}, 
	{     51,     55,     31,     0,   964,   990,    93,   80,   31,  255}, 
	{     73,      0,      0,     0,   466,    22,   126,    0,    0,  255}, 
	{     51,      0,     63,     0,     0,   990,    93,   12,   85,  255}, 
	{     51,    -53,     31,     0,   968,   990,    92,  188,   53,  255}, 
	{     73,      0,      0,     0,   468,    20,   126,    0,    0,  255}, 
	{     51,     55,     31,     0,     0,   990,    93,   80,   31,  255}, 
	{     51,      0,     63,     0,   968,   990,    93,   12,   85,  255}, 
	{     73,      0,      0,     0,   468,    18,   126,    0,    0,  255}, 
};

static Vtx vtx_motos_head_1[] = {
	{      0,     81,    -46,     0,     0,   990,    64,  103,  221,  255}, 
	{     51,     55,     31,     0,  1660,   -10,    93,   80,   31,  255}, 
	{     51,     55,    -30,     0,   280,   -10,    93,   67,  203,  255}, 
	{      0,     81,     47,     0,  2012,   990,    64,   82,   71,  255}, 
};

static Vtx vtx_motos_head_2[] = {
	{      0,    -79,    -46,     0,     0,   990,    64,  173,  185,  255}, 
	{     51,      0,    -62,     0,  1668,   -34,    93,  243,  171,  255}, 
	{     51,    -53,    -30,     0,   288,   -34,    92,  175,  225,  255}, 
	{      0,    -79,     47,     0,     0,   990,    64,  153,   35,  255}, 
	{     51,    -53,    -30,     0,  1680,   -26,    92,  175,  225,  255}, 
	{     51,    -53,     31,     0,   296,   -26,    92,  188,   53,  255}, 
	{      0,    -79,    -46,     0,  2012,   990,    64,  173,  185,  255}, 
	{      0,      0,    -92,     0,     0,   990,    63,   20,  149,  255}, 
	{     51,     55,    -30,     0,  1636,   -30,    93,   67,  203,  255}, 
	{     51,      0,    -62,     0,   256,   -30,    93,  243,  171,  255}, 
	{      0,     81,    -46,     0,  2012,   990,    64,  103,  221,  255}, 
	{      0,      0,     93,     0,     0,   990,    64,  235,  107,  255}, 
	{     51,    -53,     31,     0,  1668,   -22,    92,  188,   53,  255}, 
	{     51,      0,     63,     0,   288,   -24,    93,   12,   85,  255}, 
	{      0,    -79,     47,     0,  2008,   990,    64,  153,   35,  255}, 
	{      0,     81,     47,     0,     0,   990,    64,   82,   71,  255}, 
	{      0,      0,     93,     0,  2012,   990,    64,  235,  107,  255}, 
	{     51,      0,     63,     0,  1700,   -28,    93,   12,   85,  255}, 
	{      0,    -79,    -46,     0,     0,   990,    64,  173,  185,  255}, 
	{      0,      0,    -92,     0,  2012,   990,    63,   20,  149,  255}, 
	{     51,      0,    -62,     0,  1668,   -34,    93,  243,  171,  255}, 
	{     51,     55,     31,     0,   320,   -28,    93,   80,   31,  255}, 
};

static Gfx gfx_motos_LhandB_0[] = {
	gs_Tani_LoadTextureImage2(motos_skinC_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 7),
	gsSPLight((&light_motos_basedata_A[5].l[0]),1 ),
	gsSPLight((&light_motos_basedata_A[5].a   ),2 ),
	gsSPVertex(&vtx_motos_LhandB_0[0], 13, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 6, 7, 8, 0),
	gsSP1Triangle( 6, 9, 7, 0),
	gsSP1Triangle(10,11,12, 0),
	gsSPEndDisplayList() 
};

static Gfx gfx_motos_LhandB_1[] = {
	gs_Tani_LoadTextureImage2(motos_skinD_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 7),
	gsSPVertex(&vtx_motos_LhandB_1[0],  3, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSPEndDisplayList() 
};

const Gfx RCP_motos_LhandB[] = {
	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
	gsDPSetTile(G_IM_FMT_RGBA,G_IM_SIZ_16b, 0, 0, 7, 0,  0,0,0, 0,0,0),

	gsSPTexture(0xffff,0xffff, 0, 0, G_ON),

	gs_Tani_SetUpTileDescrip(G_IM_FMT_RGBA,G_IM_SIZ_16b, 32, 32,  0, 0, G_TX_WRAP|G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP|G_TX_NOMIRROR, 5, G_TX_NOLOD),

		gsSPDisplayList(gfx_motos_LhandB_0),
		gsSPDisplayList(gfx_motos_LhandB_1),

	gsSPTexture(0xffff, 0xffff, 0, 0, G_OFF),

	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPEndDisplayList() 
};

static Gfx gfx_motos_LhandA_0[] = {
	gs_Tani_LoadTextureImage2(motos_skinD_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 7),
	gsSPLight((&light_motos_basedata_A[5].l[0]),1 ),
	gsSPLight((&light_motos_basedata_A[5].a   ),2 ),
	gsSPVertex(&vtx_motos_LhandA_0[0],  3, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSPEndDisplayList() 
};

static Gfx gfx_motos_LhandA_1[] = {
	gs_Tani_LoadTextureImage2(motos_skinC_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 7),
	gsSPVertex(&vtx_motos_LhandA_1[0], 13, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 4, 6, 5, 0),
	gsSP1Triangle( 7, 8, 9, 0),
	gsSP1Triangle(10,11,12, 0),
	gsSPEndDisplayList() 
};

const Gfx RCP_motos_LhandA[] = {
	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
	gsDPSetTile(G_IM_FMT_RGBA,G_IM_SIZ_16b, 0, 0, 7, 0,  0,0,0, 0,0,0),

	gsSPTexture(0xffff,0xffff, 0, 0, G_ON),

	gs_Tani_SetUpTileDescrip(G_IM_FMT_RGBA,G_IM_SIZ_16b, 32, 32,  0, 0, G_TX_WRAP|G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP|G_TX_NOMIRROR, 5, G_TX_NOLOD),

		gsSPDisplayList(gfx_motos_LhandA_0),
		gsSPDisplayList(gfx_motos_LhandA_1),

	gsSPTexture(0xffff, 0xffff, 0, 0, G_OFF),

	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPEndDisplayList() 
};

static Gfx gfx_motos_RhandA_0[] = {
	gs_Tani_LoadTextureImage2(motos_skinC_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 7),
	gsSPLight((&light_motos_basedata_A[5].l[0]),1 ),
	gsSPLight((&light_motos_basedata_A[5].a   ),2 ),
	gsSPVertex(&vtx_motos_RhandA_0[0], 13, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 6, 7, 8, 0),
	gsSP1Triangle( 9,10,11, 0),
	gsSP1Triangle( 9,12,10, 0),
	gsSPEndDisplayList() 
};

static Gfx gfx_motos_RhandA_1[] = {
	gs_Tani_LoadTextureImage2(motos_skinD_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 7),
	gsSPVertex(&vtx_motos_RhandA_1[0],  3, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSPEndDisplayList() 
};

const Gfx RCP_motos_RhandA[] = {
	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
	gsDPSetTile(G_IM_FMT_RGBA,G_IM_SIZ_16b, 0, 0, 7, 0,  0,0,0, 0,0,0),

	gsSPTexture(0xffff,0xffff, 0, 0, G_ON),

	gs_Tani_SetUpTileDescrip(G_IM_FMT_RGBA,G_IM_SIZ_16b, 32, 32,  0, 0, G_TX_WRAP|G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP|G_TX_NOMIRROR, 5, G_TX_NOLOD),

		gsSPDisplayList(gfx_motos_RhandA_0),
		gsSPDisplayList(gfx_motos_RhandA_1),

	gsSPTexture(0xffff, 0xffff, 0, 0, G_OFF),

	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPEndDisplayList() 
};

static Gfx gfx_motos_RhandB_0[] = {
	gs_Tani_LoadTextureImage2(motos_skinD_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 7),

	gsSPLight((&light_motos_basedata_A[5].l[0]),1 ),
	gsSPLight((&light_motos_basedata_A[5].a   ),2 ),

	gsSPVertex(&vtx_motos_RhandB_0[0],  3, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSPEndDisplayList() 
};

static Gfx gfx_motos_RhandB_1[] = {
	gs_Tani_LoadTextureImage2(motos_skinC_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 7),
	gsSPVertex(&vtx_motos_RhandB_1[0], 13, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 3, 6, 4, 0),
	gsSP1Triangle( 7, 8, 9, 0),
	gsSP1Triangle(10,11,12, 0),
	gsSPEndDisplayList() 
};

const Gfx RCP_motos_RhandB[] = {
	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
	gsDPSetTile(G_IM_FMT_RGBA,G_IM_SIZ_16b, 0, 0, 7, 0,  0,0,0, 0,0,0),

	gsSPTexture(0xffff,0xffff, 0, 0, G_ON),


	gs_Tani_SetUpTileDescrip(G_IM_FMT_RGBA,G_IM_SIZ_16b, 32, 32,  0, 0, G_TX_WRAP|G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP|G_TX_NOMIRROR, 5, G_TX_NOLOD),

		gsSPDisplayList(gfx_motos_RhandB_0),
		gsSPDisplayList(gfx_motos_RhandB_1),

	gsSPTexture(0xffff, 0xffff, 0, 0, G_OFF),

	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPEndDisplayList() 
};

static Gfx gfx_motos_Lfoot_0[] = {
	gs_Tani_LoadTextureImage2(motos_skinD_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 7),
	gsSPLight((&light_motos_basedata_A[5].l[0]),1 ),
	gsSPLight((&light_motos_basedata_A[5].a   ),2 ),
	gsSPVertex(&vtx_motos_Lfoot[0],  6, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 0, 3, 1, 0),
	gsSP1Triangle( 0, 4, 3, 0),
	gsSP1Triangle( 0, 2, 5, 0),
	gsSPEndDisplayList() 
};

static Gfx gfx_motos_Lfoot_1[] = {
	gs_Tani_LoadTextureImage2(motos_skinC_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 7),
	gsSPVertex(&vtx_motos_Lfoot[6], 15, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 6, 7, 8, 0),
	gsSP1Triangle( 9,10,11, 0),
	gsSP1Triangle(12,13,14, 0),
	gsSPVertex(&vtx_motos_Lfoot[21],  7, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 0, 6, 1, 0),
	gsSPEndDisplayList() 
};

static Gfx gfx_motos_Lfoot_2[] = {
	gs_Tani_LoadTextureImage2(motos_skinA_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 7),
	gsSPVertex(&vtx_motos_Lfoot[28], 10, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 0, 2, 3, 0),
	gsSP1Triangle( 4, 5, 6, 0),
	gsSP1Triangle( 7, 8, 9, 0),
	gsSPEndDisplayList() 
};

const Gfx RCP_motos_Lfoot[] = {
	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
	gsDPSetTile(G_IM_FMT_RGBA,G_IM_SIZ_16b, 0, 0, 7, 0,  0,0,0, 0,0,0),

	gsSPTexture(0xffff,0xffff, 0, 0, G_ON),

	gs_Tani_SetUpTileDescrip(G_IM_FMT_RGBA,G_IM_SIZ_16b, 32, 32,  0, 0, G_TX_WRAP|G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP|G_TX_NOMIRROR, 5, G_TX_NOLOD),

		gsSPDisplayList(gfx_motos_Lfoot_0),
		gsSPDisplayList(gfx_motos_Lfoot_1),
		gsSPDisplayList(gfx_motos_Lfoot_2),

	gsSPTexture(0xffff, 0xffff, 0, 0, G_OFF),

	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPEndDisplayList() 
};
static Gfx gfx_motos_Rfoot_0[] = {
	gs_Tani_LoadTextureImage2(motos_skinC_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 7),
	gsSPLight((&light_motos_basedata_A[5].l[0]),1 ),
	gsSPLight((&light_motos_basedata_A[5].a   ),2 ),
	gsSPVertex(&vtx_motos_Rfoot[0], 15, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 6, 7, 8, 0),
	gsSP1Triangle( 9,10,11, 0),
	gsSP1Triangle(12,13,14, 0),
	gsSPVertex(&vtx_motos_Rfoot[15], 13, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 6, 7, 8, 0),
	gsSP1Triangle( 9,10,11, 0),
	gsSP1Triangle( 0, 2,12, 0),
	gsSPEndDisplayList() 
};

static Gfx gfx_motos_Rfoot_1[] = {
	gs_Tani_LoadTextureImage2(motos_skinD_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 7),
	gsSPVertex(&vtx_motos_Rfoot[28],  6, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 0, 3, 4, 0),
	gsSP1Triangle( 0, 5, 1, 0),
	gsSP1Triangle( 0, 4, 5, 0),
	gsSPEndDisplayList() 
};

static Gfx gfx_motos_Rfoot_2[] = {
	gs_Tani_LoadTextureImage2(motos_skinA_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 7),
	gsSPVertex(&vtx_motos_Rfoot[34],  4, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 0, 3, 1, 0),
	gsSPEndDisplayList() 
};

const Gfx RCP_motos_Rfoot[] = {
	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
	gsDPSetTile(G_IM_FMT_RGBA,G_IM_SIZ_16b, 0, 0, 7, 0,  0,0,0, 0,0,0),

	gsSPTexture(0xffff,0xffff, 0, 0, G_ON),

	gs_Tani_SetUpTileDescrip(G_IM_FMT_RGBA,G_IM_SIZ_16b, 32, 32,  0, 0, G_TX_WRAP|G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP|G_TX_NOMIRROR, 5, G_TX_NOLOD),

		gsSPDisplayList(gfx_motos_Rfoot_0),
		gsSPDisplayList(gfx_motos_Rfoot_1),
		gsSPDisplayList(gfx_motos_Rfoot_2),

	gsSPTexture(0xffff, 0xffff, 0, 0, G_OFF),

	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPEndDisplayList() 
};
static Gfx gfx_motos_head_0[] = {
	gs_Tani_LoadTextureImage2(motos_skinC_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 7),
	gsSPLight((&light_motos_basedata_A[5].l[0]),1 ),
	gsSPLight((&light_motos_basedata_A[5].a   ),2 ),
	gsSPVertex(&vtx_motos_head_0[0], 15, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 6, 7, 8, 0),
	gsSP1Triangle( 9,10,11, 0),
	gsSP1Triangle(12,13,14, 0),
	gsSPVertex(&vtx_motos_head_0[15],  3, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSPEndDisplayList() 
};

static Gfx gfx_motos_head_1[] = {
	gs_Tani_LoadTextureImage2(motos_eye_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 7),
	gsSPVertex(&vtx_motos_head_1[0],  4, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 0, 3, 1, 0),
	gsSPEndDisplayList() 
};

static Gfx gfx_motos_head_2[] = {
	gs_Tani_LoadTextureImage2(motos_skinB_txt, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 7),
	gsSPVertex(&vtx_motos_head_2[0], 15, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 3, 6, 4, 0),
	gsSP1Triangle( 7, 8, 9, 0),
	gsSP1Triangle( 7,10, 8, 0),
	gsSP1Triangle(11,12,13, 0),
	gsSP1Triangle(11,14,12, 0),
	gsSPVertex(&vtx_motos_head_2[15],  7, 0), 
	gsSP1Triangle( 0, 1, 2, 0),
	gsSP1Triangle( 3, 4, 5, 0),
	gsSP1Triangle( 0, 2, 6, 0),
	gsSPEndDisplayList() 
};

const Gfx RCP_motos_head[] = {
	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
	gsDPSetTile(G_IM_FMT_RGBA,G_IM_SIZ_16b, 0, 0, 7, 0,  0,0,0, 0,0,0),

	gsSPTexture(0xffff,0xffff, 0, 0, G_ON),

	gs_Tani_SetUpTileDescrip(G_IM_FMT_RGBA,G_IM_SIZ_16b, 32, 32,  0, 0, G_TX_WRAP|G_TX_NOMIRROR, 5, G_TX_NOLOD, G_TX_WRAP|G_TX_NOMIRROR, 5, G_TX_NOLOD),

		gsSPDisplayList(gfx_motos_head_0),

	gs_Tani_SetUpTileDescrip(G_IM_FMT_RGBA,G_IM_SIZ_16b, 64, 32,  0, 0, G_TX_WRAP|G_TX_NOMIRROR, 6, G_TX_NOLOD, G_TX_WRAP|G_TX_NOMIRROR, 5, G_TX_NOLOD),

		gsSPDisplayList(gfx_motos_head_1),
		gsSPDisplayList(gfx_motos_head_2),

	gsSPTexture(0xffff, 0xffff, 0, 0, G_OFF),

	gsDPPipeSync(),
	gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
	gsSPEndDisplayList() 
};
#pragma GCC diagnostic pop
