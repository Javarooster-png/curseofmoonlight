#include "z_En_Spider.h"
#include "terminal.h"
#define FLAGS (ACTOR_FLAG_0 | ACTOR_FLAG_2 | ACTOR_FLAG_4 | ACTOR_FLAG_5)
void EnSpider_Init(EnSpider* this, PlayState* play);
void EnSpider_Destroy(EnSpider* this, PlayState* play);
void EnSpider_Update(EnSpider* this, PlayState* play);
void EnSpider_Draw(EnSpider* this, PlayState* play);
void EnSpider_MoveR(EnSpider* this, PlayState* play);
void EnSpider_SetupMoveR(EnSpider* this, PlayState* play);
void EnSpider_MoveL(EnSpider* this, PlayState* play);
void EnSpider_SetupMoveL(EnSpider* this, PlayState* play);
void EnSpider_MoveB(EnSpider* this, PlayState* play);
void EnSpider_MoveF(EnSpider* this, PlayState* play);
void EnSpider_SetupMoveB(EnSpider* this, PlayState* play);
void EnSpider_SetupMoveF(EnSpider* this, PlayState* play);
void EnSpider_MoveFP(EnSpider* this, PlayState* play);
void EnSpider_SetupMoveFP(EnSpider* this, PlayState* play);
void EnSpider_Climb(EnSpider* this, PlayState* play);
void EnSpider_StartClimb(EnSpider* this, PlayState* play);
void EnSpider_EndClimb(EnSpider* this, PlayState* play);
void EnSpider_SetupStartClimb(EnSpider* this, PlayState* play);
void EnSpider_SetupEndClimb(EnSpider* this, PlayState* play);
void EnSpider_SetupClimb(EnSpider* this, PlayState* play);
void EnSpider_ForwardBackCheck(EnSpider* this, PlayState* play);
void EnSpider_SetupAttackA(EnSpider* this, PlayState* play);
void EnSpider_AttackA(EnSpider* this, PlayState* play);
void EnSpider_SetupAttackB(EnSpider* this, PlayState* play);
void EnSpider_AttackB(EnSpider* this, PlayState* play);
void EnSpider_SetupJumpSideL(EnSpider* this, PlayState* play);
void EnSpider_JumpSideL(EnSpider* this, PlayState* play);
void EnSpider_SetupJumpSideR(EnSpider* this, PlayState* play);
void EnSpider_JumpSideR(EnSpider* this, PlayState* play);
void EnSpider_SetupStrafeR(EnSpider* this, PlayState* play);
void EnSpider_StrafeR(EnSpider* this, PlayState* play);
void EnSpider_SetupStrafeL(EnSpider* this, PlayState* play);
void EnSpider_StrafeL(EnSpider* this, PlayState* play);
void EnSpider_SetupIdle(EnSpider* this, PlayState* play);
void EnSpider_Idle(EnSpider* this, PlayState* play);
void EnSpider_SetupIdleP(EnSpider* this, PlayState* play);
void EnSpider_IdleP(EnSpider* this, PlayState* play);
void EnSpider_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx);
void EnSpider_ChangeAnimation(EnSpider* this, s32 anim);
void EnSpider_CheckDamage(EnSpider* this, PlayState* play);
void EnSpider_SetupDeath(EnSpider* this, PlayState* play);
void EnSpider_Death(EnSpider* this, PlayState* play);
void EnSpider_Scream(EnSpider* this, PlayState* play);
void EnSpider_SetupIntro(EnSpider* this, PlayState* play);
void EnSpider_Intro(EnSpider* this, PlayState* play);
void EnSpider_SetupIntroCont(EnSpider* this, PlayState* play);
void EnSpider_IntroCont(EnSpider* this, PlayState* play);
ActorInit En_Spider_InitVars = {
    /**/ ACTOR_SPIDER,
    /**/ ACTORCAT_ENEMY,
    /**/ FLAGS,
    /**/ OBJECT_SPIDER,
    /**/ sizeof(EnSpider),
    /**/ (ActorFunc)EnSpider_Init,
    /**/ (ActorFunc)EnSpider_Destroy,
    /**/ (ActorFunc)EnSpider_Update,
    /**/ (ActorFunc)EnSpider_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        .colType = COLTYPE_HIT8,
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
    { .radius = 40, .height = 60, .yShift = 0, .pos = { 0, 0, 0,} },
};

