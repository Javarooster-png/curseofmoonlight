#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "impa_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "impa_room_0.h"

SceneCmd impa_sceneCommands[] = {
    SCENE_CMD_SOUND_SETTINGS(5, 19, 31),
    SCENE_CMD_ROOM_LIST(1, impa_sceneRoomList0x000080),
    SCENE_CMD_TRANSITION_ACTOR_LIST(1, impa_sceneTransitionActorList_000070),
    SCENE_CMD_MISC_SETTINGS(0x20, 0x0000000E),
    SCENE_CMD_COL_HEADER(&impa_sceneCollisionHeader_000CE0),
    SCENE_CMD_ENTRANCE_LIST(impa_sceneEntranceList0x000088),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_NONE, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SPAWN_LIST(1, impa_sceneStartPositionList0x000060),
    SCENE_CMD_SKYBOX_SETTINGS(26, 0, true),
    SCENE_CMD_EXIT_LIST(impa_sceneExitList_00008C),
    SCENE_CMD_ENV_LIGHT_SETTINGS(1, impa_sceneLightSettings0x000090),
    SCENE_CMD_END(),
};

ActorEntry impa_sceneStartPositionList0x000060[] = {
    { ACTOR_PLAYER,     {     97,      0,    168 }, {      0, 0X8000,      0 }, 0x0E00 },
};

TransitionActorEntry impa_sceneTransitionActorList_000070[] = {
    { 0, 255, 0, 255, ACTOR_EN_DOOR, 100, 0, 210, 0, 0x01BF },
};

RomFile impa_sceneRoomList0x000080[] = {
    { (uintptr_t)_impa_room_0SegmentRomStart, (uintptr_t)_impa_room_0SegmentRomEnd },
};

Spawn impa_sceneEntranceList0x000088[] = {
    { 0x00, 0x00 },
    { 0x00, 0x00 },
};

u16 impa_sceneExitList_00008C[] = {
    ENTR_BACK_ALLEY_DAY_4,
    ENTR_DEKU_TREE_0,
};

EnvLightSettings impa_sceneLightSettings0x000090[] = {
    { 0x46, 0x28, 0x28, 0x52, 0x00, 0x60, 0x96, 0x8C, 0x8C, 0xE3, 0x76, 0xDD, 0x96, 0x8C, 0x8C, 0x0A, 0x0A, 0x0A,
    0x07E0, 0x0BB8 },
};

u8 impa_scene_possiblePadding_0000A8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vec3s impa_sceneCollisionHeader_000CE0CamPosData[] = {
    {      8,    580,     60 },
    {  14746,  31494,      0 },
    {   5000,     -1,     -1 },
    {      0,     44,      0 },
    {      0,      0,      0 },
    {   6000,     -1,     -1 },
};

BgCamInfo impa_sceneCollisionHeader_000CE0CamDataList[] = {
    { 0x0019, 3, &impa_sceneCollisionHeader_000CE0CamPosData[0] },
    { 0x001A, 3, &impa_sceneCollisionHeader_000CE0CamPosData[3] },
    { 0x0000, 0, NULL },
};

SurfaceType impa_sceneCollisionHeader_000CE0SurfaceType[] = {
    {0x00000002, 0x0000080A},   {0x00000102, 0x0000080A},   {0x00000002, 0x00000FCA},   {0x00200002, 0x0000080A},
    {0x00000002, 0x00000FC8},
};

