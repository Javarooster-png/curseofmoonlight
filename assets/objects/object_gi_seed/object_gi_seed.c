#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_seed.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

Vtx object_gi_seedVtx_000000[] = {
#include "assets/objects/object_gi_seed/object_gi_seedVtx_000000.vtx.inc"
};

Gfx gGiSeedDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, 1, PRIMITIVE, ENVIRONMENT, COMBINED,
                       ENVIRONMENT, 0, 0, 0, 1),
    gsDPSetPrimColor(0, 0x80, 255, 255, 170, 255),
    gsDPSetEnvColor(120, 110, 0, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown10Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, 1, 1),
    gsSPClearGeometryMode(G_FOG),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_gi_seedVtx_000000, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_seedVtx_000000[3], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 0, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 7, 2, 0),
    gsSP2Triangles(13, 2, 1, 0, 10, 5, 4, 0),
    gsSP2Triangles(14, 4, 6, 0, 7, 15, 8, 0),
    gsSP2Triangles(11, 14, 16, 0, 17, 18, 12, 0),
    gsSP2Triangles(10, 9, 13, 0, 14, 11, 10, 0),
    gsSP2Triangles(19, 16, 14, 0, 16, 19, 20, 0),
    gsSP2Triangles(21, 15, 12, 0, 21, 18, 22, 0),
    gsSP2Triangles(23, 9, 22, 0, 9, 11, 22, 0),
    gsSP2Triangles(11, 16, 22, 0, 16, 21, 22, 0),
    gsSP2Triangles(15, 21, 16, 0, 2, 17, 12, 0),
    gsSP2Triangles(1, 10, 13, 0, 4, 14, 10, 0),
    gsSP2Triangles(6, 19, 14, 0, 19, 6, 20, 0),
    gsSP2Triangles(7, 12, 15, 0, 21, 12, 18, 0),
    gsSP2Triangles(23, 13, 9, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 27, 25, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 31, 29, 0),
    gsSPVertex(&object_gi_seedVtx_000000[35], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 8, 10, 0),
    gsSP2Triangles(4, 10, 11, 0, 12, 13, 2, 0),
    gsSP2Triangles(1, 14, 2, 0, 5, 12, 15, 0),
    gsSP2Triangles(16, 17, 6, 0, 4, 3, 9, 0),
    gsSP2Triangles(18, 5, 4, 0, 19, 15, 12, 0),
    gsSP2Triangles(15, 19, 14, 0, 20, 14, 6, 0),
    gsSP2Triangles(20, 17, 21, 0, 22, 3, 21, 0),
    gsSP2Triangles(3, 5, 21, 0, 5, 15, 21, 0),
    gsSP2Triangles(15, 20, 21, 0, 14, 20, 15, 0),
    gsSP2Triangles(8, 16, 6, 0, 10, 4, 9, 0),
    gsSP2Triangles(11, 18, 4, 0, 2, 19, 12, 0),
    gsSP2Triangles(19, 2, 14, 0, 7, 6, 14, 0),
    gsSP2Triangles(20, 6, 17, 0, 22, 9, 3, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 26, 24, 0),
    gsSP2Triangles(23, 27, 26, 0, 23, 28, 27, 0),
    gsSP2Triangles(23, 25, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&object_gi_seedVtx_000000[67], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(1, 10, 11, 0, 12, 7, 13, 0),
    gsSP2Triangles(14, 15, 0, 0, 16, 17, 3, 0),
    gsSP2Triangles(7, 12, 16, 0, 18, 13, 7, 0),
    gsSP2Triangles(19, 20, 10, 0, 21, 10, 0, 0),
    gsSP2Triangles(21, 15, 22, 0, 23, 17, 22, 0),
    gsSP2Triangles(17, 12, 22, 0, 12, 13, 22, 0),
    gsSP2Triangles(13, 21, 22, 0, 10, 21, 19, 0),
    gsSP2Triangles(2, 14, 0, 0, 4, 5, 3, 0),
    gsSP2Triangles(8, 7, 16, 0, 9, 18, 7, 0),
    gsSP2Triangles(20, 11, 10, 0, 1, 0, 10, 0),
    gsSP2Triangles(21, 0, 15, 0, 23, 3, 17, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, 1),
    gsDPSetPrimColor(0, 0, 120, 90, 0, 255),
    gsDPSetEnvColor(30, 0, 0, 255),
    gsSPVertex(&object_gi_seedVtx_000000[91], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(8, 2, 9, 0, 10, 7, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 13, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 17, 21, 0),
    gsSP2Triangles(12, 14, 22, 0, 23, 20, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 31, 28, 30, 0),
    gsSPVertex(&object_gi_seedVtx_000000[123], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};
