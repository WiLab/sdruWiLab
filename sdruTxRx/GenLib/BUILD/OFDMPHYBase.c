/*
 * OFDMPHYBase.c
 *
 * Code generation for function 'OFDMPHYBase'
 *
 * C source code generated on: Thu Jul  3 10:46:48 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PHYReceiverFun.h"
#include "OFDMPHYBase.h"
#include "PHYReceiverFun_emxutil.h"
#include <stdio.h>

/* Function Declarations */
static void do_vectors(const real_T a_data[105], const int32_T a_size[1], const
  real_T b[8], real_T c_data[8], int32_T c_size[1], int32_T ia_data[8], int32_T
  ia_size[1], int32_T ib_data[8], int32_T ib_size[1]);

/* Function Definitions */
static void do_vectors(const real_T a_data[105], const int32_T a_size[1], const
  real_T b[8], real_T c_data[8], int32_T c_size[1], int32_T ia_data[8], int32_T
  ia_size[1], int32_T ib_data[8], int32_T ib_size[1])
{
  int32_T iafirst;
  int32_T ncmax;
  int32_T nc;
  int32_T ialast;
  int32_T ibfirst;
  int32_T iblast;
  int32_T b_ialast;
  real_T ak;
  boolean_T exitg2;
  real_T absxk;
  int32_T exponent;
  int32_T b_iblast;
  real_T bk;
  boolean_T exitg1;
  int32_T b_exponent;
  int32_T c_exponent;
  boolean_T p;
  int32_T b_ia_data[8];
  real_T b_c_data[8];
  iafirst = a_size[0];
  if (iafirst <= 8) {
    ncmax = iafirst;
  } else {
    ncmax = 8;
  }

  c_size[0] = (int8_T)ncmax;
  ia_size[0] = ncmax;
  ib_size[0] = ncmax;
  nc = 0;
  iafirst = 0;
  ialast = 0;
  ibfirst = 0;
  iblast = 0;
  while ((ialast + 1 <= a_size[0]) && (iblast + 1 <= 8)) {
    b_ialast = ialast + 1;
    ak = a_data[ialast];
    exitg2 = FALSE;
    while ((exitg2 == FALSE) && (b_ialast < a_size[0])) {
      absxk = fabs(a_data[ialast] / 2.0);
      if (!rtIsNaN(absxk)) {
        if (absxk <= 2.2250738585072014E-308) {
          absxk = 4.94065645841247E-324;
        } else {
          frexp(absxk, &exponent);
          absxk = ldexp(1.0, exponent - 53);
        }
      } else {
        absxk = rtNaN;
      }

      if (fabs(a_data[ialast] - a_data[b_ialast]) < absxk) {
        b_ialast++;
      } else {
        exitg2 = TRUE;
      }
    }

    ialast = b_ialast - 1;
    b_iblast = iblast + 1;
    bk = b[iblast];
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (b_iblast < 8)) {
      absxk = fabs(b[iblast] / 2.0);
      if (!rtIsNaN(absxk)) {
        if (absxk <= 2.2250738585072014E-308) {
          absxk = 4.94065645841247E-324;
        } else {
          frexp(absxk, &b_exponent);
          absxk = ldexp(1.0, b_exponent - 53);
        }
      } else {
        absxk = rtNaN;
      }

      if (fabs(b[iblast] - b[b_iblast]) < absxk) {
        b_iblast++;
      } else {
        exitg1 = TRUE;
      }
    }

    iblast = b_iblast - 1;
    absxk = fabs(bk / 2.0);
    if (!rtIsNaN(absxk)) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &c_exponent);
        absxk = ldexp(1.0, c_exponent - 53);
      }
    } else {
      absxk = rtNaN;
    }

    if (fabs(bk - ak) < absxk) {
      nc++;
      c_data[nc - 1] = ak;
      ia_data[nc - 1] = iafirst + 1;
      ib_data[nc - 1] = ibfirst + 1;
      ialast = b_ialast;
      iafirst = b_ialast;
      iblast = b_iblast;
      ibfirst = b_iblast;
    } else {
      if ((ak < bk) || rtIsNaN(bk)) {
        p = TRUE;
      } else {
        p = FALSE;
      }

      if (p) {
        ialast = b_ialast;
        iafirst = b_ialast;
      } else {
        iblast = b_iblast;
        ibfirst = b_iblast;
      }
    }
  }

  if (ncmax > 0) {
    if (1 > nc) {
      iafirst = 0;
    } else {
      iafirst = nc;
    }

    for (ialast = 0; ialast < iafirst; ialast++) {
      b_ia_data[ialast] = ia_data[ialast];
    }

    ia_size[0] = iafirst;
    for (ialast = 0; ialast < iafirst; ialast++) {
      ia_data[ialast] = b_ia_data[ialast];
    }
  }

  if (ncmax > 0) {
    if (1 > nc) {
      iafirst = 0;
    } else {
      iafirst = nc;
    }

    for (ialast = 0; ialast < iafirst; ialast++) {
      b_ia_data[ialast] = ib_data[ialast];
    }

    ib_size[0] = iafirst;
    for (ialast = 0; ialast < iafirst; ialast++) {
      ib_data[ialast] = b_ia_data[ialast];
    }
  }

  if (ncmax > 0) {
    if (1 > nc) {
      iafirst = 0;
    } else {
      iafirst = nc;
    }

    for (ialast = 0; ialast < iafirst; ialast++) {
      b_c_data[ialast] = c_data[ialast];
    }

    c_size[0] = iafirst;
    for (ialast = 0; ialast < iafirst; ialast++) {
      c_data[ialast] = b_c_data[ialast];
    }
  }
}

