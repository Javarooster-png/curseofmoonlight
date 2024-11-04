/*
 * File: z_en_hg.c
 * Overlay: ovl_En_Hg
 * Description: Pamela Father Gibdo
 */

#include "z_en_hg.h"
#include "global.h"

#define FLAGS (ACTOR_FLAG_0 | ACTOR_FLAG_3 | ACTOR_FLAG_4 | ACTOR_FLAG_5)

#define THIS ((EnHg*)thisx)

void EnHg_Init(Actor* thisx, PlayState* play);
void EnHg_Destroy(Actor* thisx, PlayState* play);
void EnHg_Update(Actor* thisx, PlayState* play);
void EnHg_Draw(Actor* thisx, PlayState* play);

void EnHg_Idle(EnHg* this, PlayState* play);
static Vec3f D_80BFB2F4 = { 500.0f, -500.0, 0.0f };

void EnHg_UpdateAnimation(EnHg* this, PlayState* play);

void EnHg_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play);
u16 EnHg_GetNextTextId(PlayState* play, Actor* thisx);
s16 EnHg_UpdateTalkState(PlayState* play, Actor* thisx);

ActorInit En_Hg_InitVars = {
    ACTOR_EN_HG,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_HARFGIBUD,
    sizeof(EnHg),
    (ActorFunc)EnHg_Init,
    (ActorFunc)EnHg_Destroy,
    (ActorFunc)EnHg_Update,
    (ActorFunc)EnHg_Draw,
};

void EnHg_Init(Actor* thisx, PlayState* play) {
    EnHg* this = THIS;
    Actor_SetScale(&this->actor, 0.01f);
    ActorShape_Init(&this->actor.shape, 0.0f, EnHg_ActorShadowFunc, 20.0f);

    SkelAnime_InitFlex(play, &this->skelAnime, &gPamelasFatherGibdoSkel, &gPamelasFatherPanicAnim,
                       this->jointTable, this->morphTable, PAMELAS_FATHER_GIBDO_LIMB_MAX);

    Animation_PlayLoop(&this->skelAnime, &gPamelasFatherPanicAnim);

    this->actor.colChkInfo.mass = MASS_IMMOVABLE;
    
    //this->eyeTexIndex = TINGLE_EYETEX_OPEN;
}

void EnHg_Destroy(Actor* thisx, PlayState* play) {
    EnHg* this = THIS;
    //Collider_DestroyCylinder(play, &this->collider);
}

void EnHg_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play) {
    EnHg* this = THIS;

    ActorShadow_DrawCircle(&this->actor, mapper, play);
}

typedef enum {
    EnHg_MESSAGE_1 = 0x71B3,
    EnHg_MESSAGE_2 = 0x71B4,
    EnHg_MESSAGE_3 = 0x71B5,
    EnHg_MESSAGE_4 = 0x71B6,
    EnHg_MESSAGE_5 = 0x71B7,
} EnHgMessageId;

void EnHg_Update(Actor* thisx, PlayState* play) {
    EnHg* this = THIS;
    SkelAnime_Update(&this->skelAnime);
    Actor_MoveXZGravity(&this->actor);
    Actor_UpdateBgCheckInfo(play, &this->actor, 40.0f, 25.0f, 40.0f, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2);

    Npc_UpdateTalking(
        play,
        &this->actor,
        &this->interactInfo.talkState,
        50.0f,
        EnHg_GetNextTextId,
        EnHg_UpdateTalkState
    );
}

static Vec3f sFocusPosMultiplier = { 1000.0f, 0.0f, 0.0f };

void EnHg_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, Actor* thisx) {
    EnHg* this = THIS;
    if (limbIndex == PAMELAS_FATHER_GIBDO_LIMB_HEAD) {
        Matrix_MultVec3f(&sFocusPosMultiplier, &this->actor.focus.pos);
    }
}

void EnHg_Draw(Actor* thisx, PlayState* play) {
    EnHg* this = THIS;

    static void* eyeTextures[] = {
        gPamelasFatherGibdoBloodshotEyeTex,
    };
    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    //gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(eyeTextures[0]));
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount,
                          NULL, EnHg_PostLimbDraw, &this->actor);

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}

u16 EnHg_GetNextTextId(PlayState* play, Actor* thisx) {
    return EnHg_MESSAGE_3;
}

s16 EnHg_UpdateTalkState(PlayState* play, Actor* thisx) {
    return NPC_TALK_STATE_IDLE;
}