static CollisionCheckInfoInit2 sColChkInit = {
    .health = 14,
    .mass = MASS_HEAVY,
    .cylHeight = 60.0f,
    .cylRadius = 40.0f,
};
static ColliderJntSphElementInit sJntSphItemsInit[] = {
    {
        {
            ELEMTYPE_UNK0,
            { 0xFFCFFFFF, 0x04, 0x10 },
            { 0x00000000, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NORMAL,
            BUMP_NONE,
            OCELEM_NONE,
        },
        { ARMATURE_MANDIBLEL_LIMB, { { 0, 0, 0 }, 35 }, 60 },
    },
    {
        {
            ELEMTYPE_UNK0,
            { 0xFFCFFFFF, 0x04, 0x10 },
            { 0x00000000, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NORMAL,
            BUMP_NONE,
            OCELEM_NONE,
        },
        { ARMATURE_MANDIBLER_LIMB, { { 0, 0, 0 }, 35 }, 60 },
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
                                       ICHAIN_VEC3F_DIV1000(scale, 19, ICHAIN_STOP) };
typedef enum {
    ARMATURE_ANIM_IDLE = 0,
    ARMATURE_ANIM_INTRO,
    ARMATURE_ANIM_ATTACKA,
    ARMATURE_ANIM_ATTACKB,
    ARMATURE_ANIM_CLIMB,
    ARMATURE_ANIM_CLIMBSTART,
    ARMATURE_ANIM_CLIMBEND,
    ARMATURE_ANIM_JUMPBACK,
    ARMATURE_ANIM_JUMPSIDEL,
    ARMATURE_ANIM_JUMPSIDER,
    ARMATURE_ANIM_STRAFEL,
    ARMATURE_ANIM_STRAFER,
    ARMATURE_ANIM_WALK,
    ARMATURE_ANIM_DEATH,
    ARMATURE_ANIM_MAX
} SArmatureAnim;

static AnimationInfo sAnimationInfo[ARMATURE_ANIM_MAX] = {
    { &ArmatureIdleAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 1.0f },
    { &ArmatureIntroAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &ArmatureAttackAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &ArmatureWebattackAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 5.0f },
    { &ArmatureClimbAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &ArmatureClimbstartAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &ArmatureClimbendAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &ArmatureJumpbackAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &ArmatureJumpsidelAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &ArmatureJumpsiderAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &ArmatureStrafelAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &ArmatureStraferAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &ArmatureMovefAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 1.0f },
    { &ArmatureDeathAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
};

typedef enum {
    /* 0x0 */ ARMATURE_DMGEFF_NORMAL,
    /* 0x1 */ ARMATURE_DMGEFF_STUN,
    /* 0x6 */ ARMATURE_DMGEFF_FIREMAGIC = 6,
    /* 0xD */ ARMATURE_DMGEFF_SLING = 0xD,
    /* 0xE */ ARMATURE_DMGEFF_LIGHT,
    /* 0xF */ ARMATURE_DMGEFF_FREEZE
} ArmatureDamageEffect;

static DamageTable sDamageTable = {
    /* Deku nut      */ DMG_ENTRY(8, ARMATURE_DMGEFF_NORMAL),
    /* Deku stick    */ DMG_ENTRY(2, ARMATURE_DMGEFF_NORMAL),
    /* Slingshot     */ DMG_ENTRY(0, ARMATURE_DMGEFF_SLING),
    /* Explosive     */ DMG_ENTRY(4, ARMATURE_DMGEFF_NORMAL),
    /* Boomerang     */ DMG_ENTRY(0, ARMATURE_DMGEFF_STUN),
    /* Normal arrow  */ DMG_ENTRY(1, ARMATURE_DMGEFF_NORMAL),
    /* Hammer swing  */ DMG_ENTRY(2, ARMATURE_DMGEFF_NORMAL),
    /* Hookshot      */ DMG_ENTRY(0, ARMATURE_DMGEFF_STUN),
    /* Kokiri sword  */ DMG_ENTRY(1, ARMATURE_DMGEFF_NORMAL),
    /* Master sword  */ DMG_ENTRY(1, ARMATURE_DMGEFF_NORMAL),
    /* Giant's Knife */ DMG_ENTRY(2, ARMATURE_DMGEFF_NORMAL),
    /* Fire arrow    */ DMG_ENTRY(0, ARMATURE_DMGEFF_NORMAL),
    /* Ice arrow     */ DMG_ENTRY(0, ARMATURE_DMGEFF_FREEZE),
    /* Light arrow   */ DMG_ENTRY(2, ARMATURE_DMGEFF_LIGHT),
    /* Unk arrow 1   */ DMG_ENTRY(0, ARMATURE_DMGEFF_NORMAL),
    /* Unk arrow 2   */ DMG_ENTRY(0, ARMATURE_DMGEFF_NORMAL),
    /* Unk arrow 3   */ DMG_ENTRY(0, ARMATURE_DMGEFF_NORMAL),
    /* Fire magic    */ DMG_ENTRY(0, ARMATURE_DMGEFF_FIREMAGIC),
    /* Ice magic     */ DMG_ENTRY(3, ARMATURE_DMGEFF_FREEZE),
    /* Light magic   */ DMG_ENTRY(0, ARMATURE_DMGEFF_LIGHT),
    /* Shield        */ DMG_ENTRY(0, ARMATURE_DMGEFF_NORMAL),
    /* Mirror Ray    */ DMG_ENTRY(0, ARMATURE_DMGEFF_NORMAL),
    /* Kokiri spin   */ DMG_ENTRY(1, ARMATURE_DMGEFF_NORMAL),
    /* Giant spin    */ DMG_ENTRY(1, ARMATURE_DMGEFF_NORMAL),
    /* Master spin   */ DMG_ENTRY(1, ARMATURE_DMGEFF_NORMAL),
    /* Kokiri jump   */ DMG_ENTRY(1, ARMATURE_DMGEFF_NORMAL),
    /* Giant jump    */ DMG_ENTRY(4, ARMATURE_DMGEFF_NORMAL),
    /* Master jump   */ DMG_ENTRY(2, ARMATURE_DMGEFF_NORMAL),
    /* Unknown 1     */ DMG_ENTRY(0, ARMATURE_DMGEFF_NORMAL),
    /* Unblockable   */ DMG_ENTRY(0, ARMATURE_DMGEFF_NORMAL),
    /* Hammer jump   */ DMG_ENTRY(2, ARMATURE_DMGEFF_NORMAL),
    /* Unknown 2     */ DMG_ENTRY(0, ARMATURE_DMGEFF_NORMAL),
};

void EnSpider_Init(EnSpider* this, PlayState* play) {
    Actor_ProcessInitChain(&this->actor, sInitChain);
    this->alarmstate = 0;
    if (this->actor.params == 2) {
    this->cantSee = 0;
    }

    this->canDodge = 1;
    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawHorse, 10.0f);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    Collider_InitCylinder(play, &this->collider);
    SkelAnime_InitFlex(play, &this->skelAnime, &Armature, &ArmatureIntroAnim, this->jointTable, this->morphTable,
                       ARMATURE_NUM_LIMBS);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &sDamageTable, &sColChkInit);
    Collider_InitJntSph(play, &this->colliderSpheres);
    Collider_SetJntSph(play, &this->colliderSpheres, &this->actor, &sJntSphInit, this->colliderSpheresElements);
    if (this->actor.params == 0) {
        this->timer = 39;
        EnSpider_SetupIdle(this, play);
        this->actor.speed = 0.0f;
    } else if (this->actor.params == 1) {
        EnSpider_SetupIntro(this, play);
        this->actor.speed = 0.0f;
    } else if (this->actor.params == 2) {
        this->timer = 39;
        EnSpider_SetupIdle(this, play);
        this->actor.speed = 0.0f;
    } else {
        this->timer = 95;
        EnSpider_SetupIdleP(this, play);
        this->actor.speed = 0.0f;
    }
}

void EnSpider_Destroy(EnSpider* this, PlayState* play) {
    Collider_DestroyCylinder(play, &this->collider);
    Collider_DestroyJntSph(play, &this->colliderSpheres);
}

void EnSpider_Update(EnSpider* this, PlayState* play) {
    s16 targetFaceRotX;
    s16 targetFaceRotY;
    Vec3f pos;
    Vec3f epos;
    CollisionPoly* poly;
    s32 bgId;
    Player* player = GET_PLAYER(play);
    if ((this->actionFunc != EnSpider_Intro)) {
        Actor_MoveXZGravity(&this->actor);
    }
    this->actionFunc(this, play);
    EnSpider_CheckDamage(this, play);
    Actor_UpdateBgCheckInfo(play, &this->actor, this->collider.dim.radius, this->collider.dim.height * 0.5f, 0.0f,
                            UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2);
    if ((this->actionFunc == EnSpider_AttackA) && (this->skelAnime.curFrame > 16.0f) &&
        (this->skelAnime.curFrame < 26.0f)) {
        CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSpheres.base);
    }
    if ((this->actionFunc != EnSpider_Death) || (this->actionFunc != EnSpider_Intro) ||
        (this->actionFunc != EnSpider_IntroCont)) {
        Collider_UpdateCylinder(&this->actor, &this->collider);
        if (DECR(this->hurtboxCooldown) == 0) {
            CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
        }
        CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
    }
    Vec3f colPoint;
    pos.x = player->actor.world.pos.x;
    pos.y = player->actor.world.pos.y + 65.0f;
    pos.z = player->actor.world.pos.z;
    epos.x = this->actor.world.pos.x;
    epos.y = this->actor.world.pos.y + 65.0f;
    epos.z = this->actor.world.pos.z;
        if (this->actor.params == 2) {
    this->cantSee = 0;
    }

    if ((this->actor.xzDistToPlayer < 900.0f * (gGangaState.LightIndexStealthModifier * 2)) &&
        ((play->gameplayFrames % 10) == 0) && (this->actor.params != 2)) {
        if (((BgCheck_EntityLineTest1(&play->colCtx, &epos, &pos, &colPoint, &poly, true, true, true, true, &bgId) ==
              true))) {
            this->cantSee = 1;
        } else {
            this->cantSee = 0;
        }
    } else {
        this->cantSee = 1;
    }
    if (((player->meleeWeaponState != 0) && (player->meleeWeaponAnimation != PLAYER_MWA_JUMPSLASH_START)) &&
        Actor_IsFacingPlayer(&this->actor, 0xA38) && (this->actor.xzDistToPlayer < 200.0f) &&
        ((play->gameplayFrames % 6) == 0) && (this->actionFunc != EnSpider_Death) &&
        (this->actionFunc != EnSpider_JumpSideL) && (this->actionFunc != EnSpider_JumpSideR) &&
        (this->actionFunc != EnSpider_AttackA) && (this->actionFunc != EnSpider_MoveB)) {
        this->timer = 15;
        EnSpider_ChangeAnimation(this, ARMATURE_ANIM_JUMPBACK);
        EnSpider_SetupMoveB(this, play);
    }
    if (((player->meleeWeaponState != 0) && (player->meleeWeaponAnimation == PLAYER_MWA_JUMPSLASH_START)) &&
        Actor_IsFacingPlayer(&this->actor, 0xA38) && (this->actor.xzDistToPlayer < 250.0f) &&
        (this->actionFunc != EnSpider_Death) && (this->actionFunc != EnSpider_AttackA) &&
        (this->actionFunc != EnSpider_MoveB) && (this->actionFunc != EnSpider_JumpSideL) &&
        (this->actionFunc != EnSpider_JumpSideR)) {
        s32 Randum = Rand_ZeroOne();
        this->timer = 13;
        if (this->actionFunc == EnSpider_MoveR) {
            EnSpider_ChangeAnimation(this, ARMATURE_ANIM_JUMPSIDER);
            EnSpider_SetupJumpSideR(this, play);
        } else if (this->actionFunc == EnSpider_MoveL) {
            EnSpider_ChangeAnimation(this, ARMATURE_ANIM_JUMPSIDEL);
            EnSpider_SetupJumpSideL(this, play);
        } else if (Randum > 0.5f) {
            EnSpider_ChangeAnimation(this, ARMATURE_ANIM_JUMPSIDEL);
            EnSpider_SetupJumpSideL(this, play);
        } else {
            EnSpider_ChangeAnimation(this, ARMATURE_ANIM_JUMPSIDER);
            EnSpider_SetupJumpSideR(this, play);
        }
    }
}
void EnSpider_Draw(EnSpider* this, PlayState* play) {
    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount, NULL,
                          EnSpider_PostLimbDraw, this);
}

