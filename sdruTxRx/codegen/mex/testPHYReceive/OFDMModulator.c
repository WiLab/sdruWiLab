/*
 * OFDMModulator.c
 *
 * Code generation for function 'OFDMModulator'
 *
 * C source code generated on: Thu Apr  3 19:36:37 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYReceive.h"
#include "OFDMModulator.h"
#include "SystemProp.h"
#include "receiveData.h"
#include "equalizeOFDM.h"
#include "testPHYReceive_emxutil.h"
#include "testPHYReceive_mexutil.h"
#include "testPHYReceive_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo vc_emlrtRSI = { 355, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo wc_emlrtRSI = { 378, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo xc_emlrtRSI = { 384, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRTEInfo j_emlrtRTEI = { 391, 19, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtBCInfo b_emlrtBCI = { 1, 64, 403, 9, "packedData", "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m", 0 };

/* Function Definitions */
OFDMModulator_4 *OFDMModulator_OFDMModulator(OFDMModulator_4 *object)
{
  OFDMModulator_4 *b_object;
  OFDMModulator_4 *obj;
  b_object = object;
  emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  obj = b_object;
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  obj->isInitialized = FALSE;
  obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  return b_object;
}

void OFDMModulator_setupImpl(OFDMModulator_196 *obj)
{
  real_T ii_data[768];
  int32_T ii;
  int32_T idx;
  static const int8_T iv42[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  static const int16_T iv43[48] = { 11, 25, 39, 53, 75, 89, 103, 117, 139, 153,
    167, 181, 203, 217, 231, 245, 267, 281, 295, 309, 331, 345, 359, 373, 395,
    409, 423, 437, 459, 473, 487, 501, 523, 537, 551, 565, 587, 601, 615, 629,
    651, 665, 679, 693, 715, 729, 743, 757 };

  boolean_T x[768];
  int16_T b_ii_data[768];
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int16_T c_ii_data[768];
  int32_T ii_size[1];
  emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&vc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&vc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  for (ii = 0; ii < 768; ii++) {
    ii_data[ii] = 1.0;
  }

  c_SystemProp_matlabCodegenSetAn(obj, ii_data);
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
  for (ii = 0; ii < 768; ii++) {
    ii_data[ii] = obj->pFullGrid[ii];
  }

  for (ii = 0; ii < 12; ii++) {
    for (idx = 0; idx < 11; idx++) {
      ii_data[iv42[idx] + (ii << 6)] = 0.0;
    }
  }

  emlrtPushRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
  c_SystemProp_matlabCodegenSetAn(obj, ii_data);
  emlrtPopRtStackR2012b(&qb_emlrtRSI, emlrtRootTLSGlobal);
  for (ii = 0; ii < 768; ii++) {
    ii_data[ii] = obj->pFullGrid[ii];
  }

  for (ii = 0; ii < 12; ii++) {
    ii_data[32 + (ii << 6)] = 0.0;
  }

  emlrtPushRtStackR2012b(&wc_emlrtRSI, emlrtRootTLSGlobal);
  c_SystemProp_matlabCodegenSetAn(obj, ii_data);
  emlrtPopRtStackR2012b(&wc_emlrtRSI, emlrtRootTLSGlobal);
  for (ii = 0; ii < 768; ii++) {
    ii_data[ii] = obj->pFullGrid[ii];
  }

  for (ii = 0; ii < 48; ii++) {
    ii_data[iv43[ii]] = 2.0;
  }

  emlrtPushRtStackR2012b(&xc_emlrtRSI, emlrtRootTLSGlobal);
  c_SystemProp_matlabCodegenSetAn(obj, ii_data);
  emlrtPopRtStackR2012b(&xc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
  for (ii = 0; ii < 768; ii++) {
    x[ii] = (obj->pFullGrid[ii] == 1.0);
  }

  idx = 0;
  ii = 1;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (ii < 769)) {
    guard1 = FALSE;
    if (x[ii - 1]) {
      idx++;
      b_ii_data[idx - 1] = (int16_T)ii;
      if (idx >= 768) {
        exitg1 = TRUE;
      } else {
        guard1 = TRUE;
      }
    } else {
      guard1 = TRUE;
    }

    if (guard1 == TRUE) {
      ii++;
    }
  }

  if (1 > idx) {
    idx = 0;
  }

  for (ii = 0; ii < idx; ii++) {
    c_ii_data[ii] = b_ii_data[ii];
  }

  for (ii = 0; ii < idx; ii++) {
    b_ii_data[ii] = c_ii_data[ii];
  }

  ii_size[0] = idx;
  for (ii = 0; ii < idx; ii++) {
    ii_data[ii] = b_ii_data[ii];
  }

  d_SystemProp_matlabCodegenSetAn(obj, ii_data, ii_size);
  emlrtPopRtStackR2012b(&rb_emlrtRSI, emlrtRootTLSGlobal);
}

void OFDMModulator_stepImpl(const OFDMModulator_4 *obj, const creal_T dataIn[53],
  creal_T yout[64])
{
  creal_T packedData[64];
  int32_T i;
  emxArray_int32_T *r0;
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
  static const real_T dv1[33] = { 0.0, 0.0980171403295606, 0.19509032201612825,
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

  static const real_T dv2[33] = { 1.0, 0.99518472667219693, 0.98078528040323043,
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

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  for (i = 0; i < 64; i++) {
    packedData[i].re = obj->pFullGrid[i];
    packedData[i].im = 0.0;
  }

  emxInit_int32_T(&r0, 1, &j_emlrtRTEI, TRUE);
  iy = r0->size[0];
  r0->size[0] = obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)r0, iy, (int32_T)sizeof(int32_T),
                    &j_emlrtRTEI);
  ia = obj->pDataLinearIndices->size[0];
  for (iy = 0; iy < ia; iy++) {
    temp_re = obj->pDataLinearIndices->data[iy];
    ib = (int32_T)emlrtIntegerCheckFastR2012b(temp_re, &emlrtDCI,
      emlrtRootTLSGlobal);
    r0->data[iy] = emlrtDynamicBoundsCheckFastR2012b(ib, 1, 64, &b_emlrtBCI,
      emlrtRootTLSGlobal);
  }

  iy = r0->size[0];
  emlrtSizeEqCheck1DFastR2012b(iy, 53, &emlrtECI, emlrtRootTLSGlobal);
  ia = r0->size[0];
  for (iy = 0; iy < ia; iy++) {
    packedData[r0->data[iy] - 1] = dataIn[iy];
  }

  emxFree_int32_T(&r0);
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
        temp_re = dv2[ib] * postIFFT[i + ix].re - dv1[ib] * postIFFT[i + ix].im;
        temp_im = dv2[ib] * postIFFT[i + ix].im + dv1[ib] * postIFFT[i + ix].re;
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
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

OFDMModulator_196 *b_OFDMModulator_OFDMModulator(OFDMModulator_196 *object)
{
  OFDMModulator_196 *b_object;
  OFDMModulator_196 *obj;
  int8_T b_data[4];
  int32_T i;
  int32_T nb;
  int32_T x;
  int32_T exitg1;
  int32_T exponent;
  boolean_T b1;
  int32_T i2;
  const mxArray *y;
  static const int32_T iv36[2] = { 1, 13 };

  const mxArray *m8;
  char_T cv45[13];
  static const char_T cv46[13] = { 'c', 'o', 'm', 'm', ':', 'O', 'F', 'D', 'M',
    ':', 'x', 'x', 'x' };

  b_object = object;
  emlrtPushRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  obj = b_object;
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  obj->isInitialized = FALSE;
  obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&r_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);

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
  emlrtPushRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
  for (i = 0; i < 4; i++) {
    b_data[i] = (int8_T)(12 + 14 * i);
  }

  nb = 0;
  i = 1;
  while (i <= 4) {
    x = b_data[i - 1];
    do {
      exitg1 = 0;
      i++;
      if (i > 4) {
        exitg1 = 1;
      } else {
        frexp((real_T)x / 2.0, &exponent);
        if (!(muDoubleScalarAbs(x - b_data[i - 1]) < ldexp(1.0, exponent - 53)))
        {
          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);

    nb++;
    b_data[nb - 1] = (int8_T)x;
    emlrtPushRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&qc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&oc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > nb) {
    b1 = FALSE;
  } else {
    b1 = (nb > 2147483646);
  }

  if (b1) {
    emlrtPushRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&dc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > nb) {
    i2 = 0;
  } else {
    i2 = nb;
  }

  if (!(4 != i2)) {
  } else {
    emlrtPushRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m8 = mxCreateCharArray(2, iv36);
    for (i = 0; i < 13; i++) {
      cv45[i] = cv46[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 13, m8, cv45);
    emlrtAssign(&y, m8);
    b_error(b_message(y, &h_emlrtMCI), &h_emlrtMCI);
    emlrtPopRtStackR2012b(&sc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);

  /*  Error message:  */
  /*  If pilot index is 2-D, the indices per symbol must be unique; */
  /*  If pilot index is 3-D, the indices across transmit antennas per symbol must be unique. */
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&v_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&s_emlrtRSI, emlrtRootTLSGlobal);
  return b_object;
}

/* End of code generation (OFDMModulator.c) */
