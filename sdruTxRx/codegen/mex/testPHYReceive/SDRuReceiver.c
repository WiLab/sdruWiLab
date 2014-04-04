/*
 * SDRuReceiver.c
 *
 * Code generation for function 'SDRuReceiver'
 *
 * C source code generated on: Thu Apr  3 19:36:37 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "SDRuReceiver.h"
#include "error.h"
#include "receiveData.h"
#include "checkIPAddressFormat.h"
#include "SDRuTransmitter.h"
#include "generateOFDMSignal_TX2.h"
#include "testPHYReceive_mexutil.h"
#include "testPHYReceive_data.h"
#include <stdio.h>

/* Type Definitions */
#include "usrp_uhd_capi.hpp"

/* Variable Definitions */
static emlrtRSInfo oe_emlrtRSI = { 1, "SDRuReceiver",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuReceiver.p" };

static emlrtRSInfo af_emlrtRSI = { 6, "openDataConnection",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/openDataConnection.m"
};

static emlrtRSInfo bf_emlrtRSI = { 138, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo cf_emlrtRSI = { 141, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo df_emlrtRSI = { 146, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo ef_emlrtRSI = { 151, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo ff_emlrtRSI = { 152, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

/* Function Definitions */
comm_SDRuReceiver *SDRuReceiver_SDRuReceiver(comm_SDRuReceiver *obj)
{
  comm_SDRuReceiver *b_obj;
  comm_SDRuReceiver *c_obj;
  int32_T k;
  const mxArray *y;
  const mxArray *m16;
  const mxArray *b_y;
  real_T r[10];
  char_T temp[10];
  int32_T i13;
  static const char_T cv83[5] = { 'S', 'D', 'R', 'u', '_' };

  boolean_T flag;
  b_obj = obj;
  emlrtPushRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = b_obj;
  c_obj->LocalOscillatorOffset = 0.0;
  c_obj->pSubDevice = RxId;
  emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 4; k++) {
    c_obj->tunablePropertyChanged[k] = FALSE;
  }

  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m16 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&y, m16);
  b_y = NULL;
  m16 = mxCreateDoubleScalar(10.0);
  emlrtAssign(&b_y, m16);
  g_emlrt_marshallIn(b_rand(y, b_y, &emlrtMCI), "rand", r);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 10; k++) {
    r[k] = 48.0 + muDoubleScalarFloor(r[k] * 10.0);
  }

  for (k = 0; k < 10; k++) {
    i13 = (int32_T)r[k];
    i13 = emlrtDynamicBoundsCheckFastR2012b(i13, 0, 255, &emlrtBCI,
      emlrtRootTLSGlobal);
    i13 = (int32_T)muDoubleScalarRem(i13, 256.0);
    if (i13 < 0) {
      temp[k] = (int8_T)-(int8_T)(uint8_T)-(real_T)i13;
    } else {
      temp[k] = (int8_T)(uint8_T)(real_T)i13;
    }
  }

  emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 5; k++) {
    c_obj->ObjectID[k] = cv83[k];
  }

  for (k = 0; k < 10; k++) {
    c_obj->ObjectID[k + 5] = temp[k];
  }

  emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  checkIPAddressFormat();
  emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->CenterFrequency = 2.24E+9;
  emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  if (c_obj->isInitialized && (!c_obj->isReleased)) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }

  if (flag) {
    c_obj->TunablePropsChanged = TRUE;
    c_obj->tunablePropertyChanged[1] = TRUE;
  }

  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->DecimationFactor = 20.0;
  emlrtPushRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  if (c_obj->isInitialized && (!c_obj->isReleased)) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }

  if (flag) {
    c_obj->TunablePropsChanged = TRUE;
    c_obj->tunablePropertyChanged[0] = TRUE;
  }

  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->Gain = 18.0;
  emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  if (c_obj->isInitialized && (!c_obj->isReleased)) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }

  if (flag) {
    c_obj->TunablePropsChanged = TRUE;
    c_obj->tunablePropertyChanged[3] = TRUE;
  }

  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
  return b_obj;
}

