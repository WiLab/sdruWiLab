/*
 * testMACRouter_initialize.c
 *
 * Code generation for function 'testMACRouter_initialize'
 *
 * C source code generated on: Thu Mar  6 21:20:53 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACRouter.h"
#include "testMACRouter_initialize.h"
#include "mapiPrivate.h"
#include "testMACRouter_data.h"
#include <stdio.h>

/* Function Declarations */
static void testMACRouter_once(void);

/* Function Definitions */
static void testMACRouter_once(void)
{
  mapiPrivate_init();
}

void testMACRouter_initialize(emlrtStack *sp, emlrtContext *aContext)
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
    testMACRouter_once();
  }
}

/* End of code generation (testMACRouter_initialize.c) */
