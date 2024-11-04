#include "ultra64.h"
#include "z64.h"
#include "macros.h"

SurfaceType gIronGateDL_collision_polygonTypes[] = {
	{ 0x00000000, 0x00000000 },
};

CollisionPoly gIronGateDL_collision_polygons[] = {
	{ 0x0000, 0x0002, 0x0000, 0x0001, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-1.7647865035996801e-07), COLPOLY_SNORMAL(1.2585222306567972e-14), 0xfe91 },
	{ 0x0000, 0x0002, 0x0003, 0x0000, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-1.7647865035996801e-07), COLPOLY_SNORMAL(7.714126409321623e-15), 0xfe91 },
	{ 0x0000, 0x0005, 0x0006, 0x0004, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xfe68 },
	{ 0x0000, 0x0006, 0x0007, 0x0004, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xfe68 },
	{ 0x0000, 0x0005, 0x0000, 0x0004, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), 0x687a },
	{ 0x0000, 0x0005, 0x0003, 0x0000, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), 0x687a },
};

Vec3s gIronGateDL_collision_vertices[8] = {
	{ -367, 21616, 26746 },
	{ -367, 21616, 0 },
	{ -367, 0, 0 },
	{ -367, 0, 26746 },
	{ 408, 21616, 26746 },
	{ 408, 0, 26746 },
	{ 408, 0, 0 },
	{ 408, 21616, 0 },
};

CollisionHeader gIronGateDL_collision_collisionHeader = {
	-367,
	0,
	0,
	408,
	21616,
	26746,
	8,
	gIronGateDL_collision_vertices,
	6,
	gIronGateDL_collision_polygons,
	gIronGateDL_collision_polygonTypes,
	0,
	0,
	0
};

