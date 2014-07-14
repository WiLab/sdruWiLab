/*
 * PHYReceiverFun_types.h
 *
 * Code generation for function 'PHYReceiverFun'
 *
 * C source code generated on: Thu Jul  3 10:46:48 2014
 *
 */

#ifndef __PHYRECEIVERFUN_TYPES_H__
#define __PHYRECEIVERFUN_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#include <stdio.h>
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T
{
    real_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_real_T*/
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /*typedef_emxArray_real_T*/
#ifndef typedef_OFDMDemodulator
#define typedef_OFDMDemodulator
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    emxArray_real_T *pDataLinearIndices;
} OFDMDemodulator;
#endif /*typedef_OFDMDemodulator*/
#ifndef typedef_OFDMModulator
#define typedef_OFDMModulator
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    emxArray_real_T *pDataLinearIndices;
    real_T pFullGrid[64];
} OFDMModulator;
#endif /*typedef_OFDMModulator*/
#ifndef typedef_OFDMModulator_1
#define typedef_OFDMModulator_1
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
} OFDMModulator_1;
#endif /*typedef_OFDMModulator_1*/
#ifndef typedef_comm_AGC
#define typedef_comm_AGC
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    boolean_T pDetectorIsRectifier;
    real_T Gain;
} comm_AGC;
#endif /*typedef_comm_AGC*/
#ifndef typedef_commcodegen_CRCDetector
#define typedef_commcodegen_CRCDetector
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
} commcodegen_CRCDetector;
#endif /*typedef_commcodegen_CRCDetector*/
#ifndef typedef_commcodegen_CRCDetector_1
#define typedef_commcodegen_CRCDetector_1
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
} commcodegen_CRCDetector_1;
#endif /*typedef_commcodegen_CRCDetector_1*/
#ifndef struct_sQzntlWQlH5FVl08CYuOIoG
#define struct_sQzntlWQlH5FVl08CYuOIoG
struct sQzntlWQlH5FVl08CYuOIoG
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    OFDMModulator hPreambleMod;
    OFDMDemodulator hPreambleDemod;
    OFDMModulator_1 hDataMod;
    OFDMDemodulator hDataDemod;
    commcodegen_CRCDetector CRC;
    emxArray_real_T *dataSubcarrierIndexies;
    real_T frequency[15];
    creal_T ShortPreamble[53];
    creal_T ShortPreambleOFDM[64];
    creal_T CompleteShortPreambleOFDM[160];
    real_T LongPreamble[53];
    creal_T LongPreambleOFDM[64];
    creal_T CompleteLongPreambleOFDM[160];
    real_T pilots[4];
    real_T pilotLocationsWithoutGuardbands[4];
    real_T numProcessed;
    real_T FrameLength;
    real_T pTimeoutDuration;
    real_T delay;
    comm_AGC pAGC;
    commcodegen_CRCDetector_1 pCRC;
    creal_T Buffer[641];
};
#endif /*struct_sQzntlWQlH5FVl08CYuOIoG*/
#ifndef typedef_PHYReceiver_167
#define typedef_PHYReceiver_167
typedef struct sQzntlWQlH5FVl08CYuOIoG PHYReceiver_167;
#endif /*typedef_PHYReceiver_167*/
#ifndef typedef_OFDMDemodulator_1
#define typedef_OFDMDemodulator_1
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    emxArray_real_T *pDataLinearIndices;
} OFDMDemodulator_1;
#endif /*typedef_OFDMDemodulator_1*/
#ifndef typedef_b_PHYReceiver_167
#define typedef_b_PHYReceiver_167
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    OFDMModulator hPreambleMod;
    OFDMDemodulator hPreambleDemod;
    OFDMModulator_1 hDataMod;
    OFDMDemodulator_1 hDataDemod;
    commcodegen_CRCDetector CRC;
    emxArray_real_T *dataSubcarrierIndexies;
    real_T frequency[15];
    creal_T ShortPreamble[53];
    creal_T ShortPreambleOFDM[64];
    creal_T CompleteShortPreambleOFDM[160];
    real_T LongPreamble[53];
    creal_T LongPreambleOFDM[64];
    creal_T CompleteLongPreambleOFDM[160];
    real_T pilots[4];
    real_T pilotLocationsWithoutGuardbands[4];
    real_T numProcessed;
    real_T FrameLength;
    real_T pTimeoutDuration;
    real_T delay;
    comm_AGC pAGC;
    commcodegen_CRCDetector_1 pCRC;
    creal_T Buffer[641];
} b_PHYReceiver_167;
#endif /*typedef_b_PHYReceiver_167*/
#ifndef struct_dsp_FIRRateConverter_3
#define struct_dsp_FIRRateConverter_3
struct dsp_FIRRateConverter_3
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    creal_T W0_InBuf[21];
    int32_T W1_InBufIdx;
    real_T P0_FILTER[252];
    int32_T P1_PolyphaseSelector[12];
    int32_T P2_StartIdx;
    int32_T P3_StopIdx;
};
#endif /*struct_dsp_FIRRateConverter_3*/
#ifndef typedef_dsp_FIRRateConverter_3
#define typedef_dsp_FIRRateConverter_3
typedef struct dsp_FIRRateConverter_3 dsp_FIRRateConverter_3;
#endif /*typedef_dsp_FIRRateConverter_3*/
#ifndef typedef_dspcodegen_FIRRateConverter
#define typedef_dspcodegen_FIRRateConverter
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    boolean_T inputDirectFeedthrough1;
    dsp_FIRRateConverter_3 cSFunObject;
} dspcodegen_FIRRateConverter;
#endif /*typedef_dspcodegen_FIRRateConverter*/
#ifndef struct_emxArray__common
#define struct_emxArray__common
struct emxArray__common
{
    void *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray__common*/
#ifndef typedef_emxArray__common
#define typedef_emxArray__common
typedef struct emxArray__common emxArray__common;
#endif /*typedef_emxArray__common*/
#ifndef struct_emxArray_creal_T
#define struct_emxArray_creal_T
struct emxArray_creal_T
{
    creal_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_creal_T*/
#ifndef typedef_emxArray_creal_T
#define typedef_emxArray_creal_T
typedef struct emxArray_creal_T emxArray_creal_T;
#endif /*typedef_emxArray_creal_T*/
#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T
{
    int32_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_int32_T*/
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /*typedef_emxArray_int32_T*/
#ifndef struct_emxArray_int32_T_105
#define struct_emxArray_int32_T_105
struct emxArray_int32_T_105
{
    int32_T data[105];
    int32_T size[1];
};
#endif /*struct_emxArray_int32_T_105*/
#ifndef typedef_emxArray_int32_T_105
#define typedef_emxArray_int32_T_105
typedef struct emxArray_int32_T_105 emxArray_int32_T_105;
#endif /*typedef_emxArray_int32_T_105*/
#ifndef struct_emxArray_int32_T_1x53
#define struct_emxArray_int32_T_1x53
struct emxArray_int32_T_1x53
{
    int32_T data[53];
    int32_T size[2];
};
#endif /*struct_emxArray_int32_T_1x53*/
#ifndef typedef_emxArray_int32_T_1x53
#define typedef_emxArray_int32_T_1x53
typedef struct emxArray_int32_T_1x53 emxArray_int32_T_1x53;
#endif /*typedef_emxArray_int32_T_1x53*/
#ifndef struct_emxArray_int32_T_64
#define struct_emxArray_int32_T_64
struct emxArray_int32_T_64
{
    int32_T data[64];
    int32_T size[1];
};
#endif /*struct_emxArray_int32_T_64*/
#ifndef typedef_emxArray_int32_T_64
#define typedef_emxArray_int32_T_64
typedef struct emxArray_int32_T_64 emxArray_int32_T_64;
#endif /*typedef_emxArray_int32_T_64*/
#ifndef struct_emxArray_int32_T_8
#define struct_emxArray_int32_T_8
struct emxArray_int32_T_8
{
    int32_T data[8];
    int32_T size[1];
};
#endif /*struct_emxArray_int32_T_8*/
#ifndef typedef_emxArray_int32_T_8
#define typedef_emxArray_int32_T_8
typedef struct emxArray_int32_T_8 emxArray_int32_T_8;
#endif /*typedef_emxArray_int32_T_8*/
#ifndef struct_emxArray_real_T_105
#define struct_emxArray_real_T_105
struct emxArray_real_T_105
{
    real_T data[105];
    int32_T size[1];
};
#endif /*struct_emxArray_real_T_105*/
#ifndef typedef_emxArray_real_T_105
#define typedef_emxArray_real_T_105
typedef struct emxArray_real_T_105 emxArray_real_T_105;
#endif /*typedef_emxArray_real_T_105*/
#ifndef struct_emxArray_real_T_8
#define struct_emxArray_real_T_8
struct emxArray_real_T_8
{
    real_T data[8];
    int32_T size[1];
};
#endif /*struct_emxArray_real_T_8*/
#ifndef typedef_emxArray_real_T_8
#define typedef_emxArray_real_T_8
typedef struct emxArray_real_T_8 emxArray_real_T_8;
#endif /*typedef_emxArray_real_T_8*/

#endif
/* End of code generation (PHYReceiverFun_types.h) */
