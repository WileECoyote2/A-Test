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

// Pathfinding.Ionic.Zlib.ZlibBaseStream
struct ZlibBaseStream_t1037;
// System.IO.Stream
struct Stream_t448;
// Pathfinding.Ionic.Zlib.ZlibCodec
struct ZlibCodec_t1032;
// System.Byte[]
struct ByteU5BU5D_t29;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres_1.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_ZlibStr.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::.ctor(System.IO.Stream,Pathfinding.Ionic.Zlib.CompressionMode,Pathfinding.Ionic.Zlib.CompressionLevel,Pathfinding.Ionic.Zlib.ZlibStreamFlavor,System.Boolean)
extern "C" void ZlibBaseStream__ctor_m5077 (ZlibBaseStream_t1037 * __this, Stream_t448 * ___stream, int32_t ___compressionMode, int32_t ___level, int32_t ___flavor, bool ___leaveOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::get_Crc32()
extern "C" int32_t ZlibBaseStream_get_Crc32_m5078 (ZlibBaseStream_t1037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::get__wantCompress()
extern "C" bool ZlibBaseStream_get__wantCompress_m5079 (ZlibBaseStream_t1037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.ZlibCodec Pathfinding.Ionic.Zlib.ZlibBaseStream::get_z()
extern "C" ZlibCodec_t1032 * ZlibBaseStream_get_z_m5080 (ZlibBaseStream_t1037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Ionic.Zlib.ZlibBaseStream::get_workingBuffer()
extern "C" ByteU5BU5D_t29* ZlibBaseStream_get_workingBuffer_m5081 (ZlibBaseStream_t1037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void ZlibBaseStream_Write_m5082 (ZlibBaseStream_t1037 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::finish()
extern "C" void ZlibBaseStream_finish_m5083 (ZlibBaseStream_t1037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::end()
extern "C" void ZlibBaseStream_end_m5084 (ZlibBaseStream_t1037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::Close()
extern "C" void ZlibBaseStream_Close_m5085 (ZlibBaseStream_t1037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::Flush()
extern "C" void ZlibBaseStream_Flush_m5086 (ZlibBaseStream_t1037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.ZlibBaseStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t ZlibBaseStream_Seek_m5087 (ZlibBaseStream_t1037 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::SetLength(System.Int64)
extern "C" void ZlibBaseStream_SetLength_m5088 (ZlibBaseStream_t1037 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zlib.ZlibBaseStream::ReadZeroTerminatedString()
extern "C" String_t* ZlibBaseStream_ReadZeroTerminatedString_m5089 (ZlibBaseStream_t1037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::_ReadAndValidateGzipHeader()
extern "C" int32_t ZlibBaseStream__ReadAndValidateGzipHeader_m5090 (ZlibBaseStream_t1037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.ZlibBaseStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ZlibBaseStream_Read_m5091 (ZlibBaseStream_t1037 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::get_CanRead()
extern "C" bool ZlibBaseStream_get_CanRead_m5092 (ZlibBaseStream_t1037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::get_CanSeek()
extern "C" bool ZlibBaseStream_get_CanSeek_m5093 (ZlibBaseStream_t1037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.ZlibBaseStream::get_CanWrite()
extern "C" bool ZlibBaseStream_get_CanWrite_m5094 (ZlibBaseStream_t1037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.ZlibBaseStream::get_Length()
extern "C" int64_t ZlibBaseStream_get_Length_m5095 (ZlibBaseStream_t1037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.ZlibBaseStream::get_Position()
extern "C" int64_t ZlibBaseStream_get_Position_m5096 (ZlibBaseStream_t1037 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.ZlibBaseStream::set_Position(System.Int64)
extern "C" void ZlibBaseStream_set_Position_m5097 (ZlibBaseStream_t1037 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
