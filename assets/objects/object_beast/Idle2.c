#include "ultra64.h"
#include "global.h"

s16 gBeastSkelIdle2AnimFrameData[1167] = {
	0x0001, 0x0005, 0xffd2, 0xfed2, 0x7f54, 0xff8c, 0xcce7, 0xff4f, 0xff0c, 0x1e7f, 0x02bf, 0x01ee, 0xe40b, 0x04a2, 0xffc6, 0x1e8a, 
	0x034f, 0x02f1, 0xe557, 0xfe0e, 0xf858, 0x319a, 0x0028, 0xfff0, 0x694b, 0xf51f, 0xf11b, 0xdfd1, 0xfeaa, 0xea24, 0x18ea, 0x0091, 
	0x0231, 0x3028, 0xfe44, 0x00d0, 0x68a5, 0x0e3a, 0x0cd5, 0xe154, 0x075c, 0x1352, 0x1900, 0xfd9e, 0xff43, 0x3047, 0xfe45, 0xfcec, 
	0x390d, 0xffcf, 0xfd62, 0xb9b1, 0xb9a1, 0xb971, 0xb926, 0xb8c3, 0xb84b, 0xb7c2, 0xb72a, 0xb689, 0xb5e0, 0xb535, 0xb489, 0xb3e0, 
	0xb33f, 0xb2a8, 0xb21e, 0xb1a6, 0xb143, 0xb0f8, 0xb0c8, 0xb0b8, 0xb0b8, 0xb0b8, 0xb0b8, 0xb0b8, 0xb0b8, 0xb0b8, 0xb0b8, 0xb0b8, 
	0xb0b8, 0xb0b8, 0xb0b8, 0xb0b8, 0xb0b8, 0xb0b8, 0xb0b8, 0xb0b8, 0xb0b8, 0xb0b8, 0xb0b8, 0xb0b8, 0xb0b8, 0xb0c8, 0xb0f8, 0xb143, 
	0xb1a6, 0xb21e, 0xb2a8, 0xb33f, 0xb3e0, 0xb489, 0xb535, 0xb5e0, 0xb689, 0xb72a, 0xb7c2, 0xb84b, 0xb8c3, 0xb926, 0xb971, 0xb9a1, 
	0xb9b1, 0xffff, 0x0000, 0x0001, 0x0001, 0x0003, 0x0004, 0x0005, 0x0007, 0x0009, 0x000b, 0x000d, 0x000f, 0x0011, 0x0014, 0x0016, 
	0x0017, 0x0019, 0x001a, 0x001b, 0x001c, 0x001c, 0x001c, 0x001c, 0x001c, 0x001c, 0x001c, 0x001c, 0x001c, 0x001c, 0x001c, 0x001c, 
	0x001c, 0x001c, 0x001c, 0x001c, 0x001c, 0x001c, 0x001c, 0x001c, 0x001c, 0x001c, 0x001c, 0x001c, 0x001b, 0x001a, 0x0019, 0x0017, 
	0x0016, 0x0014, 0x0011, 0x000f, 0x000d, 0x000b, 0x0009, 0x0007, 0x0005, 0x0004, 0x0003, 0x0001, 0x0001, 0x0000, 0xffff, 0x0000, 
	0x0000, 0x0001, 0x0002, 0x0004, 0x0006, 0x0008, 0x000b, 0x000d, 0x0010, 0x0013, 0x0015, 0x0018, 0x001a, 0x001c, 0x001e, 0x0020, 
	0x0022, 0x0023, 0x0023, 0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 
	0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 0x0023, 0x0023, 0x0022, 0x0020, 0x001e, 0x001c, 0x001a, 
	0x0018, 0x0015, 0x0013, 0x0010, 0x000d, 0x000b, 0x0008, 0x0006, 0x0004, 0x0002, 0x0001, 0x0000, 0x0000, 0x14d2, 0x14a4, 0x141f, 
	0x134d, 0x1238, 0x10e7, 0x0f64, 0x0dba, 0x0bf0, 0x0a13, 0x082a, 0x0642, 0x0465, 0x029b, 0x00f1, 0xff6d, 0xfe1d, 0xfd07, 0xfc35, 
	0xfbb1, 0xfb83, 0xff35, 0x0780, 0x0fde, 0x13a6, 0x1123, 0x0b1a, 0x03e9, 0xfdf7, 0xfb83, 0xff35, 0x0780, 0x0fde, 0x13a6, 0x0fde, 
	0x0780, 0xff35, 0xfb83, 0xfba3, 0xfc00, 0xfc95, 0xfd5c, 0xfe51, 0xff6d, 0x00ad, 0x0209, 0x037d, 0x0502, 0x0693, 0x082a, 0x09c2, 
	0x0b53, 0x0cd8, 0x0e4c, 0x0fa8, 0x10e7, 0x1203, 0x12f8, 0x13bf, 0x1454, 0x14b1, 0x14d2, 0x00df, 0x00df, 0x00de, 0x00dd, 0x00db, 
	0x00d9, 0x00d6, 0x00d2, 0x00ce, 0x00ca, 0x00c5, 0x00c0, 0x00bb, 0x00b6, 0x00b1, 0x00ac, 0x00a8, 0x00a4, 0x00a2, 0x00a0, 0x00a0, 
	0x00ab, 0x00c3, 0x00d7, 0x00de, 0x00d9, 0x00cc, 0x00b9, 0x00a7, 0x00a0, 0x00ab, 0x00c3, 0x00d7, 0x00de, 0x00d7, 0x00c3, 0x00ab, 
	0x00a0, 0x00a0, 0x00a1, 0x00a3, 0x00a6, 0x00a9, 0x00ac, 0x00b0, 0x00b4, 0x00b8, 0x00bd, 0x00c1, 0x00c5, 0x00c9, 0x00cd, 0x00d0, 
	0x00d3, 0x00d6, 0x00d9, 0x00db, 0x00dc, 0x00de, 0x00df, 0x00df, 0x00df, 0x007d, 0x007d, 0x007b, 0x0078, 0x0074, 0x0070, 0x006b, 
	0x0066, 0x0060, 0x005b, 0x0055, 0x0050, 0x004b, 0x0046, 0x0042, 0x003f, 0x003c, 0x003a, 0x0038, 0x0037, 0x0037, 0x003e, 0x0053, 
	0x006d, 0x0079, 0x0071, 0x005e, 0x004a, 0x003c, 0x0037, 0x003e, 0x0053, 0x006d, 0x0079, 0x006d, 0x0053, 0x003e, 0x0037, 0x0037, 
	0x0038, 0x0039, 0x003a, 0x003c, 0x003f, 0x0042, 0x0045, 0x0049, 0x004c, 0x0051, 0x0055, 0x005a, 0x005e, 0x0063, 0x0067, 0x006c, 
	0x0070, 0x0074, 0x0077, 0x007a, 0x007c, 0x007d, 0x007d, 0xddd9, 0xdde9, 0xde17, 0xde60, 0xdec4, 0xdf3f, 0xdfd1, 0xe076, 0xe12c, 
	0xe1ef, 0xe2bc, 0xe38e, 0xe462, 0xe531, 0xe5f7, 0xe6ae, 0xe750, 0xe7d8, 0xe840, 0xe883, 0xe89a, 0xe89a, 0xe89a, 0xe89a, 0xe89a, 
	0xe89a, 0xe89a, 0xe89a, 0xe89a, 0xe89a, 0xe89a, 0xe89a, 0xe89a, 0xe89a, 0xe89a, 0xe89a, 0xe89a, 0xe89a, 0xe89a, 0xe89a, 0xe89a, 
	0xe89a, 0xe883, 0xe840, 0xe7d8, 0xe750, 0xe6ae, 0xe5f7, 0xe531, 0xe462, 0xe38e, 0xe2bc, 0xe1ef, 0xe12c, 0xe076, 0xdfd1, 0xdf3f, 
	0xdec4, 0xde60, 0xde17, 0xdde9, 0xddd9, 0x05c5, 0x05c8, 0x05ce, 0x05d8, 0x05e5, 0x05f4, 0x0605, 0x0618, 0x062b, 0x063f, 0x0652, 
	0x0664, 0x0676, 0x0686, 0x0695, 0x06a2, 0x06ad, 0x06b6, 0x06bd, 0x06c1, 0x06c2, 0x06c2, 0x06c2, 0x06c2, 0x06c2, 0x06c2, 0x06c2, 
	0x06c2, 0x06c2, 0x06c2, 0x06c2, 0x06c2, 0x06c2, 0x06c2, 0x06c2, 0x06c2, 0x06c2, 0x06c2, 0x06c2, 0x06c2, 0x06c2, 0x06c2, 0x06c1, 
	0x06bd, 0x06b6, 0x06ad, 0x06a2, 0x0695, 0x0686, 0x0676, 0x0664, 0x0652, 0x063f, 0x062b, 0x0618, 0x0605, 0x05f4, 0x05e5, 0x05d8, 
	0x05ce, 0x05c8, 0x05c5, 0xfd2f, 0xfd32, 0xfd3b, 0xfd49, 0xfd5b, 0xfd71, 0xfd8b, 0xfda8, 0xfdc7, 0xfde8, 0xfe0b, 0xfe2d, 0xfe50, 
	0xfe71, 0xfe91, 0xfeae, 0xfec7, 0xfedc, 0xfeed, 0xfef7, 0xfefa, 0xfefa, 0xfefa, 0xfefa, 0xfefa, 0xfefa, 0xfefa, 0xfefa, 0xfefa, 
	0xfefa, 0xfefa, 0xfefa, 0xfefa, 0xfefa, 0xfefa, 0xfefa, 0xfefa, 0xfefa, 0xfefa, 0xfefa, 0xfefa, 0xfefa, 0xfef7, 0xfeed, 0xfedc, 
	0xfec7, 0xfeae, 0xfe91, 0xfe71, 0xfe50, 0xfe2d, 0xfe0b, 0xfde8, 0xfdc7, 0xfda8, 0xfd8b, 0xfd71, 0xfd5b, 0xfd49, 0xfd3b, 0xfd32, 
	0xfd2f, 0x14cf, 0x14e0, 0x150d, 0x1553, 0x15aa, 0x160d, 0x1676, 0x16df, 0x1745, 0x17a3, 0x17f7, 0x1840, 0x187d, 0x18ae, 0x18d2, 
	0x18ed, 0x18fe, 0x1909, 0x190f, 0x1912, 0x1913, 0x1913, 0x1913, 0x1913, 0x1913, 0x1913, 0x1913, 0x1913, 0x1913, 0x1913, 0x1913, 
	0x1913, 0x1913, 0x1913, 0x1913, 0x1913, 0x1913, 0x1913, 0x1913, 0x1913, 0x1913, 0x1913, 0x1912, 0x190f, 0x1909, 0x18fe, 0x18ed, 
	0x18d2, 0x18ae, 0x187d, 0x1840, 0x17f7, 0x17a3, 0x1745, 0x16df, 0x1676, 0x160d, 0x15aa, 0x1553, 0x150d, 0x14e0, 0x14cf, 0xff62, 
	0xff62, 0xff63, 0xff64, 0xff65, 0xff67, 0xff68, 0xff6a, 0xff6c, 0xff6d, 0xff6e, 0xff70, 0xff71, 0xff72, 0xff72, 0xff73, 0xff73, 
	0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 
	0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff73, 0xff72, 0xff72, 
	0xff71, 0xff70, 0xff6e, 0xff6d, 0xff6c, 0xff6a, 0xff68, 0xff67, 0xff65, 0xff64, 0xff63, 0xff62, 0xff62, 0xff65, 0xff65, 0xff64, 
	0xff62, 0xff5f, 0xff5d, 0xff5a, 0xff57, 0xff55, 0xff52, 0xff50, 0xff4f, 0xff4d, 0xff4c, 0xff4b, 0xff4a, 0xff4a, 0xff4a, 0xff49, 
	0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 
	0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff4a, 0xff4a, 0xff4a, 0xff4b, 0xff4c, 0xff4d, 0xff4f, 
	0xff50, 0xff52, 0xff55, 0xff57, 0xff5a, 0xff5d, 0xff5f, 0xff62, 0xff64, 0xff65, 0xff65, 0xde1d, 0xde2c, 0xde59, 0xdea2, 0xdf04, 
	0xdf7e, 0xe00d, 0xe0af, 0xe161, 0xe220, 0xe2e8, 0xe3b6, 0xe484, 0xe54f, 0xe610, 0xe6c2, 0xe760, 0xe7e5, 0xe84a, 0xe88b, 0xe8a1, 
	0xe8a1, 0xe8a1, 0xe8a1, 0xe8a1, 0xe8a1, 0xe8a1, 0xe8a1, 0xe8a1, 0xe8a1, 0xe8a1, 0xe8a1, 0xe8a1, 0xe8a1, 0xe8a1, 0xe8a1, 0xe8a1, 
	0xe8a1, 0xe8a1, 0xe8a1, 0xe8a1, 0xe8a1, 0xe88b, 0xe84a, 0xe7e5, 0xe760, 0xe6c2, 0xe610, 0xe54f, 0xe484, 0xe3b6, 0xe2e8, 0xe220, 
	0xe161, 0xe0af, 0xe00d, 0xdf7e, 0xdf04, 0xdea2, 0xde59, 0xde2c, 0xde1d, 0xfe86, 0xfe85, 0xfe85, 0xfe84, 0xfe83, 0xfe82, 0xfe81, 
	0xfe80, 0xfe7e, 0xfe7d, 0xfe7c, 0xfe7a, 0xfe79, 0xfe78, 0xfe76, 0xfe75, 0xfe74, 0xfe73, 0xfe73, 0xfe72, 0xfe72, 0xfe72, 0xfe72, 
	0xfe72, 0xfe72, 0xfe72, 0xfe72, 0xfe72, 0xfe72, 0xfe72, 0xfe72, 0xfe72, 0xfe72, 0xfe72, 0xfe72, 0xfe72, 0xfe72, 0xfe72, 0xfe72, 
	0xfe72, 0xfe72, 0xfe72, 0xfe72, 0xfe73, 0xfe73, 0xfe74, 0xfe75, 0xfe76, 0xfe78, 0xfe79, 0xfe7a, 0xfe7c, 0xfe7d, 0xfe7e, 0xfe80, 
	0xfe81, 0xfe82, 0xfe83, 0xfe84, 0xfe85, 0xfe85, 0xfe86, 0xffac, 0xffab, 0xffa9, 0xffa6, 0xffa2, 0xff9d, 0xff98, 0xff91, 0xff8a, 
	0xff83, 0xff7c, 0xff74, 0xff6d, 0xff66, 0xff5f, 0xff59, 0xff53, 0xff4f, 0xff4c, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 
	0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 0xff49, 
	0xff49, 0xff49, 0xff4c, 0xff4f, 0xff53, 0xff59, 0xff5f, 0xff66, 0xff6d, 0xff74, 0xff7c, 0xff83, 0xff8a, 0xff91, 0xff98, 0xff9d, 
	0xffa2, 0xffa6, 0xffa9, 0xffab, 0xffac, 0x14ca, 0x14d9, 0x1506, 0x154a, 0x15a0, 0x1602, 0x1669, 0x16d1, 0x1735, 0x1793, 0x17e7, 
	0x1831, 0x186e, 0x18a0, 0x18c6, 0x18e2, 0x18f5, 0x1901, 0x1908, 0x190c, 0x190d, 0x190d, 0x190d, 0x190d, 0x190d, 0x190d, 0x190d, 
	0x190d, 0x190d, 0x190d, 0x190d, 0x190d, 0x190d, 0x190d, 0x190d, 0x190d, 0x190d, 0x190d, 0x190d, 0x190d, 0x190d, 0x190d, 0x190c, 
	0x1908, 0x1901, 0x18f5, 0x18e2, 0x18c6, 0x18a0, 0x186e, 0x1831, 0x17e7, 0x1793, 0x1735, 0x16d1, 0x1669, 0x1602, 0x15a0, 0x154a, 
	0x1506, 0x14d9, 0x14ca, 0xffee, 0xffee, 0xffed, 0xffed, 0xffec, 0xffec, 0xffeb, 0xffeb, 0xffea, 0xffea, 0xffe9, 0xffe9, 0xffe8, 
	0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 
	0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 
	0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe8, 0xffe9, 0xffe9, 0xffea, 0xffea, 0xffeb, 0xffeb, 0xffec, 0xffec, 0xffed, 0xffed, 0xffee, 
	0xffee, 0x0035, 0x0035, 0x0036, 0x0036, 0x0037, 0x0038, 0x0039, 0x003a, 0x003b, 0x003b, 0x003c, 0x003d, 0x003d, 0x003e, 0x003e, 
	0x003e, 0x003e, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 
	0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003f, 0x003e, 0x003e, 
	0x003e, 0x003e, 0x003d, 0x003d, 0x003c, 0x003b, 0x003b, 0x003a, 0x0039, 0x0038, 0x0037, 0x0036, 0x0036, 0x0035, 0x0035, };

