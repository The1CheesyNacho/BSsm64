Lights1 statue_f3dlite_material_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx statue_castle_grounds_textures_00800_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 statue_castle_grounds_textures_00800_rgba16_rgba16[] = {
	#include "actors/statue/castle_grounds_textures.00800.rgba16.inc.c"
};

Gfx statue_castle_grounds_textures_08800_rgba16_i8_aligner[] = {gsSPEndDisplayList()};
u8 statue_castle_grounds_textures_08800_rgba16_i8[] = {
	#include "actors/statue/castle_grounds_textures.08800.rgba16.i8.inc.c"
};

Gfx statue_castle_grounds_textures_04800_rgba16_i8_aligner[] = {gsSPEndDisplayList()};
u8 statue_castle_grounds_textures_04800_rgba16_i8[] = {
	#include "actors/statue/castle_grounds_textures.04800.rgba16.i8.inc.c"
};

Gfx statue_fcv_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 statue_fcv_rgba16[] = {
	#include "actors/statue/fcv.rgba16.inc.c"
};

Vtx statue_Bone_mesh_layer_1_vtx_0[20] = {
	{{ {94, 253, -55}, 0, {994, 14}, {254, 254, 254, 254} }},
	{{ {-110, 253, -55}, 0, {-28, 14}, {254, 254, 254, 254} }},
	{{ {-110, 253, 47}, 0, {-28, 14}, {254, 254, 254, 254} }},
	{{ {94, 253, 47}, 0, {994, 14}, {254, 254, 254, 254} }},
	{{ {-212, -2, 150}, 0, {3034, 990}, {111, 111, 136, 254} }},
	{{ {-110, 253, 47}, 0, {2012, 72}, {111, 111, 136, 254} }},
	{{ {-110, 253, -55}, 0, {990, 72}, {111, 111, 136, 254} }},
	{{ {-212, -2, -157}, 0, {0, 990}, {111, 111, 136, 254} }},
	{{ {197, -2, 150}, 0, {2830, 984}, {195, 195, 207, 254} }},
	{{ {94, 253, 47}, 0, {2148, 66}, {195, 195, 207, 254} }},
	{{ {-110, 253, 47}, 0, {786, 66}, {195, 195, 207, 254} }},
	{{ {-212, -2, 150}, 0, {104, 984}, {195, 195, 207, 254} }},
	{{ {-212, -2, -157}, 0, {2694, 990}, {155, 155, 173, 254} }},
	{{ {-110, 253, -55}, 0, {2012, 72}, {155, 155, 173, 254} }},
	{{ {94, 253, -55}, 0, {650, 72}, {155, 155, 173, 254} }},
	{{ {197, -2, -157}, 0, {0, 990}, {155, 155, 173, 254} }},
	{{ {197, -2, -157}, 0, {2012, 990}, {254, 254, 254, 254} }},
	{{ {94, 253, -55}, 0, {1330, 72}, {254, 254, 254, 254} }},
	{{ {94, 253, 47}, 0, {650, 72}, {254, 254, 254, 254} }},
	{{ {197, -2, 150}, 0, {0, 990}, {254, 254, 254, 254} }},
};

