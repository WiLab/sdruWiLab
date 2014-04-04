/*
 * randi.c
 *
 * Code generation for function 'randi'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "randi.h"
#include "generateOFDMSignal_TX2.h"
#include "testMACReceiver_mexutil.h"
#include "testMACReceiver_data.h"

/* Function Definitions */
real_T randi(void)
{
  real_T r;
  const mxArray *y;
  const mxArray *m1;
  const mxArray *b_y;
  emlrtPushRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m1 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&y, m1);
  b_y = NULL;
  m1 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m1);
  r = emlrt_marshallIn(b_rand(y, b_y, &emlrtMCI), "rand");
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&j_emlrtRSI, emlrtRootTLSGlobal);
  return muDoubleScalarFloor(r * 128.0);
}

/* End of code generation (randi.c) */