void SDRuReceiver_setupImplLocal(comm_SDRuReceiver *obj, UsrpErrorCapiEnumT
  *deviceStatus, char_T errMsg_data[1024], int32_T errMsg_size[2])
{
  BoardIdCapiEnumT boardId;
  uint8_T requester[15];
  int32_T i;
  const mxArray *y;
  static const int32_T iv102[2] = { 1, 6 };

  const mxArray *m18;
  char_T cv105[6];
  static const char_T cv106[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  static const uint8_T addr_null[13] = { 49U, 57U, 50U, 46U, 49U, 54U, 56U, 46U,
    49U, 48U, 46U, 50U, 0U };

  char * addr_c;
  uint8_T req_null[16];
  char * req_c;
  int32_T driverApiH;
  const mxArray *b_y;
  int32_T loop_ub;
  int32_T tmp_data[1024];
  char_T b_errMsg_data[1024];
  int32_T i15;
  comm_SDRuReceiver *b_obj;
  emlrtPushRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
  boardId = obj->pSubDevice;
  for (i = 0; i < 15; i++) {
    requester[i] = (uint8_T)obj->ObjectID[i];
  }

  /*    Copyright 2011-2012 The MathWorks, Inc. */
  emlrtPushRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2012 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    y = NULL;
    m18 = mxCreateCharArray(2, iv102);
    for (i = 0; i < 6; i++) {
      cv105[i] = cv106[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m18, cv105);
    emlrtAssign(&y, m18);
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
    errMsg_data[i] = '\x00';
  }

  /*  varargin   1      2         3          4              5       6         7 */
  /*            addr, boardId, requester, frameLength, dportType, buffMode, buffSize */
  /*  varargout  1         2         3 */
  /*            driverH, errStat, errMsg */
  emlrtPushRtStackR2012b(&bf_emlrtRSI, emlrtRootTLSGlobal);
  addr_c = (char *)(addr_null);
  emlrtPopRtStackR2012b(&bf_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 15; i++) {
    req_null[i] = requester[i];
  }

  req_null[15] = 0;
  emlrtPushRtStackR2012b(&cf_emlrtRSI, emlrtRootTLSGlobal);
  req_c = (char *)(req_null);
  emlrtPopRtStackR2012b(&cf_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&df_emlrtRSI, emlrtRootTLSGlobal);
  openDataConnection_c(addr_c, boardId, req_c, 5120U, DPortDTypeCInt16,
                       BuffModeContinuous, 0U, &driverApiH, deviceStatus,
                       &errMsg_data[0]);
  emlrtPopRtStackR2012b(&df_emlrtRSI, emlrtRootTLSGlobal);

  /*  Tell coder that addr_null & req_null must be alive and separate throughout the call to cmd_c. */
  emlrtPushRtStackR2012b(&ef_emlrtRSI, emlrtRootTLSGlobal);
  (void)(addr_null);
  emlrtPopRtStackR2012b(&ef_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ff_emlrtRSI, emlrtRootTLSGlobal);
  (void)(req_null);
  emlrtPopRtStackR2012b(&ff_emlrtRSI, emlrtRootTLSGlobal);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  emlrtPushRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
  i = strlen(&errMsg_data[0]);
  emlrtPopRtStackR2012b(&gf_emlrtRSI, emlrtRootTLSGlobal);
  if (i <= 1024) {
  } else {
    emlrtPushRtStackR2012b(&hf_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m18 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m18);
    b_error(b_y, &o_emlrtMCI);
    emlrtPopRtStackR2012b(&hf_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (1 > i) {
    loop_ub = 0;
  } else {
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i, 1, 1024, &q_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  for (i = 0; i < loop_ub; i++) {
    tmp_data[i] = 1 + i;
  }

  for (i = 0; i < loop_ub; i++) {
    i15 = 0;
    while (i15 <= 0) {
      b_errMsg_data[i] = errMsg_data[tmp_data[i] - 1];
      i15 = 1;
    }
  }

  errMsg_size[0] = 1;
  errMsg_size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    errMsg_data[i] = b_errMsg_data[i];
  }

  emlrtPopRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->pDriverHandle = driverApiH;
  emlrtPopRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
}

void SDRuReceiver_stepImpl(testPHYReceiveStackData *SD, const comm_SDRuReceiver *
  obj, creal_T y[5120])
{
  real_T fc;
  real_T loOffset;
  real_T gain;
  real_T decim;
  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT errStatus;
  uint32_T overrun;
  uint32_T dataLen;
  int32_T i;
  fc = obj->CenterFrequency;
  loOffset = obj->LocalOscillatorOffset;
  gain = obj->Gain;
  decim = obj->DecimationFactor;
  emlrtPushRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
  receiveData(obj->pDriverHandle, fc, loOffset, gain, decim, SD->u1.f1.yTemp,
              &dataLen, &overrun, &errStatus, errMsg_data, errMsg_size);
  emlrtPopRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
  if (errStatus != UsrpDriverSuccess) {
    emlrtPushRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
    error(errMsg_data, errMsg_size);
    emlrtPopRtStackR2012b(&oe_emlrtRSI, emlrtRootTLSGlobal);
  }

  for (i = 0; i < 5120; i++) {
    y[i].re = SD->u1.f1.yTemp[i].re;
    y[i].im = SD->u1.f1.yTemp[i].im;
    fc = y[i].im;
    y[i].re *= 3.0518509475997192E-5;
    y[i].im = 3.0518509475997192E-5 * fc;
  }
}

/* End of code generation (SDRuReceiver.c) */
