#include "ultra64.h"
#include "global.h"

s16 ArmatureMovefAnimFrameData[622] = {
	0x0000, 0xffff, 0xfa8d, 0x1009, 0x053b, 0x3813, 0xebf2, 0x9e32, 0x140d, 0x61cd, 0xb719, 0xb6df, 0xb6c1, 0xb6d6, 0xb6fd, 0xb72b, 
	0xb738, 0xb71a, 0xb709, 0xb71c, 0xb735, 0xb73f, 0xf9a9, 0xf672, 0xf4f6, 0xf5db, 0xf86f, 0xfc45, 0x007f, 0x03c1, 0x0504, 0x03f7, 
	0x01ae, 0xff63, 0x024d, 0x03af, 0x0456, 0x03f2, 0x02d4, 0x0135, 0xff72, 0xfe15, 0xfd8d, 0xfdff, 0xfef4, 0xffe7, 0x0f25, 0x0bf9, 
	0x0875, 0x0a94, 0x1607, 0x3456, 0x3976, 0x379b, 0x3672, 0x36b5, 0x2ef2, 0x189a, 0xd730, 0xd91c, 0xdae1, 0xd709, 0xcdc6, 0xd07e, 
	0xdc34, 0xe516, 0xe88f, 0xdf81, 0xd4f0, 0xd2ed, 0xcd7a, 0xcddc, 0xcf47, 0xd720, 0xd526, 0xb36c, 0xa70f, 0xa279, 0xa0dd, 0xa4c0, 
	0xb0da, 0xc864, 0xa261, 0xa477, 0xa6a7, 0xa36d, 0x9c79, 0x9728, 0x0ff5, 0x0935, 0x05f1, 0x0f4b, 0x98c9, 0x9b66, 0x08b3, 0x07a6, 
	0x066b, 0x0a44, 0x078a, 0xfaf6, 0x9112, 0x95f4, 0x9734, 0x9310, 0xf948, 0x0e09, 0x3449, 0x357e, 0x36ae, 0x3335, 0x343f, 0x4448, 
	0xdadf, 0xeb9d, 0xf307, 0xdde5, 0x450b, 0x2cef, 0x1308, 0x1b23, 0x2173, 0x1bb2, 0x10f2, 0x06cb, 0x01f6, 0x0415, 0x091d, 0x0bdf, 
	0x0cc9, 0x0e00, 0xcd10, 0xcd5b, 0xceba, 0xcea1, 0xcee0, 0xd027, 0xd12c, 0xd060, 0xcecf, 0xcdc0, 0xcd1b, 0xccb5, 0xc732, 0xbb7d, 
	0xaff4, 0xb387, 0xbc13, 0xc3b6, 0xc7f7, 0xca52, 0xcbe1, 0xce8e, 0xd070, 0xd008, 0xa721, 0xa600, 0xa53e, 0xa640, 0xa812, 0xa9e7, 
	0xaab8, 0xaa08, 0xa8a7, 0xa714, 0xa606, 0xa538, 0xee52, 0xed17, 0xebe5, 0xee05, 0xf0ec, 0xf3d9, 0xf5ab, 0xf4b4, 0xf2c4, 0xf324, 
	0xf3d6, 0xf478, 0x34bd, 0x360a, 0x3753, 0x3534, 0x328e, 0x304d, 0x2f1f, 0x2fb6, 0x311d, 0x313c, 0x30fe, 0x30b4, 0xdf69, 0xe0ee, 
	0xe2d0, 0xe5ac, 0xe8c5, 0xeb02, 0xebbe, 0xef89, 0xfb70, 0xf380, 0xe903, 0xe04b, 0xd70e, 0xd833, 0xd95d, 0xd956, 0xd884, 0xd761, 
	0xd424, 0xcc0a, 0xc7c8, 0xc950, 0xcdd0, 0xd3e5, 0xe892, 0xea1f, 0xebed, 0xedf5, 0xf009, 0xf1ef, 0xf18c, 0xe688, 0xd4b0, 0xdc0c, 
	0xe4cb, 0xe710, 0xb309, 0xaf80, 0xae0c, 0xabad, 0xa8ca, 0xa617, 0xa34b, 0xa1e6, 0xa31a, 0xa362, 0xa68f, 0xb5c4, 0xf643, 0xf9de, 
	0xfb66, 0xfc6a, 0xfd15, 0xfd79, 0xfca8, 0xf795, 0xf324, 0xf513, 0xf786, 0xf0cd, 0x1fa5, 0x1e49, 0x1d9c, 0x1d04, 0x1c7e, 0x1bfb, 
	0x1c33, 0x2048, 0x23c1, 0x2220, 0x1fbf, 0x2152, 0xd741, 0xd50c, 0xd151, 0xd01e, 0xcebe, 0xccad, 0xcb4a, 0xc984, 0xc762, 0xcf94, 
	0xd7ac, 0xd8ec, 0xdb81, 0xd750, 0xd25d, 0xd477, 0xd7c4, 0xda3f, 0xdd2c, 0xe04a, 0xe222, 0xe36d, 0xe308, 0xe020, 0xf3b8, 0xf333, 
	0xf24f, 0xf244, 0xf1a7, 0xf0aa, 0xefb7, 0xeeb4, 0xee11, 0xf001, 0xf2f4, 0xf3c7, 0x9dca, 0x9c49, 0x9c65, 0xa34c, 0xae99, 0xb5c9, 
	0xb9aa, 0xbfa8, 0xc76a, 0xbe3e, 0xb21c, 0xa6be, 0xff36, 0xfda3, 0xfb71, 0xf9c7, 0xf67e, 0xf4db, 0xf531, 0xf469, 0xf193, 0xf5f9, 
	0xfa9b, 0xfe15, 0x10f8, 0x121f, 0x1423, 0x151d, 0x1661, 0x16ab, 0x1669, 0x1647, 0x15f4, 0x162a, 0x14e0, 0x1288, 0x2c74, 0x30b0, 
	0x30a7, 0x2d20, 0x220f, 0x18fb, 0x1581, 0x14af, 0x1473, 0x15ff, 0x19bb, 0x22ba, 0x2cb5, 0x2706, 0x1de3, 0x2486, 0x2919, 0x28cf, 
	0x2863, 0x28a0, 0x298d, 0x2be7, 0x3051, 0x3239, 0x4936, 0x52e6, 0x5b21, 0x5571, 0x4906, 0x40a8, 0x3d47, 0x3b73, 0x38df, 0x362c, 
	0x3368, 0x395d, 0x1818, 0x13f9, 0x0bdf, 0x15af, 0x9d44, 0xa04f, 0xa070, 0x9f30, 0x9df0, 0x9c1e, 0x9a65, 0x9b3f, 0x71f7, 0x6d58, 
	0x6763, 0x6e16, 0x06ca, 0xfe9e, 0xf86c, 0xf3f4, 0xf190, 0xf0cf, 0xf33d, 0xff09, 0x317f, 0x2893, 0x16f0, 0x2b40, 0xbc87, 0xc50b, 
	0xcb06, 0xcfac, 0xd278, 0xd3f9, 0xd220, 0xc44d, 0xfd64, 0xff02, 0x0234, 0x0ae8, 0x1680, 0x1ce3, 0x21a3, 0x2741, 0x2846, 0x24d7, 
	0x1dc9, 0x097d, 0x2d68, 0x2e04, 0x2f36, 0x3138, 0x31e8, 0x30ed, 0x2f45, 0x2d53, 0x2d31, 0x2e91, 0x2f95, 0x2fae, 0x3618, 0x311e, 
	0x2d67, 0x32fd, 0x3edf, 0x46da, 0x4e2b, 0x56ba, 0x595d, 0x5624, 0x5193, 0x4013, 0xb240, 0xb03c, 0xae20, 0xabae, 0xa9a2, 0xa8bc, 
	0x2737, 0x24e4, 0x2519, 0xa6ae, 0xa917, 0xae1f, 0x1910, 0x1637, 0x152b, 0x1768, 0x1c04, 0x212b, 0x5a1e, 0x5974, 0x5c42, 0x2095, 
	0x1e36, 0x19c5, 0xca21, 0xcb12, 0xcb0f, 0xc8c5, 0xc466, 0xbf83, 0x3a24, 0x3777, 0x3a52, 0xbe82, 0xc252, 0xc80d, 0xea6b, 0xecfd, 
	0xf2c7, 0xe80f, 0xdddb, 0xd729, 0xd399, 0xd1db, 0xd111, 0xd98c, 0xe180, 0xe724, 0x2eab, 0x3253, 0x36e5, 0x33bf, 0x2e43, 0x2a8d, 
	0x289e, 0x2831, 0x2804, 0x2581, 0x2639, 0x2a19, 0x14cf, 0x1837, 0x2648, 0x1fca, 0x1c4e, 0x1c9b, 0x1cc7, 0x1ca3, 0x1c57, 0x1927, 
	0x14c4, 0x12d4, 0xa773, 0xa5ad, 0xa744, 0xab2e, 0xb3aa, 0xbcb2, 0xc3e4, 0xcaff, 0xcf55, 0xbbbd, 0xabe5, 0xa82c, 0x07b9, 0x09a1, 
	0x0dc4, 0x0ca2, 0x0d8f, 0x110c, 0x1534, 0x1a89, 0x1d7c, 0x0d14, 0x01f2, 0x03dd, 0xe0e2, 0xdf7f, 0xdccb, 0xde5a, 0xdef4, 0xdef1, 
	0xdf6c, 0xe0bb, 0xe21a, 0xdfcd, 0xe3ae, 0xe308, 0xcd2d, 0xccbe, 0xcb8a, 0xd301, 0xda2c, 0xd3b3, 0xcd92, 0xcd0d, 0xcf41, 0xd0b3, 
	0xd079, 0xcf24, 0x1fe1, 0x1f0e, 0x1ea1, 0x1dc8, 0x20e2, 0x26ba, 0x28fa, 0x2751, 0x243f, 0x2142, 0x1fb2, 0x1fc5, 0x1048, 0x1084, 
	0x10dc, 0x0eb2, 0x0b84, 0x0d34, 0x0e87, 0x0ef1, 0x0eea, 0x0ef6, 0x0f47, 0x0fb7, 0xbfe8, 0xc24b, 0xc543, 0xb73a, 0xa5f3, 0xa799, 
	0xab93, 0xadad, 0xaf9b, 0xb2e4, 0xb718, 0xbb27, 0x0cda, 0x0d8d, 0x0eb4, 0x07b2, 0x02a5, 0x0604, 0x080b, 0x07ca, 0x072b, 0x072e, 
	0x0860, 0x0a77, 0xe96e, 0xe97e, 0xe9a1, 0xea49, 0xed38, 0xeb3d, 0xea1b, 0xea4d, 0xea9e, 0xea92, 0xea25, 0xe9ac, };

