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
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t442;

#include "mscorlib_System_IO_Stream.h"
#include "mscorlib_System_Nullable_1_gen_1.h"
#include "mscorlib_System_DateTime.h"

// Pathfinding.Ionic.Zlib.GZipStream
struct  GZipStream_t1038  : public Stream_t448
{
	// System.Nullable`1<System.DateTime> Pathfinding.Ionic.Zlib.GZipStream::LastModified
	Nullable_1_t1039  ___LastModified_1;
	// System.Int32 Pathfinding.Ionic.Zlib.GZipStream::_headerByteCount
	int32_t ____headerByteCount_2;
	// Pathfinding.Ionic.Zlib.ZlibBaseStream Pathfinding.Ionic.Zlib.GZipStream::_baseStream
	ZlibBaseStream_t1037 * ____baseStream_3;
	// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::_disposed
	bool ____disposed_4;
	// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::_firstReadDone
	bool ____firstReadDone_5;
	// System.String Pathfinding.Ionic.Zlib.GZipStream::_FileName
	String_t* ____FileName_6;
	// System.String Pathfinding.Ionic.Zlib.GZipStream::_Comment
	String_t* ____Comment_7;
	// System.Int32 Pathfinding.Ionic.Zlib.GZipStream::_Crc32
	int32_t ____Crc32_8;
};
struct GZipStream_t1038_StaticFields{
	// System.DateTime Pathfinding.Ionic.Zlib.GZipStream::_unixEpoch
	DateTime_t134  ____unixEpoch_9;
	// System.Text.Encoding Pathfinding.Ionic.Zlib.GZipStream::iso8859dash1
	Encoding_t442 * ___iso8859dash1_10;
};
