//
// MATLAB Compiler: 4.18.1 (R2013a)
// Date: Mon Mar 31 15:30:37 2014
// Arguments: "-B" "macro_default" "-v" "-W" "cpplib:libTransmit" "-T"
// "link:lib" "PHYTransmit.m" "CreateTXRX_TX.m" "BoardIdCapiEnumT.m" 
//

#ifndef __libTransmit_h
#define __libTransmit_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
#include "mclcppclass.h"
#ifdef __cplusplus
extern "C" {
#endif

#if defined(__SUNPRO_CC)
/* Solaris shared libraries use __global, rather than mapfiles
 * to define the API exported from a shared library. __global is
 * only necessary when building the library -- files including
 * this header file to use the library do not need the __global
 * declaration; hence the EXPORTING_<library> logic.
 */

#ifdef EXPORTING_libTransmit
#define PUBLIC_libTransmit_C_API __global
#else
#define PUBLIC_libTransmit_C_API /* No import statement needed. */
#endif

#define LIB_libTransmit_C_API PUBLIC_libTransmit_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_libTransmit
#define PUBLIC_libTransmit_C_API __declspec(dllexport)
#else
#define PUBLIC_libTransmit_C_API __declspec(dllimport)
#endif

#define LIB_libTransmit_C_API PUBLIC_libTransmit_C_API


#else

#define LIB_libTransmit_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_libTransmit_C_API 
#define LIB_libTransmit_C_API /* No special import/export declaration */
#endif

extern LIB_libTransmit_C_API 
bool MW_CALL_CONV libTransmitInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_libTransmit_C_API 
bool MW_CALL_CONV libTransmitInitialize(void);

extern LIB_libTransmit_C_API 
void MW_CALL_CONV libTransmitTerminate(void);



extern LIB_libTransmit_C_API 
void MW_CALL_CONV libTransmitPrintStackTrace(void);

extern LIB_libTransmit_C_API 
bool MW_CALL_CONV mlxPHYTransmit(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_libTransmit_C_API 
bool MW_CALL_CONV mlxCreateTXRX_TX(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_libTransmit_C_API 
bool MW_CALL_CONV mlxBoardIdCapiEnumT(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                      *prhs[]);


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__BORLANDC__)

#ifdef EXPORTING_libTransmit
#define PUBLIC_libTransmit_CPP_API __declspec(dllexport)
#else
#define PUBLIC_libTransmit_CPP_API __declspec(dllimport)
#endif

#define LIB_libTransmit_CPP_API PUBLIC_libTransmit_CPP_API

#else

#if !defined(LIB_libTransmit_CPP_API)
#if defined(LIB_libTransmit_C_API)
#define LIB_libTransmit_CPP_API LIB_libTransmit_C_API
#else
#define LIB_libTransmit_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_libTransmit_CPP_API void MW_CALL_CONV PHYTransmit(const mwArray& ObjSDRuTransmitter, const mwArray& inputPayloadMessage, const mwArray& samplingFreq, const mwArray& originNodeID, const mwArray& destNodeID);

extern LIB_libTransmit_CPP_API void MW_CALL_CONV CreateTXRX_TX(int nargout, mwArray& ObjAGC, mwArray& ObjSDRuTransmitter, mwArray& ObjDetect, mwArray& ObjPreambleDemod, mwArray& ObjDataDemod, mwArray& estimate, mwArray& tx, mwArray& timeoutDuration, mwArray& messageBits, mwArray& desiredSamplingFrequency, mwArray& destNodeID, mwArray& originNodeID, mwArray& inputPayloadMessage);

extern LIB_libTransmit_CPP_API void MW_CALL_CONV BoardIdCapiEnumT(int nargout, mwArray& varargout, const mwArray& varargin);

extern LIB_libTransmit_CPP_API void MW_CALL_CONV BoardIdCapiEnumT(int nargout, mwArray& varargout);

extern LIB_libTransmit_CPP_API void MW_CALL_CONV BoardIdCapiEnumT(const mwArray& varargin);

extern LIB_libTransmit_CPP_API void MW_CALL_CONV BoardIdCapiEnumT();

#endif
#endif
