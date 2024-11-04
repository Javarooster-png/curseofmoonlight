#include "z_En_Zomb.h"
#include "terminal.h"
#define FLAGS (ACTOR_FLAG_0 | ACTOR_FLAG_2 | ACTOR_FLAG_4 | ACTOR_FLAG_5)
void EnZomb_Init(EnZomb* this, PlayState* play);
void EnZomb_Destroy(EnZomb* this, PlayState* play);
void EnZomb_Update(EnZomb* this, PlayState* play);
void EnZomb_Draw(EnZomb* this, PlayState* play);
void EnZomb_MoveR(EnZomb* this, PlayState* play);
void EnZomb_SetupMoveR(EnZomb* this, PlayState* play);
void EnZomb_MoveL(EnZomb* this, PlayState* play);
void EnZomb_SetupMoveL(EnZomb* this, PlayState* play);
void EnZomb_MoveF(EnZomb* this, PlayState* play);
void EnZomb_SetupMoveF(EnZomb* this, PlayState* play);
void EnZomb_MoveFP(EnZomb* this, PlayState* play);
void EnZomb_SetupMoveFP(EnZomb* this, PlayState* play);
void EnZomb_Stagger(EnZomb* this, PlayState* play);
void EnZomb_SetupStagger(EnZomb* this, PlayState* play);
void EnZomb_ForwardBackCheck(EnZomb* this, PlayState* play);
void EnZomb_SetupAttackB(EnZomb* this, PlayState* play);
void EnZomb_AttackB(EnZomb* this, PlayState* play);
void EnZomb_SetupAttackDa(EnZomb* this, PlayState* play);
void EnZomb_AttackDa(EnZomb* this, PlayState* play);
void EnZomb_SetupAttackDc(EnZomb* this, PlayState* play);
void EnZomb_AttackDc(EnZomb* this, PlayState* play);
void EnZomb_SetupAttackDb(EnZomb* this, PlayState* play);
void EnZomb_AttackDb(EnZomb* this, PlayState* play);
void EnZomb_SetupWaitToRise(EnZomb* this, PlayState* play);
void EnZomb_WaitToRise(EnZomb* this, PlayState* play);
void EnZomb_SetupRiseA(EnZomb* this, PlayState* play);
void EnZomb_RiseA(EnZomb* this, PlayState* play);
void EnZomb_SetupRiseB(EnZomb* this, PlayState* play);
void EnZomb_RiseB(EnZomb* this, PlayState* play);
void EnZomb_SetupRiseC(EnZomb* this, PlayState* play);
void EnZomb_RiseC(EnZomb* this, PlayState* play);
void EnZomb_SetupIdle(EnZomb* this, PlayState* play);
void EnZomb_Idle(EnZomb* this, PlayState* play);
void EnZomb_SetupIdleW(EnZomb* this, PlayState* play);
void EnZomb_IdleW(EnZomb* this, PlayState* play);
void EnZomb_SetupIdleP(EnZomb* this, PlayState* play);
void EnZomb_IdleP(EnZomb* this, PlayState* play);
void EnZomb_SetupIdle2(EnZomb* this, PlayState* play);
void EnZomb_Idle2(EnZomb* this, PlayState* play);
s32 EnZomb_OverrideLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx,
                            Gfx** Gfx);
void EnZomb_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx, Gfx** Gfx);
void EnZomb_ChangeAnimation(EnZomb* this, s32 anim);
void EnZomb_CheckDamage(EnZomb* this, PlayState* play);
void EnZomb_SetupDeath(EnZomb* this, PlayState* play);
void EnZomb_Death(EnZomb* this, PlayState* play);
void EnZomb_Scream(EnZomb* this, PlayState* play);

