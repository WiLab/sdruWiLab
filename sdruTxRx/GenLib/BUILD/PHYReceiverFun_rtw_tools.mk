###########################################################################
## File : PHYReceiverFun_rtw_tools.mk
## 
## Makefile generated for MATLAB file/project 'PHYReceiverFun'. 
## 
## Makefile Info:
## 
## Toolchain Name:          GNU gcc/g++ v4.4.x | gmake (64-bit Linux)
## Supported Version(s):    4.4.x
## ToolchainInfo Version:   R2013a
## Specification Revision:  1.0
## 
## MATLAB Coder version: 2.4 (R2013a)
## 
###########################################################################



#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# ANSI_OPTS
# CPP_ANSI_OPTS

#-----------
# MACROS
#-----------

WARN_FLAGS         = -Wall -W -Wwrite-strings -Winline -Wstrict-prototypes -Wnested-externs -Wpointer-arith -Wcast-align
WARN_FLAGS_MAX     = $(WARN_FLAGS) -Wcast-qual -Wshadow
CPP_WARN_FLAGS     = -Wall -W -Wwrite-strings -Winline -Wpointer-arith -Wcast-align
CPP_WARN_FLAGS_MAX = $(CPP_WARN_FLAGS) -Wcast-qual -Wshadow

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: GNU C Compiler
CC = gcc

# C++ Compiler: GNU C++ Compiler
CPP = g++

# Archiver: GNU Archiver
AR = ar

# Linker: GNU Linker
LD = gcc

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_BIN)
MEX = $(MEX_PATH)/mex

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder Application: GMAKE Utility
MAKE_PATH = %MATLAB%/bin/glnxa64
MAKE = $(MAKE_PATH)/gmake


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g
C_OUTPUT_FLAG       = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
LDDEBUG             = -g
OUTPUT_FLAG         = -o
MEX_DEBUG           = -g
RM                  = @rm -f
ECHO                = @echo
MV                  = @mv
RUN                 = @cmd /C

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

ARFLAGS              = ruvs
CFLAGS               = -c $(ANSI_OPTS) \
                       -O0
CPPFLAGS             = -c $(CPP_ANSI_OPTS) \
                       -O0
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = -Wl,-rpath,"$(MATLAB_ARCH_BIN)",-L"$(MATLAB_ARCH_BIN)"
MEX_CFLAGS           = -MATLAB_ARCH=$(ARCH) $(INCLUDES) \
                         \
                       COPTIMFLAGS="$(ANSI_OPTS)  \
                       -O0 \
                        $(DEFINES)" \
                         \
                       -silent
MEX_LDFLAGS          = LDFLAGS=='$$LDFLAGS'
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -shared -Wl,-rpath,"$(MATLAB_ARCH_BIN)",-L"$(MATLAB_ARCH_BIN)" -Wl,--no-undefined

#--------------------
# File extensions
#--------------------

H_EXT               = .h
OBJ_EXT             = .o
C_EXT               = .c
HPP_EXT             = .hpp
OBJ_EXT             = .o
CPP_EXT             = .cpp
STATICLIB_EXT       = .a
EXE_EXT             =
SHAREDLIB_EXT       = .so
MEX_EXT             = .mexa64
MAKE_EXT            = .mk

