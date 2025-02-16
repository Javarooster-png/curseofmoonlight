#include "ultra64.h"
#include "global.h"

s16 gzombieskelDeathAnimFrameData[2403] = {
	0x0000, 0x1f4f, 0xffff, 0x0942, 0x0ce2, 0xf99d, 0xfff5, 0xfffb, 0x000e, 0x002a, 0x004e, 0x0076, 0x00a0, 0x00cb, 0x00f3, 0x0117, 
	0x0133, 0x0145, 0x014c, 0x0106, 0x005e, 0xff95, 0xfeed, 0xfea7, 0xfea7, 0xfea7, 0xfea7, 0xfea7, 0xfea7, 0xfea8, 0xfeab, 0xfeb0, 
	0xfeb6, 0xfebb, 0xfec0, 0xfec4, 0xfec5, 0xfec5, 0xfec5, 0xfec5, 0xfec5, 0xfec5, 0xfec5, 0xfec5, 0xfec5, 0xfec5, 0xfec5, 0xfec5, 
	0xfec5, 0xfec5, 0xfec5, 0xfec5, 0xfec5, 0xfec5, 0xfec5, 0xfec5, 0xfec5, 0x0d39, 0x0d39, 0x0d39, 0x0d39, 0x0d39, 0x0d39, 0x0d39, 
	0x0d39, 0x0d39, 0x0d39, 0x0d39, 0x0d39, 0x0d39, 0x0d39, 0x0d39, 0x0d39, 0x0d39, 0x0d39, 0x0d39, 0x0d39, 0x0d39, 0x0d39, 0x0d39, 
	0x0d0d, 0x0c95, 0x0be4, 0x0b0a, 0x0a19, 0x0924, 0x083b, 0x0772, 0x06f0, 0x06bd, 0x06b9, 0x06c4, 0x06c0, 0x068c, 0x0609, 0x053e, 
	0x0457, 0x0369, 0x028a, 0x01d0, 0x0150, 0x0121, 0x0121, 0x0121, 0x0121, 0x0121, 0x0121, 0x0121, 0xffb8, 0xffab, 0xff86, 0xff4f, 
	0xff09, 0xfeba, 0xfe66, 0xfe12, 0xfdc3, 0xfd7d, 0xfd45, 0xfd20, 0xfd13, 0xfd54, 0xfded, 0xfea5, 0xff3f, 0xff7f, 0xff7f, 0xff7f, 
	0xff7f, 0xff7f, 0xff7f, 0xff7c, 0xff73, 0xff69, 0xff61, 0xff5e, 0xff64, 0xff77, 0xff9a, 0x0041, 0x01aa, 0x0388, 0x058d, 0x076b, 
	0x08d5, 0x097c, 0x099c, 0x09a9, 0x09a7, 0x099c, 0x098e, 0x0981, 0x097c, 0x097c, 0x097c, 0x097c, 0x097c, 0x097c, 0x097c, 0xf640, 
	0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 
	0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 
	0xf640, 0xf640, 0xf640, 0xf640, 0xf640, 0xf91f, 0x00ce, 0x0bcd, 0x1807, 0x2306, 0x2ab5, 0x2d93, 0x2d93, 0x2d93, 0x2d93, 0x2d93, 
	0x2d93, 0x2d93, 0x10e4, 0x11e1, 0x1470, 0x17f3, 0x1bc8, 0x1f4b, 0x21d9, 0x22d6, 0x22d6, 0x22d6, 0x22d6, 0x22d6, 0x22d6, 0x22d6, 
	0x22d6, 0x22d6, 0x22d6, 0x22d6, 0x22be, 0x227a, 0x220b, 0x2177, 0x20c0, 0x1fe9, 0x1ef7, 0x1ded, 0x1cce, 0x1b9e, 0x1a60, 0x191a, 
	0x17cd, 0x167e, 0x1531, 0x13ea, 0x12ad, 0x117d, 0x105e, 0x0f54, 0x0e61, 0x0d8b, 0x0cd4, 0x0c40, 0x0bd1, 0x0b8d, 0x0b75, 0x0b75, 
	0x0b75, 0x0b75, 0x0b75, 0x0b75, 0x0b75, 0x2477, 0x246f, 0x2456, 0x242e, 0x23f7, 0x23b2, 0x2360, 0x2301, 0x2296, 0x2221, 0x21a1, 
	0x2117, 0x2085, 0x1feb, 0x1f49, 0x1ea1, 0x1df4, 0x1d41, 0x1c8b, 0x1bd1, 0x1b14, 0x1a56, 0x1997, 0x18d9, 0x181b, 0x175e, 0x16a4, 
	0x15ee, 0x153b, 0x148e, 0x13e6, 0x1344, 0x12aa, 0x1217, 0x118e, 0x110e, 0x1098, 0x102e, 0x0fcf, 0x0f7d, 0x0f38, 0x0f01, 0x0ed8, 
	0x0ec0, 0x0eb7, 0x0eb7, 0x0eb7, 0x0eb7, 0x0eb7, 0x0eb7, 0x0eb7, 0xffff, 0x0000, 0x0001, 0x0001, 0x0002, 0x0003, 0x0005, 0x0006, 
	0x0008, 0x000a, 0x000c, 0x000f, 0x0011, 0x0013, 0x0016, 0x0018, 0x001b, 0x001d, 0x0020, 0x0022, 0x0025, 0x0027, 0x0029, 0x002c, 
	0x002e, 0x0030, 0x0032, 0x0033, 0x0035, 0x0037, 0x0038, 0x0039, 0x003b, 0x003c, 0x003d, 0x003e, 0x003e, 0x003f, 0x003f, 0x0040, 
	0x0040, 0x0041, 0x0041, 0x0041, 0x0041, 0x0041, 0x0041, 0x0041, 0x0041, 0x0041, 0x0041, 0x0000, 0xffff, 0xfffe, 0xfffe, 0xfffc, 
	0xfffb, 0xfff9, 0xfff7, 0xfff5, 0xfff3, 0xfff0, 0xffed, 0xffea, 0xffe7, 0xffe3, 0xffe0, 0xffdc, 0xffd8, 0xffd3, 0xffcf, 0xffcb, 
	0xffc6, 0xffc2, 0xffbd, 0xffb9, 0xffb4, 0xffaf, 0xffab, 0xffa6, 0xffa2, 0xff9e, 0xff9a, 0xff96, 0xff92, 0xff8f, 0xff8b, 0xff88, 
	0xff86, 0xff83, 0xff81, 0xff7f, 0xff7e, 0xff7d, 0xff7c, 0xff7c, 0xff7c, 0xff7c, 0xff7c, 0xff7c, 0xff7c, 0xff7c, 0x37c1, 0x37c0, 
	0x37bf, 0x37bb, 0x37b5, 0x37ac, 0x37a0, 0x378f, 0x3779, 0x375e, 0x373c, 0x3714, 0x36e5, 0x36ae, 0x366e, 0x3625, 0x35d2, 0x3575, 
	0x350c, 0x3498, 0x3418, 0x338a, 0x32ee, 0x3244, 0x318b, 0x30c1, 0x2fe7, 0x2efb, 0x2dfd, 0x2ceb, 0x2bc6, 0x2a8c, 0x293c, 0x27d7, 
	0x265a, 0x24c6, 0x231a, 0x2155, 0x1f77, 0x1d7f, 0x1b6e, 0x1944, 0x1700, 0x14a4, 0x1230, 0x0380, 0xf606, 0x0127, 0x0c46, 0x0c46, 
	0x0c46, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xfffe, 0xfffe, 0xfffe, 0xfffd, 0xfffd, 0xfffc, 0xfffc, 0xfffb, 
	0xfffa, 0xfff9, 0xfff8, 0xfff6, 0xfff5, 0xfff3, 0xfff1, 0xffef, 0xffec, 0xffea, 0xffe7, 0xffe4, 0xffe1, 0xffdd, 0xffd9, 0xffd5, 
	0xffd1, 0xffcc, 0xffc8, 0xffc2, 0xffbd, 0xffb7, 0xffb2, 0xffac, 0xffa5, 0xff9f, 0xff98, 0xff92, 0xff8c, 0xff85, 0xff69, 0xff5e, 
	0xff66, 0xff78, 0xff78, 0xff78, 0x0000, 0x0000, 0x0000, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xfffe, 0xffff, 0xffff, 0xffff, 0x0000, 
	0x0001, 0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0007, 0x0009, 0x000b, 0x000e, 0x0011, 0x0014, 0x0018, 0x001d, 0x0022, 0x0028, 
	0x002e, 0x005a, 0x0089, 0x0062, 0x003f, 0x003f, 0x003f, 0x1866, 0x1866, 0x1866, 0x1866, 0x1866, 0x1866, 0x1866, 0x1866, 0x1866, 
	0x1866, 0x1866, 0x1866, 0x1866, 0x1866, 0x1866, 0x1866, 0x1866, 0x1866, 0x1866, 0x1866, 0x1866, 0x1866, 0x1866, 0x1866, 0x1866, 
	0x17b5, 0x15bd, 0x12a1, 0x0e82, 0x0988, 0x03e3, 0xfdcf, 0xf794, 0xf17b, 0xebcb, 0xe6c4, 0xe296, 0xdf6c, 0xdd68, 0xdcad, 0xdf0f, 
	0xe535, 0xed4c, 0xf4ae, 0xf813, 0xf791, 0xf5e1, 0xf3b5, 0xf1d0, 0xf100, 0xf100, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0004, 0x0013, 0x002d, 0x0053, 0x0087, 0x00c6, 0x010c, 0x0152, 0x0191, 0x01c3, 0x01e5, 0x01f7, 0x01fc, 
	0x01fc, 0x0201, 0x0009, 0xfb79, 0xf696, 0xf31b, 0xf178, 0xf08a, 0xef6e, 0xee65, 0xeda8, 0xed60, 0xed60, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0004, 0x000c, 0x0015, 0x0019, 0x0011, 0xfff5, 0xffc1, 0xff6f, 0xfefd, 0xfe6c, 
	0xfdbd, 0xfcf3, 0xfc0d, 0xfb0a, 0xf9e2, 0xf7d7, 0xf42f, 0xef30, 0xea49, 0xe7dd, 0xe7e3, 0xe887, 0xe97b, 0xea60, 0xeac6, 0xeac6, 
	0x1a58, 0x1bf8, 0x2012, 0x2589, 0x2b89, 0x3199, 0x3745, 0x3bfe, 0x3dd3, 0x3bd3, 0x39fc, 0x39ab, 0x383a, 0x378c, 0x3658, 0x34b3, 
	0x3312, 0x3205, 0x3175, 0x30fc, 0x3099, 0x3047, 0x2ff3, 0x2f97, 0x2f30, 0x2eac, 0x2dfd, 0x2d1b, 0x2bff, 0x2aa5, 0x290a, 0x299b, 
	0x29d3, 0x2a27, 0x2b38, 0x2d6b, 0x30b9, 0x34c2, 0x397e, 0x4037, 0x4a9d, 0xda1f, 0xda9b, 0xee44, 0xc1df, 0xd41c, 0xdb10, 0x3129, 
	0xf967, 0x0a11, 0xf967, 0x053f, 0x0515, 0x04a6, 0x040e, 0x0368, 0x02c6, 0x0235, 0x01c3, 0x01ee, 0x030c, 0x03fc, 0x0467, 0x0518, 
	0x0463, 0x0242, 0xffbc, 0xfdc9, 0xfd40, 0xfdf9, 0xff3c, 0x00f3, 0x02f8, 0x051b, 0x0732, 0x0930, 0x0b0c, 0x0cc0, 0x0e49, 0x0fa5, 
	0x10d4, 0x11d1, 0x12b1, 0x131e, 0x13da, 0x1491, 0x14be, 0x13b1, 0x10e5, 0x0c46, 0x05b6, 0xfd27, 0x8def, 0x9a14, 0xb32f, 0xc6d3, 
	0xcbbe, 0xd1a8, 0xba5f, 0xb31c, 0xb8aa, 0xb31c, 0x873f, 0x8770, 0x87e0, 0x8858, 0x88b7, 0x88f8, 0x891d, 0x892f, 0x8947, 0x8980, 
	0x89eb, 0x8a97, 0x8b5e, 0x8d21, 0x8fb2, 0x9213, 0x93c1, 0x9472, 0x948d, 0x94a4, 0x94b9, 0x94c8, 0x94cf, 0x94cc, 0x94b5, 0x947d, 
	0x941d, 0x9396, 0x92ec, 0x9229, 0x9159, 0x9104, 0x91c2, 0x932a, 0x9561, 0x985e, 0x9ba9, 0x9e75, 0x9fcf, 0x9f80, 0x9e05, 0x1ac4, 
	0x18a8, 0x0a62, 0x3814, 0x251b, 0x1d68, 0xc91b, 0x023e, 0xf0df, 0x023e, 0x15c4, 0x152c, 0x13ed, 0x12d0, 0x120d, 0x110e, 0x0ee9, 
	0x0ac6, 0x0709, 0x06e3, 0x04d0, 0x0049, 0x0049, 0x0049, 0x0049, 0x004a, 0x004a, 0x004a, 0x004a, 0x004a, 0x004a, 0x004a, 0x004b, 
	0x004b, 0x004c, 0x004c, 0x004c, 0x004c, 0x004c, 0x004c, 0x004c, 0x004a, 0x004a, 0x004a, 0x004b, 0x004b, 0x004c, 0x004d, 0x004d, 
	0x004d, 0x004b, 0x004a, 0x1e33, 0x1cf1, 0x179f, 0x16d3, 0x159b, 0x17db, 0x17d3, 0x181c, 0x17d3, 0x07a1, 0x07cc, 0x0824, 0x086e, 
	0x089e, 0x08da, 0x094f, 0x0a05, 0x0a76, 0x0a7a, 0x0aa3, 0x0aca, 0x0aca, 0x0aca, 0x0aca, 0x0aca, 0x0aca, 0x0aca, 0x0aca, 0x0aca, 
	0x0aca, 0x0aca, 0x0aca, 0x0aca, 0x0aca, 0x0aca, 0x0aca, 0x0aca, 0x0aca, 0x0aca, 0x0aca, 0x0aca, 0x0aca, 0x0aca, 0x0aca, 0x0aca, 
	0x0aca, 0x0aca, 0x0aca, 0x0aca, 0x0aca, 0x0aca, 0x04af, 0x052e, 0x0710, 0x074f, 0x07ac, 0x06fc, 0x06ff, 0x06e8, 0x06ff, 0x0bc6, 
	0x0b7a, 0x0ad8, 0x0a45, 0x09e0, 0x095a, 0x0837, 0x05fb, 0x03ed, 0x03d8, 0x02b0, 0x0029, 0x0029, 0x0029, 0x0029, 0x0029, 0x0029, 
	0x0029, 0x0029, 0x0029, 0x0029, 0x002a, 0x002a, 0x002a, 0x002a, 0x002a, 0x002b, 0x002b, 0x002b, 0x002b, 0x002b, 0x0029, 0x0029, 
	0x002a, 0x002a, 0x002a, 0x002a, 0x002b, 0x002b, 0x002b, 0x002a, 0x0029, 0x0fcb, 0x0f3a, 0x0cb3, 0x0c4e, 0x0bb2, 0x0cd1, 0x0ccd, 
	0x0cf0, 0x0ccd, 0x1fb0, 0x218e, 0x2677, 0x2dd5, 0x35f7, 0x3a5e, 0x3d90, 0x3ec7, 0x3dca, 0x3b75, 0x38a7, 0x3632, 0x34e3, 0x354f, 
	0x36a2, 0x37a4, 0x37c6, 0x373f, 0x3667, 0x354f, 0x3406, 0x3297, 0x3110, 0x2f90, 0x2e1e, 0x2cb4, 0x2b4a, 0x29de, 0x2869, 0x26e2, 
	0x253c, 0x2371, 0x2197, 0x1fd2, 0x1e38, 0x1cd8, 0x1bc1, 0x1b07, 0x1b64, 0x1cc1, 0x1da2, 0x1c1b, 0x0568, 0xffc0, 0x0310, 0x0024, 
	0xf69e, 0xfaf4, 0x00ce, 0xfd5d, 0x00ce, 0xfbb2, 0xfc2c, 0xfd74, 0xff5f, 0x01c2, 0x045b, 0x06c9, 0x0869, 0x08ae, 0x07d7, 0x0664, 
	0x04ed, 0x040b, 0x034b, 0x01d0, 0xffc0, 0xfdd2, 0xfcf3, 0xfd24, 0xfdc6, 0xfea4, 0xff85, 0x002f, 0x007e, 0x0077, 0x0025, 0xff8f, 
	0xfec5, 0xfdd5, 0xfcd5, 0xfbdf, 0xfb7d, 0xfbd4, 0xfc62, 0xfcdf, 0xfd38, 0xfd6b, 0xfd68, 0xfe03, 0x0063, 0x0508, 0x0c75, 0x1630, 
	0x1f7f, 0x248c, 0x26ea, 0x2847, 0x26c0, 0x251b, 0x260a, 0x251b, 0x7190, 0x714e, 0x709a, 0x6f91, 0x6e45, 0x6cbe, 0x6afe, 0x6910, 
	0x6763, 0x6654, 0x65c9, 0x659c, 0x65a4, 0x67d6, 0x6cf9, 0x72f6, 0x77bf, 0x79b1, 0x7995, 0x7939, 0x78b1, 0x7819, 0x7792, 0x7712, 
	0x7675, 0x75be, 0x74fb, 0x743e, 0x739d, 0x7335, 0x731e, 0x7402, 0x75c0, 0x7771, 0x78ae, 0x795c, 0x796e, 0x78c2, 0x7711, 0x746f, 
	0x7117, 0x6d21, 0x6894, 0x634b, 0x5e42, 0x58b5, 0x548e, 0x5932, 0x5d1a, 0x5aff, 0x5d1a, 0x1ec5, 0x1cf9, 0x17c0, 0x0d7f, 0x00a3, 
	0x00a3, 0x00a3, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x00a4, 0x008e, 0x008f, 0x008f, 
	0x008f, 0x0090, 0x0091, 0x0092, 0x0092, 0x0093, 0x0093, 0x0093, 0x0093, 0x0093, 0x0093, 0x0094, 0x0094, 0x0095, 0x0095, 0x0095, 
	0x0095, 0x0094, 0x0093, 0x0090, 0x00a3, 0x2ec4, 0x2d9b, 0x1c54, 0x0d69, 0x1832, 0x1db9, 0x1d85, 0x1e37, 0x1d85, 0x26a9, 0x276b, 
	0x293a, 0x2b6f, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 
	0x2c62, 0x2c62, 0x2c62, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 
	0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x2c61, 0x1b3c, 0x1c6f, 0x27ac, 0x2b73, 0x2917, 0x271c, 0x2732, 0x26e7, 
	0x2732, 0x1a86, 0x190f, 0x14b5, 0x0be2, 0x0090, 0x0090, 0x0090, 0x0091, 0x0091, 0x0091, 0x0091, 0x0091, 0x0091, 0x0091, 0x0091, 
	0x0091, 0x0091, 0x0091, 0x007e, 0x007e, 0x007e, 0x007f, 0x007f, 0x0080, 0x0081, 0x0081, 0x0082, 0x0082, 0x0082, 0x0082, 0x0082, 
	0x0082, 0x0083, 0x0083, 0x0083, 0x0084, 0x0084, 0x0084, 0x0083, 0x0082, 0x007f, 0x0090, 0x2634, 0x257a, 0x1888, 0x0bcf, 0x1516, 
	0x19ac, 0x1982, 0x1a13, 0x1982, 0xfc28, 0xfc38, 0xfc66, 0xfcb2, 0xfd18, 0xfd99, 0xfe32, 0xfee2, 0xffa7, 0x0081, 0x016d, 0x0269, 
	0x0374, 0x048d, 0x05b1, 0x06de, 0x0813, 0x094d, 0x0a8a, 0x0bc9, 0x0d07, 0x0e42, 0x0f78, 0x10a6, 0x11cc, 0x12e6, 0x13f3, 0x14f1, 
	0x15df, 0x16ba, 0x1782, 0x1833, 0x18ce, 0x1951, 0x19b9, 0x1a06, 0x1a35, 0x1a46, 0x1a45, 0x1a43, 0x1a3f, 0x1a3b, 0x1a38, 0x1a35, 
	0x1a34, 0x1a34, 0x1a34, 0x1a34, 0x1a34, 0x1a34, 0x1a34, 0x0ab0, 0x0aac, 0x0aa2, 0x0a91, 0x0a7a, 0x0a5d, 0x0a3d, 0x0a19, 0x09f2, 
	0x09ca, 0x09a0, 0x0977, 0x094e, 0x0927, 0x0902, 0x08e1, 0x08c2, 0x08a9, 0x0893, 0x0883, 0x0877, 0x0870, 0x086e, 0x0870, 0x0876, 
	0x0880, 0x088c, 0x089b, 0x08ac, 0x08bd, 0x08ce, 0x08de, 0x08ed, 0x08f9, 0x0903, 0x0908, 0x090a, 0x0907, 0x0901, 0x08fa, 0x08f3, 
	0x08ed, 0x08e7, 0x08e3, 0x08e2, 0x08e2, 0x08e2, 0x08e2, 0x08e2, 0x08e2, 0x08e2, 0x0061, 0x0059, 0x0043, 0x001e, 0xffeb, 0xffac, 
	0xff61, 0xff0a, 0xfea8, 0xfe3c, 0xfdc5, 0xfd46, 0xfcbe, 0xfc2e, 0xfb98, 0xfafd, 0xfa5c, 0xf9b9, 0xf913, 0xf86c, 0xf7c5, 0xf71f, 
	0xf67c, 0xf5dd, 0xf542, 0xf4ae, 0xf421, 0xf39c, 0xf31f, 0xf2ad, 0xf245, 0xf1e8, 0xf197, 0xf154, 0xf11d, 0xf0f5, 0xf0dc, 0xf0d2, 
	0xf0d6, 0xf0e0, 0xf0ef, 0xf0ff, 0xf10f, 0xf11a, 0xf11e, 0xf11e, 0xf11e, 0xf11e, 0xf11e, 0xf11e, 0xf11e, 0x17a8, 0x19f3, 0x200f, 
	0x2833, 0x3024, 0x3674, 0x3aed, 0x3dea, 0x3fd4, 0x40fc, 0x4194, 0x41bb, 0x417d, 0x3ea6, 0x3750, 0x291b, 0x12c0, 0x0524, 0x02cc, 
	0xfffb, 0xfcb1, 0x78f3, 0x74d1, 0x0476, 0x2505, 0x31f6, 0x368a, 0x388c, 0x3996, 0x3a3b, 0x3abf, 0x3ba1, 0x3e30, 0x3899, 0xbd35, 
	0xbf1e, 0xc096, 0xc141, 0xc40c, 0xcb31, 0xd4a6, 0xdecc, 0xe79d, 0xed86, 0xefad, 0xefad, 0xefad, 0xefad, 0xefad, 0xefad, 0xefad, 
	0x3c2e, 0x3c30, 0x3c26, 0x3bf0, 0x3b7f, 0x3ae2, 0x3a33, 0x398b, 0x38fc, 0x388f, 0x3848, 0x3828, 0x3832, 0x38a2, 0x39c5, 0x3b52, 
	0x3c40, 0x3c6a, 0x3ca8, 0x3cde, 0x3d0c, 0x42cf, 0x42b5, 0x3d87, 0x3c2f, 0x392c, 0x35d8, 0x32c6, 0x3046, 0x2e98, 0x2ded, 0x3118, 
	0x3956, 0x4420, 0x308d, 0x2586, 0x1bbe, 0x1692, 0x16d9, 0x1761, 0x1749, 0x1673, 0x1504, 0x139c, 0x1300, 0x1300, 0x1300, 0x1300, 
	0x1300, 0x1300, 0x1300, 0x99d9, 0x9c03, 0xa1c5, 0xa965, 0xb0b9, 0xb660, 0xba2e, 0xbc87, 0xbdde, 0xbe88, 0xbebf, 0xbea9, 0xbe59, 
	0xbc83, 0xb78a, 0xac2c, 0x9828, 0x8b78, 0x890c, 0x862b, 0x82cf, 0xfeff, 0xfacf, 0x8ab6, 0xabfb, 0xb9d5, 0xbf66, 0xc267, 0xc469, 
	0xc5f7, 0xc74e, 0xc8b2, 0xcb70, 0xc606, 0x4b09, 0x4db5, 0x5092, 0x546c, 0x6002, 0x6fa2, 0x7b00, 0x834b, 0x895e, 0x8d26, 0x8e7a, 
	0x8e7a, 0x8e7a, 0x8e7a, 0x8e7a, 0x8e7a, 0x8e7a, 0x0583, 0x0584, 0x0587, 0x0589, 0x0588, 0x0582, 0x0578, 0x0569, 0x0555, 0x0541, 
	0x052e, 0x0522, 0x0520, 0x0548, 0x0584, 0x059a, 0x0584, 0x056d, 0x0569, 0x0565, 0x0560, 0x055b, 0x0555, 0x05b6, 0x068f, 0x076f, 
	0x0816, 0x0870, 0x0882, 0x085f, 0x0821, 0x0805, 0x0838, 0x087d, 0x0858, 0x075b, 0x05a6, 0x04c6, 0x0531, 0x0582, 0x05c4, 0x0608, 
	0x064f, 0x0685, 0x069b, 0x069b, 0x069b, 0x069b, 0x069b, 0x069b, 0x069b, 0x03d9, 0x03da, 0x03dc, 0x03dd, 0x03dd, 0x03d8, 0x03cf, 
	0x03c2, 0x03b3, 0x03a2, 0x0394, 0x038b, 0x0389, 0x03a8, 0x03da, 0x03ec, 0x03d9, 0x03c6, 0x03c3, 0x03bf, 0x03bb, 0x03b7, 0x03b3, 
	0x0405, 0x04e9, 0x062e, 0x07a8, 0x092b, 0x0a96, 0x0bcb, 0x0cb9, 0x0d09, 0x0c6f, 0x0ae7, 0x089d, 0x060c, 0x03f7, 0x0348, 0x0396, 
	0x03d8, 0x0412, 0x0454, 0x049e, 0x04dd, 0x04f7, 0x04f7, 0x04f7, 0x04f7, 0x04f7, 0x04f7, 0x04f7, 0xe327, 0xe320, 0xe311, 0xe305, 
	0xe30b, 0xe32c, 0xe36e, 0xe3ce, 0xe445, 0xe4c3, 0xe533, 0xe57d, 0xe58b, 0xe495, 0xe320, 0xe299, 0xe322, 0xe3b0, 0xe3ca, 0xe3e6, 
	0xe404, 0xe423, 0xe444, 0xe1e5, 0xdc04, 0xd4a1, 0xcce5, 0xc565, 0xbe81, 0xb88a, 0xb3cc, 0xb22c, 0xb54c, 0xbcf1, 0xc81e, 0xd560, 
	0xe24c, 0xe79e, 0xe524, 0xe32e, 0xe18a, 0xdfc4, 0xdddc, 0xdc4e, 0xdbae, 0xdbae, 0xdbae, 0xdbae, 0xdbae, 0xdbae, 0xdbae, 0xf791, 
	0xf763, 0xf6e9, 0xf63d, 0xf578, 0xf4af, 0xf3f2, 0xf34c, 0xf2c3, 0xf25b, 0xf217, 0xf1f8, 0xf200, 0xf2d9, 0xf4b2, 0xf6d2, 0xf87d, 
	0xf907, 0xf8d3, 0xf8a4, 0xf878, 0xf851, 0xf82c, 0xf832, 0xf875, 0xf8ca, 0xf90e, 0xf91e, 0xf8df, 0xf840, 0xf742, 0xf671, 0xf62c, 
	0xf629, 0xf665, 0xf706, 0xf800, 0xf880, 0xf9cb, 0xfcec, 0x0149, 0x0663, 0x0ae6, 0x0dd7, 0x0ee0, 0x0ee0, 0x0ee0, 0x0ee0, 0x0ee0, 
	0x0ee0, 0x0ee0, 0x0215, 0x022f, 0x0274, 0x02d7, 0x0349, 0x03bf, 0x042e, 0x0493, 0x04ea, 0x0530, 0x0566, 0x058b, 0x059e, 0x050f, 
	0x0376, 0x012e, 0xfefd, 0xfe00, 0xfdff, 0xfdfd, 0xfdfb, 0xfdf9, 0xfdf7, 0xfe38, 0xfedf, 0xffc0, 0x00c4, 0x01de, 0x0307, 0x0429, 
	0x052a, 0x05ef, 0x0694, 0x0723, 0x07b4, 0x08a1, 0x0a7c, 0x0e2e, 0x1874, 0x2462, 0x2a82, 0x2cb4, 0x2d10, 0x2cca, 0x2c99, 0x2c99, 
	0x2c99, 0x2c99, 0x2c99, 0x2c99, 0x2c99, 0x51bc, 0x519e, 0x5148, 0x50be, 0x5003, 0x4f20, 0x4e1e, 0x4d0d, 0x4c01, 0x4b11, 0x4a54, 
	0x49e6, 0x49e0, 0x4b52, 0x4e0b, 0x5079, 0x51e0, 0x525f, 0x528a, 0x52b4, 0x52dd, 0x5305, 0x532c, 0x5490, 0x5706, 0x58e0, 0x5986, 
	0x58ac, 0x562c, 0x5204, 0x4c5d, 0x46b1, 0x4148, 0x3a53, 0x313d, 0x26d8, 0x1cd2, 0x16f3, 0x1635, 0x180c, 0x1c57, 0x2214, 0x278b, 
	0x2b56, 0x2cba, 0x2cba, 0x2cba, 0x2cba, 0x2cba, 0x2cba, 0x2cba, 0x58b2, 0x552b, 0x4e8b, 0x4903, 0x452a, 0x426e, 0x4052, 0x3e84, 
	0x3cd7, 0x3b2d, 0x3973, 0x379d, 0x35a1, 0x325c, 0x2d6c, 0x2796, 0x2204, 0x1e63, 0x1c74, 0x1bae, 0x1bfe, 0x1c7e, 0x1d1b, 0x20b7, 
	0x26e0, 0x2c5a, 0x307c, 0x3377, 0x358d, 0x36e2, 0x377b, 0x35bd, 0x2d6e, 0x8e77, 0xe250, 0xd39a, 0xcdee, 0xcb88, 0xcb68, 0xcd2d, 
	0xd05f, 0xd3f4, 0xd747, 0xda28, 0xdb92, 0xdb92, 0xdb92, 0xdb92, 0xdb92, 0xdb92, 0xdb92, 0x3d2b, 0x3cd4, 0x3bd3, 0x3a44, 0x3858, 
	0x3642, 0x342f, 0x3243, 0x309d, 0x2f51, 0x2e6d, 0x2df2, 0x2ddc, 0x2dbf, 0x2d5d, 0x2d1f, 0x2d3f, 0x2dfb, 0x2f0d, 0x2faf, 0x2ffd, 
	0x3045, 0x308a, 0x2fd4, 0x2d97, 0x2a82, 0x272b, 0x2405, 0x216e, 0x1fc7, 0x1f6d, 0x2356, 0x2cb1, 0x4ac5, 0x30c1, 0x25be, 0x1ad9, 
	0x1351, 0x1158, 0x12c9, 0x16cc, 0x1c73, 0x227e, 0x2764, 0x2968, 0x2968, 0x2968, 0x2968, 0x2968, 0x2968, 0x2968, 0xd6e0, 0xd32a, 
	0xcc09, 0xc5c0, 0xc0f9, 0xbd33, 0xb9fe, 0xb716, 0xb459, 0xb1b3, 0xaf1a, 0xac8b, 0xaa05, 0xa72e, 0xa3f9, 0xa082, 0x9d00, 0x9a06, 
	0x97bb, 0x96a5, 0x96b0, 0x96f4, 0x975f, 0x9aae, 0xa04d, 0xa502, 0xa823, 0xa9e7, 0xaa97, 0xaa6b, 0xa98c, 0xa707, 0x9f3d, 0x022f, 
	0x5930, 0x4e81, 0x4d21, 0x4e9c, 0x51b1, 0x548f, 0x55ed, 0x566d, 0x5714, 0x5855, 0x5932, 0x5932, 0x5932, 0x5932, 0x5932, 0x5932, 
	0x5932, 0xfbec, 0xfbe1, 0xfbc4, 0xfb9f, 0xfb7b, 0xfb5e, 0xfb4c, 0xfb47, 0xfb50, 0xfb68, 0xfb8f, 0xfbc1, 0xfbfb, 0xfc0e, 0xfbee, 
	0xfbd5, 0xfbe5, 0xfc29, 0xfc81, 0xfca9, 0xfca6, 0xfc95, 0xfc7a, 0xfc06, 0xfb40, 0xfa8a, 0xfa10, 0xf9db, 0xf9e4, 0xfa19, 0xfa62, 
	0xfa94, 0xfa79, 0xfa18, 0xf9d8, 0xfa2d, 0xfb34, 0xfc1e, 0xfc66, 0xfcd2, 0xfd67, 0xfe07, 0xfe7c, 0xfea7, 0xfea9, 0xfea9, 0xfea9, 
	0xfea9, 0xfea9, 0xfea9, 0xfea9, 0x0153, 0x0149, 0x012e, 0x010a, 0x00e4, 0x00c4, 0x00af, 0x00a9, 0x00b4, 0x00d0, 0x00f9, 0x012b, 
	0x0160, 0x0170, 0x0154, 0x013e, 0x014d, 0x0186, 0x01c7, 0x01e2, 0x01e0, 0x01d5, 0x01c3, 0x0169, 0x00a1, 0xff8c, 0xfe53, 0xfd16, 
	0xfbee, 0xfaf2, 0xfa2d, 0xf9c9, 0xf9fe, 0xfaf4, 0xfca0, 0xfeb2, 0x0092, 0x017d, 0x01b4, 0x01fc, 0x024b, 0x028b, 0x02ae, 0x02b8, 
	0x02b9, 0x02b9, 0x02b9, 0x02b9, 0x02b9, 0x02b9, 0x02b9, 0xe271, 0xe20c, 0xe10a, 0xdfb6, 0xde5c, 0xdd3b, 0xdc83, 0xdc50, 0xdcb0, 
	0xdda3, 0xdf16, 0xe0ec, 0xe2f8, 0xe398, 0xe27e, 0xe1a6, 0xe232, 0xe47c, 0xe753, 0xe896, 0xe87e, 0xe7f9, 0xe71d, 0xe354, 0xdc0a, 
	0xd387, 0xcade, 0xc293, 0xbaf3, 0xb447, 0xaed7, 0xabed, 0xad7e, 0xb454, 0xbf8b, 0xcd6a, 0xdb8f, 0xe422, 0xe677, 0xe9d3, 0xee32, 
	0xf2ad, 0xf5d8, 0xf6fe, 0xf70a, 0xf70a, 0xf70a, 0xf70a, 0xf70a, 0xf70a, 0xf70a, 0x05f9, 0x05fd, 0x060b, 0x0629, 0x065b, 0x06a4, 
	0x0703, 0x0777, 0x07fd, 0x0892, 0x0930, 0x09d5, 0x0a7d, 0x0bde, 0x0e41, 0x10fa, 0x1330, 0x13ee, 0x139e, 0x1348, 0x12ed, 0x128c, 
	0x122a, 0x11ac, 0x10e8, 0x0fcb, 0x0e53, 0x0c73, 0x0a26, 0x0776, 0x049d, 0x0238, 0x0108, 0x0194, 0x03ba, 0x069b, 0x0931, 0x0aeb, 
	0x0c7b, 0x0de3, 0x0e69, 0x0e2a, 0x0d88, 0x0cea, 0x0ca6, 0x0ca6, 0x0ca6, 0x0ca6, 0x0ca6, 0x0ca6, 0x0ca6, 0xfaea, 0xfb09, 0xfb61, 
	0xfbee, 0xfcac, 0xfd96, 0xfea7, 0xffda, 0x0126, 0x027c, 0x03cf, 0x050c, 0x0620, 0x0661, 0x058a, 0x0423, 0x02da, 0x0282, 0x02d9, 
	0x0313, 0x0334, 0x0341, 0x033f, 0x032f, 0x033c, 0x0389, 0x0402, 0x0485, 0x04dc, 0x04c2, 0x03f4, 0x025a, 0x007c, 0xff33, 0xff38, 
	0x00d1, 0x0393, 0x067d, 0x095f, 0x0b81, 0x0bbb, 0x0a9f, 0x091d, 0x07e3, 0x0765, 0x0765, 0x0765, 0x0765, 0x0765, 0x0765, 0x0765, 
	0x50e2, 0x50d5, 0x50a5, 0x503b, 0x4f84, 0x4e75, 0x4d0c, 0x4b54, 0x495f, 0x4748, 0x452c, 0x432c, 0x416d, 0x4168, 0x4356, 0x456c, 
	0x466f, 0x45bf, 0x444b, 0x43bc, 0x43f8, 0x448c, 0x456c, 0x47bf, 0x4b18, 0x4dc5, 0x4f47, 0x4f71, 0x4e43, 0x4beb, 0x48c2, 0x4717, 
	0x4727, 0x4534, 0x3f5f, 0x369b, 0x2d13, 0x2675, 0x241e, 0x22b3, 0x218e, 0x20be, 0x209b, 0x2122, 0x218a, 0x218a, 0x218a, 0x218a, 
	0x218a, 0x218a, 0x218a, };

