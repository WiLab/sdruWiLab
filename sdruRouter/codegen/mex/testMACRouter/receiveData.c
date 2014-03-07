/*
 * receiveData.c
 *
 * Code generation for function 'receiveData'
 *
 * C source code generated on: Thu Mar  6 21:20:55 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACRouter.h"
#include "receiveData.h"
#include "sendComplexDoubleData.h"
#include "SystemCore.h"
#include "testMACRouter_mexutil.h"
#include "testMACRouter_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo ln_emlrtRSI = { 7, "receiveData",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/receiveData.m" };

/* Function Definitions */
void receiveData(const emlrtStack *sp, int32_T driverApiH, real_T freq, real_T
                 loOffset, real_T gain, real_T decim, cint16_T data[46336],
                 uint32_T *dataLength, uint32_T *overflow, UsrpErrorCapiEnumT
                 *errStat, char_T errStr_data[1024], int32_T errStr_size[2])
{
  const mxArray *y;
  static const int32_T iv111[2] = { 1, 6 };

  const mxArray *m19;
  char_T cv122[6];
  int32_T i;
  static const char_T cv123[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  const mxArray *b_y;
  int32_T loop_ub;
  char_T b_errStr_data[1024];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*    Copyright 2011-2012 The MathWorks, Inc. */
  st.site = &ln_emlrtRSI;

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2013 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    y = NULL;
    m19 = mxCreateCharArray(2, iv111);
    for (i = 0; i < 6; i++) {
      cv122[i] = cv123[i];
    }

    emlrtInitCharArrayR2013a(&st, 6, m19, cv122);
    emlrtAssign(&y, m19);
    b_st.site = &pv_emlrtRSI;
    setupsdru(&b_st, sdruroot(&b_st, &p_emlrtMCI), y, &q_emlrtMCI);
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

  /*  46336 represents 0.00185344 seconds at 25Msps.  1 ms seems to be a decent */
  /*  time interval to interact with the IP stack on a default glnxa64 machine. */
  /*  32768 seems to be the max for UHD(TM) so we may want to change to that. */
  receiveData_c(driverApiH, freq, loOffset, gain, decim, data, dataLength,
                overflow, errStat, &errStr_data[0]);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  i = strlen(&errStr_data[0]);
  if (i <= 1024) {
  } else {
    b_y = NULL;
    m19 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m19);
    b_st.site = &iv_emlrtRSI;
    c_error(&b_st, b_y, &o_emlrtMCI);
  }

  if (1 > i) {
    loop_ub = 0;
  } else {
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i, 1, 1024, &x_emlrtBCI, &st);
  }

  for (i = 0; i < loop_ub; i++) {
    b_errStr_data[i] = errStr_data[i];
  }

  errStr_size[0] = 1;
  errStr_size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    errStr_data[i] = b_errStr_data[i];
  }
}

/* End of code generation (receiveData.c) */
