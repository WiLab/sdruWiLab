/*
 * SDRuTransmitter.c
 *
 * Code generation for function 'SDRuTransmitter'
 *
 * C source code generated on: Thu Mar  6 23:19:55 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testSpectrumSenseP25.h"
#include "SDRuTransmitter.h"
#include "checkIPAddressFormat.h"
#include "testSpectrumSenseP25_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo sj_emlrtRSI = { 1, "SDRuTransmitter",
  "/Users/travis/Documents/sdru/+comm/SDRuTransmitter.p" };

/* Function Definitions */
comm_SDRuTransmitter *SDRuTransmitter_SDRuTransmitter(const emlrtStack *sp,
  comm_SDRuTransmitter *obj)
{
  comm_SDRuTransmitter *b_obj;
  comm_SDRuTransmitter *c_obj;
  real_T varargin_1[10];
  int32_T k;
  int32_T i6;
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
  st.site = &sj_emlrtRSI;
  c_obj = b_obj;
  b_st.site = &tj_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  d_st.site = &eb_emlrtRSI;
  e_st.site = &fb_emlrtRSI;
  f_st.site = &fb_emlrtRSI;
  d_st.site = &eb_emlrtRSI;
  e_st.site = &fb_emlrtRSI;
  b_st.site = &tj_emlrtRSI;
  b_st.site = &tj_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  b_st.site = &tj_emlrtRSI;
  c_st.site = &w_emlrtRSI;
  emlrtRandu(varargin_1, 10);
  for (k = 0; k < 10; k++) {
    c_st.site = &x_emlrtRSI;
    c_st.site = &x_emlrtRSI;
    d_st.site = &q_emlrtRSI;
    varargin_1[k] = 48.0 + muDoubleScalarFloor(varargin_1[k] * 10.0);
  }

  b_st.site = &tj_emlrtRSI;
  for (k = 0; k < 10; k++) {
    i6 = (int32_T)varargin_1[k];
    emlrtDynamicBoundsCheckFastR2012b(i6, 0, 255, &emlrtBCI, &b_st);
  }

  b_st.site = &tj_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  b_st.site = &tj_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  d_st.site = &fb_emlrtRSI;
  e_st.site = &fb_emlrtRSI;
  f_st.site = &cg_emlrtRSI;
  g_st.site = &fb_emlrtRSI;
  h_st.site = &tj_emlrtRSI;
  checkIPAddressFormat(&h_st);
  g_st.site = &fb_emlrtRSI;
  d_st.site = &fb_emlrtRSI;
  e_st.site = &qb_emlrtRSI;
  f_st.site = &fb_emlrtRSI;
  g_st.site = &tj_emlrtRSI;
  f_st.site = &fb_emlrtRSI;
  e_st.site = &qb_emlrtRSI;
  f_st.site = &fb_emlrtRSI;
  g_st.site = &sj_emlrtRSI;
  f_st.site = &fb_emlrtRSI;
  e_st.site = &qb_emlrtRSI;
  f_st.site = &fb_emlrtRSI;
  g_st.site = &tj_emlrtRSI;
  f_st.site = &fb_emlrtRSI;
  return b_obj;
}

/* End of code generation (SDRuTransmitter.c) */
