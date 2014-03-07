/*
 * testMACTransmitter_mex.c
 *
 * Code generation for function 'testMACTransmitter'
 *
 * C source code generated on: Thu Mar  6 22:22:41 2014
 *
 */

/* Include files */
#include "mex.h"
#include "testMACTransmitter_api.h"
#include "testMACTransmitter_initialize.h"
#include "testMACTransmitter_terminate.h"

/* Function Declarations */
static void testMACTransmitter_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "testMACTransmitter", NULL, false, {4039608648U,3629799818U,965288759U,2147606307U}, NULL };
void *emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void testMACTransmitter_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  mxArray *inputs[2];
  int n = 0;
  int nInputs = nrhs;
  emlrtStack stack={0,0,0}; /* Root of the run-time stack. */
  testMACTransmitterStackData* c_testMACTransmitterStackDataLo = (testMACTransmitterStackData*)mxCalloc(1,sizeof(testMACTransmitterStackData));
  /* Module initialization. */
  testMACTransmitter_initialize(&stack, &emlrtContextGlobal);
  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 2, mxCHAR_CLASS, 18, "testMACTransmitter");
  } else if (nlhs > 0) {
    emlrtErrMsgIdAndTxt(emlrtRootTLSGlobal, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 18, "testMACTransmitter");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = (mxArray *)prhs[n];
  }
  /* Call the function. */
  testMACTransmitter_api(c_testMACTransmitterStackDataLo, &stack, (const mxArray**)inputs);
  /* Module finalization. */
  testMACTransmitter_terminate(&stack);
  mxFree(c_testMACTransmitterStackDataLo);
}

void testMACTransmitter_atexit_wrapper(void)
{
  emlrtStack stack={0,0,0}; /* Root of the run-time stack. */
   testMACTransmitter_atexit(&stack);
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(testMACTransmitter_atexit_wrapper);
  /* Dispatch the entry-point. */
  testMACTransmitter_mexFunction(nlhs, plhs, nrhs, prhs);
}
/* End of code generation (testMACTransmitter_mex.c) */