void EnSpider_CheckDamage(EnSpider* this, PlayState* play) {
    if (this->collider.base.acFlags & AC_HIT) {
        this->collider.base.acFlags &= ~AC_HIT;
        this->hurtboxCooldown = 20;
        if (this->actor.xzDistToPlayer > 100.0f) {
            this->timer = 12;
            this->cantSee = 0;
            this->alarmstate = 1;
            EnSpider_SetupMoveF(this, play);
        }
        Actor_ApplyDamage(&this->actor);
        Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_RED, 255, COLORFILTER_BUFFLAG_OPA, 20);

        if (this->actor.colChkInfo.health == 0) {
            this->deathTimer = 42;
            Actor_PlaySfx(&this->actor, NA_SE_EN_STALTU_DAMAGE);
            EnSpider_SetupDeath(this, play);
        }
    }
}
void EnSpider_SetupDeath(EnSpider* this, PlayState* play) {
    EnSpider_ChangeAnimation(this, ARMATURE_ANIM_DEATH);

    Enemy_StartFinishingBlow(play, &this->actor);
    this->actor.flags &= ~ACTOR_FLAG_0;
    this->actor.shape.shadowDraw = 0;
    this->actionFunc = EnSpider_Death;
    this->actor.speed = 0;
}

void EnSpider_Death(EnSpider* this, PlayState* play) {
 
    SkelAnime_Update(&this->skelAnime);

    if (this->deathTimer <= 0) {
            Item_DropCollectible(play, &this->actor.world.pos, ITEM00_RUPEE_RED);
        Actor_Kill(&this->actor);
    } else if (this->deathTimer > 0) {
        this->deathTimer -= 1;
    }
}
void EnSpider_ChangeAnimation(EnSpider* this, s32 anim) {
    Animation_ChangeByInfo(&this->skelAnime, sAnimationInfo, anim);
}

