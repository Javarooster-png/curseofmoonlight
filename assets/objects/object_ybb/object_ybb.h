#ifndef OBJECT_YBB_H
#define OBJECT_YBB_H 1

typedef enum ObjectYbbLimb {
    /* 0x00 */ YBB_LIMB_NONE,
    /* 0x01 */ YBB_LIMB_MAIN_ROOT,
    /* 0x02 */ YBB_LIMB_PANTS,
    /* 0x03 */ YBB_LIMB_LEGS_ROOT,
    /* 0x04 */ YBB_LIMB_RIGHT_THIGH,
    /* 0x05 */ YBB_LIMB_RIGHT_SHIN,
    /* 0x06 */ YBB_LIMB_RIGHT_FOOT,
    /* 0x07 */ YBB_LIMB_LEFT_THIGH,
    /* 0x08 */ YBB_LIMB_LEFT_SHIN,
    /* 0x09 */ YBB_LIMB_LEFT_FOOT,
    /* 0x0A */ YBB_LIMB_CHEST_ROOT,
    /* 0x0B */ YBB_LIMB_HEAD,
    /* 0x0C */ YBB_LIMB_PONYTAIL,
    /* 0x0D */ YBB_LIMB_EMPTY_5E88,
    /* 0x0E */ YBB_LIMB_LEFT_UPPER_ARM,
    /* 0x0F */ YBB_LIMB_LEFT_FOREARM,
    /* 0x10 */ YBB_LIMB_LEFT_HAND,
    /* 0x11 */ YBB_LIMB_RIGHT_UPPER_ARM,
    /* 0x12 */ YBB_LIMB_RIGHT_FOREARM,
    /* 0x13 */ YBB_LIMB_RIGHT_HAND,
    /* 0x14 */ YBB_LIMB_EMPTY_5EDC,
    /* 0x15 */ YBB_LIMB_TORSO,
    /* 0x16 */ YBB_LIMB_MAX
} ObjectYbbLimb;

extern s16 object_ybb_Anim_000200FrameData[];
extern JointIndex object_ybb_Anim_000200JointIndices[];
extern AnimationHeader object_ybb_Anim_000200;
extern Vtx object_ybbVtx_000210[];
extern Vtx object_ybbVtx_0020B0[];
extern Vtx object_ybbVtx_002D80[];
extern Gfx gYbbPantsAndBellyButtonDL[];
extern Gfx gYbbRightThighDL[];
extern Gfx gYbbRightShinDL[];
extern Gfx gYbbRightFoodDL[];
extern Gfx gYbbLeftThighDL[];
extern Gfx gYbbLeftShinDL[];
extern Gfx gYbbLeftFootDL[];
extern Gfx gYbbEndDisplayList4108DL[];
extern Gfx gYbbUpperTorsoDL[];
extern Gfx gYbbHeadDL[];
extern Gfx gYbbPonyTailDL[];
extern Gfx gYbbEndDisplayList4970DL[];
extern Gfx gYbbRightUpperArmDL[];
extern Gfx gYbbRightForearmDL[];
extern Gfx gYbbRightHandDL[];
extern Gfx gYbbLeftUpperArmDL[];
extern Gfx gYbbLeftForearmDL[];
extern Gfx gYbbLeftHandDL[];
extern u64 gYbbTLUT[];
extern u64 gYbbForeheadBlotchTex[];
extern u64 gYbbPonytailTex[];
extern u64 gYbbFingersTex[];
extern u64 gYbbToesTex[];
extern u64 gYbbHairlineTex[];
extern u64 gYbbBellybuttonTex[];
extern u64 gYbbNoseTex[];
extern u64 gYbbEyeTex[];
extern u64 gYbbPantsTex[];
extern StandardLimb gYbbMainRootLimb;
extern StandardLimb gYbbPantsLimb;
extern StandardLimb gYbbLegsRootLimb;
extern StandardLimb gYbbRightThighLimb;
extern StandardLimb gYbbRightShinLimb;
extern StandardLimb gYbbRightFootLimb;
extern StandardLimb gYbbLeftThighLimb;
extern StandardLimb gYbbLeftShinLimb;
extern StandardLimb gYbbLeftFootLimb;
extern StandardLimb gYbbChestRootLimb;
extern StandardLimb gYbbHeadLimb;
extern StandardLimb gYbbPonyTailLimb;
extern StandardLimb gYbbEmpty5E88Limb;
extern StandardLimb gYbbLeftUpperArmLimb;
extern StandardLimb gYbbLeftForearmLimb;
extern StandardLimb gYbbLeftHandLimb;
extern StandardLimb gYbbRightUpperArmLimb;
extern StandardLimb gYbbRightForearmLimb;
extern StandardLimb gYbbRightHandLimb;
extern StandardLimb gYbbEmpty5EDCLimb;
extern StandardLimb gYbbUpperTorsoLimb;
extern void* gYbbSkelLimbs[];
extern FlexSkeletonHeader gYbbSkel;
#endif

#include "DanceAnim2.h"
