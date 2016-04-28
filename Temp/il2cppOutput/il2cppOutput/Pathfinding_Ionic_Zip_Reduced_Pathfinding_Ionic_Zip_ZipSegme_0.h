#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.IO.Stream
struct Stream_t448;

#include "mscorlib_System_IO_Stream.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ZipSegme.h"

// Pathfinding.Ionic.Zip.ZipSegmentedStream
struct  ZipSegmentedStream_t1025  : public Stream_t448
{
	// Pathfinding.Ionic.Zip.ZipSegmentedStream/RwMode Pathfinding.Ionic.Zip.ZipSegmentedStream::rwMode
	int32_t ___rwMode_1;
	// System.Boolean Pathfinding.Ionic.Zip.ZipSegmentedStream::_exceptionPending
	bool ____exceptionPending_2;
	// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::_baseName
	String_t* ____baseName_3;
	// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::_baseDir
	String_t* ____baseDir_4;
	// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::_currentName
	String_t* ____currentName_5;
	// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::_currentTempName
	String_t* ____currentTempName_6;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipSegmentedStream::_currentDiskNumber
	uint32_t ____currentDiskNumber_7;
	// System.UInt32 Pathfinding.Ionic.Zip.ZipSegmentedStream::_maxDiskNumber
	uint32_t ____maxDiskNumber_8;
	// System.Int32 Pathfinding.Ionic.Zip.ZipSegmentedStream::_maxSegmentSize
	int32_t ____maxSegmentSize_9;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipSegmentedStream::_innerStream
	Stream_t448 * ____innerStream_10;
	// System.Boolean Pathfinding.Ionic.Zip.ZipSegmentedStream::<ContiguousWrite>k__BackingField
	bool ___U3CContiguousWriteU3Ek__BackingField_11;
};