ActorInit En_Zomb_InitVars = {
    /**/ ACTOR_ZOMB,
    /**/ ACTORCAT_ENEMY,
    /**/ FLAGS,
    /**/ OBJECT_ZOMB,
    /**/ sizeof(EnZomb),
    /**/ (ActorFunc)EnZomb_Init,
    /**/ (ActorFunc)EnZomb_Destroy,
    /**/ (ActorFunc)EnZomb_Update,
    /**/ (ActorFunc)EnZomb_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        .colType = COLTYPE_HIT6,
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
    { .radius = 25, .height = 60, .yShift = 0, .pos = { 0, 0, 0,} },
};

static CollisionCheckInfoInit2 sColChkInit = {
    .health = 7,
    .mass = MASS_HEAVY,
    .cylHeight = 60.0f,
    .cylRadius = 25.0f,
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
        { GZOMBIESKEL_HAND_R_LIMB, { { 0, 0, 0 }, 35 }, 50 },
    },
};
typedef struct {
    float a;
} Alpha;
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
    ZOMB_ANIM_IDLE = 0,
    ZOMB_ANIM_RISEGRAB,
    ZOMB_ANIM_RISEGRABMISS,
    ZOMB_ANIM_RISEGRABHIT,
    ZOMB_ANIM_WALK,
    ZOMB_ANIM_ATTACKA,
    ZOMB_ANIM_ATTACKB,
    ZOMB_ANIM_ATTACKBMISS,
    ZOMB_ANIM_ATTACKBHIT,
    ZOMB_ANIM_DEATH,
    ZOMB_ANIM_STAGGER,
    ZOMB_ANIM_MAX
} SZombAnim;

static AnimationInfo sAnimationInfo[ZOMB_ANIM_MAX] = {
    { &gzombieskelIdlesulkAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 3.0f },
    { &gzombieskelGrabfrombelowAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gzombieskelGrabfrombelowmissAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gzombieskelGrabfrombelowhitAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gzombieskelWalkAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 5.0f },
    { &gzombieskelWalkattackAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 5.0f },
    { &gzombieskelAttackAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 4.0f },
    { &gzombieskelAttackmissAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gzombieskelAttackhitAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gzombieskelDeathAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 4.0f },
    { &gzombieskelStaggerAnim, 2.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 2.0f },
};

typedef enum {
    /* 0x0 */ ZOMB_DMGEFF_NORMAL,
    /* 0x1 */ ZOMB_DMGEFF_STUN,
    /* 0x6 */ ZOMB_DMGEFF_FIREMAGIC = 6,
    /* 0xD */ ZOMB_DMGEFF_SLING = 0xD,
    /* 0xE */ ZOMB_DMGEFF_LIGHT,
    /* 0xF */ ZOMB_DMGEFF_FREEZE
} ZombDamageEffect;

