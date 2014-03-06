/*
 * testPHYReceive_mex.c
 *
 * Code generation for function 'testPHYReceive'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

/* Include files */
#include "mex.h"
#include "testPHYReceive_api.h"
#include "testPHYReceive_initialize.h"
#include "testPHYReceive_terminate.h"

/* Function Declarations */
static void testPHYReceive_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "testPHYReceive", NULL, false, {4039608648U,3629799818U,965288759U,2147606307U}, NULL };
void *emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void testPHYReceive_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  emlrtStack stack={0,0,0}; /* Root of the run-time stack. */
  testPHYReceiveStackData* testPHYReceiveStackDataLocal = (testPHYReceiveStackData*)mxCalloc(1,sizeof(testPHYReceiveStackData));
  /* Module initialization. */
  testPHYReceive_initialize(&stack, &emlrtContextGlobal);
  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 0, mxCHAR_CLASS, 14, "testPHYReceive");
  } else if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 14, "testPHYReceive");
  }
  /* Call the function. */
  testPHYReceive_api(testPHYReceiveStackDataLocal, &stack);
  /* Module finalization. */
  testPHYReceive_terminate(&stack);
  mxFree(testPHYReceiveStackDataLocal);
}

void testPHYReceive_atexit_wrapper(void)
{
  emlrtStack stack={0,0,0}; /* Root of the run-time stack. */
   testPHYReceive_atexit(&stack);
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(testPHYReceive_atexit_wrapper);
  /* Dispatch the entry-point. */
  testPHYReceive_mexFunction(nlhs, plhs, nrhs, prhs);
}
/* End of code generation (testPHYReceive_mex.c) */
