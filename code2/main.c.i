#line 1 "main.c"
using C
{
extern char *strdup(const char *);
extern int vsnprintf(char *, unsigned long, const char *, __builtin_va_list);
extern int snprintf(char *, unsigned long, const char *, ...);

/* ccpp: libc typedefs */
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
typedef signed long long int __int64_t;
typedef unsigned long long int __uint64_t;
typedef long long int __quad_t;
typedef unsigned long long int __u_quad_t;
typedef unsigned long int __ino_t;
typedef __uint64_t __ino64_t;
typedef __int64_t __off64_t;
typedef __off64_t __loff_t;
typedef struct __fsid_t { int __val[2]; } __fsid_t;

#line 1 "/usr/include/assert.h"





















#line 33 "/usr/include/assert.h"

#line 1 "/usr/include/features.h"

















#line 20 "/usr/include/features.h"













































































































#line 158 "/usr/include/features.h"



#line 164 "/usr/include/features.h"








#line 177 "/usr/include/features.h"





#line 187 "/usr/include/features.h"


#line 190 "/usr/include/features.h"





#line 200 "/usr/include/features.h"


#line 207 "/usr/include/features.h"


#line 237 "/usr/include/features.h"



#line 244 "/usr/include/features.h"


#line 251 "/usr/include/features.h"


#line 258 "/usr/include/features.h"


#line 263 "/usr/include/features.h"


#line 268 "/usr/include/features.h"


#line 273 "/usr/include/features.h"

#line 286 "/usr/include/features.h"




#line 299 "/usr/include/features.h"

#line 313 "/usr/include/features.h"







#line 325 "/usr/include/features.h"

#line 329 "/usr/include/features.h"

#line 333 "/usr/include/features.h"

#line 337 "/usr/include/features.h"

#line 341 "/usr/include/features.h"

#line 349 "/usr/include/features.h"

#line 355 "/usr/include/features.h"

#line 381 "/usr/include/features.h"

#line 385 "/usr/include/features.h"

#line 389 "/usr/include/features.h"

#line 393 "/usr/include/features.h"

#line 1 "/usr/include/features-time64.h"



















#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 21 "/usr/include/features-time64.h"
#line 1 "/usr/include/bits/timesize.h"


















#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 20 "/usr/include/bits/timesize.h"

#line 25 "/usr/include/bits/timesize.h"
#line 22 "/usr/include/features-time64.h"

#line 39 "/usr/include/features-time64.h"
#line 395 "/usr/include/features.h"

#line 399 "/usr/include/features.h"

#line 403 "/usr/include/features.h"

#line 407 "/usr/include/features.h"

#line 411 "/usr/include/features.h"

#line 435 "/usr/include/features.h"





#line 445 "/usr/include/features.h"













#line 463 "/usr/include/features.h"






#line 474 "/usr/include/features.h"



#line 1 "/usr/include/stdc-predef.h"

















#line 20 "/usr/include/stdc-predef.h"
















#line 45 "/usr/include/stdc-predef.h"

#line 55 "/usr/include/stdc-predef.h"







#line 63 "/usr/include/stdc-predef.h"
#line 478 "/usr/include/features.h"







#line 487 "/usr/include/features.h"



#line 492 "/usr/include/features.h"

#line 494 "/usr/include/features.h"


#line 1 "/usr/include/sys/cdefs.h"


















#line 21 "/usr/include/sys/cdefs.h"


#line 26 "/usr/include/sys/cdefs.h"




#line 33 "/usr/include/sys/cdefs.h"


#line 37 "/usr/include/sys/cdefs.h"





#line 57 "/usr/include/sys/cdefs.h"

#line 59 "/usr/include/sys/cdefs.h"



#line 69 "/usr/include/sys/cdefs.h"






#line 97 "/usr/include/sys/cdefs.h"

#line 103 "/usr/include/sys/cdefs.h"

#line 118 "/usr/include/sys/cdefs.h"



#line 123 "/usr/include/sys/cdefs.h"




#line 129 "/usr/include/sys/cdefs.h"


#line 132 "/usr/include/sys/cdefs.h"



#line 142 "/usr/include/sys/cdefs.h"



#line 150 "/usr/include/sys/cdefs.h"


#line 154 "/usr/include/sys/cdefs.h"


#line 163 "/usr/include/sys/cdefs.h"

#line 286 "/usr/include/sys/cdefs.h"

#line 294 "/usr/include/sys/cdefs.h"





#line 317 "/usr/include/sys/cdefs.h"












#line 330 "/usr/include/sys/cdefs.h"

#line 341 "/usr/include/sys/cdefs.h"

#line 345 "/usr/include/sys/cdefs.h"

#line 349 "/usr/include/sys/cdefs.h"






#line 356 "/usr/include/sys/cdefs.h"




#line 363 "/usr/include/sys/cdefs.h"




#line 372 "/usr/include/sys/cdefs.h"



#line 380 "/usr/include/sys/cdefs.h"



#line 388 "/usr/include/sys/cdefs.h"




#line 397 "/usr/include/sys/cdefs.h"


#line 404 "/usr/include/sys/cdefs.h"

#line 410 "/usr/include/sys/cdefs.h"




#line 421 "/usr/include/sys/cdefs.h"


#line 428 "/usr/include/sys/cdefs.h"




#line 437 "/usr/include/sys/cdefs.h"







#line 449 "/usr/include/sys/cdefs.h"





#line 459 "/usr/include/sys/cdefs.h"





#line 474 "/usr/include/sys/cdefs.h"



#line 484 "/usr/include/sys/cdefs.h"



#line 498 "/usr/include/sys/cdefs.h"


#line 501 "/usr/include/sys/cdefs.h"



#line 510 "/usr/include/sys/cdefs.h"



#line 518 "/usr/include/sys/cdefs.h"










#line 537 "/usr/include/sys/cdefs.h"

#line 541 "/usr/include/sys/cdefs.h"



#line 548 "/usr/include/sys/cdefs.h"





#line 556 "/usr/include/sys/cdefs.h"




#line 567 "/usr/include/sys/cdefs.h"





#line 586 "/usr/include/sys/cdefs.h"

#line 594 "/usr/include/sys/cdefs.h"

#line 602 "/usr/include/sys/cdefs.h"

#line 611 "/usr/include/sys/cdefs.h"


#line 621 "/usr/include/sys/cdefs.h"

#line 625 "/usr/include/sys/cdefs.h"



#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 630 "/usr/include/sys/cdefs.h"
#line 1 "/usr/include/bits/long-double.h"



















#line 631 "/usr/include/sys/cdefs.h"
#line 632 "/usr/include/sys/cdefs.h"

#line 683 "/usr/include/sys/cdefs.h"






#line 695 "/usr/include/sys/cdefs.h"








#line 708 "/usr/include/sys/cdefs.h"

#line 735 "/usr/include/sys/cdefs.h"

#line 745 "/usr/include/sys/cdefs.h"



#line 753 "/usr/include/sys/cdefs.h"




#line 762 "/usr/include/sys/cdefs.h"
#line 499 "/usr/include/features.h"
#line 500 "/usr/include/features.h"



#line 507 "/usr/include/features.h"

#line 509 "/usr/include/features.h"


#line 514 "/usr/include/features.h"






#line 1 "/usr/include/gnu/stubs.h"





#line 1 "/usr/include/gnu/stubs-64.h"





#line 9 "/usr/include/gnu/stubs-64.h"
#line 11 "/usr/include/gnu/stubs.h"
#line 521 "/usr/include/features.h"

#line 36 "/usr/include/assert.h"

#line 42 "/usr/include/assert.h"






#line 63 "/usr/include/assert.h"




extern void __assert_fail (const char *__assertion, const char *__file,
			   unsigned int __line, const char *__function)
      __attribute__ ((__noreturn__)) ;


extern void __assert_perror_fail (int __errnum, const char *__file,
				  unsigned int __line, const char *__function)
      __attribute__ ((__noreturn__)) ;




extern void __assert (const char *__assertion, const char *__file, int __line)
      __attribute__ ((__noreturn__)) ;







#line 103 "/usr/include/assert.h"





#line 110 "/usr/include/assert.h"

#line 114 "/usr/include/assert.h"






#line 129 "/usr/include/assert.h"

#line 131 "/usr/include/assert.h"

#line 4 "main.c"
#line 1 "/usr/include/ctype.h"





















#line 24 "/usr/include/ctype.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/ctype.h"
#line 1 "/usr/include/bits/types.h"






















#line 25 "/usr/include/bits/types.h"

#line 1 "/usr/include/features.h"
















#line 27 "/usr/include/bits/types.h"
#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 28 "/usr/include/bits/types.h"
#line 1 "/usr/include/bits/timesize.h"


















#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 20 "/usr/include/bits/timesize.h"

#line 25 "/usr/include/bits/timesize.h"
#line 29 "/usr/include/bits/types.h"


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
#line 44 "/usr/include/bits/types.h"
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
#line 50 "/usr/include/bits/types.h"


typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;


#line 63 "/usr/include/bits/types.h"
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#line 69 "/usr/include/bits/types.h"


#line 72 "/usr/include/bits/types.h"
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
#line 78 "/usr/include/bits/types.h"































#line 136 "/usr/include/bits/types.h"

#line 1 "/usr/include/bits/typesizes.h"


















#line 22 "/usr/include/bits/typesizes.h"

#line 25 "/usr/include/bits/typesizes.h"





#line 37 "/usr/include/bits/typesizes.h"

#line 76 "/usr/include/bits/typesizes.h"

#line 78 "/usr/include/bits/typesizes.h"



#line 82 "/usr/include/bits/typesizes.h"


#line 85 "/usr/include/bits/typesizes.h"


#line 88 "/usr/include/bits/typesizes.h"


#line 91 "/usr/include/bits/typesizes.h"


#line 101 "/usr/include/bits/typesizes.h"


#line 104 "/usr/include/bits/typesizes.h"

#line 142 "/usr/include/bits/types.h"
#line 1 "/usr/include/bits/time64.h"


















#line 22 "/usr/include/bits/time64.h"

#line 25 "/usr/include/bits/time64.h"



#line 29 "/usr/include/bits/time64.h"

#line 35 "/usr/include/bits/time64.h"
#line 143 "/usr/include/bits/types.h"


typedef unsigned long int __dev_t;	
typedef unsigned int __uid_t;	
typedef unsigned int __gid_t;	
typedef unsigned long int __ino_t;	
typedef unsigned long int __ino64_t;	
typedef unsigned int __mode_t;	
typedef unsigned long int __nlink_t;	
typedef long int __off_t;	
typedef long int __off64_t;	
typedef int __pid_t;	
typedef struct __fsid_t { int __val[2]; } __fsid_t;	
typedef long int __clock_t;	
typedef unsigned long int __rlim_t;	
typedef unsigned long int __rlim64_t;	
typedef unsigned int __id_t;		
typedef long int __time_t;	
typedef unsigned int __useconds_t; 
typedef long int __suseconds_t; 
typedef long int __suseconds64_t;

typedef int __daddr_t;	
typedef int __key_t;	


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t; 


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;	
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;




#line 225 "/usr/include/bits/types.h"

#line 227 "/usr/include/bits/types.h"
#line 27 "/usr/include/ctype.h"



#line 31 "/usr/include/ctype.h"








#line 1 "/usr/include/bits/endian.h"


















#line 21 "/usr/include/bits/endian.h"









#line 33 "/usr/include/bits/endian.h"


#line 1 "/usr/include/bits/endianness.h"
#line 3 "/usr/include/bits/endianness.h"

#line 7 "/usr/include/bits/endianness.h"


#line 10 "/usr/include/bits/endianness.h"
#line 36 "/usr/include/bits/endian.h"



#line 42 "/usr/include/bits/endian.h"

#line 48 "/usr/include/bits/endian.h"
#line 40 "/usr/include/ctype.h"
#line 45 "/usr/include/ctype.h"

enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),	
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),	
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),	
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),	
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),	
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),	
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),	
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),	
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),	
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),	
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),	
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))	
};
#line 62 "/usr/include/ctype.h"

















extern const unsigned short int **__ctype_b_loc (void)
      __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
      __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
      __attribute__ ((__const__));


#line 92 "/usr/include/ctype.h"

#line 95 "/usr/include/ctype.h"

#line 97 "/usr/include/ctype.h"





extern int isalnum (int) ;
extern int isalpha (int) ;
extern int iscntrl (int) ;
extern int isdigit (int) ;
extern int islower (int) ;
extern int isgraph (int) ;
extern int isprint (int) ;
extern int ispunct (int) ;
extern int isspace (int) ;
extern int isupper (int) ;
extern int isxdigit (int) ;



extern int tolower (int __c) ;


extern int toupper (int __c) ;



#line 124 "/usr/include/ctype.h"
extern int isblank (int) ;
#line 126 "/usr/include/ctype.h"

#line 128 "/usr/include/ctype.h"

extern int isctype (int __c, int __mask) ;
#line 131 "/usr/include/ctype.h"

#line 133 "/usr/include/ctype.h"



extern int isascii (int __c) ;



extern int toascii (int __c) ;



extern int _toupper (int) ;
extern int _tolower (int) ;
#line 147 "/usr/include/ctype.h"


#line 150 "/usr/include/ctype.h"

#line 183 "/usr/include/ctype.h"

#line 197 "/usr/include/ctype.h"

#line 202 "/usr/include/ctype.h"

#line 206 "/usr/include/ctype.h"

#line 210 "/usr/include/ctype.h"

#line 212 "/usr/include/ctype.h"


#line 215 "/usr/include/ctype.h"

#line 1 "/usr/include/bits/types/locale_t.h"


















#line 21 "/usr/include/bits/types/locale_t.h"

#line 1 "/usr/include/bits/types/__locale_t.h"


















#line 21 "/usr/include/bits/types/__locale_t.h"






struct __locale_struct
{
  
  struct __locale_data *__locales[13]; 

  
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;

  
  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
#line 23 "/usr/include/bits/types/locale_t.h"

typedef __locale_t locale_t;
#line 217 "/usr/include/ctype.h"



#line 221 "/usr/include/ctype.h"

#line 223 "/usr/include/ctype.h"





extern int isalnum_l (int, locale_t) ;
extern int isalpha_l (int, locale_t) ;
extern int iscntrl_l (int, locale_t) ;
extern int isdigit_l (int, locale_t) ;
extern int islower_l (int, locale_t) ;
extern int isgraph_l (int, locale_t) ;
extern int isprint_l (int, locale_t) ;
extern int ispunct_l (int, locale_t) ;
extern int isspace_l (int, locale_t) ;
extern int isupper_l (int, locale_t) ;
extern int isxdigit_l (int, locale_t) ;

extern int isblank_l (int, locale_t) ;



extern int __tolower_l (int __c, locale_t __l) ;
extern int tolower_l (int __c, locale_t __l) ;


extern int __toupper_l (int __c, locale_t __l) ;
extern int toupper_l (int __c, locale_t __l) ;

#line 257 "/usr/include/ctype.h"


#line 271 "/usr/include/ctype.h"

#line 273 "/usr/include/ctype.h"

#line 278 "/usr/include/ctype.h"

#line 290 "/usr/include/ctype.h"

#line 292 "/usr/include/ctype.h"

#line 297 "/usr/include/ctype.h"

#line 299 "/usr/include/ctype.h"

#line 301 "/usr/include/ctype.h"


#line 5 "main.c"
#line 1 "/usr/include/errno.h"





















#line 24 "/usr/include/errno.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/errno.h"


#line 1 "/usr/include/bits/errno.h"


















#line 21 "/usr/include/bits/errno.h"

#line 25 "/usr/include/bits/errno.h"

#line 1 "/usr/include/linux/errno.h"
#line 1 "/usr/include/asm/errno.h"
#line 1 "/usr/include/asm-generic/errno.h"

#line 4 "/usr/include/asm-generic/errno.h"

#line 1 "/usr/include/asm-generic/errno-base.h"

#line 4 "/usr/include/asm-generic/errno-base.h"

#line 39 "/usr/include/asm-generic/errno-base.h"
#line 6 "/usr/include/asm-generic/errno.h"

#line 10 "/usr/include/asm-generic/errno.h"








#line 19 "/usr/include/asm-generic/errno.h"

#line 39 "/usr/include/asm-generic/errno.h"

#line 41 "/usr/include/asm-generic/errno.h"

#line 106 "/usr/include/asm-generic/errno.h"

#line 114 "/usr/include/asm-generic/errno.h"


#line 118 "/usr/include/asm-generic/errno.h"

#line 120 "/usr/include/asm-generic/errno.h"

#line 122 "/usr/include/asm-generic/errno.h"
#line 2 "/usr/include/asm/errno.h"
#line 2 "/usr/include/linux/errno.h"
#line 27 "/usr/include/bits/errno.h"


#line 32 "/usr/include/bits/errno.h"

#line 36 "/usr/include/bits/errno.h"

#line 40 "/usr/include/bits/errno.h"

#line 44 "/usr/include/bits/errno.h"

#line 48 "/usr/include/bits/errno.h"

#line 52 "/usr/include/bits/errno.h"
#line 29 "/usr/include/errno.h"



#line 33 "/usr/include/errno.h"




extern int *__errno_location (void)  __attribute__ ((__const__));
#line 39 "/usr/include/errno.h"

#line 41 "/usr/include/errno.h"




extern char *program_invocation_name;
extern char *program_invocation_short_name;

#line 1 "/usr/include/bits/types/error_t.h"


















#line 21 "/usr/include/bits/types/error_t.h"

typedef int error_t;
#line 49 "/usr/include/errno.h"

#line 51 "/usr/include/errno.h"


#line 6 "main.c"
#line 1 "/usr/lib/clang/21/include/float.h"









#line 12 "/usr/lib/clang/21/include/float.h"

#line 16 "/usr/lib/clang/21/include/float.h"








#line 79 "/usr/lib/clang/21/include/float.h"

#line 84 "/usr/lib/clang/21/include/float.h"



#line 92 "/usr/lib/clang/21/include/float.h"

#line 96 "/usr/lib/clang/21/include/float.h"

#line 100 "/usr/lib/clang/21/include/float.h"

#line 104 "/usr/lib/clang/21/include/float.h"

#line 108 "/usr/lib/clang/21/include/float.h"

#line 112 "/usr/lib/clang/21/include/float.h"

#line 116 "/usr/lib/clang/21/include/float.h"

#line 120 "/usr/lib/clang/21/include/float.h"

#line 124 "/usr/lib/clang/21/include/float.h"

#line 128 "/usr/lib/clang/21/include/float.h"

#line 132 "/usr/lib/clang/21/include/float.h"

#line 144 "/usr/lib/clang/21/include/float.h"

#line 146 "/usr/lib/clang/21/include/float.h"
   
#line 149 "/usr/lib/clang/21/include/float.h"
   
#line 154 "/usr/lib/clang/21/include/float.h"

#line 168 "/usr/lib/clang/21/include/float.h"
#line 7 "main.c"
#line 1 "/usr/include/inttypes.h"





















#line 24 "/usr/include/inttypes.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/inttypes.h"

#line 1 "/usr/include/stdint.h"





















#line 24 "/usr/include/stdint.h"

#line 1 "/usr/include/bits/libc-header-start.h"


























#line 30 "/usr/include/bits/libc-header-start.h"

#line 32 "/usr/include/bits/libc-header-start.h"

#line 1 "/usr/include/features.h"
















#line 34 "/usr/include/bits/libc-header-start.h"



#line 43 "/usr/include/bits/libc-header-start.h"























#line 84 "/usr/include/bits/libc-header-start.h"





#line 101 "/usr/include/bits/libc-header-start.h"


#line 27 "/usr/include/stdint.h"
#line 1 "/usr/include/bits/types.h"





















#line 28 "/usr/include/stdint.h"
#line 1 "/usr/include/bits/wchar.h"


















#line 21 "/usr/include/bits/wchar.h"












#line 40 "/usr/include/bits/wchar.h"

#line 48 "/usr/include/bits/wchar.h"
#line 29 "/usr/include/stdint.h"
#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 30 "/usr/include/stdint.h"




#line 1 "/usr/include/bits/stdint-intn.h"


















#line 21 "/usr/include/bits/stdint-intn.h"

#line 1 "/usr/include/bits/types.h"





















#line 23 "/usr/include/bits/stdint-intn.h"

typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
#line 35 "/usr/include/stdint.h"


#line 1 "/usr/include/bits/stdint-uintn.h"


















#line 21 "/usr/include/bits/stdint-uintn.h"

#line 1 "/usr/include/bits/types.h"





















#line 23 "/usr/include/bits/stdint-uintn.h"

typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
#line 38 "/usr/include/stdint.h"



#line 1 "/usr/include/bits/stdint-least.h"


















#line 21 "/usr/include/bits/stdint-least.h"

#line 1 "/usr/include/bits/types.h"





















#line 23 "/usr/include/bits/stdint-least.h"


typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
#line 42 "/usr/include/stdint.h"





typedef signed char		int_fast8_t;
#line 49 "/usr/include/stdint.h"
typedef long int		int_fast16_t;
typedef long int		int_fast32_t;
typedef long int		int_fast64_t;
#line 58 "/usr/include/stdint.h"


typedef unsigned char		uint_fast8_t;
#line 62 "/usr/include/stdint.h"
typedef unsigned long int	uint_fast16_t;
typedef unsigned long int	uint_fast32_t;
typedef unsigned long int	uint_fast64_t;
#line 71 "/usr/include/stdint.h"



#line 76 "/usr/include/stdint.h"
typedef long int		intptr_t;
#line 79 "/usr/include/stdint.h"
typedef unsigned long int	uintptr_t;
#line 87 "/usr/include/stdint.h"



typedef __intmax_t		intmax_t;
typedef __uintmax_t		uintmax_t;


#line 101 "/usr/include/stdint.h"




#line 109 "/usr/include/stdint.h"

#line 114 "/usr/include/stdint.h"


#line 120 "/usr/include/stdint.h"



#line 127 "/usr/include/stdint.h"

#line 132 "/usr/include/stdint.h"


#line 138 "/usr/include/stdint.h"



#line 150 "/usr/include/stdint.h"

#line 160 "/usr/include/stdint.h"


#line 171 "/usr/include/stdint.h"



#line 183 "/usr/include/stdint.h"



#line 187 "/usr/include/stdint.h"

#line 189 "/usr/include/stdint.h"


#line 192 "/usr/include/stdint.h"





#line 209 "/usr/include/stdint.h"


#line 213 "/usr/include/stdint.h"


#line 224 "/usr/include/stdint.h"


#line 227 "/usr/include/stdint.h"

#line 231 "/usr/include/stdint.h"


#line 235 "/usr/include/stdint.h"


#line 245 "/usr/include/stdint.h"


#line 255 "/usr/include/stdint.h"


#line 264 "/usr/include/stdint.h"

#line 266 "/usr/include/stdint.h"

#line 275 "/usr/include/stdint.h"

#line 284 "/usr/include/stdint.h"

#line 293 "/usr/include/stdint.h"

#line 296 "/usr/include/stdint.h"

#line 299 "/usr/include/stdint.h"

#line 305 "/usr/include/stdint.h"

#line 307 "/usr/include/stdint.h"
#line 28 "/usr/include/inttypes.h"


#line 34 "/usr/include/inttypes.h"
typedef int wchar_t;
#line 42 "/usr/include/inttypes.h"

#line 50 "/usr/include/inttypes.h"




#line 58 "/usr/include/inttypes.h"

#line 63 "/usr/include/inttypes.h"

#line 68 "/usr/include/inttypes.h"


#line 74 "/usr/include/inttypes.h"

#line 79 "/usr/include/inttypes.h"

#line 84 "/usr/include/inttypes.h"


#line 90 "/usr/include/inttypes.h"

#line 95 "/usr/include/inttypes.h"

#line 100 "/usr/include/inttypes.h"


#line 106 "/usr/include/inttypes.h"

#line 111 "/usr/include/inttypes.h"

#line 116 "/usr/include/inttypes.h"


#line 122 "/usr/include/inttypes.h"

#line 127 "/usr/include/inttypes.h"

#line 132 "/usr/include/inttypes.h"


#line 138 "/usr/include/inttypes.h"

#line 143 "/usr/include/inttypes.h"

#line 148 "/usr/include/inttypes.h"



#line 157 "/usr/include/inttypes.h"



#line 166 "/usr/include/inttypes.h"


#line 173 "/usr/include/inttypes.h"

#line 178 "/usr/include/inttypes.h"

#line 183 "/usr/include/inttypes.h"

#line 186 "/usr/include/inttypes.h"

#line 191 "/usr/include/inttypes.h"

#line 196 "/usr/include/inttypes.h"

#line 201 "/usr/include/inttypes.h"

#line 205 "/usr/include/inttypes.h"





#line 214 "/usr/include/inttypes.h"

#line 219 "/usr/include/inttypes.h"

#line 224 "/usr/include/inttypes.h"


#line 230 "/usr/include/inttypes.h"

#line 235 "/usr/include/inttypes.h"

#line 240 "/usr/include/inttypes.h"


#line 246 "/usr/include/inttypes.h"

#line 251 "/usr/include/inttypes.h"

#line 256 "/usr/include/inttypes.h"


#line 262 "/usr/include/inttypes.h"

#line 267 "/usr/include/inttypes.h"

#line 272 "/usr/include/inttypes.h"


#line 278 "/usr/include/inttypes.h"

#line 283 "/usr/include/inttypes.h"

#line 288 "/usr/include/inttypes.h"



#line 296 "/usr/include/inttypes.h"


#line 303 "/usr/include/inttypes.h"



#line 311 "/usr/include/inttypes.h"

#line 316 "/usr/include/inttypes.h"

#line 321 "/usr/include/inttypes.h"

#line 325 "/usr/include/inttypes.h"




#line 330 "/usr/include/inttypes.h"


typedef struct
  {
    long int quot;		
    long int rem;		
  } imaxdiv_t;

#line 348 "/usr/include/inttypes.h"



extern intmax_t imaxabs (intmax_t __n)  __attribute__ ((__const__));


#line 355 "/usr/include/inttypes.h"
extern uintmax_t uimaxabs (intmax_t __n)  __attribute__ ((__const__));
#line 357 "/usr/include/inttypes.h"


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
       __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
			   char **__restrict __endptr, int __base) ;


extern uintmax_t strtoumax (const char *__restrict __nptr,
			    char ** __restrict __endptr, int __base) ;


extern intmax_t wcstoimax (const wchar_t *__restrict __nptr,
			   wchar_t **__restrict __endptr, int __base)
     ;


extern uintmax_t wcstoumax (const wchar_t *__restrict __nptr,
			    wchar_t ** __restrict __endptr, int __base)
     ;



#line 399 "/usr/include/inttypes.h"
extern intmax_t __isoc23_strtoimax (const char *__restrict __nptr,
				    char **__restrict __endptr, int __base)
     ;
extern uintmax_t __isoc23_strtoumax (const char *__restrict __nptr,
				     char ** __restrict __endptr, int __base)
     ;
extern intmax_t __isoc23_wcstoimax (const wchar_t *__restrict __nptr,
				    wchar_t **__restrict __endptr,
				    int __base)
     ;
extern uintmax_t __isoc23_wcstoumax (const wchar_t *__restrict __nptr,
				     wchar_t ** __restrict __endptr,
				     int __base)
     ;
#line 419 "/usr/include/inttypes.h"


#line 8 "main.c"
#line 1 "/usr/include/limits.h"





















#line 24 "/usr/include/limits.h"

#line 1 "/usr/include/bits/libc-header-start.h"


























#line 30 "/usr/include/bits/libc-header-start.h"

#line 32 "/usr/include/bits/libc-header-start.h"

#line 1 "/usr/include/features.h"
















#line 34 "/usr/include/bits/libc-header-start.h"



#line 43 "/usr/include/bits/libc-header-start.h"























#line 84 "/usr/include/bits/libc-header-start.h"





#line 101 "/usr/include/bits/libc-header-start.h"


#line 27 "/usr/include/limits.h"





#line 33 "/usr/include/limits.h"




#line 114 "/usr/include/limits.h"

#line 116 "/usr/include/limits.h"

 




#line 123 "/usr/include/limits.h"

#line 1 "/usr/lib/clang/21/include/limits.h"







#line 10 "/usr/lib/clang/21/include/limits.h"

#line 14 "/usr/lib/clang/21/include/limits.h"



#line 20 "/usr/lib/clang/21/include/limits.h"



#line 26 "/usr/lib/clang/21/include/limits.h"



#line 41 "/usr/lib/clang/21/include/limits.h"

#line 45 "/usr/lib/clang/21/include/limits.h"


#line 51 "/usr/lib/clang/21/include/limits.h"

#line 56 "/usr/lib/clang/21/include/limits.h"

#line 65 "/usr/lib/clang/21/include/limits.h"

#line 69 "/usr/lib/clang/21/include/limits.h"

#line 71 "/usr/lib/clang/21/include/limits.h"


#line 89 "/usr/lib/clang/21/include/limits.h"

#line 97 "/usr/lib/clang/21/include/limits.h"




#line 102 "/usr/lib/clang/21/include/limits.h"

#line 106 "/usr/lib/clang/21/include/limits.h"

#line 111 "/usr/lib/clang/21/include/limits.h"






#line 118 "/usr/lib/clang/21/include/limits.h"

#line 122 "/usr/lib/clang/21/include/limits.h"

#line 127 "/usr/lib/clang/21/include/limits.h"
#line 125 "/usr/include/limits.h"
#line 126 "/usr/include/limits.h"




#line 141 "/usr/include/limits.h"




#line 180 "/usr/include/limits.h"




#line 192 "/usr/include/limits.h"

#line 194 "/usr/include/limits.h"

#line 1 "/usr/include/bits/posix1_lim.h"























#line 26 "/usr/include/bits/posix1_lim.h"

#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 28 "/usr/include/bits/posix1_lim.h"




#line 33 "/usr/include/bits/posix1_lim.h"


#line 36 "/usr/include/bits/posix1_lim.h"


#line 39 "/usr/include/bits/posix1_lim.h"


#line 46 "/usr/include/bits/posix1_lim.h"


#line 49 "/usr/include/bits/posix1_lim.h"



#line 53 "/usr/include/bits/posix1_lim.h"


#line 56 "/usr/include/bits/posix1_lim.h"


#line 59 "/usr/include/bits/posix1_lim.h"


#line 62 "/usr/include/bits/posix1_lim.h"



#line 66 "/usr/include/bits/posix1_lim.h"


#line 69 "/usr/include/bits/posix1_lim.h"


#line 72 "/usr/include/bits/posix1_lim.h"


#line 75 "/usr/include/bits/posix1_lim.h"


#line 82 "/usr/include/bits/posix1_lim.h"


#line 89 "/usr/include/bits/posix1_lim.h"

#line 91 "/usr/include/bits/posix1_lim.h"


#line 95 "/usr/include/bits/posix1_lim.h"


#line 98 "/usr/include/bits/posix1_lim.h"


#line 101 "/usr/include/bits/posix1_lim.h"



#line 105 "/usr/include/bits/posix1_lim.h"


#line 108 "/usr/include/bits/posix1_lim.h"


#line 111 "/usr/include/bits/posix1_lim.h"


#line 114 "/usr/include/bits/posix1_lim.h"


#line 117 "/usr/include/bits/posix1_lim.h"


#line 120 "/usr/include/bits/posix1_lim.h"


#line 123 "/usr/include/bits/posix1_lim.h"


#line 126 "/usr/include/bits/posix1_lim.h"



#line 130 "/usr/include/bits/posix1_lim.h"


#line 133 "/usr/include/bits/posix1_lim.h"


#line 136 "/usr/include/bits/posix1_lim.h"


#line 143 "/usr/include/bits/posix1_lim.h"

#line 145 "/usr/include/bits/posix1_lim.h"

#line 147 "/usr/include/bits/posix1_lim.h"



#line 151 "/usr/include/bits/posix1_lim.h"


#line 155 "/usr/include/bits/posix1_lim.h"


#line 158 "/usr/include/bits/posix1_lim.h"



#line 1 "/usr/include/bits/local_lim.h"























#line 36 "/usr/include/bits/local_lim.h"


#line 1 "/usr/include/linux/limits.h"

#line 4 "/usr/include/linux/limits.h"

#line 6 "/usr/include/linux/limits.h"

#line 18 "/usr/include/linux/limits.h"

#line 20 "/usr/include/linux/limits.h"
#line 39 "/usr/include/bits/local_lim.h"


#line 45 "/usr/include/bits/local_lim.h"

#line 50 "/usr/include/bits/local_lim.h"

#line 55 "/usr/include/bits/local_lim.h"

#line 60 "/usr/include/bits/local_lim.h"


#line 63 "/usr/include/bits/local_lim.h"

#line 65 "/usr/include/bits/local_lim.h"


#line 68 "/usr/include/bits/local_lim.h"

#line 70 "/usr/include/bits/local_lim.h"


#line 73 "/usr/include/bits/local_lim.h"

#line 75 "/usr/include/bits/local_lim.h"



#line 79 "/usr/include/bits/local_lim.h"


#line 1 "/usr/include/bits/pthread_stack_min-dynamic.h"


















#line 23 "/usr/include/bits/pthread_stack_min-dynamic.h"

extern long int __sysconf (int __name) ;
#line 82 "/usr/include/bits/local_lim.h"


#line 85 "/usr/include/bits/local_lim.h"


#line 88 "/usr/include/bits/local_lim.h"


#line 91 "/usr/include/bits/local_lim.h"


#line 94 "/usr/include/bits/local_lim.h"


#line 97 "/usr/include/bits/local_lim.h"

#line 162 "/usr/include/bits/posix1_lim.h"


#line 165 "/usr/include/bits/posix1_lim.h"



#line 174 "/usr/include/bits/posix1_lim.h"





#line 182 "/usr/include/bits/posix1_lim.h"
#line 196 "/usr/include/limits.h"
#line 197 "/usr/include/limits.h"

#line 1 "/usr/include/bits/posix2_lim.h"





















#line 24 "/usr/include/bits/posix2_lim.h"



#line 28 "/usr/include/bits/posix2_lim.h"


#line 31 "/usr/include/bits/posix2_lim.h"


#line 34 "/usr/include/bits/posix2_lim.h"


#line 37 "/usr/include/bits/posix2_lim.h"



#line 41 "/usr/include/bits/posix2_lim.h"



#line 45 "/usr/include/bits/posix2_lim.h"


#line 48 "/usr/include/bits/posix2_lim.h"



#line 52 "/usr/include/bits/posix2_lim.h"



#line 56 "/usr/include/bits/posix2_lim.h"






#line 86 "/usr/include/bits/posix2_lim.h"


#line 89 "/usr/include/bits/posix2_lim.h"
#line 200 "/usr/include/limits.h"
#line 201 "/usr/include/limits.h"

#line 1 "/usr/include/bits/xopen_lim.h"




























#line 31 "/usr/include/bits/xopen_lim.h"































#line 63 "/usr/include/bits/xopen_lim.h"

#line 1 "/usr/include/bits/uio_lim.h"


















#line 21 "/usr/include/bits/uio_lim.h"









#line 31 "/usr/include/bits/uio_lim.h"
#line 65 "/usr/include/bits/xopen_lim.h"
#line 70 "/usr/include/bits/xopen_lim.h"



#line 74 "/usr/include/bits/xopen_lim.h"


#line 77 "/usr/include/bits/xopen_lim.h"


#line 80 "/usr/include/bits/xopen_lim.h"



#line 86 "/usr/include/bits/xopen_lim.h"


#line 89 "/usr/include/bits/xopen_lim.h"


#line 92 "/usr/include/bits/xopen_lim.h"


#line 95 "/usr/include/bits/xopen_lim.h"



#line 123 "/usr/include/bits/xopen_lim.h"


#line 129 "/usr/include/bits/xopen_lim.h"

#line 147 "/usr/include/bits/xopen_lim.h"
#line 204 "/usr/include/limits.h"
#line 9 "main.c"
#line 1 "/usr/include/locale.h"





















#line 24 "/usr/include/locale.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/locale.h"

#line 1 "/usr/lib/clang/21/include/stddef.h"





















#line 37 "/usr/lib/clang/21/include/stddef.h"

#line 80 "/usr/lib/clang/21/include/stddef.h"

#line 85 "/usr/lib/clang/21/include/stddef.h"

#line 90 "/usr/lib/clang/21/include/stddef.h"

#line 95 "/usr/lib/clang/21/include/stddef.h"

#line 100 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_null.h"









#line 11 "/usr/lib/clang/21/include/__stddef_null.h"






#line 18 "/usr/lib/clang/21/include/__stddef_null.h"

#line 28 "/usr/lib/clang/21/include/__stddef_null.h"
#line 103 "/usr/lib/clang/21/include/stddef.h"
#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 29 "/usr/include/locale.h"
#line 1 "/usr/include/bits/locale.h"


















#line 22 "/usr/include/bits/locale.h"

#line 25 "/usr/include/bits/locale.h"

#line 39 "/usr/include/bits/locale.h"
#line 30 "/usr/include/locale.h"





#line 48 "/usr/include/locale.h"



struct lconv
{
  

  char *decimal_point;		
  char *thousands_sep;		
  




  char *grouping;

  

  

  char *int_curr_symbol;
  char *currency_symbol;	
  char *mon_decimal_point;	
  char *mon_thousands_sep;	
  char *mon_grouping;		
  char *positive_sign;		
  char *negative_sign;		
  char int_frac_digits;		
  char frac_digits;		
  
  char p_cs_precedes;
  
  char p_sep_by_space;
  
  char n_cs_precedes;
  
  char n_sep_by_space;
  





  char p_sign_posn;
  char n_sign_posn;
#line 94 "/usr/include/locale.h"
  
  char int_p_cs_precedes;
  
  char int_p_sep_by_space;
  
  char int_n_cs_precedes;
  
  char int_n_sep_by_space;
  





  char int_p_sign_posn;
  char int_n_sign_posn;
#line 118 "/usr/include/locale.h"
};



extern char *setlocale (int __category, const char *__locale) ;


extern struct lconv *localeconv (void) ;


#line 129 "/usr/include/locale.h"






#line 1 "/usr/include/bits/types/locale_t.h"

















#line 136 "/usr/include/locale.h"





extern locale_t newlocale (int __category_mask, const char *__locale,
			   locale_t __base) ;





#line 161 "/usr/include/locale.h"



extern locale_t duplocale (locale_t __dataset) ;



extern void freelocale (locale_t __dataset) ;






extern locale_t uselocale (locale_t __dataset) ;



#line 180 "/usr/include/locale.h"

#line 182 "/usr/include/locale.h"


#line 10 "main.c"
#line 1 "/usr/include/math.h"






















#line 25 "/usr/include/math.h"

#line 1 "/usr/include/bits/libc-header-start.h"


























#line 30 "/usr/include/bits/libc-header-start.h"

#line 32 "/usr/include/bits/libc-header-start.h"

#line 1 "/usr/include/features.h"
















#line 34 "/usr/include/bits/libc-header-start.h"



#line 43 "/usr/include/bits/libc-header-start.h"























#line 84 "/usr/include/bits/libc-header-start.h"





#line 101 "/usr/include/bits/libc-header-start.h"


#line 28 "/usr/include/math.h"

#line 33 "/usr/include/math.h"




#line 1 "/usr/include/bits/types.h"





















#line 38 "/usr/include/math.h"


#line 1 "/usr/include/bits/math-vector.h"


















#line 22 "/usr/include/bits/math-vector.h"


#line 1 "/usr/include/bits/libm-simd-decl-stubs.h"


















#line 22 "/usr/include/bits/libm-simd-decl-stubs.h"









#line 33 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 44 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 55 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 66 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 77 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 88 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 99 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 110 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 121 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 132 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 143 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 154 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 165 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 176 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 187 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 198 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 209 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 220 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 231 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 242 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 253 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 264 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 275 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 286 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 297 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 308 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 319 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 330 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 341 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 352 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 363 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 374 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 385 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 396 "/usr/include/bits/libm-simd-decl-stubs.h"

#line 407 "/usr/include/bits/libm-simd-decl-stubs.h"
#line 25 "/usr/include/bits/math-vector.h"
#line 41 "/usr/include/math.h"


#line 1 "/usr/include/bits/floatn.h"


















#line 21 "/usr/include/bits/floatn.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/bits/floatn.h"








#line 36 "/usr/include/bits/floatn.h"



#line 44 "/usr/include/bits/floatn.h"




#line 49 "/usr/include/bits/floatn.h"





#line 55 "/usr/include/bits/floatn.h"

#line 57 "/usr/include/bits/floatn.h"



#line 68 "/usr/include/bits/floatn.h"


#line 80 "/usr/include/bits/floatn.h"


#line 117 "/usr/include/bits/floatn.h"

#line 119 "/usr/include/bits/floatn.h"

#line 1 "/usr/include/bits/floatn-common.h"



















#line 22 "/usr/include/bits/floatn-common.h"

#line 1 "/usr/include/features.h"
















#line 24 "/usr/include/bits/floatn-common.h"
#line 1 "/usr/include/bits/long-double.h"



















#line 25 "/usr/include/bits/floatn-common.h"









#line 39 "/usr/include/bits/floatn-common.h"













#line 58 "/usr/include/bits/floatn-common.h"





#line 64 "/usr/include/bits/floatn-common.h"




#line 73 "/usr/include/bits/floatn-common.h"

#line 75 "/usr/include/bits/floatn-common.h"




#line 87 "/usr/include/bits/floatn-common.h"

#line 95 "/usr/include/bits/floatn-common.h"

#line 107 "/usr/include/bits/floatn-common.h"

#line 115 "/usr/include/bits/floatn-common.h"

#line 127 "/usr/include/bits/floatn-common.h"

#line 135 "/usr/include/bits/floatn-common.h"


#line 145 "/usr/include/bits/floatn-common.h"

#line 153 "/usr/include/bits/floatn-common.h"

#line 165 "/usr/include/bits/floatn-common.h"

#line 173 "/usr/include/bits/floatn-common.h"

#line 185 "/usr/include/bits/floatn-common.h"

#line 193 "/usr/include/bits/floatn-common.h"


#line 209 "/usr/include/bits/floatn-common.h"

#line 211 "/usr/include/bits/floatn-common.h"

#line 213 "/usr/include/bits/floatn-common.h"
typedef float _Float32;
#line 215 "/usr/include/bits/floatn-common.h"

#line 222 "/usr/include/bits/floatn-common.h"

#line 224 "/usr/include/bits/floatn-common.h"

#line 226 "/usr/include/bits/floatn-common.h"








#line 248 "/usr/include/bits/floatn-common.h"

#line 250 "/usr/include/bits/floatn-common.h"
typedef double _Float64;
#line 252 "/usr/include/bits/floatn-common.h"

#line 259 "/usr/include/bits/floatn-common.h"

#line 261 "/usr/include/bits/floatn-common.h"

#line 263 "/usr/include/bits/floatn-common.h"

#line 265 "/usr/include/bits/floatn-common.h"

#line 267 "/usr/include/bits/floatn-common.h"
typedef double _Float32x;
#line 269 "/usr/include/bits/floatn-common.h"

#line 276 "/usr/include/bits/floatn-common.h"

#line 278 "/usr/include/bits/floatn-common.h"

#line 280 "/usr/include/bits/floatn-common.h"

#line 282 "/usr/include/bits/floatn-common.h"

#line 284 "/usr/include/bits/floatn-common.h"
typedef long double _Float64x;
#line 286 "/usr/include/bits/floatn-common.h"

#line 293 "/usr/include/bits/floatn-common.h"

#line 308 "/usr/include/bits/floatn-common.h"

#line 310 "/usr/include/bits/floatn-common.h"

#line 325 "/usr/include/bits/floatn-common.h"

#line 327 "/usr/include/bits/floatn-common.h"
#line 121 "/usr/include/bits/floatn.h"
#line 44 "/usr/include/math.h"



#line 50 "/usr/include/math.h"





#line 87 "/usr/include/math.h"

#line 89 "/usr/include/math.h"

#line 97 "/usr/include/math.h"


#line 110 "/usr/include/math.h"

#line 112 "/usr/include/math.h"

#line 140 "/usr/include/math.h"


#line 1 "/usr/include/bits/flt-eval-method.h"


















#line 22 "/usr/include/bits/flt-eval-method.h"
#line 143 "/usr/include/math.h"

#line 145 "/usr/include/math.h"







#line 153 "/usr/include/math.h"
typedef float float_t;
typedef double double_t;
#line 183 "/usr/include/math.h"











#line 1 "/usr/include/bits/fp-logb.h"


















#line 22 "/usr/include/bits/fp-logb.h"
#line 195 "/usr/include/math.h"
#line 224 "/usr/include/math.h"













#line 1 "/usr/include/bits/fp-fast.h"


















#line 22 "/usr/include/bits/fp-fast.h"

#line 24 "/usr/include/bits/fp-fast.h"



#line 30 "/usr/include/bits/fp-fast.h"

#line 34 "/usr/include/bits/fp-fast.h"

#line 38 "/usr/include/bits/fp-fast.h"
#line 238 "/usr/include/math.h"

#line 240 "/usr/include/math.h"

enum
  {
    FP_INT_UPWARD =
#line 245 "/usr/include/math.h"
      0,
    FP_INT_DOWNWARD =
#line 248 "/usr/include/math.h"
      1,
    FP_INT_TOWARDZERO =
#line 251 "/usr/include/math.h"
      2,
    FP_INT_TONEARESTFROMZERO =
#line 254 "/usr/include/math.h"
      3,
    FP_INT_TONEAREST =
#line 257 "/usr/include/math.h"
      4,
  };
#line 260 "/usr/include/math.h"

#line 1 "/usr/include/bits/mathcalls-macros.h"


















#line 20 "/usr/include/bits/mathcalls-macros.h"

#line 22 "/usr/include/bits/mathcalls-macros.h"

#line 24 "/usr/include/bits/mathcalls-macros.h"

#line 31 "/usr/include/bits/mathcalls-macros.h"


#line 34 "/usr/include/bits/mathcalls-macros.h"
#line 262 "/usr/include/math.h"

#line 1 "/usr/include/bits/mathcalls-helper-functions.h"



















extern int __fpclassify (double __value) 
     __attribute__ ((__const__));


extern int __signbit (double __value) 
     __attribute__ ((__const__));



extern int __isinf (double __value) 
  __attribute__ ((__const__));


extern int __finite (double __value) 
  __attribute__ ((__const__));


extern int __isnan (double __value) 
  __attribute__ ((__const__));


extern int __iseqsig (double __x, double __y) ;


extern int __issignaling (double __value) 
     __attribute__ ((__const__));
#line 268 "/usr/include/math.h"
#line 1 "/usr/include/bits/mathcalls.h"












































#line 48 "/usr/include/bits/mathcalls.h"





   extern double acos (double __x) ;   extern double __acos (double __x) ;

   extern double asin (double __x) ;   extern double __asin (double __x) ;

   extern double atan (double __x) ;   extern double __atan (double __x) ;

   extern double atan2 (double __y, double __x) ;   extern double __atan2 (double __y, double __x) ;


   extern double cos (double __x) ;   extern double __cos (double __x) ;

   extern double sin (double __x) ;   extern double __sin (double __x) ;

   extern double tan (double __x) ;   extern double __tan (double __x) ;

#line 69 "/usr/include/bits/mathcalls.h"

extern double acospi (double __x) ;   extern double __acospi (double __x) ;
   extern double acospi (double __x) ;   extern double __acospi (double __x) ;

extern double asinpi (double __x) ;   extern double __asinpi (double __x) ;
   extern double asinpi (double __x) ;   extern double __asinpi (double __x) ;

extern double atanpi (double __x) ;   extern double __atanpi (double __x) ;
   extern double atanpi (double __x) ;   extern double __atanpi (double __x) ;

extern double atan2pi (double __y, double __x) ;   extern double __atan2pi (double __y, double __x) ;
   extern double atan2pi (double __y, double __x) ;   extern double __atan2pi (double __y, double __x) ;


   extern double cospi (double __x) ;   extern double __cospi (double __x) ;

   extern double sinpi (double __x) ;   extern double __sinpi (double __x) ;

   extern double tanpi (double __x) ;   extern double __tanpi (double __x) ;
#line 89 "/usr/include/bits/mathcalls.h"




   extern double cosh (double __x) ;   extern double __cosh (double __x) ;

   extern double sinh (double __x) ;   extern double __sinh (double __x) ;

   extern double tanh (double __x) ;   extern double __tanh (double __x) ;

#line 100 "/usr/include/bits/mathcalls.h"

   extern void sincos (double __x, double *__sinx, double *__cosx) ;   extern void __sincos (double __x, double *__sinx, double *__cosx) ;
#line 104 "/usr/include/bits/mathcalls.h"

#line 106 "/usr/include/bits/mathcalls.h"

   extern double acosh (double __x) ;   extern double __acosh (double __x) ;

   extern double asinh (double __x) ;   extern double __asinh (double __x) ;

   extern double atanh (double __x) ;   extern double __atanh (double __x) ;
#line 113 "/usr/include/bits/mathcalls.h"




   extern double exp (double __x) ;   extern double __exp (double __x) ;


extern double frexp (double __x, int *__exponent) ;   extern double __frexp (double __x, int *__exponent) ;


extern double ldexp (double __x, int __exponent) ;   extern double __ldexp (double __x, int __exponent) ;


   extern double log (double __x) ;   extern double __log (double __x) ;


   extern double log10 (double __x) ;   extern double __log10 (double __x) ;


extern double modf (double __x, double *__iptr) ;   extern double __modf (double __x, double *__iptr)  ;

#line 135 "/usr/include/bits/mathcalls.h"

   extern double exp10 (double __x) ;   extern double __exp10 (double __x) ;


extern double exp2m1 (double __x) ;   extern double __exp2m1 (double __x) ;


extern double exp10m1 (double __x) ;   extern double __exp10m1 (double __x) ;


extern double log2p1 (double __x) ;   extern double __log2p1 (double __x) ;


extern double log10p1 (double __x) ;   extern double __log10p1 (double __x) ;


   extern double logp1 (double __x) ;   extern double __logp1 (double __x) ;
#line 153 "/usr/include/bits/mathcalls.h"

#line 155 "/usr/include/bits/mathcalls.h"

   extern double expm1 (double __x) ;   extern double __expm1 (double __x) ;


   extern double log1p (double __x) ;   extern double __log1p (double __x) ;


extern double logb (double __x) ;   extern double __logb (double __x) ;
#line 164 "/usr/include/bits/mathcalls.h"

#line 166 "/usr/include/bits/mathcalls.h"

   extern double exp2 (double __x) ;   extern double __exp2 (double __x) ;


   extern double log2 (double __x) ;   extern double __log2 (double __x) ;
#line 172 "/usr/include/bits/mathcalls.h"





   extern double pow (double __x, double __y) ;   extern double __pow (double __x, double __y) ;


extern double sqrt (double __x) ;   extern double __sqrt (double __x) ;

#line 183 "/usr/include/bits/mathcalls.h"

   extern double hypot (double __x, double __y) ;   extern double __hypot (double __x, double __y) ;
#line 186 "/usr/include/bits/mathcalls.h"

#line 188 "/usr/include/bits/mathcalls.h"

   extern double cbrt (double __x) ;   extern double __cbrt (double __x) ;
#line 191 "/usr/include/bits/mathcalls.h"

#line 193 "/usr/include/bits/mathcalls.h"

extern double compoundn (double __x, long long int __y) ;   extern double __compoundn (double __x, long long int __y) ;


extern double pown (double __x, long long int __y) ;   extern double __pown (double __x, long long int __y) ;


extern double powr (double __x, double __y) ;   extern double __powr (double __x, double __y) ;


extern double rootn (double __x, long long int __y) ;   extern double __rootn (double __x, long long int __y) ;


extern double rsqrt (double __x) ;   extern double __rsqrt (double __x) ;
#line 208 "/usr/include/bits/mathcalls.h"





extern double ceil (double __x)  __attribute__ ((__const__));


extern double fabs (double __x)  __attribute__ ((__const__));


extern double floor (double __x)  __attribute__ ((__const__));


extern double fmod (double __x, double __y) ;   extern double __fmod (double __x, double __y) ;

#line 226 "/usr/include/bits/mathcalls.h"


extern int isinf (double __value) 
  __attribute__ ((__const__));
#line 231 "/usr/include/bits/mathcalls.h"

#line 233 "/usr/include/bits/mathcalls.h"

extern int finite (double __value) 
  __attribute__ ((__const__));


extern double drem (double __x, double __y) ;   extern double __drem (double __x, double __y) ;



extern double significand (double __x) ;   extern double __significand (double __x) ;
#line 244 "/usr/include/bits/mathcalls.h"

#line 246 "/usr/include/bits/mathcalls.h"

#line 248 "/usr/include/bits/mathcalls.h"

extern double copysign (double __x, double __y)  __attribute__ ((__const__));
#line 251 "/usr/include/bits/mathcalls.h"

#line 253 "/usr/include/bits/mathcalls.h"

extern double nan (const char *__tagb) ;   extern double __nan (const char *__tagb) ;
#line 256 "/usr/include/bits/mathcalls.h"


#line 260 "/usr/include/bits/mathcalls.h"

extern int isnan (double __value) 
  __attribute__ ((__const__));
#line 265 "/usr/include/bits/mathcalls.h"

#line 267 "/usr/include/bits/mathcalls.h"

extern double j0 (double) ;   extern double __j0 (double) ;
extern double j1 (double) ;   extern double __j1 (double) ;
extern double jn (int, double) ;   extern double __jn (int, double) ;
extern double y0 (double) ;   extern double __y0 (double) ;
extern double y1 (double) ;   extern double __y1 (double) ;
extern double yn (int, double) ;   extern double __yn (int, double) ;
#line 275 "/usr/include/bits/mathcalls.h"


#line 278 "/usr/include/bits/mathcalls.h"

   extern double erf (double) ;   extern double __erf (double) ;
   extern double erfc (double) ;   extern double __erfc (double) ;
extern double lgamma (double) ;   extern double __lgamma (double) ;
#line 283 "/usr/include/bits/mathcalls.h"

#line 285 "/usr/include/bits/mathcalls.h"

extern double tgamma (double) ;   extern double __tgamma (double) ;
#line 288 "/usr/include/bits/mathcalls.h"

#line 291 "/usr/include/bits/mathcalls.h"

extern double gamma (double) ;   extern double __gamma (double) ;
#line 295 "/usr/include/bits/mathcalls.h"

#line 297 "/usr/include/bits/mathcalls.h"



extern double lgamma_r (double, int *__signgamp) ;   extern double __lgamma_r (double, int *__signgamp) ;
#line 302 "/usr/include/bits/mathcalls.h"


#line 305 "/usr/include/bits/mathcalls.h"


extern double rint (double __x) ;   extern double __rint (double __x) ;


extern double nextafter (double __x, double __y) ;   extern double __nextafter (double __x, double __y) ;
#line 312 "/usr/include/bits/mathcalls.h"
extern double nexttoward (double __x, long double __y) ;   extern double __nexttoward (double __x, long double __y) ;
#line 314 "/usr/include/bits/mathcalls.h"

#line 316 "/usr/include/bits/mathcalls.h"

extern double nextdown (double __x) ;   extern double __nextdown (double __x) ;

extern double nextup (double __x) ;   extern double __nextup (double __x) ;
#line 321 "/usr/include/bits/mathcalls.h"


extern double remainder (double __x, double __y) ;   extern double __remainder (double __x, double __y) ;

#line 326 "/usr/include/bits/mathcalls.h"

extern double scalbn (double __x, int __n) ;   extern double __scalbn (double __x, int __n) ;
#line 329 "/usr/include/bits/mathcalls.h"


extern int ilogb (double __x) ;   extern int __ilogb (double __x) ;
#line 333 "/usr/include/bits/mathcalls.h"

#line 335 "/usr/include/bits/mathcalls.h"

extern long int llogb (double __x) ;   extern long int __llogb (double __x) ;
#line 338 "/usr/include/bits/mathcalls.h"

#line 340 "/usr/include/bits/mathcalls.h"

extern double scalbln (double __x, long int __n) ;   extern double __scalbln (double __x, long int __n) ;



extern double nearbyint (double __x) ;   extern double __nearbyint (double __x) ;



extern double round (double __x)  __attribute__ ((__const__));



extern double trunc (double __x)  __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) ;   extern double __remquo (double __x, double __y, int *__quo) ;






extern long int lrint (double __x) ;   extern long int __lrint (double __x) ;

extern long long int llrint (double __x) ;   extern long long int __llrint (double __x) ;



extern long int lround (double __x) ;   extern long int __lround (double __x) ;

extern long long int llround (double __x) ;   extern long long int __llround (double __x) ;



extern double fdim (double __x, double __y) ;   extern double __fdim (double __x, double __y) ;

#line 380 "/usr/include/bits/mathcalls.h"

extern double fmax (double __x, double __y)  __attribute__ ((__const__));


extern double fmin (double __x, double __y)  __attribute__ ((__const__));
#line 386 "/usr/include/bits/mathcalls.h"


extern double fma (double __x, double __y, double __z) ;   extern double __fma (double __x, double __y, double __z) ;
#line 390 "/usr/include/bits/mathcalls.h"

#line 392 "/usr/include/bits/mathcalls.h"

extern double roundeven (double __x)  __attribute__ ((__const__));



extern __intmax_t fromfp (double __x, int __round,
				  unsigned int __width) ;   extern __intmax_t __fromfp (double __x, int __round,
				  unsigned int __width) ;



extern __uintmax_t ufromfp (double __x, int __round,
				    unsigned int __width) ;   extern __uintmax_t __ufromfp (double __x, int __round,
				    unsigned int __width) ;




extern __intmax_t fromfpx (double __x, int __round,
				   unsigned int __width) ;   extern __intmax_t __fromfpx (double __x, int __round,
				   unsigned int __width) ;




extern __uintmax_t ufromfpx (double __x, int __round,
				     unsigned int __width) ;   extern __uintmax_t __ufromfpx (double __x, int __round,
				     unsigned int __width) ;


extern int canonicalize (double *__cx, const double *__x) ;
#line 420 "/usr/include/bits/mathcalls.h"

#line 422 "/usr/include/bits/mathcalls.h"

extern double fmaxmag (double __x, double __y)  __attribute__ ((__const__));


extern double fminmag (double __x, double __y)  __attribute__ ((__const__));
#line 428 "/usr/include/bits/mathcalls.h"

#line 430 "/usr/include/bits/mathcalls.h"

extern double fmaximum (double __x, double __y)  __attribute__ ((__const__));


extern double fminimum (double __x, double __y)  __attribute__ ((__const__));


extern double fmaximum_num (double __x, double __y)  __attribute__ ((__const__));


extern double fminimum_num (double __x, double __y)  __attribute__ ((__const__));


extern double fmaximum_mag (double __x, double __y)  __attribute__ ((__const__));


extern double fminimum_mag (double __x, double __y)  __attribute__ ((__const__));


extern double fmaximum_mag_num (double __x, double __y)  __attribute__ ((__const__));


extern double fminimum_mag_num (double __x, double __y)  __attribute__ ((__const__));
#line 454 "/usr/include/bits/mathcalls.h"

#line 456 "/usr/include/bits/mathcalls.h"

extern int totalorder (const double *__x,
				 const double *__y) 
     __attribute__ ((__pure__));


extern int totalordermag (const double *__x,
				    const double *__y) 
     __attribute__ ((__pure__));


extern double getpayload (const double *__x) ;   extern double __getpayload (const double *__x) ;


extern int setpayload (double *__x, double __payload) ;


extern int setpayloadsig (double *__x, double __payload) ;
#line 475 "/usr/include/bits/mathcalls.h"

#line 477 "/usr/include/bits/mathcalls.h"

extern double scalb (double __x, double __n) ;   extern double __scalb (double __x, double __n) ;
#line 269 "/usr/include/math.h"
#line 273 "/usr/include/math.h"

#line 275 "/usr/include/math.h"





#line 1 "/usr/include/bits/mathcalls-helper-functions.h"



















extern int __fpclassifyf (float __value) 
     __attribute__ ((__const__));


extern int __signbitf (float __value) 
     __attribute__ ((__const__));



extern int __isinff (float __value) 
  __attribute__ ((__const__));


extern int __finitef (float __value) 
  __attribute__ ((__const__));


extern int __isnanf (float __value) 
  __attribute__ ((__const__));


extern int __iseqsigf (float __x, float __y) ;


extern int __issignalingf (float __value) 
     __attribute__ ((__const__));
#line 285 "/usr/include/math.h"
#line 1 "/usr/include/bits/mathcalls.h"












































#line 48 "/usr/include/bits/mathcalls.h"





   extern float acosf (float __x) ;   extern float __acosf (float __x) ;

   extern float asinf (float __x) ;   extern float __asinf (float __x) ;

   extern float atanf (float __x) ;   extern float __atanf (float __x) ;

   extern float atan2f (float __y, float __x) ;   extern float __atan2f (float __y, float __x) ;


   extern float cosf (float __x) ;   extern float __cosf (float __x) ;

   extern float sinf (float __x) ;   extern float __sinf (float __x) ;

   extern float tanf (float __x) ;   extern float __tanf (float __x) ;

#line 69 "/usr/include/bits/mathcalls.h"

extern float acospif (float __x) ;   extern float __acospif (float __x) ;
   extern float acospif (float __x) ;   extern float __acospif (float __x) ;

extern float asinpif (float __x) ;   extern float __asinpif (float __x) ;
   extern float asinpif (float __x) ;   extern float __asinpif (float __x) ;

extern float atanpif (float __x) ;   extern float __atanpif (float __x) ;
   extern float atanpif (float __x) ;   extern float __atanpif (float __x) ;

extern float atan2pif (float __y, float __x) ;   extern float __atan2pif (float __y, float __x) ;
   extern float atan2pif (float __y, float __x) ;   extern float __atan2pif (float __y, float __x) ;


   extern float cospif (float __x) ;   extern float __cospif (float __x) ;

   extern float sinpif (float __x) ;   extern float __sinpif (float __x) ;

   extern float tanpif (float __x) ;   extern float __tanpif (float __x) ;
#line 89 "/usr/include/bits/mathcalls.h"




   extern float coshf (float __x) ;   extern float __coshf (float __x) ;

   extern float sinhf (float __x) ;   extern float __sinhf (float __x) ;

   extern float tanhf (float __x) ;   extern float __tanhf (float __x) ;

#line 100 "/usr/include/bits/mathcalls.h"

   extern void sincosf (float __x, float *__sinx, float *__cosx) ;   extern void __sincosf (float __x, float *__sinx, float *__cosx) ;
#line 104 "/usr/include/bits/mathcalls.h"

#line 106 "/usr/include/bits/mathcalls.h"

   extern float acoshf (float __x) ;   extern float __acoshf (float __x) ;

   extern float asinhf (float __x) ;   extern float __asinhf (float __x) ;

   extern float atanhf (float __x) ;   extern float __atanhf (float __x) ;
#line 113 "/usr/include/bits/mathcalls.h"




   extern float expf (float __x) ;   extern float __expf (float __x) ;


extern float frexpf (float __x, int *__exponent) ;   extern float __frexpf (float __x, int *__exponent) ;


extern float ldexpf (float __x, int __exponent) ;   extern float __ldexpf (float __x, int __exponent) ;


   extern float logf (float __x) ;   extern float __logf (float __x) ;


   extern float log10f (float __x) ;   extern float __log10f (float __x) ;


extern float modff (float __x, float *__iptr) ;   extern float __modff (float __x, float *__iptr)  ;

#line 135 "/usr/include/bits/mathcalls.h"

   extern float exp10f (float __x) ;   extern float __exp10f (float __x) ;


extern float exp2m1f (float __x) ;   extern float __exp2m1f (float __x) ;


extern float exp10m1f (float __x) ;   extern float __exp10m1f (float __x) ;


extern float log2p1f (float __x) ;   extern float __log2p1f (float __x) ;


extern float log10p1f (float __x) ;   extern float __log10p1f (float __x) ;


   extern float logp1f (float __x) ;   extern float __logp1f (float __x) ;
#line 153 "/usr/include/bits/mathcalls.h"

#line 155 "/usr/include/bits/mathcalls.h"

   extern float expm1f (float __x) ;   extern float __expm1f (float __x) ;


   extern float log1pf (float __x) ;   extern float __log1pf (float __x) ;


extern float logbf (float __x) ;   extern float __logbf (float __x) ;
#line 164 "/usr/include/bits/mathcalls.h"

#line 166 "/usr/include/bits/mathcalls.h"

   extern float exp2f (float __x) ;   extern float __exp2f (float __x) ;


   extern float log2f (float __x) ;   extern float __log2f (float __x) ;
#line 172 "/usr/include/bits/mathcalls.h"





   extern float powf (float __x, float __y) ;   extern float __powf (float __x, float __y) ;


extern float sqrtf (float __x) ;   extern float __sqrtf (float __x) ;

#line 183 "/usr/include/bits/mathcalls.h"

   extern float hypotf (float __x, float __y) ;   extern float __hypotf (float __x, float __y) ;
#line 186 "/usr/include/bits/mathcalls.h"

#line 188 "/usr/include/bits/mathcalls.h"

   extern float cbrtf (float __x) ;   extern float __cbrtf (float __x) ;
#line 191 "/usr/include/bits/mathcalls.h"

#line 193 "/usr/include/bits/mathcalls.h"

extern float compoundnf (float __x, long long int __y) ;   extern float __compoundnf (float __x, long long int __y) ;


extern float pownf (float __x, long long int __y) ;   extern float __pownf (float __x, long long int __y) ;


extern float powrf (float __x, float __y) ;   extern float __powrf (float __x, float __y) ;


extern float rootnf (float __x, long long int __y) ;   extern float __rootnf (float __x, long long int __y) ;


extern float rsqrtf (float __x) ;   extern float __rsqrtf (float __x) ;
#line 208 "/usr/include/bits/mathcalls.h"





extern float ceilf (float __x)  __attribute__ ((__const__));


extern float fabsf (float __x)  __attribute__ ((__const__));


extern float floorf (float __x)  __attribute__ ((__const__));


extern float fmodf (float __x, float __y) ;   extern float __fmodf (float __x, float __y) ;

#line 226 "/usr/include/bits/mathcalls.h"


extern int isinff (float __value) 
  __attribute__ ((__const__));
#line 231 "/usr/include/bits/mathcalls.h"

#line 233 "/usr/include/bits/mathcalls.h"

extern int finitef (float __value) 
  __attribute__ ((__const__));


extern float dremf (float __x, float __y) ;   extern float __dremf (float __x, float __y) ;



extern float significandf (float __x) ;   extern float __significandf (float __x) ;
#line 244 "/usr/include/bits/mathcalls.h"

#line 246 "/usr/include/bits/mathcalls.h"

#line 248 "/usr/include/bits/mathcalls.h"

extern float copysignf (float __x, float __y)  __attribute__ ((__const__));
#line 251 "/usr/include/bits/mathcalls.h"

#line 253 "/usr/include/bits/mathcalls.h"

extern float nanf (const char *__tagb) ;   extern float __nanf (const char *__tagb) ;
#line 256 "/usr/include/bits/mathcalls.h"


#line 260 "/usr/include/bits/mathcalls.h"

extern int isnanf (float __value) 
  __attribute__ ((__const__));
#line 265 "/usr/include/bits/mathcalls.h"

#line 267 "/usr/include/bits/mathcalls.h"

extern float j0f (float) ;   extern float __j0f (float) ;
extern float j1f (float) ;   extern float __j1f (float) ;
extern float jnf (int, float) ;   extern float __jnf (int, float) ;
extern float y0f (float) ;   extern float __y0f (float) ;
extern float y1f (float) ;   extern float __y1f (float) ;
extern float ynf (int, float) ;   extern float __ynf (int, float) ;
#line 275 "/usr/include/bits/mathcalls.h"


#line 278 "/usr/include/bits/mathcalls.h"

   extern float erff (float) ;   extern float __erff (float) ;
   extern float erfcf (float) ;   extern float __erfcf (float) ;
extern float lgammaf (float) ;   extern float __lgammaf (float) ;
#line 283 "/usr/include/bits/mathcalls.h"

#line 285 "/usr/include/bits/mathcalls.h"

extern float tgammaf (float) ;   extern float __tgammaf (float) ;
#line 288 "/usr/include/bits/mathcalls.h"

#line 291 "/usr/include/bits/mathcalls.h"

extern float gammaf (float) ;   extern float __gammaf (float) ;
#line 295 "/usr/include/bits/mathcalls.h"

#line 297 "/usr/include/bits/mathcalls.h"



extern float lgammaf_r (float, int *__signgamp) ;   extern float __lgammaf_r (float, int *__signgamp) ;
#line 302 "/usr/include/bits/mathcalls.h"


#line 305 "/usr/include/bits/mathcalls.h"


extern float rintf (float __x) ;   extern float __rintf (float __x) ;


extern float nextafterf (float __x, float __y) ;   extern float __nextafterf (float __x, float __y) ;
#line 312 "/usr/include/bits/mathcalls.h"
extern float nexttowardf (float __x, long double __y) ;   extern float __nexttowardf (float __x, long double __y) ;
#line 314 "/usr/include/bits/mathcalls.h"

#line 316 "/usr/include/bits/mathcalls.h"

extern float nextdownf (float __x) ;   extern float __nextdownf (float __x) ;

extern float nextupf (float __x) ;   extern float __nextupf (float __x) ;
#line 321 "/usr/include/bits/mathcalls.h"


extern float remainderf (float __x, float __y) ;   extern float __remainderf (float __x, float __y) ;

#line 326 "/usr/include/bits/mathcalls.h"

extern float scalbnf (float __x, int __n) ;   extern float __scalbnf (float __x, int __n) ;
#line 329 "/usr/include/bits/mathcalls.h"


extern int ilogbf (float __x) ;   extern int __ilogbf (float __x) ;
#line 333 "/usr/include/bits/mathcalls.h"

#line 335 "/usr/include/bits/mathcalls.h"

extern long int llogbf (float __x) ;   extern long int __llogbf (float __x) ;
#line 338 "/usr/include/bits/mathcalls.h"

#line 340 "/usr/include/bits/mathcalls.h"

extern float scalblnf (float __x, long int __n) ;   extern float __scalblnf (float __x, long int __n) ;



extern float nearbyintf (float __x) ;   extern float __nearbyintf (float __x) ;



extern float roundf (float __x)  __attribute__ ((__const__));



extern float truncf (float __x)  __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) ;   extern float __remquof (float __x, float __y, int *__quo) ;






extern long int lrintf (float __x) ;   extern long int __lrintf (float __x) ;

extern long long int llrintf (float __x) ;   extern long long int __llrintf (float __x) ;



extern long int lroundf (float __x) ;   extern long int __lroundf (float __x) ;

extern long long int llroundf (float __x) ;   extern long long int __llroundf (float __x) ;



extern float fdimf (float __x, float __y) ;   extern float __fdimf (float __x, float __y) ;

#line 380 "/usr/include/bits/mathcalls.h"

extern float fmaxf (float __x, float __y)  __attribute__ ((__const__));


extern float fminf (float __x, float __y)  __attribute__ ((__const__));
#line 386 "/usr/include/bits/mathcalls.h"


extern float fmaf (float __x, float __y, float __z) ;   extern float __fmaf (float __x, float __y, float __z) ;
#line 390 "/usr/include/bits/mathcalls.h"

#line 392 "/usr/include/bits/mathcalls.h"

extern float roundevenf (float __x)  __attribute__ ((__const__));



extern __intmax_t fromfpf (float __x, int __round,
				  unsigned int __width) ;   extern __intmax_t __fromfpf (float __x, int __round,
				  unsigned int __width) ;



extern __uintmax_t ufromfpf (float __x, int __round,
				    unsigned int __width) ;   extern __uintmax_t __ufromfpf (float __x, int __round,
				    unsigned int __width) ;




extern __intmax_t fromfpxf (float __x, int __round,
				   unsigned int __width) ;   extern __intmax_t __fromfpxf (float __x, int __round,
				   unsigned int __width) ;




extern __uintmax_t ufromfpxf (float __x, int __round,
				     unsigned int __width) ;   extern __uintmax_t __ufromfpxf (float __x, int __round,
				     unsigned int __width) ;


extern int canonicalizef (float *__cx, const float *__x) ;
#line 420 "/usr/include/bits/mathcalls.h"

#line 422 "/usr/include/bits/mathcalls.h"

extern float fmaxmagf (float __x, float __y)  __attribute__ ((__const__));


extern float fminmagf (float __x, float __y)  __attribute__ ((__const__));
#line 428 "/usr/include/bits/mathcalls.h"

#line 430 "/usr/include/bits/mathcalls.h"

extern float fmaximumf (float __x, float __y)  __attribute__ ((__const__));


extern float fminimumf (float __x, float __y)  __attribute__ ((__const__));


extern float fmaximum_numf (float __x, float __y)  __attribute__ ((__const__));


extern float fminimum_numf (float __x, float __y)  __attribute__ ((__const__));


extern float fmaximum_magf (float __x, float __y)  __attribute__ ((__const__));


extern float fminimum_magf (float __x, float __y)  __attribute__ ((__const__));


extern float fmaximum_mag_numf (float __x, float __y)  __attribute__ ((__const__));


extern float fminimum_mag_numf (float __x, float __y)  __attribute__ ((__const__));
#line 454 "/usr/include/bits/mathcalls.h"

#line 456 "/usr/include/bits/mathcalls.h"

extern int totalorderf (const float *__x,
				 const float *__y) 
     __attribute__ ((__pure__));


extern int totalordermagf (const float *__x,
				    const float *__y) 
     __attribute__ ((__pure__));


extern float getpayloadf (const float *__x) ;   extern float __getpayloadf (const float *__x) ;


extern int setpayloadf (float *__x, float __payload) ;


extern int setpayloadsigf (float *__x, float __payload) ;
#line 475 "/usr/include/bits/mathcalls.h"

#line 477 "/usr/include/bits/mathcalls.h"

extern float scalbf (float __x, float __n) ;   extern float __scalbf (float __x, float __n) ;
#line 286 "/usr/include/math.h"
#line 290 "/usr/include/math.h"

#line 337 "/usr/include/math.h"




#line 1 "/usr/include/bits/mathcalls-helper-functions.h"



















extern int __fpclassifyl (long double __value) 
     __attribute__ ((__const__));


extern int __signbitl (long double __value) 
     __attribute__ ((__const__));



extern int __isinfl (long double __value) 
  __attribute__ ((__const__));


extern int __finitel (long double __value) 
  __attribute__ ((__const__));


extern int __isnanl (long double __value) 
  __attribute__ ((__const__));


extern int __iseqsigl (long double __x, long double __y) ;


extern int __issignalingl (long double __value) 
     __attribute__ ((__const__));
#line 347 "/usr/include/math.h"
#line 1 "/usr/include/bits/mathcalls.h"












































#line 48 "/usr/include/bits/mathcalls.h"





   extern long double acosl (long double __x) ;   extern long double __acosl (long double __x) ;

   extern long double asinl (long double __x) ;   extern long double __asinl (long double __x) ;

   extern long double atanl (long double __x) ;   extern long double __atanl (long double __x) ;

   extern long double atan2l (long double __y, long double __x) ;   extern long double __atan2l (long double __y, long double __x) ;


   extern long double cosl (long double __x) ;   extern long double __cosl (long double __x) ;

   extern long double sinl (long double __x) ;   extern long double __sinl (long double __x) ;

   extern long double tanl (long double __x) ;   extern long double __tanl (long double __x) ;

#line 69 "/usr/include/bits/mathcalls.h"

extern long double acospil (long double __x) ;   extern long double __acospil (long double __x) ;
   extern long double acospil (long double __x) ;   extern long double __acospil (long double __x) ;

extern long double asinpil (long double __x) ;   extern long double __asinpil (long double __x) ;
   extern long double asinpil (long double __x) ;   extern long double __asinpil (long double __x) ;

extern long double atanpil (long double __x) ;   extern long double __atanpil (long double __x) ;
   extern long double atanpil (long double __x) ;   extern long double __atanpil (long double __x) ;

extern long double atan2pil (long double __y, long double __x) ;   extern long double __atan2pil (long double __y, long double __x) ;
   extern long double atan2pil (long double __y, long double __x) ;   extern long double __atan2pil (long double __y, long double __x) ;


   extern long double cospil (long double __x) ;   extern long double __cospil (long double __x) ;

   extern long double sinpil (long double __x) ;   extern long double __sinpil (long double __x) ;

   extern long double tanpil (long double __x) ;   extern long double __tanpil (long double __x) ;
#line 89 "/usr/include/bits/mathcalls.h"




   extern long double coshl (long double __x) ;   extern long double __coshl (long double __x) ;

   extern long double sinhl (long double __x) ;   extern long double __sinhl (long double __x) ;

   extern long double tanhl (long double __x) ;   extern long double __tanhl (long double __x) ;

#line 100 "/usr/include/bits/mathcalls.h"

   extern void sincosl (long double __x, long double *__sinx, long double *__cosx) ;   extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) ;
#line 104 "/usr/include/bits/mathcalls.h"

#line 106 "/usr/include/bits/mathcalls.h"

   extern long double acoshl (long double __x) ;   extern long double __acoshl (long double __x) ;

   extern long double asinhl (long double __x) ;   extern long double __asinhl (long double __x) ;

   extern long double atanhl (long double __x) ;   extern long double __atanhl (long double __x) ;
#line 113 "/usr/include/bits/mathcalls.h"




   extern long double expl (long double __x) ;   extern long double __expl (long double __x) ;


extern long double frexpl (long double __x, int *__exponent) ;   extern long double __frexpl (long double __x, int *__exponent) ;


extern long double ldexpl (long double __x, int __exponent) ;   extern long double __ldexpl (long double __x, int __exponent) ;


   extern long double logl (long double __x) ;   extern long double __logl (long double __x) ;


   extern long double log10l (long double __x) ;   extern long double __log10l (long double __x) ;


extern long double modfl (long double __x, long double *__iptr) ;   extern long double __modfl (long double __x, long double *__iptr)  ;

#line 135 "/usr/include/bits/mathcalls.h"

   extern long double exp10l (long double __x) ;   extern long double __exp10l (long double __x) ;


extern long double exp2m1l (long double __x) ;   extern long double __exp2m1l (long double __x) ;


extern long double exp10m1l (long double __x) ;   extern long double __exp10m1l (long double __x) ;


extern long double log2p1l (long double __x) ;   extern long double __log2p1l (long double __x) ;


extern long double log10p1l (long double __x) ;   extern long double __log10p1l (long double __x) ;


   extern long double logp1l (long double __x) ;   extern long double __logp1l (long double __x) ;
#line 153 "/usr/include/bits/mathcalls.h"

#line 155 "/usr/include/bits/mathcalls.h"

   extern long double expm1l (long double __x) ;   extern long double __expm1l (long double __x) ;


   extern long double log1pl (long double __x) ;   extern long double __log1pl (long double __x) ;


extern long double logbl (long double __x) ;   extern long double __logbl (long double __x) ;
#line 164 "/usr/include/bits/mathcalls.h"

#line 166 "/usr/include/bits/mathcalls.h"

   extern long double exp2l (long double __x) ;   extern long double __exp2l (long double __x) ;


   extern long double log2l (long double __x) ;   extern long double __log2l (long double __x) ;
#line 172 "/usr/include/bits/mathcalls.h"





   extern long double powl (long double __x, long double __y) ;   extern long double __powl (long double __x, long double __y) ;


extern long double sqrtl (long double __x) ;   extern long double __sqrtl (long double __x) ;

#line 183 "/usr/include/bits/mathcalls.h"

   extern long double hypotl (long double __x, long double __y) ;   extern long double __hypotl (long double __x, long double __y) ;
#line 186 "/usr/include/bits/mathcalls.h"

#line 188 "/usr/include/bits/mathcalls.h"

   extern long double cbrtl (long double __x) ;   extern long double __cbrtl (long double __x) ;
#line 191 "/usr/include/bits/mathcalls.h"

#line 193 "/usr/include/bits/mathcalls.h"

extern long double compoundnl (long double __x, long long int __y) ;   extern long double __compoundnl (long double __x, long long int __y) ;


extern long double pownl (long double __x, long long int __y) ;   extern long double __pownl (long double __x, long long int __y) ;


extern long double powrl (long double __x, long double __y) ;   extern long double __powrl (long double __x, long double __y) ;


extern long double rootnl (long double __x, long long int __y) ;   extern long double __rootnl (long double __x, long long int __y) ;


extern long double rsqrtl (long double __x) ;   extern long double __rsqrtl (long double __x) ;
#line 208 "/usr/include/bits/mathcalls.h"





extern long double ceill (long double __x)  __attribute__ ((__const__));


extern long double fabsl (long double __x)  __attribute__ ((__const__));


extern long double floorl (long double __x)  __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) ;   extern long double __fmodl (long double __x, long double __y) ;

#line 226 "/usr/include/bits/mathcalls.h"


extern int isinfl (long double __value) 
  __attribute__ ((__const__));
#line 231 "/usr/include/bits/mathcalls.h"

#line 233 "/usr/include/bits/mathcalls.h"

extern int finitel (long double __value) 
  __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) ;   extern long double __dreml (long double __x, long double __y) ;



extern long double significandl (long double __x) ;   extern long double __significandl (long double __x) ;
#line 244 "/usr/include/bits/mathcalls.h"

#line 246 "/usr/include/bits/mathcalls.h"

#line 248 "/usr/include/bits/mathcalls.h"

extern long double copysignl (long double __x, long double __y)  __attribute__ ((__const__));
#line 251 "/usr/include/bits/mathcalls.h"

#line 253 "/usr/include/bits/mathcalls.h"

extern long double nanl (const char *__tagb) ;   extern long double __nanl (const char *__tagb) ;
#line 256 "/usr/include/bits/mathcalls.h"


#line 260 "/usr/include/bits/mathcalls.h"

extern int isnanl (long double __value) 
  __attribute__ ((__const__));
#line 265 "/usr/include/bits/mathcalls.h"

#line 267 "/usr/include/bits/mathcalls.h"

extern long double j0l (long double) ;   extern long double __j0l (long double) ;
extern long double j1l (long double) ;   extern long double __j1l (long double) ;
extern long double jnl (int, long double) ;   extern long double __jnl (int, long double) ;
extern long double y0l (long double) ;   extern long double __y0l (long double) ;
extern long double y1l (long double) ;   extern long double __y1l (long double) ;
extern long double ynl (int, long double) ;   extern long double __ynl (int, long double) ;
#line 275 "/usr/include/bits/mathcalls.h"


#line 278 "/usr/include/bits/mathcalls.h"

   extern long double erfl (long double) ;   extern long double __erfl (long double) ;
   extern long double erfcl (long double) ;   extern long double __erfcl (long double) ;
extern long double lgammal (long double) ;   extern long double __lgammal (long double) ;
#line 283 "/usr/include/bits/mathcalls.h"

#line 285 "/usr/include/bits/mathcalls.h"

extern long double tgammal (long double) ;   extern long double __tgammal (long double) ;
#line 288 "/usr/include/bits/mathcalls.h"

#line 291 "/usr/include/bits/mathcalls.h"

extern long double gammal (long double) ;   extern long double __gammal (long double) ;
#line 295 "/usr/include/bits/mathcalls.h"

#line 297 "/usr/include/bits/mathcalls.h"



extern long double lgammal_r (long double, int *__signgamp) ;   extern long double __lgammal_r (long double, int *__signgamp) ;
#line 302 "/usr/include/bits/mathcalls.h"


#line 305 "/usr/include/bits/mathcalls.h"


extern long double rintl (long double __x) ;   extern long double __rintl (long double __x) ;


extern long double nextafterl (long double __x, long double __y) ;   extern long double __nextafterl (long double __x, long double __y) ;
#line 312 "/usr/include/bits/mathcalls.h"
extern long double nexttowardl (long double __x, long double __y) ;   extern long double __nexttowardl (long double __x, long double __y) ;
#line 314 "/usr/include/bits/mathcalls.h"

#line 316 "/usr/include/bits/mathcalls.h"

extern long double nextdownl (long double __x) ;   extern long double __nextdownl (long double __x) ;

extern long double nextupl (long double __x) ;   extern long double __nextupl (long double __x) ;
#line 321 "/usr/include/bits/mathcalls.h"


extern long double remainderl (long double __x, long double __y) ;   extern long double __remainderl (long double __x, long double __y) ;

#line 326 "/usr/include/bits/mathcalls.h"

extern long double scalbnl (long double __x, int __n) ;   extern long double __scalbnl (long double __x, int __n) ;
#line 329 "/usr/include/bits/mathcalls.h"


extern int ilogbl (long double __x) ;   extern int __ilogbl (long double __x) ;
#line 333 "/usr/include/bits/mathcalls.h"

#line 335 "/usr/include/bits/mathcalls.h"

extern long int llogbl (long double __x) ;   extern long int __llogbl (long double __x) ;
#line 338 "/usr/include/bits/mathcalls.h"

#line 340 "/usr/include/bits/mathcalls.h"

extern long double scalblnl (long double __x, long int __n) ;   extern long double __scalblnl (long double __x, long int __n) ;



extern long double nearbyintl (long double __x) ;   extern long double __nearbyintl (long double __x) ;



extern long double roundl (long double __x)  __attribute__ ((__const__));



extern long double truncl (long double __x)  __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) ;   extern long double __remquol (long double __x, long double __y, int *__quo) ;






extern long int lrintl (long double __x) ;   extern long int __lrintl (long double __x) ;

extern long long int llrintl (long double __x) ;   extern long long int __llrintl (long double __x) ;



extern long int lroundl (long double __x) ;   extern long int __lroundl (long double __x) ;

extern long long int llroundl (long double __x) ;   extern long long int __llroundl (long double __x) ;



extern long double fdiml (long double __x, long double __y) ;   extern long double __fdiml (long double __x, long double __y) ;

#line 380 "/usr/include/bits/mathcalls.h"

extern long double fmaxl (long double __x, long double __y)  __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y)  __attribute__ ((__const__));
#line 386 "/usr/include/bits/mathcalls.h"


extern long double fmal (long double __x, long double __y, long double __z) ;   extern long double __fmal (long double __x, long double __y, long double __z) ;
#line 390 "/usr/include/bits/mathcalls.h"

#line 392 "/usr/include/bits/mathcalls.h"

extern long double roundevenl (long double __x)  __attribute__ ((__const__));



extern __intmax_t fromfpl (long double __x, int __round,
				  unsigned int __width) ;   extern __intmax_t __fromfpl (long double __x, int __round,
				  unsigned int __width) ;



extern __uintmax_t ufromfpl (long double __x, int __round,
				    unsigned int __width) ;   extern __uintmax_t __ufromfpl (long double __x, int __round,
				    unsigned int __width) ;




extern __intmax_t fromfpxl (long double __x, int __round,
				   unsigned int __width) ;   extern __intmax_t __fromfpxl (long double __x, int __round,
				   unsigned int __width) ;




extern __uintmax_t ufromfpxl (long double __x, int __round,
				     unsigned int __width) ;   extern __uintmax_t __ufromfpxl (long double __x, int __round,
				     unsigned int __width) ;


extern int canonicalizel (long double *__cx, const long double *__x) ;
#line 420 "/usr/include/bits/mathcalls.h"

#line 422 "/usr/include/bits/mathcalls.h"

extern long double fmaxmagl (long double __x, long double __y)  __attribute__ ((__const__));


extern long double fminmagl (long double __x, long double __y)  __attribute__ ((__const__));
#line 428 "/usr/include/bits/mathcalls.h"

#line 430 "/usr/include/bits/mathcalls.h"

extern long double fmaximuml (long double __x, long double __y)  __attribute__ ((__const__));


extern long double fminimuml (long double __x, long double __y)  __attribute__ ((__const__));


extern long double fmaximum_numl (long double __x, long double __y)  __attribute__ ((__const__));


extern long double fminimum_numl (long double __x, long double __y)  __attribute__ ((__const__));


extern long double fmaximum_magl (long double __x, long double __y)  __attribute__ ((__const__));


extern long double fminimum_magl (long double __x, long double __y)  __attribute__ ((__const__));


extern long double fmaximum_mag_numl (long double __x, long double __y)  __attribute__ ((__const__));


extern long double fminimum_mag_numl (long double __x, long double __y)  __attribute__ ((__const__));
#line 454 "/usr/include/bits/mathcalls.h"

#line 456 "/usr/include/bits/mathcalls.h"

extern int totalorderl (const long double *__x,
				 const long double *__y) 
     __attribute__ ((__pure__));


extern int totalordermagl (const long double *__x,
				    const long double *__y) 
     __attribute__ ((__pure__));


extern long double getpayloadl (const long double *__x) ;   extern long double __getpayloadl (const long double *__x) ;


extern int setpayloadl (long double *__x, long double __payload) ;


extern int setpayloadsigl (long double *__x, long double __payload) ;
#line 475 "/usr/include/bits/mathcalls.h"

#line 477 "/usr/include/bits/mathcalls.h"

extern long double scalbl (long double __x, long double __n) ;   extern long double __scalbl (long double __x, long double __n) ;
#line 348 "/usr/include/math.h"

#line 353 "/usr/include/math.h"

#line 363 "/usr/include/math.h"

#line 365 "/usr/include/math.h"




#line 385 "/usr/include/math.h"

#line 1 "/usr/include/bits/mathcalls.h"












































#line 48 "/usr/include/bits/mathcalls.h"





   extern _Float32 acosf32 (_Float32 __x) ;   extern _Float32 __acosf32 (_Float32 __x) ;

   extern _Float32 asinf32 (_Float32 __x) ;   extern _Float32 __asinf32 (_Float32 __x) ;

   extern _Float32 atanf32 (_Float32 __x) ;   extern _Float32 __atanf32 (_Float32 __x) ;

   extern _Float32 atan2f32 (_Float32 __y, _Float32 __x) ;   extern _Float32 __atan2f32 (_Float32 __y, _Float32 __x) ;


   extern _Float32 cosf32 (_Float32 __x) ;   extern _Float32 __cosf32 (_Float32 __x) ;

   extern _Float32 sinf32 (_Float32 __x) ;   extern _Float32 __sinf32 (_Float32 __x) ;

   extern _Float32 tanf32 (_Float32 __x) ;   extern _Float32 __tanf32 (_Float32 __x) ;

#line 69 "/usr/include/bits/mathcalls.h"

extern _Float32 acospif32 (_Float32 __x) ;   extern _Float32 __acospif32 (_Float32 __x) ;
   extern _Float32 acospif32 (_Float32 __x) ;   extern _Float32 __acospif32 (_Float32 __x) ;

extern _Float32 asinpif32 (_Float32 __x) ;   extern _Float32 __asinpif32 (_Float32 __x) ;
   extern _Float32 asinpif32 (_Float32 __x) ;   extern _Float32 __asinpif32 (_Float32 __x) ;

extern _Float32 atanpif32 (_Float32 __x) ;   extern _Float32 __atanpif32 (_Float32 __x) ;
   extern _Float32 atanpif32 (_Float32 __x) ;   extern _Float32 __atanpif32 (_Float32 __x) ;

extern _Float32 atan2pif32 (_Float32 __y, _Float32 __x) ;   extern _Float32 __atan2pif32 (_Float32 __y, _Float32 __x) ;
   extern _Float32 atan2pif32 (_Float32 __y, _Float32 __x) ;   extern _Float32 __atan2pif32 (_Float32 __y, _Float32 __x) ;


   extern _Float32 cospif32 (_Float32 __x) ;   extern _Float32 __cospif32 (_Float32 __x) ;

   extern _Float32 sinpif32 (_Float32 __x) ;   extern _Float32 __sinpif32 (_Float32 __x) ;

   extern _Float32 tanpif32 (_Float32 __x) ;   extern _Float32 __tanpif32 (_Float32 __x) ;
#line 89 "/usr/include/bits/mathcalls.h"




   extern _Float32 coshf32 (_Float32 __x) ;   extern _Float32 __coshf32 (_Float32 __x) ;

   extern _Float32 sinhf32 (_Float32 __x) ;   extern _Float32 __sinhf32 (_Float32 __x) ;

   extern _Float32 tanhf32 (_Float32 __x) ;   extern _Float32 __tanhf32 (_Float32 __x) ;

#line 100 "/usr/include/bits/mathcalls.h"

   extern void sincosf32 (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) ;   extern void __sincosf32 (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) ;
#line 104 "/usr/include/bits/mathcalls.h"

#line 106 "/usr/include/bits/mathcalls.h"

   extern _Float32 acoshf32 (_Float32 __x) ;   extern _Float32 __acoshf32 (_Float32 __x) ;

   extern _Float32 asinhf32 (_Float32 __x) ;   extern _Float32 __asinhf32 (_Float32 __x) ;

   extern _Float32 atanhf32 (_Float32 __x) ;   extern _Float32 __atanhf32 (_Float32 __x) ;
#line 113 "/usr/include/bits/mathcalls.h"




   extern _Float32 expf32 (_Float32 __x) ;   extern _Float32 __expf32 (_Float32 __x) ;


extern _Float32 frexpf32 (_Float32 __x, int *__exponent) ;   extern _Float32 __frexpf32 (_Float32 __x, int *__exponent) ;


extern _Float32 ldexpf32 (_Float32 __x, int __exponent) ;   extern _Float32 __ldexpf32 (_Float32 __x, int __exponent) ;


   extern _Float32 logf32 (_Float32 __x) ;   extern _Float32 __logf32 (_Float32 __x) ;


   extern _Float32 log10f32 (_Float32 __x) ;   extern _Float32 __log10f32 (_Float32 __x) ;


extern _Float32 modff32 (_Float32 __x, _Float32 *__iptr) ;   extern _Float32 __modff32 (_Float32 __x, _Float32 *__iptr)  ;

#line 135 "/usr/include/bits/mathcalls.h"

   extern _Float32 exp10f32 (_Float32 __x) ;   extern _Float32 __exp10f32 (_Float32 __x) ;


extern _Float32 exp2m1f32 (_Float32 __x) ;   extern _Float32 __exp2m1f32 (_Float32 __x) ;


extern _Float32 exp10m1f32 (_Float32 __x) ;   extern _Float32 __exp10m1f32 (_Float32 __x) ;


extern _Float32 log2p1f32 (_Float32 __x) ;   extern _Float32 __log2p1f32 (_Float32 __x) ;


extern _Float32 log10p1f32 (_Float32 __x) ;   extern _Float32 __log10p1f32 (_Float32 __x) ;


   extern _Float32 logp1f32 (_Float32 __x) ;   extern _Float32 __logp1f32 (_Float32 __x) ;
#line 153 "/usr/include/bits/mathcalls.h"

#line 155 "/usr/include/bits/mathcalls.h"

   extern _Float32 expm1f32 (_Float32 __x) ;   extern _Float32 __expm1f32 (_Float32 __x) ;


   extern _Float32 log1pf32 (_Float32 __x) ;   extern _Float32 __log1pf32 (_Float32 __x) ;


extern _Float32 logbf32 (_Float32 __x) ;   extern _Float32 __logbf32 (_Float32 __x) ;
#line 164 "/usr/include/bits/mathcalls.h"

#line 166 "/usr/include/bits/mathcalls.h"

   extern _Float32 exp2f32 (_Float32 __x) ;   extern _Float32 __exp2f32 (_Float32 __x) ;


   extern _Float32 log2f32 (_Float32 __x) ;   extern _Float32 __log2f32 (_Float32 __x) ;
#line 172 "/usr/include/bits/mathcalls.h"





   extern _Float32 powf32 (_Float32 __x, _Float32 __y) ;   extern _Float32 __powf32 (_Float32 __x, _Float32 __y) ;


extern _Float32 sqrtf32 (_Float32 __x) ;   extern _Float32 __sqrtf32 (_Float32 __x) ;

#line 183 "/usr/include/bits/mathcalls.h"

   extern _Float32 hypotf32 (_Float32 __x, _Float32 __y) ;   extern _Float32 __hypotf32 (_Float32 __x, _Float32 __y) ;
#line 186 "/usr/include/bits/mathcalls.h"

#line 188 "/usr/include/bits/mathcalls.h"

   extern _Float32 cbrtf32 (_Float32 __x) ;   extern _Float32 __cbrtf32 (_Float32 __x) ;
#line 191 "/usr/include/bits/mathcalls.h"

#line 193 "/usr/include/bits/mathcalls.h"

extern _Float32 compoundnf32 (_Float32 __x, long long int __y) ;   extern _Float32 __compoundnf32 (_Float32 __x, long long int __y) ;


extern _Float32 pownf32 (_Float32 __x, long long int __y) ;   extern _Float32 __pownf32 (_Float32 __x, long long int __y) ;


extern _Float32 powrf32 (_Float32 __x, _Float32 __y) ;   extern _Float32 __powrf32 (_Float32 __x, _Float32 __y) ;


extern _Float32 rootnf32 (_Float32 __x, long long int __y) ;   extern _Float32 __rootnf32 (_Float32 __x, long long int __y) ;


extern _Float32 rsqrtf32 (_Float32 __x) ;   extern _Float32 __rsqrtf32 (_Float32 __x) ;
#line 208 "/usr/include/bits/mathcalls.h"





extern _Float32 ceilf32 (_Float32 __x)  __attribute__ ((__const__));


extern _Float32 fabsf32 (_Float32 __x)  __attribute__ ((__const__));


extern _Float32 floorf32 (_Float32 __x)  __attribute__ ((__const__));


extern _Float32 fmodf32 (_Float32 __x, _Float32 __y) ;   extern _Float32 __fmodf32 (_Float32 __x, _Float32 __y) ;

#line 231 "/usr/include/bits/mathcalls.h"

#line 244 "/usr/include/bits/mathcalls.h"

#line 246 "/usr/include/bits/mathcalls.h"

#line 248 "/usr/include/bits/mathcalls.h"

extern _Float32 copysignf32 (_Float32 __x, _Float32 __y)  __attribute__ ((__const__));
#line 251 "/usr/include/bits/mathcalls.h"

#line 253 "/usr/include/bits/mathcalls.h"

extern _Float32 nanf32 (const char *__tagb) ;   extern _Float32 __nanf32 (const char *__tagb) ;
#line 256 "/usr/include/bits/mathcalls.h"


#line 265 "/usr/include/bits/mathcalls.h"

#line 267 "/usr/include/bits/mathcalls.h"

extern _Float32 j0f32 (_Float32) ;   extern _Float32 __j0f32 (_Float32) ;
extern _Float32 j1f32 (_Float32) ;   extern _Float32 __j1f32 (_Float32) ;
extern _Float32 jnf32 (int, _Float32) ;   extern _Float32 __jnf32 (int, _Float32) ;
extern _Float32 y0f32 (_Float32) ;   extern _Float32 __y0f32 (_Float32) ;
extern _Float32 y1f32 (_Float32) ;   extern _Float32 __y1f32 (_Float32) ;
extern _Float32 ynf32 (int, _Float32) ;   extern _Float32 __ynf32 (int, _Float32) ;
#line 275 "/usr/include/bits/mathcalls.h"


#line 278 "/usr/include/bits/mathcalls.h"

   extern _Float32 erff32 (_Float32) ;   extern _Float32 __erff32 (_Float32) ;
   extern _Float32 erfcf32 (_Float32) ;   extern _Float32 __erfcf32 (_Float32) ;
extern _Float32 lgammaf32 (_Float32) ;   extern _Float32 __lgammaf32 (_Float32) ;
#line 283 "/usr/include/bits/mathcalls.h"

#line 285 "/usr/include/bits/mathcalls.h"

extern _Float32 tgammaf32 (_Float32) ;   extern _Float32 __tgammaf32 (_Float32) ;
#line 288 "/usr/include/bits/mathcalls.h"

#line 295 "/usr/include/bits/mathcalls.h"

#line 297 "/usr/include/bits/mathcalls.h"



extern _Float32 lgammaf32_r (_Float32, int *__signgamp) ;   extern _Float32 __lgammaf32_r (_Float32, int *__signgamp) ;
#line 302 "/usr/include/bits/mathcalls.h"


#line 305 "/usr/include/bits/mathcalls.h"


extern _Float32 rintf32 (_Float32 __x) ;   extern _Float32 __rintf32 (_Float32 __x) ;


extern _Float32 nextafterf32 (_Float32 __x, _Float32 __y) ;   extern _Float32 __nextafterf32 (_Float32 __x, _Float32 __y) ;
#line 314 "/usr/include/bits/mathcalls.h"

#line 316 "/usr/include/bits/mathcalls.h"

extern _Float32 nextdownf32 (_Float32 __x) ;   extern _Float32 __nextdownf32 (_Float32 __x) ;

extern _Float32 nextupf32 (_Float32 __x) ;   extern _Float32 __nextupf32 (_Float32 __x) ;
#line 321 "/usr/include/bits/mathcalls.h"


extern _Float32 remainderf32 (_Float32 __x, _Float32 __y) ;   extern _Float32 __remainderf32 (_Float32 __x, _Float32 __y) ;

#line 326 "/usr/include/bits/mathcalls.h"

extern _Float32 scalbnf32 (_Float32 __x, int __n) ;   extern _Float32 __scalbnf32 (_Float32 __x, int __n) ;
#line 329 "/usr/include/bits/mathcalls.h"


extern int ilogbf32 (_Float32 __x) ;   extern int __ilogbf32 (_Float32 __x) ;
#line 333 "/usr/include/bits/mathcalls.h"

#line 335 "/usr/include/bits/mathcalls.h"

extern long int llogbf32 (_Float32 __x) ;   extern long int __llogbf32 (_Float32 __x) ;
#line 338 "/usr/include/bits/mathcalls.h"

#line 340 "/usr/include/bits/mathcalls.h"

extern _Float32 scalblnf32 (_Float32 __x, long int __n) ;   extern _Float32 __scalblnf32 (_Float32 __x, long int __n) ;



extern _Float32 nearbyintf32 (_Float32 __x) ;   extern _Float32 __nearbyintf32 (_Float32 __x) ;



extern _Float32 roundf32 (_Float32 __x)  __attribute__ ((__const__));



extern _Float32 truncf32 (_Float32 __x)  __attribute__ ((__const__));




extern _Float32 remquof32 (_Float32 __x, _Float32 __y, int *__quo) ;   extern _Float32 __remquof32 (_Float32 __x, _Float32 __y, int *__quo) ;






extern long int lrintf32 (_Float32 __x) ;   extern long int __lrintf32 (_Float32 __x) ;

extern long long int llrintf32 (_Float32 __x) ;   extern long long int __llrintf32 (_Float32 __x) ;



extern long int lroundf32 (_Float32 __x) ;   extern long int __lroundf32 (_Float32 __x) ;

extern long long int llroundf32 (_Float32 __x) ;   extern long long int __llroundf32 (_Float32 __x) ;



extern _Float32 fdimf32 (_Float32 __x, _Float32 __y) ;   extern _Float32 __fdimf32 (_Float32 __x, _Float32 __y) ;

#line 380 "/usr/include/bits/mathcalls.h"

extern _Float32 fmaxf32 (_Float32 __x, _Float32 __y)  __attribute__ ((__const__));


extern _Float32 fminf32 (_Float32 __x, _Float32 __y)  __attribute__ ((__const__));
#line 386 "/usr/include/bits/mathcalls.h"


extern _Float32 fmaf32 (_Float32 __x, _Float32 __y, _Float32 __z) ;   extern _Float32 __fmaf32 (_Float32 __x, _Float32 __y, _Float32 __z) ;
#line 390 "/usr/include/bits/mathcalls.h"

#line 392 "/usr/include/bits/mathcalls.h"

extern _Float32 roundevenf32 (_Float32 __x)  __attribute__ ((__const__));



extern __intmax_t fromfpf32 (_Float32 __x, int __round,
				  unsigned int __width) ;   extern __intmax_t __fromfpf32 (_Float32 __x, int __round,
				  unsigned int __width) ;



extern __uintmax_t ufromfpf32 (_Float32 __x, int __round,
				    unsigned int __width) ;   extern __uintmax_t __ufromfpf32 (_Float32 __x, int __round,
				    unsigned int __width) ;




extern __intmax_t fromfpxf32 (_Float32 __x, int __round,
				   unsigned int __width) ;   extern __intmax_t __fromfpxf32 (_Float32 __x, int __round,
				   unsigned int __width) ;




extern __uintmax_t ufromfpxf32 (_Float32 __x, int __round,
				     unsigned int __width) ;   extern __uintmax_t __ufromfpxf32 (_Float32 __x, int __round,
				     unsigned int __width) ;


extern int canonicalizef32 (_Float32 *__cx, const _Float32 *__x) ;
#line 420 "/usr/include/bits/mathcalls.h"

#line 422 "/usr/include/bits/mathcalls.h"

extern _Float32 fmaxmagf32 (_Float32 __x, _Float32 __y)  __attribute__ ((__const__));


extern _Float32 fminmagf32 (_Float32 __x, _Float32 __y)  __attribute__ ((__const__));
#line 428 "/usr/include/bits/mathcalls.h"

#line 430 "/usr/include/bits/mathcalls.h"

extern _Float32 fmaximumf32 (_Float32 __x, _Float32 __y)  __attribute__ ((__const__));


extern _Float32 fminimumf32 (_Float32 __x, _Float32 __y)  __attribute__ ((__const__));


extern _Float32 fmaximum_numf32 (_Float32 __x, _Float32 __y)  __attribute__ ((__const__));


extern _Float32 fminimum_numf32 (_Float32 __x, _Float32 __y)  __attribute__ ((__const__));


extern _Float32 fmaximum_magf32 (_Float32 __x, _Float32 __y)  __attribute__ ((__const__));


extern _Float32 fminimum_magf32 (_Float32 __x, _Float32 __y)  __attribute__ ((__const__));


extern _Float32 fmaximum_mag_numf32 (_Float32 __x, _Float32 __y)  __attribute__ ((__const__));


extern _Float32 fminimum_mag_numf32 (_Float32 __x, _Float32 __y)  __attribute__ ((__const__));
#line 454 "/usr/include/bits/mathcalls.h"

#line 456 "/usr/include/bits/mathcalls.h"

extern int totalorderf32 (const _Float32 *__x,
				 const _Float32 *__y) 
     __attribute__ ((__pure__));


extern int totalordermagf32 (const _Float32 *__x,
				    const _Float32 *__y) 
     __attribute__ ((__pure__));


extern _Float32 getpayloadf32 (const _Float32 *__x) ;   extern _Float32 __getpayloadf32 (const _Float32 *__x) ;


extern int setpayloadf32 (_Float32 *__x, _Float32 __payload) ;


extern int setpayloadsigf32 (_Float32 *__x, _Float32 __payload) ;
#line 475 "/usr/include/bits/mathcalls.h"
#line 396 "/usr/include/math.h"
#line 402 "/usr/include/math.h"

#line 1 "/usr/include/bits/mathcalls.h"












































#line 48 "/usr/include/bits/mathcalls.h"





   extern _Float64 acosf64 (_Float64 __x) ;   extern _Float64 __acosf64 (_Float64 __x) ;

   extern _Float64 asinf64 (_Float64 __x) ;   extern _Float64 __asinf64 (_Float64 __x) ;

   extern _Float64 atanf64 (_Float64 __x) ;   extern _Float64 __atanf64 (_Float64 __x) ;

   extern _Float64 atan2f64 (_Float64 __y, _Float64 __x) ;   extern _Float64 __atan2f64 (_Float64 __y, _Float64 __x) ;


   extern _Float64 cosf64 (_Float64 __x) ;   extern _Float64 __cosf64 (_Float64 __x) ;

   extern _Float64 sinf64 (_Float64 __x) ;   extern _Float64 __sinf64 (_Float64 __x) ;

   extern _Float64 tanf64 (_Float64 __x) ;   extern _Float64 __tanf64 (_Float64 __x) ;

#line 69 "/usr/include/bits/mathcalls.h"

extern _Float64 acospif64 (_Float64 __x) ;   extern _Float64 __acospif64 (_Float64 __x) ;
   extern _Float64 acospif64 (_Float64 __x) ;   extern _Float64 __acospif64 (_Float64 __x) ;

extern _Float64 asinpif64 (_Float64 __x) ;   extern _Float64 __asinpif64 (_Float64 __x) ;
   extern _Float64 asinpif64 (_Float64 __x) ;   extern _Float64 __asinpif64 (_Float64 __x) ;

extern _Float64 atanpif64 (_Float64 __x) ;   extern _Float64 __atanpif64 (_Float64 __x) ;
   extern _Float64 atanpif64 (_Float64 __x) ;   extern _Float64 __atanpif64 (_Float64 __x) ;

extern _Float64 atan2pif64 (_Float64 __y, _Float64 __x) ;   extern _Float64 __atan2pif64 (_Float64 __y, _Float64 __x) ;
   extern _Float64 atan2pif64 (_Float64 __y, _Float64 __x) ;   extern _Float64 __atan2pif64 (_Float64 __y, _Float64 __x) ;


   extern _Float64 cospif64 (_Float64 __x) ;   extern _Float64 __cospif64 (_Float64 __x) ;

   extern _Float64 sinpif64 (_Float64 __x) ;   extern _Float64 __sinpif64 (_Float64 __x) ;

   extern _Float64 tanpif64 (_Float64 __x) ;   extern _Float64 __tanpif64 (_Float64 __x) ;
#line 89 "/usr/include/bits/mathcalls.h"




   extern _Float64 coshf64 (_Float64 __x) ;   extern _Float64 __coshf64 (_Float64 __x) ;

   extern _Float64 sinhf64 (_Float64 __x) ;   extern _Float64 __sinhf64 (_Float64 __x) ;

   extern _Float64 tanhf64 (_Float64 __x) ;   extern _Float64 __tanhf64 (_Float64 __x) ;

#line 100 "/usr/include/bits/mathcalls.h"

   extern void sincosf64 (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) ;   extern void __sincosf64 (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) ;
#line 104 "/usr/include/bits/mathcalls.h"

#line 106 "/usr/include/bits/mathcalls.h"

   extern _Float64 acoshf64 (_Float64 __x) ;   extern _Float64 __acoshf64 (_Float64 __x) ;

   extern _Float64 asinhf64 (_Float64 __x) ;   extern _Float64 __asinhf64 (_Float64 __x) ;

   extern _Float64 atanhf64 (_Float64 __x) ;   extern _Float64 __atanhf64 (_Float64 __x) ;
#line 113 "/usr/include/bits/mathcalls.h"




   extern _Float64 expf64 (_Float64 __x) ;   extern _Float64 __expf64 (_Float64 __x) ;


extern _Float64 frexpf64 (_Float64 __x, int *__exponent) ;   extern _Float64 __frexpf64 (_Float64 __x, int *__exponent) ;


extern _Float64 ldexpf64 (_Float64 __x, int __exponent) ;   extern _Float64 __ldexpf64 (_Float64 __x, int __exponent) ;


   extern _Float64 logf64 (_Float64 __x) ;   extern _Float64 __logf64 (_Float64 __x) ;


   extern _Float64 log10f64 (_Float64 __x) ;   extern _Float64 __log10f64 (_Float64 __x) ;


extern _Float64 modff64 (_Float64 __x, _Float64 *__iptr) ;   extern _Float64 __modff64 (_Float64 __x, _Float64 *__iptr)  ;

#line 135 "/usr/include/bits/mathcalls.h"

   extern _Float64 exp10f64 (_Float64 __x) ;   extern _Float64 __exp10f64 (_Float64 __x) ;


extern _Float64 exp2m1f64 (_Float64 __x) ;   extern _Float64 __exp2m1f64 (_Float64 __x) ;


extern _Float64 exp10m1f64 (_Float64 __x) ;   extern _Float64 __exp10m1f64 (_Float64 __x) ;


extern _Float64 log2p1f64 (_Float64 __x) ;   extern _Float64 __log2p1f64 (_Float64 __x) ;


extern _Float64 log10p1f64 (_Float64 __x) ;   extern _Float64 __log10p1f64 (_Float64 __x) ;


   extern _Float64 logp1f64 (_Float64 __x) ;   extern _Float64 __logp1f64 (_Float64 __x) ;
#line 153 "/usr/include/bits/mathcalls.h"

#line 155 "/usr/include/bits/mathcalls.h"

   extern _Float64 expm1f64 (_Float64 __x) ;   extern _Float64 __expm1f64 (_Float64 __x) ;


   extern _Float64 log1pf64 (_Float64 __x) ;   extern _Float64 __log1pf64 (_Float64 __x) ;


extern _Float64 logbf64 (_Float64 __x) ;   extern _Float64 __logbf64 (_Float64 __x) ;
#line 164 "/usr/include/bits/mathcalls.h"

#line 166 "/usr/include/bits/mathcalls.h"

   extern _Float64 exp2f64 (_Float64 __x) ;   extern _Float64 __exp2f64 (_Float64 __x) ;


   extern _Float64 log2f64 (_Float64 __x) ;   extern _Float64 __log2f64 (_Float64 __x) ;
#line 172 "/usr/include/bits/mathcalls.h"





   extern _Float64 powf64 (_Float64 __x, _Float64 __y) ;   extern _Float64 __powf64 (_Float64 __x, _Float64 __y) ;


extern _Float64 sqrtf64 (_Float64 __x) ;   extern _Float64 __sqrtf64 (_Float64 __x) ;

#line 183 "/usr/include/bits/mathcalls.h"

   extern _Float64 hypotf64 (_Float64 __x, _Float64 __y) ;   extern _Float64 __hypotf64 (_Float64 __x, _Float64 __y) ;
#line 186 "/usr/include/bits/mathcalls.h"

#line 188 "/usr/include/bits/mathcalls.h"

   extern _Float64 cbrtf64 (_Float64 __x) ;   extern _Float64 __cbrtf64 (_Float64 __x) ;
#line 191 "/usr/include/bits/mathcalls.h"

#line 193 "/usr/include/bits/mathcalls.h"

extern _Float64 compoundnf64 (_Float64 __x, long long int __y) ;   extern _Float64 __compoundnf64 (_Float64 __x, long long int __y) ;


extern _Float64 pownf64 (_Float64 __x, long long int __y) ;   extern _Float64 __pownf64 (_Float64 __x, long long int __y) ;


extern _Float64 powrf64 (_Float64 __x, _Float64 __y) ;   extern _Float64 __powrf64 (_Float64 __x, _Float64 __y) ;


extern _Float64 rootnf64 (_Float64 __x, long long int __y) ;   extern _Float64 __rootnf64 (_Float64 __x, long long int __y) ;


extern _Float64 rsqrtf64 (_Float64 __x) ;   extern _Float64 __rsqrtf64 (_Float64 __x) ;
#line 208 "/usr/include/bits/mathcalls.h"





extern _Float64 ceilf64 (_Float64 __x)  __attribute__ ((__const__));


extern _Float64 fabsf64 (_Float64 __x)  __attribute__ ((__const__));


extern _Float64 floorf64 (_Float64 __x)  __attribute__ ((__const__));


extern _Float64 fmodf64 (_Float64 __x, _Float64 __y) ;   extern _Float64 __fmodf64 (_Float64 __x, _Float64 __y) ;

#line 231 "/usr/include/bits/mathcalls.h"

#line 244 "/usr/include/bits/mathcalls.h"

#line 246 "/usr/include/bits/mathcalls.h"

#line 248 "/usr/include/bits/mathcalls.h"

extern _Float64 copysignf64 (_Float64 __x, _Float64 __y)  __attribute__ ((__const__));
#line 251 "/usr/include/bits/mathcalls.h"

#line 253 "/usr/include/bits/mathcalls.h"

extern _Float64 nanf64 (const char *__tagb) ;   extern _Float64 __nanf64 (const char *__tagb) ;
#line 256 "/usr/include/bits/mathcalls.h"


#line 265 "/usr/include/bits/mathcalls.h"

#line 267 "/usr/include/bits/mathcalls.h"

extern _Float64 j0f64 (_Float64) ;   extern _Float64 __j0f64 (_Float64) ;
extern _Float64 j1f64 (_Float64) ;   extern _Float64 __j1f64 (_Float64) ;
extern _Float64 jnf64 (int, _Float64) ;   extern _Float64 __jnf64 (int, _Float64) ;
extern _Float64 y0f64 (_Float64) ;   extern _Float64 __y0f64 (_Float64) ;
extern _Float64 y1f64 (_Float64) ;   extern _Float64 __y1f64 (_Float64) ;
extern _Float64 ynf64 (int, _Float64) ;   extern _Float64 __ynf64 (int, _Float64) ;
#line 275 "/usr/include/bits/mathcalls.h"


#line 278 "/usr/include/bits/mathcalls.h"

   extern _Float64 erff64 (_Float64) ;   extern _Float64 __erff64 (_Float64) ;
   extern _Float64 erfcf64 (_Float64) ;   extern _Float64 __erfcf64 (_Float64) ;
extern _Float64 lgammaf64 (_Float64) ;   extern _Float64 __lgammaf64 (_Float64) ;
#line 283 "/usr/include/bits/mathcalls.h"

#line 285 "/usr/include/bits/mathcalls.h"

extern _Float64 tgammaf64 (_Float64) ;   extern _Float64 __tgammaf64 (_Float64) ;
#line 288 "/usr/include/bits/mathcalls.h"

#line 295 "/usr/include/bits/mathcalls.h"

#line 297 "/usr/include/bits/mathcalls.h"



extern _Float64 lgammaf64_r (_Float64, int *__signgamp) ;   extern _Float64 __lgammaf64_r (_Float64, int *__signgamp) ;
#line 302 "/usr/include/bits/mathcalls.h"


#line 305 "/usr/include/bits/mathcalls.h"


extern _Float64 rintf64 (_Float64 __x) ;   extern _Float64 __rintf64 (_Float64 __x) ;


extern _Float64 nextafterf64 (_Float64 __x, _Float64 __y) ;   extern _Float64 __nextafterf64 (_Float64 __x, _Float64 __y) ;
#line 314 "/usr/include/bits/mathcalls.h"

#line 316 "/usr/include/bits/mathcalls.h"

extern _Float64 nextdownf64 (_Float64 __x) ;   extern _Float64 __nextdownf64 (_Float64 __x) ;

extern _Float64 nextupf64 (_Float64 __x) ;   extern _Float64 __nextupf64 (_Float64 __x) ;
#line 321 "/usr/include/bits/mathcalls.h"


extern _Float64 remainderf64 (_Float64 __x, _Float64 __y) ;   extern _Float64 __remainderf64 (_Float64 __x, _Float64 __y) ;

#line 326 "/usr/include/bits/mathcalls.h"

extern _Float64 scalbnf64 (_Float64 __x, int __n) ;   extern _Float64 __scalbnf64 (_Float64 __x, int __n) ;
#line 329 "/usr/include/bits/mathcalls.h"


extern int ilogbf64 (_Float64 __x) ;   extern int __ilogbf64 (_Float64 __x) ;
#line 333 "/usr/include/bits/mathcalls.h"

#line 335 "/usr/include/bits/mathcalls.h"

extern long int llogbf64 (_Float64 __x) ;   extern long int __llogbf64 (_Float64 __x) ;
#line 338 "/usr/include/bits/mathcalls.h"

#line 340 "/usr/include/bits/mathcalls.h"

extern _Float64 scalblnf64 (_Float64 __x, long int __n) ;   extern _Float64 __scalblnf64 (_Float64 __x, long int __n) ;



extern _Float64 nearbyintf64 (_Float64 __x) ;   extern _Float64 __nearbyintf64 (_Float64 __x) ;



extern _Float64 roundf64 (_Float64 __x)  __attribute__ ((__const__));



extern _Float64 truncf64 (_Float64 __x)  __attribute__ ((__const__));




extern _Float64 remquof64 (_Float64 __x, _Float64 __y, int *__quo) ;   extern _Float64 __remquof64 (_Float64 __x, _Float64 __y, int *__quo) ;






extern long int lrintf64 (_Float64 __x) ;   extern long int __lrintf64 (_Float64 __x) ;

extern long long int llrintf64 (_Float64 __x) ;   extern long long int __llrintf64 (_Float64 __x) ;



extern long int lroundf64 (_Float64 __x) ;   extern long int __lroundf64 (_Float64 __x) ;

extern long long int llroundf64 (_Float64 __x) ;   extern long long int __llroundf64 (_Float64 __x) ;



extern _Float64 fdimf64 (_Float64 __x, _Float64 __y) ;   extern _Float64 __fdimf64 (_Float64 __x, _Float64 __y) ;

#line 380 "/usr/include/bits/mathcalls.h"

extern _Float64 fmaxf64 (_Float64 __x, _Float64 __y)  __attribute__ ((__const__));


extern _Float64 fminf64 (_Float64 __x, _Float64 __y)  __attribute__ ((__const__));
#line 386 "/usr/include/bits/mathcalls.h"


extern _Float64 fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) ;   extern _Float64 __fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) ;
#line 390 "/usr/include/bits/mathcalls.h"

#line 392 "/usr/include/bits/mathcalls.h"

extern _Float64 roundevenf64 (_Float64 __x)  __attribute__ ((__const__));



extern __intmax_t fromfpf64 (_Float64 __x, int __round,
				  unsigned int __width) ;   extern __intmax_t __fromfpf64 (_Float64 __x, int __round,
				  unsigned int __width) ;



extern __uintmax_t ufromfpf64 (_Float64 __x, int __round,
				    unsigned int __width) ;   extern __uintmax_t __ufromfpf64 (_Float64 __x, int __round,
				    unsigned int __width) ;




extern __intmax_t fromfpxf64 (_Float64 __x, int __round,
				   unsigned int __width) ;   extern __intmax_t __fromfpxf64 (_Float64 __x, int __round,
				   unsigned int __width) ;




extern __uintmax_t ufromfpxf64 (_Float64 __x, int __round,
				     unsigned int __width) ;   extern __uintmax_t __ufromfpxf64 (_Float64 __x, int __round,
				     unsigned int __width) ;


extern int canonicalizef64 (_Float64 *__cx, const _Float64 *__x) ;
#line 420 "/usr/include/bits/mathcalls.h"

#line 422 "/usr/include/bits/mathcalls.h"

extern _Float64 fmaxmagf64 (_Float64 __x, _Float64 __y)  __attribute__ ((__const__));


extern _Float64 fminmagf64 (_Float64 __x, _Float64 __y)  __attribute__ ((__const__));
#line 428 "/usr/include/bits/mathcalls.h"

#line 430 "/usr/include/bits/mathcalls.h"

extern _Float64 fmaximumf64 (_Float64 __x, _Float64 __y)  __attribute__ ((__const__));


extern _Float64 fminimumf64 (_Float64 __x, _Float64 __y)  __attribute__ ((__const__));


extern _Float64 fmaximum_numf64 (_Float64 __x, _Float64 __y)  __attribute__ ((__const__));


extern _Float64 fminimum_numf64 (_Float64 __x, _Float64 __y)  __attribute__ ((__const__));


extern _Float64 fmaximum_magf64 (_Float64 __x, _Float64 __y)  __attribute__ ((__const__));


extern _Float64 fminimum_magf64 (_Float64 __x, _Float64 __y)  __attribute__ ((__const__));


extern _Float64 fmaximum_mag_numf64 (_Float64 __x, _Float64 __y)  __attribute__ ((__const__));


extern _Float64 fminimum_mag_numf64 (_Float64 __x, _Float64 __y)  __attribute__ ((__const__));
#line 454 "/usr/include/bits/mathcalls.h"

#line 456 "/usr/include/bits/mathcalls.h"

extern int totalorderf64 (const _Float64 *__x,
				 const _Float64 *__y) 
     __attribute__ ((__pure__));


extern int totalordermagf64 (const _Float64 *__x,
				    const _Float64 *__y) 
     __attribute__ ((__pure__));


extern _Float64 getpayloadf64 (const _Float64 *__x) ;   extern _Float64 __getpayloadf64 (const _Float64 *__x) ;


extern int setpayloadf64 (_Float64 *__x, _Float64 __payload) ;


extern int setpayloadsigf64 (_Float64 *__x, _Float64 __payload) ;
#line 475 "/usr/include/bits/mathcalls.h"
#line 413 "/usr/include/math.h"
#line 419 "/usr/include/math.h"

#line 436 "/usr/include/math.h"

#line 1 "/usr/include/bits/mathcalls.h"












































#line 48 "/usr/include/bits/mathcalls.h"





   extern _Float32x acosf32x (_Float32x __x) ;   extern _Float32x __acosf32x (_Float32x __x) ;

   extern _Float32x asinf32x (_Float32x __x) ;   extern _Float32x __asinf32x (_Float32x __x) ;

   extern _Float32x atanf32x (_Float32x __x) ;   extern _Float32x __atanf32x (_Float32x __x) ;

   extern _Float32x atan2f32x (_Float32x __y, _Float32x __x) ;   extern _Float32x __atan2f32x (_Float32x __y, _Float32x __x) ;


   extern _Float32x cosf32x (_Float32x __x) ;   extern _Float32x __cosf32x (_Float32x __x) ;

   extern _Float32x sinf32x (_Float32x __x) ;   extern _Float32x __sinf32x (_Float32x __x) ;

   extern _Float32x tanf32x (_Float32x __x) ;   extern _Float32x __tanf32x (_Float32x __x) ;

#line 69 "/usr/include/bits/mathcalls.h"

extern _Float32x acospif32x (_Float32x __x) ;   extern _Float32x __acospif32x (_Float32x __x) ;
   extern _Float32x acospif32x (_Float32x __x) ;   extern _Float32x __acospif32x (_Float32x __x) ;

extern _Float32x asinpif32x (_Float32x __x) ;   extern _Float32x __asinpif32x (_Float32x __x) ;
   extern _Float32x asinpif32x (_Float32x __x) ;   extern _Float32x __asinpif32x (_Float32x __x) ;

extern _Float32x atanpif32x (_Float32x __x) ;   extern _Float32x __atanpif32x (_Float32x __x) ;
   extern _Float32x atanpif32x (_Float32x __x) ;   extern _Float32x __atanpif32x (_Float32x __x) ;

extern _Float32x atan2pif32x (_Float32x __y, _Float32x __x) ;   extern _Float32x __atan2pif32x (_Float32x __y, _Float32x __x) ;
   extern _Float32x atan2pif32x (_Float32x __y, _Float32x __x) ;   extern _Float32x __atan2pif32x (_Float32x __y, _Float32x __x) ;


   extern _Float32x cospif32x (_Float32x __x) ;   extern _Float32x __cospif32x (_Float32x __x) ;

   extern _Float32x sinpif32x (_Float32x __x) ;   extern _Float32x __sinpif32x (_Float32x __x) ;

   extern _Float32x tanpif32x (_Float32x __x) ;   extern _Float32x __tanpif32x (_Float32x __x) ;
#line 89 "/usr/include/bits/mathcalls.h"




   extern _Float32x coshf32x (_Float32x __x) ;   extern _Float32x __coshf32x (_Float32x __x) ;

   extern _Float32x sinhf32x (_Float32x __x) ;   extern _Float32x __sinhf32x (_Float32x __x) ;

   extern _Float32x tanhf32x (_Float32x __x) ;   extern _Float32x __tanhf32x (_Float32x __x) ;

#line 100 "/usr/include/bits/mathcalls.h"

   extern void sincosf32x (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) ;   extern void __sincosf32x (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) ;
#line 104 "/usr/include/bits/mathcalls.h"

#line 106 "/usr/include/bits/mathcalls.h"

   extern _Float32x acoshf32x (_Float32x __x) ;   extern _Float32x __acoshf32x (_Float32x __x) ;

   extern _Float32x asinhf32x (_Float32x __x) ;   extern _Float32x __asinhf32x (_Float32x __x) ;

   extern _Float32x atanhf32x (_Float32x __x) ;   extern _Float32x __atanhf32x (_Float32x __x) ;
#line 113 "/usr/include/bits/mathcalls.h"




   extern _Float32x expf32x (_Float32x __x) ;   extern _Float32x __expf32x (_Float32x __x) ;


extern _Float32x frexpf32x (_Float32x __x, int *__exponent) ;   extern _Float32x __frexpf32x (_Float32x __x, int *__exponent) ;


extern _Float32x ldexpf32x (_Float32x __x, int __exponent) ;   extern _Float32x __ldexpf32x (_Float32x __x, int __exponent) ;


   extern _Float32x logf32x (_Float32x __x) ;   extern _Float32x __logf32x (_Float32x __x) ;


   extern _Float32x log10f32x (_Float32x __x) ;   extern _Float32x __log10f32x (_Float32x __x) ;


extern _Float32x modff32x (_Float32x __x, _Float32x *__iptr) ;   extern _Float32x __modff32x (_Float32x __x, _Float32x *__iptr)  ;

#line 135 "/usr/include/bits/mathcalls.h"

   extern _Float32x exp10f32x (_Float32x __x) ;   extern _Float32x __exp10f32x (_Float32x __x) ;


extern _Float32x exp2m1f32x (_Float32x __x) ;   extern _Float32x __exp2m1f32x (_Float32x __x) ;


extern _Float32x exp10m1f32x (_Float32x __x) ;   extern _Float32x __exp10m1f32x (_Float32x __x) ;


extern _Float32x log2p1f32x (_Float32x __x) ;   extern _Float32x __log2p1f32x (_Float32x __x) ;


extern _Float32x log10p1f32x (_Float32x __x) ;   extern _Float32x __log10p1f32x (_Float32x __x) ;


   extern _Float32x logp1f32x (_Float32x __x) ;   extern _Float32x __logp1f32x (_Float32x __x) ;
#line 153 "/usr/include/bits/mathcalls.h"

#line 155 "/usr/include/bits/mathcalls.h"

   extern _Float32x expm1f32x (_Float32x __x) ;   extern _Float32x __expm1f32x (_Float32x __x) ;


   extern _Float32x log1pf32x (_Float32x __x) ;   extern _Float32x __log1pf32x (_Float32x __x) ;


extern _Float32x logbf32x (_Float32x __x) ;   extern _Float32x __logbf32x (_Float32x __x) ;
#line 164 "/usr/include/bits/mathcalls.h"

#line 166 "/usr/include/bits/mathcalls.h"

   extern _Float32x exp2f32x (_Float32x __x) ;   extern _Float32x __exp2f32x (_Float32x __x) ;


   extern _Float32x log2f32x (_Float32x __x) ;   extern _Float32x __log2f32x (_Float32x __x) ;
#line 172 "/usr/include/bits/mathcalls.h"





   extern _Float32x powf32x (_Float32x __x, _Float32x __y) ;   extern _Float32x __powf32x (_Float32x __x, _Float32x __y) ;


extern _Float32x sqrtf32x (_Float32x __x) ;   extern _Float32x __sqrtf32x (_Float32x __x) ;

#line 183 "/usr/include/bits/mathcalls.h"

   extern _Float32x hypotf32x (_Float32x __x, _Float32x __y) ;   extern _Float32x __hypotf32x (_Float32x __x, _Float32x __y) ;
#line 186 "/usr/include/bits/mathcalls.h"

#line 188 "/usr/include/bits/mathcalls.h"

   extern _Float32x cbrtf32x (_Float32x __x) ;   extern _Float32x __cbrtf32x (_Float32x __x) ;
#line 191 "/usr/include/bits/mathcalls.h"

#line 193 "/usr/include/bits/mathcalls.h"

extern _Float32x compoundnf32x (_Float32x __x, long long int __y) ;   extern _Float32x __compoundnf32x (_Float32x __x, long long int __y) ;


extern _Float32x pownf32x (_Float32x __x, long long int __y) ;   extern _Float32x __pownf32x (_Float32x __x, long long int __y) ;


extern _Float32x powrf32x (_Float32x __x, _Float32x __y) ;   extern _Float32x __powrf32x (_Float32x __x, _Float32x __y) ;


extern _Float32x rootnf32x (_Float32x __x, long long int __y) ;   extern _Float32x __rootnf32x (_Float32x __x, long long int __y) ;


extern _Float32x rsqrtf32x (_Float32x __x) ;   extern _Float32x __rsqrtf32x (_Float32x __x) ;
#line 208 "/usr/include/bits/mathcalls.h"





extern _Float32x ceilf32x (_Float32x __x)  __attribute__ ((__const__));


extern _Float32x fabsf32x (_Float32x __x)  __attribute__ ((__const__));


extern _Float32x floorf32x (_Float32x __x)  __attribute__ ((__const__));


extern _Float32x fmodf32x (_Float32x __x, _Float32x __y) ;   extern _Float32x __fmodf32x (_Float32x __x, _Float32x __y) ;

#line 231 "/usr/include/bits/mathcalls.h"

#line 244 "/usr/include/bits/mathcalls.h"

#line 246 "/usr/include/bits/mathcalls.h"

#line 248 "/usr/include/bits/mathcalls.h"

extern _Float32x copysignf32x (_Float32x __x, _Float32x __y)  __attribute__ ((__const__));
#line 251 "/usr/include/bits/mathcalls.h"

#line 253 "/usr/include/bits/mathcalls.h"

extern _Float32x nanf32x (const char *__tagb) ;   extern _Float32x __nanf32x (const char *__tagb) ;
#line 256 "/usr/include/bits/mathcalls.h"


#line 265 "/usr/include/bits/mathcalls.h"

#line 267 "/usr/include/bits/mathcalls.h"

extern _Float32x j0f32x (_Float32x) ;   extern _Float32x __j0f32x (_Float32x) ;
extern _Float32x j1f32x (_Float32x) ;   extern _Float32x __j1f32x (_Float32x) ;
extern _Float32x jnf32x (int, _Float32x) ;   extern _Float32x __jnf32x (int, _Float32x) ;
extern _Float32x y0f32x (_Float32x) ;   extern _Float32x __y0f32x (_Float32x) ;
extern _Float32x y1f32x (_Float32x) ;   extern _Float32x __y1f32x (_Float32x) ;
extern _Float32x ynf32x (int, _Float32x) ;   extern _Float32x __ynf32x (int, _Float32x) ;
#line 275 "/usr/include/bits/mathcalls.h"


#line 278 "/usr/include/bits/mathcalls.h"

   extern _Float32x erff32x (_Float32x) ;   extern _Float32x __erff32x (_Float32x) ;
   extern _Float32x erfcf32x (_Float32x) ;   extern _Float32x __erfcf32x (_Float32x) ;
extern _Float32x lgammaf32x (_Float32x) ;   extern _Float32x __lgammaf32x (_Float32x) ;
#line 283 "/usr/include/bits/mathcalls.h"

#line 285 "/usr/include/bits/mathcalls.h"

extern _Float32x tgammaf32x (_Float32x) ;   extern _Float32x __tgammaf32x (_Float32x) ;
#line 288 "/usr/include/bits/mathcalls.h"

#line 295 "/usr/include/bits/mathcalls.h"

#line 297 "/usr/include/bits/mathcalls.h"



extern _Float32x lgammaf32x_r (_Float32x, int *__signgamp) ;   extern _Float32x __lgammaf32x_r (_Float32x, int *__signgamp) ;
#line 302 "/usr/include/bits/mathcalls.h"


#line 305 "/usr/include/bits/mathcalls.h"


extern _Float32x rintf32x (_Float32x __x) ;   extern _Float32x __rintf32x (_Float32x __x) ;


extern _Float32x nextafterf32x (_Float32x __x, _Float32x __y) ;   extern _Float32x __nextafterf32x (_Float32x __x, _Float32x __y) ;
#line 314 "/usr/include/bits/mathcalls.h"

#line 316 "/usr/include/bits/mathcalls.h"

extern _Float32x nextdownf32x (_Float32x __x) ;   extern _Float32x __nextdownf32x (_Float32x __x) ;

extern _Float32x nextupf32x (_Float32x __x) ;   extern _Float32x __nextupf32x (_Float32x __x) ;
#line 321 "/usr/include/bits/mathcalls.h"


extern _Float32x remainderf32x (_Float32x __x, _Float32x __y) ;   extern _Float32x __remainderf32x (_Float32x __x, _Float32x __y) ;

#line 326 "/usr/include/bits/mathcalls.h"

extern _Float32x scalbnf32x (_Float32x __x, int __n) ;   extern _Float32x __scalbnf32x (_Float32x __x, int __n) ;
#line 329 "/usr/include/bits/mathcalls.h"


extern int ilogbf32x (_Float32x __x) ;   extern int __ilogbf32x (_Float32x __x) ;
#line 333 "/usr/include/bits/mathcalls.h"

#line 335 "/usr/include/bits/mathcalls.h"

extern long int llogbf32x (_Float32x __x) ;   extern long int __llogbf32x (_Float32x __x) ;
#line 338 "/usr/include/bits/mathcalls.h"

#line 340 "/usr/include/bits/mathcalls.h"

extern _Float32x scalblnf32x (_Float32x __x, long int __n) ;   extern _Float32x __scalblnf32x (_Float32x __x, long int __n) ;



extern _Float32x nearbyintf32x (_Float32x __x) ;   extern _Float32x __nearbyintf32x (_Float32x __x) ;



extern _Float32x roundf32x (_Float32x __x)  __attribute__ ((__const__));



extern _Float32x truncf32x (_Float32x __x)  __attribute__ ((__const__));




extern _Float32x remquof32x (_Float32x __x, _Float32x __y, int *__quo) ;   extern _Float32x __remquof32x (_Float32x __x, _Float32x __y, int *__quo) ;






extern long int lrintf32x (_Float32x __x) ;   extern long int __lrintf32x (_Float32x __x) ;

extern long long int llrintf32x (_Float32x __x) ;   extern long long int __llrintf32x (_Float32x __x) ;



extern long int lroundf32x (_Float32x __x) ;   extern long int __lroundf32x (_Float32x __x) ;

extern long long int llroundf32x (_Float32x __x) ;   extern long long int __llroundf32x (_Float32x __x) ;



extern _Float32x fdimf32x (_Float32x __x, _Float32x __y) ;   extern _Float32x __fdimf32x (_Float32x __x, _Float32x __y) ;

#line 380 "/usr/include/bits/mathcalls.h"

extern _Float32x fmaxf32x (_Float32x __x, _Float32x __y)  __attribute__ ((__const__));


extern _Float32x fminf32x (_Float32x __x, _Float32x __y)  __attribute__ ((__const__));
#line 386 "/usr/include/bits/mathcalls.h"


extern _Float32x fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) ;   extern _Float32x __fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) ;
#line 390 "/usr/include/bits/mathcalls.h"

#line 392 "/usr/include/bits/mathcalls.h"

extern _Float32x roundevenf32x (_Float32x __x)  __attribute__ ((__const__));



extern __intmax_t fromfpf32x (_Float32x __x, int __round,
				  unsigned int __width) ;   extern __intmax_t __fromfpf32x (_Float32x __x, int __round,
				  unsigned int __width) ;



extern __uintmax_t ufromfpf32x (_Float32x __x, int __round,
				    unsigned int __width) ;   extern __uintmax_t __ufromfpf32x (_Float32x __x, int __round,
				    unsigned int __width) ;




extern __intmax_t fromfpxf32x (_Float32x __x, int __round,
				   unsigned int __width) ;   extern __intmax_t __fromfpxf32x (_Float32x __x, int __round,
				   unsigned int __width) ;




extern __uintmax_t ufromfpxf32x (_Float32x __x, int __round,
				     unsigned int __width) ;   extern __uintmax_t __ufromfpxf32x (_Float32x __x, int __round,
				     unsigned int __width) ;


extern int canonicalizef32x (_Float32x *__cx, const _Float32x *__x) ;
#line 420 "/usr/include/bits/mathcalls.h"

#line 422 "/usr/include/bits/mathcalls.h"

extern _Float32x fmaxmagf32x (_Float32x __x, _Float32x __y)  __attribute__ ((__const__));


extern _Float32x fminmagf32x (_Float32x __x, _Float32x __y)  __attribute__ ((__const__));
#line 428 "/usr/include/bits/mathcalls.h"

#line 430 "/usr/include/bits/mathcalls.h"

extern _Float32x fmaximumf32x (_Float32x __x, _Float32x __y)  __attribute__ ((__const__));


extern _Float32x fminimumf32x (_Float32x __x, _Float32x __y)  __attribute__ ((__const__));


extern _Float32x fmaximum_numf32x (_Float32x __x, _Float32x __y)  __attribute__ ((__const__));


extern _Float32x fminimum_numf32x (_Float32x __x, _Float32x __y)  __attribute__ ((__const__));


extern _Float32x fmaximum_magf32x (_Float32x __x, _Float32x __y)  __attribute__ ((__const__));


extern _Float32x fminimum_magf32x (_Float32x __x, _Float32x __y)  __attribute__ ((__const__));


extern _Float32x fmaximum_mag_numf32x (_Float32x __x, _Float32x __y)  __attribute__ ((__const__));


extern _Float32x fminimum_mag_numf32x (_Float32x __x, _Float32x __y)  __attribute__ ((__const__));
#line 454 "/usr/include/bits/mathcalls.h"

#line 456 "/usr/include/bits/mathcalls.h"

extern int totalorderf32x (const _Float32x *__x,
				 const _Float32x *__y) 
     __attribute__ ((__pure__));


extern int totalordermagf32x (const _Float32x *__x,
				    const _Float32x *__y) 
     __attribute__ ((__pure__));


extern _Float32x getpayloadf32x (const _Float32x *__x) ;   extern _Float32x __getpayloadf32x (const _Float32x *__x) ;


extern int setpayloadf32x (_Float32x *__x, _Float32x __payload) ;


extern int setpayloadsigf32x (_Float32x *__x, _Float32x __payload) ;
#line 475 "/usr/include/bits/mathcalls.h"
#line 447 "/usr/include/math.h"
#line 453 "/usr/include/math.h"

#line 1 "/usr/include/bits/mathcalls.h"












































#line 48 "/usr/include/bits/mathcalls.h"





   extern _Float64x acosf64x (_Float64x __x) ;   extern _Float64x __acosf64x (_Float64x __x) ;

   extern _Float64x asinf64x (_Float64x __x) ;   extern _Float64x __asinf64x (_Float64x __x) ;

   extern _Float64x atanf64x (_Float64x __x) ;   extern _Float64x __atanf64x (_Float64x __x) ;

   extern _Float64x atan2f64x (_Float64x __y, _Float64x __x) ;   extern _Float64x __atan2f64x (_Float64x __y, _Float64x __x) ;


   extern _Float64x cosf64x (_Float64x __x) ;   extern _Float64x __cosf64x (_Float64x __x) ;

   extern _Float64x sinf64x (_Float64x __x) ;   extern _Float64x __sinf64x (_Float64x __x) ;

   extern _Float64x tanf64x (_Float64x __x) ;   extern _Float64x __tanf64x (_Float64x __x) ;

#line 69 "/usr/include/bits/mathcalls.h"

extern _Float64x acospif64x (_Float64x __x) ;   extern _Float64x __acospif64x (_Float64x __x) ;
   extern _Float64x acospif64x (_Float64x __x) ;   extern _Float64x __acospif64x (_Float64x __x) ;

extern _Float64x asinpif64x (_Float64x __x) ;   extern _Float64x __asinpif64x (_Float64x __x) ;
   extern _Float64x asinpif64x (_Float64x __x) ;   extern _Float64x __asinpif64x (_Float64x __x) ;

extern _Float64x atanpif64x (_Float64x __x) ;   extern _Float64x __atanpif64x (_Float64x __x) ;
   extern _Float64x atanpif64x (_Float64x __x) ;   extern _Float64x __atanpif64x (_Float64x __x) ;

extern _Float64x atan2pif64x (_Float64x __y, _Float64x __x) ;   extern _Float64x __atan2pif64x (_Float64x __y, _Float64x __x) ;
   extern _Float64x atan2pif64x (_Float64x __y, _Float64x __x) ;   extern _Float64x __atan2pif64x (_Float64x __y, _Float64x __x) ;


   extern _Float64x cospif64x (_Float64x __x) ;   extern _Float64x __cospif64x (_Float64x __x) ;

   extern _Float64x sinpif64x (_Float64x __x) ;   extern _Float64x __sinpif64x (_Float64x __x) ;

   extern _Float64x tanpif64x (_Float64x __x) ;   extern _Float64x __tanpif64x (_Float64x __x) ;
#line 89 "/usr/include/bits/mathcalls.h"




   extern _Float64x coshf64x (_Float64x __x) ;   extern _Float64x __coshf64x (_Float64x __x) ;

   extern _Float64x sinhf64x (_Float64x __x) ;   extern _Float64x __sinhf64x (_Float64x __x) ;

   extern _Float64x tanhf64x (_Float64x __x) ;   extern _Float64x __tanhf64x (_Float64x __x) ;

#line 100 "/usr/include/bits/mathcalls.h"

   extern void sincosf64x (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) ;   extern void __sincosf64x (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) ;
#line 104 "/usr/include/bits/mathcalls.h"

#line 106 "/usr/include/bits/mathcalls.h"

   extern _Float64x acoshf64x (_Float64x __x) ;   extern _Float64x __acoshf64x (_Float64x __x) ;

   extern _Float64x asinhf64x (_Float64x __x) ;   extern _Float64x __asinhf64x (_Float64x __x) ;

   extern _Float64x atanhf64x (_Float64x __x) ;   extern _Float64x __atanhf64x (_Float64x __x) ;
#line 113 "/usr/include/bits/mathcalls.h"




   extern _Float64x expf64x (_Float64x __x) ;   extern _Float64x __expf64x (_Float64x __x) ;


extern _Float64x frexpf64x (_Float64x __x, int *__exponent) ;   extern _Float64x __frexpf64x (_Float64x __x, int *__exponent) ;


extern _Float64x ldexpf64x (_Float64x __x, int __exponent) ;   extern _Float64x __ldexpf64x (_Float64x __x, int __exponent) ;


   extern _Float64x logf64x (_Float64x __x) ;   extern _Float64x __logf64x (_Float64x __x) ;


   extern _Float64x log10f64x (_Float64x __x) ;   extern _Float64x __log10f64x (_Float64x __x) ;


extern _Float64x modff64x (_Float64x __x, _Float64x *__iptr) ;   extern _Float64x __modff64x (_Float64x __x, _Float64x *__iptr)  ;

#line 135 "/usr/include/bits/mathcalls.h"

   extern _Float64x exp10f64x (_Float64x __x) ;   extern _Float64x __exp10f64x (_Float64x __x) ;


extern _Float64x exp2m1f64x (_Float64x __x) ;   extern _Float64x __exp2m1f64x (_Float64x __x) ;


extern _Float64x exp10m1f64x (_Float64x __x) ;   extern _Float64x __exp10m1f64x (_Float64x __x) ;


extern _Float64x log2p1f64x (_Float64x __x) ;   extern _Float64x __log2p1f64x (_Float64x __x) ;


extern _Float64x log10p1f64x (_Float64x __x) ;   extern _Float64x __log10p1f64x (_Float64x __x) ;


   extern _Float64x logp1f64x (_Float64x __x) ;   extern _Float64x __logp1f64x (_Float64x __x) ;
#line 153 "/usr/include/bits/mathcalls.h"

#line 155 "/usr/include/bits/mathcalls.h"

   extern _Float64x expm1f64x (_Float64x __x) ;   extern _Float64x __expm1f64x (_Float64x __x) ;


   extern _Float64x log1pf64x (_Float64x __x) ;   extern _Float64x __log1pf64x (_Float64x __x) ;


extern _Float64x logbf64x (_Float64x __x) ;   extern _Float64x __logbf64x (_Float64x __x) ;
#line 164 "/usr/include/bits/mathcalls.h"

#line 166 "/usr/include/bits/mathcalls.h"

   extern _Float64x exp2f64x (_Float64x __x) ;   extern _Float64x __exp2f64x (_Float64x __x) ;


   extern _Float64x log2f64x (_Float64x __x) ;   extern _Float64x __log2f64x (_Float64x __x) ;
#line 172 "/usr/include/bits/mathcalls.h"





   extern _Float64x powf64x (_Float64x __x, _Float64x __y) ;   extern _Float64x __powf64x (_Float64x __x, _Float64x __y) ;


extern _Float64x sqrtf64x (_Float64x __x) ;   extern _Float64x __sqrtf64x (_Float64x __x) ;

#line 183 "/usr/include/bits/mathcalls.h"

   extern _Float64x hypotf64x (_Float64x __x, _Float64x __y) ;   extern _Float64x __hypotf64x (_Float64x __x, _Float64x __y) ;
#line 186 "/usr/include/bits/mathcalls.h"

#line 188 "/usr/include/bits/mathcalls.h"

   extern _Float64x cbrtf64x (_Float64x __x) ;   extern _Float64x __cbrtf64x (_Float64x __x) ;
#line 191 "/usr/include/bits/mathcalls.h"

#line 193 "/usr/include/bits/mathcalls.h"

extern _Float64x compoundnf64x (_Float64x __x, long long int __y) ;   extern _Float64x __compoundnf64x (_Float64x __x, long long int __y) ;


extern _Float64x pownf64x (_Float64x __x, long long int __y) ;   extern _Float64x __pownf64x (_Float64x __x, long long int __y) ;


extern _Float64x powrf64x (_Float64x __x, _Float64x __y) ;   extern _Float64x __powrf64x (_Float64x __x, _Float64x __y) ;


extern _Float64x rootnf64x (_Float64x __x, long long int __y) ;   extern _Float64x __rootnf64x (_Float64x __x, long long int __y) ;


extern _Float64x rsqrtf64x (_Float64x __x) ;   extern _Float64x __rsqrtf64x (_Float64x __x) ;
#line 208 "/usr/include/bits/mathcalls.h"





extern _Float64x ceilf64x (_Float64x __x)  __attribute__ ((__const__));


extern _Float64x fabsf64x (_Float64x __x)  __attribute__ ((__const__));


extern _Float64x floorf64x (_Float64x __x)  __attribute__ ((__const__));


extern _Float64x fmodf64x (_Float64x __x, _Float64x __y) ;   extern _Float64x __fmodf64x (_Float64x __x, _Float64x __y) ;

#line 231 "/usr/include/bits/mathcalls.h"

#line 244 "/usr/include/bits/mathcalls.h"

#line 246 "/usr/include/bits/mathcalls.h"

#line 248 "/usr/include/bits/mathcalls.h"

extern _Float64x copysignf64x (_Float64x __x, _Float64x __y)  __attribute__ ((__const__));
#line 251 "/usr/include/bits/mathcalls.h"

#line 253 "/usr/include/bits/mathcalls.h"

extern _Float64x nanf64x (const char *__tagb) ;   extern _Float64x __nanf64x (const char *__tagb) ;
#line 256 "/usr/include/bits/mathcalls.h"


#line 265 "/usr/include/bits/mathcalls.h"

#line 267 "/usr/include/bits/mathcalls.h"

extern _Float64x j0f64x (_Float64x) ;   extern _Float64x __j0f64x (_Float64x) ;
extern _Float64x j1f64x (_Float64x) ;   extern _Float64x __j1f64x (_Float64x) ;
extern _Float64x jnf64x (int, _Float64x) ;   extern _Float64x __jnf64x (int, _Float64x) ;
extern _Float64x y0f64x (_Float64x) ;   extern _Float64x __y0f64x (_Float64x) ;
extern _Float64x y1f64x (_Float64x) ;   extern _Float64x __y1f64x (_Float64x) ;
extern _Float64x ynf64x (int, _Float64x) ;   extern _Float64x __ynf64x (int, _Float64x) ;
#line 275 "/usr/include/bits/mathcalls.h"


#line 278 "/usr/include/bits/mathcalls.h"

   extern _Float64x erff64x (_Float64x) ;   extern _Float64x __erff64x (_Float64x) ;
   extern _Float64x erfcf64x (_Float64x) ;   extern _Float64x __erfcf64x (_Float64x) ;
extern _Float64x lgammaf64x (_Float64x) ;   extern _Float64x __lgammaf64x (_Float64x) ;
#line 283 "/usr/include/bits/mathcalls.h"

#line 285 "/usr/include/bits/mathcalls.h"

extern _Float64x tgammaf64x (_Float64x) ;   extern _Float64x __tgammaf64x (_Float64x) ;
#line 288 "/usr/include/bits/mathcalls.h"

#line 295 "/usr/include/bits/mathcalls.h"

#line 297 "/usr/include/bits/mathcalls.h"



extern _Float64x lgammaf64x_r (_Float64x, int *__signgamp) ;   extern _Float64x __lgammaf64x_r (_Float64x, int *__signgamp) ;
#line 302 "/usr/include/bits/mathcalls.h"


#line 305 "/usr/include/bits/mathcalls.h"


extern _Float64x rintf64x (_Float64x __x) ;   extern _Float64x __rintf64x (_Float64x __x) ;


extern _Float64x nextafterf64x (_Float64x __x, _Float64x __y) ;   extern _Float64x __nextafterf64x (_Float64x __x, _Float64x __y) ;
#line 314 "/usr/include/bits/mathcalls.h"

#line 316 "/usr/include/bits/mathcalls.h"

extern _Float64x nextdownf64x (_Float64x __x) ;   extern _Float64x __nextdownf64x (_Float64x __x) ;

extern _Float64x nextupf64x (_Float64x __x) ;   extern _Float64x __nextupf64x (_Float64x __x) ;
#line 321 "/usr/include/bits/mathcalls.h"


extern _Float64x remainderf64x (_Float64x __x, _Float64x __y) ;   extern _Float64x __remainderf64x (_Float64x __x, _Float64x __y) ;

#line 326 "/usr/include/bits/mathcalls.h"

extern _Float64x scalbnf64x (_Float64x __x, int __n) ;   extern _Float64x __scalbnf64x (_Float64x __x, int __n) ;
#line 329 "/usr/include/bits/mathcalls.h"


extern int ilogbf64x (_Float64x __x) ;   extern int __ilogbf64x (_Float64x __x) ;
#line 333 "/usr/include/bits/mathcalls.h"

#line 335 "/usr/include/bits/mathcalls.h"

extern long int llogbf64x (_Float64x __x) ;   extern long int __llogbf64x (_Float64x __x) ;
#line 338 "/usr/include/bits/mathcalls.h"

#line 340 "/usr/include/bits/mathcalls.h"

extern _Float64x scalblnf64x (_Float64x __x, long int __n) ;   extern _Float64x __scalblnf64x (_Float64x __x, long int __n) ;



extern _Float64x nearbyintf64x (_Float64x __x) ;   extern _Float64x __nearbyintf64x (_Float64x __x) ;



extern _Float64x roundf64x (_Float64x __x)  __attribute__ ((__const__));



extern _Float64x truncf64x (_Float64x __x)  __attribute__ ((__const__));




extern _Float64x remquof64x (_Float64x __x, _Float64x __y, int *__quo) ;   extern _Float64x __remquof64x (_Float64x __x, _Float64x __y, int *__quo) ;






extern long int lrintf64x (_Float64x __x) ;   extern long int __lrintf64x (_Float64x __x) ;

extern long long int llrintf64x (_Float64x __x) ;   extern long long int __llrintf64x (_Float64x __x) ;



extern long int lroundf64x (_Float64x __x) ;   extern long int __lroundf64x (_Float64x __x) ;

extern long long int llroundf64x (_Float64x __x) ;   extern long long int __llroundf64x (_Float64x __x) ;



extern _Float64x fdimf64x (_Float64x __x, _Float64x __y) ;   extern _Float64x __fdimf64x (_Float64x __x, _Float64x __y) ;

#line 380 "/usr/include/bits/mathcalls.h"

extern _Float64x fmaxf64x (_Float64x __x, _Float64x __y)  __attribute__ ((__const__));


extern _Float64x fminf64x (_Float64x __x, _Float64x __y)  __attribute__ ((__const__));
#line 386 "/usr/include/bits/mathcalls.h"


extern _Float64x fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) ;   extern _Float64x __fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) ;
#line 390 "/usr/include/bits/mathcalls.h"

#line 392 "/usr/include/bits/mathcalls.h"

extern _Float64x roundevenf64x (_Float64x __x)  __attribute__ ((__const__));



extern __intmax_t fromfpf64x (_Float64x __x, int __round,
				  unsigned int __width) ;   extern __intmax_t __fromfpf64x (_Float64x __x, int __round,
				  unsigned int __width) ;



extern __uintmax_t ufromfpf64x (_Float64x __x, int __round,
				    unsigned int __width) ;   extern __uintmax_t __ufromfpf64x (_Float64x __x, int __round,
				    unsigned int __width) ;




extern __intmax_t fromfpxf64x (_Float64x __x, int __round,
				   unsigned int __width) ;   extern __intmax_t __fromfpxf64x (_Float64x __x, int __round,
				   unsigned int __width) ;




extern __uintmax_t ufromfpxf64x (_Float64x __x, int __round,
				     unsigned int __width) ;   extern __uintmax_t __ufromfpxf64x (_Float64x __x, int __round,
				     unsigned int __width) ;


extern int canonicalizef64x (_Float64x *__cx, const _Float64x *__x) ;
#line 420 "/usr/include/bits/mathcalls.h"

#line 422 "/usr/include/bits/mathcalls.h"

extern _Float64x fmaxmagf64x (_Float64x __x, _Float64x __y)  __attribute__ ((__const__));


extern _Float64x fminmagf64x (_Float64x __x, _Float64x __y)  __attribute__ ((__const__));
#line 428 "/usr/include/bits/mathcalls.h"

#line 430 "/usr/include/bits/mathcalls.h"

extern _Float64x fmaximumf64x (_Float64x __x, _Float64x __y)  __attribute__ ((__const__));


extern _Float64x fminimumf64x (_Float64x __x, _Float64x __y)  __attribute__ ((__const__));


extern _Float64x fmaximum_numf64x (_Float64x __x, _Float64x __y)  __attribute__ ((__const__));


extern _Float64x fminimum_numf64x (_Float64x __x, _Float64x __y)  __attribute__ ((__const__));


extern _Float64x fmaximum_magf64x (_Float64x __x, _Float64x __y)  __attribute__ ((__const__));


extern _Float64x fminimum_magf64x (_Float64x __x, _Float64x __y)  __attribute__ ((__const__));


extern _Float64x fmaximum_mag_numf64x (_Float64x __x, _Float64x __y)  __attribute__ ((__const__));


extern _Float64x fminimum_mag_numf64x (_Float64x __x, _Float64x __y)  __attribute__ ((__const__));
#line 454 "/usr/include/bits/mathcalls.h"

#line 456 "/usr/include/bits/mathcalls.h"

extern int totalorderf64x (const _Float64x *__x,
				 const _Float64x *__y) 
     __attribute__ ((__pure__));


extern int totalordermagf64x (const _Float64x *__x,
				    const _Float64x *__y) 
     __attribute__ ((__pure__));


extern _Float64x getpayloadf64x (const _Float64x *__x) ;   extern _Float64x __getpayloadf64x (const _Float64x *__x) ;


extern int setpayloadf64x (_Float64x *__x, _Float64x __payload) ;


extern int setpayloadsigf64x (_Float64x *__x, _Float64x __payload) ;
#line 475 "/usr/include/bits/mathcalls.h"
#line 464 "/usr/include/math.h"
#line 470 "/usr/include/math.h"

#line 487 "/usr/include/math.h"

#line 493 "/usr/include/math.h"


#line 501 "/usr/include/math.h"

#line 503 "/usr/include/math.h"

#line 1 "/usr/include/bits/mathcalls-narrow.h"


















#line 22 "/usr/include/bits/mathcalls-narrow.h"


extern float fadd (double __x, double __y) ;


extern float fdiv (double __x, double __y) ;


extern float ffma (double __x, double __y, double __z) ;


extern float fmul (double __x, double __y) ;


extern float fsqrt (double __x) ;


extern float fsub (double __x, double __y) ;
#line 508 "/usr/include/math.h"
#line 511 "/usr/include/math.h"

#line 1 "/usr/include/bits/mathcalls-narrow.h"


















#line 22 "/usr/include/bits/mathcalls-narrow.h"


extern float faddl (long double __x, long double __y) ;


extern float fdivl (long double __x, long double __y) ;


extern float ffmal (long double __x, long double __y, long double __z) ;


extern float fmull (long double __x, long double __y) ;


extern float fsqrtl (long double __x) ;


extern float fsubl (long double __x, long double __y) ;
#line 527 "/usr/include/math.h"
#line 536 "/usr/include/math.h"

#line 1 "/usr/include/bits/mathcalls-narrow.h"


















#line 22 "/usr/include/bits/mathcalls-narrow.h"


extern double daddl (long double __x, long double __y) ;


extern double ddivl (long double __x, long double __y) ;


extern double dfmal (long double __x, long double __y, long double __z) ;


extern double dmull (long double __x, long double __y) ;


extern double dsqrtl (long double __x) ;


extern double dsubl (long double __x, long double __y) ;
#line 552 "/usr/include/math.h"
#line 561 "/usr/include/math.h"

#line 563 "/usr/include/math.h"

#line 565 "/usr/include/math.h"

#line 575 "/usr/include/math.h"

#line 585 "/usr/include/math.h"

#line 595 "/usr/include/math.h"

#line 605 "/usr/include/math.h"

#line 615 "/usr/include/math.h"

#line 625 "/usr/include/math.h"

#line 1 "/usr/include/bits/mathcalls-narrow.h"


















#line 22 "/usr/include/bits/mathcalls-narrow.h"


extern _Float32 f32addf32x (_Float32x __x, _Float32x __y) ;


extern _Float32 f32divf32x (_Float32x __x, _Float32x __y) ;


extern _Float32 f32fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) ;


extern _Float32 f32mulf32x (_Float32x __x, _Float32x __y) ;


extern _Float32 f32sqrtf32x (_Float32x __x) ;


extern _Float32 f32subf32x (_Float32x __x, _Float32x __y) ;
#line 631 "/usr/include/math.h"
#line 635 "/usr/include/math.h"

#line 1 "/usr/include/bits/mathcalls-narrow.h"


















#line 22 "/usr/include/bits/mathcalls-narrow.h"


extern _Float32 f32addf64 (_Float64 __x, _Float64 __y) ;


extern _Float32 f32divf64 (_Float64 __x, _Float64 __y) ;


extern _Float32 f32fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) ;


extern _Float32 f32mulf64 (_Float64 __x, _Float64 __y) ;


extern _Float32 f32sqrtf64 (_Float64 __x) ;


extern _Float32 f32subf64 (_Float64 __x, _Float64 __y) ;
#line 641 "/usr/include/math.h"
#line 645 "/usr/include/math.h"

#line 1 "/usr/include/bits/mathcalls-narrow.h"


















#line 22 "/usr/include/bits/mathcalls-narrow.h"


extern _Float32 f32addf64x (_Float64x __x, _Float64x __y) ;


extern _Float32 f32divf64x (_Float64x __x, _Float64x __y) ;


extern _Float32 f32fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) ;


extern _Float32 f32mulf64x (_Float64x __x, _Float64x __y) ;


extern _Float32 f32sqrtf64x (_Float64x __x) ;


extern _Float32 f32subf64x (_Float64x __x, _Float64x __y) ;
#line 651 "/usr/include/math.h"
#line 655 "/usr/include/math.h"

#line 665 "/usr/include/math.h"

#line 675 "/usr/include/math.h"

#line 1 "/usr/include/bits/mathcalls-narrow.h"


















#line 22 "/usr/include/bits/mathcalls-narrow.h"


extern _Float32x f32xaddf64 (_Float64 __x, _Float64 __y) ;


extern _Float32x f32xdivf64 (_Float64 __x, _Float64 __y) ;


extern _Float32x f32xfmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) ;


extern _Float32x f32xmulf64 (_Float64 __x, _Float64 __y) ;


extern _Float32x f32xsqrtf64 (_Float64 __x) ;


extern _Float32x f32xsubf64 (_Float64 __x, _Float64 __y) ;
#line 681 "/usr/include/math.h"
#line 685 "/usr/include/math.h"

#line 1 "/usr/include/bits/mathcalls-narrow.h"


















#line 22 "/usr/include/bits/mathcalls-narrow.h"


extern _Float32x f32xaddf64x (_Float64x __x, _Float64x __y) ;


extern _Float32x f32xdivf64x (_Float64x __x, _Float64x __y) ;


extern _Float32x f32xfmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) ;


extern _Float32x f32xmulf64x (_Float64x __x, _Float64x __y) ;


extern _Float32x f32xsqrtf64x (_Float64x __x) ;


extern _Float32x f32xsubf64x (_Float64x __x, _Float64x __y) ;
#line 691 "/usr/include/math.h"
#line 695 "/usr/include/math.h"

#line 705 "/usr/include/math.h"

#line 715 "/usr/include/math.h"

#line 1 "/usr/include/bits/mathcalls-narrow.h"


















#line 22 "/usr/include/bits/mathcalls-narrow.h"


extern _Float64 f64addf64x (_Float64x __x, _Float64x __y) ;


extern _Float64 f64divf64x (_Float64x __x, _Float64x __y) ;


extern _Float64 f64fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) ;


extern _Float64 f64mulf64x (_Float64x __x, _Float64x __y) ;


extern _Float64 f64sqrtf64x (_Float64x __x) ;


extern _Float64 f64subf64x (_Float64x __x, _Float64x __y) ;
#line 721 "/usr/include/math.h"
#line 725 "/usr/include/math.h"

#line 735 "/usr/include/math.h"

#line 745 "/usr/include/math.h"

#line 755 "/usr/include/math.h"

#line 765 "/usr/include/math.h"

#line 775 "/usr/include/math.h"

#line 777 "/usr/include/math.h"

#line 784 "/usr/include/math.h"

#line 786 "/usr/include/math.h"

extern int signgam;
#line 789 "/usr/include/math.h"

#line 793 "/usr/include/math.h"










#line 834 "/usr/include/math.h"


#line 837 "/usr/include/math.h"


enum
  {
    FP_NAN =
#line 843 "/usr/include/math.h"
      0,
    FP_INFINITE =
#line 846 "/usr/include/math.h"
      1,
    FP_ZERO =
#line 849 "/usr/include/math.h"
      2,
    FP_SUBNORMAL =
#line 852 "/usr/include/math.h"
      3,
    FP_NORMAL =
#line 855 "/usr/include/math.h"
      4
  };






#line 874 "/usr/include/math.h"


#line 892 "/usr/include/math.h"


#line 899 "/usr/include/math.h"


#line 906 "/usr/include/math.h"



#line 914 "/usr/include/math.h"


#line 928 "/usr/include/math.h"


#line 932 "/usr/include/math.h"






#line 945 "/usr/include/math.h"

#line 947 "/usr/include/math.h"

#line 1 "/usr/include/bits/iscanonical.h"


















#line 22 "/usr/include/bits/iscanonical.h"

extern int __iscanonicall (long double __x)
      __attribute__ ((__const__));
#line 30 "/usr/include/bits/iscanonical.h"






#line 950 "/usr/include/math.h"


#line 980 "/usr/include/math.h"


#line 983 "/usr/include/math.h"


#line 1032 "/usr/include/math.h"

#line 1034 "/usr/include/math.h"

#line 1037 "/usr/include/math.h"



#line 1055 "/usr/include/math.h"


#line 1072 "/usr/include/math.h"




#line 1091 "/usr/include/math.h"

#line 1107 "/usr/include/math.h"

#line 1123 "/usr/include/math.h"

#line 1139 "/usr/include/math.h"

#line 1155 "/usr/include/math.h"

#line 1171 "/usr/include/math.h"

#line 1187 "/usr/include/math.h"

#line 1191 "/usr/include/math.h"

#line 1194 "/usr/include/math.h"






#line 1216 "/usr/include/math.h"

#line 1218 "/usr/include/math.h"


#line 1229 "/usr/include/math.h"



#line 1350 "/usr/include/math.h"

#line 1352 "/usr/include/math.h"



#line 11 "main.c"
#line 1 "/usr/include/setjmp.h"





















#line 24 "/usr/include/setjmp.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/setjmp.h"



#line 1 "/usr/include/bits/setjmp.h"


















#line 21 "/usr/include/bits/setjmp.h"

#line 25 "/usr/include/bits/setjmp.h"

#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 27 "/usr/include/bits/setjmp.h"

#line 29 "/usr/include/bits/setjmp.h"

#line 31 "/usr/include/bits/setjmp.h"
typedef long int __jmp_buf[8];
#line 37 "/usr/include/bits/setjmp.h"

#line 39 "/usr/include/bits/setjmp.h"
#line 30 "/usr/include/setjmp.h"
#line 1 "/usr/include/bits/types/struct___jmp_buf_tag.h"


















#line 21 "/usr/include/bits/types/struct___jmp_buf_tag.h"

#line 1 "/usr/include/bits/setjmp.h"

















#line 23 "/usr/include/bits/types/struct___jmp_buf_tag.h"
#line 1 "/usr/include/bits/types/__sigset_t.h"
#line 3 "/usr/include/bits/types/__sigset_t.h"

#line 5 "/usr/include/bits/types/__sigset_t.h"
typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
#line 24 "/usr/include/bits/types/struct___jmp_buf_tag.h"


struct __jmp_buf_tag
  {
    



    __jmp_buf __jmpbuf;		
    int __mask_was_saved;	
    __sigset_t __saved_mask;	
  };
#line 31 "/usr/include/setjmp.h"

typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) ;




extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) ;



extern int _setjmp (struct __jmp_buf_tag __env[1]) ;



#line 50 "/usr/include/setjmp.h"




extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
      __attribute__ ((__noreturn__));

#line 58 "/usr/include/setjmp.h"



extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
      __attribute__ ((__noreturn__));
#line 64 "/usr/include/setjmp.h"


#line 67 "/usr/include/setjmp.h"



typedef struct __jmp_buf_tag sigjmp_buf[1];



#line 75 "/usr/include/setjmp.h"





extern void siglongjmp (sigjmp_buf __env, int __val)
      __attribute__ ((__noreturn__));
#line 83 "/usr/include/setjmp.h"



#line 89 "/usr/include/setjmp.h"


#line 12 "main.c"
#line 1 "/usr/include/signal.h"





















#line 24 "/usr/include/signal.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/signal.h"



#line 1 "/usr/include/bits/types.h"





















#line 30 "/usr/include/signal.h"
#line 1 "/usr/include/bits/signum-generic.h"


















#line 21 "/usr/include/bits/signum-generic.h"

#line 25 "/usr/include/bits/signum-generic.h"



#line 31 "/usr/include/bits/signum-generic.h"

#line 35 "/usr/include/bits/signum-generic.h"













#line 54 "/usr/include/bits/signum-generic.h"


#line 62 "/usr/include/bits/signum-generic.h"


#line 67 "/usr/include/bits/signum-generic.h"









#line 1 "/usr/include/bits/signum-arch.h"


















#line 21 "/usr/include/bits/signum-arch.h"

#line 25 "/usr/include/bits/signum-arch.h"




#line 31 "/usr/include/bits/signum-arch.h"


#line 35 "/usr/include/bits/signum-arch.h"


#line 51 "/usr/include/bits/signum-arch.h"



#line 55 "/usr/include/bits/signum-arch.h"


#line 60 "/usr/include/bits/signum-arch.h"

#line 63 "/usr/include/bits/signum-arch.h"
#line 77 "/usr/include/bits/signum-generic.h"


#line 80 "/usr/include/bits/signum-generic.h"
#line 31 "/usr/include/signal.h"

#line 1 "/usr/include/bits/types/sig_atomic_t.h"
#line 3 "/usr/include/bits/types/sig_atomic_t.h"

#line 1 "/usr/include/bits/types.h"





















#line 5 "/usr/include/bits/types/sig_atomic_t.h"



typedef __sig_atomic_t sig_atomic_t;
#line 33 "/usr/include/signal.h"

#line 1 "/usr/include/bits/types/sigset_t.h"
#line 3 "/usr/include/bits/types/sigset_t.h"

#line 1 "/usr/include/bits/types/__sigset_t.h"
#line 5 "/usr/include/bits/types/sigset_t.h"


typedef __sigset_t sigset_t;
#line 36 "/usr/include/signal.h"
#line 37 "/usr/include/signal.h"

#line 40 "/usr/include/signal.h"
typedef __pid_t pid_t;
#line 46 "/usr/include/signal.h"
typedef __uid_t uid_t;
#line 50 "/usr/include/signal.h"

#line 52 "/usr/include/signal.h"

#line 1 "/usr/include/bits/types/struct_timespec.h"

#line 4 "/usr/include/bits/types/struct_timespec.h"

#line 1 "/usr/include/bits/types.h"





















#line 6 "/usr/include/bits/types/struct_timespec.h"
#line 1 "/usr/include/bits/endian.h"

















#line 7 "/usr/include/bits/types/struct_timespec.h"
#line 1 "/usr/include/bits/types/time_t.h"
#line 3 "/usr/include/bits/types/time_t.h"

#line 1 "/usr/include/bits/types.h"





















#line 5 "/usr/include/bits/types/time_t.h"


#line 10 "/usr/include/bits/types/time_t.h"
typedef __time_t time_t;
#line 12 "/usr/include/bits/types/time_t.h"
#line 8 "/usr/include/bits/types/struct_timespec.h"



struct timespec
{
#line 16 "/usr/include/bits/types/struct_timespec.h"
  __time_t tv_sec;		
#line 19 "/usr/include/bits/types/struct_timespec.h"
  __syscall_slong_t tv_nsec;	
#line 29 "/usr/include/bits/types/struct_timespec.h"
};
#line 54 "/usr/include/signal.h"
#line 55 "/usr/include/signal.h"

#line 1 "/usr/include/bits/types/siginfo_t.h"
#line 3 "/usr/include/bits/types/siginfo_t.h"

#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 5 "/usr/include/bits/types/siginfo_t.h"
#line 1 "/usr/include/bits/types.h"





















#line 6 "/usr/include/bits/types/siginfo_t.h"
#line 1 "/usr/include/bits/types/__sigval_t.h"


















#line 21 "/usr/include/bits/types/__sigval_t.h"


#line 24 "/usr/include/bits/types/__sigval_t.h"
union sigval
{
  int sival_int;
  void *sival_ptr;
};

typedef union sigval __sigval_t;
#line 40 "/usr/include/bits/types/__sigval_t.h"
#line 7 "/usr/include/bits/types/siginfo_t.h"

#line 14 "/usr/include/bits/types/siginfo_t.h"


#line 1 "/usr/include/bits/siginfo-arch.h"

#line 4 "/usr/include/bits/siginfo-arch.h"

#line 16 "/usr/include/bits/siginfo-arch.h"
#line 17 "/usr/include/bits/types/siginfo_t.h"
#line 35 "/usr/include/bits/types/siginfo_t.h"

typedef struct
  {
    int si_signo;		
#line 40 "/usr/include/bits/types/siginfo_t.h"
    int si_errno;		

    int si_code;		
#line 48 "/usr/include/bits/types/siginfo_t.h"
    int __pad0;			
#line 50 "/usr/include/bits/types/siginfo_t.h"

    union
      {
	int _pad[((128 / sizeof (int)) - 4)];

	 
	struct
	  {
	    __pid_t si_pid;	
	    __uid_t si_uid;	
	  } _kill;

	
	struct
	  {
	    int si_tid;		
	    int si_overrun;	
	    __sigval_t si_sigval;	
	  } _timer;

	
	struct
	  {
	    __pid_t si_pid;	
	    __uid_t si_uid;	
	    __sigval_t si_sigval;	
	  } _rt;

	
	struct
	  {
	    __pid_t si_pid;	
	    __uid_t si_uid;	
	    int si_status;	
	    __clock_t si_utime;
	    __clock_t si_stime;
	  } _sigchld;

	
	struct
	  {
	    void *si_addr;	    
	    
	    short int si_addr_lsb;  
	    union
	      {
		
		struct
		  {
		    void *_lower;
		    void *_upper;
		  } _addr_bnd;
		
		__uint32_t _pkey;
	      } _bounds;
	  } _sigfault;

	
	struct
	  {
	    long int si_band;	
	    int si_fd;
	  } _sigpoll;

	
#line 116 "/usr/include/bits/types/siginfo_t.h"
	struct
	  {
	    void *_call_addr;	
	    int _syscall;	
	    unsigned int _arch; 
	  } _sigsys;
#line 123 "/usr/include/bits/types/siginfo_t.h"
      } _sifields;
  } siginfo_t ;



#line 150 "/usr/include/bits/types/siginfo_t.h"
#line 58 "/usr/include/signal.h"
#line 1 "/usr/include/bits/siginfo-consts.h"


















#line 21 "/usr/include/bits/siginfo-consts.h"

#line 25 "/usr/include/bits/siginfo-consts.h"



#line 1 "/usr/include/bits/siginfo-arch.h"
#line 29 "/usr/include/bits/siginfo-consts.h"
#line 32 "/usr/include/bits/siginfo-consts.h"



enum
{
  SI_ASYNCNL = -60,		
  SI_DETHREAD = -7,		

  SI_TKILL,			
  SI_SIGIO,			
#line 43 "/usr/include/bits/siginfo-consts.h"
  SI_ASYNCIO,			
  SI_MESGQ,			
  SI_TIMER,			
#line 51 "/usr/include/bits/siginfo-consts.h"
  SI_QUEUE,			
  SI_USER,			
  SI_KERNEL = 0x80		

#line 66 "/usr/include/bits/siginfo-consts.h"
};


#line 70 "/usr/include/bits/siginfo-consts.h"

enum
{
  ILL_ILLOPC = 1,		
#line 75 "/usr/include/bits/siginfo-consts.h"
  ILL_ILLOPN,			
#line 77 "/usr/include/bits/siginfo-consts.h"
  ILL_ILLADR,			
#line 79 "/usr/include/bits/siginfo-consts.h"
  ILL_ILLTRP,			
#line 81 "/usr/include/bits/siginfo-consts.h"
  ILL_PRVOPC,			
#line 83 "/usr/include/bits/siginfo-consts.h"
  ILL_PRVREG,			
#line 85 "/usr/include/bits/siginfo-consts.h"
  ILL_COPROC,			
#line 87 "/usr/include/bits/siginfo-consts.h"
  ILL_BADSTK,			
#line 89 "/usr/include/bits/siginfo-consts.h"
  ILL_BADIADDR			
#line 91 "/usr/include/bits/siginfo-consts.h"
};


enum
{
  FPE_INTDIV = 1,		
#line 98 "/usr/include/bits/siginfo-consts.h"
  FPE_INTOVF,			
#line 100 "/usr/include/bits/siginfo-consts.h"
  FPE_FLTDIV,			
#line 102 "/usr/include/bits/siginfo-consts.h"
  FPE_FLTOVF,			
#line 104 "/usr/include/bits/siginfo-consts.h"
  FPE_FLTUND,			
#line 106 "/usr/include/bits/siginfo-consts.h"
  FPE_FLTRES,			
#line 108 "/usr/include/bits/siginfo-consts.h"
  FPE_FLTINV,			
#line 110 "/usr/include/bits/siginfo-consts.h"
  FPE_FLTSUB,			
#line 112 "/usr/include/bits/siginfo-consts.h"
  FPE_FLTUNK = 14,		
#line 114 "/usr/include/bits/siginfo-consts.h"
  FPE_CONDTRAP			
#line 116 "/usr/include/bits/siginfo-consts.h"
};


enum
{
  SEGV_MAPERR = 1,		
#line 123 "/usr/include/bits/siginfo-consts.h"
  SEGV_ACCERR,			
#line 125 "/usr/include/bits/siginfo-consts.h"
  SEGV_BNDERR,			
#line 127 "/usr/include/bits/siginfo-consts.h"
  SEGV_PKUERR,			
#line 129 "/usr/include/bits/siginfo-consts.h"
  SEGV_ACCADI,			
#line 131 "/usr/include/bits/siginfo-consts.h"
  SEGV_ADIDERR,			
#line 133 "/usr/include/bits/siginfo-consts.h"
  SEGV_ADIPERR,			
#line 135 "/usr/include/bits/siginfo-consts.h"
  SEGV_MTEAERR,			
#line 137 "/usr/include/bits/siginfo-consts.h"
  SEGV_MTESERR,			
#line 139 "/usr/include/bits/siginfo-consts.h"
  SEGV_CPERR			
#line 141 "/usr/include/bits/siginfo-consts.h"
};


enum
{
  BUS_ADRALN = 1,		
#line 148 "/usr/include/bits/siginfo-consts.h"
  BUS_ADRERR,			
#line 150 "/usr/include/bits/siginfo-consts.h"
  BUS_OBJERR,			
#line 152 "/usr/include/bits/siginfo-consts.h"
  BUS_MCEERR_AR,		
#line 154 "/usr/include/bits/siginfo-consts.h"
  BUS_MCEERR_AO			
#line 156 "/usr/include/bits/siginfo-consts.h"
};
#line 158 "/usr/include/bits/siginfo-consts.h"

#line 160 "/usr/include/bits/siginfo-consts.h"

enum
{
  TRAP_BRKPT = 1,		
#line 165 "/usr/include/bits/siginfo-consts.h"
  TRAP_TRACE,			
#line 167 "/usr/include/bits/siginfo-consts.h"
  TRAP_BRANCH,			
#line 169 "/usr/include/bits/siginfo-consts.h"
  TRAP_HWBKPT,			
#line 171 "/usr/include/bits/siginfo-consts.h"
  TRAP_UNK			
#line 173 "/usr/include/bits/siginfo-consts.h"
};
#line 175 "/usr/include/bits/siginfo-consts.h"

#line 177 "/usr/include/bits/siginfo-consts.h"

enum
{
  CLD_EXITED = 1,		
#line 182 "/usr/include/bits/siginfo-consts.h"
  CLD_KILLED,			
#line 184 "/usr/include/bits/siginfo-consts.h"
  CLD_DUMPED,			
#line 186 "/usr/include/bits/siginfo-consts.h"
  CLD_TRAPPED,			
#line 188 "/usr/include/bits/siginfo-consts.h"
  CLD_STOPPED,			
#line 190 "/usr/include/bits/siginfo-consts.h"
  CLD_CONTINUED			
#line 192 "/usr/include/bits/siginfo-consts.h"
};


enum
{
  POLL_IN = 1,			
#line 199 "/usr/include/bits/siginfo-consts.h"
  POLL_OUT,			
#line 201 "/usr/include/bits/siginfo-consts.h"
  POLL_MSG,			
#line 203 "/usr/include/bits/siginfo-consts.h"
  POLL_ERR,			
#line 205 "/usr/include/bits/siginfo-consts.h"
  POLL_PRI,			
#line 207 "/usr/include/bits/siginfo-consts.h"
  POLL_HUP			
#line 209 "/usr/include/bits/siginfo-consts.h"
};
#line 211 "/usr/include/bits/siginfo-consts.h"



#line 1 "/usr/include/bits/siginfo-consts-arch.h"

#line 4 "/usr/include/bits/siginfo-consts-arch.h"


#line 216 "/usr/include/bits/siginfo-consts.h"
#line 217 "/usr/include/bits/siginfo-consts.h"
#line 59 "/usr/include/signal.h"
#line 60 "/usr/include/signal.h"

#line 1 "/usr/include/bits/types/sigval_t.h"
#line 3 "/usr/include/bits/types/sigval_t.h"

#line 1 "/usr/include/bits/types/__sigval_t.h"

















#line 5 "/usr/include/bits/types/sigval_t.h"







#line 15 "/usr/include/bits/types/sigval_t.h"

typedef __sigval_t sigval_t;
#line 63 "/usr/include/signal.h"
#line 64 "/usr/include/signal.h"

#line 1 "/usr/include/bits/types/sigevent_t.h"
#line 3 "/usr/include/bits/types/sigevent_t.h"

#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 5 "/usr/include/bits/types/sigevent_t.h"
#line 1 "/usr/include/bits/types.h"





















#line 6 "/usr/include/bits/types/sigevent_t.h"
#line 1 "/usr/include/bits/types/__sigval_t.h"

















#line 7 "/usr/include/bits/types/sigevent_t.h"

#line 14 "/usr/include/bits/types/sigevent_t.h"


#line 17 "/usr/include/bits/types/sigevent_t.h"
typedef union pthread_attr_t pthread_attr_t;
#line 20 "/usr/include/bits/types/sigevent_t.h"


typedef struct sigevent
  {
    __sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
	int _pad[((64 / sizeof (int)) - 4)];

	

	__pid_t _tid;

	struct
	  {
	    void (*_function) (__sigval_t);	
	    pthread_attr_t *_attribute;		
	  } _sigev_thread;
      } _sigev_un;
  } sigevent_t;


#line 47 "/usr/include/bits/types/sigevent_t.h"
#line 67 "/usr/include/signal.h"
#line 1 "/usr/include/bits/sigevent-consts.h"


















#line 21 "/usr/include/bits/sigevent-consts.h"

#line 25 "/usr/include/bits/sigevent-consts.h"


enum
{
  SIGEV_SIGNAL = 0,		
#line 31 "/usr/include/bits/sigevent-consts.h"
  SIGEV_NONE,			
#line 33 "/usr/include/bits/sigevent-consts.h"
  SIGEV_THREAD,			
#line 35 "/usr/include/bits/sigevent-consts.h"

  SIGEV_THREAD_ID = 4		

#line 39 "/usr/include/bits/sigevent-consts.h"
};
#line 68 "/usr/include/signal.h"
#line 69 "/usr/include/signal.h"



typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     ;
#line 80 "/usr/include/signal.h"
extern __sighandler_t sysv_signal (int __sig, __sighandler_t __handler)
     ;
#line 83 "/usr/include/signal.h"




#line 88 "/usr/include/signal.h"
extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     ;
#line 100 "/usr/include/signal.h"

#line 107 "/usr/include/signal.h"




#line 112 "/usr/include/signal.h"
extern int kill (__pid_t __pid, int __sig) ;
#line 114 "/usr/include/signal.h"

#line 116 "/usr/include/signal.h"



extern int killpg (__pid_t __pgrp, int __sig) ;
#line 121 "/usr/include/signal.h"


extern int raise (int __sig) ;

#line 126 "/usr/include/signal.h"

extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     ;
extern int gsignal (int __sig) ;
#line 131 "/usr/include/signal.h"

#line 133 "/usr/include/signal.h"

extern void psignal (int __sig, const char *__s);


extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
#line 139 "/usr/include/signal.h"










#line 151 "/usr/include/signal.h"
extern int sigpause (int __sig) __asm__ ("__xpg_sigpause")
  __attribute__ ((__deprecated__));
#line 159 "/usr/include/signal.h"


#line 162 "/usr/include/signal.h"






#line 169 "/usr/include/signal.h"


extern int sigblock (int __mask)  __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask)  __attribute__ ((__deprecated__));


extern int siggetmask (void)  __attribute__ ((__deprecated__));
#line 179 "/usr/include/signal.h"


#line 184 "/usr/include/signal.h"

#line 186 "/usr/include/signal.h"
typedef __sighandler_t sighandler_t;
#line 188 "/usr/include/signal.h"


#line 191 "/usr/include/signal.h"
typedef __sighandler_t sig_t;
#line 193 "/usr/include/signal.h"

#line 195 "/usr/include/signal.h"


extern int sigemptyset (sigset_t *__set)  ;


extern int sigfillset (sigset_t *__set)  ;


extern int sigaddset (sigset_t *__set, int __signo)  ;


extern int sigdelset (sigset_t *__set, int __signo)  ;


extern int sigismember (const sigset_t *__set, int __signo)
      ;

#line 213 "/usr/include/signal.h"

extern int sigisemptyset (const sigset_t *__set)  ;


extern int sigandset (sigset_t *__set, const sigset_t *__left,
		      const sigset_t *__right)  ;


extern int sigorset (sigset_t *__set, const sigset_t *__left,
		     const sigset_t *__right)  ;
#line 224 "/usr/include/signal.h"



#line 1 "/usr/include/bits/sigaction.h"


















#line 21 "/usr/include/bits/sigaction.h"

#line 25 "/usr/include/bits/sigaction.h"


struct sigaction
  {
    
#line 31 "/usr/include/bits/sigaction.h"
    union
      {
	
	__sighandler_t sa_handler;
	
	void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;
#line 44 "/usr/include/bits/sigaction.h"

    
    __sigset_t sa_mask;

    
    int sa_flags;

    
    void (*sa_restorer) (void);
  };


#line 71 "/usr/include/bits/sigaction.h"


#line 77 "/usr/include/bits/sigaction.h"


#line 82 "/usr/include/bits/sigaction.h"
#line 228 "/usr/include/signal.h"


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
			sigset_t *__restrict __oset) ;






extern int sigsuspend (const sigset_t *__set) ;


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
		      struct sigaction *__restrict __oact) ;


extern int sigpending (sigset_t *__set)  ;


#line 249 "/usr/include/signal.h"




extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     ;
#line 256 "/usr/include/signal.h"

#line 258 "/usr/include/signal.h"




extern int sigwaitinfo (const sigset_t *__restrict __set,
			siginfo_t *__restrict __info) ;






#line 271 "/usr/include/signal.h"
extern int sigtimedwait (const sigset_t *__restrict __set,
			 siginfo_t *__restrict __info,
			 const struct timespec *__restrict __timeout)
     ;
#line 287 "/usr/include/signal.h"



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     ;
#line 293 "/usr/include/signal.h"

#line 295 "/usr/include/signal.h"

#line 297 "/usr/include/signal.h"


#line 1 "/usr/include/bits/sigcontext.h"

















#line 20 "/usr/include/bits/sigcontext.h"

#line 24 "/usr/include/bits/sigcontext.h"

#line 1 "/usr/include/bits/types.h"





















#line 26 "/usr/include/bits/sigcontext.h"

#line 30 "/usr/include/bits/sigcontext.h"

struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t __glibc_reserved1[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short __glibc_reserved1[3];
};

struct _xmmreg
{
  __uint32_t	element[4];
};



#line 122 "/usr/include/bits/sigcontext.h"

struct _fpstate
{
  
  __uint16_t		cwd;
  __uint16_t		swd;
  __uint16_t		ftw;
  __uint16_t		fop;
  __uint64_t		rip;
  __uint64_t		rdp;
  __uint32_t		mxcsr;
  __uint32_t		mxcr_mask;
  struct _fpxreg	_st[8];
  struct _xmmreg	_xmm[16];
  __uint32_t		__glibc_reserved1[24];
};

struct sigcontext
{
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  union
    {
      struct _fpstate * fpstate;
      __uint64_t __fpstate_word;
    };
  __uint64_t __reserved1 [8];
};

#line 176 "/usr/include/bits/sigcontext.h"

struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t __glibc_reserved1[2];
  __uint64_t __glibc_reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
#line 300 "/usr/include/signal.h"


extern int sigreturn (struct sigcontext *__scp) ;

#line 305 "/usr/include/signal.h"


#line 1 "/usr/lib/clang/21/include/stddef.h"





















#line 37 "/usr/lib/clang/21/include/stddef.h"

#line 80 "/usr/lib/clang/21/include/stddef.h"

#line 85 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_size_t.h"













#line 16 "/usr/lib/clang/21/include/__stddef_size_t.h"

typedef unsigned long size_t;
#line 88 "/usr/lib/clang/21/include/stddef.h"
#line 90 "/usr/lib/clang/21/include/stddef.h"

#line 95 "/usr/lib/clang/21/include/stddef.h"

#line 100 "/usr/lib/clang/21/include/stddef.h"

#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 310 "/usr/include/signal.h"

#line 1 "/usr/include/bits/types/stack_t.h"


















#line 21 "/usr/include/bits/types/stack_t.h"

#line 1 "/usr/lib/clang/21/include/stddef.h"





















#line 37 "/usr/lib/clang/21/include/stddef.h"

#line 80 "/usr/lib/clang/21/include/stddef.h"

#line 85 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_size_t.h"












#line 88 "/usr/lib/clang/21/include/stddef.h"
#line 90 "/usr/lib/clang/21/include/stddef.h"

#line 95 "/usr/lib/clang/21/include/stddef.h"

#line 100 "/usr/lib/clang/21/include/stddef.h"

#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 24 "/usr/include/bits/types/stack_t.h"


typedef struct
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
#line 312 "/usr/include/signal.h"
#line 313 "/usr/include/signal.h"

#line 1 "/usr/include/sys/ucontext.h"

















#line 20 "/usr/include/sys/ucontext.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/sys/ucontext.h"

#line 1 "/usr/include/bits/types.h"





















#line 24 "/usr/include/sys/ucontext.h"
#line 1 "/usr/include/bits/types/sigset_t.h"
#line 25 "/usr/include/sys/ucontext.h"
#line 1 "/usr/include/bits/types/stack_t.h"

















#line 26 "/usr/include/sys/ucontext.h"


#line 33 "/usr/include/sys/ucontext.h"

#line 35 "/usr/include/sys/ucontext.h"


typedef long long int greg_t;


#line 44 "/usr/include/sys/ucontext.h"


typedef greg_t gregset_t[23];

#line 49 "/usr/include/sys/ucontext.h"

enum
{
  REG_R8 = 0,
#line 54 "/usr/include/sys/ucontext.h"
  REG_R9,
#line 56 "/usr/include/sys/ucontext.h"
  REG_R10,
#line 58 "/usr/include/sys/ucontext.h"
  REG_R11,
#line 60 "/usr/include/sys/ucontext.h"
  REG_R12,
#line 62 "/usr/include/sys/ucontext.h"
  REG_R13,
#line 64 "/usr/include/sys/ucontext.h"
  REG_R14,
#line 66 "/usr/include/sys/ucontext.h"
  REG_R15,
#line 68 "/usr/include/sys/ucontext.h"
  REG_RDI,
#line 70 "/usr/include/sys/ucontext.h"
  REG_RSI,
#line 72 "/usr/include/sys/ucontext.h"
  REG_RBP,
#line 74 "/usr/include/sys/ucontext.h"
  REG_RBX,
#line 76 "/usr/include/sys/ucontext.h"
  REG_RDX,
#line 78 "/usr/include/sys/ucontext.h"
  REG_RAX,
#line 80 "/usr/include/sys/ucontext.h"
  REG_RCX,
#line 82 "/usr/include/sys/ucontext.h"
  REG_RSP,
#line 84 "/usr/include/sys/ucontext.h"
  REG_RIP,
#line 86 "/usr/include/sys/ucontext.h"
  REG_EFL,
#line 88 "/usr/include/sys/ucontext.h"
  REG_CSGSFS,		
#line 90 "/usr/include/sys/ucontext.h"
  REG_ERR,
#line 92 "/usr/include/sys/ucontext.h"
  REG_TRAPNO,
#line 94 "/usr/include/sys/ucontext.h"
  REG_OLDMASK,
#line 96 "/usr/include/sys/ucontext.h"
  REG_CR2
#line 98 "/usr/include/sys/ucontext.h"
};
#line 100 "/usr/include/sys/ucontext.h"

struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int __glibc_reserved1[3];
};

struct _libc_xmmreg
{
  __uint32_t	element[4];
};

struct _libc_fpstate
{
  
  __uint16_t		cwd;
  __uint16_t		swd;
  __uint16_t		ftw;
  __uint16_t		fop;
  __uint64_t		rip;
  __uint64_t		rdp;
  __uint32_t		mxcsr;
  __uint32_t		mxcr_mask;
  struct _libc_fpxreg	_st[8];
  struct _libc_xmmreg	_xmm[16];
  __uint32_t		__glibc_reserved1[24];
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;
    
    fpregset_t fpregs;
    unsigned long long __reserved1 [8];
} mcontext_t;


typedef struct ucontext_t
  {
    unsigned long int uc_flags;
    struct ucontext_t *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
    unsigned long long int __ssp[4];
  } ucontext_t;

#line 259 "/usr/include/sys/ucontext.h"

#line 261 "/usr/include/sys/ucontext.h"
#line 315 "/usr/include/signal.h"
#line 317 "/usr/include/signal.h"

#line 319 "/usr/include/signal.h"



extern int siginterrupt (int __sig, int __interrupt) 
  __attribute__ ((__deprecated__));

#line 1 "/usr/include/bits/sigstack.h"


















#line 21 "/usr/include/bits/sigstack.h"

#line 25 "/usr/include/bits/sigstack.h"


#line 28 "/usr/include/bits/sigstack.h"


#line 31 "/usr/include/bits/sigstack.h"
#line 326 "/usr/include/signal.h"
#line 1 "/usr/include/bits/sigstksz.h"


















#line 22 "/usr/include/bits/sigstksz.h"

#line 1 "/usr/include/unistd.h"





















#line 24 "/usr/include/unistd.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/unistd.h"






#line 33 "/usr/include/unistd.h"

#line 48 "/usr/include/unistd.h"




#line 54 "/usr/include/unistd.h"

#line 65 "/usr/include/unistd.h"


#line 68 "/usr/include/unistd.h"


#line 71 "/usr/include/unistd.h"



#line 75 "/usr/include/unistd.h"



#line 79 "/usr/include/unistd.h"



#line 83 "/usr/include/unistd.h"



#line 87 "/usr/include/unistd.h"


#line 98 "/usr/include/unistd.h"


#line 101 "/usr/include/unistd.h"


#line 106 "/usr/include/unistd.h"


#line 109 "/usr/include/unistd.h"



#line 113 "/usr/include/unistd.h"


#line 116 "/usr/include/unistd.h"






















































































#line 1 "/usr/include/bits/posix_opt.h"


















#line 21 "/usr/include/bits/posix_opt.h"


#line 24 "/usr/include/bits/posix_opt.h"


#line 27 "/usr/include/bits/posix_opt.h"





#line 33 "/usr/include/bits/posix_opt.h"


#line 36 "/usr/include/bits/posix_opt.h"


#line 39 "/usr/include/bits/posix_opt.h"


#line 42 "/usr/include/bits/posix_opt.h"


#line 45 "/usr/include/bits/posix_opt.h"


#line 48 "/usr/include/bits/posix_opt.h"


#line 51 "/usr/include/bits/posix_opt.h"


#line 54 "/usr/include/bits/posix_opt.h"



#line 58 "/usr/include/bits/posix_opt.h"


#line 61 "/usr/include/bits/posix_opt.h"


#line 64 "/usr/include/bits/posix_opt.h"


#line 67 "/usr/include/bits/posix_opt.h"


#line 70 "/usr/include/bits/posix_opt.h"


#line 73 "/usr/include/bits/posix_opt.h"


#line 77 "/usr/include/bits/posix_opt.h"


#line 80 "/usr/include/bits/posix_opt.h"


#line 83 "/usr/include/bits/posix_opt.h"


#line 86 "/usr/include/bits/posix_opt.h"


#line 89 "/usr/include/bits/posix_opt.h"



#line 93 "/usr/include/bits/posix_opt.h"

#line 95 "/usr/include/bits/posix_opt.h"

#line 97 "/usr/include/bits/posix_opt.h"


#line 101 "/usr/include/bits/posix_opt.h"


#line 104 "/usr/include/bits/posix_opt.h"


#line 107 "/usr/include/bits/posix_opt.h"


#line 111 "/usr/include/bits/posix_opt.h"

#line 113 "/usr/include/bits/posix_opt.h"

#line 115 "/usr/include/bits/posix_opt.h"


#line 118 "/usr/include/bits/posix_opt.h"


#line 123 "/usr/include/bits/posix_opt.h"


#line 126 "/usr/include/bits/posix_opt.h"


#line 129 "/usr/include/bits/posix_opt.h"


#line 132 "/usr/include/bits/posix_opt.h"


#line 135 "/usr/include/bits/posix_opt.h"


#line 138 "/usr/include/bits/posix_opt.h"


#line 141 "/usr/include/bits/posix_opt.h"


#line 144 "/usr/include/bits/posix_opt.h"


#line 147 "/usr/include/bits/posix_opt.h"


#line 150 "/usr/include/bits/posix_opt.h"


#line 153 "/usr/include/bits/posix_opt.h"


#line 156 "/usr/include/bits/posix_opt.h"


#line 159 "/usr/include/bits/posix_opt.h"


#line 162 "/usr/include/bits/posix_opt.h"


#line 165 "/usr/include/bits/posix_opt.h"


#line 168 "/usr/include/bits/posix_opt.h"


#line 171 "/usr/include/bits/posix_opt.h"


#line 174 "/usr/include/bits/posix_opt.h"


#line 177 "/usr/include/bits/posix_opt.h"


#line 180 "/usr/include/bits/posix_opt.h"


#line 184 "/usr/include/bits/posix_opt.h"


#line 190 "/usr/include/bits/posix_opt.h"


#line 193 "/usr/include/bits/posix_opt.h"
#line 203 "/usr/include/unistd.h"


#line 1 "/usr/include/bits/environments.h"

















#line 21 "/usr/include/bits/environments.h"

#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 23 "/usr/include/bits/environments.h"



















#line 43 "/usr/include/bits/environments.h"













#line 59 "/usr/include/bits/environments.h"


#line 64 "/usr/include/bits/environments.h"

#line 94 "/usr/include/bits/environments.h"
#line 207 "/usr/include/unistd.h"
#line 208 "/usr/include/unistd.h"


#line 213 "/usr/include/unistd.h"




#line 1 "/usr/include/bits/types.h"





















#line 218 "/usr/include/unistd.h"

#line 220 "/usr/include/unistd.h"
typedef __ssize_t ssize_t;
#line 223 "/usr/include/unistd.h"

#line 1 "/usr/lib/clang/21/include/stddef.h"





















#line 37 "/usr/lib/clang/21/include/stddef.h"

#line 80 "/usr/lib/clang/21/include/stddef.h"

#line 85 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_size_t.h"












#line 88 "/usr/lib/clang/21/include/stddef.h"
#line 90 "/usr/lib/clang/21/include/stddef.h"

#line 95 "/usr/lib/clang/21/include/stddef.h"

#line 100 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_null.h"









#line 11 "/usr/lib/clang/21/include/__stddef_null.h"






#line 18 "/usr/lib/clang/21/include/__stddef_null.h"

#line 28 "/usr/lib/clang/21/include/__stddef_null.h"
#line 103 "/usr/lib/clang/21/include/stddef.h"
#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 227 "/usr/include/unistd.h"

#line 229 "/usr/include/unistd.h"


#line 232 "/usr/include/unistd.h"
typedef __gid_t gid_t;
#line 235 "/usr/include/unistd.h"

#line 240 "/usr/include/unistd.h"

#line 243 "/usr/include/unistd.h"
typedef __off_t off_t;
#line 250 "/usr/include/unistd.h"
typedef __off64_t off64_t;
#line 253 "/usr/include/unistd.h"

#line 255 "/usr/include/unistd.h"
typedef __useconds_t useconds_t;
#line 258 "/usr/include/unistd.h"

#line 264 "/usr/include/unistd.h"

#line 271 "/usr/include/unistd.h"

#line 274 "/usr/include/unistd.h"
typedef __socklen_t socklen_t;
#line 278 "/usr/include/unistd.h"



#line 285 "/usr/include/unistd.h"


extern int access (const char *__name, int __type)  ;

#line 290 "/usr/include/unistd.h"


extern int euidaccess (const char *__name, int __type)
      ;


extern int eaccess (const char *__name, int __type)
      ;


extern int execveat (int __fd, const char *__path, char *const __argv[],
                     char *const __envp[], int __flags)
     ;
#line 304 "/usr/include/unistd.h"

#line 306 "/usr/include/unistd.h"



extern int faccessat (int __fd, const char *__file, int __type, int __flag)
       ;
#line 312 "/usr/include/unistd.h"



#line 324 "/usr/include/unistd.h"

#line 326 "/usr/include/unistd.h"

#line 331 "/usr/include/unistd.h"







#line 339 "/usr/include/unistd.h"
extern __off_t lseek (int __fd, __off_t __offset, int __whence) ;
#line 350 "/usr/include/unistd.h"
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     ;
#line 353 "/usr/include/unistd.h"





extern int close (int __fd);

#line 361 "/usr/include/unistd.h"


extern void closefrom (int __lowfd) ;
#line 365 "/usr/include/unistd.h"






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) 
    ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) 
    ;

#line 383 "/usr/include/unistd.h"






extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
		      __off_t __offset) 
    ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
		       __off_t __offset) 
    ;

#line 417 "/usr/include/unistd.h"

#line 419 "/usr/include/unistd.h"



extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
			__off64_t __offset) 
    ;


extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
			 __off64_t __offset) 
    ;
#line 432 "/usr/include/unistd.h"





extern int pipe (int __pipedes[2])  ;

#line 440 "/usr/include/unistd.h"


extern int pipe2 (int __pipedes[2], int __flags)  ;
#line 444 "/usr/include/unistd.h"








extern unsigned int alarm (unsigned int __seconds) ;











extern unsigned int sleep (unsigned int __seconds);

#line 467 "/usr/include/unistd.h"




extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     ;






extern int usleep (__useconds_t __useconds);
#line 481 "/usr/include/unistd.h"







extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
       ;

#line 496 "/usr/include/unistd.h"

extern int fchown (int __fd, __uid_t __owner, __gid_t __group)  ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
       ;

#line 506 "/usr/include/unistd.h"

#line 508 "/usr/include/unistd.h"


extern int fchownat (int __fd, const char *__file, __uid_t __owner,
		     __gid_t __group, int __flag)
       ;
#line 514 "/usr/include/unistd.h"


extern int chdir (const char *__path)   ;

#line 519 "/usr/include/unistd.h"

extern int fchdir (int __fd)  ;
#line 522 "/usr/include/unistd.h"








extern char *getcwd (char *__buf, size_t __size)  ;

#line 533 "/usr/include/unistd.h"



extern char *get_current_dir_name (void) ;
#line 538 "/usr/include/unistd.h"

#line 540 "/usr/include/unistd.h"



extern char *getwd (char *__buf)
       __attribute__ ((__deprecated__)) 
    ;
#line 547 "/usr/include/unistd.h"



extern int dup (int __fd)  ;


extern int dup2 (int __fd, int __fd2) ;

#line 556 "/usr/include/unistd.h"


extern int dup3 (int __fd, int __fd2, int __flags) ;
#line 560 "/usr/include/unistd.h"


extern char **__environ;
#line 564 "/usr/include/unistd.h"
extern char **environ;
#line 566 "/usr/include/unistd.h"




extern int execve (const char *__path, char *const __argv[],
		   char *const __envp[])  ;

#line 574 "/usr/include/unistd.h"


extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
      ;
#line 579 "/usr/include/unistd.h"



extern int execv (const char *__path, char *const __argv[])
      ;



extern int execle (const char *__path, const char *__arg, ...)
      ;



extern int execl (const char *__path, const char *__arg, ...)
      ;



extern int execvp (const char *__file, char *const __argv[])
      ;




extern int execlp (const char *__file, const char *__arg, ...)
      ;

#line 607 "/usr/include/unistd.h"


extern int execvpe (const char *__file, char *const __argv[],
		    char *const __envp[])
      ;
#line 613 "/usr/include/unistd.h"


#line 616 "/usr/include/unistd.h"

extern int nice (int __inc)  ;
#line 619 "/usr/include/unistd.h"



extern void _exit (int __status) __attribute__ ((__noreturn__));





#line 1 "/usr/include/bits/confname.h"


















#line 22 "/usr/include/bits/confname.h"


enum
  {
    _PC_LINK_MAX,
#line 28 "/usr/include/bits/confname.h"
    _PC_MAX_CANON,
#line 30 "/usr/include/bits/confname.h"
    _PC_MAX_INPUT,
#line 32 "/usr/include/bits/confname.h"
    _PC_NAME_MAX,
#line 34 "/usr/include/bits/confname.h"
    _PC_PATH_MAX,
#line 36 "/usr/include/bits/confname.h"
    _PC_PIPE_BUF,
#line 38 "/usr/include/bits/confname.h"
    _PC_CHOWN_RESTRICTED,
#line 40 "/usr/include/bits/confname.h"
    _PC_NO_TRUNC,
#line 42 "/usr/include/bits/confname.h"
    _PC_VDISABLE,
#line 44 "/usr/include/bits/confname.h"
    _PC_SYNC_IO,
#line 46 "/usr/include/bits/confname.h"
    _PC_ASYNC_IO,
#line 48 "/usr/include/bits/confname.h"
    _PC_PRIO_IO,
#line 50 "/usr/include/bits/confname.h"
    _PC_SOCK_MAXBUF,
#line 52 "/usr/include/bits/confname.h"
    _PC_FILESIZEBITS,
#line 54 "/usr/include/bits/confname.h"
    _PC_REC_INCR_XFER_SIZE,
#line 56 "/usr/include/bits/confname.h"
    _PC_REC_MAX_XFER_SIZE,
#line 58 "/usr/include/bits/confname.h"
    _PC_REC_MIN_XFER_SIZE,
#line 60 "/usr/include/bits/confname.h"
    _PC_REC_XFER_ALIGN,
#line 62 "/usr/include/bits/confname.h"
    _PC_ALLOC_SIZE_MIN,
#line 64 "/usr/include/bits/confname.h"
    _PC_SYMLINK_MAX,
#line 66 "/usr/include/bits/confname.h"
    _PC_2_SYMLINKS
#line 68 "/usr/include/bits/confname.h"
  };


enum
  {
    _SC_ARG_MAX,
#line 75 "/usr/include/bits/confname.h"
    _SC_CHILD_MAX,
#line 77 "/usr/include/bits/confname.h"
    _SC_CLK_TCK,
#line 79 "/usr/include/bits/confname.h"
    _SC_NGROUPS_MAX,
#line 81 "/usr/include/bits/confname.h"
    _SC_OPEN_MAX,
#line 83 "/usr/include/bits/confname.h"
    _SC_STREAM_MAX,
#line 85 "/usr/include/bits/confname.h"
    _SC_TZNAME_MAX,
#line 87 "/usr/include/bits/confname.h"
    _SC_JOB_CONTROL,
#line 89 "/usr/include/bits/confname.h"
    _SC_SAVED_IDS,
#line 91 "/usr/include/bits/confname.h"
    _SC_REALTIME_SIGNALS,
#line 93 "/usr/include/bits/confname.h"
    _SC_PRIORITY_SCHEDULING,
#line 95 "/usr/include/bits/confname.h"
    _SC_TIMERS,
#line 97 "/usr/include/bits/confname.h"
    _SC_ASYNCHRONOUS_IO,
#line 99 "/usr/include/bits/confname.h"
    _SC_PRIORITIZED_IO,
#line 101 "/usr/include/bits/confname.h"
    _SC_SYNCHRONIZED_IO,
#line 103 "/usr/include/bits/confname.h"
    _SC_FSYNC,
#line 105 "/usr/include/bits/confname.h"
    _SC_MAPPED_FILES,
#line 107 "/usr/include/bits/confname.h"
    _SC_MEMLOCK,
#line 109 "/usr/include/bits/confname.h"
    _SC_MEMLOCK_RANGE,
#line 111 "/usr/include/bits/confname.h"
    _SC_MEMORY_PROTECTION,
#line 113 "/usr/include/bits/confname.h"
    _SC_MESSAGE_PASSING,
#line 115 "/usr/include/bits/confname.h"
    _SC_SEMAPHORES,
#line 117 "/usr/include/bits/confname.h"
    _SC_SHARED_MEMORY_OBJECTS,
#line 119 "/usr/include/bits/confname.h"
    _SC_AIO_LISTIO_MAX,
#line 121 "/usr/include/bits/confname.h"
    _SC_AIO_MAX,
#line 123 "/usr/include/bits/confname.h"
    _SC_AIO_PRIO_DELTA_MAX,
#line 125 "/usr/include/bits/confname.h"
    _SC_DELAYTIMER_MAX,
#line 127 "/usr/include/bits/confname.h"
    _SC_MQ_OPEN_MAX,
#line 129 "/usr/include/bits/confname.h"
    _SC_MQ_PRIO_MAX,
#line 131 "/usr/include/bits/confname.h"
    _SC_VERSION,
#line 133 "/usr/include/bits/confname.h"
    _SC_PAGESIZE,
#line 136 "/usr/include/bits/confname.h"
    _SC_RTSIG_MAX,
#line 138 "/usr/include/bits/confname.h"
    _SC_SEM_NSEMS_MAX,
#line 140 "/usr/include/bits/confname.h"
    _SC_SEM_VALUE_MAX,
#line 142 "/usr/include/bits/confname.h"
    _SC_SIGQUEUE_MAX,
#line 144 "/usr/include/bits/confname.h"
    _SC_TIMER_MAX,
#line 146 "/usr/include/bits/confname.h"

    

    _SC_BC_BASE_MAX,
#line 151 "/usr/include/bits/confname.h"
    _SC_BC_DIM_MAX,
#line 153 "/usr/include/bits/confname.h"
    _SC_BC_SCALE_MAX,
#line 155 "/usr/include/bits/confname.h"
    _SC_BC_STRING_MAX,
#line 157 "/usr/include/bits/confname.h"
    _SC_COLL_WEIGHTS_MAX,
#line 159 "/usr/include/bits/confname.h"
    _SC_EQUIV_CLASS_MAX,
#line 161 "/usr/include/bits/confname.h"
    _SC_EXPR_NEST_MAX,
#line 163 "/usr/include/bits/confname.h"
    _SC_LINE_MAX,
#line 165 "/usr/include/bits/confname.h"
    _SC_RE_DUP_MAX,
#line 167 "/usr/include/bits/confname.h"
    _SC_CHARCLASS_NAME_MAX,
#line 169 "/usr/include/bits/confname.h"

    _SC_2_VERSION,
#line 172 "/usr/include/bits/confname.h"
    _SC_2_C_BIND,
#line 174 "/usr/include/bits/confname.h"
    _SC_2_C_DEV,
#line 176 "/usr/include/bits/confname.h"
    _SC_2_FORT_DEV,
#line 178 "/usr/include/bits/confname.h"
    _SC_2_FORT_RUN,
#line 180 "/usr/include/bits/confname.h"
    _SC_2_SW_DEV,
#line 182 "/usr/include/bits/confname.h"
    _SC_2_LOCALEDEF,
#line 184 "/usr/include/bits/confname.h"

    _SC_PII,
#line 187 "/usr/include/bits/confname.h"
    _SC_PII_XTI,
#line 189 "/usr/include/bits/confname.h"
    _SC_PII_SOCKET,
#line 191 "/usr/include/bits/confname.h"
    _SC_PII_INTERNET,
#line 193 "/usr/include/bits/confname.h"
    _SC_PII_OSI,
#line 195 "/usr/include/bits/confname.h"
    _SC_POLL,
#line 197 "/usr/include/bits/confname.h"
    _SC_SELECT,
#line 199 "/usr/include/bits/confname.h"
    _SC_UIO_MAXIOV,
#line 201 "/usr/include/bits/confname.h"
    _SC_IOV_MAX = _SC_UIO_MAXIOV,
#line 203 "/usr/include/bits/confname.h"
    _SC_PII_INTERNET_STREAM,
#line 205 "/usr/include/bits/confname.h"
    _SC_PII_INTERNET_DGRAM,
#line 207 "/usr/include/bits/confname.h"
    _SC_PII_OSI_COTS,
#line 209 "/usr/include/bits/confname.h"
    _SC_PII_OSI_CLTS,
#line 211 "/usr/include/bits/confname.h"
    _SC_PII_OSI_M,
#line 213 "/usr/include/bits/confname.h"
    _SC_T_IOV_MAX,
#line 215 "/usr/include/bits/confname.h"

    
    _SC_THREADS,
#line 219 "/usr/include/bits/confname.h"
    _SC_THREAD_SAFE_FUNCTIONS,
#line 221 "/usr/include/bits/confname.h"
    _SC_GETGR_R_SIZE_MAX,
#line 223 "/usr/include/bits/confname.h"
    _SC_GETPW_R_SIZE_MAX,
#line 225 "/usr/include/bits/confname.h"
    _SC_LOGIN_NAME_MAX,
#line 227 "/usr/include/bits/confname.h"
    _SC_TTY_NAME_MAX,
#line 229 "/usr/include/bits/confname.h"
    _SC_THREAD_DESTRUCTOR_ITERATIONS,
#line 231 "/usr/include/bits/confname.h"
    _SC_THREAD_KEYS_MAX,
#line 233 "/usr/include/bits/confname.h"
    _SC_THREAD_STACK_MIN,
#line 235 "/usr/include/bits/confname.h"
    _SC_THREAD_THREADS_MAX,
#line 237 "/usr/include/bits/confname.h"
    _SC_THREAD_ATTR_STACKADDR,
#line 239 "/usr/include/bits/confname.h"
    _SC_THREAD_ATTR_STACKSIZE,
#line 241 "/usr/include/bits/confname.h"
    _SC_THREAD_PRIORITY_SCHEDULING,
#line 243 "/usr/include/bits/confname.h"
    _SC_THREAD_PRIO_INHERIT,
#line 245 "/usr/include/bits/confname.h"
    _SC_THREAD_PRIO_PROTECT,
#line 247 "/usr/include/bits/confname.h"
    _SC_THREAD_PROCESS_SHARED,
#line 249 "/usr/include/bits/confname.h"

    _SC_NPROCESSORS_CONF,
#line 252 "/usr/include/bits/confname.h"
    _SC_NPROCESSORS_ONLN,
#line 254 "/usr/include/bits/confname.h"
    _SC_PHYS_PAGES,
#line 256 "/usr/include/bits/confname.h"
    _SC_AVPHYS_PAGES,
#line 258 "/usr/include/bits/confname.h"
    _SC_ATEXIT_MAX,
#line 260 "/usr/include/bits/confname.h"
    _SC_PASS_MAX,
#line 262 "/usr/include/bits/confname.h"

    _SC_XOPEN_VERSION,
#line 265 "/usr/include/bits/confname.h"
    _SC_XOPEN_XCU_VERSION,
#line 267 "/usr/include/bits/confname.h"
    _SC_XOPEN_UNIX,
#line 269 "/usr/include/bits/confname.h"
    _SC_XOPEN_CRYPT,
#line 271 "/usr/include/bits/confname.h"
    _SC_XOPEN_ENH_I18N,
#line 273 "/usr/include/bits/confname.h"
    _SC_XOPEN_SHM,
#line 275 "/usr/include/bits/confname.h"

    _SC_2_CHAR_TERM,
#line 278 "/usr/include/bits/confname.h"
    _SC_2_C_VERSION,
#line 280 "/usr/include/bits/confname.h"
    _SC_2_UPE,
#line 282 "/usr/include/bits/confname.h"

    _SC_XOPEN_XPG2,
#line 285 "/usr/include/bits/confname.h"
    _SC_XOPEN_XPG3,
#line 287 "/usr/include/bits/confname.h"
    _SC_XOPEN_XPG4,
#line 289 "/usr/include/bits/confname.h"

    _SC_CHAR_BIT,
#line 292 "/usr/include/bits/confname.h"
    _SC_CHAR_MAX,
#line 294 "/usr/include/bits/confname.h"
    _SC_CHAR_MIN,
#line 296 "/usr/include/bits/confname.h"
    _SC_INT_MAX,
#line 298 "/usr/include/bits/confname.h"
    _SC_INT_MIN,
#line 300 "/usr/include/bits/confname.h"
    _SC_LONG_BIT,
#line 302 "/usr/include/bits/confname.h"
    _SC_WORD_BIT,
#line 304 "/usr/include/bits/confname.h"
    _SC_MB_LEN_MAX,
#line 306 "/usr/include/bits/confname.h"
    _SC_NZERO,
#line 308 "/usr/include/bits/confname.h"
    _SC_SSIZE_MAX,
#line 310 "/usr/include/bits/confname.h"
    _SC_SCHAR_MAX,
#line 312 "/usr/include/bits/confname.h"
    _SC_SCHAR_MIN,
#line 314 "/usr/include/bits/confname.h"
    _SC_SHRT_MAX,
#line 316 "/usr/include/bits/confname.h"
    _SC_SHRT_MIN,
#line 318 "/usr/include/bits/confname.h"
    _SC_UCHAR_MAX,
#line 320 "/usr/include/bits/confname.h"
    _SC_UINT_MAX,
#line 322 "/usr/include/bits/confname.h"
    _SC_ULONG_MAX,
#line 324 "/usr/include/bits/confname.h"
    _SC_USHRT_MAX,
#line 326 "/usr/include/bits/confname.h"

    _SC_NL_ARGMAX,
#line 329 "/usr/include/bits/confname.h"
    _SC_NL_LANGMAX,
#line 331 "/usr/include/bits/confname.h"
    _SC_NL_MSGMAX,
#line 333 "/usr/include/bits/confname.h"
    _SC_NL_NMAX,
#line 335 "/usr/include/bits/confname.h"
    _SC_NL_SETMAX,
#line 337 "/usr/include/bits/confname.h"
    _SC_NL_TEXTMAX,
#line 339 "/usr/include/bits/confname.h"

    _SC_XBS5_ILP32_OFF32,
#line 342 "/usr/include/bits/confname.h"
    _SC_XBS5_ILP32_OFFBIG,
#line 344 "/usr/include/bits/confname.h"
    _SC_XBS5_LP64_OFF64,
#line 346 "/usr/include/bits/confname.h"
    _SC_XBS5_LPBIG_OFFBIG,
#line 348 "/usr/include/bits/confname.h"

    _SC_XOPEN_LEGACY,
#line 351 "/usr/include/bits/confname.h"
    _SC_XOPEN_REALTIME,
#line 353 "/usr/include/bits/confname.h"
    _SC_XOPEN_REALTIME_THREADS,
#line 355 "/usr/include/bits/confname.h"

    _SC_ADVISORY_INFO,
#line 358 "/usr/include/bits/confname.h"
    _SC_BARRIERS,
#line 360 "/usr/include/bits/confname.h"
    _SC_BASE,
#line 362 "/usr/include/bits/confname.h"
    _SC_C_LANG_SUPPORT,
#line 364 "/usr/include/bits/confname.h"
    _SC_C_LANG_SUPPORT_R,
#line 366 "/usr/include/bits/confname.h"
    _SC_CLOCK_SELECTION,
#line 368 "/usr/include/bits/confname.h"
    _SC_CPUTIME,
#line 370 "/usr/include/bits/confname.h"
    _SC_THREAD_CPUTIME,
#line 372 "/usr/include/bits/confname.h"
    _SC_DEVICE_IO,
#line 374 "/usr/include/bits/confname.h"
    _SC_DEVICE_SPECIFIC,
#line 376 "/usr/include/bits/confname.h"
    _SC_DEVICE_SPECIFIC_R,
#line 378 "/usr/include/bits/confname.h"
    _SC_FD_MGMT,
#line 380 "/usr/include/bits/confname.h"
    _SC_FIFO,
#line 382 "/usr/include/bits/confname.h"
    _SC_PIPE,
#line 384 "/usr/include/bits/confname.h"
    _SC_FILE_ATTRIBUTES,
#line 386 "/usr/include/bits/confname.h"
    _SC_FILE_LOCKING,
#line 388 "/usr/include/bits/confname.h"
    _SC_FILE_SYSTEM,
#line 390 "/usr/include/bits/confname.h"
    _SC_MONOTONIC_CLOCK,
#line 392 "/usr/include/bits/confname.h"
    _SC_MULTI_PROCESS,
#line 394 "/usr/include/bits/confname.h"
    _SC_SINGLE_PROCESS,
#line 396 "/usr/include/bits/confname.h"
    _SC_NETWORKING,
#line 398 "/usr/include/bits/confname.h"
    _SC_READER_WRITER_LOCKS,
#line 400 "/usr/include/bits/confname.h"
    _SC_SPIN_LOCKS,
#line 402 "/usr/include/bits/confname.h"
    _SC_REGEXP,
#line 404 "/usr/include/bits/confname.h"
    _SC_REGEX_VERSION,
#line 406 "/usr/include/bits/confname.h"
    _SC_SHELL,
#line 408 "/usr/include/bits/confname.h"
    _SC_SIGNALS,
#line 410 "/usr/include/bits/confname.h"
    _SC_SPAWN,
#line 412 "/usr/include/bits/confname.h"
    _SC_SPORADIC_SERVER,
#line 414 "/usr/include/bits/confname.h"
    _SC_THREAD_SPORADIC_SERVER,
#line 416 "/usr/include/bits/confname.h"
    _SC_SYSTEM_DATABASE,
#line 418 "/usr/include/bits/confname.h"
    _SC_SYSTEM_DATABASE_R,
#line 420 "/usr/include/bits/confname.h"
    _SC_TIMEOUTS,
#line 422 "/usr/include/bits/confname.h"
    _SC_TYPED_MEMORY_OBJECTS,
#line 424 "/usr/include/bits/confname.h"
    _SC_USER_GROUPS,
#line 426 "/usr/include/bits/confname.h"
    _SC_USER_GROUPS_R,
#line 428 "/usr/include/bits/confname.h"
    _SC_2_PBS,
#line 430 "/usr/include/bits/confname.h"
    _SC_2_PBS_ACCOUNTING,
#line 432 "/usr/include/bits/confname.h"
    _SC_2_PBS_LOCATE,
#line 434 "/usr/include/bits/confname.h"
    _SC_2_PBS_MESSAGE,
#line 436 "/usr/include/bits/confname.h"
    _SC_2_PBS_TRACK,
#line 438 "/usr/include/bits/confname.h"
    _SC_SYMLOOP_MAX,
#line 440 "/usr/include/bits/confname.h"
    _SC_STREAMS,
#line 442 "/usr/include/bits/confname.h"
    _SC_2_PBS_CHECKPOINT,
#line 444 "/usr/include/bits/confname.h"

    _SC_V6_ILP32_OFF32,
#line 447 "/usr/include/bits/confname.h"
    _SC_V6_ILP32_OFFBIG,
#line 449 "/usr/include/bits/confname.h"
    _SC_V6_LP64_OFF64,
#line 451 "/usr/include/bits/confname.h"
    _SC_V6_LPBIG_OFFBIG,
#line 453 "/usr/include/bits/confname.h"

    _SC_HOST_NAME_MAX,
#line 456 "/usr/include/bits/confname.h"
    _SC_TRACE,
#line 458 "/usr/include/bits/confname.h"
    _SC_TRACE_EVENT_FILTER,
#line 460 "/usr/include/bits/confname.h"
    _SC_TRACE_INHERIT,
#line 462 "/usr/include/bits/confname.h"
    _SC_TRACE_LOG,
#line 464 "/usr/include/bits/confname.h"

    _SC_LEVEL1_ICACHE_SIZE,
#line 467 "/usr/include/bits/confname.h"
    _SC_LEVEL1_ICACHE_ASSOC,
#line 469 "/usr/include/bits/confname.h"
    _SC_LEVEL1_ICACHE_LINESIZE,
#line 471 "/usr/include/bits/confname.h"
    _SC_LEVEL1_DCACHE_SIZE,
#line 473 "/usr/include/bits/confname.h"
    _SC_LEVEL1_DCACHE_ASSOC,
#line 475 "/usr/include/bits/confname.h"
    _SC_LEVEL1_DCACHE_LINESIZE,
#line 477 "/usr/include/bits/confname.h"
    _SC_LEVEL2_CACHE_SIZE,
#line 479 "/usr/include/bits/confname.h"
    _SC_LEVEL2_CACHE_ASSOC,
#line 481 "/usr/include/bits/confname.h"
    _SC_LEVEL2_CACHE_LINESIZE,
#line 483 "/usr/include/bits/confname.h"
    _SC_LEVEL3_CACHE_SIZE,
#line 485 "/usr/include/bits/confname.h"
    _SC_LEVEL3_CACHE_ASSOC,
#line 487 "/usr/include/bits/confname.h"
    _SC_LEVEL3_CACHE_LINESIZE,
#line 489 "/usr/include/bits/confname.h"
    _SC_LEVEL4_CACHE_SIZE,
#line 491 "/usr/include/bits/confname.h"
    _SC_LEVEL4_CACHE_ASSOC,
#line 493 "/usr/include/bits/confname.h"
    _SC_LEVEL4_CACHE_LINESIZE,
#line 495 "/usr/include/bits/confname.h"
    

    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,
#line 499 "/usr/include/bits/confname.h"
    _SC_RAW_SOCKETS,
#line 501 "/usr/include/bits/confname.h"

    _SC_V7_ILP32_OFF32,
#line 504 "/usr/include/bits/confname.h"
    _SC_V7_ILP32_OFFBIG,
#line 506 "/usr/include/bits/confname.h"
    _SC_V7_LP64_OFF64,
#line 508 "/usr/include/bits/confname.h"
    _SC_V7_LPBIG_OFFBIG,
#line 510 "/usr/include/bits/confname.h"

    _SC_SS_REPL_MAX,
#line 513 "/usr/include/bits/confname.h"

    _SC_TRACE_EVENT_NAME_MAX,
#line 516 "/usr/include/bits/confname.h"
    _SC_TRACE_NAME_MAX,
#line 518 "/usr/include/bits/confname.h"
    _SC_TRACE_SYS_MAX,
#line 520 "/usr/include/bits/confname.h"
    _SC_TRACE_USER_EVENT_MAX,
#line 522 "/usr/include/bits/confname.h"

    _SC_XOPEN_STREAMS,
#line 525 "/usr/include/bits/confname.h"

    _SC_THREAD_ROBUST_PRIO_INHERIT,
#line 528 "/usr/include/bits/confname.h"
    _SC_THREAD_ROBUST_PRIO_PROTECT,
#line 530 "/usr/include/bits/confname.h"

    _SC_MINSIGSTKSZ,
#line 533 "/usr/include/bits/confname.h"

    _SC_SIGSTKSZ
#line 536 "/usr/include/bits/confname.h"
  };


enum
  {
    _CS_PATH,			
#line 543 "/usr/include/bits/confname.h"

    _CS_V6_WIDTH_RESTRICTED_ENVS,
#line 547 "/usr/include/bits/confname.h"

    _CS_GNU_LIBC_VERSION,
#line 550 "/usr/include/bits/confname.h"
    _CS_GNU_LIBPTHREAD_VERSION,
#line 552 "/usr/include/bits/confname.h"

    _CS_V5_WIDTH_RESTRICTED_ENVS,
#line 556 "/usr/include/bits/confname.h"

    _CS_V7_WIDTH_RESTRICTED_ENVS,
#line 560 "/usr/include/bits/confname.h"

    _CS_LFS_CFLAGS = 1000,
#line 563 "/usr/include/bits/confname.h"
    _CS_LFS_LDFLAGS,
#line 565 "/usr/include/bits/confname.h"
    _CS_LFS_LIBS,
#line 567 "/usr/include/bits/confname.h"
    _CS_LFS_LINTFLAGS,
#line 569 "/usr/include/bits/confname.h"
    _CS_LFS64_CFLAGS,
#line 571 "/usr/include/bits/confname.h"
    _CS_LFS64_LDFLAGS,
#line 573 "/usr/include/bits/confname.h"
    _CS_LFS64_LIBS,
#line 575 "/usr/include/bits/confname.h"
    _CS_LFS64_LINTFLAGS,
#line 577 "/usr/include/bits/confname.h"

    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,
#line 580 "/usr/include/bits/confname.h"
    _CS_XBS5_ILP32_OFF32_LDFLAGS,
#line 582 "/usr/include/bits/confname.h"
    _CS_XBS5_ILP32_OFF32_LIBS,
#line 584 "/usr/include/bits/confname.h"
    _CS_XBS5_ILP32_OFF32_LINTFLAGS,
#line 586 "/usr/include/bits/confname.h"
    _CS_XBS5_ILP32_OFFBIG_CFLAGS,
#line 588 "/usr/include/bits/confname.h"
    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,
#line 590 "/usr/include/bits/confname.h"
    _CS_XBS5_ILP32_OFFBIG_LIBS,
#line 592 "/usr/include/bits/confname.h"
    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,
#line 594 "/usr/include/bits/confname.h"
    _CS_XBS5_LP64_OFF64_CFLAGS,
#line 596 "/usr/include/bits/confname.h"
    _CS_XBS5_LP64_OFF64_LDFLAGS,
#line 598 "/usr/include/bits/confname.h"
    _CS_XBS5_LP64_OFF64_LIBS,
#line 600 "/usr/include/bits/confname.h"
    _CS_XBS5_LP64_OFF64_LINTFLAGS,
#line 602 "/usr/include/bits/confname.h"
    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,
#line 604 "/usr/include/bits/confname.h"
    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,
#line 606 "/usr/include/bits/confname.h"
    _CS_XBS5_LPBIG_OFFBIG_LIBS,
#line 608 "/usr/include/bits/confname.h"
    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,
#line 610 "/usr/include/bits/confname.h"

    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,
#line 613 "/usr/include/bits/confname.h"
    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,
#line 615 "/usr/include/bits/confname.h"
    _CS_POSIX_V6_ILP32_OFF32_LIBS,
#line 617 "/usr/include/bits/confname.h"
    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,
#line 619 "/usr/include/bits/confname.h"
    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,
#line 621 "/usr/include/bits/confname.h"
    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,
#line 623 "/usr/include/bits/confname.h"
    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,
#line 625 "/usr/include/bits/confname.h"
    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,
#line 627 "/usr/include/bits/confname.h"
    _CS_POSIX_V6_LP64_OFF64_CFLAGS,
#line 629 "/usr/include/bits/confname.h"
    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,
#line 631 "/usr/include/bits/confname.h"
    _CS_POSIX_V6_LP64_OFF64_LIBS,
#line 633 "/usr/include/bits/confname.h"
    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,
#line 635 "/usr/include/bits/confname.h"
    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,
#line 637 "/usr/include/bits/confname.h"
    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,
#line 639 "/usr/include/bits/confname.h"
    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,
#line 641 "/usr/include/bits/confname.h"
    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,
#line 643 "/usr/include/bits/confname.h"

    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,
#line 646 "/usr/include/bits/confname.h"
    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,
#line 648 "/usr/include/bits/confname.h"
    _CS_POSIX_V7_ILP32_OFF32_LIBS,
#line 650 "/usr/include/bits/confname.h"
    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,
#line 652 "/usr/include/bits/confname.h"
    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,
#line 654 "/usr/include/bits/confname.h"
    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,
#line 656 "/usr/include/bits/confname.h"
    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,
#line 658 "/usr/include/bits/confname.h"
    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,
#line 660 "/usr/include/bits/confname.h"
    _CS_POSIX_V7_LP64_OFF64_CFLAGS,
#line 662 "/usr/include/bits/confname.h"
    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,
#line 664 "/usr/include/bits/confname.h"
    _CS_POSIX_V7_LP64_OFF64_LIBS,
#line 666 "/usr/include/bits/confname.h"
    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,
#line 668 "/usr/include/bits/confname.h"
    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,
#line 670 "/usr/include/bits/confname.h"
    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,
#line 672 "/usr/include/bits/confname.h"
    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,
#line 674 "/usr/include/bits/confname.h"
    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,
#line 676 "/usr/include/bits/confname.h"

    _CS_V6_ENV,
#line 679 "/usr/include/bits/confname.h"
    _CS_V7_ENV
#line 681 "/usr/include/bits/confname.h"
  };
#line 629 "/usr/include/unistd.h"


extern long int pathconf (const char *__path, int __name)
      ;


extern long int fpathconf (int __fd, int __name) ;


extern long int sysconf (int __name) ;

#line 641 "/usr/include/unistd.h"

extern size_t confstr (int __name, char *__buf, size_t __len) 
    ;
#line 645 "/usr/include/unistd.h"



extern __pid_t getpid (void) ;


extern __pid_t getppid (void) ;


extern __pid_t getpgrp (void) ;


extern __pid_t __getpgid (__pid_t __pid) ;
#line 659 "/usr/include/unistd.h"
extern __pid_t getpgid (__pid_t __pid) ;
#line 661 "/usr/include/unistd.h"





extern int setpgid (__pid_t __pid, __pid_t __pgid) ;

#line 669 "/usr/include/unistd.h"











extern int setpgrp (void) ;

#line 683 "/usr/include/unistd.h"




extern __pid_t setsid (void) ;

#line 690 "/usr/include/unistd.h"

extern __pid_t getsid (__pid_t __pid) ;
#line 693 "/usr/include/unistd.h"


extern __uid_t getuid (void) ;


extern __uid_t geteuid (void) ;


extern __gid_t getgid (void) ;


extern __gid_t getegid (void) ;




extern int getgroups (int __size, __gid_t __list[])  
    ;
#line 712 "/usr/include/unistd.h"

extern int group_member (__gid_t __gid) ;
#line 715 "/usr/include/unistd.h"





extern int setuid (__uid_t __uid)  ;

#line 723 "/usr/include/unistd.h"


extern int setreuid (__uid_t __ruid, __uid_t __euid)  ;
#line 727 "/usr/include/unistd.h"

#line 729 "/usr/include/unistd.h"

extern int seteuid (__uid_t __uid)  ;
#line 732 "/usr/include/unistd.h"





extern int setgid (__gid_t __gid)  ;

#line 740 "/usr/include/unistd.h"


extern int setregid (__gid_t __rgid, __gid_t __egid)  ;
#line 744 "/usr/include/unistd.h"

#line 746 "/usr/include/unistd.h"

extern int setegid (__gid_t __gid)  ;
#line 749 "/usr/include/unistd.h"

#line 751 "/usr/include/unistd.h"


extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     ;



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     ;



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
      ;



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
      ;
#line 771 "/usr/include/unistd.h"





extern __pid_t fork (void) ;

#line 779 "/usr/include/unistd.h"




extern __pid_t vfork (void) ;
#line 785 "/usr/include/unistd.h"

#line 787 "/usr/include/unistd.h"



extern __pid_t _Fork (void) ;
#line 792 "/usr/include/unistd.h"




extern char *ttyname (int __fd) ;



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
       
     ;



extern int isatty (int __fd) ;

#line 809 "/usr/include/unistd.h"


extern int ttyslot (void) ;
#line 813 "/usr/include/unistd.h"



extern int link (const char *__from, const char *__to)
       ;

#line 820 "/usr/include/unistd.h"


extern int linkat (int __fromfd, const char *__from, int __tofd,
		   const char *__to, int __flags)
       ;
#line 826 "/usr/include/unistd.h"

#line 828 "/usr/include/unistd.h"

extern int symlink (const char *__from, const char *__to)
       ;




extern ssize_t readlink (const char *__restrict __path,
			 char *__restrict __buf, size_t __len)
       
     ;

#line 841 "/usr/include/unistd.h"

#line 843 "/usr/include/unistd.h"

extern int symlinkat (const char *__from, int __tofd,
		      const char *__to)   ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
			   char *__restrict __buf, size_t __len)
       
     ;
#line 853 "/usr/include/unistd.h"


extern int unlink (const char *__name)  ;

#line 858 "/usr/include/unistd.h"

extern int unlinkat (int __fd, const char *__name, int __flag)
      ;
#line 862 "/usr/include/unistd.h"


extern int rmdir (const char *__path)  ;



extern __pid_t tcgetpgrp (int __fd) ;


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) ;






extern char *getlogin (void);
#line 880 "/usr/include/unistd.h"






extern int getlogin_r (char *__name, size_t __name_len) 
    ;
#line 889 "/usr/include/unistd.h"

#line 891 "/usr/include/unistd.h"

extern int setlogin (const char *__name)  ;
#line 894 "/usr/include/unistd.h"


#line 897 "/usr/include/unistd.h"



#line 1 "/usr/include/bits/getopt_posix.h"



















#line 22 "/usr/include/bits/getopt_posix.h"

#line 26 "/usr/include/bits/getopt_posix.h"

#line 1 "/usr/include/bits/getopt_core.h"



















#line 22 "/usr/include/bits/getopt_core.h"














extern char *optarg;













extern int optind;




extern int opterr;



extern int optopt;































extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
        ;


#line 28 "/usr/include/bits/getopt_posix.h"



#line 47 "/usr/include/bits/getopt_posix.h"


#line 901 "/usr/include/unistd.h"
#line 902 "/usr/include/unistd.h"


#line 905 "/usr/include/unistd.h"



extern int gethostname (char *__name, size_t __len)  
    ;
#line 911 "/usr/include/unistd.h"


#line 914 "/usr/include/unistd.h"


extern int sethostname (const char *__name, size_t __len)
        ;



extern int sethostid (long int __id)  ;





extern int getdomainname (char *__name, size_t __len)
       
     ;
extern int setdomainname (const char *__name, size_t __len)
        ;




extern int vhangup (void) ;


extern int revoke (const char *__file)   ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
		   size_t __offset, unsigned int __scale)
      ;





extern int acct (const char *__name) ;



extern char *getusershell (void) ;
extern void endusershell (void) ; 
extern void setusershell (void) ; 





extern int daemon (int __nochdir, int __noclose)  ;
#line 969 "/usr/include/unistd.h"


#line 972 "/usr/include/unistd.h"


extern int chroot (const char *__path)   ;



extern char *getpass (const char *__prompt) ;
#line 980 "/usr/include/unistd.h"






extern int fsync (int __fd);


#line 990 "/usr/include/unistd.h"


extern int syncfs (int __fd) ;
#line 994 "/usr/include/unistd.h"


#line 997 "/usr/include/unistd.h"


extern long int gethostid (void);


extern void sync (void) ;


#line 1006 "/usr/include/unistd.h"


extern int getpagesize (void)   __attribute__ ((__const__));




extern int getdtablesize (void) ;
#line 1015 "/usr/include/unistd.h"

#line 1017 "/usr/include/unistd.h"


#line 1020 "/usr/include/unistd.h"


#line 1023 "/usr/include/unistd.h"
extern int truncate (const char *__file, __off_t __length)
       ;
#line 1035 "/usr/include/unistd.h"
extern int truncate64 (const char *__file, __off64_t __length)
       ;
#line 1038 "/usr/include/unistd.h"

#line 1040 "/usr/include/unistd.h"

#line 1042 "/usr/include/unistd.h"


#line 1045 "/usr/include/unistd.h"
extern int ftruncate (int __fd, __off_t __length)  ;
#line 1055 "/usr/include/unistd.h"
extern int ftruncate64 (int __fd, __off64_t __length)  ;
#line 1057 "/usr/include/unistd.h"

#line 1059 "/usr/include/unistd.h"


#line 1062 "/usr/include/unistd.h"



extern int brk (void *__addr)  ;





extern void *sbrk (intptr_t __delta) ;
#line 1073 "/usr/include/unistd.h"


#line 1076 "/usr/include/unistd.h"










extern long int syscall (long int __sysno, ...) ;

#line 1089 "/usr/include/unistd.h"


#line 1092 "/usr/include/unistd.h"











#line 1107 "/usr/include/unistd.h"

#line 1109 "/usr/include/unistd.h"
extern int lockf (int __fd, int __cmd, __off_t __len) ;
#line 1119 "/usr/include/unistd.h"
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
#line 1122 "/usr/include/unistd.h"


#line 1125 "/usr/include/unistd.h"




#line 1130 "/usr/include/unistd.h"


ssize_t copy_file_range (int __infd, __off64_t *__pinoff,
			 int __outfd, __off64_t *__poutoff,
			 size_t __length, unsigned int __flags);
#line 1136 "/usr/include/unistd.h"

#line 1138 "/usr/include/unistd.h"


extern int fdatasync (int __fildes);
#line 1142 "/usr/include/unistd.h"

#line 1144 "/usr/include/unistd.h"








extern char *crypt (const char *__key, const char *__salt)
      ;
#line 1155 "/usr/include/unistd.h"

#line 1157 "/usr/include/unistd.h"




extern void swab (const void *__restrict __from, void *__restrict __to,
		  ssize_t __n)  
    
    ;
#line 1166 "/usr/include/unistd.h"





#line 1178 "/usr/include/unistd.h"




#line 1187 "/usr/include/unistd.h"

#line 1189 "/usr/include/unistd.h"


int getentropy (void *__buffer, size_t __length) 
    ;
#line 1194 "/usr/include/unistd.h"

#line 1196 "/usr/include/unistd.h"





extern int close_range (unsigned int __fd, unsigned int __max_fd,
			int __flags) ;
#line 1204 "/usr/include/unistd.h"


#line 1209 "/usr/include/unistd.h"


#line 1 "/usr/include/bits/unistd_ext.h"


















#line 22 "/usr/include/bits/unistd_ext.h"

#line 24 "/usr/include/bits/unistd_ext.h"










extern __pid_t gettid (void) ;

#line 41 "/usr/include/bits/unistd_ext.h"

#line 45 "/usr/include/bits/unistd_ext.h"

#line 49 "/usr/include/bits/unistd_ext.h"
#line 1212 "/usr/include/unistd.h"


#line 25 "/usr/include/bits/sigstksz.h"


#line 29 "/usr/include/bits/sigstksz.h"

#line 327 "/usr/include/signal.h"
#line 1 "/usr/include/bits/ss_flags.h"


















#line 21 "/usr/include/bits/ss_flags.h"

#line 25 "/usr/include/bits/ss_flags.h"


enum
{
  SS_ONSTACK = 1,
#line 31 "/usr/include/bits/ss_flags.h"
  SS_DISABLE
#line 33 "/usr/include/bits/ss_flags.h"
};
#line 328 "/usr/include/signal.h"



extern int sigaltstack (const stack_t *__restrict __ss,
			stack_t *__restrict __oss) ;
#line 334 "/usr/include/signal.h"

#line 1 "/usr/include/bits/types/struct_sigstack.h"


















#line 21 "/usr/include/bits/types/struct_sigstack.h"


struct sigstack
  {
    void *ss_sp;		
    int ss_onstack;		
  };
#line 337 "/usr/include/signal.h"
#line 338 "/usr/include/signal.h"

#line 340 "/usr/include/signal.h"



extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
      __attribute__ ((__deprecated__));
#line 346 "/usr/include/signal.h"

#line 348 "/usr/include/signal.h"



extern int sighold (int __sig) 
  __attribute__ ((__deprecated__));


extern int sigrelse (int __sig) 
  __attribute__ ((__deprecated__));


extern int sigignore (int __sig) 
  __attribute__ ((__deprecated__));


extern __sighandler_t sigset (int __sig, __sighandler_t __disp) 
  __attribute__ ((__deprecated__));
#line 367 "/usr/include/signal.h"

#line 369 "/usr/include/signal.h"


#line 1 "/usr/include/bits/pthreadtypes.h"


















#line 21 "/usr/include/bits/pthreadtypes.h"


#line 1 "/usr/include/bits/thread-shared-types.h"


















#line 21 "/usr/include/bits/thread-shared-types.h"























#line 1 "/usr/include/bits/pthreadtypes-arch.h"

















#line 20 "/usr/include/bits/pthreadtypes-arch.h"

#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 22 "/usr/include/bits/pthreadtypes-arch.h"

#line 46 "/usr/include/bits/pthreadtypes-arch.h"

#line 49 "/usr/include/bits/pthreadtypes-arch.h"

#line 54 "/usr/include/bits/pthreadtypes-arch.h"
#line 45 "/usr/include/bits/thread-shared-types.h"

#line 1 "/usr/include/bits/atomic_wide_counter.h"


















#line 21 "/usr/include/bits/atomic_wide_counter.h"




typedef union
{
  unsigned long long int __value64;
  struct
  {
    unsigned int __low;
    unsigned int __high;
  } __value32;
} __atomic_wide_counter;
#line 47 "/usr/include/bits/thread-shared-types.h"




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;















#line 1 "/usr/include/bits/struct_mutex.h"


















#line 21 "/usr/include/bits/struct_mutex.h"

struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;
#line 28 "/usr/include/bits/struct_mutex.h"
  unsigned int __nusers;
#line 30 "/usr/include/bits/struct_mutex.h"
  

  int __kind;
#line 34 "/usr/include/bits/struct_mutex.h"
  short __spins;
  short __elision;
  __pthread_list_t __list;
#line 53 "/usr/include/bits/struct_mutex.h"
};

#line 60 "/usr/include/bits/struct_mutex.h"
#line 77 "/usr/include/bits/thread-shared-types.h"












#line 1 "/usr/include/bits/struct_rwlock.h"



















#line 22 "/usr/include/bits/struct_rwlock.h"

struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;
#line 32 "/usr/include/bits/struct_rwlock.h"
  int __cur_writer;
  int __shared;
  signed char __rwelision;
#line 39 "/usr/include/bits/struct_rwlock.h"
  unsigned char __pad1[7];
#line 42 "/usr/include/bits/struct_rwlock.h"
  unsigned long int __pad2;
  

  unsigned int __flags;
#line 55 "/usr/include/bits/struct_rwlock.h"
};

#line 62 "/usr/include/bits/struct_rwlock.h"
#line 90 "/usr/include/bits/thread-shared-types.h"




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

#line 115 "/usr/include/bits/thread-shared-types.h"
#line 24 "/usr/include/bits/pthreadtypes.h"



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int  pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};
#line 65 "/usr/include/bits/pthreadtypes.h"


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
  long long int __align;
} pthread_cond_t;


#line 84 "/usr/include/bits/pthreadtypes.h"


typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;
#line 99 "/usr/include/bits/pthreadtypes.h"


#line 102 "/usr/include/bits/pthreadtypes.h"

typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
#line 120 "/usr/include/bits/pthreadtypes.h"
#line 372 "/usr/include/signal.h"
#line 1 "/usr/include/bits/sigthread.h"


















#line 21 "/usr/include/bits/sigthread.h"

#line 25 "/usr/include/bits/sigthread.h"


#line 1 "/usr/include/bits/types/__sigset_t.h"
#line 28 "/usr/include/bits/sigthread.h"



extern int pthread_sigmask (int __how,
			    const __sigset_t *__restrict __newmask,
			    __sigset_t *__restrict __oldmask);


extern int pthread_kill (pthread_t __threadid, int __signo) ;

#line 39 "/usr/include/bits/sigthread.h"

extern int pthread_sigqueue (pthread_t __threadid, int __signo,
			     const union sigval __value) ;
#line 43 "/usr/include/bits/sigthread.h"
#line 373 "/usr/include/signal.h"
#line 374 "/usr/include/signal.h"





extern int __libc_current_sigrtmin (void) ;

extern int __libc_current_sigrtmax (void) ;

#line 385 "/usr/include/signal.h"


#line 1 "/usr/include/bits/signal_ext.h"


















#line 22 "/usr/include/bits/signal_ext.h"

#line 24 "/usr/include/bits/signal_ext.h"





extern int tgkill (__pid_t __tgid, __pid_t __tid, int __signal);
#line 388 "/usr/include/signal.h"


#line 13 "main.c"
#line 1 "/usr/lib/clang/21/include/stdarg.h"





















#line 37 "/usr/lib/clang/21/include/stdarg.h"



#line 1 "/usr/lib/clang/21/include/__stdarg_header_macro.h"








#line 44 "/usr/lib/clang/21/include/stdarg.h"
#line 45 "/usr/lib/clang/21/include/stdarg.h"

#line 1 "/usr/lib/clang/21/include/__stdarg___gnuc_va_list.h"









#line 12 "/usr/lib/clang/21/include/__stdarg___gnuc_va_list.h"
typedef __builtin_va_list __gnuc_va_list;
#line 48 "/usr/lib/clang/21/include/stdarg.h"
#line 50 "/usr/lib/clang/21/include/stdarg.h"

#line 1 "/usr/lib/clang/21/include/__stdarg_va_list.h"









#line 12 "/usr/lib/clang/21/include/__stdarg_va_list.h"
typedef __builtin_va_list va_list;
#line 53 "/usr/lib/clang/21/include/stdarg.h"
#line 55 "/usr/lib/clang/21/include/stdarg.h"

#line 1 "/usr/lib/clang/21/include/__stdarg_va_arg.h"









#line 11 "/usr/lib/clang/21/include/__stdarg_va_arg.h"

#line 16 "/usr/lib/clang/21/include/__stdarg_va_arg.h"

#line 21 "/usr/lib/clang/21/include/__stdarg_va_arg.h"
#line 58 "/usr/lib/clang/21/include/stdarg.h"
#line 60 "/usr/lib/clang/21/include/stdarg.h"

#line 1 "/usr/lib/clang/21/include/__stdarg___va_copy.h"








#line 63 "/usr/lib/clang/21/include/stdarg.h"
#line 65 "/usr/lib/clang/21/include/stdarg.h"

#line 1 "/usr/lib/clang/21/include/__stdarg_va_copy.h"








#line 68 "/usr/lib/clang/21/include/stdarg.h"
#line 70 "/usr/lib/clang/21/include/stdarg.h"
#line 14 "main.c"
#line 1 "/usr/lib/clang/21/include/stdbool.h"









#line 12 "/usr/lib/clang/21/include/stdbool.h"

#line 14 "/usr/lib/clang/21/include/stdbool.h"

#line 18 "/usr/lib/clang/21/include/stdbool.h"

#line 37 "/usr/lib/clang/21/include/stdbool.h"
#line 15 "main.c"
#line 1 "/usr/lib/clang/21/include/stddef.h"





















#line 37 "/usr/lib/clang/21/include/stddef.h"

#line 41 "/usr/lib/clang/21/include/stddef.h"


#line 48 "/usr/lib/clang/21/include/stddef.h"















#line 75 "/usr/lib/clang/21/include/stddef.h"



#line 1 "/usr/lib/clang/21/include/__stddef_header_macro.h"








#line 79 "/usr/lib/clang/21/include/stddef.h"
#line 80 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_ptrdiff_t.h"













#line 16 "/usr/lib/clang/21/include/__stddef_ptrdiff_t.h"

typedef long ptrdiff_t;
#line 83 "/usr/lib/clang/21/include/stddef.h"
#line 85 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_size_t.h"












#line 88 "/usr/lib/clang/21/include/stddef.h"
#line 90 "/usr/lib/clang/21/include/stddef.h"

#line 95 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_wchar_t.h"









#line 11 "/usr/lib/clang/21/include/__stddef_wchar_t.h"





#line 18 "/usr/lib/clang/21/include/__stddef_wchar_t.h"

#line 22 "/usr/lib/clang/21/include/__stddef_wchar_t.h"

typedef int wchar_t;

#line 26 "/usr/lib/clang/21/include/__stddef_wchar_t.h"
#line 98 "/usr/lib/clang/21/include/stddef.h"
#line 100 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_null.h"









#line 11 "/usr/lib/clang/21/include/__stddef_null.h"






#line 18 "/usr/lib/clang/21/include/__stddef_null.h"

#line 28 "/usr/lib/clang/21/include/__stddef_null.h"
#line 103 "/usr/lib/clang/21/include/stddef.h"
#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_max_align_t.h"









#line 12 "/usr/lib/clang/21/include/__stddef_max_align_t.h"

#line 18 "/usr/lib/clang/21/include/__stddef_max_align_t.h"

typedef struct {
  long long __clang_max_align_nonce1
      __attribute__((__aligned__(__alignof__(long long))));
  long double __clang_max_align_nonce2
      __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
#line 26 "/usr/lib/clang/21/include/__stddef_max_align_t.h"
#line 118 "/usr/lib/clang/21/include/stddef.h"
#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_offsetof.h"












#line 123 "/usr/lib/clang/21/include/stddef.h"
#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 16 "main.c"
#line 1 "/usr/include/stdint.h"




















#line 17 "main.c"
#line 1 "/usr/include/stdio.h"























#line 26 "/usr/include/stdio.h"

#line 1 "/usr/include/bits/libc-header-start.h"


























#line 30 "/usr/include/bits/libc-header-start.h"

#line 32 "/usr/include/bits/libc-header-start.h"

#line 1 "/usr/include/features.h"
















#line 34 "/usr/include/bits/libc-header-start.h"



#line 43 "/usr/include/bits/libc-header-start.h"























#line 84 "/usr/include/bits/libc-header-start.h"





#line 101 "/usr/include/bits/libc-header-start.h"


#line 29 "/usr/include/stdio.h"



#line 1 "/usr/lib/clang/21/include/stddef.h"





















#line 37 "/usr/lib/clang/21/include/stddef.h"

#line 80 "/usr/lib/clang/21/include/stddef.h"

#line 85 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_size_t.h"












#line 88 "/usr/lib/clang/21/include/stddef.h"
#line 90 "/usr/lib/clang/21/include/stddef.h"

#line 95 "/usr/lib/clang/21/include/stddef.h"

#line 100 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_null.h"









#line 11 "/usr/lib/clang/21/include/__stddef_null.h"






#line 18 "/usr/lib/clang/21/include/__stddef_null.h"

#line 28 "/usr/lib/clang/21/include/__stddef_null.h"
#line 103 "/usr/lib/clang/21/include/stddef.h"
#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 35 "/usr/include/stdio.h"

#line 1 "/usr/lib/clang/21/include/stdarg.h"





















#line 45 "/usr/lib/clang/21/include/stdarg.h"

#line 1 "/usr/lib/clang/21/include/__stdarg___gnuc_va_list.h"








#line 48 "/usr/lib/clang/21/include/stdarg.h"
#line 50 "/usr/lib/clang/21/include/stdarg.h"

#line 55 "/usr/lib/clang/21/include/stdarg.h"

#line 60 "/usr/lib/clang/21/include/stdarg.h"

#line 65 "/usr/lib/clang/21/include/stdarg.h"

#line 70 "/usr/lib/clang/21/include/stdarg.h"
#line 38 "/usr/include/stdio.h"

#line 1 "/usr/include/bits/types.h"





















#line 40 "/usr/include/stdio.h"
#line 1 "/usr/include/bits/types/__fpos_t.h"
#line 3 "/usr/include/bits/types/__fpos_t.h"

#line 1 "/usr/include/bits/types.h"





















#line 5 "/usr/include/bits/types/__fpos_t.h"
#line 1 "/usr/include/bits/types/__mbstate_t.h"
#line 3 "/usr/include/bits/types/__mbstate_t.h"





#line 11 "/usr/include/bits/types/__mbstate_t.h"


typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;		
} __mbstate_t;
#line 6 "/usr/include/bits/types/__fpos_t.h"




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
#line 41 "/usr/include/stdio.h"
#line 1 "/usr/include/bits/types/__fpos64_t.h"
#line 3 "/usr/include/bits/types/__fpos64_t.h"

#line 1 "/usr/include/bits/types.h"





















#line 5 "/usr/include/bits/types/__fpos64_t.h"
#line 1 "/usr/include/bits/types/__mbstate_t.h"
#line 6 "/usr/include/bits/types/__fpos64_t.h"




typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
#line 42 "/usr/include/stdio.h"
#line 1 "/usr/include/bits/types/__FILE.h"
#line 3 "/usr/include/bits/types/__FILE.h"

struct _IO_FILE;
typedef struct _IO_FILE __FILE;
#line 43 "/usr/include/stdio.h"
#line 1 "/usr/include/bits/types/FILE.h"
#line 3 "/usr/include/bits/types/FILE.h"

struct _IO_FILE;


typedef struct _IO_FILE FILE;
#line 44 "/usr/include/stdio.h"
#line 1 "/usr/include/bits/types/struct_FILE.h"


















#line 21 "/usr/include/bits/types/struct_FILE.h"





#line 29 "/usr/include/bits/types/struct_FILE.h"

#line 33 "/usr/include/bits/types/struct_FILE.h"

#line 1 "/usr/include/bits/types.h"





















#line 35 "/usr/include/bits/types/struct_FILE.h"
#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 36 "/usr/include/bits/types/struct_FILE.h"

struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;



#line 45 "/usr/include/bits/types/struct_FILE.h"
typedef void _IO_lock_t;
#line 47 "/usr/include/bits/types/struct_FILE.h"




struct _IO_FILE
{
  int _flags;		

  
  char *_IO_read_ptr;	
  char *_IO_read_end;	
  char *_IO_read_base;	
  char *_IO_write_base;	
  char *_IO_write_ptr;	
  char *_IO_write_end;	
  char *_IO_buf_base;	
  char *_IO_buf_end;	

  
  char *_IO_save_base; 
  char *_IO_backup_base;  
  char *_IO_save_end; 

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2:24;
  
  char _short_backupbuf[1];
  __off_t _old_offset; 

  
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;
#line 93 "/usr/include/bits/types/struct_FILE.h"
  __off64_t _offset;
  
  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  struct _IO_FILE **_prevchain;
  int _mode;
#line 102 "/usr/include/bits/types/struct_FILE.h"
  int _unused3;
#line 104 "/usr/include/bits/types/struct_FILE.h"
  __uint64_t _total_written;
#line 108 "/usr/include/bits/types/struct_FILE.h"
  
  char _unused2[12 * sizeof (int) - 5 * sizeof (void *)];
};


#line 114 "/usr/include/bits/types/struct_FILE.h"

#line 116 "/usr/include/bits/types/struct_FILE.h"

#line 119 "/usr/include/bits/types/struct_FILE.h"

#line 122 "/usr/include/bits/types/struct_FILE.h"

#line 124 "/usr/include/bits/types/struct_FILE.h"

#line 45 "/usr/include/stdio.h"

#line 1 "/usr/include/bits/types/cookie_io_functions_t.h"

















#line 20 "/usr/include/bits/types/cookie_io_functions_t.h"

#line 1 "/usr/include/bits/types.h"





















#line 22 "/usr/include/bits/types/cookie_io_functions_t.h"





typedef __ssize_t cookie_read_function_t (void *__cookie, char *__buf,
                                          size_t __nbytes);







typedef __ssize_t cookie_write_function_t (void *__cookie, const char *__buf,
                                           size_t __nbytes);







typedef int cookie_seek_function_t (void *__cookie, __off64_t *__pos, int __w);


typedef int cookie_close_function_t (void *__cookie);






typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read;		
  cookie_write_function_t *write;	
  cookie_seek_function_t *seek;		
  cookie_close_function_t *close;	
} cookie_io_functions_t;
#line 48 "/usr/include/stdio.h"
#line 49 "/usr/include/stdio.h"

#line 53 "/usr/include/stdio.h"
typedef __gnuc_va_list va_list;
#line 60 "/usr/include/stdio.h"

#line 75 "/usr/include/stdio.h"

#line 82 "/usr/include/stdio.h"


#line 85 "/usr/include/stdio.h"
typedef __fpos_t fpos_t;
#line 90 "/usr/include/stdio.h"
typedef __fpos64_t fpos64_t;
#line 92 "/usr/include/stdio.h"


#line 97 "/usr/include/stdio.h"



#line 101 "/usr/include/stdio.h"




#line 106 "/usr/include/stdio.h"




#line 117 "/usr/include/stdio.h"


#line 120 "/usr/include/stdio.h"

#line 123 "/usr/include/stdio.h"

#line 126 "/usr/include/stdio.h"



#line 1 "/usr/include/bits/stdio_lim.h"


















#line 21 "/usr/include/bits/stdio_lim.h"

#line 25 "/usr/include/bits/stdio_lim.h"

#line 27 "/usr/include/bits/stdio_lim.h"
#line 130 "/usr/include/stdio.h"

#line 137 "/usr/include/stdio.h"

#line 140 "/usr/include/stdio.h"


#line 143 "/usr/include/stdio.h"

#line 146 "/usr/include/stdio.h"



extern FILE *stdin;		
extern FILE *stdout;		
extern FILE *stderr;		

#line 156 "/usr/include/stdio.h"


extern int remove (const char *__filename) ;

extern int rename (const char *__old, const char *__new) ;

#line 163 "/usr/include/stdio.h"

extern int renameat (int __oldfd, const char *__old, int __newfd,
		     const char *__new) ;
#line 167 "/usr/include/stdio.h"

#line 169 "/usr/include/stdio.h"

#line 176 "/usr/include/stdio.h"



extern int renameat2 (int __oldfd, const char *__old, int __newfd,
		      const char *__new, unsigned int __flags) ;
#line 182 "/usr/include/stdio.h"





extern int fclose (FILE *__stream) ;

#line 191 "/usr/include/stdio.h"





#line 197 "/usr/include/stdio.h"
extern FILE *tmpfile (void)
  __attribute__ ((__malloc__))  ;
#line 207 "/usr/include/stdio.h"

#line 209 "/usr/include/stdio.h"
extern FILE *tmpfile64 (void)
   __attribute__ ((__malloc__))  ;
#line 212 "/usr/include/stdio.h"


extern char *tmpnam (char[20])  ;

#line 217 "/usr/include/stdio.h"


extern char *tmpnam_r (char __s[20])  ;
#line 221 "/usr/include/stdio.h"


#line 224 "/usr/include/stdio.h"







extern char *tempnam (const char *__dir, const char *__pfx)
    __attribute__ ((__malloc__))  ;
#line 234 "/usr/include/stdio.h"





extern int fflush (FILE *__stream);

#line 242 "/usr/include/stdio.h"






extern int fflush_unlocked (FILE *__stream);
#line 250 "/usr/include/stdio.h"

#line 252 "/usr/include/stdio.h"






extern int fcloseall (void);
#line 260 "/usr/include/stdio.h"


#line 263 "/usr/include/stdio.h"




extern FILE *fopen (const char *__restrict __filename,
		    const char *__restrict __modes)
  __attribute__ ((__malloc__))  ;




extern FILE *freopen (const char *__restrict __filename,
		      const char *__restrict __modes,
		      FILE *__restrict __stream)  ;
#line 292 "/usr/include/stdio.h"
extern FILE *fopen64 (const char *__restrict __filename,
		      const char *__restrict __modes)
  __attribute__ ((__malloc__))  ;
extern FILE *freopen64 (const char *__restrict __filename,
			const char *__restrict __modes,
			FILE *__restrict __stream)  ;
#line 299 "/usr/include/stdio.h"

#line 301 "/usr/include/stdio.h"

extern FILE *fdopen (int __fd, const char *__modes) 
  __attribute__ ((__malloc__))  ;
#line 305 "/usr/include/stdio.h"

#line 307 "/usr/include/stdio.h"


extern FILE *fopencookie (void *__restrict __magic_cookie,
			  const char *__restrict __modes,
			  cookie_io_functions_t __io_funcs) 
  __attribute__ ((__malloc__))  ;
#line 314 "/usr/include/stdio.h"

#line 316 "/usr/include/stdio.h"

extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
   __attribute__ ((__malloc__))  ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) 
  __attribute__ ((__malloc__))  ;

#line 334 "/usr/include/stdio.h"



extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) 
  ;



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
		    int __modes, size_t __n)  ;

#line 346 "/usr/include/stdio.h"


extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
		       size_t __size)  ;


extern void setlinebuf (FILE *__stream)  ;
#line 354 "/usr/include/stdio.h"






extern int fprintf (FILE *__restrict __stream,
		    const char *__restrict __format, ...) ;




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
		    const char *__restrict __format, ...) ;





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
		     __gnuc_va_list __arg) ;




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
		     __gnuc_va_list __arg) ;

#line 387 "/usr/include/stdio.h"

extern int snprintf (char *__restrict __s, size_t __maxlen,
		     const char *__restrict __format, ...)
      __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
		      const char *__restrict __format, __gnuc_va_list __arg)
      __attribute__ ((__format__ (__printf__, 3, 0)));
#line 396 "/usr/include/stdio.h"

#line 398 "/usr/include/stdio.h"


extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
		      __gnuc_va_list __arg)
      __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
		       const char *__restrict __fmt, ...)
      __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
		     const char *__restrict __fmt, ...)
      __attribute__ ((__format__ (__printf__, 2, 3))) ;
#line 410 "/usr/include/stdio.h"

#line 412 "/usr/include/stdio.h"

extern int vdprintf (int __fd, const char *__restrict __fmt,
		     __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
#line 419 "/usr/include/stdio.h"






extern int fscanf (FILE *__restrict __stream,
		   const char *__restrict __format, ...)  ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
		   const char *__restrict __format, ...) ;





#line 1 "/usr/include/bits/floatn.h"

















#line 441 "/usr/include/stdio.h"
#line 453 "/usr/include/stdio.h"
extern int __isoc23_fscanf (FILE *__restrict __stream,
			    const char *__restrict __format, ...) 
  ;
extern int __isoc23_scanf (const char *__restrict __format, ...) ;
extern int __isoc23_sscanf (const char *__restrict __s,
			    const char *__restrict __format, ...) ;
#line 486 "/usr/include/stdio.h"

#line 488 "/usr/include/stdio.h"




extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
		    __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0)))  ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
		    const char *__restrict __format, __gnuc_va_list __arg)
      __attribute__ ((__format__ (__scanf__, 2, 0)));


#line 526 "/usr/include/stdio.h"
extern int __isoc23_vfscanf (FILE *__restrict __s,
			     const char *__restrict __format,
			     __gnuc_va_list __arg)  ;
extern int __isoc23_vscanf (const char *__restrict __format,
			    __gnuc_va_list __arg) ;
extern int __isoc23_vsscanf (const char *__restrict __s,
			     const char *__restrict __format,
			     __gnuc_va_list __arg) ;
#line 569 "/usr/include/stdio.h"






extern int fgetc (FILE *__stream) ;
extern int getc (FILE *__stream) ;





extern int getchar (void);

#line 585 "/usr/include/stdio.h"




extern int getc_unlocked (FILE *__stream) ;
extern int getchar_unlocked (void);
#line 592 "/usr/include/stdio.h"

#line 594 "/usr/include/stdio.h"






extern int fgetc_unlocked (FILE *__stream) ;
#line 602 "/usr/include/stdio.h"






extern int fputc (int __c, FILE *__stream) ;
extern int putc (int __c, FILE *__stream) ;





extern int putchar (int __c);

#line 618 "/usr/include/stdio.h"






extern int fputc_unlocked (int __c, FILE *__stream) ;
#line 626 "/usr/include/stdio.h"

#line 628 "/usr/include/stdio.h"




extern int putc_unlocked (int __c, FILE *__stream) ;
extern int putchar_unlocked (int __c);
#line 635 "/usr/include/stdio.h"


#line 638 "/usr/include/stdio.h"

extern int getw (FILE *__stream) ;


extern int putw (int __w, FILE *__stream) ;
#line 644 "/usr/include/stdio.h"






extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
       ;

#line 665 "/usr/include/stdio.h"

#line 667 "/usr/include/stdio.h"






extern char *fgets_unlocked (char *__restrict __s, int __n,
			     FILE *__restrict __stream) 
     ;
#line 677 "/usr/include/stdio.h"


#line 680 "/usr/include/stdio.h"





extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream)  ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream)  ;


extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream)  ;
#line 697 "/usr/include/stdio.h"






extern int fputs (const char *__restrict __s, FILE *__restrict __stream)
  ;





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream) ;






extern size_t fread (void *__restrict __ptr, size_t __size,
		     size_t __n, FILE *__restrict __stream) 
  ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
		      size_t __n, FILE *__restrict __s) ;

#line 735 "/usr/include/stdio.h"






extern int fputs_unlocked (const char *__restrict __s,
			   FILE *__restrict __stream) ;
#line 744 "/usr/include/stdio.h"

#line 746 "/usr/include/stdio.h"






extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
			      size_t __n, FILE *__restrict __stream) 
  ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
			       size_t __n, FILE *__restrict __stream)
  ;
#line 759 "/usr/include/stdio.h"






extern int fseek (FILE *__stream, long int __off, int __whence)
  ;




extern long int ftell (FILE *__stream)  ;




extern void rewind (FILE *__stream) ;






#line 785 "/usr/include/stdio.h"




extern int fseeko (FILE *__stream, __off_t __off, int __whence)
  ;




extern __off_t ftello (FILE *__stream)  ;
#line 809 "/usr/include/stdio.h"

#line 811 "/usr/include/stdio.h"




extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos)
  ;




extern int fsetpos (FILE *__stream, const fpos_t *__pos) ;
#line 835 "/usr/include/stdio.h"

#line 837 "/usr/include/stdio.h"
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence)
  ;
extern __off64_t ftello64 (FILE *__stream)  ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos)
  ;
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos) ;
#line 844 "/usr/include/stdio.h"


extern void clearerr (FILE *__stream)  ;

extern int feof (FILE *__stream)   ;

extern int ferror (FILE *__stream)   ;

#line 853 "/usr/include/stdio.h"

extern void clearerr_unlocked (FILE *__stream)  ;
extern int feof_unlocked (FILE *__stream)   ;
extern int ferror_unlocked (FILE *__stream)   ;
#line 858 "/usr/include/stdio.h"






extern void perror (const char *__s) ;


#line 868 "/usr/include/stdio.h"

extern int fileno (FILE *__stream)   ;
#line 871 "/usr/include/stdio.h"

#line 873 "/usr/include/stdio.h"

extern int fileno_unlocked (FILE *__stream)   ;
#line 876 "/usr/include/stdio.h"


#line 879 "/usr/include/stdio.h"




extern int pclose (FILE *__stream) ;





extern FILE *popen (const char *__command, const char *__modes)
  __attribute__ ((__malloc__))  ;

#line 893 "/usr/include/stdio.h"


#line 896 "/usr/include/stdio.h"

extern char *ctermid (char *__s) 
  ;
#line 900 "/usr/include/stdio.h"


#line 903 "/usr/include/stdio.h"

extern char *cuserid (char *__s)
  ;
#line 907 "/usr/include/stdio.h"


#line 910 "/usr/include/stdio.h"
struct obstack;			


extern int obstack_printf (struct obstack *__restrict __obstack,
			   const char *__restrict __format, ...)
      __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
			    const char *__restrict __format,
			    __gnuc_va_list __args)
      __attribute__ ((__format__ (__printf__, 2, 0)));
#line 921 "/usr/include/stdio.h"


#line 924 "/usr/include/stdio.h"



extern void flockfile (FILE *__stream)  ;



extern int ftrylockfile (FILE *__stream)   ;


extern void funlockfile (FILE *__stream)  ;
#line 936 "/usr/include/stdio.h"

#line 942 "/usr/include/stdio.h"



extern int __uflow (FILE *);
extern int __overflow (FILE *, int);

#line 952 "/usr/include/stdio.h"



#line 958 "/usr/include/stdio.h"



#line 968 "/usr/include/stdio.h"


#line 18 "main.c"
#line 1 "/usr/include/stdlib.h"






















#line 24 "/usr/include/stdlib.h"

#line 1 "/usr/include/bits/libc-header-start.h"


























#line 30 "/usr/include/bits/libc-header-start.h"

#line 32 "/usr/include/bits/libc-header-start.h"

#line 1 "/usr/include/features.h"
















#line 34 "/usr/include/bits/libc-header-start.h"



#line 43 "/usr/include/bits/libc-header-start.h"























#line 84 "/usr/include/bits/libc-header-start.h"





#line 101 "/usr/include/bits/libc-header-start.h"


#line 27 "/usr/include/stdlib.h"


#line 1 "/usr/lib/clang/21/include/stddef.h"





















#line 37 "/usr/lib/clang/21/include/stddef.h"

#line 80 "/usr/lib/clang/21/include/stddef.h"

#line 85 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_size_t.h"












#line 88 "/usr/lib/clang/21/include/stddef.h"
#line 90 "/usr/lib/clang/21/include/stddef.h"

#line 95 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_wchar_t.h"









#line 11 "/usr/lib/clang/21/include/__stddef_wchar_t.h"





#line 26 "/usr/lib/clang/21/include/__stddef_wchar_t.h"
#line 98 "/usr/lib/clang/21/include/stddef.h"
#line 100 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_null.h"









#line 11 "/usr/lib/clang/21/include/__stddef_null.h"






#line 18 "/usr/lib/clang/21/include/__stddef_null.h"

#line 28 "/usr/lib/clang/21/include/__stddef_null.h"
#line 103 "/usr/lib/clang/21/include/stddef.h"
#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 33 "/usr/include/stdlib.h"



#line 37 "/usr/include/stdlib.h"

#line 39 "/usr/include/stdlib.h"

#line 1 "/usr/include/bits/waitflags.h"


















#line 22 "/usr/include/bits/waitflags.h"



#line 27 "/usr/include/bits/waitflags.h"


#line 35 "/usr/include/bits/waitflags.h"
#line 41 "/usr/include/stdlib.h"
#line 1 "/usr/include/bits/waitstatus.h"


















#line 22 "/usr/include/bits/waitstatus.h"






#line 29 "/usr/include/bits/waitstatus.h"


#line 32 "/usr/include/bits/waitstatus.h"


#line 35 "/usr/include/bits/waitstatus.h"


#line 38 "/usr/include/bits/waitstatus.h"


#line 41 "/usr/include/bits/waitstatus.h"


#line 44 "/usr/include/bits/waitstatus.h"



#line 50 "/usr/include/bits/waitstatus.h"


#line 53 "/usr/include/bits/waitstatus.h"

#line 42 "/usr/include/stdlib.h"


#line 54 "/usr/include/stdlib.h"


#line 1 "/usr/include/bits/floatn.h"

















#line 57 "/usr/include/stdlib.h"


typedef struct
  {
    int quot;			
    int rem;			
  } div_t;


#line 67 "/usr/include/stdlib.h"
typedef struct
  {
    long int quot;		
    long int rem;		
  } ldiv_t;
#line 74 "/usr/include/stdlib.h"

#line 76 "/usr/include/stdlib.h"

typedef struct
  {
    long long int quot;		
    long long int rem;		
  } lldiv_t;
#line 84 "/usr/include/stdlib.h"



#line 88 "/usr/include/stdlib.h"




#line 94 "/usr/include/stdlib.h"



#line 98 "/usr/include/stdlib.h"
extern size_t __ctype_get_mb_cur_max (void)  ;



extern double atof (const char *__nptr)
      __attribute__ ((__pure__))  ;

extern int atoi (const char *__nptr)
      __attribute__ ((__pure__))  ;

extern long int atol (const char *__nptr)
      __attribute__ ((__pure__))  ;

#line 112 "/usr/include/stdlib.h"

extern long long int atoll (const char *__nptr)
      __attribute__ ((__pure__))  ;
#line 116 "/usr/include/stdlib.h"


extern double strtod (const char *__restrict __nptr,
		      char **__restrict __endptr)
      ;

#line 123 "/usr/include/stdlib.h"

extern float strtof (const char *__restrict __nptr,
		     char **__restrict __endptr)  ;

extern long double strtold (const char *__restrict __nptr,
			    char **__restrict __endptr)
      ;
#line 131 "/usr/include/stdlib.h"



#line 139 "/usr/include/stdlib.h"

#line 141 "/usr/include/stdlib.h"
extern _Float32 strtof32 (const char *__restrict __nptr,
			  char **__restrict __endptr)
      ;
#line 145 "/usr/include/stdlib.h"

#line 147 "/usr/include/stdlib.h"
extern _Float64 strtof64 (const char *__restrict __nptr,
			  char **__restrict __endptr)
      ;
#line 151 "/usr/include/stdlib.h"

#line 157 "/usr/include/stdlib.h"

#line 159 "/usr/include/stdlib.h"
extern _Float32x strtof32x (const char *__restrict __nptr,
			    char **__restrict __endptr)
      ;
#line 163 "/usr/include/stdlib.h"

#line 165 "/usr/include/stdlib.h"
extern _Float64x strtof64x (const char *__restrict __nptr,
			    char **__restrict __endptr)
      ;
#line 169 "/usr/include/stdlib.h"

#line 175 "/usr/include/stdlib.h"


extern long int strtol (const char *__restrict __nptr,
			char **__restrict __endptr, int __base)
      ;

extern unsigned long int strtoul (const char *__restrict __nptr,
				  char **__restrict __endptr, int __base)
      ;

#line 186 "/usr/include/stdlib.h"


extern long long int strtoq (const char *__restrict __nptr,
			     char **__restrict __endptr, int __base)
      ;


extern unsigned long long int strtouq (const char *__restrict __nptr,
				       char **__restrict __endptr, int __base)
      ;
#line 197 "/usr/include/stdlib.h"

#line 199 "/usr/include/stdlib.h"


extern long long int strtoll (const char *__restrict __nptr,
			      char **__restrict __endptr, int __base)
      ;


extern unsigned long long int strtoull (const char *__restrict __nptr,
					char **__restrict __endptr, int __base)
      ;
#line 210 "/usr/include/stdlib.h"



#line 249 "/usr/include/stdlib.h"
extern long int __isoc23_strtol (const char *__restrict __nptr,
				 char **__restrict __endptr, int __base)
      ;
extern unsigned long int __isoc23_strtoul (const char *__restrict __nptr,
					   char **__restrict __endptr,
					   int __base)
      ;

extern long long int __isoc23_strtoll (const char *__restrict __nptr,
				       char **__restrict __endptr, int __base)
      ;

extern unsigned long long int __isoc23_strtoull (const char *__restrict __nptr,
						 char **__restrict __endptr,
						 int __base)
      ;
#line 275 "/usr/include/stdlib.h"


#line 278 "/usr/include/stdlib.h"
extern int strfromd (char *__dest, size_t __size, const char *__format,
		     double __f)
      ;

extern int strfromf (char *__dest, size_t __size, const char *__format,
		     float __f)
      ;

extern int strfroml (char *__dest, size_t __size, const char *__format,
		     long double __f)
      ;
#line 290 "/usr/include/stdlib.h"

#line 296 "/usr/include/stdlib.h"

#line 298 "/usr/include/stdlib.h"
extern int strfromf32 (char *__dest, size_t __size, const char * __format,
		       _Float32 __f)
      ;
#line 302 "/usr/include/stdlib.h"

#line 304 "/usr/include/stdlib.h"
extern int strfromf64 (char *__dest, size_t __size, const char * __format,
		       _Float64 __f)
      ;
#line 308 "/usr/include/stdlib.h"

#line 314 "/usr/include/stdlib.h"

#line 316 "/usr/include/stdlib.h"
extern int strfromf32x (char *__dest, size_t __size, const char * __format,
			_Float32x __f)
      ;
#line 320 "/usr/include/stdlib.h"

#line 322 "/usr/include/stdlib.h"
extern int strfromf64x (char *__dest, size_t __size, const char * __format,
			_Float64x __f)
      ;
#line 326 "/usr/include/stdlib.h"

#line 332 "/usr/include/stdlib.h"


#line 335 "/usr/include/stdlib.h"



#line 1 "/usr/include/bits/types/locale_t.h"

















#line 339 "/usr/include/stdlib.h"

extern long int strtol_l (const char *__restrict __nptr,
			  char **__restrict __endptr, int __base,
			  locale_t __loc)  ;

extern unsigned long int strtoul_l (const char *__restrict __nptr,
				    char **__restrict __endptr,
				    int __base, locale_t __loc)
      ;


extern long long int strtoll_l (const char *__restrict __nptr,
				char **__restrict __endptr, int __base,
				locale_t __loc)
      ;


extern unsigned long long int strtoull_l (const char *__restrict __nptr,
					  char **__restrict __endptr,
					  int __base, locale_t __loc)
      ;



#line 391 "/usr/include/stdlib.h"
extern long int __isoc23_strtol_l (const char *__restrict __nptr,
				   char **__restrict __endptr, int __base,
				   locale_t __loc)  ;
extern unsigned long int __isoc23_strtoul_l (const char *__restrict __nptr,
					     char **__restrict __endptr,
					     int __base, locale_t __loc)
      ;

extern long long int __isoc23_strtoll_l (const char *__restrict __nptr,
					 char **__restrict __endptr,
					 int __base, locale_t __loc)
      ;

extern unsigned long long int __isoc23_strtoull_l (const char *__restrict __nptr,
						   char **__restrict __endptr,
						   int __base, locale_t __loc)
      ;
#line 414 "/usr/include/stdlib.h"

extern double strtod_l (const char *__restrict __nptr,
			char **__restrict __endptr, locale_t __loc)
      ;

extern float strtof_l (const char *__restrict __nptr,
		       char **__restrict __endptr, locale_t __loc)
      ;

extern long double strtold_l (const char *__restrict __nptr,
			      char **__restrict __endptr,
			      locale_t __loc)
      ;

#line 434 "/usr/include/stdlib.h"

#line 436 "/usr/include/stdlib.h"
extern _Float32 strtof32_l (const char *__restrict __nptr,
			    char **__restrict __endptr,
			    locale_t __loc)
      ;
#line 441 "/usr/include/stdlib.h"

#line 443 "/usr/include/stdlib.h"
extern _Float64 strtof64_l (const char *__restrict __nptr,
			    char **__restrict __endptr,
			    locale_t __loc)
      ;
#line 448 "/usr/include/stdlib.h"

#line 455 "/usr/include/stdlib.h"

#line 457 "/usr/include/stdlib.h"
extern _Float32x strtof32x_l (const char *__restrict __nptr,
			      char **__restrict __endptr,
			      locale_t __loc)
      ;
#line 462 "/usr/include/stdlib.h"

#line 464 "/usr/include/stdlib.h"
extern _Float64x strtof64x_l (const char *__restrict __nptr,
			      char **__restrict __endptr,
			      locale_t __loc)
      ;
#line 469 "/usr/include/stdlib.h"

#line 477 "/usr/include/stdlib.h"


#line 499 "/usr/include/stdlib.h"


#line 502 "/usr/include/stdlib.h"



extern char *l64a (long int __n)  ;


extern long int a64l (const char *__s)
      __attribute__ ((__pure__))  ;

#line 512 "/usr/include/stdlib.h"

#line 1 "/usr/include/sys/types.h"





















#line 24 "/usr/include/sys/types.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/sys/types.h"



#line 1 "/usr/include/bits/types.h"





















#line 30 "/usr/include/sys/types.h"

#line 33 "/usr/include/sys/types.h"
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
#line 42 "/usr/include/sys/types.h"
typedef __loff_t loff_t;
#line 44 "/usr/include/sys/types.h"

#line 47 "/usr/include/sys/types.h"
typedef __ino_t ino_t;
#line 54 "/usr/include/sys/types.h"
typedef __ino64_t ino64_t;
#line 57 "/usr/include/sys/types.h"

#line 59 "/usr/include/sys/types.h"
typedef __dev_t dev_t;
#line 62 "/usr/include/sys/types.h"

#line 67 "/usr/include/sys/types.h"

#line 69 "/usr/include/sys/types.h"
typedef __mode_t mode_t;
#line 72 "/usr/include/sys/types.h"

#line 74 "/usr/include/sys/types.h"
typedef __nlink_t nlink_t;
#line 77 "/usr/include/sys/types.h"

#line 82 "/usr/include/sys/types.h"

#line 95 "/usr/include/sys/types.h"

#line 100 "/usr/include/sys/types.h"

#line 102 "/usr/include/sys/types.h"
typedef __id_t id_t;
#line 105 "/usr/include/sys/types.h"

#line 110 "/usr/include/sys/types.h"

#line 113 "/usr/include/sys/types.h"
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
#line 118 "/usr/include/sys/types.h"

#line 120 "/usr/include/sys/types.h"
typedef __key_t key_t;
#line 123 "/usr/include/sys/types.h"

#line 1 "/usr/include/bits/types/clock_t.h"
#line 3 "/usr/include/bits/types/clock_t.h"

#line 1 "/usr/include/bits/types.h"





















#line 5 "/usr/include/bits/types/clock_t.h"


typedef __clock_t clock_t;
#line 126 "/usr/include/sys/types.h"
#line 1 "/usr/include/bits/types/clockid_t.h"
#line 3 "/usr/include/bits/types/clockid_t.h"

#line 1 "/usr/include/bits/types.h"





















#line 5 "/usr/include/bits/types/clockid_t.h"


typedef __clockid_t clockid_t;
#line 128 "/usr/include/sys/types.h"
#line 1 "/usr/include/bits/types/time_t.h"
#line 129 "/usr/include/sys/types.h"
#line 1 "/usr/include/bits/types/timer_t.h"
#line 3 "/usr/include/bits/types/timer_t.h"

#line 1 "/usr/include/bits/types.h"





















#line 5 "/usr/include/bits/types/timer_t.h"


typedef __timer_t timer_t;
#line 130 "/usr/include/sys/types.h"

#line 137 "/usr/include/sys/types.h"
typedef __suseconds_t suseconds_t;
#line 141 "/usr/include/sys/types.h"

#line 1 "/usr/lib/clang/21/include/stddef.h"





















#line 37 "/usr/lib/clang/21/include/stddef.h"

#line 80 "/usr/lib/clang/21/include/stddef.h"

#line 85 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_size_t.h"












#line 88 "/usr/lib/clang/21/include/stddef.h"
#line 90 "/usr/lib/clang/21/include/stddef.h"

#line 95 "/usr/lib/clang/21/include/stddef.h"

#line 100 "/usr/lib/clang/21/include/stddef.h"

#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 144 "/usr/include/sys/types.h"

#line 146 "/usr/include/sys/types.h"

typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#line 151 "/usr/include/sys/types.h"



#line 1 "/usr/include/bits/stdint-intn.h"

















#line 155 "/usr/include/sys/types.h"


typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;

#line 163 "/usr/include/sys/types.h"
typedef int register_t __attribute__ ((__mode__ (__word__)));
#line 167 "/usr/include/sys/types.h"



#line 171 "/usr/include/sys/types.h"


#line 174 "/usr/include/sys/types.h"

#line 1 "/usr/include/endian.h"

















#line 20 "/usr/include/endian.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/endian.h"


#line 1 "/usr/include/bits/endian.h"

















#line 25 "/usr/include/endian.h"

#line 32 "/usr/include/endian.h"

#line 34 "/usr/include/endian.h"

#line 1 "/usr/include/bits/byteswap.h"


















#line 22 "/usr/include/bits/byteswap.h"

#line 25 "/usr/include/bits/byteswap.h"

#line 1 "/usr/include/features.h"
















#line 27 "/usr/include/bits/byteswap.h"
#line 1 "/usr/include/bits/types.h"





















#line 28 "/usr/include/bits/byteswap.h"


#line 31 "/usr/include/bits/byteswap.h"

static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{
#line 38 "/usr/include/bits/byteswap.h"
  return ((__uint16_t) ((((__bsx) >> 8) & 0xff) | (((__bsx) & 0xff) << 8)));
#line 40 "/usr/include/bits/byteswap.h"
}


#line 44 "/usr/include/bits/byteswap.h"

static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{
#line 51 "/usr/include/bits/byteswap.h"
  return ((((__bsx) & 0xff000000u) >> 24) | (((__bsx) & 0x00ff0000u) >> 8)	   | (((__bsx) & 0x0000ff00u) << 8) | (((__bsx) & 0x000000ffu) << 24));
#line 53 "/usr/include/bits/byteswap.h"
}


#line 57 "/usr/include/bits/byteswap.h"

static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
#line 64 "/usr/include/bits/byteswap.h"
  return ((((__bsx) & 0xff00000000000000ull) >> 56)	   | (((__bsx) & 0x00ff000000000000ull) >> 40)	   | (((__bsx) & 0x0000ff0000000000ull) >> 24)	   | (((__bsx) & 0x000000ff00000000ull) >> 8)	   | (((__bsx) & 0x00000000ff000000ull) << 8)	   | (((__bsx) & 0x0000000000ff0000ull) << 24)	   | (((__bsx) & 0x000000000000ff00ull) << 40)	   | (((__bsx) & 0x00000000000000ffull) << 56));
#line 66 "/usr/include/bits/byteswap.h"
}
#line 36 "/usr/include/endian.h"
#line 1 "/usr/include/bits/uintn-identity.h"


















#line 22 "/usr/include/bits/uintn-identity.h"

#line 25 "/usr/include/bits/uintn-identity.h"

#line 1 "/usr/include/bits/types.h"





















#line 27 "/usr/include/bits/uintn-identity.h"





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
#line 37 "/usr/include/endian.h"

#line 43 "/usr/include/endian.h"

#line 48 "/usr/include/endian.h"

#line 53 "/usr/include/endian.h"

#line 71 "/usr/include/endian.h"
#line 176 "/usr/include/sys/types.h"


#line 1 "/usr/include/sys/select.h"




















#line 23 "/usr/include/sys/select.h"

#line 1 "/usr/include/features.h"
















#line 25 "/usr/include/sys/select.h"


#line 1 "/usr/include/bits/types.h"





















#line 28 "/usr/include/sys/select.h"


#line 1 "/usr/include/bits/select.h"

















#line 21 "/usr/include/bits/select.h"



#line 31 "/usr/include/sys/select.h"


#line 1 "/usr/include/bits/types/sigset_t.h"
#line 34 "/usr/include/sys/select.h"


#line 1 "/usr/include/bits/types/time_t.h"
#line 37 "/usr/include/sys/select.h"
#line 1 "/usr/include/bits/types/struct_timeval.h"
#line 3 "/usr/include/bits/types/struct_timeval.h"

#line 1 "/usr/include/bits/types.h"





















#line 5 "/usr/include/bits/types/struct_timeval.h"



struct timeval
{
#line 14 "/usr/include/bits/types/struct_timeval.h"
  __time_t tv_sec;		
  __suseconds_t tv_usec;	
#line 17 "/usr/include/bits/types/struct_timeval.h"
};
#line 38 "/usr/include/sys/select.h"
#line 1 "/usr/include/bits/types/struct_timespec.h"
#line 40 "/usr/include/sys/select.h"
#line 41 "/usr/include/sys/select.h"

#line 46 "/usr/include/sys/select.h"



typedef long int __fd_mask;


#line 53 "/usr/include/sys/select.h"

#line 57 "/usr/include/sys/select.h"


typedef struct
  {
    

#line 64 "/usr/include/sys/select.h"
    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];
#line 70 "/usr/include/sys/select.h"
  } fd_set;


#line 74 "/usr/include/sys/select.h"

#line 76 "/usr/include/sys/select.h"

typedef __fd_mask fd_mask;


#line 82 "/usr/include/sys/select.h"



#line 89 "/usr/include/sys/select.h"












#line 102 "/usr/include/sys/select.h"
extern int select (int __nfds, fd_set *__restrict __readfds,
		   fd_set *__restrict __writefds,
		   fd_set *__restrict __exceptfds,
		   struct timeval *__restrict __timeout);
#line 118 "/usr/include/sys/select.h"

#line 120 "/usr/include/sys/select.h"






#line 127 "/usr/include/sys/select.h"
extern int pselect (int __nfds, fd_set *__restrict __readfds,
		    fd_set *__restrict __writefds,
		    fd_set *__restrict __exceptfds,
		    const struct timespec *__restrict __timeout,
		    const __sigset_t *__restrict __sigmask);
#line 146 "/usr/include/sys/select.h"



#line 152 "/usr/include/sys/select.h"


#line 179 "/usr/include/sys/types.h"
#line 180 "/usr/include/sys/types.h"


#line 183 "/usr/include/sys/types.h"
typedef __blksize_t blksize_t;
#line 186 "/usr/include/sys/types.h"


#line 190 "/usr/include/sys/types.h"
typedef __blkcnt_t blkcnt_t;	 
#line 194 "/usr/include/sys/types.h"
typedef __fsblkcnt_t fsblkcnt_t; 
#line 198 "/usr/include/sys/types.h"
typedef __fsfilcnt_t fsfilcnt_t; 
#line 215 "/usr/include/sys/types.h"

#line 217 "/usr/include/sys/types.h"
typedef __blkcnt64_t blkcnt64_t;     
typedef __fsblkcnt64_t fsblkcnt64_t; 
typedef __fsfilcnt64_t fsfilcnt64_t; 
#line 221 "/usr/include/sys/types.h"



#line 1 "/usr/include/bits/pthreadtypes.h"

















#line 226 "/usr/include/sys/types.h"
#line 227 "/usr/include/sys/types.h"


#line 515 "/usr/include/stdlib.h"






extern long int random (void) ;


extern void srandom (unsigned int __seed) ;





extern char *initstate (unsigned int __seed, char *__statebuf,
			size_t __statelen)  ;



extern char *setstate (char *__statebuf)  ;


#line 539 "/usr/include/stdlib.h"




struct random_data
  {
    int32_t *fptr;		
    int32_t *rptr;		
    int32_t *state;		
    int rand_type;		
    int rand_deg;		
    int rand_sep;		
    int32_t *end_ptr;		
  };

extern int random_r (struct random_data *__restrict __buf,
		     int32_t *__restrict __result)  ;

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
      ;

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
			size_t __statelen,
			struct random_data *__restrict __buf)
      ;

extern int setstate_r (char *__restrict __statebuf,
		       struct random_data *__restrict __buf)
      ;
#line 570 "/usr/include/stdlib.h"



extern int rand (void) ;

extern void srand (unsigned int __seed) ;

#line 578 "/usr/include/stdlib.h"

extern int rand_r (unsigned int *__seed) ;
#line 581 "/usr/include/stdlib.h"


#line 584 "/usr/include/stdlib.h"



extern double drand48 (void) ;
extern double erand48 (unsigned short int __xsubi[3])  ;


extern long int lrand48 (void) ;
extern long int nrand48 (unsigned short int __xsubi[3])
      ;


extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int __xsubi[3])
      ;


extern void srand48 (long int __seedval) ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
      ;
extern void lcong48 (unsigned short int __param[7])  ;

#line 607 "/usr/include/stdlib.h"



struct drand48_data
  {
    unsigned short int __x[3];	
    unsigned short int __old_x[3]; 
    unsigned short int __c;	
    unsigned short int __init;	
    unsigned long long int __a;	

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
		      double *__restrict __result)  ;
extern int erand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      double *__restrict __result)  ;


extern int lrand48_r (struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
      ;
extern int nrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
      ;


extern int mrand48_r (struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
      ;
extern int jrand48_r (unsigned short int __xsubi[3],
		      struct drand48_data *__restrict __buffer,
		      long int *__restrict __result)
      ;


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
      ;

extern int seed48_r (unsigned short int __seed16v[3],
		     struct drand48_data *__buffer)  ;

extern int lcong48_r (unsigned short int __param[7],
		      struct drand48_data *__buffer)
      ;


extern __uint32_t arc4random (void)
      ;


extern void arc4random_buf (void *__buf, size_t __size)
      ;



extern __uint32_t arc4random_uniform (__uint32_t __upper_bound)
      ;
#line 670 "/usr/include/stdlib.h"


extern void *malloc (size_t __size)  __attribute__ ((__malloc__))
      ;

extern void *calloc (size_t __nmemb, size_t __size)
      __attribute__ ((__malloc__))  ;






extern void *realloc (void *__ptr, size_t __size)
       ;


extern void free (void *__ptr) ;

#line 690 "/usr/include/stdlib.h"





extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
      
     
    ;


extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
      ;
#line 704 "/usr/include/stdlib.h"

#line 1 "/usr/include/alloca.h"

















#line 20 "/usr/include/alloca.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/alloca.h"

#line 1 "/usr/lib/clang/21/include/stddef.h"





















#line 37 "/usr/lib/clang/21/include/stddef.h"

#line 80 "/usr/lib/clang/21/include/stddef.h"

#line 85 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_size_t.h"












#line 88 "/usr/lib/clang/21/include/stddef.h"
#line 90 "/usr/lib/clang/21/include/stddef.h"

#line 95 "/usr/lib/clang/21/include/stddef.h"

#line 100 "/usr/lib/clang/21/include/stddef.h"

#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 25 "/usr/include/alloca.h"




#line 30 "/usr/include/alloca.h"


extern void *alloca (size_t __size) ;

#line 37 "/usr/include/alloca.h"


#line 707 "/usr/include/stdlib.h"
#line 708 "/usr/include/stdlib.h"

#line 710 "/usr/include/stdlib.h"

extern void *valloc (size_t __size)  __attribute__ ((__malloc__))
      ;
#line 714 "/usr/include/stdlib.h"

#line 716 "/usr/include/stdlib.h"

extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
       ;
#line 720 "/usr/include/stdlib.h"

#line 722 "/usr/include/stdlib.h"

extern void *aligned_alloc (size_t __alignment, size_t __size)
      __attribute__ ((__malloc__)) 
      ;
#line 727 "/usr/include/stdlib.h"


extern void abort (void)  __attribute__ ((__noreturn__)) ;



extern int atexit (void (*__func) (void))  ;

#line 736 "/usr/include/stdlib.h"

#line 741 "/usr/include/stdlib.h"
extern int at_quick_exit (void (*__func) (void))  ;
#line 744 "/usr/include/stdlib.h"

#line 746 "/usr/include/stdlib.h"


extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
      ;
#line 751 "/usr/include/stdlib.h"




extern void exit (int __status)  __attribute__ ((__noreturn__));

#line 758 "/usr/include/stdlib.h"



extern void quick_exit (int __status)  __attribute__ ((__noreturn__));
#line 763 "/usr/include/stdlib.h"

#line 765 "/usr/include/stdlib.h"


extern void _Exit (int __status)  __attribute__ ((__noreturn__));
#line 769 "/usr/include/stdlib.h"



extern char *getenv (const char *__name)   ;

#line 775 "/usr/include/stdlib.h"


extern char *secure_getenv (const char *__name)
       ;
#line 780 "/usr/include/stdlib.h"

#line 782 "/usr/include/stdlib.h"



extern int putenv (char *__string)  ;
#line 787 "/usr/include/stdlib.h"

#line 789 "/usr/include/stdlib.h"


extern int setenv (const char *__name, const char *__value, int __replace)
      ;


extern int unsetenv (const char *__name)  ;
#line 797 "/usr/include/stdlib.h"

#line 799 "/usr/include/stdlib.h"



extern int clearenv (void) ;
#line 804 "/usr/include/stdlib.h"


#line 807 "/usr/include/stdlib.h"





extern char *mktemp (char *__template)  ;
#line 814 "/usr/include/stdlib.h"

#line 816 "/usr/include/stdlib.h"








#line 825 "/usr/include/stdlib.h"
extern int mkstemp (char *__template)  ;
#line 835 "/usr/include/stdlib.h"
extern int mkstemp64 (char *__template)  ;
#line 838 "/usr/include/stdlib.h"

#line 840 "/usr/include/stdlib.h"






#line 847 "/usr/include/stdlib.h"
extern int mkstemps (char *__template, int __suffixlen)  ;
#line 857 "/usr/include/stdlib.h"
extern int mkstemps64 (char *__template, int __suffixlen)
      ;
#line 861 "/usr/include/stdlib.h"

#line 863 "/usr/include/stdlib.h"





extern char *mkdtemp (char *__template)   ;
#line 870 "/usr/include/stdlib.h"

#line 872 "/usr/include/stdlib.h"






#line 879 "/usr/include/stdlib.h"
extern int mkostemp (char *__template, int __flags)  ;
#line 889 "/usr/include/stdlib.h"
extern int mkostemp64 (char *__template, int __flags)  ;
#line 891 "/usr/include/stdlib.h"







#line 899 "/usr/include/stdlib.h"
extern int mkostemps (char *__template, int __suffixlen, int __flags)
      ;
#line 911 "/usr/include/stdlib.h"
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
      ;
#line 915 "/usr/include/stdlib.h"






extern int system (const char *__command) ;


#line 925 "/usr/include/stdlib.h"


extern char *canonicalize_file_name (const char *__name)
       __attribute__ ((__malloc__))
      ;
#line 931 "/usr/include/stdlib.h"

#line 933 "/usr/include/stdlib.h"





extern char *realpath (const char *__restrict __name,
		       char *__restrict __resolved)  ;
#line 941 "/usr/include/stdlib.h"



#line 946 "/usr/include/stdlib.h"
typedef int (*__compar_fn_t) (const void *, const void *);

#line 949 "/usr/include/stdlib.h"
typedef __compar_fn_t comparison_fn_t;
#line 953 "/usr/include/stdlib.h"
typedef int (*__compar_d_fn_t) (const void *, const void *, void *);
#line 955 "/usr/include/stdlib.h"



extern void *bsearch (const void *__key, const void *__base,
		      size_t __nmemb, size_t __size, __compar_fn_t __compar)
      ;

#line 965 "/usr/include/stdlib.h"



extern void qsort (void *__base, size_t __nmemb, size_t __size,
		   __compar_fn_t __compar) ;
#line 971 "/usr/include/stdlib.h"
extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
		     __compar_d_fn_t __compar, void *__arg)
  ;
#line 975 "/usr/include/stdlib.h"



extern int abs (int __x)  __attribute__ ((__const__)) ;
extern long int labs (long int __x)  __attribute__ ((__const__)) ;

#line 982 "/usr/include/stdlib.h"
extern long long int llabs (long long int __x)
      __attribute__ ((__const__)) ;
#line 985 "/usr/include/stdlib.h"

#line 987 "/usr/include/stdlib.h"
extern unsigned int uabs (int __x)  __attribute__ ((__const__)) ;
extern unsigned long int ulabs (long int __x)  __attribute__ ((__const__)) ;
extern unsigned long long int ullabs (long long int __x)
      __attribute__ ((__const__)) ;
#line 992 "/usr/include/stdlib.h"




extern div_t div (int __numer, int __denom)
      __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
      __attribute__ ((__const__)) ;

#line 1002 "/usr/include/stdlib.h"
extern lldiv_t lldiv (long long int __numer,
				    long long int __denom)
      __attribute__ ((__const__)) ;
#line 1006 "/usr/include/stdlib.h"


#line 1009 "/usr/include/stdlib.h"






extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign)   ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign)   ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
       ;
#line 1030 "/usr/include/stdlib.h"

#line 1032 "/usr/include/stdlib.h"

extern char *qecvt (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign)
       ;
extern char *qfcvt (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign)
       ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
       ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign, char *__restrict __buf,
		   size_t __len)  ;
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
		   int *__restrict __sign, char *__restrict __buf,
		   size_t __len)  ;

extern int qecvt_r (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign,
		    char *__restrict __buf, size_t __len)
      ;
extern int qfcvt_r (long double __value, int __ndigit,
		    int *__restrict __decpt, int *__restrict __sign,
		    char *__restrict __buf, size_t __len)
      ;
#line 1061 "/usr/include/stdlib.h"




extern int mblen (const char *__s, size_t __n) ;


extern int mbtowc (wchar_t *__restrict __pwc,
		   const char *__restrict __s, size_t __n) ;


extern int wctomb (char *__s, wchar_t __wchar) ;



extern size_t mbstowcs (wchar_t *__restrict  __pwcs,
			const char *__restrict __s, size_t __n) 
    ;

extern size_t wcstombs (char *__restrict __s,
			const wchar_t *__restrict __pwcs, size_t __n)
     
  
  ;

#line 1087 "/usr/include/stdlib.h"




extern int rpmatch (const char *__response)   ;
#line 1093 "/usr/include/stdlib.h"


#line 1096 "/usr/include/stdlib.h"






extern int getsubopt (char **__restrict __optionp,
		      char *const *__restrict __tokens,
		      char **__restrict __valuep)
       ;
#line 1107 "/usr/include/stdlib.h"




#line 1112 "/usr/include/stdlib.h"

extern int posix_openpt (int __oflag) ;
#line 1115 "/usr/include/stdlib.h"

#line 1117 "/usr/include/stdlib.h"




extern int grantpt (int __fd) ;



extern int unlockpt (int __fd) ;




extern char *ptsname (int __fd)  ;
#line 1132 "/usr/include/stdlib.h"

#line 1134 "/usr/include/stdlib.h"



extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
       ;


extern int getpt (void);
#line 1143 "/usr/include/stdlib.h"

#line 1145 "/usr/include/stdlib.h"



extern int getloadavg (double __loadavg[], int __nelem)
      ;
#line 1151 "/usr/include/stdlib.h"

#line 1157 "/usr/include/stdlib.h"

#line 1 "/usr/include/bits/stdlib-float.h"


















#line 22 "/usr/include/bits/stdlib-float.h"
#line 1159 "/usr/include/stdlib.h"


#line 1164 "/usr/include/stdlib.h"

#line 1 "/usr/include/bits/floatn.h"

















#line 1166 "/usr/include/stdlib.h"
#line 1169 "/usr/include/stdlib.h"


#line 19 "main.c"
#line 1 "/usr/include/string.h"





















#line 24 "/usr/include/string.h"

#line 1 "/usr/include/bits/libc-header-start.h"


























#line 30 "/usr/include/bits/libc-header-start.h"

#line 32 "/usr/include/bits/libc-header-start.h"

#line 1 "/usr/include/features.h"
















#line 34 "/usr/include/bits/libc-header-start.h"



#line 43 "/usr/include/bits/libc-header-start.h"























#line 84 "/usr/include/bits/libc-header-start.h"





#line 101 "/usr/include/bits/libc-header-start.h"


#line 27 "/usr/include/string.h"




#line 1 "/usr/lib/clang/21/include/stddef.h"





















#line 37 "/usr/lib/clang/21/include/stddef.h"

#line 80 "/usr/lib/clang/21/include/stddef.h"

#line 85 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_size_t.h"












#line 88 "/usr/lib/clang/21/include/stddef.h"
#line 90 "/usr/lib/clang/21/include/stddef.h"

#line 95 "/usr/lib/clang/21/include/stddef.h"

#line 100 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_null.h"









#line 11 "/usr/lib/clang/21/include/__stddef_null.h"






#line 18 "/usr/lib/clang/21/include/__stddef_null.h"

#line 28 "/usr/lib/clang/21/include/__stddef_null.h"
#line 103 "/usr/lib/clang/21/include/stddef.h"
#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 34 "/usr/include/string.h"


#line 39 "/usr/include/string.h"



extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
		     size_t __n)  ;


extern void *memmove (void *__dest, const void *__src, size_t __n)
      ;




#line 53 "/usr/include/string.h"
extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
		      int __c, size_t __n)
      ;
#line 57 "/usr/include/string.h"



extern void *memset (void *__s, int __c, size_t __n)  ;


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
      __attribute__ ((__pure__)) ;














extern int __memcmpeq (const void *__s1, const void *__s2, size_t __n)
      __attribute__ ((__pure__)) ;


#line 106 "/usr/include/string.h"
extern void *memchr (const void *__s, int __c, size_t __n)
       __attribute__ ((__pure__)) ;
#line 109 "/usr/include/string.h"

#line 111 "/usr/include/string.h"


#line 119 "/usr/include/string.h"
extern void *rawmemchr (const void *__s, int __c)
      __attribute__ ((__pure__)) ;
#line 122 "/usr/include/string.h"


#line 132 "/usr/include/string.h"
extern void *memrchr (const void *__s, int __c, size_t __n)
       __attribute__ ((__pure__)) 
      ;
#line 137 "/usr/include/string.h"



extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
      ;

extern char *strncpy (char *__restrict __dest,
		      const char *__restrict __src, size_t __n)
      ;


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
      ;

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
		      size_t __n)  ;


extern int strcmp (const char *__s1, const char *__s2)
      __attribute__ ((__pure__)) ;

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
      __attribute__ ((__pure__)) ;


extern int strcoll (const char *__s1, const char *__s2)
      __attribute__ ((__pure__)) ;

extern size_t strxfrm (char *__restrict __dest,
		       const char *__restrict __src, size_t __n)
      ;

#line 170 "/usr/include/string.h"

#line 1 "/usr/include/bits/types/locale_t.h"

















#line 172 "/usr/include/string.h"


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
      __attribute__ ((__pure__)) ;


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
			 locale_t __l)  
     ;
#line 182 "/usr/include/string.h"

#line 184 "/usr/include/string.h"

extern char *strdup (const char *__s)
      __attribute__ ((__malloc__)) ;
#line 188 "/usr/include/string.h"




#line 193 "/usr/include/string.h"
extern char *strndup (const char *__string, size_t __n)
      __attribute__ ((__malloc__)) ;
#line 196 "/usr/include/string.h"

#line 198 "/usr/include/string.h"

#line 200 "/usr/include/string.h"


#line 204 "/usr/include/string.h"


#line 229 "/usr/include/string.h"
extern char *strchr (const char *__s, int __c)
      __attribute__ ((__pure__)) ;
#line 232 "/usr/include/string.h"

#line 256 "/usr/include/string.h"
extern char *strrchr (const char *__s, int __c)
      __attribute__ ((__pure__)) ;
#line 259 "/usr/include/string.h"

#line 261 "/usr/include/string.h"


#line 269 "/usr/include/string.h"
extern char *strchrnul (const char *__s, int __c)
      __attribute__ ((__pure__)) ;
#line 273 "/usr/include/string.h"



extern size_t strcspn (const char *__s, const char *__reject)
      __attribute__ ((__pure__)) ;


extern size_t strspn (const char *__s, const char *__accept)
      __attribute__ ((__pure__)) ;

#line 306 "/usr/include/string.h"
extern char *strpbrk (const char *__s, const char *__accept)
      __attribute__ ((__pure__)) ;
#line 309 "/usr/include/string.h"

#line 333 "/usr/include/string.h"
extern char *strstr (const char *__haystack, const char *__needle)
      __attribute__ ((__pure__)) ;
#line 336 "/usr/include/string.h"



extern char *strtok (char *__restrict __s, const char *__restrict __delim)
      ;



extern char *__strtok_r (char *__restrict __s,
			 const char *__restrict __delim,
			 char **__restrict __save_ptr)
      ;
#line 349 "/usr/include/string.h"
extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
		       char **__restrict __save_ptr)
      ;
#line 353 "/usr/include/string.h"

#line 355 "/usr/include/string.h"

#line 363 "/usr/include/string.h"
extern char *strcasestr (const char *__haystack, const char *__needle)
      __attribute__ ((__pure__)) ;
#line 367 "/usr/include/string.h"

#line 369 "/usr/include/string.h"



extern void *memmem (const void *__haystack, size_t __haystacklen,
		     const void *__needle, size_t __needlelen)
      __attribute__ ((__pure__)) 
    
    ;



extern void *__mempcpy (void *__restrict __dest,
			const void *__restrict __src, size_t __n)
      ;
extern void *mempcpy (void *__restrict __dest,
		      const void *__restrict __src, size_t __n)
      ;
#line 387 "/usr/include/string.h"



extern size_t strlen (const char *__s)
      __attribute__ ((__pure__)) ;

#line 394 "/usr/include/string.h"


extern size_t strnlen (const char *__string, size_t __maxlen)
      __attribute__ ((__pure__)) ;
#line 399 "/usr/include/string.h"



extern char *strerror (int __errnum) ;
#line 404 "/usr/include/string.h"







#line 425 "/usr/include/string.h"


extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
         ;
#line 430 "/usr/include/string.h"

#line 432 "/usr/include/string.h"

extern const char *strerrordesc_np (int __err) ;

extern const char *strerrorname_np (int __err) ;
#line 438 "/usr/include/string.h"

#line 440 "/usr/include/string.h"

extern char *strerror_l (int __errnum, locale_t __l) ;
#line 443 "/usr/include/string.h"

#line 1 "/usr/include/strings.h"

















#line 20 "/usr/include/strings.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/strings.h"
#line 1 "/usr/lib/clang/21/include/stddef.h"





















#line 37 "/usr/lib/clang/21/include/stddef.h"

#line 80 "/usr/lib/clang/21/include/stddef.h"

#line 85 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_size_t.h"












#line 88 "/usr/lib/clang/21/include/stddef.h"
#line 90 "/usr/lib/clang/21/include/stddef.h"

#line 95 "/usr/lib/clang/21/include/stddef.h"

#line 100 "/usr/lib/clang/21/include/stddef.h"

#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 24 "/usr/include/strings.h"


#line 29 "/usr/include/strings.h"



#line 33 "/usr/include/strings.h"

extern int bcmp (const void *__s1, const void *__s2, size_t __n)
      __attribute__ ((__pure__)) ;


extern void bcopy (const void *__src, void *__dest, size_t __n)
   ;


extern void bzero (void *__s, size_t __n)  ;


#line 68 "/usr/include/strings.h"
extern char *index (const char *__s, int __c)
      __attribute__ ((__pure__)) ;
#line 71 "/usr/include/strings.h"


#line 96 "/usr/include/strings.h"
extern char *rindex (const char *__s, int __c)
      __attribute__ ((__pure__)) ;
#line 100 "/usr/include/strings.h"

#line 102 "/usr/include/strings.h"


extern int ffs (int __i)  __attribute__ ((__const__));
#line 106 "/usr/include/strings.h"



#line 110 "/usr/include/strings.h"
extern int ffsl (long int __l)  __attribute__ ((__const__));
extern int ffsll (long long int __ll)
      __attribute__ ((__const__));
#line 114 "/usr/include/strings.h"


extern int strcasecmp (const char *__s1, const char *__s2)
      __attribute__ ((__pure__)) ;


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
      __attribute__ ((__pure__)) ;

#line 124 "/usr/include/strings.h"

#line 1 "/usr/include/bits/types/locale_t.h"

















#line 126 "/usr/include/strings.h"


extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
      __attribute__ ((__pure__)) ;



extern int strncasecmp_l (const char *__s1, const char *__s2,
			  size_t __n, locale_t __loc)
      __attribute__ ((__pure__)) ;
#line 137 "/usr/include/strings.h"



#line 146 "/usr/include/strings.h"
#line 446 "/usr/include/string.h"



extern void explicit_bzero (void *__s, size_t __n)  
    ;



extern char *strsep (char **__restrict __stringp,
		     const char *__restrict __delim)
      ;
#line 458 "/usr/include/string.h"

#line 460 "/usr/include/string.h"

extern char *strsignal (int __sig) ;

#line 464 "/usr/include/string.h"

extern const char *sigabbrev_np (int __sig) ;


extern const char *sigdescr_np (int __sig) ;
#line 470 "/usr/include/string.h"


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
      ;
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
      ;



extern char *__stpncpy (char *__restrict __dest,
			const char *__restrict __src, size_t __n)
      ;
extern char *stpncpy (char *__restrict __dest,
		      const char *__restrict __src, size_t __n)
      ;
#line 486 "/usr/include/string.h"

#line 488 "/usr/include/string.h"

extern size_t strlcpy (char *__restrict __dest,
		       const char *__restrict __src, size_t __n)
    ;



extern size_t strlcat (char *__restrict __dest,
		       const char *__restrict __src, size_t __n)
     ;
#line 499 "/usr/include/string.h"

#line 501 "/usr/include/string.h"

extern int strverscmp (const char *__s1, const char *__s2)
      __attribute__ ((__pure__)) ;


extern char *strfry (char *__string)  ;


extern void *memfrob (void *__s, size_t __n)  
    ;

#line 513 "/usr/include/string.h"




#line 523 "/usr/include/string.h"
extern char *basename (const char *__filename)  ;
#line 527 "/usr/include/string.h"

#line 534 "/usr/include/string.h"


#line 20 "main.c"
#line 1 "/usr/include/time.h"





















#line 24 "/usr/include/time.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/time.h"

#line 1 "/usr/lib/clang/21/include/stddef.h"





















#line 37 "/usr/lib/clang/21/include/stddef.h"

#line 80 "/usr/lib/clang/21/include/stddef.h"

#line 85 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_size_t.h"












#line 88 "/usr/lib/clang/21/include/stddef.h"
#line 90 "/usr/lib/clang/21/include/stddef.h"

#line 95 "/usr/lib/clang/21/include/stddef.h"

#line 100 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_null.h"









#line 11 "/usr/lib/clang/21/include/__stddef_null.h"






#line 18 "/usr/lib/clang/21/include/__stddef_null.h"

#line 28 "/usr/lib/clang/21/include/__stddef_null.h"
#line 103 "/usr/lib/clang/21/include/stddef.h"
#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 30 "/usr/include/time.h"



#line 1 "/usr/include/bits/time.h"






















#line 25 "/usr/include/bits/time.h"

#line 1 "/usr/include/bits/types.h"





















#line 27 "/usr/include/bits/time.h"







#line 35 "/usr/include/bits/time.h"

#line 42 "/usr/include/bits/time.h"

#line 44 "/usr/include/bits/time.h"

#line 46 "/usr/include/bits/time.h"

#line 48 "/usr/include/bits/time.h"

#line 50 "/usr/include/bits/time.h"

#line 52 "/usr/include/bits/time.h"

#line 54 "/usr/include/bits/time.h"

#line 56 "/usr/include/bits/time.h"

#line 58 "/usr/include/bits/time.h"

#line 60 "/usr/include/bits/time.h"

#line 62 "/usr/include/bits/time.h"

#line 64 "/usr/include/bits/time.h"

#line 66 "/usr/include/bits/time.h"


#line 70 "/usr/include/bits/time.h"

#line 1 "/usr/include/bits/timex.h"

















#line 20 "/usr/include/bits/timex.h"

#line 1 "/usr/include/bits/types.h"





















#line 22 "/usr/include/bits/timex.h"
#line 1 "/usr/include/bits/types/struct_timeval.h"
#line 23 "/usr/include/bits/timex.h"



struct timex
{
#line 58 "/usr/include/bits/timex.h"
  unsigned int modes;		
  __syscall_slong_t offset;	
  __syscall_slong_t freq;	
  __syscall_slong_t maxerror;	
  __syscall_slong_t esterror;	
  int status;			
  __syscall_slong_t constant;	
  __syscall_slong_t precision;	
  __syscall_slong_t tolerance;	
  struct timeval time;		
  __syscall_slong_t tick;	
  __syscall_slong_t ppsfreq;	
  __syscall_slong_t jitter;	
  int shift;			
  __syscall_slong_t stabil;	
  __syscall_slong_t jitcnt;	
  __syscall_slong_t calcnt;	
  __syscall_slong_t errcnt;	
  __syscall_slong_t stbcnt;	

  int tai;			

  
  int  :32; int  :32; int  :32; int  :32;
  int  :32; int  :32; int  :32; int  :32;
  int  :32; int  :32; int  :32;
#line 85 "/usr/include/bits/timex.h"
};


#line 101 "/usr/include/bits/timex.h"


#line 114 "/usr/include/bits/timex.h"



#line 121 "/usr/include/bits/timex.h"

#line 126 "/usr/include/bits/timex.h"

#line 131 "/usr/include/bits/timex.h"

#line 136 "/usr/include/bits/timex.h"


#line 139 "/usr/include/bits/timex.h"
#line 73 "/usr/include/bits/time.h"




extern int clock_adjtime (__clockid_t __clock_id, struct timex *__utx)  ;

#line 88 "/usr/include/bits/time.h"


#line 91 "/usr/include/bits/time.h"
#line 34 "/usr/include/time.h"



#line 1 "/usr/include/bits/types/clock_t.h"
#line 38 "/usr/include/time.h"
#line 1 "/usr/include/bits/types/time_t.h"
#line 39 "/usr/include/time.h"
#line 1 "/usr/include/bits/types/struct_tm.h"
#line 3 "/usr/include/bits/types/struct_tm.h"

#line 1 "/usr/include/bits/types.h"





















#line 5 "/usr/include/bits/types/struct_tm.h"


struct tm
{
  int tm_sec;			
  int tm_min;			
  int tm_hour;			
  int tm_mday;			
  int tm_mon;			
  int tm_year;			
  int tm_wday;			
  int tm_yday;			
  int tm_isdst;			

#line 20 "/usr/include/bits/types/struct_tm.h"
  long int tm_gmtoff;		
  const char *tm_zone;		
#line 26 "/usr/include/bits/types/struct_tm.h"
};
#line 40 "/usr/include/time.h"

#line 1 "/usr/include/bits/types/struct_timespec.h"
#line 43 "/usr/include/time.h"
#line 44 "/usr/include/time.h"

#line 1 "/usr/include/bits/types/clockid_t.h"
#line 47 "/usr/include/time.h"
#line 1 "/usr/include/bits/types/timer_t.h"
#line 48 "/usr/include/time.h"
#line 1 "/usr/include/bits/types/struct_itimerspec.h"
#line 3 "/usr/include/bits/types/struct_itimerspec.h"

#line 1 "/usr/include/bits/types.h"





















#line 5 "/usr/include/bits/types/struct_itimerspec.h"
#line 1 "/usr/include/bits/types/struct_timespec.h"
#line 6 "/usr/include/bits/types/struct_itimerspec.h"


struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };
#line 49 "/usr/include/time.h"
struct sigevent;
#line 51 "/usr/include/time.h"

#line 58 "/usr/include/time.h"

#line 1 "/usr/include/bits/types/locale_t.h"

















#line 61 "/usr/include/time.h"
#line 62 "/usr/include/time.h"

#line 64 "/usr/include/time.h"

#line 67 "/usr/include/time.h"





extern clock_t clock (void) ;

#line 75 "/usr/include/time.h"

extern time_t time (time_t *__timer) ;


extern double difftime (time_t __time1, time_t __time0);


extern time_t mktime (struct tm *__tp) ;
#line 95 "/usr/include/time.h"




extern size_t strftime (char *__restrict __s, size_t __maxsize,
			const char *__restrict __format,
			const struct tm *__restrict __tp)
			 ;

#line 105 "/usr/include/time.h"


extern char *strptime (const char *__restrict __s,
		       const char *__restrict __fmt, struct tm *__tp)
     ;
#line 111 "/usr/include/time.h"

#line 113 "/usr/include/time.h"



extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
			  const char *__restrict __format,
			  const struct tm *__restrict __tp,
			  locale_t __loc) ;
#line 121 "/usr/include/time.h"

#line 123 "/usr/include/time.h"
extern char *strptime_l (const char *__restrict __s,
			 const char *__restrict __fmt, struct tm *__tp,
			 locale_t __loc) ;
#line 127 "/usr/include/time.h"


#line 130 "/usr/include/time.h"


extern struct tm *gmtime (const time_t *__timer) ;



extern struct tm *localtime (const time_t *__timer) ;

#line 148 "/usr/include/time.h"


#line 152 "/usr/include/time.h"


extern struct tm *gmtime_r (const time_t *__restrict __timer,
			    struct tm *__restrict __tp) ;



extern struct tm *localtime_r (const time_t *__restrict __timer,
			       struct tm *__restrict __tp) ;
#line 176 "/usr/include/time.h"



extern char *asctime (const struct tm *__tp) ;


#line 183 "/usr/include/time.h"
extern char *ctime (const time_t *__timer) ;
#line 191 "/usr/include/time.h"

#line 193 "/usr/include/time.h"




extern char *asctime_r (const struct tm *__restrict __tp,
			char *__restrict __buf) ;


#line 202 "/usr/include/time.h"
extern char *ctime_r (const time_t *__restrict __timer,
		      char *__restrict __buf) ;
#line 212 "/usr/include/time.h"

#line 214 "/usr/include/time.h"



extern char *__tzname[2];	
extern int __daylight;		
extern long int __timezone;	


#line 223 "/usr/include/time.h"

extern char *tzname[2];



extern void tzset (void) ;
#line 230 "/usr/include/time.h"

#line 232 "/usr/include/time.h"
extern int daylight;
extern long int timezone;
#line 235 "/usr/include/time.h"




#line 240 "/usr/include/time.h"


#line 244 "/usr/include/time.h"

extern time_t timegm (struct tm *__tp) ;
#line 254 "/usr/include/time.h"


#line 257 "/usr/include/time.h"



#line 261 "/usr/include/time.h"

extern time_t timelocal (struct tm *__tp) ;
#line 268 "/usr/include/time.h"


extern int dysize (int __year)   __attribute__ ((__const__));
#line 272 "/usr/include/time.h"


#line 276 "/usr/include/time.h"




extern int nanosleep (const struct timespec *__requested_time,
		      struct timespec *__remaining);


extern int clock_getres (clockid_t __clock_id, struct timespec *__res) ;


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp)
      ;


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
      ;
#line 314 "/usr/include/time.h"


#line 317 "/usr/include/time.h"




#line 322 "/usr/include/time.h"
extern int clock_nanosleep (clockid_t __clock_id, int __flags,
			    const struct timespec *__req,
			    struct timespec *__rem);
#line 335 "/usr/include/time.h"


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) ;
#line 339 "/usr/include/time.h"



extern int timer_create (clockid_t __clock_id,
			 struct sigevent *__restrict __evp,
			 timer_t *__restrict __timerid) ;


extern int timer_delete (timer_t __timerid) ;


#line 351 "/usr/include/time.h"
extern int timer_settime (timer_t __timerid, int __flags,
			  const struct itimerspec *__restrict __value,
			  struct itimerspec *__restrict __ovalue) ;


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     ;
#line 373 "/usr/include/time.h"


extern int timer_getoverrun (timer_t __timerid) ;
#line 377 "/usr/include/time.h"


#line 381 "/usr/include/time.h"

extern int timespec_get (struct timespec *__ts, int __base)
      ;
#line 393 "/usr/include/time.h"


#line 397 "/usr/include/time.h"

extern int timespec_getres (struct timespec *__ts, int __base)
     ;
#line 410 "/usr/include/time.h"


#line 413 "/usr/include/time.h"











extern int getdate_err;








extern struct tm *getdate (const char *__string);
#line 435 "/usr/include/time.h"

#line 437 "/usr/include/time.h"










extern int getdate_r (const char *__restrict __string,
		      struct tm *__restrict __resbufp);
#line 450 "/usr/include/time.h"


#line 21 "main.c"
#line 1 "/usr/include/wchar.h"






















#line 25 "/usr/include/wchar.h"

#line 1 "/usr/include/bits/libc-header-start.h"


























#line 30 "/usr/include/bits/libc-header-start.h"

#line 32 "/usr/include/bits/libc-header-start.h"

#line 1 "/usr/include/features.h"
















#line 34 "/usr/include/bits/libc-header-start.h"



#line 43 "/usr/include/bits/libc-header-start.h"























#line 84 "/usr/include/bits/libc-header-start.h"





#line 101 "/usr/include/bits/libc-header-start.h"


#line 28 "/usr/include/wchar.h"


#line 1 "/usr/include/bits/floatn.h"

















#line 31 "/usr/include/wchar.h"

#line 1 "/usr/lib/clang/21/include/stddef.h"





















#line 37 "/usr/lib/clang/21/include/stddef.h"

#line 80 "/usr/lib/clang/21/include/stddef.h"

#line 85 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_size_t.h"












#line 88 "/usr/lib/clang/21/include/stddef.h"
#line 90 "/usr/lib/clang/21/include/stddef.h"

#line 95 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_wchar_t.h"









#line 11 "/usr/lib/clang/21/include/__stddef_wchar_t.h"





#line 26 "/usr/lib/clang/21/include/__stddef_wchar_t.h"
#line 98 "/usr/lib/clang/21/include/stddef.h"
#line 100 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_null.h"









#line 11 "/usr/lib/clang/21/include/__stddef_null.h"






#line 18 "/usr/lib/clang/21/include/__stddef_null.h"

#line 28 "/usr/lib/clang/21/include/__stddef_null.h"
#line 103 "/usr/lib/clang/21/include/stddef.h"
#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 36 "/usr/include/wchar.h"

#line 1 "/usr/lib/clang/21/include/stdarg.h"





















#line 45 "/usr/lib/clang/21/include/stdarg.h"

#line 1 "/usr/lib/clang/21/include/__stdarg___gnuc_va_list.h"








#line 48 "/usr/lib/clang/21/include/stdarg.h"
#line 50 "/usr/lib/clang/21/include/stdarg.h"

#line 55 "/usr/lib/clang/21/include/stdarg.h"

#line 60 "/usr/lib/clang/21/include/stdarg.h"

#line 65 "/usr/lib/clang/21/include/stdarg.h"

#line 70 "/usr/lib/clang/21/include/stdarg.h"
#line 39 "/usr/include/wchar.h"

#line 50 "/usr/include/wchar.h"

#line 1 "/usr/include/bits/wchar.h"

















#line 52 "/usr/include/wchar.h"
#line 1 "/usr/include/bits/types/wint_t.h"
#line 3 "/usr/include/bits/types/wint_t.h"






#line 11 "/usr/include/bits/types/wint_t.h"





#line 19 "/usr/include/bits/types/wint_t.h"

typedef unsigned int wint_t;
#line 53 "/usr/include/wchar.h"
#line 1 "/usr/include/bits/types/mbstate_t.h"
#line 3 "/usr/include/bits/types/mbstate_t.h"

#line 1 "/usr/include/bits/types/__mbstate_t.h"
#line 5 "/usr/include/bits/types/mbstate_t.h"

typedef __mbstate_t mbstate_t;
#line 54 "/usr/include/wchar.h"
#line 1 "/usr/include/bits/types/__FILE.h"
#line 55 "/usr/include/wchar.h"

#line 1 "/usr/include/bits/types/FILE.h"
#line 58 "/usr/include/wchar.h"
#line 1 "/usr/include/bits/types/locale_t.h"

















#line 61 "/usr/include/wchar.h"
#line 62 "/usr/include/wchar.h"


#line 67 "/usr/include/wchar.h"

#line 73 "/usr/include/wchar.h"

#line 77 "/usr/include/wchar.h"








#line 88 "/usr/include/wchar.h"





struct tm;



extern wchar_t *wcscpy (wchar_t *__restrict __dest,
			const wchar_t *__restrict __src)
      ;


extern wchar_t *wcsncpy (wchar_t *__restrict __dest,
			 const wchar_t *__restrict __src, size_t __n)
      ;

#line 107 "/usr/include/wchar.h"

extern size_t wcslcpy (wchar_t *__restrict __dest,
		       const wchar_t *__restrict __src, size_t __n)
    ;



extern size_t wcslcat (wchar_t *__restrict __dest,
		       const wchar_t *__restrict __src, size_t __n)
     ;
#line 118 "/usr/include/wchar.h"


extern wchar_t *wcscat (wchar_t *__restrict __dest,
			const wchar_t *__restrict __src)
      ;

extern wchar_t *wcsncat (wchar_t *__restrict __dest,
			 const wchar_t *__restrict __src, size_t __n)
      ;


extern int wcscmp (const wchar_t *__s1, const wchar_t *__s2)
      __attribute__ ((__pure__)) ;

extern int wcsncmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
      __attribute__ ((__pure__)) ;

#line 136 "/usr/include/wchar.h"

extern int wcscasecmp (const wchar_t *__s1, const wchar_t *__s2) ;


extern int wcsncasecmp (const wchar_t *__s1, const wchar_t *__s2,
			size_t __n) ;



extern int wcscasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
			 locale_t __loc) ;

extern int wcsncasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
			  size_t __n, locale_t __loc) ;
#line 151 "/usr/include/wchar.h"



extern int wcscoll (const wchar_t *__s1, const wchar_t *__s2) ;



extern size_t wcsxfrm (wchar_t *__restrict __s1,
		       const wchar_t *__restrict __s2, size_t __n) ;

#line 162 "/usr/include/wchar.h"





extern int wcscoll_l (const wchar_t *__s1, const wchar_t *__s2,
		      locale_t __loc) ;




extern size_t wcsxfrm_l (wchar_t *__s1, const wchar_t *__s2,
			 size_t __n, locale_t __loc) ;


extern wchar_t *wcsdup (const wchar_t *__s) 
  __attribute__ ((__malloc__)) ;
#line 180 "/usr/include/wchar.h"


#line 188 "/usr/include/wchar.h"
extern wchar_t *wcschr (const wchar_t *__wcs, wchar_t __wc)
      __attribute__ ((__pure__));
#line 191 "/usr/include/wchar.h"

#line 198 "/usr/include/wchar.h"
extern wchar_t *wcsrchr (const wchar_t *__wcs, wchar_t __wc)
      __attribute__ ((__pure__));
#line 201 "/usr/include/wchar.h"

#line 203 "/usr/include/wchar.h"


extern wchar_t *wcschrnul (const wchar_t *__s, wchar_t __wc)
      __attribute__ ((__pure__));
#line 208 "/usr/include/wchar.h"



extern size_t wcscspn (const wchar_t *__wcs, const wchar_t *__reject)
      __attribute__ ((__pure__));


extern size_t wcsspn (const wchar_t *__wcs, const wchar_t *__accept)
      __attribute__ ((__pure__));

#line 225 "/usr/include/wchar.h"
extern wchar_t *wcspbrk (const wchar_t *__wcs, const wchar_t *__accept)
      __attribute__ ((__pure__));
#line 228 "/usr/include/wchar.h"

#line 236 "/usr/include/wchar.h"
extern wchar_t *wcsstr (const wchar_t *__haystack, const wchar_t *__needle)
      __attribute__ ((__pure__));
#line 239 "/usr/include/wchar.h"


extern wchar_t *wcstok (wchar_t *__restrict __s,
			const wchar_t *__restrict __delim,
			wchar_t **__restrict __ptr) ;


extern size_t wcslen (const wchar_t *__s)  __attribute__ ((__pure__));

#line 249 "/usr/include/wchar.h"

#line 257 "/usr/include/wchar.h"
extern wchar_t *wcswcs (const wchar_t *__haystack, const wchar_t *__needle)
      __attribute__ ((__pure__));
#line 261 "/usr/include/wchar.h"

#line 263 "/usr/include/wchar.h"

extern size_t wcsnlen (const wchar_t *__s, size_t __maxlen)
      __attribute__ ((__pure__));
#line 267 "/usr/include/wchar.h"



#line 277 "/usr/include/wchar.h"
extern wchar_t *wmemchr (const wchar_t *__s, wchar_t __c, size_t __n)
      __attribute__ ((__pure__));
#line 280 "/usr/include/wchar.h"


extern int wmemcmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
      __attribute__ ((__pure__));


extern wchar_t *wmemcpy (wchar_t *__restrict __s1,
			 const wchar_t *__restrict __s2, size_t __n) ;



extern wchar_t *wmemmove (wchar_t *__s1, const wchar_t *__s2, size_t __n)
     ;


extern wchar_t *wmemset (wchar_t *__s, wchar_t __c, size_t __n) ;

#line 298 "/usr/include/wchar.h"


extern wchar_t *wmempcpy (wchar_t *__restrict __s1,
			  const wchar_t *__restrict __s2, size_t __n)
     ;
#line 304 "/usr/include/wchar.h"




extern wint_t btowc (int __c) ;



extern int wctob (wint_t __c) ;



extern int mbsinit (const mbstate_t *__ps)  __attribute__ ((__pure__));



extern size_t mbrtowc (wchar_t *__restrict __pwc,
		       const char *__restrict __s, size_t __n,
		       mbstate_t *__restrict __p) ;


extern size_t wcrtomb (char *__restrict __s, wchar_t __wc,
		       mbstate_t *__restrict __ps) ;


extern size_t __mbrlen (const char *__restrict __s, size_t __n,
			mbstate_t *__restrict __ps) ;
extern size_t mbrlen (const char *__restrict __s, size_t __n,
		      mbstate_t *__restrict __ps) ;

#line 358 "/usr/include/wchar.h"



extern size_t mbsrtowcs (wchar_t *__restrict __dst,
			 const char **__restrict __src, size_t __len,
			 mbstate_t *__restrict __ps) ;



extern size_t wcsrtombs (char *__restrict __dst,
			 const wchar_t **__restrict __src, size_t __len,
			 mbstate_t *__restrict __ps) ;


#line 373 "/usr/include/wchar.h"


extern size_t mbsnrtowcs (wchar_t *__restrict __dst,
			  const char **__restrict __src, size_t __nmc,
			  size_t __len, mbstate_t *__restrict __ps) ;



extern size_t wcsnrtombs (char *__restrict __dst,
			  const wchar_t **__restrict __src,
			  size_t __nwc, size_t __len,
			  mbstate_t *__restrict __ps) ;
#line 386 "/usr/include/wchar.h"



#line 390 "/usr/include/wchar.h"

extern int wcwidth (wchar_t __c) ;



extern int wcswidth (const wchar_t *__s, size_t __n) ;
#line 397 "/usr/include/wchar.h"




extern double wcstod (const wchar_t *__restrict __nptr,
		      wchar_t **__restrict __endptr) ;

#line 405 "/usr/include/wchar.h"

extern float wcstof (const wchar_t *__restrict __nptr,
		     wchar_t **__restrict __endptr) ;
extern long double wcstold (const wchar_t *__restrict __nptr,
			    wchar_t **__restrict __endptr) ;
#line 411 "/usr/include/wchar.h"

#line 413 "/usr/include/wchar.h"


#line 419 "/usr/include/wchar.h"

#line 421 "/usr/include/wchar.h"
extern _Float32 wcstof32 (const wchar_t *__restrict __nptr,
			  wchar_t **__restrict __endptr) ;
#line 424 "/usr/include/wchar.h"

#line 426 "/usr/include/wchar.h"
extern _Float64 wcstof64 (const wchar_t *__restrict __nptr,
			  wchar_t **__restrict __endptr) ;
#line 429 "/usr/include/wchar.h"

#line 434 "/usr/include/wchar.h"

#line 436 "/usr/include/wchar.h"
extern _Float32x wcstof32x (const wchar_t *__restrict __nptr,
			    wchar_t **__restrict __endptr) ;
#line 439 "/usr/include/wchar.h"

#line 441 "/usr/include/wchar.h"
extern _Float64x wcstof64x (const wchar_t *__restrict __nptr,
			    wchar_t **__restrict __endptr) ;
#line 444 "/usr/include/wchar.h"

#line 450 "/usr/include/wchar.h"




extern long int wcstol (const wchar_t *__restrict __nptr,
			wchar_t **__restrict __endptr, int __base) ;



extern unsigned long int wcstoul (const wchar_t *__restrict __nptr,
				  wchar_t **__restrict __endptr, int __base)
     ;

#line 464 "/usr/include/wchar.h"



extern long long int wcstoll (const wchar_t *__restrict __nptr,
			      wchar_t **__restrict __endptr, int __base)
     ;




extern unsigned long long int wcstoull (const wchar_t *__restrict __nptr,
					wchar_t **__restrict __endptr,
					int __base) ;
#line 478 "/usr/include/wchar.h"

#line 480 "/usr/include/wchar.h"



extern long long int wcstoq (const wchar_t *__restrict __nptr,
			     wchar_t **__restrict __endptr, int __base)
     ;




extern unsigned long long int wcstouq (const wchar_t *__restrict __nptr,
				       wchar_t **__restrict __endptr,
				       int __base) ;
#line 494 "/usr/include/wchar.h"



#line 528 "/usr/include/wchar.h"
extern long int __isoc23_wcstol (const wchar_t *__restrict __nptr,
				 wchar_t **__restrict __endptr, int __base)
     ;
extern unsigned long int __isoc23_wcstoul (const wchar_t *__restrict __nptr,
					   wchar_t **__restrict __endptr,
					   int __base)
     ;

extern long long int __isoc23_wcstoll (const wchar_t *__restrict __nptr,
				       wchar_t **__restrict __endptr,
				       int __base)
     ;

extern unsigned long long int __isoc23_wcstoull (const wchar_t *__restrict __nptr,
						 wchar_t **__restrict __endptr,
						 int __base)
     ;
#line 555 "/usr/include/wchar.h"

#line 557 "/usr/include/wchar.h"



extern long int wcstol_l (const wchar_t *__restrict __nptr,
			  wchar_t **__restrict __endptr, int __base,
			  locale_t __loc) ;

extern unsigned long int wcstoul_l (const wchar_t *__restrict __nptr,
				    wchar_t **__restrict __endptr,
				    int __base, locale_t __loc) ;


extern long long int wcstoll_l (const wchar_t *__restrict __nptr,
				wchar_t **__restrict __endptr,
				int __base, locale_t __loc) ;


extern unsigned long long int wcstoull_l (const wchar_t *__restrict __nptr,
					  wchar_t **__restrict __endptr,
					  int __base, locale_t __loc)
     ;



#line 605 "/usr/include/wchar.h"
extern long int __isoc23_wcstol_l (const wchar_t *__restrict __nptr,
				   wchar_t **__restrict __endptr, int __base,
				   locale_t __loc) ;
extern unsigned long int __isoc23_wcstoul_l (const wchar_t *__restrict __nptr,
					     wchar_t **__restrict __endptr,
					     int __base, locale_t __loc)
     ;

extern long long int __isoc23_wcstoll_l (const wchar_t *__restrict __nptr,
					 wchar_t **__restrict __endptr,
					 int __base, locale_t __loc)
     ;

extern unsigned long long int __isoc23_wcstoull_l (const wchar_t *__restrict __nptr,
						   wchar_t **__restrict __endptr,
						   int __base, locale_t __loc)
     ;
#line 628 "/usr/include/wchar.h"

extern double wcstod_l (const wchar_t *__restrict __nptr,
			wchar_t **__restrict __endptr, locale_t __loc)
     ;

extern float wcstof_l (const wchar_t *__restrict __nptr,
		       wchar_t **__restrict __endptr, locale_t __loc)
     ;

extern long double wcstold_l (const wchar_t *__restrict __nptr,
			      wchar_t **__restrict __endptr,
			      locale_t __loc) ;

#line 646 "/usr/include/wchar.h"

#line 648 "/usr/include/wchar.h"
extern _Float32 wcstof32_l (const wchar_t *__restrict __nptr,
			    wchar_t **__restrict __endptr,
			    locale_t __loc) ;
#line 652 "/usr/include/wchar.h"

#line 654 "/usr/include/wchar.h"
extern _Float64 wcstof64_l (const wchar_t *__restrict __nptr,
			    wchar_t **__restrict __endptr,
			    locale_t __loc) ;
#line 658 "/usr/include/wchar.h"

#line 664 "/usr/include/wchar.h"

#line 666 "/usr/include/wchar.h"
extern _Float32x wcstof32x_l (const wchar_t *__restrict __nptr,
			      wchar_t **__restrict __endptr,
			      locale_t __loc) ;
#line 670 "/usr/include/wchar.h"

#line 672 "/usr/include/wchar.h"
extern _Float64x wcstof64x_l (const wchar_t *__restrict __nptr,
			      wchar_t **__restrict __endptr,
			      locale_t __loc) ;
#line 676 "/usr/include/wchar.h"

#line 683 "/usr/include/wchar.h"


#line 686 "/usr/include/wchar.h"


extern wchar_t *wcpcpy (wchar_t *__restrict __dest,
			const wchar_t *__restrict __src) ;



extern wchar_t *wcpncpy (wchar_t *__restrict __dest,
			 const wchar_t *__restrict __src, size_t __n)
     ;
#line 697 "/usr/include/wchar.h"




#line 714 "/usr/include/wchar.h"



extern __FILE *open_wmemstream (wchar_t **__bufloc, size_t *__sizeloc) 
  __attribute__ ((__malloc__)) ;
#line 720 "/usr/include/wchar.h"

#line 722 "/usr/include/wchar.h"


extern int fwide (__FILE *__fp, int __mode) ;






extern int fwprintf (__FILE *__restrict __stream,
		     const wchar_t *__restrict __format, ...)
     ;




extern int wprintf (const wchar_t *__restrict __format, ...)
     ;

extern int swprintf (wchar_t *__restrict __s, size_t __n,
		     const wchar_t *__restrict __format, ...)
      ;





extern int vfwprintf (__FILE *__restrict __s,
		      const wchar_t *__restrict __format,
		      __gnuc_va_list __arg)
     ;




extern int vwprintf (const wchar_t *__restrict __format,
		     __gnuc_va_list __arg)
     ;


extern int vswprintf (wchar_t *__restrict __s, size_t __n,
		      const wchar_t *__restrict __format,
		      __gnuc_va_list __arg)
      ;






extern int fwscanf (__FILE *__restrict __stream,
		    const wchar_t *__restrict __format, ...)
     ;




extern int wscanf (const wchar_t *__restrict __format, ...)
     ;

extern int swscanf (const wchar_t *__restrict __s,
		    const wchar_t *__restrict __format, ...)
      ;





#line 805 "/usr/include/wchar.h"
extern int __isoc23_fwscanf (__FILE *__restrict __stream,
			     const wchar_t *__restrict __format, ...);
extern int __isoc23_wscanf (const wchar_t *__restrict __format, ...);
extern int __isoc23_swscanf (const wchar_t *__restrict __s,
			     const wchar_t *__restrict __format, ...)
     ;
#line 841 "/usr/include/wchar.h"

#line 843 "/usr/include/wchar.h"

#line 845 "/usr/include/wchar.h"




extern int vfwscanf (__FILE *__restrict __s,
		     const wchar_t *__restrict __format,
		     __gnuc_va_list __arg)
     ;




extern int vwscanf (const wchar_t *__restrict __format,
		    __gnuc_va_list __arg)
     ;

extern int vswscanf (const wchar_t *__restrict __s,
		     const wchar_t *__restrict __format,
		     __gnuc_va_list __arg)
      ;


#line 882 "/usr/include/wchar.h"
extern int __isoc23_vfwscanf (__FILE *__restrict __s,
			      const wchar_t *__restrict __format,
			      __gnuc_va_list __arg);
extern int __isoc23_vwscanf (const wchar_t *__restrict __format,
			     __gnuc_va_list __arg);
extern int __isoc23_vswscanf (const wchar_t *__restrict __s,
			      const wchar_t *__restrict __format,
			      __gnuc_va_list __arg) ;
#line 922 "/usr/include/wchar.h"

#line 924 "/usr/include/wchar.h"






extern wint_t fgetwc (__FILE *__stream);
extern wint_t getwc (__FILE *__stream);





extern wint_t getwchar (void);






extern wint_t fputwc (wchar_t __wc, __FILE *__stream);
extern wint_t putwc (wchar_t __wc, __FILE *__stream);





extern wint_t putwchar (wchar_t __wc);







extern wchar_t *fgetws (wchar_t *__restrict __ws, int __n,
			__FILE *__restrict __stream);





extern int fputws (const wchar_t *__restrict __ws,
		   __FILE *__restrict __stream);






extern wint_t ungetwc (wint_t __wc, __FILE *__stream);


#line 978 "/usr/include/wchar.h"







extern wint_t getwc_unlocked (__FILE *__stream);
extern wint_t getwchar_unlocked (void);







extern wint_t fgetwc_unlocked (__FILE *__stream);







extern wint_t fputwc_unlocked (wchar_t __wc, __FILE *__stream);








extern wint_t putwc_unlocked (wchar_t __wc, __FILE *__stream);
extern wint_t putwchar_unlocked (wchar_t __wc);








extern wchar_t *fgetws_unlocked (wchar_t *__restrict __ws, int __n,
				 __FILE *__restrict __stream);







extern int fputws_unlocked (const wchar_t *__restrict __ws,
			    __FILE *__restrict __stream);
#line 1033 "/usr/include/wchar.h"





extern size_t wcsftime (wchar_t *__restrict __s, size_t __maxsize,
			const wchar_t *__restrict __format,
			const struct tm *__restrict __tp) ;

#line 1043 "/usr/include/wchar.h"


extern size_t wcsftime_l (wchar_t *__restrict __s, size_t __maxsize,
			  const wchar_t *__restrict __format,
			  const struct tm *__restrict __tp,
			  locale_t __loc) ;
#line 1050 "/usr/include/wchar.h"


#line 1056 "/usr/include/wchar.h"



#line 1062 "/usr/include/wchar.h"

#line 1067 "/usr/include/wchar.h"


#line 22 "main.c"
#line 1 "/usr/include/wctype.h"






















#line 25 "/usr/include/wctype.h"

#line 1 "/usr/include/features.h"
















#line 27 "/usr/include/wctype.h"
#line 1 "/usr/include/bits/types.h"





















#line 28 "/usr/include/wctype.h"
#line 1 "/usr/include/bits/types/wint_t.h"
#line 29 "/usr/include/wctype.h"



#line 35 "/usr/include/wctype.h"



#line 1 "/usr/include/bits/wctype-wchar.h"






















#line 25 "/usr/include/bits/wctype-wchar.h"

#line 29 "/usr/include/bits/wctype-wchar.h"

#line 1 "/usr/include/bits/types.h"





















#line 31 "/usr/include/bits/wctype-wchar.h"
#line 1 "/usr/include/bits/types/wint_t.h"
#line 32 "/usr/include/bits/wctype-wchar.h"






typedef unsigned long int wctype_t;

#line 41 "/usr/include/bits/wctype-wchar.h"




#line 1 "/usr/include/bits/endian.h"

















#line 46 "/usr/include/bits/wctype-wchar.h"
#line 51 "/usr/include/bits/wctype-wchar.h"

enum
{
  __ISwupper = 0,			
  __ISwlower = 1,			
  __ISwalpha = 2,			
  __ISwdigit = 3,			
  __ISwxdigit = 4,			
  __ISwspace = 5,			
  __ISwprint = 6,			
  __ISwgraph = 7,			
  __ISwblank = 8,			
  __ISwcntrl = 9,			
  __ISwpunct = 10,			
  __ISwalnum = 11,			

  _ISwupper = ((__ISwupper) < 8 ? (int) ((1UL << (__ISwupper)) << 24)			      	 : ((__ISwupper) < 16 ? (int) ((1UL << (__ISwupper)) << 8)			      	    : ((__ISwupper) < 24 ? (int) ((1UL << (__ISwupper)) >> 8)			      	       : (int) ((1UL << (__ISwupper)) >> 24)))),	
  _ISwlower = ((__ISwlower) < 8 ? (int) ((1UL << (__ISwlower)) << 24)			      	 : ((__ISwlower) < 16 ? (int) ((1UL << (__ISwlower)) << 8)			      	    : ((__ISwlower) < 24 ? (int) ((1UL << (__ISwlower)) >> 8)			      	       : (int) ((1UL << (__ISwlower)) >> 24)))),	
  _ISwalpha = ((__ISwalpha) < 8 ? (int) ((1UL << (__ISwalpha)) << 24)			      	 : ((__ISwalpha) < 16 ? (int) ((1UL << (__ISwalpha)) << 8)			      	    : ((__ISwalpha) < 24 ? (int) ((1UL << (__ISwalpha)) >> 8)			      	       : (int) ((1UL << (__ISwalpha)) >> 24)))),	
  _ISwdigit = ((__ISwdigit) < 8 ? (int) ((1UL << (__ISwdigit)) << 24)			      	 : ((__ISwdigit) < 16 ? (int) ((1UL << (__ISwdigit)) << 8)			      	    : ((__ISwdigit) < 24 ? (int) ((1UL << (__ISwdigit)) >> 8)			      	       : (int) ((1UL << (__ISwdigit)) >> 24)))),	
  _ISwxdigit = ((__ISwxdigit) < 8 ? (int) ((1UL << (__ISwxdigit)) << 24)			      	 : ((__ISwxdigit) < 16 ? (int) ((1UL << (__ISwxdigit)) << 8)			      	    : ((__ISwxdigit) < 24 ? (int) ((1UL << (__ISwxdigit)) >> 8)			      	       : (int) ((1UL << (__ISwxdigit)) >> 24)))),	
  _ISwspace = ((__ISwspace) < 8 ? (int) ((1UL << (__ISwspace)) << 24)			      	 : ((__ISwspace) < 16 ? (int) ((1UL << (__ISwspace)) << 8)			      	    : ((__ISwspace) < 24 ? (int) ((1UL << (__ISwspace)) >> 8)			      	       : (int) ((1UL << (__ISwspace)) >> 24)))),	
  _ISwprint = ((__ISwprint) < 8 ? (int) ((1UL << (__ISwprint)) << 24)			      	 : ((__ISwprint) < 16 ? (int) ((1UL << (__ISwprint)) << 8)			      	    : ((__ISwprint) < 24 ? (int) ((1UL << (__ISwprint)) >> 8)			      	       : (int) ((1UL << (__ISwprint)) >> 24)))),	
  _ISwgraph = ((__ISwgraph) < 8 ? (int) ((1UL << (__ISwgraph)) << 24)			      	 : ((__ISwgraph) < 16 ? (int) ((1UL << (__ISwgraph)) << 8)			      	    : ((__ISwgraph) < 24 ? (int) ((1UL << (__ISwgraph)) >> 8)			      	       : (int) ((1UL << (__ISwgraph)) >> 24)))),	
  _ISwblank = ((__ISwblank) < 8 ? (int) ((1UL << (__ISwblank)) << 24)			      	 : ((__ISwblank) < 16 ? (int) ((1UL << (__ISwblank)) << 8)			      	    : ((__ISwblank) < 24 ? (int) ((1UL << (__ISwblank)) >> 8)			      	       : (int) ((1UL << (__ISwblank)) >> 24)))),	
  _ISwcntrl = ((__ISwcntrl) < 8 ? (int) ((1UL << (__ISwcntrl)) << 24)			      	 : ((__ISwcntrl) < 16 ? (int) ((1UL << (__ISwcntrl)) << 8)			      	    : ((__ISwcntrl) < 24 ? (int) ((1UL << (__ISwcntrl)) >> 8)			      	       : (int) ((1UL << (__ISwcntrl)) >> 24)))),	
  _ISwpunct = ((__ISwpunct) < 8 ? (int) ((1UL << (__ISwpunct)) << 24)			      	 : ((__ISwpunct) < 16 ? (int) ((1UL << (__ISwpunct)) << 8)			      	    : ((__ISwpunct) < 24 ? (int) ((1UL << (__ISwpunct)) >> 8)			      	       : (int) ((1UL << (__ISwpunct)) >> 24)))),	
  _ISwalnum = ((__ISwalnum) < 8 ? (int) ((1UL << (__ISwalnum)) << 24)			      	 : ((__ISwalnum) < 16 ? (int) ((1UL << (__ISwalnum)) << 8)			      	    : ((__ISwalnum) < 24 ? (int) ((1UL << (__ISwalnum)) >> 8)			      	       : (int) ((1UL << (__ISwalnum)) >> 24))))	
};
#line 81 "/usr/include/bits/wctype-wchar.h"










extern int iswalnum (wint_t __wc) ;





extern int iswalpha (wint_t __wc) ;


extern int iswcntrl (wint_t __wc) ;



extern int iswdigit (wint_t __wc) ;



extern int iswgraph (wint_t __wc) ;




extern int iswlower (wint_t __wc) ;


extern int iswprint (wint_t __wc) ;




extern int iswpunct (wint_t __wc) ;




extern int iswspace (wint_t __wc) ;




extern int iswupper (wint_t __wc) ;




extern int iswxdigit (wint_t __wc) ;




#line 142 "/usr/include/bits/wctype-wchar.h"
extern int iswblank (wint_t __wc) ;
#line 144 "/usr/include/bits/wctype-wchar.h"







extern wctype_t wctype (const char *__property) ;



extern int iswctype (wint_t __wc, wctype_t __desc) ;






extern wint_t towlower (wint_t __wc) ;


extern wint_t towupper (wint_t __wc) ;


#line 39 "/usr/include/wctype.h"









typedef const __int32_t *wctrans_t;



extern wctrans_t wctrans (const char *__property) ;


extern wint_t towctrans (wint_t __wc, wctrans_t __desc) ;

#line 58 "/usr/include/wctype.h"

#line 1 "/usr/include/bits/types/locale_t.h"

















#line 60 "/usr/include/wctype.h"



extern int iswalnum_l (wint_t __wc, locale_t __locale) ;





extern int iswalpha_l (wint_t __wc, locale_t __locale) ;


extern int iswcntrl_l (wint_t __wc, locale_t __locale) ;



extern int iswdigit_l (wint_t __wc, locale_t __locale) ;



extern int iswgraph_l (wint_t __wc, locale_t __locale) ;




extern int iswlower_l (wint_t __wc, locale_t __locale) ;


extern int iswprint_l (wint_t __wc, locale_t __locale) ;




extern int iswpunct_l (wint_t __wc, locale_t __locale) ;




extern int iswspace_l (wint_t __wc, locale_t __locale) ;




extern int iswupper_l (wint_t __wc, locale_t __locale) ;




extern int iswxdigit_l (wint_t __wc, locale_t __locale) ;




extern int iswblank_l (wint_t __wc, locale_t __locale) ;



extern wctype_t wctype_l (const char *__property, locale_t __locale)
     ;



extern int iswctype_l (wint_t __wc, wctype_t __desc, locale_t __locale)
     ;






extern wint_t towlower_l (wint_t __wc, locale_t __locale) ;


extern wint_t towupper_l (wint_t __wc, locale_t __locale) ;



extern wctrans_t wctrans_l (const char *__property, locale_t __locale)
     ;


extern wint_t towctrans_l (wint_t __wc, wctrans_t __desc,
			   locale_t __locale) ;

#line 145 "/usr/include/wctype.h"


#line 23 "main.c"
}

int test_headers_cstd(void)
{
    return 0;
}

int main(int argc, char** argv)
{
    return 0;
}