JointIndex gzombieskelDeathAnimJointIndices[19] = {
	{ 0x0006, 0x0039, 0x006c, },
	{ 0x009f, 0x0000, 0x0000, },
	{ 0x00d2, 0x0000, 0x0000, },
	{ 0x0105, 0x0138, 0x016b, },
	{ 0x019e, 0x01d1, 0x0204, },
	{ 0x0237, 0x026a, 0x029d, },
	{ 0x0001, 0x0002, 0x0000, },
	{ 0x02d0, 0x0303, 0x0336, },
	{ 0x0369, 0x039c, 0x03cf, },
	{ 0x0003, 0x0004, 0x0005, },
	{ 0x0402, 0x0435, 0x0468, },
	{ 0x049b, 0x04ce, 0x0501, },
	{ 0x0534, 0x0567, 0x059a, },
	{ 0x05cd, 0x0600, 0x0633, },
	{ 0x0666, 0x0699, 0x06cc, },
	{ 0x06ff, 0x0732, 0x0765, },
	{ 0x0798, 0x07cb, 0x07fe, },
	{ 0x0831, 0x0864, 0x0897, },
	{ 0x08ca, 0x08fd, 0x0930, },
};

AnimationHeader gzombieskelDeathAnim = { { 51 }, gzombieskelDeathAnimFrameData, gzombieskelDeathAnimJointIndices, 6 };

