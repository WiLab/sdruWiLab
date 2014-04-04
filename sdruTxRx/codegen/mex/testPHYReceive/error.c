/*
 * error.c
 *
 * Code generation for function 'error'
 *
 * C source code generated on: Thu Apr  3 19:36:38 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "error.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo wf_emlrtRSI = { 16, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

static emlrtMCInfo s_emlrtMCI = { 16, 1, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

/* Function Declarations */
static void c_error(const mxArray *b, const mxArray *c, emlrtMCInfo *location);

/* Function Definitions */
static void c_error(const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 2, pArrays, "error", TRUE,
                        location);
}

void error(const char_T varargin_2_data[1024], const int32_T varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv104[2] = { 1, 37 };

  const mxArray *m20;
  char_T cv109[37];
  int32_T i;
  static const char_T cv110[37] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'R', 'e', 'c', 'e', 'i', 'v', 'e', 'r', ':', 'R', 'e', 'c', 'e', 'i', 'v',
    'e', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f', 'u', 'l' };

  int32_T u_size[2];
  int32_T i17;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtPushRtStackR2012b(&wf_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m20 = mxCreateCharArray(2, iv104);
  for (i = 0; i < 37; i++) {
    cv109[i] = cv110[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 37, m20, cv109);
  emlrtAssign(&y, m20);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i17 = 0; i17 < i; i17++) {
    u_data[i17] = varargin_2_data[i17];
  }

  b_y = NULL;
  m20 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, u_size[1], m20, (char_T *)&u_data);
  emlrtAssign(&b_y, m20);
  c_error(y, b_y, &s_emlrtMCI);
  emlrtPopRtStackR2012b(&wf_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (error.c) */
