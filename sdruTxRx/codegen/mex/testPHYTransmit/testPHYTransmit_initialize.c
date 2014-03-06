/*
 * testPHYTransmit_initialize.c
 *
 * Code generation for function 'testPHYTransmit_initialize'
 *
 * C source code generated on: Thu Feb 27 11:47:47 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "testPHYTransmit_initialize.h"
#include "mapiPrivate.h"
#include "testPHYTransmit_data.h"

/* Function Declarations */
static void testPHYTransmit_once(void);

/* Function Definitions */
static void testPHYTransmit_once(void)
{
  mapiPrivate_init();
}

void testPHYTransmit_initialize(emlrtStack *sp, emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  sp->tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(sp, FALSE, 0U, 0);
  emlrtEnterRtStackR2012b(sp);
  emlrtLicenseCheckR2012b(sp, "Communication_Toolbox", 2);
  emlrtLicenseCheckR2012b(sp, "communication_toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    testPHYTransmit_once();
  }
}

/* End of code generation (testPHYTransmit_initialize.c) */
