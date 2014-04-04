/*
 * testMACReceiver_mex.c
 *
 * Code generation for function 'testMACReceiver'
 *
 * C source code generated on: Thu Apr  3 19:51:43 2014
 *
 */

/* Include files */
#include "mex.h"
#include "testMACReceiver_api.h"
#include "testMACReceiver_initialize.h"
#include "testMACReceiver_terminate.h"

/* Function Declarations */
static void testMACReceiver_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);
MEXFUNCTION_LINKAGE mxArray *emlrtMexFcnProperties(void);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "testMACReceiver", NULL, false, {4039608648U,3629799818U,965288759U,2147606307U}, NULL };
emlrtCTX emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void testMACReceiver_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  mxArray *inputs[2];
  int n = 0;
  int nInputs = nrhs;
  testMACReceiverStackData* testMACReceiverStackDataLocal = (testMACReceiverStackData*)mxCalloc(1,sizeof(testMACReceiverStackData));
  /* Module initialization. */
  testMACReceiver_initialize(&emlrtContextGlobal);
  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 2, mxCHAR_CLASS, 15, "testMACReceiver");
  } else if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 15, "testMACReceiver");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = (mxArray *)prhs[n];
  }
  /* Call the function. */
  testMACReceiver_api(testMACReceiverStackDataLocal, (const mxArray**)inputs);
  /* Module finalization. */
  testMACReceiver_terminate();
  mxFree(testMACReceiverStackDataLocal);
}

void testMACReceiver_atexit_wrapper(void)
{
   testMACReceiver_atexit();
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(testMACReceiver_atexit_wrapper);
  /* Dispatch the entry-point. */
  testMACReceiver_mexFunction(nlhs, plhs, nrhs, prhs);
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
  xInputs = mxCreateLogicalMatrix(1, 2);
  mxSetFieldByNumber(xEntryPoints, 0, 0, mxCreateString("testMACReceiver"));
  mxSetFieldByNumber(xEntryPoints, 0, 1, mxCreateDoubleScalar(2));
  mxSetFieldByNumber(xEntryPoints, 0, 2, mxCreateDoubleScalar(0));
  mxSetFieldByNumber(xEntryPoints, 0, 3, xInputs);
  mxSetFieldByNumber(xResult, 0, 0, mxCreateString("8.1.0.604 (R2013a)"));
  mxSetFieldByNumber(xResult, 0, 1, (mxArray*)emlrtMexFcnResolvedFunctionsInfo());
  mxSetFieldByNumber(xResult, 0, 2, xEntryPoints);

  return xResult;
}
/* End of code generation (testMACReceiver_mex.c) */
