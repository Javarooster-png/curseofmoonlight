#include "ultra64.h"
#include "global.h"

s16 gSkelskelClimbAnimFrameData[1658] = {
	0x0000, 0x06c3, 0x8000, 0xffff, 0xfd7b, 0x0028, 0x00b3, 0xf05b, 0xffb1, 0xff02, 0xd6c1, 0xfe97, 0xfb79, 0xfd6c, 0x00b0, 0xeda1, 
	0xf19f, 0xca27, 0xeeda, 0xeeff, 0xef50, 0xefa1, 0xefd2, 0xf006, 0xf06d, 0xf138, 0xf297, 0xf48d, 0xf662, 0xf732, 0xf732, 0xf732, 
	0xf732, 0xf732, 0xf736, 0xf752, 0xf79d, 0xf830, 0xf923, 0xfa8e, 0xfc87, 0xff8b, 0x016b, 0x016b, 0x016b, 0x016b, 0x016b, 0x016b, 
	0x016b, 0x016b, 0x01fd, 0x037d, 0x059c, 0x080a, 0x0a78, 0x0c97, 0x0e17, 0x0ea9, 0xdda7, 0xef7d, 0x9089, 0xdda7, 0xc9f7, 0xc705, 
	0xc64e, 0xc65b, 0xc89d, 0x34c0, 0x3605, 0x3689, 0x3689, 0x3689, 0x3689, 0x3689, 0x368c, 0x36a1, 0x36d7, 0x373b, 0x37d4, 0x389d, 
	0x398b, 0x3aae, 0x3b43, 0x3b43, 0x3b43, 0x3b43, 0x3b43, 0x3b43, 0x3b43, 0x3b43, 0xcdd5, 0xc53e, 0xc5e7, 0xc5f1, 0xc5af, 0xc5d5, 
	0xc8bb, 0xdda7, 0x3d7e, 0x3e33, 0x41ca, 0x3d7e, 0x3874, 0x33c7, 0x3104, 0x3146, 0x36f0, 0x3a18, 0x3a11, 0x3a0e, 0x3a0e, 0x3a0e, 
	0x3a0e, 0x3a0e, 0x3a0d, 0x3a0d, 0x3a0c, 0x3a09, 0x3a04, 0x39fe, 0x39f6, 0x39ec, 0x39e6, 0x39e6, 0x39e6, 0x39e6, 0x39e6, 0x39e6, 
	0x39e6, 0x39e6, 0x3c73, 0x253c, 0x1f20, 0x200a, 0x256e, 0x2d91, 0x371d, 0x3d7e, 0x5ad7, 0x6ce2, 0x0e2d, 0x5ad7, 0x462b, 0x4254, 
	0x4112, 0x412c, 0x4488, 0xb34e, 0xb4b2, 0xb543, 0xb543, 0xb543, 0xb543, 0xb543, 0xb546, 0xb55c, 0xb598, 0xb606, 0xb6ad, 0xb78a, 
	0xb88f, 0xb9d0, 0xba73, 0xba73, 0xba73, 0xba73, 0xba73, 0xba73, 0xba73, 0xba73, 0x4ad6, 0x3d85, 0x3c85, 0x3cc7, 0x3de6, 0x3fe2, 
	0x44ae, 0x5ad7, 0xfdfb, 0xfe47, 0xfea4, 0xfdfb, 0xfcae, 0xfbb5, 0xfb39, 0xfb43, 0xfc59, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 
	0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff3, 0xfff3, 0xfff3, 0xfff3, 0xfff3, 0xfff3, 
	0xfff3, 0xfff3, 0xfd97, 0xf9f5, 0xf9da, 0xf9d8, 0xf9f8, 0xfab5, 0xfc62, 0xfdfb, 0x013d, 0x0125, 0x010d, 0x013d, 0x01df, 0x02a5, 
	0x032e, 0x0320, 0x021a, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 
	0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x00e6, 0x0164, 0x05e2, 0x0756, 0x071d, 0x05d1, 0x03ea, 
	0x0214, 0x013d, 0x0da6, 0x0b97, 0x0913, 0x0da6, 0x1743, 0x1f80, 0x2448, 0x23d6, 0x19f4, 0x0048, 0x0048, 0x0049, 0x0049, 0x0049, 
	0x0049, 0x0049, 0x0049, 0x0049, 0x0049, 0x0049, 0x004a, 0x004a, 0x004b, 0x004c, 0x004d, 0x004d, 0x004d, 0x004d, 0x004d, 0x004d, 
	0x004d, 0x004d, 0x106c, 0x3840, 0x41fa, 0x4080, 0x37cf, 0x2a37, 0x19a9, 0x0da6, 0x0044, 0x0048, 0x004c, 0x0044, 0x001d, 0xffe5, 
	0xffbb, 0xffbf, 0x000d, 0x0063, 0x0095, 0x00aa, 0x00aa, 0x00aa, 0x00aa, 0x00aa, 0x00aa, 0x00ae, 0x00b6, 0x00c6, 0x00de, 0x00fe, 
	0x0124, 0x0153, 0x016b, 0x016b, 0x016b, 0x016b, 0x016b, 0x016b, 0x016b, 0x016b, 0x00be, 0xff0d, 0xfe3e, 0xfe45, 0xfecf, 0xff80, 
	0x0010, 0x0044, 0xff96, 0xff6f, 0xff40, 0xff96, 0x0046, 0x00d4, 0x0123, 0x011b, 0x0075, 0xfea3, 0xfebb, 0xfec5, 0xfec5, 0xfec5, 
	0xfec5, 0xfec5, 0xfec5, 0xfec6, 0xfeca, 0xfed2, 0xfedd, 0xfeec, 0xfefe, 0xff15, 0xff20, 0xff20, 0xff20, 0xff20, 0xff20, 0xff20, 
	0xff20, 0xff20, 0xffbe, 0x0232, 0x0296, 0x028c, 0x0234, 0x017e, 0x0070, 0xff96, 0xbd53, 0xbe38, 0xbf50, 0xbd53, 0xb92d, 0xb5a9, 
	0xb3a6, 0xb3d6, 0xb805, 0xc31d, 0xc307, 0xc2fe, 0xc2fe, 0xc2fe, 0xc2fe, 0xc2fe, 0xc2fe, 0xc2fd, 0xc2f9, 0xc2f2, 0xc2e8, 0xc2db, 
	0xc2cb, 0xc2b8, 0xc2ae, 0xc2ae, 0xc2ae, 0xc2ae, 0xc2ae, 0xc2ae, 0xc2ae, 0xc2ae, 0xbbfe, 0xab75, 0xa7eb, 0xa879, 0xabb8, 0xb12a, 
	0xb824, 0xbd53, 0x21c2, 0x0fa8, 0x6eed, 0x21c2, 0xb5cd, 0xb8bd, 0xb96c, 0xb960, 0xb728, 0x4b62, 0x4a1d, 0x4999, 0x4999, 0x4999, 
	0x4999, 0x4999, 0x49d9, 0x4a96, 0x4be0, 0xb0cf, 0xba44, 0xbad1, 0xbaf2, 0xbb2f, 0xbb39, 0xba27, 0xb884, 0xb62c, 0xb281, 0x2c4f, 
	0x22ff, 0x1c18, 0x2442, 0xafb0, 0xb563, 0xb837, 0xb9c1, 0xba35, 0xb797, 0x21c2, 0x427a, 0x41ca, 0x3e31, 0x427a, 0x3885, 0x33df, 
	0x3120, 0x3162, 0x3704, 0x3a18, 0x3a11, 0x3a0e, 0x3a0e, 0x3a0e, 0x3a0e, 0x3a0e, 0x3a22, 0x3a5e, 0x3ac3, 0x3bb8, 0x30d8, 0x2ac6, 
	0x27cf, 0x2b27, 0x26de, 0x1894, 0x0b93, 0xfe3e, 0xf00f, 0x9dcb, 0xa7eb, 0xabcf, 0xa67a, 0xea5c, 0xfe20, 0x0f15, 0x1d8b, 0x2a98, 
	0x3687, 0x427a, 0xa4c9, 0x9271, 0xf16d, 0xa4c8, 0x39f7, 0x3dee, 0x3f3e, 0x3f22, 0x3ba7, 0xccd5, 0xcb71, 0xcae0, 0xcae0, 0xcae0, 
	0xcae0, 0xcae0, 0xcb25, 0xcbed, 0xcd49, 0x33fa, 0x3f98, 0x414f, 0x41e7, 0x412c, 0x41f5, 0x4427, 0x4615, 0x4870, 0x4bf7, 0xd1ec, 
	0xdaf9, 0xe1b1, 0xd9a6, 0x4e94, 0x4908, 0x45fd, 0x43b0, 0x4131, 0x3c1b, 0xa4c8, 0x0263, 0x0209, 0x019a, 0x0263, 0x03ed, 0x0514, 
	0x05a8, 0x059b, 0x0452, 0x000d, 0x000e, 0x000e, 0x000e, 0x000e, 0x000e, 0x000e, 0x000e, 0x000d, 0x000d, 0x02ab, 0x0553, 0x0648, 
	0x0694, 0x05f7, 0x067c, 0x074e, 0x06ce, 0x05c3, 0x04a4, 0x03c2, 0x0341, 0x0314, 0x0340, 0x040e, 0x0573, 0x06c8, 0x074e, 0x0683, 
	0x045c, 0x0263, 0xff7c, 0xff99, 0xffb5, 0xff7c, 0xfebd, 0xfdd3, 0xfd32, 0xfd42, 0xfe77, 0xffe3, 0xffe3, 0xffe3, 0xffe3, 0xffe3, 
	0xffe3, 0xffe3, 0xffe3, 0xffe3, 0xffe3, 0xff62, 0xfd93, 0xfc4c, 0xfbbf, 0xfcc9, 0xfbf0, 0xf888, 0xf5f8, 0xf431, 0xf317, 0xf27f, 
	0xf23c, 0xf227, 0xf23b, 0xf2ad, 0xf3d5, 0xf5e8, 0xf8c4, 0xfbe1, 0xfe70, 0xff7c, 0x0da0, 0x0b91, 0x090f, 0x0da0, 0x1735, 0x1f6a, 
	0x242c, 0x23bb, 0x19e4, 0x004b, 0x004c, 0x004c, 0x004c, 0x004c, 0x004c, 0x004c, 0x004c, 0x004c, 0x004b, 0x0f4b, 0x215b, 0x2a44, 
	0x2dc0, 0x2709, 0x2c90, 0x4048, 0x4f20, 0x5ae3, 0x63d9, 0x69e2, 0x6d1a, 0x6e30, 0x6d1f, 0x67ec, 0x5d9a, 0x4f7d, 0x3efc, 0x2ce9, 
	0x1a28, 0x0da0, 0x008b, 0x0086, 0x0083, 0x008b, 0x00b2, 0x00eb, 0x0116, 0x0112, 0x00c3, 0x006c, 0x003a, 0x0025, 0x0025, 0x0025, 
	0x0025, 0x0025, 0x002a, 0x0037, 0x004a, 0x0055, 0x008e, 0x00b1, 0x00a7, 0x004b, 0x004e, 0x00cf, 0x011c, 0x0112, 0x00a6, 0x000b, 
	0xff9f, 0xff85, 0xffed, 0x010f, 0x0213, 0x0241, 0x01d5, 0x0138, 0x00b8, 0x008b, 0xfff5, 0x001e, 0x0050, 0xfff5, 0xff3d, 0xfea7, 
	0xfe54, 0xfe5c, 0xff0b, 0x00f5, 0x00de, 0x00d4, 0x00d4, 0x00d4, 0x00d4, 0x00d4, 0x00d7, 0x00e0, 0x00ee, 0xffcc, 0xfe75, 0xfdd6, 
	0xfd97, 0xfe04, 0xfda1, 0xfc77, 0xfbda, 0xfbac, 0xfc00, 0xfcdb, 0xfddd, 0xfe56, 0xfd8e, 0xfc28, 0xfb98, 0xfbe0, 0xfca0, 0xfdb3, 
	0xff02, 0xfff5, 0xbd5b, 0xbe40, 0xbf58, 0xbd5b, 0xb936, 0xb5b4, 0xb3b1, 0xb3e1, 0xb80f, 0xc322, 0xc30c, 0xc303, 0xc303, 0xc303, 
	0xc303, 0xc303, 0xc319, 0xc35a, 0xc3c9, 0xbdd7, 0xb6cd, 0xb3ef, 0xb366, 0xb6cc, 0xb588, 0xb019, 0xae8d, 0xb0b9, 0xb6e0, 0xc010, 
	0xc8df, 0xcd23, 0xc741, 0xb943, 0xae62, 0xaabc, 0xac75, 0xb178, 0xb84a, 0xbd5b, 0xf4e5, 0xf4e5, 0xf4e5, 0xf4e5, 0xf5e9, 0xf8b1, 
	0xfcdb, 0x01fc, 0x079c, 0x0d39, 0x1256, 0x167b, 0x193f, 0x1a42, 0x1a42, 0x19e4, 0x18d7, 0x1731, 0x1505, 0x1269, 0x0f71, 0x0c36, 
	0x08d2, 0x0560, 0x01fb, 0xfebd, 0xfbc3, 0xf923, 0xf6f4, 0xf54b, 0xf43d, 0xf3df, 0xf3ea, 0xf407, 0xf431, 0xf462, 0xf492, 0xf4bc, 
	0xf4d9, 0xf4e5, 0x0362, 0x0362, 0x0362, 0x0362, 0x0359, 0x033c, 0x030a, 0x02c2, 0x0267, 0x0200, 0x019a, 0x0143, 0x0107, 0x00f1, 
	0x00f1, 0x00f9, 0x0110, 0x0134, 0x0162, 0x0199, 0x01d5, 0x0213, 0x0252, 0x028d, 0x02c3, 0x02f1, 0x0318, 0x0337, 0x034e, 0x035f, 
	0x0368, 0x036b, 0x036b, 0x036a, 0x0368, 0x0367, 0x0365, 0x0364, 0x0363, 0x0362, 0x01c7, 0x01c7, 0x01c7, 0x01c7, 0x01dc, 0x0215, 
	0x0265, 0x02c0, 0x0319, 0x0364, 0x039b, 0x03bf, 0x03d1, 0x03d7, 0x03d7, 0x03d5, 0x03cf, 0x03c4, 0x03b3, 0x039c, 0x037d, 0x0357, 
	0x032a, 0x02f7, 0x02c0, 0x0287, 0x0250, 0x021d, 0x01f2, 0x01d0, 0x01ba, 0x01b2, 0x01b3, 0x01b5, 0x01b9, 0x01bd, 0x01c1, 0x01c4, 
	0x01c7, 0x01c7, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xda16, 0xd7e7, 0xd4b0, 0xd0c7, 0xcc87, 0xc847, 0xc45f, 0xc127, 0xbef8, 0xbe2a, 
	0xbe2a, 0xbef1, 0xc123, 0xc491, 0xc90b, 0xce5e, 0xd45c, 0xdad3, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 
	0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xdae4, 0xb5ac, 0xda55, 0x2aab, 0x1dc7, 0x14d0, 0x1011, 
	0x1071, 0x1170, 0x142b, 0x189f, 0x1c82, 0x1b5f, 0x1ac8, 0x1b0a, 0x1b0a, 0x1b0a, 0x1f37, 0x2652, 0x2b9e, 0x2e39, 0x2e56, 0x2c44, 
	0x2801, 0x1fbe, 0x1890, 0x1887, 0x186f, 0x184c, 0x1823, 0x17fb, 0x17dc, 0x17cf, 0x1862, 0x1973, 0x993a, 0x92fe, 0xeda7, 0xc150, 
	0xb7d2, 0xb5ac, 0x371e, 0x44d1, 0xf964, 0xfa89, 0xf9b5, 0xf9df, 0xfc86, 0x057c, 0x13b5, 0x2339, 0x2ea9, 0x3432, 0x33a9, 0x3310, 
	0x3310, 0x3310, 0x3202, 0x2f2a, 0x2b0c, 0x2617, 0x20d0, 0x1c79, 0x1b17, 0x1d7a, 0x1f54, 0x1f7a, 0x1fdb, 0x205e, 0x20eb, 0x216a, 
	0x21c6, 0x21ea, 0x24fa, 0x2bf1, 0x4c8c, 0x4651, 0x3d49, 0x3b5a, 0x387c, 0x371e, 0x2875, 0x3bbb, 0x0852, 0x0b15, 0x10e0, 0x18a2, 
	0x24c5, 0x3086, 0x3a6c, 0x449d, 0x4e96, 0x52c9, 0x5192, 0x5102, 0x5102, 0x5102, 0x536b, 0x56ca, 0x5836, 0x5827, 0x5861, 0x5b56, 
	0x628b, 0x6c21, 0x6e77, 0x6e80, 0x6e97, 0x6eb4, 0x6ed2, 0x6eeb, 0x6efc, 0x6f03, 0x7035, 0x7331, 0xf642, 0xf47b, 0x544d, 0x2d3f, 
	0x2863, 0x2875, 0xf1b7, 0xbd62, 0xa8a0, 0xddf1, 0xeff6, 0xf5b6, 0xec87, 0xe56e, 0xe1ba, 0xe0fa, 0xe306, 0xe771, 0xe7e2, 0xe786, 
	0xe786, 0xe786, 0xe3ee, 0xdc6d, 0xd439, 0xcc5b, 0xc520, 0xbf5f, 0xbe2b, 0xc79d, 0xd15d, 0xd17b, 0xd1cb, 0xd238, 0xd2b1, 0xd322, 
	0xd375, 0xd395, 0xd3d7, 0xd4d2, 0xd6fd, 0xdaaf, 0xe003, 0xe6bb, 0xedd7, 0xf1b7, 0xfe64, 0xe05f, 0xd605, 0xf679, 0xfdf4, 0xff34, 
	0xfcf0, 0xfa39, 0xf87a, 0xf819, 0xf91d, 0xfb14, 0xfb42, 0xfb1d, 0xfb1d, 0xfb1d, 0xf98b, 0xf59c, 0xf06d, 0xeadf, 0xe5a6, 0xe1ac, 
	0xe0e1, 0xe76f, 0xee73, 0xee89, 0xeec0, 0xef0d, 0xef60, 0xefae, 0xefe7, 0xeffd, 0xf02a, 0xf0d4, 0xf243, 0xf494, 0xf799, 0xfac9, 
	0xfd5a, 0xfe64, 0xf686, 0xe21c, 0xe79b, 0xeac5, 0xf565, 0xf923, 0xf337, 0xeee9, 0xeccd, 0xec64, 0xed87, 0xf01a, 0xf05d, 0xf027, 
	0xf027, 0xf027, 0xee0b, 0xe9ff, 0xe64a, 0xe3af, 0xe253, 0xe209, 0xe212, 0xe2ab, 0xe538, 0xe543, 0xe55f, 0xe587, 0xe5b3, 0xe5de, 
	0xe5fd, 0xe60a, 0xe623, 0xe687, 0xe770, 0xe923, 0xebdd, 0xefae, 0xf40b, 0xf686, 0x0352, 0xfa9a, 0xea01, 0xe11c, 0xe103, 0xe0ff, 
	0xe1a7, 0xe3df, 0xe90b, 0xf293, 0xfddf, 0x033a, 0x033a, 0x033a, 0x033a, 0x033a, 0x033d, 0x0346, 0x0354, 0x0368, 0x0382, 0x03a1, 
	0x03c5, 0x03ee, 0x041a, 0x0448, 0x0476, 0x04a1, 0x04c7, 0x04e5, 0x04f9, 0x0500, 0x03e6, 0x014c, 0xfeb3, 0xfda5, 0xfe94, 0x00a3, 
	0x028a, 0x0352, 0xfe5f, 0x0118, 0x0671, 0x091a, 0x07f7, 0x04b0, 0xff77, 0xf8a5, 0xf11a, 0xea88, 0xe7b8, 0xe7b1, 0xe7b1, 0xe7b1, 
	0xe7b1, 0xe7b1, 0xe7a7, 0xe78c, 0xe761, 0xe72a, 0xe6e9, 0xe6a1, 0xe655, 0xe608, 0xe5bc, 0xe573, 0xe530, 0xe4f5, 0xe4c4, 0xe49e, 
	0xe487, 0xe47e, 0xe532, 0xe779, 0xeba5, 0xf144, 0xf6e4, 0xfb24, 0xfd95, 0xfe5f, 0x0dfb, 0x0ec1, 0x0e93, 0x0d98, 0x0d0a, 0x0b37, 
	0x07cc, 0x022a, 0xf923, 0xeb4f, 0xdc2c, 0xd51e, 0xd51e, 0xd51e, 0xd51e, 0xd51e, 0xd4f8, 0xd48a, 0xd3df, 0xd300, 0xd1f7, 0xd0cd, 
	0xcf8d, 0xce3f, 0xccef, 0xcba8, 0xca75, 0xc960, 0xc875, 0xc7bf, 0xc74a, 0xc721, 0xca61, 0xd312, 0xdf5a, 0xed03, 0xf9f3, 0x047f, 
	0x0b75, 0x0dfb, 0xfad6, 0xf799, 0xf7b3, 0xf7e6, 0xf83a, 0xf8a3, 0xf90f, 0xf966, 0xf98d, 0xf987, 0xf99c, 0xfa1d, 0xfb20, 0x0538, 
	0x0f04, 0x19eb, 0x2916, 0x3696, 0x3917, 0x355d, 0x2ac5, 0x2266, 0x1b34, 0x12a8, 0x0cec, 0x0cec, 0x0cec, 0x0cec, 0x0d89, 0x0f26, 
	0x1167, 0x1413, 0x15de, 0x1598, 0x1356, 0x0f8d, 0x0aab, 0x0500, 0xfefc, 0xfad6, 0x0a02, 0x0949, 0x091d, 0x0902, 0x08f3, 0x08e1, 
	0x08cf, 0x08bb, 0x089b, 0x0866, 0x0820, 0x07e2, 0x07b7, 0x075b, 0x03e6, 0xfca9, 0xe687, 0xcd5e, 0xce3e, 0xd2b6, 0xe033, 0xeea5, 
	0xf80c, 0xff4e, 0x025b, 0x025b, 0x025b, 0x025b, 0x0222, 0x0184, 0x0098, 0xff89, 0xfff2, 0x0245, 0x04f0, 0x074a, 0x091d, 0x0a38, 
	0x0a6c, 0x0a02, 0x8b5e, 0x876e, 0x8744, 0x8727, 0x8732, 0x8751, 0x8764, 0x8749, 0x86ea, 0x865c, 0x8615, 0x867f, 0x87a7, 0x9441, 
	0xa102, 0xae41, 0xbeb9, 0xc012, 0xb7ff, 0xb334, 0xb59d, 0xb1d9, 0xabfb, 0xa2e4, 0x9bfb, 0x9bfb, 0x9bfb, 0x9bfb, 0x9cea, 0x9f63, 
	0xa2ec, 0xa738, 0xaa42, 0xaa55, 0xa7e2, 0xa391, 0x9de9, 0x974d, 0x9041, 0x8b5e, 0xfa62, 0xffe1, 0xffe1, 0xffe1, 0xffe1, 0xffe1, 
	0xffe1, 0xffe1, 0xffe1, 0xffe0, 0xffe0, 0xffe0, 0xffe1, 0xf11c, 0xe6db, 0xe535, 0xeef5, 0xec16, 0xed13, 0xeecc, 0xf01e, 0xed63, 
	0xe744, 0xe484, 0xe76b, 0xe76b, 0xe76b, 0xe76b, 0xe6e4, 0xe5b7, 0xe4a7, 0xe465, 0xe4d4, 0xe4aa, 0xe459, 0xe514, 0xe7be, 0xeccc, 
	0xf42e, 0xfa62, 0xfe9f, 0xff3e, 0xff3e, 0xff3e, 0xff3e, 0xff3e, 0xff3e, 0xff3e, 0xff3e, 0xff3e, 0xff3e, 0xff3e, 0xff3e, 0xfa8d, 
	0xee4f, 0xde61, 0xd4ea, 0xd656, 0xd5cb, 0xd4fc, 0xd476, 0xd5a2, 0xda83, 0xe662, 0xef74, 0xef74, 0xef74, 0xef74, 0xee61, 0xeb7a, 
	0xe74d, 0xe270, 0xdfa7, 0xe068, 0xe3d8, 0xe956, 0xf012, 0xf6eb, 0xfc61, 0xfe9f, 0xf703, 0xffcf, 0xffcf, 0xffcf, 0xffcf, 0xffcf, 
	0xffcf, 0xffcf, 0xffcf, 0xffce, 0xffce, 0xffce, 0xffcf, 0xe752, 0xd037, 0xb6a2, 0x9cac, 0xa26b, 0xa05f, 0x9cfa, 0x9a7d, 0x9fbe, 
	0xae75, 0xc41e, 0xd202, 0xd202, 0xd202, 0xd202, 0xd052, 0xcbdf, 0xc588, 0xbdd2, 0xb901, 0xba59, 0xc01e, 0xc8a2, 0xd2fc, 0xdf0d, 
	0xecb9, 0xf703, 0x1594, 0x0ecd, 0x006b, 0xf727, 0xf83e, 0xf93b, 0xfa1d, 0xfae0, 0xfb85, 0xfc0b, 0xfc74, 0xfcc2, 0xfcf6, 0xfd15, 
	0xfd21, 0xfd1e, 0xfd0e, 0xfcf7, 0xfcda, 0xfcbd, 0xfc9c, 0xfc76, 0xfc4d, 0xfc25, 0xfc00, 0xfbe0, 0xfbc8, 0xfbb9, 0xfbb6, 0xfbc1, 
	0xfbdc, 0xfc08, 0xfc47, 0xfc9c, 0xfd09, 0xfd90, 0x01e3, 0x0a9c, 0x1270, 0x1594, 0x1106, 0x16c4, 0x23e4, 0x2bb1, 0x2c0a, 0x2c51, 
	0x2c8a, 0x2cb6, 0x2cd7, 0x2ced, 0x2cf9, 0x2cfc, 0x2cf5, 0x2ce6, 0x2ccd, 0x2caa, 0x2c7d, 0x2c46, 0x2c05, 0x2bb8, 0x2b5b, 0x2ae8, 
	0x2a60, 0x29c3, 0x2911, 0x284b, 0x276f, 0x267f, 0x2579, 0x245e, 0x232e, 0x21e7, 0x2089, 0x1f13, 0x1d85, 0x1bde, 0x1815, 0x1386, 
	0x1167, 0x1106, 0x0ca8, 0x1075, 0x1596, 0x16c8, 0x1910, 0x1b18, 0x1ce1, 0x1e6c, 0x1fb9, 0x20cd, 0x21ab, 0x2258, 0x22da, 0x2337, 
	0x2375, 0x239c, 0x23b2, 0x23bd, 0x23c6, 0x23d3, 0x23e5, 0x23fb, 0x2416, 0x2435, 0x2458, 0x247e, 0x24a8, 0x24d4, 0x2502, 0x2530, 
	0x255d, 0x2587, 0x25ad, 0x25cb, 0x25e1, 0x25eb, 0x21a2, 0x185c, 0x1004, 0x0ca8, };

