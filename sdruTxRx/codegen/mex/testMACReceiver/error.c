/*
 * error.c
 *
 * Code generation for function 'error'
 *
 * C source code generated on: Thu Mar  6 18:47:06 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "error.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtMCInfo s_emlrtMCI = { 16, 1, "error",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/error.m" };

static emlrtRSInfo lv_emlrtRSI = { 16, "error",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/error.m" };

/* Function Declarations */
static void d_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);

/* Function Definitions */
static void d_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", TRUE, location);
}

void b_error(const emlrtStack *sp, const char_T varargin_2_data[1024], const
             int32_T varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv184[2] = { 1, 41 };

  const mxArray *m41;
  char_T cv226[41];
  int32_T i;
  static const char_T cv227[41] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't', 'e', 'r', ':', 'T', 'r', 'a',
    'n', 's', 'm', 'i', 't', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f',
    'u', 'l' };

  int32_T u_size[2];
  int32_T i30;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m41 = mxCreateCharArray(2, iv184);
  for (i = 0; i < 41; i++) {
    cv226[i] = cv227[i];
  }

  emlrtInitCharArrayR2013a(sp, 41, m41, cv226);
  emlrtAssign(&y, m41);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i30 = 0; i30 < i; i30++) {
    u_data[i30] = varargin_2_data[i30];
  }

  b_y = NULL;
  m41 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m41, (char_T *)&u_data);
  emlrtAssign(&b_y, m41);
  st.site = &lv_emlrtRSI;
  d_error(&st, y, b_y, &s_emlrtMCI);
}

void error(const emlrtStack *sp, const char_T varargin_2_data[1024], const
           int32_T varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv116[2] = { 1, 37 };

  const mxArray *m22;
  char_T cv132[37];
  int32_T i;
  static const char_T cv133[37] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'R', 'e', 'c', 'e', 'i', 'v', 'e', 'r', ':', 'R', 'e', 'c', 'e', 'i', 'v',
    'e', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f', 'u', 'l' };

  int32_T u_size[2];
  int32_T i15;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m22 = mxCreateCharArray(2, iv116);
  for (i = 0; i < 37; i++) {
    cv132[i] = cv133[i];
  }

  emlrtInitCharArrayR2013a(sp, 37, m22, cv132);
  emlrtAssign(&y, m22);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i15 = 0; i15 < i; i15++) {
    u_data[i15] = varargin_2_data[i15];
  }

  b_y = NULL;
  m22 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m22, (char_T *)&u_data);
  emlrtAssign(&b_y, m22);
  st.site = &lv_emlrtRSI;
  d_error(&st, y, b_y, &s_emlrtMCI);
}

/* End of code generation (error.c) */
