#include "ultra64.h"
#include "global.h"

s16 gWereCit3DeathAnimFrameData[1989] = {
	0x0000, 0xffff, 0x3d0f, 0xf756, 0x1595, 0x3289, 0xe910, 0x15c1, 0x05e2, 0xfff9, 0x004f, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffe, 0xfff8, 0xfff0, 0xffe7, 0xffde, 0xffd6, 0xffd1, 0xffcf, 0xffcf, 0xffcf, 0xffcf, 
	0xffcf, 0xffcf, 0xffcf, 0xffcf, 0xffcf, 0xffcf, 0x0000, 0xffc2, 0xff3a, 0xfeb1, 0xfe73, 0xfe73, 0xfe73, 0xfe73, 0xfe73, 0xfe73, 
	0xfe73, 0xfe73, 0xfe73, 0xfe73, 0xfe73, 0xfe73, 0xfe72, 0xfe6e, 0xfe67, 0xfe5c, 0xfe4b, 0xfe34, 0xfe15, 0xfded, 0xfdbb, 0xfd7e, 
	0xfcfc, 0xfc14, 0xfaeb, 0xf9a5, 0xf868, 0xf757, 0xf699, 0xf651, 0xf651, 0xf651, 0xf651, 0xf651, 0xf651, 0xf651, 0xf651, 0xf651, 
	0xf651, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xffda, 0xff72, 0xfed1, 0xfe05, 0xfd18, 
	0xfc16, 0xfb0b, 0xfa03, 0xf909, 0xf827, 0xf766, 0xf6d0, 0xf66f, 0xf64d, 0xf64d, 0xf64d, 0xf64d, 0xfd31, 0xfa0c, 0xf318, 0xec24, 
	0xe8e7, 0xe9d9, 0xecd6, 0xf18b, 0xf797, 0xfe83, 0x05c7, 0x0cd2, 0x1326, 0x185c, 0x1c27, 0x1ee5, 0x212f, 0x2313, 0x249f, 0x25dc, 
	0x26d4, 0x278f, 0x2814, 0x286b, 0x289a, 0x28a8, 0x2754, 0x238f, 0x1d9d, 0x15c2, 0x0c58, 0x01d4, 0xf6bc, 0xeb96, 0xe045, 0xd47a, 
	0xc8db, 0xbea1, 0xb754, 0xb48a, 0xb48a, 0xb48a, 0xb48a, 0x1f3c, 0x1f07, 0x1e91, 0x1e1b, 0x1de5, 0x1e21, 0x1ec5, 0x1fb5, 0x20d9, 
	0x2217, 0x2355, 0x2479, 0x2569, 0x260c, 0x2647, 0x2647, 0x2647, 0x2647, 0x2647, 0x2647, 0x2647, 0x2647, 0x2647, 0x2647, 0x2647, 
	0x2647, 0x2647, 0x2647, 0x2647, 0x2647, 0x2647, 0x2647, 0x2647, 0x2647, 0x2665, 0x26df, 0x280d, 0x2a63, 0x2e3a, 0x32fe, 0x3c7f, 
	0x421a, 0x421a, 0x0313, 0x0316, 0x031f, 0x0327, 0x032b, 0x0327, 0x031b, 0x030a, 0x02f4, 0x02dc, 0x02c3, 0x02ab, 0x0298, 0x028a, 
	0x0285, 0x0285, 0x0285, 0x0285, 0x0285, 0x0285, 0x0285, 0x0285, 0x0285, 0x0285, 0x0285, 0x0285, 0x0285, 0x0285, 0x0285, 0x0285, 
	0x0285, 0x0285, 0x0285, 0x0285, 0x04d2, 0x0ac0, 0x12c5, 0x1b1c, 0x21f2, 0x25b4, 0x2202, 0x1d0a, 0x1d0a, 0x02f4, 0x02f0, 0x02e7, 
	0x02de, 0x02d9, 0x02de, 0x02eb, 0x02fd, 0x0312, 0x0329, 0x033f, 0x0352, 0x0362, 0x036c, 0x0370, 0x0370, 0x0370, 0x0370, 0x0370, 
	0x0370, 0x0370, 0x0370, 0x0370, 0x0370, 0x0370, 0x0370, 0x0370, 0x0370, 0x0370, 0x0370, 0x0370, 0x0370, 0x0370, 0x0370, 0x03ed, 
	0x0557, 0x07bf, 0x0b66, 0x108d, 0x169c, 0x1e83, 0x21c4, 0x21c4, 0xe62b, 0xe510, 0xe269, 0xdfb5, 0xe200, 0xeffc, 0xeeb9, 0xefcb, 
	0xf29e, 0xf694, 0xfb11, 0xff94, 0x03c0, 0x075c, 0x0a51, 0x0ce4, 0x0f78, 0x1221, 0x14fc, 0x182b, 0x1be7, 0x2084, 0x2696, 0x2f19, 
	0x3b87, 0x4cbc, 0x646a, 0x037e, 0x1784, 0x20d3, 0x2f54, 0x3534, 0x3716, 0x68c1, 0x6b76, 0x7930, 0x81ff, 0x87de, 0x8b88, 0x8cdd, 
	0x894a, 0x8b0f, 0x8cdd, 0x1f2a, 0x1f3c, 0x2077, 0x2371, 0x27f7, 0x2cdd, 0x2cd4, 0x2c70, 0x2bf5, 0x2b7c, 0x2b14, 0x2acf, 0x2ac8, 
	0x2b1c, 0x2bde, 0x2cf2, 0x2e2f, 0x2f8f, 0x310f, 0x32a8, 0x3454, 0x3608, 0x37b6, 0x3945, 0x3a89, 0x3b39, 0x3ba9, 0x450b, 0x4757, 
	0x4906, 0x55db, 0x54a6, 0x4af5, 0x3790, 0x29bc, 0x1ffe, 0x154b, 0x0b96, 0x0453, 0x0162, 0x06f2, 0x03ee, 0x0162, 0x74ed, 0x7509, 
	0x752b, 0x751b, 0x773b, 0x81b2, 0x80d0, 0x81f5, 0x8499, 0x8832, 0x8c45, 0x906c, 0x945e, 0x97ec, 0x9af8, 0x9db7, 0xa084, 0xa370, 
	0xa691, 0xaa07, 0xae06, 0xb2df, 0xb923, 0xc1cb, 0xce4e, 0xdf89, 0xf78d, 0x97b4, 0xadde, 0xbaeb, 0xdc6f, 0xe9f8, 0xeaab, 0x11fe, 
	0x08bb, 0x12bf, 0x17a7, 0x19ab, 0x1a43, 0x1a54, 0x1ada, 0x1aa7, 0x1a54, 0x1393, 0x139d, 0x1348, 0x119f, 0x0bcc, 0x002d, 0x002e, 
	0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002f, 0x002f, 0x002f, 0x002f, 0x002f, 0x002f, 0x002f, 0x002f, 0x002f, 0x002f, 0x002f, 
	0x002f, 0x002f, 0x002f, 0x002f, 0x002e, 0x002e, 0x002d, 0x1646, 0x1b28, 0x1995, 0x0dac, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 
	0x002d, 0x002d, 0x002d, 0x002d, 0xf86c, 0xf865, 0xf8a2, 0xf9c3, 0xfcc2, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 
	0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 
	0xff08, 0xff08, 0xf63d, 0xf116, 0xf2f2, 0xfbf2, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0x1a2c, 
	0x1a3a, 0x19c1, 0x1767, 0x0f73, 0x003b, 0x003b, 0x003b, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 
	0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003c, 0x003b, 0x003b, 0x1e20, 0x25e1, 0x2345, 
	0x11f8, 0x003b, 0x003c, 0x003c, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0xf853, 0xf9a8, 0xfc8f, 0xff7e, 0x00d9, 0x00d9, 
	0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x00d9, 
	0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x00d9, 0x0067, 0xff15, 0xfc8a, 0xf6e0, 
	0xe606, 0xcedb, 0xcedb, 0xcedb, 0xcedb, 0xda8b, 0xdd4c, 0xe35c, 0xe94f, 0xebf1, 0xebf1, 0xebf1, 0xebf1, 0xebf1, 0xebf1, 0xebf1, 
	0xebf1, 0xebf1, 0xebf1, 0xebf1, 0xebf1, 0xebf1, 0xebf1, 0xebf1, 0xebf1, 0xebf1, 0xebf1, 0xebf1, 0xebf1, 0xebf1, 0xebf1, 0xebf1, 
	0xebf1, 0xebf1, 0xebf1, 0xebf1, 0xebf1, 0xebf1, 0xebf1, 0xe8e8, 0xe11e, 0xd6be, 0xcc7f, 0xc562, 0xc38f, 0xc38f, 0xc38f, 0xc38f, 
	0x17ad, 0x1867, 0x1a47, 0x1c76, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 
	0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 0x1d8b, 
	0x1d8b, 0x1d8b, 0x1d9a, 0x1dfd, 0x1f68, 0x2405, 0x341d, 0x4afe, 0x4afe, 0x4afe, 0x4afe, 0xed77, 0xef7e, 0xf5bc, 0xf2cb, 0xf01e, 
	0xf27e, 0xf681, 0xfb24, 0xffe9, 0x04c5, 0x09c3, 0x0ec3, 0x0c20, 0x079c, 0x052c, 0x0351, 0x01c9, 0x0075, 0xff49, 0xfe45, 0xfd70, 
	0xfcd3, 0xfc78, 0xfc66, 0xfca0, 0xfd25, 0xfbbd, 0xf811, 0xf5c7, 0xf7cc, 0xffc1, 0x0e4a, 0x239a, 0x3db4, 0x5c62, 0x6eab, 0xfe35, 
	0xf959, 0xf654, 0xf55f, 0xfa86, 0xf55f, 0xf55f, 0x08ce, 0x05aa, 0xfc0b, 0xeb19, 0xe1ad, 0xe310, 0xe6d3, 0xec77, 0xf323, 0xf9cc, 
	0xff9b, 0x0424, 0x0911, 0x0cf4, 0x0f60, 0x1129, 0x12de, 0x148b, 0x1635, 0x17d3, 0x195c, 0x1ac2, 0x1bf6, 0x1cec, 0x1d98, 0x1df2, 
	0x1ced, 0x192a, 0x1232, 0x07e7, 0xfa8c, 0xeb47, 0xd93e, 0xd05a, 0xce70, 0xcb7f, 0xecd5, 0x07fa, 0x075e, 0x062b, 0x0679, 0x062b, 
	0x062b, 0x684d, 0x6966, 0x6eb4, 0x727f, 0x7659, 0x7528, 0x731b, 0x714d, 0x7072, 0x70b8, 0x71f4, 0x73c5, 0x7181, 0x6e9a, 0x6d19, 
	0x6bd5, 0x6a84, 0x691a, 0x679c, 0x6615, 0x6491, 0x6320, 0x61d2, 0x60b4, 0x5fd2, 0x5f35, 0x5caa, 0x5757, 0x516e, 0x4be8, 0x4642, 
	0x3ffe, 0x3aba, 0x21f0, 0x05e7, 0xf672, 0x66eb, 0x640a, 0x624a, 0x61c7, 0x637a, 0x61c7, 0x61c7, 0x109f, 0x0d32, 0x0040, 0x0040, 
	0x0040, 0x0040, 0x0041, 0x0041, 0x0041, 0x0041, 0x0040, 0x0040, 0x0c5f, 0x187f, 0x1e98, 0x222a, 0x24a7, 0x264e, 0x2739, 0x277d, 
	0x2723, 0x2636, 0x24c0, 0x22cb, 0x2061, 0x1d8f, 0x1c70, 0x1e1f, 0x2099, 0x21ce, 0x1fa2, 0x1701, 0x0040, 0x0041, 0x0041, 0x0041, 
	0x0041, 0x0041, 0x0041, 0x0040, 0x0040, 0x0040, 0x0040, 0xfcbe, 0xfd97, 0xff06, 0xff06, 0xff06, 0xff06, 0xff06, 0xff06, 0xff06, 
	0xff06, 0xff06, 0xff06, 0xfdc3, 0xfa0f, 0xf749, 0xf565, 0xf3f7, 0xf2f9, 0xf268, 0xf23e, 0xf276, 0xf307, 0xf3e9, 0xf50b, 0xf65d, 
	0xf7cc, 0xf856, 0xf786, 0xf63f, 0xf598, 0xf6c1, 0xfaa6, 0xff06, 0xff06, 0xff06, 0xff06, 0xff06, 0xff06, 0xff06, 0xff06, 0xff06, 
	0xff06, 0xff06, 0x0afa, 0x08c4, 0x002b, 0x002b, 0x002b, 0x002b, 0x002b, 0x002b, 0x002b, 0x002b, 0x002b, 0x002b, 0x083a, 0x0fdc, 
	0x135f, 0x1548, 0x1689, 0x1754, 0x17c2, 0x17e0, 0x17b7, 0x1749, 0x1695, 0x159a, 0x1457, 0x12cb, 0x1229, 0x131c, 0x1475, 0x1518, 
	0x13f0, 0x0ef5, 0x002b, 0x002b, 0x002c, 0x002c, 0x002c, 0x002c, 0x002b, 0x002b, 0x002b, 0x002b, 0x002b, 0xcc96, 0xcc96, 0xcc96, 
	0xcc96, 0xcc96, 0xcce7, 0xcdc6, 0xcf16, 0xd0bd, 0xd29b, 0xd48d, 0xd668, 0xd7fd, 0xd916, 0xd97f, 0xd97f, 0xd97f, 0xd97f, 0xd97f, 
	0xd97f, 0xd97f, 0xd97f, 0xd97f, 0xd97f, 0xd97f, 0xd97f, 0xd9bf, 0xda55, 0xdafc, 0xdb6f, 0xdb77, 0xdb08, 0xda55, 0xd9dd, 0xdef4, 
	0xeb90, 0xfded, 0x16d6, 0x2d59, 0x3591, 0x3591, 0x3591, 0x3591, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x1678, 0x1716, 0x17fa, 
	0x190a, 0x1a27, 0x1b3a, 0x1c2c, 0x1cea, 0x1d66, 0x1d93, 0x1d93, 0x1d93, 0x1d93, 0x1d93, 0x1d93, 0x1d93, 0x1d93, 0x1d93, 0x1d93, 
	0x1d93, 0x1d93, 0x1dfc, 0x1f00, 0x204c, 0x218a, 0x2262, 0x2273, 0x2153, 0x1e90, 0x1741, 0x0865, 0xf3f4, 0xe488, 0xe092, 0xe0ca, 
	0xe0ca, 0xe0ca, 0xe0ca, 0xe668, 0xe668, 0xe668, 0xe668, 0xe668, 0xe693, 0xe70b, 0xe7c6, 0xe8b9, 0xe9d7, 0xeb0a, 0xec39, 0xed41, 
	0xedfc, 0xee42, 0xee42, 0xee42, 0xee42, 0xee42, 0xee42, 0xee42, 0xee42, 0xee42, 0xee42, 0xee42, 0xee42, 0xedbe, 0xec34, 0xe9a2, 
	0xe5fe, 0xe13d, 0xdb63, 0xd49f, 0xcd44, 0xc9da, 0xc950, 0xc3f6, 0xb4e6, 0xa45b, 0x9e3b, 0x9e3b, 0x9e3b, 0x9e3b, 0x8000, 0x8000, 
	0x8000, 0x8000, 0x8000, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 
	0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 
	0xbfff, 0xbfff, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x3f40, 0x3d35, 
	0x3a2d, 0x3677, 0x3268, 0x2e59, 0x2aa3, 0x279a, 0x258f, 0x24d0, 0x24d0, 0x24d0, 0x24d0, 0x24d0, 0x24d0, 0x24d0, 0x24d0, 0x24d0, 
	0x24d0, 0x24d0, 0x24d0, 0x24d0, 0x24d0, 0x24d0, 0x24d0, 0x24d0, 0x24d0, 0x24d0, 0x24d0, 0x294e, 0x3556, 0x39e7, 0x291c, 0x1d05, 
	0x187f, 0x187f, 0x187f, 0x187f, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 
	0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 
	0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xbfff, 0xf945, 
	0xf66d, 0xf290, 0xefd9, 0xeed0, 0xeed8, 0xeeef, 0xef17, 0xef4f, 0xef96, 0xefe4, 0xf031, 0xf073, 0xf0a2, 0xf0b3, 0xf0b2, 0xf0ae, 
	0xf0a2, 0xf08b, 0xf065, 0xf02e, 0xefe4, 0xef86, 0xef14, 0xee8f, 0xedf9, 0xed43, 0xed3e, 0xef84, 0xf572, 0xfb08, 0xfa39, 0xf7b9, 
	0xf623, 0xf3ff, 0xf082, 0xf43a, 0xf3b2, 0xeb56, 0xe4d4, 0xe4d4, 0xe4d4, 0xe4d4, 0xf3a4, 0xf4bb, 0xf6f7, 0xf930, 0xfa38, 0xfa4c, 
	0xfa81, 0xfac7, 0xfb10, 0xfb4f, 0xfb7c, 0xfb96, 0xfba1, 0xfba3, 0xfba2, 0xfba3, 0xfba8, 0xfbb7, 0xfbd3, 0xfc01, 0xfc46, 0xfca8, 
	0xfd2a, 0xfdd4, 0xfeac, 0xffba, 0x0244, 0x071c, 0x0d52, 0x1281, 0x130d, 0x107e, 0x0d1c, 0x09a1, 0x05ed, 0xfeae, 0xed6b, 0xde21, 
	0xd2cc, 0xceeb, 0xceeb, 0xceeb, 0xceeb, 0x07ea, 0x0e0f, 0x16b4, 0x1d18, 0x1fa2, 0x208b, 0x2300, 0x269a, 0x2aeb, 0x2f83, 0x33f9, 
	0x37ed, 0x3b10, 0x3d20, 0x3ddf, 0x3de1, 0x3def, 0x3e14, 0x3e5d, 0x3ed4, 0x3f83, 0x4075, 0x41b1, 0x433d, 0x4523, 0x4767, 0x4cf8, 
	0x5848, 0x6a2f, 0x8439, 0x9d1a, 0xa2d1, 0x9cf7, 0x935a, 0x82e5, 0x6955, 0x4269, 0x2fc1, 0x2c48, 0x2e68, 0x2e68, 0x2e68, 0x2e68, 
	0x0256, 0x03a4, 0x0530, 0x0605, 0x0643, 0x0645, 0x0649, 0x064d, 0x064f, 0x0650, 0x064d, 0x0649, 0x0643, 0x063f, 0x063d, 0x063d, 
	0x063e, 0x0641, 0x0647, 0x0650, 0x065d, 0x066d, 0x067f, 0x0691, 0x06a1, 0x06a9, 0x069b, 0x0626, 0x0518, 0x03b1, 0x02f5, 0x03c9, 
	0x0522, 0x0627, 0x06a9, 0x0601, 0x016e, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x0010, 0x021f, 0x02c8, 0x042e, 0x0581, 0x0615, 
	0x0619, 0x0623, 0x062f, 0x0637, 0x0638, 0x0631, 0x0625, 0x0615, 0x0608, 0x0603, 0x0604, 0x0607, 0x060f, 0x061f, 0x0639, 0x0661, 
	0x0697, 0x06de, 0x0738, 0x07a6, 0x0829, 0x0932, 0x0ad6, 0x0c81, 0x0db2, 0x0e19, 0x0da3, 0x0c76, 0x0ad6, 0x0892, 0x0579, 0x01da, 
	0x01b2, 0x01b2, 0x01b2, 0x01b2, 0x01b2, 0x01b2, 0xf159, 0xe85e, 0xdb8f, 0xd1f7, 0xce21, 0xce06, 0xcdc4, 0xcd79, 0xcd45, 0xcd3d, 
	0xcd68, 0xcdbc, 0xce20, 0xce74, 0xce95, 0xce92, 0xce7e, 0xce48, 0xcde0, 0xcd35, 0xcc38, 0xcadd, 0xc91b, 0xc6e7, 0xc43a, 0xc10f, 
	0xba9e, 0xaff8, 0xa38d, 0x9803, 0x92cc, 0x98b4, 0xa3e8, 0xaff9, 0xbe84, 0xd231, 0xf727, 0xff9c, 0xff9b, 0xff9b, 0xff9b, 0xff9b, 
	0xff9b, 0xf135, 0xf16b, 0xf1d7, 0xf22f, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 
	0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 
	0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xf250, 0xff98, 0xff23, 0xfe1c, 0xfd0d, 
	0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 
	0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 
	0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0xfc91, 0x43ec, 0x4542, 0x4832, 0x4b21, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 
	0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 
	0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 0x4c75, 
	0x4c75, 0x4c75, 0x0748, 0x098f, 0x0cca, 0x0f2e, 0x1022, 0x1019, 0x0ffe, 0x0fd0, 0x0f90, 0x0f42, 0x0eee, 0x0e9c, 0x0e57, 0x0e28, 
	0x0e16, 0x0e17, 0x0e1a, 0x0e25, 0x0e38, 0x0e57, 0x0e86, 0x0ec5, 0x0f16, 0x0f79, 0x0fef, 0x1077, 0x10dc, 0x102f, 0x0d3a, 0x076e, 
	0x025b, 0x0220, 0x03ad, 0x04f4, 0x0306, 0xff2e, 0x0297, 0x1755, 0x2379, 0x2a04, 0x2a04, 0x2a04, 0x2a04, 0x0c11, 0x0b14, 0x092e, 
	0x0754, 0x0679, 0x0661, 0x0623, 0x05cc, 0x056e, 0x0517, 0x04d0, 0x049e, 0x0480, 0x0470, 0x046c, 0x046b, 0x0467, 0x045a, 0x0443, 
	0x041c, 0x03e2, 0x0390, 0x0322, 0x0293, 0x01dc, 0x00f6, 0xfeba, 0xfa8b, 0xf597, 0xf227, 0xf2ae, 0xf502, 0xf740, 0xf94e, 0xf836, 
	0xf097, 0xe3ed, 0xdc23, 0xd541, 0xd366, 0xd366, 0xd366, 0xd366, 0x07e6, 0x0db7, 0x1609, 0x1c3e, 0x1eb7, 0x1fa2, 0x2221, 0x25ca, 
	0x2a2f, 0x2edf, 0x336e, 0x377b, 0x3ab4, 0x3cd3, 0x3d96, 0x3d98, 0x3da5, 0x3dcb, 0x3e10, 0x3e82, 0x3f29, 0x4010, 0x413f, 0x42bb, 
	0x448a, 0x46b6, 0x4c09, 0x56d8, 0x67c2, 0x7fc7, 0x973e, 0x9f3f, 0x9b7e, 0x92ee, 0x8410, 0x6bc1, 0x4693, 0x14b2, 0xf9f8, 0xede0, 
	0xede0, 0xede0, 0xede0, 0xfec1, 0xfe19, 0xfd4f, 0xfce3, 0xfcc3, 0xfcc2, 0xfcc0, 0xfcbd, 0xfcbb, 0xfcb9, 0xfcb9, 0xfcbb, 0xfcbc, 
	0xfcbe, 0xfcbf, 0xfcbf, 0xfcbe, 0xfcbd, 0xfcba, 0xfcb6, 0xfcb0, 0xfca9, 0xfca1, 0xfc98, 0xfc92, 0xfc8f, 0xfc98, 0xfcd3, 0xfd55, 
	0xfdfc, 0xfe54, 0xfdff, 0xfd61, 0xfcdf, 0xfc94, 0xfcb6, 0xfdd9, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xfff8, 0xff67, 0xff10, 
	0xfe58, 0xfdaa, 0xfd5e, 0xfd5b, 0xfd54, 0xfd4c, 0xfd44, 0xfd40, 0xfd40, 0xfd44, 0xfd4a, 0xfd4f, 0xfd51, 0xfd51, 0xfd50, 0xfd4b, 
	0xfd43, 0xfd36, 0xfd22, 0xfd06, 0xfce2, 0xfcb5, 0xfc7d, 0xfc3b, 0xfbb5, 0xfae0, 0xfa09, 0xf96e, 0xf937, 0xf96c, 0xf9fb, 0xfac6, 
	0xfbd3, 0xfd37, 0xfee2, 0xffa3, 0xffa3, 0xffa3, 0xffa3, 0xffa3, 0xffa3, 0xf0e7, 0xe81e, 0xdb72, 0xd1f0, 0xce26, 0xce02, 0xcdab, 
	0xcd3e, 0xcce3, 0xccb0, 0xccb2, 0xcce1, 0xcd28, 0xcd68, 0xcd85, 0xcd82, 0xcd6f, 0xcd38, 0xccd3, 0xcc2c, 0xcb37, 0xc9e7, 0xc82f, 
	0xc60b, 0xc373, 0xc061, 0xba20, 0xafd9, 0xa419, 0x9982, 0x94aa, 0x994f, 0xa342, 0xae82, 0xbb90, 0xcc3c, 0xe47e, 0xffab, 0xffaa, 
	0xffaa, 0xffaa, 0xffaa, 0xffaa, 0x0642, 0x061b, 0x05d5, 0x05a6, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 
	0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 
	0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x0599, 0x039f, 
	0x042e, 0x056d, 0x06b0, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 
	0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 
	0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x0744, 0x42ec, 0x4438, 0x4712, 0x49ee, 0x4b3a, 0x4b3a, 
	0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 
	0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 
	0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, 0x4b3a, };

