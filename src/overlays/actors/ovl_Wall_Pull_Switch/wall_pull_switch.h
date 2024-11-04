#ifndef WALL_PULL_SWITCH_H
#define WALL_PULL_SWITCH_H

#include "ultra64.h"
#include "global.h"

struct WallPullSwitch;

typedef void (*WallPullSwitchActionFunc)(struct WallPullSwitch*, PlayState*);

typedef enum {
    WALLSWITCH_COL_NO_GRAB,
    WALLSWITCH_COL_GRAB
} WallPullSwitchActiveCollision;

typedef struct WallPullSwitch {
    DynaPolyActor dyna;
    WallPullSwitchActionFunc actionFunc;
    s16 timer;
    f32 stepSize;
    u8 activeCol;
} WallPullSwitch;

#endif
