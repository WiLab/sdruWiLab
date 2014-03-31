/*
 * testSpectrumSenseP25_initialize.c
 *
 * Code generation for function 'testSpectrumSenseP25_initialize'
 *
 * C source code generated on: Thu Mar  6 23:19:54 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testSpectrumSenseP25.h"
#include "testSpectrumSenseP25_initialize.h"
#include "mapiPrivate.h"
#include "testSpectrumSenseP25_data.h"
#include <stdio.h>

/* Function Declarations */
static void testSpectrumSenseP25_once(void);

/* Function Definitions */
static void testSpectrumSenseP25_once(void)
{
  mapiPrivate_init();
}

void testSpectrumSenseP25_initialize(emlrtStack *sp, emlrtContext *aContext)
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
    testSpectrumSenseP25_once();
  }
}

/* End of code generation (testSpectrumSenseP25_initialize.c) */
