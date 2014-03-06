/*
 * testPHYReceive_mexutil.c
 *
 * Code generation for function 'testPHYReceive_mexutil'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "testPHYReceive_mexutil.h"

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
  const mxArray *m29;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m29, 1, &pArray, "message", TRUE,
    location);
}

const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const mxArray
  *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m31;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m31, 3, pArrays, "message", TRUE,
    location);
}

const mxArray *message(const emlrtStack *sp, const mxArray *b, const mxArray *c,
  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m27;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m27, 2, pArrays, "message", TRUE,
    location);
}

const mxArray *sdruroot(const emlrtStack *sp, emlrtMCInfo *location)
{
  const mxArray *m30;
  return emlrtCallMATLABR2012b(sp, 1, &m30, 0, NULL, "sdruroot", TRUE, location);
}

void setupsdru(const emlrtStack *sp, const mxArray *b, const mxArray *c,
               emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "setupsdru", TRUE, location);
}

/* End of code generation (testPHYReceive_mexutil.c) */