void OFDMPHYBase_freqCorrectOFDM(const b_PHYReceiver_167 *obj, const
  emxArray_creal_T *rFrame, emxArray_creal_T *rFreqShifted)
{
  emxArray_real_T *t;
  emxArray_creal_T *y;
  real_T kd;
  int32_T loop_ub;
  int32_T i;
  real_T x[15];
  real_T b_y;
  int32_T n;
  real_T c_y;
  real_T cdiff;
  int32_T nm1d2;
  b_emxInit_real_T(&t, 2);
  emxInit_creal_T(&y, 1);
  if (obj->numProcessed < 15.0) {
    kd = obj->numProcessed;
    if (1.0 > kd) {
      loop_ub = 0;
    } else {
      loop_ub = (int32_T)kd;
    }

    for (i = 0; i < loop_ub; i++) {
      x[i] = obj->frequency[i];
    }

    if (loop_ub == 0) {
      b_y = 0.0;
    } else {
      b_y = x[0];
      for (i = 2; i <= loop_ub; i++) {
        b_y += x[i - 1];
      }
    }

    kd = ((real_T)rFrame->size[0] - 1.0) / 5.0E+6;
    if (kd < 0.0) {
      n = -1;
      c_y = kd;
    } else {
      i = (int32_T)floor(kd / 2.0E-7 + 0.5);
      c_y = (real_T)i * 2.0E-7;
      cdiff = c_y - kd;
      if (fabs(cdiff) < 4.4408920985006262E-16 * kd) {
        i++;
        c_y = kd;
      } else if (cdiff > 0.0) {
        c_y = ((real_T)i - 1.0) * 2.0E-7;
      } else {
        i++;
      }

      n = i - 1;
    }

    i = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = n + 1;
    emxEnsureCapacity((emxArray__common *)t, i, (int32_T)sizeof(real_T));
    if (n + 1 > 0) {
      t->data[0] = 0.0;
      if (n + 1 > 1) {
        t->data[n] = c_y;
        nm1d2 = n / 2;
        for (i = 1; i < nm1d2; i++) {
          kd = (real_T)i * 2.0E-7;
          t->data[i] = kd;
          t->data[n - i] = c_y - kd;
        }

        if (nm1d2 << 1 == n) {
          t->data[nm1d2] = c_y / 2.0;
        } else {
          kd = (real_T)nm1d2 * 2.0E-7;
          t->data[nm1d2] = kd;
          t->data[nm1d2 + 1] = c_y - kd;
        }
      }
    }

    cdiff = b_y / (real_T)loop_ub * 0.0;
    kd = b_y / (real_T)loop_ub;
    i = y->size[0];
    y->size[0] = t->size[1];
    emxEnsureCapacity((emxArray__common *)y, i, (int32_T)sizeof(creal_T));
    loop_ub = t->size[1];
    for (i = 0; i < loop_ub; i++) {
      y->data[i].re = t->data[i] * cdiff;
      y->data[i].im = t->data[i] * kd;
    }

    i = rFreqShifted->size[0];
    rFreqShifted->size[0] = y->size[0];
    emxEnsureCapacity((emxArray__common *)rFreqShifted, i, (int32_T)sizeof
                      (creal_T));
    loop_ub = y->size[0];
    for (i = 0; i < loop_ub; i++) {
      rFreqShifted->data[i] = y->data[i];
    }

    for (i = 0; i < y->size[0]; i++) {
      kd = exp(rFreqShifted->data[i].re / 2.0);
      b_y = rFreqShifted->data[i].im;
      cdiff = rFreqShifted->data[i].im;
      rFreqShifted->data[i].re = kd * (kd * cos(b_y));
      rFreqShifted->data[i].im = kd * (kd * sin(cdiff));
    }

    i = rFreqShifted->size[0];
    emxEnsureCapacity((emxArray__common *)rFreqShifted, i, (int32_T)sizeof
                      (creal_T));
    loop_ub = rFreqShifted->size[0];
    for (i = 0; i < loop_ub; i++) {
      kd = rFreqShifted->data[i].re;
      b_y = rFreqShifted->data[i].im;
      cdiff = rFrame->data[i].re;
      c_y = rFrame->data[i].im;
      rFreqShifted->data[i].re = kd * cdiff - b_y * c_y;
      rFreqShifted->data[i].im = kd * c_y + b_y * cdiff;
    }
  } else {
    for (i = 0; i < 15; i++) {
      x[i] = obj->frequency[i];
    }

    b_y = x[0];
    for (i = 0; i < 14; i++) {
      b_y += x[i + 1];
    }

    kd = ((real_T)rFrame->size[0] - 1.0) / 5.0E+6;
    if (kd < 0.0) {
      n = -1;
      c_y = kd;
    } else {
      i = (int32_T)floor(kd / 2.0E-7 + 0.5);
      c_y = (real_T)i * 2.0E-7;
      cdiff = c_y - kd;
      if (fabs(cdiff) < 4.4408920985006262E-16 * kd) {
        i++;
        c_y = kd;
      } else if (cdiff > 0.0) {
        c_y = ((real_T)i - 1.0) * 2.0E-7;
      } else {
        i++;
      }

      n = i - 1;
    }

    i = t->size[0] * t->size[1];
    t->size[0] = 1;
    t->size[1] = n + 1;
    emxEnsureCapacity((emxArray__common *)t, i, (int32_T)sizeof(real_T));
    if (n + 1 > 0) {
      t->data[0] = 0.0;
      if (n + 1 > 1) {
        t->data[n] = c_y;
        nm1d2 = n / 2;
        for (i = 1; i < nm1d2; i++) {
          kd = (real_T)i * 2.0E-7;
          t->data[i] = kd;
          t->data[n - i] = c_y - kd;
        }

        if (nm1d2 << 1 == n) {
          t->data[nm1d2] = c_y / 2.0;
        } else {
          kd = (real_T)nm1d2 * 2.0E-7;
          t->data[nm1d2] = kd;
          t->data[nm1d2 + 1] = c_y - kd;
        }
      }
    }

    cdiff = b_y / 15.0 * 0.0;
    kd = b_y / 15.0;
    i = y->size[0];
    y->size[0] = t->size[1];
    emxEnsureCapacity((emxArray__common *)y, i, (int32_T)sizeof(creal_T));
    loop_ub = t->size[1];
    for (i = 0; i < loop_ub; i++) {
      y->data[i].re = t->data[i] * cdiff;
      y->data[i].im = t->data[i] * kd;
    }

    i = rFreqShifted->size[0];
    rFreqShifted->size[0] = y->size[0];
    emxEnsureCapacity((emxArray__common *)rFreqShifted, i, (int32_T)sizeof
                      (creal_T));
    loop_ub = y->size[0];
    for (i = 0; i < loop_ub; i++) {
      rFreqShifted->data[i] = y->data[i];
    }

    for (i = 0; i < y->size[0]; i++) {
      kd = exp(rFreqShifted->data[i].re / 2.0);
      b_y = rFreqShifted->data[i].im;
      cdiff = rFreqShifted->data[i].im;
      rFreqShifted->data[i].re = kd * (kd * cos(b_y));
      rFreqShifted->data[i].im = kd * (kd * sin(cdiff));
    }

    i = rFreqShifted->size[0];
    emxEnsureCapacity((emxArray__common *)rFreqShifted, i, (int32_T)sizeof
                      (creal_T));
    loop_ub = rFreqShifted->size[0];
    for (i = 0; i < loop_ub; i++) {
      kd = rFreqShifted->data[i].re;
      b_y = rFreqShifted->data[i].im;
      cdiff = rFrame->data[i].re;
      c_y = rFrame->data[i].im;
      rFreqShifted->data[i].re = kd * cdiff - b_y * c_y;
      rFreqShifted->data[i].im = kd * c_y + b_y * cdiff;
    }
  }

  emxFree_creal_T(&y);
  emxFree_real_T(&t);
}

