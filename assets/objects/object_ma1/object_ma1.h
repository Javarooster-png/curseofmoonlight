#ifndef OBJECT_MA1_H
#define OBJECT_MA1_H 1

typedef enum ChildMalonLimb {
    /* 0x00 */ CHILD_MALON_LIMB_NONE,
    /* 0x01 */ CHILD_MALON_ROOT,
    /* 0x02 */ CHILD_MALON_LIMB_LEFT_THIGH,
    /* 0x03 */ CHILD_MALON_LIMB_LEFT_SHIN,
    /* 0x04 */ CHILD_MALON_LIMB_LEFT_FOOT,
    /* 0x05 */ CHILD_MALON_LIMB_RIGHT_THIGH,
    /* 0x06 */ CHILD_MALON_LIMB_RIGHT_SHIN,
    /* 0x07 */ CHILD_MALON_LIMB_RIGHT_FOOT,
    /* 0x08 */ CHILD_MALON_LIMB_CHEST,
    /* 0x09 */ CHILD_MALON_LIMB_LEFT_SHOULDER,
    /* 0x0A */ CHILD_MALON_LIMB_LEFT_ARM,
    /* 0x0B */ CHILD_MALON_LIMB_LEFT_HAND,
    /* 0x0C */ CHILD_MALON_LIMB_RIGHT_SHOULDER,
    /* 0x0D */ CHILD_MALON_LIMB_RIGHT_ARM,
    /* 0x0E */ CHILD_MALON_LIMB_RIGHT_HAND,
    /* 0x0F */ CHILD_MALON_LIMB_HEAD,
    /* 0x10 */ CHILD_MALON_LIMB_DRESS_UPPER,
    /* 0x11 */ CHILD_MALON_LIMB_DRESS_MIDDLE,
    /* 0x12 */ CHILD_MALON_LIMB_DRESS_LOWER,
    /* 0x13 */ CHILD_MALON_LIMB_MAX
} ChildMalonLimb;

extern s16 sMalonChildRaiseHandsAnimFrameData[];
extern JointIndex sMalonChildRaiseHandsAnimJointIndices[];
extern AnimationHeader gMalonChildRaiseHandsAnim;
extern s16 sMalonChildIdleAnimFrameData[];
extern JointIndex sMalonChildIdleAnimJointIndices[];
extern AnimationHeader gMalonChildIdleAnim;
extern u64 gMalonChildDressTLUT[];
extern u64 gMalonChildDressDesignTex[];
extern u64 gMalonChildFingersTex[];
extern u64 gMalonChildBowserTex[];
extern u64 gMalonChildScarfTex[];
extern u64 gMalonChildBootTex[];
extern u64 gMalonChildHairTLUT[];
extern u64 gMalonChildEyeTLUT[];
extern u64 gMalonChildSkinGradientTex[];
extern u64 gMalonChildBrownCircleTex[];
extern u64 gMalonChildEarTex[];
extern u64 gMalonChildHairTex[];
extern u64 gMalonChildEyeOpenTex[];
extern u64 gMalonChildNeutralMouthTex[];
extern u64 gMalonChildEyeHalfTex[];
extern u64 gMalonChildEyeClosedTex[];
extern u64 gMalonChildSmilingMouthTex[];
extern u64 gMalonChildTalkingMouthTex[];
extern Vtx object_ma1Vtx_003318[];
extern Gfx gMalonChildHeadDL[];
extern Vtx object_ma1Vtx_004B18[];
extern Gfx gMalonChildDressLowerDL[];
extern Gfx gMalonChildDressMiddleDL[];
extern Gfx gMalonChildChestDL[];
extern Gfx gMalonChildRightShoulderDL[];
extern Gfx gMalonChildRightArmDL[];
extern Gfx gMalonChildRightHandDL[];
extern Gfx gMalonChildLeftShoulderDL[];
extern Gfx gMalonChildLeftArmDL[];
extern Gfx gMalonChildLeftHandDL[];
extern Gfx gMalonChildDressUpperDL[];
extern Gfx gMalonChildRightThighDL[];
extern Gfx gMalonChildRightShinDL[];
extern Gfx gMalonChildRightFoorDL[];
extern Gfx gMalonChildLeftThighDL[];
extern Gfx gMalonChildLeftShinDL[];
extern Gfx gMalonChildLeftFootDL[];
extern StandardLimb gMalonChildRootLimb;
extern StandardLimb gMalonChildLeftThighLimb;
extern StandardLimb gMalonChildLeftShinLimb;
extern StandardLimb gMalonChildLeftFootLimb;
extern StandardLimb gMalonChildRightThighLimb;
extern StandardLimb gMalonChildRightShinLimb;
extern StandardLimb gMalonChildRightFootLimb;
extern StandardLimb gMalonChildChestLimb;
extern StandardLimb gMalonChildLeftShoulderLimb;
extern StandardLimb gMalonChildLeftArmLimb;
extern StandardLimb gMalonChildLeftHandLimb;
extern StandardLimb gMalonChildRightShoulderLimb;
extern StandardLimb gMalonChildRightArmLimb;
extern StandardLimb gMalonChildRightHandLimb;
extern StandardLimb gMalonChildHeadLimb;
extern StandardLimb gMalonChildDressUpperLimb;
extern StandardLimb gMalonChildDressMiddleLimb;
extern StandardLimb gMalonChildDressLowerLimb;
extern void* gMalonChildSkelLimbs[];
extern FlexSkeletonHeader gMalonChildSkel;
extern s16 sMalonChildSingAnimFrameData[];
extern JointIndex sMalonChildSingAnimJointIndices[];
extern AnimationHeader gMalonChildSingAnim;
#endif
