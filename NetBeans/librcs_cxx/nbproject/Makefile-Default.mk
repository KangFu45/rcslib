#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_CONF=Default
CND_DISTDIR=dist

# Include project Makefile
include librcs_cxx-Makefile.mk

# Object Directory
OBJECTDIR=build/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES=

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	cd ../../src && make -f Makefile CXXFLAGS="-g3 -gdwarf-2" CFLAGS="-g3 -gdwarf-2" LDFLAGS="-Wl,--build-id"

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf:
	cd ../../src && make -f Makefile clean

# Subprojects
.clean-subprojects: