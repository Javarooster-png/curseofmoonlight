#include "ultra64.h"
#include "global.h"

s16 gWereCitIdle3AnimFrameData[1796] = {
	0x0000, 0xfd31, 0xffff, 0xfb8d, 0x0932, 0x8d42, 0xcc96, 0x163d, 0xe668, 0x3686, 0xe83b, 0x18f5, 0x002f, 0x0001, 0xfef0, 0xf135, 
	0xff98, 0x43ec, 0x0642, 0x039f, 0x42ec, 0x0000, 0xffa0, 0xfe92, 0xfcee, 0xfaca, 0xf83f, 0xf565, 0xf256, 0xef2d, 0xec05, 0xe8f7, 
	0xe61e, 0xe38f, 0xe161, 0xdfa9, 0xde7c, 0xddf0, 0xde1c, 0xdefd, 0xe08b, 0xe2be, 0xe58f, 0xe8f5, 0xece5, 0xf150, 0xf622, 0xfb42, 
	0x0093, 0x05f1, 0x0b3d, 0x1057, 0x1521, 0x1986, 0x1d73, 0x20db, 0x23b5, 0x25fa, 0x27a4, 0x28ab, 0x2906, 0x28c2, 0x2801, 0x26cd, 
	0x2532, 0x233c, 0x20f7, 0x1e70, 0x1bb4, 0x18d3, 0x15dc, 0x12de, 0x0fea, 0x0d0f, 0x0a5c, 0x07df, 0x05a5, 0x03ba, 0x022a, 0x00fe, 
	0x0041, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1f3c, 0x1f36, 0x1f26, 0x1f0c, 
	0x1eec, 0x1ec8, 0x1ea2, 0x1e7b, 0x1e55, 0x1e31, 0x1e10, 0x1df3, 0x1dda, 0x1dc6, 0x1db7, 0x1dad, 0x1daa, 0x1dac, 0x1db4, 0x1dc1, 
	0x1dd2, 0x1de8, 0x1e03, 0x1e22, 0x1e47, 0x1e71, 0x1e9f, 0x1ed3, 0x1f0c, 0x1f49, 0x1f8b, 0x1fcf, 0x2016, 0x205d, 0x20a1, 0x20e0, 
	0x2117, 0x2142, 0x215c, 0x2164, 0x215c, 0x214b, 0x2132, 0x2114, 0x20f1, 0x20cb, 0x20a3, 0x207b, 0x2053, 0x202c, 0x2006, 0x1fe3, 
	0x1fc3, 0x1fa5, 0x1f8b, 0x1f74, 0x1f61, 0x1f51, 0x1f46, 0x1f3f, 0x1f3c, 0x1f3c, 0x1f3c, 0x1f3c, 0x1f3c, 0x1f3c, 0x1f3c, 0x1f3c, 
	0x1f3c, 0x1f3c, 0x1f3c, 0x0313, 0x02bf, 0x01d4, 0x0063, 0xfe82, 0xfc46, 0xf9c3, 0xf711, 0xf446, 0xf17b, 0xeec9, 0xec46, 0xea08, 
	0xe827, 0xe6b6, 0xe5ca, 0xe577, 0xe5b8, 0xe675, 0xe7a4, 0xe93c, 0xeb35, 0xed86, 0xf026, 0xf309, 0xf623, 0xf967, 0xfcc5, 0x002f, 
	0x0392, 0x06de, 0x0a04, 0x0cf4, 0x0fa2, 0x11ff, 0x1402, 0x15a1, 0x16d1, 0x178a, 0x17c2, 0x1794, 0x1728, 0x1684, 0x15af, 0x14ae, 
	0x1389, 0x1246, 0x10ec, 0x0f81, 0x0e0c, 0x0c93, 0x0b1f, 0x09b5, 0x085d, 0x071d, 0x05fc, 0x0501, 0x0433, 0x0397, 0x0335, 0x0313, 
	0x0313, 0x0313, 0x0313, 0x0313, 0x0313, 0x0313, 0x0313, 0x0313, 0x0313, 0x0313, 0x02f4, 0x02ed, 0x02dc, 0x02c2, 0x02a1, 0x027c, 
	0x0254, 0x022c, 0x0204, 0x01de, 0x01bb, 0x019b, 0x0180, 0x0169, 0x0159, 0x014e, 0x014a, 0x014d, 0x0156, 0x0163, 0x0176, 0x018e, 
	0x01ab, 0x01cc, 0x01f3, 0x021e, 0x024f, 0x0284, 0x02bf, 0x02fd, 0x0340, 0x0386, 0x03ce, 0x0416, 0x045c, 0x049c, 0x04d4, 0x04ff, 
	0x051b, 0x0523, 0x051c, 0x050b, 0x04f3, 0x04d4, 0x04b1, 0x048b, 0x0463, 0x043a, 0x0411, 0x03ea, 0x03c4, 0x03a0, 0x037e, 0x0360, 
	0x0345, 0x032d, 0x0319, 0x0309, 0x02fe, 0x02f6, 0x02f4, 0x02f4, 0x02f4, 0x02f4, 0x02f4, 0x02f4, 0x02f4, 0x02f4, 0x02f4, 0x02f4, 
	0x02f4, 0xf092, 0xf093, 0xf09b, 0xf0b0, 0xf0d9, 0xf119, 0xf172, 0xf1e3, 0xf26a, 0xf304, 0xf3ac, 0xf45e, 0xf511, 0xf5bc, 0xf653, 
	0xf6ca, 0xf715, 0xf768, 0xf7ff, 0xf8ea, 0xfa45, 0xfc31, 0xfec2, 0x01ca, 0x049e, 0x063e, 0x05f7, 0x03f2, 0x00fa, 0xfe13, 0xfbe3, 
	0xfa7d, 0xf9d6, 0xf9de, 0xfa85, 0xfbaa, 0xfd1f, 0xfe9b, 0xffc4, 0x003b, 0x000f, 0xff98, 0xfee8, 0xfe0f, 0xfd16, 0xfc03, 0xfad5, 
	0xf988, 0xf81d, 0xf698, 0xf50a, 0xf38a, 0xf235, 0xf122, 0xf063, 0xeffa, 0xefe1, 0xf002, 0xf040, 0xf07a, 0xf092, 0xf092, 0xf092, 
	0xf092, 0xf092, 0xf092, 0xf092, 0xf092, 0xf092, 0xf092, 0xf092, 0xf40b, 0xf3bd, 0xf2e1, 0xf18e, 0xefd8, 0xedd8, 0xeba3, 0xe952, 
	0xe6fb, 0xe4b6, 0xe297, 0xe0b0, 0xdf0d, 0xddb8, 0xdcb8, 0xdc11, 0xdbca, 0xdb86, 0xdae3, 0xd9d6, 0xd858, 0xd66f, 0xd44c, 0xd249, 
	0xd0cd, 0xd017, 0xd034, 0xd11b, 0xd2b9, 0xd50c, 0xd807, 0xdb7d, 0xdf42, 0xe326, 0xe6f0, 0xea64, 0xed4b, 0xef7a, 0xf0d6, 0xf14f, 
	0xf116, 0xf075, 0xef77, 0xee2c, 0xeca6, 0xeafd, 0xe94d, 0xe7bb, 0xe66b, 0xe585, 0xe52d, 0xe57f, 0xe684, 0xe82a, 0xea4a, 0xeca5, 
	0xeefa, 0xf10b, 0xf2a7, 0xf3af, 0xf40b, 0xf40b, 0xf40b, 0xf40b, 0xf40b, 0xf40b, 0xf40b, 0xf40b, 0xf40b, 0xf40b, 0xf40b, 0x6c6a, 
	0x6c73, 0x6c8c, 0x6cb2, 0x6ce2, 0x6d15, 0x6d45, 0x6d6c, 0x6d83, 0x6d89, 0x6d7e, 0x6d64, 0x6d3f, 0x6d12, 0x6cde, 0x6c9e, 0x6c52, 
	0x6bc3, 0x6acc, 0x697a, 0x67c7, 0x6597, 0x62cd, 0x5f81, 0x5c40, 0x59fe, 0x5967, 0x5a58, 0x5c0d, 0x5d89, 0x5e43, 0x5e64, 0x5e36, 
	0x5df5, 0x5dd0, 0x5ddd, 0x5e1e, 0x5e7e, 0x5ed8, 0x5eff, 0x5f02, 0x5f10, 0x5f34, 0x5f78, 0x5fe6, 0x6087, 0x615e, 0x626b, 0x63aa, 
	0x650f, 0x6686, 0x67f5, 0x693e, 0x6a49, 0x6b0c, 0x6b8e, 0x6be2, 0x6c19, 0x6c42, 0x6c5f, 0x6c6a, 0x6c6a, 0x6c6a, 0x6c6a, 0x6c6a, 
	0x6c6a, 0x6c6a, 0x6c6a, 0x6c6a, 0x6c6a, 0x6c6a, 0x109f, 0x10c6, 0x112d, 0x11b7, 0x1247, 0x12c5, 0x131e, 0x1346, 0x1339, 0x12f4, 
	0x127b, 0x11d9, 0x111d, 0x105e, 0x0fbd, 0x0f5f, 0x0f67, 0x0ffe, 0x111b, 0x1283, 0x13fd, 0x155e, 0x168c, 0x1778, 0x181e, 0x1882, 
	0x18b1, 0x18bd, 0x18c4, 0x1969, 0x1ae2, 0x1ca0, 0x1e23, 0x1f1f, 0x1f64, 0x1ef2, 0x1dee, 0x1ca8, 0x1b8e, 0x1b19, 0x1b62, 0x1c23, 
	0x1d32, 0x1e5c, 0x1f7c, 0x206a, 0x210e, 0x2157, 0x213c, 0x20ba, 0x1fd8, 0x1ea1, 0x1d25, 0x1b72, 0x1993, 0x1799, 0x159b, 0x13b9, 
	0x121f, 0x1105, 0x109f, 0x109f, 0x109f, 0x109f, 0x109f, 0x109f, 0x109f, 0x109f, 0x109f, 0x109f, 0x109f, 0xfcbe, 0xfcb3, 0xfc97, 
	0xfc6f, 0xfc44, 0xfc1d, 0xfc01, 0xfbf4, 0xfbf9, 0xfc0e, 0xfc34, 0xfc64, 0xfc9b, 0xfcd0, 0xfcfb, 0xfd13, 0xfd11, 0xfcea, 0xfc9c, 
	0xfc31, 0xfbb9, 0xfb40, 0xfad2, 0xfa78, 0xfa36, 0xfa0e, 0xf9fb, 0xf9f6, 0xf9f3, 0xf9af, 0xf90c, 0xf83f, 0xf783, 0xf705, 0xf6e1, 
	0xf71b, 0xf79e, 0xf83b, 0xf8be, 0xf8f3, 0xf8d2, 0xf879, 0xf7fa, 0xf767, 0xf6d5, 0xf659, 0xf601, 0xf5d9, 0xf5e8, 0xf62d, 0xf6a5, 
	0xf745, 0xf800, 0xf8cb, 0xf99d, 0xfa6b, 0xfb2a, 0xfbcf, 0xfc50, 0xfca2, 0xfcbe, 0xfcbe, 0xfcbe, 0xfcbe, 0xfcbe, 0xfcbe, 0xfcbe, 
	0xfcbe, 0xfcbe, 0xfcbe, 0xfcbe, 0x0afa, 0x0b13, 0x0b54, 0x0bac, 0x0c07, 0x0c57, 0x0c8f, 0x0ca8, 0x0c9f, 0x0c74, 0x0c28, 0x0bc2, 
	0x0b4a, 0x0ad0, 0x0a69, 0x0a2c, 0x0a32, 0x0a93, 0x0b49, 0x0c2d, 0x0d1a, 0x0df5, 0x0eae, 0x0f3e, 0x0fa2, 0x0fde, 0x0ffa, 0x1001, 
	0x1005, 0x1067, 0x1144, 0x1244, 0x131e, 0x13a9, 0x13cf, 0x1390, 0x1301, 0x1249, 0x11a8, 0x1164, 0x118f, 0x11fd, 0x1297, 0x133e, 
	0x13db, 0x145c, 0x14b3, 0x14d9, 0x14cb, 0x1487, 0x140e, 0x1364, 0x1290, 0x1198, 0x1080, 0x0f52, 0x0e1a, 0x0cef, 0x0bee, 0x0b3b, 
	0x0afa, 0x0afa, 0x0afa, 0x0afa, 0x0afa, 0x0afa, 0x0afa, 0x0afa, 0x0afa, 0x0afa, 0x0afa, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
	0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
	0x8000, 0x8000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 
	0x4000, 0x4000, 0x4000, 0x3fe8, 0x3fa4, 0x3f38, 0x3ea8, 0x3df8, 0x3d2c, 0x3c48, 0x3b51, 0x3a4b, 0x393a, 0x3822, 0x3709, 0x35f1, 
	0x34e0, 0x33da, 0x32e3, 0x31ff, 0x3133, 0x3083, 0x2ff3, 0x2f87, 0x2f43, 0x2f2b, 0x2f47, 0x2f98, 0x3018, 0x30c2, 0x3191, 0x327e, 
	0x3385, 0x34a0, 0x35c9, 0x36fb, 0x3830, 0x3962, 0x3a8b, 0x3ba6, 0x3cad, 0x3d9a, 0x3e68, 0x3f13, 0x3f93, 0x3fe4, 0x4000, 0x4000, 
	0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 
	0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 
	0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 
	0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x7fff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0xf945, 0xf945, 0xf945, 0xf945, 0xf945, 0xf945, 0xf945, 0xf945, 0xf945, 0xf945, 0xf945, 0xf945, 0xf945, 0xf945, 0xf945, 0xf945, 
	0xf945, 0xf94a, 0xf95a, 0xf974, 0xf995, 0xf9bf, 0xf9f0, 0xfa28, 0xfa64, 0xfaa6, 0xfaeb, 0xfb33, 0xfb7c, 0xfbc6, 0xfc0f, 0xfc56, 
	0xfc9a, 0xfcda, 0xfd13, 0xfd45, 0xfd6f, 0xfd8e, 0xfda1, 0xfda8, 0xfda0, 0xfd89, 0xfd64, 0xfd33, 0xfcf9, 0xfcb6, 0xfc6d, 0xfc20, 
	0xfbd0, 0xfb80, 0xfb2f, 0xfae1, 0xfa96, 0xfa50, 0xfa0f, 0xf9d6, 0xf9a5, 0xf97c, 0xf95e, 0xf94b, 0xf945, 0xf945, 0xf945, 0xf945, 
	0xf945, 0xf945, 0xf945, 0xf945, 0xf945, 0xf945, 0xf945, 0xf3a4, 0xf3a4, 0xf3a4, 0xf3a4, 0xf3a4, 0xf3a4, 0xf3a4, 0xf3a4, 0xf3a4, 
	0xf3a4, 0xf3a4, 0xf3a4, 0xf3a4, 0xf3a4, 0xf3a4, 0xf3a4, 0xf3a4, 0xf3bf, 0xf40b, 0xf484, 0xf524, 0xf5e8, 0xf6c9, 0xf7c2, 0xf8cf, 
	0xf9ea, 0xfb0f, 0xfc38, 0xfd61, 0xfe86, 0xffa1, 0x00b0, 0x01ac, 0x0293, 0x0361, 0x0411, 0x04a1, 0x050c, 0x0550, 0x0567, 0x054b, 
	0x04fb, 0x047b, 0x03d1, 0x0302, 0x0212, 0x0106, 0xffe3, 0xfeaf, 0xfd6f, 0xfc2a, 0xfae5, 0xf9a6, 0xf874, 0xf755, 0xf64f, 0xf56b, 
	0xf4ae, 0xf41f, 0xf3c4, 0xf3a4, 0xf3a4, 0xf3a4, 0xf3a4, 0xf3a4, 0xf3a4, 0xf3a4, 0xf3a4, 0xf3a4, 0xf3a4, 0xf3a4, 0x07ea, 0x07ea, 
	0x07ea, 0x07ea, 0x07ea, 0x07ea, 0x07ea, 0x07ea, 0x07ea, 0x07ea, 0x07ea, 0x07ea, 0x07ea, 0x07ea, 0x07ea, 0x07ea, 0x07ea, 0x07ed, 
	0x07f5, 0x0803, 0x0815, 0x082c, 0x0846, 0x0865, 0x0886, 0x08aa, 0x08d0, 0x08f8, 0x0921, 0x094b, 0x0975, 0x099e, 0x09c5, 0x09ea, 
	0x0a0c, 0x0a29, 0x0a42, 0x0a54, 0x0a60, 0x0a64, 0x0a5f, 0x0a51, 0x0a3b, 0x0a1f, 0x09fc, 0x09d5, 0x09ab, 0x097f, 0x0951, 0x0923, 
	0x08f6, 0x08ca, 0x08a1, 0x087a, 0x0857, 0x0838, 0x081d, 0x0808, 0x07f8, 0x07ee, 0x07ea, 0x07ea, 0x07ea, 0x07ea, 0x07ea, 0x07ea, 
	0x07ea, 0x07ea, 0x07ea, 0x07ea, 0x07ea, 0x0256, 0x0256, 0x0256, 0x0256, 0x0256, 0x0256, 0x0256, 0x0256, 0x0256, 0x0256, 0x0256, 
	0x0256, 0x0256, 0x0256, 0x0256, 0x0256, 0x0256, 0x0256, 0x0258, 0x025a, 0x025c, 0x025f, 0x0262, 0x0266, 0x0269, 0x026d, 0x0270, 
	0x0273, 0x0276, 0x0279, 0x027b, 0x027d, 0x027e, 0x027f, 0x0280, 0x0281, 0x0281, 0x0282, 0x0282, 0x0282, 0x0282, 0x0282, 0x0281, 
	0x0281, 0x0280, 0x027f, 0x027d, 0x027b, 0x0279, 0x0276, 0x0273, 0x0270, 0x026c, 0x0268, 0x0264, 0x0261, 0x025d, 0x025a, 0x0258, 
	0x0256, 0x0256, 0x0256, 0x0256, 0x0256, 0x0256, 0x0256, 0x0256, 0x0256, 0x0256, 0x0256, 0x0256, 0x021f, 0x021f, 0x021f, 0x021f, 
	0x021f, 0x021f, 0x021f, 0x021f, 0x021f, 0x021f, 0x021f, 0x021f, 0x021f, 0x021f, 0x021f, 0x021f, 0x021f, 0x021f, 0x021f, 0x0220, 
	0x0221, 0x0222, 0x0223, 0x0225, 0x0226, 0x0228, 0x0229, 0x022a, 0x022b, 0x022c, 0x022d, 0x022e, 0x022e, 0x022f, 0x022f, 0x0230, 
	0x0230, 0x0230, 0x0230, 0x0230, 0x0230, 0x0230, 0x0230, 0x022f, 0x022f, 0x022f, 0x022e, 0x022d, 0x022c, 0x022b, 0x022a, 0x0229, 
	0x0227, 0x0226, 0x0224, 0x0223, 0x0221, 0x0220, 0x021f, 0x021f, 0x021f, 0x021f, 0x021f, 0x021f, 0x021f, 0x021f, 0x021f, 0x021f, 
	0x021f, 0x021f, 0x021f, 0xf159, 0xf159, 0xf159, 0xf159, 0xf159, 0xf159, 0xf159, 0xf159, 0xf159, 0xf159, 0xf159, 0xf159, 0xf159, 
	0xf159, 0xf159, 0xf159, 0xf159, 0xf156, 0xf14e, 0xf141, 0xf130, 0xf11c, 0xf107, 0xf0f0, 0xf0d9, 0xf0c2, 0xf0ac, 0xf097, 0xf084, 
	0xf073, 0xf065, 0xf059, 0xf04f, 0xf047, 0xf041, 0xf03d, 0xf03a, 0xf038, 0xf037, 0xf037, 0xf037, 0xf038, 0xf03a, 0xf03e, 0xf044, 
	0xf04b, 0xf055, 0xf062, 0xf071, 0xf083, 0xf098, 0xf0af, 0xf0c7, 0xf0e0, 0xf0fa, 0xf112, 0xf129, 0xf13c, 0xf14b, 0xf155, 0xf159, 
	0xf159, 0xf159, 0xf159, 0xf159, 0xf159, 0xf159, 0xf159, 0xf159, 0xf159, 0xf159, 0x0748, 0x0748, 0x0748, 0x0748, 0x0748, 0x0748, 
	0x0748, 0x0748, 0x0748, 0x0748, 0x0748, 0x0748, 0x0748, 0x0748, 0x0748, 0x0748, 0x0748, 0x074e, 0x075f, 0x077a, 0x079e, 0x07ca, 
	0x07fd, 0x0835, 0x0871, 0x08b0, 0x08f1, 0x0933, 0x0974, 0x09b4, 0x09f2, 0x0a2c, 0x0a62, 0x0a92, 0x0abd, 0x0ae2, 0x0aff, 0x0b15, 
	0x0b22, 0x0b27, 0x0b21, 0x0b11, 0x0af7, 0x0ad5, 0x0aaa, 0x0a77, 0x0a3e, 0x0a00, 0x09bd, 0x0977, 0x092f, 0x08e8, 0x08a1, 0x085c, 
	0x081c, 0x07e2, 0x07ae, 0x0784, 0x0763, 0x074f, 0x0748, 0x0748, 0x0748, 0x0748, 0x0748, 0x0748, 0x0748, 0x0748, 0x0748, 0x0748, 
	0x0748, 0x0c11, 0x0c11, 0x0c11, 0x0c11, 0x0c11, 0x0c11, 0x0c11, 0x0c11, 0x0c11, 0x0c11, 0x0c11, 0x0c11, 0x0c11, 0x0c11, 0x0c11, 
	0x0c11, 0x0c11, 0x0c2c, 0x0c7b, 0x0cf8, 0x0d9f, 0x0e6d, 0x0f5c, 0x1068, 0x118e, 0x12c7, 0x1410, 0x1563, 0x16bb, 0x1812, 0x1964, 
	0x1aaa, 0x1be0, 0x1cfe, 0x1e00, 0x1ee0, 0x1f98, 0x2022, 0x2079, 0x2097, 0x2073, 0x200b, 0x1f68, 0x1e8f, 0x1d89, 0x1c5e, 0x1b14, 
	0x19b3, 0x1843, 0x16cb, 0x1552, 0x13e0, 0x127b, 0x1129, 0x0ff2, 0x0edb, 0x0de9, 0x0d24, 0x0c8f, 0x0c32, 0x0c11, 0x0c11, 0x0c11, 
	0x0c11, 0x0c11, 0x0c11, 0x0c11, 0x0c11, 0x0c11, 0x0c11, 0x0c11, 0x07e6, 0x07e6, 0x07e6, 0x07e6, 0x07e6, 0x07e6, 0x07e6, 0x07e6, 
	0x07e6, 0x07e6, 0x07e6, 0x07e6, 0x07e6, 0x07e6, 0x07e6, 0x07e6, 0x07e6, 0x07e3, 0x07db, 0x07d0, 0x07c0, 0x07ae, 0x0799, 0x0782, 
	0x076a, 0x0752, 0x0739, 0x0720, 0x0709, 0x06f2, 0x06dc, 0x06c8, 0x06b6, 0x06a5, 0x0696, 0x068a, 0x067f, 0x0677, 0x0672, 0x0671, 
	0x0673, 0x0679, 0x0682, 0x068e, 0x069d, 0x06ae, 0x06c2, 0x06d7, 0x06ef, 0x0708, 0x0722, 0x073c, 0x0757, 0x0772, 0x078c, 0x07a4, 
	0x07ba, 0x07cc, 0x07da, 0x07e2, 0x07e6, 0x07e6, 0x07e6, 0x07e6, 0x07e6, 0x07e6, 0x07e6, 0x07e6, 0x07e6, 0x07e6, 0x07e6, 0xfec1, 
	0xfec1, 0xfec1, 0xfec1, 0xfec1, 0xfec1, 0xfec1, 0xfec1, 0xfec1, 0xfec1, 0xfec1, 0xfec1, 0xfec1, 0xfec1, 0xfec1, 0xfec1, 0xfec1, 
	0xfec1, 0xfec2, 0xfec3, 0xfec5, 0xfec7, 0xfec9, 0xfecc, 0xfed0, 0xfed3, 0xfed7, 0xfedc, 0xfee0, 0xfee5, 0xfeea, 0xfeef, 0xfef4, 
	0xfef9, 0xfefd, 0xff01, 0xff04, 0xff06, 0xff08, 0xff08, 0xff08, 0xff06, 0xff03, 0xfeff, 0xfefb, 0xfef6, 0xfef1, 0xfeeb, 0xfee6, 
	0xfee1, 0xfedc, 0xfed7, 0xfed2, 0xfece, 0xfecb, 0xfec8, 0xfec5, 0xfec3, 0xfec2, 0xfec1, 0xfec1, 0xfec1, 0xfec1, 0xfec1, 0xfec1, 
	0xfec1, 0xfec1, 0xfec1, 0xfec1, 0xfec1, 0xfec1, 0xff67, 0xff67, 0xff67, 0xff67, 0xff67, 0xff67, 0xff67, 0xff67, 0xff67, 0xff67, 
	0xff67, 0xff67, 0xff67, 0xff67, 0xff67, 0xff67, 0xff67, 0xff67, 0xff67, 0xff68, 0xff68, 0xff69, 0xff6a, 0xff6b, 0xff6d, 0xff6e, 
	0xff6f, 0xff71, 0xff73, 0xff74, 0xff76, 0xff78, 0xff79, 0xff7b, 0xff7c, 0xff7d, 0xff7e, 0xff7f, 0xff7f, 0xff7f, 0xff7f, 0xff7f, 
	0xff7e, 0xff7d, 0xff7b, 0xff7a, 0xff78, 0xff76, 0xff74, 0xff73, 0xff71, 0xff6f, 0xff6e, 0xff6c, 0xff6b, 0xff6a, 0xff69, 0xff68, 
	0xff67, 0xff67, 0xff67, 0xff67, 0xff67, 0xff67, 0xff67, 0xff67, 0xff67, 0xff67, 0xff67, 0xff67, 0xff67, 0xf0e7, 0xf0e7, 0xf0e7, 
	0xf0e7, 0xf0e7, 0xf0e7, 0xf0e7, 0xf0e7, 0xf0e7, 0xf0e7, 0xf0e7, 0xf0e7, 0xf0e7, 0xf0e7, 0xf0e7, 0xf0e7, 0xf0e7, 0xf0ea, 0xf0f4, 
	0xf104, 0xf119, 0xf134, 0xf155, 0xf17b, 0xf1a5, 0xf1d4, 0xf208, 0xf23f, 0xf279, 0xf2b5, 0xf2f2, 0xf330, 0xf36c, 0xf3a6, 0xf3db, 
	0xf40a, 0xf432, 0xf451, 0xf464, 0xf46b, 0xf463, 0xf44c, 0xf428, 0xf3f9, 0xf3c2, 0xf385, 0xf344, 0xf301, 0xf2be, 0xf27c, 0xf23c, 
	0xf200, 0xf1c9, 0xf196, 0xf16a, 0xf143, 0xf123, 0xf109, 0xf0f6, 0xf0eb, 0xf0e7, 0xf0e7, 0xf0e7, 0xf0e7, 0xf0e7, 0xf0e7, 0xf0e7, 
	0xf0e7, 0xf0e7, 0xf0e7, 0xf0e7, };

JointIndex gWereCitIdle3AnimJointIndices[17] = {
	{ 0x0000, 0x0000, 0x0000, },
	{ 0x0000, 0x0000, 0x0000, },
	{ 0x0001, 0x0015, 0x0002, },
	{ 0x005c, 0x00a3, 0x00ea, },
	{ 0x0003, 0x0004, 0x0005, },
	{ 0x0131, 0x0178, 0x01bf, },
	{ 0x0206, 0x024d, 0x0294, },
	{ 0x0006, 0x0007, 0x0008, },
	{ 0x0009, 0x000a, 0x000b, },
	{ 0x000c, 0x000d, 0x000e, },
	{ 0x02db, 0x0322, 0x0369, },
	{ 0x03b0, 0x03f7, 0x043e, },
	{ 0x0485, 0x04cc, 0x0513, },
	{ 0x000f, 0x0010, 0x0011, },
	{ 0x055a, 0x05a1, 0x05e8, },
	{ 0x062f, 0x0676, 0x06bd, },
	{ 0x0012, 0x0013, 0x0014, },
};

AnimationHeader gWereCitIdle3Anim = { { 71 }, gWereCitIdle3AnimFrameData, gWereCitIdle3AnimJointIndices, 21 };
