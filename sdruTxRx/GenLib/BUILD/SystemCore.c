/*
 * SystemCore.c
 *
 * Code generation for function 'SystemCore'
 *
 * C source code generated on: Thu Jul  3 10:46:48 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PHYReceiverFun.h"
#include "SystemCore.h"
#include "PHYReceiverFun_emxutil.h"
#include "PHYReceiver.h"
#include "fft.h"
#include "AGC.h"
#include "OFDMDemodulator.h"
#include "OFDMModulator.h"
#include <stdio.h>

/* Type Definitions */
#ifndef struct_comm_PNSequence_1
#define struct_comm_PNSequence_1

struct comm_PNSequence_1
{
  boolean_T S0_isInitialized;
  boolean_T S1_isReleased;
  uint8_T W0_shiftReg[7];
  uint8_T P0_Polynomial[8];
  uint8_T P1_IniState[7];
  uint8_T P2_Mask[7];
};

#endif                                 /*struct_comm_PNSequence_1*/

#ifndef typedef_comm_PNSequence_1
#define typedef_comm_PNSequence_1

typedef struct comm_PNSequence_1 comm_PNSequence_1;

#endif                                 /*typedef_comm_PNSequence_1*/

/* Function Declarations */
static void SystemCore_setup(b_PHYReceiver_167 *obj);
static void b_SystemCore_step(OFDMModulator *obj, const creal_T varargin_1[53],
  creal_T varargout_1[64]);

