//
// MATLAB Compiler: 4.18.1 (R2013a)
// Date: Mon Apr  7 17:34:10 2014
// Arguments: "-B" "macro_default" "-v" "-W" "cpplib:libtestPHYReceive" "-T"
// "link:lib" "testPHYReceive.m" "BoardIdCapiEnumT.m" 
//

#ifndef __libtestPHYReceive_h
#define __libtestPHYReceive_h 1

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

#ifdef EXPORTING_libtestPHYReceive
#define PUBLIC_libtestPHYReceive_C_API __global
#else
#define PUBLIC_libtestPHYReceive_C_API /* No import statement needed. */
#endif

#define LIB_libtestPHYReceive_C_API PUBLIC_libtestPHYReceive_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_libtestPHYReceive
#define PUBLIC_libtestPHYReceive_C_API __declspec(dllexport)
#else
#define PUBLIC_libtestPHYReceive_C_API __declspec(dllimport)
#endif

#define LIB_libtestPHYReceive_C_API PUBLIC_libtestPHYReceive_C_API


#else

#define LIB_libtestPHYReceive_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_libtestPHYReceive_C_API 
#define LIB_libtestPHYReceive_C_API /* No special import/export declaration */
#endif

extern LIB_libtestPHYReceive_C_API 
bool MW_CALL_CONV libtestPHYReceiveInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_libtestPHYReceive_C_API 
bool MW_CALL_CONV libtestPHYReceiveInitialize(void);

extern LIB_libtestPHYReceive_C_API 
void MW_CALL_CONV libtestPHYReceiveTerminate(void);



extern LIB_libtestPHYReceive_C_API 
void MW_CALL_CONV libtestPHYReceivePrintStackTrace(void);

extern LIB_libtestPHYReceive_C_API 
bool MW_CALL_CONV mlxTestPHYReceive(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

extern LIB_libtestPHYReceive_C_API 
bool MW_CALL_CONV mlxBoardIdCapiEnumT(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                      *prhs[]);


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__BORLANDC__)

#ifdef EXPORTING_libtestPHYReceive
#define PUBLIC_libtestPHYReceive_CPP_API __declspec(dllexport)
#else
#define PUBLIC_libtestPHYReceive_CPP_API __declspec(dllimport)
#endif

#define LIB_libtestPHYReceive_CPP_API PUBLIC_libtestPHYReceive_CPP_API

#else

#if !defined(LIB_libtestPHYReceive_CPP_API)
#if defined(LIB_libtestPHYReceive_C_API)
#define LIB_libtestPHYReceive_CPP_API LIB_libtestPHYReceive_C_API
#else
#define LIB_libtestPHYReceive_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_libtestPHYReceive_CPP_API void MW_CALL_CONV testPHYReceive(int nargout, mwArray& result);

extern LIB_libtestPHYReceive_CPP_API void MW_CALL_CONV BoardIdCapiEnumT(int nargout, mwArray& varargout, const mwArray& varargin);

extern LIB_libtestPHYReceive_CPP_API void MW_CALL_CONV BoardIdCapiEnumT(int nargout, mwArray& varargout);

extern LIB_libtestPHYReceive_CPP_API void MW_CALL_CONV BoardIdCapiEnumT(const mwArray& varargin);

extern LIB_libtestPHYReceive_CPP_API void MW_CALL_CONV BoardIdCapiEnumT();

#endif
#endif
