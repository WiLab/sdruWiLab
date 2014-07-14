/*
 * PHYReceiver.c
 *
 * Code generation for function 'PHYReceiver'
 *
 * C source code generated on: Thu Jul  3 10:46:48 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "PHYReceiverFun.h"
#include "PHYReceiver.h"
#include "PHYReceiverFun_emxutil.h"
#include "resample.h"
#include "rdivide.h"
#include "fft.h"
#include "mean.h"
#include "power.h"
#include "abs.h"
#include "SystemCore.h"
#include "OFDMPHYBase.h"
#include "xcorr.h"
#include "PHYReceiverFun_rtwutil.h"
#include <stdio.h>

/* Function Declarations */
static real_T rt_atan2d_snf(real_T u0, real_T u1);

/* Function Definitions */
static real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T b_u0;
  int32_T b_u1;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      b_u0 = 1;
    } else {
      b_u0 = -1;
    }

    if (u1 > 0.0) {
      b_u1 = 1;
    } else {
      b_u1 = -1;
    }

    y = atan2(b_u0, b_u1);
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

b_PHYReceiver_167 *PHYReceiver_PHYReceiver(b_PHYReceiver_167 *obj)
{
  b_PHYReceiver_167 *b_obj;
  b_PHYReceiver_167 *c_obj;
  b_obj = obj;
  c_obj = b_obj;
  c_obj->isInitialized = FALSE;
  c_obj->isReleased = FALSE;
  return b_obj;
}

