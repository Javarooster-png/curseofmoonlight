#include "ultra64.h"
#include "global.h"

s16 gBeastSkelIdleAnimFrameData[749] = {
	0x0001, 0x0005, 0xffd2, 0xfed2, 0x7f54, 0xff8c, 0x14d2, 0x00df, 0x007d, 0x1e7f, 0x02bf, 0x01ee, 0xe40b, 0x04a2, 0xffc6, 0xffee, 
	0x1e8a, 0x034f, 0x02f1, 0xe557, 0xfe0e, 0xf858, 0x319a, 0x0028, 0xfff0, 0x694b, 0xf51f, 0xf11b, 0xdfd1, 0xfeaa, 0xea24, 0x18ea, 
	0x0091, 0x0231, 0x3028, 0xfe44, 0x00d0, 0x68a5, 0x0e3a, 0x0cd5, 0xe154, 0x075c, 0x1352, 0x1900, 0xfd9e, 0xff43, 0x3047, 0xfe45, 
	0xfcec, 0x390d, 0xffcf, 0xfd62, 0xb9b1, 0xb9aa, 0xb994, 0xb972, 0xb944, 0xb90d, 0xb8ce, 0xb889, 0xb83f, 0xb7f2, 0xb7a3, 0xb754, 
	0xb707, 0xb6bd, 0xb678, 0xb639, 0xb601, 0xb5d4, 0xb5b1, 0xb59b, 0xb594, 0xb59b, 0xb5b1, 0xb5d4, 0xb601, 0xb639, 0xb678, 0xb6bd, 
	0xb707, 0xb754, 0xb7a3, 0xb7f2, 0xb83f, 0xb889, 0xb8ce, 0xb90d, 0xb944, 0xb972, 0xb994, 0xb9aa, 0xb9b1, 0xffff, 0xfffc, 0xfff3, 
	0xffe6, 0xffd4, 0xffbe, 0xffa6, 0xff8b, 0xff6e, 0xff50, 0xff31, 0xff13, 0xfef5, 0xfed8, 0xfebe, 0xfea6, 0xfe90, 0xfe7f, 0xfe72, 
	0xfe6a, 0xfe67, 0xfe6a, 0xfe72, 0xfe7f, 0xfe90, 0xfea6, 0xfebe, 0xfed8, 0xfef5, 0xff13, 0xff31, 0xff50, 0xff6e, 0xff8b, 0xffa6, 
	0xffbe, 0xffd4, 0xffe6, 0xfff3, 0xfffc, 0xffff, 0x0000, 0x0001, 0x0003, 0x0007, 0x000c, 0x0012, 0x0019, 0x0021, 0x0029, 0x0033, 
	0x003c, 0x0046, 0x0050, 0x005a, 0x0063, 0x006c, 0x0073, 0x007a, 0x007f, 0x0082, 0x0083, 0x0082, 0x007f, 0x007a, 0x0073, 0x006c, 
	0x0063, 0x005a, 0x0050, 0x0046, 0x003c, 0x0033, 0x0029, 0x0021, 0x0019, 0x0012, 0x000c, 0x0007, 0x0003, 0x0001, 0x0000, 0xcce7, 
	0xccc2, 0xcc59, 0xcbb3, 0xcad7, 0xc9cc, 0xc89b, 0xc74a, 0xc5e1, 0xc468, 0xc2e7, 0xc166, 0xbfed, 0xbe84, 0xbd33, 0xbc01, 0xbaf6, 
	0xba19, 0xb973, 0xb909, 0xb8e4, 0xb909, 0xb973, 0xba19, 0xbaf6, 0xbc01, 0xbd33, 0xbe84, 0xbfed, 0xc166, 0xc2e7, 0xc468, 0xc5e1, 
	0xc74a, 0xc89b, 0xc9cc, 0xcad7, 0xcbb3, 0xcc59, 0xccc2, 0xcce7, 0xff4f, 0xff4c, 0xff44, 0xff39, 0xff29, 0xff17, 0xff02, 0xfeeb, 
	0xfed3, 0xfeba, 0xfea2, 0xfe8a, 0xfe74, 0xfe5f, 0xfe4c, 0xfe3b, 0xfe2d, 0xfe21, 0xfe19, 0xfe14, 0xfe12, 0xfe14, 0xfe19, 0xfe21, 
	0xfe2d, 0xfe3b, 0xfe4c, 0xfe5f, 0xfe74, 0xfe8a, 0xfea2, 0xfeba, 0xfed3, 0xfeeb, 0xff02, 0xff17, 0xff29, 0xff39, 0xff44, 0xff4c, 
	0xff4f, 0xff0c, 0xff0d, 0xff10, 0xff15, 0xff1c, 0xff25, 0xff2f, 0xff3c, 0xff4a, 0xff5a, 0xff6b, 0xff7d, 0xff8f, 0xffa2, 0xffb3, 
	0xffc4, 0xffd3, 0xffe0, 0xffe9, 0xfff0, 0xfff2, 0xfff0, 0xffe9, 0xffe0, 0xffd3, 0xffc4, 0xffb3, 0xffa2, 0xff8f, 0xff7d, 0xff6b, 
	0xff5a, 0xff4a, 0xff3c, 0xff2f, 0xff25, 0xff1c, 0xff15, 0xff10, 0xff0d, 0xff0c, 0xddd9, 0xdddc, 0xdde6, 0xddf6, 0xde0c, 0xde28, 
	0xde4a, 0xde70, 0xde9b, 0xdecb, 0xdefd, 0xdf31, 0xdf66, 0xdf9a, 0xdfcc, 0xdffb, 0xe025, 0xe049, 0xe064, 0xe075, 0xe07b, 0xe075, 
	0xe064, 0xe049, 0xe025, 0xdffb, 0xdfcc, 0xdf9a, 0xdf66, 0xdf31, 0xdefd, 0xdecb, 0xde9b, 0xde70, 0xde4a, 0xde28, 0xde0c, 0xddf6, 
	0xdde6, 0xdddc, 0xddd9, 0x05c5, 0x05cb, 0x05da, 0x05f2, 0x0612, 0x0639, 0x0666, 0x0698, 0x06cf, 0x0708, 0x0744, 0x0780, 0x07bc, 
	0x07f7, 0x082e, 0x0862, 0x088f, 0x08b5, 0x08d2, 0x08e4, 0x08eb, 0x08e4, 0x08d2, 0x08b5, 0x088f, 0x0862, 0x082e, 0x07f7, 0x07bc, 
	0x0780, 0x0744, 0x0708, 0x06cf, 0x0698, 0x0666, 0x0639, 0x0612, 0x05f2, 0x05da, 0x05cb, 0x05c5, 0xfd2f, 0xfd32, 0xfd3b, 0xfd49, 
	0xfd5b, 0xfd72, 0xfd8c, 0xfda9, 0xfdc9, 0xfdea, 0xfe0d, 0xfe30, 0xfe53, 0xfe75, 0xfe95, 0xfeb3, 0xfecd, 0xfee3, 0xfef4, 0xfeff, 
	0xff02, 0xfeff, 0xfef4, 0xfee3, 0xfecd, 0xfeb3, 0xfe95, 0xfe75, 0xfe53, 0xfe30, 0xfe0d, 0xfdea, 0xfdc9, 0xfda9, 0xfd8c, 0xfd72, 
	0xfd5b, 0xfd49, 0xfd3b, 0xfd32, 0xfd2f, 0x14cf, 0x14dd, 0x1505, 0x1544, 0x1594, 0x15f3, 0x165c, 0x16cd, 0x1741, 0x17b5, 0x1828, 
	0x1897, 0x1900, 0x1961, 0x19b9, 0x1a07, 0x1a49, 0x1a7f, 0x1aa7, 0x1ac0, 0x1ac9, 0x1ac0, 0x1aa7, 0x1a7f, 0x1a49, 0x1a07, 0x19b9, 
	0x1961, 0x1900, 0x1897, 0x1828, 0x17b5, 0x1741, 0x16cd, 0x165c, 0x15f3, 0x1594, 0x1544, 0x1505, 0x14dd, 0x14cf, 0xff62, 0xff62, 
	0xff63, 0xff63, 0xff65, 0xff66, 0xff68, 0xff6a, 0xff6b, 0xff6d, 0xff6f, 0xff71, 0xff73, 0xff75, 0xff76, 0xff78, 0xff79, 0xff7a, 
	0xff7b, 0xff7b, 0xff7b, 0xff7b, 0xff7b, 0xff7a, 0xff79, 0xff78, 0xff76, 0xff75, 0xff73, 0xff71, 0xff6f, 0xff6d, 0xff6b, 0xff6a, 
	0xff68, 0xff66, 0xff65, 0xff63, 0xff63, 0xff62, 0xff62, 0xff65, 0xff65, 0xff64, 0xff62, 0xff60, 0xff5e, 0xff5b, 0xff58, 0xff55, 
	0xff52, 0xff4f, 0xff4c, 0xff4a, 0xff47, 0xff45, 0xff43, 0xff42, 0xff40, 0xff3f, 0xff3f, 0xff3f, 0xff3f, 0xff3f, 0xff40, 0xff42, 
	0xff43, 0xff45, 0xff47, 0xff4a, 0xff4c, 0xff4f, 0xff52, 0xff55, 0xff58, 0xff5b, 0xff5e, 0xff60, 0xff62, 0xff64, 0xff65, 0xff65, 
	0xde1d, 0xde27, 0xde47, 0xde78, 0xdeba, 0xdf0b, 0xdf67, 0xdfce, 0xe03d, 0xe0b2, 0xe12b, 0xe1a5, 0xe21e, 0xe293, 0xe302, 0xe368, 
	0xe3c2, 0xe40c, 0xe445, 0xe469, 0xe476, 0xe469, 0xe445, 0xe40c, 0xe3c2, 0xe368, 0xe302, 0xe293, 0xe21e, 0xe1a5, 0xe12b, 0xe0b2, 
	0xe03d, 0xdfce, 0xdf67, 0xdf0b, 0xdeba, 0xde78, 0xde47, 0xde27, 0xde1d, 0xfe86, 0xfe8a, 0xfe96, 0xfea9, 0xfec3, 0xfee3, 0xff08, 
	0xff30, 0xff5d, 0xff8c, 0xffbd, 0xffef, 0x0022, 0x0052, 0x0080, 0x00ab, 0x00d1, 0x00f1, 0x0109, 0x0118, 0x011e, 0x0118, 0x0109, 
	0x00f1, 0x00d1, 0x00ab, 0x0080, 0x0052, 0x0022, 0xffef, 0xffbd, 0xff8c, 0xff5d, 0xff30, 0xff08, 0xfee3, 0xfec3, 0xfea9, 0xfe96, 
	0xfe8a, 0xfe86, 0xffac, 0xffad, 0xffb2, 0xffb9, 0xffc2, 0xffcd, 0xffda, 0xffe9, 0xfff9, 0x000b, 0x001d, 0x002f, 0x0042, 0x0054, 
	0x0066, 0x0076, 0x0084, 0x0091, 0x009a, 0x00a0, 0x00a2, 0x00a0, 0x009a, 0x0091, 0x0084, 0x0076, 0x0066, 0x0054, 0x0042, 0x002f, 
	0x001d, 0x000b, 0xfff9, 0xffe9, 0xffda, 0xffcd, 0xffc2, 0xffb9, 0xffb2, 0xffad, 0xffac, 0x14ca, 0x14ca, 0x14ca, 0x14cb, 0x14ca, 
	0x14c8, 0x14c4, 0x14bd, 0x14b3, 0x14a5, 0x1493, 0x147e, 0x1466, 0x144c, 0x1431, 0x1416, 0x13fd, 0x13e6, 0x13d4, 0x13c9, 0x13c5, 
	0x13c9, 0x13d4, 0x13e6, 0x13fd, 0x1416, 0x1431, 0x144c, 0x1466, 0x147e, 0x1493, 0x14a5, 0x14b3, 0x14bd, 0x14c4, 0x14c8, 0x14ca, 
	0x14cb, 0x14ca, 0x14ca, 0x14ca, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0034, 
	0x0034, 0x0034, 0x0034, 0x0033, 0x0033, 0x0033, 0x0033, 0x0033, 0x0033, 0x0033, 0x0033, 0x0033, 0x0033, 0x0033, 0x0034, 0x0034, 
	0x0034, 0x0034, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, };

