//
// MATLAB Compiler: 4.18.1 (R2013a)
// Date: Mon Apr  7 15:06:12 2014
// Arguments: "-B" "macro_default" "-W" "cpplib:libbasic_RX" "-T" "link:lib"
// "-d" "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/libbasic_RX/src"
// "-N" "-p" "comm" "-p" "dsp" "-w" "enable:specified_file_mismatch" "-w"
// "enable:repeated_file" "-w" "enable:switch_ignored" "-w"
// "enable:missing_lib_sentinel" "-w" "enable:demo_license" "-v"
// "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/basic_RX.m"
// "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/BoardIdCapiEnumT.m" 
//

#include <stdio.h>
#define EXPORTING_libbasic_RX 1
#include "libbasic_RX.h"

static HMCRINSTANCE _mcr_inst = NULL;


#ifdef __cplusplus
extern "C" {
#endif

static int mclDefaultPrintHandler(const char *s)
{
  return mclWrite(1 /* stdout */, s, sizeof(char)*strlen(s));
}

#ifdef __cplusplus
} /* End extern "C" block */
#endif

#ifdef __cplusplus
extern "C" {
#endif

static int mclDefaultErrorHandler(const char *s)
{
  int written = 0;
  size_t len = 0;
  len = strlen(s);
  written = mclWrite(2 /* stderr */, s, sizeof(char)*len);
  if (len > 0 && s[ len-1 ] != '\n')
    written += mclWrite(2 /* stderr */, "\n", sizeof(char));
  return written;
}

#ifdef __cplusplus
} /* End extern "C" block */
#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_libbasic_RX_C_API
#define LIB_libbasic_RX_C_API /* No special import/export declaration */
#endif

LIB_libbasic_RX_C_API 
bool MW_CALL_CONV libbasic_RXInitializeWithHandlers(
    mclOutputHandlerFcn error_handler,
    mclOutputHandlerFcn print_handler)
{
    int bResult = 0;
  if (_mcr_inst != NULL)
    return true;
  if (!mclmcrInitialize())
    return false;
    {
        mclCtfStream ctfStream = 
            mclGetEmbeddedCtfStream((void *)(libbasic_RXInitializeWithHandlers));
        if (ctfStream) {
            bResult = mclInitializeComponentInstanceEmbedded(   &_mcr_inst,
                                                                error_handler, 
                                                                print_handler,
                                                                ctfStream);
            mclDestroyStream(ctfStream);
        } else {
            bResult = 0;
        }
    }  
    if (!bResult)
    return false;
  return true;
}

LIB_libbasic_RX_C_API 
bool MW_CALL_CONV libbasic_RXInitialize(void)
{
  return libbasic_RXInitializeWithHandlers(mclDefaultErrorHandler, 
                                           mclDefaultPrintHandler);
}

LIB_libbasic_RX_C_API 
void MW_CALL_CONV libbasic_RXTerminate(void)
{
  if (_mcr_inst != NULL)
    mclTerminateInstance(&_mcr_inst);
}

LIB_libbasic_RX_C_API 
void MW_CALL_CONV libbasic_RXPrintStackTrace(void) 
{
  char** stackTrace;
  int stackDepth = mclGetStackTrace(&stackTrace);
  int i;
  for(i=0; i<stackDepth; i++)
  {
    mclWrite(2 /* stderr */, stackTrace[i], sizeof(char)*strlen(stackTrace[i]));
    mclWrite(2 /* stderr */, "\n", sizeof(char)*strlen("\n"));
  }
  mclFreeStackTrace(&stackTrace, stackDepth);
}


LIB_libbasic_RX_C_API 
bool MW_CALL_CONV mlxBasic_RX(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[])
{
  return mclFeval(_mcr_inst, "basic_RX", nlhs, plhs, nrhs, prhs);
}

LIB_libbasic_RX_C_API 
bool MW_CALL_CONV mlxBoardIdCapiEnumT(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                      *prhs[])
{
  return mclFeval(_mcr_inst, "BoardIdCapiEnumT", nlhs, plhs, nrhs, prhs);
}

LIB_libbasic_RX_CPP_API 
void MW_CALL_CONV basic_RX(int nargout, mwArray& result)
{
  mclcppMlfFeval(_mcr_inst, "basic_RX", nargout, 1, 0, &result);
}

LIB_libbasic_RX_CPP_API 
void MW_CALL_CONV BoardIdCapiEnumT(int nargout, mwArray& varargout, const mwArray& 
                                   varargin)
{
  mclcppMlfFeval(_mcr_inst, "BoardIdCapiEnumT", nargout, -1, -1, &varargout, &varargin);
}

LIB_libbasic_RX_CPP_API 
void MW_CALL_CONV BoardIdCapiEnumT(int nargout, mwArray& varargout)
{
  mclcppMlfFeval(_mcr_inst, "BoardIdCapiEnumT", nargout, -1, 0, &varargout);
}

LIB_libbasic_RX_CPP_API 
void MW_CALL_CONV BoardIdCapiEnumT(const mwArray& varargin)
{
  mclcppMlfFeval(_mcr_inst, "BoardIdCapiEnumT", 0, 0, -1, &varargin);
}

LIB_libbasic_RX_CPP_API 
void MW_CALL_CONV BoardIdCapiEnumT()
{
  mclcppMlfFeval(_mcr_inst, "BoardIdCapiEnumT", 0, 0, 0);
}

