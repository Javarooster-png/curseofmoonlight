#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "HAKAdan_bs_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "HAKAdan_bs_room_0.h"
#include "HAKAdan_bs_room_1.h"

SceneCmd HAKAdan_bs_sceneCommands[] = {
    SCENE_CMD_SOUND_SETTINGS(4, 19, 91),
    SCENE_CMD_ROOM_LIST(2, HAKAdan_bs_sceneRoomList0x000080),
    SCENE_CMD_TRANSITION_ACTOR_LIST(1, HAKAdan_bs_sceneTransitionActorList_000070),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00000000),
    SCENE_CMD_COL_HEADER(&HAKAdan_bs_sceneCollisionHeader_00134C),
    SCENE_CMD_ENTRANCE_LIST(HAKAdan_bs_sceneEntranceList0x000090),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_DUNGEON, OBJECT_GAMEPLAY_DANGEON_KEEP),
    SCENE_CMD_SPAWN_LIST(1, HAKAdan_bs_sceneStartPositionList0x000060),
    SCENE_CMD_SKYBOX_SETTINGS(0, 0, true),
    SCENE_CMD_EXIT_LIST(HAKAdan_bs_sceneExitList_000094),
    SCENE_CMD_ENV_LIGHT_SETTINGS(1, HAKAdan_bs_sceneLightSettings0x000098),
    SCENE_CMD_END(),
};

ActorEntry HAKAdan_bs_sceneStartPositionList0x000060[] = {
    { ACTOR_PLAYER,     {    -49,   1680,   -246 }, {      0,      0,      0 }, 0x0FFF },
};

TransitionActorEntry HAKAdan_bs_sceneTransitionActorList_000070[] = {
    { 1, 255, 0, 255, ACTOR_DOOR_SHUTTER, -50, 1680, -297, -32768, 0x0154 },
};

RomFile HAKAdan_bs_sceneRoomList0x000080[] = {
    { (uintptr_t)_HAKAdan_bs_room_0SegmentRomStart, (uintptr_t)_HAKAdan_bs_room_0SegmentRomEnd },
    { (uintptr_t)_HAKAdan_bs_room_1SegmentRomStart, (uintptr_t)_HAKAdan_bs_room_1SegmentRomEnd },
};

Spawn HAKAdan_bs_sceneEntranceList0x000090[] = {
    { 0x00, 0x01 },
    { 0x00, 0x00 },
};

u16 HAKAdan_bs_sceneExitList_000094[] = {
    ENTR_SHADOW_TEMPLE_2,
    ENTR_DEKU_TREE_0,
};

EnvLightSettings HAKAdan_bs_sceneLightSettings0x000098[] = {
    { 0x46, 0x32, 0x32, 0x59, 0xA7, 0x00, 0x64, 0x32, 0xFF, 0xA7, 0xA7, 0x00, 0x64, 0xFF, 0x32, 0x00, 0x00, 0x1E,
    0x07DB, 0x0BB8 },
};

BgCamInfo HAKAdan_bs_sceneCollisionHeader_00134CCamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType HAKAdan_bs_sceneCollisionHeader_00134CSurfaceType[] = {
    {0x00006100, 0x00004002},   {0x00000000, 0x00004002},   {0x00004000, 0x08004003},   {0x0020C000, 0x00004002},
    {0x2400C000, 0x00002802},
};

