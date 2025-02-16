#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "bdan_boss_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "bdan_boss_room_0.h"
#include "bdan_boss_room_1.h"

SceneCmd bdan_boss_sceneCommands[] = {
    SCENE_CMD_SOUND_SETTINGS(3, 19, 38),
    SCENE_CMD_ROOM_LIST(2, bdan_boss_sceneRoomList0x000080),
    SCENE_CMD_TRANSITION_ACTOR_LIST(1, bdan_boss_sceneTransitionActorList_000070),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00000000),
    SCENE_CMD_COL_HEADER(&bdan_boss_sceneCollisionHeader_000E14),
    SCENE_CMD_ENTRANCE_LIST(bdan_boss_sceneEntranceList0x000090),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_DUNGEON, OBJECT_GAMEPLAY_DANGEON_KEEP),
    SCENE_CMD_SPAWN_LIST(1, bdan_boss_sceneStartPositionList0x000060),
    SCENE_CMD_SKYBOX_SETTINGS(29, 0, true),
    SCENE_CMD_EXIT_LIST(bdan_boss_sceneExitList_000094),
    SCENE_CMD_ENV_LIGHT_SETTINGS(4, bdan_boss_sceneLightSettings0x000098),
    SCENE_CMD_END(),
};

ActorEntry bdan_boss_sceneStartPositionList0x000060[] = {
    { ACTOR_PLAYER,     {     -9,      0,    340 }, {      0, 0X8000,      0 }, 0x0DFF },
};

TransitionActorEntry bdan_boss_sceneTransitionActorList_000070[] = {
    { 1, 255, 0, 255, ACTOR_DOOR_SHUTTER, 0, 80, 805, 0, 0x003F },
};

RomFile bdan_boss_sceneRoomList0x000080[] = {
    { (uintptr_t)_bdan_boss_room_0SegmentRomStart, (uintptr_t)_bdan_boss_room_0SegmentRomEnd },
    { (uintptr_t)_bdan_boss_room_1SegmentRomStart, (uintptr_t)_bdan_boss_room_1SegmentRomEnd },
};

Spawn bdan_boss_sceneEntranceList0x000090[] = {
    { 0x00, 0x01 },
    { 0x00, 0x00 },
};

u16 bdan_boss_sceneExitList_000094[] = {
    ENTR_JABU_JABU_1,
    ENTR_DEKU_TREE_0,
};

EnvLightSettings bdan_boss_sceneLightSettings0x000098[] = {
    { 0x0A, 0x0A, 0x0A, 0x49, 0x49, 0x49, 0x73, 0x41, 0x64, 0x00, 0x81, 0x00, 0x1E, 0x14, 0x14, 0x0A, 0x00, 0x14,
    0x0784, 0x0AF0 },
    { 0x46, 0x32, 0x32, 0x49, 0x49, 0x49, 0xA5, 0xA5, 0x96, 0xB7, 0xB7, 0xB7, 0x14, 0x14, 0x3C, 0x00, 0x14, 0x3C,
    0x07DE, 0x0AF0 },
    { 0x78, 0x5A, 0x00, 0x49, 0x49, 0x49, 0xFA, 0x87, 0x32, 0xB7, 0xB7, 0xB7, 0x1E, 0x1E, 0x3C, 0x1C, 0x14, 0x00,
    0x07E1, 0x3200 },
    { 0x28, 0x28, 0x46, 0x49, 0x49, 0x49, 0x14, 0x14, 0x23, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x64, 0x00, 0x00, 0x1E,
    0x07E0, 0x3200 },
};

BgCamInfo bdan_boss_sceneCollisionHeader_000E14CamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType bdan_boss_sceneCollisionHeader_000E14SurfaceType[] = {
    {0x00000100, 0x00007843},   {0x00010000, 0x000037C3},   {0x00010000, 0x000237C3},
};

