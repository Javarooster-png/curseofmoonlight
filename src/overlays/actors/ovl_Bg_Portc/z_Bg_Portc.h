#ifndef Z_BG_PORTC_H
#define Z_BG_PORTC_H
#include "ultra64.h"
#include "global.h"

struct SPortc;

typedef void (*SPortcActionFunc)(struct SPortc*, PlayState*);
typedef struct SPortc {
    DynaPolyActor dyna;
    SPortcActionFunc actionFunc;
    s16 timer; 
} SPortc;

#endif