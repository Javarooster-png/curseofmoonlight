/*
 * File: z_en_ig.c
 * Overlay: ovl_En_Ig
 * Description: Link The Goron
 */

#include "z_en_ig.h"
#include "macros.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "gfx.h"
#include "global.h"

#define FLAGS (ACTOR_FLAG_0 | ACTOR_FLAG_3 | ACTOR_FLAG_4 | ACTOR_FLAG_5)

#define THIS ((EnIg*)thisx)

void EnIg_Init(Actor* thisx, PlayState* play);
void EnIg_Destroy(Actor* thisx, PlayState* play);
void EnIg_Update(Actor* thisx, PlayState* play);
void EnIg_Draw(Actor* thisx, PlayState* play);

void EnIg_Idle(EnIg* this, PlayState* play);
static Vec3f D_80BFB2F4 = { 500.0f, -500.0, 0.0f };

void EnIg_UpdateAnimation(EnIg* this, PlayState* play);

void EnIg_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play);
u16 EnIg_GetNextTextId(PlayState* play, Actor* thisx);
s16 EnIg_UpdateTalkState(PlayState* play, Actor* thisx);

ActorInit En_Ig_InitVars = {
    ACTOR_EN_IG,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_DAI,
    sizeof(EnIg),
    (ActorFunc)EnIg_Init,
    (ActorFunc)EnIg_Destroy,
    (ActorFunc)EnIg_Update,
    (ActorFunc)EnIg_Draw,
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

void EnIg_Init(Actor* thisx, PlayState* play) {
    EnIg* this = THIS;
    Actor_SetScale(&this->actor, 0.06f);
    ActorShape_Init(&this->actor.shape, 0.0f, EnIg_ActorShadowFunc, 20.0f);

    SkelAnime_InitFlex(play, &this->skelAnime, &object_dai_Skel_0130D0, &object_dai_Anim_0048B4,
                       this->jointTable, this->morphTable, OBJECT_DAI_LIMB_MAX);

    Animation_PlayLoop(&this->skelAnime, &object_dai_Anim_0048B4);
    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &sColChkInfoInit);

    this->alpha = 255;

    this->actor.colChkInfo.mass = MASS_IMMOVABLE;
}

void EnIg_Destroy(Actor* thisx, PlayState* play) {
    EnIg* this = THIS;
    Collider_DestroyCylinder(play, &this->collider);
}

void EnIg_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play) {
    EnIg* this = THIS;
    if (this->alpha > 0) {
        ActorShadow_DrawCircle(&this->actor, mapper, play);
    }
}

void EnIg_Update(Actor* thisx, PlayState* play) {
    EnIg* this = THIS;

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
        EnIg_GetNextTextId,
        EnIg_UpdateTalkState
    );
}

void EnIg_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, Actor* thisx) {
    EnIg* this = THIS;
    Vec3f sp2C;

    if (limbIndex == OBJECT_DAI_LIMB_0B) {
        Matrix_MultVec3f(&D_80BFB2F4, &this->actor.focus.pos);
    }
}

void EnIg_Draw(Actor* thisx, PlayState* play) {
    EnIg* this = THIS;

    static void* eyeTextures[] = {
        object_dai_Tex_0107B0,
        object_dai_Tex_010FB0,
        object_dai_Tex_0117B0,
        object_dai_Tex_011FB0,
        object_dai_Tex_0127B0,
    };

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(eyeTextures[0]));
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable,
                          this->skelAnime.dListCount, NULL, EnIg_PostLimbDraw, &this->actor);

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}

u16 EnIg_GetNextTextId(PlayState* play, Actor* thisx) {
    return 0x71C0;
}

s16 EnIg_UpdateTalkState(PlayState* play, Actor* thisx) {
    return NPC_TALK_STATE_IDLE;
}
