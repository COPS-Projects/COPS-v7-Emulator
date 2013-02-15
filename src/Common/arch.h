/**
 * ****** Faith Emulator - Closed Source ******
 * Copyright (C) 2012 - 2013 Jean-Philippe Boivin
 *
 * Taken from :
 * ****** BARLab - Open Source ******
 * Copyright (C) 2012 BARLab
 * Copyright (C) 2012 Jean-Philippe Boivin
 *
 * Please read the WARNING, DISCLAIMER and PATENTS
 * sections in the LICENSE file.
 */

#ifndef _FAITH_EMULATOR_ARCH_H_
#define _FAITH_EMULATOR_ARCH_H_

#if defined(_AIX) || defined(__TOS_AIX__)
#define TARGET_SYSTEM "AIX"

#elif defined(__ANDROID__)
#define TARGET_SYSTEM "Android"

#elif defined(AMIGA) || defined(__amigaos__)
#define TARGET_SYSTEM "AMIGA"

#elif defined(__BEOS__)
#define TARGET_SYSTEM "BeOS"

#elif defined(__FreeBSD_kernel__)
#define TARGET_SYSTEM "GNU/kFreeBSD"

#elif defined(__gnu_linux__)
#define TARGET_SYSTEM "GNU/Linux"

#elif defined(macintosh)
#define TARGET_SYSTEM "Mac OS 9"

#elif defined(__APPLE__)
#define TARGET_SYSTEM "Mac OS X"

#elif defined(MSDOS) || defined(__MSDOS__) || defined(DOS) || \
    defined(_MSDOS)
#define TARGET_SYSTEM "MS-DOS"

#elif defined(sun) || defined(__sun)
#define TARGET_SYSTEM "Solaris"

#elif defined(_WIN16) || defined(_WIN32) || defined(_WIN64) || \
    defined(__WIN32__) || defined(__TOS_WIN__) || defined(__WINDOWS__)
#define TARGET_SYSTEM "Windows"

#else
#define TARGET_SYSTEM "unknown"

#endif // TARGET_SYSTEM





#if defined(__i386__) || defined(__i386) || defined(__X86__) || \
    defined(_X86_) || defined(_M_IX86)
#define TARGET_ARCH "x86"

#elif defined(__x86_64__) || defined(__amd64__) || defined(__x86_64) || \
    defined(__amd64) || defined(_M_X64) || defined(_M_AMD64)
#define TARGET_ARCH "x86_x64"

#elif defined(__ppc__) || defined(__powerpc__) || \
    defined(_M_MPPC) || defined(_M_PPC)
#define TARGET_ARCH "ppc"

#elif defined(__ppc64__)
#define TARGET_ARCH "ppc64"

#elif defined(__ia64__) || defined(__IA64__) || defined(__ia64) || \
    defined(__IA64) || defined(__itanium__) || defined(_M_IA64)
#define TARGET_ARCH "ia64"

#elif defined(__arm__) || defined(_ARM)
#define TARGET_ARCH "arm"

#elif defined(__mips__) || defined(__MIPS__) || defined(__mips)
#define TARGET_ARCH "mips"

#elif defined(__sparc__) || defined(__sparc)
#define TARGET_ARCH "sparc"

#elif defined(__alpha__) || defined(__alpha) || defined(_M_ALPHA)
#define TARGET_ARCH "alpha"

#elif defined(__hppa__) || defined (__hppa) || defined(__HPPA__)
#define TARGET_ARCH "hppa"

#elif defined(__m68k__) || defined(__MC68K__) || defined(M68000)
#define TARGET_ARCH "m68k"

#else
#define TARGET_ARCH "unknown"

#endif // TARGET_ARCH

#endif // _FAITH_EMULATOR_ARCH_H_