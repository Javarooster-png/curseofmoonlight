#include "ultra64.h"
#include "global.h"

u64 sky_gradient_i8[] = {
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xfffefffffefefefe, 0xfffefefefdfdfcfd, 0xfcfcfbfbfbfcfbfb, 0xfafbfbfafafafafa, 0xfafafaf9f9f9f9f9, 0xf8f8f8f8f8f8f8f8, 
	0xf6f6f6f6f5f6f5f4, 0xf6f5f5f5f4f5f4f4, 0xf4f4f3f4f3f4f3f3, 0xf3f3f2f2f2f2f2f1, 0xf0f0f0f0f0f0f0f0, 0xf0efefefefefefef, 0xefeeeeeeeeeeeded, 0xeeedededecededec, 
	0xebebebebeaebeaea, 0xeaeaeaeae9eae9e9, 0xe9e9e9e8e9e8e8e8, 0xe8e7e7e7e7e7e7e7, 0xe6e6e5e5e4e4e5e4, 0xe4e4e4e4e4e4e4e3, 0xe3e3e3e2e3e2e3e3, 0xe2e2e1e1e2e2e2e1, 
	0xe0e0e0dfe0e0e0df, 0xdedfdededededede, 0xdededddddddcdddd, 0xdddcdcdcdcdcdcdc, 0xdadadadadadad9d9, 0xd9d9d9d9d8d8d9d9, 0xd8d8d8d8d8d7d7d7, 0xd7d7d7d6d6d6d6d6, 
	0xd5d5d4d5d3d4d3d4, 0xd4d4d4d3d3d2d3d3, 0xd3d2d2d3d2d2d1d1, 0xd2d1d1d1d1d0d0d0, 0xcfcfcfcfcecfcece, 0xcecececdcdcdcdcd, 0xcecccdcdcccccccc, 0xcccbcccccbcbcbcb, 
	0xcac9c9c9c9c9c9c9, 0xc8c8c8c8c8c8c7c7, 0xc7c7c7c7c7c6c7c7, 0xc6c7c6c6c6c5c5c5, 0xc4c4c4c4c3c3c3c3, 0xc3c3c3c2c2c2c3c1, 0xc2c1c1c2c1c1c1c1, 0xc1c0c0c1c0bfc0c0, 
	0xbfbebebebdbebebe, 0xbebdbdbdbdbdbcbc, 0xbcbcbcbcbcbcbbbb, 0xbabbbbbabababbba, 0xb9b9b8b8b8b8b8b9, 0xb8b7b8b7b7b7b7b7, 0xb7b6b6b6b6b6b6b5, 0xb6b5b5b5b5b5b5b5, 
	0xb3b3b3b2b2b3b3b2, 0xb2b2b2b2b1b1b1b1, 0xb1b1b0b1b1b1b0b0, 0xb0b0b0b0afafafaf, 0xaeaeadaeadadacad, 0xacadacadacacabab, 0xacababababababaa, 0xaaaaaaa9aaa9aaa9, 
	0xa9a8a8a8a8a7a7a7, 0xa7a7a6a7a7a6a6a6, 0xa6a6a6a6a5a5a5a5, 0xa5a5a4a5a4a4a4a3, 0xa3a3a2a2a2a2a2a1, 0xa2a2a1a1a1a1a0a0, 0xa0a1a0a09f9f9f9f, 0x9f9f9f9f9e9e9f9e, 
	0x9d9d9c9d9c9c9c9c, 0x9b9c9c9b9b9a9b9b, 0x9b9b9a9a9a9b9a9a, 0x9a99999999999999, 0x9797979796969796, 0x9696969596969695, 0x9595959595949494, 0x9494949394939393, 
	0x9191929292919290, 0x9190909090909090, 0x90908f8f8f8e8f8f, 0x8e8e8e8e8d8e8e8e, 0x8c8c8c8c8b8b8c8b, 0x8b8b8b8b8b8a8a8a, 0x8a8a8989898a8989, 0x8989898888888888, 
	0x8686878686868686, 0x8685858585848484, 0x8484848484848483, 0x8483838382828382, 0x8180808081808080, 0x80807f807f7f7f7f, 0x7f7f7e7f7e7e7d7e, 0x7e7e7d7d7d7d7d7d, 
	0x7b7b7b7b7b7b7b7a, 0x7b7b7b7a7a797979, 0x7979797979787978, 0x7778787878777777, 0x7576767575757575, 0x7574747474747474, 0x7373747373737373, 0x7373727271727272, 
	0x7070707070706f6f, 0x6f6f6f6e6f6e6e6f, 0x6e6e6e6d6e6d6d6d, 0x6d6d6c6d6c6d6c6c, 0x6b6b6b6a6a6a6a69, 0x6a696a6969696969, 0x6968686868686768, 0x6767676767666766, 
	0x6565656564646464, 0x6464636463636463, 0x6362636362636262, 0x6161626161616160, 0x5f5f60605f5e5e5f, 0x5e5e5e5e5e5e5e5d, 0x5d5d5d5d5c5d5d5c, 0x5c5b5c5c5c5c5b5b, 
	0x5a5a5a5a5a5a5959, 0x5859585958585758, 0x5758575757575756, 0x5657575656565555, 0x5454555454545454, 0x5454535253525252, 0x5252515151525151, 0x5151515051505050, 
	0x4e4e4f4f4f4e4e4e, 0x4e4d4d4d4d4d4d4d, 0x4c4c4c4c4c4c4c4b, 0x4b4b4b4b4b4b4a4b, 0x4949494949494848, 0x4848484748474747, 0x4747474646474646, 0x4645454645454545, 
	0x4443444443434343, 0x4242424242424242, 0x4242414141414141, 0x4040404040403f3f, 0x3e3e3e3d3e3d3e3d, 0x3d3d3d3d3d3d3d3c, 0x3c3c3c3b3b3b3b3b, 0x3a3a3b3a3a3a3939, 
	0x3839383838383838, 0x3637373737363637, 0x3737363636363535, 0x3534353535343534, 0x3333323332323332, 0x3132313132313130, 0x3031313031302f30, 0x3030302f2f2f2f2e, 
	0x2d2d2d2c2c2c2c2d, 0x2c2c2c2b2c2c2b2b, 0x2b2b2b2a2b2a2b2b, 0x2a2a2a292a292929, 0x2827272727272727, 0x2626262627262626, 0x2526252524252524, 0x2524242424242423, 
	0x2222222221222121, 0x2120212121201f20, 0x2020201f1f201f1f, 0x1f1e1e1f1e1e1e1e, 0x1d1c1c1c1c1c1b1c, 0x1c1b1b1b1b1b1b1a, 0x1b1a1a1a1a1a1a19, 0x1a19191818191918, 
	0x1717171717161616, 0x1616161515151515, 0x1515151414141414, 0x1413131313121313, 0x1211111111101011, 0x10101010100f100f, 0x100f0f0f0f0f0f0e, 0x0e0e0d0e0e0d0e0d, 
	0x0c0c0c0c0c0b0a0b, 0x0b0b0b0b0a0a0909, 0x0a0a090909090908, 0x0808080808070807, 0x0605030100000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 
	
};

