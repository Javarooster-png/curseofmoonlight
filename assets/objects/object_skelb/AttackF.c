#include "ultra64.h"
#include "global.h"

s16 gSkelskelAttackfAnimFrameData[4170] = {
	0xd6c1, 0xfe97, 0xfb79, 0xfd6c, 0x00b0, 0xeda1, 0xf19f, 0xca27, 0x0000, 0xffff, 0x0000, 0xfffc, 0xfff4, 0xffe8, 0xffda, 0xffcd, 
	0xffc2, 0xffbb, 0xffb7, 0xffb5, 0xffb4, 0xffb3, 0xffb3, 0xffb3, 0xffb2, 0xffb2, 0xffb4, 0xffb7, 0xffbc, 0xffc2, 0xffc9, 0xffd1, 
	0xffd9, 0xffe2, 0xffeb, 0xfff3, 0xfff9, 0xfffe, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0026, 0x007b, 0x00cf, 
	0x00f6, 0x00f6, 0x00f6, 0x00f6, 0x00eb, 0x00ca, 0x0095, 0x0050, 0x0008, 0xffd1, 0xffbb, 0xffbb, 0xffbb, 0xffbb, 0xffbb, 0xffbb, 
	0xffbb, 0xffbb, 0xffbb, 0xffbb, 0xffbb, 0xffbb, 0xffbb, 0xffbb, 0xffbb, 0xffbb, 0xffbc, 0xffbe, 0xffc1, 0xffc6, 0xffcb, 0xffd1, 
	0xffd7, 0xffdd, 0xffe4, 0xffea, 0xfff0, 0xfff5, 0xfff9, 0xfffd, 0xffff, 0x0000, 0x0e51, 0x0e49, 0x0e34, 0x0e18, 0x0dfa, 0x0dde, 
	0x0dca, 0x0dc2, 0x0db8, 0x0da0, 0x0d82, 0x0d66, 0x0d54, 0x0d54, 0x0d83, 0x0dc2, 0x0dde, 0x0df1, 0x0e00, 0x0e0f, 0x0e1c, 0x0e2a, 
	0x0e34, 0x0e0e, 0x0daf, 0x0d34, 0x0cb9, 0x0c5b, 0x0c35, 0x0c35, 0x0c35, 0x0c35, 0x0c35, 0x0c35, 0x0c35, 0x0d8e, 0x0cec, 0x0bbf, 
	0x0b1d, 0x0b1d, 0x0b1d, 0x0b1d, 0x0b6e, 0x0c07, 0x0c5f, 0x0bd4, 0x0a95, 0x0958, 0x08d3, 0x0a2c, 0x0d6b, 0x119c, 0x15ca, 0x18ff, 
	0x1a47, 0x1a47, 0x1a47, 0x1a47, 0x1a47, 0x176f, 0x1137, 0x0b19, 0x07cb, 0x06f0, 0x0705, 0x0741, 0x079f, 0x0817, 0x08a6, 0x0946, 
	0x09f0, 0x0aa0, 0x0b51, 0x0bfb, 0x0c9b, 0x0d2a, 0x0da2, 0x0e00, 0x0e3c, 0x0e51, 0x0000, 0xfff0, 0xffc7, 0xff8f, 0xff51, 0xff19, 
	0xfef0, 0xfee0, 0xff1b, 0xffb0, 0x0071, 0x0132, 0x01c7, 0x0204, 0x016d, 0x00a1, 0x0081, 0x0082, 0x0080, 0x0078, 0x006c, 0x005b, 
	0x004c, 0x0046, 0x0038, 0x0026, 0x0014, 0x0006, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0029, 0x0062, 0x00cb, 
	0x0104, 0x0104, 0x0104, 0x0104, 0x00f8, 0x00d5, 0x009e, 0x004a, 0xffda, 0xff5c, 0xfee0, 0xfe8e, 0xfe77, 0xfe88, 0xfeac, 0xfed0, 
	0xfee0, 0xfee0, 0xfee0, 0xfee0, 0xfee0, 0xfee0, 0xfee0, 0xfee0, 0xfee0, 0xfee0, 0xfee3, 0xfeed, 0xfefb, 0xff0d, 0xff23, 0xff3b, 
	0xff55, 0xff70, 0xff8b, 0xffa5, 0xffbd, 0xffd3, 0xffe5, 0xfff4, 0xfffd, 0x0000, 0x06c3, 0x06c3, 0x06c3, 0x06c3, 0x06c3, 0x06c3, 
	0x06c3, 0x06c3, 0x05e4, 0x0397, 0x003e, 0xfc38, 0xf824, 0xf54c, 0xfcb7, 0x06c3, 0x0781, 0x0764, 0x0626, 0x0452, 0x008a, 0xfa61, 
	0x0218, 0x0474, 0x0584, 0x0622, 0x0680, 0x06b3, 0x06c3, 0x06c3, 0x06c3, 0x06c3, 0x06c3, 0x06c3, 0x06c3, 0x045e, 0xff17, 0xf9b3, 
	0xf72b, 0xf72b, 0xf72b, 0xf72b, 0xf80c, 0xfa50, 0xfd66, 0x00b7, 0x03ae, 0x05e0, 0x06c3, 0x06c3, 0x06c3, 0x06c3, 0x06c3, 0x06c3, 
	0x06c3, 0x06c9, 0x06c3, 0xfdbb, 0xf4f7, 0xf4f7, 0xf4f7, 0xf4f7, 0xf248, 0xefab, 0xf009, 0xf0eb, 0xf239, 0xf3de, 0xf5c3, 0xf7d1, 
	0xf9f6, 0xfc1d, 0xfe35, 0x0031, 0x0200, 0x0395, 0x04e6, 0x05e7, 0x068a, 0x06c3, 0x8000, 0x7ef9, 0x7c53, 0x78b5, 0x74c7, 0x712a, 
	0x6e7a, 0x6d4e, 0x6f49, 0x751a, 0x7dd0, 0x8811, 0x923c, 0x9b04, 0xa282, 0xa520, 0xa44d, 0x9b19, 0x83f3, 0x65d2, 0x4f3b, 0x474c, 
	0x527b, 0x5fd6, 0x6b0e, 0x73fb, 0x7a87, 0x7e98, 0x8000, 0x7d16, 0x77aa, 0x74c0, 0x74c0, 0x74c0, 0x74c0, 0x77ae, 0x7e2c, 0x8489, 
	0x8751, 0x8751, 0x8751, 0x8751, 0x873d, 0x868f, 0x8494, 0x7f4e, 0x776c, 0x7056, 0x6d4e, 0x6d4e, 0x6d4e, 0x6d4e, 0x6d4e, 0x6d4e, 
	0x6d4e, 0x6ca4, 0x6be5, 0x6c46, 0x6d86, 0x6d86, 0x6d86, 0x6d86, 0x6dee, 0x6ea5, 0x6f37, 0x6ff8, 0x70e6, 0x71fd, 0x733a, 0x7499, 
	0x7612, 0x779a, 0x7927, 0x7aab, 0x7c17, 0x7d5e, 0x7e73, 0x7f47, 0x7fcf, 0x8000, 0xffff, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x005d, 0x0174, 0x035d, 0x060e, 0x0912, 0x0b2c, 0x0719, 0xffff, 0xfe73, 0xfd95, 0xfd91, 0xfcf0, 0xf9e8, 0xf405, 
	0xfb6f, 0xfd81, 0xfe73, 0xff14, 0xff8c, 0xffdf, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffc, 0x0093, 0x0200, 
	0x02ed, 0x02ed, 0x02ed, 0x02ed, 0x02cd, 0x0254, 0x016f, 0x0063, 0xffd6, 0xffdb, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0017, 0x0000, 0xfba9, 0xf7c7, 0xf7c7, 0xf7c7, 0xf7c7, 0xf69c, 0xf585, 0xf5c3, 0xf64d, 0xf711, 0xf7fe, 0xf905, 0xfa15, 
	0xfb22, 0xfc21, 0xfd08, 0xfdd3, 0xfe7f, 0xff0a, 0xff75, 0xffc1, 0xffef, 0xffff, 0x312e, 0x2cb3, 0x241f, 0x1d58, 0x197d, 0x1798, 
	0x16c4, 0x1683, 0x132b, 0x0614, 0xdca2, 0xb5d2, 0xa667, 0x9d51, 0x9143, 0x8779, 0x8755, 0x8a07, 0xadc8, 0x0d56, 0x1114, 0x1200, 
	0x1036, 0x0d74, 0x069a, 0xf780, 0xdfec, 0xcf22, 0xca34, 0xd0a9, 0xdac6, 0xdfaa, 0xdfaa, 0xdfaa, 0xdfaa, 0xdfbd, 0xcaf7, 0x9db6, 
	0x838b, 0x838b, 0x838b, 0x838b, 0x8a52, 0x934d, 0x8e2e, 0x2597, 0x15a1, 0x1a67, 0x1fbf, 0x2185, 0x2216, 0x22a6, 0x23b5, 0x2444, 
	0x23b2, 0x1969, 0xe741, 0xd1b3, 0xd18a, 0xd04d, 0xcf30, 0xd18a, 0xd854, 0xdcd9, 0xdce7, 0xdbec, 0xda1f, 0xd7cb, 0xd54c, 0xd2f5, 
	0xd103, 0xcf8e, 0xce9c, 0xce43, 0xcec8, 0xd126, 0xd9a9, 0x025a, 0x2add, 0x312e, 0x3750, 0x36a1, 0x3458, 0x3072, 0x2b9c, 0x26ca, 
	0x2301, 0x2148, 0x2560, 0x2eb7, 0x34b2, 0x2d6b, 0x238d, 0x1c69, 0x1c8e, 0x1d85, 0x1e11, 0x267c, 0x3dcd, 0x1d8b, 0x01e6, 0xf848, 
	0x0542, 0x1668, 0x24d8, 0x2e9d, 0x31de, 0x3026, 0x2da5, 0x29ab, 0x2404, 0x20f0, 0x20f0, 0x20f0, 0x20f0, 0x2b55, 0x32a1, 0x36c6, 
	0x342c, 0x342c, 0x342c, 0x342c, 0x34a7, 0x361c, 0x3a68, 0x3d68, 0x32bb, 0x2613, 0x1d31, 0x19b7, 0x16ab, 0x1323, 0x0d5a, 0x10ec, 
	0x1b52, 0x2964, 0x2cdd, 0x11e4, 0x0152, 0x0349, 0x053f, 0x0152, 0xf328, 0xec69, 0xec2f, 0xeceb, 0xeee2, 0xf258, 0xf778, 0xfe33, 
	0x0628, 0x0ec7, 0x17a2, 0x2069, 0x28e2, 0x30dd, 0x3801, 0x3c42, 0x397e, 0x3750, 0xafa6, 0xaade, 0xa180, 0x99a2, 0x948e, 0x9180, 
	0x8fc9, 0x8f1e, 0x8bd6, 0x8064, 0x5ac5, 0x394e, 0x2f5d, 0x29ec, 0x1caa, 0x0f65, 0x0d98, 0x0c5e, 0x28d8, 0x7fda, 0x7d2b, 0x7c5f, 
	0x7f1f, 0x7eb0, 0x79eb, 0x6d42, 0x5810, 0x4914, 0x44d3, 0x495c, 0x4f7c, 0x520a, 0x520a, 0x520a, 0x520a, 0x58a7, 0x4944, 0x20cc, 
	0x0878, 0x0878, 0x0878, 0x0878, 0x0ed8, 0x16ba, 0x0fb9, 0xa3cc, 0x8ddf, 0x899f, 0x880f, 0x8ab6, 0x8f00, 0x94fa, 0x9d6c, 0x9df0, 
	0x996a, 0x8f3e, 0x5b06, 0x3b60, 0x31d4, 0x325e, 0x32da, 0x31d4, 0x29f0, 0x2554, 0x26d3, 0x2947, 0x2c83, 0x3043, 0x3432, 0x3801, 
	0x3b76, 0x3e81, 0x413c, 0x43dd, 0x46d1, 0x4b2d, 0x5554, 0x7f5a, 0xa8e1, 0xafa6, 0xfe10, 0xfe07, 0xfdf4, 0xfde4, 0xfdde, 0xfde3, 
	0xfdec, 0xfdf4, 0xfd63, 0xfc73, 0xfbba, 0xfb54, 0xfb34, 0xfb3b, 0xfb7c, 0xfbc8, 0xfbe1, 0xfbf7, 0xfc55, 0xfd21, 0xfdef, 0xfe62, 
	0xfe2f, 0xfd2d, 0xfc15, 0xfb40, 0xfab4, 0xfa66, 0xfa49, 0xfa45, 0xfa50, 0xfa5d, 0xfa5d, 0xfa5d, 0xfa5d, 0xfb5e, 0xfaf4, 0xfb17, 
	0xfb72, 0xfb72, 0xfb72, 0xfb72, 0xfb5a, 0xfb5a, 0xfb97, 0xfb54, 0xfab6, 0xfa62, 0xfa6f, 0xfae5, 0xfbcf, 0xfd5b, 0xfff4, 0xff3d, 
	0xfc43, 0xfa4c, 0xf9df, 0xfa2e, 0xfa2d, 0xfa11, 0xf9fa, 0xfa2d, 0xfa61, 0xfa1b, 0xfa1e, 0xfa24, 0xfa2c, 0xfa2e, 0xfa27, 0xfa12, 
	0xf9f6, 0xf9de, 0xf9da, 0xf9fa, 0xfa4b, 0xfad6, 0xfb9d, 0xfc92, 0xfd8d, 0xfe10, 0x0136, 0x013a, 0x0140, 0x0146, 0x0148, 0x0146, 
	0x0143, 0x0140, 0x017b, 0x0208, 0x02a1, 0x030d, 0x0334, 0x032b, 0x02e0, 0x0293, 0x027c, 0x0268, 0x021d, 0x019d, 0x0142, 0x011d, 
	0x012c, 0x0196, 0x024f, 0x0325, 0x03ec, 0x0482, 0x04c4, 0x04ce, 0x04b3, 0x0495, 0x0495, 0x0495, 0x0495, 0x0301, 0x0388, 0x0358, 
	0x02ea, 0x02ea, 0x02ea, 0x02ea, 0x0306, 0x0306, 0x02c4, 0x030c, 0x03e9, 0x0489, 0x046e, 0x039e, 0x028d, 0x017f, 0x00e6, 0x00f2, 
	0x022a, 0x04bd, 0x079b, 0x0903, 0x0901, 0x08a7, 0x084a, 0x0901, 0x0982, 0x08cb, 0x08d2, 0x08e7, 0x08fc, 0x0904, 0x08ee, 0x08ad, 
	0x0838, 0x0792, 0x06bf, 0x05ca, 0x04c0, 0x03b5, 0x02be, 0x01f2, 0x0168, 0x0136, 0x0d13, 0x0d55, 0x0dda, 0x0e49, 0x0e70, 0x0e50, 
	0x0e0c, 0x0dd9, 0x11e6, 0x191f, 0x1f58, 0x232c, 0x247b, 0x242e, 0x21a1, 0x1ed7, 0x1df4, 0x1d2e, 0x1a14, 0x13d4, 0x0df9, 0x0ad8, 
	0x0c38, 0x1378, 0x1c2a, 0x23fc, 0x2a4b, 0x2ea6, 0x3081, 0x30c8, 0x300c, 0x2f33, 0x2f33, 0x2f33, 0x2f33, 0x22c3, 0x2737, 0x25ac, 
	0x21fe, 0x21fe, 0x21fe, 0x21fe, 0x22f1, 0x22ef, 0x209e, 0x2328, 0x2a33, 0x2ed9, 0x2e14, 0x27e9, 0x1e96, 0x1222, 0x0047, 0x050c, 
	0x1aa3, 0x3054, 0x43ca, 0x4d76, 0x4d68, 0x4af1, 0x486b, 0x4d68, 0x5111, 0x4be8, 0x4c1e, 0x4cb0, 0x4d48, 0x4d7f, 0x4ce5, 0x4b17, 
	0x47f0, 0x438b, 0x3e0b, 0x379a, 0x3066, 0x2899, 0x2065, 0x1820, 0x10b3, 0x0d13, 0xfe98, 0xfe5b, 0xfdb1, 0xfcab, 0xfb65, 0xfa11, 
	0xf8f7, 0xf86f, 0xf8ee, 0xfa73, 0xfc6b, 0xfe28, 0xff41, 0xffb2, 0xff83, 0xff36, 0xff46, 0xff7f, 0xfe14, 0xf86d, 0xf394, 0xf240, 
	0xf447, 0xf715, 0xf96f, 0xfb35, 0xfc6b, 0xfd25, 0xfd68, 0xfcbf, 0xfb0d, 0xf9d9, 0xf9d9, 0xf9d9, 0xf9d9, 0xfc93, 0xffad, 0x01d0, 
	0x02fc, 0x02fc, 0x02fc, 0x02fc, 0x02a7, 0x01fa, 0x00ff, 0xff04, 0xfad9, 0xf32f, 0xeb9f, 0xea02, 0xead2, 0xecd2, 0xef17, 0xf1b9, 
	0xf4f2, 0xfc22, 0x03cb, 0x07c0, 0x0914, 0x0a85, 0x0bd8, 0x0a50, 0x0828, 0x071f, 0x0633, 0x0569, 0x04bc, 0x0419, 0x0368, 0x0293, 
	0x019c, 0x00a5, 0xffc8, 0xff1c, 0xfea6, 0xfe68, 0xfe58, 0xfe68, 0xfe87, 0xfe98, 0x00f1, 0x00c7, 0x004c, 0xff83, 0xfe80, 0xfd69, 
	0xfc7f, 0xfc0d, 0xfcd1, 0xfeb1, 0x00cc, 0x026e, 0x0345, 0x0379, 0x031e, 0x02b9, 0x02b9, 0x02ec, 0x01a2, 0xfc7b, 0xf81f, 0xf6f0, 
	0xf8ca, 0xfbcc, 0xfe98, 0x00d1, 0x0268, 0x036a, 0x03e2, 0x03f6, 0x0410, 0x043f, 0x043f, 0x043f, 0x043f, 0x02f1, 0x044e, 0x06fe, 
	0x08bd, 0x08bd, 0x08bd, 0x08bd, 0x0822, 0x06d4, 0x0535, 0x0326, 0xff9c, 0xfa44, 0xf772, 0xf962, 0xfc3a, 0xfe6d, 0xff16, 0x0016, 
	0x00e7, 0x01c6, 0x017e, 0xfda6, 0xfae2, 0xfb61, 0xfc25, 0xfde8, 0xfd66, 0xfce2, 0xfe43, 0xff9d, 0x00ee, 0x022b, 0x0348, 0x042d, 
	0x04c1, 0x04f9, 0x04dc, 0x047c, 0x03ed, 0x0342, 0x028b, 0x01d7, 0x013b, 0x00f1, 0xb433, 0xb3ca, 0xb2cf, 0xb1a6, 0xb0a0, 0xafe9, 
	0xaf8d, 0xaf7c, 0xae46, 0xacb5, 0xaca1, 0xae5d, 0xb11e, 0xb377, 0xb41c, 0xb396, 0xb37e, 0xb262, 0xb037, 0xb0fd, 0xb547, 0xb7c7, 
	0xb5d0, 0xb1da, 0xae2d, 0xab92, 0xaa1a, 0xa9cf, 0xaacf, 0xadf2, 0xb268, 0xb4cf, 0xb4cf, 0xb4cf, 0xb4cf, 0xb492, 0xa743, 0x9cd2, 
	0x99b1, 0x99b1, 0x99b1, 0x99b1, 0x9b44, 0x9ed6, 0xa137, 0x9ed7, 0x9acc, 0x9a1c, 0x9e7b, 0xa55b, 0xadff, 0xb7fd, 0xc38f, 0xc36d, 
	0xb8ed, 0xaff6, 0xb0d4, 0xbc32, 0xc1bf, 0xbc81, 0xb7b7, 0xb335, 0xbb48, 0xc544, 0xc58a, 0xc571, 0xc4b4, 0xc319, 0xc080, 0xbce7, 
	0xb8e0, 0xb53f, 0xb25a, 0xb057, 0xaf42, 0xaf15, 0xafc6, 0xb13a, 0xb31a, 0xb433, 0xa9e9, 0xb077, 0xbf75, 0xce4d, 0xd8a9, 0xdf18, 
	0xe2cd, 0xe455, 0xdf3f, 0xd11f, 0xbebd, 0xad44, 0x9e8c, 0x92ca, 0x85ac, 0x7c7b, 0x7cce, 0x8496, 0xae29, 0xf109, 0xffab, 0xffb1, 
	0xf841, 0xee92, 0xe4d6, 0xdc52, 0xd60a, 0xd2f8, 0xd4cd, 0xe2c5, 0xf731, 0xfefa, 0xfefa, 0xfefa, 0xfefa, 0xe264, 0xcb2a, 0xbf3a, 
	0xb94a, 0xb94a, 0xb94a, 0xb94a, 0xbae2, 0xbf58, 0xc641, 0xcc8e, 0xd032, 0xd197, 0xcfdb, 0xce15, 0xd0e7, 0xdb70, 0x0843, 0x0c0d, 
	0xfb1b, 0xed8c, 0xf039, 0xf3b6, 0x02d2, 0x0148, 0x042f, 0xdbb0, 0xd793, 0xd754, 0xd5be, 0xd376, 0xd0d7, 0xce28, 0xcb92, 0xc926, 
	0xc6e5, 0xc4c8, 0xc2c0, 0xc0b5, 0xbe85, 0xbbfc, 0xb8c8, 0xb464, 0xae54, 0xa9e9, 0x36f7, 0x36e1, 0x35f5, 0x3388, 0x3020, 0x2cb9, 
	0x2a23, 0x2900, 0x28c4, 0x2770, 0x2321, 0x1c04, 0x147d, 0x0eb9, 0x0f2f, 0x0ecf, 0x0efd, 0x19f0, 0x2fef, 0x220a, 0x0ea0, 0x0674, 
	0x0bc9, 0x11b5, 0x15dd, 0x1946, 0x1d12, 0x221d, 0x288c, 0x2da8, 0x2cdc, 0x2aad, 0x2aad, 0x2aad, 0x2aad, 0x27e5, 0x14b1, 0x08a0, 
	0x07fd, 0x07fd, 0x07fd, 0x07fd, 0x0b00, 0x1142, 0x1629, 0x14a6, 0x1003, 0x0cd2, 0x0d51, 0x1347, 0x1cd9, 0x27d0, 0x2f15, 0x2d71, 
	0x2db1, 0x2b65, 0x2bd9, 0x2d3d, 0x2e2c, 0x2e0c, 0x2d4e, 0x2007, 0x148e, 0x0fe2, 0x0f27, 0x0eb8, 0x0ea6, 0x0f12, 0x101e, 0x11dc, 
	0x1454, 0x1777, 0x1b30, 0x1f5c, 0x23da, 0x2881, 0x2d29, 0x3194, 0x3547, 0x36f7, 0x2b90, 0x31df, 0x4014, 0x4da4, 0x566c, 0x5b45, 
	0x5db7, 0x5ea6, 0x5aaa, 0x5025, 0x4403, 0x3b12, 0x3584, 0x30aa, 0x233f, 0x1591, 0x12f6, 0x12f5, 0x2f72, 0x65c0, 0x6e1d, 0x6736, 
	0x615c, 0x5c85, 0x57e4, 0x5442, 0x51f9, 0x5156, 0x53b5, 0x5fe6, 0x723a, 0x794b, 0x794b, 0x794b, 0x794b, 0x5f38, 0x4e9f, 0x4e33, 
	0x4d2a, 0x4d2a, 0x4d2a, 0x4d2a, 0x4d35, 0x4e05, 0x5045, 0x508f, 0x4cf2, 0x485a, 0x45db, 0x46e3, 0x4b28, 0x5633, 0x83a7, 0x87cb, 
	0x76da, 0x69e0, 0x6d71, 0x6fa1, 0x7d66, 0x7bd2, 0x7ec6, 0x53fe, 0x4bc3, 0x48c7, 0x47af, 0x469c, 0x45ac, 0x44ef, 0x446a, 0x440c, 
	0x43be, 0x4361, 0x42d6, 0x41f6, 0x4099, 0x3e86, 0x3b6d, 0x36ce, 0x3049, 0x2b91, 0x01ed, 0x0223, 0x0299, 0x0317, 0x0386, 0x03dc, 
	0x0414, 0x0427, 0x044f, 0x04b7, 0x0534, 0x059b, 0x05cd, 0x05c7, 0x0526, 0x0421, 0x03cb, 0x03b2, 0x0378, 0x0206, 0x000d, 0x01f5, 
	0x043b, 0x05bd, 0x06b4, 0x072b, 0x074d, 0x074d, 0x074e, 0x0749, 0x072b, 0x0712, 0x0712, 0x0712, 0x0712, 0x074e, 0x0737, 0x0747, 
	0x06e7, 0x06e7, 0x06e7, 0x06e7, 0x06c4, 0x066d, 0x0634, 0x06ae, 0x0738, 0x0748, 0x0729, 0x0746, 0x0724, 0x05a6, 0x000d, 0x000d, 
	0x0358, 0x063a, 0x0693, 0x04a7, 0x000e, 0x000e, 0x000d, 0x070b, 0x06f2, 0x068f, 0x068a, 0x0694, 0x06ac, 0x06d1, 0x06fd, 0x0728, 
	0x0747, 0x074d, 0x0731, 0x06e6, 0x0665, 0x05ab, 0x04ba, 0x039e, 0x0281, 0x01ed, 0xffa1, 0xff91, 0xff69, 0xff33, 0xfefa, 0xfec8, 
	0xfea3, 0xfe96, 0xfe79, 0xfe28, 0xfdb4, 0xfd42, 0xfd02, 0xfd0a, 0xfdc2, 0xfe9a, 0xfed2, 0xfee1, 0xff02, 0xff9a, 0xffe3, 0xff9f, 
	0xfe88, 0xfd17, 0xfb79, 0xf9fd, 0xf8de, 0xf84b, 0xf86c, 0xf924, 0xf9fe, 0xfa6a, 0xfa6a, 0xfa6a, 0xfa6a, 0xf85a, 0xf772, 0xf93b, 
	0xfaf7, 0xfaf7, 0xfaf7, 0xfaf7, 0xfb55, 0xfc0b, 0xfc6e, 0xfb87, 0xf9b3, 0xf7fe, 0xf727, 0xf7e4, 0xfa1e, 0xfd35, 0xffe3, 0xffe3, 
	0xff13, 0xfc64, 0xfbc1, 0xfe35, 0xffe3, 0xffe3, 0xffe3, 0xfa82, 0xf659, 0xf56c, 0xf562, 0xf576, 0xf5a9, 0xf600, 0xf67d, 0xf720, 
	0xf7eb, 0xf8d7, 0xf9e0, 0xfafa, 0xfc1a, 0xfd2e, 0xfe25, 0xfeed, 0xff71, 0xffa1, 0x0aea, 0x0c2a, 0x0edf, 0x11de, 0x1496, 0x16c5, 
	0x1837, 0x18b8, 0x19d0, 0x1cad, 0x2064, 0x23b8, 0x257d, 0x2545, 0x1ff4, 0x1890, 0x1655, 0x15b2, 0x143e, 0x0b7f, 0x004a, 0x0b1b, 
	0x1940, 0x24e9, 0x2f69, 0x3819, 0x3e69, 0x41a1, 0x40e5, 0x3cdc, 0x3810, 0x35a6, 0x35a6, 0x35a6, 0x35a6, 0x414c, 0x466f, 0x3c5c, 
	0x3273, 0x3273, 0x3273, 0x3273, 0x3046, 0x2be3, 0x2969, 0x2f16, 0x39bc, 0x4353, 0x4819, 0x43e5, 0x3758, 0x2418, 0x004a, 0x004b, 
	0x1375, 0x29a6, 0x2db4, 0x1c38, 0x004c, 0x004d, 0x004b, 0x351c, 0x4cd2, 0x5287, 0x52c4, 0x5247, 0x5104, 0x4eee, 0x4bff, 0x4842, 
	0x43bf, 0x3e8d, 0x38bb, 0x325e, 0x2b86, 0x2449, 0x1cc2, 0x1530, 0x0e55, 0x0aea, 0x02be, 0x0270, 0x01af, 0x00bc, 0xffcf, 0xff11, 
	0xfe8f, 0xfe4d, 0xfe34, 0xfe70, 0xff91, 0x01d8, 0x04cf, 0x07c5, 0x0b11, 0x0d66, 0x0d7a, 0x095e, 0x0015, 0xfbb5, 0xfccb, 0xfc2a, 
	0xf832, 0xf4d8, 0xf2d9, 0xf207, 0xf210, 0xf291, 0xf335, 0xf368, 0xf325, 0xf303, 0xf303, 0xf303, 0xf303, 0xf50c, 0xf4c1, 0xf51e, 
	0xf6cd, 0xf6cd, 0xf6cd, 0xf6cd, 0xf5e4, 0xf3b3, 0xf123, 0xf134, 0xf453, 0xf80e, 0xfb8b, 0xfe34, 0xff05, 0xfea8, 0xfeb1, 0xfda6, 
	0xfc90, 0xfd2f, 0xfee3, 0xffd3, 0x0052, 0x0058, 0xffd5, 0x0074, 0xffaf, 0xfea7, 0xfee5, 0xff5d, 0xffe2, 0x0056, 0x00ac, 0x00e8, 
	0x0113, 0x0135, 0x0157, 0x017e, 0x01af, 0x01e8, 0x0229, 0x026b, 0x02a4, 0x02be, 0xfe22, 0xfdfd, 0xfda9, 0xfd48, 0xfcee, 0xfca5, 
	0xfc74, 0xfc60, 0xfc47, 0xfc1a, 0xfc00, 0xfc1c, 0xfc75, 0xfcf3, 0xfdd7, 0xfec0, 0xfeef, 0xfe85, 0xfdc5, 0xfeb1, 0x00ca, 0x0158, 
	0x0113, 0x00d2, 0x008c, 0x003e, 0xffdf, 0xff73, 0xff0d, 0xfe9b, 0xfe5a, 0xfe54, 0xfe54, 0xfe54, 0xfe54, 0xfde3, 0x0149, 0x0559, 
	0x0606, 0x0606, 0x0606, 0x0606, 0x0615, 0x0608, 0x0588, 0x0386, 0x001d, 0xfc58, 0xf93c, 0xf7c8, 0xf820, 0xf9e8, 0xfd3b, 0xfde4, 
	0xfc89, 0xfa2a, 0xf97f, 0xfb01, 0xfdb6, 0xfdfd, 0xfdd0, 0xf942, 0xf68f, 0xf56b, 0xf5b4, 0xf63f, 0xf6e2, 0xf785, 0xf81d, 0xf8ae, 
	0xf93c, 0xf9ca, 0xfa5a, 0xfaef, 0xfb86, 0xfc21, 0xfcbc, 0xfd55, 0xfdde, 0xfe22, 0xc5f6, 0xc566, 0xc430, 0xc2e0, 0xc1b6, 0xc0ce, 
	0xc03a, 0xc00d, 0xbfee, 0xbf72, 0xbec0, 0xbe4a, 0xbe70, 0xbee3, 0xbf16, 0xbffc, 0xc08b, 0xc0b8, 0xc33e, 0xcbd6, 0xd447, 0xd0ed, 
	0xca02, 0xc3ce, 0xbe12, 0xb908, 0xb4d0, 0xb1bc, 0xb092, 0xb143, 0xb2c1, 0xb3a9, 0xb3a9, 0xb3a9, 0xb3a9, 0xaf67, 0xb2bf, 0xbbd7, 
	0xc152, 0xc152, 0xc152, 0xc152, 0xc0d9, 0xbfe5, 0xbe88, 0xbc4f, 0xba86, 0xb9db, 0xb99d, 0xbb29, 0xc085, 0xc96a, 0xd975, 0xd8e7, 
	0xcdab, 0xbcaf, 0xb41c, 0xb8be, 0xc2cd, 0xbfc2, 0xbbad, 0x9ff0, 0x9210, 0x8ee4, 0x8fe1, 0x91d6, 0x9497, 0x97f4, 0x9bba, 0x9fc1, 
	0xa3ec, 0xa826, 0xac65, 0xb0a3, 0xb4db, 0xb906, 0xbd1a, 0xc0fd, 0xc458, 0xc5f6, 0xfd7b, 0xfd79, 0xfd72, 0xfd67, 0xfd58, 0xfd48, 
	0xfd3a, 0xfd34, 0xfd34, 0xfd34, 0xfd34, 0xfd34, 0xfd5b, 0xfd83, 0xfd6e, 0xfd4f, 0xfd51, 0xfd58, 0xfd61, 0xfd6b, 0xfd75, 0xfd7d, 
	0xfd82, 0xfd84, 0xfd83, 0xfd81, 0xfd7e, 0xfd7c, 0xfd7b, 0xfd7b, 0xfd7b, 0xfd7b, 0xfd7b, 0xfd7b, 0xfd7b, 0xfd7b, 0xfd7b, 0xfd7b, 
	0xfd7b, 0xfd7b, 0xfd7b, 0xfd7b, 0xfd7b, 0xfd7b, 0xfd7b, 0xfd5c, 0xfd03, 0xfc76, 0xfbbc, 0xfadb, 0xf9d8, 0xf8ba, 0xf788, 0xf649, 
	0xf504, 0xf3c1, 0xf288, 0xf160, 0xf052, 0xef64, 0xee9e, 0xee08, 0xeda9, 0xed88, 0xedb6, 0xee3b, 0xef08, 0xf013, 0xf14f, 0xf2af, 
	0xf426, 0xf5a7, 0xf725, 0xf895, 0xf9e9, 0xfb16, 0xfc13, 0xfcd4, 0xfd4f, 0xfd7b, 0x0028, 0xffb4, 0xfe8d, 0xfcf9, 0xfb40, 0xf9ac, 
	0xf885, 0xf813, 0xf813, 0xf813, 0xf813, 0xf813, 0xfb7b, 0x0311, 0x0aa5, 0x0e0e, 0x0dda, 0x0d3d, 0x0c45, 0x0b06, 0x0993, 0x0801, 
	0x0663, 0x04cd, 0x0356, 0x020f, 0x010d, 0x0065, 0x0028, 0x0028, 0x0028, 0x0028, 0x0028, 0x0028, 0x0028, 0x0028, 0x0028, 0x0028, 
	0x0028, 0x0028, 0x0028, 0x0028, 0x0028, 0x0028, 0x0028, 0x001c, 0xfff8, 0xffc3, 0xff80, 0xff32, 0xfedd, 0xfe85, 0xfe2f, 0xfddd, 
	0xfd92, 0xfd4f, 0xfd16, 0xfce7, 0xfcc2, 0xfca6, 0xfc92, 0xfc84, 0xfc7d, 0xfc7a, 0xfc7e, 0xfc89, 0xfc9c, 0xfcba, 0xfce4, 0xfd1d, 
	0xfd63, 0xfdb7, 0xfe15, 0xfe7b, 0xfee2, 0xff46, 0xff9f, 0xffe7, 0x0017, 0x0028, 0x00b3, 0x00c6, 0x00f7, 0x013c, 0x0187, 0x01cd, 
	0x0201, 0x0215, 0x0215, 0x0215, 0x0215, 0x0215, 0x017d, 0x0036, 0xfeeb, 0xfe50, 0xfe59, 0xfe76, 0xfea2, 0xfedb, 0xff1b, 0xff60, 
	0xffa6, 0xffeb, 0x002b, 0x0061, 0x008c, 0x00a8, 0x00b3, 0x00b3, 0x00b3, 0x00b3, 0x00b3, 0x00b3, 0x00b3, 0x00b3, 0x00b3, 0x00b3, 
	0x00b3, 0x00b3, 0x00b3, 0x00b3, 0x00b3, 0x00b3, 0x00b3, 0x00ca, 0x010c, 0x0175, 0x0201, 0x02ab, 0x036f, 0x0448, 0x0532, 0x0627, 
	0x0721, 0x081a, 0x090d, 0x09f3, 0x0ac6, 0x0b80, 0x0c1a, 0x0c8f, 0x0cda, 0x0cf4, 0x0ccf, 0x0c68, 0x0bc7, 0x0af7, 0x0a01, 0x08ef, 
	0x07cd, 0x06a3, 0x057d, 0x0464, 0x0362, 0x027e, 0x01c0, 0x012f, 0x00d3, 0x00b3, 0xe822, 0xe823, 0xe824, 0xe823, 0xe821, 0xe81d, 
	0xe818, 0xe816, 0xe816, 0xe816, 0xe816, 0xe816, 0xe822, 0xe81d, 0xe7ef, 0xe7ca, 0xe7cb, 0xe80d, 0xe8b9, 0xe9b4, 0xeae5, 0xec34, 
	0xed8c, 0xeed7, 0xf000, 0xf0f3, 0xf193, 0xf1bd, 0xf145, 0xf03b, 0xef4b, 0xef68, 0xf49e, 0xfd8b, 0x0202, 0xfeb5, 0xf9df, 0xf61f, 
	0xf2ff, 0xf037, 0xede0, 0xec5d, 0xeb61, 0xea7b, 0xe906, 0xe57e, 0xe029, 0xdafe, 0xd8ae, 0xdb9d, 0xe3d2, 0xefb0, 0xfb46, 0x0302, 
	0x05bc, 0x040d, 0xff55, 0xf81d, 0xef9c, 0xe7cc, 0xe26e, 0xe080, 0xe0a1, 0xe0e1, 0xe13d, 0xe1af, 0xe233, 0xe2c5, 0xe35f, 0xe3ff, 
	0xe49f, 0xe53b, 0xe5d1, 0xe65d, 0xe6db, 0xe749, 0xe7a3, 0xe7e8, 0xe813, 0xe822, 0xffa3, 0xff2c, 0xfdf6, 0xfc4f, 0xfa82, 0xf8da, 
	0xf7a5, 0xf72d, 0xf72d, 0xf72d, 0xf72d, 0xf72d, 0xfaa9, 0x0267, 0x0a25, 0x0d9f, 0x0d6b, 0x0c7e, 0x0acd, 0x086d, 0x0571, 0x01f1, 
	0xfe05, 0xf9cb, 0xf563, 0xf0eb, 0xec82, 0xe845, 0xe44f, 0xe0bb, 0xddd6, 0xdc0a, 0xdab8, 0xda93, 0xdc14, 0xe494, 0xf781, 0x0d21, 
	0x1bce, 0x225c, 0x253d, 0x25e7, 0x23d9, 0x1e7c, 0x16d0, 0x0d63, 0x042c, 0xfdd4, 0xfb94, 0xfa32, 0xf797, 0xf6c5, 0xf937, 0xfcdb, 
	0xfe96, 0xfd7b, 0xfae8, 0xf842, 0xf6e7, 0xf736, 0xf84e, 0xf8e8, 0xf8f9, 0xf922, 0xf960, 0xf9b1, 0xfa13, 0xfa84, 0xfb01, 0xfb88, 
	0xfc15, 0xfca5, 0xfd34, 0xfdbe, 0xfe40, 0xfeb4, 0xff16, 0xff62, 0xff92, 0xffa3, 0xff0d, 0xff1a, 0xff3a, 0xff66, 0xff97, 0xffc4, 
	0xffe5, 0xfff2, 0xfff2, 0xfff2, 0xfff2, 0xfff2, 0xff93, 0xfec3, 0xfdec, 0xfd85, 0xfd8b, 0xfdb4, 0xfe07, 0xfe76, 0xfef6, 0xff7b, 
	0xfffe, 0x0081, 0x0105, 0x0198, 0x024e, 0x0345, 0x04a7, 0x066b, 0x07a2, 0x06d9, 0x0161, 0xf93f, 0xf516, 0xf7e1, 0xfbf1, 0xfe3b, 
	0xfebf, 0xfe1c, 0xfd14, 0xfc4d, 0xfb2e, 0xfa88, 0xfc7c, 0x0139, 0x0715, 0x0c6e, 0x0ec7, 0x0bed, 0x03ee, 0xf857, 0xed0a, 0xe587, 
	0xe2e5, 0xe495, 0xe94e, 0xf08a, 0xf911, 0x00e7, 0x064b, 0x083e, 0x081f, 0x07d9, 0x0772, 0x06ee, 0x0654, 0x05a8, 0x04f0, 0x0431, 
	0x036f, 0x02af, 0x01f7, 0x014a, 0x00ac, 0x0022, 0xffaf, 0xff58, 0xff21, 0xff0d, 0xf4e5, 0xf4fa, 0xf564, 0xf67e, 0xf892, 0xfb8c, 
	0xfe93, 0xfffb, 0xfe46, 0xfa88, 0xf6f1, 0xf4f3, 0xf5ef, 0xfcc3, 0x0bff, 0x166e, 0x1504, 0x088c, 0xfa40, 0xf741, 0xfc9c, 0x0071, 
	0xfded, 0xfab5, 0xf89e, 0xf7aa, 0xf69f, 0xf54b, 0xf4f4, 0xf58a, 0xf629, 0xf72d, 0xf60c, 0xf282, 0xf07c, 0xf038, 0xf200, 0xf704, 
	0xfacb, 0xfacb, 0xfacb, 0xfacb, 0xfa27, 0xf8d0, 0xf7bf, 0xfba7, 0x06ac, 0x1684, 0x20a1, 0x1edb, 0x1722, 0x0b80, 0xfe99, 0xf433, 
	0xf005, 0xf19e, 0xf611, 0xfcd8, 0x0558, 0x0ed1, 0x187a, 0x21a1, 0x2a38, 0x2e3e, 0x2cea, 0x2a29, 0x2634, 0x2156, 0x1beb, 0x164d, 
	0x10c7, 0x0b8d, 0x06bc, 0x0264, 0xfe8f, 0xfb49, 0xf89d, 0xf69c, 0xf557, 0xf4e5, 0x0362, 0x0521, 0x09b0, 0x0ffc, 0x16c0, 0x1caa, 
	0x20ad, 0x2222, 0x2056, 0x1af2, 0x11ca, 0x04ab, 0xf3c9, 0xe25e, 0xd73f, 0xd4a8, 0xd4e3, 0xd8f8, 0xe93e, 0x0346, 0x1706, 0x1cd8, 
	0x1980, 0x131c, 0x0cc4, 0x09ea, 0x0d56, 0x14d3, 0x1c3a, 0x208e, 0x226f, 0x2325, 0x23dd, 0x242d, 0x22c0, 0x1803, 0x0260, 0xee2d, 
	0xe64a, 0xe64a, 0xe64a, 0xe64a, 0xe6db, 0xe9e2, 0xf19b, 0xffe3, 0x1124, 0x1ce2, 0x1ef0, 0x1e1d, 0x1f16, 0x20f7, 0x2286, 0x2326, 
	0x2338, 0x2334, 0x231f, 0x22e6, 0x2275, 0x21c0, 0x20c7, 0x1f98, 0x1e8d, 0x1e88, 0x1f2f, 0x1f6c, 0x1f27, 0x1e46, 0x1cbc, 0x1a8e, 
	0x17d3, 0x14b7, 0x116f, 0x0e30, 0x0b2c, 0x0887, 0x065c, 0x04bf, 0x03bc, 0x0362, 0x01c7, 0x02b3, 0x052c, 0x08db, 0x0d7c, 0x1297, 
	0x170f, 0x1900, 0x16a2, 0x10f6, 0x0a01, 0x0275, 0xf960, 0xec26, 0xd898, 0xcc84, 0xce21, 0xdd1e, 0xf260, 0x02bb, 0x106c, 0x167a, 
	0x12b3, 0x0d0a, 0x087f, 0x06a3, 0x06d9, 0x0733, 0x0792, 0x0809, 0x08cb, 0x0a9c, 0x0cb4, 0x0df2, 0x0ef0, 0x0ce8, 0x076d, 0x0030, 
	0xfba8, 0xfba8, 0xfba8, 0xfba8, 0xfc2b, 0xfd65, 0xfec7, 0x0001, 0x04fc, 0x10af, 0x1b50, 0x1f66, 0x20b0, 0x1f6e, 0x1c33, 0x18ca, 
	0x1748, 0x176d, 0x17d6, 0x1876, 0x192f, 0x19d7, 0x1a44, 0x1a58, 0x1a9d, 0x1a05, 0x17e0, 0x151d, 0x11dd, 0x0e5c, 0x0ae2, 0x07bb, 
	0x051f, 0x0329, 0x01da, 0x011f, 0x00db, 0x00e9, 0x0127, 0x0172, 0x01af, 0x01c7, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 
	0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 
	0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 
	0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xd9cd, 0xd6d9, 0xd27e, 0xcd34, 0xc772, 0xc1b1, 0xbc67, 0xb80c, 0xb5ea, 
	0xb5ea, 0xb5ea, 0xb5ea, 0xb5ea, 0xb6ac, 0xb80c, 0xb9a6, 0xbb71, 0xbd67, 0xbf7e, 0xc1b1, 0xc3f7, 0xc648, 0xc89d, 0xcaee, 0xcd34, 
	0xcf66, 0xd17e, 0xd374, 0xd53f, 0xd6d9, 0xd839, 0xd958, 0xda2f, 0xdab5, 0xdae4, 0xdcf3, 0xdd61, 0xde11, 0xde84, 0xdfc8, 0xe2db, 
	0xe689, 0xe896, 0xe5f2, 0xdea1, 0xd6fc, 0xd3a3, 0xcfaf, 0xd14b, 0xd596, 0xd511, 0xd85d, 0xdca0, 0xebeb, 0x02c1, 0x0a97, 0x09c3, 
	0x0456, 0x0092, 0x0244, 0x0825, 0x1056, 0x1831, 0x1d94, 0x1586, 0x087b, 0x01a8, 0xfff2, 0xfd54, 0x0063, 0x0d53, 0x1a51, 0xc683, 
	0x08fa, 0x95e4, 0x9b6e, 0x9d2c, 0xa01d, 0xb49f, 0x0665, 0x0b46, 0xee89, 0xe69e, 0xe897, 0xe882, 0xea19, 0xe534, 0xc8e3, 0xac61, 
	0xc36c, 0xedb7, 0xefec, 0xf9e1, 0x05ee, 0x0bb1, 0x1f95, 0x322c, 0x39a2, 0x37a5, 0x330f, 0x306c, 0x2f5d, 0x2f01, 0x2eb7, 0x2e1f, 
	0x2cd1, 0x2a6e, 0x26c8, 0x21b1, 0x1a96, 0x1018, 0x00d3, 0xef25, 0xe1cc, 0xdcf3, 0x2e7a, 0x2e37, 0x2d07, 0x2a78, 0x2722, 0x2462, 
	0x22ee, 0x2292, 0x20e3, 0x1a9d, 0x0de9, 0xfc3e, 0xfb94, 0x06a0, 0x04f2, 0x01ef, 0x0354, 0x0d58, 0x1e29, 0x1879, 0x0a94, 0x0296, 
	0x07f8, 0x0fe8, 0x1633, 0x1a2a, 0x1b76, 0x1a6e, 0x1825, 0x14aa, 0x0f77, 0x0c6e, 0x0cc0, 0x0ece, 0x10cf, 0x1266, 0x1e05, 0x4906, 
	0x51fd, 0x2aa2, 0x28eb, 0x288b, 0x2dcd, 0x393b, 0x3513, 0x2d3b, 0x2439, 0x1414, 0x0e86, 0x12b3, 0x1ec3, 0x2bfa, 0x3453, 0x34e7, 
	0x3943, 0x2e36, 0x1fdb, 0x12cf, 0x035d, 0xf417, 0xf65d, 0x036b, 0x023c, 0xfd3f, 0xfea4, 0x0134, 0x0383, 0x05cb, 0x0860, 0x0b51, 
	0x0e93, 0x1209, 0x15c2, 0x1a31, 0x1fc7, 0x25fc, 0x2b4a, 0x2e03, 0x2e89, 0x2e7a, 0x43b4, 0x44c0, 0x4653, 0x4611, 0x43c1, 0x4169, 
	0x4088, 0x40c0, 0x3d12, 0x335a, 0x27b5, 0x1bfb, 0x114a, 0x1189, 0x43fe, 0x262e, 0x23c8, 0x287f, 0x4153, 0x6156, 0x6c02, 0x6934, 
	0x6a31, 0x6b21, 0x6caa, 0x6f8a, 0x737f, 0x771d, 0x7917, 0x6f17, 0x5f94, 0x57ea, 0x594a, 0x5c5e, 0x613f, 0x6f98, 0x79d3, 0x2569, 
	0x6431, 0xebf9, 0xef7f, 0xf0b9, 0xf428, 0x085d, 0x57a0, 0x5ee5, 0x4c2c, 0x3ba0, 0x3587, 0x3b52, 0x44bc, 0x4762, 0x3315, 0x19f6, 
	0x2a8c, 0x5387, 0x57e9, 0x5c14, 0x5f9d, 0x585d, 0x48e4, 0x4b0d, 0x5683, 0x6586, 0x70bd, 0x7527, 0x75b7, 0x74b0, 0x7372, 0x7206, 
	0x701f, 0x6d93, 0x6acb, 0x6852, 0x65df, 0x61a8, 0x59a3, 0x4ee4, 0x469d, 0x43b4, 0xb002, 0xb014, 0xb083, 0xb1b6, 0xb3e5, 0xb6cb, 
	0xb980, 0xbaab, 0xb9e4, 0xb82a, 0xb779, 0xbb17, 0xbef2, 0xc10d, 0xcbaf, 0xd2c8, 0xcf43, 0xc6de, 0xc354, 0xce83, 0xc816, 0xbe8f, 
	0xbe33, 0xbe2f, 0xbdab, 0xbcbf, 0xbc2e, 0xbc63, 0xbd11, 0xc186, 0xd090, 0xdd36, 0xe0c8, 0xe74f, 0xe257, 0xd8f8, 0xd7ee, 0xe087, 
	0xe7de, 0xe167, 0xdf06, 0xde57, 0xdcd1, 0xd697, 0xcadf, 0xbae0, 0xb35e, 0xbe3a, 0xc39e, 0xc23b, 0xc839, 0xd4f1, 0xe3d8, 0xe926, 
	0xdb1f, 0xd081, 0xcc7c, 0xb9d7, 0xb5b5, 0xc016, 0xc051, 0xc2e7, 0xc132, 0xbe81, 0xc011, 0xc362, 0xc5e9, 0xc706, 0xc6b7, 0xc577, 
	0xc3e4, 0xc265, 0xc079, 0xbd61, 0xb908, 0xb495, 0xb143, 0xafd5, 0xafcf, 0xb002, 0xd8fd, 0xd905, 0xd938, 0xd9c8, 0xdade, 0xdc6a, 
	0xddf8, 0xdeac, 0xde34, 0xdd30, 0xdccb, 0xdeee, 0xe164, 0xe2ce, 0xea63, 0xef70, 0xecf7, 0xe6e6, 0xe461, 0xec6e, 0xe7c6, 0xe123, 
	0xe0e7, 0xe0e4, 0xe08e, 0xdff7, 0xdf9b, 0xdfbd, 0xe02b, 0xe321, 0xede4, 0xf610, 0xf800, 0xfb06, 0xf8c8, 0xf386, 0xf2de, 0xf7de, 
	0xfb40, 0xf851, 0xf712, 0xf6b2, 0xf5d6, 0xf200, 0xe9cc, 0xdecc, 0xda99, 0xe0eb, 0xe495, 0xe39e, 0xe7e0, 0xf0e9, 0xf981, 0xfbc0, 
	0xf4d7, 0xedd9, 0xeaf7, 0xde2c, 0xdbd2, 0xe227, 0xe24f, 0xe415, 0xe2e7, 0xe119, 0xe224, 0xe46b, 0xe635, 0xe702, 0xe6c9, 0xe5e4, 
	0xe4c6, 0xe3bb, 0xe269, 0xe05e, 0xddb1, 0xdb39, 0xd992, 0xd8e8, 0xd8e6, 0xd8fd, 0xe4c1, 0xe4bb, 0xe498, 0xe439, 0xe39e, 0xe2f5, 
	0xe27f, 0xe259, 0xe271, 0xe2b5, 0xe2d4, 0xe24c, 0xe20b, 0xe20b, 0xe384, 0xe5bc, 0xe486, 0xe28d, 0xe228, 0xe44b, 0xe2c0, 0xe20e, 
	0xe211, 0xe212, 0xe218, 0xe226, 0xe232, 0xe22d, 0xe221, 0xe20f, 0xe4f2, 0xea65, 0xec48, 0xf006, 0xed25, 0xe854, 0xe7db, 0xec25, 
	0xf05b, 0xeca0, 0xeb56, 0xeafa, 0xea32, 0xe744, 0xe352, 0xe252, 0xe3c2, 0xe211, 0xe22d, 0xe216, 0xe2c6, 0xe694, 0xedff, 0xf121, 
	0xe959, 0xe4ed, 0xe3b8, 0xe273, 0xe330, 0xe208, 0xe208, 0xe220, 0xe20c, 0xe20f, 0xe208, 0xe229, 0xe26b, 0xe293, 0xe287, 0xe25d, 
	0xe233, 0xe219, 0xe209, 0xe21c, 0xe291, 0xe373, 0xe45c, 0xe4d0, 0xe4d2, 0xe4c1, 0x06a5, 0x06a5, 0x06ad, 0x06cd, 0x070c, 0x0764, 
	0x07ba, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07e0, 0x07da, 0x07c7, 0x07ab, 0x078b, 0x0769, 0x073e, 0x0709, 0x06ce, 0x0694, 0x065d, 
	0x0629, 0x05f9, 0x05cd, 0x05a1, 0x0573, 0x0543, 0x050c, 0x04a1, 0x03ee, 0x0321, 0x0259, 0x018a, 0x009d, 0xff86, 0xfe71, 0xfd91, 
	0xfd1d, 0xfd03, 0xfd0b, 0xfd27, 0xfe22, 0xffdf, 0x013e, 0x0204, 0x02a1, 0x0318, 0x036a, 0x0398, 0x03a0, 0x037f, 0x0333, 0x02b6, 
	0x0202, 0x00fd, 0xff83, 0xfdb0, 0xfb85, 0xf913, 0xf68a, 0xf438, 0xf289, 0xf1e6, 0xf2f1, 0xf590, 0xf8db, 0xfc16, 0xfedf, 0x011f, 
	0x02a1, 0x03c3, 0x04a0, 0x0546, 0x05c2, 0x061c, 0x065b, 0x0685, 0x069d, 0x06a5, 0x0084, 0xff39, 0xfbe0, 0xf743, 0xf239, 0xed9e, 
	0xea48, 0xe900, 0xe900, 0xe900, 0xe900, 0xe900, 0xe93f, 0xe9eb, 0xeae7, 0xec19, 0xed64, 0xeead, 0xefeb, 0xf11b, 0xf23a, 0xf345, 
	0xf43a, 0xf514, 0xf5d0, 0xf66a, 0xf6e1, 0xf72f, 0xf753, 0xf68f, 0xf4ca, 0xf2f7, 0xf1cf, 0xf13a, 0xf0ef, 0xf0b1, 0xf079, 0xf04e, 
	0xf039, 0xf034, 0xf02d, 0xf025, 0xf1c7, 0xf4df, 0xf680, 0xf617, 0xf518, 0xf391, 0xf192, 0xef2b, 0xec6b, 0xe966, 0xe62f, 0xe2dd, 
	0xdf85, 0xdd53, 0xdd41, 0xdd2c, 0xdd13, 0xdcf6, 0xdcd9, 0xdcbe, 0xdcaa, 0xdca3, 0xdcaf, 0xdccd, 0xdcf3, 0xdd18, 0xdd37, 0xdd51, 
	0xe171, 0xe66e, 0xeb71, 0xf046, 0xf4bd, 0xf8ac, 0xfbef, 0xfe66, 0xfff7, 0x0084, 0x0b1a, 0x0ae4, 0x0a56, 0x098f, 0x08a9, 0x07c4, 
	0x070f, 0x06c4, 0x06c4, 0x06c4, 0x06c4, 0x06c4, 0x06cd, 0x06ea, 0x071b, 0x0760, 0x07b8, 0x0851, 0x0946, 0x0a80, 0x0beb, 0x0d72, 
	0x0f02, 0x1087, 0x11ef, 0x1327, 0x141e, 0x14c2, 0x1502, 0x14ec, 0x14ad, 0x145e, 0x1408, 0x13a4, 0x132a, 0x1296, 0x11f1, 0x1143, 
	0x1096, 0x0ffa, 0x0f62, 0x0eae, 0x0d9d, 0x0c8d, 0x0c0f, 0x0c05, 0x0c1b, 0x0c4e, 0x0c9a, 0x0cfe, 0x0d7b, 0x0e13, 0x0eca, 0x0fa5, 
	0x10ab, 0x11fc, 0x13c2, 0x15d8, 0x183b, 0x1ad9, 0x1d86, 0x1ff0, 0x21ae, 0x2255, 0x2143, 0x1e90, 0x1b23, 0x17bc, 0x14bb, 0x123e, 
	0x108c, 0x0f3a, 0x0e2a, 0x0d4f, 0x0c9f, 0x0c14, 0x0ba8, 0x0b5a, 0x0b2b, 0x0b1a, 0x065e, 0x4dd7, 0x773c, 0x765e, 0xf2ee, 0x6878, 
	0x5cb7, 0x5b2c, 0x6210, 0x662a, 0x5f58, 0x55ba, 0x254e, 0xa749, 0xb60c, 0xd34d, 0xd70d, 0xd6e4, 0xbff1, 0x26ff, 0xa10b, 0x305f, 
	0xd3b0, 0x01f2, 0x06f2, 0x0975, 0x0c79, 0x0eee, 0x0f8c, 0x0bc2, 0x049e, 0x0157, 0x01f6, 0x0281, 0x0407, 0x0cbb, 0x071c, 0x3ebd, 
	0x1dad, 0x0eef, 0x0602, 0x05bd, 0x08c5, 0x0fc4, 0x3833, 0xf633, 0xfe91, 0xfc11, 0xf7c0, 0x21b0, 0x9746, 0xaae6, 0x0db7, 0xef02, 
	0x43b2, 0x4370, 0x27e9, 0xd730, 0xedc9, 0xcea3, 0x1ea0, 0x1670, 0x1757, 0xd614, 0xd053, 0xcd6e, 0xce2c, 0xd112, 0xd554, 0xdb75, 
	0xe2f2, 0xeab0, 0xf1e1, 0xf7fd, 0xfcdb, 0x0092, 0x0342, 0x050c, 0x060d, 0x065e, 0x1838, 0x3224, 0x1c89, 0x2043, 0x5dfd, 0x21bb, 
	0x191d, 0x0fb0, 0x0634, 0xf874, 0xf13a, 0xf04d, 0xaf02, 0xeabe, 0xf9ca, 0x183b, 0xf6bc, 0xffa7, 0xfbb9, 0x8f6b, 0xfb9a, 0x5913, 
	0x3271, 0x1f67, 0x0b07, 0x00f9, 0xfe09, 0xfed1, 0xff83, 0xfda9, 0xfeaf, 0x02cb, 0x02ad, 0x01c6, 0x00ca, 0xffcd, 0x1cfe, 0x5a50, 
	0x5832, 0x5098, 0x4f0d, 0x4ff7, 0x4fd4, 0x4b45, 0x4441, 0x34bd, 0x2abc, 0x26e8, 0x27c2, 0x38f2, 0x03e6, 0xdb28, 0xa7b3, 0xac51, 
	0xd3f1, 0xcc22, 0xbd9f, 0xbea9, 0xccac, 0xd73c, 0xab23, 0xaca1, 0xac1e, 0xd7dc, 0xe2cf, 0xee81, 0xfa9f, 0x05fa, 0x0fe0, 0x1767, 
	0x1b50, 0x1d09, 0x1d1a, 0x1c30, 0x1aee, 0x19c6, 0x18f2, 0x1879, 0x1845, 0x1838, 0x956b, 0xe715, 0x1aba, 0x1f89, 0xac03, 0x35c6, 
	0x350f, 0x362b, 0x3e06, 0x4a60, 0x51c6, 0x525e, 0xb9e8, 0x4140, 0x27e3, 0x50fb, 0x84cb, 0x963f, 0x9b9f, 0x241c, 0xa439, 0x06ae, 
	0xa38b, 0xcda5, 0xcc68, 0xc2eb, 0xb707, 0xadea, 0xaa90, 0xaef8, 0xb6d4, 0xbb79, 0xc123, 0xc826, 0xcbfb, 0xb516, 0x9118, 0xd93b, 
	0xdc23, 0xd06b, 0xc7f7, 0xc5bb, 0xbe17, 0xb46c, 0xcba8, 0x7c2d, 0x802a, 0x7f35, 0x7c12, 0xa7bd, 0x1bc4, 0x2d84, 0xd4db, 0x05f8, 
	0xc90f, 0xd18a, 0xf51a, 0x38ee, 0x13d7, 0x3a31, 0xed09, 0xffe2, 0x09bf, 0x550d, 0x6292, 0x6b6b, 0x70b1, 0x7487, 0x7840, 0x7d11, 
	0x82f5, 0x8902, 0x8e46, 0x922a, 0x9491, 0x95bd, 0x960c, 0x95e1, 0x9593, 0x956b, 0xebf6, 0xedb8, 0xebb5, 0xe7f5, 0xe5a9, 0xe500, 
	0xe476, 0xe459, 0xe46e, 0xe45b, 0xe49d, 0xe5f9, 0xef0c, 0xffe1, 0xffe1, 0xef3f, 0xf09d, 0xeb3e, 0xffe1, 0xffe0, 0xffe0, 0xf04c, 
	0xee01, 0xe9dd, 0xe6ec, 0xe5c1, 0xe5f4, 0xe73c, 0xe928, 0xea5b, 0xeb27, 0xeb23, 0xe910, 0xe739, 0xe683, 0xe588, 0xe648, 0xed0f, 
	0xf3ff, 0xf4f1, 0xf57b, 0xf475, 0xeed6, 0xe960, 0xe778, 0xe7ca, 0xe968, 0xeb7f, 0xed4c, 0xe645, 0xe45a, 0xe45b, 0xe460, 0xe5f9, 
	0xebbc, 0xe9d6, 0xe5ce, 0xe477, 0xe45a, 0xe747, 0xf710, 0xffe1, 0xffe1, 0xf14f, 0xea48, 0xe76f, 0xe654, 0xe618, 0xe648, 0xe686, 
	0xe71a, 0xe7ca, 0xe880, 0xe92e, 0xe9d1, 0xea6b, 0xeafa, 0xeb77, 0xebd2, 0xebf6, 0xf607, 0xf7d3, 0xf5bf, 0xf075, 0xeb4e, 0xe906, 
	0xe5e4, 0xe3cb, 0xe20b, 0xe33f, 0xe70e, 0xec31, 0xf8fe, 0xff3e, 0xff3e, 0xf929, 0xfa34, 0xf535, 0xff3e, 0xff3e, 0xff3e, 0xf9f9, 
	0xf816, 0xf36f, 0xee74, 0xeb97, 0xec23, 0xef18, 0xf26b, 0xf419, 0xf519, 0xf515, 0xf246, 0xef13, 0xed89, 0xeae9, 0xecfd, 0xf72f, 
	0xfc49, 0xfcc0, 0xfd00, 0xfc84, 0xf8d1, 0xf2be, 0xef8e, 0xf027, 0xf2ca, 0xf581, 0xf76b, 0xecf4, 0xe3f0, 0xe33b, 0xe4cc, 0xec32, 
	0xf5c7, 0xf366, 0xebbc, 0xe5f1, 0xe422, 0xef2e, 0xfda4, 0xff3e, 0xff3e, 0xfab0, 0xf400, 0xef7d, 0xed19, 0xec84, 0xecfc, 0xed91, 
	0xeed4, 0xf028, 0xf163, 0xf274, 0xf360, 0xf42e, 0xf4e2, 0xf578, 0xf5e0, 0xf607, 0xdd4d, 0xe0eb, 0xdcc2, 0xd39b, 0xcb9d, 0xc827, 
	0xc35b, 0xc00b, 0xbd2a, 0xbf28, 0xc528, 0xccf6, 0xe380, 0xffcf, 0xffcf, 0xe3e1, 0xe66c, 0xdbbf, 0xffcf, 0xffcd, 0xffce, 0xe5d6, 
	0xe17a, 0xd892, 0xd06f, 0xcc0b, 0xcce1, 0xd171, 0xd6d5, 0xd9bc, 0xdb8d, 0xdb84, 0xd697, 0xd168, 0xcf04, 0xcb04, 0xce2d, 0xdf97, 
	0xec68, 0xee05, 0xeeef, 0xed32, 0xe317, 0xd761, 0xd22b, 0xd31e, 0xd776, 0xdc4d, 0xe012, 0xce20, 0xc045, 0xbf21, 0xc1a5, 0xccf8, 
	0xdcd1, 0xd882, 0xcc44, 0xc36f, 0xc095, 0xd193, 0xf195, 0xffcf, 0xffcf, 0xe7ae, 0xd990, 0xd210, 0xce58, 0xcd74, 0xce2c, 0xcf10, 
	0xd105, 0xd320, 0xd51d, 0xd6e4, 0xd877, 0xd9e1, 0xdb27, 0xdc3c, 0xdd02, 0xdd4d, 0x1fbb, 0x1e4c, 0x194c, 0x0c80, 0xee23, 0xd089, 
	0xc489, 0xc09a, 0xc1ba, 0xc996, 0xe7f6, 0x1acd, 0x2af2, 0x30a5, 0x3195, 0x2cbf, 0x12d8, 0x007d, 0x04d8, 0x0e98, 0x16ce, 0x18e4, 
	0x1574, 0x1009, 0x09a1, 0x0328, 0xfd3b, 0xf828, 0xf3fe, 0xf0af, 0xee49, 0xed53, 0xedfe, 0xf09e, 0xf664, 0x090c, 0x2102, 0x3518, 
	0x3f17, 0x3fd1, 0x4035, 0x4013, 0x3e45, 0x39d8, 0x32f6, 0x2695, 0x15ae, 0x08fe, 0x0479, 0x0493, 0x04f1, 0x0592, 0x0678, 0x07aa, 
	0x092a, 0x0afa, 0x0d1a, 0x0f81, 0x1221, 0x1774, 0x1da8, 0x2051, 0x2075, 0x2080, 0x2077, 0x205f, 0x203e, 0x201a, 0x1ff5, 0x1fd4, 
	0x1fb8, 0x1fa4, 0x1f98, 0x1f94, 0x1f97, 0x1f9e, 0x1fa8, 0x1fb1, 0x1fb8, 0x1fbb, 0x130f, 0x163a, 0x1e94, 0x295d, 0x2fb6, 0x2b7d, 
	0x24f2, 0x2217, 0x246c, 0x2b4f, 0x339e, 0x2bfb, 0x1818, 0x03e7, 0xf2d0, 0xe510, 0xe195, 0xe916, 0xecd0, 0xf537, 0xffe7, 0x07f2, 
	0x0c17, 0x0e9b, 0x0f77, 0x0efe, 0x0dc2, 0x0c65, 0x0b85, 0x0bed, 0x0d1e, 0x0dcf, 0x0c34, 0x098a, 0x0890, 0x0539, 0xf777, 0xfe28, 
	0x04a9, 0x03fe, 0x030f, 0x020f, 0x01bb, 0x0328, 0x0714, 0x0a5c, 0x073b, 0xff99, 0xfb84, 0xfc18, 0xfd74, 0xff68, 0x01c3, 0x044c, 
	0x06cf, 0x0913, 0x0ae2, 0x0c08, 0x0c55, 0x09d2, 0x0444, 0x00cf, 0x00ca, 0x0119, 0x01b5, 0x0293, 0x03aa, 0x04f1, 0x065c, 0x07e1, 
	0x0975, 0x0b0b, 0x0c9a, 0x0e14, 0x0f71, 0x10a4, 0x11a4, 0x1267, 0x12e3, 0x130f, 0x369b, 0x3554, 0x30bb, 0x247c, 0x06be, 0xe9c2, 
	0xde51, 0xdadb, 0xdafc, 0xdf7e, 0xf8c9, 0x2578, 0x2f55, 0x2ffd, 0x2f67, 0x312e, 0x4215, 0x4ca4, 0x4984, 0x42de, 0x3c2a, 0x3495, 
	0x2ba4, 0x22d4, 0x1a6d, 0x12d9, 0x0c52, 0x06c9, 0x01fa, 0xfd9d, 0xfa2a, 0xf8bb, 0xf972, 0xfc0c, 0x0172, 0x17e5, 0x286d, 0x2861, 
	0x2c97, 0x2c89, 0x2cc2, 0x2d34, 0x2ea1, 0x310e, 0x32eb, 0x2dfa, 0x226f, 0x193c, 0x158f, 0x14d8, 0x145c, 0x1417, 0x1403, 0x141d, 
	0x145f, 0x14c0, 0x1532, 0x159d, 0x15dd, 0x1a97, 0x22a5, 0x26fd, 0x27c4, 0x28a7, 0x29a2, 0x2aaf, 0x2bca, 0x2cee, 0x2e16, 0x2f3c, 
	0x305e, 0x3176, 0x327f, 0x3376, 0x3455, 0x3518, 0x35b9, 0x3633, 0x3680, 0x369b, };

