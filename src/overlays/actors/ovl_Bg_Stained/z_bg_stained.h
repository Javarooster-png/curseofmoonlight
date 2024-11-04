#ifndef Z_BG_STAINED_H
#define Z_BG_STAINED_H

#include "ultra64.h"
#include "global.h"
#include "assets/objects/object_stained/gWindowMesh_transparent.h"
#include "assets/objects/object_stained/gWindowMeshDL.h"
#include "assets/objects/object_stained/gShard.h"

struct BgStained;

typedef void (*BgStainedActionFunc)(struct BgStained*, PlayState*);
typedef struct BgStained {
    Actor actor;
    BgStainedActionFunc actionFunc;
    u8 timer;
} BgStained;
#endif