JointIndex gWereCit3DeathAnimJointIndices[20] = {
	{ 0x000b, 0x0036, 0x0061, },
	{ 0x0000, 0x0000, 0x0000, },
	{ 0x008c, 0x0000, 0x0001, },
	{ 0x00b7, 0x00e2, 0x010d, },
	{ 0x0138, 0x0163, 0x018e, },
	{ 0x01b9, 0x01e4, 0x020f, },
	{ 0x023a, 0x0265, 0x0290, },
	{ 0x0002, 0x0003, 0x0004, },
	{ 0x02bb, 0x02e6, 0x0311, },
	{ 0x033c, 0x0367, 0x0392, },
	{ 0x03bd, 0x03e8, 0x0413, },
	{ 0x0005, 0x0006, 0x0007, },
	{ 0x0008, 0x0009, 0x000a, },
	{ 0x043e, 0x0469, 0x0494, },
	{ 0x04bf, 0x04ea, 0x0515, },
	{ 0x0540, 0x056b, 0x0596, },
	{ 0x05c1, 0x05ec, 0x0617, },
	{ 0x0642, 0x066d, 0x0698, },
	{ 0x06c3, 0x06ee, 0x0719, },
	{ 0x0744, 0x076f, 0x079a, },
};

AnimationHeader gWereCit3DeathAnim = { { 43 }, gWereCit3DeathAnimFrameData, gWereCit3DeathAnimJointIndices, 11 };
