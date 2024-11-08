#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "kokiri_home3_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "kokiri_home3_room_0.h"

SceneCmd kokiri_home3_sceneCommands[] = {
    SCENE_CMD_SOUND_SETTINGS(5, 19, 31),
    SCENE_CMD_ROOM_LIST(1, kokiri_home3_sceneRoomList0x000068),
    SCENE_CMD_MISC_SETTINGS(0x20, 0x00000004),
    SCENE_CMD_COL_HEADER(&kokiri_home3_sceneCollisionHeader_001774),
    SCENE_CMD_ENTRANCE_LIST(kokiri_home3_sceneEntranceList0x000070),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_NONE, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SPAWN_LIST(1, kokiri_home3_sceneStartPositionList0x000058),
    SCENE_CMD_SKYBOX_SETTINGS(14, 0, true),
    SCENE_CMD_EXIT_LIST(kokiri_home3_sceneExitList_000074),
    SCENE_CMD_ENV_LIGHT_SETTINGS(1, kokiri_home3_sceneLightSettings0x000078),
    SCENE_CMD_END(),
};

ActorEntry kokiri_home3_sceneStartPositionList0x000058[] = {
    { ACTOR_PLAYER,     {     -1,      0,   -156 }, {      0,      0,      0 }, 0x0E00 },
};

RomFile kokiri_home3_sceneRoomList0x000068[] = {
    { (uintptr_t)_kokiri_home3_room_0SegmentRomStart, (uintptr_t)_kokiri_home3_room_0SegmentRomEnd },
};

Spawn kokiri_home3_sceneEntranceList0x000070[] = {
    { 0x00, 0x00 },
    { 0x00, 0x00 },
};

u16 kokiri_home3_sceneExitList_000074[] = {
    ENTR_KOKIRI_FOREST_8,
    ENTR_DEKU_TREE_0,
};

EnvLightSettings kokiri_home3_sceneLightSettings0x000078[] = {
    { 0x46, 0x3C, 0x32, 0xD6, 0x59, 0x4F, 0xF0, 0xDC, 0xD2, 0x03, 0x6A, 0xBB, 0xC8, 0xB4, 0xAA, 0x0A, 0x0A, 0x0A,
    0x07E0, 0x07D0 },
};

Vec3s kokiri_home3_sceneCollisionHeader_001774CamPosData[] = {
    {   -112,    392,     60 },
    {  13107,  21845,      0 },
    {   5000,     -1,     -1 },
    {   -140,     40,    -24 },
    {      0,      0,      0 },
    {   6000,     -1,     -1 },
};

BgCamInfo kokiri_home3_sceneCollisionHeader_001774CamDataList[] = {
    { 0x0019, 3, &kokiri_home3_sceneCollisionHeader_001774CamPosData[0] },
    { 0x001A, 3, &kokiri_home3_sceneCollisionHeader_001774CamPosData[3] },
    { 0x0000, 0, NULL },
};

SurfaceType kokiri_home3_sceneCollisionHeader_001774SurfaceType[] = {
    {0x00000002, 0x00000800},   {0x00000002, 0x0000080A},   {0x00000102, 0x040C0800},   {0x00000002, 0x00000808},
    {0x00000002, 0x00000FC0},
};

