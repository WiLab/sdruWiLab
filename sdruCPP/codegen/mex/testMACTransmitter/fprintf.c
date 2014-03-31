/*
 * fprintf.c
 *
 * Code generation for function 'fprintf'
 *
 * C source code generated on: Thu Mar  6 22:22:40 2014
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
static emlrtRSInfo dt_emlrtRSI = { 35, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtRSInfo et_emlrtRSI = { 38, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtMCInfo cb_emlrtMCI = { 74, 14, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

static emlrtRSInfo ecb_emlrtRSI = { 74, "fprintf",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/fprintf.m" };

/* Function Declarations */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *
  location);
static real_T bb_fprintf(const emlrtStack *sp);
static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location);
static real_T c_fprintf(const emlrtStack *sp);
static real_T db_fprintf(const emlrtStack *sp);
static real_T e_fprintf(const emlrtStack *sp, int16_T varargin_1, int16_T
  varargin_2);
static real_T fb_fprintf(const emlrtStack *sp, int32_T varargin_1);
static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static real_T g_fprintf(const emlrtStack *sp, int16_T varargin_1, real_T
  varargin_2);
static real_T i_fprintf(const emlrtStack *sp);
static real_T k_fprintf(const emlrtStack *sp);
static real_T m_fprintf(const emlrtStack *sp);
static real_T o_fprintf(const emlrtStack *sp, const char_T varargin_1_data[77],
  const int32_T varargin_1_size[2]);
static real_T q_fprintf(const emlrtStack *sp, int16_T varargin_1);
static real_T s_fprintf(const emlrtStack *sp);
static real_T u_fprintf(const emlrtStack *sp);
static real_T w_fprintf(const emlrtStack *sp);
static real_T y_fprintf(const emlrtStack *sp);

/* Function Definitions */
static const mxArray *b_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, const mxArray *f, emlrtMCInfo *
  location)
{
  const mxArray *pArrays[5];
  const mxArray *m61;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  pArrays[4] = f;
  return emlrtCallMATLABR2012b(sp, 1, &m61, 5, pArrays, "feval", TRUE, location);
}

static real_T bb_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv274[2] = { 1, 7 };

  const mxArray *m52;
  char_T cv331[7];
  int32_T i;
  static const char_T cv332[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv275[2] = { 1, 25 };

  char_T cv333[25];
  static const char_T cv334[25] = { 'M', 'A', 'C', '|', ' ', 'N', 'o', ' ', 'A',
    'C', 'K', ' ', 'r', 'e', 'c', 'e', 'i', 'v', 'e', 'd', ' ', ':', '(', '\\',
    'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m52 = mxCreateCharArray(2, iv274);
  for (i = 0; i < 7; i++) {
    cv331[i] = cv332[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m52, cv331);
  emlrtAssign(&y, m52);
  b_y = NULL;
  m52 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m52);
  c_y = NULL;
  m52 = mxCreateCharArray(2, iv275);
  for (i = 0; i < 25; i++) {
    cv333[i] = cv334[i];
  }

  emlrtInitCharArrayR2013a(sp, 25, m52, cv333);
  emlrtAssign(&c_y, m52);
  st.site = &ecb_emlrtRSI;
  return c_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, &cb_emlrtMCI), "feval");
}

static const mxArray *c_feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, const mxArray *e, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m62;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  pArrays[3] = e;
  return emlrtCallMATLABR2012b(sp, 1, &m62, 4, pArrays, "feval", TRUE, location);
}

static real_T c_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv128[2] = { 1, 7 };

  const mxArray *m23;
  char_T cv149[7];
  int32_T i;
  static const char_T cv150[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv129[2] = { 1, 57 };

  char_T cv151[57];
  static const char_T cv152[57] = { 'T', 'h', 'e', 'r', 'e', ' ', 'i', 's', ' ',
    's', 'i', 'g', 'n', 'a', 'l', ' ', 'p', 'r', 'e', 's', 'e', 'n', 't', '.',
    ' ', 'C', 'h', 'e', 'c', 'k', 'i', 'n', 'g', ' ', 'f', 'o', 'r', ' ', 'p',
    'r', 'e', 's', 'e', 'n', 'c', 'e', ' ', 'o', 'f', ' ', 'C', '4', 'F', 'M',
    '.', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m23 = mxCreateCharArray(2, iv128);
  for (i = 0; i < 7; i++) {
    cv149[i] = cv150[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m23, cv149);
  emlrtAssign(&y, m23);
  b_y = NULL;
  m23 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m23);
  c_y = NULL;
  m23 = mxCreateCharArray(2, iv129);
  for (i = 0; i < 57; i++) {
    cv151[i] = cv152[i];
  }

  emlrtInitCharArrayR2013a(sp, 57, m23, cv151);
  emlrtAssign(&c_y, m23);
  st.site = &ecb_emlrtRSI;
  return c_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, &cb_emlrtMCI), "feval");
}

