#include "ultra64.h"
#include "global.h"

s16 ArmatureStraferAnimFrameData[1124] = {
	0x0000, 0x0f83, 0x0005, 0x0000, 0xffff, 0xfffb, 0xfff5, 0xffef, 0xffe8, 0xffe1, 0xffdc, 0xffd8, 0xffd7, 0xffd8, 0xffdc, 0xffe1, 
	0xffe8, 0xffef, 0xfff5, 0xfffb, 0xffff, 0x0000, 0x0000, 0x0002, 0x0009, 0x0013, 0x001e, 0x002a, 0x0035, 0x003e, 0x0045, 0x0047, 
	0x0045, 0x003e, 0x0035, 0x002a, 0x001e, 0x0013, 0x0009, 0x0002, 0x0000, 0x0000, 0x0001, 0x0002, 0x0004, 0x0007, 0x0009, 0x000c, 
	0x000e, 0x000f, 0x0010, 0x000f, 0x000e, 0x000c, 0x0009, 0x0007, 0x0004, 0x0002, 0x0001, 0x0000, 0xbf00, 0xbf00, 0xbf00, 0xbf00, 
	0xbeff, 0xbeff, 0xbeff, 0xbeff, 0xbf00, 0xbf00, 0xbf01, 0xbf02, 0xbf02, 0xbf02, 0xbf01, 0xbf01, 0xbf01, 0xbf00, 0xbf00, 0xfe50, 
	0xfd87, 0xfb90, 0xf902, 0xf674, 0xf47d, 0xf3b2, 0xf55d, 0xf998, 0xff24, 0x04b1, 0x08ec, 0x0a99, 0x09b1, 0x076b, 0x0474, 0x017e, 
	0xff38, 0xfe50, 0x1770, 0x189c, 0x1b54, 0x1cae, 0x1862, 0x1426, 0x148d, 0x1541, 0x158b, 0x16cd, 0x18b2, 0x19dd, 0x1872, 0x1648, 
	0x1519, 0x16cf, 0x1722, 0x175b, 0x1770, 0xd51e, 0xd404, 0xd1de, 0xd069, 0xd004, 0xd119, 0xd33d, 0xd470, 0xd3ad, 0xd20f, 0xd060, 
	0xcf93, 0xd02d, 0xd1ae, 0xd34d, 0xd4e6, 0xd502, 0xd516, 0xd51e, 0xc5d7, 0xc6a4, 0xc6ff, 0xc785, 0xcdea, 0xd24f, 0xcdbf, 0xca39, 
	0xcb73, 0xcccd, 0xccea, 0xcc7f, 0xcd93, 0xce36, 0xccd9, 0xc722, 0xc678, 0xc603, 0xc5d7, 0xa08b, 0x9f4c, 0x9bf8, 0x99a9, 0x9b2b, 
	0x9e39, 0xa05b, 0xa0fd, 0xa050, 0x9e38, 0x9b68, 0x99e0, 0x9b4e, 0x9e16, 0xa038, 0xa0ac, 0xa09b, 0xa08f, 0xa08b, 0x0071, 0x0443, 
	0x0a4a, 0x0d1c, 0x0c45, 0x08cc, 0x03b6, 0x00d7, 0x0341, 0x07fa, 0x0bf4, 0x0d8a, 0x0c1d, 0x0859, 0x03c1, 0x0096, 0x0084, 0x0076, 
	0x0071, 0x3bde, 0x3813, 0x3123, 0x2d35, 0x2eb4, 0x334c, 0x38b7, 0x3b7f, 0x3927, 0x3424, 0x2f21, 0x2ccd, 0x2eeb, 0x33ba, 0x38a9, 
	0x3bbc, 0x3bcd, 0x3bd9, 0x3bde, 0xfbe8, 0xfbdb, 0xfbb8, 0xfb87, 0xfb18, 0xfa82, 0xfa11, 0xf9c8, 0xf943, 0xf902, 0xf9cd, 0xfab0, 
	0xfaa8, 0xfa82, 0xfa89, 0xfac0, 0xfa4d, 0xfa2c, 0xfbe8, 0xd30d, 0xd313, 0xd323, 0xd33b, 0xd377, 0xd3d6, 0xd42e, 0xd460, 0xd503, 
	0xd539, 0xd44e, 0xd3ad, 0xd3b8, 0xd3d5, 0xd3d2, 0xd3a8, 0xd402, 0xd411, 0xd30d, 0xd38c, 0xd3b2, 0xd419, 0xd4ab, 0xd6db, 0xd9c3, 
	0xdad9, 0xdafa, 0xdeff, 0xe0cf, 0xdb8f, 0xd73a, 0xd844, 0xd9c2, 0xd8fd, 0xd726, 0xdaa9, 0xdb25, 0xd38c, 0xac5b, 0xac5c, 0xac61, 
	0xac68, 0xaa74, 0xa5dd, 0xa0d8, 0x9e66, 0xa08f, 0xa5b2, 0xaa82, 0xac91, 0xaa86, 0xa5dd, 0xa0e2, 0x9e91, 0xa214, 0xa8b8, 0xac5b, 
	0xf696, 0xf69d, 0xf6b0, 0xf6ca, 0xfaed, 0x02c4, 0x094a, 0x0bea, 0x0a43, 0x0460, 0xfbf2, 0xf72f, 0xfb27, 0x02c4, 0x08ed, 0x0b29, 
	0x07bb, 0xfea5, 0xf696, 0x2e7f, 0x2e7b, 0x2e70, 0x2e62, 0x2c13, 0x26e9, 0x2160, 0x1ea3, 0x209d, 0x25e1, 0x2b81, 0x2e2b, 0x2bf3, 
	0x26e9, 0x21a3, 0x1f44, 0x22d0, 0x29ce, 0x2e7f, 0xdea7, 0xdf37, 0xdefa, 0xde3b, 0xe0b7, 0xe26c, 0xe116, 0xdfd5, 0xe009, 0xe08b, 
	0xe03a, 0xdfa0, 0xe07f, 0xe17d, 0xe0e2, 0xdf01, 0xded3, 0xdeb3, 0xdea7, 0xd675, 0xd751, 0xd891, 0xd952, 0xda7d, 0xdac3, 0xd8e5, 
	0xd799, 0xd84f, 0xd96e, 0xda38, 0xda77, 0xda61, 0xd9c8, 0xd8b3, 0xd6cd, 0xd6a0, 0xd681, 0xd675, 0xe7c9, 0xe897, 0xe91c, 0xe8fa, 
	0xeafa, 0xec3f, 0xea8e, 0xe91e, 0xe99a, 0xea74, 0xea95, 0xea41, 0xeace, 0xeb38, 0xea54, 0xe830, 0xe7fb, 0xe7d6, 0xe7c9, 0xb707, 
	0xb20d, 0xaa0a, 0xa62a, 0xa776, 0xacb5, 0xb354, 0xb6e2, 0xb411, 0xadd8, 0xa819, 0xa5b1, 0xa7cc, 0xacfd, 0xb336, 0xb6f6, 0xb6fe, 
	0xb704, 0xb707, 0xf23b, 0xf77b, 0xff8d, 0x0350, 0x0263, 0xfdd3, 0xf6d0, 0xf2cf, 0xf609, 0xfc74, 0x01de, 0x0404, 0x021f, 0xfd21, 
	0xf6d8, 0xf26d, 0xf254, 0xf242, 0xf23b, 0x20c6, 0x1f3a, 0x1b6b, 0x18f1, 0x19af, 0x1c7f, 0x1f76, 0x209c, 0x1fb6, 0x1d29, 0x1a09, 
	0x187f, 0x19de, 0x1cd0, 0x1f73, 0x20b8, 0x20bf, 0x20c4, 0x20c6, 0xcf9f, 0xcfb5, 0xcfee, 0xd042, 0xd0f1, 0xd1d5, 0xd278, 0xd2d8, 
	0xd4af, 0xd5a1, 0xd3b5, 0xd1b8, 0xd11f, 0xd147, 0xd166, 0xd130, 0xd29c, 0xd321, 0xcf9f, 0xdc64, 0xdc6f, 0xdc8c, 0xdcb6, 0xdd86, 
	0xdf17, 0xe0a9, 0xe176, 0xe1b6, 0xe11a, 0xdefd, 0xdd71, 0xddca, 0xdef9, 0xe030, 0xe0a3, 0xe07c, 0xdf0b, 0xdc64, 0xf118, 0xf11d, 
	0xf129, 0xf13b, 0xf14c, 0xf153, 0xf152, 0xf15b, 0xf1f7, 0xf261, 0xf1fc, 0xf191, 0xf14f, 0xf129, 0xf108, 0xf0ea, 0xf164, 0xf1c6, 
	0xf118, 0xbe23, 0xbe1d, 0xbe0c, 0xbdf4, 0xbc60, 0xb955, 0xb6ab, 0xb588, 0xb5c9, 0xb7fc, 0xbb6e, 0xbd9d, 0xbc94, 0xb9b2, 0xb708, 
	0xb5f7, 0xb6f1, 0xba2a, 0xbe23, 0xf0a6, 0xf0ac, 0xf0bb, 0xf0d1, 0xf231, 0xf4f8, 0xf795, 0xf8c1, 0xf849, 0xf63e, 0xf316, 0xf128, 
	0xf239, 0xf4d2, 0xf74f, 0xf856, 0xf73e, 0xf40d, 0xf0a6, 0x1725, 0x1725, 0x1723, 0x1721, 0x16fb, 0x1685, 0x15e2, 0x1589, 0x15b4, 
	0x1643, 0x16dc, 0x1717, 0x16f7, 0x168b, 0x15f2, 0x15a4, 0x15fb, 0x16b5, 0x1725, 0x1770, 0x0e9f, 0x1057, 0x1156, 0x132d, 0x148d, 
	0x155f, 0x157e, 0x1374, 0x108c, 0x0f67, 0x1069, 0x1269, 0x144a, 0x15f3, 0x16e5, 0x172d, 0x175e, 0x1770, 0x2ae1, 0x2c23, 0x293f, 
	0x26ba, 0x2795, 0x2955, 0x2b0a, 0x2be0, 0x2b99, 0x2a6c, 0x28b8, 0x274c, 0x27ea, 0x2956, 0x2ab0, 0x2b30, 0x2b08, 0x2aec, 0x2ae1, 
	0x3a28, 0x2ab8, 0x348e, 0x3cb6, 0x3c99, 0x39eb, 0x3713, 0x356b, 0x332b, 0x31b5, 0x3497, 0x39f6, 0x3ac5, 0x3990, 0x38a0, 0x38c9, 
	0x397e, 0x39fa, 0x3a28, 0xa08b, 0xa2c7, 0xa309, 0xa1d2, 0xa1f2, 0xa205, 0xa13f, 0xa0ad, 0xa193, 0xa304, 0xa34e, 0xa26a, 0xa24c, 
	0xa21b, 0xa133, 0xa095, 0xa090, 0xa08d, 0xa08b, 0xff8e, 0x0150, 0x0a2f, 0x10ad, 0x0d1c, 0x0666, 0x008d, 0xfe04, 0xffc9, 0x04e8, 
	0x0b72, 0x0f7c, 0x0c72, 0x065b, 0x011a, 0xff13, 0xff52, 0xff7d, 0xff8e, 0xc421, 0xc298, 0xbaa2, 0xb467, 0xb79d, 0xbdc7, 0xc32e, 
	0xc599, 0xc3e7, 0xbf54, 0xb99d, 0xb5bc, 0xb858, 0xbdd4, 0xc2a8, 0xc497, 0xc45b, 0xc431, 0xc421, 0xfbe8, 0xfbda, 0xfbb6, 0xfb81, 
	0xfb24, 0xfab7, 0xfa77, 0xfb5d, 0xfae6, 0xfa9e, 0xfa8b, 0xfa9e, 0xfa6b, 0xfa50, 0xfb60, 0xfc58, 0xfc20, 0xfbf3, 0xfbe8, 0x2cf2, 
	0x2cec, 0x2cda, 0x2cc1, 0x2c92, 0x2c5b, 0x2c44, 0x2cb9, 0x2c81, 0x2c53, 0x2c3e, 0x2c45, 0x2c27, 0x2c21, 0x2cb6, 0x2d1a, 0x2d09, 
	0x2cf7, 0x2cf2, 0x2c73, 0x2c47, 0x2bd3, 0x2b2b, 0x2a2a, 0x2999, 0x2a73, 0x2e3b, 0x2cda, 0x2a79, 0x28a3, 0x2836, 0x2798, 0x2875, 
	0x2d4e, 0x3134, 0x3019, 0x2d9c, 0x2c73, 0xac5b, 0xac56, 0xac49, 0xac37, 0xace3, 0xae94, 0xb078, 0xb148, 0xb08d, 0xaeb2, 0xacc8, 
	0xabec, 0xacbe, 0xaeaa, 0xb08c, 0xb17f, 0xb04d, 0xadc5, 0xac5b, 0x0969, 0x0954, 0x091d, 0x08ce, 0x09e7, 0x0d3e, 0x1183, 0x148f, 
	0x1211, 0x0d4a, 0x0918, 0x0775, 0x08f4, 0x0d03, 0x12ab, 0x1622, 0x12a7, 0x0c73, 0x0969, 0xd180, 0xd18b, 0xd1a9, 0xd1d4, 0xd140, 
	0xcf97, 0xcda2, 0xcc3d, 0xcd5d, 0xcf93, 0xd1ae, 0xd290, 0xd1c1, 0xcfb7, 0xcd0e, 0xcb77, 0xcd03, 0xcff0, 0xd180, 0xdea7, 0xe1e8, 
	0xdc5b, 0xd7b1, 0xd9a7, 0xdc91, 0xdee0, 0xdff0, 0xdfb8, 0xde3b, 0xdb82, 0xd879, 0xda00, 0xdc95, 0xde75, 0xdf08, 0xded6, 0xdeb4, 
	0xdea7, 0x298a, 0x266f, 0x2b1b, 0x3035, 0x2ddf, 0x2b24, 0x2926, 0x2811, 0x2839, 0x2986, 0x2b90, 0x2ec2, 0x2d34, 0x2afb, 0x2980, 
	0x2919, 0x2953, 0x297b, 0x298a, 0x1836, 0x1493, 0x1ae5, 0x22c3, 0x1ee5, 0x1a9b, 0x17de, 0x16a4, 0x16dc, 0x1889, 0x1bba, 0x2081, 
	0x1dfe, 0x1a78, 0x1850, 0x17be, 0x17fb, 0x1826, 0x1836, 0xb707, 0xba73, 0xc926, 0xe351, 0xd125, 0xc211, 0xb949, 0xb5ec, 0xb8bf, 
	0xc077, 0xcce9, 0xdc60, 0xcfb6, 0xc20c, 0xb9b8, 0xb6ad, 0xb6da, 0xb6fa, 0xb707, 0x0dc4, 0x0fdb, 0x1e56, 0x2bcb, 0x243a, 0x189e, 
	0x0fc2, 0x0c05, 0x0ed2, 0x16a6, 0x2100, 0x2966, 0x232f, 0x187e, 0x104a, 0x0d39, 0x0d80, 0x0db1, 0x0dc4, 0xdf39, 0xdeed, 0xdf4c, 
	0xeb9f, 0xe1c6, 0xde34, 0xded8, 0xdfb0, 0xdf0d, 0xde48, 0xe05c, 0xe76b, 0xe141, 0xde3a, 0xdebf, 0xdf5d, 0xdf4a, 0xdf3e, 0xdf39, 
	0xcf9f, 0xcfb7, 0xcff7, 0xd053, 0xd116, 0xd16e, 0xd040, 0xcdce, 0xce02, 0xcfc6, 0xd16f, 0xd1f4, 0xd287, 0xd1b8, 0xce82, 0xcc23, 
	0xccfa, 0xcecd, 0xcf9f, 0x239b, 0x238b, 0x2363, 0x2328, 0x2346, 0x243e, 0x2611, 0x27f5, 0x26ce, 0x24a8, 0x22cb, 0x221b, 0x22af, 
	0x241b, 0x26ef, 0x290f, 0x2791, 0x24ea, 0x239b, 0x0ee7, 0x0ee2, 0x0ed6, 0x0ec5, 0x0e82, 0x0e51, 0x0ec3, 0x0f7d, 0x0f45, 0x0ec1, 
	0x0e7b, 0x0e6f, 0x0e24, 0x0e3f, 0x0f2d, 0x0fd3, 0x0f63, 0x0ee9, 0x0ee7, 0xbe23, 0xbe12, 0xbde4, 0xbda3, 0xbeed, 0xc312, 0xc910, 
	0xcd9f, 0xca89, 0xc3fd, 0xbe9f, 0xbc8e, 0xbdee, 0xc2ed, 0xca79, 0xcf89, 0xc9fd, 0xc1b5, 0xbe23, 0x0f59, 0x0f4a, 0x0f22, 0x0ee9, 
	0x0ffe, 0x1337, 0x1760, 0x1a2f, 0x1807, 0x1390, 0x0f8b, 0x0ded, 0x0f5f, 0x131e, 0x1835, 0x1b4c, 0x1800, 0x1233, 0x0f59, 0xe8da, 
	0xe8db, 0xe8df, 0xe8e4, 0xe8d0, 0xe8c8, 0xe939, 0xe9eb, 0xe970, 0xe8d9, 0xe8dc, 0xe900, 0xe8d7, 0xe8c7, 0xe966, 0xea56, 0xe94f, 
	0xe8be, 0xe8da, 0x3813, 0x3813, 0x3813, 0x3813, 0x3813, 0x3813, 0x3813, 0x3813, 0x39b5, 0x3c95, 0x3e0e, 0x3813, 0x3e0e, 0x3c95, 
	0x39b5, 0x3813, 0x3813, 0x3813, 0x3813, 0xebf2, 0xebf2, 0xebf2, 0xebf2, 0xebf2, 0xebf2, 0xebf2, 0xebf2, 0xed91, 0xf0a3, 0xf252, 
	0xebf2, 0xf252, 0xf0a3, 0xed91, 0xebf2, 0xebf2, 0xebf2, 0xebf2, 0x9e32, 0x9e32, 0x9e32, 0x9e32, 0x9e32, 0x9e32, 0x9e32, 0x9e32, 
	0x9d73, 0x9c4a, 0x9bc7, 0x9e32, 0x9bc7, 0x9c4a, 0x9d73, 0x9e32, 0x9e32, 0x9e32, 0x9e32, 0x3813, 0x3813, 0x3813, 0x3813, 0x3813, 
	0x3813, 0x3813, 0x3813, 0x3a04, 0x3d68, 0x3f22, 0x3813, 0x3f22, 0x3d68, 0x3a04, 0x3813, 0x3813, 0x3813, 0x3813, 0x140d, 0x140d, 
	0x140d, 0x140d, 0x140d, 0x140d, 0x140d, 0x140d, 0x121d, 0x0e6d, 0x0c68, 0x140d, 0x0c68, 0x0e6d, 0x121d, 0x140d, 0x140d, 0x140d, 
	0x140d, 0x61cd, 0x61cd, 0x61cd, 0x61cd, 0x61cd, 0x61cd, 0x61cd, 0x61cd, 0x62ae, 0x6400, 0x648f, 0x61cd, 0x648f, 0x6400, 0x62ae, 
	0x61cd, 0x61cd, 0x61cd, 0x61cd, };

