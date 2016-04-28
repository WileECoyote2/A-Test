#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Version
struct Version_t165;
// System.String[]
struct StringU5BU5D_t63;
// System.Int32[]
struct Int32U5BU5D_t16;

#include "mscorlib_System_Object.h"

// Pathfinding.Serialization.GraphMeta
struct  GraphMeta_t161  : public Object_t
{
	// System.Version Pathfinding.Serialization.GraphMeta::version
	Version_t165 * ___version_0;
	// System.Int32 Pathfinding.Serialization.GraphMeta::graphs
	int32_t ___graphs_1;
	// System.String[] Pathfinding.Serialization.GraphMeta::guids
	StringU5BU5D_t63* ___guids_2;
	// System.String[] Pathfinding.Serialization.GraphMeta::typeNames
	StringU5BU5D_t63* ___typeNames_3;
	// System.Int32[] Pathfinding.Serialization.GraphMeta::nodeCounts
	Int32U5BU5D_t16* ___nodeCounts_4;
};
