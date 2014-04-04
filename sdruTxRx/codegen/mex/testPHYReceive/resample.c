/*
 * resample.c
 *
 * Code generation for function 'resample'
 *
 * C source code generated on: Thu Apr  3 19:36:38 2014
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
static emlrtRSInfo xi_emlrtRSI = { 84, "resample",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/resample.m" };

static emlrtRSInfo yi_emlrtRSI = { 146, "upfirdn",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/upfirdn.m" };

static emlrtRSInfo aj_emlrtRSI = { 149, "upfirdn",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/upfirdn.m" };

static emlrtRSInfo bj_emlrtRSI = { 150, "upfirdn",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/upfirdn.m" };

/* Function Definitions */
void resample(testPHYReceiveStackData *SD, const creal_T x[48], creal_T yout[576])
{
  dspcodegen_FIRRateConverter s;
  creal_T b_x[288];
  int32_T i25;
  int32_T i26;
  emlrtPushRtStackR2012b(&xi_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&yi_emlrtRSI, emlrtRootTLSGlobal);
  c_FIRRateConverter_FIRRateConve(&s);
  emlrtPopRtStackR2012b(&yi_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&aj_emlrtRSI, emlrtRootTLSGlobal);
  for (i25 = 0; i25 < 12; i25++) {
    memcpy(&b_x[24 * i25], &x[i25 << 2], sizeof(creal_T) << 2);
    for (i26 = 0; i26 < 20; i26++) {
      b_x[(i26 + 24 * i25) + 4].re = 0.0;
      b_x[(i26 + 24 * i25) + 4].im = 0.0;
    }
  }

  g_SystemCore_step(&s, b_x, SD->u1.f0.y);
  emlrtPopRtStackR2012b(&aj_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&bj_emlrtRSI, emlrtRootTLSGlobal);
  SystemCore_reset(&s);
  emlrtPopRtStackR2012b(&bj_emlrtRSI, emlrtRootTLSGlobal);
  Destructor(&s.cSFunObject);
  emlrtPopRtStackR2012b(&xi_emlrtRSI, emlrtRootTLSGlobal);
  for (i25 = 0; i25 < 12; i25++) {
    memcpy(&yout[48 * i25], &SD->u1.f0.y[121 + 288 * i25], 48U * sizeof(creal_T));
  }
}

/* End of code generation (resample.c) */
