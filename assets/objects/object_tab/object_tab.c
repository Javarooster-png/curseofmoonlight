#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_tab.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

s16 object_tab_Anim_000758FrameData[] = {
    0x0000, 0x0B86, 0xFE70, 0xC000, 0xFDB8, 0xF8E9, 0x021E, 0x06ED, 0x1061, 0xFA61, 0x0000, 0x0004, 0x000A, 0x0012, 
    0x001B, 0x0022, 0x0027, 0x002A, 0x002D, 0x0030, 0x0032, 0x0034, 0x0034, 0x0034, 0x0032, 0x002E, 0x0029, 0x0021, 
    0x0019, 0x0012, 0x000B, 0x0007, 0x0004, 0x0001, 0xFFFF, 0xFFFE, 0xFFFD, 0xFFFD, 0xFFFD, 0xFFFE, 0x0B86, 0x0B86, 
    0x0B84, 0x0B81, 0x0B7E, 0x0B7A, 0x0B77, 0x0B74, 0x0B71, 0x0B6D, 0x0B6A, 0x0B66, 0x0B63, 0x0B61, 0x0B60, 0x0B61, 
    0x0B62, 0x0B65, 0x0B68, 0x0B6B, 0x0B6E, 0x0B71, 0x0B74, 0x0B76, 0x0B79, 0x0B7C, 0x0B7F, 0x0B82, 0x0B84, 0x0B85, 
    0xFE70, 0xFE70, 0xFE72, 0xFE75, 0xFE78, 0xFE7C, 0xFE7F, 0xFE82, 0xFE85, 0xFE89, 0xFE8C, 0xFE90, 0xFE93, 0xFE95, 
    0xFE96, 0xFE95, 0xFE94, 0xFE91, 0xFE8E, 0xFE8B, 0xFE88, 0xFE85, 0xFE82, 0xFE80, 0xFE7D, 0xFE7A, 0xFE77, 0xFE74, 
    0xFE72, 0xFE71, 0xFB5B, 0xFB5E, 0xFB66, 0xFB72, 0xFB82, 0xFB95, 0xFBAA, 0xFBC1, 0xFBD8, 0xFBEF, 0xFC06, 0xFC1B, 
    0xFC2E, 0xFC3E, 0xFC4B, 0xFC52, 0xFC55, 0xFC52, 0xFC47, 0xFC38, 0xFC24, 0xFC0C, 0xFBF3, 0xFBD8, 0xFBBD, 0xFBA4, 
    0xFB8D, 0xFB78, 0xFB69, 0xFB5F, 0x0074, 0x0071, 0x006D, 0x0067, 0x0061, 0x005B, 0x0057, 0x0055, 0x0053, 0x0052, 
    0x0051, 0x0051, 0x0052, 0x0054, 0x0057, 0x005D, 0x0066, 0x0071, 0x007B, 0x0084, 0x008A, 0x008D, 0x008D, 0x008C, 
    0x008A, 0x0087, 0x0084, 0x0080, 0x007C, 0x0078, 0xFDBC, 0xFDD3, 0xFDF9, 0xFE27, 0xFE57, 0xFE81, 0xFE9E, 0xFEB2, 
    0xFEC4, 0xFED3, 0xFEDF, 0xFEE7, 0xFEEA, 0xFEE7, 0xFEDE, 0xFEC9, 0xFEA7, 0xFE7D, 0xFE4F, 0xFE23, 0xFDFE, 0xFDE4, 
    0xFDD3, 0xFDC5, 0xFDB9, 0xFDB1, 0xFDAC, 0xFDAA, 0xFDAC, 0xFDB2, 0xFE67, 0xFE52, 0xFE13, 0xFDBA, 0xFD55, 0xFCEF, 
    0xFC92, 0xFC37, 0xFBD6, 0xFB76, 0xFB1B, 0xFAC8, 0xFA83, 0xFA4F, 0xFA2E, 0xFA27, 0xFA3A, 0xFA65, 0xFAA6, 0xFAF6, 
    0xFB4D, 0xFBA3, 0xFBFB, 0xFC5B, 0xFCBF, 0xFD23, 0xFD83, 0xFDD9, 0xFE20, 0xFE51, 0x1021, 0x1049, 0x10C8, 0x117C, 
    0x1244, 0x1305, 0x13AB, 0x1448, 0x14F3, 0x15A1, 0x1646, 0x16D9, 0x1752, 0x17A8, 0x17D4, 0x17C7, 0x1785, 0x1717, 
    0x168A, 0x15EC, 0x154D, 0x14BF, 0x1437, 0x139E, 0x12FB, 0x1255, 0x11B4, 0x1120, 0x10A4, 0x104C, 0xB71E, 0xB70D, 
    0xB6DB, 0xB68F, 0xB62E, 0xB5BD, 0xB542, 0xB4C1, 0xB440, 0xB3C5, 0xB354, 0xB2F3, 0xB2A7, 0xB276, 0xB264, 0xB272, 
    0xB298, 0xB2D4, 0xB321, 0xB37D, 0xB3E3, 0xB450, 0xB4C1, 0xB532, 0xB59F, 0xB606, 0xB661, 0xB6AF, 0xB6EA, 0xB711, 
    0xFF8C, 0xFF87, 0xFF7C, 0xFF6E, 0xFF5E, 0xFF4F, 0xFF42, 0xFF37, 0xFF2C, 0xFF21, 0xFF17, 0xFF0E, 0xFF07, 0xFF04, 
    0xFF04, 0xFF0A, 0xFF16, 0xFF25, 0xFF36, 0xFF47, 0xFF55, 0xFF60, 0xFF68, 0xFF70, 0xFF77, 0xFF7D, 0xFF83, 0xFF88, 
    0xFF8B, 0xFF8C, 0x0244, 0x025A, 0x0280, 0x02AE, 0x02DE, 0x0308, 0x0326, 0x033A, 0x034C, 0x035B, 0x0367, 0x036F, 
    0x0372, 0x036F, 0x0366, 0x0351, 0x032F, 0x0305, 0x02D7, 0x02AB, 0x0285, 0x026B, 0x025B, 0x024C, 0x0241, 0x0238, 
    0x0233, 0x0231, 0x0233, 0x023A, 0xFE67, 0xFE5E, 0xFE33, 0xFDF1, 0xFDA1, 0xFD4D, 0xFCFA, 0xFCA5, 0xFC48, 0xFBEB, 
    0xFB91, 0xFB3F, 0xFAF8, 0xFAC0, 0xFA9B, 0xFA8C, 0xFA93, 0xFAB0, 0xFAE0, 0xFB20, 0xFB68, 0xFBB4, 0xFC05, 0xFC5F, 
    0xFCBD, 0xFD1D, 0xFD7B, 0xFDD0, 0xFE17, 0xFE4C, 0x1021, 0x102F, 0x1085, 0x1109, 0x11A3, 0x1240, 0x12CE, 0x135F, 
    0x1400, 0x14A7, 0x1548, 0x15DB, 0x1656, 0x16B2, 0x16E6, 0x16EB, 0x16C3, 0x1676, 0x160D, 0x1592, 0x1513, 0x149B, 
    0x1421, 0x1396, 0x12FE, 0x1261, 0x11C5, 0x1134, 0x10B7, 0x1057, 0xB733, 0xB722, 0xB6F2, 0xB6A9, 0xB64B, 0xB5DE, 
    0xB567, 0xB4EB, 0xB46F, 0xB3F7, 0xB38A, 0xB32D, 0xB2E4, 0xB2B4, 0xB2A3, 0xB2B0, 0xB2D5, 0xB30F, 0xB359, 0xB3B2, 
    0xB414, 0xB47E, 0xB4EB, 0xB558, 0xB5C1, 0xB624, 0xB67D, 0xB6C7, 0xB701, 0xB726, 0x0000, 0xFFEA, 0xFFD0, 0xFFB4, 
    0xFF9A, 0xFF83, 0xFF74, 0xFF6E, 0xFF74, 0xFF83, 0xFF9A, 0xFFB4, 0xFFD0, 0xFFEA, 0x0000, 0x0014, 0x002B, 0x0042, 
    0x0058, 0x006C, 0x007B, 0x0086, 0x008A, 0x0086, 0x007B, 0x006C, 0x0058, 0x0042, 0x002B, 0x0014, 0x8452, 0x8438, 
    0x83F8, 0x839D, 0x8330, 0x82BC, 0x824C, 0x81EA, 0x8187, 0x8115, 0x809F, 0x8031, 0x7FD5, 0x7F98, 0x7F83, 0x7F9A, 
    0x7FD3, 0x8025, 0x8088, 0x80F4, 0x8162, 0x81C8, 0x8220, 0x8273, 0x82CF, 0x832E, 0x8389, 0x83DA, 0x841B, 0x8445, 
    0x0000, 0xFFE9, 0xFFD1, 0xFFBA, 0xFFA4, 0xFF93, 0xFF87, 0xFF83, 0xFF87, 0xFF93, 0xFFA4, 0xFFBA, 0xFFD1, 0xFFE9, 
    0x0000, 0x0019, 0x0037, 0x0058, 0x0079, 0x0097, 0x00B0, 0x00C0, 0x00C7, 0x00C0, 0x00B0, 0x0097, 0x0079, 0x0058, 
    0x0037, 0x0019, 0x003F, 0x005E, 0x00AB, 0x0119, 0x019B, 0x0226, 0x02AD, 0x0323, 0x039A, 0x0424, 0x04B1, 0x0536, 
    0x05A4, 0x05EF, 0x0608, 0x05EC, 0x05A8, 0x0545, 0x04CD, 0x044B, 0x03C7, 0x034C, 0x02E3, 0x027E, 0x020F, 0x019D, 
    0x0130, 0x00CE, 0x0081, 0x004E, 0xEC17, 0xEC22, 0xEC42, 0xEC72, 0xECB0, 0xECF8, 0xED47, 0xED99, 0xEDEB, 0xEE3A, 
    0xEE82, 0xEEBF, 0xEEF0, 0xEF0F, 0xEF1B, 0xEF12, 0xEEF9, 0xEED3, 0xEEA2, 0xEE68, 0xEE26, 0xEDE1, 0xED99, 0xED51, 
    0xED0B, 0xECCA, 0xEC8F, 0xEC5E, 0xEC38, 0xEC1F, 0x8000, 0x8007, 0x801C, 0x803B, 0x8063, 0x8092, 0x80C5, 0x80FA, 
    0x8130, 0x8163, 0x8191, 0x81BA, 0x81D9, 0x81ED, 0x81F5, 0x81EF, 0x81DF, 0x81C6, 0x81A6, 0x8181, 0x8156, 0x8129, 
    0x80FA, 0x80CC, 0x809E, 0x8074, 0x804E, 0x802E, 0x8016, 0x8006, 0xE6FC, 0xE711, 0xE74C, 0xE7A9, 0xE821, 0xE8AF, 
    0xE94E, 0xE9F7, 0xEAA6, 0xEB56, 0xEBFF, 0xEC9E, 0xED2C, 0xEDA4, 0xEE01, 0xEE3C, 0xEE51, 0xEE36, 0xEDE9, 0xED74, 
    0xECDD, 0xEC2E, 0xEB6E, 0xEAA6, 0xE9DF, 0xE91F, 0xE870, 0xE7D9, 0xE764, 0xE717, 0x0000, 0xFFED, 0xFFB7, 0xFF65, 
    0xFEFB, 0xFE81, 0xFDFB, 0xFD6F, 0xFCE3, 0xFC5D, 0xFBE2, 0xFB79, 0xFB27, 0xFAF1, 0xFADE, 0xFAED, 0xFB16, 0xFB57, 
    0xFBAB, 0xFC0F, 0xFC7E, 0xFCF4, 0xFD6F, 0xFDE9, 0xFE60, 0xFECF, 0xFF33, 0xFF87, 0xFFC8, 0xFFF1, 0x1146, 0x1139, 
    0x1114, 0x10DA, 0x1091, 0x103B, 0x0FDD, 0x0F7C, 0x0F1A, 0x0EBC, 0x0E67, 0x0E1D, 0x0DE3, 0x0DBE, 0x0DB1, 0x0DBB, 
    0x0DD8, 0x0E05, 0x0E40, 0x0E85, 0x0ED3, 0x0F26, 0x0F7C, 0x0FD1, 0x1024, 0x1072, 0x10B7, 0x10F2, 0x111F, 0x113C, 
    0x0A63, 0x0A4F, 0x0A36, 0x0A17, 0x09F6, 0x09D5, 0x09B6, 0x09A5, 0x09A0, 0x099F, 0x09A3, 0x09AA, 0x09B6, 0x09C6, 
    0x09DA, 0x09F1, 0x0A0A, 0x0A23, 0x0A3B, 0x0A52, 0x0A67, 0x0A7B, 0x0A88, 0x0A8C, 0x0A8E, 0x0A8D, 0x0A8B, 0x0A85, 
    0x0A7D, 0x0A72, 0x1156, 0x1167, 0x1180, 0x119B, 0x11B1, 0x11BF, 0x11BD, 0x11B2, 0x11A6, 0x1199, 0x118B, 0x117E, 
    0x1171, 0x1165, 0x1159, 0x114A, 0x1132, 0x1118, 0x10FE, 0x10E9, 0x10DC, 0x10DC, 0x10E5, 0x10F1, 0x10FF, 0x110D, 
    0x111C, 0x112C, 0x113B, 0x1149, 0x735E, 0x734B, 0x733E, 0x7337, 0x7336, 0x733D, 0x734D, 0x736E, 0x739E, 0x73D5, 
    0x740F, 0x744A, 0x7481, 0x74B1, 0x74D4, 0x74EB, 0x74FB, 0x7502, 0x74FF, 0x74F4, 0x74E2, 0x74CA, 0x74AA, 0x7480, 
    0x7453, 0x7423, 0x73F3, 0x73C6, 0x739C, 0x7379, 0xD7B1, 0xD815, 0xD89D, 0xD936, 0xD9CF, 0xDA55, 0xDAB4, 0xDAD5, 
    0xDACB, 0xDAB3, 0xDA8D, 0xDA59, 0xDA17, 0xD9CA, 0xD971, 0xD903, 0xD87F, 0xD7F5, 0xD76E, 0xD6F6, 0xD694, 0xD653, 
    0xD640, 0xD64E, 0xD667, 0xD689, 0xD6B4, 0xD6E8, 0xD724, 0xD767, 0x0D1F, 0x0D29, 0x0D27, 0x0D1B, 0x0D09, 0x0CF2, 
    0x0CDA, 0x0CBE, 0x0C9B, 0x0C75, 0x0C4D, 0x0C26, 0x0C02, 0x0BE5, 0x0BD1, 0x0BC4, 0x0BBB, 0x0BB7, 0x0BB7, 0x0BBC, 
    0x0BC5, 0x0BD3, 0x0BE6, 0x0C01, 0x0C27, 0x0C55, 0x0C86, 0x0CB6, 0x0CE2, 0x0D06, 0xF8AB, 0xF879, 0xF842, 0xF80D, 
    0xF7E1, 0xF7C5, 0xF7BF, 0xF7CF, 0xF7ED, 0xF817, 0xF849, 0xF87E, 0xF8B4, 0xF8E7, 0xF913, 0xF93E, 0xF96F, 0xF9A2, 
    0xF9D3, 0xF9FE, 0xFA1F, 0xFA34, 0xFA37, 0xFA26, 0xFA03, 0xF9D2, 0xF997, 0xF958, 0xF919, 0xF8DD, 
};

