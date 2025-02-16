#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "hakasitarelay_room_3.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "hakasitarelay_scene.h"
#include "hakasitarelay_room_0.h"
#include "hakasitarelay_room_1.h"
#include "hakasitarelay_room_2.h"
#include "hakasitarelay_room_4.h"
#include "hakasitarelay_room_5.h"
#include "hakasitarelay_room_6.h"

SceneCmd hakasitarelay_room_3Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(11),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x01, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&hakasitarelay_room_3RoomShapeNormal_000120),
    SCENE_CMD_OBJECT_LIST(8, hakasitarelay_room_3ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(13, hakasitarelay_room_3ActorEntry_000050),
    SCENE_CMD_END(),
};

s16 hakasitarelay_room_3ObjectList_000040[] = {
    OBJECT_RELAY_OBJECTS,
    OBJECT_POH,
    OBJECT_BOX,
    OBJECT_SYOKUDAI,
    OBJECT_TK,
    OBJECT_FU,
    OBJECT_KANBAN,
    OBJECT_RD,
};

ActorEntry hakasitarelay_room_3ActorEntry_000050[] = {
    { ACTOR_EN_ITEM00,      {   2573,   -730,  -3758 }, {      0,      0,      0 }, 0x3E00 },
    { ACTOR_EN_ITEM00,      {   1511,   -668,  -3118 }, {      0,      0,      0 }, 0x3F00 },
    { ACTOR_EN_RD,          {   2730,   -730,  -3396 }, {      0, 0XA000,      0 }, 0x7F02 },
    { ACTOR_EN_RD,          {   1252,   -668,  -3117 }, {      0, 0X4000,      0 }, 0x7F02 },
    { ACTOR_EN_LIGHT,       {   1830,   -690,  -3870 }, {      0, 0X8000,      0 }, 0x03F8 },
    { ACTOR_EN_LIGHT,       {   2190,   -690,  -3870 }, {      0, 0X8000,      0 }, 0x03F8 },
    { ACTOR_OBJ_SYOKUDAI,   {   3004,   -407,  -2112 }, {      0, 0X8000,      0 }, 0x2400 },
    { ACTOR_OBJ_SYOKUDAI,   {   2804,   -407,  -2112 }, {      0, 0X8000,      0 }, 0x2400 },
    { ACTOR_EN_WONDER_ITEM, {   2726,   -730,  -3634 }, {      0,      0,    0X1 }, 0x123F },
    { ACTOR_EN_WONDER_ITEM, {   2377,   -730,  -3398 }, {      0,      0,    0X1 }, 0x123F },
    { ACTOR_EN_WONDER_ITEM, {   2633,   -730,  -3394 }, {      0,      0,    0X1 }, 0x123F },
    { ACTOR_EN_WONDER_ITEM, {   2728,   -730,  -3500 }, {      0,      0,    0X1 }, 0x123F },
    { ACTOR_EN_WONDER_ITEM, {   1308,   -668,  -3125 }, {      0,      0,    0X1 }, 0x123F },
};

RoomShapeNormal hakasitarelay_room_3RoomShapeNormal_000120 = { 
    0, 1,
    hakasitarelay_room_3RoomShapeDListsEntry_00012C,
    hakasitarelay_room_3RoomShapeDListsEntry_00012C + ARRAY_COUNTU(hakasitarelay_room_3RoomShapeDListsEntry_00012C)
};

RoomShapeDListsEntry hakasitarelay_room_3RoomShapeDListsEntry_00012C[1] = {
    { hakasitarelay_room_3DL_0056B0, NULL },
};

s32 hakasitarelay_room_3_terminatorMaybe_000134 = { 0x01000000 };

