#include "z_En_SkelB.h"
#include "terminal.h"
#define FLAGS (ACTOR_FLAG_0 | ACTOR_FLAG_2 | ACTOR_FLAG_4 | ACTOR_FLAG_5)
void EnSkelB_Init(EnSkelB* this, PlayState* play);
void EnSkelB_Destroy(EnSkelB* this, PlayState* play);
void EnSkelB_Update(EnSkelB* this, PlayState* play);
void EnSkelB_Draw(EnSkelB* this, PlayState* play);
void EnSkelB_MoveF(EnSkelB* this, PlayState* play);
void EnSkelB_SetupMoveF(EnSkelB* this, PlayState* play);
void EnSkelB_MoveFP(EnSkelB* this, PlayState* play);
void EnSkelB_SetupMoveFP(EnSkelB* this, PlayState* play);
void EnSkelB_MoveFR(EnSkelB* this, PlayState* play);
void EnSkelB_SetupMoveFR(EnSkelB* this, PlayState* play);
void EnSkelB_ForwardBackCheck(EnSkelB* this, PlayState* play);
void EnSkelB_SetupAttackA(EnSkelB* this, PlayState* play);
void EnSkelB_AttackA(EnSkelB* this, PlayState* play);
void EnSkelB_SetupAttackB(EnSkelB* this, PlayState* play);
void EnSkelB_AttackB(EnSkelB* this, PlayState* play);
void EnSkelB_SetupAttackC(EnSkelB* this, PlayState* play);
void EnSkelB_AttackC(EnSkelB* this, PlayState* play);
void EnSkelB_SetupAttackD(EnSkelB* this, PlayState* play);
void EnSkelB_AttackD(EnSkelB* this, PlayState* play);
void EnSkelB_SetupAttackE(EnSkelB* this, PlayState* play);
void EnSkelB_AttackE(EnSkelB* this, PlayState* play);
void EnSkelB_SetupAttackF(EnSkelB* this, PlayState* play);
void EnSkelB_AttackF(EnSkelB* this, PlayState* play);
void EnSkelB_SetupAttackG(EnSkelB* this, PlayState* play);
void EnSkelB_AttackG(EnSkelB* this, PlayState* play);
void EnSkelB_SetupIdle(EnSkelB* this, PlayState* play);
void EnSkelB_Idle(EnSkelB* this, PlayState* play);
void EnSkelB_SetupIdleP(EnSkelB* this, PlayState* play);
void EnSkelB_IdleP(EnSkelB* this, PlayState* play);
void EnSkelB_SetupIdle2(EnSkelB* this, PlayState* play);
void EnSkelB_Idle2(EnSkelB* this, PlayState* play);
void EnSkelB_SetupWaitForClimb(EnSkelB* this, PlayState* play);
void EnSkelB_WaitForClimb(EnSkelB* this, PlayState* play);
void EnSkelB_SetupClimb(EnSkelB* this, PlayState* play);
void EnSkelB_Climb(EnSkelB* this, PlayState* play);
void EnSkelB_SetupRecoil(EnSkelB* this, PlayState* play);
void EnSkelB_Recoil(EnSkelB* this, PlayState* play);
s32 EnSkelB_OverrideLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx);
void EnSkelB_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx);
void EnSkelB_ChangeAnimation(EnSkelB* this, s32 anim);
void EnSkelB_CheckDamage(EnSkelB* this, PlayState* play);
void EnSkelB_SetupDeath(EnSkelB* this, PlayState* play);
void EnSkelB_DeathF(EnSkelB* this, PlayState* play);
void EnSkelB_DeathB(EnSkelB* this, PlayState* play);
void EnSkelB_Scream(EnSkelB* this, PlayState* play);
ActorInit En_SkelB_InitVars = {
    /**/ ACTOR_SKELB,
    /**/ ACTORCAT_ENEMY,
    /**/ FLAGS,
    /**/ OBJECT_SKELB,
    /**/ sizeof(EnSkelB),
    /**/ (ActorFunc)EnSkelB_Init,
    /**/ (ActorFunc)EnSkelB_Destroy,
    /**/ (ActorFunc)EnSkelB_Update,
    /**/ (ActorFunc)EnSkelB_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        .colType = COLTYPE_HIT1,
        .atFlags = AT_ON | AT_TYPE_ENEMY,
        .acFlags = AC_ON | AC_TYPE_PLAYER,
        .ocFlags1 = OC1_ON | OC1_TYPE_ALL,
        .ocFlags2 = OC2_TYPE_1,
        .shape = COLSHAPE_CYLINDER,
    },
    {
        .elemType = ELEMTYPE_UNK0,
        .toucher = { .dmgFlags = 0xFFCFFFFF, .effect = 0x0, .damage = 0x00 },
        .bumper = { .dmgFlags = 0xFFCFFFFF, .effect = 0x0, .defense = 0x00 },
        .toucherFlags = TOUCH_ON | TOUCH_SFX_NORMAL,
        .bumperFlags = BUMP_ON,
        .ocElemFlags = OCELEM_ON,
    },
    { .radius = 20, .height = 60, .yShift = 0, .pos = { 0, 0, 0,} },
};

