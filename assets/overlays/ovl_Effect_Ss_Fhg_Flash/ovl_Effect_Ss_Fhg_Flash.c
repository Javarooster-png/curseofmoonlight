#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "ovl_Effect_Ss_Fhg_Flash.h"
static Vtx sShockVtx[4];
static Gfx sShockDL[15];
static u64 sShockTex[128];

static Vtx sShockVtx[4] = {
#include "assets/overlays/ovl_Effect_Ss_Fhg_Flash/sShockVtx.vtx.inc"
};

static Gfx sShockDL[15] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sShockTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(sShockVtx, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

static u64 sShockTex[128] = {
#include "assets/overlays/ovl_Effect_Ss_Fhg_Flash/shock.i8.inc.c"
};

