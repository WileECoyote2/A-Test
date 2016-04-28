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

// Pathfinding.Ionic.Zip.WriteDelegate
struct WriteDelegate_t975;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t448;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void Pathfinding.Ionic.Zip.WriteDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void WriteDelegate__ctor_m4524 (WriteDelegate_t975 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.WriteDelegate::Invoke(System.String,System.IO.Stream)
extern "C" void WriteDelegate_Invoke_m4525 (WriteDelegate_t975 * __this, String_t* ___entryName, Stream_t448 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_WriteDelegate_t975(Il2CppObject* delegate, String_t* ___entryName, Stream_t448 * ___stream);
// System.IAsyncResult Pathfinding.Ionic.Zip.WriteDelegate::BeginInvoke(System.String,System.IO.Stream,System.AsyncCallback,System.Object)
extern "C" Object_t * WriteDelegate_BeginInvoke_m4526 (WriteDelegate_t975 * __this, String_t* ___entryName, Stream_t448 * ___stream, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Ionic.Zip.WriteDelegate::EndInvoke(System.IAsyncResult)
extern "C" void WriteDelegate_EndInvoke_m4527 (WriteDelegate_t975 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
