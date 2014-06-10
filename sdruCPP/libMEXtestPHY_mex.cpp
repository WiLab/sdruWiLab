//
// MATLAB Compiler: 4.18.1 (R2013a)
// Date: Thu Apr 24 10:44:24 2014
// Arguments: "-B" "macro_default" "-v" "-W" "cpplib:libMEXtestPHY_mex" "-T"
// "link:lib" "testPHYReceive_per_mex" 
//

#include <stdio.h>
#define EXPORTING_libMEXtestPHY_mex 1
#include "libMEXtestPHY_mex.h"

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
#ifndef LIB_libMEXtestPHY_mex_C_API
#define LIB_libMEXtestPHY_mex_C_API /* No special import/export declaration */
#endif

LIB_libMEXtestPHY_mex_C_API 
bool MW_CALL_CONV libMEXtestPHY_mexInitializeWithHandlers(
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
            mclGetEmbeddedCtfStream((void *)(libMEXtestPHY_mexInitializeWithHandlers));
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

LIB_libMEXtestPHY_mex_C_API 
bool MW_CALL_CONV libMEXtestPHY_mexInitialize(void)
{
  return libMEXtestPHY_mexInitializeWithHandlers(mclDefaultErrorHandler, 
                                                 mclDefaultPrintHandler);
}

LIB_libMEXtestPHY_mex_C_API 
void MW_CALL_CONV libMEXtestPHY_mexTerminate(void)
{
  if (_mcr_inst != NULL)
    mclTerminateInstance(&_mcr_inst);
}

LIB_libMEXtestPHY_mex_C_API 
void MW_CALL_CONV libMEXtestPHY_mexPrintStackTrace(void) 
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


LIB_libMEXtestPHY_mex_C_API 
bool MW_CALL_CONV mlxTestPHYReceive_per_mex(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                            *prhs[])
{
  return mclFeval(_mcr_inst, "testPHYReceive_per_mex", nlhs, plhs, nrhs, prhs);
}

LIB_libMEXtestPHY_mex_CPP_API 
void MW_CALL_CONV testPHYReceive_per_mex(int nargout, mwArray& varargout, const mwArray& 
                                         varargin)
{
  mclcppMlfFeval(_mcr_inst, "testPHYReceive_per_mex", nargout, -1, -1, &varargout, &varargin);
}

LIB_libMEXtestPHY_mex_CPP_API 
void MW_CALL_CONV testPHYReceive_per_mex(int nargout, mwArray& varargout)
{
  mclcppMlfFeval(_mcr_inst, "testPHYReceive_per_mex", nargout, -1, 0, &varargout);
}

LIB_libMEXtestPHY_mex_CPP_API 
void MW_CALL_CONV testPHYReceive_per_mex(const mwArray& varargin)
{
  mclcppMlfFeval(_mcr_inst, "testPHYReceive_per_mex", 0, 0, -1, &varargin);
}

LIB_libMEXtestPHY_mex_CPP_API 
void MW_CALL_CONV testPHYReceive_per_mex()
{
  mclcppMlfFeval(_mcr_inst, "testPHYReceive_per_mex", 0, 0, 0);
}

