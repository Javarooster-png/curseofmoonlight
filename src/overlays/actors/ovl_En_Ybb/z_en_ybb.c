/*
 * File: z_en_ybb.c
 * Overlay: ovl_En_Ybb
 * Description: Kamaro the Dancing Ghost (black)
 */

#include "z_en_ybb.h"
#include "assets/objects/object_ybb/object_ybb.h"
#include "macros.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "gfx.h"
#include "global.h"

#define FLAGS (ACTOR_FLAG_0 | ACTOR_FLAG_3 | ACTOR_FLAG_4 | ACTOR_FLAG_5)

#define THIS ((EnYbb*)thisx)

void EnYbb_Init(Actor* thisx, PlayState* play);
void EnYbb_Destroy(Actor* thisx, PlayState* play);
void EnYbb_Update(Actor* thisx, PlayState* play);
void EnYbb_Draw(Actor* thisx, PlayState* play);

void EnYbb_Idle(EnYbb* this, PlayState* play);
static Vec3f D_80BFB2F4 = { 500.0f, -500.0, 0.0f };

void EnYbb_UpdateAnimation(EnYbb* this, PlayState* play);

void EnYbb_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play);
u16 EnYbb_GetNextTextId(PlayState* play, Actor* thisx);
s16 EnYbb_UpdateTalkState(PlayState* play, Actor* thisx);

ActorInit En_Ybb_InitVars = {
    ACTOR_EN_YBB,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_YBB,
    sizeof(EnYbb),
    (ActorFunc)EnYbb_Init,
    (ActorFunc)EnYbb_Destroy,
    (ActorFunc)EnYbb_Update,
    (ActorFunc)EnYbb_Draw,
};

void EnYbb_Init(Actor* thisx, PlayState* play) {
    EnYbb* this = THIS;
    Actor_SetScale(&this->actor, 0.01f);
    ActorShape_Init(&this->actor.shape, 0.0f, EnYbb_ActorShadowFunc, 20.0f);

    SkelAnime_InitFlex(play, &this->skelAnime, &gYbbSkel, &gLinkChildSkelGplayeranim_alink_dance_loopAnim2,
                       this->jointTable, this->morphTable, YBB_LIMB_MAX);

    Animation_PlayLoop(&this->skelAnime, &gLinkChildSkelGplayeranim_alink_dance_loopAnim2);

    this->actor.colChkInfo.mass = MASS_IMMOVABLE;
    this->alpha = 255;
}

void EnYbb_Destroy(Actor* thisx, PlayState* play) {
    EnYbb* this = THIS;
    //Collider_DestroyCylinder(play, &this->collider);
}

void EnYbb_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play) {
    EnYbb* this = THIS;
    if (this->alpha > 0) {
        ActorShadow_DrawCircle(&this->actor, mapper, play);
    }
}

typedef enum {
    ENYBB_MESSAGE_1 = 0x71B3,
    ENYBB_MESSAGE_2 = 0x71B4,
    ENYBB_MESSAGE_3 = 0x71B5,
    ENYBB_MESSAGE_4 = 0x71B6,
    ENYBB_MESSAGE_5 = 0x71B7,
} EnYbbMessageId;

void EnYbb_Update(Actor* thisx, PlayState* play) {
    EnYbb* this = THIS;
    SkelAnime_Update(&this->skelAnime);
    Actor_MoveXZGravity(&this->actor);
    Actor_UpdateBgCheckInfo(play, &this->actor, 40.0f, 25.0f, 40.0f, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2);

    Npc_UpdateTalking(
        play,
        &this->actor,
        &this->interactInfo.talkState,
        50.0f,
        EnYbb_GetNextTextId,
        EnYbb_UpdateTalkState
    );
}

void EnYbb_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, Actor* thisx) {
    EnYbb* this = THIS;
    if (limbIndex == YBB_LIMB_HEAD) {
        Matrix_MultVec3f(&D_80BFB2F4, &this->actor.focus.pos);
    }
}

void EnYbb_Draw(Actor* thisx, PlayState* play) {
    EnYbb* this = THIS;
    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable,
                          this->skelAnime.dListCount, NULL, EnYbb_PostLimbDraw, &this->actor);
}

u16 EnYbb_GetNextTextId(PlayState* play, Actor* thisx) {
    return 0x71B4;
}

s16 EnYbb_UpdateTalkState(PlayState* play, Actor* thisx) {
    return NPC_TALK_STATE_IDLE;
}
