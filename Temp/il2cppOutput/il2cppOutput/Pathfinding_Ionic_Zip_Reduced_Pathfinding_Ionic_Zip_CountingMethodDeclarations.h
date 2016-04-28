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

// Pathfinding.Ionic.Zip.CountingStream
struct CountingStream_t995;
// System.IO.Stream
struct Stream_t448;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Pathfinding.Ionic.Zip.CountingStream::.ctor(System.IO.Stream)
extern "C" void CountingStream__ctor_m4613 (CountingStream_t995 * __this, Stream_t448 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.CountingStream::get_WrappedStream()
extern "C" Stream_t448 * CountingStream_get_WrappedStream_m4614 (CountingStream_t995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.CountingStream::get_BytesWritten()
extern "C" int64_t CountingStream_get_BytesWritten_m4615 (CountingStream_t995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.CountingStream::get_BytesRead()
extern "C" int64_t CountingStream_get_BytesRead_m4616 (CountingStream_t995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.CountingStream::Adjust(System.Int64)
extern "C" void CountingStream_Adjust_m4617 (CountingStream_t995 * __this, int64_t ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.CountingStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t CountingStream_Read_m4618 (CountingStream_t995 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.CountingStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void CountingStream_Write_m4619 (CountingStream_t995 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.CountingStream::get_CanRead()
extern "C" bool CountingStream_get_CanRead_m4620 (CountingStream_t995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.CountingStream::get_CanSeek()
extern "C" bool CountingStream_get_CanSeek_m4621 (CountingStream_t995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.CountingStream::get_CanWrite()
extern "C" bool CountingStream_get_CanWrite_m4622 (CountingStream_t995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.CountingStream::Flush()
extern "C" void CountingStream_Flush_m4623 (CountingStream_t995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.CountingStream::get_Length()
extern "C" int64_t CountingStream_get_Length_m4624 (CountingStream_t995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.CountingStream::get_ComputedPosition()
extern "C" int64_t CountingStream_get_ComputedPosition_m4625 (CountingStream_t995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.CountingStream::get_Position()
extern "C" int64_t CountingStream_get_Position_m4626 (CountingStream_t995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.CountingStream::set_Position(System.Int64)
extern "C" void CountingStream_set_Position_m4627 (CountingStream_t995 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.CountingStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t CountingStream_Seek_m4628 (CountingStream_t995 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.CountingStream::SetLength(System.Int64)
extern "C" void CountingStream_SetLength_m4629 (CountingStream_t995 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
