#include "ultra64.h"
#include "global.h"

s16 ArmatureClimbendAnimFrameData[706] = {
	0x0000, 0x053b, 0x02c0, 0x0252, 0x0160, 0x006e, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0097, 0x007f, 0x004b, 
	0x0018, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xbfff, 0xc979, 0xe02e, 0xf6af, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xfa8d, 0xfab2, 0xfc27, 0xfec1, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xfebf, 
	0xfc22, 0xfab1, 0xfa8d, 0xfa8d, 0xfa8d, 0xfa8d, 0xfa8d, 0xfa8d, 0xfa8d, 0x1009, 0x0dd1, 0x0b99, 0x0b99, 0x0b99, 0x0b99, 0x0b99, 
	0x0b99, 0x0b99, 0x0b99, 0x0b99, 0xffff, 0xfffc, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xfff9, 0xbbb6, 
	0xae94, 0xa16b, 0xa2c0, 0xa614, 0xaa76, 0xaf46, 0xb3f2, 0xb7ed, 0xbaae, 0xbbb6, 0xfd86, 0xfcdf, 0xfc8d, 0xfc91, 0xfca0, 0xfcbc, 
	0xfce6, 0xfd1a, 0xfd4e, 0xfd76, 0xfd86, 0xfdb8, 0xfea8, 0xffc1, 0xffa3, 0xff5a, 0xfefd, 0xfe9a, 0xfe40, 0xfdf8, 0xfdc9, 0xfdb8, 
	0x0f25, 0x2a0f, 0x372a, 0x028a, 0x170c, 0x3812, 0x3a34, 0x3a34, 0x3a34, 0x3a34, 0x3a34, 0xd730, 0xd1c9, 0xd53c, 0xcb81, 0xcb7a, 
	0xd75f, 0xe333, 0xe333, 0xe333, 0xe333, 0xe333, 0xcd7a, 0xb914, 0xb2ef, 0xf594, 0xd7a1, 0xa8e7, 0xa17b, 0xa17b, 0xa17b, 0xa17b, 
	0xa17b, 0xa261, 0x9a64, 0x0cfa, 0x9e27, 0x9bba, 0x94fa, 0x0d15, 0x0d15, 0x0d15, 0x0d15, 0x0d15, 0x08b3, 0xfddf, 0x956f, 0xf9d3, 
	0x04c4, 0xf80c, 0x91ac, 0x91ac, 0x91ac, 0x91ac, 0x91ac, 0x3449, 0x3f39, 0xe583, 0x436c, 0x3768, 0x48f6, 0xe008, 0xe008, 0xe008, 
	0xe008, 0xe008, 0x1308, 0x0f1e, 0x0790, 0x0733, 0x1131, 0x23d7, 0x2da5, 0x2da5, 0x2da5, 0x2da5, 0x2da5, 0xcd10, 0xcd1b, 0xce5c, 
	0xcebd, 0xcdd2, 0xce93, 0xd106, 0xd106, 0xd106, 0xd106, 0xd106, 0xc732, 0xccfe, 0xd52a, 0xd188, 0xc33c, 0xaf07, 0xa59e, 0xa59e, 
	0xa59e, 0xa59e, 0xa59e, 0xa721, 0xa717, 0xa772, 0xa73f, 0xa642, 0xa436, 0xa262, 0xa262, 0xa262, 0xa262, 0xa262, 0xee52, 0xf055, 
	0xf49d, 0xf62c, 0xf355, 0xecac, 0xe768, 0xe768, 0xe768, 0xe768, 0xe768, 0x34bd, 0x334a, 0x3030, 0x2f11, 0x3136, 0x372d, 0x3d16, 
	0x3d16, 0x3d16, 0x3d16, 0x3d16, 0xdf69, 0xe30f, 0xea7e, 0xed46, 0xeee7, 0xee7c, 0xfede, 0xf505, 0xec87, 0xe8e7, 0xe5e4, 0xd70e, 
	0xd423, 0xd0a4, 0xd526, 0xd8f9, 0xcfa9, 0xc783, 0xc9c2, 0xcf21, 0xd2fd, 0xd3b3, 0xe892, 0xe8f2, 0xeb36, 0xf3cb, 0xf683, 0xf027, 
	0xd539, 0xe13c, 0xec0b, 0xec8e, 0xea6e, 0xb309, 0xad68, 0xa535, 0xa3e7, 0xa635, 0xa13d, 0xa096, 0xa0aa, 0xa255, 0xa5ed, 0xa8c5, 
	0xf643, 0xf7dc, 0xf978, 0xfc66, 0xfd6c, 0xf9c4, 0xf3c2, 0xf615, 0xf9b8, 0xfb24, 0xfa89, 0x1fa5, 0x1f15, 0x1e78, 0x1c61, 0x1bfd, 
	0x1e5d, 0x240e, 0x21e2, 0x1e68, 0x1d61, 0x1dd6, 0xd741, 0xd59b, 0xd547, 0xd8f6, 0xd900, 0xd9c1, 0xdb98, 0xe0a4, 0xd4d3, 0xd4d3, 
	0xd4d3, 0xdb81, 0xd610, 0xcf6d, 0xd52e, 0xdaac, 0xd3e6, 0xcc34, 0xdcad, 0xe240, 0xe240, 0xe240, 0xf3b8, 0xf381, 0xf374, 0xf524, 
	0xf4a0, 0xf568, 0xf472, 0xf830, 0xf1f4, 0xf1f4, 0xf1f4, 0x9dca, 0x9c2c, 0x9c45, 0x9ffb, 0xa63e, 0x9fc3, 0x9b46, 0xa1f2, 0xb58f, 
	0xb58f, 0xb58f, 0xff36, 0xfcac, 0xf844, 0xf929, 0xfa27, 0xf81b, 0xf486, 0xfb7d, 0xf8cb, 0xf8cb, 0xf8cb, 0x10f8, 0x12db, 0x16aa, 
	0x152b, 0x146e, 0x15f3, 0x1a16, 0x133e, 0x158f, 0x158f, 0x158f, 0x2c74, 0x2edc, 0x31d9, 0x277b, 0x23c0, 0x2ce3, 0x3007, 0x3007, 
	0x3007, 0x3007, 0x3007, 0x2cb5, 0x2684, 0x21e0, 0x2e64, 0x2adb, 0x2643, 0x216a, 0x216a, 0x216a, 0x216a, 0x216a, 0x4936, 0x52c4, 
	0x5785, 0x4368, 0x46ef, 0x53b2, 0x58c4, 0x58c4, 0x58c4, 0x58c4, 0x58c4, 0x1818, 0x147f, 0x0e4a, 0x9acd, 0x9ca0, 0x1765, 0x110b, 
	0x110b, 0x110b, 0x110b, 0x110b, 0x71f7, 0x6cf8, 0x68c5, 0x090d, 0x06e7, 0x7121, 0x6a6c, 0x6a6c, 0x6a6c, 0x6a6c, 0x6a6c, 0x317f, 
	0x28a6, 0x1c0c, 0xb8e1, 0xbc29, 0x306f, 0x21a4, 0x21a4, 0x21a4, 0x21a4, 0x21a4, 0xfd64, 0x057a, 0x18ee, 0x1fa2, 0x1c13, 0x24ac, 
	0x2da9, 0x2da9, 0x2da9, 0x2da9, 0x2da9, 0x2d68, 0x2ee8, 0x2f5b, 0x300e, 0x31cc, 0x32d5, 0x30c0, 0x30c0, 0x30c0, 0x30c0, 0x30c0, 
	0x3618, 0x3e72, 0x4f7b, 0x4c2b, 0x41a6, 0x4a13, 0x581d, 0x581d, 0x581d, 0x581d, 0x581d, 0xb240, 0xb016, 0xab3d, 0xa82e, 0xa84d, 
	0xa3d6, 0xa055, 0xa055, 0xa055, 0xa055, 0xa055, 0x1910, 0x1b6a, 0x215f, 0x227d, 0x1fd2, 0x151e, 0x110d, 0x110d, 0x110d, 0x110d, 
	0x110d, 0xca21, 0xc7c9, 0xc12c, 0xbdf1, 0xc041, 0xc6e9, 0xc8ca, 0xc8ca, 0xc8ca, 0xc8ca, 0xc8ca, 0xea6b, 0xeb41, 0xea6d, 0xe5f5, 
	0xe39e, 0xea13, 0xf93f, 0xf1ee, 0xeb54, 0xe715, 0xe3d8, 0x2eab, 0x2e8f, 0x2d22, 0x2baf, 0x2ba2, 0x31b3, 0x379f, 0x356f, 0x3056, 
	0x2c6e, 0x2be0, 0x14cf, 0x1385, 0x12db, 0x14e5, 0x167a, 0x199c, 0x2751, 0x1e54, 0x160e, 0x14c3, 0x1686, 0xa773, 0xa6c1, 0xa7bb, 
	0xab87, 0xada8, 0xa7e5, 0xa45f, 0xa4a4, 0xa68a, 0xaa5f, 0xad5e, 0x07b9, 0x0780, 0x06ee, 0x0777, 0x0870, 0x09d5, 0x0db8, 0x0bb9, 
	0x0882, 0x076a, 0x0870, 0xe0e2, 0xe108, 0xe166, 0xe13b, 0xe0ce, 0xdfa7, 0xdc0d, 0xddbf, 0xe055, 0xe13b, 0xe0cd, 0xcd2d, 0xcc68, 
	0xd01a, 0xdfc2, 0xe56d, 0xddfd, 0xd9bc, 0xdbd1, 0xcfb8, 0xcfb8, 0xcfb8, 0x1fe1, 0x25d4, 0x311b, 0x2808, 0x1ed5, 0x2b29, 0x36dc, 
	0x2873, 0x2366, 0x2366, 0x2366, 0x1048, 0x0f63, 0x0d5d, 0x0702, 0x061d, 0x089b, 0x0f0e, 0x0ac2, 0x0ee9, 0x0ee9, 0x0ee9, 0xbfe8, 
	0xb6a1, 0xa49a, 0x99dd, 0x9ff4, 0xa072, 0xa6b6, 0xac22, 0xbf82, 0xbf82, 0xbf82, 0x0cda, 0x0ba0, 0x0ae9, 0x047b, 0x014f, 0x08fe, 
	0x12be, 0x0c12, 0x1007, 0x1007, 0x1007, 0xe96e, 0xe939, 0xe7a1, 0xece8, 0xeec4, 0xe994, 0xe271, 0xe890, 0xe8db, 0xe8db, 0xe8db, 
	0x3813, 0x3201, 0x2c85, 0x3201, 0x3813, 0x3813, 0x3813, 0x3813, 0x3813, 0x3813, 0x3813, 0xebf2, 0xf149, 0xf6e4, 0xf149, 0xebf2, 
	0xebf2, 0xebf2, 0xebf2, 0xebf2, 0xebf2, 0xebf2, 0x9e32, 0xa0b3, 0xa245, 0xa0b3, 0x9e32, 0x9e32, 0x9e32, 0x9e32, 0x9e32, 0x9e32, 
	0x9e32, 0x3813, 0x3211, 0x2ca4, 0x3211, 0x3813, 0x3813, 0x3813, 0x3813, 0x3813, 0x3813, 0x3813, 0x140d, 0x0ea8, 0x0900, 0x0ea8, 
	0x140d, 0x140d, 0x140d, 0x140d, 0x140d, 0x140d, 0x140d, 0x61cd, 0x5f4b, 0x5db9, 0x5f4b, 0x61cd, 0x61cd, 0x61cd, 0x61cd, 0x61cd, 
	0x61cd, 0x61cd, };

