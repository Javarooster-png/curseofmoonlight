#ifndef Z_EN_WEREDRIP_H
#define Z_EN_WEREDRIP_H

#include "ultra64.h"
#include "global.h"
#include "assets/objects/object_weredrip/object_weredrip.h"

struct EnWere;

typedef void (*EnWereActionFunc)(struct EnWere*, PlayState*);
typedef struct EnWere {
    Actor actor;
    EnWereActionFunc actionFunc;
    SkelAnime skelAnime;
    f32 timer;
    f32 AnimSelect;
    Vec3s jointTable[GWERECIT_NUM_LIMBS];
    Vec3s morphTable[GWERECIT_NUM_LIMBS];
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
} EnWere;
#endif