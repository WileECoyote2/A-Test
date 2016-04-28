#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OnPathDelegate
struct OnPathDelegate_t17;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t19;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t18;
// Pathfinding.PathNode
struct PathNode_t105;
// Pathfinding.NNConstraint
struct NNConstraint_t132;
// Pathfinding.Path
struct Path_t10;
// Pathfinding.GraphNode
struct GraphNode_t61;
// System.Int32[]
struct Int32U5BU5D_t16;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t133;
// Pathfinding.PathHandler
struct PathHandler_t53;

#include "mscorlib_System_Object.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PathState.h"
#include "AssemblyU2DCSharpU2Dfirstpass_PathCompleteState.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Heuristic.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_Int3.h"
#include "mscorlib_System_DateTime.h"

// Pathfinding.Path
struct  Path_t10  : public Object_t
{
	// OnPathDelegate Pathfinding.Path::callback
	OnPathDelegate_t17 * ___callback_0;
	// OnPathDelegate Pathfinding.Path::immediateCallback
	OnPathDelegate_t17 * ___immediateCallback_1;
	// PathState Pathfinding.Path::state
	int32_t ___state_2;
	// System.Object Pathfinding.Path::stateLock
	Object_t * ___stateLock_3;
	// PathCompleteState Pathfinding.Path::pathCompleteState
	int32_t ___pathCompleteState_4;
	// System.String Pathfinding.Path::_errorLog
	String_t* ____errorLog_5;
	// System.Collections.Generic.List`1<Pathfinding.GraphNode> Pathfinding.Path::path
	List_1_t19 * ___path_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Pathfinding.Path::vectorPath
	List_1_t18 * ___vectorPath_7;
	// System.Single Pathfinding.Path::maxFrameTime
	float ___maxFrameTime_8;
	// Pathfinding.PathNode Pathfinding.Path::currentR
	PathNode_t105 * ___currentR_9;
	// System.Single Pathfinding.Path::duration
	float ___duration_10;
	// System.Int32 Pathfinding.Path::searchIterations
	int32_t ___searchIterations_11;
	// System.Int32 Pathfinding.Path::searchedNodes
	int32_t ___searchedNodes_12;
	// System.Boolean Pathfinding.Path::pooled
	bool ___pooled_13;
	// System.Boolean Pathfinding.Path::hasBeenReset
	bool ___hasBeenReset_14;
	// Pathfinding.NNConstraint Pathfinding.Path::nnConstraint
	NNConstraint_t132 * ___nnConstraint_15;
	// Pathfinding.Path Pathfinding.Path::next
	Path_t10 * ___next_16;
	// Heuristic Pathfinding.Path::heuristic
	int32_t ___heuristic_17;
	// System.Single Pathfinding.Path::heuristicScale
	float ___heuristicScale_18;
	// Pathfinding.GraphNode Pathfinding.Path::hTargetNode
	GraphNode_t61 * ___hTargetNode_19;
	// Pathfinding.Int3 Pathfinding.Path::hTarget
	Int3_t111  ___hTarget_20;
	// System.Int32 Pathfinding.Path::enabledTags
	int32_t ___enabledTags_21;
	// System.Int32[] Pathfinding.Path::internalTagPenalties
	Int32U5BU5D_t16* ___internalTagPenalties_23;
	// System.Int32[] Pathfinding.Path::manualTagPenalties
	Int32U5BU5D_t16* ___manualTagPenalties_24;
	// System.Collections.Generic.List`1<System.Object> Pathfinding.Path::claimed
	List_1_t133 * ___claimed_25;
	// System.Boolean Pathfinding.Path::releasedNotSilent
	bool ___releasedNotSilent_26;
	// Pathfinding.PathHandler Pathfinding.Path::<pathHandler>k__BackingField
	PathHandler_t53 * ___U3CpathHandlerU3Ek__BackingField_27;
	// System.DateTime Pathfinding.Path::<callTime>k__BackingField
	DateTime_t134  ___U3CcallTimeU3Ek__BackingField_28;
	// System.UInt16 Pathfinding.Path::<pathID>k__BackingField
	uint16_t ___U3CpathIDU3Ek__BackingField_29;
};
struct Path_t10_StaticFields{
	// System.Int32[] Pathfinding.Path::ZeroTagPenalties
	Int32U5BU5D_t16* ___ZeroTagPenalties_22;
};