Vtx sky_sky_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-5186, -1000, -5245}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-5186, -1000, 5245}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-5186, 1000, 5245}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-5186, 1000, -5245}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {5186, -1000, -5245}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {5186, -1000, 5245}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {5186, 1000, 5245}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {5186, 1000, -5245}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx sky_sky_mesh_layer_Opaque_vtx_0[87] = {
	{{ {0, -1000, 0}, 0, {161, 6847}, {255, 255, 255, 255} }},
	{{ {-886, -851, 2623}, 0, {115, 5611}, {255, 255, 255, 255} }},
	{{ {2319, -851, 1621}, 0, {208, 5611}, {255, 255, 255, 255} }},
	{{ {1433, -526, 4243}, 0, {168, 3775}, {255, 255, 255, 255} }},
	{{ {-1507, -447, 4462}, 0, {75, 3775}, {255, 255, 255, 255} }},
	{{ {0, 0, 5245}, 0, {121, 3394}, {255, 255, 255, 255} }},
	{{ {-3205, 0, 4243}, 0, {28, 3394}, {255, 255, 255, 255} }},
	{{ {-1433, 526, 4243}, 0, {75, 3012}, {255, 255, 255, 255} }},
	{{ {-3946, 447, 2758}, 0, {-18, 3012}, {255, 255, 255, 255} }},
	{{ {-2319, 851, 1621}, 0, {22, 668}, {255, 255, 255, 255} }},
	{{ {886, 851, 2623}, 0, {115, 668}, {255, 255, 255, 255} }},
	{{ {0, 1000, 0}, 0, {68, -568}, {255, 255, 255, 255} }},
	{{ {1507, 447, 4462}, 0, {168, 3012}, {255, 255, 255, 255} }},
	{{ {3205, 0, 4243}, 0, {214, 3394}, {255, 255, 255, 255} }},
	{{ {3753, 526, 2623}, 0, {261, 3012}, {255, 255, 255, 255} }},
	{{ {886, 851, 2623}, 0, {208, 668}, {255, 255, 255, 255} }},
	{{ {2867, 851, 0}, 0, {301, 668}, {255, 255, 255, 255} }},
	{{ {0, 1000, 0}, 0, {255, -568}, {255, 255, 255, 255} }},
	{{ {4877, 447, 0}, 0, {354, 3012}, {255, 255, 255, 255} }},
	{{ {5186, 0, 1621}, 0, {307, 3394}, {255, 255, 255, 255} }},
	{{ {5186, 0, -1621}, 0, {401, 3394}, {255, 255, 255, 255} }},
	{{ {3753, 526, -2623}, 0, {447, 3012}, {255, 255, 255, 255} }},
	{{ {2867, 851, 0}, 0, {394, 668}, {255, 255, 255, 255} }},
	{{ {886, 851, -2623}, 0, {487, 668}, {255, 255, 255, 255} }},
	{{ {0, 1000, 0}, 0, {441, -568}, {255, 255, 255, 255} }},
	{{ {1507, 447, -4462}, 0, {540, 3012}, {255, 255, 255, 255} }},
	{{ {3205, 0, -4243}, 0, {494, 3394}, {255, 255, 255, 255} }},
	{{ {0, 0, -5245}, 0, {587, 3394}, {255, 255, 255, 255} }},
	{{ {-1433, 526, -4243}, 0, {633, 3012}, {255, 255, 255, 255} }},
	{{ {886, 851, -2623}, 0, {580, 668}, {255, 255, 255, 255} }},
	{{ {-2319, 851, -1621}, 0, {673, 668}, {255, 255, 255, 255} }},
	{{ {0, 1000, 0}, 0, {627, -568}, {255, 255, 255, 255} }},
	{{ {-1433, 526, -4243}, 0, {633, 3012}, {255, 255, 255, 255} }},
	{{ {-2319, 851, -1621}, 0, {673, 668}, {255, 255, 255, 255} }},
	{{ {-3946, 447, -2758}, 0, {726, 3012}, {255, 255, 255, 255} }},
	{{ {-3205, 0, -4243}, 0, {680, 3394}, {255, 255, 255, 255} }},
	{{ {-5186, 0, -1621}, 0, {773, 3394}, {255, 255, 255, 255} }},
	{{ {-4639, 526, 0}, 0, {819, 3012}, {255, 255, 255, 255} }},
	{{ {-2319, 851, -1621}, 0, {767, 668}, {255, 255, 255, 255} }},
	{{ {-2319, 851, 1621}, 0, {860, 668}, {255, 255, 255, 255} }},
	{{ {0, 1000, 0}, 0, {813, -568}, {255, 255, 255, 255} }},
	{{ {-3946, 447, 2758}, 0, {913, 3012}, {255, 255, 255, 255} }},
	{{ {-5186, 0, 1621}, 0, {866, 3394}, {255, 255, 255, 255} }},
	{{ {-3205, 0, 4243}, 0, {959, 3394}, {255, 255, 255, 255} }},
	{{ {-3753, -526, 2623}, 0, {913, 3775}, {255, 255, 255, 255} }},
	{{ {-1507, -447, 4462}, 0, {1006, 3775}, {255, 255, 255, 255} }},
	{{ {-886, -851, 2623}, 0, {953, 5611}, {255, 255, 255, 255} }},
	{{ {-2867, -851, 0}, 0, {860, 5611}, {255, 255, 255, 255} }},
	{{ {0, -1000, 0}, 0, {906, 6847}, {255, 255, 255, 255} }},
	{{ {-4877, -447, 0}, 0, {819, 3775}, {255, 255, 255, 255} }},
	{{ {-3753, -526, -2623}, 0, {726, 3775}, {255, 255, 255, 255} }},
	{{ {-2867, -851, 0}, 0, {767, 5611}, {255, 255, 255, 255} }},
	{{ {-886, -851, -2623}, 0, {673, 5611}, {255, 255, 255, 255} }},
	{{ {0, -1000, 0}, 0, {720, 6847}, {255, 255, 255, 255} }},
	{{ {-1507, -447, -4462}, 0, {633, 3775}, {255, 255, 255, 255} }},
	{{ {0, 0, -5245}, 0, {587, 3394}, {255, 255, 255, 255} }},
	{{ {1433, -526, -4243}, 0, {540, 3775}, {255, 255, 255, 255} }},
	{{ {-886, -851, -2623}, 0, {580, 5611}, {255, 255, 255, 255} }},
	{{ {2319, -851, -1621}, 0, {487, 5611}, {255, 255, 255, 255} }},
	{{ {0, -1000, 0}, 0, {534, 6847}, {255, 255, 255, 255} }},
	{{ {3946, -447, -2758}, 0, {447, 3775}, {255, 255, 255, 255} }},
	{{ {3205, 0, -4243}, 0, {494, 3394}, {255, 255, 255, 255} }},
	{{ {5186, 0, -1621}, 0, {401, 3394}, {255, 255, 255, 255} }},
	{{ {4639, -526, 0}, 0, {354, 3775}, {255, 255, 255, 255} }},
	{{ {4639, -526, 0}, 0, {354, 3775}, {255, 255, 255, 255} }},
	{{ {3946, -447, -2758}, 0, {447, 3775}, {255, 255, 255, 255} }},
	{{ {2319, -851, -1621}, 0, {394, 5611}, {255, 255, 255, 255} }},
	{{ {2319, -851, 1621}, 0, {301, 5611}, {255, 255, 255, 255} }},
	{{ {0, -1000, 0}, 0, {348, 6847}, {255, 255, 255, 255} }},
	{{ {3946, -447, 2758}, 0, {261, 3775}, {255, 255, 255, 255} }},
	{{ {5186, 0, 1621}, 0, {307, 3394}, {255, 255, 255, 255} }},
	{{ {3205, 0, 4243}, 0, {214, 3394}, {255, 255, 255, 255} }},
	{{ {1433, -526, 4243}, 0, {168, 3775}, {255, 255, 255, 255} }},
	{{ {2319, -851, 1621}, 0, {208, 5611}, {255, 255, 255, 255} }},
	{{ {0, 0, 5245}, 0, {121, 3394}, {255, 255, 255, 255} }},
	{{ {5186, 0, -1621}, 0, {401, 3394}, {255, 255, 255, 255} }},
	{{ {3753, 526, -2623}, 0, {447, 3012}, {255, 255, 255, 255} }},
	{{ {3205, 0, -4243}, 0, {494, 3394}, {255, 255, 255, 255} }},
	{{ {0, 0, -5245}, 0, {587, 3394}, {255, 255, 255, 255} }},
	{{ {-1433, 526, -4243}, 0, {633, 3012}, {255, 255, 255, 255} }},
	{{ {-3205, 0, -4243}, 0, {680, 3394}, {255, 255, 255, 255} }},
	{{ {-5186, 0, -1621}, 0, {773, 3394}, {255, 255, 255, 255} }},
	{{ {-4639, 526, 0}, 0, {819, 3012}, {255, 255, 255, 255} }},
	{{ {-5186, 0, 1621}, 0, {866, 3394}, {255, 255, 255, 255} }},
	{{ {3753, 526, 2623}, 0, {261, 3012}, {255, 255, 255, 255} }},
	{{ {1433, -526, -4243}, 0, {540, 3775}, {255, 255, 255, 255} }},
	{{ {-3753, -526, -2623}, 0, {726, 3775}, {255, 255, 255, 255} }},
};

