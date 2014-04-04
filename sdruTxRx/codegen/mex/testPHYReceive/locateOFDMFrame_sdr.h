/*
 * locateOFDMFrame_sdr.h
 *
 * Code generation for function 'locateOFDMFrame_sdr'
 *
 * C source code generated on: Thu Apr  3 19:36:38 2014
 *
 */

#ifndef __LOCATEOFDMFRAME_SDR_H__
#define __LOCATEOFDMFRAME_SDR_H__
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
extern void locateShortpreamble(const real_T M_data[1224], real_T *preambleEstimatedLocation, real_T *numPeaks);
#endif
/* End of code generation (locateOFDMFrame_sdr.h) */
