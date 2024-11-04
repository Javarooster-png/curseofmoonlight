#include "z_En_Weredrip3.h"
#include "terminal.h"
#define FLAGS (ACTOR_FLAG_0 | ACTOR_FLAG_2 | ACTOR_FLAG_4 | ACTOR_FLAG_5)

void EnWere3_Init(EnWere3* this, PlayState* play);
void EnWere3_Destroy(EnWere3* this, PlayState* play);
void EnWere3_Update(EnWere3* this, PlayState* play);
void EnWere3_Draw(EnWere3* this, PlayState* play);
void EnWere3_MoveR(EnWere3* this, PlayState* play);
void EnWere3_SetupMoveR(EnWere3* this, PlayState* play);
void EnWere3_MoveL(EnWere3* this, PlayState* play);
void EnWere3_SetupMoveL(EnWere3* this, PlayState* play);
void EnWere3_MoveB(EnWere3* this, PlayState* play);
void EnWere3_MoveF(EnWere3* this, PlayState* play);
void EnWere3_SetupMoveB(EnWere3* this, PlayState* play);
void EnWere3_SetupMoveF(EnWere3* this, PlayState* play);
void EnWere3_MoveFP(EnWere3* this, PlayState* play);
void EnWere3_SetupMoveFP(EnWere3* this, PlayState* play);
void EnWere3_ForwardBackCheck(EnWere3* this, PlayState* play);
void EnWere3_SetupAttackA(EnWere3* this, PlayState* play);
void EnWere3_AttackA(EnWere3* this, PlayState* play);
void EnWere3_SetupAttackB(EnWere3* this, PlayState* play);
void EnWere3_AttackB(EnWere3* this, PlayState* play);
void EnWere3_SetupAttackC(EnWere3* this, PlayState* play);
void EnWere3_AttackC(EnWere3* this, PlayState* play);
void EnWere3_SetupAttackD(EnWere3* this, PlayState* play);
void EnWere3_AttackD(EnWere3* this, PlayState* play);
void EnWere3_SetupIdle(EnWere3* this, PlayState* play);
void EnWere3_Idle(EnWere3* this, PlayState* play);
void EnWere3_SetupIdleP(EnWere3* this, PlayState* play);
void EnWere3_IdleP(EnWere3* this, PlayState* play);
void EnWere3_SetupIdle2(EnWere3* this, PlayState* play);
void EnWere3_SetupIdle3(EnWere3* this, PlayState* play);
void EnWere3_Idle3(EnWere3* this, PlayState* play);
void EnWere3_SetupIdle4(EnWere3* this, PlayState* play);
s32 EnWere3_OverrideLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx);
void EnWere3_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx);
void EnWere3_ChangeAnimation(EnWere3* this, s32 anim);
void EnWere3_CheckDamage(EnWere3* this, PlayState* play);
void EnWere3_SetupDeath(EnWere3* this, PlayState* play);
void EnWere3_Death(EnWere3* this, PlayState* play);
void EnWere3_SetupGetup(EnWere3* this, PlayState* play);
void EnWere3_Getup(EnWere3* this, PlayState* play);
void EnWere3_SetupSitting(EnWere3* this, PlayState* play);
void EnWere3_Sitting(EnWere3* this, PlayState* play);
ActorInit En_Weredrip3_InitVars = {
    /**/ ACTOR_WEREDRIP3,
    /**/ ACTORCAT_ENEMY,
    /**/ FLAGS,
    /**/ OBJECT_WEREDRIP3,
    /**/ sizeof(EnWere3),
    /**/ (ActorFunc)EnWere3_Init,
    /**/ (ActorFunc)EnWere3_Destroy,
    /**/ (ActorFunc)EnWere3_Update,
    /**/ (ActorFunc)EnWere3_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        .colType = COLTYPE_HIT7,
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
    .health = 4,
    .mass = 250,
    .cylHeight = 60.0f,
    .cylRadius = 20.0f,
};
static ColliderJntSphElementInit sJntSphItemsInit[] = {
    {
        {
            ELEMTYPE_UNK0,
            { 0xFFCFFFFF, 0x00, 0x10 },
            { 0x00000000, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NORMAL,
            BUMP_NONE,
            OCELEM_NONE,
        },
        { GWERECIT3_WEAPON_LIMB, { { 0, 0, 0 }, 35 }, 40 },
    },
    {
        {
            ELEMTYPE_UNK0,
            { 0xFFCFFFFF, 0x01, 0x10 },
            { 0x00000000, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NORMAL,
            BUMP_NONE,
            OCELEM_NONE,
        },
        { GWERECIT3_TORCH_LIMB, { { 0, 0, 0 }, 35 }, 40 },
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
                                       ICHAIN_VEC3F_DIV1000(scale, 15, ICHAIN_STOP) };
typedef enum {
    WERE_ANIM_IDLE1 = 0,
    WERE_ANIM_IDLE2,
    WERE_ANIM_IDLE3,
    WERE_ANIM_IDLE4,
    WERE_ANIM_ATTACKA,
    WERE_ANIM_ATTACKB,
    WERE_ANIM_ATTACKC,
    WERE_ANIM_ATTACKD,
    WERE_ANIM_DEATH,
    WERE_ANIM_BWALK,
    WERE_ANIM_WALK,
    WERE_ANIM_LWALK,
    WERE_ANIM_RWALK,
    WERE_ANIM_SIT,
    WERE_ANIM_GETUP,
    WERE_ANIM_MAX
} SWereAnim;

static AnimationInfo sAnimationInfo[WERE_ANIM_MAX] = {
    { &gWereCit3Idle1Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 1.0f },
    { &gWereCit3Idle2Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gWereCit3Idle3Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gWereCit3Idle4Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gWereCit3AttackaAnim, 1.4f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gWereCit3AttackbAnim, 1.4f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gWereCit3AttackcAnim, 1.4f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gWereCit3AttackdAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gWereCit3DeathAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gWereCit3BwalkaAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 7.0f },
    { &gWereCit3WalkaAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 7.0f },
    { &gWereCit3StlwalkaAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 7.0f },
    { &gWereCit3StrwalkaAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 7.0f },
    { &gWereCit3SitaAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gWereCit3SitagetupaAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
};

typedef enum {
    /* 0x0 */ WERE_DMGEFF_NORMAL,
    /* 0x1 */ WERE_DMGEFF_STUN,
    /* 0x6 */ WERE_DMGEFF_FIREMAGIC = 6,
    /* 0xD */ WERE_DMGEFF_SLING = 0xD,
    /* 0xE */ WERE_DMGEFF_LIGHT,
    /* 0xF */ WERE_DMGEFF_FREEZE
} WereDamageEffect;

static DamageTable sDamageTable = {
    /* Deku nut      */ DMG_ENTRY(4, WERE_DMGEFF_NORMAL),
    /* Deku stick    */ DMG_ENTRY(2, WERE_DMGEFF_NORMAL),
    /* Slingshot     */ DMG_ENTRY(0, WERE_DMGEFF_SLING),
    /* Explosive     */ DMG_ENTRY(4, WERE_DMGEFF_NORMAL),
    /* Boomerang     */ DMG_ENTRY(0, WERE_DMGEFF_STUN),
    /* Normal arrow  */ DMG_ENTRY(1, WERE_DMGEFF_NORMAL),
    /* Hammer swing  */ DMG_ENTRY(2, WERE_DMGEFF_NORMAL),
    /* Hookshot      */ DMG_ENTRY(0, WERE_DMGEFF_STUN),
    /* Kokiri sword  */ DMG_ENTRY(1, WERE_DMGEFF_NORMAL),
    /* Master sword  */ DMG_ENTRY(1, WERE_DMGEFF_NORMAL),
    /* Giant's Knife */ DMG_ENTRY(2, WERE_DMGEFF_NORMAL),
    /* Fire arrow    */ DMG_ENTRY(0, WERE_DMGEFF_NORMAL),
    /* Ice arrow     */ DMG_ENTRY(0, WERE_DMGEFF_FREEZE),
    /* Light arrow   */ DMG_ENTRY(2, WERE_DMGEFF_LIGHT),
    /* Unk arrow 1   */ DMG_ENTRY(0, WERE_DMGEFF_NORMAL),
    /* Unk arrow 2   */ DMG_ENTRY(0, WERE_DMGEFF_NORMAL),
    /* Unk arrow 3   */ DMG_ENTRY(0, WERE_DMGEFF_NORMAL),
    /* Fire magic    */ DMG_ENTRY(0, WERE_DMGEFF_FIREMAGIC),
    /* Ice magic     */ DMG_ENTRY(3, WERE_DMGEFF_FREEZE),
    /* Light magic   */ DMG_ENTRY(0, WERE_DMGEFF_LIGHT),
    /* Shield        */ DMG_ENTRY(0, WERE_DMGEFF_NORMAL),
    /* Mirror Ray    */ DMG_ENTRY(0, WERE_DMGEFF_NORMAL),
    /* Kokiri spin   */ DMG_ENTRY(1, WERE_DMGEFF_NORMAL),
    /* Giant spin    */ DMG_ENTRY(4, WERE_DMGEFF_NORMAL),
    /* Master spin   */ DMG_ENTRY(1, WERE_DMGEFF_NORMAL),
    /* Kokiri jump   */ DMG_ENTRY(1, WERE_DMGEFF_NORMAL),
    /* Giant jump    */ DMG_ENTRY(4, WERE_DMGEFF_NORMAL),
    /* Master jump   */ DMG_ENTRY(2, WERE_DMGEFF_NORMAL),
    /* Unknown 1     */ DMG_ENTRY(0, WERE_DMGEFF_NORMAL),
    /* Unblockable   */ DMG_ENTRY(0, WERE_DMGEFF_NORMAL),
    /* Hammer jump   */ DMG_ENTRY(2, WERE_DMGEFF_NORMAL),
    /* Unknown 2     */ DMG_ENTRY(0, WERE_DMGEFF_NORMAL),
};

static EffectBlureInit2 D_8085470C = {
    0, 8, 0, { 160, 25, 25, 144 }, { 160, 25, 25, 22 }, { 160, 25, 25, 0 }, { 160, 25, 25, 0 }, 4,
    0, 2, 0, { 0, 0, 0, 0 },       { 0, 0, 0, 0 },
};

void EnWere3_Init(EnWere3* this, PlayState* play) {
    Actor_ProcessInitChain(&this->actor, sInitChain);
    this->alarmstate = 0;
    this->cantSee = 1;
    Effect_Add(play, &this->blureIndex, EFFECT_BLURE2, 0, 0, &D_8085470C);
    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 25.0f);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    Collider_InitCylinder(play, &this->collider);
    SkelAnime_InitFlex(play, &this->skelAnime, &gWereCit3, &gWereCit3Idle1Anim, this->jointTable, this->morphTable,
                       GWERECIT3_NUM_LIMBS);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &sDamageTable, &sColChkInit);
    Collider_InitJntSph(play, &this->colliderSpheres);
    Collider_SetJntSph(play, &this->colliderSpheres, &this->actor, &sJntSphInit, this->colliderSpheresElements);
    if (this->actor.params == 0) {
        this->timer = 39;
        EnWere3_SetupSitting(this, play);
        this->actor.speed = 0.0f;
    } else if (this->actor.params == 1) {
        this->timer = 39;
        EnWere3_SetupIdle(this, play);
        this->actor.speed = 0.0f;
    } else {
        this->timer = 95;
        EnWere3_SetupIdleP(this, play);
        this->actor.speed = 0.0f;
    }
    EffectSsEnFire_SpawnVec3f(play, &this->actor, &this->Torch, 100, 0, 0, -1);
}

void EnWere3_Destroy(EnWere3* this, PlayState* play) {
    Effect_Delete(play, this->blureIndex);
    Collider_DestroyCylinder(play, &this->collider);
    Collider_DestroyQuad(play, &this->swordCollider);
    Collider_DestroyJntSph(play, &this->colliderSpheres);
}

void EnWere3_Update(EnWere3* this, PlayState* play) {
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
    EnWere3_CheckDamage(this, play);
    Actor_UpdateBgCheckInfo(play, &this->actor, this->collider.dim.radius, this->collider.dim.height * 0.5f, 0.0f,
                            UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2);
    if ((this->actionFunc == EnWere3_AttackB) && (this->skelAnime.curFrame > 10.0f) &&
        (this->skelAnime.curFrame < 22.0f)) {
        if (!(this->colliderSpheres.base.atFlags & AT_BOUNCED) && !(this->colliderSpheres.base.acFlags & AC_HIT)) {
            CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSpheres.base);
        }
    }
    if ((this->actionFunc == EnWere3_AttackA) && (this->skelAnime.curFrame > 35.0f) &&
        (this->skelAnime.curFrame < 44.0f)) {
        if (!(this->colliderSpheres.base.atFlags & AT_BOUNCED) && !(this->colliderSpheres.base.acFlags & AC_HIT)) {
            CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSpheres.base);
        }
    }
    if ((this->actionFunc == EnWere3_AttackC) && (this->skelAnime.curFrame > 12.0f) &&
        (this->skelAnime.curFrame < 19.0f)) {
        if (!(this->colliderSpheres.base.atFlags & AT_BOUNCED) && !(this->colliderSpheres.base.acFlags & AC_HIT)) {
            CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSpheres.base);
        }
    }
    if ((this->actionFunc == EnWere3_AttackD) && (this->skelAnime.curFrame > 11.0f) &&
        (this->skelAnime.curFrame < 40.0f)) {
        if (!(this->colliderSpheres.base.atFlags & AT_BOUNCED) && !(this->colliderSpheres.base.acFlags & AC_HIT)) {
            CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSpheres.base);
        }
    }
    if (this->actionFunc != EnWere3_Death) {
        Collider_UpdateCylinder(&this->actor, &this->collider);
        if (DECR(this->hurtboxCooldown) == 0) {
            CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
        }
        CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
    }
    pos.x = player->actor.world.pos.x;
    pos.y = player->actor.world.pos.y + 65.0f;
    pos.z = player->actor.world.pos.z;
    epos.x = this->actor.world.pos.x;
    epos.y = this->actor.world.pos.y + 65.0f;
    epos.z = this->actor.world.pos.z;
    if ((this->actor.xzDistToPlayer < 500.0f * gGangaState.LightIndexStealthModifier) &&
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
void EnWere3_Draw(EnWere3* this, PlayState* play) {
    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount,
                          EnWere3_OverrideLimbDraw, EnWere3_PostLimbDraw, this);
}
void EnWere3_CheckDamage(EnWere3* this, PlayState* play) {
    if (this->collider.base.acFlags & AC_HIT) {
        this->collider.base.acFlags &= ~AC_HIT;
        this->hurtboxCooldown = 20;
        if (this->alarmstate == 0) {
            this->timer = 29;
            this->cantSee = 0;
            this->alarmstate = 1;
            EnWere3_SetupMoveF(this, play);
        }
        Actor_ApplyDamage(&this->actor);
        Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_RED, 255, COLORFILTER_BUFFLAG_OPA, 20);
        Actor_PlaySfx(&this->actor, NA_SE_EN_FANTOM_DAMAGE2);
        if (this->actor.colChkInfo.health == 0) {
            this->deathTimer = 42;
            EnWere3_SetupDeath(this, play);
        }
    }
}
void EnWere3_SetupDeath(EnWere3* this, PlayState* play) {
    EnWere3_ChangeAnimation(this, WERE_ANIM_DEATH);
    Enemy_StartFinishingBlow(play, &this->actor);
    this->actor.flags &= ~ACTOR_FLAG_0;

    this->actionFunc = EnWere3_Death;
    this->actor.speed = 0;
}

