/*
 * fprintf.c
 *
 * Code generation for function 'fprintf'
 *
 * C source code generated on: Thu Mar  6 19:04:24 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "fprintf.h"
#include "OFDMletters2bits.h"
#include "testMACTransmitter_mexutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo rl_emlrtRSI = { 38, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtRSInfo in_emlrtRSI = { 35, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtMCInfo n_emlrtMCI = { 74, 14, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtRSInfo ow_emlrtRSI = { 74, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

/* Function Declarations */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static real_T bb_fprintf(const emlrtStack *sp, int32_T varargin_1);
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location);
static real_T c_fprintf(const emlrtStack *sp, int16_T varargin_1, real_T
  varargin_2);
static real_T e_fprintf(const emlrtStack *sp);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *
  location);
static real_T g_fprintf(const emlrtStack *sp);
static real_T i_fprintf(const emlrtStack *sp);
static real_T k_fprintf(const emlrtStack *sp, const char_T varargin_1_data[77],
  const int32_T varargin_1_size[2]);
static real_T m_fprintf(const emlrtStack *sp, int16_T varargin_1);
static real_T o_fprintf(const emlrtStack *sp);
static real_T q_fprintf(const emlrtStack *sp);
static real_T s_fprintf(const emlrtStack *sp);
static real_T u_fprintf(const emlrtStack *sp);
static real_T w_fprintf(const emlrtStack *sp);
static real_T y_fprintf(const emlrtStack *sp);

/* Function Definitions */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m56;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m56, 3, pArrays, "feval", TRUE, location);
}

static real_T bb_fprintf(const emlrtStack *sp, int32_T varargin_1)
{
  const mxArray *y;
  static const int32_T iv245[2] = { 1, 7 };

  const mxArray *m49;
  char_T cv296[7];
  int32_T i;
  static const char_T cv297[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv246[2] = { 1, 17 };

  char_T cv298[17];
  static const char_T cv299[17] = { 'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't',
    'e', 'd', ':', ' ', '%', 'd', '\\', 'n' };

  const mxArray *d_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m49 = mxCreateCharArray(2, iv245);
  for (i = 0; i < 7; i++) {
    cv296[i] = cv297[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m49, cv296);
  emlrtAssign(&y, m49);
  b_y = NULL;
  m49 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m49);
  c_y = NULL;
  m49 = mxCreateCharArray(2, iv246);
  for (i = 0; i < 17; i++) {
    cv298[i] = cv299[i];
  }

  emlrtInitCharArrayR2013a(sp, 17, m49, cv298);
  emlrtAssign(&c_y, m49);
  d_y = NULL;
  m49 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m49) = varargin_1;
  emlrtAssign(&d_y, m49);
  st.site = &ow_emlrtRSI;
  return c_emlrt_marshallIn(&st, c_feval(&st, y, b_y, c_y, d_y, &n_emlrtMCI),
    "feval");
}

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m57;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m57, 4, pArrays, "feval", TRUE, location);
}

static real_T c_fprintf(const emlrtStack *sp, int16_T varargin_1, real_T
  varargin_2)
{
  const mxArray *y;
  static const int32_T iv94[2] = { 1, 7 };

  const mxArray *m15;
  char_T cv104[7];
  int32_T i;
  static const char_T cv105[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv95[2] = { 1, 43 };

  char_T cv106[43];
  static const char_T cv107[43] = { 'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't',
    'i', 'n', 'g', ' ', 't', 'o', ' ', 'n', 'o', 'd', 'e', ':', ' ', '%', 'd',
    ',', ' ', 'w', 'i', 't', 'h', ' ', 'o', 'f', 'f', 's', 'e', 't', ':', ' ',
    '%', 'f', '\\', 'n' };

  const mxArray *d_y;
  const mxArray *e_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m15 = mxCreateCharArray(2, iv94);
  for (i = 0; i < 7; i++) {
    cv104[i] = cv105[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m15, cv104);
  emlrtAssign(&y, m15);
  b_y = NULL;
  m15 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m15);
  c_y = NULL;
  m15 = mxCreateCharArray(2, iv95);
  for (i = 0; i < 43; i++) {
    cv106[i] = cv107[i];
  }

  emlrtInitCharArrayR2013a(sp, 43, m15, cv106);
  emlrtAssign(&c_y, m15);
  d_y = NULL;
  m15 = mxCreateNumericMatrix(1, 1, mxINT16_CLASS, mxREAL);
  *(int16_T *)mxGetData(m15) = varargin_1;
  emlrtAssign(&d_y, m15);
  e_y = NULL;
  m15 = mxCreateDoubleScalar(varargin_2);
  emlrtAssign(&e_y, m15);
  st.site = &ow_emlrtRSI;
  return c_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, d_y, e_y, &n_emlrtMCI),
    "feval");
}

