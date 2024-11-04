#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_ybb.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

s16 object_ybb_Anim_000200FrameData[] = {
    0x0000, 0x0E10, 0x0064, 0x4000, 0x8000, 0x0000, 0xFFDC, 0xFF9A, 0xFF76, 0xFF76, 0x0E10, 0x0DFE, 0x0DDE, 0x0DCC, 
    0x0DCC, 0x0064, 0x007E, 0x00AD, 0x00C7, 0x00C7, 0xC000, 0xBFCA, 0xBF67, 0xBF32, 0xBF32, 0x047B, 0x047A, 0x0471, 
    0x0469, 0x0469, 0xC000, 0xBE16, 0xBA89, 0xB89F, 0xB89F, 0x0000, 0x040B, 0x0BA8, 0x0FDB, 0x0FDB, 0x0000, 0xFD61, 
    0xF87B, 0xF5D3, 0xF5D3, 0xFB85, 0xFBB9, 0xFCB5, 0xFD3D, 0xFD3D, 0x003B, 0x009C, 0x003B, 0x0000, 0x0000, 0x0000, 
    0xFF5E, 0xFE30, 0xFD8E, 0xFD8E, 0xC000, 0xBF5E, 0xBE30, 0xBD8E, 0xBD8E, 0x0000, 0xFA56, 0xF023, 0xE9AB, 0xE9AB, 
    0x0000, 0xFACD, 0xEFD0, 0xE9FC, 0xE9FC, 0xFB85, 0xF4EA, 0xF2EC, 0xF391, 0xF391, 0x003B, 0x0C5B, 0x1175, 0x11AF, 
    0x11AF, 0x0000, 0xFDE3, 0xF9F7, 0xF7DA, 0xF7DA, 0xC000, 0xBF0D, 0xBD49, 0xBC55, 0xBC55, 0x4000, 0x410E, 0x4305, 
    0x4413, 0x4413, 0x0000, 0xFED7, 0xFCAE, 0xFB85, 0xFB85, 0x0000, 0xF6B4, 0xE571, 0xDC25, 0xDC25, 0x4000, 0x41E7, 
    0x456F, 0x4755, 0x4755, 0x8000, 0x782F, 0x69AB, 0x61DA, 0x61DA, 0x4000, 0x0000, 0x0000, 0x01A1, 0xDAEC, 0xC000, 
    0xF555, 0xF772, 0xEAD0, 0xE169, 0x4000, 0x8000, 0x8000, 0x9AE4, 0x72F6, 0xFDDE, 0xF00E, 0xD667, 0xC897, 0xC897, 
    0x0000, 0xFB24, 0xF21E, 0xED42, 0xED42, 0x0000, 0x03E9, 0x0B2B, 0x0F13, 0x0F13, 0xC000, 0xC57E, 0xCFB2, 0xD530, 
    0xD530, 0x4000, 0x0000, 0x0000, 0xF568, 0x0B69, 0x4000, 0x0AAB, 0x095F, 0x0D0A, 0x285E, 0xC000, 0x8000, 0x8000, 
    0x92BE, 0x728E, 0xFDDE, 0xF6B5, 0xE96A, 0xE242, 0xE242, 0x0000, 0x0160, 0x03EC, 0x054C, 0x054C, 0x0000, 0xF89B, 
    0xEAE0, 0xE37B, 0xE37B, 0xC000, 0xC144, 0xC39F, 0xC4E4, 0xC4E4, 
};

