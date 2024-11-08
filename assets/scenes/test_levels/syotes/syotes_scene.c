#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "syotes_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "syotes_room_0.h"

SceneCmd syotes_sceneCommands[] = {
    SCENE_CMD_SOUND_SETTINGS(5, 0, 1),
    SCENE_CMD_ROOM_LIST(1, syotes_sceneRoomList0x000060),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00000000),
    SCENE_CMD_COL_HEADER(&syotes_sceneCollisionHeader_001BD4),
    SCENE_CMD_ENTRANCE_LIST(syotes_sceneEntranceList0x000068),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_NONE, OBJECT_GAMEPLAY_DANGEON_KEEP),
    SCENE_CMD_SPAWN_LIST(1, syotes_sceneStartPositionList0x000050),
    SCENE_CMD_SKYBOX_SETTINGS(0, 0, false),
    SCENE_CMD_ENV_LIGHT_SETTINGS(4, syotes_sceneLightSettings0x00006C),
    SCENE_CMD_END(),
};

ActorEntry syotes_sceneStartPositionList0x000050[] = {
    { ACTOR_PLAYER,     {    198,      0,      6 }, {      0, 0XC000,      0 }, 0x0FFF },
};

RomFile syotes_sceneRoomList0x000060[] = {
    { (uintptr_t)_syotes_room_0SegmentRomStart, (uintptr_t)_syotes_room_0SegmentRomEnd },
};

Spawn syotes_sceneEntranceList0x000068[] = {
    { 0x00, 0x00 },
    { 0x00, 0x00 },
};

EnvLightSettings syotes_sceneLightSettings0x00006C[] = {
    { 0x46, 0x2D, 0x39, 0x49, 0x49, 0x49, 0xB4, 0x9A, 0x8A, 0xB7, 0xB7, 0xB7, 0x14, 0x14, 0x3C, 0x1E, 0x0A, 0x0A,
    0x07E0, 0x3200 },
    { 0x69, 0x5A, 0x5A, 0x49, 0x49, 0x49, 0xFF, 0xFF, 0xF0, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x5A, 0x64, 0x64, 0x78,
    0x07E4, 0x3200 },
    { 0x78, 0x5A, 0x00, 0x49, 0x49, 0x49, 0xFA, 0x87, 0x32, 0xB7, 0xB7, 0xB7, 0x1E, 0x1E, 0x3C, 0x1C, 0x14, 0x00,
    0x07E1, 0x3200 },
    { 0x28, 0x28, 0x46, 0x49, 0x49, 0x49, 0x14, 0x14, 0x23, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x64, 0x00, 0x00, 0x1E,
    0x07E0, 0x3200 },
};

