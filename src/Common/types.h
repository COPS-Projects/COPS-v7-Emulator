/*
 * ****** COPS v7 Emulator - Open Source ******
 * Copyright (C) 2012 - 2014 Jean-Philippe Boivin
 *
 * Please read the WARNING, DISCLAIMER and PATENTS
 * sections in the LICENSE file.
 */

#ifndef _COPS_V7_EMULATOR_TYPES_H_
#define _COPS_V7_EMULATOR_TYPES_H_

#include "def.h"
#include <stddef.h> // Define NULL, size_t
#include <limits.h> // Define UCHAR_MAX, etc

#ifdef HAVE_STDINT_H
#define __STDC_LIMIT_MACROS
#define __STDC_CONSTANT_MACROS
#include <stdint.h> // Will define intN_t
#endif // HAVE_STDINT_H

/*
*****************************************************
* nullptr definition
****************************************************
*/

#ifndef HAVE_CXX_NULLPTR
#define nullptr NULL
#endif // HAVE_CXX_NULLPTR

/*
*****************************************************
* Fixed-width integer definitions
****************************************************
*/

#if !defined(HAVE_STDINT_H)

#if _MSC_VER >= 1400 // MSVS 2005 and higher have fixed-width integers

typedef __int8            int8_t;
typedef unsigned __int8   uint8_t;

#define INT8_MIN                ((int8_t)_I8_MIN)
#define INT8_MAX                _I8_MAX
#define UINT8_MAX               _UI8_MAX

#define INT8_C(x)               x##i8
#define UINT8_C(x)              x##ui8

typedef __int16           int16_t;
typedef unsigned __int16  uint16_t;

#define INT16_MIN               ((int16_t)_I16_MIN)
#define INT16_MAX               _I16_MAX
#define UINT16_MAX              _UI16_MAX

#define INT16_C(x)              x##i16
#define UINT16_C(x)             x##ui16

typedef __int32           int32_t;
typedef unsigned __int32  uint32_t;

#define INT32_MIN               ((int32_t)_I32_MIN)
#define INT32_MAX               _I32_MAX
#define UINT32_MAX              _UI32_MAX

#define INT32_C(x)              x##i32
#define UINT32_C(x)             x##ui32

typedef __int64           int64_t;
typedef unsigned __int64  uint64_t;

#define INT64_MIN               ((int64_t)_I64_MIN)
#define INT64_MAX               _I64_MAX
#define UINT64_MAX              _UI64_MAX

#define INT64_C(x)              x##i64
#define UINT64_C(x)             x##ui64

#else

// char          is 8-bit
// short int     is at least 16-bit
// int           is at least 16-bit
// long int      is at least 32-bit
// long long int is at least 64-bit (C++11)

#if UCHAR_MAX == 0xFF
typedef signed char             int8_t;
typedef unsigned char           uint8_t;

#define INT8_MIN                CHAR_MIN
#define INT8_MAX                CHAR_MAX
#define UINT8_MAX               UCHAR_MAX

#define INT8_C(x)               x
#define UINT8_C(x)              x

#else
#error "8-bit integers not found!"
#endif // UCHAR_MAX == 0xFF

#if USHRT_MAX == 0xFFFF // At least 16-bit
typedef signed short int        int16_t;
typedef unsigned short int      uint16_t;

#define INT16_MIN               SHRT_MIN
#define INT16_MAX               SHRT_MAX
#define UINT16_MAX              USHRT_MAX

#define INT16_C(x)              x
#define UINT16_C(x)             x

#elif UINT_MAX == 0xFFFFU // At least 16-bit
typedef signed int              int16_t;
typedef unsigned int            uint16_t;

#define INT16_MIN               INT_MIN
#define INT16_MAX               INT_MAX
#define UINT16_MAX              UINT_MAX

#define INT16_C(x)              x
#define UINT16_C(x)             x

#else
#error "16-bit integers not found!"
#endif // USHRT_MAX == 0xFFFF

#if UINT_MAX == 0xFFFFFFFFU // At least 16-bit
typedef signed int              int32_t;
typedef unsigned int            uint32_t;

#define INT32_MIN               INT_MIN
#define INT32_MAX               INT_MAX
#define UINT32_MAX              UINT_MAX

#define INT32_C(x)              x
#define UINT32_C(x)             x##U

#elif ULONG_MAX == 0xFFFFFFFFUL // At least 32-bit
typedef signed long int         int32_t;
typedef unsigned long int       uint32_t;

#define INT32_MIN               LONG_MIN
#define INT32_MAX               LONG_MAX
#define UINT32_MAX              ULONG_MAX

#define INT32_C(x)              x##L
#define UINT32_C(x)             x##UL

#else
#error "32-bit integers not found!"
#endif // UINT_MAX == 0xFFFFFFFFU

#if ULONG_MAX == 0xFFFFFFFFFFFFFFFFUL // At least 32-bit
typedef signed long int         int64_t;
typedef unsigned long int       uint64_t;

#define INT64_MIN               LONG_MIN
#define INT64_MAX               LONG_MAX
#define UINT64_MAX              ULONG_MAX

#define INT64_C(x)              x##L
#define UINT64_C(x)             x##UL

#elif ULLONG_MAX == 0xFFFFFFFFFFFFFFFFULL // At least 64-bit
typedef signed long long int    int64_t;
typedef unsigned long long int  uint64_t;

#define INT64_MIN               LLONG_MIN
#define INT64_MAX               LLONG_MAX
#define UINT64_MAX              ULLONG_MAX

#define INT64_C(x)              x##LL
#define UINT64_C(x)             x##ULL

#else
#error "64-bit integers not found!"
#endif // ULONG_MAX == 0xFFFFFFFFFFFFFFFFUL

#endif // _MSC_VER >= 1400

#endif // !HAVE_STDINT_H

#endif // _COPS_V7_EMULATOR_TYPES_H
