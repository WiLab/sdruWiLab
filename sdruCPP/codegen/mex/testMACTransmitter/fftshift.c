/*
 * fftshift.c
 *
 * Code generation for function 'fftshift'
 *
 * C source code generated on: Thu Mar  6 22:22:40 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "testMACTransmitter.h"
#include "fftshift.h"
#include "eml_int_forloop_overflow_check.h"
#include "testMACTransmitter_data.h"
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
  boolean_T b10;
  int32_T i;
  int32_T i1;
  boolean_T b11;
  int32_T j;
  int32_T ia;
  int32_T ib;
  real_T xtmp_re;
  real_T xtmp_im;
  boolean_T b12;
  boolean_T b13;
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
    st.site = &cq_emlrtRSI;
    if (x->size[dim] <= 1) {
    } else {
      b_st.site = &uq_emlrtRSI;
      vlend2 = x->size[dim];
      vlend2 += (vlend2 < 0);
      if (vlend2 >= 0) {
        vlend2 = (int32_T)((uint32_T)vlend2 >> 1);
      } else {
        vlend2 = ~(int32_T)((uint32_T)~vlend2 >> 1);
      }

      b_st.site = &tq_emlrtRSI;
      vstride = 1;
      k = 1;
      while (k <= dim) {
        vstride <<= 6;
        k = 2;
      }

      b_st.site = &sq_emlrtRSI;
      npages = 1;
      k = dim + 2;
      while (k < 3) {
        npages *= x->size[1];
        k = 3;
      }

      b_st.site = &rq_emlrtRSI;
      b_st.site = &rq_emlrtRSI;
      vspread = (x->size[dim] - 1) * vstride;
      b_st.site = &qq_emlrtRSI;
      midoffset = vlend2 * vstride - 1;
      b_st.site = &pq_emlrtRSI;
      b_st.site = &pq_emlrtRSI;
      if (vlend2 << 1 == x->size[dim]) {
        i2 = 0;
        b_st.site = &oq_emlrtRSI;
        if (1 > npages) {
          b10 = FALSE;
        } else {
          b10 = (npages > 2147483646);
        }

        if (b10) {
          c_st.site = &eg_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (i = 1; i <= npages; i++) {
          i1 = i2;
          b_st.site = &lj_emlrtRSI;
          i2 += vspread;
          b_st.site = &nq_emlrtRSI;
          if (1 > vstride) {
            b11 = FALSE;
          } else {
            b11 = (vstride > 2147483646);
          }

          if (b11) {
            c_st.site = &eg_emlrtRSI;
            check_forloop_overflow_error(&c_st);
          }

          for (j = 1; j <= vstride; j++) {
            b_st.site = &hd_emlrtRSI;
            i1++;
            b_st.site = &mj_emlrtRSI;
            i2++;
            ia = i1 - 1;
            b_st.site = &id_emlrtRSI;
            ib = i1 + midoffset;
            b_st.site = &mq_emlrtRSI;
            for (k = 1; k <= vlend2; k++) {
              xtmp_re = x->data[ia].re;
              xtmp_im = x->data[ia].im;
              x->data[ia] = x->data[ib];
              x->data[ib].re = xtmp_re;
              x->data[ib].im = xtmp_im;
              b_st.site = &jd_emlrtRSI;
              ia += vstride;
              b_st.site = &kd_emlrtRSI;
              ib += vstride;
            }
          }
        }
      } else {
        i2 = 0;
        b_st.site = &lq_emlrtRSI;
        if (1 > npages) {
          b12 = FALSE;
        } else {
          b12 = (npages > 2147483646);
        }

        if (b12) {
          c_st.site = &eg_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (i = 1; i <= npages; i++) {
          i1 = i2;
          b_st.site = &kq_emlrtRSI;
          i2 += vspread;
          b_st.site = &jq_emlrtRSI;
          if (1 > vstride) {
            b13 = FALSE;
          } else {
            b13 = (vstride > 2147483646);
          }

          if (b13) {
            c_st.site = &eg_emlrtRSI;
            check_forloop_overflow_error(&c_st);
          }

          for (j = 1; j <= vstride; j++) {
            b_st.site = &iq_emlrtRSI;
            i1++;
            b_st.site = &hq_emlrtRSI;
            i2++;
            ia = i1 - 1;
            b_st.site = &gq_emlrtRSI;
            ib = i1 + midoffset;
            xtmp_re = x->data[ib].re;
            xtmp_im = x->data[ib].im;
            b_st.site = &fq_emlrtRSI;
            for (k = 1; k <= vlend2; k++) {
              b_st.site = &eq_emlrtRSI;
              ic = ib + vstride;
              x->data[ib] = x->data[ia];
              x->data[ia] = x->data[ic];
              b_st.site = &dq_emlrtRSI;
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