u8 syotes_scene_possiblePadding_0000C4[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

BgCamInfo syotes_sceneCollisionHeader_001BD4CamDataList[] = {
    { 0x0000, 0, NULL },
    { 0x0003, 0, NULL },
};

SurfaceType syotes_sceneCollisionHeader_001BD4SurfaceType[] = {
    {0x00000000, 0x000007C0},   {0x00000000, 0x000007C2},   {0x00000001, 0x000007C2},   {0x00000001, 0x000007C0},
    {0x00004000, 0x000007C0},
};

CollisionPoly syotes_sceneCollisionHeader_001BD4Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x7FFF, 0x0000, 0x0000, 0x012B},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x7FFF, 0x0000, 0x0000, 0x012B},
    {0x0001, 0x0003, 0x0002, 0x0004, 0x5A82, 0x0000, 0xA57E, 0x008D},
    {0x0001, 0x0003, 0x0004, 0x0005, 0x5A82, 0x0000, 0xA57E, 0x008D},
    {0x0001, 0x0005, 0x0004, 0x0006, 0x7FFF, 0x0000, 0x0000, 0x0103},
    {0x0001, 0x0005, 0x0006, 0x0007, 0x7FFF, 0x0000, 0x0000, 0x0103},
    {0x0001, 0x0007, 0x0006, 0x0008, 0x5A82, 0x0000, 0x5A82, 0x008D},
    {0x0001, 0x0007, 0x0008, 0x0009, 0x5A82, 0x0000, 0x5A82, 0x008D},
    {0x0000, 0x0009, 0x0008, 0x000E, 0x7FFF, 0x0000, 0x0000, 0x012B},
    {0x0000, 0x0009, 0x000E, 0x000F, 0x7FFF, 0x0000, 0x0000, 0x012B},
    {0x0000, 0x000A, 0x0010, 0x000B, 0x0000, 0x0000, 0x7FFF, 0x0027},
    {0x0000, 0x000A, 0x000B, 0x000D, 0x0000, 0x0000, 0x7FFF, 0x0027},
    {0x0000, 0x000B, 0x0010, 0x0011, 0x0000, 0x8001, 0x0000, 0x0064},
    {0x0000, 0x000B, 0x0011, 0x000C, 0x0000, 0x8001, 0x0000, 0x0064},
    {0x0000, 0x000C, 0x0011, 0x0012, 0x0000, 0x0000, 0x8001, 0x0028},
    {0x0000, 0x000C, 0x0012, 0x0013, 0x0000, 0x0000, 0x8001, 0x0028},
    {0x0000, 0x000B, 0x000C, 0x0014, 0x8001, 0x0000, 0x0000, 0x00F0},
    {0x0000, 0x000B, 0x0014, 0x0015, 0x8001, 0x0000, 0x0000, 0x00F0},
    {0x0000, 0x000C, 0x0013, 0x0016, 0x8001, 0x0000, 0x0000, 0x00F0},
    {0x0000, 0x000C, 0x0016, 0x0014, 0x8001, 0x0000, 0x0000, 0x00F0},
    {0x0000, 0x000D, 0x000B, 0x0015, 0x8001, 0x0000, 0x0000, 0x00F0},
    {0x0000, 0x000D, 0x0015, 0x0017, 0x8001, 0x0000, 0x0000, 0x00F0},
    {0x0001, 0x0018, 0x0019, 0x0017, 0x0000, 0x0000, 0x7FFF, 0x0077},
    {0x0001, 0x0018, 0x0017, 0x001A, 0x0000, 0x0000, 0x7FFF, 0x0077},
    {0x0000, 0x001B, 0x001C, 0x000A, 0x0000, 0x0000, 0x7FFF, 0x0027},
    {0x0000, 0x001B, 0x000A, 0x000D, 0x0000, 0x0000, 0x7FFF, 0x0027},
    {0x0000, 0x0012, 0x001D, 0x001E, 0x0000, 0x0000, 0x8001, 0x0028},
    {0x0000, 0x0012, 0x001E, 0x0013, 0x0000, 0x0000, 0x8001, 0x0028},
    {0x0001, 0x0016, 0x001F, 0x0020, 0x0000, 0x0000, 0x8001, 0x0078},
    {0x0001, 0x0016, 0x0020, 0x0021, 0x0000, 0x0000, 0x8001, 0x0078},
    {0x0000, 0x0013, 0x001E, 0x001F, 0x8001, 0x0000, 0x0000, 0x00F0},
    {0x0000, 0x0013, 0x001F, 0x0016, 0x8001, 0x0000, 0x0000, 0x00F0},
    {0x0000, 0x0019, 0x001B, 0x000D, 0x8001, 0x0000, 0x0000, 0x00F0},
    {0x0000, 0x0019, 0x000D, 0x0017, 0x8001, 0x0000, 0x0000, 0x00F0},
    {0x0000, 0x0022, 0x0032, 0x0033, 0x8001, 0x0000, 0x0000, 0xFF57},
    {0x0000, 0x0022, 0x0033, 0x0034, 0x8001, 0x0000, 0x0000, 0xFF57},
    {0x0000, 0x0023, 0x0035, 0x0036, 0x8001, 0x0000, 0x0000, 0xFF57},
    {0x0000, 0x0023, 0x0036, 0x0025, 0x8001, 0x0000, 0x0000, 0xFF57},
    {0x0000, 0x0024, 0x0037, 0x0038, 0x7FFF, 0x0000, 0x0000, 0xFFF6},
    {0x0000, 0x0024, 0x0038, 0x0039, 0x7FFF, 0x0000, 0x0000, 0xFFF6},
    {0x0001, 0x0025, 0x0036, 0x003A, 0x0000, 0x0000, 0x8001, 0x00BE},
    {0x0001, 0x0025, 0x003A, 0x0027, 0x0000, 0x0000, 0x8001, 0x00BE},
    {0x0001, 0x0026, 0x003B, 0x0037, 0x0000, 0x0000, 0x8001, 0x00BE},
    {0x0001, 0x0026, 0x0037, 0x0024, 0x0000, 0x0000, 0x8001, 0x00BE},
    {0x0001, 0x0027, 0x003A, 0x003C, 0x7FFF, 0x0000, 0x0000, 0x0095},
    {0x0001, 0x0027, 0x003C, 0x003D, 0x7FFF, 0x0000, 0x0000, 0x0095},
    {0x0001, 0x0028, 0x003E, 0x003F, 0x0000, 0x0000, 0x7FFF, 0x00BD},
    {0x0001, 0x0028, 0x003F, 0x002A, 0x0000, 0x0000, 0x7FFF, 0x00BD},
    {0x0001, 0x0029, 0x0040, 0x0032, 0x0000, 0x0000, 0x7FFF, 0x00BD},
    {0x0001, 0x0029, 0x0032, 0x0022, 0x0000, 0x0000, 0x7FFF, 0x00BD},
    {0x0001, 0x002A, 0x003F, 0x0041, 0x8001, 0x0000, 0x0000, 0xFFF7},
    {0x0001, 0x002A, 0x0041, 0x0042, 0x8001, 0x0000, 0x0000, 0xFFF7},
    {0x0000, 0x002B, 0x0043, 0x003E, 0x7FFF, 0x0000, 0x0000, 0xFFF6},
    {0x0000, 0x002B, 0x003E, 0x0028, 0x7FFF, 0x0000, 0x0000, 0xFFF6},
    {0x0001, 0x002C, 0x0044, 0x0040, 0x7FFF, 0x0000, 0x0000, 0x0095},
    {0x0001, 0x002C, 0x0040, 0x0029, 0x7FFF, 0x0000, 0x0000, 0x0095},
    {0x0001, 0x002D, 0x0045, 0x003B, 0x8001, 0x0000, 0x0000, 0xFFF7},
    {0x0001, 0x002D, 0x003B, 0x0026, 0x8001, 0x0000, 0x0000, 0xFFF7},
    {0x0001, 0x002E, 0x0046, 0x0047, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0001, 0x002E, 0x0047, 0x0031, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0001, 0x0021, 0x0020, 0x0046, 0x8001, 0x0000, 0x0000, 0x00C8},
    {0x0001, 0x0021, 0x0046, 0x002E, 0x8001, 0x0000, 0x0000, 0x00C8},
    {0x0001, 0x002F, 0x0018, 0x001A, 0x8001, 0x0000, 0x0000, 0x00C8},
    {0x0001, 0x002F, 0x001A, 0x0048, 0x8001, 0x0000, 0x0000, 0x00C8},
    {0x0001, 0x0030, 0x002F, 0x0048, 0x0000, 0x0000, 0x7FFF, 0x00C7},
    {0x0001, 0x0030, 0x0048, 0x0049, 0x0000, 0x0000, 0x7FFF, 0x00C7},
    {0x0001, 0x0031, 0x004A, 0x004B, 0x7FFF, 0x0000, 0x0000, 0x0167},
    {0x0001, 0x0031, 0x004B, 0x0049, 0x7FFF, 0x0000, 0x0000, 0x0167},
    {0x0001, 0x0048, 0x004C, 0x004D, 0x0000, 0x0000, 0x7FFF, 0x00C7},
    {0x0001, 0x0048, 0x004D, 0x0049, 0x0000, 0x0000, 0x7FFF, 0x00C7},
    {0x0001, 0x0031, 0x004E, 0x004F, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0001, 0x0031, 0x004F, 0x002E, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0001, 0x001A, 0x0050, 0x004C, 0x8001, 0x0000, 0x0000, 0x00C8},
    {0x0001, 0x001A, 0x004C, 0x0048, 0x8001, 0x0000, 0x0000, 0x00C8},
    {0x0001, 0x004E, 0x0031, 0x0049, 0x7FFF, 0x0000, 0x0000, 0x0167},
    {0x0001, 0x004E, 0x0049, 0x004D, 0x7FFF, 0x0000, 0x0000, 0x0167},
    {0x0000, 0x0017, 0x0015, 0x0050, 0x0000, 0x0000, 0x7FFF, 0x0077},
    {0x0001, 0x0017, 0x0050, 0x001A, 0x0000, 0x0000, 0x7FFF, 0x0077},
    {0x0000, 0x0051, 0x0014, 0x0016, 0x0000, 0x0000, 0x8001, 0x0078},
    {0x0001, 0x0051, 0x0016, 0x0021, 0x0000, 0x0000, 0x8001, 0x0078},
    {0x0001, 0x0051, 0x0021, 0x002E, 0x8001, 0x0000, 0x0000, 0x00C8},
    {0x0001, 0x0051, 0x002E, 0x004F, 0x8001, 0x0000, 0x0000, 0x00C8},
    {0x0002, 0x0052, 0x0053, 0x0054, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0052, 0x0054, 0x0055, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0056, 0x0057, 0x0053, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0056, 0x0053, 0x0052, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0055, 0x0054, 0x0058, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0055, 0x0058, 0x0059, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x005A, 0x005B, 0x005C, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x005A, 0x005C, 0x001E, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x005C, 0x005B, 0x005D, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x005C, 0x005D, 0x000F, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0058, 0x0057, 0x0056, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0058, 0x0056, 0x0059, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0000, 0x005F, 0x0060, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0000, 0x0060, 0x005E, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x005E, 0x0060, 0x0061, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x005E, 0x0061, 0x001B, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x000F, 0x005D, 0x005F, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x000F, 0x005F, 0x0000, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0061, 0x005A, 0x001E, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0061, 0x001E, 0x001B, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x001E, 0x001D, 0x001C, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x001E, 0x001C, 0x001B, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x005F, 0x0052, 0x0055, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x005F, 0x0055, 0x0060, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x005D, 0x0056, 0x0052, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x005D, 0x0052, 0x005F, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0060, 0x0055, 0x0059, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0060, 0x0059, 0x005B, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0059, 0x0056, 0x005D, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0059, 0x005D, 0x005B, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0057, 0x0058, 0x0054, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0057, 0x0054, 0x0053, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0008, 0x0006, 0x0004, 0x0000, 0x7FFF, 0x0000, 0xFFEC},
    {0x0001, 0x0008, 0x0004, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFFEC},
    {0x0001, 0x004A, 0x000E, 0x0001, 0x0000, 0x7FFF, 0x0000, 0xFFEC},
    {0x0001, 0x004A, 0x0001, 0x004B, 0x0000, 0x7FFF, 0x0000, 0xFFEC},
    {0x0000, 0x0062, 0x0063, 0x0064, 0x0000, 0x8001, 0x0000, 0x0168},
    {0x0000, 0x0062, 0x0064, 0x0065, 0x0000, 0x8001, 0x0000, 0x0168},
    {0x0000, 0x0066, 0x004C, 0x0067, 0x0000, 0xB00B, 0x63F3, 0x00FF},
    {0x0000, 0x0066, 0x0067, 0x0068, 0x0000, 0xB00B, 0x63F3, 0x00FF},
    {0x0000, 0x0067, 0x0063, 0x0062, 0x0000, 0xB00B, 0x63F3, 0x00FF},
    {0x0000, 0x0067, 0x0062, 0x0069, 0x0000, 0xB00B, 0x63F3, 0x00FF},
    {0x0000, 0x0069, 0x004D, 0x006A, 0x0000, 0xB00B, 0x63F3, 0x00FF},
    {0x0000, 0x0069, 0x006A, 0x006B, 0x0000, 0xB00B, 0x63F3, 0x00FF},
    {0x0000, 0x006C, 0x0073, 0x0074, 0x0000, 0xB00B, 0x63F3, 0x00FF},
    {0x0000, 0x006C, 0x0074, 0x0075, 0x0000, 0xB00B, 0x63F3, 0x00FF},
    {0x0000, 0x006D, 0x0076, 0x0077, 0x0000, 0xB00B, 0x63F3, 0x00FF},
    {0x0000, 0x006D, 0x0077, 0x0078, 0x0000, 0xB00B, 0x63F3, 0x00FF},
    {0x0000, 0x0015, 0x0014, 0x0051, 0x0000, 0x8001, 0x0000, 0x00A0},
    {0x0000, 0x0015, 0x0051, 0x0050, 0x0000, 0x8001, 0x0000, 0x00A0},
    {0x0000, 0x006E, 0x0079, 0x007A, 0x0000, 0xB00B, 0x9C0D, 0x0100},
    {0x0000, 0x006E, 0x007A, 0x007B, 0x0000, 0xB00B, 0x9C0D, 0x0100},
    {0x0001, 0x004C, 0x004F, 0x0064, 0x8001, 0x0000, 0x0000, 0x00C8},
    {0x0001, 0x004C, 0x0064, 0x0063, 0x8001, 0x0000, 0x0000, 0x00C8},
    {0x0000, 0x006F, 0x0065, 0x0064, 0x0000, 0xB00B, 0x9C0D, 0x0100},
    {0x0000, 0x006F, 0x0064, 0x007C, 0x0000, 0xB00B, 0x9C0D, 0x0100},
    {0x0000, 0x0070, 0x007D, 0x004E, 0x0000, 0xB00B, 0x9C0D, 0x0100},
    {0x0000, 0x0070, 0x004E, 0x006F, 0x0000, 0xB00B, 0x9C0D, 0x0100},
    {0x0000, 0x0071, 0x007C, 0x004F, 0x0000, 0xB00B, 0x9C0D, 0x0100},
    {0x0000, 0x0071, 0x004F, 0x007E, 0x0000, 0xB00B, 0x9C0D, 0x0100},
    {0x0000, 0x0072, 0x007F, 0x0080, 0x0000, 0xB00B, 0x9C0D, 0x0100},
    {0x0000, 0x0072, 0x0080, 0x0081, 0x0000, 0xB00B, 0x9C0D, 0x0100},
    {0x0001, 0x004D, 0x0062, 0x0065, 0x7FFF, 0x0000, 0x0000, 0x0167},
    {0x0001, 0x004D, 0x0065, 0x004E, 0x7FFF, 0x0000, 0x0000, 0x0167},
    {0x0001, 0x0036, 0x0082, 0x0083, 0x0000, 0x0000, 0x8001, 0x00BE},
    {0x0001, 0x0036, 0x0083, 0x003A, 0x0000, 0x0000, 0x8001, 0x00BE},
    {0x0001, 0x0040, 0x0084, 0x0085, 0x0000, 0x0000, 0x7FFF, 0x00BD},
    {0x0001, 0x0040, 0x0085, 0x0032, 0x0000, 0x0000, 0x7FFF, 0x00BD},
    {0x0001, 0x0045, 0x0086, 0x0087, 0x8001, 0x0000, 0x0000, 0xFFF7},
    {0x0001, 0x0045, 0x0087, 0x003B, 0x8001, 0x0000, 0x0000, 0xFFF7},
    {0x0001, 0x003E, 0x0088, 0x0089, 0x0000, 0x0000, 0x7FFF, 0x00BD},
    {0x0001, 0x003E, 0x0089, 0x003F, 0x0000, 0x0000, 0x7FFF, 0x00BD},
    {0x0000, 0x0032, 0x0085, 0x009A, 0x8001, 0x0000, 0x0000, 0xFF57},
    {0x0000, 0x0032, 0x009A, 0x0033, 0x8001, 0x0000, 0x0000, 0xFF57},
    {0x0001, 0x003F, 0x0089, 0x009B, 0x8001, 0x0000, 0x0000, 0xFFF7},
    {0x0001, 0x003F, 0x009B, 0x0041, 0x8001, 0x0000, 0x0000, 0xFFF7},
    {0x0000, 0x0043, 0x009C, 0x0088, 0x7FFF, 0x0000, 0x0000, 0xFFF6},
    {0x0000, 0x0043, 0x0088, 0x003E, 0x7FFF, 0x0000, 0x0000, 0xFFF6},
    {0x0001, 0x0044, 0x009D, 0x0084, 0x7FFF, 0x0000, 0x0000, 0x0095},
    {0x0001, 0x0044, 0x0084, 0x0040, 0x7FFF, 0x0000, 0x0000, 0x0095},
    {0x0001, 0x003A, 0x0083, 0x009E, 0x7FFF, 0x0000, 0x0000, 0x0095},
    {0x0001, 0x003A, 0x009E, 0x003C, 0x7FFF, 0x0000, 0x0000, 0x0095},
    {0x0000, 0x0035, 0x009F, 0x0082, 0x8001, 0x0000, 0x0000, 0xFF57},
    {0x0000, 0x0035, 0x0082, 0x0036, 0x8001, 0x0000, 0x0000, 0xFF57},
    {0x0001, 0x008A, 0x0091, 0x00A0, 0x5A82, 0x0000, 0x5A82, 0x0158},
    {0x0001, 0x008A, 0x00A0, 0x0090, 0x5A82, 0x0000, 0x5A82, 0x0158},
    {0x0000, 0x008B, 0x00A1, 0x00A2, 0x5A82, 0x0000, 0x5A82, 0xFF03},
    {0x0000, 0x008B, 0x00A2, 0x00A3, 0x5A82, 0x0000, 0x5A82, 0xFF03},
    {0x0001, 0x008C, 0x00A4, 0x00A5, 0x5A82, 0x0000, 0xA57E, 0x0159},
    {0x0001, 0x008C, 0x00A5, 0x00A6, 0x5A82, 0x0000, 0xA57E, 0x0159},
    {0x0001, 0x008D, 0x0092, 0x00A4, 0x0000, 0x7FFF, 0x0000, 0xFF4C},
    {0x0001, 0x008D, 0x00A4, 0x008C, 0x0000, 0x7FFF, 0x0000, 0xFF4C},
    {0x0000, 0x008E, 0x00A7, 0x00A6, 0x0000, 0x8001, 0x0000, 0x00A0},
    {0x0000, 0x008E, 0x00A6, 0x00A5, 0x0000, 0x8001, 0x0000, 0x00A0},
    {0x0000, 0x008F, 0x00A8, 0x00A9, 0xA57E, 0x0000, 0xA57E, 0xFE93},
    {0x0000, 0x008F, 0x00A9, 0x00AA, 0xA57E, 0x0000, 0xA57E, 0xFE93},
    {0x0001, 0x0090, 0x00A0, 0x00AA, 0x0000, 0x7FFF, 0x0000, 0xFF4C},
    {0x0001, 0x0090, 0x00AA, 0x00A9, 0x0000, 0x7FFF, 0x0000, 0xFF4C},
    {0x0000, 0x0091, 0x008A, 0x00A8, 0x0000, 0x8001, 0x0000, 0x00A0},
    {0x0000, 0x0091, 0x00A8, 0x008F, 0x0000, 0x8001, 0x0000, 0x00A0},
    {0x0000, 0x0092, 0x008D, 0x00A7, 0xA57E, 0x0000, 0x5A82, 0xFE92},
    {0x0000, 0x0092, 0x00A7, 0x008E, 0xA57E, 0x0000, 0x5A82, 0xFE92},
    {0x0000, 0x0093, 0x0095, 0x00AB, 0x5A82, 0x0000, 0xA57E, 0xFF04},
    {0x0000, 0x0093, 0x00AB, 0x0098, 0x5A82, 0x0000, 0xA57E, 0xFF04},
    {0x0001, 0x003B, 0x0087, 0x00AC, 0x0000, 0x0000, 0x8001, 0x00BE},
    {0x0001, 0x003B, 0x00AC, 0x0037, 0x0000, 0x0000, 0x8001, 0x00BE},
    {0x0000, 0x0037, 0x00AC, 0x00AD, 0x7FFF, 0x0000, 0x0000, 0xFFF6},
    {0x0000, 0x0037, 0x00AD, 0x0038, 0x7FFF, 0x0000, 0x0000, 0xFFF6},
    {0x0001, 0x0094, 0x00AE, 0x00A3, 0x0000, 0x7FFF, 0x0000, 0xFF4C},
    {0x0001, 0x0094, 0x00A3, 0x00A2, 0x0000, 0x7FFF, 0x0000, 0xFF4C},
    {0x0001, 0x0095, 0x0093, 0x00AF, 0x0000, 0x7FFF, 0x0000, 0xFF4C},
    {0x0001, 0x0095, 0x00AF, 0x0097, 0x0000, 0x7FFF, 0x0000, 0xFF4C},
    {0x0001, 0x0096, 0x0099, 0x00AE, 0xA57E, 0x0000, 0xA57E, 0x00E9},
    {0x0001, 0x0096, 0x00AE, 0x0094, 0xA57E, 0x0000, 0xA57E, 0x00E9},
    {0x0001, 0x0097, 0x00AF, 0x00B0, 0xA57E, 0x0000, 0x5A82, 0x00E8},
    {0x0001, 0x0097, 0x00B0, 0x00B1, 0xA57E, 0x0000, 0x5A82, 0x00E8},
    {0x0000, 0x0098, 0x00AB, 0x00B1, 0x0000, 0x8001, 0x0000, 0x00A0},
    {0x0000, 0x0098, 0x00B1, 0x00B0, 0x0000, 0x8001, 0x0000, 0x00A0},
    {0x0000, 0x0099, 0x0096, 0x00A1, 0x0000, 0x8001, 0x0000, 0x00A0},
    {0x0000, 0x0099, 0x00A1, 0x008B, 0x0000, 0x8001, 0x0000, 0x00A0},
    {0x0000, 0x0010, 0x001C, 0x001D, 0x8001, 0x0000, 0x0000, 0x0104},
    {0x0000, 0x0010, 0x001D, 0x0011, 0x8001, 0x0000, 0x0000, 0x0104},
    {0x0001, 0x00CA, 0x00CB, 0x00CC, 0x7FFF, 0x0000, 0x0000, 0x0095},
    {0x0001, 0x00CA, 0x00CC, 0x00CD, 0x7FFF, 0x0000, 0x0000, 0x0095},
    {0x0000, 0x00CD, 0x00CC, 0x00CE, 0x0000, 0x8001, 0x0000, 0x00E6},
    {0x0000, 0x00CD, 0x00CE, 0x00CF, 0x0000, 0x8001, 0x0000, 0x00E6},
    {0x0000, 0x00CF, 0x00CE, 0x00D0, 0x8001, 0x0000, 0x0000, 0xFF57},
    {0x0000, 0x00CF, 0x00D0, 0x00D1, 0x8001, 0x0000, 0x0000, 0xFF57},
    {0x0001, 0x00D1, 0x00D0, 0x00CB, 0x0000, 0x7FFF, 0x0000, 0xFF06},
    {0x0001, 0x00D1, 0x00CB, 0x00CA, 0x0000, 0x7FFF, 0x0000, 0xFF06},
    {0x0001, 0x00D2, 0x00DE, 0x00DF, 0x7FFF, 0x0000, 0x0000, 0x0135},
    {0x0001, 0x00D2, 0x00DF, 0x00D3, 0x7FFF, 0x0000, 0x0000, 0x0135},
    {0x0000, 0x00D3, 0x00DF, 0x00E0, 0x0000, 0x8001, 0x0000, 0x00E6},
    {0x0000, 0x00D3, 0x00E0, 0x00D4, 0x0000, 0x8001, 0x0000, 0x00E6},
    {0x0000, 0x00D4, 0x00E0, 0x00E1, 0x8001, 0x0000, 0x0000, 0xFEB7},
    {0x0000, 0x00D4, 0x00E1, 0x00D6, 0x8001, 0x0000, 0x0000, 0xFEB7},
    {0x0001, 0x00D5, 0x00E2, 0x00E3, 0x0000, 0x7FFF, 0x0000, 0xFF06},
    {0x0001, 0x00D5, 0x00E3, 0x00DC, 0x0000, 0x7FFF, 0x0000, 0xFF06},
    {0x0001, 0x00D6, 0x00E1, 0x00DE, 0x0000, 0x7FFF, 0x0000, 0xFF06},
    {0x0001, 0x00D6, 0x00DE, 0x00D2, 0x0000, 0x7FFF, 0x0000, 0xFF06},
    {0x0000, 0x00D7, 0x00E4, 0x00E5, 0x7FFF, 0x0000, 0x0000, 0xFFF6},
    {0x0000, 0x00D7, 0x00E5, 0x00D8, 0x7FFF, 0x0000, 0x0000, 0xFFF6},
    {0x0000, 0x00D8, 0x00E5, 0x00E6, 0x0000, 0x8001, 0x0000, 0x00E6},
    {0x0000, 0x00D8, 0x00E6, 0x00D9, 0x0000, 0x8001, 0x0000, 0x00E6},
    {0x0001, 0x00D9, 0x00E6, 0x00E7, 0x8001, 0x0000, 0x0000, 0xFFF7},
    {0x0001, 0x00D9, 0x00E7, 0x00DD, 0x8001, 0x0000, 0x0000, 0xFFF7},
    {0x0001, 0x00DA, 0x00E8, 0x00E2, 0x8001, 0x0000, 0x0000, 0x0096},
    {0x0001, 0x00DA, 0x00E2, 0x00D5, 0x8001, 0x0000, 0x0000, 0x0096},
    {0x0000, 0x00DB, 0x00E9, 0x00E8, 0x0000, 0x8001, 0x0000, 0x00E6},
    {0x0000, 0x00DB, 0x00E8, 0x00DA, 0x0000, 0x8001, 0x0000, 0x00E6},
    {0x0000, 0x00DC, 0x00E3, 0x00E9, 0x7FFF, 0x0000, 0x0000, 0xFF56},
    {0x0000, 0x00DC, 0x00E9, 0x00DB, 0x7FFF, 0x0000, 0x0000, 0xFF56},
    {0x0001, 0x00DD, 0x00E7, 0x00E4, 0x0000, 0x7FFF, 0x0000, 0xFF06},
    {0x0001, 0x00DD, 0x00E4, 0x00D7, 0x0000, 0x7FFF, 0x0000, 0xFF06},
    {0x0004, 0x406C, 0x00EA, 0x00EB, 0x8261, 0xEB93, 0xF262, 0xFF41},
    {0x0004, 0x406C, 0x00EB, 0x0075, 0x8265, 0xEB7D, 0xF263, 0xFF41},
    {0x0004, 0x406A, 0x00EC, 0x00EA, 0x0000, 0x6A80, 0x4700, 0xFFE9},
    {0x0004, 0x406A, 0x00EA, 0x006C, 0x0000, 0x6A80, 0x4700, 0xFFE9},
    {0x0004, 0x4075, 0x00EB, 0x00ED, 0x0000, 0x955B, 0xB938, 0x007D},
    {0x0004, 0x4075, 0x00ED, 0x006B, 0x0000, 0x955B, 0xB938, 0x007D},
    {0x0004, 0x4072, 0x00EE, 0x00EF, 0x8261, 0xEB8C, 0x0D93, 0xFF41},
    {0x0004, 0x4072, 0x00EF, 0x0081, 0x8265, 0xEB85, 0x0DA7, 0xFF41},
    {0x0004, 0x4070, 0x00F0, 0x00EE, 0x0000, 0x955B, 0x46C8, 0x007D},
    {0x0004, 0x4070, 0x00EE, 0x0072, 0x0000, 0x955B, 0x46C8, 0x007D},
    {0x0004, 0x406B, 0x00ED, 0x00EC, 0x7D9F, 0xEB8C, 0xF26D, 0x0116},
    {0x0004, 0x406B, 0x00EC, 0x006A, 0x7D9B, 0xEB85, 0xF259, 0x0116},
    {0x0004, 0x4081, 0x00EF, 0x00F1, 0x0000, 0x6A80, 0xB900, 0xFFEA},
    {0x0004, 0x4081, 0x00F1, 0x007D, 0x0000, 0x6A80, 0xB900, 0xFFEA},
    {0x0004, 0x407B, 0x00F2, 0x00F3, 0x0000, 0x6A80, 0xB900, 0xFFEA},
    {0x0004, 0x407B, 0x00F3, 0x0080, 0x0000, 0x6A80, 0xB900, 0xFFEA},
    {0x0004, 0x4080, 0x00F3, 0x00F4, 0x7D9F, 0xEB93, 0x0D9E, 0x0079},
    {0x0004, 0x4080, 0x00F4, 0x007F, 0x7D9B, 0xEB7D, 0x0D9D, 0x0079},
    {0x0004, 0x407F, 0x00F4, 0x00F5, 0x0000, 0x955B, 0x46C8, 0x007D},
    {0x0004, 0x407F, 0x00F5, 0x006E, 0x0000, 0x955B, 0x46C8, 0x007D},
    {0x0004, 0x4078, 0x00F6, 0x00F7, 0x0000, 0x955B, 0xB938, 0x007D},
    {0x0004, 0x4078, 0x00F7, 0x0074, 0x0000, 0x955B, 0xB938, 0x007D},
    {0x0004, 0x406E, 0x00F5, 0x00F2, 0x8261, 0xEB8C, 0x0D93, 0xFFDE},
    {0x0004, 0x406E, 0x00F2, 0x007B, 0x8265, 0xEB85, 0x0DA7, 0xFFDE},
    {0x0004, 0x4074, 0x00F7, 0x00F8, 0x7D9F, 0xEB8C, 0xF26D, 0x0079},
    {0x0004, 0x4074, 0x00F8, 0x0073, 0x7D9B, 0xEB85, 0xF259, 0x0079},
    {0x0004, 0x4073, 0x00F8, 0x00F9, 0x0000, 0x6A80, 0x4700, 0xFFE9},
    {0x0004, 0x4073, 0x00F9, 0x006D, 0x0000, 0x6A80, 0x4700, 0xFFE9},
    {0x0004, 0x406D, 0x00F9, 0x00F6, 0x8261, 0xEB93, 0xF262, 0xFFDE},
    {0x0004, 0x406D, 0x00F6, 0x0078, 0x8265, 0xEB7D, 0xF263, 0xFFDE},
    {0x0004, 0x407D, 0x00F1, 0x00F0, 0x7D9F, 0xEB93, 0x0D9E, 0x0116},
    {0x0004, 0x407D, 0x00F0, 0x0070, 0x7D9B, 0xEB7D, 0x0D9D, 0x0116},
    {0x0004, 0x407A, 0x00FA, 0x00FB, 0x7D9F, 0xEB93, 0x0D9E, 0xFFDD},
    {0x0004, 0x407A, 0x00FB, 0x0079, 0x7D9B, 0xEB7D, 0x0D9D, 0xFFDD},
    {0x0004, 0x4079, 0x00FB, 0x00FC, 0x0000, 0x955B, 0x46C8, 0x007D},
    {0x0004, 0x4079, 0x00FC, 0x0071, 0x0000, 0x955B, 0x46C8, 0x007D},
    {0x0004, 0x4071, 0x00FC, 0x00FD, 0x8261, 0xEB8C, 0x0D93, 0x007A},
    {0x0004, 0x4071, 0x00FD, 0x007E, 0x8265, 0xEB85, 0x0DA7, 0x007A},
    {0x0004, 0x4076, 0x00FE, 0x00FF, 0x0000, 0x6A80, 0x4700, 0xFFE9},
    {0x0004, 0x4076, 0x00FF, 0x0066, 0x0000, 0x6A80, 0x4700, 0xFFE9},
    {0x0004, 0x4077, 0x0100, 0x00FE, 0x7D9F, 0xEB8C, 0xF26D, 0xFFDD},
    {0x0004, 0x4077, 0x00FE, 0x0076, 0x7D9B, 0xEB85, 0xF259, 0xFFDD},
    {0x0004, 0x4066, 0x00FF, 0x0101, 0x8261, 0xEB93, 0xF262, 0x007A},
    {0x0004, 0x4066, 0x0101, 0x0068, 0x8265, 0xEB7D, 0xF263, 0x007A},
    {0x0004, 0x4068, 0x0101, 0x0100, 0x0000, 0x955B, 0xB938, 0x007D},
    {0x0004, 0x4068, 0x0100, 0x0077, 0x0000, 0x955B, 0xB938, 0x007D},
    {0x0004, 0x407E, 0x00FD, 0x00FA, 0x0000, 0x6A80, 0xB900, 0xFFEA},
    {0x0004, 0x407E, 0x00FA, 0x007A, 0x0000, 0x6A80, 0xB900, 0xFFEA},
    {0x0001, 0x00B2, 0x00B3, 0x00B4, 0x0000, 0x0000, 0x7FFF, 0x00C7},
    {0x0001, 0x00B2, 0x00B4, 0x006A, 0x0000, 0x0000, 0x7FFF, 0x00C7},
    {0x0001, 0x00B5, 0x00B6, 0x007B, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0001, 0x00B5, 0x007B, 0x00B7, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0001, 0x0080, 0x00B8, 0x00B5, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0001, 0x0080, 0x00B5, 0x00B7, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0001, 0x00B9, 0x00BA, 0x0081, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0001, 0x00B9, 0x0081, 0x00BB, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0001, 0x007D, 0x00BF, 0x00B9, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0001, 0x007D, 0x00B9, 0x00BB, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0001, 0x007A, 0x00C0, 0x00BC, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0001, 0x007A, 0x00BC, 0x00C1, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0001, 0x00BC, 0x00C2, 0x007E, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0001, 0x00BC, 0x007E, 0x00C1, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0001, 0x00BD, 0x00C3, 0x00C4, 0x0000, 0x0000, 0x7FFF, 0x00C7},
    {0x0001, 0x00BD, 0x00C4, 0x0073, 0x0000, 0x0000, 0x7FFF, 0x00C7},
    {0x0001, 0x00BD, 0x006D, 0x00C5, 0x0000, 0x0000, 0x7FFF, 0x00C7},
    {0x0001, 0x00BD, 0x00C5, 0x00C3, 0x0000, 0x0000, 0x7FFF, 0x00C7},
    {0x0001, 0x00B2, 0x006C, 0x00C6, 0x0000, 0x0000, 0x7FFF, 0x00C7},
    {0x0001, 0x00B2, 0x00C6, 0x00B3, 0x0000, 0x0000, 0x7FFF, 0x00C7},
    {0x0001, 0x00BE, 0x0066, 0x00C7, 0x0000, 0x0000, 0x7FFF, 0x00C7},
    {0x0001, 0x00BE, 0x00C7, 0x00C8, 0x0000, 0x0000, 0x7FFF, 0x00C7},
    {0x0001, 0x00BE, 0x00C8, 0x00C9, 0x0000, 0x0000, 0x7FFF, 0x00C7},
    {0x0001, 0x00BE, 0x00C9, 0x0076, 0x0000, 0x0000, 0x7FFF, 0x00C7},
    {0x0000, 0x00BA, 0x0072, 0x0081, 0x83D3, 0xE0F5, 0x0000, 0xFF66},
    {0x0000, 0x00C2, 0x0071, 0x007E, 0x83D3, 0xE0F5, 0x0000, 0x009B},
    {0x0000, 0x00BF, 0x0070, 0x0072, 0x0000, 0x8001, 0x0000, 0x00F0},
    {0x0000, 0x00BF, 0x0072, 0x00BA, 0x0000, 0x8001, 0x0000, 0x00F0},
    {0x0000, 0x0080, 0x007F, 0x00B8, 0x7C2D, 0xE0F5, 0x0000, 0x009A},
    {0x0000, 0x00B8, 0x007F, 0x006E, 0x0000, 0x8001, 0x0000, 0x00F0},
    {0x0000, 0x00B8, 0x006E, 0x00B6, 0x0000, 0x8001, 0x0000, 0x00F0},
    {0x0000, 0x00B6, 0x006E, 0x007B, 0x83D3, 0xE0F5, 0x0000, 0x0001},
    {0x0000, 0x00C0, 0x0079, 0x0071, 0x0000, 0x8001, 0x0000, 0x00F0},
    {0x0000, 0x00C0, 0x0071, 0x00C2, 0x0000, 0x8001, 0x0000, 0x00F0},
    {0x0000, 0x007A, 0x0079, 0x00C0, 0x7C2D, 0xE0F5, 0x0000, 0x0000},
    {0x0001, 0x007D, 0x0070, 0x00BF, 0x7C2D, 0xE0F5, 0x0000, 0x0135},
    {0x0000, 0x00C4, 0x0074, 0x0073, 0x7C2D, 0xE0F5, 0x0000, 0x009A},
    {0x0000, 0x006C, 0x0075, 0x00C6, 0x83D3, 0xE0F5, 0x0000, 0xFF66},
    {0x0000, 0x00C6, 0x0075, 0x006B, 0x0000, 0x8001, 0x0000, 0x00F0},
    {0x0000, 0x00C6, 0x006B, 0x00B4, 0x0000, 0x8001, 0x0000, 0x00F0},
    {0x0001, 0x00B4, 0x006B, 0x006A, 0x7C2D, 0xE0F5, 0x0000, 0x0135},
    {0x0000, 0x00C9, 0x0077, 0x0076, 0x7C2D, 0xE0F5, 0x0000, 0x0000},
    {0x0000, 0x00C5, 0x0078, 0x0074, 0x0000, 0x8001, 0x0000, 0x00F0},
    {0x0000, 0x00C5, 0x0074, 0x00C4, 0x0000, 0x8001, 0x0000, 0x00F0},
    {0x0000, 0x006D, 0x0078, 0x00C5, 0x83D3, 0xE0F5, 0x0000, 0x0001},
    {0x0000, 0x0066, 0x0068, 0x00C7, 0x83D3, 0xE0F5, 0x0000, 0x009B},
    {0x0000, 0x00C7, 0x0068, 0x0077, 0x0000, 0x8001, 0x0000, 0x00F0},
    {0x0000, 0x00C7, 0x0077, 0x00C9, 0x0000, 0x8001, 0x0000, 0x00F0},
};