static DamageTable sDamageTable = {
    /* Deku nut      */ DMG_ENTRY(12, ZOMB_DMGEFF_NORMAL),
    /* Deku stick    */ DMG_ENTRY(2, ZOMB_DMGEFF_NORMAL),
    /* Slingshot     */ DMG_ENTRY(0, ZOMB_DMGEFF_SLING),
    /* Explosive     */ DMG_ENTRY(4, ZOMB_DMGEFF_NORMAL),
    /* Boomerang     */ DMG_ENTRY(0, ZOMB_DMGEFF_STUN),
    /* Normal arrow  */ DMG_ENTRY(1, ZOMB_DMGEFF_NORMAL),
    /* Hammer swing  */ DMG_ENTRY(2, ZOMB_DMGEFF_NORMAL),
    /* Hookshot      */ DMG_ENTRY(0, ZOMB_DMGEFF_STUN),
    /* Kokiri sword  */ DMG_ENTRY(1, ZOMB_DMGEFF_NORMAL),
    /* Master sword  */ DMG_ENTRY(1, ZOMB_DMGEFF_NORMAL),
    /* Giant's Knife */ DMG_ENTRY(2, ZOMB_DMGEFF_NORMAL),
    /* Fire arrow    */ DMG_ENTRY(0, ZOMB_DMGEFF_NORMAL),
    /* Ice arrow     */ DMG_ENTRY(0, ZOMB_DMGEFF_FREEZE),
    /* Light arrow   */ DMG_ENTRY(2, ZOMB_DMGEFF_LIGHT),
    /* Unk arrow 1   */ DMG_ENTRY(0, ZOMB_DMGEFF_NORMAL),
    /* Unk arrow 2   */ DMG_ENTRY(0, ZOMB_DMGEFF_NORMAL),
    /* Unk arrow 3   */ DMG_ENTRY(0, ZOMB_DMGEFF_NORMAL),
    /* Fire magic    */ DMG_ENTRY(0, ZOMB_DMGEFF_FIREMAGIC),
    /* Ice magic     */ DMG_ENTRY(3, ZOMB_DMGEFF_FREEZE),
    /* Light magic   */ DMG_ENTRY(0, ZOMB_DMGEFF_LIGHT),
    /* Shield        */ DMG_ENTRY(0, ZOMB_DMGEFF_NORMAL),
    /* Mirror Ray    */ DMG_ENTRY(0, ZOMB_DMGEFF_NORMAL),
    /* Kokiri spin   */ DMG_ENTRY(1, ZOMB_DMGEFF_NORMAL),
    /* Giant spin    */ DMG_ENTRY(2, ZOMB_DMGEFF_NORMAL),
    /* Master spin   */ DMG_ENTRY(1, ZOMB_DMGEFF_NORMAL),
    /* Kokiri jump   */ DMG_ENTRY(1, ZOMB_DMGEFF_NORMAL),
    /* Giant jump    */ DMG_ENTRY(4, ZOMB_DMGEFF_NORMAL),
    /* Master jump   */ DMG_ENTRY(2, ZOMB_DMGEFF_NORMAL),
    /* Unknown 1     */ DMG_ENTRY(0, ZOMB_DMGEFF_NORMAL),
    /* Unblockable   */ DMG_ENTRY(0, ZOMB_DMGEFF_NORMAL),
    /* Hammer jump   */ DMG_ENTRY(2, ZOMB_DMGEFF_NORMAL),
    /* Unknown 2     */ DMG_ENTRY(0, ZOMB_DMGEFF_NORMAL),
};

void EnZomb_Init(EnZomb* this, PlayState* play) {
    Actor_ProcessInitChain(&this->actor, sInitChain);
    this->alarmstate = 0;
    this->cantSee = 1;
    this->canDodge = 1;
    gGangaState.grabstate = 0;
    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 25.0f);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    Collider_InitCylinder(play, &this->collider);
    SkelAnime_InitFlex(play, &this->skelAnime, &gzombieskel, &gzombieskelGrabfrombelowAnim, this->jointTable,
                       this->morphTable, GZOMBIESKEL_NUM_LIMBS);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &sDamageTable, &sColChkInit);
    Collider_InitJntSph(play, &this->colliderSpheres);
    Collider_SetJntSph(play, &this->colliderSpheres, &this->actor, &sJntSphInit, this->colliderSpheresElements);
    if (this->actor.params == 1) {
        this->timer = 60;
        EnZomb_SetupIdle(this, play);
        this->actor.speed = 0.0f;
    } else if (this->actor.params == 0) {
        this->timer = 60;
        EnZomb_SetupWaitToRise(this, play);
        this->actor.speed = 0.0f;
    } else {

        this->timer = 60;
        EnZomb_SetupIdleP(this, play);
        this->actor.speed = 0.0f;
    }
}
Vec3f zomb_vector_between(Vec3f a, Vec3f b) {
    Vec3f result;
    result.x = (a.x + b.x) / 2.0f;
    result.y = (a.y + b.y) / 2.0f;
    result.z = (a.z + b.z) / 2.0f;
    return result;
}
void EnZomb_SetupWaitToRise(EnZomb* this, PlayState* play) {
    EnZomb_ChangeAnimation(this, ZOMB_ANIM_RISEGRAB);
    this->actionFunc = EnZomb_WaitToRise;
}

