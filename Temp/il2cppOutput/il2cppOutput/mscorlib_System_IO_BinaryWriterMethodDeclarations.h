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

// System.IO.BinaryWriter
struct BinaryWriter_t149;
// System.IO.Stream
struct Stream_t448;
// System.Text.Encoding
struct Encoding_t442;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.BinaryWriter::.ctor()
extern "C" void BinaryWriter__ctor_m10955 (BinaryWriter_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
extern "C" void BinaryWriter__ctor_m2015 (BinaryWriter_t149 * __this, Stream_t448 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void BinaryWriter__ctor_m10956 (BinaryWriter_t149 * __this, Stream_t448 * ___output, Encoding_t442 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.cctor()
extern "C" void BinaryWriter__cctor_m10957 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::System.IDisposable.Dispose()
extern "C" void BinaryWriter_System_IDisposable_Dispose_m10958 (BinaryWriter_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Close()
extern "C" void BinaryWriter_Close_m10959 (BinaryWriter_t149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Dispose(System.Boolean)
extern "C" void BinaryWriter_Dispose_m10960 (BinaryWriter_t149 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Boolean)
extern "C" void BinaryWriter_Write_m10961 (BinaryWriter_t149 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int32)
extern "C" void BinaryWriter_Write_m10962 (BinaryWriter_t149 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Single)
extern "C" void BinaryWriter_Write_m10963 (BinaryWriter_t149 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt16)
extern "C" void BinaryWriter_Write_m10964 (BinaryWriter_t149 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.UInt32)
extern "C" void BinaryWriter_Write_m10965 (BinaryWriter_t149 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
