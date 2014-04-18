//
// MATLAB Compiler: 4.18.1 (R2013a)
// Date: Thu Apr  3 19:01:28 2014
// Arguments: "-B" "macro_default" "-v" "-W" "cpplib:libTXRX" "-T" "link:lib"
// "CreateTXRX.m" "BoardIdCapiEnumT.m" "testPHYReceive.m" "testPHYTransmit.m" 
//

#ifndef __libTXRX_h
#define __libTXRX_h 1

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

#ifdef EXPORTING_libTXRX
#define PUBLIC_libTXRX_C_API __global
#else
#define PUBLIC_libTXRX_C_API /* No import statement needed. */
#endif

#define LIB_libTXRX_C_API PUBLIC_libTXRX_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_libTXRX
#define PUBLIC_libTXRX_C_API __declspec(dllexport)
#else
#define PUBLIC_libTXRX_C_API __declspec(dllimport)
#endif

#define LIB_libTXRX_C_API PUBLIC_libTXRX_C_API


#else

#define LIB_libTXRX_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_libTXRX_C_API 
#define LIB_libTXRX_C_API /* No special import/export declaration */
#endif

extern LIB_libTXRX_C_API 
bool MW_CALL_CONV libTXRXInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_libTXRX_C_API 
bool MW_CALL_CONV libTXRXInitialize(void);

extern LIB_libTXRX_C_API 
void MW_CALL_CONV libTXRXTerminate(void);



extern LIB_libTXRX_C_API 
void MW_CALL_CONV libTXRXPrintStackTrace(void);

extern LIB_libTXRX_C_API 
bool MW_CALL_CONV mlxCreateTXRX(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_libTXRX_C_API 
bool MW_CALL_CONV mlxBoardIdCapiEnumT(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                      *prhs[]);

extern LIB_libTXRX_C_API 
bool MW_CALL_CONV mlxTestPHYReceive(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_libTXRX_C_API 
bool MW_CALL_CONV mlxTestPHYTransmit(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                     *prhs[]);


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__BORLANDC__)

#ifdef EXPORTING_libTXRX
#define PUBLIC_libTXRX_CPP_API __declspec(dllexport)
#else
#define PUBLIC_libTXRX_CPP_API __declspec(dllimport)
#endif

#define LIB_libTXRX_CPP_API PUBLIC_libTXRX_CPP_API

#else

#if !defined(LIB_libTXRX_CPP_API)
#if defined(LIB_libTXRX_C_API)
#define LIB_libTXRX_CPP_API LIB_libTXRX_C_API
#else
#define LIB_libTXRX_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_libTXRX_CPP_API void MW_CALL_CONV CreateTXRX(int nargout, mwArray& ObjAGC, mwArray& ObjSDRuReceiver, mwArray& ObjDetect, mwArray& ObjPreambleDemod, mwArray& ObjDataDemod, mwArray& estimate, mwArray& tx, mwArray& timeoutDuration, mwArray& messageBits, mwArray& desiredSamplingFrequency);

extern LIB_libTXRX_CPP_API void MW_CALL_CONV BoardIdCapiEnumT(int nargout, mwArray& varargout, const mwArray& varargin);

extern LIB_libTXRX_CPP_API void MW_CALL_CONV BoardIdCapiEnumT(int nargout, mwArray& varargout);

extern LIB_libTXRX_CPP_API void MW_CALL_CONV BoardIdCapiEnumT(const mwArray& varargin);

extern LIB_libTXRX_CPP_API void MW_CALL_CONV BoardIdCapiEnumT();

extern LIB_libTXRX_CPP_API void MW_CALL_CONV testPHYReceive(int nargout, mwArray& result);

extern LIB_libTXRX_CPP_API void MW_CALL_CONV testPHYTransmit(int nargout, mwArray& result);

#endif
#endif
