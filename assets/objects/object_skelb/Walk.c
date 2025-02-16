#include "ultra64.h"
#include "global.h"

s16 gSkelskelWalkAnimFrameData[958] = {
	0x0000, 0x06c3, 0x8000, 0xffff, 0xfd7b, 0x0028, 0x00b3, 0xe107, 0xff9a, 0xff19, 0xf514, 0x0361, 0x01cb, 0xd6c1, 0xfe97, 0xfb79, 
	0xdae4, 0xfd6c, 0x00b0, 0x0568, 0xdda3, 0x0967, 0xeb8b, 0x407d, 0xe00e, 0xeda1, 0xf19f, 0xca27, 0x0e51, 0x0e31, 0x0e11, 0x0df5, 
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
	0xae57, 0xa986, 0xa926, 0xab90, 0xaf61, 0xb4c5, 0xe2b9, 0xe3a8, 0xe566, 0xe804, 0xebaa, 0xf0ab, 0xf6e8, 0xfe76, 0x0a81, 0xa3bb, 
	0xc313, 0xd1bd, 0xd7df, 0xdaa4, 0xdba3, 0xdb6c, 0xda26, 0xd7d1, 0xd426, 0xce5a, 0xc430, 0xaf17, 0x0ce8, 0xf770, 0xedaf, 0xe900, 
	0xe654, 0xe46c, 0xe32d, 0xe297, 0x27ab, 0x2844, 0x29d2, 0x2c28, 0x2f0f, 0x3244, 0x356c, 0x3850, 0x3ad2, 0x43a5, 0x4479, 0x46e0, 
	0x4958, 0x4b7a, 0x4d12, 0x4dfc, 0x4e00, 0x4d24, 0x4b95, 0x497e, 0x4726, 0x450a, 0x3adf, 0x3834, 0x34bd, 0x3159, 0x2e47, 0x2b9a, 
	0x297d, 0x281e, 0x46e8, 0x474c, 0x487d, 0x4a9e, 0x4dee, 0x52d5, 0x597e, 0x6213, 0x6f6a, 0x09ec, 0x2a43, 0x39b4, 0x40a5, 0x441c, 
	0x4570, 0x44f5, 0x42e1, 0x3f7a, 0x3ab5, 0x33f4, 0x2915, 0x13be, 0x71a9, 0x5c79, 0x5318, 0x4e86, 0x4bb9, 0x49a9, 0x482c, 0x473c, 
	0xd0d2, 0xcfdc, 0xcef2, 0xce44, 0xce16, 0xcea4, 0xd082, 0xd3bd, 0xd79e, 0xdb7a, 0xdeb1, 0xe143, 0xe3a7, 0xe58b, 0xe67b, 0xe60a, 
	0xe452, 0xe1d2, 0xdefa, 0xdc27, 0xd99b, 0xd7df, 0xd6e6, 0xd652, 0xd5f3, 0xd52a, 0xd416, 0xd339, 0xd277, 0xd1b2, 0xee12, 0xed64, 
	0xecbd, 0xec40, 0xec1f, 0xec85, 0xedda, 0xf019, 0xf2ab, 0xf50e, 0xf6e3, 0xf83f, 0xf96a, 0xfa46, 0xfaae, 0xfa7e, 0xf9b9, 0xf887, 
	0xf70b, 0xf574, 0xf3ec, 0xf2d5, 0xf234, 0xf1d3, 0xf195, 0xf10f, 0xf055, 0xefbe, 0xef38, 0xeeaf, 0xe508, 0xe4b7, 0xe46c, 0xe438, 
	0xe42a, 0xe454, 0xe4ed, 0xe619, 0xe7b7, 0xe986, 0xeb2a, 0xec8c, 0xede3, 0xeefa, 0xef88, 0xef45, 0xee45, 0xecdb, 0xeb50, 0xe9dc, 
	0xe8a0, 0xe7d4, 0xe766, 0xe727, 0xe6fe, 0xe6ab, 0xe63c, 0xe5e6, 0xe59e, 0xe556, 0x107d, 0x10f7, 0x10f2, 0x1056, 0x0ef5, 0x0ca1, 
	0x08f3, 0x0414, 0xfe99, 0xf8c7, 0xf343, 0xee4b, 0xea01, 0xe72d, 0xe687, 0xe831, 0xeba2, 0xf04c, 0xf57d, 0xfa89, 0xfef2, 0x0222, 
	0x0414, 0x058b, 0x0710, 0x0902, 0x0b23, 0x0cea, 0x0e62, 0x0f95, 0x025d, 0x02fd, 0x0507, 0x081d, 0x0be3, 0x1003, 0x143f, 0x1844, 
	0x1be4, 0x1efe, 0x2187, 0x2383, 0x24e5, 0x25c7, 0x2642, 0x2656, 0x2600, 0x251b, 0x2387, 0x2144, 0x1e76, 0x1b5e, 0x1844, 0x1537, 
	0x1211, 0x0eb5, 0x0b3a, 0x07f2, 0x052b, 0x0337, 0x9b00, 0x9c26, 0x9de5, 0x9fa1, 0xa0d4, 0xa12b, 0xa036, 0x9e0b, 0x9b44, 0x9824, 
	0x9558, 0x9309, 0x9113, 0x8ff7, 0x9021, 0x919b, 0x9414, 0x971f, 0x9a2d, 0x9cb8, 0x9e6b, 0x9ecc, 0x9e0b, 0x9d0a, 0x9c42, 0x9bfb, 
	0x9be5, 0x9b7f, 0x9afb, 0x9ab1, 0xf21e, 0xf100, 0xef56, 0xed9e, 0xec2c, 0xeb22, 0xeaaf, 0xeab2, 0xeadd, 0xeb14, 0xeb16, 0xeaf4, 
	0xeae5, 0xeacb, 0xea88, 0xea18, 0xe98c, 0xe903, 0xe89d, 0xe873, 0xe89b, 0xe950, 0xeab2, 0xec71, 0xee2e, 0xef7f, 0xf06d, 0xf156, 
	0xf217, 0xf26f, 0xfb36, 0xfa7a, 0xf93b, 0xf7ba, 0xf643, 0xf513, 0xf485, 0xf489, 0xf4be, 0xf503, 0xf504, 0xf4db, 0xf4c9, 0xf4a9, 
	0xf454, 0xf3c0, 0xf2fe, 0xf233, 0xf192, 0xf14e, 0xf18e, 0xf2a7, 0xf489, 0xf68d, 0xf83f, 0xf95c, 0xfa11, 0xfab4, 0xfb32, 0xfb68, 
	0xe920, 0xe720, 0xe40c, 0xe0b7, 0xddc0, 0xdb80, 0xda7e, 0xda85, 0xdae6, 0xdb63, 0xdb66, 0xdb1a, 0xdafa, 0xdabf, 0xda26, 0xd91f, 
	0xd7ce, 0xd676, 0xd56b, 0xd4fb, 0xd565, 0xd739, 0xda85, 0xde51, 0xe1d3, 0xe459, 0xe614, 0xe7bb, 0xe914, 0xe9b1, };

JointIndex gSkelskelWalkAnimJointIndices[22] = {
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

AnimationHeader gSkelskelWalkAnim = { { 30 }, gSkelskelWalkAnimFrameData, gSkelskelWalkAnimJointIndices, 28 };

