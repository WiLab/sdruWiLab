/*
 * testFileSourceSink_initialize.c
 *
 * Code generation for function 'testFileSourceSink_initialize'
 *
 * C source code generated on: Thu Feb 27 11:25:03 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testFileSourceSink.h"
#include "testFileSourceSink_initialize.h"
#include "testFileSourceSink_data.h"
#include <stdio.h>

/* Function Definitions */
void testFileSourceSink_initialize(emlrtStack *sp, emlrtContext *aContext)
{
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  sp->tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(sp, FALSE, 0U, 0);
  emlrtEnterRtStackR2012b(sp);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (testFileSourceSink_initialize.c) */
