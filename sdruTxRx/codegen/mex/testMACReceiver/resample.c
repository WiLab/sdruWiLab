/*
 * resample.c
 *
 * Code generation for function 'resample'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "resample.h"
#include "setup.h"
#include "SystemCore.h"
#include "FIRRateConverter.h"

/* Variable Definitions */
static emlrtRSInfo jj_emlrtRSI = { 84, "resample",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/resample.m" };

static emlrtRSInfo kj_emlrtRSI = { 146, "upfirdn",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/upfirdn.m" };

static emlrtRSInfo lj_emlrtRSI = { 149, "upfirdn",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/upfirdn.m" };

static emlrtRSInfo mj_emlrtRSI = { 150, "upfirdn",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/upfirdn.m" };

/* Function Definitions */
void resample(testMACReceiverStackData *SD, const creal_T x[48], creal_T yout
              [576])
{
  dspcodegen_FIRRateConverter s;
  creal_T b_x[288];
  int32_T i26;
  int32_T i27;
  emlrtPushRtStackR2012b(&jj_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&kj_emlrtRSI, emlrtRootTLSGlobal);
  c_FIRRateConverter_FIRRateConve(&s);
  emlrtPopRtStackR2012b(&kj_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&lj_emlrtRSI, emlrtRootTLSGlobal);
  for (i26 = 0; i26 < 12; i26++) {
    memcpy(&b_x[24 * i26], &x[i26 << 2], sizeof(creal_T) << 2);
    for (i27 = 0; i27 < 20; i27++) {
      b_x[(i27 + 24 * i26) + 4].re = 0.0;
      b_x[(i27 + 24 * i26) + 4].im = 0.0;
    }
  }

  g_SystemCore_step(&s, b_x, SD->u1.f3.y);
  emlrtPopRtStackR2012b(&lj_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mj_emlrtRSI, emlrtRootTLSGlobal);
  SystemCore_reset(&s);
  emlrtPopRtStackR2012b(&mj_emlrtRSI, emlrtRootTLSGlobal);
  Destructor(&s.cSFunObject);
  emlrtPopRtStackR2012b(&jj_emlrtRSI, emlrtRootTLSGlobal);
  for (i26 = 0; i26 < 12; i26++) {
    memcpy(&yout[48 * i26], &SD->u1.f3.y[121 + 288 * i26], 48U * sizeof(creal_T));
  }
}

/* End of code generation (resample.c) */