u8 hakasitarelay_room_3_possiblePadding_000138[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx hakasitarelay_room_3Vtx_000140[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_3Vtx_000140.vtx.inc"
};

Gfx hakasitarelay_room_3DL_001E70[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&hakasitarelay_room_3Vtx_000140[459], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(hakasitarelay_room_3Tex_0060E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(hakasitarelay_room_3Vtx_000140, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 19, 21, 22, 0),
    gsSP2Triangles(19, 22, 20, 0, 23, 19, 24, 0),
    gsSP2Triangles(23, 24, 25, 0, 19, 18, 26, 0),
    gsSP2Triangles(19, 26, 24, 0, 27, 28, 19, 0),
    gsSP2Triangles(27, 19, 23, 0, 28, 29, 21, 0),
    gsSP2Triangles(28, 21, 19, 0, 30, 31, 28, 0),
    gsSP1Triangle(30, 28, 27, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_000140[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(7, 6, 10, 0, 6, 11, 10, 0),
    gsSP2Triangles(11, 12, 10, 0, 6, 9, 13, 0),
    gsSP2Triangles(6, 13, 11, 0, 1, 0, 11, 0),
    gsSP2Triangles(1, 11, 14, 0, 0, 15, 11, 0),
    gsSP2Triangles(0, 16, 15, 0, 15, 12, 11, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 20, 18, 0),
    gsSP2Triangles(17, 21, 20, 0, 21, 22, 20, 0),
    gsSP2Triangles(22, 23, 20, 0, 22, 24, 23, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 29, 25, 0),
    gsSP2Triangles(29, 30, 25, 0, 30, 26, 25, 0),
    gsSP1Triangle(30, 31, 26, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_000140[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 5, 6, 2, 0),
    gsSP2Triangles(3, 7, 8, 0, 7, 5, 8, 0),
    gsSP2Triangles(7, 9, 5, 0, 10, 11, 12, 0),
    gsSP2Triangles(11, 13, 12, 0, 13, 14, 12, 0),
    gsSP2Triangles(13, 15, 14, 0, 13, 16, 15, 0),
    gsSP2Triangles(16, 17, 15, 0, 18, 19, 20, 0),
    gsSP2Triangles(19, 21, 20, 0, 19, 22, 21, 0),
    gsSP2Triangles(19, 23, 22, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 25, 28, 29, 0),
    gsSP2Triangles(25, 29, 26, 0, 12, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_000140[96], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 1, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 7, 10, 11, 0),
    gsSP2Triangles(7, 11, 8, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 13, 16, 17, 0),
    gsSP2Triangles(13, 17, 14, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 19, 17, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 12, 0, 21, 23, 24, 0),
    gsSP2Triangles(21, 24, 22, 0, 23, 25, 18, 0),
    gsSP2Triangles(23, 18, 24, 0, 26, 27, 28, 0),
    gsSP2Triangles(26, 28, 29, 0, 27, 30, 31, 0),
    gsSP1Triangle(27, 31, 28, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_000140[128], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(11, 12, 9, 0, 12, 13, 9, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(15, 18, 19, 0, 15, 19, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 3, 2, 27, 0),
    gsSP2Triangles(3, 27, 28, 0, 29, 3, 28, 0),
    gsSP2Triangles(29, 28, 30, 0, 31, 29, 30, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_000140[160], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 3, 6, 0),
    gsSP2Triangles(7, 6, 8, 0, 9, 7, 8, 0),
    gsSP2Triangles(9, 8, 10, 0, 11, 12, 4, 0),
    gsSP2Triangles(11, 4, 13, 0, 14, 11, 13, 0),
    gsSP2Triangles(14, 13, 15, 0, 16, 14, 15, 0),
    gsSP2Triangles(16, 15, 9, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(22, 24, 23, 0, 25, 26, 27, 0),
    gsSP2Triangles(27, 28, 29, 0, 25, 27, 30, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_000140[191], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(3, 0, 5, 0, 6, 3, 5, 0),
    gsSP2Triangles(6, 5, 7, 0, 8, 6, 9, 0),
    gsSP2Triangles(6, 7, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(12, 13, 10, 0, 14, 8, 9, 0),
    gsSP2Triangles(15, 14, 9, 0, 16, 17, 18, 0),
    gsSP2Triangles(0, 4, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_000140[223], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(11, 14, 15, 0, 11, 15, 12, 0),
    gsSP2Triangles(1, 16, 17, 0, 1, 17, 2, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 20, 23, 0, 24, 23, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_000140[253], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(9, 12, 13, 0, 9, 13, 10, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(1, 16, 17, 0, 1, 17, 2, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(21, 24, 25, 0, 21, 25, 22, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 29, 28, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_000140[283], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(4, 8, 2, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 12, 11, 0, 10, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 14, 21, 0, 20, 21, 22, 0),
    gsSP2Triangles(21, 19, 23, 0, 21, 23, 22, 0),
    gsSP2Triangles(24, 20, 22, 0, 24, 22, 25, 0),
    gsSP2Triangles(22, 23, 26, 0, 22, 26, 25, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_000140[314], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 6, 0, 3, 0),
    gsSP2Triangles(6, 3, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 9, 12, 0),
    gsSP2Triangles(11, 12, 13, 0, 13, 12, 14, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 20, 16, 19, 0),
    gsSP2Triangles(20, 19, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 24, 25, 0, 24, 26, 27, 0),
    gsSP2Triangles(24, 27, 25, 0, 28, 22, 29, 0),
    gsSP2Triangles(28, 29, 30, 0, 29, 27, 31, 0),
    gsSP1Triangle(29, 31, 30, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_000140[346], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 6, 0, 10, 6, 9, 0),
    gsSP2Triangles(12, 9, 8, 0, 12, 8, 13, 0),
    gsSP2Triangles(12, 10, 9, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 17, 15, 0, 15, 18, 16, 0),
    gsSP2Triangles(15, 19, 18, 0, 15, 20, 19, 0),
    gsSP2Triangles(15, 21, 20, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 24, 25, 0, 26, 27, 28, 0),
    gsSP2Triangles(26, 28, 29, 0, 30, 31, 23, 0),
    gsSP1Triangle(30, 23, 22, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_000140[378], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(5, 8, 7, 0, 8, 9, 7, 0),
    gsSP2Triangles(5, 10, 11, 0, 10, 12, 11, 0),
    gsSP2Triangles(12, 9, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(14, 16, 15, 0, 14, 17, 16, 0),
    gsSP2Triangles(14, 18, 17, 0, 13, 19, 14, 0),
    gsSP2Triangles(19, 20, 14, 0, 20, 18, 14, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP2Triangles(26, 29, 30, 0, 26, 30, 27, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_000140[409], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 16, 0),
    gsSP2Triangles(15, 17, 13, 0, 17, 10, 13, 0),
    gsSP2Triangles(18, 11, 10, 0, 18, 19, 11, 0),
    gsSP2Triangles(20, 19, 18, 0, 20, 21, 19, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 25, 24, 0),
    gsSP2Triangles(23, 26, 25, 0, 27, 28, 29, 0),
    gsSP2Triangles(27, 29, 30, 0, 24, 25, 31, 0),
    gsSP2Triangles(20, 29, 28, 0, 20, 18, 29, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_000140[441], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(10, 16, 17, 0, 10, 17, 11, 0),
    gsSPEndDisplayList(),
};

Vtx hakasitarelay_room_3Vtx_0024A0[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_3Vtx_0024A0.vtx.inc"
};

Gfx hakasitarelay_room_3DL_003760[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&hakasitarelay_room_3Vtx_0024A0[292], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(hakasitarelay_room_3Tex_0056E0, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(hakasitarelay_room_3Vtx_0024A0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_3Tex_0084E0, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&hakasitarelay_room_3Vtx_0024A0[8], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(hakasitarelay_room_3Tex_005EE0, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_3Vtx_0024A0[12], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_3Tex_005AE0, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_3Vtx_0024A0[24], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 11, 0, 14, 11, 10, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_3Tex_0084E0, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_3Vtx_0024A0[44], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 5, 7, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 10, 12, 0),
    gsSP1Triangle(13, 12, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(hakasitarelay_room_3Tex_007CE0, G_IM_FMT_I, 128, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_NOMIRROR | G_TX_WRAP, 7, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_3Vtx_0024A0[59], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 8, 9, 0, 0, 3, 9, 0),
    gsSP2Triangles(10, 0, 9, 0, 7, 11, 12, 0),
    gsSP2Triangles(4, 7, 12, 0, 13, 4, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(19, 22, 23, 0, 19, 23, 20, 0),
    gsSP2Triangles(15, 24, 25, 0, 15, 25, 16, 0),
    gsSP2Triangles(26, 27, 0, 0, 26, 0, 28, 0),
    gsSP2Triangles(27, 29, 1, 0, 27, 1, 0, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_0024A0[89], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(13, 16, 17, 0, 13, 17, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(hakasitarelay_sceneTex_00D880, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_3Vtx_0024A0[107], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(18, 21, 22, 0, 18, 22, 23, 0),
    gsSP2Triangles(21, 20, 24, 0, 21, 24, 25, 0),
    gsSP2Triangles(21, 25, 22, 0, 26, 27, 28, 0),
    gsSP2Triangles(26, 28, 29, 0, 30, 26, 29, 0),
    gsSP1Triangle(30, 29, 31, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_0024A0[139], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 9, 4, 7, 0),
    gsSP2Triangles(9, 7, 10, 0, 7, 8, 11, 0),
    gsSP2Triangles(7, 11, 10, 0, 12, 13, 14, 0),
    gsSP2Triangles(13, 10, 14, 0, 10, 11, 14, 0),
    gsSP2Triangles(13, 9, 10, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 18, 0),
    gsSP2Triangles(23, 18, 17, 0, 24, 23, 25, 0),
    gsSP2Triangles(24, 25, 26, 0, 23, 27, 28, 0),
    gsSP2Triangles(23, 28, 25, 0, 28, 29, 30, 0),
    gsSP2Triangles(28, 30, 25, 0, 30, 31, 26, 0),
    gsSP1Triangle(30, 26, 25, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_0024A0[171], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 7, 0),
    gsSP2Triangles(11, 12, 7, 0, 12, 8, 7, 0),
    gsSP2Triangles(10, 13, 7, 0, 13, 11, 7, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 16, 0),
    gsSP2Triangles(15, 21, 22, 0, 15, 22, 23, 0),
    gsSP2Triangles(15, 23, 18, 0, 24, 25, 19, 0),
    gsSP2Triangles(24, 19, 18, 0, 26, 27, 28, 0),
    gsSP2Triangles(26, 28, 24, 0, 23, 29, 26, 0),
    gsSP2Triangles(23, 26, 18, 0, 29, 4, 2, 0),
    gsSP2Triangles(29, 2, 26, 0, 1, 30, 31, 0),
    gsSP1Triangle(1, 31, 2, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_0024A0[203], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(11, 14, 15, 0, 11, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(24, 26, 25, 0, 27, 28, 22, 0),
    gsSP2Triangles(27, 22, 25, 0, 29, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_0024A0[235], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 10, 11, 9, 0),
    gsSP2Triangles(11, 12, 9, 0, 11, 13, 12, 0),
    gsSP2Triangles(13, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(16, 18, 17, 0, 19, 20, 0, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 0, 0),
    gsSP2Triangles(21, 23, 22, 0, 24, 25, 26, 0),
    gsSP2Triangles(25, 27, 26, 0, 27, 28, 26, 0),
    gsSP2Triangles(28, 29, 26, 0, 30, 28, 31, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_0024A0[267], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP1Triangle(3, 4, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(hakasitarelay_room_3Tex_007CE0, G_IM_FMT_I, 128, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_NOMIRROR | G_TX_WRAP, 7, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_3Vtx_0024A0[272], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 19, 9, 0, 16, 9, 8, 0),
    gsSPEndDisplayList(),
};

Vtx hakasitarelay_room_3Vtx_003D78[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_3Vtx_003D78.vtx.inc"
};

Gfx hakasitarelay_room_3DL_004B98[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&hakasitarelay_room_3Vtx_003D78[218], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(hakasitarelay_sceneTex_00C080, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(hakasitarelay_room_3Vtx_003D78, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 3, 0),
    gsSP2Triangles(3, 2, 7, 0, 8, 3, 7, 0),
    gsSP2Triangles(8, 4, 3, 0, 4, 9, 10, 0),
    gsSP2Triangles(4, 8, 11, 0, 4, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 4, 10, 0, 24, 10, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_003D78[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(10, 13, 14, 0, 10, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 22, 0),
    gsSP2Triangles(25, 22, 27, 0, 22, 24, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_003D78[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 1, 0, 0, 4, 0, 5, 0),
    gsSP2Triangles(0, 6, 7, 0, 0, 7, 5, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 7, 0),
    gsSP2Triangles(9, 10, 4, 0, 9, 4, 5, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(12, 15, 16, 0, 12, 16, 13, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP2Triangles(26, 29, 30, 0, 26, 30, 27, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_003D78[93], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(13, 16, 17, 0, 13, 17, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(19, 22, 23, 0, 19, 23, 20, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_003D78[125], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(13, 16, 17, 0, 13, 17, 14, 0),
    gsSP2Triangles(18, 19, 9, 0, 18, 9, 8, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(21, 24, 25, 0, 21, 25, 22, 0),
    gsSP2Triangles(26, 27, 19, 0, 26, 19, 18, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_003D78[157], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(9, 12, 13, 0, 9, 13, 10, 0),
    gsSP2Triangles(14, 15, 5, 0, 14, 5, 4, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_3Tex_0060E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_3Vtx_003D78[179], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_sceneTex_00C080, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_3Vtx_003D78[183], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 5, 4, 2, 0),
    gsSP2Triangles(6, 5, 2, 0, 7, 6, 2, 0),
    gsSP2Triangles(8, 7, 2, 0, 9, 8, 2, 0),
    gsSP2Triangles(10, 9, 2, 0, 11, 10, 2, 0),
    gsSP2Triangles(12, 11, 2, 0, 13, 12, 2, 0),
    gsSP2Triangles(14, 13, 2, 0, 15, 14, 2, 0),
    gsSP2Triangles(15, 2, 16, 0, 17, 18, 16, 0),
    gsSP2Triangles(18, 15, 16, 0, 17, 16, 19, 0),
    gsSP2Triangles(16, 2, 19, 0, 20, 17, 19, 0),
    gsSP2Triangles(20, 19, 21, 0, 19, 2, 21, 0),
    gsSP2Triangles(22, 20, 21, 0, 21, 23, 24, 0),
    gsSP2Triangles(22, 21, 24, 0, 1, 23, 2, 0),
    gsSP2Triangles(23, 21, 2, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_003D78[215], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Vtx hakasitarelay_room_3Vtx_004F60[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_3Vtx_004F60.vtx.inc"
};

Gfx hakasitarelay_room_3DL_0052D0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&hakasitarelay_room_3Vtx_004F60[47], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(hakasitarelay_sceneTex_00D080, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(hakasitarelay_room_3Vtx_004F60, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(26, 28, 27, 0, 28, 26, 29, 0),
    gsSP2Triangles(26, 25, 30, 0, 26, 30, 29, 0),
    gsSPVertex(&hakasitarelay_room_3Vtx_004F60[31], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 4, 2, 5, 0),
    gsSP2Triangles(2, 1, 6, 0, 2, 6, 5, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 7, 10, 0, 7, 11, 12, 0),
    gsSP2Triangles(13, 8, 7, 0, 13, 7, 12, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(11, 14, 12, 0, 14, 11, 10, 0),
    gsSP2Triangles(9, 15, 14, 0, 9, 14, 10, 0),
    gsSPEndDisplayList(),
};

Vtx hakasitarelay_room_3Vtx_005418[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_3Vtx_005418.vtx.inc"
};

Gfx hakasitarelay_room_3DL_005588[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&hakasitarelay_room_3Vtx_005418[15], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(hakasitarelay_room_3Tex_0078E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(hakasitarelay_room_3Vtx_005418, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_3Tex_0070E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_3Vtx_005418[6], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 5, 4, 3, 0),
    gsSP2Triangles(5, 3, 2, 0, 0, 4, 6, 0),
    gsSP2Triangles(7, 1, 0, 0, 7, 0, 6, 0),
    gsSP2Triangles(6, 4, 8, 0, 7, 6, 8, 0),
    gsSPEndDisplayList(),
};

Gfx hakasitarelay_room_3DL_0056B0[] = {
    gsSPDisplayList(hakasitarelay_room_3DL_001E70),
    gsSPDisplayList(hakasitarelay_room_3DL_003760),
    gsSPDisplayList(hakasitarelay_room_3DL_004B98),
    gsSPDisplayList(hakasitarelay_room_3DL_0052D0),
    gsSPDisplayList(hakasitarelay_room_3DL_005588),
    gsSPEndDisplayList(),
};

u64 hakasitarelay_room_3Tex_0056E0[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_3Tex_0056E0.i8.inc.c"
};

u64 hakasitarelay_room_3Tex_005AE0[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_3Tex_005AE0.i8.inc.c"
};

u64 hakasitarelay_room_3Tex_005EE0[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_3Tex_005EE0.i4.inc.c"
};

u64 hakasitarelay_room_3Tex_0060E0[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_3Tex_0060E0.rgba16.inc.c"
};

u64 hakasitarelay_room_3Tex_0070E0[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_3Tex_0070E0.rgba16.inc.c"
};

u64 hakasitarelay_room_3Tex_0078E0[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_3Tex_0078E0.rgba16.inc.c"
};

u64 hakasitarelay_room_3Tex_007CE0[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_3Tex_007CE0.i4.inc.c"
};

u64 hakasitarelay_room_3Tex_0084E0[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_3Tex_0084E0.i8.inc.c"
};

