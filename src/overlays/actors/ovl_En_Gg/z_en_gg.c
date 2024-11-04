/*
 * File: z_en_gg.c
 * Overlay: ovl_En_Gg
 * Description: Darmani
 */

#include "z_en_gg.h"
#include "macros.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "gfx.h"
#include "global.h"

#define FLAGS (ACTOR_FLAG_0 | ACTOR_FLAG_3 | ACTOR_FLAG_4 | ACTOR_FLAG_5 | ACTOR_FLAG_7)

#define THIS ((EnGg*)thisx)

void EnGg_Init(Actor* thisx, PlayState* play);
void EnGg_Destroy(Actor* thisx, PlayState* play);
void EnGg_Update(Actor* thisx, PlayState* play);
void EnGg_Draw(Actor* thisx, PlayState* play);

void EnGg_Idle(EnGg* this, PlayState* play);
static Vec3f D_80BFB2F4 = { 500.0f, -500.0, 0.0f };

void EnGg_UpdateAnimation(EnGg* this, PlayState* play);

void EnGg_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play);
u16 EnGg_GetNextTextId(PlayState* play, Actor* thisx);
s16 EnGg_UpdateTalkState(PlayState* play, Actor* thisx);

ActorInit En_Gg_InitVars = {
    ACTOR_EN_GG,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_GG,
    sizeof(EnGg),
    (ActorFunc)EnGg_Init,
    (ActorFunc)EnGg_Destroy,
    (ActorFunc)EnGg_Update,
    (ActorFunc)EnGg_Draw,
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

void EnGg_Init(Actor* thisx, PlayState* play) {
    EnGg* this = THIS;
    Actor_SetScale(&this->actor, 0.01f);
    ActorShape_Init(&this->actor.shape, 0.0f, EnGg_ActorShadowFunc, 20.0f);

    SkelAnime_InitFlex(play, &this->skelAnime, &object_gg_Skel_00F6C0, &object_gg_Anim_00AF40,
                       this->jointTable, this->morphTable, OBJECT_GG_LIMB_MAX);

    Animation_PlayLoop(&this->skelAnime, &object_gg_Anim_00AF40);
    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &sColChkInfoInit);

    this->alpha = 255;

    this->actor.colChkInfo.mass = MASS_IMMOVABLE;
}

void EnGg_Destroy(Actor* thisx, PlayState* play) {
    EnGg* this = THIS;
    Collider_DestroyCylinder(play, &this->collider);
}

void EnGg_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play) {
    EnGg* this = THIS;
    if (this->alpha > 0) {
        ActorShadow_DrawCircle(&this->actor, mapper, play);
    }
}

void EnGg_Update(Actor* thisx, PlayState* play) {
    EnGg* this = THIS;

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
        EnGg_GetNextTextId,
        EnGg_UpdateTalkState
    );
}

void EnGg_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, Actor* thisx) {
    EnGg* this = THIS;
    if (limbIndex == OBJECT_GG_LIMB_05) {
        Matrix_MultVec3f(&D_80BFB2F4, &this->actor.focus.pos);
    }
}

void EnGg_Draw(Actor* thisx, PlayState* play) {
    EnGg* this = THIS;

/*     static void* eyeTextures[] = {
        gGoronEyeOpenTex,
        gGoronEyeClosed2Tex,
        gGoronEyeHalfTex,
        gGoronEyeClosedTex,
    };

    static void* beardTexture[] = {
        gGoronBeardTex,
    }; */

    static void* D_80B36DFC[] = {
        object_gg_Tex_009260,
        object_gg_Tex_009660,
        object_gg_Tex_009A60,
        object_gg_Tex_009E60,
    };

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    //gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(eyeTextures[0]));
    gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(D_80B36DFC[3]));
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable,
                          this->skelAnime.dListCount, NULL, EnGg_PostLimbDraw, &this->actor);

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}

u16 EnGg_GetNextTextId(PlayState* play, Actor* thisx) {
    return 0x71B8;
}

s16 EnGg_UpdateTalkState(PlayState* play, Actor* thisx) {
    return NPC_TALK_STATE_IDLE;
}
