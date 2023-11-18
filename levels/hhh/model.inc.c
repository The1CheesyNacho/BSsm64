Lights1 hhh_dl_f3dlite_material_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Vtx hhh_dl_Cube_mesh_layer_1_vtx_0[24] = {
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

Gfx hhh_dl_Cube_mesh_layer_1_tri_0[] = {
	gsSPVertex(hhh_dl_Cube_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 14, 15, 0),
	gsSPVertex(hhh_dl_Cube_mesh_layer_1_vtx_0 + 16, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSPEndDisplayList(),
};

Gfx mat_hhh_dl_f3dlite_material[] = {
	gsDPPipeSync(),
	gsDPShhhCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPShhhLights1(hhh_dl_f3dlite_material_lights),
	gsSPEndDisplayList(),
};

Gfx hhh_dl_Cube_mesh_layer_1[] = {
	gsSPDisplayList(mat_hhh_dl_f3dlite_material),
	gsSPDisplayList(hhh_dl_Cube_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx hhh_dl_material_revert_render_shhhtings[] = {
	gsDPPipeSync(),
	gsSPShhhGeomhhhryMode(G_LIGHTING),
	gsSPClearGeomhhhryMode(G_TEXTURE_GEN),
	gsDPShhhCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPShhhEnvColor(255, 255, 255, 255),
	gsDPShhhAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

