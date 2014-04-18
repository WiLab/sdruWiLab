/*
 * testPHYTransmit_mexutil.h
 *
 * Code generation for function 'testPHYTransmit_mexutil'
 *
 * C source code generated on: Fri Apr 18 16:24:31 2014
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
extern void b_error(const mxArray *b, emlrtMCInfo *location);
extern const mxArray *b_message(const mxArray *b, emlrtMCInfo *location);
extern const mxArray *b_rand(const mxArray *b, const mxArray *c, emlrtMCInfo *location);
extern void e_emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier, real_T y[13]);
extern real_T emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier);
#ifdef __WATCOMC__
#pragma aux emlrt_marshallIn value [8087];
#endif
extern real_T i_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier *msgId);
#ifdef __WATCOMC__
#pragma aux i_emlrt_marshallIn value [8087];
#endif
extern const mxArray *message(const mxArray *b, const mxArray *c, emlrtMCInfo *location);
extern const mxArray *sdruroot(emlrtMCInfo *location);
extern void setupsdru(const mxArray *b, const mxArray *c, emlrtMCInfo *location);
#endif
/* End of code generation (testPHYTransmit_mexutil.h) */