void OFDMPHYBase_locateShortPreamble(const real_T M[105], real_T
  *preambleEstimatedLocation, real_T *numPeaks)
{
  int32_T ixstart;
  real_T mtmp;
  int32_T ix;
  boolean_T exitg2;
  uint8_T ii_data[105];
  int32_T k;
  boolean_T exitg1;
  boolean_T guard1 = FALSE;
  int32_T loop_ub;
  int8_T b_ii_data[105];
  int32_T i3;
  int8_T MLocations_data[105];
  int32_T peaks_data[105];
  int32_T i;
  real_T MLocationGuesses[8];
  real_T b_MLocations_data[105];
  int32_T MLocations_size[1];
  int32_T ib_size[1];
  int32_T ib_data[8];
  int32_T ia_size[1];
  int32_T ia_data[8];
  int32_T c_size[1];
  real_T c_data[8];
  boolean_T x_data[105];
  ixstart = 1;
  mtmp = M[0];
  if (rtIsNaN(M[0])) {
    ix = 2;
    exitg2 = FALSE;
    while ((exitg2 == FALSE) && (ix < 106)) {
      ixstart = ix;
      if (!rtIsNaN(M[ix - 1])) {
        mtmp = M[ix - 1];
        exitg2 = TRUE;
      } else {
        ix++;
      }
    }
  }

  if (ixstart < 105) {
    while (ixstart + 1 < 106) {
      if (M[ixstart] > mtmp) {
        mtmp = M[ixstart];
      }

      ixstart++;
    }
  }

  ixstart = 0;
  k = 1;
  exitg1 = FALSE;
  while ((exitg1 == FALSE) && (k < 106)) {
    guard1 = FALSE;
    if (M[k - 1] > mtmp * 0.2) {
      ixstart++;
      ii_data[ixstart - 1] = (uint8_T)k;
      if (ixstart >= 105) {
        exitg1 = TRUE;
      } else {
        guard1 = TRUE;
      }
    } else {
      guard1 = TRUE;
    }

    if (guard1 == TRUE) {
      k++;
    }
  }

  if (1 > ixstart) {
    loop_ub = 0;
  } else {
    loop_ub = ixstart;
  }

  for (i3 = 0; i3 < loop_ub; i3++) {
    b_ii_data[i3] = (int8_T)ii_data[i3];
  }

  for (i3 = 0; i3 < loop_ub; i3++) {
    ii_data[i3] = (uint8_T)b_ii_data[i3];
  }

  for (i3 = 0; i3 < loop_ub; i3++) {
    MLocations_data[i3] = (int8_T)(ii_data[i3] - 9);
  }

  ixstart = (int8_T)loop_ub;
  for (i3 = 0; i3 < ixstart; i3++) {
    peaks_data[i3] = 0;
  }

  for (i = 0; i < loop_ub; i++) {
    for (i3 = 0; i3 < 8; i3++) {
      MLocationGuesses[i3] = (MLocations_data[i] + 16 * i3) + 16;
    }

    if (i + 1 > loop_ub) {
      i3 = 0;
      ix = 0;
    } else {
      i3 = i;
      ix = loop_ub;
    }

    MLocations_size[0] = ix - i3;
    ixstart = ix - i3;
    for (ix = 0; ix < ixstart; ix++) {
      b_MLocations_data[ix] = MLocations_data[i3 + ix];
    }

    do_vectors(b_MLocations_data, MLocations_size, MLocationGuesses, c_data,
               c_size, ia_data, ia_size, ib_data, ib_size);
    peaks_data[i] = c_size[0];
  }

  ixstart = (int8_T)loop_ub;
  for (i3 = 0; i3 < ixstart; i3++) {
    x_data[i3] = (peaks_data[i3] < 7);
  }

  k = 0;
  for (i = 1; i <= (int8_T)loop_ub; i++) {
    if (x_data[i - 1]) {
      k++;
    }
  }

  ixstart = 0;
  for (i = 1; i <= (int8_T)loop_ub; i++) {
    if (x_data[i - 1]) {
      ii_data[ixstart] = (uint8_T)i;
      ixstart++;
    }
  }

  for (i3 = 0; i3 < k; i3++) {
    peaks_data[ii_data[i3] - 1] = 0;
  }

  if (!((int8_T)loop_ub == 0)) {
    ixstart = peaks_data[0];
    k = 0;
    if (((int8_T)loop_ub > 1) && (1 < (int8_T)loop_ub)) {
      for (ix = 2; ix <= (int8_T)loop_ub; ix++) {
        if (peaks_data[ix - 1] > ixstart) {
          ixstart = peaks_data[ix - 1];
          k = ix - 1;
        }
      }
    }

    *numPeaks = ixstart;
    if (ixstart > 0) {
      *preambleEstimatedLocation = MLocations_data[k];
    } else {
      *preambleEstimatedLocation = -1.0;
    }
  } else {
    *preambleEstimatedLocation = -1.0;
    *numPeaks = 0.0;
  }

  *numPeaks /= 8.0;
}

/* End of code generation (OFDMPHYBase.c) */
