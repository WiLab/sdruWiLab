/*
 * CreateTXRX.h
 *
 * Code generation for function 'CreateTXRX'
 *
 * C source code generated on: Thu Mar  6 23:19:54 2014
 *
 */

#ifndef __CREATETXRX_H__
#define __CREATETXRX_H__
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
extern void CreateTXRX(testSpectrumSenseP25StackData *SD, const emlrtStack *sp, comm_SDRuTransmitter *iobj_0, OFDMDemodulator_1 *iobj_1, OFDMDemodulator *iobj_2, comm_AGC *iobj_3, comm_SDRuReceiver *iobj_4, commcodegen_CRCDetector *iobj_5, comm_AGC **ObjAGC, comm_SDRuReceiver **ObjSDRuReceiver, comm_SDRuTransmitter **ObjSDRuTransmitter, commcodegen_CRCDetector **ObjDetect, OFDMDemodulator_1 **ObjPreambleDemod, OFDMDemodulator **ObjDataDemod, c_struct_T *tx, real_T *timeoutDuration, real_T messageBits_data[563], int32_T messageBits_size[2]);
#endif
/* End of code generation (CreateTXRX.h) */
