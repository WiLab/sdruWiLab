/*
 * testSpectrumSenseP25_mexutil.h
 *
 * Code generation for function 'testSpectrumSenseP25_mexutil'
 *
 * C source code generated on: Thu Mar  6 23:19:54 2014
 *
 */

#ifndef __TESTSPECTRUMSENSEP25_MEXUTIL_H__
#define __TESTSPECTRUMSENSEP25_MEXUTIL_H__
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
extern void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
extern const mxArray *b_message(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
extern real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const emlrtMsgIdentifier *msgId);
#ifdef __WATCOMC__
#pragma aux e_emlrt_marshallIn value [8087];
#endif
extern const mxArray *message(const emlrtStack *sp, const mxArray *b, const mxArray *c, emlrtMCInfo *location);
extern const mxArray *sdruroot(const emlrtStack *sp, emlrtMCInfo *location);
extern void setupsdru(const emlrtStack *sp, const mxArray *b, const mxArray *c, emlrtMCInfo *location);
#endif
/* End of code generation (testSpectrumSenseP25_mexutil.h) */