JointIndex object_tab_Anim_000758JointIndices[] = {
    { 0x000A, 0x0028, 0x0046 },
    { 0x0003, 0x0064, 0x0003 },
    { 0x0082, 0x00A0, 0x00BE },
    { 0x0000, 0x0000, 0x00DC },
    { 0x0004, 0x0005, 0x00FA },
    { 0x0118, 0x0136, 0x0154 },
    { 0x0000, 0x0000, 0x0172 },
    { 0x0006, 0x0007, 0x0190 },
    { 0x0000, 0x01AE, 0x01CC },
    { 0x0000, 0x01EA, 0x0208 },
    { 0x0008, 0x0226, 0x0244 },
    { 0x0000, 0x0000, 0x0262 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0280, 0x029E, 0x0000 },
    { 0x02BC, 0x02DA, 0x02F8 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0316 },
    { 0x0334, 0x0009, 0x0352 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader object_tab_Anim_000758 = { 
    { 30 }, object_tab_Anim_000758FrameData,
    object_tab_Anim_000758JointIndices, 10
};

u8 object_tab_possiblePadding_000768[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx object_tabVtx_000770[] = {
#include "assets/objects/object_tab/object_tabVtx_000770.vtx.inc"
};

Gfx object_tab_DL_003E10[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_tab_Tex_007328, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_tabVtx_000770[837], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 18, 19, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 22, 23, 20, 0),
    gsSP2Triangles(24, 25, 5, 0, 26, 25, 24, 0),
    gsSP2Triangles(6, 25, 26, 0, 6, 5, 25, 0),
    gsSP2Triangles(27, 28, 29, 0, 29, 30, 27, 0),
    gsSPVertex(&object_tabVtx_000770[868], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx object_tab_DL_003EF0[] = {
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_tabVtx_000770[335], 5, 0),
    gsSPVertex(&object_tabVtx_000770[340], 2, 5),
    gsSPMatrix(0x0D0003C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_007828, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_tabVtx_000770[342], 6, 7),
    gsSP2Triangles(7, 5, 1, 0, 3, 6, 8, 0),
    gsSP2Triangles(9, 3, 10, 0, 1, 11, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_006128, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[348], 6, 7),
    gsSP2Triangles(7, 2, 8, 0, 2, 0, 9, 0),
    gsSP2Triangles(10, 0, 4, 0, 4, 11, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_007828, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[354], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 8, 13, 9, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_006128, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[381], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 1, 3, 0, 3, 5, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_006828, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[387], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(2, 3, 0, 0, 1, 4, 2, 0),
    gsSP2Triangles(5, 4, 1, 0, 0, 3, 5, 0),
    gsSP2Triangles(3, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 9, 7, 0, 10, 11, 12, 0),
    gsSP2Triangles(12, 11, 13, 0, 12, 13, 14, 0),
    gsSP2Triangles(14, 13, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 18, 17, 0, 19, 17, 20, 0),
    gsSP1Triangle(19, 20, 21, 0),
    gsSPEndDisplayList(),
};

Gfx object_tab_DL_004270[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_007128, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_tabVtx_000770[409], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(15, 24, 16, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 30, 31, 28, 0),
    gsSPVertex(&object_tabVtx_000770[441], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_007228, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[465], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 7, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 1, 17, 18, 0),
    gsSP2Triangles(1, 18, 2, 0, 13, 19, 11, 0),
    gsSP2Triangles(17, 1, 0, 0, 16, 20, 14, 0),
    gsSP2Triangles(2, 21, 0, 0, 21, 2, 18, 0),
    gsSPEndDisplayList(),
};

Gfx object_tab_DL_004438[] = {
    gsSPMatrix(0x0D000300, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_tabVtx_000770[487], 8, 0),
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_006128, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_tabVtx_000770[495], 6, 8),
    gsSP2Triangles(8, 0, 2, 0, 2, 9, 10, 0),
    gsSP2Triangles(11, 12, 4, 0, 4, 1, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_007828, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[501], 6, 8),
    gsSP2Triangles(5, 8, 9, 0, 10, 6, 5, 0),
    gsSP2Triangles(11, 12, 3, 0, 3, 7, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_006128, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[507], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_007828, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[515], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSPEndDisplayList(),
};

Gfx object_tab_DL_0046C8[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_tabVtx_000770[523], 8, 0),
    gsSPMatrix(0x0D000300, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_tab_Tex_0079E8, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_tabVtx_000770[531], 12, 8),
    gsSP2Triangles(8, 0, 2, 0, 2, 9, 10, 0),
    gsSP2Triangles(11, 3, 4, 0, 4, 12, 13, 0),
    gsSP2Triangles(14, 15, 5, 0, 5, 6, 16, 0),
    gsSP2Triangles(17, 18, 7, 0, 7, 1, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_tab_Tex_0078E8, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[543], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 3, 2, 0, 2, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 9, 6, 0),
    gsSP2Triangles(10, 11, 8, 0, 8, 7, 10, 0),
    gsSPEndDisplayList(),
};

Gfx object_tab_DL_0047F8[] = {
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_tabVtx_000770[186], 6, 0),
    gsSPVertex(&object_tabVtx_000770[192], 1, 6),
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_007828, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_tabVtx_000770[193], 6, 7),
    gsSP2Triangles(7, 8, 0, 0, 9, 2, 10, 0),
    gsSP2Triangles(11, 4, 2, 0, 0, 5, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_006128, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[199], 6, 7),
    gsSP2Triangles(7, 1, 8, 0, 9, 6, 1, 0),
    gsSP2Triangles(3, 6, 10, 0, 11, 12, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_007828, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[205], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_006128, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[231], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 4, 2, 0, 3, 5, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_006828, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[237], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 2, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 6, 5, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(14, 16, 15, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 21, 18, 17, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(27, 28, 25, 0, 28, 27, 29, 0),
    gsSP2Triangles(23, 22, 25, 0, 28, 23, 25, 0),
    gsSPEndDisplayList(),
};

Gfx object_tab_DL_004B70[] = {
    gsSPMatrix(0x0D000240, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_tabVtx_000770[267], 8, 0),
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_007828, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_tabVtx_000770[275], 6, 8),
    gsSP2Triangles(8, 0, 2, 0, 2, 9, 10, 0),
    gsSP2Triangles(4, 1, 11, 0, 12, 13, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_006128, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[281], 6, 8),
    gsSP2Triangles(5, 8, 9, 0, 10, 6, 5, 0),
    gsSP2Triangles(3, 7, 11, 0, 12, 13, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_007828, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[287], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 2, 7, 0, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_006128, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[295], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSPEndDisplayList(),
};

Gfx object_tab_DL_004E00[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_tabVtx_000770[303], 8, 0),
    gsSPMatrix(0x0D000240, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_tab_Tex_0079E8, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_tabVtx_000770[311], 12, 8),
    gsSP2Triangles(8, 9, 0, 0, 0, 2, 10, 0),
    gsSP2Triangles(4, 1, 11, 0, 12, 13, 4, 0),
    gsSP2Triangles(5, 14, 15, 0, 16, 6, 5, 0),
    gsSP2Triangles(7, 17, 18, 0, 19, 3, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_tab_Tex_0078E8, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[323], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(0, 3, 4, 0, 4, 5, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 9, 6, 0),
    gsSP2Triangles(6, 10, 11, 0, 11, 7, 6, 0),
    gsSPEndDisplayList(),
};

Gfx object_tab_DL_004F30[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_tabVtx_000770[555], 8, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_tab_Tex_0079E8, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_tabVtx_000770[563], 22, 8),
    gsSP2Triangles(0, 8, 1, 0, 0, 9, 10, 0),
    gsSP2Triangles(11, 12, 0, 0, 1, 13, 14, 0),
    gsSP2Triangles(4, 6, 15, 0, 16, 17, 4, 0),
    gsSP2Triangles(5, 18, 2, 0, 3, 19, 7, 0),
    gsSP2Triangles(20, 3, 21, 0, 22, 3, 1, 0),
    gsSP2Triangles(1, 23, 24, 0, 0, 2, 25, 0),
    gsSP2Triangles(26, 27, 0, 0, 28, 2, 29, 0),
    gsSPVertex(&object_tabVtx_000770[585], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 3, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 8, 9, 7, 0),
    gsSP2Triangles(0, 11, 3, 0, 12, 13, 14, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 12, 0),
    gsSP2Triangles(5, 17, 18, 0, 18, 17, 19, 0),
    gsSP2Triangles(18, 6, 5, 0, 20, 21, 22, 0),
    gsSP2Triangles(2, 1, 22, 0, 22, 21, 2, 0),
    gsSP2Triangles(7, 9, 5, 0, 2, 11, 0, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_tab_Tex_007728, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_tabVtx_000770[608], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(1, 3, 4, 0, 4, 5, 1, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_007868, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_tabVtx_000770[614], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(3, 4, 1, 0, 0, 5, 3, 0),
    gsSPEndDisplayList(),
};

Gfx object_tab_DL_005178[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_006368, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_tabVtx_000770, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 8, 5, 0),
    gsSP2Triangles(6, 9, 3, 0, 8, 6, 5, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_0060A8, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[16], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 0, 2, 0, 0, 4, 3, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 17, 15, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 22, 20, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 27, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&object_tabVtx_000770[48], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 11, 10, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_tabVtx_000770[79], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 3, 0),
    gsSP2Triangles(2, 15, 0, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 29, 30, 0),
    gsSP1Triangle(10, 12, 31, 0),
    gsSPVertex(&object_tabVtx_000770[111], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 6, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 11, 10, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(24, 23, 21, 0, 25, 26, 27, 0),
    gsSP1Triangle(26, 28, 27, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_Tex_005EA8),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[140], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(2, 4, 0, 0, 5, 1, 6, 0),
    gsSP2Triangles(3, 6, 1, 0, 6, 7, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_006128, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[148], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 2, 0, 2, 1, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_006328, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[154], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 5, 3, 0),
    gsSP2Triangles(1, 6, 2, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 1, 8, 6, 0),
    gsSP2Triangles(6, 8, 7, 0, 4, 2, 6, 0),
    gsSP2Triangles(5, 4, 7, 0, 9, 8, 1, 0),
    gsSP2Triangles(9, 1, 0, 0, 9, 5, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 10, 13, 0),
    gsSP2Triangles(14, 13, 10, 0, 15, 14, 10, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 17, 16, 0),
    gsSPVertex(&object_tabVtx_000770[174], 6, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_tab_TLUT_005CA8),
    gsDPLoadTextureBlock(object_tab_Tex_0063E8, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[180], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx object_tab_DL_005668[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_tabVtx_000770[798], 12, 0),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_tab_Tex_007328, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_tabVtx_000770[810], 17, 12),
    gsSP2Triangles(0, 3, 12, 0, 5, 13, 14, 0),
    gsSP2Triangles(15, 4, 5, 0, 16, 7, 9, 0),
    gsSP2Triangles(17, 6, 8, 0, 18, 10, 1, 0),
    gsSP2Triangles(8, 19, 20, 0, 11, 21, 22, 0),
    gsSP2Triangles(23, 10, 24, 0, 2, 25, 26, 0),
    gsSP1Triangle(2, 27, 28, 0),
    gsSPVertex(&object_tabVtx_000770[827], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 9, 6, 0),
    gsSPEndDisplayList(),
};

Gfx object_tab_DL_005758[] = {
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_tabVtx_000770[765], 7, 0),
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_tab_Tex_007328, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_tabVtx_000770[772], 12, 7),
    gsSP2Triangles(3, 7, 8, 0, 9, 5, 4, 0),
    gsSP2Triangles(10, 11, 1, 0, 2, 6, 12, 0),
    gsSP2Triangles(0, 1, 13, 0, 14, 15, 0, 0),
    gsSP2Triangles(16, 0, 17, 0, 18, 3, 0, 0),
    gsSPVertex(&object_tabVtx_000770[784], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 8, 11, 0),
    gsSP2Triangles(8, 12, 11, 0, 10, 13, 8, 0),
    gsSPEndDisplayList(),
};

Gfx object_tab_DL_005840[] = {
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_tabVtx_000770[731], 4, 0),
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_tab_Tex_007328, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_tabVtx_000770[735], 14, 4),
    gsSP2Triangles(0, 4, 5, 0, 1, 0, 6, 0),
    gsSP2Triangles(7, 0, 2, 0, 8, 2, 9, 0),
    gsSP2Triangles(10, 1, 11, 0, 12, 13, 3, 0),
    gsSP2Triangles(14, 2, 3, 0, 15, 16, 3, 0),
    gsSP1Triangle(3, 1, 17, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_tab_Tex_007A28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[749], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(2, 1, 4, 0, 2, 5, 0, 0),
    gsSP2Triangles(2, 4, 5, 0, 1, 6, 4, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(9, 8, 11, 0, 12, 13, 14, 0),
    gsSP1Triangle(13, 15, 14, 0),
    gsSPEndDisplayList(),
};

Gfx object_tab_DL_005988[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_tabVtx_000770[693], 11, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_tab_Tex_007328, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_tabVtx_000770[704], 17, 11),
    gsSP2Triangles(11, 12, 1, 0, 13, 14, 1, 0),
    gsSP2Triangles(15, 4, 16, 0, 17, 18, 4, 0),
    gsSP2Triangles(7, 9, 19, 0, 2, 5, 20, 0),
    gsSP2Triangles(21, 22, 7, 0, 6, 8, 23, 0),
    gsSP2Triangles(24, 0, 3, 0, 25, 26, 10, 0),
    gsSP1Triangle(10, 0, 27, 0),
    gsSPVertex(&object_tabVtx_000770[721], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(4, 8, 9, 0, 4, 9, 7, 0),
    gsSPEndDisplayList(),
};

Gfx object_tab_DL_005A78[] = {
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_tabVtx_000770[657], 8, 0),
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_tab_Tex_007328, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_tabVtx_000770[665], 12, 8),
    gsSP2Triangles(8, 9, 1, 0, 1, 0, 10, 0),
    gsSP2Triangles(3, 11, 12, 0, 13, 0, 3, 0),
    gsSP2Triangles(14, 4, 5, 0, 6, 15, 16, 0),
    gsSP2Triangles(17, 7, 18, 0, 5, 2, 19, 0),
    gsSPVertex(&object_tabVtx_000770[677], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 10, 15, 8, 0),
    gsSPEndDisplayList(),
};

