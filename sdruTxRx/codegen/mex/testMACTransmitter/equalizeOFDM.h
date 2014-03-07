/*
 * equalizeOFDM.h
 *
 * Code generation for function 'equalizeOFDM'
 *
 * C source code generated on: Thu Mar  6 19:04:24 2014
 *
 */

#ifndef __EQUALIZEOFDM_H__
#define __EQUALIZEOFDM_H__
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
extern void equalizeOFDM(testMACTransmitterStackData *SD, const emlrtStack *sp, const creal_T recv_data[1280], const real_T tx_longPreamble[53], const real_T tx_pilots[48], const real_T c_tx_pilotLocationsWithoutGuard[4], const real_T tx_dataSubcarrierIndexies_data[48], const int32_T tx_dataSubcarrierIndexies_size[2], const c_struct_T *estimate, OFDMDemodulator_1 *hPreambleDemod, OFDMDemodulator_1 *hDataDemod, creal_T R[576], emxArray_creal_T *Rraw, c_struct_T *b_estimate);
#endif
/* End of code generation (equalizeOFDM.h) */
