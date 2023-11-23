Lights1 pargg_Material_006_f3d_lights = gdSPDefLights1(
	0xDA, 0x0, 0xCC,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 pargg_Material_002_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 pargg_Material_003_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 pargg_Material_005_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 pargg_Material_004_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 pargg_Material_001_f3d_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx pargg_blargg_body___Copia_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 pargg_blargg_body___Copia_rgba16[] = {
	#include "actors/pargg/blargg_body_-_Copia.rgba16.inc.c"
};

Gfx pargg_blargg_belly___Copia_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 pargg_blargg_belly___Copia_rgba16[] = {
	#include "actors/pargg/blargg_belly_-_Copia.rgba16.inc.c"
};

Gfx pargg_blargg_nose___Copia_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 pargg_blargg_nose___Copia_rgba16[] = {
	#include "actors/pargg/blargg_nose_-_Copia.rgba16.inc.c"
};

Gfx pargg_blargg_tounge___Copia_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 pargg_blargg_tounge___Copia_rgba16[] = {
	#include "actors/pargg/blargg_tounge_-_Copia.rgba16.inc.c"
};

Gfx pargg_blargg_eye___Copia_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 pargg_blargg_eye___Copia_rgba16[] = {
	#include "actors/pargg/blargg_eye_-_Copia.rgba16.inc.c"
};

Vtx pargg_000_offset_001_mesh_layer_1_vtx_0[16] = {
	{{ {-268, -119, -45}, 0, {118, 720}, {219, 93, 178, 255} }},
	{{ {-136, -187, -44}, 0, {119, 759}, {100, 18, 180, 255} }},
	{{ {-227, -297, -25}, 0, {130, 821}, {19, 151, 187, 255} }},
	{{ {-136, -187, 42}, 0, {168, 759}, {99, 17, 78, 255} }},
	{{ {-268, -119, 40}, 0, {167, 720}, {218, 93, 78, 255} }},
	{{ {-320, -250, -25}, 0, {130, 794}, {157, 215, 188, 255} }},
	{{ {-227, -297, 19}, 0, {155, 821}, {19, 150, 68, 255} }},
	{{ {-320, -250, 19}, 0, {155, 794}, {156, 215, 67, 255} }},
	{{ {-74, -166, -52}, 0, {114, 751}, {172, 55, 179, 255} }},
	{{ {100, -150, -52}, 0, {114, 741}, {73, 70, 179, 255} }},
	{{ {87, -315, -28}, 0, {128, 835}, {74, 179, 188, 255} }},
	{{ {-74, -166, 48}, 0, {171, 751}, {172, 55, 78, 255} }},
	{{ {-30, -326, -28}, 0, {128, 841}, {197, 166, 188, 255} }},
	{{ {87, -315, 23}, 0, {157, 835}, {74, 178, 68, 255} }},
	{{ {100, -150, 48}, 0, {171, 741}, {72, 70, 78, 255} }},
	{{ {-30, -326, 23}, 0, {157, 841}, {197, 166, 68, 255} }},
};

Gfx pargg_000_offset_001_mesh_layer_1_tri_0[] = {
	gsSPVertex(pargg_000_offset_001_mesh_layer_1_vtx_0 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(0, 2, 5, 0),
	gsSP1Triangle(5, 2, 6, 0),
	gsSP1Triangle(1, 6, 2, 0),
	gsSP1Triangle(1, 3, 6, 0),
	gsSP1Triangle(3, 7, 6, 0),
	gsSP1Triangle(3, 4, 7, 0),
	gsSP1Triangle(4, 5, 7, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 9, 8, 0),
	gsSP1Triangle(11, 8, 12, 0),
	gsSP1Triangle(8, 10, 12, 0),
	gsSP1Triangle(12, 10, 13, 0),
	gsSP1Triangle(9, 13, 10, 0),
	gsSP1Triangle(9, 14, 13, 0),
	gsSP1Triangle(11, 14, 9, 0),
	gsSP1Triangle(14, 11, 15, 0),
	gsSP1Triangle(11, 12, 15, 0),
	gsSP1Triangle(12, 13, 15, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPEndDisplayList(),
};

Vtx pargg_000_offset_001_mesh_layer_1_vtx_1[56] = {
	{{ {295, 228, -167}, 0, {-755, 970}, {90, 42, 177, 255} }},
	{{ {357, 117, -156}, 0, {-622, 614}, {99, 248, 176, 255} }},
	{{ {319, -28, -79}, 0, {-240, 223}, {101, 195, 208, 255} }},
	{{ {110, 20, -260}, 0, {20, 490}, {34, 210, 143, 255} }},
	{{ {91, -172, -138}, 0, {472, -49}, {34, 150, 195, 255} }},
	{{ {237, -80, -3}, 0, {16, 125}, {68, 149, 0, 255} }},
	{{ {319, -28, -3}, 0, {-240, 224}, {99, 177, 0, 255} }},
	{{ {319, -28, 74}, 0, {-240, 223}, {101, 196, 49, 255} }},
	{{ {91, -172, 133}, 0, {472, -49}, {34, 150, 61, 255} }},
	{{ {110, 20, 254}, 0, {20, 490}, {35, 210, 113, 255} }},
	{{ {295, 228, 149}, 0, {-755, 970}, {108, 39, 53, 255} }},
	{{ {357, 116, 143}, 0, {-620, 611}, {93, 248, 86, 255} }},
	{{ {101, 185, 297}, 0, {-322, 966}, {24, 8, 125, 255} }},
	{{ {-273, -30, 195}, 0, {802, 580}, {214, 199, 106, 255} }},
	{{ {-324, 94, 223}, 0, {621, 965}, {187, 56, 91, 255} }},
	{{ {-397, -21, 89}, 0, {998, 683}, {173, 251, 96, 255} }},
	{{ {-397, -21, 89}, 0, {998, 683}, {173, 251, 96, 255} }},
	{{ {-387, -64, 76}, 0, {1075, 551}, {210, 197, 102, 255} }},
	{{ {-273, -30, 195}, 0, {802, 580}, {214, 199, 106, 255} }},
	{{ {-668, -145, -3}, 0, {1744, 492}, {132, 228, 0, 255} }},
	{{ {-667, -145, -3}, 0, {1744, 491}, {206, 139, 0, 255} }},
	{{ {-387, -64, -81}, 0, {1075, 551}, {210, 197, 154, 255} }},
	{{ {-397, -21, -94}, 0, {998, 683}, {173, 251, 160, 255} }},
	{{ {-273, -30, -200}, 0, {802, 580}, {214, 199, 150, 255} }},
	{{ {-324, 94, -229}, 0, {621, 965}, {187, 56, 165, 255} }},
	{{ {101, 185, -303}, 0, {-322, 966}, {20, 10, 131, 255} }},
	{{ {110, 20, -260}, 0, {20, 490}, {34, 210, 143, 255} }},
	{{ {295, 228, -167}, 0, {-755, 970}, {90, 42, 177, 255} }},
	{{ {91, -172, -138}, 0, {472, -49}, {34, 150, 195, 255} }},
	{{ {-189, -198, -105}, 0, {1020, 49}, {232, 145, 200, 255} }},
	{{ {-69, -187, -3}, 0, {784, 7}, {12, 130, 0, 255} }},
	{{ {91, -172, -3}, 0, {472, -49}, {41, 136, 0, 255} }},
	{{ {237, -80, -3}, 0, {16, 125}, {68, 149, 0, 255} }},
	{{ {91, -172, -3}, 0, {472, -49}, {41, 136, 0, 255} }},
	{{ {91, -172, -138}, 0, {472, -49}, {34, 150, 195, 255} }},
	{{ {91, -172, 133}, 0, {472, -49}, {34, 150, 61, 255} }},
	{{ {-69, -187, -3}, 0, {784, 7}, {12, 130, 0, 255} }},
	{{ {-189, -198, 100}, 0, {1020, 49}, {232, 145, 56, 255} }},
	{{ {-273, -30, 195}, 0, {802, 580}, {214, 199, 106, 255} }},
	{{ {110, 20, 254}, 0, {20, 490}, {35, 210, 113, 255} }},
	{{ {-374, -117, 42}, 0, {1168, 394}, {220, 147, 55, 255} }},
	{{ {-387, -64, 76}, 0, {1075, 551}, {210, 197, 102, 255} }},
	{{ {-667, -145, -3}, 0, {1744, 491}, {206, 139, 0, 255} }},
	{{ {-665, -146, -3}, 0, {1741, 489}, {242, 130, 0, 255} }},
	{{ {-374, -117, -48}, 0, {1168, 394}, {220, 147, 201, 255} }},
	{{ {-387, -64, -81}, 0, {1075, 551}, {210, 197, 154, 255} }},
	{{ {-273, -30, -200}, 0, {802, 580}, {214, 199, 150, 255} }},
	{{ {-189, -198, -105}, 0, {1020, 49}, {232, 145, 200, 255} }},
	{{ {-190, -198, -3}, 0, {1021, 49}, {236, 131, 0, 255} }},
	{{ {-374, -117, -48}, 0, {1168, 394}, {220, 147, 201, 255} }},
	{{ {-189, -198, -105}, 0, {1020, 49}, {232, 145, 200, 255} }},
	{{ {-69, -187, -3}, 0, {784, 7}, {12, 130, 0, 255} }},
	{{ {-189, -198, 100}, 0, {1020, 49}, {232, 145, 56, 255} }},
	{{ {-374, -117, 42}, 0, {1168, 394}, {220, 147, 55, 255} }},
	{{ {-374, -117, -3}, 0, {1168, 394}, {236, 131, 0, 255} }},
	{{ {-665, -146, -3}, 0, {1741, 489}, {242, 130, 0, 255} }},
};

Gfx pargg_000_offset_001_mesh_layer_1_tri_1[] = {
	gsSPVertex(pargg_000_offset_001_mesh_layer_1_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 3, 2, 0),
	gsSP1Triangle(5, 4, 2, 0),
	gsSP1Triangle(5, 2, 6, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(5, 7, 8, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSP1Triangle(7, 11, 10, 0),
	gsSP1Triangle(9, 10, 12, 0),
	gsSP1Triangle(12, 13, 9, 0),
	gsSP1Triangle(12, 14, 13, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSPVertex(pargg_000_offset_001_mesh_layer_1_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 0, 3, 0),
	gsSP1Triangle(1, 3, 4, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(3, 6, 5, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(6, 8, 7, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(9, 10, 7, 0),
	gsSP1Triangle(10, 9, 11, 0),
	gsSP1Triangle(7, 10, 12, 0),
	gsSP1Triangle(7, 12, 13, 0),
	gsSP1Triangle(14, 13, 12, 0),
	gsSP1Triangle(14, 12, 15, 0),
	gsSPVertex(pargg_000_offset_001_mesh_layer_1_vtx_1 + 32, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(6, 5, 3, 0),
	gsSP1Triangle(6, 3, 7, 0),
	gsSP1Triangle(6, 8, 5, 0),
	gsSP1Triangle(6, 9, 8, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 11, 10, 0),
	gsSP1Triangle(12, 10, 13, 0),
	gsSP1Triangle(14, 12, 13, 0),
	gsSP1Triangle(14, 15, 12, 0),
	gsSPVertex(pargg_000_offset_001_mesh_layer_1_vtx_1 + 48, 8, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 0, 2, 0),
	gsSP1Triangle(3, 4, 0, 0),
	gsSP1Triangle(5, 0, 4, 0),
	gsSP1Triangle(5, 6, 0, 0),
	gsSP1Triangle(6, 5, 7, 0),
	gsSP1Triangle(6, 7, 1, 0),
	gsSP1Triangle(0, 6, 1, 0),
	gsSPEndDisplayList(),
};

Vtx pargg_000_offset_001_mesh_layer_1_vtx_2[14] = {
	{{ {357, 117, -156}, 0, {22, 487}, {99, 248, 176, 255} }},
	{{ {295, 228, -167}, 0, {-16, -16}, {90, 42, 177, 255} }},
	{{ {295, 228, 149}, 0, {1008, -16}, {108, 39, 53, 255} }},
	{{ {357, 116, 143}, 0, {989, 492}, {93, 248, 86, 255} }},
	{{ {319, -28, -3}, 0, {517, 1007}, {99, 177, 0, 255} }},
	{{ {319, -28, 74}, 0, {764, 1008}, {101, 196, 49, 255} }},
	{{ {319, -28, -79}, 0, {270, 1008}, {101, 195, 208, 255} }},
	{{ {-422, 74, -3}, 0, {496, 106}, {174, 97, 0, 255} }},
	{{ {-397, -21, 89}, 0, {704, 473}, {173, 251, 96, 255} }},
	{{ {-324, 94, 223}, 0, {1008, -16}, {187, 56, 91, 255} }},
	{{ {-656, -134, -3}, 0, {496, 961}, {169, 92, 0, 255} }},
	{{ {-397, -21, -94}, 0, {288, 473}, {173, 251, 160, 255} }},
	{{ {-324, 94, -229}, 0, {-16, -16}, {187, 56, 165, 255} }},
	{{ {-668, -145, -3}, 0, {496, 1008}, {132, 228, 0, 255} }},
};

Gfx pargg_000_offset_001_mesh_layer_1_tri_2[] = {
	gsSPVertex(pargg_000_offset_001_mesh_layer_1_vtx_2 + 0, 14, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(2, 3, 0, 0),
	gsSP1Triangle(3, 4, 0, 0),
	gsSP1Triangle(3, 5, 4, 0),
	gsSP1Triangle(4, 6, 0, 0),
	gsSP1Triangle(7, 8, 9, 0),
	gsSP1Triangle(8, 7, 10, 0),
	gsSP1Triangle(10, 7, 11, 0),
	gsSP1Triangle(7, 12, 11, 0),
	gsSP1Triangle(10, 11, 13, 0),
	gsSP1Triangle(8, 10, 13, 0),
	gsSPEndDisplayList(),
};

Vtx pargg_000_offset_002_mesh_layer_1_vtx_0[6] = {
	{{ {640, -77, 0}, 0, {1010, -378}, {102, 180, 0, 255} }},
	{{ {383, -219, -183}, 0, {-361, 858}, {30, 159, 180, 255} }},
	{{ {619, -55, -131}, 0, {930, 519}, {90, 195, 190, 255} }},
	{{ {386, -257, 0}, 0, {-530, -378}, {24, 131, 0, 255} }},
	{{ {383, -219, 184}, 0, {-361, 858}, {28, 160, 79, 255} }},
	{{ {619, -55, 135}, 0, {930, 519}, {90, 197, 68, 255} }},
};

Gfx pargg_000_offset_002_mesh_layer_1_tri_0[] = {
	gsSPVertex(pargg_000_offset_002_mesh_layer_1_vtx_0 + 0, 6, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSPEndDisplayList(),
};

Vtx pargg_000_offset_002_mesh_layer_1_vtx_1[41] = {
	{{ {386, -257, 0}, 0, {2405, -979}, {24, 131, 0, 255} }},
	{{ {383, -219, 184}, 0, {2407, -992}, {28, 160, 79, 255} }},
	{{ {210, -203, 176}, 0, {2396, -992}, {19, 208, 116, 255} }},
	{{ {210, -203, -182}, 0, {2396, -966}, {20, 207, 141, 255} }},
	{{ {383, -219, -183}, 0, {2407, -966}, {30, 159, 180, 255} }},
	{{ {-3, -220, 189}, 0, {264, 126}, {199, 1, 113, 255} }},
	{{ {193, -328, 183}, 0, {264, 126}, {66, 209, 98, 255} }},
	{{ {210, -203, 176}, 0, {264, 126}, {19, 208, 116, 255} }},
	{{ {27, -338, 165}, 0, {264, 126}, {211, 187, 97, 255} }},
	{{ {193, -328, -188}, 0, {264, 126}, {66, 209, 158, 255} }},
	{{ {27, -338, -170}, 0, {264, 126}, {211, 187, 159, 255} }},
	{{ {-3, -220, -194}, 0, {264, 126}, {199, 1, 143, 255} }},
	{{ {210, -203, -182}, 0, {264, 126}, {20, 207, 141, 255} }},
	{{ {210, -203, 176}, 0, {1512, -1703}, {19, 208, 116, 255} }},
	{{ {221, -201, -3}, 0, {1512, -1690}, {74, 153, 0, 255} }},
	{{ {386, -257, 0}, 0, {1522, -1690}, {24, 131, 0, 255} }},
	{{ {210, -203, -182}, 0, {1512, -1678}, {20, 207, 141, 255} }},
	{{ {386, -257, 0}, 0, {1522, -1690}, {24, 131, 0, 255} }},
	{{ {221, -201, -3}, 0, {1512, -1690}, {74, 153, 0, 255} }},
	{{ {655, 100, -164}, 0, {-779, 712}, {75, 78, 189, 255} }},
	{{ {640, -77, 0}, 0, {-609, 221}, {102, 180, 0, 255} }},
	{{ {619, -55, -131}, 0, {-554, 303}, {90, 195, 190, 255} }},
	{{ {706, 79, -6}, 0, {-932, 613}, {110, 64, 255, 255} }},
	{{ {655, 100, 159}, 0, {-779, 712}, {75, 79, 66, 255} }},
	{{ {619, -55, 135}, 0, {-554, 303}, {90, 197, 68, 255} }},
	{{ {359, 27, 274}, 0, {244, 743}, {249, 63, 110, 255} }},
	{{ {383, -219, 184}, 0, {335, 23}, {28, 160, 79, 255} }},
	{{ {210, -203, 176}, 0, {891, 208}, {19, 208, 116, 255} }},
	{{ {-66, -58, 122}, 0, {1697, 842}, {170, 70, 62, 255} }},
	{{ {-3, -220, 189}, 0, {1601, 331}, {199, 1, 113, 255} }},
	{{ {-99, -250, -3}, 0, {1938, 321}, {131, 233, 0, 255} }},
	{{ {-66, -58, -3}, 0, {1697, 842}, {164, 88, 0, 255} }},
	{{ {-66, -58, -127}, 0, {1697, 842}, {170, 70, 194, 255} }},
	{{ {-99, -250, -3}, 0, {1938, 321}, {131, 233, 0, 255} }},
	{{ {-66, -58, -3}, 0, {1697, 842}, {164, 88, 0, 255} }},
	{{ {-3, -220, -194}, 0, {1601, 331}, {199, 1, 143, 255} }},
	{{ {210, -203, -182}, 0, {891, 208}, {20, 207, 141, 255} }},
	{{ {359, 25, -286}, 0, {244, 736}, {250, 60, 144, 255} }},
	{{ {383, -219, -183}, 0, {335, 23}, {30, 159, 180, 255} }},
	{{ {619, -55, -131}, 0, {-554, 303}, {90, 195, 190, 255} }},
	{{ {655, 100, -164}, 0, {-779, 712}, {75, 78, 189, 255} }},
};

Gfx pargg_000_offset_002_mesh_layer_1_tri_1[] = {
	gsSPVertex(pargg_000_offset_002_mesh_layer_1_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 4, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(6, 5, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(11, 12, 9, 0),
	gsSP1Triangle(13, 14, 15, 0),
	gsSPVertex(pargg_000_offset_002_mesh_layer_1_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 4, 3, 0),
	gsSP1Triangle(6, 7, 4, 0),
	gsSP1Triangle(7, 8, 4, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(9, 10, 8, 0),
	gsSP1Triangle(9, 11, 10, 0),
	gsSP1Triangle(9, 12, 11, 0),
	gsSP1Triangle(12, 13, 11, 0),
	gsSP1Triangle(13, 12, 14, 0),
	gsSP1Triangle(12, 15, 14, 0),
	gsSPVertex(pargg_000_offset_002_mesh_layer_1_vtx_1 + 32, 9, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(5, 4, 0, 0),
	gsSP1Triangle(5, 6, 4, 0),
	gsSP1Triangle(5, 7, 6, 0),
	gsSP1Triangle(7, 5, 8, 0),
	gsSPEndDisplayList(),
};

Vtx pargg_000_offset_002_mesh_layer_1_vtx_2[10] = {
	{{ {-66, -58, 122}, 0, {729, -16}, {170, 70, 62, 255} }},
	{{ {359, 27, 274}, 0, {1008, 548}, {249, 63, 110, 255} }},
	{{ {52, -33, -3}, 0, {502, 141}, {230, 124, 0, 255} }},
	{{ {248, 11, -3}, 0, {502, 401}, {229, 124, 0, 255} }},
	{{ {655, 100, 159}, 0, {796, 941}, {75, 79, 66, 255} }},
	{{ {706, 79, -6}, 0, {496, 1008}, {110, 64, 255, 255} }},
	{{ {655, 100, -164}, 0, {207, 941}, {75, 78, 189, 255} }},
	{{ {359, 25, -286}, 0, {-16, 548}, {250, 60, 144, 255} }},
	{{ {-66, -58, -127}, 0, {274, -16}, {170, 70, 194, 255} }},
	{{ {-66, -58, -3}, 0, {502, -16}, {164, 88, 0, 255} }},
};

Gfx pargg_000_offset_002_mesh_layer_1_tri_2[] = {
	gsSPVertex(pargg_000_offset_002_mesh_layer_1_vtx_2 + 0, 10, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 2, 0),
	gsSP1Triangle(1, 4, 3, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(3, 5, 6, 0),
	gsSP1Triangle(3, 6, 7, 0),
	gsSP1Triangle(3, 7, 2, 0),
	gsSP1Triangle(2, 7, 8, 0),
	gsSP1Triangle(2, 8, 9, 0),
	gsSP1Triangle(0, 2, 9, 0),
	gsSPEndDisplayList(),
};

Vtx pargg_000_offset_002_mesh_layer_1_vtx_3[27] = {
	{{ {27, -338, 165}, 0, {5002, -1108}, {211, 187, 97, 255} }},
	{{ {189, -405, 95}, 0, {5002, -1108}, {61, 153, 43, 255} }},
	{{ {193, -328, 183}, 0, {5002, -1108}, {66, 209, 98, 255} }},
	{{ {27, -338, -170}, 0, {5002, -1108}, {211, 187, 159, 255} }},
	{{ {193, -328, -188}, 0, {5002, -1108}, {66, 209, 158, 255} }},
	{{ {189, -405, -100}, 0, {5002, -1108}, {61, 153, 213, 255} }},
	{{ {229, -344, -3}, 0, {1008, 253}, {123, 225, 0, 255} }},
	{{ {189, -405, -3}, 0, {1008, -63}, {64, 146, 0, 255} }},
	{{ {189, -405, -100}, 0, {420, -63}, {61, 153, 213, 255} }},
	{{ {189, -405, 95}, 0, {1596, -63}, {61, 153, 43, 255} }},
	{{ {193, -328, 183}, 0, {2126, 301}, {66, 209, 98, 255} }},
	{{ {210, -203, 176}, 0, {2088, 1055}, {19, 208, 116, 255} }},
	{{ {221, -201, -3}, 0, {1008, 1055}, {74, 153, 0, 255} }},
	{{ {210, -203, -182}, 0, {-72, 1055}, {20, 207, 141, 255} }},
	{{ {193, -328, -188}, 0, {-110, 301}, {66, 209, 158, 255} }},
	{{ {-19, -368, 93}, 0, {767, -514}, {179, 172, 56, 255} }},
	{{ {27, -338, 165}, 0, {767, -514}, {211, 187, 97, 255} }},
	{{ {-3, -220, 189}, 0, {767, -514}, {199, 1, 113, 255} }},
	{{ {189, -405, 95}, 0, {767, -514}, {61, 153, 43, 255} }},
	{{ {38, -415, -3}, 0, {767, -514}, {231, 131, 0, 255} }},
	{{ {-34, -387, -4}, 0, {767, -514}, {168, 164, 255, 255} }},
	{{ {-99, -250, -3}, 0, {767, -514}, {131, 233, 0, 255} }},
	{{ {-19, -368, -98}, 0, {767, -514}, {179, 173, 199, 255} }},
	{{ {189, -405, -100}, 0, {767, -514}, {61, 153, 213, 255} }},
	{{ {27, -338, -170}, 0, {767, -514}, {211, 187, 159, 255} }},
	{{ {-3, -220, -194}, 0, {767, -514}, {199, 1, 143, 255} }},
	{{ {189, -405, -3}, 0, {767, -514}, {64, 146, 0, 255} }},
};

Gfx pargg_000_offset_002_mesh_layer_1_tri_3[] = {
	gsSPVertex(pargg_000_offset_002_mesh_layer_1_vtx_3 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(6, 9, 7, 0),
	gsSP1Triangle(6, 10, 9, 0),
	gsSP1Triangle(11, 10, 6, 0),
	gsSP1Triangle(12, 11, 6, 0),
	gsSP1Triangle(12, 6, 13, 0),
	gsSP1Triangle(13, 6, 14, 0),
	gsSP1Triangle(6, 8, 14, 0),
	gsSPVertex(pargg_000_offset_002_mesh_layer_1_vtx_3 + 15, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(0, 5, 4, 0),
	gsSP1Triangle(0, 6, 5, 0),
	gsSP1Triangle(2, 6, 0, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(4, 5, 7, 0),
	gsSP1Triangle(4, 7, 8, 0),
	gsSP1Triangle(8, 7, 9, 0),
	gsSP1Triangle(7, 10, 9, 0),
	gsSP1Triangle(10, 7, 6, 0),
	gsSP1Triangle(8, 11, 4, 0),
	gsSP1Triangle(3, 4, 11, 0),
	gsSPEndDisplayList(),
};

Vtx pargg_000_offset_002_mesh_layer_1_vtx_4[16] = {
	{{ {592, 31, -106}, 0, {89, 709}, {114, 214, 220, 255} }},
	{{ {477, 9, -162}, 0, {60, 707}, {232, 187, 152, 255} }},
	{{ {464, 122, -140}, 0, {72, 649}, {209, 75, 164, 255} }},
	{{ {445, 2, -95}, 0, {95, 707}, {167, 173, 36, 255} }},
	{{ {560, 25, -39}, 0, {124, 708}, {49, 201, 103, 255} }},
	{{ {547, 139, -99}, 0, {93, 650}, {72, 99, 224, 255} }},
	{{ {445, 119, -101}, 0, {92, 649}, {151, 64, 33, 255} }},
	{{ {529, 135, -61}, 0, {112, 650}, {16, 87, 91, 255} }},
	{{ {547, 139, 94}, 0, {192, 650}, {72, 100, 32, 255} }},
	{{ {464, 122, 134}, 0, {213, 649}, {210, 75, 91, 255} }},
	{{ {477, 9, 156}, 0, {224, 707}, {232, 187, 104, 255} }},
	{{ {529, 135, 56}, 0, {173, 650}, {15, 88, 165, 255} }},
	{{ {592, 31, 101}, 0, {196, 709}, {114, 214, 37, 255} }},
	{{ {445, 2, 89}, 0, {190, 707}, {167, 173, 220, 255} }},
	{{ {445, 119, 96}, 0, {193, 649}, {151, 64, 224, 255} }},
	{{ {560, 25, 34}, 0, {161, 708}, {49, 201, 153, 255} }},
};

Gfx pargg_000_offset_002_mesh_layer_1_tri_4[] = {
	gsSPVertex(pargg_000_offset_002_mesh_layer_1_vtx_4 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(0, 4, 3, 0),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(0, 2, 5, 0),
	gsSP1Triangle(5, 2, 6, 0),
	gsSP1Triangle(1, 6, 2, 0),
	gsSP1Triangle(1, 3, 6, 0),
	gsSP1Triangle(3, 7, 6, 0),
	gsSP1Triangle(3, 4, 7, 0),
	gsSP1Triangle(4, 5, 7, 0),
	gsSP1Triangle(5, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 9, 8, 0),
	gsSP1Triangle(11, 8, 12, 0),
	gsSP1Triangle(8, 10, 12, 0),
	gsSP1Triangle(12, 10, 13, 0),
	gsSP1Triangle(9, 13, 10, 0),
	gsSP1Triangle(9, 14, 13, 0),
	gsSP1Triangle(11, 14, 9, 0),
	gsSP1Triangle(14, 11, 15, 0),
	gsSP1Triangle(11, 12, 15, 0),
	gsSP1Triangle(12, 13, 15, 0),
	gsSP1Triangle(14, 15, 13, 0),
	gsSPEndDisplayList(),
};

Vtx pargg_000_offset_004_mesh_layer_1_vtx_0[12] = {
	{{ {474, 193, -61}, 0, {-553, 270}, {38, 119, 233, 255} }},
	{{ {576, 100, 123}, 0, {-423, 1073}, {112, 239, 57, 255} }},
	{{ {576, 100, -128}, 0, {-423, 1073}, {112, 239, 199, 255} }},
	{{ {474, 193, 56}, 0, {-553, 270}, {38, 119, 23, 255} }},
	{{ {314, 169, 183}, 0, {-18, 145}, {243, 105, 70, 255} }},
	{{ {314, 169, -188}, 0, {-18, 145}, {247, 107, 188, 255} }},
	{{ {331, 35, -282}, 0, {524, 1078}, {21, 209, 140, 255} }},
	{{ {54, 116, -103}, 0, {919, 44}, {186, 92, 205, 255} }},
	{{ {-73, -67, -97}, 0, {2068, 1060}, {160, 192, 202, 255} }},
	{{ {54, 116, 98}, 0, {919, 44}, {188, 89, 60, 255} }},
	{{ {-73, -67, 92}, 0, {2068, 1060}, {161, 193, 56, 255} }},
	{{ {331, 35, 277}, 0, {524, 1078}, {16, 210, 117, 255} }},
};

Gfx pargg_000_offset_004_mesh_layer_1_tri_0[] = {
	gsSPVertex(pargg_000_offset_004_mesh_layer_1_vtx_0 + 0, 12, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 3, 1, 0),
	gsSP1Triangle(4, 3, 0, 0),
	gsSP1Triangle(4, 0, 5, 0),
	gsSP1Triangle(5, 0, 2, 0),
	gsSP1Triangle(5, 2, 6, 0),
	gsSP1Triangle(7, 5, 6, 0),
	gsSP1Triangle(7, 6, 8, 0),
	gsSP1Triangle(9, 7, 8, 0),
	gsSP1Triangle(9, 8, 10, 0),
	gsSP1Triangle(4, 9, 10, 0),
	gsSP1Triangle(4, 10, 11, 0),
	gsSP1Triangle(4, 11, 1, 0),
	gsSP1Triangle(3, 4, 1, 0),
	gsSP1Triangle(7, 9, 4, 0),
	gsSP1Triangle(7, 4, 5, 0),
	gsSPEndDisplayList(),
};

Vtx pargg_000_offset_004_mesh_layer_1_vtx_1[6] = {
	{{ {576, 100, -128}, 0, {725, 976}, {112, 239, 199, 255} }},
	{{ {576, 100, 123}, 0, {272, 1053}, {112, 239, 57, 255} }},
	{{ {331, 35, 277}, 0, {12, 704}, {16, 210, 117, 255} }},
	{{ {-73, -67, 92}, 0, {384, -4}, {161, 193, 56, 255} }},
	{{ {-73, -67, -97}, 0, {724, -62}, {160, 192, 202, 255} }},
	{{ {331, 35, -282}, 0, {1022, 533}, {21, 209, 140, 255} }},
};

Gfx pargg_000_offset_004_mesh_layer_1_tri_1[] = {
	gsSPVertex(pargg_000_offset_004_mesh_layer_1_vtx_1 + 0, 6, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(0, 3, 4, 0),
	gsSP1Triangle(0, 4, 5, 0),
	gsSPEndDisplayList(),
};

Vtx pargg_000_offset_004_mesh_layer_1_vtx_2[16] = {
	{{ {260, 44, 89}, 0, {190, 720}, {139, 32, 220, 255} }},
	{{ {373, 78, 34}, 0, {161, 729}, {18, 72, 153, 255} }},
	{{ {396, -36, 56}, 0, {173, 787}, {54, 185, 166, 255} }},
	{{ {291, 53, 156}, 0, {224, 723}, {202, 50, 103, 255} }},
	{{ {314, -60, 96}, 0, {193, 780}, {192, 151, 223, 255} }},
	{{ {413, -31, 94}, 0, {192, 788}, {110, 202, 33, 255} }},
	{{ {403, 86, 101}, 0, {196, 732}, {82, 90, 37, 255} }},
	{{ {332, -55, 134}, 0, {213, 782}, {250, 167, 91, 255} }},
	{{ {413, -31, -99}, 0, {93, 788}, {110, 203, 223, 255} }},
	{{ {332, -55, -140}, 0, {72, 782}, {250, 168, 165, 255} }},
	{{ {291, 53, -162}, 0, {60, 723}, {202, 50, 152, 255} }},
	{{ {396, -36, -61}, 0, {112, 787}, {55, 185, 90, 255} }},
	{{ {403, 86, -106}, 0, {89, 732}, {82, 90, 219, 255} }},
	{{ {373, 78, -39}, 0, {124, 729}, {18, 72, 103, 255} }},
	{{ {260, 44, -95}, 0, {95, 720}, {139, 32, 36, 255} }},
	{{ {314, -60, -101}, 0, {92, 780}, {192, 151, 33, 255} }},
};

Gfx pargg_000_offset_004_mesh_layer_1_tri_2[] = {
	gsSPVertex(pargg_000_offset_004_mesh_layer_1_vtx_2 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 1, 0, 0),
	gsSP1Triangle(3, 0, 4, 0),
	gsSP1Triangle(0, 2, 4, 0),
	gsSP1Triangle(5, 4, 2, 0),
	gsSP1Triangle(1, 5, 2, 0),
	gsSP1Triangle(1, 6, 5, 0),
	gsSP1Triangle(3, 6, 1, 0),
	gsSP1Triangle(6, 3, 7, 0),
	gsSP1Triangle(3, 4, 7, 0),
	gsSP1Triangle(5, 7, 4, 0),
	gsSP1Triangle(6, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(11, 9, 8, 0),
	gsSP1Triangle(11, 8, 12, 0),
	gsSP1Triangle(8, 10, 12, 0),
	gsSP1Triangle(10, 13, 12, 0),
	gsSP1Triangle(10, 14, 13, 0),
	gsSP1Triangle(9, 14, 10, 0),
	gsSP1Triangle(9, 15, 14, 0),
	gsSP1Triangle(11, 15, 9, 0),
	gsSP1Triangle(15, 11, 13, 0),
	gsSP1Triangle(11, 12, 13, 0),
	gsSP1Triangle(15, 13, 14, 0),
	gsSPEndDisplayList(),
};


Gfx mat_pargg_Material_006_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(pargg_Material_006_f3d_lights),
	gsSPEndDisplayList(),
};

Gfx mat_pargg_Material_002_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(pargg_Material_002_f3d_lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, pargg_blargg_body___Copia_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_pargg_Material_003_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(pargg_Material_003_f3d_lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, pargg_blargg_belly___Copia_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_pargg_Material_005_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(pargg_Material_005_f3d_lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, pargg_blargg_nose___Copia_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 255, 512),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsSPEndDisplayList(),
};

Gfx mat_pargg_Material_004_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(pargg_Material_004_f3d_lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, pargg_blargg_tounge___Copia_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_pargg_Material_001_f3d[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(pargg_Material_001_f3d_lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, pargg_blargg_eye___Copia_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx pargg_000_offset_001_mesh_layer_1[] = {
	gsSPDisplayList(mat_pargg_Material_006_f3d),
	gsSPDisplayList(pargg_000_offset_001_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_pargg_Material_002_f3d),
	gsSPDisplayList(pargg_000_offset_001_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_pargg_Material_003_f3d),
	gsSPDisplayList(pargg_000_offset_001_mesh_layer_1_tri_2),
	gsSPEndDisplayList(),
};

Gfx pargg_000_offset_002_mesh_layer_1[] = {
	gsSPDisplayList(mat_pargg_Material_005_f3d),
	gsSPDisplayList(pargg_000_offset_002_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_pargg_Material_002_f3d),
	gsSPDisplayList(pargg_000_offset_002_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_pargg_Material_004_f3d),
	gsSPDisplayList(pargg_000_offset_002_mesh_layer_1_tri_2),
	gsSPDisplayList(mat_pargg_Material_001_f3d),
	gsSPDisplayList(pargg_000_offset_002_mesh_layer_1_tri_3),
	gsSPDisplayList(mat_pargg_Material_006_f3d),
	gsSPDisplayList(pargg_000_offset_002_mesh_layer_1_tri_4),
	gsSPEndDisplayList(),
};

Gfx pargg_000_offset_004_mesh_layer_1[] = {
	gsSPDisplayList(mat_pargg_Material_002_f3d),
	gsSPDisplayList(pargg_000_offset_004_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_pargg_Material_004_f3d),
	gsSPDisplayList(pargg_000_offset_004_mesh_layer_1_tri_1),
	gsSPDisplayList(mat_pargg_Material_006_f3d),
	gsSPDisplayList(pargg_000_offset_004_mesh_layer_1_tri_2),
	gsSPEndDisplayList(),
};

Gfx pargg_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

