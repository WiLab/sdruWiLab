/*
 * coarseOFDMFreqEst_sdr.c
 *
 * Code generation for function 'coarseOFDMFreqEst_sdr'
 *
 * C source code generated on: Thu Mar  6 22:22:41 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "coarseOFDMFreqEst_sdr.h"
#include "mean.h"
#include "colon.h"
#include "exp.h"
#include "testMACTransmitter_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo nx_emlrtRSI = { 32, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtRSInfo ox_emlrtRSI = { 31, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtRSInfo px_emlrtRSI = { 28, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

static emlrtECInfo eb_emlrtECI = { -1, 32, 20, "coarseOFDMFreqEst_sdr",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/private/coarseOFDMFreqEst_sdr.m"
};

/* Function Definitions */
void freqCorrectOFDM(const emlrtStack *sp, c_struct_T *estimate, const creal_T
                     rFrame_data[1280], creal_T rFreqShifted_data[1280], int32_T
                     rFreqShifted_size[1])
{
  real_T estimate_data[1];
  boolean_T n_too_large;
  real_T kd;
  real_T anew;
  int32_T n;
  real_T t_data[1280];
  int32_T k;
  int32_T nm1d2;
  int32_T tmp_size[1];
  creal_T tmp_data[1280];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /*  freqCorrectOFDM: Apply frequency offset to input signal, this offset can */
  /*  be generated through a moving average if enabled */
  /*  Enable moving averages for estimates */
  /*  Buffer not full */
  estimate_data[0] = estimate->frequency[0];
  st.site = &px_emlrtRSI;
  estimate->frequencyMA = b_mean(estimate_data);

  /*  Apply frequency correction */
  st.site = &ox_emlrtRSI;
  b_st.site = &fp_emlrtRSI;
  b_float_colon_length(&n, &anew, &kd, &n_too_large);
  c_st.site = &hp_emlrtRSI;
  assert_pmaxsize(&c_st, !n_too_large);
  if (n > 0) {
    t_data[0] = anew;
    if (n > 1) {
      t_data[n - 1] = 0.0002558;
      k = n - 1;
      nm1d2 = (int32_T)((uint32_T)k >> 1);
      for (k = 1; k < nm1d2; k++) {
        kd = (real_T)k * 2.0E-7;
        t_data[k] = anew + kd;
        t_data[(n - k) - 1] = 0.0002558 - kd;
      }

      if (nm1d2 << 1 == n - 1) {
        t_data[nm1d2] = (anew + 0.0002558) / 2.0;
      } else {
        kd = (real_T)nm1d2 * 2.0E-7;
        t_data[nm1d2] = anew + kd;
        t_data[nm1d2 + 1] = 0.0002558 - kd;
      }
    }
  }

  st.site = &nx_emlrtRSI;
  kd = estimate->frequencyMA * 0.0;
  anew = estimate->frequencyMA;
  st.site = &nx_emlrtRSI;
  tmp_size[0] = n;
  for (k = 0; k < n; k++) {
    tmp_data[k].re = t_data[k] * kd;
    tmp_data[k].im = t_data[k] * anew;
  }

  st.site = &nx_emlrtRSI;
  b_exp(tmp_data, tmp_size);
  emlrtSizeEqCheck1DFastR2012b(tmp_size[0], 1280, &eb_emlrtECI, sp);
  rFreqShifted_size[0] = tmp_size[0];
  nm1d2 = tmp_size[0];
  for (k = 0; k < nm1d2; k++) {
    rFreqShifted_data[k].re = tmp_data[k].re * rFrame_data[k].re - tmp_data[k].
      im * rFrame_data[k].im;
    rFreqShifted_data[k].im = tmp_data[k].re * rFrame_data[k].im + tmp_data[k].
      im * rFrame_data[k].re;
  }
}

/* End of code generation (coarseOFDMFreqEst_sdr.c) */
