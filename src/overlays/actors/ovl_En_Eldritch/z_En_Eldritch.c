#include "z_En_Eldritch.h"
#include "terminal.h"
#define FLAGS (ACTOR_FLAG_0 | ACTOR_FLAG_2 | ACTOR_FLAG_4 | ACTOR_FLAG_5)
void EnEldritch_Init(EnEldritch* this, PlayState* play);
void EnEldritch_Destroy(EnEldritch* this, PlayState* play);
void EnEldritch_Update(EnEldritch* this, PlayState* play);
void EnEldritch_Draw(EnEldritch* this, PlayState* play);
void EnEldritch_MoveF(EnEldritch* this, PlayState* play);
void EnEldritch_SetupMoveF(EnEldritch* this, PlayState* play);
void EnEldritch_MoveFP(EnEldritch* this, PlayState* play);
void EnEldritch_SetupMoveFP(EnEldritch* this, PlayState* play);
void EnEldritch_ForwardBackCheck(EnEldritch* this, PlayState* play);
void EnEldritch_SetupAttackB(EnEldritch* this, PlayState* play);
void EnEldritch_AttackB(EnEldritch* this, PlayState* play);
void EnEldritch_SetupAttackDa(EnEldritch* this, PlayState* play);
void EnEldritch_AttackDa(EnEldritch* this, PlayState* play);
void EnEldritch_SetupAttackDc(EnEldritch* this, PlayState* play);
void EnEldritch_AttackDc(EnEldritch* this, PlayState* play);
void EnEldritch_SetupAttackDb(EnEldritch* this, PlayState* play);
void EnEldritch_AttackDb(EnEldritch* this, PlayState* play);
void EnEldritch_SetupIdle(EnEldritch* this, PlayState* play);
void EnEldritch_Idle(EnEldritch* this, PlayState* play);
void EnEldritch_SetupIdleP(EnEldritch* this, PlayState* play);
void EnEldritch_IdleP(EnEldritch* this, PlayState* play);
void EnEldritch_SetupIdle2(EnEldritch* this, PlayState* play);
void EnEldritch_Idle2(EnEldritch* this, PlayState* play);
void EnEldritch_SetupIdle3(EnEldritch* this, PlayState* play);
void EnEldritch_Idle3(EnEldritch* this, PlayState* play);
void EnEldritch_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx);
void EnEldritch_ChangeAnimation(EnEldritch* this, s32 anim);
void EnEldritch_CheckDamage(EnEldritch* this, PlayState* play);
void EnEldritch_SetupDeath(EnEldritch* this, PlayState* play);
void EnEldritch_Death(EnEldritch* this, PlayState* play);
void EnEldritch_Scream(EnEldritch* this, PlayState* play);

ActorInit En_Eldritch_InitVars = {
    /**/ ACTOR_ELDRITCH,
    /**/ ACTORCAT_ENEMY,
    /**/ FLAGS,
    /**/ OBJECT_ELDRITCH,
    /**/ sizeof(EnEldritch),
    /**/ (ActorFunc)EnEldritch_Init,
    /**/ (ActorFunc)EnEldritch_Destroy,
    /**/ (ActorFunc)EnEldritch_Update,
    /**/ (ActorFunc)EnEldritch_Draw,
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
    { .radius = 30, .height = 80, .yShift = 0, .pos = { 0, 0, 0,} },
};

