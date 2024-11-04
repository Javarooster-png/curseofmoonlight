// NA_SE_EN_IRONNACK_DASH -> CScream1
// NA_SE_VO_ST_DAMAGE -> CScream2
// NA_SE_VO_FR_LAUGH_0 -> CScream3
// NA_SE_EN_GOLON_WAKE_UP -> CScream4 // broken
// NA_SE_EN_GOLON_GOOD_BIG -> CScream5 // broken
#include "overlays/actors/ovl_Door_Warp1/z_door_warp1.h"

#include "z_En_Thefather.h"
#include "terminal.h"
#define FLAGS (ACTOR_FLAG_0 | ACTOR_FLAG_2 | ACTOR_FLAG_4 | ACTOR_FLAG_5)
void EnThefather_Init(EnThefather* this, PlayState* play);
void EnThefather_Destroy(EnThefather* this, PlayState* play);
void EnThefather_Update(EnThefather* this, PlayState* play);
void EnThefather_Draw(EnThefather* this, PlayState* play);
void EnThefather_MoveF(EnThefather* this, PlayState* play);
void EnThefather_SetupMoveF(EnThefather* this, PlayState* play);
void EnThefather_ForwardBackCheck(EnThefather* this, PlayState* play);
void EnThefather_SetupAttackA(EnThefather* this, PlayState* play); // 1
void EnThefather_AttackA(EnThefather* this, PlayState* play);
void EnThefather_SetupAttackB(EnThefather* this, PlayState* play); // 2
void EnThefather_AttackB(EnThefather* this, PlayState* play);
void EnThefather_SetupAttackC(EnThefather* this, PlayState* play); // 3
void EnThefather_AttackC(EnThefather* this, PlayState* play);
void EnThefather_SetupAttackD(EnThefather* this, PlayState* play); // 4
void EnThefather_AttackD(EnThefather* this, PlayState* play);
void EnThefather_SetupAttackE(EnThefather* this, PlayState* play); // 5
void EnThefather_AttackE(EnThefather* this, PlayState* play);
void EnThefather_SetupAttackF(EnThefather* this, PlayState* play); // 6
void EnThefather_AttackF(EnThefather* this, PlayState* play);
void EnThefather_SetupAttackG(EnThefather* this, PlayState* play); // 7
void EnThefather_AttackG(EnThefather* this, PlayState* play);
void EnThefather_SetupAttackH(EnThefather* this, PlayState* play); // 8
void EnThefather_AttackH(EnThefather* this, PlayState* play);
void EnThefather_SetupAttackI(EnThefather* this, PlayState* play); // 9
void EnThefather_AttackI(EnThefather* this, PlayState* play);
void EnThefather_SetupAttackJ(EnThefather* this, PlayState* play); // 10
void EnThefather_AttackJ(EnThefather* this, PlayState* play);
void EnThefather_SetupAttackK(EnThefather* this, PlayState* play); // 11
void EnThefather_AttackK(EnThefather* this, PlayState* play);
void EnThefather_SetupAttackL(EnThefather* this, PlayState* play); // 12
void EnThefather_AttackL(EnThefather* this, PlayState* play);
void EnThefather_SetupAttackMa(EnThefather* this, PlayState* play); // 13
void EnThefather_AttackMa(EnThefather* this, PlayState* play);
void EnThefather_SetupAttackMc(EnThefather* this, PlayState* play);
void EnThefather_AttackMc(EnThefather* this, PlayState* play);
void EnThefather_SetupAttackMb(EnThefather* this, PlayState* play);
void EnThefather_AttackMb(EnThefather* this, PlayState* play);
void EnThefather_SetupHurt(EnThefather* this, PlayState* play);
void EnThefather_Hurt(EnThefather* this, PlayState* play);
void EnThefather_SetupDeath(EnThefather* this, PlayState* play);
void EnThefather_Death(EnThefather* this, PlayState* play);
void EnThefather_SetupRiseA(EnThefather* this, PlayState* play);
void EnThefather_RiseA(EnThefather* this, PlayState* play);
void EnThefather_SetupRiseB(EnThefather* this, PlayState* play);
void EnThefather_RiseB(EnThefather* this, PlayState* play);
void EnThefather_SetupRiseC(EnThefather* this, PlayState* play);
void EnThefather_RiseC(EnThefather* this, PlayState* play);
void EnThefather_SetupIdle(EnThefather* this, PlayState* play);
void EnThefather_Idle(EnThefather* this, PlayState* play);
void EnThefather_SetupIdleP(EnThefather* this, PlayState* play);
void EnThefather_IdleP(EnThefather* this, PlayState* play);
void EnThefather_SetupIdle2(EnThefather* this, PlayState* play);
void EnThefather_Idle2(EnThefather* this, PlayState* play);
void EnThefather_SetupIdle3(EnThefather* this, PlayState* play);
void EnThefather_Idle3(EnThefather* this, PlayState* play);
void EnThefather_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx);
void EnThefather_ChangeAnimation(EnThefather* this, s32 anim);
void EnThefather_CheckDamage(EnThefather* this, PlayState* play);
void EnThefather_Scream(EnThefather* this, PlayState* play);

