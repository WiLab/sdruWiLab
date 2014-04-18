/*
 * OFDMModulator.h
 *
 * Code generation for function 'OFDMModulator'
 *
 * C source code generated on: Fri Apr 18 15:35:32 2014
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
extern OFDMModulator_4 *OFDMModulator_OFDMModulator(OFDMModulator_4 *object);
extern void OFDMModulator_setupImpl(OFDMModulator_196 *obj);
extern void OFDMModulator_stepImpl(const OFDMModulator_4 *obj, const creal_T dataIn[53], creal_T yout[64]);
#endif
/* End of code generation (OFDMModulator.h) */
