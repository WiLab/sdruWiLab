/*
 * colon.c
 *
 * Code generation for function 'colon'
 *
 * C source code generated on: Thu Apr  3 19:36:37 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "colon.h"
#include <stdio.h>

/* Function Definitions */
void b_float_colon_length(int32_T *n, real_T *anew, real_T *bnew, boolean_T
  *n_too_large)
{
  *anew = 0.0;
  *bnew = 0.0002558;
  *n_too_large = FALSE;
  *n = 1280;
}

void float_colon_length(int32_T *n, real_T *anew, real_T *bnew, boolean_T
  *n_too_large)
{
  *anew = -1230.0;
  *bnew = 1230.0;
  *n_too_large = FALSE;
  *n = 2461;
}

/* End of code generation (colon.c) */