static real_T db_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv276[2] = { 1, 7 };

  const mxArray *m53;
  char_T cv335[7];
  int32_T i;
  static const char_T cv336[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv277[2] = { 1, 56 };

  char_T cv337[56];
  static const char_T cv338[56] = { 'T', 'O', 'P', '|', ' ', 'D', 'O', 'N', 'E',
    ' ', 'I', 't', 'e', 'r', 'a', 't', 'i', 'o', 'n', ':', ' ', 'W', 'a', 'i',
    't', 'i', 'n', 'g', ' ', 's', 'o', 'm', 'e', ' ', 't', 'i', 'm', 'e', ' ',
    'b', 'e', 't', 'w', 'e', 'e', 'n', ' ', 'a', 'c', 't', 'i', 'o', 'n', 's',
    '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m53 = mxCreateCharArray(2, iv276);
  for (i = 0; i < 7; i++) {
    cv335[i] = cv336[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m53, cv335);
  emlrtAssign(&y, m53);
  b_y = NULL;
  m53 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m53);
  c_y = NULL;
  m53 = mxCreateCharArray(2, iv277);
  for (i = 0; i < 56; i++) {
    cv337[i] = cv338[i];
  }

  emlrtInitCharArrayR2013a(sp, 56, m53, cv337);
  emlrtAssign(&c_y, m53);
  st.site = &ecb_emlrtRSI;
  return c_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, &cb_emlrtMCI), "feval");
}

static real_T e_fprintf(const emlrtStack *sp, int16_T varargin_1, int16_T
  varargin_2)
{
  const mxArray *y;
  static const int32_T iv130[2] = { 1, 7 };

  const mxArray *m24;
  char_T cv153[7];
  int32_T i;
  static const char_T cv154[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv131[2] = { 1, 17 };

  char_T cv155[17];
  static const char_T cv156[17] = { 'D', 'e', 'c', 'i', 's', 'i', 'o', 'n', ' ',
    '%', 'd', ':', ' ', '%', 'd', '\\', 'n' };

  const mxArray *d_y;
  const mxArray *e_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m24 = mxCreateCharArray(2, iv130);
  for (i = 0; i < 7; i++) {
    cv153[i] = cv154[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m24, cv153);
  emlrtAssign(&y, m24);
  b_y = NULL;
  m24 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m24);
  c_y = NULL;
  m24 = mxCreateCharArray(2, iv131);
  for (i = 0; i < 17; i++) {
    cv155[i] = cv156[i];
  }

  emlrtInitCharArrayR2013a(sp, 17, m24, cv155);
  emlrtAssign(&c_y, m24);
  d_y = NULL;
  m24 = mxCreateNumericMatrix(1, 1, mxINT16_CLASS, mxREAL);
  *(int16_T *)mxGetData(m24) = varargin_1;
  emlrtAssign(&d_y, m24);
  e_y = NULL;
  m24 = mxCreateNumericMatrix(1, 1, mxINT16_CLASS, mxREAL);
  *(int16_T *)mxGetData(m24) = varargin_2;
  emlrtAssign(&e_y, m24);
  st.site = &ecb_emlrtRSI;
  return c_emlrt_marshallIn(&st, b_feval(&st, y, b_y, c_y, d_y, e_y,
    &cb_emlrtMCI), "feval");
}

static real_T fb_fprintf(const emlrtStack *sp, int32_T varargin_1)
{
  const mxArray *y;
  static const int32_T iv278[2] = { 1, 7 };

  const mxArray *m54;
  char_T cv339[7];
  int32_T i;
  static const char_T cv340[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv279[2] = { 1, 30 };

  char_T cv341[30];
  static const char_T cv342[30] = { 'S', 'u', 'c', 'c', 'e', 's', 's', 'f', 'u',
    'l', ' ', 'T', 'r', 'a', 'n', 's', 'm', 'i', 's', 's', 'i', 'o', 'n', 's',
    ':', ' ', '%', 'd', '\\', 'n' };

  const mxArray *d_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m54 = mxCreateCharArray(2, iv278);
  for (i = 0; i < 7; i++) {
    cv339[i] = cv340[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m54, cv339);
  emlrtAssign(&y, m54);
  b_y = NULL;
  m54 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m54);
  c_y = NULL;
  m54 = mxCreateCharArray(2, iv279);
  for (i = 0; i < 30; i++) {
    cv341[i] = cv342[i];
  }

  emlrtInitCharArrayR2013a(sp, 30, m54, cv341);
  emlrtAssign(&c_y, m54);
  d_y = NULL;
  m54 = mxCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m54) = varargin_1;
  emlrtAssign(&d_y, m54);
  st.site = &ecb_emlrtRSI;
  return c_emlrt_marshallIn(&st, c_feval(&st, y, b_y, c_y, d_y, &cb_emlrtMCI),
    "feval");
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m60;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m60, 3, pArrays, "feval", TRUE, location);
}

