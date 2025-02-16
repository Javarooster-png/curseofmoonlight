#ifndef Z64SCENE_H
#define Z64SCENE_H

#include "z64.h"
#include "z64dma.h" // for RomFile

#include "command_macros_base.h"

typedef struct {
    /* 0x00 */ RomFile sceneFile;
    /* 0x08 */ RomFile titleFile;
    /* 0x10 */ u8  unk_10;
    /* 0x11 */ u8  drawConfig;
    /* 0x12 */ u8  unk_12;
    /* 0x13 */ u8  unk_13;
} SceneTableEntry; // size = 0x14

typedef struct {
    /* 0x00 */ s16   id;
    /* 0x02 */ Vec3s pos;
    /* 0x08 */ Vec3s rot;
    /* 0x0E */ s16   params;
} ActorEntry; // size = 0x10

typedef struct {
    struct {
        s8 room;    // Room to switch to
        s8 bgCamIndex; // How the camera reacts during the transition. See `Camera_ChangeDoorCam`
    } /* 0x00 */ sides[2]; // 0 = front, 1 = back
    /* 0x04 */ s16   id;
    /* 0x06 */ Vec3s pos;
    /* 0x0C */ s16   rotY;
    /* 0x0E */ s16   params;
} TransitionActorEntry; // size = 0x10

typedef struct {
    /* 0x00 */ u8 playerEntryIndex;
    /* 0x01 */ u8 room;
} Spawn;

typedef struct {
    /* 0x00 */ u8 count; // number of points in the path
    /* 0x04 */ Vec3s* points; // Segment Address to the array of points
} Path; // size = 0x8

// Room shapes

typedef enum {
    /* 0 */ ROOM_SHAPE_TYPE_NORMAL,
    /* 1 */ ROOM_SHAPE_TYPE_IMAGE,
    /* 2 */ ROOM_SHAPE_TYPE_CULLABLE,
    /* 3 */ ROOM_SHAPE_TYPE_MAX
} RoomShapeType;

typedef struct {
    /* 0x00 */ u8 type;
} RoomShapeBase; // size = 0x01

typedef struct {
    /* 0x00 */ Gfx* opa;
    /* 0x04 */ Gfx* xlu;
} RoomShapeDListsEntry; // size = 0x08

typedef struct {
    /* 0x00 */ RoomShapeBase base;
    /* 0x01 */ u8 numEntries;
    /* 0x04 */ RoomShapeDListsEntry* entries;
    /* 0x08 */ RoomShapeDListsEntry* entriesEnd;
} RoomShapeNormal; // size = 0x0C

typedef enum {
    /* 1 */ ROOM_SHAPE_IMAGE_AMOUNT_SINGLE = 1,
    /* 2 */ ROOM_SHAPE_IMAGE_AMOUNT_MULTI
} RoomShapeImageAmountType;

typedef struct {
    /* 0x00 */ RoomShapeBase base;
    /* 0x01 */ u8    amountType; // RoomShapeImageAmountType
    /* 0x04 */ RoomShapeDListsEntry* entry;
} RoomShapeImageBase; // size = 0x08

typedef struct {
    /* 0x00 */ RoomShapeImageBase base;
    /* 0x08 */ void* source;
    /* 0x0C */ u32   unk_0C;
    /* 0x10 */ void* tlut;
    /* 0x14 */ u16   width;
    /* 0x16 */ u16   height;
    /* 0x18 */ u8    fmt;
    /* 0x19 */ u8    siz;
    /* 0x1A */ u16   tlutMode;
    /* 0x1C */ u16   tlutCount;
} RoomShapeImageSingle; // size = 0x20

typedef struct {
    /* 0x00 */ u16   unk_00;
    /* 0x02 */ u8    bgCamIndex; // for which bg cam index is this entry for
    /* 0x04 */ void* source;
    /* 0x08 */ u32   unk_0C;
    /* 0x0C */ void* tlut;
    /* 0x10 */ u16   width;
    /* 0x12 */ u16   height;
    /* 0x14 */ u8    fmt;
    /* 0x15 */ u8    siz;
    /* 0x16 */ u16   tlutMode;
    /* 0x18 */ u16   tlutCount;
} RoomShapeImageMultiBgEntry; // size = 0x1C