static CollisionCheckInfoInit2 sColChkInit = {
    .health = 7,
    .mass = MASS_HEAVY,
    .cylHeight = 60.0f,
    .cylRadius = 20.0f,
};
static ColliderJntSphElementInit sJntSphItemsInit[] = {
    {
        {
            ELEMTYPE_UNK0,
            { 0xFFCFFFFF, 0x00, 0x20 },
            { 0x00000000, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NORMAL,
            BUMP_NONE,
            OCELEM_NONE,
        },
        { GSKELSKEL_BLADE_LIMB, { { 0, 0, 0 }, 35 }, 60 },
    },
    {
        {
            ELEMTYPE_UNK0,
            { 0xFFCFFFFF, 0x00, 0x20 },
            { 0x00000000, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NORMAL,
            BUMP_NONE,
            OCELEM_NONE,
        },
        { GSKELSKEL_TIP_LIMB, { { 0, 0, 0 }, 35 }, 0 },
    },
};

static ColliderJntSphInit sJntSphInit = {
    {
        COLTYPE_METAL,
        AT_ON | AT_TYPE_ENEMY,
        AC_ON | AC_HARD | AC_TYPE_PLAYER,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_1,
        COLSHAPE_JNTSPH,
    },
    ARRAY_COUNT(sJntSphItemsInit),
    sJntSphItemsInit,
};

static InitChainEntry sInitChain[] = { ICHAIN_S8(naviEnemyId, NAVI_ENEMY_DEFAULT, ICHAIN_CONTINUE),
                                       ICHAIN_S8(targetMode, 2, ICHAIN_CONTINUE),
                                       ICHAIN_F32_DIV1000(gravity, -3000, ICHAIN_CONTINUE),
                                       ICHAIN_VEC3F_DIV1000(scale, 11, ICHAIN_STOP) };
typedef enum {
    SKELB_ANIM_IDLE1 = 0,
    SKELB_ANIM_IDLE2,
    SKELB_ANIM_ATTACKA, // slash
    SKELB_ANIM_ATTACKB, // slash2ways
    SKELB_ANIM_ATTACKC, // jumpslash
    SKELB_ANIM_ATTACKD, // Thrust
    SKELB_ANIM_ATTACKE, // slash2waysThrust
    SKELB_ANIM_ATTACKF, // slash2waysThrustjumpslash
    SKELB_ANIM_ATTACKG, // AirCounter
    SKELB_ANIM_ATTACKRECOIL,
    SKELB_ANIM_DEATHBACK,
    SKELB_ANIM_DEATHFORWARD,
    SKELB_ANIM_WALK,
    SKELB_ANIM_WALK_COMBAT,
    SKELB_ANIM_RUN,
    SKELB_ANIM_CLIMB,
    SKELB_ANIM_MAX
} SkelBAnim;

static AnimationInfo sAnimationInfo[SKELB_ANIM_MAX] = {
    { &gSkelskelIdleAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 1.0f },
    { &gSkelskelIdle2Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 1.0f },
    { &gSkelskelAttackaAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gSkelskelAttackbAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gSkelskelAttackcAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gSkelskelAttackdAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gSkelskelAttackeAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gSkelskelAttackfAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gSkelskelAttackgAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, -1.0f },
    { &gSkelskelAttackrecoilAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, -1.0f },
    { &gSkelskelDeathbackAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gSkelskelDeathforwardAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 1.0f },
    { &gSkelskelWalkAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 1.0f },
    { &gSkelskelWalkcombatAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 5.0f },
    { &gSkelskelRunAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 3.0f },
    { &gSkelskelClimbAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 5.0f },
};

typedef enum {
    /* 0x0 */ SKELB_DMGEFF_NORMAL,
    /* 0x1 */ SKELB_DMGEFF_STUN,
    /* 0x6 */ SKELB_DMGEFF_FIREMAGIC = 6,
    /* 0xD */ SKELB_DMGEFF_SLING = 0xD,
    /* 0xE */ SKELB_DMGEFF_LIGHT,
    /* 0xF */ SKELB_DMGEFF_FREEZE
} SkelbDamageEffect;

static DamageTable sDamageTable = {
    /* Deku nut      */ DMG_ENTRY(5, SKELB_DMGEFF_NORMAL),
    /* Deku stick    */ DMG_ENTRY(2, SKELB_DMGEFF_NORMAL),
    /* Slingshot     */ DMG_ENTRY(0, SKELB_DMGEFF_SLING),
    /* Explosive     */ DMG_ENTRY(9, SKELB_DMGEFF_NORMAL),
    /* Boomerang     */ DMG_ENTRY(0, SKELB_DMGEFF_STUN),
    /* Normal arrow  */ DMG_ENTRY(1, SKELB_DMGEFF_NORMAL),
    /* Hammer swing  */ DMG_ENTRY(2, SKELB_DMGEFF_NORMAL),
    /* Hookshot      */ DMG_ENTRY(0, SKELB_DMGEFF_STUN),
    /* Kokiri sword  */ DMG_ENTRY(1, SKELB_DMGEFF_NORMAL),
    /* Master sword  */ DMG_ENTRY(1, SKELB_DMGEFF_NORMAL),
    /* Giant's Knife */ DMG_ENTRY(2, SKELB_DMGEFF_NORMAL),
    /* Fire arrow    */ DMG_ENTRY(0, SKELB_DMGEFF_NORMAL),
    /* Ice arrow     */ DMG_ENTRY(0, SKELB_DMGEFF_FREEZE),
    /* Light arrow   */ DMG_ENTRY(2, SKELB_DMGEFF_LIGHT),
    /* Unk arrow 1   */ DMG_ENTRY(0, SKELB_DMGEFF_NORMAL),
    /* Unk arrow 2   */ DMG_ENTRY(0, SKELB_DMGEFF_NORMAL),
    /* Unk arrow 3   */ DMG_ENTRY(0, SKELB_DMGEFF_NORMAL),
    /* Fire magic    */ DMG_ENTRY(0, SKELB_DMGEFF_FIREMAGIC),
    /* Ice magic     */ DMG_ENTRY(3, SKELB_DMGEFF_FREEZE),
    /* Light magic   */ DMG_ENTRY(0, SKELB_DMGEFF_LIGHT),
    /* Shield        */ DMG_ENTRY(0, SKELB_DMGEFF_NORMAL),
    /* Mirror Ray    */ DMG_ENTRY(0, SKELB_DMGEFF_NORMAL),
    /* Kokiri spin   */ DMG_ENTRY(1, SKELB_DMGEFF_NORMAL),
    /* Giant spin    */ DMG_ENTRY(4, SKELB_DMGEFF_NORMAL),
    /* Master spin   */ DMG_ENTRY(1, SKELB_DMGEFF_NORMAL),
    /* Kokiri jump   */ DMG_ENTRY(1, SKELB_DMGEFF_NORMAL),
    /* Giant jump    */ DMG_ENTRY(4, SKELB_DMGEFF_NORMAL),
    /* Master jump   */ DMG_ENTRY(2, SKELB_DMGEFF_NORMAL),
    /* Unknown 1     */ DMG_ENTRY(0, SKELB_DMGEFF_NORMAL),
    /* Unblockable   */ DMG_ENTRY(0, SKELB_DMGEFF_NORMAL),
    /* Hammer jump   */ DMG_ENTRY(2, SKELB_DMGEFF_NORMAL),
    /* Unknown 2     */ DMG_ENTRY(0, SKELB_DMGEFF_NORMAL),
};

static EffectBlureInit2 D_8085470C = {
    0, 0, 0, { 255, 0, 25, 240 }, { 255, 0, 25, 220 }, { 220, 0, 29, 170 }, { 220, 0, 29, 150 }, 8,
    0, 2, 0, { 0, 0, 0, 0 },      { 0, 0, 0, 0 },
};

void EnSkelB_Init(EnSkelB* this, PlayState* play) {
    Actor_ProcessInitChain(&this->actor, sInitChain);
    this->alarmstate = 0;
    this->cantSee = 1;
    this->canDodge = 1;
    Effect_Add(play, &this->blureIndex, EFFECT_BLURE2, 0, 0, &D_8085470C);
    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 25.0f);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    Collider_InitCylinder(play, &this->collider);
    SkelAnime_InitFlex(play, &this->skelAnime, &gSkelskel, &gSkelskelClimbAnim, this->jointTable, this->morphTable,
                       GSKELSKEL_NUM_LIMBS);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &sDamageTable, &sColChkInit);
    Collider_InitJntSph(play, &this->colliderSpheres);
    Collider_SetJntSph(play, &this->colliderSpheres, &this->actor, &sJntSphInit, this->colliderSpheresElements);
    if (this->actor.params == 1) {
        this->timer = 39;
        EnSkelB_SetupIdle(this, play);
        this->actor.speed = 0.0f;
    } else if (this->actor.params == 0) {
        EnSkelB_SetupWaitForClimb(this, play);
        this->actor.speed = 0.0f;
    } else {
        this->timer = 95;
        EnSkelB_SetupIdleP(this, play);
        this->actor.speed = 0.0f;
    }
}

