#include "global.h"

static struct {
	char message[64];
	int  active;
} sMessage[12];

void ScreenText_VPrint(int id, const char* fmt, va_list va) {
	sMessage[id].active = true;
	vsprintf(sMessage[id].message, fmt, va);
}

void Hint(int id, const char* fmt, ...) {
	va_list va;
	
	va_start(va, fmt);
	ScreenText_VPrint(id, fmt, va);
	va_end(va);
}

void ScreenText_Init(void) {
	for (int i = 0; i < ARRAY_COUNT(sMessage); i++) {
		sMessage[i].active = false;
		sMessage[i].message[0] = '\0';
	}
}

void ScreenText_Draw(PlayState* play) {
	OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
	
	GfxPrint* gp = &(GfxPrint) {};
	
	GfxPrint_Init(gp);
	GfxPrint_Open(gp, POLY_XLU_DISP);
	
	for (int i = 0; i < ARRAY_COUNT(sMessage); i++) {
		if (!sMessage[i].message[0]) continue;
		
		GfxPrint_SetPos(gp, 2, 8 + i);
		
		if (sMessage[i].active)
			GfxPrint_SetColor(gp, 25, 173, 227, 255);
		else
			GfxPrint_SetColor(gp, 80, 80, 80, 255);
		
		GfxPrint_Printf(gp, "%s", sMessage[i].message);
		
		sMessage[i].active = false;
	}
	
	POLY_XLU_DISP = GfxPrint_Close(gp);
	GfxPrint_Destroy(gp);
	
	CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}