void EnWere3_Death(EnWere3* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);

    if (this->deathTimer <= 0) {
        Item_DropCollectibleRandom(play, &this->actor, &this->actor.world.pos, 0x10);
        Actor_Kill(&this->actor);
    } else if (this->deathTimer > 0) {
        this->deathTimer -= 1;
    }
}
void EnWere3_ChangeAnimation(EnWere3* this, s32 anim) {
    Animation_ChangeByInfo(&this->skelAnime, sAnimationInfo, anim);
}
s32 EnWere3_OverrideLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx) {
    EnWere3* this = (EnWere3*)thisx;
    Vec3f zero = {};
    if ((this->alarmstate == 1) && (limbIndex == GWERECIT3_HEAD_LIMB)) {
        rot->x += this->headRotx;
        rot->y += this->headRoty;
    }
    return false;
}

void EnWere3_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx) {
    EnWere3* this = (EnWere3*)thisx;
    Collider_UpdateSpheres(limbIndex, &this->colliderSpheres);
    static Color_RGBA8 fireAuraPrimColor = { 255, 255, 100, 255 };
    static Color_RGBA8 fireAuraEnvColor = { 255, 50, 0, 0 };
    static Vec3f effVelocity = { 0.0f, 0.5f, 0.0f };
    static Vec3f effAccel = { 0.0f, 0.5f, 0.0f };
    s16 effScaleStep = -10;
    s16 effLife = 3;

    Vec3f zeroVec = { 0.0f, 0.0f, 0.0f };
    if (limbIndex == GWERECIT3_WEAPON_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->Weapon);
    }

    if (limbIndex == GWERECIT3_TIP_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->WeaponTip);
    }

    if (limbIndex == GWERECIT3_HEAD_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->Head);
    }
    if (limbIndex == GWERECIT3_TORCH_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->Torch);
    }

    this->actor.focus.pos = this->Head;
    if ((((this->deathTimer > 1) && (this->deathTimer <= 3)) || ((this->deathTimer > 14) && (this->deathTimer <= 16)) ||
         ((this->deathTimer > 28) && (this->deathTimer <= 32)))) {
        s32 i;
        Vec3f effPos;

        if (limbIndex == GWERECIT3_CHEST_LIMB) {
            Matrix_MultVec3f(&zeroVec, &this->Chest);
        }
        if (limbIndex == GWERECIT3_ARM_R_LIMB) {
            Matrix_MultVec3f(&zeroVec, &this->ArmR);
        }
        if (limbIndex == GWERECIT3_LEG_R_LIMB) {
            Matrix_MultVec3f(&zeroVec, &this->LegR);
        }
        if (limbIndex == GWERECIT3_LEG_L_LIMB) {
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

    if (this->actionFunc == EnWere3_AttackA) {
        if (this->skelAnime.curFrame < 34.0f) {
            EffectBlure_AddSpace(Effect_GetByIndex(this->blureIndex));
        } else if (this->skelAnime.curFrame < 46.0f) {
            EffectBlure_AddVertex(Effect_GetByIndex(this->blureIndex), &this->Weapon, &this->WeaponTip);
        }
    }
    if (this->actionFunc == EnWere3_AttackB) {
        if (this->skelAnime.curFrame < 12.0f) {
            EffectBlure_AddSpace(Effect_GetByIndex(this->blureIndex));
        } else if (this->skelAnime.curFrame < 19.0f) {
            EffectBlure_AddVertex(Effect_GetByIndex(this->blureIndex), &this->Weapon, &this->WeaponTip);
        }
    }
    if (this->actionFunc == EnWere3_AttackC) {
        if (this->skelAnime.curFrame < 10.0f) {
            EffectBlure_AddSpace(Effect_GetByIndex(this->blureIndex));
        } else if (this->skelAnime.curFrame < 20.0f) {
            EffectBlure_AddVertex(Effect_GetByIndex(this->blureIndex), &this->Weapon, &this->WeaponTip);
        }
    }
    if ((play->gameplayFrames % 3) == 0) {
        func_8002843C(play, &this->Torch, &effVelocity, &effAccel, &fireAuraPrimColor, &fireAuraEnvColor, 200,
                      effScaleStep, effLife);
    }
}

void EnWere3_ForwardBackCheck(EnWere3* this, PlayState* play) {

    f32 RandNum = Rand_ZeroOne();
    s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    relYawTowardsPlayer = ABS(relYawTowardsPlayer);
    if ((this->alarmstate == 0) && (this->cantSee == 1)) {
        this->timer = 39;
        EnWere3_SetupIdle(this, play);
        this->actor.speed = 0.0f;
    } else if (this->alarmstate == 1) {
        if ((this->actor.xzDistToPlayer < 30.0f)) {
            this->alarmstate = 1;
            this->timer = 29;
            EnWere3_SetupMoveB(this, play);
        } else if ((this->actor.xzDistToPlayer < 200.0f) && (this->actor.xzDistToPlayer >= 90.0f)) {
            this->alarmstate = 1;
            this->actor.speed = 0.0f;
            this->timer = 29;
            if (RandNum <= 0.165) {
                EnWere3_SetupMoveR(this, play);
            } else if (RandNum <= 0.33) {
                EnWere3_SetupMoveL(this, play);
            } else if (RandNum <= 0.64) {
                this->timer = 46;
                EnWere3_SetupAttackA(this, play);
            } else {
                EnWere3_SetupMoveF(this, play);
            }
        } else if ((this->actor.xzDistToPlayer < 90.0f) && (this->actor.xzDistToPlayer >= 30.0f)) {
            this->alarmstate = 1;
            this->actor.speed = 0.0f;
            this->timer = 32;
            if (RandNum <= 0.43) {
                this->timer = 60;
                EnWere3_SetupAttackD(this, play);
            } else if (relYawTowardsPlayer < 0x1500) {
                EnWere3_SetupAttackC(this, play);
            } else {
                EnWere3_SetupAttackB(this, play);
            }
        } else if ((this->actor.xzDistToPlayer > 200.0f) && (this->actor.xzDistToPlayer <= 750.0f)) {
            this->alarmstate = 1;
            this->timer = 29;
            EnWere3_SetupMoveF(this, play);
        } else {
            this->alarmstate = 0;
            this->timer = 39;
            EnWere3_SetupIdle(this, play);
            this->actor.speed = 0.0f;
        }
    }
}

void EnWere3_SetupSitting(EnWere3* this, PlayState* play) {
    EnWere3_ChangeAnimation(this, WERE_ANIM_SIT);
    this->actionFunc = EnWere3_Sitting;
}

void EnWere3_Sitting(EnWere3* this, PlayState* play) {

    Player* player = GET_PLAYER(play);

    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        relYawTowardsPlayer = ABS(relYawTowardsPlayer);
        if (((relYawTowardsPlayer < 0x2388) ||
             ((this->actor.xzDistToPlayer < 300.0f) && (player->meleeWeaponState != 0))) &&
            (this->actor.xzDistToPlayer < 650.0f) && (this->cantSee == 0)) {
            this->timer = 39;
            this->alarmstate = 1;
            EnWere3_SetupGetup(this, play);
        }
        this->timer -= 1;
    }
    if (this->timer <= 0) {
        this->timer = 39;
        EnWere3_SetupSitting(this, play);
    }
}