Gfx statue_Bone_mesh_layer_1_tri_0[] = {
	gsSPVertex(statue_Bone_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(statue_Bone_mesh_layer_1_vtx_0 + 16, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx statue_Bone_mesh_layer_1_vtx_1[4] = {
	{{ {63, 238, 59}, 0, {990, 0}, {195, 195, 207, 254} }},
	{{ {-79, 238, 59}, 0, {0, 0}, {195, 195, 207, 254} }},
	{{ {-79, 140, 98}, 0, {0, 990}, {195, 195, 207, 254} }},
	{{ {63, 140, 98}, 0, {990, 990}, {195, 195, 207, 254} }},
};

Gfx statue_Bone_mesh_layer_1_tri_1[] = {
	gsSPVertex(statue_Bone_mesh_layer_1_vtx_1 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx statue_Bone_mesh_layer_1_vtx_2[51] = {
	{{ {-8, 359, 47}, 0, {476, 1076}, {111, 111, 136, 254} }},
	{{ {-8, 288, 1}, 0, {290, 1288}, {111, 111, 136, 254} }},
	{{ {89, 251, 1}, 0, {354, 1840}, {111, 111, 136, 254} }},
	{{ {66, 333, 1}, 0, {532, 1492}, {125, 125, 148, 254} }},
	{{ {89, 251, 1}, 0, {354, 1840}, {125, 125, 148, 254} }},
	{{ {-8, 359, -45}, 0, {476, 1076}, {125, 125, 148, 254} }},
	{{ {-8, 359, 47}, 0, {476, 1076}, {219, 219, 226, 254} }},
	{{ {89, 251, 1}, 0, {354, 1840}, {219, 219, 226, 254} }},
	{{ {66, 333, 1}, 0, {532, 1492}, {219, 219, 226, 254} }},
	{{ {-8, 359, 47}, 0, {476, 1076}, {195, 195, 207, 254} }},
	{{ {123, 398, 1}, 0, {798, 1560}, {195, 195, 207, 254} }},
	{{ {41, 406, 1}, 0, {682, 1160}, {195, 195, 207, 254} }},
	{{ {41, 406, 1}, 0, {682, 1160}, {219, 219, 226, 254} }},
	{{ {123, 398, 1}, 0, {798, 1560}, {219, 219, 226, 254} }},
	{{ {-8, 359, -45}, 0, {476, 1076}, {219, 219, 226, 254} }},
	{{ {-8, 481, 1}, 0, {798, 712}, {195, 195, 207, 254} }},
	{{ {41, 406, 1}, 0, {682, 1160}, {195, 195, 207, 254} }},
	{{ {-8, 359, -45}, 0, {476, 1076}, {195, 195, 207, 254} }},
	{{ {-8, 359, 47}, 0, {476, 1076}, {219, 219, 226, 254} }},
	{{ {41, 406, 1}, 0, {682, 1160}, {219, 219, 226, 254} }},
	{{ {-8, 481, 1}, 0, {798, 712}, {219, 219, 226, 254} }},
	{{ {-8, 359, -45}, 0, {476, 1076}, {172, 172, 187, 254} }},
	{{ {-139, 398, 1}, 0, {360, 360}, {172, 172, 187, 254} }},
	{{ {-56, 406, 1}, 0, {518, 712}, {172, 172, 187, 254} }},
	{{ {-105, 251, 1}, 0, {32, 956}, {125, 125, 148, 254} }},
	{{ {-82, 333, 1}, 0, {284, 816}, {125, 125, 148, 254} }},
	{{ {-8, 359, -45}, 0, {476, 1076}, {125, 125, 148, 254} }},
	{{ {-8, 481, 1}, 0, {798, 712}, {111, 111, 136, 254} }},
	{{ {-8, 359, -45}, 0, {476, 1076}, {111, 111, 136, 254} }},
	{{ {-56, 406, 1}, 0, {518, 712}, {111, 111, 136, 254} }},
	{{ {-56, 406, 1}, 0, {518, 712}, {172, 172, 187, 254} }},
	{{ {-8, 359, 47}, 0, {476, 1076}, {172, 172, 187, 254} }},
	{{ {-8, 481, 1}, 0, {798, 712}, {172, 172, 187, 254} }},
	{{ {-56, 406, 1}, 0, {518, 712}, {219, 219, 226, 254} }},
	{{ {-139, 398, 1}, 0, {360, 360}, {219, 219, 226, 254} }},
	{{ {-8, 359, 47}, 0, {476, 1076}, {219, 219, 226, 254} }},
	{{ {-8, 359, 47}, 0, {476, 1076}, {148, 148, 168, 254} }},
	{{ {-105, 251, 1}, 0, {32, 956}, {148, 148, 168, 254} }},
	{{ {-8, 288, 1}, 0, {290, 1288}, {148, 148, 168, 254} }},
	{{ {-82, 333, 1}, 0, {284, 816}, {219, 219, 226, 254} }},
	{{ {-105, 251, 1}, 0, {32, 956}, {219, 219, 226, 254} }},
	{{ {89, 251, 1}, 0, {354, 1840}, {112, 112, 137, 254} }},
	{{ {-8, 288, 1}, 0, {290, 1288}, {112, 112, 137, 254} }},
	{{ {-8, 359, -45}, 0, {476, 1076}, {112, 112, 137, 254} }},
	{{ {-105, 251, 1}, 0, {32, 956}, {112, 112, 137, 254} }},
	{{ {-8, 359, 47}, 0, {476, 1076}, {111, 111, 136, 254} }},
	{{ {66, 333, 1}, 0, {532, 1492}, {111, 111, 136, 254} }},
	{{ {123, 398, 1}, 0, {798, 1560}, {111, 111, 136, 254} }},
	{{ {-8, 359, -45}, 0, {476, 1076}, {111, 111, 136, 254} }},
	{{ {-82, 333, 1}, 0, {284, 816}, {111, 111, 136, 254} }},
	{{ {-139, 398, 1}, 0, {360, 360}, {111, 111, 136, 254} }},
};

Gfx statue_Bone_mesh_layer_1_tri_2[] = {
	gsSPVertex(statue_Bone_mesh_layer_1_vtx_2 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(statue_Bone_mesh_layer_1_vtx_2 + 15, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(statue_Bone_mesh_layer_1_vtx_2 + 30, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(5, 9, 10, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSPVertex(statue_Bone_mesh_layer_1_vtx_2 + 45, 6, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 1, 3, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(5, 4, 0, 0),
	gsSPEndDisplayList(),
};

Vtx statue_Bone_mesh_layer_5_vtx_0[4] = {
	{{ {-98, 259, 50}, 0, {-16, 1008}, {0, 0, 127, 255} }},
	{{ {107, 259, 50}, 0, {1008, 1008}, {0, 0, 127, 255} }},
	{{ {107, 448, 50}, 0, {1008, -16}, {0, 0, 127, 255} }},
	{{ {-98, 448, 50}, 0, {-16, -16}, {0, 0, 127, 255} }},
};

Gfx statue_Bone_mesh_layer_5_tri_0[] = {
	gsSPVertex(statue_Bone_mesh_layer_5_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};


Gfx mat_statue_f3dlite_material_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, statue_castle_grounds_textures_00800_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_statue_f3dlite_material_001[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx mat_statue_f3dlite_material_002[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, statue_castle_grounds_textures_08800_rgba16_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_statue_f3dlite_material_002[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx mat_statue_f3dlite_material_003[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, statue_castle_grounds_textures_04800_rgba16_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_statue_f3dlite_material_003[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx mat_statue_f3dlite_material[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsSPSetLights1(statue_f3dlite_material_lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, statue_fcv_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_statue_f3dlite_material[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx statue_Bone_mesh_layer_1[] = {
	gsSPDisplayList(mat_statue_f3dlite_material_001),
	gsSPDisplayList(statue_Bone_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_statue_f3dlite_material_001),
	gsSPDisplayList(mat_statue_f3dlite_material_002),
	gsSPDisplayList(statue_Bone_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_revert_statue_f3dlite_material_002),
	gsSPDisplayList(mat_statue_f3dlite_material_003),
	gsSPDisplayList(statue_Bone_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_revert_statue_f3dlite_material_003),
	gsSPEndDisplayList(),
};

Gfx statue_Bone_mesh_layer_5[] = {
	gsSPDisplayList(mat_statue_f3dlite_material),
	gsSPDisplayList(statue_Bone_mesh_layer_5_tri_0),
	gsSPDisplayList(mat_revert_statue_f3dlite_material),
	gsSPEndDisplayList(),
};

Gfx statue_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