Gfx object_tab_DL_005B60[] = {
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_tabVtx_000770[620], 7, 0),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_tab_Tex_007328, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_tabVtx_000770[627], 14, 7),
    gsSP2Triangles(7, 8, 1, 0, 9, 2, 0, 0),
    gsSP2Triangles(3, 1, 10, 0, 11, 4, 12, 0),
    gsSP2Triangles(13, 0, 14, 0, 5, 15, 16, 0),
    gsSP2Triangles(6, 4, 17, 0, 6, 18, 19, 0),
    gsSP1Triangle(20, 0, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_tab_Tex_007A28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_tabVtx_000770[641], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 5, 4, 3, 0),
    gsSP2Triangles(3, 2, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(7, 9, 8, 0, 10, 9, 7, 0),
    gsSP2Triangles(5, 2, 11, 0, 12, 13, 14, 0),
    gsSP1Triangle(12, 15, 13, 0),
    gsSPEndDisplayList(),
};

u64 object_tab_TLUT_005CA8[] = {
#include "assets/objects/object_tab/tlut_005CA8.rgba16.inc.c"
};

u64 object_tab_Tex_005EA8[] = {
#include "assets/objects/object_tab/tex_005EA8.rgba16.inc.c"
};

u64 object_tab_Tex_0060A8[] = {
#include "assets/objects/object_tab/tex_0060A8.ci8.inc.c"
};

