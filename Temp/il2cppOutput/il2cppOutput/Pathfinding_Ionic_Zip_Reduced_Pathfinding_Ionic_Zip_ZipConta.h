#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Ionic.Zip.ZipFile
struct ZipFile_t159;
// Pathfinding.Ionic.Zip.ZipOutputStream
struct ZipOutputStream_t1023;
// Pathfinding.Ionic.Zip.ZipInputStream
struct ZipInputStream_t1021;

#include "mscorlib_System_Object.h"

// Pathfinding.Ionic.Zip.ZipContainer
struct  ZipContainer_t1001  : public Object_t
{
	// Pathfinding.Ionic.Zip.ZipFile Pathfinding.Ionic.Zip.ZipContainer::_zf
	ZipFile_t159 * ____zf_0;
	// Pathfinding.Ionic.Zip.ZipOutputStream Pathfinding.Ionic.Zip.ZipContainer::_zos
	ZipOutputStream_t1023 * ____zos_1;
	// Pathfinding.Ionic.Zip.ZipInputStream Pathfinding.Ionic.Zip.ZipContainer::_zis
	ZipInputStream_t1021 * ____zis_2;
};
