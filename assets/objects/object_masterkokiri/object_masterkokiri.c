#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_masterkokiri.h"

s16 object_masterkokiri_Anim_0004A8FrameData[] = {
    0x0000, 0x0981, 0xFF08, 0xC000, 0xFF1D, 0x01DA, 0xBF37, 0xFF45, 0x0981, 0x097F, 0x0971, 0x0958, 0x093A, 0x091B, 
    0x08FF, 0x08EC, 0x08E5, 0x08F0, 0x0911, 0x094D, 0x0A6C, 0x0C44, 0x0D71, 0x0DC6, 0x0DFF, 0x0E1C, 0x0E1E, 0x0E06, 
    0x0DD2, 0x0D84, 0x0D07, 0x0C02, 0x0AB2, 0x096E, 0x088C, 0x0864, 0x08B7, 0x08FA, 0xFF08, 0xFF08, 0xFF07, 0xFF05, 
    0xFF03, 0xFF01, 0xFF01, 0xFF01, 0xFF04, 0xFF08, 0xFF10, 0xFF1B, 0xFF4A, 0xFF93, 0xFFB6, 0xFFAB, 0xFF93, 0xFF72, 
    0xFF4E, 0xFF2B, 0xFF0C, 0xFEF7, 0xFEF1, 0xFF04, 0xFF25, 0xFF44, 0xFF54, 0xFF41, 0xFF1B, 0xFF04, 0x7BED, 0x7BEE, 
    0x7BF2, 0x7BF9, 0x7C03, 0x7C10, 0x7C1D, 0x7C2C, 0x7C3A, 0x7C48, 0x7C54, 0x7C5E, 0x7C66, 0x7C6A, 0x7C6A, 0x7C65, 
    0x7C5B, 0x7C4A, 0x7C33, 0x7C14, 0x7BED, 0x7B4F, 0x7A1F, 0x78DA, 0x77FC, 0x77FE, 0x78E8, 0x7A3A, 0x7B69, 0x7BED, 
    0xFC76, 0xFC84, 0xFCF5, 0xFDE2, 0xFFF2, 0x0000, 0xFFF2, 0xFFF2, 0x0000, 0xFFF3, 0xFFF2, 0xFCF3, 0xF6B2, 0xF16C, 
    0xF210, 0xF350, 0xF498, 0xF5B6, 0xF692, 0xF71E, 0xF755, 0xF76A, 0xF754, 0xF729, 0xF90D, 0xFECA, 0x0000, 0x0000, 
    0x0000, 0x0000, 0xEF30, 0xEF32, 0xEF3E, 0xEF53, 0xEF74, 0xEFB6, 0xEFED, 0xF010, 0xF015, 0xEFF2, 0xEF99, 0xEF3E, 
    0xEDF3, 0xEBF0, 0xEC38, 0xECBF, 0xED3D, 0xEDA2, 0xEDE9, 0xEE13, 0xEE23, 0xEE29, 0xEE23, 0xEE16, 0xEE96, 0xEF60, 
    0xF0CC, 0xF102, 0xF06D, 0xEFFA, 0x3183, 0x3152, 0x2FE1, 0x2CFA, 0x2704, 0x260F, 0x2577, 0x24EB, 0x247F, 0x24B6, 
    0x2545, 0x2DE8, 0x4279, 0x5E89, 0x6E18, 0x7043, 0x706F, 0x6F45, 0x6D44, 0x6AC8, 0x6802, 0x64DD, 0x60AB, 0x5709, 
    0x46F4, 0x2F3D, 0x2545, 0x230E, 0x2409, 0x2567, 0xEB22, 0xEB76, 0xEDF8, 0xF357, 0xFFAB, 0x0000, 0xFFAB, 0xFFAB, 
    0x0000, 0xFFAC, 0xFFAB, 0xEDEA, 0xCEE7, 0xBD0F, 0xBEDC, 0xC2A7, 0xC6ED, 0xCB01, 0xCE61, 0xD0A5, 0xD18D, 0xD1E7, 
    0xD18B, 0xD0D2, 0xD952, 0xF8BB, 0x0000, 0x0000, 0x0000, 0x0000, 0x3C72, 0x3C6C, 0x3C43, 0x3BF4, 0x3B85, 0x3AFB, 
    0x3A5B, 0x39A9, 0x38EB, 0x3826, 0x375E, 0x3699, 0x35DB, 0x352A, 0x348A, 0x3400, 0x3391, 0x3342, 0x3318, 0x3316, 
    0x332B, 0x3353, 0x338E, 0x33D9, 0x3431, 0x3497, 0x3507, 0x3581, 0x3602, 0x3688, 0x076D, 0x076A, 0x074D, 0x071E, 
    0x06D5, 0x065B, 0x05F7, 0x05BA, 0x05B2, 0x05F0, 0x0694, 0x075C, 0x09E2, 0x081B, 0x0072, 0xFE35, 0xFCF5, 0xFC7E, 
    0xFCA1, 0xFD3F, 0xFE49, 0xFFC2, 0x01F1, 0x05CC, 0x07DC, 0x06F6, 0x048B, 0x043A, 0x0520, 0x05E0, 0x082E, 0x0807, 
    0x06D9, 0x0427, 0xFD55, 0xFDF6, 0xFED9, 0xFF51, 0xFF51, 0xFF63, 0xFEC3, 0x086F, 0x1445, 0x0BF9, 0xFC9B, 0xF6D5, 
    0xF243, 0xEF16, 0xED6B, 0xED5C, 0xEF00, 0xF1F4, 0xF71D, 0x01D6, 0x095B, 0x004D, 0x016B, 0x0212, 0x006E, 0xFEC2, 
    0x038A, 0x037C, 0x030B, 0x021E, 0x000E, 0x0000, 0x0000, 0x000D, 0x000D, 0x000D, 0x0000, 0x030D, 0x094E, 0x0E94, 
    0x0DF0, 0x0CB0, 0x0B68, 0x0A4A, 0x096E, 0x08E2, 0x08AB, 0x0896, 0x08AC, 0x08D7, 0x06F3, 0x0136, 0x0000, 0x000C, 
    0x0000, 0x0000, 0x10D0, 0x10CE, 0x10C2, 0x10AD, 0x108C, 0x104A, 0x1013, 0x0FF0, 0x0FEB, 0x100E, 0x1067, 0x10C2, 
    0x120D, 0x1410, 0x13C8, 0x1341, 0x12C3, 0x125E, 0x1217, 0x11ED, 0x11DD, 0x11D7, 0x11DD, 0x11EA, 0x116A, 0x10A0, 
    0x0F34, 0x0EFE, 0x0F93, 0x1006, 0x3183, 0x3152, 0x2FE1, 0x2CFA, 0x2704, 0x260F, 0x2554, 0x24EB, 0x24A2, 0x24B5, 
    0x2522, 0x2DE8, 0x4279, 0x5E89, 0x6E18, 0x7043, 0x706F, 0x6F45, 0x6D44, 0x6AC8, 0x6802, 0x64DD, 0x60AB, 0x5709, 
    0x46F4, 0x2F3D, 0x2545, 0x2331, 0x2409, 0x2567, 0xEB22, 0xEB76, 0xEDF8, 0xF357, 0xFFAC, 0x0000, 0x0000, 0xFFAB, 
    0xFFAC, 0xFFAC, 0x0000, 0xEDEA, 0xCEE7, 0xBD0F, 0xBEDC, 0xC2A7, 0xC6ED, 0xCB01, 0xCE61, 0xD0A5, 0xD18D, 0xD1E7, 
    0xD18B, 0xD0D2, 0xD952, 0xF8BC, 0x0000, 0xFFAC, 0x0000, 0x0000, 0xC38E, 0xC394, 0xC3BD, 0xC40C, 0xC47B, 0xC505, 
    0xC5A5, 0xC657, 0xC715, 0xC7DA, 0xC8A2, 0xC967, 0xCA25, 0xCAD6, 0xCB76, 0xCC00, 0xCC6F, 0xCCBE, 0xCCE8, 0xCCEA, 
    0xCCD5, 0xCCAD, 0xCC72, 0xCC27, 0xCBCF, 0xCB69, 0xCAF9, 0xCA7F, 0xC9FE, 0xC978, 0xF893, 0xF896, 0xF8B3, 0xF8E2, 
    0xF92B, 0xF9A5, 0xFA09, 0xFA46, 0xFA4E, 0xFA10, 0xF96C, 0xF8A4, 0xF61E, 0xF7E5, 0xFF8E, 0x01CB, 0x030B, 0x0382, 
    0x035F, 0x02C1, 0x01B7, 0x003E, 0xFE0F, 0xFA34, 0xF824, 0xF90A, 0xFB75, 0xFBC6, 0xFAE0, 0xFA20, 0x082E, 0x0807, 
    0x06D9, 0x0427, 0xFD54, 0xFDF6, 0xFEA5, 0xFF51, 0xFF85, 0xFF63, 0xFE8F, 0x086F, 0x1445, 0x0BF9, 0xFC9B, 0xF6D5, 
    0xF243, 0xEF16, 0xED6B, 0xED5C, 0xEF00, 0xF1F4, 0xF71D, 0x01D6, 0x095B, 0x004D, 0x016B, 0x0245, 0x006E, 0xFEC2, 
    0xF28E, 0xF295, 0xF2CA, 0xF32D, 0xF3B9, 0xF467, 0xF52F, 0xF60D, 0xF6F8, 0xF7EC, 0xF8E0, 0xF9CF, 0xFAB2, 0xFB83, 
    0xFC3C, 0xFCD4, 0xFD47, 0xFD8E, 0xFD42, 0xFC37, 0xFAB9, 0xF917, 0xF7A0, 0xF6A1, 0xF643, 0xF651, 0xF68A, 0xF6AC, 
    0xF687, 0xF64B, 
};

JointIndex object_masterkokiri_Anim_0004A8JointIndices[] = {
    { 0x0000, 0x0008, 0x0026 },
    { 0x0003, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0004 },
    { 0x0000, 0x0000, 0x0005 },
    { 0x0000, 0x0000, 0x0006 },
    { 0x0000, 0x0000, 0x0007 },
    { 0x0000, 0x0000, 0x0005 },
    { 0x0000, 0x0000, 0x0006 },
    { 0x0000, 0x0000, 0x0044 },
    { 0x0062, 0x0080, 0x009E },
    { 0x0000, 0x0000, 0x00BC },
    { 0x00DA, 0x00F8, 0x0116 },
    { 0x0134, 0x0152, 0x0170 },
    { 0x0000, 0x0000, 0x018E },
    { 0x01AC, 0x01CA, 0x01E8 },
    { 0x0000, 0x0000, 0x0206 },
};

AnimationHeader object_masterkokiri_Anim_0004A8 = { 
    { 30 }, object_masterkokiri_Anim_0004A8FrameData,
    object_masterkokiri_Anim_0004A8JointIndices, 8
};

