#include "ultra64.h"
#include "z64.h"
#include "macros.h"

SurfaceType gDrawBridge3DL_polygonTypes[] = {
	{ 0x00000000, 0x0000000a },
};

CollisionPoly gDrawBridge3DL_polygons[] = {
	{ 0x0000, 0x0000, 0x0001, 0x0002, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xfd3b },
	{ 0x0000, 0x0000, 0x0002, 0x0003, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xfd3b },
	{ 0x0000, 0x0003, 0x0002, 0x0004, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.007385609205812216), COLPOLY_SNORMAL(-0.9999727606773376), 0xff9c },
	{ 0x0000, 0x0003, 0x0004, 0x0005, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.007385609205812216), COLPOLY_SNORMAL(-0.9999727606773376), 0xff9c },
	{ 0x0000, 0x0005, 0x0004, 0x0006, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xfd3b },
	{ 0x0000, 0x0007, 0x0005, 0x0006, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xfd3b },
	{ 0x0000, 0x0007, 0x0006, 0x0001, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-0.006735659670084715), COLPOLY_SNORMAL(0.9999772906303406), 0xff9c },
	{ 0x0000, 0x0007, 0x0001, 0x0000, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-0.006735659670084715), COLPOLY_SNORMAL(0.9999772906303406), 0xff9c },
	{ 0x0000, 0x0007, 0x0003, 0x0005, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-0.9999774098396301), COLPOLY_SNORMAL(-0.0067153130657970905), 0x000f },
	{ 0x0000, 0x0007, 0x0000, 0x0003, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-0.9999774098396301), COLPOLY_SNORMAL(-0.0067153130657970905), 0x000f },
	{ 0x0000, 0x0004, 0x0002, 0x0001, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.6051205992698669), COLPOLY_SNORMAL(-0.7961337566375732), 0xfa8c },
	{ 0x0000, 0x0004, 0x0001, 0x0006, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.6051205992698669), COLPOLY_SNORMAL(-0.7961337566375732), 0xfa8c },
};

Vec3s gDrawBridge3DL_vertices[8] = {
	{ -709, 14, 100 },
	{ -709, 2461, 117 },
	{ -709, 2197, -84 },
	{ -709, 16, -100 },
	{ 709, 2197, -84 },
	{ 709, 16, -100 },
	{ 709, 2461, 117 },
	{ 709, 14, 100 },
};

CollisionHeader gDrawBridge3DL_collisionHeader = {
	-709,
	14,
	-100,
	709,
	2461,
	117,
	8,
	gDrawBridge3DL_vertices,
	12,
	gDrawBridge3DL_polygons,
	gDrawBridge3DL_polygonTypes,
	0,
	0,
	0
};
