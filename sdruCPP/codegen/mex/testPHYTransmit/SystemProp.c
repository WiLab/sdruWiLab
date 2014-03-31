/*
 * SystemProp.c
 *
 * Code generation for function 'SystemProp'
 *
 * C source code generated on: Thu Feb 27 11:47:47 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "SystemProp.h"
#include "testPHYTransmit_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo k_emlrtRTEI = { 1, 13, "SystemProp",
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
  int32_T i3;
  for (i3 = 0; i3 < 768; i3++) {
    obj->pFullGrid[i3] = value[i3];
  }
}

void e_SystemProp_matlabCodegenSetAn(const emlrtStack *sp, OFDMModulator_1 *obj,
  const real_T value_data[768], const int32_T value_size[1])
{
  int32_T i4;
  int32_T loop_ub;
  i4 = obj->pDataLinearIndices->size[0];
  obj->pDataLinearIndices->size[0] = value_size[0];
  emxEnsureCapacity(sp, (emxArray__common *)obj->pDataLinearIndices, i4,
                    (int32_T)sizeof(real_T), &k_emlrtRTEI);
  loop_ub = value_size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    obj->pDataLinearIndices->data[i4] = value_data[i4];
  }
}

/* End of code generation (SystemProp.c) */
