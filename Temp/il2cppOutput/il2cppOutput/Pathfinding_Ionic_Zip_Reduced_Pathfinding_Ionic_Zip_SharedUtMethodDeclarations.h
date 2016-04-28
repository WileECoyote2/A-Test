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

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t29;
// System.Text.Encoding
struct Encoding_t442;
// System.IO.Stream
struct Stream_t448;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void Pathfinding.Ionic.Zip.SharedUtilities::.cctor()
extern "C" void SharedUtilities__cctor_m4593 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.SharedUtilities::GetFileLength(System.String)
extern "C" int64_t SharedUtilities_GetFileLength_m4594 (Object_t * __this /* static, unused */, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.SharedUtilities::SimplifyFwdSlashPath(System.String)
extern "C" String_t* SharedUtilities_SimplifyFwdSlashPath_m4595 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.SharedUtilities::NormalizePathForUseInZipFile(System.String)
extern "C" String_t* SharedUtilities_NormalizePathForUseInZipFile_m4596 (Object_t * __this /* static, unused */, String_t* ___pathName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Ionic.Zip.SharedUtilities::StringToByteArray(System.String,System.Text.Encoding)
extern "C" ByteU5BU5D_t29* SharedUtilities_StringToByteArray_m4597 (Object_t * __this /* static, unused */, String_t* ___value, Encoding_t442 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Pathfinding.Ionic.Zip.SharedUtilities::StringToByteArray(System.String)
extern "C" ByteU5BU5D_t29* SharedUtilities_StringToByteArray_m4598 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.SharedUtilities::Utf8StringFromBuffer(System.Byte[])
extern "C" String_t* SharedUtilities_Utf8StringFromBuffer_m4599 (Object_t * __this /* static, unused */, ByteU5BU5D_t29* ___buf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.SharedUtilities::StringFromBuffer(System.Byte[],System.Text.Encoding)
extern "C" String_t* SharedUtilities_StringFromBuffer_m4600 (Object_t * __this /* static, unused */, ByteU5BU5D_t29* ___buf, Encoding_t442 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.SharedUtilities::ReadSignature(System.IO.Stream)
extern "C" int32_t SharedUtilities_ReadSignature_m4601 (Object_t * __this /* static, unused */, Stream_t448 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.SharedUtilities::ReadEntrySignature(System.IO.Stream)
extern "C" int32_t SharedUtilities_ReadEntrySignature_m4602 (Object_t * __this /* static, unused */, Stream_t448 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.SharedUtilities::ReadInt(System.IO.Stream)
extern "C" int32_t SharedUtilities_ReadInt_m4603 (Object_t * __this /* static, unused */, Stream_t448 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.SharedUtilities::_ReadFourBytes(System.IO.Stream,System.String)
extern "C" int32_t SharedUtilities__ReadFourBytes_m4604 (Object_t * __this /* static, unused */, Stream_t448 * ___s, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Pathfinding.Ionic.Zip.SharedUtilities::FindSignature(System.IO.Stream,System.Int32)
extern "C" int64_t SharedUtilities_FindSignature_m4605 (Object_t * __this /* static, unused */, Stream_t448 * ___stream, int32_t ___SignatureToFind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Pathfinding.Ionic.Zip.SharedUtilities::AdjustTime_Reverse(System.DateTime)
extern "C" DateTime_t134  SharedUtilities_AdjustTime_Reverse_m4606 (Object_t * __this /* static, unused */, DateTime_t134  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Pathfinding.Ionic.Zip.SharedUtilities::PackedToDateTime(System.Int32)
extern "C" DateTime_t134  SharedUtilities_PackedToDateTime_m4607 (Object_t * __this /* static, unused */, int32_t ___packedDateTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.SharedUtilities::DateTimeToPacked(System.DateTime)
extern "C" int32_t SharedUtilities_DateTimeToPacked_m4608 (Object_t * __this /* static, unused */, DateTime_t134  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.SharedUtilities::CreateAndOpenUniqueTempFile(System.String,System.IO.Stream&,System.String&)
extern "C" void SharedUtilities_CreateAndOpenUniqueTempFile_m4609 (Object_t * __this /* static, unused */, String_t* ___dir, Stream_t448 ** ___fs, String_t** ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.SharedUtilities::InternalGetTempFileName()
extern "C" String_t* SharedUtilities_InternalGetTempFileName_m4610 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Ionic.Zip.SharedUtilities::GenerateRandomStringImpl(System.Int32,System.Int32)
extern "C" String_t* SharedUtilities_GenerateRandomStringImpl_m4611 (Object_t * __this /* static, unused */, int32_t ___length, int32_t ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Ionic.Zip.SharedUtilities::ReadWithRetry(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.String)
extern "C" int32_t SharedUtilities_ReadWithRetry_m4612 (Object_t * __this /* static, unused */, Stream_t448 * ___s, ByteU5BU5D_t29* ___buffer, int32_t ___offset, int32_t ___count, String_t* ___FileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