JointIndex ArmatureStraferAnimJointIndices[22] = {
	{ 0x0003, 0x0016, 0x0029, },
	{ 0x0000, 0x0000, 0x0000, },
	{ 0x0001, 0x0000, 0x0000, },
	{ 0x003c, 0x004f, 0x0002, },
	{ 0x0062, 0x0075, 0x0088, },
	{ 0x009b, 0x00ae, 0x00c1, },
	{ 0x00d4, 0x00e7, 0x00fa, },
	{ 0x010d, 0x0120, 0x0133, },
	{ 0x0146, 0x0159, 0x016c, },
	{ 0x017f, 0x0192, 0x01a5, },
	{ 0x01b8, 0x01cb, 0x01de, },
	{ 0x01f1, 0x0204, 0x0217, },
	{ 0x022a, 0x023d, 0x0250, },
	{ 0x0263, 0x0276, 0x0289, },
	{ 0x029c, 0x02af, 0x02c2, },
	{ 0x02d5, 0x02e8, 0x02fb, },
	{ 0x030e, 0x0321, 0x0334, },
	{ 0x0347, 0x035a, 0x036d, },
	{ 0x0380, 0x0393, 0x03a6, },
	{ 0x03b9, 0x03cc, 0x03df, },
	{ 0x03f2, 0x0405, 0x0418, },
	{ 0x042b, 0x043e, 0x0451, },
};

AnimationHeader ArmatureStraferAnim = { { 19 }, ArmatureStraferAnimFrameData, ArmatureStraferAnimJointIndices, 3 };