typedef struct {
    /* 0x00 */ RoomShapeImageBase base;
    /* 0x08 */ u8    numBackgrounds;
    /* 0x0C */ RoomShapeImageMultiBgEntry* backgrounds;
} RoomShapeImageMulti; // size = 0x10

typedef struct {
    /* 0x00 */ Vec3s boundsSphereCenter;
    /* 0x06 */ s16   boundsSphereRadius;
    /* 0x08 */ Gfx* opa;
    /* 0x0C */ Gfx* xlu;
} RoomShapeCullableEntry; // size = 0x10

#define ROOM_SHAPE_CULLABLE_MAX_ENTRIES 64

typedef struct {
    /* 0x00 */ RoomShapeBase base;
    /* 0x01 */ u8 numEntries;
    /* 0x04 */ RoomShapeCullableEntry* entries;
    /* 0x08 */ RoomShapeCullableEntry* entriesEnd;
} RoomShapeCullable; // size = 0x0C

typedef union {
    RoomShapeBase base;
    RoomShapeNormal normal;
    union {
        RoomShapeImageBase base;
        RoomShapeImageSingle single;
        RoomShapeImageMulti multi;
    } image;
    RoomShapeCullable cullable;
} RoomShape; // "Ground Shape"

#define ROOM_DRAW_OPA (1 << 0)
#define ROOM_DRAW_XLU (1 << 1)

// Scene commands

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  data1;
    /* 0x04 */ u32 data2;
} SCmdBase;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  length;
    /* 0x04 */ ActorEntry* data;
} SCmdPlayerEntryList;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  length;
    /* 0x04 */ ActorEntry* data;
} SCmdActorEntryList;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  data1;
    /* 0x04 */ void* segment;
} SCmdUnused02;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  data1;
    /* 0x04 */ CollisionHeader* data;
} SCmdColHeader;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  length;
    /* 0x04 */ RomFile* data;
} SCmdRoomList;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  data1;
    /* 0x02 */ char pad[2];
    /* 0x04 */ u8  x;
    /* 0x05 */ u8  y;
    /* 0x06 */ u8  z;
    /* 0x07 */ u8  unk_07;
} SCmdWindSettings;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  data1;
    /* 0x04 */ Spawn* data;
} SCmdSpawnList;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  naviQuestHintFileId;
    /* 0x04 */ u32 keepObjectId;
} SCmdSpecialFiles;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  gpFlag1;
    /* 0x04 */ u32 gpFlag2;
} SCmdRoomBehavior;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  data1;
    /* 0x04 */ RoomShapeBase* data;
} SCmdMesh;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  length;
    /* 0x04 */ s16* data;
} SCmdObjectList;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  length;
    /* 0x04 */ LightInfo* data;
} SCmdLightList;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  data1;
    /* 0x04 */ Path* data;
} SCmdPathList;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  length;
    /* 0x04 */ TransitionActorEntry* data;
} SCmdTransiActorList;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  length;
    /* 0x04 */ EnvLightSettings* data;
} SCmdLightSettingList;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  data1;
    /* 0x02 */ char pad[2];
    /* 0x04 */ u8  hour;
    /* 0x05 */ u8  min;
    /* 0x06 */ u8  timeSpeed;
} SCmdTimeSettings;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  data1;
    /* 0x02 */ char pad[2];
    /* 0x04 */ u8  skyboxId;
    /* 0x05 */ u8  skyboxConfig;
    /* 0x06 */ u8  envLightMode;
} SCmdSkyboxSettings;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  data1;
    /* 0x02 */ char pad[2];
    /* 0x04 */ u8  skyboxDisabled;
    /* 0x05 */ u8  sunMoonDisabled;
} SCmdSkyboxDisables;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  data1;
    /* 0x04 */ u32 data2;
} SCmdEndMarker;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  data1;
    /* 0x04 */ s16* data;
} SCmdExitList;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  specId;
    /* 0x02 */ char pad[4];
    /* 0x06 */ u8  natureAmbienceId;
    /* 0x07 */ u8  seqId;
} SCmdSoundSettings;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  data1;
    /* 0x02 */ char pad[5];
    /* 0x07 */ u8  echo;
} SCmdEchoSettings;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  data1;
    /* 0x04 */ void* data;
} SCmdCutsceneData;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  data1;
    /* 0x04 */ void* data;
} SCmdAltHeaders;