void EnSkelB_Destroy(EnSkelB* this, PlayState* play) {
    Effect_Delete(play, this->blureIndex);
    Collider_DestroyCylinder(play, &this->collider);
    Collider_DestroyJntSph(play, &this->colliderSpheres);
}

void EnSkelB_Update(EnSkelB* this, PlayState* play) {
    s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    relYawTowardsPlayer = ABS(relYawTowardsPlayer);
    s16 targetFaceRotX;
    s16 targetFaceRotY;
    Vec3f pos;
    Vec3f epos;
    Player* player = GET_PLAYER(play);
    CollisionPoly* poly;
    s32 bgId;
    Vec3f colPoint;
    Actor_MoveXZGravity(&this->actor);
    this->actionFunc(this, play);
    EnSkelB_CheckDamage(this, play);
    Actor_UpdateBgCheckInfo(play, &this->actor, this->collider.dim.radius, this->collider.dim.height * 0.5f, 0.0f,
                            UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2);
    if ((this->actionFunc == EnSkelB_AttackA) && (this->skelAnime.curFrame > 10.0f) &&
        (this->skelAnime.curFrame < 16.0f)) {
        if (!(this->colliderSpheres.base.atFlags & AT_BOUNCED)) {
            CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSpheres.base);
        } else {
            this->colliderSpheres.base.atFlags &= ~AT_BOUNCED;
            EnSkelB_SetupRecoil(this, play);
        }
    }
    if ((this->actionFunc == EnSkelB_AttackB) && (this->skelAnime.curFrame > 10.0f) &&
        (this->skelAnime.curFrame < 23.0f)) {
        if (!(this->colliderSpheres.base.atFlags & AT_BOUNCED)) {
            CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSpheres.base);
        } else {
            this->colliderSpheres.base.atFlags &= ~AT_BOUNCED;
            EnSkelB_SetupRecoil(this, play);
        }
    }
    if ((this->actionFunc == EnSkelB_AttackC) && (this->skelAnime.curFrame > 16.0f) &&
        (this->skelAnime.curFrame < 21.0f)) {
        if (!(this->colliderSpheres.base.atFlags & AT_BOUNCED)) {
            CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSpheres.base);
        } else {
            this->colliderSpheres.base.atFlags &= ~AT_BOUNCED;
            EnSkelB_SetupRecoil(this, play);
        }
    }
    if ((this->actionFunc == EnSkelB_AttackD) && (this->skelAnime.curFrame > 12.0f) &&
        (this->skelAnime.curFrame < 21.0f)) {
        if (!(this->colliderSpheres.base.atFlags & AT_BOUNCED)) {
            CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSpheres.base);
        } else {
            this->colliderSpheres.base.atFlags &= ~AT_BOUNCED;
            EnSkelB_SetupRecoil(this, play);
        }
    }
    if ((this->actionFunc == EnSkelB_AttackE) &&
        (((this->skelAnime.curFrame > 12.0f) && (this->skelAnime.curFrame < 21.0f)) ||
         ((this->skelAnime.curFrame > 33.0f) && (this->skelAnime.curFrame < 40.0f)))) {
        if (!(this->colliderSpheres.base.atFlags & AT_BOUNCED)) {
            CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSpheres.base);
        } else {
            this->colliderSpheres.base.atFlags &= ~AT_BOUNCED;
            EnSkelB_SetupRecoil(this, play);
        }
    }
    if ((this->actionFunc == EnSkelB_AttackF) &&
        (((this->skelAnime.curFrame > 12.0f) && (this->skelAnime.curFrame < 21.0f)) ||
         ((this->skelAnime.curFrame > 33.0f) && (this->skelAnime.curFrame < 40.0f)) ||
         ((this->skelAnime.curFrame > 59.0f) && (this->skelAnime.curFrame < 64.0f)))) {
        if (!(this->colliderSpheres.base.atFlags & AT_BOUNCED)) {
            CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSpheres.base);
        } else {
            this->colliderSpheres.base.atFlags &= ~AT_BOUNCED;
            EnSkelB_SetupRecoil(this, play);
        }
    }
    if ((this->actionFunc == EnSkelB_AttackG) &&
        (((this->skelAnime.curFrame > 0.0f) && (this->skelAnime.curFrame < 10.0f)) ||
         ((this->skelAnime.curFrame > 17.0f) && (this->skelAnime.curFrame < 22.0f)))) {
        if (!(this->colliderSpheres.base.atFlags & AT_BOUNCED)) {
            CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSpheres.base);
        } else {
            this->colliderSpheres.base.atFlags &= ~AT_BOUNCED;
            EnSkelB_SetupRecoil(this, play);
        }
    }
    CollisionCheck_SetOC(play, &play->colChkCtx, &this->colliderSpheres.base);

    CollisionCheck_SetAC(play, &play->colChkCtx, &this->colliderSpheres.base);
    if ((this->canDodge != 0) && (relYawTowardsPlayer < 0x1500)) {
        this->collider.dim.radius = 26;
        this->collider.base.colType = COLTYPE_METAL;
        this->collider.base.acFlags = AC_ON | AC_HARD | AC_TYPE_PLAYER;
    } else {
        this->collider.dim.radius = 20;
        this->collider.base.colType = COLTYPE_HIT5;
        this->collider.base.acFlags = AC_ON | AC_TYPE_PLAYER;
    }

    if (this->actionFunc != EnSkelB_DeathF) {
        Collider_UpdateCylinder(&this->actor, &this->collider);
        if (DECR(this->hurtboxCooldown) == 0) {
            CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
        }
        CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
    }
    if ((player->meleeWeaponState != 0) && Actor_IsFacingPlayer(&this->actor, 0xA38) &&
        (player->meleeWeaponAnimation == PLAYER_MWA_JUMPSLASH_START) && (this->actor.xzDistToPlayer < 300.0f) &&
        (this->canDodge == 1) && (this->actor.colChkInfo.health > 4)) {
        this->alarmstate = 1;
        this->canDodge = 0;
        this->timer = 33;
        EnSkelB_SetupAttackG(this, play);
    }
    pos.x = player->actor.world.pos.x;
    pos.y = player->actor.world.pos.y + 65.0f;
    pos.z = player->actor.world.pos.z;
    epos.x = this->actor.world.pos.x;
    epos.y = this->actor.world.pos.y + 65.0f;
    epos.z = this->actor.world.pos.z;
    if ((this->actor.xzDistToPlayer < 700.0f * (gGangaState.LightIndexStealthModifier * 2)) &&
        ((play->gameplayFrames % 10) == 0)) {
        if (((BgCheck_EntityLineTest1(&play->colCtx, &epos, &pos, &colPoint, &poly, true, true, true, true, &bgId) ==
              true))) {
            this->cantSee = 1;
        } else {
            this->cantSee = 0;
        }
    } else {
        this->cantSee = 1;
    }
    targetFaceRotY = Actor_WorldYawTowardActor(&this->actor, &GET_PLAYER(play)->actor) - this->actor.shape.rot.y;
    targetFaceRotX = Actor_WorldPitchTowardActor(&this->actor, &GET_PLAYER(play)->actor) - this->actor.shape.rot.x;
    Math_ApproachS(&this->headRoty, targetFaceRotY, 3, 0x7D0);
    this->headRoty = CLAMP(this->headRoty, -12000, 12000);
    Math_ApproachS(&this->headRotx, targetFaceRotX, 3, 0x7D0);
    this->headRotx = CLAMP(this->headRotx, -6000, 6000);
}
void EnSkelB_Draw(EnSkelB* this, PlayState* play) {
    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount,
                          EnSkelB_OverrideLimbDraw, EnSkelB_PostLimbDraw, this);
}
void EnSkelB_CheckDamage(EnSkelB* this, PlayState* play) {
    if ((this->collider.base.acFlags & AC_HIT) && ((this->collider.base.acFlags & AC_HARD) == 0)) {
        this->collider.base.acFlags &= ~AC_HIT;
        this->hurtboxCooldown = 20;
        if (this->alarmstate == 0) {
            this->timer = 15;
            this->cantSee = 0;
            this->alarmstate = 1;
            EnSkelB_SetupMoveFR(this, play);
        }
        Actor_ApplyDamage(&this->actor);
        Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_RED, 255, COLORFILTER_BUFFLAG_OPA, 20);

        if (this->actor.colChkInfo.health == 0) {
            this->deathTimer = 44;
            this->timer = 14;
            Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_DEAD);
            EnSkelB_SetupDeath(this, play);
        } else {
            Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_DAMAGE);
        }
    }
}
void EnSkelB_SetupDeath(EnSkelB* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.shape.rot.y;
    s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    relYawTowardsPlayer = ABS(relYawTowardsPlayer);
    Enemy_StartFinishingBlow(play, &this->actor);
    this->actor.flags &= ~ACTOR_FLAG_0;
    if (ABS(relYawTowardsPlayer) <= 0x4000) {
        EnSkelB_ChangeAnimation(this, SKELB_ANIM_DEATHBACK);
        this->actionFunc = EnSkelB_DeathB;
    } else {
        this->deathTimer = 40;
        EnSkelB_ChangeAnimation(this, SKELB_ANIM_DEATHFORWARD);
        this->actionFunc = EnSkelB_DeathF;
    }
}

