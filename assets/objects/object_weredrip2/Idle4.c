#include "ultra64.h"
#include "global.h"

s16 gWereCit2Idle4AnimFrameData[1951] = {
	0x0000, 0xfd31, 0xffff, 0x00d9, 0xebf1, 0x1d8b, 0x22c3, 0xedba, 0x14e0, 0xd177, 0xf89f, 0xf082, 0x8000, 0x4000, 0xf945, 0xf3a4, 
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
	0x02f3, 0x02f3, 0x02f4, 0x02f4, 0x14e8, 0x141c, 0x11eb, 0x0e98, 0x0a64, 0xf9b3, 0xeefd, 0xe766, 0xe18b, 0xdcdf, 0xd936, 0xd676, 
	0xd488, 0xd34e, 0xd2a5, 0xd26c, 0xd29f, 0xd356, 0xd4ba, 0xd6f5, 0xda27, 0xde6d, 0xe3eb, 0xead8, 0xf3a8, 0x00a6, 0x0994, 0x0bef, 
	0x0d67, 0x0df1, 0x0dfc, 0x0e06, 0x0e0f, 0x0e17, 0x0e1e, 0x0e24, 0x0e28, 0x0e2a, 0x0e2b, 0x0e2b, 0x0e2b, 0x0e2b, 0x0e2b, 0x0e2b, 
	0x0e2b, 0x0e2b, 0x0e2b, 0x0e2b, 0x0e2b, 0x0e2b, 0x0e2b, 0x0e2b, 0x0e2b, 0x0e2b, 0x0e2b, 0x0e2b, 0x0e2b, 0x0e2b, 0x0e2b, 0x0e2b, 
	0x0e2b, 0x0e2e, 0x0e36, 0x0e43, 0x0e55, 0x0e6b, 0x0e85, 0x0ea4, 0x0ec6, 0x0eec, 0x0f15, 0x0f41, 0x0f6f, 0x0fa1, 0x0fd5, 0x100a, 
	0x1042, 0x107b, 0x10b5, 0x10f1, 0x112d, 0x1169, 0x11a6, 0x11e2, 0x121e, 0x1259, 0x1293, 0x12cb, 0x1302, 0x1336, 0x1368, 0x1396, 
	0x13c2, 0x13e9, 0x140d, 0x142c, 0x1446, 0x145b, 0x146a, 0x1474, 0x1477, 0x2108, 0x20eb, 0x209e, 0x2029, 0x1f93, 0x1ed5, 0x1bfa, 
	0x18db, 0x1628, 0x13f8, 0x122e, 0x10ea, 0x102c, 0x0fdc, 0x0fcf, 0x0fd6, 0x0fdc, 0x1000, 0x1077, 0x1174, 0x130d, 0x1533, 0x17b7, 
	0x1a47, 0x1c76, 0x1d91, 0x1cea, 0x1c99, 0x1c63, 0x1c56, 0x1c5f, 0x1c67, 0x1c6f, 0x1c76, 0x1c7c, 0x1c81, 0x1c84, 0x1c86, 0x1c87, 
	0x1c87, 0x1c87, 0x1c87, 0x1c87, 0x1c87, 0x1c87, 0x1c87, 0x1c87, 0x1c87, 0x1c87, 0x1c87, 0x1c87, 0x1c87, 0x1c87, 0x1c87, 0x1c87, 
	0x1c87, 0x1c87, 0x1c87, 0x1c87, 0x1c87, 0x1c87, 0x1c89, 0x1c90, 0x1c9b, 0x1caa, 0x1cbc, 0x1cd2, 0x1ceb, 0x1d08, 0x1d26, 0x1d48, 
	0x1d6b, 0x1d91, 0x1db8, 0x1de0, 0x1e0a, 0x1e35, 0x1e61, 0x1e8d, 0x1eba, 0x1ee6, 0x1f12, 0x1f3e, 0x1f6a, 0x1f94, 0x1fbe, 0x1fe6, 
	0x200d, 0x2032, 0x2055, 0x2076, 0x2095, 0x20b2, 0x20cb, 0x20e2, 0x20f6, 0x2107, 0x2115, 0x211f, 0x2125, 0x2127, 0x9832, 0x97ab, 
	0x9637, 0x9400, 0x912e, 0x8457, 0x7c60, 0x770c, 0x7329, 0x7039, 0x6e04, 0x6c5c, 0x6b22, 0x6a46, 0x69bf, 0x698f, 0x69be, 0x6a50, 
	0x6b44, 0x6ca6, 0x6e8c, 0x7123, 0x74aa, 0x7970, 0x7ff0, 0x8a0e, 0x90f8, 0x92a0, 0x93a6, 0x9404, 0x940a, 0x9410, 0x9415, 0x9419, 
	0x941d, 0x9420, 0x9422, 0x9424, 0x9424, 0x9424, 0x9424, 0x9424, 0x9424, 0x9424, 0x9424, 0x9424, 0x9424, 0x9424, 0x9424, 0x9424, 
	0x9424, 0x9424, 0x9424, 0x9424, 0x9424, 0x9424, 0x9424, 0x9424, 0x9424, 0x9424, 0x9424, 0x9426, 0x942a, 0x9431, 0x943b, 0x9447, 
	0x9455, 0x9466, 0x9479, 0x948e, 0x94a5, 0x94be, 0x94d8, 0x94f4, 0x9512, 0x9531, 0x9551, 0x9572, 0x9594, 0x95b7, 0x95db, 0x95ff, 
	0x9624, 0x9648, 0x966d, 0x9691, 0x96b4, 0x96d7, 0x96f9, 0x971a, 0x9739, 0x9757, 0x9772, 0x978b, 0x97a2, 0x97b6, 0x97c7, 0x97d4, 
	0x97de, 0x97e4, 0x97e6, 0x002e, 0x002e, 0x002e, 0x002d, 0x002d, 0x0a49, 0x0f73, 0x125a, 0x1402, 0x14cb, 0x14e0, 0x1468, 0x1391, 
	0x1298, 0x11cb, 0x117b, 0x11de, 0x12c7, 0x13d2, 0x14a5, 0x14fd, 0x14a5, 0x1370, 0x111e, 0x0d30, 0x0555, 0x002d, 0x002d, 0x002e, 
	0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 
	0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 
	0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 
	0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 
	0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0x002e, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xfd51, 0xfb0b, 0xf948, 
	0xf819, 0xf77c, 0xf76c, 0xf7cb, 0xf86d, 0xf91e, 0xf9a7, 0xf9da, 0xf99b, 0xf8fe, 0xf83d, 0xf79b, 0xf754, 0xf79a, 0xf886, 0xfa15, 
	0xfc2b, 0xfe94, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 
	0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 
	0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 
	0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 
	0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0xff08, 0x003b, 0x003b, 0x003b, 
	0x003b, 0x003b, 0x0d6f, 0x1465, 0x186e, 0x1acc, 0x1bf0, 0x1c0e, 0x1b60, 0x1a2a, 0x18c6, 0x17a4, 0x1734, 0x17c0, 0x1909, 0x1a87, 
	0x1bb9, 0x1c39, 0x1bb9, 0x19fa, 0x16b2, 0x1151, 0x06ec, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 
	0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 
	0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 
	0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 
	0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 0x003b, 
	0x003b, 0x003b, 0xf55c, 0xf580, 0xf5eb, 0xf699, 0xf77c, 0xf877, 0xf963, 0xfa12, 0xfa57, 0xf9e9, 0xf8e8, 0xf7b6, 0xf680, 0xf558, 
	0xf445, 0xf34f, 0xf278, 0xf1cb, 0xf151, 0xf118, 0xf12f, 0xf1a9, 0xf297, 0xf407, 0xf605, 0xf88e, 0xfb95, 0xff04, 0x02b8, 0x0689, 
	0x0a51, 0x0df0, 0x1146, 0x143e, 0x16c7, 0x18d3, 0x1a57, 0x1b48, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 
	0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b9a, 0x1b68, 
	0x1ad4, 0x19e3, 0x189a, 0x16fd, 0x1510, 0x12d9, 0x105e, 0x0da3, 0x0ab6, 0x07a1, 0x0471, 0x0137, 0xfe04, 0xfaec, 0xf802, 0xf554, 
	0xf2f0, 0xf0dd, 0xef1e, 0xedb6, 0xec9c, 0xebcd, 0xeb41, 0xeaf2, 0xead8, 0xeaec, 0xeb2a, 0xeb8b, 0xec0f, 0xecb1, 0xed70, 0xee4b, 
	0xef3f, 0xf04d, 0xf171, 0xf2a6, 0xf3db, 0xf4e5, 0xf55c, 0xf8e5, 0xf89a, 0xf7d9, 0xf6cc, 0xf59d, 0xf473, 0xf372, 0xf2be, 0xf27b, 
	0xf285, 0xf2a7, 0xf2ea, 0xf353, 0xf3e6, 0xf4a7, 0xf599, 0xf6bc, 0xf812, 0xf99a, 0xfb52, 0xfd35, 0xff3a, 0x015a, 0x0381, 0x059f, 
	0x079e, 0x096c, 0x0af5, 0x0c2f, 0x0d16, 0x0db0, 0x0e05, 0x0e24, 0x0e1c, 0x0dfc, 0x0dd1, 0x0da9, 0x0d8c, 0x0d81, 0x0d81, 0x0d81, 
	0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d81, 
	0x0d81, 0x0d81, 0x0d81, 0x0d81, 0x0d8a, 0x0da5, 0x0dcd, 0x0e00, 0x0e37, 0x0e6e, 0x0e9e, 0x0ebe, 0x0ec9, 0x0eb5, 0x0e7c, 0x0e16, 
	0x0d80, 0x0cb6, 0x0bb9, 0x0a8d, 0x0939, 0x07c6, 0x063e, 0x04ad, 0x031e, 0x0199, 0x0027, 0xfece, 0xfd94, 0xfc7a, 0xfb83, 0xfaaf, 
	0xf9ff, 0xf970, 0xf902, 0xf8b2, 0xf87e, 0xf863, 0xf85f, 0xf86d, 0xf88a, 0xf8af, 0xf8d4, 0xf8e5, 0x6517, 0x64fc, 0x64ba, 0x6464, 
	0x6407, 0x63ac, 0x635e, 0x6326, 0x6311, 0x628e, 0x6151, 0x5fc2, 0x5e16, 0x5c69, 0x5aca, 0x5944, 0x57e0, 0x56a7, 0x55a0, 0x54d5, 
	0x544b, 0x540d, 0x541f, 0x5487, 0x5546, 0x565a, 0x57b6, 0x594b, 0x5b03, 0x5cc5, 0x5e7b, 0x6013, 0x617e, 0x62b6, 0x63b5, 0x647c, 
	0x650b, 0x6561, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 
	0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x657e, 0x656c, 0x6536, 0x64de, 0x6463, 0x63c5, 0x6304, 0x621f, 
	0x6118, 0x5fef, 0x5eab, 0x5d4f, 0x5be4, 0x5a73, 0x5908, 0x57af, 0x5675, 0x5564, 0x5484, 0x53dc, 0x536c, 0x5338, 0x533a, 0x5372, 
	0x53d9, 0x546e, 0x5529, 0x5606, 0x5702, 0x5816, 0x5940, 0x5a7b, 0x5bc3, 0x5d15, 0x5e6e, 0x5fca, 0x6124, 0x6275, 0x63af, 0x64ab, 
	0x6517, 0x069a, 0x06de, 0x077e, 0x0838, 0x08e1, 0x0964, 0x09bb, 0x09ec, 0x09fb, 0x0b3f, 0x0e47, 0x120f, 0x1610, 0x1a10, 0x1df4, 
	0x21b1, 0x2540, 0x289c, 0x2bc1, 0x2eab, 0x3156, 0x33b8, 0x35ca, 0x3782, 0x38d5, 0x39bc, 0x3a34, 0x3a41, 0x39ed, 0x3946, 0x3860, 
	0x374c, 0x3624, 0x34f9, 0x33e0, 0x32eb, 0x322b, 0x31b0, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 
	0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x3184, 0x319f, 0x31eb, 
	0x3264, 0x3305, 0x33c6, 0x34a0, 0x358b, 0x367e, 0x3773, 0x385d, 0x3934, 0x39ef, 0x3a85, 0x3aec, 0x3b1d, 0x3b11, 0x3ac4, 0x3a35, 
	0x3964, 0x3853, 0x3704, 0x3580, 0x33c9, 0x31e5, 0x2fd5, 0x2da1, 0x2b49, 0x28ce, 0x2634, 0x2379, 0x209e, 0x1da6, 0x1a90, 0x1760, 
	0x1419, 0x10c4, 0x0d73, 0x0a4d, 0x07b8, 0x069a, 0xfeaa, 0xfea3, 0xfe90, 0xfe78, 0xfe60, 0xfe4c, 0xfe3e, 0xfe37, 0xfe34, 0xfdfb, 
	0xfd58, 0xfc55, 0xfb00, 0xf968, 0xf79b, 0xf5a8, 0xf39c, 0xf188, 0xef78, 0xed7b, 0xeb9c, 0xe9e9, 0xe86e, 0xe733, 0xe642, 0xe59f, 
	0xe54a, 0xe541, 0xe57c, 0xe5f2, 0xe695, 0xe75a, 0xe82e, 0xe904, 0xe9cd, 0xea7c, 0xeb04, 0xeb5c, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 
	0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 0xeb7b, 
	0xeb7b, 0xeb7b, 0xeb7b, 0xeb68, 0xeb32, 0xeadc, 0xea69, 0xe9df, 0xe943, 0xe89b, 0xe7ed, 0xe73e, 0xe697, 0xe5fe, 0xe57a, 0xe511, 
	0xe4c9, 0xe4a7, 0xe4af, 0xe4e5, 0xe549, 0xe5dd, 0xe69f, 0xe78e, 0xe8a3, 0xe9dd, 0xeb37, 0xecab, 0xee32, 0xefc8, 0xf168, 0xf309, 
	0xf4a8, 0xf63c, 0xf7c1, 0xf930, 0xfa81, 0xfbaf, 0xfcb4, 0xfd88, 0xfe26, 0xfe89, 0xfeaa, 0x046b, 0x0498, 0x0503, 0x057e, 0x05ee, 
	0x0645, 0x067e, 0x069e, 0x06a9, 0x077e, 0x0978, 0x0be4, 0x0e62, 0x10c9, 0x1304, 0x1509, 0x16d3, 0x1861, 0x19b2, 0x1ac9, 0x1ba8, 
	0x1c54, 0x1cd3, 0x1d2b, 0x1d65, 0x1d87, 0x1d97, 0x1d99, 0x1d8e, 0x1d76, 0x1d52, 0x1d21, 0x1ce6, 0x1ca3, 0x1c5e, 0x1c1d, 0x1be7, 
	0x1bc3, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 
	0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bb6, 0x1bbe, 0x1bd4, 0x1bf8, 0x1c24, 0x1c58, 0x1c8e, 0x1cc5, 0x1cf9, 
	0x1d29, 0x1d52, 0x1d74, 0x1d8e, 0x1da1, 0x1dad, 0x1db2, 0x1db1, 0x1da8, 0x1d97, 0x1d7b, 0x1d50, 0x1d14, 0x1cc2, 0x1c58, 0x1bd3, 
	0x1b2e, 0x1a6a, 0x1983, 0x1877, 0x1748, 0x15f3, 0x1478, 0x12d8, 0x1114, 0x0f2f, 0x0d2c, 0x0b11, 0x08ee, 0x06df, 0x0529, 0x046b, 
	0xcc96, 0xcc96, 0xcc96, 0xcc96, 0xcc96, 0xcc96, 0xcc96, 0xcc96, 0xcc96, 0xcc9f, 0xccb9, 0xcce4, 0xcd1f, 0xcd6c, 0xcdca, 0xce3a, 
	0xcebd, 0xcf54, 0xd001, 0xd0c4, 0xd19f, 0xd293, 0xd3a1, 0xd4c8, 0xd608, 0xd760, 0xd8cf, 0xda50, 0xdbdf, 0xdd75, 0xdf0b, 0xe098, 
	0xe211, 0xe36c, 0xe49e, 0xe59c, 0xe65c, 0xe6d5, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 
	0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6ff, 0xe6e7, 0xe6a2, 0xe633, 
	0xe59c, 0xe4e3, 0xe40b, 0xe319, 0xe211, 0xe0f9, 0xdfd3, 0xdea6, 0xdd75, 0xdc44, 0xdb16, 0xd9ee, 0xd8cf, 0xd7ba, 0xd6b1, 0xd5b6, 
	0xd4c8, 0xd3e8, 0xd317, 0xd254, 0xd19f, 0xd0f9, 0xd060, 0xcfd4, 0xcf54, 0xcee1, 0xce79, 0xce1c, 0xcdca, 0xcd81, 0xcd43, 0xcd0f, 
	0xcce4, 0xccc2, 0xccaa, 0xcc9b, 0xcc96, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x163d, 0x1652, 0x1690, 
	0x16f2, 0x1778, 0x181c, 0x18dd, 0x19b8, 0x1aa8, 0x1bab, 0x1cbd, 0x1ddb, 0x1f00, 0x202a, 0x2153, 0x2279, 0x2398, 0x24ac, 0x25b2, 
	0x26a7, 0x2788, 0x2854, 0x290a, 0x29a8, 0x2a2f, 0x2a9e, 0x2af8, 0x2b3d, 0x2b6d, 0x2b8a, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 
	0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 0x2b94, 
	0x2b94, 0x2b94, 0x2b8f, 0x2b7e, 0x2b63, 0x2b3d, 0x2b0b, 0x2ace, 0x2a85, 0x2a2f, 0x29cc, 0x295c, 0x28df, 0x2854, 0x27bd, 0x271a, 
	0x266c, 0x25b2, 0x24ef, 0x2424, 0x2351, 0x2279, 0x219d, 0x20bf, 0x1fdf, 0x1f00, 0x1e23, 0x1d4b, 0x1c77, 0x1bab, 0x1ae7, 0x1a2d, 
	0x197f, 0x18dd, 0x184a, 0x17c6, 0x1753, 0x16f2, 0x16a5, 0x166c, 0x1649, 0x163d, 0xe668, 0xe668, 0xe668, 0xe668, 0xe668, 0xe668, 
	0xe668, 0xe668, 0xe668, 0xe675, 0xe69d, 0xe6de, 0xe738, 0xe7a9, 0xe832, 0xe8d2, 0xe98a, 0xea5b, 0xeb43, 0xec46, 0xed61, 0xee97, 
	0xefe6, 0xf14f, 0xf2d1, 0xf469, 0xf616, 0xf7d3, 0xf99b, 0xfb67, 0xfd2f, 0xfeea, 0x008d, 0x020c, 0x035d, 0x0474, 0x0546, 0x05ca, 
	0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 
	0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05f8, 0x05de, 0x0592, 0x0518, 0x0474, 0x03a8, 0x02bb, 0x01b1, 0x008d, 0xff55, 
	0xfe0f, 0xfcbe, 0xfb67, 0xfa0e, 0xf8b6, 0xf763, 0xf616, 0xf4d3, 0xf39a, 0xf26e, 0xf14f, 0xf03e, 0xef3b, 0xee47, 0xed61, 0xec8a, 
	0xebc1, 0xeb07, 0xea5b, 0xe9bc, 0xe92b, 0xe8a8, 0xe832, 0xe7c9, 0xe76d, 0xe71f, 0xe6de, 0xe6ab, 0xe686, 0xe66f, 0xe668, };

JointIndex gWereCit2Idle4AnimJointIndices[19] = {
	{ 0x0000, 0x0000, 0x0000, },
	{ 0x0000, 0x0000, 0x0000, },
	{ 0x0001, 0x0020, 0x0002, },
	{ 0x0085, 0x00ea, 0x014f, },
	{ 0x01b4, 0x0219, 0x027e, },
	{ 0x02e3, 0x0348, 0x03ad, },
	{ 0x0003, 0x0004, 0x0005, },
	{ 0x0412, 0x0477, 0x04dc, },
	{ 0x0541, 0x05a6, 0x060b, },
	{ 0x0670, 0x06d5, 0x073a, },
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

AnimationHeader gWereCit2Idle4Anim = { { 101 }, gWereCit2Idle4AnimFrameData, gWereCit2Idle4AnimJointIndices, 32 };

