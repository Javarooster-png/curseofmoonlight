#ifndef Z_EN_BEAST_H
#define Z_EN_BEAST_H

#include "ultra64.h"
#include "global.h"
#include "assets/objects/object_beast/object_beast.h"

struct EnBeast;

typedef void (*EnBeastActionFunc)(struct EnBeast*, PlayState*);
typedef struct EnBeast {
    Actor actor;
    EnBeastActionFunc actionFunc;
    SkelAnime skelAnime;
    f32 timer;
    f32 AnimSelect;
    Vec3s jointTable[GBEASTSKEL_NUM_LIMBS];
    Vec3s morphTable[GBEASTSKEL_NUM_LIMBS];
    u8 hurtboxCooldown;
    ColliderCylinder collider;
    ColliderJntSph colliderSpheres;
    ColliderJntSphElement colliderSpheresElements[3];
    s16 headRotx;
    s16 headRoty;
    Vec3f WeaponTip, Weapon, ArmR, Chest, Head, LegL, LegR, HandR, HandL;
    u8 alarmstate;
    u8 cantSee;
    u8 canDodge;
    u8 inrange;
    f32 deathTimer;
} EnBeast;
#endif