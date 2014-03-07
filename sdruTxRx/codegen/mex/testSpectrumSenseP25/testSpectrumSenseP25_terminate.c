/*
 * testSpectrumSenseP25_terminate.c
 *
 * Code generation for function 'testSpectrumSenseP25_terminate'
 *
 * C source code generated on: Thu Mar  6 23:19:54 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testSpectrumSenseP25.h"
#include "testSpectrumSenseP25_terminate.h"
#include <stdio.h>

/* Function Definitions */
void testSpectrumSenseP25_atexit(emlrtStack *sp)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  sp->tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(sp);
  emlrtLeaveRtStackR2012b(sp);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void testSpectrumSenseP25_terminate(emlrtStack *sp)
{
  emlrtLeaveRtStackR2012b(sp);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (testSpectrumSenseP25_terminate.c) */
