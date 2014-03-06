/*
 * testPHYTransmit_mexutil.h
 *
 * Code generation for function 'testPHYTransmit_mexutil'
 *
 * C source code generated on: Thu Feb 27 11:47:47 2014
 *
 */

#ifndef __TESTPHYTRANSMIT_MEXUTIL_H__
#define __TESTPHYTRANSMIT_MEXUTIL_H__
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
#include "testPHYTransmit_types.h"

/* Function Declarations */
extern const mxArray *b_message(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
extern void c_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
extern const mxArray *message(const emlrtStack *sp, const mxArray *b, const mxArray *c, emlrtMCInfo *location);
extern const mxArray *sdruroot(const emlrtStack *sp, emlrtMCInfo *location);
extern void setupsdru(const emlrtStack *sp, const mxArray *b, const mxArray *c, emlrtMCInfo *location);
#endif
/* End of code generation (testPHYTransmit_mexutil.h) */
