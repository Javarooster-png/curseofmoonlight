#include "ultra64.h"
#include "global.h"

s16 gSkelskelIdletowalkAnimFrameData[243] = {
	0x0000, 0x06c3, 0xfd7b, 0x0028, 0x00b3, 0xf05b, 0xffb1, 0xff02, 0xf4e5, 0x0362, 0x01c7, 0xd6c1, 0xfe97, 0xfb79, 0xdae4, 0xfd6c, 
	0x00b0, 0xeda1, 0xf19f, 0xca27, 0xffff, 0x0ea9, 0x0ea0, 0x0e8a, 0x0e70, 0x0e5a, 0x0e51, 0xdda7, 0xd722, 0xe8e8, 0x30c9, 0x39fd, 
	0x3b43, 0x3d7e, 0x3cbb, 0x3dd8, 0x3b3d, 0x3434, 0x304d, 0x5ad7, 0x53ec, 0x6558, 0xad6b, 0xb73f, 0xb8f2, 0xfdfb, 0xfd42, 0xfc77, 
	0xfc55, 0xfccb, 0xfd37, 0x013d, 0x018b, 0x0204, 0x021d, 0x01cd, 0x0191, 0x0da6, 0x12dc, 0x18fc, 0x1a13, 0x1663, 0x132a, 0x0044, 
	0x000e, 0xffa9, 0xff6a, 0xff64, 0xff6d, 0xff96, 0x002c, 0x011a, 0x01c1, 0x01f5, 0x01e9, 0xbd53, 0xbafb, 0xb7fc, 0xb6f6, 0xb821, 
	0xb965, 0x21c2, 0xaeeb, 0xb3b3, 0xb371, 0xb1b8, 0xb099, 0x427a, 0x3b10, 0x3602, 0x3174, 0x2eb8, 0x2de2, 0xa4c9, 0x3223, 0x3717, 
	0x36aa, 0x3470, 0x32f9, 0x0263, 0x02cd, 0x0359, 0x0382, 0x034b, 0x0318, 0xff7c, 0xff54, 0xff12, 0xfefc, 0xff19, 0xff32, 0x0da0, 
	0x1019, 0x137c, 0x147f, 0x1323, 0x11e5, 0x008b, 0x00c1, 0x0164, 0x027e, 0x03d8, 0x0496, 0xfff5, 0xffa7, 0xff1d, 0xfeb0, 0xfe7f, 
	0xfe78, 0xbd5b, 0xbc1a, 0xba3c, 0xb95d, 0xb995, 0xb9f5, 0xb5ac, 0xba35, 0xc3b7, 0xcb34, 0xceb9, 0xcfa7, 0x371e, 0x3709, 0x35d6, 
	0x333d, 0x3078, 0x2f32, 0x2875, 0x2b6f, 0x324f, 0x37b8, 0x3a10, 0x3a9e, 0xf1b7, 0xee72, 0xe938, 0xe583, 0xe3c5, 0xe358, 0xfe64, 
	0xfd87, 0xfbc7, 0xfa42, 0xf978, 0xf945, 0xf686, 0xf46d, 0xf12d, 0xeef6, 0xedf4, 0xedb6, 0x0352, 0x0356, 0x0383, 0x040e, 0x04f6, 
	0x0568, 0xfe5f, 0xfad1, 0xf225, 0xe7aa, 0xdf04, 0xdda3, 0x0dfb, 0x0da1, 0x0cbc, 0x0b74, 0x0a03, 0x0967, 0xfad6, 0x0009, 0x0840, 
	0x0ee1, 0x12db, 0x1451, 0x0a02, 0x0980, 0x0607, 0xffa9, 0xf93d, 0xf671, 0x8b5e, 0x903a, 0x96dc, 0x9a6c, 0x99f7, 0x98a5, 0xfa62, 
	0xf5a0, 0xf0f0, 0xef6f, 0xf071, 0xf193, 0xfe9f, 0xfd10, 0xfa6e, 0xf94f, 0xfa14, 0xfadd, 0xf703, 0xef2e, 0xe702, 0xe43b, 0xe61b, 
	0xe829, 0x1594, 0x15c8, 0x164c, 0x1731, 0x1a4b, 0xeb8a, 0x1106, 0x15bd, 0x2175, 0x2fcc, 0x3b81, 0x407d, 0x0ca8, 0x0c8c, 0x0c5e, 
	0x0c82, 0x0f09, 0xe00e, };

JointIndex gSkelskelIdletowalkAnimJointIndices[22] = {
	{ 0x0000, 0x0015, 0x0000, },
	{ 0x0001, 0x0000, 0x0000, },
	{ 0x001b, 0x0021, 0x0027, },
	{ 0x002d, 0x0033, 0x0039, },
	{ 0x003f, 0x0045, 0x004b, },
	{ 0x0051, 0x0057, 0x005d, },
	{ 0x0063, 0x0069, 0x006f, },
	{ 0x0075, 0x007b, 0x0081, },
	{ 0x0002, 0x0003, 0x0004, },
	{ 0x0005, 0x0006, 0x0007, },
	{ 0x0008, 0x0009, 0x000a, },
	{ 0x000b, 0x000c, 0x000d, },
	{ 0x000e, 0x000f, 0x0010, },
	{ 0x0087, 0x008d, 0x0093, },
	{ 0x0099, 0x009f, 0x00a5, },
	{ 0x00ab, 0x00b1, 0x00b7, },
	{ 0x00bd, 0x00c3, 0x00c9, },
	{ 0x00cf, 0x00d5, 0x00db, },
	{ 0x00e1, 0x00e7, 0x00ed, },
	{ 0x0011, 0x0012, 0x0013, },
	{ 0x0000, 0x0000, 0x0000, },
	{ 0x0014, 0x0014, 0x0000, },
};

AnimationHeader gSkelskelIdletowalkAnim = { { 6 }, gSkelskelIdletowalkAnimFrameData, gSkelskelIdletowalkAnimJointIndices, 21 };
