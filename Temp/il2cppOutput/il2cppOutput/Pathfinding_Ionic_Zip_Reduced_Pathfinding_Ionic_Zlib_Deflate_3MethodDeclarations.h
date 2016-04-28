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

// Pathfinding.Ionic.Zlib.DeflateStream
struct DeflateStream_t1036;
// System.IO.Stream
struct Stream_t448;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres_1.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres_0.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Pathfinding.Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionMode,System.Boolean)
extern "C" void DeflateStream__ctor_m4976 (DeflateStream_t1036 * __this, Stream_t448 * ___stream, int32_t ___mode, bool ___leaveOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionMode,Pathfinding.Ionic.Zlib.CompressionLevel,System.Boolean)
extern "C" void DeflateStream__ctor_m4977 (DeflateStream_t1036 * __this, Stream_t448 * ___stream, int32_t ___mode, int32_t ___level, bool ___leaveOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::set_BufferSize(System.Int32)
extern "C" void DeflateStream_set_BufferSize_m4978 (DeflateStream_t1036 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::set_Strategy(Pathfinding.Ionic.Zlib.CompressionStrategy)
extern "C" void DeflateStream_set_Strategy_m4979 (DeflateStream_t1036 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::Dispose(System.Boolean)
extern "C" void DeflateStream_Dispose_m4980 (DeflateStream_t1036 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.DeflateStream::get_CanRead()
extern "C" bool DeflateStream_get_CanRead_m4981 (DeflateStream_t1036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.DeflateStream::get_CanSeek()
extern "C" bool DeflateStream_get_CanSeek_m4982 (DeflateStream_t1036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.DeflateStream::get_CanWrite()
extern "C" bool DeflateStream_get_CanWrite_m4983 (DeflateStream_t1036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::Flush()
extern "C" void DeflateStream_Flush_m4984 (DeflateStream_t1036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.DeflateStream::get_Length()
extern "C" int64_t DeflateStream_get_Length_m4985 (DeflateStream_t1036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.DeflateStream::get_Position()
extern "C" int64_t DeflateStream_get_Position_m4986 (DeflateStream_t1036 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::set_Position(System.Int64)
extern "C" void DeflateStream_set_Position_m4987 (DeflateStream_t1036 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.DeflateStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t DeflateStream_Read_m4988 (DeflateStream_t1036 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.DeflateStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t DeflateStream_Seek_m4989 (DeflateStream_t1036 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::SetLength(System.Int64)
extern "C" void DeflateStream_SetLength_m4990 (DeflateStream_t1036 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.DeflateStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void DeflateStream_Write_m4991 (DeflateStream_t1036 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
