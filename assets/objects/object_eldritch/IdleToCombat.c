#include "ultra64.h"
#include "global.h"

s16 gEldrSkelIdletocombatAnimFrameData[689] = {
	0x0000, 0xfe2d, 0xf758, 0x01f1, 0x0112, 0x1cf9, 0xff0c, 0xffcf, 0x2f5d, 0x0097, 0xfeef, 0xee5c, 0xfe65, 0xf843, 0xe5dd, 0x0020, 
	0x0060, 0x080d, 0xff47, 0x101c, 0x037f, 0xffed, 0x01ad, 0x085b, 0x0858, 0x0851, 0x0848, 0x083c, 0x0830, 0x0824, 0x081b, 0x0814, 
	0x0811, 0x0811, 0x0811, 0x0811, 0x0811, 0x0811, 0x0811, 0x0811, 0x0811, 0x2eb4, 0x2da1, 0x2abc, 0x267c, 0x2165, 0x1c05, 0x16ee, 
	0x12af, 0x0fc9, 0x0eb7, 0x0eb7, 0x0eb7, 0x0eb7, 0x0eb7, 0x0eb7, 0x0eb7, 0x0eb7, 0x0eb7, 0x00fa, 0x00f7, 0x00ed, 0x00de, 0x00c8, 
	0x00ae, 0x0092, 0x0079, 0x0068, 0x0061, 0x0061, 0x0061, 0x0061, 0x0061, 0x0061, 0x0061, 0x0061, 0x0061, 0xff8e, 0xff88, 0xff76, 
	0xff5e, 0xff44, 0xff2b, 0xff17, 0xff09, 0xff01, 0xfeff, 0xfeff, 0xfeff, 0xfeff, 0xfeff, 0xfeff, 0xfeff, 0xfeff, 0xfeff, 0x0fce, 
	0x109a, 0x12cf, 0x1629, 0x1a62, 0x1f29, 0x2425, 0x28f9, 0x2d45, 0x30b3, 0x32f3, 0x33bb, 0x3331, 0x31ed, 0x304e, 0x2eb1, 0x2d74, 
	0x2cf6, 0x000c, 0x000d, 0x0011, 0x0018, 0x0021, 0x002d, 0x003c, 0x004c, 0x005b, 0x0067, 0x0070, 0x0073, 0x0071, 0x006c, 0x0066, 
	0x0060, 0x005b, 0x005a, 0xffc1, 0xffbe, 0xffb6, 0xffab, 0xff9d, 0xff8e, 0xff81, 0xff75, 0xff6d, 0xff67, 0xff64, 0xff63, 0xff64, 
	0xff65, 0xff68, 0xff6a, 0xff6c, 0xff6d, 0x17d5, 0x16dd, 0x144e, 0x10af, 0x0c83, 0x084f, 0x049f, 0x01e4, 0x004d, 0xffc7, 0xffc7, 
	0xffc7, 0xffc7, 0xffc7, 0xffc7, 0xffc7, 0xffc7, 0xffc7, 0x187c, 0x190c, 0x1a76, 0x1c4b, 0x1e23, 0x1fb7, 0x20e0, 0x2199, 0x21f3, 
	0x220e, 0x220e, 0x220e, 0x220e, 0x220e, 0x220e, 0x220e, 0x220e, 0x220e, 0xa971, 0xa929, 0xa86a, 0xa763, 0xa64e, 0xa573, 0xa50a, 
	0xa51e, 0xa574, 0xa5a5, 0xa5a5, 0xa5a5, 0xa5a5, 0xa5a5, 0xa5a5, 0xa5a5, 0xa5a5, 0xa5a5, 0x317f, 0x313c, 0x3083, 0x2f80, 0x2e7e, 
	0x2dc2, 0x2d5b, 0x2d21, 0x2cf3, 0x2cdd, 0x2cdd, 0x2cdd, 0x2cdd, 0x2cdd, 0x2cdd, 0x2cdd, 0x2cdd, 0x2cdd, 0xe8a2, 0xe889, 0xe844, 
	0xe7e5, 0xe789, 0xe747, 0xe723, 0xe70f, 0xe6ff, 0xe6f7, 0xe6f7, 0xe6f7, 0xe6f7, 0xe6f7, 0xe6f7, 0xe6f7, 0xe6f7, 0xe6f7, 0xeee3, 
	0xeeee, 0xef0e, 0xef3d, 0xef6f, 0xef94, 0xefaa, 0xefb6, 0xefc0, 0xefc4, 0xefc4, 0xefc4, 0xefc4, 0xefc4, 0xefc4, 0xefc4, 0xefc4, 
	0xefc4, 0x0d5d, 0x0ced, 0x0be2, 0x0aad, 0x09a6, 0x08f2, 0x0885, 0x0828, 0x07ae, 0x0763, 0x0763, 0x0763, 0x0763, 0x0763, 0x0763, 
	0x0763, 0x0763, 0x0763, 0xef22, 0xeee6, 0xee43, 0xed4e, 0xec1a, 0xeabb, 0xe951, 0xe808, 0xe716, 0xe6b8, 0xe6b8, 0xe6b8, 0xe6b8, 
	0xe6b8, 0xe6b8, 0xe6b8, 0xe6b8, 0xe6b8, 0x68ef, 0x68ea, 0x68c8, 0x6863, 0x67a3, 0x668e, 0x654e, 0x6428, 0x636c, 0x6332, 0x6332, 
	0x6332, 0x6332, 0x6332, 0x6332, 0x6332, 0x6332, 0x6332, 0x2073, 0x1f89, 0x1d00, 0x1929, 0x146c, 0x0f5e, 0x0abb, 0x0748, 0x0581, 
	0x0512, 0x0512, 0x0512, 0x0512, 0x0512, 0x0512, 0x0512, 0x0512, 0x0512, 0x03b8, 0x0326, 0x01a9, 0xffa8, 0xfd9a, 0xfbe9, 0xfaca, 
	0xfa39, 0xfa04, 0xf9f9, 0xf9f9, 0xf9f9, 0xf9f9, 0xf9f9, 0xf9f9, 0xf9f9, 0xf9f9, 0xf9f9, 0xe8f7, 0xe98a, 0xeb29, 0xedb6, 0xf0fd, 
	0xf49b, 0xf7ff, 0xfa8e, 0xfbe1, 0xfc34, 0xfc34, 0xfc34, 0xfc34, 0xfc34, 0xfc34, 0xfc34, 0xfc34, 0xfc34, 0xfa11, 0xfa58, 0xfb0c, 
	0xfbfb, 0xfcfc, 0xfdf3, 0xfece, 0xff7c, 0xffef, 0x001a, 0x001a, 0x001a, 0x001a, 0x001a, 0x001a, 0x001a, 0x001a, 0x001a, 0xffc0, 
	0xffbf, 0xffbd, 0xffbb, 0xffb8, 0xffb6, 0xffb5, 0xffb4, 0xffb3, 0xffb3, 0xffb3, 0xffb3, 0xffb3, 0xffb3, 0xffb3, 0xffb3, 0xffb3, 
	0xffb3, 0x7fff, 0x7ffb, 0x7ff0, 0x7fe1, 0x7fd1, 0x7fc2, 0x7fb4, 0x7faa, 0x7fa2, 0x7fa0, 0x7fa0, 0x7fa0, 0x7fa0, 0x7fa0, 0x7fa0, 
	0x7fa0, 0x7fa0, 0x7fa0, 0xf1e9, 0xf16f, 0xf03b, 0xeea1, 0xece8, 0xeb3e, 0xe9c6, 0xe89b, 0xe7d5, 0xe78d, 0xe78d, 0xe78d, 0xe78d, 
	0xe78d, 0xe78d, 0xe78d, 0xe78d, 0xe78d, 0x0078, 0x007a, 0x0081, 0x008a, 0x0094, 0x00a0, 0x00aa, 0x00b3, 0x00b9, 0x00bb, 0x00bb, 
	0x00bb, 0x00bb, 0x00bb, 0x00bb, 0x00bb, 0x00bb, 0x00bb, 0x00c6, 0x00cc, 0x00dc, 0x00f1, 0x0108, 0x011d, 0x012f, 0x013d, 0x0146, 
	0x014a, 0x014a, 0x014a, 0x014a, 0x014a, 0x014a, 0x014a, 0x014a, 0x014a, 0x4e38, 0x4e6b, 0x4eeb, 0x4f95, 0x504c, 0x50fe, 0x519b, 
	0x5218, 0x526b, 0x5289, 0x5289, 0x5289, 0x5289, 0x5289, 0x5289, 0x5289, 0x5289, 0x5289, 0x014f, 0x0154, 0x0162, 0x0175, 0x0189, 
	0x019d, 0x01af, 0x01bd, 0x01c6, 0x01ca, 0x01ca, 0x01ca, 0x01ca, 0x01ca, 0x01ca, 0x01ca, 0x01ca, 0x01ca, 0xfbc0, 0xfbbf, 0xfbbc, 
	0xfbb9, 0xfbb5, 0xfbb2, 0xfbb0, 0xfbae, 0xfbad, 0xfbad, 0xfbad, 0xfbad, 0xfbad, 0xfbad, 0xfbad, 0xfbad, 0xfbad, 0xfbad, 0xfa01, 
	0xfa48, 0xfafb, 0xfbe7, 0xfce7, 0xfddd, 0xfeb5, 0xff62, 0xffd4, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 
	0xfffe, 0x00e1, 0x00e0, 0x00de, 0x00db, 0x00d9, 0x00d8, 0x00d7, 0x00d7, 0x00d7, 0x00d7, 0x00d7, 0x00d7, 0x00d7, 0x00d7, 0x00d7, 
	0x00d7, 0x00d7, 0x00d7, 0x7e3b, 0x7e33, 0x7e1f, 0x7e03, 0x7de5, 0x7dc8, 0x7daf, 0x7d9a, 0x7d8d, 0x7d88, 0x7d88, 0x7d88, 0x7d88, 
	0x7d88, 0x7d88, 0x7d88, 0x7d88, 0x7d88, 0xf1f7, 0xf17e, 0xf04b, 0xeeb4, 0xecfd, 0xeb56, 0xe9e0, 0xe8b7, 0xe7f2, 0xe7aa, 0xe7aa, 
	0xe7aa, 0xe7aa, 0xe7aa, 0xe7aa, 0xe7aa, 0xe7aa, 0xe7aa, 0xffa3, 0xffa8, 0xffb6, 0xffca, 0xffe2, 0xfffb, 0x0014, 0x0028, 0x0035, 
	0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x01bc, 0x01cb, 0x01ef, 0x021e, 0x0250, 0x0280, 0x02a8, 
	0x02c8, 0x02dd, 0x02e5, 0x02e5, 0x02e5, 0x02e5, 0x02e5, 0x02e5, 0x02e5, 0x02e5, 0x02e5, 0x4e3d, 0x4e6f, 0x4eef, 0x4f98, 0x504e, 
	0x50ff, 0x519b, 0x5217, 0x526a, 0x5288, 0x5288, 0x5288, 0x5288, 0x5288, 0x5288, 0x5288, 0x5288, 0x5288, 0x0096, 0x009a, 0x00a6, 
	0x00b5, 0x00c6, 0x00d6, 0x00e5, 0x00f1, 0x00f8, 0x00fb, 0x00fb, 0x00fb, 0x00fb, 0x00fb, 0x00fb, 0x00fb, 0x00fb, 0x00fb, 0xfc27, 
	0xfc21, 0xfc14, 0xfc02, 0xfbf0, 0xfbde, 0xfbcf, 0xfbc3, 0xfbbb, 0xfbb9, 0xfbb9, 0xfbb9, 0xfbb9, 0xfbb9, 0xfbb9, 0xfbb9, 0xfbb9, 
	0xfbb9, };

