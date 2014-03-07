/*
 * commP25sscaGen.h
 *
 * Code generation for function 'commP25sscaGen'
 *
 * C source code generated on: Thu Mar  6 23:19:56 2014
 *
 */

#ifndef __COMMP25SSCAGEN_H__
#define __COMMP25SSCAGEN_H__
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
extern void commP25sscaGen(const emlrtStack *sp, creal_T input_data[1], int32_T input_size[1], real_T dalpha, real_T Sx_data[195], int32_T Sx_size[2], emxArray_real_T *alphao);
#endif
/* End of code generation (commP25sscaGen.h) */
