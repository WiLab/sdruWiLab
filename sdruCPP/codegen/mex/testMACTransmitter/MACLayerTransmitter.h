/*
 * MACLayerTransmitter.h
 *
 * Code generation for function 'MACLayerTransmitter'
 *
 * C source code generated on: Thu Mar  6 22:22:40 2014
 *
 */

#ifndef __MACLAYERTRANSMITTER_H__
#define __MACLAYERTRANSMITTER_H__
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
extern void MACLayerTransmitter(testMACTransmitterStackData *SD, const emlrtStack *sp, comm_AGC *ObjAGC, comm_SDRuReceiver *ObjSDRuReceiver, comm_SDRuTransmitter *ObjSDRuTransmitter, commcodegen_CRCDetector *ObjDetect, OFDMDemodulator_1 *ObjPreambleDemod, OFDMDemodulator_1 *ObjDataDemod, const c_struct_T *estimate, const e_struct_T *tx, const real_T messageBits_data[563], const char_T previousMessage_data[77], const int32_T previousMessage_size[2], char_T b_previousMessage_data[77], int32_T b_previousMessage_size[2], boolean_T *msgStatus);
#endif
/* End of code generation (MACLayerTransmitter.h) */
