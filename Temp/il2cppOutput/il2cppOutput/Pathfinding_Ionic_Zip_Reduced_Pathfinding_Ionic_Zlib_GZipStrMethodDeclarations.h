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

// Pathfinding.Ionic.Zlib.GZipStream
struct GZipStream_t1038;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Pathfinding.Ionic.Zlib.GZipStream::.cctor()
extern "C" void GZipStream__cctor_m4992 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zlib.GZipStream::get_Comment()
extern "C" String_t* GZipStream_get_Comment_m4993 (GZipStream_t1038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_Comment(System.String)
extern "C" void GZipStream_set_Comment_m4994 (GZipStream_t1038 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zlib.GZipStream::get_FileName()
extern "C" String_t* GZipStream_get_FileName_m4995 (GZipStream_t1038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_FileName(System.String)
extern "C" void GZipStream_set_FileName_m4996 (GZipStream_t1038 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.GZipStream::Dispose(System.Boolean)
extern "C" void GZipStream_Dispose_m4997 (GZipStream_t1038 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::get_CanRead()
extern "C" bool GZipStream_get_CanRead_m4998 (GZipStream_t1038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::get_CanSeek()
extern "C" bool GZipStream_get_CanSeek_m4999 (GZipStream_t1038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zlib.GZipStream::get_CanWrite()
extern "C" bool GZipStream_get_CanWrite_m5000 (GZipStream_t1038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.GZipStream::Flush()
extern "C" void GZipStream_Flush_m5001 (GZipStream_t1038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.GZipStream::get_Length()
extern "C" int64_t GZipStream_get_Length_m5002 (GZipStream_t1038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.GZipStream::get_Position()
extern "C" int64_t GZipStream_get_Position_m5003 (GZipStream_t1038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.GZipStream::set_Position(System.Int64)
extern "C" void GZipStream_set_Position_m5004 (GZipStream_t1038 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.GZipStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t GZipStream_Read_m5005 (GZipStream_t1038 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zlib.GZipStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t GZipStream_Seek_m5006 (GZipStream_t1038 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.GZipStream::SetLength(System.Int64)
extern "C" void GZipStream_SetLength_m5007 (GZipStream_t1038 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zlib.GZipStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void GZipStream_Write_m5008 (GZipStream_t1038 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zlib.GZipStream::EmitHeader()
extern "C" int32_t GZipStream_EmitHeader_m5009 (GZipStream_t1038 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