u64 object_tab_Tex_006128[] = {
#include "assets/objects/object_tab/tex_006128.ci8.inc.c"
};

u64 object_tab_Tex_006328[] = {
#include "assets/objects/object_tab/tex_006328.ci8.inc.c"
};

u64 object_tab_Tex_006368[] = {
#include "assets/objects/object_tab/tex_006368.ci8.inc.c"
};

u64 object_tab_Tex_0063E8[] = {
#include "assets/objects/object_tab/tex_0063E8.ci8.inc.c"
};

u64 object_tab_Tex_006428[] = {
#include "assets/objects/object_tab/tex_006428.ci8.inc.c"
};

u64 object_tab_Tex_006828[] = {
#include "assets/objects/object_tab/tex_006828.ci8.inc.c"
};

u64 object_tab_Tex_006928[] = {
#include "assets/objects/object_tab/tex_006928.ci8.inc.c"
};

u64 object_tab_Tex_006D28[] = {
#include "assets/objects/object_tab/tex_006D28.ci8.inc.c"
};

u64 object_tab_Tex_007128[] = {
#include "assets/objects/object_tab/tex_007128.ci8.inc.c"
};

u64 object_tab_Tex_007228[] = {
#include "assets/objects/object_tab/tex_007228.ci8.inc.c"
};

