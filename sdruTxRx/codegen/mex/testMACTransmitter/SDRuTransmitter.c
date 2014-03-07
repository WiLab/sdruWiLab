/*
 * SDRuTransmitter.c
 *
 * Code generation for function 'SDRuTransmitter'
 *
 * C source code generated on: Thu Mar  6 22:22:39 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "SDRuTransmitter.h"
#include "sendComplexDoubleData.h"
#include "error.h"
#include "checkIPAddressFormat.h"
#include "testMACTransmitter_mexutil.h"
#include "testMACTransmitter_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo bk_emlrtRSI = { 1, "SDRuTransmitter",
  "/Users/travis/Documents/sdru/+comm/SDRuTransmitter.p" };

/* Function Definitions */
comm_SDRuTransmitter *SDRuTransmitter_SDRuTransmitter(const emlrtStack *sp,
  comm_SDRuTransmitter *obj)
{
  comm_SDRuTransmitter *b_obj;
  comm_SDRuTransmitter *c_obj;
  int32_T k;
  real_T varargin_1[10];
  int32_T i5;
  static const char_T cv70[5] = { 'S', 'D', 'R', 'u', '_' };

  real_T d1;
  boolean_T flag;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  b_obj = obj;
  st.site = &bk_emlrtRSI;
  c_obj = b_obj;
  c_obj->LocalOscillatorOffset = 0.0;
  c_obj->pSubDevice = TxId;
  b_st.site = &ck_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  d_st.site = &fb_emlrtRSI;
  e_st.site = &gb_emlrtRSI;
  for (k = 0; k < 4; k++) {
    c_obj->tunablePropertyChanged[k] = FALSE;
  }

  f_st.site = &gb_emlrtRSI;
  d_st.site = &fb_emlrtRSI;
  e_st.site = &gb_emlrtRSI;
  b_st.site = &ck_emlrtRSI;
  b_st.site = &ck_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  b_st.site = &ck_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  emlrtRandu(varargin_1, 10);
  for (k = 0; k < 10; k++) {
    c_st.site = &y_emlrtRSI;
    c_st.site = &y_emlrtRSI;
    d_st.site = &s_emlrtRSI;
    varargin_1[k] = 48.0 + muDoubleScalarFloor(varargin_1[k] * 10.0);
  }

  b_st.site = &ck_emlrtRSI;
  for (k = 0; k < 10; k++) {
    i5 = (int32_T)varargin_1[k];
    emlrtDynamicBoundsCheckFastR2012b(i5, 0, 255, &emlrtBCI, &b_st);
  }

  b_st.site = &ck_emlrtRSI;
  for (k = 0; k < 5; k++) {
    c_obj->ObjectID[k] = cv70[k];
  }

  for (k = 0; k < 10; k++) {
    d1 = muDoubleScalarFloor(varargin_1[k]);
    if (muDoubleScalarIsNaN(d1) || muDoubleScalarIsInf(d1)) {
      d1 = 0.0;
    } else {
      d1 = muDoubleScalarRem(d1, 256.0);
    }

    if (d1 < 0.0) {
      c_obj->ObjectID[k + 5] = (int8_T)-(int8_T)(uint8_T)-d1;
    } else {
      c_obj->ObjectID[k + 5] = (int8_T)(uint8_T)d1;
    }
  }

  c_st.site = &gb_emlrtRSI;
  b_st.site = &ck_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  d_st.site = &gb_emlrtRSI;
  e_st.site = &gb_emlrtRSI;
  f_st.site = &hg_emlrtRSI;
  g_st.site = &gb_emlrtRSI;
  h_st.site = &ck_emlrtRSI;
  checkIPAddressFormat(&h_st);
  g_st.site = &gb_emlrtRSI;
  d_st.site = &gb_emlrtRSI;
  e_st.site = &rb_emlrtRSI;
  f_st.site = &gb_emlrtRSI;
  c_obj->CenterFrequency = 2.24E+9;
  g_st.site = &ck_emlrtRSI;
  f_st.site = &gb_emlrtRSI;
  if (c_obj->isInitialized && (!c_obj->isReleased)) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }

  if (flag) {
    c_obj->TunablePropsChanged = TRUE;
    c_obj->tunablePropertyChanged[1] = TRUE;
  }

  e_st.site = &rb_emlrtRSI;
  f_st.site = &gb_emlrtRSI;
  c_obj->InterpolationFactor = 20.0;
  g_st.site = &bk_emlrtRSI;
  f_st.site = &gb_emlrtRSI;
  if (c_obj->isInitialized && (!c_obj->isReleased)) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }

  if (flag) {
    c_obj->TunablePropsChanged = TRUE;
    c_obj->tunablePropertyChanged[0] = TRUE;
  }

  e_st.site = &rb_emlrtRSI;
  f_st.site = &gb_emlrtRSI;
  c_obj->Gain = 25.0;
  g_st.site = &ck_emlrtRSI;
  f_st.site = &gb_emlrtRSI;
  if (c_obj->isInitialized && (!c_obj->isReleased)) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }

  if (flag) {
    c_obj->TunablePropsChanged = TRUE;
    c_obj->tunablePropertyChanged[3] = TRUE;
  }

  return b_obj;
}

