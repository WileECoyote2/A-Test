#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Ionic.Zip.ZipEntry
struct ZipEntry_t392;
// System.String
struct String_t;

#include "mscorlib_System_EventArgs.h"
#include "Pathfinding_Ionic_Zip_Reduced_Pathfinding_Ionic_Zip_ZipProgr.h"

// Pathfinding.Ionic.Zip.ZipProgressEventArgs
struct  ZipProgressEventArgs_t980  : public EventArgs_t981
{
	// System.Int32 Pathfinding.Ionic.Zip.ZipProgressEventArgs::_entriesTotal
	int32_t ____entriesTotal_1;
	// System.Boolean Pathfinding.Ionic.Zip.ZipProgressEventArgs::_cancel
	bool ____cancel_2;
	// Pathfinding.Ionic.Zip.ZipEntry Pathfinding.Ionic.Zip.ZipProgressEventArgs::_latestEntry
	ZipEntry_t392 * ____latestEntry_3;
	// Pathfinding.Ionic.Zip.ZipProgressEventType Pathfinding.Ionic.Zip.ZipProgressEventArgs::_flavor
	int32_t ____flavor_4;
	// System.String Pathfinding.Ionic.Zip.ZipProgressEventArgs::_archiveName
	String_t* ____archiveName_5;
	// System.Int64 Pathfinding.Ionic.Zip.ZipProgressEventArgs::_bytesTransferred
	int64_t ____bytesTransferred_6;
	// System.Int64 Pathfinding.Ionic.Zip.ZipProgressEventArgs::_totalBytesToTransfer
	int64_t ____totalBytesToTransfer_7;
};