CollisionPoly HAKAdan_bs_sceneCollisionHeader_00134CPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0001, 0x0004, 0x0005, 0x0006, 0x8001, 0x0000, 0x0000, 0x000A},
    {0x0001, 0x0004, 0x0006, 0x0007, 0x8001, 0x0000, 0x0000, 0x000A},
    {0x0001, 0x0008, 0x0009, 0x000A, 0x7FFF, 0x0000, 0x0000, 0x006E},
    {0x0001, 0x0008, 0x000A, 0x000B, 0x7FFF, 0x0000, 0x0000, 0x006E},
    {0x0001, 0x0004, 0x0007, 0x0008, 0x0000, 0x8001, 0x0000, 0x0730},
    {0x0001, 0x0004, 0x0008, 0x000B, 0x0000, 0x8001, 0x0000, 0x0730},
    {0x0001, 0x000A, 0x0009, 0x0006, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0001, 0x000A, 0x0006, 0x0005, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0001, 0x000C, 0x000D, 0x000E, 0x0000, 0x0000, 0x8001, 0xFECD},
    {0x0001, 0x000C, 0x000E, 0x000F, 0x0000, 0x0000, 0x8001, 0xFECD},
    {0x0002, 0x003E, 0x003A, 0x003F, 0x0000, 0x7FFF, 0x0000, 0x0064},
    {0x0002, 0x0040, 0x003F, 0x003A, 0x0000, 0x7FFF, 0x0000, 0x0064},
    {0x0002, 0x0040, 0x003A, 0x0039, 0x0000, 0x7FFF, 0x0000, 0x0064},
    {0x0002, 0x0040, 0x0039, 0x0041, 0x0000, 0x7FFF, 0x0000, 0x0064},
    {0x0002, 0x0038, 0x003D, 0x0042, 0x0000, 0x7FFF, 0x0000, 0x0064},
    {0x0002, 0x0038, 0x0042, 0x0043, 0x0000, 0x7FFF, 0x0000, 0x0064},
    {0x0002, 0x0042, 0x003D, 0x0044, 0x0000, 0x7FFF, 0x0000, 0x0064},
    {0x0002, 0x0045, 0x0038, 0x0043, 0x0000, 0x7FFF, 0x0000, 0x0064},
    {0x0002, 0x0038, 0x0045, 0x0041, 0x0000, 0x7FFF, 0x0000, 0x0064},
    {0x0002, 0x0038, 0x0041, 0x0039, 0x0000, 0x7FFF, 0x0000, 0x0064},
    {0x0002, 0x0044, 0x003D, 0x003A, 0x0000, 0x7FFF, 0x0000, 0x0064},
    {0x0002, 0x0044, 0x003A, 0x003E, 0x0000, 0x7FFF, 0x0000, 0x0064},
    {0x0001, 0x0046, 0x0047, 0x0048, 0x2E17, 0x4A73, 0xA2A4, 0xFF7A},
    {0x0001, 0x0049, 0x0046, 0x0048, 0x1DBA, 0x18DA, 0x8602, 0xFEC3},
    {0x0001, 0x0049, 0x0048, 0x004A, 0x4199, 0xF4B1, 0x92AC, 0xFF53},
    {0x0001, 0x004B, 0x004C, 0x004D, 0x8827, 0x228E, 0xE343, 0xFDE2},
    {0x0001, 0x004E, 0x004B, 0x004D, 0x87D5, 0x21D1, 0xE3BA, 0xFDE2},
    {0x0001, 0x004D, 0x004C, 0x0046, 0xE343, 0x228E, 0x8827, 0xFE05},
    {0x0001, 0x004D, 0x0046, 0x0049, 0xE3BA, 0x21D1, 0x87D5, 0xFE05},
    {0x0001, 0x004C, 0x004F, 0x0047, 0xF3A1, 0x57E0, 0xA3C3, 0xFEBB},
    {0x0001, 0x004C, 0x0047, 0x0046, 0xF2A1, 0x5A18, 0xA612, 0xFEC0},
    {0x0001, 0x0048, 0x0050, 0x004A, 0x63E4, 0xF7C4, 0xB065, 0x002E},
    {0x0001, 0x0050, 0x0051, 0x004A, 0x68AC, 0xEDBB, 0xB8A2, 0x0053},
    {0x0001, 0x0047, 0x0052, 0x0048, 0x4C36, 0x4996, 0xB82B, 0x0029},
    {0x0001, 0x0052, 0x0050, 0x0048, 0x5D9D, 0x3CBC, 0xC14D, 0x007B},
    {0x0001, 0x004F, 0x0053, 0x0047, 0x1565, 0x7A76, 0xE188, 0x0009},
    {0x0001, 0x0053, 0x0052, 0x0047, 0x19BC, 0x79D4, 0xE25B, 0x001B},
    {0x0001, 0x0054, 0x0055, 0x0053, 0xE25B, 0x79D4, 0x19BC, 0x0005},
    {0x0001, 0x0054, 0x0053, 0x004F, 0xE188, 0x7A76, 0x1565, 0xFFF5},
    {0x0001, 0x0056, 0x0057, 0x0055, 0xC14D, 0x3CBC, 0x5D9D, 0x003E},
    {0x0001, 0x0056, 0x0055, 0x0054, 0xB82B, 0x4996, 0x4C36, 0xFFEF},
    {0x0001, 0x0058, 0x0057, 0x0056, 0xB065, 0xF7C4, 0x63E4, 0xFFE8},
    {0x0001, 0x0058, 0x0059, 0x0057, 0xB8A2, 0xEDBB, 0x68AC, 0x000E},
    {0x0001, 0x004B, 0x0054, 0x004F, 0xA58D, 0x59E1, 0xF4E1, 0xFEA7},
    {0x0001, 0x004B, 0x004F, 0x004C, 0xA49B, 0x5884, 0xF205, 0xFE99},
    {0x0001, 0x0058, 0x0056, 0x004B, 0x8180, 0xF2EA, 0x0E77, 0xFE35},
    {0x0001, 0x0058, 0x004B, 0x004E, 0x9318, 0x0FE5, 0x4158, 0xFF24},
    {0x0001, 0x0056, 0x0054, 0x004B, 0xA2A4, 0x4A73, 0x2E17, 0xFF43},
    {0x0001, 0x005A, 0x005B, 0x005C, 0x2E17, 0x4A73, 0x5D5C, 0xFF7A},
    {0x0001, 0x005D, 0x005A, 0x005C, 0x0E77, 0xF2EA, 0x7E80, 0xFE6C},
    {0x0001, 0x005D, 0x005C, 0x005E, 0x4158, 0x0FE5, 0x6CE8, 0xFF69},
    {0x0001, 0x005C, 0x005B, 0x005F, 0xF4E1, 0x59E1, 0x5A73, 0xFEC6},
    {0x0001, 0x005C, 0x005F, 0x0060, 0xF205, 0x5884, 0x5B65, 0xFEB8},
    {0x0001, 0x005D, 0x0061, 0x0062, 0x68AC, 0xEDBB, 0x475E, 0x0053},
    {0x0001, 0x005D, 0x0062, 0x005A, 0x63E4, 0xF7C4, 0x4F9B, 0x002E},
    {0x0001, 0x005A, 0x0063, 0x005B, 0x4C36, 0x4996, 0x47D5, 0x0029},
    {0x0001, 0x005A, 0x0062, 0x0063, 0x5D9D, 0x3CBC, 0x3EB3, 0x007B},
    {0x0001, 0x005B, 0x0064, 0x005F, 0x1565, 0x7A76, 0x1E78, 0x0009},
    {0x0001, 0x005B, 0x0063, 0x0064, 0x19BC, 0x79D4, 0x1DA5, 0x001B},
    {0x0001, 0x0064, 0x0065, 0x0066, 0xE25B, 0x79D4, 0xE644, 0x0005},
    {0x0001, 0x005F, 0x0064, 0x0066, 0xE188, 0x7A76, 0xEA9B, 0xFFF5},
    {0x0001, 0x0065, 0x0067, 0x0068, 0xC14D, 0x3CBC, 0xA263, 0x003E},
    {0x0001, 0x0066, 0x0065, 0x0068, 0xB82B, 0x4996, 0xB3CA, 0xFFEF},
    {0x0001, 0x0067, 0x0069, 0x006A, 0xB8A2, 0xEDBB, 0x9754, 0x000E},
    {0x0001, 0x0068, 0x0067, 0x006A, 0xB065, 0xF7C4, 0x9C1C, 0xFFE8},
    {0x0001, 0x0060, 0x005F, 0x0066, 0xA3C3, 0x57E0, 0x0C5F, 0xFE9B},
    {0x0001, 0x0060, 0x0066, 0x006B, 0xA612, 0x5A18, 0x0D5F, 0xFEA2},
    {0x0001, 0x006C, 0x006B, 0x006D, 0x87D5, 0x21D1, 0x1C46, 0xFDE2},
    {0x0001, 0x006C, 0x0060, 0x006B, 0x8827, 0x228E, 0x1CBD, 0xFDE2},
    {0x0001, 0x005E, 0x005C, 0x006C, 0xE3BA, 0x21D1, 0x782B, 0xFE05},
    {0x0001, 0x005C, 0x0060, 0x006C, 0xE343, 0x228E, 0x77D9, 0xFE05},
    {0x0001, 0x006D, 0x006B, 0x0068, 0x8602, 0x18DA, 0xE246, 0xFE88},
    {0x0001, 0x006D, 0x0068, 0x006A, 0x92AC, 0xF4B1, 0xBE67, 0xFF0E},
    {0x0001, 0x006B, 0x0066, 0x0068, 0xA2A4, 0x4A73, 0xD1E9, 0xFF43},
    {0x0001, 0x006E, 0x006F, 0x0070, 0x5D5C, 0x4A73, 0x2E17, 0xFF8C},
    {0x0001, 0x0071, 0x006E, 0x0070, 0x79FE, 0x18DA, 0x1DBA, 0xFEE7},
    {0x0001, 0x0071, 0x0070, 0x0072, 0x6D54, 0xF4B1, 0x4199, 0xFF64},
    {0x0001, 0x0073, 0x0074, 0x0075, 0x1CBD, 0x228E, 0x8827, 0xFE1C},
    {0x0001, 0x0076, 0x0073, 0x0075, 0x1C46, 0x21D1, 0x87D5, 0xFE1C},
    {0x0001, 0x0075, 0x0074, 0x006E, 0x77D9, 0x228E, 0xE343, 0xFE3F},
    {0x0001, 0x0075, 0x006E, 0x0071, 0x782B, 0x21D1, 0xE3BA, 0xFE3F},
    {0x0001, 0x0074, 0x0077, 0x006F, 0x5C3D, 0x57E0, 0xF3A1, 0xFEE4},
    {0x0001, 0x0074, 0x006F, 0x006E, 0x59EE, 0x5A18, 0xF2A1, 0xFEE8},
    {0x0001, 0x0070, 0x0078, 0x0072, 0x4F9B, 0xF7C4, 0x63E4, 0x0027},
    {0x0001, 0x0078, 0x0079, 0x0072, 0x475E, 0xEDBB, 0x68AC, 0x0046},
    {0x0001, 0x006F, 0x007A, 0x0070, 0x47D5, 0x4996, 0x4C36, 0x0027},
    {0x0001, 0x007A, 0x0078, 0x0070, 0x3EB3, 0x3CBC, 0x5D9D, 0x006F},
    {0x0001, 0x0077, 0x007B, 0x006F, 0x1E78, 0x7A76, 0x1565, 0x000D},
    {0x0001, 0x007B, 0x007A, 0x006F, 0x1DA5, 0x79D4, 0x19BC, 0x001C},
    {0x0001, 0x007C, 0x007D, 0x007B, 0xE644, 0x79D4, 0xE25B, 0x0007},
    {0x0001, 0x007C, 0x007B, 0x0077, 0xEA9B, 0x7A76, 0xE188, 0xFFF9},
    {0x0001, 0x007E, 0x007F, 0x007D, 0xA263, 0x3CBC, 0xC14D, 0x0032},
    {0x0001, 0x007E, 0x007D, 0x007C, 0xB3CA, 0x4996, 0xB82B, 0xFFED},
    {0x0001, 0x0080, 0x007F, 0x007E, 0x9C1C, 0xF7C4, 0xB065, 0xFFE0},
    {0x0001, 0x0080, 0x0081, 0x007F, 0x9754, 0xEDBB, 0xB8A2, 0x0001},
    {0x0001, 0x0073, 0x007C, 0x0077, 0x0B1F, 0x59E1, 0xA58D, 0xFECE},
    {0x0001, 0x0073, 0x0077, 0x0074, 0x0DFB, 0x5884, 0xA49B, 0xFEC3},
    {0x0001, 0x0080, 0x007E, 0x0073, 0xF189, 0xF2EA, 0x8180, 0xFE61},
    {0x0001, 0x0080, 0x0073, 0x0076, 0xBEA8, 0x0FE5, 0x9318, 0xFF35},
    {0x0001, 0x007E, 0x007C, 0x0073, 0xD1E9, 0x4A73, 0xA2A4, 0xFF56},
    {0x0001, 0x0082, 0x0083, 0x0084, 0x5D5C, 0x4A73, 0xD1E9, 0xFF8C},
    {0x0001, 0x0085, 0x0082, 0x0084, 0x7E80, 0xF2EA, 0xF189, 0xFE98},
    {0x0001, 0x0085, 0x0084, 0x0086, 0x6CE8, 0x0FE5, 0xBEA8, 0xFF7A},
    {0x0001, 0x0084, 0x0083, 0x0087, 0x5A73, 0x59E1, 0x0B1F, 0xFEED},
    {0x0001, 0x0084, 0x0087, 0x0088, 0x5B65, 0x5884, 0x0DFB, 0xFEE1},
    {0x0001, 0x0085, 0x0089, 0x008A, 0x475E, 0xEDBB, 0x9754, 0x0046},
    {0x0001, 0x0085, 0x008A, 0x0082, 0x4F9B, 0xF7C4, 0x9C1C, 0x0027},
    {0x0001, 0x0082, 0x008B, 0x0083, 0x47D5, 0x4996, 0xB3CA, 0x0027},
    {0x0001, 0x0082, 0x008A, 0x008B, 0x3EB3, 0x3CBC, 0xA263, 0x006F},
    {0x0001, 0x0083, 0x008C, 0x0087, 0x1E78, 0x7A76, 0xEA9B, 0x000D},
    {0x0001, 0x0083, 0x008B, 0x008C, 0x1DA5, 0x79D4, 0xE644, 0x001C},
    {0x0001, 0x008C, 0x008D, 0x008E, 0xE644, 0x79D4, 0x1DA5, 0x0007},
    {0x0001, 0x0087, 0x008C, 0x008E, 0xEA9B, 0x7A76, 0x1E78, 0xFFF9},
    {0x0001, 0x008D, 0x008F, 0x0090, 0xA263, 0x3CBC, 0x3EB3, 0x0032},
    {0x0001, 0x008E, 0x008D, 0x0090, 0xB3CA, 0x4996, 0x47D5, 0xFFED},
    {0x0001, 0x008F, 0x0091, 0x0092, 0x9754, 0xEDBB, 0x475E, 0x0001},
    {0x0001, 0x0090, 0x008F, 0x0092, 0x9C1C, 0xF7C4, 0x4F9B, 0xFFE0},
    {0x0001, 0x0088, 0x0087, 0x008E, 0x0C5F, 0x57E0, 0x5C3D, 0xFEC4},
    {0x0001, 0x0088, 0x008E, 0x0093, 0x0D5F, 0x5A18, 0x59EE, 0xFECA},
    {0x0001, 0x0094, 0x0093, 0x0095, 0x1C46, 0x21D1, 0x782B, 0xFE1C},
    {0x0001, 0x0094, 0x0088, 0x0093, 0x1CBD, 0x228E, 0x77D9, 0xFE1C},
    {0x0001, 0x0086, 0x0084, 0x0094, 0x782B, 0x21D1, 0x1C46, 0xFE3F},
    {0x0001, 0x0084, 0x0088, 0x0094, 0x77D9, 0x228E, 0x1CBD, 0xFE3F},
    {0x0001, 0x0095, 0x0093, 0x0090, 0xE246, 0x18DA, 0x79FE, 0xFEAC},
    {0x0001, 0x0095, 0x0090, 0x0092, 0xBE67, 0xF4B1, 0x6D54, 0xFF1F},
    {0x0001, 0x0093, 0x008E, 0x0090, 0xD1E9, 0x4A73, 0x5D5C, 0xFF56},
    {0x0001, 0x003E, 0x003F, 0x0096, 0xA57E, 0x0000, 0xA57E, 0xFDB2},
    {0x0001, 0x003E, 0x0096, 0x0097, 0xA57E, 0x0000, 0xA57E, 0xFDB2},
    {0x0001, 0x003F, 0x0040, 0x0098, 0x8001, 0x0000, 0x0000, 0xFDA4},
    {0x0001, 0x003F, 0x0098, 0x0096, 0x8001, 0x0000, 0x0000, 0xFDA4},
    {0x0001, 0x0040, 0x0041, 0x0099, 0xA57E, 0x0000, 0x5A82, 0xFDB2},
    {0x0001, 0x0040, 0x0099, 0x0098, 0xA57E, 0x0000, 0x5A82, 0xFDB2},
    {0x0001, 0x0045, 0x009A, 0x0099, 0x0000, 0x0000, 0x7FFF, 0xFDD6},
    {0x0001, 0x0045, 0x0099, 0x0041, 0x0000, 0x0000, 0x7FFF, 0xFDD6},
    {0x0001, 0x0045, 0x0043, 0x009B, 0x5A82, 0x0000, 0x5A82, 0xFDF9},
    {0x0001, 0x0045, 0x009B, 0x009A, 0x5A82, 0x0000, 0x5A82, 0xFDF9},
    {0x0001, 0x0042, 0x009C, 0x009B, 0x7FFF, 0x0000, 0x0000, 0xFE08},
    {0x0001, 0x0042, 0x009B, 0x0043, 0x7FFF, 0x0000, 0x0000, 0xFE08},
    {0x0001, 0x003E, 0x0097, 0x009D, 0x0000, 0x0000, 0x8001, 0xFDD6},
    {0x0001, 0x003E, 0x009D, 0x0044, 0x0000, 0x0000, 0x8001, 0xFDD6},
    {0x0001, 0x009D, 0x009C, 0x0042, 0x5A82, 0x0000, 0xA57E, 0xFDF9},
    {0x0001, 0x009D, 0x0042, 0x0044, 0x5A82, 0x0000, 0xA57E, 0xFDF9},
    {0x0001, 0x009E, 0x009F, 0x00A0, 0x0000, 0x0000, 0x7FFF, 0x011F},
    {0x0001, 0x009E, 0x00A0, 0x00A1, 0x0000, 0x0000, 0x7FFF, 0x011F},
    {0x0003, 0x0010, 0x0011, 0x0012, 0xF69D, 0x0000, 0x7FA7, 0x004F},
    {0x0003, 0x0013, 0x0010, 0x0012, 0xF69D, 0x0000, 0x7FA7, 0x004F},
    {0x0001, 0x0014, 0x0015, 0x0016, 0x0000, 0x0000, 0x7FFF, 0x0115},
    {0x0001, 0x0017, 0x0018, 0x0019, 0x0000, 0x0000, 0x7FFF, 0x0115},
    {0x0001, 0x001A, 0x001B, 0x001C, 0x0000, 0x8001, 0x0000, 0x0834},
    {0x0001, 0x001A, 0x001D, 0x001B, 0x0000, 0x8001, 0x0000, 0x0834},
    {0x0001, 0x001A, 0x001E, 0x001D, 0x0000, 0x8001, 0x0000, 0x0834},
    {0x0001, 0x001A, 0x001F, 0x001E, 0x0000, 0x8001, 0x0000, 0x0834},
    {0x0001, 0x001A, 0x0020, 0x001F, 0x0000, 0x8001, 0x0000, 0x0834},
    {0x0001, 0x001A, 0x0021, 0x0020, 0x0000, 0x8001, 0x0000, 0x0834},
    {0x0001, 0x0014, 0x0008, 0x0007, 0x0000, 0x8001, 0x0000, 0x0730},
    {0x0001, 0x0014, 0x0007, 0x0018, 0x0000, 0x8001, 0x0000, 0x0730},
    {0x0001, 0x0014, 0x0016, 0x0009, 0x7FFF, 0x0000, 0x0000, 0x006E},
    {0x0001, 0x0014, 0x0009, 0x0008, 0x7FFF, 0x0000, 0x0000, 0x006E},
    {0x0001, 0x0007, 0x0006, 0x0019, 0x8001, 0x0000, 0x0000, 0x000A},
    {0x0001, 0x0007, 0x0019, 0x0018, 0x8001, 0x0000, 0x0000, 0x000A},
    {0x0001, 0x0019, 0x0006, 0x0009, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0001, 0x0019, 0x0009, 0x0016, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0001, 0x001B, 0x0022, 0x0023, 0x0000, 0x0000, 0x8001, 0x0115},
    {0x0001, 0x001B, 0x0023, 0x001C, 0x0000, 0x0000, 0x8001, 0x0115},
    {0x0001, 0x001D, 0x0024, 0x0022, 0xA57E, 0x0000, 0xA57E, 0x00F2},
    {0x0001, 0x001D, 0x0022, 0x001B, 0xA57E, 0x0000, 0xA57E, 0x00F2},
    {0x0001, 0x0015, 0x0020, 0x0021, 0x5A82, 0x0000, 0x5A82, 0x0139},
    {0x0001, 0x0015, 0x0021, 0x0025, 0x5A82, 0x0000, 0x5A82, 0x0139},
    {0x0001, 0x0024, 0x001D, 0x001E, 0x8001, 0x0000, 0x0000, 0x00E3},
    {0x0001, 0x0024, 0x001E, 0x0026, 0x8001, 0x0000, 0x0000, 0x00E3},
    {0x0001, 0x0021, 0x001A, 0x0027, 0x7FFF, 0x0000, 0x0000, 0x0147},
    {0x0001, 0x0021, 0x0027, 0x0025, 0x7FFF, 0x0000, 0x0000, 0x0147},
    {0x0001, 0x0027, 0x001A, 0x001C, 0x5A82, 0x0000, 0xA57E, 0x0139},
    {0x0001, 0x0027, 0x001C, 0x0023, 0x5A82, 0x0000, 0xA57E, 0x0139},
    {0x0001, 0x001F, 0x0017, 0x0026, 0xA57E, 0x0000, 0x5A82, 0x00F2},
    {0x0001, 0x001F, 0x0026, 0x001E, 0xA57E, 0x0000, 0x5A82, 0x00F2},
    {0x0001, 0x0014, 0x0020, 0x0015, 0x0000, 0x0000, 0x7FFF, 0x0115},
    {0x0001, 0x0014, 0x0018, 0x001F, 0x0000, 0x0000, 0x7FFF, 0x0115},
    {0x0001, 0x0014, 0x001F, 0x0020, 0x0000, 0x0000, 0x7FFF, 0x0115},
    {0x0001, 0x0018, 0x0017, 0x001F, 0x0000, 0x0000, 0x7FFF, 0x0115},
    {0x0004, 0x0026, 0x0017, 0x0010, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0004, 0x0026, 0x0010, 0x0028, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0004, 0x0023, 0x0029, 0x002A, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0004, 0x0023, 0x002A, 0x0027, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0004, 0x0024, 0x0026, 0x0028, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0004, 0x0024, 0x0028, 0x002B, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0004, 0x0023, 0x0022, 0x002C, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0004, 0x0023, 0x002C, 0x0029, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0004, 0x0022, 0x0024, 0x002B, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0004, 0x0022, 0x002B, 0x002C, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0004, 0x0017, 0x0015, 0x0011, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0004, 0x0017, 0x0011, 0x0010, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0004, 0x0025, 0x0027, 0x002A, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0004, 0x0025, 0x002A, 0x002D, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0004, 0x0015, 0x0025, 0x002D, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0004, 0x0015, 0x002D, 0x0011, 0x0000, 0x7FFF, 0x0000, 0xF970},
    {0x0003, 0x002E, 0x002F, 0x002A, 0x60C9, 0x0000, 0xAC3E, 0x0078},
    {0x0003, 0x002E, 0x002A, 0x0029, 0x60C9, 0x0000, 0xAC3E, 0x0078},
    {0x0003, 0x0030, 0x002E, 0x0029, 0x0963, 0x0000, 0x8059, 0x0056},
    {0x0003, 0x0030, 0x0029, 0x002C, 0x0963, 0x0000, 0x8059, 0x0056},
    {0x0003, 0x0031, 0x0030, 0x002C, 0xAC3E, 0x0000, 0x9F37, 0x0032},
    {0x0003, 0x0031, 0x002C, 0x002B, 0xAC3E, 0x0000, 0x9F37, 0x0032},
    {0x0003, 0x0032, 0x0031, 0x002B, 0x8059, 0x0000, 0xF69D, 0x0021},
    {0x0003, 0x0032, 0x002B, 0x0028, 0x8059, 0x0000, 0xF69D, 0x0021},
    {0x0003, 0x0033, 0x0032, 0x0028, 0x9F37, 0x0000, 0x53C2, 0x002D},
    {0x0003, 0x0033, 0x0028, 0x0010, 0x9F37, 0x0000, 0x53C2, 0x002D},
    {0x0003, 0x0034, 0x0035, 0x0011, 0x53C2, 0x0000, 0x60C9, 0x0073},
    {0x0003, 0x0034, 0x0011, 0x002D, 0x53C2, 0x0000, 0x60C9, 0x0073},
    {0x0003, 0x002F, 0x0034, 0x002D, 0x7FA7, 0x0000, 0x0963, 0x0085},
    {0x0003, 0x002F, 0x002D, 0x002A, 0x7FA7, 0x0000, 0x0963, 0x0085},
    {0x0001, 0x0036, 0x0037, 0x0038, 0x0000, 0x0000, 0x8001, 0x0419},
    {0x0001, 0x0036, 0x0038, 0x0039, 0x0000, 0x0000, 0x8001, 0x0419},
    {0x0001, 0x003A, 0x003B, 0x0036, 0x7FFF, 0x0000, 0x0000, 0x047E},
    {0x0001, 0x003A, 0x0036, 0x0039, 0x7FFF, 0x0000, 0x0000, 0x047E},
    {0x0001, 0x0038, 0x0037, 0x003C, 0x8001, 0x0000, 0x0000, 0x041A},
    {0x0001, 0x0038, 0x003C, 0x003D, 0x8001, 0x0000, 0x0000, 0x041A},
    {0x0001, 0x003A, 0x003D, 0x003C, 0x0000, 0x0000, 0x7FFF, 0x0419},
    {0x0001, 0x003A, 0x003C, 0x003B, 0x0000, 0x0000, 0x7FFF, 0x0419},
    {0x0003, 0x0033, 0x0013, 0x0012, 0xF69D, 0x0000, 0x7FA7, 0x004F},
    {0x0003, 0x0033, 0x0012, 0x0035, 0xF69D, 0x0000, 0x7FA7, 0x004F},
    {0x0001, 0x003C, 0x0033, 0x0035, 0x0000, 0x8001, 0x0000, 0x03FC},
    {0x0001, 0x003C, 0x0035, 0x003B, 0x0000, 0x8001, 0x0000, 0x03FC},
    {0x0001, 0x0035, 0x0034, 0x003B, 0x0000, 0x8001, 0x0000, 0x03FC},
    {0x0001, 0x0034, 0x002F, 0x0036, 0x0000, 0x8001, 0x0000, 0x03FC},
    {0x0001, 0x0034, 0x0036, 0x003B, 0x0000, 0x8001, 0x0000, 0x03FC},
    {0x0001, 0x002F, 0x002E, 0x0036, 0x0000, 0x8001, 0x0000, 0x03FC},
    {0x0001, 0x0031, 0x0032, 0x003C, 0x0000, 0x8001, 0x0000, 0x03FC},
    {0x0001, 0x0031, 0x003C, 0x0037, 0x0000, 0x8001, 0x0000, 0x03FC},
    {0x0001, 0x0030, 0x0031, 0x0037, 0x0000, 0x8001, 0x0000, 0x03FC},
    {0x0001, 0x0036, 0x002E, 0x0030, 0x0000, 0x8001, 0x0000, 0x03FC},
    {0x0001, 0x0036, 0x0030, 0x0037, 0x0000, 0x8001, 0x0000, 0x03FC},
    {0x0001, 0x0032, 0x0033, 0x003C, 0x0000, 0x8001, 0x0000, 0x03FC},
};

