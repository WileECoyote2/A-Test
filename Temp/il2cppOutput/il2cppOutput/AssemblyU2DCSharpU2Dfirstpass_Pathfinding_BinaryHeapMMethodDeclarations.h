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

// Pathfinding.BinaryHeapM
struct BinaryHeapM_t106;
// Pathfinding.PathNode
struct PathNode_t105;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.BinaryHeapM::.ctor(System.Int32)
extern "C" void BinaryHeapM__ctor_m425 (BinaryHeapM_t106 * __this, int32_t ___numberOfElements, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.BinaryHeapM::Clear()
extern "C" void BinaryHeapM_Clear_m426 (BinaryHeapM_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.PathNode Pathfinding.BinaryHeapM::GetNode(System.Int32)
extern "C" PathNode_t105 * BinaryHeapM_GetNode_m427 (BinaryHeapM_t106 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.BinaryHeapM::SetF(System.Int32,System.UInt32)
extern "C" void BinaryHeapM_SetF_m428 (BinaryHeapM_t106 * __this, int32_t ___i, uint32_t ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.BinaryHeapM::Add(Pathfinding.PathNode)
extern "C" void BinaryHeapM_Add_m429 (BinaryHeapM_t106 * __this, PathNode_t105 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.PathNode Pathfinding.BinaryHeapM::Remove()
extern "C" PathNode_t105 * BinaryHeapM_Remove_m430 (BinaryHeapM_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.BinaryHeapM::Validate()
extern "C" void BinaryHeapM_Validate_m431 (BinaryHeapM_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.BinaryHeapM::Rebuild()
extern "C" void BinaryHeapM_Rebuild_m432 (BinaryHeapM_t106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
