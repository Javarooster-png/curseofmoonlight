#ifndef Z_EN_SKELL_H
#define Z_EN_SKELL_H

#include "ultra64.h"
#include "global.h"
#include "assets/objects/object_skelb/object_skelb.h"

struct EnSkelB;

typedef void (*EnSkelBActionFunc)(struct EnSkelB*, PlayState*);
typedef struct EnSkelB {
    Actor actor;
    EnSkelBActionFunc actionFunc;
    SkelAnime skelAnime;
    f32 timer;
    f32 AnimSelect;
    Vec3s jointTable[GSKELSKEL_NUM_LIMBS];
    Vec3s morphTable[GSKELSKEL_NUM_LIMBS];
    u8 hurtboxCooldown;
    s32 blureIndex;
    ColliderCylinder collider;
    ColliderJntSph colliderSpheres;
    ColliderJntSphElement colliderSpheresElements[3];
    s16 headRotx;
    s16 headRoty;
    Vec3f WeaponTip, Weapon, ArmR, Chest, Head, LegL, LegR, HandR, HandL;
    u8 alarmstate;
    u8 cantSee;
    u8 canDodge;
    f32 deathTimer;
} EnSkelB;
#endif