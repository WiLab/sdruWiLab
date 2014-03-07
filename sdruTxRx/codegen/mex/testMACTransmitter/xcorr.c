/*
 * xcorr.c
 *
 * Code generation for function 'xcorr'
 *
 * C source code generated on: Thu Mar  6 22:22:41 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "xcorr.h"
#include "colon.h"
#include "testMACTransmitter_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo xu_emlrtRSI = { 31, "xcorr",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/xcorr.m" };

static emlrtRSInfo yu_emlrtRSI = { 94, "xcorr",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/xcorr.m" };

static emlrtRSInfo av_emlrtRSI = { 101, "xcorr",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/xcorr.m" };

static emlrtRSInfo bv_emlrtRSI = { 181, "xcorr",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/xcorr.m" };

static emlrtRSInfo cv_emlrtRSI = { 176, "xcorr",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/xcorr.m" };

static emlrtRSInfo dv_emlrtRSI = { 21, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 181, 48, "", "xcorr",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/xcorr.m", 0 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 181, 35, "", "xcorr",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/xcorr.m", 0 };

/* Function Declarations */
static void b_crosscorr(const emlrtStack *sp, const real_T a_data[1231], real_T
  c_data[2461], int32_T c_size[1]);
static void crosscorr(const emlrtStack *sp, const creal_T a_data[1231], const
                      creal_T b_data[16], creal_T c_data[2461], int32_T c_size[1]);

/* Function Definitions */
static void b_crosscorr(const emlrtStack *sp, const real_T a_data[1231], real_T
  c_data[2461], int32_T c_size[1])
{
  int32_T i;
  real_T s;
  int32_T jstart;
  int32_T i24;
  int32_T j;
  int32_T b_j;
  int32_T i25;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  c_size[0] = 2461;
  for (i = 0; i < 2461; i++) {
    s = 0.0;
    if (i - 1230 > 0) {
      jstart = i - 1229;
    } else {
      jstart = 1;
    }

    st.site = &cv_emlrtRSI;
    i24 = (int32_T)muDoubleScalarMin((1.0 + (real_T)i) - 1215.0, 1231.0) -
      jstart;
    for (j = 0; j <= i24; j++) {
      b_j = jstart + j;
      i25 = (b_j - i) + 1230;
      emlrtDynamicBoundsCheckFastR2012b(i25, 1, 16, &ib_emlrtBCI, sp);
      st.site = &bv_emlrtRSI;
      emlrtDynamicBoundsCheckFastR2012b(b_j, 1, 1231, &hb_emlrtBCI, &st);
      s += a_data[b_j - 1];
    }

    c_data[i] = s;
  }
}

static void crosscorr(const emlrtStack *sp, const creal_T a_data[1231], const
                      creal_T b_data[16], creal_T c_data[2461], int32_T c_size[1])
{
  int32_T i;
  real_T s_re;
  real_T s_im;
  int32_T jstart;
  int32_T i22;
  int32_T j;
  int32_T b_j;
  int32_T i23;
  real_T a_re;
  real_T a_im;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  c_size[0] = 2461;
  for (i = 0; i < 2461; i++) {
    s_re = 0.0;
    s_im = 0.0;
    if (i - 1230 > 0) {
      jstart = i - 1229;
    } else {
      jstart = 1;
    }

    st.site = &cv_emlrtRSI;
    i22 = (int32_T)muDoubleScalarMin((1.0 + (real_T)i) - 1215.0, 1231.0) -
      jstart;
    for (j = -1; j + 1 <= i22; j++) {
      b_j = jstart + j;
      st.site = &bv_emlrtRSI;
      i23 = (b_j - i) + 1231;
      a_re = b_data[emlrtDynamicBoundsCheckFastR2012b(i23, 1, 16, &ib_emlrtBCI,
        &st) - 1].re;
      i23 = (b_j - i) + 1231;
      a_im = b_data[emlrtDynamicBoundsCheckFastR2012b(i23, 1, 16, &ib_emlrtBCI,
        &st) - 1].im;
      i23 = b_j + 1;
      emlrtDynamicBoundsCheckFastR2012b(i23, 1, 1231, &hb_emlrtBCI, &st);
      s_re += a_re * a_data[b_j].re + a_im * a_data[b_j].im;
      s_im += a_re * a_data[b_j].im - a_im * a_data[b_j].re;
    }

    c_data[i].re = s_re;
    c_data[i].im = s_im;
  }
}

void b_xcorr(const emlrtStack *sp, const real_T arg1_data[1231], real_T C_data
             [2461], int32_T C_size[1])
{
  boolean_T n_too_large;
  real_T bnew;
  real_T anew;
  int32_T n;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  st.site = &xu_emlrtRSI;
  b_st.site = &yu_emlrtRSI;
  b_crosscorr(&b_st, arg1_data, C_data, C_size);
  b_st.site = &av_emlrtRSI;
  c_st.site = &dv_emlrtRSI;
  d_st.site = &fp_emlrtRSI;
  float_colon_length(&n, &anew, &bnew, &n_too_large);
  e_st.site = &hp_emlrtRSI;
  assert_pmaxsize(&e_st, !n_too_large);
}

void xcorr(const emlrtStack *sp, const creal_T arg1_data[1231], const creal_T
           arg2_data[16], creal_T C_data[2461], int32_T C_size[1])
{
  boolean_T n_too_large;
  real_T bnew;
  real_T anew;
  int32_T n;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  st.site = &xu_emlrtRSI;
  b_st.site = &yu_emlrtRSI;
  crosscorr(&b_st, arg1_data, arg2_data, C_data, C_size);
  b_st.site = &av_emlrtRSI;
  c_st.site = &dv_emlrtRSI;
  d_st.site = &fp_emlrtRSI;
  float_colon_length(&n, &anew, &bnew, &n_too_large);
  e_st.site = &hp_emlrtRSI;
  assert_pmaxsize(&e_st, !n_too_large);
}

/* End of code generation (xcorr.c) */
