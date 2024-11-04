#ifndef OBJECT_SHOPNUTS_H
#define OBJECT_SHOPNUTS_H 1

typedef enum BusinessScrubLimb {
    /* 0x00 */ BUSINESS_SCRUB_LIMB_NONE,
    /* 0x01 */ BUSINESS_SCRUB_LIMB_ROOT,
    /* 0x02 */ BUSINESS_SCRUB_LIMB_LEFT_THIGH,
    /* 0x03 */ BUSINESS_SCRUB_LIMB_LEFT_SHIN,
    /* 0x04 */ BUSINESS_SCRUB_LIMB_LEFT_FOOT,
    /* 0x05 */ BUSINESS_SCRUB_LIMB_RIGHT_THIGH,
    /* 0x06 */ BUSINESS_SCRUB_LIMB_RIGHT_SHIN,
    /* 0x07 */ BUSINESS_SCRUB_LIMB_RIGHT_FOOT,
    /* 0x08 */ BUSINESS_SCRUB_LIMB_TOP_LEAF,
    /* 0x09 */ BUSINESS_SCRUB_LIMB_NOSE,
    /* 0x0A */ BUSINESS_SCRUB_LIMB_LEFT_UPPER_ARM,
    /* 0x0B */ BUSINESS_SCRUB_LIMB_LEFT_FOREARM,
    /* 0x0C */ BUSINESS_SCRUB_LIMB_LEFT_HAND,
    /* 0x0D */ BUSINESS_SCRUB_LIMB_RIGHT_UPPER_ARM,
    /* 0x0E */ BUSINESS_SCRUB_LIMB_RIGHT_FOREARM,
    /* 0x0F */ BUSINESS_SCRUB_LIMB_RIGHT_HAND,
    /* 0x10 */ BUSINESS_SCRUB_LIMB_EYES,
    /* 0x11 */ BUSINESS_SCRUB_LIMB_BODY,
    /* 0x12 */ BUSINESS_SCRUB_LIMB_MAX
} BusinessScrubLimb;

extern s16 sBusinessScrubThrowNutAnimFrameData[];
extern JointIndex sBusinessScrubThrowNutAnimJointIndices[];
extern AnimationHeader gBusinessScrubThrowNutAnim;
extern s16 sBusinessScrubPeekBurrowAnimFrameData[];
extern JointIndex sBusinessScrubPeekBurrowAnimJointIndices[];
extern AnimationHeader gBusinessScrubPeekBurrowAnim;
extern s16 sBusinessScrubRotateAnimFrameData[];
extern JointIndex sBusinessScrubRotateAnimJointIndices[];
extern AnimationHeader gBusinessScrubRotateAnim;
extern s16 sBusinessScrubNervousTransitionAnimFrameData[];
extern JointIndex sBusinessScrubNervousTransitionAnimJointIndices[];
extern AnimationHeader gBusinessScrubNervousTransitionAnim;
extern s16 sBusinessScrubLookAroundAnimFrameData[];
extern JointIndex sBusinessScrubLookAroundAnimJointIndices[];
extern AnimationHeader gBusinessScrubLookAroundAnim;
extern s16 sBusinessScrubNervousIdleAnimFrameData[];
extern JointIndex sBusinessScrubNervousIdleAnimJointIndices[];
extern AnimationHeader gBusinessScrubNervousIdleAnim;
extern s16 sBusinessScrubInitialAnimFrameData[];
extern JointIndex sBusinessScrubInitialAnimJointIndices[];
extern AnimationHeader gBusinessScrubInitialAnim;
extern Vtx object_shopnutsVtx_0013B0[];
extern Gfx gBusinessScrubRightHandDL[];
extern Gfx gBusinessScrubRightForearmDL[];
extern Gfx gBusinessScrubRightUpperArmDL[];
extern Gfx gBusinessScrubLeftHandDL[];
extern Gfx gBusinessScrubLeftForearmDL[];
extern Gfx gBusinessScrubLeftUpperArmDL[];
extern Gfx gBusinessScrubRightFootDL[];
extern Gfx gBusinessScrubRightShinDL[];
extern Gfx gBusinessScrubRightThighDL[];
extern Gfx gBusinessScrubLeftFootDL[];
extern Gfx gBusinessScrubLeftShinDL[];
extern Gfx gBusinessScrubLeftThighDL[];
extern u64 gBusinessScrubBodyTex[];
extern u64 gBusinessScrubNoseTex[];
extern u64 gBusinessScrubNostrilTex[];
extern u64 gBusinessScrubEyeTex[];
extern u64 gBusinessScrubLeafStemTex[];
extern u64 gBusinessScrubLeafTex[];
extern Vtx object_shopnutsVtx_0032F0[];
extern Gfx gBusinessScrubBodyDL[];
extern Gfx gBusinessScrubEyesDL[];
extern Gfx gBusinessScrubNoseDL[];
extern Gfx gBusinessScrubRootLeafDL[];
extern Gfx gBusinessScrubTopLeafDL[];
extern u64 gBusinessScrubDekuNutTex[];
extern Vtx object_shopnutsVtx_003FD8[];
extern Gfx gBusinessScrubDekuNutDL[];
extern StandardLimb gBusinessScrubRootLimb;
extern StandardLimb gBusinessScrubLeftThighLimb;
extern StandardLimb gBusinessScrubLeftShinLimb;
extern StandardLimb gBusinessScrubLeftFootLimb;
extern StandardLimb gBusinessScrubRightThighLimb;
extern StandardLimb gBusinessScrubRightShinLimb;
extern StandardLimb gBusinessScrubRightFootLimb;
extern StandardLimb gBusinessScrubTopLeafLimb;
extern StandardLimb gBusinessScrubNoseLimb;
extern StandardLimb gBusinessScrubLeftUpperArmLimb;
extern StandardLimb gBusinessScrubLeftForearmLimb;
extern StandardLimb gBusinessScrubLeftHandLimb;
extern StandardLimb gBusinessScrubRightUpperArmLimb;
extern StandardLimb gBusinessScrubRightForearmLimb;
extern StandardLimb gBusinessScrubRightHandLimb;
extern StandardLimb gBusinessScrubEyesLimb;
extern StandardLimb gBusinessScrubBodyLimb;
extern void* gBusinessScrubSkelLimbs[];
extern FlexSkeletonHeader gBusinessScrubSkel;
extern s16 sBusinessScrubLeaveBurrowAnimFrameData[];
extern JointIndex sBusinessScrubLeaveBurrowAnimJointIndices[];
extern AnimationHeader gBusinessScrubLeaveBurrowAnim;
extern s16 sBusinessScrubPeekAnimFrameData[];
extern JointIndex sBusinessScrubPeekAnimJointIndices[];
extern AnimationHeader gBusinessScrubPeekAnim;
#endif
