/*
 * File: z_en_barten.c
 * Overlay: ovl_En_Barten
 * Description: Slave NPC
 */

#include "z_en_barten.h"
#include "macros.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "gfx.h"
#include "global.h"

#define FLAGS (ACTOR_FLAG_0 | ACTOR_FLAG_3 | ACTOR_FLAG_4 | ACTOR_FLAG_5)

#define THIS ((EnBarten*)thisx)

void EnBarten_Init(Actor* thisx, PlayState* play);
void EnBarten_Destroy(Actor* thisx, PlayState* play);
void EnBarten_Update(Actor* thisx, PlayState* play);
void EnBarten_Draw(Actor* thisx, PlayState* play);

void EnBarten_Idle(EnBarten* this, PlayState* play);
static Vec3f D_80BFB2F4 = { 500.0f, -500.0, 0.0f };

void EnBarten_UpdateAnimation(EnBarten* this, PlayState* play);

void EnBarten_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play);
u16 EnBarten_GetNextTextId(PlayState* play, Actor* thisx);
s16 EnBarten_UpdateTalkState(PlayState* play, Actor* thisx);

ActorInit En_Barten_InitVars = {
    ACTOR_EN_BARTEN,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_TAB,
    sizeof(EnBarten),
    (ActorFunc)EnBarten_Init,
    (ActorFunc)EnBarten_Destroy,
    (ActorFunc)EnBarten_Update,
    (ActorFunc)EnBarten_Draw,
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

void EnBarten_Init(Actor* thisx, PlayState* play) {
    EnBarten* this = THIS;
    Actor_SetScale(&this->actor, 0.01f);
    ActorShape_Init(&this->actor.shape, 0.0f, EnBarten_ActorShadowFunc, 20.0f);

    SkelAnime_InitFlex(play, &this->skelAnime, &object_tab_Skel_007F78, &object_tab_Anim_000758,
                       this->jointTable, this->morphTable, OBJECT_TAB_LIMB_MAX);

    Animation_PlayLoop(&this->skelAnime, &object_tab_Anim_000758);
    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &sColChkInfoInit);

    this->alpha = 255;

    this->actor.colChkInfo.mass = MASS_IMMOVABLE;
}

void EnBarten_Destroy(Actor* thisx, PlayState* play) {
    EnBarten* this = THIS;
    Collider_DestroyCylinder(play, &this->collider);
}

void EnBarten_ActorShadowFunc(Actor* thisx, Lights* mapper, PlayState* play) {
    EnBarten* this = THIS;
    if (this->alpha > 0) {
        ActorShadow_DrawCircle(&this->actor, mapper, play);
    }
}

void EnBarten_Update(Actor* thisx, PlayState* play) {
    s16 targetFaceRotX;
    s16 targetFaceRotY;
    Vec3f pos;
    Vec3f epos;
    Player* player = GET_PLAYER(play);
    
    EnBarten* this = THIS;


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
        EnBarten_GetNextTextId,
        EnBarten_UpdateTalkState
    );
}

void EnBarten_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, Actor* thisx) {
    EnBarten* this = THIS;
    Vec3f sp2C;

    if (limbIndex == OBJECT_TAB_LIMB_09) {
        Matrix_MultVec3f(&D_80BFB2F4, &this->actor.focus.pos);
    }
}

s32 EnBarten_OverrideLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx) {
    EnBarten* this = (EnBarten*)thisx;
    Vec3f zero = {0};
    if (limbIndex == OBJECT_TAB_LIMB_09) {
        rot->x += this->headRoty;
    }
    return false;
}

void EnBarten_Draw(Actor* thisx, PlayState* play) {
    EnBarten* this = THIS;

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(object_tab_Tex_006428));
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable,
                          this->skelAnime.dListCount, EnBarten_OverrideLimbDraw, EnBarten_PostLimbDraw, &this->actor);

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}

u16 EnBarten_GetNextTextId(PlayState* play, Actor* thisx) {
    EnBarten* this = THIS;
    if (AMMO(ITEM_DEKU_NUT) < 5) {
        Actor_OfferGetItem(&this->actor, play, GI_DEKU_NUTS_5, 130.0f, 100.0f);
    }
    return 0x71C2;
}

s16 EnBarten_UpdateTalkState(PlayState* play, Actor* thisx) {
    //Sfx_PlaySfxCentered(NA_SE_VO_FR_LAUGH_0);
    return NPC_TALK_STATE_IDLE;
}
