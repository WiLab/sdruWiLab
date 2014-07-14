/*
 * OFDMPHYBase.h
 *
 * Code generation for function 'OFDMPHYBase'
 *
 * C source code generated on: Thu Jul  3 10:46:48 2014
 *
 */

#ifndef __OFDMPHYBASE_H__
#define __OFDMPHYBASE_H__
/* Include files */
#include <float.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_defines.h"
#include "rt_nonfinite.h"

#include "rtwtypes.h"
#include "PHYReceiverFun_types.h"

/* Function Declarations */
#ifdef __cplusplus
extern "C" {
#endif
extern void OFDMPHYBase_freqCorrectOFDM(const b_PHYReceiver_167 *obj, const emxArray_creal_T *rFrame, emxArray_creal_T *rFreqShifted);
extern void OFDMPHYBase_locateShortPreamble(const real_T M[105], real_T *preambleEstimatedLocation, real_T *numPeaks);
#ifdef __cplusplus
}
#endif
#endif
/* End of code generation (OFDMPHYBase.h) */