void EnWere3_SetupGetup(EnWere3* this, PlayState* play) {
    EnWere3_ChangeAnimation(this, WERE_ANIM_GETUP);
    this->actionFunc = EnWere3_Getup;
}

void EnWere3_Getup(EnWere3* this, PlayState* play) {

    Player* player = GET_PLAYER(play);

    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        this->timer -= 1;
    }
    if (this->timer <= 0) {
        EnWere3_ForwardBackCheck(this, play);
    }
}

void EnWere3_SetupIdle(EnWere3* this, PlayState* play) {
    EnWere3_ChangeAnimation(this, WERE_ANIM_IDLE1);
    this->actionFunc = EnWere3_Idle;
}

void EnWere3_Idle(EnWere3* this, PlayState* play) {

    Player* player = GET_PLAYER(play);

    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        relYawTowardsPlayer = ABS(relYawTowardsPlayer);
        if (((relYawTowardsPlayer < 0x2388) ||
             ((this->actor.xzDistToPlayer < 300.0f) && (player->meleeWeaponState != 0))) &&
            (this->actor.xzDistToPlayer < 650.0f * gGangaState.LightIndexStealthModifier) && (this->cantSee == 0)) {
            this->timer = 0;
            this->alarmstate = 1;
            EnWere3_ForwardBackCheck(this, play);
        }
        this->timer -= 1;
    }
    if (this->timer <= 0) {
        if (Rand_ZeroOne() < 0.5f) {
            this->timer = 39;

            EnWere3_SetupIdle(this, play);
        } else if (Rand_ZeroOne() < 0.5f) {
            this->timer = 95;
            EnWere3_SetupIdle2(this, play);
        } else if (Rand_ZeroOne() < 0.5f) {
            this->timer = 60;
            EnWere3_SetupIdle3(this, play);
        } else {
            this->timer = 100;
            EnWere3_SetupIdle4(this, play);
        }
    }
}