static CollisionCheckInfoInit2 sColChkInit = {
    .health = 15,
    .mass = MASS_HEAVY,
    .cylHeight = 80.0f,
    .cylRadius = 30.0f,
};
static ColliderJntSphElementInit sJntSphItemsInit[] = {
    {
        {
            ELEMTYPE_UNK0,
            { 0xFFCFFFFF, 0x04, 0x24 },
            { 0x00000000, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NORMAL,
            BUMP_NONE,
            OCELEM_NONE,
        },
        { GELDRSKEL_HANDR_LIMB, { { 0, 0, 0 }, 35 }, 50 },
    },
    {
        {
            ELEMTYPE_UNK0,
            { 0xFFCFFFFF, 0x04, 0x24 },
            { 0x00000000, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NORMAL,
            BUMP_NONE,
            OCELEM_NONE,
        },
        { GELDRSKEL_HANDL_LIMB, { { 0, 0, 0 }, 35 }, 50 },
    },
    {
        {
            ELEMTYPE_UNK0,
            { 0xFFCFFFFF, 0x04, 0x24 },
            { 0x00000000, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NORMAL,
            BUMP_NONE,
            OCELEM_NONE,
        },
        { GELDRSKEL_HANDRCONT_LIMB, { { 0, 0, 0 }, 35 }, 30 },
    },
    {
        {
            ELEMTYPE_UNK0,
            { 0xFFCFFFFF, 0x04, 0x24 },
            { 0x00000000, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NORMAL,
            BUMP_NONE,
            OCELEM_NONE,
        },
        { GELDRSKEL_HANDLCONT_LIMB, { { 0, 0, 0 }, 35 }, 30 },
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
    ELDR_ANIM_IDLE = 0,
    ELDR_ANIM_IDLE2,
    ELDR_ANIM_IDLE3,
    ELDR_ANIM_ATTACK,
    ELDR_ANIM_ATTACKB,
    ELDR_ANIM_ATTACKBHIT,
    ELDR_ANIM_ATTACKBMISS,
    ELDR_ANIM_WALK,
    ELDR_ANIM_DEATH,
    ELDR_ANIM_MAX
} SEldrAnim;

static AnimationInfo sAnimationInfo[ELDR_ANIM_MAX] = {
    { &gEldrSkelIdleAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 3.0f },
    { &gEldrSkelIdle2Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 3.0f },
    { &gEldrSkelIdle3Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 3.0f },
    { &gEldrSkelAttackaAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 4.0f },
    { &gEldrSkelAttackbAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 4.0f },
    { &gEldrSkelAttackbhitAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gEldrSkelAttackbmissAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gEldrSkelWalkAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 5.0f },
    { &gEldrSkelDieAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 4.0f },
};

typedef enum {
    /* 0x0 */ ELDR_DMGEFF_NORMAL,
    /* 0x1 */ ELDR_DMGEFF_STUN,
    /* 0x6 */ ELDR_DMGEFF_FIREMAGIC = 6,
    /* 0xD */ ELDR_DMGEFF_SLING = 0xD,
    /* 0xE */ ELDR_DMGEFF_LIGHT,
    /* 0xF */ ELDR_DMGEFF_FREEZE
} EldrDamageEffect;

static DamageTable sDamageTable = {
    /* Deku nut      */ DMG_ENTRY(8, ELDR_DMGEFF_NORMAL),
    /* Deku stick    */ DMG_ENTRY(2, ELDR_DMGEFF_NORMAL),
    /* Slingshot     */ DMG_ENTRY(0, ELDR_DMGEFF_SLING),
    /* Explosive     */ DMG_ENTRY(4, ELDR_DMGEFF_NORMAL),
    /* Boomerang     */ DMG_ENTRY(0, ELDR_DMGEFF_STUN),
    /* Normal arrow  */ DMG_ENTRY(1, ELDR_DMGEFF_NORMAL),
    /* Hammer swing  */ DMG_ENTRY(2, ELDR_DMGEFF_NORMAL),
    /* Hookshot      */ DMG_ENTRY(0, ELDR_DMGEFF_STUN),
    /* Kokiri sword  */ DMG_ENTRY(1, ELDR_DMGEFF_NORMAL),
    /* Master sword  */ DMG_ENTRY(1, ELDR_DMGEFF_NORMAL),
    /* Giant's Knife */ DMG_ENTRY(2, ELDR_DMGEFF_NORMAL),
    /* Fire arrow    */ DMG_ENTRY(0, ELDR_DMGEFF_NORMAL),
    /* Ice arrow     */ DMG_ENTRY(0, ELDR_DMGEFF_FREEZE),
    /* Light arrow   */ DMG_ENTRY(2, ELDR_DMGEFF_LIGHT),
    /* Unk arrow 1   */ DMG_ENTRY(0, ELDR_DMGEFF_NORMAL),
    /* Unk arrow 2   */ DMG_ENTRY(0, ELDR_DMGEFF_NORMAL),
    /* Unk arrow 3   */ DMG_ENTRY(0, ELDR_DMGEFF_NORMAL),
    /* Fire magic    */ DMG_ENTRY(0, ELDR_DMGEFF_FIREMAGIC),
    /* Ice magic     */ DMG_ENTRY(3, ELDR_DMGEFF_FREEZE),
    /* Light magic   */ DMG_ENTRY(0, ELDR_DMGEFF_LIGHT),
    /* Shield        */ DMG_ENTRY(0, ELDR_DMGEFF_NORMAL),
    /* Mirror Ray    */ DMG_ENTRY(0, ELDR_DMGEFF_NORMAL),
    /* Kokiri spin   */ DMG_ENTRY(1, ELDR_DMGEFF_NORMAL),
    /* Giant spin    */ DMG_ENTRY(2, ELDR_DMGEFF_NORMAL),
    /* Master spin   */ DMG_ENTRY(1, ELDR_DMGEFF_NORMAL),
    /* Kokiri jump   */ DMG_ENTRY(1, ELDR_DMGEFF_NORMAL),
    /* Giant jump    */ DMG_ENTRY(4, ELDR_DMGEFF_NORMAL),
    /* Master jump   */ DMG_ENTRY(2, ELDR_DMGEFF_NORMAL),
    /* Unknown 1     */ DMG_ENTRY(0, ELDR_DMGEFF_NORMAL),
    /* Unblockable   */ DMG_ENTRY(0, ELDR_DMGEFF_NORMAL),
    /* Hammer jump   */ DMG_ENTRY(2, ELDR_DMGEFF_NORMAL),
    /* Unknown 2     */ DMG_ENTRY(0, ELDR_DMGEFF_NORMAL),
};

void EnEldritch_Init(EnEldritch* this, PlayState* play) {
    Actor_ProcessInitChain(&this->actor, sInitChain);
    this->alarmstate = 0;
    this->cantSee = 1;
    gGangaState.grabstate = 0;
    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 30.0f);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    Collider_InitCylinder(play, &this->collider);
    SkelAnime_InitFlex(play, &this->skelAnime, &gEldrSkel, &gEldrSkelIdleAnim, this->jointTable, this->morphTable,
                       GELDRSKEL_NUM_LIMBS);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &sDamageTable, &sColChkInit);
    Collider_InitJntSph(play, &this->colliderSpheres);
    Collider_SetJntSph(play, &this->colliderSpheres, &this->actor, &sJntSphInit, this->colliderSpheresElements);
    if (this->actor.params == 0) {
        this->timer = 60;
        EnEldritch_SetupIdle(this, play);
        this->actor.speed = 0.0f;
    } else {
        this->timer = 60;
        EnEldritch_SetupIdleP(this, play);
        this->actor.speed = 0.0f;
    }
}
Vec3f EnEldritch_VectorBetween(Vec3f a, Vec3f b) {
    Vec3f result;
    result.x = (a.x + b.x) / 2.0f;
    result.y = (a.y + b.y) / 2.0f;
    result.z = (a.z + b.z) / 2.0f;
    return result;
}

void EnEldritch_Destroy(EnEldritch* this, PlayState* play) {
    Collider_DestroyCylinder(play, &this->collider);
    Collider_DestroyJntSph(play, &this->colliderSpheres);
}

void EnEldritch_Update(EnEldritch* this, PlayState* play) {
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
    EnEldritch_CheckDamage(this, play);

    Actor_UpdateBgCheckInfo(play, &this->actor, this->collider.dim.radius, this->collider.dim.height * 0.5f, 0.0f,
                            UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2);
    if ((this->actionFunc == EnEldritch_AttackB) && (this->skelAnime.curFrame > 12.0f) &&
        (this->skelAnime.curFrame < 23.0f)) {
        CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSpheres.base);
    }
    if (this->actionFunc != EnEldritch_Death) {
        Collider_UpdateCylinder(&this->actor, &this->collider);
        if (DECR(this->hurtboxCooldown) == 0) {
            CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
        }
        CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
    }
    pos.x = player->actor.world.pos.x;
    pos.y = player->actor.world.pos.y + 100.0f;
    pos.z = player->actor.world.pos.z;
    epos.x = this->actor.world.pos.x;
    epos.y = this->actor.world.pos.y + 65.0f;
    epos.z = this->actor.world.pos.z;
    if ((this->actor.xzDistToPlayer < 900.0f * (gGangaState.LightIndexStealthModifier * 2)) &&
        ((play->gameplayFrames % 10) == 0)) {
        if (((BgCheck_EntityLineTest1(&play->colCtx, &epos, &pos, &colPoint, &poly, true, true, true, true, &bgId) ==
              true))) {
            this->cantSee = 1;
        } else {
            this->cantSee = 0;
            if (player->PlayerMadnessDecayTimer == 0) {
                player->PlayerMadnessTimer = CLAMP(player->PlayerMadnessTimer, 0, 255);
                player->PlayerMadnessTimer += 17;
                if (player->PlayerMadnessTimer >= 255) {
                    player->PlayerMadnessDecayTimer = player->PlayerMadnessTimer;
                }
            }
        }
    } else {
        this->cantSee = 1;
    }
}

void EnEldritch_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx) {
    EnEldritch* this = (EnEldritch*)thisx;
    Collider_UpdateSpheres(limbIndex, &this->colliderSpheres);
    Vec3f zeroVec = { 0.0f, 0.0f, 0.0f };

    if (limbIndex == GELDRSKEL_HEAD_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->Head);
    }

    if (limbIndex == GELDRSKEL_HANDL_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->HandL);
    }
    if (limbIndex == GELDRSKEL_HANDR_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->HandR);
    }
    if (limbIndex == GELDRSKEL_HANDLCONT_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->HandLCont);
    }
    if (limbIndex == GELDRSKEL_HANDRCONT_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->HandRCont);
    }
    if (limbIndex == GELDRSKEL_FOOTL_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->leftFoot);
    }
    if (limbIndex == GELDRSKEL_FOOTR_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->rightFoot);
    }
    if ((((this->deathTimer > 24) && (this->deathTimer <= 27)) ||
         ((this->deathTimer > 29) && (this->deathTimer <= 33)) ||
         ((this->deathTimer > 43) && (this->deathTimer <= 45)))) {
        s32 i;
        Vec3f effPos;
        if (limbIndex == GELDRSKEL_HEAD_LIMB) {
            Matrix_MultVec3f(&zeroVec, &this->Head);
        }
        if (limbIndex == GELDRSKEL_ABDOMON_LIMB) {
            Matrix_MultVec3f(&zeroVec, &this->Chest);
        }
        if (limbIndex == GELDRSKEL_ARMR_LIMB) {
            Matrix_MultVec3f(&zeroVec, &this->ArmR);
        }
        if (limbIndex == GELDRSKEL_LEGR_LIMB) {
            Matrix_MultVec3f(&zeroVec, &this->LegR);
        }
        if (limbIndex == GELDRSKEL_LEGL_LIMB) {
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

    this->actor.focus.pos = this->Head;
}

void EnEldritch_Draw(EnEldritch* this, PlayState* play) {
    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    Player* player = GET_PLAYER(play);
    Gfx_SetupDL_25Opa(play->state.gfxCtx);

    gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, player->PlayerMadnessTimer);
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount, NULL,
                          EnEldritch_PostLimbDraw, this);
    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}

