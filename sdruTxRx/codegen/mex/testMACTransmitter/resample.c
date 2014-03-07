/*
 * resample.c
 *
 * Code generation for function 'resample'
 *
 * C source code generated on: Thu Mar  6 22:22:41 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "resample.h"
#include "upfirdn.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo kab_emlrtRSI = { 93, "resample",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/resample.m" };

/* Function Definitions */
void resample(testMACTransmitterStackData *SD, const emlrtStack *sp, const
              creal_T x[48], creal_T yout[576])
{
  int32_T i29;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &kab_emlrtRSI;
  upfirdn(SD, &st, x, SD->u2.f12.y);
  for (i29 = 0; i29 < 12; i29++) {
    memcpy(&yout[48 * i29], &SD->u2.f12.y[121 + 278 * i29], 48U * sizeof(creal_T));
  }
}

/* End of code generation (resample.c) */
