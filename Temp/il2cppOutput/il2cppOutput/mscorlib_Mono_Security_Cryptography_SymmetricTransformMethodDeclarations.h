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

// Mono.Security.Cryptography.SymmetricTransform
struct SymmetricTransform_t1805;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t920;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_PaddingMode.h"

// System.Void Mono.Security.Cryptography.SymmetricTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[])
extern "C" void SymmetricTransform__ctor_m10220 (SymmetricTransform_t1805 * __this, SymmetricAlgorithm_t920 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t29* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::System.IDisposable.Dispose()
extern "C" void SymmetricTransform_System_IDisposable_Dispose_m10221 (SymmetricTransform_t1805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Finalize()
extern "C" void SymmetricTransform_Finalize_m10222 (SymmetricTransform_t1805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Dispose(System.Boolean)
extern "C" void SymmetricTransform_Dispose_m10223 (SymmetricTransform_t1805 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_CanReuseTransform()
extern "C" bool SymmetricTransform_get_CanReuseTransform_m10224 (SymmetricTransform_t1805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Transform(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_Transform_m10225 (SymmetricTransform_t1805 * __this, ByteU5BU5D_t29* ___input, ByteU5BU5D_t29* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CBC(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_CBC_m10226 (SymmetricTransform_t1805 * __this, ByteU5BU5D_t29* ___input, ByteU5BU5D_t29* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CFB(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_CFB_m10227 (SymmetricTransform_t1805 * __this, ByteU5BU5D_t29* ___input, ByteU5BU5D_t29* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::OFB(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_OFB_m10228 (SymmetricTransform_t1805 * __this, ByteU5BU5D_t29* ___input, ByteU5BU5D_t29* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CTS(System.Byte[],System.Byte[])
extern "C" void SymmetricTransform_CTS_m10229 (SymmetricTransform_t1805 * __this, ByteU5BU5D_t29* ___input, ByteU5BU5D_t29* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::CheckInput(System.Byte[],System.Int32,System.Int32)
extern "C" void SymmetricTransform_CheckInput_m10230 (SymmetricTransform_t1805 * __this, ByteU5BU5D_t29* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t SymmetricTransform_TransformBlock_m10231 (SymmetricTransform_t1805 * __this, ByteU5BU5D_t29* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t29* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_KeepLastBlock()
extern "C" bool SymmetricTransform_get_KeepLastBlock_m10232 (SymmetricTransform_t1805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.SymmetricTransform::InternalTransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t SymmetricTransform_InternalTransformBlock_m10233 (SymmetricTransform_t1805 * __this, ByteU5BU5D_t29* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t29* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::Random(System.Byte[],System.Int32,System.Int32)
extern "C" void SymmetricTransform_Random_m10234 (SymmetricTransform_t1805 * __this, ByteU5BU5D_t29* ___buffer, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.SymmetricTransform::ThrowBadPaddingException(System.Security.Cryptography.PaddingMode,System.Int32,System.Int32)
extern "C" void SymmetricTransform_ThrowBadPaddingException_m10235 (SymmetricTransform_t1805 * __this, int32_t ___padding, int32_t ___length, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalEncrypt(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t29* SymmetricTransform_FinalEncrypt_m10236 (SymmetricTransform_t1805 * __this, ByteU5BU5D_t29* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalDecrypt(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t29* SymmetricTransform_FinalDecrypt_m10237 (SymmetricTransform_t1805 * __this, ByteU5BU5D_t29* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t29* SymmetricTransform_TransformFinalBlock_m10238 (SymmetricTransform_t1805 * __this, ByteU5BU5D_t29* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
