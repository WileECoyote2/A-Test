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

// System.Security.Cryptography.AesManaged
struct AesManaged_t924;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t931;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.AesManaged::.ctor()
extern "C" void AesManaged__ctor_m4305 (AesManaged_t924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::GenerateIV()
extern "C" void AesManaged_GenerateIV_m4306 (AesManaged_t924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::GenerateKey()
extern "C" void AesManaged_GenerateKey_m4307 (AesManaged_t924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C" Object_t * AesManaged_CreateDecryptor_m4308 (AesManaged_t924 * __this, ByteU5BU5D_t29* ___rgbKey, ByteU5BU5D_t29* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C" Object_t * AesManaged_CreateEncryptor_m4309 (AesManaged_t924 * __this, ByteU5BU5D_t29* ___rgbKey, ByteU5BU5D_t29* ___rgbIV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AesManaged::get_IV()
extern "C" ByteU5BU5D_t29* AesManaged_get_IV_m4310 (AesManaged_t924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::set_IV(System.Byte[])
extern "C" void AesManaged_set_IV_m4311 (AesManaged_t924 * __this, ByteU5BU5D_t29* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.AesManaged::get_Key()
extern "C" ByteU5BU5D_t29* AesManaged_get_Key_m4312 (AesManaged_t924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::set_Key(System.Byte[])
extern "C" void AesManaged_set_Key_m4313 (AesManaged_t924 * __this, ByteU5BU5D_t29* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.AesManaged::get_KeySize()
extern "C" int32_t AesManaged_get_KeySize_m4314 (AesManaged_t924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::set_KeySize(System.Int32)
extern "C" void AesManaged_set_KeySize_m4315 (AesManaged_t924 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateDecryptor()
extern "C" Object_t * AesManaged_CreateDecryptor_m4316 (AesManaged_t924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.AesManaged::CreateEncryptor()
extern "C" Object_t * AesManaged_CreateEncryptor_m4317 (AesManaged_t924 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AesManaged::Dispose(System.Boolean)
extern "C" void AesManaged_Dispose_m4318 (AesManaged_t924 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