ActorInit En_Thefather_InitVars = {
    /**/ ACTOR_THEFATHER,
    /**/ ACTORCAT_ENEMY,
    /**/ FLAGS,
    /**/ OBJECT_THEFATHER,
    /**/ sizeof(EnThefather),
    /**/ (ActorFunc)EnThefather_Init,
    /**/ (ActorFunc)EnThefather_Destroy,
    /**/ (ActorFunc)EnThefather_Update,
    /**/ (ActorFunc)EnThefather_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        .colType = COLTYPE_METAL,
        .atFlags = AT_ON | AT_TYPE_ENEMY,
        .acFlags = AC_ON | AC_HARD | AC_TYPE_PLAYER,
        .ocFlags1 = OC1_ON | OC1_TYPE_ALL,
        .ocFlags2 = OC2_TYPE_1,
        .shape = COLSHAPE_CYLINDER,
    },
    {
        .elemType = ELEMTYPE_UNK0,
        .toucher = { .dmgFlags = 0x00000000, .effect = 0x0, .damage = 0x00 },
        .bumper = { .dmgFlags = 0xFFCFFFFF, .effect = 0x0, .defense = 0x00 },
        .toucherFlags = TOUCH_ON | TOUCH_SFX_NORMAL,
        .bumperFlags = BUMP_NONE,
        .ocElemFlags = OCELEM_ON,
    },
    { .radius = 35, .height = 20, .yShift = 0, .pos = { 0, 0, 0 } },
};
static CollisionCheckInfoInit2 sColChkInit = {
    .health = 255,
    .mass = MASS_IMMOVABLE,
    .cylHeight = 80.0f,
    .cylRadius = 30.0f,
};
static ColliderJntSphElementInit sJntSphItemsInit[] = {
    {
        {
            COLTYPE_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NORMAL,
            BUMP_ON | BUMP_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_HEAD_LIMB, { { 0, 0, 0 }, 35 }, 45 },
    },
    {
        {
            COLTYPE_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0x00000000, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NORMAL,
            BUMP_ON | BUMP_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_HAND_L_LIMB, { { 0, 0, 0 }, 35 }, 50 },
    },
    {
        {
            COLTYPE_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0x00000000, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NORMAL,
            BUMP_ON | BUMP_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_HAND_R_LIMB, { { 0, 0, 0 }, 35 }, 50 },
    },
    {
        {
            COLTYPE_HIT7,
            { 0xFFCFFFFF, 0x04, 0x30 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            TOUCH_NONE,
            BUMP_ON | BUMP_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_CHEST_LIMB, { { 0, 0, 0 }, 35 }, 55 },
    },
    {
        {
            COLTYPE_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            TOUCH_NONE,
            BUMP_ON | BUMP_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_SHIN_L_LIMB, { { 0, 0, 0 }, 35 }, 40 },
    },
    {
        {
            COLTYPE_HIT7,
            { 0xFFCFFFFF, 0x04, 0x30 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            TOUCH_NONE,
            BUMP_ON | BUMP_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_HOOF_L_LIMB, { { 0, 0, 0 }, 35 }, 40 },
    },
    {
        {
            COLTYPE_HIT7,
            { 0xFFCFFFFF, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            TOUCH_NONE,
            BUMP_ON | BUMP_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_HOOF_R_LIMB, { { 0, 0, 0 }, 35 }, 40 },
    },
    {
        {
            COLTYPE_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            TOUCH_NONE,
            BUMP_ON | BUMP_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_SHIN_R_LIMB, { { 0, 0, 0 }, 35 }, 40 },
    },
    {
        {
            COLTYPE_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            TOUCH_NONE,
            BUMP_ON | BUMP_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_UPPERLEG_L_LIMB, { { 0, 0, 0 }, 35 }, 30 },
    },
    {
        {
            COLTYPE_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NORMAL,
            BUMP_ON | BUMP_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_HIP_LIMB, { { 0, 0, 0 }, 35 }, 30 },
    },
    {
        {
            COLTYPE_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            TOUCH_NONE,
            BUMP_ON | BUMP_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_TORSO_LIMB, { { 0, 0, 0 }, 35 }, 55 },
    },
    {
        {
            COLTYPE_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            TOUCH_NONE,
            BUMP_ON | BUMP_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_ARM_L_LIMB, { { 0, 0, 0 }, 35 }, 30 },
    },
    {
        {
            COLTYPE_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            TOUCH_NONE,
            BUMP_ON | BUMP_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_ARM_R_LIMB, { { 0, 0, 0 }, 35 }, 30 },
    },
    {
        {
            COLTYPE_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NORMAL,
            BUMP_ON | BUMP_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_SHOULDER_L_LIMB, { { 0, 0, 0 }, 35 }, 30 },
    },
    {
        {
            COLTYPE_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            TOUCH_ON | TOUCH_SFX_NORMAL,
            BUMP_ON | BUMP_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_SHOULDER_R_LIMB, { { 0, 0, 0 }, 35 }, 30 },
    },
    {
        {
            COLTYPE_HIT7,
            { 0x00000000, 0x00, 0x00 },
            { 0xFFC1FFFF, 0x00, 0x00 },
            TOUCH_NONE,
            BUMP_ON | BUMP_HOOKABLE,
            OCELEM_NONE,
        },
        { GTHEFATHER_UPPERLEG_R_LIMB, { { 0, 0, 0 }, 35 }, 30 },
    },
};
static ColliderJntSphInit sJntSphInit = {
    {
        COLTYPE_HIT7,
        AT_ON | AT_TYPE_ENEMY,
        AC_ON | AC_TYPE_PLAYER,
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
                                       ICHAIN_VEC3F_DIV1000(scale, 45, ICHAIN_STOP) };
typedef enum {
    GTHEFATHER_ANIM_IDLE = 0,
    GTHEFATHER_ANIM_ATTACKA, // 1
    GTHEFATHER_ANIM_ATTACKB, // 2
    GTHEFATHER_ANIM_ATTACKC, // 3
    GTHEFATHER_ANIM_ATTACKD, // 4
    GTHEFATHER_ANIM_ATTACKE, // 5
    GTHEFATHER_ANIM_ATTACKF, // 6
    GTHEFATHER_ANIM_ATTACKG, // 7
    GTHEFATHER_ANIM_ATTACKH, // 8
    GTHEFATHER_ANIM_ATTACKI, // 9
    GTHEFATHER_ANIM_ATTACKJ, // 10
    GTHEFATHER_ANIM_ATTACKK, // 11
    GTHEFATHER_ANIM_ATTACKL, // 12
    GTHEFATHER_ANIM_ATTACKM, // 13
    GTHEFATHER_ANIM_ATTACKMHIT,
    GTHEFATHER_ANIM_ATTACKMMISS,
    GTHEFATHER_ANIM_WALK,
    GTHEFATHER_ANIM_HURT,
    GTHEFATHER_ANIM_DEATH,
    GTHEFATHER_ANIM_MAX
} SthefatherrAnim;

static AnimationInfo sAnimationInfo[GTHEFATHER_ANIM_MAX] = {
    { &gthefatherIdleAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 3.0f },
    { &gthefatherAttack1Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 1.0f },
    { &gthefatherAttack2Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 1.0f },
    { &gthefatherAttack3Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gthefatherAttack4Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gthefatherAttack5Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gthefatherAttack6Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gthefatherAttack7Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gthefatherAttack8Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gthefatherAttack9Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gthefatherAttack10Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gthefatherAttack11Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gthefatherAttack12Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gthefatherAttack13Anim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gthefatherAttack13hitAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gthefatherAttack13missAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gthefatherWalkAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gthefatherHurtAnim, 0.5f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gthefatherDeathAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
};

typedef enum {
    /* 0x0 */ GTHEFATHER_DMGEFF_NORMAL,
    /* 0x1 */ GTHEFATHER_DMGEFF_STUN,
    /* 0x6 */ GTHEFATHER_DMGEFF_FIREMAGIC = 6,
    /* 0xD */ GTHEFATHER_DMGEFF_SLING = 0xD,
    /* 0xE */ GTHEFATHER_DMGEFF_LIGHT,
    /* 0xF */ GTHEFATHER_DMGEFF_FREEZE
} GTHEFATHERDamageEffect;

static DamageTable sDamageTable = {
    /* Deku nut      */ DMG_ENTRY(0xF, GTHEFATHER_DMGEFF_NORMAL),
    /* Deku stick    */ DMG_ENTRY(2, GTHEFATHER_DMGEFF_NORMAL),
    /* Slingshot     */ DMG_ENTRY(0, GTHEFATHER_DMGEFF_SLING),
    /* Explosive     */ DMG_ENTRY(2, GTHEFATHER_DMGEFF_NORMAL),
    /* Boomerang     */ DMG_ENTRY(0, GTHEFATHER_DMGEFF_STUN),
    /* Normal arrow  */ DMG_ENTRY(1, GTHEFATHER_DMGEFF_NORMAL),
    /* Hammer swing  */ DMG_ENTRY(2, GTHEFATHER_DMGEFF_NORMAL),
    /* Hookshot      */ DMG_ENTRY(0, GTHEFATHER_DMGEFF_STUN),
    /* Kokiri sword  */ DMG_ENTRY(1, GTHEFATHER_DMGEFF_NORMAL),
    /* Master sword  */ DMG_ENTRY(2, GTHEFATHER_DMGEFF_NORMAL),
    /* Giant's Knife */ DMG_ENTRY(4, GTHEFATHER_DMGEFF_NORMAL),
    /* Fire arrow    */ DMG_ENTRY(0, GTHEFATHER_DMGEFF_NORMAL),
    /* Ice arrow     */ DMG_ENTRY(0, GTHEFATHER_DMGEFF_FREEZE),
    /* Light arrow   */ DMG_ENTRY(2, GTHEFATHER_DMGEFF_LIGHT),
    /* Unk arrow 1   */ DMG_ENTRY(0, GTHEFATHER_DMGEFF_NORMAL),
    /* Unk arrow 2   */ DMG_ENTRY(0, GTHEFATHER_DMGEFF_NORMAL),
    /* Unk arrow 3   */ DMG_ENTRY(0, GTHEFATHER_DMGEFF_NORMAL),
    /* Fire magic    */ DMG_ENTRY(0, GTHEFATHER_DMGEFF_FIREMAGIC),
    /* Ice magic     */ DMG_ENTRY(3, GTHEFATHER_DMGEFF_FREEZE),
    /* Light magic   */ DMG_ENTRY(0, GTHEFATHER_DMGEFF_LIGHT),
    /* Shield        */ DMG_ENTRY(0, GTHEFATHER_DMGEFF_NORMAL),
    /* Mirror Ray    */ DMG_ENTRY(0, GTHEFATHER_DMGEFF_NORMAL),
    /* Kokiri spin   */ DMG_ENTRY(1, GTHEFATHER_DMGEFF_NORMAL),
    /* Giant spin    */ DMG_ENTRY(4, GTHEFATHER_DMGEFF_NORMAL),
    /* Master spin   */ DMG_ENTRY(1, GTHEFATHER_DMGEFF_NORMAL),
    /* Kokiri jump   */ DMG_ENTRY(1, GTHEFATHER_DMGEFF_NORMAL),
    /* Giant jump    */ DMG_ENTRY(4, GTHEFATHER_DMGEFF_NORMAL),
    /* Master jump   */ DMG_ENTRY(4, GTHEFATHER_DMGEFF_NORMAL),
    /* Unknown 1     */ DMG_ENTRY(0, GTHEFATHER_DMGEFF_NORMAL),
    /* Unblockable   */ DMG_ENTRY(0, GTHEFATHER_DMGEFF_NORMAL),
    /* Hammer jump   */ DMG_ENTRY(2, GTHEFATHER_DMGEFF_NORMAL),
    /* Unknown 2     */ DMG_ENTRY(0, GTHEFATHER_DMGEFF_NORMAL),
};

void EnThefather_Init(EnThefather* this, PlayState* play) {
    Actor_ProcessInitChain(&this->actor, sInitChain);
    if (Flags_GetClear(play, play->roomCtx.curRoom.num)) {
        Actor_Spawn(&play->actorCtx, play, ACTOR_DOOR_WARP1, 32, -1265, -1349, 0, 0, 0, WARP_DUNGEON_ADULT);
    }
    this->alarmstate = 0;
    this->cantSee = 1;
    gGangaState.grabstate = 0;
    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 20.0f);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    Collider_InitCylinder(play, &this->collider);
    SkelAnime_InitFlex(play, &this->skelAnime, &gthefather, &gthefatherIdleAnim, this->jointTable, this->morphTable,
                       GTHEFATHER_NUM_LIMBS);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);

    Collider_InitJntSph(play, &this->colliderSpheres);
    Collider_SetJntSph(play, &this->colliderSpheres, &this->actor, &sJntSphInit, this->colliderSpheresElements);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &sDamageTable, &sColChkInit);
    this->poise = 255;
    this->timer = 60;
    EnThefather_SetupIdle(this, play);
    this->actor.speed = 0.0f;
}
Vec3f EnThefather_VectorBetween(Vec3f a, Vec3f b) {
    Vec3f result;
    result.x = (a.x + b.x) / 2.0f;
    result.y = (a.y + b.y) / 2.0f;
    result.z = (a.z + b.z) / 2.0f;
    return result;
}

void EnThefather_Destroy(EnThefather* this, PlayState* play) {
    Collider_DestroyCylinder(play, &this->collider);
    Collider_DestroyCylinder(play, &this->collider2);
    Collider_DestroyJntSph(play, &this->colliderSpheres);
}

void EnThefather_Update(EnThefather* this, PlayState* play) {
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

    if (this->actionFunc != EnThefather_Death) {
        EnThefather_CheckDamage(this, play);
        Collider_UpdateCylinder(&this->actor, &this->collider);
        CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
    }
    Actor_UpdateBgCheckInfo(play, &this->actor, 80.0f, 36.0f, 0.0f, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2);
    if (this->actionFunc != EnThefather_Death) {
    CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSpheres.base);
    }
    if (this->poise <= 0) {
        this->timer = 100;
        this->poise = 255;
        EnThefather_SetupHurt(this, play);
    } else if ((this->poise < 255) && ((play->gameplayFrames % 15) == 0)) {
        this->poise += 1;
    }
    DECR(this->screamcountdown);
    DECR(this->hurtboxCooldown);
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
        }
    } else {
        this->cantSee = 1;
    }
}

