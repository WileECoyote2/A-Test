#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Ionic.Zlib.ZlibBaseStream
struct ZlibBaseStream_t1037;
// System.IO.Stream
struct Stream_t448;

#include "mscorlib_System_IO_Stream.h"

// Pathfinding.Ionic.Zlib.DeflateStream
struct  DeflateStream_t1036  : public Stream_t448
{
	// Pathfinding.Ionic.Zlib.ZlibBaseStream Pathfinding.Ionic.Zlib.DeflateStream::_baseStream
	ZlibBaseStream_t1037 * ____baseStream_1;
	// System.IO.Stream Pathfinding.Ionic.Zlib.DeflateStream::_innerStream
	Stream_t448 * ____innerStream_2;
	// System.Boolean Pathfinding.Ionic.Zlib.DeflateStream::_disposed
	bool ____disposed_3;
};
