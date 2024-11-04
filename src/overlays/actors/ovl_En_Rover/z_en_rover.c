/*
 * File: z_en_rover.c
 * Overlay: ovl_En_Rover
 * Description: Twinrova NPC
 */

#include "z_en_rover.h"
#include "macros.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "gfx.h"
#include "global.h"

#define FLAGS (ACTOR_FLAG_0 | ACTOR_FLAG_3 | ACTOR_FLAG_4 | ACTOR_FLAG_5)

#define THIS ((EnRover*)thisx)

void EnRover_Init(Actor* thisx, PlayState* play);
void EnRover_Destroy(Actor* thisx, PlayState* play);
void EnRover_Update(Actor* thisx, PlayState* play);
void EnRover_Draw(Actor* thisx, PlayState* play);

void EnRover_Idle(EnRover* this, PlayState* play);
static Vec3f D_80BFB2F4 = { 500.0f, -500.0, 0.0f };

void EnRover_UpdateAnimation(EnRover* this, PlayState* play);

void EnRover_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play);
u16 EnRover_GetNextTextId(PlayState* play, Actor* thisx);
s16 EnRover_UpdateTalkState(PlayState* play, Actor* thisx);

ActorInit En_Rover_InitVars = {
    ACTOR_EN_ROVER,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_TW,
    sizeof(EnRover),
    (ActorFunc)EnRover_Init,
    (ActorFunc)EnRover_Destroy,
    (ActorFunc)EnRover_Update,
    (ActorFunc)EnRover_Draw,
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

void EnRover_Init(Actor* thisx, PlayState* play) {
    EnRover* this = THIS;
    Actor_SetScale(&this->actor, 0.003f);
    ActorShape_Init(&this->actor.shape, 0.0f, EnRover_ActorShadowFunc, 20.0f);

    SkelAnime_InitFlex(play, &this->skelAnime, &gTwinrovaSkel, &gTwinrovaStunLoopAnim,
                       this->jointTable, this->morphTable, TWINROVA_LIMB_MAX);

    Animation_PlayLoop(&this->skelAnime, &gTwinrovaStunLoopAnim);
    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &sColChkInfoInit);

    this->alpha = 255;

    this->actor.colChkInfo.mass = MASS_IMMOVABLE;
}

void EnRover_Destroy(Actor* thisx, PlayState* play) {
    EnRover* this = THIS;
    Collider_DestroyCylinder(play, &this->collider);
}

void EnRover_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play) {
    EnRover* this = THIS;
    if (this->alpha > 0) {
        ActorShadow_DrawCircle(&this->actor, mapper, play);
    }
}

void EnRover_Update(Actor* thisx, PlayState* play) {
    EnRover* this = THIS;

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
        EnRover_GetNextTextId,
        EnRover_UpdateTalkState
    );
}

void EnRover_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, Actor* thisx) {
    EnRover* this = THIS;
    Vec3f sp2C;

    if (limbIndex == TWINROVA_LIMB_HEAD) {
        Matrix_MultVec3f(&D_80BFB2F4, &this->actor.focus.pos);
    }
}

void EnRover_Draw(Actor* thisx, PlayState* play) {
    EnRover* this = THIS;

    static void* eyeTextures[] = {
        gTwinrovaEyeOpenTex,
        gTwinrovaEyeHalfTex,
        gTwinrovaEyeClosedTex,
    };

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(eyeTextures[1]));
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable,
                          this->skelAnime.dListCount, NULL, EnRover_PostLimbDraw, &this->actor);

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}

u16 EnRover_GetNextTextId(PlayState* play, Actor* thisx) {
    return 0x71C1;
}

s16 EnRover_UpdateTalkState(PlayState* play, Actor* thisx) {
    Sfx_PlaySfxCentered(NA_SE_VO_IN_CRY_0);
    return NPC_TALK_STATE_IDLE;
}
