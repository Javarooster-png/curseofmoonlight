#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "bdan_room_3.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "bdan_scene.h"
#include "bdan_room_0.h"
#include "bdan_room_1.h"
#include "bdan_room_2.h"
#include "bdan_room_4.h"
#include "bdan_room_5.h"
#include "bdan_room_6.h"
#include "bdan_room_7.h"
#include "bdan_room_8.h"
#include "bdan_room_9.h"
#include "bdan_room_10.h"
#include "bdan_room_11.h"
#include "bdan_room_12.h"
#include "bdan_room_13.h"
#include "bdan_room_14.h"
#include "bdan_room_15.h"

SceneCmd bdan_room_3Commands[] = {
    SCENE_CMD_ALTERNATE_HEADER_LIST(bdan_room_3AlternateHeaders0x000048),
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&bdan_room_3RoomShapeNormal_0001F0),
    SCENE_CMD_OBJECT_LIST(14, bdan_room_3ObjectList_000058),
    SCENE_CMD_ACTOR_LIST(23, bdan_room_3ActorEntry_000074),
    SCENE_CMD_END(),
};

SceneCmd* bdan_room_3AlternateHeaders0x000048[] = {
    NULL,
    NULL,
    NULL,
    bdan_room_3Set_000210,
};

s16 bdan_room_3ObjectList_000058[] = {
    OBJECT_BDAN_OBJECTS,
    OBJECT_RU1,
    OBJECT_COW,
    OBJECT_KUSA,
    OBJECT_BL,
    OBJECT_BUBBLE,
    OBJECT_BOX,
    OBJECT_BOMBIWA,
    OBJECT_SIOFUKI,
    OBJECT_BOMBF,
    OBJECT_BROB,
    OBJECT_ST,
    OBJECT_GI_SUTARU,
    OBJECT_BXA,
};