JointIndex gBeastSkelIdle2AnimJointIndices[23] = {
	{ 0x0000, 0x0001, 0x0002, },
	{ 0x0003, 0x0004, 0x0005, },
	{ 0x0033, 0x0071, 0x00af, },
	{ 0x00ed, 0x012b, 0x0169, },
	{ 0x0006, 0x0007, 0x0008, },
	{ 0x01a7, 0x01e5, 0x0223, },
	{ 0x0261, 0x029f, 0x02dd, },
	{ 0x0009, 0x000a, 0x000b, },
	{ 0x000c, 0x000d, 0x000e, },
	{ 0x031b, 0x0359, 0x0397, },
	{ 0x03d5, 0x0413, 0x0451, },
	{ 0x000f, 0x0010, 0x0011, },
	{ 0x0012, 0x0013, 0x0014, },
	{ 0x0015, 0x0016, 0x0017, },
	{ 0x0018, 0x0019, 0x001a, },
	{ 0x001b, 0x001c, 0x001d, },
	{ 0x001e, 0x001f, 0x0020, },
	{ 0x0021, 0x0022, 0x0023, },
	{ 0x0024, 0x0025, 0x0026, },
	{ 0x0027, 0x0028, 0x0029, },
	{ 0x002a, 0x002b, 0x002c, },
	{ 0x002d, 0x002e, 0x002f, },
	{ 0x0030, 0x0031, 0x0032, },
};

AnimationHeader gBeastSkelIdle2Anim = { { 62 }, gBeastSkelIdle2AnimFrameData, gBeastSkelIdle2AnimJointIndices, 51 };

