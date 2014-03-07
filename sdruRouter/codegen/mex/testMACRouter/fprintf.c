/*
 * fprintf.c
 *
 * Code generation for function 'fprintf'
 *
 * C source code generated on: Thu Mar  6 21:20:55 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACRouter.h"
#include "fprintf.h"
#include "OFDMletters2bits.h"
#include "testMACRouter_mexutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo ol_emlrtRSI = { 35, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtRSInfo su_emlrtRSI = { 38, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtMCInfo n_emlrtMCI = { 74, 14, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtRSInfo aw_emlrtRSI = { 74, "fprintf",
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
static real_T g_fprintf(const emlrtStack *sp, const char_T varargin_1_data[77],
  const int32_T varargin_1_size[2]);
static real_T i_fprintf(const emlrtStack *sp, int16_T varargin_1);
static real_T k_fprintf(const emlrtStack *sp);
static real_T m_fprintf(const emlrtStack *sp, int16_T varargin_1, real_T
  varargin_2);
static real_T o_fprintf(const emlrtStack *sp);

/* Function Definitions */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m47;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m47, 4, pArrays, "feval", TRUE, location);
}

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *
  location)
{
  const mxArray *pArrays[5];
  const mxArray *m48;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  return emlrtCallMATLABR2012b(sp, 1, &m48, 5, pArrays, "feval", TRUE, location);
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
  st.site = &aw_emlrtRSI;
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
  static const int32_T iv81[2] = { 1, 26 };

  char_T cv92[26];
  static const char_T cv93[26] = { 'D', 'L', '|', ' ', 'M', 'a', 'x', ' ', 't',
    'i', 'm', 'e', 'o', 'u', 't', 's', ' ', 'r', 'e', 'a', 'c', 'h', 'e', 'd',
    '\\', 'n' };

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
  for (i = 0; i < 26; i++) {
    cv92[i] = cv93[i];
  }

  emlrtInitCharArrayR2013a(sp, 26, m15, cv92);
  emlrtAssign(&c_y, m15);
  st.site = &aw_emlrtRSI;
  return c_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, &n_emlrtMCI), "feval");
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m44;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m44, 3, pArrays, "feval", TRUE, location);
}

static real_T g_fprintf(const emlrtStack *sp, const char_T varargin_1_data[77],
  const int32_T varargin_1_size[2])
{
  const mxArray *y;
  static const int32_T iv130[2] = { 1, 7 };

  const mxArray *m29;
  char_T cv156[7];
  int32_T i;
  static const char_T cv157[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv131[2] = { 1, 22 };

  char_T cv158[22];
  static const char_T cv159[22] = { 'M', 'A', 'C', '|', ' ', 'G', 'o', 't', ' ',
    'm', 'e', 's', 's', 'a', 'g', 'e', ':', ' ', '%', 's', '\\', 'n' };

  int32_T u_size[2];
  int32_T i28;
  char_T u_data[77];
  const mxArray *d_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m29 = mxCreateCharArray(2, iv130);
  for (i = 0; i < 7; i++) {
    cv156[i] = cv157[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m29, cv156);
  emlrtAssign(&y, m29);
  b_y = NULL;
  m29 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m29);
  c_y = NULL;
  m29 = mxCreateCharArray(2, iv131);
  for (i = 0; i < 22; i++) {
    cv158[i] = cv159[i];
  }

  emlrtInitCharArrayR2013a(sp, 22, m29, cv158);
  emlrtAssign(&c_y, m29);
  u_size[0] = 1;
  u_size[1] = varargin_1_size[1];
  i = varargin_1_size[0] * varargin_1_size[1];
  for (i28 = 0; i28 < i; i28++) {
    u_data[i28] = varargin_1_data[i28];
  }

  d_y = NULL;
  m29 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m29, (char_T *)&u_data);
  emlrtAssign(&d_y, m29);
  st.site = &aw_emlrtRSI;
  return c_emlrt_marshallIn(&st, b_feval(&st, y, b_y, c_y, d_y, &n_emlrtMCI),
    "feval");
}