Gfx sky_sky_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(sky_sky_mesh_layer_Opaque_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
	gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
	gsSP2Triangles(6, 8, 7, 0, 8, 9, 7, 0),
	gsSP2Triangles(9, 10, 7, 0, 9, 11, 10, 0),
	gsSP2Triangles(7, 10, 12, 0, 5, 7, 12, 0),
	gsSP2Triangles(5, 12, 13, 0, 13, 12, 14, 0),
	gsSP2Triangles(12, 15, 14, 0, 15, 16, 14, 0),
	gsSP2Triangles(15, 17, 16, 0, 14, 16, 18, 0),
	gsSP2Triangles(19, 14, 18, 0, 19, 18, 20, 0),
	gsSP2Triangles(20, 18, 21, 0, 18, 22, 21, 0),
	gsSP2Triangles(22, 23, 21, 0, 22, 24, 23, 0),
	gsSP2Triangles(21, 23, 25, 0, 26, 21, 25, 0),
	gsSP2Triangles(26, 25, 27, 0, 27, 25, 28, 0),
	gsSP2Triangles(25, 29, 28, 0, 29, 30, 28, 0),
	gsSP1Triangle(29, 31, 30, 0),
	gsSPVertex(sky_sky_mesh_layer_Opaque_vtx_0 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(3, 2, 4, 0, 4, 2, 5, 0),
	gsSP2Triangles(2, 6, 5, 0, 6, 7, 5, 0),
	gsSP2Triangles(6, 8, 7, 0, 5, 7, 9, 0),
	gsSP2Triangles(10, 5, 9, 0, 10, 9, 11, 0),
	gsSP2Triangles(10, 11, 12, 0, 12, 11, 13, 0),
	gsSP2Triangles(14, 12, 13, 0, 15, 12, 14, 0),
	gsSP2Triangles(16, 15, 14, 0, 15, 17, 12, 0),
	gsSP2Triangles(17, 10, 12, 0, 17, 4, 10, 0),
	gsSP2Triangles(18, 4, 17, 0, 19, 18, 17, 0),
	gsSP2Triangles(20, 18, 19, 0, 21, 20, 19, 0),
	gsSP2Triangles(20, 22, 18, 0, 22, 3, 18, 0),
	gsSP2Triangles(22, 23, 3, 0, 24, 23, 22, 0),
	gsSP2Triangles(25, 24, 22, 0, 26, 24, 25, 0),
	gsSP2Triangles(27, 26, 25, 0, 26, 28, 24, 0),
	gsSP2Triangles(28, 29, 24, 0, 28, 30, 29, 0),
	gsSP1Triangle(31, 30, 28, 0),
	gsSPVertex(sky_sky_mesh_layer_Opaque_vtx_0 + 64, 23, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 5, 0, 3, 0),
	gsSP2Triangles(5, 6, 0, 0, 5, 7, 6, 0),
	gsSP2Triangles(8, 7, 5, 0, 9, 8, 5, 0),
	gsSP2Triangles(10, 7, 8, 0, 11, 12, 13, 0),
	gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
	gsSP2Triangles(7, 20, 6, 0, 13, 14, 21, 0),
	gsSP2Triangles(16, 17, 22, 0, 6, 11, 0, 0),
	gsSPEndDisplayList(),
};

Gfx mat_sky_Gradient_layerOpaque[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, 1, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, 1),
	gsSPLoadGeometryMode(G_CULL_BACK | G_SHADING_SMOOTH),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | CVG_DST_FULL | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c1(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM) | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_A_MEM)),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 16, 6, 17, 255),
	gsDPSetEnvColor(14, 1, 25, 255),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, sky_gradient_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 512),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 508),
	gsSPEndDisplayList(),
};

Gfx sky[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(sky_sky_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_sky_Gradient_layerOpaque),
	gsSPDisplayList(sky_sky_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