void EnThefather_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx) {
    EnThefather* this = (EnThefather*)thisx;

    Vec3f zeroVec = { 0.0f, 0.0f, 0.0f };

    if (limbIndex == GTHEFATHER_HEAD_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->Head);
    }
    if (limbIndex == GTHEFATHER_HAND_L_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->HandL);
    }
    if (limbIndex == GTHEFATHER_HAND_R_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->HandR);
    }
    if (limbIndex == GTHEFATHER_SHOULDER_R_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->ShoulderR);
    }
    if (limbIndex == GTHEFATHER_SHOULDER_L_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->ShoulderL);
    }
    if (limbIndex == GTHEFATHER_SHIN_R_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->ShinR);
    }
    if (limbIndex == GTHEFATHER_SHIN_L_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->ShinL);
    }
    if (limbIndex == GTHEFATHER_HOOF_L_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->FootL);
    }
    if (limbIndex == GTHEFATHER_HOOF_R_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->FootR);
    }
    if (limbIndex == GTHEFATHER_CHEST_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->Chest);
    }
    if (limbIndex == GTHEFATHER_HEAD_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->Head);
    }
    if (limbIndex == GTHEFATHER_TORSO_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->Abdomen);
    }
    if (limbIndex == GTHEFATHER_HIP_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->Waist);
    }
    if (limbIndex == GTHEFATHER_ARM_R_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->ArmR);
    }
    if (limbIndex == GTHEFATHER_ARM_L_LIMB) {
        Matrix_MultVec3f(&zeroVec, &this->ArmL);
    }
    this->actor.focus.pos = this->Chest;
    if (this->actionFunc != EnThefather_Death) {
        Collider_UpdateSpheres(limbIndex, &this->colliderSpheres);
    };
    if (this->hurtboxCooldown == 0) {
        CollisionCheck_SetAC(play, &play->colChkCtx, &this->colliderSpheres.base);
    }
}

void EnThefather_Draw(EnThefather* this, PlayState* play) {
    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    Player* player = GET_PLAYER(play);
    Gfx_SetupDL_25Opa(play->state.gfxCtx);

    gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, player->PlayerMadnessTimer);
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount, NULL,
                          EnThefather_PostLimbDraw, this);
    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}