void EnWere3_SetupIdleP(EnWere3* this, PlayState* play) {
    EnWere3_ChangeAnimation(this, WERE_ANIM_IDLE2);
    this->actionFunc = EnWere3_IdleP;
}

void EnWere3_IdleP(EnWere3* this, PlayState* play) {

    Player* player = GET_PLAYER(play);
    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        relYawTowardsPlayer = ABS(relYawTowardsPlayer);
        if (((relYawTowardsPlayer < 0x2388) ||
             ((this->actor.xzDistToPlayer < 300.0f) && (player->meleeWeaponState != 0))) &&
            (this->actor.xzDistToPlayer < 650.0f * gGangaState.LightIndexStealthModifier) && (this->cantSee == 0)) {
            this->timer = 0;
            this->alarmstate = 1;
            EnWere3_ForwardBackCheck(this, play);
        }
        this->timer -= 1;
    }

    if (this->timer <= 0) {
        this->timer = 29 * this->actor.params;
        EnWere3_SetupMoveFP(this, play);
    }
}

void EnWere3_SetupIdle2(EnWere3* this, PlayState* play) {
    EnWere3_ChangeAnimation(this, WERE_ANIM_IDLE2);
    this->actionFunc = EnWere3_Idle3;
}

void EnWere3_SetupIdle3(EnWere3* this, PlayState* play) {
    EnWere3_ChangeAnimation(this, WERE_ANIM_IDLE3);
    this->actionFunc = EnWere3_Idle3;
}

