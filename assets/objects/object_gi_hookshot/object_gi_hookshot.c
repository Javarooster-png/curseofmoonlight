#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_hookshot.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

Vtx object_gi_hookshotVtx_000000[] = {
#include "assets/objects/object_gi_hookshot/object_gi_hookshotVtx_000000.vtx.inc"
};

Gfx gGiHookshotDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, PRIM_LOD_FRAC, 1, COMBINED, 0, SHADE, 0, 1, 1,
                       PRIM_LOD_FRAC, 1),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(50, 60, 80, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown10Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsSPClearGeometryMode(G_FOG),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_gi_hookshotVtx_000000, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_hookshotVtx_000000[3], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP1Triangle(18, 19, 20, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 10, 60, 160, 255),
    gsDPSetEnvColor(0, 10, 40, 255),
    gsSPTexture(0x0BB8, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(&object_gi_hookshotVtx_000000[24], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 5, 0, 0, 5, 4, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 11, 8, 0),
    gsSP2Triangles(12, 13, 11, 0, 14, 9, 15, 0),
    gsSP2Triangles(16, 9, 8, 0, 17, 8, 11, 0),
    gsSP2Triangles(18, 11, 13, 0, 19, 15, 9, 0),
    gsSP2Triangles(1, 0, 20, 0, 1, 21, 3, 0),
    gsSP2Triangles(20, 0, 5, 0, 6, 22, 5, 0),
    gsSP2Triangles(8, 17, 16, 0, 11, 18, 17, 0),
    gsSP2Triangles(13, 23, 18, 0, 9, 16, 19, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 50, 120, 210, 255),
    gsDPSetEnvColor(10, 50, 130, 255),
    gsSPVertex(&object_gi_hookshotVtx_000000[48], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 1, 5, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(1, 0, 21, 0, 21, 0, 3, 0),
    gsSP2Triangles(22, 6, 5, 0, 23, 5, 1, 0),
    gsSP2Triangles(2, 4, 0, 0, 4, 24, 3, 0),
    gsSP2Triangles(7, 8, 5, 0, 8, 2, 1, 0),
    gsSP2Triangles(11, 25, 9, 0, 14, 26, 12, 0),
    gsSP2Triangles(17, 27, 15, 0, 20, 28, 18, 0),
    gsSP2Triangles(21, 29, 1, 0, 3, 30, 21, 0),
    gsSP2Triangles(5, 23, 22, 0, 1, 29, 23, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 220, 240, 255, 255),
    gsDPSetEnvColor(80, 90, 110, 255),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(&object_gi_hookshotVtx_000000[79], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 1, 5, 8, 0),
    gsSP2Triangles(2, 4, 0, 0, 4, 9, 3, 0),
    gsSP2Triangles(7, 8, 5, 0, 8, 2, 1, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 200, 200, 180, 255),
    gsDPSetEnvColor(50, 50, 30, 255),
    gsSPTexture(0x0BB8, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(&object_gi_hookshotVtx_000000[89], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 1, 0, 7, 5, 0, 0),
    gsSP2Triangles(3, 2, 6, 0, 5, 7, 3, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 11, 12, 0),
    gsSP2Triangles(9, 13, 14, 0, 10, 14, 15, 0),
    gsSP2Triangles(13, 8, 12, 0, 12, 15, 14, 0),
    gsSP2Triangles(2, 3, 0, 0, 1, 0, 5, 0),
    gsSP2Triangles(0, 4, 7, 0, 6, 5, 3, 0),
    gsSP2Triangles(10, 12, 8, 0, 14, 10, 9, 0),
    gsSP2Triangles(15, 11, 10, 0, 12, 14, 13, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 130, 90, 0, 255),
    gsDPSetEnvColor(50, 20, 0, 255),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown10Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_hookshotVtx_000000[105], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 2, 9, 0, 0),
    gsSP2Triangles(5, 10, 3, 0, 8, 11, 6, 0),
    gsSPEndDisplayList(),
};

u8 object_gi_hookshot_possiblePadding_000A48[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx object_gi_hookshotVtx_000A50[] = {
#include "assets/objects/object_gi_hookshot/object_gi_hookshotVtx_000A50.vtx.inc"
};

Gfx gGiLongshotDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, PRIM_LOD_FRAC, 1, COMBINED, 0, SHADE, 0, 1, 1,
                       PRIM_LOD_FRAC, 1),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(50, 60, 80, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown10Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsSPClearGeometryMode(G_FOG),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_gi_hookshotVtx_000A50, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_hookshotVtx_000A50[3], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP1Triangle(18, 19, 20, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 70, 50, 70, 255),
    gsDPSetEnvColor(20, 10, 20, 255),
    gsSPTexture(0x0BB8, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(&object_gi_hookshotVtx_000A50[24], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 1, 0, 7, 2, 8, 0),
    gsSP2Triangles(9, 0, 7, 0, 9, 6, 0, 0),
    gsSP2Triangles(9, 10, 6, 0, 9, 7, 10, 0),
    gsSP2Triangles(2, 7, 0, 0, 1, 0, 6, 0),
    gsSP2Triangles(5, 6, 3, 0, 8, 10, 7, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(15, 16, 11, 0, 16, 15, 17, 0),
    gsSP2Triangles(12, 11, 18, 0, 12, 19, 14, 0),
    gsSP2Triangles(18, 11, 16, 0, 17, 20, 16, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 100, 110, 180, 255),
    gsDPSetEnvColor(40, 30, 80, 255),
    gsSPVertex(&object_gi_hookshotVtx_000A50[45], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 3, 6, 0, 7, 5, 8, 0),
    gsSP2Triangles(4, 6, 3, 0, 2, 4, 0, 0),
    gsSP2Triangles(9, 2, 1, 0, 6, 8, 5, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 10, 14, 0),
    gsSP2Triangles(15, 13, 16, 0, 17, 15, 18, 0),
    gsSP2Triangles(14, 16, 13, 0, 12, 14, 10, 0),
    gsSP2Triangles(18, 19, 17, 0, 16, 18, 15, 0),
    gsSP2Triangles(18, 20, 21, 0, 16, 22, 20, 0),
    gsSP2Triangles(14, 23, 22, 0, 12, 24, 23, 0),
    gsSP2Triangles(21, 19, 18, 0, 20, 18, 16, 0),
    gsSP2Triangles(22, 16, 14, 0, 23, 14, 12, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 220, 240, 255, 255),
    gsDPSetEnvColor(80, 90, 110, 255),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(&object_gi_hookshotVtx_000A50[70], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 1, 5, 8, 0),
    gsSP2Triangles(2, 4, 0, 0, 4, 9, 3, 0),
    gsSP2Triangles(7, 8, 5, 0, 8, 2, 1, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 10, 14, 0),
    gsSP2Triangles(15, 13, 16, 0, 11, 17, 18, 0),
    gsSP2Triangles(12, 14, 10, 0, 14, 16, 13, 0),
    gsSP2Triangles(19, 18, 17, 0, 18, 12, 11, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 200, 200, 180, 255),
    gsDPSetEnvColor(50, 50, 30, 255),
    gsSPTexture(0x0BB8, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(&object_gi_hookshotVtx_000A50[90], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 1, 0, 7, 5, 8, 0),
    gsSP2Triangles(3, 9, 6, 0, 5, 10, 3, 0),
    gsSP2Triangles(11, 12, 13, 0, 13, 14, 15, 0),
    gsSP2Triangles(12, 16, 17, 0, 13, 17, 18, 0),
    gsSP2Triangles(16, 19, 15, 0, 15, 20, 17, 0),
    gsSP2Triangles(2, 21, 0, 0, 1, 0, 5, 0),
    gsSP2Triangles(8, 22, 7, 0, 6, 5, 3, 0),
    gsSP2Triangles(13, 23, 11, 0, 17, 13, 12, 0),
    gsSP2Triangles(18, 24, 13, 0, 15, 17, 16, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 110, 70, 0, 255),
    gsDPSetEnvColor(30, 0, 0, 255),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown10Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_hookshotVtx_000A50[115], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 2, 9, 0, 0),
    gsSP2Triangles(5, 10, 3, 0, 8, 11, 6, 0),
    gsSPEndDisplayList(),
};

