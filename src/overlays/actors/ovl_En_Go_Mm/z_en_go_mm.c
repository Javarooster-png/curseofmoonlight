/*
 * File: z_en_go_mm.c
 * Overlay: ovl_En_Go_Mm
 * Description: MM Gorons
 */

#include "z_en_go_mm.h"
#include "macros.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "gfx.h"
#include "global.h"

#define FLAGS (ACTOR_FLAG_0 | ACTOR_FLAG_3 | ACTOR_FLAG_4 | ACTOR_FLAG_5)

#define THIS ((EnGoMm*)thisx)

void EnGoMm_Init(Actor* thisx, PlayState* play);
void EnGoMm_Destroy(Actor* thisx, PlayState* play);
void EnGoMm_Update(Actor* thisx, PlayState* play);
void EnGoMm_Draw(Actor* thisx, PlayState* play);

void EnGoMm_Idle(EnGoMm* this, PlayState* play);
static Vec3f D_80BFB2F4 = { 500.0f, -500.0, 0.0f };

void EnGoMm_UpdateAnimation(EnGoMm* this, PlayState* play);

void EnGoMm_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play);
u16 EnGoMm_GetNextTextId(PlayState* play, Actor* thisx);
s16 EnGoMm_UpdateTalkState(PlayState* play, Actor* thisx);

ActorInit En_Go_Mm_InitVars = {
    ACTOR_EN_GO_MM,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_OF1D_MAP_MM,
    sizeof(EnGoMm),
    (ActorFunc)EnGoMm_Init,
    (ActorFunc)EnGoMm_Destroy,
    (ActorFunc)EnGoMm_Update,
    (ActorFunc)EnGoMm_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COLTYPE_NONE,
        AT_NONE,
        AC_NONE,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_2,
        COLSHAPE_CYLINDER,
    },
    {
        ELEMTYPE_UNK0,
        { 0x00000000, 0x00, 0x00 },
        { 0x00000000, 0x00, 0x00 },
        TOUCH_NONE,
        BUMP_NONE,
        OCELEM_ON,
    },
    { 20, 46, 0, { 0, 0, 0 } },
};

static CollisionCheckInfoInit2 sColChkInfoInit = {
    0, 0, 0, 0, MASS_IMMOVABLE,
};

void EnGoMm_Init(Actor* thisx, PlayState* play) {
    EnGoMm* this = THIS;
    Actor_SetScale(&this->actor, 0.01f);
    ActorShape_Init(&this->actor.shape, 0.0f, EnGoMm_ActorShadowFunc, 20.0f);

    SkelAnime_InitFlex(play, &this->skelAnime, &gGoronSkelMm, &gGoronStandingIdleAnim,
                       this->jointTable, this->morphTable, GORON_LIMB_MAX);

    Animation_PlayLoop(&this->skelAnime, &gGoronStandingIdleAnim);
    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &sColChkInfoInit);

    this->alpha = 255;

    this->actor.colChkInfo.mass = MASS_IMMOVABLE;
}

void EnGoMm_Destroy(Actor* thisx, PlayState* play) {
    EnGoMm* this = THIS;
    Collider_DestroyCylinder(play, &this->collider);
}

void EnGoMm_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play) {
    EnGoMm* this = THIS;
    if (this->alpha > 0) {
        ActorShadow_DrawCircle(&this->actor, mapper, play);
    }
}

void EnGoMm_Update(Actor* thisx, PlayState* play) {
    s16 targetFaceRotX;
    s16 targetFaceRotY;
    Vec3f pos;
    Vec3f epos;
    Player* player = GET_PLAYER(play);
    
    EnGoMm* this = THIS;


    targetFaceRotY = Actor_WorldYawTowardActor(&this->actor, &GET_PLAYER(play)->actor) - this->actor.shape.rot.y;
    targetFaceRotX = Actor_WorldPitchTowardActor(&this->actor, &GET_PLAYER(play)->actor) - this->actor.shape.rot.x;
    Math_ApproachS(&this->headRoty, targetFaceRotY, 3, 0x7D0);
    this->headRoty = CLAMP(this->headRoty, -12000, 12000);
    Math_ApproachS(&this->headRotx, targetFaceRotX, 3, 0x7D0);
    this->headRotx = CLAMP(this->headRotx, -6000, 6000);

    Collider_UpdateCylinder(&this->actor, &this->collider);
    CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
    SkelAnime_Update(&this->skelAnime);
    Actor_MoveXZGravity(&this->actor);
    Actor_UpdateBgCheckInfo(play, &this->actor, 40.0f, 25.0f, 40.0f, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2);

    Npc_UpdateTalking(
        play,
        &this->actor,
        &this->interactInfo.talkState,
        50.0f,
        EnGoMm_GetNextTextId,
        EnGoMm_UpdateTalkState
    );
}

void EnGoMm_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, Actor* thisx) {
    EnGoMm* this = THIS;
    Vec3f zeroVec = {0};
    if (limbIndex == GORON_LIMB_HEAD) {
        Matrix_MultVec3f(&D_80BFB2F4, &this->actor.focus.pos);
    }
}

s32 EnGoMm_OverrideLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx) {
    EnGoMm* this = (EnGoMm*)thisx;
    Vec3f zero = {0};
    if (limbIndex == GORON_LIMB_HEAD) {
        rot->x += this->headRoty;
    }
    return false;
}

void EnGoMm_Draw(Actor* thisx, PlayState* play) {
    EnGoMm* this = THIS;

    static void* eyeTextures[] = {
        gGoronEyeOpenTex,
        gGoronEyeClosed2Tex,
        gGoronEyeHalfTex,
        gGoronEyeClosedTex,
    };

    static void* beardTexture[] = {
        gGoronBeardTex,
    };

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(eyeTextures[0]));
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable,
                          this->skelAnime.dListCount, EnGoMm_OverrideLimbDraw, EnGoMm_PostLimbDraw, &this->actor);

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}

u16 EnGoMm_GetNextTextId(PlayState* play, Actor* thisx) {
    return 0x71B6;
}

s16 EnGoMm_UpdateTalkState(PlayState* play, Actor* thisx) {
    return NPC_TALK_STATE_IDLE;
}
