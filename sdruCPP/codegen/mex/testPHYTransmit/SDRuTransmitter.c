/*
 * SDRuTransmitter.c
 *
 * Code generation for function 'SDRuTransmitter'
 *
 * C source code generated on: Fri Apr 18 15:35:33 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "SDRuTransmitter.h"
#include "sendComplexDoubleData.h"
#include "error.h"
#include "checkIPAddressFormat.h"
#include "generateOFDMSignal_TX2.h"
#include "testPHYTransmit_mexutil.h"
#include "testPHYTransmit_data.h"

/* Type Definitions */
#include "usrp_uhd_capi.hpp"

/* Variable Definitions */
static emlrtRSInfo id_emlrtRSI = { 1, "SDRuTransmitter",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/+comm/SDRuTransmitter.p" };

static emlrtRSInfo se_emlrtRSI = { 6, "openDataConnection",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/openDataConnection.m"
};

static emlrtRSInfo te_emlrtRSI = { 138, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo ue_emlrtRSI = { 141, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo ve_emlrtRSI = { 146, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo we_emlrtRSI = { 151, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

static emlrtRSInfo xe_emlrtRSI = { 152, "mapiPrivate",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdru/usrp_uhd_mapi/mapiPrivate.m" };

/* Function Declarations */
static void g_emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier,
  real_T y[10]);
static void h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[10]);
static void k_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[10]);

/* Function Definitions */
static void g_emlrt_marshallIn(const mxArray *c_rand, const char_T *identifier,
  real_T y[10])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  h_emlrt_marshallIn(emlrtAlias(c_rand), &thisId, y);
  emlrtDestroyArray(&c_rand);
}

static void h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[10])
{
  k_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[10])
{
  int32_T iv120[2];
  int32_T i24;
  for (i24 = 0; i24 < 2; i24++) {
    iv120[i24] = 1 + 9 * i24;
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", FALSE, 2U,
    iv120);
  for (i24 = 0; i24 < 10; i24++) {
    ret[i24] = (*(real_T (*)[10])mxGetData(src))[i24];
  }

  emlrtDestroyArray(&src);
}

comm_SDRuTransmitter *SDRuTransmitter_SDRuTransmitter(comm_SDRuTransmitter *obj)
{
  comm_SDRuTransmitter *b_obj;
  comm_SDRuTransmitter *c_obj;
  int32_T k;
  const mxArray *y;
  const mxArray *m9;
  const mxArray *b_y;
  real_T r[10];
  char_T temp[10];
  int32_T i6;
  static const char_T cv51[5] = { 'S', 'D', 'R', 'u', '_' };

  boolean_T flag;
  b_obj = obj;
  emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  c_obj = b_obj;
  c_obj->LocalOscillatorOffset = 0.0;
  c_obj->pSubDevice = TxId;
  emlrtPushRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 4; k++) {
    c_obj->tunablePropertyChanged[k] = FALSE;
  }

  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  y = NULL;
  m9 = mxCreateDoubleScalar(1.0);
  emlrtAssign(&y, m9);
  b_y = NULL;
  m9 = mxCreateDoubleScalar(10.0);
  emlrtAssign(&b_y, m9);
  g_emlrt_marshallIn(b_rand(y, b_y, &emlrtMCI), "rand", r);
  emlrtPopRtStackR2012b(&i_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&h_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 10; k++) {
    r[k] = 48.0 + muDoubleScalarFloor(r[k] * 10.0);
  }

  for (k = 0; k < 10; k++) {
    i6 = (int32_T)r[k];
    i6 = emlrtDynamicBoundsCheckFastR2012b(i6, 0, 255, &emlrtBCI,
      emlrtRootTLSGlobal);
    i6 = (int32_T)muDoubleScalarRem(i6, 256.0);
    if (i6 < 0) {
      temp[k] = (int8_T)-(int8_T)(uint8_T)-(real_T)i6;
    } else {
      temp[k] = (int8_T)(uint8_T)(real_T)i6;
    }
  }

  emlrtPopRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
  for (k = 0; k < 5; k++) {
    c_obj->ObjectID[k] = cv51[k];
  }

  for (k = 0; k < 10; k++) {
    c_obj->ObjectID[k + 5] = temp[k];
  }

  emlrtPopRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
  checkIPAddressFormat();
  emlrtPopRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->CenterFrequency = 2.24E+9;
  emlrtPushRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  if (c_obj->isInitialized && (!c_obj->isReleased)) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }

  if (flag) {
    c_obj->TunablePropsChanged = TRUE;
    c_obj->tunablePropertyChanged[1] = TRUE;
  }

  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->InterpolationFactor = 20.0;
  emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  if (c_obj->isInitialized && (!c_obj->isReleased)) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }

  if (flag) {
    c_obj->TunablePropsChanged = TRUE;
    c_obj->tunablePropertyChanged[0] = TRUE;
  }

  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  c_obj->Gain = 25.0;
  emlrtPushRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  if (c_obj->isInitialized && (!c_obj->isReleased)) {
    flag = TRUE;
  } else {
    flag = FALSE;
  }

  if (flag) {
    c_obj->TunablePropsChanged = TRUE;
    c_obj->tunablePropertyChanged[3] = TRUE;
  }

  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  return b_obj;
}

