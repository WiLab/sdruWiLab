/*
 * angle.c
 *
 * Code generation for function 'angle'
 *
 * C source code generated on: Thu Mar  6 21:20:56 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACRouter.h"
#include "angle.h"
#include <stdio.h>

/* Function Definitions */
real_T angle(const creal_T x)
{
  return muDoubleScalarAtan2(x.im, x.re);
}

/* End of code generation (angle.c) */
