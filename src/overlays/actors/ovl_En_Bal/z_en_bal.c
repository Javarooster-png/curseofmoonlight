/*
 * File: z_en_bal.c
 * Overlay: ovl_En_Bal
 * Description: Tingle
 */

#include "z_en_bal.h"
#include "global.h"

#define FLAGS (ACTOR_FLAG_0 | ACTOR_FLAG_3 | ACTOR_FLAG_4 | ACTOR_FLAG_5)

#define THIS ((EnBal*)thisx)

void EnBal_Init(Actor* thisx, PlayState* play);
void EnBal_Destroy(Actor* thisx, PlayState* play);
void EnBal_Update(Actor* thisx, PlayState* play);
void EnBal_Draw(Actor* thisx, PlayState* play);

void EnBal_Idle(EnBal* this, PlayState* play);
static Vec3f D_80BFB2F4 = { 500.0f, -500.0, 0.0f };

void EnBal_UpdateAnimation(EnBal* this, PlayState* play);

void EnBal_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play);
u16 EnBal_GetNextTextId(PlayState* play, Actor* thisx);
s16 EnBal_UpdateTalkState(PlayState* play, Actor* thisx);

ActorInit En_Bal_InitVars = {
    ACTOR_EN_BAL,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_BAL,
    sizeof(EnBal),
    (ActorFunc)EnBal_Init,
    (ActorFunc)EnBal_Destroy,
    (ActorFunc)EnBal_Update,
    (ActorFunc)EnBal_Draw,
};

typedef enum {
    /* 0 */ TINGLE_EYETEX_OPEN,
    /* 1 */ TINGLE_EYETEX_CLOSED
} TingleEyeTexture;

void EnBal_Init(Actor* thisx, PlayState* play) {
    EnBal* this = THIS;
    Actor_SetScale(&this->actor, 0.02f);
    ActorShape_Init(&this->actor.shape, 0.0f, EnBal_ActorShadowFunc, 20.0f);

    SkelAnime_InitFlex(play, &this->skelAnime, &gTingleSkel, &gTingleHappyDanceAnim,
                       this->jointTable, this->morphTable, TINGLE_LIMB_MAX);

    Animation_PlayLoop(&this->skelAnime, &gTingleHappyDanceAnim);

    this->actor.colChkInfo.mass = MASS_IMMOVABLE;
    
    this->eyeTexIndex = TINGLE_EYETEX_OPEN;
}

void EnBal_Destroy(Actor* thisx, PlayState* play) {
    EnBal* this = THIS;
    //Collider_DestroyCylinder(play, &this->collider);
}

void EnBal_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play) {
    EnBal* this = THIS;
    if (this->alpha > 0) {
        ActorShadow_DrawCircle(&this->actor, mapper, play);
    }
}

typedef enum {
    ENBAL_MESSAGE_1 = 0x71C4,
} EnBalMessageId;

void EnBal_Update(Actor* thisx, PlayState* play) {
    EnBal* this = THIS;
    SkelAnime_Update(&this->skelAnime);
    Actor_MoveXZGravity(&this->actor);
    Actor_UpdateBgCheckInfo(play, &this->actor, 40.0f, 25.0f, 40.0f, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2);

    Npc_UpdateTalking(
        play,
        &this->actor,
        &this->interactInfo.talkState,
        50.0f,
        EnBal_GetNextTextId,
        EnBal_UpdateTalkState
    );
}

static Vec3f sFocusPosMultiplier = { 1000.0f, 0.0f, 0.0f };

void EnBal_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, Actor* thisx) {
    EnBal* this = THIS;
    if (limbIndex == TINGLE_LIMB_HEAD) {
        Matrix_MultVec3f(&sFocusPosMultiplier, &this->actor.focus.pos);
    }
}

void EnBal_Draw(Actor* thisx, PlayState* play) {
    EnBal* this = THIS;

    static void* eyeTextures[] = {
        gTingleEyeOpenTex,
    };
    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(eyeTextures[0]));
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount,
                          NULL, EnBal_PostLimbDraw, &this->actor);

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}

u16 EnBal_GetNextTextId(PlayState* play, Actor* thisx) {
    return ENBAL_MESSAGE_1;
}

s16 EnBal_UpdateTalkState(PlayState* play, Actor* thisx) {
    return NPC_TALK_STATE_IDLE;
}