typedef struct {
    /* 0x00 */ u8  code;
    /* 0x01 */ u8  sceneCamType;
    /* 0x04 */ u32 area;
} SCmdMiscSettings;

typedef union {
    SCmdBase              base;
    SCmdPlayerEntryList   playerEntryList;
    SCmdActorEntryList    actorEntryList;
    SCmdUnused02          unused02;
    SCmdRoomList          roomList;
    SCmdSpawnList         spawnList;
    SCmdObjectList        objectList;
    SCmdLightList         lightList;
    SCmdPathList          pathList;
    SCmdTransiActorList   transiActorList;
    SCmdLightSettingList  lightSettingList;
    SCmdExitList          exitList;
    SCmdColHeader         colHeader;
    SCmdMesh              mesh;
    SCmdSpecialFiles      specialFiles;
    SCmdCutsceneData      cutsceneData;
    SCmdRoomBehavior      roomBehavior;
    SCmdWindSettings      windSettings;
    SCmdTimeSettings      timeSettings;
    SCmdSkyboxSettings    skyboxSettings;
    SCmdSkyboxDisables    skyboxDisables;
    SCmdEndMarker         endMarker;
    SCmdSoundSettings     soundSettings;
    SCmdEchoSettings      echoSettings;
    SCmdMiscSettings      miscSettings;
    SCmdAltHeaders        altHeaders;
} SceneCmd; // size = 0x8

#define DEFINE_SCENE(_0, _1, enum, _3, _4, _5) enum,

