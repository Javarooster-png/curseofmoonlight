#ifndef Z_EN_WEREDRIP3_H
#define Z_EN_WEREDRIP3_H

#include "ultra64.h"
#include "global.h"
#include "assets/objects/object_weredrip3/object_weredrip3.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
struct EnWere3;

typedef void (*EnWere3ActionFunc)(struct EnWere3*, PlayState*);
typedef struct EnWere3 {
    Actor actor;
    EnWere3ActionFunc actionFunc;
    SkelAnime skelAnime;
    f32 timer;
    f32 AnimSelect;
    Vec3s jointTable[GWERECIT3_NUM_LIMBS];
    Vec3s morphTable[GWERECIT3_NUM_LIMBS];
    u8 hurtboxCooldown;
    s32 blureIndex;
    ColliderCylinder collider;
    ColliderQuad swordCollider;
    ColliderJntSph colliderSpheres;
    ColliderJntSphElement colliderSpheresElements[2];
    s16 headRotx;
    s16 headRoty;
    Vec3f WeaponTip, Weapon, ArmR, Chest, Head, LegL, LegR, Torch;
    u8 alarmstate;
    u8 cantSee;
    f32 deathTimer;
} EnWere3;
#endif