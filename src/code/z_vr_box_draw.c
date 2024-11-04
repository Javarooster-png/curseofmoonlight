#include "global.h"

Mtx* sSkyboxDrawMatrix;
typedef struct {
    float r, g, b, a;
} Color;
#define DAWN_START 0.0f
#define DAY_START 0.25f
#define DUSK_START 0.5f
#define NIGHT_START 0.75f

Mtx* sSkyboxDrawMatrix;
#include "assets/overlays/ovl_Sky_New/skyC.c"
#include "assets/overlays/ovl_Sky_New/cloudsC.c"
#include "assets/overlays/ovl_Sky_New/clouds2C.c"
#include "assets/overlays/ovl_Sky_New/starsC.c"
#include "assets/overlays/ovl_Sky_New/MoonC.c"
Mtx* Skybox_UpdateMatrix(SkyboxContext* skyboxCtx, f32 x, f32 y, f32 z) {
    Matrix_Translate(x, y, z, MTXMODE_NEW);
    Matrix_Scale(1.0f, 1.0f, 1.0f, MTXMODE_APPLY);
//    Matrix_RotateX(skyboxCtx->rot.x, MTXMODE_APPLY);
//    Matrix_RotateY(skyboxCtx->rot.y, MTXMODE_APPLY);
//    Matrix_RotateZ(skyboxCtx->rot.z, MTXMODE_APPLY);
    return Matrix_ToMtx(sSkyboxDrawMatrix, "../z_vr_box_draw.c", 42);
}

Color lerpColor(const Color* start, const Color* end, float t) {
    Color result;
    result.r = start->r + t * (end->r - start->r);
    result.g = start->g + t * (end->g - start->g);
    result.b = start->b + t * (end->b - start->b);
    result.a = start->a + t * (end->a - start->a);
    return result;
}

