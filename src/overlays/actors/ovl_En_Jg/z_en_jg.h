#ifndef Z_EN_JG_H
#define Z_EN_JG_H

#include "global.h"
#include "assets/objects/object_jg/object_jg.h"

struct EnJg;

typedef void (*EnJgActionFunc)(struct EnJg*, PlayState*);

typedef struct EnJg {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime skelAnime;
    /* 0x188 */ Vec3s jointTable[GORON_ELDER_LIMB_MAX];
    /* 0x20C */ UNK_TYPE1 unkPadding20C[0x94];
    /* 0x2A0 */ Vec3s morphTable[GORON_ELDER_LIMB_MAX];
    /* 0x324 */ UNK_TYPE1 unkPadding324[0x94];
    /* 0x3B8 */ ColliderCylinder collider;
    /* 0x404 */ Vec3f shadowPos;
    /* 0x410 */ u16 playerOcarinaOut;
    /* 0x412 */ s16 animIndex;
    /* 0x414 */ s16 alpha;
    /* 0x416 */ s16 csIdList[2];
    /* 0x41A */ s16 csIdIndex;
    /* 0x41C */ s16 teachingCutsceneTimer;
    /* 0x420 */ EnJgActionFunc actionFunc;
                NpcInteractInfo interactInfo;
} EnJg; // size = 0x424

#endif // Z_EN_JG_H
