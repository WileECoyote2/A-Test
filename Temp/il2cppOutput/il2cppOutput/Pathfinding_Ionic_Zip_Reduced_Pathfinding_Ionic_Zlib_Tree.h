#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t16;
// System.SByte[]
struct SByteU5BU5D_t1035;
// System.Int16[]
struct Int16U5BU5D_t1033;
// Pathfinding.Ionic.Zlib.StaticTree
struct StaticTree_t1051;

#include "mscorlib_System_Object.h"

// Pathfinding.Ionic.Zlib.Tree
struct  Tree_t1034  : public Object_t
{
	// System.Int16[] Pathfinding.Ionic.Zlib.Tree::dyn_tree
	Int16U5BU5D_t1033* ___dyn_tree_9;
	// System.Int32 Pathfinding.Ionic.Zlib.Tree::max_code
	int32_t ___max_code_10;
	// Pathfinding.Ionic.Zlib.StaticTree Pathfinding.Ionic.Zlib.Tree::staticTree
	StaticTree_t1051 * ___staticTree_11;
};
struct Tree_t1034_StaticFields{
	// System.Int32 Pathfinding.Ionic.Zlib.Tree::HEAP_SIZE
	int32_t ___HEAP_SIZE_0;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::ExtraLengthBits
	Int32U5BU5D_t16* ___ExtraLengthBits_1;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::ExtraDistanceBits
	Int32U5BU5D_t16* ___ExtraDistanceBits_2;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::extra_blbits
	Int32U5BU5D_t16* ___extra_blbits_3;
	// System.SByte[] Pathfinding.Ionic.Zlib.Tree::bl_order
	SByteU5BU5D_t1035* ___bl_order_4;
	// System.SByte[] Pathfinding.Ionic.Zlib.Tree::_dist_code
	SByteU5BU5D_t1035* ____dist_code_5;
	// System.SByte[] Pathfinding.Ionic.Zlib.Tree::LengthCode
	SByteU5BU5D_t1035* ___LengthCode_6;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::LengthBase
	Int32U5BU5D_t16* ___LengthBase_7;
	// System.Int32[] Pathfinding.Ionic.Zlib.Tree::DistanceBase
	Int32U5BU5D_t16* ___DistanceBase_8;
};
