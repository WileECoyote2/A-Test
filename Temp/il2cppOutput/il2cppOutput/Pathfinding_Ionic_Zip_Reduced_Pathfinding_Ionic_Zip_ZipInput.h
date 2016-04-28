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
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t392;
// Pathfinding.Ionic.Crc.CrcCalculatorStream
struct CrcCalculatorStream_t1022;
// System.String
struct String_t;

#include "mscorlib_System_IO_Stream.h"

// Pathfinding.Ionic.Zip.ZipInputStream
struct  ZipInputStream_t1021  : public Stream_t448
{
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipInputStream::_inputStream
	Stream_t448 * ____inputStream_1;
	// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipInputStream::_currentEntry
	ZipEntry_t392 * ____currentEntry_2;
	// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::_needSetup
	bool ____needSetup_3;
	// Pathfinding.Ionic.Crc.CrcCalculatorStream Pathfinding.Ionic.Zip.ZipInputStream::_crcStream
	CrcCalculatorStream_t1022 * ____crcStream_4;
	// System.Int64 Pathfinding.Ionic.Zip.ZipInputStream::_LeftToRead
	int64_t ____LeftToRead_5;
	// System.String Pathfinding.Ionic.Zip.ZipInputStream::_Password
	String_t* ____Password_6;
	// System.Int64 Pathfinding.Ionic.Zip.ZipInputStream::_endOfEntry
	int64_t ____endOfEntry_7;
	// System.String Pathfinding.Ionic.Zip.ZipInputStream::_name
	String_t* ____name_8;
	// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_9;
	// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::_closed
	bool ____closed_10;
	// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::_findRequired
	bool ____findRequired_11;
	// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::_exceptionPending
	bool ____exceptionPending_12;
	// System.Int32 Pathfinding.Ionic.Zip.ZipInputStream::<CodecBufferSize>k__BackingField
	int32_t ___U3CCodecBufferSizeU3Ek__BackingField_13;
};