Vec3s HAKAdan_bs_sceneCollisionHeader_00134CVertices[] = {
    {     30,   1680,  -1357 },
    {   -130,   1680,  -1357 },
    {   -130,   1680,   -317 },
    {     30,   1680,   -317 },
    {     10,   1840,   -317 },
    {     10,   1680,   -317 },
    {     10,   1680,   -297 },
    {     10,   1840,   -297 },
    {   -110,   1840,   -297 },
    {   -110,   1680,   -297 },
    {   -110,   1680,   -317 },
    {   -110,   1840,   -317 },
    {     10,   1680,   -307 },
    {   -110,   1680,   -307 },
    {   -110,   1840,   -307 },
    {     10,   1840,   -307 },
    {    -10,   1680,    -80 },
    {    -78,   1680,    -85 },
    {    -78,   1600,    -85 },
    {    -10,   1600,    -80 },
    {   -110,   1840,   -277 },
    {   -165,   1680,   -277 },
    {   -110,   1680,   -277 },
    {     65,   1680,   -277 },
    {     10,   1840,   -277 },
    {     10,   1680,   -277 },
    {   -327,   2100,    115 },
    {     65,   2100,    277 },
    {   -165,   2100,    277 },
    {    227,   2100,    115 },
    {    227,   2100,   -115 },
    {     65,   2100,   -277 },
    {   -165,   2100,   -277 },
    {   -327,   2100,   -115 },
    {     65,   1680,    277 },
    {   -165,   1680,    277 },
    {    227,   1680,    115 },
    {   -327,   1680,   -115 },
    {    227,   1680,   -115 },
    {   -327,   1680,    115 },
    {     35,   1680,    -28 },
    {    -90,   1680,     80 },
    {   -135,   1680,     28 },
    {     30,   1680,     40 },
    {    -22,   1680,     85 },
    {   -130,   1680,    -40 },
    {    -90,   1020,     80 },
    {   -135,   1020,     28 },
    {    -22,   1020,     85 },
    {     30,   1020,     40 },
    {     35,   1020,    -28 },
    {    -10,   1020,    -80 },
    {   -130,   1020,    -40 },
    {    -78,   1020,    -85 },
    {  -1150,   1020,   1049 },
    {   1050,   1020,   1049 },
    {   1050,   -100,   1049 },
    {  -1150,   -100,   1049 },
    {  -1150,   -100,  -1049 },
    {  -1150,   1020,  -1049 },
    {   1050,   1020,  -1049 },
    {   1050,   -100,  -1049 },
    {   -280,   -100,   -554 },
    {   -604,   -100,   -230 },
    {   -604,   -100,    230 },
    {   -280,   -100,    554 },
    {    504,   -100,   -230 },
    {    504,   -100,    230 },
    {    180,   -100,   -554 },
    {    180,   -100,    554 },
    {   -443,    -63,   -453 },
    {   -436,    -41,   -432 },
    {   -424,    -71,   -450 },
    {   -449,   -100,   -462 },
    {   -424,   -100,   -447 },
    {   -503,    -63,   -393 },
    {   -490,    -57,   -440 },
    {   -500,   -100,   -450 },
    {   -512,   -100,   -399 },
    {   -469,    -32,   -419 },
    {   -406,    -75,   -427 },
    {   -409,   -100,   -425 },
    {   -420,    -40,   -414 },
    {   -442,    -30,   -392 },
    {   -482,    -41,   -386 },
    {   -464,    -40,   -370 },
    {   -500,    -71,   -374 },
    {   -477,    -75,   -356 },
    {   -497,   -100,   -374 },
    {   -475,   -100,   -359 },
    {   -424,    -71,    450 },
    {   -436,    -41,    432 },
    {   -443,    -63,    453 },
    {   -424,   -100,    447 },
    {   -449,   -100,    462 },
    {   -469,    -32,    419 },
    {   -490,    -57,    440 },
    {   -409,   -100,    425 },
    {   -406,    -75,    427 },
    {   -420,    -40,    414 },
    {   -442,    -30,    392 },
    {   -464,    -40,    370 },
    {   -482,    -41,    386 },
    {   -477,    -75,    356 },
    {   -500,    -71,    374 },
    {   -475,   -100,    359 },
    {   -497,   -100,    374 },
    {   -503,    -63,    393 },
    {   -500,   -100,    450 },
    {   -512,   -100,    399 },
    {    403,    -63,   -393 },
    {    382,    -41,   -386 },
    {    400,    -71,   -374 },
    {    412,   -100,   -399 },
    {    397,   -100,   -374 },
    {    343,    -63,   -453 },
    {    390,    -57,   -440 },
    {    400,   -100,   -450 },
    {    349,   -100,   -462 },
    {    369,    -32,   -419 },
    {    377,    -75,   -356 },
    {    375,   -100,   -359 },
    {    364,    -40,   -370 },
    {    342,    -30,   -392 },
    {    336,    -41,   -432 },
    {    320,    -40,   -414 },
    {    324,    -71,   -450 },
    {    306,    -75,   -427 },
    {    324,   -100,   -447 },
    {    309,   -100,   -425 },
    {    400,    -71,    374 },
    {    382,    -41,    386 },
    {    403,    -63,    393 },
    {    397,   -100,    374 },
    {    412,   -100,    399 },
    {    369,    -32,    419 },
    {    390,    -57,    440 },
    {    375,   -100,    359 },
    {    377,    -75,    356 },
    {    364,    -40,    370 },
    {    342,    -30,    392 },
    {    320,    -40,    414 },
    {    336,    -41,    432 },
    {    306,    -75,    427 },
    {    324,    -71,    450 },
    {    309,   -100,    425 },
    {    324,   -100,    447 },
    {    343,    -63,    453 },
    {    400,   -100,    450 },
    {    349,   -100,    462 },
    {   -604,      0,   -230 },
    {   -280,      0,   -554 },
    {   -604,      0,    230 },
    {   -280,      0,    554 },
    {    180,      0,    554 },
    {    504,      0,    230 },
    {    504,      0,   -230 },
    {    180,      0,   -554 },
    {     10,   1840,   -287 },
    {   -110,   1840,   -287 },
    {   -110,   1680,   -287 },
    {     10,   1680,   -287 },
};

