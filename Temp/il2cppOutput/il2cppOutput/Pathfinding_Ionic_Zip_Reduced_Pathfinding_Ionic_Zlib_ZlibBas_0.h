#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1032;
// System.Byte[]
struct ByteU5BU5D_t29;
// System.IO.Stream
struct Stream_t448;
// Pathfinding.Ionic.Crc.CRC32
struct CRC32_t997;
// System.String
struct String_t;

#include "mscorlib_System_IO_Stream.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_ZlibBas.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_FlushTy.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_ZlibStr.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres_1.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres_0.h"
#include "mscorlib_System_DateTime.h"

// Pathfinding.Ionic.Zlib.ZlibBaseStream
struct  ZlibBaseStream_t1037  : public Stream_t448
{
	// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.ZlibBaseStream::_z
	ZlibCodec_t1032 * ____z_1;
	// Pathfinding.Ionic.Zlib.ZlibBaseStream/StreamMode Pathfinding.Ionic.Zlib.ZlibBaseStream::_streamMode
	int32_t ____streamMode_2;
	// Pathfinding.Ionic.Zlib.FlushType Pathfinding.Ionic.Zlib.ZlibBaseStream::_flushMode
	int32_t ____flushMode_3;
	// Pathfinding.Ionic.Zlib.ZlibStreamFlavor Pathfinding.Ionic.Zlib.ZlibBaseStream::_flavor
	int32_t ____flavor_4;
	// Pathfinding.Ionic.Zlib.CompressionMode Pathfinding.Ionic.Zlib.ZlibBaseStream::_compressionMode
	int32_t ____compressionMode_5;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zlib.ZlibBaseStream::_level
	int32_t ____level_6;
	// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::_leaveOpen
	bool ____leaveOpen_7;
	// System.Byte[] Pathfinding.Ionic.Zlib.ZlibBaseStream::_workingBuffer
	ByteU5BU5D_t29* ____workingBuffer_8;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::_bufferSize
	int32_t ____bufferSize_9;
	// System.Byte[] Pathfinding.Ionic.Zlib.ZlibBaseStream::_buf1
	ByteU5BU5D_t29* ____buf1_10;
	// System.IO.Stream Pathfinding.Ionic.Zlib.ZlibBaseStream::_stream
	Stream_t448 * ____stream_11;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.ZlibBaseStream::Strategy
	int32_t ___Strategy_12;
	// Pathfinding.Ionic.Crc.CRC32 Pathfinding.Ionic.Zlib.ZlibBaseStream::crc
	CRC32_t997 * ___crc_13;
	// System.String Pathfinding.Ionic.Zlib.ZlibBaseStream::_GzipFileName
	String_t* ____GzipFileName_14;
	// System.String Pathfinding.Ionic.Zlib.ZlibBaseStream::_GzipComment
	String_t* ____GzipComment_15;
	// System.DateTime Pathfinding.Ionic.Zlib.ZlibBaseStream::_GzipMtime
	DateTime_t134  ____GzipMtime_16;
	// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::_gzipHeaderByteCount
	int32_t ____gzipHeaderByteCount_17;
	// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::nomoreinput
	bool ___nomoreinput_18;
};