static real_T g_fprintf(const emlrtStack *sp, int16_T varargin_1, real_T
  varargin_2)
{
  const mxArray *y;
  static const int32_T iv132[2] = { 1, 7 };

  const mxArray *m25;
  char_T cv157[7];
  int32_T i;
  static const char_T cv158[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv133[2] = { 1, 43 };

  char_T cv159[43];
  static const char_T cv160[43] = { 'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't',
    'i', 'n', 'g', ' ', 't', 'o', ' ', 'n', 'o', 'd', 'e', ':', ' ', '%', 'd',
    ',', ' ', 'w', 'i', 't', 'h', ' ', 'o', 'f', 'f', 's', 'e', 't', ':', ' ',
    '%', 'f', '\\', 'n' };

  const mxArray *d_y;
  const mxArray *e_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m25 = mxCreateCharArray(2, iv132);
  for (i = 0; i < 7; i++) {
    cv157[i] = cv158[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m25, cv157);
  emlrtAssign(&y, m25);
  b_y = NULL;
  m25 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m25);
  c_y = NULL;
  m25 = mxCreateCharArray(2, iv133);
  for (i = 0; i < 43; i++) {
    cv159[i] = cv160[i];
  }

  emlrtInitCharArrayR2013a(sp, 43, m25, cv159);
  emlrtAssign(&c_y, m25);
  d_y = NULL;
  m25 = mxCreateNumericMatrix(1, 1, mxINT16_CLASS, mxREAL);
  *(int16_T *)mxGetData(m25) = varargin_1;
  emlrtAssign(&d_y, m25);
  e_y = NULL;
  m25 = mxCreateDoubleScalar(varargin_2);
  emlrtAssign(&e_y, m25);
  st.site = &ecb_emlrtRSI;
  return c_emlrt_marshallIn(&st, b_feval(&st, y, b_y, c_y, d_y, e_y,
    &cb_emlrtMCI), "feval");
}

static real_T i_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv191[2] = { 1, 7 };

  const mxArray *m33;
  char_T cv226[7];
  int32_T i;
  static const char_T cv227[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv192[2] = { 1, 45 };

  char_T cv228[45];
  static const char_T cv229[45] = { 'M', 'A', 'C', '|', ' ', 'T', 'r', 'a', 'n',
    's', 'm', 'i', 's', 's', 'i', 'o', 'n', ' ', 'f', 'i', 'n', 'i', 's', 'h',
    'e', 'd', ',', ' ', 'w', 'a', 'i', 't', 'i', 'n', 'g', ' ', 'f', 'o', 'r',
    ' ', 'A', 'C', 'K', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m33 = mxCreateCharArray(2, iv191);
  for (i = 0; i < 7; i++) {
    cv226[i] = cv227[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m33, cv226);
  emlrtAssign(&y, m33);
  b_y = NULL;
  m33 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m33);
  c_y = NULL;
  m33 = mxCreateCharArray(2, iv192);
  for (i = 0; i < 45; i++) {
    cv228[i] = cv229[i];
  }

  emlrtInitCharArrayR2013a(sp, 45, m33, cv228);
  emlrtAssign(&c_y, m33);
  st.site = &ecb_emlrtRSI;
  return c_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, &cb_emlrtMCI), "feval");
}