void EnSpider_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx) {
    EnSpider* this = (EnSpider*)thisx;
    Collider_UpdateSpheres(limbIndex, &this->colliderSpheres);
    Vec3f zeroVec = { 0.0f, 0.0f, 0.0f };
    if (limbIndex == ARMATURE_WAIST_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->Head);
    }
    this->actor.focus.pos = this->Head;
    if ((((this->deathTimer > 1) && (this->deathTimer <= 3)) || ((this->deathTimer > 14) && (this->deathTimer <= 16)) ||
         ((this->deathTimer > 28) && (this->deathTimer <= 32)))) {
        s32 i;
        Vec3f effPos;
        if (limbIndex == ARMATURE_ABDOMEN_LIMB) {
            Matrix_MultVec3f(&zeroVec, &this->Chest);
        }
        if (limbIndex == ARMATURE_LEGR1_LIMB) {
            Matrix_MultVec3f(&zeroVec, &this->ArmR);
        }
        if (limbIndex == ARMATURE_LEGR3_LIMB) {
            Matrix_MultVec3f(&zeroVec, &this->LegR);
        }
        if (limbIndex == ARMATURE_LEGL2_LIMB) {
            Matrix_MultVec3f(&zeroVec, &this->LegL);
        }
        if (Rand_ZeroOne() > Rand_ZeroOne()) {
            EffectSsDeadDb_Spawn(play, &this->Head, &zeroVec, &zeroVec, 25, 30, 208, 24, 22, 125, 0, 22, 0, 1, 9, true);
        }
        if (Rand_ZeroOne() > Rand_ZeroOne()) {
            EffectSsDeadDb_Spawn(play, &this->Chest, &zeroVec, &zeroVec, 25, 30, 208, 24, 22, 125, 0, 22, 0, 1, 9,
                                 true);
        }
        if (Rand_ZeroOne() > Rand_ZeroOne()) {
            EffectSsDeadDb_Spawn(play, &this->LegR, &zeroVec, &zeroVec, 25, 30, 208, 22, 22, 125, 0, 22, 0, 1, 9, true);
        }
        if (Rand_ZeroOne() > Rand_ZeroOne()) {
            EffectSsDeadDb_Spawn(play, &this->ArmR, &zeroVec, &zeroVec, 25, 30, 208, 22, 22, 125, 0, 22, 0, 1, 9, true);
        }
        if (Rand_ZeroOne() > Rand_ZeroOne()) {
            EffectSsDeadDb_Spawn(play, &this->LegL, &zeroVec, &zeroVec, 25, 30, 208, 22, 22, 125, 0, 22, 0, 1, 9, true);
        }
    }
}

