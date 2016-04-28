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

// Mono.Security.X509.PKCS12
struct PKCS12_t1335;
// System.Byte[]
struct ByteU5BU5D_t29;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1313;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1336;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t920;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1317;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1327;
// Mono.Security.ASN1
struct ASN1_t1312;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
extern "C" void PKCS12__ctor_m6801 (PKCS12_t1335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
extern "C" void PKCS12__ctor_m6802 (PKCS12_t1335 * __this, ByteU5BU5D_t29* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
extern "C" void PKCS12__ctor_m6803 (PKCS12_t1335 * __this, ByteU5BU5D_t29* ___data, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
extern "C" void PKCS12__cctor_m6804 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
extern "C" void PKCS12_Decode_m6805 (PKCS12_t1335 * __this, ByteU5BU5D_t29* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
extern "C" void PKCS12_Finalize_m6806 (PKCS12_t1335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
extern "C" void PKCS12_set_Password_m6807 (PKCS12_t1335 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.PKCS12::get_Keys()
extern "C" ArrayList_t1313 * PKCS12_get_Keys_m6808 (PKCS12_t1335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
extern "C" X509CertificateCollection_t1336 * PKCS12_get_Certificates_m6809 (PKCS12_t1335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS12_Compare_m6810 (PKCS12_t1335 * __this, ByteU5BU5D_t29* ___expected, ByteU5BU5D_t29* ___actual, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
extern "C" SymmetricAlgorithm_t920 * PKCS12_GetSymmetricAlgorithm_m6811 (PKCS12_t1335 * __this, String_t* ___algorithmOid, ByteU5BU5D_t29* ___salt, int32_t ___iterationCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t29* PKCS12_Decrypt_m6812 (PKCS12_t1335 * __this, String_t* ___algorithmOid, ByteU5BU5D_t29* ___salt, int32_t ___iterationCount, ByteU5BU5D_t29* ___encryptedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
extern "C" ByteU5BU5D_t29* PKCS12_Decrypt_m6813 (PKCS12_t1335 * __this, EncryptedData_t1317 * ___ed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
extern "C" DSAParameters_t1439  PKCS12_GetExistingParameters_m6814 (PKCS12_t1335 * __this, bool* ___found, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
extern "C" void PKCS12_AddPrivateKey_m6815 (PKCS12_t1335 * __this, PrivateKeyInfo_t1327 * ___pki, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
extern "C" void PKCS12_ReadSafeBag_m6816 (PKCS12_t1335 * __this, ASN1_t1312 * ___safeBag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t29* PKCS12_MAC_m6817 (PKCS12_t1335 * __this, ByteU5BU5D_t29* ___password, ByteU5BU5D_t29* ___salt, int32_t ___iterations, ByteU5BU5D_t29* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
extern "C" int32_t PKCS12_get_MaximumPasswordLength_m6818 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
