#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.GraphNode[]
struct GraphNodeU5BU5D_t129;
// System.IO.BinaryReader
struct BinaryReader_t148;
// System.IO.BinaryWriter
struct BinaryWriter_t149;

#include "mscorlib_System_Object.h"

// Pathfinding.Serialization.GraphSerializationContext
struct  GraphSerializationContext_t147  : public Object_t
{
	// Pathfinding.GraphNode[] Pathfinding.Serialization.GraphSerializationContext::id2NodeMapping
	GraphNodeU5BU5D_t129* ___id2NodeMapping_0;
	// System.IO.BinaryReader Pathfinding.Serialization.GraphSerializationContext::reader
	BinaryReader_t148 * ___reader_1;
	// System.IO.BinaryWriter Pathfinding.Serialization.GraphSerializationContext::writer
	BinaryWriter_t149 * ___writer_2;
	// System.UInt32 Pathfinding.Serialization.GraphSerializationContext::graphIndex
	uint32_t ___graphIndex_3;
};