void SDRuTransmitter_setupImplLocal(comm_SDRuTransmitter *obj,
  UsrpErrorCapiEnumT *errStatus, char_T errMsg_data[1024], int32_T errMsg_size[2])
{
  BoardIdCapiEnumT boardId;
  uint8_T requester[15];
  int32_T i;
  const mxArray *y;
  static const int32_T iv115[2] = { 1, 6 };

  const mxArray *m21;
  char_T cv121[6];
  static const char_T cv122[6] = { 's', 'i', 'l', 'e', 'n', 't' };

  static const uint8_T addr_null[13] = { 49U, 57U, 50U, 46U, 49U, 54U, 56U, 46U,
    50U, 48U, 46U, 50U, 0U };

  char * addr_c;
  uint8_T req_null[16];
  char * req_c;
  int32_T driverApiH;
  const mxArray *b_y;
  int32_T loop_ub;
  int32_T tmp_data[1024];
  char_T b_errMsg_data[1024];
  int32_T i19;
  comm_SDRuTransmitter *b_obj;
  emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  boardId = obj->pSubDevice;
  for (i = 0; i < 15; i++) {
    requester[i] = (uint8_T)obj->ObjectID[i];
  }

  /*    Copyright 2011-2012 The MathWorks, Inc. */
  emlrtPushRtStackR2012b(&se_emlrtRSI, emlrtRootTLSGlobal);

  /*  */
  /*  This function unifies handling of interp vs. codegen call as well as */
  /*  errStat / errStr assignment. */
  /*  */
  /*    Copyright 2011-2012 The MathWorks, Inc. */
  if (!isSetupsdruCalled) {
    y = NULL;
    m21 = mxCreateCharArray(2, iv115);
    for (i = 0; i < 6; i++) {
      cv121[i] = cv122[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 6, m21, cv121);
    emlrtAssign(&y, m21);
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
  emlrtPushRtStackR2012b(&te_emlrtRSI, emlrtRootTLSGlobal);
  addr_c = (char *)(addr_null);
  emlrtPopRtStackR2012b(&te_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 15; i++) {
    req_null[i] = requester[i];
  }

  req_null[15] = 0;
  emlrtPushRtStackR2012b(&ue_emlrtRSI, emlrtRootTLSGlobal);
  req_c = (char *)(req_null);
  emlrtPopRtStackR2012b(&ue_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ve_emlrtRSI, emlrtRootTLSGlobal);
  openDataConnection_c(addr_c, boardId, req_c, 38400U, DPortDTypeCDouble,
                       BuffModeContinuous, 0U, &driverApiH, errStatus,
                       &errMsg_data[0]);
  emlrtPopRtStackR2012b(&ve_emlrtRSI, emlrtRootTLSGlobal);

  /*  Tell coder that addr_null & req_null must be alive and separate throughout the call to cmd_c. */
  emlrtPushRtStackR2012b(&we_emlrtRSI, emlrtRootTLSGlobal);
  (void)(addr_null);
  emlrtPopRtStackR2012b(&we_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&xe_emlrtRSI, emlrtRootTLSGlobal);
  (void)(req_null);
  emlrtPopRtStackR2012b(&xe_emlrtRSI, emlrtRootTLSGlobal);

  /* errStat = UsrpErrorCapiEnumT(errStat_i); */
  emlrtPushRtStackR2012b(&ye_emlrtRSI, emlrtRootTLSGlobal);
  i = strlen(&errMsg_data[0]);
  emlrtPopRtStackR2012b(&ye_emlrtRSI, emlrtRootTLSGlobal);
  if (i <= 1024) {
  } else {
    emlrtPushRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
    b_y = NULL;
    m21 = mxCreateString("Assertion failed.");
    emlrtAssign(&b_y, m21);
    b_error(b_y, &o_emlrtMCI);
    emlrtPopRtStackR2012b(&af_emlrtRSI, emlrtRootTLSGlobal);
  }

  if (1 > i) {
    loop_ub = 0;
  } else {
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(i, 1, 1024, &o_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  for (i = 0; i < loop_ub; i++) {
    tmp_data[i] = 1 + i;
  }

  for (i = 0; i < loop_ub; i++) {
    i19 = 0;
    while (i19 <= 0) {
      b_errMsg_data[i] = errMsg_data[tmp_data[i] - 1];
      i19 = 1;
    }
  }

  errMsg_size[0] = 1;
  errMsg_size[1] = loop_ub;
  for (i = 0; i < loop_ub; i++) {
    errMsg_data[i] = b_errMsg_data[i];
  }

  emlrtPopRtStackR2012b(&se_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  b_obj = obj;
  b_obj->pDriverHandle = driverApiH;
  emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
}

void SDRuTransmitter_stepImpl(testPHYTransmitStackData *SD, const
  comm_SDRuTransmitter *obj, const creal_T x[38400])
{
  real_T fc;
  real_T loOffset;
  real_T gain;
  real_T interp;
  int32_T errMsg_size[2];
  char_T errMsg_data[1024];
  UsrpErrorCapiEnumT errStatus;
  uint32_T underrun;
  fc = obj->CenterFrequency;
  loOffset = obj->LocalOscillatorOffset;
  gain = obj->Gain;
  interp = obj->InterpolationFactor;
  emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  sendComplexDoubleData(SD, obj->pDriverHandle, x, fc, loOffset, gain, interp,
                        &underrun, &errStatus, errMsg_data, errMsg_size);
  emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  if (errStatus != UsrpDriverSuccess) {
    emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
    error(errMsg_data, errMsg_size);
    emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  }
}

/* End of code generation (SDRuTransmitter.c) */
