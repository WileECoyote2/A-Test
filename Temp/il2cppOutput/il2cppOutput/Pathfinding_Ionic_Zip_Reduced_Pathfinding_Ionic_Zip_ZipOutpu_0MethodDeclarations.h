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

// Pathfinding.Ionic.Zip.ZipOutputStream
struct ZipOutputStream_t1023;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t442;
// System.IO.Stream
struct Stream_t448;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres_0.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_Zip64Opt.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ZipOptio.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.String Pathfinding.Ionic.Zip.ZipOutputStream::ToString()
extern "C" String_t* ZipOutputStream_ToString_m4863 (ZipOutputStream_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipOutputStream::get_CodecBufferSize()
extern "C" int32_t ZipOutputStream_get_CodecBufferSize_m4864 (ZipOutputStream_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zip.ZipOutputStream::get_Strategy()
extern "C" int32_t ZipOutputStream_get_Strategy_m4865 (ZipOutputStream_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipOutputStream::get_Comment()
extern "C" String_t* ZipOutputStream_get_Comment_m4866 (ZipOutputStream_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipOutputStream::get_EnableZip64()
extern "C" int32_t ZipOutputStream_get_EnableZip64_m4867 (ZipOutputStream_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipOutputStream::get_AlternateEncoding()
extern "C" Encoding_t442 * ZipOutputStream_get_AlternateEncoding_m4868 (ZipOutputStream_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipOutputStream::get_AlternateEncodingUsage()
extern "C" int32_t ZipOutputStream_get_AlternateEncodingUsage_m4869 (ZipOutputStream_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipOutputStream::get_DefaultEncoding()
extern "C" Encoding_t442 * ZipOutputStream_get_DefaultEncoding_m4870 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipOutputStream::get_ParallelDeflateThreshold()
extern "C" int64_t ZipOutputStream_get_ParallelDeflateThreshold_m4871 (ZipOutputStream_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipOutputStream::get_ParallelDeflateMaxBufferPairs()
extern "C" int32_t ZipOutputStream_get_ParallelDeflateMaxBufferPairs_m4872 (ZipOutputStream_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipOutputStream::get_OutputStream()
extern "C" Stream_t448 * ZipOutputStream_get_OutputStream_m4873 (ZipOutputStream_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipOutputStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void ZipOutputStream_Write_m4874 (ZipOutputStream_t1023 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipOutputStream::_InitiateCurrentEntry(System.Boolean)
extern "C" void ZipOutputStream__InitiateCurrentEntry_m4875 (ZipOutputStream_t1023 * __this, bool ___finishing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipOutputStream::_FinishCurrentEntry()
extern "C" void ZipOutputStream__FinishCurrentEntry_m4876 (ZipOutputStream_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipOutputStream::Dispose(System.Boolean)
extern "C" void ZipOutputStream_Dispose_m4877 (ZipOutputStream_t1023 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::get_CanRead()
extern "C" bool ZipOutputStream_get_CanRead_m4878 (ZipOutputStream_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::get_CanSeek()
extern "C" bool ZipOutputStream_get_CanSeek_m4879 (ZipOutputStream_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Ionic.Zip.ZipOutputStream::get_CanWrite()
extern "C" bool ZipOutputStream_get_CanWrite_m4880 (ZipOutputStream_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipOutputStream::get_Length()
extern "C" int64_t ZipOutputStream_get_Length_m4881 (ZipOutputStream_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipOutputStream::get_Position()
extern "C" int64_t ZipOutputStream_get_Position_m4882 (ZipOutputStream_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipOutputStream::set_Position(System.Int64)
extern "C" void ZipOutputStream_set_Position_m4883 (ZipOutputStream_t1023 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipOutputStream::Flush()
extern "C" void ZipOutputStream_Flush_m4884 (ZipOutputStream_t1023 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipOutputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ZipOutputStream_Read_m4885 (ZipOutputStream_t1023 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipOutputStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t ZipOutputStream_Seek_m4886 (ZipOutputStream_t1023 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipOutputStream::SetLength(System.Int64)
extern "C" void ZipOutputStream_SetLength_m4887 (ZipOutputStream_t1023 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
