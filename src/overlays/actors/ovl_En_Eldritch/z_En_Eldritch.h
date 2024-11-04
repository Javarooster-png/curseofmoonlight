#ifndef Z_EN_ELDRITCH_H
#define Z_EN_ELDRITCH_H

#include "ultra64.h"
#include "global.h"
#include "assets/objects/object_eldritch/object_eldritch.h"

struct EnEldritch;

typedef void (*EnEldritchActionFunc)(struct EnEldritch*, PlayState*);
typedef struct EnEldritch {
    Actor actor;
    EnEldritchActionFunc actionFunc;
    SkelAnime skelAnime;
    f32 timer;
    f32 AnimSelect;
    Vec3s jointTable[GELDRSKEL_NUM_LIMBS];
    Vec3s morphTable[GELDRSKEL_NUM_LIMBS];
    u8 hurtboxCooldown;
    s32 blureIndex;
    ColliderCylinder collider;
    ColliderJntSph colliderSpheres;
    ColliderJntSphElement colliderSpheresElements[4];
    Vec3f ArmR, Chest, Head, LegL, LegR, HandR, HandL, HandRCont, HandLCont, rightFoot, leftFoot;
    u8 alarmstate;
    u8 cantSee;
    f32 deathTimer;
} EnEldritch;
#endif