void EnEldritch_CheckDamage(EnEldritch* this, PlayState* play) {
    if (this->collider.base.acFlags & AC_HIT) {
        this->collider.base.acFlags &= ~AC_HIT;
        this->hurtboxCooldown = 20;
        if (this->alarmstate == 0) {
            this->timer = 40;
            this->cantSee = 0;
            this->alarmstate = 1;
            EnEldritch_SetupMoveF(this, play);
        }
        Actor_ApplyDamage(&this->actor);
        Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_RED, 255, COLORFILTER_BUFFLAG_OPA, 20);

        if (this->actor.colChkInfo.health == 0) {
            this->deathTimer = 160;
            Actor_PlaySfx(&this->actor, NA_SE_EN_REDEAD_DEAD);
            this->actor.gravity = 0;
            this->actor.world.pos.y += 6;
            this->actor.speed = 0;
            EnEldritch_SetupDeath(this, play);
        }
    }
}
void EnEldritch_SetupDeath(EnEldritch* this, PlayState* play) {
    EnEldritch_ChangeAnimation(this, ELDR_ANIM_DEATH);

    Enemy_StartFinishingBlow(play, &this->actor);
    this->actor.flags &= ~ACTOR_FLAG_0;

    this->actionFunc = EnEldritch_Death;
}