void EnZomb_WaitToRise(EnZomb* this, PlayState* play) {

    Player* player = GET_PLAYER(play);

    if (this->actor.xzDistToPlayer <= 200) {
        this->timer = 8;
        EnZomb_SetupRiseA(this, play);
        this->actor.world.pos.x = player->actor.world.pos.x - 10.0f;
        this->actor.world.pos.z = player->actor.world.pos.z;
        this->actor.world.pos.y = player->actor.world.pos.y;
    }
}
void EnZomb_SetupRiseA(EnZomb* this, PlayState* play) {
    EnZomb_ChangeAnimation(this, ZOMB_ANIM_RISEGRAB);
    this->actionFunc = EnZomb_RiseA;
}

void EnZomb_RiseA(EnZomb* this, PlayState* play) {

    Player* player = GET_PLAYER(play);

    SkelAnime_Update(&this->skelAnime);
    s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    relYawTowardsPlayer = ABS(relYawTowardsPlayer);
    if (this->skelAnime.curFrame < 14.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
    }
    if (this->timer > 0) {
        if ((this->timer < 4.0f) && (this->actor.xzDistToPlayer <= 50) && (play->grabPlayer(play, player)) && (fabsf(player->actor.world.pos.y - this->actor.world.pos.y) <= 100.0f)) {
            this->actor.speed = 0.0f;
            this->timer = 66;
            EnZomb_SetupRiseB(this, play);
            Player* player = GET_PLAYER(play);
            player->actor.parent = &this->actor;
        }
        this->timer -= 1;
        Player* player = GET_PLAYER(play);

    } else {
        this->timer = 61;
        EnZomb_SetupRiseC(this, play);
    }
}
void EnZomb_SetupRiseB(EnZomb* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnZomb_ChangeAnimation(this, ZOMB_ANIM_RISEGRABHIT);
    this->actionFunc = EnZomb_RiseB;
    Player* player = GET_PLAYER(play);
}

void EnZomb_RiseB(EnZomb* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    Vec3f pos;
    pos.x = player->actor.world.pos.x;
    pos.y = player->actor.world.pos.y + 15.0f;
    pos.z = player->actor.world.pos.z;

    Vec3f result = zomb_vector_between(this->HandR, this->HandL);
    SkelAnime_Update(&this->skelAnime);
    if ((this->skelAnime.curFrame == 18) || (this->skelAnime.curFrame == 11)) {
        play->damagePlayer(play, -4);
        Actor_PlaySfx(&this->actor, NA_SE_EN_DEADHAND_BITE);
        CollisionCheck_SpawnRedBlood(play, &pos);
    }
    if ((this->skelAnime.curFrame == 51.0f) || (this->skelAnime.curFrame == 68.0f)) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_RIZA_WALK);
    }
    if (this->timer > 0) {
        this->actor.speed = 0.0f;
        this->timer -= 1;
        if (this->skelAnime.curFrame < 22) {
            Math_ApproachF(&player->actor.world.pos.x, result.x, 1.0f, 30.0f);
            Math_ApproachF(&player->actor.world.pos.z, result.z, 1.0f, 30.0f);
        }
        if ((this->skelAnime.curFrame == 22) || (this->actionFunc == EnZomb_Death)) {

            player->actor.parent = NULL;
            player->av2.actionVar2 = 200;
            this->alarmstate = 1;
        }
    } else {
        EnZomb_ForwardBackCheck(this, play);
    }
}

void EnZomb_SetupRiseC(EnZomb* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnZomb_ChangeAnimation(this, ZOMB_ANIM_RISEGRABMISS);
    this->actionFunc = EnZomb_RiseC;
}

void EnZomb_RiseC(EnZomb* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        this->actor.speed = 0.0f;
        this->timer -= 1;
        this->alarmstate = 1;
    } else {
        EnZomb_ForwardBackCheck(this, play);
    }
}
void EnZomb_Destroy(EnZomb* this, PlayState* play) {
    Collider_DestroyCylinder(play, &this->collider);
    Collider_DestroyJntSph(play, &this->colliderSpheres);
}

