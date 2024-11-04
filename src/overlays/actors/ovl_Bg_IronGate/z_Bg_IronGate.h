#ifndef Z_BG_LAMPVATER_H
#define Z_BG_LAMPVATER_H
#include "ultra64.h"
#include "global.h"

struct SIronG;

typedef void (*SIronGActionFunc)(struct SIronG*, PlayState*);
typedef struct SIronG {
    DynaPolyActor dyna;
    SIronGActionFunc actionFunc;
    s16 timer; 
} SIronG;

#endif