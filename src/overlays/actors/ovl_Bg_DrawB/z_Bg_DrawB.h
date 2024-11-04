#ifndef Z_BG_DRAWB_H
#define Z_BG_DRAWB_H
#include "ultra64.h"
#include "global.h"

struct SDrawB;

typedef void (*SDrawBActionFunc)(struct SDrawB*, PlayState*);
typedef struct SDrawB {
    DynaPolyActor dyna;
    SDrawBActionFunc actionFunc;
    s16 timer; 
    s16 prevRotation; 
    u8 frame; 
} SDrawB;

#endif