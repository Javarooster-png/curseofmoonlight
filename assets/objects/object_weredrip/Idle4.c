#include "ultra64.h"
#include "global.h"

s16 gWereCitIdle4AnimFrameData[1345] = {
	0x0000, 0xfd31, 0xffff, 0xfb8d, 0x0932, 0x8d42, 0x3686, 0xe83b, 0x18f5, 0x002f, 0x0001, 0xfef0, 0x8000, 0x4000, 0xf945, 0xf3a4, 
	0x07ea, 0x0256, 0x021f, 0xf159, 0xf135, 0xff98, 0x43ec, 0x0748, 0x0c11, 0x07e6, 0xfec1, 0xff67, 0xf0e7, 0x0642, 0x039f, 0x42ec, 
	0x0000, 0xffb2, 0xfee8, 0xfdca, 0xfc82, 0xfb3a, 0xfa1b, 0xf951, 0xf904, 0xf905, 0xf908, 0xf90c, 0xf912, 0xf919, 0xf921, 0xf92b, 
	0xf935, 0xf941, 0xf94d, 0xf959, 0xf967, 0xf974, 0xf982, 0xf990, 0xf99e, 0xf9ac, 0xf9b9, 0xf9c6, 0xf9d3, 0xf9df, 0xf9ea, 0xf9f5, 
	0xf9fe, 0xfa07, 0xfa0e, 0xfa14, 0xfa18, 0xfa1b, 0xfa1b, 0xfa1b, 0xfa1b, 0xfa1b, 0xfa1b, 0xfa1b, 0xfa1b, 0xfa1b, 0xfa1b, 0xfa1b, 
	0xfa1b, 0xfa1b, 0xfa1b, 0xfa1b, 0xfa1b, 0xfa1b, 0xfa1b, 0xfa1b, 0xfa1b, 0xfa1b, 0xfa1b, 0xfa1b, 0xfa1b, 0xfa1e, 0xfa26, 0xfa34, 
	0xfa46, 0xfa5c, 0xfa77, 0xfa96, 0xfab8, 0xfade, 0xfb07, 0xfb33, 0xfb61, 0xfb92, 0xfbc4, 0xfbf8, 0xfc2e, 0xfc65, 0xfc9d, 0xfcd5, 
	0xfd0d, 0xfd46, 0xfd7e, 0xfdb6, 0xfded, 0xfe22, 0xfe57, 0xfe89, 0xfeba, 0xfee8, 0xff14, 0xff3d, 0xff62, 0xff85, 0xffa4, 0xffbe, 
	0xffd5, 0xffe7, 0xfff4, 0xfffc, 0x0000, 0x1f3c, 0x1f3c, 0x1f3c, 0x1f3c, 0x1f3c, 0x1f3c, 0x1f3c, 0x1f3c, 0x1f3c, 0x1f3c, 0x1f3b, 
	0x1f39, 0x1f36, 0x1f31, 0x1f2a, 0x1f21, 0x1f16, 0x1f08, 0x1ef8, 0x1ee4, 0x1ecd, 0x1eb2, 0x1e93, 0x1e70, 0x1e49, 0x1e1d, 0x1dec, 
	0x1db6, 0x1d7b, 0x1d3a, 0x1cf3, 0x1ca5, 0x1c52, 0x1bf7, 0x1b96, 0x1b2e, 0x1abd, 0x1a46, 0x19c6, 0x193d, 0x18ad, 0x1818, 0x177e, 
	0x16e3, 0x1648, 0x15af, 0x151b, 0x148c, 0x1407, 0x138c, 0x131e, 0x12be, 0x1271, 0x1236, 0x1212, 0x1205, 0x1216, 0x1246, 0x1293, 
	0x12f8, 0x1372, 0x13fe, 0x1498, 0x153b, 0x15e6, 0x1695, 0x1744, 0x17f1, 0x1897, 0x1934, 0x19c6, 0x1a4b, 0x1ac8, 0x1b3d, 0x1ba9, 
	0x1c0d, 0x1c6a, 0x1cc0, 0x1d0e, 0x1d56, 0x1d97, 0x1dd3, 0x1e08, 0x1e38, 0x1e63, 0x1e89, 0x1eaa, 0x1ec7, 0x1ee0, 0x1ef5, 0x1f07, 
	0x1f15, 0x1f21, 0x1f2a, 0x1f31, 0x1f36, 0x1f39, 0x1f3b, 0x1f3c, 0x1f3c, 0x1f3c, 0x0313, 0x0313, 0x0313, 0x0313, 0x0313, 0x0313, 
	0x0313, 0x0313, 0x0313, 0x0318, 0x0326, 0x033e, 0x035e, 0x0386, 0x03b7, 0x03ee, 0x042c, 0x0470, 0x04b9, 0x0508, 0x055c, 0x05b4, 
	0x0610, 0x066f, 0x06d1, 0x0736, 0x079c, 0x0804, 0x086e, 0x08d7, 0x0941, 0x09ab, 0x0a14, 0x0a7c, 0x0ae3, 0x0b48, 0x0bab, 0x0c0b, 
	0x0c68, 0x0cc5, 0x0d22, 0x0d80, 0x0ddd, 0x0e39, 0x0e92, 0x0ee9, 0x0f3b, 0x0f89, 0x0fd1, 0x1013, 0x104d, 0x107f, 0x10a7, 0x10c4, 
	0x10d7, 0x10dd, 0x10d5, 0x10bc, 0x1095, 0x1061, 0x1022, 0x0fd8, 0x0f86, 0x0f2d, 0x0ecd, 0x0e6a, 0x0e04, 0x0d9c, 0x0d34, 0x0ccd, 
	0x0c68, 0x0c04, 0x0b9d, 0x0b35, 0x0acc, 0x0a62, 0x09f7, 0x098c, 0x0921, 0x08b6, 0x084c, 0x07e4, 0x077c, 0x0717, 0x06b4, 0x0654, 
	0x05f6, 0x059d, 0x0547, 0x04f6, 0x04a9, 0x0462, 0x0420, 0x03e5, 0x03af, 0x0381, 0x035b, 0x033c, 0x0325, 0x0317, 0x0313, 0x02f4, 
	0x02f4, 0x02f4, 0x02f4, 0x02f4, 0x02f4, 0x02f4, 0x02f4, 0x02f4, 0x02f4, 0x02f4, 0x02f5, 0x02f7, 0x02f9, 0x02fc, 0x0300, 0x0306, 
	0x030c, 0x0315, 0x031e, 0x032a, 0x0337, 0x0346, 0x0357, 0x036a, 0x037f, 0x0396, 0x03b0, 0x03cb, 0x03ea, 0x040b, 0x042e, 0x0454, 
	0x047c, 0x04a8, 0x04d6, 0x0507, 0x053c, 0x0573, 0x05ab, 0x05e1, 0x0614, 0x0644, 0x0671, 0x069b, 0x06c1, 0x06e3, 0x0701, 0x071c, 
	0x0733, 0x0746, 0x0756, 0x0762, 0x076a, 0x076f, 0x0771, 0x076f, 0x0768, 0x075d, 0x074d, 0x0739, 0x071f, 0x0701, 0x06de, 0x06b6, 
	0x068a, 0x0659, 0x0624, 0x05ec, 0x05b1, 0x0573, 0x0536, 0x04fd, 0x04c8, 0x0496, 0x0468, 0x043d, 0x0415, 0x03f0, 0x03ce, 0x03b0, 
	0x0394, 0x037b, 0x0364, 0x0350, 0x033e, 0x032f, 0x0322, 0x0317, 0x030d, 0x0306, 0x0300, 0x02fb, 0x02f8, 0x02f6, 0x02f4, 0x02f3, 
	0x02f3, 0x02f3, 0x02f4, 0x02f4, 0xf092, 0xf0c3, 0xf147, 0xf20a, 0xf2f5, 0xf3ec, 0xf4ce, 0xf574, 0xf5b4, 0xf58a, 0xf51f, 0xf48e, 
	0xf3f3, 0xf35d, 0xf2d6, 0xf265, 0xf210, 0xf1dc, 0xf1cf, 0xf1f7, 0xf25d, 0xf314, 0xf429, 0xf5aa, 0xf7a4, 0xfa17, 0xfcfa, 0x0039, 
	0x03b7, 0x0752, 0x0ae9, 0x0e5c, 0x1191, 0x146e, 0x16e3, 0x18e2, 0x1a5d, 0x1b49, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 
	0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 
	0x1b9a, 0x1b69, 0x1ad8, 0x19ec, 0x18aa, 0x1717, 0x1538, 0x1313, 0x10af, 0x0e10, 0x0b46, 0x0858, 0x0554, 0x0249, 0xff45, 0xfc5c, 
	0xf99a, 0xf70f, 0xf4c3, 0xf2bd, 0xf100, 0xef8a, 0xee5a, 0xed67, 0xecad, 0xec26, 0xebcd, 0xeb9b, 0xeb8e, 0xeba2, 0xebd5, 0xec22, 
	0xec89, 0xed08, 0xed98, 0xee37, 0xeedd, 0xef7e, 0xf00b, 0xf06d, 0xf092, 0xf40b, 0xf3bc, 0xf2ee, 0xf1cb, 0xf07e, 0xef33, 0xee14, 
	0xed4a, 0xecfe, 0xed03, 0xed15, 0xed3c, 0xed81, 0xedeb, 0xee81, 0xef49, 0xf04a, 0xf187, 0xf302, 0xf4be, 0xf6b7, 0xf8e7, 0xfb44, 
	0xfdbe, 0x0040, 0x02b3, 0x04fe, 0x070e, 0x08d2, 0x0a44, 0x0b63, 0x0c37, 0x0cc9, 0x0d26, 0x0d5c, 0x0d76, 0x0d7f, 0x0d81, 0x0d81, 
	0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 
	0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d84, 0x0d8d, 0x0d99, 0x0da4, 0x0daa, 0x0da6, 0x0d90, 0x0d64, 0x0d1a, 0x0cac, 
	0x0c13, 0x0b4c, 0x0a53, 0x0928, 0x07cd, 0x0648, 0x04a0, 0x02e1, 0x0117, 0xff4c, 0xfd8f, 0xfbe9, 0xfa61, 0xf8fe, 0xf7c3, 0xf6b4, 
	0xf5cf, 0xf514, 0xf481, 0xf412, 0xf3c6, 0xf397, 0xf382, 0xf381, 0xf391, 0xf3ac, 0xf3cc, 0xf3ec, 0xf402, 0xf40b, 0x6c6a, 0x6c5a, 
	0x6c30, 0x6bf1, 0x6ba2, 0x6b4c, 0x6afa, 0x6abd, 0x6aa5, 0x6a50, 0x696b, 0x6821, 0x6698, 0x64ee, 0x6336, 0x6183, 0x5fdf, 0x5e58, 
	0x5cf7, 0x5bc7, 0x5ad1, 0x5a1e, 0x59b5, 0x599b, 0x59d3, 0x5a5a, 0x5b27, 0x5c2e, 0x5d5d, 0x5ea0, 0x5fe6, 0x611d, 0x623a, 0x6332, 
	0x6402, 0x64a6, 0x651d, 0x6565, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 
	0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x656e, 0x6541, 0x64f6, 0x648e, 0x640a, 
	0x636a, 0x62b0, 0x61dd, 0x60f3, 0x5ff9, 0x5ef3, 0x5de8, 0x5ce2, 0x5bea, 0x5b09, 0x5a4a, 0x59b4, 0x594f, 0x591e, 0x5922, 0x595c, 
	0x59ca, 0x5a66, 0x5b2c, 0x5c18, 0x5d24, 0x5e49, 0x5f83, 0x60cd, 0x6221, 0x6379, 0x64d4, 0x662a, 0x6777, 0x68b4, 0x69da, 0x6add, 
	0x6bad, 0x6c38, 0x6c6a, 0x109f, 0x10b6, 0x10f0, 0x113a, 0x1184, 0x11c2, 0x11ef, 0x120a, 0x1213, 0x12c7, 0x14a9, 0x1756, 0x1a72, 
	0x1dc3, 0x2122, 0x2477, 0x27b3, 0x2acc, 0x2dbc, 0x3079, 0x32fe, 0x353d, 0x372d, 0x38c4, 0x39f5, 0x3ab9, 0x3b0e, 0x3af8, 0x3a83, 
	0x39be, 0x38bd, 0x3794, 0x3656, 0x351c, 0x33f6, 0x32f7, 0x3231, 0x31b1, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 
	0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 
	0x319f, 0x31ee, 0x326b, 0x3312, 0x33da, 0x34bc, 0x35b1, 0x36b1, 0x37b5, 0x38af, 0x3999, 0x3a69, 0x3b15, 0x3b95, 0x3be0, 0x3bf0, 
	0x3bbe, 0x3b4a, 0x3a93, 0x399c, 0x3868, 0x36fb, 0x355d, 0x3393, 0x31a2, 0x2f8c, 0x2d58, 0x2b08, 0x289e, 0x261d, 0x238b, 0x20e9, 
	0x1e3e, 0x1b94, 0x18f4, 0x1676, 0x1433, 0x1256, 0x1113, 0x109f, 0xfcbe, 0xfcb8, 0xfca8, 0xfc93, 0xfc7e, 0xfc6b, 0xfc5e, 0xfc56, 
	0xfc53, 0xfc1c, 0xfb7f, 0xfa85, 0xf93d, 0xf7b3, 0xf5f6, 0xf414, 0xf21b, 0xf01b, 0xee1f, 0xec38, 0xea6e, 0xe8d3, 0xe770, 0xe64e, 
	0xe576, 0xe4ed, 0xe4b1, 0xe4c0, 0xe512, 0xe59d, 0xe653, 0xe727, 0xe80a, 0xe8eb, 0xe9bd, 0xea73, 0xeb00, 0xeb5b, 0xeb7b, 0xeb7b, 
	0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 
	0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb68, 0xeb30, 0xead7, 0xea60, 0xe9d1, 0xe92f, 0xe880, 0xe7c9, 0xe70f, 0xe65d, 0xe5b7, 
	0xe525, 0xe4ac, 0xe452, 0xe41e, 0xe414, 0xe436, 0xe487, 0xe507, 0xe5b5, 0xe690, 0xe794, 0xe8bc, 0xea04, 0xeb66, 0xecde, 0xee64, 
	0xeff3, 0xf186, 0xf317, 0xf49d, 0xf614, 0xf776, 0xf8bc, 0xf9df, 0xfada, 0xfba7, 0xfc3f, 0xfc9e, 0xfcbe, 0x0afa, 0x0b09, 0x0b2e, 
	0x0b5d, 0x0b8b, 0x0bb3, 0x0bd0, 0x0be1, 0x0be7, 0x0c58, 0x0d85, 0x0f29, 0x1103, 0x12e9, 0x14be, 0x1671, 0x17f9, 0x1950, 0x1a73, 
	0x1b63, 0x1c22, 0x1cb3, 0x1d1c, 0x1d62, 0x1d8f, 0x1da7, 0x1db1, 0x1dae, 0x1da1, 0x1d87, 0x1d61, 0x1d2f, 0x1cf1, 0x1cab, 0x1c64, 
	0x1c21, 0x1be9, 0x1bc3, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 
	0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bbe, 0x1bd5, 0x1bfa, 0x1c28, 0x1c5d, 0x1c95, 
	0x1ccd, 0x1d03, 0x1d35, 0x1d5f, 0x1d82, 0x1d9d, 0x1db1, 0x1dbf, 0x1dc6, 0x1dc7, 0x1dc2, 0x1db7, 0x1da3, 0x1d83, 0x1d54, 0x1d12, 
	0x1cba, 0x1c4a, 0x1bbf, 0x1b16, 0x1a4f, 0x1968, 0x1862, 0x173d, 0x15fc, 0x14a0, 0x132d, 0x11ab, 0x1022, 0x0ea1, 0x0d3c, 0x0c11, 
	0x0b44, 0x0afa, 0xcc96, 0xcc96, 0xcc96, 0xcc96, 0xcc96, 0xcc96, 0xcc96, 0xcc96, 0xcc96, 0xcc9f, 0xccb9, 0xcce4, 0xcd1f, 0xcd6c, 
	0xcdca, 0xce3a, 0xcebd, 0xcf54, 0xd001, 0xd0c4, 0xd19f, 0xd293, 0xd3a1, 0xd4c8, 0xd608, 0xd760, 0xd8cf, 0xda50, 0xdbdf, 0xdd75, 
	0xdf0b, 0xe098, 0xe211, 0xe36c, 0xe49e, 0xe59c, 0xe65c, 0xe6d5, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 
	0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6e7, 
	0xe6a2, 0xe633, 0xe59c, 0xe4e3, 0xe40b, 0xe319, 0xe211, 0xe0f9, 0xdfd3, 0xdea6, 0xdd75, 0xdc44, 0xdb16, 0xd9ee, 0xd8cf, 0xd7ba, 
	0xd6b1, 0xd5b6, 0xd4c8, 0xd3e8, 0xd317, 0xd254, 0xd19f, 0xd0f9, 0xd060, 0xcfd4, 0xcf54, 0xcee1, 0xce79, 0xce1c, 0xcdca, 0xcd81, 
	0xcd43, 0xcd0f, 0xcce4, 0xccc2, 0xccaa, 0xcc9b, 0xcc96, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 
	0x1652, 0x1690, 0x16f2, 0x1778, 0x181c, 0x18dd, 0x19b8, 0x1aa8, 0x1bab, 0x1cbd, 0x1ddb, 0x1f00, 0x202a, 0x2153, 0x2279, 0x2398, 
	0x24ac, 0x25b2, 0x26a7, 0x2788, 0x2854, 0x290a, 0x29a8, 0x2a2f, 0x2a9e, 0x2af8, 0x2b3d, 0x2b6d, 0x2b8a, 0x2b94, 0x2b94, 0x2b94, 
	0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 
	0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b8f, 0x2b7e, 0x2b63, 0x2b3d, 0x2b0b, 0x2ace, 0x2a85, 0x2a2f, 0x29cc, 0x295c, 0x28df, 0x2854, 
	0x27bd, 0x271a, 0x266c, 0x25b2, 0x24ef, 0x2424, 0x2351, 0x2279, 0x219d, 0x20bf, 0x1fdf, 0x1f00, 0x1e23, 0x1d4b, 0x1c77, 0x1bab, 
	0x1ae7, 0x1a2d, 0x197f, 0x18dd, 0x184a, 0x17c6, 0x1753, 0x16f2, 0x16a5, 0x166c, 0x1649, 0x163d, 0xe668, 0xe668, 0xe668, 0xe668, 
	0xe668, 0xe668, 0xe668, 0xe668, 0xe668, 0xe675, 0xe69d, 0xe6de, 0xe738, 0xe7a9, 0xe832, 0xe8d2, 0xe98a, 0xea5b, 0xeb43, 0xec46, 
	0xed61, 0xee97, 0xefe6, 0xf14f, 0xf2d1, 0xf469, 0xf616, 0xf7d3, 0xf99b, 0xfb67, 0xfd2f, 0xfeea, 0x008d, 0x020c, 0x035d, 0x0474, 
	0x0546, 0x05ca, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 
	0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05de, 0x0592, 0x0518, 0x0474, 0x03a8, 0x02bb, 0x01b1, 
	0x008d, 0xff55, 0xfe0f, 0xfcbe, 0xfb67, 0xfa0e, 0xf8b6, 0xf763, 0xf616, 0xf4d3, 0xf39a, 0xf26e, 0xf14f, 0xf03e, 0xef3b, 0xee47, 
	0xed61, 0xec8a, 0xebc1, 0xeb07, 0xea5b, 0xe9bc, 0xe92b, 0xe8a8, 0xe832, 0xe7c9, 0xe76d, 0xe71f, 0xe6de, 0xe6ab, 0xe686, 0xe66f, 
	0xe668, };

JointIndex gWereCitIdle4AnimJointIndices[17] = {
	{ 0x0000, 0x0000, 0x0000, },
	{ 0x0000, 0x0000, 0x0000, },
	{ 0x0001, 0x0020, 0x0002, },
	{ 0x0085, 0x00ea, 0x014f, },
	{ 0x0003, 0x0004, 0x0005, },
	{ 0x01b4, 0x0219, 0x027e, },
	{ 0x02e3, 0x0348, 0x03ad, },
	{ 0x0412, 0x0477, 0x04dc, },
	{ 0x0006, 0x0007, 0x0008, },
	{ 0x0009, 0x000a, 0x000b, },
	{ 0x000c, 0x000d, 0x0000, },
	{ 0x000e, 0x000f, 0x0010, },
	{ 0x0011, 0x0012, 0x0013, },
	{ 0x0014, 0x0015, 0x0016, },
	{ 0x0017, 0x0018, 0x0019, },
	{ 0x001a, 0x001b, 0x001c, },
	{ 0x001d, 0x001e, 0x001f, },
};

AnimationHeader gWereCitIdle4Anim = { { 101 }, gWereCitIdle4AnimFrameData, gWereCitIdle4AnimJointIndices, 32 };
