/*
 * testFileSourceSink_mex.c
 *
 * Code generation for function 'testFileSourceSink'
 *
 * C source code generated on: Thu Feb 27 11:25:03 2014
 *
 */

/* Include files */
#include "mex.h"
#include "testFileSourceSink_api.h"
#include "testFileSourceSink_initialize.h"
#include "testFileSourceSink_terminate.h"

/* Function Declarations */
static void testFileSourceSink_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "testFileSourceSink", NULL, false, {2045744189U,2170104910U,2743257031U,4284093946U}, NULL };
void *emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void testFileSourceSink_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  emlrtStack stack={0,0,0}; /* Root of the run-time stack. */
  /* Module initialization. */
  testFileSourceSink_initialize(&stack, &emlrtContextGlobal);
  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 0, mxCHAR_CLASS, 18, "testFileSourceSink");
  } else if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 18, "testFileSourceSink");
  }
  /* Call the function. */
  testFileSourceSink_api(&stack);
  /* Module finalization. */
  testFileSourceSink_terminate(&stack);
}

void testFileSourceSink_atexit_wrapper(void)
{
  emlrtStack stack={0,0,0}; /* Root of the run-time stack. */
   testFileSourceSink_atexit(&stack);
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(testFileSourceSink_atexit_wrapper);
  /* Dispatch the entry-point. */
  testFileSourceSink_mexFunction(nlhs, plhs, nrhs, prhs);
}
/* End of code generation (testFileSourceSink_mex.c) */
