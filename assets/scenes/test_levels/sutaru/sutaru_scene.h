#ifndef SUTARU_SCENE_H
#define SUTARU_SCENE_H 1

extern SceneCmd sutaru_sceneCommands[];
extern ActorEntry sutaru_sceneStartPositionList0x000050[];
extern RomFile sutaru_sceneRoomList0x000060[];
extern Spawn sutaru_sceneEntranceList0x000068[];
extern EnvLightSettings sutaru_sceneLightSettings0x00006C[];
extern BgCamInfo sutaru_sceneCollisionHeader_000B78CamDataList[];
extern SurfaceType sutaru_sceneCollisionHeader_000B78SurfaceType[];
extern CollisionPoly sutaru_sceneCollisionHeader_000B78Polygons[];
extern Vec3s sutaru_sceneCollisionHeader_000B78Vertices[];
extern CollisionHeader sutaru_sceneCollisionHeader_000B78;
#endif
