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

// Pathfinding.Ionic.Zip.OpenDelegate
struct OpenDelegate_t976;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t448;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t379;
// System.AsyncCallback
struct AsyncCallback_t380;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void Pathfinding.Ionic.Zip.OpenDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void OpenDelegate__ctor_m4528 (OpenDelegate_t976 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.OpenDelegate::Invoke(System.String)
extern "C" Stream_t448 * OpenDelegate_Invoke_m4529 (OpenDelegate_t976 * __this, String_t* ___entryName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Stream_t448 * pinvoke_delegate_wrapper_OpenDelegate_t976(Il2CppObject* delegate, String_t* ___entryName);
// System.IAsyncResult Pathfinding.Ionic.Zip.OpenDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * OpenDelegate_BeginInvoke_m4530 (OpenDelegate_t976 * __this, String_t* ___entryName, AsyncCallback_t380 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Pathfinding.Ionic.Zip.OpenDelegate::EndInvoke(System.IAsyncResult)
extern "C" Stream_t448 * OpenDelegate_EndInvoke_m4531 (OpenDelegate_t976 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
