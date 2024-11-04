/*
 * File: wall_pull_switch.c
 * Overlay: ovl_Wall_Pull_Switch
 * Description: A switch that goes on walls and can be pulled by the player, from the Hylian Modding actor pack.
 * Params: XXYY
 *      -- XX: Number of seconds the switch takes to retract. Set to 0 for never retracting.
 *      -- YY: Switch flag (0x00 thru 0x3F)
 */

#include "wall_pull_switch.h"
#include "assets/objects/object_wall_pull_switch/object_wall_pull_switch.h"

#define FLAGS (ACTOR_FLAG_4 | ACTOR_FLAG_5)

#define SWITCH_FLAG(this) (this->dyna.actor.params & 0x3F)
#define DURATION(this) ((this->dyna.actor.params >> 8) & 0xFF)

#define WALLSWITCH_HEIGHT_OFFSET_ADULT 35.0f
#define WALLSWITCH_HEIGHT_OFFSET_CHILD 25.0f
#define WALLSWITCH_COLHDR &gPullSwitchCol_collisionHeader
#define WALLSWITCH_NOGRAB_COLHDR &gPullSwitchNoGrabCol_collisionHeader

void WallPullSwitch_Init(Actor* thisx, PlayState* play);
void WallPullSwitch_Destroy(Actor* thisx, PlayState* play);
void WallPullSwitch_Update(Actor* thisx, PlayState* play);
void WallPullSwitch_Draw(Actor* thisx, PlayState* play);

void WallPullSwitch_SnapToWall(WallPullSwitch* this, PlayState* play);
void WallPullSwitch_AdjustHeightForAge(WallPullSwitch* this, PlayState* play);

void WallPullSwitch_SetupFrame(WallPullSwitch* this, PlayState* play);
void WallPullSwitch_SetupWaitForPlayerGrab(WallPullSwitch* this, PlayState* play);
void WallPullSwitch_SetupPlayerPulling(WallPullSwitch* this, PlayState* play);
void WallPullSwitch_SetupRetract(WallPullSwitch* this, PlayState* play);
void WallPullSwitch_SetupStayOpen(WallPullSwitch* this, PlayState* play);

const ActorInit Wall_Pull_Switch_InitVars = {
    ACTOR_WALL_PULL_SWITCH,
    ACTORCAT_SWITCH,
    FLAGS,
    OBJECT_WALL_PULL_SWITCH,
    sizeof(WallPullSwitch),
    (ActorFunc)WallPullSwitch_Init,
    (ActorFunc)WallPullSwitch_Destroy,
    (ActorFunc)WallPullSwitch_Update,
    (ActorFunc)WallPullSwitch_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_STOP),
};

void WallPullSwitch_Init(Actor* thisx, PlayState* play) {
    WallPullSwitch* this = (WallPullSwitch*)thisx;
    CollisionHeader* colHeader = NULL;

    Actor_ProcessInitChain(thisx, sInitChain);

    if (this->dyna.actor.home.rot.z == 1) {
        Actor_ChangeCategory(play, &play->actorCtx, &this->dyna.actor, ACTORCAT_BG);
        WallPullSwitch_SetupFrame(this, play);
        return;
    }

    DynaPolyActor_Init(&this->dyna, 0);
    this->activeCol = WALLSWITCH_COL_NO_GRAB;
    CollisionHeader_GetVirtual(WALLSWITCH_NOGRAB_COLHDR, &colHeader);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);
    WallPullSwitch_AdjustHeightForAge(this, play);
    WallPullSwitch_SnapToWall(this, play);

    Actor_Spawn(&play->actorCtx, play, ACTOR_WALL_PULL_SWITCH, this->dyna.actor.world.pos.x,
                this->dyna.actor.world.pos.y, this->dyna.actor.world.pos.z, this->dyna.actor.world.rot.x,
                this->dyna.actor.world.rot.y, 1, 0x0000);

    this->dyna.actor.home.pos = this->dyna.actor.world.pos;

    if (Flags_GetSwitch(play, SWITCH_FLAG(this))) {
        WallPullSwitch_SetupStayOpen(this, play);
    } else {
        WallPullSwitch_SetupWaitForPlayerGrab(this, play);
    }
}

