#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_saw.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

Vtx object_gi_sawVtx_000000[] = {
#include "assets/objects/object_gi_saw/object_gi_sawVtx_000000.vtx.inc"
};

Gfx gGiSawDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 1, 1, PRIM_LOD_FRAC, 1, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, 1, 1, PRIM_LOD_FRAC, 1),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetEnvColor(130, 140, 150, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x1770, 0x1770, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown10Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_FOG),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_gi_sawVtx_000000, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_sawVtx_000000[3], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 2, 1, 0, 5, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 0, 0),
    gsSP2Triangles(1, 5, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(9, 10, 8, 0, 9, 8, 6, 0),
    gsSP2Triangles(7, 8, 10, 0, 11, 10, 9, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 9, 0),
    gsSP2Triangles(10, 11, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(15, 16, 14, 0, 15, 14, 12, 0),
    gsSP2Triangles(13, 17, 16, 0, 18, 16, 15, 0),
    gsSP2Triangles(19, 20, 18, 0, 19, 18, 15, 0),
    gsSP2Triangles(16, 21, 20, 0, 22, 20, 19, 0),
    gsSP2Triangles(23, 24, 22, 0, 23, 25, 19, 0),
    gsSP2Triangles(20, 22, 24, 0, 26, 27, 28, 0),
    gsSP2Triangles(28, 29, 30, 0, 26, 28, 30, 0),
    gsSP1Triangle(29, 31, 27, 0),
    gsSPVertex(&object_gi_sawVtx_000000[35], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(0, 2, 4, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 3, 5, 0, 5, 6, 7, 0),
    gsSP2Triangles(4, 5, 7, 0, 6, 5, 3, 0),
    gsSP2Triangles(7, 6, 8, 0, 8, 9, 10, 0),
    gsSP2Triangles(7, 8, 10, 0, 9, 8, 6, 0),
    gsSP2Triangles(10, 9, 11, 0, 11, 12, 13, 0),
    gsSP2Triangles(10, 11, 13, 0, 12, 11, 9, 0),
    gsSP2Triangles(13, 12, 14, 0, 14, 15, 16, 0),
    gsSP2Triangles(13, 14, 16, 0, 15, 17, 12, 0),
    gsSP2Triangles(16, 15, 18, 0, 18, 19, 20, 0),
    gsSP2Triangles(16, 18, 20, 0, 19, 18, 15, 0),
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, PRIM_LOD_FRAC, 1, PRIMITIVE, ENVIRONMENT,
                       TEXEL0, ENVIRONMENT, 1, 1, PRIM_LOD_FRAC, 1),
    gsDPSetPrimColor(0, 0, 150, 160, 170, 255),
    gsDPSetEnvColor(40, 50, 60, 255),
    gsSPTexture(0x0BB8, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(&object_gi_sawVtx_000000[56], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 1, 3, 0, 3, 5, 4, 0),
    gsSP2Triangles(6, 5, 3, 0, 7, 0, 2, 0),
    gsSP2Triangles(8, 7, 2, 0, 9, 6, 7, 0),
    gsSP2Triangles(8, 9, 7, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 12, 11, 0, 13, 11, 14, 0),
    gsSP2Triangles(14, 15, 13, 0, 13, 15, 16, 0),
    gsSP2Triangles(10, 12, 17, 0, 10, 17, 18, 0),
    gsSP2Triangles(17, 16, 19, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(1, 11, 10, 0, 22, 26, 20, 0),
    gsSP2Triangles(25, 27, 23, 0, 28, 2, 1, 0),
    gsSP2Triangles(26, 22, 14, 0, 22, 15, 14, 0),
    gsSP2Triangles(5, 21, 4, 0, 21, 20, 4, 0),
    gsSP2Triangles(19, 29, 18, 0, 29, 30, 18, 0),
    gsSP2Triangles(24, 23, 8, 0, 23, 9, 8, 0),
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_2CYCLE),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 1, 1, PRIM_LOD_FRAC, 1, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, 1, 1, PRIM_LOD_FRAC, 1),
    gsDPSetPrimColor(0, 0x80, 255, 255, 170, 255),
    gsDPSetEnvColor(150, 120, 0, 255),
    gsSPVertex(&object_gi_sawVtx_000000[87], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 4, 0, 0, 1, 0, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
    gsSP2Triangles(7, 9, 8, 0, 9, 7, 6, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, PRIM_LOD_FRAC, 1, COMBINED, 0, SHADE, 0, 1, 1,
                       PRIM_LOD_FRAC, 1),
    gsDPSetPrimColor(0, 0, 200, 150, 0, 255),
    gsDPSetEnvColor(110, 70, 0, 255),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown12Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_sawVtx_000000[97], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 0, 9, 8, 0),
    gsSP2Triangles(8, 7, 0, 0, 0, 2, 9, 0),
    gsSP2Triangles(10, 11, 5, 0, 10, 12, 11, 0),
    gsSP2Triangles(3, 5, 11, 0, 12, 13, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(14, 18, 1, 0, 1, 17, 14, 0),
    gsSP2Triangles(18, 2, 1, 0, 14, 13, 18, 0),
    gsSP2Triangles(13, 12, 18, 0, 13, 14, 16, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 130, 80, 0, 255),
    gsDPSetEnvColor(40, 10, 0, 255),
    gsSPVertex(&object_gi_sawVtx_000000[116], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 1, 0, 0, 6, 0, 2, 0),
    gsSP2Triangles(7, 8, 4, 0, 4, 2, 1, 0),
    gsSP2Triangles(1, 5, 3, 0, 0, 6, 5, 0),
    gsSP2Triangles(2, 9, 6, 0, 4, 3, 7, 0),
    gsSPEndDisplayList(),
};
