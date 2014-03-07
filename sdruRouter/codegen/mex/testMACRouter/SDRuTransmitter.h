/*
 * SDRuTransmitter.h
 *
 * Code generation for function 'SDRuTransmitter'
 *
 * C source code generated on: Thu Mar  6 21:20:55 2014
 *
 */

#ifndef __SDRUTRANSMITTER_H__
#define __SDRUTRANSMITTER_H__
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
#include "testMACRouter_types.h"

/* Function Declarations */
extern comm_SDRuTransmitter *SDRuTransmitter_SDRuTransmitter(const emlrtStack *sp, comm_SDRuTransmitter *obj);
extern void SDRuTransmitter_setupImplLocal(const emlrtStack *sp, comm_SDRuTransmitter *obj, UsrpErrorCapiEnumT *errStatus, char_T errMsg_data[1024], int32_T errMsg_size[2]);
extern void SDRuTransmitter_stepImpl(testMACRouterStackData *SD, const emlrtStack *sp, const comm_SDRuTransmitter *obj, const creal_T x[38400]);
#endif
/* End of code generation (SDRuTransmitter.h) */
