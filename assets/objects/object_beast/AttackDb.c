#include "ultra64.h"
#include "global.h"

s16 gBeastSkelAttackdbAnimFrameData[2607] = {
	0xfed1, 0x7f54, 0xff8c, 0xe40a, 0x04a2, 0xffc5, 0xe556, 0xfe0d, 0xf856, 0x18ea, 0x0091, 0x0231, 0x1900, 0xfd9d, 0xff42, 0xfffa, 
	0xfffa, 0xfff9, 0xfff8, 0xfff7, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 
	0xfff6, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 0xfff6, 
	0xfff6, 0xfff6, 0xfff7, 0xfff8, 0xfff8, 0xfff9, 0xfffa, 0xfffb, 0xfffc, 0xfffd, 0xfffd, 0xfffe, 0xffff, 0xffff, 0xffff, 0x01d0, 
	0x0203, 0x0251, 0x02ab, 0x0300, 0x033f, 0x0358, 0x0358, 0x0358, 0x0358, 0x0358, 0x0358, 0x0358, 0x0358, 0x0358, 0x0358, 0x0358, 
	0x0358, 0x0358, 0x0358, 0x0358, 0x0358, 0x0358, 0x0358, 0x0358, 0x0358, 0x0358, 0x0358, 0x0358, 0x0358, 0x0358, 0x0358, 0x0358, 
	0x034d, 0x032e, 0x02ff, 0x02c2, 0x027b, 0x022c, 0x01d9, 0x0184, 0x0130, 0x00e1, 0x009a, 0x005d, 0x002e, 0x000f, 0x0005, 0x0020, 
	0x001f, 0x001d, 0x001a, 0x0018, 0x0016, 0x0015, 0x0015, 0x0015, 0x0015, 0x0015, 0x0015, 0x0015, 0x0015, 0x0015, 0x0015, 0x0015, 
	0x0015, 0x0015, 0x0015, 0x0015, 0x0015, 0x0015, 0x0015, 0x0015, 0x0015, 0x0015, 0x0015, 0x0015, 0x0015, 0x0015, 0x0015, 0x0015, 
	0x0015, 0x0016, 0x0018, 0x0019, 0x001b, 0x001e, 0x0020, 0x0023, 0x0025, 0x0027, 0x0029, 0x002b, 0x002c, 0x002d, 0x002e, 0xf373, 
	0xf1cc, 0xed73, 0xe758, 0xe071, 0xd9ae, 0xd3e3, 0xcf94, 0xcc7b, 0xca3f, 0xc8b7, 0xc7c2, 0xc73f, 0xc709, 0xc6ff, 0xc77b, 0xc8f9, 
	0xcb8c, 0xcf46, 0xd43e, 0xda8b, 0xe19a, 0xe52c, 0xe0af, 0xd681, 0xcc0f, 0xc6ff, 0xc666, 0xc5f2, 0xc5c3, 0xc614, 0xc6ac, 0xc6ff, 
	0xc6d2, 0xc654, 0xc591, 0xc497, 0xc373, 0xc232, 0xc0e1, 0xbf8c, 0xbe40, 0xbd09, 0xbbf2, 0xbb06, 0xba4f, 0xb9da, 0xb9b0, 0x01e5, 
	0x01a2, 0x00de, 0xffa7, 0xfe26, 0xfc9f, 0xfb60, 0xfa9d, 0xfa31, 0xf9e6, 0xf9b0, 0xf98c, 0xf974, 0xf968, 0xf964, 0xf975, 0xf9aa, 
	0xfa09, 0xfa9c, 0xfb72, 0xfc9a, 0xfdfb, 0xfeb4, 0xfdc3, 0xfbc5, 0xfa0c, 0xf964, 0xfbd3, 0x0064, 0x02d9, 0x0066, 0xfbd6, 0xf964, 
	0xf976, 0xf9ab, 0xf9fd, 0xfa6a, 0xfaed, 0xfb82, 0xfc25, 0xfccf, 0xfd7a, 0xfe20, 0xfeb8, 0xff3c, 0xffa3, 0xffe6, 0xffff, 0xfc38, 
	0xfbdd, 0xfb0a, 0xfa11, 0xf946, 0xf8dc, 0xf8e0, 0xf920, 0xf969, 0xf9b7, 0xfa03, 0xfa45, 0xfa7a, 0xfa9c, 0xfaa8, 0xfa97, 0xfa61, 
	0xfa03, 0xf981, 0xf8e3, 0xf838, 0xf7a3, 0xf76a, 0xf7a3, 0xf882, 0xf9df, 0xfaa8, 0xfab9, 0xfabb, 0xfab7, 0xfaba, 0xfab3, 0xfaa8, 
	0xfabd, 0xfaf7, 0xfb50, 0xfbc0, 0xfc40, 0xfcca, 0xfd56, 0xfddf, 0xfe60, 0xfed4, 0xff39, 0xff8c, 0xffc9, 0xfff0, 0xfffe, 0xff68, 
	0x00d3, 0x0461, 0x0915, 0x0de4, 0x11ab, 0x1334, 0x1334, 0x1334, 0x1334, 0x1334, 0x1334, 0x1334, 0x1334, 0x1334, 0x1334, 0x1334, 
	0x1334, 0x1334, 0x1334, 0x1334, 0x1334, 0x1334, 0x1334, 0x1334, 0x1334, 0x1334, 0x122a, 0x1098, 0x0ffe, 0x10b2, 0x123d, 0x1334, 
	0x1343, 0x136a, 0x139e, 0x13d8, 0x1410, 0x1445, 0x1471, 0x1495, 0x14b0, 0x14c1, 0x14cc, 0x14d1, 0x14d2, 0x14d2, 0x14d2, 0x0496, 
	0x0586, 0x07e7, 0x0b05, 0x0e1a, 0x1066, 0x114b, 0x114b, 0x114b, 0x114b, 0x114b, 0x114b, 0x114b, 0x114b, 0x114b, 0x114b, 0x114b, 
	0x114b, 0x114b, 0x114b, 0x114b, 0x114b, 0x114b, 0x114b, 0x114b, 0x114b, 0x114b, 0x121f, 0x1402, 0x1525, 0x146c, 0x12f6, 0x114b, 
	0x0f77, 0x0db9, 0x0c0f, 0x0a7c, 0x08ff, 0x079a, 0x064f, 0x0520, 0x0410, 0x0322, 0x0259, 0x01b8, 0x0142, 0x00f8, 0x00df, 0xf68e, 
	0xf66b, 0xf638, 0xf648, 0xf6ba, 0xf755, 0xf7a5, 0xf7a5, 0xf7a5, 0xf7a5, 0xf7a5, 0xf7a5, 0xf7a5, 0xf7a5, 0xf7a5, 0xf7a5, 0xf7a5, 
	0xf7a5, 0xf7a5, 0xf7a5, 0xf7a5, 0xf7a5, 0xf7a5, 0xf7a5, 0xf7a5, 0xf7a5, 0xf7a5, 0xfd75, 0x0880, 0x0e75, 0x08be, 0xfde7, 0xf7a5, 
	0xf6f6, 0xf6b9, 0xf6dc, 0xf74e, 0xf7fe, 0xf8df, 0xf9e3, 0xfafc, 0xfc1d, 0xfd37, 0xfe3e, 0xff24, 0xffd9, 0x0052, 0x007d, 0xb96b, 
	0xb5d9, 0xb216, 0xae85, 0xab87, 0xa979, 0xa8b5, 0xaa46, 0xae76, 0xb477, 0xbb68, 0xc254, 0xc848, 0xcc69, 0xcdf4, 0xcb5f, 0xc4c7, 
	0xbc00, 0xb31b, 0xac46, 0xa98e, 0xac46, 0xb31b, 0xbc00, 0xc4c7, 0xcb5f, 0xcdf4, 0xcdf4, 0xcdf4, 0xcdf4, 0xcdf4, 0xcdf4, 0xcdf4, 
	0xcdf1, 0xcde7, 0xcdd8, 0xcdc5, 0xcdae, 0xcd95, 0xcd7b, 0xcd60, 0xcd45, 0xcd2c, 0xcd15, 0xcd02, 0xccf3, 0xccea, 0xcce6, 0xfba1, 
	0xfb5b, 0xfaba, 0xf9ef, 0xf929, 0xf894, 0xf85a, 0xf89e, 0xf95b, 0xfa74, 0xfbc1, 0xfd0b, 0xfe1e, 0xfed5, 0xff17, 0xfe58, 0xfc4c, 
	0xf957, 0xf63e, 0xf3e6, 0xf300, 0xf3e6, 0xf63e, 0xf957, 0xfc4c, 0xfe58, 0xff17, 0xff17, 0xff17, 0xff17, 0xff17, 0xff17, 0xff17, 
	0xff18, 0xff19, 0xff1c, 0xff20, 0xff25, 0xff2a, 0xff2f, 0xff35, 0xff3a, 0xff3f, 0xff44, 0xff48, 0xff4b, 0xff4d, 0xff4e, 0xfdd3, 
	0xfdd0, 0xfdd5, 0xfdea, 0xfe0c, 0xfe2e, 0xfe3d, 0xfe20, 0xfddf, 0xfda5, 0xfd98, 0xfdc2, 0xfe14, 0xfe63, 0xfe86, 0xfe02, 0xfcea, 
	0xfbfd, 0xfbb8, 0xfbfb, 0xfc33, 0xfbfb, 0xfbb8, 0xfbfd, 0xfcea, 0xfe02, 0xfe86, 0xfe86, 0xfe86, 0xfe86, 0xfe86, 0xfe86, 0xfe86, 
	0xfe87, 0xfe8c, 0xfe93, 0xfe9d, 0xfea8, 0xfeb5, 0xfec2, 0xfecf, 0xfedc, 0xfee8, 0xfef3, 0xfefd, 0xff04, 0xff09, 0xff0b, 0xce45, 
	0xc0c5, 0xaa56, 0xaee9, 0xb0bf, 0xb1d7, 0xada8, 0xa9f0, 0xa59e, 0xa265, 0xa1f2, 0xa52e, 0xab9c, 0xb339, 0xb9e7, 0xbf09, 0xc148, 
	0xc05e, 0xbd3b, 0xb8a8, 0xb35b, 0xaea7, 0xacda, 0xae7e, 0xabf7, 0x1e41, 0x144a, 0x163a, 0x1ab2, 0x1d3d, 0x1b4d, 0x177a, 0x15eb, 
	0x175c, 0x194f, 0x1bb3, 0x1e7d, 0x21ac, 0xa553, 0xa99f, 0xaed6, 0xb559, 0xbd8d, 0xc758, 0xd136, 0xd89f, 0xdc9d, 0xddd8, 0x2a03, 
	0x2c16, 0x2a06, 0x1e52, 0x1124, 0x0e52, 0x178f, 0x1f68, 0x24fd, 0x28d4, 0x2b66, 0x2ce4, 0x2d23, 0x2bf7, 0x29a6, 0x2582, 0x1f66, 
	0x18dc, 0x1274, 0x0c60, 0x06d9, 0x0230, 0x0032, 0x044e, 0x1456, 0x59ef, 0x524d, 0x50f1, 0x4f63, 0x4ea4, 0x4f92, 0x5147, 0x5217, 
	0x522e, 0x52a9, 0x536e, 0x545e, 0x555e, 0x29a7, 0x28b9, 0x27c8, 0x269b, 0x24ad, 0x20f0, 0x1a1a, 0x10be, 0x08ca, 0x05c5, 0x02b2, 
	0xf93c, 0xe8a5, 0xf4de, 0xf9bc, 0xefe4, 0xdb93, 0xd4da, 0xcf16, 0xcb81, 0xcb5d, 0xcf4b, 0xd6a4, 0xdf4b, 0xe70b, 0xed92, 0xf1fb, 
	0xf410, 0xf4ec, 0xf55d, 0xf593, 0xf5c6, 0xf5e9, 0xed98, 0xd92d, 0x464c, 0x3ce9, 0x3a27, 0x35f3, 0x33e8, 0x3690, 0x3b73, 0x3eba, 
	0x4005, 0x4154, 0x42ab, 0x440e, 0x4590, 0xc755, 0xc99f, 0xcccd, 0xd16b, 0xd81d, 0xe131, 0xeba2, 0xf4f6, 0xfb12, 0xfd2e, 0x2764, 
	0x3114, 0x4096, 0x4add, 0x4b9b, 0x4711, 0x4672, 0x4963, 0x4b08, 0x4c01, 0x4c93, 0x4ce7, 0x4d15, 0x4d2a, 0x4d30, 0x4d0f, 0x4c99, 
	0x4b96, 0x49a3, 0x462e, 0x4076, 0x3856, 0x337b, 0x397f, 0x444e, 0x4b60, 0x4d30, 0x4bcc, 0x4855, 0x4612, 0x484f, 0x4bc0, 0x4d30, 
	0x4ce4, 0x4c01, 0x4a84, 0x4862, 0x4590, 0x420b, 0x3dd8, 0x3901, 0x3398, 0x2db8, 0x2787, 0x2143, 0x1b5d, 0x16b7, 0x14cf, 0xffc1, 
	0x0005, 0x007a, 0x00c8, 0x00ce, 0x00ac, 0x00a7, 0x00bd, 0x00ca, 0x00d1, 0x00d5, 0x00d7, 0x00d9, 0x00d9, 0x00da, 0x00d9, 0x00d5, 
	0x00ce, 0x00bf, 0x00a5, 0x0079, 0x003b, 0x0016, 0x0043, 0x0097, 0x00cc, 0x00da, 0x00cf, 0x00b5, 0x00a4, 0x00b5, 0x00cf, 0x00da, 
	0x00d7, 0x00d1, 0x00c6, 0x00b6, 0x00a0, 0x0085, 0x0065, 0x0040, 0x0017, 0xffeb, 0xffc1, 0xff9c, 0xff7d, 0xff68, 0xff61, 0xfefb, 
	0xfed8, 0xfec3, 0xfece, 0xfed0, 0xfec8, 0xfec7, 0xfecc, 0xfecf, 0xfed1, 0xfed2, 0xfed3, 0xfed3, 0xfed4, 0xfed4, 0xfed3, 0xfed2, 
	0xfed0, 0xfecc, 0xfec7, 0xfec3, 0xfec9, 0xfed2, 0xfec7, 0xfec5, 0xfecf, 0xfed4, 0xfed0, 0xfeca, 0xfec7, 0xfeca, 0xfed0, 0xfed4, 
	0xfed3, 0xfed1, 0xfece, 0xfeca, 0xfec6, 0xfec4, 0xfec4, 0xfec8, 0xfed2, 0xfee2, 0xfefa, 0xff19, 0xff3a, 0xff57, 0xff64, 0x1cc0, 
	0x1c7d, 0x1bba, 0x1a71, 0x18bb, 0x1708, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 
	0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 
	0x168b, 0x1759, 0x1874, 0x19a8, 0x1ad0, 0x1bd5, 0x1cac, 0x1d53, 0x1dce, 0x1e21, 0x1e54, 0x1e6f, 0x1e7b, 0x1e7e, 0x1e7f, 0xec84, 
	0xeb18, 0xe790, 0xe30e, 0xdead, 0xdb6f, 0xda2d, 0xda2d, 0xda2d, 0xda2d, 0xda2d, 0xda2d, 0xda2d, 0xda2d, 0xda2d, 0xda2d, 0xda2d, 
	0xda2d, 0xda2d, 0xda2d, 0xda2d, 0xda2d, 0xda2d, 0xda2d, 0xda2d, 0xda2d, 0xda2d, 0xda2d, 0xda2d, 0xda2d, 0xda2d, 0xda2d, 0xda2d, 
	0xdaa4, 0xdbfa, 0xde15, 0xe0de, 0xe438, 0xe802, 0xec14, 0xf041, 0xf45c, 0xf839, 0xfbae, 0xfe96, 0x00d2, 0x023f, 0x02bf, 0x0822, 
	0x089f, 0x09f1, 0x0be8, 0x0e40, 0x1069, 0x1162, 0x1162, 0x1162, 0x1162, 0x1162, 0x1162, 0x1162, 0x1162, 0x1162, 0x1162, 0x1162, 
	0x1162, 0x1162, 0x1162, 0x1162, 0x1162, 0x1162, 0x1162, 0x1162, 0x1162, 0x1162, 0x1162, 0x1162, 0x1162, 0x1162, 0x1162, 0x1162, 
	0x1103, 0x1004, 0x0e9d, 0x0d02, 0x0b5c, 0x09c4, 0x0848, 0x06ee, 0x05b7, 0x04a7, 0x03bd, 0x02fd, 0x026c, 0x020f, 0x01ee, 0xd040, 
	0xe308, 0x05b6, 0x9dd0, 0xaf68, 0xb5e4, 0xb2cb, 0xae49, 0xab5b, 0x2a92, 0xac33, 0xb019, 0xb580, 0xbb3c, 0xc043, 0xc423, 0xc5fd, 
	0xc595, 0xc3f1, 0xc236, 0xc419, 0xbf3f, 0xbbf7, 0xbfa6, 0xbddf, 0xb102, 0x2013, 0x1e09, 0x1bb6, 0x1a74, 0x1c03, 0x1eb5, 0x2013, 
	0x20f7, 0x23b3, 0x2896, 0xaffb, 0xb995, 0xc3c1, 0xcc66, 0xd29a, 0xd6b0, 0xd956, 0xdb1f, 0xdc63, 0xdd4e, 0xdde5, 0xde1c, 0xaa30, 
	0xa96d, 0x9b78, 0xea5b, 0xec94, 0xeb1b, 0xe5c0, 0xe093, 0xdccd, 0xa619, 0xd7ac, 0xd637, 0xd5a2, 0xd5e5, 0xd6b7, 0xd869, 0xdb40, 
	0xded2, 0xe326, 0xe842, 0xeddb, 0xf316, 0xf56d, 0xf271, 0xe917, 0xdbe8, 0xa7d7, 0xa86d, 0xa8f5, 0xa92c, 0xa8d7, 0xa835, 0xa7d7, 
	0xa815, 0xa8b4, 0xa972, 0xd62c, 0xd6f0, 0xd991, 0xde33, 0xe42e, 0xea84, 0xf067, 0xf564, 0xf952, 0xfc2b, 0xfdea, 0xfe85, 0xef0e, 
	0xcf33, 0xadec, 0x25a2, 0x25da, 0x309b, 0x3b1f, 0x40b6, 0x43f8, 0xc4b3, 0x42c9, 0x3e6c, 0x3865, 0x31ed, 0x2c18, 0x272b, 0x23cd, 
	0x224e, 0x21a2, 0x20dc, 0x1ff5, 0x1f00, 0x1e86, 0x209f, 0x284f, 0x3d36, 0xd1bf, 0xce43, 0xc708, 0xc37a, 0xc6b5, 0xcd8f, 0xd1bf, 
	0xd09d, 0xcd34, 0xc741, 0x3e76, 0x3325, 0x26f9, 0x1c1c, 0x1396, 0x0d43, 0x08a0, 0x0538, 0x02c1, 0x010d, 0x0007, 0xffab, 0x344c, 
	0x4140, 0x36ca, 0x2252, 0x1330, 0x0f49, 0x152b, 0x19ec, 0x1c3d, 0x1d60, 0x1dde, 0x1e05, 0x1e04, 0x1df4, 0x1dea, 0x1dce, 0x1d60, 
	0x1c4b, 0x19e1, 0x14a0, 0x03cb, 0x002e, 0x002e, 0x002e, 0x1116, 0x1bfc, 0x1dea, 0x2195, 0x2651, 0x2808, 0x2645, 0x217c, 0x1dea, 
	0x1e11, 0x1e74, 0x1ef1, 0x1f61, 0x1fa4, 0x1f9c, 0x1f38, 0x1e6f, 0x1d42, 0x1bc0, 0x1a00, 0x182c, 0x167e, 0x1542, 0x14ca, 0xffad, 
	0xff8a, 0xffa6, 0xffd6, 0xffef, 0xfff3, 0xffec, 0xffe5, 0xffe1, 0xffdf, 0xffdf, 0xffde, 0xffde, 0xffde, 0xffde, 0xffdf, 0xffdf, 
	0xffe1, 0xffe5, 0xffed, 0xfffa, 0xfffa, 0xfffa, 0xfffa, 0xfff1, 0xffe2, 0xffde, 0xffd8, 0xffce, 0xffca, 0xffce, 0xffd8, 0xffde, 
	0xffde, 0xffdd, 0xffdd, 0xffdc, 0xffdb, 0xffdb, 0xffdc, 0xffdd, 0xffe0, 0xffe2, 0xffe5, 0xffe8, 0xffea, 0xffec, 0xffed, 0x0068, 
	0x006d, 0x006a, 0x0051, 0x0031, 0x0028, 0x0036, 0x0041, 0x0045, 0x0048, 0x0049, 0x0049, 0x0049, 0x0049, 0x0049, 0x0049, 0x0048, 
	0x0046, 0x0040, 0x0035, 0x000a, 0xffff, 0xffff, 0xffff, 0x002c, 0x0045, 0x0049, 0x0050, 0x0058, 0x005a, 0x0058, 0x0050, 0x0049, 
	0x0049, 0x004a, 0x004b, 0x004c, 0x004c, 0x004c, 0x004b, 0x004a, 0x0048, 0x0044, 0x0041, 0x003d, 0x0039, 0x0036, 0x0035, 0x3ebc, 
	0x434f, 0x4db1, 0xd741, 0xdcc2, 0xdf29, 0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 
	0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 0xdfd1, 
	0xdf97, 0xded6, 0xdd4a, 0xda64, 0xd533, 0x4c80, 0x4026, 0x334a, 0x29c0, 0x240f, 0x2106, 0x1f87, 0x1edb, 0x1e9a, 0x1e8a, 0x2191, 
	0x2176, 0x1f4b, 0x6643, 0x6cec, 0x71f7, 0x73e4, 0x73e4, 0x73e4, 0x73e4, 0x73e4, 0x73e4, 0x73e4, 0x73e4, 0x73e4, 0x73e4, 0x73e4, 
	0x73e4, 0x73e4, 0x73e4, 0x73e4, 0x73e4, 0x73e4, 0x73e4, 0x73e4, 0x73e4, 0x73e4, 0x73e4, 0x73e4, 0x73e4, 0x73e4, 0x73e4, 0x73e4, 
	0x732e, 0x7122, 0x6dda, 0x6985, 0x64a0, 0x1fb3, 0x2196, 0x1fa1, 0x1a95, 0x1464, 0x0e88, 0x09b8, 0x0634, 0x040d, 0x034f, 0x3e26, 
	0x4461, 0x52db, 0xe192, 0xec07, 0xf216, 0xf42a, 0xf42a, 0xf42a, 0xf42a, 0xf42a, 0xf42a, 0xf42a, 0xf42a, 0xf42a, 0xf42a, 0xf42a, 
	0xf42a, 0xf42a, 0xf42a, 0xf42a, 0xf42a, 0xf42a, 0xf42a, 0xf42a, 0xf42a, 0xf42a, 0xf42a, 0xf42a, 0xf42a, 0xf42a, 0xf42a, 0xf42a, 
	0xf368, 0xf126, 0xed3a, 0xe730, 0xde31, 0x5126, 0x4013, 0x2e4c, 0x1fd9, 0x157b, 0x0e35, 0x091d, 0x05ac, 0x03a3, 0x02f1, 0x6509, 
	0x6539, 0x65ae, 0x6643, 0x66d3, 0x6740, 0x676b, 0x676b, 0x676b, 0x676b, 0x676b, 0x676b, 0x676b, 0x676b, 0x676b, 0x676b, 0x676b, 
	0x676b, 0x676b, 0x676b, 0x676b, 0x676b, 0x676b, 0x676b, 0x676b, 0x676b, 0x676b, 0x676b, 0x676b, 0x676b, 0x676b, 0x676b, 0x676b, 
	0x66c7, 0x64f7, 0x621c, 0x5e5a, 0x59d6, 0x54c0, 0x4f4c, 0x49b9, 0x4445, 0x3f2f, 0x3aab, 0x36e9, 0x340e, 0x323e, 0x319a, 0xfffa, 
	0xfff9, 0xfff8, 0xfff7, 0xfff5, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 
	0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 0xfff4, 
	0xfff5, 0xfffa, 0x0002, 0x000a, 0x0013, 0x001b, 0x0022, 0x0028, 0x002b, 0x002d, 0x002c, 0x002b, 0x002a, 0x0028, 0x0028, 0x004b, 
	0x004e, 0x0056, 0x0061, 0x006b, 0x0073, 0x0076, 0x0076, 0x0076, 0x0076, 0x0076, 0x0076, 0x0076, 0x0076, 0x0076, 0x0076, 0x0076, 
	0x0076, 0x0076, 0x0076, 0x0076, 0x0076, 0x0076, 0x0076, 0x0076, 0x0076, 0x0076, 0x0076, 0x0076, 0x0076, 0x0076, 0x0076, 0x0076, 
	0x0075, 0x0072, 0x006d, 0x0066, 0x005d, 0x0051, 0x0044, 0x0035, 0x0026, 0x0017, 0x000b, 0xffff, 0xfff6, 0xfff1, 0xffef, 0x43c2, 
	0x41ff, 0x3f14, 0x3b9b, 0x382b, 0x3576, 0x345d, 0x3461, 0x3463, 0x3463, 0x3463, 0x3463, 0x3463, 0x3463, 0x3463, 0x3463, 0x3463, 
	0x3463, 0x3463, 0x3463, 0x3463, 0x3463, 0x3463, 0x3463, 0x3463, 0x3463, 0x3463, 0x3463, 0x3463, 0x3463, 0x3463, 0x3463, 0x356c, 
	0x38b8, 0x3e28, 0x44ee, 0x4c70, 0x53e3, 0x586a, 0x58b2, 0x5761, 0x5969, 0x5e60, 0x625d, 0x656e, 0x6797, 0x68df, 0x694b, 0xed85, 
	0xee4c, 0xef76, 0xf0ce, 0xf217, 0xf304, 0xf336, 0xf2f8, 0xf2df, 0xf2df, 0xf2df, 0xf2df, 0xf2df, 0xf2df, 0xf2df, 0xf2df, 0xf2df, 
	0xf2df, 0xf2df, 0xf2df, 0xf2df, 0xf2df, 0xf2df, 0xf2df, 0xf2df, 0xf2df, 0xf2df, 0xf2df, 0xf2df, 0xf2df, 0xf2df, 0xf2df, 0xf257, 
	0xf0f6, 0xef10, 0xed14, 0xeb7d, 0xeb1f, 0xec2b, 0xedcd, 0xefe1, 0xf1bf, 0xf31d, 0xf414, 0xf4af, 0xf501, 0xf51d, 0xf51e, 0x0a55, 
	0x0a77, 0x0a99, 0x0a93, 0x0a55, 0x09ed, 0x098b, 0x094b, 0x0932, 0x0932, 0x0932, 0x0932, 0x0932, 0x0932, 0x0932, 0x0932, 0x0932, 
	0x0932, 0x0932, 0x0932, 0x0932, 0x0932, 0x0932, 0x0932, 0x0932, 0x0932, 0x0932, 0x0932, 0x0932, 0x0932, 0x0932, 0x0932, 0x098d, 
	0x0a1a, 0x0a25, 0x093e, 0x06cd, 0x028a, 0xfe71, 0xfc5f, 0xfb3b, 0xf939, 0xf697, 0xf49c, 0xf318, 0xf1ff, 0xf153, 0xf11a, 0xd757, 
	0xd90c, 0xdbb5, 0xdf15, 0xe2c3, 0xe5e8, 0xe712, 0xe6c8, 0xe6ad, 0xe6ad, 0xe6ad, 0xe6ad, 0xe6ad, 0xe6ad, 0xe6ad, 0xe6ad, 0xe6ad, 
	0xe6ad, 0xe6ad, 0xe6ad, 0xe6ad, 0xe6ad, 0xe6ad, 0xe6ad, 0xe6ad, 0xe6ad, 0xe6ad, 0xe6ad, 0xe6ad, 0xe6ad, 0xe6ad, 0xe6ad, 0xe4c8, 
	0xe0aa, 0xdc51, 0xd8e1, 0xd6f4, 0xd6f1, 0xd673, 0xd570, 0xd68d, 0xd875, 0xd9d1, 0xdb5b, 0xdce9, 0xde53, 0xdf63, 0xdfd0, 0xf8f4, 
	0xfa35, 0xfc0f, 0xfe38, 0x0056, 0x01ed, 0x0278, 0x0256, 0x024a, 0x024a, 0x024a, 0x024a, 0x024a, 0x024a, 0x024a, 0x024a, 0x024a, 
	0x024a, 0x024a, 0x024a, 0x024a, 0x024a, 0x024a, 0x024a, 0x024a, 0x024a, 0x024a, 0x024a, 0x024a, 0x024a, 0x024a, 0x024a, 0x0161, 
	0xff29, 0xfc77, 0xfa17, 0xf8aa, 0xf8a8, 0xf848, 0xf781, 0xf85c, 0xf9c8, 0xfac2, 0xfbd2, 0xfcdb, 0xfdc1, 0xfe68, 0xfea9, 0xe589, 
	0xe665, 0xe7cd, 0xe9b5, 0xebea, 0xede3, 0xeea3, 0xee73, 0xee61, 0xee61, 0xee61, 0xee61, 0xee61, 0xee61, 0xee61, 0xee61, 0xee61, 
	0xee61, 0xee61, 0xee61, 0xee61, 0xee61, 0xee61, 0xee61, 0xee61, 0xee61, 0xee61, 0xee61, 0xee61, 0xee61, 0xee61, 0xee61, 0xed2c, 
	0xeaa4, 0xe823, 0xe64f, 0xe559, 0xe558, 0xe51b, 0xe4a2, 0xe528, 0xe618, 0xe6cb, 0xe79c, 0xe878, 0xe945, 0xe9e3, 0xea23, 0x2c4e, 
	0x2c8e, 0x2cc8, 0x2cfe, 0x2d30, 0x2d5f, 0x2d8a, 0x2db4, 0x2ddb, 0x2e00, 0x2e24, 0x2e47, 0x2e68, 0x2e88, 0x2ea7, 0x2ec4, 0x2edf, 
	0x2efa, 0x2f13, 0x2f2a, 0x2f41, 0x2f56, 0x2f6a, 0x2f7c, 0x2f8e, 0x2f9e, 0x2fad, 0x2fbb, 0x2fc8, 0x2fd4, 0x2fdf, 0x2fe9, 0x2ff3, 
	0x2ffb, 0x3002, 0x3009, 0x300f, 0x3014, 0x3018, 0x301c, 0x301f, 0x3022, 0x3024, 0x3026, 0x3027, 0x3028, 0x3028, 0x3028, 0xf97e, 
	0xf974, 0xf971, 0xf975, 0xf97f, 0xf98d, 0xf99f, 0xf9b5, 0xf9cd, 0xf9e7, 0xfa03, 0xfa21, 0xfa40, 0xfa61, 0xfa82, 0xfaa5, 0xfac9, 
	0xfaee, 0xfb14, 0xfb3a, 0xfb60, 0xfb87, 0xfbae, 0xfbd6, 0xfbfd, 0xfc24, 0xfc4b, 0xfc71, 0xfc96, 0xfcbb, 0xfcdf, 0xfd03, 0xfd24, 
	0xfd45, 0xfd65, 0xfd82, 0xfd9f, 0xfdb9, 0xfdd1, 0xfde8, 0xfdfc, 0xfe0e, 0xfe1e, 0xfe2b, 0xfe35, 0xfe3d, 0xfe42, 0xfe43, 0x0482, 
	0x0459, 0x0437, 0x041b, 0x0405, 0x03f2, 0x03e1, 0x03d2, 0x03c2, 0x03b2, 0x03a0, 0x038c, 0x0378, 0x0363, 0x034d, 0x0336, 0x031f, 
	0x0306, 0x02ee, 0x02d5, 0x02bb, 0x02a1, 0x0287, 0x026e, 0x0254, 0x023a, 0x0220, 0x0207, 0x01ee, 0x01d5, 0x01be, 0x01a6, 0x0190, 
	0x017a, 0x0165, 0x0151, 0x013e, 0x012d, 0x011c, 0x010d, 0x00ff, 0x00f3, 0x00e9, 0x00e0, 0x00d9, 0x00d4, 0x00d1, 0x00d0, 0x19da, 
	0x198c, 0x18bb, 0x1774, 0x15eb, 0x1490, 0x141d, 0x1454, 0x1469, 0x1469, 0x1469, 0x1469, 0x1469, 0x1469, 0x1469, 0x1469, 0x1469, 
	0x1469, 0x1469, 0x1469, 0x1469, 0x1469, 0x1469, 0x1469, 0x1469, 0x1469, 0x1469, 0x1469, 0x1469, 0x1469, 0x1469, 0x1469, 0x1469, 
	0x1579, 0x1866, 0x1cc3, 0x2212, 0x2814, 0x2ee8, 0x36c9, 0x410c, 0x4d44, 0x58ff, 0x628c, 0x680d, 0x69d8, 0x695c, 0x68a5, 0x0693, 
	0x05c2, 0x047a, 0x0306, 0x01a9, 0x00a9, 0x004e, 0x005d, 0x0063, 0x0063, 0x0063, 0x0063, 0x0063, 0x0063, 0x0063, 0x0063, 0x0063, 
	0x0063, 0x0063, 0x0063, 0x0063, 0x0063, 0x0063, 0x0063, 0x0063, 0x0063, 0x0063, 0x0063, 0x0063, 0x0063, 0x0063, 0x0063, 0x0063, 
	0x00cc, 0x01fa, 0x03d7, 0x06dc, 0x0b1e, 0x0fe9, 0x1436, 0x1795, 0x1932, 0x18de, 0x16ec, 0x13d8, 0x10f6, 0x0efe, 0x0e3a, 0xe950, 
	0xea05, 0xeb1e, 0xec70, 0xedcc, 0xeee9, 0xef55, 0xef44, 0xef3d, 0xef3d, 0xef3d, 0xef3d, 0xef3d, 0xef3d, 0xef3d, 0xef3d, 0xef3d, 
	0xef3d, 0xef3d, 0xef3d, 0xef3d, 0xef3d, 0xef3d, 0xef3d, 0xef3d, 0xef3d, 0xef3d, 0xef3d, 0xef3d, 0xef3d, 0xef3d, 0xef3d, 0xef3d, 
	0xef03, 0xee79, 0xedeb, 0xedf1, 0xef56, 0xf2ba, 0xf885, 0xffe1, 0x06bc, 0x0baf, 0x0f3f, 0x1083, 0x0fa4, 0x0dd8, 0x0cd5, 0xd4ed, 
	0xd6cc, 0xd9d7, 0xddad, 0xe1ca, 0xe545, 0xe6a2, 0xe66f, 0xe65c, 0xe65c, 0xe65c, 0xe65c, 0xe65c, 0xe65c, 0xe65c, 0xe65c, 0xe65c, 
	0xe65c, 0xe65c, 0xe65c, 0xe65c, 0xe65c, 0xe65c, 0xe65c, 0xe65c, 0xe65c, 0xe65c, 0xe65c, 0xe65c, 0xe65c, 0xe65c, 0xe65c, 0xe65c, 
	0xe5a9, 0xe3df, 0xe193, 0xdf48, 0xdd5f, 0xdc11, 0xdb72, 0xd91e, 0xd4e2, 0xd159, 0xd067, 0xd333, 0xd887, 0xde5b, 0xe153, 0x0eb6, 
	0x0d7a, 0x0b8e, 0x094e, 0x0720, 0x057e, 0x04e7, 0x04fd, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 
	0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 0x0505, 
	0x0552, 0x0620, 0x073c, 0x086c, 0x0979, 0x0a39, 0x0a96, 0x0c00, 0x0ebd, 0x1129, 0x11d3, 0x0fe1, 0x0c5e, 0x08ed, 0x075c, 0x194c, 
	0x1884, 0x1725, 0x1542, 0x1311, 0x1118, 0x104c, 0x106a, 0x1075, 0x1075, 0x1075, 0x1075, 0x1075, 0x1075, 0x1075, 0x1075, 0x1075, 
	0x1075, 0x1075, 0x1075, 0x1075, 0x1075, 0x1075, 0x1075, 0x1075, 0x1075, 0x1075, 0x1075, 0x1075, 0x1075, 0x1075, 0x1075, 0x1075, 
	0x10de, 0x11e6, 0x132f, 0x146c, 0x156a, 0x1612, 0x1660, 0x177b, 0x1950, 0x1aa4, 0x1af6, 0x19f8, 0x17c0, 0x14e8, 0x1352, 0x4753, 
	0x46d2, 0x4652, 0x45d7, 0x4567, 0x4507, 0x44bc, 0x448b, 0x447a, 0x447a, 0x447a, 0x447a, 0x447a, 0x447a, 0x447a, 0x447a, 0x447a, 
	0x447a, 0x447a, 0x447a, 0x447a, 0x447a, 0x447a, 0x447a, 0x447a, 0x447a, 0x447a, 0x447a, 0x447a, 0x447a, 0x447a, 0x447a, 0x447a, 
	0x447a, 0x447a, 0x4419, 0x430d, 0x4178, 0x3f7d, 0x3d40, 0x3ae5, 0x388d, 0x3656, 0x345a, 0x32ae, 0x3165, 0x3092, 0x3047, 0xf330, 
	0xf34d, 0xf36b, 0xf389, 0xf3a6, 0xf3bf, 0xf3d3, 0xf3e1, 0xf3e6, 0xf3e6, 0xf3e6, 0xf3e6, 0xf3e6, 0xf3e6, 0xf3e6, 0xf3e6, 0xf3e6, 
	0xf3e6, 0xf3e6, 0xf3e6, 0xf3e6, 0xf3e6, 0xf3e6, 0xf3e6, 0xf3e6, 0xf3e6, 0xf3e6, 0xf3e6, 0xf3e6, 0xf3e6, 0xf3e6, 0xf3e6, 0xf3e6, 
	0xf3e6, 0xf3e6, 0xf401, 0xf451, 0xf4d5, 0xf58e, 0xf67a, 0xf794, 0xf8ce, 0xfa17, 0xfb5a, 0xfc7e, 0xfd6c, 0xfe0a, 0xfe44, 0xeb69, 
	0xebd0, 0xec37, 0xec9a, 0xecf4, 0xed41, 0xed7d, 0xeda4, 0xedb2, 0xedb2, 0xedb2, 0xedb2, 0xedb2, 0xedb2, 0xedb2, 0xedb2, 0xedb2, 
	0xedb2, 0xedb2, 0xedb2, 0xedb2, 0xedb2, 0xedb2, 0xedb2, 0xedb2, 0xedb2, 0xedb2, 0xedb2, 0xedb2, 0xedb2, 0xedb2, 0xedb2, 0xedb2, 
	0xedb2, 0xedb2, 0xedff, 0xeed4, 0xf015, 0xf1a4, 0xf362, 0xf532, 0xf6f7, 0xf89c, 0xfa0e, 0xfb40, 0xfc26, 0xfcb8, 0xfceb, 0x07ad, 
	0x07e6, 0x0877, 0x092f, 0x09e3, 0x0a81, 0x0b15, 0x0bce, 0x0cf1, 0x0f50, 0x12ff, 0x16ae, 0x1927, 0x1a41, 0x1af0, 0x1c9d, 0x2052, 
	0x253c, 0x295b, 0x2b4d, 0x2b65, 0x2b1c, 0x2a0a, 0x26ef, 0x2226, 0x1cf5, 0x1908, 0x1789, 0x17c2, 0x1867, 0x196f, 0x1ad0, 0x1c80, 
	0x1e76, 0x20a8, 0x2309, 0x258b, 0x2820, 0x2ab6, 0x2d3f, 0x2faa, 0x31e9, 0x33ed, 0x35aa, 0x3716, 0x3826, 0x38d1, 0x390d, 0xfd25, 
	0xfc9f, 0xfb34, 0xf91c, 0xf698, 0xf3f5, 0xf186, 0xef9b, 0xee81, 0xeedd, 0xf142, 0xf5da, 0xfbeb, 0x01f7, 0x06a8, 0x0945, 0x0931, 
	0x0612, 0x0037, 0xf97c, 0xf455, 0xf25d, 0xf38c, 0xf63b, 0xf8d8, 0xfa2b, 0xfa49, 0xfa23, 0xfa3d, 0xfa85, 0xfaf5, 0xfb84, 0xfc28, 
	0xfcd7, 0xfd87, 0xfe2f, 0xfec6, 0xff45, 0xffa9, 0xffee, 0x0019, 0x002a, 0x0026, 0x0015, 0xfffc, 0xffe5, 0xffd4, 0xffce, 0xff36, 
	0x0032, 0x02c8, 0x0678, 0x0abd, 0x0f10, 0x12e2, 0x159f, 0x16ad, 0x13ad, 0x0bd7, 0x0142, 0xf637, 0xecb0, 0xe639, 0xe436, 0xe843, 
	0xf14a, 0xfc6a, 0x06f5, 0x0ec5, 0x11d9, 0x0ee3, 0x0733, 0xfcc8, 0xf258, 0xeaa7, 0xe7b6, 0xe7d7, 0xe838, 0xe8d3, 0xe9a6, 0xeaac, 
	0xebe3, 0xed43, 0xeec8, 0xf067, 0xf217, 0xf3cd, 0xf57c, 0xf71a, 0xf89a, 0xf9f4, 0xfb1e, 0xfc11, 0xfcc7, 0xfd39, 0xfd61, };

