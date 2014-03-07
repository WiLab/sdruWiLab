/*
 * upfirdn.c
 *
 * Code generation for function 'upfirdn'
 *
 * C source code generated on: Thu Mar  6 19:04:24 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "upfirdn.h"
#include "FIRRateConverter.h"
#include "setup.h"
#include "SystemCore.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo av_emlrtRSI = { 147, "upfirdn",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/upfirdn.m" };

static emlrtRSInfo bv_emlrtRSI = { 150, "upfirdn",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/upfirdn.m" };

static emlrtRSInfo cv_emlrtRSI = { 151, "upfirdn",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/upfirdn.m" };

/* Function Definitions */
void upfirdn(testMACTransmitterStackData *SD, const emlrtStack *sp, const
             creal_T x_in[48], creal_T y_out[3336])
{
  dspcodegen_FIRRateConverter s;
  creal_T b_x_in[288];
  int32_T i27;
  int32_T i28;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &av_emlrtRSI;
  c_FIRRateConverter_FIRRateConve(&s);
  for (i27 = 0; i27 < 12; i27++) {
    memcpy(&b_x_in[24 * i27], &x_in[i27 << 2], sizeof(creal_T) << 2);
    for (i28 = 0; i28 < 20; i28++) {
      b_x_in[(i28 + 24 * i27) + 4].re = 0.0;
      b_x_in[(i28 + 24 * i27) + 4].im = 0.0;
    }
  }

  st.site = &bv_emlrtRSI;
  j_SystemCore_step(&st, &s, b_x_in, SD->u1.f3.y);
  st.site = &cv_emlrtRSI;
  SystemCore_reset(&st, &s);
  for (i27 = 0; i27 < 12; i27++) {
    memcpy(&y_out[278 * i27], &SD->u1.f3.y[288 * i27], 278U * sizeof(creal_T));
  }

  st.site = NULL;
  d_Destructor(&s.cSFunObject);
}

/* End of code generation (upfirdn.c) */
