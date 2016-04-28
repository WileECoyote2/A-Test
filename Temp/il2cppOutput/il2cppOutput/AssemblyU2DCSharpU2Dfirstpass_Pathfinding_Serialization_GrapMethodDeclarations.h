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

// Pathfinding.Serialization.GraphSerializationContext
struct GraphSerializationContext_t147;
// System.IO.BinaryReader
struct BinaryReader_t148;
// Pathfinding.GraphNode[]
struct GraphNodeU5BU5D_t129;
// System.IO.BinaryWriter
struct BinaryWriter_t149;
// Pathfinding.GraphNode
struct GraphNode_t61;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Serialization.GraphSerializationContext::.ctor(System.IO.BinaryReader,Pathfinding.GraphNode[],System.UInt32)
extern "C" void GraphSerializationContext__ctor_m719 (GraphSerializationContext_t147 * __this, BinaryReader_t148 * ___reader, GraphNodeU5BU5D_t129* ___id2NodeMapping, uint32_t ___graphIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.GraphSerializationContext::.ctor(System.IO.BinaryWriter)
extern "C" void GraphSerializationContext__ctor_m720 (GraphSerializationContext_t147 * __this, BinaryWriter_t149 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Serialization.GraphSerializationContext::GetNodeIdentifier(Pathfinding.GraphNode)
extern "C" int32_t GraphSerializationContext_GetNodeIdentifier_m721 (GraphSerializationContext_t147 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.GraphNode Pathfinding.Serialization.GraphSerializationContext::GetNodeFromIdentifier(System.Int32)
extern "C" GraphNode_t61 * GraphSerializationContext_GetNodeFromIdentifier_m722 (GraphSerializationContext_t147 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
