/*
 * OFDMDemodulator.c
 *
 * Code generation for function 'OFDMDemodulator'
 *
 * C source code generated on: Thu Apr  3 19:51:42 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACReceiver.h"
#include "OFDMDemodulator.h"
#include "SystemProp.h"
#include "receiveData.h"
#include "coarseOFDMFreqEst_sdr.h"
#include "SystemCore.h"
#include "testMACReceiver_mexutil.h"
#include "testMACReceiver_data.h"

/* Variable Definitions */
static emlrtRSInfo ej_emlrtRSI = { 136, "OFDMDemodulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMDemodulator.m" };

/* Function Definitions */
OFDMDemodulator_2 *OFDMDemodulator_OFDMDemodulator(OFDMDemodulator_2 *object)
{
  OFDMDemodulator_2 *b_object;
  OFDMDemodulator_2 *obj;
  int8_T b_data[4];
  int32_T i;
  int32_T nb;
  int32_T x;
  int32_T exitg1;
  int32_T exponent;
  boolean_T b1;
  int32_T i5;
  const mxArray *y;
  static const int32_T iv55[2] = { 1, 13 };

  const mxArray *m11;
  char_T cv68[13];
  static const char_T cv69[13] = { 'c', 'o', 'm', 'm', ':', 'O', 'F', 'D', 'M',
    ':', 'x', 'x', 'x' };

  b_object = object;
  emlrtPushRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
  obj = b_object;
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  obj->isInitialized = FALSE;
  obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&cd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&dd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ed_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&fd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&gd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&hd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&id_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);

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
  emlrtPushRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
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
    emlrtPushRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
    emlrtPopRtStackR2012b(&pc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPushRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&nc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > nb) {
    b1 = FALSE;
  } else {
    b1 = (nb > 2147483646);
  }

  if (b1) {
    emlrtPushRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
    check_forloop_overflow_error();
    emlrtPopRtStackR2012b(&cc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&mc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&lc_emlrtRSI, emlrtRootTLSGlobal);
  if (1 > nb) {
    i5 = 0;
  } else {
    i5 = nb;
  }

  if (!(4 != i5)) {
  } else {
    emlrtPushRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
    y = NULL;
    m11 = mxCreateCharArray(2, iv55);
    for (i = 0; i < 13; i++) {
      cv68[i] = cv69[i];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 13, m11, cv68);
    emlrtAssign(&y, m11);
    c_error(b_message(y, &h_emlrtMCI), &h_emlrtMCI);
    emlrtPopRtStackR2012b(&rc_emlrtRSI, emlrtRootTLSGlobal);
  }

  emlrtPopRtStackR2012b(&kc_emlrtRSI, emlrtRootTLSGlobal);

  /*  Error message:  */
  /*  If pilot index is 2-D, the indices per symbol must be unique; */
  /*  If pilot index is 3-D, the indices across transmit antennas per symbol must be unique. */
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&jd_emlrtRSI, emlrtRootTLSGlobal);
  return b_object;
}

void OFDMDemodulator_setupImpl(OFDMDemodulator *obj)
{
  int8_T fullGrid[768];
  int32_T ii;
  int32_T idx;
  static const int8_T iv131[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  static const int16_T iv132[48] = { 11, 25, 39, 53, 75, 89, 103, 117, 139, 153,
    167, 181, 203, 217, 231, 245, 267, 281, 295, 309, 331, 345, 359, 373, 395,
    409, 423, 437, 459, 473, 487, 501, 523, 537, 551, 565, 587, 601, 615, 629,
    651, 665, 679, 693, 715, 729, 743, 757 };

  int16_T ii_data[768];
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int16_T b_ii_data[768];
  real_T c_ii_data[768];
  int32_T ii_size[1];
  memset(&fullGrid[0], 1, 768U * sizeof(int8_T));
  for (ii = 0; ii < 12; ii++) {
    for (idx = 0; idx < 11; idx++) {
      fullGrid[iv131[idx] + (ii << 6)] = 0;
    }

    fullGrid[32 + (ii << 6)] = 0;
  }

  emlrtPushRtStackR2012b(&ej_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&ej_emlrtRSI, emlrtRootTLSGlobal);
  for (ii = 0; ii < 48; ii++) {
    fullGrid[iv132[ii]] = 2;
  }

  emlrtPushRtStackR2012b(&vi_emlrtRSI, emlrtRootTLSGlobal);
  idx = 0;
  ii = 1;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (ii < 769)) {
    guard1 = FALSE;
    if (fullGrid[ii - 1] == 1) {
      idx++;
      ii_data[idx - 1] = (int16_T)ii;
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
    b_ii_data[ii] = ii_data[ii];
  }

  for (ii = 0; ii < idx; ii++) {
    ii_data[ii] = b_ii_data[ii];
  }

  ii_size[0] = idx;
  for (ii = 0; ii < idx; ii++) {
    c_ii_data[ii] = ii_data[ii];
  }

  f_SystemProp_matlabCodegenSetAn(obj, c_ii_data, ii_size);
  emlrtPopRtStackR2012b(&vi_emlrtRSI, emlrtRootTLSGlobal);
}

/* End of code generation (OFDMDemodulator.c) */
