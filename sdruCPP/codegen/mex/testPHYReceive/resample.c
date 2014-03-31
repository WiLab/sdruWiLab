/*
 * resample.c
 *
 * Code generation for function 'resample'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "resample.h"
#include "upfirdn.h"

/* Variable Definitions */
static emlrtRSInfo ct_emlrtRSI = { 93, "resample",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/resample.m" };

/* Function Definitions */
void resample(testPHYReceiveStackData *SD, const emlrtStack *sp, const creal_T
              x[48], creal_T yout[576])
{
  int32_T i23;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ct_emlrtRSI;
  upfirdn(SD, &st, x, SD->f4.y);
  for (i23 = 0; i23 < 12; i23++) {
    memcpy(&yout[48 * i23], &SD->f4.y[121 + 278 * i23], 48U * sizeof(creal_T));
  }
}

/* End of code generation (resample.c) */