/* Function Definitions */
static void SystemCore_setup(b_PHYReceiver_167 *obj)
{
  b_PHYReceiver_167 *b_obj;
  int32_T j;
  OFDMModulator *object;
  OFDMDemodulator *b_object;
  int8_T TMPdataSubcarrierIndexies[53];
  int32_T c_obj[5];
  int32_T k;
  boolean_T x;
  boolean_T b_x[53];
  int8_T y_data[53];
  int32_T i;
  commcodegen_CRCDetector *d_obj;
  static const creal_T value[53] = { { 0.0, 0.0 }, { 0.0, 0.0 }, { 1.0, 1.0 }, {
      0.0, 0.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { -1.0, -1.0 }, { 0.0, 0.0 }, {
      0.0, 0.0 }, { 0.0, 0.0 }, { 1.0, 1.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 0.0,
      0.0 }, { -1.0, -1.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { -1.0,
      -1.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 1.0, 1.0 }, { 0.0, 0.0
    }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, {
      0.0, 0.0 }, { -1.0, -1.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { -
      1.0, -1.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 1.0, 1.0 }, { 0.0,
      0.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 1.0, 1.0 }, { 0.0, 0.0 }, { 0.0, 0.0
    }, { 0.0, 0.0 }, { 1.0, 1.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, { 0.0, 0.0 }, {
      1.0, 1.0 }, { 0.0, 0.0 }, { 0.0, 0.0 } };

  creal_T b[64];
  creal_T b_value[160];
  creal_T e_obj[53];
  static const int8_T c_value[53] = { 1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1,
    1, 1, -1, -1, 1, 1, -1, 1, -1, 1, 1, 1, 1, 0, 1, -1, -1, 1, 1, -1, 1, -1, 1,
    -1, -1, -1, -1, -1, 1, 1, -1, -1, 1, -1, 1, -1, 1, 1, 1, 1 };

  comm_PNSequence_1 hPN;
  comm_PNSequence_1 *f_obj;
  static const int8_T iv0[8] = { 1, 0, 0, 0, 1, 0, 0, 1 };

  static const int8_T iv1[7] = { 0, 0, 0, 0, 0, 0, 1 };

  uint8_T tmp;
  uint8_T tmp2;
  real_T d_value[4];
  real_T b_b;
  comm_AGC *g_obj;
  commcodegen_CRCDetector_1 *h_obj;
  b_obj = obj;
  b_obj->isInitialized = TRUE;
  b_obj = obj;
  for (j = 0; j < 8; j++) {
    b_obj->inputVarSize1[j] = 1U;
  }

  b_obj = obj;
  OFDMModulator_OFDMModulator(&b_obj->hDataMod);
  OFDMDemodulator_OFDMDemodulator(&b_obj->hDataDemod);
  object = &b_obj->hPreambleMod;
  object->isInitialized = FALSE;
  object->isReleased = FALSE;
  b_object = &b_obj->hPreambleDemod;
  b_object->isInitialized = FALSE;
  b_object->isReleased = FALSE;
  for (j = 0; j < 4; j++) {
    b_obj->pilotLocationsWithoutGuardbands[j] = 6.0 + 14.0 * (real_T)j;
  }

  for (j = 0; j < 53; j++) {
    TMPdataSubcarrierIndexies[j] = (int8_T)(1 + j);
  }

  for (j = 0; j < 4; j++) {
    c_obj[j] = (int32_T)b_obj->pilotLocationsWithoutGuardbands[j];
  }

  c_obj[4] = 27;
  for (j = 0; j < 5; j++) {
    TMPdataSubcarrierIndexies[c_obj[j] - 1] = 0;
  }

  k = 0;
  for (j = 0; j < 53; j++) {
    x = (TMPdataSubcarrierIndexies[j] > 0);
    if (x) {
      k++;
    }

    b_x[j] = x;
  }

  j = 0;
  for (i = 0; i < 53; i++) {
    if (b_x[i]) {
      y_data[j] = (int8_T)(i + 1);
      j++;
    }
  }

  j = b_obj->dataSubcarrierIndexies->size[0] * b_obj->
    dataSubcarrierIndexies->size[1];
  b_obj->dataSubcarrierIndexies->size[0] = 1;
  b_obj->dataSubcarrierIndexies->size[1] = k;
  emxEnsureCapacity((emxArray__common *)b_obj->dataSubcarrierIndexies, j,
                    (int32_T)sizeof(real_T));
  for (j = 0; j < k; j++) {
    b_obj->dataSubcarrierIndexies->data[j] = TMPdataSubcarrierIndexies[y_data[j]
      - 1];
  }

  d_obj = &b_obj->CRC;
  d_obj->isInitialized = FALSE;
  d_obj->isReleased = FALSE;
  for (i = 0; i < 53; i++) {
    b_obj->ShortPreamble[i] = value[i];
  }

  b_SystemCore_step(&b_obj->hPreambleMod, b_obj->ShortPreamble, b);
  for (i = 0; i < 64; i++) {
    b_obj->ShortPreambleOFDM[i].re = 1.4719601443879744 * b[i].re;
    b_obj->ShortPreambleOFDM[i].im = 1.4719601443879744 * b[i].im;
    b_value[i] = b_obj->ShortPreambleOFDM[i];
  }

  for (i = 0; i < 64; i++) {
    b_value[i + 64] = b_obj->ShortPreambleOFDM[i];
  }

  for (i = 0; i < 32; i++) {
    b_value[i + 128] = b_obj->ShortPreambleOFDM[i];
  }

  for (i = 0; i < 160; i++) {
    b_obj->CompleteShortPreambleOFDM[i] = b_value[i];
  }

  for (i = 0; i < 53; i++) {
    b_obj->LongPreamble[i] = c_value[i];
    e_obj[i].re = b_obj->LongPreamble[i];
    e_obj[i].im = 0.0;
  }

  b_SystemCore_step(&b_obj->hPreambleMod, e_obj, b);
  for (i = 0; i < 64; i++) {
    b_obj->LongPreambleOFDM[i] = b[i];
  }

  for (i = 0; i < 32; i++) {
    b_value[i] = b_obj->LongPreambleOFDM[i + 32];
  }

  for (i = 0; i < 64; i++) {
    b_value[i + 32] = b_obj->LongPreambleOFDM[i];
  }

  for (i = 0; i < 64; i++) {
    b_value[i + 96] = b_obj->LongPreambleOFDM[i];
  }

  for (i = 0; i < 160; i++) {
    b_obj->CompleteLongPreambleOFDM[i] = b_value[i];
  }

  f_obj = &hPN;

  /* System object Constructor function: comm.PNSequence */
  f_obj->S0_isInitialized = FALSE;
  f_obj->S1_isReleased = FALSE;
  for (i = 0; i < 8; i++) {
    f_obj->P0_Polynomial[i] = (uint8_T)iv0[i];
  }

  for (i = 0; i < 7; i++) {
    f_obj->P1_IniState[i] = 1;
    f_obj->P2_Mask[i] = (uint8_T)iv1[i];
  }

  f_obj = &hPN;
  if (!f_obj->S0_isInitialized) {
    f_obj->S0_isInitialized = TRUE;

    /* System object Initialization function: comm.PNSequence */
    for (j = 0; j < 7; j++) {
      f_obj->W0_shiftReg[j] = f_obj->P1_IniState[j];
    }
  }

  /* System object Outputs function: comm.PNSequence */
  tmp = 0;
  for (i = 0; i < 7; i++) {
    tmp = (uint8_T)((uint32_T)tmp + (uint8_T)((uint32_T)f_obj->P0_Polynomial[i +
      1] * f_obj->W0_shiftReg[i]));
  }

  tmp &= 1;
  tmp2 = 0;
  for (i = 0; i < 7; i++) {
    tmp2 = (uint8_T)((uint32_T)tmp2 + (uint8_T)((uint32_T)f_obj->W0_shiftReg[i] *
      f_obj->P2_Mask[i]));
  }

  j = tmp2 & 1;
  for (i = 5; i > -1; i += -1) {
    f_obj->W0_shiftReg[i + 1] = f_obj->W0_shiftReg[i];
  }

  f_obj->W0_shiftReg[0U] = tmp;
  for (i = 0; i < 4; i++) {
    b_obj->pilots[i] = 2.0 * (real_T)(j < 1) - 1.0;
    d_value[i] = b_obj->pilots[i];
  }

  b_b = b_obj->pilots[3];
  d_value[3] = -b_b;
  for (i = 0; i < 4; i++) {
    b_obj->pilots[i] = d_value[i];
  }

  f_obj = &hPN;

  /* System object Destructor function: comm.PNSequence */
  if (f_obj->S0_isInitialized) {
    f_obj->S0_isInitialized = FALSE;
    if (!f_obj->S1_isReleased) {
      f_obj->S1_isReleased = TRUE;
    }
  }

  for (i = 0; i < 15; i++) {
    b_obj->frequency[i] = 0.0;
  }

  b_obj->numProcessed = 0.0;
  b_obj->delay = 0.0;
  g_obj = &b_obj->pAGC;
  g_obj->isInitialized = FALSE;
  g_obj->isReleased = FALSE;
  h_obj = &b_obj->pCRC;
  h_obj->isInitialized = FALSE;
  h_obj->isReleased = FALSE;
  b_obj->pTimeoutDuration = 390.0;
  for (i = 0; i < 641; i++) {
    b_obj->Buffer[i].re = 0.0;
    b_obj->Buffer[i].im = 0.0;
  }

  b_obj->FrameLength = 400.0;
  b_obj = obj;
  b_obj->TunablePropsChanged = FALSE;
}

static void b_SystemCore_step(OFDMModulator *obj, const creal_T varargin_1[53],
  creal_T varargout_1[64])
{
  OFDMModulator *b_obj;
  real_T value[64];
  int32_T i;
  int32_T idx;
  static const int8_T iv2[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  boolean_T x[64];
  int8_T ii_data[64];
  int32_T ju;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int8_T b_ii_data[64];
  creal_T packedData[64];
  emxArray_int32_T *r0;
  creal_T postIFFT[64];
  int32_T ix;
  int32_T iy;
  boolean_T tst;
  real_T temp_re;
  real_T temp_im;
  int32_T iDelta2;
  int32_T k;
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

  if (!obj->isInitialized) {
    b_obj = obj;
    b_obj->isInitialized = TRUE;
    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = 1.0;
      value[i] = b_obj->pFullGrid[i];
    }

    for (idx = 0; idx < 11; idx++) {
      value[iv2[idx]] = 0.0;
    }

    for (i = 0; i < 64; i++) {
      b_obj->pFullGrid[i] = value[i];
      x[i] = (b_obj->pFullGrid[i] == 1.0);
    }

    idx = 0;
    ju = 1;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (ju < 65)) {
      guard1 = FALSE;
      if (x[ju - 1]) {
        idx++;
        ii_data[idx - 1] = (int8_T)ju;
        if (idx >= 64) {
          exitg1 = TRUE;
        } else {
          guard1 = TRUE;
        }
      } else {
        guard1 = TRUE;
      }

      if (guard1 == TRUE) {
        ju++;
      }
    }

    if (1 > idx) {
      ju = 0;
    } else {
      ju = idx;
    }

    for (idx = 0; idx < ju; idx++) {
      b_ii_data[idx] = ii_data[idx];
    }

    for (idx = 0; idx < ju; idx++) {
      ii_data[idx] = b_ii_data[idx];
    }

    idx = b_obj->pDataLinearIndices->size[0];
    b_obj->pDataLinearIndices->size[0] = ju;
    emxEnsureCapacity((emxArray__common *)b_obj->pDataLinearIndices, idx,
                      (int32_T)sizeof(real_T));
    for (idx = 0; idx < ju; idx++) {
      b_obj->pDataLinearIndices->data[idx] = ii_data[idx];
    }

    b_obj->TunablePropsChanged = FALSE;
  }

  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_obj->TunablePropsChanged = FALSE;
  }

  b_obj = obj;
  for (i = 0; i < 64; i++) {
    packedData[i].re = b_obj->pFullGrid[i];
    packedData[i].im = 0.0;
  }

  emxInit_int32_T(&r0, 1);
  idx = r0->size[0];
  r0->size[0] = b_obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)r0, idx, (int32_T)sizeof(int32_T));
  ju = b_obj->pDataLinearIndices->size[0];
  for (idx = 0; idx < ju; idx++) {
    r0->data[idx] = (int32_T)b_obj->pDataLinearIndices->data[idx];
  }

  ju = r0->size[0];
  for (idx = 0; idx < ju; idx++) {
    packedData[r0->data[idx] - 1] = varargin_1[idx];
  }

  emxFree_int32_T(&r0);
  eml_fftshift(packedData);
  ix = 0;
  ju = 0;
  iy = 0;
  for (i = 0; i < 63; i++) {
    postIFFT[iy] = packedData[ix];
    idx = 64;
    tst = TRUE;
    while (tst) {
      idx >>= 1;
      ju ^= idx;
      tst = ((ju & idx) == 0);
    }

    iy = ju;
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
      idx = i + ix;
      temp_re = postIFFT[idx].re;
      temp_im = postIFFT[idx].im;
      postIFFT[i + ix].re = postIFFT[i].re - postIFFT[idx].re;
      postIFFT[i + ix].im = postIFFT[i].im - postIFFT[idx].im;
      postIFFT[i].re += temp_re;
      postIFFT[i].im += temp_im;
    }

    idx = 1;
    for (ju = k; ju < 32; ju += k) {
      i = idx;
      iy = idx + iheight;
      while (i < iy) {
        temp_re = dv1[ju] * postIFFT[i + ix].re - dv0[ju] * postIFFT[i + ix].im;
        temp_im = dv1[ju] * postIFFT[i + ix].im + dv0[ju] * postIFFT[i + ix].re;
        postIFFT[i + ix].re = postIFFT[i].re - temp_re;
        postIFFT[i + ix].im = postIFFT[i].im - temp_im;
        postIFFT[i].re += temp_re;
        postIFFT[i].im += temp_im;
        i += iDelta2;
      }

      idx++;
    }

    k /= 2;
    ix = iDelta2;
    iDelta2 <<= 1;
    iheight -= ix;
  }

  for (idx = 0; idx < 64; idx++) {
    postIFFT[idx].re *= 0.015625;
    postIFFT[idx].im *= 0.015625;
  }

  iy = 0;
  ix = 0;
  for (idx = 0; idx < 64; idx++) {
    packedData[iy] = postIFFT[ix];
    ix++;
    iy++;
  }

  memcpy(&varargout_1[0], &packedData[0], sizeof(creal_T) << 6);
}

