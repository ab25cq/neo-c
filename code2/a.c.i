# 1 "a.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 405 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "a.c" 2
puts(macro_value("__WORDSIZE"))

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
# 65 "a.c"
/* Registers for entry into PLT on x86-64.  */







typedef float La_x86_64_xmm __attribute__ ((__mode__ (__V4SF__)));


typedef union
{




  La_x86_64_xmm xmm[4];
} La_x86_64_vector __attribute__ ((__aligned__ (16)));

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




__BEGIN_DECLS

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

__END_DECLS
