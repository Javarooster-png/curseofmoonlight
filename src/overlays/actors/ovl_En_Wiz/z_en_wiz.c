/*
 * File: z_en_wiz.c
 * Overlay: ovl_En_Wiz
 * Description: Wizrobe NPC
 */

#include "z_en_wiz.h"
#include "macros.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "gfx.h"
#include "global.h"

#define FLAGS (ACTOR_FLAG_0 | ACTOR_FLAG_3 | ACTOR_FLAG_4 | ACTOR_FLAG_5)

#define THIS ((EnWiz*)thisx)

void EnWiz_Init(Actor* thisx, PlayState* play);
void EnWiz_Destroy(Actor* thisx, PlayState* play);
void EnWiz_Update(Actor* thisx, PlayState* play);
void EnWiz_Draw(Actor* thisx, PlayState* play);

void EnWiz_Idle(EnWiz* this, PlayState* play);
static Vec3f D_80BFB2F4 = { 500.0f, -500.0, 0.0f };

void EnWiz_UpdateAnimation(EnWiz* this, PlayState* play);

void EnWiz_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play);
u16 EnWiz_GetNextTextId(PlayState* play, Actor* thisx);
s16 EnWiz_UpdateTalkState(PlayState* play, Actor* thisx);

ActorInit En_Wiz_InitVars = {
    ACTOR_EN_WIZ,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_WIZ,
    sizeof(EnWiz),
    (ActorFunc)EnWiz_Init,
    (ActorFunc)EnWiz_Destroy,
    (ActorFunc)EnWiz_Update,
    (ActorFunc)EnWiz_Draw,
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

void EnWiz_Init(Actor* thisx, PlayState* play) {
    EnWiz* this = THIS;
    Actor_SetScale(&this->actor, 0.01f);
    ActorShape_Init(&this->actor.shape, 0.0f, EnWiz_ActorShadowFunc, 20.0f);

    SkelAnime_InitFlex(play, &this->skelAnime, &gWizrobeSkel, &gWizrobeIdleAnim,
                       this->jointTable, this->morphTable, WIZROBE_LIMB_MAX);

    Animation_PlayLoop(&this->skelAnime, &gWizrobeIdleAnim);
    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &sColChkInfoInit);

    this->alpha = 255;

    this->actor.colChkInfo.mass = MASS_IMMOVABLE;
}

void EnWiz_Destroy(Actor* thisx, PlayState* play) {
    EnWiz* this = THIS;
    Collider_DestroyCylinder(play, &this->collider);
}

void EnWiz_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play) {
    EnWiz* this = THIS;
    if (this->alpha > 0) {
        ActorShadow_DrawCircle(&this->actor, mapper, play);
    }
}

void EnWiz_Update(Actor* thisx, PlayState* play) {
    s16 targetFaceRotX;
    s16 targetFaceRotY;
    Vec3f pos;
    Vec3f epos;
    Player* player = GET_PLAYER(play);
    
    EnWiz* this = THIS;


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
        EnWiz_GetNextTextId,
        EnWiz_UpdateTalkState
    );
}

void EnWiz_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, Actor* thisx) {
    EnWiz* this = THIS;
    Vec3f sp2C;

    if (limbIndex == WIZROBE_LIMB_HEAD) {
        Matrix_MultVec3f(&D_80BFB2F4, &this->actor.focus.pos);
    }
}

void EnWiz_Draw(Actor* thisx, PlayState* play) {
    EnWiz* this = THIS;

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    //gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(object_tab_Tex_006428));
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable,
                          this->skelAnime.dListCount, NULL, EnWiz_PostLimbDraw, &this->actor);

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}

u16 EnWiz_GetNextTextId(PlayState* play, Actor* thisx) {
    return 0x71C3;
}

s16 EnWiz_UpdateTalkState(PlayState* play, Actor* thisx) {
    return NPC_TALK_STATE_IDLE;
}
