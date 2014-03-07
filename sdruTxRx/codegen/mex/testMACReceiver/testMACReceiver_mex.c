/*
 * testMACReceiver_mex.c
 *
 * Code generation for function 'testMACReceiver'
 *
 * C source code generated on: Thu Mar  6 18:47:07 2014
 *
 */

/* Include files */
#include "mex.h"
#include "testMACReceiver_api.h"
#include "testMACReceiver_initialize.h"
#include "testMACReceiver_terminate.h"

/* Function Declarations */
static void testMACReceiver_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "testMACReceiver", NULL, false, {4039608648U,3629799818U,965288759U,2147606307U}, NULL };
void *emlrtRootTLSGlobal = NULL;

/* Function Definitions */
static void testMACReceiver_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  mxArray *inputs[2];
  int n = 0;
  int nInputs = nrhs;
  emlrtStack stack={0,0,0}; /* Root of the run-time stack. */
  testMACReceiverStackData* testMACReceiverStackDataLocal = (testMACReceiverStackData*)mxCalloc(1,sizeof(testMACReceiverStackData));
  /* Module initialization. */
  testMACReceiver_initialize(&stack, &emlrtContextGlobal);
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
  testMACReceiver_api(testMACReceiverStackDataLocal, &stack, (const mxArray**)inputs);
  /* Module finalization. */
  testMACReceiver_terminate(&stack);
  mxFree(testMACReceiverStackDataLocal);
}

void testMACReceiver_atexit_wrapper(void)
{
  emlrtStack stack={0,0,0}; /* Root of the run-time stack. */
   testMACReceiver_atexit(&stack);
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(testMACReceiver_atexit_wrapper);
  /* Dispatch the entry-point. */
  testMACReceiver_mexFunction(nlhs, plhs, nrhs, prhs);
}
/* End of code generation (testMACReceiver_mex.c) */
