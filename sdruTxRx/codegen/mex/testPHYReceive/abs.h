/*
 * abs.h
 *
 * Code generation for function 'abs'
 *
 * C source code generated on: Thu Apr  3 19:36:37 2014
 *
 */

#ifndef __ABS_H__
#define __ABS_H__
/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "testPHYReceive_types.h"

/* Function Declarations */
extern void b_abs(const creal_T x_data[1231], const int32_T x_size[1], real_T y_data[1231], int32_T y_size[1]);
extern void c_abs(const creal_T x[106], real_T y[106]);
#endif
/* End of code generation (abs.h) */
