#include "z_Door_Gate.h"
#include "assets/objects/object_gate/object_gate.h"
#include "functions.h"
#define FLAGS (ACTOR_FLAG_4 | ACTOR_FLAG_5)
void Gate_Init(SGate* this, PlayState* play);
void Gate_Destroy(SGate* this, PlayState* play);
void Gate_Update(SGate* this, PlayState* play);
void Gate_Draw(SGate* this, PlayState* play);
void Gate_ChangeAnimation(SGate* this, s32 anim);
void Gate_SetupSwing(SGate* this, PlayState* play);
void Gate_Swing(SGate* this, PlayState* play);
void Gate_SetupIdle(SGate* this, PlayState* play);
void Gate_Idle(SGate* this, PlayState* play);

const ActorInit Door_Gate_InitVars = {
    ACTOR_GATE,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_GATE,
    sizeof(SGate),
    (ActorFunc)Gate_Init,
    (ActorFunc)Gate_Destroy,
    (ActorFunc)Gate_Update,
    (ActorFunc)Gate_Draw,
};

typedef enum { GATE_IDLE = 0, GATE_BANG, GATE_ANIM_MAX } SGateAnim;
static InitChainEntry sInitChain[] = { ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_STOP) };
static AnimationInfo sAnimationInfo[GATE_ANIM_MAX] = {
    { &gGateskelIdleAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
    { &gGateskelBangAnim, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 1.0f },
};

void Gate_SpawnDust(SGate* this, PlayState* play) {

    Color_RGBA8 primColor = { 46, 55, 28, 255 };
    Color_RGBA8 envColor = { 40, 50, 25, 255 };

    Vec3f pos;
    Vec3f velocity = { 0.0f, 6.0f * Rand_ZeroOne(), 0.0f };
    Vec3f accel = { 0.0f, 0.0f, 0.0f };
    s16 scale = 200 * Rand_ZeroOne() ;
    s16 scaleStep = 200 * Rand_ZeroOne() ;
    s16 life = 80;
    for (u8 i = 0; i < 3; i++) {
        if (i == 0) {
            pos.x = this->actor.home.pos.x + 266.49f;
            pos.z = this->actor.home.pos.z + 22.49f;
            pos.y = this->actor.home.pos.y;
        }
        if (i == 1) {
            pos.x = this->actor.home.pos.x +  266.49f;
            pos.z = this->actor.home.pos.z - 22.49f;
            pos.y = this->actor.home.pos.y;
        }
        if (i == 2) {
            pos.x = this->actor.home.pos.x;
            pos.z = this->actor.home.pos.z  + 22.5f;
            pos.y = this->actor.home.pos.y;
        }
    }
    EffectSsDust_Spawn(play, 0, &pos, &velocity, &accel, &primColor, &envColor, scale, scaleStep, life, 0);
}

void Gate_Init(SGate* this, PlayState* play) {
    Actor_ProcessInitChain(&this->actor, sInitChain);
    SkelAnime_Init(play, &this->skelAnime, &gGateskel, &gGateskelIdleAnim, this->jointTable, this->morphTable,
                   GGATESKEL_NUM_LIMBS);
        if (this->actor.params == 0) {
    Gate_ChangeAnimation(this, GATE_BANG);
    this->timer = 99;
    Gate_SetupSwing(this, play);
        } else {
    Gate_ChangeAnimation(this, GATE_IDLE);
    this->timer = 99;
    Gate_SetupIdle(this, play);   
        }
}
void Gate_ChangeAnimation(SGate* this, s32 anim) {
    Animation_ChangeByInfo(&this->skelAnime, sAnimationInfo, anim);
}

void Gate_SetupSwing(SGate* this, PlayState* play) {

    this->actionFunc = Gate_Swing;
}

void Gate_Swing(SGate* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);
    if (DECR(this->timer) == 0) {

        Gate_SetupSwing(this, play);
        Gate_ChangeAnimation(this, GATE_BANG);
        this->timer = 99;
    } else {

        if (this->skelAnime.curFrame == 14.0f) {
            Actor_PlaySfx(&this->actor, NA_SE_EV_ELEVATOR_STOP);
        }
        if ((this->skelAnime.curFrame >= 14.0f) && (this->skelAnime.curFrame < 16.0f)) {
            Gate_SpawnDust(this, play);
        }
    }
}
void Gate_SetupIdle(SGate* this, PlayState* play) {

    this->actionFunc = Gate_Idle;
}
void Gate_Idle(SGate* this, PlayState* play) {
    SkelAnime_Update(&this->skelAnime);
    if (SkelAnime_Update(&this->skelAnime)) {

        Gate_SetupIdle(this, play);
    }
}
void Gate_Destroy(SGate* this, PlayState* play) {
}

void Gate_Update(SGate* this, PlayState* play) {
    this->actionFunc(this, play);
}

void Gate_Draw(SGate* this, PlayState* play) {
    SkelAnime_DrawOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, NULL, NULL, this);
}