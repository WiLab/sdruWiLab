/*
 * testPHYReceive_initialize.c
 *
 * Code generation for function 'testPHYReceive_initialize'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "testPHYReceive_initialize.h"
#include "mapiPrivate.h"
#include "testPHYReceive_data.h"

/* Function Declarations */
static void testPHYReceive_once(void);

/* Function Definitions */
static void testPHYReceive_once(void)
{
  mapiPrivate_init();
}

void testPHYReceive_initialize(emlrtStack *sp, emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  sp->tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(sp, FALSE, 0U, 0);
  emlrtEnterRtStackR2012b(sp);
  emlrtLicenseCheckR2012b(sp, "Communication_Toolbox", 2);
  emlrtLicenseCheckR2012b(sp, "communication_toolbox", 2);
  emlrtLicenseCheckR2012b(sp, "Signal_Toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    testPHYReceive_once();
  }
}

/* End of code generation (testPHYReceive_initialize.c) */
