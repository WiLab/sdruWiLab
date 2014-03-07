/*
 * PHYTransmit.h
 *
 * Code generation for function 'PHYTransmit'
 *
 * C source code generated on: Thu Mar  6 18:47:07 2014
 *
 */

#ifndef __PHYTRANSMIT_H__
#define __PHYTRANSMIT_H__
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
extern void PHYTransmit(testMACReceiverStackData *SD, const emlrtStack *sp, comm_SDRuTransmitter *ObjSDRuTransmitter, comm_SDRuReceiver *ObjSDRuReceiver, real_T originNodeID, real_T destNodeID);
#endif
/* End of code generation (PHYTransmit.h) */
