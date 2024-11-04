#ifndef Z_EN_ZOMB_H
#define Z_EN_ZOMB_H

#include "ultra64.h"
#include "global.h"
#include "assets/objects/object_zomb/object_zomb.h"

struct EnZomb;

typedef void (*EnZombActionFunc)(struct EnZomb*, PlayState*);
typedef struct EnZomb {
    Actor actor;
    EnZombActionFunc actionFunc;
    SkelAnime skelAnime;
    f32 timer;
    f32 AnimSelect;
    Vec3s jointTable[GZOMBIESKEL_NUM_LIMBS];
    Vec3s morphTable[GZOMBIESKEL_NUM_LIMBS];
    u8 hurtboxCooldown;
    ColliderCylinder collider;
    ColliderJntSph colliderSpheres;
    ColliderJntSphElement colliderSpheresElements[1];
    Vec3f ArmR, Chest, Head, LegL, LegR, HandR, HandL;
    u8 alarmstate;
    u8 cantSee;
    u8 canDodge;
    s16 headRotx;
    s16 headRoty;
    f32 deathTimer;
} EnZomb;
#endif