void Skybox_Draw(SkyboxContext* skyboxCtx, GraphicsContext* gfxCtx, s16 skyboxId, s16 blend, f32 x, f32 y, f32 z) {
    OPEN_DISPS(gfxCtx, "../z_vr_box_draw.c", 52);

    Gfx_SetupDL_40Opa(gfxCtx);

    gSPSegment(POLY_OPA_DISP++, 0x7, skyboxCtx->staticSegments[0]);
    gSPSegment(POLY_OPA_DISP++, 0x8, skyboxCtx->staticSegments[1]);
    gSPSegment(POLY_OPA_DISP++, 0x9, skyboxCtx->palettes);

    gDPSetPrimColor(POLY_OPA_DISP++, 0x00, 0x00, 0, 0, 0, blend);
    gSPTexture(POLY_OPA_DISP++, 0x8000, 0x8000, 0, G_TX_RENDERTILE, G_ON);

    // Prepare matrix
    sSkyboxDrawMatrix = Graph_Alloc(gfxCtx, sizeof(Mtx));
    Matrix_Translate(x, y, z, MTXMODE_NEW);
//    Matrix_Scale(1.0f, 1.0f, 1.0f, MTXMODE_APPLY);
//    Matrix_RotateX(skyboxCtx->rot.x, MTXMODE_APPLY);
//    Matrix_RotateY(skyboxCtx->rot.y, MTXMODE_APPLY);
//    Matrix_RotateZ(skyboxCtx->rot.z, MTXMODE_APPLY);
    Matrix_ToMtx(sSkyboxDrawMatrix, "../z_vr_box_draw.c", 76);

static const  Color dawnBottom = { 190, 140, 120, 255 };
static const  Color dawnTop = { 131, 75, 153, 255 };
static const  Color dayBottom = { 92, 210, 255, 255 };
static const  Color dayTop = { 51, 171, 249, 255 };
static const  Color duskBottom = { 170, 72, 47, 255 };
static const  Color duskTop = { 155, 82, 92, 255 };
static const  Color nightBottom = { 36, 16, 61, 255 };
static const  Color nightTop = { 29, 16, 48, 255 };
static const  Color dawnBottomc = { 145, 103, 72, 255 };
static const  Color dawnTopc = { 255, 136, 88, 70 };
static const  Color dayBottomc = { 166, 220, 229, 255 };
static const  Color dayTopc = { 162, 255, 255, 107 };
static const  Color duskBottomc = { 70, 7, 52, 255 };
static const  Color duskTopc = { 255, 151, 109, 0 };
static const  Color nightBottomc = { 26, 5, 54, 255 };
static const  Color nightTopc = { 30, 0, 49, 32 };
static const  Color starsblank = { 0, 0, 0, 0 };
static const  Color starsb = { 255, 255, 255, 255 };
static const  Color starstop = { 255, 255, 255, 255 };
    Color bottomColor, topColor;
    float timeOfDay =  gGangaState.timeOfDay ;

    if (timeOfDay < 0.125f) {         // Night to Dawn transition
        float t = timeOfDay / 0.125f; // scale to 0-1 for interpolation
        bottomColor = lerpColor(&nightBottom, &dawnBottom, t);
        topColor = lerpColor(&nightTop, &dawnTop, t);
    } else if (timeOfDay < 0.25f) {              // Dawn to Day transition
        float t = (timeOfDay - 0.125f) / 0.125f; // scale to 0-1 for interpolation
        bottomColor = lerpColor(&dawnBottom, &dayBottom, t);
        topColor = lerpColor(&dawnTop, &dayTop, t);
    } else if (timeOfDay < 0.37f) { // Day
        bottomColor = dayBottom;
        topColor = dayTop;
    } else if (timeOfDay < 0.5f) { // Day to Dusk transition
        float t = CLAMP((timeOfDay - 0.37f) / 0.125f, 0.0f, 1.0f);
        bottomColor = lerpColor(&dayBottom, &duskBottom, t);
        topColor = lerpColor(&dayTop, &duskTop, t);
    } else if (timeOfDay < 0.75f) {                              // Dusk to Night transition
        float t = CLAMP((timeOfDay - 0.5f) / 0.25f, 0.0f, 1.0f); // scale to 0-1 for interpolation
        bottomColor = lerpColor(&duskBottom, &nightBottom, t);
        topColor = lerpColor(&duskTop, &nightTop, t);
    } else { // Night
        bottomColor = nightBottom;
        topColor = nightTop;
    }

    // Set environment and primary colors
    gDPSetEnvColor(POLY_OPA_DISP++, bottomColor.r, bottomColor.g, bottomColor.b, 255);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, topColor.r, topColor.g, topColor.b, 255);

    gSPMatrix(POLY_OPA_DISP++, sSkyboxDrawMatrix, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList(POLY_OPA_DISP++, sky);
            gDPPipeSync(POLY_OPA_DISP++);
    if (timeOfDay < 0.125f) {         // Night to Dawn transition
        float t = timeOfDay / 0.125f; // scale to 0-1 for interpolation
        bottomColor = lerpColor(&starsb, &starsb, t);
        topColor = lerpColor(&starstop, &starstop, t);
    } else if (timeOfDay < 0.25f) {              // Dawn to Day transition
        float t = (timeOfDay - 0.125f) / 0.125f; // scale to 0-1 for interpolation
        bottomColor = lerpColor(&starsb, &starsblank, t);
        topColor = lerpColor(&starstop, &starsblank, t);
    } else if (timeOfDay < 0.25f) { // Day
        bottomColor = starsblank;
        topColor = starsblank;
    } else if (timeOfDay < 0.5f) { // Day to Dusk transition
        float t = CLAMP((timeOfDay - 0.25f) / 0.125f, 0.0f, 1.0f);
        bottomColor = lerpColor(&starsblank, &starsblank, t);
        topColor = lerpColor(&starsblank, &starsblank, t);
    } if (timeOfDay < 0.75f) {                              // Dusk to Night transition
        float t = CLAMP((timeOfDay - 0.5f) / 0.25f, 0.0f, 1.0f); // scale to 0-1 for interpolation
        bottomColor = lerpColor(&starsblank, &starsb, t);
        topColor = lerpColor(&starsblank, &starstop, t);
    } else { // Night
        bottomColor = starsb;
        topColor = starstop;
    }
        static unsigned int framesS;
    PlayState* play = Effect_GetPlayState();
        gSPSegment(POLY_OPA_DISP++, 0x08,
                   Gfx_TwoTexScroll(play->state.gfxCtx, G_TX_RENDERTILE, 0, 0, 64, 64, 1, 0,
                                    (framesS) & 0x1FF, 64, 64));
        gDPSetEnvColor(POLY_OPA_DISP++, bottomColor.r, bottomColor.g, bottomColor.b, bottomColor.a);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, topColor.r, topColor.g, topColor.b, topColor.a);
        gSPDisplayList(POLY_OPA_DISP++, stars);
        gSPDisplayList(POLY_OPA_DISP++, Moon);
        if (timeOfDay < 0.125f) {         // Night to Dawn transition
        float t = timeOfDay / 0.125f; // scale to 0-1 for interpolation
        bottomColor = lerpColor(&nightBottomc, &dawnBottomc, t);
        topColor = lerpColor(&nightTopc, &dawnTopc, t);
    } else if (timeOfDay < 0.25f) {              // Dawn to Day transition
        float t = (timeOfDay - 0.125f) / 0.125f; // scale to 0-1 for interpolation
        bottomColor = lerpColor(&dawnBottomc, &dayBottomc, t);
        topColor = lerpColor(&dawnTopc, &dayTopc, t);
    } else if (timeOfDay < 0.37f) { // Day
        bottomColor = dayBottomc;
        topColor = dayTopc;
    } else if (timeOfDay < 0.5f) { // Day to Dusk transition
        float t = CLAMP((timeOfDay - 0.37f) / 0.125f, 0.0f, 1.0f);
        bottomColor = lerpColor(&dayBottomc, &duskBottomc, t);
        topColor = lerpColor(&dayTopc, &duskTopc, t);
    } else if (timeOfDay < 0.75f) {                              // Dusk to Night transition
        float t = CLAMP((timeOfDay - 0.5f) / 0.25f, 0.0f, 1.0f); // scale to 0-1 for interpolation
        bottomColor = lerpColor(&duskBottomc, &nightBottomc, t);
        topColor = lerpColor(&duskTopc, &nightTopc, t);
    } else { // Night
        bottomColor = nightBottomc;
        topColor = nightTopc;
    }
