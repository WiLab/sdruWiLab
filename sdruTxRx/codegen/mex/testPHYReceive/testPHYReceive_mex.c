/*
 * testPHYReceive_mex.c
 *
 * Code generation for function 'testPHYReceive'
 *
 * C source code generated on: Thu Apr  3 19:36:38 2014
 *
 */

/* Include files */
#include "mex.h"
#include "testPHYReceive_api.h"
#include "testPHYReceive_initialize.h"
#include "testPHYReceive_terminate.h"

/* Function Declarations */
static void testPHYReceive_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);
MEXFUNCTION_LINKAGE mxArray *emlrtMexFcnProperties(void);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "testPHYReceive", NULL, false, {4039608648U,3629799818U,965288759U,2147606307U}, NULL };
emlrtCTX emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void testPHYReceive_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  mxArray *inputs[1];
  int n = 0;
  int nInputs = nrhs;
  testPHYReceiveStackData* testPHYReceiveStackDataLocal = (testPHYReceiveStackData*)mxCalloc(1,sizeof(testPHYReceiveStackData));
  /* Module initialization. */
  testPHYReceive_initialize(&emlrtContextGlobal);
  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 1, mxCHAR_CLASS, 14, "testPHYReceive");
  } else if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 14, "testPHYReceive");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = (mxArray *)prhs[n];
  }
  /* Call the function. */
  testPHYReceive_api(testPHYReceiveStackDataLocal, (const mxArray**)inputs);
  /* Module finalization. */
  testPHYReceive_terminate();
  mxFree(testPHYReceiveStackDataLocal);
}

void testPHYReceive_atexit_wrapper(void)
{
   testPHYReceive_atexit();
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(testPHYReceive_atexit_wrapper);
  /* Dispatch the entry-point. */
  testPHYReceive_mexFunction(nlhs, plhs, nrhs, prhs);
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
  xInputs = mxCreateLogicalMatrix(1, 1);
  mxSetFieldByNumber(xEntryPoints, 0, 0, mxCreateString("testPHYReceive"));
  mxSetFieldByNumber(xEntryPoints, 0, 1, mxCreateDoubleScalar(1));
  mxSetFieldByNumber(xEntryPoints, 0, 2, mxCreateDoubleScalar(0));
  mxSetFieldByNumber(xEntryPoints, 0, 3, xInputs);
  mxSetFieldByNumber(xResult, 0, 0, mxCreateString("8.1.0.604 (R2013a)"));
  mxSetFieldByNumber(xResult, 0, 1, (mxArray*)emlrtMexFcnResolvedFunctionsInfo());
  mxSetFieldByNumber(xResult, 0, 2, xEntryPoints);

  return xResult;
}
/* End of code generation (testPHYReceive_mex.c) */