JointIndex gEldrSkelIdletocombatAnimJointIndices[21] = {
	{ 0x0000, 0x0017, 0x0001, },
	{ 0x0002, 0x0000, 0x0000, },
	{ 0x0029, 0x003b, 0x004d, },
	{ 0x0003, 0x0000, 0x0004, },
	{ 0x0005, 0x0006, 0x0007, },
	{ 0x0008, 0x0009, 0x000a, },
	{ 0x005f, 0x0071, 0x0083, },
	{ 0x0095, 0x00a7, 0x00b9, },
	{ 0x00cb, 0x00dd, 0x00ef, },
	{ 0x000b, 0x000c, 0x000d, },
	{ 0x000e, 0x000f, 0x0010, },
	{ 0x0101, 0x0113, 0x0125, },
	{ 0x0137, 0x0149, 0x015b, },
	{ 0x0011, 0x0012, 0x0013, },
	{ 0x0014, 0x0015, 0x0016, },
	{ 0x016d, 0x017f, 0x0191, },
	{ 0x01a3, 0x01b5, 0x01c7, },
	{ 0x01d9, 0x01eb, 0x01fd, },
	{ 0x020f, 0x0221, 0x0233, },
	{ 0x0245, 0x0257, 0x0269, },
	{ 0x027b, 0x028d, 0x029f, },
};

AnimationHeader gEldrSkelIdletocombatAnim = { { 18 }, gEldrSkelIdletocombatAnimFrameData, gEldrSkelIdletocombatAnimJointIndices, 23 };