void PHYReceiver_stepImpl(b_PHYReceiver_167 *obj, real_T data, boolean_T
  RHard_data[2304], int32_T RHard_size[2])
{
  int32_T ia;
  b_PHYReceiver_167 *b_obj;
  real_T lastFound;
  real_T numBuffersProcessed;
  emxArray_creal_T *rFrame;
  emxArray_creal_T *RLongFirst;
  emxArray_creal_T *RLongSecond;
  emxArray_creal_T *R;
  emxArray_real_T *x;
  emxArray_creal_T *b_rFrame;
  emxArray_real_T *r1;
  emxArray_int32_T *r2;
  int32_T exitg1;
  int32_T i;
  creal_T value[641];
  real_T P_re;
  real_T P_im;
  creal_T known[16];
  creal_T b_known[16];
  creal_T Phat[223];
  real_T dv2[112];
  real_T dv3[112];
  real_T dv4[112];
  real_T Rhat[223];
  real_T dv5[105];
  real_T dv6[105];
  real_T dv7[105];
  real_T dv8[105];
  real_T dv9[105];
  boolean_T b0;
  creal_T b_x[32];
  real_T b_value[15];
  creal_T postFFT[64];
  real_T Known[106];
  creal_T b_R[106];
  int32_T ib;
  creal_T RNormal[106];
  real_T b_Known[106];
  creal_T RConj[53];
  creal_T preambleGainsFull[53];
  real_T dv10[53];
  OFDMDemodulator_1 *c_obj;
  int8_T fullGrid[64];
  static const int8_T iv3[11] = { 0, 1, 2, 3, 4, 5, 59, 60, 61, 62, 63 };

  int8_T ii_data[64];
  boolean_T exitg2;
  boolean_T guard1 = FALSE;
  int8_T b_ii_data[64];
  creal_T inputIn3D[80];
  creal_T PilotNormal[4];
  creal_T preamblePilotGains[4];
  real_T PilotEnergy[4];
  creal_T b_preamblePilotGains[4];
  creal_T dcv0[4];
  creal_T pilotEqGains[48];

  /*  OFDM Physical Layer Receiver */
  /* ceil( rx.frameLength*4 ); %Size of Buffer of sliding window */
  /*  Frames to capture */
  /* MessageCharacters = 80; */
  /*  Variables */
  /*  Objects */
  /*  Vector Memory */
  /* pMessageBits */
  /*  Create Modulator objects */
  /* CreateDemodulators(obj); */
  /*  Construct Modulator */
  /*  Construct Demod from mod */
  /*  Create modulator */
  /*  Construct Demod from mod */
  /*  Calculate locations of subcarrier datastreams without guardbands */
  /* Remove guardband offsets */
  /* Remove index offsets for pilots and guardbands */
  /* Remove pilot and DCNull locations */
  /* obj.dataSubcarrierIndexies = [1:5,7:19,21:26,28:33,35:47,49:53]; */
  /*  Create Preamble data */
  /*  Pre-initialize estimates to be saved between numFrames */
  /* Tracking number of processed found numFrames */
  /*             %% Setup Receiver */
  /*  System parameters to adjust because of hardware limitation */
  /*  Get from calibration */
  /*  Gain control */
  /*  Value must be constant, equal to rx.receiveBufferLength */
  /*  USRP */
  /*  CRC */
  /*  Timeout info */
  /*  Soft decisions */
  /* obj.pMessageBits = zeros(obj.NumFrames,obj.MessageCharacters*7+3);%3 for CRC */
  /* 3 for CRC */
  /* function recoveredMessage = stepImpl(obj,data) */
  /*  Preallocate output matrix */
  RHard_size[0] = 4;
  RHard_size[1] = 48;
  for (ia = 0; ia < 192; ia++) {
    RHard_data[ia] = FALSE;
  }

  /*  Receive Data */
  /* DEBUG */
  /* DEBUG */
  b_obj = obj;
  b_obj->numProcessed = 0.0;

  /*  # correct frames found */
  lastFound = -2.0;

  /* Flag for found frame, used for dup check */
  numBuffersProcessed = 0.0;

  /* Track received data, needed for separate indexing of processed and unprocessed data (processed==preamble found) */
  /*  Message string holder */
  /* coder.varsize('recoveredMessage', [1, 80], [0 1]); */
  /* recoveredMessage = ''; */
  /*             %% Process received data */
  /*  Locate frames in buffer and compensate for channel affects */
  emxInit_creal_T(&rFrame, 1);
  b_emxInit_creal_T(&RLongFirst, 3);
  b_emxInit_creal_T(&RLongSecond, 3);
  b_emxInit_creal_T(&R, 3);
  emxInit_real_T(&x, 1);
  emxInit_creal_T(&b_rFrame, 1);
  emxInit_real_T(&r1, 1);
  b_emxInit_int32_T(&r2, 2);
  do {
    exitg1 = 0;
    if (obj->numProcessed < 4.0) {
      /*  Get data from USRP or Input */
      b_obj = obj;
      for (i = 0; i < 641; i++) {
        value[i].re = data;
        value[i].im = 0.0;
        b_obj->Buffer[i] = value[i];
      }

      for (i = 0; i < 641; i++) {
        value[i] = obj->Buffer[i];
      }

      P_re = value[0].re;
      P_im = value[0].im;
      for (i = 0; i < 640; i++) {
        P_re += value[i + 1].re;
        P_im += value[i + 1].im;
      }

      if ((P_re == 0.0) && (P_im == 0.0)) {
        /*  All zeros from radio (Bug?) */
      } else {
        /*  Automatic Gain Control */
        b_obj = obj;
        c_SystemCore_step(&obj->pAGC, obj->Buffer, value);
        for (i = 0; i < 641; i++) {
          b_obj->Buffer[i] = value[i];
        }

        /*  Increment processed data index */
        numBuffersProcessed++;

        /*                 %% Find preamble in buffer */
        b_obj = obj;
        for (i = 0; i < 641; i++) {
          value[i] = obj->Buffer[i];
        }

        for (i = 0; i < 16; i++) {
          b_known[i] = b_obj->ShortPreambleOFDM[i];
          known[i].re = b_known[i].re;
          known[i].im = -b_known[i].im;
        }

        xcorr(*(creal_T (*)[112])&value[0], known, Phat);
        b_abs(*(creal_T (*)[112])&value[0], dv2);
        memcpy(&dv3[0], &dv2[0], 112U * sizeof(real_T));
        power(dv3, dv4);
        b_xcorr(dv4, Rhat);
        c_abs(*(creal_T (*)[105])&Phat[111], dv5);
        memcpy(&dv6[0], &dv5[0], 105U * sizeof(real_T));
        b_power(dv6, dv5);
        b_power(*(real_T (*)[105])&Rhat[111], dv7);
        memcpy(&dv8[0], &dv5[0], 105U * sizeof(real_T));
        rdivide(dv8, dv7, dv9);
        OFDMPHYBase_locateShortPreamble(dv9, &P_im, &P_re);
        b_obj = obj;
        b_obj->delay = P_im;

        /*  Check if frame exists in correct location and whether it's duplicate */
        /*  %Check if full data frame exists in buffer */
        /*  %Check if preamble located */
        if ((obj->delay + obj->FrameLength < 641.0) && (obj->delay > -1.0) &&
            (numBuffersProcessed - lastFound >= 2.0)) {
          b0 = TRUE;
        } else {
          b0 = FALSE;
        }

        /* Check if duplicate frame */
        /*                 %% Recover found frame */
        if (b0) {
          lastFound = numBuffersProcessed;

          /* Flag frame as found so duplicate frames are not processed */
          b_obj = obj;
          P_im = obj->numProcessed + 1.0;
          b_obj->numProcessed = P_im;

          /* Increment processed found frames */
          /*  Extract single frame from input buffer */
          P_re = obj->delay;
          ia = r1->size[0];
          r1->size[0] = (int32_T)floor(obj->FrameLength - 1.0) + 1;
          emxEnsureCapacity((emxArray__common *)r1, ia, (int32_T)sizeof(real_T));
          i = (int32_T)floor(obj->FrameLength - 1.0);
          for (ia = 0; ia <= i; ia++) {
            r1->data[ia] = 1.0 + (real_T)ia;
          }

          ia = r2->size[0] * r2->size[1];
          r2->size[0] = 1;
          emxEnsureCapacity((emxArray__common *)r2, ia, (int32_T)sizeof(int32_T));
          i = r1->size[0];
          ia = r2->size[0] * r2->size[1];
          r2->size[1] = i;
          emxEnsureCapacity((emxArray__common *)r2, ia, (int32_T)sizeof(int32_T));
          i = r1->size[0];
          for (ia = 0; ia < i; ia++) {
            r2->data[ia] = (int32_T)(P_re + r1->data[ia]);
          }

          ia = rFrame->size[0];
          rFrame->size[0] = r2->size[1];
          emxEnsureCapacity((emxArray__common *)rFrame, ia, (int32_T)sizeof
                            (creal_T));
          i = r2->size[1];
          for (ia = 0; ia < i; ia++) {
            rFrame->data[ia] = obj->Buffer[r2->data[ia] - 1];
          }

          /*  Correct frequency offset */
          b_obj = obj;
          for (ia = 0; ia < 32; ia++) {
            P_re = rFrame->data[ia].re;
            P_im = -rFrame->data[ia].im;
            b_x[ia].re = P_re * rFrame->data[ia + 32].re - P_im * rFrame->
              data[ia + 32].im;
            b_x[ia].im = P_re * rFrame->data[ia + 32].im + P_im * rFrame->
              data[ia + 32].re;
          }

          P_re = b_x[0].re;
          P_im = b_x[0].im;
          for (i = 0; i < 31; i++) {
            P_re += b_x[i + 1].re;
            P_im += b_x[i + 1].im;
          }

          P_re = rt_atan2d_snf(P_im, P_re);
          if (b_obj->numProcessed < 15.0) {
            for (i = 0; i < 15; i++) {
              b_value[i] = b_obj->frequency[i];
            }

            b_value[(int32_T)b_obj->numProcessed - 1] = P_re /
              4.0212385965949353E-5;
            for (i = 0; i < 15; i++) {
              b_obj->frequency[i] = b_value[i];
            }
          } else {
            for (i = 0; i < 14; i++) {
              b_value[i] = b_obj->frequency[i + 1];
            }

            b_value[14] = 0.0;
            for (i = 0; i < 15; i++) {
              b_obj->frequency[i] = b_value[i];
              P_im = b_obj->frequency[i];
              b_value[i] = P_im;
            }

            b_value[14] = P_re / 4.0212385965949353E-5;
            for (i = 0; i < 15; i++) {
              b_obj->frequency[i] = b_value[i];
            }
          }

          ia = b_rFrame->size[0];
          b_rFrame->size[0] = rFrame->size[0];
          emxEnsureCapacity((emxArray__common *)b_rFrame, ia, (int32_T)sizeof
                            (creal_T));
          i = rFrame->size[0];
          for (ia = 0; ia < i; ia++) {
            b_rFrame->data[ia] = rFrame->data[ia];
          }

          OFDMPHYBase_freqCorrectOFDM(b_obj, b_rFrame, rFrame);

          /*  Equalize */
          b_obj = obj;
          for (ia = 0; ia < 64; ia++) {
            postFFT[ia] = rFrame->data[ia + 192];
          }

          d_SystemCore_step(&b_obj->hPreambleDemod, postFFT, RLongFirst);
          for (ia = 0; ia < 64; ia++) {
            postFFT[ia] = rFrame->data[ia + 256];
          }

          d_SystemCore_step(&b_obj->hPreambleDemod, postFFT, RLongSecond);
          ia = R->size[0] * R->size[1] * R->size[2];
          R->size[0] = RLongFirst->size[0];
          R->size[1] = 2;
          R->size[2] = 1;
          emxEnsureCapacity((emxArray__common *)R, ia, (int32_T)sizeof(creal_T));
          i = RLongFirst->size[0];
          for (ia = 0; ia < i; ia++) {
            R->data[ia] = RLongFirst->data[ia];
          }

          i = RLongSecond->size[0];
          for (ia = 0; ia < i; ia++) {
            R->data[ia + R->size[0]] = RLongSecond->data[ia];
          }

          for (ia = 0; ia < 53; ia++) {
            Known[ia] = b_obj->LongPreamble[ia];
            Known[53 + ia] = b_obj->LongPreamble[ia];
          }

          i = R->size[0];
          for (ia = 0; ia < 2; ia++) {
            for (ib = 0; ib < 53; ib++) {
              b_R[ib + 53 * ia] = R->data[ib + i * ia];
            }
          }

          b_rdivide(b_R, Known, RNormal);
          d_abs(RNormal, Known);
          memcpy(&b_Known[0], &Known[0], 106U * sizeof(real_T));
          c_power(b_Known, Known);
          b_mean(RNormal, RConj);
          for (ia = 0; ia < 53; ia++) {
            RConj[ia].im = -RConj[ia].im;
            preambleGainsFull[ia] = RConj[ia];
          }

          mean(Known, dv10);
          c_rdivide(preambleGainsFull, dv10, RConj);
          c_obj = &b_obj->hDataDemod;
          if (!c_obj->isInitialized) {
            c_obj->isInitialized = TRUE;
            memset(&fullGrid[0], 1, sizeof(int8_T) << 6);
            for (ia = 0; ia < 11; ia++) {
              fullGrid[iv3[ia]] = 0;
            }

            fullGrid[32] = 0;
            for (ia = 0; ia < 4; ia++) {
              fullGrid[11 + 14 * ia] = 2;
            }

            i = 0;
            ib = 1;
            exitg2 = FALSE;
            while ((exitg2 == FALSE) && (ib < 65)) {
              guard1 = FALSE;
              if (fullGrid[ib - 1] == 1) {
                i++;
                ii_data[i - 1] = (int8_T)ib;
                if (i >= 64) {
                  exitg2 = TRUE;
                } else {
                  guard1 = TRUE;
                }
              } else {
                guard1 = TRUE;
              }

              if (guard1 == TRUE) {
                ib++;
              }
            }

            if (1 > i) {
              i = 0;
            }

            for (ia = 0; ia < i; ia++) {
              b_ii_data[ia] = ii_data[ia];
            }

            for (ia = 0; ia < i; ia++) {
              ii_data[ia] = b_ii_data[ia];
            }

            ia = c_obj->pDataLinearIndices->size[0];
            c_obj->pDataLinearIndices->size[0] = i;
            emxEnsureCapacity((emxArray__common *)c_obj->pDataLinearIndices, ia,
                              (int32_T)sizeof(real_T));
            for (ia = 0; ia < i; ia++) {
              c_obj->pDataLinearIndices->data[ia] = ii_data[ia];
            }

            c_obj->TunablePropsChanged = FALSE;
          }

          if (c_obj->TunablePropsChanged) {
            c_obj->TunablePropsChanged = FALSE;
          }

          for (i = 0; i < 80; i++) {
            inputIn3D[i] = rFrame->data[i + 320];
          }

          fft(*(creal_T (*)[64])&inputIn3D[16], postFFT);
          eml_fftshift(postFFT);
          ia = x->size[0];
          x->size[0] = c_obj->pDataLinearIndices->size[0];
          emxEnsureCapacity((emxArray__common *)x, ia, (int32_T)sizeof(real_T));
          i = c_obj->pDataLinearIndices->size[0];
          for (ia = 0; ia < i; ia++) {
            x->data[ia] = c_obj->pDataLinearIndices->data[ia];
          }

          ia = rFrame->size[0];
          rFrame->size[0] = c_obj->pDataLinearIndices->size[0];
          emxEnsureCapacity((emxArray__common *)rFrame, ia, (int32_T)sizeof
                            (creal_T));
          i = c_obj->pDataLinearIndices->size[0];
          for (ia = 0; ia < i; ia++) {
            rFrame->data[ia] = postFFT[(int32_T)c_obj->pDataLinearIndices->
              data[ia] - 1];
          }

          i = x->size[0];
          ia = RLongFirst->size[0] * RLongFirst->size[1] * RLongFirst->size[2];
          RLongFirst->size[0] = i;
          RLongFirst->size[1] = 1;
          RLongFirst->size[2] = 1;
          emxEnsureCapacity((emxArray__common *)RLongFirst, ia, (int32_T)sizeof
                            (creal_T));
          for (i = 0; i + 1 <= rFrame->size[0]; i++) {
            RLongFirst->data[i] = rFrame->data[i];
          }

          for (i = 0; i < 4; i++) {
            PilotNormal[i] = postFFT[11 + 14 * i];
          }

          ib = 0;
          ia = 0;
          for (i = 0; i < 53; i++) {
            preambleGainsFull[ib] = RConj[ia];
            ia++;
            ib++;
          }

          for (i = 0; i < 4; i++) {
            preamblePilotGains[i] = preambleGainsFull[(int32_T)
              b_obj->pilotLocationsWithoutGuardbands[i] - 1];
          }

          i = b_obj->dataSubcarrierIndexies->size[1];
          ia = rFrame->size[0];
          rFrame->size[0] = i;
          emxEnsureCapacity((emxArray__common *)rFrame, ia, (int32_T)sizeof
                            (creal_T));
          for (ia = 0; ia < i; ia++) {
            rFrame->data[ia] = preambleGainsFull[(int32_T)
              b_obj->dataSubcarrierIndexies->data[ia] - 1];
          }

          for (i = 0; i < 4; i++) {
            PilotEnergy[i] = b_obj->pilots[i];
            b_preamblePilotGains[i].re = preamblePilotGains[i].re *
              PilotNormal[i].re - preamblePilotGains[i].im * PilotNormal[i].im;
            b_preamblePilotGains[i].im = preamblePilotGains[i].re *
              PilotNormal[i].im + preamblePilotGains[i].im * PilotNormal[i].re;
          }

          d_rdivide(b_preamblePilotGains, PilotEnergy, PilotNormal);
          for (i = 0; i < 4; i++) {
            P_re = rt_hypotd_snf(PilotNormal[i].re, PilotNormal[i].im);
            PilotEnergy[i] = P_re * P_re;
            preamblePilotGains[i].re = PilotNormal[i].re;
            preamblePilotGains[i].im = -PilotNormal[i].im;
          }

          d_rdivide(preamblePilotGains, PilotEnergy, dcv0);
          resample(dcv0, pilotEqGains);

          /*  Demod subcarriers */
          RHard_size[0] = 48;
          RHard_size[1] = 1;
          for (ia = 0; ia < 48; ia++) {
            P_re = rFrame->data[ia].re * RLongFirst->data[ia].re - rFrame->
              data[ia].im * RLongFirst->data[ia].im;
            P_im = rFrame->data[ia].re * RLongFirst->data[ia].im + rFrame->
              data[ia].im * RLongFirst->data[ia].re;
            RHard_data[ia] = (pilotEqGains[ia].re * P_re - pilotEqGains[ia].im *
                              P_im < 0.0);
          }

          /*  Save for later decoding and CRC */
          /* obj.pMessageBits(obj.numProcessed,:) = RHard; */
          /* obj.pOutputBits(obj.numProcessed,:) = RHard; */
        }

        /*                 %% Timeout */
        /* fprintf('%f\n',numBuffersProcessed); */
        /* fprintf('%f\n',timeoutDuration); */
        if (numBuffersProcessed > obj->pTimeoutDuration) {
          exitg1 = 1;
        }
      }
    } else {
      /*  Decode Bits */
      /* recoveredMessage = DecodeMessages( obj, obj.pMessageBits ); */
      /* recoveredMessage = obj.pOutputBits;     */
      /* recoveredMessage = RHard;	 */
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  emxFree_int32_T(&r2);
  emxFree_real_T(&r1);
  emxFree_creal_T(&b_rFrame);
  emxFree_real_T(&x);
  emxFree_creal_T(&R);
  emxFree_creal_T(&RLongSecond);
  emxFree_creal_T(&RLongFirst);
  emxFree_creal_T(&rFrame);
}

void eml_fftshift(creal_T x[64])
{
  int32_T ia;
  int32_T ib;
  int32_T k;
  real_T tmp_re;
  real_T tmp_im;
  ia = 0;
  ib = 32;
  for (k = 0; k < 32; k++) {
    tmp_re = x[ia].re;
    tmp_im = x[ia].im;
    x[ia] = x[ib];
    x[ib].re = tmp_re;
    x[ib].im = tmp_im;
    ia++;
    ib++;
  }
}

/* End of code generation (PHYReceiver.c) */
