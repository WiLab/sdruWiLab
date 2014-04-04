/*
 * testMACReceiver_mexutil.h
 *
 * Code generation for function 'testMACReceiver_mexutil'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

#ifndef __TESTMACRECEIVER_MEXUTIL_H__
#define __TESTMACRECEIVER_MEXUTIL_H__
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
#include "testMACReceiver_types.h"

/* Function Declarations */
extern const mxArray *b_message(const mxArray *b, emlrtMCInfo *location);
extern const mxArray *b_rand(const mxArray *b, const mxArray *c, emlrtMCInfo *location);
extern real_T c_emlrt_marshallIn(const mxArray *b_str2double, const char_T *identifier);
#ifdef __WATCOMC__
#pragma aux c_emlrt_marshallIn value [8087];
#endif
extern void c_error(const mxArray *b, emlrtMCInfo *location);
extern const mxArray *c_message(const mxArray *b, const mxArray *c, const mxArray *d, emlrtMCInfo *location);
extern void e_emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier, real_T y[13]);
extern real_T emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier);
#ifdef __WATCOMC__
#pragma aux emlrt_marshallIn value [8087];
#endif
extern void g_emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier, real_T y[10]);
extern real_T k_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier *msgId);
#ifdef __WATCOMC__
#pragma aux k_emlrt_marshallIn value [8087];
#endif
extern const mxArray *message(const mxArray *b, const mxArray *c, emlrtMCInfo *location);
extern const mxArray *sdruroot(emlrtMCInfo *location);
extern void setupsdru(const mxArray *b, const mxArray *c, emlrtMCInfo *location);
extern const mxArray *str2double(const mxArray *b, emlrtMCInfo *location);
#endif
/* End of code generation (testMACReceiver_mexutil.h) */
