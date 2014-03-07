START_DIR = /Volumes/git/traviscollins/sdruWiLab/sdruTxRx

MATLAB_ROOT = /Applications/MATLAB_R2013b.app
MAKEFILE = testMACTransmitter_mex.mk

include testMACTransmitter_mex.mki


SRC_FILES =  \
	testMACTransmitter_mexutil.c \
	testMACTransmitter_data.c \
	testMACTransmitter_initialize.c \
	testMACTransmitter_terminate.c \
	testMACTransmitter.c \
	rdivide.c \
	generateOFDMSignal_TX2.c \
	power.c \
	floor.c \
	OFDMModulator.c \
	SystemProp.c \
	SystemCore.c \
	eml_error.c \
	sum.c \
	colon.c \
	abs.c \
	find.c \
	eml_int_forloop_overflow_check.c \
	OFDMletters2bits.c \
	CRCGenerator.c \
	Nondirect1.c \
	setup.c \
	BPSKModulator.c \
	step.c \
	OFDMDemodulator.c \
	SDRuTransmitter.c \
	checkIPAddressFormat.c \
	generateOFDMSignal.c \
	initializeOFDMSyncMemory_sdr.c \
	AGC.c \
	SDRuReceiver.c \
	CRCDetector.c \
	MACLayerTransmitter.c \
	fprintf.c \
	PHYTransmit.c \
	mapiPrivate.c \
	closeDataConnection.c \
	sendComplexDoubleData.c \
	error.c \
	receiveData.c \
	PHYReceive.c \
	mean.c \
	locateOFDMFrame_sdr.c \
	xcorr.c \
	eml_setop.c \
	coarseOFDMFreqEst_sdr.c \
	angle.c \
	exp.c \
	equalizeOFDM.c \
	resample.c \
	upfirdn.c \
	FIRRateConverter.c \
	OFDMbits2letters.c \
	testMACTransmitter_api.c \
	testMACTransmitter_emxutil.c \
	testMACTransmitter_mex.c \
	_coder_testMACTransmitter_info.c

MEX_FILE_NAME_WO_EXT = testMACTransmitter_mex
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexmaci64
TARGET = $(MEX_FILE_NAME)

CustomCode_LIBS = "/Users/travis/Documents/sdru/bin/maci64/libmwusrp_uhd_capi.dylib" 
SYS_LIBS = $(CustomCode_LIBS) 


#
#====================================================================
# gmake makefile fragment for building MEX functions using Unix
# Copyright 2007-2013 The MathWorks, Inc.
#====================================================================
#
OBJEXT = o
.SUFFIXES: .$(OBJEXT)

OBJLISTC = $(SRC_FILES:.c=.$(OBJEXT))
OBJLISTCPP  = $(OBJLISTC:.cpp=.$(OBJEXT))
OBJLIST  = $(OBJLISTCPP:.cu=.$(OBJEXT))

target: $(TARGET)

ML_INCLUDES = -I "$(MATLAB_ROOT)/simulink/include"
ML_INCLUDES+= -I "$(MATLAB_ROOT)/toolbox/shared/simtargets"
SYS_INCLUDE = $(ML_INCLUDES)

# Additional includes

SYS_INCLUDE += -I "$(START_DIR)"
SYS_INCLUDE += -I "$(START_DIR)/codegen/mex/testMACTransmitter"
SYS_INCLUDE += -I "$(START_DIR)/codegen/mex/testMACTransmitter/interface"
SYS_INCLUDE += -I "$(MATLAB_ROOT)/extern/include"
SYS_INCLUDE += -I "$(MATLAB_ROOT)/src/include"
SYS_INCLUDE += -I "/Users/travis/Documents/sdru/include"
SYS_INCLUDE += -I "."

EML_LIBS = -lemlrt -lcovrt -lut -lmwmathutil -lmwblas 
SYS_LIBS += $(CLIBS) $(EML_LIBS)


EXPORTFILE = $(MEX_FILE_NAME_WO_EXT)_mex.map
ifeq ($(Arch),maci)
  EXPORTOPT = -Wl,-exported_symbols_list,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS) -DMX_COMPAT_32
  CXX_FLAGS = -c $(CXXFLAGS) -DMX_COMPAT_32
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS))
else ifeq ($(Arch),maci64)
  EXPORTOPT = -Wl,-exported_symbols_list,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS) -DMX_COMPAT_32
  CXX_FLAGS = -c $(CXXFLAGS) -DMX_COMPAT_32
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS))
else
  EXPORTOPT = -Wl,--version-script,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS) -DMX_COMPAT_32 $(OMPFLAGS)
  CXX_FLAGS = -c $(CXXFLAGS) -DMX_COMPAT_32 $(OMPFLAGS)
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS)) 
endif
LINK_FLAGS += $(OMPLINKFLAGS)
ifeq ($(Arch),maci)
  LINK_FLAGS += -L$(MATLAB_ROOT)/sys/os/maci
endif
ifeq ($(EMC_CONFIG),optim)
  ifeq ($(Arch),mac)
    COMP_FLAGS += $(CDEBUGFLAGS)
    CXX_FLAGS += $(CXXDEBUGFLAGS)
  else
    COMP_FLAGS += $(COPTIMFLAGS)
    CXX_FLAGS += $(CXXOPTIMFLAGS)
  endif
  LINK_FLAGS += $(LDOPTIMFLAGS)
else
  COMP_FLAGS += $(CDEBUGFLAGS)
  CXX_FLAGS += $(CXXDEBUGFLAGS)
  LINK_FLAGS += $(LDDEBUGFLAGS)
endif
LINK_FLAGS += -o $(TARGET)
LINK_FLAGS += 

CCFLAGS =  $(COMP_FLAGS) $(USER_INCLUDE) $(SYS_INCLUDE)
CPPFLAGS =   $(CXX_FLAGS) $(USER_INCLUDE) $(SYS_INCLUDE)

%.$(OBJEXT) : %.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : %.cpp
	$(CXX) $(CPPFLAGS) "$<"

# Additional sources

%.$(OBJEXT) : $(START_DIR)/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/codegen/mex/testMACTransmitter/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) $(CCFLAGS) "$<"



%.$(OBJEXT) : $(START_DIR)/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/codegen/mex/testMACTransmitter/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : interface/%.cu
	$(CC) $(CCFLAGS) "$<"



%.$(OBJEXT) : $(START_DIR)/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/codegen/mex/testMACTransmitter/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : interface/%.cpp
	$(CXX) $(CPPFLAGS) "$<"



$(TARGET): $(OBJLIST) $(MAKEFILE)
	$(LD) $(EXPORTOPT) $(LINK_FLAGS) $(OBJLIST) $(SYS_LIBS)

#====================================================================