void EnThefather_CheckDamage(EnThefather* this, PlayState* play) {
    ColliderInfo* acHitInfo;
    s16 i;
    s16 j;
    if (this->hurtboxCooldown != 0) {
        for (i = 0; i < ARRAY_COUNT(this->colliderSpheresElements); i++) {
            this->colliderSpheres.elements[i].info.bumperFlags &= ~BUMP_HIT;
        }
    } else {
        for (i = 0; i < ARRAY_COUNT(this->colliderSpheresElements); i++) {
            if (this->colliderSpheres.elements[i].info.bumperFlags & BUMP_HIT) {
                for (j = 0; j < ARRAY_COUNT(this->colliderSpheresElements); j++) {
                    this->colliderSpheres.elements[j].info.bumperFlags &= ~BUMP_HIT;
                }

                acHitInfo = this->colliderSpheres.elements[i].info.acHitInfo;

                if (i == 0 || i == 3 || i == 9 || i == 10) {
                    if (acHitInfo->toucher.dmgFlags & (DMG_ARROW_NORMAL)) {
                        this->actor.colChkInfo.health -= 1;
                    } else {
                        this->actor.colChkInfo.health =
                            (this->actor.colChkInfo.health > 6) ? (this->actor.colChkInfo.health - 6) : 0;
                        if (this->actionFunc != EnThefather_Hurt) {
                            this->poise = (this->poise > 30) ? (this->poise - 30) : 0;
                        }
                    }
                } else {
                    if (acHitInfo->toucher.dmgFlags & (DMG_JUMP_MASTER | DMG_SPIN_MASTER | DMG_SLASH_MASTER)) {
                        if (acHitInfo->toucher.dmgFlags & DMG_JUMP_MASTER) {
                            if (this->actionFunc != EnThefather_Hurt) {
                                this->poise = (this->poise > 15) ? (this->poise - 15) : 0;
                            }
                            this->actor.colChkInfo.health =
                                (this->actor.colChkInfo.health > 2) ? (this->actor.colChkInfo.health - 2) : 0;
                        } else {
                            if (this->actionFunc != EnThefather_Hurt) {
                                this->poise = (this->poise > 8) ? (this->poise - 8) : 0;
                            }
                            this->actor.colChkInfo.health -= 1;
                        }
                    } else if (acHitInfo->toucher.dmgFlags & (DMG_JUMP_GIANT | DMG_SPIN_GIANT | DMG_SLASH_GIANT)) {
                        if (acHitInfo->toucher.dmgFlags & DMG_JUMP_GIANT) {
                            if (this->actionFunc != EnThefather_Hurt) {
                                this->poise = (this->poise > 25) ? (this->poise - 25) : 0;
                            }
                            this->actor.colChkInfo.health =
                                (this->actor.colChkInfo.health > 4) ? (this->actor.colChkInfo.health - 4) : 0;
                        } else {
                            if (this->actionFunc != EnThefather_Hurt) {
                                this->poise = (this->poise > 15) ? (this->poise - 15) : 0;
                            }
                            this->actor.colChkInfo.health =
                                (this->actor.colChkInfo.health > 2) ? (this->actor.colChkInfo.health - 2) : 0;
                        }
                    } else if (acHitInfo->toucher.dmgFlags & (DMG_DEKU_NUT)) {
                        if (this->actionFunc != EnThefather_Hurt) {
                            this->poise = (this->poise > 40) ? (this->poise - 40) : 0;
                        }
                        this->actor.colChkInfo.health =
                            (this->actor.colChkInfo.health > 10) ? (this->actor.colChkInfo.health - 10) : 0;
                    } else if (acHitInfo->toucher.dmgFlags & (DMG_ARROW_NORMAL)) {
                        if (this->actionFunc != EnThefather_Hurt) {
                            this->poise = (this->poise > 6) ? (this->poise - 6) : 0;
                        }
                        this->actor.colChkInfo.health -= 1;
                    } else if (acHitInfo->toucher.dmgFlags & (DMG_EXPLOSIVE)) {
                        if (this->actionFunc != EnThefather_Hurt) {
                            this->poise = (this->poise > 20) ? (this->poise - 20) : 0;
                        }
                        this->actor.colChkInfo.health =
                            (this->actor.colChkInfo.health > 3) ? (this->actor.colChkInfo.health - 3) : 0;
                    }
                }
                if (this->actionFunc != EnThefather_Hurt) {
                    this->hurtboxCooldown = 20;
                } else {
                    this->hurtboxCooldown = 5;
                }
                Actor_SetColorFilter(&this->actor, COLORFILTER_COLORFLAG_RED, 150, COLORFILTER_BUFFLAG_OPA, 20);

                break;
            }
        }
        if (this->actor.colChkInfo.health == 0) {
            this->deathTimer = 360;
            Actor_PlaySfx(&this->actor, NA_SE_EN_REDEAD_DEAD);
            EnThefather_SetupDeath(this, play);
        }
    }
}
void EnThefather_SetupDeath(EnThefather* this, PlayState* play) {
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_DEATH);

    Enemy_StartFinishingBlow(play, &this->actor);
    this->actor.flags &= ~ACTOR_FLAG_0;

    this->actionFunc = EnThefather_Death;
}

void EnThefather_Death(EnThefather* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);

    if (this->deathTimer <= 0) {
    } else if (this->deathTimer > 0) {
        if (this->deathTimer == 1) {
        Flags_SetSwitch(play, (this->actor.params >> 8) & 0xFF);
        gGangaState.gamearea2 = 1;
        }
        this->deathTimer -= 1;
        if (this->skelAnime.curFrame < 31.0f) {
            Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
            Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
            this->actor.speed = -3.0f;

            if (this->skelAnime.curFrame == 16.0f) {
                Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
                Actor_SpawnFloorDustRing(play, &this->actor, &this->FootR, 10.0f, 3, 2.0f, 250, 15, false);
                Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
            }
            if (this->skelAnime.curFrame == 30.0f) {
                Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
                Actor_SpawnFloorDustRing(play, &this->actor, &this->FootL, 10.0f, 3, 2.0f, 250, 15, false);
                Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
            }
        } else {
            if ((this->skelAnime.curFrame == 54.0f) || (this->skelAnime.curFrame == 263.0f)) {
                EnThefather_Scream(this, play);
            }
            this->actor.speed = 0;
            if ((this->skelAnime.curFrame == 93.0f) || (this->skelAnime.curFrame == 330.0f) ||
                (this->skelAnime.curFrame == 337.0f)) {
                Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
                Actor_SpawnFloorDustRing(play, &this->actor, &this->HandR, 10.0f, 3, 2.0f, 250, 15, false);
                Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
            }
            if ((this->skelAnime.curFrame == 326.0f) || (this->skelAnime.curFrame == 334.0f)) {
                Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_J_WALK);
                Actor_SpawnFloorDustRing(play, &this->actor, &this->HandL, 10.0f, 3, 2.0f, 250, 15, false);
                Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
            }
            if (this->skelAnime.curFrame == 319.0f) {
                Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
                Actor_SpawnFloorDustRing(play, &this->actor, &this->ShinR, 10.0f, 3, 2.0f, 250, 15, false);
                Actor_SpawnFloorDustRing(play, &this->actor, &this->ShinR, 10.0f, 3, 2.0f, 250, 15, false);
                Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
            }
            if ((this->skelAnime.curFrame > 308) && (this->skelAnime.curFrame < 319)) {
                this->actor.shape.shadowDraw = 0;
                this->actor.speed = 5.0;
            }
            if ((this->skelAnime.curFrame == 327.0f) || (this->skelAnime.curFrame == 333.0f)) {
                Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
                Actor_SpawnFloorDustRing(play, &this->actor, &this->Chest, 10.0f, 3, 2.0f, 250, 15, false);
                Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
            }
            if ((this->skelAnime.curFrame == 326.0f) || (this->skelAnime.curFrame == 334.0f)) {
                Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_J_WALK);
                Actor_SpawnFloorDustRing(play, &this->actor, &this->HandR, 10.0f, 3, 2.0f, 250, 15, false);
                Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
            }
        }
    }
}
void EnThefather_ChangeAnimation(EnThefather* this, s32 anim) {
    Animation_ChangeByInfo(&this->skelAnime, sAnimationInfo, anim);
}