u64 object_tab_Tex_007328[] = {
#include "assets/objects/object_tab/tex_007328.i8.inc.c"
};

u64 object_tab_Tex_007728[] = {
#include "assets/objects/object_tab/tex_007728.rgba16.inc.c"
};

u64 object_tab_Tex_007828[] = {
#include "assets/objects/object_tab/tex_007828.ci8.inc.c"
};

u64 object_tab_Tex_007868[] = {
#include "assets/objects/object_tab/tex_007868.ci8.inc.c"
};

u64 object_tab_Tex_0078E8[] = {
#include "assets/objects/object_tab/tex_0078E8.i8.inc.c"
};

u64 object_tab_Tex_0079E8[] = {
#include "assets/objects/object_tab/tex_0079E8.i8.inc.c"
};

u64 object_tab_Tex_007A28[] = {
#include "assets/objects/object_tab/tex_007A28.rgba16.inc.c"
};

u8 object_tab_unaccounted_007C28[] = {
    0xEF, 0xA7, 0x20, 0x81, 0xFC, 0x5D, 0xFD, 0x5F, 0xEE, 0xA3, 0xEC, 0x9D, 0x28, 0x81, 0xEF, 0x25, 
    0x20, 0x83, 0xEE, 0x21, 0xD5, 0x5D, 0x52, 0x09, 0x93, 0x93, 0xEF, 0x67, 0xFD, 0xE3, 0x8A, 0xCE, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0xD4, 0xAC, 0xCB, 0xBB, 0xBC, 0xCC, 0xAA, 0xAA, 0xA4, 0x4D, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x07, 0xAB, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x68, 0xBB, 0xCA, 0x94, 0xD0, 0x00, 
    0x00, 0x00, 0x0C, 0xB6, 0x61, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x66, 0x66, 0xBC, 0x9D, 0x00, 
    0x00, 0x00, 0xCB, 0x61, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x16, 0x66, 0x66, 0xC4, 0xD0, 
    0x00, 0x0A, 0xB6, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x16, 0x66, 0x66, 0xB4, 0xD0, 
    0x00, 0x0C, 0x66, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x16, 0x66, 0x66, 0x6A, 0xD0, 
    0x00, 0x0B, 0x61, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x66, 0x11, 0x6C, 0xDD, 
    0x00, 0xC8, 0x61, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x6C, 0xDD, 
    0x00, 0xC6, 0x11, 0x11, 0x11, 0x66, 0x66, 0x68, 0x81, 0x11, 0x11, 0x11, 0x11, 0x11, 0x6C, 0x44, 
    0x00, 0xC6, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x6C, 0xEE, 
    0x00, 0xC6, 0x61, 0x68, 0x6B, 0xBB, 0xBB, 0xB6, 0x66, 0x66, 0x61, 0x11, 0x11, 0x66, 0x6C, 0xEE, 
    0x00, 0xAC, 0xCB, 0xCC, 0xCA, 0xA9, 0x44, 0xD4, 0x44, 0xAA, 0xCB, 0xB6, 0x66, 0x16, 0x6A, 0xEE, 
    0x00, 0xD4, 0xAC, 0xCA, 0xA9, 0x44, 0xD0, 0x00, 0x0D, 0xDD, 0x4A, 0xCC, 0xCB, 0x66, 0xA3, 0x33, 
    0x00, 0x00, 0x0D, 0x49, 0x9A, 0xCC, 0xBC, 0xA0, 0x00, 0x00, 0x00, 0xD7, 0x7E, 0xE3, 0x22, 0x23, 
    0x00, 0x00, 0xD4, 0x9A, 0xB8, 0x88, 0x88, 0x8B, 0xA0, 0x00, 0x00, 0xD7, 0x4E, 0xE3, 0x22, 0x23, 
    0x00, 0x0D, 0xD4, 0xAB, 0x88, 0x88, 0x88, 0x88, 0x8C, 0x7D, 0xD7, 0x74, 0xEE, 0x32, 0x22, 0x23, 
    0x00, 0x0D, 0x44, 0xC8, 0x88, 0x88, 0x88, 0x88, 0x88, 0xC7, 0x77, 0x44, 0xEE, 0x32, 0x22, 0x25, 
    0x00, 0x0D, 0x47, 0xBC, 0xCC, 0xAC, 0xCC, 0x88, 0x88, 0x8C, 0x77, 0x44, 0xEE, 0x22, 0x22, 0x25, 
    0x00, 0x04, 0x44, 0xD0, 0x00, 0x00, 0x7A, 0xAB, 0x88, 0x88, 0xA4, 0x44, 0xE3, 0x22, 0x22, 0x55, 
    0x00, 0x04, 0x99, 0x44, 0x44, 0x70, 0x0D, 0xD7, 0xAC, 0xBC, 0xA7, 0x4E, 0xE2, 0x22, 0x22, 0x22, 
    0x00, 0x07, 0xE3, 0x3E, 0xEE, 0xEE, 0xEE, 0x7D, 0x4A, 0xCE, 0x77, 0xEE, 0x32, 0x22, 0x22, 0x22, 
    0x00, 0x07, 0xE3, 0x23, 0x33, 0x3E, 0xEE, 0xEE, 0x74, 0x00, 0x7E, 0xEE, 0x32, 0x22, 0x22, 0x22, 
    0x00, 0x07, 0x7E, 0x22, 0x22, 0x23, 0x33, 0xEE, 0xE7, 0xEE, 0xEE, 0xE3, 0x22, 0x22, 0x22, 0x22, 
    0x00, 0x0D, 0x7E, 0x32, 0x22, 0x22, 0x22, 0x3E, 0xEE, 0xEE, 0xEE, 0x32, 0x22, 0x22, 0x22, 0x22, 
    0x00, 0x0D, 0x7E, 0xE3, 0x22, 0x22, 0x22, 0x22, 0x23, 0x33, 0x32, 0x22, 0x22, 0x22, 0x22, 0x22, 
    0x00, 0x00, 0xD7, 0xEE, 0x33, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
    0x00, 0x00, 0x0D, 0x7E, 0xEE, 0xE2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 
    0x00, 0x00, 0x00, 0xD7, 0x7E, 0xEE, 0xE3, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x23, 0x32, 
    0x00, 0x00, 0x00, 0x0D, 0xD7, 0xDD, 0xD7, 0xEE, 0xE2, 0x22, 0x22, 0x22, 0x33, 0xEE, 0xEE, 0xE4, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

StandardLimb object_tab_Standardlimb_007E48 = { 
    { 0, 2950, -400 }, OBJECT_TAB_LIMB_02 - 1, LIMB_DONE,
    object_tab_DL_003E10
};

StandardLimb object_tab_Standardlimb_007E54 = { 
    { 700, -50, 500 }, OBJECT_TAB_LIMB_03 - 1, OBJECT_TAB_LIMB_05 - 1,
    object_tab_DL_005988
};

StandardLimb object_tab_Standardlimb_007E60 = { 
    { 900, 0, 0 }, OBJECT_TAB_LIMB_04 - 1, LIMB_DONE,
    object_tab_DL_005A78
};

StandardLimb object_tab_Standardlimb_007E6C = { 
    { 900, 0, 0 }, LIMB_DONE, LIMB_DONE,
    object_tab_DL_005B60
};

StandardLimb object_tab_Standardlimb_007E78 = { 
    { 700, -50, -500 }, OBJECT_TAB_LIMB_06 - 1, OBJECT_TAB_LIMB_08 - 1,
    object_tab_DL_005668
};

StandardLimb object_tab_Standardlimb_007E84 = { 
    { 900, 0, 0 }, OBJECT_TAB_LIMB_07 - 1, LIMB_DONE,
    object_tab_DL_005758
};

StandardLimb object_tab_Standardlimb_007E90 = { 
    { 900, 0, 0 }, LIMB_DONE, LIMB_DONE,
    object_tab_DL_005840
};

StandardLimb object_tab_Standardlimb_007E9C = { 
    { 0, 0, 0 }, OBJECT_TAB_LIMB_09 - 1, LIMB_DONE,
    object_tab_DL_004F30
};

StandardLimb object_tab_Standardlimb_007EA8 = { 
    { 1700, 0, 0 }, LIMB_DONE, OBJECT_TAB_LIMB_0A - 1,
    object_tab_DL_005178
};

StandardLimb object_tab_Standardlimb_007EB4 = { 
    { 950, -50, 1050 }, OBJECT_TAB_LIMB_0B - 1, OBJECT_TAB_LIMB_0E - 1,
    object_tab_DL_004E00
};

StandardLimb object_tab_Standardlimb_007EC0 = { 
    { 1000, 0, 0 }, OBJECT_TAB_LIMB_0C - 1, LIMB_DONE,
    NULL
};

StandardLimb object_tab_Standardlimb_007ECC = { 
    { 0, 0, 0 }, LIMB_DONE, OBJECT_TAB_LIMB_0D - 1,
    object_tab_DL_004B70
};

StandardLimb object_tab_Standardlimb_007ED8 = { 
    { 1050, 0, 0 }, LIMB_DONE, LIMB_DONE,
    object_tab_DL_0047F8
};

StandardLimb object_tab_Standardlimb_007EE4 = { 
    { 950, -50, -1050 }, OBJECT_TAB_LIMB_0F - 1, LIMB_DONE,
    NULL
};

StandardLimb object_tab_Standardlimb_007EF0 = { 
    { 0, 0, 0 }, LIMB_DONE, OBJECT_TAB_LIMB_10 - 1,
    object_tab_DL_0046C8
};

StandardLimb object_tab_Standardlimb_007EFC = { 
    { 1000, 0, 0 }, OBJECT_TAB_LIMB_11 - 1, LIMB_DONE,
    object_tab_DL_004438
};

StandardLimb object_tab_Standardlimb_007F08 = { 
    { 1050, 0, 0 }, OBJECT_TAB_LIMB_12 - 1, LIMB_DONE,
    NULL
};

StandardLimb object_tab_Standardlimb_007F14 = { 
    { 0, 0, 0 }, LIMB_DONE, OBJECT_TAB_LIMB_13 - 1,
    object_tab_DL_004270
};

StandardLimb object_tab_Standardlimb_007F20 = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    object_tab_DL_003EF0
};