void EnSkelB_DeathF(EnSkelB* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    if (this->deathTimer <= 0) {
        Item_DropCollectibleRandom(play, &this->actor, &this->actor.world.pos, 0x10);
        Actor_Kill(&this->actor);
    } else if (this->deathTimer > 0) {
        this->deathTimer -= 1;
    }
    if (this->timer > 0) {
        this->actor.speed = 4.0f;
        this->timer -= 1;
    } else {
        this->actor.speed = 0;
    }
}

void EnSkelB_DeathB(EnSkelB* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);

    if (this->deathTimer <= 0) {
        Item_DropCollectibleRandom(play, &this->actor, &this->actor.world.pos, 0x10);
        Actor_Kill(&this->actor);
    } else if (this->deathTimer > 0) {
        this->deathTimer -= 1;
    }
    if (this->timer > 0) {
        this->actor.speed = -4.0f;
        this->timer -= 1;
    } else {
        this->actor.speed = 0;
    }
}
void EnSkelB_ChangeAnimation(EnSkelB* this, s32 anim) {
    Animation_ChangeByInfo(&this->skelAnime, sAnimationInfo, anim);
}
s32 EnSkelB_OverrideLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx) {
    EnSkelB* this = (EnSkelB*)thisx;
    Vec3f zero = {};
    if ((this->alarmstate == 1) && (limbIndex == GSKELSKEL_HEAD_LIMB)) {
        rot->x += this->headRotx;
        rot->y += this->headRoty;
    }
    return false;
}

