#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.GraphCollision
struct GraphCollision_t220;
// System.Int32[]
struct Int32U5BU5D_t16;
// System.UInt32[]
struct UInt32U5BU5D_t130;
// Pathfinding.GridNode[]
struct GridNodeU5BU5D_t184;

#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_NavGraph.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Bounds.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_NumNeighbours.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// Pathfinding.GridGraph
struct  GridGraph_t32  : public NavGraph_t109
{
	// System.Int32 Pathfinding.GridGraph::width
	int32_t ___width_12;
	// System.Int32 Pathfinding.GridGraph::depth
	int32_t ___depth_13;
	// System.Single Pathfinding.GridGraph::aspectRatio
	float ___aspectRatio_14;
	// System.Single Pathfinding.GridGraph::isometricAngle
	float ___isometricAngle_15;
	// System.Boolean Pathfinding.GridGraph::uniformEdgeCosts
	bool ___uniformEdgeCosts_16;
	// UnityEngine.Vector3 Pathfinding.GridGraph::rotation
	Vector3_t7  ___rotation_17;
	// UnityEngine.Bounds Pathfinding.GridGraph::bounds
	Bounds_t171  ___bounds_18;
	// UnityEngine.Vector3 Pathfinding.GridGraph::center
	Vector3_t7  ___center_19;
	// UnityEngine.Vector2 Pathfinding.GridGraph::unclampedSize
	Vector2_t189  ___unclampedSize_20;
	// System.Single Pathfinding.GridGraph::nodeSize
	float ___nodeSize_21;
	// Pathfinding.GraphCollision Pathfinding.GridGraph::collision
	GraphCollision_t220 * ___collision_22;
	// System.Single Pathfinding.GridGraph::maxClimb
	float ___maxClimb_23;
	// System.Int32 Pathfinding.GridGraph::maxClimbAxis
	int32_t ___maxClimbAxis_24;
	// System.Single Pathfinding.GridGraph::maxSlope
	float ___maxSlope_25;
	// System.Int32 Pathfinding.GridGraph::erodeIterations
	int32_t ___erodeIterations_26;
	// System.Boolean Pathfinding.GridGraph::erosionUseTags
	bool ___erosionUseTags_27;
	// System.Int32 Pathfinding.GridGraph::erosionFirstTag
	int32_t ___erosionFirstTag_28;
	// System.Boolean Pathfinding.GridGraph::autoLinkGrids
	bool ___autoLinkGrids_29;
	// System.Single Pathfinding.GridGraph::autoLinkDistLimit
	float ___autoLinkDistLimit_30;
	// Pathfinding.NumNeighbours Pathfinding.GridGraph::neighbours
	int32_t ___neighbours_31;
	// System.Boolean Pathfinding.GridGraph::cutCorners
	bool ___cutCorners_32;
	// System.Single Pathfinding.GridGraph::penaltyPositionOffset
	float ___penaltyPositionOffset_33;
	// System.Boolean Pathfinding.GridGraph::penaltyPosition
	bool ___penaltyPosition_34;
	// System.Single Pathfinding.GridGraph::penaltyPositionFactor
	float ___penaltyPositionFactor_35;
	// System.Boolean Pathfinding.GridGraph::penaltyAngle
	bool ___penaltyAngle_36;
	// System.Single Pathfinding.GridGraph::penaltyAngleFactor
	float ___penaltyAngleFactor_37;
	// System.Single Pathfinding.GridGraph::penaltyAnglePower
	float ___penaltyAnglePower_38;
	// System.Int32[] Pathfinding.GridGraph::neighbourOffsets
	Int32U5BU5D_t16* ___neighbourOffsets_39;
	// System.UInt32[] Pathfinding.GridGraph::neighbourCosts
	UInt32U5BU5D_t130* ___neighbourCosts_40;
	// System.Int32[] Pathfinding.GridGraph::neighbourXOffsets
	Int32U5BU5D_t16* ___neighbourXOffsets_41;
	// System.Int32[] Pathfinding.GridGraph::neighbourZOffsets
	Int32U5BU5D_t16* ___neighbourZOffsets_42;
	// Pathfinding.GridNode[] Pathfinding.GridGraph::nodes
	GridNodeU5BU5D_t184* ___nodes_44;
	// UnityEngine.Vector2 Pathfinding.GridGraph::<size>k__BackingField
	Vector2_t189  ___U3CsizeU3Ek__BackingField_45;
	// UnityEngine.Matrix4x4 Pathfinding.GridGraph::<boundsMatrix>k__BackingField
	Matrix4x4_t216  ___U3CboundsMatrixU3Ek__BackingField_46;
};
struct GridGraph_t32_StaticFields{
	// System.Int32[] Pathfinding.GridGraph::hexagonNeighbourIndices
	Int32U5BU5D_t16* ___hexagonNeighbourIndices_43;
};
