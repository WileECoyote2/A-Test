#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Ionic.Zip.ZipCrypto
struct ZipCrypto_t996;
// System.IO.Stream
struct Stream_t448;

#include "mscorlib_System_IO_Stream.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_CryptoMo.h"

// Pathfinding.Ionic.Zip.ZipCipherStream
struct  ZipCipherStream_t999  : public Stream_t448
{
	// Pathfinding.Ionic.Zip.ZipCrypto Pathfinding.Ionic.Zip.ZipCipherStream::_cipher
	ZipCrypto_t996 * ____cipher_1;
	// System.IO.Stream Pathfinding.Ionic.Zip.ZipCipherStream::_s
	Stream_t448 * ____s_2;
	// Pathfinding.Ionic.Zip.CryptoMode Pathfinding.Ionic.Zip.ZipCipherStream::_mode
	int32_t ____mode_3;
};
