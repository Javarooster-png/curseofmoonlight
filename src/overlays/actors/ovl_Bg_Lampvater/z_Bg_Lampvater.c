#include "z_Bg_Lampvater.h"
#include "assets/objects/object_lampvater/gElevatorDL.h"
#include "assets/objects/object_lampvater/gElevatorDLLight.h"
#include "assets/objects/object_lampvater/gElevatorDL_collision.h"
#define FLAGS (ACTOR_FLAG_4 | ACTOR_FLAG_5)
#define LAMPVATER_TRAVEL_DURATION 120
#define LAMPVATER_MAX_HEIGHT 1320.6f
void Plat_Init(SPlat* this, PlayState* play);
void Plat_Destroy(SPlat* this, PlayState* play);
void Plat_Update(SPlat* this, PlayState* play);
void Plat_Draw(SPlat* this, PlayState* play);
void Plat_SpawnDust(SPlat* this, PlayState* play);
void Plat_SetupWaittoMoveDown(SPlat* this, PlayState* play);
void Plat_WaittoMoveDown(SPlat* this, PlayState* play);
void Plat_SetupWaittoMoveUp(SPlat* this, PlayState* play);
void Plat_WaittoMoveUp(SPlat* this, PlayState* play);
void Plat_SetupMoveDown(SPlat* this, PlayState* play);
void Plat_MoveDown(SPlat* this, PlayState* play);
void Plat_SetupMoveUp(SPlat* this, PlayState* play);
void Plat_MoveUp(SPlat* this, PlayState* play);
const ActorInit Bg_Lampvater_InitVars = {
    ACTOR_LAMPVATER,          ACTORCAT_BG,         FLAGS,
    OBJECT_LAMPVATER,         sizeof(SPlat),          (ActorFunc)Plat_Init,
    (ActorFunc)Plat_Destroy, (ActorFunc)Plat_Update, (ActorFunc)Plat_Draw,
};
static InitChainEntry sInitChain[] = { ICHAIN_VEC3F_DIV1000(scale, 1000, ICHAIN_STOP) };
void Plat_Init(SPlat* this, PlayState* play) {
    CollisionHeader* colHeader = NULL;
    CollisionHeader_GetVirtual(&gElevatorDL_collisionHeader, &colHeader);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);
    DynaPolyActor_Init(&this->dyna, 1);
    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
     Plat_SetupWaittoMoveUp(this, play);

}

void Plat_Destroy(SPlat* this, PlayState* play) {

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void Plat_Update(SPlat* this, PlayState* play) {
    Player* player = GET_PLAYER(play);

    if (DynaPolyActor_IsPlayerOnTop(&this->dyna)) {
        if (player->speedXZ != 0.0f) {
            func_8002F974(&this->dyna.actor, NA_SE_PL_WALK_GROUND + SURFACE_SFX_OFFSET_BRIDGE - SFX_FLAG);
        }
    }

    this->actionFunc(this, play);
}

void Plat_Draw(SPlat* this, PlayState* play) {
    Gfx_DrawDListOpa(play, gElevatorDL);
    Gfx_DrawDListXlu(play, gElevatorDLLight);
}

f32 Plat_SmoothStep(f32 x) {
    x = CLAMP(x, 0.0f, 1.0f);
    return x * x * x * (x * (x * 6.0f - 15.0f) + 10.0f);
}

void Plat_SetupWaittoMoveDown(SPlat* this, PlayState* play) {
    this->timer = 40;
    this->actionFunc = Plat_WaittoMoveDown;
}
void Plat_WaittoMoveDown(SPlat* this, PlayState* play) {
    if (DECR(this->timer) == 0) {
        Plat_SetupMoveDown(this, play);
    } else {
    }
}

void Plat_SetupMoveDown(SPlat* this, PlayState* play) {
    this->timer = LAMPVATER_TRAVEL_DURATION;
    
    this->actionFunc = Plat_MoveDown;
}

void Plat_MoveDown(SPlat* this, PlayState* play) {
    f32 step = this->timer / ((f32)LAMPVATER_TRAVEL_DURATION);
    f32 offset = LAMPVATER_MAX_HEIGHT * Plat_SmoothStep(step);
    this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y + offset;
    if (DECR(this->timer) == 0) {
            this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y;
        Plat_SetupWaittoMoveUp(this, play);

    } else {
                func_8002F974(&this->dyna.actor, NA_SE_EV_BRIDGE_OPEN - SFX_FLAG);
    }
}

void Plat_SetupWaittoMoveUp(SPlat* this, PlayState* play) {
    this->timer = 40;
                Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_BRIDGE_OPEN_STOP);
    this->actionFunc = Plat_WaittoMoveUp;
}

void Plat_WaittoMoveUp(SPlat* this, PlayState* play) {
    if (DECR(this->timer) == 0) {
        Plat_SetupMoveUp(this, play);
    }
}

void Plat_SetupMoveUp(SPlat* this, PlayState* play) {
    this->timer = LAMPVATER_TRAVEL_DURATION;
    this->actionFunc = Plat_MoveUp;
}

void Plat_MoveUp(SPlat* this, PlayState* play) {
        f32 step = (LAMPVATER_TRAVEL_DURATION - this->timer) / ((f32)LAMPVATER_TRAVEL_DURATION);
    f32 offset = LAMPVATER_MAX_HEIGHT * Plat_SmoothStep(step);
    this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y + offset;
    if (DECR(this->timer) == 0) {
        this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y + LAMPVATER_MAX_HEIGHT;
        Plat_SetupWaittoMoveDown(this, play);
    } else {
                func_8002F974(&this->dyna.actor, NA_SE_EV_BRIDGE_OPEN - SFX_FLAG);
    }
}
