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

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_HeuristicOptimizat.h"

// Pathfinding.EuclideanEmbedding
struct  EuclideanEmbedding_t67  : public Object_t
{
	// Pathfinding.HeuristicOptimizationMode Pathfinding.EuclideanEmbedding::mode
	int32_t ___mode_0;
	// System.Int32 Pathfinding.EuclideanEmbedding::seed
	int32_t ___seed_1;
	// UnityEngine.Transform Pathfinding.EuclideanEmbedding::pivotPointRoot
	Transform_t4 * ___pivotPointRoot_2;
	// System.Int32 Pathfinding.EuclideanEmbedding::spreadOutCount
	int32_t ___spreadOutCount_3;
	// System.Boolean Pathfinding.EuclideanEmbedding::dirty
	bool ___dirty_4;
};
