/*
 * coarseOFDMFreqEst_sdr.h
 *
 * Code generation for function 'coarseOFDMFreqEst_sdr'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

#ifndef __COARSEOFDMFREQEST_SDR_H__
#define __COARSEOFDMFREQEST_SDR_H__
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
extern void freqCorrectOFDM(const emlrtStack *sp, b_struct_T *estimate, const creal_T rFrame_data[1280], creal_T rFreqShifted_data[1280], int32_T rFreqShifted_size[1]);
#endif
/* End of code generation (coarseOFDMFreqEst_sdr.h) */
