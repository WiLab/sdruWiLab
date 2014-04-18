/*
 * testPHYReceive_initialize.c
 *
 * Code generation for function 'testPHYReceive_initialize'
 *
 * C source code generated on: Thu Apr 17 22:51:41 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "testPHYReceive_initialize.h"
#include "testPHYReceive_data.h"
#include <stdio.h>

/* Function Declarations */
static void testPHYReceive_once(void);

/* Function Definitions */
static void testPHYReceive_once(void)
{
  isSetupsdruCalled = FALSE;
}

void testPHYReceive_initialize(emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  emlrtClearAllocCountR2012b(emlrtRootTLSGlobal, FALSE, 0U, 0);
  emlrtEnterRtStackR2012b(emlrtRootTLSGlobal);
  emlrtLicenseCheckR2012b(emlrtRootTLSGlobal, "Communication_Toolbox", 2);
  emlrtLicenseCheckR2012b(emlrtRootTLSGlobal, "communication_toolbox", 2);
  emlrtLicenseCheckR2012b(emlrtRootTLSGlobal, "Signal_Toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    testPHYReceive_once();
  }
}

/* End of code generation (testPHYReceive_initialize.c) */
