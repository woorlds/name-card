# CMake build script for the name card project

# Name card project
PROJECT(name-card)

# CMake minimum requirement version
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

# Executable
ADD_EXECUTABLE(name-card name-card.c
	init.c
	input.c)
