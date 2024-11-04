#include "z_Bg_IronGate.h"
#include "assets/objects/object_irongate/gIronGateDL.h"
#include "assets/objects/object_irongate/gIronGateDL_collision_collision.h"
#define FLAGS (ACTOR_FLAG_4 | ACTOR_FLAG_5)
#define SWITCH_FLAG(this) (this->dyna.actor.params & 0x3F)
void IronG_Init(SIronG* this, PlayState* play);
void IronG_Destroy(SIronG* this, PlayState* play);
void IronG_Update(SIronG* this, PlayState* play);
void IronG_Draw(SIronG* this, PlayState* play);
void IronG_SetupWaitforSwitch(SIronG* this, PlayState* play);
void IronG_WaitforSwitch(SIronG* this, PlayState* play);
void IronG_SetupOpen(SIronG* this, PlayState* play);
void IronG_Open(SIronG* this, PlayState* play);

const ActorInit Bg_IronGate_InitVars = {
    ACTOR_IRONGATE,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_IRONGATE,
    sizeof(SIronG),
    (ActorFunc)IronG_Init,
    (ActorFunc)IronG_Destroy,
    (ActorFunc)IronG_Update,
    (ActorFunc)IronG_Draw,
};
// static InitChainEntry sInitChain[] = { ICHAIN_VEC3F_DIV1000(scale, 1000, ICHAIN_STOP) };
void IronG_Init(SIronG* this, PlayState* play) {
    CollisionHeader* colHeader = NULL;
    CollisionHeader_GetVirtual(&gIronGateDL_collision_collisionHeader, &colHeader);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);
    //    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    IronG_SetupWaitforSwitch(this, play);
}

void IronG_Destroy(SIronG* this, PlayState* play) {

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void IronG_Update(SIronG* this, PlayState* play) {
    this->actionFunc(this, play);
}

void IronG_Draw(SIronG* this, PlayState* play) {
    Gfx_DrawDListOpa(play, gIronGateDL);
}

void IronG_SetupWaitforSwitch(SIronG* this, PlayState* play) {
    this->actionFunc = IronG_WaitforSwitch;
}

void IronG_WaitforSwitch(SIronG* this, PlayState* play) {
    if (Flags_GetSwitch(play, SWITCH_FLAG(this))) {
        IronG_SetupOpen(this, play);
    }
}

void IronG_SetupOpen(SIronG* this, PlayState* play) {
    this->timer = 35;
    this->actionFunc = IronG_Open;
}

void IronG_Open(SIronG* this, PlayState* play) {
    if (DECR(this->timer) == 0) {
    } else {
        Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_METALGATE_OPEN - SFX_FLAG);
        this->dyna.actor.shape.rot.y += 0x16D;
    }
}