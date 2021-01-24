workspace "PracticeChallenges"
	architecture "x86_64"
	startproject "Challenge1"

	configurations
	{
		"Debug",
		"Release",
		"RelWithDebInfo"
	}

	flags
	{
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

group "Very Easy"
	include "Challenges/VeryEasy/Challenge1"