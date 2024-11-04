#include "ultra64.h"
#include "z64.h"
#include "macros.h"

SurfaceType gPullSwitchCol_polygonTypes[] = {
	{ 0x00200000, 0x00000002 },
	{ 0x00e00000, 0x00000002 },
};

CollisionPoly gPullSwitchCol_polygons[] = {
	{ 0x0000, 0x2000, 0x0001, 0x0002, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), 0xfb14 },
	{ 0x0000, 0x2000, 0x0002, 0x0003, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), 0xfb14 },
	{ 0x0000, 0x2004, 0x0001, 0x0000, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xff79 },
	{ 0x0000, 0x2004, 0x0005, 0x0001, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xff79 },
	{ 0x0000, 0x2006, 0x0003, 0x0002, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xff79 },
	{ 0x0000, 0x2006, 0x0007, 0x0003, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xff79 },
	{ 0x0001, 0x2004, 0x0000, 0x0003, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(4.4425821243976316e-08), COLPOLY_SNORMAL(1.0), 0xff9d },
	{ 0x0001, 0x2004, 0x0003, 0x0007, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(4.4425821243976316e-08), COLPOLY_SNORMAL(1.0), 0xff9d },
};

Vec3s gPullSwitchCol_vertices[8] = {
	{ 135, 1260, 99 },
	{ 135, 1260, -699 },
	{ -135, 1260, -699 },
	{ -135, 1260, 99 },
	{ 135, -350, 99 },
	{ 135, -350, -699 },
	{ -135, -350, -699 },
	{ -135, -350, 99 },
};

CollisionHeader gPullSwitchCol_collisionHeader = {
	-135,
	-350,
	-699,
	135,
	1260,
	99,
	8,
	gPullSwitchCol_vertices,
	8,
	gPullSwitchCol_polygons,
	gPullSwitchCol_polygonTypes,
	0,
	0,
	0
};

