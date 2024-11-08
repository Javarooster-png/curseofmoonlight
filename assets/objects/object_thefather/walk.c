#include "ultra64.h"
#include "global.h"

s16 gthefatherWalkAnimFrameData[1958] = {
	0x0000, 0xffff, 0xffce, 0x1e8e, 0xc9c4, 0x7fff, 0x0a52, 0xffe6, 0x0332, 0xf93f, 0xfb09, 0xe8d0, 0x0365, 0x002f, 0xf9e0, 0xfd78, 
	0xff0b, 0xed96, 0xf29e, 0x004f, 0xf59b, 0x0be4, 0x0784, 0xeab1, 0xfd52, 0x0078, 0xf013, 0x037e, 0x011f, 0xf3dc, 0x160b, 0x0118, 
	0xd32a, 0xeb18, 0x099d, 0x1156, 0x052e, 0x0019, 0xfccd, 0xfd94, 0x022b, 0x1790, 0xffd0, 0x061f, 0x00f4, 0x1269, 0xffb0, 0x0a64, 
	0xf87b, 0x154e, 0xff87, 0x0fec, 0xfee0, 0x0c23, 0xfee7, 0x2cd5, 0xf662, 0xeea9, 0xfcb8, 0xfcec, 0xfd67, 0xfdf8, 0xfe74, 0xfed3, 
	0xff17, 0xff3f, 0xff4c, 0xff26, 0xfec5, 0xfe43, 0xfdb9, 0xfd41, 0xfcee, 0xfcbc, 0xfca2, 0xfc99, 0xfc97, 0xfcab, 0xfce1, 0xfd31, 
	0xfd91, 0xfdf8, 0xfe5e, 0xfeba, 0xff06, 0xff39, 0xff4c, 0xff0e, 0xfe7a, 0xfdcc, 0xfd41, 0xfcee, 0xfcbc, 0xfca2, 0xfc99, 0xfc97, 
	0xffca, 0xffca, 0xffca, 0xffca, 0xffca, 0xffca, 0xffca, 0xffca, 0xffca, 0xffd5, 0xffef, 0x0010, 0x002a, 0x0035, 0x0035, 0x0035, 
	0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0035, 0x0025, 0xffff, 0xffda, 
	0xffca, 0xffca, 0xffca, 0xffca, 0xffca, 0xffca, 0x806b, 0x806b, 0x806b, 0x806b, 0x806b, 0x806b, 0x806b, 0x806b, 0x806b, 0x8055, 
	0x801f, 0x7fe0, 0x7faa, 0x7f94, 0x7f94, 0x7f94, 0x7f94, 0x7f94, 0x7f94, 0x7f94, 0x7f94, 0x7f94, 0x7f94, 0x7f94, 0x7f94, 0x7f94, 
	0x7f94, 0x7f94, 0x7f94, 0x7fb6, 0x8000, 0x8049, 0x806b, 0x806b, 0x806b, 0x806b, 0x806b, 0x806b, 0x09d5, 0x0fdd, 0x1bd0, 0x253a, 
	0x290c, 0x2a67, 0x2b51, 0x2d24, 0x30b9, 0x365a, 0x3b78, 0x3ca8, 0x3a8a, 0x38ef, 0x3a13, 0x3c12, 0x3cf1, 0x3bd9, 0x393e, 0x365e, 
	0x33b5, 0x30fc, 0x2dd9, 0x2a0d, 0x257d, 0x2035, 0x1a41, 0x13ab, 0x0c3d, 0x0613, 0x0147, 0xfcd0, 0xfb8e, 0xfdb6, 0x0043, 0x02ce, 
	0x04c7, 0x0594, 0x123a, 0x1031, 0x08e4, 0xff79, 0xfab1, 0xf922, 0xf8b0, 0xf859, 0xf809, 0xf96e, 0xfccd, 0xfee1, 0xff0f, 0xfdab, 
	0xfa5c, 0xf690, 0xf3d2, 0xf310, 0xf43b, 0xf6f7, 0xfa9a, 0xfe22, 0x0146, 0x0428, 0x06e3, 0x094a, 0x0b30, 0x0c7f, 0x0d5b, 0x0dec, 
	0x0f49, 0x115c, 0x1310, 0x13cb, 0x13ed, 0x13a7, 0x1344, 0x1312, 0x1de8, 0x1ff0, 0x22e5, 0x21ee, 0x1e6c, 0x1b81, 0x197c, 0x1810, 
	0x16da, 0x16ea, 0x19fe, 0x1d64, 0x1e50, 0x1e04, 0x1e66, 0x1fa0, 0x2181, 0x23d7, 0x25fa, 0x26bd, 0x25c9, 0x23dc, 0x21a7, 0x1f8d, 
	0x1d7f, 0x1b3d, 0x18c6, 0x1631, 0x137f, 0x125c, 0x128e, 0x1272, 0x1366, 0x15ed, 0x1860, 0x1a7a, 0x1be2, 0x1c63, 0xd068, 0xcd72, 
	0xc830, 0xc606, 0xc7f1, 0xca88, 0xccc8, 0xce80, 0xd010, 0xd26c, 0xd658, 0xdbb6, 0xe12e, 0xe373, 0xdfec, 0xd99d, 0xd360, 0xce7a, 
	0xcb67, 0xca66, 0xcb1d, 0xccfa, 0xcfa3, 0xd2ed, 0xd6a7, 0xda8a, 0xde4a, 0xe19e, 0xe479, 0xe432, 0xe16c, 0xdefc, 0xdc33, 0xd8fe, 
	0xd665, 0xd463, 0xd315, 0xd29c, 0xe7fa, 0xe510, 0xdfe0, 0xddcb, 0xdfa2, 0xe22e, 0xe468, 0xe61b, 0xe7a4, 0xe9eb, 0xed8b, 0xf214, 
	0xf612, 0xf787, 0xf535, 0xf060, 0xead2, 0xe615, 0xe30a, 0xe20b, 0xe2c1, 0xe499, 0xe73a, 0xea65, 0xedd2, 0xf123, 0xf40b, 0xf65c, 
	0xf825, 0xf7fb, 0xf63b, 0xf48c, 0xf276, 0xefda, 0xed97, 0xebc4, 0xea8b, 0xea19, 0xdccc, 0xdb6b, 0xd989, 0xd900, 0xd978, 0xda48, 
	0xdb24, 0xdbe3, 0xdca1, 0xddd8, 0xe01a, 0xe390, 0xe76c, 0xe919, 0xe682, 0xe22b, 0xde5e, 0xdbe0, 0xda98, 0xda3c, 0xda7d, 0xdb39, 
	0xdc6c, 0xde1f, 0xe04a, 0xe2c7, 0xe559, 0xe7be, 0xe9de, 0xe9a8, 0xe79a, 0xe5d7, 0xe3e5, 0xe1c3, 0xe022, 0xdef1, 0xde34, 0xddf2, 
	0x3314, 0x370f, 0x3e7e, 0x427a, 0x4125, 0x3e08, 0x3a69, 0x376e, 0x3630, 0x370c, 0x3918, 0x3b92, 0x3dd5, 0x3f46, 0x3fcf, 0x3ff5, 
	0x3ffa, 0x4023, 0x40af, 0x4226, 0x4475, 0x46f2, 0x48f1, 0x49c3, 0x49c3, 0x49c3, 0x49c3, 0x49c3, 0x49c3, 0x48e6, 0x4697, 0x433f, 
	0x3f46, 0x3b10, 0x3704, 0x3391, 0x312a, 0x3043, 0xfef1, 0xffad, 0x00c8, 0x0138, 0xffb2, 0xfbf4, 0xf759, 0xf36d, 0xf1c8, 0xf33e, 
	0xf6c1, 0xfafb, 0xfe84, 0xfffe, 0xff8d, 0xfe81, 0xfd40, 0xfc34, 0xfbc4, 0xfc68, 0xfdec, 0xffb6, 0x0130, 0x01cc, 0x01cc, 0x01cc, 
	0x01cc, 0x01cc, 0x01cc, 0x01a3, 0x0137, 0x00a1, 0xfffe, 0xff6c, 0xfef6, 0xfea1, 0xfe6e, 0xfe5e, 0x0163, 0x0258, 0x044a, 0x0567, 
	0x04bc, 0x0355, 0x0204, 0x0137, 0x00f8, 0x00bc, 0x0051, 0x000c, 0x0004, 0x0010, 0xfffb, 0xffcb, 0xff92, 0xff61, 0xff45, 0xff53, 
	0xff94, 0xffff, 0x006e, 0x00a1, 0x00a1, 0x00a1, 0x00a1, 0x00a1, 0x00a1, 0x0089, 0x0055, 0x0023, 0x0010, 0x0023, 0x004f, 0x0083, 
	0x00af, 0x00c1, 0x30d4, 0x2e1a, 0x2785, 0x2082, 0x1b19, 0x1654, 0x11fa, 0x0dcc, 0x0958, 0x0526, 0x016a, 0xfd8d, 0xfa63, 0xf9e0, 
	0xfb0a, 0xfc10, 0xfdb0, 0x0053, 0x042e, 0x0a0f, 0x1193, 0x190d, 0x1f09, 0x2264, 0x233b, 0x2344, 0x23c9, 0x25b5, 0x298b, 0x2f92, 
	0x348d, 0x3505, 0x3489, 0x364b, 0x37bd, 0x36b1, 0x33fe, 0x3280, 0x1440, 0x12c6, 0x0f3b, 0x0a38, 0x0524, 0x0183, 0xfeda, 0xfce5, 
	0xfb63, 0xf9fd, 0xf83a, 0xf621, 0xf42a, 0xf2bf, 0xf1e2, 0xf11d, 0xf04a, 0xefb1, 0xefe5, 0xf111, 0xf3c1, 0xf86f, 0xfe46, 0x036c, 
	0x06b6, 0x0918, 0x0b89, 0x0ea1, 0x1282, 0x149a, 0x11b5, 0x0f73, 0x0fa3, 0x12a2, 0x160b, 0x176f, 0x1650, 0x1523, 0xdbad, 0xdc4a, 
	0xddf1, 0xe05a, 0xe304, 0xe594, 0xe7c1, 0xe96f, 0xeaac, 0xeade, 0xea26, 0xe971, 0xe88c, 0xe65c, 0xe3e1, 0xe2af, 0xe258, 0xe1e2, 
	0xe02e, 0xddb3, 0xdb82, 0xda26, 0xda5e, 0xdc58, 0xdf1b, 0xe1b3, 0xe414, 0xe698, 0xea28, 0xee9d, 0xf065, 0xf11f, 0xf172, 0xee5f, 
	0xe8d1, 0xe274, 0xdd4a, 0xdb51, 0xcbb8, 0xcc75, 0xcee3, 0xd2e9, 0xd773, 0xdbc5, 0xdf8a, 0xe274, 0xe473, 0xe467, 0xe29f, 0xe0c5, 
	0xdef2, 0xdc35, 0xd98c, 0xd7f3, 0xd6a2, 0xd501, 0xd29d, 0xcf35, 0xcb60, 0xc7fa, 0xc5ea, 0xc609, 0xc7e4, 0xca24, 0xcc3d, 0xce11, 
	0xd015, 0xd37e, 0xd92b, 0xdfff, 0xe36c, 0xdec4, 0xd70f, 0xd08c, 0xcca2, 0xcb62, 0x1ca5, 0x1bea, 0x1983, 0x159e, 0x1179, 0x0ddf, 
	0x0b0e, 0x0919, 0x07de, 0x07e4, 0x08fd, 0x0a34, 0x0b7a, 0x0d88, 0x0fae, 0x1109, 0x1232, 0x13aa, 0x15e6, 0x1932, 0x1cfc, 0x2054, 
	0x224e, 0x2231, 0x2069, 0x1e35, 0x1c21, 0x1a51, 0x1856, 0x1512, 0x0fff, 0x0abc, 0x087d, 0x0b9c, 0x11d1, 0x17e2, 0x1bbc, 0x1cfa, 
	0x2548, 0x24fd, 0x23ef, 0x21e3, 0x1f37, 0x1c65, 0x19c3, 0x17a4, 0x1626, 0x162f, 0x1784, 0x18e0, 0x1a2f, 0x1c19, 0x1de0, 0x1ee6, 
	0x1fb8, 0x20b2, 0x220c, 0x23c8, 0x2569, 0x2685, 0x2704, 0x26fe, 0x268b, 0x25da, 0x2514, 0x244e, 0x235c, 0x2190, 0x1e1f, 0x196e, 
	0x16eb, 0x1a50, 0x1f75, 0x2321, 0x24eb, 0x2568, 0x4218, 0x4412, 0x47c3, 0x49c3, 0x49c3, 0x49c3, 0x49c3, 0x49c3, 0x49c3, 0x4946, 
	0x47e2, 0x45b1, 0x42ca, 0x3f46, 0x3b4b, 0x3746, 0x33be, 0x3139, 0x3043, 0x3222, 0x36a3, 0x3c0e, 0x4096, 0x427a, 0x4125, 0x3e08, 
	0x3a6a, 0x376e, 0x3630, 0x3785, 0x3a6c, 0x3d70, 0x3f46, 0x3ff1, 0x405a, 0x4092, 0x40aa, 0x40af, 0x0346, 0x01f0, 0xff7c, 0xfe33, 
	0xfe33, 0xfe33, 0xfe33, 0xfe33, 0xfe33, 0xfe4c, 0xfe91, 0xfef9, 0xff77, 0x0001, 0x0087, 0x00fe, 0x015b, 0x0194, 0x01a1, 0x0138, 
	0x005f, 0xff87, 0xfef8, 0xfec7, 0x004d, 0x040b, 0x08a6, 0x0c92, 0x0e37, 0x0c05, 0x0722, 0x0239, 0x0001, 0x0072, 0x017e, 0x02be, 
	0x03cb, 0x043b, 0x009b, 0x0060, 0xffc7, 0xff5e, 0xff5e, 0xff5e, 0xff5e, 0xff5e, 0xff5e, 0xff6d, 0xff92, 0xffbe, 0xffe2, 0xffef, 
	0xffe6, 0xffcc, 0xffa4, 0xff73, 0xff3e, 0xfeb2, 0xfd9b, 0xfc44, 0xfb18, 0xfa98, 0xfb43, 0xfcaa, 0xfdfb, 0xfec8, 0xff07, 0xff5f, 
	0xffdb, 0xfffe, 0xffef, 0x0004, 0x0036, 0x0072, 0x00a5, 0x00ba, 0xffb0, 0xffb0, 0xffb0, 0xffb0, 0xffb0, 0xffb0, 0xffb0, 0xffb0, 
	0xffb0, 0xffc1, 0xffe8, 0x0017, 0x003e, 0x004f, 0x004f, 0x004f, 0x004f, 0x004f, 0x004f, 0x004f, 0x004f, 0x004f, 0x004f, 0x004f, 
	0x004f, 0x004f, 0x004f, 0x004f, 0x004f, 0x0036, 0xffff, 0xffc9, 0xffb0, 0xffb0, 0xffb0, 0xffb0, 0xffb0, 0xffb0, 0xffb1, 0xffb1, 
	0xffb1, 0xffb1, 0xffb1, 0xffb1, 0xffb1, 0xffb1, 0xffb1, 0xffc1, 0xffe8, 0x0017, 0x003e, 0x004e, 0x004e, 0x004e, 0x004e, 0x004e, 
	0x004e, 0x004e, 0x004e, 0x004e, 0x004e, 0x004e, 0x004e, 0x004e, 0x004e, 0x004e, 0x004e, 0x0035, 0xffff, 0xffca, 0xffb1, 0xffb1, 
	0xffb1, 0xffb1, 0xffb1, 0xffb1, 0x12d8, 0x13b7, 0x1556, 0x1636, 0x1636, 0x1636, 0x1636, 0x1636, 0x1636, 0x15bc, 0x149e, 0x134d, 
	0x1236, 0x11c2, 0x11c3, 0x11c9, 0x11db, 0x11fe, 0x1238, 0x12d0, 0x13d3, 0x14f0, 0x15d7, 0x1636, 0x1636, 0x1636, 0x1636, 0x1636, 
	0x1636, 0x157f, 0x13f5, 0x1271, 0x11c2, 0x11ce, 0x11ec, 0x120f, 0x122c, 0x1238, 0x0503, 0x0501, 0x04fc, 0x04f8, 0x04f8, 0x04f8, 
	0x04f8, 0x04f8, 0x04f8, 0x03f1, 0x0178, 0xfe81, 0xfc05, 0xfafb, 0xfafa, 0xfafa, 0xfafa, 0xfafb, 0xfafb, 0xfafc, 0xfafe, 0xfb02, 
	0xfb05, 0xfb07, 0xfb07, 0xfb07, 0xfb07, 0xfb07, 0xfb07, 0xfc93, 0x0002, 0x0374, 0x0504, 0x0505, 0x0505, 0x0505, 0x0504, 0x0504, 
	0x0052, 0x006b, 0x0099, 0x00b2, 0x00b2, 0x00b2, 0x00b2, 0x00b2, 0x00b2, 0x008d, 0x0042, 0xfffd, 0xffd8, 0xffcd, 0xffcc, 0xffcc, 
	0xffca, 0xffc6, 0xffbf, 0xffae, 0xff91, 0xff71, 0xff58, 0xff4d, 0xff4d, 0xff4d, 0xff4d, 0xff4d, 0xff4d, 0xff83, 0xffe2, 0x0021, 
	0x0032, 0x0034, 0x0037, 0x003b, 0x003e, 0x0040, 0x0212, 0x0212, 0x0212, 0x0212, 0x0212, 0x0212, 0x0212, 0x0212, 0x0212, 0x0211, 
	0x0210, 0x0210, 0x0211, 0x0212, 0x0212, 0x0212, 0x0212, 0x0212, 0x0212, 0x0212, 0x0212, 0x0212, 0x0212, 0x0212, 0x0212, 0x0212, 
	0x0212, 0x0212, 0x0212, 0x0211, 0x0210, 0x0211, 0x0212, 0x0212, 0x0212, 0x0212, 0x0212, 0x0212, 0x0053, 0x0053, 0x0053, 0x0053, 
	0x0053, 0x0053, 0x0053, 0x0053, 0x0053, 0x0042, 0x0019, 0xffe6, 0xffbd, 0xffac, 0xffac, 0xffac, 0xffac, 0xffac, 0xffac, 0xffac, 
	0xffac, 0xffac, 0xffac, 0xffac, 0xffac, 0xffac, 0xffac, 0xffac, 0xffac, 0xffc6, 0x0000, 0x0039, 0x0053, 0x0053, 0x0053, 0x0053, 
	0x0053, 0x0053, 0x013f, 0x013f, 0x013f, 0x013f, 0x013f, 0x013f, 0x013f, 0x013f, 0x013f, 0x00fd, 0x005f, 0xffa0, 0xff02, 0xfec0, 
	0xfec0, 0xfec0, 0xfec0, 0xfec0, 0xfec0, 0xfec0, 0xfec0, 0xfec0, 0xfec0, 0xfec0, 0xfec0, 0xfec0, 0xfec0, 0xfec0, 0xfec0, 0xff23, 
	0xffff, 0x00dc, 0x013f, 0x013f, 0x013f, 0x013f, 0x013f, 0x013f, 0xf809, 0xf809, 0xf809, 0xf809, 0xf809, 0xf809, 0xf809, 0xf809, 
	0xf809, 0xf7fe, 0xf7ef, 0xf7ef, 0xf7fe, 0xf809, 0xf809, 0xf809, 0xf809, 0xf809, 0xf809, 0xf809, 0xf809, 0xf809, 0xf809, 0xf809, 
	0xf809, 0xf809, 0xf809, 0xf809, 0xf809, 0xf7fa, 0xf7ed, 0xf7fa, 0xf809, 0xf809, 0xf809, 0xf809, 0xf809, 0xf809, 0xfd69, 0xfd69, 
	0xfd69, 0xfd69, 0xfd69, 0xfd69, 0xfd69, 0xfd69, 0xfd69, 0xfdf2, 0xff3b, 0x00c4, 0x020d, 0x0296, 0x0296, 0x0296, 0x0296, 0x0296, 
	0x0296, 0x0296, 0x0296, 0x0296, 0x0296, 0x0296, 0x0296, 0x0296, 0x0296, 0x0296, 0x0296, 0x01c8, 0xffff, 0xfe37, 0xfd69, 0xfd69, 
	0xfd69, 0xfd69, 0xfd69, 0xfd69, 0xfc94, 0xfc94, 0xfc94, 0xfc94, 0xfc94, 0xfc94, 0xfc94, 0xfc94, 0xfc94, 0xfd4a, 0xfefc, 0x0103, 
	0x02b5, 0x036b, 0x036b, 0x036b, 0x036b, 0x036b, 0x036b, 0x036b, 0x036b, 0x036b, 0x036b, 0x036b, 0x036b, 0x036b, 0x036b, 0x036b, 
	0x036b, 0x0259, 0x0000, 0xfda6, 0xfc94, 0xfc94, 0xfc94, 0xfc94, 0xfc94, 0xfc94, 0x6700, 0x66fd, 0x66c6, 0x6643, 0x654d, 0x63e1, 
	0x6265, 0x613e, 0x60c7, 0x6284, 0x673c, 0x6e1f, 0x756c, 0x7a46, 0xfc21, 0xfcd1, 0xfccd, 0xfc84, 0xfc5f, 0xfb16, 0x77aa, 0x72ff, 
	0x6e42, 0x6acd, 0x698f, 0x69f9, 0x6b45, 0x6caf, 0x6d5a, 0x6977, 0x62f8, 0x5e4d, 0x5f1d, 0x630f, 0x6556, 0x667a, 0x66e1, 0x66ee, 
	0x1fae, 0x2090, 0x2240, 0x235a, 0x2384, 0x2354, 0x22f1, 0x228d, 0x225e, 0x2384, 0x260b, 0x288c, 0x2a0b, 0x2a4d, 0x55f9, 0x5629, 
	0x563f, 0x5638, 0x5614, 0x55aa, 0x2af8, 0x2b80, 0x2bc0, 0x2bc5, 0x2c06, 0x2cb4, 0x2d85, 0x2e33, 0x2e7a, 0x2b76, 0x247d, 0x1d42, 
	0x1b56, 0x1d3c, 0x1e3c, 0x1ec1, 0x1efb, 0x1f09, 0x0c51, 0x0c10, 0x0b3c, 0x09f7, 0x086c, 0x06ae, 0x0513, 0x03ec, 0x037b, 0x04d1, 
	0x0895, 0x0e56, 0x14b3, 0x1939, 0x9b35, 0x9c08, 0x9c24, 0x9bf3, 0x9bdb, 0x9aba, 0x17a4, 0x1360, 0x0ef7, 0x0b8f, 0x09f5, 0x09bc, 
	0x0a53, 0x0b2a, 0x0b99, 0x0915, 0x0589, 0x03c1, 0x056c, 0x08db, 0x0aec, 0x0bf9, 0x0c5b, 0x0c67, 0xea6d, 0xe9c9, 0xe8b0, 0xe82c, 
	0xe86d, 0xe8f2, 0xe993, 0xea1d, 0xea58, 0xea11, 0xe96d, 0xe8ae, 0xe7f5, 0xe747, 0xe6d0, 0xe6a4, 0xe6a1, 0xe6a9, 0xe69f, 0xe6bd, 
	0xe739, 0xe7f2, 0xe8bf, 0xe971, 0xe9a3, 0xe947, 0xe8b1, 0xe829, 0xe7ef, 0xe937, 0xec91, 0xf08d, 0xf06f, 0xed90, 0xec0c, 0xeb4a, 
	0xeafd, 0xeaed, 0x0864, 0x08f6, 0x0a02, 0x0a87, 0x0a45, 0x09c1, 0x0929, 0x08ab, 0x0876, 0x08b6, 0x094c, 0x0a04, 0x0ac0, 0x0b7b, 
	0x0bff, 0x0c31, 0x0c35, 0x0c2b, 0x0c37, 0x0c15, 0x0b8a, 0x0ac4, 0x09f4, 0x0948, 0x091a, 0x0970, 0x0a01, 0x0a8a, 0x0ac7, 0x097f, 
	0x06a7, 0x0410, 0x0421, 0x05ef, 0x070d, 0x07a8, 0x07e9, 0x07f6, 0x1db5, 0x1eb0, 0x2069, 0x213b, 0x20d3, 0x2000, 0x1f05, 0x1e30, 
	0x1dd5, 0x1e42, 0x1f40, 0x206b, 0x2193, 0x22b0, 0x2374, 0x23be, 0x23c3, 0x23b5, 0x23c6, 0x2394, 0x22c6, 0x2199, 0x2051, 0x1f39, 
	0x1eec, 0x1f7b, 0x2067, 0x2140, 0x219e, 0x1f95, 0x1a7f, 0x14c7, 0x14f2, 0x190c, 0x1b45, 0x1c66, 0x1cdb, 0x1cf3, 0x154d, 0x14e4, 
	0x140e, 0x135a, 0x130c, 0x12fd, 0x1318, 0x1341, 0x1357, 0x136c, 0x13a7, 0x13ff, 0x1457, 0x1481, 0x148f, 0x14a4, 0x14ba, 0x14c9, 
	0x14c9, 0x14d3, 0x14f6, 0x1522, 0x1547, 0x154d, 0x1507, 0x1477, 0x13cf, 0x1344, 0x130b, 0x13db, 0x15cb, 0x17e6, 0x17f4, 0x16b4, 
	0x160f, 0x15bf, 0x159f, 0x1599, 0x9018, 0x9049, 0x90cb, 0x918f, 0x9267, 0x9324, 0x93b7, 0x9416, 0x9437, 0x93c9, 0x92b8, 0x915c, 
	0x9008, 0x8f06, 0x8e6f, 0x8e1b, 0x8df6, 0x8dea, 0x8de4, 0x8e05, 0x8e68, 0x8ef9, 0x8fa8, 0x9065, 0x9112, 0x919c, 0x9202, 0x9241, 
	0x9257, 0x9275, 0x9297, 0x9270, 0x91b8, 0x90de, 0x905d, 0x901a, 0x9000, 0x8ffc, 0x0395, 0x038e, 0x03a5, 0x03ff, 0x0479, 0x04e8, 
	0x0542, 0x057e, 0x0594, 0x0592, 0x058d, 0x0584, 0x0569, 0x051f, 0x04cc, 0x049e, 0x0489, 0x0483, 0x047f, 0x048f, 0x04c5, 0x0517, 
	0x057d, 0x05eb, 0x0649, 0x0690, 0x06c8, 0x06f1, 0x0702, 0x0695, 0x0610, 0x060a, 0x057f, 0x0488, 0x0403, 0x03c0, 0x03a6, 0x03a1, 
	0x145f, 0x1488, 0x1514, 0x15ea, 0x168c, 0x16e0, 0x1701, 0x1703, 0x16fd, 0x172e, 0x17cc, 0x18ed, 0x1a66, 0x1ba2, 0x1d14, 0x1ec6, 
	0x1fbc, 0x2010, 0x200e, 0x1fa8, 0x1ed7, 0x1deb, 0x1d1d, 0x1c87, 0x1c26, 0x1bf3, 0x1be5, 0x1be8, 0x1bed, 0x1a14, 0x1649, 0x1313, 
	0x125d, 0x1345, 0x13dd, 0x142b, 0x1445, 0x1447, 0xfce0, 0xfde6, 0x0001, 0x01ba, 0x02ab, 0x0365, 0x03ed, 0x0440, 0x045d, 0x0313, 
	0x0009, 0xfc7d, 0xf992, 0xf823, 0xf7ee, 0xf817, 0xf84c, 0xf873, 0xf898, 0xf8f4, 0xf9a6, 0xfa8d, 0xfb7d, 0xfc32, 0xfcb9, 0xfd42, 
	0xfdba, 0xfe0e, 0xfe2e, 0xfe51, 0xfe51, 0xfdd4, 0xfd05, 0xfc6f, 0xfc2f, 0xfc20, 0xfc27, 0xfc2d, 0x55ee, 0x568f, 0x5812, 0x59f2, 
	0x5bba, 0x5d3c, 0x5e61, 0x5f1a, 0x5f5a, 0x5e99, 0x5c8f, 0x5999, 0x5655, 0x53c4, 0x5216, 0x50dd, 0x5036, 0x4fff, 0x5003, 0x5084, 
	0x51b5, 0x5356, 0x552f, 0x5717, 0x58f2, 0x5aa7, 0x5c11, 0x5d07, 0x5d62, 0x5ce3, 0x5bad, 0x5a21, 0x5875, 0x5708, 0x562a, 0x55b8, 
	0x558f, 0x5589, 0x193a, 0x19a4, 0x1a6f, 0x1b03, 0x1b6b, 0x1be9, 0x1c61, 0x1cba, 0x1cdc, 0x1ce8, 0x1cec, 0x1cb9, 0x1c38, 0x1b61, 
	0x1a03, 0x1885, 0x17a7, 0x1763, 0x1776, 0x180f, 0x1942, 0x1aab, 0x1bfe, 0x1d0f, 0x1de4, 0x1e97, 0x1f1f, 0x1f77, 0x1f96, 0x1f2f, 
	0x1e1b, 0x1c91, 0x1b0d, 0x19fe, 0x1958, 0x1908, 0x18f2, 0x18f3, 0x0ac0, 0x0b28, 0x0bf7, 0x0c95, 0x0d07, 0x0d97, 0x0e22, 0x0e8d, 
	0x0eb6, 0x0ec5, 0x0eca, 0x0e8c, 0x0df2, 0x0cfc, 0x0b88, 0x0a14, 0x094c, 0x0910, 0x0921, 0x09a9, 0x0ac8, 0x0c36, 0x0dae, 0x0ef5, 
	0x1005, 0x10f5, 0x11b4, 0x1233, 0x1261, 0x11cb, 0x104d, 0x0e5b, 0x0ca0, 0x0b83, 0x0add, 0x0a90, 0x0a7b, 0x0a7c, 0xdfe8, 0xdf53, 
	0xde31, 0xdd5a, 0xdcc2, 0xdc06, 0xdb53, 0xdacd, 0xda99, 0xda86, 0xda80, 0xdace, 0xdb91, 0xdcd1, 0xdecc, 0xe0e7, 0xe219, 0xe277, 
	0xe25d, 0xe18a, 0xdfde, 0xdddb, 0xdbe8, 0xda4b, 0xd8ff, 0xd7e2, 0xd704, 0xd673, 0xd63f, 0xd6eb, 0xd8a9, 0xdb0b, 0xdd4b, 0xded3, 
	0xdfbf, 0xe030, 0xe04e, 0xe04d, 0x42dc, 0x40a2, 0x3b58, 0x3508, 0x302a, 0x2d3c, 0x2b82, 0x2a9f, 0x2a5d, 0x2a67, 0x2abc, 0x2be6, 
	0x2e91, 0x32ad, 0x34f2, 0x354c, 0x35ac, 0x35ef, 0x3628, 0x35ca, 0x3479, 0x3290, 0x302e, 0x2d3e, 0x2a4e, 0x27f8, 0x2641, 0x252c, 
	0x24ca, 0x27d1, 0x2f53, 0x3835, 0x3e29, 0x40ce, 0x4297, 0x43a6, 0x4426, 0x4446, 0x38dc, 0x38aa, 0x3804, 0x36d6, 0x3585, 0x3489, 
	0x33e2, 0x3389, 0x336f, 0x33ff, 0x3564, 0x372f, 0x38e5, 0x39fc, 0x3a1a, 0x39c5, 0x398e, 0x3983, 0x3992, 0x39b0, 0x39ca, 0x39c1, 
	0x397d, 0x38e7, 0x3818, 0x3746, 0x368e, 0x360c, 0x35da, 0x3668, 0x376d, 0x3827, 0x3887, 0x38bf, 0x38dc, 0x38ec, 0x38f5, 0x38f8, 
	0x3906, 0x3765, 0x3374, 0x2e91, 0x2af8, 0x294a, 0x28a3, 0x2881, 0x2886, 0x286b, 0x2846, 0x2895, 0x2a04, 0x2c8b, 0x2ce1, 0x2b7e, 
	0x2aec, 0x2ae0, 0x2b22, 0x2b58, 0x2b57, 0x2b2c, 0x2ab8, 0x29af, 0x288b, 0x27e2, 0x2792, 0x2773, 0x276d, 0x2949, 0x2e0c, 0x33bd, 
	0x3718, 0x3822, 0x38fb, 0x3996, 0x39f1, 0x3a0f, };

