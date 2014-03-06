/*
 * testPHYReceive_mexutil.h
 *
 * Code generation for function 'testPHYReceive_mexutil'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

#ifndef __TESTPHYRECEIVE_MEXUTIL_H__
#define __TESTPHYRECEIVE_MEXUTIL_H__
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
extern void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
extern const mxArray *b_message(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
extern const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const mxArray *c, const mxArray *d, emlrtMCInfo *location);
extern const mxArray *message(const emlrtStack *sp, const mxArray *b, const mxArray *c, emlrtMCInfo *location);
extern const mxArray *sdruroot(const emlrtStack *sp, emlrtMCInfo *location);
extern void setupsdru(const emlrtStack *sp, const mxArray *b, const mxArray *c, emlrtMCInfo *location);
#endif
/* End of code generation (testPHYReceive_mexutil.h) */
