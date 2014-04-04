/*
 * SDRuReceiver.h
 *
 * Code generation for function 'SDRuReceiver'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

#ifndef __SDRURECEIVER_H__
#define __SDRURECEIVER_H__
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
extern comm_SDRuReceiver *SDRuReceiver_SDRuReceiver(comm_SDRuReceiver *obj);
extern void SDRuReceiver_setupImplLocal(comm_SDRuReceiver *obj, UsrpErrorCapiEnumT *deviceStatus, char_T errMsg_data[1024], int32_T errMsg_size[2]);
extern void SDRuReceiver_stepImpl(testMACReceiverStackData *SD, const comm_SDRuReceiver *obj, creal_T y[5120]);
extern void b_SDRuReceiver_stepImpl(testMACReceiverStackData *SD, const comm_SDRuReceiver *obj);
#endif
/* End of code generation (SDRuReceiver.h) */
