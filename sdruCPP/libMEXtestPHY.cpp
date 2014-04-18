//
// MATLAB Compiler: 4.18.1 (R2013a)
// Date: Fri Apr 18 16:38:09 2014
// Arguments: "-B" "macro_default" "-v" "-W" "cpplib:libMEXtestPHY" "-T"
// "link:lib" "MEXtestPHYReceive_per.m" "MEXtestPHYTransmit.m" 
//

#include <stdio.h>
#define EXPORTING_libMEXtestPHY 1
#include "libMEXtestPHY.h"

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
#ifndef LIB_libMEXtestPHY_C_API
#define LIB_libMEXtestPHY_C_API /* No special import/export declaration */
#endif

LIB_libMEXtestPHY_C_API 
bool MW_CALL_CONV libMEXtestPHYInitializeWithHandlers(
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
            mclGetEmbeddedCtfStream((void *)(libMEXtestPHYInitializeWithHandlers));
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

LIB_libMEXtestPHY_C_API 
bool MW_CALL_CONV libMEXtestPHYInitialize(void)
{
  return libMEXtestPHYInitializeWithHandlers(mclDefaultErrorHandler, 
                                             mclDefaultPrintHandler);
}

LIB_libMEXtestPHY_C_API 
void MW_CALL_CONV libMEXtestPHYTerminate(void)
{
  if (_mcr_inst != NULL)
    mclTerminateInstance(&_mcr_inst);
}

LIB_libMEXtestPHY_C_API 
void MW_CALL_CONV libMEXtestPHYPrintStackTrace(void) 
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


LIB_libMEXtestPHY_C_API 
bool MW_CALL_CONV mlxMEXtestPHYReceive_per(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                           *prhs[])
{
  return mclFeval(_mcr_inst, "MEXtestPHYReceive_per", nlhs, plhs, nrhs, prhs);
}

LIB_libMEXtestPHY_C_API 
bool MW_CALL_CONV mlxMEXtestPHYTransmit(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                        *prhs[])
{
  return mclFeval(_mcr_inst, "MEXtestPHYTransmit", nlhs, plhs, nrhs, prhs);
}

LIB_libMEXtestPHY_CPP_API 
void MW_CALL_CONV MEXtestPHYReceive_per(int nargout, mwArray& result, const mwArray& 
                                        decimation)
{
  mclcppMlfFeval(_mcr_inst, "MEXtestPHYReceive_per", nargout, 1, 1, &result, &decimation);
}

LIB_libMEXtestPHY_CPP_API 
void MW_CALL_CONV MEXtestPHYTransmit(int nargout, mwArray& result)
{
  mclcppMlfFeval(_mcr_inst, "MEXtestPHYTransmit", nargout, 1, 0, &result);
}

