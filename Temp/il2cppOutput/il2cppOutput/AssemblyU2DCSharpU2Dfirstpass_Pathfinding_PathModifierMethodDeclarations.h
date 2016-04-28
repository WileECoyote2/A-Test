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

// Pathfinding.PathModifier
struct PathModifier_t243;
// Seeker
struct Seeker_t5;
// Pathfinding.Path
struct Path_t10;

#include "codegen/il2cpp-codegen.h"

// System.Void Pathfinding.PathModifier::.ctor()
extern "C" void PathModifier__ctor_m1151 (PathModifier_t243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathModifier::Awake(Seeker)
extern "C" void PathModifier_Awake_m1152 (PathModifier_t243 * __this, Seeker_t5 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathModifier::OnDestroy(Seeker)
extern "C" void PathModifier_OnDestroy_m1153 (PathModifier_t243 * __this, Seeker_t5 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.PathModifier::PreProcess(Pathfinding.Path)
extern "C" void PathModifier_PreProcess_m1154 (PathModifier_t243 * __this, Path_t10 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
