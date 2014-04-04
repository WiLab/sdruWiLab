/*
 * generateOFDMSignal.h
 *
 * Code generation for function 'generateOFDMSignal'
 *
 * C source code generated on: Sat Mar 29 15:48:37 2014
 *
 */

#ifndef __GENERATEOFDMSIGNAL_H__
#define __GENERATEOFDMSIGNAL_H__
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
extern void generateOFDMSignal(OFDMDemodulator *iobj_0, OFDMDemodulator_1 *iobj_1, OFDMDemodulator_1 **hPreambleDemod, OFDMDemodulator **hDataDemod, creal_T r[25600], struct_T *tx);
#endif
/* End of code generation (generateOFDMSignal.h) */
