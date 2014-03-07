/*
 * OFDMModulator.c
 *
 * Code generation for function 'OFDMModulator'
 *
 * C source code generated on: Thu Mar  6 23:19:55 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testSpectrumSenseP25.h"
#include "OFDMModulator.h"
#include "generateOFDMSignal.h"
#include "eml_int_forloop_overflow_check.h"
#include "testSpectrumSenseP25_emxutil.h"
#include "testSpectrumSenseP25_mexutil.h"
#include "testSpectrumSenseP25_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRTEInfo i_emlrtRTEI = { 391, 19, "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtBCInfo b_emlrtBCI = { 1, 64, 403, 9, "packedData", "OFDMModulator",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m", 0 };

/* Function Definitions */
OFDMModulator *OFDMModulator_OFDMModulator(OFDMModulator *object)
{
  OFDMModulator *b_object;
  OFDMModulator *obj;
  b_object = object;
  obj = b_object;
  obj->isInitialized = FALSE;
  obj->isReleased = FALSE;
  return b_object;
}

void OFDMModulator_stepImpl(const emlrtStack *sp, const OFDMModulator *obj,
  const creal_T dataIn[53], creal_T yout[64])
{
  creal_T packedData[64];
  int32_T i;
  emxArray_int32_T *r1;
  int32_T iy;
  int32_T ia;
  real_T temp_re;
  int32_T ib;
  int32_T k;
  real_T temp_im;
  creal_T postIFFT[64];
  int32_T ix;
  boolean_T tst;
  int32_T iDelta2;
  int32_T iheight;
  static const real_T dv0[33] = { 0.0, 0.0980171403295606, 0.19509032201612825,
    0.29028467725446233, 0.38268343236508978, 0.47139673682599764,
    0.55557023301960218, 0.63439328416364549, 0.70710678118654757,
    0.773010453362737, 0.83146961230254524, 0.881921264348355,
    0.92387953251128674, 0.95694033573220882, 0.98078528040323043,
    0.99518472667219693, 1.0, 0.99518472667219693, 0.98078528040323043,
    0.95694033573220882, 0.92387953251128674, 0.881921264348355,
    0.83146961230254524, 0.773010453362737, 0.70710678118654757,
    0.63439328416364549, 0.55557023301960218, 0.47139673682599764,
    0.38268343236508978, 0.29028467725446233, 0.19509032201612825,
    0.0980171403295606, 0.0 };

  static const real_T dv1[33] = { 1.0, 0.99518472667219693, 0.98078528040323043,
    0.95694033573220882, 0.92387953251128674, 0.881921264348355,
    0.83146961230254524, 0.773010453362737, 0.70710678118654757,
    0.63439328416364549, 0.55557023301960218, 0.47139673682599764,
    0.38268343236508978, 0.29028467725446233, 0.19509032201612825,
    0.0980171403295606, 0.0, -0.0980171403295606, -0.19509032201612825,
    -0.29028467725446233, -0.38268343236508978, -0.47139673682599764,
    -0.55557023301960218, -0.63439328416364549, -0.70710678118654757,
    -0.773010453362737, -0.83146961230254524, -0.881921264348355,
    -0.92387953251128674, -0.95694033573220882, -0.98078528040323043,
    -0.99518472667219693, -1.0 };

  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  for (i = 0; i < 64; i++) {
    packedData[i].re = obj->pFullGrid[i];
    packedData[i].im = 0.0;
  }

  emxInit_int32_T(sp, &r1, 1, &i_emlrtRTEI, TRUE);
  iy = r1->size[0];
  r1->size[0] = obj->pDataLinearIndices->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)r1, iy, (int32_T)sizeof(int32_T),
                    &i_emlrtRTEI);
  ia = obj->pDataLinearIndices->size[0];
  for (iy = 0; iy < ia; iy++) {
    temp_re = obj->pDataLinearIndices->data[iy];
    ib = (int32_T)emlrtIntegerCheckFastR2012b(temp_re, &emlrtDCI, sp);
    r1->data[iy] = emlrtDynamicBoundsCheckFastR2012b(ib, 1, 64, &b_emlrtBCI, sp);
  }

  iy = r1->size[0];
  emlrtSizeEqCheck1DFastR2012b(iy, 53, &b_emlrtECI, sp);
  ia = r1->size[0];
  for (iy = 0; iy < ia; iy++) {
    packedData[r1->data[iy] - 1] = dataIn[iy];
  }

  emxFree_int32_T(&r1);
  ia = 0;
  ib = 32;
  for (k = 0; k < 32; k++) {
    temp_re = packedData[ia].re;
    temp_im = packedData[ia].im;
    packedData[ia] = packedData[ib];
    packedData[ib].re = temp_re;
    packedData[ib].im = temp_im;
    ia++;
    ib++;
  }

  ix = 0;
  ib = 0;
  iy = 0;
  for (i = 0; i < 63; i++) {
    postIFFT[iy] = packedData[ix];
    ia = 64;
    tst = TRUE;
    while (tst) {
      if (ia >= 0) {
        ia = (int32_T)((uint32_T)ia >> 1);
      } else {
        ia = ~(int32_T)((uint32_T)~ia >> 1);
      }

      ib ^= ia;
      tst = ((ib & ia) == 0);
    }

    iy = ib;
    ix++;
  }

  postIFFT[iy] = packedData[ix];
  for (i = 0; i < 64; i += 2) {
    temp_re = postIFFT[i + 1].re;
    temp_im = postIFFT[i + 1].im;
    postIFFT[i + 1].re = postIFFT[i].re - postIFFT[i + 1].re;
    postIFFT[i + 1].im = postIFFT[i].im - postIFFT[i + 1].im;
    postIFFT[i].re += temp_re;
    postIFFT[i].im += temp_im;
  }

  ix = 2;
  iDelta2 = 4;
  k = 16;
  iheight = 61;
  while (k > 0) {
    for (i = 0; i < iheight; i += iDelta2) {
      ia = i + ix;
      temp_re = postIFFT[ia].re;
      temp_im = postIFFT[ia].im;
      postIFFT[i + ix].re = postIFFT[i].re - postIFFT[ia].re;
      postIFFT[i + ix].im = postIFFT[i].im - postIFFT[ia].im;
      postIFFT[i].re += temp_re;
      postIFFT[i].im += temp_im;
    }

    ia = 1;
    for (ib = k; ib < 32; ib += k) {
      i = ia;
      iy = ia + iheight;
      while (i < iy) {
        temp_re = dv1[ib] * postIFFT[i + ix].re - dv0[ib] * postIFFT[i + ix].im;
        temp_im = dv1[ib] * postIFFT[i + ix].im + dv0[ib] * postIFFT[i + ix].re;
        postIFFT[i + ix].re = postIFFT[i].re - temp_re;
        postIFFT[i + ix].im = postIFFT[i].im - temp_im;
        postIFFT[i].re += temp_re;
        postIFFT[i].im += temp_im;
        i += iDelta2;
      }

      ia++;
    }

    iy = k;
    k = (int32_T)((uint32_T)iy >> 1);
    ix = iDelta2;
    iDelta2 <<= 1;
    iheight -= ix;
  }

  for (iy = 0; iy < 64; iy++) {
    postIFFT[iy].re *= 0.015625;
    postIFFT[iy].im *= 0.015625;
  }

  iy = 0;
  ix = 0;
  for (ia = 0; ia < 64; ia++) {
    packedData[iy] = postIFFT[ix];
    ix++;
    iy++;
  }

  memcpy(&yout[0], &packedData[0], sizeof(creal_T) << 6);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

