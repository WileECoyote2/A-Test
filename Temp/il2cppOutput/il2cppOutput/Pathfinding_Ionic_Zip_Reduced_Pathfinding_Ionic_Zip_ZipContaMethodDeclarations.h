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

// Pathfinding.Ionic.Zip.ZipContainer
struct ZipContainer_t1001;
// System.Object
struct Object_t;
// Pathfinding.Ionic.Zip.ZipFile
struct ZipFile_t159;
// Pathfinding.Ionic.Zip.ZipOutputStream
struct ZipOutputStream_t1023;
// System.String
struct String_t;
// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream
struct ParallelDeflateOutputStream_t1012;
// System.Text.Encoding
struct Encoding_t442;
// System.IO.Stream
struct Stream_t448;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_Zip64Opt.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zlib_Compres_0.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ZipOptio.h"

// System.Void Pathfinding.Ionic.Zip.ZipContainer::.ctor(System.Object)
extern "C" void ZipContainer__ctor_m4888 (ZipContainer_t1001 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipFile Pathfinding.Ionic.Zip.ZipContainer::get_ZipFile()
extern "C" ZipFile_t159 * ZipContainer_get_ZipFile_m4889 (ZipContainer_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipOutputStream Pathfinding.Ionic.Zip.ZipContainer::get_ZipOutputStream()
extern "C" ZipOutputStream_t1023 * ZipContainer_get_ZipOutputStream_m4890 (ZipContainer_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.ZipContainer::get_Password()
extern "C" String_t* ZipContainer_get_Password_m4891 (ZipContainer_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipContainer::get_Zip64()
extern "C" int32_t ZipContainer_get_Zip64_m4892 (ZipContainer_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipContainer::get_BufferSize()
extern "C" int32_t ZipContainer_get_BufferSize_m4893 (ZipContainer_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream Pathfinding.Ionic.Zip.ZipContainer::get_ParallelDeflater()
extern "C" ParallelDeflateOutputStream_t1012 * ZipContainer_get_ParallelDeflater_m4894 (ZipContainer_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.ZipContainer::set_ParallelDeflater(Pathfinding.Ionic.Zlib.ParallelDeflateOutputStream)
extern "C" void ZipContainer_set_ParallelDeflater_m4895 (ZipContainer_t1001 * __this, ParallelDeflateOutputStream_t1012 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.ZipContainer::get_ParallelDeflateThreshold()
extern "C" int64_t ZipContainer_get_ParallelDeflateThreshold_m4896 (ZipContainer_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipContainer::get_ParallelDeflateMaxBufferPairs()
extern "C" int32_t ZipContainer_get_ParallelDeflateMaxBufferPairs_m4897 (ZipContainer_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.ZipContainer::get_CodecBufferSize()
extern "C" int32_t ZipContainer_get_CodecBufferSize_m4898 (ZipContainer_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zlib.CompressionStrategy Pathfinding.Ionic.Zip.ZipContainer::get_Strategy()
extern "C" int32_t ZipContainer_get_Strategy_m4899 (ZipContainer_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.Zip64Option Pathfinding.Ionic.Zip.ZipContainer::get_UseZip64WhenSaving()
extern "C" int32_t ZipContainer_get_UseZip64WhenSaving_m4900 (ZipContainer_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipContainer::get_AlternateEncoding()
extern "C" Encoding_t442 * ZipContainer_get_AlternateEncoding_m4901 (ZipContainer_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding Pathfinding.Ionic.Zip.ZipContainer::get_DefaultEncoding()
extern "C" Encoding_t442 * ZipContainer_get_DefaultEncoding_m4902 (ZipContainer_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipOption Pathfinding.Ionic.Zip.ZipContainer::get_AlternateEncodingUsage()
extern "C" int32_t ZipContainer_get_AlternateEncodingUsage_m4903 (ZipContainer_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.ZipContainer::get_ReadStream()
extern "C" Stream_t448 * ZipContainer_get_ReadStream_m4904 (ZipContainer_t1001 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
