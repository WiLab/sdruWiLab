/*
 * error.c
 *
 * Code generation for function 'error'
 *
 * C source code generated on: Thu Mar  6 21:20:55 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACRouter.h"
#include "error.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtMCInfo s_emlrtMCI = { 16, 1, "error",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/error.m" };

static emlrtRSInfo qv_emlrtRSI = { 16, "error",
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
  static const int32_T iv178[2] = { 1, 41 };

  const mxArray *m38;
  char_T cv214[41];
  int32_T i;
  static const char_T cv215[41] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't', 'e', 'r', ':', 'T', 'r', 'a',
    'n', 's', 'm', 'i', 't', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f',
    'u', 'l' };

  int32_T u_size[2];
  int32_T i29;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m38 = mxCreateCharArray(2, iv178);
  for (i = 0; i < 41; i++) {
    cv214[i] = cv215[i];
  }

  emlrtInitCharArrayR2013a(sp, 41, m38, cv214);
  emlrtAssign(&y, m38);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i29 = 0; i29 < i; i29++) {
    u_data[i29] = varargin_2_data[i29];
  }

  b_y = NULL;
  m38 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m38, (char_T *)&u_data);
  emlrtAssign(&b_y, m38);
  st.site = &qv_emlrtRSI;
  d_error(&st, y, b_y, &s_emlrtMCI);
}

void error(const emlrtStack *sp, const char_T varargin_2_data[1024], const
           int32_T varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv112[2] = { 1, 37 };

  const mxArray *m20;
  char_T cv124[37];
  int32_T i;
  static const char_T cv125[37] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
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
  m20 = mxCreateCharArray(2, iv112);
  for (i = 0; i < 37; i++) {
    cv124[i] = cv125[i];
  }

  emlrtInitCharArrayR2013a(sp, 37, m20, cv124);
  emlrtAssign(&y, m20);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i15 = 0; i15 < i; i15++) {
    u_data[i15] = varargin_2_data[i15];
  }

  b_y = NULL;
  m20 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m20, (char_T *)&u_data);
  emlrtAssign(&b_y, m20);
  st.site = &qv_emlrtRSI;
  d_error(&st, y, b_y, &s_emlrtMCI);
}

/* End of code generation (error.c) */
