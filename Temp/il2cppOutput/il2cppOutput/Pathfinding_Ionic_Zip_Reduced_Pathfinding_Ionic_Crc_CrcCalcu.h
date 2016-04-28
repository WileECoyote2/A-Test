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
// Pathfinding.Ionic.Crc.CRC32
struct CRC32_t997;

#include "mscorlib_System_IO_Stream.h"

// Pathfinding.Ionic.Crc.CrcCalculatorStream
struct  CrcCalculatorStream_t1022  : public Stream_t448
{
	// System.IO.Stream Pathfinding.Ionic.Crc.CrcCalculatorStream::_innerStream
	Stream_t448 * ____innerStream_2;
	// Pathfinding.Ionic.Crc.CRC32 Pathfinding.Ionic.Crc.CrcCalculatorStream::_Crc32
	CRC32_t997 * ____Crc32_3;
	// System.Int64 Pathfinding.Ionic.Crc.CrcCalculatorStream::_lengthLimit
	int64_t ____lengthLimit_4;
	// System.Boolean Pathfinding.Ionic.Crc.CrcCalculatorStream::_leaveOpen
	bool ____leaveOpen_5;
};
struct CrcCalculatorStream_t1022_StaticFields{
	// System.Int64 Pathfinding.Ionic.Crc.CrcCalculatorStream::UnsetLengthLimit
	int64_t ___UnsetLengthLimit_1;
};