void EnZomb_Update(EnZomb* this, PlayState* play) {
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
    EnZomb_CheckDamage(this, play);

    Actor_UpdateBgCheckInfo(play, &this->actor, this->collider.dim.radius, this->collider.dim.height * 0.5f, 0.0f,
                            UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2);
    if ((this->actionFunc == EnZomb_AttackB) && (this->skelAnime.curFrame > 6.0f) &&
        (this->skelAnime.curFrame < 14.0f)) {
        CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSpheres.base);
    }
    if ((this->actionFunc != EnZomb_Death) && (this->actionFunc != EnZomb_RiseA) &&
        (this->actionFunc != EnZomb_WaitToRise) && (this->actionFunc != EnZomb_AttackDb) &&
        (this->actionFunc != EnZomb_RiseB)) {
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
    if ((this->actor.xzDistToPlayer < 900.0f * (gGangaState.LightIndexStealthModifier * 2)) &&
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

    if (((play->gameplayFrames & 0x5F) == 0) && (this->actionFunc != EnZomb_Death)) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_REDEAD_CRY);
    }
    targetFaceRotY = Actor_WorldYawTowardActor(&this->actor, &GET_PLAYER(play)->actor) - this->actor.shape.rot.y;
    targetFaceRotX = Actor_WorldPitchTowardActor(&this->actor, &GET_PLAYER(play)->actor) - this->actor.shape.rot.x;
    Math_ApproachS(&this->headRoty, targetFaceRotY, 3, 0x7D0);
    this->headRoty = CLAMP(this->headRoty, -12000, 12000);
    Math_ApproachS(&this->headRotx, targetFaceRotX, 3, 0x7D0);
    this->headRotx = CLAMP(this->headRotx, -6000, 6000);
}

Alpha lerpColor2(const Alpha* start, const Alpha* end, float t) {
    Alpha result;
    result.a = start->a + t * (end->a - start->a);
    return result;
}

void EnZomb_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx, Gfx** Gfx) {
    EnZomb* this = (EnZomb*)thisx;
    Collider_UpdateSpheres(limbIndex, &this->colliderSpheres);
    Vec3f zeroVec = { 0.0f, 0.0f, 0.0f };

    if (limbIndex == GZOMBIESKEL_HEAD_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->Head);
    }

    if (limbIndex == GZOMBIESKEL_HAND_L_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->HandL);
    }
    if (limbIndex == GZOMBIESKEL_HAND_R_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->HandR);
    }
    this->actor.focus.pos = this->Head;
}

void EnZomb_Draw(EnZomb* this, PlayState* play) {
    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    static const Alpha AlphO = { 0 };
    static const Alpha Alph1 = { 255 };
    Alpha A;
    if ((this->actionFunc != EnZomb_Death) || (this->deathTimer > 60)) {
        SkelAnime_DrawChad(play, &this->skelAnime, EnZomb_OverrideLimbDraw, EnZomb_PostLimbDraw, &this->actor, 255, 0);
    } else {
        float t = this->deathTimer / 60.0f; // scale to 0-1 for interpolation
        A = lerpColor2(&AlphO, &Alph1, t);
        SkelAnime_DrawChad(play, &this->skelAnime, EnZomb_OverrideLimbDraw, EnZomb_PostLimbDraw, &this->actor, A.a, 0);
    }
    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}

