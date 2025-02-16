#include "ultra64.h"
#include "global.h"

s16 gSkelskelWalkcombatAnimFrameData[958] = {
	0x0000, 0x06c3, 0x8000, 0xffff, 0xfd7b, 0x0028, 0x00b3, 0xe822, 0xffa3, 0xff0d, 0xf4e5, 0x0362, 0x01c7, 0xd6c1, 0xfe97, 0xfb79, 
	0xdae4, 0xfd6c, 0x00b0, 0x06a5, 0x0084, 0x0b1a, 0x1fbb, 0x130f, 0x369b, 0xeda1, 0xf19f, 0xca27, 0x0e51, 0x0e31, 0x0e11, 0x0df5, 
	0x0de2, 0x0dda, 0x0df0, 0x0e23, 0x0e61, 0x0e94, 0x0eaa, 0x0ea6, 0x0e99, 0x0e87, 0x0e6e, 0x0e51, 0x0e31, 0x0e11, 0x0df5, 0x0de2, 
	0x0dda, 0x0df0, 0x0e23, 0x0e61, 0x0e94, 0x0eaa, 0x0ea6, 0x0e99, 0x0e87, 0x0e6e, 0x4916, 0x4934, 0x49bf, 0x4a46, 0x4abb, 0x4b03, 
	0x4c8a, 0x5387, 0x7866, 0xac8a, 0xb699, 0xb8de, 0xb7fb, 0xb4de, 0xafe4, 0xa8ec, 0xa417, 0xa374, 0xa5de, 0xaa12, 0xad33, 0xaed2, 
	0xb004, 0xaf58, 0xaa04, 0x93dc, 0x643a, 0x517d, 0x4ba1, 0x4966, 0x3039, 0x301e, 0x306e, 0x30e1, 0x3149, 0x3177, 0x3322, 0x3780, 
	0x3c09, 0x37b1, 0x2f5f, 0x27e4, 0x23ea, 0x23d5, 0x26f8, 0x2af3, 0x2cfb, 0x2dd8, 0x2d02, 0x2c4d, 0x2bc9, 0x2bd7, 0x2d85, 0x3114, 
	0x361a, 0x3adf, 0x3aae, 0x36e1, 0x3373, 0x313e, 0xc9ae, 0xc9a9, 0xca07, 0xca57, 0xca9e, 0xcad8, 0xcc3c, 0xd2e0, 0xf74d, 0x2aff, 
	0x34b3, 0x36e4, 0x3648, 0x3384, 0x2ea8, 0x27ad, 0x22d8, 0x2241, 0x24b4, 0x28f7, 0x2c1e, 0x2dd4, 0x2f2a, 0x2ea1, 0x297a, 0x1390, 
	0xe432, 0xd1bc, 0xcc15, 0xc9f2, 0xfd37, 0xfcc3, 0xfc50, 0xfbf3, 0xfbb5, 0xfb9e, 0xfb77, 0xfb19, 0xfab1, 0xfa5e, 0xfa29, 0xfa26, 
	0xfa71, 0xfb37, 0xfc95, 0xfe0e, 0xfec9, 0xfefb, 0xfe9b, 0xfe1d, 0xfdb6, 0xfd42, 0xfcd0, 0xfc96, 0xfca5, 0xfced, 0xfd45, 0xfd8f, 
	0xfdae, 0xfd8e, 0x0191, 0x01d3, 0x0221, 0x026c, 0x02a5, 0x02bc, 0x02e6, 0x0356, 0x03f1, 0x0493, 0x051c, 0x0525, 0x0469, 0x032f, 
	0x01f0, 0x0137, 0x0105, 0x00fc, 0x010f, 0x0132, 0x0157, 0x018b, 0x01cb, 0x01ef, 0x01e5, 0x01b9, 0x018a, 0x0168, 0x015b, 0x0168, 
	0x132a, 0x16a3, 0x1a39, 0x1d51, 0x1f80, 0x2059, 0x21d2, 0x259e, 0x2a71, 0x2f26, 0x32f4, 0x3332, 0x2df4, 0x2456, 0x180a, 0x0d23, 
	0x081a, 0x06ca, 0x0955, 0x0cb8, 0x0f91, 0x12d8, 0x163e, 0x1805, 0x178c, 0x1558, 0x12c8, 0x10aa, 0x0fcb, 0x10ac, 0x05ec, 0x060d, 
	0x063f, 0x064f, 0x0649, 0x064a, 0x064e, 0x0653, 0x0649, 0x0632, 0x0631, 0x06a9, 0x07f0, 0x09ef, 0x0bef, 0x0da0, 0x0e79, 0x0e3c, 
	0x0dce, 0x0c4e, 0x0af8, 0x0a34, 0x094f, 0x086e, 0x07a0, 0x06f9, 0x067d, 0x0620, 0x05e0, 0x05be, 0x019f, 0x0165, 0x00e5, 0x0050, 
	0xffd5, 0xff9f, 0xffd7, 0x006d, 0x013a, 0x0215, 0x02d7, 0x0343, 0x0356, 0x033d, 0x02f1, 0x0278, 0x018c, 0xffed, 0xfe33, 0xfcec, 
	0xfc3a, 0xfc4c, 0xfd57, 0xfe9e, 0xffae, 0x0063, 0x00d9, 0x012c, 0x0169, 0x0195, 0xb973, 0xbbfe, 0xc063, 0xc556, 0xc95b, 0xcaff, 
	0xc986, 0xc584, 0xbfb9, 0xb900, 0xb269, 0xae06, 0xacbb, 0xae13, 0xb19d, 0xb5d8, 0xb9f9, 0xbf28, 0xc42e, 0xc92d, 0xcd4d, 0xce4c, 
	0xcc1b, 0xc857, 0xc43a, 0xc08a, 0xbd87, 0xbb41, 0xb9b2, 0xb8f6, 0xd51a, 0xd79d, 0xd90a, 0xd915, 0xd857, 0xd6ee, 0xd5bf, 0xd62c, 
	0xd90d, 0xe3cd, 0x0937, 0x2683, 0x2f44, 0x3322, 0x355e, 0x3710, 0x382b, 0x385d, 0x37d3, 0x369a, 0x34cf, 0x30ee, 0x229d, 0xe7c1, 
	0xccfe, 0xc643, 0xc49d, 0xc63b, 0xca24, 0xd015, 0x2be0, 0x2dc3, 0x2e26, 0x2d8f, 0x2cd6, 0x2cce, 0x2dc0, 0x2faf, 0x3323, 0x37bd, 
	0x3a48, 0x3775, 0x3462, 0x31ba, 0x2f3e, 0x2d0d, 0x2b4a, 0x2a5f, 0x2aab, 0x2c18, 0x2e45, 0x326c, 0x388a, 0x3a15, 0x3175, 0x2661, 
	0x1d55, 0x1abe, 0x1e21, 0x250c, 0x56db, 0x593c, 0x5a9f, 0x5ab0, 0x59fb, 0x589a, 0x575a, 0x5796, 0x5a3d, 0x64bb, 0x89ca, 0xa6d4, 
	0xaf87, 0xb36a, 0xb5a7, 0xb765, 0xb887, 0xb8a9, 0xb820, 0xb707, 0xb584, 0xb253, 0xa4ef, 0x6ae3, 0x50ef, 0x4ae9, 0x493e, 0x49e6, 
	0x4cc1, 0x5216, 0x0318, 0x027f, 0x024f, 0x0270, 0x02a7, 0x02c3, 0x02e7, 0x032d, 0x034f, 0x0322, 0x02a1, 0x0252, 0x0282, 0x02d4, 
	0x0315, 0x0336, 0x033a, 0x034e, 0x039e, 0x0430, 0x04ef, 0x05e6, 0x06c8, 0x073f, 0x0747, 0x0717, 0x071f, 0x074e, 0x06d2, 0x051a, 
	0xff32, 0xff72, 0xff83, 0xff78, 0xff63, 0xff58, 0xff48, 0xff28, 0xff18, 0xff2d, 0xff65, 0xff82, 0xff71, 0xff51, 0xff34, 0xff24, 
	0xff22, 0xff18, 0xfeec, 0xfe90, 0xfdf6, 0xfce1, 0xfb49, 0xf985, 0xf7ed, 0xf6d9, 0xf6f9, 0xf898, 0xfb2f, 0xfdcd, 0x11e5, 0x0e48, 
	0x0d2b, 0x0ded, 0x0f37, 0x0fdd, 0x10bc, 0x1269, 0x133a, 0x1226, 0x0f12, 0x0d3e, 0x0e57, 0x1045, 0x11d2, 0x12a0, 0x12b7, 0x1338, 
	0x1534, 0x18fb, 0x1e53, 0x2666, 0x308a, 0x3abf, 0x43b0, 0x49df, 0x4926, 0x3fef, 0x3124, 0x1f9d, 0xf42d, 0xf432, 0xf3f0, 0xf3b2, 
	0xf3c5, 0xf487, 0xf58a, 0xf642, 0xf729, 0xf836, 0xf912, 0xf9b2, 0xfa2e, 0xfa8c, 0xfac6, 0xfb06, 0xfb22, 0xfaf9, 0xfac7, 0xfa96, 
	0xfa6d, 0xfa7e, 0xfac0, 0xfafb, 0xfb39, 0xfb1e, 0xf9f4, 0xf7d2, 0xf570, 0xf3ab, 0xff2d, 0xffbb, 0x0099, 0x01a5, 0x02b6, 0x036b, 
	0x034e, 0x028d, 0x0177, 0x007c, 0xffe6, 0xff77, 0xff01, 0xfea7, 0xfe82, 0xfe9d, 0xfeff, 0xff90, 0x0020, 0x0073, 0x0042, 0xff56, 
	0xfe24, 0xfd1a, 0xfc51, 0xfbec, 0xfc21, 0xfccc, 0xfd93, 0xfe6a, 0xb9dc, 0xbc81, 0xbfcd, 0xc349, 0xc6d1, 0xca34, 0xcb7d, 0xc9cd, 
	0xc6a4, 0xc338, 0xc05c, 0xbd50, 0xb9b4, 0xb6dc, 0xb5c9, 0xb728, 0xbbb8, 0xc242, 0xc86e, 0xcc17, 0xcb58, 0xc5f8, 0xbe41, 0xb5d5, 
	0xae57, 0xa986, 0xa926, 0xab90, 0xaf61, 0xb4c5, 0xdcf3, 0xdcdf, 0xdcc7, 0xdcaf, 0xdc9d, 0xdc96, 0xdca5, 0xdcca, 0xdcf6, 0xdd1a, 
	0xdd2a, 0xdd26, 0xdd1e, 0xdd10, 0xdcfe, 0xdce9, 0xdcd2, 0xdcbb, 0xdca6, 0xdc98, 0xdc93, 0xdc9f, 0xdcba, 0xdcdb, 0xdcf6, 0xdd02, 
	0xdd03, 0xdd05, 0xdd04, 0xdcff, 0x2e7a, 0x2e74, 0x2e64, 0x2e51, 0x2e41, 0x2e3a, 0x2e3d, 0x2e44, 0x2e4d, 0x2e54, 0x2e56, 0x2e56, 
	0x2e56, 0x2e55, 0x2e52, 0x2e4f, 0x2e49, 0x2e43, 0x2e3e, 0x2e3a, 0x2e38, 0x2e38, 0x2e39, 0x2e3a, 0x2e3b, 0x2e3b, 0x2e42, 0x2e52, 
	0x2e64, 0x2e74, 0x43b4, 0x439e, 0x4386, 0x4371, 0x4362, 0x435c, 0x436f, 0x439b, 0x43d0, 0x43fb, 0x440e, 0x440a, 0x43ff, 0x43ed, 
	0x43d7, 0x43be, 0x43a2, 0x4387, 0x4370, 0x4360, 0x4359, 0x4368, 0x438c, 0x43b6, 0x43da, 0x43e8, 0x43e6, 0x43e0, 0x43d6, 0x43c7, 
	0xb002, 0xafed, 0xafbd, 0xaf85, 0xaf56, 0xaf42, 0xaf4d, 0xaf67, 0xaf85, 0xaf9f, 0xafaa, 0xafa9, 0xafa6, 0xafa0, 0xaf97, 0xaf89, 
	0xaf77, 0xaf63, 0xaf50, 0xaf42, 0xaf3d, 0xaf40, 0xaf47, 0xaf4f, 0xaf55, 0xaf58, 0xaf6a, 0xaf96, 0xafc9, 0xaff3, 0xd8fd, 0xd8f3, 
	0xd8dd, 0xd8c4, 0xd8af, 0xd8a7, 0xd8ab, 0xd8b7, 0xd8c4, 0xd8d0, 0xd8d5, 0xd8d4, 0xd8d3, 0xd8d0, 0xd8cc, 0xd8c6, 0xd8be, 0xd8b5, 
	0xd8ad, 0xd8a7, 0xd8a4, 0xd8a6, 0xd8a8, 0xd8ac, 0xd8af, 0xd8b0, 0xd8b8, 0xd8cc, 0xd8e3, 0xd8f6, 0xe4c1, 0xe4c8, 0xe4d8, 0xe4ea, 
	0xe4fa, 0xe501, 0xe4fd, 0xe4f5, 0xe4ea, 0xe4e2, 0xe4de, 0xe4de, 0xe4df, 0xe4e1, 0xe4e5, 0xe4e9, 0xe4ef, 0xe4f6, 0xe4fc, 0xe501, 
	0xe503, 0xe502, 0xe500, 0xe4fd, 0xe4fb, 0xe4fa, 0xe4f3, 0xe4e5, 0xe4d4, 0xe4c6, 0x065e, 0x066e, 0x0690, 0x06b7, 0x06d7, 0x06e5, 
	0x06dd, 0x06cc, 0x06b6, 0x06a5, 0x069d, 0x069e, 0x06a0, 0x06a4, 0x06aa, 0x06b4, 0x06c1, 0x06cf, 0x06db, 0x06e5, 0x06e8, 0x06e6, 
	0x06e2, 0x06dc, 0x06d8, 0x06d6, 0x06c9, 0x06ab, 0x0687, 0x0669, 0x1838, 0x1836, 0x1831, 0x182c, 0x1827, 0x1825, 0x1826, 0x1829, 
	0x182c, 0x182e, 0x182f, 0x182f, 0x182f, 0x182e, 0x182d, 0x182c, 0x182a, 0x1828, 0x1827, 0x1825, 0x1825, 0x1825, 0x1826, 0x1827, 
	0x1827, 0x1827, 0x1829, 0x182d, 0x1832, 0x1836, 0x956b, 0x957b, 0x959c, 0x95c4, 0x95e4, 0x95f2, 0x95eb, 0x95d9, 0x95c3, 0x95b2, 
	0x95aa, 0x95ab, 0x95ad, 0x95b1, 0x95b7, 0x95c1, 0x95ce, 0x95dc, 0x95e9, 0x95f2, 0x95f6, 0x95f4, 0x95ef, 0x95ea, 0x95e5, 0x95e3, 
	0x95d6, 0x95b8, 0x9594, 0x9576, 0xebf6, 0xebeb, 0xebd3, 0xebb8, 0xeba2, 0xeb99, 0xeb9e, 0xebaa, 0xebb8, 0xebc5, 0xebca, 0xebc9, 
	0xebc8, 0xebc5, 0xebc1, 0xebba, 0xebb1, 0xeba8, 0xeb9f, 0xeb99, 0xeb96, 0xeb98, 0xeb9b, 0xeb9e, 0xeba2, 0xeba3, 0xebac, 0xebc0, 
	0xebd9, 0xebee, 0xf607, 0xf5fb, 0xf5e1, 0xf5c3, 0xf5a9, 0xf59f, 0xf5a5, 0xf5b2, 0xf5c3, 0xf5d1, 0xf5d7, 0xf5d6, 0xf5d5, 0xf5d1, 
	0xf5cc, 0xf5c5, 0xf5bb, 0xf5b0, 0xf5a6, 0xf59f, 0xf59c, 0xf59d, 0xf5a1, 0xf5a5, 0xf5a9, 0xf5aa, 0xf5b4, 0xf5cc, 0xf5e8, 0xf5ff, 
	0xdd4d, 0xdd36, 0xdd04, 0xdcca, 0xdc9a, 0xdc86, 0xdc91, 0xdcab, 0xdcca, 0xdce5, 0xdcf0, 0xdcef, 0xdcec, 0xdce6, 0xdcdc, 0xdcce, 
	0xdcbb, 0xdca6, 0xdc93, 0xdc86, 0xdc80, 0xdc83, 0xdc8a, 0xdc92, 0xdc99, 0xdc9c, 0xdcae, 0xdcdb, 0xdd11, 0xdd3d, };

