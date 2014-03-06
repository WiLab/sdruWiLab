/*
 * testPHYTransmit_mex.c
 *
 * Code generation for function 'testPHYTransmit'
 *
 * C source code generated on: Thu Feb 27 11:47:48 2014
 *
 */

/* Include files */
#include "mex.h"
#include "testPHYTransmit_api.h"
#include "testPHYTransmit_initialize.h"
#include "testPHYTransmit_terminate.h"

/* Function Declarations */
static void testPHYTransmit_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "testPHYTransmit", NULL, false, {2241891196U,57585034U,1152014091U,3029887202U}, NULL };
void *emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void testPHYTransmit_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  emlrtStack stack={0,0,0}; /* Root of the run-time stack. */
  testPHYTransmitStackData* testPHYTransmitStackDataLocal = (testPHYTransmitStackData*)mxCalloc(1,sizeof(testPHYTransmitStackData));
  /* Module initialization. */
  testPHYTransmit_initialize(&stack, &emlrtContextGlobal);
  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 0, mxCHAR_CLASS, 15, "testPHYTransmit");
  } else if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 15, "testPHYTransmit");
  }
  /* Call the function. */
  testPHYTransmit_api(testPHYTransmitStackDataLocal, &stack);
  /* Module finalization. */
  testPHYTransmit_terminate(&stack);
  mxFree(testPHYTransmitStackDataLocal);
}

void testPHYTransmit_atexit_wrapper(void)
{
  emlrtStack stack={0,0,0}; /* Root of the run-time stack. */
   testPHYTransmit_atexit(&stack);
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(testPHYTransmit_atexit_wrapper);
  /* Dispatch the entry-point. */
  testPHYTransmit_mexFunction(nlhs, plhs, nrhs, prhs);
}
/* End of code generation (testPHYTransmit_mex.c) */