void SystemCore_step(b_PHYReceiver_167 *obj, real_T varargin_1, boolean_T
                     varargout_1_data[2304], int32_T varargout_1_size[2])
{
  b_PHYReceiver_167 *b_obj;
  int32_T k;
  boolean_T exitg1;
  if (!obj->isInitialized) {
    SystemCore_setup(obj);
  }

  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_obj->TunablePropsChanged = FALSE;
  }

  b_obj = obj;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != 1U) {
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = 1U;
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  PHYReceiver_stepImpl(obj, varargin_1, varargout_1_data, varargout_1_size);
}

void c_SystemCore_step(comm_AGC *obj, const creal_T varargin_1[641], creal_T
  varargout_1[641])
{
  comm_AGC *b_obj;
  int32_T k;
  static const int16_T value[8] = { 641, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T exitg1;
  static const int16_T iv4[8] = { 641, 1, 1, 1, 1, 1, 1, 1 };

  if (!obj->isInitialized) {
    b_obj = obj;
    b_obj->isInitialized = TRUE;
    for (k = 0; k < 8; k++) {
      b_obj->inputVarSize1[k] = (uint32_T)value[k];
    }

    b_obj->Gain = 1.0;
    b_obj->pDetectorIsRectifier = TRUE;
    b_obj->Gain = 1.0;
    b_obj->TunablePropsChanged = FALSE;
  }

  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_obj->TunablePropsChanged = FALSE;
  }

  b_obj = obj;
  k = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 8)) {
    if (b_obj->inputVarSize1[k] != (uint32_T)iv4[k]) {
      for (k = 0; k < 8; k++) {
        b_obj->inputVarSize1[k] = (uint32_T)value[k];
      }

      exitg1 = TRUE;
    } else {
      k++;
    }
  }

  AGC_stepImpl(obj, varargin_1, varargout_1);
}

