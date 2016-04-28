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
// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1032;

#include "mscorlib_System_Object.h"

// Pathfinding.Ionic.Zlib.WorkItem
struct  WorkItem_t1047  : public Object_t
{
	// System.Byte[] Pathfinding.Ionic.Zlib.WorkItem::buffer
	ByteU5BU5D_t29* ___buffer_0;
	// System.Byte[] Pathfinding.Ionic.Zlib.WorkItem::compressed
	ByteU5BU5D_t29* ___compressed_1;
	// System.Int32 Pathfinding.Ionic.Zlib.WorkItem::crc
	int32_t ___crc_2;
	// System.Int32 Pathfinding.Ionic.Zlib.WorkItem::index
	int32_t ___index_3;
	// System.Int32 Pathfinding.Ionic.Zlib.WorkItem::ordinal
	int32_t ___ordinal_4;
	// System.Int32 Pathfinding.Ionic.Zlib.WorkItem::inputBytesAvailable
	int32_t ___inputBytesAvailable_5;
	// System.Int32 Pathfinding.Ionic.Zlib.WorkItem::compressedBytesAvailable
	int32_t ___compressedBytesAvailable_6;
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.WorkItem::compressor
	ZlibCodec_t1032 * ___compressor_7;
};
