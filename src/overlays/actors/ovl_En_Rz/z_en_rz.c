/*
 * File: z_en_rz.c
 * Overlay: ovl_En_Rz
 * Description: Rosa sistas
 */

#include "z_en_rz.h"
#include "macros.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "gfx.h"
#include "global.h"

#define FLAGS (ACTOR_FLAG_0 | ACTOR_FLAG_3 | ACTOR_FLAG_4 | ACTOR_FLAG_5)

#define THIS ((EnRz*)thisx)

void EnRz_Init(Actor* thisx, PlayState* play);
void EnRz_Destroy(Actor* thisx, PlayState* play);
void EnRz_Update(Actor* thisx, PlayState* play);
void EnRz_Draw(Actor* thisx, PlayState* play);

void EnRz_Idle(EnRz* this, PlayState* play);
static Vec3f D_80BFB2F4 = { 500.0f, -500.0, 0.0f };

void EnRz_UpdateAnimation(EnRz* this, PlayState* play);

void EnRz_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play);
u16 EnRz_GetNextTextId(PlayState* play, Actor* thisx);
s16 EnRz_UpdateTalkState(PlayState* play, Actor* thisx);

ActorInit En_Rz_InitVars = {
    ACTOR_EN_RZ,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_RZ,
    sizeof(EnRz),
    (ActorFunc)EnRz_Init,
    (ActorFunc)EnRz_Destroy,
    (ActorFunc)EnRz_Update,
    (ActorFunc)EnRz_Draw,
};

void EnRz_Init(Actor* thisx, PlayState* play) {
    EnRz* this = THIS;
    Actor_SetScale(&this->actor, 0.01f);
    ActorShape_Init(&this->actor.shape, 0.0f, EnRz_ActorShadowFunc, 20.0f);

    SkelAnime_InitFlex(play, &this->skelAnime, &object_rz_Skel_00D8D8, &gRosaSistersSittingAnim,
                       this->jointTable, this->morphTable, OBJECT_RZ_LIMB_MAX);

    Animation_PlayLoop(&this->skelAnime, &gRosaSistersSittingAnim);

    this->alpha = 255;

    this->actor.colChkInfo.mass = MASS_IMMOVABLE;
}

void EnRz_Destroy(Actor* thisx, PlayState* play) {
    EnRz* this = THIS;
    //Collider_DestroyCylinder(play, &this->collider);
}

void EnRz_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play) {
    EnRz* this = THIS;
    if (this->alpha > 0) {
        ActorShadow_DrawCircle(&this->actor, mapper, play);
    }
}

void EnRz_Update(Actor* thisx, PlayState* play) {
    EnRz* this = THIS;
    SkelAnime_Update(&this->skelAnime);
    Actor_MoveXZGravity(&this->actor);
    Actor_UpdateBgCheckInfo(play, &this->actor, 40.0f, 25.0f, 40.0f, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2);

    Npc_UpdateTalking(
        play,
        &this->actor,
        &this->interactInfo.talkState,
        50.0f,
        EnRz_GetNextTextId,
        EnRz_UpdateTalkState
    );
}

void EnRz_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, Actor* thisx) {
    EnRz* this = THIS;
    if (limbIndex == OBJECT_RZ_LIMB_0B) {
        Matrix_MultVec3f(&D_80BFB2F4, &this->actor.focus.pos);
    }
}

void EnRz_Draw(Actor* thisx, PlayState* play) {
    EnRz* this = THIS;

    static void* eyeTextures[] = {
        object_rz_Tex_00BC50,
        object_rz_Tex_00C190,
        object_rz_Tex_00C590,
        object_rz_Tex_00C990,
        object_rz_Tex_00CD90,
    };

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    gSPSegment(POLY_OPA_DISP++, 0x09, SEGMENTED_TO_VIRTUAL(eyeTextures[0]));
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable,
                          this->skelAnime.dListCount, NULL, EnRz_PostLimbDraw, &this->actor);

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}

u16 EnRz_GetNextTextId(PlayState* play, Actor* thisx) {
    return 0x71B6;
}

s16 EnRz_UpdateTalkState(PlayState* play, Actor* thisx) {
    return NPC_TALK_STATE_IDLE;
}
