#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t4;
// ProceduralWorld/ProceduralPrefab[]
struct ProceduralPrefabU5BU5D_t197;
// System.Collections.Generic.Queue`1<System.Collections.IEnumerator>
struct Queue_1_t198;
// System.Collections.Generic.Dictionary`2<Pathfinding.Int2,ProceduralWorld/ProceduralTile>
struct Dictionary_2_t199;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// ProceduralWorld
struct  ProceduralWorld_t195  : public MonoBehaviour_t3
{
	// UnityEngine.Transform ProceduralWorld::target
	Transform_t4 * ___target_2;
	// ProceduralWorld/ProceduralPrefab[] ProceduralWorld::prefabs
	ProceduralPrefabU5BU5D_t197* ___prefabs_3;
	// System.Int32 ProceduralWorld::range
	int32_t ___range_4;
	// System.Single ProceduralWorld::tileSize
	float ___tileSize_5;
	// System.Int32 ProceduralWorld::subTiles
	int32_t ___subTiles_6;
	// System.Boolean ProceduralWorld::staticBatching
	bool ___staticBatching_7;
	// System.Collections.Generic.Queue`1<System.Collections.IEnumerator> ProceduralWorld::tileGenerationQueue
	Queue_1_t198 * ___tileGenerationQueue_8;
	// System.Collections.Generic.Dictionary`2<Pathfinding.Int2,ProceduralWorld/ProceduralTile> ProceduralWorld::tiles
	Dictionary_2_t199 * ___tiles_9;
};
