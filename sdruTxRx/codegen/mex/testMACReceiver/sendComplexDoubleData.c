/*
 * sendComplexDoubleData.c
 *
 * Code generation for function 'sendComplexDoubleData'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "sendComplexDoubleData.h"
#include "receiveData.h"
#include "testMACReceiver_mexutil.h"
#include "testMACReceiver_data.h"

/* Variable Definitions */
static emlrtRSInfo hk_emlrtRSI = { 231, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo mk_emlrtRSI = { 9, "sendComplexDoubleData",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/sendComplexDoubleData.m"
};

/* Function Definitions */
void sendComplexDoubleData(testMACReceiverStackData *SD, int32_T driverApiH,
  const creal_T data[38400], real_T freq, real_T loOffset, real_T gain, real_T
  interp, uint32_T *underflow, UsrpErrorCapiEnumT *errStat, char_T errStr_data
  [1024], int32_T errStr_size[2])
{
  const mxArray *y;
  static const int32_T iv183[2] = { 1, 6 };

  const mxArray *m38;
  char_T cv220[6];
  int32_T i;
  static const char_T cv221[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  const mxArray *b_y;
  int32_T loop_ub;
  int32_T tmp_data[1024];
  char_T b_errStr_data[1024];
  int32_T i32;

  /*  bug: must pass as top-level arg */
  /*  dportDtype = DataPortDataTypeCapiEnumT.DPortDTypeCDouble; */
  /*    Copyright 2011-2012 The MathWorks, Inc. */
  emlrtPushRtStackR2012b(&mk_emlrtRSI, emlrtRootTLSGlobal);

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2012 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    y = NULL;
    m38 = mxCreateCharArray(2, iv183);
    for (i = 0; i < 6; i++) {
      cv220[i] = cv221[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m38, cv220);
    emlrtAssign(&y, m38);
    setupsdru(sdruroot(&p_emlrtMCI), y, &q_emlrtMCI);
    isSetupsdruCalled = TRUE;
  }

  /*  These sizes must match those in C code. */
  /*  Arbitrary max imposed on ML/SL side */
  /*  function is being called in interpreted mode */
  /*  not being found:  */
  /*  eml_allow_enum_inputs; */
  /* errStat_i = int32(0); */
  for (i = 0; i < 1024; i++) {
    errStr_data[i] = '\x00';
  }

  emlrtPushRtStackR2012b(&hk_emlrtRSI, emlrtRootTLSGlobal);
  memcpy(&SD->u1.f1.data[0], &data[0], 38400U * sizeof(creal_T));
  sendData_c(driverApiH, SD->u1.f1.data, freq, loOffset, gain, interp, underflow,
             errStat, &errStr_data[0]);
  emlrtPopRtStackR2012b(&hk_emlrtRSI, emlrtRootTLSGlobal);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  emlrtPushRtStackR2012b(&pf_emlrtRSI, emlrtRootTLSGlobal);
  i = strlen(&errStr_data[0]);
  emlrtPopRtStackR2012b(&pf_emlrtRSI, emlrtRootTLSGlobal);
  if (i <= 1024) {
  } else {
    emlrtPushRtStackR2012b(&qf_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m38 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m38);
    c_error(b_y, &o_emlrtMCI);
    emlrtPopRtStackR2012b(&qf_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (1 > i) {
    loop_ub = 0;
  } else {
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i, 1, 1024, &y_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  for (i = 0; i < loop_ub; i++) {
    tmp_data[i] = 1 + i;
  }

  for (i = 0; i < loop_ub; i++) {
    i32 = 0;
    while (i32 <= 0) {
      b_errStr_data[i] = errStr_data[tmp_data[i] - 1];
      i32 = 1;
    }
  }

  errStr_size[0] = 1;
  errStr_size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    errStr_data[i] = b_errStr_data[i];
  }

  emlrtPopRtStackR2012b(&mk_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (sendComplexDoubleData.c) */
