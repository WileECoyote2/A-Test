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

// Pathfinding.PathHandler
struct PathHandler_t53;
// Pathfinding.PathNode
struct PathNode_t105;
// Pathfinding.BinaryHeapM
struct BinaryHeapM_t106;
// Pathfinding.Path
struct Path_t10;
// Pathfinding.GraphNode
struct GraphNode_t61;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.PathHandler::.ctor(System.Int32,System.Int32)
extern "C" void PathHandler__ctor_m678 (PathHandler_t53 * __this, int32_t ___threadID, int32_t ___totalThreadCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Pathfinding.PathHandler::get_PathID()
extern "C" uint16_t PathHandler_get_PathID_m679 (PathHandler_t53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathHandler::PushNode(Pathfinding.PathNode)
extern "C" void PathHandler_PushNode_m680 (PathHandler_t53 * __this, PathNode_t105 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.PathNode Pathfinding.PathHandler::PopNode()
extern "C" PathNode_t105 * PathHandler_PopNode_m681 (PathHandler_t53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.BinaryHeapM Pathfinding.PathHandler::GetHeap()
extern "C" BinaryHeapM_t106 * PathHandler_GetHeap_m682 (PathHandler_t53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathHandler::RebuildHeap()
extern "C" void PathHandler_RebuildHeap_m683 (PathHandler_t53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.PathHandler::HeapEmpty()
extern "C" bool PathHandler_HeapEmpty_m684 (PathHandler_t53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathHandler::InitializeForPath(Pathfinding.Path)
extern "C" void PathHandler_InitializeForPath_m685 (PathHandler_t53 * __this, Path_t10 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathHandler::DestroyNode(Pathfinding.GraphNode)
extern "C" void PathHandler_DestroyNode_m686 (PathHandler_t53 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathHandler::InitializeNode(Pathfinding.GraphNode)
extern "C" void PathHandler_InitializeNode_m687 (PathHandler_t53 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.PathNode Pathfinding.PathHandler::GetPathNode(System.Int32)
extern "C" PathNode_t105 * PathHandler_GetPathNode_m688 (PathHandler_t53 * __this, int32_t ___nodeIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.PathNode Pathfinding.PathHandler::GetPathNode(Pathfinding.GraphNode)
extern "C" PathNode_t105 * PathHandler_GetPathNode_m689 (PathHandler_t53 * __this, GraphNode_t61 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathHandler::ClearPathIDs()
extern "C" void PathHandler_ClearPathIDs_m690 (PathHandler_t53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