CollisionPoly impa_sceneCollisionHeader_000CE0Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xFFBA},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x7FFF, 0x0000, 0x0000, 0xFFBA},
    {0x0000, 0x0001, 0x0004, 0x0005, 0x0000, 0x8001, 0x0000, 0x0064},
    {0x0000, 0x0001, 0x0005, 0x0002, 0x0000, 0x8001, 0x0000, 0x0064},
    {0x0000, 0x0004, 0x0006, 0x0007, 0x8001, 0x0000, 0x0000, 0x0082},
    {0x0000, 0x0004, 0x0007, 0x0005, 0x8001, 0x0000, 0x0000, 0x0082},
    {0x0000, 0x0008, 0x0009, 0x000A, 0x7FFF, 0x0000, 0x0000, 0x00C8},
    {0x0000, 0x0008, 0x000A, 0x000B, 0x7FFF, 0x0000, 0x0000, 0x00C8},
    {0x0000, 0x000C, 0x000D, 0x000E, 0x8001, 0x0000, 0x0000, 0x00C8},
    {0x0000, 0x000C, 0x000E, 0x000F, 0x8001, 0x0000, 0x0000, 0x00C8},
    {0x0000, 0x000D, 0x0004, 0x0001, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0000, 0x000D, 0x0001, 0x000A, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0000, 0x000D, 0x000C, 0x0006, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0000, 0x000D, 0x0006, 0x0004, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0000, 0x0001, 0x0000, 0x000B, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0000, 0x0001, 0x000B, 0x000A, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0000, 0x000F, 0x0008, 0x0010, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x000F, 0x0010, 0x0011, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0003, 0x0012, 0x0013, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0003, 0x0013, 0x0007, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0008, 0x000F, 0x000E, 0x0000, 0x0000, 0x7FFF, 0x00C8},
    {0x0000, 0x0008, 0x000E, 0x0009, 0x0000, 0x0000, 0x7FFF, 0x00C8},
    {0x0000, 0x0014, 0x0015, 0x0016, 0x0000, 0x0000, 0x8001, 0x003C},
    {0x0000, 0x0014, 0x0016, 0x0017, 0x0000, 0x0000, 0x8001, 0x003C},
    {0x0000, 0x0018, 0x0017, 0x0016, 0x7FFF, 0x0000, 0x0000, 0x009C},
    {0x0000, 0x0018, 0x0016, 0x0019, 0x7FFF, 0x0000, 0x0000, 0x009C},
    {0x0000, 0x001A, 0x001B, 0x001C, 0x7FFF, 0x0000, 0x0000, 0x00A0},
    {0x0000, 0x001A, 0x001C, 0x001D, 0x7FFF, 0x0000, 0x0000, 0x00A0},
    {0x0002, 0x001E, 0x001F, 0x0020, 0x7528, 0x0000, 0xCC73, 0x0059},
    {0x0002, 0x001E, 0x0020, 0x0021, 0x7528, 0x0000, 0xCC73, 0x0059},
    {0x0002, 0x001F, 0x0022, 0x0023, 0x338D, 0x0000, 0x8AD8, 0xFFE9},
    {0x0002, 0x001F, 0x0023, 0x0020, 0x338D, 0x0000, 0x8AD8, 0xFFE9},
    {0x0002, 0x0022, 0x0024, 0x0025, 0x0000, 0x0000, 0x8001, 0xFFA0},
    {0x0002, 0x0022, 0x0025, 0x0023, 0x0000, 0x0000, 0x8001, 0xFFA0},
    {0x0002, 0x0024, 0x0026, 0x0027, 0x8597, 0x0000, 0xDA99, 0xFF33},
    {0x0002, 0x0024, 0x0027, 0x0025, 0x8597, 0x0000, 0xDA99, 0xFF33},
    {0x0002, 0x0026, 0x0028, 0x0029, 0x8AD8, 0x0000, 0x338D, 0xFF65},
    {0x0002, 0x0026, 0x0029, 0x0027, 0x8AD8, 0x0000, 0x338D, 0xFF65},
    {0x0002, 0x0028, 0x002A, 0x002B, 0xCC73, 0x0000, 0x7528, 0xFFD6},
    {0x0002, 0x0028, 0x002B, 0x0029, 0xCC73, 0x0000, 0x7528, 0xFFD6},
    {0x0002, 0x002A, 0x002C, 0x002D, 0x338D, 0x0000, 0x7528, 0x0056},
    {0x0002, 0x002A, 0x002D, 0x002B, 0x338D, 0x0000, 0x7528, 0x0056},
    {0x0002, 0x002C, 0x001E, 0x0021, 0x7528, 0x0000, 0x338D, 0x008A},
    {0x0002, 0x002C, 0x0021, 0x002D, 0x7528, 0x0000, 0x338D, 0x008A},
    {0x0002, 0x002E, 0x0025, 0x0024, 0x0000, 0x0000, 0x8001, 0xFFA0},
    {0x0002, 0x002E, 0x0024, 0x002F, 0x0000, 0x0000, 0x8001, 0xFFA0},
    {0x0003, 0x0030, 0x0031, 0x0032, 0x75A6, 0x0000, 0xCD94, 0xFFE4},
    {0x0003, 0x0030, 0x0032, 0x0033, 0x75A6, 0x0000, 0xCD94, 0xFFE4},
    {0x0003, 0x0031, 0x0034, 0x0035, 0x326C, 0x0000, 0x8A5A, 0xFFE4},
    {0x0003, 0x0031, 0x0035, 0x0032, 0x326C, 0x0000, 0x8A5A, 0xFFE4},
    {0x0003, 0x0034, 0x0036, 0x0037, 0xCD94, 0x0000, 0x8A5A, 0xFFE4},
    {0x0003, 0x0034, 0x0037, 0x0035, 0xCD94, 0x0000, 0x8A5A, 0xFFE4},
    {0x0003, 0x0036, 0x0038, 0x0039, 0x8A5A, 0x0000, 0xCD94, 0xFFE4},
    {0x0003, 0x0036, 0x0039, 0x0037, 0x8A5A, 0x0000, 0xCD94, 0xFFE4},
    {0x0003, 0x0038, 0x003A, 0x003B, 0x8A5A, 0x0000, 0x326C, 0xFFE4},
    {0x0003, 0x0038, 0x003B, 0x0039, 0x8A5A, 0x0000, 0x326C, 0xFFE4},
    {0x0003, 0x003A, 0x003C, 0x003D, 0xCD94, 0x0000, 0x75A6, 0xFFE4},
    {0x0003, 0x003A, 0x003D, 0x003B, 0xCD94, 0x0000, 0x75A6, 0xFFE4},
    {0x0003, 0x003C, 0x003E, 0x003F, 0x326C, 0x0000, 0x75A6, 0xFFE4},
    {0x0003, 0x003C, 0x003F, 0x003D, 0x326C, 0x0000, 0x75A6, 0xFFE4},
    {0x0003, 0x003E, 0x0030, 0x0033, 0x75A6, 0x0000, 0x326C, 0xFFE4},
    {0x0003, 0x003E, 0x0033, 0x003F, 0x75A6, 0x0000, 0x326C, 0xFFE4},
    {0x0002, 0x0040, 0x0041, 0x0042, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0002, 0x0040, 0x0042, 0x0043, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0002, 0x0040, 0x0043, 0x0044, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0002, 0x0040, 0x0044, 0x0045, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0002, 0x0040, 0x0045, 0x0046, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0002, 0x0040, 0x0046, 0x0047, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0002, 0x0048, 0x0049, 0x0042, 0x326C, 0x0000, 0x8A5A, 0x000C},
    {0x0002, 0x0048, 0x0042, 0x0041, 0x326C, 0x0000, 0x8A5A, 0x000C},
    {0x0002, 0x0049, 0x004A, 0x0043, 0xCD94, 0x0000, 0x8A5A, 0x002B},
    {0x0002, 0x0049, 0x0043, 0x0042, 0xCD94, 0x0000, 0x8A5A, 0x002B},
    {0x0002, 0x004A, 0x004B, 0x0044, 0x8A5A, 0x0000, 0xCD94, 0x002B},
    {0x0002, 0x004A, 0x0044, 0x0043, 0x8A5A, 0x0000, 0xCD94, 0x002B},
    {0x0002, 0x004B, 0x004C, 0x0045, 0x8A5A, 0x0000, 0x326C, 0x000C},
    {0x0002, 0x004B, 0x0045, 0x0044, 0x8A5A, 0x0000, 0x326C, 0x000C},
    {0x0002, 0x004C, 0x004D, 0x0046, 0xCD94, 0x0000, 0x75A6, 0xFFE2},
    {0x0002, 0x004C, 0x0046, 0x0045, 0xCD94, 0x0000, 0x75A6, 0xFFE2},
    {0x0002, 0x004D, 0x004E, 0x0047, 0x326C, 0x0000, 0x75A6, 0xFFC2},
    {0x0002, 0x004D, 0x0047, 0x0046, 0x326C, 0x0000, 0x75A6, 0xFFC2},
    {0x0002, 0x004E, 0x004F, 0x0040, 0x75A6, 0x0000, 0x326C, 0xFFC2},
    {0x0002, 0x004E, 0x0040, 0x0047, 0x75A6, 0x0000, 0x326C, 0xFFC2},
    {0x0002, 0x004F, 0x0048, 0x0041, 0x75A6, 0x0000, 0xCD94, 0xFFE2},
    {0x0002, 0x004F, 0x0041, 0x0040, 0x75A6, 0x0000, 0xCD94, 0xFFE2},
    {0x0002, 0x0050, 0x0051, 0x0052, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0002, 0x0050, 0x0052, 0x0053, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0002, 0x0050, 0x0053, 0x0054, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0002, 0x0050, 0x0054, 0x0055, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0002, 0x0050, 0x0055, 0x0056, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0002, 0x0050, 0x0056, 0x0057, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0002, 0x0058, 0x0059, 0x0052, 0x326C, 0x0000, 0x8A5A, 0xFFE2},
    {0x0002, 0x0058, 0x0052, 0x0051, 0x326C, 0x0000, 0x8A5A, 0xFFE2},
    {0x0002, 0x0059, 0x005A, 0x0053, 0xCD94, 0x0000, 0x8A5A, 0xFFC2},
    {0x0002, 0x0059, 0x0053, 0x0052, 0xCD94, 0x0000, 0x8A5A, 0xFFC2},
    {0x0002, 0x005A, 0x005B, 0x0054, 0x8A5A, 0x0000, 0xCD94, 0xFFC2},
    {0x0002, 0x005A, 0x0054, 0x0053, 0x8A5A, 0x0000, 0xCD94, 0xFFC2},
    {0x0002, 0x005B, 0x005C, 0x0055, 0x8A5A, 0x0000, 0x326C, 0xFFE2},
    {0x0002, 0x005B, 0x0055, 0x0054, 0x8A5A, 0x0000, 0x326C, 0xFFE2},
    {0x0002, 0x005C, 0x005D, 0x0056, 0xCD94, 0x0000, 0x75A6, 0x000C},
    {0x0002, 0x005C, 0x0056, 0x0055, 0xCD94, 0x0000, 0x75A6, 0x000C},
    {0x0002, 0x005D, 0x005E, 0x0057, 0x326C, 0x0000, 0x75A6, 0x002B},
    {0x0002, 0x005D, 0x0057, 0x0056, 0x326C, 0x0000, 0x75A6, 0x002B},
    {0x0002, 0x005E, 0x005F, 0x0050, 0x75A6, 0x0000, 0x326C, 0x002B},
    {0x0002, 0x005E, 0x0050, 0x0057, 0x75A6, 0x0000, 0x326C, 0x002B},
    {0x0002, 0x005F, 0x0058, 0x0051, 0x75A6, 0x0000, 0xCD94, 0x000C},
    {0x0002, 0x005F, 0x0051, 0x0050, 0x75A6, 0x0000, 0xCD94, 0x000C},
    {0x0003, 0x0060, 0x0061, 0x0062, 0x0000, 0x0000, 0x7FFF, 0xFFE2},
    {0x0003, 0x0060, 0x0062, 0x0063, 0x0000, 0x0000, 0x7FFF, 0xFFE2},
    {0x0003, 0x0064, 0x0065, 0x0066, 0x0000, 0x0000, 0x8001, 0xFFE2},
    {0x0003, 0x0064, 0x0066, 0x0067, 0x0000, 0x0000, 0x8001, 0xFFE2},
    {0x0003, 0x0065, 0x0064, 0x0062, 0x8001, 0x0000, 0x0000, 0x00AC},
    {0x0003, 0x0065, 0x0062, 0x0061, 0x8001, 0x0000, 0x0000, 0x00AC},
    {0x0004, 0x0068, 0x0069, 0x006A, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0004, 0x0068, 0x006A, 0x006B, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0002, 0x0069, 0x006C, 0x006D, 0x8001, 0x0000, 0x0000, 0x0080},
    {0x0002, 0x0069, 0x006D, 0x006A, 0x8001, 0x0000, 0x0000, 0x0080},
    {0x0002, 0x006B, 0x006A, 0x006D, 0x0000, 0x0000, 0x7FFF, 0x0066},
    {0x0002, 0x006B, 0x006D, 0x006E, 0x0000, 0x0000, 0x7FFF, 0x0066},
    {0x0000, 0x006F, 0x0070, 0x0071, 0x0000, 0x0000, 0x8001, 0x0043},
    {0x0000, 0x006F, 0x0071, 0x0072, 0x0000, 0x0000, 0x8001, 0x0043},
    {0x0000, 0x0070, 0x006F, 0x0073, 0x8001, 0x0000, 0x0000, 0x009F},
    {0x0000, 0x0070, 0x0073, 0x0074, 0x8001, 0x0000, 0x0000, 0x009F},
    {0x0000, 0x0075, 0x0076, 0x0077, 0x7FFF, 0x0000, 0x0000, 0xFFCB},
    {0x0000, 0x0075, 0x0077, 0x0078, 0x7FFF, 0x0000, 0x0000, 0xFFCB},
    {0x0000, 0x0079, 0x007A, 0x007B, 0x8001, 0x0000, 0x0000, 0x001B},
    {0x0000, 0x0079, 0x007B, 0x007C, 0x8001, 0x0000, 0x0000, 0x001B},
    {0x0000, 0x007A, 0x0079, 0x0077, 0x0000, 0x0000, 0x7FFF, 0x008B},
    {0x0000, 0x007A, 0x0077, 0x0076, 0x0000, 0x0000, 0x7FFF, 0x008B},
    {0x0000, 0x007D, 0x007E, 0x007F, 0x0000, 0x0000, 0x7FFF, 0x00A4},
    {0x0000, 0x007D, 0x007F, 0x0080, 0x0000, 0x0000, 0x7FFF, 0x00A4},
    {0x0000, 0x0081, 0x0082, 0x007F, 0x8001, 0x0000, 0x0000, 0x000C},
    {0x0000, 0x0081, 0x007F, 0x007E, 0x8001, 0x0000, 0x0000, 0x000C},
    {0x0000, 0x0080, 0x0083, 0x0084, 0x7FFF, 0x0000, 0x0000, 0xFFBC},
    {0x0000, 0x0080, 0x0084, 0x007D, 0x7FFF, 0x0000, 0x0000, 0xFFBC},
    {0x0000, 0x0085, 0x0074, 0x0073, 0x0000, 0x0000, 0x7FFF, 0xFFA3},
    {0x0000, 0x0085, 0x0073, 0x0086, 0x0000, 0x0000, 0x7FFF, 0xFFA3},
    {0x0000, 0x0004, 0x0006, 0x0000, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0000, 0x0004, 0x0000, 0x0001, 0x0000, 0x0000, 0x8001, 0x00C8},
};