JointIndex gSkelskelAttackfAnimJointIndices[22] = {
	{ 0x000a, 0x005a, 0x00aa, },
	{ 0x00fa, 0x014a, 0x019a, },
	{ 0x01ea, 0x023a, 0x028a, },
	{ 0x02da, 0x032a, 0x037a, },
	{ 0x03ca, 0x041a, 0x046a, },
	{ 0x04ba, 0x050a, 0x055a, },
	{ 0x05aa, 0x05fa, 0x064a, },
	{ 0x069a, 0x06ea, 0x073a, },
	{ 0x078a, 0x07da, 0x082a, },
	{ 0x087a, 0x08ca, 0x091a, },
	{ 0x096a, 0x09ba, 0x0a0a, },
	{ 0x0000, 0x0001, 0x0002, },
	{ 0x0a5a, 0x0003, 0x0004, },
	{ 0x0aaa, 0x0afa, 0x0b4a, },
	{ 0x0b9a, 0x0bea, 0x0c3a, },
	{ 0x0c8a, 0x0cda, 0x0d2a, },
	{ 0x0d7a, 0x0dca, 0x0e1a, },
	{ 0x0e6a, 0x0eba, 0x0f0a, },
	{ 0x0f5a, 0x0faa, 0x0ffa, },
	{ 0x0005, 0x0006, 0x0007, },
	{ 0x0008, 0x0008, 0x0008, },
	{ 0x0009, 0x0008, 0x0009, },
};

AnimationHeader gSkelskelAttackfAnim = { { 80 }, gSkelskelAttackfAnimFrameData, gSkelskelAttackfAnimJointIndices, 10 };

