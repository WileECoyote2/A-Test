#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh
struct Mesh_t226;
// Pathfinding.TriangleMeshNode[]
struct TriangleMeshNodeU5BU5D_t227;
// Pathfinding.BBTree
struct BBTree_t228;
// Pathfinding.Int3[]
struct Int3U5BU5D_t229;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t82;
// System.Int32[]
struct Int32U5BU5D_t16;

#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_NavGraph.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Pathfinding.NavMeshGraph
struct  NavMeshGraph_t31  : public NavGraph_t109
{
	// UnityEngine.Mesh Pathfinding.NavMeshGraph::sourceMesh
	Mesh_t226 * ___sourceMesh_11;
	// UnityEngine.Vector3 Pathfinding.NavMeshGraph::offset
	Vector3_t7  ___offset_12;
	// UnityEngine.Vector3 Pathfinding.NavMeshGraph::rotation
	Vector3_t7  ___rotation_13;
	// System.Single Pathfinding.NavMeshGraph::scale
	float ___scale_14;
	// System.Boolean Pathfinding.NavMeshGraph::accurateNearestNode
	bool ___accurateNearestNode_15;
	// Pathfinding.TriangleMeshNode[] Pathfinding.NavMeshGraph::nodes
	TriangleMeshNodeU5BU5D_t227* ___nodes_16;
	// Pathfinding.BBTree Pathfinding.NavMeshGraph::_bbTree
	BBTree_t228 * ____bbTree_17;
	// Pathfinding.Int3[] Pathfinding.NavMeshGraph::_vertices
	Int3U5BU5D_t229* ____vertices_18;
	// UnityEngine.Vector3[] Pathfinding.NavMeshGraph::originalVertices
	Vector3U5BU5D_t82* ___originalVertices_19;
	// System.Int32[] Pathfinding.NavMeshGraph::triangles
	Int32U5BU5D_t16* ___triangles_20;
};
