#include "z_Bg_Portc.h"
#include "assets/objects/object_portcullis/gPortcDL.h"
#include "assets/objects/object_portcullis/gPortcDL_collision.h"
#define FLAGS (ACTOR_FLAG_4 | ACTOR_FLAG_5)
#define SWITCH_FLAG(this) (this->dyna.actor.params & 0x3F)
void Portc_Init(SPortc* this, PlayState* play);
void Portc_Destroy(SPortc* this, PlayState* play);
void Portc_Update(SPortc* this, PlayState* play);
void Portc_Draw(SPortc* this, PlayState* play);
void Portc_SetupWaitforSwitch(SPortc* this, PlayState* play);
void Portc_WaitforSwitch(SPortc* this, PlayState* play);
void Portc_SetupOpen(SPortc* this, PlayState* play);
void Portc_Open(SPortc* this, PlayState* play);

const ActorInit Bg_Portc_InitVars = {
    ACTOR_PORTC,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_PORTCULLIS,
    sizeof(SPortc),
    (ActorFunc)Portc_Init,
    (ActorFunc)Portc_Destroy,
    (ActorFunc)Portc_Update,
    (ActorFunc)Portc_Draw,
};
static InitChainEntry sInitChain[] = { ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_STOP) };
void Portc_Init(SPortc* this, PlayState* play) {
    CollisionHeader* colHeader = NULL;
    CollisionHeader_GetVirtual(&gPortcDL_collisionHeader, &colHeader);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);
        Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    Portc_SetupWaitforSwitch(this, play);
}

void Portc_Destroy(SPortc* this, PlayState* play) {

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void Portc_Update(SPortc* this, PlayState* play) {
    this->actionFunc(this, play);
}

void Portc_Draw(SPortc* this, PlayState* play) {
    Gfx_DrawDListOpa(play, gPortcDL);
}

void Portc_SetupWaitforSwitch(SPortc* this, PlayState* play) {
    this->actionFunc = Portc_WaitforSwitch;
}

void Portc_WaitforSwitch(SPortc* this, PlayState* play) {
    if (Flags_GetSwitch(play, SWITCH_FLAG(this))) {
        Portc_SetupOpen(this, play);
    }
}

void Portc_SetupOpen(SPortc* this, PlayState* play) {
    this->timer = 60;
    this->actionFunc = Portc_Open;
}

void Portc_Open(SPortc* this, PlayState* play) {
    if (DECR(this->timer) == 0) {
    } else {
        Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_METALGATE_OPEN - SFX_FLAG);
        this->dyna.actor.world.pos.y += 4.16666;
    }
}