typedef enum {
    #include "tables/scene_table.h"
    SCENE_TEST01,
    SCENE_BESITU,
    SCENE_DEPTH_TEST,
    SCENE_SYOTES,
    SCENE_SYOTES2,
    SCENE_SUTARU,
    SCENE_HAIRAL_NIWA2,
    SCENE_SASATEST,
    SCENE_TESTROOM,
    SCENE_OUTSIDE_GANONS_CASTLE,
    SCENE_LON_LON_RANCH,
    SCENE_GORON_CITY,
    SCENE_DEATH_MOUNTAIN_TRAIL,
    SCENE_DEATH_MOUNTAIN_CRATER,
    SCENE_HYRULE_CASTLE,
    SCENE_HAUNTED_WASTELAND,
    SCENE_GERUDOS_FORTRESS,
    SCENE_DESERT_COLOSSUS,
    SCENE_KOKIRI_FOREST,
    SCENE_LOST_WOODS,
    SCENE_GERUDO_VALLEY,
    SCENE_ZORAS_FOUNTAIN,
    SCENE_ZORAS_DOMAIN,
    SCENE_LAKE_HYLIA,
    SCENE_SACRED_FOREST_MEADOW,
    SCENE_ZORAS_RIVER,
    SCENE_HOUSE_OF_SKULLTULA,
    SCENE_GANON_BOSS,
    SCENE_MARKET_GUARD_HOUSE,
    SCENE_POTION_SHOP_GRANNY,
    SCENE_LON_LON_BUILDINGS,
    SCENE_BOMBCHU_BOWLING_ALLEY,
    SCENE_CASTLE_COURTYARD_ZELDA,
    SCENE_FISHING_POND,
    SCENE_WINDMILL_AND_DAMPES_GRAVE,
    SCENE_CASTLE_COURTYARD_GUARDS_NIGHT,
    SCENE_CASTLE_COURTYARD_GUARDS_DAY,
    SCENE_CHAMBER_OF_THE_SAGES,
    SCENE_DEKU_TREE,
    SCENE_DODONGOS_CAVERN,
    SCENE_JABU_JABU,
    SCENE_FOREST_TEMPLE,
    SCENE_FIRE_TEMPLE,
    SCENE_WATER_TEMPLE,
    SCENE_SPIRIT_TEMPLE,
    SCENE_SHADOW_TEMPLE_AND_WELL,
    SCENE_BOTTOM_OF_THE_WELL,
    SCENE_ICE_CAVERN,
    SCENE_GANONS_TOWER,
    SCENE_GERUDO_TRAINING_GROUND,
    SCENE_THIEVES_HIDEOUT,
    SCENE_INSIDE_GANONS_CASTLE,
    SCENE_GANONS_TOWER_COLLAPSE_INTERIOR,
    SCENE_INSIDE_GANONS_CASTLE_COLLAPSE,
    SCENE_TREASURE_BOX_SHOP,
    SCENE_DEKU_TREE_BOSS,
    SCENE_DODONGOS_CAVERN_BOSS,
    SCENE_JABU_JABU_BOSS,
    SCENE_FOREST_TEMPLE_BOSS,
    SCENE_FIRE_TEMPLE_BOSS,
    SCENE_WATER_TEMPLE_BOSS,
    SCENE_SPIRIT_TEMPLE_BOSS,
    SCENE_GANONDORF_BOSS,
    SCENE_GANONS_TOWER_COLLAPSE_EXTERIOR,
    SCENE_MARKET_ENTRANCE_DAY,
    SCENE_MARKET_ENTRANCE_NIGHT,
    SCENE_MARKET_ENTRANCE_RUINS,
    SCENE_BACK_ALLEY_DAY,
    SCENE_BACK_ALLEY_NIGHT,
    SCENE_MARKET_DAY,
    SCENE_MARKET_NIGHT,
    SCENE_MARKET_RUINS,
    SCENE_TEMPLE_OF_TIME_EXTERIOR_DAY,
    SCENE_TEMPLE_OF_TIME_EXTERIOR_NIGHT,
    SCENE_TEMPLE_OF_TIME_EXTERIOR_RUINS,
    SCENE_KNOW_IT_ALL_BROS_HOUSE,
    SCENE_TWINS_HOUSE,
    SCENE_MIDOS_HOUSE,
    SCENE_SARIAS_HOUSE,
    SCENE_KAKARIKO_CENTER_GUEST_HOUSE,
    SCENE_BACK_ALLEY_HOUSE,
    SCENE_POTION_SHOP_KAKARIKO,
    SCENE_POTION_SHOP_MARKET,
    SCENE_BOMBCHU_SHOP,
    SCENE_HAPPY_MASK_SHOP,
    SCENE_LINKS_HOUSE,
    SCENE_DOG_LADY_HOUSE,
    SCENE_STABLE,
    SCENE_IMPAS_HOUSE,
    SCENE_LAKESIDE_LABORATORY,
    SCENE_CARPENTERS_TENT,
    SCENE_GRAVEKEEPERS_HUT,
    SCENE_GROTTOS,
    SCENE_REDEAD_GRAVE,
    SCENE_GRAVE_WITH_FAIRYS_FOUNTAIN,
    SCENE_ROYAL_FAMILYS_TOMB,
    SCENE_SHOOTING_GALLERY,
    SCENE_TEMPLE_OF_TIME,
    SCENE_ID_MAX
} SceneID;

#undef DEFINE_SCENE

// this define exists to preserve shiftability for an unused scene that is
// listed in the entrance table
#define SCENE_UNUSED_6E SCENE_ID_MAX

// Entrance Index Enum
#define DEFINE_ENTRANCE(enum, _1, _2, _3, _4, _5, _6) enum,

typedef enum {
    #include "tables/entrance_table.h"
    /* 0x614 */ ENTR_MAX
} EntranceIndex;

#undef DEFINE_ENTRANCE

#define ENTR_LOAD_OPENING -1

typedef enum {
    /* 0x7FF9 */ ENTR_RETURN_GREAT_FAIRYS_FOUNTAIN_SPELLS = 0x7FF9,
    /* 0x7FFA */ ENTR_RETURN_SHOOTING_GALLERY,
    /* 0x7FFB */ ENTR_RETURN_2, // unused
    /* 0x7FFC */ ENTR_RETURN_BAZAAR,
    /* 0x7FFD */ ENTR_RETURN_4, // unused
    /* 0x7FFE */ ENTR_RETURN_GREAT_FAIRYS_FOUNTAIN_MAGIC,
    /* 0x7FFF */ ENTR_RETURN_GROTTO // Grottos and normal Fairy Fountain
} ReturnEntranceIndex;

