#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream
struct ParallelDeflateOutputStream_t1012;
// System.IO.Stream
struct Stream_t448;
// System.Byte[]
struct ByteU5BU5D_t29;
// System.Object
struct Object_t;
// Pathfinding.Ionic.Zlib.WorkItem
struct WorkItem_t1047;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres_0.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionLevel,Pathfinding.Ionic.Zlib.CompressionStrategy,System.Boolean)
extern "C" void ParallelDeflateOutputStream__ctor_m5036 (ParallelDeflateOutputStream_t1012 * __this, Stream_t448 * ___stream, int32_t ___level, int32_t ___strategy, bool ___leaveOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::.cctor()
extern "C" void ParallelDeflateOutputStream__cctor_m5037 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::get_Strategy()
extern "C" int32_t ParallelDeflateOutputStream_get_Strategy_m5038 (ParallelDeflateOutputStream_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::set_Strategy(Pathfinding.Ionic.Zlib.CompressionStrategy)
extern "C" void ParallelDeflateOutputStream_set_Strategy_m5039 (ParallelDeflateOutputStream_t1012 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::set_MaxBufferPairs(System.Int32)
extern "C" void ParallelDeflateOutputStream_set_MaxBufferPairs_m5040 (ParallelDeflateOutputStream_t1012 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::set_BufferSize(System.Int32)
extern "C" void ParallelDeflateOutputStream_set_BufferSize_m5041 (ParallelDeflateOutputStream_t1012 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_InitializePoolOfWorkItems()
extern "C" void ParallelDeflateOutputStream__InitializePoolOfWorkItems_m5042 (ParallelDeflateOutputStream_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void ParallelDeflateOutputStream_Write_m5043 (ParallelDeflateOutputStream_t1012 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_FlushFinish()
extern "C" void ParallelDeflateOutputStream__FlushFinish_m5044 (ParallelDeflateOutputStream_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_Flush(System.Boolean)
extern "C" void ParallelDeflateOutputStream__Flush_m5045 (ParallelDeflateOutputStream_t1012 * __this, bool ___lastInput, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Flush()
extern "C" void ParallelDeflateOutputStream_Flush_m5046 (ParallelDeflateOutputStream_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Close()
extern "C" void ParallelDeflateOutputStream_Close_m5047 (ParallelDeflateOutputStream_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Dispose()
extern "C" void ParallelDeflateOutputStream_Dispose_m5048 (ParallelDeflateOutputStream_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Dispose(System.Boolean)
extern "C" void ParallelDeflateOutputStream_Dispose_m5049 (ParallelDeflateOutputStream_t1012 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Reset(System.IO.Stream)
extern "C" void ParallelDeflateOutputStream_Reset_m5050 (ParallelDeflateOutputStream_t1012 * __this, Stream_t448 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::EmitPendingBuffers(System.Boolean,System.Boolean)
extern "C" void ParallelDeflateOutputStream_EmitPendingBuffers_m5051 (ParallelDeflateOutputStream_t1012 * __this, bool ___doAll, bool ___mustWait, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::_DeflateOne(System.Object)
extern "C" void ParallelDeflateOutputStream__DeflateOne_m5052 (ParallelDeflateOutputStream_t1012 * __this, Object_t * ___wi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::DeflateOneSegment(Pathfinding.Ionic.Zlib.WorkItem)
extern "C" bool ParallelDeflateOutputStream_DeflateOneSegment_m5053 (ParallelDeflateOutputStream_t1012 * __this, WorkItem_t1047 * ___workitem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::get_CanSeek()
extern "C" bool ParallelDeflateOutputStream_get_CanSeek_m5054 (ParallelDeflateOutputStream_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::get_CanRead()
extern "C" bool ParallelDeflateOutputStream_get_CanRead_m5055 (ParallelDeflateOutputStream_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::get_CanWrite()
extern "C" bool ParallelDeflateOutputStream_get_CanWrite_m5056 (ParallelDeflateOutputStream_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::get_Length()
extern "C" int64_t ParallelDeflateOutputStream_get_Length_m5057 (ParallelDeflateOutputStream_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::get_Position()
extern "C" int64_t ParallelDeflateOutputStream_get_Position_m5058 (ParallelDeflateOutputStream_t1012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::set_Position(System.Int64)
extern "C" void ParallelDeflateOutputStream_set_Position_m5059 (ParallelDeflateOutputStream_t1012 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ParallelDeflateOutputStream_Read_m5060 (ParallelDeflateOutputStream_t1012 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t ParallelDeflateOutputStream_Seek_m5061 (ParallelDeflateOutputStream_t1012 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream::SetLength(System.Int64)
extern "C" void ParallelDeflateOutputStream_SetLength_m5062 (ParallelDeflateOutputStream_t1012 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
