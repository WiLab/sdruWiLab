/*
 * xcorr.c
 *
 * Code generation for function 'xcorr'
 *
 * C source code generated on: Thu Mar  6 19:04:24 2014
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
static emlrtRSInfo ip_emlrtRSI = { 31, "xcorr",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/xcorr.m" };

static emlrtRSInfo jp_emlrtRSI = { 94, "xcorr",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/xcorr.m" };

static emlrtRSInfo kp_emlrtRSI = { 101, "xcorr",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/xcorr.m" };

static emlrtRSInfo lp_emlrtRSI = { 181, "xcorr",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/xcorr.m" };

static emlrtRSInfo mp_emlrtRSI = { 176, "xcorr",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/xcorr.m" };

static emlrtRSInfo np_emlrtRSI = { 21, "colon",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 181, 48, "", "xcorr",
  "/Applications/MATLAB_R2013b.app/toolbox/signal/eml/xcorr.m", 0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 181, 35, "", "xcorr",
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
  int32_T i21;
  int32_T j;
  int32_T b_j;
  int32_T i22;
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

    st.site = &mp_emlrtRSI;
    i21 = (int32_T)muDoubleScalarMin((1.0 + (real_T)i) - 1215.0, 1231.0) -
      jstart;
    for (j = 0; j <= i21; j++) {
      b_j = jstart + j;
      i22 = (b_j - i) + 1230;
      emlrtDynamicBoundsCheckFastR2012b(i22, 1, 16, &s_emlrtBCI, sp);
      st.site = &lp_emlrtRSI;
      emlrtDynamicBoundsCheckFastR2012b(b_j, 1, 1231, &r_emlrtBCI, &st);
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
  int32_T i19;
  int32_T j;
  int32_T b_j;
  int32_T i20;
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

    st.site = &mp_emlrtRSI;
    i19 = (int32_T)muDoubleScalarMin((1.0 + (real_T)i) - 1215.0, 1231.0) -
      jstart;
    for (j = -1; j + 1 <= i19; j++) {
      b_j = jstart + j;
      st.site = &lp_emlrtRSI;
      i20 = (b_j - i) + 1231;
      a_re = b_data[emlrtDynamicBoundsCheckFastR2012b(i20, 1, 16, &s_emlrtBCI,
        &st) - 1].re;
      i20 = (b_j - i) + 1231;
      a_im = b_data[emlrtDynamicBoundsCheckFastR2012b(i20, 1, 16, &s_emlrtBCI,
        &st) - 1].im;
      i20 = b_j + 1;
      emlrtDynamicBoundsCheckFastR2012b(i20, 1, 1231, &r_emlrtBCI, &st);
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
  st.site = &ip_emlrtRSI;
  b_st.site = &jp_emlrtRSI;
  b_crosscorr(&b_st, arg1_data, C_data, C_size);
  b_st.site = &kp_emlrtRSI;
  c_st.site = &np_emlrtRSI;
  d_st.site = &op_emlrtRSI;
  float_colon_length(&n, &anew, &bnew, &n_too_large);
  e_st.site = &dq_emlrtRSI;
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
  st.site = &ip_emlrtRSI;
  b_st.site = &jp_emlrtRSI;
  crosscorr(&b_st, arg1_data, arg2_data, C_data, C_size);
  b_st.site = &kp_emlrtRSI;
  c_st.site = &np_emlrtRSI;
  d_st.site = &op_emlrtRSI;
  float_colon_length(&n, &anew, &bnew, &n_too_large);
  e_st.site = &dq_emlrtRSI;
  assert_pmaxsize(&e_st, !n_too_large);
}

/* End of code generation (xcorr.c) */
