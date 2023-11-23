// Stomp Smoke

// 0x040220C8
static const Vtx small_water_splash_seg4_vertex_040220C8[] = {
    {{{   -32,      0,     32}, 0, {     0,      0}, {0xff, 0xff, 0xff, 0xc8}}},
    {{{    32,      0,     32}, 0, {  1984,      0}, {0xff, 0xff, 0xff, 0xc8}}},
    {{{    32,      0,    -32}, 0, {  1984,   1984}, {0xff, 0xff, 0xff, 0xc8}}},
    {{{   -32,      0,    -32}, 0, {     0,   1984}, {0xff, 0xff, 0xff, 0xc8}}},
};

// 0x04022108
static const Vtx small_water_splash_seg4_vertex_04022108[] = {
    {{{   -32,      0,     32}, 0, {     0,      0}, {0xff, 0x00, 0x00, 0xc8}}},
    {{{    32,      0,     32}, 0, {  1984,      0}, {0xff, 0x00, 0x00, 0xc8}}},
    {{{    32,      0,    -32}, 0, {  1984,   1984}, {0xff, 0x00, 0x00, 0xc8}}},
    {{{   -32,      0,    -32}, 0, {     0,   1984}, {0xff, 0x00, 0x00, 0xc8}}},
};

// 0x04022148
ALIGNED8 static const Texture small_water_splash_seg4_texture_04022148[] = {
#include "actors/small_water_splash/small_water_splash_0.ia16.inc.c"
};

// 0x04022948
ALIGNED8 static const Texture small_water_splash_seg4_texture_04022948[] = {
#include "actors/small_water_splash/small_water_splash_1.ia16.inc.c"
};

// 0x04023148
ALIGNED8 static const Texture small_water_splash_seg4_texture_04023148[] = {
#include "actors/small_water_splash/small_water_splash_2.ia16.inc.c"
};

// 0x04023948
ALIGNED8 static const Texture small_water_splash_seg4_texture_04023948[] = {
#include "actors/small_water_splash/small_water_splash_3.ia16.inc.c"
};

// 0x04024148
ALIGNED8 static const Texture small_water_splash_seg4_texture_04024148[] = {
#include "actors/small_water_splash/small_water_splash_4.ia16.inc.c"
};

// 0x04024948
ALIGNED8 static const Texture small_water_splash_seg4_texture_04024948[] = {
#include "actors/small_water_splash/small_water_splash_5.ia16.inc.c"
};

// 0x04025148 - 0x04025190
const Gfx small_water_splash_seg4_dl_04025148[] = {
    gsSPClearGeometryMode(G_LIGHTING),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_MODULATEIA),
    gsSPTexture(0x8000, 0x8000, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_CLAMP, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPEndDisplayList(),
};

// 0x04025190 - 0x040251C8
const Gfx small_water_splash_seg4_dl_04025190[] = {
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),
    gsDPPipeSync(),
    gsSPTexture(0x0001, 0x0001, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPEndDisplayList(),
};

// 0x040251C8 - 0x040251E0
const Gfx small_water_splash_seg4_dl_040251C8[] = {
    gsSPDisplayList(small_water_splash_seg4_dl_04025148),
    gsSPVertex(small_water_splash_seg4_vertex_040220C8, 4, 0),
    gsSPBranchList(small_water_splash_seg4_dl_04025190),
};

// 0x040251E0 - 0x040251F8
const Gfx small_water_splash_seg4_dl_040251E0[] = {
    gsSPDisplayList(small_water_splash_seg4_dl_04025148),
    gsSPVertex(small_water_splash_seg4_vertex_04022108, 4, 0),
    gsSPBranchList(small_water_splash_seg4_dl_04025190),
};

// 0x040251F8 - 0x04025210
const Gfx small_water_splash_seg4_dl_040251F8[] = {
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, small_water_splash_seg4_texture_04022148),
    gsSPBranchList(small_water_splash_seg4_dl_040251C8),
};

// 0x04025210 - 0x04025228
const Gfx small_water_splash_seg4_dl_04025210[] = {
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, small_water_splash_seg4_texture_04022948),
    gsSPBranchList(small_water_splash_seg4_dl_040251C8),
};

// 0x04025228 - 0x04025240
const Gfx small_water_splash_seg4_dl_04025228[] = {
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, small_water_splash_seg4_texture_04023148),
    gsSPBranchList(small_water_splash_seg4_dl_040251C8),
};

// 0x04025240 - 0x04025258
const Gfx small_water_splash_seg4_dl_04025240[] = {
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, small_water_splash_seg4_texture_04023948),
    gsSPBranchList(small_water_splash_seg4_dl_040251C8),
};

// 0x04025258 - 0x04025270
const Gfx small_water_splash_seg4_dl_04025258[] = {
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, small_water_splash_seg4_texture_04024148),
    gsSPBranchList(small_water_splash_seg4_dl_040251C8),
};

// 0x04025270 - 0x04025288
const Gfx small_water_splash_seg4_dl_04025270[] = {
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, small_water_splash_seg4_texture_04024948),
    gsSPBranchList(small_water_splash_seg4_dl_040251C8),
};

// 0x04025288 - 0x040252A0
const Gfx small_water_splash_seg4_dl_04025288[] = {
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, small_water_splash_seg4_texture_04022148),
    gsSPBranchList(small_water_splash_seg4_dl_040251E0),
};

// 0x040252A0 - 0x040252B8
const Gfx small_water_splash_seg4_dl_040252A0[] = {
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, small_water_splash_seg4_texture_04022948),
    gsSPBranchList(small_water_splash_seg4_dl_040251E0),
};

// 0x040252B8 - 0x040252D0
const Gfx small_water_splash_seg4_dl_040252B8[] = {
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, small_water_splash_seg4_texture_04023148),
    gsSPBranchList(small_water_splash_seg4_dl_040251E0),
};

// 0x040252D0 - 0x040252E8
const Gfx small_water_splash_seg4_dl_040252D0[] = {
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, small_water_splash_seg4_texture_04023948),
    gsSPBranchList(small_water_splash_seg4_dl_040251E0),
};

// 0x040252E8 - 0x04025300
const Gfx small_water_splash_seg4_dl_040252E8[] = {
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, small_water_splash_seg4_texture_04024148),
    gsSPBranchList(small_water_splash_seg4_dl_040251E0),
};

// 0x04025300 - 0x04025318
const Gfx small_water_splash_seg4_dl_04025300[] = {
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, small_water_splash_seg4_texture_04024948),
    gsSPBranchList(small_water_splash_seg4_dl_040251E0),
};