Vec3s syotes_sceneCollisionHeader_001BD4Vertices[] = {
    {   -299,      0,   -199 },
    {   -299,     20,   -199 },
    {   -299,     20,    -99 },
    {   -299,      0,    -99 },
    {   -259,     20,    -59 },
    {   -259,      0,    -59 },
    {   -259,     20,     60 },
    {   -259,      0,     60 },
    {   -299,     20,    100 },
    {   -299,      0,    100 },
    {    260,     40,    -39 },
    {    240,    100,    -39 },
    {    240,    100,     40 },
    {    240,     40,    -39 },
    {   -299,     20,    200 },
    {   -299,      0,    200 },
    {    260,    100,    -39 },
    {    260,    100,     40 },
    {    260,     40,     40 },
    {    240,     40,     40 },
    {    240,    160,    120 },
    {    240,    160,   -119 },
    {    240,     40,    120 },
    {    240,     40,   -119 },
    {    200,      0,   -119 },
    {    240,      0,   -119 },
    {    200,     40,   -119 },
    {    240,      0,    -39 },
    {    260,      0,    -39 },
    {    260,      0,     40 },
    {    240,      0,     40 },
    {    240,      0,    120 },
    {    200,      0,    120 },
    {    200,     40,    120 },
    {   -169,      0,   -189 },
    {   -169,      0,    200 },
    {     10,      0,    190 },
    {   -169,      0,    190 },
    {     -9,      0,    190 },
    {   -149,      0,    190 },
    {     10,      0,   -189 },
    {   -149,      0,   -189 },
    {     -9,      0,   -189 },
    {     10,      0,   -199 },
    {   -149,      0,   -199 },
    {     -9,      0,    200 },
    {    200,     40,    200 },
    {    200,      0,   -199 },
    {   -359,      0,   -199 },
    {   -359,     40,    200 },
    {   -169,     40,   -189 },
    {   -169,     40,   -199 },
    {   -169,      0,   -199 },
    {   -169,     40,    200 },
    {   -169,     40,    190 },
    {     10,     40,    190 },
    {     10,     40,    200 },
    {     10,      0,    200 },
    {   -149,     40,    190 },
    {     -9,     40,    190 },
    {   -149,     40,    200 },
    {   -149,      0,    200 },
    {     10,     40,   -189 },
    {     -9,     40,   -189 },
    {   -149,     40,   -189 },
    {     -9,     40,   -199 },
    {     -9,      0,   -199 },
    {     10,     40,   -199 },
    {   -149,     40,   -199 },
    {     -9,     40,    200 },
    {    200,      0,    200 },
    {   -359,      0,    200 },
    {    200,     40,   -199 },
    {   -359,     40,   -199 },
    {   -359,     20,    200 },
    {   -359,     20,   -199 },
    {    200,    160,   -199 },
    {   -359,    160,   -199 },
    {   -359,    160,    200 },
    {    200,    160,    200 },
    {    200,    160,   -119 },
    {    200,    160,    120 },
    {   -179,      0,   -119 },
    {   -119,      0,    -59 },
    {     60,      0,    -59 },
    {    120,      0,   -119 },
    {   -179,      0,    120 },
    {   -119,      0,     60 },
    {     60,      0,     60 },
    {    120,      0,    120 },
    {    160,      0,     40 },
    {    160,      0,    160 },
    {    240,      0,    200 },
    {   -219,      0,    160 },
    {    240,      0,   -199 },
    {   -219,      0,   -159 },
    {    160,      0,   -159 },
    {    160,      0,    -39 },
    {   -359,    360,    -39 },
    {    200,    360,    -39 },
    {    200,    360,     40 },
    {   -359,    360,     40 },
    {    120,    160,   -199 },
    {    200,    240,   -135 },
    {    100,    240,   -135 },
    {   -359,    240,   -135 },
    {   -279,    160,   -199 },
    {   -259,    240,   -135 },
    {   -199,    160,   -199 },
    {    -39,    160,   -199 },
    {    -59,    240,    136 },
    {   -359,    240,    136 },
    {   -259,    240,    136 },
    {    100,    240,    136 },
    {   -219,    240,    136 },
    {   -119,    160,   -199 },
    {    -99,    240,   -135 },
    {   -219,    240,   -135 },
    {     40,    160,   -199 },
    {     60,    240,   -135 },
    {    -59,    240,   -135 },
    {     60,    240,    136 },
    {     40,    160,    200 },
    {    -39,    160,    200 },
    {    200,    240,    136 },
    {   -279,    160,    200 },
    {    120,    160,    200 },
    {    -99,    240,    136 },
    {   -119,    160,    200 },
    {   -199,    160,    200 },
    {   -169,    172,    190 },
    {   -149,    172,    190 },
    {   -149,    172,   -189 },
    {   -169,    172,   -189 },
    {     -9,    160,    200 },
    {     -9,    172,    190 },
    {     10,    172,   -189 },
    {     -9,    172,   -189 },
    {   -359,    160,   -128 },
    {    158,    160,    200 },
    {   -359,    180,    129 },
    {   -359,    180,    158 },
    {   -317,    160,    200 },
    {   -317,    160,   -199 },
    {   -359,    180,   -128 },
    {   -288,    160,   -199 },
    {   -317,    180,    200 },
    {    158,    180,   -199 },
    {    200,    180,    129 },
    {    200,    180,   -157 },
    {    200,    160,    129 },
    {    200,    180,   -128 },
    {    158,    160,   -199 },
    {    129,    160,    200 },
    {   -169,    160,   -199 },
    {     -9,    160,   -199 },
    {     10,    160,   -199 },
    {   -149,    160,   -199 },
    {   -149,    160,    200 },
    {   -169,    160,    200 },
    {   -288,    180,   -199 },
    {    200,    160,    158 },
    {    200,    180,    158 },
    {    158,    180,    200 },
    {   -288,    180,    200 },
    {   -288,    160,    200 },
    {   -359,    160,    129 },
    {   -359,    160,    158 },
    {   -359,    160,   -157 },
    {   -359,    180,   -157 },
    {   -317,    180,   -199 },
    {    200,    160,   -157 },
    {     10,    172,    190 },
    {     10,    160,    200 },
    {    129,    180,    200 },
    {    129,    180,   -199 },
    {    129,    160,   -199 },
    {    200,    160,   -128 },
    {   -239,    160,   -199 },
    {   -239,    240,   -199 },
    {   -259,    240,   -199 },
    {    -79,    240,    200 },
    {    -59,    240,    200 },
    {    -79,    160,    200 },
    {    -99,    240,    200 },
    {   -239,    240,    200 },
    {   -219,    240,    200 },
    {   -239,    160,    200 },
    {     80,    240,    200 },
    {    -79,    160,   -199 },
    {     80,    160,   -199 },
    {   -259,    240,    200 },
    {     60,    240,    200 },
    {     80,    160,    200 },
    {    100,    240,    200 },
    {    -79,    240,   -199 },
    {    -99,    240,   -199 },
    {    -59,    240,   -199 },
    {   -219,    240,   -199 },
    {    100,    240,   -199 },
    {     80,    240,   -199 },
    {     60,    240,   -199 },
    {   -149,    250,   -127 },
    {   -149,    250,    128 },
    {   -149,    230,    144 },
    {   -149,    230,   -143 },
    {   -169,    230,    144 },
    {   -169,    230,   -143 },
    {   -169,    250,    128 },
    {   -169,    250,   -127 },
    {   -309,    250,   -127 },
    {   -309,    230,   -143 },
    {   -329,    230,   -143 },
    {    150,    250,   -127 },
    {   -329,    250,   -127 },
    {     10,    250,   -127 },
    {     10,    230,   -143 },
    {     -9,    230,   -143 },
    {    150,    230,   -143 },
    {    170,    230,   -143 },
    {    170,    250,   -127 },
    {     -9,    250,   -127 },
    {   -309,    250,    128 },
    {   -309,    230,    144 },
    {   -329,    230,    144 },
    {   -329,    250,    128 },
    {    150,    250,    128 },
    {    170,    250,    128 },
    {     10,    250,    128 },
    {     10,    230,    144 },
    {     -9,    230,    144 },
    {     -9,    250,    128 },
    {    150,    230,    144 },
    {    170,    230,    144 },
    {   -199,     80,    -79 },
    {   -219,    165,    -22 },
    {   -279,     80,    -79 },
    {   -259,    165,    -22 },
    {   -219,    165,     23 },
    {   -199,     80,     80 },
    {   -259,    165,     23 },
    {   -279,     80,     80 },
    {    -39,     80,     80 },
    {   -119,     80,     80 },
    {    -99,    165,     23 },
    {    -59,    165,     23 },
    {    -59,    165,    -22 },
    {    -99,    165,    -22 },
    {   -119,     80,    -79 },
    {    -39,     80,    -79 },
    {     40,     80,     80 },
    {     60,    165,     23 },
    {    100,    165,     23 },
    {    120,     80,     80 },
    {     40,     80,    -79 },
    {    120,     80,    -79 },
    {     60,    165,    -22 },
    {    100,    165,    -22 },
};

CollisionHeader syotes_sceneCollisionHeader_001BD4 = { 
    { -359, 0, -199 },
    { 260, 360, 200 },
    ARRAY_COUNT(syotes_sceneCollisionHeader_001BD4Vertices), syotes_sceneCollisionHeader_001BD4Vertices,
    ARRAY_COUNT(syotes_sceneCollisionHeader_001BD4Polygons), syotes_sceneCollisionHeader_001BD4Polygons,
    syotes_sceneCollisionHeader_001BD4SurfaceType,
    syotes_sceneCollisionHeader_001BD4CamDataList,
    0, NULL
};

