#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_MonoModifier.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_SimpleSmoothModifi.h"

// Pathfinding.SimpleSmoothModifier
struct  SimpleSmoothModifier_t246  : public MonoModifier_t241
{
	// Pathfinding.SimpleSmoothModifier/SmoothType Pathfinding.SimpleSmoothModifier::smoothType
	int32_t ___smoothType_3;
	// System.Int32 Pathfinding.SimpleSmoothModifier::subdivisions
	int32_t ___subdivisions_4;
	// System.Int32 Pathfinding.SimpleSmoothModifier::iterations
	int32_t ___iterations_5;
	// System.Single Pathfinding.SimpleSmoothModifier::strength
	float ___strength_6;
	// System.Boolean Pathfinding.SimpleSmoothModifier::uniformLength
	bool ___uniformLength_7;
	// System.Single Pathfinding.SimpleSmoothModifier::maxSegmentLength
	float ___maxSegmentLength_8;
	// System.Single Pathfinding.SimpleSmoothModifier::bezierTangentLength
	float ___bezierTangentLength_9;
	// System.Single Pathfinding.SimpleSmoothModifier::offset
	float ___offset_10;
	// System.Single Pathfinding.SimpleSmoothModifier::factor
	float ___factor_11;
};