void* object_tab_Skel_007F78Limbs[] = {
    &object_tab_Standardlimb_007E48, /* OBJECT_TAB_LIMB_01 */
    &object_tab_Standardlimb_007E54, /* OBJECT_TAB_LIMB_02 */
    &object_tab_Standardlimb_007E60, /* OBJECT_TAB_LIMB_03 */
    &object_tab_Standardlimb_007E6C, /* OBJECT_TAB_LIMB_04 */
    &object_tab_Standardlimb_007E78, /* OBJECT_TAB_LIMB_05 */
    &object_tab_Standardlimb_007E84, /* OBJECT_TAB_LIMB_06 */
    &object_tab_Standardlimb_007E90, /* OBJECT_TAB_LIMB_07 */
    &object_tab_Standardlimb_007E9C, /* OBJECT_TAB_LIMB_08 */
    &object_tab_Standardlimb_007EA8, /* OBJECT_TAB_LIMB_09 */
    &object_tab_Standardlimb_007EB4, /* OBJECT_TAB_LIMB_0A */
    &object_tab_Standardlimb_007EC0, /* OBJECT_TAB_LIMB_0B */
    &object_tab_Standardlimb_007ECC, /* OBJECT_TAB_LIMB_0C */
    &object_tab_Standardlimb_007ED8, /* OBJECT_TAB_LIMB_0D */
    &object_tab_Standardlimb_007EE4, /* OBJECT_TAB_LIMB_0E */
    &object_tab_Standardlimb_007EF0, /* OBJECT_TAB_LIMB_0F */
    &object_tab_Standardlimb_007EFC, /* OBJECT_TAB_LIMB_10 */
    &object_tab_Standardlimb_007F08, /* OBJECT_TAB_LIMB_11 */
    &object_tab_Standardlimb_007F14, /* OBJECT_TAB_LIMB_12 */
    &object_tab_Standardlimb_007F20, /* OBJECT_TAB_LIMB_13 */
};

FlexSkeletonHeader object_tab_Skel_007F78 = { 
    { object_tab_Skel_007F78Limbs, ARRAY_COUNT(object_tab_Skel_007F78Limbs) }, 16
};

