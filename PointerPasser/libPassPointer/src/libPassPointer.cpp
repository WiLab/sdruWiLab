//
// MATLAB Compiler: 4.18.1 (R2013a)
// Date: Fri Apr 18 00:38:05 2014
// Arguments: "-B" "macro_default" "-W" "cpplib:libPassPointer" "-T" "link:lib"
// "-d"
// "/home/sdruser/git/traviscollins/sdruWiLab/PointerPasser/libPassPointer/src"
// "-N" "-w" "enable:specified_file_mismatch" "-w" "enable:repeated_file" "-w"
// "enable:switch_ignored" "-w" "enable:missing_lib_sentinel" "-w"
// "enable:demo_license" "-v"
// "/home/sdruser/git/traviscollins/sdruWiLab/PointerPasser/WriteDataToPipe.m" 
//

#include <stdio.h>
#define EXPORTING_libPassPointer 1
#include "libPassPointer.h"

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
#ifndef LIB_libPassPointer_C_API
#define LIB_libPassPointer_C_API /* No special import/export declaration */
#endif

LIB_libPassPointer_C_API 
bool MW_CALL_CONV libPassPointerInitializeWithHandlers(
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
            mclGetEmbeddedCtfStream((void *)(libPassPointerInitializeWithHandlers));
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

LIB_libPassPointer_C_API 
bool MW_CALL_CONV libPassPointerInitialize(void)
{
  return libPassPointerInitializeWithHandlers(mclDefaultErrorHandler, 
                                              mclDefaultPrintHandler);
}

LIB_libPassPointer_C_API 
void MW_CALL_CONV libPassPointerTerminate(void)
{
  if (_mcr_inst != NULL)
    mclTerminateInstance(&_mcr_inst);
}

LIB_libPassPointer_C_API 
void MW_CALL_CONV libPassPointerPrintStackTrace(void) 
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


LIB_libPassPointer_C_API 
bool MW_CALL_CONV mlxWriteDataToPipe(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[])
{
  return mclFeval(_mcr_inst, "WriteDataToPipe", nlhs, plhs, nrhs, prhs);
}

LIB_libPassPointer_CPP_API 
void MW_CALL_CONV WriteDataToPipe(const mwArray& pointer)
{
  mclcppMlfFeval(_mcr_inst, "WriteDataToPipe", 0, 0, 1, &pointer);
}