CollisionPoly kokiri_home3_sceneCollisionHeader_001774Polygons[] = {
    {0x0000, 0x0030, 0x0031, 0x0032, 0x287A, 0x0000, 0x8692, 0x0075},
    {0x0000, 0x0030, 0x0032, 0x0033, 0x287A, 0x0000, 0x8692, 0x0075},
    {0x0000, 0x0031, 0x0034, 0x0035, 0xDCD6, 0x0000, 0x84EE, 0x002B},
    {0x0000, 0x0031, 0x0035, 0x0032, 0xDCD6, 0x0000, 0x84EE, 0x002B},
    {0x0000, 0x0034, 0x0036, 0x0037, 0xA57E, 0x0000, 0xA57E, 0xFFDC},
    {0x0000, 0x0034, 0x0037, 0x0035, 0xA57E, 0x0000, 0xA57E, 0xFFDC},
    {0x0000, 0x0036, 0x0038, 0x0039, 0x81BF, 0x0000, 0xEAF5, 0xFF85},
    {0x0000, 0x0036, 0x0039, 0x0037, 0x81BF, 0x0000, 0xEAF5, 0xFF85},
    {0x0000, 0x0038, 0x003A, 0x003B, 0x814A, 0x0000, 0x121A, 0xFF68},
    {0x0000, 0x0038, 0x003B, 0x0039, 0x814A, 0x0000, 0x121A, 0xFF68},
    {0x0000, 0x003A, 0x003C, 0x003D, 0xB00B, 0x0000, 0x63F3, 0xFF5A},
    {0x0000, 0x003A, 0x003D, 0x003B, 0xB00B, 0x0000, 0x63F3, 0xFF5A},
    {0x0000, 0x003C, 0x003E, 0x003F, 0xDCD6, 0x0000, 0x7B12, 0xFF76},
    {0x0000, 0x003C, 0x003F, 0x003D, 0xDCD6, 0x0000, 0x7B12, 0xFF76},
    {0x0000, 0x003E, 0x0040, 0x0041, 0x287A, 0x0000, 0x796E, 0xFFC3},
    {0x0000, 0x003E, 0x0041, 0x003F, 0x287A, 0x0000, 0x796E, 0xFFC3},
    {0x0000, 0x0040, 0x0042, 0x0043, 0x4FF5, 0x0000, 0x63F3, 0xFFFA},
    {0x0000, 0x0040, 0x0043, 0x0041, 0x4FF5, 0x0000, 0x63F3, 0xFFFA},
    {0x0000, 0x0042, 0x0044, 0x0045, 0x7B12, 0x0000, 0x232A, 0x0054},
    {0x0000, 0x0042, 0x0045, 0x0043, 0x7B12, 0x0000, 0x232A, 0x0054},
    {0x0000, 0x0044, 0x0046, 0x0047, 0x796E, 0x0000, 0xD786, 0x008A},
    {0x0000, 0x0044, 0x0047, 0x0045, 0x796E, 0x0000, 0xD786, 0x008A},
    {0x0000, 0x0046, 0x0030, 0x0033, 0x5A82, 0x0000, 0xA57E, 0x0090},
    {0x0000, 0x0046, 0x0033, 0x0047, 0x5A82, 0x0000, 0xA57E, 0x0090},
    {0x0001, 0x003D, 0x003F, 0x0041, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0001, 0x003D, 0x0041, 0x0043, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0001, 0x003D, 0x0043, 0x0045, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0001, 0x003D, 0x0045, 0x0047, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0001, 0x003D, 0x0047, 0x0033, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0001, 0x003D, 0x0033, 0x0032, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0001, 0x003D, 0x0032, 0x0035, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0001, 0x003D, 0x0035, 0x0037, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0001, 0x003D, 0x0037, 0x0039, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0001, 0x003D, 0x0039, 0x003B, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7FFF, 0x0154},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x0000, 0x7FFF, 0x0154},
    {0x0000, 0x0004, 0x0000, 0x0003, 0x8001, 0x0000, 0x0000, 0x001A},
    {0x0000, 0x0004, 0x0003, 0x0005, 0x8003, 0x0148, 0xFF2F, 0x0018},
    {0x0000, 0x0006, 0x0002, 0x0001, 0x7FFF, 0x0000, 0x0000, 0x001A},
    {0x0000, 0x0006, 0x0001, 0x0007, 0x7FFF, 0x0000, 0x0000, 0x001A},
    {0x0000, 0x0008, 0x0009, 0x000A, 0x8185, 0x0000, 0x13A0, 0x00B9},
    {0x0000, 0x0008, 0x000A, 0x000B, 0x8185, 0x0000, 0x13A0, 0x00B9},
    {0x0000, 0x000C, 0x000D, 0x0009, 0x8185, 0x0000, 0xEC60, 0x00B9},
    {0x0000, 0x000C, 0x0009, 0x0008, 0x8185, 0x0000, 0xEC60, 0x00B9},
    {0x0000, 0x000E, 0x000F, 0x000D, 0x8E67, 0x0000, 0xC504, 0x00B9},
    {0x0000, 0x000E, 0x000D, 0x000C, 0x8E67, 0x0000, 0xC504, 0x00B9},
    {0x0000, 0x0010, 0x0011, 0x000F, 0xA57E, 0x0000, 0xA57E, 0x00B9},
    {0x0000, 0x0010, 0x000F, 0x000E, 0xA57E, 0x0000, 0xA57E, 0x00B9},
    {0x0000, 0x0012, 0x0013, 0x0011, 0xC504, 0x0000, 0x8E67, 0x00B9},
    {0x0000, 0x0012, 0x0011, 0x0010, 0xC504, 0x0000, 0x8E67, 0x00B9},
    {0x0000, 0x0014, 0x0015, 0x0013, 0xEC60, 0x0000, 0x8185, 0x00B9},
    {0x0000, 0x0014, 0x0013, 0x0012, 0xEC60, 0x0000, 0x8185, 0x00B9},
    {0x0000, 0x0016, 0x0017, 0x0015, 0x13A0, 0x0000, 0x8185, 0x00B9},
    {0x0000, 0x0016, 0x0015, 0x0014, 0x13A0, 0x0000, 0x8185, 0x00B9},
    {0x0000, 0x0018, 0x0019, 0x0017, 0x3AFC, 0x0000, 0x8E67, 0x00B9},
    {0x0000, 0x0018, 0x0017, 0x0016, 0x3AFC, 0x0000, 0x8E67, 0x00B9},
    {0x0000, 0x001A, 0x001B, 0x0019, 0x5A82, 0x0000, 0xA57E, 0x00B9},
    {0x0000, 0x001A, 0x0019, 0x0018, 0x5A82, 0x0000, 0xA57E, 0x00B9},
    {0x0000, 0x001C, 0x001D, 0x001B, 0x7199, 0x0000, 0xC504, 0x00B9},
    {0x0000, 0x001C, 0x001B, 0x001A, 0x7199, 0x0000, 0xC504, 0x00B9},
    {0x0000, 0x001E, 0x001F, 0x001D, 0x7E7B, 0x0000, 0xEC60, 0x00B9},
    {0x0000, 0x001E, 0x001D, 0x001C, 0x7E7B, 0x0000, 0xEC60, 0x00B9},
    {0x0000, 0x0020, 0x0021, 0x001F, 0x7E7B, 0x0000, 0x13A0, 0x00B9},
    {0x0000, 0x0020, 0x001F, 0x001E, 0x7E7B, 0x0000, 0x13A0, 0x00B9},
    {0x0000, 0x0022, 0x0023, 0x0021, 0x7199, 0x0000, 0x3AFC, 0x00B9},
    {0x0000, 0x0022, 0x0021, 0x0020, 0x7199, 0x0000, 0x3AFC, 0x00B9},
    {0x0000, 0x0024, 0x0025, 0x0023, 0x5A82, 0x0000, 0x5A82, 0x00B9},
    {0x0000, 0x0024, 0x0023, 0x0022, 0x5A82, 0x0000, 0x5A82, 0x00B9},
    {0x0000, 0x0026, 0x0027, 0x0025, 0x3AFC, 0x0000, 0x7199, 0x00B9},
    {0x0000, 0x0026, 0x0025, 0x0024, 0x3AFC, 0x0000, 0x7199, 0x00B9},
    {0x0000, 0x0028, 0x0029, 0x002A, 0xC504, 0x0000, 0x7199, 0x00B9},
    {0x0000, 0x0028, 0x002A, 0x002B, 0xC504, 0x0000, 0x7199, 0x00B9},
    {0x0000, 0x002C, 0x002D, 0x0029, 0xA57E, 0x0000, 0x5A82, 0x00B9},
    {0x0000, 0x002C, 0x0029, 0x0028, 0xA57E, 0x0000, 0x5A82, 0x00B9},
    {0x0000, 0x000B, 0x000A, 0x002D, 0x8E67, 0x0000, 0x3AFC, 0x00B9},
    {0x0000, 0x000B, 0x002D, 0x002C, 0x8E67, 0x0000, 0x3AFC, 0x00B9},
    {0x0000, 0x002E, 0x0004, 0x002F, 0xEC8A, 0x0000, 0x7E82, 0x00B9},
    {0x0000, 0x0004, 0x002A, 0x002F, 0xEC60, 0xFFF8, 0x7E7B, 0x00B9},
    {0x0000, 0x0004, 0x0005, 0x002B, 0xECD3, 0x0031, 0x7E8D, 0x00B9},
    {0x0000, 0x0004, 0x002B, 0x002A, 0xEC3E, 0x0000, 0x7E76, 0x00B9},
    {0x0000, 0x0026, 0x0006, 0x0007, 0x13C2, 0x0000, 0x7E76, 0x00B9},
    {0x0000, 0x0026, 0x0007, 0x0027, 0x13C2, 0x0000, 0x7E76, 0x00B9},
    {0x0000, 0x0007, 0x002F, 0x0027, 0x13A0, 0xFFF8, 0x7E7B, 0x00B9},
    {0x0000, 0x0007, 0x002E, 0x002F, 0x1376, 0x0000, 0x7E82, 0x00B9},
    {0x0000, 0x0001, 0x0000, 0x0004, 0x0000, 0x8001, 0x0000, 0x0064},
    {0x0000, 0x0001, 0x0004, 0x002E, 0x0000, 0x8001, 0x0000, 0x0064},
    {0x0000, 0x0001, 0x002E, 0x0007, 0x0000, 0x8001, 0x0000, 0x0064},
    {0x0002, 0x0003, 0x2002, 0x0006, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0003, 0x2006, 0x0005, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x0026, 0x0024, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x0024, 0x0022, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x0022, 0x0020, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x0020, 0x001E, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x001E, 0x001C, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x001C, 0x001A, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x001A, 0x0018, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x0018, 0x0016, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x0016, 0x0014, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x0014, 0x0012, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x0012, 0x0010, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x0010, 0x000E, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x000E, 0x000C, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x000C, 0x0008, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x0008, 0x000B, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x000B, 0x002C, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x002C, 0x0028, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x0028, 0x002B, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x002B, 0x0005, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0048, 0x0049, 0x004A, 0x7DFA, 0x0000, 0x16A6, 0x007B},
    {0x0000, 0x0048, 0x004A, 0x004B, 0x7DFA, 0x0000, 0x16A6, 0x007B},
    {0x0000, 0x0049, 0x0048, 0x004C, 0x1564, 0x0000, 0x81CE, 0xFFD1},
    {0x0000, 0x0049, 0x004C, 0x004D, 0x1564, 0x0000, 0x81CE, 0xFFD1},
    {0x0000, 0x004E, 0x004B, 0x004A, 0xE88A, 0x0000, 0x7DD4, 0xFFD3},
    {0x0000, 0x004E, 0x004A, 0x004F, 0xE88A, 0x0000, 0x7DD4, 0xFFD3},
    {0x0000, 0x00BE, 0x00BF, 0x00C0, 0xA57E, 0x0000, 0x5A82, 0x007C},
    {0x0000, 0x00BE, 0x00C0, 0x00BC, 0xA57E, 0x0000, 0x5A82, 0x007C},
    {0x0000, 0x00C1, 0x00BE, 0x00C2, 0x5A82, 0x0000, 0x5A82, 0xFFDD},
    {0x0000, 0x00C1, 0x00C2, 0x00C3, 0x5A82, 0x0000, 0x5A82, 0xFFDD},
    {0x0000, 0x00BD, 0x00BC, 0x00BB, 0xA57E, 0x0000, 0xA57E, 0xFFDD},
    {0x0000, 0x00BD, 0x00BB, 0x00BA, 0xA57E, 0x0000, 0xA57E, 0xFFDD},
    {0x0003, 0x00C4, 0x00C5, 0x00C0, 0x0000, 0x7FFF, 0x0000, 0xFFCC},
    {0x0003, 0x00C4, 0x00C0, 0x00BF, 0x0000, 0x7FFF, 0x0000, 0xFFCC},
    {0x0000, 0x00C3, 0x00C2, 0x00BE, 0xA57E, 0x0000, 0xA57E, 0x0023},
    {0x0000, 0x00C3, 0x00BE, 0x00C1, 0xA57E, 0x0000, 0xA57E, 0x0023},
    {0x0000, 0x00AE, 0x00AF, 0x00B0, 0xA57E, 0x0000, 0xA57E, 0x007C},
    {0x0000, 0x00AE, 0x00B0, 0x00B1, 0xA57E, 0x0000, 0xA57E, 0x007C},
    {0x0000, 0x00B2, 0x00B3, 0x00AE, 0x5A82, 0x0000, 0xA57E, 0x0023},
    {0x0000, 0x00B2, 0x00AE, 0x00B4, 0x5A82, 0x0000, 0xA57E, 0x0023},
    {0x0000, 0x00B5, 0x00B1, 0x00B6, 0x5A82, 0x0000, 0xA57E, 0xFFDD},
    {0x0000, 0x00B5, 0x00B6, 0x00B7, 0x5A82, 0x0000, 0xA57E, 0xFFDD},
    {0x0003, 0x00B8, 0x00B9, 0x00B0, 0x0000, 0x7FFF, 0x0000, 0xFFCC},
    {0x0003, 0x00B8, 0x00B0, 0x00AF, 0x0000, 0x7FFF, 0x0000, 0xFFCC},
    {0x0000, 0x00B7, 0x00B6, 0x00B1, 0xA57E, 0x0000, 0x5A82, 0x0023},
    {0x0000, 0x00B7, 0x00B1, 0x00B5, 0xA57E, 0x0000, 0x5A82, 0x0023},
    {0x0000, 0x00B4, 0x00AE, 0x00B3, 0xA57E, 0x0000, 0x5A82, 0xFFDD},
    {0x0000, 0x00B4, 0x00B3, 0x00B2, 0xA57E, 0x0000, 0x5A82, 0xFFDD},
    {0x0000, 0x00BA, 0x00BB, 0x00BC, 0x5A82, 0x0000, 0x5A82, 0x0023},
    {0x0000, 0x00BA, 0x00BC, 0x00BD, 0x5A82, 0x0000, 0x5A82, 0x0023},
    {0x0000, 0x0050, 0x0051, 0x0052, 0x7B7C, 0x0000, 0xDE52, 0x008C},
    {0x0000, 0x0050, 0x0052, 0x0053, 0x7B7C, 0x0000, 0xDE52, 0x008C},
    {0x0000, 0x0054, 0x0050, 0x0053, 0x7B7C, 0x0000, 0x21AE, 0x0077},
    {0x0000, 0x0054, 0x0053, 0x0055, 0x7B7C, 0x0000, 0x21AE, 0x0077},
    {0x0000, 0x0056, 0x0054, 0x0055, 0x4700, 0x0000, 0x6A80, 0x0022},
    {0x0000, 0x0056, 0x0055, 0x0057, 0x4700, 0x0000, 0x6A80, 0x0022},
    {0x0000, 0x001C, 0x0056, 0x0057, 0x03FF, 0x0000, 0x7FEF, 0xFFCC},
    {0x0000, 0x001C, 0x0057, 0x0058, 0x03FF, 0x0000, 0x7FEF, 0xFFCC},
    {0x0000, 0x0059, 0x001C, 0x0058, 0xBB48, 0x0000, 0x9404, 0xFFD1},
    {0x0000, 0x0059, 0x0058, 0x005A, 0xBB48, 0x0000, 0x9404, 0xFFD1},
    {0x0000, 0x005B, 0x0059, 0x005A, 0x8484, 0x0000, 0x21AE, 0xFF51},
    {0x0000, 0x005B, 0x005A, 0x005C, 0x8484, 0x0000, 0x21AE, 0xFF51},
    {0x0000, 0x005D, 0x005B, 0x005C, 0x8484, 0x0000, 0xDE52, 0xFF67},
    {0x0000, 0x005D, 0x005C, 0x005E, 0x8484, 0x0000, 0xDE52, 0xFF67},
    {0x0000, 0x005F, 0x005D, 0x005E, 0xB900, 0x0000, 0x9580, 0xFFBB},
    {0x0000, 0x005F, 0x005E, 0x0060, 0xB900, 0x0000, 0x9580, 0xFFBB},
    {0x0000, 0x0061, 0x005F, 0x0060, 0x0000, 0x0000, 0x8001, 0x0017},
    {0x0000, 0x0061, 0x0060, 0x0062, 0x0000, 0x0000, 0x8001, 0x0017},
    {0x0000, 0x0051, 0x0061, 0x0062, 0x4700, 0x0000, 0x9580, 0x0064},
    {0x0000, 0x0051, 0x0062, 0x0052, 0x4700, 0x0000, 0x9580, 0x0064},
    {0x0001, 0x007B, 0x007C, 0x007D, 0x796E, 0x0000, 0xD786, 0x0023},
    {0x0001, 0x007B, 0x007D, 0x007E, 0x796E, 0x0000, 0xD786, 0x0023},
    {0x0001, 0x007F, 0x007B, 0x007E, 0x7B12, 0x0000, 0x232A, 0xFFCA},
    {0x0001, 0x007F, 0x007E, 0x0080, 0x7B12, 0x0000, 0x232A, 0xFFCA},
    {0x0001, 0x0081, 0x007F, 0x0080, 0x4FF5, 0x0000, 0x63F3, 0xFF7F},
    {0x0001, 0x0081, 0x0080, 0x0082, 0x4FF5, 0x0000, 0x63F3, 0xFF7F},
    {0x0001, 0x0083, 0x0081, 0x0082, 0x287A, 0x0000, 0x796E, 0xFF65},
    {0x0001, 0x0083, 0x0082, 0x0084, 0x287A, 0x0000, 0x796E, 0xFF65},
    {0x0001, 0x0085, 0x0083, 0x0084, 0xDCD6, 0x0000, 0x7B12, 0xFF63},
    {0x0001, 0x0085, 0x0084, 0x0086, 0xDCD6, 0x0000, 0x7B12, 0xFF63},
    {0x0000, 0x0087, 0x0085, 0x0086, 0xA57E, 0x0000, 0x5A82, 0xFF89},
    {0x0000, 0x0087, 0x0086, 0x0088, 0xA57E, 0x0000, 0x5A82, 0xFF89},
    {0x0000, 0x0089, 0x0087, 0x0088, 0x84EE, 0x0000, 0x232A, 0xFFCA},
    {0x0000, 0x0089, 0x0088, 0x008A, 0x84EE, 0x0000, 0x232A, 0xFFCA},
    {0x0000, 0x008B, 0x0089, 0x008A, 0x8692, 0x0000, 0xD786, 0x0023},
    {0x0000, 0x008B, 0x008A, 0x008C, 0x8692, 0x0000, 0xD786, 0x0023},
    {0x0000, 0x008D, 0x008B, 0x008C, 0x9C0D, 0x0000, 0xB00B, 0x0051},
    {0x0000, 0x008D, 0x008C, 0x008E, 0x9C0D, 0x0000, 0xB00B, 0x0051},
    {0x0000, 0x008F, 0x008D, 0x008E, 0xDCD6, 0x0000, 0x84EE, 0x0084},
    {0x0000, 0x008F, 0x008E, 0x0090, 0xDCD6, 0x0000, 0x84EE, 0x0084},
    {0x0000, 0x0091, 0x008F, 0x0090, 0x287A, 0x0000, 0x8692, 0x0082},
    {0x0000, 0x0091, 0x0090, 0x0092, 0x287A, 0x0000, 0x8692, 0x0082},
    {0x0000, 0x007C, 0x0091, 0x0092, 0x5A82, 0x0000, 0xA57E, 0x005E},
    {0x0000, 0x007C, 0x0092, 0x007D, 0x5A82, 0x0000, 0xA57E, 0x005E},
    {0x0001, 0x0080, 0x007E, 0x007D, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0001, 0x0080, 0x007D, 0x0092, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0001, 0x0080, 0x0092, 0x0090, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0001, 0x0080, 0x0090, 0x008E, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0001, 0x0080, 0x008E, 0x008C, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0001, 0x0080, 0x008C, 0x008A, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0001, 0x0080, 0x008A, 0x0088, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0001, 0x0080, 0x0088, 0x0086, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0001, 0x0080, 0x0086, 0x0084, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0001, 0x0080, 0x0084, 0x0082, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0001, 0x0063, 0x0064, 0x0065, 0x7B12, 0x0000, 0xDCD6, 0x0042},
    {0x0001, 0x0063, 0x0065, 0x0066, 0x7B12, 0x0000, 0xDCD6, 0x0042},
    {0x0001, 0x0067, 0x0063, 0x0066, 0x7B12, 0x0000, 0x232A, 0xFFFB},
    {0x0001, 0x0067, 0x0066, 0x0068, 0x7B12, 0x0000, 0x232A, 0xFFFB},
    {0x0001, 0x0069, 0x0067, 0x0068, 0x5A82, 0x0000, 0x5A82, 0xFFB4},
    {0x0001, 0x0069, 0x0068, 0x006A, 0x5A82, 0x0000, 0x5A82, 0xFFB4},
    {0x0001, 0x006B, 0x0069, 0x006A, 0x232A, 0x0000, 0x7B12, 0xFF79},
    {0x0001, 0x006B, 0x006A, 0x006C, 0x232A, 0x0000, 0x7B12, 0xFF79},
    {0x0001, 0x006D, 0x006B, 0x006C, 0xDCD6, 0x0000, 0x7B12, 0xFF58},
    {0x0001, 0x006D, 0x006C, 0x006E, 0xDCD6, 0x0000, 0x7B12, 0xFF58},
    {0x0000, 0x006F, 0x006D, 0x006E, 0xA57E, 0x0000, 0x5A82, 0xFF5F},
    {0x0000, 0x006F, 0x006E, 0x0070, 0xA57E, 0x0000, 0x5A82, 0xFF5F},
    {0x0000, 0x0071, 0x006F, 0x0070, 0x84EE, 0x0000, 0x232A, 0xFF88},
    {0x0000, 0x0071, 0x0070, 0x0072, 0x84EE, 0x0000, 0x232A, 0xFF88},
    {0x0000, 0x0073, 0x0071, 0x0072, 0x84EE, 0x0000, 0xDCD6, 0xFFCF},
    {0x0000, 0x0073, 0x0072, 0x0074, 0x84EE, 0x0000, 0xDCD6, 0xFFCF},
    {0x0000, 0x0075, 0x0073, 0x0074, 0xA57E, 0x0000, 0xA57E, 0x0017},
    {0x0000, 0x0075, 0x0074, 0x0076, 0xA57E, 0x0000, 0xA57E, 0x0017},
    {0x0000, 0x0077, 0x0075, 0x0076, 0xDCD6, 0x0000, 0x84EE, 0x0052},
    {0x0000, 0x0077, 0x0076, 0x0078, 0xDCD6, 0x0000, 0x84EE, 0x0052},
    {0x0000, 0x0079, 0x0077, 0x0078, 0x232A, 0x0000, 0x84EE, 0x0073},
    {0x0000, 0x0079, 0x0078, 0x007A, 0x232A, 0x0000, 0x84EE, 0x0073},
    {0x0000, 0x0064, 0x0079, 0x007A, 0x5A82, 0x0000, 0xA57E, 0x006B},
    {0x0000, 0x0064, 0x007A, 0x0065, 0x5A82, 0x0000, 0xA57E, 0x006B},
    {0x0001, 0x0068, 0x0066, 0x0065, 0x0000, 0x7FFF, 0x0000, 0xFFE8},
    {0x0001, 0x0068, 0x0065, 0x007A, 0x0000, 0x7FFF, 0x0000, 0xFFE8},
    {0x0001, 0x0068, 0x007A, 0x0078, 0x0000, 0x7FFF, 0x0000, 0xFFE8},
    {0x0001, 0x0068, 0x0078, 0x0076, 0x0000, 0x7FFF, 0x0000, 0xFFE8},
    {0x0001, 0x0068, 0x0076, 0x0074, 0x0000, 0x7FFF, 0x0000, 0xFFE8},
    {0x0001, 0x0068, 0x0074, 0x0072, 0x0000, 0x7FFF, 0x0000, 0xFFE8},
    {0x0001, 0x0068, 0x0072, 0x0070, 0x0000, 0x7FFF, 0x0000, 0xFFE8},
    {0x0001, 0x0068, 0x0070, 0x006E, 0x0000, 0x7FFF, 0x0000, 0xFFE8},
    {0x0001, 0x0068, 0x006E, 0x006C, 0x0000, 0x7FFF, 0x0000, 0xFFE8},
    {0x0001, 0x0068, 0x006C, 0x006A, 0x0000, 0x7FFF, 0x0000, 0xFFE8},
    {0x0000, 0x0093, 0x0094, 0x0095, 0x8001, 0x0000, 0x0000, 0x0055},
    {0x0000, 0x0093, 0x0095, 0x0096, 0x8001, 0x0000, 0x0000, 0x0055},
    {0x0001, 0x0097, 0x0093, 0x0096, 0x0000, 0x7FFF, 0x0000, 0xFFEC},
    {0x0001, 0x0097, 0x0096, 0x0098, 0x0000, 0x7FFF, 0x0000, 0xFFEC},
    {0x0000, 0x0099, 0x0097, 0x0098, 0x8001, 0x0000, 0x0000, 0x0077},
    {0x0000, 0x0099, 0x0098, 0x009A, 0x8001, 0x0000, 0x0000, 0x0077},
    {0x0001, 0x009B, 0x0099, 0x009A, 0x0000, 0x7FFF, 0x0000, 0xFFE2},
    {0x0001, 0x009B, 0x009A, 0x009C, 0x0000, 0x7FFF, 0x0000, 0xFFE2},
    {0x0000, 0x009D, 0x009B, 0x009C, 0x8001, 0x0000, 0x0000, 0x0099},
    {0x0000, 0x009D, 0x009C, 0x009E, 0x8001, 0x0000, 0x0000, 0x0099},
    {0x0001, 0x009F, 0x0095, 0x0094, 0x0000, 0x7FFF, 0x0000, 0xFFF6},
    {0x0001, 0x009F, 0x0094, 0x00A0, 0x0000, 0x7FFF, 0x0000, 0xFFF6},
    {0x0001, 0x00A1, 0x00A2, 0x00A3, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x00A1, 0x00A3, 0x00A4, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x00A1, 0x00A4, 0x009E, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x00A1, 0x009E, 0x00A5, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x00A4, 0x00A6, 0x00A7, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x00A4, 0x00A7, 0x009D, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x00A4, 0x009D, 0x009E, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x00A7, 0x00A8, 0x00A9, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x00A7, 0x00A9, 0x00AA, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x00A7, 0x00AA, 0x00AB, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x00A7, 0x00AB, 0x009D, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0000, 0x0012, 0x00A1, 0x00A5, 0x8001, 0x0000, 0x0000, 0x003A},
    {0x0000, 0x0012, 0x00A5, 0x009F, 0x8001, 0x0000, 0x0000, 0x003A},
    {0x0000, 0x0012, 0x009F, 0x00A0, 0x8001, 0x0000, 0x0000, 0x003A},
    {0x0000, 0x0012, 0x00A0, 0x002B, 0x8001, 0x0000, 0x0000, 0x003A},
    {0x0000, 0x00A0, 0x00AB, 0x00AA, 0x8001, 0x0000, 0x0000, 0x003A},
    {0x0000, 0x00A0, 0x00AA, 0x002B, 0x8001, 0x0000, 0x0000, 0x003A},
    {0x0000, 0x00A0, 0x00AC, 0x009D, 0x0000, 0x0000, 0x7FFF, 0x0022},
    {0x0000, 0x00A0, 0x009D, 0x00AB, 0x0000, 0x0000, 0x7FFF, 0x0022},
    {0x0000, 0x00A5, 0x009E, 0x00AD, 0x0000, 0x0000, 0x8001, 0x0022},
    {0x0000, 0x00A5, 0x00AD, 0x009F, 0x0000, 0x0000, 0x8001, 0x0022},
    {0x0004, 0x00D0, 0x0006, 0x00D1, 0x7F8E, 0x0000, 0xF55F, 0x000B},
    {0x0004, 0x00D0, 0x00D1, 0x00D2, 0x7F8E, 0x0000, 0xF55F, 0x000B},
    {0x0004, 0x00D3, 0x00D4, 0x00D5, 0xB900, 0x0000, 0x6A80, 0x005D},
    {0x0004, 0x00D3, 0x00D5, 0x00D6, 0xB900, 0x0000, 0x6A80, 0x005D},
    {0x0004, 0x00D4, 0x00D7, 0x00D8, 0x0000, 0x0000, 0x7FFF, 0x008F},
    {0x0004, 0x00D4, 0x00D8, 0x00D5, 0x0000, 0x0000, 0x7FFF, 0x008F},
    {0x0004, 0x00D7, 0x00D9, 0x00DA, 0x4700, 0x0000, 0x6A80, 0x008A},
    {0x0004, 0x00D7, 0x00DA, 0x00D8, 0x4700, 0x0000, 0x6A80, 0x008A},
    {0x0004, 0x00D9, 0x00DB, 0x00DC, 0x7B7C, 0x0000, 0x21AE, 0x003F},
    {0x0004, 0x00D9, 0x00DC, 0x00DA, 0x7B7C, 0x0000, 0x21AE, 0x003F},
    {0x0004, 0x00DB, 0x00D0, 0x00D2, 0x7B7C, 0x0000, 0xDE52, 0xFFEB},
    {0x0004, 0x00DB, 0x00D2, 0x00DC, 0x7B7C, 0x0000, 0xDE52, 0xFFEB},
    {0x0004, 0x00C6, 0x00C7, 0x00C8, 0x0000, 0x0000, 0x7FFF, 0x0098},
    {0x0004, 0x00C6, 0x00C8, 0x00C9, 0x0000, 0x0000, 0x7FFF, 0x0098},
    {0x0004, 0x00CA, 0x00CB, 0x00C8, 0x8001, 0x0000, 0x0000, 0x0020},
    {0x0004, 0x00CA, 0x00C8, 0x00C7, 0x8001, 0x0000, 0x0000, 0x0020},
    {0x0004, 0x00CC, 0x00CD, 0x00CE, 0x5292, 0x0000, 0x61CD, 0x0096},
    {0x0004, 0x00CC, 0x00CE, 0x00CF, 0x5292, 0x0000, 0x61CD, 0x0096},
};