JointIndex gthefatherWalkAnimJointIndices[40] = {
	{ 0x0000, 0x003a, 0x0000, },
	{ 0x0001, 0x0000, 0x0001, },
	{ 0x0002, 0x0060, 0x0086, },
	{ 0x00ac, 0x00d2, 0x00f8, },
	{ 0x011e, 0x0144, 0x016a, },
	{ 0x0190, 0x01b6, 0x01dc, },
	{ 0x0202, 0x0228, 0x024e, },
	{ 0x0274, 0x029a, 0x02c0, },
	{ 0x02e6, 0x030c, 0x0332, },
	{ 0x0003, 0x0358, 0x037e, },
	{ 0x03a4, 0x03ca, 0x03f0, },
	{ 0x0416, 0x043c, 0x0462, },
	{ 0x0488, 0x04ae, 0x04d4, },
	{ 0x0004, 0x0005, 0x0001, },
	{ 0x04fa, 0x0520, 0x0546, },
	{ 0x056c, 0x0592, 0x05b8, },
	{ 0x05de, 0x0604, 0x062a, },
	{ 0x0006, 0x0007, 0x0008, },
	{ 0x0009, 0x000a, 0x000b, },
	{ 0x000c, 0x000d, 0x000e, },
	{ 0x000f, 0x0010, 0x0011, },
	{ 0x0012, 0x0013, 0x0014, },
	{ 0x0015, 0x0016, 0x0017, },
	{ 0x0018, 0x0019, 0x001a, },
	{ 0x001b, 0x001c, 0x001d, },
	{ 0x001e, 0x001f, 0x0020, },
	{ 0x0021, 0x0022, 0x0023, },
	{ 0x0650, 0x0676, 0x069c, },
	{ 0x06c2, 0x06e8, 0x070e, },
	{ 0x0734, 0x075a, 0x0780, },
	{ 0x0024, 0x0025, 0x0026, },
	{ 0x0027, 0x0028, 0x0029, },
	{ 0x000c, 0x002a, 0x002b, },
	{ 0x000f, 0x002c, 0x002d, },
	{ 0x0012, 0x002e, 0x002f, },
	{ 0x0015, 0x0030, 0x0031, },
	{ 0x0018, 0x0032, 0x0033, },
	{ 0x001b, 0x0034, 0x0035, },
	{ 0x001e, 0x0036, 0x0037, },
	{ 0x0021, 0x0038, 0x0039, },
};

AnimationHeader gthefatherWalkAnim = { { 38 }, gthefatherWalkAnimFrameData, gthefatherWalkAnimJointIndices, 58 };

