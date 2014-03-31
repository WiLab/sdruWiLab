/*
 * generateOFDMSignal_TX2.h
 *
 * Code generation for function 'generateOFDMSignal_TX2'
 *
 * C source code generated on: Thu Mar  6 22:22:38 2014
 *
 */

#ifndef __GENERATEOFDMSIGNAL_TX2_H__
#define __GENERATEOFDMSIGNAL_TX2_H__
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
extern void b_generateOFDMSignal_TX2(testMACTransmitterStackData *SD, const emlrtStack *sp, real_T originNode, OFDMDemodulator_2 *iobj_0, OFDMDemodulator_3 *iobj_1, OFDMDemodulator_3 **hPreambleDemod, OFDMDemodulator_2 **hDataDemod, creal_T r[38400], d_struct_T *tx);
extern void c_generateOFDMSignal_TX2(testMACTransmitterStackData *SD, const emlrtStack *sp, real_T originNode, real_T destNode, OFDMDemodulator_2 *iobj_0, OFDMDemodulator_3 *iobj_1, OFDMDemodulator_3 **hPreambleDemod, OFDMDemodulator_2 **hDataDemod, creal_T r[38400], d_struct_T *tx);
extern void generateOFDMSignal_TX2(testMACTransmitterStackData *SD, const emlrtStack *sp, OFDMDemodulator_2 *iobj_0, OFDMDemodulator_3 *iobj_1, OFDMDemodulator_3 **hPreambleDemod, OFDMDemodulator_2 **hDataDemod, creal_T r[38400], d_struct_T *tx);
#endif
/* End of code generation (generateOFDMSignal_TX2.h) */