JointIndex gBeastSkelIdleAnimJointIndices[23] = {
	{ 0x0000, 0x0001, 0x0002, },
	{ 0x0003, 0x0004, 0x0005, },
	{ 0x0034, 0x005d, 0x0086, },
	{ 0x0006, 0x0007, 0x0008, },
	{ 0x00af, 0x00d8, 0x0101, },
	{ 0x012a, 0x0153, 0x017c, },
	{ 0x01a5, 0x01ce, 0x01f7, },
	{ 0x0009, 0x000a, 0x000b, },
	{ 0x000c, 0x000d, 0x000e, },
	{ 0x0220, 0x0249, 0x0272, },
	{ 0x029b, 0x000f, 0x02c4, },
	{ 0x0010, 0x0011, 0x0012, },
	{ 0x0013, 0x0014, 0x0015, },
	{ 0x0016, 0x0017, 0x0018, },
	{ 0x0019, 0x001a, 0x001b, },
	{ 0x001c, 0x001d, 0x001e, },
	{ 0x001f, 0x0020, 0x0021, },
	{ 0x0022, 0x0023, 0x0024, },
	{ 0x0025, 0x0026, 0x0027, },
	{ 0x0028, 0x0029, 0x002a, },
	{ 0x002b, 0x002c, 0x002d, },
	{ 0x002e, 0x002f, 0x0030, },
	{ 0x0031, 0x0032, 0x0033, },
};

AnimationHeader gBeastSkelIdleAnim = { { 41 }, gBeastSkelIdleAnimFrameData, gBeastSkelIdleAnimJointIndices, 52 };
