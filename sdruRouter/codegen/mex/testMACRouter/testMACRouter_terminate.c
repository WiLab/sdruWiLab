/*
 * testMACRouter_terminate.c
 *
 * Code generation for function 'testMACRouter_terminate'
 *
 * C source code generated on: Thu Mar  6 21:20:54 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACRouter.h"
#include "testMACRouter_terminate.h"
#include <stdio.h>

/* Function Definitions */
void testMACRouter_atexit(emlrtStack *sp)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  sp->tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(sp);
  emlrtLeaveRtStackR2012b(sp);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void testMACRouter_terminate(emlrtStack *sp)
{
  emlrtLeaveRtStackR2012b(sp);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (testMACRouter_terminate.c) */
