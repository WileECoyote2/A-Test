#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.NavGraph[]
struct NavGraphU5BU5D_t28;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t29;
// UnityEngine.TextAsset
struct TextAsset_t30;
// Pathfinding.NavMeshGraph
struct NavMeshGraph_t31;
// Pathfinding.GridGraph
struct GridGraph_t32;
// Pathfinding.PointGraph
struct PointGraph_t33;
// System.Type[]
struct TypeU5BU5D_t34;

#include "mscorlib_System_Object.h"

// Pathfinding.AstarData
struct  AstarData_t23  : public Object_t
{
	// Pathfinding.NavGraph[] Pathfinding.AstarData::graphs
	NavGraphU5BU5D_t28* ___graphs_0;
	// System.String Pathfinding.AstarData::dataString
	String_t* ___dataString_1;
	// System.Byte[] Pathfinding.AstarData::upgradeData
	ByteU5BU5D_t29* ___upgradeData_2;
	// System.Byte[] Pathfinding.AstarData::data_backup
	ByteU5BU5D_t29* ___data_backup_3;
	// UnityEngine.TextAsset Pathfinding.AstarData::file_cachedStartup
	TextAsset_t30 * ___file_cachedStartup_4;
	// System.Byte[] Pathfinding.AstarData::data_cachedStartup
	ByteU5BU5D_t29* ___data_cachedStartup_5;
	// System.Boolean Pathfinding.AstarData::cacheStartup
	bool ___cacheStartup_6;
	// Pathfinding.NavMeshGraph Pathfinding.AstarData::<navmesh>k__BackingField
	NavMeshGraph_t31 * ___U3CnavmeshU3Ek__BackingField_7;
	// Pathfinding.GridGraph Pathfinding.AstarData::<gridGraph>k__BackingField
	GridGraph_t32 * ___U3CgridGraphU3Ek__BackingField_8;
	// Pathfinding.PointGraph Pathfinding.AstarData::<pointGraph>k__BackingField
	PointGraph_t33 * ___U3CpointGraphU3Ek__BackingField_9;
	// System.Type[] Pathfinding.AstarData::<graphTypes>k__BackingField
	TypeU5BU5D_t34* ___U3CgraphTypesU3Ek__BackingField_10;
};