void EnSpider_SetupStartClimb(EnSpider* this, PlayState* play) {
    EnSpider_ChangeAnimation(this, ARMATURE_ANIM_CLIMBSTART);
    this->actionFunc = EnSpider_StartClimb;
}

void EnSpider_StartClimb(EnSpider* this, PlayState* play) {
 
    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        this->actor.velocity.y = 3.0f;
        this->actor.gravity = 0.0f;
        this->timer -= 1;
    }
    if (this->timer <= 0) {
        this->alarmstate = 1;
        this->timer = 12;
        EnSpider_SetupClimb(this, play);
    }
}

void EnSpider_SetupClimb(EnSpider* this, PlayState* play) {
    EnSpider_ChangeAnimation(this, ARMATURE_ANIM_CLIMB);
    this->actionFunc = EnSpider_Climb;
}

void EnSpider_Climb(EnSpider* this, PlayState* play) {
 
    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
    if (this->timer > 0) {
        this->actor.velocity.y = 5.0f;
        this->timer -= 1;
        Player* player = GET_PLAYER(play);
        if (((this->actor.bgCheckFlags & BGCHECKFLAG_WALL) == 0) ||
            ((this->actor.bgCheckFlags & BGCHECKFLAG_CEILING) != 0)) {
            this->timer = 11;
            EnSpider_SetupEndClimb(this, play);
        }
                       if ((this->skelAnime.curFrame == 2.0f) || (this->skelAnime.curFrame == 4.0f) || (this->skelAnime.curFrame == 6.0f) || (this->skelAnime.curFrame == 8.0f) || (this->skelAnime.curFrame == 10.0f) || (this->skelAnime.curFrame == 12.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_RIZA_WALK);
        }
    } else {
        this->timer = 12;
        EnSpider_SetupClimb(this, play);
    }
}
void EnSpider_SetupEndClimb(EnSpider* this, PlayState* play) {
    EnSpider_ChangeAnimation(this, ARMATURE_ANIM_CLIMBEND);
    this->actionFunc = EnSpider_EndClimb;
}

void EnSpider_EndClimb(EnSpider* this, PlayState* play) {
 
    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {

        if (this->timer < 6) {
            this->actor.speed = 4.0f;
            this->actor.gravity = -3.0f;
        } else {
            this->actor.velocity.y = 3.0f;
            this->actor.gravity = -3.0f;
        }
        this->timer -= 1;
    }
    if (this->timer <= 0) {
        this->alarmstate = 1;
        this->timer = 12;
        this->actor.gravity = -3.0f;
        EnSpider_SetupMoveF(this, play);
    }
}

void EnSpider_SetupIntro(EnSpider* this, PlayState* play) {
    this->actionFunc = EnSpider_Intro;
}

void EnSpider_Intro(EnSpider* this, PlayState* play) {
 
    Player* player = GET_PLAYER(play);
    s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    relYawTowardsPlayer = ABS(relYawTowardsPlayer);
    
    if (((relYawTowardsPlayer < 0x2388) ||
         ((this->actor.xzDistToPlayer < 300.0f) && (player->meleeWeaponState != 0))) &&
        (this->actor.xzDistToPlayer < 900.0f * gGangaState.LightIndexStealthModifier) && (this->cantSee == 0)) {
        this->timer = 28;
        this->alarmstate = 1;
        EnSpider_SetupIntroCont(this, play);
    }
}

void EnSpider_SetupIntroCont(EnSpider* this, PlayState* play) {
    this->actionFunc = EnSpider_IntroCont;
}

void EnSpider_IntroCont(EnSpider* this, PlayState* play) {
 
    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        this->alarmstate = 1;
                       if ((this->skelAnime.curFrame == 16.0f) || (this->skelAnime.curFrame == 25.0f) || (this->skelAnime.curFrame == 32.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_RIZA_WALK);
        }
        this->timer -= 1;
    } else {
        EnSpider_ForwardBackCheck(this, play);
    }
}

