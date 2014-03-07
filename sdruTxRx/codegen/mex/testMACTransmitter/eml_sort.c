/*
 * eml_sort.c
 *
 * Code generation for function 'eml_sort'
 *
 * C source code generated on: Thu Mar  6 22:22:40 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "eml_sort.h"
#include "eml_int_forloop_overflow_check.h"
#include "testMACTransmitter_data.h"
#include <stdio.h>

/* Variable Definitions */
static emlrtRSInfo ld_emlrtRSI = { 55, "prodsize",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/prodsize.m"
};

static emlrtRSInfo sk_emlrtRSI = { 50, "prodsize",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/prodsize.m"
};

static emlrtRSInfo wq_emlrtRSI = { 49, "prodsize",
  "/Applications/MATLAB_R2013b.app/toolbox/shared/coder/coder/+coder/+internal/prodsize.m"
};

static emlrtRSInfo ur_emlrtRSI = { 20, "eml_sort",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort.m" };

static emlrtRSInfo vr_emlrtRSI = { 50, "eml_sort",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort.m" };

static emlrtRSInfo wr_emlrtRSI = { 62, "eml_sort",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort.m" };

static emlrtRSInfo xr_emlrtRSI = { 63, "eml_sort",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort.m" };

static emlrtRSInfo yr_emlrtRSI = { 64, "eml_sort",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort.m" };

static emlrtRSInfo as_emlrtRSI = { 66, "eml_sort",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort.m" };

static emlrtRSInfo bs_emlrtRSI = { 68, "eml_sort",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort.m" };

static emlrtRSInfo cs_emlrtRSI = { 69, "eml_sort",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort.m" };

static emlrtRSInfo ds_emlrtRSI = { 70, "eml_sort",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort.m" };

static emlrtRSInfo es_emlrtRSI = { 71, "eml_sort",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort.m" };

static emlrtRSInfo fs_emlrtRSI = { 78, "eml_sort",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort.m" };

static emlrtRSInfo gs_emlrtRSI = { 84, "eml_sort",
  "/Applications/MATLAB_R2013b.app/toolbox/eml/lib/matlab/eml/eml_sort.m" };

/* Function Declarations */
static void b_eml_sort(const emlrtStack *sp, const int32_T x_size[1], int32_T
  dim, real_T y_data[195], int32_T y_size[1], int32_T idx_data[195], int32_T
  idx_size[1]);
static void eml_assert_valid_dim(void);
static void eml_sort_idx(const int32_T x_size[1], int32_T idx_data[195], int32_T
  idx_size[1]);

/* Function Definitions */
static void b_eml_sort(const emlrtStack *sp, const int32_T x_size[1], int32_T
  dim, real_T y_data[195], int32_T y_size[1], int32_T idx_data[195], int32_T
  idx_size[1])
{
  int32_T vlen;
  int32_T vwork_size[1];
  int32_T vstride;
  boolean_T b6;
  int32_T k;
  int32_T i1;
  boolean_T b7;
  int32_T j;
  int32_T iidx_size[1];
  int32_T iidx_data[195];
  int32_T ix;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &vr_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  eml_assert_valid_dim();
  if (dim <= 1) {
    vlen = x_size[0] - 1;
  } else {
    vlen = 0;
  }

  vwork_size[0] = (uint8_T)(vlen + 1);
  y_size[0] = x_size[0];
  idx_size[0] = (uint8_T)x_size[0];
  st.site = &wr_emlrtRSI;
  b_st.site = &vq_emlrtRSI;
  vstride = 1;
  c_st.site = &wq_emlrtRSI;
  if (1 > dim - 1) {
    b6 = FALSE;
  } else {
    b6 = (dim - 1 > 2147483646);
  }

  if (b6) {
    d_st.site = &eg_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  k = 1;
  while (k <= dim - 1) {
    c_st.site = &sk_emlrtRSI;
    vstride *= x_size[0];
    k = 2;
  }

  st.site = &xr_emlrtRSI;
  st.site = &xr_emlrtRSI;
  st.site = &yr_emlrtRSI;
  b_st.site = &xq_emlrtRSI;
  k = dim + 1;
  while (k < 3) {
    c_st.site = &ld_emlrtRSI;
    k = 3;
  }

  st.site = &as_emlrtRSI;
  b_st.site = &dg_emlrtRSI;
  i1 = -1;
  st.site = &bs_emlrtRSI;
  st.site = &cs_emlrtRSI;
  b_st.site = &dg_emlrtRSI;
  if (1 > vstride) {
    b7 = FALSE;
  } else {
    b7 = (vstride > 2147483646);
  }

  if (b7) {
    b_st.site = &eg_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (j = 1; j <= vstride; j++) {
    st.site = &ds_emlrtRSI;
    i1++;
    st.site = &es_emlrtRSI;
    st.site = &fs_emlrtRSI;
    eml_sort_idx(vwork_size, iidx_data, iidx_size);
    ix = i1;
    for (k = 0; k <= vlen; k++) {
      y_data[ix] = 0.0;
      idx_data[ix] = iidx_data[k];
      st.site = &gs_emlrtRSI;
      ix += vstride;
    }
  }
}

static void eml_assert_valid_dim(void)
{
}

static void eml_sort_idx(const int32_T x_size[1], int32_T idx_data[195], int32_T
  idx_size[1])
{
  int32_T k;
  int32_T i;
  int32_T idx0_data[195];
  int32_T i2;
  int32_T j;
  int32_T pEnd;
  int32_T p;
  int32_T q;
  int32_T qEnd;
  int32_T kEnd;
  idx_size[0] = (uint8_T)x_size[0];
  if (x_size[0] == 0) {
  } else {
    for (k = 1; k <= x_size[0]; k++) {
      idx_data[k - 1] = k;
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
        p = j;
        q = pEnd;
        qEnd = j + i2;
        if (qEnd > x_size[0] + 1) {
          qEnd = x_size[0] + 1;
        }

        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          idx0_data[k] = idx_data[p - 1];
          p++;
          if (p == pEnd) {
            while (q < qEnd) {
              k++;
              idx0_data[k] = idx_data[q - 1];
              q++;
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

void eml_sort(const emlrtStack *sp, const int32_T x_size[1], real_T y_data[195],
              int32_T y_size[1], int32_T idx_data[195], int32_T idx_size[1])
{
  int32_T i19;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  i19 = 2;
  if (x_size[0] != 1) {
    i19 = 1;
  }

  st.site = &ur_emlrtRSI;
  b_eml_sort(&st, x_size, i19, y_data, y_size, idx_data, idx_size);
}

/* End of code generation (eml_sort.c) */
