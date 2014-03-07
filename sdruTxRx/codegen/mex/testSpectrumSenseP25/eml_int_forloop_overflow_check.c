/*
 * eml_int_forloop_overflow_check.c
 *
 * Code generation for function 'eml_int_forloop_overflow_check'
 *
 * C source code generated on: Thu Mar  6 23:19:55 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testSpectrumSenseP25.h"
#include "eml_int_forloop_overflow_check.h"
#include "testSpectrumSenseP25_mexutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtMCInfo e_emlrtMCI = { 52, 9, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo f_emlrtMCI = { 51, 15, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo ar_emlrtRSI = { 51, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo br_emlrtRSI = { 52, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

/* Function Definitions */
void check_forloop_overflow_error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv44[2] = { 1, 34 };

  const mxArray *m5;
  char_T cv48[34];
  int32_T i;
  static const char_T cv49[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *b_y;
  static const int32_T iv45[2] = { 1, 23 };

  char_T cv50[23];
  static const char_T cv51[23] = { 'c', 'o', 'd', 'e', 'r', '.', 'i', 'n', 't',
    'e', 'r', 'n', 'a', 'l', '.', 'i', 'n', 'd', 'e', 'x', 'I', 'n', 't' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  y = NULL;
  m5 = mxCreateCharArray(2, iv44);
  for (i = 0; i < 34; i++) {
    cv48[i] = cv49[i];
  }

  emlrtInitCharArrayR2013a(sp, 34, m5, cv48);
  emlrtAssign(&y, m5);
  b_y = NULL;
  m5 = mxCreateCharArray(2, iv45);
  for (i = 0; i < 23; i++) {
    cv50[i] = cv51[i];
  }

  emlrtInitCharArrayR2013a(sp, 23, m5, cv50);
  emlrtAssign(&b_y, m5);
  st.site = &ar_emlrtRSI;
  b_st.site = &br_emlrtRSI;
  b_error(&st, message(&b_st, y, b_y, &e_emlrtMCI), &f_emlrtMCI);
}

/* End of code generation (eml_int_forloop_overflow_check.c) */