typedef enum {
    /*  0 */ SDC_DEFAULT,
    /*  1 */ SDC_HYRULE_FIELD,
    /*  2 */ SDC_KAKARIKO_VILLAGE,
    /*  3 */ SDC_ZORAS_RIVER,
    /*  4 */ SDC_KOKIRI_FOREST,
    /*  5 */ SDC_LAKE_HYLIA,
    /*  6 */ SDC_ZORAS_DOMAIN,
    /*  7 */ SDC_ZORAS_FOUNTAIN,
    /*  8 */ SDC_GERUDO_VALLEY,
    /*  9 */ SDC_LOST_WOODS,
    /* 10 */ SDC_DESERT_COLOSSUS,
    /* 11 */ SDC_GERUDOS_FORTRESS,
    /* 12 */ SDC_HAUNTED_WASTELAND,
    /* 13 */ SDC_HYRULE_CASTLE,
    /* 14 */ SDC_DEATH_MOUNTAIN_TRAIL,
    /* 15 */ SDC_DEATH_MOUNTAIN_CRATER,
    /* 16 */ SDC_GORON_CITY,
    /* 17 */ SDC_LON_LON_RANCH,
    /* 18 */ SDC_FIRE_TEMPLE,
    /* 19 */ SDC_DEKU_TREE,
    /* 20 */ SDC_DODONGOS_CAVERN,
    /* 21 */ SDC_JABU_JABU,
    /* 22 */ SDC_FOREST_TEMPLE,
    /* 23 */ SDC_WATER_TEMPLE,
    /* 24 */ SDC_SHADOW_TEMPLE_AND_WELL,
    /* 25 */ SDC_SPIRIT_TEMPLE,
    /* 26 */ SDC_INSIDE_GANONS_CASTLE,
    /* 27 */ SDC_GERUDO_TRAINING_GROUND,
    /* 28 */ SDC_DEKU_TREE_BOSS,
    /* 29 */ SDC_WATER_TEMPLE_BOSS,
    /* 30 */ SDC_TEMPLE_OF_TIME,
    /* 31 */ SDC_GROTTOS,
    /* 32 */ SDC_CHAMBER_OF_THE_SAGES,
    /* 33 */ SDC_GREAT_FAIRYS_FOUNTAIN,
    /* 34 */ SDC_SHOOTING_GALLERY,
    /* 35 */ SDC_CASTLE_COURTYARD_GUARDS,
    /* 36 */ SDC_OUTSIDE_GANONS_CASTLE,
    /* 37 */ SDC_ICE_CAVERN,
    /* 38 */ SDC_GANONS_TOWER_COLLAPSE_EXTERIOR,
    /* 39 */ SDC_FAIRYS_FOUNTAIN,
    /* 40 */ SDC_THIEVES_HIDEOUT,
    /* 41 */ SDC_BOMBCHU_BOWLING_ALLEY,
    /* 42 */ SDC_ROYAL_FAMILYS_TOMB,
    /* 43 */ SDC_LAKESIDE_LABORATORY,
    /* 44 */ SDC_LON_LON_BUILDINGS,
    /* 45 */ SDC_MARKET_GUARD_HOUSE,
    /* 46 */ SDC_POTION_SHOP_GRANNY,
    /* 47 */ SDC_CALM_WATER,
    /* 48 */ SDC_GRAVE_EXIT_LIGHT_SHINING,
    /* 49 */ SDC_BESITU,
    /* 50 */ SDC_FISHING_POND,
    /* 51 */ SDC_GANONS_TOWER_COLLAPSE_INTERIOR,
    /* 52 */ SDC_INSIDE_GANONS_CASTLE_COLLAPSE,
    /* 53 */ SDC_MAX
} SceneDrawConfig;

// R_SCENE_CAM_TYPE values
#define SCENE_CAM_TYPE_DEFAULT 0
#define SCENE_CAM_TYPE_FIXED_SHOP_VIEWPOINT 0x10 // Camera exhibits fixed behaviors and viewpoint changing is handled by shops
#define SCENE_CAM_TYPE_FIXED_TOGGLE_VIEWPOINT 0x20 // Camera exhibits fixed behaviors and viewpoint can be toggled with c-up
#define SCENE_CAM_TYPE_FIXED 0x30 // Camera exhibits fixed behaviors (see `Play_CamIsNotFixed` usages for examples)
#define SCENE_CAM_TYPE_FIXED_MARKET 0x40 // Camera exhibits fixed behaviors and delays textboxes by a small amount before they start to appear
#define SCENE_CAM_TYPE_SHOOTING_GALLERY 0x50 // Unreferenced in code, and used only by the main layer of the shooting gallery scene

