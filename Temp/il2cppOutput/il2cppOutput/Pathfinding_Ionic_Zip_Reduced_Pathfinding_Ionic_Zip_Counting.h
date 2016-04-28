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

// Pathfinding.Ionic.Zip.CountingStream
struct  CountingStream_t995  : public Stream_t448
{
	// System.IO.Stream Pathfinding.Ionic.Zip.CountingStream::_s
	Stream_t448 * ____s_1;
	// System.Int64 Pathfinding.Ionic.Zip.CountingStream::_bytesWritten
	int64_t ____bytesWritten_2;
	// System.Int64 Pathfinding.Ionic.Zip.CountingStream::_bytesRead
	int64_t ____bytesRead_3;
	// System.Int64 Pathfinding.Ionic.Zip.CountingStream::_initialOffset
	int64_t ____initialOffset_4;
};
