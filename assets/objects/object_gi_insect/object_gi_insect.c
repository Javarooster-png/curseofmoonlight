#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_insect.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

Vtx object_gi_insectVtx_000000[] = {
#include "assets/objects/object_gi_insect/object_gi_insectVtx_000000.vtx.inc"
};

Gfx gGiBugsContainerDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, 1),
    gsDPSetPrimColor(0, 0, 160, 190, 90, 255),
    gsDPSetEnvColor(100, 50, 0, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x07D0, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown10Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_FOG),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_gi_insectVtx_000000, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_insectVtx_000000[3], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 8, 4, 0),
    gsSP2Triangles(8, 5, 9, 0, 10, 7, 11, 0),
    gsSP2Triangles(2, 4, 0, 0, 4, 9, 3, 0),
    gsSP2Triangles(7, 12, 5, 0, 4, 2, 6, 0),
    gsSP1Triangle(9, 4, 8, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 0, 150, 100, 255),
    gsDPSetEnvColor(100, 160, 0, 255),
    gsSPVertex(&object_gi_insectVtx_000000[16], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(9, 8, 10, 0, 11, 2, 1, 0),
    gsSP2Triangles(12, 1, 0, 0, 5, 7, 9, 0),
    gsSP2Triangles(10, 6, 0, 0, 6, 4, 0, 0),
    gsSP2Triangles(10, 8, 6, 0, 4, 5, 3, 0),
    gsSP2Triangles(6, 7, 5, 0, 8, 9, 7, 0),
    gsSP2Triangles(10, 13, 9, 0, 1, 12, 11, 0),
    gsSP2Triangles(0, 3, 12, 0, 9, 14, 5, 0),
    gsSP2Triangles(12, 3, 5, 0, 9, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 15, 19, 0),
    gsSP2Triangles(20, 19, 21, 0, 22, 21, 23, 0),
    gsSP2Triangles(24, 23, 25, 0, 26, 17, 16, 0),
    gsSP2Triangles(27, 16, 15, 0, 20, 22, 24, 0),
    gsSP2Triangles(25, 21, 15, 0, 21, 19, 15, 0),
    gsSP2Triangles(25, 23, 21, 0, 19, 20, 18, 0),
    gsSP2Triangles(21, 22, 20, 0, 23, 24, 22, 0),
    gsSP2Triangles(25, 28, 24, 0, 16, 27, 26, 0),
    gsSP2Triangles(15, 18, 27, 0, 24, 29, 20, 0),
    gsSP2Triangles(27, 18, 20, 0, 24, 28, 29, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 100, 255, 255, 255),
    gsDPSetEnvColor(50, 0, 100, 255),
    gsSPTexture(0x0BB8, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(&object_gi_insectVtx_000000[46], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(4, 1, 5, 0, 6, 7, 0, 0),
    gsSP2Triangles(6, 0, 2, 0, 8, 3, 9, 0),
    gsSP2Triangles(1, 4, 2, 0, 9, 3, 4, 0),
    gsSP1Triangle(3, 6, 2, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 0, 188, 188, 255),
    gsSPVertex(&object_gi_insectVtx_000000[56], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(2, 5, 0, 0, 2, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 2, 1, 3, 0),
    gsSP1Triangle(4, 3, 6, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 243, 191, 113, 255),
    gsSPVertex(&object_gi_insectVtx_000000[63], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(5, 2, 1, 0, 2, 5, 6, 0),
    gsSP2Triangles(1, 4, 5, 0, 5, 7, 6, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 150, 255),
    gsDPSetEnvColor(50, 0, 0, 255),
    gsSPVertex(&object_gi_insectVtx_000000[71], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 5, 0, 0),
    gsSP2Triangles(1, 0, 4, 0, 7, 4, 5, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 18, 17, 0),
    gsSP2Triangles(14, 13, 12, 0, 18, 14, 16, 0),
    gsSP2Triangles(18, 13, 20, 0, 21, 18, 20, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 22, 30, 29, 0),
    gsSP2Triangles(27, 22, 25, 0, 30, 27, 26, 0),
    gsSP2Triangles(30, 22, 31, 0, 27, 30, 31, 0),
    gsSPVertex(&object_gi_insectVtx_000000[103], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 4, 5, 2, 0),
    gsSP2Triangles(4, 2, 8, 0, 7, 1, 5, 0),
    gsSP2Triangles(9, 2, 5, 0, 9, 5, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gGiBugsGlassDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0,
                       0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 220),
    gsDPSetEnvColor(110, 150, 170, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x0A8C, 0x0A8C, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown10Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, 1, 1),
    gsSPClearGeometryMode(G_FOG),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_insectVtx_000000[113], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&object_gi_insectVtx_000000[117], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSPEndDisplayList(),
};