Vec3s kokiri_home3_sceneCollisionHeader_001774Vertices[] = {
    {     26,    100,   -340 },
    {    -26,    100,   -340 },
    {    -26,      0,   -340 },
    {     26,      0,   -340 },
    {     26,    100,   -183 },
    {     25,      0,   -183 },
    {    -26,      0,   -183 },
    {    -26,    100,   -183 },
    {    187,      0,      0 },
    {    187,    240,      0 },
    {    178,    240,    -58 },
    {    178,      0,    -58 },
    {    178,      0,     58 },
    {    178,    240,     58 },
    {    151,      0,    110 },
    {    151,    240,    110 },
    {    110,      0,    151 },
    {    110,    240,    151 },
    {     58,      0,    178 },
    {     58,    240,    178 },
    {      0,      0,    187 },
    {      0,    240,    187 },
    {    -58,      0,    178 },
    {    -58,    240,    178 },
    {   -110,      0,    151 },
    {   -110,    240,    151 },
    {   -151,      0,    110 },
    {   -151,    240,    110 },
    {   -178,      0,     58 },
    {   -178,    240,     58 },
    {   -187,      0,      0 },
    {   -187,    240,      0 },
    {   -178,      0,    -58 },
    {   -178,    240,    -58 },
    {   -151,      0,   -110 },
    {   -151,    240,   -110 },
    {   -110,      0,   -151 },
    {   -110,    240,   -151 },
    {    -58,      0,   -178 },
    {    -58,    240,   -178 },
    {    110,      0,   -151 },
    {    110,    240,   -151 },
    {     58,    240,   -178 },
    {     58,      0,   -178 },
    {    151,      0,   -110 },
    {    151,    240,   -110 },
    {      0,    100,   -187 },
    {      0,    240,   -187 },
    {   -121,      0,     83 },
    {   -127,      0,     81 },
    {   -127,     16,     81 },
    {   -121,     16,     83 },
    {   -134,      0,     83 },
    {   -134,     16,     83 },
    {   -139,      0,     88 },
    {   -139,     16,     88 },
    {   -140,      0,     94 },
    {   -140,     16,     94 },
    {   -139,      0,    101 },
    {   -139,     16,    101 },
    {   -134,      0,    105 },
    {   -134,     16,    105 },
    {   -127,      0,    107 },
    {   -127,     16,    107 },
    {   -121,      0,    105 },
    {   -121,     16,    105 },
    {   -116,      0,    101 },
    {   -116,     16,    101 },
    {   -114,      0,     94 },
    {   -114,     16,     94 },
    {   -116,      0,     88 },
    {   -116,     16,     88 },
    {   -113,      0,    -67 },
    {   -113,    120,    -67 },
    {   -129,    120,     22 },
    {   -129,      0,     22 },
    {   -172,      0,    -77 },
    {   -172,    120,    -77 },
    {   -188,      0,     11 },
    {   -188,    120,     11 },
    {   -134,      0,     40 },
    {   -137,      0,     29 },
    {   -137,    120,     29 },
    {   -134,    120,     40 },
    {   -137,      0,     51 },
    {   -137,    120,     51 },
    {   -146,      0,     57 },
    {   -146,    120,     57 },
    {   -178,    120,     58 },
    {   -167,      0,     51 },
    {   -167,    120,     51 },
    {   -170,      0,     40 },
    {   -170,    120,     40 },
    {   -167,      0,     29 },
    {   -167,    120,     29 },
    {   -158,      0,     23 },
    {   -158,    120,     23 },
    {   -146,      0,     23 },
    {   -146,    120,     23 },
    {    -32,      0,    130 },
    {    -36,      0,    116 },
    {    -36,     24,    116 },
    {    -32,     24,    130 },
    {    -36,      0,    144 },
    {    -36,     24,    144 },
    {    -46,      0,    154 },
    {    -46,     24,    154 },
    {    -60,      0,    158 },
    {    -60,     24,    158 },
    {    -74,      0,    154 },
    {    -74,     24,    154 },
    {    -84,      0,    144 },
    {    -84,     24,    144 },
    {    -88,      0,    130 },
    {    -88,     24,    130 },
    {    -84,      0,    116 },
    {    -84,     24,    116 },
    {    -74,      0,    106 },
    {    -74,     24,    106 },
    {    -60,      0,    102 },
    {    -60,     24,    102 },
    {    -46,      0,    106 },
    {    -46,     24,    106 },
    {     13,      3,    150 },
    {     11,      3,    144 },
    {     11,     16,    144 },
    {     13,     16,    150 },
    {     11,      3,    157 },
    {     11,     16,    157 },
    {      6,      3,    161 },
    {      6,     16,    161 },
    {      0,      3,    163 },
    {      0,     16,    163 },
    {     -7,      3,    161 },
    {     -7,     16,    161 },
    {    -11,      3,    157 },
    {    -11,     16,    157 },
    {    -13,      3,    150 },
    {    -13,     16,    150 },
    {    -11,      3,    144 },
    {    -11,     16,    144 },
    {     -7,      3,    139 },
    {     -7,     16,    139 },
    {      0,      3,    137 },
    {      0,     16,    137 },
    {      6,      3,    139 },
    {      6,     16,    139 },
    {     85,     20,    -34 },
    {     85,     10,    -34 },
    {     85,     10,     34 },
    {     85,     20,     34 },
    {    119,     20,    -34 },
    {    119,     20,     34 },
    {    119,     30,    -34 },
    {    119,     30,     34 },
    {    153,     30,    -34 },
    {    153,     30,     34 },
    {    153,     40,    -34 },
    {    153,     40,     34 },
    {     58,     10,     34 },
    {     58,     10,    -34 },
    {     58,     40,    178 },
    {    110,     40,    151 },
    {    151,     40,    110 },
    {    178,     40,     58 },
    {     58,     40,     34 },
    {    187,     40,      0 },
    {    178,     40,    -58 },
    {    151,     40,   -110 },
    {    110,     40,   -151 },
    {     58,     40,   -178 },
    {     58,     40,    -34 },
    {    153,     10,    -34 },
    {    153,     10,     34 },
    {     63,     40,    112 },
    {     63,     52,    112 },
    {    112,     52,     63 },
    {    112,     40,     63 },
    {     88,    160,    137 },
    {     88,     40,    137 },
    {     63,    160,    112 },
    {    137,     40,     88 },
    {    112,    160,     63 },
    {    137,    160,     88 },
    {     94,     52,    143 },
    {    143,     52,     94 },
    {     88,    160,   -137 },
    {     63,    160,   -112 },
    {     63,     40,   -112 },
    {     88,     40,   -137 },
    {    112,     40,    -63 },
    {    112,     52,    -63 },
    {     63,     52,   -112 },
    {    112,    160,    -63 },
    {    137,     40,    -88 },
    {    137,    160,    -88 },
    {    143,     52,    -94 },
    {     94,     52,   -143 },
    {     56,    120,   -152 },
    {     32,    120,   -152 },
    {     32,      0,   -152 },
    {     56,      0,   -152 },
    {     32,    120,   -200 },
    {     32,      0,   -200 },
    {    -48,    120,   -156 },
    {   -170,    120,    -53 },
    {   -170,      0,    -53 },
    {    -48,      0,   -156 },
    {    -25,      0,   -171 },
    {    -26,    120,   -183 },
    {    -25,    120,   -171 },
    {    -55,      0,   -149 },
    {    -46,      0,   -143 },
    {    -46,    120,   -143 },
    {    -55,    120,   -149 },
    {    -34,      0,   -143 },
    {    -34,    120,   -143 },
    {    -25,      0,   -149 },
    {    -25,    120,   -149 },
    {    -22,      0,   -160 },
    {    -22,    120,   -160 },
};

CollisionHeader kokiri_home3_sceneCollisionHeader_001774 = { 
    { -188, 0, -340 },
    { 187, 240, 187 },
    ARRAY_COUNT(kokiri_home3_sceneCollisionHeader_001774Vertices), kokiri_home3_sceneCollisionHeader_001774Vertices,
    ARRAY_COUNT(kokiri_home3_sceneCollisionHeader_001774Polygons), kokiri_home3_sceneCollisionHeader_001774Polygons,
    kokiri_home3_sceneCollisionHeader_001774SurfaceType,
    kokiri_home3_sceneCollisionHeader_001774CamDataList,
    0, NULL
};

