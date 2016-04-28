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

// Pathfinding.Ionic.Zip.ZipSegmentedStream
struct ZipSegmentedStream_t1025;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t448;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::.ctor()
extern "C" void ZipSegmentedStream__ctor_m4905 (ZipSegmentedStream_t1025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipSegmentedStream Pathfinding.Ionic.Zip.ZipSegmentedStream::ForReading(System.String,System.UInt32,System.UInt32)
extern "C" ZipSegmentedStream_t1025 * ZipSegmentedStream_ForReading_m4906 (Object_t * __this /* static, unused */, String_t* ___name, uint32_t ___initialDiskNumber, uint32_t ___maxDiskNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipSegmentedStream Pathfinding.Ionic.Zip.ZipSegmentedStream::ForWriting(System.String,System.Int32)
extern "C" ZipSegmentedStream_t1025 * ZipSegmentedStream_ForWriting_m4907 (Object_t * __this /* static, unused */, String_t* ___name, int32_t ___maxSegmentSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipSegmentedStream::ForUpdate(System.String,System.UInt32)
extern "C" Stream_t448 * ZipSegmentedStream_ForUpdate_m4908 (Object_t * __this /* static, unused */, String_t* ___name, uint32_t ___diskNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipSegmentedStream::get_ContiguousWrite()
extern "C" bool ZipSegmentedStream_get_ContiguousWrite_m4909 (ZipSegmentedStream_t1025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::set_ContiguousWrite(System.Boolean)
extern "C" void ZipSegmentedStream_set_ContiguousWrite_m4910 (ZipSegmentedStream_t1025 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Ionic.Zip.ZipSegmentedStream::get_CurrentSegment()
extern "C" uint32_t ZipSegmentedStream_get_CurrentSegment_m4911 (ZipSegmentedStream_t1025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::set_CurrentSegment(System.UInt32)
extern "C" void ZipSegmentedStream_set_CurrentSegment_m4912 (ZipSegmentedStream_t1025 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::get_CurrentName()
extern "C" String_t* ZipSegmentedStream_get_CurrentName_m4913 (ZipSegmentedStream_t1025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::get_CurrentTempName()
extern "C" String_t* ZipSegmentedStream_get_CurrentTempName_m4914 (ZipSegmentedStream_t1025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::_NameForSegment(System.UInt32)
extern "C" String_t* ZipSegmentedStream__NameForSegment_m4915 (ZipSegmentedStream_t1025 * __this, uint32_t ___diskNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Pathfinding.Ionic.Zip.ZipSegmentedStream::ComputeSegment(System.Int32)
extern "C" uint32_t ZipSegmentedStream_ComputeSegment_m4916 (ZipSegmentedStream_t1025 * __this, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipSegmentedStream::ToString()
extern "C" String_t* ZipSegmentedStream_ToString_m4917 (ZipSegmentedStream_t1025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::_SetReadStream()
extern "C" void ZipSegmentedStream__SetReadStream_m4918 (ZipSegmentedStream_t1025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipSegmentedStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ZipSegmentedStream_Read_m4919 (ZipSegmentedStream_t1025 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::_SetWriteStream(System.UInt32)
extern "C" void ZipSegmentedStream__SetWriteStream_m4920 (ZipSegmentedStream_t1025 * __this, uint32_t ___increment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void ZipSegmentedStream_Write_m4921 (ZipSegmentedStream_t1025 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipSegmentedStream::TruncateBackward(System.UInt32,System.Int64)
extern "C" int64_t ZipSegmentedStream_TruncateBackward_m4922 (ZipSegmentedStream_t1025 * __this, uint32_t ___diskNumber, int64_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipSegmentedStream::get_CanRead()
extern "C" bool ZipSegmentedStream_get_CanRead_m4923 (ZipSegmentedStream_t1025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipSegmentedStream::get_CanSeek()
extern "C" bool ZipSegmentedStream_get_CanSeek_m4924 (ZipSegmentedStream_t1025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipSegmentedStream::get_CanWrite()
extern "C" bool ZipSegmentedStream_get_CanWrite_m4925 (ZipSegmentedStream_t1025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::Flush()
extern "C" void ZipSegmentedStream_Flush_m4926 (ZipSegmentedStream_t1025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipSegmentedStream::get_Length()
extern "C" int64_t ZipSegmentedStream_get_Length_m4927 (ZipSegmentedStream_t1025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipSegmentedStream::get_Position()
extern "C" int64_t ZipSegmentedStream_get_Position_m4928 (ZipSegmentedStream_t1025 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::set_Position(System.Int64)
extern "C" void ZipSegmentedStream_set_Position_m4929 (ZipSegmentedStream_t1025 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipSegmentedStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t ZipSegmentedStream_Seek_m4930 (ZipSegmentedStream_t1025 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::SetLength(System.Int64)
extern "C" void ZipSegmentedStream_SetLength_m4931 (ZipSegmentedStream_t1025 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipSegmentedStream::Dispose(System.Boolean)
extern "C" void ZipSegmentedStream_Dispose_m4932 (ZipSegmentedStream_t1025 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
