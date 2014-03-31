/*
 * eml_error.c
 *
 * Code generation for function 'eml_error'
 *
 * C source code generated on: Thu Mar  6 22:22:39 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "eml_error.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRTEInfo qc_emlrtRTEI = { 20, 5, "eml_error",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_error.m" };

/* Function Definitions */
void b_eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &qc_emlrtRTEI,
    "Coder:toolbox:eml_setop_unsortedB", 0);
}

void c_eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &qc_emlrtRTEI,
    "Coder:toolbox:reshape_emptyReshapeLimit", 0);
}

void eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &qc_emlrtRTEI,
    "Coder:toolbox:eml_setop_unsortedA", 0);
}

/* End of code generation (eml_error.c) */
