/*
 * testSpectrumSenseP25_mex.c
 *
 * Code generation for function 'testSpectrumSenseP25'
 *
 * C source code generated on: Thu Mar  6 23:19:56 2014
 *
 */

/* Include files */
#include "mex.h"
#include "testSpectrumSenseP25_api.h"
#include "testSpectrumSenseP25_initialize.h"
#include "testSpectrumSenseP25_terminate.h"

/* Function Declarations */
static void testSpectrumSenseP25_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "testSpectrumSenseP25", NULL, false, {4039608648U,3629799818U,965288759U,2147606307U}, NULL };
void *emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void testSpectrumSenseP25_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  emlrtStack stack={0,0,0}; /* Root of the run-time stack. */
  testSpectrumSenseP25StackData* c_testSpectrumSenseP25StackData = (testSpectrumSenseP25StackData*)mxCalloc(1,sizeof(testSpectrumSenseP25StackData));
  /* Module initialization. */
  testSpectrumSenseP25_initialize(&stack, &emlrtContextGlobal);
  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 0, mxCHAR_CLASS, 20, "testSpectrumSenseP25");
  } else if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 20, "testSpectrumSenseP25");
  }
  /* Call the function. */
  testSpectrumSenseP25_api(c_testSpectrumSenseP25StackData, &stack);
  /* Module finalization. */
  testSpectrumSenseP25_terminate(&stack);
  mxFree(c_testSpectrumSenseP25StackData);
}

void testSpectrumSenseP25_atexit_wrapper(void)
{
  emlrtStack stack={0,0,0}; /* Root of the run-time stack. */
   testSpectrumSenseP25_atexit(&stack);
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(testSpectrumSenseP25_atexit_wrapper);
  /* Dispatch the entry-point. */
  testSpectrumSenseP25_mexFunction(nlhs, plhs, nrhs, prhs);
}
/* End of code generation (testSpectrumSenseP25_mex.c) */
