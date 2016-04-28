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

// System.Byte[]
struct ByteU5BU5D_t29;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.BitConverter::.cctor()
extern "C" void BitConverter__cctor_m13324 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::AmILittleEndian()
extern "C" bool BitConverter_AmILittleEndian_m13325 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.BitConverter::DoubleWordsAreSwapped()
extern "C" bool BitConverter_DoubleWordsAreSwapped_m13326 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
extern "C" int64_t BitConverter_DoubleToInt64Bits_m13327 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Byte*,System.Int32)
extern "C" ByteU5BU5D_t29* BitConverter_GetBytes_m13328 (Object_t * __this /* static, unused */, uint8_t* ___ptr, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
extern "C" ByteU5BU5D_t29* BitConverter_GetBytes_m5190 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
extern "C" ByteU5BU5D_t29* BitConverter_GetBytes_m5188 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.UInt16)
extern "C" ByteU5BU5D_t29* BitConverter_GetBytes_m5221 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.UInt32)
extern "C" ByteU5BU5D_t29* BitConverter_GetBytes_m5220 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.UInt64)
extern "C" ByteU5BU5D_t29* BitConverter_GetBytes_m2207 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Double)
extern "C" ByteU5BU5D_t29* BitConverter_GetBytes_m13329 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.BitConverter::PutBytes(System.Byte*,System.Byte[],System.Int32,System.Int32)
extern "C" void BitConverter_PutBytes_m13330 (Object_t * __this /* static, unused */, uint8_t* ___dst, ByteU5BU5D_t29* ___src, int32_t ___start_index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
extern "C" int32_t BitConverter_ToInt32_m5184 (Object_t * __this /* static, unused */, ByteU5BU5D_t29* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
extern "C" int64_t BitConverter_ToInt64_m5183 (Object_t * __this /* static, unused */, ByteU5BU5D_t29* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.BitConverter::ToUInt16(System.Byte[],System.Int32)
extern "C" uint16_t BitConverter_ToUInt16_m5210 (Object_t * __this /* static, unused */, ByteU5BU5D_t29* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.BitConverter::ToUInt32(System.Byte[],System.Int32)
extern "C" uint32_t BitConverter_ToUInt32_m5211 (Object_t * __this /* static, unused */, ByteU5BU5D_t29* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.BitConverter::ToUInt64(System.Byte[],System.Int32)
extern "C" uint64_t BitConverter_ToUInt64_m13331 (Object_t * __this /* static, unused */, ByteU5BU5D_t29* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[])
extern "C" String_t* BitConverter_ToString_m7535 (Object_t * __this /* static, unused */, ByteU5BU5D_t29* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.BitConverter::ToString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* BitConverter_ToString_m13332 (Object_t * __this /* static, unused */, ByteU5BU5D_t29* ___value, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
