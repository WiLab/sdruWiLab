/*
 * coarseOFDMFreqEst_sdr.c
 *
 * Code generation for function 'coarseOFDMFreqEst_sdr'
 *
 * C source code generated on: Thu Apr 17 22:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "coarseOFDMFreqEst_sdr.h"
#include "exp.h"
#include "receiveData.h"
#include "equalizeOFDM.h"
#include "colon.h"
#include "mean.h"
#include "testPHYReceive_mexutil.h"
#include "testPHYReceive_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo ei_emlrtRSI = { 31, "coarseOFDMFreqEst_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtRSInfo fi_emlrtRSI = { 28, "coarseOFDMFreqEst_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtECInfo n_emlrtECI = { -1, 32, 20, "coarseOFDMFreqEst_sdr",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruCPP/private/coarseOFDMFreqEst_sdr.m"
};

/* Function Definitions */
void freqCorrectOFDM(struct_T *estimate, const creal_T rFrame_data[1280],
                     creal_T rFreqShifted_data[1280], int32_T rFreqShifted_size
                     [1])
{
  real_T estimate_data[3];
  int32_T estimate_size[1];
  int32_T i;
  int32_T k;
  boolean_T n_too_large;
  real_T kd;
  real_T anew;
  int32_T n;
  const mxArray *y;
  static const int32_T iv134[2] = { 1, 21 };

  const mxArray *m40;
  char_T cv155[21];
  static const char_T cv156[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  real_T t_data[1280];
  int32_T tmp_size[1];
  creal_T tmp_data[1280];

  /*  freqCorrectOFDM: Apply frequency offset to input signal, this offset can */
  /*  be generated through a moving average if enabled */
  /*  Enable moving averages for estimates */
  /*  Buffer not full */
  emlrtPushRtStackR2012b(&fi_emlrtRSI, emlrtRootTLSGlobal);
  estimate_size[0] = (int32_T)estimate->numProcessed;
  i = (int32_T)estimate->numProcessed;
  for (k = 0; k < i; k++) {
    estimate_data[k] = estimate->frequency[k];
  }

  estimate->frequencyMA = mean(estimate_data, estimate_size);
  emlrtPopRtStackR2012b(&fi_emlrtRSI, emlrtRootTLSGlobal);

  /*  Apply frequency correction */
  emlrtPushRtStackR2012b(&ei_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&rg_emlrtRSI, emlrtRootTLSGlobal);
  b_float_colon_length(&n, &anew, &kd, &n_too_large);
  emlrtPushRtStackR2012b(&tg_emlrtRSI, emlrtRootTLSGlobal);
  if (!n_too_large) {
  } else {
    emlrtPushRtStackR2012b(&ug_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m40 = mxCreateCharArray(2, iv134);
    for (i = 0; i < 21; i++) {
      cv155[i] = cv156[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m40, cv155);
    emlrtAssign(&y, m40);
    b_error(b_message(y, &u_emlrtMCI), &v_emlrtMCI);
    emlrtPopRtStackR2012b(&ug_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&tg_emlrtRSI, emlrtRootTLSGlobal);
  if (n > 0) {
    t_data[0] = anew;
    if (n > 1) {
      t_data[n - 1] = 0.001279;
      k = n - 1;
      i = (int32_T)((uint32_T)k >> 1);
      emlrtPushRtStackR2012b(&sg_emlrtRSI, emlrtRootTLSGlobal);
      emlrtPopRtStackR2012b(&sg_emlrtRSI, emlrtRootTLSGlobal);
      for (k = 1; k < i; k++) {
        kd = (real_T)k * 1.0E-6;
        t_data[k] = anew + kd;
        t_data[(n - k) - 1] = 0.001279 - kd;
      }

      if (i << 1 == n - 1) {
        t_data[i] = (anew + 0.001279) / 2.0;
      } else {
        kd = (real_T)i * 1.0E-6;
        t_data[i] = anew + kd;
        t_data[i + 1] = 0.001279 - kd;
      }
    }
  }

  emlrtPopRtStackR2012b(&rg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ei_emlrtRSI, emlrtRootTLSGlobal);
  kd = estimate->frequencyMA * 0.0;
  anew = estimate->frequencyMA;
  tmp_size[0] = n;
  for (k = 0; k < n; k++) {
    tmp_data[k].re = t_data[k] * kd;
    tmp_data[k].im = t_data[k] * anew;
  }

  b_exp(tmp_data, tmp_size);
  emlrtSizeEqCheck1DFastR2012b(tmp_size[0], 1280, &n_emlrtECI,
    emlrtRootTLSGlobal);
  rFreqShifted_size[0] = tmp_size[0];
  i = tmp_size[0];
  for (k = 0; k < i; k++) {
    rFreqShifted_data[k].re = tmp_data[k].re * rFrame_data[k].re - tmp_data[k].
      im * rFrame_data[k].im;
    rFreqShifted_data[k].im = tmp_data[k].re * rFrame_data[k].im + tmp_data[k].
      im * rFrame_data[k].re;
  }
}

/* End of code generation (coarseOFDMFreqEst_sdr.c) */