static real_T e_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv157[2] = { 1, 7 };

  const mxArray *m27;
  char_T cv181[7];
  int32_T i;
  static const char_T cv182[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv158[2] = { 1, 45 };

  char_T cv183[45];
  static const char_T cv184[45] = { 'M', 'A', 'C', '|', ' ', 'T', 'r', 'a', 'n',
    's', 'm', 'i', 's', 's', 'i', 'o', 'n', ' ', 'f', 'i', 'n', 'i', 's', 'h',
    'e', 'd', ',', ' ', 'w', 'a', 'i', 't', 'i', 'n', 'g', ' ', 'f', 'o', 'r',
    ' ', 'A', 'C', 'K', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m27 = mxCreateCharArray(2, iv157);
  for (i = 0; i < 7; i++) {
    cv181[i] = cv182[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m27, cv181);
  emlrtAssign(&y, m27);
  b_y = NULL;
  m27 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m27);
  c_y = NULL;
  m27 = mxCreateCharArray(2, iv158);
  for (i = 0; i < 45; i++) {
    cv183[i] = cv184[i];
  }

  emlrtInitCharArrayR2013a(sp, 45, m27, cv183);
  emlrtAssign(&c_y, m27);
  st.site = &ow_emlrtRSI;
  return c_emlrt_marshallIn(&st, b_feval(&st, y, b_y, c_y, &n_emlrtMCI), "feval");
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *
  location)
{
  const mxArray *pArrays[5];
  const mxArray *m53;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  return emlrtCallMATLABR2012b(sp, 1, &m53, 5, pArrays, "feval", TRUE, location);
}

static real_T g_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv159[2] = { 1, 7 };

  const mxArray *m28;
  char_T cv185[7];
  int32_T i;
  static const char_T cv186[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv160[2] = { 1, 23 };

  char_T cv187[23];
  static const char_T cv188[23] = { 'D', 'L', '|', ' ', 'D', 'u', 'p', 'l', 'i',
    'c', 'a', 't', 'e', ' ', 'M', 'e', 's', 's', 'a', 'g', 'e', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m28 = mxCreateCharArray(2, iv159);
  for (i = 0; i < 7; i++) {
    cv185[i] = cv186[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m28, cv185);
  emlrtAssign(&y, m28);
  b_y = NULL;
  m28 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m28);
  c_y = NULL;
  m28 = mxCreateCharArray(2, iv160);
  for (i = 0; i < 23; i++) {
    cv187[i] = cv188[i];
  }

  emlrtInitCharArrayR2013a(sp, 23, m28, cv187);
  emlrtAssign(&c_y, m28);
  st.site = &ow_emlrtRSI;
  return c_emlrt_marshallIn(&st, b_feval(&st, y, b_y, c_y, &n_emlrtMCI), "feval");
}

static real_T i_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv161[2] = { 1, 7 };

  const mxArray *m29;
  char_T cv189[7];
  int32_T i;
  static const char_T cv190[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv162[2] = { 1, 26 };

  char_T cv191[26];
  static const char_T cv192[26] = { 'D', 'L', '|', ' ', 'M', 'a', 'x', ' ', 't',
    'i', 'm', 'e', 'o', 'u', 't', 's', ' ', 'r', 'e', 'a', 'c', 'h', 'e', 'd',
    '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m29 = mxCreateCharArray(2, iv161);
  for (i = 0; i < 7; i++) {
    cv189[i] = cv190[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m29, cv189);
  emlrtAssign(&y, m29);
  b_y = NULL;
  m29 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m29);
  c_y = NULL;
  m29 = mxCreateCharArray(2, iv162);
  for (i = 0; i < 26; i++) {
    cv191[i] = cv192[i];
  }

  emlrtInitCharArrayR2013a(sp, 26, m29, cv191);
  emlrtAssign(&c_y, m29);
  st.site = &ow_emlrtRSI;
  return c_emlrt_marshallIn(&st, b_feval(&st, y, b_y, c_y, &n_emlrtMCI), "feval");
}

static real_T k_fprintf(const emlrtStack *sp, const char_T varargin_1_data[77],
  const int32_T varargin_1_size[2])
{
  const mxArray *y;
  static const int32_T iv207[2] = { 1, 7 };

  const mxArray *m39;
  char_T cv247[7];
  int32_T i;
  static const char_T cv248[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv208[2] = { 1, 22 };

  char_T cv249[22];
  static const char_T cv250[22] = { 'M', 'A', 'C', '|', ' ', 'G', 'o', 't', ' ',
    'm', 'e', 's', 's', 'a', 'g', 'e', ':', ' ', '%', 's', '\\', 'n' };

  int32_T u_size[2];
  int32_T i31;
  char_T u_data[77];
  const mxArray *d_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m39 = mxCreateCharArray(2, iv207);
  for (i = 0; i < 7; i++) {
    cv247[i] = cv248[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m39, cv247);
  emlrtAssign(&y, m39);
  b_y = NULL;
  m39 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m39);
  c_y = NULL;
  m39 = mxCreateCharArray(2, iv208);
  for (i = 0; i < 22; i++) {
    cv249[i] = cv250[i];
  }

  emlrtInitCharArrayR2013a(sp, 22, m39, cv249);
  emlrtAssign(&c_y, m39);
  u_size[0] = 1;
  u_size[1] = varargin_1_size[1];
  i = varargin_1_size[0] * varargin_1_size[1];
  for (i31 = 0; i31 < i; i31++) {
    u_data[i31] = varargin_1_data[i31];
  }

  d_y = NULL;
  m39 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m39, (char_T *)&u_data);
  emlrtAssign(&d_y, m39);
  st.site = &ow_emlrtRSI;
  return c_emlrt_marshallIn(&st, c_feval(&st, y, b_y, c_y, d_y, &n_emlrtMCI),
    "feval");
}

static real_T m_fprintf(const emlrtStack *sp, int16_T varargin_1)
{
  const mxArray *y;
  static const int32_T iv209[2] = { 1, 7 };

  const mxArray *m40;
  char_T cv251[7];
  int32_T i;
  static const char_T cv252[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv210[2] = { 1, 20 };

  char_T cv253[20];
  static const char_T cv254[20] = { 'M', 'A', 'C', '|', ' ', 'F', 'r', 'o', 'm',
    ' ', 'N', 'o', 'd', 'e', ':', ' ', '%', 'd', '\\', 'n' };

  const mxArray *d_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m40 = mxCreateCharArray(2, iv209);
  for (i = 0; i < 7; i++) {
    cv251[i] = cv252[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m40, cv251);
  emlrtAssign(&y, m40);
  b_y = NULL;
  m40 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m40);
  c_y = NULL;
  m40 = mxCreateCharArray(2, iv210);
  for (i = 0; i < 20; i++) {
    cv253[i] = cv254[i];
  }

  emlrtInitCharArrayR2013a(sp, 20, m40, cv253);
  emlrtAssign(&c_y, m40);
  d_y = NULL;
  m40 = mxCreateNumericMatrix(1, 1, mxINT16_CLASS, mxREAL);
  *(int16_T *)mxGetData(m40) = varargin_1;
  emlrtAssign(&d_y, m40);
  st.site = &ow_emlrtRSI;
  return c_emlrt_marshallIn(&st, c_feval(&st, y, b_y, c_y, d_y, &n_emlrtMCI),
    "feval");
}

static real_T o_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv211[2] = { 1, 7 };

  const mxArray *m41;
  char_T cv255[7];
  int32_T i;
  static const char_T cv256[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv212[2] = { 1, 32 };

  char_T cv257[32];
  static const char_T cv258[32] = { 'M', 'A', 'C', '|', ' ', 'T', 'r', 'a', 'n',
    's', 'm', 'i', 't', 't', 'i', 'n', 'g', ' ', 'A', 'C', 'K', ' ', 'f', 'o',
    'r', ' ', 'd', 'u', 'p', 'e', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m41 = mxCreateCharArray(2, iv211);
  for (i = 0; i < 7; i++) {
    cv255[i] = cv256[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m41, cv255);
  emlrtAssign(&y, m41);
  b_y = NULL;
  m41 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m41);
  c_y = NULL;
  m41 = mxCreateCharArray(2, iv212);
  for (i = 0; i < 32; i++) {
    cv257[i] = cv258[i];
  }

  emlrtInitCharArrayR2013a(sp, 32, m41, cv257);
  emlrtAssign(&c_y, m41);
  st.site = &ow_emlrtRSI;
  return c_emlrt_marshallIn(&st, b_feval(&st, y, b_y, c_y, &n_emlrtMCI), "feval");
}

static real_T q_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv235[2] = { 1, 7 };

  const mxArray *m44;
  char_T cv276[7];
  int32_T i;
  static const char_T cv277[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv236[2] = { 1, 14 };

  char_T cv278[14];
  static const char_T cv279[14] = { 'M', 'A', 'C', '|', ' ', 'G', 'o', 't', ' ',
    'A', 'C', 'K', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m44 = mxCreateCharArray(2, iv235);
  for (i = 0; i < 7; i++) {
    cv276[i] = cv277[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m44, cv276);
  emlrtAssign(&y, m44);
  b_y = NULL;
  m44 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m44);
  c_y = NULL;
  m44 = mxCreateCharArray(2, iv236);
  for (i = 0; i < 14; i++) {
    cv278[i] = cv279[i];
  }

  emlrtInitCharArrayR2013a(sp, 14, m44, cv278);
  emlrtAssign(&c_y, m44);
  st.site = &ow_emlrtRSI;
  return c_emlrt_marshallIn(&st, b_feval(&st, y, b_y, c_y, &n_emlrtMCI), "feval");
}

static real_T s_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv237[2] = { 1, 7 };

  const mxArray *m45;
  char_T cv280[7];
  int32_T i;
  static const char_T cv281[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv238[2] = { 1, 29 };

  char_T cv282[29];
  static const char_T cv283[29] = { 'M', 'A', 'C', '|', ' ', 'R', 'e', 't', 'r',
    'a', 'n', 's', 'm', 'i', 't', 't', 'i', 'n', 'g', ' ', 'm', 'e', 's', 's',
    'a', 'g', 'e', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m45 = mxCreateCharArray(2, iv237);
  for (i = 0; i < 7; i++) {
    cv280[i] = cv281[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m45, cv280);
  emlrtAssign(&y, m45);
  b_y = NULL;
  m45 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m45);
  c_y = NULL;
  m45 = mxCreateCharArray(2, iv238);
  for (i = 0; i < 29; i++) {
    cv282[i] = cv283[i];
  }

  emlrtInitCharArrayR2013a(sp, 29, m45, cv282);
  emlrtAssign(&c_y, m45);
  st.site = &ow_emlrtRSI;
  return c_emlrt_marshallIn(&st, b_feval(&st, y, b_y, c_y, &n_emlrtMCI), "feval");
}

static real_T u_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv239[2] = { 1, 7 };

  const mxArray *m46;
  char_T cv284[7];
  int32_T i;
  static const char_T cv285[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv240[2] = { 1, 45 };

  char_T cv286[45];
  static const char_T cv287[45] = { '#', '#', '#', '#', '#', '#', '#', '#', '#',
    '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',
    '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',
    '#', '#', '#', '#', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m46 = mxCreateCharArray(2, iv239);
  for (i = 0; i < 7; i++) {
    cv284[i] = cv285[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m46, cv284);
  emlrtAssign(&y, m46);
  b_y = NULL;
  m46 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m46);
  c_y = NULL;
  m46 = mxCreateCharArray(2, iv240);
  for (i = 0; i < 45; i++) {
    cv286[i] = cv287[i];
  }

  emlrtInitCharArrayR2013a(sp, 45, m46, cv286);
  emlrtAssign(&c_y, m46);
  st.site = &ow_emlrtRSI;
  return c_emlrt_marshallIn(&st, b_feval(&st, y, b_y, c_y, &n_emlrtMCI), "feval");
}

static real_T w_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv241[2] = { 1, 7 };

  const mxArray *m47;
  char_T cv288[7];
  int32_T i;
  static const char_T cv289[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv242[2] = { 1, 25 };

  char_T cv290[25];
  static const char_T cv291[25] = { 'M', 'A', 'C', '|', ' ', 'N', 'o', ' ', 'A',
    'C', 'K', ' ', 'r', 'e', 'c', 'e', 'i', 'v', 'e', 'd', ' ', ':', '(', '\\',
    'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m47 = mxCreateCharArray(2, iv241);
  for (i = 0; i < 7; i++) {
    cv288[i] = cv289[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m47, cv288);
  emlrtAssign(&y, m47);
  b_y = NULL;
  m47 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m47);
  c_y = NULL;
  m47 = mxCreateCharArray(2, iv242);
  for (i = 0; i < 25; i++) {
    cv290[i] = cv291[i];
  }

  emlrtInitCharArrayR2013a(sp, 25, m47, cv290);
  emlrtAssign(&c_y, m47);
  st.site = &ow_emlrtRSI;
  return c_emlrt_marshallIn(&st, b_feval(&st, y, b_y, c_y, &n_emlrtMCI), "feval");
}

static real_T y_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv243[2] = { 1, 7 };

  const mxArray *m48;
  char_T cv292[7];
  int32_T i;
  static const char_T cv293[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv244[2] = { 1, 56 };

  char_T cv294[56];
  static const char_T cv295[56] = { 'T', 'O', 'P', '|', ' ', 'D', 'O', 'N', 'E',
    ' ', 'I', 't', 'e', 'r', 'a', 't', 'i', 'o', 'n', ':', ' ', 'W', 'a', 'i',
    't', 'i', 'n', 'g', ' ', 's', 'o', 'm', 'e', ' ', 't', 'i', 'm', 'e', ' ',
    'b', 'e', 't', 'w', 'e', 'e', 'n', ' ', 'a', 'c', 't', 'i', 'o', 'n', 's',
    '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m48 = mxCreateCharArray(2, iv243);
  for (i = 0; i < 7; i++) {
    cv292[i] = cv293[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m48, cv292);
  emlrtAssign(&y, m48);
  b_y = NULL;
  m48 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m48);
  c_y = NULL;
  m48 = mxCreateCharArray(2, iv244);
  for (i = 0; i < 56; i++) {
    cv294[i] = cv295[i];
  }

  emlrtInitCharArrayR2013a(sp, 56, m48, cv294);
  emlrtAssign(&c_y, m48);
  st.site = &ow_emlrtRSI;
  return c_emlrt_marshallIn(&st, b_feval(&st, y, b_y, c_y, &n_emlrtMCI), "feval");
}

void ab_fprintf(const emlrtStack *sp, int32_T formatSpec)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &rl_emlrtRSI;
  bb_fprintf(&st, formatSpec);
}

void b_fprintf(const emlrtStack *sp, int16_T formatSpec, real_T varargin_1)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &rl_emlrtRSI;
  c_fprintf(&st, formatSpec, varargin_1);
}

void d_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &in_emlrtRSI;
  e_fprintf(&st);
}

void f_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &in_emlrtRSI;
  g_fprintf(&st);
}

void h_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &in_emlrtRSI;
  i_fprintf(&st);
}

void j_fprintf(const emlrtStack *sp, const char_T formatSpec_data[77], const
               int32_T formatSpec_size[2])
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &rl_emlrtRSI;
  k_fprintf(&st, formatSpec_data, formatSpec_size);
}

void l_fprintf(const emlrtStack *sp, int16_T formatSpec)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &rl_emlrtRSI;
  m_fprintf(&st, formatSpec);
}

void n_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &in_emlrtRSI;
  o_fprintf(&st);
}

void p_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &in_emlrtRSI;
  q_fprintf(&st);
}

void r_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &in_emlrtRSI;
  s_fprintf(&st);
}

void t_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &in_emlrtRSI;
  u_fprintf(&st);
}

void v_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &in_emlrtRSI;
  w_fprintf(&st);
}

void x_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &in_emlrtRSI;
  y_fprintf(&st);
}

/* End of code generation (fprintf.c) */
