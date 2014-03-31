/*
 * error.c
 *
 * Code generation for function 'error'
 *
 * C source code generated on: Thu Mar  6 23:19:55 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testSpectrumSenseP25.h"
#include "error.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtMCInfo r_emlrtMCI = { 16, 1, "error",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/error.m" };

static emlrtRSInfo hr_emlrtRSI = { 16, "error",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/lang/error.m" };

/* Function Declarations */
static void c_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location);

/* Function Definitions */
static void c_error(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                    emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "error", TRUE, location);
}

void error(const emlrtStack *sp, const char_T varargin_2_data[1024], const
           int32_T varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv103[2] = { 1, 37 };

  const mxArray *m18;
  char_T cv117[37];
  int32_T i;
  static const char_T cv118[37] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'R', 'e', 'c', 'e', 'i', 'v', 'e', 'r', ':', 'R', 'e', 'c', 'e', 'i', 'v',
    'e', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f', 'u', 'l' };

  int32_T u_size[2];
  int32_T i16;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m18 = mxCreateCharArray(2, iv103);
  for (i = 0; i < 37; i++) {
    cv117[i] = cv118[i];
  }

  emlrtInitCharArrayR2013a(sp, 37, m18, cv117);
  emlrtAssign(&y, m18);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i16 = 0; i16 < i; i16++) {
    u_data[i16] = varargin_2_data[i16];
  }

  b_y = NULL;
  m18 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(sp, u_size[1], m18, (char_T *)&u_data);
  emlrtAssign(&b_y, m18);
  st.site = &hr_emlrtRSI;
  c_error(&st, y, b_y, &r_emlrtMCI);
}

/* End of code generation (error.c) */
