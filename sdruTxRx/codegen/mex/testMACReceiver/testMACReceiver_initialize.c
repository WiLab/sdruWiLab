/*
 * testMACReceiver_initialize.c
 *
 * Code generation for function 'testMACReceiver_initialize'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "testMACReceiver_initialize.h"
#include "testMACReceiver_data.h"

/* Function Declarations */
static void testMACReceiver_once(void);

/* Function Definitions */
static void testMACReceiver_once(void)
{
  isSetupsdruCalled = FALSE;
}

void testMACReceiver_initialize(emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, FALSE, 0U, 0);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLicenseCheckR2012b(emlrtRootTLSGlobal, "Communication_Toolbox", 2);
  emlrtLicenseCheckR2012b(emlrtRootTLSGlobal, "communication_toolbox", 2);
  emlrtLicenseCheckR2012b(emlrtRootTLSGlobal, "Signal_Toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    testMACReceiver_once();
  }
}

/* End of code generation (testMACReceiver_initialize.c) */