// navi hints
typedef enum {
    NAVI_QUEST_HINTS_NONE,
    NAVI_QUEST_HINTS_OVERWORLD,
    NAVI_QUEST_HINTS_DUNGEON
} NaviQuestHintFileId;

// Scene commands

typedef enum {
    /* 0x00 */ SCENE_CMD_ID_SPAWN_LIST,
    /* 0x01 */ SCENE_CMD_ID_ACTOR_LIST,
    /* 0x02 */ SCENE_CMD_ID_UNUSED_2,
    /* 0x03 */ SCENE_CMD_ID_COLLISION_HEADER,
    /* 0x04 */ SCENE_CMD_ID_ROOM_LIST,
    /* 0x05 */ SCENE_CMD_ID_WIND_SETTINGS,
    /* 0x06 */ SCENE_CMD_ID_ENTRANCE_LIST,
    /* 0x07 */ SCENE_CMD_ID_SPECIAL_FILES,
    /* 0x08 */ SCENE_CMD_ID_ROOM_BEHAVIOR,
    /* 0x09 */ SCENE_CMD_ID_UNDEFINED_9,
    /* 0x0A */ SCENE_CMD_ID_ROOM_SHAPE,
    /* 0x0B */ SCENE_CMD_ID_OBJECT_LIST,
    /* 0x0C */ SCENE_CMD_ID_LIGHT_LIST,
    /* 0x0D */ SCENE_CMD_ID_PATH_LIST,
    /* 0x0E */ SCENE_CMD_ID_TRANSITION_ACTOR_LIST,
    /* 0x0F */ SCENE_CMD_ID_LIGHT_SETTINGS_LIST,
    /* 0x10 */ SCENE_CMD_ID_TIME_SETTINGS,
    /* 0x11 */ SCENE_CMD_ID_SKYBOX_SETTINGS,
    /* 0x12 */ SCENE_CMD_ID_SKYBOX_DISABLES,
    /* 0x13 */ SCENE_CMD_ID_EXIT_LIST,
    /* 0x14 */ SCENE_CMD_ID_END,
    /* 0x15 */ SCENE_CMD_ID_SOUND_SETTINGS,
    /* 0x16 */ SCENE_CMD_ID_ECHO_SETTINGS,
    /* 0x17 */ SCENE_CMD_ID_CUTSCENE_DATA,
    /* 0x18 */ SCENE_CMD_ID_ALTERNATE_HEADER_LIST,
    /* 0x19 */ SCENE_CMD_ID_MISC_SETTINGS,
    /* 0x1A */ SCENE_CMD_ID_MAX
} SceneCommandTypeID;

#define SCENE_CMD_SPAWN_LIST(numSpawns, spawnList) \
    { SCENE_CMD_ID_SPAWN_LIST, numSpawns, CMD_PTR(spawnList) }

#define SCENE_CMD_ACTOR_LIST(numActors, actorList) \
    { SCENE_CMD_ID_ACTOR_LIST, numActors, CMD_PTR(actorList) }

#define SCENE_CMD_UNUSED_02(unk, data) \
    { SCENE_CMD_ID_UNUSED_2, unk, CMD_PTR(data) }

#define SCENE_CMD_COL_HEADER(colHeader) \
    { SCENE_CMD_ID_COLLISION_HEADER, 0, CMD_PTR(colHeader) }

#define SCENE_CMD_ROOM_LIST(numRooms, roomList) \
    { SCENE_CMD_ID_ROOM_LIST, numRooms, CMD_PTR(roomList) }

#define SCENE_CMD_WIND_SETTINGS(xDir, yDir, zDir, strength) \
    { SCENE_CMD_ID_WIND_SETTINGS, 0, CMD_BBBB(xDir, yDir, zDir, strength) }

