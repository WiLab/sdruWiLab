/*
 * eml_error.c
 *
 * Code generation for function 'eml_error'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "eml_error.h"

/* Variable Definitions */
static emlrtRTEInfo xb_emlrtRTEI = { 20, 5, "eml_error",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_error.m" };

/* Function Definitions */
void b_eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &xb_emlrtRTEI,
    "Coder:toolbox:eml_setop_unsortedB", 0);
}

void c_eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &xb_emlrtRTEI,
    "Coder:toolbox:reshape_emptyReshapeLimit", 0);
}

void eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &xb_emlrtRTEI,
    "Coder:toolbox:eml_setop_unsortedA", 0);
}

/* End of code generation (eml_error.c) */
