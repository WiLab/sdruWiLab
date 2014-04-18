/*
 * equalizeOFDM.h
 *
 * Code generation for function 'equalizeOFDM'
 *
 * C source code generated on: Thu Apr 17 22:51:42 2014
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
#include "testPHYReceive_types.h"

/* Function Declarations */
extern void c_eml_error(void);
extern void check_forloop_overflow_error(void);
extern void equalizeOFDM(testPHYReceiveStackData *SD, const creal_T recv_data[1280], const real_T tx_longPreamble[53], const real_T tx_pilots[48], const real_T c_tx_pilotLocationsWithoutGuard[4], const real_T tx_dataSubcarrierIndexies_data[48], const int32_T tx_dataSubcarrierIndexies_size[2], const struct_T *estimate, OFDMDemodulator_1 *hPreambleDemod, OFDMDemodulator *hDataDemod, creal_T R[576], emxArray_creal_T *Rraw, struct_T *b_estimate);
#endif
/* End of code generation (equalizeOFDM.h) */
