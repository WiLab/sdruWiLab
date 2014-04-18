/*
 * xcorr.c
 *
 * Code generation for function 'xcorr'
 *
 * C source code generated on: Thu Apr 17 22:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "xcorr.h"
#include "receiveData.h"
#include "equalizeOFDM.h"
#include "colon.h"
#include "testPHYReceive_mexutil.h"
#include "testPHYReceive_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo ng_emlrtRSI = { 31, "xcorr",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/xcorr.m" };

static emlrtRSInfo og_emlrtRSI = { 94, "xcorr",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/xcorr.m" };

static emlrtRSInfo pg_emlrtRSI = { 101, "xcorr",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/xcorr.m" };

static emlrtRSInfo qg_emlrtRSI = { 21, "colon",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/ops/colon.m" };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 181, 48, "", "xcorr",
  "/opt/MATLAB/R2013a/toolbox/signal/eml/xcorr.m", 0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 181, 35, "", "xcorr",
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
  int32_T i19;
  int32_T j;
  int32_T b_j;
  int32_T i20;
  c_size[0] = 2461;
  for (i = 0; i < 2461; i++) {
    s = 0.0;
    if (i - 1230 > 0) {
      jstart = i - 1229;
    } else {
      jstart = 1;
    }

    i19 = (int32_T)muDoubleScalarMin((1.0 + (real_T)i) - 1215.0, 1231.0) -
      jstart;
    for (j = 0; j <= i19; j++) {
      b_j = jstart + j;
      i20 = (b_j - i) + 1230;
      emlrtDynamicBoundsCheckFastR2012b(i20, 1, 16, &s_emlrtBCI,
        emlrtRootTLSGlobal);
      emlrtDynamicBoundsCheckFastR2012b(b_j, 1, 1231, &r_emlrtBCI,
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
  int32_T i17;
  int32_T j;
  int32_T b_j;
  int32_T i18;
  c_size[0] = 2461;
  for (i = 0; i < 2461; i++) {
    s_re = 0.0;
    s_im = 0.0;
    if (i - 1230 > 0) {
      jstart = i - 1229;
    } else {
      jstart = 1;
    }

    i17 = (int32_T)muDoubleScalarMin((1.0 + (real_T)i) - 1215.0, 1231.0) -
      jstart;
    for (j = -1; j + 1 <= i17; j++) {
      b_j = jstart + j;
      i18 = (b_j - i) + 1231;
      emlrtDynamicBoundsCheckFastR2012b(i18, 1, 16, &s_emlrtBCI,
        emlrtRootTLSGlobal);
      i18 = b_j + 1;
      emlrtDynamicBoundsCheckFastR2012b(i18, 1, 1231, &r_emlrtBCI,
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
  static const int32_T iv109[2] = { 1, 21 };

  const mxArray *m22;
  char_T cv119[21];
  int32_T i;
  static const char_T cv120[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtPushRtStackR2012b(&ng_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&og_emlrtRSI, emlrtRootTLSGlobal);
  b_crosscorr(arg1_data, C_data, C_size);
  emlrtPopRtStackR2012b(&og_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&qg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&rg_emlrtRSI, emlrtRootTLSGlobal);
  float_colon_length(&n, &anew, &bnew, &n_too_large);
  emlrtPushRtStackR2012b(&tg_emlrtRSI, emlrtRootTLSGlobal);
  if (!n_too_large) {
  } else {
    emlrtPushRtStackR2012b(&ug_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m22 = mxCreateCharArray(2, iv109);
    for (i = 0; i < 21; i++) {
      cv119[i] = cv120[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m22, cv119);
    emlrtAssign(&y, m22);
    b_error(b_message(y, &u_emlrtMCI), &v_emlrtMCI);
    emlrtPopRtStackR2012b(&ug_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&tg_emlrtRSI, emlrtRootTLSGlobal);
  if (n > 1) {
    emlrtPushRtStackR2012b(&sg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&sg_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&rg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&qg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ng_emlrtRSI, emlrtRootTLSGlobal);
}

void xcorr(const creal_T arg1_data[1231], const creal_T arg2_data[16], creal_T
           C_data[2461], int32_T C_size[1])
{
  boolean_T n_too_large;
  real_T bnew;
  real_T anew;
  int32_T n;
  const mxArray *y;
  static const int32_T iv108[2] = { 1, 21 };

  const mxArray *m21;
  char_T cv117[21];
  int32_T i;
  static const char_T cv118[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtPushRtStackR2012b(&ng_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&og_emlrtRSI, emlrtRootTLSGlobal);
  crosscorr(arg1_data, arg2_data, C_data, C_size);
  emlrtPopRtStackR2012b(&og_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&qg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&rg_emlrtRSI, emlrtRootTLSGlobal);
  float_colon_length(&n, &anew, &bnew, &n_too_large);
  emlrtPushRtStackR2012b(&tg_emlrtRSI, emlrtRootTLSGlobal);
  if (!n_too_large) {
  } else {
    emlrtPushRtStackR2012b(&ug_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m21 = mxCreateCharArray(2, iv108);
    for (i = 0; i < 21; i++) {
      cv117[i] = cv118[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 21, m21, cv117);
    emlrtAssign(&y, m21);
    b_error(b_message(y, &u_emlrtMCI), &v_emlrtMCI);
    emlrtPopRtStackR2012b(&ug_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&tg_emlrtRSI, emlrtRootTLSGlobal);
  if (n > 1) {
    emlrtPushRtStackR2012b(&sg_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&sg_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&rg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&qg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&pg_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ng_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (xcorr.c) */
