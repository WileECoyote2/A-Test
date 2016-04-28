#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t29;
// AstarPath
struct AstarPath_t48;
// System.String
struct String_t;
// Pathfinding.GraphNodeDelegateCancelable
struct GraphNodeDelegateCancelable_t78;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// Pathfinding.NavGraph
struct  NavGraph_t109  : public Object_t
{
	// System.Byte[] Pathfinding.NavGraph::_sguid
	ByteU5BU5D_t29* ____sguid_0;
	// AstarPath Pathfinding.NavGraph::active
	AstarPath_t48 * ___active_1;
	// System.UInt32 Pathfinding.NavGraph::initialPenalty
	uint32_t ___initialPenalty_2;
	// System.Boolean Pathfinding.NavGraph::open
	bool ___open_3;
	// System.UInt32 Pathfinding.NavGraph::graphIndex
	uint32_t ___graphIndex_4;
	// System.String Pathfinding.NavGraph::name
	String_t* ___name_5;
	// System.Boolean Pathfinding.NavGraph::drawGizmos
	bool ___drawGizmos_6;
	// System.Boolean Pathfinding.NavGraph::infoScreenOpen
	bool ___infoScreenOpen_7;
	// UnityEngine.Matrix4x4 Pathfinding.NavGraph::matrix
	Matrix4x4_t216  ___matrix_8;
	// UnityEngine.Matrix4x4 Pathfinding.NavGraph::inverseMatrix
	Matrix4x4_t216  ___inverseMatrix_9;
};
struct NavGraph_t109_StaticFields{
	// Pathfinding.GraphNodeDelegateCancelable Pathfinding.NavGraph::<>f__am$cacheA
	GraphNodeDelegateCancelable_t78 * ___U3CU3Ef__amU24cacheA_10;
};