CollisionPoly bdan_boss_sceneCollisionHeader_000E14Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0056, 0x0057, 0x0058, 0x0000, 0x0000, 0x8001, 0x031B},
    {0x0001, 0x0056, 0x0058, 0x0059, 0x0000, 0x0000, 0x8001, 0x031B},
    {0x0001, 0x0004, 0x0005, 0x0006, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0004, 0x0007, 0x0008, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0008, 0x0009, 0x000A, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x000A, 0x000B, 0x0005, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x000A, 0x0005, 0x0004, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x000A, 0x0004, 0x0008, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x000C, 0x000D, 0x000E, 0xF62F, 0x7C26, 0xE271, 0x001D},
    {0x0001, 0x000C, 0x000E, 0x000F, 0xF62F, 0x7C2D, 0xE28D, 0x001D},
    {0x0001, 0x0010, 0x0011, 0x000D, 0x0DCF, 0x7C2C, 0xE42E, 0x004D},
    {0x0001, 0x0010, 0x000D, 0x000C, 0x0DF3, 0x7C23, 0xE41B, 0x004D},
    {0x0001, 0x0012, 0x0010, 0x000C, 0x0000, 0x7FFF, 0x0000, 0xFFF6},
    {0x0001, 0x0012, 0x000C, 0x000F, 0x0000, 0x7FFF, 0x0000, 0xFFF6},
    {0x0001, 0x0012, 0x0013, 0x0011, 0x1D70, 0x7C2D, 0xF627, 0x003B},
    {0x0001, 0x0012, 0x0011, 0x0010, 0x1D8F, 0x7C25, 0xF626, 0x003B},
    {0x0001, 0x0014, 0x0015, 0x0016, 0x0000, 0x7FFF, 0x0000, 0xFFF6},
    {0x0001, 0x0014, 0x0016, 0x0017, 0x0000, 0x7FFF, 0x0000, 0xFFF6},
    {0x0001, 0x0014, 0x0018, 0x0019, 0x09C9, 0x7C2D, 0xE28A, 0x001D},
    {0x0001, 0x0014, 0x0019, 0x0015, 0x09DA, 0x7C25, 0xE271, 0x001D},
    {0x0001, 0x0016, 0x001A, 0x001B, 0xE277, 0x7C26, 0xF61E, 0x003B},
    {0x0001, 0x0016, 0x001B, 0x0017, 0xE28D, 0x7C2D, 0xF62F, 0x003B},
    {0x0001, 0x0015, 0x0019, 0x001A, 0xF226, 0x7C26, 0xE418, 0x004D},
    {0x0001, 0x0015, 0x001A, 0x0016, 0xF220, 0x7C2E, 0xE440, 0x004D},
    {0x0001, 0x001C, 0x001D, 0x001E, 0x0000, 0x7FFF, 0x0000, 0xFFF6},
    {0x0001, 0x001C, 0x001E, 0x001F, 0x0000, 0x7FFF, 0x0000, 0xFFF6},
    {0x0001, 0x001E, 0x0020, 0x0021, 0x1D89, 0x7C26, 0x09E2, 0x005F},
    {0x0001, 0x001E, 0x0021, 0x001F, 0x1D73, 0x7C2D, 0x09D1, 0x005F},
    {0x0001, 0x0022, 0x0023, 0x0024, 0xE290, 0x7C2D, 0x09D9, 0x005F},
    {0x0001, 0x0022, 0x0024, 0x0025, 0xE271, 0x7C25, 0x09DA, 0x005F},
    {0x0001, 0x0022, 0x0025, 0x0026, 0x0000, 0x7FFF, 0x0000, 0xFFF6},
    {0x0001, 0x0022, 0x0026, 0x0027, 0x0000, 0x7FFF, 0x0000, 0xFFF6},
    {0x0001, 0x0026, 0x0028, 0x0029, 0x09D1, 0x7C26, 0x1D8F, 0x0089},
    {0x0001, 0x0026, 0x0029, 0x0027, 0x09D1, 0x7C2D, 0x1D73, 0x0089},
    {0x0001, 0x0025, 0x0024, 0x0028, 0xF231, 0x7C2C, 0x1BD2, 0x00B2},
    {0x0001, 0x0025, 0x0028, 0x0026, 0xF20D, 0x7C23, 0x1BE5, 0x00B3},
    {0x0001, 0x001D, 0x002A, 0x0020, 0x0DDA, 0x7C26, 0x1BE8, 0x00B3},
    {0x0001, 0x001D, 0x0020, 0x001E, 0x0DE0, 0x7C2E, 0x1BC0, 0x00B2},
    {0x0001, 0x001C, 0x002B, 0x002A, 0xF637, 0x7C2D, 0x1D76, 0x0089},
    {0x0001, 0x001C, 0x002A, 0x001D, 0xF626, 0x7C25, 0x1D8F, 0x0089},
    {0x0001, 0x002C, 0x002D, 0x002E, 0x1BE8, 0x7C26, 0xF226, 0x0067},
    {0x0001, 0x002C, 0x002E, 0x002F, 0x1BC0, 0x7C2E, 0xF220, 0x0066},
    {0x0001, 0x002F, 0x002E, 0x0030, 0x09E2, 0x7C26, 0xE277, 0x0017},
    {0x0001, 0x002F, 0x0030, 0x0031, 0x09D1, 0x7C2D, 0xE28D, 0x0017},
    {0x0001, 0x0032, 0x0033, 0x002D, 0x1D76, 0x7C2D, 0x09C9, 0x0065},
    {0x0001, 0x0032, 0x002D, 0x002C, 0x1D8F, 0x7C25, 0x09DA, 0x0065},
    {0x0001, 0x0032, 0x002C, 0x002F, 0x0000, 0x7FFF, 0x0000, 0xFFF6},
    {0x0001, 0x0032, 0x002F, 0x0031, 0x0000, 0x7FFF, 0x0000, 0xFFF6},
    {0x0001, 0x0034, 0x0035, 0x0036, 0x09D9, 0x7C2D, 0x1D70, 0x0083},
    {0x0001, 0x0034, 0x0036, 0x0037, 0x09DA, 0x7C25, 0x1D8F, 0x0083},
    {0x0001, 0x0034, 0x0037, 0x0038, 0x0000, 0x7FFF, 0x0000, 0xFFF6},
    {0x0001, 0x0034, 0x0038, 0x0039, 0x0000, 0x7FFF, 0x0000, 0xFFF6},
    {0x0001, 0x0037, 0x0036, 0x003A, 0x1BD2, 0x7C2C, 0x0DCF, 0x0099},
    {0x0001, 0x0037, 0x003A, 0x0038, 0x1BE5, 0x7C23, 0x0DF3, 0x009A},
    {0x0001, 0x0038, 0x003A, 0x003B, 0x1D8F, 0x7C26, 0xF62F, 0x0041},
    {0x0001, 0x0038, 0x003B, 0x0039, 0x1D73, 0x7C2D, 0xF62F, 0x0041},
    {0x0001, 0x003C, 0x003D, 0x003E, 0x0000, 0x7FFF, 0x0000, 0xFFF6},
    {0x0001, 0x003C, 0x003E, 0x003F, 0x0000, 0x7FFF, 0x0000, 0xFFF6},
    {0x0001, 0x003E, 0x0040, 0x0041, 0xE271, 0x7C26, 0x09D1, 0x0065},
    {0x0001, 0x003E, 0x0041, 0x003F, 0xE28D, 0x7C2D, 0x09D1, 0x0065},
    {0x0001, 0x003C, 0x0042, 0x0043, 0xF627, 0x7C2D, 0xE290, 0x0017},
    {0x0001, 0x003C, 0x0043, 0x003D, 0xF626, 0x7C25, 0xE271, 0x0017},
    {0x0001, 0x003D, 0x0043, 0x0040, 0xE42E, 0x7C2C, 0xF231, 0x0066},
    {0x0001, 0x003D, 0x0040, 0x003E, 0xE41B, 0x7C23, 0xF20D, 0x0067},
    {0x0001, 0x0044, 0x0045, 0x0046, 0xE28A, 0x7C2D, 0xF637, 0x0041},
    {0x0001, 0x0044, 0x0046, 0x0047, 0xE271, 0x7C25, 0xF626, 0x0041},
    {0x0001, 0x0047, 0x0046, 0x0048, 0xE418, 0x7C26, 0x0DDA, 0x0099},
    {0x0001, 0x0047, 0x0048, 0x0049, 0xE440, 0x7C2E, 0x0DE0, 0x0099},
    {0x0001, 0x0049, 0x0048, 0x004A, 0xF61E, 0x7C26, 0x1D89, 0x0083},
    {0x0001, 0x0049, 0x004A, 0x004B, 0xF62F, 0x7C2D, 0x1D73, 0x0082},
    {0x0001, 0x0044, 0x0047, 0x0049, 0x0000, 0x7FFF, 0x0000, 0xFFF6},
    {0x0001, 0x0044, 0x0049, 0x004B, 0x0000, 0x7FFF, 0x0000, 0xFFF6},
    {0x0002, 0x004C, 0x004D, 0x004E, 0x0000, 0x0000, 0x8001, 0x0168},
    {0x0002, 0x004C, 0x004E, 0x004F, 0x0000, 0x0000, 0x8001, 0x0168},
    {0x0002, 0x004E, 0x000A, 0x0009, 0x5A82, 0x0000, 0xA57E, 0x01D1},
    {0x0002, 0x004E, 0x0009, 0x0050, 0x5A82, 0x0000, 0xA57E, 0x01D1},
    {0x0002, 0x0008, 0x0051, 0x0050, 0x7FFF, 0x0000, 0x0000, 0x0252},
    {0x0002, 0x0008, 0x0050, 0x0009, 0x7FFF, 0x0000, 0x0000, 0x0252},
    {0x0002, 0x0008, 0x0007, 0x0052, 0x5A82, 0x0000, 0x5A82, 0x031B},
    {0x0002, 0x0008, 0x0052, 0x0051, 0x5A82, 0x0000, 0x5A82, 0x031B},
    {0x0002, 0x0004, 0x0053, 0x0052, 0x0000, 0x0000, 0x7FFF, 0x033C},
    {0x0002, 0x0004, 0x0052, 0x0007, 0x0000, 0x0000, 0x7FFF, 0x033C},
    {0x0002, 0x0006, 0x0054, 0x0053, 0xA57E, 0x0000, 0x5A82, 0x031B},
    {0x0002, 0x0006, 0x0053, 0x0004, 0xA57E, 0x0000, 0x5A82, 0x031B},
    {0x0002, 0x0005, 0x0055, 0x0054, 0x8001, 0x0000, 0x0000, 0x0252},
    {0x0002, 0x0005, 0x0054, 0x0006, 0x8001, 0x0000, 0x0000, 0x0252},
    {0x0002, 0x000B, 0x004F, 0x0055, 0xA57E, 0x0000, 0xA57E, 0x01D1},
    {0x0002, 0x000B, 0x0055, 0x0005, 0xA57E, 0x0000, 0xA57E, 0x01D1},
    {0x0001, 0x005A, 0x005B, 0x000A, 0x0000, 0x0000, 0x8001, 0x0168},
    {0x0001, 0x005C, 0x005A, 0x000A, 0x0000, 0x0000, 0x8001, 0x0168},
    {0x0001, 0x005D, 0x005E, 0x000B, 0x0000, 0x0000, 0x8001, 0x0168},
    {0x0001, 0x005E, 0x004C, 0x000B, 0x0000, 0x0000, 0x8001, 0x0168},
    {0x0001, 0x005E, 0x005F, 0x004C, 0x0000, 0x0000, 0x8001, 0x0168},
    {0x0001, 0x0060, 0x005C, 0x004D, 0x0000, 0x0000, 0x8001, 0x0168},
    {0x0001, 0x005C, 0x000A, 0x004D, 0x0000, 0x0000, 0x8001, 0x0168},
    {0x0001, 0x000B, 0x0061, 0x005D, 0x0000, 0x0000, 0x8001, 0x0168},
    {0x0001, 0x004F, 0x0062, 0x0063, 0x1B6A, 0x8604, 0x1B6A, 0x00F1},
    {0x0001, 0x004F, 0x0063, 0x0055, 0x1B6A, 0x8604, 0x1B6A, 0x00F1},
    {0x0001, 0x0054, 0x0064, 0x0065, 0x1B6A, 0x8604, 0xE496, 0x008C},
    {0x0001, 0x0054, 0x0065, 0x0053, 0x1B6A, 0x8604, 0xE496, 0x008C},
    {0x0001, 0x0052, 0x0066, 0x0067, 0xE496, 0x8604, 0xE496, 0x008C},
    {0x0001, 0x0052, 0x0067, 0x0051, 0xE496, 0x8604, 0xE496, 0x008C},
    {0x0001, 0x0068, 0x0069, 0x004E, 0xE496, 0x8604, 0x1B6A, 0x00F1},
    {0x0001, 0x0068, 0x004E, 0x0050, 0xE496, 0x8604, 0x1B6A, 0x00F1},
    {0x0001, 0x0055, 0x0063, 0x0064, 0x28D8, 0x86B2, 0x0000, 0x00BE},
    {0x0001, 0x0055, 0x0064, 0x0054, 0x28D8, 0x86B2, 0x0000, 0x00BE},
    {0x0001, 0x0053, 0x0065, 0x0066, 0x0000, 0x86B2, 0xD728, 0x0073},
    {0x0001, 0x0053, 0x0066, 0x0052, 0x0000, 0x86B2, 0xD728, 0x0073},
    {0x0001, 0x0051, 0x0067, 0x0068, 0xD728, 0x86B2, 0x0000, 0x00BE},
    {0x0001, 0x0051, 0x0068, 0x0050, 0xD728, 0x86B2, 0x0000, 0x00BE},
    {0x0001, 0x004E, 0x0069, 0x0062, 0x0000, 0x86B2, 0x28D8, 0x0108},
    {0x0001, 0x004E, 0x0062, 0x004F, 0x0000, 0x86B2, 0x28D8, 0x0108},
    {0x0001, 0x0067, 0x0069, 0x0068, 0x0000, 0x8001, 0x0000, 0x012C},
    {0x0001, 0x0067, 0x0065, 0x0063, 0x0000, 0x8001, 0x0000, 0x012C},
    {0x0001, 0x0067, 0x0063, 0x0069, 0x0000, 0x8001, 0x0000, 0x012C},
    {0x0001, 0x0067, 0x0066, 0x0065, 0x0000, 0x8001, 0x0000, 0x012C},
    {0x0001, 0x0065, 0x0064, 0x0063, 0x0000, 0x8001, 0x0000, 0x012C},
    {0x0001, 0x0063, 0x0062, 0x0069, 0x0000, 0x8001, 0x0000, 0x012C},
    {0x0001, 0x006A, 0x005C, 0x0060, 0x4AFC, 0xCE03, 0xA51C, 0x017D},
    {0x0001, 0x006B, 0x006A, 0x0060, 0x3791, 0xC86F, 0x9AF8, 0x0196},
    {0x0001, 0x005F, 0x006C, 0x006B, 0x0000, 0xA14A, 0xA9E7, 0x0186},
    {0x0001, 0x005F, 0x006B, 0x0060, 0x0000, 0xA14A, 0xA9E7, 0x0186},
    {0x0001, 0x006C, 0x005F, 0x006D, 0xC86F, 0xC86F, 0x9AF8, 0x0196},
    {0x0001, 0x005F, 0x005E, 0x006D, 0xB504, 0xCE03, 0xA51C, 0x017D},
    {0x0001, 0x006D, 0x005E, 0x005D, 0xA14A, 0x0000, 0xA9E7, 0x014B},
    {0x0001, 0x006D, 0x005D, 0x006E, 0xA14A, 0x0000, 0xA9E7, 0x014B},
    {0x0001, 0x005A, 0x006A, 0x006F, 0x5EB6, 0x0000, 0xA9E7, 0x014B},
    {0x0001, 0x005A, 0x005C, 0x006A, 0x5EB6, 0x0000, 0xA9E7, 0x014B},
    {0x0001, 0x005B, 0x005A, 0x006F, 0x4C22, 0x4C22, 0xBACA, 0x00FE},
    {0x0001, 0x0070, 0x005B, 0x006F, 0x4C22, 0x4C22, 0xBACA, 0x00FE},
    {0x0001, 0x005B, 0x0070, 0x0071, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0070, 0x0072, 0x0071, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0072, 0x0061, 0x0071, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0072, 0x006E, 0x0061, 0xB3DE, 0x4C22, 0xBACA, 0x00FE},
    {0x0001, 0x006E, 0x005D, 0x0061, 0xB3DE, 0x4C22, 0xBACA, 0x00FE},
    {0x0001, 0x0073, 0x006D, 0x006E, 0x8001, 0x0000, 0x0000, 0x0050},
    {0x0001, 0x0073, 0x006E, 0x0074, 0x8001, 0x0000, 0x0000, 0x0050},
    {0x0001, 0x0075, 0x006F, 0x006A, 0x7FFF, 0x0000, 0x0000, 0x0050},
    {0x0001, 0x0075, 0x006A, 0x0076, 0x7FFF, 0x0000, 0x0000, 0x0050},
    {0x0001, 0x0076, 0x006A, 0x006B, 0x5A82, 0xA57E, 0x0000, 0x008D},
    {0x0001, 0x0076, 0x006B, 0x0077, 0x5A82, 0xA57E, 0x0000, 0x008D},
    {0x0001, 0x0078, 0x0070, 0x006F, 0x5A82, 0x5A82, 0x0000, 0x002A},
    {0x0001, 0x0078, 0x006F, 0x0075, 0x5A82, 0x5A82, 0x0000, 0x002A},
    {0x0001, 0x0079, 0x0072, 0x0070, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0079, 0x0070, 0x0078, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0074, 0x006E, 0x0072, 0xA57E, 0x5A82, 0x0000, 0x002A},
    {0x0001, 0x0074, 0x0072, 0x0079, 0xA57E, 0x5A82, 0x0000, 0x002A},
    {0x0001, 0x007A, 0x006C, 0x006D, 0xA57E, 0xA57E, 0x0000, 0x008D},
    {0x0001, 0x007A, 0x006D, 0x0073, 0xA57E, 0xA57E, 0x0000, 0x008D},
    {0x0001, 0x0077, 0x006B, 0x006C, 0x0000, 0x8001, 0x0000, 0x00A0},
    {0x0001, 0x0077, 0x006C, 0x007A, 0x0000, 0x8001, 0x0000, 0x00A0},
    {0x0001, 0x007B, 0x007C, 0x007D, 0x0000, 0x0000, 0x8001, 0x0190},
    {0x0001, 0x007B, 0x007D, 0x007E, 0x0000, 0x0000, 0x8001, 0x0190},
    {0x0001, 0x007B, 0x007E, 0x007F, 0x0000, 0x0000, 0x8001, 0x0190},
    {0x0001, 0x007B, 0x007F, 0x0080, 0x0000, 0x0000, 0x8001, 0x0190},
    {0x0001, 0x007B, 0x0080, 0x0081, 0x0000, 0x0000, 0x8001, 0x0190},
    {0x0001, 0x007B, 0x0081, 0x0082, 0x0000, 0x0000, 0x8001, 0x0190},
};

