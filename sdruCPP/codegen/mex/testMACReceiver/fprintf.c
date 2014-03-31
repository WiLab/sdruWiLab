/*
 * fprintf.c
 *
 * Code generation for function 'fprintf'
 *
 * C source code generated on: Thu Mar  6 18:47:06 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "fprintf.h"
#include "OFDMletters2bits.h"
#include "testMACReceiver_mexutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo ol_emlrtRSI = { 35, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtRSInfo wu_emlrtRSI = { 38, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtMCInfo n_emlrtMCI = { 74, 14, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtRSInfo ew_emlrtRSI = { 74, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

/* Function Declarations */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location);
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *
  location);
static real_T c_fprintf(const emlrtStack *sp);
static real_T e_fprintf(const emlrtStack *sp);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static real_T g_fprintf(const emlrtStack *sp);
static real_T i_fprintf(const emlrtStack *sp);
static real_T k_fprintf(const emlrtStack *sp, const char_T varargin_1_data[76],
  const int32_T varargin_1_size[2]);
static real_T m_fprintf(const emlrtStack *sp, const char_T varargin_1_data[77],
  const int32_T varargin_1_size[2]);
static real_T o_fprintf(const emlrtStack *sp, int16_T varargin_1);
static real_T q_fprintf(const emlrtStack *sp);
static real_T s_fprintf(const emlrtStack *sp, int16_T varargin_1, real_T
  varargin_2);
static real_T u_fprintf(const emlrtStack *sp);

/* Function Definitions */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m50;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m50, 4, pArrays, "feval", TRUE, location);
}

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *
  location)
{
  const mxArray *pArrays[5];
  const mxArray *m51;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  return emlrtCallMATLABR2012b(sp, 1, &m51, 5, pArrays, "feval", TRUE, location);
}

static real_T c_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv78[2] = { 1, 7 };

  const mxArray *m14;
  char_T cv86[7];
  int32_T i;
  static const char_T cv87[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv79[2] = { 1, 23 };

  char_T cv88[23];
  static const char_T cv89[23] = { 'D', 'L', '|', ' ', 'D', 'u', 'p', 'l', 'i',
    'c', 'a', 't', 'e', ' ', 'M', 'e', 's', 's', 'a', 'g', 'e', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m14 = mxCreateCharArray(2, iv78);
  for (i = 0; i < 7; i++) {
    cv86[i] = cv87[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m14, cv86);
  emlrtAssign(&y, m14);
  b_y = NULL;
  m14 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m14);
  c_y = NULL;
  m14 = mxCreateCharArray(2, iv79);
  for (i = 0; i < 23; i++) {
    cv88[i] = cv89[i];
  }

  emlrtInitCharArrayR2013a(sp, 23, m14, cv88);
  emlrtAssign(&c_y, m14);
  st.site = &ew_emlrtRSI;
  return c_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, &n_emlrtMCI), "feval");
}

static real_T e_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv80[2] = { 1, 7 };

  const mxArray *m15;
  char_T cv90[7];
  int32_T i;
  static const char_T cv91[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv81[2] = { 1, 23 };

  char_T cv92[23];
  static const char_T cv93[23] = { 'D', 'L', '|', ' ', 'M', 'e', 's', 's', 'a',
    'g', 'e', ' ', 'c', 'o', 'r', 'r', 'u', 'p', 't', 'e', 'd', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m15 = mxCreateCharArray(2, iv80);
  for (i = 0; i < 7; i++) {
    cv90[i] = cv91[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m15, cv90);
  emlrtAssign(&y, m15);
  b_y = NULL;
  m15 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m15);
  c_y = NULL;
  m15 = mxCreateCharArray(2, iv81);
  for (i = 0; i < 23; i++) {
    cv92[i] = cv93[i];
  }

  emlrtInitCharArrayR2013a(sp, 23, m15, cv92);
  emlrtAssign(&c_y, m15);
  st.site = &ew_emlrtRSI;
  return c_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, &n_emlrtMCI), "feval");
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m47;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m47, 3, pArrays, "feval", TRUE, location);
}