void EnEldritch_Death(EnEldritch* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);
                Player* player = GET_PLAYER(play);
    if     ((player->actor.parent == &this->actor) || (this->actor.child == &player->actor)) {

           player->actor.parent = NULL;
            this->actor.child = NULL;
            func_8002F71C(play, &this->actor, 2.0f, this->actor.yawTowardsPlayer, 1.0f);
    }
    if (this->deathTimer <= 0) {
        Item_DropCollectible(play, &this->actor.world.pos, ITEM00_RUPEE_RED);
        Item_DropCollectible(play, &this->actor.world.pos, ITEM00_RUPEE_RED);
        Item_DropCollectible(play, &this->actor.world.pos, ITEM00_RUPEE_RED);
        Actor_Kill(&this->actor);
    } else if (this->deathTimer > 0) {
        if (this->deathTimer < 60) {
            this->actor.shape.yOffset -= 1;
        }
        if ((this->skelAnime.curFrame == 34.0f) || (this->skelAnime.curFrame == 40.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_RIZA_DOWN);
        }
        this->deathTimer -= 1;
    }
}
void EnEldritch_ChangeAnimation(EnEldritch* this, s32 anim) {
    Animation_ChangeByInfo(&this->skelAnime, sAnimationInfo, anim);
}

void EnEldritch_ForwardBackCheck(EnEldritch* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    f32 RandNum = Rand_ZeroOne();
    s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    relYawTowardsPlayer = ABS(relYawTowardsPlayer);
    if ((this->alarmstate == 0) && (this->cantSee == 1)) {
        this->timer = 60;
        EnEldritch_SetupIdle(this, play);
        this->actor.speed = 0.0f;
    } else if (this->alarmstate == 1) {
        if (this->actor.xzDistToPlayer < 100.0f) {
            this->alarmstate = 1;
            this->actor.speed = 0.0f;

            if ((relYawTowardsPlayer < 0x1500) && (RandNum > 0.5)) {
                this->timer = 22;
                EnEldritch_SetupAttackDa(this, play);
            } else {
                this->timer = 45;
                EnEldritch_SetupAttackB(this, play);
            }
        } else if ((this->actor.xzDistToPlayer >= 100.0f) && (this->actor.xzDistToPlayer < 700.0f)) {
            this->alarmstate = 1;
            this->timer = 40;
            EnEldritch_SetupMoveF(this, play);
        } else {
            this->alarmstate = 0;
            this->timer = 40;
            EnEldritch_SetupIdle(this, play);
            this->actor.speed = 0.0f;
        }
    }
}
void EnEldritch_SetupIdle(EnEldritch* this, PlayState* play) {
    EnEldritch_ChangeAnimation(this, ELDR_ANIM_IDLE);
    this->actionFunc = EnEldritch_Idle;
}

