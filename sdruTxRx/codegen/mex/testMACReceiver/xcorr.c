/*
 * xcorr.c
 *
 * Code generation for function 'xcorr'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "xcorr.h"
#include "receiveData.h"
#include "coarseOFDMFreqEst_sdr.h"
#include "colon.h"
#include "testMACReceiver_mexutil.h"
#include "testMACReceiver_data.h"

/* Variable Definitions */
static emlrtRSInfo ug_emlrtRSI = { 31, "xcorr",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/xcorr.m" };

static emlrtRSInfo vg_emlrtRSI = { 94, "xcorr",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/xcorr.m" };

static emlrtRSInfo wg_emlrtRSI = { 101, "xcorr",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/xcorr.m" };

static emlrtRSInfo xg_emlrtRSI = { 21, "colon",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 181, 48, "", "xcorr",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/xcorr.m", 0 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 181, 35, "", "xcorr",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/xcorr.m", 0 };

/* Function Declarations */
static void b_crosscorr(const real_T a_data[1231], real_T c_data[2461], int32_T
  c_size[1]);
static void crosscorr(const creal_T a_data[1231], const creal_T b_data[16],
                      creal_T c_data[2461], int32_T c_size[1]);

/* Function Definitions */
static void b_crosscorr(const real_T a_data[1231], real_T c_data[2461], int32_T
  c_size[1])
{
  int32_T i;
  real_T s;
  int32_T jstart;
  int32_T i21;
  int32_T j;
  int32_T b_j;
  int32_T i22;
  c_size[0] = 2461;
  for (i = 0; i < 2461; i++) {
    s = 0.0;
    if (i - 1230 > 0) {
      jstart = i - 1229;
    } else {
      jstart = 1;
    }

    i21 = (int32_T)muDoubleScalarMin((1.0 + (real_T)i) - 1215.0, 1231.0) -
      jstart;
    for (j = 0; j <= i21; j++) {
      b_j = jstart + j;
      i22 = (b_j - i) + 1230;
      emlrtDynamicBoundsCheckFastR2012b(i22, 1, 16, &bb_emlrtBCI,
        emlrtRootTLSGlobal);
      emlrtDynamicBoundsCheckFastR2012b(b_j, 1, 1231, &ab_emlrtBCI,
        emlrtRootTLSGlobal);
      s += a_data[b_j - 1];
    }

    c_data[i] = s;
  }
}

static void crosscorr(const creal_T a_data[1231], const creal_T b_data[16],
                      creal_T c_data[2461], int32_T c_size[1])
{
  int32_T i;
  real_T s_re;
  real_T s_im;
  int32_T jstart;
  int32_T i19;
  int32_T j;
  int32_T b_j;
  int32_T i20;
  c_size[0] = 2461;
  for (i = 0; i < 2461; i++) {
    s_re = 0.0;
    s_im = 0.0;
    if (i - 1230 > 0) {
      jstart = i - 1229;
    } else {
      jstart = 1;
    }

    i19 = (int32_T)muDoubleScalarMin((1.0 + (real_T)i) - 1215.0, 1231.0) -
      jstart;
    for (j = -1; j + 1 <= i19; j++) {
      b_j = jstart + j;
      i20 = (b_j - i) + 1231;
      emlrtDynamicBoundsCheckFastR2012b(i20, 1, 16, &bb_emlrtBCI,
        emlrtRootTLSGlobal);
      i20 = b_j + 1;
      emlrtDynamicBoundsCheckFastR2012b(i20, 1, 1231, &ab_emlrtBCI,
        emlrtRootTLSGlobal);
      s_re += b_data[(b_j - i) + 1230].re * a_data[b_j].re + b_data[(b_j - i) +
        1230].im * a_data[b_j].im;
      s_im += b_data[(b_j - i) + 1230].re * a_data[b_j].im - b_data[(b_j - i) +
        1230].im * a_data[b_j].re;
    }

    c_data[i].re = s_re;
    c_data[i].im = s_im;
  }
}

void b_xcorr(const real_T arg1_data[1231], real_T C_data[2461], int32_T C_size[1])
{
  boolean_T n_too_large;
  real_T bnew;
  real_T anew;
  int32_T n;
  const mxArray *y;
  static const int32_T iv115[2] = { 1, 21 };

  const mxArray *m24;
  char_T cv129[21];
  int32_T i;
  static const char_T cv130[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtPushRtStackR2012b(&ug_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&vg_emlrtRSI, emlrtRootTLSGlobal);
  b_crosscorr(arg1_data, C_data, C_size);
  emlrtPopRtStackR2012b(&vg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&wg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&xg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&yg_emlrtRSI, emlrtRootTLSGlobal);
  float_colon_length(&n, &anew, &bnew, &n_too_large);
  emlrtPushRtStackR2012b(&bh_emlrtRSI, emlrtRootTLSGlobal);
  if (!n_too_large) {
  } else {
    emlrtPushRtStackR2012b(&ch_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m24 = mxCreateCharArray(2, iv115);
    for (i = 0; i < 21; i++) {
      cv129[i] = cv130[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m24, cv129);
    emlrtAssign(&y, m24);
    c_error(b_message(y, &t_emlrtMCI), &u_emlrtMCI);
    emlrtPopRtStackR2012b(&ch_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&bh_emlrtRSI, emlrtRootTLSGlobal);
  if (n > 1) {
    emlrtPushRtStackR2012b(&ah_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ah_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&yg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&xg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&wg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ug_emlrtRSI, emlrtRootTLSGlobal);
}

void xcorr(const creal_T arg1_data[1231], const creal_T arg2_data[16], creal_T
           C_data[2461], int32_T C_size[1])
{
  boolean_T n_too_large;
  real_T bnew;
  real_T anew;
  int32_T n;
  const mxArray *y;
  static const int32_T iv114[2] = { 1, 21 };

  const mxArray *m23;
  char_T cv127[21];
  int32_T i;
  static const char_T cv128[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtPushRtStackR2012b(&ug_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&vg_emlrtRSI, emlrtRootTLSGlobal);
  crosscorr(arg1_data, arg2_data, C_data, C_size);
  emlrtPopRtStackR2012b(&vg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&wg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&xg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&yg_emlrtRSI, emlrtRootTLSGlobal);
  float_colon_length(&n, &anew, &bnew, &n_too_large);
  emlrtPushRtStackR2012b(&bh_emlrtRSI, emlrtRootTLSGlobal);
  if (!n_too_large) {
  } else {
    emlrtPushRtStackR2012b(&ch_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m23 = mxCreateCharArray(2, iv114);
    for (i = 0; i < 21; i++) {
      cv127[i] = cv128[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m23, cv127);
    emlrtAssign(&y, m23);
    c_error(b_message(y, &t_emlrtMCI), &u_emlrtMCI);
    emlrtPopRtStackR2012b(&ch_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&bh_emlrtRSI, emlrtRootTLSGlobal);
  if (n > 1) {
    emlrtPushRtStackR2012b(&ah_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&ah_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&yg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&xg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&wg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ug_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (xcorr.c) */
