#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.Stream
struct Stream_t448;

#include "mscorlib_System_IO_Stream.h"

// Pathfinding.Ionic.Zip.OffsetStream
struct  OffsetStream_t993  : public Stream_t448
{
	// System.Int64 Pathfinding.Ionic.Zip.OffsetStream::_originalPosition
	int64_t ____originalPosition_1;
	// System.IO.Stream Pathfinding.Ionic.Zip.OffsetStream::_innerStream
	Stream_t448 * ____innerStream_2;
};