static real_T i_fprintf(const emlrtStack *sp, int16_T varargin_1)
{
  const mxArray *y;
  static const int32_T iv132[2] = { 1, 7 };

  const mxArray *m30;
  char_T cv160[7];
  int32_T i;
  static const char_T cv161[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv133[2] = { 1, 20 };

  char_T cv162[20];
  static const char_T cv163[20] = { 'M', 'A', 'C', '|', ' ', 'F', 'r', 'o', 'm',
    ' ', 'N', 'o', 'd', 'e', ':', ' ', '%', 'd', '\\', 'n' };

  const mxArray *d_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m30 = mxCreateCharArray(2, iv132);
  for (i = 0; i < 7; i++) {
    cv160[i] = cv161[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m30, cv160);
  emlrtAssign(&y, m30);
  b_y = NULL;
  m30 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m30);
  c_y = NULL;
  m30 = mxCreateCharArray(2, iv133);
  for (i = 0; i < 20; i++) {
    cv162[i] = cv163[i];
  }

  emlrtInitCharArrayR2013a(sp, 20, m30, cv162);
  emlrtAssign(&c_y, m30);
  d_y = NULL;
  m30 = mxCreateNumericMatrix(1, 1, mxINT16_CLASS, mxREAL);
  *(int16_T *)mxGetData(m30) = varargin_1;
  emlrtAssign(&d_y, m30);
  st.site = &aw_emlrtRSI;
  return c_emlrt_marshallIn(&st, b_feval(&st, y, b_y, c_y, d_y, &n_emlrtMCI),
    "feval");
}

static real_T k_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv134[2] = { 1, 7 };

  const mxArray *m31;
  char_T cv164[7];
  int32_T i;
  static const char_T cv165[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv135[2] = { 1, 23 };

  char_T cv166[23];
  static const char_T cv167[23] = { 'M', 'A', 'C', '|', ' ', 'T', 'r', 'a', 'n',
    's', 'm', 'i', 't', 't', 'i', 'n', 'g', ' ', 'A', 'C', 'K', '\\', 'n' };

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
  for (i = 0; i < 23; i++) {
    cv166[i] = cv167[i];
  }

  emlrtInitCharArrayR2013a(sp, 23, m31, cv166);
  emlrtAssign(&c_y, m31);
  st.site = &aw_emlrtRSI;
  return c_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, &n_emlrtMCI), "feval");
}

static real_T m_fprintf(const emlrtStack *sp, int16_T varargin_1, real_T
  varargin_2)
{
  const mxArray *y;
  static const int32_T iv136[2] = { 1, 7 };

  const mxArray *m32;
  char_T cv168[7];
  int32_T i;
  static const char_T cv169[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv137[2] = { 1, 43 };

  char_T cv170[43];
  static const char_T cv171[43] = { 'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't',
    'i', 'n', 'g', ' ', 't', 'o', ' ', 'n', 'o', 'd', 'e', ':', ' ', '%', 'd',
    ',', ' ', 'w', 'i', 't', 'h', ' ', 'o', 'f', 'f', 's', 'e', 't', ':', ' ',
    '%', 'f', '\\', 'n' };

  const mxArray *d_y;
  const mxArray *e_y;
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
  for (i = 0; i < 43; i++) {
    cv170[i] = cv171[i];
  }

  emlrtInitCharArrayR2013a(sp, 43, m32, cv170);
  emlrtAssign(&c_y, m32);
  d_y = NULL;
  m32 = mxCreateNumericMatrix(1, 1, mxINT16_CLASS, mxREAL);
  *(int16_T *)mxGetData(m32) = varargin_1;
  emlrtAssign(&d_y, m32);
  e_y = NULL;
  m32 = mxCreateDoubleScalar(varargin_2);
  emlrtAssign(&e_y, m32);
  st.site = &aw_emlrtRSI;
  return c_emlrt_marshallIn(&st, c_feval(&st, y, b_y, c_y, d_y, e_y, &n_emlrtMCI),
    "feval");
}

static real_T o_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv195[2] = { 1, 7 };

  const mxArray *m40;
  char_T cv237[7];
  int32_T i;
  static const char_T cv238[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv196[2] = { 1, 32 };

  char_T cv239[32];
  static const char_T cv240[32] = { 'M', 'A', 'C', '|', ' ', 'T', 'r', 'a', 'n',
    's', 'm', 'i', 't', 't', 'i', 'n', 'g', ' ', 'A', 'C', 'K', ' ', 'f', 'o',
    'r', ' ', 'd', 'u', 'p', 'e', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m40 = mxCreateCharArray(2, iv195);
  for (i = 0; i < 7; i++) {
    cv237[i] = cv238[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m40, cv237);
  emlrtAssign(&y, m40);
  b_y = NULL;
  m40 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m40);
  c_y = NULL;
  m40 = mxCreateCharArray(2, iv196);
  for (i = 0; i < 32; i++) {
    cv239[i] = cv240[i];
  }

  emlrtInitCharArrayR2013a(sp, 32, m40, cv239);
  emlrtAssign(&c_y, m40);
  st.site = &aw_emlrtRSI;
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

void f_fprintf(const emlrtStack *sp, const char_T formatSpec_data[77], const
               int32_T formatSpec_size[2])
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &su_emlrtRSI;
  g_fprintf(&st, formatSpec_data, formatSpec_size);
}

void h_fprintf(const emlrtStack *sp, int16_T formatSpec)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &su_emlrtRSI;
  i_fprintf(&st, formatSpec);
}

void j_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ol_emlrtRSI;
  k_fprintf(&st);
}

void l_fprintf(const emlrtStack *sp, int16_T formatSpec, real_T varargin_1)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &su_emlrtRSI;
  m_fprintf(&st, formatSpec, varargin_1);
}

void n_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ol_emlrtRSI;
  o_fprintf(&st);
}

/* End of code generation (fprintf.c) */
