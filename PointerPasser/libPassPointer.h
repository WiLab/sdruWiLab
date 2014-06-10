//
// MATLAB Compiler: 4.18.1 (R2013a)
// Date: Fri Apr 18 03:28:05 2014
// Arguments: "-B" "macro_default" "-v" "-W" "cpplib:libPassPointer" "-T"
// "link:lib" "WriteDataToPipe.m" "CreateObj.m" 
//

#ifndef __libPassPointer_h
#define __libPassPointer_h 1

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

#ifdef EXPORTING_libPassPointer
#define PUBLIC_libPassPointer_C_API __global
#else
#define PUBLIC_libPassPointer_C_API /* No import statement needed. */
#endif

#define LIB_libPassPointer_C_API PUBLIC_libPassPointer_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_libPassPointer
#define PUBLIC_libPassPointer_C_API __declspec(dllexport)
#else
#define PUBLIC_libPassPointer_C_API __declspec(dllimport)
#endif

#define LIB_libPassPointer_C_API PUBLIC_libPassPointer_C_API


#else

#define LIB_libPassPointer_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_libPassPointer_C_API 
#define LIB_libPassPointer_C_API /* No special import/export declaration */
#endif

extern LIB_libPassPointer_C_API 
bool MW_CALL_CONV libPassPointerInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_libPassPointer_C_API 
bool MW_CALL_CONV libPassPointerInitialize(void);

extern LIB_libPassPointer_C_API 
void MW_CALL_CONV libPassPointerTerminate(void);



extern LIB_libPassPointer_C_API 
void MW_CALL_CONV libPassPointerPrintStackTrace(void);

extern LIB_libPassPointer_C_API 
bool MW_CALL_CONV mlxWriteDataToPipe(int nlhs, mxArray *plhs[], int nrhs, mxArray 
                                     *prhs[]);

extern LIB_libPassPointer_C_API 
bool MW_CALL_CONV mlxCreateObj(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);


#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

/* On Windows, use __declspec to control the exported API */
#if defined(_MSC_VER) || defined(__BORLANDC__)

#ifdef EXPORTING_libPassPointer
#define PUBLIC_libPassPointer_CPP_API __declspec(dllexport)
#else
#define PUBLIC_libPassPointer_CPP_API __declspec(dllimport)
#endif

#define LIB_libPassPointer_CPP_API PUBLIC_libPassPointer_CPP_API

#else

#if !defined(LIB_libPassPointer_CPP_API)
#if defined(LIB_libPassPointer_C_API)
#define LIB_libPassPointer_CPP_API LIB_libPassPointer_C_API
#else
#define LIB_libPassPointer_CPP_API /* empty! */ 
#endif
#endif

#endif

extern LIB_libPassPointer_CPP_API void MW_CALL_CONV WriteDataToPipe(int nargout, mwArray& result, const mwArray& pointer);

extern LIB_libPassPointer_CPP_API void MW_CALL_CONV CreateObj(int nargout, mwArray& obj);

#endif
#endif
