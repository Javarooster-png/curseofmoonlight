#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "hakasitarelay_room_2.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "hakasitarelay_scene.h"
#include "hakasitarelay_room_0.h"
#include "hakasitarelay_room_1.h"
#include "hakasitarelay_room_3.h"
#include "hakasitarelay_room_4.h"
#include "hakasitarelay_room_5.h"
#include "hakasitarelay_room_6.h"

SceneCmd hakasitarelay_room_2Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x01, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&hakasitarelay_room_2RoomShapeNormal_000110),
    SCENE_CMD_OBJECT_LIST(8, hakasitarelay_room_2ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(12, hakasitarelay_room_2ActorEntry_000050),
    SCENE_CMD_END(),
};

s16 hakasitarelay_room_2ObjectList_000040[] = {
    OBJECT_RELAY_OBJECTS,
    OBJECT_POH,
    OBJECT_BOX,
    OBJECT_SYOKUDAI,
    OBJECT_TK,
    OBJECT_FU,
    OBJECT_KANBAN,
    OBJECT_RD,
};

ActorEntry hakasitarelay_room_2ActorEntry_000050[] = {
    { ACTOR_EN_ITEM00,      {    570,   -570,  -5599 }, {      0,      0,      0 }, 0x3B00 },
    { ACTOR_EN_ITEM00,      {   1461,   -730,  -5736 }, {      0,      0,      0 }, 0x3C00 },
    { ACTOR_EN_ITEM00,      {   2376,   -730,  -4647 }, {      0,      0,      0 }, 0x3D00 },
    { ACTOR_EN_RD,          {   2552,   -730,  -4424 }, {      0, 0X8000,      0 }, 0x7F02 },
    { ACTOR_EN_RD,          {   1248,   -730,  -5748 }, {      0, 0X4000,      0 }, 0x7F02 },
    { ACTOR_EN_LIGHT,       {   2120,   -690,  -4410 }, {      0, 0X8000,      0 }, 0x03F8 },
    { ACTOR_EN_LIGHT,       {   1900,   -690,  -4410 }, {      0, 0X8000,      0 }, 0x03F8 },
    { ACTOR_EN_WONDER_ITEM, {    570,   -570,  -5778 }, {      0,      0,    0X1 }, 0x123F },
    { ACTOR_EN_WONDER_ITEM, {    353,   -570,  -5825 }, {      0,      0,    0X1 }, 0x123F },
    { ACTOR_EN_WONDER_ITEM, {   1666,   -730,  -5736 }, {      0,      0,    0X1 }, 0x123F },
    { ACTOR_EN_WONDER_ITEM, {   2549,   -730,  -4598 }, {      0,      0,    0X1 }, 0x123F },
    { ACTOR_EN_WONDER_ITEM, {   2547,   -730,  -4847 }, {      0,      0,    0X1 }, 0x123F },
};

RoomShapeNormal hakasitarelay_room_2RoomShapeNormal_000110 = { 
    0, 1,
    hakasitarelay_room_2RoomShapeDListsEntry_00011C,
    hakasitarelay_room_2RoomShapeDListsEntry_00011C + ARRAY_COUNTU(hakasitarelay_room_2RoomShapeDListsEntry_00011C)
};

RoomShapeDListsEntry hakasitarelay_room_2RoomShapeDListsEntry_00011C[1] = {
    { hakasitarelay_room_2DL_005478, NULL },
};

s32 hakasitarelay_room_2_terminatorMaybe_000124 = { 0x01000000 };

