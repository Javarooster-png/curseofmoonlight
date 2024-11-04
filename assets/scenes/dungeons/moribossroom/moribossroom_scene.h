#ifndef MORIBOSSROOM_SCENE_H
#define MORIBOSSROOM_SCENE_H 1

extern SceneCmd moribossroom_sceneCommands[];
extern ActorEntry moribossroom_sceneStartPositionList0x000060[];
extern TransitionActorEntry moribossroom_sceneTransitionActorList_000070[];
extern RomFile moribossroom_sceneRoomList0x000080[];
extern Spawn moribossroom_sceneEntranceList0x000090[];
extern u16 moribossroom_sceneExitList_000094[];
extern EnvLightSettings moribossroom_sceneLightSettings0x000098[];
extern Vec3s moribossroom_sceneCollisionHeader_000B1CCamPosData[];
extern BgCamInfo moribossroom_sceneCollisionHeader_000B1CCamDataList[];
extern SurfaceType moribossroom_sceneCollisionHeader_000B1CSurfaceType[];
extern CollisionPoly moribossroom_sceneCollisionHeader_000B1CPolygons[];
extern Vec3s moribossroom_sceneCollisionHeader_000B1CVertices[];
extern CollisionHeader moribossroom_sceneCollisionHeader_000B1C;
extern u64 moribossroom_sceneTLUT_000B50[];
extern u64 moribossroom_sceneTex_000CF8[];
extern u64 moribossroom_sceneTex_0010F8[];
#endif