void EnZomb_CheckDamage(EnZomb* this, PlayState* play) {
    if (this->collider.base.acFlags & AC_HIT) {
        this->collider.base.acFlags &= ~AC_HIT;
        this->hurtboxCooldown = 20;
        if (this->alarmstate == 0) {
            this->timer = 18;
            this->cantSee = 0;
            this->alarmstate = 1;
            EnZomb_SetupMoveF(this, play);
        }
        Actor_ApplyDamage(&this->actor);
        Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_RED, 255, COLORFILTER_BUFFLAG_OPA, 20);

        if (this->actor.colChkInfo.health == 0) {
            this->deathTimer = 160;
            Actor_PlaySfx(&this->actor, NA_SE_EN_REDEAD_DEAD);
            this->actor.gravity = 0;
            this->actor.world.pos.y += 6;
            this->actor.speed = 0;
            EnZomb_SetupDeath(this, play);
        } else {
            Actor_PlaySfx(&this->actor, NA_SE_EN_REDEAD_DAMAGE);
            this->timer = 9;
            EnZomb_SetupStagger(this, play);
        }
    }
}
void EnZomb_SetupDeath(EnZomb* this, PlayState* play) {
    EnZomb_ChangeAnimation(this, ZOMB_ANIM_DEATH);

    Enemy_StartFinishingBlow(play, &this->actor);
    this->actor.flags &= ~ACTOR_FLAG_0;

    this->actionFunc = EnZomb_Death;
}

void EnZomb_Death(EnZomb* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
                Player* player = GET_PLAYER(play);
    if     ((player->actor.parent == &this->actor) || (this->actor.child == &player->actor)) {

           player->actor.parent = NULL;
            this->actor.child = NULL;
            func_8002F71C(play, &this->actor, 2.0f, this->actor.yawTowardsPlayer, 1.0f);
    }
    if (this->deathTimer <= 0) {
        
        Item_DropCollectibleRandom(play, &this->actor, &this->actor.world.pos, 0x10);
        Actor_Kill(&this->actor);
    } else if (this->deathTimer > 0) {
        if (this->deathTimer < 60) {
            this->actor.shape.yOffset -= 1;
        }
        if ((this->skelAnime.curFrame == 34.0f) || (this->skelAnime.curFrame == 43.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_RIZA_DOWN);
        }
        this->deathTimer -= 1;
    }
}
void EnZomb_ChangeAnimation(EnZomb* this, s32 anim) {
    Animation_ChangeByInfo(&this->skelAnime, sAnimationInfo, anim);
}
s32 EnZomb_OverrideLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx,
                            Gfx** Gfx) {
    EnZomb* this = (EnZomb*)thisx;
    Vec3f zero = { 0.0f, 0.0f, 0.0f };
    if ((this->alarmstate == 1) && (limbIndex == GZOMBIESKEL_HEAD_LIMB)) {
        rot->x += this->headRotx;
        rot->y += this->headRoty;
    }
    return false;
}

void EnZomb_ForwardBackCheck(EnZomb* this, PlayState* play) {

    Player* player = GET_PLAYER(play);
    f32 RandNum = Rand_ZeroOne();
    s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    relYawTowardsPlayer = ABS(relYawTowardsPlayer);
    if ((this->alarmstate == 0) && (this->cantSee == 1)) {
        this->timer = 60;
        EnZomb_SetupIdle(this, play);
        this->actor.speed = 0.0f;
    } else if (this->alarmstate == 1) {
        if (this->actor.xzDistToPlayer < 80.0f) {
            this->alarmstate = 1;
            this->actor.speed = 0.0f;

            if ((relYawTowardsPlayer < 0x1500) && (RandNum > 0.5) && (player->invincibilityTimer == 0)) {
                this->timer = 21;
                EnZomb_SetupAttackDa(this, play);
            } else if (player->invincibilityTimer == 0) {
                this->timer = 23;
                EnZomb_SetupAttackB(this, play);
            } else {
                this->timer = 60;
                EnZomb_SetupIdleW(this, play);
            }
        } else if ((this->actor.xzDistToPlayer >= 80.0f) && (this->actor.xzDistToPlayer < 600.0f)) {
            this->alarmstate = 1;
            this->timer = 18;
            EnZomb_SetupMoveF(this, play);
        } else {
            this->alarmstate = 0;
            this->timer = 60;
            EnZomb_SetupIdle(this, play);
            this->actor.speed = 0.0f;
        }
    }
}
void EnZomb_SetupIdle(EnZomb* this, PlayState* play) {
    EnZomb_ChangeAnimation(this, ZOMB_ANIM_IDLE);
    this->actionFunc = EnZomb_Idle;
}