static real_T k_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv193[2] = { 1, 7 };

  const mxArray *m34;
  char_T cv230[7];
  int32_T i;
  static const char_T cv231[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv194[2] = { 1, 23 };

  char_T cv232[23];
  static const char_T cv233[23] = { 'D', 'L', '|', ' ', 'D', 'u', 'p', 'l', 'i',
    'c', 'a', 't', 'e', ' ', 'M', 'e', 's', 's', 'a', 'g', 'e', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m34 = mxCreateCharArray(2, iv193);
  for (i = 0; i < 7; i++) {
    cv230[i] = cv231[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m34, cv230);
  emlrtAssign(&y, m34);
  b_y = NULL;
  m34 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m34);
  c_y = NULL;
  m34 = mxCreateCharArray(2, iv194);
  for (i = 0; i < 23; i++) {
    cv232[i] = cv233[i];
  }

  emlrtInitCharArrayR2013a(sp, 23, m34, cv232);
  emlrtAssign(&c_y, m34);
  st.site = &ecb_emlrtRSI;
  return c_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, &cb_emlrtMCI), "feval");
}

static real_T m_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv195[2] = { 1, 7 };

  const mxArray *m35;
  char_T cv234[7];
  int32_T i;
  static const char_T cv235[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv196[2] = { 1, 26 };

  char_T cv236[26];
  static const char_T cv237[26] = { 'D', 'L', '|', ' ', 'M', 'a', 'x', ' ', 't',
    'i', 'm', 'e', 'o', 'u', 't', 's', ' ', 'r', 'e', 'a', 'c', 'h', 'e', 'd',
    '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m35 = mxCreateCharArray(2, iv195);
  for (i = 0; i < 7; i++) {
    cv234[i] = cv235[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m35, cv234);
  emlrtAssign(&y, m35);
  b_y = NULL;
  m35 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m35);
  c_y = NULL;
  m35 = mxCreateCharArray(2, iv196);
  for (i = 0; i < 26; i++) {
    cv236[i] = cv237[i];
  }

  emlrtInitCharArrayR2013a(sp, 26, m35, cv236);
  emlrtAssign(&c_y, m35);
  st.site = &ecb_emlrtRSI;
  return c_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, &cb_emlrtMCI), "feval");
}

static real_T o_fprintf(const emlrtStack *sp, const char_T varargin_1_data[77],
  const int32_T varargin_1_size[2])
{
  const mxArray *y;
  static const int32_T iv240[2] = { 1, 7 };

  const mxArray *m44;
  char_T cv290[7];
  int32_T i;
  static const char_T cv291[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv241[2] = { 1, 22 };

  char_T cv292[22];
  static const char_T cv293[22] = { 'M', 'A', 'C', '|', ' ', 'G', 'o', 't', ' ',
    'm', 'e', 's', 's', 'a', 'g', 'e', ':', ' ', '%', 's', '\\', 'n' };

  int32_T u_size[2];
  int32_T i34;
  char_T u_data[77];
  const mxArray *d_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m44 = mxCreateCharArray(2, iv240);
  for (i = 0; i < 7; i++) {
    cv290[i] = cv291[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m44, cv290);
  emlrtAssign(&y, m44);
  b_y = NULL;
  m44 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m44);
  c_y = NULL;
  m44 = mxCreateCharArray(2, iv241);
  for (i = 0; i < 22; i++) {
    cv292[i] = cv293[i];
  }

  emlrtInitCharArrayR2013a(sp, 22, m44, cv292);
  emlrtAssign(&c_y, m44);
  u_size[0] = 1;
  u_size[1] = varargin_1_size[1];
  i = varargin_1_size[0] * varargin_1_size[1];
  for (i34 = 0; i34 < i; i34++) {
    u_data[i34] = varargin_1_data[i34];
  }

  d_y = NULL;
  m44 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m44, (char_T *)&u_data);
  emlrtAssign(&d_y, m44);
  st.site = &ecb_emlrtRSI;
  return c_emlrt_marshallIn(&st, c_feval(&st, y, b_y, c_y, d_y, &cb_emlrtMCI),
    "feval");
}

