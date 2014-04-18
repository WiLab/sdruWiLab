//
// MATLAB Compiler: 4.18.1 (R2013a)
// Date: Thu Apr  3 19:01:28 2014
// Arguments: "-B" "macro_default" "-v" "-W" "cpplib:libTXRX" "-T" "link:lib"
// "CreateTXRX.m" "BoardIdCapiEnumT.m" "testPHYReceive.m" "testPHYTransmit.m" 
//

#include <stdio.h>
#define EXPORTING_libTXRX 1
#include "libTXRX.h"

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
#ifndef LIB_libTXRX_C_API
#define LIB_libTXRX_C_API /* No special import/export declaration */
#endif

LIB_libTXRX_C_API 
bool MW_CALL_CONV libTXRXInitializeWithHandlers(
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
            mclGetEmbeddedCtfStream((void *)(libTXRXInitializeWithHandlers));
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

LIB_libTXRX_C_API 
bool MW_CALL_CONV libTXRXInitialize(void)
{
  return libTXRXInitializeWithHandlers(mclDefaultErrorHandler, mclDefaultPrintHandler);
}

LIB_libTXRX_C_API 
void MW_CALL_CONV libTXRXTerminate(void)
{
  if (_mcr_inst != NULL)
    mclTerminateInstance(&_mcr_inst);
}

LIB_libTXRX_C_API 
void MW_CALL_CONV libTXRXPrintStackTrace(void) 
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


LIB_libTXRX_C_API 
bool MW_CALL_CONV mlxCreateTXRX(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[])
{
  return mclFeval(_mcr_inst, "CreateTXRX", nlhs, plhs, nrhs, prhs);
}

LIB_libTXRX_C_API 
bool MW_CALL_CONV mlxBoardIdCapiEnumT(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                      *prhs[])
{
  return mclFeval(_mcr_inst, "BoardIdCapiEnumT", nlhs, plhs, nrhs, prhs);
}

LIB_libTXRX_C_API 
bool MW_CALL_CONV mlxTestPHYReceive(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[])
{
  return mclFeval(_mcr_inst, "testPHYReceive", nlhs, plhs, nrhs, prhs);
}

LIB_libTXRX_C_API 
bool MW_CALL_CONV mlxTestPHYTransmit(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[])
{
  return mclFeval(_mcr_inst, "testPHYTransmit", nlhs, plhs, nrhs, prhs);
}

LIB_libTXRX_CPP_API 
void MW_CALL_CONV CreateTXRX(int nargout, mwArray& ObjAGC, mwArray& ObjSDRuReceiver, 
                             mwArray& ObjDetect, mwArray& ObjPreambleDemod, mwArray& 
                             ObjDataDemod, mwArray& estimate, mwArray& tx, mwArray& 
                             timeoutDuration, mwArray& messageBits, mwArray& 
                             desiredSamplingFrequency)
{
  mclcppMlfFeval(_mcr_inst, "CreateTXRX", nargout, 10, 0, &ObjAGC, &ObjSDRuReceiver, &ObjDetect, &ObjPreambleDemod, &ObjDataDemod, &estimate, &tx, &timeoutDuration, &messageBits, &desiredSamplingFrequency);
}

LIB_libTXRX_CPP_API 
void MW_CALL_CONV BoardIdCapiEnumT(int nargout, mwArray& varargout, const mwArray& 
                                   varargin)
{
  mclcppMlfFeval(_mcr_inst, "BoardIdCapiEnumT", nargout, -1, -1, &varargout, &varargin);
}

LIB_libTXRX_CPP_API 
void MW_CALL_CONV BoardIdCapiEnumT(int nargout, mwArray& varargout)
{
  mclcppMlfFeval(_mcr_inst, "BoardIdCapiEnumT", nargout, -1, 0, &varargout);
}

LIB_libTXRX_CPP_API 
void MW_CALL_CONV BoardIdCapiEnumT(const mwArray& varargin)
{
  mclcppMlfFeval(_mcr_inst, "BoardIdCapiEnumT", 0, 0, -1, &varargin);
}

LIB_libTXRX_CPP_API 
void MW_CALL_CONV BoardIdCapiEnumT()
{
  mclcppMlfFeval(_mcr_inst, "BoardIdCapiEnumT", 0, 0, 0);
}

LIB_libTXRX_CPP_API 
void MW_CALL_CONV testPHYReceive(int nargout, mwArray& result)
{
  mclcppMlfFeval(_mcr_inst, "testPHYReceive", nargout, 1, 0, &result);
}

LIB_libTXRX_CPP_API 
void MW_CALL_CONV testPHYTransmit(int nargout, mwArray& result)
{
  mclcppMlfFeval(_mcr_inst, "testPHYTransmit", nargout, 1, 0, &result);
}

