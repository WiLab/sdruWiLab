/*
 * SystemProp.c
 *
 * Code generation for function 'SystemProp'
 *
 * C source code generated on: Fri Apr 18 15:35:32 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "SystemProp.h"
#include "testPHYTransmit_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo o_emlrtRTEI = { 1, 13, "SystemProp",
  "/opt/MATLAB/R2013a/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"
};

/* Function Definitions */
void c_SystemProp_matlabCodegenSetAn(OFDMModulator_196 *obj, const real_T value
  [768])
{
  int32_T i4;
  for (i4 = 0; i4 < 768; i4++) {
    obj->pFullGrid[i4] = value[i4];
  }
}

void d_SystemProp_matlabCodegenSetAn(OFDMModulator_196 *obj, const real_T
  value_data[768], const int32_T value_size[1])
{
  int32_T i5;
  int32_T loop_ub;
  i5 = obj->pDataLinearIndices->size[0];
  obj->pDataLinearIndices->size[0] = value_size[0];
  emxEnsureCapacity((emxArray__common *)obj->pDataLinearIndices, i5, (int32_T)
                    sizeof(real_T), &o_emlrtRTEI);
  loop_ub = value_size[0];
  for (i5 = 0; i5 < loop_ub; i5++) {
    obj->pDataLinearIndices->data[i5] = value_data[i5];
  }
}

/* End of code generation (SystemProp.c) */