void d_SystemCore_step(OFDMDemodulator *obj, const creal_T varargin_1[64],
  emxArray_creal_T *varargout_1)
{
  OFDMDemodulator *b_obj;
  int8_T fullGrid[64];
  int32_T ii;
  static const int8_T iv5[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  int32_T idx;
  int8_T ii_data[64];
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int8_T b_ii_data[64];
  creal_T inputIn3D[64];
  creal_T b_inputIn3D[64];
  emxArray_real_T *x;
  emxArray_creal_T *b_x;
  if (!obj->isInitialized) {
    b_obj = obj;
    b_obj->isInitialized = TRUE;
    memset(&fullGrid[0], 1, sizeof(int8_T) << 6);
    for (ii = 0; ii < 11; ii++) {
      fullGrid[iv5[ii]] = 0;
    }

    idx = 0;
    ii = 1;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (ii < 65)) {
      guard1 = FALSE;
      if (fullGrid[ii - 1] == 1) {
        idx++;
        ii_data[idx - 1] = (int8_T)ii;
        if (idx >= 64) {
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

    ii = b_obj->pDataLinearIndices->size[0];
    b_obj->pDataLinearIndices->size[0] = idx;
    emxEnsureCapacity((emxArray__common *)b_obj->pDataLinearIndices, ii,
                      (int32_T)sizeof(real_T));
    for (ii = 0; ii < idx; ii++) {
      b_obj->pDataLinearIndices->data[ii] = ii_data[ii];
    }

    b_obj->TunablePropsChanged = FALSE;
  }

  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_obj->TunablePropsChanged = FALSE;
  }

  b_obj = obj;
  for (idx = 0; idx < 64; idx++) {
    inputIn3D[idx] = varargin_1[idx];
    b_inputIn3D[idx] = inputIn3D[idx];
  }

  emxInit_real_T(&x, 1);
  fft(b_inputIn3D, inputIn3D);
  eml_fftshift(inputIn3D);
  ii = x->size[0];
  x->size[0] = b_obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)x, ii, (int32_T)sizeof(real_T));
  idx = b_obj->pDataLinearIndices->size[0];
  for (ii = 0; ii < idx; ii++) {
    x->data[ii] = b_obj->pDataLinearIndices->data[ii];
  }

  emxInit_creal_T(&b_x, 1);
  ii = b_x->size[0];
  b_x->size[0] = b_obj->pDataLinearIndices->size[0];
  emxEnsureCapacity((emxArray__common *)b_x, ii, (int32_T)sizeof(creal_T));
  idx = b_obj->pDataLinearIndices->size[0];
  for (ii = 0; ii < idx; ii++) {
    b_x->data[ii] = inputIn3D[(int32_T)b_obj->pDataLinearIndices->data[ii] - 1];
  }

  idx = x->size[0];
  ii = varargout_1->size[0] * varargout_1->size[1] * varargout_1->size[2];
  varargout_1->size[0] = idx;
  varargout_1->size[1] = 1;
  varargout_1->size[2] = 1;
  emxEnsureCapacity((emxArray__common *)varargout_1, ii, (int32_T)sizeof(creal_T));
  idx = 0;
  emxFree_real_T(&x);
  while (idx + 1 <= b_x->size[0]) {
    varargout_1->data[idx] = b_x->data[idx];
    idx++;
  }

  emxFree_creal_T(&b_x);
}

