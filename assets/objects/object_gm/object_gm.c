#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gm.h"

s16 object_gm_Anim_0002B8FrameData[] = {
    0x0000, 0x033E, 0x4000, 0xC000, 0xE38E, 0x1B06, 0x0135, 0x1A50, 0xE9F5, 0xF3E9, 0xCB4B, 0x2A92, 0xAAAB, 0x260A, 
    0xD56E, 0x9C68, 0xFD8E, 0xE997, 0x0CCD, 0x0CE9, 0x0D2D, 0x0D7E, 0x0DC1, 0x0DDE, 0x0DCF, 0x0DA8, 0x0D72, 0x0D38, 
    0x0D03, 0x0CDC, 0x0CCD, 0x0CE9, 0x0D2D, 0x0D7E, 0x0DC1, 0x0DDE, 0x0DD2, 0x0DB3, 0x0D87, 0x0D55, 0x0D23, 0x0CF7, 
    0x0CD9, 0xE795, 0xE7A8, 0xE7D7, 0xE80D, 0xE83A, 0xE84D, 0xE843, 0xE829, 0xE806, 0xE7DE, 0xE7BA, 0xE79F, 0xE795, 
    0xE7A8, 0xE7D7, 0xE80D, 0xE83A, 0xE84D, 0xE845, 0xE831, 0xE814, 0xE7F2, 0xE7D0, 0xE7B2, 0xE79D, 0x3725, 0x3749, 
    0x379E, 0x3802, 0x3854, 0x3876, 0x3864, 0x3835, 0x37F4, 0x37AC, 0x3769, 0x3738, 0x3725, 0x3749, 0x379E, 0x3802, 
    0x3854, 0x3876, 0x3868, 0x3843, 0x380D, 0x37D0, 0x3792, 0x375B, 0x3734, 0x390B, 0x38AE, 0x37C6, 0x3699, 0x356B, 
    0x3484, 0x3427, 0x3484, 0x356B, 0x3699, 0x37C6, 0x38AE, 0x390B, 0x38AE, 0x37C6, 0x3699, 0x356B, 0x3484, 0x3427, 
    0x346C, 0x351F, 0x3614, 0x371E, 0x3812, 0x38C5, 0x054C, 0x04F7, 0x0422, 0x030E, 0x01FA, 0x0126, 0x00D1, 0x0126, 
    0x01FA, 0x030E, 0x0422, 0x04F7, 0x054C, 0x04F7, 0x0422, 0x030E, 0x01FA, 0x0126, 0x00D1, 0x0110, 0x01B4, 0x0294, 
    0x0388, 0x0468, 0x050C, 0x0342, 0x0352, 0x0379, 0x03AB, 0x03DD, 0x0404, 0x0413, 0x0404, 0x03DD, 0x03AB, 0x0379, 
    0x0352, 0x0342, 0x0352, 0x0379, 0x03AB, 0x03DD, 0x0404, 0x0413, 0x0407, 0x03EA, 0x03C1, 0x0395, 0x036C, 0x034E, 
    0x186B, 0x1858, 0x1829, 0x17F3, 0x17C6, 0x17B3, 0x17BD, 0x17D7, 0x17FA, 0x1822, 0x1846, 0x1861, 0x186B, 0x1858, 
    0x1829, 0x17F3, 0x17C6, 0x17B3, 0x17BB, 0x17CF, 0x17EC, 0x180E, 0x1830, 0x184E, 0x1863, 0x3725, 0x3749, 0x379E, 
    0x3802, 0x3854, 0x3876, 0x3864, 0x3835, 0x37F4, 0x37AC, 0x3769, 0x3738, 0x3725, 0x3749, 0x379E, 0x3802, 0x3854, 
    0x3876, 0x3868, 0x3843, 0x380D, 0x37D0, 0x3792, 0x375B, 0x3734, 0xF7DA, 0xF865, 0xF9C1, 0xFB85, 0xFD49, 0xFEA4, 
    0xFF2F, 0xFEA4, 0xFD49, 0xFB85, 0xF9C1, 0xF865, 0xF7DA, 0xF865, 0xF9C1, 0xFB85, 0xFD49, 0xFEA4, 0xFF2F, 0xFEC7, 
    0xFDBB, 0xFC4C, 0xFABD, 0xF94E, 0xF842, 0x05B0, 0x0566, 0x04A3, 0x038E, 0x0251, 0x0114, 0x0000, 0xFEEC, 0xFDAF, 
    0xFC72, 0xFB5D, 0xFA9A, 0xFA50, 0xFA9C, 0xFB66, 0xFC80, 0xFDBF, 0xFEF9, 0x0000, 0x00F5, 0x0205, 0x0319, 0x0418, 
    0x04EB, 0x057B, 0xE0A1, 0xE0D8, 0xE163, 0xE217, 0xE2CC, 0xE357, 0xE38E, 0xE357, 0xE2CC, 0xE217, 0xE163, 0xE0D8, 
    0xE0A1, 0xE0D8, 0xE163, 0xE217, 0xE2CC, 0xE357, 0xE38E, 0xE365, 0xE2FA, 0xE267, 0xE1C8, 0xE135, 0xE0CA, 0x0000, 
    
};

JointIndex object_gm_Anim_0002B8JointIndices[] = {
    { 0x0000, 0x0001, 0x0000 },
    { 0x0002, 0x0000, 0x0000 },
    { 0x0003, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0004 },
    { 0x0000, 0x0000, 0x0005 },
    { 0x0006, 0x0007, 0x0008 },
    { 0x0000, 0x0000, 0x0004 },
    { 0x0000, 0x0000, 0x0005 },
    { 0x0006, 0x0009, 0x0008 },
    { 0x0002, 0x0012, 0x0002 },
    { 0x0000, 0x002B, 0x0044 },
    { 0x000A, 0x000B, 0x000C },
    { 0x005D, 0x0076, 0x008F },
    { 0x0000, 0x00A8, 0x00C1 },
    { 0x000D, 0x000E, 0x000F },
    { 0x0010, 0x0011, 0x00DA },
    { 0x0000, 0x00F3, 0x010C },
};

AnimationHeader object_gm_Anim_0002B8 = { 
    { 25 }, object_gm_Anim_0002B8FrameData,
    object_gm_Anim_0002B8JointIndices, 18
};
