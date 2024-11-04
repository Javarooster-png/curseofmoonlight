#ifndef Z_EN_ROVER_H
#define Z_EN_ROVER_H

#include "global.h"
#include "assets/objects/object_tw/object_tw.h"

struct EnRover;

typedef void (*EnRoverActionFunc)(struct EnRover*, PlayState*);

typedef enum {
    /*  0 */ TWINROVA_LIMB_NONE,
    /*  1 */ TWINROVA_LIMB_PELVIS,
    /*  2 */ TWINROVA_LIMB_SASH_1,
    /*  3 */ TWINROVA_LIMB_SASH_2,
    /*  4 */ TWINROVA_LIMB_SASH_3,
    /*  5 */ TWINROVA_LIMB_SASH_4,
    /*  6 */ TWINROVA_LIMB_LEFT_THIGH,
    /*  7 */ TWINROVA_LIMB_LEFT_SHIN,
    /*  8 */ TWINROVA_LIMB_LEFT_FOOT,
    /*  9 */ TWINROVA_LIMB_RIGHT_THIGH,
    /* 10 */ TWINROVA_LIMB_RIGHT_SHIN,
    /* 11 */ TWINROVA_LIMB_RIGHT_FOOT,
    /* 12 */ TWINROVA_LIMB_TORSO,
    /* 13 */ TWINROVA_LIMB_LEFT_BREAST,
    /* 14 */ TWINROVA_LIMB_RIGHT_BREAST,
    /* 15 */ TWINROVA_LIMB_HAIR_ICE_TRAIL,
    /* 16 */ TWINROVA_LIMB_HAIR_ICE_JET,
    /* 17 */ TWINROVA_LIMB_HAIR_FIRE_JET,
    /* 18 */ TWINROVA_LIMB_HAIR_FIRE_TRAIL,
    /* 19 */ TWINROVA_LIMB_LEFT_HAIR_BUN,
    /* 20 */ TWINROVA_LIMB_RIGHT_HAIR_BUN,
    /* 21 */ TWINROVA_LIMB_HEAD,
    /* 22 */ TWINROVA_LIMB_RIGHT_BRAID_START,
    /* 23 */ TWINROVA_LIMB_RIGHT_BRAID_END,
    /* 24 */ TWINROVA_LIMB_LEFT_BRAID_START,
    /* 25 */ TWINROVA_LIMB_LEFT_BRAID_END,
    /* 26 */ TWINROVA_LIMB_LEFT_SHOULDER,
    /* 27 */ TWINROVA_LIMB_LEFT_UPPER_ARM,
    /* 28 */ TWINROVA_LIMB_LEFT_FOREARM,
    /* 29 */ TWINROVA_LIMB_LEFT_SLEEVE_START,
    /* 30 */ TWINROVA_LIMB_LEFT_SLEEVE_END,
    /* 31 */ TWINROVA_LIMB_BROOM_ICE_TRAIL,
    /* 32 */ TWINROVA_LIMB_BROOM_ICE_JET,
    /* 33 */ TWINROVA_LIMB_LEFT_HAND,
    /* 34 */ TWINROVA_LIMB_LEFT_BROOM,
    /* 35 */ TWINROVA_LIMB_RIGHT_SHOULDER,
    /* 36 */ TWINROVA_LIMB_RIGHT_UPPER_ARM,
    /* 37 */ TWINROVA_LIMB_RIGHT_FOREARM,
    /* 38 */ TWINROVA_LIMB_RIGHT_SLEEVE_START,
    /* 39 */ TWINROVA_LIMB_RIGHT_SLEEVE_END,
    /* 40 */ TWINROVA_LIMB_RIGHT_BROOM,
    /* 41 */ TWINROVA_LIMB_BROOM_FIRE_JET,
    /* 42 */ TWINROVA_LIMB_BROOM_FIRE_TRAIL,
    /* 43 */ TWINROVA_LIMB_RIGHT_HAND,
    /* 44 */ TWINROVA_LIMB_MAX
} TwinrovaLimb;

typedef struct EnRover {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime skelAnime;
    /* 0x188 */ Vec3s jointTable[TWINROVA_LIMB_MAX];
    /* 0x20C */ UNK_TYPE1 unkPadding20C[0x94];
    /* 0x2A0 */ Vec3s morphTable[TWINROVA_LIMB_MAX];
    /* 0x324 */ UNK_TYPE1 unkPadding324[0x94];
    /* 0x3B8 */ ColliderCylinder collider;
    /* 0x404 */ Vec3f shadowPos;
    /* 0x410 */ u16 playerOcarinaOut;
    /* 0x412 */ s16 animIndex;
    /* 0x414 */ s16 alpha;
    /* 0x416 */ s16 csIdList[2];
    /* 0x41A */ s16 csIdIndex;
    /* 0x41C */ s16 teachingCutsceneTimer;
    /* 0x420 */ EnRoverActionFunc actionFunc;
                NpcInteractInfo interactInfo;
} EnRover; // size = 0x424

#endif // Z_EN_ROVER_H
