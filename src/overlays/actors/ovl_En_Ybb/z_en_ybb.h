#ifndef Z_EN_YBB_H
#define Z_EN_YBB_H

#include "global.h"
#include "assets/objects/object_ybb/object_ybb.h"

struct EnYbb;

typedef void (*EnYbbActionFunc)(struct EnYbb*, PlayState*);

typedef struct EnYbb {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime skelAnime;
    /* 0x188 */ Vec3s jointTable[YBB_LIMB_MAX];
    /* 0x20C */ UNK_TYPE1 unkPadding20C[0x94];
    /* 0x2A0 */ Vec3s morphTable[YBB_LIMB_MAX];
    /* 0x324 */ UNK_TYPE1 unkPadding324[0x94];
    /* 0x3B8 */ ColliderCylinder collider;
    /* 0x404 */ Vec3f shadowPos;
    /* 0x410 */ u16 playerOcarinaOut;
    /* 0x412 */ s16 animIndex;
    /* 0x414 */ s16 alpha;
    /* 0x416 */ s16 csIdList[2];
    /* 0x41A */ s16 csIdIndex;
    /* 0x41C */ s16 teachingCutsceneTimer;
    /* 0x420 */ EnYbbActionFunc actionFunc;
                NpcInteractInfo interactInfo;
} EnYbb; // size = 0x424

#endif // Z_EN_YBB_H
