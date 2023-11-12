Lights1 faf_dl_f3dlite_material_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Vtx faf_dl_Cube_mesh_layer_1_vtx_0[24] = {
	{{ {400, 100, -400}, 0, {624, 496}, {0, 127, 0, 255} }},
	{{ {-400, 100, -400}, 0, {880, 496}, {0, 127, 0, 255} }},
	{{ {-400, 100, 400}, 0, {880, 240}, {0, 127, 0, 255} }},
	{{ {400, 100, 400}, 0, {624, 240}, {0, 127, 0, 255} }},
	{{ {400, -100, 400}, 0, {368, 240}, {0, 0, 127, 255} }},
	{{ {400, 100, 400}, 0, {624, 240}, {0, 0, 127, 255} }},
	{{ {-400, 100, 400}, 0, {624, -16}, {0, 0, 127, 255} }},
	{{ {-400, -100, 400}, 0, {368, -16}, {0, 0, 127, 255} }},
	{{ {-400, -100, 400}, 0, {368, 1008}, {129, 0, 0, 255} }},
	{{ {-400, 100, 400}, 0, {624, 1008}, {129, 0, 0, 255} }},
	{{ {-400, 100, -400}, 0, {624, 752}, {129, 0, 0, 255} }},
	{{ {-400, -100, -400}, 0, {368, 752}, {129, 0, 0, 255} }},
	{{ {-400, -100, -400}, 0, {112, 496}, {0, 129, 0, 255} }},
	{{ {400, -100, -400}, 0, {368, 496}, {0, 129, 0, 255} }},
	{{ {400, -100, 400}, 0, {368, 240}, {0, 129, 0, 255} }},
	{{ {-400, -100, 400}, 0, {112, 240}, {0, 129, 0, 255} }},
	{{ {400, -100, -400}, 0, {368, 496}, {127, 0, 0, 255} }},
	{{ {400, 100, -400}, 0, {624, 496}, {127, 0, 0, 255} }},
	{{ {400, 100, 400}, 0, {624, 240}, {127, 0, 0, 255} }},
	{{ {400, -100, 400}, 0, {368, 240}, {127, 0, 0, 255} }},
	{{ {-400, -100, -400}, 0, {368, 752}, {0, 0, 129, 255} }},
	{{ {-400, 100, -400}, 0, {624, 752}, {0, 0, 129, 255} }},
	{{ {400, 100, -400}, 0, {624, 496}, {0, 0, 129, 255} }},
	{{ {400, -100, -400}, 0, {368, 496}, {0, 0, 129, 255} }},
};

Gfx faf_dl_Cube_mesh_layer_1_tri_0[] = {
	gsSPVertex(faf_dl_Cube_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(faf_dl_Cube_mesh_layer_1_vtx_0 + 16, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};

Gfx mat_faf_dl_f3dlite_material[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(faf_dl_f3dlite_material_lights),
	gsSPEndDisplayList(),
};

Gfx faf_dl_Cube_mesh_layer_1[] = {
	gsSPDisplayList(mat_faf_dl_f3dlite_material),
	gsSPDisplayList(faf_dl_Cube_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx faf_dl_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

