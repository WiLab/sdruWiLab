/*
 * SpectrumSenseP25.c
 *
 * Code generation for function 'SpectrumSenseP25'
 *
 * C source code generated on: Thu Mar  6 22:22:40 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "SpectrumSenseP25.h"
#include "AGC.h"
#include "testMACTransmitter_emxutil.h"
#include "OFDMDemodulator.h"
#include "SystemCore.h"
#include "fprintf.h"
#include "eml_sort.h"
#include "commP25sscaGen.h"
#include "testMACTransmitter_mexutil.h"
#include "testMACTransmitter_data.h"
#include <stdio.h>

/* Type Definitions */
#ifndef struct_emxArray_int32_T_195
#define struct_emxArray_int32_T_195

struct emxArray_int32_T_195
{
  int32_T data[195];
  int32_T size[1];
};

#endif                                 /*struct_emxArray_int32_T_195*/

#ifndef typedef_emxArray_int32_T_195
#define typedef_emxArray_int32_T_195

typedef struct emxArray_int32_T_195 emxArray_int32_T_195;

#endif                                 /*typedef_emxArray_int32_T_195*/

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 29, 5, "commP25decision_noise",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/commdemos/commP25decision_noise.m"
};

static emlrtRSInfo fg_emlrtRSI = { 20, "eml_index_prod",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_index_prod.m"
};

