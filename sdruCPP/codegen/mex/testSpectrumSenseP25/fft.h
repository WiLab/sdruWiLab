/*
 * fft.h
 *
 * Code generation for function 'fft'
 *
 * C source code generated on: Thu Mar  6 23:19:56 2014
 *
 */

#ifndef __FFT_H__
#define __FFT_H__
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
#include "testSpectrumSenseP25_types.h"

/* Function Declarations */
extern void fft(const emlrtStack *sp, const emxArray_creal_T *x, emxArray_creal_T *y);
#endif
/* End of code generation (fft.h) */