Vec3s bdan_boss_sceneCollisionHeader_000E14Vertices[] = {
    {    140,      0,    955 },
    {    140,      0,    805 },
    {   -140,      0,    805 },
    {   -140,      0,    955 },
    {    297,      0,   -828 },
    {    594,      0,     63 },
    {    594,      0,   -531 },
    {   -297,      0,   -828 },
    {   -594,      0,   -531 },
    {   -594,      0,     63 },
    {   -297,      0,    360 },
    {    297,      0,    360 },
    {   -277,     10,    260 },
    {   -271,    -10,    174 },
    {   -542,    -10,    264 },
    {   -517,     10,    340 },
    {   -197,     10,    300 },
    {   -132,    -10,    243 },
    {   -117,     10,    540 },
    {    -41,    -10,    515 },
    {    517,     10,    340 },
    {    277,     10,    260 },
    {    197,     10,    300 },
    {    117,     10,    540 },
    {    542,    -10,    264 },
    {    271,    -10,    174 },
    {    132,    -10,    243 },
    {     41,    -10,    515 },
    {   -517,     10,   -808 },
    {   -277,     10,   -728 },
    {   -197,     10,   -768 },
    {   -117,     10,  -1008 },
    {   -132,    -10,   -711 },
    {    -41,    -10,   -983 },
    {    117,     10,  -1008 },
    {     41,    -10,   -983 },
    {    132,    -10,   -711 },
    {    197,     10,   -768 },
    {    277,     10,   -728 },
    {    517,     10,   -808 },
    {    271,    -10,   -642 },
    {    542,    -10,   -732 },
    {   -271,    -10,   -642 },
    {   -542,    -10,   -732 },
    {   -494,     10,     43 },
    {   -408,    -10,     37 },
    {   -477,    -10,   -102 },
    {   -534,     10,    -37 },
    {   -749,    -10,   -193 },
    {   -774,     10,   -117 },
    {   -574,     10,    283 },
    {   -498,    -10,    308 },
    {   -774,     10,   -351 },
    {   -749,    -10,   -275 },
    {   -477,    -10,   -366 },
    {   -534,     10,   -431 },
    {   -494,     10,   -511 },
    {   -574,     10,   -751 },
    {   -408,    -10,   -505 },
    {   -498,    -10,   -776 },
    {    774,     10,   -117 },
    {    534,     10,    -37 },
    {    494,     10,     43 },
    {    574,     10,    283 },
    {    408,    -10,     37 },
    {    498,    -10,    308 },
    {    749,    -10,   -193 },
    {    477,    -10,   -102 },
    {    574,     10,   -751 },
    {    498,    -10,   -776 },
    {    408,    -10,   -505 },
    {    494,     10,   -511 },
    {    477,    -10,   -366 },
    {    534,     10,   -431 },
    {    749,    -10,   -275 },
    {    774,     10,   -351 },
    {    297,    200,    360 },
    {   -297,    200,    360 },
    {   -297,    400,    360 },
    {    297,    400,    360 },
    {   -594,    400,     63 },
    {   -594,    400,   -531 },
    {   -297,    400,   -828 },
    {    297,    400,   -828 },
    {    594,    400,   -531 },
    {    594,    400,     63 },
    {     80,      0,    795 },
    {    -80,      0,    795 },
    {    -80,    160,    795 },
    {     80,    160,    795 },
    {   -120,     20,    360 },
    {   -100,      0,    360 },
    {   -120,    140,    360 },
    {    120,     20,    360 },
    {    120,    140,    360 },
    {     80,    200,    360 },
    {    -80,    200,    360 },
    {    100,      0,    360 },
    {    149,    300,     63 },
    {    297,    300,    -85 },
    {    297,    300,   -383 },
    {    149,    300,   -531 },
    {   -149,    300,   -531 },
    {   -297,    300,   -383 },
    {   -297,    300,    -85 },
    {   -149,    300,     63 },
    {    -80,    120,    404 },
    {    -40,    160,    404 },
    {     40,    160,    404 },
    {     80,    120,    404 },
    {     80,     20,    404 },
    {    -80,     20,    404 },
    {    -60,      0,    404 },
    {      0,      0,    360 },
    {     60,      0,    404 },
    {     80,    120,    805 },
    {     80,     20,    805 },
    {    -80,     20,    805 },
    {    -80,    120,    805 },
    {    -40,    160,    805 },
    {    -60,      0,    805 },
    {     60,      0,    805 },
    {     40,    160,    805 },
    {    -64,      0,    400 },
    {    -84,     20,    400 },
    {    -84,    124,    400 },
    {    -44,    164,    400 },
    {     44,    164,    400 },
    {     84,    124,    400 },
    {     84,     20,    400 },
    {     64,      0,    400 },
};

CollisionHeader bdan_boss_sceneCollisionHeader_000E14 = { 
    { -774, -120, -1008 },
    { 774, 500, 1721 },
    ARRAY_COUNT(bdan_boss_sceneCollisionHeader_000E14Vertices), bdan_boss_sceneCollisionHeader_000E14Vertices,
    ARRAY_COUNT(bdan_boss_sceneCollisionHeader_000E14Polygons), bdan_boss_sceneCollisionHeader_000E14Polygons,
    bdan_boss_sceneCollisionHeader_000E14SurfaceType,
    bdan_boss_sceneCollisionHeader_000E14CamDataList,
    0, NULL
};

