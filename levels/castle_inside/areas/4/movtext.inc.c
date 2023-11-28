// 0x07079090 - 0x070790F0
static Movtex inside_castle_movtex_flood_water_data[] = {
    MOV_TEX_INIT_LOAD(    1),
    MOV_TEX_ROT_SPEED(   10),
    MOV_TEX_ROT_SCALE(   10),
    MOV_TEX_4_BOX_TRIS(-3225, -4146),
    MOV_TEX_4_BOX_TRIS(-3225,  -255),
    MOV_TEX_4_BOX_TRIS(  870,  -255),
    MOV_TEX_4_BOX_TRIS(  870, -4146),
    MOV_TEX_ROT(     ROTATE_COUNTER_CLOCKWISE),
    MOV_TEX_ALPHA(    0x96),
    MOV_TEX_DEFINE(  TEXTURE_WATER),
    MOV_TEX_END(),
};


// 0x070790F0 - 0x07079100
const struct MovtexQuadCollection inside_castle_movtex_flood_water[] = {
    {0, inside_castle_movtex_green_room_water_data},
    {-1, NULL},
};