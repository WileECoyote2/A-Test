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

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1789;
// Mono.Math.BigInteger
struct BigInteger_t1790;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m10033 (ModulusRing_t1789 * __this, BigInteger_t1790 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m10034 (ModulusRing_t1789 * __this, BigInteger_t1790 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1790 * ModulusRing_Multiply_m10035 (ModulusRing_t1789 * __this, BigInteger_t1790 * ___a, BigInteger_t1790 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1790 * ModulusRing_Difference_m10036 (ModulusRing_t1789 * __this, BigInteger_t1790 * ___a, BigInteger_t1790 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1790 * ModulusRing_Pow_m10037 (ModulusRing_t1789 * __this, BigInteger_t1790 * ___a, BigInteger_t1790 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1790 * ModulusRing_Pow_m10038 (ModulusRing_t1789 * __this, uint32_t ___b, BigInteger_t1790 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