static real_T g_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv82[2] = { 1, 7 };

  const mxArray *m16;
  char_T cv94[7];
  int32_T i;
  static const char_T cv95[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv83[2] = { 1, 21 };

  char_T cv96[21];
  static const char_T cv97[21] = { 'D', 'L', '|', ' ', 'T', 'i', 'm', 'e', 'o',
    'u', 't', ' ', 'o', 'c', 'c', 'u', 'r', 'e', 'd', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m16 = mxCreateCharArray(2, iv82);
  for (i = 0; i < 7; i++) {
    cv94[i] = cv95[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m16, cv94);
  emlrtAssign(&y, m16);
  b_y = NULL;
  m16 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m16);
  c_y = NULL;
  m16 = mxCreateCharArray(2, iv83);
  for (i = 0; i < 21; i++) {
    cv96[i] = cv97[i];
  }

  emlrtInitCharArrayR2013a(sp, 21, m16, cv96);
  emlrtAssign(&c_y, m16);
  st.site = &ew_emlrtRSI;
  return c_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, &n_emlrtMCI), "feval");
}

static real_T i_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv84[2] = { 1, 7 };

  const mxArray *m17;
  char_T cv98[7];
  int32_T i;
  static const char_T cv99[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv85[2] = { 1, 26 };

  char_T cv100[26];
  static const char_T cv101[26] = { 'D', 'L', '|', ' ', 'M', 'a', 'x', ' ', 't',
    'i', 'm', 'e', 'o', 'u', 't', 's', ' ', 'r', 'e', 'a', 'c', 'h', 'e', 'd',
    '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m17 = mxCreateCharArray(2, iv84);
  for (i = 0; i < 7; i++) {
    cv98[i] = cv99[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m17, cv98);
  emlrtAssign(&y, m17);
  b_y = NULL;
  m17 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m17);
  c_y = NULL;
  m17 = mxCreateCharArray(2, iv85);
  for (i = 0; i < 26; i++) {
    cv100[i] = cv101[i];
  }

  emlrtInitCharArrayR2013a(sp, 26, m17, cv100);
  emlrtAssign(&c_y, m17);
  st.site = &ew_emlrtRSI;
  return c_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, &n_emlrtMCI), "feval");
}

static real_T k_fprintf(const emlrtStack *sp, const char_T varargin_1_data[76],
  const int32_T varargin_1_size[2])
{
  const mxArray *y;
  static const int32_T iv134[2] = { 1, 7 };

  const mxArray *m31;
  char_T cv164[7];
  int32_T i;
  static const char_T cv165[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv135[2] = { 1, 18 };

  char_T cv166[18];
  static const char_T cv167[18] = { 'D', 'L', '|', ' ', 'M', 'e', 's', 's', 'a',
    'g', 'e', '=', '|', '%', 's', '|', '\\', 'n' };

  int32_T u_size[2];
  int32_T i28;
  char_T u_data[76];
  const mxArray *d_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m31 = mxCreateCharArray(2, iv134);
  for (i = 0; i < 7; i++) {
    cv164[i] = cv165[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m31, cv164);
  emlrtAssign(&y, m31);
  b_y = NULL;
  m31 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m31);
  c_y = NULL;
  m31 = mxCreateCharArray(2, iv135);
  for (i = 0; i < 18; i++) {
    cv166[i] = cv167[i];
  }

  emlrtInitCharArrayR2013a(sp, 18, m31, cv166);
  emlrtAssign(&c_y, m31);
  u_size[0] = 1;
  u_size[1] = varargin_1_size[1];
  i = varargin_1_size[0] * varargin_1_size[1];
  for (i28 = 0; i28 < i; i28++) {
    u_data[i28] = varargin_1_data[i28];
  }

  d_y = NULL;
  m31 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m31, (char_T *)&u_data);
  emlrtAssign(&d_y, m31);
  st.site = &ew_emlrtRSI;
  return c_emlrt_marshallIn(&st, b_feval(&st, y, b_y, c_y, d_y, &n_emlrtMCI),
    "feval");
}

