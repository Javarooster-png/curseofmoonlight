#ifndef Z_EN_WEREDRIP2_H
#define Z_EN_WEREDRIP2_H

#include "ultra64.h"
#include "global.h"
#include "assets/objects/object_weredrip2/object_weredrip2.h"

struct EnWere2;

typedef void (*EnWere2ActionFunc)(struct EnWere2*, PlayState*);
typedef struct EnWere2 {
    Actor actor;
    EnWere2ActionFunc actionFunc;
    SkelAnime skelAnime;
    f32 timer;
    f32 AnimSelect;
    Vec3s jointTable[GWERECIT2_NUM_LIMBS];
    Vec3s morphTable[GWERECIT2_NUM_LIMBS];
    u8 hurtboxCooldown;
    s32 blureIndex;
    ColliderCylinder collider;
    ColliderQuad swordCollider;
    ColliderJntSph colliderSpheres;
    ColliderJntSphElement colliderSpheresElements[1];
    s16 headRotx;
    s16 headRoty;
    Vec3f WeaponTip, Weapon, ArmR, Chest, Head, LegL, LegR;
    u8 alarmstate;
    u8 cantSee;
    f32 deathTimer;
} EnWere2;
#endif