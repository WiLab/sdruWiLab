/*
 * mean.h
 *
 * Code generation for function 'mean'
 *
 * C source code generated on: Thu Mar  6 21:20:55 2014
 *
 */

#ifndef __MEAN_H__
#define __MEAN_H__
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
#include "testMACRouter_types.h"

/* Function Declarations */
extern real_T b_mean(const real_T x_data[1]);
#ifdef __WATCOMC__
#pragma aux b_mean value [8087];
#endif
extern void c_mean(const real_T x[106], real_T y[53]);
extern void d_mean(const creal_T x[106], creal_T y[53]);
extern real_T mean(const real_T x[5120]);
#ifdef __WATCOMC__
#pragma aux mean value [8087];
#endif
#endif
/* End of code generation (mean.h) */