void EnEldritch_Idle(EnEldritch* this, PlayState* play) {
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
            EnEldritch_ForwardBackCheck(this, play);
        }
        this->timer -= 1;
    }
    if (this->timer <= 0) {
        if (Rand_ZeroOne() < 0.5f) {
            this->timer = 39;

            EnEldritch_SetupIdle(this, play);
        } else if (Rand_ZeroOne() < 0.5f) {
            this->timer = 100;
            EnEldritch_SetupIdle2(this, play);
        } else {
            this->timer = 124;
            EnEldritch_SetupIdle3(this, play);
        }
    }
}
void EnEldritch_SetupIdleP(EnEldritch* this, PlayState* play) {
    EnEldritch_ChangeAnimation(this, ELDR_ANIM_IDLE);
    this->actionFunc = EnEldritch_IdleP;
}

void EnEldritch_IdleP(EnEldritch* this, PlayState* play) {
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
            EnEldritch_ForwardBackCheck(this, play);
        }
        this->timer -= 1;
    }

    if (this->timer <= 0) {
        this->timer = 40 * this->actor.params;
        EnEldritch_SetupMoveFP(this, play);
    }
}
void EnEldritch_SetupIdle2(EnEldritch* this, PlayState* play) {
    EnEldritch_ChangeAnimation(this, ELDR_ANIM_IDLE2);
    this->actionFunc = EnEldritch_Idle3;
}

