#include "ultra64.h"
#include "global.h"

s16 gGateskelIdleAnimFrameData[4] = {
	0x0000, 0xffff, 0xbfff, 0x4000, };

JointIndex gGateskelIdleAnimJointIndices[4] = {
	{ 0x0000, 0x0000, 0x0000, },
	{ 0x0000, 0x0000, 0x0000, },
	{ 0x0000, 0x0001, 0x0002, },
	{ 0x0003, 0x0002, 0x0000, },
};

AnimationHeader gGateskelIdleAnim = { { 1 }, gGateskelIdleAnimFrameData, gGateskelIdleAnimJointIndices, 4 };

