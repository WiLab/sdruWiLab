/*
 * OFDMModulator.c
 *
 * Code generation for function 'OFDMModulator'
 *
 * C source code generated on: Sat Mar 29 15:48:37 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testPHYTransmit.h"
#include "OFDMModulator.h"
#include "SystemProp.h"
#include "testPHYTransmit_emxutil.h"
#include "testPHYTransmit_data.h"

/* Variable Definitions */
static emlrtRSInfo tc_emlrtRSI = { 355, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo uc_emlrtRSI = { 378, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRSInfo vc_emlrtRSI = { 384, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtRTEInfo g_emlrtRTEI = { 391, 19, "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m" };

static emlrtBCInfo b_emlrtBCI = { 1, 64, 403, 9, "packedData", "OFDMModulator",
  "/home/sdruser/git/traviscollins/sdruWiLab/sdruTxRx/OFDMModulator.m", 0 };

/* Function Definitions */
OFDMModulator_4 *OFDMModulator_OFDMModulator(OFDMModulator_4 *object)
{
  OFDMModulator_4 *b_object;
  OFDMModulator_4 *obj;
  b_object = object;
  emlrtPushRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  obj = b_object;
  emlrtPushRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  obj->isInitialized = FALSE;
  obj->isReleased = FALSE;
  emlrtPushRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&n_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&m_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&l_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&k_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&p_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&t_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&o_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&q_emlrtRSI, emlrtRootTLSGlobal);
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
  emlrtPushRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&mb_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPopRtStackR2012b(&tc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  for (ii = 0; ii < 768; ii++) {
    ii_data[ii] = 1.0;
  }

  c_SystemProp_matlabCodegenSetAn(obj, ii_data);
  emlrtPopRtStackR2012b(&nb_emlrtRSI, emlrtRootTLSGlobal);
  for (ii = 0; ii < 768; ii++) {
    ii_data[ii] = obj->pFullGrid[ii];
  }

  for (ii = 0; ii < 12; ii++) {
    for (idx = 0; idx < 11; idx++) {
      ii_data[iv42[idx] + (ii << 6)] = 0.0;
    }
  }

  emlrtPushRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  c_SystemProp_matlabCodegenSetAn(obj, ii_data);
  emlrtPopRtStackR2012b(&ob_emlrtRSI, emlrtRootTLSGlobal);
  for (ii = 0; ii < 768; ii++) {
    ii_data[ii] = obj->pFullGrid[ii];
  }

  for (ii = 0; ii < 12; ii++) {
    ii_data[32 + (ii << 6)] = 0.0;
  }

  emlrtPushRtStackR2012b(&uc_emlrtRSI, emlrtRootTLSGlobal);
  c_SystemProp_matlabCodegenSetAn(obj, ii_data);
  emlrtPopRtStackR2012b(&uc_emlrtRSI, emlrtRootTLSGlobal);
  for (ii = 0; ii < 768; ii++) {
    ii_data[ii] = obj->pFullGrid[ii];
  }

  for (ii = 0; ii < 48; ii++) {
    ii_data[iv43[ii]] = 2.0;
  }

  emlrtPushRtStackR2012b(&vc_emlrtRSI, emlrtRootTLSGlobal);
  c_SystemProp_matlabCodegenSetAn(obj, ii_data);
  emlrtPopRtStackR2012b(&vc_emlrtRSI, emlrtRootTLSGlobal);
  emlrtPushRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
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
  emlrtPopRtStackR2012b(&pb_emlrtRSI, emlrtRootTLSGlobal);
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

  emlrtHeapReferenceStackEnterFcnR2012b(emlrtRootTLSGlobal);
  for (i = 0; i < 64; i++) {
    packedData[i].re = obj->pFullGrid[i];
    packedData[i].im = 0.0;
  }

  emxInit_int32_T(&r0, 1, &g_emlrtRTEI, TRUE);
  iy = r0->size[0];
  r0->size[0] = obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)r0, iy, (int32_T)sizeof(int32_T),
                    &g_emlrtRTEI);
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
  emlrtHeapReferenceStackLeaveFcnR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (OFDMModulator.c) */
