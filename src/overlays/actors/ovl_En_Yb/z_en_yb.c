/*
 * File: z_en_kamaro.c
 * Overlay: ovl_En_Kamaro
 * Description: Kamaro the Dancing Ghost
 */

#include "z_en_yb.h"
#include "assets/objects/object_yb/object_yb.h"
#include "macros.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "gfx.h"
#include "global.h"

#define FLAGS (ACTOR_FLAG_0 | ACTOR_FLAG_3 | ACTOR_FLAG_4 | ACTOR_FLAG_5)

#define THIS ((EnYb*)thisx)

void EnYb_Init(Actor* thisx, PlayState* play);
void EnYb_Destroy(Actor* thisx, PlayState* play);
void EnYb_Update(Actor* thisx, PlayState* play);
void EnYb_Draw(Actor* thisx, PlayState* play);

void EnYb_Idle(EnYb* this, PlayState* play);
static Vec3f D_80BFB2F4 = { 500.0f, -500.0, 0.0f };

void EnYb_UpdateAnimation(EnYb* this, PlayState* play);

void EnYb_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play);
u16 EnYb_GetNextTextId(PlayState* play, Actor* thisx);
s16 EnYb_UpdateTalkState(PlayState* play, Actor* thisx);

ActorInit En_Yb_InitVars = {
    ACTOR_EN_YB,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_YB,
    sizeof(EnYb),
    (ActorFunc)EnYb_Init,
    (ActorFunc)EnYb_Destroy,
    (ActorFunc)EnYb_Update,
    (ActorFunc)EnYb_Draw,
};

static AnimationHeader* gKamaroUnusedAnimations[] = { &object_yb_Anim_000200 };

void EnYb_Init(Actor* thisx, PlayState* play) {
    EnYb* this = THIS;
    Actor_SetScale(&this->actor, 0.01f);
    ActorShape_Init(&this->actor.shape, 0.0f, EnYb_ActorShadowFunc, 20.0f);

    SkelAnime_InitFlex(play, &this->skelAnime, &gYbSkel, &gLinkChildSkelGrosasistersthinkinganimAnim,
                       this->jointTable, this->morphTable, YB_LIMB_MAX);

    Animation_PlayLoop(&this->skelAnime, &gLinkChildSkelGrosasistersthinkinganimAnim);

    this->actor.colChkInfo.mass = MASS_IMMOVABLE;
    this->alpha = 255;
}

void EnYb_Destroy(Actor* thisx, PlayState* play) {
    EnYb* this = THIS;
    //Collider_DestroyCylinder(play, &this->collider);
}

void EnYb_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play) {
    EnYb* this = THIS;
    if (this->alpha > 0) {
        ActorShadow_DrawCircle(&this->actor, mapper, play);
    }
}

typedef enum {
    ENYB_MESSAGE_1 = 0x71B3,
    ENYB_MeSSAGE_2 = 0x71B4,
    ENYB_MESSAGE_3 = 0x71B5,
    ENYB_MESSAGE_4 = 0x71B6,
    ENYB_MESSAGE_5 = 0x71B7,
} EnYbMessageId;

void EnYb_Update(Actor* thisx, PlayState* play) {
    EnYb* this = THIS;
    SkelAnime_Update(&this->skelAnime);
    Actor_MoveXZGravity(&this->actor);
    Actor_UpdateBgCheckInfo(play, &this->actor, 40.0f, 25.0f, 40.0f, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2);

    Npc_UpdateTalking(
        play,
        &this->actor,
        &this->interactInfo.talkState,
        50.0f,
        EnYb_GetNextTextId,
        EnYb_UpdateTalkState
    );
}

void EnYb_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, Actor* thisx) {
    EnYb* this = THIS;
    if (limbIndex == YB_LIMB_HEAD) {
        Matrix_MultVec3f(&D_80BFB2F4, &this->actor.focus.pos);
    }
}

void EnYb_Draw(Actor* thisx, PlayState* play) {
    EnYb* this = THIS;
    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable,
                          this->skelAnime.dListCount, NULL, EnYb_PostLimbDraw, &this->actor);
}

u16 EnYb_GetNextTextId(PlayState* play, Actor* thisx) {
    return 0x71B3;
}

s16 EnYb_UpdateTalkState(PlayState* play, Actor* thisx) {
    return NPC_TALK_STATE_IDLE;
}