#define SCENE_CMD_ENTRANCE_LIST(entranceList) \
    { SCENE_CMD_ID_ENTRANCE_LIST, 0, CMD_PTR(entranceList) }

#define SCENE_CMD_SPECIAL_FILES(naviQuestHintFileId, keepObjectId) \
    { SCENE_CMD_ID_SPECIAL_FILES, naviQuestHintFileId, CMD_W(keepObjectId) }

#define SCENE_CMD_ROOM_BEHAVIOR(curRoomUnk3, curRoomUnk2, showInvisActors, disableWarpSongs) \
    { SCENE_CMD_ID_ROOM_BEHAVIOR, curRoomUnk3, \
        curRoomUnk2 | _SHIFTL(showInvisActors, 8, 1) | _SHIFTL(disableWarpSongs, 10, 1) }

#define SCENE_CMD_UNK_09() \
    { SCENE_CMD_ID_UNDEFINED_9, 0, CMD_W(0) }

#define SCENE_CMD_ROOM_SHAPE(roomShape) \
    { SCENE_CMD_ID_ROOM_SHAPE, 0, CMD_PTR(roomShape) }

#define SCENE_CMD_OBJECT_LIST(numObjects, objectList) \
    { SCENE_CMD_ID_OBJECT_LIST, numObjects, CMD_PTR(objectList) }

#define SCENE_CMD_LIGHT_LIST(numLights, lightList) \
    { SCENE_CMD_ID_POS_LIGHT_LIST, numLights, CMD_PTR(lightList) }

#define SCENE_CMD_PATH_LIST(pathList) \
    { SCENE_CMD_ID_PATH_LIST, 0, CMD_PTR(pathList) }

#define SCENE_CMD_TRANSITION_ACTOR_LIST(numActors, list) \
    { SCENE_CMD_ID_TRANSITION_ACTOR_LIST, numActors, CMD_PTR(list) }

#define SCENE_CMD_ENV_LIGHT_SETTINGS(numLightSettings, lightSettingsList) \
    { SCENE_CMD_ID_LIGHT_SETTINGS_LIST, numLightSettings, CMD_PTR(lightSettingsList) }

#define SCENE_CMD_TIME_SETTINGS(hour, min, timeSpeed) \
    { SCENE_CMD_ID_TIME_SETTINGS, 0, CMD_BBBB(hour, min, timeSpeed, 0) }

#define SCENE_CMD_SKYBOX_SETTINGS(skyboxId, skyboxConfig, envLightMode) \
    { SCENE_CMD_ID_SKYBOX_SETTINGS, 0, CMD_BBBB(skyboxId, skyboxConfig, envLightMode, 0) }

#define SCENE_CMD_SKYBOX_DISABLES(disableSky, disableSunMoon) \
    { SCENE_CMD_ID_SKYBOX_DISABLES, 0, CMD_BBBB(disableSky, disableSunMoon, 0, 0) }

#define SCENE_CMD_EXIT_LIST(exitList) \
    { SCENE_CMD_ID_EXIT_LIST, 0, CMD_PTR(exitList) }

#define SCENE_CMD_END() \
    { SCENE_CMD_ID_END, 0, CMD_W(0) }

#define SCENE_CMD_SOUND_SETTINGS(specId, natureAmbienceId, seqId) \
    { SCENE_CMD_ID_SOUND_SETTINGS, specId, CMD_BBBB(0, 0, natureAmbienceId, seqId) }

#define SCENE_CMD_ECHO_SETTINGS(echo) \
    { SCENE_CMD_ID_ECHO_SETTINGS, 0, CMD_BBBB(0, 0, 0, echo) }

#define SCENE_CMD_CUTSCENE_DATA(cutsceneData) \
    { SCENE_CMD_ID_CUTSCENE_DATA, 0, CMD_PTR(cutsceneData) }

#define SCENE_CMD_ALTERNATE_HEADER_LIST(alternateHeaderList) \
    { SCENE_CMD_ID_ALTERNATE_HEADER_LIST, 0, CMD_PTR(alternateHeaderList) }

#define SCENE_CMD_MISC_SETTINGS(sceneCamType, worldMapLocation) \
    { SCENE_CMD_ID_MISC_SETTINGS, sceneCamType, CMD_W(worldMapLocation) }


#endif