void e_SystemCore_step(dspcodegen_FIRRateConverter *obj, const creal_T
  varargin_1[24], creal_T varargout_1[288])
{
  dspcodegen_FIRRateConverter *b_obj;
  int32_T i;
  static const int8_T value[8] = { 24, 1, 1, 1, 1, 1, 1, 1 };

  dsp_FIRRateConverter_3 *c_obj;
  boolean_T exitg1;
  static const int8_T iv6[8] = { 24, 1, 1, 1, 1, 1, 1, 1 };

  int32_T outIdx;
  int32_T inIdx;
  int32_T inBufIdx;
  int32_T n;
  int32_T outputStartIdx;
  int32_T outputStopIdx;
  real_T acc_re;
  real_T acc_im;
  int32_T coefPolyphaseOffset;
  real_T prod_re;
  real_T prod_im;
  if (!obj->isInitialized) {
    b_obj = obj;
    b_obj->isInitialized = TRUE;
    for (i = 0; i < 8; i++) {
      b_obj->inputVarSize1[i] = (uint32_T)value[i];
    }

    c_obj = &b_obj->cSFunObject;
    if (!c_obj->S0_isInitialized) {
      c_obj->S0_isInitialized = TRUE;

      /* System object Initialization function: dsp.FIRRateConverter */
      c_obj->W1_InBufIdx = 0;
      for (i = 0; i < 21; i++) {
        c_obj->W0_InBuf[i].re = 0.0;
        c_obj->W0_InBuf[i].im = 0.0;
      }
    }

    c_obj = &b_obj->cSFunObject;

    /* System object Initialization function: dsp.FIRRateConverter */
    c_obj->W1_InBufIdx = 0;
    for (i = 0; i < 21; i++) {
      c_obj->W0_InBuf[i].re = 0.0;
      c_obj->W0_InBuf[i].im = 0.0;
    }

    b_obj->TunablePropsChanged = FALSE;
  }

  b_obj = obj;
  if (b_obj->TunablePropsChanged) {
    b_obj->TunablePropsChanged = FALSE;
  }

  b_obj = obj;
  i = 0;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (i < 8)) {
    if (b_obj->inputVarSize1[i] != (uint32_T)iv6[i]) {
      for (i = 0; i < 8; i++) {
        b_obj->inputVarSize1[i] = (uint32_T)value[i];
      }

      exitg1 = TRUE;
    } else {
      i++;
    }
  }

  b_obj = obj;
  c_obj = &b_obj->cSFunObject;
  if (!c_obj->S0_isInitialized) {
    c_obj->S0_isInitialized = TRUE;

    /* System object Initialization function: dsp.FIRRateConverter */
    c_obj->W1_InBufIdx = 0;
    for (i = 0; i < 21; i++) {
      c_obj->W0_InBuf[i].re = 0.0;
      c_obj->W0_InBuf[i].im = 0.0;
    }
  }

  /* System object Outputs function: dsp.FIRRateConverter */
  outIdx = 0;
  inIdx = 0;

  /* Update inBufIdx and inputChannelOffset for current channel */
  inBufIdx = c_obj->W1_InBufIdx;
  for (n = 0; n < 24; n++) {
    outputStartIdx = c_obj->P2_StartIdx;
    outputStopIdx = c_obj->P3_StopIdx;

    /* Read input into inBufArray */
    c_obj->W0_InBuf[inBufIdx] = varargin_1[inIdx];
    inIdx++;

    /* Generate outputs (if any) for current input n */
    while (outputStartIdx < outputStopIdx) {
      acc_re = 0.0;
      acc_im = 0.0;
      coefPolyphaseOffset = c_obj->P1_PolyphaseSelector[outputStartIdx] * 21;
      for (i = inBufIdx; i < 21; i++) {
        prod_re = c_obj->P0_FILTER[(coefPolyphaseOffset + i) - inBufIdx] *
          c_obj->W0_InBuf[i].re;
        prod_im = c_obj->P0_FILTER[(coefPolyphaseOffset + i) - inBufIdx] *
          c_obj->W0_InBuf[i].im;
        acc_re += prod_re;
        acc_im += prod_im;
      }

      for (i = 0; i < inBufIdx; i++) {
        prod_re = c_obj->P0_FILTER[((coefPolyphaseOffset - inBufIdx) + i) + 21] *
          c_obj->W0_InBuf[i].re;
        prod_im = c_obj->P0_FILTER[((coefPolyphaseOffset - inBufIdx) + i) + 21] *
          c_obj->W0_InBuf[i].im;
        acc_re += prod_re;
        acc_im += prod_im;
      }

      varargout_1[outIdx].re = acc_re;
      varargout_1[outIdx].im = acc_im;
      outIdx++;
      outputStartIdx++;
    }

    /* Decrement inBufIdx, wrap if necessary */
    if (inBufIdx == 0) {
      inBufIdx = 20;
    } else {
      inBufIdx--;
    }
  }

  /* Update inBufIdx */
  c_obj->W1_InBufIdx = inBufIdx;
}

/* End of code generation (SystemCore.c) */
