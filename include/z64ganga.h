# ifndef __GANGA_H__
# define __GANGA_H__

#include "z64.h"

extern struct GangaState {
        int bloodmix;
        f32 timeOfDay;
        f32 LightIndexStealthModifier;
        u8 grabstate;
        u8 gamearea;
        u8 gamearea2;
} gGangaState;

#endif