/*
 * resample.c
 *
 * Code generation for function 'resample'
 *
 * C source code generated on: Thu Jul  3 10:46:49 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PHYReceiverFun.h"
#include "resample.h"
#include "setup.h"
#include "SystemCore.h"
#include "FIRRateConverter.h"
#include <stdio.h>

/* Function Definitions */
void resample(const creal_T x[4], creal_T yout[48])
{
  dspcodegen_FIRRateConverter s;
  creal_T b_x[24];
  int32_T i;
  creal_T y[288];
  dspcodegen_FIRRateConverter *obj;
  dsp_FIRRateConverter_3 *b_obj;
  c_FIRRateConverter_FIRRateConve(&s);
  memcpy(&b_x[0], &x[0], sizeof(creal_T) << 2);
  for (i = 0; i < 20; i++) {
    b_x[i + 4].re = 0.0;
    b_x[i + 4].im = 0.0;
  }

  e_SystemCore_step(&s, b_x, y);
  obj = &s;
  if (obj->isInitialized) {
    b_obj = &obj->cSFunObject;

    /* System object Initialization function: dsp.FIRRateConverter */
    b_obj->W1_InBufIdx = 0;
    for (i = 0; i < 21; i++) {
      b_obj->W0_InBuf[i].re = 0.0;
      b_obj->W0_InBuf[i].im = 0.0;
    }
  }

  Destructor(&s.cSFunObject);
  memcpy(&yout[0], &y[121], 48U * sizeof(creal_T));
}

/* End of code generation (resample.c) */
