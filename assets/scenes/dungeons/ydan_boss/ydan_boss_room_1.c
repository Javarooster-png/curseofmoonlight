#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "ydan_boss_room_1.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "ydan_boss_scene.h"
#include "ydan_boss_room_0.h"

SceneCmd ydan_boss_room_1Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(0x05, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&ydan_boss_room_1RoomShapeNormal_0000E0),
    SCENE_CMD_OBJECT_LIST(6, ydan_boss_room_1ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(9, ydan_boss_room_1ActorEntry_00004C),
    SCENE_CMD_END(),
};

s16 ydan_boss_room_1ObjectList_000040[] = {
    OBJECT_YDAN_OBJECTS,
    OBJECT_GOMA,
    OBJECT_GOL,
    OBJECT_WARP1,
    OBJECT_GI_HEARTS,
    OBJECT_KUSA,
};

ActorEntry ydan_boss_room_1ActorEntry_00004C[] = {
    { ACTOR_BOSS_GOMA, {   -160,   -280,   -371 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_KUSA,   {    194,   -640,   -974 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,   {    480,   -640,   -681 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,   {   -855,   -640,   -596 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,   {   -848,   -640,   -166 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,   {   -444,   -640,    323 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,   {   -646,   -640,    108 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,   {    525,   -640,   -375 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,   {    545,   -640,    -75 }, {      0,      0,      0 }, 0xFF01 },
};

u8 ydan_boss_room_1_possiblePadding_0000DC[] = {
    0x00, 0x00, 0x00, 0x00, 
};

RoomShapeNormal ydan_boss_room_1RoomShapeNormal_0000E0 = { 
    0, 1,
    ydan_boss_room_1RoomShapeDListsEntry_0000EC,
    ydan_boss_room_1RoomShapeDListsEntry_0000EC + ARRAY_COUNTU(ydan_boss_room_1RoomShapeDListsEntry_0000EC)
};

RoomShapeDListsEntry ydan_boss_room_1RoomShapeDListsEntry_0000EC[1] = {
    { ydan_boss_room_1DL_003B28, ydan_boss_room_1DL_005FD8 },
};

s32 ydan_boss_room_1_terminatorMaybe_0000F4 = { 0x01000000 };

u8 ydan_boss_room_1_possiblePadding_0000F8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx ydan_boss_room_1Vtx_000100[] = {
#include "assets/scenes/dungeons/ydan_boss/ydan_boss_room_1Vtx_000100.vtx.inc"
};

Gfx ydan_boss_room_1DL_002DD0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[709], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ydan_boss_room_1Tex_004B38, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(ydan_boss_sceneTLUT_000D30),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(ydan_boss_room_1Vtx_000100, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 10, 7, 0, 18, 7, 19, 0),
    gsSP2Triangles(19, 7, 6, 0, 19, 6, 20, 0),
    gsSP2Triangles(21, 4, 1, 0, 21, 1, 22, 0),
    gsSP2Triangles(22, 1, 0, 0, 22, 0, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 7, 0, 10, 7, 6, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(7, 16, 17, 0, 7, 17, 14, 0),
    gsSP2Triangles(7, 14, 18, 0, 7, 18, 8, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 19, 0, 23, 19, 25, 0),
    gsSP2Triangles(26, 14, 19, 0, 26, 19, 27, 0),
    gsSP2Triangles(14, 17, 20, 0, 14, 20, 19, 0),
    gsSP2Triangles(28, 19, 22, 0, 28, 22, 29, 0),
    gsSP2Triangles(2, 1, 30, 0, 2, 30, 31, 0),
    gsSP1Triangle(4, 2, 31, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 2, 0, 3, 6, 7, 0),
    gsSP2Triangles(3, 7, 4, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 12, 13, 0),
    gsSP2Triangles(8, 13, 9, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 18, 14, 17, 0),
    gsSP2Triangles(18, 17, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 21, 24, 25, 0),
    gsSP2Triangles(21, 25, 22, 0, 26, 27, 28, 0),
    gsSP2Triangles(26, 28, 9, 0, 26, 9, 13, 0),
    gsSP2Triangles(26, 13, 29, 0, 9, 28, 30, 0),
    gsSP1Triangle(9, 30, 31, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[96], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 8, 9, 0, 4, 9, 5, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 10, 13, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 4, 13, 0, 16, 13, 17, 0),
    gsSP2Triangles(17, 13, 18, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(23, 22, 24, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 25, 27, 0, 26, 27, 28, 0),
    gsSP2Triangles(25, 24, 29, 0, 25, 29, 27, 0),
    gsSP2Triangles(27, 29, 30, 0, 27, 30, 31, 0),
    gsSP1Triangle(28, 27, 31, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[128], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 13, 15, 16, 0),
    gsSP2Triangles(13, 16, 17, 0, 15, 18, 19, 0),
    gsSP2Triangles(15, 19, 20, 0, 12, 21, 22, 0),
    gsSP2Triangles(12, 22, 13, 0, 6, 5, 23, 0),
    gsSP2Triangles(6, 23, 24, 0, 10, 25, 26, 0),
    gsSP2Triangles(10, 26, 27, 0, 28, 7, 10, 0),
    gsSP2Triangles(28, 10, 29, 0, 10, 9, 30, 0),
    gsSP1Triangle(10, 30, 25, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[159], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(8, 11, 12, 0, 8, 12, 9, 0),
    gsSP2Triangles(7, 13, 14, 0, 7, 14, 8, 0),
    gsSP2Triangles(14, 15, 11, 0, 14, 11, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ydan_boss_room_1Tex_003B38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[175], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 4, 5, 1, 0),
    gsSP2Triangles(5, 6, 1, 0, 6, 2, 1, 0),
    gsSP2Triangles(0, 7, 3, 0, 7, 8, 4, 0),
    gsSP2Triangles(7, 4, 3, 0, 0, 9, 7, 0),
    gsSP2Triangles(9, 8, 7, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 11, 14, 15, 0),
    gsSP2Triangles(11, 15, 12, 0, 10, 16, 11, 0),
    gsSP2Triangles(16, 14, 11, 0, 15, 17, 12, 0),
    gsSP2Triangles(17, 18, 12, 0, 18, 13, 12, 0),
    gsSP2Triangles(15, 19, 17, 0, 19, 20, 17, 0),
    gsSP2Triangles(20, 18, 17, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(21, 26, 22, 0, 26, 27, 22, 0),
    gsSP2Triangles(27, 25, 22, 0, 25, 28, 23, 0),
    gsSP2Triangles(28, 29, 23, 0, 29, 24, 23, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[205], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 5, 1, 0),
    gsSP2Triangles(5, 6, 3, 0, 5, 3, 1, 0),
    gsSP2Triangles(4, 7, 8, 0, 4, 8, 5, 0),
    gsSP2Triangles(8, 9, 6, 0, 8, 6, 5, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(11, 12, 9, 0, 11, 9, 8, 0),
    gsSP2Triangles(10, 13, 11, 0, 13, 12, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(15, 18, 17, 0, 14, 19, 20, 0),
    gsSP2Triangles(14, 20, 15, 0, 20, 21, 18, 0),
    gsSP2Triangles(20, 18, 15, 0, 19, 22, 20, 0),
    gsSP2Triangles(22, 23, 20, 0, 23, 21, 20, 0),
    gsSP2Triangles(19, 24, 22, 0, 24, 25, 22, 0),
    gsSP2Triangles(25, 23, 22, 0, 26, 27, 28, 0),
    gsSP2Triangles(26, 29, 27, 0, 27, 30, 28, 0),
    gsSP1Triangle(29, 31, 27, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[237], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(7, 8, 5, 0, 8, 6, 5, 0),
    gsSP2Triangles(9, 10, 11, 0, 10, 12, 11, 0),
    gsSP2Triangles(10, 13, 12, 0, 14, 15, 16, 0),
    gsSP2Triangles(15, 17, 16, 0, 15, 18, 17, 0),
    gsSP2Triangles(15, 19, 18, 0, 14, 20, 15, 0),
    gsSP2Triangles(20, 21, 19, 0, 20, 19, 15, 0),
    gsSP2Triangles(14, 22, 20, 0, 22, 23, 20, 0),
    gsSP2Triangles(23, 21, 20, 0, 24, 25, 26, 0),
    gsSP2Triangles(25, 27, 26, 0, 24, 28, 25, 0),
    gsSP2Triangles(28, 27, 25, 0, 29, 30, 31, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[269], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(1, 5, 2, 0, 5, 3, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(6, 10, 7, 0, 10, 11, 7, 0),
    gsSP2Triangles(10, 12, 11, 0, 11, 9, 7, 0),
    gsSP2Triangles(6, 13, 10, 0, 13, 12, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(14, 18, 15, 0, 15, 19, 17, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(ydan_boss_room_1Tex_004B38, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(ydan_boss_sceneTLUT_000D30),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[289], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(12, 13, 7, 0, 12, 7, 6, 0),
    gsSP2Triangles(13, 14, 10, 0, 13, 10, 7, 0),
    gsSP2Triangles(15, 16, 13, 0, 15, 13, 12, 0),
    gsSP2Triangles(16, 17, 14, 0, 16, 14, 13, 0),
    gsSP2Triangles(18, 19, 16, 0, 18, 16, 15, 0),
    gsSP2Triangles(19, 20, 17, 0, 19, 17, 16, 0),
    gsSP2Triangles(3, 2, 19, 0, 3, 19, 18, 0),
    gsSP2Triangles(2, 5, 20, 0, 2, 20, 19, 0),
    gsSP2Triangles(21, 3, 18, 0, 21, 18, 22, 0),
    gsSP2Triangles(23, 21, 22, 0, 23, 22, 24, 0),
    gsSP2Triangles(22, 18, 15, 0, 22, 15, 25, 0),
    gsSP2Triangles(24, 22, 25, 0, 24, 25, 26, 0),
    gsSP2Triangles(25, 15, 12, 0, 25, 12, 27, 0),
    gsSP2Triangles(26, 25, 27, 0, 26, 27, 28, 0),
    gsSP2Triangles(27, 12, 6, 0, 27, 6, 29, 0),
    gsSP2Triangles(28, 27, 29, 0, 28, 29, 30, 0),
    gsSP2Triangles(29, 6, 9, 0, 29, 9, 31, 0),
    gsSP1Triangle(30, 29, 31, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[321], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 3, 6, 0),
    gsSP2Triangles(7, 6, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 10, 13, 14, 0),
    gsSP2Triangles(10, 14, 11, 0, 12, 11, 15, 0),
    gsSP2Triangles(12, 15, 16, 0, 11, 14, 17, 0),
    gsSP2Triangles(11, 17, 15, 0, 16, 15, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 15, 17, 20, 0),
    gsSP2Triangles(15, 20, 18, 0, 19, 18, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 18, 20, 23, 0),
    gsSP2Triangles(18, 23, 21, 0, 22, 21, 24, 0),
    gsSP2Triangles(22, 24, 25, 0, 21, 23, 26, 0),
    gsSP2Triangles(21, 26, 24, 0, 27, 28, 10, 0),
    gsSP2Triangles(27, 10, 9, 0, 28, 29, 13, 0),
    gsSP1Triangle(28, 13, 10, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[351], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 6, 9, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 13, 7, 0, 12, 7, 6, 0),
    gsSP2Triangles(14, 12, 6, 0, 14, 6, 10, 0),
    gsSP2Triangles(15, 16, 13, 0, 15, 13, 12, 0),
    gsSP2Triangles(17, 15, 12, 0, 17, 12, 14, 0),
    gsSP2Triangles(18, 19, 16, 0, 18, 16, 15, 0),
    gsSP2Triangles(20, 18, 15, 0, 20, 15, 17, 0),
    gsSP2Triangles(3, 2, 19, 0, 3, 19, 18, 0),
    gsSP2Triangles(5, 3, 18, 0, 5, 18, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(22, 25, 26, 0, 22, 26, 23, 0),
    gsSP2Triangles(27, 28, 22, 0, 27, 22, 21, 0),
    gsSP2Triangles(28, 29, 25, 0, 28, 25, 22, 0),
    gsSP2Triangles(30, 31, 28, 0, 30, 28, 27, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[383], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 6, 0),
    gsSP2Triangles(5, 7, 1, 0, 5, 1, 0, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(9, 12, 13, 0, 9, 13, 10, 0),
    gsSP2Triangles(14, 15, 9, 0, 14, 9, 8, 0),
    gsSP2Triangles(15, 16, 12, 0, 15, 12, 9, 0),
    gsSP2Triangles(17, 14, 8, 0, 17, 8, 18, 0),
    gsSP2Triangles(19, 17, 18, 0, 19, 18, 20, 0),
    gsSP2Triangles(18, 8, 11, 0, 18, 11, 21, 0),
    gsSP2Triangles(20, 18, 21, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 4, 6, 0, 23, 6, 24, 0),
    gsSP2Triangles(25, 23, 24, 0, 25, 24, 26, 0),
    gsSP2Triangles(24, 6, 27, 0, 24, 27, 28, 0),
    gsSP2Triangles(26, 24, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(28, 27, 30, 0, 28, 30, 31, 0),
    gsSP1Triangle(29, 28, 31, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[415], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 5, 0, 2, 1, 5, 0),
    gsSP2Triangles(2, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 8, 11, 12, 0),
    gsSP2Triangles(8, 12, 9, 0, 10, 9, 13, 0),
    gsSP2Triangles(10, 13, 14, 0, 9, 12, 15, 0),
    gsSP2Triangles(9, 15, 13, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 17, 20, 21, 0),
    gsSP2Triangles(17, 21, 18, 0, 19, 18, 22, 0),
    gsSP2Triangles(19, 22, 23, 0, 18, 21, 24, 0),
    gsSP2Triangles(18, 24, 22, 0, 23, 22, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 22, 24, 27, 0),
    gsSP2Triangles(22, 27, 25, 0, 26, 25, 8, 0),
    gsSP2Triangles(26, 8, 7, 0, 25, 27, 11, 0),
    gsSP2Triangles(25, 11, 8, 0, 28, 29, 30, 0),
    gsSP2Triangles(28, 30, 31, 0, 27, 28, 31, 0),
    gsSP1Triangle(27, 31, 11, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[447], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(8, 6, 0, 0, 8, 0, 4, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 7, 6, 0),
    gsSP2Triangles(11, 9, 6, 0, 11, 6, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 12, 15, 0, 16, 15, 17, 0),
    gsSP2Triangles(18, 19, 13, 0, 18, 13, 12, 0),
    gsSP2Triangles(20, 18, 12, 0, 20, 12, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_boss_room_1Tex_005338, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[468], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(5, 8, 6, 0, 5, 9, 8, 0),
    gsSP2Triangles(9, 10, 8, 0, 9, 11, 10, 0),
    gsSP2Triangles(9, 12, 11, 0, 2, 1, 13, 0),
    gsSP2Triangles(2, 13, 14, 0, 15, 16, 13, 0),
    gsSP2Triangles(16, 14, 13, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 21, 17, 22, 0),
    gsSP2Triangles(17, 19, 22, 0, 19, 20, 23, 0),
    gsSP2Triangles(20, 24, 23, 0, 22, 19, 25, 0),
    gsSP2Triangles(19, 23, 25, 0, 26, 27, 28, 0),
    gsSP2Triangles(27, 29, 28, 0, 30, 26, 31, 0),
    gsSP1Triangle(26, 28, 31, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[500], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 2, 5, 0, 2, 6, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(5, 6, 10, 0, 6, 8, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(12, 5, 10, 0, 12, 10, 13, 0),
    gsSP2Triangles(15, 16, 12, 0, 15, 12, 11, 0),
    gsSP2Triangles(16, 4, 5, 0, 16, 5, 12, 0),
    gsSP2Triangles(17, 18, 16, 0, 17, 16, 15, 0),
    gsSP2Triangles(18, 19, 4, 0, 18, 4, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(21, 24, 25, 0, 21, 25, 22, 0),
    gsSP2Triangles(26, 27, 21, 0, 26, 21, 20, 0),
    gsSP2Triangles(27, 28, 24, 0, 27, 24, 21, 0),
    gsSP2Triangles(29, 30, 27, 0, 29, 27, 26, 0),
    gsSP2Triangles(30, 31, 28, 0, 30, 28, 27, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[532], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(7, 8, 4, 0, 7, 4, 1, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 12, 10, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 16, 14, 0),
    gsSP2Triangles(13, 17, 16, 0, 10, 15, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 21, 20, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 21, 24, 0),
    gsSP2Triangles(10, 14, 11, 0, 14, 5, 11, 0),
    gsSP2Triangles(25, 17, 26, 0, 17, 13, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 30, 28, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[563], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 2, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_boss_room_1Tex_004B38, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[571], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 3, 5, 4, 0),
    gsSP2Triangles(1, 0, 6, 0, 0, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_boss_sceneTex_000F38, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[579], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 3, 7, 8, 0),
    gsSP2Triangles(3, 9, 7, 0, 2, 1, 10, 0),
    gsSP2Triangles(1, 11, 10, 0, 12, 13, 10, 0),
    gsSP2Triangles(13, 14, 10, 0, 15, 16, 9, 0),
    gsSP2Triangles(16, 7, 9, 0, 15, 14, 17, 0),
    gsSP2Triangles(14, 13, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 22, 23, 0),
    gsSP2Triangles(18, 23, 19, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 19, 0, 18, 26, 27, 0),
    gsSP2Triangles(18, 27, 22, 0, 22, 28, 29, 0),
    gsSP1Triangle(22, 29, 23, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[609], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(14, 16, 15, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(22, 8, 23, 0, 8, 4, 24, 0),
    gsSP2Triangles(8, 24, 23, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 31, 11, 0),
    gsSP1Triangle(28, 11, 10, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[641], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 16, 7, 0, 17, 7, 6, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 19, 0, 22, 19, 18, 0),
    gsSP2Triangles(24, 25, 23, 0, 24, 23, 22, 0),
    gsSP2Triangles(26, 27, 25, 0, 26, 25, 24, 0),
    gsSP2Triangles(28, 29, 27, 0, 28, 27, 26, 0),
    gsSP2Triangles(21, 20, 29, 0, 21, 29, 28, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[671], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(15, 16, 14, 0, 15, 17, 16, 0),
    gsSP2Triangles(17, 18, 16, 0, 11, 10, 1, 0),
    gsSP2Triangles(11, 1, 0, 0, 19, 20, 18, 0),
    gsSP2Triangles(21, 22, 23, 0, 22, 15, 23, 0),
    gsSP2Triangles(15, 24, 23, 0, 24, 25, 23, 0),
    gsSP2Triangles(26, 21, 23, 0, 26, 23, 27, 0),
    gsSP2Triangles(23, 25, 28, 0, 23, 28, 27, 0),
    gsSP2Triangles(29, 27, 30, 0, 29, 26, 27, 0),
    gsSP2Triangles(27, 31, 30, 0, 27, 28, 31, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_000100[703], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 1, 5, 2, 0),
    gsSP1Triangle(1, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx ydan_boss_room_1DL_003B28[] = {
    gsSPDisplayList(ydan_boss_room_1DL_002DD0),
    gsSPEndDisplayList(),
};

u64 ydan_boss_room_1Tex_003B38[] = {
#include "assets/scenes/dungeons/ydan_boss/ydan_boss_room_1Tex_003B38.rgba16.inc.c"
};

u64 ydan_boss_room_1Tex_004B38[] = {
#include "assets/scenes/dungeons/ydan_boss/ydan_boss_room_1Tex_004B38.ci8.inc.c"
};

u64 ydan_boss_room_1Tex_005338[] = {
#include "assets/scenes/dungeons/ydan_boss/ydan_boss_room_1Tex_005338.ci8.inc.c"
};

u8 ydan_boss_room_1_possiblePadding_005738[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx ydan_boss_room_1Vtx_005740[] = {
#include "assets/scenes/dungeons/ydan_boss/ydan_boss_room_1Vtx_005740.vtx.inc"
};

Gfx ydan_boss_room_1DL_005D90[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&ydan_boss_room_1Vtx_005740[93], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ydan_boss_room_1Tex_005FE8, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 8, 0x0000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD, G_TX_NOMIRROR |
                G_TX_WRAP, 6, G_TX_NOLOD),
    gsDPSetTileSize(1, 0, 0, 0x00FC, 0x007C),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0, COMBINED, 0, SHADE, 0,
                       COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 127),
    gsSPDisplayList(0x08000000),
    gsSPVertex(ydan_boss_room_1Vtx_005740, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 1, 0, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 8, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 13, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 18, 0),
    gsSP2Triangles(21, 18, 20, 0, 23, 22, 21, 0),
    gsSP2Triangles(23, 21, 24, 0, 25, 15, 14, 0),
    gsSP2Triangles(25, 14, 23, 0, 24, 10, 9, 0),
    gsSP2Triangles(24, 9, 26, 0, 25, 23, 24, 0),
    gsSP2Triangles(25, 24, 26, 0, 25, 26, 5, 0),
    gsSP2Triangles(25, 5, 2, 0, 27, 28, 20, 0),
    gsSP2Triangles(19, 27, 20, 0, 18, 29, 30, 0),
    gsSP2Triangles(19, 18, 30, 0, 28, 27, 12, 0),
    gsSP2Triangles(11, 28, 12, 0, 31, 8, 12, 0),
    gsSP2Triangles(6, 31, 12, 0, 17, 30, 29, 0),
    gsSP1Triangle(17, 29, 13, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_005740[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 3, 2, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(18, 19, 17, 0, 18, 17, 16, 0),
    gsSP2Triangles(11, 10, 19, 0, 11, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(23, 22, 24, 0, 23, 24, 25, 0),
    gsSP2Triangles(25, 24, 26, 0, 25, 26, 27, 0),
    gsSP2Triangles(27, 26, 28, 0, 27, 28, 29, 0),
    gsSP2Triangles(29, 28, 30, 0, 29, 30, 31, 0),
    gsSP2Triangles(31, 30, 21, 0, 31, 21, 20, 0),
    gsSPVertex(&ydan_boss_room_1Vtx_005740[64], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(3, 2, 11, 0, 3, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 16, 18, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 18, 20, 0, 19, 20, 21, 0),
    gsSP2Triangles(21, 20, 22, 0, 21, 22, 23, 0),
    gsSP2Triangles(23, 22, 13, 0, 23, 13, 12, 0),
    gsSP2Triangles(15, 24, 25, 0, 15, 25, 10, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSPEndDisplayList(),
};

Gfx ydan_boss_room_1DL_005FD8[] = {
    gsSPDisplayList(ydan_boss_room_1DL_005D90),
    gsSPEndDisplayList(),
};

u64 ydan_boss_room_1Tex_005FE8[] = {
#include "assets/scenes/dungeons/ydan_boss/ydan_boss_room_1Tex_005FE8.ia8.inc.c"
};

