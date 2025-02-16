#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "spot04_room_0.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "spot04_scene.h"
#include "spot04_room_1.h"
#include "spot04_room_2.h"

SceneCmd spot04_room_0Commands[] = {
    SCENE_CMD_ALTERNATE_HEADER_LIST(spot04_room_0AlternateHeaders0x000048),
    SCENE_CMD_ECHO_SETTINGS(1),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&spot04_room_0RoomShapeCullable_000580),
    SCENE_CMD_OBJECT_LIST(11, spot04_room_0ObjectList_00007C),
    SCENE_CMD_ACTOR_LIST(78, spot04_room_0ActorEntry_000094),
    SCENE_CMD_END(),
};

SceneCmd* spot04_room_0AlternateHeaders0x000048[] = {
    NULL,
    spot04_room_0Set_0006B0,
    spot04_room_0Set_000940,
    spot04_room_0Set_000BA0,
    spot04_room_0Set_000BD0,
    spot04_room_0Set_000C00,
    spot04_room_0Set_000C30,
    spot04_room_0Set_000E60,
    spot04_room_0Set_000ED0,
    spot04_room_0Set_000F40,
    spot04_room_0Set_000F80,
    spot04_room_0Set_0011F0,
    spot04_room_0Set_001240,
};

s16 spot04_room_0ObjectList_00007C[] = {
    OBJECT_KANBAN,
    OBJECT_GS,
    OBJECT_MAMENOKI,
    OBJECT_KM1,
    OBJECT_KW1,
    OBJECT_OS_ANIME,
    OBJECT_MD,
    OBJECT_SA,
    OBJECT_GI_HEART,
    OBJECT_ST,
    OBJECT_FA,
};

