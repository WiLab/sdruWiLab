/*
 * SDRuTransmitter.c
 *
 * Code generation for function 'SDRuTransmitter'
 *
 * C source code generated on: Thu Feb 27 11:53:20 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "SDRuTransmitter.h"
#include "checkIPAddressFormat.h"
#include "testPHYReceive_data.h"

/* Variable Definitions */
static emlrtRSInfo pj_emlrtRSI = { 1, "SDRuTransmitter",
  "/Users/travis/Documents/sdru/+comm/SDRuTransmitter.p" };

/* Function Definitions */
comm_SDRuTransmitter *SDRuTransmitter_SDRuTransmitter(const emlrtStack *sp,
  comm_SDRuTransmitter *obj)
{
  comm_SDRuTransmitter *b_obj;
  comm_SDRuTransmitter *c_obj;
  real_T varargin_1[10];
  int32_T k;
  int32_T i5;
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
  st.site = &pj_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &qj_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  c_st.site = &bb_emlrtRSI;
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  d_st.site = &cb_emlrtRSI;
  e_st.site = &db_emlrtRSI;
  f_st.site = &db_emlrtRSI;
  d_st.site = &cb_emlrtRSI;
  e_st.site = &db_emlrtRSI;
  b_st.site = &qj_emlrtRSI;
  b_st.site = &qj_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &qj_emlrtRSI;
  c_st.site = &u_emlrtRSI;
  emlrtRandu(varargin_1, 10);
  for (k = 0; k < 10; k++) {
    c_st.site = &v_emlrtRSI;
    c_st.site = &v_emlrtRSI;
    d_st.site = &p_emlrtRSI;
    varargin_1[k] = 48.0 + muDoubleScalarFloor(varargin_1[k] * 10.0);
  }

  b_st.site = &qj_emlrtRSI;
  for (k = 0; k < 10; k++) {
    i5 = (int32_T)varargin_1[k];
    emlrtDynamicBoundsCheckFastR2012b(i5, 0, 255, &emlrtBCI, &b_st);
  }

  b_st.site = &qj_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  b_st.site = &qj_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  d_st.site = &db_emlrtRSI;
  e_st.site = &db_emlrtRSI;
  f_st.site = &yf_emlrtRSI;
  g_st.site = &db_emlrtRSI;
  h_st.site = &qj_emlrtRSI;
  checkIPAddressFormat(&h_st);
  g_st.site = &db_emlrtRSI;
  d_st.site = &db_emlrtRSI;
  e_st.site = &ob_emlrtRSI;
  f_st.site = &db_emlrtRSI;
  g_st.site = &qj_emlrtRSI;
  f_st.site = &db_emlrtRSI;
  e_st.site = &ob_emlrtRSI;
  f_st.site = &db_emlrtRSI;
  g_st.site = &pj_emlrtRSI;
  f_st.site = &db_emlrtRSI;
  e_st.site = &ob_emlrtRSI;
  f_st.site = &db_emlrtRSI;
  g_st.site = &qj_emlrtRSI;
  f_st.site = &db_emlrtRSI;
  return b_obj;
}

/* End of code generation (SDRuTransmitter.c) */