void EnSpider_ForwardBackCheck(EnSpider* this, PlayState* play) {
 
    this->canDodge = 1;
    f32 RandNum = Rand_ZeroOne();
    s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    relYawTowardsPlayer = ABS(relYawTowardsPlayer);
    if (this->actor.params == 2) {
        this->cantSee = 0;
    }
    if ((this->alarmstate == 0) && (this->cantSee == 1)) {
        this->timer = 39;
        EnSpider_SetupIdle(this, play);
        this->actor.speed = 0.0f;
    } else if (this->alarmstate == 1) {
        Player* player = GET_PLAYER(play);
        if ((this->actor.xzDistToPlayer < 300.0f) && (this->actor.xzDistToPlayer >= 160.0f) &&
            (fabsf(player->actor.world.pos.y - this->actor.world.pos.y) < 100.0f)) {
            this->alarmstate = 1;
            this->actor.speed = 0.0f;
            if ((RandNum <= 0.44) && (this->actor.xzDistToPlayer < 240.0f) && (relYawTowardsPlayer < 0x2000)) {
                this->timer = 36;
                EnSpider_SetupAttackB(this, play);
            } else {
                this->timer = 12;
                EnSpider_SetupMoveF(this, play);
            }
        } else if ((this->actor.xzDistToPlayer < 160.0f) &&
                   (fabsf(player->actor.world.pos.y - this->actor.world.pos.y) < 100.0f)) {
            this->alarmstate = 1;
            this->actor.speed = 0.0f;
            this->timer = 35;

            if ((RandNum <= 0.64) && (relYawTowardsPlayer < 0x2000)) {
                EnSpider_SetupAttackA(this, play);
            } else if (Rand_ZeroOne() < 0.5) {
                this->timer = 19;
                EnSpider_SetupMoveL(this, play);
            } else {
                this->timer = 19;
                EnSpider_SetupMoveR(this, play);
            }
        } else if (((this->actor.xzDistToPlayer >= 300.0f) && (this->actor.xzDistToPlayer < 1200.0f) &&
                    (fabsf(player->actor.world.pos.y - this->actor.world.pos.y) < 100.0f)) ||
                   ((this->actor.xzDistToPlayer < 1200.0f) &&
                    (fabsf(player->actor.world.pos.y - this->actor.world.pos.y) > 100.0f))) {
            this->alarmstate = 1;
            this->cantSee = 0;
            this->timer = 12;
            EnSpider_SetupMoveF(this, play);
        } else {
            this->alarmstate = 0;
            this->timer = 39;
            EnSpider_SetupIdle(this, play);
            this->actor.speed = 0.0f;
        }
    }
}

void EnSpider_SetupIdle(EnSpider* this, PlayState* play) {
    EnSpider_ChangeAnimation(this, ARMATURE_ANIM_IDLE);
    this->actionFunc = EnSpider_Idle;
}

void EnSpider_Idle(EnSpider* this, PlayState* play) {
 
    Player* player = GET_PLAYER(play);
    if (this->actor.params == 2) {
        this->cantSee = 0;
    }
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
            EnSpider_ForwardBackCheck(this, play);
        }
        this->timer -= 1;
    }
    if (this->timer <= 0) {
        this->timer = 39;

        EnSpider_SetupIdle(this, play);
    }
}
void EnSpider_SetupIdleP(EnSpider* this, PlayState* play) {
    EnSpider_ChangeAnimation(this, ARMATURE_ANIM_IDLE);
    this->actionFunc = EnSpider_IdleP;
}

void EnSpider_IdleP(EnSpider* this, PlayState* play) {
 
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
            EnSpider_ForwardBackCheck(this, play);
        }
        this->timer -= 1;
    }

    if (this->timer <= 0) {
        this->timer = 12 * this->actor.params;
        EnSpider_SetupMoveFP(this, play);
    }
}

void EnSpider_SetupMoveF(EnSpider* this, PlayState* play) {
    this->actionFunc = EnSpider_MoveF;
    EnSpider_ChangeAnimation(this, ARMATURE_ANIM_WALK);
}

void EnSpider_MoveF(EnSpider* this, PlayState* play) {
 
    Vec3f pos;
    Vec3f epos;
    CollisionPoly* poly;
    s32 bgId;
    Vec3f colPoint;
    Player* player = GET_PLAYER(play);
    pos.x = player->actor.world.pos.x;
    pos.y = player->actor.world.pos.y + 65.0f;
    pos.z = player->actor.world.pos.z;
    epos.x = this->actor.world.pos.x;
    epos.y = this->actor.world.pos.y + 65.0f;
    epos.z = this->actor.world.pos.z;
    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
    if (this->timer > 0) {
        this->actor.speed = 10.0f;
        if ((this->skelAnime.curFrame == 2.0f) || (this->skelAnime.curFrame == 4.0f) || (this->skelAnime.curFrame == 6.0f) || (this->skelAnime.curFrame == 8.0f) || (this->skelAnime.curFrame == 10.0f) || (this->skelAnime.curFrame == 12.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_RIZA_WALK);
        }
        this->timer -= 1;
        Player* player = GET_PLAYER(play);
        if (this->actor.bgCheckFlags & BGCHECKFLAG_WALL) {
            if ((((player->actor.world.pos.y > this->actor.world.pos.y + 100.0f) &&
                  ((player->actor.world.pos.y - this->actor.world.pos.y <= 1400.0f))) ||
                 ((BgCheck_EntityLineTest1(&play->colCtx, &epos, &pos, &colPoint, &poly, true, false, false, true,
                                           &bgId) == true)))) {
                this->timer = 13;
                EnSpider_SetupStartClimb(this, play);
                return;
            }
        }
    } else {
        EnSpider_ForwardBackCheck(this, play);
    }
}

void EnSpider_SetupMoveFP(EnSpider* this, PlayState* play) {
    EnSpider_ChangeAnimation(this, ARMATURE_ANIM_WALK);
    this->actor.world.rot.y = this->actor.world.rot.y + 0x8000;
    this->actionFunc = EnSpider_MoveFP;
}

