/*
 * eml_int_forloop_overflow_check.c
 *
 * Code generation for function 'eml_int_forloop_overflow_check'
 *
 * C source code generated on: Thu Feb 27 11:47:47 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "eml_int_forloop_overflow_check.h"
#include "SystemCore.h"
#include "testPHYTransmit_mexutil.h"

/* Variable Definitions */
static emlrtMCInfo e_emlrtMCI = { 52, 9, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo f_emlrtMCI = { 51, 15, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo vm_emlrtRSI = { 51, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo ym_emlrtRSI = { 52, "eml_int_forloop_overflow_check",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

/* Function Definitions */
void check_forloop_overflow_error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv21[2] = { 1, 34 };

  const mxArray *m4;
  char_T cv27[34];
  int32_T i;
  static const char_T cv28[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *b_y;
  static const int32_T iv22[2] = { 1, 23 };

  char_T cv29[23];
  static const char_T cv30[23] = { 'c', 'o', 'd', 'e', 'r', '.', 'i', 'n', 't',
    'e', 'r', 'n', 'a', 'l', '.', 'i', 'n', 'd', 'e', 'x', 'I', 'n', 't' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  y = NULL;
  m4 = mxCreateCharArray(2, iv21);
  for (i = 0; i < 34; i++) {
    cv27[i] = cv28[i];
  }

  emlrtInitCharArrayR2013a(sp, 34, m4, cv27);
  emlrtAssign(&y, m4);
  b_y = NULL;
  m4 = mxCreateCharArray(2, iv22);
  for (i = 0; i < 23; i++) {
    cv29[i] = cv30[i];
  }

  emlrtInitCharArrayR2013a(sp, 23, m4, cv29);
  emlrtAssign(&b_y, m4);
  st.site = &vm_emlrtRSI;
  b_st.site = &ym_emlrtRSI;
  c_error(&st, message(&b_st, y, b_y, &e_emlrtMCI), &f_emlrtMCI);
}

/* End of code generation (eml_int_forloop_overflow_check.c) */
