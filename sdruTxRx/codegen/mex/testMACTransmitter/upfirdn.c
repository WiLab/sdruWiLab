/*
 * upfirdn.c
 *
 * Code generation for function 'upfirdn'
 *
 * C source code generated on: Thu Mar  6 22:22:41 2014
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
static emlrtRSInfo lab_emlrtRSI = { 147, "upfirdn",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/upfirdn.m" };

static emlrtRSInfo mab_emlrtRSI = { 150, "upfirdn",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/upfirdn.m" };

static emlrtRSInfo nab_emlrtRSI = { 151, "upfirdn",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/upfirdn.m" };

/* Function Definitions */
void upfirdn(testMACTransmitterStackData *SD, const emlrtStack *sp, const
             creal_T x_in[48], creal_T y_out[3336])
{
  dspcodegen_FIRRateConverter s;
  creal_T b_x_in[288];
  int32_T i30;
  int32_T i31;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &lab_emlrtRSI;
  c_FIRRateConverter_FIRRateConve(&s);
  for (i30 = 0; i30 < 12; i30++) {
    memcpy(&b_x_in[24 * i30], &x_in[i30 << 2], sizeof(creal_T) << 2);
    for (i31 = 0; i31 < 20; i31++) {
      b_x_in[(i31 + 24 * i30) + 4].re = 0.0;
      b_x_in[(i31 + 24 * i30) + 4].im = 0.0;
    }
  }

  st.site = &mab_emlrtRSI;
  k_SystemCore_step(&st, &s, b_x_in, SD->u1.f5.y);
  st.site = &nab_emlrtRSI;
  SystemCore_reset(&st, &s);
  for (i30 = 0; i30 < 12; i30++) {
    memcpy(&y_out[278 * i30], &SD->u1.f5.y[288 * i30], 278U * sizeof(creal_T));
  }

  st.site = NULL;
  d_Destructor(&s.cSFunObject);
}

/* End of code generation (upfirdn.c) */
