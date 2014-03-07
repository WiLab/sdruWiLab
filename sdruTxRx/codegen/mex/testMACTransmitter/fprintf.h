/*
 * fprintf.h
 *
 * Code generation for function 'fprintf'
 *
 * C source code generated on: Thu Mar  6 19:04:24 2014
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
#include "testMACTransmitter_types.h"

/* Function Declarations */
extern void ab_fprintf(const emlrtStack *sp, int32_T formatSpec);
extern void b_fprintf(const emlrtStack *sp, int16_T formatSpec, real_T varargin_1);
extern void d_fprintf(const emlrtStack *sp);
extern void f_fprintf(const emlrtStack *sp);
extern void h_fprintf(const emlrtStack *sp);
extern void j_fprintf(const emlrtStack *sp, const char_T formatSpec_data[77], const int32_T formatSpec_size[2]);
extern void l_fprintf(const emlrtStack *sp, int16_T formatSpec);
extern void n_fprintf(const emlrtStack *sp);
extern void p_fprintf(const emlrtStack *sp);
extern void r_fprintf(const emlrtStack *sp);
extern void t_fprintf(const emlrtStack *sp);
extern void v_fprintf(const emlrtStack *sp);
extern void x_fprintf(const emlrtStack *sp);
#endif
/* End of code generation (fprintf.h) */