void EnSkelB_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx) {
    EnSkelB* this = (EnSkelB*)thisx;
    Collider_UpdateSpheres(limbIndex, &this->colliderSpheres);
    Vec3f zeroVec = { 0.0f, 0.0f, 0.0f };
    if (limbIndex == GSKELSKEL_HAND_R_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->HandR);
    }

    if (limbIndex == GSKELSKEL_HAND_L_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->HandL);
    }

    if (limbIndex == GSKELSKEL_BLADE_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->Weapon);
    }

    if (limbIndex == GSKELSKEL_TIP_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->WeaponTip);
    }

    if (limbIndex == GSKELSKEL_HEAD_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->Head);
    }
    this->actor.focus.pos = this->Head;
    if ((this->deathTimer > 10) && (this->deathTimer <= 14)) {
        s32 i;
        Vec3f effPos;
        if (limbIndex == GSKELSKEL_HEAD_LIMB) {
            Matrix_MultVec3f(&zeroVec, &this->Head);
        }
        if (limbIndex == GSKELSKEL_THORAX_LIMB) {
            Matrix_MultVec3f(&zeroVec, &this->Chest);
        }
        if (limbIndex == GSKELSKEL_ARM_R_LIMB) {
            Matrix_MultVec3f(&zeroVec, &this->ArmR);
        }
        if (limbIndex == GSKELSKEL_LEG_R_LIMB) {
            Matrix_MultVec3f(&zeroVec, &this->LegR);
        }
        if (limbIndex == GSKELSKEL_LEG_L_LIMB) {
            Matrix_MultVec3f(&zeroVec, &this->LegL);
        }
        if (Rand_ZeroOne() > Rand_ZeroOne()) {
            EffectSsDeadDb_Spawn(play, &this->Head, &zeroVec, &zeroVec, 5, 10, 208, 24, 22, 125, 0, 22, 0, 1, 9, true);
        }
        if (Rand_ZeroOne() > Rand_ZeroOne()) {
            EffectSsDeadDb_Spawn(play, &this->Chest, &zeroVec, &zeroVec, 5, 10, 208, 24, 22, 125, 0, 22, 0, 1, 9, true);
        }
        if (Rand_ZeroOne() > Rand_ZeroOne()) {
            EffectSsDeadDb_Spawn(play, &this->LegR, &zeroVec, &zeroVec, 5, 10, 208, 22, 22, 125, 0, 22, 0, 1, 9, true);
        }
        if (Rand_ZeroOne() > Rand_ZeroOne()) {
            EffectSsDeadDb_Spawn(play, &this->ArmR, &zeroVec, &zeroVec, 5, 10, 208, 22, 22, 125, 0, 22, 0, 1, 9, true);
        }
        if (Rand_ZeroOne() > Rand_ZeroOne()) {
            EffectSsDeadDb_Spawn(play, &this->LegL, &zeroVec, &zeroVec, 5, 10, 208, 22, 22, 125, 0, 22, 0, 1, 9, true);
        }
    }

    if (this->actionFunc == EnSkelB_AttackA) {
        if (this->skelAnime.curFrame < 8.0f) {
            EffectBlure_AddSpace(Effect_GetByIndex(this->blureIndex));
        } else if (this->skelAnime.curFrame < 16.0f) {
            EffectBlure_AddVertex(Effect_GetByIndex(this->blureIndex), &this->Weapon, &this->WeaponTip);
        }
    }

    if (this->actionFunc == EnSkelB_AttackB) {
        if (this->skelAnime.curFrame < 8.0f) {
            EffectBlure_AddSpace(Effect_GetByIndex(this->blureIndex));
        } else if (this->skelAnime.curFrame < 23.0f) {
            EffectBlure_AddVertex(Effect_GetByIndex(this->blureIndex), &this->Weapon, &this->WeaponTip);
        }
    }

    if (this->actionFunc == EnSkelB_AttackC) {
        if (this->skelAnime.curFrame < 12.0f) {
            EffectBlure_AddSpace(Effect_GetByIndex(this->blureIndex));
        } else if (this->skelAnime.curFrame < 21.0f) {
            EffectBlure_AddVertex(Effect_GetByIndex(this->blureIndex), &this->Weapon, &this->WeaponTip);
        }
    }

    if (this->actionFunc == EnSkelB_AttackD) {
        if (this->skelAnime.curFrame < 8.0f) {
            EffectBlure_AddSpace(Effect_GetByIndex(this->blureIndex));
        } else if (this->skelAnime.curFrame < 22.0f) {
            EffectBlure_AddVertex(Effect_GetByIndex(this->blureIndex), &this->Weapon, &this->WeaponTip);
        }
    }

    if (this->actionFunc == EnSkelB_AttackE) {
        if (this->skelAnime.curFrame < 12.0f) {
            EffectBlure_AddSpace(Effect_GetByIndex(this->blureIndex));
        } else if (this->skelAnime.curFrame < 40.0f) {
            EffectBlure_AddVertex(Effect_GetByIndex(this->blureIndex), &this->Weapon, &this->WeaponTip);
        }
    }

    if (this->actionFunc == EnSkelB_AttackF) {
        if (this->skelAnime.curFrame < 12.0f) {
            EffectBlure_AddSpace(Effect_GetByIndex(this->blureIndex));
        } else if (this->skelAnime.curFrame < 64.0f) {
            EffectBlure_AddVertex(Effect_GetByIndex(this->blureIndex), &this->Weapon, &this->WeaponTip);
        }
    }

    if (this->actionFunc == EnSkelB_AttackG) {
        if (this->skelAnime.curFrame < 0.0f) {
            EffectBlure_AddSpace(Effect_GetByIndex(this->blureIndex));
        } else if (this->skelAnime.curFrame < 22.0f) {
            EffectBlure_AddVertex(Effect_GetByIndex(this->blureIndex), &this->Weapon, &this->WeaponTip);
        }
    }
}

void EnSkelB_ForwardBackCheck(EnSkelB* this, PlayState* play) {

    this->canDodge = 1;
    f32 RandNum = Rand_ZeroOne();
    s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    relYawTowardsPlayer = ABS(relYawTowardsPlayer);
    if ((this->alarmstate == 0) && (this->cantSee == 1)) {
        this->timer = 39;
        EnSkelB_SetupIdle(this, play);
        this->actor.speed = 0.0f;
    } else if (this->alarmstate == 1) {
        if ((this->actor.xzDistToPlayer < 300.0f) && (this->actor.xzDistToPlayer >= 65.0f)) {
            this->alarmstate = 1;
            this->actor.speed = 0.0f;
            if ((RandNum <= 0.74) && (this->actor.xzDistToPlayer < 260.0f) && (this->actor.xzDistToPlayer >= 150.0f)) {
                this->timer = 38;
                EnSkelB_SetupAttackC(this, play);
            } else {
                this->timer = 30;
                EnSkelB_SetupMoveF(this, play);
            }
        } else if ((this->actor.xzDistToPlayer < 65.0f)) {
            this->alarmstate = 1;
            this->actor.speed = 0.0f;
            this->timer = 35;
            Player* player = GET_PLAYER(play);
            if ((RandNum <= 0.64) && (relYawTowardsPlayer < 0x1500)) {
                this->timer = 26;
                EnSkelB_SetupAttackD(this, play);
            } else if (Rand_ZeroOne() < 0.5) {
                this->timer = 34;
                EnSkelB_SetupAttackA(this, play);
            } else if (Rand_ZeroOne() < 0.5) {
                this->timer = 38;
                EnSkelB_SetupAttackB(this, play);
            } else if (Rand_ZeroOne() < 0.5) {
                this->timer = 49;
                EnSkelB_SetupAttackE(this, play);
            } else {
                this->timer = 79;
                EnSkelB_SetupAttackF(this, play);
            }
        } else if ((this->actor.xzDistToPlayer >= 300.0f) && (this->actor.xzDistToPlayer < 1000.0f)) {
            this->alarmstate = 1;
            this->timer = 15;
            EnSkelB_SetupMoveFR(this, play);
        } else {
            this->alarmstate = 0;
            this->timer = 39;
            EnSkelB_SetupIdle(this, play);
            this->actor.speed = 0.0f;
        }
    }
}

