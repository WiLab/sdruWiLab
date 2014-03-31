/*
 * OFDMDemodulator.h
 *
 * Code generation for function 'OFDMDemodulator'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

#ifndef __OFDMDEMODULATOR_H__
#define __OFDMDEMODULATOR_H__
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
extern void OFDMDemodulator_stepImpl(const emlrtStack *sp, const OFDMDemodulator_1 *obj, const creal_T x[64], emxArray_creal_T *varargout_1);
extern void b_OFDMDemodulator_stepImpl(testPHYReceiveStackData *SD, const emlrtStack *sp, const OFDMDemodulator_1 *obj, const creal_T x[960], emxArray_creal_T *varargout_1, creal_T varargout_2[48]);
#endif
/* End of code generation (OFDMDemodulator.h) */
