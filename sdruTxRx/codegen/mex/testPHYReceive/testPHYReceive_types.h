/*
 * testPHYReceive_types.h
 *
 * Code generation for function 'testPHYReceive'
 *
 * C source code generated on: Thu Apr  3 19:36:37 2014
 *
 */

#ifndef __TESTPHYRECEIVE_TYPES_H__
#define __TESTPHYRECEIVE_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
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
#ifndef typedef_OFDMDemodulator_2
#define typedef_OFDMDemodulator_2
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
} OFDMDemodulator_2;
#endif /*typedef_OFDMDemodulator_2*/
#ifndef typedef_OFDMDemodulator_3
#define typedef_OFDMDemodulator_3
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
} OFDMDemodulator_3;
#endif /*typedef_OFDMDemodulator_3*/
#ifndef typedef_OFDMModulator_196
#define typedef_OFDMModulator_196
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    emxArray_real_T *pDataLinearIndices;
    real_T pFullGrid[768];
} OFDMModulator_196;
#endif /*typedef_OFDMModulator_196*/
#ifndef typedef_OFDMModulator_4
#define typedef_OFDMModulator_4
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    emxArray_real_T *pDataLinearIndices;
    real_T pFullGrid[64];
} OFDMModulator_4;
#endif /*typedef_OFDMModulator_4*/
#ifndef typedef_ResolvedFunctionInfo
#define typedef_ResolvedFunctionInfo
typedef struct
{
    const char * context;
    const char * name;
    const char * dominantType;
    const char * resolved;
    uint32_T fileTimeLo;
    uint32_T fileTimeHi;
    uint32_T mFileTimeLo;
    uint32_T mFileTimeHi;
} ResolvedFunctionInfo;
#endif /*typedef_ResolvedFunctionInfo*/
#include "usrp_uhd_capi.hpp"
#ifndef enum_UsrpReportMethodEnumT
#define enum_UsrpReportMethodEnumT
enum UsrpReportMethodEnumT
{
    Warning,
    Error,
    None
};
#endif /*enum_UsrpReportMethodEnumT*/
#ifndef typedef_UsrpReportMethodEnumT
#define typedef_UsrpReportMethodEnumT
typedef enum UsrpReportMethodEnumT UsrpReportMethodEnumT;
#endif /*typedef_UsrpReportMethodEnumT*/
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
#ifndef typedef_comm_SDRuReceiver
#define typedef_comm_SDRuReceiver
typedef struct
{
    boolean_T tunablePropertyChanged[4];
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    real_T CenterFrequency;
    real_T LocalOscillatorOffset;
    real_T Gain;
    int32_T pDriverHandle;
    BoardIdCapiEnumT pSubDevice;
    char_T ObjectID[15];
    real_T DecimationFactor;
} comm_SDRuReceiver;
#endif /*typedef_comm_SDRuReceiver*/
#ifndef typedef_comm_SDRuTransmitter
#define typedef_comm_SDRuTransmitter
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
} comm_SDRuTransmitter;
#endif /*typedef_comm_SDRuTransmitter*/
#ifndef struct_comm_BPSKModulator_1
#define struct_comm_BPSKModulator_1
struct comm_BPSKModulator_1
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    real_T P0_modmap[4];
};
#endif /*struct_comm_BPSKModulator_1*/
#ifndef typedef_comm_BPSKModulator_1
#define typedef_comm_BPSKModulator_1
typedef struct comm_BPSKModulator_1 comm_BPSKModulator_1;
#endif /*typedef_comm_BPSKModulator_1*/
#ifndef typedef_commcodegen_BPSKModulator
#define typedef_commcodegen_BPSKModulator
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    boolean_T inputDirectFeedthrough1;
    comm_BPSKModulator_1 cSFunObject;
} commcodegen_BPSKModulator;
#endif /*typedef_commcodegen_BPSKModulator*/
#ifndef struct_comm_BPSKModulator_4
#define struct_comm_BPSKModulator_4
struct comm_BPSKModulator_4
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    real_T P0_modmap[4];
};
#endif /*struct_comm_BPSKModulator_4*/
#ifndef typedef_comm_BPSKModulator_4
#define typedef_comm_BPSKModulator_4
typedef struct comm_BPSKModulator_4 comm_BPSKModulator_4;
#endif /*typedef_comm_BPSKModulator_4*/
#ifndef typedef_commcodegen_BPSKModulator_191
#define typedef_commcodegen_BPSKModulator_191
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    boolean_T inputDirectFeedthrough1;
    comm_BPSKModulator_4 cSFunObject;
} commcodegen_BPSKModulator_191;
#endif /*typedef_commcodegen_BPSKModulator_191*/
#ifndef struct_comm_CRCDetector_6
#define struct_comm_CRCDetector_6
struct comm_CRCDetector_6
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    uint32_T P0_CRCTable[256];
};
#endif /*struct_comm_CRCDetector_6*/
#ifndef typedef_comm_CRCDetector_6
#define typedef_comm_CRCDetector_6
typedef struct comm_CRCDetector_6 comm_CRCDetector_6;
#endif /*typedef_comm_CRCDetector_6*/
#ifndef typedef_commcodegen_CRCDetector
#define typedef_commcodegen_CRCDetector
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    boolean_T inputDirectFeedthrough1;
    comm_CRCDetector_6 cSFunObject;
} commcodegen_CRCDetector;
#endif /*typedef_commcodegen_CRCDetector*/
#ifndef struct_comm_CRCGenerator_0
#define struct_comm_CRCGenerator_0
struct comm_CRCGenerator_0
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    uint32_T P0_CRCTable[256];
};
#endif /*struct_comm_CRCGenerator_0*/
#ifndef typedef_comm_CRCGenerator_0
#define typedef_comm_CRCGenerator_0
typedef struct comm_CRCGenerator_0 comm_CRCGenerator_0;
#endif /*typedef_comm_CRCGenerator_0*/
#ifndef typedef_commcodegen_CRCGenerator
#define typedef_commcodegen_CRCGenerator
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    boolean_T inputDirectFeedthrough1;
    comm_CRCGenerator_0 cSFunObject;
} commcodegen_CRCGenerator;
#endif /*typedef_commcodegen_CRCGenerator*/
#ifndef struct_comm_CRCGenerator_3
#define struct_comm_CRCGenerator_3
struct comm_CRCGenerator_3
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    uint32_T P0_CRCTable[256];
};
#endif /*struct_comm_CRCGenerator_3*/
#ifndef typedef_comm_CRCGenerator_3
#define typedef_comm_CRCGenerator_3
typedef struct comm_CRCGenerator_3 comm_CRCGenerator_3;
#endif /*typedef_comm_CRCGenerator_3*/
#ifndef typedef_commcodegen_CRCGenerator_256
#define typedef_commcodegen_CRCGenerator_256
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    boolean_T inputDirectFeedthrough1;
    comm_CRCGenerator_3 cSFunObject;
} commcodegen_CRCGenerator_256;
#endif /*typedef_commcodegen_CRCGenerator_256*/
#ifndef struct_dsp_FIRRateConverter_7
#define struct_dsp_FIRRateConverter_7
struct dsp_FIRRateConverter_7
{
    boolean_T S0_isInitialized;
    boolean_T S1_isReleased;
    creal_T W0_InBuf[252];
    int32_T W1_InBufIdx;
    real_T P0_FILTER[252];
    int32_T P1_PolyphaseSelector[12];
    int32_T P2_StartIdx;
    int32_T P3_StopIdx;
};
#endif /*struct_dsp_FIRRateConverter_7*/
#ifndef typedef_dsp_FIRRateConverter_7
#define typedef_dsp_FIRRateConverter_7
typedef struct dsp_FIRRateConverter_7 dsp_FIRRateConverter_7;
#endif /*typedef_dsp_FIRRateConverter_7*/
#ifndef typedef_dspcodegen_FIRRateConverter
#define typedef_dspcodegen_FIRRateConverter
typedef struct
{
    boolean_T isInitialized;
    boolean_T isReleased;
    boolean_T TunablePropsChanged;
    uint32_T inputVarSize1[8];
    boolean_T inputDirectFeedthrough1;
    dsp_FIRRateConverter_7 cSFunObject;
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
#ifndef struct_emxArray_b_real_T_1224
#define struct_emxArray_b_real_T_1224
struct emxArray_b_real_T_1224
{
    real_T data[1224];
    int32_T size[1];
};
#endif /*struct_emxArray_b_real_T_1224*/
#ifndef typedef_emxArray_b_real_T_1224
#define typedef_emxArray_b_real_T_1224
typedef struct emxArray_b_real_T_1224 emxArray_b_real_T_1224;
#endif /*typedef_emxArray_b_real_T_1224*/
#ifndef struct_emxArray_boolean_T_1224
#define struct_emxArray_boolean_T_1224
struct emxArray_boolean_T_1224
{
    boolean_T data[1224];
    int32_T size[1];
};
#endif /*struct_emxArray_boolean_T_1224*/
#ifndef typedef_emxArray_boolean_T_1224
#define typedef_emxArray_boolean_T_1224
typedef struct emxArray_boolean_T_1224 emxArray_boolean_T_1224;
#endif /*typedef_emxArray_boolean_T_1224*/
#ifndef struct_emxArray_boolean_T_560x1
#define struct_emxArray_boolean_T_560x1
struct emxArray_boolean_T_560x1
{
    boolean_T data[560];
    int32_T size[2];
};
#endif /*struct_emxArray_boolean_T_560x1*/
#ifndef typedef_emxArray_boolean_T_560x1
#define typedef_emxArray_boolean_T_560x1
typedef struct emxArray_boolean_T_560x1 emxArray_boolean_T_560x1;
#endif /*typedef_emxArray_boolean_T_560x1*/
#ifndef struct_emxArray_boolean_T_7x80
#define struct_emxArray_boolean_T_7x80
struct emxArray_boolean_T_7x80
{
    boolean_T data[560];
    int32_T size[2];
};
#endif /*struct_emxArray_boolean_T_7x80*/
#ifndef typedef_emxArray_boolean_T_7x80
#define typedef_emxArray_boolean_T_7x80
typedef struct emxArray_boolean_T_7x80 emxArray_boolean_T_7x80;
#endif /*typedef_emxArray_boolean_T_7x80*/
#ifndef struct_emxArray_char_T_1x1024
#define struct_emxArray_char_T_1x1024
struct emxArray_char_T_1x1024
{
    char_T data[1024];
    int32_T size[2];
};
#endif /*struct_emxArray_char_T_1x1024*/
#ifndef typedef_emxArray_char_T_1x1024
#define typedef_emxArray_char_T_1x1024
typedef struct emxArray_char_T_1x1024 emxArray_char_T_1x1024;
#endif /*typedef_emxArray_char_T_1x1024*/
#ifndef struct_emxArray_char_T_77
#define struct_emxArray_char_T_77
struct emxArray_char_T_77
{
    char_T data[77];
    int32_T size[1];
};
#endif /*struct_emxArray_char_T_77*/
#ifndef typedef_emxArray_char_T_77
#define typedef_emxArray_char_T_77
typedef struct emxArray_char_T_77 emxArray_char_T_77;
#endif /*typedef_emxArray_char_T_77*/
#ifndef struct_emxArray_char_T_80x16
#define struct_emxArray_char_T_80x16
struct emxArray_char_T_80x16
{
    char_T data[1280];
    int32_T size[2];
};
#endif /*struct_emxArray_char_T_80x16*/
#ifndef typedef_emxArray_char_T_80x16
#define typedef_emxArray_char_T_80x16
typedef struct emxArray_char_T_80x16 emxArray_char_T_80x16;
#endif /*typedef_emxArray_char_T_80x16*/
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
#ifndef struct_emxArray_creal_T_1224
#define struct_emxArray_creal_T_1224
struct emxArray_creal_T_1224
{
    creal_T data[1224];
    int32_T size[1];
};
#endif /*struct_emxArray_creal_T_1224*/
#ifndef typedef_emxArray_creal_T_1224
#define typedef_emxArray_creal_T_1224
typedef struct emxArray_creal_T_1224 emxArray_creal_T_1224;
#endif /*typedef_emxArray_creal_T_1224*/
#ifndef struct_emxArray_creal_T_1231
#define struct_emxArray_creal_T_1231
struct emxArray_creal_T_1231
{
    creal_T data[1231];
    int32_T size[1];
};
#endif /*struct_emxArray_creal_T_1231*/
#ifndef typedef_emxArray_creal_T_1231
#define typedef_emxArray_creal_T_1231
typedef struct emxArray_creal_T_1231 emxArray_creal_T_1231;
#endif /*typedef_emxArray_creal_T_1231*/
#ifndef struct_emxArray_creal_T_1280
#define struct_emxArray_creal_T_1280
struct emxArray_creal_T_1280
{
    creal_T data[1280];
    int32_T size[1];
};
#endif /*struct_emxArray_creal_T_1280*/
#ifndef typedef_emxArray_creal_T_1280
#define typedef_emxArray_creal_T_1280
typedef struct emxArray_creal_T_1280 emxArray_creal_T_1280;
#endif /*typedef_emxArray_creal_T_1280*/
#ifndef struct_emxArray_creal_T_16
#define struct_emxArray_creal_T_16
struct emxArray_creal_T_16
{
    creal_T data[16];
    int32_T size[1];
};
#endif /*struct_emxArray_creal_T_16*/
#ifndef typedef_emxArray_creal_T_16
#define typedef_emxArray_creal_T_16
typedef struct emxArray_creal_T_16 emxArray_creal_T_16;
#endif /*typedef_emxArray_creal_T_16*/
#ifndef struct_emxArray_creal_T_2461
#define struct_emxArray_creal_T_2461
struct emxArray_creal_T_2461
{
    creal_T data[2461];
    int32_T size[1];
};
#endif /*struct_emxArray_creal_T_2461*/
#ifndef typedef_emxArray_creal_T_2461
#define typedef_emxArray_creal_T_2461
typedef struct emxArray_creal_T_2461 emxArray_creal_T_2461;
#endif /*typedef_emxArray_creal_T_2461*/
#ifndef struct_emxArray_creal_T_32
#define struct_emxArray_creal_T_32
struct emxArray_creal_T_32
{
    creal_T data[32];
    int32_T size[1];
};
#endif /*struct_emxArray_creal_T_32*/
#ifndef typedef_emxArray_creal_T_32
#define typedef_emxArray_creal_T_32
typedef struct emxArray_creal_T_32 emxArray_creal_T_32;
#endif /*typedef_emxArray_creal_T_32*/
#ifndef struct_emxArray_creal_T_48x12x1
#define struct_emxArray_creal_T_48x12x1
struct emxArray_creal_T_48x12x1
{
    creal_T data[576];
    int32_T size[3];
};
#endif /*struct_emxArray_creal_T_48x12x1*/
#ifndef typedef_emxArray_creal_T_48x12x1
#define typedef_emxArray_creal_T_48x12x1
typedef struct emxArray_creal_T_48x12x1 emxArray_creal_T_48x12x1;
#endif /*typedef_emxArray_creal_T_48x12x1*/
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
#ifndef struct_emxArray_int32_T_1024
#define struct_emxArray_int32_T_1024
struct emxArray_int32_T_1024
{
    int32_T data[1024];
    int32_T size[1];
};
#endif /*struct_emxArray_int32_T_1024*/
#ifndef typedef_emxArray_int32_T_1024
#define typedef_emxArray_int32_T_1024
typedef struct emxArray_int32_T_1024 emxArray_int32_T_1024;
#endif /*typedef_emxArray_int32_T_1024*/
#ifndef struct_emxArray_int32_T_11
#define struct_emxArray_int32_T_11
struct emxArray_int32_T_11
{
    int32_T data[11];
    int32_T size[1];
};
#endif /*struct_emxArray_int32_T_11*/
#ifndef typedef_emxArray_int32_T_11
#define typedef_emxArray_int32_T_11
typedef struct emxArray_int32_T_11 emxArray_int32_T_11;
#endif /*typedef_emxArray_int32_T_11*/
#ifndef struct_emxArray_int32_T_12
#define struct_emxArray_int32_T_12
struct emxArray_int32_T_12
{
    int32_T data[12];
    int32_T size[1];
};
#endif /*struct_emxArray_int32_T_12*/
#ifndef typedef_emxArray_int32_T_12
#define typedef_emxArray_int32_T_12
typedef struct emxArray_int32_T_12 emxArray_int32_T_12;
#endif /*typedef_emxArray_int32_T_12*/
#ifndef struct_emxArray_int32_T_1224
#define struct_emxArray_int32_T_1224
struct emxArray_int32_T_1224
{
    int32_T data[1224];
    int32_T size[1];
};
#endif /*struct_emxArray_int32_T_1224*/
#ifndef typedef_emxArray_int32_T_1224
#define typedef_emxArray_int32_T_1224
typedef struct emxArray_int32_T_1224 emxArray_int32_T_1224;
#endif /*typedef_emxArray_int32_T_1224*/
#ifndef struct_emxArray_int32_T_1x12
#define struct_emxArray_int32_T_1x12
struct emxArray_int32_T_1x12
{
    int32_T data[12];
    int32_T size[2];
};
#endif /*struct_emxArray_int32_T_1x12*/
#ifndef typedef_emxArray_int32_T_1x12
#define typedef_emxArray_int32_T_1x12
typedef struct emxArray_int32_T_1x12 emxArray_int32_T_1x12;
#endif /*typedef_emxArray_int32_T_1x12*/
#ifndef struct_emxArray_int32_T_1x1280
#define struct_emxArray_int32_T_1x1280
struct emxArray_int32_T_1x1280
{
    int32_T data[1280];
    int32_T size[2];
};
#endif /*struct_emxArray_int32_T_1x1280*/
#ifndef typedef_emxArray_int32_T_1x1280
#define typedef_emxArray_int32_T_1x1280
typedef struct emxArray_int32_T_1x1280 emxArray_int32_T_1x1280;
#endif /*typedef_emxArray_int32_T_1x1280*/
#ifndef struct_emxArray_int32_T_1x80
#define struct_emxArray_int32_T_1x80
struct emxArray_int32_T_1x80
{
    int32_T data[80];
    int32_T size[2];
};
#endif /*struct_emxArray_int32_T_1x80*/
#ifndef typedef_emxArray_int32_T_1x80
#define typedef_emxArray_int32_T_1x80
typedef struct emxArray_int32_T_1x80 emxArray_int32_T_1x80;
#endif /*typedef_emxArray_int32_T_1x80*/
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
#ifndef struct_emxArray_int32_T_768
#define struct_emxArray_int32_T_768
struct emxArray_int32_T_768
{
    int32_T data[768];
    int32_T size[1];
};
#endif /*struct_emxArray_int32_T_768*/
#ifndef typedef_emxArray_int32_T_768
#define typedef_emxArray_int32_T_768
typedef struct emxArray_int32_T_768 emxArray_int32_T_768;
#endif /*typedef_emxArray_int32_T_768*/
#ifndef struct_emxArray_int32_T_77
#define struct_emxArray_int32_T_77
struct emxArray_int32_T_77
{
    int32_T data[77];
    int32_T size[1];
};
#endif /*struct_emxArray_int32_T_77*/
#ifndef typedef_emxArray_int32_T_77
#define typedef_emxArray_int32_T_77
typedef struct emxArray_int32_T_77 emxArray_int32_T_77;
#endif /*typedef_emxArray_int32_T_77*/
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
#ifndef struct_emxArray_real_T_1224
#define struct_emxArray_real_T_1224
struct emxArray_real_T_1224
{
    real_T data[1224];
    int32_T size[1];
};
#endif /*struct_emxArray_real_T_1224*/
#ifndef typedef_emxArray_real_T_1224
#define typedef_emxArray_real_T_1224
typedef struct emxArray_real_T_1224 emxArray_real_T_1224;
#endif /*typedef_emxArray_real_T_1224*/
#ifndef struct_emxArray_real_T_1231
#define struct_emxArray_real_T_1231
struct emxArray_real_T_1231
{
    real_T data[1231];
    int32_T size[1];
};
#endif /*struct_emxArray_real_T_1231*/
#ifndef typedef_emxArray_real_T_1231
#define typedef_emxArray_real_T_1231
typedef struct emxArray_real_T_1231 emxArray_real_T_1231;
#endif /*typedef_emxArray_real_T_1231*/
#ifndef struct_emxArray_real_T_1280
#define struct_emxArray_real_T_1280
struct emxArray_real_T_1280
{
    real_T data[1280];
    int32_T size[1];
};
#endif /*struct_emxArray_real_T_1280*/
#ifndef typedef_emxArray_real_T_1280
#define typedef_emxArray_real_T_1280
typedef struct emxArray_real_T_1280 emxArray_real_T_1280;
#endif /*typedef_emxArray_real_T_1280*/
#ifndef struct_emxArray_real_T_1x1280
#define struct_emxArray_real_T_1x1280
struct emxArray_real_T_1x1280
{
    real_T data[1280];
    int32_T size[2];
};
#endif /*struct_emxArray_real_T_1x1280*/
#ifndef typedef_emxArray_real_T_1x1280
#define typedef_emxArray_real_T_1x1280
typedef struct emxArray_real_T_1x1280 emxArray_real_T_1x1280;
#endif /*typedef_emxArray_real_T_1x1280*/
#ifndef struct_emxArray_real_T_2461
#define struct_emxArray_real_T_2461
struct emxArray_real_T_2461
{
    real_T data[2461];
    int32_T size[1];
};
#endif /*struct_emxArray_real_T_2461*/
#ifndef typedef_emxArray_real_T_2461
#define typedef_emxArray_real_T_2461
typedef struct emxArray_real_T_2461 emxArray_real_T_2461;
#endif /*typedef_emxArray_real_T_2461*/
#ifndef struct_emxArray_real_T_3
#define struct_emxArray_real_T_3
struct emxArray_real_T_3
{
    real_T data[3];
    int32_T size[1];
};
#endif /*struct_emxArray_real_T_3*/
#ifndef typedef_emxArray_real_T_3
#define typedef_emxArray_real_T_3
typedef struct emxArray_real_T_3 emxArray_real_T_3;
#endif /*typedef_emxArray_real_T_3*/
#ifndef struct_emxArray_real_T_3x563
#define struct_emxArray_real_T_3x563
struct emxArray_real_T_3x563
{
    real_T data[1689];
    int32_T size[2];
};
#endif /*struct_emxArray_real_T_3x563*/
#ifndef typedef_emxArray_real_T_3x563
#define typedef_emxArray_real_T_3x563
typedef struct emxArray_real_T_3x563 emxArray_real_T_3x563;
#endif /*typedef_emxArray_real_T_3x563*/
#ifndef struct_emxArray_real_T_4
#define struct_emxArray_real_T_4
struct emxArray_real_T_4
{
    real_T data[4];
    int32_T size[1];
};
#endif /*struct_emxArray_real_T_4*/
#ifndef typedef_emxArray_real_T_4
#define typedef_emxArray_real_T_4
typedef struct emxArray_real_T_4 emxArray_real_T_4;
#endif /*typedef_emxArray_real_T_4*/
#ifndef struct_emxArray_real_T_563
#define struct_emxArray_real_T_563
struct emxArray_real_T_563
{
    real_T data[563];
    int32_T size[1];
};
#endif /*struct_emxArray_real_T_563*/
#ifndef typedef_emxArray_real_T_563
#define typedef_emxArray_real_T_563
typedef struct emxArray_real_T_563 emxArray_real_T_563;
#endif /*typedef_emxArray_real_T_563*/
#ifndef struct_emxArray_real_T_768
#define struct_emxArray_real_T_768
struct emxArray_real_T_768
{
    real_T data[768];
    int32_T size[1];
};
#endif /*struct_emxArray_real_T_768*/
#ifndef typedef_emxArray_real_T_768
#define typedef_emxArray_real_T_768
typedef struct emxArray_real_T_768 emxArray_real_T_768;
#endif /*typedef_emxArray_real_T_768*/
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
#ifndef struct_emxArray_creal_T_48x12
#define struct_emxArray_creal_T_48x12
struct emxArray_creal_T_48x12
{
    creal_T data[576];
    int32_T size[2];
};
#endif /*struct_emxArray_creal_T_48x12*/
#ifndef typedef_emxArray_creal_T_48x12
#define typedef_emxArray_creal_T_48x12
typedef struct emxArray_creal_T_48x12 emxArray_creal_T_48x12;
#endif /*typedef_emxArray_creal_T_48x12*/
#ifndef struct_emxArray_creal_T_53
#define struct_emxArray_creal_T_53
struct emxArray_creal_T_53
{
    creal_T data[53];
    int32_T size[1];
};
#endif /*struct_emxArray_creal_T_53*/
#ifndef typedef_emxArray_creal_T_53
#define typedef_emxArray_creal_T_53
typedef struct emxArray_creal_T_53 emxArray_creal_T_53;
#endif /*typedef_emxArray_creal_T_53*/
#ifndef struct_emxArray_real_T_80
#define struct_emxArray_real_T_80
struct emxArray_real_T_80
{
    real_T data[80];
    int32_T size[1];
};
#endif /*struct_emxArray_real_T_80*/
#ifndef typedef_emxArray_real_T_80
#define typedef_emxArray_real_T_80
typedef struct emxArray_real_T_80 emxArray_real_T_80;
#endif /*typedef_emxArray_real_T_80*/
#ifndef struct_sppt1GAZrXJQNGwlMv8eWNC
#define struct_sppt1GAZrXJQNGwlMv8eWNC
struct sppt1GAZrXJQNGwlMv8eWNC
{
    real_T phi;
    real_T delay;
    real_T numPeaks;
    real_T frequency[15];
    real_T phase;
    real_T frequencyMA;
    real_T numProcessed;
    real_T inputBufferLength;
    real_T numFreqToAverage;
    emxArray_creal_T_48x12 pilotEqGains;
    emxArray_creal_T_53 preambleEqGains;
    emxArray_real_T_80 message;
    boolean_T printReceivedData;
};
#endif /*struct_sppt1GAZrXJQNGwlMv8eWNC*/
#ifndef typedef_struct_T
#define typedef_struct_T
typedef struct sppt1GAZrXJQNGwlMv8eWNC struct_T;
#endif /*typedef_struct_T*/
#ifndef struct_emxArray_real_T_1x48
#define struct_emxArray_real_T_1x48
struct emxArray_real_T_1x48
{
    real_T data[48];
    int32_T size[2];
};
#endif /*struct_emxArray_real_T_1x48*/
#ifndef typedef_emxArray_real_T_1x48
#define typedef_emxArray_real_T_1x48
typedef struct emxArray_real_T_1x48 emxArray_real_T_1x48;
#endif /*typedef_emxArray_real_T_1x48*/
#ifndef struct_sIYtbYoinQVxVxupYgk4vFD
#define struct_sIYtbYoinQVxVxupYgk4vFD
struct sIYtbYoinQVxVxupYgk4vFD
{
    real_T originalData[560];
    creal_T shortPreambleOFDM[64];
    creal_T completeShortPreambleOFDM[160];
    creal_T shortPreamble[53];
    real_T longPreamble[53];
    creal_T longPreambleOFDM[64];
    creal_T completeLongPreambleOFDM[160];
    real_T pilots[48];
    creal_T preambles[320];
    real_T pilotLocationsWithoutGuardbands[4];
    emxArray_real_T_1x48 dataSubcarrierIndexies;
    real_T samplingFreq;
    real_T FFTLength;
    boolean_T enableMA;
    real_T numCarriers;
    real_T padBits;
    real_T numSamples;
    real_T messageCharacters;
    real_T numFrames;
    real_T frameLength;
    real_T freqBin;
    real_T DecimationFactor;
    real_T receiveBufferLength;
};
#endif /*struct_sIYtbYoinQVxVxupYgk4vFD*/
#ifndef typedef_b_struct_T
#define typedef_b_struct_T
typedef struct sIYtbYoinQVxVxupYgk4vFD b_struct_T;
#endif /*typedef_b_struct_T*/
#ifndef typedef_testPHYReceiveStackData
#define typedef_testPHYReceiveStackData
typedef struct
{
    union
    {
        struct
        {
            creal_T y[3456];
        } f0;
        struct
        {
            cint16_T yTemp[46336];
        } f1;
    } u1;
    struct
    {
        creal_T inputIn3D[960];
    } f2;
    struct
    {
        creal_T buffer[5120];
        creal_T b_buffer[5120];
        creal_T Phat_data[2461];
        creal_T buffer_data[1280];
        creal_T rFreqShifted_data[1280];
        creal_T b_buffer_data[1231];
        creal_T c_buffer_data[1231];
        real_T Rhat_data[2461];
        creal_T b_Phat_data[1224];
    } f3;
    struct
    {
        creal_T unusedU2[38400];
        creal_T unusedU3[25600];
        b_struct_T rx;
        b_struct_T b_rx;
        real_T messageBits_data[1689];
        real_T b_messageBits_data[1689];
    } f4;
} testPHYReceiveStackData;
#endif /*typedef_testPHYReceiveStackData*/

#endif
/* End of code generation (testPHYReceive_types.h) */