void EnSkelB_SetupIdle(EnSkelB* this, PlayState* play) {
    EnSkelB_ChangeAnimation(this, SKELB_ANIM_IDLE1);
    this->actionFunc = EnSkelB_Idle;
}

void EnSkelB_Idle(EnSkelB* this, PlayState* play) {

    Player* player = GET_PLAYER(play);

    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        relYawTowardsPlayer = ABS(relYawTowardsPlayer);
        if (((relYawTowardsPlayer < 0x2388) ||
             ((this->actor.xzDistToPlayer < 300.0f) && (player->meleeWeaponState != 0))) &&
            (this->actor.xzDistToPlayer < 900.0f * (gGangaState.LightIndexStealthModifier * 2)) &&
            (this->cantSee == 0)) {
            this->timer = 0;
            this->alarmstate = 1;
            EnSkelB_ForwardBackCheck(this, play);
        }
        this->timer -= 1;
    }
    if (this->timer <= 0) {
        if (Rand_ZeroOne() < 0.5f) {
            this->timer = 39;

            EnSkelB_SetupIdle(this, play);
        } else {
            this->timer = 84;
            EnSkelB_SetupIdle2(this, play);
        }
    }
}
void EnSkelB_SetupIdleP(EnSkelB* this, PlayState* play) {
    EnSkelB_ChangeAnimation(this, SKELB_ANIM_IDLE2);
    this->actionFunc = EnSkelB_IdleP;
}

void EnSkelB_IdleP(EnSkelB* this, PlayState* play) {

    Player* player = GET_PLAYER(play);
    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        relYawTowardsPlayer = ABS(relYawTowardsPlayer);
        if (((relYawTowardsPlayer < 0x2388) ||
             ((this->actor.xzDistToPlayer < 300.0f) && (player->meleeWeaponState != 0))) &&
            (this->actor.xzDistToPlayer < 700.0f * (gGangaState.LightIndexStealthModifier * 2)) &&
            (this->cantSee == 0)) {
            this->timer = 0;
            this->alarmstate = 1;
            EnSkelB_ForwardBackCheck(this, play);
        }
        this->timer -= 1;
    }

    if (this->timer <= 0) {
        this->timer = 30 * this->actor.params;
        EnSkelB_SetupMoveFP(this, play);
    }
}

void EnSkelB_SetupIdle2(EnSkelB* this, PlayState* play) {
    EnSkelB_ChangeAnimation(this, SKELB_ANIM_IDLE2);
    this->actionFunc = EnSkelB_Idle2;
}

void EnSkelB_Idle2(EnSkelB* this, PlayState* play) {

    Player* player = GET_PLAYER(play);
    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        relYawTowardsPlayer = ABS(relYawTowardsPlayer);
        if (((relYawTowardsPlayer < 0x2388) ||
             ((this->actor.xzDistToPlayer < 300.0f) && (player->meleeWeaponState != 0))) &&
            (this->actor.xzDistToPlayer < 900.0f * (gGangaState.LightIndexStealthModifier * 2)) &&
            (this->cantSee == 0)) {
            this->timer = 0;
            this->alarmstate = 1;
            EnSkelB_ForwardBackCheck(this, play);
        }
        this->timer -= 1;
    }

    if (this->timer <= 0) {
        this->timer = 39;
        EnSkelB_SetupIdle(this, play);
    }
}

void EnSkelB_SetupRecoil(EnSkelB* this, PlayState* play) {
    this->timer = 13;
    EnSkelB_ChangeAnimation(this, SKELB_ANIM_ATTACKRECOIL);
    this->actionFunc = EnSkelB_Recoil;
}

void EnSkelB_Recoil(EnSkelB* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        this->timer -= 1;
    }
    if (this->timer <= 0) {
        this->timer = 39;
        EnSkelB_ForwardBackCheck(this, play);
    }
}

void EnSkelB_SetupWaitForClimb(EnSkelB* this, PlayState* play) {
    EnSkelB_ChangeAnimation(this, SKELB_ANIM_CLIMB);
    this->actionFunc = EnSkelB_WaitForClimb;
}

void EnSkelB_WaitForClimb(EnSkelB* this, PlayState* play) {

    if (this->actor.xzDistToPlayer < 300) {
        this->timer = 39;
        EnSkelB_SetupClimb(this, play);
    }
}

void EnSkelB_SetupClimb(EnSkelB* this, PlayState* play) {
    EnSkelB_ChangeAnimation(this, SKELB_ANIM_CLIMB);
    this->actionFunc = EnSkelB_Climb;
}

void EnSkelB_Climb(EnSkelB* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        this->timer -= 1;
    }
    if (this->timer <= 0) {
        this->alarmstate = 1;
        this->timer = 30;
        EnSkelB_SetupMoveF(this, play);
    }
}
void EnSkelB_SetupMoveF(EnSkelB* this, PlayState* play) {
    this->actionFunc = EnSkelB_MoveF;
    EnSkelB_ChangeAnimation(this, SKELB_ANIM_WALK_COMBAT);
    this->canDodge = 1;
}

void EnSkelB_MoveF(EnSkelB* this, PlayState* play) {
    Player* player = GET_PLAYER(play);

    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x7FF, 1);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x7FF, 1);
    if (this->timer > 0) {
        if ((player->meleeWeaponState == 0) && (this->actor.xzDistToPlayer < 65.0f)) {
            this->timer = 0;
            this->actor.speed = 0.0f;
            EnSkelB_ForwardBackCheck(this, play);
        }
        this->actor.speed = 3.0f;

        if ((this->skelAnime.curFrame == 5.0f) || (this->skelAnime.curFrame == 20.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_WALK);
        }
        this->timer -= 1;
        Player* player = GET_PLAYER(play);

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        EnSkelB_ForwardBackCheck(this, play);
    }
}

void EnSkelB_SetupMoveFR(EnSkelB* this, PlayState* play) {
    this->actionFunc = EnSkelB_MoveFR;
    EnSkelB_ChangeAnimation(this, SKELB_ANIM_RUN);
    this->canDodge = 1;
}

void EnSkelB_MoveFR(EnSkelB* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    if ((this->timer > 0) && (this->actor.xzDistToPlayer >= 65.0f)) {
        this->actor.speed = 10.0f;
        if ((this->skelAnime.curFrame == 2.0f) || (this->skelAnime.curFrame == 10.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_WALK);
        }
        this->timer -= 1;
        Player* player = GET_PLAYER(play);

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        EnSkelB_ForwardBackCheck(this, play);
    }
}

