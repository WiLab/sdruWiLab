/*
 * error.c
 *
 * Code generation for function 'error'
 *
 * C source code generated on: Sat Mar 29 15:48:37 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo xf_emlrtRSI = { 16, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

static emlrtMCInfo s_emlrtMCI = { 16, 1, "error",
  "/opt/MATLAB/R2013a/toolbox/eml/lib/matlab/lang/error.m" };

/* Function Declarations */
static void d_error(const mxArray *b, const mxArray *c, emlrtMCInfo *location);

/* Function Definitions */
static void d_error(const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 2, pArrays, "error", TRUE,
                        location);
}

void b_error(const char_T varargin_2_data[1024], const int32_T varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv132[2] = { 1, 37 };

  const mxArray *m28;
  char_T cv150[37];
  int32_T i;
  static const char_T cv151[37] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'R', 'e', 'c', 'e', 'i', 'v', 'e', 'r', ':', 'R', 'e', 'c', 'e', 'i', 'v',
    'e', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f', 'u', 'l' };

  int32_T u_size[2];
  int32_T i25;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtPushRtStackR2012b(&xf_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m28 = mxCreateCharArray(2, iv132);
  for (i = 0; i < 37; i++) {
    cv150[i] = cv151[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 37, m28, cv150);
  emlrtAssign(&y, m28);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i25 = 0; i25 < i; i25++) {
    u_data[i25] = varargin_2_data[i25];
  }

  b_y = NULL;
  m28 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, u_size[1], m28, (char_T *)&u_data);
  emlrtAssign(&b_y, m28);
  d_error(y, b_y, &s_emlrtMCI);
  emlrtPopRtStackR2012b(&xf_emlrtRSI, emlrtRootTLSGlobal);
}

void error(const char_T varargin_2_data[1024], const int32_T varargin_2_size[2])
{
  const mxArray *y;
  static const int32_T iv117[2] = { 1, 41 };

  const mxArray *m24;
  char_T cv126[41];
  int32_T i;
  static const char_T cv127[41] = { 's', 'd', 'r', 'u', ':', 'S', 'D', 'R', 'u',
    'T', 'r', 'a', 'n', 's', 'm', 'i', 't', 't', 'e', 'r', ':', 'T', 'r', 'a',
    'n', 's', 'm', 'i', 't', 'U', 'n', 's', 'u', 'c', 'c', 'e', 's', 's', 'f',
    'u', 'l' };

  int32_T u_size[2];
  int32_T i21;
  char_T u_data[1024];
  const mxArray *b_y;
  emlrtPushRtStackR2012b(&xf_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m24 = mxCreateCharArray(2, iv117);
  for (i = 0; i < 41; i++) {
    cv126[i] = cv127[i];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 41, m24, cv126);
  emlrtAssign(&y, m24);
  u_size[0] = 1;
  u_size[1] = varargin_2_size[1];
  i = varargin_2_size[0] * varargin_2_size[1];
  for (i21 = 0; i21 < i; i21++) {
    u_data[i21] = varargin_2_data[i21];
  }

  b_y = NULL;
  m24 = mxCreateCharArray(2, u_size);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, u_size[1], m24, (char_T *)&u_data);
  emlrtAssign(&b_y, m24);
  d_error(y, b_y, &s_emlrtMCI);
  emlrtPopRtStackR2012b(&xf_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (error.c) */