void WallPullSwitch_Destroy(Actor* thisx, PlayState* play) {
    WallPullSwitch* this = (WallPullSwitch*)thisx;

    if (this->dyna.actor.category == ACTORCAT_SWITCH) {
        DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
    }
}

void WallPullSwitch_Update(Actor* thisx, PlayState* play) {
    WallPullSwitch* this = (WallPullSwitch*)thisx;

    this->actionFunc(this, play);
}

void WallPullSwitch_DrawFrame(Actor* thisx, PlayState* play) {
    Gfx_DrawDListOpa(play, gPullSwitchFrameDL);
}

void WallPullSwitch_Draw(Actor* thisx, PlayState* play) {
    WallPullSwitch* this = (WallPullSwitch*)thisx;

    Gfx_DrawDListOpa(play, gPullSwitchRodDL);
}

void WallPullSwitch_DoNothing(WallPullSwitch* this, PlayState* play) {
}

void WallPullSwitch_ChangeCollision(WallPullSwitch* this, PlayState* play, void* colHeader) {
    CollisionHeader* colHeaderVirtual = NULL;
    CollisionHeader_GetVirtual(colHeader, &colHeaderVirtual);
    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeaderVirtual);
}

void WallPullSwitch_SetupFrame(WallPullSwitch* this, PlayState* play) {
    this->dyna.actor.home.rot.z = 0;
    this->actionFunc = WallPullSwitch_DoNothing;
    this->dyna.actor.draw = WallPullSwitch_DrawFrame;
}

void WallPullSwitch_SnapToWall(WallPullSwitch* this, PlayState* play) {
    Vec3f result;
    CollisionPoly* outPoly = NULL;
    Vec3f vecA = this->dyna.actor.world.pos;
    Vec3f vecB = this->dyna.actor.world.pos;

    vecA.x += Math_SinS(this->dyna.actor.shape.rot.y) * 10.0f;
    vecA.z += Math_CosS(this->dyna.actor.shape.rot.y) * 10.0f;

    vecB.x -= Math_SinS(this->dyna.actor.shape.rot.y) * 30.0f;
    vecB.z -= Math_CosS(this->dyna.actor.shape.rot.y) * 30.0f;

    BgCheck_EntitySphVsWall1(&play->colCtx, &result, &vecB, &vecA, 0.0f, &outPoly, 0.0f);

    if (outPoly != NULL) {
        this->dyna.actor.world.pos = result;
        this->dyna.actor.world.rot.y = this->dyna.actor.shape.rot.y = Math_Atan2S(outPoly->normal.z, outPoly->normal.x);
    }
}

void WallPullSwitch_AdjustHeightForAge(WallPullSwitch* this, PlayState* play) {
    CollisionPoly outPoly;

    f32 floorY = BgCheck_AnyRaycastDown1(&play->colCtx, &outPoly, &this->dyna.actor.world.pos);

    if (floorY > BGCHECK_Y_MIN) {
        if (LINK_IS_ADULT) {
            this->dyna.actor.world.pos.y = floorY + WALLSWITCH_HEIGHT_OFFSET_ADULT;
        } else {
            this->dyna.actor.world.pos.y = floorY + WALLSWITCH_HEIGHT_OFFSET_CHILD;
        }
    }
}

void WallPullSwitch_WaitForPlayerGrab(WallPullSwitch* this, PlayState* play) {
    Player* player = GET_PLAYER(play);

    if (Player_IsFacingActor(&this->dyna.actor, DEG_TO_BINANG(67.5f), play) &&
        this->dyna.actor.xyzDistToPlayerSq < SQ(50.0f)) {
        if (this->activeCol == WALLSWITCH_COL_NO_GRAB) {
            this->activeCol = WALLSWITCH_COL_GRAB;
            WallPullSwitch_ChangeCollision(this, play, WALLSWITCH_COLHDR);
        }
    } else {
        if (this->activeCol == WALLSWITCH_COL_GRAB) {
            this->activeCol = WALLSWITCH_COL_NO_GRAB;
            WallPullSwitch_ChangeCollision(this, play, WALLSWITCH_NOGRAB_COLHDR);
        }
    }

    if (this->dyna.unk_150 < -0.001f) {
        WallPullSwitch_SetupPlayerPulling(this, play);
    } else {
        this->dyna.unk_150 = 0.0f;
        player->stateFlags2 &= ~PLAYER_STATE2_4;
    }
}