OFDMModulator_1 *b_OFDMModulator_OFDMModulator(const emlrtStack *sp,
  OFDMModulator_1 *object)
{
  OFDMModulator_1 *b_object;
  OFDMModulator_1 *obj;
  int8_T x_data[4];
  int32_T i;
  int32_T nb;
  int32_T x;
  int32_T exitg1;
  int32_T exponent;
  boolean_T b1;
  int32_T i3;
  const mxArray *y;
  static const int32_T iv59[2] = { 1, 13 };

  const mxArray *m8;
  char_T cv68[13];
  static const char_T cv69[13] = { 'c', 'o', 'm', 'm', ':', 'O', 'F', 'D', 'M',
    ':', 'x', 'x', 'x' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
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
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  b_object = object;
  st.site = &gb_emlrtRSI;
  obj = b_object;
  b_st.site = &bb_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  c_st.site = &db_emlrtRSI;
  obj->isInitialized = FALSE;
  obj->isReleased = FALSE;
  d_st.site = &eb_emlrtRSI;
  e_st.site = &fb_emlrtRSI;
  f_st.site = &fb_emlrtRSI;
  d_st.site = &eb_emlrtRSI;
  e_st.site = &fb_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &hb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  c_st.site = &fb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  e_st.site = &fb_emlrtRSI;
  e_st.site = &fb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  e_st.site = &fb_emlrtRSI;
  e_st.site = &fb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  e_st.site = &fb_emlrtRSI;
  e_st.site = &fb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  e_st.site = &fb_emlrtRSI;
  e_st.site = &fb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  e_st.site = &fb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  e_st.site = &fb_emlrtRSI;

  /* OFDMBase Base object for OFDMModulator and OFDMDemodulator System objects */
  /*  Copyright 2013 The MathWorks, Inc. */
  /* FFTLength FFT length */
  /*  Specify the IFFT length. This property can be set to an integer */
  /*  scalar. The value must be a power of two. The default value of */
  /*  this property is 64. */
  /* CyclicPrefixLength Cyclic prefix length */
  /*  Specify the cyclic prefix length. This property can be set to a */
  /*  non-negative interher scalar. The default value of this property is 16. */
  /* NumGuardBandCarriers Number of guard bands */
  /*  Specify the lower and upper guard bands in frequency domain.This */
  /*  property can be set to a non-nagative two-element vector.  */
  /*  The default setting of this property is [6 5]. */
  /* NumSymbols Number of OFDM symbols */
  /*  Specify the number of OFDM symbols at the output. The default value  */
  /*  of this property is 1. */
  /* PilotCarrierIndices Pilot subcarrier indices */
  /*  Specify the locations where pilots are to be inserted. You can */
  /*  set this property to a numeric scalar, column vector, matrix, or */
  /*  3-D array. The defalut value of the property is [-21; -7; 7; 21]. */
  /*  Nontunable ideally */
  /*  Constructor */
  /*      validateattributes(fftLen, {'numeric'}, ... */
  /*          {'real','scalar','integer','finite','>=',8}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*      validateattributes(CPLen, {'numeric'}, ... */
  /*          {'real','row','integer','nonnegative','finite'}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*      validateattributes(guardBands, {'numeric'}, ... */
  /*          {'real','integer','nonnegative','finite','size', [2, 1]}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*      validateattributes(numSym, {'numeric'}, ... */
  /*          {'real','scalar','integer','positive','finite'}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*      validateattributes(pilotIdx, {'numeric'}, ... */
  /*          {'real','integer','positive','finite','3d'}, ... */
  /*          [class(obj) '.' propName], propName);   */
  /*  Check the 3rd dimension for numTx */
  f_st.site = &qh_emlrtRSI;
  g_st.site = &rh_emlrtRSI;
  for (i = 0; i < 4; i++) {
    x_data[i] = (int8_T)(12 + 14 * i);
  }

  h_st.site = &ii_emlrtRSI;
  nb = 0;
  h_st.site = &gi_emlrtRSI;
  h_st.site = &fi_emlrtRSI;
  i = 1;
  while (i <= 4) {
    x = x_data[i - 1];
    do {
      exitg1 = 0;
      h_st.site = &ei_emlrtRSI;
      i++;
      if (i > 4) {
        exitg1 = 1;
      } else {
        h_st.site = &di_emlrtRSI;
        frexp((real_T)x / 2.0, &exponent);
        if (!(muDoubleScalarAbs(x - x_data[i - 1]) < ldexp(1.0, exponent - 53)))
        {
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);

    h_st.site = &ci_emlrtRSI;
    nb++;
    x_data[nb - 1] = (int8_T)x;
    h_st.site = &bi_emlrtRSI;
    h_st.site = &bi_emlrtRSI;
  }

  h_st.site = &wh_emlrtRSI;
  h_st.site = &vh_emlrtRSI;
  h_st.site = &sh_emlrtRSI;
  if (1 > nb) {
    b1 = FALSE;
  } else {
    b1 = (nb > 2147483646);
  }

  if (b1) {
    i_st.site = &xf_emlrtRSI;
    check_forloop_overflow_error(&i_st);
  }

  f_st.site = &qh_emlrtRSI;
  f_st.site = &qh_emlrtRSI;
  if (1 > nb) {
    i3 = 0;
  } else {
    i3 = nb;
  }

  if (!(4 != i3)) {
  } else {
    y = NULL;
    m8 = mxCreateCharArray(2, iv59);
    for (i = 0; i < 13; i++) {
      cv68[i] = cv69[i];
    }

    emlrtInitCharArrayR2013a(&f_st, 13, m8, cv68);
    emlrtAssign(&y, m8);
    g_st.site = &yq_emlrtRSI;
    b_error(&g_st, b_message(&g_st, y, &g_emlrtMCI), &g_emlrtMCI);
  }

  /*  Error message:  */
  /*  If pilot index is 2-D, the indices per symbol must be unique; */
  /*  If pilot index is 3-D, the indices across transmit antennas per symbol must be unique. */
  e_st.site = &fb_emlrtRSI;
  d_st.site = &qb_emlrtRSI;
  e_st.site = &fb_emlrtRSI;
  return b_object;
}

/* End of code generation (OFDMModulator.c) */