static real_T m_fprintf(const emlrtStack *sp, const char_T varargin_1_data[77],
  const int32_T varargin_1_size[2])
{
  const mxArray *y;
  static const int32_T iv136[2] = { 1, 7 };

  const mxArray *m32;
  char_T cv168[7];
  int32_T i;
  static const char_T cv169[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv137[2] = { 1, 22 };

  char_T cv170[22];
  static const char_T cv171[22] = { 'M', 'A', 'C', '|', ' ', 'G', 'o', 't', ' ',
    'm', 'e', 's', 's', 'a', 'g', 'e', ':', ' ', '%', 's', '\\', 'n' };

  int32_T u_size[2];
  int32_T i29;
  char_T u_data[77];
  const mxArray *d_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m32 = mxCreateCharArray(2, iv136);
  for (i = 0; i < 7; i++) {
    cv168[i] = cv169[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m32, cv168);
  emlrtAssign(&y, m32);
  b_y = NULL;
  m32 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m32);
  c_y = NULL;
  m32 = mxCreateCharArray(2, iv137);
  for (i = 0; i < 22; i++) {
    cv170[i] = cv171[i];
  }

  emlrtInitCharArrayR2013a(sp, 22, m32, cv170);
  emlrtAssign(&c_y, m32);
  u_size[0] = 1;
  u_size[1] = varargin_1_size[1];
  i = varargin_1_size[0] * varargin_1_size[1];
  for (i29 = 0; i29 < i; i29++) {
    u_data[i29] = varargin_1_data[i29];
  }

  d_y = NULL;
  m32 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m32, (char_T *)&u_data);
  emlrtAssign(&d_y, m32);
  st.site = &ew_emlrtRSI;
  return c_emlrt_marshallIn(&st, b_feval(&st, y, b_y, c_y, d_y, &n_emlrtMCI),
    "feval");
}

static real_T o_fprintf(const emlrtStack *sp, int16_T varargin_1)
{
  const mxArray *y;
  static const int32_T iv138[2] = { 1, 7 };

  const mxArray *m33;
  char_T cv172[7];
  int32_T i;
  static const char_T cv173[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv139[2] = { 1, 20 };

  char_T cv174[20];
  static const char_T cv175[20] = { 'M', 'A', 'C', '|', ' ', 'F', 'r', 'o', 'm',
    ' ', 'N', 'o', 'd', 'e', ':', ' ', '%', 'd', '\\', 'n' };

  const mxArray *d_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m33 = mxCreateCharArray(2, iv138);
  for (i = 0; i < 7; i++) {
    cv172[i] = cv173[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m33, cv172);
  emlrtAssign(&y, m33);
  b_y = NULL;
  m33 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m33);
  c_y = NULL;
  m33 = mxCreateCharArray(2, iv139);
  for (i = 0; i < 20; i++) {
    cv174[i] = cv175[i];
  }

  emlrtInitCharArrayR2013a(sp, 20, m33, cv174);
  emlrtAssign(&c_y, m33);
  d_y = NULL;
  m33 = mxCreateNumericMatrix(1, 1, mxINT16_CLASS, mxREAL);
  *(int16_T *)mxGetData(m33) = varargin_1;
  emlrtAssign(&d_y, m33);
  st.site = &ew_emlrtRSI;
  return c_emlrt_marshallIn(&st, b_feval(&st, y, b_y, c_y, d_y, &n_emlrtMCI),
    "feval");
}

static real_T q_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv140[2] = { 1, 7 };

  const mxArray *m34;
  char_T cv176[7];
  int32_T i;
  static const char_T cv177[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv141[2] = { 1, 23 };

  char_T cv178[23];
  static const char_T cv179[23] = { 'M', 'A', 'C', '|', ' ', 'T', 'r', 'a', 'n',
    's', 'm', 'i', 't', 't', 'i', 'n', 'g', ' ', 'A', 'C', 'K', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m34 = mxCreateCharArray(2, iv140);
  for (i = 0; i < 7; i++) {
    cv176[i] = cv177[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m34, cv176);
  emlrtAssign(&y, m34);
  b_y = NULL;
  m34 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m34);
  c_y = NULL;
  m34 = mxCreateCharArray(2, iv141);
  for (i = 0; i < 23; i++) {
    cv178[i] = cv179[i];
  }

  emlrtInitCharArrayR2013a(sp, 23, m34, cv178);
  emlrtAssign(&c_y, m34);
  st.site = &ew_emlrtRSI;
  return c_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, &n_emlrtMCI), "feval");
}

