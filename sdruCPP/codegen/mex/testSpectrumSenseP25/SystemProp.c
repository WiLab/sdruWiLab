/*
 * SystemProp.c
 *
 * Code generation for function 'SystemProp'
 *
 * C source code generated on: Thu Mar  6 23:19:55 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testSpectrumSenseP25.h"
#include "SystemProp.h"
#include "testSpectrumSenseP25_emxutil.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRTEInfo m_emlrtRTEI = { 1, 13, "SystemProp",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

/* Function Definitions */
void c_SystemProp_matlabCodegenSetAn(OFDMModulator_1 *obj)
{
  obj->isInitialized = TRUE;
}

void d_SystemProp_matlabCodegenSetAn(OFDMModulator_1 *obj, const real_T value
  [768])
{
  int32_T i4;
  for (i4 = 0; i4 < 768; i4++) {
    obj->pFullGrid[i4] = value[i4];
  }
}

void e_SystemProp_matlabCodegenSetAn(const emlrtStack *sp, OFDMModulator_1 *obj,
  const real_T value_data[768], const int32_T value_size[1])
{
  int32_T i5;
  int32_T loop_ub;
  i5 = obj->pDataLinearIndices->size[0];
  obj->pDataLinearIndices->size[0] = value_size[0];
  emxEnsureCapacity(sp, (emxArray__common *)obj->pDataLinearIndices, i5,
                    (int32_T)sizeof(real_T), &m_emlrtRTEI);
  loop_ub = value_size[0];
  for (i5 = 0; i5 < loop_ub; i5++) {
    obj->pDataLinearIndices->data[i5] = value_data[i5];
  }
}

void f_SystemProp_matlabCodegenSetAn(comm_AGC *obj, real_T value)
{
  obj->Gain = value;
}

/* End of code generation (SystemProp.c) */