void EnThefather_ForwardBackCheck(EnThefather* this, PlayState* play) {

    Player* player = GET_PLAYER(play);
    f32 RandNum = Rand_ZeroOne();
    s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    relYawTowardsPlayer = ABS(relYawTowardsPlayer);
    if ((this->alarmstate == 0) && (this->cantSee == 1)) {
        this->timer = 60;
        EnThefather_SetupIdle(this, play);
        this->actor.speed = 0.0f;
    } else if (this->alarmstate == 1) {
        if ((this->actor.xzDistToPlayer < 400.0f) && (this->actor.xzDistToPlayer > 300.0f)) {

            if (this->actor.colChkInfo.health < 100) {
                this->timer = 92;
                EnThefather_SetupAttackL(this, play); // Jump2Fists
            } else {
                this->timer = 65;
                EnThefather_SetupAttackJ(this, play); // Jump2Fists
            }

        } else if ((this->actor.xzDistToPlayer < 300.0f) && (this->actor.xzDistToPlayer >= 150.0f)) {
            this->timer = 40;
            EnThefather_SetupAttackF(this, play); // jumpattack
        } else if ((this->actor.xzDistToPlayer < 150.0f) && (this->actor.xzDistToPlayer >= 100.0f)) {

            if (this->actor.colChkInfo.health < 100) {
                if (Rand_ZeroOne() < 0.65) {
                    this->timer = 67;
                    EnThefather_SetupAttackI(this, play); // doubledownards
                } else {
                    this->timer = 40;
                    EnThefather_SetupAttackF(this, play); // jumpattack
                }

            } else {
                this->timer = 44;
                EnThefather_SetupAttackB(this, play); // doubledownards
            }
        } else if ((this->actor.xzDistToPlayer < 100.0f) && (this->actor.xzDistToPlayer >= 80.0f)) {
            if ((Rand_ZeroOne() < 0.5) && (relYawTowardsPlayer < 1500)) {
                this->timer = 37;
                EnThefather_SetupAttackE(this, play); // bite
            } else {
                this->timer = 112;
                EnThefather_SetupAttackK(this, play); // combomoving
            }
        } else if ((this->actor.xzDistToPlayer < 80.0f) && (this->actor.xzDistToPlayer > 60.0f)) {
            if (relYawTowardsPlayer < 1500) {
                if (Rand_ZeroOne() < 0.3) {
                    this->timer = 120;
                    EnThefather_SetupAttackA(this, play); // howlthenpunish
                } else {
                    this->timer = 28;
                    EnThefather_SetupAttackMa(this, play); // grab
                }

            } else if (relYawTowardsPlayer <= 0x4000) {
                this->timer = 50;
                EnThefather_SetupAttackH(this, play); // SweepL
            } else if (relYawTowardsPlayer > 0x4000 && relYawTowardsPlayer <= 0x6000) {
                this->timer = 38;
                EnThefather_SetupAttackD(this, play); // backhandl
            } else if (relYawTowardsPlayer > 0x6000 && relYawTowardsPlayer <= 0x7FFF) {
                this->timer = 38;
                EnThefather_SetupAttackC(this, play); // backhandr
            }

        } else if (this->actor.xzDistToPlayer <= 60.0f) {
            this->timer = 43;
            EnThefather_SetupAttackG(this, play); // punchRSparks
        } else if ((this->actor.xzDistToPlayer >= 400.0f)) {
            this->alarmstate = 1;
            this->timer = 40;
            EnThefather_SetupMoveF(this, play);
        }
    }
}
void EnThefather_SetupIdle(EnThefather* this, PlayState* play) {
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_IDLE);
    this->actionFunc = EnThefather_Idle;
}

void EnThefather_Idle(EnThefather* this, PlayState* play) {

    Player* player = GET_PLAYER(play);

    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
        relYawTowardsPlayer = ABS(relYawTowardsPlayer);
        if (((relYawTowardsPlayer < 0x2388) ||
             ((this->actor.xzDistToPlayer < 300.0f) && (player->meleeWeaponState != 0))) &&
            (this->actor.xzDistToPlayer < 20000.0f)) {
            this->timer = 0;
            this->alarmstate = 1;
            EnThefather_ForwardBackCheck(this, play);
        }
        this->timer -= 1;
    }
    if (this->timer <= 0) {
        this->timer = 39;

        EnThefather_SetupIdle(this, play);
    }
}

void EnThefather_SetupHurt(EnThefather* this, PlayState* play) {
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_HURT);
    this->actionFunc = EnThefather_Hurt;
}

void EnThefather_Hurt(EnThefather* this, PlayState* play) {

    Player* player = GET_PLAYER(play);

    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        this->timer -= 1;
        this->actor.speed = 0;
    }
    if (this->timer <= 0) {

        EnThefather_ForwardBackCheck(this, play);
    }
}

void EnThefather_SetupMoveF(EnThefather* this, PlayState* play) {
    this->actionFunc = EnThefather_MoveF;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_WALK);
}

void EnThefather_MoveF(EnThefather* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
    if ((this->timer > 0) && (this->actor.xzDistToPlayer >= 80.0f)) {
        this->actor.speed = 3.0f;
        if (this->skelAnime.curFrame == 14.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->FootL, 10.0f, 3, 2.0f, 250, 15, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
        } else if (this->skelAnime.curFrame == 34.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->FootR, 10.0f, 3, 2.0f, 250, 15, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
        }
        this->timer -= 1;
        Player* player = GET_PLAYER(play);

        if (!Actor_TestFloorInDirection(&this->actor, play, this->actor.speed, this->actor.shape.rot.y)) {
            this->actor.world.pos = this->actor.prevPos;
        }
    } else {
        EnThefather_ForwardBackCheck(this, play);
    }
}

void EnThefather_SetupAttackA(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKA);
    this->actionFunc = EnThefather_AttackA;
}

void EnThefather_AttackA(EnThefather* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if (((this->skelAnime.curFrame >= 92) && (this->skelAnime.curFrame < 103)) ||
        ((this->skelAnime.curFrame >= 85) && (this->skelAnime.curFrame < 90))) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
    }
    if ((this->skelAnime.curFrame == 87) || (this->skelAnime.curFrame == 99)) {
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    }
    if ((this->skelAnime.curFrame == 42.0f) && (this->screamcountdown <= 0)) {
        EnThefather_Scream(this, play);
    }

    if ((this->skelAnime.curFrame > 85.0f) && (this->skelAnime.curFrame < 96.0f)) {
        if (this->skelAnime.curFrame == 90) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_COLI2);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->HandR, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 6, 13);
        }
        this->colliderSpheres.elements[2].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[2].info.toucher.effect = 4;
        this->colliderSpheres.elements[2].info.toucher.damage = 30;
    } else if ((this->skelAnime.curFrame > 96.0f) && (this->skelAnime.curFrame < 93.0f)) {
        this->colliderSpheres.elements[1].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].info.toucher.effect = 4;
        this->colliderSpheres.elements[1].info.toucher.damage = 30;
    } else {
        this->colliderSpheres.elements[1].info.toucher.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[1].info.toucher.effect = 0;
        this->colliderSpheres.elements[1].info.toucher.damage = 0;
        this->colliderSpheres.elements[2].info.toucher.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[2].info.toucher.effect = 0;
        this->colliderSpheres.elements[2].info.toucher.damage = 0;
    }
    if (this->timer > 0) {
        this->actor.speed = 0.0f;
        this->timer -= 1;
    } else {
        EnThefather_ForwardBackCheck(this, play);
    }
}

void EnThefather_SetupAttackB(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKB);
    this->actionFunc = EnThefather_AttackB;
}

