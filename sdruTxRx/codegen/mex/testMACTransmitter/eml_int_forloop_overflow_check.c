/*
 * eml_int_forloop_overflow_check.c
 *
 * Code generation for function 'eml_int_forloop_overflow_check'
 *
 * C source code generated on: Thu Mar  6 19:04:23 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "eml_int_forloop_overflow_check.h"
#include "testMACTransmitter_mexutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtMCInfo e_emlrtMCI = { 52, 9, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo f_emlrtMCI = { 51, 15, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo dw_emlrtRSI = { 51, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo iw_emlrtRSI = { 52, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

/* Function Definitions */
void check_forloop_overflow_error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv41[2] = { 1, 34 };

  const mxArray *m5;
  char_T cv46[34];
  int32_T i;
  static const char_T cv47[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *b_y;
  static const int32_T iv42[2] = { 1, 23 };

  char_T cv48[23];
  static const char_T cv49[23] = { 'c', 'o', 'd', 'e', 'r', '.', 'i', 'n', 't',
    'e', 'r', 'n', 'a', 'l', '.', 'i', 'n', 'd', 'e', 'x', 'I', 'n', 't' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  y = NULL;
  m5 = mxCreateCharArray(2, iv41);
  for (i = 0; i < 34; i++) {
    cv46[i] = cv47[i];
  }

  emlrtInitCharArrayR2013a(sp, 34, m5, cv46);
  emlrtAssign(&y, m5);
  b_y = NULL;
  m5 = mxCreateCharArray(2, iv42);
  for (i = 0; i < 23; i++) {
    cv48[i] = cv49[i];
  }

  emlrtInitCharArrayR2013a(sp, 23, m5, cv48);
  emlrtAssign(&b_y, m5);
  st.site = &dw_emlrtRSI;
  b_st.site = &iw_emlrtRSI;
  c_error(&st, message(&b_st, y, b_y, &e_emlrtMCI), &f_emlrtMCI);
}

/* End of code generation (eml_int_forloop_overflow_check.c) */