JointIndex gBeastSkelAttackdbAnimJointIndices[23] = {
	{ 0x000f, 0x003f, 0x006f, },
	{ 0x0000, 0x0001, 0x0002, },
	{ 0x009f, 0x00cf, 0x00ff, },
	{ 0x012f, 0x015f, 0x018f, },
	{ 0x01bf, 0x01ef, 0x021f, },
	{ 0x024f, 0x027f, 0x02af, },
	{ 0x02df, 0x030f, 0x033f, },
	{ 0x036f, 0x039f, 0x03cf, },
	{ 0x0003, 0x0004, 0x0005, },
	{ 0x03ff, 0x042f, 0x045f, },
	{ 0x048f, 0x04bf, 0x04ef, },
	{ 0x051f, 0x054f, 0x057f, },
	{ 0x0006, 0x0007, 0x0008, },
	{ 0x05af, 0x05df, 0x060f, },
	{ 0x063f, 0x066f, 0x069f, },
	{ 0x06cf, 0x06ff, 0x072f, },
	{ 0x0009, 0x000a, 0x000b, },
	{ 0x075f, 0x078f, 0x07bf, },
	{ 0x07ef, 0x081f, 0x084f, },
	{ 0x087f, 0x08af, 0x08df, },
	{ 0x000c, 0x000d, 0x000e, },
	{ 0x090f, 0x093f, 0x096f, },
	{ 0x099f, 0x09cf, 0x09ff, },
};

AnimationHeader gBeastSkelAttackdbAnim = { { 48 }, gBeastSkelAttackdbAnimFrameData, gBeastSkelAttackdbAnimJointIndices, 15 };
