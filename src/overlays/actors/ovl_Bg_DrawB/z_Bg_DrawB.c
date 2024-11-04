#include "z_Bg_DrawB.h"
#include "assets/objects/object_drawbridge/gDrawBridgeDL.h"
#include "assets/objects/object_drawbridge/gDrawBridgeDL_collision.h"
#include "assets/objects/object_drawbridge/gDrawBridge2DL.h"
#include "assets/objects/object_drawbridge/gDrawBridge2DL_collision.h"
#include "assets/objects/object_drawbridge/gDrawBridge3DL.h"
#include "assets/objects/object_drawbridge/gDrawBridge3DL_collision.h"
#define FLAGS (ACTOR_FLAG_4 | ACTOR_FLAG_5)
#define SWITCH_FLAG(this) (this->dyna.actor.params & 0x3F)
#define DRAWB_TYPE(this) (((this)->params >> 8) & 0x3F)
void DrawB_Init(SDrawB* this, PlayState* play);
void DrawB_Destroy(SDrawB* this, PlayState* play);
void DrawB_Update(SDrawB* this, PlayState* play);
void DrawB_Draw(SDrawB* this, PlayState* play);
void DrawB_SetupWaitforSwitch(SDrawB* this, PlayState* play);
void DrawB_WaitforSwitch(SDrawB* this, PlayState* play);
void DrawB_SetupOpen(SDrawB* this, PlayState* play);
void DrawB_Open(SDrawB* this, PlayState* play);
void DrawB_SetupEnd(SDrawB* this, PlayState* play);
void DrawB_End(SDrawB* this, PlayState* play);
const ActorInit Bg_DrawB_InitVars = {
    ACTOR_DRAWB,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_DRAWBRIDGE,
    sizeof(SDrawB),
    (ActorFunc)DrawB_Init,
    (ActorFunc)DrawB_Destroy,
    (ActorFunc)DrawB_Update,
    (ActorFunc)DrawB_Draw,
};
static InitChainEntry sInitChain[] = { ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_STOP) };
void DrawB_Init(SDrawB* this, PlayState* play) {
    CollisionHeader* colHeader = NULL;
    u8 type;
    type = DRAWB_TYPE(&this->dyna.actor);
    if (type == 0) {
        CollisionHeader_GetVirtual(&gDrawBridgeDL_collisionHeader, &colHeader);

    } else if (type == 1) {
        CollisionHeader_GetVirtual(&gDrawBridge2DL_collisionHeader, &colHeader);
    } else {
        CollisionHeader_GetVirtual(&gDrawBridge3DL_collisionHeader, &colHeader);
    }
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);
    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    DrawB_SetupWaitforSwitch(this, play);
}

void DrawB_Destroy(SDrawB* this, PlayState* play) {

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void DrawB_Update(SDrawB* this, PlayState* play) {
    this->actionFunc(this, play);
}

void DrawB_Draw(SDrawB* this, PlayState* play) {
    u8 type;
    type = DRAWB_TYPE(&this->dyna.actor);
    if (type == 0) {
        Gfx_DrawDListOpa(play, gDrawBridgeDL);

    } else if (type == 1) {
        Gfx_DrawDListOpa(play, gDrawBridge2DL);
    } else {
        Gfx_DrawDListOpa(play, gDrawBridge3DL);
    }
}

void DrawB_SpawnDust(SDrawB* this, PlayState* play) {

    Color_RGBA8 primColor = { 46, 55, 28, 255 };
    Color_RGBA8 envColor = { 40, 50, 25, 255 };

    Vec3f pos;
    Vec3f velocity = { 0.0f, 6.0f * Rand_ZeroOne(), 0.0f };
    Vec3f accel = { 0.0f, 0.0f, 0.0f };
    s16 scale = 200 * Rand_ZeroOne();
    s16 scaleStep = 200 * Rand_ZeroOne();
    s16 life = 80;
    for (u8 i = 0; i < 3; i++) {
        if (i == 0) {
            pos.z = this->dyna.actor.home.pos.z + 246.49f;
            pos.x = this->dyna.actor.home.pos.x + 70.5f;
            pos.y = this->dyna.actor.home.pos.y - 50.49f;
        }
        if (i == 1) {
            pos.z = this->dyna.actor.home.pos.z + 246.49f;
            pos.x = this->dyna.actor.home.pos.x;
            pos.y = this->dyna.actor.home.pos.y - 50.49f;
        }
        if (i == 2) {
            pos.z = this->dyna.actor.home.pos.z + 246.49f;
            pos.x = this->dyna.actor.home.pos.x - 70.5f;
            pos.y = this->dyna.actor.home.pos.y - 50.49f;
        }
    }
    EffectSsDust_Spawn(play, 0, &pos, &velocity, &accel, &primColor, &envColor, scale, scaleStep, life, 0);
}

void DrawB_SetupWaitforSwitch(SDrawB* this, PlayState* play) {
    this->actionFunc = DrawB_WaitforSwitch;
}

void DrawB_WaitforSwitch(SDrawB* this, PlayState* play) {
    if (Flags_GetSwitch(play, SWITCH_FLAG(this))) {
        DrawB_SetupOpen(this, play);
    }
}

void DrawB_SetupOpen(SDrawB* this, PlayState* play) {
    u8 type = DRAWB_TYPE(&this->dyna.actor);

    if (type != 3) {
        this->timer = 60;
    } else {
        this->timer = 21;
        this->frame = 0;        // Frame counter for easing-in effect
        this->prevRotation = 0; // Track previous rotation value
    }

    this->actionFunc = DrawB_Open;
}

// Main function: Apply rotation with easing-in effect for type 3
void DrawB_Open(SDrawB* this, PlayState* play) {
    u8 type = DRAWB_TYPE(&this->dyna.actor);

    if (DECR(this->timer) == 0) {
        // End of rotation, handle any completion logic here if needed
        if (type == 3) {
            DrawB_SpawnDust(this, play);
            Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_ELEVATOR_STOP);
            DrawB_SetupEnd(this,play);
        }
    } else if (type != 3) {
        // Type not 3: Regular rotation
        Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_METALGATE_OPEN - SFX_FLAG);
        this->dyna.actor.shape.rot.z += 0x79;
    } else {
        // Type 3: Apply easing-in rotation
        f32 totalRotation = 18568.0f; // Target rotation in s16 units for 102 degrees
        f32 totalFrames = 21.0f;
        f32 currentRotation;
        this->dyna.actor.shape.rot.x += 0xB0;
        // Calculate cumulative rotation using quadratic easing with floats
        currentRotation = totalRotation * Math_PowF(this->frame / totalFrames, 2);

        // Increment rotation by the difference from the last frame
        int rotationIncrement = (int)(currentRotation - this->prevRotation + 0.5f); // Round to nearest
        this->prevRotation = currentRotation; // Update previous rotation for next frame

        // Apply rotation increment to rot.x
        this->dyna.actor.shape.rot.x += rotationIncrement;

        // Increment frame count for easing calculation
        this->frame++;
    }
}

void DrawB_SetupEnd(SDrawB* this, PlayState* play) {
    u8 type = DRAWB_TYPE(&this->dyna.actor);
    this->actionFunc = DrawB_End;
}

// Main function: Apply rotation with easing-in effect for type 3
void DrawB_End(SDrawB* this, PlayState* play) {

}