void EnWere3_Idle3(EnWere3* this, PlayState* play) {

    Player* player = GET_PLAYER(play);
    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        relYawTowardsPlayer = ABS(relYawTowardsPlayer);
        if (((relYawTowardsPlayer < 0x2388) ||
             ((this->actor.xzDistToPlayer < 300.0f) && (player->meleeWeaponState != 0))) &&
            (this->actor.xzDistToPlayer < 650.0f * gGangaState.LightIndexStealthModifier) && (this->cantSee == 0)) {
            this->timer = 0;
            this->alarmstate = 1;
            EnWere3_ForwardBackCheck(this, play);
        }
        this->timer -= 1;
    }

    if (this->timer <= 0) {
        this->timer = 39;
        EnWere3_SetupIdle(this, play);
    }
}

void EnWere3_SetupIdle4(EnWere3* this, PlayState* play) {
    EnWere3_ChangeAnimation(this, WERE_ANIM_IDLE4);
    this->actionFunc = EnWere3_Idle3;
}

void EnWere3_SetupMoveF(EnWere3* this, PlayState* play) {
    this->actionFunc = EnWere3_MoveF;
    EnWere3_ChangeAnimation(this, WERE_ANIM_WALK);
}

void EnWere3_MoveF(EnWere3* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAAF, 1);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAAF, 1);
    if ((this->timer > 0) && (this->actor.xzDistToPlayer >= 90.0f)) {
        this->actor.speed = 2.0f;
        this->timer -= 1;
        if ((this->skelAnime.curFrame == 5.0f) || (this->skelAnime.curFrame == 20.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_PL_WALK_CONCRETE);
        }
        Player* player = GET_PLAYER(play);

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        EnWere3_ForwardBackCheck(this, play);
    }
}

