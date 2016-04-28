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

// Pathfinding.Ionic.Zip.OffsetStream
struct OffsetStream_t993;
// System.IO.Stream
struct Stream_t448;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Pathfinding.Ionic.Zip.OffsetStream::.ctor(System.IO.Stream)
extern "C" void OffsetStream__ctor_m4579 (OffsetStream_t993 * __this, Stream_t448 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.OffsetStream::System.IDisposable.Dispose()
extern "C" void OffsetStream_System_IDisposable_Dispose_m4580 (OffsetStream_t993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.OffsetStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t OffsetStream_Read_m4581 (OffsetStream_t993 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.OffsetStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void OffsetStream_Write_m4582 (OffsetStream_t993 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.OffsetStream::get_CanRead()
extern "C" bool OffsetStream_get_CanRead_m4583 (OffsetStream_t993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.OffsetStream::get_CanSeek()
extern "C" bool OffsetStream_get_CanSeek_m4584 (OffsetStream_t993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.OffsetStream::get_CanWrite()
extern "C" bool OffsetStream_get_CanWrite_m4585 (OffsetStream_t993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.OffsetStream::Flush()
extern "C" void OffsetStream_Flush_m4586 (OffsetStream_t993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.OffsetStream::get_Length()
extern "C" int64_t OffsetStream_get_Length_m4587 (OffsetStream_t993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.OffsetStream::get_Position()
extern "C" int64_t OffsetStream_get_Position_m4588 (OffsetStream_t993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.OffsetStream::set_Position(System.Int64)
extern "C" void OffsetStream_set_Position_m4589 (OffsetStream_t993 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.OffsetStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t OffsetStream_Seek_m4590 (OffsetStream_t993 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.OffsetStream::SetLength(System.Int64)
extern "C" void OffsetStream_SetLength_m4591 (OffsetStream_t993 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.OffsetStream::Close()
extern "C" void OffsetStream_Close_m4592 (OffsetStream_t993 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