void EnSpider_MoveFP(EnSpider* this, PlayState* play) {
 
    SkelAnime_Update(&this->skelAnime);

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.world.rot.y, 1, 0xAAF, 1);
    if ((this->timer > 0) && (this->actor.xzDistToPlayer >= 90.0f)) {
        this->actor.speed = 8.0f;
        this->timer -= 1;
       if ((this->skelAnime.curFrame == 2.0f) || (this->skelAnime.curFrame == 4.0f) || (this->skelAnime.curFrame == 6.0f) || (this->skelAnime.curFrame == 8.0f) || (this->skelAnime.curFrame == 10.0f) || (this->skelAnime.curFrame == 12.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_RIZA_WALK);
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
            EnSpider_ForwardBackCheck(this, play);
        }
    } else {
        this->timer = 39;
        this->actor.speed = 0.0f;
        EnSpider_SetupIdleP(this, play);
    }
}

void EnSpider_SetupMoveB(EnSpider* this, PlayState* play) {
    this->actionFunc = EnSpider_MoveB;
    Animation_Change(&this->skelAnime, &ArmatureJumpbackAnim, 1.0f, 3.0f, 25.0f, ANIMMODE_ONCE, 1.0f);
}

void EnSpider_MoveB(EnSpider* this, PlayState* play) {
 
    SkelAnime_Update(&this->skelAnime);

    this->actor.shape.rot.y = this->actor.world.rot.y;

    if (this->timer > 0) {

        if (this->skelAnime.curFrame == 15.0f) {
            Actor_SpawnFloorDustRing(play, &this->actor, &this->actor.world.pos, 15.0f, 6, 20.0f, 300, 100, true);
            Actor_PlaySfx(&this->actor, NA_SE_EN_RIZA_DOWN);
        }
        if (this->skelAnime.curFrame < 5.0f) {
            if (this->skelAnime.curFrame == 4.0f) {
                Actor_PlaySfx(&this->actor, NA_SE_EN_STAL_JUMP);
                Actor_SpawnFloorDustRing(play, &this->actor, &this->actor.world.pos, 15.0f, 6, 20.0f, 300, 100, true);
            }
            Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
            this->actor.speed = 0.0f;
        } else if (this->skelAnime.curFrame < 15.0f) {
            this->actor.speed = -13.0f;
        } else {
            if ((this->actor.xzDistToPlayer < 140.0f) && (this->actor.xzDistToPlayer >= 70.0f)) {
                this->alarmstate = 1;
                this->actor.speed = 0.0f;
                this->timer = 35;
                EnSpider_SetupAttackB(this, play);
            }
            this->actor.speed = 0.0f;
        }
        this->timer -= 1;
        Player* player = GET_PLAYER(play);

    } else {
        this->canDodge = 1;
        EnSpider_ForwardBackCheck(this, play);
    }
}

void EnSpider_SetupJumpSideL(EnSpider* this, PlayState* play) {
    this->canDodge = 0;
    this->actionFunc = EnSpider_JumpSideL;
    if (this->skelAnime.curFrame < 11.0f) {
        this->actor.world.rot.y = this->actor.yawTowardsPlayer + 0xD000;
        this->actor.shape.rot.y = this->actor.yawTowardsPlayer;
        this->actor.speed = 14.0f;
    } else if (this->skelAnime.curFrame > 10.0f) {
        this->actor.world.rot.y = this->actor.yawTowardsPlayer + 0xD000;
        this->actor.shape.rot.y = this->actor.yawTowardsPlayer;
        this->actor.speed = 0.0f;
    }
}

void EnSpider_JumpSideL(EnSpider* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        this->timer -= 1;
    }

    if (this->timer <= 0) {
        this->timer = 33;
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        EnSpider_ChangeAnimation(this, ARMATURE_ANIM_ATTACKA);
        EnSpider_SetupAttackA(this, play);
        this->canDodge = 1;
    } else {
        EnSpider_SetupJumpSideL(this, play);
    }
}

void EnSpider_SetupJumpSideR(EnSpider* this, PlayState* play) {
    this->canDodge = 0;
    this->actionFunc = EnSpider_JumpSideR;
    if (this->skelAnime.curFrame < 11.0f) {
        this->actor.world.rot.y = this->actor.yawTowardsPlayer + 0x3000;
        this->actor.shape.rot.y = this->actor.yawTowardsPlayer;
        this->actor.speed = 14.0f;
    } else if (this->skelAnime.curFrame > 10.0f) {
        this->actor.world.rot.y = this->actor.yawTowardsPlayer + 0x3000;
        this->actor.shape.rot.y = this->actor.yawTowardsPlayer;
        this->actor.speed = 0.0f;
    }
}

void EnSpider_JumpSideR(EnSpider* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        this->timer -= 1;
    }

    if (this->timer <= 0) {
        this->timer = 33;
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        EnSpider_ChangeAnimation(this, ARMATURE_ANIM_ATTACKA);
        EnSpider_SetupAttackA(this, play);
        this->canDodge = 1;
    } else {
        EnSpider_SetupJumpSideR(this, play);
    }
}

void EnSpider_SetupMoveR(EnSpider* this, PlayState* play) {
    EnSpider_ChangeAnimation(this, ARMATURE_ANIM_STRAFER);
    this->actionFunc = EnSpider_MoveR;
}