void EnEldritch_SetupIdle3(EnEldritch* this, PlayState* play) {
    EnEldritch_ChangeAnimation(this, ELDR_ANIM_IDLE3);
    this->actionFunc = EnEldritch_Idle3;
}

void EnEldritch_Idle3(EnEldritch* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        relYawTowardsPlayer = ABS(relYawTowardsPlayer);
        if (((relYawTowardsPlayer < 0x2388) ||
             ((this->actor.xzDistToPlayer < 300.0f) && (player->meleeWeaponState != 0))) &&
            (this->actor.xzDistToPlayer < 900.0f * gGangaState.LightIndexStealthModifier) && (this->cantSee == 0)) {
            this->timer = 0;
            this->alarmstate = 1;
            EnEldritch_ForwardBackCheck(this, play);
        }
        this->timer -= 1;
    }

    if (this->timer <= 0) {
        this->timer = 39;
        EnEldritch_SetupIdle(this, play);
    }
}

void EnEldritch_SetupMoveF(EnEldritch* this, PlayState* play) {
    this->actionFunc = EnEldritch_MoveF;
    EnEldritch_ChangeAnimation(this, ELDR_ANIM_WALK);
}

void EnEldritch_MoveF(EnEldritch* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
    if ((this->timer > 0) && (this->actor.xzDistToPlayer >= 80.0f)) {
        this->actor.speed = 3.0f;
        if (this->skelAnime.curFrame == 20.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_J_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->leftFoot, 10.0f, 3, 2.0f, 200, 15, false);
        } else if (this->skelAnime.curFrame == 1.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_J_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->rightFoot, 10.0f, 3, 2.0f, 200, 15, false);
        }
        this->timer -= 1;
        Player* player = GET_PLAYER(play);

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        EnEldritch_ForwardBackCheck(this, play);
    }
}

void EnEldritch_SetupMoveFP(EnEldritch* this, PlayState* play) {
    EnEldritch_ChangeAnimation(this, ELDR_ANIM_WALK);
    this->actor.world.rot.y = this->actor.world.rot.y + 0x8000;
    this->actionFunc = EnEldritch_MoveFP;
}

void EnEldritch_MoveFP(EnEldritch* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.world.rot.y, 1, 0xAAF, 1);
    if ((this->timer > 0) && (this->actor.xzDistToPlayer >= 90.0f)) {
        this->actor.speed = 3.0f;
        this->timer -= 1;
        if (this->skelAnime.curFrame == 20.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_J_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->leftFoot, 10.0f, 3, 2.0f, 200, 15, false);
        } else if (this->skelAnime.curFrame == 1.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_J_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->rightFoot, 10.0f, 3, 2.0f, 200, 15, false);
        }
        Player* player = GET_PLAYER(play);
        s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        relYawTowardsPlayer = ABS(relYawTowardsPlayer);
        if (((relYawTowardsPlayer < 0x2388) ||
             ((this->actor.xzDistToPlayer < 300.0f) && (player->meleeWeaponState != 0))) &&
            (this->actor.xzDistToPlayer < 700.0f * (gGangaState.LightIndexStealthModifier * 2)) &&
            (this->cantSee == 0)) {
            this->timer = 0;
            this->alarmstate = 1;
            EnEldritch_ForwardBackCheck(this, play);
        }
    } else {
        this->timer = 60;
        this->actor.speed = 0.0f;
        EnEldritch_SetupIdleP(this, play);
    }
}

void EnEldritch_SetupAttackB(EnEldritch* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnEldritch_ChangeAnimation(this, ELDR_ANIM_ATTACK);
    this->actionFunc = EnEldritch_AttackB;
}

void EnEldritch_AttackB(EnEldritch* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAAF, 1);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    if (this->skelAnime.curFrame == 15) {
        EnEldritch_Scream(this, play);
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    }

    if (this->timer > 0) {
        if (this->skelAnime.curFrame < 12.0f) {
            this->actor.speed = 3.0f;
            if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y)) {
                this->actor.world.pos = this->actor.prevPos;
            }
        } else {

            this->actor.speed = 0.0f;
        }
        if (this->skelAnime.curFrame == 10.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_J_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->leftFoot, 10.0f, 3, 2.0f, 200, 15, false);
        } else if (this->skelAnime.curFrame == 23.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_J_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->rightFoot, 10.0f, 3, 2.0f, 200, 15, false);
        }
        this->timer -= 1;

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        EnEldritch_ForwardBackCheck(this, play);
    }
}