static real_T q_fprintf(const emlrtStack *sp, int16_T varargin_1)
{
  const mxArray *y;
  static const int32_T iv242[2] = { 1, 7 };

  const mxArray *m45;
  char_T cv294[7];
  int32_T i;
  static const char_T cv295[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv243[2] = { 1, 20 };

  char_T cv296[20];
  static const char_T cv297[20] = { 'M', 'A', 'C', '|', ' ', 'F', 'r', 'o', 'm',
    ' ', 'N', 'o', 'd', 'e', ':', ' ', '%', 'd', '\\', 'n' };

  const mxArray *d_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m45 = mxCreateCharArray(2, iv242);
  for (i = 0; i < 7; i++) {
    cv294[i] = cv295[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m45, cv294);
  emlrtAssign(&y, m45);
  b_y = NULL;
  m45 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m45);
  c_y = NULL;
  m45 = mxCreateCharArray(2, iv243);
  for (i = 0; i < 20; i++) {
    cv296[i] = cv297[i];
  }

  emlrtInitCharArrayR2013a(sp, 20, m45, cv296);
  emlrtAssign(&c_y, m45);
  d_y = NULL;
  m45 = mxCreateNumericMatrix(1, 1, mxINT16_CLASS, mxREAL);
  *(int16_T *)mxGetData(m45) = varargin_1;
  emlrtAssign(&d_y, m45);
  st.site = &ecb_emlrtRSI;
  return c_emlrt_marshallIn(&st, c_feval(&st, y, b_y, c_y, d_y, &cb_emlrtMCI),
    "feval");
}

static real_T s_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv244[2] = { 1, 7 };

  const mxArray *m46;
  char_T cv298[7];
  int32_T i;
  static const char_T cv299[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv245[2] = { 1, 32 };

  char_T cv300[32];
  static const char_T cv301[32] = { 'M', 'A', 'C', '|', ' ', 'T', 'r', 'a', 'n',
    's', 'm', 'i', 't', 't', 'i', 'n', 'g', ' ', 'A', 'C', 'K', ' ', 'f', 'o',
    'r', ' ', 'd', 'u', 'p', 'e', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m46 = mxCreateCharArray(2, iv244);
  for (i = 0; i < 7; i++) {
    cv298[i] = cv299[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m46, cv298);
  emlrtAssign(&y, m46);
  b_y = NULL;
  m46 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m46);
  c_y = NULL;
  m46 = mxCreateCharArray(2, iv245);
  for (i = 0; i < 32; i++) {
    cv300[i] = cv301[i];
  }

  emlrtInitCharArrayR2013a(sp, 32, m46, cv300);
  emlrtAssign(&c_y, m46);
  st.site = &ecb_emlrtRSI;
  return c_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, &cb_emlrtMCI), "feval");
}

static real_T u_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv268[2] = { 1, 7 };

  const mxArray *m49;
  char_T cv319[7];
  int32_T i;
  static const char_T cv320[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv269[2] = { 1, 14 };

  char_T cv321[14];
  static const char_T cv322[14] = { 'M', 'A', 'C', '|', ' ', 'G', 'o', 't', ' ',
    'A', 'C', 'K', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m49 = mxCreateCharArray(2, iv268);
  for (i = 0; i < 7; i++) {
    cv319[i] = cv320[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m49, cv319);
  emlrtAssign(&y, m49);
  b_y = NULL;
  m49 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m49);
  c_y = NULL;
  m49 = mxCreateCharArray(2, iv269);
  for (i = 0; i < 14; i++) {
    cv321[i] = cv322[i];
  }

  emlrtInitCharArrayR2013a(sp, 14, m49, cv321);
  emlrtAssign(&c_y, m49);
  st.site = &ecb_emlrtRSI;
  return c_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, &cb_emlrtMCI), "feval");
}

