#ifndef Z_EN_THEFATHER_H
#define Z_EN_THEFATHER_H

#include "ultra64.h"
#include "global.h"
#include "assets/objects/object_thefather/object_thefather.h"

struct EnThefather;

typedef void (*EnThefatherActionFunc)(struct EnThefather*, PlayState*);
typedef struct EnThefather {
    Actor actor;
    EnThefatherActionFunc actionFunc;
    SkelAnime skelAnime;
    f32 timer;
    f32 AnimSelect;
    Vec3s jointTable[GTHEFATHER_NUM_LIMBS];
    Vec3s morphTable[GTHEFATHER_NUM_LIMBS];
    u8 hurtboxCooldown;
    u8 poise;
    u8 screamcountdown;
    ColliderCylinder collider;
    ColliderCylinder collider2;
    ColliderJntSph colliderSpheres;
    ColliderJntSphElement colliderSpheresElements[16];
    Vec3f ArmR, ArmL, Chest, Head, LegL, LegR, HandR, HandL, ShinR, ShinL, FootR, FootL, ShoulderR, ShoulderL, Waist, Abdomen;
    u8 alarmstate;
    u8 cantSee;
    u8 canDodge;
    s16 headRotx;
    s16 headRoty;
    f32 deathTimer;
} EnThefather;
#endif