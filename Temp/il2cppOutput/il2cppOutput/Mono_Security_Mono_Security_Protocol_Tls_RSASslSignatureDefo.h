#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.RSA
struct RSA_t1332;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1324;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t239;

#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureDef.h"

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct  RSASslSignatureDeformatter_t1393  : public AsymmetricSignatureDeformatter_t1394
{
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::key
	RSA_t1332 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::hash
	HashAlgorithm_t1324 * ___hash_1;
};
struct RSASslSignatureDeformatter_t1393_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::<>f__switch$map15
	Dictionary_2_t239 * ___U3CU3Ef__switchU24map15_2;
};
