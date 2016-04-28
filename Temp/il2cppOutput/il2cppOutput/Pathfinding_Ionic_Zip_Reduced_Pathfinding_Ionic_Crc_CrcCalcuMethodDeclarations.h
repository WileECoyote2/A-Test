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

// Pathfinding.Ionic.Crc.CrcCalculatorStream
struct CrcCalculatorStream_t1022;
// System.IO.Stream
struct Stream_t448;
// Pathfinding.Ionic.Crc.CRC32
struct CRC32_t997;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::.ctor(System.IO.Stream)
extern "C" void CrcCalculatorStream__ctor_m5126 (CrcCalculatorStream_t1022 * __this, Stream_t448 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::.ctor(System.IO.Stream,System.Boolean)
extern "C" void CrcCalculatorStream__ctor_m5127 (CrcCalculatorStream_t1022 * __this, Stream_t448 * ___stream, bool ___leaveOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::.ctor(System.IO.Stream,System.Int64)
extern "C" void CrcCalculatorStream__ctor_m5128 (CrcCalculatorStream_t1022 * __this, Stream_t448 * ___stream, int64_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::.ctor(System.Boolean,System.Int64,System.IO.Stream,Pathfinding.Ionic.Crc.CRC32)
extern "C" void CrcCalculatorStream__ctor_m5129 (CrcCalculatorStream_t1022 * __this, bool ___leaveOpen, int64_t ___length, Stream_t448 * ___stream, CRC32_t997 * ___crc32, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::.cctor()
extern "C" void CrcCalculatorStream__cctor_m5130 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::System.IDisposable.Dispose()
extern "C" void CrcCalculatorStream_System_IDisposable_Dispose_m5131 (CrcCalculatorStream_t1022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Crc.CrcCalculatorStream::get_TotalBytesSlurped()
extern "C" int64_t CrcCalculatorStream_get_TotalBytesSlurped_m5132 (CrcCalculatorStream_t1022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Crc.CrcCalculatorStream::get_Crc()
extern "C" int32_t CrcCalculatorStream_get_Crc_m5133 (CrcCalculatorStream_t1022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Crc.CrcCalculatorStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t CrcCalculatorStream_Read_m5134 (CrcCalculatorStream_t1022 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void CrcCalculatorStream_Write_m5135 (CrcCalculatorStream_t1022 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Crc.CrcCalculatorStream::get_CanRead()
extern "C" bool CrcCalculatorStream_get_CanRead_m5136 (CrcCalculatorStream_t1022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Crc.CrcCalculatorStream::get_CanSeek()
extern "C" bool CrcCalculatorStream_get_CanSeek_m5137 (CrcCalculatorStream_t1022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Crc.CrcCalculatorStream::get_CanWrite()
extern "C" bool CrcCalculatorStream_get_CanWrite_m5138 (CrcCalculatorStream_t1022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::Flush()
extern "C" void CrcCalculatorStream_Flush_m5139 (CrcCalculatorStream_t1022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Crc.CrcCalculatorStream::get_Length()
extern "C" int64_t CrcCalculatorStream_get_Length_m5140 (CrcCalculatorStream_t1022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Crc.CrcCalculatorStream::get_Position()
extern "C" int64_t CrcCalculatorStream_get_Position_m5141 (CrcCalculatorStream_t1022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::set_Position(System.Int64)
extern "C" void CrcCalculatorStream_set_Position_m5142 (CrcCalculatorStream_t1022 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Crc.CrcCalculatorStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t CrcCalculatorStream_Seek_m5143 (CrcCalculatorStream_t1022 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::SetLength(System.Int64)
extern "C" void CrcCalculatorStream_SetLength_m5144 (CrcCalculatorStream_t1022 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Crc.CrcCalculatorStream::Close()
extern "C" void CrcCalculatorStream_Close_m5145 (CrcCalculatorStream_t1022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
