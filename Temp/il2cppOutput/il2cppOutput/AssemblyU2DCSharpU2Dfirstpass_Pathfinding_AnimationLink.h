#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t88;
// Pathfinding.AnimationLink/LinkClip[]
struct LinkClipU5BU5D_t89;

#include "AssemblyU2DCSharpU2Dfirstpass_Pathfinding_NodeLink2.h"

// Pathfinding.AnimationLink
struct  AnimationLink_t86  : public NodeLink2_t87
{
	// System.String Pathfinding.AnimationLink::clip
	String_t* ___clip_18;
	// System.Single Pathfinding.AnimationLink::animSpeed
	float ___animSpeed_19;
	// System.Boolean Pathfinding.AnimationLink::reverseAnim
	bool ___reverseAnim_20;
	// UnityEngine.GameObject Pathfinding.AnimationLink::referenceMesh
	GameObject_t88 * ___referenceMesh_21;
	// Pathfinding.AnimationLink/LinkClip[] Pathfinding.AnimationLink::sequence
	LinkClipU5BU5D_t89* ___sequence_22;
	// System.String Pathfinding.AnimationLink::boneRoot
	String_t* ___boneRoot_23;
};
