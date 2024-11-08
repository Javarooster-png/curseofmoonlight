#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_masterzoora.h"

s16 sZoraShopkeeperAnimFrameData[] = {
    0x0000, 0x0E56, 0x012D, 0x9F68, 0xC000, 0xE335, 0xFD3C, 0x0E56, 0x0E57, 0x0E58, 0x0E5B, 0x0E5E, 0x0E62, 0x0E66, 
    0x0E6A, 0x0E6F, 0x0E73, 0x0E77, 0x0E7B, 0x0E7E, 0x0E81, 0x0E82, 0x0E83, 0x0E82, 0x0E80, 0x0E7E, 0x0E7A, 0x0E76, 
    0x0E71, 0x0E6C, 0x0E68, 0x0E63, 0x0E5F, 0x0E5B, 0x0E59, 0x0E57, 0x012D, 0x012C, 0x012B, 0x0128, 0x0125, 0x0121, 
    0x011D, 0x0119, 0x0114, 0x0110, 0x010C, 0x0108, 0x0105, 0x0103, 0x0101, 0x0100, 0x0101, 0x0103, 0x0106, 0x0109, 
    0x010D, 0x0112, 0x0117, 0x011B, 0x0120, 0x0124, 0x0128, 0x012B, 0x012C, 0x7B85, 0x7B8B, 0x7B9D, 0x7BB8, 0x7BDC, 
    0x7C07, 0x7C37, 0x7C6C, 0x7CA2, 0x7CD9, 0x7D10, 0x7D44, 0x7D74, 0x7D9F, 0x7DC3, 0x7DDF, 0x7DF0, 0x7DF6, 0x7DEA, 
    0x7DC8, 0x7D95, 0x7D54, 0x7D0B, 0x7CBE, 0x7C70, 0x7C27, 0x7BE6, 0x7BB3, 0x7B91, 0x0C4E, 0x0C52, 0x0C5D, 0x0C6D, 
    0x0C82, 0x0C9A, 0x0CB4, 0x0CCF, 0x0CE9, 0x0D01, 0x0D16, 0x0D26, 0x0D31, 0x0D35, 0x0D32, 0x0D2B, 0x0D1F, 0x0D11, 
    0x0CFF, 0x0CEC, 0x0CD7, 0x0CC2, 0x0CAC, 0x0C97, 0x0C84, 0x0C72, 0x0C64, 0x0C58, 0x0C51, 0xEDFE, 0xEDE9, 0xEDAC, 
    0xED50, 0xECDB, 0xEC55, 0xEBC4, 0xEB2F, 0xEA9E, 0xEA17, 0xE9A3, 0xE946, 0xE90A, 0xE8F4, 0xE903, 0xE92C, 0xE96B, 
    0xE9BE, 0xEA1F, 0xEA8C, 0xEB01, 0xEB79, 0xEBF2, 0xEC66, 0xECD3, 0xED35, 0xED87, 0xEDC7, 0xEDF0, 0x607B, 0x6073, 
    0x605C, 0x603A, 0x600F, 0x5FDD, 0x5FA8, 0x5F71, 0x5F3B, 0x5F0A, 0x5EDE, 0x5EBC, 0x5EA6, 0x5E9E, 0x5EA3, 0x5EB3, 
    0x5ECA, 0x5EE9, 0x5F0D, 0x5F35, 0x5F60, 0x5F8C, 0x5FB9, 0x5FE4, 0x600C, 0x6030, 0x604F, 0x6066, 0x6075, 0xDE2F, 
    0xDE3D, 0xDE67, 0xDEA6, 0xDEF8, 0xDF58, 0xDFC3, 0xE033, 0xE0A6, 0xE116, 0xE181, 0xE1E1, 0xE233, 0xE272, 0xE29C, 
    0xE2AA, 0xE299, 0xE26B, 0xE223, 0xE1C7, 0xE15C, 0xE0E7, 0xE06C, 0xDFF2, 0xDF7D, 0xDF12, 0xDEB6, 0xDE6E, 0xDE40, 
    0xD602, 0xD606, 0xD610, 0xD620, 0xD635, 0xD64D, 0xD669, 0xD686, 0xD6A5, 0xD6C3, 0xD6E0, 0xD6FC, 0xD714, 0xD729, 
    0xD739, 0xD743, 0xD747, 0xD742, 0xD732, 0xD71B, 0xD6FE, 0xD6DC, 0xD6B7, 0xD692, 0xD66D, 0xD64B, 0xD62E, 0xD617, 
    0xD608, 0xFB74, 0xFB5A, 0xFB11, 0xFA9F, 0xFA0C, 0xF95D, 0xF89A, 0xF7CA, 0xF6F2, 0xF61B, 0xF54B, 0xF488, 0xF3D9, 
    0xF346, 0xF2D4, 0xF28A, 0xF271, 0xF297, 0xF304, 0xF3A9, 0xF47A, 0xF56A, 0xF66E, 0xF777, 0xF87B, 0xF96B, 0xFA3C, 
    0xFAE1, 0xFB4D, 0xF623, 0xF612, 0xF5E4, 0xF59C, 0xF53E, 0xF4CF, 0xF454, 0xF3CF, 0xF347, 0xF2BE, 0xF23A, 0xF1BE, 
    0xF150, 0xF0F2, 0xF0AA, 0xF07B, 0xF06B, 0xF084, 0xF0C8, 0xF131, 0xF1B5, 0xF24E, 0xF2F3, 0xF39B, 0xF440, 0xF4D8, 
    0xF55D, 0xF5C5, 0xF60A, 0x2C73, 0x2C70, 0x2C66, 0x2C57, 0x2C44, 0x2C2D, 0x2C13, 0x2BF7, 0x2BDA, 0x2BBD, 0x2BA1, 
    0x2B88, 0x2B71, 0x2B5E, 0x2B50, 0x2B49, 0x2B4A, 0x2B52, 0x2B61, 0x2B78, 0x2B94, 0x2BB3, 0x2BD4, 0x2BF6, 0x2C16, 
    0x2C34, 0x2C4D, 0x2C61, 0x2C6F, 0x1783, 0x1787, 0x1792, 0x17A4, 0x17BC, 0x17D8, 0x17F8, 0x181A, 0x183E, 0x1862, 
    0x1884, 0x18A4, 0x18C0, 0x18D7, 0x18E5, 0x18EB, 0x18E6, 0x18D6, 0x18BD, 0x189E, 0x187A, 0x1853, 0x182C, 0x1806, 
    0x17E3, 0x17C3, 0x17A9, 0x1794, 0x1787, 0x987D, 0x9876, 0x9862, 0x9843, 0x981B, 0x97EB, 0x97B6, 0x977D, 0x9743, 
    0x9709, 0x96D2, 0x96A0, 0x9676, 0x9656, 0x9643, 0x963F, 0x964E, 0x966F, 0x969C, 0x96D1, 0x970B, 0x9748, 0x9784, 
    0x97BE, 0x97F3, 0x9821, 0x9847, 0x9864, 0x9877, 0xD3A6, 0xD3B7, 0xD3E8, 0xD434, 0xD497, 0xD50D, 0xD590, 0xD61D, 
    0xD6AF, 0xD741, 0xD7CD, 0xD84F, 0xD8C1, 0xD91D, 0xD95D, 0xD97B, 0xD972, 0xD942, 0xD8ED, 0xD878, 0xD7EA, 0xD74D, 
    0xD6A8, 0xD604, 0xD566, 0xD4D6, 0xD45B, 0xD3FB, 0xD3BC, 0x0455, 0x045F, 0x047A, 0x04A4, 0x04DA, 0x051B, 0x0563, 
    0x05B1, 0x0602, 0x0653, 0x06A3, 0x06EF, 0x0735, 0x0773, 0x07A6, 0x07CD, 0x07E6, 0x07EE, 0x07DC, 0x07AB, 0x0761, 
    0x0704, 0x0699, 0x0628, 0x05B6, 0x0549, 0x04E9, 0x049B, 0x0468, 0xE3FF, 0xE3F5, 0xE3DB, 0xE3B2, 0xE37C, 0xE33B, 
    0xE2F3, 0xE2A5, 0xE254, 0xE202, 0xE1B2, 0xE168, 0xE125, 0xE0EE, 0xE0C5, 0xE0AE, 0xE0AC, 0xE0C0, 0xE0EA, 0xE12A, 
    0xE17A, 0xE1D5, 0xE235, 0xE296, 0xE2F4, 0xE349, 0xE393, 0xE3CC, 0xE3F1, 0xE80C, 0xE80C, 0xE80B, 0xE80A, 0xE809, 
    0xE807, 0xE806, 0xE804, 0xE802, 0xE800, 0xE7FE, 0xE7FC, 0xE7FA, 0xE7F9, 0xE7F7, 0xE7F6, 0xE7F6, 0xE7F5, 0xE7F6, 
    0xE7F7, 0xE7F9, 0xE7FB, 0xE7FE, 0xE801, 0xE804, 0xE806, 0xE808, 0xE80A, 0xE80C, 0x02CB, 0x02C6, 0x02B8, 0x02A2, 
    0x0286, 0x0264, 0x023D, 0x0214, 0x01E9, 0x01BD, 0x0192, 0x0168, 0x0142, 0x0120, 0x0103, 0x00EE, 0x00DF, 0x00DB, 
    0x00E4, 0x00FF, 0x0128, 0x015B, 0x0195, 0x01D3, 0x0210, 0x024B, 0x027E, 0x02A7, 0x02C2, 0x0A64, 0x0A50, 0x0A15, 
    0x09BB, 0x0944, 0x08B8, 0x0819, 0x076E, 0x06BC, 0x0607, 0x0554, 0x04A9, 0x040B, 0x037E, 0x0308, 0x02AD, 0x0273, 
    0x025F, 0x0287, 0x02F7, 0x039F, 0x0473, 0x0563, 0x0661, 0x0760, 0x0850, 0x0923, 0x09CC, 0x0A3C, 0x0000, 0x0004, 
    0x000F, 0x0022, 0x003A, 0x0057, 0x0078, 0x009D, 0x00C5, 0x00EF, 0x011A, 0x0145, 0x0170, 0x019A, 0x01C1, 0x01E6, 
    0x0208, 0x0225, 0x023D, 0x024F, 0x025B, 0x025F, 0x0245, 0x0200, 0x019F, 0x012F, 0x00C0, 0x005F, 0x001A, 0x0000, 
    0x0016, 0x0057, 0x00BD, 0x0144, 0x01E7, 0x02A3, 0x0373, 0x0452, 0x053D, 0x062E, 0x0721, 0x0812, 0x08FC, 0x09DB, 
    0x0AAB, 0x0B67, 0x0C0B, 0x0C91, 0x0CF7, 0x0D38, 0x0D4E, 0x0CBC, 0x0B3A, 0x0918, 0x06A7, 0x0436, 0x0214, 0x0092, 
    0xA1DD, 0xA1E9, 0xA20D, 0xA245, 0xA28F, 0xA2E9, 0xA350, 0xA3C3, 0xA43D, 0xA4BE, 0xA543, 0xA5C8, 0xA64D, 0xA6CE, 
    0xA748, 0xA7BB, 0xA822, 0xA87C, 0xA8C6, 0xA8FE, 0xA922, 0xA92E, 0xA8DE, 0xA809, 0xA6DD, 0xA586, 0xA42E, 0xA302, 
    0xA22D, 0x0000, 0x0005, 0x0013, 0x0029, 0x0046, 0x006A, 0x0093, 0x00C0, 0x00F1, 0x0124, 0x0158, 0x018D, 0x01C1, 
    0x01F4, 0x0225, 0x0252, 0x027B, 0x029E, 0x02BC, 0x02D2, 0x02E0, 0x02E5, 0x02C5, 0x0271, 0x01FA, 0x0172, 0x00EA, 
    0x0074, 0x0020, 0x0000, 0xFFED, 0xFFB8, 0xFF63, 0xFEF3, 0xFE6B, 0xFDCF, 0xFD23, 0xFC6A, 0xFBA7, 0xFADF, 0xFA15, 
    0xF94D, 0xF88B, 0xF7D2, 0xF725, 0xF689, 0xF601, 0xF591, 0xF53D, 0xF507, 0xF4F5, 0xF56E, 0xF6AE, 0xF873, 0xFA7A, 
    0xFC81, 0xFE46, 0xFF87, 0xE308, 0xE30D, 0xE31B, 0xE331, 0xE34E, 0xE371, 0xE39A, 0xE3C6, 0xE3F6, 0xE429, 0xE45D, 
    0xE491, 0xE4C5, 0xE4F7, 0xE527, 0xE554, 0xE57D, 0xE5A0, 0xE5BD, 0xE5D3, 0xE5E1, 0xE5E5, 0xE5C6, 0xE573, 0xE4FD, 
    0xE477, 0xE3F0, 0xE37B, 0xE328, 0x0000, 0x0000, 0x0000, 0x0002, 0x0005, 0x0008, 0x000C, 0x0011, 0x0016, 0x001C, 
    0x0023, 0x0029, 0x0031, 0x0038, 0x003F, 0x0047, 0x004E, 0x0056, 0x005D, 0x0064, 0x006B, 0x0071, 0x0077, 0x0084, 
    0x0092, 0x008F, 0x006F, 0x003F, 0x0014, 0x0000, 0x0009, 0x0014, 0x0022, 0x0032, 0x0043, 0x0056, 0x006B, 0x0080, 
    0x0097, 0x00AE, 0x00C5, 0x00DC, 0x00F4, 0x010A, 0x0120, 0x0135, 0x0149, 0x015B, 0x016B, 0x017A, 0x0186, 0x0190, 
    0x016F, 0x011E, 0x00D1, 0x008F, 0x0048, 0x0012, 0xF08F, 0xF051, 0xF032, 0xF031, 0xF04C, 0xF080, 0xF0CD, 0xF130, 
    0xF1A7, 0xF230, 0xF2CA, 0xF373, 0xF428, 0xF4E8, 0xF5B2, 0xF682, 0xF758, 0xF831, 0xF90C, 0xF9E7, 0xFABF, 0xFB93, 
    0xFC62, 0xFF2E, 0x0338, 0x045C, 0x0060, 0xF9C5, 0xF382, 0x0000, 0x000D, 0x001A, 0x0025, 0x002F, 0x0038, 0x003F, 
    0x0044, 0x0047, 0x0049, 0x0048, 0x0047, 0x0045, 0x0042, 0x003F, 0x003B, 0x0037, 0x0031, 0x002C, 0x0026, 0x001F, 
    0x0018, 0x0010, 0x0008, 0x0000, 0xFFE8, 0xFFC3, 0xFFB1, 0xFFD8, 0x0000, 0xFFDD, 0xFFAD, 0xFF72, 0xFF30, 0xFEE9, 
    0xFEA0, 0xFE58, 0xFE14, 0xFDD7, 0xFD9A, 0xFD57, 0xFD0F, 0xFCC4, 0xFC77, 0xFC2B, 0xFBE0, 0xFB9A, 0xFB5A, 0xFB21, 
    0xFAF1, 0xFACD, 0xFAB5, 0xFAAC, 0xFAB4, 0xFB9C, 0xFD6D, 0xFEFF, 0xFFCE, 0xF81E, 0xF69D, 0xF57C, 0xF4AF, 0xF42C, 
    0xF3E8, 0xF3D9, 0xF3F4, 0xF42F, 0xF47F, 0xF4E1, 0xF557, 0xF5E0, 0xF67A, 0xF726, 0xF7E0, 0xF8A9, 0xF97D, 0xFA5E, 
    0xFB48, 0xFC3B, 0xFD35, 0xFE36, 0xFF3B, 0x0044, 0x02E4, 0x065E, 0x0736, 0xFF53, 
};

JointIndex sZoraShopkeeperAnimJointIndices[] = {
    { 0x0000, 0x0007, 0x0024 },
    { 0x0003, 0x0000, 0x0004 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0004 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0004 },
    { 0x0000, 0x0000, 0x0041 },
    { 0x005E, 0x007B, 0x0098 },
    { 0x0000, 0x0000, 0x00B5 },
    { 0x00D2, 0x00EF, 0x010C },
    { 0x0129, 0x0146, 0x0163 },
    { 0x0005, 0x0000, 0x0180 },
    { 0x0006, 0x019D, 0x01BA },
    { 0x01D7, 0x01F4, 0x0211 },
    { 0x022E, 0x024B, 0x0268 },
    { 0x0285, 0x02A2, 0x02BF },
    { 0x02DC, 0x02F9, 0x0316 },
    { 0x0333, 0x0350, 0x036D },
};

AnimationHeader gZoraShopkeeperAnim = { 
    { 29 }, sZoraShopkeeperAnimFrameData,
    sZoraShopkeeperAnimJointIndices, 7
};

