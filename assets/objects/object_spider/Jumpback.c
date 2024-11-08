#include "ultra64.h"
#include "global.h"

s16 ArmatureJumpbackAnimFrameData[1161] = {
	0x0000, 0x3813, 0xebf2, 0x9e32, 0x140d, 0x61cd, 0x0000, 0x0000, 0x0000, 0x0000, 0x0030, 0x008a, 0x00bb, 0x00bb, 0x00bb, 0x00bb, 
	0x00bb, 0x00b6, 0x00a7, 0x0092, 0x0079, 0x005d, 0x0042, 0x0028, 0x0013, 0x0005, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0273, 
	0x0701, 0x0974, 0x0974, 0x0974, 0x0974, 0x0974, 0x0931, 0x0879, 0x076a, 0x0620, 0x04ba, 0x0354, 0x020b, 0x00fc, 0x0044, 0x0000, 
	0x0000, 0xfee5, 0xfcd6, 0xfbbb, 0xfbd3, 0xfc01, 0xfc19, 0xfc19, 0xfc19, 0xfc19, 0xfc19, 0xfc35, 0xfc81, 0xfcf1, 0xfd79, 0xfe0d, 
	0xfea1, 0xff28, 0xff98, 0xffe4, 0x0000, 0x0000, 0x0101, 0x0386, 0x06cf, 0x0a17, 0x0c9c, 0x0d9d, 0x0b7e, 0x06cf, 0x021f, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xbf00, 0xbd4f, 0xb90c, 0xb377, 0xade1, 0xa99f, 
	0xa7ee, 0xa91f, 0xac27, 0xb037, 0xb48b, 0xb896, 0xbc3a, 0xbf6b, 0xc21d, 0xc445, 0xc5d9, 0xc6d2, 0xc725, 0xc312, 0xbf00, 0xfe50, 
	0xfe50, 0xfe55, 0xfe62, 0xfe77, 0xfe8c, 0xfe96, 0xfe8f, 0xfe7f, 0xfe6e, 0xfe5f, 0xfe56, 0xfe51, 0xfe50, 0xfe51, 0xfe53, 0xfe55, 
	0xfe57, 0xfe57, 0xfe51, 0xfe50, 0x0005, 0x0017, 0x0044, 0x007e, 0x00b5, 0x00dd, 0x00ec, 0x00e1, 0x00c5, 0x009e, 0x0073, 0x0049, 
	0x0023, 0x0001, 0xffe3, 0xffcd, 0xffbc, 0xffb2, 0xffaf, 0xffd9, 0x0005, 0x1795, 0x1f26, 0x2cc3, 0x34ca, 0x3755, 0x3562, 0x3308, 
	0x33d1, 0x30d6, 0x2e27, 0x2e64, 0x31a4, 0x3222, 0x26c7, 0x10db, 0x043c, 0xff1a, 0x0197, 0x0938, 0x12e6, 0x1795, 0xd79f, 0xd741, 
	0xda27, 0xdf09, 0xe348, 0xec87, 0xf397, 0xf04f, 0xf1e2, 0xf135, 0xecea, 0xe4ba, 0xdb25, 0xd414, 0xd5aa, 0xdcdd, 0xe06d, 0xdee3, 
	0xdaa3, 0xd7fc, 0xd79f, 0xc00c, 0xb8b5, 0xab05, 0xa4b2, 0xa1eb, 0x9c9c, 0x9953, 0x99ff, 0x97bf, 0x967a, 0x9864, 0x9dc7, 0xa643, 
	0xb77d, 0xce9b, 0xd6aa, 0xd6c8, 0xd483, 0xceec, 0xc564, 0xc00c, 0xa11a, 0x9e6a, 0x9849, 0x1107, 0x0d13, 0x06db, 0x0020, 0x04dc, 
	0x04ca, 0x0733, 0x0cf4, 0x12c8, 0x96cb, 0x9a74, 0x9fbe, 0xa79b, 0xac38, 0xaa81, 0xa5ff, 0xa288, 0xa11a, 0xff34, 0xfc31, 0xf41e, 
	0x925d, 0x93c9, 0x9651, 0x9732, 0x96ba, 0x9773, 0x97b9, 0x9574, 0x8ee9, 0xfa53, 0x04fc, 0x0ce4, 0x0de5, 0x0b44, 0x0a5c, 0x07dd, 
	0x0289, 0xff34, 0x3d0c, 0x4024, 0x4b4e, 0xda69, 0xe246, 0xf08b, 0xffb6, 0xf511, 0xf5a6, 0xf10c, 0xe4b3, 0xd429, 0x449f, 0x36fa, 
	0x2fb7, 0x3085, 0x329c, 0x3374, 0x357b, 0x39fd, 0x3d0c, 0xfae9, 0x02de, 0x1cc9, 0x2f37, 0xb411, 0xb270, 0x2f83, 0x2ee7, 0x2c76, 
	0x2a66, 0x2a49, 0x2b44, 0x24c1, 0x0b3c, 0xf6a7, 0xeca8, 0xe8c6, 0xeb94, 0xf127, 0xf760, 0xfae9, 0xd393, 0xd05f, 0xce0f, 0xd14f, 
	0xaa20, 0xa168, 0xe4c0, 0xe371, 0xe29f, 0xe051, 0xdccc, 0xd73e, 0xd07a, 0xcf01, 0xd5c5, 0xdc47, 0xdf6b, 0xdea4, 0xda8d, 0xd5c4, 
	0xd393, 0xd7f6, 0xcfe5, 0xb529, 0xa3fc, 0x1c2f, 0x1269, 0x8d14, 0x8d19, 0x8bc8, 0x8bf5, 0x8f0b, 0x967b, 0xa608, 0xc423, 0xd6dc, 
	0xdb82, 0xde25, 0xe058, 0xdf9d, 0xdb67, 0xd7f6, 0xabfc, 0xa93f, 0xa514, 0xa184, 0x9f39, 0x1bb5, 0x132b, 0x1631, 0x17e8, 0x1c83, 
	0x2167, 0xa337, 0xa321, 0xa540, 0xabe9, 0xb4d3, 0xb9d4, 0xb7a3, 0xb21f, 0xad9d, 0xabfc, 0xf80c, 0xf66a, 0xefbd, 0xe8b7, 0xe484, 
	0xa455, 0xab49, 0xaa89, 0xab70, 0xaa63, 0xa53c, 0xe4ab, 0xf010, 0xf9b7, 0xfd1d, 0xf8b4, 0xf452, 0xf642, 0xf91e, 0xf90e, 0xf80c, 
	0x2db4, 0x2eb6, 0x3443, 0x3c73, 0x42f5, 0xd0c0, 0xe2ba, 0xde08, 0xdc9e, 0xd60b, 0xcb9d, 0x3fd4, 0x3502, 0x2ce4, 0x2aea, 0x2cd1, 
	0x2dbb, 0x2d7e, 0x2cf9, 0x2d2c, 0x2db4, 0xe3ef, 0xe53d, 0xedc3, 0x0fdc, 0xac3b, 0xb449, 0xb2ae, 0xb20a, 0xb0ab, 0xaebd, 0xabbb, 
	0xa00c, 0xf6e6, 0xe380, 0xdd37, 0xd63b, 0xd1ee, 0xd73e, 0xde0c, 0xe26b, 0xe3ef, 0xd9ea, 0xd554, 0xcb5b, 0xc68a, 0xb722, 0xaf40, 
	0xa90a, 0xa9ed, 0xacab, 0xb0ab, 0xb476, 0xb8b6, 0xc726, 0xcf88, 0xd908, 0xdec0, 0xe182, 0xe1cf, 0xdf8a, 0xdbf2, 0xd9ea, 0xecf1, 
	0xeb5e, 0xe0c7, 0xbe9d, 0x1c57, 0x05a7, 0xfd62, 0xfcca, 0xfc6f, 0xfe9e, 0x04d3, 0x17dd, 0xcabb, 0xe407, 0xe836, 0xe7a3, 0xe864, 
	0xe9e8, 0xeb90, 0xecbc, 0xecf1, 0xb3f7, 0xaf93, 0xa9de, 0xa691, 0xa718, 0xae3c, 0xb502, 0xb705, 0xba79, 0xbb2e, 0xb80a, 0xb17e, 
	0xac24, 0xad71, 0xb776, 0xc6f5, 0xd1d0, 0xcaa4, 0xbf5f, 0xb70c, 0xb3f7, 0xf5fb, 0xf5dd, 0xf1d2, 0xecbd, 0xe818, 0xdcbe, 0xd193, 
	0xd18b, 0xd2d6, 0xd6a9, 0xdc5c, 0xe52f, 0xee75, 0xf4ae, 0xf477, 0xec7c, 0xe644, 0xeafe, 0xf1d0, 0xf550, 0xf5fb, 0x1fbb, 0x1fd1, 
	0x22ab, 0x27be, 0x2c18, 0x3328, 0x38eb, 0x371d, 0x32de, 0x2ef8, 0x2c8a, 0x2978, 0x24be, 0x20a3, 0x2019, 0x1fac, 0x1ca9, 0x1ee9, 
	0x202d, 0x1fe7, 0x1fbb, 0xdba6, 0xdb6f, 0xd8e1, 0xd904, 0xedbe, 0xc3e9, 0xbfdb, 0xc118, 0xc52d, 0xd012, 0xf507, 0xb749, 0xca15, 
	0xd144, 0xd0c9, 0xc9b2, 0xc3c2, 0xcbc1, 0xd4c9, 0xd9fb, 0xdba6, 0xe160, 0xdd7b, 0xd345, 0xc92c, 0xc15f, 0xb771, 0xb19b, 0xb31c, 
	0xb67f, 0xbabd, 0xbdbe, 0xc4b4, 0xcc90, 0xd72b, 0xdfa5, 0xe3cb, 0xe586, 0xe654, 0xe530, 0xe2dc, 0xe160, 0xf4b8, 0xf501, 0xf4a2, 
	0xf12e, 0xd2d1, 0xecbe, 0xe80e, 0xe73a, 0xe2ea, 0xd90c, 0xb708, 0xfb8a, 0xf2cc, 0xf260, 0xf0e1, 0xef76, 0xef9e, 0xf078, 0xf1ef, 
	0xf3ec, 0xf4b8, 0xb78f, 0xb16d, 0xa8f3, 0xa507, 0xa87b, 0xb693, 0xc3f1, 0xc384, 0xc437, 0xc2a3, 0xbe30, 0xb5b7, 0xae42, 0xb071, 
	0xbe0f, 0xd3e6, 0xe6ed, 0xd8d8, 0xc779, 0xbbdd, 0xb78f, 0xf505, 0xf597, 0xf323, 0xee69, 0xe936, 0xdebc, 0xd638, 0xd787, 0xda05, 
	0xddc3, 0xe20b, 0xe842, 0xef84, 0xf43e, 0xf2e3, 0xeb1a, 0xe570, 0xe9b5, 0xf056, 0xf415, 0xf505, 0x168a, 0x1669, 0x185e, 0x1d42, 
	0x2189, 0x24eb, 0x2421, 0x2343, 0x20c0, 0x1ed8, 0x1e0c, 0x1d26, 0x1a3c, 0x1722, 0x16c4, 0x13da, 0x0ccc, 0x127b, 0x165a, 0x16b0, 
	0x168a, 0x1795, 0x1f7f, 0x2e7f, 0x37ee, 0x3a9b, 0x3812, 0x35c3, 0x36cd, 0x3458, 0x31c5, 0x31b1, 0x3397, 0x3343, 0x2929, 0x13ed, 
	0x05d4, 0x0032, 0x01e4, 0x08f4, 0x12e6, 0x1795, 0x2860, 0x2903, 0x26a6, 0x21f6, 0x1d23, 0x1363, 0x0deb, 0x12a0, 0x10fd, 0x1045, 
	0x136f, 0x1a60, 0x2357, 0x2aa8, 0x2a4a, 0x23f0, 0x209f, 0x2290, 0x26e5, 0x28cd, 0x2860, 0x3ff3, 0x4715, 0x54e0, 0x5b24, 0x5d5e, 
	0x61a5, 0x641c, 0x6372, 0x659e, 0x6751, 0x6651, 0x6291, 0x5bae, 0x4c77, 0x367f, 0x2aef, 0x245c, 0x225a, 0x2a85, 0x38ad, 0x3ff3, 
	0xa11a, 0x9e45, 0x980b, 0x10d2, 0x0be4, 0x04db, 0x001f, 0x065a, 0x069e, 0x0796, 0x0ba3, 0x1105, 0x95e3, 0x9a00, 0x9ef6, 0xa635, 
	0xaaa9, 0xa8ef, 0xa4df, 0xa235, 0xa11a, 0x00cb, 0x033d, 0x0a60, 0x6f83, 0x6d41, 0x6a4e, 0x699e, 0x6a74, 0x69d9, 0x6971, 0x6afe, 
	0x6fd6, 0x0782, 0xfc6c, 0xf3da, 0xf13a, 0xf151, 0xf185, 0xf565, 0xfc94, 0x00cb, 0xc2f3, 0xc06b, 0xb653, 0x276b, 0x1c8a, 0x0b69, 
	0x0048, 0x0ed7, 0x0f06, 0x10a0, 0x19af, 0x282d, 0xb879, 0xc75e, 0xcfd2, 0xd072, 0xd00f, 0xcfe1, 0xcccb, 0xc6d9, 0xc2f3, 0xfae9, 
	0x034d, 0x1f7e, 0x3403, 0xb99f, 0xb7b0, 0xb516, 0xb455, 0xb218, 0xb009, 0xafa3, 0xb031, 0x2b28, 0x11cf, 0xf8e1, 0xeec0, 0xeb72, 
	0xed8f, 0xf204, 0xf797, 0xfae9, 0x2c6c, 0x2fce, 0x3264, 0x2f65, 0x54be, 0x5d08, 0x6219, 0x6185, 0x6168, 0x6019, 0x5d40, 0x5856, 
	0x2e82, 0x31ee, 0x2b54, 0x238b, 0x1fe6, 0x210e, 0x2581, 0x2a50, 0x2c6c, 0x2809, 0x2fe8, 0x4b76, 0x5c76, 0xe343, 0xeb36, 0xef23, 
	0xef82, 0xf0fb, 0xf18b, 0xefba, 0xea9d, 0x5ecd, 0x40ce, 0x27d6, 0x20dc, 0x1df7, 0x1c7e, 0x1e7d, 0x2409, 0x2809, 0xabfc, 0xa8ab, 
	0xa351, 0x9e9d, 0x9c14, 0x1a81, 0x17b6, 0x18dd, 0x1a34, 0x1c95, 0x1f09, 0xa02a, 0xa06b, 0xa1b9, 0xa772, 0xb082, 0xb62a, 0xb50a, 
	0xb0b1, 0xad33, 0xabfc, 0x07f3, 0x08d9, 0x0e25, 0x135a, 0x16ad, 0x619f, 0x5bfe, 0x5c5f, 0x5ba2, 0x5c2a, 0x5fc0, 0x18dd, 0x0ea2, 
	0x03d0, 0xfde5, 0xffe6, 0x043b, 0x04e1, 0x04ad, 0x0665, 0x07f3, 0xd24b, 0xd1b4, 0xccd2, 0xc559, 0xbf7c, 0x346c, 0x2a48, 0x2c30, 
	0x2d09, 0x306b, 0x36f9, 0xc011, 0xcade, 0xd4a2, 0xd873, 0xd69e, 0xd4cb, 0xd44f, 0xd40b, 0xd31d, 0xd24b, 0xe3ef, 0xe586, 0xef58, 
	0x1966, 0xb3f7, 0xb7d4, 0xb595, 0xb512, 0xb3cb, 0xb27a, 0xb15e, 0xadbf, 0x0dbf, 0xe49f, 0xddb4, 0xd96c, 0xd79b, 0xdb61, 0xdff8, 
	0xe2f0, 0xe3ef, 0x2615, 0x2abb, 0x3525, 0x3997, 0x4a77, 0x5345, 0x5939, 0x583e, 0x5601, 0x529c, 0x4f17, 0x4aab, 0x39f0, 0x32cd, 
	0x2816, 0x2112, 0x1d86, 0x1d51, 0x201c, 0x2405, 0x2615, 0x130e, 0x1477, 0x1f86, 0x4839, 0xe773, 0xf951, 0xffea, 0x0085, 0x01a5, 
	0x0133, 0xfdd0, 0xf476, 0x4d7a, 0x1f60, 0x1803, 0x174e, 0x162e, 0x1475, 0x134a, 0x12e8, 0x130e, 0xb3f7, 0xaec3, 0xa73e, 0xa1a2, 
	0xa10d, 0xa768, 0xabe1, 0xad71, 0xb0ea, 0xb320, 0xb1d4, 0xadbe, 0xaa47, 0xab91, 0xb3dd, 0xc010, 0xc6df, 0xc2cb, 0xbb8b, 0xb5f6, 
	0xb3f7, 0x0a04, 0x0988, 0x0cac, 0x10e2, 0x156f, 0x20ef, 0x2af5, 0x2a99, 0x29f0, 0x275d, 0x22c6, 0x1bbd, 0x12e7, 0x0b32, 0x092a, 
	0x0dbb, 0x1114, 0x0e20, 0x0acd, 0x09ca, 0x0a04, 0xe044, 0xe067, 0xddaf, 0xd7de, 0xd236, 0xc953, 0xc1e0, 0xc3ce, 0xc7c0, 0xcc41, 
	0xcfa8, 0xd38d, 0xd96c, 0xdf1d, 0xe08d, 0xe017, 0xe0ab, 0xe05f, 0xe03f, 0xe056, 0xe044, 0xdba6, 0xdb5f, 0xd8df, 0xd84e, 0xd570, 
	0xc9ad, 0xc492, 0xc688, 0xcf02, 0xf68e, 0xab6c, 0xbd66, 0xc8ae, 0xcf05, 0xcf23, 0xc8a3, 0xc2ea, 0xcbc1, 0xd50b, 0xda25, 0xdba6, 
	0x1e9f, 0x226b, 0x2c13, 0x34af, 0x3b53, 0x4439, 0x49a7, 0x4859, 0x452b, 0x4234, 0x3c37, 0x3843, 0x313e, 0x278d, 0x1f78, 0x1b04, 
	0x18da, 0x1811, 0x19ba, 0x1cc3, 0x1e9f, 0x0b47, 0x0b06, 0x0b54, 0x0cdb, 0x12d3, 0x1693, 0x19fd, 0x1bec, 0x2419, 0x4a26, 0xfc4f, 
	0x098c, 0x0d95, 0x0e65, 0x0fcc, 0x10a8, 0x1056, 0x0f87, 0x0df9, 0x0c09, 0x0b47, 0xb78f, 0xb134, 0xa7de, 0xa1d0, 0xa3e0, 0xb1a9, 
	0xbdf7, 0xbe2b, 0xbe2b, 0xbca1, 0xb997, 0xb4b8, 0xb0a3, 0xb3ce, 0xc12c, 0xd6cf, 0xe9ff, 0xd99c, 0xc77c, 0xbbc2, 0xb78f, 0x0afa, 
	0x0a2e, 0x0bc5, 0x0e66, 0x11e5, 0x1bdd, 0x240e, 0x231c, 0x20a3, 0x1d34, 0x19b6, 0x1549, 0x0fcd, 0x0c0f, 0x0dcd, 0x156e, 0x1a98, 
	0x15c7, 0x0ef5, 0x0b9a, 0x0afa, 0xe975, 0xe9a8, 0xe81c, 0xe4b6, 0xe12f, 0xdd35, 0xdcde, 0xddd1, 0xdfd5, 0xe1aa, 0xe2de, 0xe41e, 
	0xe6a3, 0xe8f2, 0xe955, 0xecf3, 0xf492, 0xeda9, 0xe9b7, 0xe95d, 0xe975, };

