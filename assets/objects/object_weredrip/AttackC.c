#include "ultra64.h"
#include "global.h"

s16 gWereCitAttackcAnimFrameData[1666] = {
	0x0000, 0x3686, 0xe83b, 0x18f5, 0x002f, 0x0001, 0xfef0, 0xf135, 0xff98, 0x43ec, 0xfd31, 0xfdc4, 0xff82, 0x02b3, 0x07cc, 0x0f14, 
	0x1783, 0x1daf, 0x119e, 0xe7c1, 0xd7b1, 0xe754, 0x1936, 0x2c9d, 0x3309, 0x3a4a, 0x40ba, 0x468a, 0x4ad9, 0x4c8c, 0x4b98, 0x491e, 
	0x45ac, 0x41dd, 0x3e2f, 0x3ab1, 0x3751, 0x33ff, 0x30ac, 0x2d46, 0x29bd, 0x2605, 0x2224, 0x1e32, 0x1a3b, 0x164c, 0x126e, 0x0eb1, 
	0x0b23, 0x07d5, 0x04da, 0x0244, 0x0025, 0xfe8b, 0xfd8a, 0xfd31, 0x0000, 0xfdd1, 0xf801, 0xefc5, 0xe6ba, 0xdebb, 0xd922, 0xd607, 
	0xcfd4, 0xcef1, 0xd385, 0xcf2a, 0xd462, 0xecf4, 0x0890, 0x1533, 0x1589, 0x150a, 0x1435, 0x13c3, 0x13e7, 0x1434, 0x147e, 0x149f, 
	0x1491, 0x145d, 0x1409, 0x1396, 0x1304, 0x1251, 0x1179, 0x1074, 0x0f29, 0x0d95, 0x0bd1, 0x09f7, 0x0820, 0x0662, 0x04d0, 0x0374, 
	0x0255, 0x0174, 0x00cc, 0x0059, 0x0016, 0x0000, 0xffff, 0xff41, 0xfd1b, 0xf96f, 0xf3e3, 0xec45, 0xe3ab, 0xdd8a, 0xe842, 0x0f75, 
	0x1e06, 0x1341, 0xed2e, 0xe8fa, 0xf3c5, 0xfca9, 0xffda, 0x02f8, 0x0552, 0x0640, 0x05ca, 0x0497, 0x02ef, 0x0126, 0xff7e, 0xfe00, 
	0xfca2, 0xfb5d, 0xfa29, 0xf900, 0xf7db, 0xf6b8, 0xf5cf, 0xf55c, 0xf55c, 0xf5c7, 0xf68f, 0xf7a3, 0xf8ec, 0xfa52, 0xfbbd, 0xfd14, 
	0xfe40, 0xff2d, 0xffc8, 0xffff, 0x1f3c, 0x1f31, 0x1f33, 0x1f8b, 0x206e, 0x21d2, 0x2348, 0x23f7, 0x23f7, 0x23f7, 0x23f7, 0x2248, 
	0x1904, 0x0fa3, 0x18d6, 0x1896, 0x18a3, 0x18ad, 0x18b4, 0x18b7, 0x18b7, 0x18b7, 0x18b7, 0x18b7, 0x18b7, 0x18b8, 0x18b8, 0x18ba, 
	0x18bc, 0x18c0, 0x18c6, 0x18ce, 0x18df, 0x1902, 0x193b, 0x198f, 0x1a00, 0x1a8e, 0x1b36, 0x1bf2, 0x1cb6, 0x1d78, 0x1e29, 0x1eb9, 
	0x1f19, 0x1f3c, 0x0313, 0x0494, 0x0884, 0x0df6, 0x13e2, 0x1936, 0x1cf9, 0x1e64, 0x1e64, 0x1e64, 0x1e64, 0x233c, 0x2b1b, 0x2da7, 
	0x25dc, 0x1c3b, 0x1b6e, 0x1abf, 0x1a42, 0x1a13, 0x1a13, 0x1a13, 0x1a13, 0x1a13, 0x1a13, 0x1a0e, 0x1a03, 0x19ee, 0x19ca, 0x1994, 
	0x194a, 0x18e6, 0x1832, 0x1705, 0x1573, 0x1391, 0x1176, 0x0f3a, 0x0cf3, 0x0abc, 0x08a9, 0x06d1, 0x0545, 0x0418, 0x0357, 0x0313, 
	0x02f4, 0x03b2, 0x05a5, 0x0872, 0x0bc5, 0x0f35, 0x120f, 0x1343, 0x1343, 0x1343, 0x1343, 0x0b0a, 0xf601, 0xe69c, 0x01ea, 0x154d, 
	0x151b, 0x14c6, 0x1475, 0x1451, 0x1451, 0x1451, 0x1451, 0x1451, 0x1450, 0x144d, 0x1445, 0x1434, 0x1419, 0x13f0, 0x13b8, 0x136d, 
	0x12e6, 0x1207, 0x10e1, 0x0f84, 0x0e00, 0x0c62, 0x0ab9, 0x0912, 0x077e, 0x060b, 0x04cc, 0x03d1, 0x032e, 0x02f4, 0x0094, 0xff73, 
	0xfc8a, 0xf844, 0xf1c9, 0x5c8e, 0x0f18, 0x051c, 0x051c, 0x051c, 0x051c, 0x1d77, 0x2c83, 0x301f, 0x2b44, 0x22ee, 0x1dae, 0x1991, 
	0x11f9, 0x67da, 0x3e33, 0x37d4, 0x36c4, 0x354a, 0x32cb, 0x30c9, 0x2ec0, 0x2c5a, 0x2973, 0x2618, 0x2282, 0x1f06, 0x1bba, 0x187d, 
	0x1553, 0x1246, 0x0f5b, 0x0c9b, 0x0a0f, 0x07be, 0x05b1, 0x03f0, 0x0285, 0x0177, 0x00ce, 0x0094, 0x0777, 0x0a90, 0x131f, 0x1fe0, 
	0x2e4d, 0x457a, 0x4595, 0x486a, 0x486a, 0x486a, 0x486a, 0x4d78, 0x5b92, 0x63be, 0x60a9, 0x5b4b, 0x561b, 0x5104, 0x4af4, 0x39ca, 
	0x2f52, 0x1e1a, 0x0e36, 0x0415, 0xff11, 0xfc83, 0xfbde, 0xfc8b, 0xfdf4, 0xff87, 0x00cc, 0x0166, 0x019b, 0x01dd, 0x0230, 0x0296, 
	0x0310, 0x039c, 0x0435, 0x04d7, 0x0579, 0x0615, 0x06a0, 0x0710, 0x075b, 0x0777, 0x8e48, 0x8f11, 0x90db, 0x9283, 0x91d7, 0x0165, 
	0xb720, 0xae4f, 0xae4f, 0xae4f, 0xae4f, 0xc57f, 0xd225, 0xd450, 0xce8d, 0xc4bd, 0xbf29, 0xbba3, 0xb456, 0x0913, 0xdbc0, 0xcf8e, 
	0xc7cf, 0xc133, 0xbb1b, 0xb508, 0xaef1, 0xa8f3, 0xa33b, 0x9e05, 0x99a5, 0x9682, 0x9460, 0x92ad, 0x9159, 0x9057, 0x8f97, 0x8f0e, 
	0x8eb1, 0x8e74, 0x8e51, 0x8e40, 0x8e3b, 0x8e3f, 0x8e45, 0x8e48, 0xed77, 0xe3ed, 0xdcb1, 0xce7d, 0xaaea, 0xec28, 0xe58d, 0xe9f6, 
	0x6ca7, 0xed08, 0xed9c, 0x63b6, 0x5a23, 0xf2ad, 0xfa58, 0xe356, 0xdee2, 0xdff8, 0xe276, 0xdf28, 0xd21b, 0xbe47, 0xb05a, 0x2abb, 
	0x2780, 0x22fe, 0x1e68, 0x1b55, 0x1b17, 0x1dbb, 0xa1a9, 0xa418, 0xa48c, 0x2442, 0x262c, 0x2040, 0x1a4d, 0x147c, 0x0ee9, 0x09a9, 
	0x0194, 0xf9fc, 0xf48f, 0xf0ad, 0xee4a, 0xed77, 0x08ce, 0x07ee, 0x1497, 0x287f, 0x38bc, 0x4c84, 0x5712, 0x62af, 0x1687, 0x67f7, 
	0x6644, 0x18ee, 0x0f13, 0x8119, 0x6998, 0x57f7, 0x5c3d, 0x5af9, 0x5912, 0x5299, 0x5074, 0x5256, 0x57fb, 0x22b7, 0x201b, 0x1f98, 
	0x209d, 0x228c, 0x2499, 0x25a9, 0x5b5b, 0x5e15, 0x6157, 0x1b19, 0x164d, 0x14c7, 0x132a, 0x118a, 0x0ffd, 0x0e96, 0x0d87, 0x0c2a, 
	0x0ad3, 0x09bf, 0x090d, 0x08ce, 0x684d, 0x56ea, 0x3de7, 0x27d7, 0x0037, 0x4156, 0x3d0a, 0x4189, 0xc3d5, 0x3fad, 0x3a2a, 0xc160, 
	0xc01f, 0x304f, 0x33dc, 0x0c4a, 0xfea7, 0xfde9, 0xfef1, 0x0a9f, 0x0742, 0xfa7a, 0xf11d, 0x6d91, 0x6cb3, 0x6cd8, 0x6dd2, 0x6ff4, 
	0x739e, 0x7865, 0xfcd0, 0xff28, 0xffaf, 0x7f9b, 0x8068, 0x7e2e, 0x7be8, 0x79af, 0x7791, 0x7593, 0x71cb, 0x6e1d, 0x6b91, 0x69c6, 
	0x68ae, 0x684d, 0x109f, 0x1dc0, 0x234d, 0x2845, 0x2766, 0x25df, 0x2417, 0x1dd3, 0x1b7c, 0x1c8a, 0x1a8f, 0x2bf2, 0x3e37, 0x2e3c, 
	0x2be9, 0x0d83, 0x0040, 0x0040, 0x0040, 0x1882, 0x24e2, 0x2bd9, 0x2eab, 0x2e9f, 0x2e1e, 0x2e17, 0x2d99, 0x2be5, 0x28b5, 0x2431, 
	0x1eb4, 0x18b1, 0x125f, 0x0b77, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x053d, 0x0a6c, 0x0d65, 0x0f41, 0x1049, 0x109f, 
	0xfcbe, 0xf7b5, 0xf4c1, 0xf1bf, 0xf24c, 0xf33c, 0xf44c, 0xf7ab, 0xf8c6, 0xf849, 0xf930, 0xef57, 0xe284, 0xedc7, 0xef5d, 0xfd85, 
	0xff06, 0xff06, 0xff06, 0xfa0e, 0xf3d5, 0xef68, 0xed7b, 0xed83, 0xeddc, 0xede1, 0xee38, 0xef5f, 0xf178, 0xf43d, 0xf73b, 0xf9fb, 
	0xfc3c, 0xfdf1, 0xff06, 0xff06, 0xff06, 0xff06, 0xff06, 0xff06, 0xfecc, 0xfe21, 0xfd8b, 0xfd1b, 0xfcd6, 0xfcbe, 0x0afa, 0x12e7, 
	0x15dc, 0x183b, 0x17d6, 0x1720, 0x1642, 0x12f2, 0x119d, 0x1238, 0x1113, 0x19c6, 0x1ded, 0x1aa2, 0x19c2, 0x08f9, 0x002b, 0x002b, 
	0x002b, 0x0fdd, 0x16a6, 0x19bc, 0x1ac9, 0x1ac5, 0x1a97, 0x1a94, 0x1a67, 0x19c1, 0x186c, 0x164f, 0x136e, 0x0ffa, 0x0c16, 0x07a3, 
	0x002b, 0x002b, 0x002b, 0x002b, 0x002b, 0x002b, 0x0383, 0x06f3, 0x08e5, 0x0a19, 0x0ac3, 0x0afa, 0xcc96, 0xcad5, 0xc571, 0xbb87, 
	0xacf9, 0x1dee, 0x13e5, 0x1075, 0x1075, 0x1075, 0x1075, 0x14c9, 0x1e08, 0xa73b, 0xbb4f, 0xdb11, 0xcfa3, 0xbcc3, 0xb267, 0xb174, 
	0xb69e, 0xbd18, 0xc2c6, 0xc5ad, 0xc557, 0xc323, 0xc00f, 0xbd5a, 0xbc58, 0xbe0f, 0xc209, 0xc484, 0xc460, 0xc419, 0xc3ed, 0xc408, 
	0xc479, 0xc53a, 0xc639, 0xc763, 0xc89f, 0xc9d4, 0xcaea, 0xcbcb, 0xcc60, 0xcc96, 0x163d, 0x181d, 0x1cc4, 0x223b, 0x25df, 0x59df, 
	0x5b89, 0x5c83, 0x5c83, 0x5c83, 0x5c83, 0x5d5a, 0x5f2e, 0x2064, 0x2cb1, 0x32f0, 0x3204, 0x2d1b, 0x253e, 0x1e52, 0x18fa, 0x1460, 
	0x1137, 0x0fbc, 0x107d, 0x13cf, 0x1980, 0x20dd, 0x2884, 0x2ee4, 0x32ef, 0x344f, 0x33e0, 0x32a7, 0x30c0, 0x2e48, 0x2b62, 0x2832, 
	0x24e2, 0x219c, 0x1e87, 0x1bc8, 0x197d, 0x17be, 0x16a1, 0x163d, 0xe668, 0xe4e0, 0xe011, 0xd6ec, 0xc930, 0x3ade, 0x3159, 0x2e1c, 
	0x2e1c, 0x2e1c, 0x2e1c, 0x320b, 0x3ab8, 0xc44e, 0xd2bc, 0xed1b, 0xe3e2, 0xd580, 0xce9f, 0xcc8b, 0xcb1e, 0xc911, 0xc758, 0xc742, 
	0xc9c6, 0xcea3, 0xd549, 0xdd1d, 0xe5bc, 0xef00, 0xf7d2, 0xfc09, 0xfb85, 0xfa2e, 0xf859, 0xf648, 0xf420, 0xf1f4, 0xefd0, 0xedc0, 
	0xebd1, 0xea12, 0xe895, 0xe76d, 0xe6ac, 0xe668, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
	0x8000, 0x8000, 0x8000, 0x8000, 0xd4c7, 0xcb56, 0xc684, 0xc418, 0xc2d0, 0xc267, 0xc2f8, 0xc462, 0xc642, 0xc81b, 0xc99d, 0xcade, 
	0xcbd6, 0xcc85, 0xccf9, 0xcd47, 0xcd8a, 0xcde5, 0xce53, 0xceb9, 0xcf19, 0xcf74, 0xcfca, 0xd01b, 0xd067, 0xd0ad, 0xd0ed, 0xd125, 
	0xd156, 0xd17f, 0xd19e, 0x8000, 0x4000, 0x3e6f, 0x3a5a, 0x34b4, 0x2e84, 0x28dd, 0x24c8, 0x2337, 0x2337, 0x2337, 0x2337, 0x276a, 
	0x317a, 0x3d59, 0x3234, 0x1f0b, 0x13e6, 0x0d6c, 0x0a3a, 0x095a, 0x0b2f, 0x0f9c, 0x1507, 0x19f1, 0x1d9a, 0x2045, 0x2222, 0x2365, 
	0x2443, 0x24f0, 0x259f, 0x2685, 0x27d2, 0x2987, 0x2b90, 0x2dd7, 0x3047, 0x32cb, 0x354d, 0x37b7, 0x39f4, 0x3bf2, 0x3d9e, 0x3ee5, 
	0x3fb6, 0x4000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x5682, 0x4ffd, 0x4d20, 0x4bfe, 0x4b69, 0x4b33, 0x4b5d, 0x4bdb, 0x4caf, 0x4da6, 0x4e88, 0x4f58, 0x5001, 0x507a, 0x50c9, 0x50f9, 
	0x511f, 0x5154, 0x518e, 0x51b3, 0x51c9, 0x51d3, 0x51d4, 0x51cf, 0x51c6, 0x51bc, 0x51b2, 0x51a9, 0x51a4, 0x51a3, 0x51a8, 0x0000, 
	0xf945, 0xf58e, 0xeea2, 0xe6ac, 0xdf63, 0xdbef, 0xe0d3, 0xf60c, 0xf60c, 0xf60c, 0xf60c, 0xf559, 0xf652, 0xf8ab, 0xfe65, 0x068b, 
	0x08a3, 0x094a, 0x095c, 0x0950, 0x0936, 0x08d9, 0x082e, 0x075a, 0x069b, 0x0603, 0x0590, 0x053e, 0x0501, 0x04ce, 0x0498, 0x0451, 
	0x03e9, 0x027f, 0x0140, 0x0009, 0xfed6, 0xfdb1, 0xfca2, 0xfbb2, 0xfae8, 0xfa47, 0xf9d0, 0xf981, 0xf954, 0xf945, 0xf3a4, 0xf366, 
	0xf2a1, 0xf171, 0xee75, 0xe5c1, 0xd8a1, 0xd001, 0xd001, 0xd001, 0xd001, 0xd596, 0xe274, 0xf0a2, 0xfb12, 0xfd51, 0xfb12, 0xf945, 
	0xf82d, 0xf7cf, 0xf850, 0xf97b, 0xfacb, 0xfbcb, 0xfc63, 0xfcc3, 0xfcfc, 0xfd1b, 0xfd26, 0xfd24, 0xfd18, 0xfd06, 0xfcd8, 0xfc39, 
	0xfba5, 0xfb01, 0xfa48, 0xf978, 0xf894, 0xf7a2, 0xf6ac, 0xf5bf, 0xf4eb, 0xf43f, 0xf3cd, 0xf3a4, 0x07ea, 0x0e95, 0x17ef, 0x1ef8, 
	0x226c, 0x2107, 0x193e, 0x0342, 0x0342, 0x0342, 0x0342, 0x04c6, 0x0645, 0x0798, 0x1447, 0x2056, 0x2c42, 0x32f2, 0x3637, 0x371d, 
	0x3542, 0x30c1, 0x2b27, 0x25f8, 0x220c, 0x1f25, 0x1d19, 0x1bb3, 0x1abf, 0x1a02, 0x1944, 0x184b, 0x16e5, 0x188f, 0x1888, 0x17ae, 
	0x164d, 0x148f, 0x1293, 0x1078, 0x0e5b, 0x0c5b, 0x0a97, 0x092e, 0x083f, 0x07ea, 0x0256, 0x03c0, 0x055a, 0x0628, 0x065d, 0x05e2, 
	0x0404, 0x0129, 0x0129, 0x0129, 0x0129, 0x0174, 0x01f0, 0x0248, 0x022a, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 
	0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x00e9, 0x016a, 0x01c5, 0x0208, 0x0239, 
	0x0259, 0x026b, 0x0272, 0x0271, 0x026a, 0x0260, 0x0259, 0x0256, 0x021f, 0x02db, 0x0464, 0x05cf, 0x0661, 0x053c, 0x030c, 0x01cc, 
	0x01cc, 0x01cc, 0x01cc, 0x01db, 0x01fc, 0x021a, 0x020f, 0x01b2, 0x01b2, 0x01b2, 0x01b2, 0x01b2, 0x01b2, 0x01b2, 0x01b2, 0x01b2, 
	0x01b2, 0x01b2, 0x01b2, 0x01b2, 0x01b2, 0x01b2, 0x01b2, 0x01b2, 0x01b2, 0x01c2, 0x01d9, 0x01f0, 0x0204, 0x0214, 0x0220, 0x0227, 
	0x022a, 0x0229, 0x0226, 0x0223, 0x0220, 0x021f, 0xf159, 0xe78f, 0xd9ee, 0xcfec, 0xcc37, 0xd3d3, 0xe58b, 0xf8d6, 0xf8d6, 0xf8d6, 
	0xf8d6, 0xf6ff, 0xf3f0, 0xf1b2, 0xf274, 0xff9d, 0xff9d, 0xff9d, 0xff9d, 0xff9d, 0xff9d, 0xff9d, 0xff9d, 0xff9d, 0xff9d, 0xff9d, 
	0xff9d, 0xff9e, 0xff9e, 0xff9e, 0xff9e, 0xff9e, 0xff9e, 0xfa64, 0xf73f, 0xf4ff, 0xf34f, 0xf216, 0xf144, 0xf0cb, 0xf09d, 0xf0a8, 
	0xf0d7, 0xf113, 0xf145, 0xf159, 0x0748, 0x06b3, 0x0594, 0x0505, 0x0646, 0x0865, 0x0a56, 0x0b2e, 0x0b2e, 0x0b2e, 0x0b2e, 0x0519, 
	0x031a, 0x0c3d, 0x0ed3, 0x0dd1, 0x0f0e, 0x0f63, 0x0f32, 0x0f0a, 0x0f13, 0x0f06, 0x0eb3, 0x0e1f, 0x0e03, 0x0dc4, 0x0d88, 0x0d58, 
	0x0d34, 0x0d14, 0x0cf3, 0x0cc7, 0x0c87, 0x0c33, 0x0bd2, 0x0b68, 0x0af5, 0x0a7b, 0x09fa, 0x0976, 0x08f1, 0x0871, 0x07fd, 0x079f, 
	0x075f, 0x0748, 0x0c11, 0x0a29, 0x0557, 0xff0c, 0xf903, 0xf354, 0xef7a, 0xee0e, 0xee0e, 0xee0e, 0xee0e, 0xf0d7, 0xfcca, 0x097c, 
	0x08a4, 0x00e5, 0xff22, 0xfd16, 0xfc22, 0xfbe6, 0xfc7d, 0xfde6, 0xff90, 0x00ec, 0x004c, 0x004d, 0x0075, 0x00a0, 0x00cc, 0x00fc, 
	0x0138, 0x0189, 0x020f, 0x02de, 0x03e3, 0x050b, 0x0640, 0x076f, 0x0886, 0x097c, 0x0a4a, 0x0af0, 0x0b6f, 0x0bc8, 0x0bff, 0x0c11, 
	0x07e6, 0x06e9, 0x0441, 0xffd5, 0xf859, 0xf657, 0xf4b4, 0xf405, 0xf405, 0xf405, 0xf405, 0x00fb, 0x1300, 0x1e46, 0x290b, 0x2c5b, 
	0x33fd, 0x3af4, 0x3e66, 0x3f5d, 0x3d67, 0x38a4, 0x32b5, 0x2d37, 0x2d54, 0x2c1c, 0x2adc, 0x29ea, 0x2941, 0x28c4, 0x2847, 0x279a, 
	0x269d, 0x2547, 0x2388, 0x215c, 0x1ec8, 0x1bd9, 0x18aa, 0x1559, 0x120b, 0x0eea, 0x0c24, 0x09e9, 0x086e, 0x07e6, 0xfec1, 0xfeca, 
	0xfeed, 0xff40, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfea7, 0xfd40, 0xfced, 0xfd70, 0xff52, 0xfff8, 0xfff8, 
	0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xff61, 0xff22, 0xff03, 0xfef1, 0xfee6, 0xfedc, 0xfed2, 0xfec7, 0xfeb6, 0xfea2, 
	0xfe8f, 0xfe7e, 0xfe73, 0xfe6d, 0xfe6e, 0xfe74, 0xfe80, 0xfe8f, 0xfea0, 0xfeb0, 0xfebc, 0xfec1, 0xff67, 0xff6b, 0xff77, 0xff8e, 
	0xffa3, 0xffa3, 0xffa3, 0xffa3, 0xffa3, 0xffa3, 0xffa3, 0xff5d, 0xfe44, 0xfdbf, 0xfe7e, 0xff91, 0xffa3, 0xffa3, 0xffa3, 0xffa3, 
	0xffa3, 0xffa3, 0xffa3, 0xffa3, 0xff94, 0xff86, 0xff7e, 0xff78, 0xff74, 0xff71, 0xff6e, 0xff69, 0xff63, 0xff5b, 0xff52, 0xff4a, 
	0xff44, 0xff41, 0xff42, 0xff45, 0xff4b, 0xff52, 0xff59, 0xff60, 0xff65, 0xff67, 0xf0e7, 0xf160, 0xf312, 0xf715, 0xffac, 0xffac, 
	0xffac, 0xffac, 0xffac, 0xffac, 0xffac, 0xefa4, 0xda47, 0xd304, 0xddc3, 0xf7ed, 0xffac, 0xffab, 0xffab, 0xffab, 0xffab, 0xffac, 
	0xffac, 0xffac, 0xf8a7, 0xf5a1, 0xf425, 0xf34b, 0xf2ba, 0xf243, 0xf1c7, 0xf132, 0xf063, 0xef62, 0xee63, 0xed8b, 0xecf2, 0xeca7, 
	0xecae, 0xed04, 0xed9d, 0xee66, 0xef43, 0xf013, 0xf0ad, 0xf0e7, 0x0642, 0x0642, 0x0642, 0x0642, 0x0642, 0x0642, 0x0642, 0x0642, 
	0x0642, 0x0642, 0x0642, 0x0642, 0x0642, 0x0642, 0x05c4, 0x0531, 0x0534, 0x0539, 0x053e, 0x0540, 0x0540, 0x0540, 0x0540, 0x0540, 
	0x0540, 0x0541, 0x0541, 0x0542, 0x0544, 0x0547, 0x054a, 0x054f, 0x0558, 0x0566, 0x0579, 0x058f, 0x05a7, 0x05c0, 0x05d9, 0x05f1, 
	0x0607, 0x061b, 0x062b, 0x0637, 0x063f, 0x0642, 0x039f, 0x039f, 0x039f, 0x039f, 0x039f, 0x039f, 0x039f, 0x039f, 0x039f, 0x039f, 
	0x039f, 0x039f, 0x039f, 0x039f, 0x0443, 0x04d6, 0x04d4, 0x04cf, 0x04ca, 0x04c8, 0x04c8, 0x04c8, 0x04c8, 0x04c8, 0x04c8, 0x04c8, 
	0x04c8, 0x04c7, 0x04c5, 0x04c3, 0x04bf, 0x04bb, 0x04b3, 0x04a5, 0x0493, 0x047c, 0x0463, 0x0447, 0x042a, 0x040d, 0x03f1, 0x03d7, 
	0x03c0, 0x03af, 0x03a3, 0x039f, 0x42ec, 0x42ec, 0x42ec, 0x42ec, 0x42ec, 0x42ec, 0x42ec, 0x42ec, 0x42ec, 0x42ec, 0x42ec, 0x42ec, 
	0x42ec, 0x42ec, 0x3daa, 0x3863, 0x3877, 0x38a4, 0x38d1, 0x38e6, 0x38e6, 0x38e6, 0x38e6, 0x38e6, 0x38e6, 0x38e8, 0x38ed, 0x38f6, 
	0x3906, 0x391d, 0x393d, 0x3968, 0x39b6, 0x3a37, 0x3ae3, 0x3bb0, 0x3c95, 0x3d89, 0x3e82, 0x3f78, 0x4060, 0x4133, 0x41e7, 0x4272, 
	0x42cc, 0x42ec, };

JointIndex gWereCitAttackcAnimJointIndices[17] = {
	{ 0x0000, 0x0000, 0x0000, },
	{ 0x0000, 0x0000, 0x0000, },
	{ 0x000a, 0x0038, 0x0066, },
	{ 0x0094, 0x00c2, 0x00f0, },
	{ 0x011e, 0x014c, 0x017a, },
	{ 0x01a8, 0x01d6, 0x0204, },
	{ 0x0232, 0x0260, 0x028e, },
	{ 0x02bc, 0x02ea, 0x0318, },
	{ 0x0001, 0x0002, 0x0003, },
	{ 0x0004, 0x0005, 0x0006, },
	{ 0x0346, 0x0374, 0x03a2, },
	{ 0x03d0, 0x03fe, 0x042c, },
	{ 0x045a, 0x0488, 0x04b6, },
	{ 0x0007, 0x0008, 0x0009, },
	{ 0x04e4, 0x0512, 0x0540, },
	{ 0x056e, 0x059c, 0x05ca, },
	{ 0x05f8, 0x0626, 0x0654, },
};

AnimationHeader gWereCitAttackcAnim = { { 46 }, gWereCitAttackcAnimFrameData, gWereCitAttackcAnimJointIndices, 10 };