ActorEntry bdan_room_3ActorEntry_000074[] = {
    { ACTOR_EN_KUSA,        {    305,  -1206,  -3481 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,        {    231,  -1207,  -3575 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,        {    -91,  -1206,  -2815 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_BILI,        {    -10,  -1142,  -3330 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_COW,         {   -383,   -943,  -3159 }, {      0, 0X4444,      0 }, 0x0000 },
    { ACTOR_EN_COW,         {   -296,   -885,  -3566 }, {      0,  0X2D8,      0 }, 0x0000 },
    { ACTOR_EN_RU1,         {    222,  -1113,  -3270 }, {      0,      0,      0 }, 0x0203 },
    { ACTOR_BG_BDAN_SWITCH, {     44,  -1114,  -3596 }, {      0,      0,      0 }, 0x3C00 },
    { ACTOR_BG_BDAN_SWITCH, {    -15,  -1204,  -3330 }, {      0,      0,      0 }, 0x3A02 },
    { ACTOR_EN_SIOFUKI,     {    -12,  -1400,  -3321 }, {      0,      0,    0X3 }, 0x0EBF },
    { ACTOR_EN_BUBBLE,      {     26,  -1074,  -3480 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_BOX,         {    270,   -833,  -3533 }, {      0, 0X5E94,    0X3 }, 0x8048 },
    { ACTOR_EN_BOX,         {   -149,   -764,  -2832 }, {      0, 0XF27D,    0X7 }, 0x8064 },
    { ACTOR_EN_WONDER_ITEM, {   -289,   -892,  -3530 }, {      0,      0,    0X4 }, 0x1983 },
    { ACTOR_EN_WONDER_ITEM, {   -282,   -874,  -3541 }, {      0,      0,    0X4 }, 0x1983 },
    { ACTOR_EN_WONDER_ITEM, {   -302,   -872,  -3528 }, {      0,      0,    0X4 }, 0x1983 },
    { ACTOR_EN_WONDER_ITEM, {   -361,   -947,  -3153 }, {      0,      0,    0X4 }, 0x1987 },
    { ACTOR_EN_WONDER_ITEM, {   -352,   -935,  -3163 }, {      0,      0,    0X4 }, 0x1987 },
    { ACTOR_EN_WONDER_ITEM, {   -364,   -949,  -3169 }, {      0,      0,    0X4 }, 0x1987 },
    { ACTOR_ELF_MSG,        {   -560,  -1015,  -3340 }, {   0X1E,    0XD,      0 }, 0x382F },
    { ACTOR_ELF_MSG,        {   -531,  -1113,  -2785 }, {   0X1E,    0XC,      0 }, 0x3731 },
    { ACTOR_EN_BX,          {   -531,  -1015,  -2785 }, {      0, 0X6000,      0 }, 0x0B80 },
    { ACTOR_EN_BX,          {   -560,  -1015,  -3340 }, {      0, 0X4000,      0 }, 0x0C81 },
};

u8 bdan_room_3_possiblePadding_0001E4[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

RoomShapeNormal bdan_room_3RoomShapeNormal_0001F0 = { 
    0, 1,
    bdan_room_3RoomShapeDListsEntry_0001FC,
    bdan_room_3RoomShapeDListsEntry_0001FC + ARRAY_COUNTU(bdan_room_3RoomShapeDListsEntry_0001FC)
};

RoomShapeDListsEntry bdan_room_3RoomShapeDListsEntry_0001FC[1] = {
    { bdan_room_3DL_004858, bdan_room_3DL_007250 },
};

s32 bdan_room_3_terminatorMaybe_000204 = { 0x01000000 };

u8 bdan_room_3_possiblePadding_000208[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

SceneCmd bdan_room_3Set_000210[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 255),
    SCENE_CMD_ROOM_SHAPE(&bdan_room_3RoomShapeNormal_0001F0),
    SCENE_CMD_OBJECT_LIST(4, bdan_room_3ObjectList_000250),
    SCENE_CMD_ACTOR_LIST(4, bdan_room_3ActorEntry_000258),
    SCENE_CMD_END(),
};

s16 bdan_room_3ObjectList_000250[] = {
    OBJECT_BDAN_OBJECTS,
    OBJECT_RU1,
    OBJECT_EI,
    OBJECT_BXA,
};

ActorEntry bdan_room_3ActorEntry_000258[] = {
    { ACTOR_EN_EIYER, {     30,  -1206,  -3032 }, {      0,      0,      0 }, 0x000A },
    { ACTOR_EN_EIYER, {    -18,  -1210,  -3408 }, {      0,      0,      0 }, 0x000A },
    { ACTOR_EN_BX,    {   -255,  -1015,  -3401 }, {      0,      0,      0 }, 0x3FFF },
    { ACTOR_EN_RU1,   {    222,  -1113,  -3270 }, {      0,      0,      0 }, 0x0003 },
};

u8 bdan_room_3_possiblePadding_000298[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx bdan_room_3Vtx_0002A0[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3Vtx_0002A0.vtx.inc"
};

Gfx bdan_room_3DL_0011F0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_3Vtx_0002A0[237], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(bdan_room_3Vtx_0002A0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 0, 10, 0),
    gsSP2Triangles(9, 11, 0, 0, 9, 12, 11, 0),
    gsSP2Triangles(9, 7, 6, 0, 9, 6, 12, 0),
    gsSP2Triangles(5, 13, 14, 0, 5, 4, 13, 0),
    gsSP2Triangles(13, 15, 14, 0, 15, 16, 14, 0),
    gsSP2Triangles(15, 10, 2, 0, 15, 2, 16, 0),
    gsSP2Triangles(10, 0, 2, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 29, 27, 0),
    gsSPVertex(&bdan_room_3Vtx_0002A0[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 9, 13, 0, 14, 12, 13, 0),
    gsSP2Triangles(13, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 21, 19, 0),
    gsSP2Triangles(1, 22, 23, 0, 24, 23, 19, 0),
    gsSP2Triangles(11, 24, 15, 0, 23, 20, 19, 0),
    gsSP2Triangles(24, 17, 15, 0, 24, 21, 17, 0),
    gsSP2Triangles(13, 11, 15, 0, 24, 19, 21, 0),
    gsSP2Triangles(25, 12, 14, 0, 11, 13, 9, 0),
    gsSP2Triangles(20, 23, 22, 0, 26, 27, 3, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&bdan_room_3Vtx_0002A0[61], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(2, 8, 9, 0, 10, 8, 11, 0),
    gsSP2Triangles(10, 9, 8, 0, 9, 3, 2, 0),
    gsSP2Triangles(12, 9, 10, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 17, 19, 0, 21, 22, 12, 0),
    gsSP2Triangles(19, 22, 23, 0, 22, 21, 23, 0),
    gsSP2Triangles(21, 12, 10, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 24, 26, 0, 10, 11, 28, 0),
    gsSP2Triangles(20, 19, 23, 0, 23, 21, 10, 0),
    gsSP2Triangles(29, 20, 23, 0, 23, 10, 28, 0),
    gsSP1Triangle(29, 23, 28, 0),
    gsSPVertex(&bdan_room_3Vtx_0002A0[91], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 9, 6, 10, 0),
    gsSP2Triangles(9, 8, 6, 0, 11, 12, 13, 0),
    gsSP2Triangles(3, 0, 12, 0, 14, 11, 15, 0),
    gsSP1Triangle(14, 16, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_013E00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_0002A0[108], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_0002A0[114], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_014600, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_0002A0[121], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_0002A0[125], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 18, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&bdan_room_3Vtx_0002A0[157], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_014600, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_0002A0[161], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP1Triangle(3, 4, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_0002A0[166], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_3Tex_005888, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_0002A0[170], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(3, 2, 6, 0, 2, 7, 6, 0),
    gsSP1Triangle(2, 5, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_0002A0[178], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 3, 7, 4, 0),
    gsSP2Triangles(7, 8, 4, 0, 8, 9, 6, 0),
    gsSP2Triangles(8, 6, 4, 0, 10, 11, 12, 0),
    gsSP2Triangles(11, 13, 12, 0, 10, 14, 11, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 19, 22, 0, 23, 22, 24, 0),
    gsSP2Triangles(21, 20, 25, 0, 21, 25, 26, 0),
    gsSP2Triangles(27, 28, 16, 0, 27, 16, 15, 0),
    gsSP2Triangles(25, 29, 30, 0, 25, 30, 26, 0),
    gsSP1Triangle(31, 28, 27, 0),
    gsSPVertex(&bdan_room_3Vtx_0002A0[210], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(8, 7, 9, 0, 8, 5, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(1, 10, 13, 0, 1, 13, 18, 0),
    gsSP2Triangles(2, 1, 18, 0, 2, 18, 19, 0),
    gsSP2Triangles(3, 8, 20, 0, 3, 5, 8, 0),
    gsSP2Triangles(15, 21, 22, 0, 15, 22, 16, 0),
    gsSP2Triangles(21, 23, 24, 0, 21, 24, 22, 0),
    gsSP2Triangles(23, 25, 26, 0, 23, 26, 24, 0),
    gsSPEndDisplayList(),
};

Vtx bdan_room_3Vtx_001800[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3Vtx_001800.vtx.inc"
};

Gfx bdan_room_3DL_002400[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_3Vtx_001800[184], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(bdan_room_3Vtx_001800, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 0, 3, 0, 6, 3, 7, 0),
    gsSP2Triangles(3, 5, 8, 0, 3, 8, 7, 0),
    gsSP2Triangles(9, 6, 7, 0, 9, 7, 10, 0),
    gsSP2Triangles(7, 8, 11, 0, 7, 11, 10, 0),
    gsSP2Triangles(12, 9, 10, 0, 12, 10, 13, 0),
    gsSP2Triangles(10, 11, 14, 0, 10, 14, 13, 0),
    gsSP2Triangles(15, 12, 13, 0, 15, 13, 16, 0),
    gsSP2Triangles(13, 14, 17, 0, 13, 17, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 18, 21, 0, 24, 21, 25, 0),
    gsSP2Triangles(21, 23, 26, 0, 21, 26, 25, 0),
    gsSP2Triangles(1, 24, 25, 0, 1, 25, 2, 0),
    gsSP2Triangles(25, 26, 4, 0, 25, 4, 2, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&bdan_room_3Vtx_001800[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 0, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 7, 6, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(13, 15, 16, 0, 13, 16, 14, 0),
    gsSP2Triangles(12, 17, 18, 0, 12, 18, 13, 0),
    gsSP2Triangles(18, 19, 15, 0, 18, 15, 13, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 18, 0),
    gsSP2Triangles(21, 22, 19, 0, 21, 19, 18, 0),
    gsSP2Triangles(20, 23, 24, 0, 20, 24, 21, 0),
    gsSP2Triangles(24, 25, 22, 0, 24, 22, 21, 0),
    gsSP2Triangles(23, 26, 3, 0, 23, 3, 24, 0),
    gsSP2Triangles(3, 2, 25, 0, 3, 25, 24, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&bdan_room_3Vtx_001800[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 0, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 7, 6, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(13, 15, 16, 0, 13, 16, 14, 0),
    gsSP2Triangles(12, 17, 18, 0, 12, 18, 13, 0),
    gsSP2Triangles(18, 19, 15, 0, 18, 15, 13, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 18, 0),
    gsSP2Triangles(21, 22, 19, 0, 21, 19, 18, 0),
    gsSP2Triangles(20, 23, 24, 0, 20, 24, 21, 0),
    gsSP2Triangles(24, 25, 22, 0, 24, 22, 21, 0),
    gsSP2Triangles(23, 26, 3, 0, 23, 3, 24, 0),
    gsSP2Triangles(3, 2, 25, 0, 3, 25, 24, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&bdan_room_3Vtx_001800[93], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 0, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 7, 6, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(13, 15, 16, 0, 13, 16, 14, 0),
    gsSP2Triangles(12, 17, 18, 0, 12, 18, 13, 0),
    gsSP2Triangles(18, 19, 15, 0, 18, 15, 13, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 18, 0),
    gsSP2Triangles(21, 22, 19, 0, 21, 19, 18, 0),
    gsSP2Triangles(20, 23, 24, 0, 20, 24, 21, 0),
    gsSP2Triangles(24, 25, 22, 0, 24, 22, 21, 0),
    gsSP2Triangles(23, 26, 3, 0, 23, 3, 24, 0),
    gsSP2Triangles(3, 2, 25, 0, 3, 25, 24, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&bdan_room_3Vtx_001800[124], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 0, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 7, 6, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(13, 15, 16, 0, 13, 16, 14, 0),
    gsSP2Triangles(12, 17, 18, 0, 12, 18, 13, 0),
    gsSP2Triangles(18, 19, 15, 0, 18, 15, 13, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 18, 0),
    gsSP2Triangles(21, 22, 19, 0, 21, 19, 18, 0),
    gsSP2Triangles(20, 23, 24, 0, 20, 24, 21, 0),
    gsSP2Triangles(24, 25, 22, 0, 24, 22, 21, 0),
    gsSP2Triangles(23, 26, 3, 0, 23, 3, 24, 0),
    gsSP2Triangles(3, 2, 25, 0, 3, 25, 24, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_3Tex_005888, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_001800[151], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(3, 2, 6, 0, 3, 6, 7, 0),
    gsSP2Triangles(2, 5, 8, 0, 2, 8, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_001800[160], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(9, 8, 12, 0, 9, 12, 13, 0),
    gsSP2Triangles(8, 11, 14, 0, 8, 14, 12, 0),
    gsSP2Triangles(13, 12, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(12, 14, 17, 0, 12, 17, 15, 0),
    gsSP2Triangles(16, 15, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(15, 17, 20, 0, 15, 20, 18, 0),
    gsSP2Triangles(19, 18, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(18, 20, 23, 0, 18, 23, 21, 0),
    gsSPEndDisplayList(),
};

Vtx bdan_room_3Vtx_002890[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3Vtx_002890.vtx.inc"
};

Gfx bdan_room_3DL_0035E0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_3Vtx_002890[205], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014600, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(bdan_room_3Vtx_002890, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_002890[3], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(6, 8, 7, 0, 3, 9, 4, 0),
    gsSP2Triangles(9, 10, 4, 0, 10, 11, 4, 0),
    gsSP2Triangles(10, 12, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 13, 0, 16, 12, 18, 0),
    gsSP2Triangles(16, 11, 12, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 14, 20, 0, 19, 22, 14, 0),
    gsSP2Triangles(22, 23, 24, 0, 24, 15, 14, 0),
    gsSP2Triangles(25, 26, 23, 0, 26, 8, 23, 0),
    gsSP2Triangles(27, 28, 29, 0, 29, 28, 9, 0),
    gsSP2Triangles(3, 29, 9, 0, 7, 30, 5, 0),
    gsSP1Triangle(7, 31, 30, 0),
    gsSPVertex(&bdan_room_3Vtx_002890[35], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 4, 5, 3, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 8, 6, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 9, 11, 0),
    gsSP2Triangles(13, 12, 11, 0, 13, 14, 12, 0),
    gsSP2Triangles(15, 14, 13, 0, 3, 15, 13, 0),
    gsSP2Triangles(3, 8, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 11, 0, 10, 19, 11, 0),
    gsSP2Triangles(10, 21, 19, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 22, 21, 0, 24, 25, 22, 0),
    gsSP2Triangles(26, 24, 21, 0, 27, 26, 21, 0),
    gsSP2Triangles(28, 29, 25, 0, 24, 28, 25, 0),
    gsSP2Triangles(28, 30, 29, 0, 31, 30, 28, 0),
    gsSPVertex(&bdan_room_3Vtx_002890[67], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 0, 2, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 10, 16, 17, 0),
    gsSP2Triangles(10, 17, 18, 0, 19, 20, 21, 0),
    gsSP1Triangle(16, 20, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_014600, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_002890[89], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 3, 9, 4, 0),
    gsSP2Triangles(3, 5, 9, 0, 5, 8, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_3Tex_006488, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_002890[99], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_014600, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_002890[107], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 2, 4, 0, 0, 4, 5, 0),
    gsSP1Triangle(5, 4, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_3Tex_006488, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_002890[114], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_014600, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_002890[122], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_3Tex_006488, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_002890[126], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_014600, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_002890[130], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_3Tex_006488, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_002890[133], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 2, 0, 4, 2, 1, 0),
    gsSP2Triangles(5, 4, 6, 0, 6, 4, 7, 0),
    gsSP2Triangles(7, 8, 6, 0, 8, 7, 9, 0),
    gsSP1Triangle(7, 10, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_3Tex_006088, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_002890[144], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 5, 4, 1, 0),
    gsSP2Triangles(6, 5, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 10, 9, 0, 6, 13, 5, 0),
    gsSP2Triangles(12, 14, 10, 0, 12, 13, 15, 0),
    gsSP1Triangle(12, 15, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_3Tex_006488, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_002890[160], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_014600, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_002890[166], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_3Tex_006488, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_002890[169], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_014600, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_002890[176], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 0, 0),
    gsSP2Triangles(7, 8, 0, 0, 8, 9, 1, 0),
    gsSP2Triangles(8, 1, 0, 0, 0, 10, 11, 0),
    gsSP1Triangle(0, 12, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_3Tex_006488, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_002890[189], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_014600, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_002890[195], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_3Tex_006088, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_002890[199], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 1, 5, 0, 1, 0, 5, 0),
    gsSPEndDisplayList(),
};

Vtx bdan_room_3Vtx_003DE0[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3Vtx_003DE0.vtx.inc"
};

Gfx bdan_room_3DL_004350[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_3Vtx_003DE0[79], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BF8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(bdan_room_3Vtx_003DE0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(4, 5, 0, 0, 6, 3, 7, 0),
    gsSP2Triangles(1, 0, 5, 0, 2, 7, 3, 0),
    gsSP2Triangles(8, 5, 9, 0, 5, 8, 1, 0),
    gsSP2Triangles(0, 2, 3, 0, 6, 10, 3, 0),
    gsSP2Triangles(10, 4, 3, 0, 8, 11, 1, 0),
    gsSP2Triangles(5, 4, 12, 0, 9, 5, 12, 0),
    gsSP2Triangles(4, 13, 14, 0, 15, 13, 6, 0),
    gsSP2Triangles(14, 16, 4, 0, 9, 16, 17, 0),
    gsSP2Triangles(10, 6, 13, 0, 4, 10, 13, 0),
    gsSP2Triangles(12, 4, 16, 0, 9, 12, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 18, 21, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 23, 25, 0, 24, 22, 21, 0),
    gsSP2Triangles(24, 21, 25, 0, 27, 28, 22, 0),
    gsSP2Triangles(27, 22, 29, 0, 27, 30, 28, 0),
    gsSP2Triangles(18, 22, 28, 0, 18, 28, 31, 0),
    gsSP2Triangles(19, 18, 31, 0, 30, 31, 28, 0),
    gsSPVertex(&bdan_room_3Vtx_003DE0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(0, 2, 4, 0, 5, 0, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 9, 11, 0, 10, 11, 12, 0),
    gsSP2Triangles(12, 13, 10, 0, 9, 10, 14, 0),
    gsSP2Triangles(9, 14, 8, 0, 6, 8, 15, 0),
    gsSP2Triangles(16, 15, 8, 0, 16, 8, 14, 0),
    gsSP2Triangles(10, 17, 14, 0, 10, 13, 17, 0),
    gsSP2Triangles(13, 18, 17, 0, 19, 14, 17, 0),
    gsSP2Triangles(19, 16, 14, 0, 16, 20, 15, 0),
    gsSP2Triangles(20, 16, 21, 0, 16, 19, 21, 0),
    gsSP2Triangles(22, 19, 17, 0, 22, 17, 18, 0),
    gsSP2Triangles(18, 23, 22, 0, 22, 24, 19, 0),
    gsSP2Triangles(24, 21, 19, 0, 21, 25, 20, 0),
    gsSP2Triangles(25, 21, 24, 0, 24, 22, 23, 0),
    gsSP2Triangles(26, 27, 28, 0, 28, 27, 29, 0),
    gsSPVertex(&bdan_room_3Vtx_003DE0[62], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 0, 2, 0, 4, 2, 5, 0),
    gsSP1Triangle(3, 5, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_3Tex_006C88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_003DE0[68], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_014A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_3Vtx_003DE0[71], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 1, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 4, 5, 0, 6, 5, 7, 0),
    gsSPEndDisplayList(),
};

Vtx bdan_room_3Vtx_004618[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3Vtx_004618.vtx.inc"
};

Gfx bdan_room_3DL_004768[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_3Vtx_004618[13], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_room_3Tex_004888, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(bdan_room_3Vtx_004618, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 3, 5, 0, 3, 1, 5, 0),
    gsSP2Triangles(1, 6, 5, 0, 0, 6, 1, 0),
    gsSP2Triangles(6, 0, 7, 0, 8, 0, 2, 0),
    gsSP2Triangles(4, 9, 3, 0, 4, 10, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 2, 9, 11, 0),
    gsSP2Triangles(12, 2, 11, 0, 8, 2, 12, 0),
    gsSP1Triangle(2, 3, 9, 0),
    gsSPEndDisplayList(),
};

Gfx bdan_room_3DL_004858[] = {
    gsSPDisplayList(bdan_room_3DL_0011F0),
    gsSPDisplayList(bdan_room_3DL_002400),
    gsSPDisplayList(bdan_room_3DL_0035E0),
    gsSPDisplayList(bdan_room_3DL_004350),
    gsSPDisplayList(bdan_room_3DL_004768),
    gsSPEndDisplayList(),
};

u64 bdan_room_3Tex_004888[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3Tex_004888.rgba16.inc.c"
};

u64 bdan_room_3Tex_005888[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3Tex_005888.ci8.inc.c"
};

u64 bdan_room_3Tex_006088[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3Tex_006088.ci8.inc.c"
};

u64 bdan_room_3Tex_006488[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3Tex_006488.ci8.inc.c"
};

u64 bdan_room_3Tex_006C88[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3Tex_006C88.ci8.inc.c"
};

u8 bdan_room_3_possiblePadding_007088[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx bdan_room_3Vtx_007090[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3Vtx_007090.vtx.inc"
};

Gfx bdan_room_3DL_007160[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_3Vtx_007090[5], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_015200, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_0139F0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 63),
    gsSPVertex(bdan_room_3Vtx_007090, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 1, 0, 0, 0, 3, 4, 0),
    gsSPEndDisplayList(),
};

Gfx bdan_room_3DL_007250[] = {
    gsSPDisplayList(bdan_room_3DL_007160),
    gsSPEndDisplayList(),
};