JointIndex gSkelskelClimbAnimJointIndices[22] = {
	{ 0x0000, 0x0012, 0x0000, },
	{ 0x0001, 0x0002, 0x0003, },
	{ 0x003a, 0x0062, 0x008a, },
	{ 0x00b2, 0x00da, 0x0102, },
	{ 0x012a, 0x0152, 0x017a, },
	{ 0x01a2, 0x01ca, 0x01f2, },
	{ 0x021a, 0x0242, 0x026a, },
	{ 0x0292, 0x02ba, 0x02e2, },
	{ 0x0004, 0x0005, 0x0006, },
	{ 0x0007, 0x0008, 0x0009, },
	{ 0x030a, 0x0332, 0x035a, },
	{ 0x000a, 0x000b, 0x000c, },
	{ 0x0382, 0x000d, 0x000e, },
	{ 0x03aa, 0x03d2, 0x03fa, },
	{ 0x0422, 0x044a, 0x0472, },
	{ 0x049a, 0x04c2, 0x04ea, },
	{ 0x0512, 0x053a, 0x0562, },
	{ 0x058a, 0x05b2, 0x05da, },
	{ 0x0602, 0x062a, 0x0652, },
	{ 0x000f, 0x0010, 0x0011, },
	{ 0x0000, 0x0000, 0x0000, },
	{ 0x0003, 0x0003, 0x0003, },
};

AnimationHeader gSkelskelClimbAnim = { { 40 }, gSkelskelClimbAnimFrameData, gSkelskelClimbAnimJointIndices, 18 };
