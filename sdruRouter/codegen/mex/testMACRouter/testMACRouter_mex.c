/*
 * testMACRouter_mex.c
 *
 * Code generation for function 'testMACRouter'
 *
 * C source code generated on: Thu Mar  6 21:20:56 2014
 *
 */

/* Include files */
#include "mex.h"
#include "testMACRouter_api.h"
#include "testMACRouter_initialize.h"
#include "testMACRouter_terminate.h"

/* Function Declarations */
static void testMACRouter_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "testMACRouter", NULL, false, {4039608648U,3629799818U,965288759U,2147606307U}, NULL };
void *emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void testMACRouter_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  mxArray *inputs[2];
  int n = 0;
  int nInputs = nrhs;
  emlrtStack stack={0,0,0}; /* Root of the run-time stack. */
  testMACRouterStackData* testMACRouterStackDataLocal = (testMACRouterStackData*)mxCalloc(1,sizeof(testMACRouterStackData));
  /* Module initialization. */
  testMACRouter_initialize(&stack, &emlrtContextGlobal);
  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 2, mxCHAR_CLASS, 13, "testMACRouter");
  } else if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 13, "testMACRouter");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = (mxArray *)prhs[n];
  }
  /* Call the function. */
  testMACRouter_api(testMACRouterStackDataLocal, &stack, (const mxArray**)inputs);
  /* Module finalization. */
  testMACRouter_terminate(&stack);
  mxFree(testMACRouterStackDataLocal);
}

void testMACRouter_atexit_wrapper(void)
{
  emlrtStack stack={0,0,0}; /* Root of the run-time stack. */
   testMACRouter_atexit(&stack);
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(testMACRouter_atexit_wrapper);
  /* Dispatch the entry-point. */
  testMACRouter_mexFunction(nlhs, plhs, nrhs, prhs);
}
/* End of code generation (testMACRouter_mex.c) */
