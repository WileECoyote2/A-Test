#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.BinaryWriter
struct BinaryWriter_t149;
// System.IO.Stream
struct Stream_t448;
// System.Text.Encoding
struct Encoding_t442;
// System.Byte[]
struct ByteU5BU5D_t29;

#include "mscorlib_System_Object.h"

// System.IO.BinaryWriter
struct  BinaryWriter_t149  : public Object_t
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_t448 * ___OutStream_1;
	// System.Text.Encoding System.IO.BinaryWriter::m_encoding
	Encoding_t442 * ___m_encoding_2;
	// System.Byte[] System.IO.BinaryWriter::buffer
	ByteU5BU5D_t29* ___buffer_3;
	// System.Boolean System.IO.BinaryWriter::disposed
	bool ___disposed_4;
};
struct BinaryWriter_t149_StaticFields{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t149 * ___Null_0;
};
