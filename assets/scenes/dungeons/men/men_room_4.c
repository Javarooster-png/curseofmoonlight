#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "men_room_4.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "men_scene.h"
#include "men_room_0.h"
#include "men_room_1.h"
#include "men_room_2.h"
#include "men_room_3.h"
#include "men_room_5.h"
#include "men_room_6.h"
#include "men_room_7.h"
#include "men_room_8.h"
#include "men_room_9.h"
#include "men_room_10.h"

SceneCmd men_room_4Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&men_room_4RoomShapeCullable_000180),
    SCENE_CMD_OBJECT_LIST(7, men_room_4ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(19, men_room_4ActorEntry_000050),
    SCENE_CMD_END(),
};

s16 men_room_4ObjectList_000040[] = {
    OBJECT_MENKURI_OBJECTS,
    OBJECT_BOX,
    OBJECT_EFC_FLASH,
    OBJECT_FIREFLY,
    OBJECT_D_HSBLOCK,
    OBJECT_GI_RUPY,
    OBJECT_HIDAN_OBJECTS,
};

ActorEntry men_room_4ActorEntry_000050[] = {
    { ACTOR_OBJ_HSBLOCK,       {    -73,     68,  -2747 }, {      0, 0X11C7,      0 }, 0xFFC0 },
    { ACTOR_OBJ_HSBLOCK,       {   -167,    239,  -2217 }, {      0,      0,      0 }, 0xFFC0 },
    { ACTOR_EN_BOX,            {    -65,    384,  -3297 }, {      0, 0X8000,   0X15 }, 0x8063 },
    { ACTOR_OBJ_SWITCH,        {    -57,   -151,  -2931 }, {      0,      0,      0 }, 0x0403 },
    { ACTOR_EN_WONDER_ITEM,    {    -74,    167,  -2746 }, {      0,      0,    0X1 }, 0x1093 },
    { ACTOR_BG_MENKURI_EYE,    {   -100,      2,  -2803 }, { 0XFC72, 0X905B,      0 }, 0x0015 },
    { ACTOR_BG_MENKURI_EYE,    {    -14,     11,  -2774 }, { 0XFC72, 0X4FA5,      0 }, 0x0015 },
    { ACTOR_BG_MENKURI_EYE,    {   -135,     40,  -2724 }, { 0XF555, 0XD05B,      0 }, 0x0015 },
    { ACTOR_BG_MENKURI_EYE,    {    -54,    -16,  -2692 }, { 0XFC72, 0X105B,      0 }, 0x0015 },
    { ACTOR_BG_MENKURI_KAITEN, {    -77,   -161,  -2747 }, {      0,      0,      0 }, 0x0015 },
    { ACTOR_EN_WONDER_TALK2,   {    159,    -66,  -2746 }, {      0,      0,   0X45 }, 0x4D95 },
    { ACTOR_BG_HIDAN_CURTAIN,  {    -57,   -151,  -2930 }, {      0,      0,      0 }, 0x3FFE },
    { ACTOR_BG_HIDAN_CURTAIN,  {   -196,   -151,  -2882 }, {      0,      0,      0 }, 0x3FFE },
    { ACTOR_BG_HIDAN_CURTAIN,  {     61,   -151,  -2874 }, {      0,      0,      0 }, 0x3FFE },
    { ACTOR_BG_HIDAN_CURTAIN,  {   -250,   -151,  -2752 }, {      0,      0,      0 }, 0x3FFE },
    { ACTOR_BG_HIDAN_CURTAIN,  {    104,   -151,  -2737 }, {      0,      0,      0 }, 0x3FFE },
    { ACTOR_BG_HIDAN_CURTAIN,  {   -208,   -151,  -2618 }, {      0,      0,      0 }, 0x3FFE },
    { ACTOR_BG_HIDAN_CURTAIN,  {     43,   -151,  -2611 }, {      0,      0,      0 }, 0x3FFE },
    { ACTOR_BG_HIDAN_CURTAIN,  {    -80,   -151,  -2565 }, {      0,      0,      0 }, 0x3FFE },
};