void EnZomb_Idle(EnZomb* this, PlayState* play) {

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
            EnZomb_ForwardBackCheck(this, play);
        }
        this->timer -= 1;
    }
    if (this->timer <= 0) {
        this->timer = 60;

        EnZomb_SetupIdle(this, play);
    }
}
void EnZomb_SetupIdleW(EnZomb* this, PlayState* play) {
    EnZomb_ChangeAnimation(this, ZOMB_ANIM_IDLE);
    this->actionFunc = EnZomb_IdleW;
}

void EnZomb_IdleW(EnZomb* this, PlayState* play) {

    Player* player = GET_PLAYER(play);

    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        relYawTowardsPlayer = ABS(relYawTowardsPlayer);
        if (player->invincibilityTimer == 0) {
            this->timer = 0;
            this->alarmstate = 1;
            EnZomb_ForwardBackCheck(this, play);
        }
        this->timer -= 1;
    }
    if (this->timer <= 0) {

        EnZomb_ForwardBackCheck(this, play);
    }
}
void EnZomb_SetupIdleP(EnZomb* this, PlayState* play) {
    EnZomb_ChangeAnimation(this, ZOMB_ANIM_IDLE);
    this->actionFunc = EnZomb_IdleP;
}

void EnZomb_IdleP(EnZomb* this, PlayState* play) {

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
            EnZomb_ForwardBackCheck(this, play);
        }
        this->timer -= 1;
    }

    if (this->timer <= 0) {
        this->timer = 18 * this->actor.params;
        EnZomb_SetupMoveFP(this, play);
    }
}

void EnZomb_SetupMoveF(EnZomb* this, PlayState* play) {
    this->actionFunc = EnZomb_MoveF;
    EnZomb_ChangeAnimation(this, ZOMB_ANIM_WALK);
}

void EnZomb_MoveF(EnZomb* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
    if ((this->timer > 0) && (this->actor.xzDistToPlayer >= 80.0f)) {
        this->actor.speed = 3.0f;
        if ((this->skelAnime.curFrame == 12.0f) || (this->skelAnime.curFrame == 2.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_RIZA_WALK);
        }
        this->timer -= 1;
        Player* player = GET_PLAYER(play);

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        EnZomb_ForwardBackCheck(this, play);
    }
}

void EnZomb_SetupStagger(EnZomb* this, PlayState* play) {
    this->actionFunc = EnZomb_Stagger;
    EnZomb_ChangeAnimation(this, ZOMB_ANIM_STAGGER);
}

void EnZomb_Stagger(EnZomb* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
    if (this->timer > 0) {
        this->actor.speed = 0.0f;
        this->timer -= 1;
        Player* player = GET_PLAYER(play);

    } else {
        EnZomb_ForwardBackCheck(this, play);
    }
}

void EnZomb_SetupMoveFP(EnZomb* this, PlayState* play) {
    EnZomb_ChangeAnimation(this, ZOMB_ANIM_WALK);
    this->actor.world.rot.y = this->actor.world.rot.y + 0x8000;
    this->actionFunc = EnZomb_MoveFP;
}

void EnZomb_MoveFP(EnZomb* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.world.rot.y, 1, 0xAAF, 1);
    if ((this->timer > 0) && (this->actor.xzDistToPlayer >= 90.0f)) {
        this->actor.speed = 3.0f;
        this->timer -= 1;
        if ((this->skelAnime.curFrame == 12.0f) || (this->skelAnime.curFrame == 0.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_RIZA_WALK);
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
            EnZomb_ForwardBackCheck(this, play);
        }
    } else {
        this->timer = 60;
        this->actor.speed = 0.0f;
        EnZomb_SetupIdleP(this, play);
    }
}

void EnZomb_SetupAttackB(EnZomb* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnZomb_ChangeAnimation(this, ZOMB_ANIM_ATTACKA);
    this->actionFunc = EnZomb_AttackB;
}

