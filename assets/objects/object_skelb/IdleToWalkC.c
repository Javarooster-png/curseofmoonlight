#include "ultra64.h"
#include "global.h"

s16 gSkelskelIdletowalkcAnimFrameData[258] = {
	0x0000, 0x06c3, 0xfd7b, 0x0028, 0x00b3, 0xf4e5, 0x0362, 0x01c7, 0xd6c1, 0xfe97, 0xfb79, 0xdae4, 0xfd6c, 0x00b0, 0xeda1, 0xf19f, 
	0xca27, 0xffff, 0x0ea9, 0x0ea0, 0x0e8a, 0x0e70, 0x0e5a, 0x0e51, 0xdda7, 0xd722, 0xe8e8, 0x30c9, 0x39fd, 0x3b43, 0x3d7e, 0x3cbb, 
	0x3dd8, 0x3b3d, 0x3434, 0x304d, 0x5ad7, 0x53ec, 0x6558, 0xad6b, 0xb73f, 0xb8f2, 0xfdfb, 0xfd42, 0xfc77, 0xfc55, 0xfccb, 0xfd37, 
	0x013d, 0x018b, 0x0204, 0x021d, 0x01cd, 0x0191, 0x0da6, 0x12dc, 0x18fc, 0x1a13, 0x1663, 0x132a, 0x0044, 0x000e, 0xffa9, 0xff6a, 
	0xff64, 0xff6d, 0xff96, 0x002c, 0x011a, 0x01c1, 0x01f5, 0x01e9, 0xbd53, 0xbafb, 0xb7fc, 0xb6f6, 0xb821, 0xb965, 0x21c2, 0xaeeb, 
	0xb3b3, 0xb371, 0xb1b8, 0xb099, 0x427a, 0x3b10, 0x3602, 0x3174, 0x2eb8, 0x2de2, 0xa4c9, 0x3223, 0x3717, 0x36aa, 0x3470, 0x32f9, 
	0x0263, 0x02cd, 0x0359, 0x0382, 0x034b, 0x0318, 0xff7c, 0xff54, 0xff12, 0xfefc, 0xff19, 0xff32, 0x0da0, 0x1019, 0x137c, 0x147f, 
	0x1323, 0x11e5, 0x008b, 0x00c1, 0x0164, 0x027e, 0x03d8, 0x0496, 0xfff5, 0xffa7, 0xff1d, 0xfeb0, 0xfe7f, 0xfe78, 0xbd5b, 0xbc1a, 
	0xba3c, 0xb95d, 0xb995, 0xb9f5, 0xf05b, 0xef80, 0xed76, 0xeb07, 0xe8fd, 0xe822, 0xffb1, 0xffaf, 0xffac, 0xffa8, 0xffa5, 0xffa3, 
	0xff02, 0xff03, 0xff06, 0xff09, 0xff0c, 0xff0d, 0xb5ac, 0xbd36, 0xd645, 0xe47b, 0xe10d, 0xdcf3, 0x371e, 0x399c, 0x3ab4, 0x3796, 
	0x3220, 0x2e7a, 0x2875, 0x2ac5, 0x3dc5, 0x4902, 0x4645, 0x43b4, 0xf1b7, 0xe456, 0xd2d8, 0xc372, 0xb657, 0xb002, 0xfe64, 0xf9bb, 
	0xef7b, 0xe476, 0xdc2a, 0xd8fd, 0xf686, 0xee47, 0xe5c2, 0xe22a, 0xe30d, 0xe4c1, 0x0352, 0x03ac, 0x0482, 0x057e, 0x064e, 0x06a5, 
	0xfe5f, 0xfe95, 0xff19, 0xffbc, 0x0049, 0x0084, 0x0dfb, 0x0dac, 0x0cf3, 0x0c18, 0x0b65, 0x0b1a, 0xfad6, 0xfca7, 0xffc5, 0x02e9, 
	0x055c, 0x065e, 0x0a02, 0x0c2e, 0x1074, 0x147c, 0x1737, 0x1838, 0x8b5e, 0x8d58, 0x9042, 0x92cd, 0x94ab, 0x956b, 0xfa62, 0xf734, 
	0xf29c, 0xef04, 0xecc4, 0xebf6, 0xfe9f, 0xfdb1, 0xfb83, 0xf8f8, 0xf6e4, 0xf607, 0xf703, 0xf1d0, 0xe9ff, 0xe371, 0xdefe, 0xdd4d, 
	0x1594, 0x166b, 0x18c2, 0x1bf4, 0x1ea8, 0x1fbb, 0x1106, 0x11a5, 0x12cf, 0x1373, 0x134c, 0x130f, 0x0ca8, 0x10ca, 0x1b17, 0x27cf, 
	0x3255, 0x369b, };

JointIndex gSkelskelIdletowalkcAnimJointIndices[22] = {
	{ 0x0000, 0x0012, 0x0000, },
	{ 0x0001, 0x0000, 0x0000, },
	{ 0x0018, 0x001e, 0x0024, },
	{ 0x002a, 0x0030, 0x0036, },
	{ 0x003c, 0x0042, 0x0048, },
	{ 0x004e, 0x0054, 0x005a, },
	{ 0x0060, 0x0066, 0x006c, },
	{ 0x0072, 0x0078, 0x007e, },
	{ 0x0002, 0x0003, 0x0004, },
	{ 0x0084, 0x008a, 0x0090, },
	{ 0x0005, 0x0006, 0x0007, },
	{ 0x0008, 0x0009, 0x000a, },
	{ 0x000b, 0x000c, 0x000d, },
	{ 0x0096, 0x009c, 0x00a2, },
	{ 0x00a8, 0x00ae, 0x00b4, },
	{ 0x00ba, 0x00c0, 0x00c6, },
	{ 0x00cc, 0x00d2, 0x00d8, },
	{ 0x00de, 0x00e4, 0x00ea, },
	{ 0x00f0, 0x00f6, 0x00fc, },
	{ 0x000e, 0x000f, 0x0010, },
	{ 0x0000, 0x0000, 0x0000, },
	{ 0x0011, 0x0011, 0x0000, },
};

AnimationHeader gSkelskelIdletowalkcAnim = { { 6 }, gSkelskelIdletowalkcAnimFrameData, gSkelskelIdletowalkcAnimJointIndices, 18 };
