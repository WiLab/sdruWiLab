/*
 * angle.c
 *
 * Code generation for function 'angle'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "angle.h"

/* Function Definitions */
real_T angle(const creal_T x)
{
  return muDoubleScalarAtan2(x.im, x.re);
}

/* End of code generation (angle.c) */