void EnSpider_MoveR(EnSpider* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        this->timer -= 1;
               if ((this->skelAnime.curFrame == 2.0f) || (this->skelAnime.curFrame == 4.0f) || (this->skelAnime.curFrame == 6.0f) || (this->skelAnime.curFrame == 8.0f) || (this->skelAnime.curFrame == 10.0f) || (this->skelAnime.curFrame == 12.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_RIZA_WALK);
        }
        this->actor.world.rot.y = this->actor.yawTowardsPlayer + 0x4000;
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAA0, 1);
        this->actor.speed = 8.0f;
    }

    if (this->timer <= 0) {
        this->actor.speed = 0.0f;
        this->actor.world.rot.y = this->actor.yawTowardsPlayer;
        EnSpider_ForwardBackCheck(this, play);
    }
}

void EnSpider_SetupMoveL(EnSpider* this, PlayState* play) {
    EnSpider_ChangeAnimation(this, ARMATURE_ANIM_STRAFEL);
    this->actionFunc = EnSpider_MoveL;
}

void EnSpider_MoveL(EnSpider* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        this->timer -= 1;
               if ((this->skelAnime.curFrame == 2.0f) || (this->skelAnime.curFrame == 4.0f) || (this->skelAnime.curFrame == 6.0f) || (this->skelAnime.curFrame == 8.0f) || (this->skelAnime.curFrame == 10.0f) || (this->skelAnime.curFrame == 12.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_RIZA_WALK);
        }
        this->actor.world.rot.y = this->actor.yawTowardsPlayer + 0xC000;
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAA0, 1);
        this->actor.speed = 8.0f;
    }

    if (this->timer <= 0) {
        this->actor.speed = 0.0f;
        this->actor.world.rot.y = this->actor.yawTowardsPlayer;
        EnSpider_ForwardBackCheck(this, play);
    }
}

void EnSpider_SetupAttackA(EnSpider* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnSpider_ChangeAnimation(this, ARMATURE_ANIM_ATTACKA);
    this->actionFunc = EnSpider_AttackA;
}

void EnSpider_AttackA(EnSpider* this, PlayState* play) {
 
    SkelAnime_Update(&this->skelAnime);
    if (this->skelAnime.curFrame < 21.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAAF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    }
    if (this->timer > 0) {
       if ((this->skelAnime.curFrame == 7.0f) || (this->skelAnime.curFrame == 9.0f) || (this->skelAnime.curFrame == 15.0f) || (this->skelAnime.curFrame == 19.0f) || (this->skelAnime.curFrame == 26.0f) || (this->skelAnime.curFrame == 36.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_RIZA_WALK);
        }
        if (this->skelAnime.curFrame == 24.0f) {
            this->canDodge = 0;
            EnSpider_Scream(this, play);
            Actor_PlaySfx(&this->actor, NA_SE_IT_SWORD_SWING_HARD);
        }

        if (this->skelAnime.curFrame < 10.0f) {
            this->actor.speed = -10.0f;
        } else if ((this->skelAnime.curFrame < 19.0f) && (this->skelAnime.curFrame >= 10.0f)) {
            Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAA0, 1);
            Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAA0, 1);
            this->actor.speed = 17.0f;
        } else if ((this->skelAnime.curFrame < 26.0f) && (this->skelAnime.curFrame >= 19.0f)) {
            Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAA0, 1);
            Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAA0, 1);
            this->actor.speed = 0.0f;
        } else if (this->skelAnime.curFrame > 26.0f) {
            Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAA0, 1);
            Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAA0, 1);
            this->actor.speed = -10.0f;
        }
        this->timer -= 1;
        Player* player = GET_PLAYER(play);

    } else {
        this->timer = 15;
        EnSpider_SetupMoveB(this, play);
    }
}

void EnSpider_SetupAttackB(EnSpider* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnSpider_ChangeAnimation(this, ARMATURE_ANIM_ATTACKB);
    this->actionFunc = EnSpider_AttackB;
    this->canDodge = 0;
}

void EnSpider_AttackB(EnSpider* this, PlayState* play) {
 
    Vec3f spawnPos;
    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAAF, 1);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    if (this->skelAnime.curFrame == 13) {
        spawnPos.x = this->actor.world.pos.x + (Math_SinS(this->actor.shape.rot.y) * 23.0f);
        spawnPos.y = this->actor.world.pos.y + 12.0f;
        spawnPos.z = this->actor.world.pos.z + (Math_CosS(this->actor.shape.rot.y) * 23.0f);
        if (Actor_Spawn(&play->actorCtx, play, ACTOR_EN_NUTSBALL, spawnPos.x, spawnPos.y, spawnPos.z,
                        this->actor.shape.rot.x, this->actor.shape.rot.y, this->actor.shape.rot.z, 5) != NULL) {}
    }

    if (this->skelAnime.curFrame > 20) {
        this->canDodge = 1;
    }
    if (this->timer > 0) {
        this->actor.speed = 0.0f;

        this->timer -= 1;
        Player* player = GET_PLAYER(play);

    } else {
        EnSpider_ForwardBackCheck(this, play);
    }
}

void EnSpider_Scream(EnSpider* this, PlayState* play) {
    f32 Rand = Rand_ZeroOne();
    if (Rand < 0.33) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_STALTU_LAUGH);
    }
}