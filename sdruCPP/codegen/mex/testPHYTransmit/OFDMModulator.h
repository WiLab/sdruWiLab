/*
 * OFDMModulator.h
 *
 * Code generation for function 'OFDMModulator'
 *
 * C source code generated on: Thu Feb 27 11:47:47 2014
 *
 */

#ifndef __OFDMMODULATOR_H__
#define __OFDMMODULATOR_H__
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
extern OFDMModulator *OFDMModulator_OFDMModulator(OFDMModulator *object);
extern void OFDMModulator_stepImpl(const emlrtStack *sp, const OFDMModulator *obj, const creal_T dataIn[53], creal_T yout[64]);
extern OFDMModulator_1 *b_OFDMModulator_OFDMModulator(const emlrtStack *sp, OFDMModulator_1 *object);
#endif
/* End of code generation (OFDMModulator.h) */
