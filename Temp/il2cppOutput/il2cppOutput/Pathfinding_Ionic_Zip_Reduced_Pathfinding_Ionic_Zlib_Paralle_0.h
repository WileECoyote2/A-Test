#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Pathfinding.Ionic.Zlib.WorkItem>
struct List_1_t1049;
// System.IO.Stream
struct Stream_t448;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t70;
// System.Object
struct Object_t;
// Pathfinding.Ionic.Crc.CRC32
struct CRC32_t997;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t1050;
// System.Exception modreq(System.Runtime.CompilerServices.IsVolatile)
struct Exception_t52;

#include "mscorlib_System_IO_Stream.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Paralle.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres_0.h"

// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream
struct  ParallelDeflateOutputStream_t1012  : public Stream_t448
{
	// System.Collections.Generic.List`1<Pathfinding.Ionic.Zlib.WorkItem> Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_pool
	List_1_t1049 * ____pool_3;
	// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_leaveOpen
	bool ____leaveOpen_4;
	// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::emitting
	bool ___emitting_5;
	// System.IO.Stream Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_outStream
	Stream_t448 * ____outStream_6;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_maxBufferPairs
	int32_t ____maxBufferPairs_7;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_bufferSize
	int32_t ____bufferSize_8;
	// System.Threading.AutoResetEvent Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_newlyCompressedBlob
	AutoResetEvent_t70 * ____newlyCompressedBlob_9;
	// System.Object Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_outputLock
	Object_t * ____outputLock_10;
	// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_isClosed
	bool ____isClosed_11;
	// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_firstWriteDone
	bool ____firstWriteDone_12;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_currentlyFilling
	int32_t ____currentlyFilling_13;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_lastFilled
	int32_t ____lastFilled_14;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_lastWritten
	int32_t ____lastWritten_15;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_latestCompressed
	int32_t ____latestCompressed_16;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_Crc32
	int32_t ____Crc32_17;
	// Pathfinding.Ionic.Crc.CRC32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_runningCrc
	CRC32_t997 * ____runningCrc_18;
	// System.Object Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_latestLock
	Object_t * ____latestLock_19;
	// System.Collections.Generic.Queue`1<System.Int32> Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_toWrite
	Queue_1_t1050 * ____toWrite_20;
	// System.Collections.Generic.Queue`1<System.Int32> Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_toFill
	Queue_1_t1050 * ____toFill_21;
	// System.Int64 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_totalBytesProcessed
	int64_t ____totalBytesProcessed_22;
	// Pathfinding.Ionic.Zlib.CompressionLevel Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_compressLevel
	int32_t ____compressLevel_23;
	// System.Exception modreq(System.Runtime.CompilerServices.IsVolatile) Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_pendingException
	Exception_t52 * ____pendingException_24;
	// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_handlingException
	bool ____handlingException_25;
	// System.Object Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_eLock
	Object_t * ____eLock_26;
	// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream/TraceBits Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_DesiredTrace
	uint32_t ____DesiredTrace_27;
	// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::<Strategy>k__BackingField
	int32_t ___U3CStrategyU3Ek__BackingField_28;
};
struct ParallelDeflateOutputStream_t1012_StaticFields{
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::IO_BUFFER_SIZE_DEFAULT
	int32_t ___IO_BUFFER_SIZE_DEFAULT_1;
	// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::BufferPairsPerCore
	int32_t ___BufferPairsPerCore_2;
};