static real_T s_fprintf(const emlrtStack *sp, int16_T varargin_1, real_T
  varargin_2)
{
  const mxArray *y;
  static const int32_T iv142[2] = { 1, 7 };

  const mxArray *m35;
  char_T cv180[7];
  int32_T i;
  static const char_T cv181[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv143[2] = { 1, 43 };

  char_T cv182[43];
  static const char_T cv183[43] = { 'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't',
    'i', 'n', 'g', ' ', 't', 'o', ' ', 'n', 'o', 'd', 'e', ':', ' ', '%', 'd',
    ',', ' ', 'w', 'i', 't', 'h', ' ', 'o', 'f', 'f', 's', 'e', 't', ':', ' ',
    '%', 'f', '\\', 'n' };

  const mxArray *d_y;
  const mxArray *e_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m35 = mxCreateCharArray(2, iv142);
  for (i = 0; i < 7; i++) {
    cv180[i] = cv181[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m35, cv180);
  emlrtAssign(&y, m35);
  b_y = NULL;
  m35 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m35);
  c_y = NULL;
  m35 = mxCreateCharArray(2, iv143);
  for (i = 0; i < 43; i++) {
    cv182[i] = cv183[i];
  }

  emlrtInitCharArrayR2013a(sp, 43, m35, cv182);
  emlrtAssign(&c_y, m35);
  d_y = NULL;
  m35 = mxCreateNumericMatrix(1, 1, mxINT16_CLASS, mxREAL);
  *(int16_T *)mxGetData(m35) = varargin_1;
  emlrtAssign(&d_y, m35);
  e_y = NULL;
  m35 = mxCreateDoubleScalar(varargin_2);
  emlrtAssign(&e_y, m35);
  st.site = &ew_emlrtRSI;
  return c_emlrt_marshallIn(&st, c_feval(&st, y, b_y, c_y, d_y, e_y, &n_emlrtMCI),
    "feval");
}

static real_T u_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv201[2] = { 1, 7 };

  const mxArray *m43;
  char_T cv249[7];
  int32_T i;
  static const char_T cv250[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv202[2] = { 1, 32 };

  char_T cv251[32];
  static const char_T cv252[32] = { 'M', 'A', 'C', '|', ' ', 'T', 'r', 'a', 'n',
    's', 'm', 'i', 't', 't', 'i', 'n', 'g', ' ', 'A', 'C', 'K', ' ', 'f', 'o',
    'r', ' ', 'd', 'u', 'p', 'e', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m43 = mxCreateCharArray(2, iv201);
  for (i = 0; i < 7; i++) {
    cv249[i] = cv250[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m43, cv249);
  emlrtAssign(&y, m43);
  b_y = NULL;
  m43 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m43);
  c_y = NULL;
  m43 = mxCreateCharArray(2, iv202);
  for (i = 0; i < 32; i++) {
    cv251[i] = cv252[i];
  }

  emlrtInitCharArrayR2013a(sp, 32, m43, cv251);
  emlrtAssign(&c_y, m43);
  st.site = &ew_emlrtRSI;
  return c_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, &n_emlrtMCI), "feval");
}

void b_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ol_emlrtRSI;
  c_fprintf(&st);
}

void d_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ol_emlrtRSI;
  e_fprintf(&st);
}

void f_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ol_emlrtRSI;
  g_fprintf(&st);
}

void h_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ol_emlrtRSI;
  i_fprintf(&st);
}

void j_fprintf(const emlrtStack *sp, const char_T formatSpec_data[76], const
               int32_T formatSpec_size[2])
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &wu_emlrtRSI;
  k_fprintf(&st, formatSpec_data, formatSpec_size);
}

void l_fprintf(const emlrtStack *sp, const char_T formatSpec_data[77], const
               int32_T formatSpec_size[2])
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &wu_emlrtRSI;
  m_fprintf(&st, formatSpec_data, formatSpec_size);
}

void n_fprintf(const emlrtStack *sp, int16_T formatSpec)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &wu_emlrtRSI;
  o_fprintf(&st, formatSpec);
}

void p_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ol_emlrtRSI;
  q_fprintf(&st);
}

void r_fprintf(const emlrtStack *sp, int16_T formatSpec, real_T varargin_1)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &wu_emlrtRSI;
  s_fprintf(&st, formatSpec, varargin_1);
}

void t_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ol_emlrtRSI;
  u_fprintf(&st);
}

/* End of code generation (fprintf.c) */
