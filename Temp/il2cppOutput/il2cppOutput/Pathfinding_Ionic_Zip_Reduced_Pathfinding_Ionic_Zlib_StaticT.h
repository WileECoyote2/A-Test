#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int16[]
struct Int16U5BU5D_t1033;
// Pathfinding.Ionic.Zlib.StaticTree
struct StaticTree_t1051;
// System.Int32[]
struct Int32U5BU5D_t16;

#include "mscorlib_System_Object.h"

// Pathfinding.Ionic.Zlib.StaticTree
struct  StaticTree_t1051  : public Object_t
{
	// System.Int16[] Pathfinding.Ionic.Zlib.StaticTree::treeCodes
	Int16U5BU5D_t1033* ___treeCodes_5;
	// System.Int32[] Pathfinding.Ionic.Zlib.StaticTree::extraBits
	Int32U5BU5D_t16* ___extraBits_6;
	// System.Int32 Pathfinding.Ionic.Zlib.StaticTree::extraBase
	int32_t ___extraBase_7;
	// System.Int32 Pathfinding.Ionic.Zlib.StaticTree::elems
	int32_t ___elems_8;
	// System.Int32 Pathfinding.Ionic.Zlib.StaticTree::maxLength
	int32_t ___maxLength_9;
};
struct StaticTree_t1051_StaticFields{
	// System.Int16[] Pathfinding.Ionic.Zlib.StaticTree::lengthAndLiteralsTreeCodes
	Int16U5BU5D_t1033* ___lengthAndLiteralsTreeCodes_0;
	// System.Int16[] Pathfinding.Ionic.Zlib.StaticTree::distTreeCodes
	Int16U5BU5D_t1033* ___distTreeCodes_1;
	// Pathfinding.Ionic.Zlib.StaticTree Pathfinding.Ionic.Zlib.StaticTree::Literals
	StaticTree_t1051 * ___Literals_2;
	// Pathfinding.Ionic.Zlib.StaticTree Pathfinding.Ionic.Zlib.StaticTree::Distances
	StaticTree_t1051 * ___Distances_3;
	// Pathfinding.Ionic.Zlib.StaticTree Pathfinding.Ionic.Zlib.StaticTree::BitLengths
	StaticTree_t1051 * ___BitLengths_4;
};