JointIndex ArmatureMovefAnimJointIndices[22] = {
	{ 0x0000, 0x0000, 0x0000, },
	{ 0x0001, 0x0001, 0x0002, },
	{ 0x0003, 0x0001, 0x0004, },
	{ 0x000a, 0x0016, 0x0022, },
	{ 0x002e, 0x003a, 0x0046, },
	{ 0x0052, 0x005e, 0x006a, },
	{ 0x0076, 0x0082, 0x008e, },
	{ 0x009a, 0x00a6, 0x00b2, },
	{ 0x00be, 0x00ca, 0x00d6, },
	{ 0x00e2, 0x00ee, 0x00fa, },
	{ 0x0106, 0x0112, 0x011e, },
	{ 0x012a, 0x0136, 0x0142, },
	{ 0x014e, 0x015a, 0x0166, },
	{ 0x0172, 0x017e, 0x018a, },
	{ 0x0196, 0x01a2, 0x01ae, },
	{ 0x01ba, 0x01c6, 0x01d2, },
	{ 0x01de, 0x01ea, 0x01f6, },
	{ 0x0202, 0x020e, 0x021a, },
	{ 0x0226, 0x0232, 0x023e, },
	{ 0x024a, 0x0256, 0x0262, },
	{ 0x0005, 0x0006, 0x0007, },
	{ 0x0005, 0x0008, 0x0009, },
};

AnimationHeader ArmatureMovefAnim = { { 12 }, ArmatureMovefAnimFrameData, ArmatureMovefAnimJointIndices, 10 };