JointIndex gSkelskelWalkcombatAnimJointIndices[22] = {
	{ 0x0000, 0x001c, 0x0000, },
	{ 0x0001, 0x0002, 0x0003, },
	{ 0x003a, 0x0058, 0x0076, },
	{ 0x0094, 0x00b2, 0x00d0, },
	{ 0x00ee, 0x010c, 0x012a, },
	{ 0x0148, 0x0166, 0x0184, },
	{ 0x01a2, 0x01c0, 0x01de, },
	{ 0x01fc, 0x021a, 0x0238, },
	{ 0x0004, 0x0005, 0x0006, },
	{ 0x0007, 0x0008, 0x0009, },
	{ 0x000a, 0x000b, 0x000c, },
	{ 0x000d, 0x000e, 0x000f, },
	{ 0x0010, 0x0011, 0x0012, },
	{ 0x0256, 0x0274, 0x0292, },
	{ 0x02b0, 0x02ce, 0x02ec, },
	{ 0x0013, 0x0014, 0x0015, },
	{ 0x030a, 0x0328, 0x0346, },
	{ 0x0364, 0x0382, 0x03a0, },
	{ 0x0016, 0x0017, 0x0018, },
	{ 0x0019, 0x001a, 0x001b, },
	{ 0x0000, 0x0000, 0x0000, },
	{ 0x0003, 0x0000, 0x0003, },
};

AnimationHeader gSkelskelWalkcombatAnim = { { 30 }, gSkelskelWalkcombatAnimFrameData, gSkelskelWalkcombatAnimJointIndices, 28 };

