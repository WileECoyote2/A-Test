#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.StartEndModifier
struct StartEndModifier_t14;
// Pathfinding.TagMask
struct TagMask_t15;
// System.Int32[]
struct Int32U5BU5D_t16;
// OnPathDelegate
struct OnPathDelegate_t17;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t18;
// System.Collections.Generic.List`1<Pathfinding.GraphNode>
struct List_1_t19;
// Pathfinding.Path
struct Path_t10;
// System.Collections.Generic.List`1<Pathfinding.IPathModifier>
struct List_1_t20;
// System.Comparison`1<Pathfinding.IPathModifier>
struct Comparison_1_t21;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Seeker
struct  Seeker_t5  : public MonoBehaviour_t3
{
	// System.Boolean Seeker::drawGizmos
	bool ___drawGizmos_2;
	// System.Boolean Seeker::detailedGizmos
	bool ___detailedGizmos_3;
	// Pathfinding.StartEndModifier Seeker::startEndModifier
	StartEndModifier_t14 * ___startEndModifier_4;
	// System.Int32 Seeker::traversableTags
	int32_t ___traversableTags_5;
	// Pathfinding.TagMask Seeker::traversableTagsCompatibility
	TagMask_t15 * ___traversableTagsCompatibility_6;
	// System.Int32[] Seeker::tagPenalties
	Int32U5BU5D_t16* ___tagPenalties_7;
	// OnPathDelegate Seeker::pathCallback
	OnPathDelegate_t17 * ___pathCallback_8;
	// OnPathDelegate Seeker::preProcessPath
	OnPathDelegate_t17 * ___preProcessPath_9;
	// OnPathDelegate Seeker::postProcessPath
	OnPathDelegate_t17 * ___postProcessPath_10;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> Seeker::lastCompletedVectorPath
	List_1_t18 * ___lastCompletedVectorPath_11;
	// System.Collections.Generic.List`1<Pathfinding.GraphNode> Seeker::lastCompletedNodePath
	List_1_t19 * ___lastCompletedNodePath_12;
	// Pathfinding.Path Seeker::path
	Path_t10 * ___path_13;
	// Pathfinding.Path Seeker::prevPath
	Path_t10 * ___prevPath_14;
	// OnPathDelegate Seeker::onPathDelegate
	OnPathDelegate_t17 * ___onPathDelegate_15;
	// OnPathDelegate Seeker::tmpPathCallback
	OnPathDelegate_t17 * ___tmpPathCallback_16;
	// System.UInt32 Seeker::lastPathID
	uint32_t ___lastPathID_17;
	// System.Collections.Generic.List`1<Pathfinding.IPathModifier> Seeker::modifiers
	List_1_t20 * ___modifiers_18;
};
struct Seeker_t5_StaticFields{
	// System.Comparison`1<Pathfinding.IPathModifier> Seeker::<>f__am$cache11
	Comparison_1_t21 * ___U3CU3Ef__amU24cache11_19;
};
