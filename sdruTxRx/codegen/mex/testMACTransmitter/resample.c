/*
 * resample.c
 *
 * Code generation for function 'resample'
 *
 * C source code generated on: Thu Mar  6 19:04:24 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "resample.h"
#include "upfirdn.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo yu_emlrtRSI = { 93, "resample",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/resample.m" };

/* Function Definitions */
void resample(testMACTransmitterStackData *SD, const emlrtStack *sp, const
              creal_T x[48], creal_T yout[576])
{
  int32_T i26;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yu_emlrtRSI;
  upfirdn(SD, &st, x, SD->u2.f11.y);
  for (i26 = 0; i26 < 12; i26++) {
    memcpy(&yout[48 * i26], &SD->u2.f11.y[121 + 278 * i26], 48U * sizeof(creal_T));
  }
}

/* End of code generation (resample.c) */
