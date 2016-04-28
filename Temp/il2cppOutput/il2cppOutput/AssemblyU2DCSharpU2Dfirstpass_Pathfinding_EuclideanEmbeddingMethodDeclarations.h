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

// Pathfinding.EuclideanEmbedding
struct EuclideanEmbedding_t67;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.EuclideanEmbedding::.ctor()
extern "C" void EuclideanEmbedding__ctor_m1130 (EuclideanEmbedding_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.EuclideanEmbedding::EnsureCapacity(System.Int32)
extern "C" void EuclideanEmbedding_EnsureCapacity_m1131 (EuclideanEmbedding_t67 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.EuclideanEmbedding::GetHeuristic(System.Int32,System.Int32)
extern "C" uint32_t EuclideanEmbedding_GetHeuristic_m1132 (EuclideanEmbedding_t67 * __this, int32_t ___nodeIndex1, int32_t ___nodeIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.EuclideanEmbedding::RecalculatePivots()
extern "C" void EuclideanEmbedding_RecalculatePivots_m1133 (EuclideanEmbedding_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.EuclideanEmbedding::RecalculateCosts()
extern "C" void EuclideanEmbedding_RecalculateCosts_m1134 (EuclideanEmbedding_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.EuclideanEmbedding::OnDrawGizmos()
extern "C" void EuclideanEmbedding_OnDrawGizmos_m1135 (EuclideanEmbedding_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
