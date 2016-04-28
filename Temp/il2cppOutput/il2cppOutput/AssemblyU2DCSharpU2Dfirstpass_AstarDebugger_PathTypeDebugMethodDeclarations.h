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
// System.Func`1<System.Int32>
struct Func_1_t92;
// System.Text.StringBuilder
struct StringBuilder_t95;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_AstarDebugger_PathTypeDebug.h"

// System.Void AstarDebugger/PathTypeDebug::.ctor(System.String,System.Func`1<System.Int32>,System.Func`1<System.Int32>)
extern "C" void PathTypeDebug__ctor_m412 (PathTypeDebug_t91 * __this, String_t* ___name, Func_1_t92 * ___getSize, Func_1_t92 * ___getTotalCreated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AstarDebugger/PathTypeDebug::Print(System.Text.StringBuilder)
extern "C" void PathTypeDebug_Print_m413 (PathTypeDebug_t91 * __this, StringBuilder_t95 * ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
