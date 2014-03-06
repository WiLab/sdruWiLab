/*
 * closeDataConnection.c
 *
 * Code generation for function 'closeDataConnection'
 *
 * C source code generated on: Thu Feb 27 11:47:47 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "closeDataConnection.h"
#include "sendComplexDoubleData.h"
#include "SystemCore.h"
#include "testPHYTransmit_mexutil.h"
#include "testPHYTransmit_data.h"

/* Variable Definitions */
static emlrtRSInfo xl_emlrtRSI = { 6, "closeDataConnection",
  "/Users/travis/Documents/sdru/usrp_uhd_mapi/closeDataConnection.m" };

/* Function Definitions */
void closeDataConnection(const emlrtStack *sp, int32_T driverApiH)
{
  const mxArray *y;
  static const int32_T iv117[2] = { 1, 6 };

  const mxArray *m19;
  char_T cv141[6];
  int32_T i;
  static const char_T cv142[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  char_T errStr_data[1024];
  UsrpErrorCapiEnumT errStat_i;
  const mxArray *b_y;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*    Copyright 2011-2012 The MathWorks, Inc. */
  st.site = &xl_emlrtRSI;

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2013 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    y = NULL;
    m19 = mxCreateCharArray(2, iv117);
    for (i = 0; i < 6; i++) {
      cv141[i] = cv142[i];
    }

    emlrtInitCharArrayR2013a(&st, 6, m19, cv141);
    emlrtAssign(&y, m19);
    b_st.site = &wm_emlrtRSI;
    setupsdru(&b_st, sdruroot(&b_st, &o_emlrtMCI), y, &p_emlrtMCI);
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

  closeDataConnection_c(driverApiH, &errStat_i, &errStr_data[0]);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  i = strlen(&errStr_data[0]);
  if (i <= 1024) {
  } else {
    b_y = NULL;
    m19 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m19);
    b_st.site = &tm_emlrtRSI;
    c_error(&b_st, b_y, &n_emlrtMCI);
  }

  if (1 > i) {
  } else {
    emlrtDynamicBoundsCheckFastR2012b(i, 1, 1024, &o_emlrtBCI, &st);
  }
}

/* End of code generation (closeDataConnection.c) */
