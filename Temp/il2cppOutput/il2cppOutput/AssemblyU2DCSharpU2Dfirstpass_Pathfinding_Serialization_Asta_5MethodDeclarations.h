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

// Pathfinding.Serialization.AstarSerializer
struct AstarSerializer_t156;
// Pathfinding.AstarData
struct AstarData_t23;
// Pathfinding.Serialization.SerializeSettings
struct SerializeSettings_t162;
// System.Text.StringBuilder
struct StringBuilder_t95;
// System.Byte[]
struct ByteU5BU5D_t29;
// Pathfinding.NavGraph[]
struct NavGraphU5BU5D_t28;
// Pathfinding.NavGraph
struct NavGraph_t109;
// Pathfinding.GraphEditorBase[]
struct GraphEditorBaseU5BU5D_t391;
// System.Version
struct Version_t165;
// Pathfinding.GraphNode[]
struct GraphNodeU5BU5D_t129;
// System.IO.BinaryReader
struct BinaryReader_t148;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t392;
// System.String
struct String_t;
// Pathfinding.Serialization.GraphMeta
struct GraphMeta_t161;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Serialization.AstarSerializer::.ctor(Pathfinding.AstarData)
extern "C" void AstarSerializer__ctor_m735 (AstarSerializer_t156 * __this, AstarData_t23 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::.ctor(Pathfinding.AstarData,Pathfinding.Serialization.SerializeSettings)
extern "C" void AstarSerializer__ctor_m736 (AstarSerializer_t156 * __this, AstarData_t23 * ___data, SerializeSettings_t162 * ___settings, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::.cctor()
extern "C" void AstarSerializer__cctor_m737 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder Pathfinding.Serialization.AstarSerializer::GetStringBuilder()
extern "C" StringBuilder_t95 * AstarSerializer_GetStringBuilder_m738 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::SetGraphIndexOffset(System.Int32)
extern "C" void AstarSerializer_SetGraphIndexOffset_m739 (AstarSerializer_t156 * __this, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::AddChecksum(System.Byte[])
extern "C" void AstarSerializer_AddChecksum_m740 (AstarSerializer_t156 * __this, ByteU5BU5D_t29* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Serialization.AstarSerializer::GetChecksum()
extern "C" uint32_t AstarSerializer_GetChecksum_m741 (AstarSerializer_t156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::OpenSerialize()
extern "C" void AstarSerializer_OpenSerialize_m742 (AstarSerializer_t156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Serialization.AstarSerializer::CloseSerialize()
extern "C" ByteU5BU5D_t29* AstarSerializer_CloseSerialize_m743 (AstarSerializer_t156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::SerializeGraphs(Pathfinding.NavGraph[])
extern "C" void AstarSerializer_SerializeGraphs_m744 (AstarSerializer_t156 * __this, NavGraphU5BU5D_t28* ____graphs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Serialization.AstarSerializer::SerializeMeta()
extern "C" ByteU5BU5D_t29* AstarSerializer_SerializeMeta_m745 (AstarSerializer_t156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Serialization.AstarSerializer::Serialize(Pathfinding.NavGraph)
extern "C" ByteU5BU5D_t29* AstarSerializer_Serialize_m746 (AstarSerializer_t156 * __this, NavGraph_t109 * ___graph, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::SerializeNodes()
extern "C" void AstarSerializer_SerializeNodes_m747 (AstarSerializer_t156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Serialization.AstarSerializer::GetMaxNodeIndexInAllGraphs(Pathfinding.NavGraph[])
extern "C" int32_t AstarSerializer_GetMaxNodeIndexInAllGraphs_m748 (Object_t * __this /* static, unused */, NavGraphU5BU5D_t28* ___graphs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Serialization.AstarSerializer::SerializeNodeIndices(Pathfinding.NavGraph[])
extern "C" ByteU5BU5D_t29* AstarSerializer_SerializeNodeIndices_m749 (Object_t * __this /* static, unused */, NavGraphU5BU5D_t28* ___graphs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Serialization.AstarSerializer::SerializeGraphExtraInfo(Pathfinding.NavGraph)
extern "C" ByteU5BU5D_t29* AstarSerializer_SerializeGraphExtraInfo_m750 (Object_t * __this /* static, unused */, NavGraph_t109 * ___graph, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Serialization.AstarSerializer::SerializeGraphNodeReferences(Pathfinding.NavGraph)
extern "C" ByteU5BU5D_t29* AstarSerializer_SerializeGraphNodeReferences_m751 (Object_t * __this /* static, unused */, NavGraph_t109 * ___graph, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::SerializeExtraInfo()
extern "C" void AstarSerializer_SerializeExtraInfo_m752 (AstarSerializer_t156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::SerializeEditorSettings(Pathfinding.GraphEditorBase[])
extern "C" void AstarSerializer_SerializeEditorSettings_m753 (AstarSerializer_t156 * __this, GraphEditorBaseU5BU5D_t391* ___editors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.AstarSerializer::OpenDeserialize(System.Byte[])
extern "C" bool AstarSerializer_OpenDeserialize_m754 (AstarSerializer_t156 * __this, ByteU5BU5D_t29* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version Pathfinding.Serialization.AstarSerializer::FullyDefinedVersion(System.Version)
extern "C" Version_t165 * AstarSerializer_FullyDefinedVersion_m755 (Object_t * __this /* static, unused */, Version_t165 * ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::CloseDeserialize()
extern "C" void AstarSerializer_CloseDeserialize_m756 (AstarSerializer_t156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NavGraph Pathfinding.Serialization.AstarSerializer::DeserializeGraph(System.Int32,System.Int32)
extern "C" NavGraph_t109 * AstarSerializer_DeserializeGraph_m757 (AstarSerializer_t156 * __this, int32_t ___zipIndex, int32_t ___graphIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.NavGraph[] Pathfinding.Serialization.AstarSerializer::DeserializeGraphs()
extern "C" NavGraphU5BU5D_t28* AstarSerializer_DeserializeGraphs_m758 (AstarSerializer_t156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.AstarSerializer::DeserializeExtraInfo(Pathfinding.NavGraph)
extern "C" bool AstarSerializer_DeserializeExtraInfo_m759 (AstarSerializer_t156 * __this, NavGraph_t109 * ___graph, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.AstarSerializer::AnyDestroyedNodesInGraphs()
extern "C" bool AstarSerializer_AnyDestroyedNodesInGraphs_m760 (AstarSerializer_t156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GraphNode[] Pathfinding.Serialization.AstarSerializer::DeserializeNodeReferenceMap()
extern "C" GraphNodeU5BU5D_t129* AstarSerializer_DeserializeNodeReferenceMap_m761 (AstarSerializer_t156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::DeserializeNodeReferences(Pathfinding.NavGraph,Pathfinding.GraphNode[])
extern "C" void AstarSerializer_DeserializeNodeReferences_m762 (AstarSerializer_t156 * __this, NavGraph_t109 * ___graph, GraphNodeU5BU5D_t129* ___int2Node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::DeserializeExtraInfo()
extern "C" void AstarSerializer_DeserializeExtraInfo_m763 (AstarSerializer_t156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::PostDeserialization()
extern "C" void AstarSerializer_PostDeserialization_m764 (AstarSerializer_t156 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::DeserializeEditorSettings(Pathfinding.GraphEditorBase[])
extern "C" void AstarSerializer_DeserializeEditorSettings_m765 (AstarSerializer_t156 * __this, GraphEditorBaseU5BU5D_t391* ___graphEditors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.BinaryReader Pathfinding.Serialization.AstarSerializer::GetBinaryReader(Pathfinding.Ionic.Zip.ZipEntry)
extern "C" BinaryReader_t148 * AstarSerializer_GetBinaryReader_m766 (Object_t * __this /* static, unused */, ZipEntry_t392 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Serialization.AstarSerializer::GetString(Pathfinding.Ionic.Zip.ZipEntry)
extern "C" String_t* AstarSerializer_GetString_m767 (Object_t * __this /* static, unused */, ZipEntry_t392 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.GraphMeta Pathfinding.Serialization.AstarSerializer::DeserializeMeta(Pathfinding.Ionic.Zip.ZipEntry)
extern "C" GraphMeta_t161 * AstarSerializer_DeserializeMeta_m768 (AstarSerializer_t156 * __this, ZipEntry_t392 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.AstarSerializer::SaveToFile(System.String,System.Byte[])
extern "C" void AstarSerializer_SaveToFile_m769 (Object_t * __this /* static, unused */, String_t* ___path, ByteU5BU5D_t29* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Serialization.AstarSerializer::LoadFromFile(System.String)
extern "C" ByteU5BU5D_t29* AstarSerializer_LoadFromFile_m770 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
