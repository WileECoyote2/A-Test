#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.NNConstraint
struct NNConstraint_t132;
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t19;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t172;
// System.Collections.Generic.List`1<Pathfinding.Int3>
struct List_1_t173;
// Pathfinding.GraphUpdateShape
struct GraphUpdateShape_t83;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Bounds.h"

// Pathfinding.GraphUpdateObject
struct  GraphUpdateObject_t42  : public Object_t
{
	// UnityEngine.Bounds Pathfinding.GraphUpdateObject::bounds
	Bounds_t171  ___bounds_0;
	// System.Boolean Pathfinding.GraphUpdateObject::requiresFloodFill
	bool ___requiresFloodFill_1;
	// System.Boolean Pathfinding.GraphUpdateObject::updatePhysics
	bool ___updatePhysics_2;
	// System.Boolean Pathfinding.GraphUpdateObject::resetPenaltyOnPhysics
	bool ___resetPenaltyOnPhysics_3;
	// System.Boolean Pathfinding.GraphUpdateObject::updateErosion
	bool ___updateErosion_4;
	// Pathfinding.NNConstraint Pathfinding.GraphUpdateObject::nnConstraint
	NNConstraint_t132 * ___nnConstraint_5;
	// System.Int32 Pathfinding.GraphUpdateObject::addPenalty
	int32_t ___addPenalty_6;
	// System.Boolean Pathfinding.GraphUpdateObject::modifyWalkability
	bool ___modifyWalkability_7;
	// System.Boolean Pathfinding.GraphUpdateObject::setWalkability
	bool ___setWalkability_8;
	// System.Boolean Pathfinding.GraphUpdateObject::modifyTag
	bool ___modifyTag_9;
	// System.Int32 Pathfinding.GraphUpdateObject::setTag
	int32_t ___setTag_10;
	// System.Boolean Pathfinding.GraphUpdateObject::trackChangedNodes
	bool ___trackChangedNodes_11;
	// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.GraphUpdateObject::changedNodes
	List_1_t19 * ___changedNodes_12;
	// System.Collections.Generic.List`1<System.UInt32> Pathfinding.GraphUpdateObject::backupData
	List_1_t172 * ___backupData_13;
	// System.Collections.Generic.List`1<Pathfinding.Int3> Pathfinding.GraphUpdateObject::backupPositionData
	List_1_t173 * ___backupPositionData_14;
	// Pathfinding.GraphUpdateShape Pathfinding.GraphUpdateObject::shape
	GraphUpdateShape_t83 * ___shape_15;
};