void EnSkelB_SetupMoveFP(EnSkelB* this, PlayState* play) {
    EnSkelB_ChangeAnimation(this, SKELB_ANIM_WALK);
    this->actor.world.rot.y = this->actor.world.rot.y + 0x8000;
    this->actionFunc = EnSkelB_MoveFP;
    this->canDodge = 1;
}

void EnSkelB_MoveFP(EnSkelB* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.world.rot.y, 1, 0xAAF, 1);
    if ((this->timer > 0) && (this->actor.xzDistToPlayer >= 65.0f)) {
        this->actor.speed = 3.0f;
        this->timer -= 1;
        if ((this->skelAnime.curFrame == 5.0f) || (this->skelAnime.curFrame == 20.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_WALK);
        }
        Player* player = GET_PLAYER(play);
        s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        relYawTowardsPlayer = ABS(relYawTowardsPlayer);
        if (((relYawTowardsPlayer < 0x2388) ||
             ((this->actor.xzDistToPlayer < 300.0f) && (player->meleeWeaponState != 0))) &&
            (this->actor.xzDistToPlayer < 900.0f * (gGangaState.LightIndexStealthModifier * 2)) &&
            (this->cantSee == 0)) {
            this->timer = 0;
            this->alarmstate = 1;
            EnSkelB_ForwardBackCheck(this, play);
        }
    } else {
        this->timer = 61;
        this->actor.speed = 0.0f;
        EnSkelB_SetupIdleP(this, play);
    }
}

void EnSkelB_SetupAttackA(EnSkelB* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnSkelB_ChangeAnimation(this, SKELB_ANIM_ATTACKA);
    this->actionFunc = EnSkelB_AttackA;
    this->actor.speed = 0.0f;
}

void EnSkelB_AttackA(EnSkelB* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if (this->skelAnime.curFrame < 13.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAAF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    }
    if (this->timer > 0) {
        if (this->skelAnime.curFrame == 13.0f) {
            this->canDodge = 0;
            EnSkelB_Scream(this, play);
            Actor_PlaySfx(&this->actor, NA_SE_IT_SWORD_SWING);
        }
        if ((this->skelAnime.curFrame > 16) || (this->skelAnime.curFrame < 5)) {
            this->canDodge = 1;
        } else {
            this->canDodge = 0;
        }
        this->actor.speed = 0.0f;
        this->timer -= 1;
        Player* player = GET_PLAYER(play);

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        EnSkelB_ForwardBackCheck(this, play);
    }
}

void EnSkelB_SetupAttackB(EnSkelB* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnSkelB_ChangeAnimation(this, SKELB_ANIM_ATTACKB);
    this->actionFunc = EnSkelB_AttackB;
}

void EnSkelB_AttackB(EnSkelB* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if (this->skelAnime.curFrame < 13.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAAF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    }
    if ((this->skelAnime.curFrame == 13.0f) || (this->skelAnime.curFrame == 20.0f)) {
        this->canDodge = 0;
        EnSkelB_Scream(this, play);
        Actor_PlaySfx(&this->actor, NA_SE_IT_SWORD_SWING);
    }
    this->actor.speed = 0.0f;
    if ((this->skelAnime.curFrame > 20) || (this->skelAnime.curFrame < 5)) {
        this->canDodge = 1;
    } else {
        this->canDodge = 0;
    }

    if (this->timer > 0) {
        this->actor.speed = 0.0f;

        this->timer -= 1;
        Player* player = GET_PLAYER(play);

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        EnSkelB_ForwardBackCheck(this, play);
    }
}

void EnSkelB_SetupAttackC(EnSkelB* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnSkelB_ChangeAnimation(this, SKELB_ANIM_ATTACKC);
    this->actionFunc = EnSkelB_AttackC;
    this->actor.speed = 0.0f;
}

void EnSkelB_AttackC(EnSkelB* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if (this->skelAnime.curFrame < 13.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        this->actor.world.rot.y = this->actor.shape.rot.y;
    }
    if (this->skelAnime.curFrame == 8.0f) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_JUMP);
        Actor_SpawnFloorDustRing(play, &this->actor, &this->actor.world.pos, 10.0f, 6, 20.0f, 100, 80, true);
    }
    if (this->skelAnime.curFrame == 20.0f) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_M_GND);
        Actor_SpawnFloorDustRing(play, &this->actor, &this->actor.world.pos, 10.0f, 6, 20.0f, 100, 80, true);
    }
    if (this->skelAnime.curFrame == 17) {
        EnSkelB_Scream(this, play);
        Actor_PlaySfx(&this->actor, NA_SE_IT_SWORD_SWING_HARD);
    }
    if ((this->skelAnime.curFrame > 24) || (this->skelAnime.curFrame < 5)) {
        this->canDodge = 1;
    } else {
        this->canDodge = 0;
    }
    if (this->timer > 0) {
        if ((this->skelAnime.curFrame < 21.0f) && (this->skelAnime.curFrame > 6.0f)) {
            this->actor.speed = 13.0f;
        } else {
            this->actor.speed = 0.0f;
        }

        this->timer -= 1;
        Player* player = GET_PLAYER(play);

    } else {
        EnSkelB_ForwardBackCheck(this, play);
    }
}

void EnSkelB_SetupAttackD(EnSkelB* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnSkelB_ChangeAnimation(this, SKELB_ANIM_ATTACKD);
    this->actionFunc = EnSkelB_AttackD;
    this->actor.speed = 0.0f;
}

void EnSkelB_AttackD(EnSkelB* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if (this->skelAnime.curFrame < 15.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    }
    if (this->timer > 0) {
        if (this->skelAnime.curFrame < 9.0f) {
            this->actor.speed = -2.0f;
        } else if ((this->skelAnime.curFrame > 11.0f) && (this->skelAnime.curFrame < 16.0f)) {
            this->actor.speed = 5.0f;
        } else {
            this->actor.speed = 0.0f;
        }
        if ((this->skelAnime.curFrame == 9.0f) || (this->skelAnime.curFrame == 15.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_WALK);
        }
        if (this->skelAnime.curFrame == 15.0f) {
            EnSkelB_Scream(this, play);
            Actor_PlaySfx(&this->actor, NA_SE_IT_SWORD_SWING);
        }
        if ((this->skelAnime.curFrame > 16) && (this->skelAnime.curFrame < 9)) {
            this->canDodge = 1;
        } else {
            this->canDodge = 0;
        }
        this->timer -= 1;
        Player* player = GET_PLAYER(play);

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        EnSkelB_ForwardBackCheck(this, play);
    }
}

