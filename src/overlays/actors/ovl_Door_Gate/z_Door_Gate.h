#ifndef Z_DOOR_GATE_H
#define Z_DOOR_GATE_H

#include "ultra64.h"
#include "global.h"
#include "assets/objects/object_gate/object_gate.h"

struct SGate;

typedef void (*SGateActionFunc)(struct SGate*, PlayState*);
typedef struct SGate {
    Actor actor;
    SGateActionFunc actionFunc;
    SkelAnime skelAnime;
    f32 AnimSelect;
    u8 timer;
    Vec3s jointTable[GGATESKEL_NUM_LIMBS];
    Vec3s morphTable[GGATESKEL_NUM_LIMBS];
} SGate;
#endif