void EnEldritch_SetupAttackDa(EnEldritch* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnEldritch_ChangeAnimation(this, ELDR_ANIM_ATTACKB);
    this->actionFunc = EnEldritch_AttackDa;
}

void EnEldritch_AttackDa(EnEldritch* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);
            Player* player = GET_PLAYER(play);
    s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    relYawTowardsPlayer = ABS(relYawTowardsPlayer);
    if (this->skelAnime.curFrame < 14.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
    }
    if (this->skelAnime.curFrame == 13.0f) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_J_WALK);
        Actor_SpawnFloorDustRing(play, &this->actor, &this->leftFoot, 10.0f, 3, 2.0f, 200, 15, false);
    } else if (this->skelAnime.curFrame == 21.0f) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_J_WALK);
        Actor_SpawnFloorDustRing(play, &this->actor, &this->rightFoot, 10.0f, 3, 2.0f, 200, 15, false);
    }
    if (this->timer > 0) {
        if (this->skelAnime.curFrame < 16.0f) {
            this->actor.speed = 3.0f;
            if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y)) {
                this->actor.world.pos = this->actor.prevPos;
            }
        } else {

            this->actor.speed = 0.0f;
        }
        if ((this->skelAnime.curFrame >= 18.0f) && (this->actor.xzDistToPlayer <= 80) &&
            (relYawTowardsPlayer < 0x1000) && (fabsf(player->actor.world.pos.y - this->actor.world.pos.y) <= 100.0f)) {
            this->actor.speed = 0.0f;
            this->timer = 54;
            EnEldritch_SetupAttackDb(this, play);
            player->invincibilityTimer = 0;
        }
        this->timer -= 1;


    } else {
        this->timer = 15;
        EnEldritch_SetupAttackDc(this, play);
    }
}

void EnEldritch_SetupAttackDb(EnEldritch* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnEldritch_ChangeAnimation(this, ELDR_ANIM_ATTACKBHIT);
    this->actionFunc = EnEldritch_AttackDb;
    Player* player = GET_PLAYER(play);
    play->grabPlayer(play, player);
    player->actor.parent = &this->actor;
    this->actor.child = &player->actor;
}

void EnEldritch_AttackDb(EnEldritch* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    Vec3f pos;
    pos.x = player->actor.world.pos.x;
    pos.y = player->actor.world.pos.y + 65.0f;
    pos.z = player->actor.world.pos.z;
    Vec3f result = EnEldritch_VectorBetween(this->HandR, this->HandL);
    SkelAnime_Update(&this->skelAnime);
    if ((this->skelAnime.curFrame == 26) || (this->skelAnime.curFrame == 11)) {
        play->damagePlayer(play, -40);
        Actor_PlaySfx(&this->actor, NA_SE_EN_DEADHAND_BITE);
        CollisionCheck_SpawnRedBlood(play, &pos);
    }
    if (this->timer > 0) {
        this->actor.speed = 0.0f;
        this->timer -= 1;

        Math_ApproachF(&player->actor.world.pos.x, result.x, 1.0f, 30.0f);
        Math_ApproachF(&player->actor.world.pos.z, result.z, 1.0f, 30.0f);
        if ((this->skelAnime.curFrame == 30) || (this->actionFunc == EnEldritch_Death)) {
            player->actor.parent = NULL;
            this->actor.child = NULL;
            func_8002F71C(play, &this->actor, 2.0f, this->actor.yawTowardsPlayer, 1.0f);
        }
    } else {
        EnEldritch_ForwardBackCheck(this, play);
    }
}

void EnEldritch_SetupAttackDc(EnEldritch* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnEldritch_ChangeAnimation(this, ELDR_ANIM_ATTACKBMISS);
    this->actionFunc = EnEldritch_AttackDc;
}

void EnEldritch_AttackDc(EnEldritch* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        this->actor.speed = 0.0f;
        this->timer -= 1;

    } else {
        EnEldritch_ForwardBackCheck(this, play);
    }
}
void EnEldritch_Scream(EnEldritch* this, PlayState* play) {
    f32 Rand = Rand_ZeroOne();
    if (Rand < 0.1) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_REDEAD_CRY);
    }
}