RoomShapeCullable men_room_4RoomShapeCullable_000180 = { 
    2, 7,
    men_room_4RoomShapeCullableEntry_00018C,
    men_room_4RoomShapeCullableEntry_00018C + ARRAY_COUNTU(men_room_4RoomShapeCullableEntry_00018C)
};

RoomShapeCullableEntry men_room_4RoomShapeCullableEntry_00018C[7] = {
    { {    673,    129,  -2748 },    347, men_room_4DL_003EF8, NULL },
    { {     23,     39,  -2463 },    909, men_room_4DL_0046B0, NULL },
    { {   -318,    169,  -2463 },    594, men_room_4DL_004C30, NULL },
    { {     33,   -161,  -2748 },    578, men_room_4DL_005068, NULL },
    { {   -127,    229,  -2748 },    730, men_room_4DL_000B10, NULL },
    { {    -77,     -1,  -2748 },    325, men_room_4DL_0015C8, NULL },
    { {    -79,    -26,  -2749 },    160, men_room_4DL_002F40, NULL },
};

s32 men_room_4_terminatorMaybe_0001FC = { 0x01000000 };

Vtx men_room_4Vtx_000200[] = {
#include "assets/scenes/dungeons/men/men_room_4Vtx_000200.vtx.inc"
};

Gfx men_room_4DL_000B10[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&men_room_4Vtx_000200[137], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(men_room_4Tex_0099E0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(men_sceneTLUT_00F6C0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(men_room_4Vtx_000200, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 0, 4, 0),
    gsSP2Triangles(1, 6, 2, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 1, 19, 6, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&men_room_4Vtx_000200[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(3, 2, 6, 0, 3, 6, 7, 0),
    gsSP2Triangles(2, 5, 8, 0, 2, 8, 6, 0),
    gsSP2Triangles(7, 6, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(6, 8, 11, 0, 6, 11, 9, 0),
    gsSP2Triangles(10, 9, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(9, 11, 14, 0, 9, 14, 12, 0),
    gsSP2Triangles(13, 12, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(12, 14, 17, 0, 12, 17, 15, 0),
    gsSP2Triangles(16, 15, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(15, 17, 20, 0, 15, 20, 18, 0),
    gsSP2Triangles(21, 22, 23, 0, 18, 20, 24, 0),
    gsSP2Triangles(25, 23, 26, 0, 25, 26, 27, 0),
    gsSP2Triangles(23, 22, 28, 0, 23, 28, 26, 0),
    gsSP2Triangles(27, 26, 29, 0, 27, 29, 30, 0),
    gsSP2Triangles(26, 28, 31, 0, 26, 31, 29, 0),
    gsSPVertex(&men_room_4Vtx_000200[64], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(9, 8, 12, 0, 9, 12, 13, 0),
    gsSP2Triangles(8, 11, 14, 0, 8, 14, 12, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 16, 0),
    gsSP2Triangles(13, 12, 16, 0, 13, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 18, 21, 0, 22, 21, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_4Tex_0081E0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_000200[88], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 0, 0, 5, 6, 0, 0),
    gsSP2Triangles(7, 2, 3, 0, 0, 6, 1, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 2, 0),
    gsSP2Triangles(8, 10, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 9, 0, 11, 13, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 12, 0),
    gsSP2Triangles(14, 16, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 15, 0, 17, 19, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 18, 0),
    gsSP2Triangles(20, 22, 21, 0, 22, 23, 4, 0),
    gsSP2Triangles(22, 4, 21, 0, 23, 5, 4, 0),
    gsSP2Triangles(12, 24, 25, 0, 12, 25, 9, 0),
    gsSP2Triangles(24, 26, 25, 0, 9, 25, 27, 0),
    gsSP2Triangles(9, 27, 2, 0, 25, 26, 27, 0),
    gsSP2Triangles(26, 28, 27, 0, 28, 0, 2, 0),
    gsSP2Triangles(28, 2, 27, 0, 26, 29, 28, 0),
    gsSP2Triangles(29, 4, 0, 0, 29, 0, 28, 0),
    gsSP2Triangles(4, 29, 30, 0, 4, 30, 21, 0),
    gsSP2Triangles(29, 26, 30, 0, 21, 30, 31, 0),
    gsSP2Triangles(21, 31, 18, 0, 30, 26, 31, 0),
    gsSPVertex(&men_room_4Vtx_000200[120], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 3, 2, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 2, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_4Tex_0099E0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_000200[127], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSPEndDisplayList(),
};

Vtx men_room_4Vtx_000E88[] = {
#include "assets/scenes/dungeons/men/men_room_4Vtx_000E88.vtx.inc"
};

Gfx men_room_4DL_0015C8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&men_room_4Vtx_000E88[108], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(men_room_4Tex_0071E0, G_IM_FMT_I, 64, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 6, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(men_room_4Vtx_000E88, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&men_room_4Vtx_000E88[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&men_room_4Vtx_000E88[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&men_room_4Vtx_000E88[96], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx men_room_4Vtx_001760[] = {
#include "assets/scenes/dungeons/men/men_room_4Vtx_001760.vtx.inc"
};

Gfx men_room_4DL_002F40[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&men_room_4Vtx_001760[374], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(men_room_4Tex_0071E0, G_IM_FMT_I, 64, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 6, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(men_room_4Vtx_001760, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(men_room_4Tex_0089E0, G_IM_FMT_I, 64, 128, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 6, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_001760[3], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(men_room_4Tex_0071E0, G_IM_FMT_I, 64, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 6, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_001760[11], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_4Tex_0059E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&men_room_4Vtx_001760[15], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 4, 2, 0, 1, 5, 4, 0),
    gsSP2Triangles(1, 6, 5, 0, 3, 7, 1, 0),
    gsSP2Triangles(7, 8, 1, 0, 8, 6, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(men_room_4Tex_0071E0, G_IM_FMT_I, 64, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 6, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&men_room_4Vtx_001760[24], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(7, 4, 1, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 13, 16, 14, 0),
    gsSP1Triangle(17, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(men_room_4Tex_0089E0, G_IM_FMT_I, 64, 128, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 6, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_001760[44], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(men_room_4Tex_0071E0, G_IM_FMT_I, 64, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 6, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_001760[48], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_4Tex_0059E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&men_room_4Vtx_001760[52], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(men_room_4Tex_0071E0, G_IM_FMT_I, 64, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 6, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&men_room_4Vtx_001760[56], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 1, 5, 4, 0),
    gsSP1Triangle(5, 6, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(men_room_4Tex_0089E0, G_IM_FMT_I, 64, 128, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 6, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_001760[63], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(men_room_4Tex_0071E0, G_IM_FMT_I, 64, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 6, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_001760[67], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(7, 8, 4, 0, 7, 4, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(men_room_4Tex_0089E0, G_IM_FMT_I, 64, 128, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 6, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_001760[76], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 3, 4, 0, 4, 3, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(men_room_4Tex_0071E0, G_IM_FMT_I, 64, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 6, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_001760[82], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP1Triangle(8, 10, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(men_room_4Tex_0089E0, G_IM_FMT_I, 64, 128, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 6, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_001760[93], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(18, 20, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 19, 0, 22, 17, 19, 0),
    gsSP2Triangles(22, 15, 17, 0, 22, 13, 15, 0),
    gsSP2Triangles(22, 11, 13, 0, 22, 8, 11, 0),
    gsSP2Triangles(7, 23, 10, 0, 23, 12, 10, 0),
    gsSP2Triangles(23, 14, 12, 0, 23, 16, 14, 0),
    gsSP2Triangles(23, 18, 16, 0, 23, 24, 20, 0),
    gsSP2Triangles(23, 20, 18, 0, 25, 26, 27, 0),
    gsSP2Triangles(26, 28, 27, 0, 28, 29, 27, 0),
    gsSP2Triangles(26, 30, 31, 0, 26, 31, 28, 0),
    gsSPVertex(&men_room_4Vtx_001760[125], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 4, 5, 6, 0),
    gsSP2Triangles(5, 7, 6, 0, 5, 8, 7, 0),
    gsSP2Triangles(8, 9, 7, 0, 9, 10, 7, 0),
    gsSP2Triangles(10, 11, 7, 0, 11, 6, 7, 0),
    gsSP2Triangles(9, 12, 10, 0, 12, 11, 10, 0),
    gsSP2Triangles(13, 1, 0, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 17, 15, 0, 17, 18, 15, 0),
    gsSP2Triangles(18, 16, 15, 0, 18, 19, 16, 0),
    gsSP2Triangles(17, 20, 18, 0, 20, 21, 18, 0),
    gsSP2Triangles(21, 19, 18, 0, 21, 22, 19, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 25, 26, 0),
    gsSP2Triangles(23, 26, 24, 0, 25, 27, 26, 0),
    gsSP2Triangles(23, 28, 29, 0, 23, 29, 30, 0),
    gsSPVertex(&men_room_4Vtx_001760[156], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 0, 0, 7, 1, 0, 0),
    gsSP2Triangles(7, 4, 1, 0, 5, 8, 9, 0),
    gsSP2Triangles(5, 9, 2, 0, 9, 10, 3, 0),
    gsSP2Triangles(9, 3, 2, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 3, 0, 8, 13, 9, 0),
    gsSP2Triangles(13, 10, 9, 0, 13, 11, 10, 0),
    gsSP1Triangle(14, 15, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(men_room_4Tex_0071E0, G_IM_FMT_I, 64, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 6, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_001760[173], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(men_room_4Tex_0089E0, G_IM_FMT_I, 64, 128, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 6, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_001760[179], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 0, 4, 0, 4, 0, 2, 0),
    gsSP2Triangles(3, 5, 4, 0, 5, 3, 6, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 11, 0, 7, 11, 10, 0),
    gsSP2Triangles(6, 8, 11, 0, 7, 6, 11, 0),
    gsSP2Triangles(3, 12, 13, 0, 3, 13, 6, 0),
    gsSP2Triangles(3, 14, 12, 0, 14, 3, 2, 0),
    gsSP2Triangles(14, 15, 12, 0, 12, 15, 16, 0),
    gsSP2Triangles(12, 16, 13, 0, 17, 13, 16, 0),
    gsSP2Triangles(17, 6, 13, 0, 17, 16, 18, 0),
    gsSP2Triangles(15, 19, 18, 0, 15, 18, 16, 0),
    gsSP2Triangles(14, 19, 15, 0, 14, 20, 19, 0),
    gsSP2Triangles(14, 21, 20, 0, 19, 20, 22, 0),
    gsSP2Triangles(19, 22, 18, 0, 20, 21, 23, 0),
    gsSP2Triangles(20, 23, 22, 0, 17, 22, 23, 0),
    gsSP2Triangles(17, 18, 22, 0, 6, 17, 8, 0),
    gsSP2Triangles(24, 9, 8, 0, 17, 24, 8, 0),
    gsSP2Triangles(21, 25, 23, 0, 25, 24, 17, 0),
    gsSP2Triangles(25, 17, 23, 0, 14, 26, 25, 0),
    gsSP2Triangles(14, 25, 21, 0, 26, 14, 2, 0),
    gsSP2Triangles(26, 2, 1, 0, 27, 28, 29, 0),
    gsSP2Triangles(27, 24, 30, 0, 24, 27, 9, 0),
    gsSPVertex(&men_room_4Vtx_001760[210], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 0, 4, 0, 5, 0, 2, 0),
    gsSP2Triangles(5, 2, 6, 0, 7, 8, 5, 0),
    gsSP2Triangles(7, 5, 6, 0, 9, 7, 6, 0),
    gsSP2Triangles(9, 6, 10, 0, 2, 3, 10, 0),
    gsSP2Triangles(2, 10, 6, 0, 1, 11, 3, 0),
    gsSP2Triangles(3, 11, 12, 0, 3, 12, 10, 0),
    gsSP2Triangles(13, 14, 9, 0, 13, 9, 10, 0),
    gsSP2Triangles(13, 10, 12, 0, 14, 7, 9, 0),
    gsSP2Triangles(1, 4, 15, 0, 11, 1, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 18, 17, 11, 0),
    gsSP2Triangles(18, 11, 15, 0, 11, 17, 12, 0),
    gsSP2Triangles(17, 19, 12, 0, 17, 16, 20, 0),
    gsSP2Triangles(17, 20, 19, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 13, 12, 0, 13, 19, 21, 0),
    gsSP2Triangles(13, 21, 22, 0, 14, 13, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(men_room_4Tex_0071E0, G_IM_FMT_I, 64, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 6, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_001760[233], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 15, 0, 18, 15, 14, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(3, 2, 24, 0, 3, 24, 25, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(men_room_4Tex_0089E0, G_IM_FMT_I, 64, 128, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 6, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_001760[259], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 4, 0),
    gsSP2Triangles(5, 4, 1, 0, 5, 1, 7, 0),
    gsSP2Triangles(1, 0, 7, 0, 8, 5, 7, 0),
    gsSP2Triangles(9, 5, 8, 0, 9, 8, 10, 0),
    gsSP2Triangles(6, 5, 9, 0, 11, 0, 3, 0),
    gsSP2Triangles(11, 3, 12, 0, 0, 11, 13, 0),
    gsSP2Triangles(11, 14, 13, 0, 11, 15, 14, 0),
    gsSP2Triangles(15, 11, 12, 0, 13, 14, 16, 0),
    gsSP2Triangles(13, 16, 17, 0, 0, 13, 17, 0),
    gsSP2Triangles(0, 17, 7, 0, 14, 15, 18, 0),
    gsSP2Triangles(14, 18, 16, 0, 19, 20, 17, 0),
    gsSP2Triangles(19, 17, 16, 0, 20, 8, 7, 0),
    gsSP2Triangles(20, 7, 17, 0, 18, 21, 19, 0),
    gsSP2Triangles(18, 19, 16, 0, 22, 20, 19, 0),
    gsSP2Triangles(22, 8, 20, 0, 22, 21, 23, 0),
    gsSP2Triangles(21, 22, 19, 0, 8, 22, 10, 0),
    gsSP2Triangles(22, 23, 10, 0, 21, 24, 23, 0),
    gsSP2Triangles(21, 25, 24, 0, 25, 21, 18, 0),
    gsSP2Triangles(25, 18, 26, 0, 26, 18, 27, 0),
    gsSP2Triangles(18, 15, 28, 0, 18, 28, 27, 0),
    gsSP2Triangles(28, 15, 29, 0, 15, 12, 29, 0),
    gsSP1Triangle(30, 28, 29, 0),
    gsSPVertex(&men_room_4Vtx_001760[290], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 6, 4, 0, 8, 4, 3, 0),
    gsSP2Triangles(9, 8, 3, 0, 9, 3, 2, 0),
    gsSP2Triangles(10, 9, 2, 0, 10, 2, 1, 0),
    gsSP2Triangles(11, 9, 10, 0, 11, 8, 9, 0),
    gsSP2Triangles(11, 6, 8, 0, 11, 7, 6, 0),
    gsSP2Triangles(11, 12, 13, 0, 12, 11, 10, 0),
    gsSP2Triangles(12, 10, 1, 0, 12, 1, 14, 0),
    gsSP2Triangles(0, 14, 1, 0, 15, 14, 16, 0),
    gsSP2Triangles(14, 17, 16, 0, 15, 16, 18, 0),
    gsSP2Triangles(17, 18, 16, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 12, 14, 0, 20, 14, 15, 0),
    gsSP2Triangles(12, 20, 21, 0, 12, 21, 13, 0),
    gsSP2Triangles(20, 22, 21, 0, 21, 23, 13, 0),
    gsSP2Triangles(23, 24, 13, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 29, 26, 0, 28, 26, 25, 0),
    gsSP2Triangles(29, 28, 30, 0, 31, 25, 27, 0),
    gsSPVertex(&men_room_4Vtx_001760[322], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 3, 4, 0, 6, 5, 4, 0),
    gsSP2Triangles(7, 5, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(9, 0, 2, 0, 9, 2, 10, 0),
    gsSP2Triangles(0, 9, 11, 0, 9, 12, 11, 0),
    gsSP2Triangles(9, 13, 12, 0, 13, 9, 10, 0),
    gsSP2Triangles(11, 12, 14, 0, 11, 14, 15, 0),
    gsSP2Triangles(0, 11, 15, 0, 0, 15, 4, 0),
    gsSP2Triangles(12, 13, 16, 0, 12, 16, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 14, 0),
    gsSP2Triangles(18, 19, 15, 0, 18, 15, 14, 0),
    gsSP2Triangles(19, 6, 4, 0, 19, 4, 15, 0),
    gsSP2Triangles(20, 19, 18, 0, 20, 6, 19, 0),
    gsSP2Triangles(17, 20, 18, 0, 20, 17, 21, 0),
    gsSP2Triangles(20, 21, 8, 0, 6, 20, 8, 0),
    gsSP2Triangles(17, 22, 21, 0, 17, 23, 22, 0),
    gsSP2Triangles(23, 17, 16, 0, 23, 16, 24, 0),
    gsSP2Triangles(24, 16, 25, 0, 16, 13, 26, 0),
    gsSP2Triangles(16, 26, 25, 0, 26, 13, 27, 0),
    gsSP2Triangles(13, 10, 27, 0, 27, 10, 28, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 27, 29, 0),
    gsSP2Triangles(31, 30, 29, 0, 31, 29, 28, 0),
    gsSP1Triangle(30, 26, 27, 0),
    gsSPVertex(&men_room_4Vtx_001760[354], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 2, 0, 5, 0, 3, 0),
    gsSP2Triangles(5, 3, 6, 0, 0, 5, 7, 0),
    gsSP2Triangles(0, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(5, 9, 7, 0, 9, 10, 8, 0),
    gsSP2Triangles(11, 0, 8, 0, 0, 11, 1, 0),
    gsSP2Triangles(11, 12, 1, 0, 1, 12, 13, 0),
    gsSP2Triangles(1, 13, 2, 0, 4, 2, 13, 0),
    gsSP2Triangles(4, 13, 14, 0, 4, 14, 15, 0),
    gsSP2Triangles(16, 17, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(11, 17, 16, 0, 11, 16, 12, 0),
    gsSP2Triangles(12, 16, 14, 0, 12, 14, 13, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 15, 0),
    gsSP2Triangles(4, 15, 19, 0, 11, 18, 17, 0),
    gsSPEndDisplayList(),
};

Vtx men_room_4Vtx_003B38[] = {
#include "assets/scenes/dungeons/men/men_room_4Vtx_003B38.vtx.inc"
};

Gfx men_room_4DL_003EF8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&men_room_4Vtx_003B38[52], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(men_room_4Tex_0099E0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(men_sceneTLUT_00F6C0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(men_room_4Vtx_003B38, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(14, 17, 18, 0, 9, 14, 18, 0),
    gsSP2Triangles(9, 18, 10, 0, 13, 12, 19, 0),
    gsSP2Triangles(19, 16, 15, 0, 13, 19, 15, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&men_room_4Vtx_003B38[32], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 0, 2, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(19, 15, 2, 0, 19, 2, 17, 0),
    gsSPEndDisplayList(),
};

Vtx men_room_4Vtx_004060[] = {
#include "assets/scenes/dungeons/men/men_room_4Vtx_004060.vtx.inc"
};

Gfx men_room_4DL_0046B0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&men_room_4Vtx_004060[93], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(men_room_4Tex_0071E0, G_IM_FMT_I, 64, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 6, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(men_room_4Vtx_004060, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 0, 2, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(men_room_4Tex_0061E0, G_IM_FMT_I, 128, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 7, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_004060[6], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP1Triangle(3, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(men_room_4Tex_0071E0, G_IM_FMT_I, 64, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                            G_TX_WRAP, 6, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_004060[11], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 0, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 6, 8, 0),
    gsSP2Triangles(6, 9, 10, 0, 11, 6, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&men_room_4Vtx_004060[43], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(9, 12, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 16, 14, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(22, 24, 23, 0, 22, 25, 24, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&men_room_4Vtx_004060[73], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
};

Vtx men_room_4Vtx_0048D0[] = {
#include "assets/scenes/dungeons/men/men_room_4Vtx_0048D0.vtx.inc"
};

Gfx men_room_4DL_004C30[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&men_room_4Vtx_0048D0[46], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(men_room_4Tex_0099E0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(men_sceneTLUT_00F6C0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(men_room_4Vtx_0048D0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_0108C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_0048D0[3], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_4Tex_0099E0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_0048D0[7], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_sceneTex_0108C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_0048D0[11], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(men_room_4Tex_0099E0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&men_room_4Vtx_0048D0[15], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 4, 0, 2, 0),
    gsSP2Triangles(4, 2, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPEndDisplayList(),
};

Vtx men_room_4Vtx_004E98[] = {
#include "assets/scenes/dungeons/men/men_room_4Vtx_004E98.vtx.inc"
};

Gfx men_room_4DL_005068[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&men_room_4Vtx_004E98[21], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(men_room_4Tex_0051E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 14, 15),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0x0000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, 14, G_TX_NOMIRROR |
                G_TX_WRAP, 5, 15),
    gsDPSetTileSize(1, 0, 0, 0x007C, 0x007C),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x09000000),
    gsSPVertex(men_room_4Vtx_004E98, 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(9, 10, 5, 0, 5, 10, 6, 0),
    gsSP2Triangles(11, 10, 9, 0, 12, 11, 9, 0),
    gsSP2Triangles(12, 9, 8, 0, 13, 14, 11, 0),
    gsSP2Triangles(13, 11, 12, 0, 14, 10, 11, 0),
    gsSP2Triangles(15, 16, 14, 0, 15, 14, 13, 0),
    gsSP2Triangles(16, 10, 14, 0, 17, 10, 16, 0),
    gsSP2Triangles(18, 17, 16, 0, 18, 16, 15, 0),
    gsSP2Triangles(19, 20, 17, 0, 19, 17, 18, 0),
    gsSP2Triangles(20, 10, 17, 0, 10, 20, 6, 0),
    gsSP2Triangles(20, 19, 7, 0, 20, 7, 6, 0),
    gsSPEndDisplayList(),
};

u8 men_room_4_unaccounted_0051A0[] = {
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0B, 0x10, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x15, 0xC8, 
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x2F, 0x40, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x3E, 0xF8, 
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x46, 0xB0, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x4C, 0x30, 
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x50, 0x68, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 men_room_4Tex_0051E0[] = {
#include "assets/scenes/dungeons/men/men_room_4Tex_0051E0.rgba16.inc.c"
};

u64 men_room_4Tex_0059E0[] = {
#include "assets/scenes/dungeons/men/men_room_4Tex_0059E0.rgba16.inc.c"
};

u64 men_room_4Tex_0061E0[] = {
#include "assets/scenes/dungeons/men/men_room_4Tex_0061E0.i4.inc.c"
};

u64 men_room_4Tex_0071E0[] = {
#include "assets/scenes/dungeons/men/men_room_4Tex_0071E0.i4.inc.c"
};

u64 men_room_4Tex_0081E0[] = {
#include "assets/scenes/dungeons/men/men_room_4Tex_0081E0.ci8.inc.c"
};

u64 men_room_4Tex_0089E0[] = {
#include "assets/scenes/dungeons/men/men_room_4Tex_0089E0.i4.inc.c"
};

u64 men_room_4Tex_0099E0[] = {
#include "assets/scenes/dungeons/men/men_room_4Tex_0099E0.ci8.inc.c"
};