void EnWere3_SetupMoveFP(EnWere3* this, PlayState* play) {
    EnWere3_ChangeAnimation(this, WERE_ANIM_WALK);
    this->actor.world.rot.y = this->actor.world.rot.y + 0x8000;
    this->actionFunc = EnWere3_MoveFP;
}

void EnWere3_MoveFP(EnWere3* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.world.rot.y, 1, 0xAAF, 1);
    if ((this->timer > 0) && (this->actor.xzDistToPlayer >= 90.0f)) {
        this->actor.speed = 2.0f;
        this->timer -= 1;
        Player* player = GET_PLAYER(play);
        if ((this->skelAnime.curFrame == 5.0f) || (this->skelAnime.curFrame == 20.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_PL_WALK_CONCRETE);
        }
        s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        relYawTowardsPlayer = ABS(relYawTowardsPlayer);
        if (((relYawTowardsPlayer < 0x2388) ||
             ((this->actor.xzDistToPlayer < 300.0f) && (player->meleeWeaponState != 0))) &&
            (this->actor.xzDistToPlayer < 650.0f * gGangaState.LightIndexStealthModifier) && (this->cantSee == 0)) {
            this->timer = 0;
            this->alarmstate = 1;
            EnWere3_ForwardBackCheck(this, play);
        }
    } else {
        this->timer = 95;
        this->actor.speed = 0.0f;
        EnWere3_SetupIdleP(this, play);
    }
}