u8 hakasitarelay_room_2_possiblePadding_000128[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx hakasitarelay_room_2Vtx_000130[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_2Vtx_000130.vtx.inc"
};

Gfx hakasitarelay_room_2DL_002430[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&hakasitarelay_room_2Vtx_000130[552], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(hakasitarelay_room_2Tex_005CA8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(hakasitarelay_room_2Vtx_000130, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(15, 14, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 17, 0, 20, 17, 19, 0),
    gsSP2Triangles(15, 16, 22, 0, 20, 15, 22, 0),
    gsSP2Triangles(21, 20, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_000130[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(7, 6, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 11, 0),
    gsSP2Triangles(7, 8, 14, 0, 12, 7, 14, 0),
    gsSP2Triangles(13, 12, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 15, 17, 0, 18, 19, 15, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 20, 22, 0),
    gsSP2Triangles(23, 24, 20, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 25, 27, 0, 28, 29, 25, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_000130[61], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 4, 0, 0, 4, 3, 5, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(7, 6, 8, 0, 9, 7, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(10, 13, 14, 0, 15, 10, 14, 0),
    gsSP2Triangles(15, 14, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 17, 19, 0, 20, 19, 21, 0),
    gsSP2Triangles(22, 20, 21, 0, 23, 22, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(24, 27, 28, 0, 29, 24, 28, 0),
    gsSP1Triangle(29, 28, 30, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_000130[92], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 4, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 9, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 10, 11, 0, 12, 11, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(14, 17, 18, 0, 19, 14, 18, 0),
    gsSP2Triangles(19, 18, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 21, 24, 0),
    gsSP2Triangles(25, 24, 26, 0, 27, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_sceneTex_00C080, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_2Vtx_000130[120], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_2Tex_005CA8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_2Vtx_000130[125], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(9, 12, 13, 0, 9, 13, 10, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_000130[157], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_000130[189], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 6, 9, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 12, 15, 0, 16, 15, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 18, 20, 0),
    gsSP2Triangles(21, 20, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 23, 26, 0),
    gsSP2Triangles(27, 26, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_000130[221], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 5, 8, 0),
    gsSP2Triangles(9, 8, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 11, 14, 0),
    gsSP2Triangles(15, 14, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 17, 20, 0),
    gsSP2Triangles(21, 20, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 23, 26, 0),
    gsSP2Triangles(27, 26, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_000130[253], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 5, 8, 0),
    gsSP2Triangles(9, 8, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_000130[284], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(1, 12, 13, 0, 1, 13, 2, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(23, 26, 24, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_000130[315], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 10, 13, 14, 0),
    gsSP2Triangles(10, 14, 11, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 20, 23, 24, 0),
    gsSP2Triangles(20, 24, 21, 0, 23, 25, 26, 0),
    gsSP2Triangles(23, 26, 24, 0, 17, 27, 28, 0),
    gsSP2Triangles(17, 28, 18, 0, 27, 29, 30, 0),
    gsSP1Triangle(27, 30, 28, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_000130[346], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 8, 9, 0, 10, 9, 11, 0),
    gsSP2Triangles(1, 12, 13, 0, 1, 13, 3, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_000130[378], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_000130[410], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(25, 28, 29, 0, 25, 29, 26, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 31, 29, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_000130[442], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 6, 9, 10, 0),
    gsSP2Triangles(6, 10, 7, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 12, 15, 16, 0),
    gsSP2Triangles(12, 16, 13, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 18, 21, 19, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(23, 26, 27, 0, 23, 27, 24, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_000130[474], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(11, 14, 15, 0, 11, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(23, 26, 27, 0, 23, 27, 24, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_000130[506], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 4, 7, 8, 0),
    gsSP2Triangles(4, 8, 5, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 9, 0),
    gsSP2Triangles(13, 9, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 16, 19, 20, 0),
    gsSP2Triangles(16, 20, 17, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 22, 25, 26, 0),
    gsSP2Triangles(22, 26, 23, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_000130[537], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 10, 13, 14, 0),
    gsSP1Triangle(10, 14, 11, 0),
    gsSPEndDisplayList(),
};

Vtx hakasitarelay_room_2Vtx_002B68[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_2Vtx_002B68.vtx.inc"
};

Gfx hakasitarelay_room_2DL_003568[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&hakasitarelay_room_2Vtx_002B68[152], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(hakasitarelay_room_2Tex_0058A8, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(hakasitarelay_room_2Vtx_002B68, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_2Tex_0054A8, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&hakasitarelay_room_2Vtx_002B68[24], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(hakasitarelay_sceneTex_00D880, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&hakasitarelay_room_2Vtx_002B68[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 0, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(11, 14, 15, 0, 11, 15, 12, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 12, 0),
    gsSP2Triangles(17, 18, 13, 0, 17, 13, 12, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 17, 0),
    gsSP2Triangles(20, 21, 17, 0, 21, 22, 18, 0),
    gsSP2Triangles(21, 18, 17, 0, 20, 23, 24, 0),
    gsSP2Triangles(20, 24, 21, 0, 24, 25, 21, 0),
    gsSP2Triangles(25, 26, 21, 0, 26, 22, 21, 0),
    gsSP2Triangles(19, 27, 28, 0, 19, 28, 20, 0),
    gsSP2Triangles(28, 29, 23, 0, 28, 23, 20, 0),
    gsSP1Triangle(27, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_002B68[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 12, 10, 0, 8, 13, 9, 0),
    gsSP2Triangles(8, 14, 13, 0, 13, 11, 9, 0),
    gsSP2Triangles(13, 15, 11, 0, 13, 16, 15, 0),
    gsSP2Triangles(14, 17, 13, 0, 17, 16, 13, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(19, 24, 20, 0, 24, 22, 20, 0),
    gsSP2Triangles(24, 25, 22, 0, 24, 26, 25, 0),
    gsSP2Triangles(19, 27, 24, 0, 28, 29, 24, 0),
    gsSP2Triangles(29, 30, 24, 0, 30, 26, 24, 0),
    gsSP1Triangle(30, 31, 26, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_002B68[96], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(7, 0, 5, 0, 1, 8, 2, 0),
    gsSP2Triangles(8, 9, 2, 0, 8, 10, 9, 0),
    gsSP2Triangles(10, 11, 9, 0, 11, 12, 9, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 14, 13, 0),
    gsSP2Triangles(13, 15, 9, 0, 12, 16, 14, 0),
    gsSP2Triangles(15, 17, 9, 0, 17, 2, 9, 0),
    gsSP2Triangles(14, 18, 19, 0, 14, 19, 13, 0),
    gsSP2Triangles(19, 20, 15, 0, 19, 15, 13, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 8, 0),
    gsSP2Triangles(23, 24, 10, 0, 23, 10, 8, 0),
    gsSP2Triangles(22, 25, 23, 0, 22, 26, 25, 0),
    gsSP2Triangles(25, 24, 23, 0, 25, 27, 24, 0),
    gsSP1Triangle(28, 29, 25, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_002B68[126], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 8, 11, 0, 12, 13, 0, 0),
    gsSP2Triangles(14, 15, 3, 0, 3, 12, 0, 0),
    gsSP2Triangles(3, 15, 12, 0, 14, 3, 16, 0),
    gsSP2Triangles(17, 18, 0, 0, 19, 20, 1, 0),
    gsSP2Triangles(21, 22, 2, 0, 23, 24, 1, 0),
    gsSP2Triangles(25, 2, 20, 0, 0, 23, 1, 0),
    gsSP2Triangles(0, 18, 23, 0, 20, 2, 1, 0),
    gsSP2Triangles(22, 3, 2, 0, 22, 16, 3, 0),
    gsSPEndDisplayList(),
};

Vtx hakasitarelay_room_2Vtx_0038B8[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_2Vtx_0038B8.vtx.inc"
};

Gfx hakasitarelay_room_2DL_003998[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&hakasitarelay_room_2Vtx_0038B8[6], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(hakasitarelay_room_2Tex_006CA8, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(hakasitarelay_room_2Vtx_0038B8, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSPEndDisplayList(),
};

Vtx hakasitarelay_room_2Vtx_003A58[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_2Vtx_003A58.vtx.inc"
};

Gfx hakasitarelay_room_2DL_004488[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&hakasitarelay_room_2Vtx_003A58[155], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(hakasitarelay_room_2Tex_005CA8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(hakasitarelay_room_2Vtx_003A58, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(3, 2, 15, 0, 3, 15, 14, 0),
    gsSP2Triangles(1, 16, 17, 0, 1, 17, 2, 0),
    gsSP2Triangles(5, 18, 16, 0, 5, 16, 1, 0),
    gsSP2Triangles(7, 19, 18, 0, 7, 18, 5, 0),
    gsSP2Triangles(9, 20, 21, 0, 9, 21, 10, 0),
    gsSP2Triangles(13, 22, 20, 0, 13, 20, 9, 0),
    gsSP2Triangles(15, 23, 22, 0, 15, 22, 13, 0),
    gsSP2Triangles(2, 17, 23, 0, 2, 23, 15, 0),
    gsSP2Triangles(17, 16, 24, 0, 16, 18, 25, 0),
    gsSP2Triangles(18, 19, 26, 0, 21, 20, 27, 0),
    gsSP2Triangles(20, 22, 28, 0, 22, 23, 29, 0),
    gsSP1Triangle(23, 17, 30, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_003A58[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(3, 2, 15, 0, 3, 15, 14, 0),
    gsSP2Triangles(1, 16, 17, 0, 1, 17, 2, 0),
    gsSP2Triangles(5, 18, 16, 0, 5, 16, 1, 0),
    gsSP2Triangles(7, 19, 18, 0, 7, 18, 5, 0),
    gsSP2Triangles(9, 20, 21, 0, 9, 21, 10, 0),
    gsSP2Triangles(13, 22, 20, 0, 13, 20, 9, 0),
    gsSP2Triangles(15, 23, 22, 0, 15, 22, 13, 0),
    gsSP2Triangles(2, 17, 23, 0, 2, 23, 15, 0),
    gsSP2Triangles(17, 16, 24, 0, 16, 18, 25, 0),
    gsSP2Triangles(18, 19, 26, 0, 21, 20, 27, 0),
    gsSP2Triangles(20, 22, 28, 0, 22, 23, 29, 0),
    gsSP1Triangle(23, 17, 30, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_003A58[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(3, 2, 15, 0, 3, 15, 14, 0),
    gsSP2Triangles(1, 16, 17, 0, 1, 17, 2, 0),
    gsSP2Triangles(5, 18, 16, 0, 5, 16, 1, 0),
    gsSP2Triangles(7, 19, 18, 0, 7, 18, 5, 0),
    gsSP2Triangles(9, 20, 21, 0, 9, 21, 10, 0),
    gsSP2Triangles(13, 22, 20, 0, 13, 20, 9, 0),
    gsSP2Triangles(15, 23, 22, 0, 15, 22, 13, 0),
    gsSP2Triangles(2, 17, 23, 0, 2, 23, 15, 0),
    gsSP2Triangles(17, 16, 24, 0, 16, 18, 25, 0),
    gsSP2Triangles(18, 19, 26, 0, 21, 20, 27, 0),
    gsSP2Triangles(20, 22, 28, 0, 22, 23, 29, 0),
    gsSP1Triangle(23, 17, 30, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_003A58[93], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(3, 2, 15, 0, 3, 15, 14, 0),
    gsSP2Triangles(1, 16, 17, 0, 1, 17, 2, 0),
    gsSP2Triangles(5, 18, 16, 0, 5, 16, 1, 0),
    gsSP2Triangles(7, 19, 18, 0, 7, 18, 5, 0),
    gsSP2Triangles(9, 20, 21, 0, 9, 21, 10, 0),
    gsSP2Triangles(13, 22, 20, 0, 13, 20, 9, 0),
    gsSP2Triangles(15, 23, 22, 0, 15, 22, 13, 0),
    gsSP2Triangles(2, 17, 23, 0, 2, 23, 15, 0),
    gsSP2Triangles(17, 16, 24, 0, 16, 18, 25, 0),
    gsSP2Triangles(18, 19, 26, 0, 21, 20, 27, 0),
    gsSP2Triangles(20, 22, 28, 0, 22, 23, 29, 0),
    gsSP1Triangle(23, 17, 30, 0),
    gsSPVertex(&hakasitarelay_room_2Vtx_003A58[124], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(3, 2, 15, 0, 3, 15, 14, 0),
    gsSP2Triangles(1, 16, 17, 0, 1, 17, 2, 0),
    gsSP2Triangles(5, 18, 16, 0, 5, 16, 1, 0),
    gsSP2Triangles(7, 19, 18, 0, 7, 18, 5, 0),
    gsSP2Triangles(9, 20, 21, 0, 9, 21, 10, 0),
    gsSP2Triangles(13, 22, 20, 0, 13, 20, 9, 0),
    gsSP2Triangles(15, 23, 22, 0, 15, 22, 13, 0),
    gsSP2Triangles(2, 17, 23, 0, 2, 23, 15, 0),
    gsSP2Triangles(17, 16, 24, 0, 16, 18, 25, 0),
    gsSP2Triangles(18, 19, 26, 0, 21, 20, 27, 0),
    gsSP2Triangles(20, 22, 28, 0, 22, 23, 29, 0),
    gsSP1Triangle(23, 17, 30, 0),
    gsSPEndDisplayList(),
};

Vtx hakasitarelay_room_2Vtx_004828[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_2Vtx_004828.vtx.inc"
};

Gfx hakasitarelay_room_2DL_004F18[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&hakasitarelay_room_2Vtx_004828[103], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(hakasitarelay_room_2Tex_007CA8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(hakasitarelay_room_2Vtx_004828, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_2Tex_0074A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_2Vtx_004828[6], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_2Tex_007CA8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_2Vtx_004828[10], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_2Tex_0074A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_2Vtx_004828[28], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 0, 5, 4, 0),
    gsSP2Triangles(4, 3, 1, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 3, 7, 0, 3, 4, 7, 0),
    gsSP2Triangles(4, 8, 7, 0, 4, 5, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_2Tex_0080A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_2Vtx_004828[37], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_2Tex_007CA8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_2Vtx_004828[41], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_2Tex_0080A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_2Vtx_004828[47], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_2Tex_0074A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_2Vtx_004828[51], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 5, 4, 3, 0),
    gsSP2Triangles(5, 3, 2, 0, 0, 4, 6, 0),
    gsSP2Triangles(7, 1, 0, 0, 7, 0, 6, 0),
    gsSP2Triangles(6, 4, 8, 0, 7, 6, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_2Tex_0080A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_2Vtx_004828[60], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_2Tex_0074A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_2Vtx_004828[64], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 0, 5, 4, 0),
    gsSP2Triangles(4, 3, 1, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 3, 7, 0, 3, 4, 7, 0),
    gsSP2Triangles(4, 8, 7, 0, 4, 5, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_2Tex_007CA8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_2Vtx_004828[73], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_2Tex_0074A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_2Vtx_004828[79], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 4, 6, 0),
    gsSP2Triangles(4, 3, 1, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 3, 8, 0, 3, 4, 8, 0),
    gsSP2Triangles(4, 9, 8, 0, 4, 5, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_2Tex_0080A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_2Vtx_004828[90], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_2Tex_007CA8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_2Vtx_004828[94], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx hakasitarelay_room_2DL_005478[] = {
    gsSPDisplayList(hakasitarelay_room_2DL_002430),
    gsSPDisplayList(hakasitarelay_room_2DL_003568),
    gsSPDisplayList(hakasitarelay_room_2DL_003998),
    gsSPDisplayList(hakasitarelay_room_2DL_004488),
    gsSPDisplayList(hakasitarelay_room_2DL_004F18),
    gsSPEndDisplayList(),
};

u64 hakasitarelay_room_2Tex_0054A8[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_2Tex_0054A8.i8.inc.c"
};

u64 hakasitarelay_room_2Tex_0058A8[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_2Tex_0058A8.i8.inc.c"
};

u64 hakasitarelay_room_2Tex_005CA8[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_2Tex_005CA8.rgba16.inc.c"
};

u64 hakasitarelay_room_2Tex_006CA8[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_2Tex_006CA8.i8.inc.c"
};

u64 hakasitarelay_room_2Tex_0074A8[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_2Tex_0074A8.rgba16.inc.c"
};

u64 hakasitarelay_room_2Tex_007CA8[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_2Tex_007CA8.rgba16.inc.c"
};

u64 hakasitarelay_room_2Tex_0080A8[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_2Tex_0080A8.rgba16.inc.c"
};

