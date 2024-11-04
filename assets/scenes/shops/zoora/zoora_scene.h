#ifndef ZOORA_SCENE_H
#define ZOORA_SCENE_H 1

extern SceneCmd zoora_sceneCommands[];
extern ActorEntry zoora_sceneStartPositionList0x000050[];
extern RomFile zoora_sceneRoomList0x000060[];
extern Spawn zoora_sceneEntranceList0x000068[];
extern u16 zoora_sceneExitList_00006C[];
extern EnvLightSettings zoora_sceneLightSettings0x000070[];
extern Vec3s zoora_sceneCollisionHeader_000360CamPosData[];
extern BgCamInfo zoora_sceneCollisionHeader_000360CamDataList[];
extern SurfaceType zoora_sceneCollisionHeader_000360SurfaceType[];
extern CollisionPoly zoora_sceneCollisionHeader_000360Polygons[];
extern Vec3s zoora_sceneCollisionHeader_000360Vertices[];
extern CollisionHeader zoora_sceneCollisionHeader_000360;
#endif
