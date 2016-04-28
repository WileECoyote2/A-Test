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

// Pathfinding.Ionic.Zip.ZipInputStream
struct ZipInputStream_t1021;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t448;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.String Pathfinding.Ionic.Zip.ZipInputStream::ToString()
extern "C" String_t* ZipInputStream_ToString_m4847 (ZipInputStream_t1021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipInputStream::get_CodecBufferSize()
extern "C" int32_t ZipInputStream_get_CodecBufferSize_m4848 (ZipInputStream_t1021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipInputStream::SetupStream()
extern "C" void ZipInputStream_SetupStream_m4849 (ZipInputStream_t1021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipInputStream::get_ReadStream()
extern "C" Stream_t448 * ZipInputStream_get_ReadStream_m4850 (ZipInputStream_t1021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ZipInputStream_Read_m4851 (ZipInputStream_t1021 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipInputStream::Dispose(System.Boolean)
extern "C" void ZipInputStream_Dispose_m4852 (ZipInputStream_t1021 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::get_CanRead()
extern "C" bool ZipInputStream_get_CanRead_m4853 (ZipInputStream_t1021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::get_CanSeek()
extern "C" bool ZipInputStream_get_CanSeek_m4854 (ZipInputStream_t1021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipInputStream::get_CanWrite()
extern "C" bool ZipInputStream_get_CanWrite_m4855 (ZipInputStream_t1021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipInputStream::get_Length()
extern "C" int64_t ZipInputStream_get_Length_m4856 (ZipInputStream_t1021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipInputStream::get_Position()
extern "C" int64_t ZipInputStream_get_Position_m4857 (ZipInputStream_t1021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipInputStream::set_Position(System.Int64)
extern "C" void ZipInputStream_set_Position_m4858 (ZipInputStream_t1021 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipInputStream::Flush()
extern "C" void ZipInputStream_Flush_m4859 (ZipInputStream_t1021 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipInputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void ZipInputStream_Write_m4860 (ZipInputStream_t1021 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipInputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t ZipInputStream_Seek_m4861 (ZipInputStream_t1021 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipInputStream::SetLength(System.Int64)
extern "C" void ZipInputStream_SetLength_m4862 (ZipInputStream_t1021 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
