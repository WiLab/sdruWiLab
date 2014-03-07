/*
 * testMACTransmitter_mexutil.h
 *
 * Code generation for function 'testMACTransmitter_mexutil'
 *
 * C source code generated on: Thu Mar  6 19:04:22 2014
 *
 */

#ifndef __TESTMACTRANSMITTER_MEXUTIL_H__
#define __TESTMACTRANSMITTER_MEXUTIL_H__
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
extern const mxArray *b_message(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
extern real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *d_feval, const char_T *identifier);
#ifdef __WATCOMC__
#pragma aux c_emlrt_marshallIn value [8087];
#endif
extern void c_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
extern const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const mxArray *c, const mxArray *d, emlrtMCInfo *location);
extern real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const emlrtMsgIdentifier *parentId);
#ifdef __WATCOMC__
#pragma aux d_emlrt_marshallIn value [8087];
#endif
extern real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const emlrtMsgIdentifier *msgId);
#ifdef __WATCOMC__
#pragma aux g_emlrt_marshallIn value [8087];
#endif
extern const mxArray *message(const emlrtStack *sp, const mxArray *b, const mxArray *c, emlrtMCInfo *location);
extern const mxArray *sdruroot(const emlrtStack *sp, emlrtMCInfo *location);
extern void setupsdru(const emlrtStack *sp, const mxArray *b, const mxArray *c, emlrtMCInfo *location);
#endif
/* End of code generation (testMACTransmitter_mexutil.h) */