void EnZomb_AttackB(EnZomb* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAAF, 1);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    if (this->skelAnime.curFrame == 15) {
        EnZomb_Scream(this, play);
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
        if ((this->skelAnime.curFrame == 12.0f) || (this->skelAnime.curFrame == 7.0f)) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_RIZA_WALK);
        }
        this->timer -= 1;
        Player* player = GET_PLAYER(play);

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        EnZomb_ForwardBackCheck(this, play);
    }
}

void EnZomb_SetupAttackDa(EnZomb* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnZomb_ChangeAnimation(this, ZOMB_ANIM_ATTACKB);
    this->actionFunc = EnZomb_AttackDa;
    this->canDodge = 0;
}

void EnZomb_AttackDa(EnZomb* this, PlayState* play) {
            Player* player = GET_PLAYER(play);
    SkelAnime_Update(&this->skelAnime);
    s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    relYawTowardsPlayer = ABS(relYawTowardsPlayer);
    if (this->skelAnime.curFrame < 14.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
    }
    if ((this->skelAnime.curFrame == 20.0f) || (this->skelAnime.curFrame == 7.0f)) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_RIZA_WALK);
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
        if ((this->skelAnime.curFrame >= 15.0f) && (this->actor.xzDistToPlayer <= 80) &&
            (relYawTowardsPlayer < 0x1000)  && (fabsf(player->actor.world.pos.y - this->actor.world.pos.y) <= 100.0f)) {
            this->actor.speed = 0.0f;
            this->timer = 48;
            EnZomb_SetupAttackDb(this, play);

            player->invincibilityTimer = 0;
        }
        this->timer -= 1;

    } else {
        this->timer = 16;
        EnZomb_SetupAttackDc(this, play);
    }
}

void EnZomb_SetupAttackDb(EnZomb* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnZomb_ChangeAnimation(this, ZOMB_ANIM_ATTACKBHIT);
    this->actionFunc = EnZomb_AttackDb;
    Player* player = GET_PLAYER(play);
    play->grabPlayer(play, player);
    player->actor.parent = &this->actor;
    this->actor.child = &player->actor;
}

void EnZomb_AttackDb(EnZomb* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    Vec3f pos;
    pos.x = player->actor.world.pos.x;
    pos.y = player->actor.world.pos.y + 65.0f;
    pos.z = player->actor.world.pos.z;

    Vec3f result = zomb_vector_between(this->HandR, this->HandL);
    SkelAnime_Update(&this->skelAnime);
    if ((this->skelAnime.curFrame == 26) || (this->skelAnime.curFrame == 11)) {
        play->damagePlayer(play, -20);
        Actor_PlaySfx(&this->actor, NA_SE_EN_DEADHAND_BITE);
        CollisionCheck_SpawnRedBlood(play, &pos);
    }
    if (this->timer > 0) {
        this->actor.speed = 0.0f;
        this->timer -= 1;

        Math_ApproachF(&player->actor.world.pos.x, result.x, 1.0f, 30.0f);
        Math_ApproachF(&player->actor.world.pos.z, result.z, 1.0f, 30.0f);
        if ((this->skelAnime.curFrame == 30) || (this->actionFunc == EnZomb_Death)) {
            player->actor.parent = NULL;
            this->actor.child = NULL;
            func_8002F71C(play, &this->actor, 2.0f, this->actor.yawTowardsPlayer, 1.0f);
        }
    } else {
        EnZomb_ForwardBackCheck(this, play);
        this->canDodge = 1;
    }
}

void EnZomb_SetupAttackDc(EnZomb* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnZomb_ChangeAnimation(this, ZOMB_ANIM_ATTACKBMISS);
    this->actionFunc = EnZomb_AttackDc;
}

void EnZomb_AttackDc(EnZomb* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        this->actor.speed = 0.0f;
        this->timer -= 1;

    } else {
        EnZomb_ForwardBackCheck(this, play);
        this->canDodge = 1;
    }
}
void EnZomb_Scream(EnZomb* this, PlayState* play) {
    f32 Rand = Rand_ZeroOne();
    if (Rand < 0.1) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_REDEAD_CRY);
    }
}