static real_T w_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv270[2] = { 1, 7 };

  const mxArray *m50;
  char_T cv323[7];
  int32_T i;
  static const char_T cv324[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv271[2] = { 1, 29 };

  char_T cv325[29];
  static const char_T cv326[29] = { 'M', 'A', 'C', '|', ' ', 'R', 'e', 't', 'r',
    'a', 'n', 's', 'm', 'i', 't', 't', 'i', 'n', 'g', ' ', 'm', 'e', 's', 's',
    'a', 'g', 'e', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m50 = mxCreateCharArray(2, iv270);
  for (i = 0; i < 7; i++) {
    cv323[i] = cv324[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m50, cv323);
  emlrtAssign(&y, m50);
  b_y = NULL;
  m50 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m50);
  c_y = NULL;
  m50 = mxCreateCharArray(2, iv271);
  for (i = 0; i < 29; i++) {
    cv325[i] = cv326[i];
  }

  emlrtInitCharArrayR2013a(sp, 29, m50, cv325);
  emlrtAssign(&c_y, m50);
  st.site = &ecb_emlrtRSI;
  return c_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, &cb_emlrtMCI), "feval");
}

static real_T y_fprintf(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv272[2] = { 1, 7 };

  const mxArray *m51;
  char_T cv327[7];
  int32_T i;
  static const char_T cv328[7] = { 'f', 'p', 'r', 'i', 'n', 't', 'f' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv273[2] = { 1, 45 };

  char_T cv329[45];
  static const char_T cv330[45] = { '#', '#', '#', '#', '#', '#', '#', '#', '#',
    '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',
    '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',
    '#', '#', '#', '#', '\\', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m51 = mxCreateCharArray(2, iv272);
  for (i = 0; i < 7; i++) {
    cv327[i] = cv328[i];
  }

  emlrtInitCharArrayR2013a(sp, 7, m51, cv327);
  emlrtAssign(&y, m51);
  b_y = NULL;
  m51 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&b_y, m51);
  c_y = NULL;
  m51 = mxCreateCharArray(2, iv273);
  for (i = 0; i < 45; i++) {
    cv329[i] = cv330[i];
  }

  emlrtInitCharArrayR2013a(sp, 45, m51, cv329);
  emlrtAssign(&c_y, m51);
  st.site = &ecb_emlrtRSI;
  return c_emlrt_marshallIn(&st, feval(&st, y, b_y, c_y, &cb_emlrtMCI), "feval");
}

void ab_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dt_emlrtRSI;
  bb_fprintf(&st);
}

real_T b_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dt_emlrtRSI;
  return c_fprintf(&st);
}

void cb_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dt_emlrtRSI;
  db_fprintf(&st);
}

void d_fprintf(const emlrtStack *sp, int16_T formatSpec, int16_T varargin_1)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &et_emlrtRSI;
  e_fprintf(&st, formatSpec, varargin_1);
}

void eb_fprintf(const emlrtStack *sp, int32_T formatSpec)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &et_emlrtRSI;
  fb_fprintf(&st, formatSpec);
}

void f_fprintf(const emlrtStack *sp, int16_T formatSpec, real_T varargin_1)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &et_emlrtRSI;
  g_fprintf(&st, formatSpec, varargin_1);
}

void h_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dt_emlrtRSI;
  i_fprintf(&st);
}

void j_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dt_emlrtRSI;
  k_fprintf(&st);
}

void l_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dt_emlrtRSI;
  m_fprintf(&st);
}

void n_fprintf(const emlrtStack *sp, const char_T formatSpec_data[77], const
               int32_T formatSpec_size[2])
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &et_emlrtRSI;
  o_fprintf(&st, formatSpec_data, formatSpec_size);
}

void p_fprintf(const emlrtStack *sp, int16_T formatSpec)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &et_emlrtRSI;
  q_fprintf(&st, formatSpec);
}

void r_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dt_emlrtRSI;
  s_fprintf(&st);
}

void t_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dt_emlrtRSI;
  u_fprintf(&st);
}

void v_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dt_emlrtRSI;
  w_fprintf(&st);
}

void x_fprintf(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &dt_emlrtRSI;
  y_fprintf(&st);
}

/* End of code generation (fprintf.c) */
