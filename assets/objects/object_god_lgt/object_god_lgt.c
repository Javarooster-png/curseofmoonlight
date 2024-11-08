#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_god_lgt.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

Vtx object_god_lgtVtx_000000[] = {
#include "assets/objects/object_god_lgt/object_god_lgtVtx_000000.vtx.inc"
};

Gfx gGoldenGoddessAuraDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gGoldenGoddessAuraHeadTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 6, 6, 1, G_TX_NOLOD),
    gsDPLoadMultiBlock(gGoldenGoddessAuraHeadTex, 0x0000, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, 15),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE,
                       ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x08000000),
    gsSPVertex(object_god_lgtVtx_000000, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 2, 7, 8, 0),
    gsSP2Triangles(2, 8, 4, 0, 4, 8, 9, 0),
    gsSP2Triangles(4, 9, 6, 0, 6, 9, 10, 0),
    gsSP2Triangles(8, 11, 12, 0, 8, 12, 9, 0),
    gsSP2Triangles(9, 12, 13, 0, 9, 13, 10, 0),
    gsSP2Triangles(10, 13, 14, 0, 12, 15, 16, 0),
    gsSP2Triangles(12, 16, 13, 0, 13, 16, 17, 0),
    gsSP2Triangles(13, 17, 14, 0, 14, 17, 18, 0),
    gsSP2Triangles(16, 19, 17, 0, 17, 19, 20, 0),
    gsSP2Triangles(17, 20, 18, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 22, 0),
    gsSP2Triangles(22, 26, 27, 0, 22, 27, 23, 0),
    gsSP2Triangles(23, 27, 28, 0, 26, 29, 30, 0),
    gsSP2Triangles(26, 30, 27, 0, 27, 30, 31, 0),
    gsSP1Triangle(27, 31, 28, 0),
    gsSPVertex(&object_god_lgtVtx_000000[32], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 1, 0, 1, 5, 6, 0),
    gsSP2Triangles(1, 6, 2, 0, 2, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gGoldenGoddessAuraMaskTex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 96, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gGoldenGoddessAuraHTailTex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 14, G_TX_NOLOD),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&object_god_lgtVtx_000000[43], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSPEndDisplayList(),
};

u64 gGoldenGoddessAuraHTailTex[] = {
#include "assets/objects/object_god_lgt/golden_goddess_aura_tail.i8.inc.c"
};

u64 gGoldenGoddessAuraHeadTex[] = {
#include "assets/objects/object_god_lgt/golden_goddess_aura_head.i8.inc.c"
};

u64 gGoldenGoddessAuraMaskTex[] = {
#include "assets/objects/object_god_lgt/golden_goddess_aura_mask.i8.inc.c"
};

Vtx object_god_lgtVtx_001F30[] = {
#include "assets/objects/object_god_lgt/object_god_lgtVtx_001F30.vtx.inc"
};

Gfx gGoldenGoddessBodyDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x0BB8, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown10Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, 1, 1),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, 1, PRIMITIVE, ENVIRONMENT, COMBINED,
                       ENVIRONMENT, 0, 0, 0, 1),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_FOG),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0x80, 0x80, 255, 255, 170, 255),
    gsDPSetEnvColor(120, 110, 0, 255),
    gsSPVertex(object_god_lgtVtx_001F30, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_god_lgtVtx_001F30[3], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 7, 0, 5, 10, 3, 0),
    gsSP2Triangles(5, 3, 11, 0, 5, 11, 6, 0),
    gsSP2Triangles(8, 6, 12, 0, 6, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 15, 0),
    gsSP2Triangles(13, 17, 18, 0, 18, 17, 16, 0),
    gsSP2Triangles(14, 13, 19, 0, 13, 18, 20, 0),
    gsSP2Triangles(15, 21, 22, 0, 15, 22, 23, 0),
    gsSP2Triangles(16, 23, 24, 0, 21, 15, 25, 0),
    gsSP2Triangles(25, 15, 14, 0, 18, 16, 26, 0),
    gsSP2Triangles(16, 24, 26, 0, 27, 1, 8, 0),
    gsSP2Triangles(8, 1, 0, 0, 19, 13, 20, 0),
    gsSP2Triangles(28, 29, 20, 0, 14, 19, 29, 0),
    gsSP2Triangles(30, 31, 20, 0, 29, 19, 20, 0),
    gsSP1Triangle(30, 20, 18, 0),
    gsSPVertex(&object_god_lgtVtx_001F30[35], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 9, 8, 11, 0),
    gsSP2Triangles(11, 12, 13, 0, 10, 9, 14, 0),
    gsSP2Triangles(15, 16, 14, 0, 15, 14, 17, 0),
    gsSP2Triangles(13, 17, 9, 0, 13, 9, 11, 0),
    gsSP2Triangles(9, 17, 14, 0, 18, 19, 4, 0),
    gsSP2Triangles(18, 4, 3, 0, 3, 6, 1, 0),
    gsSP2Triangles(3, 1, 0, 0, 20, 21, 22, 0),
    gsSP2Triangles(16, 15, 23, 0, 1, 6, 24, 0),
    gsSP2Triangles(1, 24, 25, 0, 1, 25, 2, 0),
    gsSP2Triangles(26, 27, 21, 0, 26, 21, 28, 0),
    gsSP2Triangles(10, 14, 29, 0, 12, 11, 8, 0),
    gsSP2Triangles(29, 14, 16, 0, 21, 27, 22, 0),
    gsSP2Triangles(21, 30, 31, 0, 21, 31, 28, 0),
    gsSP1Triangle(21, 2, 30, 0),
    gsSPVertex(&object_god_lgtVtx_001F30[67], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 1, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 8, 9, 0),
    gsSP2Triangles(5, 9, 10, 0, 5, 10, 11, 0),
    gsSP2Triangles(5, 11, 6, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(16, 19, 17, 0, 19, 7, 6, 0),
    gsSP2Triangles(8, 20, 21, 0, 8, 21, 22, 0),
    gsSP2Triangles(7, 23, 24, 0, 7, 24, 20, 0),
    gsSP2Triangles(7, 20, 8, 0, 8, 22, 9, 0),
    gsSP2Triangles(23, 16, 25, 0, 23, 25, 24, 0),
    gsSP2Triangles(26, 25, 15, 0, 26, 15, 27, 0),
    gsSP2Triangles(27, 15, 22, 0, 18, 9, 15, 0),
    gsSP2Triangles(15, 25, 16, 0, 15, 9, 22, 0),
    gsSP2Triangles(18, 28, 10, 0, 18, 10, 9, 0),
    gsSP2Triangles(23, 7, 19, 0, 23, 19, 16, 0),
    gsSP2Triangles(14, 29, 30, 0, 14, 30, 12, 0),
    gsSP1Triangle(27, 22, 21, 0),
    gsSPVertex(&object_god_lgtVtx_001F30[98], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 2, 1, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 11, 13, 0),
    gsSP2Triangles(13, 11, 9, 0, 9, 11, 14, 0),
    gsSP2Triangles(9, 14, 2, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 18, 15, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(4, 24, 25, 0, 25, 24, 21, 0),
    gsSP2Triangles(24, 22, 21, 0, 21, 23, 26, 0),
    gsSP2Triangles(26, 25, 21, 0, 27, 1, 0, 0),
    gsSP2Triangles(27, 0, 26, 0, 26, 0, 25, 0),
    gsSP2Triangles(0, 4, 25, 0, 16, 15, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&object_god_lgtVtx_001F30[130], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 3, 1, 0),
    gsSP2Triangles(1, 10, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 13, 12, 15, 0),
    gsSP2Triangles(13, 15, 14, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 15, 12, 20, 0),
    gsSP2Triangles(15, 20, 21, 0, 14, 15, 22, 0),
    gsSP2Triangles(23, 0, 24, 0, 15, 21, 22, 0),
    gsSP2Triangles(12, 11, 25, 0, 25, 11, 26, 0),
    gsSP2Triangles(11, 14, 27, 0, 26, 11, 27, 0),
    gsSP2Triangles(25, 26, 28, 0, 28, 26, 27, 0),
    gsSP2Triangles(12, 29, 19, 0, 12, 19, 18, 0),
    gsSP2Triangles(24, 0, 14, 0, 25, 30, 29, 0),
    gsSP2Triangles(29, 30, 31, 0, 25, 29, 12, 0),
    gsSP2Triangles(27, 14, 0, 0, 2, 27, 0, 0),
    gsSPVertex(&object_god_lgtVtx_001F30[162], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 9, 12, 1, 0),
    gsSP2Triangles(10, 9, 13, 0, 13, 9, 14, 0),
    gsSP2Triangles(14, 9, 1, 0, 3, 2, 15, 0),
    gsSP2Triangles(16, 3, 17, 0, 17, 3, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 10, 0),
    gsSP2Triangles(1, 0, 23, 0, 1, 23, 14, 0),
    gsSP2Triangles(21, 10, 13, 0, 24, 25, 21, 0),
    gsSP2Triangles(21, 25, 26, 0, 24, 21, 13, 0),
    gsSP2Triangles(0, 3, 20, 0, 24, 13, 14, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsSPVertex(&object_god_lgtVtx_001F30[192], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 7, 6, 8, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 7, 8, 0),
    gsSP2Triangles(5, 7, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 5, 15, 0, 5, 14, 6, 0),
    gsSP2Triangles(16, 15, 17, 0, 5, 10, 18, 0),
    gsSP2Triangles(17, 15, 18, 0, 18, 15, 5, 0),
    gsSP2Triangles(19, 20, 21, 0, 21, 20, 22, 0),
    gsSP2Triangles(19, 21, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 28, 29, 30, 0),
    gsSPVertex(&object_god_lgtVtx_001F30[223], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(1, 0, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 4, 0, 5, 4, 6, 0),
    gsSP2Triangles(7, 6, 3, 0, 4, 0, 9, 0),
    gsSP2Triangles(6, 4, 10, 0, 8, 5, 11, 0),
    gsSP2Triangles(8, 11, 1, 0, 6, 10, 12, 0),
    gsSP2Triangles(3, 9, 0, 0, 13, 5, 7, 0),
    gsSP2Triangles(13, 14, 5, 0, 3, 15, 7, 0),
    gsSP2Triangles(1, 16, 2, 0, 17, 16, 1, 0),
    gsSP2Triangles(2, 18, 3, 0, 5, 14, 11, 0),
    gsSP2Triangles(19, 17, 11, 0, 19, 11, 14, 0),
    gsSP2Triangles(11, 17, 1, 0, 20, 21, 13, 0),
    gsSP2Triangles(22, 23, 13, 0, 22, 13, 21, 0),
    gsSP2Triangles(7, 15, 24, 0, 24, 15, 25, 0),
    gsSP2Triangles(7, 24, 13, 0, 24, 25, 13, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(28, 20, 25, 0, 25, 15, 29, 0),
    gsSP2Triangles(28, 25, 29, 0, 30, 31, 19, 0),
    gsSPVertex(&object_god_lgtVtx_001F30[255], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 3, 5, 7, 0),
    gsSP2Triangles(1, 8, 9, 0, 10, 1, 11, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 12, 0),
    gsSP2Triangles(15, 16, 5, 0, 6, 17, 5, 0),
    gsSP2Triangles(5, 17, 15, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 24, 25, 0, 24, 26, 27, 0),
    gsSP2Triangles(25, 24, 27, 0, 24, 23, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&object_god_lgtVtx_001F30[287], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 7, 0, 3, 6, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 0, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(14, 13, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 17, 26, 0, 27, 28, 20, 0),
    gsSP2Triangles(27, 20, 19, 0, 29, 30, 24, 0),
    gsSPVertex(&object_god_lgtVtx_001F30[318], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 2, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(4, 8, 5, 0, 4, 5, 9, 0),
    gsSP2Triangles(5, 7, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 24, 3, 25, 0),
    gsSP2Triangles(26, 22, 27, 0, 24, 25, 26, 0),
    gsSP2Triangles(26, 25, 22, 0, 25, 3, 1, 0),
    gsSP2Triangles(25, 1, 28, 0, 22, 21, 29, 0),
    gsSP1Triangle(17, 19, 30, 0),
    gsSPVertex(&object_god_lgtVtx_001F30[349], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 2, 7, 5, 0),
    gsSP2Triangles(0, 2, 4, 0, 4, 2, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 13, 8, 0, 14, 15, 16, 0),
    gsSP2Triangles(16, 15, 17, 0, 18, 16, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 22, 23, 20, 0),
    gsSP2Triangles(16, 17, 19, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 16, 26, 0, 28, 29, 30, 0),
    gsSPVertex(&object_god_lgtVtx_001F30[380], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 6, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 5, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 13, 0),
    gsSP2Triangles(13, 15, 16, 0, 18, 19, 20, 0),
    gsSP2Triangles(14, 21, 20, 0, 17, 12, 22, 0),
    gsSP2Triangles(22, 13, 17, 0, 23, 21, 13, 0),
    gsSP2Triangles(13, 21, 14, 0, 19, 14, 20, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 27, 26, 0),
    gsSP2Triangles(28, 29, 24, 0, 26, 28, 24, 0),
    gsSPVertex(&object_god_lgtVtx_001F30[410], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 5, 7, 3, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(11, 12, 10, 0, 10, 13, 8, 0),
    gsSP2Triangles(2, 14, 15, 0, 12, 16, 17, 0),
    gsSP2Triangles(17, 18, 12, 0, 19, 12, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 15, 20, 22, 0),
    gsSP2Triangles(21, 23, 22, 0, 23, 24, 22, 0),
    gsSP2Triangles(21, 17, 16, 0, 21, 16, 23, 0),
    gsSP2Triangles(18, 0, 2, 0, 2, 19, 18, 0),
    gsSP2Triangles(2, 15, 19, 0, 8, 13, 22, 0),
    gsSP2Triangles(22, 24, 8, 0, 20, 25, 21, 0),
    gsSP2Triangles(25, 17, 21, 0, 20, 15, 14, 0),
    gsSP2Triangles(26, 20, 14, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&object_god_lgtVtx_001F30[441], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 2, 0, 3, 5, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 12, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 19, 0, 20, 21, 22, 0),
    gsSP1Triangle(23, 1, 24, 0),
    gsSPEndDisplayList(),
};

