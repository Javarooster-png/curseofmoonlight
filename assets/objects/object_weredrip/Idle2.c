#include "ultra64.h"
#include "global.h"

s16 gWereCitIdle2AnimFrameData[3561] = {
	0x0000, 0x3686, 0xe83b, 0x18f5, 0x002f, 0x0001, 0xfef0, 0x8000, 0x4000, 0x0000, 0xfffb, 0xffec, 0xffd4, 0xffb4, 0xff8c, 0xff5e, 
	0xff2a, 0xfef1, 0xfeb4, 0xfe74, 0xfe31, 0xfded, 0xfda8, 0xfd63, 0xfd1f, 0xfcdc, 0xfc9c, 0xfc5f, 0xfc26, 0xfbf2, 0xfbc4, 0xfb9d, 
	0xfb7c, 0xfb64, 0xfb55, 0xfb50, 0xfb53, 0xfb59, 0xfb63, 0xfb6c, 0xfb76, 0xfb7c, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 
	0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7b, 0xfb73, 0xfb68, 0xfb5c, 0xfb54, 0xfb50, 0xfb50, 0xfb50, 0xfb50, 
	0xfb50, 0xfb50, 0xfb50, 0xfb50, 0xfb50, 0xfb50, 0xfb50, 0xfb50, 0xfb50, 0xfb50, 0xfb50, 0xfb50, 0xfb50, 0xfb50, 0xfb50, 0xfb50, 
	0xfb56, 0xfb66, 0xfb80, 0xfba3, 0xfbcd, 0xfbfe, 0xfc36, 0xfc72, 0xfcb3, 0xfcf7, 0xfd3d, 0xfd84, 0xfdcc, 0xfe14, 0xfe5a, 0xfe9d, 
	0xfede, 0xff1a, 0xff52, 0xff83, 0xffae, 0xffd0, 0xffea, 0xfffa, 0x0000, 0xfd31, 0xfd6e, 0xfe21, 0xff42, 0x00ca, 0x02b2, 0x04f4, 
	0x0789, 0x0a69, 0x0d8b, 0x10e4, 0x1467, 0x1808, 0x1bb8, 0x1f67, 0x2308, 0x268c, 0x29e4, 0x2d06, 0x2fe6, 0x327b, 0x34bd, 0x36a5, 
	0x382d, 0x394d, 0x3a00, 0x3a3d, 0x3a1f, 0x39d1, 0x3965, 0x38ee, 0x3880, 0x382f, 0x380f, 0x380f, 0x380f, 0x380f, 0x380f, 0x380f, 
	0x380f, 0x380f, 0x380f, 0x380f, 0x380f, 0x380f, 0x380f, 0x3837, 0x389a, 0x391b, 0x399e, 0x3a07, 0x3a3d, 0x3a4b, 0x3a50, 0x3a4d, 
	0x3a47, 0x3a40, 0x3a3d, 0x3a3d, 0x3a3d, 0x3a3d, 0x3a3d, 0x3a3d, 0x3a3d, 0x3a3d, 0x3a3d, 0x3a3d, 0x3a3d, 0x3a3d, 0x3a3d, 0x3a3d, 
	0x39fa, 0x3934, 0x37f6, 0x3648, 0x3432, 0x31bc, 0x2eee, 0x2bd3, 0x2877, 0x24e7, 0x2130, 0x1d64, 0x1991, 0x15c8, 0x1219, 0x0e93, 
	0x0b44, 0x0838, 0x057a, 0x0313, 0x010a, 0xff67, 0xfe32, 0xfd73, 0xfd31, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0xff7e, 0xfe2f, 0xfc63, 0xfa6b, 0xf89c, 0xf748, 0xf6c4, 0xf6c4, 0xf6c4, 0xf6c4, 0xf6c4, 0xf6c4, 
	0xf6c4, 0xf6c4, 0xf6c4, 0xf6c4, 0xf6c4, 0xf6c4, 0xf6c4, 0xf720, 0xf81d, 0xf99d, 0xfb81, 0xfdaa, 0x0000, 0x0265, 0x04b5, 0x06c7, 
	0x0874, 0x0992, 0x09fa, 0x09fa, 0x09fa, 0x09fa, 0x09fa, 0x09fa, 0x09fa, 0x09fa, 0x09fa, 0x09fa, 0x09fa, 0x09fa, 0x09fa, 0x09fa, 
	0x09f2, 0x09d8, 0x09ad, 0x0972, 0x0926, 0x08c8, 0x0859, 0x07d9, 0x0748, 0x06ab, 0x0603, 0x0554, 0x04a3, 0x03f5, 0x034d, 0x02b0, 
	0x0220, 0x01a0, 0x0132, 0x00d4, 0x0088, 0x004d, 0x0022, 0x0009, 0x0000, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 0xffff, 
	0xffff, 0xffff, 0xffff, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0xfffc, 0xfff5, 0xfff0, 0xfff0, 0xfff5, 0xfffc, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xfffc, 0xfff5, 0xfff0, 0xfff1, 0xfff7, 0x0000, 0x0006, 0x0008, 0x0007, 
	0x0004, 0x0001, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0xfff7, 0xffdf, 0xffb9, 0xff89, 0xff50, 0xff13, 0xfed3, 0xfe97, 0xfe61, 0xfe35, 0xfe16, 0xfe06, 0xfe07, 0xfe19, 0xfe39, 0xfe66, 
	0xfe9d, 0xfed9, 0xff18, 0xff55, 0xff8c, 0xffbb, 0xffe0, 0xfff7, 0xffff, 0x1f3c, 0x1f2d, 0x1eff, 0x1eb6, 0x1e54, 0x1ddc, 0x1d4f, 
	0x1cb1, 0x1c04, 0x1b4a, 0x1a86, 0x19ba, 0x18e9, 0x1816, 0x1742, 0x1671, 0x15a5, 0x14e1, 0x1427, 0x1379, 0x12db, 0x124e, 0x11d5, 
	0x1173, 0x112a, 0x10fc, 0x10ec, 0x10f4, 0x1108, 0x1124, 0x1142, 0x115e, 0x1172, 0x117a, 0x0d7d, 0x05fd, 0x01ee, 0x06be, 0x0fab, 
	0x1469, 0x0fab, 0x06be, 0x01ee, 0x05fd, 0x0d7d, 0x117a, 0x1170, 0x1155, 0x1133, 0x1111, 0x10f7, 0x10ec, 0x10ec, 0x10ec, 0x10ec, 
	0x10ec, 0x10ec, 0x10ec, 0x0eae, 0x0a83, 0x0846, 0x0988, 0x0c4f, 0x0f16, 0x105a, 0x0dcb, 0x0910, 0x0688, 0x08d9, 0x0d79, 0x10ec, 
	0x128f, 0x1411, 0x1574, 0x16b9, 0x17e1, 0x18ec, 0x19dd, 0x1ab5, 0x1b75, 0x1c1f, 0x1cb3, 0x1d34, 0x1da2, 0x1e00, 0x1e4e, 0x1e8e, 
	0x1ec1, 0x1ee9, 0x1f08, 0x1f1e, 0x1f2c, 0x1f35, 0x1f3a, 0x1f3c, 0x1f3c, 0x0313, 0x0314, 0x0317, 0x031c, 0x0323, 0x032c, 0x0335, 
	0x0340, 0x034c, 0x0358, 0x0364, 0x0371, 0x037e, 0x038a, 0x0396, 0x03a2, 0x03ad, 0x03b7, 0x03c0, 0x03c9, 0x03d0, 0x03d7, 0x03dc, 
	0x03e0, 0x03e4, 0x03e5, 0x03e6, 0x03e6, 0x03e5, 0x03e4, 0x03e3, 0x03e1, 0x03e0, 0x03e0, 0x04f1, 0x06d9, 0x07cd, 0x06a3, 0x044b, 
	0x02fb, 0x044b, 0x06a3, 0x07cd, 0x06d9, 0x04f1, 0x03e0, 0x03e1, 0x03e2, 0x03e3, 0x03e5, 0x03e6, 0x03e6, 0x03e6, 0x03e6, 0x03e6, 
	0x03e6, 0x03e6, 0x03e6, 0x03e0, 0x03d9, 0x03e6, 0x042d, 0x049c, 0x04ff, 0x0528, 0x0488, 0x034b, 0x0298, 0x02f1, 0x0392, 0x03e6, 
	0x03e8, 0x03e8, 0x03e5, 0x03e1, 0x03da, 0x03d2, 0x03c9, 0x03be, 0x03b3, 0x03a6, 0x0399, 0x038c, 0x037e, 0x0370, 0x0363, 0x0356, 
	0x034a, 0x033e, 0x0334, 0x032a, 0x0322, 0x031c, 0x0317, 0x0314, 0x0313, 0x02f4, 0x02f2, 0x02ef, 0x02e9, 0x02e2, 0x02d9, 0x02ce, 
	0x02c1, 0x02b3, 0x02a4, 0x0294, 0x0283, 0x0271, 0x025f, 0x024c, 0x023a, 0x0228, 0x0216, 0x0205, 0x01f5, 0x01e6, 0x01d9, 0x01cd, 
	0x01c4, 0x01bd, 0x01b9, 0x01b7, 0x01b8, 0x01ba, 0x01bd, 0x01bf, 0x01c2, 0x01c4, 0x01c5, 0x0184, 0x00c4, 0x0038, 0x00da, 0x01a4, 
	0x01d9, 0x01a4, 0x00da, 0x0038, 0x00c4, 0x0184, 0x01c5, 0x01c4, 0x01c1, 0x01be, 0x01bb, 0x01b8, 0x01b7, 0x01b7, 0x01b7, 0x01b7, 
	0x01b7, 0x01b7, 0x01b7, 0x01b3, 0x01af, 0x01b7, 0x01e4, 0x0235, 0x0288, 0x02af, 0x0233, 0x0169, 0x010c, 0x0130, 0x0180, 0x01b7, 
	0x01c1, 0x01cc, 0x01d9, 0x01e7, 0x01f6, 0x0206, 0x0216, 0x0227, 0x0238, 0x0249, 0x025a, 0x026b, 0x027c, 0x028c, 0x029b, 0x02aa, 
	0x02b8, 0x02c4, 0x02d0, 0x02da, 0x02e3, 0x02ea, 0x02ef, 0x02f2, 0x02f4, 0xfb8d, 0xfbd3, 0xfc9f, 0xfde9, 0xffaa, 0x01da, 0x0471, 
	0x0769, 0x0ab9, 0x0e57, 0x1239, 0x1653, 0x1a98, 0x1ef7, 0x2362, 0x27c7, 0x2c12, 0x3033, 0x3418, 0x37af, 0x3aec, 0xbdc1, 0xc026, 
	0xc211, 0xc37b, 0xc45a, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 
	0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 
	0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 0xc4a7, 
	0xc454, 0xc363, 0xc1dd, 0xbfcc, 0xbd39, 0x3a2e, 0x36b6, 0x32e0, 0x2ebd, 0x2a5f, 0x25da, 0x2143, 0x1caf, 0x1830, 0x13d7, 0x0fb6, 
	0x0bd9, 0x084e, 0x051f, 0x0257, 0xfffc, 0xfe19, 0xfcb5, 0xfbd9, 0xfb8d, 0x0932, 0x091b, 0x08d7, 0x0867, 0x07ca, 0x0701, 0x0609, 
	0x04e4, 0x0393, 0x021a, 0x007e, 0xfec9, 0xfd09, 0xfb48, 0xf995, 0xf7fd, 0xf68a, 0xf543, 0xf42c, 0xf345, 0xf28c, 0x8e03, 0x8e6f, 
	0x8ebd, 0x8ef1, 0x8f0f, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 
	0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 
	0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 0x8f19, 
	0x8f0e, 0x8eee, 0x8eb5, 0x8e60, 0x8de9, 0xf2b4, 0xf381, 0xf480, 0xf5b3, 0xf719, 0xf8ac, 0xfa63, 0xfc30, 0xfe05, 0xffd1, 0x0189, 
	0x031e, 0x048a, 0x05c7, 0x06d3, 0x07ad, 0x0856, 0x08d0, 0x0919, 0x0932, 0x8d42, 0x8d52, 0x8d7f, 0x8dc4, 0x8e1c, 0x8e81, 0x8eeb, 
	0x8f51, 0x8fa9, 0x8fe9, 0x9009, 0x9000, 0x8fc8, 0x8f5e, 0x8ec4, 0x8dfe, 0x8d14, 0x8c10, 0x8b00, 0x89ef, 0x88e9, 0x07f9, 0x0728, 
	0x067b, 0x05fb, 0x05aa, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 
	0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 
	0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 0x058e, 
	0x05ac, 0x0603, 0x068e, 0x0747, 0x0827, 0x8926, 0x8a3a, 0x8b58, 0x8c70, 0x8d75, 0x8e5a, 0x8f14, 0x8f9b, 0x8fed, 0x900b, 0x8ff9, 
	0x8fc0, 0x8f6b, 0x8f04, 0x8e96, 0x8e2c, 0x8dce, 0x8d83, 0x8d53, 0x8d42, 0xf092, 0xf0a1, 0xf0cb, 0xf102, 0xf138, 0xf15a, 0xf159, 
	0xf123, 0xf0ad, 0xefed, 0xeedc, 0xed78, 0xebbf, 0xe9b2, 0xe750, 0xe49e, 0xe1a0, 0xde60, 0xdaeb, 0xd756, 0xd3bc, 0xd040, 0xcd0e, 
	0xca52, 0xc835, 0xc6dc, 0xc663, 0xc648, 0xc60a, 0xc5c9, 0xc59a, 0xc588, 0xc588, 0xc584, 0xc57a, 0xc572, 0xc56b, 0xc566, 0xc562, 
	0xc55e, 0xc55c, 0xc55b, 0xc55a, 0xc559, 0xc559, 0xc559, 0xc513, 0xc47e, 0xc3fa, 0xc3e4, 0xc48e, 0xc645, 0xc91f, 0xccbc, 0xd0ba, 
	0xd49a, 0xd79c, 0xd8d0, 0xd8d0, 0xd8d0, 0xd8d0, 0xd8d0, 0xd8d0, 0xd8d0, 0xd8d0, 0xd8d0, 0xd8d0, 0xd8d0, 0xd8d0, 0xd8d0, 0xd8d0, 
	0xd939, 0xda61, 0xdc22, 0xde50, 0xe0c0, 0xe34d, 0xe5d9, 0xe850, 0xeaa3, 0xecc6, 0xeeb2, 0xf05e, 0xf1c4, 0xf2de, 0xf3a5, 0xf417, 
	0xf433, 0xf400, 0xf38e, 0xf2f1, 0xf242, 0xf19a, 0xf10f, 0xf0b3, 0xf092, 0xf40b, 0xf440, 0xf4da, 0xf5d5, 0xf72b, 0xf8d8, 0xfad7, 
	0xfd1f, 0xffa8, 0x0264, 0x0545, 0x083b, 0x0b39, 0x0e32, 0x111a, 0x13e8, 0x1691, 0x190e, 0x1b53, 0x1d58, 0x1f15, 0x2083, 0x21a3, 
	0x2278, 0x2308, 0x235b, 0x2376, 0x2321, 0x2249, 0x212b, 0x2000, 0x1efd, 0x1e47, 0x1e01, 0x1dfd, 0x1dfb, 0x1df8, 0x1df7, 0x1df5, 
	0x1df4, 0x1df4, 0x1df3, 0x1df3, 0x1df4, 0x1df4, 0x1df4, 0x1e22, 0x1ea4, 0x1f74, 0x208d, 0x21e6, 0x236f, 0x2522, 0x26e2, 0x2882, 
	0x29da, 0x2ac0, 0x2b14, 0x2b14, 0x2b14, 0x2b14, 0x2b14, 0x2b14, 0x2b14, 0x2b14, 0x2b14, 0x2b14, 0x2b14, 0x2b14, 0x2b14, 0x2b14, 
	0x2ae2, 0x2a4f, 0x295e, 0x280e, 0x2661, 0x245d, 0x2208, 0x1f6c, 0x1c95, 0x198d, 0x165f, 0x1314, 0x0fb7, 0x0c53, 0x08f2, 0x05a4, 
	0x0275, 0xff73, 0xfcb1, 0xfa3a, 0xf81d, 0xf665, 0xf51e, 0xf451, 0xf40b, 0x6c6a, 0x6c41, 0x6bcc, 0x6b11, 0x6a17, 0x68e6, 0x6786, 
	0x65ff, 0x6458, 0x6293, 0x60b3, 0x5eb5, 0x5c96, 0x5a50, 0x57dc, 0x5532, 0x524e, 0x4f2f, 0x4bda, 0x485d, 0x44cf, 0x4152, 0x3e12, 
	0x3b41, 0x390d, 0x37a2, 0x3722, 0x3706, 0x36bb, 0x3651, 0x35d7, 0x355f, 0x3501, 0x34d6, 0x34cf, 0x34ca, 0x34c5, 0x34c1, 0x34be, 
	0x34bc, 0x34ba, 0x34b9, 0x34b8, 0x34b7, 0x34b7, 0x34b6, 0x3495, 0x345a, 0x3440, 0x347f, 0x3556, 0x370a, 0x39a8, 0x3cd8, 0x404a, 
	0x4394, 0x461c, 0x471e, 0x471e, 0x471e, 0x471e, 0x471e, 0x471e, 0x471e, 0x471e, 0x471e, 0x471e, 0x471e, 0x471e, 0x471e, 0x471e, 
	0x4793, 0x48dd, 0x4ad0, 0x4d38, 0x4fe3, 0x52a7, 0x5562, 0x5800, 0x5a74, 0x5cb9, 0x5ed0, 0x60b9, 0x6279, 0x6413, 0x6588, 0x66da, 
	0x6807, 0x690f, 0x69f1, 0x6aaf, 0x6b4a, 0x6bc5, 0x6c1f, 0x6c56, 0x6c6a, 0x109f, 0x10bb, 0x1110, 0x11a2, 0x1279, 0x139a, 0x1509, 
	0x16c2, 0x18be, 0x1af1, 0x1d4e, 0x1fc3, 0x223f, 0x24ae, 0x2702, 0x292a, 0x2b1c, 0x2cca, 0x2e32, 0x2f4f, 0x3026, 0x30bf, 0x3121, 
	0x315a, 0x3177, 0x3183, 0x3187, 0x323c, 0x3409, 0x3677, 0x3915, 0x3b77, 0x3d35, 0x3de3, 0x3de4, 0x3de6, 0x3de7, 0x3de7, 0x3de8, 
	0x3de8, 0x3de9, 0x3de9, 0x3de8, 0x3de8, 0x3de7, 0x3de7, 0x3d76, 0x3c38, 0x3a49, 0x37ca, 0x34d5, 0x3188, 0x2df9, 0x2a58, 0x26d6, 
	0x23bf, 0x2181, 0x20a5, 0x20a5, 0x20a5, 0x20a5, 0x20a5, 0x20a5, 0x20a5, 0x20a5, 0x20a5, 0x20a5, 0x20a5, 0x20a5, 0x20a5, 0x20a5, 
	0x20a9, 0x20b0, 0x20b3, 0x20a3, 0x2074, 0x2018, 0x1f85, 0x1eb2, 0x1d9c, 0x1c46, 0x1ab7, 0x18ff, 0x172f, 0x1560, 0x13ab, 0x122f, 
	0x1102, 0x1035, 0x0fc8, 0x0faf, 0x0fd2, 0x1013, 0x1058, 0x108c, 0x109f, 0xfcbe, 0xfcb6, 0xfc9f, 0xfc75, 0xfc34, 0xfbd9, 0xfb5e, 
	0xfabe, 0xf9f6, 0xf905, 0xf7ec, 0xf6b0, 0xf559, 0xf3f3, 0xf28a, 0xf12d, 0xefe6, 0xeec5, 0xedcf, 0xed08, 0xec72, 0xec06, 0xebc1, 
	0xeb99, 0xeb84, 0xeb7b, 0xeb79, 0xeaf9, 0xe9af, 0xe7f2, 0xe615, 0xe468, 0xe334, 0xe2bd, 0xe2bc, 0xe2bb, 0xe2ba, 0xe2ba, 0xe2b9, 
	0xe2b9, 0xe2b9, 0xe2b9, 0xe2b9, 0xe2b9, 0xe2ba, 0xe2ba, 0xe307, 0xe3e2, 0xe53b, 0xe700, 0xe91d, 0xeb78, 0xedf5, 0xf068, 0xf2a5, 
	0xf47f, 0xf5c2, 0xf639, 0xf639, 0xf639, 0xf639, 0xf639, 0xf639, 0xf639, 0xf639, 0xf639, 0xf639, 0xf639, 0xf639, 0xf639, 0xf639, 
	0xf637, 0xf633, 0xf632, 0xf63a, 0xf653, 0xf684, 0xf6d0, 0xf73c, 0xf7c6, 0xf869, 0xf91e, 0xf9db, 0xfa94, 0xfb3f, 0xfbd4, 0xfc4b, 
	0xfca3, 0xfcdb, 0xfcf8, 0xfcfe, 0xfcf5, 0xfce4, 0xfcd2, 0xfcc4, 0xfcbe, 0x0afa, 0x0b0c, 0x0b42, 0x0b9f, 0x0c27, 0x0cdd, 0x0dc0, 
	0x0ecf, 0x1001, 0x114d, 0x12a7, 0x1402, 0x1552, 0x168c, 0x17a8, 0x189f, 0x1970, 0x1a19, 0x1a9e, 0x1b01, 0x1b49, 0x1b79, 0x1b98, 
	0x1ba9, 0x1bb2, 0x1bb6, 0x1bb7, 0x1bec, 0x1c69, 0x1cf7, 0x1d6f, 0x1dbc, 0x1de0, 0x1de9, 0x1de9, 0x1de9, 0x1de9, 0x1de9, 0x1de9, 
	0x1de9, 0x1de9, 0x1de9, 0x1de9, 0x1de9, 0x1de9, 0x1de9, 0x1de4, 0x1dcd, 0x1d9a, 0x1d38, 0x1c9b, 0x1bb7, 0x1a8a, 0x1920, 0x1794, 
	0x1616, 0x14f0, 0x147b, 0x147b, 0x147b, 0x147b, 0x147b, 0x147b, 0x147b, 0x147b, 0x147b, 0x147b, 0x147b, 0x147b, 0x147b, 0x147b, 
	0x147d, 0x1481, 0x1483, 0x147a, 0x1461, 0x1430, 0x13e0, 0x136d, 0x12d2, 0x1211, 0x112b, 0x1028, 0x0f12, 0x0df6, 0x0ce7, 0x0bf8, 
	0x0b39, 0x0ab6, 0x0a70, 0x0a60, 0x0a76, 0x0aa0, 0x0acc, 0x0aed, 0x0afa, 0xcc96, 0xccaf, 0xccf7, 0xcd68, 0xcdfb, 0xceab, 0xcf6f, 
	0xd041, 0xd11a, 0xd1f3, 0xd2c8, 0xd393, 0xd452, 0xd501, 0xd59e, 0xd628, 0xd69f, 0xd703, 0xd755, 0xd795, 0xd7c5, 0xd7e7, 0xd7fd, 
	0xd80b, 0xd812, 0xd817, 0xd81c, 0xd7aa, 0xd676, 0xd4c6, 0xd2e4, 0xd121, 0xcfd3, 0xcf51, 0xcf51, 0xcf51, 0xcf51, 0xcf51, 0xcf51, 
	0xcf51, 0xcf51, 0xcf51, 0xcf51, 0xcf51, 0xcf51, 0xcf51, 0xd002, 0xd1b5, 0xd3db, 0xd5f0, 0xd77f, 0xd81c, 0xd81c, 0xd81c, 0xd81c, 
	0xd81c, 0xd81c, 0xd81c, 0xd81c, 0xd81c, 0xd81c, 0xd81c, 0xd81c, 0xd81c, 0xd81c, 0xd81c, 0xd81c, 0xd81c, 0xd81c, 0xd81c, 0xd81c, 
	0xd81d, 0xd820, 0xd822, 0xd820, 0xd817, 0xd802, 0xd7df, 0xd7ab, 0xd762, 0xd703, 0xd68d, 0xd5fe, 0xd559, 0xd49c, 0xd3cc, 0xd2ea, 
	0xd1fc, 0xd108, 0xd015, 0xcf2c, 0xce57, 0xcda0, 0xcd12, 0xccb6, 0xcc96, 0x163d, 0x161e, 0x15c3, 0x152e, 0x1461, 0x135e, 0x1225, 
	0x10b9, 0x0f1b, 0x0d4f, 0x0b57, 0x0939, 0x06fa, 0x04a0, 0x0232, 0xffb6, 0xfd36, 0xfab8, 0xf844, 0xf5e0, 0xf394, 0xf165, 0xef58, 
	0xed72, 0xebb7, 0xea2c, 0xe8d4, 0xe7a5, 0xe698, 0xe5b1, 0xe4f7, 0xe46e, 0xe41b, 0xe3ff, 0xe3ff, 0xe3ff, 0xe3ff, 0xe3ff, 0xe3ff, 
	0xe3ff, 0xe3ff, 0xe3ff, 0xe3ff, 0xe3ff, 0xe3ff, 0xe3ff, 0xe458, 0xe538, 0xe661, 0xe78e, 0xe876, 0xe8d4, 0xe8d4, 0xe8d4, 0xe8d4, 
	0xe8d4, 0xe8d4, 0xe8d4, 0xe8d4, 0xe8d4, 0xe8d4, 0xe8d4, 0xe8d4, 0xe8d4, 0xe8d4, 0xe8d4, 0xe8d4, 0xe8d4, 0xe8d4, 0xe8d4, 0xe8d4, 
	0xe909, 0xe9a2, 0xea99, 0xebe6, 0xed82, 0xef68, 0xf18f, 0xf3ef, 0xf67e, 0xf932, 0xfc00, 0xfedb, 0x01b9, 0x048a, 0x0743, 0x09da, 
	0x0c44, 0x0e78, 0x1070, 0x1225, 0x1393, 0x14b7, 0x158c, 0x1610, 0x163d, 0xe668, 0xe689, 0xe6e9, 0xe781, 0xe84a, 0xe93c, 0xea4f, 
	0xeb7d, 0xecbd, 0xee09, 0xef5b, 0xf0ae, 0xf1fe, 0xf347, 0xf486, 0xf5ba, 0xf6df, 0xf7f4, 0xf8f7, 0xf9e7, 0xfac2, 0xfb85, 0xfc2f, 
	0xfcbc, 0xfd2a, 0xfd75, 0xfd98, 0xfdb6, 0xfdf1, 0xfe47, 0xfeac, 0xff0f, 0xff5a, 0xff77, 0xff77, 0xff77, 0xff77, 0xff77, 0xff77, 
	0xff77, 0xff77, 0xff77, 0xff77, 0xff77, 0xff77, 0xff77, 0xff47, 0xfed6, 0xfe58, 0xfdf1, 0xfdaf, 0xfd98, 0xfd98, 0xfd98, 0xfd98, 
	0xfd98, 0xfd98, 0xfd98, 0xfd98, 0xfd98, 0xfd98, 0xfd98, 0xfd98, 0xfd98, 0xfd98, 0xfd98, 0xfd98, 0xfd98, 0xfd98, 0xfd98, 0xfd98, 
	0xfd80, 0xfd3c, 0xfcce, 0xfc3d, 0xfb8d, 0xfac0, 0xf9dc, 0xf8e2, 0xf7d4, 0xf6b5, 0xf586, 0xf448, 0xf2fe, 0xf1a9, 0xf04c, 0xeeeb, 
	0xed8b, 0xec31, 0xeae5, 0xe9b0, 0xe89c, 0xe7b4, 0xe701, 0xe68f, 0xe668, 0xf945, 0xf8f7, 0xf82d, 0xf71d, 0xf5ea, 0xf4ac, 0xf36e, 
	0xf236, 0xf109, 0xefe8, 0xeed4, 0xedcf, 0xecd9, 0xebf3, 0xeb1b, 0xea54, 0xe99d, 0xe8f6, 0xe861, 0xe7de, 0xe76c, 0xe70e, 0xe6c2, 
	0xe688, 0xe65f, 0xe647, 0xe63f, 0xe643, 0xe64e, 0xe65c, 0xe66d, 0xe67c, 0xe688, 0xe68c, 0xe68c, 0xe68c, 0xe68c, 0xe68c, 0xe68c, 
	0xe68c, 0xe68c, 0xe68c, 0xe68c, 0xe68c, 0xe68c, 0xe68c, 0xe686, 0xe677, 0xe664, 0xe652, 0xe644, 0xe63f, 0xe63f, 0xe63f, 0xe63f, 
	0xe63f, 0xe63f, 0xe63f, 0xe63f, 0xe63f, 0xe63f, 0xe63f, 0xe63f, 0xe63f, 0xe63f, 0xe63f, 0xe63f, 0xe63f, 0xe63f, 0xe63f, 0xe63f, 
	0xe648, 0xe662, 0xe68e, 0xe6cd, 0xe71f, 0xe786, 0xe801, 0xe88f, 0xe930, 0xe9e4, 0xeaaa, 0xeb80, 0xec68, 0xed61, 0xee6a, 0xef83, 
	0xf0ab, 0xf1e1, 0xf322, 0xf46c, 0xf5b8, 0xf6f9, 0xf81a, 0xf8f1, 0xf945, 0xf3a4, 0xf3bd, 0xf403, 0xf46e, 0xf4f9, 0xf5a0, 0xf660, 
	0xf738, 0xf824, 0xf923, 0xfa34, 0xfb55, 0xfc85, 0xfdc3, 0xff0c, 0x005f, 0x01ba, 0x0319, 0x0477, 0x05d0, 0x071d, 0x0856, 0x0971, 
	0x0a61, 0x0b1b, 0x0b92, 0x0bbc, 0x0ba7, 0x0b72, 0x0b2a, 0x0adc, 0x0a95, 0x0a62, 0x0a4f, 0x0a4f, 0x0a4f, 0x0a4f, 0x0a4f, 0x0a4f, 
	0x0a4f, 0x0a4f, 0x0a4f, 0x0a4f, 0x0a4f, 0x0a4f, 0x0a4f, 0x0a69, 0x0aab, 0x0b03, 0x0b5b, 0x0ba0, 0x0bbc, 0x0bbc, 0x0bbc, 0x0bbc, 
	0x0bbc, 0x0bbc, 0x0bbc, 0x0bbc, 0x0bbc, 0x0bbc, 0x0bbc, 0x0bbc, 0x0bbc, 0x0bbc, 0x0bbc, 0x0bbc, 0x0bbc, 0x0bbc, 0x0bbc, 0x0bbc, 
	0x0b8f, 0x0b0e, 0x0a47, 0x0946, 0x0819, 0x06cf, 0x0570, 0x0407, 0x029a, 0x012f, 0xffc8, 0xfe6d, 0xfd1c, 0xfbd9, 0xfaa6, 0xf983, 
	0xf873, 0xf778, 0xf692, 0xf5c5, 0xf512, 0xf47d, 0xf40a, 0xf3bf, 0xf3a4, 0x07ea, 0x0891, 0x0a42, 0x0c90, 0x0f2e, 0x11ee, 0x14b9, 
	0x1783, 0x1a43, 0x1cf6, 0x1f99, 0x222a, 0x24a6, 0x2710, 0x2966, 0x2ba3, 0x2dcb, 0x2fd9, 0x31ca, 0x339c, 0x3549, 0x36cb, 0x381e, 
	0x3935, 0x3a09, 0x3a8f, 0x3abe, 0x3aa7, 0x3a6b, 0x3a1a, 0x39c2, 0x3971, 0x3937, 0x3920, 0x3920, 0x3920, 0x3920, 0x3920, 0x3920, 
	0x3920, 0x3920, 0x3920, 0x3920, 0x3920, 0x3920, 0x3920, 0x393e, 0x398a, 0x39ee, 0x3a51, 0x3a9f, 0x3abe, 0x3abe, 0x3abe, 0x3abe, 
	0x3abe, 0x3abe, 0x3abe, 0x3abe, 0x3abe, 0x3abe, 0x3abe, 0x3abe, 0x3abe, 0x3abe, 0x3abe, 0x3abe, 0x3abe, 0x3abe, 0x3abe, 0x3abe, 
	0x3a8c, 0x39fb, 0x3917, 0x37eb, 0x3681, 0x34e5, 0x331b, 0x312e, 0x2f1e, 0x2cf2, 0x2aaa, 0x284a, 0x25d2, 0x2344, 0x20a1, 0x1dea, 
	0x1b21, 0x1849, 0x1565, 0x127d, 0x0f9d, 0x0cde, 0x0a6d, 0x089e, 0x07ea, 0x0256, 0x027b, 0x02d9, 0x0356, 0x03dd, 0x0462, 0x04df, 
	0x054f, 0x05b0, 0x0602, 0x0643, 0x0673, 0x0694, 0x06a6, 0x06aa, 0x06a1, 0x068f, 0x0673, 0x0651, 0x062a, 0x0601, 0x05d9, 0x05b2, 
	0x0591, 0x0576, 0x0565, 0x055f, 0x0562, 0x056a, 0x0574, 0x057f, 0x0589, 0x0591, 0x0593, 0x0593, 0x0593, 0x0593, 0x0593, 0x0593, 
	0x0593, 0x0593, 0x0593, 0x0593, 0x0593, 0x0593, 0x0593, 0x0590, 0x0586, 0x057a, 0x056d, 0x0563, 0x055f, 0x055f, 0x055f, 0x055f, 
	0x055f, 0x055f, 0x055f, 0x055f, 0x055f, 0x055f, 0x055f, 0x055f, 0x055f, 0x055f, 0x055f, 0x055f, 0x055f, 0x055f, 0x055f, 0x055f, 
	0x0566, 0x0578, 0x0594, 0x05b8, 0x05e1, 0x060b, 0x0636, 0x065d, 0x067e, 0x0697, 0x06a6, 0x06a9, 0x069e, 0x0683, 0x0658, 0x061b, 
	0x05cc, 0x056c, 0x04fb, 0x047c, 0x03f2, 0x0366, 0x02e2, 0x027e, 0x0256, 0x021f, 0x022d, 0x0256, 0x0298, 0x02ef, 0x0358, 0x03d1, 
	0x0456, 0x04e5, 0x057a, 0x0613, 0x06ad, 0x0747, 0x07dd, 0x086f, 0x08fa, 0x097e, 0x09f8, 0x0a68, 0x0acd, 0x0b26, 0x0b72, 0x0bb3, 
	0x0be6, 0x0c0b, 0x0c22, 0x0c2a, 0x0c26, 0x0c1c, 0x0c0e, 0x0bff, 0x0bf0, 0x0be6, 0x0be2, 0x0be2, 0x0be2, 0x0be2, 0x0be2, 0x0be2, 
	0x0be2, 0x0be2, 0x0be2, 0x0be2, 0x0be2, 0x0be2, 0x0be2, 0x0be7, 0x0bf5, 0x0c06, 0x0c18, 0x0c25, 0x0c2a, 0x0c2a, 0x0c2a, 0x0c2a, 
	0x0c2a, 0x0c2a, 0x0c2a, 0x0c2a, 0x0c2a, 0x0c2a, 0x0c2a, 0x0c2a, 0x0c2a, 0x0c2a, 0x0c2a, 0x0c2a, 0x0c2a, 0x0c2a, 0x0c2a, 0x0c2a, 
	0x0c21, 0x0c09, 0x0be0, 0x0ba9, 0x0b64, 0x0b11, 0x0ab1, 0x0a45, 0x09cd, 0x094a, 0x08be, 0x082a, 0x0790, 0x06f1, 0x0651, 0x05b0, 
	0x0514, 0x047d, 0x03f0, 0x036f, 0x02fe, 0x02a1, 0x025b, 0x022e, 0x021f, 0xf159, 0xf066, 0xedef, 0xea90, 0xe6b8, 0xe2a8, 0xde83, 
	0xda5a, 0xd63a, 0xd22b, 0xce30, 0xca4e, 0xc689, 0xc2e1, 0xbf5b, 0xbbfb, 0xb8c2, 0xb5b5, 0xb2db, 0xb037, 0xadd1, 0xabb0, 0xa9da, 
	0xa85b, 0xa73d, 0xa68a, 0xa64c, 0xa66b, 0xa6ba, 0xa727, 0xa79d, 0xa80a, 0xa859, 0xa878, 0xa878, 0xa878, 0xa878, 0xa878, 0xa878, 
	0xa878, 0xa878, 0xa878, 0xa878, 0xa878, 0xa878, 0xa878, 0xa84f, 0xa7e8, 0xa762, 0xa6dc, 0xa675, 0xa64c, 0xa64c, 0xa64c, 0xa64c, 
	0xa64c, 0xa64c, 0xa64c, 0xa64c, 0xa64c, 0xa64c, 0xa64c, 0xa64c, 0xa64c, 0xa64c, 0xa64c, 0xa64c, 0xa64c, 0xa64c, 0xa64c, 0xa64c, 
	0xa68f, 0xa750, 0xa884, 0xaa1f, 0xac17, 0xae5e, 0xb0f0, 0xb3bf, 0xb6ca, 0xba06, 0xbd72, 0xc107, 0xc4c3, 0xc8a2, 0xcca0, 0xd0ba, 
	0xd4ec, 0xd931, 0xdd83, 0xe1d5, 0xe614, 0xea1e, 0xedb1, 0xf054, 0xf159, 0xf135, 0xf138, 0xf142, 0xf152, 0xf168, 0xf181, 0xf19e, 
	0xf1bd, 0xf1de, 0xf200, 0xf222, 0xf242, 0xf262, 0xf280, 0xf29b, 0xf2b4, 0xf2ca, 0xf2de, 0xf2ee, 0xf2fc, 0xf307, 0xf310, 0xf316, 
	0xf31b, 0xf31e, 0xf320, 0xf321, 0xf320, 0xf320, 0xf31f, 0xf31d, 0xf31c, 0xf31b, 0xf31b, 0xf31b, 0xf31b, 0xf31b, 0xf31b, 0xf31b, 
	0xf31b, 0xf31b, 0xf31b, 0xf31b, 0xf31b, 0xf31b, 0xf31b, 0xf31b, 0xf31c, 0xf31e, 0xf31f, 0xf320, 0xf321, 0xf321, 0xf321, 0xf321, 
	0xf321, 0xf321, 0xf321, 0xf321, 0xf321, 0xf321, 0xf321, 0xf321, 0xf321, 0xf321, 0xf321, 0xf321, 0xf321, 0xf321, 0xf321, 0xf321, 
	0xf320, 0xf31e, 0xf31a, 0xf315, 0xf30e, 0xf304, 0xf2f8, 0xf2e9, 0xf2d7, 0xf2c2, 0xf2aa, 0xf28e, 0xf271, 0xf251, 0xf22f, 0xf20c, 
	0xf1e9, 0xf1c6, 0xf1a5, 0xf187, 0xf16b, 0xf155, 0xf143, 0xf138, 0xf135, 0xff98, 0xff90, 0xff7b, 0xff59, 0xff2b, 0xfef2, 0xfeaf, 
	0xfe63, 0xfe10, 0xfdb5, 0xfd55, 0xfcf1, 0xfc89, 0xfc20, 0xfbb5, 0xfb4c, 0xfae5, 0xfa81, 0xfa22, 0xf9c9, 0xf978, 0xf92f, 0xf8f1, 
	0xf8bf, 0xf899, 0xf882, 0xf87a, 0xf87e, 0xf888, 0xf896, 0xf8a6, 0xf8b4, 0xf8bf, 0xf8c3, 0xf8c3, 0xf8c3, 0xf8c3, 0xf8c3, 0xf8c3, 
	0xf8c3, 0xf8c3, 0xf8c3, 0xf8c3, 0xf8c3, 0xf8c3, 0xf8c3, 0xf8bd, 0xf8b0, 0xf89e, 0xf88c, 0xf87f, 0xf87a, 0xf87a, 0xf87a, 0xf87a, 
	0xf87a, 0xf87a, 0xf87a, 0xf87a, 0xf87a, 0xf87a, 0xf87a, 0xf87a, 0xf87a, 0xf87a, 0xf87a, 0xf87a, 0xf87a, 0xf87a, 0xf87a, 0xf87a, 
	0xf882, 0xf89c, 0xf8c4, 0xf8fa, 0xf93d, 0xf98a, 0xf9e1, 0xfa3f, 0xfaa4, 0xfb0e, 0xfb7a, 0xfbe8, 0xfc57, 0xfcc4, 0xfd2e, 0xfd93, 
	0xfdf4, 0xfe4d, 0xfe9e, 0xfee5, 0xff22, 0xff54, 0xff79, 0xff90, 0xff98, 0x43ec, 0x43fd, 0x442e, 0x447d, 0x44e6, 0x4567, 0x45fe, 
	0x46a7, 0x4761, 0x4828, 0x48fa, 0x49d4, 0x4ab3, 0x4b94, 0x4c76, 0x4d55, 0x4e2e, 0x4f00, 0x4fc6, 0x507f, 0x5128, 0x51be, 0x523f, 
	0x52a8, 0x52f6, 0x5327, 0x5337, 0x532f, 0x5319, 0x52fc, 0x52db, 0x52be, 0x52a8, 0x52a0, 0x52a0, 0x52a0, 0x52a0, 0x52a0, 0x52a0, 
	0x52a0, 0x52a0, 0x52a0, 0x52a0, 0x52a0, 0x52a0, 0x52a0, 0x52ab, 0x52c7, 0x52ec, 0x5310, 0x532c, 0x5337, 0x5337, 0x5337, 0x5337, 
	0x5337, 0x5337, 0x5337, 0x5337, 0x5337, 0x5337, 0x5337, 0x5337, 0x5337, 0x5337, 0x5337, 0x5337, 0x5337, 0x5337, 0x5337, 0x5337, 
	0x5325, 0x52f1, 0x529c, 0x522c, 0x51a2, 0x5101, 0x504d, 0x4f88, 0x4eb5, 0x4dd8, 0x4cf3, 0x4c0a, 0x4b1f, 0x4a35, 0x4950, 0x4872, 
	0x479f, 0x46da, 0x4625, 0x4584, 0x44f9, 0x4488, 0x4433, 0x43ff, 0x43ec, 0x0748, 0x0785, 0x0825, 0x0901, 0x09fa, 0x0b01, 0x0c0d, 
	0x0d17, 0x0e1f, 0x0f21, 0x101e, 0x1114, 0x1204, 0x12ec, 0x13cc, 0x14a5, 0x1573, 0x1638, 0x16f1, 0x179c, 0x1838, 0x18c3, 0x1939, 
	0x1999, 0x19e1, 0x1a0d, 0x1a1c, 0x1a15, 0x1a01, 0x19e6, 0x19c9, 0x19ad, 0x199a, 0x1992, 0x1992, 0x1992, 0x1992, 0x1992, 0x1992, 
	0x1992, 0x1992, 0x1992, 0x1992, 0x1992, 0x1992, 0x1992, 0x199c, 0x19b6, 0x19d7, 0x19f9, 0x1a12, 0x1a1c, 0x1a1c, 0x1a1c, 0x1a1c, 
	0x1a1c, 0x1a1c, 0x1a1c, 0x1a1c, 0x1a1c, 0x1a1c, 0x1a1c, 0x1a1c, 0x1a1c, 0x1a1c, 0x1a1c, 0x1a1c, 0x1a1c, 0x1a1c, 0x1a1c, 0x1a1c, 
	0x1a0c, 0x19dc, 0x198f, 0x1928, 0x18a8, 0x1814, 0x176e, 0x16b7, 0x15f2, 0x1522, 0x1446, 0x1362, 0x1274, 0x117f, 0x1082, 0x0f7d, 
	0x0e72, 0x0d61, 0x0c4d, 0x0b36, 0x0a24, 0x091d, 0x0835, 0x078a, 0x0748, 0x0c11, 0x0bfa, 0x0bb9, 0x0b59, 0x0ade, 0x0a4f, 0x09ac, 
	0x08f8, 0x0833, 0x0760, 0x067d, 0x058c, 0x048c, 0x0381, 0x0268, 0x0144, 0x0018, 0xfee4, 0xfdae, 0xfc7a, 0xfb4d, 0xfa31, 0xf930, 
	0xf853, 0xf7a7, 0xf739, 0xf713, 0xf726, 0xf757, 0xf79a, 0xf7e2, 0xf823, 0xf852, 0xf864, 0xf864, 0xf864, 0xf864, 0xf864, 0xf864, 
	0xf864, 0xf864, 0xf864, 0xf864, 0xf864, 0xf864, 0xf864, 0xf84b, 0xf80e, 0xf7be, 0xf76c, 0xf72c, 0xf713, 0xf713, 0xf713, 0xf713, 
	0xf713, 0xf713, 0xf713, 0xf713, 0xf713, 0xf713, 0xf713, 0xf713, 0xf713, 0xf713, 0xf713, 0xf713, 0xf713, 0xf713, 0xf713, 0xf713, 
	0xf73c, 0xf7b3, 0xf86b, 0xf957, 0xfa68, 0xfb94, 0xfcd0, 0xfe11, 0xff54, 0x0091, 0x01c7, 0x02f0, 0x040e, 0x051d, 0x061e, 0x070f, 
	0x07f1, 0x08c2, 0x0982, 0x0a30, 0x0ac9, 0x0b4b, 0x0bb3, 0x0bf8, 0x0c11, 0x07e6, 0x0882, 0x0a19, 0x0c4a, 0x0ec9, 0x116d, 0x141f, 
	0x16d0, 0x197d, 0x1c1c, 0x1ead, 0x212d, 0x239a, 0x25f0, 0x2832, 0x2a5b, 0x2c68, 0x2e59, 0x3029, 0x31d5, 0x335d, 0x34b6, 0x35de, 
	0x36d1, 0x3786, 0x37f7, 0x381e, 0x380b, 0x37d9, 0x3794, 0x3749, 0x3704, 0x36d2, 0x36bf, 0x36bf, 0x36bf, 0x36bf, 0x36bf, 0x36bf, 
	0x36bf, 0x36bf, 0x36bf, 0x36bf, 0x36bf, 0x36bf, 0x36bf, 0x36d9, 0x371a, 0x376e, 0x37c3, 0x3804, 0x381e, 0x381e, 0x381e, 0x381e, 
	0x381e, 0x381e, 0x381e, 0x381e, 0x381e, 0x381e, 0x381e, 0x381e, 0x381e, 0x381e, 0x381e, 0x381e, 0x381e, 0x381e, 0x381e, 0x381e, 
	0x37f4, 0x377a, 0x36b7, 0x35b2, 0x3475, 0x3303, 0x3161, 0x2f99, 0x2da9, 0x2b99, 0x296a, 0x2720, 0x24bc, 0x2240, 0x1fb0, 0x1d0b, 
	0x1a55, 0x1792, 0x14c5, 0x11f7, 0x0f33, 0x0c93, 0x0a42, 0x088e, 0x07e6, 0xfec1, 0xfeae, 0xfe7f, 0xfe40, 0xfdfc, 0xfdb8, 0xfd79, 
	0xfd40, 0xfd0e, 0xfce5, 0xfcc4, 0xfcab, 0xfc9b, 0xfc91, 0xfc8f, 0xfc92, 0xfc9b, 0xfca8, 0xfcb7, 0xfcc9, 0xfcdc, 0xfcef, 0xfd00, 
	0xfd0f, 0xfd1b, 0xfd23, 0xfd26, 0xfd24, 0xfd21, 0xfd1c, 0xfd17, 0xfd13, 0xfd0f, 0xfd0e, 0xfd0e, 0xfd0e, 0xfd0e, 0xfd0e, 0xfd0e, 
	0xfd0e, 0xfd0e, 0xfd0e, 0xfd0e, 0xfd0e, 0xfd0e, 0xfd0e, 0xfd10, 0xfd14, 0xfd1a, 0xfd1f, 0xfd24, 0xfd26, 0xfd26, 0xfd26, 0xfd26, 
	0xfd26, 0xfd26, 0xfd26, 0xfd26, 0xfd26, 0xfd26, 0xfd26, 0xfd26, 0xfd26, 0xfd26, 0xfd26, 0xfd26, 0xfd26, 0xfd26, 0xfd26, 0xfd26, 
	0xfd23, 0xfd1a, 0xfd0e, 0xfcfe, 0xfceb, 0xfcd8, 0xfcc4, 0xfcb2, 0xfca3, 0xfc97, 0xfc90, 0xfc8f, 0xfc95, 0xfca3, 0xfcb9, 0xfcd8, 
	0xfd00, 0xfd31, 0xfd6a, 0xfdab, 0xfdf1, 0xfe38, 0xfe7a, 0xfead, 0xfec1, 0xff67, 0xff60, 0xff4a, 0xff29, 0xfefc, 0xfec6, 0xfe88, 
	0xfe43, 0xfdfa, 0xfdae, 0xfd5f, 0xfd10, 0xfcc2, 0xfc75, 0xfc2b, 0xfbe4, 0xfba2, 0xfb64, 0xfb2b, 0xfaf9, 0xfacc, 0xfaa5, 0xfa85, 
	0xfa6b, 0xfa58, 0xfa4d, 0xfa49, 0xfa4b, 0xfa50, 0xfa57, 0xfa5f, 0xfa66, 0xfa6b, 0xfa6d, 0xfa6d, 0xfa6d, 0xfa6d, 0xfa6d, 0xfa6d, 
	0xfa6d, 0xfa6d, 0xfa6d, 0xfa6d, 0xfa6d, 0xfa6d, 0xfa6d, 0xfa6a, 0xfa64, 0xfa5b, 0xfa52, 0xfa4c, 0xfa49, 0xfa49, 0xfa49, 0xfa49, 
	0xfa49, 0xfa49, 0xfa49, 0xfa49, 0xfa49, 0xfa49, 0xfa49, 0xfa49, 0xfa49, 0xfa49, 0xfa49, 0xfa49, 0xfa49, 0xfa49, 0xfa49, 0xfa49, 
	0xfa4d, 0xfa5a, 0xfa6e, 0xfa89, 0xfaac, 0xfad6, 0xfb06, 0xfb3d, 0xfb7a, 0xfbbc, 0xfc03, 0xfc4e, 0xfc9d, 0xfcee, 0xfd40, 0xfd91, 
	0xfde2, 0xfe2f, 0xfe78, 0xfeba, 0xfef4, 0xff24, 0xff48, 0xff5f, 0xff67, 0xf0e7, 0xeffc, 0xed95, 0xea47, 0xe67e, 0xe27a, 0xde5e, 
	0xda41, 0xd629, 0xd225, 0xce34, 0xca5f, 0xc6a8, 0xc314, 0xbfa2, 0xbc59, 0xb93c, 0xb64d, 0xb394, 0xb113, 0xaece, 0xacce, 0xab1a, 
	0xa9b7, 0xa8af, 0xa80a, 0xa7d1, 0xa7ed, 0xa837, 0xa89b, 0xa908, 0xa96c, 0xa9b5, 0xa9d1, 0xa9d1, 0xa9d1, 0xa9d1, 0xa9d1, 0xa9d1, 
	0xa9d1, 0xa9d1, 0xa9d1, 0xa9d1, 0xa9d1, 0xa9d1, 0xa9d1, 0xa9ab, 0xa94c, 0xa8d1, 0xa856, 0xa7f7, 0xa7d1, 0xa7d1, 0xa7d1, 0xa7d1, 
	0xa7d1, 0xa7d1, 0xa7d1, 0xa7d1, 0xa7d1, 0xa7d1, 0xa7d1, 0xa7d1, 0xa7d1, 0xa7d1, 0xa7d1, 0xa7d1, 0xa7d1, 0xa7d1, 0xa7d1, 0xa7d1, 
	0xa80f, 0xa8c0, 0xa9dd, 0xab5b, 0xad2f, 0xaf53, 0xb1c0, 0xb46d, 0xb757, 0xba76, 0xbdc7, 0xc144, 0xc4ec, 0xc8b9, 0xcca8, 0xd0b6, 
	0xd4dd, 0xd919, 0xdd61, 0xe1a9, 0xe5dc, 0xe9d7, 0xed58, 0xefea, 0xf0e7, 0x0642, 0x063f, 0x0635, 0x0627, 0x0614, 0x05fd, 0x05e4, 
	0x05c9, 0x05ac, 0x0590, 0x0575, 0x055a, 0x0542, 0x052c, 0x0518, 0x0508, 0x04fa, 0x04f0, 0x04e8, 0x04e2, 0x04df, 0x04de, 0x04dd, 
	0x04de, 0x04df, 0x04df, 0x04df, 0x04df, 0x04df, 0x04df, 0x04de, 0x04de, 0x04de, 0x04de, 0x04de, 0x04de, 0x04de, 0x04de, 0x04de, 
	0x04de, 0x04de, 0x04de, 0x04de, 0x04de, 0x04de, 0x04de, 0x04de, 0x04de, 0x04de, 0x04df, 0x04df, 0x04df, 0x04df, 0x04df, 0x04df, 
	0x04df, 0x04df, 0x04df, 0x04df, 0x04df, 0x04df, 0x04df, 0x04df, 0x04df, 0x04df, 0x04df, 0x04df, 0x04df, 0x04df, 0x04df, 0x04df, 
	0x04df, 0x04df, 0x04de, 0x04dd, 0x04de, 0x04e0, 0x04e4, 0x04ea, 0x04f3, 0x04ff, 0x050f, 0x0521, 0x0537, 0x054f, 0x056a, 0x0586, 
	0x05a3, 0x05c1, 0x05dd, 0x05f8, 0x0610, 0x0625, 0x0634, 0x063e, 0x0642, 0x039f, 0x03a9, 0x03c4, 0x03f0, 0x042b, 0x0475, 0x04ca, 
	0x052b, 0x0596, 0x0609, 0x0683, 0x0702, 0x0785, 0x080a, 0x088f, 0x0913, 0x0994, 0x0a11, 0x0a87, 0x0af5, 0x0b5a, 0x0bb3, 0x0c00, 
	0x0c3e, 0x0c6c, 0x0c89, 0x0c93, 0x0c8e, 0x0c81, 0x0c70, 0x0c5d, 0x0c4b, 0x0c3e, 0x0c39, 0x0c39, 0x0c39, 0x0c39, 0x0c39, 0x0c39, 
	0x0c39, 0x0c39, 0x0c39, 0x0c39, 0x0c39, 0x0c39, 0x0c39, 0x0c40, 0x0c51, 0x0c66, 0x0c7c, 0x0c8d, 0x0c93, 0x0c93, 0x0c93, 0x0c93, 
	0x0c93, 0x0c93, 0x0c93, 0x0c93, 0x0c93, 0x0c93, 0x0c93, 0x0c93, 0x0c93, 0x0c93, 0x0c93, 0x0c93, 0x0c93, 0x0c93, 0x0c93, 0x0c93, 
	0x0c88, 0x0c69, 0x0c37, 0x0bf4, 0x0ba2, 0x0b43, 0x0ad7, 0x0a62, 0x09e5, 0x0961, 0x08d9, 0x084f, 0x07c5, 0x073b, 0x06b5, 0x0634, 
	0x05ba, 0x0548, 0x04e1, 0x0485, 0x0436, 0x03f6, 0x03c7, 0x03a9, 0x039f, 0x42ec, 0x42fc, 0x4329, 0x4372, 0x43d3, 0x444b, 0x44d6, 
	0x4573, 0x461f, 0x46d8, 0x479b, 0x4865, 0x4935, 0x4a07, 0x4ada, 0x4bab, 0x4c76, 0x4d3b, 0x4df5, 0x4ea4, 0x4f43, 0x4fd1, 0x504b, 
	0x50af, 0x50f9, 0x5127, 0x5137, 0x512f, 0x511a, 0x50fe, 0x50e0, 0x50c4, 0x50af, 0x50a7, 0x50a7, 0x50a7, 0x50a7, 0x50a7, 0x50a7, 
	0x50a7, 0x50a7, 0x50a7, 0x50a7, 0x50a7, 0x50a7, 0x50a7, 0x50b2, 0x50cc, 0x50ef, 0x5112, 0x512c, 0x5137, 0x5137, 0x5137, 0x5137, 
	0x5137, 0x5137, 0x5137, 0x5137, 0x5137, 0x5137, 0x5137, 0x5137, 0x5137, 0x5137, 0x5137, 0x5137, 0x5137, 0x5137, 0x5137, 0x5137, 
	0x5126, 0x50f4, 0x50a4, 0x5039, 0x4fb6, 0x4f1e, 0x4e74, 0x4dbb, 0x4cf5, 0x4c26, 0x4b4f, 0x4a75, 0x499a, 0x48c0, 0x47eb, 0x471d, 
	0x4659, 0x45a2, 0x44fb, 0x4465, 0x43e5, 0x437c, 0x432e, 0x42fd, 0x42ec, };

JointIndex gWereCitIdle2AnimJointIndices[17] = {
	{ 0x0000, 0x0009, 0x0000, },
	{ 0x0000, 0x0000, 0x0000, },
	{ 0x0069, 0x00c9, 0x0129, },
	{ 0x0189, 0x01e9, 0x0249, },
	{ 0x02a9, 0x0309, 0x0369, },
	{ 0x03c9, 0x0429, 0x0489, },
	{ 0x04e9, 0x0549, 0x05a9, },
	{ 0x0609, 0x0669, 0x06c9, },
	{ 0x0001, 0x0002, 0x0003, },
	{ 0x0004, 0x0005, 0x0006, },
	{ 0x0007, 0x0008, 0x0000, },
	{ 0x0729, 0x0789, 0x07e9, },
	{ 0x0849, 0x08a9, 0x0909, },
	{ 0x0969, 0x09c9, 0x0a29, },
	{ 0x0a89, 0x0ae9, 0x0b49, },
	{ 0x0ba9, 0x0c09, 0x0c69, },
	{ 0x0cc9, 0x0d29, 0x0d89, },
};

AnimationHeader gWereCitIdle2Anim = { { 96 }, gWereCitIdle2AnimFrameData, gWereCitIdle2AnimJointIndices, 9 };
