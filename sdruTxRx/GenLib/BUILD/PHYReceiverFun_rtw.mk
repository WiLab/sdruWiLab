###########################################################################
## File : PHYReceiverFun_rtw.mk
## 
## Makefile generated for MATLAB file/project 'PHYReceiverFun'. 
## 
## Makefile Info:
## 
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/testRX.so
## Product type : dynamic-library
## 
## MATLAB Coder version: 2.4 (R2013a)
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPUTER                Computer type. See the MATLAB "computer" command.
# DEF_FILE                Definition file

PRODUCT_NAME              = PHYReceiverFun
MAKEFILE                  = PHYReceiverFun_rtw.mk
COMPUTER                  = GLNXA64
ARCH                      = glnxa64
MATLAB_ROOT               = /opt/MATLAB/R2013a
START_DIR                 = /home/sdruser/git/traviscollins/testRepo/sdruWiLab/sdruTxRx/GenLib/codegen/dll/PHYReceiverFun
RELATIVE_PATH_TO_ANCHOR   = .
MATLAB_BIN                = $(MATLAB_ROOT)/bin
MATLAB_ARCH_BIN           = $(MATLAB_ROOT)/bin/glnxa64
DEF_FILE                  = $(PRODUCT_NAME).def
ANSI_OPTS                 = -ansi -pedantic -fwrapv -fPIC
CPP_ANSI_OPTS             = -fPIC

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

TOOLCHAIN_MAKEFILE = PHYReceiverFun_rtw_tools.mk

-include PHYReceiverFun_rtw_tools.mk


###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/testRX.so
PRODUCT_TYPE = "dynamic-library"
BUILD_TYPE = "Dynamic Library"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I/home/sdruser/git/traviscollins/testRepo/sdruWiLab/sdruTxRx/GenLib -I$(START_DIR) -I/home/sdruser/git/traviscollins/testRepo/sdruWiLab/sdruTxRx/SupportFiles -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/rtw/c/ert

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_STANDARD = -DMODEL=testRX -DHAVESTDIO -DUSE_RTMODEL -DUNIX

DEFINES = $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/PHYReceiverFun_rtwutil.c $(START_DIR)/PHYReceiverFun_data.c $(START_DIR)/PHYReceiverFun_initialize.c $(START_DIR)/PHYReceiverFun_terminate.c $(START_DIR)/PHYReceiverFun.c $(START_DIR)/fprintf.c $(START_DIR)/fileManager.c $(START_DIR)/PHYReceiver.c $(START_DIR)/OFDMPHYBase.c $(START_DIR)/SystemProp.c $(START_DIR)/SystemCore.c $(START_DIR)/rand.c $(START_DIR)/OFDMModulator.c $(START_DIR)/rdivide.c $(START_DIR)/abs.c $(START_DIR)/OFDMDemodulator.c $(START_DIR)/AGC.c $(START_DIR)/power.c $(START_DIR)/mean.c $(START_DIR)/xcorr.c $(START_DIR)/fft.c $(START_DIR)/resample.c $(START_DIR)/FIRRateConverter.c $(START_DIR)/setup.c $(START_DIR)/PHYReceiverFun_emxutil.c $(START_DIR)/rt_nonfinite.c $(START_DIR)/rtGetNaN.c $(START_DIR)/rtGetInf.c

###########################################################################
## OBJECTS
###########################################################################

OBJS = PHYReceiverFun_rtwutil.o PHYReceiverFun_data.o PHYReceiverFun_initialize.o PHYReceiverFun_terminate.o PHYReceiverFun.o fprintf.o fileManager.o PHYReceiver.o OFDMPHYBase.o SystemProp.o SystemCore.o rand.o OFDMModulator.o rdivide.o abs.o OFDMDemodulator.o AGC.o power.o mean.o xcorr.o fft.o resample.o FIRRateConverter.o setup.o PHYReceiverFun_emxutil.o rt_nonfinite.o rtGetNaN.o rtGetInf.o

###########################################################################
## LIBRARIES
###########################################################################

LIBS = 

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = -lm

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_BASIC)

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build clean info prebuild download execute


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


prebuild : 


download : build


execute : download


###########################################################################
## FINAL TARGET
###########################################################################

#----------------------------------------
# Create a dynamic library
#----------------------------------------

$(PRODUCT) : $(OBJS)
	@echo "### Creating dynamic library "$(PRODUCT)" ..."
	$(LD) $(SHAREDLIB_LDFLAGS) -o $(PRODUCT) $(OBJS) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : %.c
	@echo "### Compiling "$<" ..."
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : %.cpp
	@echo "### Compiling "$<" ..."
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	@echo "### Compiling "$<" ..."
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	@echo "### Compiling "$<" ..."
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.c
	@echo "### Compiling "$<" ..."
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	@echo "### Compiling "$<" ..."
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.c
	@echo "### Compiling "$<" ..."
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : $(START_DIR)/%.cpp
	@echo "### Compiling "$<" ..."
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.o : /home/sdruser/git/traviscollins/testRepo/sdruWiLab/sdruTxRx/GenLib/%.c
	@echo "### Compiling "$<" ..."
	$(CC) $(CFLAGS) -o "$@" "$<"


%.o : /home/sdruser/git/traviscollins/testRepo/sdruWiLab/sdruTxRx/GenLib/%.cpp
	@echo "### Compiling "$<" ..."
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


###########################################################################
## DEPENDENCIES
###########################################################################

$(OBJS) : $(MAKEFILE) rtw_proj.tmw $(TOOLCHAIN_MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "###  PRODUCT = $(PRODUCT)"
	@echo "###  PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "###  BUILD_TYPE = $(BUILD_TYPE)"
	@echo "###  INCLUDES = $(INCLUDES)"
	@echo "###  DEFINES = $(DEFINES)"
	@echo "###  SRCS = $(SRCS)"
	@echo "###  OBJS = $(OBJS)"
	@echo "###  LIBS = $(LIBS)"
	@echo "###  MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "###  SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "###  TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "###  CFLAGS = $(CFLAGS)"
	@echo "###  CPPFLAGS = $(CPPFLAGS)"
	@echo "###  ARFLAGS = $(ARFLAGS)"
	@echo "###  LDFLAGS = $(LDFLAGS)"
	@echo "###  SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "###  MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "###  MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "###  DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "###  EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "###  MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "###  Deleting $(PRODUCT) and all derived files..."
	$(RM) $(PRODUCT) $(OBJS)
	$(RM) *$(OBJ_EXT)
	$(RM) *$(SHAREDLIB_EXT)
	$(RM) *$(STATICLIB_EXT)
	$(ECHO) "###  Deleted: $(PRODUCT), all derived files"