CollisionHeader HAKAdan_bs_sceneCollisionHeader_00134C = { 
    { -1150, -100, -1377 },
    { 1050, 2280, 1049 },
    ARRAY_COUNT(HAKAdan_bs_sceneCollisionHeader_00134CVertices), HAKAdan_bs_sceneCollisionHeader_00134CVertices,
    ARRAY_COUNT(HAKAdan_bs_sceneCollisionHeader_00134CPolygons), HAKAdan_bs_sceneCollisionHeader_00134CPolygons,
    HAKAdan_bs_sceneCollisionHeader_00134CSurfaceType,
    HAKAdan_bs_sceneCollisionHeader_00134CCamDataList,
    0, NULL
};

u8 HAKAdan_bs_scene_possiblePadding_001378[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 HAKAdan_bs_sceneTex_001380[] = {
#include "assets/scenes/dungeons/HAKAdan_bs/HAKAdan_bs_sceneTex_001380.i4.inc.c"
};

u64 HAKAdan_bs_sceneTex_001580[] = {
#include "assets/scenes/dungeons/HAKAdan_bs/HAKAdan_bs_sceneTex_001580.rgba16.inc.c"
};

u64 HAKAdan_bs_sceneTex_001780[] = {
#include "assets/scenes/dungeons/HAKAdan_bs/HAKAdan_bs_sceneTex_001780.rgba16.inc.c"
};

u64 HAKAdan_bs_sceneTex_001F80[] = {
#include "assets/scenes/dungeons/HAKAdan_bs/HAKAdan_bs_sceneTex_001F80.rgba16.inc.c"
};