void EnThefather_AttackB(EnThefather* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if (((this->skelAnime.curFrame >= 24) && (this->skelAnime.curFrame < 32)) ||
        ((this->skelAnime.curFrame >= 34) && (this->skelAnime.curFrame < 45))) {
        this->actor.speed = 6;
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xAFF, 1);
        if (this->skelAnime.curFrame == 31.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->FootL, 10.0f, 3, 2.0f, 250, 15, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
        } else if (this->skelAnime.curFrame == 43.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->FootR, 10.0f, 3, 2.0f, 250, 15, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
        }
    } else {
        this->actor.speed = 0;
    }
    if ((this->skelAnime.curFrame == 16.0f) && (this->screamcountdown <= 0)) {
        EnThefather_Scream(this, play);
    }

    if ((this->skelAnime.curFrame == 22) || (this->skelAnime.curFrame == 28)) {
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    }
    if ((this->skelAnime.curFrame > 18.0f) && (this->skelAnime.curFrame < 24.0f)) {
        this->colliderSpheres.elements[1].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].info.toucher.effect = 4;
        this->colliderSpheres.elements[1].info.toucher.damage = 30;
    } else {
        this->colliderSpheres.elements[1].info.toucher.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[1].info.toucher.effect = 0;
        this->colliderSpheres.elements[1].info.toucher.damage = 0;
    }
    if ((this->skelAnime.curFrame > 27.0f) && (this->skelAnime.curFrame < 35.0f)) {
        this->colliderSpheres.elements[2].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[2].info.toucher.effect = 4;
        this->colliderSpheres.elements[2].info.toucher.damage = 30;
    } else {
        this->colliderSpheres.elements[2].info.toucher.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[2].info.toucher.effect = 0;
        this->colliderSpheres.elements[2].info.toucher.damage = 0;
    }
    if (this->timer > 0) {
        this->timer -= 1;
    } else {
        EnThefather_ForwardBackCheck(this, play);
    }
}

void EnThefather_SetupAttackC(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKC);
    this->actionFunc = EnThefather_AttackC;
}

void EnThefather_AttackC(EnThefather* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if ((this->skelAnime.curFrame >= 3) && (this->skelAnime.curFrame < 15)) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x1FF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x1FF, 1);
    } else {
        this->actor.speed = 0;
    }
    if ((this->skelAnime.curFrame == 13) && (this->screamcountdown <= 0)) {
        EnThefather_Scream(this, play);
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    }
    if ((this->skelAnime.curFrame >= 11.0f) && (this->skelAnime.curFrame < 16.0f)) {
        this->colliderSpheres.elements[1].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].info.toucher.effect = 4;
        this->colliderSpheres.elements[1].info.toucher.damage = 30;
    } else {
        this->colliderSpheres.elements[1].info.toucher.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[1].info.toucher.effect = 0;
        this->colliderSpheres.elements[1].info.toucher.damage = 0;
    }
    if (this->timer > 0) {
        this->timer -= 1;
    } else {
        EnThefather_ForwardBackCheck(this, play);
    }
}

void EnThefather_SetupAttackD(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKD);
    this->actionFunc = EnThefather_AttackD;
}

void EnThefather_AttackD(EnThefather* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if ((this->skelAnime.curFrame >= 3) && (this->skelAnime.curFrame < 15)) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFA, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFA, 1);
    } else {
        this->actor.speed = 0;
    }
    if ((this->skelAnime.curFrame == 13) && (this->screamcountdown <= 0)) {
        EnThefather_Scream(this, play);
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    }
    if ((this->skelAnime.curFrame >= 11.0f) && (this->skelAnime.curFrame < 16.0f)) {
        this->colliderSpheres.elements[2].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[2].info.toucher.effect = 4;
        this->colliderSpheres.elements[2].info.toucher.damage = 30;
    } else {
        this->colliderSpheres.elements[2].info.toucher.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[2].info.toucher.effect = 0;
        this->colliderSpheres.elements[2].info.toucher.damage = 0;
    }
    if (this->timer > 0) {
        this->timer -= 1;
    } else {
        EnThefather_ForwardBackCheck(this, play);
    }
}

void EnThefather_SetupAttackE(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKE);
    this->actionFunc = EnThefather_AttackE;
}

void EnThefather_AttackE(EnThefather* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if ((this->skelAnime.curFrame >= 3) && (this->skelAnime.curFrame < 15)) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFA, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFA, 1);
    } else {
        this->actor.speed = 0;
    }
    if ((this->skelAnime.curFrame == 13) && (this->screamcountdown <= 0)) {
        EnThefather_Scream(this, play);
        Actor_PlaySfx(&this->actor, NA_SE_EN_DEKU_MOUTH);
    }
    if ((this->skelAnime.curFrame >= 12.0f) && (this->skelAnime.curFrame < 17.0f)) {
        this->colliderSpheres.elements[0].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[0].info.toucher.effect = 4;
        this->colliderSpheres.elements[0].info.toucher.damage = 50;
    } else {
        this->colliderSpheres.elements[0].info.toucher.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[0].info.toucher.effect = 0x00;
        this->colliderSpheres.elements[0].info.toucher.damage = 0x00;
    }
    if (this->timer > 0) {
        this->timer -= 1;
    } else {
        EnThefather_ForwardBackCheck(this, play);
    }
}

void EnThefather_SetupAttackF(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKF);
    this->actionFunc = EnThefather_AttackF;
}

void EnThefather_AttackF(EnThefather* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if ((this->skelAnime.curFrame >= 1) && (this->skelAnime.curFrame < 12)) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
    } else if ((this->skelAnime.curFrame >= 12) && (this->skelAnime.curFrame < 28)) {
        this->actor.speed = 1 + (this->actor.xzDistToPlayer * 0.1);
    } else {
        this->actor.speed = 0;
    }
    if ((this->skelAnime.curFrame == 16.0f) && (this->screamcountdown <= 0)) {
        EnThefather_Scream(this, play);
    }
    if (this->skelAnime.curFrame == 13) {
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    }
    if ((this->skelAnime.curFrame >= 24.0f) && (this->skelAnime.curFrame < 29.0f)) {
        if (this->skelAnime.curFrame == 27) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_COLI2);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->HandL, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->FootL, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->FootR, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 7, 15);
        }
        this->colliderSpheres.elements[1].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].info.toucher.effect = 4;
        this->colliderSpheres.elements[1].info.toucher.damage = 50;
    } else {
        this->colliderSpheres.elements[1].info.toucher.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[1].info.toucher.effect = 0;
        this->colliderSpheres.elements[1].info.toucher.damage = 0;
    }
    if (this->timer > 0) {
        this->timer -= 1;
    } else {
        EnThefather_ForwardBackCheck(this, play);
    }
}

void EnThefather_SetupAttackG(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKG);
    this->actionFunc = EnThefather_AttackG;
}

void EnThefather_AttackG(EnThefather* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if ((this->skelAnime.curFrame >= 1) && (this->skelAnime.curFrame < 12)) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
    } else {
    }
    if (this->skelAnime.curFrame == 22) {
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    }
    if ((this->skelAnime.curFrame == 11.0f) && (this->screamcountdown <= 0)) {
        EnThefather_Scream(this, play);
    }
    if ((this->skelAnime.curFrame >= 21.0f) && (this->skelAnime.curFrame < 35.0f)) {

        if (this->skelAnime.curFrame == 24) {

            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_COLI2);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->HandR, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 7, 15);
        } else {
            CollisionCheck_SpawnShieldParticlesMetal(play, &this->HandR);
        }
        this->colliderSpheres.elements[2].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[2].info.toucher.effect = 4;
        this->colliderSpheres.elements[2].info.toucher.damage = 30;
    } else {
        this->colliderSpheres.elements[2].info.toucher.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[2].info.toucher.effect = 0;
        this->colliderSpheres.elements[2].info.toucher.damage = 0;
    }
    if (this->timer > 0) {
        this->actor.speed = 0;
        this->timer -= 1;
    } else {
        EnThefather_ForwardBackCheck(this, play);
    }
}
void EnThefather_SetupAttackH(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKH);
    this->actionFunc = EnThefather_AttackH;
}

