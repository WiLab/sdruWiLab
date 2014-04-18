/*
 * resample.c
 *
 * Code generation for function 'resample'
 *
 * C source code generated on: Thu Apr 17 22:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "resample.h"
#include "setup.h"
#include "SystemCore.h"
#include "FIRRateConverter.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo aj_emlrtRSI = { 84, "resample",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/resample.m" };

static emlrtRSInfo bj_emlrtRSI = { 146, "upfirdn",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/upfirdn.m" };

static emlrtRSInfo cj_emlrtRSI = { 149, "upfirdn",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/upfirdn.m" };

static emlrtRSInfo dj_emlrtRSI = { 150, "upfirdn",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/upfirdn.m" };

/* Function Definitions */
void resample(testPHYReceiveStackData *SD, const creal_T x[48], creal_T yout[576])
{
  dspcodegen_FIRRateConverter s;
  creal_T b_x[288];
  int32_T i24;
  int32_T i25;
  emlrtPushRtStackR2012b(&aj_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&bj_emlrtRSI, emlrtRootTLSGlobal);
  c_FIRRateConverter_FIRRateConve(&s);
  emlrtPopRtStackR2012b(&bj_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&cj_emlrtRSI, emlrtRootTLSGlobal);
  for (i24 = 0; i24 < 12; i24++) {
    memcpy(&b_x[24 * i24], &x[i24 << 2], sizeof(creal_T) << 2);
    for (i25 = 0; i25 < 20; i25++) {
      b_x[(i25 + 24 * i24) + 4].re = 0.0;
      b_x[(i25 + 24 * i24) + 4].im = 0.0;
    }
  }

  g_SystemCore_step(&s, b_x, SD->u1.f0.y);
  emlrtPopRtStackR2012b(&cj_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dj_emlrtRSI, emlrtRootTLSGlobal);
  SystemCore_reset(&s);
  emlrtPopRtStackR2012b(&dj_emlrtRSI, emlrtRootTLSGlobal);
  Destructor(&s.cSFunObject);
  emlrtPopRtStackR2012b(&aj_emlrtRSI, emlrtRootTLSGlobal);
  for (i24 = 0; i24 < 12; i24++) {
    memcpy(&yout[48 * i24], &SD->u1.f0.y[121 + 288 * i24], 48U * sizeof(creal_T));
  }
}

/* End of code generation (resample.c) */