void SDRuTransmitter_setupImplLocal(const emlrtStack *sp, comm_SDRuTransmitter
  *obj, UsrpErrorCapiEnumT *errStatus, char_T errMsg_data[1024], int32_T
  errMsg_size[2])
{
  BoardIdCapiEnumT boardId;
  uint8_T requester[15];
  int32_T i;
  const mxArray *y;
  static const int32_T iv172[2] = { 1, 6 };

  const mxArray *m29;
  char_T cv199[6];
  static const char_T cv200[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  static const uint8_T addr_null[13] = { 49U, 57U, 50U, 46U, 49U, 54U, 56U, 46U,
    49U, 48U, 46U, 50U, 0U };

  char * addr_c;
  uint8_T req_null[16];
  char * req_c;
  int32_T driverApiH;
  const mxArray *b_y;
  int32_T loop_ub;
  char_T b_errMsg_data[1024];
  comm_SDRuTransmitter *b_obj;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  st.site = &bk_emlrtRSI;
  b_st.site = &bk_emlrtRSI;
  c_st.site = &gb_emlrtRSI;
  st.site = &bk_emlrtRSI;
  boardId = obj->pSubDevice;
  for (i = 0; i < 15; i++) {
    requester[i] = (uint8_T)obj->ObjectID[i];
  }

  /*    Copyright 2011-2012 The MathWorks, Inc. */
  b_st.site = &tm_emlrtRSI;

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2013 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    y = NULL;
    m29 = mxCreateCharArray(2, iv172);
    for (i = 0; i < 6; i++) {
      cv199[i] = cv200[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 6, m29, cv199);
    emlrtAssign(&y, m29);
    c_st.site = &ybb_emlrtRSI;
    setupsdru(&c_st, sdruroot(&c_st, &o_emlrtMCI), y, &p_emlrtMCI);
    isSetupsdruCalled = TRUE;
  }

  /*  These sizes must match those in C code. */
  /*  Arbitrary max imposed on ML/SL side */
  /*  function is being called in interpreted mode */
  /*  not being found:  */
  /*  eml_allow_enum_inputs; */
  /* errStat_i = int32(0); */
  for (i = 0; i < 1024; i++) {
    errMsg_data[i] = '\x00';
  }

  /*  varargin   1      2         3          4              5       6         7 */
  /*            addr, boardId, requester, frameLength, dportType, buffMode, buffSize */
  /*  varargout  1         2         3 */
  /*            driverH, errStat, errMsg */
  addr_c = (char *)(addr_null);
  for (i = 0; i < 15; i++) {
    req_null[i] = requester[i];
  }

  req_null[15] = 0;
  req_c = (char *)(req_null);
  openDataConnection_c(addr_c, boardId, req_c, 38400U, DPortDTypeCDouble, FALSE,
                       0U, &driverApiH, errStatus, &errMsg_data[0]);

  /*  Tell coder that addr_null & req_null must be alive and separate throughout the call to cmd_c. */
  (void)(addr_null);
  (void)(req_null);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  i = strlen(&errMsg_data[0]);
  if (i <= 1024) {
  } else {
    b_y = NULL;
    m29 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m29);
    c_st.site = &mbb_emlrtRSI;
    c_error(&c_st, b_y, &n_emlrtMCI);
  }

  if (1 > i) {
    loop_ub = 0;
  } else {
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i, 1, 1024, &p_emlrtBCI, &b_st);
  }

  for (i = 0; i < loop_ub; i++) {
    b_errMsg_data[i] = errMsg_data[i];
  }

  errMsg_size[0] = 1;
  errMsg_size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    errMsg_data[i] = b_errMsg_data[i];
  }

  st.site = &bk_emlrtRSI;
  b_obj = obj;
  b_obj->pDriverHandle = driverApiH;
  b_st.site = &gb_emlrtRSI;
}

void SDRuTransmitter_stepImpl(testMACTransmitterStackData *SD, const emlrtStack *
  sp, const comm_SDRuTransmitter *obj, const creal_T x[38400])
{
  real_T fc;
  real_T loOffset;
  real_T gain;
  real_T interp;
  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT errStatus;
  uint32_T underrun;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  fc = obj->CenterFrequency;
  loOffset = obj->LocalOscillatorOffset;
  gain = obj->Gain;
  interp = obj->InterpolationFactor;
  st.site = &bk_emlrtRSI;
  sendComplexDoubleData(SD, &st, obj->pDriverHandle, x, fc, loOffset, gain,
                        interp, &underrun, &errStatus, errMsg_data, errMsg_size);
  if (errStatus != UsrpDriverSuccess) {
    st.site = &bk_emlrtRSI;
    b_error(&st, errMsg_data, errMsg_size);
  }
}

/* End of code generation (SDRuTransmitter.c) */