void EnThefather_AttackH(EnThefather* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if ((this->skelAnime.curFrame >= 1) && (this->skelAnime.curFrame < 12)) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
    } else {
    }
    if ((this->skelAnime.curFrame == 22) && (this->screamcountdown <= 0)) {
        EnThefather_Scream(this, play);
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    }
    if ((this->skelAnime.curFrame >= 24.0f) && (this->skelAnime.curFrame < 33.0f)) {
        this->colliderSpheres.elements[1].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].info.toucher.effect = 4;
        this->colliderSpheres.elements[1].info.toucher.damage = 30;
    } else {
        this->colliderSpheres.elements[1].info.toucher.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[1].info.toucher.effect = 0;
        this->colliderSpheres.elements[1].info.toucher.damage = 0;
    }
    if (this->timer > 0) {
        this->actor.speed = 0;
        this->timer -= 1;
    } else {
        EnThefather_ForwardBackCheck(this, play);
    }
}

void EnThefather_SetupAttackJ(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKJ);
    this->actionFunc = EnThefather_AttackJ;
}

void EnThefather_AttackJ(EnThefather* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if ((this->skelAnime.curFrame >= 1) && (this->skelAnime.curFrame < 32)) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        this->actor.speed = 0;
        if (this->skelAnime.curFrame == 31) {
            this->actor.velocity.y = 10;
        }
        if ((this->skelAnime.curFrame == 44.0f) && (this->screamcountdown <= 0)) {
            EnThefather_Scream(this, play);
        }
    } else if ((this->skelAnime.curFrame >= 32) && (this->skelAnime.curFrame < 60)) {
        if ((this->skelAnime.curFrame >= 32) && (this->skelAnime.curFrame < 45)) {
            this->actor.velocity.y = 10;
        }
        this->actor.speed = (this->actor.xzDistToPlayer * 0.1);
    } else {
        this->actor.speed = 0;
    }
    if (this->skelAnime.curFrame == 55) {
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    }
    if ((this->skelAnime.curFrame >= 58.0f) && (this->skelAnime.curFrame < 63.0f)) {
        if (this->skelAnime.curFrame == 60) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_COLI2);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->HandL, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->HandR, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->FootL, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->FootR, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 7, 15);
        }
        this->colliderSpheres.elements[1].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[2].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].info.toucher.effect = 4;
        this->colliderSpheres.elements[1].info.toucher.damage = 50;
        this->colliderSpheres.elements[2].info.toucher.effect = 4;
        this->colliderSpheres.elements[2].info.toucher.damage = 50;
    } else {
        this->colliderSpheres.elements[1].info.toucher.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[2].info.toucher.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[1].info.toucher.effect = 0x00;
        this->colliderSpheres.elements[1].info.toucher.damage = 0x00;
        this->colliderSpheres.elements[2].info.toucher.effect = 0x00;
        this->colliderSpheres.elements[2].info.toucher.damage = 0x00;
    }
    if (this->timer > 0) {
        this->timer -= 1;
    } else {
        EnThefather_ForwardBackCheck(this, play);
    }
}

void EnThefather_SetupAttackI(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKI);
    this->actionFunc = EnThefather_AttackI;
}

void EnThefather_AttackI(EnThefather* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if ((this->skelAnime.curFrame >= 9) && (this->skelAnime.curFrame < 41)) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);

        this->actor.speed = 5;
        if (this->skelAnime.curFrame == 21) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->FootL, 10.0f, 3, 2.0f, 250, 15, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
        } else if (this->skelAnime.curFrame == 39) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->FootR, 10.0f, 3, 2.0f, 250, 15, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 5, 10);
        }

    } else {
        this->actor.speed = 0;
    }
    if ((this->skelAnime.curFrame == 22) || (this->skelAnime.curFrame == 32) || (this->skelAnime.curFrame == 45)) {
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    }
    if ((this->skelAnime.curFrame >= 18.0f) && (this->skelAnime.curFrame < 26.0f)) {
        this->colliderSpheres.elements[1].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].info.toucher.effect = 4;
        this->colliderSpheres.elements[1].info.toucher.damage = 50;
    } else if ((this->skelAnime.curFrame >= 28.0f) && (this->skelAnime.curFrame < 35.0f)) {
        this->colliderSpheres.elements[2].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[2].info.toucher.effect = 4;
        this->colliderSpheres.elements[2].info.toucher.damage = 50;
    } else if ((this->skelAnime.curFrame >= 40.0f) && (this->skelAnime.curFrame < 49.0f)) {
        this->colliderSpheres.elements[1].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].info.toucher.effect = 4;
        this->colliderSpheres.elements[1].info.toucher.damage = 50;
    } else if ((this->skelAnime.curFrame >= 53.0f) && (this->skelAnime.curFrame < 58.0f)) {
        this->colliderSpheres.elements[0].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[0].info.toucher.effect = 4;
        this->colliderSpheres.elements[0].info.toucher.damage = 50;
    } else {
        this->colliderSpheres.elements[1].info.toucher.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[2].info.toucher.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[0].info.toucher.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[2].info.toucher.effect = 0;
        this->colliderSpheres.elements[2].info.toucher.damage = 0;
        this->colliderSpheres.elements[1].info.toucher.effect = 0;
        this->colliderSpheres.elements[1].info.toucher.damage = 0;
        this->colliderSpheres.elements[0].info.toucher.effect = 0;
        this->colliderSpheres.elements[0].info.toucher.damage = 0;
    }
    if (this->timer > 0) {
        this->timer -= 1;
    } else {
        EnThefather_ForwardBackCheck(this, play);
    }
}

void EnThefather_SetupAttackK(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKK);
    this->actionFunc = EnThefather_AttackK;
}

void EnThefather_AttackK(EnThefather* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if (((this->skelAnime.curFrame >= 26) && (this->skelAnime.curFrame < 35)) ||
        ((this->skelAnime.curFrame >= 59) && (this->skelAnime.curFrame < 76)) ||
        ((this->skelAnime.curFrame >= 90) && (this->skelAnime.curFrame < 96))) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        if (this->skelAnime.curFrame == 72) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->FootL, 10.0f, 3, 2.0f, 250, 15, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
        } else if (this->skelAnime.curFrame == 94) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->FootR, 10.0f, 3, 2.0f, 250, 15, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 5, 10);
        }
        if (((this->skelAnime.curFrame >= 59) && (this->skelAnime.curFrame < 76)) ||
            ((this->skelAnime.curFrame >= 90) && (this->skelAnime.curFrame < 96))) {
            this->actor.speed = 4;
        }
    } else {
        this->actor.speed = 0;
    }
    if ((this->skelAnime.curFrame == 67) || (this->skelAnime.curFrame == 94)) {
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    }
    if ((this->skelAnime.curFrame >= 26.0f) && (this->skelAnime.curFrame < 37.0f)) {
        if (this->skelAnime.curFrame == 31) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_COLI2);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->HandR, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 7, 15);
        } else if (this->skelAnime.curFrame == 32) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_COLI2);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->HandL, 10.0f, 3, 2.0f, 250, 150, false);
        }
        this->colliderSpheres.elements[1].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[2].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].info.toucher.effect = 4;
        this->colliderSpheres.elements[1].info.toucher.damage = 50;
        this->colliderSpheres.elements[2].info.toucher.effect = 4;
        this->colliderSpheres.elements[2].info.toucher.damage = 50;
    } else if ((this->skelAnime.curFrame >= 65.0f) && (this->skelAnime.curFrame < 69.0f)) {
        this->colliderSpheres.elements[1].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].info.toucher.effect = 4;
        this->colliderSpheres.elements[1].info.toucher.damage = 50;
    } else if ((this->skelAnime.curFrame >= 90.0f) && (this->skelAnime.curFrame < 97.0f)) {
        this->colliderSpheres.elements[2].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[2].info.toucher.effect = 4;
        this->colliderSpheres.elements[2].info.toucher.damage = 50;
    } else {
        this->colliderSpheres.elements[1].info.toucher.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[2].info.toucher.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[1].info.toucher.effect = 0;
        this->colliderSpheres.elements[1].info.toucher.damage = 0;
        this->colliderSpheres.elements[2].info.toucher.effect = 0;
        this->colliderSpheres.elements[2].info.toucher.damage = 0;
    }
    if (this->timer > 0) {
        this->timer -= 1;
    } else {
        EnThefather_ForwardBackCheck(this, play);
    }
}