JointIndex ArmatureJumpbackAnimJointIndices[22] = {
	{ 0x0006, 0x001b, 0x0030, },
	{ 0x0000, 0x0000, 0x0000, },
	{ 0x0045, 0x0000, 0x0000, },
	{ 0x005a, 0x006f, 0x0084, },
	{ 0x0099, 0x00ae, 0x00c3, },
	{ 0x00d8, 0x00ed, 0x0102, },
	{ 0x0117, 0x012c, 0x0141, },
	{ 0x0156, 0x016b, 0x0180, },
	{ 0x0195, 0x01aa, 0x01bf, },
	{ 0x01d4, 0x01e9, 0x01fe, },
	{ 0x0213, 0x0228, 0x023d, },
	{ 0x0252, 0x0267, 0x027c, },
	{ 0x0291, 0x02a6, 0x02bb, },
	{ 0x02d0, 0x02e5, 0x02fa, },
	{ 0x030f, 0x0324, 0x0339, },
	{ 0x034e, 0x0363, 0x0378, },
	{ 0x038d, 0x03a2, 0x03b7, },
	{ 0x03cc, 0x03e1, 0x03f6, },
	{ 0x040b, 0x0420, 0x0435, },
	{ 0x044a, 0x045f, 0x0474, },
	{ 0x0001, 0x0002, 0x0003, },
	{ 0x0001, 0x0004, 0x0005, },
};

AnimationHeader ArmatureJumpbackAnim = { { 21 }, ArmatureJumpbackAnimFrameData, ArmatureJumpbackAnimJointIndices, 6 };

