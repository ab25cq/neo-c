# 1 "all.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 405 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "all.c" 2
# 1 "/usr/include/a.out.h" 1 3 4



# 1 "/usr/include/bits/a.out.h" 1 3 4






/* Signal to users of this header that this architecture really doesn't
   support a.out binary format.  */
# 5 "/usr/include/a.out.h" 2 3 4



struct exec
{
  unsigned long a_info; /* Use macros N_MAGIC, etc for access.  */
  unsigned int a_text; /* Length of text, in bytes.  */
  unsigned int a_data; /* Length of data, in bytes.  */
  unsigned int a_bss; /* Length of uninitialized data area for file, in bytes.  */
  unsigned int a_syms; /* Length of symbol table data in file, in bytes.  */
  unsigned int a_entry; /* Start address.  */
  unsigned int a_trsize;/* Length of relocation info for text, in bytes.  */
  unsigned int a_drsize;/* Length of relocation info for data, in bytes.  */
};

enum machine_type
{
  M_OLDSUN2 = 0,
  M_68010 = 1,
  M_68020 = 2,
  M_SPARC = 3,
  M_386 = 100,
  M_MIPS1 = 151,
  M_MIPS2 = 152
};
# 47 "/usr/include/a.out.h" 3 4
/* Code indicating object file or impure executable.  */

/* Code indicating pure executable.  */

/* Code indicating demand-paged executable.  */

/* This indicates a demand-paged executable with the header in the text.
   The first page is unmapped to help trap NULL pointer references.  */

/* Code indicating core file.  */
# 75 "/usr/include/a.out.h" 3 4
/* Address of text segment in memory after it is loaded.  */


/* Address of data segment in memory after it is loaded.  */
# 90 "/usr/include/a.out.h" 3 4
struct nlist
{
  union
    {
      char *n_name;
      struct nlist *n_next;
      long n_strx;
    } n_un;
  unsigned char n_type;
  char n_other;
  short n_desc;
  unsigned long n_value;
};
# 122 "/usr/include/a.out.h" 3 4
/* This structure describes a single relocation to be performed.
   The text-relocation section of the file is a vector of these structures,
   all of which apply to the text section.
   Likewise, the data-relocation section applies to the data section.  */

struct relocation_info
{
  int r_address;
  unsigned int r_symbolnum:24;
  unsigned int r_pcrel:1;
  unsigned int r_length:2;
  unsigned int r_extern:1;
  unsigned int r_pad:4;
};
# 2 "all.c" 2
# 1 "/usr/include/aio.h" 1 3 4
/* Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * ISO/IEC 9945-1:1996 6.7: Asynchronous Input and Output
 */




# 1 "/usr/include/features.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* These are defined by the user (or the compiler)
   to specify the desired environment:

   __STRICT_ANSI__	ISO Standard C.
   _ISOC99_SOURCE	Extensions to ISO C89 from ISO C99.
   _ISOC11_SOURCE	Extensions to ISO C99 from ISO C11.
   _ISOC23_SOURCE	Extensions to ISO C99 from ISO C23.
   _ISOC2X_SOURCE	Old name for _ISOC23_SOURCE.
   _ISOC2Y_SOURCE	Extensions to ISO C23 from ISO C2Y.
   __STDC_WANT_LIB_EXT2__
			Extensions to ISO C99 from TR 27431-2:2010.
   __STDC_WANT_IEC_60559_BFP_EXT__
			Extensions to ISO C11 from TS 18661-1:2014.
   __STDC_WANT_IEC_60559_FUNCS_EXT__
			Extensions to ISO C11 from TS 18661-4:2015.
   __STDC_WANT_IEC_60559_TYPES_EXT__
			Extensions to ISO C11 from TS 18661-3:2015.
   __STDC_WANT_IEC_60559_EXT__
			ISO C23 interfaces defined only in Annex F.

   _POSIX_SOURCE	IEEE Std 1003.1.
   _POSIX_C_SOURCE	If ==1, like _POSIX_SOURCE; if >=2 add IEEE Std 1003.2;
			if >=199309L, add IEEE Std 1003.1b-1993;
			if >=199506L, add IEEE Std 1003.1c-1995;
			if >=200112L, all of IEEE 1003.1-2004
			if >=200809L, all of IEEE 1003.1-2008
   _XOPEN_SOURCE	Includes POSIX and XPG things.  Set to 500 if
			Single Unix conformance is wanted, to 600 for the
			sixth revision, to 700 for the seventh revision.
   _XOPEN_SOURCE_EXTENDED XPG things and X/Open Unix extensions.
   _LARGEFILE_SOURCE	Some more functions for correct standard I/O.
   _LARGEFILE64_SOURCE	Additional functionality from LFS for large files.
   _FILE_OFFSET_BITS=N	Select default filesystem interface.
   _ATFILE_SOURCE	Additional *at interfaces.
   _DYNAMIC_STACK_SIZE_SOURCE Select correct (but non compile-time constant)
			MINSIGSTKSZ, SIGSTKSZ and PTHREAD_STACK_MIN.
   _GNU_SOURCE		All of the above, plus GNU extensions.
   _DEFAULT_SOURCE	The default set of features (taking precedence over
			__STRICT_ANSI__).

   _FORTIFY_SOURCE	Add security hardening to many library functions.
			Set to 1, 2 or 3; 3 performs stricter checks than 2, which
			performs stricter checks than 1.

   _REENTRANT, _THREAD_SAFE
			Obsolete; equivalent to _POSIX_C_SOURCE=199506L.

   The `-ansi' switch to the GNU C compiler, and standards conformance
   options such as `-std=c99', define __STRICT_ANSI__.  If none of
   these are defined, or if _DEFAULT_SOURCE is defined, the default is
   to have _POSIX_SOURCE set to one and _POSIX_C_SOURCE set to
   200809L, as well as enabling miscellaneous functions from BSD and
   SVID.  If more than one of these are defined, they accumulate.  For
   example __STRICT_ANSI__, _POSIX_SOURCE and _POSIX_C_SOURCE together
   give you ISO C, 1003.1, and 1003.2, but nothing else.

   These are defined by this file and are used by the
   header files to decide what to declare or define:

   __GLIBC_USE (F)	Define things from feature set F.  This is defined
			to 1 or 0; the subsequent macros are either defined
			or undefined, and those tests should be moved to
			__GLIBC_USE.
   __USE_ISOC11		Define ISO C11 things.
   __USE_ISOC99		Define ISO C99 things.
   __USE_ISOC95		Define ISO C90 AMD1 (C95) things.
   __USE_ISOCXX11	Define ISO C++11 things.
   __USE_POSIX		Define IEEE Std 1003.1 things.
   __USE_POSIX2		Define IEEE Std 1003.2 things.
   __USE_POSIX199309	Define IEEE Std 1003.1, and .1b things.
   __USE_POSIX199506	Define IEEE Std 1003.1, .1b, .1c and .1i things.
   __USE_XOPEN		Define XPG things.
   __USE_XOPEN_EXTENDED	Define X/Open Unix things.
   __USE_UNIX98		Define Single Unix V2 things.
   __USE_XOPEN2K        Define XPG6 things.
   __USE_XOPEN2KXSI     Define XPG6 XSI things.
   __USE_XOPEN2K8       Define XPG7 things.
   __USE_XOPEN2K8XSI    Define XPG7 XSI things.
   __USE_LARGEFILE	Define correct standard I/O things.
   __USE_LARGEFILE64	Define LFS things with separate names.
   __USE_FILE_OFFSET64	Define 64bit interface as default.
   __USE_MISC		Define things from 4.3BSD or System V Unix.
   __USE_ATFILE		Define *at interfaces and AT_* constants for them.
   __USE_DYNAMIC_STACK_SIZE Define correct (but non compile-time constant)
			MINSIGSTKSZ, SIGSTKSZ and PTHREAD_STACK_MIN.
   __USE_GNU		Define GNU extensions.
   __USE_FORTIFY_LEVEL	Additional security measures used, according to level.

   The macros `__GNU_LIBRARY__', `__GLIBC__', and `__GLIBC_MINOR__' are
   defined by this file unconditionally.  `__GNU_LIBRARY__' is provided
   only for compatibility.  All new code should use the other symbols
   to test for features.

   All macros listed above as possibly being defined by this file are
   explicitly undefined if they are not explicitly defined.
   Feature-test macros that are not defined by the user or compiler
   but are implied by the other feature-test macros defined (or by the
   lack of any definitions) are defined by the file.

   ISO C feature test macros depend on the definition of the macro
   when an affected header is included, not when the first system
   header is included, and so they are handled in
   <bits/libc-header-start.h>, which does not have a multiple include
   guard.  Feature test macros that can be handled from the first
   system header included are handled here.  */


/* Undefine everything, so we get a clean slate.  */
# 159 "/usr/include/features.h" 3 4
/* Suppress kernel-name space pollution unless user expressedly asks
   for it.  */




/* Convenience macro to test the version of gcc.
   Use like this:
   #if __GNUC_PREREQ (2,8)
   ... code requiring gcc 2.8 or later ...
   #endif
   Note: only works for GCC 2.0 and later, because __GNUC_MINOR__ was
   added in 2.0.  */







/* Similarly for clang.  Features added to GCC after version 4.2 may
   or may not also be available in clang, and clang's definitions of
   __GNUC(_MINOR)__ are fixed at 4 and 2 respectively.  Not all such
   features can be queried via __has_extension/__has_feature.  */







/* Whether to use feature set F.  */


/* _BSD_SOURCE and _SVID_SOURCE are deprecated aliases for
   _DEFAULT_SOURCE.  If _DEFAULT_SOURCE is present we do not
   issue a warning; the expectation is that the source is being
   transitioned to use the new macro.  */







/* Remap the old name _ISOC2X_SOURCE to _ISOC23_SOURCE.  */






/* If _GNU_SOURCE was defined by the user, turn on all the other features.  */
# 241 "/usr/include/features.h" 3 4
/* If nothing (other than _GNU_SOURCE and _DEFAULT_SOURCE) is defined,
   define _DEFAULT_SOURCE.  */
# 253 "/usr/include/features.h" 3 4
/* This is to enable the ISO C2Y extension.  */







/* This is to enable the ISO C23 extension.  */







/* This is to enable the ISO C11 extension.  */






/* This is to enable the ISO C99 extension.  */






/* This is to enable the ISO C90 Amendment 1:1995 extension.  */
# 303 "/usr/include/features.h" 3 4
/* If none of the ANSI/POSIX macros are defined, or if _DEFAULT_SOURCE
   is defined, use POSIX.1-2008 (or another version depending on
   _XOPEN_SOURCE).  */
# 332 "/usr/include/features.h" 3 4
/* Some C libraries once required _REENTRANT and/or _THREAD_SAFE to be
   defined in all multithreaded code.  GNU libc has not required this
   for many years.  We now treat them as compatibility synonyms for
   _POSIX_C_SOURCE=199506L, which is the earliest level of POSIX with
   comprehensive support for multithreaded code.  Using them never
   lowers the selected level of POSIX conformance, only raises it.  */
# 415 "/usr/include/features.h" 3 4
# 1 "/usr/include/features-time64.h" 1 3 4
/* Features part to handle 64-bit time_t support.
   Copyright (C) 2021-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* We need to know the word size in order to check the time size.  */
# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 14 "/usr/include/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 21 "/usr/include/features-time64.h" 2 3 4
# 1 "/usr/include/bits/timesize.h" 1 3 4
/* Bit size of the time_t type at glibc build time, x86-64 and x32 case.
   Copyright (C) 2018-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 14 "/usr/include/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 20 "/usr/include/bits/timesize.h" 2 3 4





/* For others, time size is word size.  */
# 22 "/usr/include/features-time64.h" 2 3 4
# 416 "/usr/include/features.h" 2 3 4
# 458 "/usr/include/features.h" 3 4
/* The function 'gets' existed in C89, but is impossible to use
   safely.  It has been removed from ISO C11 and ISO C++14.  Note: for
   compatibility with various implementations of <cstdio>, this test
   must consider only the value of __cplusplus when compiling C++.  */






/* GNU formerly extended the scanf functions with modified format
   specifiers %as, %aS, and %a[...] that allocate a buffer for the
   input using malloc.  This extension conflicts with ISO C99, which
   defines %a as a standalone format specifier that reads a floating-
   point number; moreover, POSIX.1-2008 provides the same feature
   using the modifier letter 'm' instead (%ms, %mS, %m[...]).

   We now follow C99 unless GNU extensions are active and the compiler
   is specifically in C89 or C++98 mode (strict or not).  For
   instance, with GCC, -std=gnu11 will have C99-compliant scanf with
   or without -D_GNU_SOURCE, but -std=c89 -D_GNU_SOURCE will have the
   old extension.  */
# 489 "/usr/include/features.h" 3 4
/* ISO C23 added support for a 0b or 0B prefix on binary constants as
   inputs to strtol-family functions (base 0 or 2).  This macro is
   used to condition redirection in headers to allow that redirection
   to be disabled when building those functions, despite _GNU_SOURCE
   being defined.  */






/* Get definitions of __STDC_* predefined macros, if the compiler has
   not preincluded this header automatically.  */
# 1 "/usr/include/stdc-predef.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */

/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */
# 56 "/usr/include/stdc-predef.h" 3 4
/* wchar_t uses Unicode 10.0.0.  Version 10.0 of the Unicode Standard is
   synchronized with ISO/IEC 10646:2017, fifth edition, plus
   the following additions from Amendment 1 to the fifth edition:
   - 56 emoji characters
   - 285 hentaigana
   - 3 additional Zanabazar Square characters */
# 503 "/usr/include/features.h" 2 3 4

/* This macro indicates that the installed library is the GNU C Library.
   For historic reasons the value now is 6 and this will stay from now
   on.  The use of this variable is deprecated.  Use __GLIBC__ and
   __GLIBC_MINOR__ now (see below) when you want to test for a specific
   GNU C library version and use the values in <gnu/lib-names.h> to get
   the sonames of the shared libraries.  */



/* Major and minor version number of the GNU C library package.  Use
   these macros to test for features in specific releases.  */






/* This is here only because every header file already includes this one.  */


# 1 "/usr/include/sys/cdefs.h" 1 3 4
/* Copyright (C) 1992-2025 Free Software Foundation, Inc.
   Copyright The GNU Toolchain Authors.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* We are almost always included from features.h. */




/* The GNU libc does not support any K&R compilers or the traditional mode
   of ISO C compilers anymore.  Check for some of the combinations not
   supported anymore.  */




/* Some user header file might have defined this before.  */



/* Compilers that lack __has_attribute may object to
       #if defined __has_attribute && __has_attribute (...)
   even though they do not need to evaluate the right-hand side of the &&.
   Similarly for __has_builtin, etc.  */
# 62 "/usr/include/sys/cdefs.h" 3 4
/* All functions, except those with callbacks or those that
   synchronize memory, are leaf functions.  */
# 72 "/usr/include/sys/cdefs.h" 3 4
/* GCC can always grok prototypes.  For C++ programs we add throw()
   to help it optimize the function calls.  But this only works with
   gcc 2.8.x and egcs.  For gcc 3.4 and up we even mark C functions
   as non-throwing using a function attribute since programs can use
   the -fexceptions options for C code as well.  */
# 123 "/usr/include/sys/cdefs.h" 3 4
/* These two macros are not used in glibc anymore.  They are kept here
   only because some other projects expect the macros to be defined.  */



/* For these things, GCC behaves the ANSI way normally,
   and the non-ANSI way under -traditional.  */




/* This is not a typedef so `const __ptr_t' does the right thing.  */



/* C++ needs to know that types and declarations are C, not C++.  */
# 148 "/usr/include/sys/cdefs.h" 3 4
/* The overloadable attribute was added on clang 2.6. */







/* Fortify support.  */



/* Use __builtin_dynamic_object_size at _FORTIFY_SOURCE=3 when available.  */
# 374 "/usr/include/sys/cdefs.h" 3 4
/* Support for flexible arrays.
   Headers that should use flexible arrays only if they're "real"
   (e.g. only if they won't affect sizeof()) should test
   #if __glibc_c99_flexarr_available.  */
# 398 "/usr/include/sys/cdefs.h" 3 4
/* __asm__ ("xyz") is used throughout the headers to rename functions
   at the assembly language level.  This is wrapped by the __REDIRECT
   macro, in order to support compilers that can do this some other
   way.  When compilers don't support asm-names at all, we have to do
   preprocessor tricks instead (which don't have exactly the right
   semantics, but it's the best we can do).

   Example:
   int __REDIRECT(setpgrp, (__pid_t pid, __pid_t pgrp), setpgid); */
# 433 "/usr/include/sys/cdefs.h" 3 4
/*
#elif __SOME_OTHER_COMPILER__

# define __REDIRECT(name, proto, alias) name proto; \
	_Pragma("let " #name " = " #alias)
*/


/* GCC and clang have various useful declarations that can be made with
   the '__attribute__' syntax.  All of the ways we use this do fine if
   they are omitted for compilers that don't understand it.  */




/* At some point during the gcc 2.96 development the `malloc' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */






/* Tell the compiler which arguments to an allocation function
   indicate the size of the allocation.  */







/* Tell the compiler which argument to an allocation function
   indicates the alignment of the allocation.  */







/* At some point during the gcc 2.96 development the `pure' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */






/* This declaration tells the compiler that the value is constant.  */
# 497 "/usr/include/sys/cdefs.h" 3 4
/* At some point during the gcc 3.1 development the `used' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.  */
# 508 "/usr/include/sys/cdefs.h" 3 4
/* Since version 3.2, gcc allows marking deprecated functions.  */






/* Since version 4.5, gcc also allows one to specify the message printed
   when a deprecated function is used.  clang claims to be gcc 4.2, but
   may also support this feature.  */
# 526 "/usr/include/sys/cdefs.h" 3 4
/* At some point during the gcc 2.8 development the `format_arg' attribute
   for functions was introduced.  We don't want to use it unconditionally
   (although this would be possible) since it generates warnings.
   If several `format_arg' attributes are given for the same function, in
   gcc-3.0 and older, all but the last one are ignored.  In newer gccs,
   all designated arguments are considered.  */






/* At some point during the gcc 2.97 development the `strfmon' format
   attribute for functions was introduced.  We don't want to use it
   unconditionally (although this would be possible) since it
   generates warnings.  */







/* The nonnull function attribute marks pointer parameters that
   must not be NULL.  This has the name __nonnull in glibc,
   and __attribute_nonnull__ in files shared with Gnulib to avoid
   collision with a different __nonnull in DragonFlyBSD 5.9.  */
# 564 "/usr/include/sys/cdefs.h" 3 4
/* The returns_nonnull function attribute marks the return type of the function
   as always being non-null.  */
# 574 "/usr/include/sys/cdefs.h" 3 4
/* If fortification mode, we warn about unused results of certain
   function calls which can lead to problems.  */
# 589 "/usr/include/sys/cdefs.h" 3 4
/* Forces a function to be always inlined.  */

/* The Linux kernel defines __always_inline in stddef.h (283d7573), and
   it conflicts with this definition.  Therefore undefine it first to
   allow either header to be included first.  */







/* Associate error messages with the source location of the call site rather
   than with the source location inside the function.  */






/* GCC 4.3 and above with -std=c99 or -std=gnu99 implements ISO C99
   inline semantics, unless -fgnu89-inline is used.  Using __GNUC_STDC_INLINE__
   or __GNUC_GNU_INLINE is not a good enough check for gcc because gcc versions
   older than 4.3 may define these macros and still not guarantee GNU inlining
   semantics.

   clang++ identifies itself as gcc-4.2, but has support for GNU inlining
   semantics, that can be checked for by using the __GNUC_STDC_INLINE_ and
   __GNUC_GNU_INLINE__ macro definitions.  */
# 635 "/usr/include/sys/cdefs.h" 3 4
/* GCC 4.3 and above allow passing all anonymous arguments of an
   __extern_always_inline function to some other vararg function.  */





/* It is possible to compile containing GCC extensions even if GCC is
   run in pedantic mode if the uses are carefully marked using the
   `__extension__' keyword.  But this is not generally available before
   version 2.8.  */




/* __restrict is known in EGCS 1.2 and above, and in clang.
   It works also in C++ mode (outside of arrays), but only when spelled
   as '__restrict', not 'restrict'.  */
# 661 "/usr/include/sys/cdefs.h" 3 4
/* ISO C99 also allows to declare arrays as non-overlapping.  The syntax is
     array_name[restrict]
   GCC 3.1 and clang support this.
   This syntax is not usable in C++ mode.  */
# 708 "/usr/include/sys/cdefs.h" 3 4
/* Undefine (also defined in libc-symbols.h).  */
# 727 "/usr/include/sys/cdefs.h" 3 4
/* Gnulib avoids including these, as they don't work on non-glibc or
   older glibc platforms.  */

# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 14 "/usr/include/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 731 "/usr/include/sys/cdefs.h" 2 3 4
# 1 "/usr/include/bits/long-double.h" 1 3 4
/* Properties of long double type.  ldbl-96 version.
   Copyright (C) 2016-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License  published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* long double is distinct from double, so there is nothing to
   define here.  */
# 732 "/usr/include/sys/cdefs.h" 2 3 4
# 801 "/usr/include/sys/cdefs.h" 3 4
/* __glibc_macro_warning (MESSAGE) issues warning MESSAGE.  This is
   intended for use in preprocessor macros.

   Note: MESSAGE must be a _single_ string; concatenation of string
   literals is not supported.  */
# 814 "/usr/include/sys/cdefs.h" 3 4
/* Generic selection (ISO C11) is a C-only feature, available in GCC
   since version 4.9.  Previous versions do not provide generic
   selection, even though they might set __STDC_VERSION__ to 201112L,
   when in -std=c11 mode.  Thus, we must check for !defined __GNUC__
   when testing __STDC_VERSION__ for generic selection support.
   On the other hand, Clang also defines __GNUC__, so a clang-specific
   check is required to enable the use of generic selection.  */
# 869 "/usr/include/sys/cdefs.h" 3 4
/* Specify that a function such as setjmp or vfork may return
   twice.  */






/* Mark struct types as aliasable.  Restricted to compilers that
   support forward declarations of structs in the presence of the
   attribute.  */
# 525 "/usr/include/features.h" 2 3 4


/* If we don't have __REDIRECT, prototypes will be missing if
   __USE_FILE_OFFSET64 but not __USE_LARGEFILE[64]. */







/* Decide whether we can define 'extern inline' functions in headers.  */







/* This is here only because every header file already includes this one.
   Get the definitions of all the appropriate `__stub_FUNCTION' symbols.
   <gnu/stubs.h> contains `#define __stub_FUNCTION' when FUNCTION is a stub
   that will always return failure (and set errno to ENOSYS).  */
# 1 "/usr/include/gnu/stubs.h" 1 3 4
/* This file is automatically generated.
   This file selects the right generated file of `__stub_FUNCTION' macros
   based on the architecture being compiled for.  */






# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
/* This file is automatically generated.
   It defines a symbol `__stub_FUNCTION' for each function
   in the C library which is a stub, meaning it will fail
   every time called, usually setting errno to ENOSYS.  */
# 11 "/usr/include/gnu/stubs.h" 2 3 4
# 549 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/aio.h" 2 3 4
# 1 "/usr/include/sys/types.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 2.6 Primitive System Data Types	<sys/types.h>
 */
# 29 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/types.h" 1 3 4
/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */





# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 14 "/usr/include/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 28 "/usr/include/bits/types.h" 2 3 4
# 1 "/usr/include/bits/timesize.h" 1 3 4
/* Bit size of the time_t type at glibc build time, x86-64 and x32 case.
   Copyright (C) 2018-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 14 "/usr/include/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 20 "/usr/include/bits/timesize.h" 2 3 4





/* For others, time size is word size.  */
# 29 "/usr/include/bits/types.h" 2 3 4

/* Convenience types.  */
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;

/* Fixed-size types, underlying types depend on word size and compiler.  */
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;





/* Smallest types with at least a given width.  */
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;

/* quad_t is also 64 bits.  */

typedef long int __quad_t;
typedef unsigned long int __u_quad_t;





/* Largest integral types.  */

typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;






/* The machine-dependent file <bits/typesizes.h> defines __*_T_TYPE
   macros for each of the OS types we define below.  The definitions
   of those macros must use the following macros for underlying types.
   We define __S<SIZE>_TYPE and __U<SIZE>_TYPE for the signed and unsigned
   variants of each of the following integer types on this machine.

	16		-- "natural" 16-bit type (always short)
	32		-- "natural" 32-bit type (always int)
	64		-- "natural" 64-bit type (long or long long)
	LONG32		-- 32-bit type, traditionally long
	QUAD		-- 64-bit type, traditionally long long
	WORD		-- natural type of __WORDSIZE bits (int or long)
	LONGWORD	-- type of __WORDSIZE bits, traditionally long

   We distinguish WORD/LONGWORD, 32/LONG32, and 64/QUAD so that the
   conventional uses of `long' or `long long' type modifiers match the
   types we define, even when a less-adorned type would be the same size.
   This matters for (somewhat) portably writing printf/scanf formats for
   these types, where using the appropriate l or ll format modifiers can
   make the typedefs and the formats match up across all GNU platforms.  If
   we used `long' when it's 64 bits where `long long' is expected, then the
   compiler would warn about the formats not matching the argument types,
   and the programmer changing them to shut up the compiler would break the
   program's portability.

   Here we assume what is presently the case in all the GCC configurations
   we support: long long is always 64 bits, long is always word/address size,
   and int is always 32 bits.  */
# 136 "/usr/include/bits/types.h" 3 4
/* No need to mark the typedef with __extension__.   */




# 1 "/usr/include/bits/typesizes.h" 1 3 4
/* bits/typesizes.h -- underlying types for *_t.  Linux/x86-64 version.
   Copyright (C) 2012-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/bits/typesizes.h" 3 4
/* See <bits/types.h> for the meaning of these macros.  This file exists so
   that <bits/types.h> need not vary across different GNU platforms.  */

/* X32 kernel interface is 64-bit.  */
# 78 "/usr/include/bits/typesizes.h" 3 4
/* Tell the libc code that off_t and off64_t are actually the same type
   for all ABI purposes, even if possibly expressed as different base types
   for C type-checking purposes.  */


/* Same for ino_t and ino64_t.  */


/* And for __rlim_t and __rlim64_t.  */


/* And for fsblkcnt_t, fsblkcnt64_t, fsfilcnt_t and fsfilcnt64_t.  */


/* And for getitimer, setitimer and rusage  */
# 102 "/usr/include/bits/typesizes.h" 3 4
/* Number of descriptors that can fit in an `fd_set'.  */
# 142 "/usr/include/bits/types.h" 2 3 4
# 1 "/usr/include/bits/time64.h" 1 3 4
/* bits/time64.h -- underlying types for __time64_t.  Generic version.
   Copyright (C) 2018-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/bits/time64.h" 3 4
/* Define __TIME64_T_TYPE so that it is always a 64-bit type.  */


/* If we already have 64-bit time type then use it.  */
# 143 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t; /* Type of device numbers.  */
typedef unsigned int __uid_t; /* Type of user identifications.  */
typedef unsigned int __gid_t; /* Type of group identifications.  */
typedef unsigned long int __ino_t; /* Type of file serial numbers.  */
typedef unsigned long int __ino64_t; /* Type of file serial numbers (LFS).*/
typedef unsigned int __mode_t; /* Type of file attribute bitmasks.  */
typedef unsigned long int __nlink_t; /* Type of file link counts.  */
typedef long int __off_t; /* Type of file sizes and offsets.  */
typedef long int __off64_t; /* Type of file sizes and offsets (LFS).  */
typedef int __pid_t; /* Type of process identifications.  */
typedef struct { int __val[2]; } __fsid_t; /* Type of file system IDs.  */
typedef long int __clock_t; /* Type of CPU usage counts.  */
typedef unsigned long int __rlim_t; /* Type for resource measurement.  */
typedef unsigned long int __rlim64_t; /* Type for resource measurement (LFS).  */
typedef unsigned int __id_t; /* General type for IDs.  */
typedef long int __time_t; /* Seconds since the Epoch.  */
typedef unsigned int __useconds_t; /* Count of microseconds.  */
typedef long int __suseconds_t; /* Signed count of microseconds.  */
typedef long int __suseconds64_t;

typedef int __daddr_t; /* The type of a disk address.  */
typedef int __key_t; /* Type of an IPC key.  */

/* Clock ID used in clock and timer functions.  */
typedef int __clockid_t;

/* Timer ID returned by `timer_create'.  */
typedef void * __timer_t;

/* Type to represent block size.  */
typedef long int __blksize_t;

/* Types from the Large File Support interface.  */

/* Type to count number of disk blocks.  */
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;

/* Type to count file system blocks.  */
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;

/* Type to count file system nodes.  */
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

/* Type of miscellaneous file system fields.  */
typedef long int __fsword_t;

typedef long int __ssize_t; /* Type of a byte count, or error.  */

/* Signed long type used in system calls.  */
typedef long int __syscall_slong_t;
/* Unsigned long type used in system calls.  */
typedef unsigned long int __syscall_ulong_t;

/* These few don't really vary by system, they always correspond
   to one of the other defined types.  */
typedef __off64_t __loff_t; /* Type of file sizes and offsets (LFS).  */
typedef char *__caddr_t;

/* Duplicates info from stdint.h but this is used in unistd.h.  */
typedef long int __intptr_t;

/* Duplicate info from sys/socket.h.  */
typedef unsigned int __socklen_t;

/* C99: An integer type that can be accessed as an atomic entity,
   even in the presence of asynchronous interrupts.
   It is not currently necessary for this to be machine-specific.  */
typedef int __sig_atomic_t;

/* Seconds since the Epoch, visible to user code when time_t is too
   narrow only for consistency with the old way of widening too-narrow
   types.  User code should never use __time64_t.  */
# 30 "/usr/include/sys/types.h" 2 3 4
# 47 "/usr/include/sys/types.h" 3 4
typedef __ino_t ino_t;
# 59 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 97 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;
# 108 "/usr/include/sys/types.h" 3 4
typedef __ssize_t ssize_t;
# 128 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/types/clockid_t.h" 1 3 4





/* Clock ID used in clock and timer functions.  */
typedef __clockid_t clockid_t;
# 129 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/bits/types/time_t.h" 1 3 4





/* Returned by `time'.  */



typedef __time_t time_t;
# 130 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/bits/types/timer_t.h" 1 3 4





/* Timer ID returned by `timer_create'.  */
typedef __timer_t timer_t;
# 131 "/usr/include/sys/types.h" 2 3 4
# 144 "/usr/include/sys/types.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 93 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_size_t.h" 1 3 4
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */




typedef long unsigned int size_t;
# 94 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 145 "/usr/include/sys/types.h" 2 3 4








/* These size-specific names are used by some of the inet code.  */

# 1 "/usr/include/bits/stdint-intn.h" 1 3 4
/* Define intN_t types.
   Copyright (C) 2017-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 156 "/usr/include/sys/types.h" 2 3 4

/* These were defined by ISO C without the first `_'.  */
typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;




typedef int register_t;


/* Some code from BIND tests this macro to see if the types above are
   defined.  */
# 189 "/usr/include/sys/types.h" 3 4
/* Types from the Large File Support interface.  */


typedef __blkcnt_t blkcnt_t; /* Type to count number of disk blocks.  */



typedef __fsblkcnt_t fsblkcnt_t; /* Type to count file system blocks.  */



typedef __fsfilcnt_t fsfilcnt_t; /* Type to count file system inodes.  */
# 225 "/usr/include/sys/types.h" 3 4
/* Now add the thread types.  */
# 27 "/usr/include/aio.h" 2 3 4
# 1 "/usr/include/bits/types/sigevent_t.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 14 "/usr/include/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 5 "/usr/include/bits/types/sigevent_t.h" 2 3 4

# 1 "/usr/include/bits/types/__sigval_t.h" 1 3 4
/* Define __sigval_t.
   Copyright (C) 1997-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* Type for data associated with a signal.  */
# 32 "/usr/include/bits/types/__sigval_t.h" 3 4
union __sigval
{
  int __sival_int;
  void *__sival_ptr;
};

typedef union __sigval __sigval_t;
# 7 "/usr/include/bits/types/sigevent_t.h" 2 3 4








/* Forward declaration.  */

typedef union pthread_attr_t pthread_attr_t;



/* Structure to transport application-defined values with signals.  */
typedef struct sigevent
  {
    __sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 4)];

 /* When SIGEV_SIGNAL and SIGEV_THREAD_ID set, LWP ID of the
	   thread to receive the signal.  */
 __pid_t _tid;

 struct
   {
     void (*_function) (__sigval_t); /* Function to start.  */
     pthread_attr_t *_attribute; /* Thread attributes.  */
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;

/* POSIX names to access some of the members.  */
# 28 "/usr/include/aio.h" 2 3 4
# 1 "/usr/include/bits/sigevent-consts.h" 1 3 4
/* sigevent constants.  Linux version.
   Copyright (C) 1997-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/bits/sigevent-consts.h" 3 4
/* `sigev_notify' values.  */
enum
{
  SIGEV_SIGNAL = 0, /* Notify via signal.  */

  SIGEV_NONE, /* Other notification: meaningless.  */

  SIGEV_THREAD, /* Deliver via thread creation.  */


  SIGEV_THREAD_ID = 4 /* Send signal to specific thread.
				   This is a Linux extension.  */

};
# 29 "/usr/include/aio.h" 2 3 4
# 1 "/usr/include/bits/types/struct_timespec.h" 1 3 4
/* NB: Include guard matches what <linux/time.h> uses.  */




# 1 "/usr/include/bits/endian.h" 1 3 4
/* Endian macros for string.h functions
   Copyright (C) 1992-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */




/* Definitions for byte order, according to significance of bytes,
   from low addresses to high addresses.  The value is what you get by
   putting '4' in the most significant byte, '3' in the second most
   significant byte, '2' in the second least significant byte, and '1'
   in the least significant byte, and then writing down one digit for
   each byte, starting with the byte at the lowest address at the left,
   and proceeding to the byte with the highest address at the right.  */





/* This file defines `__BYTE_ORDER' for the particular machine.  */
# 1 "/usr/include/bits/endianness.h" 1 3 4







/* i386/x86_64 are little-endian.  */
# 36 "/usr/include/bits/endian.h" 2 3 4

/* Some machines may need to use a different endianness for floating point
   values.  */
# 7 "/usr/include/bits/types/struct_timespec.h" 2 3 4


/* POSIX.1b structure for a time value.  This is like a `struct timeval' but
   has nanoseconds instead of microseconds.  */
struct timespec
{



  __time_t tv_sec; /* Seconds.  */




  __syscall_slong_t tv_nsec; /* Nanoseconds.  */
# 31 "/usr/include/bits/types/struct_timespec.h" 3 4
};
# 30 "/usr/include/aio.h" 2 3 4



/* Asynchronous I/O control block.  */
struct aiocb
{
  int aio_fildes; /* File descriptor.  */
  int aio_lio_opcode; /* Operation to be performed.  */
  int aio_reqprio; /* Request priority offset.  */
  volatile void *aio_buf; /* Location of buffer.  */
  size_t aio_nbytes; /* Length of transfer.  */
  struct sigevent aio_sigevent; /* Signal number and value.  */

  /* Internal members.  */
  struct aiocb *__next_prio;
  int __abs_prio;
  int __policy;
  int __error_code;
  __ssize_t __return_value;


  __off_t aio_offset; /* File offset.  */
  char __pad[sizeof (__off64_t) - sizeof (__off_t)];



  char __glibc_reserved[32];
};

/* The same for the 64bit offsets.  Please note that the members aio_fildes
   to __return_value have to be the same in aiocb and aiocb64.  */
# 101 "/usr/include/aio.h" 3 4
/* Return values of the aio_cancel function.  */
enum
{
  AIO_CANCELED,

  AIO_NOTCANCELED,

  AIO_ALLDONE

};


/* Operation codes for `aio_lio_opcode'.  */
enum
{
  LIO_READ,

  LIO_WRITE,

  LIO_NOP

};


/* Synchronization options for `lio_listio' function.  */
enum
{
  LIO_WAIT,

  LIO_NOWAIT

};


/* Allow user to specify optimization.  */






/* Enqueue read request for given number of bytes and the given priority.  */
extern int aio_read (struct aiocb *__aiocbp) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
/* Enqueue write request for given number of bytes and the given priority.  */
extern int aio_write (struct aiocb *__aiocbp) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

/* Initiate list of I/O requests.  */
extern int lio_listio (int __mode,
         struct aiocb *const __list[__restrict],
         int __nent, struct sigevent *__restrict __sig)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));

/* Retrieve error status associated with AIOCBP.  */
extern int aio_error (const struct aiocb *__aiocbp) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
/* Return status associated with AIOCBP.  */
extern __ssize_t aio_return (struct aiocb *__aiocbp) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

/* Try to cancel asynchronous I/O requests outstanding against file
   descriptor FILDES.  */
extern int aio_cancel (int __fildes, struct aiocb *__aiocbp) __attribute__ ((__nothrow__ ));

/* Suspend calling thread until at least one of the asynchronous I/O
   operations referenced by LIST has completed.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int aio_suspend (const struct aiocb *const __list[], int __nent,
   const struct timespec *__restrict __timeout)
  __attribute__ ((__nonnull__ (1)));

/* Force all operations associated with file descriptor described by
   `aio_fildes' member of AIOCBP.  */
extern int aio_fsync (int __operation, struct aiocb *__aiocbp)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
# 3 "all.c" 2
# 1 "/usr/include/aliases.h" 1 3 4
/* Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 28 "/usr/include/aliases.h" 3 4
/* Structure to represent one entry of the alias database.  */
struct aliasent
  {
    char *alias_name;
    size_t alias_members_len;
    char **alias_members;
    int alias_local;
  };


/* Open alias data base files.  */
extern void setaliasent (void) __attribute__ ((__nothrow__ ));

/* Close alias database files.  */
extern void endaliasent (void) __attribute__ ((__nothrow__ ));

/* Get the next entry from the alias database.  */
extern struct aliasent *getaliasent (void) __attribute__ ((__nothrow__ ));

/* Get the next entry from the alias database and put it in RESULT_BUF.  */
extern int getaliasent_r (struct aliasent *__restrict __result_buf,
     char *__restrict __buffer, size_t __buflen,
     struct aliasent **__restrict __result) __attribute__ ((__nothrow__ ));

/* Get alias entry corresponding to NAME.  */
extern struct aliasent *getaliasbyname (const char *__name) __attribute__ ((__nothrow__ ));

/* Get alias entry corresponding to NAME and put it in RESULT_BUF.  */
extern int getaliasbyname_r (const char *__restrict __name,
        struct aliasent *__restrict __result_buf,
        char *__restrict __buffer, size_t __buflen,
        struct aliasent **__restrict __result) __attribute__ ((__nothrow__ ));
# 4 "all.c" 2
# 1 "/usr/include/alloca.h" 1 3 4
/* Copyright (C) 1992-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */







# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 93 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_size_t.h" 1 3 4
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 94 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 25 "/usr/include/alloca.h" 2 3 4



/* Remove any previous definition.  */


/* Allocate a block that will be freed when the calling function exits.  */
extern void *alloca (size_t __size) __attribute__ ((__nothrow__ ));
# 5 "all.c" 2
# 1 "/usr/include/ar.h" 1 3 4
/* Header describing `ar' archive file format.
   Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






/* Archive files start with the ARMAG identifying string.  Then follows a
   `struct ar_hdr', and as many bytes of member file data as its `ar_size'
   member indicates, for each member file.  */
# 35 "/usr/include/ar.h" 3 4
struct ar_hdr
  {
    char ar_name[16]; /* Member file name, sometimes / terminated. */
    char ar_date[12]; /* File date, decimal seconds since Epoch.  */
    char ar_uid[6], ar_gid[6]; /* User and group IDs, in ASCII decimal.  */
    char ar_mode[8]; /* File mode, in ASCII octal.  */
    char ar_size[10]; /* File size, in ASCII decimal.  */
    char ar_fmag[2]; /* Always contains ARFMAG.  */
  };
# 6 "all.c" 2
# 1 "/usr/include/argp.h" 1 3 4
/* Hierarchical argument parsing, layered over getopt.
   Copyright (C) 1995-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Written by Miles Bader <miles@gnu.ai.mit.edu>.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




# 1 "/usr/include/stdio.h" 1 3 4
/* Define ISO C stdio on top of C++ iostreams.
   Copyright (C) 1991-2025 Free Software Foundation, Inc.
   Copyright The GNU Toolchain Authors.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.19 Input/output	<stdio.h>
 */





# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */
# 35 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
# 45 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  Most but not all symbols enabled by that macro in TS
   18661-1 are enabled unconditionally in C23.  In C23, the symbols in
   Annex F still require a new feature test macro
   __STDC_WANT_IEC_60559_EXT__ instead (C23 does not define
   __STDC_WANT_IEC_60559_BFP_EXT__), while a few features from TS
   18661-1 are not included in C23 (and thus should depend on
   __STDC_WANT_IEC_60559_BFP_EXT__ even when C23 features are
   enabled).

   __GLIBC_USE (IEC_60559_BFP_EXT) controls those features from TS
   18661-1 not included in C23.

   __GLIBC_USE (IEC_60559_BFP_EXT_C23) controls those features from TS
   18661-1 that are also included in C23 (with no feature test macro
   required in C23).

   __GLIBC_USE (IEC_60559_EXT) controls those features from TS 18661-1
   that are included in C23 but conditional on
   __STDC_WANT_IEC_60559_EXT__.  (There are currently no features
   conditional on __STDC_WANT_IEC_60559_EXT__ that are not in TS
   18661-1.)  */
# 86 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  Other than the reduction
   functions, the symbols from this TS are enabled unconditionally in
   C23.  */
# 103 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
# 29 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 93 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_size_t.h" 1 3 4
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 94 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 108 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_null.h" 1 3 4
/*===---- __stddef_null.h - Definition of NULL -----------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */



/* linux/stddef.h will define NULL to 0. glibc (and other) headers then define
 * __need_NULL and rely on stddef.h to redefine NULL to the correct value again.
 * Modules don't support redefining macros like that, but support that pattern
 * in the non-modules case.
 */
# 109 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 35 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/bin/../lib/clang/21/include/stdarg.h" 1 3 4
/*===---- stdarg.h - Variable argument handling ----------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stdarg.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 51 "/usr/bin/../lib/clang/21/include/stdarg.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stdarg___gnuc_va_list.h" 1 3 4
/*===---- __stdarg___gnuc_va_list.h - Definition of __gnuc_va_list ---------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */



typedef __builtin_va_list __gnuc_va_list;
# 52 "/usr/bin/../lib/clang/21/include/stdarg.h" 2 3 4
# 38 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/bits/types/__mbstate_t.h" 1 3 4



/* Integral type unchanged by default argument promotions that can
   hold any value corresponding to members of the extended character
   set, as well as at least one value that does not correspond to any
   member of the extended character set.  */




/* Conversion state information.  */
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value; /* Value so far.  */
} __mbstate_t;
# 6 "/usr/include/bits/types/__fpos_t.h" 2 3 4

/* The tag name of this struct is _G_fpos_t to preserve historic
   C++ mangled names for functions taking fpos_t arguments.
   That name should not be used in new code.  */
typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/__fpos64_t.h" 1 3 4






/* The tag name of this struct is _G_fpos64_t to preserve historic
   C++ mangled names for functions taking fpos_t and/or fpos64_t
   arguments.  That name should not be used in new code.  */
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/FILE.h" 1 3 4



struct _IO_FILE;

/* The opaque type of streams.  This is the definition used elsewhere.  */
typedef struct _IO_FILE FILE;
# 44 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/struct_FILE.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   Copyright The GNU Toolchain Authors.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* Caution: The contents of this file are not part of the official
   stdio.h API.  However, much of it is part of the official *binary*
   interface, and therefore cannot be changed.  */
# 35 "/usr/include/bits/types/struct_FILE.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 14 "/usr/include/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 36 "/usr/include/bits/types/struct_FILE.h" 2 3 4

struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;

/* During the build of glibc itself, _IO_lock_t will already have been
   defined by internal headers.  */

typedef void _IO_lock_t;


/* The tag name of this struct is _IO_FILE to preserve historic
   C++ mangled names for functions taking FILE* arguments.
   That name should not be used in new code.  */
struct _IO_FILE
{
  int _flags; /* High-order word is _IO_MAGIC; rest is flags. */

  /* The following pointers correspond to the C++ streambuf protocol. */
  char *_IO_read_ptr; /* Current read pointer */
  char *_IO_read_end; /* End of get area. */
  char *_IO_read_base; /* Start of putback+get area. */
  char *_IO_write_base; /* Start of put area. */
  char *_IO_write_ptr; /* Current put pointer. */
  char *_IO_write_end; /* End of put area. */
  char *_IO_buf_base; /* Start of reserve area. */
  char *_IO_buf_end; /* End of reserve area. */

  /* The following fields are used to support backing up and undo. */
  char *_IO_save_base; /* Pointer to start of non-current get area. */
  char *_IO_backup_base; /* Pointer to first valid character of backup area */
  char *_IO_save_end; /* Pointer to end of non-current get area. */

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2:24;
  /* Fallback buffer to use when malloc fails to allocate one.  */
  char _short_backupbuf[1];
  __off_t _old_offset; /* This used to be _offset but it's too small.  */

  /* 1+column number of pbase(); 0 is unknown. */
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;
  /* Wide character stream stuff.  */
  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  struct _IO_FILE **_prevchain;
  int _mode;

  int _unused3;

  __uint64_t _total_written;



  /* Make sure we don't get into trouble again.  */
  char _unused2[12 * sizeof (int) - 5 * sizeof (void *)];
};

/* These macros are used by bits/stdio.h and internal headers.  */
# 129 "/usr/include/bits/types/struct_FILE.h" 3 4
/* Many more flag bits are defined internally.  */
# 45 "/usr/include/stdio.h" 2 3 4
# 83 "/usr/include/stdio.h" 3 4
/* The type of the second argument to `fgetpos' and `fsetpos'.  */

typedef __fpos_t fpos_t;







/* The possibilities for the third argument to `setvbuf'.  */





/* Default buffer size.  */



/* The value returned by fgetc and similar functions to indicate the
   end of the file.  */



/* The possibilities for the third argument to `fseek'.
   These values should not be changed.  */
# 127 "/usr/include/stdio.h" 3 4
/* Get the values:
   FILENAME_MAX	Maximum length of a filename.  */
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
/* System specific stdio.h definitions.  Linux version.
   Copyright (C) 2023-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 130 "/usr/include/stdio.h" 2 3 4
# 148 "/usr/include/stdio.h" 3 4
/* Standard streams.  */
extern FILE *stdin; /* Standard input stream.  */
extern FILE *stdout; /* Standard output stream.  */
extern FILE *stderr; /* Standard error output stream.  */
/* C89/C99 say they're macros.  Make them happy.  */




/* Remove file FILENAME.  */
extern int remove (const char *__filename) __attribute__ ((__nothrow__ ));
/* Rename file OLD to NEW.  */
extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ ));
# 183 "/usr/include/stdio.h" 3 4
/* Close STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fclose (FILE *__stream) __attribute__ ((__nonnull__ (1)));




/* Create a temporary file and open it read/write.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */

extern FILE *tmpfile (void)
  __attribute__ ((__malloc__)) ;
# 213 "/usr/include/stdio.h" 3 4
/* Generate a temporary filename.  */
extern char *tmpnam (char[20]) __attribute__ ((__nothrow__ )) ;
# 235 "/usr/include/stdio.h" 3 4
/* Flush STREAM, or all streams if STREAM is NULL.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fflush (FILE *__stream);
# 263 "/usr/include/stdio.h" 3 4
/* Open a file and create a new stream for it.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes)
  __attribute__ ((__malloc__)) ;
/* Open a file, replacing an existing stream with it.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) __attribute__ ((__nonnull__ (3)));
# 335 "/usr/include/stdio.h" 3 4
/* If BUF is NULL, make STREAM unbuffered.
   Else make it use buffer BUF, of size BUFSIZ.  */
extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ ))
  __attribute__ ((__nonnull__ (1)));
/* Make STREAM use buffering mode MODE.
   If BUF is not NULL, use N bytes of it for buffering;
   else allocate an internal buffer N bytes long.  */
extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 356 "/usr/include/stdio.h" 3 4
/* Write formatted output to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...) __attribute__ ((__nonnull__ (1)));
/* Write formatted output to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int printf (const char *__restrict __format, ...);
/* Write formatted output to S.  */
extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));

/* Write formatted output to S from argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nonnull__ (1)));
/* Write formatted output to stdout from argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);
/* Write formatted output to S from argument list ARG.  */
extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));


/* Maximum chars of output to write in MAXLEN.  */
extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 421 "/usr/include/stdio.h" 3 4
/* Read formatted input from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) __attribute__ ((__nonnull__ (1)));
/* Read formatted input from stdin.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int scanf (const char *__restrict __format, ...) ;
/* Read formatted input from S.  */
extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ ));

/* For historical reasons, the C99-compliant versions of the scanf
   functions are at alternative names.  When __LDBL_COMPAT or
   __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI are in effect, this is handled in
   bits/stdio-ldbl.h.  */
# 1 "/usr/include/bits/floatn.h" 1 3 4
/* Macros to control TS 18661-3 glibc features on x86.
   Copyright (C) 2017-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






/* Defined to 1 if the current compiler invocation provides a
   floating-point type with the IEEE 754 binary128 format, and this
   glibc includes corresponding *f128 interfaces for it.  The required
   libgcc support was added some time after the basic compiler
   support, for x86_64 and x86.  Intel SYCL compiler doesn't support
   _Float128: https://github.com/intel/llvm/issues/16903
  */
# 42 "/usr/include/bits/floatn.h" 3 4
/* Defined to 1 if __HAVE_FLOAT128 is 1 and the type is ABI-distinct
   from the default float, double and long double types in this glibc.  */






/* Defined to 1 if the current compiler invocation provides a
   floating-point type with the right format for _Float64x, and this
   glibc includes corresponding *f64x interfaces for it.  */


/* Defined to 1 if __HAVE_FLOAT64X is 1 and _Float64x has the format
   of long double.  Otherwise, if __HAVE_FLOAT64X is 1, _Float64x has
   the format of _Float128, which must be different from that of long
   double.  */




/* Defined to concatenate the literal suffix to be used with _Float128
   types, if __HAVE_FLOAT128 is 1. */




/* The literal suffix f128 exists only since GCC 7.0.  */






/* Defined to a complex binary128 type if __HAVE_FLOAT128 is 1.  */




/* Add a typedef for older GCC compilers which don't natively support
   _Complex _Float128.  */
typedef _Complex float __cfloat128 __attribute__ ((__mode__ (__TC__)));






/* The remaining of this file provides support for older compilers.  */


/* The type _Float128 exists only since GCC 7.0.  */



typedef __float128 _Float128;


/* __builtin_huge_valf128 doesn't exist before GCC 7.0 nor Clang 7.0.  */




/* Older GCC has only a subset of built-in functions for _Float128 on
   x86, and __builtin_infq is not usable in static initializers.
   Converting a narrower sNaN to _Float128 produces a quiet NaN, so
   attempts to use _Float128 sNaNs will not work properly with older
   compilers.  */
# 118 "/usr/include/bits/floatn.h" 3 4
/* In math/math.h, __MATH_TG will expand signbit to __builtin_signbit*,
   e.g.: __builtin_signbitf128, before GCC 6.  However, there has never
   been a __builtin_signbitf128 in GCC and the type-generic builtin is
   only available since GCC 6.  signbit is expanded to __builtin_signbit
   after Clang 3.3.  */
# 131 "/usr/include/bits/floatn.h" 3 4
# 1 "/usr/include/bits/floatn-common.h" 1 3 4
/* Macros to control TS 18661-3 glibc features where the same
   definitions are appropriate for all platforms.
   Copyright (C) 2017-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





# 1 "/usr/include/bits/long-double.h" 1 3 4
/* Properties of long double type.  ldbl-96 version.
   Copyright (C) 2016-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License  published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* long double is distinct from double, so there is nothing to
   define here.  */
# 25 "/usr/include/bits/floatn-common.h" 2 3 4

/* This header should be included at the bottom of each bits/floatn.h.
   It defines the following macros for each _FloatN and _FloatNx type,
   where the same definitions, or definitions based only on the macros
   in bits/floatn.h, are appropriate for all glibc configurations.  */

/* Defined to 1 if the current compiler invocation provides a
   floating-point type with the right format for this type, and this
   glibc includes corresponding *fN or *fNx interfaces for it.  */






/* Defined to 1 if the corresponding __HAVE_<type> macro is 1 and the
   type is the first with its format in the sequence of (the default
   choices for) float, double, long double, _Float16, _Float32,
   _Float64, _Float128, _Float32x, _Float64x, _Float128x for this
   glibc; that is, if functions present once per floating-point format
   rather than once per type are present for this type.

   All configurations supported by glibc have _Float32 the same format
   as float, _Float64 and _Float32x the same format as double, the
   _Float64x the same format as either long double or _Float128.  No
   configurations support _Float128x or, as of GCC 7, have compiler
   support for a type meeting the requirements for _Float128x.  */







/* Defined to 1 if the corresponding _FloatN type is not binary compatible
   with the corresponding ISO C type in the current compilation unit as
   opposed to __HAVE_DISTINCT_FLOATN, which indicates the default types built
   in glibc.  */



/* Defined to 1 if any _FloatN or _FloatNx types that are not
   ABI-distinct are however distinct types at the C language level (so
   for the purposes of __builtin_types_compatible_p and _Generic).  */
# 77 "/usr/include/bits/floatn-common.h" 3 4
/* Defined to concatenate the literal suffix to be used with _FloatN
   or _FloatNx types, if __HAVE_<type> is 1.  The corresponding
   literal suffixes exist since GCC 7, for C only.  */
# 137 "/usr/include/bits/floatn-common.h" 3 4
/* Defined to a complex type if __HAVE_<type> is 1.  */
# 195 "/usr/include/bits/floatn-common.h" 3 4
/* The remaining of this file provides support for older compilers.  */
# 214 "/usr/include/bits/floatn-common.h" 3 4
typedef float _Float32;
# 228 "/usr/include/bits/floatn-common.h" 3 4
/* If double, long double and _Float64 all have the same set of
   values, TS 18661-3 requires the usual arithmetic conversions on
   long double and _Float64 to produce _Float64.  For this to be the
   case when building with a compiler without a distinct _Float64
   type, _Float64 must be a typedef for long double, not for
   double.  */
# 251 "/usr/include/bits/floatn-common.h" 3 4
typedef double _Float64;
# 268 "/usr/include/bits/floatn-common.h" 3 4
typedef double _Float32x;
# 285 "/usr/include/bits/floatn-common.h" 3 4
typedef long double _Float64x;
# 132 "/usr/include/bits/floatn.h" 2 3 4
# 441 "/usr/include/stdio.h" 2 3 4
# 466 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") __attribute__ ((__nonnull__ (1)));


extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") ;

extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ ));
# 489 "/usr/include/stdio.h" 3 4
/* Read formatted input from S into argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__nonnull__ (1)));

/* Read formatted input from stdin into argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;

/* Read formatted input from S into argument list ARG.  */
extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format__ (__scanf__, 2, 0)));

/* Same redirection as above for the v*scanf family.  */
# 543 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) __attribute__ ((__nonnull__ (1)));
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ ))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 574 "/usr/include/stdio.h" 3 4
/* Read a character from STREAM.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int fgetc (FILE *__stream) __attribute__ ((__nonnull__ (1)));
extern int getc (FILE *__stream) __attribute__ ((__nonnull__ (1)));

/* Read a character from stdin.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int getchar (void);
# 607 "/usr/include/stdio.h" 3 4
/* Write a character to STREAM.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern int fputc (int __c, FILE *__stream) __attribute__ ((__nonnull__ (2)));
extern int putc (int __c, FILE *__stream) __attribute__ ((__nonnull__ (2)));

/* Write a character to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int putchar (int __c);
# 650 "/usr/include/stdio.h" 3 4
/* Get a newline-terminated string of finite length from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
                                                          __attribute__ ((__nonnull__ (3)));
# 703 "/usr/include/stdio.h" 3 4
/* Write a string to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fputs (const char *__restrict __s, FILE *__restrict __stream)
  __attribute__ ((__nonnull__ (2)));

/* Write a string, followed by a newline, to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int puts (const char *__s);


/* Push a character back onto the input buffer of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int ungetc (int __c, FILE *__stream) __attribute__ ((__nonnull__ (2)));


/* Read chunks of generic data from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream)
  __attribute__ ((__nonnull__ (4)));
/* Write chunks of generic data to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) __attribute__ ((__nonnull__ (4)));
# 765 "/usr/include/stdio.h" 3 4
/* Seek to a certain position on STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fseek (FILE *__stream, long int __off, int __whence)
  __attribute__ ((__nonnull__ (1)));
/* Return the current position of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern long int ftell (FILE *__stream) __attribute__ ((__nonnull__ (1)));
/* Rewind to the beginning of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void rewind (FILE *__stream) __attribute__ ((__nonnull__ (1)));

/* The Single Unix Specification, Version 2, specifies an alternative,
   more adequate interface for the two functions above which deal with
   file offset.  `long int' is not the right type.  These definitions
   are originally defined in the Large File Support API.  */
# 815 "/usr/include/stdio.h" 3 4
/* Get STREAM's position.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos)
  __attribute__ ((__nonnull__ (1)));
/* Set STREAM's position.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fsetpos (FILE *__stream, const fpos_t *__pos) __attribute__ ((__nonnull__ (1)));
# 849 "/usr/include/stdio.h" 3 4
/* Clear the error and EOF indicators for STREAM.  */
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
/* Return the EOF indicator for STREAM.  */
extern int feof (FILE *__stream) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
/* Return the error indicator for STREAM.  */
extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 864 "/usr/include/stdio.h" 3 4
/* Print a message describing the meaning of the value of errno.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void perror (const char *__s) __attribute__ ((__cold__));
# 947 "/usr/include/stdio.h" 3 4
/* Slow-path routines used by the optimized inline functions in
   bits/stdio.h.  */
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);






/* The following headers provide asm redirections.  These redirections must
   appear before the first usage of these functions, e.g. in bits/stdio.h.  */




/* If we are compiling with optimizing read this file.  It contains
   several optimizing inline functions and macros.  */
# 24 "/usr/include/argp.h" 2 3 4
# 1 "/usr/include/ctype.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard 7.4: Character handling	<ctype.h>
 */
# 31 "/usr/include/ctype.h" 3 4
/* These are all the characteristics of characters.
   If there get to be more than 16 distinct characteristics,
   many things must be changed that use `unsigned short int's.

   The characteristics are stored always in network byte order (big
   endian).  We define the bit value interpretations here dependent on the
   machine's byte order.  */
# 46 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)), /* UPPERCASE.  */
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)), /* lowercase.  */
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)), /* Alphabetic.  */
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)), /* Numeric.  */
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)), /* Hexadecimal numeric.  */
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)), /* Whitespace.  */
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)), /* Printing.  */
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)), /* Graphical.  */
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)), /* Blank (usually SPC and TAB).  */
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)), /* Control character.  */
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)), /* Punctuation.  */
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8)) /* Alphanumeric.  */
};


/* These are defined in ctype-info.c.
   The declarations here must match those in localeinfo.h.

   In the thread-specific locale model (see `uselocale' in <locale.h>)
   we cannot use global variables for these as was done in the past.
   Instead, the following accessor functions return the address of
   each variable, which is local to the current thread if multithreaded.

   These point into arrays of 384, so they can be indexed by any `unsigned
   char' value [0,255]; by EOF (-1); or by any `signed char' value
   [-128,-1).  ISO C requires that the ctype functions work for `unsigned
   char' values and for EOF; we also support negative `signed char' values
   for broken old programs.  The case conversion arrays are of `int's
   rather than `unsigned char's because tolower (EOF) must be EOF, which
   doesn't fit into an `unsigned char'.  But today more important is that
   the arrays are also used for multi-byte character sets.  */
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
# 104 "/usr/include/ctype.h" 3 4
/* The following names are all functions:
     int isCHARACTERISTIC(int c);
   which return nonzero iff C has CHARACTERISTIC.
   For the meaning of the characteristic names, see the `enum' above.  */
extern int isalnum (int) __attribute__ ((__nothrow__ ));
extern int isalpha (int) __attribute__ ((__nothrow__ ));
extern int iscntrl (int) __attribute__ ((__nothrow__ ));
extern int isdigit (int) __attribute__ ((__nothrow__ ));
extern int islower (int) __attribute__ ((__nothrow__ ));
extern int isgraph (int) __attribute__ ((__nothrow__ ));
extern int isprint (int) __attribute__ ((__nothrow__ ));
extern int ispunct (int) __attribute__ ((__nothrow__ ));
extern int isspace (int) __attribute__ ((__nothrow__ ));
extern int isupper (int) __attribute__ ((__nothrow__ ));
extern int isxdigit (int) __attribute__ ((__nothrow__ ));


/* Return the lowercase version of C.  */
extern int tolower (int __c) __attribute__ ((__nothrow__ ));

/* Return the uppercase version of C.  */
extern int toupper (int __c) __attribute__ ((__nothrow__ ));


/* ISO C99 introduced one new function.  */

extern int isblank (int) __attribute__ ((__nothrow__ ));
# 154 "/usr/include/ctype.h" 3 4
/* This code is needed for the optimized mapping functions.  */
# 25 "/usr/include/argp.h" 2 3 4
# 1 "/usr/include/getopt.h" 1 3 4
/* Declarations for getopt.
   Copyright (C) 1989-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Unlike the bulk of the getopt implementation, this file is NOT part
   of gnulib; gnulib also has a getopt.h but it is different.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






/* The type of the 'argv' argument to getopt_long and getopt_long_only
   is properly 'char **', since both functions may write to the array
   (in order to move all the options to the beginning).  However, for
   compatibility with old versions of LSB, glibc has to use 'char *const *'
   instead.  */




# 1 "/usr/include/bits/getopt_core.h" 1 3 4
/* Declarations for getopt (basic, portable features only).
   Copyright (C) 1989-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library and is also part of gnulib.
   Patches to this file should be submitted to both projects.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* This header should not be used directly; include getopt.h or
   unistd.h instead.  Unlike most bits headers, it does not have
   a protective #error, because the guard macro for getopt.h in
   gnulib is not fixed.  */



/* For communication from 'getopt' to the caller.
   When 'getopt' finds an option that takes an argument,
   the argument value is returned here.
   Also, when 'ordering' is RETURN_IN_ORDER,
   each non-option ARGV-element is returned here.  */

extern char *optarg;

/* Index in ARGV of the next element to be scanned.
   This is used for communication to and from the caller
   and for communication between successive calls to 'getopt'.

   On entry to 'getopt', zero means this is the first call; initialize.

   When 'getopt' returns -1, this is the index of the first of the
   non-option elements that the caller should itself scan.

   Otherwise, 'optind' communicates from one call to the next
   how much of ARGV has been scanned so far.  */

extern int optind;

/* Callers store zero here to inhibit the error message 'getopt' prints
   for unrecognized options.  */

extern int opterr;

/* Set to an option character which was unrecognized.  */

extern int optopt;

/* Get definitions and prototypes for functions to process the
   arguments in ARGV (ARGC of them, minus the program name) for
   options given in OPTS.

   Return the option character from OPTS just read.  Return -1 when
   there are no more options.  For unrecognized options, or options
   missing arguments, 'optopt' is set to the option letter, and '?' is
   returned.

   The OPTS string is a list of characters which are recognized option
   letters, optionally followed by colons, specifying that that letter
   takes an argument, to be placed in 'optarg'.

   If a letter in OPTS is followed by two colons, its argument is
   optional.  This behavior is specific to the GNU 'getopt'.

   The argument '--' causes premature termination of argument
   scanning, explicitly telling 'getopt' that there are no more
   options.

   If OPTS begins with '-', then non-option arguments are treated as
   arguments to the option '\1'.  This behavior is specific to the GNU
   'getopt'.  If OPTS begins with '+', or POSIXLY_CORRECT is set in
   the environment, then do not permute arguments.

   For standards compliance, the 'argv' argument has the type
   char *const *, but this is inaccurate; if argument permutation is
   enabled, the argv array (not the strings it points to) must be
   writable.  */

extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
# 36 "/usr/include/getopt.h" 2 3 4
# 1 "/usr/include/bits/getopt_ext.h" 1 3 4
/* Declarations for getopt (GNU extensions).
   Copyright (C) 1989-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library and is also part of gnulib.
   Patches to this file should be submitted to both projects.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* This header should not be used directly; include getopt.h instead.
   Unlike most bits headers, it does not have a protective #error,
   because the guard macro for getopt.h in gnulib is not fixed.  */



/* Describe the long-named options requested by the application.
   The LONG_OPTIONS argument to getopt_long or getopt_long_only is a vector
   of 'struct option' terminated by an element containing a name which is
   zero.

   The field 'has_arg' is:
   no_argument		(or 0) if the option does not take an argument,
   required_argument	(or 1) if the option requires an argument,
   optional_argument 	(or 2) if the option takes an optional argument.

   If the field 'flag' is not NULL, it points to a variable that is set
   to the value given in the field 'val' when the option is found, but
   left unchanged if the option is not found.

   To have a long-named option do something other than set an 'int' to
   a compiled-in constant, such as set a value from 'optarg', set the
   option's 'flag' field to zero and its 'val' field to a nonzero
   value (the equivalent single-letter option character, if there is
   one).  For long options that have a zero 'flag' field, 'getopt'
   returns the contents of the 'val' field.  */

struct option
{
  const char *name;
  /* has_arg can't be an enum because some compilers complain about
     type mismatches in all the code that assumes it is an int.  */
  int has_arg;
  int *flag;
  int val;
};

/* Names for the values of the 'has_arg' field of 'struct option'.  */





extern int getopt_long (int ___argc, char *const *___argv,
   const char *__shortopts,
          const struct option *__longopts, int *__longind)
       __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern int getopt_long_only (int ___argc, char *const *___argv,
        const char *__shortopts,
               const struct option *__longopts, int *__longind)
       __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
# 37 "/usr/include/getopt.h" 2 3 4
# 26 "/usr/include/argp.h" 2 3 4
# 1 "/usr/bin/../lib/clang/21/include/limits.h" 1 3 4
/*===---- limits.h - Standard header for integer sizes --------------------===*\
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
\*===----------------------------------------------------------------------===*/
# 16 "/usr/bin/../lib/clang/21/include/limits.h" 3 4
/* The system's limits.h may, in turn, try to #include_next GCC's limits.h.
   Avert this #include_next madness. */




/* System headers include a number of constants from POSIX in <limits.h>.
   Include it if we're hosted. */

# 1 "/usr/include/limits.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.10/5.2.4.2.1 Sizes of integer types	<limits.h>
 */





# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */
# 35 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
# 45 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  Most but not all symbols enabled by that macro in TS
   18661-1 are enabled unconditionally in C23.  In C23, the symbols in
   Annex F still require a new feature test macro
   __STDC_WANT_IEC_60559_EXT__ instead (C23 does not define
   __STDC_WANT_IEC_60559_BFP_EXT__), while a few features from TS
   18661-1 are not included in C23 (and thus should depend on
   __STDC_WANT_IEC_60559_BFP_EXT__ even when C23 features are
   enabled).

   __GLIBC_USE (IEC_60559_BFP_EXT) controls those features from TS
   18661-1 not included in C23.

   __GLIBC_USE (IEC_60559_BFP_EXT_C23) controls those features from TS
   18661-1 that are also included in C23 (with no feature test macro
   required in C23).

   __GLIBC_USE (IEC_60559_EXT) controls those features from TS 18661-1
   that are included in C23 but conditional on
   __STDC_WANT_IEC_60559_EXT__.  (There are currently no features
   conditional on __STDC_WANT_IEC_60559_EXT__ that are not in TS
   18661-1.)  */
# 86 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  Other than the reduction
   functions, the symbols from this TS are enabled unconditionally in
   C23.  */
# 103 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
# 27 "/usr/include/limits.h" 2 3 4


/* Maximum length of any multibyte character in any locale.
   We define this value here since the gcc header does not define
   the correct value.  */



/* If we are not using GNU CC we have to define all the symbols ourself.
   Otherwise use gcc's definitions (see below).  */


/* We only protect from multiple inclusion here, because all the other
   #include's protect themselves, and in GCC 2 we may #include_next through
   multiple copies of this file before we get to GCC's.  */



# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 14 "/usr/include/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 46 "/usr/include/limits.h" 2 3 4

/* We don't have #include_next.
   Define ANSI <limits.h> for standard 32-bit words.  */

/* These assume 8-bit `char's, 16-bit `short int's,
   and 32-bit `int's and `long int's.  */

/* Number of bits in a `char'.	*/


/* Minimum and maximum values a `signed char' can hold.  */



/* Maximum value an `unsigned char' can hold.  (Minimum is 0.)  */


/* Minimum and maximum values a `char' can hold.  */
# 72 "/usr/include/limits.h" 3 4
/* Minimum and maximum values a `signed short int' can hold.  */



/* Maximum value an `unsigned short int' can hold.  (Minimum is 0.)  */


/* Minimum and maximum values a `signed int' can hold.  */



/* Maximum value an `unsigned int' can hold.  (Minimum is 0.)  */


/* Minimum and maximum values a `signed long int' can hold.  */







/* Maximum value an `unsigned long int' can hold.  (Minimum is 0.)  */
# 103 "/usr/include/limits.h" 3 4
/* Minimum and maximum values a `signed long long int' can hold.  */



/* Maximum value an `unsigned long long int' can hold.  (Minimum is 0.)  */
# 117 "/usr/include/limits.h" 3 4
 /* Get the compiler's limits.h, which defines almost all the ISO constants.

    We put this #include_next outside the double inclusion check because
    it should be possible to include this file more than once and still get
    the definitions from gcc's header.  */





/* The <limits.h> files in some gcc versions don't define LLONG_MIN,
   LLONG_MAX, and ULLONG_MAX.  Instead only the values gcc defined for
   ages are available.  */
# 142 "/usr/include/limits.h" 3 4
/* The integer width macros are not defined by GCC's <limits.h> before
   GCC 7, or if _GNU_SOURCE rather than
   __STDC_WANT_IEC_60559_BFP_EXT__ is used to enable this feature.  */
# 181 "/usr/include/limits.h" 3 4
/* The macros for _Bool are not defined by GCC's <limits.h> before GCC
   11, or if _GNU_SOURCE is defined rather than enabling C23 support
   with -std.  */
# 26 "/usr/bin/../lib/clang/21/include/limits.h" 2 3 4


/* Many system headers try to "help us out" by defining these.  No really, we
   know how big each datatype is. */
# 47 "/usr/bin/../lib/clang/21/include/limits.h" 3 4
/* C90/99 5.2.4.2.1 */
# 73 "/usr/bin/../lib/clang/21/include/limits.h" 3 4
/* C23 5.2.4.2.1 */
# 99 "/usr/bin/../lib/clang/21/include/limits.h" 3 4
/* C99 5.2.4.2.1: Added long long.
   C++11 18.3.3.2: same contents as the Standard C Library header <limits.h>.
 */
# 114 "/usr/bin/../lib/clang/21/include/limits.h" 3 4
/* LONG_LONG_MIN/LONG_LONG_MAX/ULONG_LONG_MAX are a GNU extension. Android's
   bionic also defines them. It's too bad that we don't have something like
   #pragma poison that could be used to deprecate a macro - the code should just
   use LLONG_MAX and friends.
 */
# 27 "/usr/include/argp.h" 2 3 4
# 1 "/usr/include/errno.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.5 Errors	<errno.h>
 */






/* The system-specific definitions of the E* constants, as macros.  */
# 1 "/usr/include/bits/errno.h" 1 3 4
/* Error constants.  Linux specific version.
   Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
# 6 "/usr/include/asm-generic/errno.h" 2 3 4





/*
 * This error code is special: arch syscall entry code will return
 * -ENOSYS if users try to call a syscall that doesn't exist.  To keep
 * failures of syscalls that really do exist distinguishable from
 * failures due to attempts to use a nonexistent syscall, syscall
 * implementations should refrain from returning -ENOSYS.
 */
# 115 "/usr/include/asm-generic/errno.h" 3 4
/* for robust mutexes */
# 2 "/usr/include/asm/errno.h" 2 3 4
# 2 "/usr/include/linux/errno.h" 2 3 4
# 27 "/usr/include/bits/errno.h" 2 3 4

/* Older Linux headers do not define these constants.  */
# 29 "/usr/include/errno.h" 2 3 4

/* When included from assembly language, this header only provides the
   E* constants.  */




/* The error code set by various library functions.  */
extern int *__errno_location (void) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
# 28 "/usr/include/argp.h" 2 3 4



/* error_t may or may not be available from errno.h, depending on the
   operating system.  */


typedef int error_t;


/* A description of a particular option.  A pointer to an array of
   these is passed in the OPTIONS field of an argp structure.  Each option
   entry can correspond to one long option and/or one short option; more
   names for the same option can be added by following an entry in an option
   array with options having the OPTION_ALIAS flag set.  */
struct argp_option
{
  /* The long option name.  For more than one name for the same option, you
     can use following options with the OPTION_ALIAS flag set.  */
  const char *name;

  /* What key is returned for this option.  If > 0 and printable, then it's
     also accepted as a short option.  */
  int key;

  /* If non-NULL, this is the name of the argument associated with this
     option, which is required unless the OPTION_ARG_OPTIONAL flag is set. */
  const char *arg;

  /* OPTION_ flags.  */
  int flags;

  /* The doc string for this option.  If both NAME and KEY are 0, This string
     will be printed outdented from the normal option column, making it
     useful as a group header (it will be the first thing printed in its
     group); in this usage, it's conventional to end the string with a `:'.  */
  const char *doc;

  /* The group this option is in.  In a long help message, options are sorted
     alphabetically within each group, and the groups presented in the order
     0, 1, 2, ..., n, -m, ..., -2, -1.  Every entry in an options array with
     if this field 0 will inherit the group number of the previous entry, or
     zero if it's the first one, unless its a group header (NAME and KEY both
     0), in which case, the previous entry + 1 is the default.  Automagic
     options such as --help are put into group -1.  */
  int group;
};

/* The argument associated with this option is optional.  */


/* This option isn't displayed in any help messages.  */


/* This option is an alias for the closest previous non-alias option.  This
   means that it will be displayed in the same help entry, and will inherit
   fields other than NAME and KEY from the aliased option.  */


/* This option isn't actually an option (and so should be ignored by the
   actual option parser), but rather an arbitrary piece of documentation that
   should be displayed in much the same manner as the options.  If this flag
   is set, then the option NAME field is displayed unmodified (e.g., no `--'
   prefix is added) at the left-margin (where a *short* option would normally
   be displayed), and the documentation string in the normal place.  For
   purposes of sorting, any leading whitespace and punctuation is ignored,
   except that if the first non-whitespace character is not `-', this entry
   is displayed after all options (and OPTION_DOC entries with a leading `-')
   in the same group.  */


/* This option shouldn't be included in `long' usage messages (but is still
   included in help messages).  This is mainly intended for options that are
   completely documented in an argp's ARGS_DOC field, in which case including
   the option in the generic usage list would be redundant.  For instance,
   if ARGS_DOC is "FOO BAR\n-x BLAH", and the `-x' option's purpose is to
   distinguish these two cases, -x should probably be marked
   OPTION_NO_USAGE.  */


struct argp; /* fwd declare this type */
struct argp_state; /* " */
struct argp_child; /* " */

/* The type of a pointer to an argp parsing function.  */
typedef error_t (*argp_parser_t) (int __key, char *__arg,
      struct argp_state *__state);

/* What to return for unrecognized keys.  For special ARGP_KEY_ keys, such
   returns will simply be ignored.  For user keys, this error will be turned
   into EINVAL (if the call to argp_parse is such that errors are propagated
   back to the user instead of exiting); returning EINVAL itself would result
   in an immediate stop to parsing in *all* cases.  */


/* Special values for the KEY argument to an argument parsing function.
   ARGP_ERR_UNKNOWN should be returned if they aren't understood.

   The sequence of keys to a parsing function is either (where each
   uppercased word should be prefixed by `ARGP_KEY_' and opt is a user key):

       INIT opt... NO_ARGS END SUCCESS  -- No non-option arguments at all
   or  INIT (opt | ARG)... END SUCCESS  -- All non-option args parsed
   or  INIT (opt | ARG)... SUCCESS      -- Some non-option arg unrecognized

   The third case is where every parser returned ARGP_KEY_UNKNOWN for an
   argument, in which case parsing stops at that argument (returning the
   unparsed arguments to the caller of argp_parse if requested, or stopping
   with an error message if not).

   If an error occurs (either detected by argp, or because the parsing
   function returned an error value), then the parser is called with
   ARGP_KEY_ERROR, and no further calls are made.  */

/* This is not an option at all, but rather a command line argument.  If a
   parser receiving this key returns success, the fact is recorded, and the
   ARGP_KEY_NO_ARGS case won't be used.  HOWEVER, if while processing the
   argument, a parser function decrements the NEXT field of the state it's
   passed, the option won't be considered processed; this is to allow you to
   actually modify the argument (perhaps into an option), and have it
   processed again.  */

/* There are remaining arguments not parsed by any parser, which may be found
   starting at (STATE->argv + STATE->next).  If success is returned, but
   STATE->next left untouched, it's assumed that all arguments were consume,
   otherwise, the parser should adjust STATE->next to reflect any arguments
   consumed.  */

/* There are no more command line arguments at all.  */

/* Because it's common to want to do some special processing if there aren't
   any non-option args, user parsers are called with this key if they didn't
   successfully process any non-option arguments.  Called just before
   ARGP_KEY_END (where more general validity checks on previously parsed
   arguments can take place).  */

/* Passed in before any parsing is done.  Afterwards, the values of each
   element of the CHILD_INPUT field, if any, in the state structure is
   copied to each child's state to be the initial value of the INPUT field.  */

/* Use after all other keys, including SUCCESS & END.  */

/* Passed in when parsing has successfully been completed (even if there are
   still arguments remaining).  */

/* Passed in if an error occurs.  */


/* An argp structure contains a set of options declarations, a function to
   deal with parsing one, documentation string, a possible vector of child
   argp's, and perhaps a function to filter help output.  When actually
   parsing options, getopt is called with the union of all the argp
   structures chained together through their CHILD pointers, with conflicts
   being resolved in favor of the first occurrence in the chain.  */
struct argp
{
  /* An array of argp_option structures, terminated by an entry with both
     NAME and KEY having a value of 0.  */
  const struct argp_option *options;

  /* What to do with an option from this structure.  KEY is the key
     associated with the option, and ARG is any associated argument (NULL if
     none was supplied).  If KEY isn't understood, ARGP_ERR_UNKNOWN should be
     returned.  If a non-zero, non-ARGP_ERR_UNKNOWN value is returned, then
     parsing is stopped immediately, and that value is returned from
     argp_parse().  For special (non-user-supplied) values of KEY, see the
     ARGP_KEY_ definitions below.  */
  argp_parser_t parser;

  /* A string describing what other arguments are wanted by this program.  It
     is only used by argp_usage to print the `Usage:' message.  If it
     contains newlines, the strings separated by them are considered
     alternative usage patterns, and printed on separate lines (lines after
     the first are prefix by `  or: ' instead of `Usage:').  */
  const char *args_doc;

  /* If non-NULL, a string containing extra text to be printed before and
     after the options in a long help message (separated by a vertical tab
     `\v' character).  */
  const char *doc;

  /* A vector of argp_children structures, terminated by a member with a 0
     argp field, pointing to child argps should be parsed with this one.  Any
     conflicts are resolved in favor of this argp, or early argps in the
     CHILDREN list.  This field is useful if you use libraries that supply
     their own argp structure, which you want to use in conjunction with your
     own.  */
  const struct argp_child *children;

  /* If non-zero, this should be a function to filter the output of help
     messages.  KEY is either a key from an option, in which case TEXT is
     that option's help text, or a special key from the ARGP_KEY_HELP_
     defines, below, describing which other help text TEXT is.  The function
     should return either TEXT, if it should be used as-is, a replacement
     string, which should be malloced, and will be freed by argp, or NULL,
     meaning `print nothing'.  The value for TEXT is *after* any translation
     has been done, so if any of the replacement text also needs translation,
     that should be done by the filter function.  INPUT is either the input
     supplied to argp_parse, or NULL, if argp_help was called directly.  */
  char *(*help_filter) (int __key, const char *__text, void *__input);

  /* If non-zero the strings used in the argp library are translated using
     the domain described by this string.  Otherwise the currently installed
     default domain is used.  */
  const char *argp_domain;
};

/* Possible KEY arguments to a help filter function.  */





/* Explanatory note emitted when duplicate option arguments have been
   suppressed.  */



/* When an argp has a non-zero CHILDREN field, it should point to a vector of
   argp_child structures, each of which describes a subsidiary argp.  */
struct argp_child
{
  /* The child parser.  */
  const struct argp *argp;

  /* Flags for this child.  */
  int flags;

  /* If non-zero, an optional header to be printed in help output before the
     child options.  As a side-effect, a non-zero value forces the child
     options to be grouped together; to achieve this effect without actually
     printing a header string, use a value of "".  */
  const char *header;

  /* Where to group the child options relative to the other (`consolidated')
     options in the parent argp; the values are the same as the GROUP field
     in argp_option structs, but all child-groupings follow parent options at
     a particular group level.  If both this field and HEADER are zero, then
     they aren't grouped at all, but rather merged with the parent options
     (merging the child's grouping levels with the parents).  */
  int group;
};

/* Parsing state.  This is provided to parsing functions called by argp,
   which may examine and, as noted, modify fields.  */
struct argp_state
{
  /* The top level ARGP being parsed.  */
  const struct argp *root_argp;

  /* The argument vector being parsed.  May be modified.  */
  int argc;
  char **argv;

  /* The index in ARGV of the next arg that to be parsed.  May be modified. */
  int next;

  /* The flags supplied to argp_parse.  May be modified.  */
  unsigned flags;

  /* While calling a parsing function with a key of ARGP_KEY_ARG, this is the
     number of the current arg, starting at zero, and incremented after each
     such call returns.  At all other times, this is the number of such
     arguments that have been processed.  */
  unsigned arg_num;

  /* If non-zero, the index in ARGV of the first argument following a special
     `--' argument (which prevents anything following being interpreted as an
     option).  Only set once argument parsing has proceeded past this point. */
  int quoted;

  /* An arbitrary pointer passed in from the user.  */
  void *input;
  /* Values to pass to child parsers.  This vector will be the same length as
     the number of children for the current parser.  */
  void **child_inputs;

  /* For the parser's use.  Initialized to 0.  */
  void *hook;

  /* The name used when printing messages.  This is initialized to ARGV[0],
     or PROGRAM_INVOCATION_NAME if that is unavailable.  */
  char *name;

  /* Streams used when argp prints something.  */
  FILE *err_stream; /* For errors; initialized to stderr. */
  FILE *out_stream; /* For information; initialized to stdout. */

  void *pstate; /* Private, for use by argp.  */
};

/* Flags for argp_parse (note that the defaults are those that are
   convenient for program command line parsing): */

/* Don't ignore the first element of ARGV.  Normally (and always unless
   ARGP_NO_ERRS is set) the first element of the argument vector is
   skipped for option parsing purposes, as it corresponds to the program name
   in a command line.  */


/* Don't print error messages for unknown options to stderr; unless this flag
   is set, ARGP_PARSE_ARGV0 is ignored, as ARGV[0] is used as the program
   name in the error messages.  This flag implies ARGP_NO_EXIT (on the
   assumption that silent exiting upon errors is bad behaviour).  */


/* Don't parse any non-option args.  Normally non-option args are parsed by
   calling the parse functions with a key of ARGP_KEY_ARG, and the actual arg
   as the value.  Since it's impossible to know which parse function wants to
   handle it, each one is called in turn, until one returns 0 or an error
   other than ARGP_ERR_UNKNOWN; if an argument is handled by no one, the
   argp_parse returns prematurely (but with a return value of 0).  If all
   args have been parsed without error, all parsing functions are called one
   last time with a key of ARGP_KEY_END.  This flag needn't normally be set,
   as the normal behavior is to stop parsing as soon as some argument can't
   be handled.  */


/* Parse options and arguments in the same order they occur on the command
   line -- normally they're rearranged so that all options come first. */


/* Don't provide the standard long option --help, which causes usage and
      option help information to be output to stdout, and exit (0) called. */


/* Don't exit on errors (they may still result in error messages).  */


/* Use the gnu getopt `long-only' rules for parsing arguments.  */


/* Turns off any message-printing/exiting options.  */


/* Parse the options strings in ARGC & ARGV according to the options in ARGP.
   FLAGS is one of the ARGP_ flags above.  If ARG_INDEX is non-NULL, the
   index in ARGV of the first unparsed option is returned in it.  If an
   unknown option is present, ARGP_ERR_UNKNOWN is returned; if some parser
   routine returned a non-zero value, it is returned; otherwise 0 is
   returned.  This function may also call exit unless the ARGP_NO_HELP flag
   is set.  INPUT is a pointer to a value to be passed in to the parser.  */
extern error_t argp_parse (const struct argp *__restrict __argp,
      int __argc, char **__restrict __argv,
      unsigned __flags, int *__restrict __arg_index,
      void *__restrict __input);
extern error_t __argp_parse (const struct argp *__restrict __argp,
        int __argc, char **__restrict __argv,
        unsigned __flags, int *__restrict __arg_index,
        void *__restrict __input);

/* Global variables.  */

/* If defined or set by the user program to a non-zero value, then a default
   option --version is added (unless the ARGP_NO_HELP flag is used), which
   will print this string followed by a newline and exit (unless the
   ARGP_NO_EXIT flag is used).  Overridden by ARGP_PROGRAM_VERSION_HOOK.  */
extern const char *argp_program_version;

/* If defined or set by the user program to a non-zero value, then a default
   option --version is added (unless the ARGP_NO_HELP flag is used), which
   calls this function with a stream to print the version to and a pointer to
   the current parsing state, and then exits (unless the ARGP_NO_EXIT flag is
   used).  This variable takes precedent over ARGP_PROGRAM_VERSION.  */
extern void (*argp_program_version_hook) (FILE *__restrict __stream,
       struct argp_state *__restrict
       __state);

/* If defined or set by the user program, it should point to string that is
   the bug-reporting address for the program.  It will be printed by
   argp_help if the ARGP_HELP_BUG_ADDR flag is set (as it is by various
   standard help messages), embedded in a sentence that says something like
   `Report bugs to ADDR.'.  */
extern const char *argp_program_bug_address;

/* The exit status that argp will use when exiting due to a parsing error.
   If not defined or set by the user program, this defaults to EX_USAGE from
   <sysexits.h>.  */
extern error_t argp_err_exit_status;

/* Flags for argp_help.  */
# 420 "/usr/include/argp.h" 3 4
/* These ARGP_HELP flags are only understood by argp_state_help.  */



/* The standard thing to do after a program command line parsing error, if an
   error message has already been printed.  */


/* The standard thing to do after a program command line parsing error, if no
   more specific error message has been printed.  */


/* The standard thing to do in response to a --help option.  */




/* Output a usage message for ARGP to STREAM.  FLAGS are from the set
   ARGP_HELP_*.  */
extern void argp_help (const struct argp *__restrict __argp,
         FILE *__restrict __stream,
         unsigned __flags, char *__restrict __name);
extern void __argp_help (const struct argp *__restrict __argp,
    FILE *__restrict __stream, unsigned __flags,
    char *__name);

/* The following routines are intended to be called from within an argp
   parsing routine (thus taking an argp_state structure as the first
   argument).  They may or may not print an error message and exit, depending
   on the flags in STATE -- in any case, the caller should be prepared for
   them *not* to exit, and should return an appropriate error after calling
   them.  [argp_usage & argp_error should probably be called argp_state_...,
   but they're used often enough that they should be short]  */

/* Output, if appropriate, a usage message for STATE to STREAM.  FLAGS are
   from the set ARGP_HELP_*.  */
extern void argp_state_help (const struct argp_state *__restrict __state,
        FILE *__restrict __stream,
        unsigned int __flags);
extern void __argp_state_help (const struct argp_state *__restrict __state,
          FILE *__restrict __stream,
          unsigned int __flags);

/* Possibly output the standard usage message for ARGP to stderr and exit.  */
extern void argp_usage (const struct argp_state *__state);
extern void __argp_usage (const struct argp_state *__state);

/* If appropriate, print the printf string FMT and following args, preceded
   by the program name and `:', to stderr, and followed by a `Try ... --help'
   message, then exit (1).  */
extern void argp_error (const struct argp_state *__restrict __state,
   const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
extern void __argp_error (const struct argp_state *__restrict __state,
     const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));

/* Similar to the standard gnu error-reporting function error(), but will
   respect the ARGP_NO_EXIT and ARGP_NO_ERRS flags in STATE, and will print
   to STATE->err_stream.  This is useful for argument parsing code that is
   shared between program startup (when exiting is desired) and runtime
   option parsing (when typically an error code is returned instead).  The
   difference between this function and argp_error is that the latter is for
   *parsing errors*, and the former is for other problems that occur during
   parsing but don't reflect a (syntactic) problem with the input.  */
extern void argp_failure (const struct argp_state *__restrict __state,
     int __status, int __errnum,
     const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 4, 5)));
extern void __argp_failure (const struct argp_state *__restrict __state,
       int __status, int __errnum,
       const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 4, 5)));

/* Returns true if the option OPT is a valid short option.  */
extern int _option_is_short (const struct argp_option *__opt) __attribute__ ((__nothrow__ ));
extern int __option_is_short (const struct argp_option *__opt) __attribute__ ((__nothrow__ ));

/* Returns true if the option OPT is in fact the last (unused) entry in an
   options array.  */
extern int _option_is_end (const struct argp_option *__opt) __attribute__ ((__nothrow__ ));
extern int __option_is_end (const struct argp_option *__opt) __attribute__ ((__nothrow__ ));

/* Return the input field for ARGP in the parser corresponding to STATE; used
   by the help routines.  */
extern void *_argp_input (const struct argp *__restrict __argp,
     const struct argp_state *__restrict __state)
     __attribute__ ((__nothrow__ ));
extern void *__argp_input (const struct argp *__restrict __argp,
      const struct argp_state *__restrict __state)
     __attribute__ ((__nothrow__ ));
# 7 "all.c" 2
# 1 "/usr/include/argz.h" 1 3 4
/* Routines for dealing with '\0' separated arg vectors.
   Copyright (C) 1995-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






# 1 "/usr/include/string.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.21 String handling	<string.h>
 */





# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */
# 35 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
# 45 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  Most but not all symbols enabled by that macro in TS
   18661-1 are enabled unconditionally in C23.  In C23, the symbols in
   Annex F still require a new feature test macro
   __STDC_WANT_IEC_60559_EXT__ instead (C23 does not define
   __STDC_WANT_IEC_60559_BFP_EXT__), while a few features from TS
   18661-1 are not included in C23 (and thus should depend on
   __STDC_WANT_IEC_60559_BFP_EXT__ even when C23 features are
   enabled).

   __GLIBC_USE (IEC_60559_BFP_EXT) controls those features from TS
   18661-1 not included in C23.

   __GLIBC_USE (IEC_60559_BFP_EXT_C23) controls those features from TS
   18661-1 that are also included in C23 (with no feature test macro
   required in C23).

   __GLIBC_USE (IEC_60559_EXT) controls those features from TS 18661-1
   that are included in C23 but conditional on
   __STDC_WANT_IEC_60559_EXT__.  (There are currently no features
   conditional on __STDC_WANT_IEC_60559_EXT__ that are not in TS
   18661-1.)  */
# 86 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  Other than the reduction
   functions, the symbols from this TS are enabled unconditionally in
   C23.  */
# 103 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
# 27 "/usr/include/string.h" 2 3 4



/* Get size_t and NULL from <stddef.h>.  */


# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 93 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_size_t.h" 1 3 4
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 94 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 108 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_null.h" 1 3 4
/*===---- __stddef_null.h - Definition of NULL -----------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */



/* linux/stddef.h will define NULL to 0. glibc (and other) headers then define
 * __need_NULL and rely on stddef.h to redefine NULL to the correct value again.
 * Modules don't support redefining macros like that, but support that pattern
 * in the non-modules case.
 */
# 109 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 34 "/usr/include/string.h" 2 3 4

/* Tell the caller that we provide correct C++ prototypes.  */






/* Copy N bytes of SRC to DEST.  */
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
/* Copy N bytes of SRC to DEST, guaranteeing
   correct behavior for overlapping strings.  */
extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

/* Copy no more than N bytes of SRC to DEST, stopping when C is found.
   Return the position in DEST one byte past where C was copied,
   or NULL if C was not found in the first N bytes of SRC.  */







/* Set N bytes of S to C.  */
extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

/* Compare N bytes of S1 and S2.  */
extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

/* Compare N bytes of S1 and S2.  Return zero if S1 and S2 are equal.
   Return some non-zero value otherwise.

   Essentially __memcmpeq has the exact same semantics as memcmp
   except the return value is less constrained.  memcmp is always a
   correct implementation of __memcmpeq.  As well !!memcmp, -memcmp,
   or bcmp are correct implementations.

   __memcmpeq is meant to be used by compilers when memcmp return is
   only used for its boolean value.

   __memcmpeq is declared only for use by compilers.  Programs should
   continue to use memcmp.  */
extern int __memcmpeq (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

/* Search N bytes of S for C.  */
# 107 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 140 "/usr/include/string.h" 3 4
/* Copy SRC to DEST.  */
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
/* Copy no more than N characters of SRC to DEST.  */
extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

/* Append SRC onto DEST.  */
extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
/* Append no more than N characters from SRC onto DEST.  */
extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

/* Compare S1 and S2.  */
extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
/* Compare N characters of S1 and S2.  */
extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

/* Compare the collated forms of S1 and S2.  */
extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
/* Put a transformation of SRC into no more than N bytes of DEST.  */
extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;
# 191 "/usr/include/string.h" 3 4
/* Return a malloc'd copy of at most N bytes of STRING.  The
   resultant string is terminated even if no null terminator
   appears before STRING[N].  */
# 222 "/usr/include/string.h" 3 4
/* Find the first occurrence of C in S.  */
# 246 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));

/* Find the last occurrence of C in S.  */
# 273 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 291 "/usr/include/string.h" 3 4
/* Return the length of the initial segment of S which
   consists entirely of characters not in REJECT.  */
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
/* Return the length of the initial segment of S which
   consists entirely of characters in ACCEPT.  */
extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
/* Find the first occurrence in S of any character in ACCEPT.  */
# 323 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

/* Find the first occurrence of NEEDLE in HAYSTACK.  */
# 350 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



/* Divide S into tokens separated by characters in DELIM.  */
extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));

/* Divide S into tokens separated by characters in DELIM.  Information
   passed between calls are stored in SAVE_PTR.  */
extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
# 406 "/usr/include/string.h" 3 4
/* Return the length of S.  */
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 418 "/usr/include/string.h" 3 4
/* Return a string describing the meaning of the `errno' code in ERRNUM.  */
extern char *strerror (int __errnum) __attribute__ ((__nothrow__ ));
# 25 "/usr/include/argz.h" 2 3 4



/* error_t may or may not be available from errno.h, depending on the
   operating system.  */





/* Make a '\0' separated arg vector from a unix argv vector, returning it in
   ARGZ, and the total length in LEN.  If a memory allocation error occurs,
   ENOMEM is returned, otherwise 0.  The result can be destroyed using free. */
extern error_t __argz_create (char *const __argv[], char **__restrict __argz,
         size_t *__restrict __len) __attribute__ ((__nothrow__ ));
extern error_t argz_create (char *const __argv[], char **__restrict __argz,
       size_t *__restrict __len) __attribute__ ((__nothrow__ ));

/* Make a '\0' separated arg vector from a SEP separated list in
   STRING, returning it in ARGZ, and the total length in LEN.  If a
   memory allocation error occurs, ENOMEM is returned, otherwise 0.
   The result can be destroyed using free.  */
extern error_t argz_create_sep (const char *__restrict __string,
    int __sep, char **__restrict __argz,
    size_t *__restrict __len) __attribute__ ((__nothrow__ ));

/* Returns the number of strings in ARGZ.  */
extern size_t __argz_count (const char *__argz, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));
extern size_t argz_count (const char *__argz, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));

/* Puts pointers to each string in ARGZ into ARGV, which must be large enough
   to hold them all.  */
extern void __argz_extract (const char *__restrict __argz, size_t __len,
       char **__restrict __argv) __attribute__ ((__nothrow__ ));
extern void argz_extract (const char *__restrict __argz, size_t __len,
     char **__restrict __argv) __attribute__ ((__nothrow__ ));

/* Make '\0' separated arg vector ARGZ printable by converting all the '\0's
   except the last into the character SEP.  */
extern void __argz_stringify (char *__argz, size_t __len, int __sep) __attribute__ ((__nothrow__ ));
extern void argz_stringify (char *__argz, size_t __len, int __sep) __attribute__ ((__nothrow__ ));

/* Append BUF, of length BUF_LEN to the argz vector in ARGZ & ARGZ_LEN.  */
extern error_t argz_append (char **__restrict __argz,
       size_t *__restrict __argz_len,
       const char *__restrict __buf, size_t __buf_len)
     __attribute__ ((__nothrow__ ));

/* Append STR to the argz vector in ARGZ & ARGZ_LEN.  */
extern error_t argz_add (char **__restrict __argz,
    size_t *__restrict __argz_len,
    const char *__restrict __str) __attribute__ ((__nothrow__ ));

/* Append SEP separated list in STRING to the argz vector in ARGZ &
   ARGZ_LEN.  */
extern error_t argz_add_sep (char **__restrict __argz,
        size_t *__restrict __argz_len,
        const char *__restrict __string, int __delim)
     __attribute__ ((__nothrow__ ));

/* Delete ENTRY from ARGZ & ARGZ_LEN, if it appears there.  */
extern void argz_delete (char **__restrict __argz,
    size_t *__restrict __argz_len,
    char *__restrict __entry) __attribute__ ((__nothrow__ ));

/* Insert ENTRY into ARGZ & ARGZ_LEN before BEFORE, which should be an
   existing entry in ARGZ; if BEFORE is NULL, ENTRY is appended to the end.
   Since ARGZ's first entry is the same as ARGZ, argz_insert (ARGZ, ARGZ_LEN,
   ARGZ, ENTRY) will insert ENTRY at the beginning of ARGZ.  If BEFORE is not
   in ARGZ, EINVAL is returned, else if memory can't be allocated for the new
   ARGZ, ENOMEM is returned, else 0.  */
extern error_t argz_insert (char **__restrict __argz,
       size_t *__restrict __argz_len,
       char *__restrict __before,
       const char *__restrict __entry) __attribute__ ((__nothrow__ ));

/* Replace any occurrences of the string STR in ARGZ with WITH, reallocating
   ARGZ as necessary.  If REPLACE_COUNT is non-zero, *REPLACE_COUNT will be
   incremented by number of replacements performed.  */
extern error_t argz_replace (char **__restrict __argz,
        size_t *__restrict __argz_len,
        const char *__restrict __str,
        const char *__restrict __with,
        unsigned int *__restrict __replace_count);

/* Returns the next entry in ARGZ & ARGZ_LEN after ENTRY, or NULL if there
   are no more.  If entry is NULL, then the first entry is returned.  This
   behavior allows two convenient iteration styles:

    char *entry = 0;
    while ((entry = argz_next (argz, argz_len, entry)))
      ...;

   or

    char *entry;
    for (entry = argz; entry; entry = argz_next (argz, argz_len, entry))
      ...;
*/
extern char *__argz_next (const char *__restrict __argz, size_t __argz_len,
     const char *__restrict __entry) __attribute__ ((__nothrow__ ));
extern char *argz_next (const char *__restrict __argz, size_t __argz_len,
   const char *__restrict __entry) __attribute__ ((__nothrow__ ));
# 8 "all.c" 2
# 1 "/usr/include/assert.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.2 Diagnostics	<assert.h>
 */
# 43 "/usr/include/assert.h" 3 4
/* void assert (int expression);

   If NDEBUG is defined, do nothing.
   If not, and EXPRESSION is zero, print an error message and abort.  */
# 66 "/usr/include/assert.h" 3 4
/* This prints an "Assertion failed" message and aborts.  */
extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__)) __attribute__ ((__cold__));

/* Likewise, but prints the error text for ERRNUM.  */
extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__)) __attribute__ ((__cold__));


/* The following is not at all used here but needed for standard
   compliance.  */
extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__)) __attribute__ ((__cold__));




/* When possible, define assert so that it does not add extra
   parentheses around EXPR.  Otherwise, those added parentheses would
   suppress warnings we'd expect to be detected by gcc's -Wparentheses.  */
# 131 "/usr/include/assert.h" 3 4
/* Version 2.4 and later of GCC define a magical variable `__PRETTY_FUNCTION__'
   which contains the name of the function currently being defined.
   This is broken in G++ before version 2.6.
   C9x has a similar variable called __func__, but prefer the GCC one since
   it demangles C++ function names.  */
# 9 "all.c" 2
# 1 "/usr/include/byteswap.h" 1 3 4
/* Swap byte order for 16, 32 and 64 bit values
   Copyright (C) 1997-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






/* Get the machine specific, optimized definitions.  */
# 1 "/usr/include/bits/byteswap.h" 1 3 4
/* Macros and inline functions to swap the order of bytes in integer values.
   Copyright (C) 1997-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 29 "/usr/include/bits/byteswap.h" 3 4
/* Swap bytes in 16-bit value.  */



static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{



  return ((__uint16_t) ((((__bsx) >> 8) & 0xff) | (((__bsx) & 0xff) << 8)));

}

/* Swap bytes in 32-bit value.  */




static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{



  return ((((__bsx) & 0xff000000u) >> 24) | (((__bsx) & 0x00ff0000u) >> 8) | (((__bsx) & 0x0000ff00u) << 8) | (((__bsx) & 0x000000ffu) << 24));

}

/* Swap bytes in 64-bit value.  */
# 69 "/usr/include/bits/byteswap.h" 3 4
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{



  return ((((__bsx) & 0xff00000000000000ull) >> 56) | (((__bsx) & 0x00ff000000000000ull) >> 40) | (((__bsx) & 0x0000ff0000000000ull) >> 24) | (((__bsx) & 0x000000ff00000000ull) >> 8) | (((__bsx) & 0x00000000ff000000ull) << 8) | (((__bsx) & 0x0000000000ff0000ull) << 24) | (((__bsx) & 0x000000000000ff00ull) << 40) | (((__bsx) & 0x00000000000000ffull) << 56));

}
# 26 "/usr/include/byteswap.h" 2 3 4


/* The following definitions must all be macros, otherwise some
   of the possible optimizations are not possible.  */

/* Return a value with both bytes in the 16 bit argument swapped.  */


/* Return a value with all bytes in the 32 bit argument swapped.  */


/* Return a value with all bytes in the 64 bit argument swapped.  */
# 10 "all.c" 2
//#include <complex.h>
# 1 "/usr/include/cpio.h" 1 3 4
/* Extended cpio format from POSIX.1.
   This file is part of the GNU C Library.
   Copyright (C) 1992-2025 Free Software Foundation, Inc.
   NOTE: The canonical source of this file is maintained with the GNU cpio.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* A cpio archive consists of a sequence of files.
   Each file has a 76 byte header,
   a variable length, NUL terminated filename,
   and variable length file data.
   A header for a filename "TRAILER!!!" indicates the end of the archive.  */

/* All the fields in the header are ISO 646 (approximately ASCII) strings
   of octal numbers, left padded, not NUL terminated.

   Field Name	Length in Bytes	Notes
   c_magic	6		must be "070707"
   c_dev	6
   c_ino	6
   c_mode	6		see below for value
   c_uid	6
   c_gid	6
   c_nlink	6
   c_rdev	6		only valid for chr and blk special files
   c_mtime	11
   c_namesize	6		count includes terminating NUL in pathname
   c_filesize	11		must be 0 for FIFOs and directories  */

/* Value for the field `c_magic'.  */


/* Values for c_mode, OR'd together: */
# 12 "all.c" 2
# 1 "/usr/include/crypt.h" 1 3 4
/* High-level libcrypt interfaces.

   Copyright (C) 1991-2017 Free Software Foundation, Inc.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public License
   as published by the Free Software Foundation; either version 2.1 of
   the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/crypt.h" 3 4
/* The strings returned by crypt, crypt_r, crypt_rn, and crypt_ra will
   be no longer than this, counting the terminating NUL.  (Existing
   algorithms all produce much shorter strings, but we have reserved
   generous space for future expansion.)  This is NOT the appropriate
   size to use in allocating the buffer supplied to crypt_rn; use
   sizeof (struct crypt_data) instead.  */


/* Passphrases longer than this (counting the terminating NUL) are not
   supported.  Note that some hash algorithms have lower limits.  */


/* The strings returned by crypt_gensalt, crypt_gensalt_rn, and
   crypt_gensalt_ra will be no longer than this.  This IS the
   appropriate size to use when allocating the buffer supplied to
   crypt_gensalt_rn.  (Again, existing algorithms all produce
   much shorter strings, but we have reserved generous space for
   future expansion.)  */


/* One-way hash the passphrase PHRASE as specified by SETTING, and
   return a string suitable for storage in a Unix-style "passwd" file.

   If SETTING is a previously hashed passphrase, the string returned
   will be equal to SETTING if and only if PHRASE is the same as the
   passphrase that was previously hashed.  See the documentation for
   other ways to use this function.

   The string returned by this function is stored in a statically-
   allocated buffer, and will be overwritten if the function is called
   again.  It is not safe to call this function from multiple threads
   concurrently.

   If an error occurs (such as SETTING being nonsense or unsupported)
   the string returned will begin with '*', and will not be equal to
   SETTING nor to any valid hashed passphrase.  Otherwise, the string
   will not begin with '*'.  */
extern char *crypt (const char *__phrase, const char *__setting)
__attribute__ ((__nothrow__ ));

/* These sizes are chosen to make sizeof (struct crypt_data) add up to
   exactly 32768 bytes.  */



/* Memory area used by crypt_r.  */
struct crypt_data
{
  /* crypt_r writes the hashed password to this field of its 'data'
     argument.  crypt_rn and crypt_ra do the same, treating the
     untyped data area they are supplied with as this struct.  */
  char output[384];

  /* Applications are encouraged, but not required, to use this field
     to store the "setting" string that must be passed to crypt_*.
     Future extensions to the API may make this more ergonomic.

     A valid "setting" is either previously hashed password or the
     string produced by one of the crypt_gensalt functions; see the
     crypt_gensalt documentation for further details.  */
  char setting[384];

  /* Applications are encouraged, but not required, to use this field
     to store the unhashed passphrase they will pass to crypt_*.
     Future extensions to the API may make this more ergonomic.  */
  char input[512];

  /* Reserved for future application-visible fields.  For maximum
     forward compatibility, applications should set this field to all
     bytes zero before calling crypt_r, crypt_rn, or crypt_ra for the
     first time with a just-allocated 'struct crypt_data'.  Future
     extensions to the API may make this more ergonomic.  */
  char reserved[767];

  /* This field should be set to 0 before calling crypt_r, crypt_rn,
     or crypt_ra for the first time with a just-allocated
     'struct crypt_data'.  This is not required if crypt_ra is allowed
     to do the allocation itself (i.e. if the *DATA argument is a null
     pointer).  Future extensions to the API may make this more ergonomic.  */
  char initialized;

  /* Scratch space used internally.  Applications should not read or
     write this field.  All data written to this area is erased before
     returning from the library.  */
  char internal[30720];
};

/* Thread-safe version of crypt.  Instead of writing to a static
   storage area, the string returned by this function will be within
   DATA->output.  Otherwise, behaves exactly the same as crypt.  */
extern char *crypt_r (const char *__phrase, const char *__setting,
                      struct crypt_data *__restrict __data)
__attribute__ ((__nothrow__ ));

/* Another thread-safe version of crypt.  Instead of writing to a
   static storage area, the string returned by this function will be
   somewhere within the space provided at DATA, which is of length SIZE
   bytes.  SIZE must be at least sizeof (struct crypt_data).

   Also, if an error occurs, this function returns a null pointer,
   not a special string.  (However, the string returned on success
   still will never begin with '*'.)  */
extern char *crypt_rn (const char *__phrase, const char *__setting,
                       void *__data, int __size)
__attribute__ ((__nothrow__ ));

/* Yet a third thread-safe version of crypt; this one works like
   getline(3).  *DATA must be either 0 or a pointer to memory
   allocated by malloc, and *SIZE must be the size of the allocation.
   This space will be allocated or reallocated as necessary and the
   values updated.  The string returned by this function will be
   somewhere within the space at *DATA.  It is safe to deallocate
   this space with free when it is no longer needed.

   Like crypt_rn, this function returns a null pointer on failure, not
   a special string.  */
extern char *crypt_ra (const char *__phrase, const char *__setting,
                       void **__data, int *__size)
__attribute__ ((__nothrow__ ));


/* Generate a string suitable for use as the setting when hashing a
   new passphrase.  PREFIX controls which hash function will be used,
   COUNT controls the computational cost of the hash (for functions
   where this is tunable), and RBYTES should point to NRBYTES bytes of
   random data.  If PREFIX is a null pointer, the current best default
   is used; if RBYTES is a null pointer, random data will be retrieved
   from the operating system if possible.  (Caution: setting PREFIX to
   an *empty string* selects the use of the oldest and least secure
   hash in the library.  Don't do that.)

   The string returned is stored in a statically-allocated buffer, and
   will be overwritten if the function is called again.  It is not
   safe to call this function from multiple threads concurrently.
   However, within a single thread, it is safe to pass the string as
   the SETTING argument to crypt without copying it first; the two
   functions use separate buffers.

   If an error occurs (e.g. a prefix that does not correspond to a
   supported hash function, or an inadequate amount of random data),
   this function returns a null pointer.  */
extern char *crypt_gensalt (const char *__prefix, unsigned long __count,
                            const char *__rbytes, int __nrbytes)
__attribute__ ((__nothrow__ ));

/* Thread-safe version of crypt_gensalt; instead of a
   statically-allocated buffer, the generated setting string is
   written to OUTPUT, which is OUTPUT_SIZE bytes long.  OUTPUT_SIZE
   must be at least CRYPT_GENSALT_OUTPUT_SIZE (see above).

   If an error occurs, this function returns a null pointer and writes
   a string that does not correspond to any valid setting into OUTPUT.  */
extern char *crypt_gensalt_rn (const char *__prefix, unsigned long __count,
                               const char *__rbytes, int __nrbytes,
                               char *__output, int __output_size)
__attribute__ ((__nothrow__ ));

/* Kept for code compatibility with libxcrypt (v3.1.1 and earlier).
   We intentionally declare the function using a macro here, since
   we actually want to link compiled applications against the
   identical crypt_gensalt_rn function.  */


extern char * crypt_gensalt_r (const char *__prefix, unsigned long __count, const char *__rbytes, int __nrbytes, char *__output, int __output_size) __asm__ ("" "crypt_gensalt_rn") __attribute__ ((__nothrow__ ));
# 198 "/usr/include/crypt.h" 3 4
/* Another thread-safe version of crypt_gensalt; the generated setting
   string is in storage allocated by malloc, and should be deallocated
   with free when it is no longer needed.  */
extern char *crypt_gensalt_ra (const char *__prefix, unsigned long __count,
                               const char *__rbytes, int __nrbytes)
__attribute__ ((__nothrow__ ));

/* Checks whether the given setting is a supported method.

   The return value is 0 if there is nothing wrong with this setting.
   Otherwise, it is one of the following constants.  */
extern int crypt_checksalt (const char *__setting);

/* Constants for checking the return value of the
   crypt_checksalt function.  */






/* Convenience function to get the prefix of the preferred hash method,
   which is also used by the crypt_gensalt functions, if their given
   prefix parameter is NULL.

   The return value is string that equals the prefix of the preferred
   hash method.  Otherwise, it is NULL.  */
extern const char *crypt_preferred_method (void);

/* These macros could be checked by portable users of crypt_gensalt*
   functions to find out whether null pointers could be specified
   as PREFIX and RBYTES arguments.  */



/* These macros can be checked by portable users of libxcrypt
   to find out whether the function is implemented.  */



/* Version number split in single integers.  */



/* Version number coded into an integer.  */



/* Version number as a string constant.  */
# 13 "all.c" 2

# 1 "/usr/include/curses.h" 1 3 4
/****************************************************************************
 * Copyright 2018-2024,2025 Thomas E. Dickey                                *
 * Copyright 1998-2016,2017 Free Software Foundation, Inc.                  *
 *                                                                          *
 * Permission is hereby granted, free of charge, to any person obtaining a  *
 * copy of this software and associated documentation files (the            *
 * "Software"), to deal in the Software without restriction, including      *
 * without limitation the rights to use, copy, modify, merge, publish,      *
 * distribute, distribute with modifications, sublicense, and/or sell       *
 * copies of the Software, and to permit persons to whom the Software is    *
 * furnished to do so, subject to the following conditions:                 *
 *                                                                          *
 * The above copyright notice and this permission notice shall be included  *
 * in all copies or substantial portions of the Software.                   *
 *                                                                          *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS  *
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF               *
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.   *
 * IN NO EVENT SHALL THE ABOVE COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,   *
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR    *
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR    *
 * THE USE OR OTHER DEALINGS IN THE SOFTWARE.                               *
 *                                                                          *
 * Except as contained in this notice, the name(s) of the above copyright   *
 * holders shall not be used in advertising or otherwise to promote the     *
 * sale, use or other dealings in this Software without prior written       *
 * authorization.                                                           *
 ****************************************************************************/

/****************************************************************************
 *  Author: Zeyd M. Ben-Halim <zmbenhal@netcom.com> 1992,1995               *
 *     and: Eric S. Raymond <esr@snark.thyrsus.com>                         *
 *     and: Thomas E. Dickey                        1996-on                 *
 ****************************************************************************/

/* $Id: curses.h.in,v 1.295 2025/05/24 16:38:03 tom Exp $ */




/*
 The symbols beginning NCURSES_ or USE_ are configuration choices.
 A few of the former can be overridden by applications at compile-time.
 Most of the others correspond to configure-script options (or checks
 by the configure-script for features of the system on which it is built).

 These symbols can be overridden by applications at compile-time:
 NCURSES_NOMACROS suppresses macro definitions in favor of functions
 NCURSES_WATTR_MACROS suppresses wattr_* macro definitions
 NCURSES_WIDECHAR is an alternative for declaring wide-character functions.

 These symbols are used only when building ncurses:
 NCURSES_ATTR_T
 NCURSES_FIELD_INTERNALS
 NCURSES_INTERNALS

 These symbols are set by the configure script:
 NCURSES_ENABLE_STDBOOL_H
 NCURSES_EXPANDED
 NCURSES_EXT_COLORS
 NCURSES_EXT_FUNCS
 NCURSES_EXT_PUTWIN
 NCURSES_NO_PADDING
 NCURSES_OSPEED_COMPAT
 NCURSES_PATHSEP
 NCURSES_REENTRANT
 NCURSES_SIGWINCH
 */




/* These are defined only in curses.h, and are used for conditional compiles */




/* This is defined in more than one ncurses header, for identification */



/*
 * Identify the mouse encoding version.
 */


/*
 * Definitions to facilitate DLL's.
 */
# 1 "/usr/include/ncurses_dll.h" 1 3 4
/****************************************************************************
 * Copyright 2018-2020,2023 Thomas E. Dickey                                *
 * Copyright 2009,2014 Free Software Foundation, Inc.                       *
 *                                                                          *
 * Permission is hereby granted, free of charge, to any person obtaining a  *
 * copy of this software and associated documentation files (the            *
 * "Software"), to deal in the Software without restriction, including      *
 * without limitation the rights to use, copy, modify, merge, publish,      *
 * distribute, distribute with modifications, sublicense, and/or sell       *
 * copies of the Software, and to permit persons to whom the Software is    *
 * furnished to do so, subject to the following conditions:                 *
 *                                                                          *
 * The above copyright notice and this permission notice shall be included  *
 * in all copies or substantial portions of the Software.                   *
 *                                                                          *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS  *
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF               *
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.   *
 * IN NO EVENT SHALL THE ABOVE COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,   *
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR    *
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR    *
 * THE USE OR OTHER DEALINGS IN THE SOFTWARE.                               *
 *                                                                          *
 * Except as contained in this notice, the name(s) of the above copyright   *
 * holders shall not be used in advertising or otherwise to promote the     *
 * sale, use or other dealings in this Software without prior written       *
 * authorization.                                                           *
 ****************************************************************************/
/* $Id: ncurses_dll.h.in,v 1.18 2023/05/06 20:12:43 tom Exp $ */




/*
 * MinGW gcc (unlike MSYS2 and Cygwin) should define _WIN32 and possibly _WIN64.
 */
# 64 "/usr/include/ncurses_dll.h" 3 4
/*
 * For reentrant code, we map the various global variables into SCREEN by
 * using functions to access them.
 */
# 81 "/usr/include/ncurses_dll.h" 3 4
/*
 * These symbols hide dllimport/dllexport, for compilers which care about it.
 */
# 91 "/usr/include/curses.h" 2 3 4

/*
 * Extra headers.
 */

# 1 "/usr/bin/../lib/clang/21/include/stdint.h" 1 3 4
/*===---- stdint.h - Standard header for sized integer types --------------===*\
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
\*===----------------------------------------------------------------------===*/


// AIX system headers need stdint.h to be re-enterable while _STD_TYPES_T
// is defined until an inclusion of it without _STD_TYPES_T occurs, in which
// case the header guard macro is defined.








/* If we're hosted, fall back to the system's stdint.h, which might have
 * additional definitions.
 */


// C99 7.18.3 Limits of other integer types
//
//  Footnote 219, 220: C++ implementations should define these macros only when
//  __STDC_LIMIT_MACROS is defined before <stdint.h> is included.
//
//  Footnote 222: C++ implementations should define these macros only when
//  __STDC_CONSTANT_MACROS is defined before <stdint.h> is included.
//
// C++11 [cstdint.syn]p2:
//
//  The macros defined by <cstdint> are provided unconditionally. In particular,
//  the symbols __STDC_LIMIT_MACROS and __STDC_CONSTANT_MACROS (mentioned in
//  footnotes 219, 220, and 222 in the C standard) play no role in C++.
//
// C11 removed the problematic footnotes.
//
// Work around this inconsistency by always defining those macros in C++ mode,
// so that a C library implementation which follows the C99 standard can be
// used in C++.
# 56 "/usr/bin/../lib/clang/21/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
/* Copyright (C) 1997-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99: 7.18 Integer types <stdint.h>
 */





# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */
# 35 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
# 45 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  Most but not all symbols enabled by that macro in TS
   18661-1 are enabled unconditionally in C23.  In C23, the symbols in
   Annex F still require a new feature test macro
   __STDC_WANT_IEC_60559_EXT__ instead (C23 does not define
   __STDC_WANT_IEC_60559_BFP_EXT__), while a few features from TS
   18661-1 are not included in C23 (and thus should depend on
   __STDC_WANT_IEC_60559_BFP_EXT__ even when C23 features are
   enabled).

   __GLIBC_USE (IEC_60559_BFP_EXT) controls those features from TS
   18661-1 not included in C23.

   __GLIBC_USE (IEC_60559_BFP_EXT_C23) controls those features from TS
   18661-1 that are also included in C23 (with no feature test macro
   required in C23).

   __GLIBC_USE (IEC_60559_EXT) controls those features from TS 18661-1
   that are included in C23 but conditional on
   __STDC_WANT_IEC_60559_EXT__.  (There are currently no features
   conditional on __STDC_WANT_IEC_60559_EXT__ that are not in TS
   18661-1.)  */
# 86 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  Other than the reduction
   functions, the symbols from this TS are enabled unconditionally in
   C23.  */
# 103 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
# 27 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/bits/wchar.h" 1 3 4
/* wchar_t type related definitions.
   Copyright (C) 2000-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* The fallback definitions, for when __WCHAR_MAX__ or __WCHAR_MIN__
   are not defined, give the right value and type as long as both int
   and wchar_t are 32-bit types.  Adding L'\0' to a constant value
   ensures that the type is correct; it is necessary to use (L'\0' +
   0) rather than just L'\0' so that the type in C++ is the promoted
   version of wchar_t rather than the distinct wchar_t type itself.
   Because wchar_t in preprocessor #if expressions is treated as
   intmax_t or uintmax_t, the expression (L'\0' - 1) would have the
   wrong value for WCHAR_MAX in such expressions and so cannot be used
   to define __WCHAR_MAX in the unsigned case.  */
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 14 "/usr/include/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 30 "/usr/include/stdint.h" 2 3 4

/* Exact integral types.  */

/* Signed.  */


/* Unsigned.  */
# 1 "/usr/include/bits/stdint-uintn.h" 1 3 4
/* Define uintN_t types.
   Copyright (C) 2017-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4


/* Small types.  */
# 1 "/usr/include/bits/stdint-least.h" 1 3 4
/* Define int_leastN_t and uint_leastN types.
   Copyright (C) 2024-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






/* Signed.  */
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;

/* Unsigned.  */
typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
# 42 "/usr/include/stdint.h" 2 3 4


/* Fast types.  */

/* Signed.  */
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;







/* Unsigned.  */
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 73 "/usr/include/stdint.h" 3 4
/* Types for `void *' pointers.  */


typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 89 "/usr/include/stdint.h" 3 4
/* Largest integral types.  */
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 102 "/usr/include/stdint.h" 3 4
/* Limits of integral types.  */

/* Minimum of signed integral types.  */




/* Maximum of signed integral types.  */





/* Maximum of unsigned integral types.  */






/* Minimum of signed integral types having a minimum size.  */




/* Maximum of signed integral types having a minimum size.  */





/* Maximum of unsigned integral types having a minimum size.  */






/* Minimum of fast signed integral types having a minimum size.  */
# 150 "/usr/include/stdint.h" 3 4
/* Maximum of fast signed integral types having a minimum size.  */
# 161 "/usr/include/stdint.h" 3 4
/* Maximum of fast unsigned integral types having a minimum size.  */
# 173 "/usr/include/stdint.h" 3 4
/* Values to test for integral types holding `void *' pointer.  */
# 185 "/usr/include/stdint.h" 3 4
/* Minimum for largest signed integral type.  */

/* Maximum for largest signed integral type.  */


/* Maximum for largest unsigned integral type.  */



/* Limits of other integer types.  */

/* Limits of `ptrdiff_t' type.  */
# 210 "/usr/include/stdint.h" 3 4
/* Limits of `sig_atomic_t'.  */



/* Limit of `size_t' type.  */
# 225 "/usr/include/stdint.h" 3 4
/* Limits of `wchar_t'.  */

/* These constants might also be defined in <wchar.h>.  */




/* Limits of `wint_t'.  */



/* Signed.  */
# 246 "/usr/include/stdint.h" 3 4
/* Unsigned.  */
# 256 "/usr/include/stdint.h" 3 4
/* Maximal type.  */
# 57 "/usr/bin/../lib/clang/21/include/stdint.h" 2 3 4
# 97 "/usr/include/curses.h" 2 3 4
# 108 "/usr/include/curses.h" 3 4
/*
 * User-definable tweak to disable the include of <stdbool.h>.
 */




/*
 * NCURSES_ATTR_T is used to quiet compiler warnings when building ncurses
 * configured using --disable-macros.
 */




/*
 * Expands to 'const' if ncurses is configured using --enable-const.  Note that
 * doing so makes it incompatible with other implementations of X/Open Curses.
 */






/*
 * The standard type used for color values, and for color-pairs.  The latter
 * allows the curses library to enumerate the combinations of foreground and
 * background colors used by an application, and is normally the product of the
 * total foreground and background colors.
 *
 * X/Open uses "short" for both of these types, ultimately because they are
 * numbers from the SVr4 terminal database, which uses 16-bit signed values.
 */






/*
 * Definitions used to make WINDOW and similar structs opaque.
 */







/*
 * Definition used to optionally suppress wattr* macros to help with the
 * transition from ncurses5 to ncurses6 by allowing the header files to
 * be shared across development packages for ncursesw in both ABIs.
 */




/*
 * The reentrant code relies on the opaque setting, but adds features.
 */




/*
 * KEY_RESIZE is an extended feature that relies upon the SIGWINCH handler
 * in ncurses.
 */
# 187 "/usr/include/curses.h" 3 4
/*
 * In certain environments, we must work around linker problems for data
 */





/*
 * Control whether bindings for interop support are added.
 */



/*
 * The internal type used for window dimensions.
 */



/*
 * Control whether tparm() supports varargs or fixed-parameter list.
 */



/*
 * Control type used for tparm's arguments.  While X/Open equates long and
 * char* values, this is not always workable for 64-bit platforms.
 */



/*
 * Control whether ncurses uses wcwidth() for checking width of line-drawing
 * characters.
 */



/*
 * NCURSES_CH_T is used in building the library, but not used otherwise in
 * this header file, since that would make the normal/wide-character versions
 * of the header incompatible.
 */




typedef unsigned chtype;
typedef unsigned mmask_t;





/*
 * We need FILE, etc.  Include this before checking any feature symbols.
 */


/*
 * With XPG4, you must define _XOPEN_SOURCE_EXTENDED, it is redundant (or
 * conflicting) when _XOPEN_SOURCE is 500 or greater.  If NCURSES_WIDECHAR is
 * not already defined, e.g., if the platform relies upon nonstandard feature
 * test macros, define it at this point if the standard feature test macros
 * indicate that it should be defined.
 */
# 263 "/usr/include/curses.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/stdarg.h" 1 3 4
/*===---- stdarg.h - Variable argument handling ----------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stdarg.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 39 "/usr/bin/../lib/clang/21/include/stdarg.h" 3 4
/* GCC always defines __va_copy, but does not define va_copy unless in c99 mode
 * or -ansi is not specified, since it was not part of C90.
 */





# 1 "/usr/bin/../lib/clang/21/include/__stdarg_header_macro.h" 1 3 4
/*===---- __stdarg_header_macro.h ------------------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */
# 48 "/usr/bin/../lib/clang/21/include/stdarg.h" 2 3 4








# 1 "/usr/bin/../lib/clang/21/include/__stdarg_va_list.h" 1 3 4
/*===---- __stdarg_va_list.h - Definition of va_list -----------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */



typedef __builtin_va_list va_list;
# 57 "/usr/bin/../lib/clang/21/include/stdarg.h" 2 3 4




# 1 "/usr/bin/../lib/clang/21/include/__stdarg_va_arg.h" 1 3 4
/*===---- __stdarg_va_arg.h - Definitions of va_start, va_arg, va_end-------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */







/* Versions before C23 do require the second parameter. */
# 62 "/usr/bin/../lib/clang/21/include/stdarg.h" 2 3 4




# 1 "/usr/bin/../lib/clang/21/include/__stdarg___va_copy.h" 1 3 4
/*===---- __stdarg___va_copy.h - Definition of __va_copy -------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */
# 67 "/usr/bin/../lib/clang/21/include/stdarg.h" 2 3 4




# 1 "/usr/bin/../lib/clang/21/include/__stdarg_va_copy.h" 1 3 4
/*===---- __stdarg_va_copy.h - Definition of va_copy------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */
# 72 "/usr/bin/../lib/clang/21/include/stdarg.h" 2 3 4
# 264 "/usr/include/curses.h" 2 3 4




/* X/Open and SVr4 specify that curses implements 'bool'.  However, C++ may also
 * implement it.  If so, we must use the C++ compiler's type to avoid conflict
 * with other interfaces.
 *
 * A further complication is that <stdbool.h> may declare 'bool' to be a
 * different type, such as an enum which is not necessarily compatible with
 * C++.  If we have <stdbool.h>, make 'bool' a macro, so users may #undef it.
 * Otherwise, let it remain a typedef to avoid conflicts with other #define's.
 * In either case, make a typedef for NCURSES_BOOL which can be used if needed
 * from either C or C++.
 */







typedef unsigned char NCURSES_BOOL;
# 296 "/usr/include/curses.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/stdbool.h" 1 3 4
/*===---- stdbool.h - Standard header for booleans -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */
# 297 "/usr/include/curses.h" 2 3 4
/* use whatever the C compiler decides bool really is */
# 316 "/usr/include/curses.h" 3 4
/*
 * X/Open attributes.  In the ncurses implementation, they are identical to the
 * A_ attributes.
 */
# 342 "/usr/include/curses.h" 3 4
/* colors */
# 352 "/usr/include/curses.h" 3 4
/* line graphics */





extern chtype acs_map[];




/* VT100 symbols begin here */
# 382 "/usr/include/curses.h" 3 4
/* Teletype 5410v1 symbols begin here */







/*
 * These aren't documented, but a lot of System Vs have them anyway
 * (you can spot pprryyzz{{||}} in a lot of AT&T terminfo strings).
 * The ACS_names may not match AT&T's, our source didn't know them.
 */
# 403 "/usr/include/curses.h" 3 4
/*
 * Line drawing ACS names are of the form ACS_trbl, where t is the top, r
 * is the right, b is the bottom, and l is the left.  t, r, b, and l might
 * be B (blank), S (single), D (double), or T (thick).  The subset defined
 * here only uses B and S.
 */
# 427 "/usr/include/curses.h" 3 4
/* values for the _flags member */
# 436 "/usr/include/curses.h" 3 4
/*
 * this value is used in the firstchar and lastchar fields to mark
 * unchanged lines
 */


/*
 * this value is used in the oldindex field to mark lines created by insertions
 * and scrolls.
 */







typedef struct screen SCREEN;


typedef struct _win_st WINDOW;

typedef chtype attr_t; /* ...must be at least as wide as chtype */
# 564 "/usr/include/curses.h" 3 4
/*
 * GCC (and some other compilers) define '__attribute__'; we're using this
 * macro to alert the compiler to flag inconsistencies in printf/scanf-like
 * function calls.  Just in case '__attribute__' isn't defined, make a dummy.
 * Old versions of G++ do not accept it anyway, at least not consistently with
 * GCC.
 */




/*
 * We cannot define these in ncurses_cfg.h, since they require parameters to be
 * passed (that is non-portable).
 */
# 610 "/usr/include/curses.h" 3 4
/*
 * Curses uses a helper function.  Define our type for this to simplify
 * extending it for the sp-funcs feature.
 */
typedef int (*NCURSES_OUTC)(int);

/*
 * Function prototypes.  This is the complete X/Open Curses list of required
 * functions.  Those marked `generated' will have sources generated from the
 * macro definitions later in this file, in order to satisfy XPG4.2
 * requirements.
 */

extern int addch (const chtype); /* generated */
extern int addchnstr (const chtype *, int); /* generated */
extern int addchstr (const chtype *); /* generated */
extern int addnstr (const char *, int); /* generated */
extern int addstr (const char *); /* generated */
extern int attroff (int); /* generated */
extern int attron (int); /* generated */
extern int attrset (int); /* generated */
extern int attr_get (attr_t *, short *, void *); /* generated */
extern int attr_off (attr_t, void *); /* generated */
extern int attr_on (attr_t, void *); /* generated */
extern int attr_set (attr_t, short, void *); /* generated */
extern int baudrate (void); /* implemented */
extern int beep (void); /* implemented */
extern int bkgd (chtype); /* generated */
extern void bkgdset (chtype); /* generated */
extern int border (chtype,chtype,chtype,chtype,chtype,chtype,chtype,chtype); /* generated */
extern int box (WINDOW *, chtype, chtype); /* generated */
extern _Bool can_change_color (void); /* implemented */
extern int cbreak (void); /* implemented */
extern int chgat (int, attr_t, short, const void *); /* generated */
extern int clear (void); /* generated */
extern int clearok (WINDOW *,_Bool); /* implemented */
extern int clrtobot (void); /* generated */
extern int clrtoeol (void); /* generated */
extern int color_content (short,short*,short*,short*); /* implemented */
extern int color_set (short,void*); /* generated */
extern int COLOR_PAIR (int); /* generated */
extern int copywin (const WINDOW*,WINDOW*,int,int,int,int,int,int,int); /* implemented */
extern int curs_set (int); /* implemented */
extern int def_prog_mode (void); /* implemented */
extern int def_shell_mode (void); /* implemented */
extern int delay_output (int); /* implemented */
extern int delch (void); /* generated */
extern void delscreen (SCREEN *); /* implemented */
extern int delwin (WINDOW *); /* implemented */
extern int deleteln (void); /* generated */
extern WINDOW * derwin (WINDOW *,int,int,int,int); /* implemented */
extern int doupdate (void); /* implemented */
extern WINDOW * dupwin (WINDOW *); /* implemented */
extern int echo (void); /* implemented */
extern int echochar (const chtype); /* generated */
extern int erase (void); /* generated */
extern int endwin (void); /* implemented */
extern char erasechar (void); /* implemented */
extern void filter (void); /* implemented */
extern int flash (void); /* implemented */
extern int flushinp (void); /* implemented */
extern chtype getbkgd (WINDOW *); /* generated */
extern int getch (void); /* generated */
extern int getnstr (char *, int); /* generated */
extern int getstr (char *); /* generated */
extern WINDOW * getwin (FILE *); /* implemented */
extern int halfdelay (int); /* implemented */
extern _Bool has_colors (void); /* implemented */
extern _Bool has_ic (void); /* implemented */
extern _Bool has_il (void); /* implemented */
extern int hline (chtype, int); /* generated */
extern void idcok (WINDOW *, _Bool); /* implemented */
extern int idlok (WINDOW *, _Bool); /* implemented */
extern void immedok (WINDOW *, _Bool); /* implemented */
extern chtype inch (void); /* generated */
extern int inchnstr (chtype *, int); /* generated */
extern int inchstr (chtype *); /* generated */
extern WINDOW * initscr (void); /* implemented */
extern int init_color (short,short,short,short); /* implemented */
extern int init_pair (short,short,short); /* implemented */
extern int innstr (char *, int); /* generated */
extern int insch (chtype); /* generated */
extern int insdelln (int); /* generated */
extern int insertln (void); /* generated */
extern int insnstr (const char *, int); /* generated */
extern int insstr (const char *); /* generated */
extern int instr (char *); /* generated */
extern int intrflush (WINDOW *,_Bool); /* implemented */
extern _Bool isendwin (void); /* implemented */
extern _Bool is_linetouched (WINDOW *,int); /* implemented */
extern _Bool is_wintouched (WINDOW *); /* implemented */
extern const char * keyname (int); /* implemented */
extern int keypad (WINDOW *,_Bool); /* implemented */
extern char killchar (void); /* implemented */
extern int leaveok (WINDOW *,_Bool); /* implemented */
extern char * longname (void); /* implemented */
extern int meta (WINDOW *,_Bool); /* implemented */
extern int move (int, int); /* generated */
extern int mvaddch (int, int, const chtype); /* generated */
extern int mvaddchnstr (int, int, const chtype *, int); /* generated */
extern int mvaddchstr (int, int, const chtype *); /* generated */
extern int mvaddnstr (int, int, const char *, int); /* generated */
extern int mvaddstr (int, int, const char *); /* generated */
extern int mvchgat (int, int, int, attr_t, short, const void *); /* generated */
extern int mvcur (int,int,int,int); /* implemented */
extern int mvdelch (int, int); /* generated */
extern int mvderwin (WINDOW *, int, int); /* implemented */
extern int mvgetch (int, int); /* generated */
extern int mvgetnstr (int, int, char *, int); /* generated */
extern int mvgetstr (int, int, char *); /* generated */
extern int mvhline (int, int, chtype, int); /* generated */
extern chtype mvinch (int, int); /* generated */
extern int mvinchnstr (int, int, chtype *, int); /* generated */
extern int mvinchstr (int, int, chtype *); /* generated */
extern int mvinnstr (int, int, char *, int); /* generated */
extern int mvinsch (int, int, chtype); /* generated */
extern int mvinsnstr (int, int, const char *, int); /* generated */
extern int mvinsstr (int, int, const char *); /* generated */
extern int mvinstr (int, int, char *); /* generated */
extern int mvprintw (int,int, const char *,...) /* implemented */
                     ;
extern int mvscanw (int,int, const char *,...) /* implemented */
                    ;
extern int mvvline (int, int, chtype, int); /* generated */
extern int mvwaddch (WINDOW *, int, int, const chtype); /* generated */
extern int mvwaddchnstr (WINDOW *, int, int, const chtype *, int);/* generated */
extern int mvwaddchstr (WINDOW *, int, int, const chtype *); /* generated */
extern int mvwaddnstr (WINDOW *, int, int, const char *, int); /* generated */
extern int mvwaddstr (WINDOW *, int, int, const char *); /* generated */
extern int mvwchgat (WINDOW *, int, int, int, attr_t, short, const void *);/* generated */
extern int mvwdelch (WINDOW *, int, int); /* generated */
extern int mvwgetch (WINDOW *, int, int); /* generated */
extern int mvwgetnstr (WINDOW *, int, int, char *, int); /* generated */
extern int mvwgetstr (WINDOW *, int, int, char *); /* generated */
extern int mvwhline (WINDOW *, int, int, chtype, int); /* generated */
extern int mvwin (WINDOW *,int,int); /* implemented */
extern chtype mvwinch (WINDOW *, int, int); /* generated */
extern int mvwinchnstr (WINDOW *, int, int, chtype *, int); /* generated */
extern int mvwinchstr (WINDOW *, int, int, chtype *); /* generated */
extern int mvwinnstr (WINDOW *, int, int, char *, int); /* generated */
extern int mvwinsch (WINDOW *, int, int, chtype); /* generated */
extern int mvwinsnstr (WINDOW *, int, int, const char *, int); /* generated */
extern int mvwinsstr (WINDOW *, int, int, const char *); /* generated */
extern int mvwinstr (WINDOW *, int, int, char *); /* generated */
extern int mvwprintw (WINDOW*,int,int, const char *,...) /* implemented */
                     ;
extern int mvwscanw (WINDOW *,int,int, const char *,...) /* implemented */
                    ;
extern int mvwvline (WINDOW *,int, int, chtype, int); /* generated */
extern int napms (int); /* implemented */
extern WINDOW * newpad (int,int); /* implemented */
extern SCREEN * newterm (const char *,FILE *,FILE *); /* implemented */
extern WINDOW * newwin (int,int,int,int); /* implemented */
extern int nl (void); /* implemented */
extern int nocbreak (void); /* implemented */
extern int nodelay (WINDOW *,_Bool); /* implemented */
extern int noecho (void); /* implemented */
extern int nonl (void); /* implemented */
extern void noqiflush (void); /* implemented */
extern int noraw (void); /* implemented */
extern int notimeout (WINDOW *,_Bool); /* implemented */
extern int overlay (const WINDOW*,WINDOW *); /* implemented */
extern int overwrite (const WINDOW*,WINDOW *); /* implemented */
extern int pair_content (short,short*,short*); /* implemented */
extern int PAIR_NUMBER (int); /* generated */
extern int pechochar (WINDOW *, const chtype); /* implemented */
extern int pnoutrefresh (WINDOW*,int,int,int,int,int,int);/* implemented */
extern int prefresh (WINDOW *,int,int,int,int,int,int); /* implemented */
extern int printw (const char *,...) /* implemented */
                     ;
extern int putwin (WINDOW *, FILE *); /* implemented */
extern void qiflush (void); /* implemented */
extern int raw (void); /* implemented */
extern int redrawwin (WINDOW *); /* generated */
extern int refresh (void); /* generated */
extern int resetty (void); /* implemented */
extern int reset_prog_mode (void); /* implemented */
extern int reset_shell_mode (void); /* implemented */
extern int ripoffline (int, int (*)(WINDOW *, int)); /* implemented */
extern int savetty (void); /* implemented */
extern int scanw (const char *,...) /* implemented */
                    ;
extern int scr_dump (const char *); /* implemented */
extern int scr_init (const char *); /* implemented */
extern int scrl (int); /* generated */
extern int scroll (WINDOW *); /* generated */
extern int scrollok (WINDOW *,_Bool); /* implemented */
extern int scr_restore (const char *); /* implemented */
extern int scr_set (const char *); /* implemented */
extern int setscrreg (int,int); /* generated */
extern SCREEN * set_term (SCREEN *); /* implemented */
extern int slk_attroff (const chtype); /* implemented */
extern int slk_attr_off (const attr_t, void *); /* generated:WIDEC */
extern int slk_attron (const chtype); /* implemented */
extern int slk_attr_on (attr_t,void*); /* generated:WIDEC */
extern int slk_attrset (const chtype); /* implemented */
extern attr_t slk_attr (void); /* implemented */
extern int slk_attr_set (const attr_t,short,void*); /* implemented */
extern int slk_clear (void); /* implemented */
extern int slk_color (short); /* implemented */
extern int slk_init (int); /* implemented */
extern char * slk_label (int); /* implemented */
extern int slk_noutrefresh (void); /* implemented */
extern int slk_refresh (void); /* implemented */
extern int slk_restore (void); /* implemented */
extern int slk_set (int,const char *,int); /* implemented */
extern int slk_touch (void); /* implemented */
extern int standout (void); /* generated */
extern int standend (void); /* generated */
extern int start_color (void); /* implemented */
extern WINDOW * subpad (WINDOW *, int, int, int, int); /* implemented */
extern WINDOW * subwin (WINDOW *, int, int, int, int); /* implemented */
extern int syncok (WINDOW *, _Bool); /* implemented */
extern chtype termattrs (void); /* implemented */
extern char * termname (void); /* implemented */
extern void timeout (int); /* generated */
extern int touchline (WINDOW *, int, int); /* generated */
extern int touchwin (WINDOW *); /* generated */
extern int typeahead (int); /* implemented */
extern int ungetch (int); /* implemented */
extern int untouchwin (WINDOW *); /* generated */
extern void use_env (_Bool); /* implemented */
extern void use_tioctl (_Bool); /* implemented */
extern int vidattr (chtype); /* implemented */
extern int vidputs (chtype, NCURSES_OUTC); /* implemented */
extern int vline (chtype, int); /* generated */
extern int vwprintw (WINDOW *, const char *, va_list) /* implemented */
                     ;
extern int vw_printw (WINDOW *, const char *, va_list) /* implemented */
                     ;
extern int vwscanw (WINDOW *, const char *, va_list) /* implemented */
                    ;
extern int vw_scanw (WINDOW *, const char *, va_list) /* implemented */
                    ;
extern int waddch (WINDOW *, const chtype); /* implemented */
extern int waddchnstr (WINDOW *,const chtype *,int); /* implemented */
extern int waddchstr (WINDOW *,const chtype *); /* generated */
extern int waddnstr (WINDOW *,const char *,int); /* implemented */
extern int waddstr (WINDOW *,const char *); /* generated */
extern int wattron (WINDOW *, int); /* generated */
extern int wattroff (WINDOW *, int); /* generated */
extern int wattrset (WINDOW *, int); /* generated */
extern int wattr_get (WINDOW *, attr_t *, short *, void *); /* generated */
extern int wattr_on (WINDOW *, attr_t, void *); /* implemented */
extern int wattr_off (WINDOW *, attr_t, void *); /* implemented */
extern int wattr_set (WINDOW *, attr_t, short, void *); /* generated */
extern int wbkgd (WINDOW *, chtype); /* implemented */
extern void wbkgdset (WINDOW *,chtype); /* implemented */
extern int wborder (WINDOW *,chtype,chtype,chtype,chtype,chtype,chtype,chtype,chtype); /* implemented */
extern int wchgat (WINDOW *, int, attr_t, short, const void *);/* implemented */
extern int wclear (WINDOW *); /* implemented */
extern int wclrtobot (WINDOW *); /* implemented */
extern int wclrtoeol (WINDOW *); /* implemented */
extern int wcolor_set (WINDOW*,short,void*); /* implemented */
extern void wcursyncup (WINDOW *); /* implemented */
extern int wdelch (WINDOW *); /* implemented */
extern int wdeleteln (WINDOW *); /* generated */
extern int wechochar (WINDOW *, const chtype); /* implemented */
extern int werase (WINDOW *); /* implemented */
extern int wgetch (WINDOW *); /* implemented */
extern int wgetnstr (WINDOW *,char *,int); /* implemented */
extern int wgetstr (WINDOW *, char *); /* generated */
extern int whline (WINDOW *, chtype, int); /* implemented */
extern chtype winch (WINDOW *); /* implemented */
extern int winchnstr (WINDOW *, chtype *, int); /* implemented */
extern int winchstr (WINDOW *, chtype *); /* generated */
extern int winnstr (WINDOW *, char *, int); /* implemented */
extern int winsch (WINDOW *, chtype); /* implemented */
extern int winsdelln (WINDOW *,int); /* implemented */
extern int winsertln (WINDOW *); /* generated */
extern int winsnstr (WINDOW *, const char *,int); /* implemented */
extern int winsstr (WINDOW *, const char *); /* generated */
extern int winstr (WINDOW *, char *); /* generated */
extern int wmove (WINDOW *,int,int); /* implemented */
extern int wnoutrefresh (WINDOW *); /* implemented */
extern int wprintw (WINDOW *, const char *,...) /* implemented */
                     ;
extern int wredrawln (WINDOW *,int,int); /* implemented */
extern int wrefresh (WINDOW *); /* implemented */
extern int wscanw (WINDOW *, const char *,...) /* implemented */
                    ;
extern int wscrl (WINDOW *,int); /* implemented */
extern int wsetscrreg (WINDOW *,int,int); /* implemented */
extern int wstandout (WINDOW *); /* generated */
extern int wstandend (WINDOW *); /* generated */
extern void wsyncdown (WINDOW *); /* implemented */
extern void wsyncup (WINDOW *); /* implemented */
extern void wtimeout (WINDOW *,int); /* implemented */
extern int wtouchln (WINDOW *,int,int,int); /* implemented */
extern int wvline (WINDOW *,chtype,int); /* implemented */

/*
 * These are also declared in <term.h>:
 */
extern int tigetflag (const char *); /* implemented */
extern int tigetnum (const char *); /* implemented */
extern char * tigetstr (const char *); /* implemented */
extern int putp (const char *); /* implemented */


extern char * tparm (const char *, ...); /* special */




extern char * tiparm (const char *, ...); /* special */
extern char * tiparm_s (int, int, const char *, ...); /* special */
extern int tiscan_s (int *, int *, const char *); /* special */

/*
 * These functions are not in X/Open, but we use them in macro definitions:
 */
extern int getattrs (const WINDOW *); /* generated */
extern int getcurx (const WINDOW *); /* generated */
extern int getcury (const WINDOW *); /* generated */
extern int getbegx (const WINDOW *); /* generated */
extern int getbegy (const WINDOW *); /* generated */
extern int getmaxx (const WINDOW *); /* generated */
extern int getmaxy (const WINDOW *); /* generated */
extern int getparx (const WINDOW *); /* generated */
extern int getpary (const WINDOW *); /* generated */

/*
 * vid_attr() was implemented originally based on a draft of X/Open curses.
 */




/*
 * These functions are extensions - not in X/Open Curses.
 */



typedef int (*NCURSES_WINDOW_CB)(WINDOW *, void *);
typedef int (*NCURSES_SCREEN_CB)(SCREEN *, void *);
extern int alloc_pair (int, int);
extern int assume_default_colors (int, int);
extern const char * curses_version (void);
extern int define_key (const char *, int);
extern int extended_color_content(int, int *, int *, int *);
extern int extended_pair_content(int, int *, int *);
extern int extended_slk_color(int);
extern int find_pair (int, int);
extern int free_pair (int);
extern int get_escdelay (void);
extern int init_extended_color(int, int, int, int);
extern int init_extended_pair(int, int, int);
extern int is_cbreak(void);
extern int is_echo(void);
extern int is_nl(void);
extern int is_raw(void);
extern _Bool is_term_resized (int, int);
extern int key_defined (const char *);
extern char * keybound (int, int);
extern int keyok (int, _Bool);
extern void nofilter(void);
extern void reset_color_pairs (void);
extern int resize_term (int, int);
extern int resizeterm (int, int);
extern int set_escdelay (int);
extern int set_tabsize (int);
extern int use_default_colors (void);
extern int use_legacy_coding (int);
extern int use_screen (SCREEN *, NCURSES_SCREEN_CB, void *);
extern int use_window (WINDOW *, NCURSES_WINDOW_CB, void *);
extern int wresize (WINDOW *, int, int);




extern int use_extended_names (_Bool);


/*
 * These extensions provide access to information stored in the WINDOW even
 * when NCURSES_OPAQUE is set:
 */
extern WINDOW * wgetparent (const WINDOW *); /* generated */
extern _Bool is_cleared (const WINDOW *); /* generated */
extern _Bool is_idcok (const WINDOW *); /* generated */
extern _Bool is_idlok (const WINDOW *); /* generated */
extern _Bool is_immedok (const WINDOW *); /* generated */
extern _Bool is_keypad (const WINDOW *); /* generated */
extern _Bool is_leaveok (const WINDOW *); /* generated */
extern _Bool is_nodelay (const WINDOW *); /* generated */
extern _Bool is_notimeout (const WINDOW *); /* generated */
extern _Bool is_pad (const WINDOW *); /* generated */
extern _Bool is_scrollok (const WINDOW *); /* generated */
extern _Bool is_subwin (const WINDOW *); /* generated */
extern _Bool is_syncok (const WINDOW *); /* generated */
extern int wgetdelay (const WINDOW *); /* generated */
extern int wgetscrreg (const WINDOW *, int *, int *); /* generated */





/*
 * Extra extension-functions, which pass a SCREEN pointer rather than using
 * a global variable SP.
 */





/* Define the sp-funcs helper function */

typedef int (*NCURSES_OUTC_sp)(SCREEN*, int);

extern SCREEN * new_prescr (void); /* implemented:SP_FUNC */

extern int baudrate_sp (SCREEN*); /* implemented:SP_FUNC */
extern int beep_sp (SCREEN*); /* implemented:SP_FUNC */
extern _Bool can_change_color_sp (SCREEN*); /* implemented:SP_FUNC */
extern int cbreak_sp (SCREEN*); /* implemented:SP_FUNC */
extern int curs_set_sp (SCREEN*, int); /* implemented:SP_FUNC */
extern int color_content_sp (SCREEN*, short, short*, short*, short*); /* implemented:SP_FUNC */
extern int def_prog_mode_sp (SCREEN*); /* implemented:SP_FUNC */
extern int def_shell_mode_sp (SCREEN*); /* implemented:SP_FUNC */
extern int delay_output_sp (SCREEN*, int); /* implemented:SP_FUNC */
extern int doupdate_sp (SCREEN*); /* implemented:SP_FUNC */
extern int echo_sp (SCREEN*); /* implemented:SP_FUNC */
extern int endwin_sp (SCREEN*); /* implemented:SP_FUNC */
extern char erasechar_sp (SCREEN*);/* implemented:SP_FUNC */
extern void filter_sp (SCREEN*); /* implemented:SP_FUNC */
extern int flash_sp (SCREEN*); /* implemented:SP_FUNC */
extern int flushinp_sp (SCREEN*); /* implemented:SP_FUNC */
extern WINDOW * getwin_sp (SCREEN*, FILE *); /* implemented:SP_FUNC */
extern int halfdelay_sp (SCREEN*, int); /* implemented:SP_FUNC */
extern _Bool has_colors_sp (SCREEN*); /* implemented:SP_FUNC */
extern _Bool has_ic_sp (SCREEN*); /* implemented:SP_FUNC */
extern _Bool has_il_sp (SCREEN*); /* implemented:SP_FUNC */
extern int init_color_sp (SCREEN*, short, short, short, short); /* implemented:SP_FUNC */
extern int init_pair_sp (SCREEN*, short, short, short); /* implemented:SP_FUNC */
extern int intrflush_sp (SCREEN*, WINDOW*, _Bool); /* implemented:SP_FUNC */
extern _Bool isendwin_sp (SCREEN*); /* implemented:SP_FUNC */
extern const char * keyname_sp (SCREEN*, int); /* implemented:SP_FUNC */
extern char killchar_sp (SCREEN*); /* implemented:SP_FUNC */
extern char * longname_sp (SCREEN*); /* implemented:SP_FUNC */
extern int mvcur_sp (SCREEN*, int, int, int, int); /* implemented:SP_FUNC */
extern int napms_sp (SCREEN*, int); /* implemented:SP_FUNC */
extern WINDOW * newpad_sp (SCREEN*, int, int); /* implemented:SP_FUNC */
extern SCREEN * newterm_sp (SCREEN*, const char *, FILE *, FILE *); /* implemented:SP_FUNC */
extern WINDOW * newwin_sp (SCREEN*, int, int, int, int); /* implemented:SP_FUNC */
extern int nl_sp (SCREEN*); /* implemented:SP_FUNC */
extern int nocbreak_sp (SCREEN*); /* implemented:SP_FUNC */
extern int noecho_sp (SCREEN*); /* implemented:SP_FUNC */
extern int nonl_sp (SCREEN*); /* implemented:SP_FUNC */
extern void noqiflush_sp (SCREEN*); /* implemented:SP_FUNC */
extern int noraw_sp (SCREEN*); /* implemented:SP_FUNC */
extern int pair_content_sp (SCREEN*, short, short*, short*); /* implemented:SP_FUNC */
extern void qiflush_sp (SCREEN*); /* implemented:SP_FUNC */
extern int raw_sp (SCREEN*); /* implemented:SP_FUNC */
extern int reset_prog_mode_sp (SCREEN*); /* implemented:SP_FUNC */
extern int reset_shell_mode_sp (SCREEN*); /* implemented:SP_FUNC */
extern int resetty_sp (SCREEN*); /* implemented:SP_FUNC */
extern int ripoffline_sp (SCREEN*, int, int (*)(WINDOW *, int)); /* implemented:SP_FUNC */
extern int savetty_sp (SCREEN*); /* implemented:SP_FUNC */
extern int scr_init_sp (SCREEN*, const char *); /* implemented:SP_FUNC */
extern int scr_restore_sp (SCREEN*, const char *); /* implemented:SP_FUNC */
extern int scr_set_sp (SCREEN*, const char *); /* implemented:SP_FUNC */
extern int slk_attroff_sp (SCREEN*, const chtype); /* implemented:SP_FUNC */
extern int slk_attron_sp (SCREEN*, const chtype); /* implemented:SP_FUNC */
extern int slk_attrset_sp (SCREEN*, const chtype); /* implemented:SP_FUNC */
extern attr_t slk_attr_sp (SCREEN*); /* implemented:SP_FUNC */
extern int slk_attr_set_sp (SCREEN*, const attr_t, short, void*); /* implemented:SP_FUNC */
extern int slk_clear_sp (SCREEN*); /* implemented:SP_FUNC */
extern int slk_color_sp (SCREEN*, short); /* implemented:SP_FUNC */
extern int slk_init_sp (SCREEN*, int); /* implemented:SP_FUNC */
extern char * slk_label_sp (SCREEN*, int); /* implemented:SP_FUNC */
extern int slk_noutrefresh_sp (SCREEN*); /* implemented:SP_FUNC */
extern int slk_refresh_sp (SCREEN*); /* implemented:SP_FUNC */
extern int slk_restore_sp (SCREEN*); /* implemented:SP_FUNC */
extern int slk_set_sp (SCREEN*, int, const char *, int); /* implemented:SP_FUNC */
extern int slk_touch_sp (SCREEN*); /* implemented:SP_FUNC */
extern int start_color_sp (SCREEN*); /* implemented:SP_FUNC */
extern chtype termattrs_sp (SCREEN*); /* implemented:SP_FUNC */
extern char * termname_sp (SCREEN*); /* implemented:SP_FUNC */
extern int typeahead_sp (SCREEN*, int); /* implemented:SP_FUNC */
extern int ungetch_sp (SCREEN*, int); /* implemented:SP_FUNC */
extern void use_env_sp (SCREEN*, _Bool); /* implemented:SP_FUNC */
extern void use_tioctl_sp (SCREEN*, _Bool); /* implemented:SP_FUNC */
extern int vidattr_sp (SCREEN*, chtype); /* implemented:SP_FUNC */
extern int vidputs_sp (SCREEN*, chtype, NCURSES_OUTC_sp); /* implemented:SP_FUNC */

extern int alloc_pair_sp (SCREEN*, int, int); /* implemented:EXT_SP_FUNC */
extern int assume_default_colors_sp (SCREEN*, int, int); /* implemented:EXT_SP_FUNC */
extern int define_key_sp (SCREEN*, const char *, int); /* implemented:EXT_SP_FUNC */
extern int extended_color_content_sp (SCREEN*, int, int *, int *, int *); /* implemented:EXT_SP_FUNC */
extern int extended_pair_content_sp (SCREEN*, int, int *, int *); /* implemented:EXT_SP_FUNC */
extern int extended_slk_color_sp (SCREEN*, int); /* implemented:EXT_SP_FUNC */
extern int find_pair_sp (SCREEN*, int, int); /* implemented:EXT_SP_FUNC */
extern int free_pair_sp (SCREEN*, int); /* implemented:EXT_SP_FUNC */
extern int get_escdelay_sp (SCREEN*); /* implemented:EXT_SP_FUNC */
extern int init_extended_color_sp (SCREEN*, int, int, int, int); /* implemented:EXT_SP_FUNC */
extern int init_extended_pair_sp (SCREEN*, int, int, int); /* implemented:EXT_SP_FUNC */
extern int is_cbreak_sp (SCREEN*); /* implemented:EXT_SP_FUNC */
extern int is_echo_sp (SCREEN*); /* implemented:EXT_SP_FUNC */
extern int is_nl_sp (SCREEN*); /* implemented:EXT_SP_FUNC */
extern int is_raw_sp (SCREEN*); /* implemented:EXT_SP_FUNC */
extern _Bool is_term_resized_sp (SCREEN*, int, int); /* implemented:EXT_SP_FUNC */
extern int key_defined_sp (SCREEN*, const char *); /* implemented:EXT_SP_FUNC */
extern char * keybound_sp (SCREEN*, int, int); /* implemented:EXT_SP_FUNC */
extern int keyok_sp (SCREEN*, int, _Bool); /* implemented:EXT_SP_FUNC */
extern void nofilter_sp (SCREEN*); /* implemented */ /* implemented:EXT_SP_FUNC */
extern void reset_color_pairs_sp (SCREEN*); /* implemented:EXT_SP_FUNC */
extern int resize_term_sp (SCREEN*, int, int); /* implemented:EXT_SP_FUNC */
extern int resizeterm_sp (SCREEN*, int, int); /* implemented:EXT_SP_FUNC */
extern int set_escdelay_sp (SCREEN*, int); /* implemented:EXT_SP_FUNC */
extern int set_tabsize_sp (SCREEN*, int); /* implemented:EXT_SP_FUNC */
extern int use_default_colors_sp (SCREEN*); /* implemented:EXT_SP_FUNC */
extern int use_legacy_coding_sp (SCREEN*, int); /* implemented:EXT_SP_FUNC */
# 1133 "/usr/include/curses.h" 3 4
/* attributes */
# 1150 "/usr/include/curses.h" 3 4
/* SVr4 curses marks these as "subject to change" */



/* X/Open features not found in SVr4 curses */
# 1171 "/usr/include/curses.h" 3 4
/*
 * Most of the pseudo functions are macros that either provide compatibility
 * with older versions of curses, or provide inline functionality to improve
 * performance.
 */

/*
 * These pseudo functions are always implemented as macros:
 */
# 1206 "/usr/include/curses.h" 3 4
/*
 * These miscellaneous pseudo functions are provided for compatibility:
 */
# 1222 "/usr/include/curses.h" 3 4
/* It seems older SYSV curses versions define these */
# 1282 "/usr/include/curses.h" 3 4
/*
 * These apply to the first 256 color pairs.
 */



/*
 * pseudo functions for standard screen
 */
# 1337 "/usr/include/curses.h" 3 4
/*
 * mv functions
 */
# 1383 "/usr/include/curses.h" 3 4
/*
 * Some wide-character functions can be implemented without the extensions.
 */
# 1436 "/usr/include/curses.h" 3 4
/*
 * X/Open curses deprecates SVr4 vwprintw/vwscanw, which are supposed to use
 * varargs.h.  It adds new calls vw_printw/vw_scanw, which are supposed to
 * use POSIX stdarg.h.  The ncurses versions of vwprintw/vwscanw already
 * use stdarg.h, so...
 */
/* define vw_printw		vwprintw */
/* define vw_scanw		vwscanw */

/*
 * Export fallback function for use in C++ binding.
 */





/*
 * These macros are extensions - not in X/Open Curses.
 */
# 1476 "/usr/include/curses.h" 3 4
/*
 * X/Open says this returns a bool; SVr4 also checked for out-of-range line.
 * The macro provides compatibility:
 */




/*
 * Public variables.
 *
 * Notes:
 *	a. ESCDELAY was an undocumented feature under AIX curses.
 *	   It gives the ESC expire time in milliseconds.
 *	b. ttytype is needed for backward compatibility
 */
# 1518 "/usr/include/curses.h" 3 4
extern WINDOW * curscr;
extern WINDOW * newscr;
extern WINDOW * stdscr;
extern char ttytype[];
extern int COLORS;
extern int COLOR_PAIRS;
extern int COLS;
extern int ESCDELAY;
extern int LINES;
extern int TABSIZE;



/*
 * Pseudo-character tokens outside ASCII range.  The curses wgetch() function
 * will return any given one of these only if the corresponding k- capability
 * is defined in your terminal's terminfo entry.
 *
 * Some keys (KEY_A1, etc) are arranged like this:
 *	a1     up    a3
 *	left   b2    right
 *	c1     down  c3
 *
 * A few key codes do not depend upon the terminfo entry.
 */





/*
 * These definitions were generated by ./MKkey_defs.sh ../../include/Caps ../../include/Caps-ncurses
 */
# 1645 "/usr/include/curses.h" 3 4
/* $Id: curses.wide,v 1.53 2025/01/18 21:08:32 Branden.Robinson Exp $ */
/*
 * vile:cmode:
 * This file is part of ncurses, designed to be appended after curses.h.in
 * (see that file for the relevant copyright).
 */
# 1960 "/usr/include/curses.h" 3 4
/* $Id: curses.tail,v 1.28 2025/05/17 20:32:15 tom Exp $ */
/*
 * vile:cmode:
 * This file is part of ncurses, designed to be appended after curses.h.in
 * (see that file for the relevant copyright).
 */

/* mouse interface */
# 1982 "/usr/include/curses.h" 3 4
/* event masks */
# 2007 "/usr/include/curses.h" 3 4
/*
 * In 32 bits the version-1 scheme does not provide enough space for a 5th
 * button, unless we choose to change the ABI by omitting the reserved-events.
 */
# 2024 "/usr/include/curses.h" 3 4
/*
 * If mmask_T is 64-bits, we can define another 6 button stanzas, for a total
 * of 11, which happens to be the maximum number supported in the X11 protocol.
 */
# 2084 "/usr/include/curses.h" 3 4
/* macros to extract single event-bits from masks */







typedef struct
{
    short id; /* ID to distinguish multiple devices */
    int x, y, z; /* event coordinates (character-cell) */
    mmask_t bstate; /* button state bits */
}
MEVENT;

extern _Bool has_mouse(void);
extern int getmouse (MEVENT *);
extern int ungetmouse (MEVENT *);
extern mmask_t mousemask (mmask_t, mmask_t *);
extern _Bool wenclose (const WINDOW *, int, int);
extern int mouseinterval (int);
extern _Bool wmouse_trafo (const WINDOW*, int*, int*, _Bool);
extern _Bool mouse_trafo (int*, int*, _Bool); /* generated */


extern _Bool has_mouse_sp (SCREEN*);
extern int getmouse_sp (SCREEN*, MEVENT *);
extern int ungetmouse_sp (SCREEN*,MEVENT *);
extern mmask_t mousemask_sp (SCREEN*, mmask_t, mmask_t *);
extern int mouseinterval_sp (SCREEN*, int);






/* other non-XSI functions */

extern int mcprint (char *, int); /* direct data to printer */
extern int has_key (int); /* do we have given key? */


extern int has_key_sp (SCREEN*, int); /* do we have given key? */
extern int mcprint_sp (SCREEN*, char *, int); /* direct data to printer */


/* Debugging : use with libncurses_g.a */

extern void _tracef (const char *, ...) ;
extern char * _traceattr (attr_t);
extern char * _traceattr2 (int, chtype);
extern char * _tracechar (int);
extern char * _tracechtype (chtype);
extern char * _tracechtype2 (int, chtype);
# 2148 "/usr/include/curses.h" 3 4
extern void trace (const unsigned) ;
extern unsigned curses_trace (const unsigned);

/* trace masks */
# 2180 "/usr/include/curses.h" 3 4
extern void exit_curses (int);

# 1 "/usr/include/unctrl.h" 1 3 4
/****************************************************************************
 * Copyright 2020 Thomas E. Dickey                                          *
 * Copyright 1998-2001,2009 Free Software Foundation, Inc.                  *
 *                                                                          *
 * Permission is hereby granted, free of charge, to any person obtaining a  *
 * copy of this software and associated documentation files (the            *
 * "Software"), to deal in the Software without restriction, including      *
 * without limitation the rights to use, copy, modify, merge, publish,      *
 * distribute, distribute with modifications, sublicense, and/or sell       *
 * copies of the Software, and to permit persons to whom the Software is    *
 * furnished to do so, subject to the following conditions:                 *
 *                                                                          *
 * The above copyright notice and this permission notice shall be included  *
 * in all copies or substantial portions of the Software.                   *
 *                                                                          *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS  *
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF               *
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.   *
 * IN NO EVENT SHALL THE ABOVE COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,   *
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR    *
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR    *
 * THE USE OR OTHER DEALINGS IN THE SOFTWARE.                               *
 *                                                                          *
 * Except as contained in this notice, the name(s) of the above copyright   *
 * holders shall not be used in advertising or otherwise to promote the     *
 * sale, use or other dealings in this Software without prior written       *
 * authorization.                                                           *
 ****************************************************************************/

/****************************************************************************
 *  Author: Zeyd M. Ben-Halim <zmbenhal@netcom.com> 1992,1995               *
 *     and: Eric S. Raymond <esr@snark.thyrsus.com>                         *
 ****************************************************************************/

/*
 * unctrl.h
 *
 * Display a printable version of a control character.
 * Control characters are displayed in caret notation (^x), DELETE is displayed
 * as ^?. Printable characters are displayed as is.
 */

/* $Id: unctrl.h.in,v 1.12 2020/02/02 23:34:34 tom Exp $ */
# 55 "/usr/include/unctrl.h" 3 4
# 1 "/usr/include/curses.h" 1 3 4
/****************************************************************************
 * Copyright 2018-2024,2025 Thomas E. Dickey                                *
 * Copyright 1998-2016,2017 Free Software Foundation, Inc.                  *
 *                                                                          *
 * Permission is hereby granted, free of charge, to any person obtaining a  *
 * copy of this software and associated documentation files (the            *
 * "Software"), to deal in the Software without restriction, including      *
 * without limitation the rights to use, copy, modify, merge, publish,      *
 * distribute, distribute with modifications, sublicense, and/or sell       *
 * copies of the Software, and to permit persons to whom the Software is    *
 * furnished to do so, subject to the following conditions:                 *
 *                                                                          *
 * The above copyright notice and this permission notice shall be included  *
 * in all copies or substantial portions of the Software.                   *
 *                                                                          *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS  *
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF               *
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.   *
 * IN NO EVENT SHALL THE ABOVE COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,   *
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR    *
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR    *
 * THE USE OR OTHER DEALINGS IN THE SOFTWARE.                               *
 *                                                                          *
 * Except as contained in this notice, the name(s) of the above copyright   *
 * holders shall not be used in advertising or otherwise to promote the     *
 * sale, use or other dealings in this Software without prior written       *
 * authorization.                                                           *
 ****************************************************************************/

/****************************************************************************
 *  Author: Zeyd M. Ben-Halim <zmbenhal@netcom.com> 1992,1995               *
 *     and: Eric S. Raymond <esr@snark.thyrsus.com>                         *
 *     and: Thomas E. Dickey                        1996-on                 *
 ****************************************************************************/

/* $Id: curses.h.in,v 1.295 2025/05/24 16:38:03 tom Exp $ */
# 56 "/usr/include/unctrl.h" 2 3 4


 const char * unctrl (chtype);


 const char * unctrl_sp (SCREEN*, chtype);
# 2183 "/usr/include/curses.h" 2 3 4
# 15 "all.c" 2
# 1 "/usr/include/dirent.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 5.1.2 Directory Operations	<dirent.h>
 */
# 46 "/usr/include/dirent.h" 3 4
/* This file defines `struct dirent'.

   It defines the macro `_DIRENT_HAVE_D_NAMLEN' iff there is a `d_namlen'
   member that gives the length of `d_name'.

   It defines the macro `_DIRENT_HAVE_D_RECLEN' iff there is a `d_reclen'
   member that gives the size of the entire directory entry.

   It defines the macro `_DIRENT_HAVE_D_OFF' iff there is a `d_off'
   member that gives the file offset of the next directory entry.

   It defines the macro `_DIRENT_HAVE_D_TYPE' iff there is a `d_type'
   member that gives the type of the file.
 */

# 1 "/usr/include/bits/dirent.h" 1 3 4
/* Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





struct dirent
  {

    __ino_t d_ino;
    __off_t d_off;




    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256]; /* We must not include limits.h! */
  };
# 55 "/usr/include/bits/dirent.h" 3 4
/* Inform libc code that these two types are effectively identical.  */
# 62 "/usr/include/dirent.h" 2 3 4





/* These macros extract size information from a `struct dirent *'.
   They may evaluate their argument multiple times, so it must not
   have side effects.  Each of these may involve a relatively costly
   call to `strlen' on some systems, so these values should be cached.

   _D_EXACT_NAMLEN (DP)	returns the length of DP->d_name, not including
   its terminating null character.

   _D_ALLOC_NAMLEN (DP)	returns a size at least (_D_EXACT_NAMLEN (DP) + 1);
   that is, the allocation size needed to hold the DP->d_name string.
   Use this macro when you don't need the exact length, just an upper bound.
   This macro is less likely to require calling `strlen' than _D_EXACT_NAMLEN.
   */
# 125 "/usr/include/dirent.h" 3 4
/* This is the data type of directory stream objects.
   The actual structure is opaque to users.  */
typedef struct __dirstream DIR;

/* Close the directory stream DIRP.
   Return 0 if successful, -1 if not.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int closedir (DIR *__dirp) ;

/* Open a directory stream on NAME.
   Return a DIR stream on the directory, or NULL if it could not be opened.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern DIR *opendir (const char *__name)
                                                  ;
# 153 "/usr/include/dirent.h" 3 4
/* Read a directory entry from DIRP.  Return a pointer to a `struct
   dirent' describing the entry, or NULL for EOF or error.  The
   storage returned may be overwritten by a later readdir call on the
   same DIR stream.

   If the Large File Support API is selected we have to use the
   appropriate interface.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */

extern struct dirent *readdir (DIR *__dirp) ;
# 210 "/usr/include/dirent.h" 3 4
/* Rewind DIRP to the beginning of the directory.  */
extern void rewinddir (DIR *__dirp) ;
# 406 "/usr/include/dirent.h" 3 4
# 1 "/usr/include/bits/dirent_ext.h" 1 3 4
/* System-specific extensions of <dirent.h>.  Linux version.
   Copyright (C) 2019-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 407 "/usr/include/dirent.h" 2 3 4
# 16 "all.c" 2
# 1 "/usr/include/dlfcn.h" 1 3 4
/* User functions for run-time dynamic loading.
   Copyright (C) 1995-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 93 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_size_t.h" 1 3 4
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 94 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 25 "/usr/include/dlfcn.h" 2 3 4

/* Collect various system dependent definitions and declarations.  */
# 1 "/usr/include/bits/dlfcn.h" 1 3 4
/* System dependent definitions for run-time dynamic loading.
   Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





/* The MODE argument to `dlopen' contains one of the following: */






/* If the following bit is set in the MODE argument to `dlopen',
   the symbols of the loaded object and its dependencies are made
   visible as if the object were linked directly into the program.  */


/* Unix98 demands the following flag which is the inverse to RTLD_GLOBAL.
   The implementation does this by default and so we can define the
   value to zero.  */


/* Do not delete object when closed.  */
# 28 "/usr/include/dlfcn.h" 2 3 4
# 41 "/usr/include/dlfcn.h" 3 4
/* If the first argument of `dlsym' or `dlvsym' is set to RTLD_NEXT
   the run-time address of the symbol called NAME in the next shared
   object is returned.  The "next" relation is defined by the order
   the shared objects were loaded.  */


/* If the first argument to `dlsym' or `dlvsym' is set to RTLD_DEFAULT
   the run-time address of the symbol called NAME in the global scope
   is returned.  */




/* Open the shared object FILE and map it in; return a handle that can be
   passed to `dlsym' to get symbol values from it.  */
extern void *dlopen (const char *__file, int __mode) ;

/* Unmap and close a shared object opened by `dlopen'.
   The handle cannot be used again after calling `dlclose'.  */
extern int dlclose (void *__handle) ;

/* Find the run-time address in the shared object HANDLE refers to
   of the symbol called NAME.  */
extern void *dlsym (void *__restrict __handle,
      const char *__restrict __name) ;
# 79 "/usr/include/dlfcn.h" 3 4
/* When any of the above functions fails, call this function
   to return a string describing the error.  Each call resets
   the error string so that a following call returns null.  */
extern char *dlerror (void) ;
# 17 "all.c" 2
# 1 "/usr/include/elf.h" 1 3 4
/* This file defines standard ELF types, structures, and macros.
   Copyright (C) 1995-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* Standard ELF types.  */



/* Type for a 16-bit quantity.  */
typedef uint16_t Elf32_Half;
typedef uint16_t Elf64_Half;

/* Types for signed and unsigned 32-bit quantities.  */
typedef uint32_t Elf32_Word;
typedef int32_t Elf32_Sword;
typedef uint32_t Elf64_Word;
typedef int32_t Elf64_Sword;

/* Types for signed and unsigned 64-bit quantities.  */
typedef uint64_t Elf32_Xword;
typedef int64_t Elf32_Sxword;
typedef uint64_t Elf64_Xword;
typedef int64_t Elf64_Sxword;

/* Type of addresses.  */
typedef uint32_t Elf32_Addr;
typedef uint64_t Elf64_Addr;

/* Type of file offsets.  */
typedef uint32_t Elf32_Off;
typedef uint64_t Elf64_Off;

/* Type for section indices, which are 16-bit quantities.  */
typedef uint16_t Elf32_Section;
typedef uint16_t Elf64_Section;

/* Type for version symbol information.  */
typedef Elf32_Half Elf32_Versym;
typedef Elf64_Half Elf64_Versym;


/* The ELF file header.  This appears at the start of every ELF file.  */



typedef struct
{
  unsigned char e_ident[(16)]; /* Magic number and other info */
  Elf32_Half e_type; /* Object file type */
  Elf32_Half e_machine; /* Architecture */
  Elf32_Word e_version; /* Object file version */
  Elf32_Addr e_entry; /* Entry point virtual address */
  Elf32_Off e_phoff; /* Program header table file offset */
  Elf32_Off e_shoff; /* Section header table file offset */
  Elf32_Word e_flags; /* Processor-specific flags */
  Elf32_Half e_ehsize; /* ELF header size in bytes */
  Elf32_Half e_phentsize; /* Program header table entry size */
  Elf32_Half e_phnum; /* Program header table entry count */
  Elf32_Half e_shentsize; /* Section header table entry size */
  Elf32_Half e_shnum; /* Section header table entry count */
  Elf32_Half e_shstrndx; /* Section header string table index */
} Elf32_Ehdr;

typedef struct
{
  unsigned char e_ident[(16)]; /* Magic number and other info */
  Elf64_Half e_type; /* Object file type */
  Elf64_Half e_machine; /* Architecture */
  Elf64_Word e_version; /* Object file version */
  Elf64_Addr e_entry; /* Entry point virtual address */
  Elf64_Off e_phoff; /* Program header table file offset */
  Elf64_Off e_shoff; /* Section header table file offset */
  Elf64_Word e_flags; /* Processor-specific flags */
  Elf64_Half e_ehsize; /* ELF header size in bytes */
  Elf64_Half e_phentsize; /* Program header table entry size */
  Elf64_Half e_phnum; /* Program header table entry count */
  Elf64_Half e_shentsize; /* Section header table entry size */
  Elf64_Half e_shnum; /* Section header table entry count */
  Elf64_Half e_shstrndx; /* Section header string table index */
} Elf64_Ehdr;

/* Fields in the e_ident array.  The EI_* macros are indices into the
   array.  The macros under each EI_* macro are the values the byte
   may have.  */
# 115 "/usr/include/elf.h" 3 4
/* Conglomeration of the identification bytes, for easy testing as a word.  */
# 132 "/usr/include/elf.h" 3 4
     /* Value must be EV_CURRENT */
# 156 "/usr/include/elf.h" 3 4
/* Legal values for e_type (object file type).  */
# 169 "/usr/include/elf.h" 3 4
/* Legal values for e_machine (architecture).  */
# 182 "/usr/include/elf.h" 3 4
    /* reserved 11-14 */

    /* reserved 16 */







    /* reserved 24-35 */
# 278 "/usr/include/elf.h" 3 4
    /* reserved 121-130 */
# 293 "/usr/include/elf.h" 3 4
    /* reserved 145-159 */
# 316 "/usr/include/elf.h" 3 4
    /* reserved 182 */

    /* reserved 184 */
# 340 "/usr/include/elf.h" 3 4
    /* reserved 206-209 */
# 356 "/usr/include/elf.h" 3 4
    /* reserved 225-242 */
# 365 "/usr/include/elf.h" 3 4
/* Old spellings/synonyms.  */



/* If it is necessary to assign new unofficial EM_* values, please
   pick large random numbers (0x8523, 0xa7f2, etc.) to minimize the
   chances of collision with official or non-GNU unofficial values.  */



/* Legal values for e_version (version).  */





/* Section header.  */

typedef struct
{
  Elf32_Word sh_name; /* Section name (string tbl index) */
  Elf32_Word sh_type; /* Section type */
  Elf32_Word sh_flags; /* Section flags */
  Elf32_Addr sh_addr; /* Section virtual addr at execution */
  Elf32_Off sh_offset; /* Section file offset */
  Elf32_Word sh_size; /* Section size in bytes */
  Elf32_Word sh_link; /* Link to another section */
  Elf32_Word sh_info; /* Additional section information */
  Elf32_Word sh_addralign; /* Section alignment */
  Elf32_Word sh_entsize; /* Entry size if section holds table */
} Elf32_Shdr;

typedef struct
{
  Elf64_Word sh_name; /* Section name (string tbl index) */
  Elf64_Word sh_type; /* Section type */
  Elf64_Xword sh_flags; /* Section flags */
  Elf64_Addr sh_addr; /* Section virtual addr at execution */
  Elf64_Off sh_offset; /* Section file offset */
  Elf64_Xword sh_size; /* Section size in bytes */
  Elf64_Word sh_link; /* Link to another section */
  Elf64_Word sh_info; /* Additional section information */
  Elf64_Xword sh_addralign; /* Section alignment */
  Elf64_Xword sh_entsize; /* Entry size if section holds table */
} Elf64_Shdr;

/* Special section indices.  */
# 428 "/usr/include/elf.h" 3 4
/* Legal values for sh_type (section type).  */
# 468 "/usr/include/elf.h" 3 4
/* Legal values for sh_flags (section flags).  */
# 490 "/usr/include/elf.h" 3 4
/* Section compression header.  Used when SHF_COMPRESSED is set.  */

typedef struct
{
  Elf32_Word ch_type; /* Compression format.  */
  Elf32_Word ch_size; /* Uncompressed data size.  */
  Elf32_Word ch_addralign; /* Uncompressed data alignment.  */
} Elf32_Chdr;

typedef struct
{
  Elf64_Word ch_type; /* Compression format.  */
  Elf64_Word ch_reserved;
  Elf64_Xword ch_size; /* Uncompressed data size.  */
  Elf64_Xword ch_addralign; /* Uncompressed data alignment.  */
} Elf64_Chdr;

/* Legal values for ch_type (compression algorithm).  */







/* Section group handling.  */


/* Symbol table entry.  */

typedef struct
{
  Elf32_Word st_name; /* Symbol name (string tbl index) */
  Elf32_Addr st_value; /* Symbol value */
  Elf32_Word st_size; /* Symbol size */
  unsigned char st_info; /* Symbol type and binding */
  unsigned char st_other; /* Symbol visibility */
  Elf32_Section st_shndx; /* Section index */
} Elf32_Sym;

typedef struct
{
  Elf64_Word st_name; /* Symbol name (string tbl index) */
  unsigned char st_info; /* Symbol type and binding */
  unsigned char st_other; /* Symbol visibility */
  Elf64_Section st_shndx; /* Section index */
  Elf64_Addr st_value; /* Symbol value */
  Elf64_Xword st_size; /* Symbol size */
} Elf64_Sym;

/* The syminfo section if available contains additional information about
   every dynamic symbol.  */

typedef struct
{
  Elf32_Half si_boundto; /* Direct bindings, symbol bound to */
  Elf32_Half si_flags; /* Per symbol flags */
} Elf32_Syminfo;

typedef struct
{
  Elf64_Half si_boundto; /* Direct bindings, symbol bound to */
  Elf64_Half si_flags; /* Per symbol flags */
} Elf64_Syminfo;

/* Possible values for si_boundto.  */




/* Possible bitmasks for si_flags.  */





/* Syminfo version values.  */





/* How to extract and insert information held in the st_info field.  */





/* Both Elf32_Sym and Elf64_Sym use the same one-byte st_info field.  */




/* Legal values for ST_BIND subfield of st_info (symbol binding).  */
# 595 "/usr/include/elf.h" 3 4
/* Legal values for ST_TYPE subfield of st_info (symbol type).  */
# 612 "/usr/include/elf.h" 3 4
/* Symbol table indices are found in the hash buckets and chain table
   of a symbol hash table section.  This special index value indicates
   the end of a chain, meaning no further symbols are found in that bucket.  */




/* How to extract and insert information held in the st_other field.  */



/* For ELF64 the definitions are the same.  */


/* Symbol visibility specification encoded in the st_other field.  */






/* Relocation table entry without addend (in section of type SHT_REL).  */

typedef struct
{
  Elf32_Addr r_offset; /* Address */
  Elf32_Word r_info; /* Relocation type and symbol index */
} Elf32_Rel;

/* I have seen two different definitions of the Elf64_Rel and
   Elf64_Rela structures, so we'll leave them out until Novell (or
   whoever) gets their act together.  */
/* The following, at least, is used on Sparc v9, MIPS, and Alpha.  */

typedef struct
{
  Elf64_Addr r_offset; /* Address */
  Elf64_Xword r_info; /* Relocation type and symbol index */
} Elf64_Rel;

/* Relocation table entry with addend (in section of type SHT_RELA).  */

typedef struct
{
  Elf32_Addr r_offset; /* Address */
  Elf32_Word r_info; /* Relocation type and symbol index */
  Elf32_Sword r_addend; /* Addend */
} Elf32_Rela;

typedef struct
{
  Elf64_Addr r_offset; /* Address */
  Elf64_Xword r_info; /* Relocation type and symbol index */
  Elf64_Sxword r_addend; /* Addend */
} Elf64_Rela;

/* RELR relocation table entry */

typedef Elf32_Word Elf32_Relr;
typedef Elf64_Xword Elf64_Relr;

/* How to extract and insert information held in the r_info field.  */
# 683 "/usr/include/elf.h" 3 4
/* Program segment header.  */

typedef struct
{
  Elf32_Word p_type; /* Segment type */
  Elf32_Off p_offset; /* Segment file offset */
  Elf32_Addr p_vaddr; /* Segment virtual address */
  Elf32_Addr p_paddr; /* Segment physical address */
  Elf32_Word p_filesz; /* Segment size in file */
  Elf32_Word p_memsz; /* Segment size in memory */
  Elf32_Word p_flags; /* Segment flags */
  Elf32_Word p_align; /* Segment alignment */
} Elf32_Phdr;

typedef struct
{
  Elf64_Word p_type; /* Segment type */
  Elf64_Word p_flags; /* Segment flags */
  Elf64_Off p_offset; /* Segment file offset */
  Elf64_Addr p_vaddr; /* Segment virtual address */
  Elf64_Addr p_paddr; /* Segment physical address */
  Elf64_Xword p_filesz; /* Segment size in file */
  Elf64_Xword p_memsz; /* Segment size in memory */
  Elf64_Xword p_align; /* Segment alignment */
} Elf64_Phdr;

/* Special value for e_phnum.  This indicates that the real number of
   program headers is too large to fit into e_phnum.  Instead the real
   value is in the field sh_info of section 0.  */



/* Legal values for p_type (segment type).  */
# 740 "/usr/include/elf.h" 3 4
/* Legal values for p_flags (segment flags).  */







/* Legal values for note segment descriptor types for core files. */
# 861 "/usr/include/elf.h" 3 4
/* Legal values for the note segment descriptor types for object files.  */




/* Dynamic section entry.  */

typedef struct
{
  Elf32_Sword d_tag; /* Dynamic entry type */
  union
    {
      Elf32_Word d_val; /* Integer value */
      Elf32_Addr d_ptr; /* Address value */
    } d_un;
} Elf32_Dyn;

typedef struct
{
  Elf64_Sxword d_tag; /* Dynamic entry type */
  union
    {
      Elf64_Xword d_val; /* Integer value */
      Elf64_Addr d_ptr; /* Address value */
    } d_un;
} Elf64_Dyn;

/* Legal values for d_tag (dynamic entry type).  */
# 935 "/usr/include/elf.h" 3 4
/* DT_* entries which fall between DT_VALRNGHI & DT_VALRNGLO use the
   Dyn.d_un.d_val field of the Elf*_Dyn structure.  This follows Sun's
   approach.  */
# 955 "/usr/include/elf.h" 3 4
/* DT_* entries which fall between DT_ADDRRNGHI & DT_ADDRRNGLO use the
   Dyn.d_un.d_ptr field of the Elf*_Dyn structure.

   If any adjustment is made to the ELF object after it has been
   built these entries will need to be adjusted.  */
# 976 "/usr/include/elf.h" 3 4
/* The versioning entry types.  The next are defined as part of the
   GNU extension.  */





/* These were chosen by Sun.  */
# 994 "/usr/include/elf.h" 3 4
/* Sun added these machine-independent extensions in the "processor-specific"
   range.  Be compatible.  */





/* Values of `d_un.d_val' in the DT_FLAGS entry.  */






/* State flags selectable in the `d_un.d_val' element of the DT_FLAGS_1
   entry in the dynamic section.  */
# 1042 "/usr/include/elf.h" 3 4
/* Flags for the feature selection in DT_FEATURE_1.  */



/* Flags in the DT_POSFLAG_1 entry effecting only the next DT_* entry.  */




/* Version definition sections.  */

typedef struct
{
  Elf32_Half vd_version; /* Version revision */
  Elf32_Half vd_flags; /* Version information */
  Elf32_Half vd_ndx; /* Version Index */
  Elf32_Half vd_cnt; /* Number of associated aux entries */
  Elf32_Word vd_hash; /* Version name hash value */
  Elf32_Word vd_aux; /* Offset in bytes to verdaux array */
  Elf32_Word vd_next; /* Offset in bytes to next verdef
					   entry */
} Elf32_Verdef;

typedef struct
{
  Elf64_Half vd_version; /* Version revision */
  Elf64_Half vd_flags; /* Version information */
  Elf64_Half vd_ndx; /* Version Index */
  Elf64_Half vd_cnt; /* Number of associated aux entries */
  Elf64_Word vd_hash; /* Version name hash value */
  Elf64_Word vd_aux; /* Offset in bytes to verdaux array */
  Elf64_Word vd_next; /* Offset in bytes to next verdef
					   entry */
} Elf64_Verdef;


/* Legal values for vd_version (version revision).  */




/* Legal values for vd_flags (version information flags).  */




/* Versym symbol index values.  */





/* Auxiliary version information.  */

typedef struct
{
  Elf32_Word vda_name; /* Version or dependency names */
  Elf32_Word vda_next; /* Offset in bytes to next verdaux
					   entry */
} Elf32_Verdaux;

typedef struct
{
  Elf64_Word vda_name; /* Version or dependency names */
  Elf64_Word vda_next; /* Offset in bytes to next verdaux
					   entry */
} Elf64_Verdaux;


/* Version dependency section.  */

typedef struct
{
  Elf32_Half vn_version; /* Version of structure */
  Elf32_Half vn_cnt; /* Number of associated aux entries */
  Elf32_Word vn_file; /* Offset of filename for this
					   dependency */
  Elf32_Word vn_aux; /* Offset in bytes to vernaux array */
  Elf32_Word vn_next; /* Offset in bytes to next verneed
					   entry */
} Elf32_Verneed;

typedef struct
{
  Elf64_Half vn_version; /* Version of structure */
  Elf64_Half vn_cnt; /* Number of associated aux entries */
  Elf64_Word vn_file; /* Offset of filename for this
					   dependency */
  Elf64_Word vn_aux; /* Offset in bytes to vernaux array */
  Elf64_Word vn_next; /* Offset in bytes to next verneed
					   entry */
} Elf64_Verneed;


/* Legal values for vn_version (version revision).  */




/* Auxiliary needed version information.  */

typedef struct
{
  Elf32_Word vna_hash; /* Hash value of dependency name */
  Elf32_Half vna_flags; /* Dependency specific information */
  Elf32_Half vna_other; /* Unused */
  Elf32_Word vna_name; /* Dependency name string offset */
  Elf32_Word vna_next; /* Offset in bytes to next vernaux
					   entry */
} Elf32_Vernaux;

typedef struct
{
  Elf64_Word vna_hash; /* Hash value of dependency name */
  Elf64_Half vna_flags; /* Dependency specific information */
  Elf64_Half vna_other; /* Unused */
  Elf64_Word vna_name; /* Dependency name string offset */
  Elf64_Word vna_next; /* Offset in bytes to next vernaux
					   entry */
} Elf64_Vernaux;


/* Auxiliary vector.  */

/* This vector is normally only used by the program interpreter.  The
   usual definition in an ABI supplement uses the name auxv_t.  The
   vector is not usually defined in a standard <elf.h> file, but it
   can't hurt.  We rename it to avoid conflicts.  The sizes of these
   types are an arrangement between the exec server and the program
   interpreter, so we don't fully specify them here.  */

typedef struct
{
  uint32_t a_type; /* Entry type */
  union
    {
      uint32_t a_val; /* Integer value */
      /* We use to have pointer elements added here.  We cannot do that,
	 though, since it does not work when using 32-bit definitions
	 on 64-bit platforms and vice versa.  */
    } a_un;
} Elf32_auxv_t;

typedef struct
{
  uint64_t a_type; /* Entry type */
  union
    {
      uint64_t a_val; /* Integer value */
      /* We use to have pointer elements added here.  We cannot do that,
	 though, since it does not work when using 32-bit definitions
	 on 64-bit platforms and vice versa.  */
    } a_un;
} Elf64_auxv_t;

/* Legal values for a_type (entry type).  */
# 1216 "/usr/include/elf.h" 3 4
/* Some more special a_type values describing the hardware.  */




/* This entry gives some information about the FPU initialization
   performed by the kernel.  */


/* Cache block sizes.  */




/* A special ignored value for PPC, used by the kernel to control the
   interpretation of the AUXV. Must be > 16.  */
# 1246 "/usr/include/elf.h" 3 4
/* More machine-dependent hints about processor capabilities.  */





/* Pointer to the global system page used for system calls and other
   nice things.  */



/* Shapes of the caches.  Bits 0-3 contains associativity; bits 4-7 contains
   log2 of line size; mask those to get cache size.  */





/* Shapes of the caches, with more room to describe them.
   *GEOMETRY are comprised of cache line size in bytes in the bottom 16 bits
   and the cache associativity in the next 16 bits.  */
# 1278 "/usr/include/elf.h" 3 4
/* Note section contents.  Each entry in the note section begins with
   a header of a fixed form.  */

typedef struct
{
  Elf32_Word n_namesz; /* Length of the note's name.  */
  Elf32_Word n_descsz; /* Length of the note's descriptor.  */
  Elf32_Word n_type; /* Type of the note.  */
} Elf32_Nhdr;

typedef struct
{
  Elf64_Word n_namesz; /* Length of the note's name.  */
  Elf64_Word n_descsz; /* Length of the note's descriptor.  */
  Elf64_Word n_type; /* Type of the note.  */
} Elf64_Nhdr;

/* Known names of notes.  */

/* Solaris entries in the note section have this name.  */


/* Note entries for GNU systems have this name.  */


/* Note entries for freedesktop.org have this name.  */


/* Defined types of notes for Solaris.  */

/* Value of descriptor (one word) is desired pagesize for the binary.  */



/* Defined note types for GNU systems.  */

/* ABI information.  The descriptor consists of words:
   word 0: OS descriptor
   word 1: major version of the ABI
   word 2: minor version of the ABI
   word 3: subminor version of the ABI
*/



/* Known OSes.  These values can appear in word 0 of an
   NT_GNU_ABI_TAG note section entry.  */





/* Synthetic hwcap information.  The descriptor begins with two words:
   word 0: number of entries
   word 1: bitmask of enabled entries
   Then follow variable-length entries, one byte followed by a
   '\0'-terminated hwcap name string.  The byte gives the bit
   number to test if enabled, (1U << bit) & bitmask.  */


/* Build ID bits as generated by ld --build-id.
   The descriptor consists of any nonzero number of bytes.  */


/* Version note generated by GNU gold containing a version string.  */


/* Program property.  */


/* Packaging metadata as defined on
   https://systemd.io/ELF_PACKAGE_METADATA/ */


/* dlopen metadata as defined on
   https://systemd.io/ELF_DLOPEN_METADATA/ */


/* Note section name of program property.   */


/* Values used in GNU .note.gnu.property notes (NT_GNU_PROPERTY_TYPE_0).  */

/* Stack size.  */

/* No copy relocation on protected data symbol.  */


/* A 4-byte unsigned integer property: A bit is set if it is set in all
   relocatable inputs.  */



/* A 4-byte unsigned integer property: A bit is set if it is set in any
   relocatable inputs.  */



/* The needed properties by the object file.  */


/* Set if the object file requires canonical function pointers and
   cannot be used with copy relocation.  */


/* Processor-specific semantics, lo */

/* Processor-specific semantics, hi */

/* Application-specific semantics, lo */

/* Application-specific semantics, hi */


/* AArch64 specific GNU properties.  */






/* The x86 instruction sets indicated by the corresponding bits are
   used in program.  Their support in the hardware is optional.  */

/* The x86 instruction sets indicated by the corresponding bits are
   used in program and they must be supported by the hardware.   */

/* X86 processor-specific features used in program.  */


/* GNU_PROPERTY_X86_ISA_1_BASELINE: CMOV, CX8 (cmpxchg8b), FPU (fld),
   MMX, OSFXSR (fxsave), SCE (syscall), SSE and SSE2.  */

/* GNU_PROPERTY_X86_ISA_1_V2: GNU_PROPERTY_X86_ISA_1_BASELINE,
   CMPXCHG16B (cmpxchg16b), LAHF-SAHF (lahf), POPCNT (popcnt), SSE3,
   SSSE3, SSE4.1 and SSE4.2.  */

/* GNU_PROPERTY_X86_ISA_1_V3: GNU_PROPERTY_X86_ISA_1_V2, AVX, AVX2, BMI1,
   BMI2, F16C, FMA, LZCNT, MOVBE, XSAVE.  */

/* GNU_PROPERTY_X86_ISA_1_V4: GNU_PROPERTY_X86_ISA_1_V3, AVX512F,
   AVX512BW, AVX512CD, AVX512DQ and AVX512VL.  */


/* This indicates that all executable sections are compatible with
   IBT.  */

/* This indicates that all executable sections are compatible with
   SHSTK.  */


/* Move records.  */
typedef struct
{
  Elf32_Xword m_value; /* Symbol value.  */
  Elf32_Word m_info; /* Size and index.  */
  Elf32_Word m_poffset; /* Symbol offset.  */
  Elf32_Half m_repeat; /* Repeat count.  */
  Elf32_Half m_stride; /* Stride info.  */
} Elf32_Move;

typedef struct
{
  Elf64_Xword m_value; /* Symbol value.  */
  Elf64_Xword m_info; /* Size and index.  */
  Elf64_Xword m_poffset; /* Symbol offset.  */
  Elf64_Half m_repeat; /* Repeat count.  */
  Elf64_Half m_stride; /* Stride info.  */
} Elf64_Move;

/* Macro to construct move records.  */
# 1458 "/usr/include/elf.h" 3 4
/* Motorola 68k specific definitions.  */

/* Values for Elf32_Ehdr.e_flags.  */


/* m68k relocs.  */
# 1509 "/usr/include/elf.h" 3 4
/* Keep this the last entry.  */


/* Intel 80386 specific definitions.  */

/* i386 relocs.  */
# 1576 "/usr/include/elf.h" 3 4
/* Keep this the last entry.  */


/* SUN SPARC specific definitions.  */

/* Legal values for ST_TYPE subfield of st_info (symbol type).  */



/* Values for Elf64_Ehdr.e_flags.  */
# 1598 "/usr/include/elf.h" 3 4
/* SPARC relocs.  */
# 1625 "/usr/include/elf.h" 3 4
/* Additional Sparc64 relocs.  */
# 1697 "/usr/include/elf.h" 3 4
/* Keep this the last entry.  */


/* For Sparc64, legal values for d_tag of Elf64_Dyn.  */




/* MIPS R3000 specific definitions.  */

/* Legal values for e_flags field of Elf32_Ehdr.  */
# 1734 "/usr/include/elf.h" 3 4
/* Legal values for MIPS architecture level.  */
# 1778 "/usr/include/elf.h" 3 4
/* The following are unofficial names and should not be used.  */
# 1788 "/usr/include/elf.h" 3 4
/* Special section indices.  */







/* Legal values for sh_type field of Elf32_Shdr.  */
# 1840 "/usr/include/elf.h" 3 4
/* Legal values for sh_flags field of Elf32_Shdr.  */
# 1852 "/usr/include/elf.h" 3 4
/* Symbol tables.  */

/* MIPS specific values for `st_other'.  */







/* MIPS specific values for `st_info'.  */


/* Entries found in sections of type SHT_MIPS_GPTAB.  */

typedef union
{
  struct
    {
      Elf32_Word gt_current_g_value; /* -G value used for compilation.  */
      Elf32_Word gt_unused; /* Not used.  */
    } gt_header; /* First entry in section.  */
  struct
    {
      Elf32_Word gt_g_value; /* If this value were used for -G.  */
      Elf32_Word gt_bytes; /* This many bytes would be used.  */
    } gt_entry; /* Subsequent entries in section.  */
} Elf32_gptab;

/* Entry found in sections of type SHT_MIPS_REGINFO.  */

typedef struct
{
  Elf32_Word ri_gprmask; /* General registers used.  */
  Elf32_Word ri_cprmask[4]; /* Coprocessor registers used.  */
  Elf32_Sword ri_gp_value; /* $gp register value.  */
} Elf32_RegInfo;

/* Entries found in sections of type SHT_MIPS_OPTIONS.  */

typedef struct
{
  unsigned char kind; /* Determines interpretation of the
				   variable part of descriptor.  */
  unsigned char size; /* Size of descriptor, including header.  */
  Elf32_Section section; /* Section header index of section affected,
				   0 for global options.  */
  Elf32_Word info; /* Kind-specific information.  */
} Elf_Options;

/* Values for `kind' field in Elf_Options.  */
# 1914 "/usr/include/elf.h" 3 4
/* Values for `info' in Elf_Options for ODK_EXCEPTIONS entries.  */
# 1930 "/usr/include/elf.h" 3 4
/* Masks for `info' in Elf_Options for an ODK_HWPATCH entry.  */
# 1941 "/usr/include/elf.h" 3 4
/* Entry found in `.options' section.  */

typedef struct
{
  Elf32_Word hwp_flags1; /* Extra flags.  */
  Elf32_Word hwp_flags2; /* Extra flags.  */
} Elf_Options_Hw;

/* Masks for `info' in ElfOptions for ODK_HWAND and ODK_HWOR entries.  */




/* MIPS relocs.  */
# 2066 "/usr/include/elf.h" 3 4
/* Keep this the last entry.  */


/* Legal values for p_type field of Elf32_Phdr.  */






/* Special program header types.  */



/* Legal values for d_tag field of Elf32_Dyn.  */
# 2134 "/usr/include/elf.h" 3 4
/* The address of .got.plt in an executable using the new non-PIC ABI.  */

/* The base of the PLT in an executable using the new non-PIC ABI if that
   PLT is writable.  For a non-writable PLT, this is omitted or has a zero
   value.  */

/* An alternative description of the classic MIPS RLD_MAP that is usable
   in a PIE as it stores a relative offset from the address of the tag
   rather than an absolute address.  */

/* GNU-style hash table with xlat.  */



/* Legal values for DT_MIPS_FLAGS Elf32_Dyn entry.  */
# 2167 "/usr/include/elf.h" 3 4
/* Entries found in sections of type SHT_MIPS_LIBLIST.  */

typedef struct
{
  Elf32_Word l_name; /* Name (string table index) */
  Elf32_Word l_time_stamp; /* Timestamp */
  Elf32_Word l_checksum; /* Checksum */
  Elf32_Word l_version; /* Interface version */
  Elf32_Word l_flags; /* Flags */
} Elf32_Lib;

typedef struct
{
  Elf64_Word l_name; /* Name (string table index) */
  Elf64_Word l_time_stamp; /* Timestamp */
  Elf64_Word l_checksum; /* Checksum */
  Elf64_Word l_version; /* Interface version */
  Elf64_Word l_flags; /* Flags */
} Elf64_Lib;


/* Legal values for l_flags.  */
# 2198 "/usr/include/elf.h" 3 4
/* Entries found in sections of type SHT_MIPS_CONFLICT.  */

typedef Elf32_Addr Elf32_Conflict;

typedef struct
{
  /* Version of flags structure.  */
  Elf32_Half version;
  /* The level of the ISA: 1-5, 32, 64.  */
  unsigned char isa_level;
  /* The revision of ISA: 0 for MIPS V and below, 1-n otherwise.  */
  unsigned char isa_rev;
  /* The size of general purpose registers.  */
  unsigned char gpr_size;
  /* The size of co-processor 1 registers.  */
  unsigned char cpr1_size;
  /* The size of co-processor 2 registers.  */
  unsigned char cpr2_size;
  /* The floating-point ABI.  */
  unsigned char fp_abi;
  /* Processor-specific extension.  */
  Elf32_Word isa_ext;
  /* Mask of ASEs used.  */
  Elf32_Word ases;
  /* Mask of general flags.  */
  Elf32_Word flags1;
  Elf32_Word flags2;
} Elf_MIPS_ABIFlags_v0;

/* Values for the register size bytes of an abi flags structure.  */






/* Masks for the ases word of an ABI flags structure.  */
# 2251 "/usr/include/elf.h" 3 4
/* Values for the isa_ext word of an ABI flags structure.  */
# 2272 "/usr/include/elf.h" 3 4
/* Masks for the flags1 word of an ABI flags structure.  */


/* Object attribute values.  */
enum
{
  /* Not tagged or not using any ABIs affected by the differences.  */
  Val_GNU_MIPS_ABI_FP_ANY = 0,
  /* Using hard-float -mdouble-float.  */
  Val_GNU_MIPS_ABI_FP_DOUBLE = 1,
  /* Using hard-float -msingle-float.  */
  Val_GNU_MIPS_ABI_FP_SINGLE = 2,
  /* Using soft-float.  */
  Val_GNU_MIPS_ABI_FP_SOFT = 3,
  /* Using -mips32r2 -mfp64.  */
  Val_GNU_MIPS_ABI_FP_OLD_64 = 4,
  /* Using -mfpxx.  */
  Val_GNU_MIPS_ABI_FP_XX = 5,
  /* Using -mips32r2 -mfp64.  */
  Val_GNU_MIPS_ABI_FP_64 = 6,
  /* Using -mips32r2 -mfp64 -mno-odd-spreg.  */
  Val_GNU_MIPS_ABI_FP_64A = 7,
  /* Maximum allocated FP ABI value.  */
  Val_GNU_MIPS_ABI_FP_MAX = 7
};

/* HPPA specific definitions.  */

/* Legal values for e_flags field of Elf32_Ehdr.  */
# 2311 "/usr/include/elf.h" 3 4
/* Defined values for `e_flags & EF_PARISC_ARCH' are:  */





/* Additional section indices.  */





/* Legal values for sh_type field of Elf32_Shdr.  */





/* Legal values for sh_flags field of Elf32_Shdr.  */





/* Legal values for ST_TYPE subfield of st_info (symbol type).  */






/* HPPA relocs.  */
# 2455 "/usr/include/elf.h" 3 4
/* Legal values for p_type field of Elf32_Phdr/Elf64_Phdr.  */
# 2476 "/usr/include/elf.h" 3 4
/* Legal values for p_flags field of Elf32_Phdr/Elf64_Phdr.  */
# 2489 "/usr/include/elf.h" 3 4
/* Alpha specific definitions.  */

/* Legal values for e_flags field of Elf64_Ehdr.  */




/* Legal values for sh_type field of Elf64_Shdr.  */

/* These two are primerily concerned with ECOFF debugging info.  */



/* Legal values for sh_flags field of Elf64_Shdr.  */



/* Legal values for st_other field of Elf64_Sym.  */



/* Alpha relocs.  */
# 2545 "/usr/include/elf.h" 3 4
/* Keep this the last entry.  */


/* Magic values of the LITUSE relocation addend.  */







/* Legal values for d_tag of Elf64_Dyn.  */



/* PowerPC specific declarations */

/* Values for Elf32/64_Ehdr.e_flags.  */


/* Cygnus local bits below */




/* PowerPC relocations defined by the ABIs */
# 2609 "/usr/include/elf.h" 3 4
/* PowerPC relocations defined for the TLS access ABI.  */
# 2641 "/usr/include/elf.h" 3 4
/* The remaining relocs are from the Embedded ELF ABI, and are not
   in the SVR4 ELF ABI.  */
# 2660 "/usr/include/elf.h" 3 4
/* Diab tool relocations.  */







/* GNU extension to support local ifunc.  */


/* GNU relocs used in PIC code sequences.  */





/* This is a phony reloc to handle any old fashioned TOC16 references
   that may still be in object files.  */


/* PowerPC specific values for the Dyn d_tag field.  */




/* PowerPC specific values for the DT_PPC_OPT Dyn entry.  */


/* PowerPC64 relocations defined by the ABIs */
# 2759 "/usr/include/elf.h" 3 4
/* PowerPC64 relocations defined for the TLS access ABI.  */
# 2804 "/usr/include/elf.h" 3 4
/* Added when HA and HI relocs were changed to report overflows.  */







/* GNU extension to support local ifunc.  */







/* e_flags bits specifying ABI.
   1 for original function descriptor using ABI,
   2 for revised ABI without function descriptors,
   0 for unspecified or not using any features affected by the differences.  */


/* PowerPC64 specific values for the Dyn d_tag field.  */






/* PowerPC64 specific bits in the DT_PPC64_OPT Dyn entry.  */




/* PowerPC64 specific values for the Elf64_Sym st_other field.  */






/* ARM specific declarations */

/* Processor specific flags for the ELF header e_flags field.  */
# 2865 "/usr/include/elf.h" 3 4
/* Other constants defined in the ARM ELF spec. version B-01.  */
/* NB. These conflict with values defined above.  */





/* Constants defined in AAELF.  */
# 2884 "/usr/include/elf.h" 3 4
/* Additional symbol types for Thumb.  */



/* ARM-specific values for sh_flags */




/* ARM-specific program header flags */





/* Processor specific values for the Phdr p_type field.  */


/* Processor specific values for the Shdr sh_type field.  */





/* AArch64 relocs.  */
# 3035 "/usr/include/elf.h" 3 4
/* MTE memory tag segment type.  */


/* AArch64 specific values for the Dyn d_tag field.  */





/* AArch64 specific values for the st_other field.  */


/* ARM relocs.  */
# 3212 "/usr/include/elf.h" 3 4
/* Keep this the last entry.  */


/* C-SKY */
# 3238 "/usr/include/elf.h" 3 4
                                        /* ((S + A) >> 16) & 0xffff */


                                        /* ((GOT + A - P) >> 16) & 0xffff */


                                        /* ((S + A - GOT) >> 16) & 0xffff */



                                        /* (G >> 16) & 0xffff */



                                        /* (G >> 16) & 0xffff */


                                        /* (GOT + G * 4) & 0xffff */


                                        /* ((GOT + G * 4) >> 16) & 0xFFFF */
# 3279 "/usr/include/elf.h" 3 4
/* C-SKY elf header definition.  */







/* C-SKY attributes section.  */


/* IA-64 specific declarations.  */

/* Processor specific flags for the Ehdr e_flags field.  */




/* Processor specific values for the Phdr p_type field.  */






/* Processor specific flags for the Phdr p_flags field.  */


/* Processor specific values for the Shdr sh_type field.  */



/* Processor specific flags for the Shdr sh_flags field.  */



/* Processor specific values for the Dyn d_tag field.  */



/* IA-64 relocations.  */
# 3402 "/usr/include/elf.h" 3 4
/* SH specific declarations */

/* Processor specific flags for the ELF header e_flags field.  */
# 3428 "/usr/include/elf.h" 3 4
/* SH relocs.  */
# 3466 "/usr/include/elf.h" 3 4
/* Keep this the last entry.  */


/* S/390 specific definitions.  */

/* Valid values for the e_flags field.  */



/* Additional s390 relocs */
# 3557 "/usr/include/elf.h" 3 4
/* Keep this the last entry.  */



/* CRIS relocations.  */
# 3586 "/usr/include/elf.h" 3 4
/* AMD x86-64 relocations.  */
# 3634 "/usr/include/elf.h" 3 4
     /* 39 Reserved was R_X86_64_PC32_BND */
     /* 40 Reserved was R_X86_64_PLT32_BND */
# 3644 "/usr/include/elf.h" 3 4
/* x86-64 sh_type values.  */


/* x86-64 d_tag values.  */





/* AM33 relocations.  */
# 3697 "/usr/include/elf.h" 3 4
/* M32R relocs.  */
# 3711 "/usr/include/elf.h" 3 4
/* M32R relocs use SHT_RELA.  */
# 3752 "/usr/include/elf.h" 3 4
/* MicroBlaze relocations */
# 3784 "/usr/include/elf.h" 3 4
/* Legal values for d_tag (dynamic entry type).  */


/* Nios II relocations.  */
# 3836 "/usr/include/elf.h" 3 4
/* TILEPro relocations.  */
# 3893 "/usr/include/elf.h" 3 4
/* Relocs 56-59 are currently not defined.  */
# 3934 "/usr/include/elf.h" 3 4
/* TILE-Gx relocations.  */
# 4025 "/usr/include/elf.h" 3 4
/* Relocs 90-91 are currently not defined.  */
# 4038 "/usr/include/elf.h" 3 4
/* Relocs 104-105 are currently not defined.  */
# 4061 "/usr/include/elf.h" 3 4
/* RISC-V ELF Flags */
# 4071 "/usr/include/elf.h" 3 4
/* RISC-V relocations.  */
# 4132 "/usr/include/elf.h" 3 4
/* RISC-V specific values for the st_other field.  */



/* RISC-V specific values for the sh_type field.  */


/* RISC-V specific values for the p_type field (deprecated).  */


/* RISC-V specific values for the d_tag field.  */


/* BPF specific declarations.  */





/* Imagination Meta specific relocations. */
# 4160 "/usr/include/elf.h" 3 4
/* Backward compatibility */
# 4175 "/usr/include/elf.h" 3 4
/* GNU */



/* PIC relocations */
# 4196 "/usr/include/elf.h" 3 4
/* TLS relocations */
# 4213 "/usr/include/elf.h" 3 4
/* NDS32 relocations.  */
# 4223 "/usr/include/elf.h" 3 4
/* LoongArch ELF Flags */






/* LoongArch specific dynamic relocations */
# 4247 "/usr/include/elf.h" 3 4
/* Reserved for future relocs that the dynamic linker must understand.  */

/* used by the static linker for relocating .text.  */
# 4278 "/usr/include/elf.h" 3 4
/* used by the static linker for relocating non .text.  */
# 4292 "/usr/include/elf.h" 3 4
/* reserved 59-63 */
# 4358 "/usr/include/elf.h" 3 4
/* ARC specific declarations.  */

/* Processor specific flags for the Ehdr e_flags field.  */




/* Processor specific values for the Shdr sh_type field.  */


/* ARCompact/ARCv2 specific relocs.  */
# 4446 "/usr/include/elf.h" 3 4
/* OpenRISC 1000 specific relocs.  */
# 18 "all.c" 2
# 1 "/usr/include/endian.h" 1 3 4
/* Copyright (C) 1992-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






/* Get the definitions of __*_ENDIAN, __BYTE_ORDER, and __FLOAT_WORD_ORDER.  */
# 19 "all.c" 2
# 1 "/usr/include/envz.h" 1 3 4
/* Routines for dealing with '\0' separated environment vectors
   Copyright (C) 1995-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/envz.h" 3 4
/* Envz's are argz's too, and should be created etc., using the same
   routines.  */




/* Returns a pointer to the entry in ENVZ for NAME, or 0 if there is none.  */
extern char *envz_entry (const char *__restrict __envz, size_t __envz_len,
    const char *__restrict __name)
                               ;

/* Returns a pointer to the value portion of the entry in ENVZ for NAME, or 0
   if there is none.  */
extern char *envz_get (const char *__restrict __envz, size_t __envz_len,
         const char *__restrict __name)
                               ;

/* Adds an entry for NAME with value VALUE to ENVZ & ENVZ_LEN.  If an entry
   with the same name already exists in ENVZ, it is removed.  If VALUE is
   NULL, then the new entry will a special null one, for which envz_get will
   return NULL, although envz_entry will still return an entry; this is handy
   because when merging with another envz, the null entry can override an
   entry in the other one.  Null entries can be removed with envz_strip ().  */
extern error_t envz_add (char **__restrict __envz,
    size_t *__restrict __envz_len,
    const char *__restrict __name,
    const char *__restrict __value) ;

/* Adds each entry in ENVZ2 to ENVZ & ENVZ_LEN, as if with envz_add().  If
   OVERRIDE is true, then values in ENVZ2 will supersede those with the same
   name in ENV, otherwise not.  */
extern error_t envz_merge (char **__restrict __envz,
      size_t *__restrict __envz_len,
      const char *__restrict __envz2,
      size_t __envz2_len, int __override) ;

/* Remove the entry for NAME from ENVZ & ENVZ_LEN, if any.  */
extern void envz_remove (char **__restrict __envz,
    size_t *__restrict __envz_len,
    const char *__restrict __name) ;

/* Remove null entries.  */
extern void envz_strip (char **__restrict __envz,
   size_t *__restrict __envz_len) ;
# 20 "all.c" 2
# 1 "/usr/include/err.h" 1 3 4
/* 4.4BSD utility functions for error messages.
   Copyright (C) 1995-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */







# 1 "/usr/bin/../lib/clang/21/include/stdarg.h" 1 3 4
/*===---- stdarg.h - Variable argument handling ----------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stdarg.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 26 "/usr/include/err.h" 2 3 4






/* Print "program: ", FORMAT, ": ", the standard error string for errno,
   and a newline, on stderr.  */
extern void warn (const char *__format, ...)
                                                           ;
extern void vwarn (const char *__format, __gnuc_va_list)
                                                           ;

/* Likewise, but without ": " and the standard error string.  */
extern void warnx (const char *__format, ...)
                                                    ;
extern void vwarnx (const char *__format, __gnuc_va_list)
                                                    ;

/* Likewise, and then exit with STATUS.  */
extern void err (int __status, const char *__format, ...)
                                                                         ;
extern void verr (int __status, const char *__format, __gnuc_va_list)
                                                                         ;
extern void errx (int __status, const char *__format, ...)
                                                                         ;
extern void verrx (int __status, const char *, __gnuc_va_list)
                                                                         ;
# 21 "all.c" 2

# 1 "/usr/include/error.h" 1 3 4
/* Declaration for error-reporting function
   Copyright (C) 1995-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 27 "/usr/include/error.h" 3 4
/* Print a message with `fprintf (stderr, FORMAT, ...)';
   if ERRNUM is nonzero, follow it with ": " and strerror (ERRNUM).
   If STATUS is nonzero, terminate the program with `exit (STATUS)'.  */

extern void error (int __status, int __errnum, const char *__format, ...)
                                                           ;

extern void error_at_line (int __status, int __errnum, const char *__fname,
      unsigned int __lineno, const char *__format, ...)
                                                           ;

/* If NULL, error will flush stdout, then print on stderr the program
   name, a colon and a space.  Otherwise, error will call this
   function without parameters instead.  */
extern void (*error_print_progname) (void);

/* This variable is incremented each time `error' is called.  */
extern unsigned int error_message_count;

/* Sometimes we want to have at most one error per line.  This
   variable controls whether this mode is selected or not.  */
extern int error_one_per_line;





/* Do not inline error and error_at_line when long double has the same
   size of double, nor when long double reuses the float128
   implementation, because that would invalidate the redirections to the
   compatibility functions.  */
# 23 "all.c" 2
# 1 "/usr/include/eti.h" 1 3 4
/****************************************************************************
 * Copyright 2020 Thomas E. Dickey                                          *
 * Copyright 1998-2002,2003 Free Software Foundation, Inc.                  *
 *                                                                          *
 * Permission is hereby granted, free of charge, to any person obtaining a  *
 * copy of this software and associated documentation files (the            *
 * "Software"), to deal in the Software without restriction, including      *
 * without limitation the rights to use, copy, modify, merge, publish,      *
 * distribute, distribute with modifications, sublicense, and/or sell       *
 * copies of the Software, and to permit persons to whom the Software is    *
 * furnished to do so, subject to the following conditions:                 *
 *                                                                          *
 * The above copyright notice and this permission notice shall be included  *
 * in all copies or substantial portions of the Software.                   *
 *                                                                          *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS  *
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF               *
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.   *
 * IN NO EVENT SHALL THE ABOVE COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,   *
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR    *
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR    *
 * THE USE OR OTHER DEALINGS IN THE SOFTWARE.                               *
 *                                                                          *
 * Except as contained in this notice, the name(s) of the above copyright   *
 * holders shall not be used in advertising or otherwise to promote the     *
 * sale, use or other dealings in this Software without prior written       *
 * authorization.                                                           *
 ****************************************************************************/

/****************************************************************************
 *   Author:  Juergen Pfeifer, 1995,1997                                    *
 ****************************************************************************/

/* $Id: eti.h,v 1.9 2020/02/02 23:34:34 tom Exp $ */
# 24 "all.c" 2
# 1 "/usr/include/execinfo.h" 1 3 4
/* Copyright (C) 1998-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 25 "/usr/include/execinfo.h" 3 4
/* Store up to SIZE return address of the current program state in
   ARRAY and return the exact number of values stored.  */
extern int backtrace (void **__array, int __size) ;


/* Return names of functions from the backtrace list in ARRAY in a newly
   malloc()ed memory block.  */
extern char **backtrace_symbols (void *const *__array, int __size)
                            ;


/* This function is similar to backtrace_symbols() but it writes the result
   immediately to a file.  */
extern void backtrace_symbols_fd (void *const *__array, int __size, int __fd)
                            ;
# 25 "all.c" 2
# 1 "/usr/include/fcntl.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 6.5 File Control Operations	<fcntl.h>
 */






/* This must be early so <bits/fcntl.h> can define types winningly.  */


/* Get __mode_t, __dev_t and __off_t  .*/


/* Get the definitions of O_*, F_*, FD_*: all the
   numbers and flag bits for `open', `fcntl', et al.  */
# 1 "/usr/include/bits/fcntl.h" 1 3 4
/* O_*, F_*, FD_* bit values for Linux/x86.
   Copyright (C) 2001-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 28 "/usr/include/bits/fcntl.h" 3 4
/* Not necessary, we always have 64-bit offsets.  */






struct flock
  {
    short int l_type; /* Type of lock: F_RDLCK, F_WRLCK, or F_UNLCK.	*/
    short int l_whence; /* Where `l_start' is relative to (like `lseek').  */

    __off_t l_start; /* Offset where the lock begins.  */
    __off_t l_len; /* Size of the locked area; zero means until EOF.  */




    __pid_t l_pid; /* Process holding the lock.  */
  };
# 60 "/usr/include/bits/fcntl.h" 3 4
/* Include generic Linux declarations.  */
# 1 "/usr/include/bits/fcntl-linux.h" 1 3 4
/* O_*, F_*, FD_* bit values for Linux.
   Copyright (C) 2001-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





/* This file contains shared definitions between Linux architectures
   and is included by <bits/fcntl.h> to declare them.  The various
   #ifndef cases allow the architecture specific file to define those
   values with different values.

   A minimal <bits/fcntl.h> contains just:

   struct flock {...}
   #ifdef __USE_LARGEFILE64
   struct flock64 {...}
   #endif
   #include <bits/fcntl-linux.h>
*/





/* open/fcntl.  */
# 120 "/usr/include/bits/fcntl-linux.h" 3 4
/* open file description locks.

   Usually record locks held by a process are released on *any* close and are
   not inherited across a fork.

   These cmd values will set locks that conflict with process-associated record
   locks, but are "owned" by the opened file description, not the process.
   This means that they are inherited across fork or clone with CLONE_FILES
   like BSD (flock) locks, and they are only released automatically when the
   last reference to the the file description against which they were acquired
   is put. */
# 154 "/usr/include/bits/fcntl-linux.h" 3 4
/* For now, Linux has no separate synchronicity options for read
   operations.  We define O_RSYNC therefore as the same as O_SYNC
   since this is a superset.  */
# 166 "/usr/include/bits/fcntl-linux.h" 3 4
/* Values for the second argument to `fcntl'.  */
# 220 "/usr/include/bits/fcntl-linux.h" 3 4
/* For F_[GET|SET]FD.  */



/* For posix fcntl() and `l_type' field of a `struct flock' for lockf().  */






/* For old implementation of BSD flock.  */
# 305 "/usr/include/bits/fcntl-linux.h" 3 4
/* Define some more compatibility macros to be backward compatible with
   BSD systems which did not managed to hide these kernel macros.  */
# 319 "/usr/include/bits/fcntl-linux.h" 3 4
/* Advise to `posix_fadvise'.  */
# 62 "/usr/include/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4

/* Detect if open needs mode as a third argument (or for openat as a fourth
   argument).  */







/* POSIX.1-2001 specifies that these types are defined by <fcntl.h>.
   Earlier POSIX standards permitted any type ending in `_t' to be defined
   by any POSIX header, so we don't conditionalize the definitions here.  */
# 73 "/usr/include/fcntl.h" 3 4
/* For XPG all symbols from <sys/stat.h> should also be available.  */
# 135 "/usr/include/fcntl.h" 3 4
/* XPG wants the following symbols.   <stdio.h> has the same definitions.  */






/* The constants AT_REMOVEDIR and AT_EACCESS have the same value.  AT_EACCESS
   is meaningful only to faccessat, while AT_REMOVEDIR is meaningful only to
   unlinkat.  The two functions do completely different things and therefore,
   the flags can be allowed to overlap.  For example, passing AT_REMOVEDIR to
   faccessat would be undefined behavior and thus treating it equivalent to
   AT_EACCESS is valid undefined behavior.  */
# 170 "/usr/include/fcntl.h" 3 4
/* Do the file control operation described by CMD on FD.
   The remaining arguments are interpreted depending on CMD.

   This function is a cancellation point and therefore not marked with
   __THROW.  */


extern int fcntl (int __fd, int __cmd, ...);
# 201 "/usr/include/fcntl.h" 3 4
/* Open FILE and return a new file descriptor for it, or -1 on error.
   OFLAG determines the type of access used.  If O_CREAT or O_TMPFILE is set
   in OFLAG, the third argument is taken as a `mode_t', the mode of the
   created file.

   This function is a cancellation point and therefore not marked with
   __THROW.  */

extern int open (const char *__file, int __oflag, ...) ;
# 249 "/usr/include/fcntl.h" 3 4
/* Create and open FILE, with mode MODE.  This takes an `int' MODE
   argument because that is what `mode_t' will be widened to.

   This function is a cancellation point and therefore not marked with
   __THROW.  */

extern int creat (const char *__file, mode_t __mode) ;
# 340 "/usr/include/fcntl.h" 3 4
/* Define some inlines helping to catch common problems.  */
# 26 "all.c" 2
# 1 "/usr/include/features-time64.h" 1 3 4
/* Features part to handle 64-bit time_t support.
   Copyright (C) 2021-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* We need to know the word size in order to check the time size.  */
# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 14 "/usr/include/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 21 "/usr/include/features-time64.h" 2 3 4
# 1 "/usr/include/bits/timesize.h" 1 3 4
/* Bit size of the time_t type at glibc build time, x86-64 and x32 case.
   Copyright (C) 2018-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 14 "/usr/include/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 20 "/usr/include/bits/timesize.h" 2 3 4





/* For others, time size is word size.  */
# 22 "/usr/include/features-time64.h" 2 3 4
# 27 "all.c" 2

# 1 "/usr/include/fenv.h" 1 3 4
/* Copyright (C) 1997-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * ISO C99 7.6: Floating-point environment	<fenv.h>
 */





# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */
# 35 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
# 45 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  Most but not all symbols enabled by that macro in TS
   18661-1 are enabled unconditionally in C23.  In C23, the symbols in
   Annex F still require a new feature test macro
   __STDC_WANT_IEC_60559_EXT__ instead (C23 does not define
   __STDC_WANT_IEC_60559_BFP_EXT__), while a few features from TS
   18661-1 are not included in C23 (and thus should depend on
   __STDC_WANT_IEC_60559_BFP_EXT__ even when C23 features are
   enabled).

   __GLIBC_USE (IEC_60559_BFP_EXT) controls those features from TS
   18661-1 not included in C23.

   __GLIBC_USE (IEC_60559_BFP_EXT_C23) controls those features from TS
   18661-1 that are also included in C23 (with no feature test macro
   required in C23).

   __GLIBC_USE (IEC_60559_EXT) controls those features from TS 18661-1
   that are included in C23 but conditional on
   __STDC_WANT_IEC_60559_EXT__.  (There are currently no features
   conditional on __STDC_WANT_IEC_60559_EXT__ that are not in TS
   18661-1.)  */
# 86 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  Other than the reduction
   functions, the symbols from this TS are enabled unconditionally in
   C23.  */
# 103 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
# 27 "/usr/include/fenv.h" 2 3 4

/* Get the architecture dependent definitions.  The following definitions
   are expected to be done:

   fenv_t	type for object representing an entire floating-point
		environment

   FE_DFL_ENV	macro of type pointer to fenv_t to be used as the argument
		to functions taking an argument of type fenv_t; in this
		case the default environment will be used

   fexcept_t	type for object representing the floating-point exception
		flags including status associated with the flags

   femode_t	type for object representing floating-point control modes

   FE_DFL_MODE	macro of type pointer to const femode_t to be used as the
		argument to fesetmode; in this case the default control
		modes will be used

   The following macros are defined iff the implementation supports this
   kind of exception.
   FE_INEXACT		inexact result
   FE_DIVBYZERO		division by zero
   FE_UNDERFLOW		result not representable due to underflow
   FE_OVERFLOW		result not representable due to overflow
   FE_INVALID		invalid operation

   FE_ALL_EXCEPT	bitwise OR of all supported exceptions

   The next macros are defined iff the appropriate rounding mode is
   supported by the implementation.
   FE_TONEAREST		round to nearest
   FE_UPWARD		round toward +Inf
   FE_DOWNWARD		round toward -Inf
   FE_TOWARDZERO	round toward 0
*/
# 1 "/usr/include/bits/fenv.h" 1 3 4
/* Copyright (C) 1997-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





/* Define bits representing the exception.  We use the bit positions
   of the appropriate bits in the FPU control word.  */
enum
  {
    FE_INVALID =

      0x01,
    __FE_DENORM = 0x02,
    FE_DIVBYZERO =

      0x04,
    FE_OVERFLOW =

      0x08,
    FE_UNDERFLOW =

      0x10,
    FE_INEXACT =

      0x20
  };




/* The ix87 FPU supports all of the four defined rounding modes.  We
   use again the bit positions in the FPU control word as the values
   for the appropriate macros.  */
enum
  {
    FE_TONEAREST =

      0,
    FE_DOWNWARD =

      0x400,
    FE_UPWARD =

      0x800,
    FE_TOWARDZERO =

      0xc00
  };


/* Type representing exception flags.  */
typedef unsigned short int fexcept_t;


/* Type representing floating-point environment.  This structure
   corresponds to the layout of the block written by the `fstenv'
   instruction and has additional fields for the contents of the MXCSR
   register as written by the `stmxcsr' instruction.  */
typedef struct
  {
    unsigned short int __control_word;
    unsigned short int __glibc_reserved1;
    unsigned short int __status_word;
    unsigned short int __glibc_reserved2;
    unsigned short int __tags;
    unsigned short int __glibc_reserved3;
    unsigned int __eip;
    unsigned short int __cs_selector;
    unsigned int __opcode:11;
    unsigned int __glibc_reserved4:5;
    unsigned int __data_offset;
    unsigned short int __data_selector;
    unsigned short int __glibc_reserved5;

    unsigned int __mxcsr;

  }
fenv_t;

/* If the default argument is used we use this value.  */
# 65 "/usr/include/fenv.h" 2 3 4



/* Floating-point exception handling.  */

/* Clear the supported exceptions represented by EXCEPTS.  */
extern int feclearexcept (int __excepts) ;

/* Store implementation-defined representation of the exception flags
   indicated by EXCEPTS in the object pointed to by FLAGP.  */
extern int fegetexceptflag (fexcept_t *__flagp, int __excepts) ;

/* Raise the supported exceptions represented by EXCEPTS.  */
extern int feraiseexcept (int __excepts) ;







/* Set complete status for exceptions indicated by EXCEPTS according to
   the representation in the object pointed to by FLAGP.  */
extern int fesetexceptflag (const fexcept_t *__flagp, int __excepts) ;

/* Determine which of subset of the exceptions specified by EXCEPTS are
   currently set.  */
extern int fetestexcept (int __excepts) ;
# 101 "/usr/include/fenv.h" 3 4
/* Rounding control.  */

/* Get current rounding direction.  */
extern int fegetround (void) ;

/* Establish the rounding direction represented by ROUND.  */
extern int fesetround (int __rounding_direction) ;


/* Floating-point environment.  */

/* Store the current floating-point environment in the object pointed
   to by ENVP.  */
extern int fegetenv (fenv_t *__envp) ;

/* Save the current environment in the object pointed to by ENVP, clear
   exception flags and install a non-stop mode (if available) for all
   exceptions.  */
extern int feholdexcept (fenv_t *__envp) ;

/* Establish the floating-point environment represented by the object
   pointed to by ENVP.  */
extern int fesetenv (const fenv_t *__envp) ;

/* Save current exceptions in temporary storage, install environment
   represented by object pointed to by ENVP and raise exceptions
   according to saved exceptions.  */
extern int feupdateenv (const fenv_t *__envp) ;


/* Control modes.  */
# 144 "/usr/include/fenv.h" 3 4
/* NaN support.  */
# 29 "all.c" 2
# 1 "/usr/include/fmtmsg.h" 1 3 4
/* Message display handling.
   Copyright (C) 1997-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 27 "/usr/include/fmtmsg.h" 3 4
/* Values to control `fmtmsg' function.  */
enum
{
  MM_HARD = 0x001, /* Source of the condition is hardware.  */

  MM_SOFT = 0x002, /* Source of the condition is software.  */

  MM_FIRM = 0x004, /* Source of the condition is firmware.  */

  MM_APPL = 0x008, /* Condition detected by application.  */

  MM_UTIL = 0x010, /* Condition detected by utility.  */

  MM_OPSYS = 0x020, /* Condition detected by operating system.  */

  MM_RECOVER = 0x040, /* Recoverable error.  */

  MM_NRECOV = 0x080, /* Non-recoverable error.  */

  MM_PRINT = 0x100, /* Display message in standard error.  */

  MM_CONSOLE = 0x200 /* Display message on system console.  */

};

/* Values to be for SEVERITY parameter of `fmtmsg'.  */
enum
{
  MM_NOSEV = 0, /* No severity level provided for the message.  */

  MM_HALT, /* Error causing application to halt.  */

  MM_ERROR, /* Application has encountered a non-fatal fault.  */

  MM_WARNING, /* Application has detected unusual non-error
			   condition.  */

  MM_INFO /* Informative message.  */

};


/* Macros which can be used as null values for the arguments of `fmtmsg'.  */
# 78 "/usr/include/fmtmsg.h" 3 4
/* Possible return values of `fmtmsg'.  */
enum
{
  MM_NOTOK = -1,

  MM_OK = 0,

  MM_NOMSG = 1,

  MM_NOCON = 4

};


/* Print message with given CLASSIFICATION, LABEL, SEVERITY, TEXT, ACTION
   and TAG to console or standard error.  */
extern int fmtmsg (long int __classification, const char *__label,
     int __severity, const char *__text,
     const char *__action, const char *__tag);
# 30 "all.c" 2
# 1 "/usr/include/fnmatch.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 25 "/usr/include/fnmatch.h" 3 4
/* We #undef these before defining them because some losing systems
   (HP-UX A.08.07 for example) define these in <unistd.h>.  */




/* Bits set in the FLAGS argument to `fnmatch'.  */
# 43 "/usr/include/fnmatch.h" 3 4
/* Value returned by `fnmatch' if STRING does not match PATTERN.  */


/* This value is returned if the implementation does not support
   `fnmatch'.  Since this is not the case here it will never be
   returned but the conformance test suites still require the symbol
   to be defined.  */




/* Match NAME against the filename pattern PATTERN,
   returning zero if it matches, FNM_NOMATCH if not.  */
extern int fnmatch (const char *__pattern, const char *__name, int __flags);
# 31 "all.c" 2
# 1 "/usr/include/form.h" 1 3 4
/****************************************************************************
 * Copyright 2018-2019-2020,2021 Thomas E. Dickey                           *
 * Copyright 1998-2016,2017 Free Software Foundation, Inc.                  *
 *                                                                          *
 * Permission is hereby granted, free of charge, to any person obtaining a  *
 * copy of this software and associated documentation files (the            *
 * "Software"), to deal in the Software without restriction, including      *
 * without limitation the rights to use, copy, modify, merge, publish,      *
 * distribute, distribute with modifications, sublicense, and/or sell       *
 * copies of the Software, and to permit persons to whom the Software is    *
 * furnished to do so, subject to the following conditions:                 *
 *                                                                          *
 * The above copyright notice and this permission notice shall be included  *
 * in all copies or substantial portions of the Software.                   *
 *                                                                          *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS  *
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF               *
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.   *
 * IN NO EVENT SHALL THE ABOVE COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,   *
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR    *
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR    *
 * THE USE OR OTHER DEALINGS IN THE SOFTWARE.                               *
 *                                                                          *
 * Except as contained in this notice, the name(s) of the above copyright   *
 * holders shall not be used in advertising or otherwise to promote the     *
 * sale, use or other dealings in this Software without prior written       *
 * authorization.                                                           *
 ****************************************************************************/

/****************************************************************************
 *   Author:  Juergen Pfeifer, 1995,1997                                    *
 ****************************************************************************/

/* $Id: form.h,v 0.32 2021/06/17 21:26:02 tom Exp $ */



/* *INDENT-OFF*/
# 59 "/usr/include/form.h" 3 4
typedef void *FIELD_CELL;






typedef int Form_Options;
typedef int Field_Options;

 /**********
	*  _PAGE  *
	**********/

typedef struct pagenode
# 82 "/usr/include/form.h" 3 4
_PAGE;

 /**********
	*  FIELD  *
	**********/

typedef struct fieldnode

{
  unsigned short status; /* flags			*/
  short rows; /* size in rows			*/
  short cols; /* size in cols			*/
  short frow; /* first row			*/
  short fcol; /* first col			*/
  int drows; /* dynamic rows			*/
  int dcols; /* dynamic cols			*/
  int maxgrow; /* maximum field growth		*/
  int nrow; /* off-screen rows		*/
  short nbuf; /* additional buffers		*/
  short just; /* justification		*/
  short page; /* page on form			*/
  short index; /* into form -> field		*/
  int pad; /* pad character		*/
  chtype fore; /* foreground attribute		*/
  chtype back; /* background attribute		*/
  Field_Options opts; /* options			*/
  struct fieldnode * snext; /* sorted order pointer		*/
  struct fieldnode * sprev; /* sorted order pointer		*/
  struct fieldnode * link; /* linked field chain		*/
  struct formnode * form; /* containing form		*/
  struct typenode * type; /* field type			*/
  void * arg; /* argument for type		*/
  FIELD_CELL * buf; /* field buffers		*/
  void * usrptr; /* user pointer			*/
  /*
   * The wide-character configuration requires extra information.  Because
   * there are existing applications that manipulate the members of FIELD
   * directly, we cannot make the struct opaque, except by changing the ABI.
   * Offsets of members up to this point are the same in the narrow- and
   * wide-character configuration.  But note that the type of buf depends on
   * the configuration, and is made opaque for that reason.
   */

}

FIELD;


 /*********
	*  FORM  *
	*********/

typedef struct formnode

{
  unsigned short status; /* flags			*/
  short rows; /* size in rows			*/
  short cols; /* size in cols			*/
  int currow; /* current row in field window	*/
  int curcol; /* current col in field window	*/
  int toprow; /* in scrollable field window	*/
  int begincol; /* in horiz. scrollable field	*/
  short maxfield; /* number of fields		*/
  short maxpage; /* number of pages		*/
  short curpage; /* index into page		*/
  Form_Options opts; /* options			*/
  WINDOW * win; /* window			*/
  WINDOW * sub; /* subwindow			*/
  WINDOW * w; /* window for current field	*/
  FIELD ** field; /* field [maxfield]		*/
  FIELD * current; /* current field		*/
  _PAGE * page; /* page [maxpage]		*/
  void * usrptr; /* user pointer			*/

  void (*forminit)(struct formnode *);
  void (*formterm)(struct formnode *);
  void (*fieldinit)(struct formnode *);
  void (*fieldterm)(struct formnode *);

}

FORM;


 /**************
	*  FIELDTYPE  *
	**************/

typedef struct typenode
# 210 "/usr/include/form.h" 3 4
FIELDTYPE;

typedef void (*Form_Hook)(FORM *);

 /***************************
	*  miscellaneous #defines  *
	***************************/

/* field justification */





/* field options */
# 240 "/usr/include/form.h" 3 4
/* form options */



/* form driver commands */
# 320 "/usr/include/form.h" 3 4
 /*************************
	*  standard field types  *
	*************************/
extern FIELDTYPE * TYPE_ALPHA;
extern FIELDTYPE * TYPE_ALNUM;
extern FIELDTYPE * TYPE_ENUM;
extern FIELDTYPE * TYPE_INTEGER;
extern FIELDTYPE * TYPE_NUMERIC;
extern FIELDTYPE * TYPE_REGEXP;

 /************************************
	*  built-in additional field types  *
	*  They are not defined in SVr4     *
	************************************/
extern FIELDTYPE * TYPE_IPV4; /* Internet IP Version 4 address */

 /***********************
	*  FIELDTYPE routines  *
	***********************/
extern FIELDTYPE * new_fieldtype (
      _Bool (* const field_check)(FIELD *,const void *),
      _Bool (* const char_check)(int,const void *));
extern FIELDTYPE * link_fieldtype(
      FIELDTYPE *, FIELDTYPE *);

extern int free_fieldtype (FIELDTYPE *);
extern int set_fieldtype_arg (FIELDTYPE *,
      void * (* const make_arg)(va_list *),
      void * (* const copy_arg)(const void *),
      void (* const free_arg)(void *));
extern int set_fieldtype_choice (FIELDTYPE *,
      _Bool (* const next_choice)(FIELD *,const void *),
            _Bool (* const prev_choice)(FIELD *,const void *));

 /*******************
	*  FIELD routines  *
	*******************/
extern FIELD * new_field (int,int,int,int,int,int);
extern FIELD * dup_field (FIELD *,int,int);
extern FIELD * link_field (FIELD *,int,int);

extern int free_field (FIELD *);
extern int field_info (const FIELD *,int *,int *,int *,int *,int *,int *);
extern int dynamic_field_info (const FIELD *,int *,int *,int *);
extern int set_max_field ( FIELD *,int);
extern int move_field (FIELD *,int,int);
extern int set_field_type (FIELD *,FIELDTYPE *,...);
extern int set_new_page (FIELD *,_Bool);
extern int set_field_just (FIELD *,int);
extern int field_just (const FIELD *);
extern int set_field_fore (FIELD *,chtype);
extern int set_field_back (FIELD *,chtype);
extern int set_field_pad (FIELD *,int);
extern int field_pad (const FIELD *);
extern int set_field_buffer (FIELD *,int,const char *);
extern int set_field_status (FIELD *,_Bool);
extern int set_field_userptr (FIELD *, void *);
extern int set_field_opts (FIELD *,Field_Options);
extern int field_opts_on (FIELD *,Field_Options);
extern int field_opts_off (FIELD *,Field_Options);

extern chtype field_fore (const FIELD *);
extern chtype field_back (const FIELD *);

extern _Bool new_page (const FIELD *);
extern _Bool field_status (const FIELD *);

extern void * field_arg (const FIELD *);

extern void * field_userptr (const FIELD *);

extern FIELDTYPE * field_type (const FIELD *);

extern char * field_buffer (const FIELD *,int);

extern Field_Options field_opts (const FIELD *);

 /******************
	*  FORM routines  *
	******************/

extern FORM * new_form (FIELD **);

extern FIELD ** form_fields (const FORM *);
extern FIELD * current_field (const FORM *);

extern WINDOW * form_win (const FORM *);
extern WINDOW * form_sub (const FORM *);

extern Form_Hook form_init (const FORM *);
extern Form_Hook form_term (const FORM *);
extern Form_Hook field_init (const FORM *);
extern Form_Hook field_term (const FORM *);

extern int free_form (FORM *);
extern int set_form_fields (FORM *,FIELD **);
extern int field_count (const FORM *);
extern int set_form_win (FORM *,WINDOW *);
extern int set_form_sub (FORM *,WINDOW *);
extern int set_current_field (FORM *,FIELD *);
extern int unfocus_current_field (FORM *);
extern int field_index (const FIELD *);
extern int set_form_page (FORM *,int);
extern int form_page (const FORM *);
extern int scale_form (const FORM *,int *,int *);
extern int set_form_init (FORM *,Form_Hook);
extern int set_form_term (FORM *,Form_Hook);
extern int set_field_init (FORM *,Form_Hook);
extern int set_field_term (FORM *,Form_Hook);
extern int post_form (FORM *);
extern int unpost_form (FORM *);
extern int pos_form_cursor (FORM *);
extern int form_driver (FORM *,int);



extern int set_form_userptr (FORM *,void *);
extern int set_form_opts (FORM *,Form_Options);
extern int form_opts_on (FORM *,Form_Options);
extern int form_opts_off (FORM *,Form_Options);
extern int form_request_by_name (const char *);

extern const char * form_request_name (int);

extern void * form_userptr (const FORM *);

extern Form_Options form_opts (const FORM *);

extern _Bool data_ahead (const FORM *);
extern _Bool data_behind (const FORM *);


extern FORM * new_form_sp (SCREEN*, FIELD **);





/* *INDENT-ON*/
# 32 "all.c" 2
# 1 "/usr/include/fpu_control.h" 1 3 4
/* FPU control word bits.  x86 version.
   Copyright (C) 1993-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* Note that this file sets on x86-64 only the x87 FPU, it does not
   touch the SSE unit.  */

/* Here is the dirty part. Set up your 387 through the control word
 * (cw) register.
 *
 *     15-13    12  11-10  9-8     7-6     5    4    3    2    1    0
 * | reserved | IC | RC  | PC | reserved | PM | UM | OM | ZM | DM | IM
 *
 * IM: Invalid operation mask
 * DM: Denormalized operand mask
 * ZM: Zero-divide mask
 * OM: Overflow mask
 * UM: Underflow mask
 * PM: Precision (inexact result) mask
 *
 * Mask bit is 1 means no interrupt.
 *
 * PC: Precision control
 * 11 - round to extended precision
 * 10 - round to double precision
 * 00 - round to single precision
 *
 * RC: Rounding control
 * 00 - rounding to nearest
 * 01 - rounding down (toward - infinity)
 * 10 - rounding up (toward + infinity)
 * 11 - rounding toward zero
 *
 * IC: Infinity control
 * That is for 8087 and 80287 only.
 *
 * The hardware default is 0x037f which we use.
 */



/* masking of interrupts */







/* precision control */




/* rounding control */
# 81 "/usr/include/fpu_control.h" 3 4
/* The fdlibm code requires strict IEEE double precision arithmetic,
   and no interrupts for exceptions, rounding to nearest.  */



/* IEEE:  same as above.  */


/* Type of the control word.  */
typedef unsigned int fpu_control_t ;

/* Macros for accessing the hardware control word.  "*&" is used to
   work around a bug in older versions of GCC.  __volatile__ is used
   to support combination of writing the control register and reading
   it back.  Without __volatile__, the old value may be used for reading
   back under compiler optimization.

   Note that the use of these macros is not sufficient anymore with
   recent hardware nor on x86-64.  Some floating point operations are
   executed in the SSE/SSE2 engines which have their own control and
   status register.  */



/* Default control word set at startup.  */
extern fpu_control_t __fpu_control;
# 33 "all.c" 2
# 1 "/usr/include/fts.h" 1 3 4
/* File tree traversal functions declarations.
   Copyright (C) 1994-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Copyright (c) 1989, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)fts.h	8.3 (Berkeley) 8/14/94
 */
# 57 "/usr/include/fts.h" 3 4
typedef struct {
 struct _ftsent *fts_cur; /* current node */
 struct _ftsent *fts_child; /* linked list of children */
 struct _ftsent **fts_array; /* sort array */
 dev_t fts_dev; /* starting device # */
 char *fts_path; /* path for this descent */
 int fts_rfd; /* fd for root */
 int fts_pathlen; /* sizeof(path) */
 int fts_nitems; /* elements in the sort array */
 int (*fts_compar) (const void *, const void *); /* compare fn */
# 80 "/usr/include/fts.h" 3 4
 int fts_options; /* fts_open options, global flags */
} FTS;
# 98 "/usr/include/fts.h" 3 4
typedef struct _ftsent {
 struct _ftsent *fts_cycle; /* cycle node */
 struct _ftsent *fts_parent; /* parent directory */
 struct _ftsent *fts_link; /* next file in directory */
 long fts_number; /* local numeric value */
 void *fts_pointer; /* local address value */
 char *fts_accpath; /* access path */
 char *fts_path; /* root path */
 int fts_errno; /* errno for this node */
 int fts_symfd; /* fd for symlink */
 unsigned short fts_pathlen; /* strlen(fts_path) */
 unsigned short fts_namelen; /* strlen(fts_name) */

 ino_t fts_ino; /* inode */
 dev_t fts_dev; /* device */
 nlink_t fts_nlink; /* link count */



 short fts_level; /* depth (-1 to N) */
# 133 "/usr/include/fts.h" 3 4
 unsigned short fts_info; /* user flags for FTSENT structure */



 unsigned short fts_flags; /* private flags for FTSENT structure */





 unsigned short fts_instr; /* fts_set() instructions */

 struct stat *fts_statp; /* stat(2) information */
 char fts_name[1]; /* file name */
} FTSENT;
# 182 "/usr/include/fts.h" 3 4
FTSENT *fts_children (FTS *, int);
int fts_close (FTS *);
FTS *fts_open (char * const *, int,
     int (*)(const FTSENT **, const FTSENT **));
FTSENT *fts_read (FTS *);
int fts_set (FTS *, FTSENT *, int) ;
# 34 "all.c" 2
/*
#include <ftw.h>
#include <gconv.h>
#include <getopt.h>
#include <glob.h>
#include <gnu-versions.h>
#include <gnumake.h>
#include <grp.h>
#include <gshadow.h>
#include <iconv.h>
#include <ieee754.h>
#include <ifaddrs.h>
#include <inttypes.h>
#include <langinfo.h>
#include <lastlog.h>
#include <libgen.h>
#include <libintl.h>
#include <limits.h>
#include <locale.h>
#include <malloc.h>
#include <math.h>
#include <mcheck.h>
#include <memory.h>
#include <menu.h>
#include <mntent.h>
#include <monetary.h>
#include <mqueue.h>
#include <ncurses.h>
#include <ncurses_dll.h>
#include <netdb.h>
#include <nl_types.h>
#include <nss.h>
#include <obstack.h>
#include <panel.h>
#include <paths.h>
#include <poll.h>
#include <printf.h>
#include <proc_service.h>
#include <pthread.h>
#include <pty.h>
#include <pwd.h>
#include <re_comp.h>
#include <regex.h>
#include <regexp.h>
*/
# 1 "/usr/include/resolv.h" 1 3 4
/*
 * Copyright (c) 1983, 1987, 1989
 *    The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*
 * Portions Copyright (c) 1996-1999 by Internet Software Consortium.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND INTERNET SOFTWARE CONSORTIUM DISCLAIMS
 * ALL WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL INTERNET SOFTWARE
 * CONSORTIUM BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS
 * ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
 * SOFTWARE.
 */

/*
 *	@(#)resolv.h	8.1 (Berkeley) 6/2/93
 *	$BINDId: resolv.h,v 8.31 2000/03/30 20:16:50 vixie Exp $
 */





# 1 "/usr/include/sys/param.h" 1 3 4
/* Compatibility header for old-style Unix parameters and limits.
   Copyright (C) 1995-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 108 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_null.h" 1 3 4
/*===---- __stddef_null.h - Definition of NULL -----------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */



/* linux/stddef.h will define NULL to 0. glibc (and other) headers then define
 * __need_NULL and rely on stddef.h to redefine NULL to the correct value again.
 * Modules don't support redefining macros like that, but support that pattern
 * in the non-modules case.
 */
# 109 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 24 "/usr/include/sys/param.h" 2 3 4




# 1 "/usr/include/signal.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.14 Signal handling <signal.h>
 */
# 30 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/signum-generic.h" 1 3 4
/* Signal number constants.  Generic template.
   Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/bits/signum-generic.h" 3 4
/* Fake signal functions.  */
# 36 "/usr/include/bits/signum-generic.h" 3 4
/* We define here all the signal names listed in POSIX (1003.1-2008);
   as of 1003.1-2013, no additional signals have been added by POSIX.
   We also define here signal names that historically exist in every
   real-world POSIX variant (e.g. SIGWINCH).

   Signals in the 1-15 range are defined with their historical numbers.
   For other signals, we use the BSD numbers.
   There are two unallocated signal numbers in the 1-31 range: 7 and 29.
   Signal number 0 is reserved for use as kill(pid, 0), to test whether
   a process exists without sending it a signal.  */

/* ISO C99 signals.  */







/* Historical signals specified by POSIX. */







/* Archaic names for compatibility.  */




/* Not all systems support real-time signals.  bits/signum.h indicates
   that they are supported by overriding __SIGRTMAX to a value greater
   than __SIGRTMIN.  These constants give the kernel-level hard limits,
   but some real-time signals may be used internally by glibc.  Do not
   use these constants in application code; use SIGRTMIN and SIGRTMAX
   (defined in signal.h) instead.  */

/* Include system specific bits.  */
# 1 "/usr/include/bits/signum-arch.h" 1 3 4
/* Signal number definitions.  Linux version.
   Copyright (C) 1995-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/bits/signum-arch.h" 3 4
/* Adjustments and additions to the signal number constants for
   most Linux systems.  */




/* Historical signals specified by POSIX. */



/* New(er) POSIX signals (1003.1-2008, 1003.1-2013).  */
# 52 "/usr/include/bits/signum-arch.h" 3 4
/* Nonstandard signals found in all modern POSIX systems
   (including both BSD and Linux).  */


/* Archaic names for compatibility.  */
# 77 "/usr/include/bits/signum-generic.h" 2 3 4

/* Biggest signal number + 1 (including real-time signals).  */
# 31 "/usr/include/signal.h" 2 3 4

# 1 "/usr/include/bits/types/sig_atomic_t.h" 1 3 4





/* An integral type that can be modified atomically, without the
   possibility of a signal arriving in the middle of the operation.  */
typedef __sig_atomic_t sig_atomic_t;
# 33 "/usr/include/signal.h" 2 3 4
# 71 "/usr/include/signal.h" 3 4
/* Type of a signal handler.  */
typedef void (*__sighandler_t) (int);

/* The X/Open definition of `signal' specifies the SVID semantic.  Use
   the additional function `sysv_signal' when X/Open compatibility is
   requested.  */
extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
            ;





/* Set the handler for the signal SIG to HANDLER, returning the old
   handler, or SIG_ERR on error.
   By default `signal' has the BSD semantic.  */




/* Make sure the used `signal' implementation is the SVID version. */

extern __sighandler_t signal (int __sig, __sighandler_t __handler) __asm__ ("" "__sysv_signal") ;
# 108 "/usr/include/signal.h" 3 4
/* Send signal SIG to process number PID.  If PID is zero,
   send SIG to all processes in the current process's process group.
   If PID is < -1, send SIG to all processes in process group - PID.  */
# 122 "/usr/include/signal.h" 3 4
/* Raise signal SIG, i.e., send SIG to yourself.  */
extern int raise (int __sig) ;
# 142 "/usr/include/signal.h" 3 4
/* The `sigpause' function in X/Open defines the argument as the
   signal number.  This requires redirecting to another function
   because the default version in glibc uses an old BSD interface.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
# 191 "/usr/include/signal.h" 3 4
/* 4.4 BSD uses the name `sig_t' for this.  */
# 379 "/usr/include/signal.h" 3 4
/* The following functions are used internally in the C library and in
   other code which need deep insights.  */

/* Return number of available real-time signal with highest priority.  */
extern int __libc_current_sigrtmin (void) ;
/* Return number of available real-time signal with lowest priority.  */
extern int __libc_current_sigrtmax (void) ;




/* System-specific extensions.  */
# 1 "/usr/include/bits/signal_ext.h" 1 3 4
/* System-specific extensions of <signal.h>, Linux version.
   Copyright (C) 2019-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 392 "/usr/include/signal.h" 2 3 4
# 29 "/usr/include/sys/param.h" 2 3 4

/* This file defines some things in system-specific ways.  */
# 1 "/usr/include/bits/param.h" 1 3 4
/* Old-style Unix parameters and limits.  Linux version.
   Copyright (C) 1995-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 27 "/usr/include/bits/param.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
# 28 "/usr/include/bits/param.h" 2 3 4
# 1 "/usr/include/linux/param.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */



# 1 "/usr/include/asm/param.h" 1 3 4
# 1 "/usr/include/asm-generic/param.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
# 2 "/usr/include/asm/param.h" 2 3 4
# 6 "/usr/include/linux/param.h" 2 3 4
# 29 "/usr/include/bits/param.h" 2 3 4

/* The kernel headers define ARG_MAX.  The value is wrong, though.  */







/* The following are not really correct but it is a value we used for a
   long time and which seems to be usable.  People should not use NOFILE
   and NCARGS anyway.  */
# 32 "/usr/include/sys/param.h" 2 3 4


/* BSD names for some <limits.h> values.  */
# 67 "/usr/include/sys/param.h" 3 4
/* Magical constants.  */
# 76 "/usr/include/sys/param.h" 3 4
/* Unit of `st_blocks'.  */





/* Bit map related macros.  */





/* Macros for counting and rounding.  */
# 101 "/usr/include/sys/param.h" 3 4
/* Macros for min/max.  */
# 57 "/usr/include/resolv.h" 2 3 4


# 1 "/usr/include/netinet/in.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






# 1 "/usr/include/sys/socket.h" 1 3 4
/* Declarations of socket constants, types, and functions.
   Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/sys/socket.h" 3 4
# 1 "/usr/include/bits/types/struct_iovec.h" 1 3 4
/* Define struct iovec.
   Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 93 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_size_t.h" 1 3 4
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 94 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 24 "/usr/include/bits/types/struct_iovec.h" 2 3 4

/* Structure for scatter/gather I/O.  */
struct iovec
  {
    void *iov_base; /* Pointer to data.  */
    size_t iov_len; /* Length of data.  */
  };
# 27 "/usr/include/sys/socket.h" 2 3 4

# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 93 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_size_t.h" 1 3 4
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 94 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 29 "/usr/include/sys/socket.h" 2 3 4

/* This operating system-specific header file defines the SOCK_*, PF_*,
   AF_*, MSG_*, SOL_*, and SO_* constants, and the `struct sockaddr',
   `struct msghdr', and `struct linger' types.  */
# 1 "/usr/include/bits/socket.h" 1 3 4
/* System-specific socket constants and types.  Linux version.
   Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 27 "/usr/include/bits/socket.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 93 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_size_t.h" 1 3 4
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 94 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 28 "/usr/include/bits/socket.h" 2 3 4



/* Type for length arguments in socket calls.  */

typedef __socklen_t socklen_t;



/* Get the architecture-dependent definition of enum __socket_type.  */
# 1 "/usr/include/bits/socket_type.h" 1 3 4
/* Define enum __socket_type for generic Linux.
   Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





/* Types of sockets.  */
enum __socket_type
{
  SOCK_STREAM = 1, /* Sequenced, reliable, connection-based
				   byte streams.  */

  SOCK_DGRAM = 2, /* Connectionless, unreliable datagrams
				   of fixed maximum length.  */

  SOCK_RAW = 3, /* Raw protocol interface.  */

  SOCK_RDM = 4, /* Reliably-delivered messages.  */

  SOCK_SEQPACKET = 5, /* Sequenced, reliable, connection-based,
				   datagrams of fixed maximum length.  */

  SOCK_DCCP = 6, /* Datagram Congestion Control Protocol.  */

  SOCK_PACKET = 10, /* Linux specific way of getting packets
				   at the dev level.  For writing rarp and
				   other similar things on the user level. */


  /* Flags to be ORed into the type parameter of socket and socketpair and
     used for the flags parameter of paccept.  */

  SOCK_CLOEXEC = 02000000, /* Atomically set close-on-exec flag for the
				   new descriptor(s).  */

  SOCK_NONBLOCK = 00004000 /* Atomically mark descriptor(s) as
				   non-blocking.  */

};
# 39 "/usr/include/bits/socket.h" 2 3 4

/* Protocol families.  */
# 92 "/usr/include/bits/socket.h" 3 4
/* Address families.  */
# 144 "/usr/include/bits/socket.h" 3 4
/* Socket level values.  Others are defined in the appropriate headers.

   XXX These definitions also should go into the appropriate headers as
   far as they are available.  */
# 177 "/usr/include/bits/socket.h" 3 4
/* Maximum queue length specifiable by listen.  */


/* Get the definition of the macro to define the common sockaddr members.  */
# 1 "/usr/include/bits/sockaddr.h" 1 3 4
/* Definition of struct sockaddr_* common members and sizes, generic version.
   Copyright (C) 1995-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <sys/socket.h> instead.
 */





/* POSIX.1g specifies this type name for the `sa_family' member.  */
typedef unsigned short int sa_family_t;

/* This macro is used to declare the initial common members
   of the data types used for socket addresses, `struct sockaddr',
   `struct sockaddr_in', `struct sockaddr_un', etc.  */






/* Size of struct sockaddr_storage.  */
# 182 "/usr/include/bits/socket.h" 2 3 4

/* Structure describing a generic socket address.  */
struct sockaddr
  {
    sa_family_t sa_family; /* Common data: address family and length.  */
    char sa_data[14]; /* Address data.  */
  };


/* Structure large enough to hold any socket address (with the historical
   exception of AF_UNIX).  */




struct sockaddr_storage
  {
    sa_family_t ss_family; /* Address family, etc.  */
    char __ss_padding[(128 - (sizeof (unsigned short int)) - sizeof (unsigned long int))];
    unsigned long int __ss_align; /* Force desired alignment.  */
  };


/* Bits in the FLAGS argument to `send', `recv', et al.  */
enum
  {
    MSG_OOB = 0x01, /* Process out-of-band data.  */

    MSG_PEEK = 0x02, /* Peek at incoming messages.  */

    MSG_DONTROUTE = 0x04, /* Don't use local routing.  */






    MSG_CTRUNC = 0x08, /* Control data lost before delivery.  */

    MSG_PROXY = 0x10, /* Supply or ask second address.  */

    MSG_TRUNC = 0x20,

    MSG_DONTWAIT = 0x40, /* Nonblocking IO.  */

    MSG_EOR = 0x80, /* End of record.  */

    MSG_WAITALL = 0x100, /* Wait for a full request.  */

    MSG_FIN = 0x200,

    MSG_SYN = 0x400,

    MSG_CONFIRM = 0x800, /* Confirm path validity.  */

    MSG_RST = 0x1000,

    MSG_ERRQUEUE = 0x2000, /* Fetch message from error queue.  */

    MSG_NOSIGNAL = 0x4000, /* Do not generate SIGPIPE.  */

    MSG_MORE = 0x8000, /* Sender will send more.  */

    MSG_WAITFORONE = 0x10000, /* Wait for at least one packet to return.*/

    MSG_BATCH = 0x40000, /* sendmmsg: more messages coming.  */

    MSG_SOCK_DEVMEM = 0x2000000, /* Receive devmem skbs as cmsg.  */

    MSG_ZEROCOPY = 0x4000000, /* Use user data in kernel path.  */

    MSG_FASTOPEN = 0x20000000, /* Send data in TCP SYN.  */


    MSG_CMSG_CLOEXEC = 0x40000000 /* Set close_on_exit for file
					   descriptor received through
					   SCM_RIGHTS.  */

  };


/* Structure describing messages sent by
   `sendmsg' and received by `recvmsg'.  */
struct msghdr
  {
    void *msg_name; /* Address to send to/receive from.  */
    socklen_t msg_namelen; /* Length of address data.  */

    struct iovec *msg_iov; /* Vector of data to send/receive into.  */
    size_t msg_iovlen; /* Number of elements in the vector.  */

    void *msg_control; /* Ancillary data (eg BSD filedesc passing). */
    size_t msg_controllen; /* Ancillary data buffer length.
				   !! The type should be socklen_t but the
				   definition of the kernel is incompatible
				   with this.  */

    int msg_flags; /* Flags on received message.  */
  };

/* Structure used for storage of ancillary data object information.  */
struct cmsghdr
  {
    size_t cmsg_len; /* Length of data in cmsg_data plus length
				   of cmsghdr structure.
				   !! The type should be socklen_t but the
				   definition of the kernel is incompatible
				   with this.  */
    int cmsg_level; /* Originating protocol.  */
    int cmsg_type; /* Protocol specific type.  */

    __extension__ unsigned char __cmsg_data []; /* Ancillary data.  */

  };

/* Ancillary data object manipulation macros.  */
# 313 "/usr/include/bits/socket.h" 3 4
/* Given a length, return the additional padding necessary such that
   len + __CMSG_PADDING(len) == CMSG_ALIGN (len).  */




extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
          struct cmsghdr *__cmsg) ;
# 364 "/usr/include/bits/socket.h" 3 4
/* Socket level message types.  This must match the definitions in
   <linux/socket.h>.  */
enum
  {
    SCM_RIGHTS = 0x01 /* Transfer file descriptors.  */
# 378 "/usr/include/bits/socket.h" 3 4
  };
# 395 "/usr/include/bits/socket.h" 3 4
# 1 "/usr/include/bits/socket-constants.h" 1 3 4
/* Socket constants which vary among Linux architectures.
   Copyright (C) 2019-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





# 1 "/usr/include/bits/timesize.h" 1 3 4
/* Bit size of the time_t type at glibc build time, x86-64 and x32 case.
   Copyright (C) 2018-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 14 "/usr/include/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 20 "/usr/include/bits/timesize.h" 2 3 4





/* For others, time size is word size.  */
# 24 "/usr/include/bits/socket-constants.h" 2 3 4
# 396 "/usr/include/bits/socket.h" 2 3 4


/* Structure used to manipulate the SO_LINGER option.  */
struct linger
  {
    int l_onoff; /* Nonzero to linger on close.  */
    int l_linger; /* Time to linger.  */
  };
# 34 "/usr/include/sys/socket.h" 2 3 4





/* The following constants should be used for the second parameter of
   `shutdown'.  */
enum
{
  SHUT_RD = 0, /* No more receptions.  */

  SHUT_WR, /* No more transmissions.  */

  SHUT_RDWR /* No more receptions or transmissions.  */

};

/* This is the type we use for generic socket address arguments.

   With GCC 2.7 and later, the funky union causes redeclarations or
   uses with any of the listed types to be allowed without complaint.
   G++ 2.7 does not support transparent unions so there we want the
   old-style declaration, too.  */
# 99 "/usr/include/sys/socket.h" 3 4
/* Create a new socket of type TYPE in domain DOMAIN, using
   protocol PROTOCOL.  If PROTOCOL is zero, one is chosen automatically.
   Returns a file descriptor for the new socket, or -1 for errors.  */
extern int socket (int __domain, int __type, int __protocol) ;

/* Create two new sockets, of type TYPE in domain DOMAIN and using
   protocol PROTOCOL, which are connected to each other, and put file
   descriptors for them in FDS[0] and FDS[1].  If PROTOCOL is zero,
   one will be chosen automatically.  Returns 0 on success, -1 for errors.  */
extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) ;

/* Give the socket FD the local address ADDR (which is LEN bytes long).  */
extern int bind (int __fd, const struct sockaddr * __addr, socklen_t __len)
            ;

/* Put the local address of FD into *ADDR and its length in *LEN.  */
extern int getsockname (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) ;

/* Open a connection on socket FD to peer at ADDR (which LEN bytes long).
   For connectionless socket types, just set the default address to send to
   and the only address from which to accept transmissions.
   Return 0 on success, -1 for errors.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int connect (int __fd, const struct sockaddr * __addr, socklen_t __len);

/* Put the address of the peer connected to socket FD into *ADDR
   (which is *LEN bytes long), and its actual length into *LEN.  */
extern int getpeername (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) ;


/* Send N bytes of BUF to socket FD.  Returns the number sent or -1.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern ssize_t send (int __fd, const void *__buf, size_t __n, int __flags);

/* Read N bytes into BUF from socket FD.
   Returns the number read or -1 for errors.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);

/* Send N bytes of BUF on socket FD to peer at address ADDR (which is
   ADDR_LEN bytes long).  Returns the number sent, or -1 for errors.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern ssize_t sendto (int __fd, const void *__buf, size_t __n,
         int __flags, const struct sockaddr * __addr,
         socklen_t __addr_len);

/* Read N bytes into BUF through socket FD.
   If ADDR is not NULL, fill in *ADDR_LEN bytes of it with the address of
   the sender, and store the actual size of the address in *ADDR_LEN.
   Returns the number of bytes read or -1 for errors.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, struct sockaddr *__restrict __addr,
    socklen_t *__restrict __addr_len);


/* Send a message described MESSAGE on socket FD.
   Returns the number of bytes sent, or -1 for errors.

   This function is a cancellation point and therefore not marked with
   __THROW.  */

extern ssize_t sendmsg (int __fd, const struct msghdr *__message,
   int __flags);
# 210 "/usr/include/sys/socket.h" 3 4
/* Receive a message as described by MESSAGE from socket FD.
   Returns the number of bytes read or -1 for errors.

   This function is a cancellation point and therefore not marked with
   __THROW.  */

extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);
# 251 "/usr/include/sys/socket.h" 3 4
/* Put the current value for socket FD's option OPTNAME at protocol level LEVEL
   into OPTVAL (which is *OPTLEN bytes long), and set *OPTLEN to the value's
   actual length.  Returns 0 on success, -1 for errors.  */

extern int getsockopt (int __fd, int __level, int __optname,
         void *__restrict __optval,
         socklen_t *__restrict __optlen) ;
# 273 "/usr/include/sys/socket.h" 3 4
/* Set socket FD's option OPTNAME at protocol level LEVEL
   to *OPTVAL (which is OPTLEN bytes long).
   Returns 0 on success, -1 for errors.  */

extern int setsockopt (int __fd, int __level, int __optname,
         const void *__optval, socklen_t __optlen) ;
# 293 "/usr/include/sys/socket.h" 3 4
/* Prepare to accept connections on socket FD.
   N connection requests will be queued before further requests are refused.
   Returns 0 on success, -1 for errors.  */
extern int listen (int __fd, int __n) ;

/* Await a connection on socket FD.
   When a connection arrives, open a new socket to communicate with it,
   set *ADDR (which is *ADDR_LEN bytes long) to the address of the connecting
   peer and *ADDR_LEN to the address's actual length, and return the
   new socket's descriptor, or -1 for errors.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int accept (int __fd, struct sockaddr *__restrict __addr,
     socklen_t *__restrict __addr_len);
# 318 "/usr/include/sys/socket.h" 3 4
/* Shut down all or part of the connection open on socket FD.
   HOW determines what to shut down:
     SHUT_RD   = No more receptions;
     SHUT_WR   = No more transmissions;
     SHUT_RDWR = No more receptions or transmissions.
   Returns 0 on success, -1 for errors.  */
extern int shutdown (int __fd, int __how) ;
# 341 "/usr/include/sys/socket.h" 3 4
/* Define some macros helping to catch buffer overflows.  */
# 24 "/usr/include/netinet/in.h" 2 3 4





/* Internet address.  */
typedef uint32_t in_addr_t;
struct in_addr
  {
    in_addr_t s_addr;
  };

/* Get system-specific definitions.  */
# 1 "/usr/include/bits/in.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* Linux version.  */





/* If the application has already included linux/in6.h from a linux-based
   kernel then we will not define the IPv6 IPPROTO_* defines, in6_addr (nor the
   defines), sockaddr_in6, or ipv6_mreq. Same for in6_ptkinfo or ip6_mtuinfo
   in linux/ipv6.h. The ABI used by the linux-kernel and glibc match exactly.
   Neither the linux kernel nor glibc should break this ABI without coordination.
   In upstream kernel 56c176c9 the _UAPI prefix was stripped so we need to check
   for _LINUX_IN6_H and _IPV6_H now, and keep checking the old versions for
   maximum backwards compatibility.  */
# 44 "/usr/include/bits/in.h" 3 4
/* Options for use with `getsockopt' and `setsockopt' at the IP level.
   The first word in the comment at the right is the data type used;
   "bool" means a boolean value stored in an `int'.  */





/* For BSD compatibility.  */
# 96 "/usr/include/bits/in.h" 3 4
/* TProxy original addresses */
# 107 "/usr/include/bits/in.h" 3 4
/* IP_MTU_DISCOVER arguments.  */




/* Always use interface mtu (ignores dst pmtu) but don't set DF flag.
   Also incoming ICMP frag_needed notifications will be ignored on
   this socket to prevent accepting spoofed ones.  */

/* Like IP_PMTUDISC_INTERFACE but allow packets to be fragmented.  */
# 134 "/usr/include/bits/in.h" 3 4
/* To select the IP level.  */
# 160 "/usr/include/bits/in.h" 3 4
/* Options for use with `getsockopt' and `setsockopt' at the IPv6 level.
   The first word in the comment at the right is the data type used;
   "bool" means a boolean value stored in an `int'.  */
# 196 "/usr/include/bits/in.h" 3 4
/* Advanced API (RFC3542) (1).  */
# 212 "/usr/include/bits/in.h" 3 4
/* Advanced API (RFC3542) (2).  */





/* RFC5014.  */


/* RFC5082.  */
# 231 "/usr/include/bits/in.h" 3 4
/* Obsolete synonyms for the above.  */







/* IPV6_MTU_DISCOVER values.  */







/* Socket level values for IPv6.  */



/* Routing header options for IPv6.  */
# 38 "/usr/include/netinet/in.h" 2 3 4

/* Standard well-defined IP protocols.  */
enum
  {
    IPPROTO_IP = 0, /* Dummy protocol for TCP.  */

    IPPROTO_ICMP = 1, /* Internet Control Message Protocol.  */

    IPPROTO_IGMP = 2, /* Internet Group Management Protocol. */

    IPPROTO_IPIP = 4, /* IPIP tunnels (older KA9Q tunnels use 94).  */

    IPPROTO_TCP = 6, /* Transmission Control Protocol.  */

    IPPROTO_EGP = 8, /* Exterior Gateway Protocol.  */

    IPPROTO_PUP = 12, /* PUP protocol.  */

    IPPROTO_UDP = 17, /* User Datagram Protocol.  */

    IPPROTO_IDP = 22, /* XNS IDP protocol.  */

    IPPROTO_TP = 29, /* SO Transport Protocol Class 4.  */

    IPPROTO_DCCP = 33, /* Datagram Congestion Control Protocol.  */

    IPPROTO_IPV6 = 41, /* IPv6 header.  */

    IPPROTO_RSVP = 46, /* Reservation Protocol.  */

    IPPROTO_GRE = 47, /* General Routing Encapsulation.  */

    IPPROTO_ESP = 50, /* encapsulating security payload.  */

    IPPROTO_AH = 51, /* authentication header.  */

    IPPROTO_MTP = 92, /* Multicast Transport Protocol.  */

    IPPROTO_BEETPH = 94, /* IP option pseudo header for BEET.  */

    IPPROTO_ENCAP = 98, /* Encapsulation Header.  */

    IPPROTO_PIM = 103, /* Protocol Independent Multicast.  */

    IPPROTO_COMP = 108, /* Compression Header Protocol.  */

    IPPROTO_L2TP = 115, /* Layer 2 Tunnelling Protocol.  */

    IPPROTO_SCTP = 132, /* Stream Control Transmission Protocol.  */

    IPPROTO_UDPLITE = 136, /* UDP-Lite protocol.  */

    IPPROTO_MPLS = 137, /* MPLS in IP.  */

    IPPROTO_ETHERNET = 143, /* Ethernet-within-IPv6 Encapsulation.  */

    IPPROTO_RAW = 255, /* Raw IP packets.  */

    IPPROTO_SMC = 256, /* Shared Memory Communications.  */

    IPPROTO_MPTCP = 262, /* Multipath TCP connection.  */

    IPPROTO_MAX
  };

/* If __USE_KERNEL_IPV6_DEFS is 1 then the user has included the kernel
   network headers first and we should use those ABI-identical definitions
   instead of our own, otherwise 0.  */

enum
  {
    IPPROTO_HOPOPTS = 0, /* IPv6 Hop-by-Hop options.  */

    IPPROTO_ROUTING = 43, /* IPv6 routing header.  */

    IPPROTO_FRAGMENT = 44, /* IPv6 fragmentation header.  */

    IPPROTO_ICMPV6 = 58, /* ICMPv6.  */

    IPPROTO_NONE = 59, /* IPv6 no next header.  */

    IPPROTO_DSTOPTS = 60, /* IPv6 destination options.  */

    IPPROTO_MH = 135 /* IPv6 mobility header.  */

  };


/* Type to represent a port.  */
typedef uint16_t in_port_t;

/* Standard well-known ports.  */
enum
  {
    IPPORT_ECHO = 7, /* Echo service.  */
    IPPORT_DISCARD = 9, /* Discard transmissions service.  */
    IPPORT_SYSTAT = 11, /* System status service.  */
    IPPORT_DAYTIME = 13, /* Time of day service.  */
    IPPORT_NETSTAT = 15, /* Network status service.  */
    IPPORT_FTP = 21, /* File Transfer Protocol.  */
    IPPORT_TELNET = 23, /* Telnet protocol.  */
    IPPORT_SMTP = 25, /* Simple Mail Transfer Protocol.  */
    IPPORT_TIMESERVER = 37, /* Timeserver service.  */
    IPPORT_NAMESERVER = 42, /* Domain Name Service.  */
    IPPORT_WHOIS = 43, /* Internet Whois service.  */
    IPPORT_MTP = 57,

    IPPORT_TFTP = 69, /* Trivial File Transfer Protocol.  */
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79, /* Finger service.  */
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95, /* SUPDUP protocol.  */


    IPPORT_EXECSERVER = 512, /* execd service.  */
    IPPORT_LOGINSERVER = 513, /* rlogind service.  */
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,

    /* UDP ports.  */
    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,

    /* Ports less than this value are reserved for privileged processes.  */
    IPPORT_RESERVED = 1024,

    /* Ports greater this value are reserved for (non-privileged) servers.  */
    IPPORT_USERRESERVED = 5000
  };

/* Definitions of the bits in an Internet address integer.

   On subnets, host and network parts are found according to
   the subnet mask, not these masks.  */
# 197 "/usr/include/netinet/in.h" 3 4
/* Address to accept any incoming messages.  */

/* Address to send to all hosts.  */

/* Address indicating an error return.  */

/* Dummy address for source of ICMPv6 errors converted to IPv4 (RFC
   7600).  */


/* Network number for local host loopback.  */

/* Address to loopback in software to local host.  */




/* Defines for Multicast INADDR.  */







/* IPv6 address */
struct in6_addr
  {
    union
      {
 uint8_t __u6_addr8[16];
 uint16_t __u6_addr16[8];
 uint32_t __u6_addr32[4];
      } __in6_u;





  };


extern const struct in6_addr in6addr_any; /* :: */
extern const struct in6_addr in6addr_loopback; /* ::1 */







/* Structure describing an Internet socket address.  */
struct sockaddr_in
  {
    sa_family_t sin_family;
    in_port_t sin_port; /* Port number.  */
    struct in_addr sin_addr; /* Internet address.  */

    /* Pad to size of `struct sockaddr'.  */
    unsigned char sin_zero[sizeof (struct sockaddr)
      - (sizeof (unsigned short int))
      - sizeof (in_port_t)
      - sizeof (struct in_addr)];
  };




/* Ditto, for IPv6.  */
struct sockaddr_in6
  {
    sa_family_t sin6_family;
    in_port_t sin6_port; /* Transport layer port # */
    uint32_t sin6_flowinfo; /* IPv6 flow information */
    struct in6_addr sin6_addr; /* IPv6 address */
    uint32_t sin6_scope_id; /* IPv6 scope-id */
  };
# 314 "/usr/include/netinet/in.h" 3 4
/* Likewise, for IPv6.  */
struct ipv6_mreq
  {
    /* IPv6 multicast address of group */
    struct in6_addr ipv6mr_multiaddr;

    /* local interface */
    unsigned int ipv6mr_interface;
  };
# 394 "/usr/include/netinet/in.h" 3 4
/* Functions to convert between host and network byte order.

   Please note that these functions normally take `unsigned long int' or
   `unsigned short int' values as arguments and also return them.  But
   this was a short-sighted decision since on different systems the types
   may have different representations but the values are always the same.  */

extern uint32_t ntohl (uint32_t __netlong) ;
extern uint16_t ntohs (uint16_t __netshort)
                                        ;
extern uint32_t htonl (uint32_t __hostlong)
                                        ;
extern uint16_t htons (uint16_t __hostshort)
                                        ;



/* Get machine dependent optimized versions of byte swapping functions.  */
# 1 "/usr/include/bits/byteswap.h" 1 3 4
/* Macros and inline functions to swap the order of bytes in integer values.
   Copyright (C) 1997-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 413 "/usr/include/netinet/in.h" 2 3 4
# 1 "/usr/include/bits/uintn-identity.h" 1 3 4
/* Inline functions to return unsigned integer values unchanged.
   Copyright (C) 2017-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 28 "/usr/include/bits/uintn-identity.h" 3 4
/* These inline functions are to ensure the appropriate type
   conversions and associated diagnostics from macros that convert to
   a given endianness.  */

static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 414 "/usr/include/netinet/in.h" 2 3 4
# 60 "/usr/include/resolv.h" 2 3 4
# 1 "/usr/include/arpa/nameser.h" 1 3 4
/*
 * Copyright (c) 1983, 1989, 1993
 *    The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*
 * Copyright (c) 2004 by Internet Systems Consortium, Inc. ("ISC")
 * Copyright (c) 1996-1999 by Internet Software Consortium.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND INTERNET SOFTWARE CONSORTIUM DISCLAIMS
 * ALL WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL INTERNET SOFTWARE
 * CONSORTIUM BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS
 * ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS
 * SOFTWARE.
 */
# 61 "/usr/include/arpa/nameser.h" 3 4
/*
 * Define constants based on RFC 883, RFC 1034, RFC 1035
 */
# 79 "/usr/include/arpa/nameser.h" 3 4
/*
 * These can be expanded with synonyms, just keep ns_parse.c:ns_parserecord()
 * in synch with it.
 */
typedef enum __ns_sect {
 ns_s_qd = 0, /*%< Query: Question. */
 ns_s_zn = 0, /*%< Update: Zone. */
 ns_s_an = 1, /*%< Query: Answer. */
 ns_s_pr = 1, /*%< Update: Prerequisites. */
 ns_s_ns = 2, /*%< Query: Name servers. */
 ns_s_ud = 2, /*%< Update: Update. */
 ns_s_ar = 3, /*%< Query|Update: Additional records. */
 ns_s_max = 4
} ns_sect;

/*%
 * This is a message handle.  It is caller allocated and has no dynamic data.
 * This structure is intended to be opaque to all but ns_parse.c, thus the
 * leading _'s on the member names.  Use the accessor functions, not the _'s.
 */
typedef struct __ns_msg {
 const unsigned char *_msg, *_eom;
 uint16_t _id, _flags, _counts[ns_s_max];
 const unsigned char *_sections[ns_s_max];
 ns_sect _sect;
 int _rrnum;
 const unsigned char *_msg_ptr;
} ns_msg;

/* Private data structure - do not use from outside library. */
struct _ns_flagdata { int mask, shift; };
extern const struct _ns_flagdata _ns_flagdata[];

/* Accessor macros - this is part of the public interface. */







/*%
 * This is a parsed record.  It is caller allocated and has no dynamic data.
 */
typedef struct __ns_rr {
 char name[1025];
 uint16_t type;
 uint16_t rr_class;
 uint32_t ttl;
 uint16_t rdlength;
 const unsigned char * rdata;
} ns_rr;

/* Accessor macros - this is part of the public interface. */







/*%
 * These don't have to be in the same order as in the packet flags word,
 * and they can even overlap in some cases, but they will need to be kept
 * in synch with ns_parse.c:ns_flagdata[].
 */
typedef enum __ns_flag {
 ns_f_qr, /*%< Question/Response. */
 ns_f_opcode, /*%< Operation code. */
 ns_f_aa, /*%< Authoritative Answer. */
 ns_f_tc, /*%< Truncation occurred. */
 ns_f_rd, /*%< Recursion Desired. */
 ns_f_ra, /*%< Recursion Available. */
 ns_f_z, /*%< MBZ. */
 ns_f_ad, /*%< Authentic Data (DNSSEC). */
 ns_f_cd, /*%< Checking Disabled (DNSSEC). */
 ns_f_rcode, /*%< Response code. */
 ns_f_max
} ns_flag;

/*%
 * Currently defined opcodes.
 */
typedef enum __ns_opcode {
 ns_o_query = 0, /*%< Standard query. */
 ns_o_iquery = 1, /*%< Inverse query (deprecated/unsupported). */
 ns_o_status = 2, /*%< Name server status query (unsupported). */
    /* Opcode 3 is undefined/reserved. */
 ns_o_notify = 4, /*%< Zone change notification. */
 ns_o_update = 5, /*%< Zone update message. */
 ns_o_max = 6
} ns_opcode;

/*%
 * Currently defined response codes.
 */
typedef enum __ns_rcode {
 ns_r_noerror = 0, /*%< No error occurred. */
 ns_r_formerr = 1, /*%< Format error. */
 ns_r_servfail = 2, /*%< Server failure. */
 ns_r_nxdomain = 3, /*%< Name error. */
 ns_r_notimpl = 4, /*%< Unimplemented. */
 ns_r_refused = 5, /*%< Operation refused. */
 /* these are for BIND_UPDATE */
 ns_r_yxdomain = 6, /*%< Name exists */
 ns_r_yxrrset = 7, /*%< RRset exists */
 ns_r_nxrrset = 8, /*%< RRset does not exist */
 ns_r_notauth = 9, /*%< Not authoritative for zone */
 ns_r_notzone = 10, /*%< Zone of record different from zone section */
 ns_r_max = 11,
 /* The following are EDNS extended rcodes */
 ns_r_badvers = 16,
 /* The following are TSIG errors */
 ns_r_badsig = 16,
 ns_r_badkey = 17,
 ns_r_badtime = 18
} ns_rcode;

/* BIND_UPDATE */
typedef enum __ns_update_operation {
 ns_uop_delete = 0,
 ns_uop_add = 1,
 ns_uop_max = 2
} ns_update_operation;

/*%
 * This structure is used for TSIG authenticated messages
 */
struct ns_tsig_key {
        char name[1025], alg[1025];
        unsigned char *data;
        int len;
};
typedef struct ns_tsig_key ns_tsig_key;

/*%
 * This structure is used for TSIG authenticated TCP messages
 */
struct ns_tcp_tsig_state {
 int counter;
 struct dst_key *key;
 void *ctx;
 unsigned char sig[512];
 int siglen;
};
typedef struct ns_tcp_tsig_state ns_tcp_tsig_state;
# 234 "/usr/include/arpa/nameser.h" 3 4
/*%
 * Currently defined type values for resources and queries.
 */
typedef enum __ns_type
  {
    ns_t_invalid = 0,

    ns_t_a = 1,
    ns_t_ns = 2,
    ns_t_md = 3,
    ns_t_mf = 4,
    ns_t_cname = 5,
    ns_t_soa = 6,
    ns_t_mb = 7,
    ns_t_mg = 8,
    ns_t_mr = 9,
    ns_t_null = 10,
    ns_t_wks = 11,
    ns_t_ptr = 12,
    ns_t_hinfo = 13,
    ns_t_minfo = 14,
    ns_t_mx = 15,
    ns_t_txt = 16,
    ns_t_rp = 17,
    ns_t_afsdb = 18,
    ns_t_x25 = 19,
    ns_t_isdn = 20,
    ns_t_rt = 21,
    ns_t_nsap = 22,
    ns_t_nsap_ptr = 23,
    ns_t_sig = 24,
    ns_t_key = 25,
    ns_t_px = 26,
    ns_t_gpos = 27,
    ns_t_aaaa = 28,
    ns_t_loc = 29,
    ns_t_nxt = 30,
    ns_t_eid = 31,
    ns_t_nimloc = 32,
    ns_t_srv = 33,
    ns_t_atma = 34,
    ns_t_naptr = 35,
    ns_t_kx = 36,
    ns_t_cert = 37,
    ns_t_a6 = 38,
    ns_t_dname = 39,
    ns_t_sink = 40,
    ns_t_opt = 41,
    ns_t_apl = 42,
    ns_t_ds = 43,
    ns_t_sshfp = 44,
    ns_t_ipseckey = 45,
    ns_t_rrsig = 46,
    ns_t_nsec = 47,
    ns_t_dnskey = 48,
    ns_t_dhcid = 49,
    ns_t_nsec3 = 50,
    ns_t_nsec3param = 51,
    ns_t_tlsa = 52,
    ns_t_smimea = 53,
    ns_t_hip = 55,
    ns_t_ninfo = 56,
    ns_t_rkey = 57,
    ns_t_talink = 58,
    ns_t_cds = 59,
    ns_t_cdnskey = 60,
    ns_t_openpgpkey = 61,
    ns_t_csync = 62,
    ns_t_spf = 99,
    ns_t_uinfo = 100,
    ns_t_uid = 101,
    ns_t_gid = 102,
    ns_t_unspec = 103,
    ns_t_nid = 104,
    ns_t_l32 = 105,
    ns_t_l64 = 106,
    ns_t_lp = 107,
    ns_t_eui48 = 108,
    ns_t_eui64 = 109,
    ns_t_tkey = 249,
    ns_t_tsig = 250,
    ns_t_ixfr = 251,
    ns_t_axfr = 252,
    ns_t_mailb = 253,
    ns_t_maila = 254,
    ns_t_any = 255,
    ns_t_uri = 256,
    ns_t_caa = 257,
    ns_t_avc = 258,
    ns_t_ta = 32768,
    ns_t_dlv = 32769,

    ns_t_max = 65536
  } ns_type;

/*%
 * Values for class field
 */
typedef enum __ns_class {
 ns_c_invalid = 0, /*%< Cookie. */
 ns_c_in = 1, /*%< Internet. */
 ns_c_2 = 2, /*%< unallocated/unsupported. */
 ns_c_chaos = 3, /*%< MIT Chaos-net. */
 ns_c_hs = 4, /*%< MIT Hesiod. */
 /* Query class values which do not appear in resource records */
 ns_c_none = 254, /*%< for prereq. sections in update requests */
 ns_c_any = 255, /*%< Wildcard match. */
 ns_c_max = 65536
} ns_class;

/* Certificate type values in CERT resource records.  */
typedef enum __ns_cert_types {
 cert_t_pkix = 1, /*%< PKIX (X.509v3) */
 cert_t_spki = 2, /*%< SPKI */
 cert_t_pgp = 3, /*%< PGP */
 cert_t_url = 253, /*%< URL private type */
 cert_t_oid = 254 /*%< OID private type */
} ns_cert_types;

/*%
 * EDNS0 extended flags and option codes, host order.
 */



/*%
 * Inline versions of get/put short/long.  Pointer is advanced.
 */
# 399 "/usr/include/arpa/nameser.h" 3 4
int ns_msg_getflag (ns_msg, int) ;
unsigned int ns_get16 (const unsigned char *) ;
unsigned long ns_get32 (const unsigned char *) ;
void ns_put16 (unsigned int, unsigned char *) ;
void ns_put32 (unsigned long, unsigned char *) ;
int ns_initparse (const unsigned char *, int, ns_msg *) ;
int ns_skiprr (const unsigned char *, const unsigned char *,
      ns_sect, int) ;
int ns_parserr (ns_msg *, ns_sect, int, ns_rr *) ;
int ns_sprintrr (const ns_msg *, const ns_rr *,
        const char *, const char *, char *, size_t)
                              ;
int ns_sprintrrf (const unsigned char *, size_t, const char *,
         ns_class, ns_type, unsigned long,
         const unsigned char *, size_t, const char *,
         const char *, char *, size_t)
                              ;
int ns_format_ttl (unsigned long, char *, size_t)
                              ;
int ns_parse_ttl (const char *, unsigned long *)
                              ;
uint32_t ns_datetosecs (const char *, int *)
                              ;
int ns_name_ntol (const unsigned char *, unsigned char *, size_t)
            ;
int ns_name_ntop (const unsigned char *, char *, size_t) ;
int ns_name_pton (const char *, unsigned char *, size_t) ;
int ns_name_unpack (const unsigned char *, const unsigned char *,
    const unsigned char *, unsigned char *, size_t)
            ;
int ns_name_pack (const unsigned char *, unsigned char *, int,
         const unsigned char **, const unsigned char **)
            ;
int ns_name_uncompress (const unsigned char *,
        const unsigned char *,
        const unsigned char *,
        char *, size_t) ;
int ns_name_compress (const char *, unsigned char *, size_t,
      const unsigned char **,
      const unsigned char **) ;
int ns_name_skip (const unsigned char **, const unsigned char *)
            ;
void ns_name_rollback (const unsigned char *,
      const unsigned char **,
      const unsigned char **) ;

int ns_samedomain (const char *, const char *)
                      ;
int ns_subdomain (const char *, const char *)
                      ;
int ns_makecanon (const char *, char *, size_t)
                      ;
int ns_samename (const char *, const char *)
                      ;


# 1 "/usr/include/arpa/nameser_compat.h" 1 3 4
/* Copyright (c) 1983, 1989
 *    The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */






/*%
 * Structure for query header.  The order of the fields is machine- and
 * compiler-dependent, depending on the byte/bit order and the layout
 * of bit fields.  We use bit fields only in int variables, as this
 * is all ANSI requires.  This requires a somewhat confusing rearrangement.
 */

typedef struct {
 unsigned id :16; /*%< query identification number */
# 58 "/usr/include/arpa/nameser_compat.h" 3 4
   /* fields in third byte */
 unsigned rd :1; /*%< recursion desired */
 unsigned tc :1; /*%< truncated message */
 unsigned aa :1; /*%< authoritative answer */
 unsigned opcode :4; /*%< purpose of message */
 unsigned qr :1; /*%< response flag */
   /* fields in fourth byte */
 unsigned rcode :4; /*%< response code */
 unsigned cd: 1; /*%< checking disabled by resolver */
 unsigned ad: 1; /*%< authentic data from named */
 unsigned unused :1; /*%< unused bits (MBZ as of 4.9.3a3) */
 unsigned ra :1; /*%< recursion available */

   /* remaining bytes */
 unsigned qdcount :16; /*%< number of question entries */
 unsigned ancount :16; /*%< number of answer entries */
 unsigned nscount :16; /*%< number of authority entries */
 unsigned arcount :16; /*%< number of resource entries */
} HEADER;
# 115 "/usr/include/arpa/nameser_compat.h" 3 4
/*#define BADSIG		ns_r_badsig*/
/*#define BADKEY		ns_r_badkey*/
/*#define BADTIME		ns_r_badtime*/
# 211 "/usr/include/arpa/nameser_compat.h" 3 4
/* BIND_UPDATE */
# 221 "/usr/include/arpa/nameser_compat.h" 3 4
/*! \file */
# 456 "/usr/include/arpa/nameser.h" 2 3 4


/*! \file */
# 61 "/usr/include/resolv.h" 2 3 4
# 1 "/usr/include/bits/types/res_state.h" 1 3 4






/* res_state: the global state used by the resolver stub.  */





struct __res_state {
 int retrans; /* retransmission time interval */
 int retry; /* number of times to retransmit */
 unsigned long options; /* option flags - see below. */
 int nscount; /* number of name servers */
 struct sockaddr_in
  nsaddr_list[3]; /* address of name server */
 unsigned short id; /* current message id */
 /* 2 byte hole here.  */
 char *dnsrch[6 +1]; /* components of domain to search */
 char defdname[256]; /* default domain (deprecated) */
 unsigned long pfcode; /* RES_PRF_ flags - see below. */
 unsigned ndots:4; /* threshold for initial abs. query */
 unsigned nsort:4; /* number of elements in sort_list[] */
 unsigned ipv6_unavail:1; /* connecting to IPv6 server failed */
 unsigned unused:23;
 struct {
  struct in_addr addr;
  uint32_t mask;
 } sort_list[10];
 /* 4 byte hole here on 64-bit architectures.  */
 void * __glibc_unused_qhook;
 void * __glibc_unused_rhook;
 int res_h_errno; /* last one set for this context */
 int _vcsock; /* PRIVATE: for res_send VC i/o */
 unsigned int _flags; /* PRIVATE: see below */
 /* 4 byte hole here on 64-bit architectures.  */
 union {
  char pad[52]; /* On an i386 this means 512b total. */
  struct {
   uint16_t nscount;
   uint16_t nsmap[3];
   int nssocks[3];
   uint16_t nscount6;
   uint16_t nsinit;
   struct sockaddr_in6 *nsaddrs[3];




   unsigned int __glibc_reserved[2];

  } _ext;
 } _u;
};

typedef struct __res_state *res_state;
# 62 "/usr/include/resolv.h" 2 3 4

/*
 * Global defines and variables for resolver stub.
 */
# 77 "/usr/include/resolv.h" 3 4
/*
 * Revision information.  This is the release date in YYYYMMDD format.
 * It can change every day so the right thing to do with it is use it
 * in preprocessor commands such as "#if (__RES > 19931104)".  Do not
 * compare for equality; rather, use it to determine whether your resolver
 * is new enough to contain a certain feature.
 */



/*
 * Resolver configuration file.
 * Normally not present, but may contain the address of the
 * initial name server(s) to query and the domain search list.
 */





struct res_sym {
 int number; /* Identifying number, like T_MX */
 char * name; /* Its symbolic name, like "MX" */
 char * humanname; /* Its fun name, like "mail exchanger" */
};

/*
 * Resolver options (keep these in synch with res_debug.c, please)
 */
# 140 "/usr/include/resolv.h" 3 4
/*
 * Resolver "pfcode" values.  Used by dig.
 */
# 158 "/usr/include/resolv.h" 3 4
/*			0x00008000	*/

/* Things involving an internal (static) resolver context. */

extern struct __res_state *__res_state(void) ;
# 183 "/usr/include/resolv.h" 3 4
void __fp_nquery (const unsigned char *, int, FILE *)
                     ;
void __fp_query (const unsigned char *, FILE *)
                     ;
const char * __hostalias (const char *)
                                                     ;
void __p_query (const unsigned char *)
                     ;
void __res_close (void) ;
int __res_init (void) ;
int __res_isourserver (const struct sockaddr_in *)
                     ;
int res_mkquery (int, const char *, int, int,
        const unsigned char *, int, const unsigned char *,
        unsigned char *, int) ;
int res_query (const char *, int, int, unsigned char *, int)
            ;
int res_querydomain (const char *, const char *, int, int,
     unsigned char *, int) ;
int res_search (const char *, int, int, unsigned char *, int)
            ;
int res_send (const unsigned char *, int, unsigned char *, int)
            ;
# 235 "/usr/include/resolv.h" 3 4
int res_hnok (const char *) ;
int res_ownok (const char *) ;
int res_mailok (const char *) ;
int res_dnok (const char *) ;
int __sym_ston (const struct res_sym *, const char *, int *)
                     ;
const char * __sym_ntos (const struct res_sym *, int, int *)
                     ;
const char * __sym_ntop (const struct res_sym *, int, int *)
                     ;
int __b64_ntop (const unsigned char *, size_t, char *, size_t)
         ;
int __b64_pton (char const *, unsigned char *, size_t) ;
int __loc_aton (const char *__ascii, unsigned char *__binary)
                     ;
const char * __loc_ntoa (const unsigned char *__binary, char *__ascii)
                     ;
int dn_skipname (const unsigned char *, const unsigned char *)
         ;
void __putlong (uint32_t, unsigned char *)
                                                  ;
void __putshort (uint16_t, unsigned char *)
                                                  ;
const char * __p_class (int) ;
const char * __p_time (uint32_t) ;
const char * __p_type (int) ;
const char * __p_rcode (int) ;
const unsigned char * __p_cdnname (const unsigned char *, const unsigned char *,
     int, FILE *) ;
const unsigned char * __p_cdname (const unsigned char *, const unsigned char *,
    FILE *) ;
const unsigned char * __p_fqnname (const unsigned char *__cp,
     const unsigned char *__msg,
     int, char *, int) ;
const unsigned char * __p_fqname (const unsigned char *, const unsigned char *,
    FILE *) ;
const char * __p_option (unsigned long __option) ;
int __dn_count_labels (const char *) ;
int dn_comp (const char *, unsigned char *, int, unsigned char **,
    unsigned char **) ;
int dn_expand (const unsigned char *, const unsigned char *,
      const unsigned char *, char *, int) ;
unsigned int __res_randomid (void)
                                                    ;
int __res_nameinquery (const char *, int, int,
     const unsigned char *,
     const unsigned char *)
                     ;
int __res_queriesmatch (const unsigned char *,
      const unsigned char *,
      const unsigned char *,
      const unsigned char *)
                     ;
/* Things involving a resolver context. */
int __res_ninit (res_state) ;
void __fp_resstat (const res_state, FILE *)
                     ;
const char * __res_hostalias (const res_state, const char *, char *, size_t)
                                                                ;
int res_nquery (res_state, const char *, int, int,
       unsigned char *, int) ;
int res_nsearch (res_state, const char *, int, int,
        unsigned char *, int) ;
int res_nquerydomain (res_state, const char *, const char *, int,
      int, unsigned char *, int) ;
int res_nmkquery (res_state, int, const char *, int, int,
         const unsigned char *, int,
         const unsigned char *, unsigned char *, int)
            ;
int res_nsend (res_state, const unsigned char *, int,
      unsigned char *, int) ;
void __res_nclose (res_state) ;
# 80 "all.c" 2
# 1 "/usr/include/sched.h" 1 3 4
/* Definitions for POSIX 1003.1b-1993 (aka POSIX.4) scheduling interface.
   Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






/* Get type definitions.  */




# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 93 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_size_t.h" 1 3 4
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 94 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 108 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_null.h" 1 3 4
/*===---- __stddef_null.h - Definition of NULL -----------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */



/* linux/stddef.h will define NULL to 0. glibc (and other) headers then define
 * __need_NULL and rely on stddef.h to redefine NULL to the correct value again.
 * Modules don't support redefining macros like that, but support that pattern
 * in the non-modules case.
 */
# 109 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 30 "/usr/include/sched.h" 2 3 4




# 1 "/usr/include/time.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.23 Date and time	<time.h>
 */
# 29 "/usr/include/time.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 93 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_size_t.h" 1 3 4
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 94 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 108 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_null.h" 1 3 4
/*===---- __stddef_null.h - Definition of NULL -----------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */



/* linux/stddef.h will define NULL to 0. glibc (and other) headers then define
 * __need_NULL and rely on stddef.h to redefine NULL to the correct value again.
 * Modules don't support redefining macros like that, but support that pattern
 * in the non-modules case.
 */
# 109 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 30 "/usr/include/time.h" 2 3 4

/* This defines CLOCKS_PER_SEC, which is the number of processor clock
   ticks per second, and possibly a number of other constants.   */
# 1 "/usr/include/bits/time.h" 1 3 4
/* System-dependent timing definitions.  Linux version.
   Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 * Never include this file directly; use <time.h> instead.
 */






/* ISO/IEC 9899:1999 7.23.1: Components of time
   The macro `CLOCKS_PER_SEC' is an expression with type `clock_t' that is
   the number per second of the value returned by the `clock' function.  */
/* CAE XSH, Issue 4, Version 2: <time.h>
   The value of CLOCKS_PER_SEC is required to be 1 million on all
   XSI-conformant systems. */
# 34 "/usr/include/time.h" 2 3 4

/* Many of the typedefs and structs whose official home is this header
   may also need to be defined by other headers.  */
# 1 "/usr/include/bits/types/clock_t.h" 1 3 4





/* Returned by `clock'.  */
typedef __clock_t clock_t;
# 38 "/usr/include/time.h" 2 3 4

# 1 "/usr/include/bits/types/struct_tm.h" 1 3 4





/* ISO C `broken-down time' structure.  */
struct tm
{
  int tm_sec; /* Seconds.	[0-60] (1 leap second) */
  int tm_min; /* Minutes.	[0-59] */
  int tm_hour; /* Hours.	[0-23] */
  int tm_mday; /* Day.		[1-31] */
  int tm_mon; /* Month.	[0-11] */
  int tm_year; /* Year	- 1900.  */
  int tm_wday; /* Day of week.	[0-6] */
  int tm_yday; /* Days in year.[0-365]	*/
  int tm_isdst; /* DST.		[-1/0/1]*/





  long int __tm_gmtoff; /* Seconds east of UTC.  */
  const char *__tm_zone; /* Timezone abbreviation.  */

};
# 40 "/usr/include/time.h" 2 3 4
# 64 "/usr/include/time.h" 3 4
/* Time base values for timespec_get.  */





/* Time used by the program so far (user time + system time).
   The result / CLOCKS_PER_SEC is program time in seconds.  */
extern clock_t clock (void) ;


/* Return the current time and put it in *TIMER if TIMER is not NULL.  */
extern time_t time (time_t *__timer) ;

/* Return the difference between TIME1 and TIME0.  */
extern double difftime (time_t __time1, time_t __time0);

/* Return the `time_t' representation of TP and normalize TP.  */
extern time_t mktime (struct tm *__tp) ;
# 96 "/usr/include/time.h" 3 4
/* Format TP into S according to FORMAT.
   Write no more than MAXSIZE characters and return the number
   of characters written, or 0 if it would exceed MAXSIZE.  */
extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp)
                               ;
# 130 "/usr/include/time.h" 3 4
/* Return the `struct tm' representation of *TIMER
   in Universal Coordinated Time (aka Greenwich Mean Time).  */
extern struct tm *gmtime (const time_t *__timer) ;

/* Return the `struct tm' representation
   of *TIMER in the local timezone.  */
extern struct tm *localtime (const time_t *__timer) ;
# 177 "/usr/include/time.h" 3 4
/* Return a string of the form "Day Mon dd hh:mm:ss yyyy\n"
   that is the representation of TP in this format.  */
extern char *asctime (const struct tm *__tp) ;

/* Equivalent to `asctime (localtime (timer))'.  */

extern char *ctime (const time_t *__timer) ;
# 216 "/usr/include/time.h" 3 4
/* Defined in localtime.c.  */
extern char *__tzname[2]; /* Current time zone abbreviations.  */
extern int __daylight; /* If daylight-saving time is ever in use.  */
extern long int __timezone; /* Seconds west of UTC.  */
# 237 "/usr/include/time.h" 3 4
/* Nonzero if YEAR is a leap year (every 4 years,
   except every 100th isn't, and every 400th is).  */
# 382 "/usr/include/time.h" 3 4
/* Set TS to calendar time based in time base BASE.  */
extern int timespec_get (struct timespec *__ts, int __base)
                            ;
# 35 "/usr/include/sched.h" 2 3 4







/* Get system specific constant and data structure definitions.  */
# 1 "/usr/include/bits/sched.h" 1 3 4
/* Definitions of constants and data structure for POSIX 1003.1b-1993
   scheduling interface.
   Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 27 "/usr/include/bits/sched.h" 3 4
/* Scheduling algorithms.  */
# 126 "/usr/include/bits/sched.h" 3 4
# 1 "/usr/include/bits/types/struct_sched_param.h" 1 3 4
/* Sched parameter structure.  Generic version.
   Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library;  if not, see
   <https://www.gnu.org/licenses/>.  */




/* Data structure to describe a process' schedulability.  */
struct sched_param
{
  int sched_priority;
};
# 127 "/usr/include/bits/sched.h" 2 3 4
# 44 "/usr/include/sched.h" 2 3 4
# 1 "/usr/include/bits/cpu-set.h" 1 3 4
/* Definition of the cpu_set_t structure used by the POSIX 1003.1b-1993
   scheduling interface.
   Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 27 "/usr/include/bits/cpu-set.h" 3 4
/* Size definition for CPU sets.  */



/* Type for array elements in 'cpu_set_t'.  */
typedef unsigned long int __cpu_mask;

/* Basic access functions.  */



/* Data structure to describe CPU mask.  */
typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;

/* Access functions for CPU masks.  */
# 117 "/usr/include/bits/cpu-set.h" 3 4
extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
            ;
extern cpu_set_t *__sched_cpualloc (size_t __count) ;
extern void __sched_cpufree (cpu_set_t *__set) ;
# 45 "/usr/include/sched.h" 2 3 4

/* Backward compatibility.  */






/* Set scheduling parameters for a process.  */
extern int sched_setparam (__pid_t __pid, const struct sched_param *__param)
            ;

/* Retrieve scheduling parameters for a particular process.  */
extern int sched_getparam (__pid_t __pid, struct sched_param *__param) ;

/* Set scheduling algorithm and/or parameters for a process.  */
extern int sched_setscheduler (__pid_t __pid, int __policy,
          const struct sched_param *__param) ;

/* Retrieve scheduling algorithm for a particular purpose.  */
extern int sched_getscheduler (__pid_t __pid) ;

/* Yield the processor.  */
extern int sched_yield (void) ;

/* Get maximum priority value for a scheduler.  */
extern int sched_get_priority_max (int __algorithm) ;

/* Get minimum priority value for a scheduler.  */
extern int sched_get_priority_min (int __algorithm) ;

/* Get the SCHED_RR interval for the named process.  */

extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) ;
# 81 "all.c" 2
# 1 "/usr/include/search.h" 1 3 4
/* Declarations for System V style searching functions.
   Copyright (C) 1995-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */







# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 93 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_size_t.h" 1 3 4
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 94 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 26 "/usr/include/search.h" 2 3 4
# 51 "/usr/include/search.h" 3 4
/* For use with hsearch(3).  */


typedef int (*__compar_fn_t) (const void *, const void *);






/* Action which shall be performed in the call the hsearch.  */
typedef enum
  {
    FIND,
    ENTER
  }
ACTION;

typedef struct entry
  {
    char *key;
    void *data;
  }
ENTRY;

/* Opaque type for internal use.  */
struct _ENTRY;

/* Family of hash table handling functions.  The functions also
   have reentrant counterparts ending with _r.  The non-reentrant
   functions all work on a single internal hashing table.  */

/* Search for entry matching ITEM.key in internal hash table.  If
   ACTION is `FIND' return found entry or signal error by returning
   NULL.  If ACTION is `ENTER' replace existing data (if any) with
   ITEM.data.  */
extern ENTRY *hsearch (ENTRY __item, ACTION __action) ;

/* Create a new hashing table which will at most contain NEL elements.  */
extern int hcreate (size_t __nel) ;

/* Destroy current internal hashing table.  */
extern void hdestroy (void) ;
# 113 "/usr/include/search.h" 3 4
/* The tsearch routines are very interesting. They make many
   assumptions about the compiler.  It assumes that the first field
   in node must be the "key" field, which points to the datum.
   Everything depends on that.  */
/* For tsearch */
typedef enum
{
  preorder,
  postorder,
  endorder,
  leaf
}
VISIT;

/* Search for an entry matching the given KEY in the tree pointed to
   by *ROOTP and insert a new element if not found.  */
extern void *tsearch (const void *__key, void **__rootp,
        __compar_fn_t __compar);

/* Search for an entry matching the given KEY in the tree pointed to
   by *ROOTP.  If no matching entry is available return NULL.  */
extern void *tfind (const void *__key, void *const *__rootp,
      __compar_fn_t __compar);

/* Remove the element matching KEY from the tree pointed to by *ROOTP.  */
extern void *tdelete (const void *__restrict __key,
        void **__restrict __rootp,
        __compar_fn_t __compar);



typedef void (*__action_fn_t) (const void *__nodep, VISIT __value,
          int __level);


/* Walk through the whole tree and call the ACTION callback for every node
   or leaf.  */
extern void twalk (const void *__root, __action_fn_t __action);
# 169 "/usr/include/search.h" 3 4
/* Perform linear search for KEY by comparing by COMPAR in an array
   [BASE,BASE+NMEMB*SIZE).  */
extern void *lfind (const void *__key, const void *__base,
      size_t *__nmemb, size_t __size, __compar_fn_t __compar);

/* Perform linear search for KEY by comparing by COMPAR function in
   array [BASE,BASE+NMEMB*SIZE) and insert entry if not found.  */
extern void *lsearch (const void *__key, void *__base,
        size_t *__nmemb, size_t __size, __compar_fn_t __compar);
# 82 "all.c" 2
# 1 "/usr/include/semaphore.h" 1 3 4
/* Copyright (C) 2002-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 27 "/usr/include/semaphore.h" 3 4
/* Get the definition for sem_t.  */
# 1 "/usr/include/bits/semaphore.h" 1 3 4
/* Generic POSIX semaphore type layout
   Copyright (C) 1995-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 14 "/usr/include/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 24 "/usr/include/bits/semaphore.h" 2 3 4







/* Value returned if `sem_open' failed.  */



typedef union
{
  char __size[32];
  long int __align;
} sem_t;
# 29 "/usr/include/semaphore.h" 2 3 4




/* Initialize semaphore object SEM to VALUE.  If PSHARED then share it
   with other processes.  */
extern int sem_init (sem_t *__sem, int __pshared, unsigned int __value)
                         ;

/* Free resources associated with semaphore object SEM.  */
extern int sem_destroy (sem_t *__sem) ;

/* Open a named semaphore NAME with open flags OFLAG.  */
extern sem_t *sem_open (const char *__name, int __oflag, ...)
                         ;

/* Close descriptor for named semaphore SEM.  */
extern int sem_close (sem_t *__sem) ;

/* Remove named semaphore NAME.  */
extern int sem_unlink (const char *__name) ;

/* Wait for SEM being posted.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int sem_wait (sem_t *__sem) ;
# 99 "/usr/include/semaphore.h" 3 4
/* Test whether SEM is posted.  */
extern int sem_trywait (sem_t *__sem) ;

/* Post SEM.  */
extern int sem_post (sem_t *__sem) ;

/* Get current value of SEM and store it in *SVAL.  */
extern int sem_getvalue (sem_t *__restrict __sem, int *__restrict __sval)
                            ;
# 83 "all.c" 2
# 1 "/usr/include/setjmp.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.13 Nonlocal jumps	<setjmp.h>
 */
# 29 "/usr/include/setjmp.h" 3 4
# 1 "/usr/include/bits/setjmp.h" 1 3 4
/* Copyright (C) 2001-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* Define the machine-dependent type `jmp_buf'.  x86-64 version.  */







# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 14 "/usr/include/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 27 "/usr/include/bits/setjmp.h" 2 3 4




typedef long int __jmp_buf[8];
# 30 "/usr/include/setjmp.h" 2 3 4
# 1 "/usr/include/bits/types/struct___jmp_buf_tag.h" 1 3 4
/* Define struct __jmp_buf_tag.
   Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





# 1 "/usr/include/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 24 "/usr/include/bits/types/struct___jmp_buf_tag.h" 2 3 4

/* Calling environment, plus possibly a saved signal mask.  */
struct __jmp_buf_tag
  {
    /* NOTE: The machine-dependent definitions of `__sigsetjmp'
       assume that a `jmp_buf' begins with a `__jmp_buf' and that
       `__mask_was_saved' follows it.  Do not move these members
       or add others before it.  */
    __jmp_buf __jmpbuf; /* Calling environment.  */
    int __mask_was_saved; /* Saved the signal mask?  */
    __sigset_t __saved_mask; /* Saved signal mask.  */
  };
# 31 "/usr/include/setjmp.h" 2 3 4

typedef struct __jmp_buf_tag jmp_buf[1];

/* Store the calling environment in ENV, also saving the signal mask.
   Return 0.  */
extern int setjmp (jmp_buf __env) ;

/* Store the calling environment in ENV, also saving the
   signal mask if SAVEMASK is nonzero.  Return 0.
   This is the internal name for `sigsetjmp'.  */
extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) ;

/* Store the calling environment in ENV, not saving the signal mask.
   Return 0.  */
extern int _setjmp (struct __jmp_buf_tag __env[1]) ;

/* Do not save the signal mask.  This is equivalent to the `_setjmp'
   BSD function.  */



/* Jump to the environment saved in ENV, making the
   `setjmp' call there return VAL, or 1 if VAL is 0.  */
extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
                                             ;
# 85 "/usr/include/setjmp.h" 3 4
/* Define helper functions to catch unsafe code.  */
# 84 "all.c" 2
# 1 "/usr/include/sgtty.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






# 1 "/usr/include/sys/ioctl.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 25 "/usr/include/sys/ioctl.h" 3 4
/* Get the list of `ioctl' requests and related constants.  */
# 1 "/usr/include/bits/ioctls.h" 1 3 4
/* Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





/* Use the definitions from the kernel header files.  */
# 1 "/usr/include/asm/ioctls.h" 1 3 4
# 1 "/usr/include/asm-generic/ioctls.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */



# 1 "/usr/include/linux/ioctl.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */



# 1 "/usr/include/asm/ioctl.h" 1 3 4
# 1 "/usr/include/asm-generic/ioctl.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */



/* ioctl command encoding: 32 bits total, command in lower 16 bits,
 * size of the parameter structure in the lower 14 bits of the
 * upper 16 bits.
 * Encoding the size of the parameter structure in the ioctl request
 * is useful for catching programs compiled with old versions
 * and to avoid overwriting user space outside the user buffer area.
 * The highest 2 bits are reserved for indicating the ``access mode''.
 * NOTE: This limits the max parameter size to 16kB -1 !
 */

/*
 * The following is for compatibility across the various Linux
 * platforms.  The generic ioctl numbering scheme doesn't really enforce
 * a type field.  De facto, however, the top 8 bits of the lower 16
 * bits are indeed used as a type field, so we might just as well make
 * this explicit here.  Please be sure to use the decoding macros
 * below from now on.
 */



/*
 * Let any architecture override either of the following before
 * including this file.
 */
# 49 "/usr/include/asm-generic/ioctl.h" 3 4
/*
 * Direction bits, which any architecture can choose to override
 * before including this file.
 *
 * NOTE: _IOC_WRITE means userland is writing and kernel is
 * reading. _IOC_READ means userland is reading and kernel is writing.
 */
# 77 "/usr/include/asm-generic/ioctl.h" 3 4
/*
 * Used to create numbers.
 *
 * NOTE: _IOW means userland is writing and kernel is reading. _IOR
 * means userland is reading and kernel is writing.
 */
# 91 "/usr/include/asm-generic/ioctl.h" 3 4
/* used to decode ioctl numbers.. */





/* ...and for the drivers/sound files... */
# 2 "/usr/include/asm/ioctl.h" 2 3 4
# 6 "/usr/include/linux/ioctl.h" 2 3 4
# 6 "/usr/include/asm-generic/ioctls.h" 2 3 4

/*
 * These are the most common definitions for tty ioctl numbers.
 * Most of them do not use the recommended _IOC(), but there is
 * probably some source code out there hardcoding the number,
 * so we might as well use them for all new platforms.
 *
 * The architectures that use different values here typically
 * try to be compatible with some Unix variants for the same
 * architecture.
 */

/* 0x54 is just a magic number to make these relatively unique ('T') */
# 101 "/usr/include/asm-generic/ioctls.h" 3 4
/*
 * Some arches already define FIOQSIZE due to a historical
 * conflict with a Hayes modem-specific ioctl value.
 */




/* Used for packet mode */
# 2 "/usr/include/asm/ioctls.h" 2 3 4
# 24 "/usr/include/bits/ioctls.h" 2 3 4

# 1 "/usr/include/linux/sockios.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0+ WITH Linux-syscall-note */
/*
 * INET		An implementation of the TCP/IP protocol suite for the LINUX
 *		operating system.  INET is implemented using the  BSD Socket
 *		interface as the means of communication with the user level.
 *
 *		Definitions of the socket-level I/O control calls.
 *
 * Version:	@(#)sockios.h	1.0.2	03/09/93
 *
 * Authors:	Ross Biro
 *		Fred N. van Kempen, <waltje@uWalt.NL.Mugnet.ORG>
 *
 *		This program is free software; you can redistribute it and/or
 *		modify it under the terms of the GNU General Public License
 *		as published by the Free Software Foundation; either version
 *		2 of the License, or (at your option) any later version.
 */



# 1 "/usr/include/asm/bitsperlong.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
# 11 "/usr/include/asm/bitsperlong.h" 3 4
# 1 "/usr/include/asm-generic/bitsperlong.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
# 12 "/usr/include/asm/bitsperlong.h" 2 3 4
# 23 "/usr/include/linux/sockios.h" 2 3 4
# 1 "/usr/include/asm/sockios.h" 1 3 4
# 1 "/usr/include/asm-generic/sockios.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */



/* Socket-level I/O control calls. */
# 2 "/usr/include/asm/sockios.h" 2 3 4
# 24 "/usr/include/linux/sockios.h" 2 3 4

/* Linux-specific socket ioctls */





/*
 * the timeval/timespec data structure layout is defined by libc,
 * so we need to cover both possible versions on 32-bit.
 */
/* Get stamp (timeval) */

/* Get stamp (timespec) */



/* on 64-bit and x32, avoid the ?: operator */
# 51 "/usr/include/linux/sockios.h" 3 4
/* Routing table calls. */




/* Socket configuration controls. */
# 99 "/usr/include/linux/sockios.h" 3 4
/* SIOCGIFDIVERT was:	0x8944		Frame diversion support */
/* SIOCSIFDIVERT was:	0x8945		Set frame diversion options */
# 113 "/usr/include/linux/sockios.h" 3 4
/* ARP cache control calls. */
      /*  0x8950 - 0x8952  * obsolete calls, don't re-use */




/* RARP cache control calls. */




/* Driver configuration calls */




/* DLCI configuration calls */







/* bonding calls */
# 146 "/usr/include/linux/sockios.h" 3 4
/* bridge calls */





/* hardware time stamping: parameters in linux/net_tstamp.h */



/* Device private ioctl calls */

/*
 *	These 16 ioctls are available to devices via the do_ioctl() device
 *	vector. Each device should include this file and redefine these names
 *	as their own. Because these are device dependent it is a good idea
 *	_NOT_ to issue them to random objects and hope.
 *
 *	THESE IOCTLS ARE _DEPRECATED_ AND WILL DISAPPEAR IN 2.5.X -DaveM
 */



/*
 *	These 16 ioctl calls are protocol private
 */
# 26 "/usr/include/bits/ioctls.h" 2 3 4
# 27 "/usr/include/sys/ioctl.h" 2 3 4

/* Define some types used by `ioctl' requests.  */
# 1 "/usr/include/bits/ioctl-types.h" 1 3 4
/* Structure types for pre-termios terminal ioctls.  Linux version.
   Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





/* Get definition of constants for use with `ioctl'.  */
# 1 "/usr/include/asm/ioctls.h" 1 3 4
# 25 "/usr/include/bits/ioctl-types.h" 2 3 4


struct winsize
  {
    unsigned short int ws_row;
    unsigned short int ws_col;
    unsigned short int ws_xpixel;
    unsigned short int ws_ypixel;
  };

/* modem lines */
# 48 "/usr/include/bits/ioctl-types.h" 3 4
/* ioctl (fd, TIOCSERGETLSR, &result) where result may be as below */

/* line disciplines */
# 30 "/usr/include/sys/ioctl.h" 2 3 4

/* On a Unix system, the system <sys/ioctl.h> probably defines some of
   the symbols we define in <sys/ttydefaults.h> (usually with the same
   values).  The code to generate <bits/ioctls.h> has omitted these
   symbols to avoid the conflict, but a Unix program expects <sys/ioctl.h>
   to define them, so we must include <sys/ttydefaults.h> here.  */
# 1 "/usr/include/sys/ttydefaults.h" 1 3 4
/*-
 * Copyright (c) 1982, 1986, 1993
 *	The Regents of the University of California.  All rights reserved.
 * (c) UNIX System Laboratories, Inc.
 * All or some portions of this file are derived from material licensed
 * to the University of California by American Telephone and Telegraph
 * Co. or Unix System Laboratories, Inc. and are reproduced herein with
 * the permission of UNIX System Laboratories, Inc.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)ttydefaults.h	8.4 (Berkeley) 1/21/94
 */

/*
 * System wide defaults for terminal state.  Linux version.
 */



/*
 * Defaults on "first" open.
 */






/*
 * Control Character Defaults
 */
# 82 "/usr/include/sys/ttydefaults.h" 3 4
/* compat */




/* PROTECTED INCLUSION ENDS HERE */


/*
 * #define TTYDEFCHARS to include an array of default control characters.
 */
# 37 "/usr/include/sys/ioctl.h" 2 3 4

/* Perform the I/O control operation specified by REQUEST on FD.
   One argument may follow; its presence and type depend on REQUEST.
   Return value depends on REQUEST.  Usually -1 indicates error.  */

extern int ioctl (int __fd, unsigned long int __request, ...) ;
# 24 "/usr/include/sgtty.h" 2 3 4

/* On some systems this type is not defined by <bits/ioctl-types.h>;
   in that case, the functions are just stubs that return ENOSYS.  */
struct sgttyb;



/* Fill in *PARAMS with terminal parameters associated with FD.  */
extern int gtty (int __fd, struct sgttyb *__params) ;

/* Set the terminal parameters associated with FD to *PARAMS.  */
extern int stty (int __fd, const struct sgttyb *__params) ;
# 85 "all.c" 2
# 1 "/usr/include/shadow.h" 1 3 4
/* Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* Declaration of types and functions for "shadow" storage of hashed
   passphrases.  The shadow database is like the user database, but is
   only accessible with special privileges, so that malicious users
   cannot retrieve everyone else's hashed passphrase to brute-force at
   their convenience.  */






# 1 "/usr/include/paths.h" 1 3 4
/*
 * Copyright (c) 1989, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)paths.h	8.1 (Berkeley) 6/2/93
 */




/* Default search path. */

/* All standard utilities path. */
# 68 "/usr/include/paths.h" 3 4
/* Provide trailing slash, since mostly used for building pathnames. */
# 30 "/usr/include/shadow.h" 2 3 4


# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 93 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_size_t.h" 1 3 4
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 94 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 33 "/usr/include/shadow.h" 2 3 4



/* Paths to the user database files.  */





/* A record in the shadow database.  */
struct spwd
  {
    char *sp_namp; /* Login name.  */
    char *sp_pwdp; /* Hashed passphrase.  */
    long int sp_lstchg; /* Date of last change.  */
    long int sp_min; /* Minimum number of days between changes.  */
    long int sp_max; /* Maximum number of days between changes.  */
    long int sp_warn; /* Number of days to warn user to change
				   the password.  */
    long int sp_inact; /* Number of days the account may be
				   inactive.  */
    long int sp_expire; /* Number of days since 1970-01-01 until
				   account expires.  */
    unsigned long int sp_flag; /* Reserved.  */
  };


/* Open database for reading.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern void setspent (void);

/* Close database.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern void endspent (void);

/* Get next entry from database, perhaps after opening the file.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern struct spwd *getspent (void);

/* Get shadow entry matching NAME.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern struct spwd *getspnam (const char *__name);

/* Read shadow entry from STRING.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern struct spwd *sgetspent (const char *__string);

/* Read next shadow entry from STREAM.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern struct spwd *fgetspent (FILE *__stream);

/* Write line containing shadow entry to stream.

   This function is not part of POSIX and therefore no official
   cancellation point.  But due to similarity with an POSIX interface
   or due to the implementation it is a cancellation point and
   therefore not marked with __THROW.  */
extern int putspent (const struct spwd *__p, FILE *__stream);
# 145 "/usr/include/shadow.h" 3 4
/* The simple locking functionality provided here is not suitable for
   multi-threaded applications.  */

/* Request exclusive access to /etc/passwd and /etc/shadow.  */
extern int lckpwdf (void) ;

/* Release exclusive access to /etc/passwd and /etc/shadow.  */
extern int ulckpwdf (void) ;
# 86 "all.c" 2

# 1 "/usr/include/spawn.h" 1 3 4
/* Definitions for POSIX spawn interface.
   Copyright (C) 2000-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */







# 1 "/usr/include/bits/types/sigset_t.h" 1 3 4





/* A set of signals to be blocked, unblocked, or waited for.  */
typedef __sigset_t sigset_t;
# 26 "/usr/include/spawn.h" 2 3 4


/* Data structure to contain attributes for thread creation.  */
typedef struct
{
  short int __flags;
  pid_t __pgrp;
  sigset_t __sd;
  sigset_t __ss;
  struct sched_param __sp;
  int __policy;
  int __cgroup;
  int __pad[15];
} posix_spawnattr_t;


/* Data structure to contain information about the actions to be
   performed in the new process with respect to file descriptors.  */
typedef struct
{
  int __allocated;
  int __used;
  struct __spawn_action *__actions;
  int __pad[16];
} posix_spawn_file_actions_t;


/* Flags to be set in the `posix_spawnattr_t'.  */
# 69 "/usr/include/spawn.h" 3 4
/* Spawn a new process executing PATH with the attributes describes in *ATTRP.
   Before running the process perform the actions described in FILE-ACTIONS.

   This function is a possible cancellation point and therefore not
   marked with __THROW. */
extern int posix_spawn (pid_t *__restrict __pid,
   const char *__restrict __path,
   const posix_spawn_file_actions_t *__restrict
   __file_actions,
   const posix_spawnattr_t *__restrict __attrp,
   char *const __argv[__restrict],
   char *const __envp[__restrict])
                      ;

/* Similar to `posix_spawn' but search for FILE in the PATH.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int posix_spawnp (pid_t *__pid, const char *__file,
    const posix_spawn_file_actions_t *__file_actions,
    const posix_spawnattr_t *__attrp,
    char *const __argv[], char *const __envp[])
                      ;


/* Initialize data structure with attributes for `spawn' to default values.  */
extern int posix_spawnattr_init (posix_spawnattr_t *__attr)
                           ;

/* Free resources associated with ATTR.  */
extern int posix_spawnattr_destroy (posix_spawnattr_t *__attr)
                           ;

/* Store signal mask for signals with default handling from ATTR in
   SIGDEFAULT.  */
extern int posix_spawnattr_getsigdefault (const posix_spawnattr_t *
       __restrict __attr,
       sigset_t *__restrict __sigdefault)
                               ;

/* Set signal mask for signals with default handling in ATTR to SIGDEFAULT.  */
extern int posix_spawnattr_setsigdefault (posix_spawnattr_t *__restrict __attr,
       const sigset_t *__restrict
       __sigdefault)
                               ;

/* Store signal mask for the new process from ATTR in SIGMASK.  */
extern int posix_spawnattr_getsigmask (const posix_spawnattr_t *__restrict
           __attr,
           sigset_t *__restrict __sigmask)
                              ;

/* Set signal mask for the new process in ATTR to SIGMASK.  */
extern int posix_spawnattr_setsigmask (posix_spawnattr_t *__restrict __attr,
           const sigset_t *__restrict __sigmask)
                               ;

/* Get flag word from the attribute structure.  */
extern int posix_spawnattr_getflags (const posix_spawnattr_t *__restrict
         __attr,
         short int *__restrict __flags)
                               ;

/* Store flags in the attribute structure.  */
extern int posix_spawnattr_setflags (posix_spawnattr_t *_attr,
         short int __flags)
                            ;

/* Get process group ID from the attribute structure.  */
extern int posix_spawnattr_getpgroup (const posix_spawnattr_t *__restrict
          __attr, pid_t *__restrict __pgroup)
                               ;

/* Store process group ID in the attribute structure.  */
extern int posix_spawnattr_setpgroup (posix_spawnattr_t *__attr,
          pid_t __pgroup)
                            ;

/* Get scheduling policy from the attribute structure.  */
extern int posix_spawnattr_getschedpolicy (const posix_spawnattr_t *
        __restrict __attr,
        int *__restrict __schedpolicy)
                               ;

/* Store scheduling policy in the attribute structure.  */
extern int posix_spawnattr_setschedpolicy (posix_spawnattr_t *__attr,
        int __schedpolicy)
                            ;

/* Get scheduling parameters from the attribute structure.  */
extern int posix_spawnattr_getschedparam (const posix_spawnattr_t *
       __restrict __attr,
       struct sched_param *__restrict
       __schedparam)
                               ;

/* Store scheduling parameters in the attribute structure.  */
extern int posix_spawnattr_setschedparam (posix_spawnattr_t *__restrict __attr,
       const struct sched_param *
       __restrict __schedparam)
                               ;

/* Initialize data structure for file attribute for `spawn' call.  */
extern int posix_spawn_file_actions_init (posix_spawn_file_actions_t *
       __file_actions)
                            ;

/* Free resources associated with FILE-ACTIONS.  */
extern int posix_spawn_file_actions_destroy (posix_spawn_file_actions_t *
          __file_actions)
                            ;

/* Add an action to FILE-ACTIONS which tells the implementation to call
   `open' for the given file during the `spawn' call.  */
extern int posix_spawn_file_actions_addopen (posix_spawn_file_actions_t *
          __restrict __file_actions,
          int __fd,
          const char *__restrict __path,
          int __oflag, mode_t __mode)
                               ;

/* Add an action to FILE-ACTIONS which tells the implementation to call
   `close' for the given file descriptor during the `spawn' call.  */
extern int posix_spawn_file_actions_addclose (posix_spawn_file_actions_t *
           __file_actions, int __fd)
                            ;

/* Add an action to FILE-ACTIONS which tells the implementation to call
   `dup2' for the given file descriptors during the `spawn' call.  */
extern int posix_spawn_file_actions_adddup2 (posix_spawn_file_actions_t *
          __file_actions,
          int __fd, int __newfd)
                            ;
# 236 "/usr/include/spawn.h" 3 4
# 1 "/usr/include/bits/spawn_ext.h" 1 3 4
/* POSIX spawn extensions.   Linux version.
   Copyright (C) 2023-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 237 "/usr/include/spawn.h" 2 3 4
# 88 "all.c" 2
# 1 "/usr/include/stab.h" 1 3 4


/* Indicate the GNU stab.h is in use.  */





enum __stab_debug_code
{
# 1 "/usr/include/bits/stab.def" 1 3 4
/* Table of DBX symbol codes for the GNU system.
   Copyright (C) 1988, 1997-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This contains contribution from Cygnus Support.  */

/* Global variable.  Only the name is significant.
   To find the address, look in the corresponding external symbol.  */
N_GSYM=0x20,

/* Function name for BSD Fortran.  Only the name is significant.
   To find the address, look in the corresponding external symbol.  */
N_FNAME=0x22,

/* Function name or text-segment variable for C.  Value is its address.
   Desc is supposedly starting line number, but GCC doesn't set it
   and DBX seems not to miss it.  */
N_FUN=0x24,

/* Data-segment variable with internal linkage.  Value is its address.
   "Static Sym".  */
N_STSYM=0x26,

/* BSS-segment variable with internal linkage.  Value is its address.  */
N_LCSYM=0x28,

/* Name of main routine.  Only the name is significant.
   This is not used in C.  */
N_MAIN=0x2a,

/* Global symbol in Pascal.
   Supposedly the value is its line number; I'm skeptical.  */
N_PC=0x30,

/* Number of symbols:  0, files,,funcs,lines according to Ultrix V4.0. */
N_NSYMS=0x32,

/* "No DST map for sym: name, ,0,type,ignored"  according to Ultrix V4.0. */
N_NOMAP=0x34,

/* New stab from Solaris.  I don't know what it means, but it
   don't seem to contain useful information.  */
N_OBJ=0x38,

/* New stab from Solaris.  I don't know what it means, but it
   don't seem to contain useful information.  Possibly related to the
   optimization flags used in this module.  */
N_OPT=0x3c,

/* Register variable.  Value is number of register.  */
N_RSYM=0x40,

/* Modula-2 compilation unit.  Can someone say what info it contains?  */
N_M2C=0x42,

/* Line number in text segment.  Desc is the line number;
   value is corresponding address.  */
N_SLINE=0x44,

/* Similar, for data segment.  */
N_DSLINE=0x46,

/* Similar, for bss segment.  */
N_BSLINE=0x48,

/* Sun's source-code browser stabs.  ?? Don't know what the fields are.
   Supposedly the field is "path to associated .cb file".  THIS VALUE
   OVERLAPS WITH N_BSLINE!  */
N_BROWS=0x48,

/* GNU Modula-2 definition module dependency.  Value is the modification time
   of the definition file.  Other is non-zero if it is imported with the
   GNU M2 keyword %INITIALIZE.  Perhaps N_M2C can be used if there
   are enough empty fields? */
N_DEFD=0x4a,

/* THE FOLLOWING TWO STAB VALUES CONFLICT.  Happily, one is for Modula-2
   and one is for C++.   Still,... */
/* GNU C++ exception variable.  Name is variable name.  */
N_EHDECL=0x50,
/* Modula2 info "for imc":  name,,0,0,0  according to Ultrix V4.0.  */
N_MOD2=0x50,

/* GNU C++ `catch' clause.  Value is its address.  Desc is nonzero if
   this entry is immediately followed by a CAUGHT stab saying what exception
   was caught.  Multiple CAUGHT stabs means that multiple exceptions
   can be caught here.  If Desc is 0, it means all exceptions are caught
   here.  */
N_CATCH=0x54,

/* Structure or union element.  Value is offset in the structure.  */
N_SSYM=0x60,

/* Name of main source file.
   Value is starting text address of the compilation.  */
N_SO=0x64,

/* Automatic variable in the stack.  Value is offset from frame pointer.
   Also used for type descriptions.  */
N_LSYM=0x80,

/* Beginning of an include file.  Only Sun uses this.
   In an object file, only the name is significant.
   The Sun linker puts data into some of the other fields.  */
N_BINCL=0x82,

/* Name of sub-source file (#include file).
   Value is starting text address of the compilation.  */
N_SOL=0x84,

/* Parameter variable.  Value is offset from argument pointer.
   (On most machines the argument pointer is the same as the frame pointer.  */
N_PSYM=0xa0,

/* End of an include file.  No name.
   This and N_BINCL act as brackets around the file's output.
   In an object file, there is no significant data in this entry.
   The Sun linker puts data into some of the fields.  */
N_EINCL=0xa2,

/* Alternate entry point.  Value is its address.  */
N_ENTRY=0xa4,

/* Beginning of lexical block.
   The desc is the nesting level in lexical blocks.
   The value is the address of the start of the text for the block.
   The variables declared inside the block *precede* the N_LBRAC symbol.  */
N_LBRAC=0xc0,

/* Place holder for deleted include file.  Replaces a N_BINCL and everything
   up to the corresponding N_EINCL.  The Sun linker generates these when
   it finds multiple identical copies of the symbols from an include file.
   This appears only in output from the Sun linker.  */
N_EXCL=0xc2,

/* Modula-2 scope information.  Can someone say what info it contains?  */
N_SCOPE=0xc4,

/* End of a lexical block.  Desc matches the N_LBRAC's desc.
   The value is the address of the end of the text for the block.  */
N_RBRAC=0xe0,

/* Begin named common block.  Only the name is significant.  */
N_BCOMM=0xe2,

/* End named common block.  Only the name is significant
   (and it should match the N_BCOMM).  */
N_ECOMM=0xe4,

/* End common (local name): value is address.
   I'm not sure how this is used.  */
N_ECOML=0xe8,

/* These STAB's are used on Gould systems for Non-Base register symbols
   or something like that.  FIXME.  I have assigned the values at random
   since I don't have a Gould here.  Fixups from Gould folk welcome... */
N_NBTEXT=0xF0,
N_NBDATA=0xF2,
N_NBBSS=0xF4,
N_NBSTS=0xF6,
N_NBLCS=0xF8,

/* Second symbol entry containing a length-value for the preceding entry.
   The value is the length.  */
N_LENG=0xfe,

/* The above information, in matrix format.

			STAB MATRIX
	_________________________________________________
	| 00 - 1F are not dbx stab symbols		|
	| In most cases, the low bit is the EXTernal bit|

	| 00 UNDEF  | 02 ABS	| 04 TEXT   | 06 DATA	|
	| 01  |EXT  | 03  |EXT	| 05  |EXT  | 07  |EXT	|

	| 08 BSS    | 0A INDR	| 0C FN_SEQ | 0E   	|
	| 09  |EXT  | 0B 	| 0D	    | 0F	|

	| 10 	    | 12 COMM	| 14 SETA   | 16 SETT	|
	| 11	    | 13	| 15 	    | 17	|

	| 18 SETD   | 1A SETB	| 1C SETV   | 1E WARNING|
	| 19	    | 1B	| 1D 	    | 1F FN	|

	|_______________________________________________|
	| Debug entries with bit 01 set are unused.	|
	| 20 GSYM   | 22 FNAME	| 24 FUN    | 26 STSYM	|
	| 28 LCSYM  | 2A MAIN	| 2C	    | 2E	|
	| 30 PC	    | 32 NSYMS	| 34 NOMAP  | 36	|
	| 38 OBJ    | 3A	| 3C OPT    | 3E	|
	| 40 RSYM   | 42 M2C	| 44 SLINE  | 46 DSLINE |
	| 48 BSLINE*| 4A DEFD	| 4C        | 4E	|
	| 50 EHDECL*| 52	| 54 CATCH  | 56        |
	| 58        | 5A        | 5C        | 5E	|
	| 60 SSYM   | 62	| 64 SO	    | 66 	|
	| 68 	    | 6A	| 6C	    | 6E	|
	| 70	    | 72	| 74	    | 76	|
	| 78	    | 7A	| 7C	    | 7E	|
	| 80 LSYM   | 82 BINCL	| 84 SOL    | 86	|
	| 88	    | 8A	| 8C	    | 8E	|
	| 90	    | 92	| 94	    | 96	|
	| 98	    | 9A	| 9C	    | 9E	|
	| A0 PSYM   | A2 EINCL	| A4 ENTRY  | A6	|
	| A8	    | AA	| AC	    | AE	|
	| B0	    | B2	| B4	    | B6	|
	| B8	    | BA	| BC	    | BE	|
	| C0 LBRAC  | C2 EXCL	| C4 SCOPE  | C6	|
	| C8	    | CA	| CC	    | CE	|
	| D0	    | D2	| D4	    | D6	|
	| D8	    | DA	| DC	    | DE	|
	| E0 RBRAC  | E2 BCOMM	| E4 ECOMM  | E6	|
	| E8 ECOML  | EA	| EC	    | EE	|
	| F0	    | F2	| F4	    | F6	|
	| F8	    | FA	| FC	    | FE LENG	|
	+-----------------------------------------------+
 * 50 EHDECL is also MOD2.
 * 48 BSLINE is also BROWS.
 */
# 12 "/usr/include/stab.h" 2 3 4
LAST_UNUSED_STAB_CODE
};
# 89 "all.c" 2
# 1 "/usr/include/stdbit.h" 1 3 4
/* ISO C23 Standard: 7.18 - Bit and byte utilities <stdbit.h>.
   Copyright (C) 2024-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 27 "/usr/include/stdbit.h" 3 4
/* In C23, <stdbool.h> defines only an implementation-namespace macro,
   so is OK to include here.  Before C23, including <stdbool.h> allows
   the header to use bool rather than _Bool unconditionally, and so to
   compile as C++ (although the type-generic macros are not a good
   form of type-generic interface for C++).  */


# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 93 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_size_t.h" 1 3 4
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 94 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 35 "/usr/include/stdbit.h" 2 3 4
# 44 "/usr/include/stdbit.h" 3 4
/* Use __pacify_uint16 (N) instead of (uint16_t) (N) when the cast is helpful
   only to pacify older GCC (e.g., GCC 10 -Wconversion) or non-GCC (e.g
   clang -Wimplicit-int-conversion).  */
# 55 "/usr/include/stdbit.h" 3 4
/* Count leading zeros.  */
extern unsigned int stdc_leading_zeros_uc (unsigned char __x)
                                ;
extern unsigned int stdc_leading_zeros_us (unsigned short __x)
                                ;
extern unsigned int stdc_leading_zeros_ui (unsigned int __x)
                                ;
extern unsigned int stdc_leading_zeros_ul (unsigned long int __x)
                                ;
__extension__
extern unsigned int stdc_leading_zeros_ull (unsigned long long int __x)
                                ;
# 76 "/usr/include/stdbit.h" 3 4
static __inline unsigned int
__clz64_inline (uint64_t __x)
{
  return __x == 0 ? 64U : (unsigned int) __builtin_clzll (__x);
}

static __inline unsigned int
__clz32_inline (uint32_t __x)
{
  return __x == 0 ? 32U : (unsigned int) __builtin_clz (__x);
}

static __inline unsigned int
__clz16_inline (uint16_t __x)
{
  return __clz32_inline (__x) - 16;
}

static __inline unsigned int
__clz8_inline (uint8_t __x)
{
  return __clz32_inline (__x) - 24;
}
# 111 "/usr/include/stdbit.h" 3 4
/* Count leading ones.  */
extern unsigned int stdc_leading_ones_uc (unsigned char __x)
                                ;
extern unsigned int stdc_leading_ones_us (unsigned short __x)
                                ;
extern unsigned int stdc_leading_ones_ui (unsigned int __x)
                                ;
extern unsigned int stdc_leading_ones_ul (unsigned long int __x)
                                ;
__extension__
extern unsigned int stdc_leading_ones_ull (unsigned long long int __x)
                                ;
# 132 "/usr/include/stdbit.h" 3 4
static __inline unsigned int
__clo64_inline (uint64_t __x)
{
  return __clz64_inline (~__x);
}

static __inline unsigned int
__clo32_inline (uint32_t __x)
{
  return __clz32_inline (~__x);
}

static __inline unsigned int
__clo16_inline (uint16_t __x)
{
  return __clz16_inline (((uint16_t) (~__x)));
}

static __inline unsigned int
__clo8_inline (uint8_t __x)
{
  return __clz8_inline (((uint8_t) (~__x)));
}
# 167 "/usr/include/stdbit.h" 3 4
/* Count trailing zeros.  */
extern unsigned int stdc_trailing_zeros_uc (unsigned char __x)
                                ;
extern unsigned int stdc_trailing_zeros_us (unsigned short __x)
                                ;
extern unsigned int stdc_trailing_zeros_ui (unsigned int __x)
                                ;
extern unsigned int stdc_trailing_zeros_ul (unsigned long int __x)
                                ;
__extension__
extern unsigned int stdc_trailing_zeros_ull (unsigned long long int __x)
                                ;
# 190 "/usr/include/stdbit.h" 3 4
static __inline unsigned int
__ctz64_inline (uint64_t __x)
{
  return __x == 0 ? 64U : (unsigned int) __builtin_ctzll (__x);
}

static __inline unsigned int
__ctz32_inline (uint32_t __x)
{
  return __x == 0 ? 32U : (unsigned int) __builtin_ctz (__x);
}

static __inline unsigned int
__ctz16_inline (uint16_t __x)
{
  return __x == 0 ? 16U : (unsigned int) __builtin_ctz (__x);
}

static __inline unsigned int
__ctz8_inline (uint8_t __x)
{
  return __x == 0 ? 8U : (unsigned int) __builtin_ctz (__x);
}
# 225 "/usr/include/stdbit.h" 3 4
/* Count trailing ones.  */
extern unsigned int stdc_trailing_ones_uc (unsigned char __x)
                                ;
extern unsigned int stdc_trailing_ones_us (unsigned short __x)
                                ;
extern unsigned int stdc_trailing_ones_ui (unsigned int __x)
                                ;
extern unsigned int stdc_trailing_ones_ul (unsigned long int __x)
                                ;
__extension__
extern unsigned int stdc_trailing_ones_ull (unsigned long long int __x)
                                ;







static __inline unsigned int
__cto64_inline (uint64_t __x)
{
  return __ctz64_inline (~__x);
}

static __inline unsigned int
__cto32_inline (uint32_t __x)
{
  return __ctz32_inline (~__x);
}

static __inline unsigned int
__cto16_inline (uint16_t __x)
{
  return __ctz16_inline (((uint16_t) (~__x)));
}

static __inline unsigned int
__cto8_inline (uint8_t __x)
{
  return __ctz8_inline (((uint8_t) (~__x)));
}
# 279 "/usr/include/stdbit.h" 3 4
/* First leading zero.  */
extern unsigned int stdc_first_leading_zero_uc (unsigned char __x)
                                ;
extern unsigned int stdc_first_leading_zero_us (unsigned short __x)
                                ;
extern unsigned int stdc_first_leading_zero_ui (unsigned int __x)
                                ;
extern unsigned int stdc_first_leading_zero_ul (unsigned long int __x)
                                ;
__extension__
extern unsigned int stdc_first_leading_zero_ull (unsigned long long int __x)
                                ;
# 302 "/usr/include/stdbit.h" 3 4
static __inline unsigned int
__flz64_inline (uint64_t __x)
{
  return __x == (uint64_t) -1 ? 0 : 1 + __clo64_inline (__x);
}

static __inline unsigned int
__flz32_inline (uint32_t __x)
{
  return __x == (uint32_t) -1 ? 0 : 1 + __clo32_inline (__x);
}

static __inline unsigned int
__flz16_inline (uint16_t __x)
{
  return __x == (uint16_t) -1 ? 0 : 1 + __clo16_inline (__x);
}

static __inline unsigned int
__flz8_inline (uint8_t __x)
{
  return __x == (uint8_t) -1 ? 0 : 1 + __clo8_inline (__x);
}
# 337 "/usr/include/stdbit.h" 3 4
/* First leading one.  */
extern unsigned int stdc_first_leading_one_uc (unsigned char __x)
                                ;
extern unsigned int stdc_first_leading_one_us (unsigned short __x)
                                ;
extern unsigned int stdc_first_leading_one_ui (unsigned int __x)
                                ;
extern unsigned int stdc_first_leading_one_ul (unsigned long int __x)
                                ;
__extension__
extern unsigned int stdc_first_leading_one_ull (unsigned long long int __x)
                                ;
# 360 "/usr/include/stdbit.h" 3 4
static __inline unsigned int
__flo64_inline (uint64_t __x)
{
  return __x == 0 ? 0 : 1 + __clz64_inline (__x);
}

static __inline unsigned int
__flo32_inline (uint32_t __x)
{
  return __x == 0 ? 0 : 1 + __clz32_inline (__x);
}

static __inline unsigned int
__flo16_inline (uint16_t __x)
{
  return __x == 0 ? 0 : 1 + __clz16_inline (__x);
}

static __inline unsigned int
__flo8_inline (uint8_t __x)
{
  return __x == 0 ? 0 : 1 + __clz8_inline (__x);
}
# 395 "/usr/include/stdbit.h" 3 4
/* First trailing zero.  */
extern unsigned int stdc_first_trailing_zero_uc (unsigned char __x)
                                ;
extern unsigned int stdc_first_trailing_zero_us (unsigned short __x)
                                ;
extern unsigned int stdc_first_trailing_zero_ui (unsigned int __x)
                                ;
extern unsigned int stdc_first_trailing_zero_ul (unsigned long int __x)
                                ;
__extension__
extern unsigned int stdc_first_trailing_zero_ull (unsigned long long int __x)
                                ;
# 418 "/usr/include/stdbit.h" 3 4
static __inline unsigned int
__ftz64_inline (uint64_t __x)
{
  return __x == (uint64_t) -1 ? 0 : 1 + __cto64_inline (__x);
}

static __inline unsigned int
__ftz32_inline (uint32_t __x)
{
  return __x == (uint32_t) -1 ? 0 : 1 + __cto32_inline (__x);
}

static __inline unsigned int
__ftz16_inline (uint16_t __x)
{
  return __x == (uint16_t) -1 ? 0 : 1 + __cto16_inline (__x);
}

static __inline unsigned int
__ftz8_inline (uint8_t __x)
{
  return __x == (uint8_t) -1 ? 0 : 1 + __cto8_inline (__x);
}
# 453 "/usr/include/stdbit.h" 3 4
/* First trailing one.  */
extern unsigned int stdc_first_trailing_one_uc (unsigned char __x)
                                ;
extern unsigned int stdc_first_trailing_one_us (unsigned short __x)
                                ;
extern unsigned int stdc_first_trailing_one_ui (unsigned int __x)
                                ;
extern unsigned int stdc_first_trailing_one_ul (unsigned long int __x)
                                ;
__extension__
extern unsigned int stdc_first_trailing_one_ull (unsigned long long int __x)
                                ;
# 476 "/usr/include/stdbit.h" 3 4
static __inline unsigned int
__fto64_inline (uint64_t __x)
{
  return __x == 0 ? 0 : 1 + __ctz64_inline (__x);
}

static __inline unsigned int
__fto32_inline (uint32_t __x)
{
  return __x == 0 ? 0 : 1 + __ctz32_inline (__x);
}

static __inline unsigned int
__fto16_inline (uint16_t __x)
{
  return __x == 0 ? 0 : 1 + __ctz16_inline (__x);
}

static __inline unsigned int
__fto8_inline (uint8_t __x)
{
  return __x == 0 ? 0 : 1 + __ctz8_inline (__x);
}
# 511 "/usr/include/stdbit.h" 3 4
/* Count zeros.  */
extern unsigned int stdc_count_zeros_uc (unsigned char __x)
                                ;
extern unsigned int stdc_count_zeros_us (unsigned short __x)
                                ;
extern unsigned int stdc_count_zeros_ui (unsigned int __x)
                                ;
extern unsigned int stdc_count_zeros_ul (unsigned long int __x)
                                ;
__extension__
extern unsigned int stdc_count_zeros_ull (unsigned long long int __x)
                                ;
# 532 "/usr/include/stdbit.h" 3 4
static __inline unsigned int
__cz64_inline (uint64_t __x)
{
  return 64U - (unsigned int) __builtin_popcountll (__x);
}

static __inline unsigned int
__cz32_inline (uint32_t __x)
{
  return 32U - (unsigned int) __builtin_popcount (__x);
}

static __inline unsigned int
__cz16_inline (uint16_t __x)
{
  return 16U - (unsigned int) __builtin_popcount (__x);
}

static __inline unsigned int
__cz8_inline (uint8_t __x)
{
  return 8U - (unsigned int) __builtin_popcount (__x);
}
# 567 "/usr/include/stdbit.h" 3 4
/* Count ones.  */
extern unsigned int stdc_count_ones_uc (unsigned char __x)
                                ;
extern unsigned int stdc_count_ones_us (unsigned short __x)
                                ;
extern unsigned int stdc_count_ones_ui (unsigned int __x)
                                ;
extern unsigned int stdc_count_ones_ul (unsigned long int __x)
                                ;
__extension__
extern unsigned int stdc_count_ones_ull (unsigned long long int __x)
                                ;







static __inline unsigned int
__co64_inline (uint64_t __x)
{
  return (unsigned int) __builtin_popcountll (__x);
}

static __inline unsigned int
__co32_inline (uint32_t __x)
{
  return (unsigned int) __builtin_popcount (__x);
}

static __inline unsigned int
__co16_inline (uint16_t __x)
{
  return (unsigned int) __builtin_popcount (__x);
}

static __inline unsigned int
__co8_inline (uint8_t __x)
{
  return (unsigned int) __builtin_popcount (__x);
}
# 621 "/usr/include/stdbit.h" 3 4
/* Single-bit check.  */
extern _Bool stdc_has_single_bit_uc (unsigned char __x)
                                ;
extern _Bool stdc_has_single_bit_us (unsigned short __x)
                                ;
extern _Bool stdc_has_single_bit_ui (unsigned int __x)
                                ;
extern _Bool stdc_has_single_bit_ul (unsigned long int __x)
                                ;
__extension__
extern _Bool stdc_has_single_bit_ull (unsigned long long int __x)
                                ;
# 642 "/usr/include/stdbit.h" 3 4
static __inline _Bool
__hsb64_inline (uint64_t __x)
{
  return (__x ^ (__x - 1)) > __x - 1;
}

static __inline _Bool
__hsb32_inline (uint32_t __x)
{
  return (__x ^ (__x - 1)) > __x - 1;
}

static __inline _Bool
__hsb16_inline (uint16_t __x)
{
  return (__x ^ (__x - 1)) > __x - 1;
}

static __inline _Bool
__hsb8_inline (uint8_t __x)
{
  return (__x ^ (__x - 1)) > __x - 1;
}
# 676 "/usr/include/stdbit.h" 3 4
/* Bit width.  */
extern unsigned int stdc_bit_width_uc (unsigned char __x)
                                ;
extern unsigned int stdc_bit_width_us (unsigned short __x)
                                ;
extern unsigned int stdc_bit_width_ui (unsigned int __x)
                                ;
extern unsigned int stdc_bit_width_ul (unsigned long int __x)
                                ;
__extension__
extern unsigned int stdc_bit_width_ull (unsigned long long int __x)
                                ;







static __inline unsigned int
__bw64_inline (uint64_t __x)
{
  return 64 - __clz64_inline (__x);
}

static __inline unsigned int
__bw32_inline (uint32_t __x)
{
  return 32 - __clz32_inline (__x);
}

static __inline unsigned int
__bw16_inline (uint16_t __x)
{
  return 16 - __clz16_inline (__x);
}

static __inline unsigned int
__bw8_inline (uint8_t __x)
{
  return 8 - __clz8_inline (__x);
}
# 730 "/usr/include/stdbit.h" 3 4
/* Bit floor.  */
extern unsigned char stdc_bit_floor_uc (unsigned char __x)
                                ;
extern unsigned short stdc_bit_floor_us (unsigned short __x)
                                ;
extern unsigned int stdc_bit_floor_ui (unsigned int __x)
                                ;
extern unsigned long int stdc_bit_floor_ul (unsigned long int __x)
                                ;
__extension__
extern unsigned long long int stdc_bit_floor_ull (unsigned long long int __x)
                                ;







static __inline uint64_t
__bf64_inline (uint64_t __x)
{
  return __x == 0 ? 0 : ((uint64_t) 1) << (__bw64_inline (__x) - 1);
}

static __inline uint32_t
__bf32_inline (uint32_t __x)
{
  return __x == 0 ? 0 : ((uint32_t) 1) << (__bw32_inline (__x) - 1);
}

static __inline uint16_t
__bf16_inline (uint16_t __x)
{
  return ((uint16_t) (__x == 0 ? 0 : ((uint16_t) 1) << (__bw16_inline (__x) - 1)));

}

static __inline uint8_t
__bf8_inline (uint8_t __x)
{
  return ((uint8_t) (__x == 0 ? 0 : ((uint8_t) 1) << (__bw8_inline (__x) - 1)));

}
# 786 "/usr/include/stdbit.h" 3 4
/* Bit ceiling.  */
extern unsigned char stdc_bit_ceil_uc (unsigned char __x)
                                ;
extern unsigned short stdc_bit_ceil_us (unsigned short __x)
                                ;
extern unsigned int stdc_bit_ceil_ui (unsigned int __x)
                                ;
extern unsigned long int stdc_bit_ceil_ul (unsigned long int __x)
                                ;
__extension__
extern unsigned long long int stdc_bit_ceil_ull (unsigned long long int __x)
                                ;







static __inline uint64_t
__bc64_inline (uint64_t __x)
{
  return __x <= 1 ? 1 : ((uint64_t) 2) << (__bw64_inline (__x - 1) - 1);
}

static __inline uint32_t
__bc32_inline (uint32_t __x)
{
  return __x <= 1 ? 1 : ((uint32_t) 2) << (__bw32_inline (__x - 1) - 1);
}

static __inline uint16_t
__bc16_inline (uint16_t __x)
{
  return ((uint16_t) (__x <= 1 ? 1 : ((uint16_t) 2) << (__bw16_inline ((uint16_t) (__x - 1)) - 1)));



}

static __inline uint8_t
__bc8_inline (uint8_t __x)
{
  return ((uint8_t) (__x <= 1 ? 1 : ((uint8_t) 2) << (__bw8_inline ((uint8_t) (__x - 1)) - 1)));



}
# 90 "all.c" 2



# 1 "/usr/include/stdio_ext.h" 1 3 4
/* Functions to access FILE structure internals.
   Copyright (C) 2000-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This header contains the same definitions as the header of the same name
   on Sun's Solaris OS.  */






enum
{
  /* Query current state of the locking status.  */
  FSETLOCKING_QUERY = 0,

  /* The library protects all uses of the stream functions, except for
     uses of the *_unlocked functions, by calls equivalent to flockfile().  */
  FSETLOCKING_INTERNAL,

  /* The user will take care of locking.  */
  FSETLOCKING_BYCALLER

};




/* Return the size of the buffer of FP in bytes currently in use by
   the given stream.  */
extern size_t __fbufsize (FILE *__fp) ;


/* Return non-zero value iff the stream FP is opened readonly, or if the
   last operation on the stream was a read operation.  */
extern int __freading (FILE *__fp) ;

/* Return non-zero value iff the stream FP is opened write-only or
   append-only, or if the last operation on the stream was a write
   operation.  */
extern int __fwriting (FILE *__fp) ;


/* Return non-zero value iff stream FP is not opened write-only or
   append-only.  */
extern int __freadable (FILE *__fp) ;

/* Return non-zero value iff stream FP is not opened read-only.  */
extern int __fwritable (FILE *__fp) ;


/* Return non-zero value iff the stream FP is line-buffered.  */
extern int __flbf (FILE *__fp) ;


/* Discard all pending buffered I/O on the stream FP.  */
extern void __fpurge (FILE *__fp) ;

/* Return amount of output in bytes pending on a stream FP.  */
extern size_t __fpending (FILE *__fp) ;

/* Flush all line-buffered files.  */
extern void _flushlbf (void);


/* Set locking status of stream FP to TYPE.  */
extern int __fsetlocking (FILE *__fp, int __type) ;
# 94 "all.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   Copyright The GNU Toolchain Authors.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.20 General utilities	<stdlib.h>
 */




# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */
# 35 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
# 45 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  Most but not all symbols enabled by that macro in TS
   18661-1 are enabled unconditionally in C23.  In C23, the symbols in
   Annex F still require a new feature test macro
   __STDC_WANT_IEC_60559_EXT__ instead (C23 does not define
   __STDC_WANT_IEC_60559_BFP_EXT__), while a few features from TS
   18661-1 are not included in C23 (and thus should depend on
   __STDC_WANT_IEC_60559_BFP_EXT__ even when C23 features are
   enabled).

   __GLIBC_USE (IEC_60559_BFP_EXT) controls those features from TS
   18661-1 not included in C23.

   __GLIBC_USE (IEC_60559_BFP_EXT_C23) controls those features from TS
   18661-1 that are also included in C23 (with no feature test macro
   required in C23).

   __GLIBC_USE (IEC_60559_EXT) controls those features from TS 18661-1
   that are included in C23 but conditional on
   __STDC_WANT_IEC_60559_EXT__.  (There are currently no features
   conditional on __STDC_WANT_IEC_60559_EXT__ that are not in TS
   18661-1.)  */
# 86 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  Other than the reduction
   functions, the symbols from this TS are enabled unconditionally in
   C23.  */
# 103 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
# 27 "/usr/include/stdlib.h" 2 3 4

/* Get size_t, wchar_t and NULL from <stddef.h>.  */



# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 93 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_size_t.h" 1 3 4
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 94 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 103 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_wchar_t.h" 1 3 4
/*===---- __stddef_wchar.h - Definition of wchar_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */



/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 24 "/usr/bin/../lib/clang/21/include/__stddef_wchar_t.h" 3 4
typedef int wchar_t;
# 104 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4




# 1 "/usr/bin/../lib/clang/21/include/__stddef_null.h" 1 3 4
/*===---- __stddef_null.h - Definition of NULL -----------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */



/* linux/stddef.h will define NULL to 0. glibc (and other) headers then define
 * __need_NULL and rely on stddef.h to redefine NULL to the correct value again.
 * Modules don't support redefining macros like that, but support that pattern
 * in the non-modules case.
 */
# 109 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 33 "/usr/include/stdlib.h" 2 3 4
# 55 "/usr/include/stdlib.h" 3 4
/* _FloatN API tests for enablement.  */


/* Returned by `div'.  */
typedef struct
  {
    int quot; /* Quotient.  */
    int rem; /* Remainder.  */
  } div_t;

/* Returned by `ldiv'.  */

typedef struct
  {
    long int quot; /* Quotient.  */
    long int rem; /* Remainder.  */
  } ldiv_t;




/* Returned by `lldiv'.  */
__extension__ typedef struct
  {
    long long int quot; /* Quotient.  */
    long long int rem; /* Remainder.  */
  } lldiv_t;




/* The largest number rand will return (same as INT_MAX).  */



/* We define these the same for all machines.
   Changes from this to the outside world should be done in `_exit'.  */




/* Maximum length of a multibyte character in the current locale.  */

extern size_t __ctype_get_mb_cur_max (void) ;


/* Convert a string to a floating-point number.  */
extern double atof (const char *__nptr)
                                                     ;
/* Convert a string to an integer.  */
extern int atoi (const char *__nptr)
                                                     ;
/* Convert a string to a long integer.  */
extern long int atol (const char *__nptr)
                                                     ;


/* Convert a string to a long long integer.  */
__extension__ extern long long int atoll (const char *__nptr)
                                                     ;


/* Convert a string to a floating-point number.  */
extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
                            ;


/* Likewise for `float' and `long double' sizes of floating-point numbers.  */
extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) ;

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
                            ;


/* Likewise for '_FloatN' and '_FloatNx'.  */
# 176 "/usr/include/stdlib.h" 3 4
/* Convert a string to a long integer.  */
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
                            ;
/* Convert a string to an unsigned long integer.  */
extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
                            ;
# 199 "/usr/include/stdlib.h" 3 4
/* Convert a string to a quadword integer.  */
__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
                            ;
/* Convert a string to an unsigned quadword integer.  */
__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
                            ;


/* Versions of the above functions that handle '0b' and '0B' prefixes
   in base 0 or 2.  */
# 276 "/usr/include/stdlib.h" 3 4
/* Convert a floating-point number to a string.  */
# 572 "/usr/include/stdlib.h" 3 4
/* Return a random integer between 0 and RAND_MAX inclusive.  */
extern int rand (void) ;
/* Seed the random number generator with the given number.  */
extern void srand (unsigned int __seed) ;
# 671 "/usr/include/stdlib.h" 3 4
/* Allocate SIZE bytes of memory.  */
extern void *malloc (size_t __size)
                                         ;
/* Allocate NMEMB elements of SIZE bytes each, all initialized to 0.  */
extern void *calloc (size_t __nmemb, size_t __size)
                                                                         ;

/* Re-allocate the previously allocated block
   in PTR, making the new block SIZE bytes long.  */
/* __attribute_malloc__ is not used, because if realloc returns
   the same pointer that was passed to it, aliasing needs to be allowed
   between objects pointed by the old and new pointers.  */
extern void *realloc (void *__ptr, size_t __size)
                                                                            ;

/* Free a block allocated by `malloc', `realloc' or `calloc'.  */
extern void free (void *__ptr) ;
# 723 "/usr/include/stdlib.h" 3 4
/* ISO C variant of aligned allocation.  */
extern void *aligned_alloc (size_t __alignment, size_t __size)

                                         ;


/* Abort execution and generate a core-dump.  */
extern void abort (void) ;


/* Register a function to be called when `exit' is called.  */
extern int atexit (void (*__func) (void)) ;


/* Register a function to be called when `quick_exit' is called.  */




extern int at_quick_exit (void (*__func) (void)) ;
# 753 "/usr/include/stdlib.h" 3 4
/* Call all functions registered with `atexit' and `on_exit',
   in the reverse of the order in which they were registered,
   perform stdio cleanup, and terminate program execution with STATUS.  */
extern void exit (int __status) ;


/* Call all functions registered with `at_quick_exit' in the reverse
   of the order in which they were registered and terminate program
   execution with STATUS.  */
extern void quick_exit (int __status) ;



/* Terminate the program with STATUS without calling any of the
   functions registered with `atexit' or `on_exit'.  */
extern void _Exit (int __status) ;



/* Return the value of envariable NAME, or NULL if it doesn't exist.  */
extern char *getenv (const char *__name) ;
# 919 "/usr/include/stdlib.h" 3 4
/* Execute the given line as a shell command.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int system (const char *__command) ;
# 945 "/usr/include/stdlib.h" 3 4
/* Shorthand for type of comparison functions.  */
# 958 "/usr/include/stdlib.h" 3 4
/* Do a binary search for KEY in BASE, which consists of NMEMB elements
   of SIZE bytes each, using COMPAR to perform the comparisons.  */
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
                                ;





/* Sort NMEMB elements of BASE, of SIZE bytes each,
   using COMPAR to perform the comparisons.  */
extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) ;







/* Return the absolute value of X.  */
extern int abs (int __x) ;
extern long int labs (long int __x) ;


__extension__ extern long long int llabs (long long int __x)
                                              ;
# 995 "/usr/include/stdlib.h" 3 4
/* Return the `div_t', `ldiv_t' or `lldiv_t' representation
   of the value of NUMER over DENOM. */
/* GCC may have built-ins for these someday.  */
extern div_t div (int __numer, int __denom)
                                              ;
extern ldiv_t ldiv (long int __numer, long int __denom)
                                              ;


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
                                              ;
# 1066 "/usr/include/stdlib.h" 3 4
/* Return the length of the multibyte character
   in S, which is no longer than N.  */
extern int mblen (const char *__s, size_t __n) ;
/* Return the length of the given multibyte character,
   putting its `wchar_t' representation in *PWC.  */
extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) ;
/* Put the multibyte character represented
   by WCHAR in S, returning its length.  */
extern int wctomb (char *__s, wchar_t __wchar) ;


/* Convert a multibyte string to a wide char string.  */
extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n)
                                      ;
/* Convert a wide char string to multibyte string.  */
extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)


                                    ;
# 1112 "/usr/include/stdlib.h" 3 4
/* X/Open pseudo terminal handling.  */
# 1161 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/stdlib-float.h" 1 3 4
/* Floating-point inline functions for stdlib.h.
   Copyright (C) 2012-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 1162 "/usr/include/stdlib.h" 2 3 4

/* Define some macros helping to catch buffer overflows.  */
# 95 "all.c" 2

# 1 "/usr/include/strings.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 93 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_size_t.h" 1 3 4
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 94 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 24 "/usr/include/strings.h" 2 3 4

/* Tell the caller that we provide correct C++ prototypes.  */







/* Compare N bytes of S1 and S2 (same as memcmp).  */
extern int bcmp (const void *__s1, const void *__s2, size_t __n)
                                                  ;

/* Copy N bytes of SRC to DEST (like memmove, but args reversed).  */
extern void bcopy (const void *__src, void *__dest, size_t __n)
                            ;

/* Set N bytes of S to 0.  */
extern void bzero (void *__s, size_t __n) ;

/* Find the first occurrence of C in S (same as strchr).  */
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
                                               ;


/* Find the last occurrence of C in S (same as strrchr).  */
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
                                               ;




/* Return the position of the first bit set in I, or 0 if none are set.
   The least-significant bit is position 1, the most-significant 32.  */
extern int ffs (int __i) ;


/* The following two functions are non-standard but necessary for non-32 bit
   platforms.  */






/* Compare S1 and S2, ignoring case.  */
extern int strcasecmp (const char *__s1, const char *__s2)
                                                  ;

/* Compare no more than N chars of S1 and S2, ignoring case.  */
extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
                                                  ;
# 97 "all.c" 2
# 1 "/usr/include/syscall.h" 1 3 4
# 1 "/usr/include/sys/syscall.h" 1 3 4
/* Copyright (C) 1995-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* This file should list the numbers of the system calls the system knows.
   But instead of duplicating this we use the information available
   from the kernel sources.  */
# 1 "/usr/include/asm/unistd.h" 1 3 4
/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */



/*
 * x32 syscall flag bit.  Some user programs expect syscall NR macros
 * and __X32_SYSCALL_BIT to have type int, even though syscall numbers
 * are, for practical purposes, unsigned long.
 *
 * Fortunately, expressions like (nr & ~__X32_SYSCALL_BIT) do the right
 * thing regardless.
 */







# 1 "/usr/include/asm/unistd_64.h" 1 3 4
# 21 "/usr/include/asm/unistd.h" 2 3 4
# 25 "/usr/include/sys/syscall.h" 2 3 4

/* The Linux kernel header file defines macros __NR_*, but some
   programs expect the traditional form SYS_*.  <bits/syscall.h>
   defines SYS_* macros for __NR_* macros of known names.  */
# 1 "/usr/include/bits/syscall.h" 1 3 4
/* Generated at libc build time from syscall list.  */
/* The system call list corresponds to kernel 6.15.  */
# 30 "/usr/include/sys/syscall.h" 2 3 4
# 2 "/usr/include/syscall.h" 2 3 4
# 98 "all.c" 2
# 1 "/usr/include/sysexits.h" 1 3 4
/*
 * Copyright (c) 1987, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)sysexits.h	8.1 (Berkeley) 6/2/93
 */




/*
 *  SYSEXITS.H -- Exit status codes for system programs.
 *
 *	This include file attempts to categorize possible error
 *	exit statuses for system programs, notably delivermail
 *	and the Berkeley network.
 *
 *	Error numbers begin at EX__BASE to reduce the possibility of
 *	clashing with other exit statuses that random programs may
 *	already return.  The meaning of the codes is approximately
 *	as follows:
 *
 *	EX_USAGE -- The command was used incorrectly, e.g., with
 *		the wrong number of arguments, a bad flag, a bad
 *		syntax in a parameter, or whatever.
 *	EX_DATAERR -- The input data was incorrect in some way.
 *		This should only be used for user's data & not
 *		system files.
 *	EX_NOINPUT -- An input file (not a system file) did not
 *		exist or was not readable.  This could also include
 *		errors like "No message" to a mailer (if it cared
 *		to catch it).
 *	EX_NOUSER -- The user specified did not exist.  This might
 *		be used for mail addresses or remote logins.
 *	EX_NOHOST -- The host specified did not exist.  This is used
 *		in mail addresses or network requests.
 *	EX_UNAVAILABLE -- A service is unavailable.  This can occur
 *		if a support program or file does not exist.  This
 *		can also be used as a catchall message when something
 *		you wanted to do doesn't work, but you don't know
 *		why.
 *	EX_SOFTWARE -- An internal software error has been detected.
 *		This should be limited to non-operating system related
 *		errors as possible.
 *	EX_OSERR -- An operating system error has been detected.
 *		This is intended to be used for such things as "cannot
 *		fork", "cannot create pipe", or the like.  It includes
 *		things like getuid returning a user that does not
 *		exist in the passwd file.
 *	EX_OSFILE -- Some system file (e.g., /etc/passwd, /etc/utmp,
 *		etc.) does not exist, cannot be opened, or has some
 *		sort of error (e.g., syntax error).
 *	EX_CANTCREAT -- A (user specified) output file cannot be
 *		created.
 *	EX_IOERR -- An error occurred while doing I/O on some file.
 *	EX_TEMPFAIL -- temporary failure, indicating something that
 *		is not really an error.  In sendmail, this means
 *		that a mailer (e.g.) could not create a connection,
 *		and the request should be reattempted later.
 *	EX_PROTOCOL -- the remote system returned something that
 *		was "not possible" during a protocol exchange.
 *	EX_NOPERM -- You did not have sufficient permission to
 *		perform the operation.  This is not intended for
 *		file system problems, which should use NOINPUT or
 *		CANTCREAT, but rather for higher level permissions.
 */
# 99 "all.c" 2
# 1 "/usr/include/syslog.h" 1 3 4
# 1 "/usr/include/sys/syslog.h" 1 3 4
/*
 * Copyright (c) 1982, 1986, 1988, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)syslog.h	8.1 (Berkeley) 6/2/93
 */






# 1 "/usr/bin/../lib/clang/21/include/stdarg.h" 1 3 4
/*===---- stdarg.h - Variable argument handling ----------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stdarg.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 38 "/usr/include/sys/syslog.h" 2 3 4

/* This file defines _PATH_LOG.  */
# 1 "/usr/include/bits/syslog-path.h" 1 3 4
/* <bits/syslog-path.h> -- _PATH_LOG definition
   Copyright (C) 2006-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 41 "/usr/include/sys/syslog.h" 2 3 4

/*
 * priorities/facilities are encoded into a single 32-bit quantity, where the
 * bottom 3 bits are the priority (0-7) and the top 28 bits are the facility
 * (0-big number).  Both the priorities and the facilities map roughly
 * one-to-one to strings in the syslogd(8) source code.  This mapping is
 * included in this file.
 *
 * priorities (these are ordered)
 */
# 61 "/usr/include/sys/syslog.h" 3 4
    /* extract priority */
# 92 "/usr/include/sys/syslog.h" 3 4
/* facility codes */
# 106 "/usr/include/sys/syslog.h" 3 4
 /* other codes through 15 reserved for system use */
# 118 "/usr/include/sys/syslog.h" 3 4
    /* facility of pri */
# 150 "/usr/include/sys/syslog.h" 3 4
/*
 * arguments to setlogmask.
 */



/*
 * Option flags for openlog.
 *
 * LOG_ODELAY no longer does anything.
 * LOG_NDELAY is the inverse of what it used to be.
 */
# 171 "/usr/include/sys/syslog.h" 3 4
/* Close descriptor used to write to system logger.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void closelog (void);

/* Open connection to system logger.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void openlog (const char *__ident, int __option, int __facility);

/* Set the log mask level.  */
extern int setlogmask (int __mask) ;

/* Generate a log message using FMT string and option arguments.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void syslog (int __pri, const char *__fmt, ...)
                                                    ;
# 205 "/usr/include/sys/syslog.h" 3 4
/* Define some macros helping to catch buffer overflows.  */
# 2 "/usr/include/syslog.h" 2 3 4
# 100 "all.c" 2
# 1 "/usr/include/tar.h" 1 3 4
/* Extended tar format from POSIX.1.
   Copyright (C) 1992-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */







/* A tar archive consists of 512-byte blocks.
   Each file in the archive has a header block followed by 0+ data blocks.
   Two blocks of NUL bytes indicate the end of the archive.  */

/* The fields of header blocks:
   All strings are stored as ISO 646 (approximately ASCII) strings.

   Fields are numeric unless otherwise noted below; numbers are ISO 646
   representations of octal numbers, with leading zeros as needed.

   linkname is only valid when typeflag==LNKTYPE.  It doesn't use prefix;
   files that are links to pathnames >100 chars long can not be stored
   in a tar archive.

   If typeflag=={LNKTYPE,SYMTYPE,DIRTYPE} then size must be 0.

   devmajor and devminor are only valid for typeflag=={BLKTYPE,CHRTYPE}.

   chksum contains the sum of all 512 bytes in the header block,
   treating each byte as an 8-bit unsigned value and treating the
   8 bytes of chksum as blank characters.

   uname and gname are used in preference to uid and gid, if those
   names exist locally.

   Field Name	Byte Offset	Length in Bytes	Field Type
   name		0		100		NUL-terminated if NUL fits
   mode		100		8
   uid		108		8
   gid		116		8
   size		124		12
   mtime	136		12
   chksum	148		8
   typeflag	156		1		see below
   linkname	157		100		NUL-terminated if NUL fits
   magic	257		6		must be TMAGIC (NUL term.)
   version	263		2		must be TVERSION
   uname	265		32		NUL-terminated
   gname	297		32		NUL-terminated
   devmajor	329		8
   devminor	337		8
   prefix	345		155		NUL-terminated if NUL fits

   If the first character of prefix is '\0', the file name is name;
   otherwise, it is prefix/name.  Files whose pathnames don't fit in that
   length can not be stored in a tar archive.  */

/* The bits in mode: */
# 88 "/usr/include/tar.h" 3 4
/* The values for typeflag:
   Values 'A'-'Z' are reserved for custom implementations.
   All other values are reserved for future POSIX.1 revisions.  */
# 101 "/usr/include/tar.h" 3 4
 /* (regular file if not supported).  */

/* Contents of magic field and its length.  */



/* Contents of the version field and its length.  */
# 101 "all.c" 2
# 1 "/usr/include/term.h" 1 3 4
/****************************************************************************
 * Copyright 2018-2023,2024 Thomas E. Dickey                                *
 * Copyright 1998-2013,2017 Free Software Foundation, Inc.                  *
 *                                                                          *
 * Permission is hereby granted, free of charge, to any person obtaining a  *
 * copy of this software and associated documentation files (the            *
 * "Software"), to deal in the Software without restriction, including      *
 * without limitation the rights to use, copy, modify, merge, publish,      *
 * distribute, distribute with modifications, sublicense, and/or sell       *
 * copies of the Software, and to permit persons to whom the Software is    *
 * furnished to do so, subject to the following conditions:                 *
 *                                                                          *
 * The above copyright notice and this permission notice shall be included  *
 * in all copies or substantial portions of the Software.                   *
 *                                                                          *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS  *
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF               *
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.   *
 * IN NO EVENT SHALL THE ABOVE COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,   *
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR    *
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR    *
 * THE USE OR OTHER DEALINGS IN THE SOFTWARE.                               *
 *                                                                          *
 * Except as contained in this notice, the name(s) of the above copyright   *
 * holders shall not be used in advertising or otherwise to promote the     *
 * sale, use or other dealings in this Software without prior written       *
 * authorization.                                                           *
 ****************************************************************************/

/****************************************************************************/
/* Author: Zeyd M. Ben-Halim <zmbenhal@netcom.com> 1992,1995                */
/*    and: Eric S. Raymond <esr@snark.thyrsus.com>                          */
/*    and: Thomas E. Dickey                        1995-on                  */
/****************************************************************************/

/* $Id: MKterm.h.awk.in,v 1.87 2024/12/28 21:42:15 tom Exp $ */

/*
**	term.h -- Definition of struct term
*/
# 54 "/usr/include/term.h" 3 4
/* Make this file self-contained by providing defaults for the HAVE_TERMIO[S]_H
 * definition (based on the system for which this was configured).
 */
# 92 "/usr/include/term.h" 3 4
/* We will use these symbols to hide differences between
 * termios/termio/sgttyb interfaces.
 */




/* Assume POSIX termio if we have the header and function */
/* #if HAVE_TERMIOS_H && HAVE_TCGETATTR */





# 1 "/usr/include/termios.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 7.1-2 General Terminal Interface	<termios.h>
 */
# 37 "/usr/include/termios.h" 3 4
/* Get the system-dependent definitions of `struct termios', `tcflag_t',
   `cc_t', `speed_t', and all the macros specifying the flag bits.  */
# 1 "/usr/include/bits/termios.h" 1 3 4
/* termios type and macro definitions.  Linux version.
   Copyright (C) 1993-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





typedef unsigned char cc_t;
typedef unsigned int speed_t;
typedef unsigned int tcflag_t;


# 1 "/usr/include/bits/termios-struct.h" 1 3 4
/* struct termios definition.  Linux/generic version.
   Copyright (C) 2019-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library.  If not, see
   <https://www.gnu.org/licenses/>.  */






struct termios
  {
    tcflag_t c_iflag; /* input mode flags */
    tcflag_t c_oflag; /* output mode flags */
    tcflag_t c_cflag; /* control mode flags */
    tcflag_t c_lflag; /* local mode flags */
    cc_t c_line; /* line discipline */
    cc_t c_cc[32]; /* control characters */
    /* Input and output baud rates.  */
    __extension__ union {
      speed_t __ispeed;
      speed_t c_ispeed;
    };

    __extension__ union {
      speed_t __ospeed;
      speed_t c_ospeed;
    };

  };
# 29 "/usr/include/bits/termios.h" 2 3 4


# 1 "/usr/include/bits/termios-c_cc.h" 1 3 4
/* termios c_cc symbolic constant definitions.  Linux/generic version.
   Copyright (C) 2019-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library.  If not, see
   <https://www.gnu.org/licenses/>.  */





/* c_cc characters */
# 32 "/usr/include/bits/termios.h" 2 3 4
# 1 "/usr/include/bits/termios-c_iflag.h" 1 3 4
/* termios input mode definitions.  Linux/generic version.
   Copyright (C) 2019-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library.  If not, see
   <https://www.gnu.org/licenses/>.  */





/* c_iflag bits */
# 33 "/usr/include/bits/termios.h" 2 3 4
# 1 "/usr/include/bits/termios-c_oflag.h" 1 3 4
/* termios output mode definitions.  Linux/generic version.
   Copyright (C) 2019-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library.  If not, see
   <https://www.gnu.org/licenses/>.  */





/* c_oflag bits */
# 34 "/usr/include/bits/termios.h" 2 3 4

/* c_cflag bit meaning */
# 1 "/usr/include/bits/termios-c_cflag.h" 1 3 4
/* termios control mode definitions.  Linux/generic version.
   Copyright (C) 2019-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library.  If not, see
   <https://www.gnu.org/licenses/>.  */





/* c_cflag bits.  */
# 37 "/usr/include/bits/termios.h" 2 3 4
# 62 "/usr/include/bits/termios.h" 3 4
# 1 "/usr/include/bits/termios-c_lflag.h" 1 3 4
/* termios local mode definitions.  Linux/generic version.
   Copyright (C) 2019-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library.  If not, see
   <https://www.gnu.org/licenses/>.  */





/* c_lflag bits */
# 63 "/usr/include/bits/termios.h" 2 3 4






/* tcflow() and TCXONC use these */





/* tcflush() and TCFLSH use these */




# 1 "/usr/include/bits/termios-tcflow.h" 1 3 4
/* termios tcflag symbolic constant definitions.  Linux/generic version.
   Copyright (C) 2019-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library.  If not, see
   <https://www.gnu.org/licenses/>.  */





/* tcsetattr uses these.  */
# 81 "/usr/include/bits/termios.h" 2 3 4

# 1 "/usr/include/bits/termios-misc.h" 1 3 4
/* termios baud platform specific definitions.  Linux/generic version.
   Copyright (C) 2019-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library.  If not, see
   <https://www.gnu.org/licenses/>.  */
# 83 "/usr/include/bits/termios.h" 2 3 4

# 1 "/usr/include/bits/termios-baud.h" 1 3 4
/* termios baud rate selection definitions. Universal version for sane speed_t.
   Copyright (C) 2019-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library.  If not, see
   <https://www.gnu.org/licenses/>.  */





/* POSIX required baud rates */
# 45 "/usr/include/bits/termios-baud.h" 3 4
/* Other baud rates, "nonstandard" but known to be used */
# 85 "/usr/include/bits/termios.h" 2 3 4
# 40 "/usr/include/termios.h" 2 3 4







/* Return the output baud rate stored in *TERMIOS_P.  */
extern speed_t cfgetospeed (const struct termios *__termios_p) ;

/* Return the input baud rate stored in *TERMIOS_P.  */
extern speed_t cfgetispeed (const struct termios *__termios_p) ;

/* Set the output baud rate stored in *TERMIOS_P to SPEED.  */
extern int cfsetospeed (struct termios *__termios_p, speed_t __speed) ;

/* Set the input baud rate stored in *TERMIOS_P to SPEED.  */
extern int cfsetispeed (struct termios *__termios_p, speed_t __speed) ;
# 85 "/usr/include/termios.h" 3 4
/* Put the state of FD into *TERMIOS_P.  */
extern int tcgetattr (int __fd, struct termios *__termios_p) ;

/* Set the state of FD to *TERMIOS_P.
   Values for OPTIONAL_ACTIONS (TCSA*) are in <bits/termios.h>.  */
extern int tcsetattr (int __fd, int __optional_actions,
        const struct termios *__termios_p) ;







/* Send zero bits on FD.  */
extern int tcsendbreak (int __fd, int __duration) ;

/* Wait for pending output to be written on FD.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int tcdrain (int __fd);

/* Flush pending data on FD.
   Values for QUEUE_SELECTOR (TC{I,O,IO}FLUSH) are in <bits/termios.h>.  */
extern int tcflush (int __fd, int __queue_selector) ;

/* Suspend or restart transmission on FD.
   Values for ACTION (TC[IO]{OFF,ON}) are in <bits/termios.h>.  */
extern int tcflow (int __fd, int __action) ;
# 107 "/usr/include/term.h" 2 3 4
# 144 "/usr/include/term.h" 3 4
/* configured with --enable-exp-win32? */
# 159 "/usr/include/term.h" 3 4
/* The cast works because TERMTYPE is the first data in TERMINAL */
# 631 "/usr/include/term.h" 3 4
/* older synonyms for some capabilities */



/* HPUX-11 uses this name rather than the standard one */
# 677 "/usr/include/term.h" 3 4
/*
 * Predefined terminfo array sizes
 */




/* used by code for comparing entries */


typedef struct termtype { /* in-core form of terminfo data */
    char *term_names; /* str_table offset of term names */
    char *str_table; /* pointer to string table */
    char *Booleans; /* array of boolean values */
    short *Numbers; /* array of integer values */
    char **Strings; /* array of string offsets */


    char *ext_str_table; /* pointer to extended string table */
    char **ext_Names; /* corresponding names */

    unsigned short num_Booleans;/* count total Booleans */
    unsigned short num_Numbers; /* count total Numbers */
    unsigned short num_Strings; /* count total Strings */

    unsigned short ext_Booleans;/* count extensions to Booleans */
    unsigned short ext_Numbers; /* count extensions to Numbers */
    unsigned short ext_Strings; /* count extensions to Strings */


} TERMTYPE;

/*
 * The only reason these structures are visible is for read-only use.
 * Programs which modify the data are not, never were, portable across
 * curses implementations.
 *
 * The first field in TERMINAL is used in macros.
 * The remaining fields are private.
 */
# 747 "/usr/include/term.h" 3 4
typedef struct term { /* describe an actual terminal */
    TERMTYPE type; /* terminal type description */
} TERMINAL;



/* configured with --enable-broken_linker and reentrancy disabled */







extern TERMINAL * cur_term;


/* configured with --enable-broken_linker or reentrancy enabled */
# 788 "/usr/include/term.h" 3 4
extern const char * const boolnames[];
extern const char * const boolcodes[];
extern const char * const boolfnames[];
extern const char * const numnames[];
extern const char * const numcodes[];
extern const char * const numfnames[];
extern const char * const strnames[];
extern const char * const strcodes[];
extern const char * const strfnames[];



/*
 * These entrypoints are used only by the ncurses utilities such as tic.
 */
# 817 "/usr/include/term.h" 3 4
/*
 * Normal entry points
 */
extern TERMINAL * set_curterm (TERMINAL *);
extern int del_curterm (TERMINAL *);

/* miscellaneous entry points */
extern int restartterm (const char *, int, int *);
extern int setupterm (const char *,int,int *);

/* terminfo entry points, also declared in curses.h */
# 848 "/usr/include/term.h" 3 4
/* termcap database emulation (XPG4 uses const only for 2nd param of tgetent) */

extern char * tgetstr (const char *, char **);
extern char * tgoto (const char *, int, int);
extern int tgetent (char *, const char *);
extern int tgetflag (const char *);
extern int tgetnum (const char *);
extern int tputs (const char *, int, int (*)(int));


/*
 * Include curses.h before term.h to enable these extensions.
 */


extern char * tigetstr_sp (SCREEN*, const char *);
extern int putp_sp (SCREEN*, const char *);
extern int tigetflag_sp (SCREEN*, const char *);
extern int tigetnum_sp (SCREEN*, const char *);

/* configured without --disable-tparm-varargs? */

extern char * tparm_sp (SCREEN*, const char *, ...); /* special */




/* termcap database emulation (XPG4 uses const only for 2nd param of tgetent) */
extern char * tgetstr_sp (SCREEN*, const char *, char **);
extern char * tgoto_sp (SCREEN*, const char *, int, int);
extern int tgetent_sp (SCREEN*, char *, const char *);
extern int tgetflag_sp (SCREEN*, const char *);
extern int tgetnum_sp (SCREEN*, const char *);
extern int tputs_sp (SCREEN*, const char *, int, NCURSES_OUTC_sp);

extern TERMINAL * set_curterm_sp (SCREEN*, TERMINAL *);
extern int del_curterm_sp (SCREEN*, TERMINAL *);

extern int restartterm_sp (SCREEN*, const char *, int, int *);


/*
 * Debugging features.
 */
extern void exit_terminfo(int);
# 102 "all.c" 2
# 1 "/usr/include/term_entry.h" 1 3 4
/****************************************************************************
 * Copyright 2018-2023,2025 Thomas E. Dickey                                *
 * Copyright 1998-2015,2017 Free Software Foundation, Inc.                  *
 *                                                                          *
 * Permission is hereby granted, free of charge, to any person obtaining a  *
 * copy of this software and associated documentation files (the            *
 * "Software"), to deal in the Software without restriction, including      *
 * without limitation the rights to use, copy, modify, merge, publish,      *
 * distribute, distribute with modifications, sublicense, and/or sell       *
 * copies of the Software, and to permit persons to whom the Software is    *
 * furnished to do so, subject to the following conditions:                 *
 *                                                                          *
 * The above copyright notice and this permission notice shall be included  *
 * in all copies or substantial portions of the Software.                   *
 *                                                                          *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS  *
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF               *
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.   *
 * IN NO EVENT SHALL THE ABOVE COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,   *
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR    *
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR    *
 * THE USE OR OTHER DEALINGS IN THE SOFTWARE.                               *
 *                                                                          *
 * Except as contained in this notice, the name(s) of the above copyright   *
 * holders shall not be used in advertising or otherwise to promote the     *
 * sale, use or other dealings in this Software without prior written       *
 * authorization.                                                           *
 ****************************************************************************/

/****************************************************************************
 *  Author: Zeyd M. Ben-Halim <zmbenhal@netcom.com> 1992,1995               *
 *     and: Eric S. Raymond <esr@snark.thyrsus.com>                         *
 *     and: Thomas E. Dickey                        1998-on                 *
 ****************************************************************************/

/* $Id: term_entry.h,v 1.65 2025/01/11 20:37:28 tom Exp $ */

/*
 *	term_entry.h -- interface to entry-manipulation code
 */



/* *INDENT-OFF* */
# 53 "/usr/include/term_entry.h" 3 4
/*
 * These macros may be used by programs that know about TERMTYPE:
 */
# 84 "/usr/include/term_entry.h" 3 4
/*
 * The remaining type-definitions and macros are used only internally by the
 * ncurses utilities.
 */
# 219 "/usr/include/term_entry.h" 3 4
/* *INDENT-ON* */
# 103 "all.c" 2
# 1 "/usr/include/termcap.h" 1 3 4
/****************************************************************************
 * Copyright 2018-2020,2021 Thomas E. Dickey                                *
 * Copyright 1998-2000,2001 Free Software Foundation, Inc.                  *
 *                                                                          *
 * Permission is hereby granted, free of charge, to any person obtaining a  *
 * copy of this software and associated documentation files (the            *
 * "Software"), to deal in the Software without restriction, including      *
 * without limitation the rights to use, copy, modify, merge, publish,      *
 * distribute, distribute with modifications, sublicense, and/or sell       *
 * copies of the Software, and to permit persons to whom the Software is    *
 * furnished to do so, subject to the following conditions:                 *
 *                                                                          *
 * The above copyright notice and this permission notice shall be included  *
 * in all copies or substantial portions of the Software.                   *
 *                                                                          *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS  *
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF               *
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.   *
 * IN NO EVENT SHALL THE ABOVE COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,   *
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR    *
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR    *
 * THE USE OR OTHER DEALINGS IN THE SOFTWARE.                               *
 *                                                                          *
 * Except as contained in this notice, the name(s) of the above copyright   *
 * holders shall not be used in advertising or otherwise to promote the     *
 * sale, use or other dealings in this Software without prior written       *
 * authorization.                                                           *
 ****************************************************************************/

/****************************************************************************
 *  Author: Zeyd M. Ben-Halim <zmbenhal@netcom.com> 1992,1995               *
 *     and: Eric S. Raymond <esr@snark.thyrsus.com>                         *
 ****************************************************************************/

/* $Id: termcap.h.in,v 1.20 2021/06/17 21:26:02 tom Exp $ */
# 55 "/usr/include/termcap.h" 3 4
extern char PC;
extern char * UP;
extern char * BC;
extern unsigned ospeed;
# 104 "all.c" 2

# 1 "/usr/bin/../lib/clang/21/include/tgmath.h" 1 3
/*===---- tgmath.h - Standard header for type generic math ----------------===*\
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
\*===----------------------------------------------------------------------===*/




/* C99 7.22 Type-generic math <tgmath.h>. */
# 1 "/usr/include/math.h" 1 3 4
/* Declarations for math functions.
   Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.12 Mathematics	<math.h>
 */





# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */
# 35 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
# 45 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  Most but not all symbols enabled by that macro in TS
   18661-1 are enabled unconditionally in C23.  In C23, the symbols in
   Annex F still require a new feature test macro
   __STDC_WANT_IEC_60559_EXT__ instead (C23 does not define
   __STDC_WANT_IEC_60559_BFP_EXT__), while a few features from TS
   18661-1 are not included in C23 (and thus should depend on
   __STDC_WANT_IEC_60559_BFP_EXT__ even when C23 features are
   enabled).

   __GLIBC_USE (IEC_60559_BFP_EXT) controls those features from TS
   18661-1 not included in C23.

   __GLIBC_USE (IEC_60559_BFP_EXT_C23) controls those features from TS
   18661-1 that are also included in C23 (with no feature test macro
   required in C23).

   __GLIBC_USE (IEC_60559_EXT) controls those features from TS 18661-1
   that are included in C23 but conditional on
   __STDC_WANT_IEC_60559_EXT__.  (There are currently no features
   conditional on __STDC_WANT_IEC_60559_EXT__ that are not in TS
   18661-1.)  */
# 86 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  Other than the reduction
   functions, the symbols from this TS are enabled unconditionally in
   C23.  */
# 103 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
# 28 "/usr/include/math.h" 2 3 4








/* Get definitions of __intmax_t and __uintmax_t.  */


/* Get machine-dependent vector math functions declarations.  */
# 1 "/usr/include/bits/math-vector.h" 1 3 4
/* Platform-specific SIMD declarations of math functions.
   Copyright (C) 2014-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






/* Get default empty definitions for simd declarations.  */
# 1 "/usr/include/bits/libm-simd-decl-stubs.h" 1 3 4
/* Empty definitions required for __MATHCALL_VEC unfolding in mathcalls.h.
   Copyright (C) 2014-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






/* Needed definitions could be generated with:
   for func in $(grep __MATHCALL_VEC math/bits/mathcalls.h |\
		 sed -r "s|__MATHCALL_VEC.?\(||; s|,.*||"); do
     echo "#define __DECL_SIMD_${func}";
     echo "#define __DECL_SIMD_${func}f";
     echo "#define __DECL_SIMD_${func}l";
   done
 */
# 26 "/usr/include/bits/math-vector.h" 2 3 4
# 41 "/usr/include/math.h" 2 3 4

/* Gather machine dependent type support.  */


/* Value returned on overflow.  With IEEE 754 floating point, this is
   +Infinity, otherwise the largest representable positive value.  */



/* This may provoke compiler warnings, and may not be rounded to
   +Infinity in all IEEE 754 rounding modes, but is the best that can
   be done in ISO C while remaining a constant expression.  10,000 is
   greater than the maximum (decimal) exponent for all supported
   floating-point formats and widths.  */
# 89 "/usr/include/math.h" 3 4
/* IEEE positive infinity.  */
# 98 "/usr/include/math.h" 3 4
/* IEEE Not A Number.  */




/* This will raise an "invalid" exception outside static initializers,
   but is the best that can be done in ISO C while remaining a
   constant expression.  */
# 155 "/usr/include/math.h" 3 4
/* Get __GLIBC_FLT_EVAL_METHOD.  */
# 1 "/usr/include/bits/flt-eval-method.h" 1 3 4
/* Define __GLIBC_FLT_EVAL_METHOD.  x86 version.
   Copyright (C) 2016-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 157 "/usr/include/math.h" 2 3 4


/* Define the following typedefs.

    float_t	floating-point type at least as wide as `float' used
		to evaluate `float' expressions
    double_t	floating-point type at least as wide as `double' used
		to evaluate `double' expressions
*/

typedef float float_t;
typedef double double_t;
# 198 "/usr/include/math.h" 3 4
/* Define macros for the return values of ilogb and llogb, based on
   __FP_LOGB0_IS_MIN and __FP_LOGBNAN_IS_MIN.

    FP_ILOGB0	Expands to a value returned by `ilogb (0.0)'.
    FP_ILOGBNAN	Expands to a value returned by `ilogb (NAN)'.
    FP_LLOGB0	Expands to a value returned by `llogb (0.0)'.
    FP_LLOGBNAN	Expands to a value returned by `llogb (NAN)'.

*/

# 1 "/usr/include/bits/fp-logb.h" 1 3 4
/* Define __FP_LOGB0_IS_MIN and __FP_LOGBNAN_IS_MIN.  x86 version.
   Copyright (C) 2016-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 209 "/usr/include/math.h" 2 3 4
# 239 "/usr/include/math.h" 3 4
/* Get the architecture specific values describing the floating-point
   evaluation.  The following symbols will get defined:

    FP_FAST_FMA
    FP_FAST_FMAF
    FP_FAST_FMAL
		If defined it indicates that the `fma' function
		generally executes about as fast as a multiply and an add.
		This macro is defined only iff the `fma' function is
		implemented directly with a hardware multiply-add instructions.
*/

# 1 "/usr/include/bits/fp-fast.h" 1 3 4
/* Define FP_FAST_* macros.
   Copyright (C) 2016-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */







/* The GCC 4.6 compiler will define __FP_FAST_FMA{,F,L} if the fma{,f,l}
   builtins are supported.  */
# 252 "/usr/include/math.h" 2 3 4
# 275 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls-macros.h" 1 3 4
/* Macros for math function declarations.
   Copyright (C) 2024-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 42 "/usr/include/bits/mathcalls-macros.h" 3 4
/* Ignore the alias by default.  The alias is only useful with
   redirections.  */
# 276 "/usr/include/math.h" 2 3 4





# 1 "/usr/include/bits/mathcalls-helper-functions.h" 1 3 4
/* Prototype declarations for math classification macros helpers.
   Copyright (C) 2017-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* Classify given number.  */
extern int __fpclassify (double __value)
                                ;

/* Test for negative number.  */
extern int __signbit (double __value)
                                ;

/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int __isinf (double __value)
                             ;

/* Return nonzero if VALUE is finite and not NaN.  Used by isfinite macro.  */
extern int __finite (double __value)
                             ;

/* Return nonzero if VALUE is not a number.  */
extern int __isnan (double __value)
                             ;

/* Test equality.  */
extern int __iseqsig (double __x, double __y) ;

/* Test for signaling NaN.  */
extern int __issignaling (double __value)
                                ;
# 282 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.

   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:

   __MATHCALL (NAME,[_r], (ARGS...));

   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.

   Functions returning other types like `int' are declared using the macro:

   __MATHDECL (TYPE, NAME,[_r], (ARGS...));

   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.

   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */






/* Trigonometric functions.  */

/* Arc cosine of X.  */
 extern double acos (double __x) ; extern double __acos (double __x) ;
/* Arc sine of X.  */
 extern double asin (double __x) ; extern double __asin (double __x) ;
/* Arc tangent of X.  */
 extern double atan (double __x) ; extern double __atan (double __x) ;
/* Arc tangent of Y/X.  */
 extern double atan2 (double __y, double __x) ; extern double __atan2 (double __y, double __x) ;

/* Cosine of X.  */
 extern double cos (double __x) ; extern double __cos (double __x) ;
/* Sine of X.  */
 extern double sin (double __x) ; extern double __sin (double __x) ;
/* Tangent of X.  */
 extern double tan (double __x) ; extern double __tan (double __x) ;
# 90 "/usr/include/bits/mathcalls.h" 3 4
/* Hyperbolic functions.  */

/* Hyperbolic cosine of X.  */
 extern double cosh (double __x) ; extern double __cosh (double __x) ;
/* Hyperbolic sine of X.  */
 extern double sinh (double __x) ; extern double __sinh (double __x) ;
/* Hyperbolic tangent of X.  */
 extern double tanh (double __x) ; extern double __tanh (double __x) ;
# 106 "/usr/include/bits/mathcalls.h" 3 4
/* Hyperbolic arc cosine of X.  */
 extern double acosh (double __x) ; extern double __acosh (double __x) ;
/* Hyperbolic arc sine of X.  */
 extern double asinh (double __x) ; extern double __asinh (double __x) ;
/* Hyperbolic arc tangent of X.  */
 extern double atanh (double __x) ; extern double __atanh (double __x) ;


/* Exponential and logarithmic functions.  */

/* Exponential function of X.  */
 extern double exp (double __x) ; extern double __exp (double __x) ;

/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern double frexp (double __x, int *__exponent) ; extern double __frexp (double __x, int *__exponent) ;

/* X times (two to the EXP power).  */
extern double ldexp (double __x, int __exponent) ; extern double __ldexp (double __x, int __exponent) ;

/* Natural logarithm of X.  */
 extern double log (double __x) ; extern double __log (double __x) ;

/* Base-ten logarithm of X.  */
 extern double log10 (double __x) ; extern double __log10 (double __x) ;

/* Break VALUE into integral and fractional parts.  */
extern double modf (double __x, double *__iptr) ; extern double __modf (double __x, double *__iptr) ;
# 155 "/usr/include/bits/mathcalls.h" 3 4
/* Return exp(X) - 1.  */
 extern double expm1 (double __x) ; extern double __expm1 (double __x) ;

/* Return log(1 + X).  */
 extern double log1p (double __x) ; extern double __log1p (double __x) ;

/* Return the base 2 signed integral exponent of X.  */
extern double logb (double __x) ; extern double __logb (double __x) ;



/* Compute base-2 exponential of X.  */
 extern double exp2 (double __x) ; extern double __exp2 (double __x) ;

/* Compute base-2 logarithm of X.  */
 extern double log2 (double __x) ; extern double __log2 (double __x) ;



/* Power functions.  */

/* Return X to the Y power.  */
 extern double pow (double __x, double __y) ; extern double __pow (double __x, double __y) ;

/* Return the square root of X.  */
extern double sqrt (double __x) ; extern double __sqrt (double __x) ;


/* Return `sqrt(X*X + Y*Y)'.  */
 extern double hypot (double __x, double __y) ; extern double __hypot (double __x, double __y) ;



/* Return the cube root of X.  */
 extern double cbrt (double __x) ; extern double __cbrt (double __x) ;
# 210 "/usr/include/bits/mathcalls.h" 3 4
/* Nearest integer, absolute value, and remainder functions.  */

/* Smallest integral value not less than X.  */
extern double ceil (double __x) ;

/* Absolute value of X.  */
extern double fabs (double __x) ;

/* Largest integer not greater than X.  */
extern double floor (double __x) ;

/* Floating-point modulo remainder of X/Y.  */
extern double fmod (double __x, double __y) ; extern double __fmod (double __x, double __y) ;
# 251 "/usr/include/bits/mathcalls.h" 3 4
/* Return X with its signed changed to Y's.  */
extern double copysign (double __x, double __y) ;



/* Return representation of qNaN for double type.  */
extern double nan (const char *__tagb) ; extern double __nan (const char *__tagb) ;
# 284 "/usr/include/bits/mathcalls.h" 3 4
/* Error and gamma functions.  */
 extern double erf (double) ; extern double __erf (double) ;
 extern double erfc (double) ; extern double __erfc (double) ;
extern double lgamma (double) ; extern double __lgamma (double) ;



/* True gamma function.  */
extern double tgamma (double) ; extern double __tgamma (double) ;
# 311 "/usr/include/bits/mathcalls.h" 3 4
/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
extern double rint (double __x) ; extern double __rint (double __x) ;

/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern double nextafter (double __x, double __y) ; extern double __nextafter (double __x, double __y) ;

extern double nexttoward (double __x, long double __y) ; extern double __nexttoward (double __x, long double __y) ;
# 328 "/usr/include/bits/mathcalls.h" 3 4
/* Return the remainder of integer division X / Y with infinite precision.  */
extern double remainder (double __x, double __y) ; extern double __remainder (double __x, double __y) ;


/* Return X times (2 to the Nth power).  */
extern double scalbn (double __x, int __n) ; extern double __scalbn (double __x, int __n) ;


/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogb (double __x) ; extern int __ilogb (double __x) ;
# 346 "/usr/include/bits/mathcalls.h" 3 4
/* Return X times (2 to the Nth power).  */
extern double scalbln (double __x, long int __n) ; extern double __scalbln (double __x, long int __n) ;

/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
extern double nearbyint (double __x) ; extern double __nearbyint (double __x) ;

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern double round (double __x) ;

/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
extern double trunc (double __x) ;

/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
extern double remquo (double __x, double __y, int *__quo) ; extern double __remquo (double __x, double __y, int *__quo) ;


/* Conversion functions.  */

/* Round X to nearest integral value according to current rounding
   direction.  */
extern long int lrint (double __x) ; extern long int __lrint (double __x) ;
__extension__
extern long long int llrint (double __x) ; extern long long int __llrint (double __x) ;

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long int lround (double __x) ; extern long int __lround (double __x) ;
__extension__
extern long long int llround (double __x) ; extern long long int __llround (double __x) ;


/* Return positive difference between X and Y.  */
extern double fdim (double __x, double __y) ; extern double __fdim (double __x, double __y) ;


/* Return maximum numeric value from X and Y.  */
extern double fmax (double __x, double __y) ;

/* Return minimum numeric value from X and Y.  */
extern double fmin (double __x, double __y) ;


/* Multiply-add function computed as a ternary operation.  */
extern double fma (double __x, double __y, double __z) ; extern double __fma (double __x, double __y, double __z) ;
# 283 "/usr/include/math.h" 2 3 4








/* Include the file of declarations again, this time using `float'
   instead of `double' and appending f to each function name.  */





# 1 "/usr/include/bits/mathcalls-helper-functions.h" 1 3 4
/* Prototype declarations for math classification macros helpers.
   Copyright (C) 2017-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* Classify given number.  */
extern int __fpclassifyf (float __value)
                                ;

/* Test for negative number.  */
extern int __signbitf (float __value)
                                ;

/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int __isinff (float __value)
                             ;

/* Return nonzero if VALUE is finite and not NaN.  Used by isfinite macro.  */
extern int __finitef (float __value)
                             ;

/* Return nonzero if VALUE is not a number.  */
extern int __isnanf (float __value)
                             ;

/* Test equality.  */
extern int __iseqsigf (float __x, float __y) ;

/* Test for signaling NaN.  */
extern int __issignalingf (float __value)
                                ;
# 299 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.

   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:

   __MATHCALL (NAME,[_r], (ARGS...));

   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.

   Functions returning other types like `int' are declared using the macro:

   __MATHDECL (TYPE, NAME,[_r], (ARGS...));

   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.

   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */






/* Trigonometric functions.  */

/* Arc cosine of X.  */
 extern float acosf (float __x) ; extern float __acosf (float __x) ;
/* Arc sine of X.  */
 extern float asinf (float __x) ; extern float __asinf (float __x) ;
/* Arc tangent of X.  */
 extern float atanf (float __x) ; extern float __atanf (float __x) ;
/* Arc tangent of Y/X.  */
 extern float atan2f (float __y, float __x) ; extern float __atan2f (float __y, float __x) ;

/* Cosine of X.  */
 extern float cosf (float __x) ; extern float __cosf (float __x) ;
/* Sine of X.  */
 extern float sinf (float __x) ; extern float __sinf (float __x) ;
/* Tangent of X.  */
 extern float tanf (float __x) ; extern float __tanf (float __x) ;
# 90 "/usr/include/bits/mathcalls.h" 3 4
/* Hyperbolic functions.  */

/* Hyperbolic cosine of X.  */
 extern float coshf (float __x) ; extern float __coshf (float __x) ;
/* Hyperbolic sine of X.  */
 extern float sinhf (float __x) ; extern float __sinhf (float __x) ;
/* Hyperbolic tangent of X.  */
 extern float tanhf (float __x) ; extern float __tanhf (float __x) ;
# 106 "/usr/include/bits/mathcalls.h" 3 4
/* Hyperbolic arc cosine of X.  */
 extern float acoshf (float __x) ; extern float __acoshf (float __x) ;
/* Hyperbolic arc sine of X.  */
 extern float asinhf (float __x) ; extern float __asinhf (float __x) ;
/* Hyperbolic arc tangent of X.  */
 extern float atanhf (float __x) ; extern float __atanhf (float __x) ;


/* Exponential and logarithmic functions.  */

/* Exponential function of X.  */
 extern float expf (float __x) ; extern float __expf (float __x) ;

/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern float frexpf (float __x, int *__exponent) ; extern float __frexpf (float __x, int *__exponent) ;

/* X times (two to the EXP power).  */
extern float ldexpf (float __x, int __exponent) ; extern float __ldexpf (float __x, int __exponent) ;

/* Natural logarithm of X.  */
 extern float logf (float __x) ; extern float __logf (float __x) ;

/* Base-ten logarithm of X.  */
 extern float log10f (float __x) ; extern float __log10f (float __x) ;

/* Break VALUE into integral and fractional parts.  */
extern float modff (float __x, float *__iptr) ; extern float __modff (float __x, float *__iptr) ;
# 155 "/usr/include/bits/mathcalls.h" 3 4
/* Return exp(X) - 1.  */
 extern float expm1f (float __x) ; extern float __expm1f (float __x) ;

/* Return log(1 + X).  */
 extern float log1pf (float __x) ; extern float __log1pf (float __x) ;

/* Return the base 2 signed integral exponent of X.  */
extern float logbf (float __x) ; extern float __logbf (float __x) ;



/* Compute base-2 exponential of X.  */
 extern float exp2f (float __x) ; extern float __exp2f (float __x) ;

/* Compute base-2 logarithm of X.  */
 extern float log2f (float __x) ; extern float __log2f (float __x) ;



/* Power functions.  */

/* Return X to the Y power.  */
 extern float powf (float __x, float __y) ; extern float __powf (float __x, float __y) ;

/* Return the square root of X.  */
extern float sqrtf (float __x) ; extern float __sqrtf (float __x) ;


/* Return `sqrt(X*X + Y*Y)'.  */
 extern float hypotf (float __x, float __y) ; extern float __hypotf (float __x, float __y) ;



/* Return the cube root of X.  */
 extern float cbrtf (float __x) ; extern float __cbrtf (float __x) ;
# 210 "/usr/include/bits/mathcalls.h" 3 4
/* Nearest integer, absolute value, and remainder functions.  */

/* Smallest integral value not less than X.  */
extern float ceilf (float __x) ;

/* Absolute value of X.  */
extern float fabsf (float __x) ;

/* Largest integer not greater than X.  */
extern float floorf (float __x) ;

/* Floating-point modulo remainder of X/Y.  */
extern float fmodf (float __x, float __y) ; extern float __fmodf (float __x, float __y) ;
# 251 "/usr/include/bits/mathcalls.h" 3 4
/* Return X with its signed changed to Y's.  */
extern float copysignf (float __x, float __y) ;



/* Return representation of qNaN for double type.  */
extern float nanf (const char *__tagb) ; extern float __nanf (const char *__tagb) ;
# 284 "/usr/include/bits/mathcalls.h" 3 4
/* Error and gamma functions.  */
 extern float erff (float) ; extern float __erff (float) ;
 extern float erfcf (float) ; extern float __erfcf (float) ;
extern float lgammaf (float) ; extern float __lgammaf (float) ;



/* True gamma function.  */
extern float tgammaf (float) ; extern float __tgammaf (float) ;
# 311 "/usr/include/bits/mathcalls.h" 3 4
/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
extern float rintf (float __x) ; extern float __rintf (float __x) ;

/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern float nextafterf (float __x, float __y) ; extern float __nextafterf (float __x, float __y) ;

extern float nexttowardf (float __x, long double __y) ; extern float __nexttowardf (float __x, long double __y) ;
# 328 "/usr/include/bits/mathcalls.h" 3 4
/* Return the remainder of integer division X / Y with infinite precision.  */
extern float remainderf (float __x, float __y) ; extern float __remainderf (float __x, float __y) ;


/* Return X times (2 to the Nth power).  */
extern float scalbnf (float __x, int __n) ; extern float __scalbnf (float __x, int __n) ;


/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogbf (float __x) ; extern int __ilogbf (float __x) ;
# 346 "/usr/include/bits/mathcalls.h" 3 4
/* Return X times (2 to the Nth power).  */
extern float scalblnf (float __x, long int __n) ; extern float __scalblnf (float __x, long int __n) ;

/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
extern float nearbyintf (float __x) ; extern float __nearbyintf (float __x) ;

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern float roundf (float __x) ;

/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
extern float truncf (float __x) ;

/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
extern float remquof (float __x, float __y, int *__quo) ; extern float __remquof (float __x, float __y, int *__quo) ;


/* Conversion functions.  */

/* Round X to nearest integral value according to current rounding
   direction.  */
extern long int lrintf (float __x) ; extern long int __lrintf (float __x) ;
__extension__
extern long long int llrintf (float __x) ; extern long long int __llrintf (float __x) ;

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long int lroundf (float __x) ; extern long int __lroundf (float __x) ;
__extension__
extern long long int llroundf (float __x) ; extern long long int __llroundf (float __x) ;


/* Return positive difference between X and Y.  */
extern float fdimf (float __x, float __y) ; extern float __fdimf (float __x, float __y) ;


/* Return maximum numeric value from X and Y.  */
extern float fmaxf (float __x, float __y) ;

/* Return minimum numeric value from X and Y.  */
extern float fminf (float __x, float __y) ;


/* Multiply-add function computed as a ternary operation.  */
extern float fmaf (float __x, float __y, float __z) ; extern float __fmaf (float __x, float __y, float __z) ;
# 300 "/usr/include/math.h" 2 3 4
# 359 "/usr/include/math.h" 3 4
/* Include the file of declarations again, this time using `long double'
   instead of `double' and appending l to each function name.  */






# 1 "/usr/include/bits/mathcalls-helper-functions.h" 1 3 4
/* Prototype declarations for math classification macros helpers.
   Copyright (C) 2017-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* Classify given number.  */
extern int __fpclassifyl (long double __value)
                                ;

/* Test for negative number.  */
extern int __signbitl (long double __value)
                                ;

/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int __isinfl (long double __value)
                             ;

/* Return nonzero if VALUE is finite and not NaN.  Used by isfinite macro.  */
extern int __finitel (long double __value)
                             ;

/* Return nonzero if VALUE is not a number.  */
extern int __isnanl (long double __value)
                             ;

/* Test equality.  */
extern int __iseqsigl (long double __x, long double __y) ;

/* Test for signaling NaN.  */
extern int __issignalingl (long double __value)
                                ;
# 368 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
/* Prototype declarations for math functions; helper file for <math.h>.
   Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* NOTE: Because of the special way this file is used by <math.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.

   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:

   __MATHCALL (NAME,[_r], (ARGS...));

   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.

   Functions returning other types like `int' are declared using the macro:

   __MATHDECL (TYPE, NAME,[_r], (ARGS...));

   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.

   Note that there must be no whitespace before the argument passed for
   NAME, to make token pasting work with -traditional.  */






/* Trigonometric functions.  */

/* Arc cosine of X.  */
 extern long double acosl (long double __x) ; extern long double __acosl (long double __x) ;
/* Arc sine of X.  */
 extern long double asinl (long double __x) ; extern long double __asinl (long double __x) ;
/* Arc tangent of X.  */
 extern long double atanl (long double __x) ; extern long double __atanl (long double __x) ;
/* Arc tangent of Y/X.  */
 extern long double atan2l (long double __y, long double __x) ; extern long double __atan2l (long double __y, long double __x) ;

/* Cosine of X.  */
 extern long double cosl (long double __x) ; extern long double __cosl (long double __x) ;
/* Sine of X.  */
 extern long double sinl (long double __x) ; extern long double __sinl (long double __x) ;
/* Tangent of X.  */
 extern long double tanl (long double __x) ; extern long double __tanl (long double __x) ;
# 90 "/usr/include/bits/mathcalls.h" 3 4
/* Hyperbolic functions.  */

/* Hyperbolic cosine of X.  */
 extern long double coshl (long double __x) ; extern long double __coshl (long double __x) ;
/* Hyperbolic sine of X.  */
 extern long double sinhl (long double __x) ; extern long double __sinhl (long double __x) ;
/* Hyperbolic tangent of X.  */
 extern long double tanhl (long double __x) ; extern long double __tanhl (long double __x) ;
# 106 "/usr/include/bits/mathcalls.h" 3 4
/* Hyperbolic arc cosine of X.  */
 extern long double acoshl (long double __x) ; extern long double __acoshl (long double __x) ;
/* Hyperbolic arc sine of X.  */
 extern long double asinhl (long double __x) ; extern long double __asinhl (long double __x) ;
/* Hyperbolic arc tangent of X.  */
 extern long double atanhl (long double __x) ; extern long double __atanhl (long double __x) ;


/* Exponential and logarithmic functions.  */

/* Exponential function of X.  */
 extern long double expl (long double __x) ; extern long double __expl (long double __x) ;

/* Break VALUE into a normalized fraction and an integral power of 2.  */
extern long double frexpl (long double __x, int *__exponent) ; extern long double __frexpl (long double __x, int *__exponent) ;

/* X times (two to the EXP power).  */
extern long double ldexpl (long double __x, int __exponent) ; extern long double __ldexpl (long double __x, int __exponent) ;

/* Natural logarithm of X.  */
 extern long double logl (long double __x) ; extern long double __logl (long double __x) ;

/* Base-ten logarithm of X.  */
 extern long double log10l (long double __x) ; extern long double __log10l (long double __x) ;

/* Break VALUE into integral and fractional parts.  */
extern long double modfl (long double __x, long double *__iptr) ; extern long double __modfl (long double __x, long double *__iptr) ;
# 155 "/usr/include/bits/mathcalls.h" 3 4
/* Return exp(X) - 1.  */
 extern long double expm1l (long double __x) ; extern long double __expm1l (long double __x) ;

/* Return log(1 + X).  */
 extern long double log1pl (long double __x) ; extern long double __log1pl (long double __x) ;

/* Return the base 2 signed integral exponent of X.  */
extern long double logbl (long double __x) ; extern long double __logbl (long double __x) ;



/* Compute base-2 exponential of X.  */
 extern long double exp2l (long double __x) ; extern long double __exp2l (long double __x) ;

/* Compute base-2 logarithm of X.  */
 extern long double log2l (long double __x) ; extern long double __log2l (long double __x) ;



/* Power functions.  */

/* Return X to the Y power.  */
 extern long double powl (long double __x, long double __y) ; extern long double __powl (long double __x, long double __y) ;

/* Return the square root of X.  */
extern long double sqrtl (long double __x) ; extern long double __sqrtl (long double __x) ;


/* Return `sqrt(X*X + Y*Y)'.  */
 extern long double hypotl (long double __x, long double __y) ; extern long double __hypotl (long double __x, long double __y) ;



/* Return the cube root of X.  */
 extern long double cbrtl (long double __x) ; extern long double __cbrtl (long double __x) ;
# 210 "/usr/include/bits/mathcalls.h" 3 4
/* Nearest integer, absolute value, and remainder functions.  */

/* Smallest integral value not less than X.  */
extern long double ceill (long double __x) ;

/* Absolute value of X.  */
extern long double fabsl (long double __x) ;

/* Largest integer not greater than X.  */
extern long double floorl (long double __x) ;

/* Floating-point modulo remainder of X/Y.  */
extern long double fmodl (long double __x, long double __y) ; extern long double __fmodl (long double __x, long double __y) ;
# 251 "/usr/include/bits/mathcalls.h" 3 4
/* Return X with its signed changed to Y's.  */
extern long double copysignl (long double __x, long double __y) ;



/* Return representation of qNaN for double type.  */
extern long double nanl (const char *__tagb) ; extern long double __nanl (const char *__tagb) ;
# 284 "/usr/include/bits/mathcalls.h" 3 4
/* Error and gamma functions.  */
 extern long double erfl (long double) ; extern long double __erfl (long double) ;
 extern long double erfcl (long double) ; extern long double __erfcl (long double) ;
extern long double lgammal (long double) ; extern long double __lgammal (long double) ;



/* True gamma function.  */
extern long double tgammal (long double) ; extern long double __tgammal (long double) ;
# 311 "/usr/include/bits/mathcalls.h" 3 4
/* Return the integer nearest X in the direction of the
   prevailing rounding mode.  */
extern long double rintl (long double __x) ; extern long double __rintl (long double __x) ;

/* Return X + epsilon if X < Y, X - epsilon if X > Y.  */
extern long double nextafterl (long double __x, long double __y) ; extern long double __nextafterl (long double __x, long double __y) ;

extern long double nexttowardl (long double __x, long double __y) ; extern long double __nexttowardl (long double __x, long double __y) ;
# 328 "/usr/include/bits/mathcalls.h" 3 4
/* Return the remainder of integer division X / Y with infinite precision.  */
extern long double remainderl (long double __x, long double __y) ; extern long double __remainderl (long double __x, long double __y) ;


/* Return X times (2 to the Nth power).  */
extern long double scalbnl (long double __x, int __n) ; extern long double __scalbnl (long double __x, int __n) ;


/* Return the binary exponent of X, which must be nonzero.  */
extern int ilogbl (long double __x) ; extern int __ilogbl (long double __x) ;
# 346 "/usr/include/bits/mathcalls.h" 3 4
/* Return X times (2 to the Nth power).  */
extern long double scalblnl (long double __x, long int __n) ; extern long double __scalblnl (long double __x, long int __n) ;

/* Round X to integral value in floating-point format using current
   rounding direction, but do not raise inexact exception.  */
extern long double nearbyintl (long double __x) ; extern long double __nearbyintl (long double __x) ;

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long double roundl (long double __x) ;

/* Round X to the integral value in floating-point format nearest but
   not larger in magnitude.  */
extern long double truncl (long double __x) ;

/* Compute remainder of X and Y and put in *QUO a value with sign of x/y
   and magnitude congruent `mod 2^n' to the magnitude of the integral
   quotient x/y, with n >= 3.  */
extern long double remquol (long double __x, long double __y, int *__quo) ; extern long double __remquol (long double __x, long double __y, int *__quo) ;


/* Conversion functions.  */

/* Round X to nearest integral value according to current rounding
   direction.  */
extern long int lrintl (long double __x) ; extern long int __lrintl (long double __x) ;
__extension__
extern long long int llrintl (long double __x) ; extern long long int __llrintl (long double __x) ;

/* Round X to nearest integral value, rounding halfway cases away from
   zero.  */
extern long int lroundl (long double __x) ; extern long int __lroundl (long double __x) ;
__extension__
extern long long int llroundl (long double __x) ; extern long long int __llroundl (long double __x) ;


/* Return positive difference between X and Y.  */
extern long double fdiml (long double __x, long double __y) ; extern long double __fdiml (long double __x, long double __y) ;


/* Return maximum numeric value from X and Y.  */
extern long double fmaxl (long double __x, long double __y) ;

/* Return minimum numeric value from X and Y.  */
extern long double fminl (long double __x, long double __y) ;


/* Multiply-add function computed as a ternary operation.  */
extern long double fmal (long double __x, long double __y, long double __z) ; extern long double __fmal (long double __x, long double __y, long double __z) ;
# 369 "/usr/include/math.h" 2 3 4
# 390 "/usr/include/math.h" 3 4
/* Include the file of declarations for _FloatN and _FloatNx
   types.  */
# 450 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls-helper-functions.h" 1 3 4
/* Prototype declarations for math classification macros helpers.
   Copyright (C) 2017-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* Classify given number.  */
extern int __fpclassifyf128 (_Float128 __value)
                                ;

/* Test for negative number.  */
extern int __signbitf128 (_Float128 __value)
                                ;

/* Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  */
extern int __isinff128 (_Float128 __value)
                             ;

/* Return nonzero if VALUE is finite and not NaN.  Used by isfinite macro.  */
extern int __finitef128 (_Float128 __value)
                             ;

/* Return nonzero if VALUE is not a number.  */
extern int __isnanf128 (_Float128 __value)
                             ;

/* Test equality.  */
extern int __iseqsigf128 (_Float128 __x, _Float128 __y) ;

/* Test for signaling NaN.  */
extern int __issignalingf128 (_Float128 __value)
                                ;
# 451 "/usr/include/math.h" 2 3 4
# 518 "/usr/include/math.h" 3 4
/* Declare functions returning a narrower type.  */
# 835 "/usr/include/math.h" 3 4
/* Depending on the type of TG_ARG, call an appropriately suffixed
   version of FUNC with arguments (including parentheses) ARGS.
   Suffixed functions may not exist for long double if it has the same
   format as double, or for other types with the same format as float,
   double or long double.  The behavior is undefined if the argument
   does not have a real floating type.  The definition may use a
   conditional expression, so all suffixed versions of FUNC must
   return the same type (FUNC may include a cast if necessary rather
   than being a single identifier).  */
# 899 "/usr/include/math.h" 3 4
/* ISO C99 defines some generic macros which work on any data type.  */


/* All floating-point numbers can be put in one of these categories.  */
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };

/* GCC bug 66462 means we cannot use the math builtins with -fsignaling-nan,
   so disable builtins if this is enabled.  When fixed in a newer GCC,
   the __SUPPORT_SNAN__ check may be skipped for those versions.  */

/* Return number of classification appropriate for X.  */



     /* The check for __cplusplus allows the use of the builtin, even
	when optimization for size is on.  This is provided for
	libstdc++, only to let its configure test work when it is built
	with -Os.  No further use of this definition of fpclassify is
	expected in C++ mode, since libstdc++ provides its own version
	of fpclassify in cmath (which undefines fpclassify).  */






/* Return nonzero value if sign of X is negative.  */
# 960 "/usr/include/math.h" 3 4
/* Return nonzero value if X is not +-Inf or NaN.  */







/* Return nonzero value if X is neither zero, subnormal, Inf, nor NaN.  */







/* Return nonzero value if X is a NaN.  We could use `fpclassify' but
   we already have this functions `__isnan' and it is faster.  */







/* Return nonzero value if X is positive or negative infinity.  */
# 1004 "/usr/include/math.h" 3 4
/* Bitmasks for the math_errhandling macro.  */



/* By default all math functions support both errno and exception handling
   (except for soft floating point implementations which may only support
   errno handling).  If errno handling is disabled, exceptions are still
   supported by GLIBC.  Set math_errhandling to 0 with -ffast-math (this is
   nonconforming but it is more useful than leaving it undefined).  */
# 1114 "/usr/include/math.h" 3 4
/* Some useful constants.  */
# 1131 "/usr/include/math.h" 3 4
/* GNU extension to provide float constants with similar names.  */
# 1148 "/usr/include/math.h" 3 4
/* The above constants are not adequate for computation using `long double's.
   Therefore we provide as an extension constants with similar names as a
   GNU extension.  Provide enough digits for the 128-bit IEEE quad.  */
# 1297 "/usr/include/math.h" 3 4
/* isunordered must always check both operands first for signaling NaNs.  */
# 14 "/usr/bin/../lib/clang/21/include/tgmath.h" 2 3

/*
 * Allow additional definitions and implementation-defined values on Apple
 * platforms. This is done after #include <math.h> to avoid depcycle conflicts
 * between libcxx and darwin in C++ modules builds.
 */




/* C++ handles type genericity with overloading in math.h. */

# 1 "/usr/include/complex.h" 1 3 4
/* Copyright (C) 1997-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99:  7.3 Complex arithmetic	<complex.h>
 */





# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */
# 35 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
# 45 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  Most but not all symbols enabled by that macro in TS
   18661-1 are enabled unconditionally in C23.  In C23, the symbols in
   Annex F still require a new feature test macro
   __STDC_WANT_IEC_60559_EXT__ instead (C23 does not define
   __STDC_WANT_IEC_60559_BFP_EXT__), while a few features from TS
   18661-1 are not included in C23 (and thus should depend on
   __STDC_WANT_IEC_60559_BFP_EXT__ even when C23 features are
   enabled).

   __GLIBC_USE (IEC_60559_BFP_EXT) controls those features from TS
   18661-1 not included in C23.

   __GLIBC_USE (IEC_60559_BFP_EXT_C23) controls those features from TS
   18661-1 that are also included in C23 (with no feature test macro
   required in C23).

   __GLIBC_USE (IEC_60559_EXT) controls those features from TS 18661-1
   that are included in C23 but conditional on
   __STDC_WANT_IEC_60559_EXT__.  (There are currently no features
   conditional on __STDC_WANT_IEC_60559_EXT__ that are not in TS
   18661-1.)  */
# 86 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  Other than the reduction
   functions, the symbols from this TS are enabled unconditionally in
   C23.  */
# 103 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
# 27 "/usr/include/complex.h" 2 3 4

/* Get general and ISO C99 specific information.  */
# 1 "/usr/include/bits/mathdef.h" 1 3 4
/* Copyright (C) 1997-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 30 "/usr/include/complex.h" 2 3 4

/* Gather machine-dependent _FloatN type support.  */




/* We might need to add support for more compilers here.  But since ISO
   C99 is out hopefully all maintained compilers will soon provide the data
   types `float complex' and `double complex'.  */






/* Narrowest imaginary unit.  This depends on the floating-point
   evaluation method.
   XXX This probably has to go into a gcc related file.  */


/* Another more descriptive name is `I'.
   XXX Once we have the imaginary support switch this to _Imaginary_I.  */





/* Macros to expand into expression of specified complex type.  */
# 92 "/usr/include/complex.h" 3 4
/* The file <bits/cmathcalls.h> contains the prototypes for all the
   actual math functions.  These macros are used for those prototypes,
   so we can easily declare each function as both `name' and `__name',
   and can declare the float versions `namef' and `__namef'.  */
# 111 "/usr/include/complex.h" 3 4
# 1 "/usr/include/bits/cmathcalls.h" 1 3 4
/* Prototype declarations for complex math functions;
   helper file for <complex.h>.
   Copyright (C) 1997-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* NOTE: Because of the special way this file is used by <complex.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.

   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:

   __MATHCALL (NAME, (ARGS...));

   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.

   Functions returning other types like `int' are declared using the macro:

   __MATHDECL (TYPE, NAME, (ARGS...));

   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.  */
# 52 "/usr/include/bits/cmathcalls.h" 3 4
/* Trigonometric functions.  */

/* Arc cosine of Z.  */
extern double _Complex cacos (double _Complex __z) ; extern double _Complex __cacos (double _Complex __z) ;
/* Arc sine of Z.  */
extern double _Complex casin (double _Complex __z) ; extern double _Complex __casin (double _Complex __z) ;
/* Arc tangent of Z.  */
extern double _Complex catan (double _Complex __z) ; extern double _Complex __catan (double _Complex __z) ;

/* Cosine of Z.  */
extern double _Complex ccos (double _Complex __z) ; extern double _Complex __ccos (double _Complex __z) ;
/* Sine of Z.  */
extern double _Complex csin (double _Complex __z) ; extern double _Complex __csin (double _Complex __z) ;
/* Tangent of Z.  */
extern double _Complex ctan (double _Complex __z) ; extern double _Complex __ctan (double _Complex __z) ;


/* Hyperbolic functions.  */

/* Hyperbolic arc cosine of Z.  */
extern double _Complex cacosh (double _Complex __z) ; extern double _Complex __cacosh (double _Complex __z) ;
/* Hyperbolic arc sine of Z.  */
extern double _Complex casinh (double _Complex __z) ; extern double _Complex __casinh (double _Complex __z) ;
/* Hyperbolic arc tangent of Z.  */
extern double _Complex catanh (double _Complex __z) ; extern double _Complex __catanh (double _Complex __z) ;

/* Hyperbolic cosine of Z.  */
extern double _Complex ccosh (double _Complex __z) ; extern double _Complex __ccosh (double _Complex __z) ;
/* Hyperbolic sine of Z.  */
extern double _Complex csinh (double _Complex __z) ; extern double _Complex __csinh (double _Complex __z) ;
/* Hyperbolic tangent of Z.  */
extern double _Complex ctanh (double _Complex __z) ; extern double _Complex __ctanh (double _Complex __z) ;


/* Exponential and logarithmic functions.  */

/* Exponential function of Z.  */
extern double _Complex cexp (double _Complex __z) ; extern double _Complex __cexp (double _Complex __z) ;

/* Natural logarithm of Z.  */
extern double _Complex clog (double _Complex __z) ; extern double _Complex __clog (double _Complex __z) ;







/* Power functions.  */

/* Return X to the Y power.  */
extern double _Complex cpow (double _Complex __x, double _Complex __y) ; extern double _Complex __cpow (double _Complex __x, double _Complex __y) ;

/* Return the square root of Z.  */
extern double _Complex csqrt (double _Complex __z) ; extern double _Complex __csqrt (double _Complex __z) ;


/* Absolute value, conjugates, and projection.  */

/* Absolute value of Z.  */
extern double cabs (double _Complex __z) ; extern double __cabs (double _Complex __z) ;

/* Argument value of Z.  */
extern double carg (double _Complex __z) ; extern double __carg (double _Complex __z) ;

/* Complex conjugate of Z.  */
extern double _Complex conj (double _Complex __z) ; extern double _Complex __conj (double _Complex __z) ;

/* Projection of Z onto the Riemann sphere.  */
extern double _Complex cproj (double _Complex __z) ; extern double _Complex __cproj (double _Complex __z) ;


/* Decomposing complex values.  */

/* Imaginary part of Z.  */
extern double cimag (double _Complex __z) ; extern double __cimag (double _Complex __z) ;

/* Real part of Z.  */
extern double creal (double _Complex __z) ; extern double __creal (double _Complex __z) ;
# 112 "/usr/include/complex.h" 2 3 4



/* Now the float versions.  */


# 1 "/usr/include/bits/cmathcalls.h" 1 3 4
/* Prototype declarations for complex math functions;
   helper file for <complex.h>.
   Copyright (C) 1997-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* NOTE: Because of the special way this file is used by <complex.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.

   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:

   __MATHCALL (NAME, (ARGS...));

   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.

   Functions returning other types like `int' are declared using the macro:

   __MATHDECL (TYPE, NAME, (ARGS...));

   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.  */
# 52 "/usr/include/bits/cmathcalls.h" 3 4
/* Trigonometric functions.  */

/* Arc cosine of Z.  */
extern float _Complex cacosf (float _Complex __z) ; extern float _Complex __cacosf (float _Complex __z) ;
/* Arc sine of Z.  */
extern float _Complex casinf (float _Complex __z) ; extern float _Complex __casinf (float _Complex __z) ;
/* Arc tangent of Z.  */
extern float _Complex catanf (float _Complex __z) ; extern float _Complex __catanf (float _Complex __z) ;

/* Cosine of Z.  */
extern float _Complex ccosf (float _Complex __z) ; extern float _Complex __ccosf (float _Complex __z) ;
/* Sine of Z.  */
extern float _Complex csinf (float _Complex __z) ; extern float _Complex __csinf (float _Complex __z) ;
/* Tangent of Z.  */
extern float _Complex ctanf (float _Complex __z) ; extern float _Complex __ctanf (float _Complex __z) ;


/* Hyperbolic functions.  */

/* Hyperbolic arc cosine of Z.  */
extern float _Complex cacoshf (float _Complex __z) ; extern float _Complex __cacoshf (float _Complex __z) ;
/* Hyperbolic arc sine of Z.  */
extern float _Complex casinhf (float _Complex __z) ; extern float _Complex __casinhf (float _Complex __z) ;
/* Hyperbolic arc tangent of Z.  */
extern float _Complex catanhf (float _Complex __z) ; extern float _Complex __catanhf (float _Complex __z) ;

/* Hyperbolic cosine of Z.  */
extern float _Complex ccoshf (float _Complex __z) ; extern float _Complex __ccoshf (float _Complex __z) ;
/* Hyperbolic sine of Z.  */
extern float _Complex csinhf (float _Complex __z) ; extern float _Complex __csinhf (float _Complex __z) ;
/* Hyperbolic tangent of Z.  */
extern float _Complex ctanhf (float _Complex __z) ; extern float _Complex __ctanhf (float _Complex __z) ;


/* Exponential and logarithmic functions.  */

/* Exponential function of Z.  */
extern float _Complex cexpf (float _Complex __z) ; extern float _Complex __cexpf (float _Complex __z) ;

/* Natural logarithm of Z.  */
extern float _Complex clogf (float _Complex __z) ; extern float _Complex __clogf (float _Complex __z) ;







/* Power functions.  */

/* Return X to the Y power.  */
extern float _Complex cpowf (float _Complex __x, float _Complex __y) ; extern float _Complex __cpowf (float _Complex __x, float _Complex __y) ;

/* Return the square root of Z.  */
extern float _Complex csqrtf (float _Complex __z) ; extern float _Complex __csqrtf (float _Complex __z) ;


/* Absolute value, conjugates, and projection.  */

/* Absolute value of Z.  */
extern float cabsf (float _Complex __z) ; extern float __cabsf (float _Complex __z) ;

/* Argument value of Z.  */
extern float cargf (float _Complex __z) ; extern float __cargf (float _Complex __z) ;

/* Complex conjugate of Z.  */
extern float _Complex conjf (float _Complex __z) ; extern float _Complex __conjf (float _Complex __z) ;

/* Projection of Z onto the Riemann sphere.  */
extern float _Complex cprojf (float _Complex __z) ; extern float _Complex __cprojf (float _Complex __z) ;


/* Decomposing complex values.  */

/* Imaginary part of Z.  */
extern float cimagf (float _Complex __z) ; extern float __cimagf (float _Complex __z) ;

/* Real part of Z.  */
extern float crealf (float _Complex __z) ; extern float __crealf (float _Complex __z) ;
# 119 "/usr/include/complex.h" 2 3 4



/* And the long double versions.  It is non-critical to define them
   here unconditionally since `long double' is required in ISO C99.  */
# 144 "/usr/include/complex.h" 3 4
# 1 "/usr/include/bits/cmathcalls.h" 1 3 4
/* Prototype declarations for complex math functions;
   helper file for <complex.h>.
   Copyright (C) 1997-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* NOTE: Because of the special way this file is used by <complex.h>, this
   file must NOT be protected from multiple inclusion as header files
   usually are.

   This file provides prototype declarations for the math functions.
   Most functions are declared using the macro:

   __MATHCALL (NAME, (ARGS...));

   This means there is a function `NAME' returning `double' and a function
   `NAMEf' returning `float'.  Each place `_Mdouble_' appears in the
   prototype, that is actually `double' in the prototype for `NAME' and
   `float' in the prototype for `NAMEf'.  Reentrant variant functions are
   called `NAME_r' and `NAMEf_r'.

   Functions returning other types like `int' are declared using the macro:

   __MATHDECL (TYPE, NAME, (ARGS...));

   This is just like __MATHCALL but for a function returning `TYPE'
   instead of `_Mdouble_'.  In all of these cases, there is still
   both a `NAME' and a `NAMEf' that takes `float' arguments.  */
# 52 "/usr/include/bits/cmathcalls.h" 3 4
/* Trigonometric functions.  */

/* Arc cosine of Z.  */
extern long double _Complex cacosl (long double _Complex __z) ; extern long double _Complex __cacosl (long double _Complex __z) ;
/* Arc sine of Z.  */
extern long double _Complex casinl (long double _Complex __z) ; extern long double _Complex __casinl (long double _Complex __z) ;
/* Arc tangent of Z.  */
extern long double _Complex catanl (long double _Complex __z) ; extern long double _Complex __catanl (long double _Complex __z) ;

/* Cosine of Z.  */
extern long double _Complex ccosl (long double _Complex __z) ; extern long double _Complex __ccosl (long double _Complex __z) ;
/* Sine of Z.  */
extern long double _Complex csinl (long double _Complex __z) ; extern long double _Complex __csinl (long double _Complex __z) ;
/* Tangent of Z.  */
extern long double _Complex ctanl (long double _Complex __z) ; extern long double _Complex __ctanl (long double _Complex __z) ;


/* Hyperbolic functions.  */

/* Hyperbolic arc cosine of Z.  */
extern long double _Complex cacoshl (long double _Complex __z) ; extern long double _Complex __cacoshl (long double _Complex __z) ;
/* Hyperbolic arc sine of Z.  */
extern long double _Complex casinhl (long double _Complex __z) ; extern long double _Complex __casinhl (long double _Complex __z) ;
/* Hyperbolic arc tangent of Z.  */
extern long double _Complex catanhl (long double _Complex __z) ; extern long double _Complex __catanhl (long double _Complex __z) ;

/* Hyperbolic cosine of Z.  */
extern long double _Complex ccoshl (long double _Complex __z) ; extern long double _Complex __ccoshl (long double _Complex __z) ;
/* Hyperbolic sine of Z.  */
extern long double _Complex csinhl (long double _Complex __z) ; extern long double _Complex __csinhl (long double _Complex __z) ;
/* Hyperbolic tangent of Z.  */
extern long double _Complex ctanhl (long double _Complex __z) ; extern long double _Complex __ctanhl (long double _Complex __z) ;


/* Exponential and logarithmic functions.  */

/* Exponential function of Z.  */
extern long double _Complex cexpl (long double _Complex __z) ; extern long double _Complex __cexpl (long double _Complex __z) ;

/* Natural logarithm of Z.  */
extern long double _Complex clogl (long double _Complex __z) ; extern long double _Complex __clogl (long double _Complex __z) ;







/* Power functions.  */

/* Return X to the Y power.  */
extern long double _Complex cpowl (long double _Complex __x, long double _Complex __y) ; extern long double _Complex __cpowl (long double _Complex __x, long double _Complex __y) ;

/* Return the square root of Z.  */
extern long double _Complex csqrtl (long double _Complex __z) ; extern long double _Complex __csqrtl (long double _Complex __z) ;


/* Absolute value, conjugates, and projection.  */

/* Absolute value of Z.  */
extern long double cabsl (long double _Complex __z) ; extern long double __cabsl (long double _Complex __z) ;

/* Argument value of Z.  */
extern long double cargl (long double _Complex __z) ; extern long double __cargl (long double _Complex __z) ;

/* Complex conjugate of Z.  */
extern long double _Complex conjl (long double _Complex __z) ; extern long double _Complex __conjl (long double _Complex __z) ;

/* Projection of Z onto the Riemann sphere.  */
extern long double _Complex cprojl (long double _Complex __z) ; extern long double _Complex __cprojl (long double _Complex __z) ;


/* Decomposing complex values.  */

/* Imaginary part of Z.  */
extern long double cimagl (long double _Complex __z) ; extern long double __cimagl (long double _Complex __z) ;

/* Real part of Z.  */
extern long double creall (long double _Complex __z) ; extern long double __creall (long double _Complex __z) ;
# 145 "/usr/include/complex.h" 2 3 4
# 27 "/usr/bin/../lib/clang/21/include/tgmath.h" 2 3




// promotion

typedef void _Argument_type_is_not_arithmetic;
static _Argument_type_is_not_arithmetic __tg_promote(...)
                                                   ;
static double __tg_promote(int);
static double __tg_promote(unsigned int);
static double __tg_promote(long);
static double __tg_promote(unsigned long);
static double __tg_promote(long long);
static double __tg_promote(unsigned long long);
static float __tg_promote(float);
static double __tg_promote(double);
static long double __tg_promote(long double);
static float _Complex __tg_promote(float _Complex);
static double _Complex __tg_promote(double _Complex);
static long double _Complex __tg_promote(long double _Complex);
# 56 "/usr/bin/../lib/clang/21/include/tgmath.h" 3
// acos

static float

    __tg_acos(float __x) {return acosf(__x);}

static double

    __tg_acos(double __x) {return acos(__x);}

static long double

    __tg_acos(long double __x) {return acosl(__x);}

static float _Complex

    __tg_acos(float _Complex __x) {return cacosf(__x);}

static double _Complex

    __tg_acos(double _Complex __x) {return cacos(__x);}

static long double _Complex

    __tg_acos(long double _Complex __x) {return cacosl(__x);}




// asin

static float

    __tg_asin(float __x) {return asinf(__x);}

static double

    __tg_asin(double __x) {return asin(__x);}

static long double

    __tg_asin(long double __x) {return asinl(__x);}

static float _Complex

    __tg_asin(float _Complex __x) {return casinf(__x);}

static double _Complex

    __tg_asin(double _Complex __x) {return casin(__x);}

static long double _Complex

    __tg_asin(long double _Complex __x) {return casinl(__x);}




// atan

static float

    __tg_atan(float __x) {return atanf(__x);}

static double

    __tg_atan(double __x) {return atan(__x);}

static long double

    __tg_atan(long double __x) {return atanl(__x);}

static float _Complex

    __tg_atan(float _Complex __x) {return catanf(__x);}

static double _Complex

    __tg_atan(double _Complex __x) {return catan(__x);}

static long double _Complex

    __tg_atan(long double _Complex __x) {return catanl(__x);}




// acosh

static float

    __tg_acosh(float __x) {return acoshf(__x);}

static double

    __tg_acosh(double __x) {return acosh(__x);}

static long double

    __tg_acosh(long double __x) {return acoshl(__x);}

static float _Complex

    __tg_acosh(float _Complex __x) {return cacoshf(__x);}

static double _Complex

    __tg_acosh(double _Complex __x) {return cacosh(__x);}

static long double _Complex

    __tg_acosh(long double _Complex __x) {return cacoshl(__x);}




// asinh

static float

    __tg_asinh(float __x) {return asinhf(__x);}

static double

    __tg_asinh(double __x) {return asinh(__x);}

static long double

    __tg_asinh(long double __x) {return asinhl(__x);}

static float _Complex

    __tg_asinh(float _Complex __x) {return casinhf(__x);}

static double _Complex

    __tg_asinh(double _Complex __x) {return casinh(__x);}

static long double _Complex

    __tg_asinh(long double _Complex __x) {return casinhl(__x);}




// atanh

static float

    __tg_atanh(float __x) {return atanhf(__x);}

static double

    __tg_atanh(double __x) {return atanh(__x);}

static long double

    __tg_atanh(long double __x) {return atanhl(__x);}

static float _Complex

    __tg_atanh(float _Complex __x) {return catanhf(__x);}

static double _Complex

    __tg_atanh(double _Complex __x) {return catanh(__x);}

static long double _Complex

    __tg_atanh(long double _Complex __x) {return catanhl(__x);}




// cos

static float

    __tg_cos(float __x) {return cosf(__x);}

static double

    __tg_cos(double __x) {return cos(__x);}

static long double

    __tg_cos(long double __x) {return cosl(__x);}

static float _Complex

    __tg_cos(float _Complex __x) {return ccosf(__x);}

static double _Complex

    __tg_cos(double _Complex __x) {return ccos(__x);}

static long double _Complex

    __tg_cos(long double _Complex __x) {return ccosl(__x);}




// sin

static float

    __tg_sin(float __x) {return sinf(__x);}

static double

    __tg_sin(double __x) {return sin(__x);}

static long double

    __tg_sin(long double __x) {return sinl(__x);}

static float _Complex

    __tg_sin(float _Complex __x) {return csinf(__x);}

static double _Complex

    __tg_sin(double _Complex __x) {return csin(__x);}

static long double _Complex

    __tg_sin(long double _Complex __x) {return csinl(__x);}




// tan

static float

    __tg_tan(float __x) {return tanf(__x);}

static double

    __tg_tan(double __x) {return tan(__x);}

static long double

    __tg_tan(long double __x) {return tanl(__x);}

static float _Complex

    __tg_tan(float _Complex __x) {return ctanf(__x);}

static double _Complex

    __tg_tan(double _Complex __x) {return ctan(__x);}

static long double _Complex

    __tg_tan(long double _Complex __x) {return ctanl(__x);}




// cosh

static float

    __tg_cosh(float __x) {return coshf(__x);}

static double

    __tg_cosh(double __x) {return cosh(__x);}

static long double

    __tg_cosh(long double __x) {return coshl(__x);}

static float _Complex

    __tg_cosh(float _Complex __x) {return ccoshf(__x);}

static double _Complex

    __tg_cosh(double _Complex __x) {return ccosh(__x);}

static long double _Complex

    __tg_cosh(long double _Complex __x) {return ccoshl(__x);}




// sinh

static float

    __tg_sinh(float __x) {return sinhf(__x);}

static double

    __tg_sinh(double __x) {return sinh(__x);}

static long double

    __tg_sinh(long double __x) {return sinhl(__x);}

static float _Complex

    __tg_sinh(float _Complex __x) {return csinhf(__x);}

static double _Complex

    __tg_sinh(double _Complex __x) {return csinh(__x);}

static long double _Complex

    __tg_sinh(long double _Complex __x) {return csinhl(__x);}




// tanh

static float

    __tg_tanh(float __x) {return tanhf(__x);}

static double

    __tg_tanh(double __x) {return tanh(__x);}

static long double

    __tg_tanh(long double __x) {return tanhl(__x);}

static float _Complex

    __tg_tanh(float _Complex __x) {return ctanhf(__x);}

static double _Complex

    __tg_tanh(double _Complex __x) {return ctanh(__x);}

static long double _Complex

    __tg_tanh(long double _Complex __x) {return ctanhl(__x);}




// exp

static float

    __tg_exp(float __x) {return expf(__x);}

static double

    __tg_exp(double __x) {return exp(__x);}

static long double

    __tg_exp(long double __x) {return expl(__x);}

static float _Complex

    __tg_exp(float _Complex __x) {return cexpf(__x);}

static double _Complex

    __tg_exp(double _Complex __x) {return cexp(__x);}

static long double _Complex

    __tg_exp(long double _Complex __x) {return cexpl(__x);}




// log

static float

    __tg_log(float __x) {return logf(__x);}

static double

    __tg_log(double __x) {return log(__x);}

static long double

    __tg_log(long double __x) {return logl(__x);}

static float _Complex

    __tg_log(float _Complex __x) {return clogf(__x);}

static double _Complex

    __tg_log(double _Complex __x) {return clog(__x);}

static long double _Complex

    __tg_log(long double _Complex __x) {return clogl(__x);}




// pow

static float

    __tg_pow(float __x, float __y) {return powf(__x, __y);}

static double

    __tg_pow(double __x, double __y) {return pow(__x, __y);}

static long double

    __tg_pow(long double __x, long double __y) {return powl(__x, __y);}

static float _Complex

    __tg_pow(float _Complex __x, float _Complex __y) {return cpowf(__x, __y);}

static double _Complex

    __tg_pow(double _Complex __x, double _Complex __y) {return cpow(__x, __y);}

static long double _Complex

    __tg_pow(long double _Complex __x, long double _Complex __y)
    {return cpowl(__x, __y);}





// sqrt

static float

    __tg_sqrt(float __x) {return sqrtf(__x);}

static double

    __tg_sqrt(double __x) {return sqrt(__x);}

static long double

    __tg_sqrt(long double __x) {return sqrtl(__x);}

static float _Complex

    __tg_sqrt(float _Complex __x) {return csqrtf(__x);}

static double _Complex

    __tg_sqrt(double _Complex __x) {return csqrt(__x);}

static long double _Complex

    __tg_sqrt(long double _Complex __x) {return csqrtl(__x);}




// fabs

static float

    __tg_fabs(float __x) {return fabsf(__x);}

static double

    __tg_fabs(double __x) {return fabs(__x);}

static long double

    __tg_fabs(long double __x) {return fabsl(__x);}

static float

    __tg_fabs(float _Complex __x) {return cabsf(__x);}

static double

    __tg_fabs(double _Complex __x) {return cabs(__x);}

static long double

    __tg_fabs(long double _Complex __x) {return cabsl(__x);}




// atan2

static float

    __tg_atan2(float __x, float __y) {return atan2f(__x, __y);}

static double

    __tg_atan2(double __x, double __y) {return atan2(__x, __y);}

static long double

    __tg_atan2(long double __x, long double __y) {return atan2l(__x, __y);}





// cbrt

static float

    __tg_cbrt(float __x) {return cbrtf(__x);}

static double

    __tg_cbrt(double __x) {return cbrt(__x);}

static long double

    __tg_cbrt(long double __x) {return cbrtl(__x);}




// ceil

static float

    __tg_ceil(float __x) {return ceilf(__x);}

static double

    __tg_ceil(double __x) {return ceil(__x);}

static long double

    __tg_ceil(long double __x) {return ceill(__x);}




// copysign

static float

    __tg_copysign(float __x, float __y) {return copysignf(__x, __y);}

static double

    __tg_copysign(double __x, double __y) {return copysign(__x, __y);}

static long double

    __tg_copysign(long double __x, long double __y) {return copysignl(__x, __y);}





// erf

static float

    __tg_erf(float __x) {return erff(__x);}

static double

    __tg_erf(double __x) {return erf(__x);}

static long double

    __tg_erf(long double __x) {return erfl(__x);}




// erfc

static float

    __tg_erfc(float __x) {return erfcf(__x);}

static double

    __tg_erfc(double __x) {return erfc(__x);}

static long double

    __tg_erfc(long double __x) {return erfcl(__x);}




// exp2

static float

    __tg_exp2(float __x) {return exp2f(__x);}

static double

    __tg_exp2(double __x) {return exp2(__x);}

static long double

    __tg_exp2(long double __x) {return exp2l(__x);}




// expm1

static float

    __tg_expm1(float __x) {return expm1f(__x);}

static double

    __tg_expm1(double __x) {return expm1(__x);}

static long double

    __tg_expm1(long double __x) {return expm1l(__x);}




// fdim

static float

    __tg_fdim(float __x, float __y) {return fdimf(__x, __y);}

static double

    __tg_fdim(double __x, double __y) {return fdim(__x, __y);}

static long double

    __tg_fdim(long double __x, long double __y) {return fdiml(__x, __y);}





// floor

static float

    __tg_floor(float __x) {return floorf(__x);}

static double

    __tg_floor(double __x) {return floor(__x);}

static long double

    __tg_floor(long double __x) {return floorl(__x);}




// fma

static float

    __tg_fma(float __x, float __y, float __z)
    {return fmaf(__x, __y, __z);}

static double

    __tg_fma(double __x, double __y, double __z)
    {return fma(__x, __y, __z);}

static long double

    __tg_fma(long double __x,long double __y, long double __z)
    {return fmal(__x, __y, __z);}







// fmax

static float

    __tg_fmax(float __x, float __y) {return fmaxf(__x, __y);}

static double

    __tg_fmax(double __x, double __y) {return fmax(__x, __y);}

static long double

    __tg_fmax(long double __x, long double __y) {return fmaxl(__x, __y);}





// fmin

static float

    __tg_fmin(float __x, float __y) {return fminf(__x, __y);}

static double

    __tg_fmin(double __x, double __y) {return fmin(__x, __y);}

static long double

    __tg_fmin(long double __x, long double __y) {return fminl(__x, __y);}





// fmod

static float

    __tg_fmod(float __x, float __y) {return fmodf(__x, __y);}

static double

    __tg_fmod(double __x, double __y) {return fmod(__x, __y);}

static long double

    __tg_fmod(long double __x, long double __y) {return fmodl(__x, __y);}





// frexp

static float

    __tg_frexp(float __x, int* __y) {return frexpf(__x, __y);}

static double

    __tg_frexp(double __x, int* __y) {return frexp(__x, __y);}

static long double

    __tg_frexp(long double __x, int* __y) {return frexpl(__x, __y);}




// hypot

static float

    __tg_hypot(float __x, float __y) {return hypotf(__x, __y);}

static double

    __tg_hypot(double __x, double __y) {return hypot(__x, __y);}

static long double

    __tg_hypot(long double __x, long double __y) {return hypotl(__x, __y);}





// ilogb

static int

    __tg_ilogb(float __x) {return ilogbf(__x);}

static int

    __tg_ilogb(double __x) {return ilogb(__x);}

static int

    __tg_ilogb(long double __x) {return ilogbl(__x);}




// ldexp

static float

    __tg_ldexp(float __x, int __y) {return ldexpf(__x, __y);}

static double

    __tg_ldexp(double __x, int __y) {return ldexp(__x, __y);}

static long double

    __tg_ldexp(long double __x, int __y) {return ldexpl(__x, __y);}




// lgamma

static float

    __tg_lgamma(float __x) {return lgammaf(__x);}

static double

    __tg_lgamma(double __x) {return lgamma(__x);}

static long double

    __tg_lgamma(long double __x) {return lgammal(__x);}




// llrint

static long long

    __tg_llrint(float __x) {return llrintf(__x);}

static long long

    __tg_llrint(double __x) {return llrint(__x);}

static long long

    __tg_llrint(long double __x) {return llrintl(__x);}




// llround

static long long

    __tg_llround(float __x) {return llroundf(__x);}

static long long

    __tg_llround(double __x) {return llround(__x);}

static long long

    __tg_llround(long double __x) {return llroundl(__x);}




// log10

static float

    __tg_log10(float __x) {return log10f(__x);}

static double

    __tg_log10(double __x) {return log10(__x);}

static long double

    __tg_log10(long double __x) {return log10l(__x);}




// log1p

static float

    __tg_log1p(float __x) {return log1pf(__x);}

static double

    __tg_log1p(double __x) {return log1p(__x);}

static long double

    __tg_log1p(long double __x) {return log1pl(__x);}




// log2

static float

    __tg_log2(float __x) {return log2f(__x);}

static double

    __tg_log2(double __x) {return log2(__x);}

static long double

    __tg_log2(long double __x) {return log2l(__x);}




// logb

static float

    __tg_logb(float __x) {return logbf(__x);}

static double

    __tg_logb(double __x) {return logb(__x);}

static long double

    __tg_logb(long double __x) {return logbl(__x);}




// lrint

static long

    __tg_lrint(float __x) {return lrintf(__x);}

static long

    __tg_lrint(double __x) {return lrint(__x);}

static long

    __tg_lrint(long double __x) {return lrintl(__x);}




// lround

static long

    __tg_lround(float __x) {return lroundf(__x);}

static long

    __tg_lround(double __x) {return lround(__x);}

static long

    __tg_lround(long double __x) {return lroundl(__x);}




// nearbyint

static float

    __tg_nearbyint(float __x) {return nearbyintf(__x);}

static double

    __tg_nearbyint(double __x) {return nearbyint(__x);}

static long double

    __tg_nearbyint(long double __x) {return nearbyintl(__x);}




// nextafter

static float

    __tg_nextafter(float __x, float __y) {return nextafterf(__x, __y);}

static double

    __tg_nextafter(double __x, double __y) {return nextafter(__x, __y);}

static long double

    __tg_nextafter(long double __x, long double __y) {return nextafterl(__x, __y);}





// nexttoward

static float

    __tg_nexttoward(float __x, long double __y) {return nexttowardf(__x, __y);}

static double

    __tg_nexttoward(double __x, long double __y) {return nexttoward(__x, __y);}

static long double

    __tg_nexttoward(long double __x, long double __y) {return nexttowardl(__x, __y);}




// remainder

static float

    __tg_remainder(float __x, float __y) {return remainderf(__x, __y);}

static double

    __tg_remainder(double __x, double __y) {return remainder(__x, __y);}

static long double

    __tg_remainder(long double __x, long double __y) {return remainderl(__x, __y);}





// remquo

static float

    __tg_remquo(float __x, float __y, int* __z)
    {return remquof(__x, __y, __z);}

static double

    __tg_remquo(double __x, double __y, int* __z)
    {return remquo(__x, __y, __z);}

static long double

    __tg_remquo(long double __x,long double __y, int* __z)
    {return remquol(__x, __y, __z);}







// rint

static float

    __tg_rint(float __x) {return rintf(__x);}

static double

    __tg_rint(double __x) {return rint(__x);}

static long double

    __tg_rint(long double __x) {return rintl(__x);}




// round

static float

    __tg_round(float __x) {return roundf(__x);}

static double

    __tg_round(double __x) {return round(__x);}

static long double

    __tg_round(long double __x) {return roundl(__x);}




// scalbn

static float

    __tg_scalbn(float __x, int __y) {return scalbnf(__x, __y);}

static double

    __tg_scalbn(double __x, int __y) {return scalbn(__x, __y);}

static long double

    __tg_scalbn(long double __x, int __y) {return scalbnl(__x, __y);}




// scalbln

static float

    __tg_scalbln(float __x, long __y) {return scalblnf(__x, __y);}

static double

    __tg_scalbln(double __x, long __y) {return scalbln(__x, __y);}

static long double

    __tg_scalbln(long double __x, long __y) {return scalblnl(__x, __y);}




// tgamma

static float

    __tg_tgamma(float __x) {return tgammaf(__x);}

static double

    __tg_tgamma(double __x) {return tgamma(__x);}

static long double

    __tg_tgamma(long double __x) {return tgammal(__x);}




// trunc

static float

    __tg_trunc(float __x) {return truncf(__x);}

static double

    __tg_trunc(double __x) {return trunc(__x);}

static long double

    __tg_trunc(long double __x) {return truncl(__x);}




// carg

static float

    __tg_carg(float __x) {return atan2f(0.F, __x);}

static double

    __tg_carg(double __x) {return __tg_atan2((__typeof__(__tg_promote((0.)) + __tg_promote((__x))))(0.), (__typeof__(__tg_promote((0.)) + __tg_promote((__x))))(__x));}

static long double

    __tg_carg(long double __x) {return atan2l(0.L, __x);}

static float

    __tg_carg(float _Complex __x) {return cargf(__x);}

static double

    __tg_carg(double _Complex __x) {return carg(__x);}

static long double

    __tg_carg(long double _Complex __x) {return cargl(__x);}




// cimag

static float

    __tg_cimag(float __x) {return 0;}

static double

    __tg_cimag(double __x) {return 0;}

static long double

    __tg_cimag(long double __x) {return 0;}

static float

    __tg_cimag(float _Complex __x) {return cimagf(__x);}

static double

    __tg_cimag(double _Complex __x) {return cimag(__x);}

static long double

    __tg_cimag(long double _Complex __x) {return cimagl(__x);}




// conj

static float _Complex

    __tg_conj(float __x) {return __x;}

static double _Complex

    __tg_conj(double __x) {return __x;}

static long double _Complex

    __tg_conj(long double __x) {return __x;}

static float _Complex

    __tg_conj(float _Complex __x) {return conjf(__x);}

static double _Complex

    __tg_conj(double _Complex __x) {return conj(__x);}

static long double _Complex

    __tg_conj(long double _Complex __x) {return conjl(__x);}




// cproj

static float _Complex

    __tg_cproj(float __x) {return cprojf(__x);}

static double _Complex

    __tg_cproj(double __x) {return cproj(__x);}

static long double _Complex

    __tg_cproj(long double __x) {return cprojl(__x);}

static float _Complex

    __tg_cproj(float _Complex __x) {return cprojf(__x);}

static double _Complex

    __tg_cproj(double _Complex __x) {return cproj(__x);}

static long double _Complex

    __tg_cproj(long double _Complex __x) {return cprojl(__x);}




// creal

static float

    __tg_creal(float __x) {return __x;}

static double

    __tg_creal(double __x) {return __x;}

static long double

    __tg_creal(long double __x) {return __x;}

static float

    __tg_creal(float _Complex __x) {return crealf(__x);}

static double

    __tg_creal(double _Complex __x) {return creal(__x);}

static long double

    __tg_creal(long double _Complex __x) {return creall(__x);}
# 106 "all.c" 2
# 1 "/usr/include/thread_db.h" 1 3 4
/* thread_db.h -- interface to libthread_db.so library for debugging -lpthread
   Copyright (C) 1999-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* This is the debugger interface for the NPTL library.  It is
   modelled closely after the interface with same names in Solaris
   with the goal to share the same code in the debugger.  */
# 1 "/usr/include/pthread.h" 1 3 4
/* Copyright (C) 2002-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
/* Declaration of common pthread types for all architectures.
   Copyright (C) 2017-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* For internal mutex and condition variable definitions.  */
# 1 "/usr/include/bits/thread-shared-types.h" 1 3 4
/* Common threading primitives definitions for both POSIX and C11.
   Copyright (C) 2017-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* Arch-specific definitions.  Each architecture must define the following
   macros to define the expected sizes of pthread data types:

   __SIZEOF_PTHREAD_ATTR_T        - size of pthread_attr_t.
   __SIZEOF_PTHREAD_MUTEX_T       - size of pthread_mutex_t.
   __SIZEOF_PTHREAD_MUTEXATTR_T   - size of pthread_mutexattr_t.
   __SIZEOF_PTHREAD_COND_T        - size of pthread_cond_t.
   __SIZEOF_PTHREAD_CONDATTR_T    - size of pthread_condattr_t.
   __SIZEOF_PTHREAD_RWLOCK_T      - size of pthread_rwlock_t.
   __SIZEOF_PTHREAD_RWLOCKATTR_T  - size of pthread_rwlockattr_t.
   __SIZEOF_PTHREAD_BARRIER_T     - size of pthread_barrier_t.
   __SIZEOF_PTHREAD_BARRIERATTR_T - size of pthread_barrierattr_t.

   The additional macro defines any constraint for the lock alignment
   inside the thread structures:

   __LOCK_ALIGNMENT - for internal lock/futex usage.

   Same idea but for the once locking primitive:

   __ONCE_ALIGNMENT - for pthread_once_t/once_flag definition.  */

# 1 "/usr/include/bits/pthreadtypes-arch.h" 1 3 4
/* Copyright (C) 2002-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 14 "/usr/include/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 22 "/usr/include/bits/pthreadtypes-arch.h" 2 3 4
# 45 "/usr/include/bits/thread-shared-types.h" 2 3 4

# 1 "/usr/include/bits/atomic_wide_counter.h" 1 3 4
/* Monotonically increasing wide counters (at least 62 bits).
   Copyright (C) 2016-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* Counter that is monotonically increasing (by less than 2**31 per
   increment), with a single writer, and an arbitrary number of
   readers.  */
typedef union
{
  __extension__ unsigned long long int __value64;
  struct
  {
    unsigned int __low;
    unsigned int __high;
  } __value32;
} __atomic_wide_counter;
# 47 "/usr/include/bits/thread-shared-types.h" 2 3 4


/* Common definition of pthread_mutex_t. */

typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;

/* Arch-specific mutex definitions.  A generic implementation is provided
   by sysdeps/nptl/bits/struct_mutex.h.  If required, an architecture
   can override it by defining:

   1. struct __pthread_mutex_s (used on both pthread_mutex_t and mtx_t
      definition).  It should contains at least the internal members
      defined in the generic version.

   2. __LOCK_ALIGNMENT for any extra attribute for internal lock used with
      atomic operations.

   3. The macro __PTHREAD_MUTEX_INITIALIZER used for static initialization.
      It should initialize the mutex internal flag.  */

# 1 "/usr/include/bits/struct_mutex.h" 1 3 4
/* x86 internal mutex struct definitions.
   Copyright (C) 2019-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */




struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;

  /* KIND must stay at this position in the structure to maintain
     binary compatibility with static initializers.  */
  int __kind;

  short __spins;
  short __elision;
  __pthread_list_t __list;
# 53 "/usr/include/bits/struct_mutex.h" 3 4
};
# 77 "/usr/include/bits/thread-shared-types.h" 2 3 4

/* Arch-sepecific read-write lock definitions.  A generic implementation is
   provided by struct_rwlock.h.  If required, an architecture can override it
   by defining:

   1. struct __pthread_rwlock_arch_t (used on pthread_rwlock_t definition).
      It should contain at least the internal members defined in the
      generic version.

   2. The macro __PTHREAD_RWLOCK_INITIALIZER used for static initialization.
      It should initialize the rwlock internal type.  */

# 1 "/usr/include/bits/struct_rwlock.h" 1 3 4
/* x86 internal rwlock struct definitions.
   Copyright (C) 2019-2025 Free Software Foundation, Inc.

   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */




struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;
  /* FLAGS must stay at this position in the structure to maintain
     binary compatibility.  */
  unsigned int __flags;
# 55 "/usr/include/bits/struct_rwlock.h" 3 4
};
# 90 "/usr/include/bits/thread-shared-types.h" 2 3 4


/* Common definition of pthread_cond_t. */

struct __pthread_cond_s
{
  __atomic_wide_counter __wseq;
  __atomic_wide_counter __g1_start;
  unsigned int __g_size[2] ;
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
  unsigned int __unused_initialized_1;
  unsigned int __unused_initialized_2;
};

typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;

typedef struct
{
  int __data ;
} __once_flag;
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4

/* Thread identifiers.  The structure of the attribute type is not
   exposed on purpose.  */
typedef unsigned long int pthread_t;


/* Data structures for mutex handling.  The structure of the attribute
   type is not exposed on purpose.  */
typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;


/* Data structure for condition variable handling.  The structure of
   the attribute type is not exposed on purpose.  */
typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;


/* Keys for thread-specific data */
typedef unsigned int pthread_key_t;


/* Once-only execution */
typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};






typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;
# 27 "/usr/include/pthread.h" 2 3 4

# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 14 "/usr/include/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 29 "/usr/include/pthread.h" 2 3 4







/* Detach state.  */
enum
{
  PTHREAD_CREATE_JOINABLE,

  PTHREAD_CREATE_DETACHED

};


/* Mutex types.  */
enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP
# 64 "/usr/include/pthread.h" 3 4
};
# 102 "/usr/include/pthread.h" 3 4
/* Read-write lock types.  */
# 123 "/usr/include/pthread.h" 3 4
/* Scheduler inheritance.  */
enum
{
  PTHREAD_INHERIT_SCHED,

  PTHREAD_EXPLICIT_SCHED

};


/* Scope handling.  */
enum
{
  PTHREAD_SCOPE_SYSTEM,

  PTHREAD_SCOPE_PROCESS

};


/* Process shared or private flag.  */
enum
{
  PTHREAD_PROCESS_PRIVATE,

  PTHREAD_PROCESS_SHARED

};



/* Conditional variable handling.  */



/* Cleanup buffers */
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *); /* Function to call.  */
  void *__arg; /* Its argument.  */
  int __canceltype; /* Saved cancellation type. */
  struct _pthread_cleanup_buffer *__prev; /* Chaining of cleanup functions.  */
};

/* Cancellation */
enum
{
  PTHREAD_CANCEL_ENABLE,

  PTHREAD_CANCEL_DISABLE

};
enum
{
  PTHREAD_CANCEL_DEFERRED,

  PTHREAD_CANCEL_ASYNCHRONOUS

};



/* Single execution handling.  */
# 199 "/usr/include/pthread.h" 3 4
/* Create a new thread, starting with execution of START-ROUTINE
   getting passed ARG.  Creation attributed come from ATTR.  The new
   handle is stored in *NEWTHREAD.  */
extern int pthread_create (pthread_t *__restrict __newthread,
      const pthread_attr_t *__restrict __attr,
      void *(*__start_routine) (void *),
      void *__restrict __arg) ;

/* Terminate calling thread.

   The registered cleanup handlers are called via exception handling
   so we cannot mark this function with __THROW.*/
extern void pthread_exit (void *__retval) ;

/* Make calling thread wait for termination of the thread TH.  The
   exit status of the thread is stored in *THREAD_RETURN, if THREAD_RETURN
   is not NULL.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int pthread_join (pthread_t __th, void **__thread_return);
# 265 "/usr/include/pthread.h" 3 4
/* Indicate that the thread TH is never to be joined with PTHREAD_JOIN.
   The resources of TH will therefore be freed immediately when it
   terminates, instead of waiting for another thread to perform PTHREAD_JOIN
   on it.  */
extern int pthread_detach (pthread_t __th) ;


/* Obtain the identifier of the current thread.  */
extern pthread_t pthread_self (void) ;

/* Compare two thread identifiers.  */
extern int pthread_equal (pthread_t __thread1, pthread_t __thread2)
                                     ;


/* Thread attribute handling.  */

/* Initialize thread attribute *ATTR with default attributes
   (detachstate is PTHREAD_JOINABLE, scheduling policy is SCHED_OTHER,
    no user-provided stack).  */
extern int pthread_attr_init (pthread_attr_t *__attr) ;

/* Destroy thread attribute *ATTR.  */
extern int pthread_attr_destroy (pthread_attr_t *__attr)
                            ;

/* Get detach state attribute.  */
extern int pthread_attr_getdetachstate (const pthread_attr_t *__attr,
     int *__detachstate)
                               ;

/* Set detach state attribute.  */
extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
     int __detachstate)
                            ;


/* Get the size of the guard area created for stack overflow protection.  */
extern int pthread_attr_getguardsize (const pthread_attr_t *__attr,
          size_t *__guardsize)
                               ;

/* Set the size of the guard area created for stack overflow protection.  */
extern int pthread_attr_setguardsize (pthread_attr_t *__attr,
          size_t __guardsize)
                            ;


/* Return in *PARAM the scheduling parameters of *ATTR.  */
extern int pthread_attr_getschedparam (const pthread_attr_t *__restrict __attr,
           struct sched_param *__restrict __param)
                               ;

/* Set scheduling parameters (priority, etc) in *ATTR according to PARAM.  */
extern int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,
           const struct sched_param *__restrict
           __param) ;

/* Return in *POLICY the scheduling policy of *ATTR.  */
extern int pthread_attr_getschedpolicy (const pthread_attr_t *__restrict
     __attr, int *__restrict __policy)
                               ;

/* Set scheduling policy in *ATTR according to POLICY.  */
extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
                            ;

/* Return in *INHERIT the scheduling inheritance mode of *ATTR.  */
extern int pthread_attr_getinheritsched (const pthread_attr_t *__restrict
      __attr, int *__restrict __inherit)
                               ;

/* Set scheduling inheritance mode in *ATTR according to INHERIT.  */
extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
      int __inherit)
                            ;


/* Return in *SCOPE the scheduling contention scope of *ATTR.  */
extern int pthread_attr_getscope (const pthread_attr_t *__restrict __attr,
      int *__restrict __scope)
                               ;

/* Set scheduling contention scope in *ATTR according to SCOPE.  */
extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
                            ;

/* Return the previously set address for the stack.  */
extern int pthread_attr_getstackaddr (const pthread_attr_t *__restrict
          __attr, void **__restrict __stackaddr)
                                                        ;

/* Set the starting address of the stack of the thread to be created.
   Depending on whether the stack grows up or down the value must either
   be higher or lower than all the address in the memory block.  The
   minimal size of the block must be PTHREAD_STACK_MIN.  */
extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
          void *__stackaddr)
                                                     ;

/* Return the currently used minimal stack size.  */
extern int pthread_attr_getstacksize (const pthread_attr_t *__restrict
          __attr, size_t *__restrict __stacksize)
                               ;

/* Add information about the minimum stack size needed for the thread
   to be started.  This size must never be less than PTHREAD_STACK_MIN
   and must also not exceed the system limits.  */
extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
          size_t __stacksize)
                            ;
# 437 "/usr/include/pthread.h" 3 4
/* Functions for scheduling control.  */

/* Set the scheduling parameters for TARGET_THREAD according to POLICY
   and *PARAM.  */
extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
      const struct sched_param *__param)
                            ;

/* Return in *POLICY and *PARAM the scheduling parameters for TARGET_THREAD. */
extern int pthread_getschedparam (pthread_t __target_thread,
      int *__restrict __policy,
      struct sched_param *__restrict __param)
                               ;

/* Set the scheduling priority for TARGET_THREAD.  */
extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
            ;
# 500 "/usr/include/pthread.h" 3 4
/* Functions for handling initialization.  */

/* Guarantee that the initialization function INIT_ROUTINE will be called
   only once, even if pthread_once is executed several times with the
   same ONCE_CONTROL argument. ONCE_CONTROL must point to a static or
   extern variable initialized to PTHREAD_ONCE_INIT.

   The initialization functions might throw exception which is why
   this function is not marked with __THROW.  */
extern int pthread_once (pthread_once_t *__once_control,
    void (*__init_routine) (void)) ;


/* Functions for handling cancellation.

   Note that these functions are explicitly not marked to not throw an
   exception in C++ code.  If cancellation is implemented by unwinding
   this is necessary to have the compiler generate the unwind information.  */

/* Set cancellability state of current thread to STATE, returning old
   state in *OLDSTATE if OLDSTATE is not NULL.  */
extern int pthread_setcancelstate (int __state, int *__oldstate);

/* Set cancellation state of current thread to TYPE, returning the old
   type in *OLDTYPE if OLDTYPE is not NULL.  */
extern int pthread_setcanceltype (int __type, int *__oldtype);

/* Cancel THREAD immediately or at the next possibility.  */
extern int pthread_cancel (pthread_t __th);

/* Test for pending cancellation for the current thread and terminate
   the thread as per pthread_exit(PTHREAD_CANCELED) if it has been
   cancelled.  */
extern void pthread_testcancel (void);


/* Cancellation handling with integration into exception handling.  */

struct __cancel_jmp_buf_tag
{
  __jmp_buf __cancel_jmp_buf;
  int __mask_was_saved;
};

typedef struct
{
  struct __cancel_jmp_buf_tag __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t ;

/* No special attributes by default.  */





/* Structure to hold the cleanup handler information.  */
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};
# 674 "/usr/include/pthread.h" 3 4
/* Install a cleanup handler: ROUTINE will be called with arguments ARG
   when the thread is canceled or calls pthread_exit.  ROUTINE will also
   be called with arguments ARG when the matching pthread_cleanup_pop
   is executed with non-zero EXECUTE argument.

   pthread_cleanup_push and pthread_cleanup_pop are macros and must always
   be used in matching pairs at the same nesting level of braces.  */
# 697 "/usr/include/pthread.h" 3 4
extern void __pthread_register_cancel (__pthread_unwind_buf_t *__buf)
                            ;

/* Remove a cleanup handler installed by the matching pthread_cleanup_push.
   If EXECUTE is non-zero, the handler function is called. */







extern void __pthread_unregister_cancel (__pthread_unwind_buf_t *__buf)
                         ;
# 749 "/usr/include/pthread.h" 3 4
/* Internal interface to initiate cleanup.  */
extern void __pthread_unwind_next (__pthread_unwind_buf_t *__buf)




     ;


/* Function used in the macros.  Calling __sigsetjmp, with its first
   argument declared as an array, results in a -Wstringop-overflow
   warning from GCC 11 because struct pthread_unwind_buf is smaller
   than jmp_buf.  The calls from the macros have __SAVEMASK set to 0,
   so nothing beyond the common prefix is used and this warning is a
   false positive.  Use an alias with its first argument declared to
   use the type in the macros if possible to avoid this warning.  */
# 773 "/usr/include/pthread.h" 3 4
extern int __sigsetjmp (struct __jmp_buf_tag __env[1],
   int __savemask) ;



/* Mutex handling.  */

/* Initialize a mutex.  */
extern int pthread_mutex_init (pthread_mutex_t *__mutex,
          const pthread_mutexattr_t *__mutexattr)
                            ;

/* Destroy a mutex.  */
extern int pthread_mutex_destroy (pthread_mutex_t *__mutex)
                            ;

/* Try locking a mutex.  */
extern int pthread_mutex_trylock (pthread_mutex_t *__mutex)
                              ;

/* Lock a mutex.  */
extern int pthread_mutex_lock (pthread_mutex_t *__mutex)
                              ;
# 834 "/usr/include/pthread.h" 3 4
/* Unlock a mutex.  */
extern int pthread_mutex_unlock (pthread_mutex_t *__mutex)
                              ;


/* Get the priority ceiling of MUTEX.  */
extern int pthread_mutex_getprioceiling (const pthread_mutex_t *
      __restrict __mutex,
      int *__restrict __prioceiling)
                               ;

/* Set the priority ceiling of MUTEX to PRIOCEILING, return old
   priority ceiling value in *OLD_CEILING.  */
extern int pthread_mutex_setprioceiling (pthread_mutex_t *__restrict __mutex,
      int __prioceiling,
      int *__restrict __old_ceiling)
                               ;
# 870 "/usr/include/pthread.h" 3 4
/* Functions for handling mutex attributes.  */

/* Initialize mutex attribute object ATTR with default attributes
   (kind is PTHREAD_MUTEX_TIMED_NP).  */
extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr)
                            ;

/* Destroy mutex attribute object ATTR.  */
extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
                            ;

/* Get the process-shared flag of the mutex attribute ATTR.  */
extern int pthread_mutexattr_getpshared (const pthread_mutexattr_t *
      __restrict __attr,
      int *__restrict __pshared)
                               ;

/* Set the process-shared flag of the mutex attribute ATTR.  */
extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
      int __pshared)
                            ;
# 905 "/usr/include/pthread.h" 3 4
/* Return in *PROTOCOL the mutex protocol attribute in *ATTR.  */
extern int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *
       __restrict __attr,
       int *__restrict __protocol)
                               ;

/* Set the mutex protocol attribute in *ATTR to PROTOCOL (either
   PTHREAD_PRIO_NONE, PTHREAD_PRIO_INHERIT, or PTHREAD_PRIO_PROTECT).  */
extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
       int __protocol)
                            ;

/* Return in *PRIOCEILING the mutex prioceiling attribute in *ATTR.  */
extern int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *
          __restrict __attr,
          int *__restrict __prioceiling)
                               ;

/* Set the mutex prioceiling attribute in *ATTR to PRIOCEILING.  */
extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,
          int __prioceiling)
                            ;
# 1108 "/usr/include/pthread.h" 3 4
/* Functions for handling conditional variables.  */

/* Initialize condition variable COND using attributes ATTR, or use
   the default values if later is NULL.  */
extern int pthread_cond_init (pthread_cond_t *__restrict __cond,
         const pthread_condattr_t *__restrict __cond_attr)
                            ;

/* Destroy condition variable COND.  */
extern int pthread_cond_destroy (pthread_cond_t *__cond)
                            ;

/* Wake up one thread waiting for condition variable COND.  */
extern int pthread_cond_signal (pthread_cond_t *__cond)
                              ;

/* Wake up all threads waiting for condition variables COND.  */
extern int pthread_cond_broadcast (pthread_cond_t *__cond)
                              ;

/* Wait for condition variable COND to be signaled or broadcast.
   MUTEX is assumed to be locked before.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int pthread_cond_wait (pthread_cond_t *__restrict __cond,
         pthread_mutex_t *__restrict __mutex)
                       ;

/* Wait for condition variable COND to be signaled or broadcast until
   ABSTIME.  MUTEX is assumed to be locked before.  ABSTIME is an
   absolute time specification; zero is the beginning of the epoch
   (00:00:00 GMT, January 1, 1970).

   This function is a cancellation point and therefore not marked with
   __THROW.  */

extern int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       const struct timespec *__restrict __abstime)
                          ;
# 1191 "/usr/include/pthread.h" 3 4
/* Functions for handling condition variable attributes.  */

/* Initialize condition variable attribute ATTR.  */
extern int pthread_condattr_init (pthread_condattr_t *__attr)
                            ;

/* Destroy condition variable attribute ATTR.  */
extern int pthread_condattr_destroy (pthread_condattr_t *__attr)
                            ;

/* Get the process-shared flag of the condition variable attribute ATTR.  */
extern int pthread_condattr_getpshared (const pthread_condattr_t *
     __restrict __attr,
     int *__restrict __pshared)
                               ;

/* Set the process-shared flag of the condition variable attribute ATTR.  */
extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
     int __pshared) ;
# 1289 "/usr/include/pthread.h" 3 4
/* Functions for handling thread-specific data.  */

/* Create a key value identifying a location in the thread-specific
   data area.  Each thread maintains a distinct thread-specific data
   area.  DESTR_FUNCTION, if non-NULL, is called with the value
   associated to that key when the key is destroyed.
   DESTR_FUNCTION is not called if the value associated is NULL when
   the key is destroyed.  */
extern int pthread_key_create (pthread_key_t *__key,
          void (*__destr_function) (void *))
                            ;

/* Destroy KEY.  */
extern int pthread_key_delete (pthread_key_t __key) ;

/* Return current value of the thread-specific data slot identified by KEY.  */
extern void *pthread_getspecific (pthread_key_t __key) ;

/* Store POINTER in the thread-specific data slot identified by KEY. */
extern int pthread_setspecific (pthread_key_t __key,
    const void *__pointer)
                                ;
# 1326 "/usr/include/pthread.h" 3 4
/* Install handlers to be called when a new process is created with FORK.
   The PREPARE handler is called in the parent process just before performing
   FORK. The PARENT handler is called in the parent process just after FORK.
   The CHILD handler is called in the child process.  Each of the three
   handlers can be NULL, meaning that no handler needs to be called at that
   point.
   PTHREAD_ATFORK can be called several times, in which case the PREPARE
   handlers are called in LIFO order (last added with PTHREAD_ATFORK,
   first called before FORK), and the PARENT and CHILD handlers are called
   in FIFO (first added, first called).  */

extern int pthread_atfork (void (*__prepare) (void),
      void (*__parent) (void),
      void (*__child) (void)) ;
# 26 "/usr/include/thread_db.h" 2 3 4


# 1 "/usr/include/sys/procfs.h" 1 3 4
/* Definitions for core files and libthread_db.  Generic Linux version.
   Copyright (C) 1996-2025 Free Software Foundation, Inc.

   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* This is somewhat modelled after the file of the same name on SVR4
   systems.  It provides a definition of the core file format for ELF
   used on Linux.  It doesn't have anything to do with the /proc file
   system, even though Linux has one.

   Anyway, the whole purpose of this file is for GDB and GDB only.
   Don't read too much into it.  Don't use it for anything other than
   GDB unless you know what you are doing.  */


# 1 "/usr/include/sys/time.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 25 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/bits/types/struct_timeval.h" 1 3 4





/* A time value that is accurate to the nearest
   microsecond but also has a range of years.  */
struct timeval
{




  __time_t tv_sec; /* Seconds.  */
  __suseconds_t tv_usec; /* Microseconds.  */

};
# 26 "/usr/include/sys/time.h" 2 3 4


typedef __suseconds_t suseconds_t;



# 1 "/usr/include/sys/select.h" 1 3 4
/* `fd_set' type and related macros, and `select'/`pselect' declarations.
   Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*	POSIX 1003.1g: 6.2 Select from File Descriptor Sets <sys/select.h>  */






/* Get definition of needed basic types.  */


/* Get __FD_* definitions.  */
# 1 "/usr/include/bits/select.h" 1 3 4
/* Copyright (C) 1997-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






/* We don't use `memset' because this would require a prototype and
   the array isn't too big.  */
# 31 "/usr/include/sys/select.h" 2 3 4

/* Get sigset_t.  */


/* Get definition of timer specification structures.  */
# 48 "/usr/include/sys/select.h" 3 4
/* The fd_set member is required to be an array of longs.  */
typedef long int __fd_mask;

/* Some versions of <linux/posix_types.h> define this macros.  */

/* It's easier to assume 8-bit bytes than to get CHAR_BIT.  */




/* fd_set for select and pselect.  */
typedef struct
  {
    /* XPG4.2 requires this member name.  Otherwise avoid the name
       from the global namespace.  */




    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;

/* Maximum number of file descriptors in `fd_set'.  */
# 84 "/usr/include/sys/select.h" 3 4
/* Access macros for `fd_set'.  */
# 93 "/usr/include/sys/select.h" 3 4
/* Check the first NFDS descriptors each in READFDS (if not NULL) for read
   readiness, in WRITEFDS (if not NULL) for write readiness, and in EXCEPTFDS
   (if not NULL) for exceptional conditions.  If TIMEOUT is not NULL, time out
   after waiting the interval specified therein.  Returns the number of ready
   descriptors, or -1 for errors.

   This function is a cancellation point and therefore not marked with
   __THROW.  */

extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 148 "/usr/include/sys/select.h" 3 4
/* Define some inlines helping to catch common problems.  */
# 33 "/usr/include/sys/time.h" 2 3 4
# 59 "/usr/include/sys/time.h" 3 4
/* Get the current time of day, putting it into *TV.
   If TZ is not null, *TZ must be a struct timezone, and both fields
   will be set to zero.
   Calling this function with a non-null TZ is obsolete;
   use localtime etc. instead.
   This function itself is semi-obsolete;
   most callers should use time or clock_gettime instead. */

extern int gettimeofday (struct timeval *__restrict __tv,
    void *__restrict __tz) ;
# 113 "/usr/include/sys/time.h" 3 4
/* Values for the first argument to `getitimer' and `setitimer'.  */
enum __itimer_which
  {
    /* Timers run in real time.  */
    ITIMER_REAL = 0,

    /* Timers run only when the process is executing.  */
    ITIMER_VIRTUAL = 1,

    /* Timers run when the process is executing and when
       the system is executing on behalf of the process.  */
    ITIMER_PROF = 2

  };

/* Type of the second argument to `getitimer' and
   the second and third arguments `setitimer'.  */
struct itimerval
  {
    /* Value to put into `it_value' when the timer expires.  */
    struct timeval it_interval;
    /* Time to the next timer expiration.  */
    struct timeval it_value;
  };






typedef int __itimer_which_t;



/* Set *VALUE to the current setting of timer WHICH.
   Return 0 on success, -1 on errors.  */
extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) ;

/* Set the timer WHICH to *NEW.  If OLD is not NULL,
   set *OLD to the old value of timer WHICH.
   Returns 0 on success, -1 on errors.  */
extern int setitimer (__itimer_which_t __which,
        const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) ;

/* Change the access time of FILE to TVP[0] and the modification time of
   FILE to TVP[1].  If TVP is a null pointer, use the current time instead.
   Returns 0 on success, -1 on errors.  */
extern int utimes (const char *__file, const struct timeval __tvp[2])
                            ;
# 34 "/usr/include/sys/procfs.h" 2 3 4

# 1 "/usr/include/sys/user.h" 1 3 4
/* Copyright (C) 2001-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */




/* The whole purpose of this file is for GDB and GDB only.  Don't read
   too much into it.  Don't use it for anything other than GDB unless
   you know what you are doing.  */



struct user_fpregs_struct
{
  unsigned short int cwd;
  unsigned short int swd;
  unsigned short int ftw;
  unsigned short int fop;
  __extension__ unsigned long long int rip;
  __extension__ unsigned long long int rdp;
  unsigned int mxcsr;
  unsigned int mxcr_mask;
  unsigned int st_space[32]; /* 8*16 bytes for each FP-reg = 128 bytes */
  unsigned int xmm_space[64]; /* 16*16 bytes for each XMM-reg = 256 bytes */
  unsigned int padding[24];
};

struct user_regs_struct
{
  __extension__ unsigned long long int r15;
  __extension__ unsigned long long int r14;
  __extension__ unsigned long long int r13;
  __extension__ unsigned long long int r12;
  __extension__ unsigned long long int rbp;
  __extension__ unsigned long long int rbx;
  __extension__ unsigned long long int r11;
  __extension__ unsigned long long int r10;
  __extension__ unsigned long long int r9;
  __extension__ unsigned long long int r8;
  __extension__ unsigned long long int rax;
  __extension__ unsigned long long int rcx;
  __extension__ unsigned long long int rdx;
  __extension__ unsigned long long int rsi;
  __extension__ unsigned long long int rdi;
  __extension__ unsigned long long int orig_rax;
  __extension__ unsigned long long int rip;
  __extension__ unsigned long long int cs;
  __extension__ unsigned long long int eflags;
  __extension__ unsigned long long int rsp;
  __extension__ unsigned long long int ss;
  __extension__ unsigned long long int fs_base;
  __extension__ unsigned long long int gs_base;
  __extension__ unsigned long long int ds;
  __extension__ unsigned long long int es;
  __extension__ unsigned long long int fs;
  __extension__ unsigned long long int gs;
};

struct user
{
  struct user_regs_struct regs;
  int u_fpvalid;
  struct user_fpregs_struct i387;
  __extension__ unsigned long long int u_tsize;
  __extension__ unsigned long long int u_dsize;
  __extension__ unsigned long long int u_ssize;
  __extension__ unsigned long long int start_code;
  __extension__ unsigned long long int start_stack;
  __extension__ long long int signal;
  int reserved;
  __extension__ union
    {
      struct user_regs_struct* u_ar0;
      __extension__ unsigned long long int __u_ar0_word;
    };
  __extension__ union
    {
      struct user_fpregs_struct* u_fpstate;
      __extension__ unsigned long long int __u_fpstate_word;
    };
  __extension__ unsigned long long int magic;
  char u_comm [32];
  __extension__ unsigned long long int u_debugreg [8];
};
# 36 "/usr/include/sys/procfs.h" 2 3 4

/* bits/procfs.h, provided by each architecture, must define
   elf_gregset_t, elf_fpregset_t and any other architecture-specific
   types needed.  */
# 1 "/usr/include/bits/procfs.h" 1 3 4
/* Types for registers for sys/procfs.h.  x86 version.
   Copyright (C) 2001-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





/* Type for a general-purpose register.  */

__extension__ typedef unsigned long long elf_greg_t;




/* And the whole bunch of them.  We could have used `struct
   user_regs_struct' directly in the typedef, but tradition says that
   the register set is an array, which does have some peculiar
   semantics, so leave it that way.  */

typedef elf_greg_t elf_gregset_t[(sizeof (struct user_regs_struct) / sizeof (elf_greg_t))];
# 46 "/usr/include/bits/procfs.h" 3 4
/* Register set for the extended floating-point registers.  Includes
   the Pentium III SSE registers in addition to the classic
   floating-point stuff.  */
typedef struct user_fpregs_struct elf_fpregset_t;
# 41 "/usr/include/sys/procfs.h" 2 3 4

/* bits/procfs-id.h must define __pr_uid_t and __pr_gid_t, the types
   of pr_uid and pr_gid.  */
# 1 "/usr/include/bits/procfs-id.h" 1 3 4
/* Types of pr_uid and pr_gid in struct elf_prpsinfo.  x86 version.
   Copyright (C) 2018-2025 Free Software Foundation, Inc.

   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 28 "/usr/include/bits/procfs-id.h" 3 4
typedef unsigned int __pr_uid_t;
typedef unsigned int __pr_gid_t;
# 45 "/usr/include/sys/procfs.h" 2 3 4



/* Signal info.  */
struct elf_siginfo
  {
    int si_signo; /* Signal number.  */
    int si_code; /* Extra code.  */
    int si_errno; /* Errno.  */
  };

/* Definitions to generate Intel SVR4-like core files.  These mostly
   have the same names as the SVR4 types with "elf_" tacked on the
   front to prevent clashes with Linux definitions, and the typedef
   forms have been avoided.  This is mostly like the SVR4 structure,
   but more Linuxy, with things that Linux does not support and which
   GDB doesn't really use excluded.  */

struct elf_prstatus
  {
    struct elf_siginfo pr_info; /* Info associated with signal.  */
    short int pr_cursig; /* Current signal.  */
    unsigned long int pr_sigpend; /* Set of pending signals.  */
    unsigned long int pr_sighold; /* Set of held signals.  */
    __pid_t pr_pid;
    __pid_t pr_ppid;
    __pid_t pr_pgrp;
    __pid_t pr_sid;
    struct timeval pr_utime; /* User time.  */
    struct timeval pr_stime; /* System time.  */
    struct timeval pr_cutime; /* Cumulative user time.  */
    struct timeval pr_cstime; /* Cumulative system time.  */
    elf_gregset_t pr_reg; /* GP registers.  */
    int pr_fpvalid; /* True if math copro being used.  */
  };




struct elf_prpsinfo
  {
    char pr_state; /* Numeric process state.  */
    char pr_sname; /* Char for pr_state.  */
    char pr_zomb; /* Zombie.  */
    char pr_nice; /* Nice val.  */
    unsigned long int pr_flag; /* Flags.  */
    __pr_uid_t pr_uid;
    __pr_gid_t pr_gid;
    int pr_pid, pr_ppid, pr_pgrp, pr_sid;
    /* Lots missing */
    char pr_fname[16]; /* Filename of executable.  */
    char pr_psargs[(80)]; /* Initial part of arg list.  */
  };

/* The rest of this file provides the types for emulation of the
   Solaris <proc_service.h> interfaces that should be implemented by
   users of libthread_db.  */

/* Addresses.  */
typedef void *psaddr_t;

# 1 "/usr/include/bits/procfs-prregset.h" 1 3 4
/* Types of prgregset_t and prfpregset_t.  Generic Linux version.
   Copyright (C) 2018-2025 Free Software Foundation, Inc.

   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





typedef elf_gregset_t __prgregset_t;
typedef elf_fpregset_t __prfpregset_t;
# 107 "/usr/include/sys/procfs.h" 2 3 4

/* Register sets.  Linux has different names.  */
typedef __prgregset_t prgregset_t;
typedef __prfpregset_t prfpregset_t;

/* We don't have any differences between processes and threads,
   therefore have only one PID type.  */
typedef __pid_t lwpid_t;

/* Process status and info.  In the end we do provide typedefs for them.  */
typedef struct elf_prstatus prstatus_t;
typedef struct elf_prpsinfo prpsinfo_t;



/* On some architectures, provide other-ABI variants of the above
   types.  */
# 1 "/usr/include/bits/procfs-extra.h" 1 3 4
/* Extra sys/procfs.h definitions.  Generic Linux version.
   Copyright (C) 2018-2025 Free Software Foundation, Inc.

   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 125 "/usr/include/sys/procfs.h" 2 3 4
# 29 "/usr/include/thread_db.h" 2 3 4


/* Error codes of the library.  */
typedef enum
{
  TD_OK, /* No error.  */
  TD_ERR, /* No further specified error.  */
  TD_NOTHR, /* No matching thread found.  */
  TD_NOSV, /* No matching synchronization handle found.  */
  TD_NOLWP, /* No matching light-weighted process found.  */
  TD_BADPH, /* Invalid process handle.  */
  TD_BADTH, /* Invalid thread handle.  */
  TD_BADSH, /* Invalid synchronization handle.  */
  TD_BADTA, /* Invalid thread agent.  */
  TD_BADKEY, /* Invalid key.  */
  TD_NOMSG, /* No event available.  */
  TD_NOFPREGS, /* No floating-point register content available.  */
  TD_NOLIBTHREAD, /* Application not linked with thread library.  */
  TD_NOEVENT, /* Requested event is not supported.  */
  TD_NOCAPAB, /* Capability not available.  */
  TD_DBERR, /* Internal debug library error.  */
  TD_NOAPLIC, /* Operation is not applicable.  */
  TD_NOTSD, /* No thread-specific data available.  */
  TD_MALLOC, /* Out of memory.  */
  TD_PARTIALREG, /* Not entire register set was read or written.  */
  TD_NOXREGS, /* X register set not available for given thread.  */
  TD_TLSDEFER, /* Thread has not yet allocated TLS for given module.  */
  TD_NOTALLOC = TD_TLSDEFER,
  TD_VERSION, /* Version if libpthread and libthread_db do not match.  */
  TD_NOTLS /* There is no TLS segment in the given module.  */
} td_err_e;


/* Possible thread states.  TD_THR_ANY_STATE is a pseudo-state used to
   select threads regardless of state in td_ta_thr_iter().  */
typedef enum
{
  TD_THR_ANY_STATE,
  TD_THR_UNKNOWN,
  TD_THR_STOPPED,
  TD_THR_RUN,
  TD_THR_ACTIVE,
  TD_THR_ZOMBIE,
  TD_THR_SLEEP,
  TD_THR_STOPPED_ASLEEP
} td_thr_state_e;

/* Thread type: user or system.  TD_THR_ANY_TYPE is a pseudo-type used
   to select threads regardless of type in td_ta_thr_iter().  */
typedef enum
{
  TD_THR_ANY_TYPE,
  TD_THR_USER,
  TD_THR_SYSTEM
} td_thr_type_e;


/* Types of the debugging library.  */

/* Handle for a process.  This type is opaque.  */
typedef struct td_thragent td_thragent_t;

/* The actual thread handle type.  This is also opaque.  */
typedef struct td_thrhandle
{
  td_thragent_t *th_ta_p;
  psaddr_t th_unique;
} td_thrhandle_t;


/* Forward declaration of a type defined by and for the dynamic linker.  */
struct link_map;


/* Flags for `td_ta_thr_iter'.  */
# 114 "/usr/include/thread_db.h" 3 4
/* Bitmask of enabled events. */
typedef struct td_thr_events
{
  uint32_t event_bits[2];
} td_thr_events_t;

/* Event set manipulation macros. */
# 153 "/usr/include/thread_db.h" 3 4
/* Events reportable by the thread implementation.  */
typedef enum
{
  TD_ALL_EVENTS, /* Pseudo-event number.  */
  TD_EVENT_NONE = TD_ALL_EVENTS, /* Depends on context.  */
  TD_READY, /* Is executable now. */
  TD_SLEEP, /* Blocked in a synchronization obj.  */
  TD_SWITCHTO, /* Now assigned to a process.  */
  TD_SWITCHFROM, /* Not anymore assigned to a process.  */
  TD_LOCK_TRY, /* Trying to get an unavailable lock.  */
  TD_CATCHSIG, /* Signal posted to the thread.  */
  TD_IDLE, /* Process getting idle.  */
  TD_CREATE, /* New thread created.  */
  TD_DEATH, /* Thread terminated.  */
  TD_PREEMPT, /* Preempted.  */
  TD_PRI_INHERIT, /* Inherited elevated priority.  */
  TD_REAP, /* Reaped.  */
  TD_CONCURRENCY, /* Number of processes changing.  */
  TD_TIMEOUT, /* Conditional variable wait timed out.  */
  TD_MIN_EVENT_NUM = TD_READY,
  TD_MAX_EVENT_NUM = TD_TIMEOUT,
  TD_EVENTS_ENABLE = 31 /* Event reporting enabled.  */
} td_event_e;

/* Values representing the different ways events are reported.  */
typedef enum
{
  NOTIFY_BPT, /* User must insert breakpoint at u.bptaddr. */
  NOTIFY_AUTOBPT, /* Breakpoint at u.bptaddr is automatically
				   inserted.  */
  NOTIFY_SYSCALL /* System call u.syscallno will be invoked.  */
} td_notify_e;

/* Description how event type is reported.  */
typedef struct td_notify
{
  td_notify_e type; /* Way the event is reported.  */
  union
  {
    psaddr_t bptaddr; /* Address of breakpoint.  */
    int syscallno; /* Number of system call used.  */
  } u;
} td_notify_t;

/* Structure used to report event.  */
typedef struct td_event_msg
{
  td_event_e event; /* Event type being reported.  */
  const td_thrhandle_t *th_p; /* Thread reporting the event.  */
  union
  {



    uintptr_t data; /* Event specific data.  */
  } msg;
} td_event_msg_t;

/* Structure containing event data available in each thread structure.  */
typedef struct
{
  td_thr_events_t eventmask; /* Mask of enabled events.  */
  td_event_e eventnum; /* Number of last event.  */
  void *eventdata; /* Data associated with event.  */
} td_eventbuf_t;


/* Gathered statistics about the process.  */
typedef struct td_ta_stats
{
  int nthreads; /* Total number of threads in use.  */
  int r_concurrency; /* Concurrency level requested by user.  */
  int nrunnable_num; /* Average runnable threads, numerator.  */
  int nrunnable_den; /* Average runnable threads, denominator.  */
  int a_concurrency_num; /* Achieved concurrency level, numerator.  */
  int a_concurrency_den; /* Achieved concurrency level, denominator.  */
  int nlwps_num; /* Average number of processes in use,
				   numerator.  */
  int nlwps_den; /* Average number of processes in use,
				   denominator.  */
  int nidle_num; /* Average number of idling processes,
				   numerator.  */
  int nidle_den; /* Average number of idling processes,
				   denominator.  */
} td_ta_stats_t;


/* Since Sun's library is based on Solaris threads we have to define a few
   types to map them to POSIX threads.  */
typedef pthread_t thread_t;
typedef pthread_key_t thread_key_t;


/* Callback for iteration over threads.  */
typedef int td_thr_iter_f (const td_thrhandle_t *, void *);

/* Callback for iteration over thread local data.  */
typedef int td_key_iter_f (thread_key_t, void (*) (void *), void *);



/* Forward declaration.  This has to be defined by the user.  */
struct ps_prochandle;


/* Information about the thread.  */
typedef struct td_thrinfo
{
  td_thragent_t *ti_ta_p; /* Process handle.  */
  unsigned int ti_user_flags; /* Unused.  */
  thread_t ti_tid; /* Thread ID returned by
					   pthread_create().  */
  char *ti_tls; /* Pointer to thread-local data.  */
  psaddr_t ti_startfunc; /* Start function passed to
					   pthread_create().  */
  psaddr_t ti_stkbase; /* Base of thread's stack.  */
  long int ti_stksize; /* Size of thread's stack.  */
  psaddr_t ti_ro_area; /* Unused.  */
  int ti_ro_size; /* Unused.  */
  td_thr_state_e ti_state; /* Thread state.  */
  unsigned char ti_db_suspended; /* Nonzero if suspended by debugger. */
  td_thr_type_e ti_type; /* Type of the thread (system vs
					   user thread).  */
  intptr_t ti_pc; /* Unused.  */
  intptr_t ti_sp; /* Unused.  */
  short int ti_flags; /* Unused.  */
  int ti_pri; /* Thread priority.  */
  lwpid_t ti_lid; /* Kernel PID for this thread.  */
  sigset_t ti_sigmask; /* Signal mask.  */
  unsigned char ti_traceme; /* Nonzero if event reporting
					   enabled.  */
  unsigned char ti_preemptflag; /* Unused.  */
  unsigned char ti_pirecflag; /* Unused.  */
  sigset_t ti_pending; /* Set of pending signals.  */
  td_thr_events_t ti_events; /* Set of enabled events.  */
} td_thrinfo_t;



/* Prototypes for exported library functions.  */

/* Initialize the thread debug support library.  */
extern td_err_e td_init (void);

/* Historical relict.  Should not be used anymore.  */
extern td_err_e td_log (void);

/* Return list of symbols the library can request.  */
extern const char **td_symbol_list (void);

/* Generate new thread debug library handle for process PS.  */
extern td_err_e td_ta_new (struct ps_prochandle *__ps, td_thragent_t **__ta);

/* Free resources allocated for TA.  */
extern td_err_e td_ta_delete (td_thragent_t *__ta);

/* Get number of currently running threads in process associated with TA.  */
extern td_err_e td_ta_get_nthreads (const td_thragent_t *__ta, int *__np);

/* Return process handle passed in `td_ta_new' for process associated with
   TA.  */
extern td_err_e td_ta_get_ph (const td_thragent_t *__ta,
         struct ps_prochandle **__ph);

/* Map thread library handle PT to thread debug library handle for process
   associated with TA and store result in *TH.  */
extern td_err_e td_ta_map_id2thr (const td_thragent_t *__ta, pthread_t __pt,
      td_thrhandle_t *__th);

/* Map process ID LWPID to thread debug library handle for process
   associated with TA and store result in *TH.  */
extern td_err_e td_ta_map_lwp2thr (const td_thragent_t *__ta, lwpid_t __lwpid,
       td_thrhandle_t *__th);


/* Call for each thread in a process associated with TA the callback function
   CALLBACK.  */
extern td_err_e td_ta_thr_iter (const td_thragent_t *__ta,
    td_thr_iter_f *__callback, void *__cbdata_p,
    td_thr_state_e __state, int __ti_pri,
    sigset_t *__ti_sigmask_p,
    unsigned int __ti_user_flags);

/* Call for each defined thread local data entry the callback function KI.  */
extern td_err_e td_ta_tsd_iter (const td_thragent_t *__ta, td_key_iter_f *__ki,
    void *__p);


/* Get event address for EVENT.  */
extern td_err_e td_ta_event_addr (const td_thragent_t *__ta,
      td_event_e __event, td_notify_t *__ptr);

/* Enable EVENT in global mask.  */
extern td_err_e td_ta_set_event (const td_thragent_t *__ta,
     td_thr_events_t *__event);

/* Disable EVENT in global mask.  */
extern td_err_e td_ta_clear_event (const td_thragent_t *__ta,
       td_thr_events_t *__event);

/* Return information about last event.  */
extern td_err_e td_ta_event_getmsg (const td_thragent_t *__ta,
        td_event_msg_t *__msg);


/* Set suggested concurrency level for process associated with TA.  */
extern td_err_e td_ta_setconcurrency (const td_thragent_t *__ta, int __level);


/* Enable collecting statistics for process associated with TA.  */
extern td_err_e td_ta_enable_stats (const td_thragent_t *__ta, int __enable);

/* Reset statistics.  */
extern td_err_e td_ta_reset_stats (const td_thragent_t *__ta);

/* Retrieve statistics from process associated with TA.  */
extern td_err_e td_ta_get_stats (const td_thragent_t *__ta,
     td_ta_stats_t *__statsp);


/* Validate that TH is a thread handle.  */
extern td_err_e td_thr_validate (const td_thrhandle_t *__th);

/* Return information about thread TH.  */
extern td_err_e td_thr_get_info (const td_thrhandle_t *__th,
     td_thrinfo_t *__infop);

/* Retrieve floating-point register contents of process running thread TH.  */
extern td_err_e td_thr_getfpregs (const td_thrhandle_t *__th,
      prfpregset_t *__regset);

/* Retrieve general register contents of process running thread TH.  */
extern td_err_e td_thr_getgregs (const td_thrhandle_t *__th,
     prgregset_t __gregs);

/* Retrieve extended register contents of process running thread TH.  */
extern td_err_e td_thr_getxregs (const td_thrhandle_t *__th, void *__xregs);

/* Get size of extended register set of process running thread TH.  */
extern td_err_e td_thr_getxregsize (const td_thrhandle_t *__th, int *__sizep);

/* Set floating-point register contents of process running thread TH.  */
extern td_err_e td_thr_setfpregs (const td_thrhandle_t *__th,
      const prfpregset_t *__fpregs);

/* Set general register contents of process running thread TH.  */
extern td_err_e td_thr_setgregs (const td_thrhandle_t *__th,
     prgregset_t __gregs);

/* Set extended register contents of process running thread TH.  */
extern td_err_e td_thr_setxregs (const td_thrhandle_t *__th,
     const void *__addr);


/* Get address of the given module's TLS storage area for the given thread.  */
extern td_err_e td_thr_tlsbase (const td_thrhandle_t *__th,
    unsigned long int __modid,
    psaddr_t *__base);

/* Get address of thread local variable.  */
extern td_err_e td_thr_tls_get_addr (const td_thrhandle_t *__th,
         psaddr_t __map_address, size_t __offset,
         psaddr_t *__address);


/* Enable reporting for EVENT for thread TH.  */
extern td_err_e td_thr_event_enable (const td_thrhandle_t *__th, int __event);

/* Enable EVENT for thread TH.  */
extern td_err_e td_thr_set_event (const td_thrhandle_t *__th,
      td_thr_events_t *__event);

/* Disable EVENT for thread TH.  */
extern td_err_e td_thr_clear_event (const td_thrhandle_t *__th,
        td_thr_events_t *__event);

/* Get event message for thread TH.  */
extern td_err_e td_thr_event_getmsg (const td_thrhandle_t *__th,
         td_event_msg_t *__msg);


/* Set priority of thread TH.  */
extern td_err_e td_thr_setprio (const td_thrhandle_t *__th, int __prio);


/* Set pending signals for thread TH.  */
extern td_err_e td_thr_setsigpending (const td_thrhandle_t *__th,
          unsigned char __n, const sigset_t *__ss);

/* Set signal mask for thread TH.  */
extern td_err_e td_thr_sigsetmask (const td_thrhandle_t *__th,
       const sigset_t *__ss);


/* Return thread local data associated with key TK in thread TH.  */
extern td_err_e td_thr_tsd (const td_thrhandle_t *__th,
       const thread_key_t __tk, void **__data);


/* Suspend execution of thread TH.  */
extern td_err_e td_thr_dbsuspend (const td_thrhandle_t *__th);

/* Resume execution of thread TH.  */
extern td_err_e td_thr_dbresume (const td_thrhandle_t *__th);
# 107 "all.c" 2
# 1 "/usr/include/threads.h" 1 3 4
/* ISO C11 Standard: 7.26 - Thread support library  <threads.h>.
   Copyright (C) 2018-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 37 "/usr/include/threads.h" 3 4
typedef __tss_t tss_t;
typedef void (*tss_dtor_t) (void*);

typedef __thrd_t thrd_t;
typedef int (*thrd_start_t) (void*);

/* Exit and error codes.  */
enum
{
  thrd_success = 0,
  thrd_busy = 1,
  thrd_error = 2,
  thrd_nomem = 3,
  thrd_timedout = 4
};

/* Mutex types.  */
enum
{
  mtx_plain = 0,
  mtx_recursive = 1,
  mtx_timed = 2
};

typedef __once_flag once_flag;


typedef union
{
  char __size[40];
  long int __align ;
} mtx_t;

typedef union
{
  char __size[48];
  __extension__ long long int __align ;
} cnd_t;

/* Threads functions.  */

/* Create a new thread executing the function __FUNC.  Arguments for __FUNC
   are passed through __ARG.  If successful, __THR is set to new thread
   identifier.  */
extern int thrd_create (thrd_t *__thr, thrd_start_t __func, void *__arg);

/* Check if __LHS and __RHS point to the same thread.  */
extern int thrd_equal (thrd_t __lhs, thrd_t __rhs);

/* Return current thread identifier.  */
extern thrd_t thrd_current (void);

/* Block current thread execution for at least the time pointed by
   __TIME_POINT.  The current thread may resume if receives a signal.  In
   that case, if __REMAINING is not NULL, the remaining time is stored in
   the object pointed by it.  */

extern int thrd_sleep (const struct timespec *__time_point,
         struct timespec *__remaining);
# 106 "/usr/include/threads.h" 3 4
/* Terminate current thread execution, cleaning up any thread local
   storage and freeing resources.  Returns the value specified in __RES.  */
extern void thrd_exit (int __res) ;

/* Detach the thread identified by __THR from the current environment
   (it does not allow join or wait for it).  */
extern int thrd_detach (thrd_t __thr);

/* Block current thread until execution of __THR is complete.  In case that
   __RES is not NULL, will store the return value of __THR when exiting.  */
extern int thrd_join (thrd_t __thr, int *__res);

/* Stop current thread execution and call the scheduler to decide which
   thread should execute next.  The current thread may be selected by the
   scheduler to keep running.  */
extern void thrd_yield (void);
# 133 "/usr/include/threads.h" 3 4
/* Mutex functions.  */

/* Creates a new mutex object with type __TYPE.  If successful the new
   object is pointed by __MUTEX.  */
extern int mtx_init (mtx_t *__mutex, int __type);

/* Block the current thread until the mutex pointed to by __MUTEX is
   unlocked.  In that case current thread will not be blocked.  */
extern int mtx_lock (mtx_t *__mutex);

/* Block the current thread until the mutex pointed by __MUTEX is unlocked
   or time pointed by __TIME_POINT is reached.  In case the mutex is unlock,
   the current thread will not be blocked.  */

extern int mtx_timedlock (mtx_t *__restrict __mutex,
     const struct timespec *__restrict __time_point);
# 160 "/usr/include/threads.h" 3 4
/* Try to lock the mutex pointed by __MUTEX without blocking.  If the mutex
   is free the current threads takes control of it, otherwise it returns
   immediately.  */
extern int mtx_trylock (mtx_t *__mutex);

/* Unlock the mutex pointed by __MUTEX.  It may potentially awake other
   threads waiting on this mutex.  */
extern int mtx_unlock (mtx_t *__mutex);

/* Destroy the mutex object pointed by __MUTEX.  */
extern void mtx_destroy (mtx_t *__mutex);


/* Call function __FUNC exactly once, even if invoked from several threads.
   All calls must be made with the same __FLAGS object.  */
extern void call_once (once_flag *__flag, void (*__func)(void));


/* Condition variable functions.  */

/* Initialize new condition variable pointed by __COND.  */
extern int cnd_init (cnd_t *__cond);

/* Unblock one thread that currently waits on condition variable pointed
   by __COND.  */
extern int cnd_signal (cnd_t *__cond);

/* Unblock all threads currently waiting on condition variable pointed by
   __COND.  */
extern int cnd_broadcast (cnd_t *__cond);

/* Block current thread on the condition variable pointed by __COND.  */
extern int cnd_wait (cnd_t *__cond, mtx_t *__mutex);

/* Block current thread on the condition variable until condition variable
   pointed by __COND is signaled or time pointed by __TIME_POINT is
   reached.  */

extern int cnd_timedwait (cnd_t *__restrict __cond,
     mtx_t *__restrict __mutex,
     const struct timespec *__restrict __time_point);
# 213 "/usr/include/threads.h" 3 4
/* Destroy condition variable pointed by __cond and free all of its
   resources.  */
extern void cnd_destroy (cnd_t *__COND);


/* Thread specific storage functions.  */

/* Create new thread-specific storage key and stores it in the object pointed
   by __TSS_ID.  If __DESTRUCTOR is not NULL, the function will be called when
   the thread terminates.  */
extern int tss_create (tss_t *__tss_id, tss_dtor_t __destructor);

/* Return the value held in thread-specific storage for the current thread
   identified by __TSS_ID.  */
extern void *tss_get (tss_t __tss_id);

/* Sets the value of the thread-specific storage identified by __TSS_ID for
   the current thread to __VAL.  */
extern int tss_set (tss_t __tss_id, void *__val);

/* Destroys the thread-specific storage identified by __TSS_ID.  The
   destructor is not called until thrd_exit is called.  */
extern void tss_delete (tss_t __tss_id);
# 108 "all.c" 2

# 1 "/usr/include/ttyent.h" 1 3 4
/*
 * Copyright (c) 1989, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)ttyent.h	8.1 (Berkeley) 6/2/93
 */
# 44 "/usr/include/ttyent.h" 3 4
struct ttyent {
 char *ty_name; /* terminal device name */
 char *ty_getty; /* command to execute, usually getty */
 char *ty_type; /* terminal type for termcap */


 int ty_status; /* status flags */
 char *ty_window; /* command to start up window manager */
 char *ty_comment; /* comment field */
};




extern struct ttyent *getttyent (void) ;
extern struct ttyent *getttynam (const char *__tty) ;
extern int setttyent (void) ;
extern int endttyent (void) ;
# 110 "all.c" 2
# 1 "/usr/include/uchar.h" 1 3 4
/* Copyright (C) 2011-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *      ISO C11 Standard: 7.28
 *	Unicode utilities	<uchar.h>
 */







# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 93 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_size_t.h" 1 3 4
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 94 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 30 "/usr/include/uchar.h" 2 3 4


# 1 "/usr/include/bits/types/mbstate_t.h" 1 3 4





typedef __mbstate_t mbstate_t;
# 33 "/usr/include/uchar.h" 2 3 4

/* Declare the C23 char8_t typedef in C23 modes, but only if the C++
  __cpp_char8_t feature test macro is not defined.  */
# 50 "/usr/include/uchar.h" 3 4
/* Define the 16-bit and 32-bit character types.  */
typedef __uint_least16_t char16_t;
typedef __uint_least32_t char32_t;





/* Declare the C23 mbrtoc8() and c8rtomb() functions in C23 modes or if
   the C++ __cpp_char8_t feature test macro is defined.  */
# 72 "/usr/include/uchar.h" 3 4
/* Write char16_t representation of multibyte character pointed
   to by S to PC16.  */
extern size_t mbrtoc16 (char16_t *__restrict __pc16,
   const char *__restrict __s, size_t __n,
   mbstate_t *__restrict __p) ;

/* Write multibyte representation of char16_t C16 to S.  */
extern size_t c16rtomb (char *__restrict __s, char16_t __c16,
   mbstate_t *__restrict __ps) ;



/* Write char32_t representation of multibyte character pointed
   to by S to PC32.  */
extern size_t mbrtoc32 (char32_t *__restrict __pc32,
   const char *__restrict __s, size_t __n,
   mbstate_t *__restrict __p) ;

/* Write multibyte representation of char32_t C32 to S.  */
extern size_t c32rtomb (char *__restrict __s, char32_t __c32,
   mbstate_t *__restrict __ps) ;
# 111 "all.c" 2
# 1 "/usr/include/ucontext.h" 1 3 4
/* Copyright (C) 1997-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* System V ABI compliant user-level context switching support.  */






/* Get definition of __INDIRECT_RETURN.  */
# 1 "/usr/include/bits/indirect-return.h" 1 3 4
/* Definition of __INDIRECT_RETURN.  x86 version.
   Copyright (C) 2018-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





/* On x86, swapcontext returns via indirect branch when the shadow stack
   is enabled.  Define __INDIRECT_RETURN to indicate whether swapcontext
   returns via indirect branch.  */
# 27 "/usr/include/ucontext.h" 2 3 4

/* Get machine dependent definition of data structures.  */
# 1 "/usr/include/sys/ucontext.h" 1 3 4
/* Copyright (C) 2001-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 25 "/usr/include/sys/ucontext.h" 3 4
# 1 "/usr/include/bits/types/stack_t.h" 1 3 4
/* Define stack_t.  Linux version.
   Copyright (C) 1998-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 93 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_size_t.h" 1 3 4
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 94 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 24 "/usr/include/bits/types/stack_t.h" 2 3 4

/* Structure describing a signal stack.  */
typedef struct
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 26 "/usr/include/sys/ucontext.h" 2 3 4
# 36 "/usr/include/sys/ucontext.h" 3 4
/* Type for general register.  */
__extension__ typedef long long int greg_t;

/* Number of general registers.  */





/* Container for all general registers.  */
typedef greg_t gregset_t[23];
# 101 "/usr/include/sys/ucontext.h" 3 4
struct _libc_fpxreg
{
  unsigned short int __significand[4];
  unsigned short int __exponent;
  unsigned short int __glibc_reserved1[3];
};

struct _libc_xmmreg
{
  __uint32_t __element[4];
};

struct _libc_fpstate
{
  /* 64-bit FXSAVE format.  */
  __uint16_t __cwd;
  __uint16_t __swd;
  __uint16_t __ftw;
  __uint16_t __fop;
  __uint64_t __rip;
  __uint64_t __rdp;
  __uint32_t __mxcsr;
  __uint32_t __mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};

/* Structure to describe FPU registers.  */
typedef struct _libc_fpstate *fpregset_t;

/* Context to describe whole processor state.  */
typedef struct
  {
    gregset_t __gregs;
    /* Note that fpregs is a pointer.  */
    fpregset_t __fpregs;
    __extension__ unsigned long long __reserved1 [8];
} mcontext_t;

/* Userlevel context.  */
typedef struct ucontext_t
  {
    unsigned long int __uc_flags;
    struct ucontext_t *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
    __extension__ unsigned long long int __ssp[4];
  } ucontext_t;
# 30 "/usr/include/ucontext.h" 2 3 4



/* Get user context and store it in variable pointed to by UCP.  */
extern int getcontext (ucontext_t *__ucp) ;

/* Set user context from information of variable pointed to by UCP.  */
extern int setcontext (const ucontext_t *__ucp) ;

/* Save current context in context variable pointed to by OUCP and set
   context from variable pointed to by UCP.  */
extern int swapcontext (ucontext_t *__restrict __oucp,
   const ucontext_t *__restrict __ucp)
                             ;

/* Manipulate user context UCP to continue with calling functions FUNC
   and the ARGC-1 parameters following ARGC when the context is used
   the next time in `setcontext' or `swapcontext'.

   We cannot say anything about the parameters FUNC takes; `void'
   is as good as any other choice.  */
extern void makecontext (ucontext_t *__ucp, void (*__func) (void),
    int __argc, ...) ;
# 112 "all.c" 2
# 1 "/usr/include/ulimit.h" 1 3 4
/* Copyright (C) 1997-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






/* Constants used as the first parameter for `ulimit'.  They denote limits
   which can be set or retrieved using this function.  */
enum
{
  UL_GETFSIZE = 1, /* Return limit on the size of a file,
					   in units of 512 bytes.  */

  UL_SETFSIZE, /* Set limit on the size of a file to
					   second argument.  */

  __UL_GETMAXBRK, /* Return the maximum possible address
					   of the data segment.  */
  __UL_GETOPENMAX /* Return the maximum number of files
					   that the calling process can open.*/
};




/* Control process limits according to CMD.  */
extern long int ulimit (int __cmd, ...) ;
# 113 "all.c" 2

# 1 "/usr/include/unistd.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 2.10 Symbolic Constants		<unistd.h>
 */
# 29 "/usr/include/unistd.h" 3 4
/* These may be used to determine what facilities are present at compile time.
   Their values can be obtained at run time from `sysconf'.  */
# 45 "/usr/include/unistd.h" 3 4
/* POSIX Standard approved as ISO/IEC 9945-1 as of September 1990.  */



/* These are not #ifdef __USE_POSIX2 because they are
   in the theoretically application-owned namespace.  */
# 62 "/usr/include/unistd.h" 3 4
/* The utilities on GNU systems also correspond to this version.  */



/* The utilities on GNU systems also correspond to this version.  */


/* This symbol was required until the 2001 edition of POSIX.  */


/* If defined, the implementation supports the
   C Language Bindings Option.  */


/* If defined, the implementation supports the
   C Language Development Utilities Option.  */


/* If defined, the implementation supports the
   Software Development Utilities Option.  */


/* If defined, the implementation supports the
   creation of locales with the localedef utility.  */


/* X/Open version number to which the library conforms.  It is selectable.  */
# 99 "/usr/include/unistd.h" 3 4
/* Commands and utilities from XPG4 are available.  */


/* We are compatible with the old published standards as well.  */




/* The X/Open Unix extensions are available.  */


/* The enhanced internationalization capabilities according to XPG4.2
   are present.  */


/* The legacy interfaces are also available.  */



/* Get values of POSIX options:

   If these symbols are defined, the corresponding features are
   always available.  If not, they may be available sometimes.
   The current values can be obtained with `sysconf'.

   _POSIX_JOB_CONTROL		Job control is supported.
   _POSIX_SAVED_IDS		Processes have a saved set-user-ID
				and a saved set-group-ID.
   _POSIX_REALTIME_SIGNALS	Real-time, queued signals are supported.
   _POSIX_PRIORITY_SCHEDULING	Priority scheduling is supported.
   _POSIX_TIMERS		POSIX.4 clocks and timers are supported.
   _POSIX_ASYNCHRONOUS_IO	Asynchronous I/O is supported.
   _POSIX_PRIORITIZED_IO	Prioritized asynchronous I/O is supported.
   _POSIX_SYNCHRONIZED_IO	Synchronizing file data is supported.
   _POSIX_FSYNC			The fsync function is present.
   _POSIX_MAPPED_FILES		Mapping of files to memory is supported.
   _POSIX_MEMLOCK		Locking of all memory is supported.
   _POSIX_MEMLOCK_RANGE		Locking of ranges of memory is supported.
   _POSIX_MEMORY_PROTECTION	Setting of memory protections is supported.
   _POSIX_MESSAGE_PASSING	POSIX.4 message queues are supported.
   _POSIX_SEMAPHORES		POSIX.4 counting semaphores are supported.
   _POSIX_SHARED_MEMORY_OBJECTS	POSIX.4 shared memory objects are supported.
   _POSIX_THREADS		POSIX.1c pthreads are supported.
   _POSIX_THREAD_ATTR_STACKADDR	Thread stack address attribute option supported.
   _POSIX_THREAD_ATTR_STACKSIZE	Thread stack size attribute option supported.
   _POSIX_THREAD_SAFE_FUNCTIONS	Thread-safe functions are supported.
   _POSIX_THREAD_PRIORITY_SCHEDULING
				POSIX.1c thread execution scheduling supported.
   _POSIX_THREAD_PRIO_INHERIT	Thread priority inheritance option supported.
   _POSIX_THREAD_PRIO_PROTECT	Thread priority protection option supported.
   _POSIX_THREAD_PROCESS_SHARED	Process-shared synchronization supported.
   _POSIX_PII			Protocol-independent interfaces are supported.
   _POSIX_PII_XTI		XTI protocol-indep. interfaces are supported.
   _POSIX_PII_SOCKET		Socket protocol-indep. interfaces are supported.
   _POSIX_PII_INTERNET		Internet family of protocols supported.
   _POSIX_PII_INTERNET_STREAM	Connection-mode Internet protocol supported.
   _POSIX_PII_INTERNET_DGRAM	Connectionless Internet protocol supported.
   _POSIX_PII_OSI		ISO/OSI family of protocols supported.
   _POSIX_PII_OSI_COTS		Connection-mode ISO/OSI service supported.
   _POSIX_PII_OSI_CLTS		Connectionless ISO/OSI service supported.
   _POSIX_POLL			Implementation supports `poll' function.
   _POSIX_SELECT		Implementation supports `select' and `pselect'.

   _XOPEN_REALTIME		X/Open realtime support is available.
   _XOPEN_REALTIME_THREADS	X/Open realtime thread support is available.
   _XOPEN_SHM			Shared memory interface according to XPG4.2.

   _XBS5_ILP32_OFF32		Implementation provides environment with 32-bit
				int, long, pointer, and off_t types.
   _XBS5_ILP32_OFFBIG		Implementation provides environment with 32-bit
				int, long, and pointer and off_t with at least
				64 bits.
   _XBS5_LP64_OFF64		Implementation provides environment with 32-bit
				int, and 64-bit long, pointer, and off_t types.
   _XBS5_LPBIG_OFFBIG		Implementation provides environment with at
				least 32 bits int and long, pointer, and off_t
				with at least 64 bits.

   If any of these symbols is defined as -1, the corresponding option is not
   true for any file.  If any is defined as other than -1, the corresponding
   option is true for all files.  If a symbol is not defined at all, the value
   for a specific file can be obtained from `pathconf' and `fpathconf'.

   _POSIX_CHOWN_RESTRICTED	Only the super user can use `chown' to change
				the owner of a file.  `chown' can only be used
				to change the group ID of a file to a group of
				which the calling process is a member.
   _POSIX_NO_TRUNC		Pathname components longer than
				NAME_MAX generate an error.
   _POSIX_VDISABLE		If defined, if the value of an element of the
				`c_cc' member of `struct termios' is
				_POSIX_VDISABLE, no character will have the
				effect associated with that element.
   _POSIX_SYNC_IO		Synchronous I/O may be performed.
   _POSIX_ASYNC_IO		Asynchronous I/O may be performed.
   _POSIX_PRIO_IO		Prioritized Asynchronous I/O may be performed.

   Support for the Large File Support interface is not generally available.
   If it is available the following constants are defined to one.
   _LFS64_LARGEFILE		Low-level I/O supports large files.
   _LFS64_STDIO			Standard I/O supports large files.
   */

# 1 "/usr/include/bits/posix_opt.h" 1 3 4
/* Define POSIX options for Linux.
   Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public License as
   published by the Free Software Foundation; either version 2.1 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If
   not, see <https://www.gnu.org/licenses/>.  */




/* Job control is supported.  */


/* Processes have a saved set-user-ID and a saved set-group-ID.  */


/* Priority scheduling is not supported with the correct semantics,
   but GNU/Linux applications expect that the corresponding interfaces
   are available, even though the semantics do not meet the POSIX
   requirements.  See glibc bug 14829.  */


/* Synchronizing file data is supported.  */


/* The fsync function is present.  */


/* Mapping of files to memory is supported.  */


/* Locking of all memory is supported.  */


/* Locking of ranges of memory is supported.  */


/* Setting of memory protections is supported.  */


/* Some filesystems allow all users to change file ownership.  */


/* `c_cc' member of 'struct termios' structure can be disabled by
   using the value _POSIX_VDISABLE.  */


/* Filenames are not silently truncated.  */


/* X/Open realtime support is available.  */


/* X/Open thread realtime support is available.  */


/* XPG4.2 shared memory is supported.  */


/* Tell we have POSIX threads.  */


/* We have the reentrant functions described in POSIX.  */



/* We provide priority scheduling for threads.  */


/* We support user-defined stack sizes.  */


/* We support user-defined stacks.  */


/* We support priority inheritance.  */


/* We support priority protection, though only for non-robust
   mutexes.  */
# 102 "/usr/include/bits/posix_opt.h" 3 4
/* We support POSIX.1b semaphores.  */


/* Real-time signals are supported.  */


/* We support asynchronous I/O.  */


/* Alternative name for Unix98.  */

/* Support for prioritization is also available.  */


/* The LFS support in asynchronous I/O is also available.  */


/* The rest of the LFS is also available.  */




/* POSIX shared memory objects are implemented.  */


/* CPU-time clocks support needs to be checked at runtime.  */


/* Clock support in threads must be also checked at runtime.  */


/* GNU libc provides regular expression handling.  */


/* Reader/Writer locks are available.  */


/* We have a POSIX shell.  */


/* We support the Timeouts option.  */


/* We support spinlocks.  */


/* The `spawn' function family is supported.  */


/* We have POSIX timers.  */


/* The barrier functions are available.  */


/* POSIX message queues are available.  */


/* Thread process-shared synchronization is supported.  */


/* The monotonic clock might be available.  */


/* The clock selection interfaces are available.  */


/* Advisory information interfaces are available.  */


/* IPv6 support is available.  */


/* Raw socket support is available.  */


/* We have at least one terminal.  */


/* Neither process nor thread sporadic server interfaces is available.  */



/* trace.h is not available.  */





/* Typed memory objects are not available.  */
# 203 "/usr/include/unistd.h" 2 3 4

/* Get the environment definitions from Unix98.  */




/* Standard file descriptors.  */





/* All functions that are not declared anywhere else.  */
# 226 "/usr/include/unistd.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 93 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_size_t.h" 1 3 4
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 94 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 108 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_null.h" 1 3 4
/*===---- __stddef_null.h - Definition of NULL -----------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */



/* linux/stddef.h will define NULL to 0. glibc (and other) headers then define
 * __need_NULL and rely on stddef.h to redefine NULL to the correct value again.
 * Modules don't support redefining macros like that, but support that pattern
 * in the non-modules case.
 */
# 109 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 227 "/usr/include/unistd.h" 2 3 4
# 279 "/usr/include/unistd.h" 3 4
/* Values for the second argument to access.
   These may be OR'd together.  */





/* Test for access to NAME using the real UID and real GID.  */
extern int access (const char *__name, int __type) ;
# 314 "/usr/include/unistd.h" 3 4
/* Values for the WHENCE argument to lseek.  */
# 333 "/usr/include/unistd.h" 3 4
/* Move FD's file position to OFFSET bytes from the
   beginning of the file (if WHENCE is SEEK_SET),
   the current position (if WHENCE is SEEK_CUR),
   or the end of the file (if WHENCE is SEEK_END).
   Return the new file position.  */

extern __off_t lseek (int __fd, __off_t __offset, int __whence) ;
# 354 "/usr/include/unistd.h" 3 4
/* Close the file descriptor FD.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int close (int __fd);







/* Read NBYTES into BUF from FD.  Return the
   number read, -1 for errors or 0 for EOF.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern ssize_t read (int __fd, void *__buf, size_t __nbytes)
                                                  ;

/* Write N bytes of BUF to FD.  Return the number written, or -1.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern ssize_t write (int __fd, const void *__buf, size_t __n)
                                         ;
# 433 "/usr/include/unistd.h" 3 4
/* Create a one-way communication channel (pipe).
   If successful, two file descriptors are stored in PIPEDES;
   bytes written on PIPEDES[1] can be read from PIPEDES[0].
   Returns 0 if successful, -1 if not.  */
extern int pipe (int __pipedes[2]) ;







/* Schedule an alarm.  In SECONDS seconds, the process will get a SIGALRM.
   If SECONDS is zero, any currently scheduled alarm will be cancelled.
   The function returns the number of seconds remaining until the last
   alarm scheduled would have signaled, or zero if there wasn't one.
   There is no return value to indicate an error, but you can set `errno'
   to 0 and check its value after calling `alarm', and this might tell you.
   The signal may come late due to processor scheduling.  */
extern unsigned int alarm (unsigned int __seconds) ;

/* Make the process sleep for SECONDS seconds, or until a signal arrives
   and is not ignored.  The function returns the number of seconds less
   than SECONDS which it actually slept (thus zero if it slept the full time).
   If a signal handler does a `longjmp' or modifies the handling of the
   SIGALRM signal while inside `sleep' call, the handling of the SIGALRM
   signal afterwards is undefined.  There is no return value to indicate
   error, but if `sleep' returns SECONDS, it probably didn't work.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern unsigned int sleep (unsigned int __seconds);
# 484 "/usr/include/unistd.h" 3 4
/* Suspend the process until a signal arrives.
   This always returns -1 and sets `errno' to EINTR.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int pause (void);


/* Change the owner and group of FILE.  */
extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
                                  ;
# 516 "/usr/include/unistd.h" 3 4
/* Change the process's working directory to PATH.  */
extern int chdir (const char *__path) ;






/* Get the pathname of the current working directory,
   and put it in SIZE bytes of BUF.  Returns NULL if the
   directory couldn't be determined or SIZE was too small.
   If successful, returns BUF.  In GNU, if BUF is NULL,
   an array is allocated with `malloc'; the array is SIZE
   bytes long, unless SIZE == 0, in which case it is as
   big as necessary.  */
extern char *getcwd (char *__buf, size_t __size) ;
# 551 "/usr/include/unistd.h" 3 4
/* Duplicate FD, returning a new file descriptor on the same file.  */
extern int dup (int __fd) ;

/* Duplicate FD to FD2, closing FD2 and making it open on the same file.  */
extern int dup2 (int __fd, int __fd2) ;







/* NULL-terminated array of "NAME=VALUE" environment variables.  */
extern char **__environ;





/* Replace the current process, executing PATH with arguments ARGV and
   environment ENVP.  ARGV and ENVP are terminated by NULL pointers.  */
extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) ;
# 583 "/usr/include/unistd.h" 3 4
/* Execute PATH with arguments ARGV and environment from `environ'.  */
extern int execv (const char *__path, char *const __argv[])
                               ;

/* Execute PATH with all arguments after PATH until a NULL pointer,
   and the argument after that for environment.  */
extern int execle (const char *__path, const char *__arg, ...)
                               ;

/* Execute PATH with all arguments after PATH until
   a NULL pointer and environment from `environ'.  */
extern int execl (const char *__path, const char *__arg, ...)
                               ;

/* Execute FILE, searching in the `PATH' environment variable if it contains
   no slashes, with arguments ARGV and environment from `environ'.  */
extern int execvp (const char *__file, char *const __argv[])
                               ;

/* Execute FILE, searching in the `PATH' environment variable if
   it contains no slashes, with all arguments after FILE until a
   NULL pointer and environment from `environ'.  */
extern int execlp (const char *__file, const char *__arg, ...)
                               ;
# 623 "/usr/include/unistd.h" 3 4
/* Terminate program execution with the low-order 8 bits of STATUS.  */
extern void _exit (int __status) ;


/* Get the `_PC_*' symbols for the NAME argument to `pathconf' and `fpathconf';
   the `_SC_*' symbols for the NAME argument to `sysconf';
   and the `_CS_*' symbols for the NAME argument to `confstr'.  */
# 1 "/usr/include/bits/confname.h" 1 3 4
/* `sysconf', `pathconf', and `confstr' NAME values.  Generic version.
   Copyright (C) 1993-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */





/* Values for the NAME argument to `pathconf' and `fpathconf'.  */
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };

/* Values for the argument to `sysconf'.  */
enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,


    /* Values for the argument to `sysconf'
       corresponding to _POSIX2_* symbols.  */
    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,


    /* Values according to POSIX 1003.1c (POSIX threads).  */
    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,

    /* Leave room here, maybe we need a few more cache levels some day.  */

    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT,


    _SC_MINSIGSTKSZ,


    _SC_SIGSTKSZ

  };

/* Values for the NAME argument to `confstr'.  */
enum
  {
    _CS_PATH, /* The default search path.  */


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 631 "/usr/include/unistd.h" 2 3 4

/* Get file-specific configuration information about PATH.  */
extern long int pathconf (const char *__path, int __name)
                            ;

/* Get file-specific configuration about descriptor FD.  */
extern long int fpathconf (int __fd, int __name) ;

/* Get the value of the system variable NAME.  */
extern long int sysconf (int __name) ;
# 649 "/usr/include/unistd.h" 3 4
/* Get the process ID of the calling process.  */
extern __pid_t getpid (void) ;

/* Get the process ID of the calling process's parent.  */
extern __pid_t getppid (void) ;

/* Get the process group ID of the calling process.  */
extern __pid_t getpgrp (void) ;

/* Get the process group ID of process PID.  */
extern __pid_t __getpgid (__pid_t __pid) ;





/* Set the process group ID of the process matching PID to PGID.
   If PID is zero, the current process's process group ID is set.
   If PGID is zero, the process ID of the process is used.  */
extern int setpgid (__pid_t __pid, __pid_t __pgid) ;
# 686 "/usr/include/unistd.h" 3 4
/* Create a new session with the calling process as its leader.
   The process group IDs of the session and the calling process
   are set to the process ID of the calling process, which is returned.  */
extern __pid_t setsid (void) ;






/* Get the real user ID of the calling process.  */
extern __uid_t getuid (void) ;

/* Get the effective user ID of the calling process.  */
extern __uid_t geteuid (void) ;

/* Get the real group ID of the calling process.  */
extern __gid_t getgid (void) ;

/* Get the effective group ID of the calling process.  */
extern __gid_t getegid (void) ;

/* If SIZE is zero, return the number of supplementary groups
   the calling process is in.  Otherwise, fill in the group IDs
   of its supplementary groups in LIST and return the number written.  */
extern int getgroups (int __size, __gid_t __list[])
                                                  ;





/* Set the user ID of the calling process to UID.
   If the calling process is the super-user, set the real
   and effective user IDs, and the saved set-user-ID to UID;
   if not, the effective user ID is set to UID.  */
extern int setuid (__uid_t __uid) ;
# 735 "/usr/include/unistd.h" 3 4
/* Set the group ID of the calling process to GID.
   If the calling process is the super-user, set the real
   and effective group IDs, and the saved set-group-ID to GID;
   if not, the effective group ID is set to GID.  */
extern int setgid (__gid_t __gid) ;
# 775 "/usr/include/unistd.h" 3 4
/* Clone the calling process, creating an exact copy.
   Return -1 for errors, 0 to the new process,
   and the process ID of the new process to the old process.  */
extern __pid_t fork (void) ;
# 797 "/usr/include/unistd.h" 3 4
/* Return the pathname of the terminal FD is open on, or NULL on errors.
   The returned storage is good only until the next call to this function.  */
extern char *ttyname (int __fd) ;

/* Store at most BUFLEN characters of the pathname of the terminal FD is
   open on in BUF.  Return 0 on success, otherwise an error number.  */
extern int ttyname_r (int __fd, char *__buf, size_t __buflen)

                                                   ;

/* Return 1 if FD is a valid descriptor associated
   with a terminal, zero if not.  */
extern int isatty (int __fd) ;
# 818 "/usr/include/unistd.h" 3 4
/* Make a link to FROM named TO.  */
extern int link (const char *__from, const char *__to)
                                     ;
# 857 "/usr/include/unistd.h" 3 4
/* Remove the link NAME.  */
extern int unlink (const char *__name) ;







/* Remove the directory PATH.  */
extern int rmdir (const char *__path) ;


/* Return the foreground process group ID of FD.  */
extern __pid_t tcgetpgrp (int __fd) ;

/* Set the foreground process group ID of FD set PGRP_ID.  */
extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) ;


/* Return the login name of the user.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern char *getlogin (void);
# 985 "/usr/include/unistd.h" 3 4
/* Make all changes done to FD actually appear on disk.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern int fsync (int __fd);
# 1178 "/usr/include/unistd.h" 3 4
/* Prior to Issue 6, the Single Unix Specification required these
   prototypes to appear in this header.  They are also found in
   <stdio.h>.  */
# 1190 "/usr/include/unistd.h" 3 4
/* Unix98 requires this function to be declared here.  In other
   standards it is in <pthread.h>.  */
# 1215 "/usr/include/unistd.h" 3 4
/* Define some macros helping to catch buffer overflows.  */




/* System-specific extensions.  */
# 1 "/usr/include/bits/unistd_ext.h" 1 3 4
/* System-specific extensions of <unistd.h>, Linux version.
   Copyright (C) 2019-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 1222 "/usr/include/unistd.h" 2 3 4
# 115 "all.c" 2
# 1 "/usr/include/utime.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 5.6.6 Set File Access and Modification Times  <utime.h>
 */
# 35 "/usr/include/utime.h" 3 4
/* Structure describing file times.  */
struct utimbuf
  {




    __time_t actime; /* Access time.  */
    __time_t modtime; /* Modification time.  */

  };

/* Set the access and modification times of FILE to those given in
   *FILE_TIMES.  If FILE_TIMES is NULL, set them to the current time.  */

extern int utime (const char *__file,
    const struct utimbuf *__file_times)
                            ;
# 116 "all.c" 2
# 1 "/usr/include/utmp.h" 1 3 4
/* Copyright (C) 1993-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 28 "/usr/include/utmp.h" 3 4
/* Get system dependent values and data structures.  */
# 1 "/usr/include/bits/utmp.h" 1 3 4
/* The `struct utmp' type, describing entries in the utmp file.
   Copyright (C) 1993-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 26 "/usr/include/bits/utmp.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 14 "/usr/include/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 27 "/usr/include/bits/utmp.h" 2 3 4







/* The structure describing an entry in the database of
   previous logins.  */
struct lastlog
  {

    __uint32_t ll_time;



    char ll_line[32];
    char ll_host[256];
  };


/* The structure describing the status of a terminated process.  This
   type is used in `struct utmp' below.  */
struct exit_status
  {
    short int e_termination; /* Process termination status.  */
    short int e_exit; /* Process exit status.  */
  };


/* The structure describing an entry in the user accounting database.  */
struct utmp
{
  short int ut_type; /* Type of login.  */
  pid_t ut_pid; /* Process ID of login process.  */
  char ut_line[32]
                           ; /* Devicename.  */
  char ut_id[4]
                           ; /* Inittab ID.  */
  char ut_user[32]
                           ; /* Username.  */
  char ut_host[256]
                           ; /* Hostname for remote login.  */
  struct exit_status ut_exit; /* Exit status of a process marked
				   as DEAD_PROCESS.  */
/* The ut_session and ut_tv fields must be the same size when compiled
   32- and 64-bit.  This allows data files and shared memory to be
   shared between 32- and 64-bit applications.  */

  int32_t ut_session; /* Session ID, used for windowing.  */
  struct
  {
    __uint32_t tv_sec; /* Seconds.  */
    int32_t tv_usec; /* Microseconds.  */
  } ut_tv; /* Time entry was made.  */





  int32_t ut_addr_v6[4]; /* Internet address of remote host.  */
  char __glibc_reserved[20]; /* Reserved for future use.  */
};

/* Backwards compatibility hacks.  */


/* We have a problem here: `ut_time' is also used otherwise.  Define
   _NO_UT_TIME if the compiler complains.  */






/* Values for the `ut_type' field of a `struct utmp'.  */
# 117 "/usr/include/bits/utmp.h" 3 4
/* Old Linux name for the EMPTY type.  */



/* Tell the user that we have a modern system with UT_HOST, UT_PID,
   UT_TYPE, UT_ID and UT_TV fields.  */
# 30 "/usr/include/utmp.h" 2 3 4

/* Compatibility names for the strings of the canonical file names.  */







/* Make FD be the controlling terminal, stdin, stdout, and stderr;
   then close FD.  Returns 0 on success, nonzero on error.  */
extern int login_tty (int __fd) ;


/* Write the given entry into utmp and wtmp.  */
extern void login (const struct utmp *__entry) ;

/* Write the utmp entry to say the user on UT_LINE has logged out.  */
extern int logout (const char *__ut_line) ;

/* Append to wtmp an entry for the current time and the given info.  */
extern void logwtmp (const char *__ut_line, const char *__ut_name,
       const char *__ut_host) ;

/* Append entry UTMP to the wtmp-like file WTMP_FILE.  */
extern void updwtmp (const char *__wtmp_file, const struct utmp *__utmp)
            ;

/* Change name of the utmp file to be examined.  */
extern int utmpname (const char *__file) ;

/* Read next entry from a utmp-like file.  */
extern struct utmp *getutent (void) ;

/* Reset the input stream to the beginning of the file.  */
extern void setutent (void) ;

/* Close the current open file.  */
extern void endutent (void) ;

/* Search forward from the current point in the utmp file until the
   next entry with a ut_type matching ID->ut_type.  */
extern struct utmp *getutid (const struct utmp *__id) ;

/* Search forward from the current point in the utmp file until the
   next entry with a ut_line matching LINE->ut_line.  */
extern struct utmp *getutline (const struct utmp *__line) ;

/* Write out entry pointed to by UTMP_PTR into the utmp file.  */
extern struct utmp *pututline (const struct utmp *__utmp_ptr) ;
# 117 "all.c" 2
# 1 "/usr/include/utmpx.h" 1 3 4
/* Copyright (C) 1997-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */







/* Required according to Unix98.  */





/* Get system dependent values and data structures.  */
# 1 "/usr/include/bits/utmpx.h" 1 3 4
/* Structures and definitions for the user accounting database.  GNU version.
   Copyright (C) 1997-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */







# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 14 "/usr/include/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 26 "/usr/include/bits/utmpx.h" 2 3 4
# 40 "/usr/include/bits/utmpx.h" 3 4
/* The structure describing the status of a terminated process.  This
   type is used in `struct utmpx' below.  */
struct __exit_status
  {




    short int __e_termination; /* Process termination status.  */
    short int __e_exit; /* Process exit status.  */

  };


/* The structure describing an entry in the user accounting database.  */
struct utmpx
{
  short int ut_type; /* Type of login.  */
  __pid_t ut_pid; /* Process ID of login process.  */
  char ut_line[32]
                           ; /* Devicename.  */
  char ut_id[4]
                           ; /* Inittab ID.  */
  char ut_user[32]
                           ; /* Username.  */
  char ut_host[256]
                           ; /* Hostname for remote login.  */
  struct __exit_status ut_exit; /* Exit status of a process marked
				   as DEAD_PROCESS.  */

/* The fields ut_session and ut_tv must be the same size when compiled
   32- and 64-bit.  This allows files and shared memory to be shared
   between 32- and 64-bit applications.  */

  __int32_t ut_session; /* Session ID, used for windowing.  */
  struct
  {
    __uint32_t tv_sec; /* Seconds.  */
    __int32_t tv_usec; /* Microseconds.  */
  } ut_tv; /* Time entry was made.  */




  __int32_t ut_addr_v6[4]; /* Internet address of remote host.  */
  char __glibc_reserved[20]; /* Reserved for future use.  */
};


/* Values for the `ut_type' field of a `struct utmpx'.  */
# 32 "/usr/include/utmpx.h" 2 3 4
# 41 "/usr/include/utmpx.h" 3 4
/* For the getutmp{,x} functions we need the `struct utmp'.  */







/* Open user accounting database.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void setutxent (void);

/* Close user accounting database.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern void endutxent (void);

/* Get the next entry from the user accounting database.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern struct utmpx *getutxent (void);

/* Get the user accounting database entry corresponding to ID.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern struct utmpx *getutxid (const struct utmpx *__id);

/* Get the user accounting database entry corresponding to LINE.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern struct utmpx *getutxline (const struct utmpx *__line);

/* Write the entry UTMPX into the user accounting database.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern struct utmpx *pututxline (const struct utmpx *__utmpx);
# 118 "all.c" 2
# 1 "/usr/include/values.h" 1 3 4
/* Old compatibility names for <limits.h> and <float.h> constants.
   Copyright (C) 1995-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This interface is obsolete.  New programs should use
   <limits.h> and/or <float.h> instead of <values.h>.  */
# 51 "/usr/include/values.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/float.h" 1 3 4
/*===---- float.h - Characteristics of floating point types ----------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */
# 17 "/usr/bin/../lib/clang/21/include/float.h" 3 4
/* If we're on MinGW, fall back to the system's float.h, which might have
 * additional definitions provided for Windows.
 * For more details see http://msdn.microsoft.com/en-us/library/y0ybw9fy.aspx
 *
 * Also fall back on AIX to allow additional definitions and
 * implementation-defined values.
 */
# 94 "/usr/bin/../lib/clang/21/include/float.h" 3 4
/* Characteristics of floating point types, C99 5.2.4.2.2 */
# 52 "/usr/include/values.h" 2 3 4
# 119 "all.c" 2
# 1 "/usr/include/wait.h" 1 3 4
# 1 "/usr/include/sys/wait.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	POSIX Standard: 3.2.1 Wait for Process Termination	<sys/wait.h>
 */
# 45 "/usr/include/sys/wait.h" 3 4
/* These macros could also be defined in <stdlib.h>.  */

/* This will define the `W*' macros for the flag
   bits to `waitpid', `wait3', and `wait4'.  */
# 1 "/usr/include/bits/waitflags.h" 1 3 4
/* Definitions of flag bits for `waitpid' et al.
   Copyright (C) 1992-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






/* Bits in the third argument to `waitpid'.  */



/* Bits in the fourth argument to `waitid'.  */
# 50 "/usr/include/sys/wait.h" 2 3 4

/* This will define all the `__W*' macros.  */
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
/* Definitions of status bits for `wait' et al.
   Copyright (C) 1992-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






/* Everything extant so far uses these same bits.  */


/* If WIFEXITED(STATUS), the low-order 8 bits of the status.  */


/* If WIFSIGNALED(STATUS), the terminating signal.  */


/* If WIFSTOPPED(STATUS), the signal that stopped the child.  */


/* Nonzero if STATUS indicates normal termination.  */


/* Nonzero if STATUS indicates termination by a signal.  */



/* Nonzero if STATUS indicates the child is stopped.  */


/* Nonzero if STATUS indicates the child continued after a stop.  We only
   define this if <bits/waitflags.h> provides the WCONTINUED flag bit.  */




/* Nonzero if STATUS indicates the child dumped core.  */


/* Macros for constructing status values.  */
# 53 "/usr/include/sys/wait.h" 2 3 4
# 72 "/usr/include/sys/wait.h" 3 4
/* The following values are used by the `waitid' function.  */





/* Wait for a child to die.  When one does, put its status in *STAT_LOC
   and return its process ID.  For errors, return (pid_t) -1.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern __pid_t wait (int *__stat_loc);







/* Wait for a child matching PID to die.
   If PID is greater than 0, match any process whose process ID is PID.
   If PID is (pid_t) -1, match any process.
   If PID is (pid_t) 0, match any process with the
   same process group as the current process.
   If PID is less than -1, match any process whose
   process group is the absolute value of PID.
   If the WNOHANG bit is set in OPTIONS, and that child
   is not already dead, return (pid_t) 0.  If successful,
   return PID and store the dead child's status in STAT_LOC.
   Return (pid_t) -1 for errors.  If the WUNTRACED bit is
   set in OPTIONS, return status for stopped children; otherwise don't.

   This function is a cancellation point and therefore not marked with
   __THROW.  */
extern __pid_t waitpid (__pid_t __pid, int *__stat_loc, int __options);
# 2 "/usr/include/wait.h" 2 3 4
# 120 "all.c" 2
# 1 "/usr/include/wchar.h" 1 3 4
/* Copyright (C) 1995-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *      ISO C99 Standard: 7.24
 *	Extended multibyte and wide character utilities	<wchar.h>
 */





# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
/* Handle feature test macros at the start of a header.
   Copyright (C) 2016-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* This header is internal to glibc and should not be included outside
   of glibc headers.  Headers including it must define
   __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION first.  This header
   cannot have multiple include guards because ISO C feature test
   macros depend on the definition of the macro when an affected
   header is included, not when the first system header is
   included.  */
# 35 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TR 24731-2:2010 defines the __STDC_WANT_LIB_EXT2__
   macro.  */
# 45 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-1:2014 defines the __STDC_WANT_IEC_60559_BFP_EXT__
   macro.  Most but not all symbols enabled by that macro in TS
   18661-1 are enabled unconditionally in C23.  In C23, the symbols in
   Annex F still require a new feature test macro
   __STDC_WANT_IEC_60559_EXT__ instead (C23 does not define
   __STDC_WANT_IEC_60559_BFP_EXT__), while a few features from TS
   18661-1 are not included in C23 (and thus should depend on
   __STDC_WANT_IEC_60559_BFP_EXT__ even when C23 features are
   enabled).

   __GLIBC_USE (IEC_60559_BFP_EXT) controls those features from TS
   18661-1 not included in C23.

   __GLIBC_USE (IEC_60559_BFP_EXT_C23) controls those features from TS
   18661-1 that are also included in C23 (with no feature test macro
   required in C23).

   __GLIBC_USE (IEC_60559_EXT) controls those features from TS 18661-1
   that are included in C23 but conditional on
   __STDC_WANT_IEC_60559_EXT__.  (There are currently no features
   conditional on __STDC_WANT_IEC_60559_EXT__ that are not in TS
   18661-1.)  */
# 86 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-4:2015 defines the
   __STDC_WANT_IEC_60559_FUNCS_EXT__ macro.  Other than the reduction
   functions, the symbols from this TS are enabled unconditionally in
   C23.  */
# 103 "/usr/include/bits/libc-header-start.h" 3 4
/* ISO/IEC TS 18661-3:2015 defines the
   __STDC_WANT_IEC_60559_TYPES_EXT__ macro.  */
# 28 "/usr/include/wchar.h" 2 3 4

/* Gather machine dependent type support.  */





# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 93 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_size_t.h" 1 3 4
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 94 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 103 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_wchar_t.h" 1 3 4
/*===---- __stddef_wchar.h - Definition of wchar_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */



/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 104 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4




# 1 "/usr/bin/../lib/clang/21/include/__stddef_null.h" 1 3 4
/*===---- __stddef_null.h - Definition of NULL -----------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */



/* linux/stddef.h will define NULL to 0. glibc (and other) headers then define
 * __need_NULL and rely on stddef.h to redefine NULL to the correct value again.
 * Modules don't support redefining macros like that, but support that pattern
 * in the non-modules case.
 */
# 109 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 36 "/usr/include/wchar.h" 2 3 4


# 1 "/usr/bin/../lib/clang/21/include/stdarg.h" 1 3 4
/*===---- stdarg.h - Variable argument handling ----------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stdarg.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 39 "/usr/include/wchar.h" 2 3 4
# 52 "/usr/include/wchar.h" 3 4
# 1 "/usr/include/bits/types/wint_t.h" 1 3 4



/* Some versions of stddef.h provide wint_t, even though neither the
   C nor C++ standards, nor POSIX, specifies this.  We assume that
   stddef.h will define the macro _WINT_T if and only if it provides
   wint_t, and conversely, that it will avoid providing wint_t if
   _WINT_T is already defined.  */



/* Integral type unchanged by default argument promotions that can
   hold any value corresponding to members of the extended character
   set, as well as at least one value that does not correspond to any
   member of the extended character set.  */




typedef unsigned int wint_t;
# 53 "/usr/include/wchar.h" 2 3 4
# 63 "/usr/include/wchar.h" 3 4
/* Tell the caller that we provide correct C++ prototypes.  */
# 78 "/usr/include/wchar.h" 3 4
/* All versions of XPG prior to the publication of ISO C99 required
   the bulk of <wctype.h>'s declarations to appear in this header
   (because <wctype.h> did not exist prior to C99).  In POSIX.1-2001
   those declarations were marked as XSI extensions; in -2008 they
   were additionally marked as obsolescent.  _GNU_SOURCE mode
   anticipates the removal of these declarations in the next revision
   of POSIX.  */







/* This incomplete type is defined in <time.h> but needed here because
   of `wcsftime'.  */
struct tm;


/* Copy SRC to DEST.  */
extern wchar_t *wcscpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src)
                               ;

/* Copy no more than N wide-characters of SRC to DEST.  */
extern wchar_t *wcsncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
                               ;
# 120 "/usr/include/wchar.h" 3 4
/* Append SRC onto DEST.  */
extern wchar_t *wcscat (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src)
                               ;
/* Append no more than N wide-characters of SRC onto DEST.  */
extern wchar_t *wcsncat (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
                               ;

/* Compare S1 and S2.  */
extern int wcscmp (const wchar_t *__s1, const wchar_t *__s2)
                                                  ;
/* Compare N wide-characters of S1 and S2.  */
extern int wcsncmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
                                                  ;
# 153 "/usr/include/wchar.h" 3 4
/* Compare S1 and S2, both interpreted as appropriate to the
   LC_COLLATE category of the current locale.  */
extern int wcscoll (const wchar_t *__s1, const wchar_t *__s2) ;
/* Transform S2 into array pointed to by S1 such that if wcscmp is
   applied to two transformed strings the result is the as applying
   `wcscoll' to the original strings.  */
extern size_t wcsxfrm (wchar_t *__restrict __s1,
         const wchar_t *__restrict __s2, size_t __n) ;
# 182 "/usr/include/wchar.h" 3 4
/* Find the first occurrence of WC in WCS.  */






extern wchar_t *wcschr (const wchar_t *__wcs, wchar_t __wc)
                               ;

/* Find the last occurrence of WC in WCS.  */






extern wchar_t *wcsrchr (const wchar_t *__wcs, wchar_t __wc)
                               ;
# 210 "/usr/include/wchar.h" 3 4
/* Return the length of the initial segmet of WCS which
   consists entirely of wide characters not in REJECT.  */
extern size_t wcscspn (const wchar_t *__wcs, const wchar_t *__reject)
                               ;
/* Return the length of the initial segmet of WCS which
   consists entirely of wide characters in  ACCEPT.  */
extern size_t wcsspn (const wchar_t *__wcs, const wchar_t *__accept)
                               ;
/* Find the first occurrence in WCS of any character in ACCEPT.  */







extern wchar_t *wcspbrk (const wchar_t *__wcs, const wchar_t *__accept)
                               ;

/* Find the first occurrence of NEEDLE in HAYSTACK.  */







extern wchar_t *wcsstr (const wchar_t *__haystack, const wchar_t *__needle)
                               ;


/* Divide WCS into tokens separated by characters in DELIM.  */
extern wchar_t *wcstok (wchar_t *__restrict __s,
   const wchar_t *__restrict __delim,
   wchar_t **__restrict __ptr) ;

/* Return the number of wide characters in S.  */
extern size_t wcslen (const wchar_t *__s) ;
# 270 "/usr/include/wchar.h" 3 4
/* Search N wide characters of S for C.  */







extern wchar_t *wmemchr (const wchar_t *__s, wchar_t __c, size_t __n)
                               ;


/* Compare N wide characters of S1 and S2.  */
extern int wmemcmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
                               ;

/* Copy N wide characters of SRC to DEST.  */
extern wchar_t *wmemcpy (wchar_t *__restrict __s1,
    const wchar_t *__restrict __s2, size_t __n) ;

/* Copy N wide characters of SRC to DEST, guaranteeing
   correct behavior for overlapping strings.  */
extern wchar_t *wmemmove (wchar_t *__s1, const wchar_t *__s2, size_t __n)
            ;

/* Set N wide characters of S to C.  */
extern wchar_t *wmemset (wchar_t *__s, wchar_t __c, size_t __n) ;
# 307 "/usr/include/wchar.h" 3 4
/* Determine whether C constitutes a valid (one-byte) multibyte
   character.  */
extern wint_t btowc (int __c) ;

/* Determine whether C corresponds to a member of the extended
   character set whose multibyte representation is a single byte.  */
extern int wctob (wint_t __c) ;

/* Determine whether PS points to an object representing the initial
   state.  */
extern int mbsinit (const mbstate_t *__ps) ;

/* Write wide character representation of multibyte character pointed
   to by S to PWC.  */
extern size_t mbrtowc (wchar_t *__restrict __pwc,
         const char *__restrict __s, size_t __n,
         mbstate_t *__restrict __p) ;

/* Write multibyte representation of wide character WC to S.  */
extern size_t wcrtomb (char *__restrict __s, wchar_t __wc,
         mbstate_t *__restrict __ps) ;

/* Return number of bytes in multibyte character pointed to by S.  */
extern size_t __mbrlen (const char *__restrict __s, size_t __n,
   mbstate_t *__restrict __ps) ;
extern size_t mbrlen (const char *__restrict __s, size_t __n,
        mbstate_t *__restrict __ps) ;
# 360 "/usr/include/wchar.h" 3 4
/* Write wide character representation of multibyte character string
   SRC to DST.  */
extern size_t mbsrtowcs (wchar_t *__restrict __dst,
    const char **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) ;

/* Write multibyte character representation of wide character string
   SRC to DST.  */
extern size_t wcsrtombs (char *__restrict __dst,
    const wchar_t **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) ;
# 389 "/usr/include/wchar.h" 3 4
/* The following functions are extensions found in X/Open CAE.  */
# 400 "/usr/include/wchar.h" 3 4
/* Convert initial portion of the wide string NPTR to `double'
   representation.  */
extern double wcstod (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr) ;


/* Likewise for `float' and `long double' sizes of floating-point numbers.  */
extern float wcstof (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) ;
extern long double wcstold (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) ;
# 453 "/usr/include/wchar.h" 3 4
/* Convert initial portion of wide string NPTR to `long int'
   representation.  */
extern long int wcstol (const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, int __base) ;

/* Convert initial portion of wide string NPTR to `unsigned long int'
   representation.  */
extern unsigned long int wcstoul (const wchar_t *__restrict __nptr,
      wchar_t **__restrict __endptr, int __base)
            ;


/* Convert initial portion of wide string NPTR to `long long int'
   representation.  */
__extension__
extern long long int wcstoll (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, int __base)
            ;

/* Convert initial portion of wide string NPTR to `unsigned long long int'
   representation.  */
__extension__
extern unsigned long long int wcstoull (const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr,
     int __base) ;
# 496 "/usr/include/wchar.h" 3 4
/* Versions of the above functions that handle '0b' and '0B' prefixes
   in base 0 or 2.  */
# 700 "/usr/include/wchar.h" 3 4
/* Wide character I/O functions.  */
# 724 "/usr/include/wchar.h" 3 4
/* Select orientation for stream.  */
extern int fwide (__FILE *__fp, int __mode) ;


/* Write formatted output to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fwprintf (__FILE *__restrict __stream,
       const wchar_t *__restrict __format, ...)
     /* __attribute__ ((__format__ (__wprintf__, 2, 3))) */;
/* Write formatted output to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int wprintf (const wchar_t *__restrict __format, ...)
     /* __attribute__ ((__format__ (__wprintf__, 1, 2))) */;
/* Write formatted output of at most N characters to S.  */
extern int swprintf (wchar_t *__restrict __s, size_t __n,
       const wchar_t *__restrict __format, ...)
             /* __attribute__ ((__format__ (__wprintf__, 3, 4))) */;

/* Write formatted output to S from argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfwprintf (__FILE *__restrict __s,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
     /* __attribute__ ((__format__ (__wprintf__, 2, 0))) */;
/* Write formatted output to stdout from argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vwprintf (const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
     /* __attribute__ ((__format__ (__wprintf__, 1, 0))) */;
/* Write formatted output of at most N character to S from argument
   list ARG.  */
extern int vswprintf (wchar_t *__restrict __s, size_t __n,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
             /* __attribute__ ((__format__ (__wprintf__, 3, 0))) */;


/* Read formatted input from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fwscanf (__FILE *__restrict __stream,
      const wchar_t *__restrict __format, ...)
     /* __attribute__ ((__format__ (__wscanf__, 2, 3))) */;
/* Read formatted input from stdin.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int wscanf (const wchar_t *__restrict __format, ...)
     /* __attribute__ ((__format__ (__wscanf__, 1, 2))) */;
/* Read formatted input from S.  */
extern int swscanf (const wchar_t *__restrict __s,
      const wchar_t *__restrict __format, ...)
             /* __attribute__ ((__format__ (__wscanf__, 2, 3))) */;

/* For historical reasons, the C99-compliant versions of the scanf
   functions are at alternative names.  When __LDBL_COMPAT or
   __LDOUBLE_REDIRECTS_TO_FLOAT128_ABI are in effect, this is handled in
   bits/wchar-ldbl.h.  */
# 819 "/usr/include/wchar.h" 3 4
extern int fwscanf (__FILE *__restrict __stream, const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_fwscanf")


     /* __attribute__ ((__format__ (__wscanf__, 2, 3))) */;
extern int wscanf (const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_wscanf")

     /* __attribute__ ((__format__ (__wscanf__, 1, 2))) */;
extern int swscanf (const wchar_t *__restrict __s, const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_swscanf")


     /* __attribute__ ((__format__ (__wscanf__, 2, 3))) */;
# 847 "/usr/include/wchar.h" 3 4
/* Read formatted input from S into argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vfwscanf (__FILE *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
     /* __attribute__ ((__format__ (__wscanf__, 2, 0))) */;
/* Read formatted input from stdin into argument list ARG.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int vwscanf (const wchar_t *__restrict __format,
      __gnuc_va_list __arg)
     /* __attribute__ ((__format__ (__wscanf__, 1, 0))) */;
/* Read formatted input from S into argument list ARG.  */
extern int vswscanf (const wchar_t *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
             /* __attribute__ ((__format__ (__wscanf__, 2, 0))) */;

/* Same redirection as above for the v*wscanf family.  */
# 901 "/usr/include/wchar.h" 3 4
extern int vfwscanf (__FILE *__restrict __s, const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfwscanf")


     /* __attribute__ ((__format__ (__wscanf__, 2, 0))) */;
extern int vwscanf (const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vwscanf")

     /* __attribute__ ((__format__ (__wscanf__, 1, 0))) */;
extern int vswscanf (const wchar_t *__restrict __s, const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vswscanf")


     /* __attribute__ ((__format__ (__wscanf__, 2, 0))) */;
# 931 "/usr/include/wchar.h" 3 4
/* Read a character from STREAM.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern wint_t fgetwc (__FILE *__stream);
extern wint_t getwc (__FILE *__stream);

/* Read a character from stdin.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern wint_t getwchar (void);


/* Write a character to STREAM.

   These functions are possible cancellation points and therefore not
   marked with __THROW.  */
extern wint_t fputwc (wchar_t __wc, __FILE *__stream);
extern wint_t putwc (wchar_t __wc, __FILE *__stream);

/* Write a character to stdout.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern wint_t putwchar (wchar_t __wc);


/* Get a newline-terminated wide character string of finite length
   from STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern wchar_t *fgetws (wchar_t *__restrict __ws, int __n,
   __FILE *__restrict __stream);

/* Write a string to STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern int fputws (const wchar_t *__restrict __ws,
     __FILE *__restrict __stream);


/* Push a character back onto the input buffer of STREAM.

   This function is a possible cancellation point and therefore not
   marked with __THROW.  */
extern wint_t ungetwc (wint_t __wc, __FILE *__stream);
# 1040 "/usr/include/wchar.h" 3 4
/* Format TP into S according to FORMAT.
   Write no more than MAXSIZE wide characters and return the number
   of wide characters written, or 0 if it would exceed MAXSIZE.  */
extern size_t wcsftime (wchar_t *__restrict __s, size_t __maxsize,
   const wchar_t *__restrict __format,
   const struct tm *__restrict __tp) ;
# 1056 "/usr/include/wchar.h" 3 4
/* Define some macros helping to catch buffer overflows.  */





/* The following headers provide asm redirections.  These redirections must
   appear before the first usage of these functions, e.g. in bits/wchar.h.  */
# 121 "all.c" 2
# 1 "/usr/include/wctype.h" 1 3 4
/* Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.25
 *	Wide character classification and mapping utilities  <wctype.h>
 */
# 30 "/usr/include/wctype.h" 3 4
/* Constant expression of type `wint_t' whose value does not correspond
   to any member of the extended character set.  */




/* Some definitions from this header also appear in <wchar.h> in
   Unix98 mode.  */
# 1 "/usr/include/bits/wctype-wchar.h" 1 3 4
/* Copyright (C) 1996-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/*
 *	ISO C99 Standard: 7.25
 *	Wide character classification and mapping utilities  <wctype.h>
 */
# 33 "/usr/include/bits/wctype-wchar.h" 3 4
/* The definitions in this header are specified to appear in <wctype.h>
   in ISO C99, but in <wchar.h> in Unix98.  _GNU_SOURCE follows C99.  */

/* Scalar type that can hold values which represent locale-specific
   character classifications.  */
typedef unsigned long int wctype_t;


/* The characteristics are stored always in network byte order (big
   endian).  We define the bit value interpretations here dependent on the
   machine's byte order.  */
# 56 "/usr/include/bits/wctype-wchar.h" 3 4
enum
{
  __ISwupper = 0, /* UPPERCASE.  */
  __ISwlower = 1, /* lowercase.  */
  __ISwalpha = 2, /* Alphabetic.  */
  __ISwdigit = 3, /* Numeric.  */
  __ISwxdigit = 4, /* Hexadecimal numeric.  */
  __ISwspace = 5, /* Whitespace.  */
  __ISwprint = 6, /* Printing.  */
  __ISwgraph = 7, /* Graphical.  */
  __ISwblank = 8, /* Blank (usually SPC and TAB).  */
  __ISwcntrl = 9, /* Control character.  */
  __ISwpunct = 10, /* Punctuation.  */
  __ISwalnum = 11, /* Alphanumeric.  */

  _ISwupper = ((__ISwupper) < 8 ? (int) ((1UL << (__ISwupper)) << 24) : ((__ISwupper) < 16 ? (int) ((1UL << (__ISwupper)) << 8) : ((__ISwupper) < 24 ? (int) ((1UL << (__ISwupper)) >> 8) : (int) ((1UL << (__ISwupper)) >> 24)))), /* UPPERCASE.  */
  _ISwlower = ((__ISwlower) < 8 ? (int) ((1UL << (__ISwlower)) << 24) : ((__ISwlower) < 16 ? (int) ((1UL << (__ISwlower)) << 8) : ((__ISwlower) < 24 ? (int) ((1UL << (__ISwlower)) >> 8) : (int) ((1UL << (__ISwlower)) >> 24)))), /* lowercase.  */
  _ISwalpha = ((__ISwalpha) < 8 ? (int) ((1UL << (__ISwalpha)) << 24) : ((__ISwalpha) < 16 ? (int) ((1UL << (__ISwalpha)) << 8) : ((__ISwalpha) < 24 ? (int) ((1UL << (__ISwalpha)) >> 8) : (int) ((1UL << (__ISwalpha)) >> 24)))), /* Alphabetic.  */
  _ISwdigit = ((__ISwdigit) < 8 ? (int) ((1UL << (__ISwdigit)) << 24) : ((__ISwdigit) < 16 ? (int) ((1UL << (__ISwdigit)) << 8) : ((__ISwdigit) < 24 ? (int) ((1UL << (__ISwdigit)) >> 8) : (int) ((1UL << (__ISwdigit)) >> 24)))), /* Numeric.  */
  _ISwxdigit = ((__ISwxdigit) < 8 ? (int) ((1UL << (__ISwxdigit)) << 24) : ((__ISwxdigit) < 16 ? (int) ((1UL << (__ISwxdigit)) << 8) : ((__ISwxdigit) < 24 ? (int) ((1UL << (__ISwxdigit)) >> 8) : (int) ((1UL << (__ISwxdigit)) >> 24)))), /* Hexadecimal numeric.  */
  _ISwspace = ((__ISwspace) < 8 ? (int) ((1UL << (__ISwspace)) << 24) : ((__ISwspace) < 16 ? (int) ((1UL << (__ISwspace)) << 8) : ((__ISwspace) < 24 ? (int) ((1UL << (__ISwspace)) >> 8) : (int) ((1UL << (__ISwspace)) >> 24)))), /* Whitespace.  */
  _ISwprint = ((__ISwprint) < 8 ? (int) ((1UL << (__ISwprint)) << 24) : ((__ISwprint) < 16 ? (int) ((1UL << (__ISwprint)) << 8) : ((__ISwprint) < 24 ? (int) ((1UL << (__ISwprint)) >> 8) : (int) ((1UL << (__ISwprint)) >> 24)))), /* Printing.  */
  _ISwgraph = ((__ISwgraph) < 8 ? (int) ((1UL << (__ISwgraph)) << 24) : ((__ISwgraph) < 16 ? (int) ((1UL << (__ISwgraph)) << 8) : ((__ISwgraph) < 24 ? (int) ((1UL << (__ISwgraph)) >> 8) : (int) ((1UL << (__ISwgraph)) >> 24)))), /* Graphical.  */
  _ISwblank = ((__ISwblank) < 8 ? (int) ((1UL << (__ISwblank)) << 24) : ((__ISwblank) < 16 ? (int) ((1UL << (__ISwblank)) << 8) : ((__ISwblank) < 24 ? (int) ((1UL << (__ISwblank)) >> 8) : (int) ((1UL << (__ISwblank)) >> 24)))), /* Blank (usually SPC and TAB).  */
  _ISwcntrl = ((__ISwcntrl) < 8 ? (int) ((1UL << (__ISwcntrl)) << 24) : ((__ISwcntrl) < 16 ? (int) ((1UL << (__ISwcntrl)) << 8) : ((__ISwcntrl) < 24 ? (int) ((1UL << (__ISwcntrl)) >> 8) : (int) ((1UL << (__ISwcntrl)) >> 24)))), /* Control character.  */
  _ISwpunct = ((__ISwpunct) < 8 ? (int) ((1UL << (__ISwpunct)) << 24) : ((__ISwpunct) < 16 ? (int) ((1UL << (__ISwpunct)) << 8) : ((__ISwpunct) < 24 ? (int) ((1UL << (__ISwpunct)) >> 8) : (int) ((1UL << (__ISwpunct)) >> 24)))), /* Punctuation.  */
  _ISwalnum = ((__ISwalnum) < 8 ? (int) ((1UL << (__ISwalnum)) << 24) : ((__ISwalnum) < 16 ? (int) ((1UL << (__ISwalnum)) << 8) : ((__ISwalnum) < 24 ? (int) ((1UL << (__ISwalnum)) >> 8) : (int) ((1UL << (__ISwalnum)) >> 24)))) /* Alphanumeric.  */
};





/*
 * Wide-character classification functions: 7.15.2.1.
 */

/* Test for any wide character for which `iswalpha' or `iswdigit' is
   true.  */
extern int iswalnum (wint_t __wc) ;

/* Test for any wide character for which `iswupper' or 'iswlower' is
   true, or any wide character that is one of a locale-specific set of
   wide-characters for which none of `iswcntrl', `iswdigit',
   `iswpunct', or `iswspace' is true.  */
extern int iswalpha (wint_t __wc) ;

/* Test for any control wide character.  */
extern int iswcntrl (wint_t __wc) ;

/* Test for any wide character that corresponds to a decimal-digit
   character.  */
extern int iswdigit (wint_t __wc) ;

/* Test for any wide character for which `iswprint' is true and
   `iswspace' is false.  */
extern int iswgraph (wint_t __wc) ;

/* Test for any wide character that corresponds to a lowercase letter
   or is one of a locale-specific set of wide characters for which
   none of `iswcntrl', `iswdigit', `iswpunct', or `iswspace' is true.  */
extern int iswlower (wint_t __wc) ;

/* Test for any printing wide character.  */
extern int iswprint (wint_t __wc) ;

/* Test for any printing wide character that is one of a
   locale-specific et of wide characters for which neither `iswspace'
   nor `iswalnum' is true.  */
extern int iswpunct (wint_t __wc) ;

/* Test for any wide character that corresponds to a locale-specific
   set of wide characters for which none of `iswalnum', `iswgraph', or
   `iswpunct' is true.  */
extern int iswspace (wint_t __wc) ;

/* Test for any wide character that corresponds to an uppercase letter
   or is one of a locale-specific set of wide character for which none
   of `iswcntrl', `iswdigit', `iswpunct', or `iswspace' is true.  */
extern int iswupper (wint_t __wc) ;

/* Test for any wide character that corresponds to a hexadecimal-digit
   character equivalent to that performed be the functions described
   in the previous subclause.  */
extern int iswxdigit (wint_t __wc) ;

/* Test for any wide character that corresponds to a standard blank
   wide character or a locale-specific set of wide characters for
   which `iswalnum' is false.  */

extern int iswblank (wint_t __wc) ;


/*
 * Extensible wide-character classification functions: 7.15.2.2.
 */

/* Construct value that describes a class of wide characters identified
   by the string argument PROPERTY.  */
extern wctype_t wctype (const char *__property) ;

/* Determine whether the wide-character WC has the property described by
   DESC.  */
extern int iswctype (wint_t __wc, wctype_t __desc) ;

/*
 * Wide-character case-mapping functions: 7.15.3.1.
 */

/* Converts an uppercase letter to the corresponding lowercase letter.  */
extern wint_t towlower (wint_t __wc) ;

/* Converts an lowercase letter to the corresponding uppercase letter.  */
extern wint_t towupper (wint_t __wc) ;
# 39 "/usr/include/wctype.h" 2 3 4

/*
 * Extensible wide-character mapping functions: 7.15.3.2.
 */



/* Scalar type that can hold values which represent locale-specific
   character mappings.  */
typedef const __int32_t *wctrans_t;

/* Construct value that describes a mapping between wide characters
   identified by the string argument PROPERTY.  */
extern wctrans_t wctrans (const char *__property) ;

/* Map the wide character WC using the mapping described by DESC.  */
extern wint_t towctrans (wint_t __wc, wctrans_t __desc) ;
# 122 "all.c" 2
# 1 "/usr/include/wordexp.h" 1 3 4
/* Copyright (C) 1991-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */






# 1 "/usr/bin/../lib/clang/21/include/stddef.h" 1 3 4
/*===---- stddef.h - Basic type definitions --------------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * This header is designed to be included multiple times. If any of the __need_
 * macros are defined, then only that subset of interfaces are provided. This
 * can be useful for POSIX headers that need to not expose all of stddef.h, but
 * need to use some of its interfaces. Otherwise this header provides all of
 * the expected interfaces.
 *
 * When clang modules are enabled, this header is a textual header to support
 * the multiple include behavior. As such, it doesn't directly declare anything
 * so that it doesn't add duplicate declarations to all of its includers'
 * modules.
 */
# 93 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
# 1 "/usr/bin/../lib/clang/21/include/__stddef_size_t.h" 1 3 4
/*===---- __stddef_size_t.h - Definition of size_t -------------------------===
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

/*
 * When -fbuiltin-headers-in-system-modules is set this is a non-modular header
 * and needs to behave as if it was textual.
 */
# 94 "/usr/bin/../lib/clang/21/include/stddef.h" 2 3 4
# 132 "/usr/bin/../lib/clang/21/include/stddef.h" 3 4
/* Some C libraries expect to see a wint_t here. Others (notably MinGW) will use
__WINT_TYPE__ directly; accommodate both by requiring __need_wint_t */
# 24 "/usr/include/wordexp.h" 2 3 4



/* Bits set in the FLAGS argument to `wordexp'.  */
enum
  {
    WRDE_DOOFFS = (1 << 0), /* Insert PWORDEXP->we_offs NULLs.  */
    WRDE_APPEND = (1 << 1), /* Append to results of a previous call.  */
    WRDE_NOCMD = (1 << 2), /* Don't do command substitution.  */
    WRDE_REUSE = (1 << 3), /* Reuse storage in PWORDEXP.  */
    WRDE_SHOWERR = (1 << 4), /* Don't redirect stderr to /dev/null.  */
    WRDE_UNDEF = (1 << 5), /* Error for expanding undefined variables.  */
    __WRDE_FLAGS = (WRDE_DOOFFS | WRDE_APPEND | WRDE_NOCMD
      | WRDE_REUSE | WRDE_SHOWERR | WRDE_UNDEF)
  };

/* Structure describing a word-expansion run.  */
typedef struct
  {
    size_t we_wordc; /* Count of words matched.  */
    char **we_wordv; /* List of expanded words.  */
    size_t we_offs; /* Slots to reserve in `we_wordv'.  */
  } wordexp_t;

/* Possible nonzero return values from `wordexp'.  */
enum
  {



    WRDE_NOSPACE = 1, /* Ran out of memory.  */
    WRDE_BADCHAR, /* A metachar appears in the wrong place.  */
    WRDE_BADVAL, /* Undefined var reference with WRDE_UNDEF.  */
    WRDE_CMDSUB, /* Command substitution with WRDE_NOCMD.  */
    WRDE_SYNTAX /* Shell syntax error.  */
  };

/* Do word expansion of WORDS into PWORDEXP.  */
extern int wordexp (const char *__restrict __words,
      wordexp_t *__restrict __pwordexp, int __flags);

/* Free the storage allocated by a `wordexp' call.  */
extern void wordfree (wordexp_t *__wordexp) ;
# 123 "all.c" 2
# 1 "/usr/include/fstab.h" 1 3 4
/*
 * Copyright (c) 1980, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)fstab.h	8.1 (Berkeley) 6/2/93
 */






/*
 * File system table, see fstab(5).
 *
 * Used by dump, mount, umount, swapon, fsck, df, ...
 *
 * For ufs fs_spec field is the block special name.  Programs that want to
 * use the character special name must create that name by prepending a 'r'
 * after the right most slash.  Quota files are always named "quotas", so
 * if type is "rq", then use concatenation of fs_file and "quotas" to locate
 * quota file.
 */
# 57 "/usr/include/fstab.h" 3 4
struct fstab
  {
    char *fs_spec; /* block special device name */
    char *fs_file; /* file system path prefix */
    char *fs_vfstype; /* File system type, ufs, nfs */
    char *fs_mntops; /* Mount options ala -o */
    const char *fs_type; /* FSTAB_* from fs_mntops */
    int fs_freq; /* dump frequency, in days */
    int fs_passno; /* pass number on parallel dump */
  };




extern struct fstab *getfsent (void) ;
extern struct fstab *getfsspec (const char *__name) ;
extern struct fstab *getfsfile (const char *__name) ;
extern int setfsent (void) ;
extern void endfsent (void) ;
# 124 "all.c" 2
# 1 "/usr/include/link.h" 1 3 4
/* Data structure for communication from the run-time dynamic linker for
   loaded ELF shared objects.
   Copyright (C) 1995-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 28 "/usr/include/link.h" 3 4
/* We use this macro to refer to ELF types independent of the native wordsize.
   `ElfW(TYPE)' is used in place of `Elf32_TYPE' or `Elf64_TYPE'.  */




# 1 "/usr/include/bits/elfclass.h" 1 3 4
/* This file specifies the native word size of the machine, which indicates
   the ELF file class used for executables and shared objects on this
   machine.  */





# 1 "/usr/include/bits/wordsize.h" 1 3 4
/* Determine the wordsize from the preprocessor defines.  */
# 14 "/usr/include/bits/wordsize.h" 3 4
/* Both x86-64 and x32 use the 64-bit system call interface.  */
# 10 "/usr/include/bits/elfclass.h" 2 3 4



/* The entries in the .hash table always have a size of 32 bits.  */
typedef uint32_t Elf_Symndx;
# 35 "/usr/include/link.h" 2 3 4
# 1 "/usr/include/bits/link.h" 1 3 4
/* Copyright (C) 2004-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
# 66 "/usr/include/bits/link.h" 3 4
/* Registers for entry into PLT on x86-64.  */







typedef float La_x86_64_xmm ;


typedef union
{




  La_x86_64_xmm xmm[4];
} La_x86_64_vector ;

typedef struct La_x86_64_regs
{
  uint64_t lr_rdx;
  uint64_t lr_r8;
  uint64_t lr_r9;
  uint64_t lr_rcx;
  uint64_t lr_rsi;
  uint64_t lr_rdi;
  uint64_t lr_rbp;
  uint64_t lr_rsp;
  La_x86_64_xmm lr_xmm[8];
  La_x86_64_vector lr_vector[8];

  __int128_t __glibc_unused1[4];

} La_x86_64_regs;

/* Return values for calls from PLT on x86-64.  */
typedef struct La_x86_64_retval
{
  uint64_t lrv_rax;
  uint64_t lrv_rdx;
  La_x86_64_xmm lrv_xmm0;
  La_x86_64_xmm lrv_xmm1;
  long double lrv_st0;
  long double lrv_st1;
  La_x86_64_vector lrv_vector0;
  La_x86_64_vector lrv_vector1;

  __int128_t __glibc_unused1;
  __int128_t __glibc_unused2;

} La_x86_64_retval;






extern Elf64_Addr la_x86_64_gnu_pltenter (Elf64_Sym *__sym,
       unsigned int __ndx,
       uintptr_t *__refcook,
       uintptr_t *__defcook,
       La_x86_64_regs *__regs,
       unsigned int *__flags,
       const char *__symname,
       long int *__framesizep);
extern unsigned int la_x86_64_gnu_pltexit (Elf64_Sym *__sym,
        unsigned int __ndx,
        uintptr_t *__refcook,
        uintptr_t *__defcook,
        const La_x86_64_regs *__inregs,
        La_x86_64_retval *__outregs,
        const char *__symname);

extern Elf32_Addr la_x32_gnu_pltenter (Elf32_Sym *__sym,
           unsigned int __ndx,
           uintptr_t *__refcook,
           uintptr_t *__defcook,
           La_x86_64_regs *__regs,
           unsigned int *__flags,
           const char *__symname,
           long int *__framesizep);
extern unsigned int la_x32_gnu_pltexit (Elf32_Sym *__sym,
     unsigned int __ndx,
     uintptr_t *__refcook,
     uintptr_t *__defcook,
     const La_x86_64_regs *__inregs,
     La_x86_64_retval *__outregs,
     const char *__symname);
# 36 "/usr/include/link.h" 2 3 4

/* The legacy rendezvous structure used by the run-time dynamic linker to
   communicate details of shared object loading to the debugger.  */

struct r_debug
  {
    /* Version number for this protocol.  It should be greater than 0.  */
    int r_version;

    struct link_map *r_map; /* Head of the chain of loaded objects.  */

    /* This is the address of a function internal to the run-time linker,
       that will always be called when the linker begins to map in a
       library or unmap it, and again when the mapping change is complete.
       The debugger can set a breakpoint at this address if it wants to
       notice shared object mapping changes.  */
    Elf64_Addr r_brk;
    enum
      {
 /* This state value describes the mapping change taking place when
	   the `r_brk' address is called.  */
 RT_CONSISTENT, /* Mapping change is complete.  */
 RT_ADD, /* Beginning to add a new object.  */
 RT_DELETE /* Beginning to remove an object mapping.  */
      } r_state;

    Elf64_Addr r_ldbase; /* Base address the linker is loaded at.  */
  };

/* This is the symbol of that structure provided by the dynamic linker.  */
extern struct r_debug _r_debug;

/* The extended rendezvous structure used by the run-time dynamic linker
   to communicate details of shared object loading to the debugger.  If
   the executable's dynamic section has a DT_DEBUG element, the run-time
   linker sets that element's value to the address where this structure
   can be found.  */

struct r_debug_extended
  {
    struct r_debug base;

    /* The following field is added by r_version == 2.  */

    /* Link to the next r_debug_extended structure.  Each r_debug_extended
       structure represents a different namespace.  The first
       r_debug_extended structure is for the default namespace.  */
    struct r_debug_extended *r_next;
  };

/* This symbol refers to the "dynamic structure" in the `.dynamic' section
   of whatever module refers to `_DYNAMIC'.  So, to find its own
   `struct r_debug_extended', a program could do:
     for (dyn = _DYNAMIC; dyn->d_tag != DT_NULL; ++dyn)
       if (dyn->d_tag == DT_DEBUG)
	 r_debug_extended = (struct r_debug_extended *) dyn->d_un.d_ptr;
 */
extern Elf64_Dyn _DYNAMIC[];

/* Structure describing a loaded shared object.  The `l_next' and `l_prev'
   members form a chain of all the shared objects loaded at startup.

   These data structures exist in space used by the run-time dynamic linker;
   modifying them may have disastrous results.  */

struct link_map
  {
    /* These first few members are part of the protocol with the debugger.
       This is the same format used in SVR4.  */

    Elf64_Addr l_addr; /* Difference between the address in the ELF
				   file and the addresses in memory.  */
    char *l_name; /* Absolute file name object was found in.  */
    Elf64_Dyn *l_ld; /* Dynamic section of the shared object.  */
    struct link_map *l_next, *l_prev; /* Chain of loaded objects.  */
  };
# 125 "all.c" 2

//#include <etip.h>
//#include <cursesapp.h>
//#include <cursesf.h>
//#include <cursesm.h>
//#include <cursesp.h>
//#include <cursesw.h>
//#include <cursslk.h>
