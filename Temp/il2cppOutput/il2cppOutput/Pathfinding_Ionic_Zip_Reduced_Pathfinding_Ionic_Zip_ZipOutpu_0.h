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
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t392;
// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry>
struct Dictionary_2_t1010;
// System.Text.Encoding
struct Encoding_t442;
// Pathfinding.Ionic.Zip.CountingStream
struct CountingStream_t995;
// Pathfinding.Ionic.Crc.CrcCalculatorStream
struct CrcCalculatorStream_t1022;
// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream
struct ParallelDeflateOutputStream_t1012;

#include "mscorlib_System_IO_Stream.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_Zip64Opt.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ZipOptio.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres_0.h"

// Pathfinding.Ionic.Zip.ZipOutputStream
struct  ZipOutputStream_t1023  : public Stream_t448
{
	// System.String Pathfinding.Ionic.Zip.ZipOutputStream::_password
	String_t* ____password_1;
	// System.String Pathfinding.Ionic.Zip.ZipOutputStream::_comment
	String_t* ____comment_2;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipOutputStream::_outputStream
	Stream_t448 * ____outputStream_3;
	// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipOutputStream::_currentEntry
	ZipEntry_t392 * ____currentEntry_4;
	// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipOutputStream::_zip64
	int32_t ____zip64_5;
	// System.Collections.Generic.Dictionary`2<System.String,Pathfinding.Ionic.Zip.ZipEntry> Pathfinding.Ionic.Zip.ZipOutputStream::_entriesWritten
	Dictionary_2_t1010 * ____entriesWritten_6;
	// System.Int32 Pathfinding.Ionic.Zip.ZipOutputStream::_entryCount
	int32_t ____entryCount_7;
	// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipOutputStream::_alternateEncodingUsage
	int32_t ____alternateEncodingUsage_8;
	// System.Text.Encoding Pathfinding.Ionic.Zip.ZipOutputStream::_alternateEncoding
	Encoding_t442 * ____alternateEncoding_9;
	// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_10;
	// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::_disposed
	bool ____disposed_11;
	// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::_exceptionPending
	bool ____exceptionPending_12;
	// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::_anyEntriesUsedZip64
	bool ____anyEntriesUsedZip64_13;
	// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::_directoryNeededZip64
	bool ____directoryNeededZip64_14;
	// Pathfinding.Ionic.Zip.CountingStream Pathfinding.Ionic.Zip.ZipOutputStream::_outputCounter
	CountingStream_t995 * ____outputCounter_15;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipOutputStream::_encryptor
	Stream_t448 * ____encryptor_16;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipOutputStream::_deflater
	Stream_t448 * ____deflater_17;
	// Pathfinding.Ionic.Crc.CrcCalculatorStream Pathfinding.Ionic.Zip.ZipOutputStream::_entryOutputStream
	CrcCalculatorStream_t1022 * ____entryOutputStream_18;
	// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::_needToWriteEntryHeader
	bool ____needToWriteEntryHeader_19;
	// System.String Pathfinding.Ionic.Zip.ZipOutputStream::_name
	String_t* ____name_20;
	// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream Pathfinding.Ionic.Zip.ZipOutputStream::ParallelDeflater
	ParallelDeflateOutputStream_t1012 * ___ParallelDeflater_21;
	// System.Int64 Pathfinding.Ionic.Zip.ZipOutputStream::_ParallelDeflateThreshold
	int64_t ____ParallelDeflateThreshold_22;
	// System.Int32 Pathfinding.Ionic.Zip.ZipOutputStream::_maxBufferPairs
	int32_t ____maxBufferPairs_23;
	// System.Int32 Pathfinding.Ionic.Zip.ZipOutputStream::<CodecBufferSize>k__BackingField
	int32_t ___U3CCodecBufferSizeU3Ek__BackingField_24;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zip.ZipOutputStream::<Strategy>k__BackingField
	int32_t ___U3CStrategyU3Ek__BackingField_25;
};
