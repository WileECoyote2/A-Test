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

// Pathfinding.Ionic.Zip.ZipErrorEventArgs
struct ZipErrorEventArgs_t986;
// System.String
struct String_t;
// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t392;
// System.Exception
struct Exception_t52;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.Ionic.Zip.ZipErrorEventArgs::.ctor()
extern "C" void ZipErrorEventArgs__ctor_m4568 (ZipErrorEventArgs_t986 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Ionic.Zip.ZipErrorEventArgs Pathfinding.Ionic.Zip.ZipErrorEventArgs::Saving(System.String,Pathfinding.Ionic.Zip.ZipEntry,System.Exception)
extern "C" ZipErrorEventArgs_t986 * ZipErrorEventArgs_Saving_m4569 (Object_t * __this /* static, unused */, String_t* ___archiveName, ZipEntry_t392 * ___entry, Exception_t52 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
