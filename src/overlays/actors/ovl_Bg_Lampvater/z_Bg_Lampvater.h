#ifndef Z_BG_LAMPVATER_H
#define Z_BG_LAMPVATER_H
#include "ultra64.h"
#include "global.h"

struct SPlat;

typedef void (*SPlatActionFunc)(struct SPlat*, PlayState*);
typedef struct SPlat {
    DynaPolyActor dyna;
    SPlatActionFunc actionFunc;
    s16 timer; 
} SPlat;

#endif