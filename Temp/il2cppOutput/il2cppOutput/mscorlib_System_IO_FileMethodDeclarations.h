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
// System.IO.FileStream
struct FileStream_t451;
// System.IO.StreamReader
struct StreamReader_t450;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_FileMode.h"
#include "mscorlib_System_IO_FileAccess.h"
#include "mscorlib_System_IO_FileShare.h"
#include "mscorlib_System_IO_FileAttributes.h"

// System.Void System.IO.File::Delete(System.String)
extern "C" void File_Delete_m5176 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.File::Exists(System.String)
extern "C" bool File_Exists_m2158 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::Move(System.String,System.String)
extern "C" void File_Move_m5213 (Object_t * __this /* static, unused */, String_t* ___sourceFileName, String_t* ___destFileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode)
extern "C" FileStream_t451 * File_Open_m10982 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::Open(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C" FileStream_t451 * File_Open_m5151 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___mode, int32_t ___access, int32_t ___share, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C" FileStream_t451 * File_OpenRead_m5223 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamReader System.IO.File::OpenText(System.String)
extern "C" StreamReader_t450 * File_OpenText_m2165 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::SetAttributes(System.String,System.IO.FileAttributes)
extern "C" void File_SetAttributes_m5180 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___fileAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::CheckPathExceptions(System.String)
extern "C" void File_CheckPathExceptions_m10983 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