JointIndex ArmatureClimbendAnimJointIndices[22] = {
	{ 0x0000, 0x0002, 0x000d, },
	{ 0x0018, 0x0023, 0x002e, },
	{ 0x0039, 0x0044, 0x0001, },
	{ 0x004f, 0x005a, 0x0065, },
	{ 0x0070, 0x007b, 0x0086, },
	{ 0x0091, 0x009c, 0x00a7, },
	{ 0x00b2, 0x00bd, 0x00c8, },
	{ 0x00d3, 0x00de, 0x00e9, },
	{ 0x00f4, 0x00ff, 0x010a, },
	{ 0x0115, 0x0120, 0x012b, },
	{ 0x0136, 0x0141, 0x014c, },
	{ 0x0157, 0x0162, 0x016d, },
	{ 0x0178, 0x0183, 0x018e, },
	{ 0x0199, 0x01a4, 0x01af, },
	{ 0x01ba, 0x01c5, 0x01d0, },
	{ 0x01db, 0x01e6, 0x01f1, },
	{ 0x01fc, 0x0207, 0x0212, },
	{ 0x021d, 0x0228, 0x0233, },
	{ 0x023e, 0x0249, 0x0254, },
	{ 0x025f, 0x026a, 0x0275, },
	{ 0x0280, 0x028b, 0x0296, },
	{ 0x02a1, 0x02ac, 0x02b7, },
};

AnimationHeader ArmatureClimbendAnim = { { 11 }, ArmatureClimbendAnimFrameData, ArmatureClimbendAnimJointIndices, 2 };