void EnWere3_SetupMoveB(EnWere3* this, PlayState* play) {
    this->actionFunc = EnWere3_MoveB;
    EnWere3_ChangeAnimation(this, WERE_ANIM_BWALK);
}

void EnWere3_MoveB(EnWere3* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    this->actor.shape.rot.y = this->actor.world.rot.y;
    if (this->timer > 0) {
        this->actor.speed = -1.5f;
        this->timer -= 1;
        if ((this->skelAnime.curFrame == 15.0f) || (this->skelAnime.curFrame == 29.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_PL_WALK_CONCRETE);
        }
        Player* player = GET_PLAYER(play);

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y + 0x8000)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        EnWere3_ForwardBackCheck(this, play);
    }
}

void EnWere3_SetupMoveR(EnWere3* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    this->actor.world.rot.y = this->actor.world.rot.y + 0x12000;
    EnWere3_ChangeAnimation(this, WERE_ANIM_RWALK);
    this->actionFunc = EnWere3_MoveR;
}

void EnWere3_MoveR(EnWere3* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
    if (this->timer > 0) {
        this->actor.speed = -1.5f;
        this->timer -= 1;
        if ((this->skelAnime.curFrame == 15.0f) || (this->skelAnime.curFrame == 29.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_PL_WALK_CONCRETE);
        }
        Player* player = GET_PLAYER(play);

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y + 0x4000)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        EnWere3_ForwardBackCheck(this, play);
    }
}

