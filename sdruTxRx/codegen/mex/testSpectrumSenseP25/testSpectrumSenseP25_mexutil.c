/*
 * testSpectrumSenseP25_mexutil.c
 *
 * Code generation for function 'testSpectrumSenseP25_mexutil'
 *
 * C source code generated on: Thu Mar  6 23:19:54 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testSpectrumSenseP25.h"
#include "testSpectrumSenseP25_mexutil.h"
#include <stdio.h>

/* Function Definitions */
void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", TRUE, location);
}

const mxArray *b_message(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
  *location)
{
  const mxArray *pArray;
  const mxArray *m23;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m23, 1, &pArray, "message", TRUE,
    location);
}

real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", FALSE, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

const mxArray *message(const emlrtStack *sp, const mxArray *b, const mxArray *c,
  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m21;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m21, 2, pArrays, "message", TRUE,
    location);
}

const mxArray *sdruroot(const emlrtStack *sp, emlrtMCInfo *location)
{
  const mxArray *m24;
  return emlrtCallMATLABR2012b(sp, 1, &m24, 0, NULL, "sdruroot", TRUE, location);
}

void setupsdru(const emlrtStack *sp, const mxArray *b, const mxArray *c,
               emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "setupsdru", TRUE, location);
}

/* End of code generation (testSpectrumSenseP25_mexutil.c) */