Vec3s impa_sceneCollisionHeader_000CE0Vertices[] = {
    {     70,      0,    200 },
    {     70,    100,    200 },
    {     70,    100,    210 },
    {     70,      0,    210 },
    {    130,    100,    200 },
    {    130,    100,    210 },
    {    130,      0,    200 },
    {    130,      0,    210 },
    {   -200,      0,   -200 },
    {   -200,    320,   -200 },
    {   -200,    320,    200 },
    {   -200,      0,    200 },
    {    200,      0,    200 },
    {    200,    320,    200 },
    {    200,    320,   -200 },
    {    200,      0,   -200 },
    {   -200,      0,    210 },
    {    200,      0,    210 },
    {     70,      0,    300 },
    {    130,      0,    300 },
    {   -204,      0,     60 },
    {   -204,    120,     60 },
    {   -156,    120,     60 },
    {   -156,      0,     60 },
    {   -156,      0,    200 },
    {   -156,    120,    200 },
    {   -160,      0,     80 },
    {   -160,      0,    -40 },
    {   -160,    120,    -40 },
    {   -160,    120,     80 },
    {   -124,      0,    -60 },
    {   -135,      0,    -85 },
    {   -135,    120,    -85 },
    {   -124,    120,    -60 },
    {   -160,      0,    -96 },
    {   -160,    120,    -96 },
    {   -185,      0,    -96 },
    {   -185,    120,    -96 },
    {   -196,      0,    -60 },
    {   -196,    120,    -60 },
    {   -185,      0,    -35 },
    {   -185,    120,    -35 },
    {   -160,      0,    -24 },
    {   -160,    120,    -24 },
    {   -135,      0,    -35 },
    {   -135,    120,    -35 },
    {   -200,    120,    -96 },
    {   -200,      0,    -96 },
    {     30,      0,      0 },
    {     21,      0,    -21 },
    {     21,    120,    -21 },
    {     30,    120,      0 },
    {      0,      0,    -30 },
    {      0,    120,    -30 },
    {    -21,      0,    -21 },
    {    -21,    120,    -21 },
    {    -30,      0,      0 },
    {    -30,    120,      0 },
    {    -21,      0,     21 },
    {    -21,    120,     21 },
    {      0,      0,     30 },
    {      0,    120,     30 },
    {     21,      0,     21 },
    {     21,    120,     21 },
    {     50,     16,     40 },
    {     47,     16,     33 },
    {     40,     16,     30 },
    {     33,     16,     33 },
    {     30,     16,     40 },
    {     33,     16,     47 },
    {     40,     16,     50 },
    {     47,     16,     47 },
    {     47,      0,     33 },
    {     40,      0,     30 },
    {     33,      0,     33 },
    {     30,      0,     40 },
    {     33,      0,     47 },
    {     40,      0,     50 },
    {     47,      0,     47 },
    {     50,      0,     40 },
    {    -30,     16,    -40 },
    {    -33,     16,    -47 },
    {    -40,     16,    -50 },
    {    -47,     16,    -47 },
    {    -50,     16,    -40 },
    {    -47,     16,    -33 },
    {    -40,     16,    -30 },
    {    -33,     16,    -33 },
    {    -33,      0,    -47 },
    {    -40,      0,    -50 },
    {    -47,      0,    -47 },
    {    -50,      0,    -40 },
    {    -47,      0,    -33 },
    {    -40,      0,    -30 },
    {    -33,      0,    -33 },
    {    -30,      0,    -40 },
    {    200,    120,     30 },
    {    172,    120,     30 },
    {    172,      0,     30 },
    {    200,      0,     30 },
    {    172,      0,    -30 },
    {    172,    120,    -30 },
    {    200,    120,    -30 },
    {    200,      0,    -30 },
    {    200,     16,   -200 },
    {    128,     16,   -200 },
    {    128,     16,   -102 },
    {    200,     16,   -102 },
    {    128,      0,   -200 },
    {    128,      0,   -102 },
    {    200,      0,   -102 },
    {    159,      0,     67 },
    {    159,    120,     67 },
    {    200,    120,     67 },
    {    200,      0,     67 },
    {    159,      0,     93 },
    {    159,    120,     93 },
    {     53,    120,   -173 },
    {     53,    120,   -139 },
    {     53,      0,   -139 },
    {     53,      0,   -173 },
    {     27,      0,   -139 },
    {     27,    120,   -139 },
    {     27,    120,   -173 },
    {     27,      0,   -173 },
    {     68,    120,   -164 },
    {     12,    120,   -164 },
    {     12,      0,   -164 },
    {     68,      0,   -164 },
    {     12,    120,   -200 },
    {     12,      0,   -200 },
    {     68,      0,   -200 },
    {     68,    120,   -200 },
    {    200,    120,     93 },
    {    200,      0,     93 },
};

CollisionHeader impa_sceneCollisionHeader_000CE0 = { 
    { -204, 0, -200 },
    { 200, 320, 300 },
    ARRAY_COUNT(impa_sceneCollisionHeader_000CE0Vertices), impa_sceneCollisionHeader_000CE0Vertices,
    ARRAY_COUNT(impa_sceneCollisionHeader_000CE0Polygons), impa_sceneCollisionHeader_000CE0Polygons,
    impa_sceneCollisionHeader_000CE0SurfaceType,
    impa_sceneCollisionHeader_000CE0CamDataList,
    0, NULL
};

