#include "ultra64.h"
#include "z64.h"
#include "macros.h"

SurfaceType gPullSwitchNoGrabCol_polygonTypes[] = {
	{ 0x00200000, 0x00000002 },
};

CollisionPoly gPullSwitchNoGrabCol_polygons[] = {
	{ 0x0000, 0x2000, 0x0001, 0x0002, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(-4.4785920749745856e-08), 0xffa2 },
	{ 0x0000, 0x2000, 0x0002, 0x0003, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(-4.4785920749745856e-08), 0xffa2 },
	{ 0x0000, 0x2004, 0x0000, 0x0003, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(5.372814371185086e-08), COLPOLY_SNORMAL(1.0), 0xff9d },
	{ 0x0000, 0x2004, 0x0003, 0x0005, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(5.372814371185086e-08), COLPOLY_SNORMAL(1.0), 0xff9d },
	{ 0x0000, 0x2004, 0x0001, 0x0000, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xff79 },
	{ 0x0000, 0x2004, 0x0006, 0x0001, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xff79 },
	{ 0x0000, 0x2007, 0x0003, 0x0002, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xff79 },
	{ 0x0000, 0x2007, 0x0005, 0x0003, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xff79 },
};

Vec3s gPullSwitchNoGrabCol_vertices[8] = {
	{ 135, 94, 99 },
	{ 135, 94, -699 },
	{ -135, 94, -699 },
	{ -135, 94, 99 },
	{ 135, -350, 99 },
	{ -135, -350, 99 },
	{ 135, -350, -699 },
	{ -135, -350, -699 },
};

CollisionHeader gPullSwitchNoGrabCol_collisionHeader = {
	-135,
	-350,
	-699,
	135,
	94,
	99,
	8,
	gPullSwitchNoGrabCol_vertices,
	8,
	gPullSwitchNoGrabCol_polygons,
	gPullSwitchNoGrabCol_polygonTypes,
	0,
	0,
	0
};