void WallPullSwitch_SetupWaitForPlayerGrab(WallPullSwitch* this, PlayState* play) {
    Flags_UnsetSwitch(play, SWITCH_FLAG(this));
    this->dyna.actor.world.pos = this->dyna.actor.home.pos;
    this->actionFunc = WallPullSwitch_WaitForPlayerGrab;
}

void WallPullSwitch_PlayerPulling(WallPullSwitch* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    DECR(this->timer);

    this->dyna.actor.world.pos.x += Math_SinS(this->dyna.actor.world.rot.y) * 2.0f;
    this->dyna.actor.world.pos.z += Math_CosS(this->dyna.actor.world.rot.y) * 2.0f;

    Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_TRAP_OBJ_SLIDE - SFX_FLAG);

    if (this->timer == 1) {
        player->stateFlags1 |= PLAYER_STATE1_5;
        // turning the collision off and back on forces Link to drop the switch
        DynaPoly_DisableCollision(play, &play->colCtx.dyna, this->dyna.bgId);
    } else if (this->timer == 0) {
        player->stateFlags1 &= ~PLAYER_STATE1_5;
        DynaPoly_EnableCollision(play, &play->colCtx.dyna, this->dyna.bgId);
        WallPullSwitch_SetupRetract(this, play);
    }
}

void WallPullSwitch_SetupPlayerPulling(WallPullSwitch* this, PlayState* play) {
    this->timer = 20;
    this->actionFunc = WallPullSwitch_PlayerPulling;
}

void WallPullSwitch_Retract(WallPullSwitch* this, PlayState* play) {
    DECR(this->timer);

    func_8002F994(&this->dyna.actor, this->timer);
    this->dyna.actor.world.pos.x -= Math_SinS(this->dyna.actor.world.rot.y) * this->stepSize;
    this->dyna.actor.world.pos.z -= Math_CosS(this->dyna.actor.world.rot.y) * this->stepSize;

    if (this->timer == 0) {
        Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_BLOCK_BOUND);
        WallPullSwitch_SetupWaitForPlayerGrab(this, play);
    }
}

void WallPullSwitch_SetupRetract(WallPullSwitch* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    this->dyna.unk_150 = 0.0f;
    this->dyna.unk_158 = 0;
    player->stateFlags2 &= ~PLAYER_STATE2_4;

    Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_BLOCK_BOUND);
    Flags_SetSwitch(play, SWITCH_FLAG(this));
    s16 duration = DURATION(this);
    if (duration == 0) {
        WallPullSwitch_SetupStayOpen(this, play);
        return;
    }

    this->timer = duration * 20;

    f32 dist = Math_Vec3f_DistXZ(&this->dyna.actor.world.pos, &this->dyna.actor.home.pos);
    this->stepSize = dist / this->timer;
    this->actionFunc = WallPullSwitch_Retract;

    this->activeCol = WALLSWITCH_COL_NO_GRAB;
    WallPullSwitch_ChangeCollision(this, play, WALLSWITCH_NOGRAB_COLHDR);
}

void WallPullSwitch_SetupStayOpen(WallPullSwitch* this, PlayState* play) {
    s16 angle = this->dyna.actor.world.rot.y;
    this->dyna.actor.world.pos.x = this->dyna.actor.home.pos.x + Math_SinS(angle) * 40.0f;
    this->dyna.actor.world.pos.z = this->dyna.actor.home.pos.z + Math_CosS(angle) * 40.0f;

    this->actionFunc = WallPullSwitch_DoNothing;

    this->activeCol = WALLSWITCH_COL_NO_GRAB;
    WallPullSwitch_ChangeCollision(this, play, WALLSWITCH_NOGRAB_COLHDR);
}
