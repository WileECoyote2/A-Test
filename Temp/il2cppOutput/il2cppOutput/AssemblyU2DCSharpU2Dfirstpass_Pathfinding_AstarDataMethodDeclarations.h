#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Pathfinding.AstarData
struct AstarData_t23;
// AstarPath
struct AstarPath_t48;
// Pathfinding.NavMeshGraph
struct NavMeshGraph_t31;
// Pathfinding.GridGraph
struct GridGraph_t32;
// Pathfinding.PointGraph
struct PointGraph_t33;
// System.Type[]
struct TypeU5BU5D_t34;
// System.Byte[]
struct ByteU5BU5D_t29;
// Pathfinding.Serialization.SerializeSettings
struct SerializeSettings_t162;
// Pathfinding.Serialization.AstarSerializer
struct AstarSerializer_t156;
// System.Type
struct Type_t;
// System.String
struct String_t;
// Pathfinding.NavGraph
struct NavGraph_t109;
// Pathfinding.GraphNode
struct GraphNode_t61;
// System.Collections.IEnumerable
struct IEnumerable_t389;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.AstarData::.ctor()
extern "C" void AstarData__ctor_m98 (AstarData_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// AstarPath Pathfinding.AstarData::get_active()
extern "C" AstarPath_t48 * AstarData_get_active_m99 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NavMeshGraph Pathfinding.AstarData::get_navmesh()
extern "C" NavMeshGraph_t31 * AstarData_get_navmesh_m100 (AstarData_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::set_navmesh(Pathfinding.NavMeshGraph)
extern "C" void AstarData_set_navmesh_m101 (AstarData_t23 * __this, NavMeshGraph_t31 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GridGraph Pathfinding.AstarData::get_gridGraph()
extern "C" GridGraph_t32 * AstarData_get_gridGraph_m102 (AstarData_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::set_gridGraph(Pathfinding.GridGraph)
extern "C" void AstarData_set_gridGraph_m103 (AstarData_t23 * __this, GridGraph_t32 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.PointGraph Pathfinding.AstarData::get_pointGraph()
extern "C" PointGraph_t33 * AstarData_get_pointGraph_m104 (AstarData_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::set_pointGraph(Pathfinding.PointGraph)
extern "C" void AstarData_set_pointGraph_m105 (AstarData_t23 * __this, PointGraph_t33 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] Pathfinding.AstarData::get_graphTypes()
extern "C" TypeU5BU5D_t34* AstarData_get_graphTypes_m106 (AstarData_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::set_graphTypes(System.Type[])
extern "C" void AstarData_set_graphTypes_m107 (AstarData_t23 * __this, TypeU5BU5D_t34* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.AstarData::get_data()
extern "C" ByteU5BU5D_t29* AstarData_get_data_m108 (AstarData_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::set_data(System.Byte[])
extern "C" void AstarData_set_data_m109 (AstarData_t23 * __this, ByteU5BU5D_t29* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.AstarData::GetData()
extern "C" ByteU5BU5D_t29* AstarData_GetData_m110 (AstarData_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::SetData(System.Byte[])
extern "C" void AstarData_SetData_m111 (AstarData_t23 * __this, ByteU5BU5D_t29* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::Awake()
extern "C" void AstarData_Awake_m112 (AstarData_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::UpdateShortcuts()
extern "C" void AstarData_UpdateShortcuts_m113 (AstarData_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::LoadFromCache()
extern "C" void AstarData_LoadFromCache_m114 (AstarData_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.AstarData::SerializeGraphs()
extern "C" ByteU5BU5D_t29* AstarData_SerializeGraphs_m115 (AstarData_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.AstarData::SerializeGraphs(Pathfinding.Serialization.SerializeSettings)
extern "C" ByteU5BU5D_t29* AstarData_SerializeGraphs_m116 (AstarData_t23 * __this, SerializeSettings_t162 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.AstarData::SerializeGraphs(Pathfinding.Serialization.SerializeSettings,System.UInt32&)
extern "C" ByteU5BU5D_t29* AstarData_SerializeGraphs_m117 (AstarData_t23 * __this, SerializeSettings_t162 * ___settings, uint32_t* ___checksum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::SerializeGraphsPart(Pathfinding.Serialization.AstarSerializer)
extern "C" void AstarData_SerializeGraphsPart_m118 (AstarData_t23 * __this, AstarSerializer_t156 * ___sr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::DeserializeGraphs()
extern "C" void AstarData_DeserializeGraphs_m119 (AstarData_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::ClearGraphs()
extern "C" void AstarData_ClearGraphs_m120 (AstarData_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::OnDestroy()
extern "C" void AstarData_OnDestroy_m121 (AstarData_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::DeserializeGraphs(System.Byte[])
extern "C" void AstarData_DeserializeGraphs_m122 (AstarData_t23 * __this, ByteU5BU5D_t29* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::DeserializeGraphsAdditive(System.Byte[])
extern "C" void AstarData_DeserializeGraphsAdditive_m123 (AstarData_t23 * __this, ByteU5BU5D_t29* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::DeserializeGraphsPart(Pathfinding.Serialization.AstarSerializer)
extern "C" void AstarData_DeserializeGraphsPart_m124 (AstarData_t23 * __this, AstarSerializer_t156 * ___sr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::DeserializeGraphsPartAdditive(Pathfinding.Serialization.AstarSerializer)
extern "C" void AstarData_DeserializeGraphsPartAdditive_m125 (AstarData_t23 * __this, AstarSerializer_t156 * ___sr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::FindGraphTypes()
extern "C" void AstarData_FindGraphTypes_m126 (AstarData_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Pathfinding.AstarData::GetGraphType(System.String)
extern "C" Type_t * AstarData_GetGraphType_m127 (AstarData_t23 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NavGraph Pathfinding.AstarData::CreateGraph(System.String)
extern "C" NavGraph_t109 * AstarData_CreateGraph_m128 (AstarData_t23 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NavGraph Pathfinding.AstarData::CreateGraph(System.Type)
extern "C" NavGraph_t109 * AstarData_CreateGraph_m129 (AstarData_t23 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NavGraph Pathfinding.AstarData::AddGraph(System.String)
extern "C" NavGraph_t109 * AstarData_AddGraph_m130 (AstarData_t23 * __this, String_t* ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NavGraph Pathfinding.AstarData::AddGraph(System.Type)
extern "C" NavGraph_t109 * AstarData_AddGraph_m131 (AstarData_t23 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.AstarData::AddGraph(Pathfinding.NavGraph)
extern "C" void AstarData_AddGraph_m132 (AstarData_t23 * __this, NavGraph_t109 * ___graph, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.AstarData::RemoveGraph(Pathfinding.NavGraph)
extern "C" bool AstarData_RemoveGraph_m133 (AstarData_t23 * __this, NavGraph_t109 * ___graph, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NavGraph Pathfinding.AstarData::GetGraph(Pathfinding.GraphNode)
extern "C" NavGraph_t109 * AstarData_GetGraph_m134 (Object_t * __this /* static, unused */, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NavGraph Pathfinding.AstarData::FindGraphOfType(System.Type)
extern "C" NavGraph_t109 * AstarData_FindGraphOfType_m135 (AstarData_t23 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Pathfinding.AstarData::FindGraphsOfType(System.Type)
extern "C" Object_t * AstarData_FindGraphsOfType_m136 (AstarData_t23 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Pathfinding.AstarData::GetUpdateableGraphs()
extern "C" Object_t * AstarData_GetUpdateableGraphs_m137 (AstarData_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Pathfinding.AstarData::GetRaycastableGraphs()
extern "C" Object_t * AstarData_GetRaycastableGraphs_m138 (AstarData_t23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.AstarData::GetGraphIndex(Pathfinding.NavGraph)
extern "C" int32_t AstarData_GetGraphIndex_m139 (AstarData_t23 * __this, NavGraph_t109 * ___graph, const MethodInfo* method) IL2CPP_METHOD_ATTR;