//    Vec2f windAxis = {
//        play->envCtx.windDirection.x < 0 ? play->envCtx.windDirection.x / 128.0f : play->envCtx.windDirection.x / 127.0f,
//        play->envCtx.windDirection.z < 0 ? play->envCtx.windDirection.z / 128.0f : play->envCtx.windDirection.z / 127.0f,
//    };
 //   windAxis.x *= play->envCtx.windSpeed;
 //   windAxis.y *= play->envCtx.windSpeed;
         gSPSegment(POLY_OPA_DISP++, 0x08,
                   Gfx_TwoTexScroll(play->state.gfxCtx, G_TX_RENDERTILE, 0, (framesS) & 0x1FF, 64, 64, 1, 0,
                                    0, 64, 64));
    gDPSetEnvColor(POLY_OPA_DISP++, bottomColor.r, bottomColor.g, bottomColor.b, 255);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, topColor.r, topColor.g, topColor.b, topColor.a);
    gSPDisplayList(POLY_OPA_DISP++, clouds);
    gSPDisplayList(POLY_OPA_DISP++, clouds2);
    framesS += 1;
    gDPPipeSync(POLY_OPA_DISP++);

    CLOSE_DISPS(gfxCtx, "../z_vr_box_draw.c", 125);
}
void Skybox_Update(SkyboxContext* skyboxCtx) {
    float currentTime = (float)gSaveContext.save.dayTime; // Current time in your game's units

    if ((gSaveContext.save.dayTime > CLOCK_TIME(5, 30)) && (gSaveContext.save.dayTime <= CLOCK_TIME(6, 30))) {
        // Dawn transition: 5:30 AM to 6:30 AM
        gGangaState.timeOfDay = DAWN_START + (currentTime - CLOCK_TIME(5, 30)) / CLOCK_TIME(1, 0) * 0.125f;
    } else if ((gSaveContext.save.dayTime > CLOCK_TIME(6, 30)) && (gSaveContext.save.dayTime <= CLOCK_TIME(7, 30))) {
        // Dawn to Day transition: 6:30 AM to 7:30 AM
        gGangaState.timeOfDay = 0.125f + (currentTime - CLOCK_TIME(6, 30)) / CLOCK_TIME(1, 0) * 0.125f;
    } else if ((gSaveContext.save.dayTime > CLOCK_TIME(7, 30)) && (gSaveContext.save.dayTime <= CLOCK_TIME(15, 30))) {
        // Day: 7:30 AM to 3:30 PM
        gGangaState.timeOfDay = DAY_START;
    } else if ((gSaveContext.save.dayTime > CLOCK_TIME(15, 30)) && (gSaveContext.save.dayTime <= CLOCK_TIME(17, 30))) {
        // Day to Dusk transition: 3:30 PM to 5:30 PM
        gGangaState.timeOfDay = 0.25f + (currentTime - CLOCK_TIME(15, 30)) / CLOCK_TIME(2, 0) * 0.25f;
    } else if ((gSaveContext.save.dayTime > CLOCK_TIME(17, 30)) && (gSaveContext.save.dayTime <= CLOCK_TIME(19, 30))) {
        // Dusk to Night transition: 5:30 PM to 7:30 PM
        gGangaState.timeOfDay = 0.5f + (currentTime - CLOCK_TIME(17, 30)) / CLOCK_TIME(2, 0) * 0.25f;
    } else if ((gSaveContext.save.dayTime > CLOCK_TIME(19, 30)) || (gSaveContext.save.dayTime <= CLOCK_TIME(5, 30))) {
        // Night: 7:30 PM to 5:30 AM
        if (gSaveContext.save.dayTime > CLOCK_TIME(19, 30)) {
            gGangaState.timeOfDay = NIGHT_START + (currentTime - CLOCK_TIME(19, 30)) / CLOCK_TIME(10, 0) * 0.25f;
        } else {
            gGangaState.timeOfDay = NIGHT_START + (currentTime + CLOCK_TIME(4, 30)) / CLOCK_TIME(10, 0) * 0.25f;
        }
    }
}
