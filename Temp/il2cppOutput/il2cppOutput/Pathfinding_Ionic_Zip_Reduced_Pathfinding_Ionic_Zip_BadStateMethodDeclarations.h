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

// Pathfinding.Ionic.Zip.BadStateException
struct BadStateException_t991;
// System.String
struct String_t;
// System.Exception
struct Exception_t52;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Ionic.Zip.BadStateException::.ctor(System.String)
extern "C" void BadStateException__ctor_m4574 (BadStateException_t991 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.BadStateException::.ctor(System.String,System.Exception)
extern "C" void BadStateException__ctor_m4575 (BadStateException_t991 * __this, String_t* ___message, Exception_t52 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