u8 object_tab_possiblePadding_007F84[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

s16 object_tab_Anim_0086ACFrameData[] = {
    0x0000, 0x0B86, 0xFE70, 0xC000, 0x0244, 0x01CB, 0xF662, 0xFDBC, 0xFE35, 0x0BA7, 0x0B86, 0x0B85, 0x0B84, 0x0B81, 
    0x0B7D, 0x0B79, 0x0B75, 0x0B70, 0x0B6C, 0x0B67, 0x0B63, 0x0B60, 0x0B5D, 0x0B5B, 0x0B5B, 0x0B5B, 0x0B5D, 0x0B5F, 
    0x0B61, 0x0B65, 0x0B68, 0x0B6C, 0x0B70, 0x0B74, 0x0B78, 0x0B7C, 0x0B7F, 0x0B82, 0x0B84, 0x0B86, 0xFE70, 0xFE72, 
    0xFE76, 0xFE7D, 0xFE86, 0xFE91, 0xFE9D, 0xFEA9, 0xFEB5, 0xFEC0, 0xFECB, 0xFED4, 0xFEDB, 0xFEE0, 0xFEE1, 0xFEE0, 
    0xFEDD, 0xFED7, 0xFED0, 0xFEC7, 0xFEBE, 0xFEB3, 0xFEA9, 0xFE9E, 0xFE94, 0xFE8A, 0xFE82, 0xFE7A, 0xFE75, 0xFE71, 
    0xFCA9, 0xFCB7, 0xFCE0, 0xFD1F, 0xFD6F, 0xFDCD, 0xFE33, 0xFE9D, 0xFF08, 0xFF6E, 0xFFCC, 0x001C, 0x005B, 0x0083, 
    0x0092, 0x0087, 0x0067, 0x0036, 0xFFF6, 0xFFAA, 0xFF55, 0xFEFB, 0xFE9D, 0xFE40, 0xFDE6, 0xFD91, 0xFD45, 0xFD05, 
    0xFCD4, 0xFCB4, 0xFF84, 0xFF83, 0xFF7F, 0xFF7A, 0xFF74, 0xFF6E, 0xFF67, 0xFF60, 0xFF59, 0xFF53, 0xFF4E, 0xFF4A, 
    0xFF47, 0xFF44, 0xFF44, 0xFF44, 0xFF46, 0xFF49, 0xFF4C, 0xFF50, 0xFF55, 0xFF5A, 0xFF60, 0xFF66, 0xFF6C, 0xFF72, 
    0xFF78, 0xFF7C, 0xFF80, 0xFF83, 0xFC12, 0xFBF3, 0xFB9D, 0xFB1B, 0xFA7B, 0xF9C8, 0xF90B, 0xF84C, 0xF795, 0xF6EA, 
    0xF651, 0xF5D2, 0xF570, 0xF530, 0xF51A, 0xF52B, 0xF55C, 0xF5A9, 0xF60E, 0xF688, 0xF713, 0xF7AB, 0xF84C, 0xF8F3, 
    0xF999, 0xFA3A, 0xFACF, 0xFB50, 0xFBB7, 0xFBFA, 0x112A, 0x1154, 0x11C6, 0x126F, 0x133C, 0x141F, 0x1508, 0x15ED, 
    0x16C6, 0x178C, 0x1838, 0x18C6, 0x1932, 0x1977, 0x198F, 0x197D, 0x1947, 0x18F3, 0x1883, 0x17FB, 0x175C, 0x16AC, 
    0x15ED, 0x1525, 0x1459, 0x1390, 0x12D2, 0x122A, 0x11A3, 0x114A, 0xB5A7, 0xB593, 0xB55C, 0xB507, 0xB49A, 0xB41B, 
    0xB391, 0xB301, 0xB270, 0xB1E6, 0xB168, 0xB0FB, 0xB0A6, 0xB06E, 0xB05B, 0xB06A, 0xB095, 0xB0D8, 0xB12F, 0xB195, 
    0xB208, 0xB282, 0xB301, 0xB37F, 0xB3FA, 0xB46C, 0xB4D3, 0xB52A, 0xB56C, 0xB597, 0x007C, 0x007D, 0x0081, 0x0086, 
    0x008C, 0x0092, 0x0099, 0x00A0, 0x00A7, 0x00AD, 0x00B2, 0x00B6, 0x00B9, 0x00BC, 0x00BC, 0x00BC, 0x00BA, 0x00B7, 
    0x00B4, 0x00B0, 0x00AB, 0x00A6, 0x00A0, 0x009A, 0x0094, 0x008E, 0x0088, 0x0084, 0x0080, 0x007D, 0xFC12, 0xFBF3, 
    0xFB9D, 0xFB1B, 0xFA7B, 0xF9C8, 0xF90B, 0xF84C, 0xF795, 0xF6EA, 0xF651, 0xF5D2, 0xF570, 0xF530, 0xF51A, 0xF52B, 
    0xF55C, 0xF5A9, 0xF60E, 0xF688, 0xF713, 0xF7AB, 0xF84C, 0xF8F3, 0xF999, 0xFA3A, 0xFACF, 0xFB50, 0xFBB7, 0xFBFA, 
    0x112A, 0x1154, 0x11C6, 0x126F, 0x133C, 0x141F, 0x1508, 0x15ED, 0x16C6, 0x178C, 0x1838, 0x18C6, 0x1932, 0x1977, 
    0x198F, 0x197D, 0x1947, 0x18F3, 0x1883, 0x17FB, 0x175C, 0x16AC, 0x15ED, 0x1525, 0x1459, 0x1390, 0x12D2, 0x122A, 
    0x11A3, 0x114A, 0xB592, 0xB57E, 0xB546, 0xB4EF, 0xB481, 0xB400, 0xB374, 0xB2E1, 0xB24F, 0xB1C2, 0xB142, 0xB0D4, 
    0xB07D, 0xB045, 0xB031, 0xB040, 0xB06C, 0xB0B0, 0xB108, 0xB170, 0xB1E5, 0xB261, 0xB2E1, 0xB362, 0xB3DE, 0xB452, 
    0xB4BB, 0xB513, 0xB557, 0xB582, 0x0000, 0x0008, 0x0010, 0x0017, 0x001F, 0x0024, 0x0028, 0x002A, 0x0028, 0x0024, 
    0x001F, 0x0017, 0x0010, 0x0008, 0x0000, 0xFFF8, 0xFFEE, 0xFFE3, 0xFFD8, 0xFFCE, 0xFFC5, 0xFFC0, 0xFFBE, 0xFFC0, 
    0xFFC5, 0xFFCE, 0xFFD8, 0xFFE3, 0xFFEE, 0xFFF8, 0x858B, 0x8562, 0x84FD, 0x846D, 0x83C2, 0x830C, 0x825B, 0x81C1, 
    0x8124, 0x8071, 0x7FB7, 0x7F09, 0x7E78, 0x7E17, 0x7DF6, 0x7E1B, 0x7E74, 0x7EF5, 0x7F92, 0x803D, 0x80EA, 0x818B, 
    0x8215, 0x8298, 0x832A, 0x83BF, 0x844F, 0x84CE, 0x8534, 0x8576, 0x010F, 0x00E8, 0x00B8, 0x0084, 0x0053, 0x0028, 
    0x000B, 0x0000, 0x000A, 0x0026, 0x004F, 0x0080, 0x00B3, 0x00E5, 0x010F, 0x0139, 0x0168, 0x0199, 0x01C6, 0x01EB, 
    0x0205, 0x020F, 0x0209, 0x01FA, 0x01E2, 0x01C5, 0x01A2, 0x017D, 0x0157, 0x0132, 0x00BC, 0x00CD, 0x0102, 0x014F, 
    0x01AD, 0x0211, 0x0271, 0x02C5, 0x0318, 0x0377, 0x03D9, 0x0435, 0x0482, 0x04B9, 0x04CF, 0x04BF, 0x048F, 0x0447, 
    0x03F1, 0x0396, 0x033F, 0x02F4, 0x02AE, 0x025F, 0x020C, 0x01BA, 0x016C, 0x0128, 0x00F1, 0x00CB, 0x0ED5, 0x0EDA, 
    0x0EE7, 0x0EFC, 0x0F17, 0x0F36, 0x0F58, 0x0F7C, 0x0F9F, 0x0FC1, 0x0FE0, 0x0FFB, 0x1010, 0x101E, 0x1022, 0x101F, 
    0x1014, 0x1004, 0x0FEE, 0x0FD5, 0x0FB9, 0x0F9B, 0x0F7C, 0x0F5C, 0x0F3E, 0x0F22, 0x0F09, 0x0EF3, 0x0EE3, 0x0ED8, 
    0xECCD, 0xECC2, 0xECA4, 0xEC77, 0xEC3C, 0xEBF8, 0xEBAD, 0xEB60, 0xEB12, 0xEAC8, 0xEA83, 0xEA49, 0xEA1B, 0xE9FD, 
    0xE9F3, 0xE9FB, 0xEA12, 0xEA36, 0xEA65, 0xEA9C, 0xEADA, 0xEB1C, 0xEB60, 0xEBA4, 0xEBE6, 0xEC23, 0xEC5B, 0xEC89, 
    0xECAD, 0xECC5, 0x8631, 0x864E, 0x869F, 0x871B, 0x87BA, 0x8873, 0x893D, 0x8A10, 0x8AE3, 0x8BAD, 0x8C66, 0x8D05, 
    0x8D81, 0x8DD2, 0x8DEF, 0x8DD9, 0x8D9A, 0x8D38, 0x8CBA, 0x8C24, 0x8B7C, 0x8AC9, 0x8A10, 0x8957, 0x88A4, 0x87FD, 
    0x8767, 0x86E8, 0x8687, 0x8648, 0xF0C3, 0xF08F, 0xF01D, 0xEF7B, 0xEEB5, 0xEDDB, 0xECF9, 0xEC1E, 0xEB57, 0xEAB2, 
    0xEA3C, 0xEA3C, 0xEAB7, 0xEB5E, 0xEBDF, 0xEC38, 0xEC99, 0xED00, 0xED6B, 0xEDD8, 0xEE46, 0xEEB1, 0xEF19, 0xEF7A, 
    0xEFD2, 0xF021, 0xF062, 0xF096, 0xF0B8, 0xF0C8, 0x0000, 0xFFCC, 0xFF82, 0xFF27, 0xFEBE, 0xFE4C, 0xFDD3, 0xFD57, 
    0xFCDE, 0xFC69, 0xFBFD, 0xFB9E, 0xFB4F, 0xFB15, 0xFAF3, 0xFAEC, 0xFB01, 0xFB2D, 0xFB6C, 0xFBBB, 0xFC14, 0xFC75, 
    0xFCD9, 0xFD3D, 0xFD9C, 0xFDF2, 0xFE63, 0xFEF9, 0xFF8B, 0xFFF0, 0x0A6E, 0x0A40, 0x09FF, 0x09AE, 0x0951, 0x08EB, 
    0x0880, 0x0812, 0x07A6, 0x073F, 0x06DF, 0x068B, 0x0645, 0x0611, 0x05F3, 0x05ED, 0x0600, 0x0627, 0x065F, 0x06A4, 
    0x06F4, 0x074A, 0x07A2, 0x07FB, 0x084F, 0x089C, 0x0900, 0x0985, 0x0A06, 0x0A60, 0x0000, 0xFF99, 0xFF1B, 0xFE8C, 
    0xFDEF, 0xFD4A, 0xFCA1, 0xFBFA, 0xFB59, 0xFAC3, 0xFA3D, 0xF9CD, 0xF975, 0xF93D, 0xF928, 0xF945, 0xF999, 0xFA1B, 
    0xFAC0, 0xFB7F, 0xFC4C, 0xFD1F, 0xFDEC, 0xFEAB, 0xFF50, 0xFFD3, 0x002C, 0x005D, 0x0065, 0x0046, 0xEF60, 0xEF53, 
    0xEF2C, 0xEEF2, 0xEEA6, 0xEE4F, 0xEDEF, 0xED8B, 0xED27, 0xECC7, 0xEC70, 0xEC25, 0xEBEA, 0xEBC3, 0xEBB6, 0xEBC0, 
    0xEBDE, 0xEC0C, 0xEC48, 0xEC8F, 0xECDF, 0xED33, 0xED8B, 0xEDE3, 0xEE37, 0xEE87, 0xEECE, 0xEF0A, 0xEF38, 0xEF56, 
    0x1333, 0x1340, 0x1363, 0x1398, 0x13DD, 0x142D, 0x1484, 0x14DF, 0x153A, 0x1591, 0x15E1, 0x1626, 0x165B, 0x167E, 
    0x168A, 0x1681, 0x1666, 0x163C, 0x1605, 0x15C4, 0x157C, 0x152F, 0x14DF, 0x148F, 0x1442, 0x13FA, 0x13B9, 0x1382, 
    0x1358, 0x133D, 0x85B4, 0x85D2, 0x8627, 0x86A8, 0x874E, 0x880E, 0x88E1, 0x89BD, 0x8A99, 0x8B6B, 0x8C2C, 0x8CD2, 
    0x8D53, 0x8DA7, 0x8DC5, 0x8DAE, 0x8D6D, 0x8D07, 0x8C83, 0x8BE6, 0x8B38, 0x8A7D, 0x89BD, 0x88FC, 0x8842, 0x8793, 
    0x86F7, 0x8673, 0x860D, 0x85CB, 0xF1BD, 0xF19F, 0xF15A, 0xF0F6, 0xF07B, 0xEFF0, 0xEF5D, 0xEEC8, 0xEE3A, 0xEDBA, 
    0xED4F, 0xED01, 0xECE8, 0xED08, 0xED4C, 0xED9E, 0xEDE9, 0xEE2F, 0xEE7F, 0xEED7, 0xEF35, 0xEF95, 0xEFF5, 0xF053, 
    0xF0AB, 0xF0FC, 0xF142, 0xF17B, 0xF1A4, 0xF1BB, 0xF709, 0xF72C, 0xF761, 0xF7A6, 0xF7F8, 0xF852, 0xF8B1, 0xF912, 
    0xF971, 0xF9CB, 0xFA1C, 0xFA74, 0xFAD9, 0xFB3D, 0xFB8F, 0xFBC1, 0xFBC3, 0xFB96, 0xFB49, 0xFAE4, 0xFA6F, 0xF9F3, 
    0xF978, 0xF906, 0xF8A4, 0xF846, 0xF7E2, 0xF784, 0xF738, 0xF70B, 0x0000, 0xFF61, 0xFE95, 0xFDA8, 0xFCA6, 0xFB98, 
    0xFA8B, 0xF98A, 0xF8A0, 0xF7D8, 0xF73E, 0xF6DF, 0xF6BC, 0xF6CF, 0xF710, 0xF77A, 0xF804, 0xF8BB, 0xF9A6, 0xFAB3, 
    0xFBD1, 0xFCEE, 0xFDF8, 0xFEDF, 0xFF91, 0x0012, 0x006B, 0x009A, 0x009B, 0x0069, 
};

JointIndex object_tab_Anim_0086ACJointIndices[] = {
    { 0x0000, 0x000A, 0x0028 },
    { 0x0003, 0x0046, 0x0003 },
    { 0x0064, 0x0004, 0x0082 },
    { 0x0000, 0x0000, 0x00A0 },
    { 0x0005, 0x0006, 0x00BE },
    { 0x00DC, 0x0007, 0x00FA },
    { 0x0000, 0x0000, 0x0118 },
    { 0x0008, 0x0009, 0x0136 },
    { 0x0000, 0x0154, 0x0172 },
    { 0x0000, 0x0190, 0x01AE },
    { 0x01CC, 0x01EA, 0x0208 },
    { 0x0000, 0x0000, 0x0226 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0244, 0x0262, 0x0280 },
    { 0x029E, 0x02BC, 0x02DA },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x02F8 },
    { 0x0000, 0x0316, 0x0334 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader object_tab_Anim_0086AC = { 
    { 30 }, object_tab_Anim_0086ACFrameData,
    object_tab_Anim_0086ACJointIndices, 10
};

