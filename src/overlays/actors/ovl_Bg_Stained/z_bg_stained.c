

#include "z_bg_stained.h"
#include "overlays/effects/ovl_Effect_Ss_Kakera/z_eff_ss_kakera.h"
#define FLAGS (ACTOR_FLAG_4 | ACTOR_FLAG_5)
#define SWITCH_FLAG(this) (this->actor.params & 0x3F)
void BgStained_Init(BgStained* this, PlayState* play);
void BgStained_Destroy(BgStained* this, PlayState* play);
void BgStained_Update(BgStained* this, PlayState* play);
void BgStained_Draw(BgStained* this, PlayState* play);
void BgStained_SetupWaitforSwitch(BgStained* this, PlayState* play);
void BgStained_WaitforSwitch(BgStained* this, PlayState* play);
void BgStained_SetupBreak(BgStained* this, PlayState* play);
void BgStained_Break(BgStained* this, PlayState* play);

ActorInit Bg_Stained_InitVars = {
    /**/ ACTOR_STAINED,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_STAINED,
    /**/ sizeof(BgStained),
    /**/ (ActorFunc)BgStained_Init,
    /**/ (ActorFunc)BgStained_Destroy,
    /**/ (ActorFunc)BgStained_Update,
    /**/ (ActorFunc)BgStained_Draw,
};
typedef struct {
    /* 0x00 */ s16 x;
    /* 0x02 */ s16 z;
} BgStainedFramgentScale; // size = 0x4

static BgStainedFramgentScale sFragmentScales[] = {
    { 120, -120 }, { 120, 0 },     { 120, 120 }, { 0, -120 },   { 0, 0 },
    { 0, 120 },    { -120, -120 }, { -120, 0 },  { -120, 120 },
};

void BgStained_Init(BgStained* this, PlayState* play) {
    BgStained_SetupWaitforSwitch(this, play);
}

void BgStained_Destroy(BgStained* this, PlayState* play) {
}

void BgStained_Update(BgStained* this, PlayState* play) {
        this->actionFunc(this, play);
}

void BgStained_Draw(BgStained* this, PlayState* play) {
    if (this->actionFunc != BgStained_Break) { 
    Gfx_DrawDListOpa(play, gWindowMeshDL);
    Gfx_DrawDListXlu(play, gWindowMesh_transparent);
    }
}
void BgStained_SpawnFragments(BgStained* this, PlayState* play) {
    Vec3f pos;
    Vec3f velocity;
    Vec3f* temp_s3;
    s32 pad0;
    s32 i;

    temp_s3 = &this->actor.world.pos;

    for (i = 0; i < ARRAY_COUNT(sFragmentScales); i++) {
        pos.x = sFragmentScales[i].x * this->actor.scale.x + temp_s3->x;
        pos.y = Rand_ZeroOne() * 70.0f + temp_s3->y;
        pos.z = sFragmentScales[i].z * this->actor.scale.z + temp_s3->z;
        velocity.x = sFragmentScales[i].x * this->actor.scale.x * 12.8f;
        velocity.y = Rand_ZeroOne() * 10.0f + 6.0f;
        velocity.z = sFragmentScales[i].z * this->actor.scale.z + Rand_ZeroOne() * 11.8f;
        EffectSsKakera_Spawn(play, &pos, &velocity, temp_s3, -256, (Rand_ZeroOne() < 0.5f) ? 64 : 32, 15, 15, 0,
                             (Rand_ZeroOne() * 75.0f + 75.0f) * this->actor.scale.x, 0, 32, 50, KAKERA_COLOR_NONE,
                             OBJECT_STAINED, gShard);
    }
}
void BgStained_SetupWaitforSwitch(BgStained* this, PlayState* play) {
    this->actionFunc = BgStained_WaitforSwitch;
}

void BgStained_WaitforSwitch(BgStained* this, PlayState* play) {
    if (Flags_GetSwitch(play, SWITCH_FLAG(this))) {
        BgStained_SetupBreak(this, play);
    }
}
void BgStained_SetupBreak(BgStained* this, PlayState* play) {
    SfxSource_PlaySfxAtFixedWorldPos(play, &this->actor.world.pos, 30, NA_SE_EV_ICE_BROKEN);
        this->actionFunc = BgStained_Break;
        this->timer = 6;
}

void BgStained_Break(BgStained* this, PlayState* play) {
    if (DECR(this->timer) == 0) {
        Actor_Kill(&this->actor);
    } else {
    BgStained_SpawnFragments(this, play);
    }
}