ActorEntry spot04_room_0ActorEntry_000094[] = {
    { ACTOR_EN_RIVER_SOUND,  {    398,    -29,   -483 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_EN_ITEM00,       {   -537,      1,    194 }, {      0,      0,   0XB6 }, 0x2400 },
    { ACTOR_EN_ITEM00,       {   -459,      1,    181 }, {      0,      0,      0 }, 0x2700 },
    { ACTOR_EN_ITEM00,       {     35,      1,   -418 }, {      0,      0,      0 }, 0x2500 },
    { ACTOR_EN_ITEM00,       {    107,      1,   -418 }, {      0,      0,      0 }, 0x2600 },
    { ACTOR_EN_ITEM00,       {   -364,     53,   -783 }, {      0,      0,      0 }, 0x1201 },
    { ACTOR_EN_ITEM00,       {      2,    180,    -45 }, {      0,      0,      0 }, 0x1101 },
    { ACTOR_OBJECT_KANKYO,   {    355,      1,   -150 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_KO,           {   -292,      0,   -430 }, {      0,      0,      0 }, 0xFF00 },
    { ACTOR_EN_KO,           {     45,      0,   -272 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KO,           {   -608,    120,   1022 }, {      0, 0XA000,      0 }, 0xFF02 },
    { ACTOR_EN_KO,           {  -1472,    -80,   -294 }, {      0, 0X4000,      0 }, 0x0003 },
    { ACTOR_EN_KO,           {    669,      0,    521 }, {      0, 0X871C,      0 }, 0xFF04 },
    { ACTOR_EN_KO,           {    853,    100,   -311 }, {      0,      0,      0 }, 0xFF05 },
    { ACTOR_EN_KO,           {   -678,      1,   -179 }, {      0, 0X3777,      0 }, 0xFF06 },
    { ACTOR_EN_GS,           {   -622,    380,  -1223 }, {      0, 0X4000,      0 }, 0x381E },
    { ACTOR_EN_KO,           {    -10,    180,    -22 }, {      0, 0X305B,      0 }, 0xFF0C },
    { ACTOR_EN_MD,           {   1522,      0,    105 }, {      0, 0XBBBC,      0 }, 0x0100 },
    { ACTOR_DOOR_ANA,        {   -512,    380,  -1224 }, {      0, 0X4000,      0 }, 0x012C },
    { ACTOR_EN_ITEM00,       {    451,    200,    810 }, {      0,      0,      0 }, 0x1C03 },
    { ACTOR_EN_ITEM00,       {    509,    205,    725 }, {      0,      0,      0 }, 0x1E03 },
    { ACTOR_EN_ITEM00,       {    567,    212,    819 }, {      0,      0,      0 }, 0x1D03 },
    { ACTOR_EN_A_OBJ,        {  -1008,    120,    479 }, {      0, 0X5C72,      0 }, 0x3D0A },
    { ACTOR_EN_A_OBJ,        {   -924,    120,    928 }, {      0, 0X349F,      0 }, 0x430A },
    { ACTOR_EN_A_OBJ,        {   -779,    121,    424 }, {      0, 0XCAAB,      0 }, 0x100A },
    { ACTOR_EN_A_OBJ,        {   -512,      0,   -459 }, {      0, 0X1A50,      0 }, 0x3C0A },
    { ACTOR_EN_A_OBJ,        {   -170,    380,  -1335 }, {      0, 0X6B61,      0 }, 0x140A },
    { ACTOR_EN_A_OBJ,        {    436,      0,    601 }, {      0, 0XDA50,      0 }, 0x3F0A },
    { ACTOR_EN_A_OBJ,        {    728,      0,   -195 }, {      0, 0X1C72,      0 }, 0x1E0A },
    { ACTOR_EN_A_OBJ,        {   1089,      0,    473 }, {      0, 0XAAAB,      0 }, 0x3E0A },
    { ACTOR_EN_SW,           {  -1307,    153,    401 }, {      0, 0XCD83,      0 }, 0xAD02 },
    { ACTOR_OBJ_MAKEKINSUTA, {   1190,      0,   -480 }, {      0,      0,      0 }, 0x4D01 },
    { ACTOR_EN_WONDER_ITEM,  {   -488,    140,    600 }, {      0, 0XB27D,      0 }, 0x1A53 },
    { ACTOR_EN_WONDER_ITEM,  {   1074,      0,    178 }, {      0,      0,    0X2 }, 0x2A63 },
    { ACTOR_EN_WONDER_ITEM,  {   1069,      0,    406 }, {      0,      0,      0 }, 0x37E3 },
    { ACTOR_EN_WONDER_ITEM,  {   1074,      0,    -80 }, {      0,      0,    0X1 }, 0x37E3 },
    { ACTOR_EN_WONDER_ITEM,  {    188,      3,   -198 }, {      0,      0,    0X1 }, 0x0FE0 },
    { ACTOR_EN_WONDER_ITEM,  {    548,      3,   -158 }, {      0,      0,      0 }, 0x0FE0 },
    { ACTOR_EN_WONDER_ITEM,  {    364,      0,     28 }, {      0,      0,    0X2 }, 0x0260 },
    { ACTOR_EN_WONDER_ITEM,  {   -747,    165,    951 }, {      0,      0,    0X1 }, 0x1214 },
    { ACTOR_EN_WONDER_ITEM,  {   -698,    166,    830 }, {      0,      0,    0X1 }, 0x1215 },
    { ACTOR_EN_WONDER_ITEM,  {   -677,    166,    899 }, {      0,      0,    0X1 }, 0x1256 },
    { ACTOR_OBJ_HANA,        {   -915,    120,    872 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_OBJ_HANA,        {   -896,    120,    826 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_OBJ_HANA,        {   -584,    120,    963 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_OBJ_HANA,        {   -292,      0,   -415 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_EN_ISHI,         {  -1361,    120,    145 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_ISHI,         {   -672,      0,   -623 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_ISHI,         {    248,      0,    601 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_ISHI,         {    726,      0,    961 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_OBJ_MURE2,       {   -292,      0,   -430 }, {      0,      0,      0 }, 0x0202 },
    { ACTOR_EN_KANBAN,       {  -1432,    -66,   -426 }, {      0, 0X4000,      0 }, 0x0320 },
    { ACTOR_EN_KANBAN,       {   -845,    120,   1018 }, {      0, 0X8000,      0 }, 0x0337 },
    { ACTOR_EN_KANBAN,       {   -784,    120,   1675 }, {      0, 0X8000,      0 }, 0x0340 },
    { ACTOR_EN_KANBAN,       {   -538,    120,    718 }, {      0, 0XB333,      0 }, 0x0338 },
    { ACTOR_EN_KANBAN,       {   -494,    120,    598 }, {      0, 0XB3E9,      0 }, 0x0336 },
    { ACTOR_EN_KANBAN,       {     49,    -80,    967 }, {      0, 0X8000,      0 }, 0x031F },
    { ACTOR_EN_KANBAN,       {    607,      0,    -80 }, {      0, 0X305B,      0 }, 0x0341 },
    { ACTOR_EN_KANBAN,       {    871,      0,    311 }, {      0, 0XC71C,      0 }, 0x0312 },
    { ACTOR_OBJ_HANA,        {    668,      0,    500 }, {      0,  0X71C,      0 }, 0x0002 },
    { ACTOR_EN_KUSA,         {   -835,    120,    605 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_KUSA,         {   -823,    120,    666 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_KUSA,         {   -757,    120,    708 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_KUSA,         {   -748,    120,    632 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_KUSA,         {   -671,    120,    671 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_KUSA,         {   -612,    120,    737 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_KUSA,         {   -523,    120,    771 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_KUSA,         {   -498,    120,    696 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_KUSA,         {    385,      0,    643 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_KUSA,         {    572,      0,    603 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_KUSA,         {    594,      0,    542 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_KUSA,         {    678,      0,    596 }, {      0,      0,      0 }, 0x0200 },
    { ACTOR_EN_SA,           {     18,    -80,    873 }, {      0, 0XE38E,      0 }, 0x0000 },
    { ACTOR_OBJ_BEAN,        {   1190,      0,   -480 }, {      0,      0,      0 }, 0x1F09 },
    { ACTOR_EN_WONDER_TALK2, {    861,     34,   -340 }, {      0,      0,    0X3 }, 0x461F },
    { ACTOR_EN_WONDER_TALK2, {   -915,    130,    872 }, {      0, 0X2E39,      0 }, 0xFFFF },
    { ACTOR_EN_WONDER_TALK2, {   -896,    130,    826 }, {      0, 0X2E39,      0 }, 0xFFFF },
    { ACTOR_EN_WONDER_TALK2, {   -584,    130,    963 }, {      0, 0XB1C7,   0X28 }, 0xFFFF },
};

u8 spot04_room_0_possiblePadding_000574[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

RoomShapeCullable spot04_room_0RoomShapeCullable_000580 = { 
    2, 18,
    spot04_room_0RoomShapeCullableEntry_00058C,
    spot04_room_0RoomShapeCullableEntry_00058C + ARRAY_COUNTU(spot04_room_0RoomShapeCullableEntry_00058C)
};

RoomShapeCullableEntry spot04_room_0RoomShapeCullableEntry_00058C[18] = {
    { {   1134,    174,    603 },    307, spot04_room_0DL_008ED8, NULL },
    { {    -29,     60,    296 },   1207, NULL, spot04_room_0DL_0187F0 },
    { {    -11,    137,   1274 },    420, spot04_room_0DL_007A20, spot04_room_0DL_018490 },
    { {   -450,    149,   -663 },    217, spot04_room_0DL_008638, NULL },
    { {  -1132,    237,    729 },    755, spot04_room_0DL_00A080, NULL },
    { {    747,    131,    -60 },    831, NULL, spot04_room_0DL_017BD0 },
    { {    704,    306,    175 },   2570, spot04_room_0DL_004860, spot04_room_0DL_018048 },
    { {    615,    692,   -632 },   3590, spot04_room_0DL_00AE90, NULL },
    { {    677,    255,    135 },   2381, spot04_room_0DL_002A10, NULL },
    { {   -151,     14,   -117 },    577, spot04_room_0DL_005A80, NULL },
    { {   -604,    180,    803 },    446, spot04_room_0DL_00B280, NULL },
    { {    -80,    205,   -149 },   1378, spot04_room_0DL_00B8F8, spot04_room_0DL_0189A8 },
    { {   2026,    140,   -193 },    675, spot04_room_0DL_00BD98, NULL },
    { {  -1265,    250,  -1226 },   1459, spot04_room_0DL_006280, NULL },
    { {    276,     58,    -39 },    358, spot04_room_0DL_006C10, NULL },
    { {    503,    145,    784 },    283, spot04_room_0DL_009740, NULL },
    { {    817,     92,   -503 },    421, spot04_room_0DL_00A808, NULL },
    { {   3963,   1191,  -1473 },   1796, spot04_room_0DL_0055C0, NULL },
};

s32 spot04_room_0_terminatorMaybe_0006AC = { 0x01000000 };

SceneCmd spot04_room_0Set_0006B0[] = {
    SCENE_CMD_ECHO_SETTINGS(1),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&spot04_room_0RoomShapeCullable_000580),
    SCENE_CMD_OBJECT_LIST(7, spot04_room_0ObjectList_0006F0),
    SCENE_CMD_ACTOR_LIST(36, spot04_room_0ActorEntry_000700),
    SCENE_CMD_END(),
};

s16 spot04_room_0ObjectList_0006F0[] = {
    OBJECT_DEKUBABA,
    OBJECT_GS,
    OBJECT_KANBAN,
    OBJECT_ST,
    OBJECT_OKUTA,
    OBJECT_DEKUNUTS,
    OBJECT_MAMENOKI,
};

ActorEntry spot04_room_0ActorEntry_000700[] = {
    { ACTOR_OBJECT_KANKYO,  {    355,      1,   -150 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_OKUTA,       {    383,    -12,   -315 }, {      0,      0,      0 }, 0xFF00 },
    { ACTOR_EN_OKUTA,       {    968,    -12,     72 }, {      0,      0,      0 }, 0xFF00 },
    { ACTOR_EN_ST,          {   1836,    105,    135 }, {      0, 0XC000,      0 }, 0x0001 },
    { ACTOR_EN_DEKUNUTS,    {   -619,      1,   -200 }, {      0,      0,      0 }, 0xFF00 },
    { ACTOR_EN_DEKUNUTS,    {     62,      1,    258 }, {      0,      0,      0 }, 0xFF00 },
    { ACTOR_EN_DEKUNUTS,    {    370,    320,   -832 }, {      0,      0,      0 }, 0xFF00 },
    { ACTOR_EN_DEKUBABA,    {  -1164,    -47,   -119 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_EN_DEKUBABA,    {   -756,    120,    522 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_EN_DEKUBABA,    {   -154,    -80,    852 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_EN_DEKUBABA,    {   1427,      0,     94 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_OBJ_MURE3,      {   1304,    240,   -548 }, {      0,      0,      0 }, 0x40FF },
    { ACTOR_OBJ_BEAN,       {   1190,      0,   -480 }, {      0,      0,    0X1 }, 0x0009 },
    { ACTOR_DOOR_ANA,       {   -512,    380,  -1224 }, {      0, 0X4000,      0 }, 0x012C },
    { ACTOR_OBJ_MURE2,      {   -292,      0,   -430 }, {      0,      0,      0 }, 0x0702 },
    { ACTOR_EN_KUSA,        {   -867,    120,    674 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_KUSA,        {   -842,    120,    601 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_KUSA,        {   -822,    120,    644 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_KUSA,        {   -805,    120,    691 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_KUSA,        {   -785,    120,    611 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_KUSA,        {   -772,    120,    654 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_KUSA,        {   -523,    120,    771 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_KUSA,        {   -498,    120,    696 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_OBJ_MURE2,      {    797,      0,    643 }, {      0,      0,      0 }, 0x0701 },
    { ACTOR_EN_GS,          {   -622,    380,  -1223 }, {      0, 0X4000,      0 }, 0x381E },
    { ACTOR_EN_SW,          {   1153,    251,    625 }, { 0X4000, 0XE93F,      0 }, 0xAD04 },
    { ACTOR_EN_KANBAN,      {    871,      0,    311 }, {      0, 0XC71C,      0 }, 0x0312 },
    { ACTOR_EN_A_OBJ,       {    728,      0,   -195 }, {      0, 0X1C72,      0 }, 0x1E0A },
    { ACTOR_EN_KANBAN,      {     49,    -80,    967 }, {      0, 0X8000,      0 }, 0x031F },
    { ACTOR_EN_KANBAN,      {  -1432,    -66,   -426 }, {      0, 0X4000,      0 }, 0x0320 },
    { ACTOR_EN_A_OBJ,       {   -512,      0,   -459 }, {      0, 0X1A50,      0 }, 0x3C0A },
    { ACTOR_EN_A_OBJ,       {  -1008,    120,    479 }, {      0, 0X5C72,      0 }, 0x3D0A },
    { ACTOR_EN_A_OBJ,       {   1089,      0,    473 }, {      0, 0XAAAB,      0 }, 0x3E0A },
    { ACTOR_EN_A_OBJ,       {    436,      0,    601 }, {      0, 0XDA50,      0 }, 0x3F0A },
    { ACTOR_EN_KANBAN,      {    607,      0,    -80 }, {      0, 0X305B,      0 }, 0x0341 },
    { ACTOR_EN_RIVER_SOUND, {    398,    -29,   -483 }, {      0,      0,      0 }, 0x0001 },
};

SceneCmd spot04_room_0Set_000940[] = {
    SCENE_CMD_ECHO_SETTINGS(1),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&spot04_room_0RoomShapeCullable_000580),
    SCENE_CMD_OBJECT_LIST(7, spot04_room_0ObjectList_000980),
    SCENE_CMD_ACTOR_LIST(33, spot04_room_0ActorEntry_000990),
    SCENE_CMD_END(),
};

s16 spot04_room_0ObjectList_000980[] = {
    OBJECT_GS,
    OBJECT_KANBAN,
    OBJECT_MAMENOKI,
    OBJECT_KM1,
    OBJECT_KW1,
    OBJECT_OS_ANIME,
    OBJECT_ST,
};

ActorEntry spot04_room_0ActorEntry_000990[] = {
    { ACTOR_OBJECT_KANKYO,  {    355,      1,   -150 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_KO,          {   -292,      0,   -430 }, {      0,      0,      0 }, 0xFF00 },
    { ACTOR_EN_KO,          {     45,      0,   -272 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KO,          {   -608,    120,   1022 }, {      0, 0XA000,      0 }, 0xFF02 },
    { ACTOR_EN_KO,          {  -1415,    -74,   -108 }, {      0, 0X4000,      0 }, 0xFF03 },
    { ACTOR_EN_KO,          {    669,      0,    521 }, {      0, 0X871C,      0 }, 0xFF04 },
    { ACTOR_EN_KO,          {    853,    100,   -311 }, {      0,      0,      0 }, 0xFF05 },
    { ACTOR_EN_KO,          {   -678,      1,   -179 }, {      0, 0X3777,      0 }, 0xFF06 },
    { ACTOR_EN_GS,          {   -622,    380,  -1223 }, {      0, 0X4000,      0 }, 0x381E },
    { ACTOR_OBJ_MURE3,      {   1304,    240,   -548 }, {      0,      0,      0 }, 0x40FF },
    { ACTOR_DOOR_ANA,       {   -512,    380,  -1224 }, {      0, 0X4000,      0 }, 0x012C },
    { ACTOR_EN_A_OBJ,       {    728,      0,   -195 }, {      0, 0X1C72,      0 }, 0x1E0A },
    { ACTOR_EN_A_OBJ,       {   -512,      0,   -459 }, {      0, 0X1A50,      0 }, 0x3C0A },
    { ACTOR_EN_A_OBJ,       {  -1008,    120,    479 }, {      0, 0X5C72,      0 }, 0x3D0A },
    { ACTOR_EN_A_OBJ,       {   1089,      0,    473 }, {      0, 0XAAAB,      0 }, 0x3E0A },
    { ACTOR_EN_A_OBJ,       {    436,      0,    601 }, {      0, 0XDA50,      0 }, 0x3F0A },
    { ACTOR_EN_SW,          {   1153,    251,    625 }, { 0X4000, 0XE93F,      0 }, 0xAD04 },
    { ACTOR_OBJ_MURE2,      {   -292,      0,   -430 }, {      0,      0,      0 }, 0x0702 },
    { ACTOR_EN_KANBAN,      {    871,      0,    311 }, {      0, 0XC71C,      0 }, 0x0312 },
    { ACTOR_EN_KANBAN,      {     49,    -80,    967 }, {      0, 0X8000,      0 }, 0x031F },
    { ACTOR_EN_KANBAN,      {  -1432,    -66,   -426 }, {      0, 0X4000,      0 }, 0x0320 },
    { ACTOR_EN_KANBAN,      {    607,      0,    -80 }, {      0, 0X305B,      0 }, 0x0341 },
    { ACTOR_EN_KUSA,        {   -498,    120,    696 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_KUSA,        {   -523,    120,    771 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_KUSA,        {   -772,    120,    654 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_KUSA,        {   -785,    120,    611 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_KUSA,        {   -805,    120,    691 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_KUSA,        {   -822,    120,    644 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_KUSA,        {   -842,    120,    601 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_KUSA,        {   -867,    120,    674 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_OBJ_MURE2,      {    797,      0,    643 }, {      0,      0,      0 }, 0x0701 },
    { ACTOR_OBJ_BEAN,       {   1190,      0,   -480 }, {      0,      0,    0X1 }, 0x0009 },
    { ACTOR_EN_RIVER_SOUND, {    398,    -29,   -483 }, {      0,      0,      0 }, 0x0001 },
};

SceneCmd spot04_room_0Set_000BA0[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(12, 0, 0),
    SCENE_CMD_ROOM_SHAPE(&spot04_room_0RoomShapeCullable_000580),
    SCENE_CMD_END(),
};

SceneCmd spot04_room_0Set_000BD0[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(12, 0, 0),
    SCENE_CMD_ROOM_SHAPE(&spot04_room_0RoomShapeCullable_000580),
    SCENE_CMD_END(),
};

SceneCmd spot04_room_0Set_000C00[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(12, 0, 0),
    SCENE_CMD_ROOM_SHAPE(&spot04_room_0RoomShapeCullable_000580),
    SCENE_CMD_END(),
};

SceneCmd spot04_room_0Set_000C30[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(12, 0, 0),
    SCENE_CMD_ROOM_SHAPE(&spot04_room_0RoomShapeCullable_000580),
    SCENE_CMD_OBJECT_LIST(6, spot04_room_0ObjectList_000C70),
    SCENE_CMD_ACTOR_LIST(30, spot04_room_0ActorEntry_000C7C),
    SCENE_CMD_END(),
};

s16 spot04_room_0ObjectList_000C70[] = {
    OBJECT_SA,
    OBJECT_KM1,
    OBJECT_KW1,
    OBJECT_MD,
    OBJECT_OS_ANIME,
    OBJECT_KANBAN,
};

ActorEntry spot04_room_0ActorEntry_000C7C[] = {
    { ACTOR_OBJECT_KANKYO,  {    355,      1,   -150 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_KO,          {   -340,      0,   -414 }, {      0,      0,      0 }, 0xFF00 },
    { ACTOR_EN_KO,          {     62,      0,   -258 }, {      0,  0X666,      0 }, 0xFF01 },
    { ACTOR_EN_KO,          {   -641,    120,    454 }, {      0, 0X749F,      0 }, 0xFF02 },
    { ACTOR_EN_KO,          {  -1472,    -80,   -294 }, {      0, 0X4000,      0 }, 0x0003 },
    { ACTOR_EN_KO,          {    669,      0,    521 }, {      0, 0X871C,      0 }, 0xFF04 },
    { ACTOR_EN_KO,          {    853,    102,   -311 }, {      0,      0,      0 }, 0xFF05 },
    { ACTOR_EN_KO,          {   -638,      1,   -165 }, {      0, 0X62D8,      0 }, 0xFF06 },
    { ACTOR_EN_MD,          {   1522,      0,    105 }, {      0, 0XBBBC,      0 }, 0x0100 },
    { ACTOR_OBJ_MURE2,      {   -340,      0,   -414 }, {      0,      0,      0 }, 0xFF02 },
    { ACTOR_EN_KANBAN,      {   -423,    380,  -1354 }, {      0,      0,      0 }, 0x0310 },
    { ACTOR_EN_KANBAN,      {   -713,    121,    262 }, {      0, 0X76C1,      0 }, 0x0310 },
    { ACTOR_EN_KANBAN,      {   -809,    120,    647 }, {      0, 0X349F,      0 }, 0x0311 },
    { ACTOR_EN_KANBAN,      {    857,      0,    282 }, {      0, 0XC71C,      0 }, 0x0312 },
    { ACTOR_EN_KANBAN,      {    949,      0,   -223 }, {      0, 0XE5B0,      0 }, 0x031E },
    { ACTOR_EN_KANBAN,      {     49,    -80,    967 }, {      0, 0X8000,      0 }, 0x031F },
    { ACTOR_EN_KANBAN,      {  -1432,    -66,   -426 }, {      0, 0X4000,      0 }, 0x0320 },
    { ACTOR_EN_KANBAN,      {   -494,    120,    598 }, {      0, 0XB3E9,      0 }, 0x0336 },
    { ACTOR_EN_KANBAN,      {   -748,    120,    903 }, {      0, 0X7111,      0 }, 0x0338 },
    { ACTOR_EN_KANBAN,      {   -520,      0,   -476 }, {      0,      0,      0 }, 0x033C },
    { ACTOR_EN_KANBAN,      {  -1008,    120,    479 }, {      0, 0X5C72,      0 }, 0x033D },
    { ACTOR_EN_KANBAN,      {   1070,      0,    402 }, {      0, 0XAAAB,      0 }, 0x033E },
    { ACTOR_EN_KANBAN,      {    439,      0,    564 }, {      0, 0X8000,      0 }, 0x033F },
    { ACTOR_EN_KANBAN,      {    670,      0,   -158 }, {      0,      0,      0 }, 0x0341 },
    { ACTOR_OBJ_MURE2,      {    797,      0,    643 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_OBJ_MURE2,      {   -761,    120,    947 }, {      0,      0,      0 }, 0xFF00 },
    { ACTOR_OBJ_BEAN,       {   1186,      0,   -471 }, {      0,      0,      0 }, 0x1F09 },
    { ACTOR_ITEM_SHIELD,    {   -450,    215,   -555 }, {      0,  0X16C,      0 }, 0x0000 },
    { ACTOR_OBJ_HANA,       {   -340,      0,   -403 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_EN_RIVER_SOUND, {    402,    -12,   -491 }, {      0,      0,      0 }, 0x0001 },
};

u8 spot04_room_0_possiblePadding_000E5C[] = {
    0x00, 0x00, 0x00, 0x00, 
};

SceneCmd spot04_room_0Set_000E60[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 255),
    SCENE_CMD_ROOM_SHAPE(&spot04_room_0RoomShapeCullable_000580),
    SCENE_CMD_OBJECT_LIST(9, spot04_room_0ObjectList_000EA0),
    SCENE_CMD_ACTOR_LIST(1, spot04_room_0ActorEntry_000EB4),
    SCENE_CMD_END(),
};

s16 spot04_room_0ObjectList_000EA0[] = {
    OBJECT_SPOT04_OBJECTS,
    OBJECT_GI_JEWEL,
    OBJECT_MJIN,
    OBJECT_MJIN_OKA,
    OBJECT_SA,
    OBJECT_KM1,
    OBJECT_KW1,
    OBJECT_MD,
    OBJECT_OS_ANIME,
};

ActorEntry spot04_room_0ActorEntry_000EB4[] = {
    { ACTOR_BG_TREEMOUTH, {   3882,   -171,  -1161 }, {      0,      0,      0 }, 0xFFFF },
};

u8 spot04_room_0_possiblePadding_000EC4[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

SceneCmd spot04_room_0Set_000ED0[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 255),
    SCENE_CMD_ROOM_SHAPE(&spot04_room_0RoomShapeCullable_000580),
    SCENE_CMD_OBJECT_LIST(9, spot04_room_0ObjectList_000F10),
    SCENE_CMD_ACTOR_LIST(1, spot04_room_0ActorEntry_000F24),
    SCENE_CMD_END(),
};

s16 spot04_room_0ObjectList_000F10[] = {
    OBJECT_SPOT04_OBJECTS,
    OBJECT_GI_JEWEL,
    OBJECT_MJIN,
    OBJECT_MJIN_OKA,
    OBJECT_SA,
    OBJECT_KM1,
    OBJECT_KW1,
    OBJECT_MD,
    OBJECT_OS_ANIME,
};

ActorEntry spot04_room_0ActorEntry_000F24[] = {
    { ACTOR_BG_TREEMOUTH, {   3882,   -171,  -1161 }, {      0,      0,      0 }, 0xFFFF },
};

u8 spot04_room_0_possiblePadding_000F34[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

SceneCmd spot04_room_0Set_000F40[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 255),
    SCENE_CMD_ROOM_SHAPE(&spot04_room_0RoomShapeCullable_000580),
    SCENE_CMD_OBJECT_LIST(1, spot04_room_0ObjectList_000F78),
    SCENE_CMD_END(),
};

s16 spot04_room_0ObjectList_000F78[] = {
    OBJECT_SPOT04_OBJECTS,
};

u8 spot04_room_0_possiblePadding_000F7C[] = {
    0x00, 0x00, 0x00, 0x00, 
};

SceneCmd spot04_room_0Set_000F80[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 255),
    SCENE_CMD_ROOM_SHAPE(&spot04_room_0RoomShapeCullable_000580),
    SCENE_CMD_OBJECT_LIST(3, spot04_room_0ObjectList_000FC0),
    SCENE_CMD_ACTOR_LIST(34, spot04_room_0ActorEntry_000FC8),
    SCENE_CMD_END(),
};

s16 spot04_room_0ObjectList_000FC0[] = {
    OBJECT_SPOT04_OBJECTS,
    OBJECT_WOOD02,
    OBJECT_KANBAN,
};

ActorEntry spot04_room_0ActorEntry_000FC8[] = {
    { ACTOR_OBJECT_KANKYO, {    -29,      1,    216 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_ISHI,       {   -542,    126,    466 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_ISHI,       {    974,      0,    513 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_ISHI,       {    950,      0,    465 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_ISHI,       {    926,      0,    418 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_ISHI,       {   1048,      0,    476 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_ISHI,       {   1029,      0,    430 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_ISHI,       {   1008,      0,    389 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_OBJ_MURE2,     {    862,      0,    677 }, {      0,      0,      0 }, 0x0702 },
    { ACTOR_OBJ_MURE2,     {    646,      6,     53 }, {      0,      0,      0 }, 0x0702 },
    { ACTOR_OBJ_MURE2,     {   1249,      0,    442 }, {      0,      0,      0 }, 0x0702 },
    { ACTOR_OBJ_MURE2,     {   1074,      0,    865 }, {      0,      0,      0 }, 0x0702 },
    { ACTOR_OBJ_MURE2,     {   1298,      0,    711 }, {      0,      0,      0 }, 0x0702 },
    { ACTOR_EN_KANBAN,     {   -193,    380,  -1307 }, {      0,      0,      0 }, 0x0310 },
    { ACTOR_EN_KANBAN,     {   -617,      0,   -349 }, {      0, 0XD777,      0 }, 0x0311 },
    { ACTOR_EN_KANBAN,     {   -424,    120,    534 }, {      0, 0X85B0,      0 }, 0x0311 },
    { ACTOR_EN_KANBAN,     {   -977,    120,    319 }, {      0, 0X31C7,      0 }, 0x0311 },
    { ACTOR_EN_KANBAN,     {   1420,      0,     21 }, {      0, 0XCE39,      0 }, 0x0312 },
    { ACTOR_EN_KANBAN,     {    661,      0,   -101 }, {      0,      0,      0 }, 0x031E },
    { ACTOR_EN_KANBAN,     {    112,    -80,    780 }, {      0, 0XAAAB,      0 }, 0x031F },
    { ACTOR_EN_KANBAN,     {  -1432,    -66,   -426 }, {      0, 0X4000,      0 }, 0x0320 },
    { ACTOR_EN_KUSA,       {  -1020,    120,    455 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_KUSA,       {    450,      0,    617 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_KUSA,       {    563,      0,    612 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_KUSA,       {    393,      0,    593 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_EN_KUSA,       {    603,      0,    559 }, {      0,      0,      0 }, 0x0700 },
    { ACTOR_OBJ_MURE2,     {   1123,      0,   -345 }, {      0,      0,      0 }, 0x0701 },
    { ACTOR_OBJ_MURE2,     {   -220,      0,   -526 }, {      0,      0,      0 }, 0x0701 },
    { ACTOR_OBJ_MURE2,     {    265,      0,    735 }, {      0,      0,      0 }, 0x0701 },
    { ACTOR_OBJ_MURE2,     {   -291,    -80,   1163 }, {      0,      0,      0 }, 0x0701 },
    { ACTOR_OBJ_MURE2,     {    369,      0,    983 }, {      0,      0,      0 }, 0x0701 },
    { ACTOR_OBJ_MURE2,     {    679,      0,    980 }, {      0,      0,      0 }, 0x0701 },
    { ACTOR_OBJ_MURE2,     {    736,      0,    711 }, {      0,      0,      0 }, 0x0701 },
    { ACTOR_OBJ_MURE2,     {    444,    320,   -925 }, {      0,      0,      0 }, 0x0701 },
};

u8 spot04_room_0_possiblePadding_0011E8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

SceneCmd spot04_room_0Set_0011F0[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(12, 0, 0),
    SCENE_CMD_ROOM_SHAPE(&spot04_room_0RoomShapeCullable_000580),
    SCENE_CMD_OBJECT_LIST(5, spot04_room_0ObjectList_001228),
    SCENE_CMD_END(),
};

s16 spot04_room_0ObjectList_001228[] = {
    OBJECT_SPOT04_OBJECTS,
    OBJECT_OS_ANIME,
    OBJECT_KM1,
    OBJECT_KW1,
    OBJECT_KANBAN,
};

u8 spot04_room_0_possiblePadding_001234[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

SceneCmd spot04_room_0Set_001240[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 255),
    SCENE_CMD_ROOM_SHAPE(&spot04_room_0RoomShapeCullable_000580),
    SCENE_CMD_END(),
};

Vtx spot04_room_0Vtx_001270[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_001270.vtx.inc"
};

Gfx spot04_room_0DL_002A10[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_001270[370], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot04_sceneTex_00FA18, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(spot04_sceneTLUT_00E010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot04_room_0Vtx_001270, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_013108, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_001270[12], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 10, 9, 11, 0),
    gsSP2Triangles(4, 12, 5, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 15, 19, 13, 0),
    gsSP1Triangle(20, 21, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_sceneTex_00FA18, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_001270[35], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 14, 0),
    gsSP2Triangles(10, 12, 15, 0, 10, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 6, 20, 7, 0),
    gsSP2Triangles(21, 18, 17, 0, 6, 21, 22, 0),
    gsSP2Triangles(21, 17, 22, 0, 10, 16, 19, 0),
    gsSP1Triangle(19, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_012F08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_001270[58], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_sceneTex_00FA18, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_001270[62], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_012F08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_001270[65], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 4, 0),
    gsSP2Triangles(5, 4, 0, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 7, 5, 0, 8, 5, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_sceneTex_00FA18, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_001270[75], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 4, 0, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 2, 6, 5, 0),
    gsSP2Triangles(4, 2, 5, 0, 4, 5, 8, 0),
    gsSP2Triangles(9, 3, 8, 0, 3, 4, 8, 0),
    gsSP2Triangles(7, 6, 3, 0, 7, 3, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_013108, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_001270[85], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_012F08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_001270[93], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 5, 3, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 8, 6, 0),
    gsSP2Triangles(7, 9, 8, 0, 10, 9, 7, 0),
    gsSP2Triangles(10, 11, 9, 0, 12, 11, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_sceneTex_00FA18, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_001270[106], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP1Triangle(4, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_013108, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_001270[111], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_sceneTex_00FA18, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_001270[119], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(4, 0, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_012F08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_001270[124], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_sceneTex_00FA18, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_001270[132], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP1Triangle(8, 4, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_012F08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_001270[141], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_013108, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_001270[148], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_sceneTex_00FA18, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_001270[156], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_013108, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_001270[164], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&spot04_room_0Vtx_001270[196], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&spot04_room_0Vtx_001270[226], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_sceneTex_00FA18, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_001270[252], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 2, 4, 5, 0),
    gsSP2Triangles(6, 4, 7, 0, 7, 8, 6, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 21, 0),
    gsSP2Triangles(24, 21, 23, 0, 26, 27, 28, 0),
    gsSP2Triangles(29, 26, 28, 0, 29, 28, 30, 0),
    gsSPVertex(&spot04_room_0Vtx_001270[283], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 8, 15, 9, 0),
    gsSP2Triangles(3, 1, 16, 0, 11, 14, 15, 0),
    gsSP2Triangles(11, 15, 8, 0, 17, 18, 10, 0),
    gsSP2Triangles(17, 10, 19, 0, 18, 20, 8, 0),
    gsSP2Triangles(18, 8, 10, 0, 20, 21, 11, 0),
    gsSP2Triangles(20, 11, 8, 0, 21, 22, 12, 0),
    gsSP2Triangles(21, 12, 11, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 24, 12, 0, 20, 25, 26, 0),
    gsSP2Triangles(21, 26, 27, 0, 18, 25, 20, 0),
    gsSP2Triangles(27, 22, 21, 0, 28, 29, 30, 0),
    gsSP1Triangle(31, 28, 30, 0),
    gsSPVertex(&spot04_room_0Vtx_001270[315], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(23, 24, 20, 0, 25, 26, 27, 0),
    gsSP2Triangles(10, 9, 26, 0, 10, 26, 25, 0),
    gsSP2Triangles(26, 28, 29, 0, 26, 9, 11, 0),
    gsSP1Triangle(26, 11, 28, 0),
    gsSPVertex(&spot04_room_0Vtx_001270[345], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_013108, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_001270[348], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_sceneTex_00FA18, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_001270[358], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx spot04_room_0Vtx_003440[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_003440.vtx.inc"
};

Gfx spot04_room_0DL_004860[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_003440[314], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot04_sceneTex_010618, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock(spot04_sceneTex_00FE18, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 14, 14),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot04_room_0Vtx_003440, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 10, 13, 0, 14, 12, 13, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 18, 16, 0),
    gsSP2Triangles(16, 4, 17, 0, 19, 20, 8, 0),
    gsSP2Triangles(20, 21, 8, 0, 2, 22, 0, 0),
    gsSP2Triangles(22, 23, 0, 0, 24, 25, 6, 0),
    gsSP2Triangles(24, 6, 5, 0, 25, 26, 6, 0),
    gsSP2Triangles(27, 28, 29, 0, 28, 27, 30, 0),
    gsSPVertex(&spot04_room_0Vtx_003440[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(1, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 8, 6, 9, 0),
    gsSP2Triangles(4, 10, 11, 0, 4, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 20, 18, 0, 17, 21, 20, 0),
    gsSP2Triangles(21, 22, 20, 0, 18, 23, 19, 0),
    gsSP2Triangles(13, 24, 25, 0, 13, 25, 14, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 20, 0),
    gsSP2Triangles(29, 27, 26, 0, 29, 26, 2, 0),
    gsSP2Triangles(2, 26, 0, 0, 30, 0, 26, 0),
    gsSP2Triangles(26, 31, 30, 0, 31, 25, 30, 0),
    gsSP1Triangle(30, 25, 24, 0),
    gsSPVertex(&spot04_room_0Vtx_003440[63], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(3, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(2, 9, 8, 0, 0, 2, 8, 0),
    gsSP2Triangles(10, 0, 8, 0, 11, 10, 8, 0),
    gsSP2Triangles(7, 11, 8, 0, 11, 7, 12, 0),
    gsSP2Triangles(13, 10, 11, 0, 13, 11, 12, 0),
    gsSP2Triangles(13, 12, 14, 0, 7, 15, 12, 0),
    gsSP2Triangles(12, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(12, 16, 14, 0, 18, 13, 14, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 29, 30, 0),
    gsSPVertex(&spot04_room_0Vtx_003440[94], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(5, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 18, 16, 0),
    gsSP2Triangles(18, 19, 16, 0, 9, 20, 3, 0),
    gsSP2Triangles(9, 3, 5, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 24, 22, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 25, 27, 0, 28, 27, 29, 0),
    gsSP2Triangles(28, 29, 30, 0, 30, 31, 28, 0),
    gsSPVertex(&spot04_room_0Vtx_003440[126], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 16, 14, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 17, 20, 21, 0),
    gsSP2Triangles(20, 22, 21, 0, 20, 23, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 24, 26, 0),
    gsSP2Triangles(22, 23, 28, 0, 28, 23, 29, 0),
    gsSP2Triangles(30, 28, 29, 0, 29, 31, 30, 0),
    gsSPVertex(&spot04_room_0Vtx_003440[158], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 6, 5, 0),
    gsSP2Triangles(3, 5, 0, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(14, 11, 18, 0, 18, 17, 14, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 19, 21, 0, 23, 24, 22, 0),
    gsSP2Triangles(25, 23, 22, 0, 19, 26, 20, 0),
    gsSP2Triangles(27, 23, 28, 0, 29, 27, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&spot04_room_0Vtx_003440[190], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 8, 0, 7, 9, 10, 0),
    gsSP2Triangles(8, 7, 10, 0, 1, 0, 8, 0),
    gsSP2Triangles(1, 8, 10, 0, 4, 11, 12, 0),
    gsSP2Triangles(12, 11, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(15, 14, 17, 0, 13, 11, 18, 0),
    gsSP2Triangles(13, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 23, 21, 0, 24, 23, 20, 0),
    gsSP2Triangles(24, 25, 23, 0, 26, 27, 28, 0),
    gsSP2Triangles(27, 29, 28, 0, 30, 27, 26, 0),
    gsSP1Triangle(30, 26, 31, 0),
    gsSPVertex(&spot04_room_0Vtx_003440[222], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 5, 3, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 5, 7, 9, 0),
    gsSP2Triangles(9, 10, 5, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 9, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 8, 18, 0, 15, 18, 19, 0),
    gsSP2Triangles(16, 15, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 18, 15, 28, 0),
    gsSP1Triangle(18, 28, 29, 0),
    gsSPVertex(&spot04_room_0Vtx_003440[252], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
    gsSP2Triangles(12, 8, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 16, 15, 17, 0),
    gsSP2Triangles(17, 6, 18, 0, 6, 7, 19, 0),
    gsSP2Triangles(6, 19, 18, 0, 7, 20, 19, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 24, 0),
    gsSP2Triangles(12, 23, 28, 0, 29, 28, 27, 0),
    gsSP2Triangles(27, 26, 30, 0, 27, 30, 29, 0),
    gsSP2Triangles(23, 12, 11, 0, 24, 23, 11, 0),
    gsSP2Triangles(11, 25, 24, 0, 29, 31, 28, 0),
    gsSP1Triangle(31, 12, 28, 0),
    gsSPVertex(&spot04_room_0Vtx_003440[284], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 4, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 11, 13, 0),
    gsSP2Triangles(8, 9, 14, 0, 14, 13, 11, 0),
    gsSP2Triangles(14, 11, 8, 0, 9, 15, 14, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 13, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 20, 18, 0),
    gsSP2Triangles(21, 22, 23, 0, 22, 24, 23, 0),
    gsSP2Triangles(25, 21, 26, 0, 21, 25, 27, 0),
    gsSP2Triangles(28, 27, 25, 0, 28, 29, 27, 0),
    gsSPEndDisplayList(),
};

Vtx spot04_room_0Vtx_004D20[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_004D20.vtx.inc"
};

Gfx spot04_room_0DL_0055C0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_004D20[130], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot04_room_0Tex_00C708, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, 1),
    gsDPLoadMultiBlock(spot04_room_0Tex_00CB08, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x0B000000),
    gsSPVertex(spot04_room_0Vtx_004D20, 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 0, 0, 8, 0, 3, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 11, 0),
    gsSP2Triangles(13, 11, 10, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 18, 17, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP1Triangle(24, 23, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_013708, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(spot04_room_0Tex_014308, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0, COMBINED, 0, SHADE, 0,
                       TEXEL1, 0, PRIM_LOD_FRAC, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&spot04_room_0Vtx_004D20[25], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&spot04_room_0Vtx_004D20[57], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 18, 21, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 27, 28, 0),
    gsSP2Triangles(29, 26, 28, 0, 30, 29, 28, 0),
    gsSP1Triangle(31, 30, 28, 0),
    gsSPVertex(&spot04_room_0Vtx_004D20[89], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 11, 0, 7, 9, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 16, 14, 0),
    gsSP2Triangles(17, 18, 19, 0, 18, 20, 19, 0),
    gsSP2Triangles(16, 21, 14, 0, 18, 22, 20, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 27, 28, 0),
    gsSP2Triangles(26, 23, 25, 0, 29, 30, 31, 0),
    gsSPVertex(&spot04_room_0Vtx_004D20[121], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 1, 8, 0),
    gsSP1Triangle(1, 0, 8, 0),
    gsDPPipeSync(),
    gsDPSetEnvColor(0, 0, 0, 128),
    gsSPEndDisplayList(),
};

Vtx spot04_room_0Vtx_005890[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_005890.vtx.inc"
};

Gfx spot04_room_0DL_005A80[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_005890[23], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot04_room_0Tex_015308, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot04_room_0Vtx_005890, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(9, 12, 13, 0, 9, 13, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_014B08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0x0000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, 15, G_TX_NOMIRROR |
                G_TX_WRAP, 5, 15),
    gsDPSetTileSize(1, 0, 0, 0x007C, 0x007C),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsSPVertex(&spot04_room_0Vtx_005890[14], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(1, 3, 4, 0, 5, 6, 7, 0),
    gsSP1Triangle(6, 5, 8, 0),
    gsSPEndDisplayList(),
};

Vtx spot04_room_0Vtx_005BE0[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_005BE0.vtx.inc"
};

Gfx spot04_room_0DL_006280[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_005BE0[98], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot04_room_0Tex_00CF08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(spot04_sceneTLUT_00E010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot04_room_0Vtx_005BE0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 17, 23, 0, 20, 16, 24, 0),
    gsSP2Triangles(25, 21, 20, 0, 24, 25, 20, 0),
    gsSP2Triangles(19, 21, 26, 0, 27, 22, 23, 0),
    gsSP2Triangles(22, 28, 17, 0, 28, 18, 17, 0),
    gsSP2Triangles(18, 29, 16, 0, 16, 29, 24, 0),
    gsSP2Triangles(30, 17, 16, 0, 23, 17, 30, 0),
    gsSP2Triangles(19, 23, 30, 0, 20, 19, 30, 0),
    gsSP2Triangles(20, 30, 16, 0, 31, 1, 0, 0),
    gsSPVertex(&spot04_room_0Vtx_005BE0[32], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_013F08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_005BE0[43], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 3, 5, 6, 0),
    gsSP2Triangles(3, 6, 4, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(11, 10, 12, 0, 13, 11, 12, 0),
    gsSP2Triangles(13, 12, 14, 0, 15, 13, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_00CF08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_005BE0[59], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 2, 13, 0),
    gsSP2Triangles(2, 1, 13, 0, 1, 15, 13, 0),
    gsSP2Triangles(13, 15, 14, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 16, 14, 0, 19, 18, 15, 0),
    gsSP2Triangles(20, 19, 15, 0, 0, 20, 1, 0),
    gsSP2Triangles(2, 21, 3, 0, 17, 22, 12, 0),
    gsSP2Triangles(22, 21, 12, 0, 12, 14, 17, 0),
    gsSP2Triangles(20, 15, 1, 0, 2, 12, 21, 0),
    gsSP2Triangles(14, 15, 18, 0, 23, 24, 5, 0),
    gsSP2Triangles(23, 5, 4, 0, 25, 26, 24, 0),
    gsSP2Triangles(25, 24, 23, 0, 27, 28, 26, 0),
    gsSP2Triangles(27, 26, 25, 0, 29, 30, 28, 0),
    gsSP1Triangle(29, 28, 27, 0),
    gsSPVertex(&spot04_room_0Vtx_005BE0[90], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx spot04_room_0Vtx_006550[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_006550.vtx.inc"
};

Gfx spot04_room_0DL_006C10[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_006550[100], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot04_room_0Tex_00D408, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(spot04_sceneTLUT_00E010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot04_room_0Vtx_006550, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_00D308, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_006550[12], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&spot04_room_0Vtx_006550[44], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_015B08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_006550[60], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_015D08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_006550[68], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPEndDisplayList(),
};

Vtx spot04_room_0Vtx_006EA0[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_006EA0.vtx.inc"
};

Gfx spot04_room_0DL_007A20[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_006EA0[176], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot04_room_0Tex_013F08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(spot04_sceneTLUT_00E010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 185, 175, 154, 255),
    gsSPVertex(spot04_room_0Vtx_006EA0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 6, 5, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 14, 16, 15, 0),
    gsSP2Triangles(11, 10, 15, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 21, 22, 23, 0),
    gsSP2Triangles(22, 17, 23, 0, 24, 22, 21, 0),
    gsSP2Triangles(20, 18, 25, 0, 16, 14, 26, 0),
    gsSP2Triangles(14, 13, 26, 0, 20, 27, 19, 0),
    gsSP2Triangles(4, 3, 28, 0, 29, 21, 23, 0),
    gsSP2Triangles(23, 17, 19, 0, 16, 30, 31, 0),
    gsSP1Triangle(16, 26, 30, 0),
    gsSPVertex(&spot04_room_0Vtx_006EA0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 7, 0, 9, 5, 7, 0),
    gsSP2Triangles(7, 6, 10, 0, 7, 10, 11, 0),
    gsSP2Triangles(12, 8, 7, 0, 12, 7, 11, 0),
    gsSP2Triangles(13, 14, 11, 0, 13, 11, 10, 0),
    gsSP2Triangles(14, 15, 12, 0, 14, 12, 11, 0),
    gsSP2Triangles(14, 13, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 15, 14, 0, 18, 14, 17, 0),
    gsSP2Triangles(19, 20, 17, 0, 19, 17, 16, 0),
    gsSP2Triangles(20, 21, 18, 0, 20, 18, 17, 0),
    gsSP2Triangles(19, 22, 23, 0, 19, 23, 20, 0),
    gsSP2Triangles(23, 24, 21, 0, 23, 21, 20, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP2Triangles(26, 29, 30, 0, 26, 30, 27, 0),
    gsSP1Triangle(31, 26, 25, 0),
    gsSPVertex(&spot04_room_0Vtx_006EA0[64], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 1, 9, 0, 1, 8, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_011D08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_006EA0[74], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(1, 6, 4, 0, 1, 4, 2, 0),
    gsSP2Triangles(0, 7, 6, 0, 0, 6, 1, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(spot04_room_0Tex_00FD08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&spot04_room_0Vtx_006EA0[82], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 6, 0),
    gsSP1Triangle(5, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_00F508, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&spot04_room_0Vtx_006EA0[90], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(spot04_room_0Tex_015B08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(spot04_sceneTLUT_00E010),
    gsSPVertex(&spot04_room_0Vtx_006EA0[94], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 8, 9, 0),
    gsSP2Triangles(0, 2, 8, 0, 0, 10, 3, 0),
    gsSP2Triangles(11, 10, 0, 0, 5, 7, 12, 0),
    gsSP2Triangles(5, 12, 13, 0, 11, 5, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(spot04_room_0Tex_00F508, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_006EA0[108], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_00F108, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_006EA0[114], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(spot04_room_0Tex_013F08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(spot04_sceneTLUT_00E010),
    gsDPSetPrimColor(0, 0, 120, 120, 90, 255),
    gsSPVertex(&spot04_room_0Vtx_006EA0[122], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 1, 0, 3, 5, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(spot04_room_0Tex_010D08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&spot04_room_0Vtx_006EA0[128], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_00F108, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&spot04_room_0Vtx_006EA0[132], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_00F508, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_006EA0[136], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_00E108, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&spot04_room_0Vtx_006EA0[140], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_00BF08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_006EA0[156], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
    gsSPVertex(&spot04_room_0Vtx_006EA0[162], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_00E908, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&spot04_room_0Vtx_006EA0[168], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx spot04_room_0Vtx_0081D8[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_0081D8.vtx.inc"
};

Gfx spot04_room_0DL_008638[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_0081D8[62], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot04_room_0Tex_011D08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(spot04_sceneTLUT_00E010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot04_room_0Vtx_0081D8, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 4, 0, 0, 6, 0, 3, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_016908, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_0081D8[8], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 2, 1, 0),
    gsSP2Triangles(9, 1, 11, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 12, 0),
    gsSP2Triangles(18, 7, 6, 0, 18, 6, 19, 0),
    gsSP2Triangles(14, 13, 10, 0, 14, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_015B08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_0081D8[28], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(9, 11, 10, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 29, 30, 0),
    gsSPVertex(&spot04_room_0Vtx_0081D8[59], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Vtx spot04_room_0Vtx_008858[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_008858.vtx.inc"
};

Gfx spot04_room_0DL_008ED8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_008858[96], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot04_room_0Tex_013F08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(spot04_sceneTLUT_00E010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 185, 175, 154, 255),
    gsSPVertex(spot04_room_0Vtx_008858, 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(1, 0, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 7, 6, 11, 0),
    gsSP2Triangles(12, 13, 3, 0, 1, 14, 12, 0),
    gsSP2Triangles(15, 14, 1, 0, 7, 16, 17, 0),
    gsSP2Triangles(18, 16, 7, 0, 7, 11, 18, 0),
    gsSP2Triangles(11, 10, 18, 0, 3, 2, 12, 0),
    gsSP2Triangles(2, 1, 12, 0, 1, 5, 15, 0),
    gsSP2Triangles(8, 7, 17, 0, 3, 13, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_011D08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_008858[19], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(1, 6, 4, 0, 1, 4, 2, 0),
    gsSP2Triangles(0, 7, 6, 0, 0, 6, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_013F08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_008858[27], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 7, 0, 12, 7, 6, 0),
    gsSP2Triangles(11, 10, 13, 0, 11, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(17, 16, 18, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 15, 0, 20, 15, 14, 0),
    gsSP2Triangles(18, 21, 20, 0, 18, 20, 19, 0),
    gsSP2Triangles(18, 16, 22, 0, 16, 23, 24, 0),
    gsSP2Triangles(10, 25, 26, 0, 27, 28, 26, 0),
    gsSP2Triangles(8, 0, 29, 0, 10, 8, 30, 0),
    gsSP1Triangle(8, 29, 31, 0),
    gsSPVertex(&spot04_room_0Vtx_008858[59], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_015B08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&spot04_room_0Vtx_008858[72], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSPEndDisplayList(),
};

Vtx spot04_room_0Vtx_0091B0[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_0091B0.vtx.inc"
};

Gfx spot04_room_0DL_009740[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_0091B0[81], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot04_room_0Tex_011D08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(spot04_sceneTLUT_00E010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot04_room_0Vtx_0091B0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(5, 7, 1, 0, 5, 1, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_016508, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_0091B0[8], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 3, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 1, 3, 13, 0),
    gsSP2Triangles(2, 1, 13, 0, 14, 9, 8, 0),
    gsSP2Triangles(9, 15, 7, 0, 12, 16, 10, 0),
    gsSP2Triangles(1, 17, 4, 0, 6, 3, 4, 0),
    gsSP2Triangles(17, 1, 0, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 19, 0, 21, 19, 18, 0),
    gsSP2Triangles(23, 24, 22, 0, 23, 22, 21, 0),
    gsSP2Triangles(25, 26, 24, 0, 25, 24, 23, 0),
    gsSP2Triangles(27, 28, 14, 0, 14, 28, 29, 0),
    gsSP2Triangles(14, 29, 30, 0, 8, 5, 14, 0),
    gsSP2Triangles(31, 27, 6, 0, 27, 14, 5, 0),
    gsSP2Triangles(6, 27, 5, 0, 16, 2, 10, 0),
    gsSP1Triangle(2, 13, 10, 0),
    gsSPVertex(&spot04_room_0Vtx_0091B0[40], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_015B08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_0091B0[44], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 9, 10, 0),
    gsSP2Triangles(10, 6, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(21, 23, 22, 0, 21, 20, 24, 0),
    gsSP2Triangles(21, 24, 25, 0, 26, 27, 25, 0),
    gsSP2Triangles(26, 25, 24, 0, 27, 26, 28, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsSPVertex(&spot04_room_0Vtx_0091B0[74], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(3, 5, 6, 0),
    gsSPEndDisplayList(),
};

Vtx spot04_room_0Vtx_0099C0[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_0099C0.vtx.inc"
};

Gfx spot04_room_0DL_00A080[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_0099C0[100], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot04_room_0Tex_013F08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(spot04_sceneTLUT_00E010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot04_room_0Vtx_0099C0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 1, 0, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 10, 0),
    gsSP2Triangles(13, 14, 15, 0, 9, 8, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 14, 18, 0),
    gsSP2Triangles(3, 19, 20, 0, 19, 16, 20, 0),
    gsSP2Triangles(21, 19, 3, 0, 1, 22, 21, 0),
    gsSP2Triangles(23, 24, 1, 0, 6, 25, 23, 0),
    gsSP2Triangles(26, 27, 11, 0, 9, 28, 26, 0),
    gsSP2Triangles(14, 17, 29, 0, 29, 28, 9, 0),
    gsSP2Triangles(9, 15, 29, 0, 15, 14, 29, 0),
    gsSP2Triangles(3, 2, 21, 0, 2, 1, 21, 0),
    gsSP2Triangles(1, 7, 23, 0, 7, 6, 23, 0),
    gsSP2Triangles(11, 10, 26, 0, 10, 9, 26, 0),
    gsSP2Triangles(14, 30, 18, 0, 31, 3, 20, 0),
    gsSP1Triangle(20, 16, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_011D08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_0099C0[32], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(1, 6, 4, 0, 1, 4, 2, 0),
    gsSP2Triangles(0, 7, 6, 0, 0, 6, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_013F08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_0099C0[40], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_015B08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_0099C0[46], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&spot04_room_0Vtx_0099C0[76], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 2, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 88, 88, 88, 255),
    gsSPVertex(&spot04_room_0Vtx_0099C0[84], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx spot04_room_0Vtx_00A368[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_00A368.vtx.inc"
};

Gfx spot04_room_0DL_00A808[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_00A368[66], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot04_room_0Tex_016108, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(spot04_sceneTLUT_00E010),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot04_room_0Vtx_00A368, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 1, 0, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 6, 5, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 9, 8, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 16, 12, 17, 0),
    gsSP2Triangles(3, 18, 19, 0, 18, 15, 19, 0),
    gsSP2Triangles(20, 18, 3, 0, 1, 21, 20, 0),
    gsSP2Triangles(22, 21, 1, 0, 6, 23, 22, 0),
    gsSP2Triangles(24, 23, 6, 0, 9, 25, 24, 0),
    gsSP2Triangles(12, 16, 26, 0, 27, 25, 9, 0),
    gsSP2Triangles(9, 14, 27, 0, 13, 12, 26, 0),
    gsSP2Triangles(3, 2, 20, 0, 2, 1, 20, 0),
    gsSP2Triangles(1, 7, 22, 0, 7, 6, 22, 0),
    gsSP2Triangles(6, 10, 24, 0, 10, 9, 24, 0),
    gsSP2Triangles(12, 28, 17, 0, 29, 3, 19, 0),
    gsSP1Triangle(19, 15, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_011D08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_00A368[30], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(1, 6, 4, 0, 1, 4, 2, 0),
    gsSP2Triangles(0, 7, 6, 0, 0, 6, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_016108, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_00A368[38], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_015B08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_00A368[44], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 8, 9, 0),
    gsSP2Triangles(0, 2, 8, 0, 0, 10, 3, 0),
    gsSP2Triangles(11, 10, 0, 0, 5, 7, 12, 0),
    gsSP2Triangles(5, 12, 13, 0, 11, 5, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(spot04_room_0Tex_00D508, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&spot04_room_0Vtx_00A368[58], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx spot04_room_0Vtx_00AB10[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_00AB10.vtx.inc"
};

Gfx spot04_room_0DL_00AE90[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_00AB10[48], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(spot04_sceneTex_00EA18, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 193, 175, 90, 255),
    gsSPVertex(spot04_room_0Vtx_00AB10, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(11, 14, 15, 0, 11, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_sceneTex_00E218, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 230, 250, 156, 255),
    gsSPVertex(&spot04_room_0Vtx_00AB10[22], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSPEndDisplayList(),
};

Vtx spot04_room_0Vtx_00B000[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_00B000.vtx.inc"
};

Gfx spot04_room_0DL_00B280[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_00B000[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot04_room_0Tex_017108, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot04_room_0Vtx_00B000, 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_00D908, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_00B000[28], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx spot04_room_0Vtx_00B3B8[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_00B3B8.vtx.inc"
};

Gfx spot04_room_0DL_00B8F8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_00B3B8[76], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot04_room_0Tex_016D08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 154, 154, 154, 255),
    gsSPVertex(spot04_room_0Vtx_00B3B8, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(4, 8, 9, 0, 4, 6, 8, 0),
    gsSP2Triangles(0, 10, 3, 0, 10, 11, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&spot04_room_0Vtx_00B3B8[12], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 9, 0, 8, 10, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_013308, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&spot04_room_0Vtx_00B3B8[24], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 8, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_017108, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_00B3B8[36], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_013308, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_00B3B8[52], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_017108, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_00B3B8[56], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(spot04_room_0Tex_013308, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_00B3B8[72], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSPEndDisplayList(),
};

Vtx spot04_room_0Vtx_00BBD8[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_00BBD8.vtx.inc"
};

Gfx spot04_room_0DL_00BD98[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_00BBD8[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot04_room_0Tex_011F08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(spot04_room_0Vtx_00BBD8, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 4, 0, 6, 4, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 11, 10, 0, 13, 12, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 14, 0, 18, 14, 17, 0),
    gsSPEndDisplayList(),
};

u8 spot04_room_0_unaccounted_00BE80[] = {
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x2A, 0x10, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x48, 0x60, 
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x55, 0xC0, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x5A, 0x80, 
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x62, 0x80, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x6C, 0x10, 
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x7A, 0x20, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x86, 0x38, 
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x8E, 0xD8, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x97, 0x40, 
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0xA0, 0x80, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0xA8, 0x08, 
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0xAE, 0x90, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0xB2, 0x80, 
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0xB8, 0xF8, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0xBD, 0x98, 
    0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 spot04_room_0Tex_00BF08[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_00BF08.rgba16.inc.c"
};

u64 spot04_room_0Tex_00C708[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_00C708.rgba16.inc.c"
};

u64 spot04_room_0Tex_00CB08[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_00CB08.rgba16.inc.c"
};

u64 spot04_room_0Tex_00CF08[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_00CF08.ci8.inc.c"
};

u64 spot04_room_0Tex_00D308[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_00D308.ci8.inc.c"
};

u64 spot04_room_0Tex_00D408[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_00D408.ci8.inc.c"
};

u64 spot04_room_0Tex_00D508[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_00D508.rgba16.inc.c"
};

u64 spot04_room_0Tex_00D908[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_00D908.rgba16.inc.c"
};

u64 spot04_room_0Tex_00E108[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_00E108.rgba16.inc.c"
};

u64 spot04_room_0Tex_00E908[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_00E908.rgba16.inc.c"
};

u64 spot04_room_0Tex_00F108[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_00F108.rgba16.inc.c"
};

u64 spot04_room_0Tex_00F508[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_00F508.rgba16.inc.c"
};

u64 spot04_room_0Tex_00FD08[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_00FD08.rgba16.inc.c"
};

u64 spot04_room_0Tex_010D08[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_010D08.rgba16.inc.c"
};

u64 spot04_room_0Tex_011D08[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_011D08.ci8.inc.c"
};

u64 spot04_room_0Tex_011F08[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_011F08.rgba16.inc.c"
};

u64 spot04_room_0Tex_012F08[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_012F08.ci8.inc.c"
};

u64 spot04_room_0Tex_013108[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_013108.ci8.inc.c"
};

u64 spot04_room_0Tex_013308[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_013308.rgba16.inc.c"
};

u64 spot04_room_0Tex_013708[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_013708.rgba16.inc.c"
};

u64 spot04_room_0Tex_013F08[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_013F08.ci8.inc.c"
};

u64 spot04_room_0Tex_014308[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_014308.rgba16.inc.c"
};

u64 spot04_room_0Tex_014B08[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_014B08.rgba16.inc.c"
};

u64 spot04_room_0Tex_015308[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_015308.rgba16.inc.c"
};

u64 spot04_room_0Tex_015B08[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_015B08.ci8.inc.c"
};

u64 spot04_room_0Tex_015D08[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_015D08.ci8.inc.c"
};

u64 spot04_room_0Tex_016108[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_016108.ci8.inc.c"
};

u64 spot04_room_0Tex_016508[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_016508.ci8.inc.c"
};

u64 spot04_room_0Tex_016908[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_016908.ci8.inc.c"
};

u64 spot04_room_0Tex_016D08[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_016D08.rgba16.inc.c"
};

u64 spot04_room_0Tex_017108[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_017108.rgba16.inc.c"
};

u8 spot04_room_0_possiblePadding_017908[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx spot04_room_0Vtx_017910[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_017910.vtx.inc"
};

Gfx spot04_room_0DL_017BD0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_017910[36], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot04_room_0Tex_018A90, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 14, 15),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0x0000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, 14, G_TX_NOMIRROR |
                G_TX_WRAP, 5, 15),
    gsDPSetTileSize(1, 0, 0, 0x007C, 0x007C),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 99),
    gsSPDisplayList(0x08000000),
    gsSPVertex(spot04_room_0Vtx_017910, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 2, 0),
    gsDPPipeSync(),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&spot04_room_0Vtx_017910[7], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 4, 5, 1, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(7, 8, 5, 0, 8, 9, 5, 0),
    gsSP2Triangles(9, 10, 5, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 22, 20, 0, 19, 23, 22, 0),
    gsSP2Triangles(19, 24, 23, 0, 24, 25, 23, 0),
    gsSP2Triangles(24, 26, 25, 0, 24, 27, 26, 0),
    gsSP1Triangle(24, 28, 27, 0),
    gsSPEndDisplayList(),
};

Vtx spot04_room_0Vtx_017D28[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_017D28.vtx.inc"
};

Gfx spot04_room_0DL_018048[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_017D28[42], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(spot04_room_0Tex_019A90, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0, TEXEL1, 0,
                       PRIM_LOD_FRAC, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_OVL_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 155, 140, 52, 179),
    gsSPVertex(spot04_room_0Vtx_017D28, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(spot04_sceneTex_00F218, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_017D28[4], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(spot04_room_0Tex_019290, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_017D28[10], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(spot04_sceneTex_00F218, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_017D28[14], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(spot04_room_0Tex_019A90, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_017D28[22], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(spot04_room_0Tex_019290, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_017D28[26], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(spot04_sceneTex_00F218, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_017D28[30], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(spot04_room_0Tex_019A90, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_017D28[34], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx spot04_room_0Vtx_018350[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_018350.vtx.inc"
};

Gfx spot04_room_0DL_018490[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_018350[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(spot04_room_0Tex_01A490, G_IM_FMT_IA, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0, TEXEL1, 0,
                       PRIM_LOD_FRAC, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 225, 228, 156, 191),
    gsSPVertex(spot04_room_0Vtx_018350, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(spot04_room_0Tex_01AE90, G_IM_FMT_IA, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_018350[4], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(spot04_room_0Tex_01AC90, G_IM_FMT_IA, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                            G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&spot04_room_0Vtx_018350[8], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx spot04_room_0Vtx_0185F0[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_0185F0.vtx.inc"
};

Gfx spot04_room_0DL_0187F0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_0185F0[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot04_room_0Tex_01A290, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_OVL_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
    gsSPVertex(spot04_room_0Vtx_0185F0, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&spot04_room_0Vtx_0185F0[20], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx spot04_room_0Vtx_0188E8[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Vtx_0188E8.vtx.inc"
};

Gfx spot04_room_0DL_0189A8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&spot04_room_0Vtx_0188E8[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(spot04_room_0Tex_01B090, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0, TEXEL1, 0,
                       PRIM_LOD_FRAC, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 169),
    gsSPVertex(spot04_room_0Vtx_0188E8, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

u8 spot04_room_0_unaccounted_018A60[] = {
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x01, 0x7B, 0xD0, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x01, 0x80, 0x48, 
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x01, 0x84, 0x90, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x01, 0x87, 0xF0, 
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x01, 0x89, 0xA8, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 spot04_room_0Tex_018A90[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_018A90.rgba16.inc.c"
};

u64 spot04_room_0Tex_019290[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_019290.i4.inc.c"
};

u64 spot04_room_0Tex_019A90[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_019A90.i4.inc.c"
};

u64 spot04_room_0Tex_01A290[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_01A290.ia8.inc.c"
};

u64 spot04_room_0Tex_01A490[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_01A490.ia4.inc.c"
};

u64 spot04_room_0Tex_01AC90[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_01AC90.ia4.inc.c"
};

u64 spot04_room_0Tex_01AE90[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_01AE90.ia4.inc.c"
};

u64 spot04_room_0Tex_01B090[] = {
#include "assets/scenes/overworld/spot04/spot04_room_0Tex_01B090.rgba16.inc.c"
};