JointIndex object_ybb_Anim_000200JointIndices[] = {
    { 0x0005, 0x000A, 0x000F },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0014, 0x0019, 0x001E },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0023, 0x0028, 0x002D },
    { 0x0000, 0x0000, 0x0032 },
    { 0x0037, 0x0000, 0x003C },
    { 0x0041, 0x0046, 0x004B },
    { 0x0000, 0x0000, 0x0050 },
    { 0x0055, 0x0000, 0x005A },
    { 0x0003, 0x0000, 0x005F },
    { 0x0064, 0x0069, 0x006E },
    { 0x0000, 0x0000, 0x0073 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0078, 0x007D, 0x0082 },
    { 0x0000, 0x0000, 0x0087 },
    { 0x008C, 0x0091, 0x0096 },
    { 0x009B, 0x00A0, 0x00A5 },
    { 0x0000, 0x0000, 0x00AA },
    { 0x00AF, 0x00B4, 0x00B9 },
    { 0x0003, 0x0000, 0x0004 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader object_ybb_Anim_000200 = { 
    { 5 }, object_ybb_Anim_000200FrameData,
    object_ybb_Anim_000200JointIndices, 5
};

Vtx object_ybbVtx_000210[] = {
#include "assets/objects/object_ybb/object_ybbVtx_000210.vtx.inc"
};

u8 object_ybb_unaccounted_002080[] = {
    0x00, 0x43, 0x00, 0xAC, 0xFF, 0xB6, 0x00, 0x00, 0xFC, 0xAA, 0x01, 0xF8, 0x1A, 0x74, 0xF2, 0xFF, 
    0x00, 0x43, 0x00, 0xBE, 0x00, 0x4A, 0x00, 0x00, 0xFC, 0xB6, 0x01, 0xF7, 0x1A, 0x74, 0xF2, 0xFF, 
    0x00, 0xB0, 0x00, 0x9C, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xA0, 0x02, 0x3E, 0x1A, 0x74, 0xF2, 0xFF, 
};

Vtx object_ybbVtx_0020B0[] = {
#include "assets/objects/object_ybb/object_ybbVtx_0020B0.vtx.inc"
};

u8 object_ybb_unaccounted_002D50[] = {
    0x00, 0x24, 0xFF, 0xB6, 0xFF, 0xFF, 0x00, 0x00, 0xFE, 0x0C, 0x05, 0xA9, 0xE6, 0xF2, 0x74, 0xFF, 
    0x00, 0x25, 0x00, 0x4A, 0x00, 0x11, 0x00, 0x00, 0xFE, 0x43, 0x05, 0xAA, 0xE6, 0xF2, 0x74, 0xFF, 
    0xFF, 0xB7, 0x00, 0x00, 0xFF, 0xEF, 0x00, 0x00, 0xFE, 0x2F, 0x05, 0x72, 0xE6, 0xF2, 0x74, 0xFF, 
};

Vtx object_ybbVtx_002D80[] = {
#include "assets/objects/object_ybb/object_ybbVtx_002D80.vtx.inc"
};

Gfx gYbbPantsAndBellyButtonDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetPrimColor(0, 0xFF, 205, 130, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    //gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gYbbPantsTex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ybbVtx_000210[231], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 7, 6, 3, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 0, 13, 0, 14, 15, 12, 0),
    gsSP2Triangles(16, 15, 14, 0, 12, 13, 14, 0),
    gsSP2Triangles(17, 18, 7, 0, 19, 10, 20, 0),
    gsSP2Triangles(19, 11, 10, 0, 7, 3, 17, 0),
    gsSP2Triangles(21, 22, 23, 0, 18, 24, 7, 0),
    gsSP2Triangles(13, 23, 14, 0, 24, 6, 7, 0),
    gsSP2Triangles(6, 24, 25, 0, 26, 25, 24, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbForeheadBlotchTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ybbVtx_000210[258], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 1, 10, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbBellybuttonTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_ybbVtx_000210[269], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gYbbRightThighDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ybbVtx_000210[76], 11, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetPrimColor(0, 0xFF, 205, 130, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    //gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gYbbPantsTex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_ybbVtx_000210[87], 8, 11),
    gsSP2Triangles(0, 2, 11, 0, 12, 2, 6, 0),
    gsSP2Triangles(13, 7, 3, 0, 3, 14, 15, 0),
    gsSP2Triangles(16, 3, 1, 0, 1, 9, 17, 0),
    gsSP1Triangle(18, 4, 0, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbForeheadBlotchTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ybbVtx_000210[95], 11, 11),
    gsSP2Triangles(10, 11, 12, 0, 13, 5, 14, 0),
    gsSP2Triangles(15, 8, 16, 0, 17, 18, 10, 0),
    gsSP2Triangles(19, 10, 5, 0, 8, 20, 21, 0),
    gsSPVertex(&object_ybbVtx_000210[106], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 0, 6, 4, 0),
    gsSP2Triangles(7, 3, 8, 0, 8, 5, 2, 0),
    gsSP2Triangles(2, 1, 8, 0, 5, 8, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gYbbRightShinDL[] = {
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ybbVtx_000210[46], 4, 0),
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    //gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbForeheadBlotchTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ybbVtx_000210[50], 12, 4),
    gsSP2Triangles(4, 0, 1, 0, 2, 5, 6, 0),
    gsSP2Triangles(7, 8, 1, 0, 1, 3, 9, 0),
    gsSP2Triangles(10, 3, 2, 0, 1, 11, 12, 0),
    gsSP2Triangles(13, 2, 0, 0, 14, 2, 15, 0),
    gsSPVertex(&object_ybbVtx_000210[62], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(3, 4, 1, 0, 2, 5, 6, 0),
    gsSP2Triangles(3, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 10, 6, 3, 0),
    gsSP2Triangles(3, 11, 10, 0, 10, 9, 2, 0),
    gsSP2Triangles(11, 3, 0, 0, 0, 12, 11, 0),
    gsSP2Triangles(5, 4, 3, 0, 6, 10, 2, 0),
    gsSP2Triangles(2, 13, 5, 0, 1, 13, 2, 0),
    gsSP2Triangles(8, 0, 2, 0, 2, 9, 8, 0),
    gsSP2Triangles(11, 12, 7, 0, 9, 10, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gYbbRightFoodDL[] = {
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_ybbVtx_000210, 4, 0),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    //gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbForeheadBlotchTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ybbVtx_000210[4], 12, 4),
    gsSP2Triangles(4, 5, 0, 0, 6, 1, 0, 0),
    gsSP2Triangles(7, 8, 2, 0, 9, 3, 2, 0),
    gsSP2Triangles(0, 3, 10, 0, 0, 11, 12, 0),
    gsSP2Triangles(2, 13, 14, 0, 2, 1, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbToesTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_ybbVtx_000210[16], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbFingersTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_ybbVtx_000210[23], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 12, 10, 7, 0),
    gsSP2Triangles(11, 13, 14, 0, 14, 13, 12, 0),
    gsSP2Triangles(3, 15, 4, 0, 16, 2, 1, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbForeheadBlotchTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_ybbVtx_000210[40], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(1, 5, 2, 0, 2, 5, 3, 0),
    gsSP1Triangle(1, 3, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gYbbLeftThighDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ybbVtx_000210[191], 12, 0),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetPrimColor(0, 0xFF, 205, 130, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gYbbPantsTex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_ybbVtx_000210[203], 8, 12),
    gsSP2Triangles(12, 0, 2, 0, 3, 0, 13, 0),
    gsSP2Triangles(1, 4, 14, 0, 15, 16, 1, 0),
    gsSP2Triangles(10, 1, 17, 0, 18, 6, 11, 0),
    gsSP1Triangle(2, 8, 19, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbForeheadBlotchTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ybbVtx_000210[211], 11, 12),
    gsSP2Triangles(12, 13, 7, 0, 14, 9, 15, 0),
    gsSP2Triangles(16, 5, 17, 0, 7, 18, 19, 0),
    gsSP2Triangles(9, 7, 20, 0, 21, 22, 5, 0),
    gsSPVertex(&object_ybbVtx_000210[222], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 4, 6, 2, 0),
    gsSP2Triangles(7, 5, 8, 0, 0, 3, 7, 0),
    gsSP2Triangles(7, 1, 0, 0, 5, 7, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gYbbLeftShinDL[] = {
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ybbVtx_000210[161], 4, 0),
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    //gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbForeheadBlotchTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ybbVtx_000210[165], 12, 4),
    gsSP2Triangles(0, 1, 4, 0, 5, 6, 2, 0),
    gsSP2Triangles(0, 7, 8, 0, 9, 3, 0, 0),
    gsSP2Triangles(2, 3, 10, 0, 11, 12, 0, 0),
    gsSP2Triangles(1, 2, 13, 0, 14, 2, 15, 0),
    gsSPVertex(&object_ybbVtx_000210[177], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(1, 4, 3, 0, 5, 6, 0, 0),
    gsSP2Triangles(6, 5, 3, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 9, 0, 3, 5, 11, 0),
    gsSP2Triangles(11, 10, 3, 0, 0, 7, 11, 0),
    gsSP2Triangles(2, 3, 10, 0, 10, 12, 2, 0),
    gsSP2Triangles(3, 4, 6, 0, 0, 11, 5, 0),
    gsSP2Triangles(6, 13, 0, 0, 0, 13, 1, 0),
    gsSP2Triangles(0, 2, 8, 0, 8, 7, 0, 0),
    gsSP2Triangles(9, 12, 10, 0, 9, 11, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gYbbLeftFootDL[] = {
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ybbVtx_000210[115], 4, 0),
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    //gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbForeheadBlotchTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ybbVtx_000210[119], 12, 4),
    gsSP2Triangles(0, 4, 5, 0, 0, 1, 6, 0),
    gsSP2Triangles(2, 7, 8, 0, 2, 3, 9, 0),
    gsSP2Triangles(10, 3, 0, 0, 11, 12, 0, 0),
    gsSP2Triangles(13, 14, 2, 0, 15, 1, 2, 0),
    gsSPVertex(&object_ybbVtx_000210[131], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 5, 1, 0, 4, 5, 0, 0),
    gsSP1Triangle(5, 4, 1, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbToesTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_ybbVtx_000210[137], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbFingersTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_ybbVtx_000210[144], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 9, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 10, 0, 12, 14, 13, 0),
    gsSP2Triangles(4, 15, 5, 0, 1, 0, 16, 0),
    gsSPEndDisplayList(),
};

Gfx gYbbEndDisplayList4108DL[] = {
    gsSPEndDisplayList(),
};

Gfx gYbbUpperTorsoDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_ybbVtx_002D80, 3, 0),
    gsSPVertex(&object_ybbVtx_002D80[3], 4, 3),
    gsSPVertex(&object_ybbVtx_002D80[7], 1, 7),
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    //gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbForeheadBlotchTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ybbVtx_002D80[8], 22, 8),
    gsSP2Triangles(8, 9, 0, 0, 10, 7, 11, 0),
    gsSP2Triangles(7, 3, 12, 0, 13, 4, 1, 0),
    gsSP2Triangles(14, 4, 15, 0, 1, 16, 17, 0),
    gsSP2Triangles(1, 0, 18, 0, 19, 0, 2, 0),
    gsSP2Triangles(20, 21, 2, 0, 22, 5, 23, 0),
    gsSP2Triangles(2, 5, 24, 0, 25, 6, 7, 0),
    gsSP2Triangles(26, 7, 27, 0, 0, 28, 29, 0),
    gsSPVertex(&object_ybbVtx_002D80[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 3, 1, 0),
    gsSP2Triangles(4, 3, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 8, 7, 0, 11, 6, 5, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 13, 12, 0),
    gsSP2Triangles(6, 11, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(12, 14, 20, 0, 21, 20, 14, 0),
    gsSP2Triangles(22, 8, 10, 0, 11, 23, 16, 0),
    gsSP2Triangles(24, 8, 22, 0, 23, 24, 22, 0),
    gsSP2Triangles(20, 21, 25, 0, 23, 11, 24, 0),
    gsSP2Triangles(1, 0, 26, 0, 27, 28, 29, 0),
    gsSP2Triangles(27, 29, 30, 0, 31, 27, 30, 0),
    gsSPVertex(&object_ybbVtx_002D80[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(8, 7, 4, 0, 8, 9, 7, 0),
    gsSP2Triangles(9, 10, 7, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 14, 16, 0, 20, 21, 14, 0),
    gsSP2Triangles(22, 16, 15, 0, 23, 21, 20, 0),
    gsSP2Triangles(24, 19, 18, 0, 19, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 22, 15, 29, 0),
    gsSP2Triangles(25, 30, 31, 0, 24, 30, 25, 0),
    gsSPVertex(&object_ybbVtx_002D80[94], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 0, 7, 8, 0),
    gsSP2Triangles(9, 7, 0, 0, 1, 0, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gYbbHeadDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ybbVtx_000210[293], 6, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    //gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbForeheadBlotchTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ybbVtx_000210[299], 12, 6),
    gsSP2Triangles(2, 0, 6, 0, 1, 3, 7, 0),
    gsSP2Triangles(8, 9, 2, 0, 10, 11, 1, 0),
    gsSP2Triangles(1, 12, 13, 0, 4, 14, 15, 0),
    gsSP2Triangles(16, 5, 1, 0, 17, 0, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbEyeTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_ybbVtx_000210[311], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 3, 4, 0, 4, 5, 1, 0),
    gsSP2Triangles(6, 5, 4, 0, 7, 5, 6, 0),
    gsSP2Triangles(1, 5, 2, 0, 7, 6, 8, 0),
    gsSP2Triangles(4, 8, 6, 0, 3, 9, 4, 0),
    gsSP2Triangles(8, 4, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(11, 10, 13, 0, 14, 12, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(14, 17, 15, 0, 11, 17, 14, 0),
    gsSP2Triangles(18, 17, 11, 0, 11, 13, 18, 0),
    gsSP2Triangles(18, 13, 19, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbForeheadBlotchTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_ybbVtx_000210[331], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 2, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 12, 17, 18, 0),
    gsSP2Triangles(7, 19, 5, 0, 12, 20, 17, 0),
    gsSP2Triangles(21, 20, 12, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 12, 11, 0, 26, 25, 11, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsSPVertex(&object_ybbVtx_000210[361], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(6, 12, 7, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 14, 13, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 13, 23, 0),
    gsSP2Triangles(24, 19, 21, 0, 1, 25, 2, 0),
    gsSP2Triangles(26, 25, 1, 0, 21, 20, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_ybbVtx_000210[392], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 1, 0, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 10, 9, 18, 0),
    gsSP2Triangles(19, 1, 5, 0, 19, 2, 1, 0),
    gsSP2Triangles(2, 20, 0, 0, 21, 20, 2, 0),
    gsSP2Triangles(22, 23, 24, 0, 3, 21, 2, 0),
    gsSP2Triangles(25, 26, 13, 0, 4, 2, 19, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbHairlineTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_ybbVtx_000210[422], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(2, 8, 3, 0, 5, 7, 9, 0),
    gsSP2Triangles(9, 7, 10, 0, 11, 10, 7, 0),
    gsSP2Triangles(12, 10, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 16, 13, 0, 17, 16, 18, 0),
    gsSP2Triangles(16, 17, 13, 0, 13, 19, 20, 0),
    gsSP2Triangles(21, 22, 17, 0, 23, 17, 22, 0),
    gsSP2Triangles(18, 24, 17, 0, 19, 13, 25, 0),
    gsSP2Triangles(17, 24, 21, 0, 13, 17, 25, 0),
    gsSP2Triangles(17, 23, 25, 0, 26, 27, 28, 0),
    gsSP2Triangles(13, 29, 14, 0, 20, 29, 13, 0),
    gsSP2Triangles(14, 29, 30, 0, 26, 28, 31, 0),
    gsSPVertex(&object_ybbVtx_000210[454], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(2, 4, 0, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 0, 7, 8, 0),
    gsSP2Triangles(7, 0, 9, 0, 10, 9, 0, 0),
    gsSP2Triangles(10, 0, 3, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 3, 0, 3, 16, 14, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbNoseTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_ybbVtx_000210[471], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 9, 6, 0),
    gsSP2Triangles(6, 10, 11, 0, 11, 12, 6, 0),
    gsSP1Triangle(13, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx gYbbPonyTailDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetPrimColor(0, 0xFF, 205, 130, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    //gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gYbbPantsTex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ybbVtx_000210[273], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 0, 5, 0, 5, 6, 4, 0),
    gsSP2Triangles(6, 3, 4, 0, 3, 6, 2, 0),
    gsSP1Triangle(2, 5, 0, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbPonytailTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ybbVtx_000210[280], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 4, 3, 8, 0),
    gsSP2Triangles(2, 9, 3, 0, 0, 4, 10, 0),
    gsSP2Triangles(2, 4, 0, 0, 5, 0, 11, 0),
    gsSP2Triangles(1, 0, 5, 0, 6, 5, 12, 0),
    gsSP1Triangle(5, 7, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gYbbEndDisplayList4970DL[] = {
    gsSPEndDisplayList(),
};

Gfx gYbbRightUpperArmDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ybbVtx_0020B0[174], 7, 0),
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    //gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbForeheadBlotchTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ybbVtx_0020B0[181], 13, 7),
    gsSP2Triangles(7, 8, 5, 0, 2, 3, 9, 0),
    gsSP2Triangles(1, 10, 11, 0, 1, 6, 12, 0),
    gsSP2Triangles(4, 0, 13, 0, 14, 3, 15, 0),
    gsSP2Triangles(16, 0, 1, 0, 5, 2, 17, 0),
    gsSP1Triangle(18, 19, 2, 0),
    gsSPVertex(&object_ybbVtx_0020B0[194], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 3, 5, 0, 5, 4, 6, 0),
    gsSP2Triangles(4, 2, 6, 0, 2, 1, 6, 0),
    gsSP2Triangles(7, 1, 0, 0, 5, 7, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gYbbRightForearmDL[] = {
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ybbVtx_0020B0[150], 4, 0),
    gsSPMatrix(0x0D000380, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    //gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbForeheadBlotchTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ybbVtx_0020B0[154], 12, 4),
    gsSP2Triangles(0, 1, 4, 0, 5, 1, 2, 0),
    gsSP2Triangles(6, 3, 0, 0, 2, 3, 7, 0),
    gsSP2Triangles(8, 9, 2, 0, 2, 10, 11, 0),
    gsSP2Triangles(12, 13, 0, 0, 0, 14, 15, 0),
    gsSPVertex(&object_ybbVtx_0020B0[166], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(1, 4, 2, 0, 4, 7, 2, 0),
    gsSP2Triangles(5, 3, 6, 0, 5, 0, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gYbbRightHandDL[] = {
    gsSPMatrix(0x0D000380, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ybbVtx_0020B0[101], 4, 0),
    gsSPMatrix(0x0D0003C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    //gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbFingersTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ybbVtx_0020B0[105], 18, 4),
    gsSP2Triangles(0, 4, 1, 0, 1, 5, 6, 0),
    gsSP2Triangles(2, 7, 8, 0, 2, 3, 9, 0),
    gsSP2Triangles(10, 11, 2, 0, 3, 1, 12, 0),
    gsSP2Triangles(13, 14, 1, 0, 15, 16, 3, 0),
    gsSP2Triangles(2, 17, 0, 0, 18, 19, 0, 0),
    gsSP1Triangle(3, 20, 21, 0),
    gsSPVertex(&object_ybbVtx_0020B0[123], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 3, 0, 3, 2, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 7, 0, 7, 6, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 14, 13, 0),
    gsSP2Triangles(0, 3, 5, 0, 8, 16, 6, 0),
    gsSP1Triangle(17, 18, 16, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbToesTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_ybbVtx_0020B0[142], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gYbbLeftUpperArmDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ybbVtx_0020B0[73], 7, 0),
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    //gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbForeheadBlotchTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ybbVtx_0020B0[80], 13, 7),
    gsSP2Triangles(3, 7, 8, 0, 9, 5, 2, 0),
    gsSP2Triangles(10, 11, 0, 0, 12, 4, 0, 0),
    gsSP2Triangles(13, 1, 6, 0, 14, 5, 15, 0),
    gsSP2Triangles(0, 1, 16, 0, 17, 2, 3, 0),
    gsSP1Triangle(2, 18, 19, 0),
    gsSPVertex(&object_ybbVtx_0020B0[93], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 2, 0, 6, 4, 3, 0),
    gsSP2Triangles(6, 0, 4, 0, 6, 1, 0, 0),
    gsSP2Triangles(2, 1, 7, 0, 2, 7, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gYbbLeftForearmDL[] = {
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_ybbVtx_0020B0[49], 4, 0),
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbForeheadBlotchTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ybbVtx_0020B0[53], 12, 4),
    gsSP2Triangles(4, 0, 1, 0, 2, 0, 5, 0),
    gsSP2Triangles(1, 3, 6, 0, 7, 3, 2, 0),
    gsSP2Triangles(2, 8, 9, 0, 10, 11, 2, 0),
    gsSP2Triangles(1, 12, 13, 0, 14, 15, 1, 0),
    gsSPVertex(&object_ybbVtx_0020B0[65], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(0, 6, 1, 0, 0, 7, 6, 0),
    gsSP2Triangles(4, 3, 5, 0, 3, 2, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gYbbLeftHandDL[] = {
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_ybbVtx_0020B0, 4, 0),
    gsSPMatrix(0x0D000300, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    //gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbFingersTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_ybbVtx_0020B0[4], 18, 4),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 0, 0),
    gsSP2Triangles(7, 8, 2, 0, 9, 3, 2, 0),
    gsSP2Triangles(2, 10, 11, 0, 12, 0, 3, 0),
    gsSP2Triangles(0, 13, 14, 0, 3, 15, 16, 0),
    gsSP2Triangles(1, 17, 2, 0, 1, 18, 19, 0),
    gsSP1Triangle(20, 21, 3, 0),
    gsSPVertex(&object_ybbVtx_0020B0[22], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(3, 4, 5, 0, 5, 0, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(7, 9, 11, 0, 11, 8, 7, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 12, 15, 0),
    gsSP2Triangles(4, 3, 2, 0, 8, 16, 6, 0),
    gsSP1Triangle(16, 17, 18, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gYbbTLUT),
    gsDPLoadTextureBlock(gYbbToesTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_ybbVtx_0020B0[41], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSPEndDisplayList(),
};

u64 gYbbTLUT[] = {
#include "assets/objects/object_ybb/ybb_tlut.rgba16.inc.c"
};

u64 gYbbForeheadBlotchTex[] = {
#include "assets/objects/object_ybb/ybb_forhead_blotch.ci8.inc.c"
};

u64 gYbbPonytailTex[] = {
#include "assets/objects/object_ybb/ybb_ponytail.ci8.inc.c"
};

u64 gYbbFingersTex[] = {
#include "assets/objects/object_ybb/ybb_fingers.ci8.inc.c"
};

u64 gYbbToesTex[] = {
#include "assets/objects/object_ybb/ybb_toes.ci8.inc.c"
};

u64 gYbbHairlineTex[] = {
#include "assets/objects/object_ybb/ybb_hairline.ci8.inc.c"
};

u64 gYbbBellybuttonTex[] = {
#include "assets/objects/object_ybb/ybb_bellybutton.ci8.inc.c"
};

u64 gYbbNoseTex[] = {
#include "assets/objects/object_ybb/ybb_nose.ci8.inc.c"
};

u64 gYbbEyeTex[] = {
#include "assets/objects/object_ybb/ybb_eye.ci8.inc.c"
};

u64 gYbbPantsTex[] = {
#include "assets/objects/object_ybb/ybb_pants.i8.inc.c"
};

StandardLimb gYbbMainRootLimb = { 
    { 0, 3600, 100 }, YBB_LIMB_PANTS - 1, LIMB_DONE,
    NULL
};

StandardLimb gYbbPantsLimb = { 
    { 0, 0, 0 }, YBB_LIMB_LEGS_ROOT - 1, YBB_LIMB_CHEST_ROOT - 1,
    gYbbPantsAndBellyButtonDL
};

StandardLimb gYbbLegsRootLimb = { 
    { 945, 0, 0 }, YBB_LIMB_RIGHT_THIGH - 1, LIMB_DONE,
    NULL
};

StandardLimb gYbbRightThighLimb = { 
    { -442, -5, -350 }, YBB_LIMB_RIGHT_SHIN - 1, YBB_LIMB_LEFT_THIGH - 1,
    gYbbRightThighDL
};

StandardLimb gYbbRightShinLimb = { 
    { 1100, 0, 0 }, YBB_LIMB_RIGHT_FOOT - 1, LIMB_DONE,
    gYbbRightShinDL
};

StandardLimb gYbbRightFootLimb = { 
    { 1500, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gYbbRightFoodDL
};

StandardLimb gYbbLeftThighLimb = { 
    { -442, -5, 350 }, YBB_LIMB_LEFT_SHIN - 1, LIMB_DONE,
    gYbbLeftThighDL
};

StandardLimb gYbbLeftShinLimb = { 
    { 1100, 0, 0 }, YBB_LIMB_LEFT_FOOT - 1, LIMB_DONE,
    gYbbLeftShinDL
};

StandardLimb gYbbLeftFootLimb = { 
    { 1500, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gYbbLeftFootDL
};

StandardLimb gYbbChestRootLimb = { 
    { 0, 21, -7 }, YBB_LIMB_HEAD - 1, LIMB_DONE,
    NULL
};

StandardLimb gYbbHeadLimb = { 
    { 1806, 100, 0 }, YBB_LIMB_PONYTAIL - 1, YBB_LIMB_EMPTY_5E88 - 1,
    gYbbHeadDL
};

StandardLimb gYbbPonyTailLimb = { 
    { -199, -915, 0 }, LIMB_DONE, LIMB_DONE,
    gYbbPonyTailDL
};

StandardLimb gYbbEmpty5E88Limb = { 
    { 0, 0, 0 }, LIMB_DONE, YBB_LIMB_LEFT_UPPER_ARM - 1,
    gYbbEndDisplayList4108DL
};

StandardLimb gYbbLeftUpperArmLimb = { 
    { 1295, -140, 480 }, YBB_LIMB_LEFT_FOREARM - 1, YBB_LIMB_RIGHT_UPPER_ARM - 1,
    gYbbLeftUpperArmDL
};

StandardLimb gYbbLeftForearmLimb = { 
    { 1171, 0, 0 }, YBB_LIMB_LEFT_HAND - 1, LIMB_DONE,
    gYbbLeftForearmDL
};

StandardLimb gYbbLeftHandLimb = { 
    { 1004, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gYbbLeftHandDL
};

StandardLimb gYbbRightUpperArmLimb = { 
    { 1300, -140, -480 }, YBB_LIMB_RIGHT_FOREARM - 1, YBB_LIMB_EMPTY_5EDC - 1,
    gYbbRightUpperArmDL
};

StandardLimb gYbbRightForearmLimb = { 
    { 1169, 0, 0 }, YBB_LIMB_RIGHT_HAND - 1, LIMB_DONE,
    gYbbRightForearmDL
};

StandardLimb gYbbRightHandLimb = { 
    { 1004, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gYbbRightHandDL
};

StandardLimb gYbbEmpty5EDCLimb = { 
    { 978, -200, 0 }, LIMB_DONE, YBB_LIMB_TORSO - 1,
    gYbbEndDisplayList4970DL
};

StandardLimb gYbbUpperTorsoLimb = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gYbbUpperTorsoDL
};

void* gYbbSkelLimbs[] = {
    &gYbbMainRootLimb, /* YBB_LIMB_MAIN_ROOT */
    &gYbbPantsLimb, /* YBB_LIMB_PANTS */
    &gYbbLegsRootLimb, /* YBB_LIMB_LEGS_ROOT */
    &gYbbRightThighLimb, /* YBB_LIMB_RIGHT_THIGH */
    &gYbbRightShinLimb, /* YBB_LIMB_RIGHT_SHIN */
    &gYbbRightFootLimb, /* YBB_LIMB_RIGHT_FOOT */
    &gYbbLeftThighLimb, /* YBB_LIMB_LEFT_THIGH */
    &gYbbLeftShinLimb, /* YBB_LIMB_LEFT_SHIN */
    &gYbbLeftFootLimb, /* YBB_LIMB_LEFT_FOOT */
    &gYbbChestRootLimb, /* YBB_LIMB_CHEST_ROOT */
    &gYbbHeadLimb, /* YBB_LIMB_HEAD */
    &gYbbPonyTailLimb, /* YBB_LIMB_PONYTAIL */
    &gYbbEmpty5E88Limb, /* YBB_LIMB_EMPTY_5E88 */
    &gYbbLeftUpperArmLimb, /* YBB_LIMB_LEFT_UPPER_ARM */
    &gYbbLeftForearmLimb, /* YBB_LIMB_LEFT_FOREARM */
    &gYbbLeftHandLimb, /* YBB_LIMB_LEFT_HAND */
    &gYbbRightUpperArmLimb, /* YBB_LIMB_RIGHT_UPPER_ARM */
    &gYbbRightForearmLimb, /* YBB_LIMB_RIGHT_FOREARM */
    &gYbbRightHandLimb, /* YBB_LIMB_RIGHT_HAND */
    &gYbbEmpty5EDCLimb, /* YBB_LIMB_EMPTY_5EDC */
    &gYbbUpperTorsoLimb, /* YBB_LIMB_TORSO */
};

FlexSkeletonHeader gYbbSkel = { 
    { gYbbSkelLimbs, ARRAY_COUNT(gYbbSkelLimbs) }, 18
};

#include "DanceAnim2.c"