void EnThefather_SetupAttackL(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKL);
    this->actionFunc = EnThefather_AttackL;
}

void EnThefather_AttackL(EnThefather* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if ((this->skelAnime.curFrame >= 1) && (this->skelAnime.curFrame < 32)) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        this->actor.speed = 0;

    } else if ((this->skelAnime.curFrame >= 32) && (this->skelAnime.curFrame < 59)) {
        if ((this->skelAnime.curFrame >= 32) && (this->skelAnime.curFrame < 45)) {
            this->actor.velocity.y = 10;
        }
        this->actor.speed = (this->actor.xzDistToPlayer * 0.06);
    } else if (((this->skelAnime.curFrame >= 73) && (this->skelAnime.curFrame < 80)) ||
               ((this->skelAnime.curFrame >= 83) && (this->skelAnime.curFrame < 92))) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0xFFF, 1);
        this->actor.speed = 5.0f;
        if (this->skelAnime.curFrame == 79) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->FootL, 10.0f, 3, 2.0f, 250, 15, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 4, 10);
        } else if (this->skelAnime.curFrame == 91) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_WALK);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->FootR, 10.0f, 3, 2.0f, 250, 15, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 5, 10);
        }
    } else {
        this->actor.speed = 0;
    }
    if ((this->skelAnime.curFrame == 55) || (this->skelAnime.curFrame == 70) || (this->skelAnime.curFrame == 88)) {
        Actor_PlaySfx(&this->actor, NA_SE_IT_HAMMER_SWING);
    }
    if ((this->skelAnime.curFrame >= 58.0f) && (this->skelAnime.curFrame < 88.0f)) {
        if (this->skelAnime.curFrame == 60) {
            Actor_PlaySfx(&this->actor, NA_SE_EN_DODO_K_COLI2);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->HandL, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->HandR, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->FootL, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_SpawnFloorDustRing(play, &this->actor, &this->FootR, 10.0f, 3, 2.0f, 250, 150, false);
            Actor_RequestQuakeAndRumble(&this->actor, play, 7, 15);
        }
        this->colliderSpheres.elements[1].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[2].info.toucher.dmgFlags = 0xFFCFFFFF;
        this->colliderSpheres.elements[1].info.toucher.effect = 4;
        this->colliderSpheres.elements[1].info.toucher.damage = 50;
        this->colliderSpheres.elements[2].info.toucher.effect = 4;
        this->colliderSpheres.elements[2].info.toucher.damage = 50;
    } else {
        this->colliderSpheres.elements[1].info.toucher.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[2].info.toucher.dmgFlags = 0x00000000;
        this->colliderSpheres.elements[1].info.toucher.effect = 0x00;
        this->colliderSpheres.elements[1].info.toucher.damage = 0x00;
        this->colliderSpheres.elements[2].info.toucher.effect = 0x00;
        this->colliderSpheres.elements[2].info.toucher.damage = 0x00;
    }
    if (this->timer > 0) {
        this->timer -= 1;
    } else {
        EnThefather_ForwardBackCheck(this, play);
    }
}

void EnThefather_SetupAttackMa(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKM);
    this->actionFunc = EnThefather_AttackMa;
}

void EnThefather_AttackMa(EnThefather* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    s16 relYawTowardsPlayer = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    relYawTowardsPlayer = ABS(relYawTowardsPlayer);
    if (this->skelAnime.curFrame < 14.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
        Math_SmoothStepToS(&this->actor.world.rot.y, this->actor.yawTowardsPlayer, 1, 0x3FF, 1);
    }
    if (this->timer > 0) {
        if ((this->skelAnime.curFrame == 22.0f) && (this->screamcountdown <= 0)) {
            EnThefather_Scream(this, play);
        }

        this->actor.speed = 0.0f;
        if ((this->skelAnime.curFrame >= 22.0f) && (this->actor.xzDistToPlayer <= 90) &&
            (relYawTowardsPlayer < 0x1000)) {
            this->actor.speed = 0.0f;
            this->timer = 71;
            EnThefather_SetupAttackMb(this, play);
            Player* player = GET_PLAYER(play);
            player->invincibilityTimer = 0;
        }
        this->timer -= 1;
        Player* player = GET_PLAYER(play);

    } else {
        this->timer = 35;
        EnThefather_SetupAttackMc(this, play);
    }
}

void EnThefather_SetupAttackMb(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKMHIT);
    this->actionFunc = EnThefather_AttackMb;
    Player* player = GET_PLAYER(play);
    play->grabPlayer(play, player);
    player->actor.parent = &this->actor;
    this->actor.child = &player->actor;
}

void EnThefather_AttackMb(EnThefather* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    Vec3f pos;
    pos.x = player->actor.world.pos.x;
    pos.y = player->actor.world.pos.y + 65.0f;
    pos.z = player->actor.world.pos.z;

    Vec3f result = EnThefather_VectorBetween(this->HandR, this->HandL);
    SkelAnime_Update(&this->skelAnime);
    if (this->skelAnime.curFrame == 40) {
        play->damagePlayer(play, -90);
        Actor_PlaySfx(&this->actor, NA_SE_EN_DEADHAND_BITE);
        CollisionCheck_SpawnRedBlood(play, &pos);
    }
    if (this->timer > 0) {
        this->actor.speed = 0.0f;
        this->timer -= 1;
        if (this->skelAnime.curFrame < 40) {
            player->actor.world.pos.x = this->HandL.x;
            player->actor.world.pos.z = this->HandL.z;
            player->actor.world.pos.y = this->HandL.y - 20;
        }
        if ((this->skelAnime.curFrame == 30.0f) && (this->screamcountdown <= 0)) {
            EnThefather_Scream(this, play);
        }

        if ((this->skelAnime.curFrame == 40) || (this->actionFunc == EnThefather_Death)) {
            player->actor.parent = NULL;
            this->actor.child = NULL;
            func_8002F71C(play, &this->actor, 10.0f, this->actor.yawTowardsPlayer, 1.0f);
        }
    } else {
        EnThefather_ForwardBackCheck(this, play);
    }
}

void EnThefather_SetupAttackMc(EnThefather* this, PlayState* play) {
    this->actor.world.rot.y = this->actor.yawTowardsPlayer;
    EnThefather_ChangeAnimation(this, GTHEFATHER_ANIM_ATTACKMMISS);
    this->actionFunc = EnThefather_AttackMc;
}

void EnThefather_AttackMc(EnThefather* this, PlayState* play) {

    SkelAnime_Update(&this->skelAnime);
    if (this->timer > 0) {
        this->actor.speed = 0.0f;
        this->timer -= 1;

    } else {
        EnThefather_ForwardBackCheck(this, play);
    }
}
void EnThefather_Scream(EnThefather* this, PlayState* play) {
    f32 RandNum = Rand_ZeroOne();
    this->screamcountdown = 100;
    if (RandNum > 0.25) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_IRONNACK_DASH);
    } else if (RandNum < 0.5) {
        Actor_PlaySfx(&this->actor, NA_SE_VO_ST_DAMAGE);
    } else if (RandNum < 0.75) {
        Actor_PlaySfx(&this->actor, NA_SE_VO_FR_LAUGH_0);
        //  } else if (RandNum < 0.8) {
        //        Actor_PlaySfx(&this->actor, NA_SE_VO_ST_DAMAGE);
        //  } else {
        //     Actor_PlaySfx(&this->actor, NA_SE_VO_ST_DAMAGE);
    }
};
