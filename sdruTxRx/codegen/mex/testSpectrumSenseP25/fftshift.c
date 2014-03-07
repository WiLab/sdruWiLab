/*
 * fftshift.c
 *
 * Code generation for function 'fftshift'
 *
 * C source code generated on: Thu Mar  6 23:19:56 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testSpectrumSenseP25.h"
#include "fftshift.h"
#include "eml_int_forloop_overflow_check.h"
#include "testSpectrumSenseP25_data.h"
#include <stdio.h>

/* Function Definitions */
void fftshift(const emlrtStack *sp, emxArray_creal_T *x)
{
  int32_T dim;
  int32_T vlend2;
  int32_T vstride;
  int32_T k;
  int32_T npages;
  int32_T vspread;
  int32_T midoffset;
  int32_T i2;
  boolean_T b6;
  int32_T i;
  int32_T i1;
  boolean_T b7;
  int32_T j;
  int32_T ia;
  int32_T ib;
  real_T xtmp_re;
  real_T xtmp_im;
  boolean_T b8;
  boolean_T b9;
  int32_T ic;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  for (dim = 0; dim < 2; dim++) {
    st.site = &cp_emlrtRSI;
    if (x->size[dim] <= 1) {
    } else {
      b_st.site = &up_emlrtRSI;
      vlend2 = x->size[dim];
      vlend2 += (vlend2 < 0);
      if (vlend2 >= 0) {
        vlend2 = (int32_T)((uint32_T)vlend2 >> 1);
      } else {
        vlend2 = ~(int32_T)((uint32_T)~vlend2 >> 1);
      }

      b_st.site = &tp_emlrtRSI;
      vstride = 1;
      k = 1;
      while (k <= dim) {
        vstride <<= 6;
        k = 2;
      }

      b_st.site = &sp_emlrtRSI;
      npages = 1;
      k = dim + 2;
      while (k < 3) {
        npages *= x->size[1];
        k = 3;
      }

      b_st.site = &rp_emlrtRSI;
      b_st.site = &rp_emlrtRSI;
      vspread = (x->size[dim] - 1) * vstride;
      b_st.site = &qp_emlrtRSI;
      midoffset = vlend2 * vstride - 1;
      b_st.site = &pp_emlrtRSI;
      b_st.site = &pp_emlrtRSI;
      if (vlend2 << 1 == x->size[dim]) {
        i2 = 0;
        b_st.site = &op_emlrtRSI;
        if (1 > npages) {
          b6 = FALSE;
        } else {
          b6 = (npages > 2147483646);
        }

        if (b6) {
          c_st.site = &xf_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (i = 1; i <= npages; i++) {
          i1 = i2;
          b_st.site = &yi_emlrtRSI;
          i2 += vspread;
          b_st.site = &np_emlrtRSI;
          if (1 > vstride) {
            b7 = FALSE;
          } else {
            b7 = (vstride > 2147483646);
          }

          if (b7) {
            c_st.site = &xf_emlrtRSI;
            check_forloop_overflow_error(&c_st);
          }

          for (j = 1; j <= vstride; j++) {
            b_st.site = &aj_emlrtRSI;
            i1++;
            b_st.site = &bj_emlrtRSI;
            i2++;
            ia = i1 - 1;
            b_st.site = &cj_emlrtRSI;
            ib = i1 + midoffset;
            b_st.site = &mp_emlrtRSI;
            for (k = 1; k <= vlend2; k++) {
              xtmp_re = x->data[ia].re;
              xtmp_im = x->data[ia].im;
              x->data[ia] = x->data[ib];
              x->data[ib].re = xtmp_re;
              x->data[ib].im = xtmp_im;
              b_st.site = &gd_emlrtRSI;
              ia += vstride;
              b_st.site = &hd_emlrtRSI;
              ib += vstride;
            }
          }
        }
      } else {
        i2 = 0;
        b_st.site = &lp_emlrtRSI;
        if (1 > npages) {
          b8 = FALSE;
        } else {
          b8 = (npages > 2147483646);
        }

        if (b8) {
          c_st.site = &xf_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (i = 1; i <= npages; i++) {
          i1 = i2;
          b_st.site = &kp_emlrtRSI;
          i2 += vspread;
          b_st.site = &jp_emlrtRSI;
          if (1 > vstride) {
            b9 = FALSE;
          } else {
            b9 = (vstride > 2147483646);
          }

          if (b9) {
            c_st.site = &xf_emlrtRSI;
            check_forloop_overflow_error(&c_st);
          }

          for (j = 1; j <= vstride; j++) {
            b_st.site = &ip_emlrtRSI;
            i1++;
            b_st.site = &hp_emlrtRSI;
            i2++;
            ia = i1 - 1;
            b_st.site = &gp_emlrtRSI;
            ib = i1 + midoffset;
            xtmp_re = x->data[ib].re;
            xtmp_im = x->data[ib].im;
            b_st.site = &fp_emlrtRSI;
            for (k = 1; k <= vlend2; k++) {
              b_st.site = &ep_emlrtRSI;
              ic = ib + vstride;
              x->data[ib] = x->data[ia];
              x->data[ia] = x->data[ic];
              b_st.site = &dp_emlrtRSI;
              ia += vstride;
              ib = ic;
            }

            x->data[ib].re = xtmp_re;
            x->data[ib].im = xtmp_im;
          }
        }
      }
    }
  }
}

/* End of code generation (fftshift.c) */