void EnSkelB_SetupAttackE(EnSkelB* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnSkelB_ChangeAnimation(this, SKELB_ANIM_ATTACKE);
    this->actionFunc = EnSkelB_AttackE;
    this->actor.speed = 0.0f;
}

void EnSkelB_AttackE(EnSkelB* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if ((this->skelAnime.curFrame < 13.0f) ||
        ((this->skelAnime.curFrame < 34.0f) && (this->skelAnime.curFrame > 22.0f))) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    }
    if (this->timer > 0) {
        if ((this->skelAnime.curFrame > 23.0f) && (this->skelAnime.curFrame < 31.0f)) {
            this->actor.speed = -2.0f;
        } else if ((this->skelAnime.curFrame > 34.0f) && (this->skelAnime.curFrame < 38.0f)) {
            this->actor.speed = 5.0f;
        } else {
            this->actor.speed = 0.0f;
        }
        if ((this->skelAnime.curFrame == 31.0f) || (this->skelAnime.curFrame == 38.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_WALK);
        }
        if ((this->skelAnime.curFrame == 13.0f) || (this->skelAnime.curFrame == 19.0f) ||
            (this->skelAnime.curFrame == 38.0f)) {
            EnSkelB_Scream(this, play);
            Actor_PlaySfx(&this->actor, NA_SE_IT_SWORD_SWING);
        }
        if ((this->skelAnime.curFrame > 45) || (this->skelAnime.curFrame < 6)) {
            this->canDodge = 1;
        } else {
            this->canDodge = 0;
        }
        this->timer -= 1;
        Player* player = GET_PLAYER(play);

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        EnSkelB_ForwardBackCheck(this, play);
    }
}

void EnSkelB_SetupAttackF(EnSkelB* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnSkelB_ChangeAnimation(this, SKELB_ANIM_ATTACKF);
    this->actionFunc = EnSkelB_AttackF;
    this->actor.speed = 0.0f;
}

void EnSkelB_AttackF(EnSkelB* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if ((this->skelAnime.curFrame < 13.0f) ||
        ((this->skelAnime.curFrame < 34.0f) && (this->skelAnime.curFrame > 22.0f)) ||
        ((this->skelAnime.curFrame < 58.0f) && (this->skelAnime.curFrame > 43.0f))) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        this->actor.world.rot.y = this->actor.shape.rot.y;
    }
    if (this->timer > 0) {
        if ((this->skelAnime.curFrame > 23.0f) && (this->skelAnime.curFrame < 31.0f)) {
            this->actor.speed = -2.0f;
        } else if ((this->skelAnime.curFrame > 34.0f) && (this->skelAnime.curFrame < 38.0f)) {
            this->actor.speed = 5.0f;
        } else if ((this->skelAnime.curFrame > 48.0f) && (this->skelAnime.curFrame < 63.0f)) {
            this->actor.speed = 13.0f;
        } else {
            this->actor.speed = 0.0f;
        }
        if ((this->skelAnime.curFrame == 31.0f) || (this->skelAnime.curFrame == 38.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_WALK);
        }
        if (this->skelAnime.curFrame == 49.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_JUMP);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->actor.world.pos, 10.0f, 6, 20.0f, 100, 80, true);
        }
        if (this->skelAnime.curFrame == 62.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_M_GND);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->actor.world.pos, 10.0f, 6, 20.0f, 100, 80, true);
        }
        if ((this->skelAnime.curFrame == 13.0f) || (this->skelAnime.curFrame == 19.0f) ||
            (this->skelAnime.curFrame == 38.0f)) {
            EnSkelB_Scream(this, play);
            Actor_PlaySfx(&this->actor, NA_SE_IT_SWORD_SWING);
        } else if (this->skelAnime.curFrame == 59.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_IT_SWORD_SWING_HARD);
        }
        if ((this->skelAnime.curFrame > 72) || (this->skelAnime.curFrame < 6)) {
            this->canDodge = 1;
        } else {
            this->canDodge = 0;
        }
        this->timer -= 1;
        Player* player = GET_PLAYER(play);

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        EnSkelB_ForwardBackCheck(this, play);
    }
}

void EnSkelB_SetupAttackG(EnSkelB* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnSkelB_ChangeAnimation(this, SKELB_ANIM_ATTACKG);
    this->actionFunc = EnSkelB_AttackG;
}

void EnSkelB_AttackG(EnSkelB* this, PlayState* play) {
    Player* player = GET_PLAYER(play);

    SkelAnime_Update(&this->skelAnime);
    s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    relYawTowardsPlayer = ABS(relYawTowardsPlayer);
    Vec3f pos;
    if (this->skelAnime.curFrame < 5.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAAF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    } else if ((this->skelAnime.curFrame < 20.0f) && (this->skelAnime.curFrame > 16.0f)) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAAF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    }
    if ((this->skelAnime.curFrame == 6.0f) || (this->skelAnime.curFrame == 22.0f)) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_WALK);
    }
    pos.x = player->actor.world.pos.x;
    pos.y = player->actor.world.pos.y + 65.0f;
    pos.z = player->actor.world.pos.z;
    if (this->timer > 0) {
        if ((this->skelAnime.curFrame > 5.0f) && (this->skelAnime.curFrame < 9.0f)) {
            this->actor.speed = -2.0f;

        } else if ((this->skelAnime.curFrame > 20.0f) && (this->skelAnime.curFrame < 25.0f)) {
            this->canDodge = 0;
            this->actor.speed = 5.0f;
        } else {
            this->actor.speed = 0.0f;
        }

        if (this->skelAnime.curFrame == 10.0f) {
            EnSkelB_Scream(this, play);
            Actor_PlaySfx(&this->actor, NA_SE_IT_SWORD_SWING);
        } else if (this->skelAnime.curFrame == 4.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
        }
        if ((this->skelAnime.curFrame < 9.0f) && (this->actor.xzDistToPlayer <= 60) && (relYawTowardsPlayer < 0x1000)) {
            play->damagePlayer(play, -20);
            func_8002F71C(play, &this->actor, 8.0f, this->actor.yawTowardsPlayer, 6.0f);
            CollisionCheck_SpawnRedBlood(play, &pos);
        }
        this->timer -= 1;
        Player* player = GET_PLAYER(play);

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        this->canDodge = 1;
        EnSkelB_ForwardBackCheck(this, play);
    }
}

void EnSkelB_Scream(EnSkelB* this, PlayState* play) {
    f32 Rand = Rand_ZeroOne();
    if (Rand < 0.33) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_WARAU);
    } else {
        Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_SAKEBI);
    }
}