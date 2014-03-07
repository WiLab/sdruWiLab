/*
 * fprintf.h
 *
 * Code generation for function 'fprintf'
 *
 * C source code generated on: Thu Mar  6 21:20:55 2014
 *
 */

#ifndef __FPRINTF_H__
#define __FPRINTF_H__
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
extern void b_fprintf(const emlrtStack *sp);
extern void d_fprintf(const emlrtStack *sp);
extern void f_fprintf(const emlrtStack *sp, const char_T formatSpec_data[77], const int32_T formatSpec_size[2]);
extern void h_fprintf(const emlrtStack *sp, int16_T formatSpec);
extern void j_fprintf(const emlrtStack *sp);
extern void l_fprintf(const emlrtStack *sp, int16_T formatSpec, real_T varargin_1);
extern void n_fprintf(const emlrtStack *sp);
#endif
/* End of code generation (fprintf.h) */
