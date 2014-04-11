//
// MATLAB Compiler: 4.18.1 (R2013a)
// Date: Mon Apr  7 17:34:10 2014
// Arguments: "-B" "macro_default" "-v" "-W" "cpplib:libtestPHYReceive" "-T"
// "link:lib" "testPHYReceive.m" "BoardIdCapiEnumT.m" 
//

#include <stdio.h>
#define EXPORTING_libtestPHYReceive 1
#include "libtestPHYReceive.h"

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
#ifndef LIB_libtestPHYReceive_C_API
#define LIB_libtestPHYReceive_C_API /* No special import/export declaration */
#endif

LIB_libtestPHYReceive_C_API 
bool MW_CALL_CONV libtestPHYReceiveInitializeWithHandlers(
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
            mclGetEmbeddedCtfStream((void *)(libtestPHYReceiveInitializeWithHandlers));
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

LIB_libtestPHYReceive_C_API 
bool MW_CALL_CONV libtestPHYReceiveInitialize(void)
{
  return libtestPHYReceiveInitializeWithHandlers(mclDefaultErrorHandler, 
                                                 mclDefaultPrintHandler);
}

LIB_libtestPHYReceive_C_API 
void MW_CALL_CONV libtestPHYReceiveTerminate(void)
{
  if (_mcr_inst != NULL)
    mclTerminateInstance(&_mcr_inst);
}

LIB_libtestPHYReceive_C_API 
void MW_CALL_CONV libtestPHYReceivePrintStackTrace(void) 
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


LIB_libtestPHYReceive_C_API 
bool MW_CALL_CONV mlxTestPHYReceive(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[])
{
  return mclFeval(_mcr_inst, "testPHYReceive", nlhs, plhs, nrhs, prhs);
}

LIB_libtestPHYReceive_C_API 
bool MW_CALL_CONV mlxBoardIdCapiEnumT(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                      *prhs[])
{
  return mclFeval(_mcr_inst, "BoardIdCapiEnumT", nlhs, plhs, nrhs, prhs);
}

LIB_libtestPHYReceive_CPP_API 
void MW_CALL_CONV testPHYReceive(int nargout, mwArray& result)
{
  mclcppMlfFeval(_mcr_inst, "testPHYReceive", nargout, 1, 0, &result);
}

LIB_libtestPHYReceive_CPP_API 
void MW_CALL_CONV BoardIdCapiEnumT(int nargout, mwArray& varargout, const mwArray& 
                                   varargin)
{
  mclcppMlfFeval(_mcr_inst, "BoardIdCapiEnumT", nargout, -1, -1, &varargout, &varargin);
}

LIB_libtestPHYReceive_CPP_API 
void MW_CALL_CONV BoardIdCapiEnumT(int nargout, mwArray& varargout)
{
  mclcppMlfFeval(_mcr_inst, "BoardIdCapiEnumT", nargout, -1, 0, &varargout);
}

LIB_libtestPHYReceive_CPP_API 
void MW_CALL_CONV BoardIdCapiEnumT(const mwArray& varargin)
{
  mclcppMlfFeval(_mcr_inst, "BoardIdCapiEnumT", 0, 0, -1, &varargin);
}

LIB_libtestPHYReceive_CPP_API 
void MW_CALL_CONV BoardIdCapiEnumT()
{
  mclcppMlfFeval(_mcr_inst, "BoardIdCapiEnumT", 0, 0, 0);
}