void EnWere3_SetupMoveL(EnWere3* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    this->actor.world.rot.y = this->actor.world.rot.y + 0x12000;
    EnWere3_ChangeAnimation(this, WERE_ANIM_LWALK);
    this->actionFunc = EnWere3_MoveL;
}

void EnWere3_MoveL(EnWere3* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
    if (this->timer > 0) {
        this->actor.speed = 1.5f;
        this->timer -= 1;
        if ((this->skelAnime.curFrame == 15.0f) || (this->skelAnime.curFrame == 29.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_PL_WALK_CONCRETE);
        }
        Player* player = GET_PLAYER(play);

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y + 0x10000)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        EnWere3_ForwardBackCheck(this, play);
    }
}

void EnWere3_SetupAttackA(EnWere3* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnWere3_ChangeAnimation(this, WERE_ANIM_ATTACKA);
    this->actionFunc = EnWere3_AttackA;
}

void EnWere3_AttackA(EnWere3* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if (this->skelAnime.curFrame < 28.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAAF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    }
    if (this->timer > 0) {
        if (this->timer == 23) {
            Actor_PlaySfx(&this->actor, NA_SE_IT_SWORD_SWING_HARD);
        }
        if (this->skelAnime.curFrame < 28.0f) {
            this->actor.speed = 4.0f;
        } else if (this->skelAnime.curFrame < 42.0f) {

            this->actor.speed = 9.0f;
        } else {
            this->actor.speed = 0.0f;
        }
        this->timer -= 1;
        Player* player = GET_PLAYER(play);

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        EnWere3_ForwardBackCheck(this, play);
    }
}

void EnWere3_SetupAttackB(EnWere3* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnWere3_ChangeAnimation(this, WERE_ANIM_ATTACKB);
    this->actionFunc = EnWere3_AttackB;
}

void EnWere3_AttackB(EnWere3* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAAF, 1);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    if (this->timer == 23) {
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    }
    if (this->timer > 0) {
        this->actor.speed = 0.0f;

        this->timer -= 1;
        Player* player = GET_PLAYER(play);

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        EnWere3_ForwardBackCheck(this, play);
    }
}

void EnWere3_SetupAttackC(EnWere3* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnWere3_ChangeAnimation(this, WERE_ANIM_ATTACKC);
    this->actionFunc = EnWere3_AttackC;
}

void EnWere3_AttackC(EnWere3* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if (this->skelAnime.curFrame < 14.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAAF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    }
    if (this->timer == 23) {
        Actor_PlaySfx(&this->actor, NA_SE_IT_SWORD_SWING);
    }
    if (this->timer > 0) {
        if (this->skelAnime.curFrame < 15.0f) {
            this->actor.speed = 3.0f;
        } else {

            this->actor.speed = 0.0f;
        }

        this->timer -= 1;
        Player* player = GET_PLAYER(play);

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        EnWere3_ForwardBackCheck(this, play);
    }
}
void EnWere3_SetupAttackD(EnWere3* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnWere3_ChangeAnimation(this, WERE_ANIM_ATTACKD);
    this->actionFunc = EnWere3_AttackC;
}
void EnWere3_AttackD(EnWere3* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if (this->skelAnime.curFrame < 14.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAAF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    }
    if (this->timer > 0) {

        this->actor.speed = 0.0f;
        this->timer -= 1;
        Player* player = GET_PLAYER(play);

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        EnWere3_ForwardBackCheck(this, play);
    }
}