static emlrtRSInfo lm_emlrtRSI = { 8, "SpectrumSenseP25",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/SpectrumSenseP25.m" };

static emlrtRSInfo mm_emlrtRSI = { 9, "SpectrumSenseP25",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/SpectrumSenseP25.m" };

static emlrtRSInfo nm_emlrtRSI = { 16, "SpectrumSenseP25",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/SpectrumSenseP25.m" };

static emlrtRSInfo om_emlrtRSI = { 19, "SpectrumSenseP25",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/SpectrumSenseP25.m" };

static emlrtRSInfo pm_emlrtRSI = { 20, "SpectrumSenseP25",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/SpectrumSenseP25.m" };

static emlrtRSInfo qm_emlrtRSI = { 21, "SpectrumSenseP25",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/SpectrumSenseP25.m" };

static emlrtRSInfo rm_emlrtRSI = { 23, "SpectrumSenseP25",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/SpectrumSenseP25.m" };

static emlrtRSInfo tr_emlrtRSI = { 20, "sort",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/datafun/sort.m" };

static emlrtRSInfo ms_emlrtRSI = { 31, "ind2sub",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/ind2sub.m" };

static emlrtRSInfo ns_emlrtRSI = { 32, "ind2sub",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/ind2sub.m" };

static emlrtRSInfo os_emlrtRSI = { 34, "ind2sub",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/ind2sub.m" };

static emlrtRSInfo ps_emlrtRSI = { 36, "ind2sub",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/ind2sub.m" };

static emlrtRSInfo qs_emlrtRSI = { 37, "ind2sub",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/ind2sub.m" };

static emlrtRSInfo rs_emlrtRSI = { 38, "ind2sub",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/ind2sub.m" };

static emlrtRSInfo ss_emlrtRSI = { 40, "ind2sub",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/ind2sub.m" };

static emlrtRSInfo ts_emlrtRSI = { 61, "ind2sub",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/ind2sub.m" };

static emlrtRSInfo us_emlrtRSI = { 29, "commP25decision_noise",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/commdemos/commP25decision_noise.m"
};

static emlrtRSInfo xs_emlrtRSI = { 18, "commP25decision_noise",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/commdemos/commP25decision_noise.m"
};

static emlrtMCInfo y_emlrtMCI = { 33, 5, "ind2sub",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/ind2sub.m" };

static emlrtMCInfo ab_emlrtMCI = { 32, 15, "ind2sub",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/ind2sub.m" };

static emlrtRTEInfo y_emlrtRTEI = { 1, 22, "SpectrumSenseP25",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/SpectrumSenseP25.m" };

static emlrtECInfo e_emlrtECI = { -1, 9, 5, "SpectrumSenseP25",
  "/Volumes/git/traviscollins/sdruWiLab/sdruTxRx/SpectrumSenseP25.m" };

static emlrtECInfo f_emlrtECI = { -1, 16, 8, "commP25decision_noise",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/commdemos/commP25decision_noise.m"
};

static emlrtECInfo g_emlrtECI = { -1, 15, 8, "commP25decision_noise",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/commdemos/commP25decision_noise.m"
};

static emlrtBCInfo o_emlrtBCI = { -1, -1, 9, 8, "Ades", "commP25decision_noise",
  "/Applications/MATLAB_R2013b.app/toolbox/comm/commdemos/commP25decision_noise.m",
  0 };

static emlrtRSInfo vbb_emlrtRSI = { 33, "ind2sub",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/elmat/ind2sub.m" };

static emlrtRSInfo dcb_emlrtRSI = { 14, "eml_index_rdivide",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_index_rdivide.m"
};

/* Function Declarations */
static void b_eml_sort_idx(const real_T x_data[195], const int32_T x_size[1],
  int32_T idx_data[195], int32_T idx_size[1]);
static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator);

/* Function Definitions */
static void b_eml_sort_idx(const real_T x_data[195], const int32_T x_size[1],
  int32_T idx_data[195], int32_T idx_size[1])
{
  int32_T k;
  boolean_T guard2 = FALSE;
  boolean_T p;
  int32_T i;
  int32_T idx0_data[195];
  int32_T i2;
  int32_T j;
  int32_T pEnd;
  int32_T b_p;
  int32_T q;
  int32_T qEnd;
  int32_T kEnd;
  boolean_T guard1 = FALSE;
  idx_size[0] = (uint8_T)x_size[0];
  if (x_size[0] == 0) {
  } else {
    for (k = 1; k <= x_size[0]; k++) {
      idx_data[k - 1] = k;
    }

    for (k = 1; k <= x_size[0] - 1; k += 2) {
      guard2 = FALSE;
      if (x_data[k - 1] <= x_data[k]) {
        guard2 = TRUE;
      } else if (muDoubleScalarIsNaN(x_data[k])) {
        guard2 = TRUE;
      } else {
        p = FALSE;
      }

      if (guard2 == TRUE) {
        p = TRUE;
      }

      if (p) {
      } else {
        idx_data[k - 1] = k + 1;
        idx_data[k] = k;
      }
    }

    k = x_size[0];
    for (i = 0; i < k; i++) {
      idx0_data[i] = 1;
    }

    i = 2;
    while (i < x_size[0]) {
      i2 = i << 1;
      j = 1;
      for (pEnd = 1 + i; pEnd < x_size[0] + 1; pEnd = qEnd + i) {
        b_p = j;
        q = pEnd - 1;
        qEnd = j + i2;
        if (qEnd > x_size[0] + 1) {
          qEnd = x_size[0] + 1;
        }

        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          guard1 = FALSE;
          if (x_data[idx_data[b_p - 1] - 1] <= x_data[idx_data[q] - 1]) {
            guard1 = TRUE;
          } else if (muDoubleScalarIsNaN(x_data[idx_data[q] - 1])) {
            guard1 = TRUE;
          } else {
            p = FALSE;
          }

          if (guard1 == TRUE) {
            p = TRUE;
          }

          if (p) {
            idx0_data[k] = idx_data[b_p - 1];
            b_p++;
            if (b_p == pEnd) {
              while (q + 1 < qEnd) {
                k++;
                idx0_data[k] = idx_data[q];
                q++;
              }
            }
          } else {
            idx0_data[k] = idx_data[q];
            q++;
            if (q + 1 == qEnd) {
              while (b_p < pEnd) {
                k++;
                idx0_data[k] = idx_data[b_p - 1];
                b_p++;
              }
            }
          }

          k++;
        }

        for (k = 0; k + 1 <= kEnd; k++) {
          idx_data[(j + k) - 1] = idx0_data[k];
        }

        j = qEnd;
      }

      i = i2;
    }
  }
}

static int32_T div_s32(const emlrtStack *sp, int32_T numerator, int32_T
  denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  int32_T quotientNeedsNegation;
  if (denominator == 0) {
    if (numerator >= 0) {
      quotient = MAX_int32_T;
    } else {
      quotient = MIN_int32_T;
    }

    emlrtDivisionByZeroErrorR2012b(0, sp);
  } else {
    if (numerator >= 0) {
      absNumerator = (uint32_T)numerator;
    } else {
      absNumerator = (uint32_T)-numerator;
    }

    if (denominator >= 0) {
      absDenominator = (uint32_T)denominator;
    } else {
      absDenominator = (uint32_T)-denominator;
    }

    quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
    absNumerator /= absDenominator;
    if ((uint32_T)quotientNeedsNegation) {
      quotient = -(int32_T)absNumerator;
    } else {
      quotient = (int32_T)absNumerator;
    }
  }

  return quotient;
}

void SpectrumSenseP25(testMACTransmitterStackData *SD, const emlrtStack *sp,
                      comm_AGC *ObjAGC, comm_SDRuReceiver *ObjSDRuReceiver,
                      real_T decisions[10])
{
  int32_T k;
  static const int32_T iv94[1] = { 5120 };

  static const int32_T iv95[1] = { 0 };

  comm_AGC *obj;
  const mxArray *y;
  static const int32_T iv96[2] = { 1, 45 };

  const mxArray *m15;
  char_T cv104[45];
  int32_T maxndx;
  static const char_T cv105[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C',
    'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv97[2] = { 1, 4 };

  char_T cv106[4];
  static const char_T cv107[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv98[2] = { 1, 51 };

  char_T cv108[51];
  static const char_T cv109[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y',
    's', 't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l',
    'e', 'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l',
    'e', 'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv99[2] = { 1, 5 };

  char_T cv110[5];
  static const char_T cv111[5] = { 's', 'e', 't', 'u', 'p' };

  int32_T b_k;
  static const int16_T value[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

  boolean_T anyInputSizeChanged;
  boolean_T exitg2;
  static const int16_T iv100[8] = { 5120, 1, 1, 1, 1, 1, 1, 1 };

  emxArray_real_T *alphao;
  creal_T data_data[1];
  int32_T data_size[1];
  int32_T Sx_size[2];
  real_T Sx_data[195];
  int32_T iv101[1];
  int32_T v1_size[1];
  int32_T v1_data[195];
  int32_T Ades_size[1];
  real_T Ades_data[195];
  int32_T Index_size_idx_0;
  int32_T Index_data[195];
  int32_T exitg1;
  const mxArray *e_y;
  static const int32_T iv102[2] = { 1, 36 };

  char_T cv112[36];
  static const char_T cv113[36] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'd', '2', 's', 'u', 'b', '_', 'I', 'n', 'd',
    'e', 'x', 'O', 'u', 't', 'O', 'f', 'R', 'a', 'n', 'g', 'e' };

  int32_T vk_data[195];
  int32_T Ridx_size[1];
  emxArray_int32_T_195 fcb_emlrtRSI;
  real_T u;
  const mxArray *f_y;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &st;
  d_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  Collect Data */
  for (k = 0; k < 10; k++) {
    st.site = &lm_emlrtRSI;
    g_SystemCore_step(SD, &st, ObjSDRuReceiver, SD->u2.f10.tmp);
    emlrtSubAssignSizeCheckR2012b(iv95, 1, iv94, 1, &e_emlrtECI, sp);
    st.site = &mm_emlrtRSI;
    obj = ObjAGC;
    if (!obj->isReleased) {
    } else {
      y = NULL;
      m15 = mxCreateCharArray(2, iv96);
      for (maxndx = 0; maxndx < 45; maxndx++) {
        cv104[maxndx] = cv105[maxndx];
      }

      emlrtInitCharArrayR2013a(&st, 45, m15, cv104);
      emlrtAssign(&y, m15);
      b_y = NULL;
      m15 = mxCreateCharArray(2, iv97);
      for (maxndx = 0; maxndx < 4; maxndx++) {
        cv106[maxndx] = cv107[maxndx];
      }

      emlrtInitCharArrayR2013a(&st, 4, m15, cv106);
      emlrtAssign(&b_y, m15);
      b_st.site = &fb_emlrtRSI;
      c_error(&b_st, message(&b_st, y, b_y, &emlrtMCI), &emlrtMCI);
    }

    if (!obj->isInitialized) {
      b_st.site = &fb_emlrtRSI;
      if (!obj->isInitialized) {
      } else {
        c_y = NULL;
        m15 = mxCreateCharArray(2, iv98);
        for (maxndx = 0; maxndx < 51; maxndx++) {
          cv108[maxndx] = cv109[maxndx];
        }

        emlrtInitCharArrayR2013a(&b_st, 51, m15, cv108);
        emlrtAssign(&c_y, m15);
        d_y = NULL;
        m15 = mxCreateCharArray(2, iv99);
        for (maxndx = 0; maxndx < 5; maxndx++) {
          cv110[maxndx] = cv111[maxndx];
        }

        emlrtInitCharArrayR2013a(&b_st, 5, m15, cv110);
        emlrtAssign(&d_y, m15);
        c_st.site = &fb_emlrtRSI;
        c_error(&c_st, message(&c_st, c_y, d_y, &emlrtMCI), &emlrtMCI);
      }

      c_st.site = &fb_emlrtRSI;
      obj->isInitialized = TRUE;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      for (b_k = 0; b_k < 8; b_k++) {
        obj->inputVarSize1[b_k] = (uint32_T)value[b_k];
      }

      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      c_st.site = &fb_emlrtRSI;
      obj->Gain = 1.0;
      c_st.site = &fb_emlrtRSI;
      obj->Gain = 1.0;
    }

    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    anyInputSizeChanged = FALSE;
    b_k = 0;
    exitg2 = FALSE;
    while ((exitg2 == FALSE) && (b_k < 8)) {
      if (obj->inputVarSize1[b_k] != (uint32_T)iv100[b_k]) {
        anyInputSizeChanged = TRUE;
        c_st.site = &fb_emlrtRSI;
        for (b_k = 0; b_k < 8; b_k++) {
          obj->inputVarSize1[b_k] = (uint32_T)value[b_k];
        }

        exitg2 = TRUE;
      } else {
        b_k++;
      }
    }

    if (anyInputSizeChanged) {
      b_st.site = &fb_emlrtRSI;
      b_st.site = &fb_emlrtRSI;
    }

    b_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    b_st.site = &fb_emlrtRSI;
    memcpy(&SD->u2.f10.b_tmp[0], &SD->u2.f10.tmp[0], 5120U * sizeof(creal_T));
    b_st.site = &fb_emlrtRSI;
    AGC_stepImpl(SD, obj, SD->u2.f10.b_tmp, SD->u2.f10.unusedExpr);
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  memset(&decisions[0], 0, 10U * sizeof(real_T));
  b_emxInit_real_T(sp, &alphao, 2, &y_emlrtRTEI, TRUE);
  for (k = 0; k < 10; k++) {
    /*  64 represents the window time Tw, 4*N represents the observation time T */
    /* [Sx,alphao,fo] = commP25ssca(input,1,1/64,1/(4*N)); */
    st.site = &nm_emlrtRSI;
    b_st.site = &m_emlrtRSI;
    c_st.site = &n_emlrtRSI;
    data_size[0] = 0;
    st.site = &nm_emlrtRSI;
    commP25sscaGen(&st, data_data, data_size, rtInf, Sx_data, Sx_size, alphao);
    st.site = &om_emlrtRSI;
    iv101[0] = 65 * Sx_size[1];
    b_st.site = &tr_emlrtRSI;
    eml_sort(&b_st, iv101, Ades_data, Ades_size, v1_data, v1_size);
    Index_size_idx_0 = v1_size[0];
    maxndx = v1_size[0];
    for (b_k = 0; b_k < maxndx; b_k++) {
      Index_data[b_k] = v1_data[b_k];
    }

    /*  sort Sx by its element and store in Ades */
    st.site = &pm_emlrtRSI;
    b_st.site = &ms_emlrtRSI;
    c_st.site = &fg_emlrtRSI;
    b_st.site = &ms_emlrtRSI;
    maxndx = 65 * Sx_size[1];
    b_st.site = &ns_emlrtRSI;
    b_k = 0;
    do {
      exitg1 = 0;
      if (b_k <= v1_size[0] - 1) {
        c_st.site = &ts_emlrtRSI;
        if (!(maxndx >= Index_data[b_k])) {
          anyInputSizeChanged = FALSE;
          exitg1 = 1;
        } else {
          b_k++;
        }
      } else {
        anyInputSizeChanged = TRUE;
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    if (anyInputSizeChanged) {
    } else {
      e_y = NULL;
      m15 = mxCreateCharArray(2, iv102);
      for (maxndx = 0; maxndx < 36; maxndx++) {
        cv112[maxndx] = cv113[maxndx];
      }

      emlrtInitCharArrayR2013a(&st, 36, m15, cv112);
      emlrtAssign(&e_y, m15);
      b_st.site = &ns_emlrtRSI;
      d_st.site = &vbb_emlrtRSI;
      c_error(&b_st, b_message(&d_st, e_y, &y_emlrtMCI), &ab_emlrtMCI);
    }

    b_st.site = &os_emlrtRSI;
    for (b_k = 0; b_k < Index_size_idx_0; b_k++) {
      v1_data[b_k] = Index_data[b_k] - 1;
    }

    b_st.site = &ps_emlrtRSI;
    for (b_k = 0; b_k < Index_size_idx_0; b_k++) {
      c_st.site = &dcb_emlrtRSI;
      vk_data[b_k] = div_s32(&c_st, v1_data[b_k], 65);
    }

    b_st.site = &qs_emlrtRSI;
    maxndx = v1_size[0];
    for (b_k = 0; b_k < maxndx; b_k++) {
      Index_data[b_k] = vk_data[b_k] + 1;
    }

    b_st.site = &rs_emlrtRSI;
    b_st.site = &rs_emlrtRSI;
    b_st.site = &ss_emlrtRSI;

    /*  corresponding row index and column index */
    st.site = &qm_emlrtRSI;
    st.site = &rm_emlrtRSI;

    /*    Copyright 2012 The MathWorks, Inc. */
    /*  count the number of points above a threshold */
    if (0 <= Ades_size[0] - 1) {
      emlrtDynamicBoundsCheckFastR2012b(1, 1, Ades_size[0], &o_emlrtBCI, &st);
    }

    emlrtVectorVectorIndexCheckR2012b(v1_size[0], 1, 1, 0, &g_emlrtECI, &st);

    /*  record the x-coordinate of these points */
    emlrtVectorVectorIndexCheckR2012b(Index_size_idx_0, 1, 1, 0, &f_emlrtECI,
      &st);

    /*  record the y-coordinate of these points */
    b_st.site = &xs_emlrtRSI;
    c_st.site = &fi_emlrtRSI;
    Ridx_size[0] = 0;
    b_eml_sort_idx(Sx_data, Ridx_size, fcb_emlrtRSI.data, fcb_emlrtRSI.size);
    b_st.site = &xs_emlrtRSI;
    b_st.site = &us_emlrtRSI;
    u = b_fprintf(&b_st);
    f_y = NULL;
    m15 = mxCreateDoubleScalar(u);
    emlrtAssign(&f_y, m15);
    emlrtDisplayR2012b(f_y, "ans", &emlrtRTEI, &st);
    decisions[k] = 0.0;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&alphao);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (SpectrumSenseP25.c) */
