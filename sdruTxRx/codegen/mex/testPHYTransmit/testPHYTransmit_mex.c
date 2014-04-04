/*
 * testPHYTransmit_mex.c
 *
 * Code generation for function 'testPHYTransmit'
 *
 * C source code generated on: Sat Mar 29 15:48:38 2014
 *
 */

/* Include files */
#include "mex.h"
#include "testPHYTransmit_api.h"
#include "testPHYTransmit_initialize.h"
#include "testPHYTransmit_terminate.h"

/* Function Declarations */
static void testPHYTransmit_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);
MEXFUNCTION_LINKAGE mxArray *emlrtMexFcnProperties(void);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "testPHYTransmit", NULL, false, {2241891196U,57585034U,1152014091U,3029887202U}, NULL };
emlrtCTX emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void testPHYTransmit_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  testPHYTransmitStackData* testPHYTransmitStackDataLocal = (testPHYTransmitStackData*)mxCalloc(1,sizeof(testPHYTransmitStackData));
  /* Module initialization. */
  testPHYTransmit_initialize(&emlrtContextGlobal);
  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 0, mxCHAR_CLASS, 15, "testPHYTransmit");
  } else if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 15, "testPHYTransmit");
  }
  /* Call the function. */
  testPHYTransmit_api(testPHYTransmitStackDataLocal);
  /* Module finalization. */
  testPHYTransmit_terminate();
  mxFree(testPHYTransmitStackDataLocal);
}

void testPHYTransmit_atexit_wrapper(void)
{
   testPHYTransmit_atexit();
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(testPHYTransmit_atexit_wrapper);
  /* Dispatch the entry-point. */
  testPHYTransmit_mexFunction(nlhs, plhs, nrhs, prhs);
}

mxArray *emlrtMexFcnProperties(void)
{
  const char *mexProperties[] = {
    "Version",
    "ResolvedFunctions",
    "EntryPoints"};
  const char *epProperties[] = {
    "Name",
    "NumberOfInputs",
    "NumberOfOutputs",
    "ConstantInputs"};
  mxArray *xResult = mxCreateStructMatrix(1,1,3,mexProperties);
  mxArray *xEntryPoints = mxCreateStructMatrix(1,1,4,epProperties);
  mxArray *xInputs = NULL;
  xInputs = mxCreateLogicalMatrix(1, 0);
  mxSetFieldByNumber(xEntryPoints, 0, 0, mxCreateString("testPHYTransmit"));
  mxSetFieldByNumber(xEntryPoints, 0, 1, mxCreateDoubleScalar(0));
  mxSetFieldByNumber(xEntryPoints, 0, 2, mxCreateDoubleScalar(0));
  mxSetFieldByNumber(xEntryPoints, 0, 3, xInputs);
  mxSetFieldByNumber(xResult, 0, 0, mxCreateString("8.1.0.604 (R2013a)"));
  mxSetFieldByNumber(xResult, 0, 1, (mxArray*)emlrtMexFcnResolvedFunctionsInfo());
  mxSetFieldByNumber(xResult, 0, 2, xEntryPoints);

  return xResult;
}
/* End of code generation (testPHYTransmit_mex.c) */
