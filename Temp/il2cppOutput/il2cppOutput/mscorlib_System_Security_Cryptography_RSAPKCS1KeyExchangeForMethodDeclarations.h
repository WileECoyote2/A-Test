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

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t1469;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1427;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter__ctor_m7558 (RSAPKCS1KeyExchangeFormatter_t1469 * __this, AsymmetricAlgorithm_t1427 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C" ByteU5BU5D_t29* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m12691 (RSAPKCS1KeyExchangeFormatter_t1469 * __this, ByteU5BU5D_t29* ___rgbData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m12692 (RSAPKCS1KeyExchangeFormatter_t1469 * __this, AsymmetricAlgorithm_t1427 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
