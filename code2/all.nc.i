#line 1 "all.nc"
#line 1 "/usr/include/a.out.h"
#line 3 "/usr/include/a.out.h"

#line 1 "/usr/include/bits/a.out.h"
#line 4 "/usr/include/bits/a.out.h"

#line 6 "/usr/include/bits/a.out.h"



#line 10 "/usr/include/bits/a.out.h"
#line 5 "/usr/include/a.out.h"

#line 7 "/usr/include/a.out.h"

struct exec
{
  unsigned long a_info;	
  unsigned int a_text;	
  unsigned int a_data;	
  unsigned int a_bss;	
  unsigned int a_syms;	
  unsigned int a_entry;	
  unsigned int a_trsize;
  unsigned int a_drsize;
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

#line 38 "/usr/include/a.out.h"


#line 41 "/usr/include/a.out.h"

#line 43 "/usr/include/a.out.h"

#line 45 "/usr/include/a.out.h"


#line 48 "/usr/include/a.out.h"

#line 50 "/usr/include/a.out.h"

#line 62 "/usr/include/a.out.h"


#line 65 "/usr/include/a.out.h"


#line 68 "/usr/include/a.out.h"

#line 71 "/usr/include/a.out.h"

#line 74 "/usr/include/a.out.h"

#line 76 "/usr/include/a.out.h"
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
#line 90 "/usr/include/a.out.h"

#line 106 "/usr/include/a.out.h"

#line 108 "/usr/include/a.out.h"





struct relocation_info
{
  int r_address;
  unsigned int r_symbolnum:24;
  unsigned int r_pcrel:1;
  unsigned int r_length:2;
  unsigned int r_extern:1;
  unsigned int r_pad:4;
};
#line 123 "/usr/include/a.out.h"
#line 2 "all.nc"
#line 1 "/usr/include/aio.h"





















#line 24 "/usr/include/aio.h"

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

#line 26 "/usr/include/aio.h"
#line 1 "/usr/include/sys/types.h"





















#line 24 "/usr/include/sys/types.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/sys/types.h"



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

#line 64 "/usr/include/sys/types.h"
typedef __gid_t gid_t;
#line 67 "/usr/include/sys/types.h"

#line 69 "/usr/include/sys/types.h"
typedef __mode_t mode_t;
#line 72 "/usr/include/sys/types.h"

#line 74 "/usr/include/sys/types.h"
typedef __nlink_t nlink_t;
#line 77 "/usr/include/sys/types.h"

#line 79 "/usr/include/sys/types.h"
typedef __uid_t uid_t;
#line 82 "/usr/include/sys/types.h"

#line 85 "/usr/include/sys/types.h"
typedef __off_t off_t;
#line 92 "/usr/include/sys/types.h"
typedef __off64_t off64_t;
#line 95 "/usr/include/sys/types.h"

#line 97 "/usr/include/sys/types.h"
typedef __pid_t pid_t;
#line 100 "/usr/include/sys/types.h"

#line 102 "/usr/include/sys/types.h"
typedef __id_t id_t;
#line 105 "/usr/include/sys/types.h"

#line 107 "/usr/include/sys/types.h"
typedef __ssize_t ssize_t;
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
#line 3 "/usr/include/bits/types/time_t.h"

#line 1 "/usr/include/bits/types.h"





















#line 5 "/usr/include/bits/types/time_t.h"


#line 10 "/usr/include/bits/types/time_t.h"
typedef __time_t time_t;
#line 12 "/usr/include/bits/types/time_t.h"
#line 129 "/usr/include/sys/types.h"
#line 1 "/usr/include/bits/types/timer_t.h"
#line 3 "/usr/include/bits/types/timer_t.h"

#line 1 "/usr/include/bits/types.h"





















#line 5 "/usr/include/bits/types/timer_t.h"


typedef __timer_t timer_t;
#line 130 "/usr/include/sys/types.h"

#line 133 "/usr/include/sys/types.h"
typedef __useconds_t useconds_t;
#line 137 "/usr/include/sys/types.h"
typedef __suseconds_t suseconds_t;
#line 141 "/usr/include/sys/types.h"

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
#line 144 "/usr/include/sys/types.h"

#line 146 "/usr/include/sys/types.h"

typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#line 151 "/usr/include/sys/types.h"



#line 1 "/usr/include/bits/stdint-intn.h"


















#line 21 "/usr/include/bits/stdint-intn.h"

#line 1 "/usr/include/bits/types.h"





















#line 23 "/usr/include/bits/stdint-intn.h"

typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
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


















#line 21 "/usr/include/bits/endian.h"









#line 33 "/usr/include/bits/endian.h"


#line 1 "/usr/include/bits/endianness.h"
#line 3 "/usr/include/bits/endianness.h"

#line 7 "/usr/include/bits/endianness.h"


#line 10 "/usr/include/bits/endianness.h"
#line 36 "/usr/include/bits/endian.h"



#line 42 "/usr/include/bits/endian.h"

#line 48 "/usr/include/bits/endian.h"
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
#line 3 "/usr/include/bits/types/sigset_t.h"

#line 1 "/usr/include/bits/types/__sigset_t.h"
#line 3 "/usr/include/bits/types/__sigset_t.h"

#line 5 "/usr/include/bits/types/__sigset_t.h"
typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
#line 5 "/usr/include/bits/types/sigset_t.h"


typedef __sigset_t sigset_t;
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

#line 4 "/usr/include/bits/types/struct_timespec.h"

#line 1 "/usr/include/bits/types.h"





















#line 6 "/usr/include/bits/types/struct_timespec.h"
#line 1 "/usr/include/bits/endian.h"

















#line 7 "/usr/include/bits/types/struct_timespec.h"
#line 1 "/usr/include/bits/types/time_t.h"
#line 8 "/usr/include/bits/types/struct_timespec.h"



struct timespec
{
#line 16 "/usr/include/bits/types/struct_timespec.h"
  __time_t tv_sec;		
#line 19 "/usr/include/bits/types/struct_timespec.h"
  __syscall_slong_t tv_nsec;	
#line 29 "/usr/include/bits/types/struct_timespec.h"
};
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
#line 62 "/usr/include/bits/pthreadtypes.h"
typedef union pthread_attr_t pthread_attr_t;
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
#line 226 "/usr/include/sys/types.h"
#line 227 "/usr/include/sys/types.h"


#line 27 "/usr/include/aio.h"
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


















#line 21 "/usr/include/bits/types/__sigval_t.h"


#line 24 "/usr/include/bits/types/__sigval_t.h"
union sigval
{
  int sival_int;
  void *sival_ptr;
};

typedef union sigval __sigval_t;
#line 40 "/usr/include/bits/types/__sigval_t.h"
#line 7 "/usr/include/bits/types/sigevent_t.h"

#line 14 "/usr/include/bits/types/sigevent_t.h"


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
#line 28 "/usr/include/aio.h"
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
#line 29 "/usr/include/aio.h"
#line 1 "/usr/include/bits/types/struct_timespec.h"
#line 30 "/usr/include/aio.h"




struct aiocb
{
  int aio_fildes;		
  int aio_lio_opcode;		
  int aio_reqprio;		
  volatile void *aio_buf;	
  size_t aio_nbytes;		
  struct sigevent aio_sigevent;	

  
  struct aiocb *__next_prio;
  int __abs_prio;
  int __policy;
  int __error_code;
  __ssize_t __return_value;

#line 51 "/usr/include/aio.h"
  __off_t aio_offset;		
  char __pad[sizeof (__off64_t) - sizeof (__off_t)];
#line 56 "/usr/include/aio.h"
  char __glibc_reserved[32];
};



#line 62 "/usr/include/aio.h"
struct aiocb64
{
  int aio_fildes;		
  int aio_lio_opcode;		
  int aio_reqprio;		
  volatile void *aio_buf;	
  size_t aio_nbytes;		
  struct sigevent aio_sigevent;	

  
  struct aiocb *__next_prio;
  int __abs_prio;
  int __policy;
  int __error_code;
  __ssize_t __return_value;

  __off64_t aio_offset;		
  char __glibc_reserved[32];
};
#line 82 "/usr/include/aio.h"


#line 85 "/usr/include/aio.h"

struct aioinit
  {
    int aio_threads;		
    int aio_num;		
    int aio_locks;		
    int aio_usedba;		
    int aio_debug;		
    int aio_numusers;		
    int aio_idle_time;		

    int aio_reserved;
  };
#line 99 "/usr/include/aio.h"



enum
{
  AIO_CANCELED,
#line 106 "/usr/include/aio.h"
  AIO_NOTCANCELED,
#line 108 "/usr/include/aio.h"
  AIO_ALLDONE
#line 110 "/usr/include/aio.h"
};



enum
{
  LIO_READ,
#line 118 "/usr/include/aio.h"
  LIO_WRITE,
#line 120 "/usr/include/aio.h"
  LIO_NOP
#line 122 "/usr/include/aio.h"
};



enum
{
  LIO_WAIT,
#line 130 "/usr/include/aio.h"
  LIO_NOWAIT
#line 132 "/usr/include/aio.h"
};



#line 137 "/usr/include/aio.h"
extern void aio_init (const struct aioinit *__init)  ;
#line 139 "/usr/include/aio.h"


#line 142 "/usr/include/aio.h"

extern int aio_read (struct aiocb *__aiocbp)  ;

extern int aio_write (struct aiocb *__aiocbp)  ;


extern int lio_listio (int __mode,
		       struct aiocb *const __list[__restrict],
		       int __nent, struct sigevent *__restrict __sig)
   ;


extern int aio_error (const struct aiocb *__aiocbp)  ;

extern __ssize_t aio_return (struct aiocb *__aiocbp)  ;



extern int aio_cancel (int __fildes, struct aiocb *__aiocbp) ;






extern int aio_suspend (const struct aiocb *const __list[], int __nent,
			const struct timespec *__restrict __timeout)
  ;



extern int aio_fsync (int __operation, struct aiocb *__aiocbp)
   ;
#line 226 "/usr/include/aio.h"

#line 228 "/usr/include/aio.h"
extern int aio_read64 (struct aiocb64 *__aiocbp)  ;
extern int aio_write64 (struct aiocb64 *__aiocbp)  ;

extern int lio_listio64 (int __mode,
			 struct aiocb64 *const __list[__restrict],
			 int __nent, struct sigevent *__restrict __sig)
   ;

extern int aio_error64 (const struct aiocb64 *__aiocbp)
   ;
extern __ssize_t aio_return64 (struct aiocb64 *__aiocbp)
   ;

extern int aio_cancel64 (int __fildes, struct aiocb64 *__aiocbp) ;

extern int aio_suspend64 (const struct aiocb64 *const __list[], int __nent,
			  const struct timespec *__restrict __timeout)
   ;

extern int aio_fsync64 (int __operation, struct aiocb64 *__aiocbp)
   ;
#line 250 "/usr/include/aio.h"


#line 3 "all.nc"
#line 1 "/usr/include/aliases.h"

















#line 20 "/usr/include/aliases.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/aliases.h"

#line 1 "/usr/include/sys/types.h"




















#line 24 "/usr/include/aliases.h"





struct aliasent
  {
    char *alias_name;
    size_t alias_members_len;
    char **alias_members;
    int alias_local;
  };



extern void setaliasent (void) ;


extern void endaliasent (void) ;


extern struct aliasent *getaliasent (void) ;


extern int getaliasent_r (struct aliasent *__restrict __result_buf,
			  char *__restrict __buffer, size_t __buflen,
			  struct aliasent **__restrict __result) ;


extern struct aliasent *getaliasbyname (const char *__name) ;


extern int getaliasbyname_r (const char *__restrict __name,
			     struct aliasent *__restrict __result_buf,
			     char *__restrict __buffer, size_t __buflen,
			     struct aliasent **__restrict __result) ;


#line 4 "all.nc"
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


#line 5 "all.nc"
#line 1 "/usr/include/ar.h"


















#line 21 "/usr/include/ar.h"

#line 1 "/usr/include/sys/cdefs.h"

















#line 23 "/usr/include/ar.h"





#line 30 "/usr/include/ar.h"

#line 32 "/usr/include/ar.h"



struct ar_hdr
  {
    char ar_name[16];		
    char ar_date[12];		
    char ar_uid[6], ar_gid[6];	
    char ar_mode[8];		
    char ar_size[10];		
    char ar_fmag[2];		
  };


#line 6 "all.nc"
#line 1 "/usr/include/argp.h"



















#line 22 "/usr/include/argp.h"

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









#line 12 "/usr/lib/clang/21/include/__stdarg___gnuc_va_list.h"
typedef __builtin_va_list __gnuc_va_list;
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


#line 24 "/usr/include/argp.h"
#line 1 "/usr/include/ctype.h"





















#line 24 "/usr/include/ctype.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/ctype.h"
#line 1 "/usr/include/bits/types.h"





















#line 27 "/usr/include/ctype.h"



#line 31 "/usr/include/ctype.h"








#line 1 "/usr/include/bits/endian.h"

















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


#line 25 "/usr/include/argp.h"
#line 1 "/usr/include/getopt.h"




















#line 23 "/usr/include/getopt.h"

#line 1 "/usr/include/features.h"
















#line 25 "/usr/include/getopt.h"






#line 34 "/usr/include/getopt.h"

#line 1 "/usr/include/bits/getopt_core.h"



















#line 22 "/usr/include/bits/getopt_core.h"














extern char *optarg;













extern int optind;




extern int opterr;



extern int optopt;































extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
        ;


#line 36 "/usr/include/getopt.h"
#line 1 "/usr/include/bits/getopt_ext.h"



















#line 22 "/usr/include/bits/getopt_ext.h"




























struct option
{
  const char *name;
  

  int has_arg;
  int *flag;
  int val;
};



#line 65 "/usr/include/bits/getopt_ext.h"

extern int getopt_long (int ___argc, char *const *___argv,
			const char *__shortopts,
		        const struct option *__longopts, int *__longind)
        ;
extern int getopt_long_only (int ___argc, char *const *___argv,
			     const char *__shortopts,
		             const struct option *__longopts, int *__longind)
        ;


#line 37 "/usr/include/getopt.h"
#line 26 "/usr/include/argp.h"
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
#line 27 "/usr/include/argp.h"
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


#line 28 "/usr/include/argp.h"





#line 37 "/usr/include/argp.h"






struct argp_option
{
  

  const char *name;

  

  int key;

  

  const char *arg;

  
  int flags;

  



  const char *doc;

  






  int group;
};


#line 78 "/usr/include/argp.h"


#line 81 "/usr/include/argp.h"




#line 86 "/usr/include/argp.h"











#line 98 "/usr/include/argp.h"








#line 107 "/usr/include/argp.h"

struct argp;			
struct argp_state;		
struct argp_child;		


typedef error_t (*argp_parser_t) (int __key, char *__arg,
				  struct argp_state *__state);






#line 122 "/usr/include/argp.h"



























#line 150 "/usr/include/argp.h"





#line 156 "/usr/include/argp.h"

#line 158 "/usr/include/argp.h"





#line 164 "/usr/include/argp.h"



#line 168 "/usr/include/argp.h"

#line 170 "/usr/include/argp.h"


#line 173 "/usr/include/argp.h"

#line 175 "/usr/include/argp.h"







struct argp
{
  

  const struct argp_option *options;

  






  argp_parser_t parser;

  




  const char *args_doc;

  


  const char *doc;

  





  const struct argp_child *children;

  









  char *(*help_filter) (int __key, const char *__text, void *__input);

  


  const char *argp_domain;
};


#line 241 "/usr/include/argp.h"


#line 245 "/usr/include/argp.h"



struct argp_child
{
  
  const struct argp *argp;

  
  int flags;

  



  const char *header;

  





  int group;
};



struct argp_state
{
  
  const struct argp *root_argp;

  
  int argc;
  char **argv;

  
  int next;

  
  unsigned flags;

  



  unsigned arg_num;

  


  int quoted;

  
  void *input;
  

  void **child_inputs;

  
  void *hook;

  

  char *name;

  
  FILE *err_stream;		
  FILE *out_stream;		

  void *pstate;			
};








#line 327 "/usr/include/argp.h"





#line 333 "/usr/include/argp.h"











#line 345 "/usr/include/argp.h"



#line 349 "/usr/include/argp.h"



#line 353 "/usr/include/argp.h"


#line 356 "/usr/include/argp.h"


#line 359 "/usr/include/argp.h"


#line 362 "/usr/include/argp.h"








extern error_t argp_parse (const struct argp *__restrict __argp,
			   int __argc, char **__restrict __argv,
			   unsigned __flags, int *__restrict __arg_index,
			   void *__restrict __input);
extern error_t __argp_parse (const struct argp *__restrict __argp,
			     int __argc, char **__restrict __argv,
			     unsigned __flags, int *__restrict __arg_index,
			     void *__restrict __input);







extern const char *argp_program_version;






extern void (*argp_program_version_hook) (FILE *__restrict __stream,
					  struct argp_state *__restrict
					  __state);






extern const char *argp_program_bug_address;




extern error_t argp_err_exit_status;


#line 419 "/usr/include/argp.h"


#line 423 "/usr/include/argp.h"



#line 427 "/usr/include/argp.h"


#line 430 "/usr/include/argp.h"

#line 432 "/usr/include/argp.h"



extern void argp_help (const struct argp *__restrict __argp,
		       FILE *__restrict __stream,
		       unsigned __flags, char *__restrict __name);
extern void __argp_help (const struct argp *__restrict __argp,
			 FILE *__restrict __stream, unsigned __flags,
			 char *__name);











extern void argp_state_help (const struct argp_state *__restrict __state,
			     FILE *__restrict __stream,
			     unsigned int __flags);
extern void __argp_state_help (const struct argp_state *__restrict __state,
			       FILE *__restrict __stream,
			       unsigned int __flags);


extern void argp_usage (const struct argp_state *__state);
extern void __argp_usage (const struct argp_state *__state);




extern void argp_error (const struct argp_state *__restrict __state,
			const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
extern void __argp_error (const struct argp_state *__restrict __state,
			  const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));









extern void argp_failure (const struct argp_state *__restrict __state,
			  int __status, int __errnum,
			  const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 4, 5)));
extern void __argp_failure (const struct argp_state *__restrict __state,
			    int __status, int __errnum,
			    const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 4, 5)));


extern int _option_is_short (const struct argp_option *__opt) ;
extern int __option_is_short (const struct argp_option *__opt) ;



extern int _option_is_end (const struct argp_option *__opt) ;
extern int __option_is_end (const struct argp_option *__opt) ;



extern void *_argp_input (const struct argp *__restrict __argp,
			  const struct argp_state *__restrict __state)
     ;
extern void *__argp_input (const struct argp *__restrict __argp,
			   const struct argp_state *__restrict __state)
     ;

#line 552 "/usr/include/argp.h"

#line 1 "/usr/include/bits/floatn.h"

















#line 554 "/usr/include/argp.h"
#line 557 "/usr/include/argp.h"


#line 7 "all.nc"
#line 1 "/usr/include/argz.h"


















#line 21 "/usr/include/argz.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/argz.h"
#line 1 "/usr/include/errno.h"




















#line 24 "/usr/include/argz.h"
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


#line 25 "/usr/include/argz.h"





#line 34 "/usr/include/argz.h"




extern error_t __argz_create (char *const __argv[], char **__restrict __argz,
			      size_t *__restrict __len) ;
extern error_t argz_create (char *const __argv[], char **__restrict __argz,
			    size_t *__restrict __len) ;





extern error_t argz_create_sep (const char *__restrict __string,
				int __sep, char **__restrict __argz,
				size_t *__restrict __len) ;


extern size_t __argz_count (const char *__argz, size_t __len)
      __attribute__ ((__pure__));
extern size_t argz_count (const char *__argz, size_t __len)
      __attribute__ ((__pure__));



extern void __argz_extract (const char *__restrict __argz, size_t __len,
			    char **__restrict __argv) ;
extern void argz_extract (const char *__restrict __argz, size_t __len,
			  char **__restrict __argv) ;



extern void __argz_stringify (char *__argz, size_t __len, int __sep) ;
extern void argz_stringify (char *__argz, size_t __len, int __sep) ;


extern error_t argz_append (char **__restrict __argz,
			    size_t *__restrict __argz_len,
			    const char *__restrict __buf, size_t __buf_len)
     ;


extern error_t argz_add (char **__restrict __argz,
			 size_t *__restrict __argz_len,
			 const char *__restrict __str) ;



extern error_t argz_add_sep (char **__restrict __argz,
			     size_t *__restrict __argz_len,
			     const char *__restrict __string, int __delim)
     ;


extern void argz_delete (char **__restrict __argz,
			 size_t *__restrict __argz_len,
			 char *__restrict __entry) ;







extern error_t argz_insert (char **__restrict __argz,
			    size_t *__restrict __argz_len,
			    char *__restrict __before,
			    const char *__restrict __entry) ;




extern error_t argz_replace (char **__restrict __argz,
			     size_t *__restrict __argz_len,
			     const char *__restrict __str,
			     const char *__restrict __with,
			     unsigned int *__restrict __replace_count);















extern char *__argz_next (const char *__restrict __argz, size_t __argz_len,
			  const char *__restrict __entry) ;
extern char *argz_next (const char *__restrict __argz, size_t __argz_len,
			const char *__restrict __entry) ;

#line 153 "/usr/include/argz.h"


#line 8 "all.nc"
#line 1 "/usr/include/assert.h"





















#line 33 "/usr/include/assert.h"

#line 1 "/usr/include/features.h"
















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

#line 9 "all.nc"
#line 1 "/usr/include/byteswap.h"


















#line 21 "/usr/include/byteswap.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/byteswap.h"


#line 1 "/usr/include/bits/byteswap.h"


















#line 22 "/usr/include/bits/byteswap.h"
#line 26 "/usr/include/byteswap.h"






#line 33 "/usr/include/byteswap.h"


#line 36 "/usr/include/byteswap.h"


#line 39 "/usr/include/byteswap.h"
#line 10 "all.nc"
#line 1 "/usr/include/complex.h"





















#line 24 "/usr/include/complex.h"

#line 1 "/usr/include/bits/libc-header-start.h"


























#line 30 "/usr/include/bits/libc-header-start.h"

#line 32 "/usr/include/bits/libc-header-start.h"

#line 1 "/usr/include/features.h"
















#line 34 "/usr/include/bits/libc-header-start.h"



#line 43 "/usr/include/bits/libc-header-start.h"























#line 84 "/usr/include/bits/libc-header-start.h"





#line 101 "/usr/include/bits/libc-header-start.h"


#line 27 "/usr/include/complex.h"


#line 1 "/usr/include/bits/mathdef.h"
















#line 30 "/usr/include/complex.h"


#line 1 "/usr/include/bits/floatn.h"

















#line 33 "/usr/include/complex.h"






#line 42 "/usr/include/complex.h"

#line 44 "/usr/include/complex.h"




#line 49 "/usr/include/complex.h"



#line 54 "/usr/include/complex.h"

#line 61 "/usr/include/complex.h"

#line 65 "/usr/include/complex.h"

#line 69 "/usr/include/complex.h"

#line 73 "/usr/include/complex.h"

#line 77 "/usr/include/complex.h"

#line 81 "/usr/include/complex.h"

#line 85 "/usr/include/complex.h"

#line 89 "/usr/include/complex.h"






#line 100 "/usr/include/complex.h"

#line 1 "/usr/include/bits/cmathcalls.h"










































#line 46 "/usr/include/bits/cmathcalls.h"

#line 50 "/usr/include/bits/cmathcalls.h"





extern _Complex double cacos (_Complex double __z) ;   extern _Complex double __cacos (_Complex double __z) ;

extern _Complex double casin (_Complex double __z) ;   extern _Complex double __casin (_Complex double __z) ;

extern _Complex double catan (_Complex double __z) ;   extern _Complex double __catan (_Complex double __z) ;


extern _Complex double ccos (_Complex double __z) ;   extern _Complex double __ccos (_Complex double __z) ;

extern _Complex double csin (_Complex double __z) ;   extern _Complex double __csin (_Complex double __z) ;

extern _Complex double ctan (_Complex double __z) ;   extern _Complex double __ctan (_Complex double __z) ;





extern _Complex double cacosh (_Complex double __z) ;   extern _Complex double __cacosh (_Complex double __z) ;

extern _Complex double casinh (_Complex double __z) ;   extern _Complex double __casinh (_Complex double __z) ;

extern _Complex double catanh (_Complex double __z) ;   extern _Complex double __catanh (_Complex double __z) ;


extern _Complex double ccosh (_Complex double __z) ;   extern _Complex double __ccosh (_Complex double __z) ;

extern _Complex double csinh (_Complex double __z) ;   extern _Complex double __csinh (_Complex double __z) ;

extern _Complex double ctanh (_Complex double __z) ;   extern _Complex double __ctanh (_Complex double __z) ;





extern _Complex double cexp (_Complex double __z) ;   extern _Complex double __cexp (_Complex double __z) ;


extern _Complex double clog (_Complex double __z) ;   extern _Complex double __clog (_Complex double __z) ;

#line 95 "/usr/include/bits/cmathcalls.h"


extern _Complex double clog10 (_Complex double __z) ;   extern _Complex double __clog10 (_Complex double __z) ;
#line 99 "/usr/include/bits/cmathcalls.h"




extern _Complex double cpow (_Complex double __x, _Complex double __y) ;   extern _Complex double __cpow (_Complex double __x, _Complex double __y) ;


extern _Complex double csqrt (_Complex double __z) ;   extern _Complex double __csqrt (_Complex double __z) ;





extern double cabs (_Complex double __z) ;   extern double __cabs (_Complex double __z) ;


extern double carg (_Complex double __z) ;   extern double __carg (_Complex double __z) ;


extern _Complex double conj (_Complex double __z) ;   extern _Complex double __conj (_Complex double __z) ;


extern _Complex double cproj (_Complex double __z) ;   extern _Complex double __cproj (_Complex double __z) ;





extern double cimag (_Complex double __z) ;   extern double __cimag (_Complex double __z) ;


extern double creal (_Complex double __z) ;   extern double __creal (_Complex double __z) ;
#line 104 "/usr/include/complex.h"
#line 106 "/usr/include/complex.h"


#line 1 "/usr/include/bits/cmathcalls.h"










































#line 46 "/usr/include/bits/cmathcalls.h"

#line 50 "/usr/include/bits/cmathcalls.h"





extern _Complex float cacosf (_Complex float __z) ;   extern _Complex float __cacosf (_Complex float __z) ;

extern _Complex float casinf (_Complex float __z) ;   extern _Complex float __casinf (_Complex float __z) ;

extern _Complex float catanf (_Complex float __z) ;   extern _Complex float __catanf (_Complex float __z) ;


extern _Complex float ccosf (_Complex float __z) ;   extern _Complex float __ccosf (_Complex float __z) ;

extern _Complex float csinf (_Complex float __z) ;   extern _Complex float __csinf (_Complex float __z) ;

extern _Complex float ctanf (_Complex float __z) ;   extern _Complex float __ctanf (_Complex float __z) ;





extern _Complex float cacoshf (_Complex float __z) ;   extern _Complex float __cacoshf (_Complex float __z) ;

extern _Complex float casinhf (_Complex float __z) ;   extern _Complex float __casinhf (_Complex float __z) ;

extern _Complex float catanhf (_Complex float __z) ;   extern _Complex float __catanhf (_Complex float __z) ;


extern _Complex float ccoshf (_Complex float __z) ;   extern _Complex float __ccoshf (_Complex float __z) ;

extern _Complex float csinhf (_Complex float __z) ;   extern _Complex float __csinhf (_Complex float __z) ;

extern _Complex float ctanhf (_Complex float __z) ;   extern _Complex float __ctanhf (_Complex float __z) ;





extern _Complex float cexpf (_Complex float __z) ;   extern _Complex float __cexpf (_Complex float __z) ;


extern _Complex float clogf (_Complex float __z) ;   extern _Complex float __clogf (_Complex float __z) ;

#line 95 "/usr/include/bits/cmathcalls.h"


extern _Complex float clog10f (_Complex float __z) ;   extern _Complex float __clog10f (_Complex float __z) ;
#line 99 "/usr/include/bits/cmathcalls.h"




extern _Complex float cpowf (_Complex float __x, _Complex float __y) ;   extern _Complex float __cpowf (_Complex float __x, _Complex float __y) ;


extern _Complex float csqrtf (_Complex float __z) ;   extern _Complex float __csqrtf (_Complex float __z) ;





extern float cabsf (_Complex float __z) ;   extern float __cabsf (_Complex float __z) ;


extern float cargf (_Complex float __z) ;   extern float __cargf (_Complex float __z) ;


extern _Complex float conjf (_Complex float __z) ;   extern _Complex float __conjf (_Complex float __z) ;


extern _Complex float cprojf (_Complex float __z) ;   extern _Complex float __cprojf (_Complex float __z) ;





extern float cimagf (_Complex float __z) ;   extern float __cimagf (_Complex float __z) ;


extern float crealf (_Complex float __z) ;   extern float __crealf (_Complex float __z) ;
#line 111 "/usr/include/complex.h"
#line 113 "/usr/include/complex.h"



#line 127 "/usr/include/complex.h"

#line 1 "/usr/include/bits/cmathcalls.h"










































#line 46 "/usr/include/bits/cmathcalls.h"

#line 50 "/usr/include/bits/cmathcalls.h"





extern _Complex long double cacosl (_Complex long double __z) ;   extern _Complex long double __cacosl (_Complex long double __z) ;

extern _Complex long double casinl (_Complex long double __z) ;   extern _Complex long double __casinl (_Complex long double __z) ;

extern _Complex long double catanl (_Complex long double __z) ;   extern _Complex long double __catanl (_Complex long double __z) ;


extern _Complex long double ccosl (_Complex long double __z) ;   extern _Complex long double __ccosl (_Complex long double __z) ;

extern _Complex long double csinl (_Complex long double __z) ;   extern _Complex long double __csinl (_Complex long double __z) ;

extern _Complex long double ctanl (_Complex long double __z) ;   extern _Complex long double __ctanl (_Complex long double __z) ;





extern _Complex long double cacoshl (_Complex long double __z) ;   extern _Complex long double __cacoshl (_Complex long double __z) ;

extern _Complex long double casinhl (_Complex long double __z) ;   extern _Complex long double __casinhl (_Complex long double __z) ;

extern _Complex long double catanhl (_Complex long double __z) ;   extern _Complex long double __catanhl (_Complex long double __z) ;


extern _Complex long double ccoshl (_Complex long double __z) ;   extern _Complex long double __ccoshl (_Complex long double __z) ;

extern _Complex long double csinhl (_Complex long double __z) ;   extern _Complex long double __csinhl (_Complex long double __z) ;

extern _Complex long double ctanhl (_Complex long double __z) ;   extern _Complex long double __ctanhl (_Complex long double __z) ;





extern _Complex long double cexpl (_Complex long double __z) ;   extern _Complex long double __cexpl (_Complex long double __z) ;


extern _Complex long double clogl (_Complex long double __z) ;   extern _Complex long double __clogl (_Complex long double __z) ;

#line 95 "/usr/include/bits/cmathcalls.h"


extern _Complex long double clog10l (_Complex long double __z) ;   extern _Complex long double __clog10l (_Complex long double __z) ;
#line 99 "/usr/include/bits/cmathcalls.h"




extern _Complex long double cpowl (_Complex long double __x, _Complex long double __y) ;   extern _Complex long double __cpowl (_Complex long double __x, _Complex long double __y) ;


extern _Complex long double csqrtl (_Complex long double __z) ;   extern _Complex long double __csqrtl (_Complex long double __z) ;





extern long double cabsl (_Complex long double __z) ;   extern long double __cabsl (_Complex long double __z) ;


extern long double cargl (_Complex long double __z) ;   extern long double __cargl (_Complex long double __z) ;


extern _Complex long double conjl (_Complex long double __z) ;   extern _Complex long double __conjl (_Complex long double __z) ;


extern _Complex long double cprojl (_Complex long double __z) ;   extern _Complex long double __cprojl (_Complex long double __z) ;





extern long double cimagl (_Complex long double __z) ;   extern long double __cimagl (_Complex long double __z) ;


extern long double creall (_Complex long double __z) ;   extern long double __creall (_Complex long double __z) ;
#line 131 "/usr/include/complex.h"
#line 141 "/usr/include/complex.h"

#line 152 "/usr/include/complex.h"

#line 1 "/usr/include/bits/cmathcalls.h"










































#line 46 "/usr/include/bits/cmathcalls.h"

#line 50 "/usr/include/bits/cmathcalls.h"





extern _Complex float cacosf32 (_Complex float __z) ;   extern _Complex float __cacosf32 (_Complex float __z) ;

extern _Complex float casinf32 (_Complex float __z) ;   extern _Complex float __casinf32 (_Complex float __z) ;

extern _Complex float catanf32 (_Complex float __z) ;   extern _Complex float __catanf32 (_Complex float __z) ;


extern _Complex float ccosf32 (_Complex float __z) ;   extern _Complex float __ccosf32 (_Complex float __z) ;

extern _Complex float csinf32 (_Complex float __z) ;   extern _Complex float __csinf32 (_Complex float __z) ;

extern _Complex float ctanf32 (_Complex float __z) ;   extern _Complex float __ctanf32 (_Complex float __z) ;





extern _Complex float cacoshf32 (_Complex float __z) ;   extern _Complex float __cacoshf32 (_Complex float __z) ;

extern _Complex float casinhf32 (_Complex float __z) ;   extern _Complex float __casinhf32 (_Complex float __z) ;

extern _Complex float catanhf32 (_Complex float __z) ;   extern _Complex float __catanhf32 (_Complex float __z) ;


extern _Complex float ccoshf32 (_Complex float __z) ;   extern _Complex float __ccoshf32 (_Complex float __z) ;

extern _Complex float csinhf32 (_Complex float __z) ;   extern _Complex float __csinhf32 (_Complex float __z) ;

extern _Complex float ctanhf32 (_Complex float __z) ;   extern _Complex float __ctanhf32 (_Complex float __z) ;





extern _Complex float cexpf32 (_Complex float __z) ;   extern _Complex float __cexpf32 (_Complex float __z) ;


extern _Complex float clogf32 (_Complex float __z) ;   extern _Complex float __clogf32 (_Complex float __z) ;

#line 95 "/usr/include/bits/cmathcalls.h"


extern _Complex float clog10f32 (_Complex float __z) ;   extern _Complex float __clog10f32 (_Complex float __z) ;
#line 99 "/usr/include/bits/cmathcalls.h"




extern _Complex float cpowf32 (_Complex float __x, _Complex float __y) ;   extern _Complex float __cpowf32 (_Complex float __x, _Complex float __y) ;


extern _Complex float csqrtf32 (_Complex float __z) ;   extern _Complex float __csqrtf32 (_Complex float __z) ;





extern _Float32 cabsf32 (_Complex float __z) ;   extern _Float32 __cabsf32 (_Complex float __z) ;


extern _Float32 cargf32 (_Complex float __z) ;   extern _Float32 __cargf32 (_Complex float __z) ;


extern _Complex float conjf32 (_Complex float __z) ;   extern _Complex float __conjf32 (_Complex float __z) ;


extern _Complex float cprojf32 (_Complex float __z) ;   extern _Complex float __cprojf32 (_Complex float __z) ;





extern _Float32 cimagf32 (_Complex float __z) ;   extern _Float32 __cimagf32 (_Complex float __z) ;


extern _Float32 crealf32 (_Complex float __z) ;   extern _Float32 __crealf32 (_Complex float __z) ;
#line 159 "/usr/include/complex.h"
#line 163 "/usr/include/complex.h"

#line 1 "/usr/include/bits/cmathcalls.h"










































#line 46 "/usr/include/bits/cmathcalls.h"

#line 50 "/usr/include/bits/cmathcalls.h"





extern _Complex double cacosf64 (_Complex double __z) ;   extern _Complex double __cacosf64 (_Complex double __z) ;

extern _Complex double casinf64 (_Complex double __z) ;   extern _Complex double __casinf64 (_Complex double __z) ;

extern _Complex double catanf64 (_Complex double __z) ;   extern _Complex double __catanf64 (_Complex double __z) ;


extern _Complex double ccosf64 (_Complex double __z) ;   extern _Complex double __ccosf64 (_Complex double __z) ;

extern _Complex double csinf64 (_Complex double __z) ;   extern _Complex double __csinf64 (_Complex double __z) ;

extern _Complex double ctanf64 (_Complex double __z) ;   extern _Complex double __ctanf64 (_Complex double __z) ;





extern _Complex double cacoshf64 (_Complex double __z) ;   extern _Complex double __cacoshf64 (_Complex double __z) ;

extern _Complex double casinhf64 (_Complex double __z) ;   extern _Complex double __casinhf64 (_Complex double __z) ;

extern _Complex double catanhf64 (_Complex double __z) ;   extern _Complex double __catanhf64 (_Complex double __z) ;


extern _Complex double ccoshf64 (_Complex double __z) ;   extern _Complex double __ccoshf64 (_Complex double __z) ;

extern _Complex double csinhf64 (_Complex double __z) ;   extern _Complex double __csinhf64 (_Complex double __z) ;

extern _Complex double ctanhf64 (_Complex double __z) ;   extern _Complex double __ctanhf64 (_Complex double __z) ;





extern _Complex double cexpf64 (_Complex double __z) ;   extern _Complex double __cexpf64 (_Complex double __z) ;


extern _Complex double clogf64 (_Complex double __z) ;   extern _Complex double __clogf64 (_Complex double __z) ;

#line 95 "/usr/include/bits/cmathcalls.h"


extern _Complex double clog10f64 (_Complex double __z) ;   extern _Complex double __clog10f64 (_Complex double __z) ;
#line 99 "/usr/include/bits/cmathcalls.h"




extern _Complex double cpowf64 (_Complex double __x, _Complex double __y) ;   extern _Complex double __cpowf64 (_Complex double __x, _Complex double __y) ;


extern _Complex double csqrtf64 (_Complex double __z) ;   extern _Complex double __csqrtf64 (_Complex double __z) ;





extern _Float64 cabsf64 (_Complex double __z) ;   extern _Float64 __cabsf64 (_Complex double __z) ;


extern _Float64 cargf64 (_Complex double __z) ;   extern _Float64 __cargf64 (_Complex double __z) ;


extern _Complex double conjf64 (_Complex double __z) ;   extern _Complex double __conjf64 (_Complex double __z) ;


extern _Complex double cprojf64 (_Complex double __z) ;   extern _Complex double __cprojf64 (_Complex double __z) ;





extern _Float64 cimagf64 (_Complex double __z) ;   extern _Float64 __cimagf64 (_Complex double __z) ;


extern _Float64 crealf64 (_Complex double __z) ;   extern _Float64 __crealf64 (_Complex double __z) ;
#line 170 "/usr/include/complex.h"
#line 174 "/usr/include/complex.h"

#line 185 "/usr/include/complex.h"

#line 1 "/usr/include/bits/cmathcalls.h"










































#line 46 "/usr/include/bits/cmathcalls.h"

#line 50 "/usr/include/bits/cmathcalls.h"





extern _Complex double cacosf32x (_Complex double __z) ;   extern _Complex double __cacosf32x (_Complex double __z) ;

extern _Complex double casinf32x (_Complex double __z) ;   extern _Complex double __casinf32x (_Complex double __z) ;

extern _Complex double catanf32x (_Complex double __z) ;   extern _Complex double __catanf32x (_Complex double __z) ;


extern _Complex double ccosf32x (_Complex double __z) ;   extern _Complex double __ccosf32x (_Complex double __z) ;

extern _Complex double csinf32x (_Complex double __z) ;   extern _Complex double __csinf32x (_Complex double __z) ;

extern _Complex double ctanf32x (_Complex double __z) ;   extern _Complex double __ctanf32x (_Complex double __z) ;





extern _Complex double cacoshf32x (_Complex double __z) ;   extern _Complex double __cacoshf32x (_Complex double __z) ;

extern _Complex double casinhf32x (_Complex double __z) ;   extern _Complex double __casinhf32x (_Complex double __z) ;

extern _Complex double catanhf32x (_Complex double __z) ;   extern _Complex double __catanhf32x (_Complex double __z) ;


extern _Complex double ccoshf32x (_Complex double __z) ;   extern _Complex double __ccoshf32x (_Complex double __z) ;

extern _Complex double csinhf32x (_Complex double __z) ;   extern _Complex double __csinhf32x (_Complex double __z) ;

extern _Complex double ctanhf32x (_Complex double __z) ;   extern _Complex double __ctanhf32x (_Complex double __z) ;





extern _Complex double cexpf32x (_Complex double __z) ;   extern _Complex double __cexpf32x (_Complex double __z) ;


extern _Complex double clogf32x (_Complex double __z) ;   extern _Complex double __clogf32x (_Complex double __z) ;

#line 95 "/usr/include/bits/cmathcalls.h"


extern _Complex double clog10f32x (_Complex double __z) ;   extern _Complex double __clog10f32x (_Complex double __z) ;
#line 99 "/usr/include/bits/cmathcalls.h"




extern _Complex double cpowf32x (_Complex double __x, _Complex double __y) ;   extern _Complex double __cpowf32x (_Complex double __x, _Complex double __y) ;


extern _Complex double csqrtf32x (_Complex double __z) ;   extern _Complex double __csqrtf32x (_Complex double __z) ;





extern _Float32x cabsf32x (_Complex double __z) ;   extern _Float32x __cabsf32x (_Complex double __z) ;


extern _Float32x cargf32x (_Complex double __z) ;   extern _Float32x __cargf32x (_Complex double __z) ;


extern _Complex double conjf32x (_Complex double __z) ;   extern _Complex double __conjf32x (_Complex double __z) ;


extern _Complex double cprojf32x (_Complex double __z) ;   extern _Complex double __cprojf32x (_Complex double __z) ;





extern _Float32x cimagf32x (_Complex double __z) ;   extern _Float32x __cimagf32x (_Complex double __z) ;


extern _Float32x crealf32x (_Complex double __z) ;   extern _Float32x __crealf32x (_Complex double __z) ;
#line 192 "/usr/include/complex.h"
#line 196 "/usr/include/complex.h"

#line 1 "/usr/include/bits/cmathcalls.h"










































#line 46 "/usr/include/bits/cmathcalls.h"

#line 50 "/usr/include/bits/cmathcalls.h"





extern _Complex long double cacosf64x (_Complex long double __z) ;   extern _Complex long double __cacosf64x (_Complex long double __z) ;

extern _Complex long double casinf64x (_Complex long double __z) ;   extern _Complex long double __casinf64x (_Complex long double __z) ;

extern _Complex long double catanf64x (_Complex long double __z) ;   extern _Complex long double __catanf64x (_Complex long double __z) ;


extern _Complex long double ccosf64x (_Complex long double __z) ;   extern _Complex long double __ccosf64x (_Complex long double __z) ;

extern _Complex long double csinf64x (_Complex long double __z) ;   extern _Complex long double __csinf64x (_Complex long double __z) ;

extern _Complex long double ctanf64x (_Complex long double __z) ;   extern _Complex long double __ctanf64x (_Complex long double __z) ;





extern _Complex long double cacoshf64x (_Complex long double __z) ;   extern _Complex long double __cacoshf64x (_Complex long double __z) ;

extern _Complex long double casinhf64x (_Complex long double __z) ;   extern _Complex long double __casinhf64x (_Complex long double __z) ;

extern _Complex long double catanhf64x (_Complex long double __z) ;   extern _Complex long double __catanhf64x (_Complex long double __z) ;


extern _Complex long double ccoshf64x (_Complex long double __z) ;   extern _Complex long double __ccoshf64x (_Complex long double __z) ;

extern _Complex long double csinhf64x (_Complex long double __z) ;   extern _Complex long double __csinhf64x (_Complex long double __z) ;

extern _Complex long double ctanhf64x (_Complex long double __z) ;   extern _Complex long double __ctanhf64x (_Complex long double __z) ;





extern _Complex long double cexpf64x (_Complex long double __z) ;   extern _Complex long double __cexpf64x (_Complex long double __z) ;


extern _Complex long double clogf64x (_Complex long double __z) ;   extern _Complex long double __clogf64x (_Complex long double __z) ;

#line 95 "/usr/include/bits/cmathcalls.h"


extern _Complex long double clog10f64x (_Complex long double __z) ;   extern _Complex long double __clog10f64x (_Complex long double __z) ;
#line 99 "/usr/include/bits/cmathcalls.h"




extern _Complex long double cpowf64x (_Complex long double __x, _Complex long double __y) ;   extern _Complex long double __cpowf64x (_Complex long double __x, _Complex long double __y) ;


extern _Complex long double csqrtf64x (_Complex long double __z) ;   extern _Complex long double __csqrtf64x (_Complex long double __z) ;





extern _Float64x cabsf64x (_Complex long double __z) ;   extern _Float64x __cabsf64x (_Complex long double __z) ;


extern _Float64x cargf64x (_Complex long double __z) ;   extern _Float64x __cargf64x (_Complex long double __z) ;


extern _Complex long double conjf64x (_Complex long double __z) ;   extern _Complex long double __conjf64x (_Complex long double __z) ;


extern _Complex long double cprojf64x (_Complex long double __z) ;   extern _Complex long double __cprojf64x (_Complex long double __z) ;





extern _Float64x cimagf64x (_Complex long double __z) ;   extern _Float64x __cimagf64x (_Complex long double __z) ;


extern _Float64x crealf64x (_Complex long double __z) ;   extern _Float64x __crealf64x (_Complex long double __z) ;
#line 203 "/usr/include/complex.h"
#line 207 "/usr/include/complex.h"

#line 218 "/usr/include/complex.h"

#line 223 "/usr/include/complex.h"


#line 11 "all.nc"
#line 1 "/usr/include/cpio.h"



















#line 22 "/usr/include/cpio.h"
























#line 47 "/usr/include/cpio.h"



#line 59 "/usr/include/cpio.h"

#line 63 "/usr/include/cpio.h"

#line 72 "/usr/include/cpio.h"
#line 12 "all.nc"
#line 1 "/usr/include/crypt.h"


















#line 21 "/usr/include/crypt.h"

#line 1 "/usr/include/sys/cdefs.h"

















#line 23 "/usr/include/crypt.h"









#line 33 "/usr/include/crypt.h"



#line 37 "/usr/include/crypt.h"







#line 45 "/usr/include/crypt.h"


















extern char *crypt (const char *__phrase, const char *__setting)
;



#line 70 "/usr/include/crypt.h"


struct crypt_data
{
  


  char output[384];

  






  char setting[384];

  


  char input[512];

  




  char reserved[767];

  




  char initialized;

  


  char internal[30720];
};




extern char *crypt_r (const char *__phrase, const char *__setting,
                      struct crypt_data *__restrict __data)
;









extern char *crypt_rn (const char *__phrase, const char *__setting,
                       void *__data, int __size)
;











extern char *crypt_ra (const char *__phrase, const char *__setting,
                       void **__data, int *__size)
;






















extern char *crypt_gensalt (const char *__prefix, unsigned long __count,
                            const char *__rbytes, int __nrbytes)
;








extern char *crypt_gensalt_rn (const char *__prefix, unsigned long __count,
                               const char *__rbytes, int __nrbytes,
                               char *__output, int __output_size)
;





#line 197 "/usr/include/crypt.h"




extern char *crypt_gensalt_ra (const char *__prefix, unsigned long __count,
                               const char *__rbytes, int __nrbytes)
;





extern int crypt_checksalt (const char *__setting);



#line 218 "/usr/include/crypt.h"







extern const char *crypt_preferred_method (void);




#line 232 "/usr/include/crypt.h"



#line 237 "/usr/include/crypt.h"


#line 241 "/usr/include/crypt.h"


#line 244 "/usr/include/crypt.h"


#line 247 "/usr/include/crypt.h"


#line 13 "all.nc"
#line 1 "/usr/include/ctype.h"




















#line 14 "all.nc"
#line 1 "/usr/include/curses.h"





































#line 40 "/usr/include/curses.h"






























#line 72 "/usr/include/curses.h"


#line 77 "/usr/include/curses.h"


#line 81 "/usr/include/curses.h"




#line 86 "/usr/include/curses.h"




#line 1 "/usr/include/ncurses_dll.h"






























#line 33 "/usr/include/ncurses_dll.h"




#line 63 "/usr/include/ncurses_dll.h"





#line 69 "/usr/include/ncurses_dll.h"

#line 75 "/usr/include/ncurses_dll.h"

#line 77 "/usr/include/ncurses_dll.h"

#line 80 "/usr/include/ncurses_dll.h"




#line 102 "/usr/include/ncurses_dll.h"
#line 91 "/usr/include/curses.h"




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
#line 97 "/usr/include/curses.h"
#line 98 "/usr/include/curses.h"

#line 107 "/usr/include/curses.h"




#line 114 "/usr/include/curses.h"





#line 122 "/usr/include/curses.h"





#line 129 "/usr/include/curses.h"

#line 132 "/usr/include/curses.h"










#line 144 "/usr/include/curses.h"

#line 147 "/usr/include/curses.h"




#line 157 "/usr/include/curses.h"






#line 166 "/usr/include/curses.h"




#line 173 "/usr/include/curses.h"





#line 186 "/usr/include/curses.h"




#line 194 "/usr/include/curses.h"




#line 200 "/usr/include/curses.h"




#line 206 "/usr/include/curses.h"




#line 212 "/usr/include/curses.h"





#line 219 "/usr/include/curses.h"





#line 226 "/usr/include/curses.h"






#line 234 "/usr/include/curses.h"

#line 239 "/usr/include/curses.h"
typedef uint32_t chtype;
typedef uint32_t mmask_t;
#line 242 "/usr/include/curses.h"




#line 1 "/usr/include/stdio.h"






















#line 247 "/usr/include/curses.h"








#line 262 "/usr/include/curses.h"

#line 1 "/usr/lib/clang/21/include/stdarg.h"





















#line 37 "/usr/lib/clang/21/include/stdarg.h"



#line 1 "/usr/lib/clang/21/include/__stdarg_header_macro.h"








#line 44 "/usr/lib/clang/21/include/stdarg.h"
#line 45 "/usr/lib/clang/21/include/stdarg.h"

#line 1 "/usr/lib/clang/21/include/__stdarg___gnuc_va_list.h"








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
#line 264 "/usr/include/curses.h"
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
#line 266 "/usr/include/curses.h"
#line 267 "/usr/include/curses.h"













#line 282 "/usr/include/curses.h"

#line 285 "/usr/include/curses.h"

typedef unsigned char NCURSES_BOOL;

#line 294 "/usr/include/curses.h"

#line 1 "/usr/lib/clang/21/include/stdbool.h"









#line 12 "/usr/lib/clang/21/include/stdbool.h"

#line 14 "/usr/lib/clang/21/include/stdbool.h"

#line 18 "/usr/lib/clang/21/include/stdbool.h"

#line 37 "/usr/lib/clang/21/include/stdbool.h"
#line 297 "/usr/include/curses.h"

#line 304 "/usr/include/curses.h"

#line 306 "/usr/include/curses.h"

#line 313 "/usr/include/curses.h"

#line 315 "/usr/include/curses.h"





#line 337 "/usr/include/curses.h"

#line 341 "/usr/include/curses.h"


#line 351 "/usr/include/curses.h"



#line 358 "/usr/include/curses.h"
extern  chtype acs_map[];
#line 360 "/usr/include/curses.h"

#line 362 "/usr/include/curses.h"


#line 382 "/usr/include/curses.h"

#line 390 "/usr/include/curses.h"





#line 402 "/usr/include/curses.h"







#line 420 "/usr/include/curses.h"

#line 423 "/usr/include/curses.h"

#line 426 "/usr/include/curses.h"


#line 435 "/usr/include/curses.h"





#line 441 "/usr/include/curses.h"





#line 447 "/usr/include/curses.h"

#line 453 "/usr/include/curses.h"
typedef struct screen  SCREEN;
#line 455 "/usr/include/curses.h"

typedef struct _win_st WINDOW;

typedef	chtype	attr_t;		

#line 461 "/usr/include/curses.h"

#line 468 "/usr/include/curses.h"

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


#line 471 "/usr/include/curses.h"
#line 472 "/usr/include/curses.h"

#line 476 "/usr/include/curses.h"

#line 480 "/usr/include/curses.h"







#line 488 "/usr/include/curses.h"
typedef struct
{
    attr_t	attr;
    wchar_t	chars[5];
#line 495 "/usr/include/curses.h"
    int		ext_color;	
#line 500 "/usr/include/curses.h"
}
cchar_t;

#line 504 "/usr/include/curses.h"

#line 563 "/usr/include/curses.h"








#line 574 "/usr/include/curses.h"





#line 586 "/usr/include/curses.h"

#line 594 "/usr/include/curses.h"

#line 598 "/usr/include/curses.h"

#line 602 "/usr/include/curses.h"

#line 609 "/usr/include/curses.h"





typedef int (*NCURSES_OUTC)(int);








extern  int  addch (const chtype);			
extern  int  addchnstr (const chtype *, int);		
extern  int  addchstr (const chtype *);			
extern  int  addnstr (const char *, int);			
extern  int  addstr (const char *);			
extern  int  attroff (int);			
extern  int  attron (int);			
extern  int  attrset (int);			
extern  int  attr_get (attr_t *, short *, void *);	
extern  int  attr_off (attr_t, void *);			
extern  int  attr_on (attr_t, void *);			
extern  int  attr_set (attr_t, short, void *);		
extern  int  baudrate (void);				
extern  int  beep  (void);				
extern  int  bkgd (chtype);				
extern  void  bkgdset (chtype);				
extern  int  border (chtype,chtype,chtype,chtype,chtype,chtype,chtype,chtype);	
extern  int  box (WINDOW *, chtype, chtype);		
extern  _Bool  can_change_color (void);			
extern  int  cbreak (void);				
extern  int  chgat (int, attr_t, short, const void *);	
extern  int  clear (void);				
extern  int  clearok (WINDOW *,_Bool);			
extern  int  clrtobot (void);				
extern  int  clrtoeol (void);				
extern  int  color_content (short,short*,short*,short*);	
extern  int  color_set (short,void*);			
extern  int  COLOR_PAIR (int);				
extern  int  copywin (const WINDOW*,WINDOW*,int,int,int,int,int,int,int);	
extern  int  curs_set (int);				
extern  int  def_prog_mode (void);			
extern  int  def_shell_mode (void);			
extern  int  delay_output (int);				
extern  int  delch (void);				
extern  void  delscreen (SCREEN *);			
extern  int  delwin (WINDOW *);				
extern  int  deleteln (void);				
extern  WINDOW *  derwin (WINDOW *,int,int,int,int);	
extern  int  doupdate (void);				
extern  WINDOW *  dupwin (WINDOW *);			
extern  int  echo (void);					
extern  int  echochar (const chtype);			
extern  int  erase (void);				
extern  int  endwin (void);				
extern  char  erasechar (void);				
extern  void  filter (void);				
extern  int  flash (void);				
extern  int  flushinp (void);				
extern  chtype  getbkgd (WINDOW *);			
extern  int  getch (void);				
extern  int  getnstr (char *, int);			
extern  int  getstr (char *);				
extern  WINDOW *  getwin (FILE *);			
extern  int  halfdelay (int);				
extern  _Bool  has_colors (void);				
extern  _Bool  has_ic (void);				
extern  _Bool  has_il (void);				
extern  int  hline (chtype, int);				
extern  void  idcok (WINDOW *, _Bool);			
extern  int  idlok (WINDOW *, _Bool);			
extern  void  immedok (WINDOW *, _Bool);			
extern  chtype  inch (void);				
extern  int  inchnstr (chtype *, int);			
extern  int  inchstr (chtype *);				
extern  WINDOW *  initscr (void);				
extern  int  init_color (short,short,short,short);	
extern  int  init_pair (short,short,short);		
extern  int  innstr (char *, int);			
extern  int  insch (chtype);				
extern  int  insdelln (int);				
extern  int  insertln (void);				
extern  int  insnstr (const char *, int);			
extern  int  insstr (const char *);			
extern  int  instr (char *);				
extern  int  intrflush (WINDOW *,_Bool);			
extern  _Bool  isendwin (void);				
extern  _Bool  is_linetouched (WINDOW *,int);		
extern  _Bool  is_wintouched (WINDOW *);			
extern  const char *  keyname (int);		
extern  int  keypad (WINDOW *,_Bool);			
extern  char  killchar (void);				
extern  int  leaveok (WINDOW *,_Bool);			
extern  char *  longname (void);				
extern  int  meta (WINDOW *,_Bool);			
extern  int  move (int, int);				
extern  int  mvaddch (int, int, const chtype);		
extern  int  mvaddchnstr (int, int, const chtype *, int);	
extern  int  mvaddchstr (int, int, const chtype *);	
extern  int  mvaddnstr (int, int, const char *, int);	
extern  int  mvaddstr (int, int, const char *);		
extern  int  mvchgat (int, int, int, attr_t, short, const void *);	
extern  int  mvcur (int,int,int,int);			
extern  int  mvdelch (int, int);				
extern  int  mvderwin (WINDOW *, int, int);		
extern  int  mvgetch (int, int);				
extern  int  mvgetnstr (int, int, char *, int);		
extern  int  mvgetstr (int, int, char *);			
extern  int  mvhline (int, int, chtype, int);		
extern  chtype  mvinch (int, int);			
extern  int  mvinchnstr (int, int, chtype *, int);	
extern  int  mvinchstr (int, int, chtype *);		
extern  int  mvinnstr (int, int, char *, int);		
extern  int  mvinsch (int, int, chtype);			
extern  int  mvinsnstr (int, int, const char *, int);	
extern  int  mvinsstr (int, int, const char *);		
extern  int  mvinstr (int, int, char *);			
extern  int  mvprintw (int,int, const char *,...)		
		__attribute__((format(printf,3,4)));
extern  int  mvscanw (int,int, const char *,...)		
		;
extern  int  mvvline (int, int, chtype, int);		
extern  int  mvwaddch (WINDOW *, int, int, const chtype);	
extern  int  mvwaddchnstr (WINDOW *, int, int, const chtype *, int);
extern  int  mvwaddchstr (WINDOW *, int, int, const chtype *);	
extern  int  mvwaddnstr (WINDOW *, int, int, const char *, int);	
extern  int  mvwaddstr (WINDOW *, int, int, const char *);	
extern  int  mvwchgat (WINDOW *, int, int, int, attr_t, short, const void *);
extern  int  mvwdelch (WINDOW *, int, int);		
extern  int  mvwgetch (WINDOW *, int, int);		
extern  int  mvwgetnstr (WINDOW *, int, int, char *, int);	
extern  int  mvwgetstr (WINDOW *, int, int, char *);	
extern  int  mvwhline (WINDOW *, int, int, chtype, int);	
extern  int  mvwin (WINDOW *,int,int);			
extern  chtype  mvwinch (WINDOW *, int, int);			
extern  int  mvwinchnstr (WINDOW *, int, int, chtype *, int);	
extern  int  mvwinchstr (WINDOW *, int, int, chtype *);		
extern  int  mvwinnstr (WINDOW *, int, int, char *, int);		
extern  int  mvwinsch (WINDOW *, int, int, chtype);		
extern  int  mvwinsnstr (WINDOW *, int, int, const char *, int);	
extern  int  mvwinsstr (WINDOW *, int, int, const char *);	
extern  int  mvwinstr (WINDOW *, int, int, char *);		
extern  int  mvwprintw (WINDOW*,int,int, const char *,...)	
		__attribute__((format(printf,4,5)));
extern  int  mvwscanw (WINDOW *,int,int, const char *,...)	
		;
extern  int  mvwvline (WINDOW *,int, int, chtype, int);	
extern  int  napms (int);					
extern  WINDOW *  newpad (int,int);			
extern  SCREEN *  newterm (const char *,FILE *,FILE *);	
extern  WINDOW *  newwin (int,int,int,int);		
extern  int  nl (void);					
extern  int  nocbreak (void);				
extern  int  nodelay (WINDOW *,_Bool);			
extern  int  noecho (void);				
extern  int  nonl (void);					
extern  void  noqiflush (void);				
extern  int  noraw (void);				
extern  int  notimeout (WINDOW *,_Bool);			
extern  int  overlay (const WINDOW*,WINDOW *);		
extern  int  overwrite (const WINDOW*,WINDOW *);		
extern  int  pair_content (short,short*,short*);		
extern  int  PAIR_NUMBER (int);				
extern  int  pechochar (WINDOW *, const chtype);		
extern  int  pnoutrefresh (WINDOW*,int,int,int,int,int,int);
extern  int  prefresh (WINDOW *,int,int,int,int,int,int);	
extern  int  printw (const char *,...)			
		__attribute__((format(printf,1,2)));
extern  int  putwin (WINDOW *, FILE *);			
extern  void  qiflush (void);				
extern  int  raw (void);					
extern  int  redrawwin (WINDOW *);			
extern  int  refresh (void);				
extern  int  resetty (void);				
extern  int  reset_prog_mode (void);			
extern  int  reset_shell_mode (void);			
extern  int  ripoffline (int, int (*)(WINDOW *, int));	
extern  int  savetty (void);				
extern  int  scanw (const char *,...)			
		;
extern  int  scr_dump (const char *);			
extern  int  scr_init (const char *);			
extern  int  scrl (int);					
extern  int  scroll (WINDOW *);				
extern  int  scrollok (WINDOW *,_Bool);			
extern  int  scr_restore (const char *);			
extern  int  scr_set (const char *);			
extern  int  setscrreg (int,int);				
extern  SCREEN *  set_term (SCREEN *);			
extern  int  slk_attroff (const chtype);			
extern  int  slk_attr_off (const attr_t, void *);		
extern  int  slk_attron (const chtype);			
extern  int  slk_attr_on (attr_t,void*);			
extern  int  slk_attrset (const chtype);			
extern  attr_t  slk_attr (void);				
extern  int  slk_attr_set (const attr_t,short,void*);	
extern  int  slk_clear (void);				
extern  int  slk_color (short);				
extern  int  slk_init (int);				
extern  char *  slk_label (int);				
extern  int  slk_noutrefresh (void);			
extern  int  slk_refresh (void);				
extern  int  slk_restore (void);				
extern  int  slk_set (int,const char *,int);		
extern  int  slk_touch (void);				
extern  int  standout (void);				
extern  int  standend (void);				
extern  int  start_color (void);				
extern  WINDOW *  subpad (WINDOW *, int, int, int, int);	
extern  WINDOW *  subwin (WINDOW *, int, int, int, int);	
extern  int  syncok (WINDOW *, _Bool);			
extern  chtype  termattrs (void);				
extern  char *  termname (void);				
extern  void  timeout (int);				
extern  int  touchline (WINDOW *, int, int);		
extern  int  touchwin (WINDOW *);				
extern  int  typeahead (int);				
extern  int  ungetch (int);				
extern  int  untouchwin (WINDOW *);			
extern  void  use_env (_Bool);				
extern  void  use_tioctl (_Bool);				
extern  int  vidattr (chtype);				
extern  int  vidputs (chtype, NCURSES_OUTC);		
extern  int  vline (chtype, int);				
extern  int  vwprintw (WINDOW *, const char *, va_list) __attribute__((deprecated))	
		__attribute__((format(printf,2,0)));
extern  int  vw_printw (WINDOW *, const char *, va_list)	
		__attribute__((format(printf,2,0)));
extern  int  vwscanw (WINDOW *, const char *, va_list) __attribute__((deprecated))	
		;
extern  int  vw_scanw (WINDOW *, const char *, va_list)	
		;
extern  int  waddch (WINDOW *, const chtype);		
extern  int  waddchnstr (WINDOW *,const chtype *,int);	
extern  int  waddchstr (WINDOW *,const chtype *);		
extern  int  waddnstr (WINDOW *,const char *,int);	
extern  int  waddstr (WINDOW *,const char *);		
extern  int  wattron (WINDOW *, int);			
extern  int  wattroff (WINDOW *, int);			
extern  int  wattrset (WINDOW *, int);			
extern  int  wattr_get (WINDOW *, attr_t *, short *, void *);	
extern  int  wattr_on (WINDOW *, attr_t, void *);		
extern  int  wattr_off (WINDOW *, attr_t, void *);	
extern  int  wattr_set (WINDOW *, attr_t, short, void *);	
extern  int  wbkgd (WINDOW *, chtype);			
extern  void  wbkgdset (WINDOW *,chtype);			
extern  int  wborder (WINDOW *,chtype,chtype,chtype,chtype,chtype,chtype,chtype,chtype);	
extern  int  wchgat (WINDOW *, int, attr_t, short, const void *);
extern  int  wclear (WINDOW *);				
extern  int  wclrtobot (WINDOW *);			
extern  int  wclrtoeol (WINDOW *);			
extern  int  wcolor_set (WINDOW*,short,void*);		
extern  void  wcursyncup (WINDOW *);			
extern  int  wdelch (WINDOW *);				
extern  int  wdeleteln (WINDOW *);			
extern  int  wechochar (WINDOW *, const chtype);		
extern  int  werase (WINDOW *);				
extern  int  wgetch (WINDOW *);				
extern  int  wgetnstr (WINDOW *,char *,int);		
extern  int  wgetstr (WINDOW *, char *);			
extern  int  whline (WINDOW *, chtype, int);		
extern  chtype  winch (WINDOW *);				
extern  int  winchnstr (WINDOW *, chtype *, int);		
extern  int  winchstr (WINDOW *, chtype *);		
extern  int  winnstr (WINDOW *, char *, int);		
extern  int  winsch (WINDOW *, chtype);			
extern  int  winsdelln (WINDOW *,int);			
extern  int  winsertln (WINDOW *);			
extern  int  winsnstr (WINDOW *, const char *,int);	
extern  int  winsstr (WINDOW *, const char *);		
extern  int  winstr (WINDOW *, char *);			
extern  int  wmove (WINDOW *,int,int);			
extern  int  wnoutrefresh (WINDOW *);			
extern  int  wprintw (WINDOW *, const char *,...)		
		__attribute__((format(printf,2,3)));
extern  int  wredrawln (WINDOW *,int,int);		
extern  int  wrefresh (WINDOW *);				
extern  int  wscanw (WINDOW *, const char *,...)		
		;
extern  int  wscrl (WINDOW *,int);			
extern  int  wsetscrreg (WINDOW *,int,int);		
extern  int  wstandout (WINDOW *);			
extern  int  wstandend (WINDOW *);			
extern  void  wsyncdown (WINDOW *);			
extern  void  wsyncup (WINDOW *);				
extern  void  wtimeout (WINDOW *,int);			
extern  int  wtouchln (WINDOW *,int,int,int);		
extern  int  wvline (WINDOW *,chtype,int);		




extern  int  tigetflag (const char *);			
extern  int  tigetnum (const char *);			
extern  char *  tigetstr (const char *);			
extern  int  putp (const char *);				

#line 910 "/usr/include/curses.h"
extern  char *  tparm (const char *, ...);		
#line 914 "/usr/include/curses.h"

extern  char *  tiparm (const char *, ...);		
extern  char *  tiparm_s (int, int, const char *, ...);	
extern  int  tiscan_s (int *, int *, const char *);	




extern  int  getattrs (const WINDOW *);			
extern  int  getcurx (const WINDOW *);			
extern  int  getcury (const WINDOW *);			
extern  int  getbegx (const WINDOW *);			
extern  int  getbegy (const WINDOW *);			
extern  int  getmaxx (const WINDOW *);			
extern  int  getmaxy (const WINDOW *);			
extern  int  getparx (const WINDOW *);			
extern  int  getpary (const WINDOW *);			




#line 938 "/usr/include/curses.h"




#line 945 "/usr/include/curses.h"
typedef int (*NCURSES_WINDOW_CB)(WINDOW *, void *);
typedef int (*NCURSES_SCREEN_CB)(SCREEN *, void *);
extern  int  alloc_pair (int, int);
extern  int  assume_default_colors (int, int);
extern  const char *  curses_version (void);
extern  int  define_key (const char *, int);
extern  int  extended_color_content(int, int *, int *, int *);
extern  int  extended_pair_content(int, int *, int *);
extern  int  extended_slk_color(int);
extern  int  find_pair (int, int);
extern  int  free_pair (int);
extern  int  get_escdelay (void);
extern  int  init_extended_color(int, int, int, int);
extern  int  init_extended_pair(int, int, int);
extern  int  is_cbreak(void);
extern  int  is_echo(void);
extern  int  is_nl(void);
extern  int  is_raw(void);
extern  _Bool  is_term_resized (int, int);
extern  int  key_defined (const char *);
extern  char *  keybound (int, int);
extern  int  keyok (int, _Bool);
extern  void  nofilter(void);
extern  void  reset_color_pairs (void);
extern  int  resize_term (int, int);
extern  int  resizeterm (int, int);
extern  int  set_escdelay (int);
extern  int  set_tabsize (int);
extern  int  use_default_colors (void);
extern  int  use_legacy_coding (int);
extern  int  use_screen (SCREEN *, NCURSES_SCREEN_CB, void *);
extern  int  use_window (WINDOW *, NCURSES_WINDOW_CB, void *);
extern  int  wresize (WINDOW *, int, int);

#line 982 "/usr/include/curses.h"
extern  int  use_extended_names (_Bool);
#line 984 "/usr/include/curses.h"





extern  WINDOW *  wgetparent (const WINDOW *);	
extern  _Bool  is_cleared (const WINDOW *);	
extern  _Bool  is_idcok (const WINDOW *);		
extern  _Bool  is_idlok (const WINDOW *);		
extern  _Bool  is_immedok (const WINDOW *);	
extern  _Bool  is_keypad (const WINDOW *);		
extern  _Bool  is_leaveok (const WINDOW *);	
extern  _Bool  is_nodelay (const WINDOW *);	
extern  _Bool  is_notimeout (const WINDOW *);	
extern  _Bool  is_pad (const WINDOW *);		
extern  _Bool  is_scrollok (const WINDOW *);	
extern  _Bool  is_subwin (const WINDOW *);		
extern  _Bool  is_syncok (const WINDOW *);		
extern  int  wgetdelay (const WINDOW *);		
extern  int  wgetscrreg (const WINDOW *, int *, int *); 

#line 1008 "/usr/include/curses.h"





#line 1017 "/usr/include/curses.h"


#line 1020 "/usr/include/curses.h"
typedef int (*NCURSES_OUTC_sp)(SCREEN*, int);

extern  SCREEN *  new_prescr (void); 

extern  int  baudrate_sp (SCREEN*); 
extern  int  beep_sp (SCREEN*); 
extern  _Bool  can_change_color_sp (SCREEN*); 
extern  int  cbreak_sp (SCREEN*); 
extern  int  curs_set_sp (SCREEN*, int); 
extern  int  color_content_sp (SCREEN*, short, short*, short*, short*); 
extern  int  def_prog_mode_sp (SCREEN*); 
extern  int  def_shell_mode_sp (SCREEN*); 
extern  int  delay_output_sp (SCREEN*, int); 
extern  int  doupdate_sp (SCREEN*); 
extern  int  echo_sp (SCREEN*); 
extern  int  endwin_sp (SCREEN*); 
extern  char  erasechar_sp (SCREEN*);
extern  void  filter_sp (SCREEN*); 
extern  int  flash_sp (SCREEN*); 
extern  int  flushinp_sp (SCREEN*); 
extern  WINDOW *  getwin_sp (SCREEN*, FILE *);			
extern  int  halfdelay_sp (SCREEN*, int); 
extern  _Bool  has_colors_sp (SCREEN*); 
extern  _Bool  has_ic_sp (SCREEN*); 
extern  _Bool  has_il_sp (SCREEN*); 
extern  int  init_color_sp (SCREEN*, short, short, short, short); 
extern  int  init_pair_sp (SCREEN*, short, short, short); 
extern  int  intrflush_sp (SCREEN*, WINDOW*, _Bool);	
extern  _Bool  isendwin_sp (SCREEN*); 
extern  const char *  keyname_sp (SCREEN*, int); 
extern  char  killchar_sp (SCREEN*); 
extern  char *  longname_sp (SCREEN*); 
extern  int  mvcur_sp (SCREEN*, int, int, int, int); 
extern  int  napms_sp (SCREEN*, int); 
extern  WINDOW *  newpad_sp (SCREEN*, int, int); 
extern  SCREEN *  newterm_sp (SCREEN*, const char *, FILE *, FILE *); 
extern  WINDOW *  newwin_sp (SCREEN*, int, int, int, int); 
extern  int  nl_sp (SCREEN*); 
extern  int  nocbreak_sp (SCREEN*); 
extern  int  noecho_sp (SCREEN*); 
extern  int  nonl_sp (SCREEN*); 
extern  void  noqiflush_sp (SCREEN*); 
extern  int  noraw_sp (SCREEN*); 
extern  int  pair_content_sp (SCREEN*, short, short*, short*); 
extern  void  qiflush_sp (SCREEN*); 
extern  int  raw_sp (SCREEN*); 
extern  int  reset_prog_mode_sp (SCREEN*); 
extern  int  reset_shell_mode_sp (SCREEN*); 
extern  int  resetty_sp (SCREEN*); 
extern  int  ripoffline_sp (SCREEN*, int, int (*)(WINDOW *, int));	
extern  int  savetty_sp (SCREEN*); 
extern  int  scr_init_sp (SCREEN*, const char *); 
extern  int  scr_restore_sp (SCREEN*, const char *); 
extern  int  scr_set_sp (SCREEN*, const char *); 
extern  int  slk_attroff_sp (SCREEN*, const chtype); 
extern  int  slk_attron_sp (SCREEN*, const chtype); 
extern  int  slk_attrset_sp (SCREEN*, const chtype); 
extern  attr_t  slk_attr_sp (SCREEN*); 
extern  int  slk_attr_set_sp (SCREEN*, const attr_t, short, void*); 
extern  int  slk_clear_sp (SCREEN*); 
extern  int  slk_color_sp (SCREEN*, short); 
extern  int  slk_init_sp (SCREEN*, int); 
extern  char *  slk_label_sp (SCREEN*, int); 
extern  int  slk_noutrefresh_sp (SCREEN*); 
extern  int  slk_refresh_sp (SCREEN*); 
extern  int  slk_restore_sp (SCREEN*); 
extern  int  slk_set_sp (SCREEN*, int, const char *, int); 
extern  int  slk_touch_sp (SCREEN*); 
extern  int  start_color_sp (SCREEN*); 
extern  chtype  termattrs_sp (SCREEN*); 
extern  char *  termname_sp (SCREEN*); 
extern  int  typeahead_sp (SCREEN*, int); 
extern  int  ungetch_sp (SCREEN*, int); 
extern  void  use_env_sp (SCREEN*, _Bool); 
extern  void  use_tioctl_sp (SCREEN*, _Bool); 
extern  int  vidattr_sp (SCREEN*, chtype);	
extern  int  vidputs_sp (SCREEN*, chtype, NCURSES_OUTC_sp); 
#line 1098 "/usr/include/curses.h"
extern  int  alloc_pair_sp (SCREEN*, int, int); 
extern  int  assume_default_colors_sp (SCREEN*, int, int);	
extern  int  define_key_sp (SCREEN*, const char *, int);	
extern  int  extended_color_content_sp (SCREEN*, int, int *, int *, int *);	
extern  int  extended_pair_content_sp (SCREEN*, int, int *, int *);	
extern  int  extended_slk_color_sp (SCREEN*, int);	
extern  int  find_pair_sp (SCREEN*, int, int); 
extern  int  free_pair_sp (SCREEN*, int); 
extern  int  get_escdelay_sp (SCREEN*);	
extern  int  init_extended_color_sp (SCREEN*, int, int, int, int);	
extern  int  init_extended_pair_sp (SCREEN*, int, int, int);	
extern  int  is_cbreak_sp (SCREEN*);	
extern  int  is_echo_sp (SCREEN*);	
extern  int  is_nl_sp (SCREEN*);	
extern  int  is_raw_sp (SCREEN*);	
extern  _Bool  is_term_resized_sp (SCREEN*, int, int);	
extern  int  key_defined_sp (SCREEN*, const char *);	
extern  char *  keybound_sp (SCREEN*, int, int);	
extern  int  keyok_sp (SCREEN*, int, _Bool);	
extern  void  nofilter_sp (SCREEN*); 	
extern  void  reset_color_pairs_sp (SCREEN*); 
extern  int  resize_term_sp (SCREEN*, int, int);	
extern  int  resizeterm_sp (SCREEN*, int, int);	
extern  int  set_escdelay_sp (SCREEN*, int);	
extern  int  set_tabsize_sp (SCREEN*, int);	
extern  int  use_default_colors_sp (SCREEN*);	
extern  int  use_legacy_coding_sp (SCREEN*, int);	
#line 1132 "/usr/include/curses.h"



#line 1137 "/usr/include/curses.h"

#line 1149 "/usr/include/curses.h"


#line 1153 "/usr/include/curses.h"


#line 1161 "/usr/include/curses.h"

#line 1170 "/usr/include/curses.h"











#line 1185 "/usr/include/curses.h"

#line 1187 "/usr/include/curses.h"

#line 1189 "/usr/include/curses.h"

#line 1191 "/usr/include/curses.h"





#line 1198 "/usr/include/curses.h"

#line 1200 "/usr/include/curses.h"

#line 1207 "/usr/include/curses.h"


#line 1220 "/usr/include/curses.h"

#line 1223 "/usr/include/curses.h"

#line 1226 "/usr/include/curses.h"

#line 1236 "/usr/include/curses.h"

#line 1238 "/usr/include/curses.h"

#line 1242 "/usr/include/curses.h"

#line 1247 "/usr/include/curses.h"

#line 1251 "/usr/include/curses.h"

#line 1255 "/usr/include/curses.h"

#line 1258 "/usr/include/curses.h"




#line 1264 "/usr/include/curses.h"





#line 1313 "/usr/include/curses.h"





#line 1338 "/usr/include/curses.h"

#line 1359 "/usr/include/curses.h"




#line 1366 "/usr/include/curses.h"

#line 1369 "/usr/include/curses.h"

#line 1381 "/usr/include/curses.h"













#line 1398 "/usr/include/curses.h"




#line 1421 "/usr/include/curses.h"





#line 1427 "/usr/include/curses.h"

#line 1429 "/usr/include/curses.h"









#line 1463 "/usr/include/curses.h"

extern  WINDOW * curscr;
extern  WINDOW * newscr;
extern  WINDOW * stdscr;
extern  char ttytype[];
extern  int COLORS;
extern  int COLOR_PAIRS;
extern  int COLS;
extern  int ESCDELAY;
extern  int LINES;
extern  int TABSIZE;

#line 1476 "/usr/include/curses.h"













#line 1494 "/usr/include/curses.h"



#line 1585 "/usr/include/curses.h"

#line 1589 "/usr/include/curses.h"

#line 1591 "/usr/include/curses.h"






#line 1598 "/usr/include/curses.h"

#line 1600 "/usr/include/curses.h"

extern  cchar_t * _nc_wacs;

#line 1604 "/usr/include/curses.h"

#line 1616 "/usr/include/curses.h"

#line 1628 "/usr/include/curses.h"

#line 1636 "/usr/include/curses.h"

	
#line 1645 "/usr/include/curses.h"

	
#line 1654 "/usr/include/curses.h"

	
#line 1667 "/usr/include/curses.h"

#line 1679 "/usr/include/curses.h"

	
#line 1692 "/usr/include/curses.h"

#line 1704 "/usr/include/curses.h"










extern  int  add_wch (const cchar_t *);			
extern  int  add_wchnstr (const cchar_t *, int);		
extern  int  add_wchstr (const cchar_t *);		
extern  int  addnwstr (const wchar_t *, int);		
extern  int  addwstr (const wchar_t *);			
extern  int  bkgrnd (const cchar_t *);			
extern  void  bkgrndset (const cchar_t *);		
extern  int  border_set (const cchar_t*,const cchar_t*,const cchar_t*,const cchar_t*,const cchar_t*,const cchar_t*,const cchar_t*,const cchar_t*); 
extern  int  box_set (WINDOW *, const cchar_t *, const cchar_t *);	
extern  int  echo_wchar (const cchar_t *);		
extern  int  erasewchar (wchar_t*);			
extern  int  get_wch (wint_t *);				
extern  int  get_wstr (wint_t *);				
extern  int  getbkgrnd (cchar_t *);			
extern  int  getcchar (const cchar_t *, wchar_t*, attr_t*, short*, void*);	
extern  int  getn_wstr (wint_t *, int);			
extern  int  hline_set (const cchar_t *, int);		
extern  int  in_wch (cchar_t *);				
extern  int  in_wchnstr (cchar_t *, int);			
extern  int  in_wchstr (cchar_t *);			
extern  int  innwstr (wchar_t *, int);			
extern  int  ins_nwstr (const wchar_t *, int);		
extern  int  ins_wch (const cchar_t *);			
extern  int  ins_wstr (const wchar_t *);			
extern  int  inwstr (wchar_t *);				
extern  const char*  key_name (wchar_t);		
extern  int  killwchar (wchar_t *);			
extern  int  mvadd_wch (int, int, const cchar_t *);	
extern  int  mvadd_wchnstr (int, int, const cchar_t *, int);
extern  int  mvadd_wchstr (int, int, const cchar_t *);	
extern  int  mvaddnwstr (int, int, const wchar_t *, int);	
extern  int  mvaddwstr (int, int, const wchar_t *);	
extern  int  mvget_wch (int, int, wint_t *);		
extern  int  mvget_wstr (int, int, wint_t *);		
extern  int  mvgetn_wstr (int, int, wint_t *, int);	
extern  int  mvhline_set (int, int, const cchar_t *, int);	
extern  int  mvin_wch (int, int, cchar_t *);		
extern  int  mvin_wchnstr (int, int, cchar_t *, int);	
extern  int  mvin_wchstr (int, int, cchar_t *);		
extern  int  mvinnwstr (int, int, wchar_t *, int);	
extern  int  mvins_nwstr (int, int, const wchar_t *, int);	
extern  int  mvins_wch (int, int, const cchar_t *);	
extern  int  mvins_wstr (int, int, const wchar_t *);	
extern  int  mvinwstr (int, int, wchar_t *);		
extern  int  mvvline_set (int, int, const cchar_t *, int);	
extern  int  mvwadd_wch (WINDOW *, int, int, const cchar_t *);	
extern  int  mvwadd_wchnstr (WINDOW *, int, int, const cchar_t *, int); 
extern  int  mvwadd_wchstr (WINDOW *, int, int, const cchar_t *);	
extern  int  mvwaddnwstr (WINDOW *, int, int, const wchar_t *, int);
extern  int  mvwaddwstr (WINDOW *, int, int, const wchar_t *);	
extern  int  mvwget_wch (WINDOW *, int, int, wint_t *);	
extern  int  mvwget_wstr (WINDOW *, int, int, wint_t *);	
extern  int  mvwgetn_wstr (WINDOW *, int, int, wint_t *, int);
extern  int  mvwhline_set (WINDOW *, int, int, const cchar_t *, int);
extern  int  mvwin_wch (WINDOW *, int, int, cchar_t *);	
extern  int  mvwin_wchnstr (WINDOW *, int,int, cchar_t *,int);	
extern  int  mvwin_wchstr (WINDOW *, int, int, cchar_t *);	
extern  int  mvwinnwstr (WINDOW *, int, int, wchar_t *, int);	
extern  int  mvwins_nwstr (WINDOW *, int,int, const wchar_t *,int); 
extern  int  mvwins_wch (WINDOW *, int, int, const cchar_t *);	
extern  int  mvwins_wstr (WINDOW *, int, int, const wchar_t *);	
extern  int  mvwinwstr (WINDOW *, int, int, wchar_t *);		
extern  int  mvwvline_set (WINDOW *, int,int, const cchar_t *,int); 
extern  int  pecho_wchar (WINDOW *, const cchar_t *);	
extern  int  setcchar (cchar_t *, const wchar_t *, const attr_t, short, const void *);	
extern  int  slk_wset (int, const wchar_t *, int);	
extern  attr_t  term_attrs (void);			
extern  int  unget_wch (const wchar_t);			
extern  int  vid_attr (attr_t, short, void *);		
extern  int  vid_puts (attr_t, short, void *, NCURSES_OUTC); 
extern  int  vline_set (const cchar_t *, int);		
extern  int  wadd_wch (WINDOW *,const cchar_t *);		
extern  int  wadd_wchnstr (WINDOW *,const cchar_t *,int);	
extern  int  wadd_wchstr (WINDOW *,const cchar_t *);	
extern  int  waddnwstr (WINDOW *,const wchar_t *,int);	
extern  int  waddwstr (WINDOW *,const wchar_t *);		
extern  int  wbkgrnd (WINDOW *,const cchar_t *);		
extern  void  wbkgrndset (WINDOW *,const cchar_t *);	
extern  int  wborder_set (WINDOW *,const cchar_t*,const cchar_t*,const cchar_t*,const cchar_t*,const cchar_t*,const cchar_t*,const cchar_t*,const cchar_t*);	
extern  int  wecho_wchar (WINDOW *, const cchar_t *);	
extern  int  wget_wch (WINDOW *, wint_t *);		
extern  int  wget_wstr (WINDOW *, wint_t *);		
extern  int  wgetbkgrnd (WINDOW *, cchar_t *);		
extern  int  wgetn_wstr (WINDOW *, wint_t *, int);	
extern  int  whline_set (WINDOW *, const cchar_t *, int);	
extern  int  win_wch (WINDOW *, cchar_t *);		
extern  int  win_wchnstr (WINDOW *, cchar_t *, int);	
extern  int  win_wchstr (WINDOW *, cchar_t *);		
extern  int  winnwstr (WINDOW *, wchar_t *, int);		
extern  int  wins_nwstr (WINDOW *, const wchar_t *, int);	
extern  int  wins_wch (WINDOW *, const cchar_t *);	
extern  int  wins_wstr (WINDOW *, const wchar_t *);	
extern  int  winwstr (WINDOW *, wchar_t *);		
extern  wchar_t*  wunctrl (cchar_t *);			
extern  int  wvline_set (WINDOW *, const cchar_t *, int);	

#line 1811 "/usr/include/curses.h"
extern  attr_t  term_attrs_sp (SCREEN*);		
extern  int  erasewchar_sp (SCREEN*, wchar_t *);	
extern  int  killwchar_sp (SCREEN*, wchar_t *);	
extern  int  unget_wch_sp (SCREEN*, const wchar_t);	
extern  int  vid_attr_sp (SCREEN*, attr_t, short, void *);	
extern  int  vid_puts_sp (SCREEN*, attr_t, short, void *, NCURSES_OUTC_sp);	
extern  wchar_t*  wunctrl_sp (SCREEN*, cchar_t *);	
#line 1819 "/usr/include/curses.h"

#line 1821 "/usr/include/curses.h"




#line 1855 "/usr/include/curses.h"

#line 1859 "/usr/include/curses.h"

#line 1878 "/usr/include/curses.h"

#line 1897 "/usr/include/curses.h"

#line 1899 "/usr/include/curses.h"

#line 1904 "/usr/include/curses.h"

#line 1906 "/usr/include/curses.h"









#line 1920 "/usr/include/curses.h"

#line 1927 "/usr/include/curses.h"


#line 1934 "/usr/include/curses.h"

#line 1940 "/usr/include/curses.h"

#line 1946 "/usr/include/curses.h"

#line 1952 "/usr/include/curses.h"





#line 1958 "/usr/include/curses.h"

#line 1964 "/usr/include/curses.h"

#line 1969 "/usr/include/curses.h"





#line 2013 "/usr/include/curses.h"

#line 2027 "/usr/include/curses.h"

#line 2029 "/usr/include/curses.h"


#line 2037 "/usr/include/curses.h"

typedef struct
{
    short id;		
    int x, y, z;	
    mmask_t bstate;	
}
MEVENT;

extern  _Bool     has_mouse(void);
extern  int      getmouse (MEVENT *);
extern  int      ungetmouse (MEVENT *);
extern  mmask_t  mousemask (mmask_t, mmask_t *);
extern  _Bool     wenclose (const WINDOW *, int, int);
extern  int      mouseinterval (int);
extern  _Bool     wmouse_trafo (const WINDOW*, int*, int*, _Bool);
extern  _Bool     mouse_trafo (int*, int*, _Bool);              

#line 2056 "/usr/include/curses.h"
extern  _Bool     has_mouse_sp (SCREEN*);
extern  int      getmouse_sp (SCREEN*, MEVENT *);
extern  int      ungetmouse_sp (SCREEN*,MEVENT *);
extern  mmask_t  mousemask_sp (SCREEN*, mmask_t, mmask_t *);
extern  int      mouseinterval_sp (SCREEN*, int);
#line 2062 "/usr/include/curses.h"

#line 2066 "/usr/include/curses.h"



extern  int  mcprint (char *, int);	
extern  int  has_key (int);		

#line 2073 "/usr/include/curses.h"
extern  int  has_key_sp (SCREEN*, int);    
extern  int  mcprint_sp (SCREEN*, char *, int);	
#line 2076 "/usr/include/curses.h"



extern  void  _tracef (const char *, ...) __attribute__((format(printf,1,2)));
extern  char *  _traceattr (attr_t);
extern  char *  _traceattr2 (int, chtype);
extern  char *  _tracechar (int);
extern  char *  _tracechtype (chtype);
extern  char *  _tracechtype2 (int, chtype);
#line 2087 "/usr/include/curses.h"
extern  char *  _tracecchar_t (const cchar_t *);
#line 2089 "/usr/include/curses.h"
extern  char *  _tracecchar_t2 (int, const cchar_t *);
#line 2094 "/usr/include/curses.h"
extern  void  trace (const unsigned) __attribute__((deprecated));
extern  unsigned  curses_trace (const unsigned);


#line 2113 "/usr/include/curses.h"

#line 2116 "/usr/include/curses.h"

#line 2125 "/usr/include/curses.h"

extern   void  exit_curses (int);

#line 1 "/usr/include/unctrl.h"












































#line 47 "/usr/include/unctrl.h"

#line 50 "/usr/include/unctrl.h"

#line 54 "/usr/include/unctrl.h"

#line 56 "/usr/include/unctrl.h"

#line 58 "/usr/include/unctrl.h"
 const char *  unctrl (chtype);

#line 61 "/usr/include/unctrl.h"
 const char *  unctrl_sp (SCREEN*, chtype);
#line 63 "/usr/include/unctrl.h"

#line 67 "/usr/include/unctrl.h"
#line 2129 "/usr/include/curses.h"

#line 2145 "/usr/include/curses.h"
#line 15 "all.nc"
#line 1 "/usr/include/dirent.h"





















#line 24 "/usr/include/dirent.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/dirent.h"



#line 1 "/usr/include/bits/types.h"





















#line 30 "/usr/include/dirent.h"

#line 45 "/usr/include/dirent.h"
















#line 1 "/usr/include/bits/dirent.h"

















#line 21 "/usr/include/bits/dirent.h"

struct dirent
  {
#line 25 "/usr/include/bits/dirent.h"
    __ino_t d_ino;
    __off_t d_off;
#line 31 "/usr/include/bits/dirent.h"
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];		
  };

#line 37 "/usr/include/bits/dirent.h"
struct dirent64
  {
    __ino64_t d_ino;
    __off64_t d_off;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];		
  };
#line 46 "/usr/include/bits/dirent.h"

#line 48 "/usr/include/bits/dirent.h"

#line 53 "/usr/include/bits/dirent.h"

#line 55 "/usr/include/bits/dirent.h"
#line 62 "/usr/include/dirent.h"

#line 66 "/usr/include/dirent.h"















#line 92 "/usr/include/dirent.h"


#line 95 "/usr/include/dirent.h"

enum
  {
    DT_UNKNOWN = 0,
#line 100 "/usr/include/dirent.h"
    DT_FIFO = 1,
#line 102 "/usr/include/dirent.h"
    DT_CHR = 2,
#line 104 "/usr/include/dirent.h"
    DT_DIR = 4,
#line 106 "/usr/include/dirent.h"
    DT_BLK = 6,
#line 108 "/usr/include/dirent.h"
    DT_REG = 8,
#line 110 "/usr/include/dirent.h"
    DT_LNK = 10,
#line 112 "/usr/include/dirent.h"
    DT_SOCK = 12,
#line 114 "/usr/include/dirent.h"
    DT_WHT = 14
#line 116 "/usr/include/dirent.h"
  };


#line 122 "/usr/include/dirent.h"




typedef struct __dirstream DIR;






extern int closedir (DIR *__dirp) ;






extern DIR *opendir (const char *__name) 
	__attribute__ ((__malloc__)) ;

#line 144 "/usr/include/dirent.h"




extern DIR *fdopendir (int __fd)
	__attribute__ ((__malloc__)) ;
#line 151 "/usr/include/dirent.h"











#line 163 "/usr/include/dirent.h"
extern struct dirent *readdir (DIR *__dirp) ;
#line 172 "/usr/include/dirent.h"

#line 174 "/usr/include/dirent.h"
extern struct dirent64 *readdir64 (DIR *__dirp) ;
#line 176 "/usr/include/dirent.h"

#line 178 "/usr/include/dirent.h"





#line 184 "/usr/include/dirent.h"
extern int readdir_r (DIR *__restrict __dirp,
		      struct dirent *__restrict __entry,
		      struct dirent **__restrict __result)
      __attribute__ ((__deprecated__));
#line 200 "/usr/include/dirent.h"

#line 202 "/usr/include/dirent.h"
extern int readdir64_r (DIR *__restrict __dirp,
			struct dirent64 *__restrict __entry,
			struct dirent64 **__restrict __result)
   __attribute__ ((__deprecated__));
#line 208 "/usr/include/dirent.h"


extern void rewinddir (DIR *__dirp)  ;

#line 1 "/usr/include/bits/types.h"





















#line 214 "/usr/include/dirent.h"


extern void seekdir (DIR *__dirp, long int __pos)  ;


extern long int telldir (DIR *__dirp)  ;
#line 221 "/usr/include/dirent.h"

#line 223 "/usr/include/dirent.h"


extern int dirfd (DIR *__dirp)  ;

#line 230 "/usr/include/dirent.h"

#line 233 "/usr/include/dirent.h"

#line 1 "/usr/include/bits/posix1_lim.h"






















#line 235 "/usr/include/dirent.h"


#line 244 "/usr/include/dirent.h"

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
#line 247 "/usr/include/dirent.h"








#line 256 "/usr/include/dirent.h"
extern int scandir (const char *__restrict __dir,
		    struct dirent ***__restrict __namelist,
		    int (*__selector) (const struct dirent *),
		    int (*__cmp) (const struct dirent **,
				  const struct dirent **))
     ;
#line 275 "/usr/include/dirent.h"

#line 277 "/usr/include/dirent.h"


extern int scandir64 (const char *__restrict __dir,
		      struct dirent64 ***__restrict __namelist,
		      int (*__selector) (const struct dirent64 *),
		      int (*__cmp) (const struct dirent64 **,
				    const struct dirent64 **))
     ;
#line 286 "/usr/include/dirent.h"

#line 288 "/usr/include/dirent.h"





#line 294 "/usr/include/dirent.h"
extern int scandirat (int __dfd, const char *__restrict __dir,
		      struct dirent ***__restrict __namelist,
		      int (*__selector) (const struct dirent *),
		      int (*__cmp) (const struct dirent **,
				    const struct dirent **))
     ;
#line 313 "/usr/include/dirent.h"



extern int scandirat64 (int __dfd, const char *__restrict __dir,
			struct dirent64 ***__restrict __namelist,
			int (*__selector) (const struct dirent64 *),
			int (*__cmp) (const struct dirent64 **,
				      const struct dirent64 **))
     ;
#line 323 "/usr/include/dirent.h"


#line 326 "/usr/include/dirent.h"
extern int alphasort (const struct dirent **__e1,
		      const struct dirent **__e2)
      __attribute__ ((__pure__)) ;
#line 339 "/usr/include/dirent.h"

#line 341 "/usr/include/dirent.h"
extern int alphasort64 (const struct dirent64 **__e1,
			const struct dirent64 **__e2)
      __attribute__ ((__pure__)) ;
#line 346 "/usr/include/dirent.h"


#line 349 "/usr/include/dirent.h"




#line 354 "/usr/include/dirent.h"
extern __ssize_t getdirentries (int __fd, char *__restrict __buf,
				size_t __nbytes,
				__off_t *__restrict __basep)
      ;
#line 369 "/usr/include/dirent.h"

#line 371 "/usr/include/dirent.h"
extern __ssize_t getdirentries64 (int __fd, char *__restrict __buf,
				  size_t __nbytes,
				  __off64_t *__restrict __basep)
      ;
#line 377 "/usr/include/dirent.h"

#line 379 "/usr/include/dirent.h"

#line 381 "/usr/include/dirent.h"
extern int versionsort (const struct dirent **__e1,
			const struct dirent **__e2)
      __attribute__ ((__pure__)) ;
#line 395 "/usr/include/dirent.h"

#line 397 "/usr/include/dirent.h"
extern int versionsort64 (const struct dirent64 **__e1,
			  const struct dirent64 **__e2)
      __attribute__ ((__pure__)) ;
#line 402 "/usr/include/dirent.h"



#line 1 "/usr/include/bits/dirent_ext.h"


















#line 22 "/usr/include/bits/dirent_ext.h"



#line 26 "/usr/include/bits/dirent_ext.h"



extern __ssize_t getdents64 (int __fd, void *__buffer, size_t __length)
   ;
#line 32 "/usr/include/bits/dirent_ext.h"

#line 406 "/usr/include/dirent.h"
#line 16 "all.nc"
#line 1 "/usr/include/dlfcn.h"


















#line 21 "/usr/include/dlfcn.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/dlfcn.h"
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
#line 25 "/usr/include/dlfcn.h"


#line 1 "/usr/include/bits/dlfcn.h"


















#line 22 "/usr/include/bits/dlfcn.h"


#line 29 "/usr/include/bits/dlfcn.h"




#line 34 "/usr/include/bits/dlfcn.h"




#line 39 "/usr/include/bits/dlfcn.h"


#line 42 "/usr/include/bits/dlfcn.h"

#line 44 "/usr/include/bits/dlfcn.h"










#line 55 "/usr/include/bits/dlfcn.h"




extern void _dl_mcount_wrapper_check (void *__selfpc) ;


#line 28 "/usr/include/dlfcn.h"


#line 1 "/usr/include/bits/dl_find_object.h"


















#line 22 "/usr/include/bits/dl_find_object.h"
#line 32 "/usr/include/dlfcn.h"


typedef long int Lmid_t;


#line 40 "/usr/include/dlfcn.h"





#line 46 "/usr/include/dlfcn.h"




#line 51 "/usr/include/dlfcn.h"





extern void *dlopen (const char *__file, int __mode) ;



extern int dlclose (void *__handle)  ;



extern void *dlsym (void *__restrict __handle,
		    const char *__restrict __name)  ;

#line 68 "/usr/include/dlfcn.h"

extern void *dlmopen (Lmid_t __nsid, const char *__file, int __mode) ;



extern void *dlvsym (void *__restrict __handle,
		     const char *__restrict __name,
		     const char *__restrict __version)
      ;
#line 78 "/usr/include/dlfcn.h"




extern char *dlerror (void) ;


#line 86 "/usr/include/dlfcn.h"


typedef struct
{
  const char *dli_fname;	
  void *dli_fbase;		
  const char *dli_sname;	
  void *dli_saddr;		
} Dl_info;



extern int dladdr (const void *__address, Dl_info *__info)
      ;


extern int dladdr1 (const void *__address, Dl_info *__info,
		    void **__extra_info, int __flags)  ;




enum
  {
    
    RTLD_DL_SYMENT = 1,

    
    RTLD_DL_LINKMAP = 2
  };







extern int dlinfo (void *__restrict __handle,
		   int __request, void *__restrict __arg)
      ;


enum
  {
    
    RTLD_DI_LMID = 1,

    

    RTLD_DI_LINKMAP = 2,

    RTLD_DI_CONFIGADDR = 3,	

    




    RTLD_DI_SERINFO = 4,
    RTLD_DI_SERINFOSIZE = 5,

    

    RTLD_DI_ORIGIN = 6,

    RTLD_DI_PROFILENAME = 7,	
    RTLD_DI_PROFILEOUT = 8,	

    


    RTLD_DI_TLS_MODID = 9,

    



    RTLD_DI_TLS_DATA = 10,

    


    RTLD_DI_PHDR = 11,

    RTLD_DI_MAX = 11
  };




typedef struct
{
  char *dls_name;		
  unsigned int dls_flags;	
} Dl_serpath;



typedef struct
{
  size_t dls_size;		
  unsigned int dls_cnt;		
#line 189 "/usr/include/dlfcn.h"
  



  union
  {
    Dl_serpath dls_serpath[0]; 
    Dl_serpath __dls_serpath_pad[1];
  };
#line 201 "/usr/include/dlfcn.h"
} Dl_serinfo;

struct dl_find_object
{
  unsigned long long int dlfo_flags;
  void *dlfo_map_start;		
  void *dlfo_map_end;		
  struct link_map *dlfo_link_map;
  void *dlfo_eh_frame;		
#line 220 "/usr/include/dlfcn.h"
  void *dlfo_sframe;		
#line 224 "/usr/include/dlfcn.h"
  unsigned long long int __dlfo_reserved[6];
};



int _dl_find_object (void *__address, struct dl_find_object *__result) ;


#line 233 "/usr/include/dlfcn.h"

#line 235 "/usr/include/dlfcn.h"


#line 17 "all.nc"
#line 1 "/usr/include/elf.h"


















#line 21 "/usr/include/elf.h"



#line 1 "/usr/include/stdint.h"




















#line 25 "/usr/include/elf.h"


typedef uint16_t Elf32_Half;
typedef uint16_t Elf64_Half;


typedef uint32_t Elf32_Word;
typedef	int32_t  Elf32_Sword;
typedef uint32_t Elf64_Word;
typedef	int32_t  Elf64_Sword;


typedef uint64_t Elf32_Xword;
typedef	int64_t  Elf32_Sxword;
typedef uint64_t Elf64_Xword;
typedef	int64_t  Elf64_Sxword;


typedef uint32_t Elf32_Addr;
typedef uint64_t Elf64_Addr;


typedef uint32_t Elf32_Off;
typedef uint64_t Elf64_Off;


typedef uint16_t Elf32_Section;
typedef uint16_t Elf64_Section;


typedef Elf32_Half Elf32_Versym;
typedef Elf64_Half Elf64_Versym;




#line 62 "/usr/include/elf.h"

typedef struct
{
  unsigned char	e_ident[(16)];	
  Elf32_Half	e_type;			
  Elf32_Half	e_machine;		
  Elf32_Word	e_version;		
  Elf32_Addr	e_entry;		
  Elf32_Off	e_phoff;		
  Elf32_Off	e_shoff;		
  Elf32_Word	e_flags;		
  Elf32_Half	e_ehsize;		
  Elf32_Half	e_phentsize;		
  Elf32_Half	e_phnum;		
  Elf32_Half	e_shentsize;		
  Elf32_Half	e_shnum;		
  Elf32_Half	e_shstrndx;		
} Elf32_Ehdr;

typedef struct
{
  unsigned char	e_ident[(16)];	
  Elf64_Half	e_type;			
  Elf64_Half	e_machine;		
  Elf64_Word	e_version;		
  Elf64_Addr	e_entry;		
  Elf64_Off	e_phoff;		
  Elf64_Off	e_shoff;		
  Elf64_Word	e_flags;		
  Elf64_Half	e_ehsize;		
  Elf64_Half	e_phentsize;		
  Elf64_Half	e_phnum;		
  Elf64_Half	e_shentsize;		
  Elf64_Half	e_shnum;		
  Elf64_Half	e_shstrndx;		
} Elf64_Ehdr;





#line 105 "/usr/include/elf.h"

#line 108 "/usr/include/elf.h"

#line 111 "/usr/include/elf.h"

#line 114 "/usr/include/elf.h"


#line 118 "/usr/include/elf.h"

#line 124 "/usr/include/elf.h"

#line 130 "/usr/include/elf.h"

#line 132 "/usr/include/elf.h"
					

#line 151 "/usr/include/elf.h"

#line 153 "/usr/include/elf.h"

#line 155 "/usr/include/elf.h"



#line 168 "/usr/include/elf.h"



#line 182 "/usr/include/elf.h"
				
#line 184 "/usr/include/elf.h"
				
#line 192 "/usr/include/elf.h"
				
#line 278 "/usr/include/elf.h"
				
#line 293 "/usr/include/elf.h"
				
#line 316 "/usr/include/elf.h"
				
#line 318 "/usr/include/elf.h"
				
#line 340 "/usr/include/elf.h"
				
#line 356 "/usr/include/elf.h"
				
#line 358 "/usr/include/elf.h"

#line 362 "/usr/include/elf.h"

#line 364 "/usr/include/elf.h"



#line 368 "/usr/include/elf.h"





#line 374 "/usr/include/elf.h"



#line 380 "/usr/include/elf.h"



typedef struct
{
  Elf32_Word	sh_name;		
  Elf32_Word	sh_type;		
  Elf32_Word	sh_flags;		
  Elf32_Addr	sh_addr;		
  Elf32_Off	sh_offset;		
  Elf32_Word	sh_size;		
  Elf32_Word	sh_link;		
  Elf32_Word	sh_info;		
  Elf32_Word	sh_addralign;		
  Elf32_Word	sh_entsize;		
} Elf32_Shdr;

typedef struct
{
  Elf64_Word	sh_name;		
  Elf64_Word	sh_type;		
  Elf64_Xword	sh_flags;		
  Elf64_Addr	sh_addr;		
  Elf64_Off	sh_offset;		
  Elf64_Xword	sh_size;		
  Elf64_Word	sh_link;		
  Elf64_Word	sh_info;		
  Elf64_Xword	sh_addralign;		
  Elf64_Xword	sh_entsize;		
} Elf64_Shdr;



#line 427 "/usr/include/elf.h"



#line 467 "/usr/include/elf.h"



#line 489 "/usr/include/elf.h"



typedef struct
{
  Elf32_Word	ch_type;	
  Elf32_Word	ch_size;	
  Elf32_Word	ch_addralign;	
} Elf32_Chdr;

typedef struct
{
  Elf64_Word	ch_type;	
  Elf64_Word	ch_reserved;
  Elf64_Xword	ch_size;	
  Elf64_Xword	ch_addralign;	
} Elf64_Chdr;


#line 514 "/usr/include/elf.h"


#line 517 "/usr/include/elf.h"



typedef struct
{
  Elf32_Word	st_name;		
  Elf32_Addr	st_value;		
  Elf32_Word	st_size;		
  unsigned char	st_info;		
  unsigned char	st_other;		
  Elf32_Section	st_shndx;		
} Elf32_Sym;

typedef struct
{
  Elf64_Word	st_name;		
  unsigned char	st_info;		
  unsigned char st_other;		
  Elf64_Section	st_shndx;		
  Elf64_Addr	st_value;		
  Elf64_Xword	st_size;		
} Elf64_Sym;




typedef struct
{
  Elf32_Half si_boundto;		
  Elf32_Half si_flags;			
} Elf32_Syminfo;

typedef struct
{
  Elf64_Half si_boundto;		
  Elf64_Half si_flags;			
} Elf64_Syminfo;


#line 559 "/usr/include/elf.h"


#line 566 "/usr/include/elf.h"

#line 570 "/usr/include/elf.h"




#line 577 "/usr/include/elf.h"


#line 582 "/usr/include/elf.h"



#line 594 "/usr/include/elf.h"



#line 610 "/usr/include/elf.h"






#line 617 "/usr/include/elf.h"




#line 622 "/usr/include/elf.h"


#line 625 "/usr/include/elf.h"


#line 631 "/usr/include/elf.h"




typedef struct
{
  Elf32_Addr	r_offset;		
  Elf32_Word	r_info;			
} Elf32_Rel;






typedef struct
{
  Elf64_Addr	r_offset;		
  Elf64_Xword	r_info;			
} Elf64_Rel;



typedef struct
{
  Elf32_Addr	r_offset;		
  Elf32_Word	r_info;			
  Elf32_Sword	r_addend;		
} Elf32_Rela;

typedef struct
{
  Elf64_Addr	r_offset;		
  Elf64_Xword	r_info;			
  Elf64_Sxword	r_addend;		
} Elf64_Rela;



typedef Elf32_Word	Elf32_Relr;
typedef Elf64_Xword	Elf64_Relr;



#line 678 "/usr/include/elf.h"

#line 682 "/usr/include/elf.h"



typedef struct
{
  Elf32_Word	p_type;			
  Elf32_Off	p_offset;		
  Elf32_Addr	p_vaddr;		
  Elf32_Addr	p_paddr;		
  Elf32_Word	p_filesz;		
  Elf32_Word	p_memsz;		
  Elf32_Word	p_flags;		
  Elf32_Word	p_align;		
} Elf32_Phdr;

typedef struct
{
  Elf64_Word	p_type;			
  Elf64_Word	p_flags;		
  Elf64_Off	p_offset;		
  Elf64_Addr	p_vaddr;		
  Elf64_Addr	p_paddr;		
  Elf64_Xword	p_filesz;		
  Elf64_Xword	p_memsz;		
  Elf64_Xword	p_align;		
} Elf64_Phdr;





#line 714 "/usr/include/elf.h"



#line 739 "/usr/include/elf.h"



#line 747 "/usr/include/elf.h"



#line 860 "/usr/include/elf.h"



#line 864 "/usr/include/elf.h"




typedef struct
{
  Elf32_Sword	d_tag;			
  union
    {
      Elf32_Word d_val;			
      Elf32_Addr d_ptr;			
    } d_un;
} Elf32_Dyn;

typedef struct
{
  Elf64_Sxword	d_tag;			
  union
    {
      Elf64_Xword d_val;		
      Elf64_Addr d_ptr;			
    } d_un;
} Elf64_Dyn;



#line 934 "/usr/include/elf.h"




#line 954 "/usr/include/elf.h"






#line 975 "/usr/include/elf.h"



#line 979 "/usr/include/elf.h"

#line 982 "/usr/include/elf.h"


#line 993 "/usr/include/elf.h"



#line 1000 "/usr/include/elf.h"


#line 1007 "/usr/include/elf.h"



#line 1041 "/usr/include/elf.h"


#line 1045 "/usr/include/elf.h"


#line 1050 "/usr/include/elf.h"



typedef struct
{
  Elf32_Half	vd_version;		
  Elf32_Half	vd_flags;		
  Elf32_Half	vd_ndx;			
  Elf32_Half	vd_cnt;			
  Elf32_Word	vd_hash;		
  Elf32_Word	vd_aux;			
  Elf32_Word	vd_next;		

} Elf32_Verdef;

typedef struct
{
  Elf64_Half	vd_version;		
  Elf64_Half	vd_flags;		
  Elf64_Half	vd_ndx;			
  Elf64_Half	vd_cnt;			
  Elf64_Word	vd_hash;		
  Elf64_Word	vd_aux;			
  Elf64_Word	vd_next;		

} Elf64_Verdef;



#line 1082 "/usr/include/elf.h"


#line 1087 "/usr/include/elf.h"


#line 1093 "/usr/include/elf.h"



typedef struct
{
  Elf32_Word	vda_name;		
  Elf32_Word	vda_next;		

} Elf32_Verdaux;

typedef struct
{
  Elf64_Word	vda_name;		
  Elf64_Word	vda_next;		

} Elf64_Verdaux;




typedef struct
{
  Elf32_Half	vn_version;		
  Elf32_Half	vn_cnt;			
  Elf32_Word	vn_file;		

  Elf32_Word	vn_aux;			
  Elf32_Word	vn_next;		

} Elf32_Verneed;

typedef struct
{
  Elf64_Half	vn_version;		
  Elf64_Half	vn_cnt;			
  Elf64_Word	vn_file;		

  Elf64_Word	vn_aux;			
  Elf64_Word	vn_next;		

} Elf64_Verneed;



#line 1140 "/usr/include/elf.h"



typedef struct
{
  Elf32_Word	vna_hash;		
  Elf32_Half	vna_flags;		
  Elf32_Half	vna_other;		
  Elf32_Word	vna_name;		
  Elf32_Word	vna_next;		

} Elf32_Vernaux;

typedef struct
{
  Elf64_Word	vna_hash;		
  Elf64_Half	vna_flags;		
  Elf64_Half	vna_other;		
  Elf64_Word	vna_name;		
  Elf64_Word	vna_next;		

} Elf64_Vernaux;











typedef struct
{
  uint32_t a_type;		
  union
    {
      uint32_t a_val;		
      


    } a_un;
} Elf32_auxv_t;

typedef struct
{
  uint64_t a_type;		
  union
    {
      uint64_t a_val;		
      


    } a_un;
} Elf64_auxv_t;



#line 1215 "/usr/include/elf.h"


#line 1220 "/usr/include/elf.h"



#line 1224 "/usr/include/elf.h"


#line 1229 "/usr/include/elf.h"



#line 1233 "/usr/include/elf.h"

#line 1235 "/usr/include/elf.h"

#line 1237 "/usr/include/elf.h"

#line 1239 "/usr/include/elf.h"

#line 1242 "/usr/include/elf.h"

#line 1245 "/usr/include/elf.h"


#line 1249 "/usr/include/elf.h"

#line 1251 "/usr/include/elf.h"



#line 1256 "/usr/include/elf.h"



#line 1263 "/usr/include/elf.h"




#line 1275 "/usr/include/elf.h"

#line 1277 "/usr/include/elf.h"




typedef struct
{
  Elf32_Word n_namesz;			
  Elf32_Word n_descsz;			
  Elf32_Word n_type;			
} Elf32_Nhdr;

typedef struct
{
  Elf64_Word n_namesz;			
  Elf64_Word n_descsz;			
  Elf64_Word n_type;			
} Elf64_Nhdr;




#line 1299 "/usr/include/elf.h"


#line 1302 "/usr/include/elf.h"


#line 1305 "/usr/include/elf.h"




#line 1310 "/usr/include/elf.h"










#line 1322 "/usr/include/elf.h"



#line 1329 "/usr/include/elf.h"







#line 1337 "/usr/include/elf.h"



#line 1341 "/usr/include/elf.h"


#line 1344 "/usr/include/elf.h"


#line 1347 "/usr/include/elf.h"



#line 1351 "/usr/include/elf.h"



#line 1355 "/usr/include/elf.h"


#line 1358 "/usr/include/elf.h"




#line 1363 "/usr/include/elf.h"

#line 1365 "/usr/include/elf.h"



#line 1370 "/usr/include/elf.h"



#line 1375 "/usr/include/elf.h"


#line 1378 "/usr/include/elf.h"



#line 1382 "/usr/include/elf.h"


#line 1385 "/usr/include/elf.h"

#line 1387 "/usr/include/elf.h"

#line 1389 "/usr/include/elf.h"

#line 1391 "/usr/include/elf.h"


#line 1394 "/usr/include/elf.h"

#line 1398 "/usr/include/elf.h"



#line 1402 "/usr/include/elf.h"


#line 1405 "/usr/include/elf.h"

#line 1407 "/usr/include/elf.h"



#line 1411 "/usr/include/elf.h"



#line 1415 "/usr/include/elf.h"


#line 1418 "/usr/include/elf.h"


#line 1421 "/usr/include/elf.h"



#line 1425 "/usr/include/elf.h"


#line 1428 "/usr/include/elf.h"


typedef struct
{
  Elf32_Xword m_value;		
  Elf32_Word m_info;		
  Elf32_Word m_poffset;		
  Elf32_Half m_repeat;		
  Elf32_Half m_stride;		
} Elf32_Move;

typedef struct
{
  Elf64_Xword m_value;		
  Elf64_Xword m_info;		
  Elf64_Xword m_poffset;	
  Elf64_Half m_repeat;		
  Elf64_Half m_stride;		
} Elf64_Move;


#line 1452 "/usr/include/elf.h"

#line 1456 "/usr/include/elf.h"





#line 1462 "/usr/include/elf.h"



#line 1509 "/usr/include/elf.h"

#line 1511 "/usr/include/elf.h"





#line 1576 "/usr/include/elf.h"

#line 1578 "/usr/include/elf.h"





#line 1584 "/usr/include/elf.h"



#line 1597 "/usr/include/elf.h"



#line 1624 "/usr/include/elf.h"



#line 1697 "/usr/include/elf.h"

#line 1699 "/usr/include/elf.h"



#line 1704 "/usr/include/elf.h"





#line 1733 "/usr/include/elf.h"



#line 1777 "/usr/include/elf.h"



#line 1787 "/usr/include/elf.h"



#line 1795 "/usr/include/elf.h"



#line 1839 "/usr/include/elf.h"



#line 1850 "/usr/include/elf.h"





#line 1861 "/usr/include/elf.h"


#line 1864 "/usr/include/elf.h"



typedef union
{
  struct
    {
      Elf32_Word gt_current_g_value;	
      Elf32_Word gt_unused;		
    } gt_header;			
  struct
    {
      Elf32_Word gt_g_value;		
      Elf32_Word gt_bytes;		
    } gt_entry;				
} Elf32_gptab;



typedef struct
{
  Elf32_Word ri_gprmask;		
  Elf32_Word ri_cprmask[4];		
  Elf32_Sword ri_gp_value;		
} Elf32_RegInfo;



typedef struct
{
  unsigned char kind;		

  unsigned char size;		
  Elf32_Section section;	

  Elf32_Word info;		
} Elf_Options;



#line 1913 "/usr/include/elf.h"



#line 1923 "/usr/include/elf.h"

#line 1929 "/usr/include/elf.h"



#line 1936 "/usr/include/elf.h"

#line 1940 "/usr/include/elf.h"



typedef struct
{
  Elf32_Word hwp_flags1;	
  Elf32_Word hwp_flags2;	
} Elf_Options_Hw;



#line 1953 "/usr/include/elf.h"



#line 1969 "/usr/include/elf.h"

#line 2066 "/usr/include/elf.h"

#line 2068 "/usr/include/elf.h"



#line 2075 "/usr/include/elf.h"



#line 2079 "/usr/include/elf.h"



#line 2134 "/usr/include/elf.h"

#line 2136 "/usr/include/elf.h"



#line 2140 "/usr/include/elf.h"



#line 2144 "/usr/include/elf.h"

#line 2147 "/usr/include/elf.h"



#line 2166 "/usr/include/elf.h"



typedef struct
{
  Elf32_Word l_name;		
  Elf32_Word l_time_stamp;	
  Elf32_Word l_checksum;	
  Elf32_Word l_version;		
  Elf32_Word l_flags;		
} Elf32_Lib;

typedef struct
{
  Elf64_Word l_name;		
  Elf64_Word l_time_stamp;	
  Elf64_Word l_checksum;	
  Elf64_Word l_version;		
  Elf64_Word l_flags;		
} Elf64_Lib;




#line 2197 "/usr/include/elf.h"



typedef Elf32_Addr Elf32_Conflict;

typedef struct
{
  
  Elf32_Half version;
  
  unsigned char isa_level;
  
  unsigned char isa_rev;
  
  unsigned char gpr_size;
  
  unsigned char cpr1_size;
  
  unsigned char cpr2_size;
  
  unsigned char fp_abi;
  
  Elf32_Word isa_ext;
  
  Elf32_Word ases;
  
  Elf32_Word flags1;
  Elf32_Word flags2;
} Elf_MIPS_ABIFlags_v0;



#line 2233 "/usr/include/elf.h"



#line 2250 "/usr/include/elf.h"



#line 2271 "/usr/include/elf.h"


#line 2274 "/usr/include/elf.h"


enum
{
  
  Val_GNU_MIPS_ABI_FP_ANY = 0,
  
  Val_GNU_MIPS_ABI_FP_DOUBLE = 1,
  
  Val_GNU_MIPS_ABI_FP_SINGLE = 2,
  
  Val_GNU_MIPS_ABI_FP_SOFT = 3,
  
  Val_GNU_MIPS_ABI_FP_OLD_64 = 4,
  
  Val_GNU_MIPS_ABI_FP_XX = 5,
  
  Val_GNU_MIPS_ABI_FP_64 = 6,
  
  Val_GNU_MIPS_ABI_FP_64A = 7,
  
  Val_GNU_MIPS_ABI_FP_MAX = 7
};





#line 2310 "/usr/include/elf.h"



#line 2316 "/usr/include/elf.h"



#line 2322 "/usr/include/elf.h"



#line 2328 "/usr/include/elf.h"



#line 2334 "/usr/include/elf.h"



#line 2338 "/usr/include/elf.h"

#line 2341 "/usr/include/elf.h"



#line 2454 "/usr/include/elf.h"



#line 2472 "/usr/include/elf.h"

#line 2475 "/usr/include/elf.h"



#line 2479 "/usr/include/elf.h"

#line 2487 "/usr/include/elf.h"






#line 2495 "/usr/include/elf.h"




#line 2501 "/usr/include/elf.h"



#line 2505 "/usr/include/elf.h"


#line 2509 "/usr/include/elf.h"



#line 2545 "/usr/include/elf.h"

#line 2547 "/usr/include/elf.h"


#line 2555 "/usr/include/elf.h"


#line 2559 "/usr/include/elf.h"




#line 2564 "/usr/include/elf.h"


#line 2569 "/usr/include/elf.h"


#line 2608 "/usr/include/elf.h"


#line 2640 "/usr/include/elf.h"



#line 2659 "/usr/include/elf.h"


#line 2667 "/usr/include/elf.h"


#line 2670 "/usr/include/elf.h"


#line 2676 "/usr/include/elf.h"



#line 2680 "/usr/include/elf.h"


#line 2685 "/usr/include/elf.h"


#line 2688 "/usr/include/elf.h"


#line 2708 "/usr/include/elf.h"

#line 2713 "/usr/include/elf.h"

#line 2722 "/usr/include/elf.h"

#line 2746 "/usr/include/elf.h"

#line 2758 "/usr/include/elf.h"


#line 2803 "/usr/include/elf.h"


#line 2811 "/usr/include/elf.h"


#line 2819 "/usr/include/elf.h"





#line 2825 "/usr/include/elf.h"


#line 2832 "/usr/include/elf.h"


#line 2837 "/usr/include/elf.h"


#line 2842 "/usr/include/elf.h"





#line 2859 "/usr/include/elf.h"

#line 2862 "/usr/include/elf.h"




#line 2870 "/usr/include/elf.h"


#line 2874 "/usr/include/elf.h"

#line 2882 "/usr/include/elf.h"


#line 2886 "/usr/include/elf.h"


#line 2891 "/usr/include/elf.h"


#line 2897 "/usr/include/elf.h"


#line 2900 "/usr/include/elf.h"


#line 2905 "/usr/include/elf.h"




#line 2910 "/usr/include/elf.h"

#line 3033 "/usr/include/elf.h"


#line 3036 "/usr/include/elf.h"


#line 3042 "/usr/include/elf.h"


#line 3045 "/usr/include/elf.h"



#line 3211 "/usr/include/elf.h"

#line 3213 "/usr/include/elf.h"


#line 3237 "/usr/include/elf.h"
                                        
#line 3240 "/usr/include/elf.h"
                                        
#line 3243 "/usr/include/elf.h"
                                        
#line 3247 "/usr/include/elf.h"
                                        
#line 3251 "/usr/include/elf.h"
                                        
#line 3254 "/usr/include/elf.h"
                                        
#line 3257 "/usr/include/elf.h"
                                        
#line 3277 "/usr/include/elf.h"


#line 3282 "/usr/include/elf.h"

#line 3285 "/usr/include/elf.h"


#line 3288 "/usr/include/elf.h"




#line 3295 "/usr/include/elf.h"


#line 3302 "/usr/include/elf.h"


#line 3305 "/usr/include/elf.h"


#line 3309 "/usr/include/elf.h"


#line 3313 "/usr/include/elf.h"


#line 3317 "/usr/include/elf.h"


#line 3400 "/usr/include/elf.h"




#line 3426 "/usr/include/elf.h"


#line 3465 "/usr/include/elf.h"

#line 3467 "/usr/include/elf.h"





#line 3473 "/usr/include/elf.h"



#line 3556 "/usr/include/elf.h"

#line 3558 "/usr/include/elf.h"



#line 3581 "/usr/include/elf.h"

#line 3583 "/usr/include/elf.h"



#line 3633 "/usr/include/elf.h"
					
					
#line 3642 "/usr/include/elf.h"


#line 3645 "/usr/include/elf.h"


#line 3651 "/usr/include/elf.h"


#line 3694 "/usr/include/elf.h"



#line 3710 "/usr/include/elf.h"

#line 3724 "/usr/include/elf.h"

#line 3750 "/usr/include/elf.h"


#line 3782 "/usr/include/elf.h"


#line 3785 "/usr/include/elf.h"


#line 3834 "/usr/include/elf.h"


#line 3892 "/usr/include/elf.h"

#line 3926 "/usr/include/elf.h"

#line 3929 "/usr/include/elf.h"

#line 3931 "/usr/include/elf.h"



#line 4024 "/usr/include/elf.h"

#line 4037 "/usr/include/elf.h"

#line 4054 "/usr/include/elf.h"

#line 4057 "/usr/include/elf.h"

#line 4059 "/usr/include/elf.h"


#line 4069 "/usr/include/elf.h"


#line 4128 "/usr/include/elf.h"

#line 4130 "/usr/include/elf.h"


#line 4134 "/usr/include/elf.h"


#line 4137 "/usr/include/elf.h"


#line 4140 "/usr/include/elf.h"


#line 4143 "/usr/include/elf.h"



#line 4149 "/usr/include/elf.h"



#line 4158 "/usr/include/elf.h"


#line 4167 "/usr/include/elf.h"

#line 4170 "/usr/include/elf.h"

#line 4173 "/usr/include/elf.h"


#line 4177 "/usr/include/elf.h"


#line 4194 "/usr/include/elf.h"


#line 4211 "/usr/include/elf.h"


#line 4221 "/usr/include/elf.h"


#line 4228 "/usr/include/elf.h"


#line 4245 "/usr/include/elf.h"




#line 4276 "/usr/include/elf.h"


#line 4290 "/usr/include/elf.h"



#line 4356 "/usr/include/elf.h"




#line 4363 "/usr/include/elf.h"


#line 4366 "/usr/include/elf.h"


#line 4373 "/usr/include/elf.h"

#line 4428 "/usr/include/elf.h"

#line 4430 "/usr/include/elf.h"

#line 4444 "/usr/include/elf.h"


#line 4481 "/usr/include/elf.h"
#line 18 "all.nc"
#line 1 "/usr/include/endian.h"
















#line 19 "all.nc"
#line 1 "/usr/include/envz.h"


















#line 21 "/usr/include/envz.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/envz.h"

#line 1 "/usr/include/errno.h"




















#line 25 "/usr/include/envz.h"



#line 1 "/usr/include/argz.h"

















#line 29 "/usr/include/envz.h"




extern char *envz_entry (const char *__restrict __envz, size_t __envz_len,
			 const char *__restrict __name)
      __attribute__ ((__pure__));



extern char *envz_get (const char *__restrict __envz, size_t __envz_len,
		       const char *__restrict __name)
      __attribute__ ((__pure__));







extern error_t envz_add (char **__restrict __envz,
			 size_t *__restrict __envz_len,
			 const char *__restrict __name,
			 const char *__restrict __value) ;




extern error_t envz_merge (char **__restrict __envz,
			   size_t *__restrict __envz_len,
			   const char *__restrict __envz2,
			   size_t __envz2_len, int __override) ;


extern void envz_remove (char **__restrict __envz,
			 size_t *__restrict __envz_len,
			 const char *__restrict __name) ;


extern void envz_strip (char **__restrict __envz,
			size_t *__restrict __envz_len) ;


#line 20 "all.nc"
#line 1 "/usr/include/err.h"


















#line 21 "/usr/include/err.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/err.h"

#line 1 "/usr/lib/clang/21/include/stdarg.h"





















#line 45 "/usr/lib/clang/21/include/stdarg.h"

#line 1 "/usr/lib/clang/21/include/__stdarg___gnuc_va_list.h"








#line 48 "/usr/lib/clang/21/include/stdarg.h"
#line 50 "/usr/lib/clang/21/include/stdarg.h"

#line 55 "/usr/lib/clang/21/include/stdarg.h"

#line 60 "/usr/lib/clang/21/include/stdarg.h"

#line 65 "/usr/lib/clang/21/include/stdarg.h"

#line 70 "/usr/lib/clang/21/include/stdarg.h"
#line 26 "/usr/include/err.h"
#line 29 "/usr/include/err.h"





extern void warn (const char *__format, ...)
     __attribute__ ((__format__ (__printf__, 1, 2))) ;
extern void vwarn (const char *__format, __gnuc_va_list)
     __attribute__ ((__format__ (__printf__, 1, 0))) ;


extern void warnx (const char *__format, ...)
     __attribute__ ((__format__ (__printf__, 1, 2)));
extern void vwarnx (const char *__format, __gnuc_va_list)
     __attribute__ ((__format__ (__printf__, 1, 0)));


extern void err (int __status, const char *__format, ...)
     __attribute__ ((__noreturn__, __format__ (__printf__, 2, 3))) ;
extern void verr (int __status, const char *__format, __gnuc_va_list)
     __attribute__ ((__noreturn__, __format__ (__printf__, 2, 0))) ;
extern void errx (int __status, const char *__format, ...)
     __attribute__ ((__noreturn__, __format__ (__printf__, 2, 3))) ;
extern void verrx (int __status, const char *, __gnuc_va_list)
     __attribute__ ((__noreturn__, __format__ (__printf__, 2, 0))) ;

#line 1 "/usr/include/bits/floatn.h"

















#line 56 "/usr/include/err.h"
#line 59 "/usr/include/err.h"


#line 21 "all.nc"
#line 1 "/usr/include/errno.h"




















#line 22 "all.nc"
#line 1 "/usr/include/error.h"


















#line 21 "/usr/include/error.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/error.h"








extern void error (int __status, int __errnum, const char *__format, ...)
     __attribute__ ((__format__ (__printf__, 3, 4))) ;

extern void error_at_line (int __status, int __errnum, const char *__fname,
			   unsigned int __lineno, const char *__format, ...)
     __attribute__ ((__format__ (__printf__, 5, 6))) ;




extern void (*error_print_progname) (void);


extern unsigned int error_message_count;



extern int error_one_per_line;

#line 1 "/usr/include/bits/floatn.h"

















#line 51 "/usr/include/error.h"
#line 54 "/usr/include/error.h"




#line 62 "/usr/include/error.h"


#line 23 "all.nc"
#line 1 "/usr/include/eti.h"



































#line 38 "/usr/include/eti.h"

#line 54 "/usr/include/eti.h"
#line 24 "all.nc"
#line 1 "/usr/include/execinfo.h"

















#line 20 "/usr/include/execinfo.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/execinfo.h"





extern int backtrace (void **__array, int __size) ;




extern char **backtrace_symbols (void *const *__array, int __size)
      ;




extern void backtrace_symbols_fd (void *const *__array, int __size, int __fd)
      ;


#line 25 "all.nc"
#line 1 "/usr/include/fcntl.h"





















#line 24 "/usr/include/fcntl.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/fcntl.h"





#line 1 "/usr/include/bits/types.h"





















#line 32 "/usr/include/fcntl.h"



#line 1 "/usr/include/bits/fcntl.h"


















#line 22 "/usr/include/bits/fcntl.h"

#line 26 "/usr/include/bits/fcntl.h"

#line 28 "/usr/include/bits/fcntl.h"

#line 33 "/usr/include/bits/fcntl.h"


struct flock
  {
    short int l_type;	
    short int l_whence;	
#line 40 "/usr/include/bits/fcntl.h"
    __off_t l_start;	
    __off_t l_len;	
#line 46 "/usr/include/bits/fcntl.h"
    __pid_t l_pid;	
  };

#line 50 "/usr/include/bits/fcntl.h"
struct flock64
  {
    short int l_type;	
    short int l_whence;	
    __off64_t l_start;	
    __off64_t l_len;	
    __pid_t l_pid;	
  };
#line 59 "/usr/include/bits/fcntl.h"


#line 1 "/usr/include/bits/fcntl-linux.h"


















#line 22 "/usr/include/bits/fcntl-linux.h"















#line 1 "/usr/include/bits/types/struct_iovec.h"


















#line 21 "/usr/include/bits/types/struct_iovec.h"

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
#line 24 "/usr/include/bits/types/struct_iovec.h"


struct iovec
  {
    void *iov_base;	
    size_t iov_len;	
  };
#line 39 "/usr/include/bits/fcntl-linux.h"
#line 40 "/usr/include/bits/fcntl-linux.h"


#line 77 "/usr/include/bits/fcntl-linux.h"

#line 102 "/usr/include/bits/fcntl-linux.h"

#line 119 "/usr/include/bits/fcntl-linux.h"












#line 136 "/usr/include/bits/fcntl-linux.h"

#line 140 "/usr/include/bits/fcntl-linux.h"

#line 146 "/usr/include/bits/fcntl-linux.h"

#line 153 "/usr/include/bits/fcntl-linux.h"




#line 165 "/usr/include/bits/fcntl-linux.h"


#line 172 "/usr/include/bits/fcntl-linux.h"

#line 177 "/usr/include/bits/fcntl-linux.h"

#line 182 "/usr/include/bits/fcntl-linux.h"

#line 191 "/usr/include/bits/fcntl-linux.h"

#line 198 "/usr/include/bits/fcntl-linux.h"

#line 209 "/usr/include/bits/fcntl-linux.h"

#line 219 "/usr/include/bits/fcntl-linux.h"


#line 222 "/usr/include/bits/fcntl-linux.h"

#line 224 "/usr/include/bits/fcntl-linux.h"

#line 229 "/usr/include/bits/fcntl-linux.h"



#line 236 "/usr/include/bits/fcntl-linux.h"

#line 238 "/usr/include/bits/fcntl-linux.h"

#line 245 "/usr/include/bits/fcntl-linux.h"

#line 252 "/usr/include/bits/fcntl-linux.h"

#line 254 "/usr/include/bits/fcntl-linux.h"

#line 263 "/usr/include/bits/fcntl-linux.h"


#line 266 "/usr/include/bits/fcntl-linux.h"

enum __pid_type
  {
    F_OWNER_TID = 0,		
    F_OWNER_PID,		
    F_OWNER_PGRP,		
    F_OWNER_GID = F_OWNER_PGRP	
  };


struct f_owner_ex
  {
    enum __pid_type type;	
    __pid_t pid;		
  };
#line 282 "/usr/include/bits/fcntl-linux.h"

#line 284 "/usr/include/bits/fcntl-linux.h"

#line 293 "/usr/include/bits/fcntl-linux.h"

#line 295 "/usr/include/bits/fcntl-linux.h"

#line 304 "/usr/include/bits/fcntl-linux.h"



#line 314 "/usr/include/bits/fcntl-linux.h"

#line 319 "/usr/include/bits/fcntl-linux.h"

#line 328 "/usr/include/bits/fcntl-linux.h"


#line 331 "/usr/include/bits/fcntl-linux.h"

#line 341 "/usr/include/bits/fcntl-linux.h"


#line 344 "/usr/include/bits/fcntl-linux.h"


#line 352 "/usr/include/bits/fcntl-linux.h"



#line 1 "/usr/include/linux/falloc.h"

#line 4 "/usr/include/linux/falloc.h"

#line 9 "/usr/include/linux/falloc.h"





















#line 31 "/usr/include/linux/falloc.h"













#line 45 "/usr/include/linux/falloc.h"
















#line 62 "/usr/include/linux/falloc.h"

















#line 80 "/usr/include/linux/falloc.h"
















#line 97 "/usr/include/linux/falloc.h"
#line 356 "/usr/include/bits/fcntl-linux.h"



struct file_handle
{
  unsigned int handle_bytes;
  int handle_type;
  
  unsigned char f_handle[0];
};


#line 370 "/usr/include/bits/fcntl-linux.h"

#line 372 "/usr/include/bits/fcntl-linux.h"



#line 383 "/usr/include/bits/fcntl-linux.h"



#line 387 "/usr/include/bits/fcntl-linux.h"


extern __ssize_t readahead (int __fd, __off64_t __offset, size_t __count)
    ;






extern int sync_file_range (int __fd, __off64_t __offset, __off64_t __count,
			    unsigned int __flags);






extern __ssize_t vmsplice (int __fdout, const struct iovec *__iov,
			   size_t __count, unsigned int __flags);





extern __ssize_t splice (int __fdin, __off64_t *__offin, int __fdout,
			 __off64_t *__offout, size_t __len,
			 unsigned int __flags);





extern __ssize_t tee (int __fdin, int __fdout, size_t __len,
		      unsigned int __flags);





#line 428 "/usr/include/bits/fcntl-linux.h"
extern int fallocate (int __fd, int __mode, __off_t __offset, __off_t __len);
#line 439 "/usr/include/bits/fcntl-linux.h"
extern int fallocate64 (int __fd, int __mode, __off64_t __offset,
			__off64_t __len);
#line 442 "/usr/include/bits/fcntl-linux.h"



extern int name_to_handle_at (int __dfd, const char *__name,
			      struct file_handle *__handle, int *__mnt_id,
			      int __flags) ;





extern int open_by_handle_at (int __mountdirfd, struct file_handle *__handle,
			      int __flags);

#line 457 "/usr/include/bits/fcntl-linux.h"

#line 62 "/usr/include/bits/fcntl.h"
#line 36 "/usr/include/fcntl.h"



#line 44 "/usr/include/fcntl.h"




#line 52 "/usr/include/fcntl.h"

#line 61 "/usr/include/fcntl.h"

#line 66 "/usr/include/fcntl.h"

#line 71 "/usr/include/fcntl.h"


#line 1 "/usr/include/bits/types/struct_timespec.h"
#line 75 "/usr/include/fcntl.h"
#line 1 "/usr/include/bits/stat.h"

















#line 21 "/usr/include/bits/stat.h"

#line 24 "/usr/include/bits/stat.h"

#line 1 "/usr/include/bits/struct_stat.h"


















#line 22 "/usr/include/bits/struct_stat.h"

#line 25 "/usr/include/bits/struct_stat.h"

struct stat
  {
#line 31 "/usr/include/bits/struct_stat.h"
    __dev_t st_dev;		
#line 36 "/usr/include/bits/struct_stat.h"
    __ino_t st_ino;		
#line 44 "/usr/include/bits/struct_stat.h"
    __nlink_t st_nlink;		
    __mode_t st_mode;		
#line 47 "/usr/include/bits/struct_stat.h"
    __uid_t st_uid;		
    __gid_t st_gid;		
#line 50 "/usr/include/bits/struct_stat.h"
    int __pad0;
#line 52 "/usr/include/bits/struct_stat.h"
    __dev_t st_rdev;		
#line 57 "/usr/include/bits/struct_stat.h"
    __off_t st_size;			
#line 61 "/usr/include/bits/struct_stat.h"
    __blksize_t st_blksize;	
#line 63 "/usr/include/bits/struct_stat.h"
    __blkcnt_t st_blocks;		
#line 68 "/usr/include/bits/struct_stat.h"
    





    struct timespec st_atim;		
    struct timespec st_mtim;		
    struct timespec st_ctim;		
#line 89 "/usr/include/bits/struct_stat.h"
    __syscall_slong_t __glibc_reserved[3];
#line 99 "/usr/include/bits/struct_stat.h"
  };

#line 102 "/usr/include/bits/struct_stat.h"

struct stat64
  {
#line 108 "/usr/include/bits/struct_stat.h"
    __dev_t st_dev;		
#line 110 "/usr/include/bits/struct_stat.h"
    __ino64_t st_ino;		
    __nlink_t st_nlink;		
    __mode_t st_mode;		
#line 119 "/usr/include/bits/struct_stat.h"
    __uid_t st_uid;		
    __gid_t st_gid;		
#line 122 "/usr/include/bits/struct_stat.h"
    int __pad0;
    __dev_t st_rdev;		
    __off_t st_size;		
#line 130 "/usr/include/bits/struct_stat.h"
    __blksize_t st_blksize;	
    __blkcnt64_t st_blocks;	
#line 133 "/usr/include/bits/struct_stat.h"
    





    struct timespec st_atim;		
    struct timespec st_mtim;		
    struct timespec st_ctim;		
#line 151 "/usr/include/bits/struct_stat.h"
    __syscall_slong_t __glibc_reserved[3];
#line 156 "/usr/include/bits/struct_stat.h"
  };
#line 158 "/usr/include/bits/struct_stat.h"


#line 162 "/usr/include/bits/struct_stat.h"

#line 164 "/usr/include/bits/struct_stat.h"
#line 26 "/usr/include/bits/stat.h"



#line 30 "/usr/include/bits/stat.h"


#line 39 "/usr/include/bits/stat.h"



#line 45 "/usr/include/bits/stat.h"



#line 54 "/usr/include/bits/stat.h"

#line 59 "/usr/include/bits/stat.h"
#line 78 "/usr/include/fcntl.h"

#line 93 "/usr/include/fcntl.h"



#line 98 "/usr/include/fcntl.h"

#line 100 "/usr/include/fcntl.h"

#line 103 "/usr/include/fcntl.h"

#line 107 "/usr/include/fcntl.h"

#line 109 "/usr/include/fcntl.h"

#line 113 "/usr/include/fcntl.h"

#line 115 "/usr/include/fcntl.h"

#line 119 "/usr/include/fcntl.h"

#line 122 "/usr/include/fcntl.h"

#line 133 "/usr/include/fcntl.h"


#line 140 "/usr/include/fcntl.h"







#line 168 "/usr/include/fcntl.h"






#line 176 "/usr/include/fcntl.h"
extern int fcntl (int __fd, int __cmd, ...);
#line 185 "/usr/include/fcntl.h"
extern int fcntl64 (int __fd, int __cmd, ...);
#line 199 "/usr/include/fcntl.h"








#line 208 "/usr/include/fcntl.h"
extern int open (const char *__file, int __oflag, ...) ;
#line 218 "/usr/include/fcntl.h"
extern int open64 (const char *__file, int __oflag, ...) ;
#line 220 "/usr/include/fcntl.h"

#line 222 "/usr/include/fcntl.h"









#line 232 "/usr/include/fcntl.h"
extern int openat (int __fd, const char *__file, int __oflag, ...)
     ;
#line 243 "/usr/include/fcntl.h"
extern int openat64 (int __fd, const char *__file, int __oflag, ...)
     ;
#line 247 "/usr/include/fcntl.h"






#line 254 "/usr/include/fcntl.h"
extern int creat (const char *__file, mode_t __mode) ;
#line 264 "/usr/include/fcntl.h"
extern int creat64 (const char *__file, mode_t __mode) ;
#line 266 "/usr/include/fcntl.h"

#line 268 "/usr/include/fcntl.h"








#line 280 "/usr/include/fcntl.h"

#line 282 "/usr/include/fcntl.h"
extern int lockf (int __fd, int __cmd, off_t __len) ;
#line 292 "/usr/include/fcntl.h"
extern int lockf64 (int __fd, int __cmd, off64_t __len) ;
#line 295 "/usr/include/fcntl.h"

#line 297 "/usr/include/fcntl.h"


#line 300 "/usr/include/fcntl.h"
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
			  int __advise) ;
#line 312 "/usr/include/fcntl.h"
extern int posix_fadvise64 (int __fd, off64_t __offset, off64_t __len,
			    int __advise) ;
#line 315 "/usr/include/fcntl.h"






#line 322 "/usr/include/fcntl.h"
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
#line 333 "/usr/include/fcntl.h"
extern int posix_fallocate64 (int __fd, off64_t __offset, off64_t __len);
#line 336 "/usr/include/fcntl.h"



#line 342 "/usr/include/fcntl.h"


#line 26 "all.nc"
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
#line 27 "all.nc"
#line 1 "/usr/include/features.h"
















#line 28 "all.nc"
#line 1 "/usr/include/fenv.h"





















#line 24 "/usr/include/fenv.h"

#line 1 "/usr/include/bits/libc-header-start.h"


























#line 30 "/usr/include/bits/libc-header-start.h"

#line 32 "/usr/include/bits/libc-header-start.h"

#line 1 "/usr/include/features.h"
















#line 34 "/usr/include/bits/libc-header-start.h"



#line 43 "/usr/include/bits/libc-header-start.h"























#line 84 "/usr/include/bits/libc-header-start.h"





#line 101 "/usr/include/bits/libc-header-start.h"


#line 27 "/usr/include/fenv.h"





































#line 1 "/usr/include/bits/fenv.h"

















#line 21 "/usr/include/bits/fenv.h"



enum
  {
    FE_INVALID =
#line 28 "/usr/include/bits/fenv.h"
      0x01,
    __FE_DENORM = 0x02,
    FE_DIVBYZERO =
#line 32 "/usr/include/bits/fenv.h"
      0x04,
    FE_OVERFLOW =
#line 35 "/usr/include/bits/fenv.h"
      0x08,
    FE_UNDERFLOW =
#line 38 "/usr/include/bits/fenv.h"
      0x10,
    FE_INEXACT =
#line 41 "/usr/include/bits/fenv.h"
      0x20
  };

#line 45 "/usr/include/bits/fenv.h"




enum
  {
    FE_TONEAREST =
#line 53 "/usr/include/bits/fenv.h"
      0,
    FE_DOWNWARD =
#line 56 "/usr/include/bits/fenv.h"
      0x400,
    FE_UPWARD =
#line 59 "/usr/include/bits/fenv.h"
      0x800,
    FE_TOWARDZERO =
#line 62 "/usr/include/bits/fenv.h"
      0xc00
  };



typedef unsigned short int fexcept_t;






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
#line 90 "/usr/include/bits/fenv.h"
    unsigned int __mxcsr;
#line 92 "/usr/include/bits/fenv.h"
  }
fenv_t;


#line 97 "/usr/include/bits/fenv.h"

#line 99 "/usr/include/bits/fenv.h"

#line 102 "/usr/include/bits/fenv.h"

#line 104 "/usr/include/bits/fenv.h"

typedef struct
  {
    unsigned short int __control_word;
    unsigned short int __glibc_reserved;
    unsigned int __mxcsr;
  }
femode_t;

#line 65 "/usr/include/fenv.h"






extern int feclearexcept (int __excepts) ;



extern int fegetexceptflag (fexcept_t *__flagp, int __excepts) ;


extern int feraiseexcept (int __excepts) ;

#line 81 "/usr/include/fenv.h"


extern int fesetexcept (int __excepts) ;
#line 85 "/usr/include/fenv.h"



extern int fesetexceptflag (const fexcept_t *__flagp, int __excepts) ;



extern int fetestexcept (int __excepts) ;

#line 95 "/usr/include/fenv.h"


extern int fetestexceptflag (const fexcept_t *__flagp, int __excepts) ;
#line 99 "/usr/include/fenv.h"





extern int fegetround (void)  __attribute__ ((__pure__));


extern int fesetround (int __rounding_direction) ;






extern int fegetenv (fenv_t *__envp) ;




extern int feholdexcept (fenv_t *__envp) ;



extern int fesetenv (const fenv_t *__envp) ;




extern int feupdateenv (const fenv_t *__envp) ;




#line 134 "/usr/include/fenv.h"


extern int fegetmode (femode_t *__modep) ;



extern int fesetmode (const femode_t *__modep) ;
#line 142 "/usr/include/fenv.h"




#line 149 "/usr/include/fenv.h"

#line 151 "/usr/include/fenv.h"




extern int feenableexcept (int __excepts) ;




extern int fedisableexcept (int __excepts) ;


extern int fegetexcept (void) ;
#line 165 "/usr/include/fenv.h"


#line 29 "all.nc"
#line 1 "/usr/include/fmtmsg.h"


















#line 21 "/usr/include/fmtmsg.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/fmtmsg.h"





enum
{
  MM_HARD = 0x001,	
#line 32 "/usr/include/fmtmsg.h"
  MM_SOFT = 0x002,	
#line 34 "/usr/include/fmtmsg.h"
  MM_FIRM = 0x004,	
#line 36 "/usr/include/fmtmsg.h"
  MM_APPL = 0x008,	
#line 38 "/usr/include/fmtmsg.h"
  MM_UTIL = 0x010,	
#line 40 "/usr/include/fmtmsg.h"
  MM_OPSYS = 0x020,	
#line 42 "/usr/include/fmtmsg.h"
  MM_RECOVER = 0x040,	
#line 44 "/usr/include/fmtmsg.h"
  MM_NRECOV = 0x080,	
#line 46 "/usr/include/fmtmsg.h"
  MM_PRINT = 0x100,	
#line 48 "/usr/include/fmtmsg.h"
  MM_CONSOLE = 0x200	
#line 50 "/usr/include/fmtmsg.h"
};


enum
{
  MM_NOSEV = 0,		
#line 57 "/usr/include/fmtmsg.h"
  MM_HALT,		
#line 59 "/usr/include/fmtmsg.h"
  MM_ERROR,		
#line 61 "/usr/include/fmtmsg.h"
  MM_WARNING,		

#line 64 "/usr/include/fmtmsg.h"
  MM_INFO		
#line 66 "/usr/include/fmtmsg.h"
};



#line 76 "/usr/include/fmtmsg.h"



enum
{
  MM_NOTOK = -1,
#line 83 "/usr/include/fmtmsg.h"
  MM_OK = 0,
#line 85 "/usr/include/fmtmsg.h"
  MM_NOMSG = 1,
#line 87 "/usr/include/fmtmsg.h"
  MM_NOCON = 4
#line 89 "/usr/include/fmtmsg.h"
};




extern int fmtmsg (long int __classification, const char *__label,
		   int __severity, const char *__text,
		   const char *__action, const char *__tag);

#line 99 "/usr/include/fmtmsg.h"

extern int addseverity (int __severity, const char *__string) ;
#line 102 "/usr/include/fmtmsg.h"


#line 30 "all.nc"
#line 1 "/usr/include/fnmatch.h"

















#line 20 "/usr/include/fnmatch.h"

#line 24 "/usr/include/fnmatch.h"



#line 30 "/usr/include/fnmatch.h"


#line 35 "/usr/include/fnmatch.h"

#line 42 "/usr/include/fnmatch.h"


#line 45 "/usr/include/fnmatch.h"





#line 53 "/usr/include/fnmatch.h"



extern int fnmatch (const char *__pattern, const char *__name, int __flags);

#line 61 "/usr/include/fnmatch.h"
#line 31 "all.nc"
#line 1 "/usr/include/form.h"



































#line 38 "/usr/include/form.h"


#line 1 "/usr/include/curses.h"




































#line 41 "/usr/include/form.h"
#line 1 "/usr/include/eti.h"


































#line 42 "/usr/include/form.h"

#line 46 "/usr/include/form.h"

#line 52 "/usr/include/form.h"

#line 54 "/usr/include/form.h"

#line 57 "/usr/include/form.h"

#line 59 "/usr/include/form.h"
typedef void *FIELD_CELL;
#line 61 "/usr/include/form.h"

#line 65 "/usr/include/form.h"

typedef int Form_Options;
typedef int Field_Options;

	



typedef struct pagenode
#line 82 "/usr/include/form.h"
_PAGE;

	



typedef struct fieldnode
#line 90 "/usr/include/form.h"
{
  unsigned short	status;		
  short			rows;		
  short			cols;		
  short			frow;		
  short			fcol;		
  int			drows;		
  int			dcols;		
  int			maxgrow;	
  int			nrow;		
  short			nbuf;		
  short			just;		
  short			page;		
  short			index;		
  int			pad;		
  chtype		fore;		
  chtype		back;		
  Field_Options		opts;		
  struct fieldnode *	snext;		
  struct fieldnode *	sprev;		
  struct fieldnode *	link;		
  struct formnode *	form;		
  struct typenode *	type;		
  void *		arg;		
  FIELD_CELL *		buf;		
  void *		usrptr;		
  







  
}
#line 127 "/usr/include/form.h"
FIELD;


	



typedef struct formnode
#line 136 "/usr/include/form.h"
{
  unsigned short	status;	  	
  short			rows;		
  short			cols;		
  int			currow;		
  int			curcol;		
  int			toprow;		
  int			begincol;	
  short			maxfield;	
  short			maxpage;	
  short			curpage;	
  Form_Options		opts;		
  WINDOW *		win;		
  WINDOW *		sub;		
  WINDOW *		w;		
  FIELD **		field;		
  FIELD *		current;	
  _PAGE *		page;		
  void *		usrptr;		

  void			(*forminit)(struct formnode *);
  void			(*formterm)(struct formnode *);
  void			(*fieldinit)(struct formnode *);
  void			(*fieldterm)(struct formnode *);

}
#line 163 "/usr/include/form.h"
FORM;


	



typedef struct typenode
#line 210 "/usr/include/form.h"
FIELDTYPE;

typedef void (*Form_Hook)(FORM *);

	




#line 223 "/usr/include/form.h"


#line 239 "/usr/include/form.h"


#line 243 "/usr/include/form.h"


#line 249 "/usr/include/form.h"

#line 262 "/usr/include/form.h"

#line 277 "/usr/include/form.h"

#line 302 "/usr/include/form.h"

#line 306 "/usr/include/form.h"

#line 309 "/usr/include/form.h"

#line 319 "/usr/include/form.h"

	


extern  FIELDTYPE * TYPE_ALPHA;
extern  FIELDTYPE * TYPE_ALNUM;
extern  FIELDTYPE * TYPE_ENUM;
extern  FIELDTYPE * TYPE_INTEGER;
extern  FIELDTYPE * TYPE_NUMERIC;
extern  FIELDTYPE * TYPE_REGEXP;

	



extern  FIELDTYPE * TYPE_IPV4;      

	


extern  FIELDTYPE *  new_fieldtype (
		    _Bool (* const field_check)(FIELD *,const void *),
		    _Bool (* const char_check)(int,const void *));
extern  FIELDTYPE *  link_fieldtype(
		    FIELDTYPE *, FIELDTYPE *);

extern  int 	free_fieldtype (FIELDTYPE *);
extern  int 	set_fieldtype_arg (FIELDTYPE *,
		    void * (* const make_arg)(va_list *),
		    void * (* const copy_arg)(const void *),
		    void (* const free_arg)(void *));
extern  int 	 set_fieldtype_choice (FIELDTYPE *,
		    _Bool (* const next_choice)(FIELD *,const void *),
	      	    _Bool (* const prev_choice)(FIELD *,const void *));

	


extern  FIELD * 	new_field (int,int,int,int,int,int);
extern  FIELD * 	dup_field (FIELD *,int,int);
extern  FIELD * 	link_field (FIELD *,int,int);

extern  int 	free_field (FIELD *);
extern  int 	field_info (const FIELD *,int *,int *,int *,int *,int *,int *);
extern  int 	dynamic_field_info (const FIELD *,int *,int *,int *);
extern  int 	set_max_field ( FIELD *,int);
extern  int 	move_field (FIELD *,int,int);
extern  int 	set_field_type (FIELD *,FIELDTYPE *,...);
extern  int 	set_new_page (FIELD *,_Bool);
extern  int 	set_field_just (FIELD *,int);
extern  int 	field_just (const FIELD *);
extern  int 	set_field_fore (FIELD *,chtype);
extern  int 	set_field_back (FIELD *,chtype);
extern  int 	set_field_pad (FIELD *,int);
extern  int 	field_pad (const FIELD *);
extern  int 	set_field_buffer (FIELD *,int,const char *);
extern  int 	set_field_status (FIELD *,_Bool);
extern  int 	set_field_userptr (FIELD *, void *);
extern  int 	set_field_opts (FIELD *,Field_Options);
extern  int 	field_opts_on (FIELD *,Field_Options);
extern  int 	field_opts_off (FIELD *,Field_Options);

extern  chtype 	field_fore (const FIELD *);
extern  chtype 	field_back (const FIELD *);

extern  _Bool 	new_page (const FIELD *);
extern  _Bool 	field_status (const FIELD *);

extern  void * 	field_arg (const FIELD *);

extern  void * 	field_userptr (const FIELD *);

extern  FIELDTYPE * 	field_type (const FIELD *);

extern  char * 	field_buffer (const FIELD *,int);

extern  Field_Options 	field_opts (const FIELD *);

	



extern  FORM * 	new_form (FIELD **);

extern  FIELD ** 	form_fields (const FORM *);
extern  FIELD * 	current_field (const FORM *);

extern  WINDOW * 	form_win (const FORM *);
extern  WINDOW * 	form_sub (const FORM *);

extern  Form_Hook 	form_init (const FORM *);
extern  Form_Hook 	form_term (const FORM *);
extern  Form_Hook 	field_init (const FORM *);
extern  Form_Hook 	field_term (const FORM *);

extern  int 	free_form (FORM *);
extern  int 	set_form_fields (FORM *,FIELD **);
extern  int 	field_count (const FORM *);
extern  int 	set_form_win (FORM *,WINDOW *);
extern  int 	set_form_sub (FORM *,WINDOW *);
extern  int 	set_current_field (FORM *,FIELD *);
extern  int 	unfocus_current_field (FORM *);
extern  int 	field_index (const FIELD *);
extern  int 	set_form_page (FORM *,int);
extern  int 	form_page (const FORM *);
extern  int 	scale_form (const FORM *,int *,int *);
extern  int 	set_form_init (FORM *,Form_Hook);
extern  int 	set_form_term (FORM *,Form_Hook);
extern  int 	set_field_init (FORM *,Form_Hook);
extern  int 	set_field_term (FORM *,Form_Hook);
extern  int 	post_form (FORM *);
extern  int 	unpost_form (FORM *);
extern  int 	pos_form_cursor (FORM *);
extern  int 	form_driver (FORM *,int);
#line 434 "/usr/include/form.h"
extern  int 	form_driver_w (FORM *,int,wchar_t);
#line 436 "/usr/include/form.h"
extern  int 	set_form_userptr (FORM *,void *);
extern  int 	set_form_opts (FORM *,Form_Options);
extern  int 	form_opts_on (FORM *,Form_Options);
extern  int 	form_opts_off (FORM *,Form_Options);
extern  int 	form_request_by_name (const char *);

extern  const char * 	form_request_name (int);

extern  void * 	form_userptr (const FORM *);

extern  Form_Options 	form_opts (const FORM *);

extern  _Bool 	data_ahead (const FORM *);
extern  _Bool 	data_behind (const FORM *);

#line 452 "/usr/include/form.h"
extern  FORM * 	new_form_sp (SCREEN*, FIELD **);
#line 454 "/usr/include/form.h"

#line 458 "/usr/include/form.h"

#line 32 "all.nc"
#line 1 "/usr/include/fpu_control.h"


















#line 21 "/usr/include/fpu_control.h"




































#line 1 "/usr/include/features.h"
















#line 58 "/usr/include/fpu_control.h"


#line 66 "/usr/include/fpu_control.h"


#line 71 "/usr/include/fpu_control.h"


#line 77 "/usr/include/fpu_control.h"

#line 79 "/usr/include/fpu_control.h"





#line 85 "/usr/include/fpu_control.h"


#line 88 "/usr/include/fpu_control.h"


typedef unsigned int fpu_control_t __attribute__ ((__mode__ (__HI__)));











#line 104 "/usr/include/fpu_control.h"


extern fpu_control_t __fpu_control;
#line 33 "all.nc"
#line 1 "/usr/include/fts.h"

















































#line 52 "/usr/include/fts.h"

#line 1 "/usr/include/features.h"
















#line 54 "/usr/include/fts.h"
#line 1 "/usr/include/sys/types.h"




















#line 55 "/usr/include/fts.h"


typedef struct {
	struct _ftsent *fts_cur;	
	struct _ftsent *fts_child;	
	struct _ftsent **fts_array;	
	dev_t fts_dev;			
	char *fts_path;			
	int fts_rfd;			
	int fts_pathlen;		
	int fts_nitems;			
	int (*fts_compar) (const void *, const void *); 

#line 77 "/usr/include/fts.h"

#line 80 "/usr/include/fts.h"
	int fts_options;		
} FTS;

#line 84 "/usr/include/fts.h"
typedef struct {
	struct _ftsent64 *fts_cur;	
	struct _ftsent64 *fts_child;	
	struct _ftsent64 **fts_array;	
	dev_t fts_dev;			
	char *fts_path;			
	int fts_rfd;			
	int fts_pathlen;		
	int fts_nitems;			
	int (*fts_compar) (const void *, const void *); 
	int fts_options;		
} FTS64;
#line 97 "/usr/include/fts.h"

typedef struct _ftsent {
	struct _ftsent *fts_cycle;	
	struct _ftsent *fts_parent;	
	struct _ftsent *fts_link;	
	long fts_number;	        
	void *fts_pointer;	        
	char *fts_accpath;		
	char *fts_path;			
	int fts_errno;			
	int fts_symfd;			
	unsigned short fts_pathlen;	
	unsigned short fts_namelen;	

	ino_t fts_ino;			
	dev_t fts_dev;			
	nlink_t fts_nlink;		

#line 117 "/usr/include/fts.h"
	short fts_level;		

#line 133 "/usr/include/fts.h"
	unsigned short fts_info;	

#line 137 "/usr/include/fts.h"
	unsigned short fts_flags;	

#line 143 "/usr/include/fts.h"
	unsigned short fts_instr;	

	struct stat *fts_statp;		
	char fts_name[1];		
} FTSENT;

#line 150 "/usr/include/fts.h"
typedef struct _ftsent64 {
	struct _ftsent64 *fts_cycle;	
	struct _ftsent64 *fts_parent;	
	struct _ftsent64 *fts_link;	
	long fts_number;	        
	void *fts_pointer;	        
	char *fts_accpath;		
	char *fts_path;			
	int fts_errno;			
	int fts_symfd;			
	unsigned short fts_pathlen;		
	unsigned short fts_namelen;		

	ino64_t fts_ino;		
	dev_t fts_dev;			
	nlink_t fts_nlink;		

	short fts_level;		

	unsigned short fts_info;	

	unsigned short fts_flags;	

	unsigned short fts_instr;	

	struct stat64 *fts_statp;	
	char fts_name[1];		
} FTSENT64;
#line 179 "/usr/include/fts.h"


#line 182 "/usr/include/fts.h"
FTSENT	*fts_children (FTS *, int);
int	 fts_close (FTS *);
FTS	*fts_open (char * const *, int,
		   int (*)(const FTSENT **, const FTSENT **));
FTSENT	*fts_read (FTS *);
int	 fts_set (FTS *, FTSENT *, int) ;
#line 221 "/usr/include/fts.h"
FTSENT64 *fts64_children (FTS64 *, int);
int	  fts64_close (FTS64 *);
FTS64	 *fts64_open (char * const *, int,
		      int (*)(const FTSENT64 **, const FTSENT64 **));
FTSENT64 *fts64_read (FTS64 *);
int	 fts64_set (FTS64 *, FTSENT64 *, int) ;
#line 246 "/usr/include/fts.h"

#line 34 "all.nc"
#line 1 "/usr/include/ftw.h"





















#line 24 "/usr/include/ftw.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/ftw.h"

#line 1 "/usr/include/sys/types.h"




















#line 28 "/usr/include/ftw.h"
#line 1 "/usr/include/sys/stat.h"





















#line 24 "/usr/include/sys/stat.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/sys/stat.h"

#line 1 "/usr/include/bits/types.h"





















#line 28 "/usr/include/sys/stat.h"

#line 1 "/usr/include/bits/types/struct_timespec.h"
#line 31 "/usr/include/sys/stat.h"
#line 32 "/usr/include/sys/stat.h"

#line 34 "/usr/include/sys/stat.h"



#line 1 "/usr/include/bits/types/time_t.h"
#line 38 "/usr/include/sys/stat.h"

#line 43 "/usr/include/sys/stat.h"

#line 48 "/usr/include/sys/stat.h"

#line 57 "/usr/include/sys/stat.h"

#line 62 "/usr/include/sys/stat.h"

#line 67 "/usr/include/sys/stat.h"

#line 76 "/usr/include/sys/stat.h"

#line 82 "/usr/include/sys/stat.h"

#line 92 "/usr/include/sys/stat.h"

#line 98 "/usr/include/sys/stat.h"



#line 1 "/usr/include/bits/stat.h"

















#line 21 "/usr/include/bits/stat.h"
#line 102 "/usr/include/sys/stat.h"

#line 119 "/usr/include/sys/stat.h"



#line 123 "/usr/include/sys/stat.h"

#line 134 "/usr/include/sys/stat.h"

#line 138 "/usr/include/sys/stat.h"

#line 144 "/usr/include/sys/stat.h"





#line 154 "/usr/include/sys/stat.h"




#line 160 "/usr/include/sys/stat.h"

#line 162 "/usr/include/sys/stat.h"

#line 165 "/usr/include/sys/stat.h"

#line 169 "/usr/include/sys/stat.h"

#line 171 "/usr/include/sys/stat.h"

#line 177 "/usr/include/sys/stat.h"

#line 181 "/usr/include/sys/stat.h"

#line 183 "/usr/include/sys/stat.h"

#line 187 "/usr/include/sys/stat.h"

#line 189 "/usr/include/sys/stat.h"


#line 192 "/usr/include/sys/stat.h"

#line 196 "/usr/include/sys/stat.h"

#line 199 "/usr/include/sys/stat.h"


#line 202 "/usr/include/sys/stat.h"

extern int stat (const char *__restrict __file,
		 struct stat *__restrict __buf)  ;



extern int fstat (int __fd, struct stat *__buf)  ;
#line 238 "/usr/include/sys/stat.h"
extern int stat64 (const char *__restrict __file,
		   struct stat64 *__restrict __buf)  ;
extern int fstat64 (int __fd, struct stat64 *__buf)  ;
#line 256 "/usr/include/sys/stat.h"

#line 258 "/usr/include/sys/stat.h"



#line 262 "/usr/include/sys/stat.h"
extern int fstatat (int __fd, const char *__restrict __file,
		    struct stat *__restrict __buf, int __flag)
      ;
#line 286 "/usr/include/sys/stat.h"

#line 289 "/usr/include/sys/stat.h"
extern int fstatat64 (int __fd, const char *__restrict __file,
		      struct stat64 *__restrict __buf, int __flag)
      ;
#line 306 "/usr/include/sys/stat.h"

#line 309 "/usr/include/sys/stat.h"


extern int lstat (const char *__restrict __file,
		  struct stat *__restrict __buf)  ;
#line 336 "/usr/include/sys/stat.h"
extern int lstat64 (const char *__restrict __file,
		    struct stat64 *__restrict __buf)
      ;
#line 347 "/usr/include/sys/stat.h"



extern int chmod (const char *__file, __mode_t __mode)
      ;

#line 354 "/usr/include/sys/stat.h"



extern int lchmod (const char *__file, __mode_t __mode)
      ;
#line 360 "/usr/include/sys/stat.h"


#line 363 "/usr/include/sys/stat.h"
extern int fchmod (int __fd, __mode_t __mode) ;
#line 365 "/usr/include/sys/stat.h"

#line 367 "/usr/include/sys/stat.h"


extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
		     int __flag)
       ;
#line 373 "/usr/include/sys/stat.h"





extern __mode_t umask (__mode_t __mask) ;

#line 381 "/usr/include/sys/stat.h"


extern __mode_t getumask (void) ;
#line 385 "/usr/include/sys/stat.h"


extern int mkdir (const char *__path, __mode_t __mode)
      ;

#line 391 "/usr/include/sys/stat.h"



extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
      ;
#line 397 "/usr/include/sys/stat.h"




#line 402 "/usr/include/sys/stat.h"
extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
      ;

#line 406 "/usr/include/sys/stat.h"



extern int mknodat (int __fd, const char *__path, __mode_t __mode,
		    __dev_t __dev)  ;
#line 413 "/usr/include/sys/stat.h"



extern int mkfifo (const char *__path, __mode_t __mode)
      ;

#line 420 "/usr/include/sys/stat.h"



extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
      ;
#line 426 "/usr/include/sys/stat.h"

#line 429 "/usr/include/sys/stat.h"


extern int utimensat (int __fd, const char *__path,
		      const struct timespec __times[2],
		      int __flags)
     ;
#line 446 "/usr/include/sys/stat.h"

#line 449 "/usr/include/sys/stat.h"

extern int futimens (int __fd, const struct timespec __times[2]) ;

#line 461 "/usr/include/sys/stat.h"

#line 1 "/usr/include/bits/statx.h"




















#line 24 "/usr/include/bits/statx.h"





#line 38 "/usr/include/bits/statx.h"

#line 1 "/usr/include/bits/statx-generic.h"




















#line 24 "/usr/include/bits/statx-generic.h"

#line 1 "/usr/include/bits/types/struct_statx_timestamp.h"


















#line 22 "/usr/include/bits/types/struct_statx_timestamp.h"

#line 25 "/usr/include/bits/types/struct_statx_timestamp.h"

struct statx_timestamp
{
  __int64_t tv_sec;
  __uint32_t tv_nsec;
  __int32_t __statx_timestamp_pad1[1];
};
#line 26 "/usr/include/bits/statx-generic.h"
#line 1 "/usr/include/bits/types/struct_statx.h"


















#line 22 "/usr/include/bits/types/struct_statx.h"

#line 25 "/usr/include/bits/types/struct_statx.h"





struct statx
{
  __uint32_t stx_mask;
  __uint32_t stx_blksize;
  __uint64_t stx_attributes;
  __uint32_t stx_nlink;
  __uint32_t stx_uid;
  __uint32_t stx_gid;
  __uint16_t stx_mode;
  __uint16_t __statx_pad1[1];
  __uint64_t stx_ino;
  __uint64_t stx_size;
  __uint64_t stx_blocks;
  __uint64_t stx_attributes_mask;
  struct statx_timestamp stx_atime;
  struct statx_timestamp stx_btime;
  struct statx_timestamp stx_ctime;
  struct statx_timestamp stx_mtime;
  __uint32_t stx_rdev_major;
  __uint32_t stx_rdev_minor;
  __uint32_t stx_dev_major;
  __uint32_t stx_dev_minor;
  __uint64_t __statx_pad2[14];
};
#line 27 "/usr/include/bits/statx-generic.h"

#line 49 "/usr/include/bits/statx-generic.h"

#line 61 "/usr/include/bits/statx-generic.h"




int statx (int __dirfd, const char *__restrict __path, int __flags,
           unsigned int __mask, struct statx *__restrict __buf)
   ;

#line 40 "/usr/include/bits/statx.h"
#line 464 "/usr/include/sys/stat.h"
#line 465 "/usr/include/sys/stat.h"



#line 29 "/usr/include/ftw.h"






enum
{
  FTW_F,		
#line 39 "/usr/include/ftw.h"
  FTW_D,		
#line 41 "/usr/include/ftw.h"
  FTW_DNR,		
#line 43 "/usr/include/ftw.h"
  FTW_NS,		
#line 45 "/usr/include/ftw.h"

#line 47 "/usr/include/ftw.h"

  FTW_SL,		
#line 51 "/usr/include/ftw.h"

#line 53 "/usr/include/ftw.h"

  FTW_DP,		
#line 56 "/usr/include/ftw.h"
  FTW_SLN		
#line 58 "/usr/include/ftw.h"

#line 60 "/usr/include/ftw.h"
};


#line 64 "/usr/include/ftw.h"

enum
{
  FTW_PHYS = 1,		
#line 69 "/usr/include/ftw.h"
  FTW_MOUNT = 2,	

#line 72 "/usr/include/ftw.h"
  FTW_CHDIR = 4,	
#line 74 "/usr/include/ftw.h"
  FTW_DEPTH = 8		
#line 77 "/usr/include/ftw.h"
  ,
  FTW_ACTIONRETVAL = 16	

#line 82 "/usr/include/ftw.h"
};

#line 85 "/usr/include/ftw.h"

enum
{
  FTW_CONTINUE = 0,	

#line 91 "/usr/include/ftw.h"
  FTW_STOP = 1,		

#line 94 "/usr/include/ftw.h"
  FTW_SKIP_SUBTREE = 2,	


#line 98 "/usr/include/ftw.h"
  FTW_SKIP_SIBLINGS = 3,

#line 101 "/usr/include/ftw.h"
};
#line 103 "/usr/include/ftw.h"


struct FTW
  {
    int base;
    int level;
  };
#line 111 "/usr/include/ftw.h"



typedef int (*__ftw_func_t) (const char *__filename,
			     const struct stat *__status, int __flag);
#line 117 "/usr/include/ftw.h"
typedef int (*__ftw64_func_t) (const char *__filename,
			       const struct stat64 *__status, int __flag);
#line 121 "/usr/include/ftw.h"
typedef int (*__nftw_func_t) (const char *__filename,
			      const struct stat *__status, int __flag,
			      struct FTW *__info);
#line 125 "/usr/include/ftw.h"
typedef int (*__nftw64_func_t) (const char *__filename,
				const struct stat64 *__status,
				int __flag, struct FTW *__info);
#line 130 "/usr/include/ftw.h"





#line 136 "/usr/include/ftw.h"
extern int ftw (const char *__dir, __ftw_func_t __func, int __descriptors)
     ;
#line 158 "/usr/include/ftw.h"
extern int ftw64 (const char *__dir, __ftw64_func_t __func,
		  int __descriptors) ;
#line 171 "/usr/include/ftw.h"

#line 173 "/usr/include/ftw.h"





#line 179 "/usr/include/ftw.h"
extern int nftw (const char *__dir, __nftw_func_t __func, int __descriptors,
		 int __flag) ;
#line 202 "/usr/include/ftw.h"
extern int nftw64 (const char *__dir, __nftw64_func_t __func,
		   int __descriptors, int __flag) ;
#line 216 "/usr/include/ftw.h"


#line 35 "all.nc"
#line 1 "/usr/include/gconv.h"





















#line 24 "/usr/include/gconv.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/gconv.h"
#line 1 "/usr/include/bits/types/__mbstate_t.h"
#line 27 "/usr/include/gconv.h"
#line 1 "/usr/include/bits/types/wint_t.h"
#line 28 "/usr/include/gconv.h"

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

#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 32 "/usr/include/gconv.h"


#line 35 "/usr/include/gconv.h"


enum
{
  __GCONV_OK = 0,
  __GCONV_NOCONV,
  __GCONV_NODB,
  __GCONV_NOMEM,

  __GCONV_EMPTY_INPUT,
  __GCONV_FULL_OUTPUT,
  __GCONV_ILLEGAL_INPUT,
  __GCONV_INCOMPLETE_INPUT,

  __GCONV_ILLEGAL_DESCRIPTOR,
  __GCONV_INTERNAL_ERROR
};



enum
{
  __GCONV_IS_LAST = 0x0001,
  __GCONV_IGNORE_ERRORS = 0x0002,
  __GCONV_SWAP = 0x0004,
  __GCONV_TRANSLIT = 0x0008
};



struct __gconv_step;
struct __gconv_step_data;
struct __gconv_loaded_object;



typedef int (*__gconv_fct) (struct __gconv_step *, struct __gconv_step_data *,
			    const unsigned char **, const unsigned char *,
			    unsigned char **, size_t *, int, int);


typedef wint_t (*__gconv_btowc_fct) (struct __gconv_step *, unsigned char);


typedef int (*__gconv_init_fct) (struct __gconv_step *);
typedef void (*__gconv_end_fct) (struct __gconv_step *);



struct __gconv_step
{
  struct __gconv_loaded_object *__shlib_handle;
  const char *__modname;

  

  int __counter;

  char *__from_name;
  char *__to_name;

  __gconv_fct __fct;
  __gconv_btowc_fct __btowc_fct;
  __gconv_init_fct __init_fct;
  __gconv_end_fct __end_fct;

  

  int __min_needed_from;
  int __max_needed_from;
  int __min_needed_to;
  int __max_needed_to;

  
  int __stateful;

  void *__data;		
};



struct __gconv_step_data
{
  unsigned char *__outbuf;    
  unsigned char *__outbufend; 


  
  int __flags;

  

  int __invocation_counter;

  

  int __internal_use;

  __mbstate_t *__statep;
  __mbstate_t __state;	

};



typedef struct __gconv_info
{
  size_t __nsteps;
  struct __gconv_step *__steps;
  struct __gconv_step_data __data[0];
} *__gconv_t;
#line 36 "all.nc"
#line 1 "/usr/include/getopt.h"



















#line 37 "all.nc"
#line 1 "/usr/include/glob.h"

















#line 20 "/usr/include/glob.h"

#line 1 "/usr/include/sys/cdefs.h"

















#line 22 "/usr/include/glob.h"




#line 27 "/usr/include/glob.h"
typedef unsigned long __size_t;
#line 29 "/usr/include/glob.h"
typedef unsigned long size_t;
#line 37 "/usr/include/glob.h"


#line 47 "/usr/include/glob.h"

#line 61 "/usr/include/glob.h"


#line 68 "/usr/include/glob.h"


#line 72 "/usr/include/glob.h"


#line 75 "/usr/include/glob.h"
struct stat;
#line 77 "/usr/include/glob.h"
typedef struct
  {
    __size_t gl_pathc;		
    char **gl_pathv;		
    __size_t gl_offs;		
    int gl_flags;		

    

    void (*gl_closedir) (void *);
#line 88 "/usr/include/glob.h"
    struct dirent *(*gl_readdir) (void *);
#line 92 "/usr/include/glob.h"
    void *(*gl_opendir) (const char *);
#line 94 "/usr/include/glob.h"
    int (*gl_lstat) (const char *__restrict, struct stat *__restrict);
    int (*gl_stat) (const char *__restrict, struct stat *__restrict);
#line 100 "/usr/include/glob.h"
  } glob_t;

#line 104 "/usr/include/glob.h"
struct stat64;
#line 106 "/usr/include/glob.h"
typedef struct
  {
    __size_t gl_pathc;
    char **gl_pathv;
    __size_t gl_offs;
    int gl_flags;

    

    void (*gl_closedir) (void *);
#line 117 "/usr/include/glob.h"
    struct dirent64 *(*gl_readdir) (void *);
#line 121 "/usr/include/glob.h"
    void *(*gl_opendir) (const char *);
#line 123 "/usr/include/glob.h"
    int (*gl_lstat) (const char *__restrict, struct stat64 *__restrict);
    int (*gl_stat) (const char *__restrict, struct stat64 *__restrict);
#line 129 "/usr/include/glob.h"
  } glob64_t;
#line 131 "/usr/include/glob.h"









#line 141 "/usr/include/glob.h"
extern int glob (const char *__restrict __pattern, int __flags,
		 int (*__errfunc) (const char *, int),
		 glob_t *__restrict __pglob) ;


extern void globfree (glob_t *__pglob) ;
#line 166 "/usr/include/glob.h"

#line 178 "/usr/include/glob.h"
extern int glob64 (const char *__restrict __pattern, int __flags,
		   int (*__errfunc) (const char *, int),
		   glob64_t *__restrict __pglob) ;

extern void globfree64 (glob64_t *__pglob) ;
#line 185 "/usr/include/glob.h"


#line 188 "/usr/include/glob.h"





extern int glob_pattern_p (const char *__pattern, int __quote) 
	;
#line 196 "/usr/include/glob.h"


#line 38 "all.nc"
#line 1 "/usr/include/gnu-versions.h"


















#line 21 "/usr/include/gnu-versions.h"

























#line 51 "/usr/include/gnu-versions.h"
#line 39 "all.nc"
#line 1 "/usr/include/gnumake.h"


















#line 21 "/usr/include/gnumake.h"


typedef struct
  {
    const char *filenm;
    unsigned long lineno;
  } gmk_floc;

typedef char *(*gmk_func_ptr)(const char *nm, unsigned int argc, char **argv);

#line 40 "/usr/include/gnumake.h"


 void gmk_free (char *str);


 char *gmk_alloc (unsigned int len);


 void gmk_eval (const char *buffer, const gmk_floc *floc);



 char *gmk_expand (const char *str);



















 void gmk_add_function (const char *name, gmk_func_ptr func,
                                  unsigned int min_args, unsigned int max_args,
                                  unsigned int flags);

#line 78 "/usr/include/gnumake.h"
#line 40 "all.nc"
#line 1 "/usr/include/grp.h"





















#line 24 "/usr/include/grp.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/grp.h"



#line 1 "/usr/include/bits/types.h"





















#line 30 "/usr/include/grp.h"

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
#line 33 "/usr/include/grp.h"



#line 40 "/usr/include/grp.h"


struct group
  {
    char *gr_name;		
    char *gr_passwd;		
    __gid_t gr_gid;		
    char **gr_mem;		
  };


#line 1 "/usr/include/bits/types/FILE.h"
#line 53 "/usr/include/grp.h"
#line 54 "/usr/include/grp.h"


#line 57 "/usr/include/grp.h"




extern void setgrent (void);





extern void endgrent (void);





extern struct group *getgrent (void);
#line 75 "/usr/include/grp.h"

#line 77 "/usr/include/grp.h"






extern struct group *fgetgrent (FILE *__stream);
#line 85 "/usr/include/grp.h"

#line 87 "/usr/include/grp.h"






extern int putgrent (const struct group *__restrict __p,
		     FILE *__restrict __f);
#line 96 "/usr/include/grp.h"





extern struct group *getgrgid (__gid_t __gid);





extern struct group *getgrnam (const char *__name);

#line 110 "/usr/include/grp.h"

#line 112 "/usr/include/grp.h"


#line 116 "/usr/include/grp.h"














#line 131 "/usr/include/grp.h"
extern int getgrent_r (struct group *__restrict __resultbuf,
		       char *__restrict __buffer, size_t __buflen,
		       struct group **__restrict __result)
	;
#line 136 "/usr/include/grp.h"





extern int getgrgid_r (__gid_t __gid, struct group *__restrict __resultbuf,
		       char *__restrict __buffer, size_t __buflen,
		       struct group **__restrict __result)
	;





extern int getgrnam_r (const char *__restrict __name,
		       struct group *__restrict __resultbuf,
		       char *__restrict __buffer, size_t __buflen,
		       struct group **__restrict __result)
	;

#line 157 "/usr/include/grp.h"







extern int fgetgrent_r (FILE *__restrict __stream,
			struct group *__restrict __resultbuf,
			char *__restrict __buffer, size_t __buflen,
			struct group **__restrict __result)
	;
#line 170 "/usr/include/grp.h"

#line 172 "/usr/include/grp.h"


#line 175 "/usr/include/grp.h"

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
#line 178 "/usr/include/grp.h"


extern int setgroups (size_t __n, const __gid_t *__groups) ;









extern int getgrouplist (const char *__user, __gid_t __group,
			 __gid_t *__groups, int *__ngroups);









extern int initgroups (const char *__user, __gid_t __group);

#line 204 "/usr/include/grp.h"


#line 41 "all.nc"
#line 1 "/usr/include/gshadow.h"



















#line 22 "/usr/include/gshadow.h"

#line 1 "/usr/include/features.h"
















#line 24 "/usr/include/gshadow.h"
#line 1 "/usr/include/paths.h"































#line 34 "/usr/include/paths.h"


#line 37 "/usr/include/paths.h"

#line 39 "/usr/include/paths.h"

#line 66 "/usr/include/paths.h"


#line 73 "/usr/include/paths.h"
#line 25 "/usr/include/gshadow.h"
#line 1 "/usr/include/bits/types/FILE.h"
#line 26 "/usr/include/gshadow.h"

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
#line 29 "/usr/include/gshadow.h"


#line 32 "/usr/include/gshadow.h"





struct sgrp
  {
    char *sg_namp;		
    char *sg_passwd;		
    char **sg_adm;		
    char **sg_mem;		
  };








extern void setsgent (void);







extern void endsgent (void);







extern struct sgrp *getsgent (void);







extern struct sgrp *getsgnam (const char *__name);







extern struct sgrp *sgetsgent (const char *__string);







extern struct sgrp *fgetsgent (FILE *__stream);







extern int putsgent (const struct sgrp *__g, FILE *__stream);


#line 104 "/usr/include/gshadow.h"






extern int getsgent_r (struct sgrp *__result_buf, char *__buffer,
		       size_t __buflen, struct sgrp **__result)
	;

extern int getsgnam_r (const char *__name, struct sgrp *__result_buf,
		       char *__buffer, size_t __buflen,
		       struct sgrp **__result)
	;

extern int sgetsgent_r (const char *__string, struct sgrp *__result_buf,
			char *__buffer, size_t __buflen,
			struct sgrp **__result)
	;

extern int fgetsgent_r (FILE *__stream, struct sgrp *__result_buf,
			char *__buffer, size_t __buflen,
			struct sgrp **__result)
	;
#line 129 "/usr/include/gshadow.h"


#line 42 "all.nc"
#line 1 "/usr/include/iconv.h"

















#line 20 "/usr/include/iconv.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/iconv.h"
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
#line 24 "/usr/include/iconv.h"





typedef void *iconv_t;






extern int iconv_close (iconv_t __cd);






extern iconv_t iconv_open (const char *__tocode, const char *__fromcode)
	__attribute__ ((__malloc__)) ;




extern size_t iconv (iconv_t __cd, char **__restrict __inbuf,
		     size_t *__restrict __inbytesleft,
		     char **__restrict __outbuf,
		     size_t *__restrict __outbytesleft);


#line 43 "all.nc"
#line 1 "/usr/include/ieee754.h"

















#line 20 "/usr/include/ieee754.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/ieee754.h"

#line 1 "/usr/include/bits/endian.h"

















#line 24 "/usr/include/ieee754.h"



union ieee754_float
  {
    float f;

    
    struct
      {
#line 40 "/usr/include/ieee754.h"
	unsigned int mantissa:23;
	unsigned int exponent:8;
	unsigned int negative:1;
#line 44 "/usr/include/ieee754.h"
      } ieee;

    
    struct
      {
#line 56 "/usr/include/ieee754.h"
	unsigned int mantissa:22;
	unsigned int quiet_nan:1;
	unsigned int exponent:8;
	unsigned int negative:1;
#line 61 "/usr/include/ieee754.h"
      } ieee_nan;
  };

#line 65 "/usr/include/ieee754.h"


union ieee754_double
  {
    double d;

    
    struct
      {
#line 88 "/usr/include/ieee754.h"
	
	unsigned int mantissa1:32;
	unsigned int mantissa0:20;
	unsigned int exponent:11;
	unsigned int negative:1;
#line 95 "/usr/include/ieee754.h"
      } ieee;

    
    struct
      {
#line 115 "/usr/include/ieee754.h"
	
	unsigned int mantissa1:32;
	unsigned int mantissa0:19;
	unsigned int quiet_nan:1;
	unsigned int exponent:11;
	unsigned int negative:1;
#line 123 "/usr/include/ieee754.h"
      } ieee_nan;
  };

#line 127 "/usr/include/ieee754.h"


union ieee854_long_double
  {
    long double d;

    
    struct
      {
#line 151 "/usr/include/ieee754.h"
	unsigned int mantissa1:32;
	unsigned int mantissa0:32;
	unsigned int exponent:15;
	unsigned int negative:1;
	unsigned int empty:16;
#line 158 "/usr/include/ieee754.h"
      } ieee;

    
    struct
      {
#line 182 "/usr/include/ieee754.h"
	unsigned int mantissa1:32;
	unsigned int mantissa0:30;
	unsigned int quiet_nan:1;
	unsigned int one:1;
	unsigned int exponent:15;
	unsigned int negative:1;
	unsigned int empty:16;
#line 191 "/usr/include/ieee754.h"
      } ieee_nan;
  };

#line 195 "/usr/include/ieee754.h"


#line 44 "all.nc"
#line 1 "/usr/include/ifaddrs.h"


















#line 21 "/usr/include/ifaddrs.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/ifaddrs.h"
#line 1 "/usr/include/sys/socket.h"


















#line 21 "/usr/include/sys/socket.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/sys/socket.h"



#line 1 "/usr/include/bits/types/struct_iovec.h"

















#line 27 "/usr/include/sys/socket.h"
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
#line 29 "/usr/include/sys/socket.h"




#line 1 "/usr/include/bits/socket.h"


















#line 21 "/usr/include/bits/socket.h"

#line 25 "/usr/include/bits/socket.h"

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
#line 28 "/usr/include/bits/socket.h"

#line 1 "/usr/include/sys/types.h"




















#line 30 "/usr/include/bits/socket.h"


#line 33 "/usr/include/bits/socket.h"
typedef __socklen_t socklen_t;
#line 36 "/usr/include/bits/socket.h"


#line 1 "/usr/include/bits/socket_type.h"


















#line 22 "/usr/include/bits/socket_type.h"


enum __socket_type
{
  SOCK_STREAM = 1,		

#line 29 "/usr/include/bits/socket_type.h"
  SOCK_DGRAM = 2,		

#line 32 "/usr/include/bits/socket_type.h"
  SOCK_RAW = 3,			
#line 34 "/usr/include/bits/socket_type.h"
  SOCK_RDM = 4,			
#line 36 "/usr/include/bits/socket_type.h"
  SOCK_SEQPACKET = 5,		

#line 39 "/usr/include/bits/socket_type.h"
  SOCK_DCCP = 6,		
#line 41 "/usr/include/bits/socket_type.h"
  SOCK_PACKET = 10,		


#line 45 "/usr/include/bits/socket_type.h"

  


  SOCK_CLOEXEC = 02000000,	

#line 52 "/usr/include/bits/socket_type.h"
  SOCK_NONBLOCK = 00004000	

#line 55 "/usr/include/bits/socket_type.h"
};
#line 39 "/usr/include/bits/socket.h"


#line 91 "/usr/include/bits/socket.h"


#line 143 "/usr/include/bits/socket.h"





#line 176 "/usr/include/bits/socket.h"


#line 179 "/usr/include/bits/socket.h"


#line 1 "/usr/include/bits/sockaddr.h"






















#line 25 "/usr/include/bits/sockaddr.h"



typedef unsigned short int sa_family_t;





#line 35 "/usr/include/bits/sockaddr.h"

#line 37 "/usr/include/bits/sockaddr.h"


#line 40 "/usr/include/bits/sockaddr.h"
#line 182 "/usr/include/bits/socket.h"


struct __attribute__ ((__may_alias__)) sockaddr
  {
    sa_family_t sa_family;	
    char sa_data[14];		
  };




#line 195 "/usr/include/bits/socket.h"

struct __attribute__ ((__may_alias__)) sockaddr_storage
  {
    sa_family_t ss_family;	
    char __ss_padding[(128 - (sizeof (unsigned short int)) - sizeof (unsigned long int))];
    unsigned long int __ss_align;	
  };



enum
  {
    MSG_OOB		= 0x01,	
#line 209 "/usr/include/bits/socket.h"
    MSG_PEEK		= 0x02,	
#line 211 "/usr/include/bits/socket.h"
    MSG_DONTROUTE	= 0x04,	
#line 214 "/usr/include/bits/socket.h"
    
    MSG_TRYHARD		= MSG_DONTROUTE,
#line 218 "/usr/include/bits/socket.h"
    MSG_CTRUNC		= 0x08,	
#line 220 "/usr/include/bits/socket.h"
    MSG_PROXY		= 0x10,	
#line 222 "/usr/include/bits/socket.h"
    MSG_TRUNC		= 0x20,
#line 224 "/usr/include/bits/socket.h"
    MSG_DONTWAIT	= 0x40, 
#line 226 "/usr/include/bits/socket.h"
    MSG_EOR		= 0x80, 
#line 228 "/usr/include/bits/socket.h"
    MSG_WAITALL		= 0x100, 
#line 230 "/usr/include/bits/socket.h"
    MSG_FIN		= 0x200,
#line 232 "/usr/include/bits/socket.h"
    MSG_SYN		= 0x400,
#line 234 "/usr/include/bits/socket.h"
    MSG_CONFIRM		= 0x800, 
#line 236 "/usr/include/bits/socket.h"
    MSG_RST		= 0x1000,
#line 238 "/usr/include/bits/socket.h"
    MSG_ERRQUEUE	= 0x2000, 
#line 240 "/usr/include/bits/socket.h"
    MSG_NOSIGNAL	= 0x4000, 
#line 242 "/usr/include/bits/socket.h"
    MSG_MORE		= 0x8000,  
#line 244 "/usr/include/bits/socket.h"
    MSG_WAITFORONE	= 0x10000, 
#line 246 "/usr/include/bits/socket.h"
    MSG_BATCH		= 0x40000, 
#line 248 "/usr/include/bits/socket.h"
    MSG_SOCK_DEVMEM	= 0x2000000, 
#line 250 "/usr/include/bits/socket.h"
    MSG_ZEROCOPY	= 0x4000000, 
#line 252 "/usr/include/bits/socket.h"
    MSG_FASTOPEN	= 0x20000000, 
#line 254 "/usr/include/bits/socket.h"

    MSG_CMSG_CLOEXEC	= 0x40000000	


#line 259 "/usr/include/bits/socket.h"
  };




struct msghdr
  {
    void *msg_name;		
    socklen_t msg_namelen;	

    struct iovec *msg_iov;	
    size_t msg_iovlen;		

    void *msg_control;		
    size_t msg_controllen;	




    int msg_flags;		
  };


struct cmsghdr
  {
    size_t cmsg_len;		




    int cmsg_level;		
    int cmsg_type;		
#line 292 "/usr/include/bits/socket.h"
    unsigned char __cmsg_data []; 
#line 294 "/usr/include/bits/socket.h"
  };


#line 307 "/usr/include/bits/socket.h"



#line 311 "/usr/include/bits/socket.h"

extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
				      struct cmsghdr *__cmsg) ;
#line 356 "/usr/include/bits/socket.h"



enum
  {
    SCM_RIGHTS = 0x01		
#line 364 "/usr/include/bits/socket.h"
    , SCM_CREDENTIALS = 0x02	
#line 366 "/usr/include/bits/socket.h"
    , SCM_SECURITY = 0x03	
#line 368 "/usr/include/bits/socket.h"
    , SCM_PIDFD = 0x04		
#line 371 "/usr/include/bits/socket.h"
  };

#line 374 "/usr/include/bits/socket.h"

struct ucred
{
  pid_t pid;			
  uid_t uid;			
  gid_t gid;			
};
#line 382 "/usr/include/bits/socket.h"

#line 1 "/usr/include/bits/types/time_t.h"
#line 385 "/usr/include/bits/socket.h"
#line 1 "/usr/include/asm/socket.h"
#line 1 "/usr/include/asm-generic/socket.h"

#line 4 "/usr/include/asm-generic/socket.h"

#line 1 "/usr/include/linux/posix_types.h"

#line 4 "/usr/include/linux/posix_types.h"

#line 1 "/usr/include/linux/stddef.h"

#line 4 "/usr/include/linux/stddef.h"



#line 10 "/usr/include/linux/stddef.h"


#line 17 "/usr/include/linux/stddef.h"
















#line 34 "/usr/include/linux/stddef.h"

#line 39 "/usr/include/linux/stddef.h"










#line 51 "/usr/include/linux/stddef.h"

#line 55 "/usr/include/linux/stddef.h"

#line 59 "/usr/include/linux/stddef.h"

#line 63 "/usr/include/linux/stddef.h"

#line 65 "/usr/include/linux/stddef.h"
#line 6 "/usr/include/linux/posix_types.h"
















#line 24 "/usr/include/linux/posix_types.h"

typedef struct {
	unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

#line 1 "/usr/include/asm/posix_types.h"

#line 1 "/usr/include/asm/posix_types_64.h"

#line 4 "/usr/include/asm/posix_types_64.h"







typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
#line 14 "/usr/include/asm/posix_types_64.h"

typedef unsigned long	__kernel_old_dev_t;
#line 17 "/usr/include/asm/posix_types_64.h"

#line 1 "/usr/include/asm-generic/posix_types.h"

#line 4 "/usr/include/asm-generic/posix_types.h"

#line 1 "/usr/include/asm/bitsperlong.h"

#line 4 "/usr/include/asm/bitsperlong.h"

#line 10 "/usr/include/asm/bitsperlong.h"

#line 1 "/usr/include/asm-generic/bitsperlong.h"

#line 4 "/usr/include/asm-generic/bitsperlong.h"

#line 26 "/usr/include/asm-generic/bitsperlong.h"

#line 30 "/usr/include/asm-generic/bitsperlong.h"
#line 12 "/usr/include/asm/bitsperlong.h"

#line 14 "/usr/include/asm/bitsperlong.h"
#line 6 "/usr/include/asm-generic/posix_types.h"








#line 15 "/usr/include/asm-generic/posix_types.h"
typedef long		__kernel_long_t;
typedef unsigned long	__kernel_ulong_t;
#line 18 "/usr/include/asm-generic/posix_types.h"

#line 20 "/usr/include/asm-generic/posix_types.h"
typedef __kernel_ulong_t __kernel_ino_t;
#line 22 "/usr/include/asm-generic/posix_types.h"

#line 24 "/usr/include/asm-generic/posix_types.h"
typedef unsigned int	__kernel_mode_t;
#line 26 "/usr/include/asm-generic/posix_types.h"

#line 28 "/usr/include/asm-generic/posix_types.h"
typedef int		__kernel_pid_t;
#line 30 "/usr/include/asm-generic/posix_types.h"

#line 32 "/usr/include/asm-generic/posix_types.h"
typedef int		__kernel_ipc_pid_t;
#line 34 "/usr/include/asm-generic/posix_types.h"

#line 36 "/usr/include/asm-generic/posix_types.h"
typedef unsigned int	__kernel_uid_t;
typedef unsigned int	__kernel_gid_t;
#line 39 "/usr/include/asm-generic/posix_types.h"

#line 41 "/usr/include/asm-generic/posix_types.h"
typedef __kernel_long_t		__kernel_suseconds_t;
#line 43 "/usr/include/asm-generic/posix_types.h"

#line 45 "/usr/include/asm-generic/posix_types.h"
typedef int		__kernel_daddr_t;
#line 47 "/usr/include/asm-generic/posix_types.h"

#line 49 "/usr/include/asm-generic/posix_types.h"
typedef unsigned int	__kernel_uid32_t;
typedef unsigned int	__kernel_gid32_t;
#line 52 "/usr/include/asm-generic/posix_types.h"

#line 57 "/usr/include/asm-generic/posix_types.h"

#line 61 "/usr/include/asm-generic/posix_types.h"





#line 72 "/usr/include/asm-generic/posix_types.h"
typedef __kernel_ulong_t __kernel_size_t;
typedef __kernel_long_t	__kernel_ssize_t;
typedef __kernel_long_t	__kernel_ptrdiff_t;
#line 77 "/usr/include/asm-generic/posix_types.h"

#line 79 "/usr/include/asm-generic/posix_types.h"
typedef struct {
	int	val[2];
} __kernel_fsid_t;
#line 83 "/usr/include/asm-generic/posix_types.h"




typedef __kernel_long_t	__kernel_off_t;
typedef long long	__kernel_loff_t;
typedef __kernel_long_t	__kernel_old_time_t;
typedef __kernel_long_t	__kernel_time_t;
typedef long long __kernel_time64_t;
typedef __kernel_long_t	__kernel_clock_t;
typedef int		__kernel_timer_t;
typedef int		__kernel_clockid_t;
typedef char *		__kernel_caddr_t;
typedef unsigned short	__kernel_uid16_t;
typedef unsigned short	__kernel_gid16_t;
#line 19 "/usr/include/asm/posix_types_64.h"
#line 8 "/usr/include/asm/posix_types.h"
#line 37 "/usr/include/linux/posix_types.h"
#line 6 "/usr/include/asm-generic/socket.h"
#line 1 "/usr/include/asm/sockios.h"
#line 1 "/usr/include/asm-generic/sockios.h"

#line 4 "/usr/include/asm-generic/sockios.h"


#line 13 "/usr/include/asm-generic/sockios.h"
#line 2 "/usr/include/asm/sockios.h"
#line 7 "/usr/include/asm-generic/socket.h"


#line 10 "/usr/include/asm-generic/socket.h"

#line 36 "/usr/include/asm-generic/socket.h"


#line 41 "/usr/include/asm-generic/socket.h"

#line 43 "/usr/include/asm-generic/socket.h"


#line 48 "/usr/include/asm-generic/socket.h"

#line 50 "/usr/include/asm-generic/socket.h"

#line 52 "/usr/include/asm-generic/socket.h"

#line 55 "/usr/include/asm-generic/socket.h"

#line 57 "/usr/include/asm-generic/socket.h"

#line 60 "/usr/include/asm-generic/socket.h"

#line 62 "/usr/include/asm-generic/socket.h"

#line 66 "/usr/include/asm-generic/socket.h"


#line 69 "/usr/include/asm-generic/socket.h"

#line 71 "/usr/include/asm-generic/socket.h"

#line 73 "/usr/include/asm-generic/socket.h"

#line 75 "/usr/include/asm-generic/socket.h"

#line 77 "/usr/include/asm-generic/socket.h"

#line 79 "/usr/include/asm-generic/socket.h"

#line 81 "/usr/include/asm-generic/socket.h"

#line 84 "/usr/include/asm-generic/socket.h"

#line 87 "/usr/include/asm-generic/socket.h"

#line 89 "/usr/include/asm-generic/socket.h"

#line 91 "/usr/include/asm-generic/socket.h"

#line 93 "/usr/include/asm-generic/socket.h"

#line 95 "/usr/include/asm-generic/socket.h"

#line 97 "/usr/include/asm-generic/socket.h"

#line 99 "/usr/include/asm-generic/socket.h"

#line 101 "/usr/include/asm-generic/socket.h"

#line 103 "/usr/include/asm-generic/socket.h"

#line 106 "/usr/include/asm-generic/socket.h"

#line 108 "/usr/include/asm-generic/socket.h"

#line 112 "/usr/include/asm-generic/socket.h"

#line 116 "/usr/include/asm-generic/socket.h"

#line 119 "/usr/include/asm-generic/socket.h"

#line 121 "/usr/include/asm-generic/socket.h"

#line 124 "/usr/include/asm-generic/socket.h"

#line 126 "/usr/include/asm-generic/socket.h"

#line 128 "/usr/include/asm-generic/socket.h"

#line 130 "/usr/include/asm-generic/socket.h"

#line 132 "/usr/include/asm-generic/socket.h"

#line 134 "/usr/include/asm-generic/socket.h"

#line 137 "/usr/include/asm-generic/socket.h"

#line 143 "/usr/include/asm-generic/socket.h"

#line 145 "/usr/include/asm-generic/socket.h"

#line 147 "/usr/include/asm-generic/socket.h"

#line 149 "/usr/include/asm-generic/socket.h"

#line 152 "/usr/include/asm-generic/socket.h"


#line 155 "/usr/include/asm-generic/socket.h"

#line 159 "/usr/include/asm-generic/socket.h"

#line 170 "/usr/include/asm-generic/socket.h"

#line 174 "/usr/include/asm-generic/socket.h"

#line 2 "/usr/include/asm/socket.h"
#line 386 "/usr/include/bits/socket.h"
#line 390 "/usr/include/bits/socket.h"


struct linger
  {
    int l_onoff;		
    int l_linger;		
  };
#line 34 "/usr/include/sys/socket.h"

#line 1 "/usr/include/bits/types/struct_osockaddr.h"
#line 3 "/usr/include/bits/types/struct_osockaddr.h"



struct osockaddr
{
  unsigned short int sa_family;
  unsigned char sa_data[14];
};
#line 37 "/usr/include/sys/socket.h"
#line 38 "/usr/include/sys/socket.h"



enum
{
  SHUT_RD = 0,		
#line 45 "/usr/include/sys/socket.h"
  SHUT_WR,		
#line 47 "/usr/include/sys/socket.h"
  SHUT_RDWR		
#line 49 "/usr/include/sys/socket.h"
};







#line 61 "/usr/include/sys/socket.h"


#line 64 "/usr/include/sys/socket.h"

#line 67 "/usr/include/sys/socket.h"
typedef struct sockaddr *__restrict __SOCKADDR_ARG;
#line 71 "/usr/include/sys/socket.h"
typedef const struct sockaddr *__restrict __CONST_SOCKADDR_ARG;
#line 74 "/usr/include/sys/socket.h"

#line 76 "/usr/include/sys/socket.h"

struct mmsghdr
  {
    struct msghdr msg_hdr;	
    unsigned int msg_len;	

  };
#line 84 "/usr/include/sys/socket.h"





extern int socket (int __domain, int __type, int __protocol) ;





extern int socketpair (int __domain, int __type, int __protocol,
		       int __fds[2]) ;


extern int bind (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len)
     ;


extern int getsockname (int __fd, __SOCKADDR_ARG __addr,
			socklen_t *__restrict __len) ;








extern int connect (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len);



extern int getpeername (int __fd, __SOCKADDR_ARG __addr,
			socklen_t *__restrict __len) ;






extern ssize_t send (int __fd, const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, const void *__buf, size_t __n,
		       int __flags, __CONST_SOCKADDR_ARG __addr,
		       socklen_t __addr_len);








extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
			 int __flags, __SOCKADDR_ARG __addr,
			 socklen_t *__restrict __addr_len);







#line 161 "/usr/include/sys/socket.h"
extern ssize_t sendmsg (int __fd, const struct msghdr *__message,
			int __flags);
#line 174 "/usr/include/sys/socket.h"

#line 176 "/usr/include/sys/socket.h"





#line 182 "/usr/include/sys/socket.h"
extern int sendmmsg (int __fd, struct mmsghdr *__vmessages,
		     unsigned int __vlen, int __flags);
#line 196 "/usr/include/sys/socket.h"






#line 203 "/usr/include/sys/socket.h"
extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);
#line 214 "/usr/include/sys/socket.h"

#line 216 "/usr/include/sys/socket.h"





#line 222 "/usr/include/sys/socket.h"
extern int recvmmsg (int __fd, struct mmsghdr *__vmessages,
		     unsigned int __vlen, int __flags,
		     struct timespec *__tmo);
#line 236 "/usr/include/sys/socket.h"





#line 242 "/usr/include/sys/socket.h"
extern int getsockopt (int __fd, int __level, int __optname,
		       void *__restrict __optval,
		       socklen_t *__restrict __optlen) ;
#line 259 "/usr/include/sys/socket.h"




#line 264 "/usr/include/sys/socket.h"
extern int setsockopt (int __fd, int __level, int __optname,
		       const void *__optval, socklen_t __optlen) ;
#line 278 "/usr/include/sys/socket.h"





extern int listen (int __fd, int __n) ;









extern int accept (int __fd, __SOCKADDR_ARG __addr,
		   socklen_t *__restrict __addr_len);

#line 297 "/usr/include/sys/socket.h"




extern int accept4 (int __fd, __SOCKADDR_ARG __addr,
		    socklen_t *__restrict __addr_len, int __flags);
#line 304 "/usr/include/sys/socket.h"







extern int shutdown (int __fd, int __how) ;


#line 315 "/usr/include/sys/socket.h"

extern int sockatmark (int __fd) ;
#line 318 "/usr/include/sys/socket.h"


#line 321 "/usr/include/sys/socket.h"



extern int isfdtype (int __fd, int __fdtype) ;
#line 326 "/usr/include/sys/socket.h"



#line 332 "/usr/include/sys/socket.h"


#line 24 "/usr/include/ifaddrs.h"





struct ifaddrs
{
  struct ifaddrs *ifa_next;	

  char *ifa_name;		
  unsigned int ifa_flags;	

  struct sockaddr *ifa_addr;	
  struct sockaddr *ifa_netmask; 
  union
  {
    



    struct sockaddr *ifu_broadaddr; 
    struct sockaddr *ifu_dstaddr; 
  } ifa_ifu;
  

#line 55 "/usr/include/ifaddrs.h"

  void *ifa_data;		
};








extern int getifaddrs (struct ifaddrs **__ifap) ;


extern void freeifaddrs (struct ifaddrs *__ifa)  ;


#line 45 "all.nc"
#line 1 "/usr/include/inttypes.h"





















#line 24 "/usr/include/inttypes.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/inttypes.h"

#line 1 "/usr/include/stdint.h"




















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


#line 46 "all.nc"
#line 1 "/usr/include/langinfo.h"


















#line 21 "/usr/include/langinfo.h"


#line 1 "/usr/include/nl_types.h"

















#line 20 "/usr/include/nl_types.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/nl_types.h"


#line 25 "/usr/include/nl_types.h"


#line 28 "/usr/include/nl_types.h"





typedef void *nl_catd;


typedef int nl_item;





extern nl_catd catopen (const char *__cat_name, int __flag) ;



extern char *catgets (nl_catd __catalog, int __set, int __number,
		      const char *__string)  ;


extern int catclose (nl_catd __catalog)  ;


#line 24 "/usr/include/langinfo.h"

#line 1 "/usr/include/bits/locale.h"


















#line 22 "/usr/include/bits/locale.h"

#line 25 "/usr/include/bits/locale.h"

#line 39 "/usr/include/bits/locale.h"
#line 26 "/usr/include/langinfo.h"








#line 35 "/usr/include/langinfo.h"


#line 39 "/usr/include/langinfo.h"


enum
{
  

  
  ABDAY_1 = (((2) << 16) | (0)), 
#line 48 "/usr/include/langinfo.h"
  ABDAY_2,
#line 50 "/usr/include/langinfo.h"
  ABDAY_3,
#line 52 "/usr/include/langinfo.h"
  ABDAY_4,
#line 54 "/usr/include/langinfo.h"
  ABDAY_5,
#line 56 "/usr/include/langinfo.h"
  ABDAY_6,
#line 58 "/usr/include/langinfo.h"
  ABDAY_7,
#line 60 "/usr/include/langinfo.h"

  
  DAY_1,			
#line 64 "/usr/include/langinfo.h"
  DAY_2,			
#line 66 "/usr/include/langinfo.h"
  DAY_3,			
#line 68 "/usr/include/langinfo.h"
  DAY_4,			
#line 70 "/usr/include/langinfo.h"
  DAY_5,			
#line 72 "/usr/include/langinfo.h"
  DAY_6,			
#line 74 "/usr/include/langinfo.h"
  DAY_7,			
#line 76 "/usr/include/langinfo.h"

  

  ABMON_1,			
#line 81 "/usr/include/langinfo.h"
  ABMON_2,
#line 83 "/usr/include/langinfo.h"
  ABMON_3,
#line 85 "/usr/include/langinfo.h"
  ABMON_4,
#line 87 "/usr/include/langinfo.h"
  ABMON_5,
#line 89 "/usr/include/langinfo.h"
  ABMON_6,
#line 91 "/usr/include/langinfo.h"
  ABMON_7,
#line 93 "/usr/include/langinfo.h"
  ABMON_8,
#line 95 "/usr/include/langinfo.h"
  ABMON_9,
#line 97 "/usr/include/langinfo.h"
  ABMON_10,
#line 99 "/usr/include/langinfo.h"
  ABMON_11,
#line 101 "/usr/include/langinfo.h"
  ABMON_12,
#line 103 "/usr/include/langinfo.h"

  

  MON_1,			
#line 108 "/usr/include/langinfo.h"
  MON_2,
#line 110 "/usr/include/langinfo.h"
  MON_3,
#line 112 "/usr/include/langinfo.h"
  MON_4,
#line 114 "/usr/include/langinfo.h"
  MON_5,
#line 116 "/usr/include/langinfo.h"
  MON_6,
#line 118 "/usr/include/langinfo.h"
  MON_7,
#line 120 "/usr/include/langinfo.h"
  MON_8,
#line 122 "/usr/include/langinfo.h"
  MON_9,
#line 124 "/usr/include/langinfo.h"
  MON_10,
#line 126 "/usr/include/langinfo.h"
  MON_11,
#line 128 "/usr/include/langinfo.h"
  MON_12,
#line 130 "/usr/include/langinfo.h"

  AM_STR,			
#line 133 "/usr/include/langinfo.h"
  PM_STR,			
#line 135 "/usr/include/langinfo.h"

  D_T_FMT,			
#line 138 "/usr/include/langinfo.h"
  D_FMT,			
#line 140 "/usr/include/langinfo.h"
  T_FMT,			
#line 142 "/usr/include/langinfo.h"
  T_FMT_AMPM,			
#line 144 "/usr/include/langinfo.h"

  ERA,				
#line 147 "/usr/include/langinfo.h"
  __ERA_YEAR,			
#line 151 "/usr/include/langinfo.h"
  ERA_D_FMT,			
#line 153 "/usr/include/langinfo.h"
  ALT_DIGITS,			
#line 155 "/usr/include/langinfo.h"
  ERA_D_T_FMT,			
#line 157 "/usr/include/langinfo.h"
  ERA_T_FMT,			
#line 159 "/usr/include/langinfo.h"

  _NL_TIME_ERA_NUM_ENTRIES,	
  _NL_TIME_ERA_ENTRIES,		

  _NL_WABDAY_1,		
  _NL_WABDAY_2,
  _NL_WABDAY_3,
  _NL_WABDAY_4,
  _NL_WABDAY_5,
  _NL_WABDAY_6,
  _NL_WABDAY_7,

  
  _NL_WDAY_1,		
  _NL_WDAY_2,		
  _NL_WDAY_3,		
  _NL_WDAY_4,		
  _NL_WDAY_5,		
  _NL_WDAY_6,		
  _NL_WDAY_7,		

  

  _NL_WABMON_1,		
  _NL_WABMON_2,
  _NL_WABMON_3,
  _NL_WABMON_4,
  _NL_WABMON_5,
  _NL_WABMON_6,
  _NL_WABMON_7,
  _NL_WABMON_8,
  _NL_WABMON_9,
  _NL_WABMON_10,
  _NL_WABMON_11,
  _NL_WABMON_12,

  

  _NL_WMON_1,		
  _NL_WMON_2,
  _NL_WMON_3,
  _NL_WMON_4,
  _NL_WMON_5,
  _NL_WMON_6,
  _NL_WMON_7,
  _NL_WMON_8,
  _NL_WMON_9,
  _NL_WMON_10,
  _NL_WMON_11,
  _NL_WMON_12,

  _NL_WAM_STR,		
  _NL_WPM_STR,		

  _NL_WD_T_FMT,		
  _NL_WD_FMT,		
  _NL_WT_FMT,		
  _NL_WT_FMT_AMPM,	

  _NL_WERA_YEAR,	
  _NL_WERA_D_FMT,	
  _NL_WALT_DIGITS,	
  _NL_WERA_D_T_FMT,	
  _NL_WERA_T_FMT,	

  _NL_TIME_WEEK_NDAYS,
  _NL_TIME_WEEK_1STDAY,
  _NL_TIME_WEEK_1STWEEK,
  _NL_TIME_FIRST_WEEKDAY,
  _NL_TIME_FIRST_WORKDAY,
  _NL_TIME_CAL_DIRECTION,
  _NL_TIME_TIMEZONE,

  _DATE_FMT,		
#line 234 "/usr/include/langinfo.h"
  _NL_W_DATE_FMT,

  _NL_TIME_CODESET,

  

  __ALTMON_1,			
  __ALTMON_2,
  __ALTMON_3,
  __ALTMON_4,
  __ALTMON_5,
  __ALTMON_6,
  __ALTMON_7,
  __ALTMON_8,
  __ALTMON_9,
  __ALTMON_10,
  __ALTMON_11,
  __ALTMON_12,
#line 266 "/usr/include/langinfo.h"

  

  _NL_WALTMON_1,			
  _NL_WALTMON_2,
  _NL_WALTMON_3,
  _NL_WALTMON_4,
  _NL_WALTMON_5,
  _NL_WALTMON_6,
  _NL_WALTMON_7,
  _NL_WALTMON_8,
  _NL_WALTMON_9,
  _NL_WALTMON_10,
  _NL_WALTMON_11,
  _NL_WALTMON_12,

  

  _NL_ABALTMON_1,			
  _NL_ABALTMON_2,
  _NL_ABALTMON_3,
  _NL_ABALTMON_4,
  _NL_ABALTMON_5,
  _NL_ABALTMON_6,
  _NL_ABALTMON_7,
  _NL_ABALTMON_8,
  _NL_ABALTMON_9,
  _NL_ABALTMON_10,
  _NL_ABALTMON_11,
  _NL_ABALTMON_12,

  

  _NL_WABALTMON_1,			
  _NL_WABALTMON_2,
  _NL_WABALTMON_3,
  _NL_WABALTMON_4,
  _NL_WABALTMON_5,
  _NL_WABALTMON_6,
  _NL_WABALTMON_7,
  _NL_WABALTMON_8,
  _NL_WABALTMON_9,
  _NL_WABALTMON_10,
  _NL_WABALTMON_11,
  _NL_WABALTMON_12,

  _NL_NUM_LC_TIME,	

  


  _NL_COLLATE_NRULES = (((3) << 16) | (0)),
  _NL_COLLATE_RULESETS,
  _NL_COLLATE_TABLEMB,
  _NL_COLLATE_WEIGHTMB,
  _NL_COLLATE_EXTRAMB,
  _NL_COLLATE_INDIRECTMB,
  _NL_COLLATE_GAP1,
  _NL_COLLATE_GAP2,
  _NL_COLLATE_GAP3,
  _NL_COLLATE_TABLEWC,
  _NL_COLLATE_WEIGHTWC,
  _NL_COLLATE_EXTRAWC,
  _NL_COLLATE_INDIRECTWC,
  _NL_COLLATE_SYMB_HASH_SIZEMB,
  _NL_COLLATE_SYMB_TABLEMB,
  _NL_COLLATE_SYMB_EXTRAMB,
  _NL_COLLATE_COLLSEQMB,
  _NL_COLLATE_COLLSEQWC,
  _NL_COLLATE_CODESET,
  _NL_NUM_LC_COLLATE,

  


  _NL_CTYPE_CLASS = (((0) << 16) | (0)),
  _NL_CTYPE_TOUPPER,
  _NL_CTYPE_GAP1,
  _NL_CTYPE_TOLOWER,
  _NL_CTYPE_GAP2,
  _NL_CTYPE_CLASS32,
  _NL_CTYPE_GAP3,
  _NL_CTYPE_GAP4,
  _NL_CTYPE_GAP5,
  _NL_CTYPE_GAP6,
  _NL_CTYPE_CLASS_NAMES,
  _NL_CTYPE_MAP_NAMES,
  _NL_CTYPE_WIDTH,
  _NL_CTYPE_MB_CUR_MAX,
  _NL_CTYPE_CODESET_NAME,
  CODESET = _NL_CTYPE_CODESET_NAME,
#line 358 "/usr/include/langinfo.h"
  _NL_CTYPE_TOUPPER32,
  _NL_CTYPE_TOLOWER32,
  _NL_CTYPE_CLASS_OFFSET,
  _NL_CTYPE_MAP_OFFSET,
  _NL_CTYPE_INDIGITS_MB_LEN,
  _NL_CTYPE_INDIGITS0_MB,
  _NL_CTYPE_INDIGITS1_MB,
  _NL_CTYPE_INDIGITS2_MB,
  _NL_CTYPE_INDIGITS3_MB,
  _NL_CTYPE_INDIGITS4_MB,
  _NL_CTYPE_INDIGITS5_MB,
  _NL_CTYPE_INDIGITS6_MB,
  _NL_CTYPE_INDIGITS7_MB,
  _NL_CTYPE_INDIGITS8_MB,
  _NL_CTYPE_INDIGITS9_MB,
  _NL_CTYPE_INDIGITS_WC_LEN,
  _NL_CTYPE_INDIGITS0_WC,
  _NL_CTYPE_INDIGITS1_WC,
  _NL_CTYPE_INDIGITS2_WC,
  _NL_CTYPE_INDIGITS3_WC,
  _NL_CTYPE_INDIGITS4_WC,
  _NL_CTYPE_INDIGITS5_WC,
  _NL_CTYPE_INDIGITS6_WC,
  _NL_CTYPE_INDIGITS7_WC,
  _NL_CTYPE_INDIGITS8_WC,
  _NL_CTYPE_INDIGITS9_WC,
  _NL_CTYPE_OUTDIGIT0_MB,
  _NL_CTYPE_OUTDIGIT1_MB,
  _NL_CTYPE_OUTDIGIT2_MB,
  _NL_CTYPE_OUTDIGIT3_MB,
  _NL_CTYPE_OUTDIGIT4_MB,
  _NL_CTYPE_OUTDIGIT5_MB,
  _NL_CTYPE_OUTDIGIT6_MB,
  _NL_CTYPE_OUTDIGIT7_MB,
  _NL_CTYPE_OUTDIGIT8_MB,
  _NL_CTYPE_OUTDIGIT9_MB,
  _NL_CTYPE_OUTDIGIT0_WC,
  _NL_CTYPE_OUTDIGIT1_WC,
  _NL_CTYPE_OUTDIGIT2_WC,
  _NL_CTYPE_OUTDIGIT3_WC,
  _NL_CTYPE_OUTDIGIT4_WC,
  _NL_CTYPE_OUTDIGIT5_WC,
  _NL_CTYPE_OUTDIGIT6_WC,
  _NL_CTYPE_OUTDIGIT7_WC,
  _NL_CTYPE_OUTDIGIT8_WC,
  _NL_CTYPE_OUTDIGIT9_WC,
  _NL_CTYPE_TRANSLIT_TAB_SIZE,
  _NL_CTYPE_TRANSLIT_FROM_IDX,
  _NL_CTYPE_TRANSLIT_FROM_TBL,
  _NL_CTYPE_TRANSLIT_TO_IDX,
  _NL_CTYPE_TRANSLIT_TO_TBL,
  _NL_CTYPE_TRANSLIT_DEFAULT_MISSING_LEN,
  _NL_CTYPE_TRANSLIT_DEFAULT_MISSING,
  _NL_CTYPE_TRANSLIT_IGNORE_LEN,
  _NL_CTYPE_TRANSLIT_IGNORE,
  _NL_CTYPE_MAP_TO_NONASCII,
  _NL_CTYPE_NONASCII_CASE,
  _NL_CTYPE_EXTRA_MAP_1,
  _NL_CTYPE_EXTRA_MAP_2,
  _NL_CTYPE_EXTRA_MAP_3,
  _NL_CTYPE_EXTRA_MAP_4,
  _NL_CTYPE_EXTRA_MAP_5,
  _NL_CTYPE_EXTRA_MAP_6,
  _NL_CTYPE_EXTRA_MAP_7,
  _NL_CTYPE_EXTRA_MAP_8,
  _NL_CTYPE_EXTRA_MAP_9,
  _NL_CTYPE_EXTRA_MAP_10,
  _NL_CTYPE_EXTRA_MAP_11,
  _NL_CTYPE_EXTRA_MAP_12,
  _NL_CTYPE_EXTRA_MAP_13,
  _NL_CTYPE_EXTRA_MAP_14,
  _NL_NUM_LC_CTYPE,

  


  __INT_CURR_SYMBOL = (((4) << 16) | (0)),
#line 438 "/usr/include/langinfo.h"
  __CURRENCY_SYMBOL,
#line 442 "/usr/include/langinfo.h"
  __MON_DECIMAL_POINT,
#line 446 "/usr/include/langinfo.h"
  __MON_THOUSANDS_SEP,
#line 450 "/usr/include/langinfo.h"
  __MON_GROUPING,
#line 454 "/usr/include/langinfo.h"
  __POSITIVE_SIGN,
#line 458 "/usr/include/langinfo.h"
  __NEGATIVE_SIGN,
#line 462 "/usr/include/langinfo.h"
  __INT_FRAC_DIGITS,
#line 466 "/usr/include/langinfo.h"
  __FRAC_DIGITS,
#line 470 "/usr/include/langinfo.h"
  __P_CS_PRECEDES,
#line 474 "/usr/include/langinfo.h"
  __P_SEP_BY_SPACE,
#line 478 "/usr/include/langinfo.h"
  __N_CS_PRECEDES,
#line 482 "/usr/include/langinfo.h"
  __N_SEP_BY_SPACE,
#line 486 "/usr/include/langinfo.h"
  __P_SIGN_POSN,
#line 490 "/usr/include/langinfo.h"
  __N_SIGN_POSN,
#line 494 "/usr/include/langinfo.h"
  _NL_MONETARY_CRNCYSTR,
#line 496 "/usr/include/langinfo.h"
  __INT_P_CS_PRECEDES,
#line 500 "/usr/include/langinfo.h"
  __INT_P_SEP_BY_SPACE,
#line 504 "/usr/include/langinfo.h"
  __INT_N_CS_PRECEDES,
#line 508 "/usr/include/langinfo.h"
  __INT_N_SEP_BY_SPACE,
#line 512 "/usr/include/langinfo.h"
  __INT_P_SIGN_POSN,
#line 516 "/usr/include/langinfo.h"
  __INT_N_SIGN_POSN,
#line 520 "/usr/include/langinfo.h"
  _NL_MONETARY_DUO_INT_CURR_SYMBOL,
  _NL_MONETARY_DUO_CURRENCY_SYMBOL,
  _NL_MONETARY_DUO_INT_FRAC_DIGITS,
  _NL_MONETARY_DUO_FRAC_DIGITS,
  _NL_MONETARY_DUO_P_CS_PRECEDES,
  _NL_MONETARY_DUO_P_SEP_BY_SPACE,
  _NL_MONETARY_DUO_N_CS_PRECEDES,
  _NL_MONETARY_DUO_N_SEP_BY_SPACE,
  _NL_MONETARY_DUO_INT_P_CS_PRECEDES,
  _NL_MONETARY_DUO_INT_P_SEP_BY_SPACE,
  _NL_MONETARY_DUO_INT_N_CS_PRECEDES,
  _NL_MONETARY_DUO_INT_N_SEP_BY_SPACE,
  _NL_MONETARY_DUO_P_SIGN_POSN,
  _NL_MONETARY_DUO_N_SIGN_POSN,
  _NL_MONETARY_DUO_INT_P_SIGN_POSN,
  _NL_MONETARY_DUO_INT_N_SIGN_POSN,
  _NL_MONETARY_UNO_VALID_FROM,
  _NL_MONETARY_UNO_VALID_TO,
  _NL_MONETARY_DUO_VALID_FROM,
  _NL_MONETARY_DUO_VALID_TO,
  _NL_MONETARY_CONVERSION_RATE,
  _NL_MONETARY_DECIMAL_POINT_WC,
  _NL_MONETARY_THOUSANDS_SEP_WC,
  _NL_MONETARY_CODESET,
  _NL_NUM_LC_MONETARY,

  

  __DECIMAL_POINT = (((1) << 16) | (0)),
#line 552 "/usr/include/langinfo.h"
  RADIXCHAR = __DECIMAL_POINT,
#line 554 "/usr/include/langinfo.h"
  __THOUSANDS_SEP,
#line 558 "/usr/include/langinfo.h"
  THOUSEP = __THOUSANDS_SEP,
#line 560 "/usr/include/langinfo.h"
  __GROUPING,
#line 564 "/usr/include/langinfo.h"
  _NL_NUMERIC_DECIMAL_POINT_WC,
  _NL_NUMERIC_THOUSANDS_SEP_WC,
  _NL_NUMERIC_CODESET,
  _NL_NUM_LC_NUMERIC,

  __YESEXPR = (((5) << 16) | (0)), 
#line 571 "/usr/include/langinfo.h"
  __NOEXPR,			
#line 573 "/usr/include/langinfo.h"
  __YESSTR,			
#line 577 "/usr/include/langinfo.h"
  __NOSTR,			
#line 581 "/usr/include/langinfo.h"
  _NL_MESSAGES_CODESET,
  _NL_NUM_LC_MESSAGES,

  _NL_PAPER_HEIGHT = (((7) << 16) | (0)),
  _NL_PAPER_WIDTH,
  _NL_PAPER_CODESET,
  _NL_NUM_LC_PAPER,

  _NL_NAME_NAME_FMT = (((8) << 16) | (0)),
  _NL_NAME_NAME_GEN,
  _NL_NAME_NAME_MR,
  _NL_NAME_NAME_MRS,
  _NL_NAME_NAME_MISS,
  _NL_NAME_NAME_MS,
  _NL_NAME_CODESET,
  _NL_NUM_LC_NAME,

  _NL_ADDRESS_POSTAL_FMT = (((9) << 16) | (0)),
  _NL_ADDRESS_COUNTRY_NAME,
  _NL_ADDRESS_COUNTRY_POST,
  _NL_ADDRESS_COUNTRY_AB2,
  _NL_ADDRESS_COUNTRY_AB3,
  _NL_ADDRESS_COUNTRY_CAR,
  _NL_ADDRESS_COUNTRY_NUM,
  _NL_ADDRESS_COUNTRY_ISBN,
  _NL_ADDRESS_LANG_NAME,
  _NL_ADDRESS_LANG_AB,
  _NL_ADDRESS_LANG_TERM,
  _NL_ADDRESS_LANG_LIB,
  _NL_ADDRESS_CODESET,
  _NL_NUM_LC_ADDRESS,

  _NL_TELEPHONE_TEL_INT_FMT = (((10) << 16) | (0)),
  _NL_TELEPHONE_TEL_DOM_FMT,
  _NL_TELEPHONE_INT_SELECT,
  _NL_TELEPHONE_INT_PREFIX,
  _NL_TELEPHONE_CODESET,
  _NL_NUM_LC_TELEPHONE,

  _NL_MEASUREMENT_MEASUREMENT = (((11) << 16) | (0)),
  _NL_MEASUREMENT_CODESET,
  _NL_NUM_LC_MEASUREMENT,

  _NL_IDENTIFICATION_TITLE = (((12) << 16) | (0)),
  _NL_IDENTIFICATION_SOURCE,
  _NL_IDENTIFICATION_ADDRESS,
  _NL_IDENTIFICATION_CONTACT,
  _NL_IDENTIFICATION_EMAIL,
  _NL_IDENTIFICATION_TEL,
  _NL_IDENTIFICATION_FAX,
  _NL_IDENTIFICATION_LANGUAGE,
  _NL_IDENTIFICATION_TERRITORY,
  _NL_IDENTIFICATION_AUDIENCE,
  _NL_IDENTIFICATION_APPLICATION,
  _NL_IDENTIFICATION_ABBREVIATION,
  _NL_IDENTIFICATION_REVISION,
  _NL_IDENTIFICATION_DATE,
  _NL_IDENTIFICATION_CATEGORY,
  _NL_IDENTIFICATION_CODESET,
  _NL_NUM_LC_IDENTIFICATION,

  
  _NL_NUM
};



#line 652 "/usr/include/langinfo.h"








extern char *nl_langinfo (nl_item __item) ;


#line 664 "/usr/include/langinfo.h"

#line 1 "/usr/include/bits/types/locale_t.h"

















#line 666 "/usr/include/langinfo.h"


extern char *nl_langinfo_l (nl_item __item, locale_t __l);
#line 670 "/usr/include/langinfo.h"


#line 47 "all.nc"
#line 1 "/usr/include/lastlog.h"



#line 1 "/usr/include/utmp.h"

















#line 20 "/usr/include/utmp.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/utmp.h"

#line 1 "/usr/include/sys/types.h"




















#line 24 "/usr/include/utmp.h"





#line 1 "/usr/include/bits/utmp.h"


















#line 22 "/usr/include/bits/utmp.h"

#line 1 "/usr/include/paths.h"






























#line 24 "/usr/include/bits/utmp.h"
#line 1 "/usr/include/sys/time.h"

















#line 20 "/usr/include/sys/time.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/sys/time.h"

#line 1 "/usr/include/bits/types.h"





















#line 24 "/usr/include/sys/time.h"
#line 1 "/usr/include/bits/types/time_t.h"
#line 25 "/usr/include/sys/time.h"
#line 1 "/usr/include/bits/types/struct_timeval.h"
#line 26 "/usr/include/sys/time.h"

#line 31 "/usr/include/sys/time.h"

#line 1 "/usr/include/sys/select.h"



















#line 33 "/usr/include/sys/time.h"



#line 37 "/usr/include/sys/time.h"

#line 41 "/usr/include/sys/time.h"


#line 44 "/usr/include/sys/time.h"


struct timezone
  {
    int tz_minuteswest;		
    int tz_dsttime;		
  };
#line 52 "/usr/include/sys/time.h"








#line 61 "/usr/include/sys/time.h"
extern int gettimeofday (struct timeval *__restrict __tv,
			 void *__restrict __tz)  ;
#line 72 "/usr/include/sys/time.h"

#line 75 "/usr/include/sys/time.h"





extern int settimeofday (const struct timeval *__tv,
			 const struct timezone *__tz)
     ;





extern int adjtime (const struct timeval *__delta,
		    struct timeval *__olddelta) ;
#line 105 "/usr/include/sys/time.h"



enum __itimer_which
  {
    
    ITIMER_REAL = 0,
#line 113 "/usr/include/sys/time.h"
    
    ITIMER_VIRTUAL = 1,
#line 116 "/usr/include/sys/time.h"
    

    ITIMER_PROF = 2
#line 120 "/usr/include/sys/time.h"
  };



struct itimerval
  {
    
    struct timeval it_interval;
    
    struct timeval it_value;
  };

#line 133 "/usr/include/sys/time.h"


typedef enum __itimer_which __itimer_which_t;
#line 139 "/usr/include/sys/time.h"

#line 141 "/usr/include/sys/time.h"


extern int getitimer (__itimer_which_t __which,
		      struct itimerval *__value) ;




extern int setitimer (__itimer_which_t __which,
		      const struct itimerval *__restrict __new,
		      struct itimerval *__restrict __old) ;




extern int utimes (const char *__file, const struct timeval __tvp[2])
      ;

#line 179 "/usr/include/sys/time.h"

#line 182 "/usr/include/sys/time.h"

extern int lutimes (const char *__file, const struct timeval __tvp[2])
      ;


extern int futimes (int __fd, const struct timeval __tvp[2]) ;
#line 202 "/usr/include/sys/time.h"

#line 205 "/usr/include/sys/time.h"



extern int futimesat (int __fd, const char *__file,
		      const struct timeval __tvp[2]) ;
#line 220 "/usr/include/sys/time.h"


#line 223 "/usr/include/sys/time.h"


#line 231 "/usr/include/sys/time.h"


#line 25 "/usr/include/bits/utmp.h"
#line 1 "/usr/include/sys/types.h"




















#line 26 "/usr/include/bits/utmp.h"
#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 27 "/usr/include/bits/utmp.h"


#line 32 "/usr/include/bits/utmp.h"




struct lastlog
  {
#line 39 "/usr/include/bits/utmp.h"
    __uint32_t ll_time;
#line 43 "/usr/include/bits/utmp.h"
    char ll_line[32];
    char ll_host[256];
  };




struct exit_status
  {
    short int e_termination;	
    short int e_exit;		
  };



struct utmp
{
  short int ut_type;		
  pid_t ut_pid;			
  char ut_line[32]
    ;	
  char ut_id[4]
    ;	
  char ut_user[32]
    ;	
  char ut_host[256]
    ;	
  struct exit_status ut_exit;	




#line 76 "/usr/include/bits/utmp.h"
  int32_t ut_session;		
  struct
  {
    __uint32_t tv_sec;		
    int32_t tv_usec;		
  } ut_tv;			
#line 86 "/usr/include/bits/utmp.h"

  int32_t ut_addr_v6[4];	
  char __glibc_reserved[20];		
};


#line 94 "/usr/include/bits/utmp.h"


#line 100 "/usr/include/bits/utmp.h"



#line 104 "/usr/include/bits/utmp.h"

#line 109 "/usr/include/bits/utmp.h"

#line 114 "/usr/include/bits/utmp.h"

#line 116 "/usr/include/bits/utmp.h"


#line 119 "/usr/include/bits/utmp.h"



#line 30 "/usr/include/utmp.h"


#line 36 "/usr/include/utmp.h"





extern int login_tty (int __fd) ;



extern void login (const struct utmp *__entry) ;


extern int logout (const char *__ut_line) ;


extern void logwtmp (const char *__ut_line, const char *__ut_name,
		     const char *__ut_host) ;


extern void updwtmp (const char *__wtmp_file, const struct utmp *__utmp)
     ;


extern int utmpname (const char *__file) ;


extern struct utmp *getutent (void) ;


extern void setutent (void) ;


extern void endutent (void) ;



extern struct utmp *getutid (const struct utmp *__id) ;



extern struct utmp *getutline (const struct utmp *__line) ;


extern struct utmp *pututline (const struct utmp *__utmp_ptr) ;


#line 83 "/usr/include/utmp.h"

extern int getutent_r (struct utmp *__buffer, struct utmp **__result) ;

extern int getutid_r (const struct utmp *__id, struct utmp *__buffer,
		      struct utmp **__result) ;

extern int getutline_r (const struct utmp *__line,
			struct utmp *__buffer, struct utmp **__result) ;

#line 93 "/usr/include/utmp.h"


#line 5 "/usr/include/lastlog.h"
#line 48 "all.nc"
#line 1 "/usr/include/libgen.h"

















#line 20 "/usr/include/libgen.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/libgen.h"




extern char *dirname (char *__path) ;







extern char *__xpg_basename (char *__path) ;
#line 36 "/usr/include/libgen.h"


#line 49 "all.nc"
#line 1 "/usr/include/libintl.h"



















#line 22 "/usr/include/libintl.h"

#line 1 "/usr/include/features.h"
















#line 24 "/usr/include/libintl.h"



#line 28 "/usr/include/libintl.h"



#line 32 "/usr/include/libintl.h"






extern char *gettext (const char *__msgid)
      __attribute__ ((__format_arg__ (1)));



extern char *dgettext (const char *__domainname, const char *__msgid)
      __attribute__ ((__format_arg__ (2)));
extern char *__dgettext (const char *__domainname, const char *__msgid)
      __attribute__ ((__format_arg__ (2)));



extern char *dcgettext (const char *__domainname,
			const char *__msgid, int __category)
      __attribute__ ((__format_arg__ (2)));
extern char *__dcgettext (const char *__domainname,
			  const char *__msgid, int __category)
      __attribute__ ((__format_arg__ (2)));




extern char *ngettext (const char *__msgid1, const char *__msgid2,
		       unsigned long int __n)
      __attribute__ ((__format_arg__ (1))) __attribute__ ((__format_arg__ (2)));



extern char *dngettext (const char *__domainname, const char *__msgid1,
			const char *__msgid2, unsigned long int __n)
      __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));



extern char *dcngettext (const char *__domainname, const char *__msgid1,
			 const char *__msgid2, unsigned long int __n,
			 int __category)
      __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));





extern char *textdomain (const char *__domainname) ;



extern char *bindtextdomain (const char *__domainname,
			     const char *__dirname) ;



extern char *bind_textdomain_codeset (const char *__domainname,
				      const char *__codeset) ;



#line 117 "/usr/include/libintl.h"


#line 50 "all.nc"
#line 1 "/usr/include/limits.h"





















#line 116 "/usr/include/limits.h"

 




#line 126 "/usr/include/limits.h"




#line 141 "/usr/include/limits.h"




#line 180 "/usr/include/limits.h"




#line 192 "/usr/include/limits.h"

#line 194 "/usr/include/limits.h"

#line 1 "/usr/include/bits/posix1_lim.h"






















#line 196 "/usr/include/limits.h"
#line 197 "/usr/include/limits.h"

#line 1 "/usr/include/bits/posix2_lim.h"




















#line 200 "/usr/include/limits.h"
#line 201 "/usr/include/limits.h"

#line 1 "/usr/include/bits/xopen_lim.h"



























#line 204 "/usr/include/limits.h"
#line 51 "all.nc"
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


#line 52 "all.nc"
#line 1 "/usr/include/malloc.h"



















#line 22 "/usr/include/malloc.h"

#line 1 "/usr/include/features.h"
















#line 24 "/usr/include/malloc.h"
#line 1 "/usr/lib/clang/21/include/stddef.h"





















#line 37 "/usr/lib/clang/21/include/stddef.h"

#line 41 "/usr/lib/clang/21/include/stddef.h"


#line 75 "/usr/lib/clang/21/include/stddef.h"



#line 1 "/usr/lib/clang/21/include/__stddef_header_macro.h"








#line 79 "/usr/lib/clang/21/include/stddef.h"
#line 80 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_ptrdiff_t.h"












#line 83 "/usr/lib/clang/21/include/stddef.h"
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

#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_max_align_t.h"








#line 118 "/usr/lib/clang/21/include/stddef.h"
#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_offsetof.h"












#line 123 "/usr/lib/clang/21/include/stddef.h"
#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 25 "/usr/include/malloc.h"
#line 1 "/usr/include/stdio.h"






















#line 26 "/usr/include/malloc.h"

#line 34 "/usr/include/malloc.h"





extern void *malloc (size_t __size)  __attribute__ ((__malloc__))
      ;


extern void *calloc (size_t __nmemb, size_t __size)
 __attribute__ ((__malloc__))  ;






extern void *realloc (void *__ptr, size_t __size)
  ;






extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
    
  ;


extern void free (void *__ptr) ;


extern void *memalign (size_t __alignment, size_t __size)
   __attribute__ ((__malloc__)) 
    ;


extern void *valloc (size_t __size)  __attribute__ ((__malloc__))
       ;



extern void *pvalloc (size_t __size)  __attribute__ ((__malloc__))
   ;



struct mallinfo
{
  int arena;    
  int ordblks;  
  int smblks;   
  int hblks;    
  int hblkhd;   
  int usmblks;  
  int fsmblks;  
  int uordblks; 
  int fordblks; 
  int keepcost; 
};




struct mallinfo2
{
  size_t arena;    
  size_t ordblks;  
  size_t smblks;   
  size_t hblks;    
  size_t hblkhd;   
  size_t usmblks;  
  size_t fsmblks;  
  size_t uordblks; 
  size_t fordblks; 
  size_t keepcost; 
};


extern struct mallinfo mallinfo (void)  __attribute__ ((__deprecated__));


extern struct mallinfo2 mallinfo2 (void) ;


#line 132 "/usr/include/malloc.h"


#line 142 "/usr/include/malloc.h"


extern int mallopt (int __param, int __val) ;



extern int malloc_trim (size_t __pad) ;



extern size_t malloc_usable_size (void *__ptr) ;


extern void malloc_stats (void) ;


extern int malloc_info (int __options, FILE *__fp) ;

#line 53 "all.nc"
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

















#line 44 "/usr/include/math.h"



#line 50 "/usr/include/math.h"





#line 87 "/usr/include/math.h"

#line 89 "/usr/include/math.h"

#line 97 "/usr/include/math.h"


#line 103 "/usr/include/math.h"



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



#line 54 "all.nc"
#line 1 "/usr/include/mcheck.h"

















#line 20 "/usr/include/mcheck.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/mcheck.h"





enum mcheck_status
{
  MCHECK_DISABLED = -1,         
  MCHECK_OK,                    
  MCHECK_FREE,                  
  MCHECK_HEAD,                  
  MCHECK_TAIL                   
};






extern int mcheck (void (*__abortfunc)(enum mcheck_status)) ;



extern int mcheck_pedantic (void (*__abortfunc)(enum mcheck_status)) ;


extern void mcheck_check_all (void);




extern enum mcheck_status mprobe (void *__ptr) ;


extern void mtrace (void) ;
extern void muntrace (void) ;

#line 55 "all.nc"
#line 1 "/usr/include/memory.h"





















#line 24 "/usr/include/memory.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/memory.h"


#line 31 "/usr/include/memory.h"

#line 56 "all.nc"
#line 1 "/usr/include/menu.h"



































#line 38 "/usr/include/menu.h"

#line 42 "/usr/include/menu.h"

#line 1 "/usr/include/curses.h"




































#line 44 "/usr/include/menu.h"
#line 1 "/usr/include/eti.h"


































#line 45 "/usr/include/menu.h"

#line 50 "/usr/include/menu.h"

#line 56 "/usr/include/menu.h"

#line 58 "/usr/include/menu.h"

#line 61 "/usr/include/menu.h"

  typedef int Menu_Options;
  typedef int Item_Options;


#line 73 "/usr/include/menu.h"


#line 76 "/usr/include/menu.h"

#line 85 "/usr/include/menu.h"

  struct tagMENU;

  typedef struct tagITEM
#line 108 "/usr/include/menu.h"
  ITEM;

  typedef void (*Menu_Hook) (struct tagMENU *);

  typedef struct tagMENU
#line 114 "/usr/include/menu.h"
    {
      short height;		
      short width;		
      short rows;		
      short cols;		
      short frows;		
      short fcols;		
      short arows;		
      short namelen;		
      short desclen;		
      short marklen;		
      short itemlen;		
      short spc_desc;		
      short spc_cols;		
      short spc_rows;		
      char *pattern;		
      short pindex;		
      WINDOW *win;		
      WINDOW *sub;		
      WINDOW *userwin;		
      WINDOW *usersub;		
      ITEM **items;		
      short nitems;		
      ITEM *curitem;		
      short toprow;		
      chtype fore;		
      chtype back;		
      chtype grey;		
      unsigned char pad;	

      Menu_Hook menuinit;	
      Menu_Hook menuterm;
      Menu_Hook iteminit;
      Menu_Hook itemterm;

      void *userptr;		
      char *mark;		

      Menu_Options opt;		
      unsigned short status;	
    }
#line 156 "/usr/include/menu.h"
  MENU;



#line 177 "/usr/include/menu.h"

#line 180 "/usr/include/menu.h"





#line 194 "/usr/include/menu.h"



  extern  ITEM **  menu_items(const MENU *);
  extern  ITEM *  current_item(const MENU *);
  extern  ITEM *  new_item(const char *, const char *);

  extern  MENU *  new_menu(ITEM **);

  extern  Item_Options  item_opts(const ITEM *);
  extern  Menu_Options  menu_opts(const MENU *);

  extern  Menu_Hook  item_init(const MENU *);
  extern  Menu_Hook  item_term(const MENU *);
  extern  Menu_Hook  menu_init(const MENU *);
  extern  Menu_Hook  menu_term(const MENU *);

  extern  WINDOW *  menu_sub(const MENU *);
  extern  WINDOW *  menu_win(const MENU *);

  extern  const char *  item_description(const ITEM *);
  extern  const char *  item_name(const ITEM *);
  extern  const char *  menu_mark(const MENU *);
  extern  const char *  menu_request_name(int);

  extern  char *  menu_pattern(const MENU *);

  extern  void *  menu_userptr(const MENU *);
  extern  void *  item_userptr(const ITEM *);

  extern  chtype  menu_back(const MENU *);
  extern  chtype  menu_fore(const MENU *);
  extern  chtype  menu_grey(const MENU *);

  extern  int  free_item(ITEM *);
  extern  int  free_menu(MENU *);
  extern  int  item_count(const MENU *);
  extern  int  item_index(const ITEM *);
  extern  int  item_opts_off(ITEM *, Item_Options);
  extern  int  item_opts_on(ITEM *, Item_Options);
  extern  int  menu_driver(MENU *, int);
  extern  int  menu_opts_off(MENU *, Menu_Options);
  extern  int  menu_opts_on(MENU *, Menu_Options);
  extern  int  menu_pad(const MENU *);
  extern  int  pos_menu_cursor(const MENU *);
  extern  int  post_menu(MENU *);
  extern  int  scale_menu(const MENU *, int *, int *);
  extern  int  set_current_item(MENU *menu, ITEM *item);
  extern  int  set_item_init(MENU *, Menu_Hook);
  extern  int  set_item_opts(ITEM *, Item_Options);
  extern  int  set_item_term(MENU *, Menu_Hook);
  extern  int  set_item_userptr(ITEM *, void *);
  extern  int  set_item_value(ITEM *, _Bool);
  extern  int  set_menu_back(MENU *, chtype);
  extern  int  set_menu_fore(MENU *, chtype);
  extern  int  set_menu_format(MENU *, int, int);
  extern  int  set_menu_grey(MENU *, chtype);
  extern  int  set_menu_init(MENU *, Menu_Hook);
  extern  int  set_menu_items(MENU *, ITEM **);
  extern  int  set_menu_mark(MENU *, const char *);
  extern  int  set_menu_opts(MENU *, Menu_Options);
  extern  int  set_menu_pad(MENU *, int);
  extern  int  set_menu_pattern(MENU *, const char *);
  extern  int  set_menu_sub(MENU *, WINDOW *);
  extern  int  set_menu_term(MENU *, Menu_Hook);
  extern  int  set_menu_userptr(MENU *, void *);
  extern  int  set_menu_win(MENU *, WINDOW *);
  extern  int  set_top_row(MENU *, int);
  extern  int  top_row(const MENU *);
  extern  int  unpost_menu(MENU *);
  extern  int  menu_request_by_name(const char *);
  extern  int  set_menu_spacing(MENU *, int, int, int);
  extern  int  menu_spacing(const MENU *, int *, int *, int *);

  extern  _Bool  item_value(const ITEM *);
  extern  _Bool  item_visible(const ITEM *);

  extern  void  menu_format(const MENU *, int *, int *);

#line 274 "/usr/include/menu.h"
  extern  MENU *  new_menu_sp (SCREEN *, ITEM **);
#line 276 "/usr/include/menu.h"

#line 280 "/usr/include/menu.h"
#line 57 "all.nc"
#line 1 "/usr/include/mntent.h"


















#line 21 "/usr/include/mntent.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/mntent.h"
#line 1 "/usr/include/paths.h"






























#line 24 "/usr/include/mntent.h"
#line 1 "/usr/include/bits/types/FILE.h"
#line 25 "/usr/include/mntent.h"


#line 28 "/usr/include/mntent.h"


#line 31 "/usr/include/mntent.h"



#line 37 "/usr/include/mntent.h"



#line 46 "/usr/include/mntent.h"





struct mntent
  {
    char *mnt_fsname;		
    char *mnt_dir;		
    char *mnt_type;		
    char *mnt_opts;		
    int mnt_freq;		
    int mnt_passno;		
  };




extern FILE *setmntent (const char *__file, const char *__mode) ;




extern struct mntent *getmntent (FILE *__stream) ;

#line 72 "/usr/include/mntent.h"

extern struct mntent *getmntent_r (FILE *__restrict __stream,
				   struct mntent *__restrict __result,
				   char *__restrict __buffer,
				   int __bufsize) ;
#line 78 "/usr/include/mntent.h"



extern int addmntent (FILE *__restrict __stream,
		      const struct mntent *__restrict __mnt) ;


extern int endmntent (FILE *__stream) ;



extern char *hasmntopt (const struct mntent *__mnt,
			const char *__opt) ;



#line 58 "all.nc"
#line 1 "/usr/include/monetary.h"


















#line 21 "/usr/include/monetary.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/monetary.h"


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
#line 27 "/usr/include/monetary.h"
#line 1 "/usr/include/bits/types.h"





















#line 28 "/usr/include/monetary.h"

#line 33 "/usr/include/monetary.h"





extern ssize_t strfmon (char *__restrict __s, size_t __maxsize,
			const char *__restrict __format, ...)
      __attribute__ ((__format__ (__strfmon__, 3, 4)))
     ;

#line 44 "/usr/include/monetary.h"

#line 1 "/usr/include/bits/types/locale_t.h"

















#line 46 "/usr/include/monetary.h"


extern ssize_t strfmon_l (char *__restrict __s, size_t __maxsize,
			  locale_t __loc,
			  const char *__restrict __format, ...)
      __attribute__ ((__format__ (__strfmon__, 4, 5)))
     ;
#line 54 "/usr/include/monetary.h"

#line 1 "/usr/include/bits/floatn.h"

















#line 56 "/usr/include/monetary.h"
#line 59 "/usr/include/monetary.h"


#line 59 "all.nc"
#line 1 "/usr/include/mqueue.h"

















#line 20 "/usr/include/mqueue.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/mqueue.h"
#line 1 "/usr/include/sys/types.h"




















#line 23 "/usr/include/mqueue.h"
#line 1 "/usr/include/fcntl.h"




















#line 24 "/usr/include/mqueue.h"
#line 1 "/usr/include/bits/types/sigevent_t.h"
#line 25 "/usr/include/mqueue.h"
#line 1 "/usr/include/bits/types/struct_timespec.h"
#line 26 "/usr/include/mqueue.h"

#line 1 "/usr/include/bits/mqueue.h"

















#line 21 "/usr/include/bits/mqueue.h"

#line 1 "/usr/include/bits/types.h"





















#line 23 "/usr/include/bits/mqueue.h"

typedef int mqd_t;

struct mq_attr
{
  __syscall_slong_t mq_flags;	
  __syscall_slong_t mq_maxmsg;	
  __syscall_slong_t mq_msgsize;	
  __syscall_slong_t mq_curmsgs;	
  __syscall_slong_t __pad[4];
};
#line 28 "/usr/include/mqueue.h"










extern mqd_t mq_open (const char *__name, int __oflag, ...)
   ;



extern int mq_close (mqd_t __mqdes) ;


extern int mq_getattr (mqd_t __mqdes, struct mq_attr *__mqstat)
   ;



extern int mq_setattr (mqd_t __mqdes,
		       const struct mq_attr *__restrict __mqstat,
		       struct mq_attr *__restrict __omqstat)
   ;


extern int mq_unlink (const char *__name)  ;



extern int mq_notify (mqd_t __mqdes, const struct sigevent *__notification)
     ;



extern ssize_t mq_receive (mqd_t __mqdes, char *__msg_ptr, size_t __msg_len,
			   unsigned int *__msg_prio) ;


extern int mq_send (mqd_t __mqdes, const char *__msg_ptr, size_t __msg_len,
		    unsigned int __msg_prio) ;

#line 75 "/usr/include/mqueue.h"


extern ssize_t mq_timedreceive (mqd_t __mqdes, char *__restrict __msg_ptr,
				size_t __msg_len,
				unsigned int *__restrict __msg_prio,
				const struct timespec *__restrict __abs_timeout)
  ;



extern int mq_timedsend (mqd_t __mqdes, const char *__msg_ptr,
			 size_t __msg_len, unsigned int __msg_prio,
			 const struct timespec *__abs_timeout)
  ;
#line 111 "/usr/include/mqueue.h"


#line 116 "/usr/include/mqueue.h"


#line 60 "all.nc"
#line 1 "/usr/include/ncurses.h"




































#line 61 "all.nc"
#line 1 "/usr/include/ncurses_dll.h"





























#line 62 "all.nc"
#line 1 "/usr/include/netdb.h"
  




















#line 24 "/usr/include/netdb.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/netdb.h"

#line 1 "/usr/include/netinet/in.h"

















#line 20 "/usr/include/netinet/in.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/netinet/in.h"
#line 1 "/usr/include/bits/stdint-uintn.h"

















#line 23 "/usr/include/netinet/in.h"
#line 1 "/usr/include/sys/socket.h"

















#line 24 "/usr/include/netinet/in.h"
#line 1 "/usr/include/bits/types.h"





















#line 25 "/usr/include/netinet/in.h"





typedef uint32_t in_addr_t;
struct in_addr
  {
    in_addr_t s_addr;
  };


#line 1 "/usr/include/bits/in.h"



















#line 23 "/usr/include/bits/in.h"









#line 40 "/usr/include/bits/in.h"




#line 49 "/usr/include/bits/in.h"

#line 72 "/usr/include/bits/in.h"

#line 76 "/usr/include/bits/in.h"

#line 92 "/usr/include/bits/in.h"


#line 96 "/usr/include/bits/in.h"

#line 103 "/usr/include/bits/in.h"


#line 109 "/usr/include/bits/in.h"



#line 113 "/usr/include/bits/in.h"

#line 115 "/usr/include/bits/in.h"

#line 130 "/usr/include/bits/in.h"


#line 133 "/usr/include/bits/in.h"

#line 137 "/usr/include/bits/in.h"

#line 139 "/usr/include/bits/in.h"



struct ip_opts
  {
    struct in_addr ip_dst;	
    char ip_opts[40];		
  };


struct in_pktinfo
  {
    int ipi_ifindex;			
    struct in_addr ipi_spec_dst;	
    struct in_addr ipi_addr;		
  };
#line 156 "/usr/include/bits/in.h"




#line 168 "/usr/include/bits/in.h"

#line 170 "/usr/include/bits/in.h"

#line 192 "/usr/include/bits/in.h"


#line 208 "/usr/include/bits/in.h"


#line 212 "/usr/include/bits/in.h"

#line 214 "/usr/include/bits/in.h"


#line 217 "/usr/include/bits/in.h"


#line 220 "/usr/include/bits/in.h"

#line 227 "/usr/include/bits/in.h"


#line 235 "/usr/include/bits/in.h"


#line 243 "/usr/include/bits/in.h"


#line 247 "/usr/include/bits/in.h"


#line 251 "/usr/include/bits/in.h"
#line 38 "/usr/include/netinet/in.h"


enum
  {
    IPPROTO_IP = 0,	   
#line 44 "/usr/include/netinet/in.h"
    IPPROTO_ICMP = 1,	   
#line 46 "/usr/include/netinet/in.h"
    IPPROTO_IGMP = 2,	   
#line 48 "/usr/include/netinet/in.h"
    IPPROTO_IPIP = 4,	   
#line 50 "/usr/include/netinet/in.h"
    IPPROTO_TCP = 6,	   
#line 52 "/usr/include/netinet/in.h"
    IPPROTO_EGP = 8,	   
#line 54 "/usr/include/netinet/in.h"
    IPPROTO_PUP = 12,	   
#line 56 "/usr/include/netinet/in.h"
    IPPROTO_UDP = 17,	   
#line 58 "/usr/include/netinet/in.h"
    IPPROTO_IDP = 22,	   
#line 60 "/usr/include/netinet/in.h"
    IPPROTO_TP = 29,	   
#line 62 "/usr/include/netinet/in.h"
    IPPROTO_DCCP = 33,	   
#line 64 "/usr/include/netinet/in.h"
    IPPROTO_IPV6 = 41,     
#line 66 "/usr/include/netinet/in.h"
    IPPROTO_RSVP = 46,	   
#line 68 "/usr/include/netinet/in.h"
    IPPROTO_GRE = 47,	   
#line 70 "/usr/include/netinet/in.h"
    IPPROTO_ESP = 50,      
#line 72 "/usr/include/netinet/in.h"
    IPPROTO_AH = 51,       
#line 74 "/usr/include/netinet/in.h"
    IPPROTO_MTP = 92,	   
#line 76 "/usr/include/netinet/in.h"
    IPPROTO_BEETPH = 94,   
#line 78 "/usr/include/netinet/in.h"
    IPPROTO_ENCAP = 98,	   
#line 80 "/usr/include/netinet/in.h"
    IPPROTO_PIM = 103,	   
#line 82 "/usr/include/netinet/in.h"
    IPPROTO_COMP = 108,	   
#line 84 "/usr/include/netinet/in.h"
    IPPROTO_L2TP = 115,	   
#line 86 "/usr/include/netinet/in.h"
    IPPROTO_SCTP = 132,	   
#line 88 "/usr/include/netinet/in.h"
    IPPROTO_UDPLITE = 136, 
#line 90 "/usr/include/netinet/in.h"
    IPPROTO_MPLS = 137,    
#line 92 "/usr/include/netinet/in.h"
    IPPROTO_ETHERNET = 143, 
#line 94 "/usr/include/netinet/in.h"
    IPPROTO_RAW = 255,	   
#line 96 "/usr/include/netinet/in.h"
    IPPROTO_SMC = 256,	   
#line 98 "/usr/include/netinet/in.h"
    IPPROTO_MPTCP = 262,   
#line 100 "/usr/include/netinet/in.h"
    IPPROTO_MAX
  };




#line 107 "/usr/include/netinet/in.h"
enum
  {
    IPPROTO_HOPOPTS = 0,   
#line 111 "/usr/include/netinet/in.h"
    IPPROTO_ROUTING = 43,  
#line 113 "/usr/include/netinet/in.h"
    IPPROTO_FRAGMENT = 44, 
#line 115 "/usr/include/netinet/in.h"
    IPPROTO_ICMPV6 = 58,   
#line 117 "/usr/include/netinet/in.h"
    IPPROTO_NONE = 59,     
#line 119 "/usr/include/netinet/in.h"
    IPPROTO_DSTOPTS = 60,  
#line 121 "/usr/include/netinet/in.h"
    IPPROTO_MH = 135       
#line 123 "/usr/include/netinet/in.h"
  };
#line 125 "/usr/include/netinet/in.h"


typedef uint16_t in_port_t;


enum
  {
    IPPORT_ECHO = 7,		
    IPPORT_DISCARD = 9,		
    IPPORT_SYSTAT = 11,		
    IPPORT_DAYTIME = 13,	
    IPPORT_NETSTAT = 15,	
    IPPORT_FTP = 21,		
    IPPORT_TELNET = 23,		
    IPPORT_SMTP = 25,		
    IPPORT_TIMESERVER = 37,	
    IPPORT_NAMESERVER = 42,	
    IPPORT_WHOIS = 43,		
    IPPORT_MTP = 57,

    IPPORT_TFTP = 69,		
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79,		
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95,		


    IPPORT_EXECSERVER = 512,	
    IPPORT_LOGINSERVER = 513,	
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,

    
    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,

    
    IPPORT_RESERVED = 1024,

    
    IPPORT_USERRESERVED = 5000
  };






#line 179 "/usr/include/netinet/in.h"

#line 185 "/usr/include/netinet/in.h"

#line 190 "/usr/include/netinet/in.h"

#line 193 "/usr/include/netinet/in.h"

#line 196 "/usr/include/netinet/in.h"


#line 199 "/usr/include/netinet/in.h"

#line 201 "/usr/include/netinet/in.h"

#line 203 "/usr/include/netinet/in.h"


#line 206 "/usr/include/netinet/in.h"


#line 209 "/usr/include/netinet/in.h"

#line 213 "/usr/include/netinet/in.h"


#line 220 "/usr/include/netinet/in.h"

#line 222 "/usr/include/netinet/in.h"

struct in6_addr
  {
    union
      {
	uint8_t	__u6_addr8[16];
	uint16_t __u6_addr16[8];
	uint32_t __u6_addr32[4];
      } __in6_u;
#line 236 "/usr/include/netinet/in.h"
  };
#line 238 "/usr/include/netinet/in.h"

extern const struct in6_addr in6addr_any;        
extern const struct in6_addr in6addr_loopback;   
#line 243 "/usr/include/netinet/in.h"

#line 246 "/usr/include/netinet/in.h"



struct __attribute__ ((__may_alias__)) sockaddr_in
  {
    sa_family_t sin_family;
    in_port_t sin_port;			
    struct in_addr sin_addr;		

    
    unsigned char sin_zero[sizeof (struct sockaddr)
			   - (sizeof (unsigned short int))
			   - sizeof (in_port_t)
			   - sizeof (struct in_addr)];
  };

#line 265 "/usr/include/netinet/in.h"

struct __attribute__ ((__may_alias__)) sockaddr_in6
  {
    sa_family_t sin6_family;
    in_port_t sin6_port;	
    uint32_t sin6_flowinfo;	
    struct in6_addr sin6_addr;	
    uint32_t sin6_scope_id;	
  };
#line 275 "/usr/include/netinet/in.h"

#line 277 "/usr/include/netinet/in.h"

struct ip_mreq
  {
    
    struct in_addr imr_multiaddr;

    
    struct in_addr imr_interface;
  };


struct ip_mreqn
  {
    
    struct in_addr imr_multiaddr;

    
    struct in_addr imr_address;

    
    int imr_ifindex;
  };

struct ip_mreq_source
  {
    
    struct in_addr imr_multiaddr;

    
    struct in_addr imr_interface;

    
    struct in_addr imr_sourceaddr;
  };
#line 312 "/usr/include/netinet/in.h"

#line 314 "/usr/include/netinet/in.h"

struct ipv6_mreq
  {
    
    struct in6_addr ipv6mr_multiaddr;

    
    unsigned int ipv6mr_interface;
  };
#line 324 "/usr/include/netinet/in.h"

#line 326 "/usr/include/netinet/in.h"

struct group_req
  {
    
    uint32_t gr_interface;

    
    struct sockaddr_storage gr_group;
  };

struct group_source_req
  {
    
    uint32_t gsr_interface;

    
    struct sockaddr_storage gsr_group;

    
    struct sockaddr_storage gsr_source;
  };



struct ip_msfilter
  {
    
    struct in_addr imsf_multiaddr;

    
    struct in_addr imsf_interface;

    
    uint32_t imsf_fmode;

    
    uint32_t imsf_numsrc;
    
    struct in_addr imsf_slist[1];
  };

#line 368 "/usr/include/netinet/in.h"

struct group_filter
  {
    
    uint32_t gf_interface;

    
    struct sockaddr_storage gf_group;

    
    uint32_t gf_fmode;

    
    uint32_t gf_numsrc;
    
    struct sockaddr_storage gf_slist[1];
};

#line 388 "/usr/include/netinet/in.h"








extern uint32_t ntohl (uint32_t __netlong)  __attribute__ ((__const__));
extern uint16_t ntohs (uint16_t __netshort)
      __attribute__ ((__const__));
extern uint32_t htonl (uint32_t __hostlong)
      __attribute__ ((__const__));
extern uint16_t htons (uint16_t __hostshort)
      __attribute__ ((__const__));

#line 1 "/usr/include/endian.h"
















#line 405 "/usr/include/netinet/in.h"


#line 1 "/usr/include/bits/byteswap.h"


















#line 22 "/usr/include/bits/byteswap.h"
#line 408 "/usr/include/netinet/in.h"
#line 1 "/usr/include/bits/uintn-identity.h"


















#line 22 "/usr/include/bits/uintn-identity.h"
#line 409 "/usr/include/netinet/in.h"

#line 430 "/usr/include/netinet/in.h"

#line 433 "/usr/include/netinet/in.h"

#line 435 "/usr/include/netinet/in.h"

#line 437 "/usr/include/netinet/in.h"

#line 439 "/usr/include/netinet/in.h"

#line 441 "/usr/include/netinet/in.h"

#line 443 "/usr/include/netinet/in.h"

#line 460 "/usr/include/netinet/in.h"

#line 462 "/usr/include/netinet/in.h"

#line 464 "/usr/include/netinet/in.h"

extern int bindresvport (int __sockfd, struct sockaddr_in *__sock_in) ;


extern int bindresvport6 (int __sockfd, struct sockaddr_in6 *__sock_in)
     ;
#line 471 "/usr/include/netinet/in.h"


#line 474 "/usr/include/netinet/in.h"

#line 476 "/usr/include/netinet/in.h"

#line 478 "/usr/include/netinet/in.h"

#line 480 "/usr/include/netinet/in.h"

#line 482 "/usr/include/netinet/in.h"


#line 485 "/usr/include/netinet/in.h"
struct cmsghdr;			

#line 488 "/usr/include/netinet/in.h"

struct in6_pktinfo
  {
    struct in6_addr ipi6_addr;	
    unsigned int ipi6_ifindex;	
  };


struct ip6_mtuinfo
  {
    struct sockaddr_in6 ip6m_addr; 
    uint32_t ip6m_mtu;		   
  };
#line 502 "/usr/include/netinet/in.h"


extern int inet6_option_space (int __nbytes)
      __attribute__ ((__deprecated__));
extern int inet6_option_init (void *__bp, struct cmsghdr **__cmsgp,
			      int __type)  __attribute__ ((__deprecated__));
extern int inet6_option_append (struct cmsghdr *__cmsg,
				const uint8_t *__typep, int __multx,
				int __plusy)  __attribute__ ((__deprecated__));
extern uint8_t *inet6_option_alloc (struct cmsghdr *__cmsg, int __datalen,
				    int __multx, int __plusy)
      __attribute__ ((__deprecated__));
extern int inet6_option_next (const struct cmsghdr *__cmsg,
			      uint8_t **__tptrp)
      __attribute__ ((__deprecated__));
extern int inet6_option_find (const struct cmsghdr *__cmsg,
			      uint8_t **__tptrp, int __type)
      __attribute__ ((__deprecated__));



extern int inet6_opt_init (void *__extbuf, socklen_t __extlen) ;
extern int inet6_opt_append (void *__extbuf, socklen_t __extlen, int __offset,
			     uint8_t __type, socklen_t __len, uint8_t __align,
			     void **__databufp) ;
extern int inet6_opt_finish (void *__extbuf, socklen_t __extlen, int __offset)
     ;
extern int inet6_opt_set_val (void *__databuf, int __offset, void *__val,
			      socklen_t __vallen) ;
extern int inet6_opt_next (void *__extbuf, socklen_t __extlen, int __offset,
			   uint8_t *__typep, socklen_t *__lenp,
			   void **__databufp) ;
extern int inet6_opt_find (void *__extbuf, socklen_t __extlen, int __offset,
			   uint8_t __type, socklen_t *__lenp,
			   void **__databufp) ;
extern int inet6_opt_get_val (void *__databuf, int __offset, void *__val,
			      socklen_t __vallen) ;



extern socklen_t inet6_rth_space (int __type, int __segments) ;
extern void *inet6_rth_init (void *__bp, socklen_t __bp_len, int __type,
			     int __segments) ;
extern int inet6_rth_add (void *__bp, const struct in6_addr *__addr) ;
extern int inet6_rth_reverse (const void *__in, void *__out) ;
extern int inet6_rth_segments (const void *__bp) ;
extern struct in6_addr *inet6_rth_getaddr (const void *__bp, int __index)
     ;





extern int getipv4sourcefilter (int __s, struct in_addr __interface_addr,
				struct in_addr __group, uint32_t *__fmode,
				uint32_t *__numsrc, struct in_addr *__slist)
     ;


extern int setipv4sourcefilter (int __s, struct in_addr __interface_addr,
				struct in_addr __group, uint32_t __fmode,
				uint32_t __numsrc,
				const struct in_addr *__slist)
     ;



extern int getsourcefilter (int __s, uint32_t __interface_addr,
			    const struct sockaddr *__group,
			    socklen_t __grouplen, uint32_t *__fmode,
			    uint32_t *__numsrc,
			    struct sockaddr_storage *__slist) ;


extern int setsourcefilter (int __s, uint32_t __interface_addr,
			    const struct sockaddr *__group,
			    socklen_t __grouplen, uint32_t __fmode,
			    uint32_t __numsrc,
			    const struct sockaddr_storage *__slist) ;
#line 582 "/usr/include/netinet/in.h"


#line 28 "/usr/include/netdb.h"
#line 1 "/usr/include/bits/stdint-uintn.h"

















#line 29 "/usr/include/netdb.h"
#line 30 "/usr/include/netdb.h"


#line 1 "/usr/include/rpc/netdb.h"



































#line 38 "/usr/include/rpc/netdb.h"

#line 1 "/usr/include/features.h"
















#line 40 "/usr/include/rpc/netdb.h"

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
#line 43 "/usr/include/rpc/netdb.h"



struct rpcent
{
  char *r_name;		
  char **r_aliases;	
  int r_number;		
};

extern void setrpcent (int __stayopen) ;
extern void endrpcent (void) ;
extern struct rpcent *getrpcbyname (const char *__name) ;
extern struct rpcent *getrpcbynumber (int __number) ;
extern struct rpcent *getrpcent (void) ;

#line 60 "/usr/include/rpc/netdb.h"
extern int getrpcbyname_r (const char *__name, struct rpcent *__result_buf,
			   char *__buffer, size_t __buflen,
			   struct rpcent **__result) ;

extern int getrpcbynumber_r (int __number, struct rpcent *__result_buf,
			     char *__buffer, size_t __buflen,
			     struct rpcent **__result) ;

extern int getrpcent_r (struct rpcent *__result_buf, char *__buffer,
			size_t __buflen, struct rpcent **__result) ;
#line 71 "/usr/include/rpc/netdb.h"


#line 33 "/usr/include/netdb.h"
#line 34 "/usr/include/netdb.h"

#line 1 "/usr/include/bits/types/sigevent_t.h"
#line 37 "/usr/include/netdb.h"
#line 1 "/usr/include/bits/types/struct_timespec.h"
#line 38 "/usr/include/netdb.h"
#line 39 "/usr/include/netdb.h"

#line 1 "/usr/include/bits/netdb.h"

















#line 21 "/usr/include/bits/netdb.h"





struct netent
{
  char *n_name;			
  char **n_aliases;		
  int n_addrtype;		
  uint32_t n_net;		
};
#line 41 "/usr/include/netdb.h"


#line 49 "/usr/include/netdb.h"




#line 54 "/usr/include/netdb.h"


#line 57 "/usr/include/netdb.h"


extern int *__h_errno_location (void)  __attribute__ ((__const__));



#line 76 "/usr/include/netdb.h"

#line 78 "/usr/include/netdb.h"

#line 81 "/usr/include/netdb.h"

#line 83 "/usr/include/netdb.h"

#line 86 "/usr/include/netdb.h"

#line 88 "/usr/include/netdb.h"


extern void herror (const char *__str) ;


extern const char *hstrerror (int __err_num) ;
#line 95 "/usr/include/netdb.h"



struct hostent
{
  char *h_name;			
  char **h_aliases;		
  int h_addrtype;		
  int h_length;			
  char **h_addr_list;		
#line 108 "/usr/include/netdb.h"
};






extern void sethostent (int __stay_open);





extern void endhostent (void);






extern struct hostent *gethostent (void);






extern struct hostent *gethostbyaddr (const void *__addr, __socklen_t __len,
				      int __type);





extern struct hostent *gethostbyname (const char *__name);

#line 145 "/usr/include/netdb.h"








extern struct hostent *gethostbyname2 (const char *__name, int __af);











extern int gethostent_r (struct hostent *__restrict __result_buf,
			 char *__restrict __buf, size_t __buflen,
			 struct hostent **__restrict __result,
			 int *__restrict __h_errnop);

extern int gethostbyaddr_r (const void *__restrict __addr, __socklen_t __len,
			    int __type,
			    struct hostent *__restrict __result_buf,
			    char *__restrict __buf, size_t __buflen,
			    struct hostent **__restrict __result,
			    int *__restrict __h_errnop);

extern int gethostbyname_r (const char *__restrict __name,
			    struct hostent *__restrict __result_buf,
			    char *__restrict __buf, size_t __buflen,
			    struct hostent **__restrict __result,
			    int *__restrict __h_errnop);

extern int gethostbyname2_r (const char *__restrict __name, int __af,
			     struct hostent *__restrict __result_buf,
			     char *__restrict __buf, size_t __buflen,
			     struct hostent **__restrict __result,
			     int *__restrict __h_errnop);
#line 189 "/usr/include/netdb.h"







extern void setnetent (int __stay_open);





extern void endnetent (void);






extern struct netent *getnetent (void);






extern struct netent *getnetbyaddr (uint32_t __net, int __type);





extern struct netent *getnetbyname (const char *__name);

#line 225 "/usr/include/netdb.h"










extern int getnetent_r (struct netent *__restrict __result_buf,
			char *__restrict __buf, size_t __buflen,
			struct netent **__restrict __result,
			int *__restrict __h_errnop);

extern int getnetbyaddr_r (uint32_t __net, int __type,
			   struct netent *__restrict __result_buf,
			   char *__restrict __buf, size_t __buflen,
			   struct netent **__restrict __result,
			   int *__restrict __h_errnop);

extern int getnetbyname_r (const char *__restrict __name,
			   struct netent *__restrict __result_buf,
			   char *__restrict __buf, size_t __buflen,
			   struct netent **__restrict __result,
			   int *__restrict __h_errnop);
#line 252 "/usr/include/netdb.h"



struct servent
{
  char *s_name;			
  char **s_aliases;		
  int s_port;			
  char *s_proto;		
};






extern void setservent (int __stay_open);





extern void endservent (void);






extern struct servent *getservent (void);






extern struct servent *getservbyname (const char *__name, const char *__proto);






extern struct servent *getservbyport (int __port, const char *__proto);


#line 299 "/usr/include/netdb.h"







extern int getservent_r (struct servent *__restrict __result_buf,
			 char *__restrict __buf, size_t __buflen,
			 struct servent **__restrict __result);

extern int getservbyname_r (const char *__restrict __name,
			    const char *__restrict __proto,
			    struct servent *__restrict __result_buf,
			    char *__restrict __buf, size_t __buflen,
			    struct servent **__restrict __result);

extern int getservbyport_r (int __port, const char *__restrict __proto,
			    struct servent *__restrict __result_buf,
			    char *__restrict __buf, size_t __buflen,
			    struct servent **__restrict __result);
#line 321 "/usr/include/netdb.h"



struct protoent
{
  char *p_name;			
  char **p_aliases;		
  int p_proto;			
};






extern void setprotoent (int __stay_open);





extern void endprotoent (void);






extern struct protoent *getprotoent (void);





extern struct protoent *getprotobyname (const char *__name);





extern struct protoent *getprotobynumber (int __proto);


#line 365 "/usr/include/netdb.h"







extern int getprotoent_r (struct protoent *__restrict __result_buf,
			  char *__restrict __buf, size_t __buflen,
			  struct protoent **__restrict __result);

extern int getprotobyname_r (const char *__restrict __name,
			     struct protoent *__restrict __result_buf,
			     char *__restrict __buf, size_t __buflen,
			     struct protoent **__restrict __result);

extern int getprotobynumber_r (int __proto,
			       struct protoent *__restrict __result_buf,
			       char *__restrict __buf, size_t __buflen,
			       struct protoent **__restrict __result);








extern int setnetgrent (const char *__netgroup);







extern void endnetgrent (void);








extern int getnetgrent (char **__restrict __hostp,
			char **__restrict __userp,
			char **__restrict __domainp);








extern int innetgr (const char *__netgroup, const char *__host,
		    const char *__user, const char *__domain);







extern int getnetgrent_r (char **__restrict __hostp,
			  char **__restrict __userp,
			  char **__restrict __domainp,
			  char *__restrict __buffer, size_t __buflen);
#line 435 "/usr/include/netdb.h"


#line 438 "/usr/include/netdb.h"











extern int rcmd (char **__restrict __ahost, unsigned short int __rport,
		 const char *__restrict __locuser,
		 const char *__restrict __remuser,
		 const char *__restrict __cmd, int *__restrict __fd2p);








extern int rcmd_af (char **__restrict __ahost, unsigned short int __rport,
		    const char *__restrict __locuser,
		    const char *__restrict __remuser,
		    const char *__restrict __cmd, int *__restrict __fd2p,
		    sa_family_t __af);











extern int rexec (char **__restrict __ahost, int __rport,
		  const char *__restrict __name,
		  const char *__restrict __pass,
		  const char *__restrict __cmd, int *__restrict __fd2p);








extern int rexec_af (char **__restrict __ahost, int __rport,
		     const char *__restrict __name,
		     const char *__restrict __pass,
		     const char *__restrict __cmd, int *__restrict __fd2p,
		     sa_family_t __af);









extern int ruserok (const char *__rhost, int __suser,
		    const char *__remuser, const char *__locuser);








extern int ruserok_af (const char *__rhost, int __suser,
		       const char *__remuser, const char *__locuser,
		       sa_family_t __af);










extern int iruserok (uint32_t __raddr, int __suser,
		     const char *__remuser, const char *__locuser);









extern int iruserok_af (const void *__raddr, int __suser,
			const char *__remuser, const char *__locuser,
			sa_family_t __af);









extern int rresvport (int *__alport);








extern int rresvport_af (int *__alport, sa_family_t __af);
#line 560 "/usr/include/netdb.h"



#line 564 "/usr/include/netdb.h"

struct addrinfo
{
  int ai_flags;			
  int ai_family;		
  int ai_socktype;		
  int ai_protocol;		
  socklen_t ai_addrlen;		
  struct sockaddr *ai_addr;	
  char *ai_canonname;		
  struct addrinfo *ai_next;	
};

#line 578 "/usr/include/netdb.h"

struct gaicb
{
  const char *ar_name;		
  const char *ar_service;	
  const struct addrinfo *ar_request; 
  struct addrinfo *ar_result;	
  
  int __return;
  int __glibc_reserved[5];
};


#line 594 "/usr/include/netdb.h"


#line 612 "/usr/include/netdb.h"


#line 634 "/usr/include/netdb.h"

#line 639 "/usr/include/netdb.h"

#line 650 "/usr/include/netdb.h"






extern int getaddrinfo (const char *__restrict __name,
			const char *__restrict __service,
			const struct addrinfo *__restrict __req,
			struct addrinfo **__restrict __pai);


extern void freeaddrinfo (struct addrinfo *__ai) ;


extern const char *gai_strerror (int __ecode) ;





extern int getnameinfo (const struct sockaddr *__restrict __sa,
			socklen_t __salen, char *__restrict __host,
			socklen_t __hostlen, char *__restrict __serv,
			socklen_t __servlen, int __flags);
#line 676 "/usr/include/netdb.h"

#line 678 "/usr/include/netdb.h"








extern int getaddrinfo_a (int __mode, struct gaicb *__list[__restrict],
			  int __ent, struct sigevent *__restrict __sig);









extern int gai_suspend (const struct gaicb *const __list[], int __ent,
			const struct timespec *__timeout);

#line 710 "/usr/include/netdb.h"


extern int gai_error (struct gaicb *__req) ;


extern int gai_cancel (struct gaicb *__gaicbp) ;
#line 717 "/usr/include/netdb.h"


#line 63 "all.nc"
#line 1 "/usr/include/nl_types.h"
















#line 64 "all.nc"
#line 1 "/usr/include/nss.h"




















#line 23 "/usr/include/nss.h"

#line 1 "/usr/include/features.h"
















#line 25 "/usr/include/nss.h"
#line 1 "/usr/lib/clang/21/include/stddef.h"





















#line 37 "/usr/lib/clang/21/include/stddef.h"

#line 41 "/usr/lib/clang/21/include/stddef.h"


#line 75 "/usr/lib/clang/21/include/stddef.h"



#line 1 "/usr/lib/clang/21/include/__stddef_header_macro.h"








#line 79 "/usr/lib/clang/21/include/stddef.h"
#line 80 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_ptrdiff_t.h"












#line 83 "/usr/lib/clang/21/include/stddef.h"
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

#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_max_align_t.h"








#line 118 "/usr/lib/clang/21/include/stddef.h"
#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 1 "/usr/lib/clang/21/include/__stddef_offsetof.h"












#line 123 "/usr/lib/clang/21/include/stddef.h"
#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 26 "/usr/include/nss.h"
#line 1 "/usr/include/stdint.h"




















#line 27 "/usr/include/nss.h"
#line 1 "/usr/include/sys/types.h"




















#line 28 "/usr/include/nss.h"





enum nss_status
{
  NSS_STATUS_TRYAGAIN = -2,
  NSS_STATUS_UNAVAIL,
  NSS_STATUS_NOTFOUND,
  NSS_STATUS_SUCCESS,
  NSS_STATUS_RETURN
};



struct gaih_addrtuple
  {
    struct gaih_addrtuple *next;
    char *name;
    int family;
    uint32_t addr[4];
    uint32_t scopeid;
  };








extern int __nss_configure_lookup (const char *__dbname,
                                   const char *__string) ;


struct __netgrent;
struct aliasent;
struct ether_addr;
struct etherent;
struct group;
struct hostent;
struct netent;
struct passwd;
struct protoent;
struct rpcent;
struct servent;
struct sgrp;
struct spwd;
struct traced_file;


typedef enum nss_status nss_endaliasent (void);
typedef enum nss_status nss_endetherent (void);
typedef enum nss_status nss_endgrent (void);
typedef enum nss_status nss_endhostent (void);
typedef enum nss_status nss_endnetent (void);
typedef enum nss_status nss_endnetgrent (struct __netgrent *);
typedef enum nss_status nss_endprotoent (void);
typedef enum nss_status nss_endpwent (void);
typedef enum nss_status nss_endrpcent (void);
typedef enum nss_status nss_endservent (void);
typedef enum nss_status nss_endsgent (void);
typedef enum nss_status nss_endspent (void);
typedef enum nss_status nss_getaliasbyname_r (const char *, struct aliasent *,
                                              char *, size_t, int *);
typedef enum nss_status nss_getaliasent_r (struct aliasent *,
                                           char *, size_t, int *);
typedef enum nss_status nss_getcanonname_r (const char *, char *, size_t,
                                            char **, int *, int *);
typedef enum nss_status nss_getetherent_r (struct etherent *,
                                           char *, size_t, int *);
typedef enum nss_status nss_getgrent_r (struct group *, char *, size_t, int *);
typedef enum nss_status nss_getgrgid_r (__gid_t, struct group *,
                                        char *, size_t, int *);
typedef enum nss_status nss_getgrnam_r (const char *, struct group *,
                                        char *, size_t, int *);
typedef enum nss_status nss_gethostbyaddr2_r (const void *, __socklen_t, int,
                                              struct hostent *, char *, size_t,
                                              int *, int *, int32_t *);
typedef enum nss_status nss_gethostbyaddr_r (const void *, __socklen_t, int,
                                             struct hostent *, char *, size_t,
                                             int *, int *);
typedef enum nss_status nss_gethostbyname2_r (const char *, int,
                                              struct hostent *, char *, size_t,
                                              int *, int *);
typedef enum nss_status nss_gethostbyname3_r (const char *, int,
                                              struct hostent *, char *, size_t,
                                              int *, int *, int32_t *,
                                              char **);
typedef enum nss_status nss_gethostbyname4_r (const char *,
                                              struct gaih_addrtuple **,
                                              char *, size_t,
                                              int *, int *, int32_t *);
typedef enum nss_status nss_gethostbyname_r (const char *, struct hostent *,
                                             char *, size_t, int *, int *);
typedef enum nss_status nss_gethostent_r (struct hostent *, char *, size_t,
                                          int *, int *);
typedef enum nss_status nss_gethostton_r (const char *, struct etherent *,
                                          char *, size_t, int *);
typedef enum nss_status nss_getnetbyaddr_r (uint32_t, int, struct netent *,
                                            char *, size_t, int *, int *);
typedef enum nss_status nss_getnetbyname_r (const char *, struct netent *,
                                            char *, size_t, int *, int *);
typedef enum nss_status nss_getnetent_r (struct netent *,
                                         char *, size_t, int *, int *);
typedef enum nss_status nss_getnetgrent_r (struct __netgrent *,
                                           char *, size_t, int *);
typedef enum nss_status nss_getntohost_r (const struct ether_addr *,
                                          struct etherent *, char *, size_t,
                                          int *);
typedef enum nss_status nss_getprotobyname_r (const char *, struct protoent *,
                                              char *, size_t, int *);
typedef enum nss_status nss_getprotobynumber_r (int, struct protoent *,
                                                char *, size_t, int *);
typedef enum nss_status nss_getprotoent_r (struct protoent *,
                                           char *, size_t, int *);
typedef enum nss_status nss_getpublickey (const char *, char *, int *);
typedef enum nss_status nss_getpwent_r (struct passwd *,
                                        char *, size_t, int *);
typedef enum nss_status nss_getpwnam_r (const char *, struct passwd *,
                                        char *, size_t, int *);
typedef enum nss_status nss_getpwuid_r (__uid_t, struct passwd *,
                                        char *, size_t, int *);
typedef enum nss_status nss_getrpcbyname_r (const char *, struct rpcent *,
                                            char *, size_t, int *);
typedef enum nss_status nss_getrpcbynumber_r (int, struct rpcent *,
                                              char *, size_t, int *);
typedef enum nss_status nss_getrpcent_r (struct rpcent *,
                                         char *, size_t, int *);
typedef enum nss_status nss_getsecretkey (const char *, char *, char *, int *);
typedef enum nss_status nss_getservbyname_r (const char *, const char *,
                                             struct servent *, char *, size_t,
                                             int *);
typedef enum nss_status nss_getservbyport_r (int, const char *,
                                             struct servent *, char *, size_t,
                                             int *);
typedef enum nss_status nss_getservent_r (struct servent *, char *, size_t,
                                          int *);
typedef enum nss_status nss_getsgent_r (struct sgrp *, char *, size_t, int *);
typedef enum nss_status nss_getsgnam_r (const char *, struct sgrp *,
                                        char *, size_t, int *);
typedef enum nss_status nss_getspent_r (struct spwd *, char *, size_t, int *);
typedef enum nss_status nss_getspnam_r (const char *, struct spwd *,
                                        char *, size_t, int *);
typedef void nss_init (void (*) (size_t, struct traced_file *));
typedef enum nss_status nss_initgroups_dyn (const char *, __gid_t, long int *,
                                            long int *, __gid_t **, long int,
                                            int *);
typedef enum nss_status nss_netname2user (char [], __uid_t *, __gid_t *,
                                          int *, __gid_t *, int *);
typedef enum nss_status nss_setaliasent (void);
typedef enum nss_status nss_setetherent (int);
typedef enum nss_status nss_setgrent (int);
typedef enum nss_status nss_sethostent (int);
typedef enum nss_status nss_setnetent (int);
typedef enum nss_status nss_setnetgrent (const char *, struct __netgrent *);
typedef enum nss_status nss_setprotoent (int);
typedef enum nss_status nss_setpwent (int);
typedef enum nss_status nss_setrpcent (int);
typedef enum nss_status nss_setservent (int);
typedef enum nss_status nss_setsgent (int);
typedef enum nss_status nss_setspent (int);


#line 194 "/usr/include/nss.h"

#line 65 "all.nc"
#line 1 "/usr/include/obstack.h"







































































































#line 106 "/usr/include/obstack.h"






#line 118 "/usr/include/obstack.h"





#line 124 "/usr/include/obstack.h"








#line 133 "/usr/include/obstack.h"

#line 1 "/usr/include/string.h"




















#line 135 "/usr/include/obstack.h"

#line 139 "/usr/include/obstack.h"

#line 143 "/usr/include/obstack.h"

struct _obstack_chunk           
{
  char *limit;                  
  struct _obstack_chunk *prev;  
  char contents[4];             
};

struct obstack          
{
  long chunk_size;              
  struct _obstack_chunk *chunk; 
  char *object_base;            
  char *next_free;              
  char *chunk_limit;            
  union
  {
    long tempint;
    void *tempptr;
  } temp;                       
  int alignment_mask;           
  


  struct _obstack_chunk *(*chunkfun) (void *, long);
  void (*freefun) (void *, struct _obstack_chunk *);
  void *extra_arg;              
  unsigned use_extra_arg : 1;     
  unsigned maybe_empty_object : 1; 



  unsigned alloc_failed : 1;      


};



extern void _obstack_newchunk (struct obstack *, int);
extern int _obstack_begin (struct obstack *, int, int,
			   void *(*)(long), void (*)(void *));
extern int _obstack_begin_1 (struct obstack *, int, int,
			     void *(*)(void *, long),
			     void (*)(void *, void *), void *);
extern int _obstack_memory_used (struct obstack *) __attribute__ ((__pure__));



#line 195 "/usr/include/obstack.h"
extern void obstack_free (struct obstack *, void *);






extern void (*obstack_alloc_failed_handler) (void);


extern int obstack_exit_failure;





#line 212 "/usr/include/obstack.h"



#line 216 "/usr/include/obstack.h"



#line 220 "/usr/include/obstack.h"



#line 224 "/usr/include/obstack.h"


#line 227 "/usr/include/obstack.h"

#line 229 "/usr/include/obstack.h"

#line 231 "/usr/include/obstack.h"

#line 233 "/usr/include/obstack.h"

#line 235 "/usr/include/obstack.h"

#line 237 "/usr/include/obstack.h"

#line 239 "/usr/include/obstack.h"

#line 241 "/usr/include/obstack.h"

#line 243 "/usr/include/obstack.h"

#line 248 "/usr/include/obstack.h"






#line 255 "/usr/include/obstack.h"

#line 257 "/usr/include/obstack.h"

#line 259 "/usr/include/obstack.h"

#line 261 "/usr/include/obstack.h"

#line 263 "/usr/include/obstack.h"

#line 265 "/usr/include/obstack.h"

#line 267 "/usr/include/obstack.h"





#line 274 "/usr/include/obstack.h"

#line 276 "/usr/include/obstack.h"

#line 278 "/usr/include/obstack.h"

#line 280 "/usr/include/obstack.h"

#line 282 "/usr/include/obstack.h"

#line 284 "/usr/include/obstack.h"

#line 286 "/usr/include/obstack.h"



#line 290 "/usr/include/obstack.h"

#line 292 "/usr/include/obstack.h"

#line 336 "/usr/include/obstack.h"

#line 340 "/usr/include/obstack.h"
#line 66 "all.nc"
#line 1 "/usr/include/panel.h"







































#line 42 "/usr/include/panel.h"

#line 1 "/usr/include/curses.h"




































#line 44 "/usr/include/panel.h"

typedef struct panel
#line 54 "/usr/include/panel.h"
PANEL;

#line 59 "/usr/include/panel.h"

#line 65 "/usr/include/panel.h"

#line 67 "/usr/include/panel.h"

#line 70 "/usr/include/panel.h"

extern  WINDOW*  panel_window (const PANEL *);
extern  void     update_panels (void);
extern  int      hide_panel (PANEL *);
extern  int      show_panel (PANEL *);
extern  int      del_panel (PANEL *);
extern  int      top_panel (PANEL *);
extern  int      bottom_panel (PANEL *);
extern  PANEL*   new_panel (WINDOW *);
extern  PANEL*   panel_above (const PANEL *);
extern  PANEL*   panel_below (const PANEL *);
extern  int      set_panel_userptr (PANEL *, const void *);
extern  const void*  panel_userptr (const PANEL *);
extern  int      move_panel (PANEL *, int, int);
extern  int      replace_panel (PANEL *,WINDOW *);
extern  int      panel_hidden (const PANEL *);

#line 88 "/usr/include/panel.h"
extern  PANEL *  ground_panel(SCREEN *);
extern  PANEL *  ceiling_panel(SCREEN *);

extern  void     update_panels_sp (SCREEN*);
#line 93 "/usr/include/panel.h"

#line 97 "/usr/include/panel.h"

#line 99 "/usr/include/panel.h"

#line 67 "all.nc"
#line 1 "/usr/include/paths.h"






























#line 68 "all.nc"
#line 1 "/usr/include/poll.h"
#line 1 "/usr/include/sys/poll.h"


















#line 21 "/usr/include/sys/poll.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/sys/poll.h"


#line 1 "/usr/include/bits/poll.h"

















#line 21 "/usr/include/bits/poll.h"




#line 28 "/usr/include/bits/poll.h"

#line 30 "/usr/include/bits/poll.h"

#line 36 "/usr/include/bits/poll.h"

#line 38 "/usr/include/bits/poll.h"

#line 43 "/usr/include/bits/poll.h"



#line 26 "/usr/include/sys/poll.h"
#line 1 "/usr/include/bits/types/__sigset_t.h"
#line 28 "/usr/include/sys/poll.h"
#line 1 "/usr/include/bits/types/struct_timespec.h"
#line 29 "/usr/include/sys/poll.h"
#line 30 "/usr/include/sys/poll.h"



typedef unsigned long int nfds_t;


struct pollfd
  {
    int fd;			
    short int events;		
    short int revents;		
  };












extern int poll (struct pollfd *__fds, nfds_t __nfds, int __timeout)
    ;

#line 58 "/usr/include/sys/poll.h"






extern int ppoll (struct pollfd *__fds, nfds_t __nfds,
		  const struct timespec *__timeout,
		  const __sigset_t *__ss)
    ;

#line 81 "/usr/include/sys/poll.h"





#line 89 "/usr/include/sys/poll.h"
#line 2 "/usr/include/poll.h"
#line 69 "all.nc"
#line 1 "/usr/include/printf.h"

















#line 19 "/usr/include/printf.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/printf.h"



#line 1 "/usr/include/bits/types/FILE.h"
#line 26 "/usr/include/printf.h"

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

#line 105 "/usr/lib/clang/21/include/stddef.h"

#line 110 "/usr/lib/clang/21/include/stddef.h"

#line 115 "/usr/lib/clang/21/include/stddef.h"

#line 120 "/usr/lib/clang/21/include/stddef.h"

#line 125 "/usr/lib/clang/21/include/stddef.h"



#line 132 "/usr/lib/clang/21/include/stddef.h"
#line 30 "/usr/include/printf.h"

#line 1 "/usr/lib/clang/21/include/stdarg.h"





















#line 37 "/usr/lib/clang/21/include/stdarg.h"



#line 1 "/usr/lib/clang/21/include/__stdarg_header_macro.h"








#line 44 "/usr/lib/clang/21/include/stdarg.h"
#line 45 "/usr/lib/clang/21/include/stdarg.h"

#line 1 "/usr/lib/clang/21/include/__stdarg___gnuc_va_list.h"








#line 48 "/usr/lib/clang/21/include/stdarg.h"
#line 50 "/usr/lib/clang/21/include/stdarg.h"

#line 1 "/usr/lib/clang/21/include/__stdarg_va_list.h"








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
#line 32 "/usr/include/printf.h"


struct printf_info
{
  int prec;			
  int width;			
  wchar_t spec;			
  unsigned int is_long_double:1;
  unsigned int is_short:1;	
  unsigned int is_long:1;	
  unsigned int alt:1;		
  unsigned int space:1;		
  unsigned int left:1;		
  unsigned int showsign:1;	
  unsigned int group:1;		
  unsigned int extra:1;		
  unsigned int is_char:1;	
  unsigned int wide:1;		
  unsigned int i18n:1;		
  unsigned int is_binary128:1;	

  unsigned int __pad:3;		
  unsigned short int user;	
  wchar_t pad;			
};












typedef int printf_function (FILE *__stream,
			     const struct printf_info *__info,
			     const void *const *__args);









typedef int printf_arginfo_size_function (const struct printf_info *__info,
					  size_t __n, int *__argtypes,
					  int *__size);



typedef int printf_arginfo_function (const struct printf_info *__info,
				     size_t __n, int *__argtypes);



typedef void printf_va_arg_function (void *__mem, va_list *__ap);






extern int register_printf_specifier (int __spec, printf_function __func,
				      printf_arginfo_size_function __arginfo)
  ;






extern int register_printf_function (int __spec, printf_function __func,
				     printf_arginfo_function __arginfo)
   __attribute__ ((__deprecated__));






extern int register_printf_modifier (const wchar_t *__str)  ;





extern int register_printf_type (printf_va_arg_function __fct)  ;













extern size_t parse_printf_format (const char *__restrict __fmt, size_t __n,
				   int *__restrict __argtypes) ;








enum
{				
  PA_INT,			
  PA_CHAR,			
  PA_WCHAR,			
  PA_STRING,			
  PA_WSTRING,			
  PA_POINTER,			
  PA_FLOAT,			
  PA_DOUBLE,			
  PA_LAST
};


#line 167 "/usr/include/printf.h"









extern int printf_size (FILE *__restrict __fp,
			const struct printf_info *__info,
			const void *const *__restrict __args) ;


extern int printf_size_info (const struct printf_info *__restrict
			     __info, size_t __n, int *__restrict __argtypes)
     ;

#line 1 "/usr/include/bits/floatn.h"

















#line 186 "/usr/include/printf.h"
#line 189 "/usr/include/printf.h"


#line 70 "all.nc"
#line 1 "/usr/include/proc_service.h"


















#line 21 "/usr/include/proc_service.h"


#line 1 "/usr/include/sys/procfs.h"



















#line 22 "/usr/include/sys/procfs.h"










#line 1 "/usr/include/features.h"
















#line 33 "/usr/include/sys/procfs.h"
#line 1 "/usr/include/sys/time.h"
















#line 34 "/usr/include/sys/procfs.h"
#line 1 "/usr/include/sys/types.h"




















#line 35 "/usr/include/sys/procfs.h"
#line 1 "/usr/include/sys/user.h"

















#line 20 "/usr/include/sys/user.h"





#line 26 "/usr/include/sys/user.h"

struct user_fpregs_struct
{
  unsigned short int	cwd;
  unsigned short int	swd;
  unsigned short int	ftw;
  unsigned short int	fop;
  unsigned long long int rip;
  unsigned long long int rdp;
  unsigned int		mxcsr;
  unsigned int		mxcr_mask;
  unsigned int		st_space[32];   
  unsigned int		xmm_space[64];  
  unsigned int		padding[24];
};

struct user_regs_struct
{
  unsigned long long int r15;
  unsigned long long int r14;
  unsigned long long int r13;
  unsigned long long int r12;
  unsigned long long int rbp;
  unsigned long long int rbx;
  unsigned long long int r11;
  unsigned long long int r10;
  unsigned long long int r9;
  unsigned long long int r8;
  unsigned long long int rax;
  unsigned long long int rcx;
  unsigned long long int rdx;
  unsigned long long int rsi;
  unsigned long long int rdi;
  unsigned long long int orig_rax;
  unsigned long long int rip;
  unsigned long long int cs;
  unsigned long long int eflags;
  unsigned long long int rsp;
  unsigned long long int ss;
  unsigned long long int fs_base;
  unsigned long long int gs_base;
  unsigned long long int ds;
  unsigned long long int es;
  unsigned long long int fs;
  unsigned long long int gs;
};

struct user
{
  struct user_regs_struct	regs;
  int				u_fpvalid;
  struct user_fpregs_struct	i387;
  unsigned long long int	u_tsize;
  unsigned long long int	u_dsize;
  unsigned long long int	u_ssize;
  unsigned long long int	start_code;
  unsigned long long int	start_stack;
  long long int		signal;
  int				reserved;
  union
    {
      struct user_regs_struct*	u_ar0;
      unsigned long long int	__u_ar0_word;
    };
  union
    {
      struct user_fpregs_struct*	u_fpstate;
      unsigned long long int	__u_fpstate_word;
    };
  unsigned long long int	magic;
  char				u_comm [32];
  unsigned long long int	u_debugreg [8];
};

#line 171 "/usr/include/sys/user.h"

#line 179 "/usr/include/sys/user.h"
#line 36 "/usr/include/sys/procfs.h"




#line 1 "/usr/include/bits/procfs.h"


















#line 22 "/usr/include/bits/procfs.h"


#line 25 "/usr/include/bits/procfs.h"
typedef unsigned long long elf_greg_t;
#line 29 "/usr/include/bits/procfs.h"





#line 35 "/usr/include/bits/procfs.h"
typedef elf_greg_t elf_gregset_t[(sizeof (struct user_regs_struct) / sizeof (elf_greg_t))];

#line 46 "/usr/include/bits/procfs.h"



typedef struct user_fpregs_struct elf_fpregset_t;
#line 41 "/usr/include/sys/procfs.h"



#line 1 "/usr/include/bits/procfs-id.h"



















#line 23 "/usr/include/bits/procfs-id.h"

#line 28 "/usr/include/bits/procfs-id.h"
typedef unsigned int __pr_uid_t;
typedef unsigned int __pr_gid_t;
#line 45 "/usr/include/sys/procfs.h"




struct elf_siginfo
  {
    int si_signo;			
    int si_code;			
    int si_errno;			
  };








struct elf_prstatus
  {
    struct elf_siginfo pr_info;		
    short int pr_cursig;		
    unsigned long int pr_sigpend;	
    unsigned long int pr_sighold;	
    __pid_t pr_pid;
    __pid_t pr_ppid;
    __pid_t pr_pgrp;
    __pid_t pr_sid;
    struct timeval pr_utime;		
    struct timeval pr_stime;		
    struct timeval pr_cutime;		
    struct timeval pr_cstime;		
    elf_gregset_t pr_reg;		
    int pr_fpvalid;			
  };


#line 83 "/usr/include/sys/procfs.h"

struct elf_prpsinfo
  {
    char pr_state;			
    char pr_sname;			
    char pr_zomb;			
    char pr_nice;			
    unsigned long int pr_flag;		
    __pr_uid_t pr_uid;
    __pr_gid_t pr_gid;
    int pr_pid, pr_ppid, pr_pgrp, pr_sid;
    
    char pr_fname[16];			
    char pr_psargs[(80)];	
  };






typedef void *psaddr_t;

#line 1 "/usr/include/bits/procfs-prregset.h"



















#line 23 "/usr/include/bits/procfs-prregset.h"

typedef elf_gregset_t __prgregset_t;
typedef elf_fpregset_t __prfpregset_t;
#line 107 "/usr/include/sys/procfs.h"


typedef __prgregset_t prgregset_t;
typedef __prfpregset_t prfpregset_t;



typedef __pid_t lwpid_t;


typedef struct elf_prstatus prstatus_t;
typedef struct elf_prpsinfo prpsinfo_t;





#line 1 "/usr/include/bits/procfs-extra.h"


















#line 125 "/usr/include/sys/procfs.h"
#line 24 "/usr/include/proc_service.h"




typedef enum
{
  PS_OK,		
  PS_ERR,		
  PS_BADPID,		
  PS_BADLID,		
  PS_BADADDR,		
  PS_NOSYM,		
  PS_NOFREGS		
} ps_err_e;




struct ps_prochandle;



extern ps_err_e ps_pdread (struct ps_prochandle *,
			   psaddr_t, void *, size_t);
extern ps_err_e ps_pdwrite (struct ps_prochandle *,
			    psaddr_t, const void *, size_t);
extern ps_err_e ps_ptread (struct ps_prochandle *,
			   psaddr_t, void *, size_t);
extern ps_err_e ps_ptwrite (struct ps_prochandle *,
			    psaddr_t, const void *, size_t);



extern ps_err_e ps_lgetregs (struct ps_prochandle *,
			     lwpid_t, prgregset_t);
extern ps_err_e ps_lsetregs (struct ps_prochandle *,
			     lwpid_t, const prgregset_t);
extern ps_err_e ps_lgetfpregs (struct ps_prochandle *,
			       lwpid_t, prfpregset_t *);
extern ps_err_e ps_lsetfpregs (struct ps_prochandle *,
			       lwpid_t, const prfpregset_t *);


extern pid_t ps_getpid (struct ps_prochandle *);




extern ps_err_e ps_get_thread_area (struct ps_prochandle *,
				    lwpid_t, int, psaddr_t *);





extern ps_err_e ps_pglobal_lookup (struct ps_prochandle *,
				   const char *object_name,
				   const char *sym_name,
				   psaddr_t *sym_addr);



extern ps_err_e ps_pstop (struct ps_prochandle *);
extern ps_err_e ps_pcontinue (struct ps_prochandle *);


extern ps_err_e ps_lstop (struct ps_prochandle *, lwpid_t);
extern ps_err_e ps_lcontinue (struct ps_prochandle *, lwpid_t);


#line 71 "all.nc"
#line 1 "/usr/include/pthread.h"

















#line 20 "/usr/include/pthread.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/pthread.h"
#line 1 "/usr/include/sched.h"


















#line 21 "/usr/include/sched.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/sched.h"


#line 1 "/usr/include/bits/types.h"





















#line 26 "/usr/include/sched.h"

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
#line 30 "/usr/include/sched.h"

#line 1 "/usr/include/bits/types/time_t.h"
#line 32 "/usr/include/sched.h"
#line 1 "/usr/include/bits/types/struct_timespec.h"
#line 33 "/usr/include/sched.h"
#line 36 "/usr/include/sched.h"

#line 41 "/usr/include/sched.h"


#line 1 "/usr/include/bits/sched.h"



















#line 22 "/usr/include/bits/sched.h"

#line 26 "/usr/include/bits/sched.h"


#line 38 "/usr/include/bits/sched.h"


#line 41 "/usr/include/bits/sched.h"


#line 50 "/usr/include/bits/sched.h"


#line 54 "/usr/include/bits/sched.h"



#line 1 "/usr/include/linux/types.h"

#line 4 "/usr/include/linux/types.h"

#line 1 "/usr/include/asm/types.h"
#line 1 "/usr/include/asm-generic/types.h"

#line 4 "/usr/include/asm-generic/types.h"



#line 1 "/usr/include/asm-generic/int-ll64.h"








#line 11 "/usr/include/asm-generic/int-ll64.h"

#line 1 "/usr/include/asm/bitsperlong.h"

#line 14 "/usr/include/asm/bitsperlong.h"
#line 13 "/usr/include/asm-generic/int-ll64.h"

#line 15 "/usr/include/asm-generic/int-ll64.h"





typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;

#line 30 "/usr/include/asm-generic/int-ll64.h"
typedef __signed__ long long __s64;
typedef unsigned long long __u64;
#line 36 "/usr/include/asm-generic/int-ll64.h"

#line 38 "/usr/include/asm-generic/int-ll64.h"

#line 8 "/usr/include/asm-generic/types.h"
#line 2 "/usr/include/asm/types.h"
#line 6 "/usr/include/linux/types.h"

#line 8 "/usr/include/linux/types.h"

#line 1 "/usr/include/linux/posix_types.h"
#line 10 "/usr/include/linux/types.h"

#line 15 "/usr/include/linux/types.h"







#line 27 "/usr/include/linux/types.h"


#line 30 "/usr/include/linux/types.h"

typedef __u16  __le16;
typedef __u16  __be16;
typedef __u32  __le32;
typedef __u32  __be32;
typedef __u64  __le64;
typedef __u64  __be64;

typedef __u16  __sum16;
typedef __u32  __wsum;










#line 54 "/usr/include/linux/types.h"

typedef unsigned  __poll_t;
#line 67 "/usr/include/bits/sched.h"
#line 69 "/usr/include/bits/sched.h"
struct sched_attr
{
  __u32 size;
  __u32 sched_policy;
  __u64 sched_flags;
  __s32 sched_nice;
  __u32 sched_priority;
  __u64 sched_runtime;
  __u64 sched_deadline;
  __u64 sched_period;
  __u32 sched_util_min;
  __u32 sched_util_max;
  
};
#line 84 "/usr/include/bits/sched.h"


#line 118 "/usr/include/bits/sched.h"



#line 123 "/usr/include/bits/sched.h"

#line 1 "/usr/include/bits/types/struct_sched_param.h"


















#line 21 "/usr/include/bits/types/struct_sched_param.h"


struct sched_param
{
  int sched_priority;
};
#line 125 "/usr/include/bits/sched.h"



#line 129 "/usr/include/bits/sched.h"

extern int clone (int (*__fn) (void *__arg), void *__child_stack,
		  int __flags, void *__arg, ...) ;


extern int unshare (int __flags) ;


extern int sched_getcpu (void) ;


extern int getcpu (unsigned int *, unsigned int *) ;


extern int setns (int __fd, int __nstype) ;


int sched_setattr (pid_t tid, struct sched_attr *attr, unsigned int flags)
   ;



int sched_getattr (pid_t tid, struct sched_attr *attr, unsigned int size,
		   unsigned int flags)
   ;

#line 156 "/usr/include/bits/sched.h"


#line 44 "/usr/include/sched.h"
#line 1 "/usr/include/bits/cpu-set.h"



















#line 22 "/usr/include/bits/cpu-set.h"

#line 26 "/usr/include/bits/cpu-set.h"


#line 30 "/usr/include/bits/cpu-set.h"


typedef unsigned long int __cpu_mask;


#line 37 "/usr/include/bits/cpu-set.h"


typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;


#line 53 "/usr/include/bits/cpu-set.h"

#line 55 "/usr/include/bits/cpu-set.h"

#line 61 "/usr/include/bits/cpu-set.h"

#line 63 "/usr/include/bits/cpu-set.h"

#line 67 "/usr/include/bits/cpu-set.h"



extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
     ;
extern cpu_set_t *__sched_cpualloc (size_t __count)  ;
extern void __sched_cpufree (cpu_set_t *__set) ;


#line 45 "/usr/include/sched.h"


#line 49 "/usr/include/sched.h"





extern int sched_setparam (__pid_t __pid, const struct sched_param *__param)
     ;


extern int sched_getparam (__pid_t __pid, struct sched_param *__param) ;


extern int sched_setscheduler (__pid_t __pid, int __policy,
			       const struct sched_param *__param) ;


extern int sched_getscheduler (__pid_t __pid) ;


extern int sched_yield (void) ;


extern int sched_get_priority_max (int __algorithm) ;


extern int sched_get_priority_min (int __algorithm) ;


#line 78 "/usr/include/sched.h"
extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) ;
#line 88 "/usr/include/sched.h"

#line 90 "/usr/include/sched.h"

#line 97 "/usr/include/sched.h"

#line 103 "/usr/include/sched.h"

#line 106 "/usr/include/sched.h"

#line 113 "/usr/include/sched.h"

#line 117 "/usr/include/sched.h"



extern int sched_setaffinity (__pid_t __pid, size_t __cpusetsize,
			      const cpu_set_t *__cpuset) ;


extern int sched_getaffinity (__pid_t __pid, size_t __cpusetsize,
			      cpu_set_t *__cpuset) ;
#line 127 "/usr/include/sched.h"


#line 23 "/usr/include/pthread.h"
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


#line 24 "/usr/include/pthread.h"

#line 1 "/usr/include/bits/endian.h"

















#line 26 "/usr/include/pthread.h"
#line 1 "/usr/include/bits/pthreadtypes.h"

















#line 27 "/usr/include/pthread.h"
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
#line 28 "/usr/include/pthread.h"
#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 29 "/usr/include/pthread.h"
#line 1 "/usr/include/bits/types/struct_timespec.h"
#line 30 "/usr/include/pthread.h"
#line 1 "/usr/include/bits/types/__sigset_t.h"
#line 31 "/usr/include/pthread.h"
#line 1 "/usr/include/bits/types/struct___jmp_buf_tag.h"


















#line 21 "/usr/include/bits/types/struct___jmp_buf_tag.h"

#line 1 "/usr/include/bits/setjmp.h"

















#line 23 "/usr/include/bits/types/struct___jmp_buf_tag.h"
#line 1 "/usr/include/bits/types/__sigset_t.h"
#line 24 "/usr/include/bits/types/struct___jmp_buf_tag.h"


struct __jmp_buf_tag
  {
    



    __jmp_buf __jmpbuf;		
    int __mask_was_saved;	
    __sigset_t __saved_mask;	
  };
#line 32 "/usr/include/pthread.h"
#line 1 "/usr/include/bits/pthread_stack_min-dynamic.h"

















#line 34 "/usr/include/pthread.h"
#line 35 "/usr/include/pthread.h"


enum
{
  PTHREAD_CREATE_JOINABLE,
#line 41 "/usr/include/pthread.h"
  PTHREAD_CREATE_DETACHED
#line 43 "/usr/include/pthread.h"
};



enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP
#line 54 "/usr/include/pthread.h"
  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL
#line 61 "/usr/include/pthread.h"
  
  , PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP
#line 64 "/usr/include/pthread.h"
};


#line 68 "/usr/include/pthread.h"

enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};
#line 77 "/usr/include/pthread.h"


#line 80 "/usr/include/pthread.h"

enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
#line 88 "/usr/include/pthread.h"


#line 96 "/usr/include/pthread.h"



#line 100 "/usr/include/pthread.h"
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};



#line 115 "/usr/include/pthread.h"



enum
{
  PTHREAD_INHERIT_SCHED,
#line 122 "/usr/include/pthread.h"
  PTHREAD_EXPLICIT_SCHED
#line 124 "/usr/include/pthread.h"
};



enum
{
  PTHREAD_SCOPE_SYSTEM,
#line 132 "/usr/include/pthread.h"
  PTHREAD_SCOPE_PROCESS
#line 134 "/usr/include/pthread.h"
};



enum
{
  PTHREAD_PROCESS_PRIVATE,
#line 142 "/usr/include/pthread.h"
  PTHREAD_PROCESS_SHARED
#line 144 "/usr/include/pthread.h"
};




#line 150 "/usr/include/pthread.h"



struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);             
  void *__arg;                            
  int __canceltype;                       
  struct _pthread_cleanup_buffer *__prev; 
};


enum
{
  PTHREAD_CANCEL_ENABLE,
#line 166 "/usr/include/pthread.h"
  PTHREAD_CANCEL_DISABLE
#line 168 "/usr/include/pthread.h"
};
enum
{
  PTHREAD_CANCEL_DEFERRED,
#line 173 "/usr/include/pthread.h"
  PTHREAD_CANCEL_ASYNCHRONOUS
#line 175 "/usr/include/pthread.h"
};
#line 177 "/usr/include/pthread.h"



#line 181 "/usr/include/pthread.h"


#line 184 "/usr/include/pthread.h"



#line 189 "/usr/include/pthread.h"







extern int pthread_create (pthread_t *__restrict __newthread,
			   const pthread_attr_t *__restrict __attr,
			   void *(*__start_routine) (void *),
			   void *__restrict __arg)  ;





extern void pthread_exit (void *__retval) __attribute__ ((__noreturn__));







extern int pthread_join (pthread_t __th, void **__thread_return);

#line 216 "/usr/include/pthread.h"


extern int pthread_tryjoin_np (pthread_t __th, void **__thread_return) ;

#line 221 "/usr/include/pthread.h"






extern int pthread_timedjoin_np (pthread_t __th, void **__thread_return,
				 const struct timespec *__abstime);








extern int pthread_clockjoin_np (pthread_t __th, void **__thread_return,
                                 clockid_t __clockid,
				 const struct timespec *__abstime);
#line 258 "/usr/include/pthread.h"





extern int pthread_detach (pthread_t __th) ;



extern pthread_t pthread_self (void)  __attribute__ ((__const__));


extern int pthread_equal (pthread_t __thread1, pthread_t __thread2)
   __attribute__ ((__const__));







extern int pthread_attr_init (pthread_attr_t *__attr)  ;


extern int pthread_attr_destroy (pthread_attr_t *__attr)
      ;


extern int pthread_attr_getdetachstate (const pthread_attr_t *__attr,
					int *__detachstate)
      ;


extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
					int __detachstate)
      ;



extern int pthread_attr_getguardsize (const pthread_attr_t *__attr,
				      size_t *__guardsize)
      ;


extern int pthread_attr_setguardsize (pthread_attr_t *__attr,
				      size_t __guardsize)
      ;



extern int pthread_attr_getschedparam (const pthread_attr_t *__restrict __attr,
				       struct sched_param *__restrict __param)
      ;


extern int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,
				       const struct sched_param *__restrict
				       __param)  ;


extern int pthread_attr_getschedpolicy (const pthread_attr_t *__restrict
					__attr, int *__restrict __policy)
      ;


extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
      ;


extern int pthread_attr_getinheritsched (const pthread_attr_t *__restrict
					 __attr, int *__restrict __inherit)
      ;


extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
					 int __inherit)
      ;



extern int pthread_attr_getscope (const pthread_attr_t *__restrict __attr,
				  int *__restrict __scope)
      ;


extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
      ;


extern int pthread_attr_getstackaddr (const pthread_attr_t *__restrict
				      __attr, void **__restrict __stackaddr)
       __attribute__ ((__deprecated__));





extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
				      void *__stackaddr)
       __attribute__ ((__deprecated__));


extern int pthread_attr_getstacksize (const pthread_attr_t *__restrict
				      __attr, size_t *__restrict __stacksize)
      ;




extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
				      size_t __stacksize)
      ;

#line 372 "/usr/include/pthread.h"

extern int pthread_attr_getstack (const pthread_attr_t *__restrict __attr,
				  void **__restrict __stackaddr,
				  size_t *__restrict __stacksize)
      ;




extern int pthread_attr_setstack (pthread_attr_t *__attr, void *__stackaddr,
				  size_t __stacksize)  ;
#line 384 "/usr/include/pthread.h"

#line 386 "/usr/include/pthread.h"


extern int pthread_attr_setaffinity_np (pthread_attr_t *__attr,
					size_t __cpusetsize,
					const cpu_set_t *__cpuset)
      ;



extern int pthread_attr_getaffinity_np (const pthread_attr_t *__attr,
					size_t __cpusetsize,
					cpu_set_t *__cpuset)
      ;


extern int pthread_getattr_default_np (pthread_attr_t *__attr)
      ;


extern int pthread_attr_setsigmask_np (pthread_attr_t *__attr,
				       const __sigset_t *sigmask);




extern int pthread_attr_getsigmask_np (const pthread_attr_t *__attr,
				       __sigset_t *sigmask);



#line 417 "/usr/include/pthread.h"



extern int pthread_setattr_default_np (const pthread_attr_t *__attr)
      ;




extern int pthread_getattr_np (pthread_t __th, pthread_attr_t *__attr)
      ;
#line 429 "/usr/include/pthread.h"






extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
				  const struct sched_param *__param)
      ;


extern int pthread_getschedparam (pthread_t __target_thread,
				  int *__restrict __policy,
				  struct sched_param *__restrict __param)
      ;


extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
     ;


#line 451 "/usr/include/pthread.h"

extern int pthread_getname_np (pthread_t __target_thread, char *__buf,
			       size_t __buflen)
      ;


extern int pthread_setname_np (pthread_t __target_thread, const char *__name)
      ;
#line 460 "/usr/include/pthread.h"


#line 463 "/usr/include/pthread.h"

extern int pthread_getconcurrency (void) ;


extern int pthread_setconcurrency (int __level) ;
#line 469 "/usr/include/pthread.h"

#line 471 "/usr/include/pthread.h"
extern int pthread_yield (void) ;
#line 478 "/usr/include/pthread.h"




extern int pthread_setaffinity_np (pthread_t __th, size_t __cpusetsize,
				   const cpu_set_t *__cpuset)
      ;


extern int pthread_getaffinity_np (pthread_t __th, size_t __cpusetsize,
				   cpu_set_t *__cpuset)
      ;
#line 491 "/usr/include/pthread.h"











extern int pthread_once (pthread_once_t *__once_control,
			 void (*__init_routine) (void)) ;










extern int pthread_setcancelstate (int __state, int *__oldstate);



extern int pthread_setcanceltype (int __type, int *__oldtype);


extern int pthread_cancel (pthread_t __th);




extern void pthread_testcancel (void);




struct __cancel_jmp_buf_tag
{
  __jmp_buf __cancel_jmp_buf;
  int __mask_was_saved;
};

typedef struct
{
  struct __cancel_jmp_buf_tag __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t __attribute__ ((__aligned__));


#line 547 "/usr/include/pthread.h"



struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};

#line 640 "/usr/include/pthread.h"







#line 648 "/usr/include/pthread.h"
extern void __pthread_register_cancel (__pthread_unwind_buf_t *__buf)
     ;



#line 654 "/usr/include/pthread.h"
extern void __pthread_unregister_cancel (__pthread_unwind_buf_t *__buf)
  ;

#line 658 "/usr/include/pthread.h"



#line 662 "/usr/include/pthread.h"
extern void __pthread_register_cancel_defer (__pthread_unwind_buf_t *__buf)
     ;




#line 669 "/usr/include/pthread.h"
extern void __pthread_unregister_cancel_restore (__pthread_unwind_buf_t *__buf)
  ;
#line 672 "/usr/include/pthread.h"


extern void __pthread_unwind_next (__pthread_unwind_buf_t *__buf)
      __attribute__ ((__noreturn__))
#line 677 "/usr/include/pthread.h"
     __attribute__ ((__weak__))
#line 679 "/usr/include/pthread.h"
     ;
#line 681 "/usr/include/pthread.h"








#line 696 "/usr/include/pthread.h"
extern int __sigsetjmp (struct __jmp_buf_tag __env[1],
			int __savemask) ;
#line 699 "/usr/include/pthread.h"





extern int pthread_mutex_init (pthread_mutex_t *__mutex,
			       const pthread_mutexattr_t *__mutexattr)
      ;


extern int pthread_mutex_destroy (pthread_mutex_t *__mutex)
      ;


extern int pthread_mutex_trylock (pthread_mutex_t *__mutex)
      ;


extern int pthread_mutex_lock (pthread_mutex_t *__mutex)
      ;

#line 721 "/usr/include/pthread.h"

#line 723 "/usr/include/pthread.h"
extern int pthread_mutex_timedlock (pthread_mutex_t *__restrict __mutex,
				    const struct timespec *__restrict
				    __abstime)  ;
#line 737 "/usr/include/pthread.h"

#line 740 "/usr/include/pthread.h"
extern int pthread_mutex_clocklock (pthread_mutex_t *__restrict __mutex,
				    clockid_t __clockid,
				    const struct timespec *__restrict
				    __abstime)  ;
#line 756 "/usr/include/pthread.h"


extern int pthread_mutex_unlock (pthread_mutex_t *__mutex)
      ;



extern int pthread_mutex_getprioceiling (const pthread_mutex_t *
					 __restrict __mutex,
					 int *__restrict __prioceiling)
      ;



extern int pthread_mutex_setprioceiling (pthread_mutex_t *__restrict __mutex,
					 int __prioceiling,
					 int *__restrict __old_ceiling)
      ;


#line 777 "/usr/include/pthread.h"

extern int pthread_mutex_consistent (pthread_mutex_t *__mutex)
      ;
#line 790 "/usr/include/pthread.h"






extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr)
      ;


extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
      ;


extern int pthread_mutexattr_getpshared (const pthread_mutexattr_t *
					 __restrict __attr,
					 int *__restrict __pshared)
      ;


extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
					 int __pshared)
      ;

#line 815 "/usr/include/pthread.h"

extern int pthread_mutexattr_gettype (const pthread_mutexattr_t *__restrict
				      __attr, int *__restrict __kind)
      ;




extern int pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
      ;
#line 826 "/usr/include/pthread.h"


extern int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *
					  __restrict __attr,
					  int *__restrict __protocol)
      ;



extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
					  int __protocol)
      ;


extern int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *
					     __restrict __attr,
					     int *__restrict __prioceiling)
      ;


extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,
					     int __prioceiling)
      ;

#line 851 "/usr/include/pthread.h"

extern int pthread_mutexattr_getrobust (const pthread_mutexattr_t *__attr,
					int *__robustness)
      ;
#line 865 "/usr/include/pthread.h"


extern int pthread_mutexattr_setrobust (pthread_mutexattr_t *__attr,
					int __robustness)
      ;
#line 881 "/usr/include/pthread.h"

#line 883 "/usr/include/pthread.h"




extern int pthread_rwlock_init (pthread_rwlock_t *__restrict __rwlock,
				const pthread_rwlockattr_t *__restrict
				__attr)  ;


extern int pthread_rwlock_destroy (pthread_rwlock_t *__rwlock)
      ;


extern int pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock)
      ;


extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
   ;

#line 904 "/usr/include/pthread.h"

#line 906 "/usr/include/pthread.h"
extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *__restrict __rwlock,
				       const struct timespec *__restrict
				       __abstime)  ;
#line 921 "/usr/include/pthread.h"

#line 924 "/usr/include/pthread.h"
extern int pthread_rwlock_clockrdlock (pthread_rwlock_t *__restrict __rwlock,
				       clockid_t __clockid,
				       const struct timespec *__restrict
				       __abstime)  ;
#line 941 "/usr/include/pthread.h"


extern int pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock)
      ;


extern int pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
      ;

#line 951 "/usr/include/pthread.h"

#line 953 "/usr/include/pthread.h"
extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *__restrict __rwlock,
				       const struct timespec *__restrict
				       __abstime)  ;
#line 968 "/usr/include/pthread.h"

#line 971 "/usr/include/pthread.h"
extern int pthread_rwlock_clockwrlock (pthread_rwlock_t *__restrict __rwlock,
				       clockid_t __clockid,
				       const struct timespec *__restrict
				       __abstime)  ;

#line 989 "/usr/include/pthread.h"


extern int pthread_rwlock_unlock (pthread_rwlock_t *__rwlock)
      ;





extern int pthread_rwlockattr_init (pthread_rwlockattr_t *__attr)
      ;


extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t *__attr)
      ;


extern int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *
					  __restrict __attr,
					  int *__restrict __pshared)
      ;


extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *__attr,
					  int __pshared)
      ;


extern int pthread_rwlockattr_getkind_np (const pthread_rwlockattr_t *
					  __restrict __attr,
					  int *__restrict __pref)
      ;


extern int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t *__attr,
					  int __pref)  ;
#line 1026 "/usr/include/pthread.h"






extern int pthread_cond_init (pthread_cond_t *__restrict __cond,
			      const pthread_condattr_t *__restrict __cond_attr)
      ;


extern int pthread_cond_destroy (pthread_cond_t *__cond)
      ;


extern int pthread_cond_signal (pthread_cond_t *__cond)
      ;


extern int pthread_cond_broadcast (pthread_cond_t *__cond)
      ;






extern int pthread_cond_wait (pthread_cond_t *__restrict __cond,
			      pthread_mutex_t *__restrict __mutex)
     ;








#line 1065 "/usr/include/pthread.h"
extern int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,
				   pthread_mutex_t *__restrict __mutex,
				   const struct timespec *__restrict __abstime)
     ;
#line 1081 "/usr/include/pthread.h"

#line 1083 "/usr/include/pthread.h"







#line 1091 "/usr/include/pthread.h"
extern int pthread_cond_clockwait (pthread_cond_t *__restrict __cond,
				   pthread_mutex_t *__restrict __mutex,
				   __clockid_t __clock_id,
				   const struct timespec *__restrict __abstime)
     ;
#line 1110 "/usr/include/pthread.h"




extern int pthread_condattr_init (pthread_condattr_t *__attr)
      ;


extern int pthread_condattr_destroy (pthread_condattr_t *__attr)
      ;


extern int pthread_condattr_getpshared (const pthread_condattr_t *
					__restrict __attr,
					int *__restrict __pshared)
      ;


extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
					int __pshared)  ;

#line 1132 "/usr/include/pthread.h"

extern int pthread_condattr_getclock (const pthread_condattr_t *
				      __restrict __attr,
				      __clockid_t *__restrict __clock_id)
      ;


extern int pthread_condattr_setclock (pthread_condattr_t *__attr,
				      __clockid_t __clock_id)
      ;
#line 1143 "/usr/include/pthread.h"


#line 1146 "/usr/include/pthread.h"




extern int pthread_spin_init (pthread_spinlock_t *__lock, int __pshared)
      ;


extern int pthread_spin_destroy (pthread_spinlock_t *__lock)
      ;


extern int pthread_spin_lock (pthread_spinlock_t *__lock)
      ;


extern int pthread_spin_trylock (pthread_spinlock_t *__lock)
      ;


extern int pthread_spin_unlock (pthread_spinlock_t *__lock)
      ;






extern int pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
				 const pthread_barrierattr_t *__restrict
				 __attr, unsigned int __count)
      ;


extern int pthread_barrier_destroy (pthread_barrier_t *__barrier)
      ;


extern int pthread_barrier_wait (pthread_barrier_t *__barrier)
      ;



extern int pthread_barrierattr_init (pthread_barrierattr_t *__attr)
      ;


extern int pthread_barrierattr_destroy (pthread_barrierattr_t *__attr)
      ;


extern int pthread_barrierattr_getpshared (const pthread_barrierattr_t *
					   __restrict __attr,
					   int *__restrict __pshared)
      ;


extern int pthread_barrierattr_setpshared (pthread_barrierattr_t *__attr,
					   int __pshared)
      ;
#line 1207 "/usr/include/pthread.h"










extern int pthread_key_create (pthread_key_t *__key,
			       void (*__destr_function) (void *))
      ;


extern int pthread_key_delete (pthread_key_t __key) ;


extern void *pthread_getspecific (pthread_key_t __key) ;


extern int pthread_setspecific (pthread_key_t __key,
				const void *__pointer)
   ;


#line 1234 "/usr/include/pthread.h"

extern int pthread_getcpuclockid (pthread_t __thread_id,
				  __clockid_t *__clock_id)
      ;
#line 1239 "/usr/include/pthread.h"

#line 1241 "/usr/include/pthread.h"

extern pid_t pthread_gettid_np (pthread_t __thread_id);
#line 1244 "/usr/include/pthread.h"













extern int pthread_atfork (void (*__prepare) (void),
			   void (*__parent) (void),
			   void (*__child) (void)) ;


#line 1270 "/usr/include/pthread.h"


#line 72 "all.nc"
#line 1 "/usr/include/pty.h"


















#line 21 "/usr/include/pty.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/pty.h"

struct termios;
struct winsize;

#line 1 "/usr/include/termios.h"





















#line 24 "/usr/include/termios.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/termios.h"
#line 27 "/usr/include/termios.h"

#line 1 "/usr/include/bits/types.h"





















#line 29 "/usr/include/termios.h"
#line 34 "/usr/include/termios.h"





#line 1 "/usr/include/bits/termios.h"


















#line 22 "/usr/include/bits/termios.h"

typedef unsigned char	cc_t;
typedef unsigned int	speed_t;
typedef unsigned int	tcflag_t;

#line 1 "/usr/include/bits/termios-struct.h"


















#line 22 "/usr/include/bits/termios-struct.h"

#line 24 "/usr/include/bits/termios-struct.h"
struct termios
  {
    tcflag_t c_iflag;		
    tcflag_t c_oflag;		
    tcflag_t c_cflag;		
    tcflag_t c_lflag;		
    cc_t c_line;			
    cc_t c_cc[32];		
    
    union {
      speed_t __ispeed;
      speed_t c_ispeed;
    };
#line 38 "/usr/include/bits/termios-struct.h"
    union {
      speed_t __ospeed;
      speed_t c_ospeed;
    };
#line 43 "/usr/include/bits/termios-struct.h"
  };
#line 29 "/usr/include/bits/termios.h"
#line 30 "/usr/include/bits/termios.h"

#line 1 "/usr/include/bits/termios-c_cc.h"


















#line 22 "/usr/include/bits/termios-c_cc.h"

#line 32 "/usr/include/bits/termios.h"
#line 1 "/usr/include/bits/termios-c_iflag.h"


















#line 22 "/usr/include/bits/termios-c_iflag.h"

#line 33 "/usr/include/bits/termios.h"
#line 1 "/usr/include/bits/termios-c_oflag.h"


















#line 22 "/usr/include/bits/termios-c_oflag.h"


#line 54 "/usr/include/bits/termios-c_oflag.h"

#line 58 "/usr/include/bits/termios-c_oflag.h"
#line 34 "/usr/include/bits/termios.h"


#line 1 "/usr/include/bits/termios-c_cflag.h"


















#line 22 "/usr/include/bits/termios-c_cflag.h"


#line 35 "/usr/include/bits/termios-c_cflag.h"
#line 37 "/usr/include/bits/termios.h"

#line 1 "/usr/include/bits/termios-cbaud.h"


















#line 22 "/usr/include/bits/termios-cbaud.h"

#line 30 "/usr/include/bits/termios-cbaud.h"

#line 56 "/usr/include/bits/termios.h"

#line 61 "/usr/include/bits/termios.h"

#line 1 "/usr/include/bits/termios-c_lflag.h"


















#line 22 "/usr/include/bits/termios-c_lflag.h"

#line 63 "/usr/include/bits/termios.h"

#line 65 "/usr/include/bits/termios.h"

#line 68 "/usr/include/bits/termios.h"


#line 74 "/usr/include/bits/termios.h"


#line 79 "/usr/include/bits/termios.h"

#line 1 "/usr/include/bits/termios-tcflow.h"


















#line 22 "/usr/include/bits/termios-tcflow.h"

#line 81 "/usr/include/bits/termios.h"

#line 1 "/usr/include/bits/termios-misc.h"

















#line 83 "/usr/include/bits/termios.h"

#line 1 "/usr/include/bits/termios-baud.h"


















#line 22 "/usr/include/bits/termios-baud.h"


#line 44 "/usr/include/bits/termios-baud.h"


#line 71 "/usr/include/bits/termios-baud.h"
#line 85 "/usr/include/bits/termios.h"
#line 40 "/usr/include/termios.h"

#line 42 "/usr/include/termios.h"


#line 46 "/usr/include/termios.h"


extern speed_t cfgetospeed (const struct termios *__termios_p) ;


extern speed_t cfgetispeed (const struct termios *__termios_p) ;


extern int cfsetospeed (struct termios *__termios_p, speed_t __speed) ;


extern int cfsetispeed (struct termios *__termios_p, speed_t __speed) ;

#line 60 "/usr/include/termios.h"

extern int cfsetspeed (struct termios *__termios_p, speed_t __speed) ;
#line 63 "/usr/include/termios.h"

#line 65 "/usr/include/termios.h"

typedef speed_t baud_t;
#line 68 "/usr/include/termios.h"


extern baud_t cfgetobaud (const struct termios *__termios_p) ;


extern baud_t cfgetibaud (const struct termios *__termios_p) ;


extern int cfsetobaud (struct termios *__termios_p, baud_t __baud) ;


extern int cfsetibaud (struct termios *__termios_p, baud_t __baud) ;


extern int cfsetbaud (struct termios *__termios_p, baud_t __baud) ;
#line 84 "/usr/include/termios.h"


extern int tcgetattr (int __fd, struct termios *__termios_p) ;



extern int tcsetattr (int __fd, int __optional_actions,
		      const struct termios *__termios_p) ;


#line 95 "/usr/include/termios.h"

extern void cfmakeraw (struct termios *__termios_p) ;
#line 98 "/usr/include/termios.h"


extern int tcsendbreak (int __fd, int __duration) ;





extern int tcdrain (int __fd);



extern int tcflush (int __fd, int __queue_selector) ;



extern int tcflow (int __fd, int __action) ;


#line 118 "/usr/include/termios.h"

extern __pid_t tcgetsid (int __fd) ;
#line 121 "/usr/include/termios.h"


#line 1 "/usr/include/sys/ttydefaults.h"







































#line 42 "/usr/include/sys/ttydefaults.h"




#line 51 "/usr/include/sys/ttydefaults.h"




#line 82 "/usr/include/sys/ttydefaults.h"

#line 86 "/usr/include/sys/ttydefaults.h"


#line 89 "/usr/include/sys/ttydefaults.h"



#line 125 "/usr/include/termios.h"
#line 126 "/usr/include/termios.h"


#line 28 "/usr/include/pty.h"
#line 1 "/usr/include/sys/ioctl.h"

















#line 20 "/usr/include/sys/ioctl.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/sys/ioctl.h"




#line 1 "/usr/include/bits/ioctls.h"

















#line 21 "/usr/include/bits/ioctls.h"


#line 1 "/usr/include/asm/ioctls.h"
#line 1 "/usr/include/asm-generic/ioctls.h"

#line 4 "/usr/include/asm-generic/ioctls.h"

#line 1 "/usr/include/linux/ioctl.h"

#line 4 "/usr/include/linux/ioctl.h"

#line 1 "/usr/include/asm/ioctl.h"
#line 1 "/usr/include/asm-generic/ioctl.h"

#line 4 "/usr/include/asm-generic/ioctl.h"



















#line 25 "/usr/include/asm-generic/ioctl.h"






#line 34 "/usr/include/asm-generic/ioctl.h"

#line 38 "/usr/include/asm-generic/ioctl.h"

#line 43 "/usr/include/asm-generic/ioctl.h"

#line 48 "/usr/include/asm-generic/ioctl.h"









#line 60 "/usr/include/asm-generic/ioctl.h"

#line 64 "/usr/include/asm-generic/ioctl.h"

#line 68 "/usr/include/asm-generic/ioctl.h"

#line 70 "/usr/include/asm-generic/ioctl.h"

#line 72 "/usr/include/asm-generic/ioctl.h"







#line 86 "/usr/include/asm-generic/ioctl.h"


#line 92 "/usr/include/asm-generic/ioctl.h"



#line 100 "/usr/include/asm-generic/ioctl.h"
#line 2 "/usr/include/asm/ioctl.h"
#line 6 "/usr/include/linux/ioctl.h"

#line 8 "/usr/include/linux/ioctl.h"
#line 6 "/usr/include/asm-generic/ioctls.h"














#line 84 "/usr/include/asm-generic/ioctls.h"

#line 97 "/usr/include/asm-generic/ioctls.h"

#line 100 "/usr/include/asm-generic/ioctls.h"





#line 108 "/usr/include/asm-generic/ioctls.h"


#line 118 "/usr/include/asm-generic/ioctls.h"

#line 120 "/usr/include/asm-generic/ioctls.h"
#line 2 "/usr/include/asm/ioctls.h"
#line 24 "/usr/include/bits/ioctls.h"

#line 1 "/usr/include/linux/sockios.h"


















#line 21 "/usr/include/linux/sockios.h"

#line 1 "/usr/include/asm/bitsperlong.h"

#line 14 "/usr/include/asm/bitsperlong.h"
#line 23 "/usr/include/linux/sockios.h"
#line 1 "/usr/include/asm/sockios.h"
#line 1 "/usr/include/asm-generic/sockios.h"
#line 2 "/usr/include/asm/sockios.h"
#line 24 "/usr/include/linux/sockios.h"


#line 28 "/usr/include/linux/sockios.h"

#line 30 "/usr/include/linux/sockios.h"






#line 37 "/usr/include/linux/sockios.h"

#line 39 "/usr/include/linux/sockios.h"

#line 41 "/usr/include/linux/sockios.h"

#line 48 "/usr/include/linux/sockios.h"


#line 53 "/usr/include/linux/sockios.h"


#line 90 "/usr/include/linux/sockios.h"

#line 93 "/usr/include/linux/sockios.h"

#line 96 "/usr/include/linux/sockios.h"




#line 101 "/usr/include/linux/sockios.h"

#line 105 "/usr/include/linux/sockios.h"

#line 107 "/usr/include/linux/sockios.h"

#line 110 "/usr/include/linux/sockios.h"


		    
#line 116 "/usr/include/linux/sockios.h"


#line 121 "/usr/include/linux/sockios.h"



#line 126 "/usr/include/linux/sockios.h"



#line 131 "/usr/include/linux/sockios.h"

#line 134 "/usr/include/linux/sockios.h"



#line 143 "/usr/include/linux/sockios.h"
			

#line 149 "/usr/include/linux/sockios.h"


#line 153 "/usr/include/linux/sockios.h"











 
#line 166 "/usr/include/linux/sockios.h"




 
#line 26 "/usr/include/bits/ioctls.h"
#line 27 "/usr/include/sys/ioctl.h"


#line 1 "/usr/include/bits/ioctl-types.h"


















#line 22 "/usr/include/bits/ioctl-types.h"


#line 1 "/usr/include/asm/ioctls.h"
#line 1 "/usr/include/asm-generic/ioctls.h"
#line 2 "/usr/include/asm/ioctls.h"
#line 25 "/usr/include/bits/ioctl-types.h"


struct winsize
  {
    unsigned short int ws_row;
    unsigned short int ws_col;
    unsigned short int ws_xpixel;
    unsigned short int ws_ypixel;
  };


#line 47 "/usr/include/bits/ioctl-types.h"



#line 30 "/usr/include/sys/ioctl.h"






#line 1 "/usr/include/sys/ttydefaults.h"







































#line 89 "/usr/include/sys/ttydefaults.h"



#line 37 "/usr/include/sys/ioctl.h"




#line 42 "/usr/include/sys/ioctl.h"
extern int ioctl (int __fd, unsigned long int __request, ...) ;
#line 52 "/usr/include/sys/ioctl.h"


#line 29 "/usr/include/pty.h"







extern int openpty (int *__amaster, int *__aslave, char *__name,
		    const struct termios *__termp,
		    const struct winsize *__winp) ;



extern int forkpty (int *__amaster, char *__name,
		    const struct termios *__termp,
		    const struct winsize *__winp) ;


#line 73 "all.nc"
#line 1 "/usr/include/pwd.h"





















#line 24 "/usr/include/pwd.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/pwd.h"



#line 1 "/usr/include/bits/types.h"





















#line 30 "/usr/include/pwd.h"

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
#line 33 "/usr/include/pwd.h"

#line 35 "/usr/include/pwd.h"


#line 41 "/usr/include/pwd.h"

#line 47 "/usr/include/pwd.h"


struct passwd
{
  char *pw_name;		
  char *pw_passwd;		

  __uid_t pw_uid;		
  __gid_t pw_gid;		
  char *pw_gecos;		
  char *pw_dir;			
  char *pw_shell;		
};


#line 1 "/usr/include/bits/types/FILE.h"
#line 64 "/usr/include/pwd.h"
#line 65 "/usr/include/pwd.h"


#line 68 "/usr/include/pwd.h"




extern void setpwent (void);





extern void endpwent (void);





extern struct passwd *getpwent (void);
#line 86 "/usr/include/pwd.h"

#line 88 "/usr/include/pwd.h"






extern struct passwd *fgetpwent (FILE *__stream) ;







extern int putpwent (const struct passwd *__restrict __p,
		     FILE *__restrict __f);
#line 105 "/usr/include/pwd.h"





extern struct passwd *getpwuid (__uid_t __uid);





extern struct passwd *getpwnam (const char *__name) ;

#line 119 "/usr/include/pwd.h"

#line 121 "/usr/include/pwd.h"


#line 125 "/usr/include/pwd.h"









#line 135 "/usr/include/pwd.h"




extern int getpwent_r (struct passwd *__restrict __resultbuf,
		       char *__restrict __buffer, size_t __buflen,
		       struct passwd **__restrict __result)
    
    ;
#line 145 "/usr/include/pwd.h"

extern int getpwuid_r (__uid_t __uid,
		       struct passwd *__restrict __resultbuf,
		       char *__restrict __buffer, size_t __buflen,
		       struct passwd **__restrict __result)
    
    ;

extern int getpwnam_r (const char *__restrict __name,
		       struct passwd *__restrict __resultbuf,
		       char *__restrict __buffer, size_t __buflen,
		       struct passwd **__restrict __result)
    
    ;


#line 162 "/usr/include/pwd.h"







extern int fgetpwent_r (FILE *__restrict __stream,
			struct passwd *__restrict __resultbuf,
			char *__restrict __buffer, size_t __buflen,
			struct passwd **__restrict __result)
    
    ;
#line 176 "/usr/include/pwd.h"

#line 178 "/usr/include/pwd.h"

#line 180 "/usr/include/pwd.h"








extern int getpw (__uid_t __uid, char *__buffer);
#line 190 "/usr/include/pwd.h"


#line 74 "all.nc"
#line 1 "/usr/include/re_comp.h"

















#line 20 "/usr/include/re_comp.h"



#line 1 "/usr/include/regex.h"



















#line 22 "/usr/include/regex.h"

#line 1 "/usr/include/sys/types.h"




















#line 24 "/usr/include/regex.h"


#line 29 "/usr/include/regex.h"



#line 35 "/usr/include/regex.h"

#line 52 "/usr/include/regex.h"



typedef unsigned int __re_size_t;
typedef unsigned long int __re_long_size_t;

#line 59 "/usr/include/regex.h"





typedef long int s_reg_t;
typedef unsigned long int active_reg_t;






typedef unsigned long int reg_syntax_t;

#line 75 "/usr/include/regex.h"


#line 78 "/usr/include/regex.h"




#line 83 "/usr/include/regex.h"





#line 89 "/usr/include/regex.h"













#line 103 "/usr/include/regex.h"







#line 111 "/usr/include/regex.h"



#line 115 "/usr/include/regex.h"



#line 119 "/usr/include/regex.h"



#line 123 "/usr/include/regex.h"



#line 127 "/usr/include/regex.h"




#line 132 "/usr/include/regex.h"



#line 136 "/usr/include/regex.h"



#line 140 "/usr/include/regex.h"




#line 145 "/usr/include/regex.h"



#line 149 "/usr/include/regex.h"



#line 153 "/usr/include/regex.h"



#line 157 "/usr/include/regex.h"





#line 163 "/usr/include/regex.h"



#line 167 "/usr/include/regex.h"



#line 171 "/usr/include/regex.h"



#line 175 "/usr/include/regex.h"







#line 183 "/usr/include/regex.h"




#line 188 "/usr/include/regex.h"



#line 192 "/usr/include/regex.h"




#line 197 "/usr/include/regex.h"



#line 201 "/usr/include/regex.h"



#line 206 "/usr/include/regex.h"





extern reg_syntax_t re_syntax_options;

#line 214 "/usr/include/regex.h"




#line 219 "/usr/include/regex.h"

#line 221 "/usr/include/regex.h"

#line 223 "/usr/include/regex.h"

#line 225 "/usr/include/regex.h"

#line 227 "/usr/include/regex.h"

#line 229 "/usr/include/regex.h"


#line 232 "/usr/include/regex.h"


#line 235 "/usr/include/regex.h"

#line 237 "/usr/include/regex.h"


#line 240 "/usr/include/regex.h"

#line 242 "/usr/include/regex.h"




#line 247 "/usr/include/regex.h"

#line 249 "/usr/include/regex.h"



#line 253 "/usr/include/regex.h"





#line 264 "/usr/include/regex.h"








#line 274 "/usr/include/regex.h"






#line 281 "/usr/include/regex.h"



#line 285 "/usr/include/regex.h"




#line 290 "/usr/include/regex.h"



#line 294 "/usr/include/regex.h"









#line 304 "/usr/include/regex.h"


#line 307 "/usr/include/regex.h"



#line 311 "/usr/include/regex.h"





typedef enum
{
  _REG_ENOSYS = -1,	
  _REG_NOERROR = 0,	
  _REG_NOMATCH,		

  

  _REG_BADPAT,		
  _REG_ECOLLATE,	
  _REG_ECTYPE,		
  _REG_EESCAPE,		
  _REG_ESUBREG,		
  _REG_EBRACK,		
  _REG_EPAREN,		
  _REG_EBRACE,		
  _REG_BADBR,		
  _REG_ERANGE,		
  _REG_ESPACE,		
  _REG_BADRPT,		

  
  _REG_EEND,		
  _REG_ESIZE,		
  _REG_ERPAREN		
} reg_errcode_t;

#line 363 "/usr/include/regex.h"







#line 376 "/usr/include/regex.h"

#line 382 "/usr/include/regex.h"

struct re_pattern_buffer
{
  

  struct re_dfa_t *buffer;

  
  __re_long_size_t allocated;

  
  __re_long_size_t used;

  
  reg_syntax_t syntax;

  


  char *fastmap;

  



  unsigned char * translate;

  
  size_t re_nsub;

  



  unsigned can_be_null : 1;

  



#line 427 "/usr/include/regex.h"
  unsigned regs_allocated : 2;

  

  unsigned fastmap_accurate : 1;

  

  unsigned no_sub : 1;

  

  unsigned not_bol : 1;

  
  unsigned not_eol : 1;

  
  unsigned newline_anchor : 1;
};

typedef struct re_pattern_buffer regex_t;


#line 458 "/usr/include/regex.h"


typedef int regoff_t;
#line 462 "/usr/include/regex.h"


#line 465 "/usr/include/regex.h"


struct re_registers
{
  __re_size_t num_regs;
  regoff_t *start;
  regoff_t *end;
};





#line 482 "/usr/include/regex.h"





typedef struct
{
  regoff_t rm_so;  
  regoff_t rm_eo;  
} regmatch_t;



#line 502 "/usr/include/regex.h"

#line 507 "/usr/include/regex.h"

#line 517 "/usr/include/regex.h"

#line 519 "/usr/include/regex.h"


extern reg_syntax_t re_set_syntax (reg_syntax_t __syntax);









extern const char *re_compile_pattern (const char *__pattern, size_t __length,
				       struct re_pattern_buffer *__buffer)
    ;





extern int re_compile_fastmap (struct re_pattern_buffer *__buffer);







extern regoff_t re_search (struct re_pattern_buffer *__buffer,
			   const char *__String, regoff_t __length,
			   regoff_t __start, regoff_t __range,
			   struct re_registers *__regs)
    ;




extern regoff_t re_search_2 (struct re_pattern_buffer *__buffer,
			     const char *__string1, regoff_t __length1,
			     const char *__string2, regoff_t __length2,
			     regoff_t __start, regoff_t __range,
			     struct re_registers *__regs,
			     regoff_t __stop)
    
    ;




extern regoff_t re_match (struct re_pattern_buffer *__buffer,
			  const char *__String, regoff_t __length,
			  regoff_t __start, struct re_registers *__regs)
    ;



extern regoff_t re_match_2 (struct re_pattern_buffer *__buffer,
			    const char *__string1, regoff_t __length1,
			    const char *__string2, regoff_t __length2,
			    regoff_t __start, struct re_registers *__regs,
			    regoff_t __stop)
    
    ;














extern void re_set_registers (struct re_pattern_buffer *__buffer,
			      struct re_registers *__regs,
			      __re_size_t __num_regs,
			      regoff_t *__starts, regoff_t *__ends);
#line 601 "/usr/include/regex.h"

#line 607 "/usr/include/regex.h"







#line 625 "/usr/include/regex.h"





#line 641 "/usr/include/regex.h"


extern int regcomp (regex_t *__restrict __preg,
		    const char *__restrict __pattern,
		    int __cflags);

extern int regexec (const regex_t *__restrict __preg,
		    const char *__restrict __String, size_t __nmatch,
		    regmatch_t __pmatch[__restrict
					],
		    int __eflags);

extern size_t regerror (int __errcode, const regex_t *__restrict __preg,
			char *__restrict __errbuf, size_t __errbuf_size)
    ;

extern void regfree (regex_t *__preg);

#line 662 "/usr/include/regex.h"

#line 666 "/usr/include/regex.h"
#line 24 "/usr/include/re_comp.h"
#line 75 "all.nc"
#line 1 "/usr/include/regex.h"


















#line 76 "all.nc"
//#include <regexp.h>
#line 1 "/usr/include/resolv.h"



















































#line 54 "/usr/include/resolv.h"

#line 1 "/usr/include/sys/cdefs.h"

















#line 56 "/usr/include/resolv.h"
#line 1 "/usr/include/sys/param.h"


















#line 21 "/usr/include/sys/param.h"

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
#line 24 "/usr/include/sys/param.h"

#line 1 "/usr/include/sys/types.h"




















#line 26 "/usr/include/sys/param.h"
#line 1 "/usr/include/limits.h"





















#line 116 "/usr/include/limits.h"

 




#line 126 "/usr/include/limits.h"




#line 141 "/usr/include/limits.h"




#line 180 "/usr/include/limits.h"




#line 192 "/usr/include/limits.h"

#line 194 "/usr/include/limits.h"

#line 1 "/usr/include/bits/posix1_lim.h"






















#line 196 "/usr/include/limits.h"
#line 197 "/usr/include/limits.h"

#line 1 "/usr/include/bits/posix2_lim.h"




















#line 200 "/usr/include/limits.h"
#line 201 "/usr/include/limits.h"

#line 1 "/usr/include/bits/xopen_lim.h"



























#line 204 "/usr/include/limits.h"
#line 27 "/usr/include/sys/param.h"
#line 1 "/usr/include/endian.h"
















#line 28 "/usr/include/sys/param.h"
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
#line 36 "/usr/include/signal.h"
#line 37 "/usr/include/signal.h"

#line 50 "/usr/include/signal.h"

#line 52 "/usr/include/signal.h"

#line 1 "/usr/include/bits/types/struct_timespec.h"
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
#line 67 "/usr/include/signal.h"
#line 1 "/usr/include/bits/sigevent-consts.h"

















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


#line 235 "/usr/include/unistd.h"

#line 240 "/usr/include/unistd.h"

#line 253 "/usr/include/unistd.h"

#line 258 "/usr/include/unistd.h"

#line 264 "/usr/include/unistd.h"

#line 271 "/usr/include/unistd.h"

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


#line 29 "/usr/include/sys/param.h"


#line 1 "/usr/include/bits/param.h"


















#line 22 "/usr/include/bits/param.h"

#line 26 "/usr/include/bits/param.h"

#line 1 "/usr/include/linux/limits.h"
#line 28 "/usr/include/bits/param.h"
#line 1 "/usr/include/linux/param.h"

#line 4 "/usr/include/linux/param.h"

#line 1 "/usr/include/asm/param.h"
#line 1 "/usr/include/asm-generic/param.h"

#line 4 "/usr/include/asm-generic/param.h"

#line 8 "/usr/include/asm-generic/param.h"

#line 12 "/usr/include/asm-generic/param.h"

#line 16 "/usr/include/asm-generic/param.h"

#line 20 "/usr/include/asm-generic/param.h"

#line 22 "/usr/include/asm-generic/param.h"

#line 2 "/usr/include/asm/param.h"
#line 6 "/usr/include/linux/param.h"
#line 29 "/usr/include/bits/param.h"


#line 35 "/usr/include/bits/param.h"

#line 37 "/usr/include/bits/param.h"



#line 32 "/usr/include/sys/param.h"




#line 37 "/usr/include/sys/param.h"

#line 65 "/usr/include/sys/param.h"



#line 74 "/usr/include/sys/param.h"



#line 80 "/usr/include/sys/param.h"



#line 87 "/usr/include/sys/param.h"


#line 98 "/usr/include/sys/param.h"


#line 102 "/usr/include/sys/param.h"

#line 57 "/usr/include/resolv.h"
#line 1 "/usr/include/sys/types.h"




















#line 58 "/usr/include/resolv.h"
#line 1 "/usr/include/stdio.h"






















#line 59 "/usr/include/resolv.h"
#line 1 "/usr/include/netinet/in.h"
















#line 60 "/usr/include/resolv.h"
#line 1 "/usr/include/arpa/nameser.h"















































#line 50 "/usr/include/arpa/nameser.h"

#line 1 "/usr/include/sys/param.h"

















#line 52 "/usr/include/arpa/nameser.h"
#line 1 "/usr/include/sys/types.h"




















#line 53 "/usr/include/arpa/nameser.h"
#line 1 "/usr/include/stdint.h"




















#line 54 "/usr/include/arpa/nameser.h"

#line 60 "/usr/include/arpa/nameser.h"




#line 79 "/usr/include/arpa/nameser.h"




typedef enum __ns_sect {
	ns_s_qd = 0,		
	ns_s_zn = 0,		
	ns_s_an = 1,		
	ns_s_pr = 1,		
	ns_s_ns = 2,		
	ns_s_ud = 2,		
	ns_s_ar = 3,		
	ns_s_max = 4
} ns_sect;






typedef struct __ns_msg {
	const unsigned char	*_msg, *_eom;
	uint16_t		_id, _flags, _counts[ns_s_max];
	const unsigned char	*_sections[ns_s_max];
	ns_sect			_sect;
	int			_rrnum;
	const unsigned char	*_msg_ptr;
} ns_msg;


struct _ns_flagdata {  int mask, shift;  };
extern const struct _ns_flagdata _ns_flagdata[];



#line 119 "/usr/include/arpa/nameser.h"




typedef	struct __ns_rr {
	char			name[1025];
	uint16_t		type;
	uint16_t		rr_class;
	uint32_t		ttl;
	uint16_t		rdlength;
	const unsigned char *	rdata;
} ns_rr;


#line 139 "/usr/include/arpa/nameser.h"






typedef enum __ns_flag {
	ns_f_qr,		
	ns_f_opcode,		
	ns_f_aa,		
	ns_f_tc,		
	ns_f_rd,		
	ns_f_ra,		
	ns_f_z,			
	ns_f_ad,		
	ns_f_cd,		
	ns_f_rcode,		
	ns_f_max
} ns_flag;




typedef enum __ns_opcode {
	ns_o_query = 0,		
	ns_o_iquery = 1,	
	ns_o_status = 2,	
				
	ns_o_notify = 4,	
	ns_o_update = 5,	
	ns_o_max = 6
} ns_opcode;




typedef	enum __ns_rcode {
	ns_r_noerror = 0,	
	ns_r_formerr = 1,	
	ns_r_servfail = 2,	
	ns_r_nxdomain = 3,	
	ns_r_notimpl = 4,	
	ns_r_refused = 5,	
	
	ns_r_yxdomain = 6,	
	ns_r_yxrrset = 7,	
	ns_r_nxrrset = 8,	
	ns_r_notauth = 9,	
	ns_r_notzone = 10,	
	ns_r_max = 11,
	
	ns_r_badvers = 16,
	
	ns_r_badsig = 16,
	ns_r_badkey = 17,
	ns_r_badtime = 18
} ns_rcode;


typedef enum __ns_update_operation {
	ns_uop_delete = 0,
	ns_uop_add = 1,
	ns_uop_max = 2
} ns_update_operation;




struct ns_tsig_key {
        char name[1025], alg[1025];
        unsigned char *data;
        int len;
};
typedef struct ns_tsig_key ns_tsig_key;




struct ns_tcp_tsig_state {
	int counter;
	struct dst_key *key;
	void *ctx;
	unsigned char sig[512];
	int siglen;
};
typedef struct ns_tcp_tsig_state ns_tcp_tsig_state;

#line 229 "/usr/include/arpa/nameser.h"

#line 233 "/usr/include/arpa/nameser.h"




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




typedef enum __ns_class {
	ns_c_invalid = 0,	
	ns_c_in = 1,		
	ns_c_2 = 2,		
	ns_c_chaos = 3,		
	ns_c_hs = 4,		
	
	ns_c_none = 254,	
	ns_c_any = 255,		
	ns_c_max = 65536
} ns_class;


typedef enum __ns_cert_types {
	cert_t_pkix = 1,	
	cert_t_spki = 2,	
	cert_t_pgp  = 3,	
	cert_t_url  = 253,	
	cert_t_oid  = 254	
} ns_cert_types;




#line 358 "/usr/include/arpa/nameser.h"




#line 363 "/usr/include/arpa/nameser.h"

#line 365 "/usr/include/arpa/nameser.h"

#line 367 "/usr/include/arpa/nameser.h"

#line 369 "/usr/include/arpa/nameser.h"


int		ns_msg_getflag (ns_msg, int) ;
unsigned int	ns_get16 (const unsigned char *) ;
unsigned long	ns_get32 (const unsigned char *) ;
void		ns_put16 (unsigned int, unsigned char *) ;
void		ns_put32 (unsigned long, unsigned char *) ;
int		ns_initparse (const unsigned char *, int, ns_msg *) ;
int		ns_skiprr (const unsigned char *, const unsigned char *,
			   ns_sect, int) ;
int		ns_parserr (ns_msg *, ns_sect, int, ns_rr *) ;
int		ns_sprintrr (const ns_msg *, const ns_rr *,
			     const char *, const char *, char *, size_t)
   __attribute__ ((__deprecated__));
int		ns_sprintrrf (const unsigned char *, size_t, const char *,
			      ns_class, ns_type, unsigned long,
			      const unsigned char *, size_t, const char *,
			      const char *, char *, size_t)
   __attribute__ ((__deprecated__));
int		ns_format_ttl (unsigned long, char *, size_t)
   __attribute__ ((__deprecated__));
int		ns_parse_ttl (const char *, unsigned long *)
   __attribute__ ((__deprecated__));
uint32_t	ns_datetosecs (const char *, int *)
   __attribute__ ((__deprecated__));
int		ns_name_ntol (const unsigned char *, unsigned char *, size_t)
     ;
int		ns_name_ntop (const unsigned char *, char *, size_t) ;
int		ns_name_pton (const char *, unsigned char *, size_t) ;
int		ns_name_unpack (const unsigned char *, const unsigned char *,
				const unsigned char *, unsigned char *, size_t)
     ;
int		ns_name_pack (const unsigned char *, unsigned char *, int,
			      const unsigned char **, const unsigned char **)
     ;
int		ns_name_uncompress (const unsigned char *,
				    const unsigned char *,
				    const unsigned char *,
				    char *, size_t) ;
int		ns_name_compress (const char *, unsigned char *, size_t,
				  const unsigned char **,
				  const unsigned char **) ;
int		ns_name_skip (const unsigned char **, const unsigned char *)
     ;
void		ns_name_rollback (const unsigned char *,
				  const unsigned char **,
				  const unsigned char **) ;

int		ns_samedomain (const char *, const char *) 
  __attribute__ ((__deprecated__));
int		ns_subdomain (const char *, const char *) 
  __attribute__ ((__deprecated__));
int		ns_makecanon (const char *, char *, size_t) 
  __attribute__ ((__deprecated__));
int		ns_samename (const char *, const char *) 
  __attribute__ ((__deprecated__));


#line 1 "/usr/include/arpa/nameser_compat.h"




























#line 31 "/usr/include/arpa/nameser_compat.h"

#line 1 "/usr/include/endian.h"
















#line 33 "/usr/include/arpa/nameser_compat.h"








typedef struct {
	unsigned	id :16;		
#line 58 "/usr/include/arpa/nameser_compat.h"
			
	unsigned	rd :1;		
	unsigned	tc :1;		
	unsigned	aa :1;		
	unsigned	opcode :4;	
	unsigned	qr :1;		
			
	unsigned	rcode :4;	
	unsigned	cd: 1;		
	unsigned	ad: 1;		
	unsigned	unused :1;	
	unsigned	ra :1;		
#line 71 "/usr/include/arpa/nameser_compat.h"
			
	unsigned	qdcount :16;	
	unsigned	ancount :16;	
	unsigned	nscount :16;	
	unsigned	arcount :16;	
} HEADER;

#line 92 "/usr/include/arpa/nameser_compat.h"

#line 97 "/usr/include/arpa/nameser_compat.h"

#line 103 "/usr/include/arpa/nameser_compat.h"

#line 115 "/usr/include/arpa/nameser_compat.h"





#line 122 "/usr/include/arpa/nameser_compat.h"

#line 207 "/usr/include/arpa/nameser_compat.h"

#line 211 "/usr/include/arpa/nameser_compat.h"

#line 214 "/usr/include/arpa/nameser_compat.h"

#line 219 "/usr/include/arpa/nameser_compat.h"

#line 221 "/usr/include/arpa/nameser_compat.h"
#line 428 "/usr/include/arpa/nameser.h"

#line 430 "/usr/include/arpa/nameser.h"
#line 61 "/usr/include/resolv.h"
#line 1 "/usr/include/bits/types/res_state.h"
#line 3 "/usr/include/bits/types/res_state.h"

#line 1 "/usr/include/sys/types.h"




















#line 5 "/usr/include/bits/types/res_state.h"
#line 1 "/usr/include/netinet/in.h"
















#line 6 "/usr/include/bits/types/res_state.h"


#line 12 "/usr/include/bits/types/res_state.h"

struct __res_state {
	int	retrans;		
	int	retry;			
	unsigned long options;		
	int	nscount;		
	struct sockaddr_in
		nsaddr_list[3];	
	unsigned short id;		
	
	char	*dnsrch[6+1];	
	char	defdname[256];		
	unsigned long pfcode;		
	unsigned ndots:4;		
	unsigned nsort:4;		
	unsigned ipv6_unavail:1;	
	unsigned unused:23;
	struct {
		struct in_addr	addr;
		uint32_t	mask;
	} sort_list[10];
	
	void * __glibc_unused_qhook;
	void * __glibc_unused_rhook;
	int	res_h_errno;		
	int	_vcsock;		
	unsigned int _flags;		
	
	union {
		char	pad[52];	
		struct {
			uint16_t		nscount;
			uint16_t		nsmap[3];
			int			nssocks[3];
			uint16_t		nscount6;
			uint16_t		nsinit;
			struct sockaddr_in6	*nsaddrs[3];
#line 53 "/usr/include/bits/types/res_state.h"
			unsigned int		__glibc_reserved[2];
#line 55 "/usr/include/bits/types/res_state.h"
		} _ext;
	} _u;
};

typedef struct __res_state *res_state;
#line 62 "/usr/include/resolv.h"




#line 67 "/usr/include/resolv.h"

#line 74 "/usr/include/resolv.h"

#line 76 "/usr/include/resolv.h"









#line 86 "/usr/include/resolv.h"







#line 96 "/usr/include/resolv.h"

struct res_sym {
	int	number;		
	char *	name;		
	char *	humanname;	
};




#line 132 "/usr/include/resolv.h"

#line 134 "/usr/include/resolv.h"




#line 153 "/usr/include/resolv.h"




extern struct __res_state *__res_state(void) __attribute__ ((__const__));

#line 160 "/usr/include/resolv.h"

#line 168 "/usr/include/resolv.h"

#line 176 "/usr/include/resolv.h"


void		__fp_nquery (const unsigned char *, int, FILE *) 
  __attribute__ ((__deprecated__));
void		__fp_query (const unsigned char *, FILE *) 
  __attribute__ ((__deprecated__));
const char *	__hostalias (const char *) 
  __attribute__ ((__deprecated__));
void		__p_query (const unsigned char *) 
  __attribute__ ((__deprecated__));
void		__res_close (void) ;
int		__res_init (void) ;
int		__res_isourserver (const struct sockaddr_in *) 
  __attribute__ ((__deprecated__));
int		res_mkquery (int, const char *, int, int,
			     const unsigned char *, int, const unsigned char *,
			     unsigned char *, int) ;
int		res_query (const char *, int, int, unsigned char *, int)
     ;
int		res_querydomain (const char *, const char *, int, int,
				 unsigned char *, int) ;
int		res_search (const char *, int, int, unsigned char *, int)
     ;
int		res_send (const unsigned char *, int, unsigned char *, int)
     ;


#line 229 "/usr/include/resolv.h"

int		res_hnok (const char *) ;
int		res_ownok (const char *) ;
int		res_mailok (const char *) ;
int		res_dnok (const char *) ;
int		__sym_ston (const struct res_sym *, const char *, int *) 
  __attribute__ ((__deprecated__));
const char *	__sym_ntos (const struct res_sym *, int, int *) 
  __attribute__ ((__deprecated__));
const char *	__sym_ntop (const struct res_sym *, int, int *) 
  __attribute__ ((__deprecated__));
int		__b64_ntop (const unsigned char *, size_t, char *, size_t)
  ;
int		__b64_pton (char const *, unsigned char *, size_t) ;
int		__loc_aton (const char *__ascii, unsigned char *__binary) 
  __attribute__ ((__deprecated__));
const char *	__loc_ntoa (const unsigned char *__binary, char *__ascii) 
  __attribute__ ((__deprecated__));
int		dn_skipname (const unsigned char *, const unsigned char *)
  ;
void		__putlong (uint32_t, unsigned char *) 
  __attribute__ ((__deprecated__));
void		__putshort (uint16_t, unsigned char *) 
  __attribute__ ((__deprecated__));
const char *	__p_class (int)  __attribute__ ((__deprecated__));
const char *	__p_time (uint32_t)  __attribute__ ((__deprecated__));
const char *	__p_type (int)  __attribute__ ((__deprecated__));
const char *	__p_rcode (int)  __attribute__ ((__deprecated__));
const unsigned char * __p_cdnname (const unsigned char *, const unsigned char *,
				 int, FILE *)  __attribute__ ((__deprecated__));
const unsigned char * __p_cdname (const unsigned char *, const unsigned char *,
				FILE *)  __attribute__ ((__deprecated__));
const unsigned char * __p_fqnname (const unsigned char *__cp,
				 const unsigned char *__msg,
				 int, char *, int)  __attribute__ ((__deprecated__));
const unsigned char * __p_fqname (const unsigned char *, const unsigned char *,
				FILE *)  __attribute__ ((__deprecated__));
const char *	__p_option (unsigned long __option)  __attribute__ ((__deprecated__));
int		__dn_count_labels (const char *)  __attribute__ ((__deprecated__));
int		dn_comp (const char *, unsigned char *, int, unsigned char **,
			 unsigned char **) ;
int		dn_expand (const unsigned char *, const unsigned char *,
			   const unsigned char *, char *, int) ;
unsigned int	__res_randomid (void) 
  __attribute__ ((__deprecated__));
int		__res_nameinquery (const char *, int, int,
				 const unsigned char *,
				 const unsigned char *) 
  __attribute__ ((__deprecated__));
int		__res_queriesmatch (const unsigned char *,
				  const unsigned char *,
				  const unsigned char *,
				  const unsigned char *) 
  __attribute__ ((__deprecated__));

int		__res_ninit (res_state) ;
void		__fp_resstat (const res_state, FILE *) 
  __attribute__ ((__deprecated__));
const char *	__res_hostalias (const res_state, const char *, char *, size_t)
      __attribute__ ((__deprecated__));
int		res_nquery (res_state, const char *, int, int,
			    unsigned char *, int) ;
int		res_nsearch (res_state, const char *, int, int,
			     unsigned char *, int) ;
int		res_nquerydomain (res_state, const char *, const char *, int,
				  int, unsigned char *, int) ;
int		res_nmkquery (res_state, int, const char *, int, int,
			      const unsigned char *, int,
			      const unsigned char *, unsigned char *, int)
     ;
int		res_nsend (res_state, const unsigned char *, int,
			   unsigned char *, int) ;
void		__res_nclose (res_state) ;


#line 78 "all.nc"
#line 1 "/usr/include/sched.h"

















#line 79 "all.nc"
#line 1 "/usr/include/search.h"


















#line 21 "/usr/include/search.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/search.h"

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
#line 26 "/usr/include/search.h"



#line 30 "/usr/include/search.h"



#line 34 "/usr/include/search.h"
struct qelem
  {
    struct qelem *q_forw;
    struct qelem *q_back;
    char q_data[1];
  };
#line 41 "/usr/include/search.h"



extern void insque (void *__elem, void *__prev) ;


extern void remque (void *__elem) ;
#line 49 "/usr/include/search.h"



#line 54 "/usr/include/search.h"
typedef int (*__compar_fn_t) (const void *, const void *);

#line 57 "/usr/include/search.h"
typedef __compar_fn_t comparison_fn_t;
#line 60 "/usr/include/search.h"


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


struct _ENTRY;









extern ENTRY *hsearch (ENTRY __item, ACTION __action) ;


extern int hcreate (size_t __nel) ;


extern void hdestroy (void) ;

#line 96 "/usr/include/search.h"

struct hsearch_data
  {
    struct _ENTRY *table;
    unsigned int size;
    unsigned int filled;
  };



extern int hsearch_r (ENTRY __item, ACTION __action, ENTRY **__retval,
		      struct hsearch_data *__htab) ;
extern int hcreate_r (size_t __nel, struct hsearch_data *__htab) ;
extern void hdestroy_r (struct hsearch_data *__htab) ;
#line 111 "/usr/include/search.h"







typedef enum
{
  preorder,
  postorder,
  endorder,
  leaf
}
VISIT;



extern void *tsearch (const void *__key, void **__rootp,
		      __compar_fn_t __compar);



extern void *tfind (const void *__key, void *const *__rootp,
		    __compar_fn_t __compar);


extern void *tdelete (const void *__restrict __key,
		      void **__restrict __rootp,
		      __compar_fn_t __compar);

#line 144 "/usr/include/search.h"
typedef void (*__action_fn_t) (const void *__nodep, VISIT __value,
			       int __level);
#line 147 "/usr/include/search.h"



extern void twalk (const void *__root, __action_fn_t __action);

#line 153 "/usr/include/search.h"


extern void twalk_r (const void *__root,
		     void (*) (const void *__nodep, VISIT __value,
			       void *__closure),
		     void *__closure);



typedef void (*__free_fn_t) (void *__nodep);


extern void tdestroy (void *__root, __free_fn_t __freefct);
#line 167 "/usr/include/search.h"




extern void *lfind (const void *__key, const void *__base,
		    size_t *__nmemb, size_t __size, __compar_fn_t __compar);



extern void *lsearch (const void *__key, void *__base,
		      size_t *__nmemb, size_t __size, __compar_fn_t __compar);


#line 80 "all.nc"
#line 1 "/usr/include/semaphore.h"

















#line 20 "/usr/include/semaphore.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/semaphore.h"
#line 1 "/usr/include/sys/types.h"




















#line 23 "/usr/include/semaphore.h"
#line 1 "/usr/include/bits/types/struct_timespec.h"
#line 25 "/usr/include/semaphore.h"
#line 26 "/usr/include/semaphore.h"


#line 1 "/usr/include/bits/semaphore.h"


















#line 22 "/usr/include/bits/semaphore.h"

#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 24 "/usr/include/bits/semaphore.h"

#line 30 "/usr/include/bits/semaphore.h"


#line 33 "/usr/include/bits/semaphore.h"


typedef union
{
  char __size[32];
  long int __align;
} sem_t;
#line 29 "/usr/include/semaphore.h"






extern int sem_init (sem_t *__sem, int __pshared, unsigned int __value)
   ;


extern int sem_destroy (sem_t *__sem)  ;


extern sem_t *sem_open (const char *__name, int __oflag, ...)
   ;


extern int sem_close (sem_t *__sem)  ;


extern int sem_unlink (const char *__name)  ;





extern int sem_wait (sem_t *__sem) ;

#line 58 "/usr/include/semaphore.h"




#line 63 "/usr/include/semaphore.h"
extern int sem_timedwait (sem_t *__restrict __sem,
			  const struct timespec *__restrict __abstime)
  ;
#line 78 "/usr/include/semaphore.h"

#line 81 "/usr/include/semaphore.h"
extern int sem_clockwait (sem_t *__restrict __sem,
			  clockid_t clock,
			  const struct timespec *__restrict __abstime)
  ;
#line 98 "/usr/include/semaphore.h"


extern int sem_trywait (sem_t *__sem)  ;


extern int sem_post (sem_t *__sem)  ;


extern int sem_getvalue (sem_t *__restrict __sem, int *__restrict __sval)
   ;



#line 81 "all.nc"
#line 1 "/usr/include/setjmp.h"





















#line 24 "/usr/include/setjmp.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/setjmp.h"



#line 1 "/usr/include/bits/setjmp.h"

















#line 30 "/usr/include/setjmp.h"
#line 1 "/usr/include/bits/types/struct___jmp_buf_tag.h"

















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


#line 82 "all.nc"
#line 1 "/usr/include/sgtty.h"

















#line 20 "/usr/include/sgtty.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/sgtty.h"

#line 1 "/usr/include/sys/ioctl.h"
















#line 24 "/usr/include/sgtty.h"



struct sgttyb;




extern int gtty (int __fd, struct sgttyb *__params) ;


extern int stty (int __fd, const struct sgttyb *__params) ;



#line 83 "all.nc"
#line 1 "/usr/include/shadow.h"























#line 26 "/usr/include/shadow.h"

#line 1 "/usr/include/features.h"
















#line 28 "/usr/include/shadow.h"

#line 1 "/usr/include/paths.h"






























#line 30 "/usr/include/shadow.h"

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
#line 33 "/usr/include/shadow.h"

#line 1 "/usr/include/bits/types/FILE.h"
#line 35 "/usr/include/shadow.h"


#line 38 "/usr/include/shadow.h"





struct spwd
  {
    char *sp_namp;		
    char *sp_pwdp;		
    long int sp_lstchg;		
    long int sp_min;		
    long int sp_max;		
    long int sp_warn;		

    long int sp_inact;		

    long int sp_expire;		

    unsigned long int sp_flag;	
  };








extern void setspent (void);







extern void endspent (void);







extern struct spwd *getspent (void);







extern struct spwd *getspnam (const char *__name);







extern struct spwd *sgetspent (const char *__string);







extern struct spwd *fgetspent (FILE *__stream);







extern int putspent (const struct spwd *__p, FILE *__stream);


#line 118 "/usr/include/shadow.h"






extern int getspent_r (struct spwd *__result_buf, char *__buffer,
		       size_t __buflen, struct spwd **__result)
	;

extern int getspnam_r (const char *__name, struct spwd *__result_buf,
		       char *__buffer, size_t __buflen,
		       struct spwd **__result)
	;

extern int sgetspent_r (const char *__string, struct spwd *__result_buf,
			char *__buffer, size_t __buflen,
			struct spwd **__result)
	;

extern int fgetspent_r (FILE *__stream, struct spwd *__result_buf,
			char *__buffer, size_t __buflen,
			struct spwd **__result)
	;
#line 143 "/usr/include/shadow.h"






extern int lckpwdf (void) ;


extern int ulckpwdf (void) ;


#line 84 "all.nc"
#line 1 "/usr/include/signal.h"




















#line 85 "all.nc"
#line 1 "/usr/include/spawn.h"


















#line 21 "/usr/include/spawn.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/spawn.h"
#line 1 "/usr/include/sched.h"

















#line 24 "/usr/include/spawn.h"
#line 1 "/usr/include/sys/types.h"




















#line 25 "/usr/include/spawn.h"
#line 1 "/usr/include/bits/types/sigset_t.h"
#line 26 "/usr/include/spawn.h"



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




typedef struct
{
  int __allocated;
  int __used;
  struct __spawn_action *__actions;
  int __pad[16];
} posix_spawn_file_actions_t;



#line 65 "/usr/include/spawn.h"









extern int posix_spawn (pid_t *__restrict __pid,
			const char *__restrict __path,
			const posix_spawn_file_actions_t *__restrict
			__file_actions,
			const posix_spawnattr_t *__restrict __attrp,
			char *const __argv[__restrict],
			char *const __envp[__restrict])
    ;





extern int posix_spawnp (pid_t *__pid, const char *__file,
			 const posix_spawn_file_actions_t *__file_actions,
			 const posix_spawnattr_t *__attrp,
			 char *const __argv[], char *const __envp[])
    ;



extern int posix_spawnattr_init (posix_spawnattr_t *__attr)
     ;


extern int posix_spawnattr_destroy (posix_spawnattr_t *__attr)
     ;



extern int posix_spawnattr_getsigdefault (const posix_spawnattr_t *
					  __restrict __attr,
					  sigset_t *__restrict __sigdefault)
      ;


extern int posix_spawnattr_setsigdefault (posix_spawnattr_t *__restrict __attr,
					  const sigset_t *__restrict
					  __sigdefault)
      ;


extern int posix_spawnattr_getsigmask (const posix_spawnattr_t *__restrict
				       __attr,
				       sigset_t *__restrict __sigmask)
     ;


extern int posix_spawnattr_setsigmask (posix_spawnattr_t *__restrict __attr,
				       const sigset_t *__restrict __sigmask)
      ;


extern int posix_spawnattr_getflags (const posix_spawnattr_t *__restrict
				     __attr,
				     short int *__restrict __flags)
      ;


extern int posix_spawnattr_setflags (posix_spawnattr_t *_attr,
				     short int __flags)
      ;


extern int posix_spawnattr_getpgroup (const posix_spawnattr_t *__restrict
				      __attr, pid_t *__restrict __pgroup)
      ;


extern int posix_spawnattr_setpgroup (posix_spawnattr_t *__attr,
				      pid_t __pgroup)
      ;


extern int posix_spawnattr_getschedpolicy (const posix_spawnattr_t *
					   __restrict __attr,
					   int *__restrict __schedpolicy)
      ;


extern int posix_spawnattr_setschedpolicy (posix_spawnattr_t *__attr,
					   int __schedpolicy)
      ;


extern int posix_spawnattr_getschedparam (const posix_spawnattr_t *
					  __restrict __attr,
					  struct sched_param *__restrict
					  __schedparam)
      ;


extern int posix_spawnattr_setschedparam (posix_spawnattr_t *__restrict __attr,
					  const struct sched_param *
					  __restrict __schedparam)
      ;


extern int posix_spawn_file_actions_init (posix_spawn_file_actions_t *
					  __file_actions)
      ;


extern int posix_spawn_file_actions_destroy (posix_spawn_file_actions_t *
					     __file_actions)
      ;



extern int posix_spawn_file_actions_addopen (posix_spawn_file_actions_t *
					     __restrict __file_actions,
					     int __fd,
					     const char *__restrict __path,
					     int __oflag, mode_t __mode)
      ;



extern int posix_spawn_file_actions_addclose (posix_spawn_file_actions_t *
					      __file_actions, int __fd)
      ;



extern int posix_spawn_file_actions_adddup2 (posix_spawn_file_actions_t *
					     __file_actions,
					     int __fd, int __newfd)
      ;

#line 204 "/usr/include/spawn.h"


extern int posix_spawn_file_actions_addchdir_np (posix_spawn_file_actions_t *
						 __restrict __actions,
						 const char *__restrict __path)
      ;




extern int posix_spawn_file_actions_addfchdir_np (posix_spawn_file_actions_t *,
						  int __fd)
      ;



extern int
posix_spawn_file_actions_addclosefrom_np (posix_spawn_file_actions_t *,
					  int __from)
      ;



extern int
posix_spawn_file_actions_addtcsetpgrp_np (posix_spawn_file_actions_t *,
					  int __tcfd)
      ;

#line 233 "/usr/include/spawn.h"



#line 1 "/usr/include/bits/spawn_ext.h"


















#line 22 "/usr/include/bits/spawn_ext.h"



#line 26 "/usr/include/bits/spawn_ext.h"


extern int posix_spawnattr_getcgroup_np (const posix_spawnattr_t *
					 __restrict __attr,
					 int *__restrict __cgroup)
      ;


extern int posix_spawnattr_setcgroup_np (posix_spawnattr_t *__attr,
					 int __cgroup)
      ;








extern int pidfd_spawn (int *__restrict __pidfd,
			const char *__restrict __path,
			const posix_spawn_file_actions_t *__restrict __facts,
			const posix_spawnattr_t *__restrict __attrp,
			char *const __argv[__restrict],
			char *const __envp[__restrict])
    ;





extern int pidfd_spawnp (int *__restrict __pidfd,
			 const char *__restrict __file,
			 const posix_spawn_file_actions_t *__restrict __facts,
			 const posix_spawnattr_t *__restrict __attrp,
			 char *const __argv[__restrict],
			 char *const __envp[__restrict])
    ;

#line 66 "/usr/include/bits/spawn_ext.h"

#line 237 "/usr/include/spawn.h"
#line 86 "all.nc"
#line 1 "/usr/include/stab.h"
#line 2 "/usr/include/stab.h"



#line 6 "/usr/include/stab.h"

#line 8 "/usr/include/stab.h"

enum __stab_debug_code
{
#line 1 "/usr/include/bits/stab.def"






















N_GSYM=0x20,



N_FNAME=0x22,




N_FUN=0x24,



N_STSYM=0x26,


N_LCSYM=0x28,



N_MAIN=0x2a,



N_PC=0x30,


N_NSYMS=0x32,


N_NOMAP=0x34,



N_OBJ=0x38,




N_OPT=0x3c,


N_RSYM=0x40,


N_M2C=0x42,



N_SLINE=0x44,


N_DSLINE=0x46,


N_BSLINE=0x48,




N_BROWS=0x48,





N_DEFD=0x4a,




N_EHDECL=0x50,

N_MOD2=0x50,






N_CATCH=0x54,


N_SSYM=0x60,



N_SO=0x64,



N_LSYM=0x80,




N_BINCL=0x82,



N_SOL=0x84,



N_PSYM=0xa0,





N_EINCL=0xa2,


N_ENTRY=0xa4,





N_LBRAC=0xc0,





N_EXCL=0xc2,


N_SCOPE=0xc4,



N_RBRAC=0xe0,


N_BCOMM=0xe2,



N_ECOMM=0xe4,



N_ECOML=0xe8,




N_NBTEXT=0xF0,
N_NBDATA=0xF2,
N_NBBSS=0xF4,
N_NBSTS=0xF6,
N_NBLCS=0xF8,



N_LENG=0xfe,





















































#line 12 "/usr/include/stab.h"
LAST_UNUSED_STAB_CODE
};

#line 16 "/usr/include/stab.h"
#line 87 "all.nc"
#line 1 "/usr/include/stdbit.h"


















#line 21 "/usr/include/stdbit.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/stdbit.h"
#line 1 "/usr/include/bits/endian.h"

















#line 24 "/usr/include/stdbit.h"
#line 1 "/usr/include/bits/stdint-intn.h"

















#line 25 "/usr/include/stdbit.h"
#line 1 "/usr/include/bits/stdint-uintn.h"

















#line 26 "/usr/include/stdbit.h"
#line 1 "/usr/include/bits/stdint-least.h"

















#line 27 "/usr/include/stdbit.h"





#line 1 "/usr/lib/clang/21/include/stdbool.h"








#line 33 "/usr/include/stdbit.h"
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
#line 35 "/usr/include/stdbit.h"

#line 37 "/usr/include/stdbit.h"

#line 41 "/usr/include/stdbit.h"






#line 54 "/usr/include/stdbit.h"


extern unsigned int stdc_leading_zeros_uc (unsigned char __x)
      __attribute__ ((__const__));
extern unsigned int stdc_leading_zeros_us (unsigned short __x)
      __attribute__ ((__const__));
extern unsigned int stdc_leading_zeros_ui (unsigned int __x)
      __attribute__ ((__const__));
extern unsigned int stdc_leading_zeros_ul (unsigned long int __x)
      __attribute__ ((__const__));

extern unsigned int stdc_leading_zeros_ull (unsigned long long int __x)
      __attribute__ ((__const__));
#line 72 "/usr/include/stdbit.h"

#line 108 "/usr/include/stdbit.h"


extern unsigned int stdc_leading_ones_uc (unsigned char __x)
      __attribute__ ((__const__));
extern unsigned int stdc_leading_ones_us (unsigned short __x)
      __attribute__ ((__const__));
extern unsigned int stdc_leading_ones_ui (unsigned int __x)
      __attribute__ ((__const__));
extern unsigned int stdc_leading_ones_ul (unsigned long int __x)
      __attribute__ ((__const__));

extern unsigned int stdc_leading_ones_ull (unsigned long long int __x)
      __attribute__ ((__const__));
#line 126 "/usr/include/stdbit.h"

#line 162 "/usr/include/stdbit.h"


extern unsigned int stdc_trailing_zeros_uc (unsigned char __x)
      __attribute__ ((__const__));
extern unsigned int stdc_trailing_zeros_us (unsigned short __x)
      __attribute__ ((__const__));
extern unsigned int stdc_trailing_zeros_ui (unsigned int __x)
      __attribute__ ((__const__));
extern unsigned int stdc_trailing_zeros_ul (unsigned long int __x)
      __attribute__ ((__const__));

extern unsigned int stdc_trailing_zeros_ull (unsigned long long int __x)
      __attribute__ ((__const__));
#line 180 "/usr/include/stdbit.h"

#line 216 "/usr/include/stdbit.h"


extern unsigned int stdc_trailing_ones_uc (unsigned char __x)
      __attribute__ ((__const__));
extern unsigned int stdc_trailing_ones_us (unsigned short __x)
      __attribute__ ((__const__));
extern unsigned int stdc_trailing_ones_ui (unsigned int __x)
      __attribute__ ((__const__));
extern unsigned int stdc_trailing_ones_ul (unsigned long int __x)
      __attribute__ ((__const__));

extern unsigned int stdc_trailing_ones_ull (unsigned long long int __x)
      __attribute__ ((__const__));
#line 234 "/usr/include/stdbit.h"

#line 270 "/usr/include/stdbit.h"


extern unsigned int stdc_first_leading_zero_uc (unsigned char __x)
      __attribute__ ((__const__));
extern unsigned int stdc_first_leading_zero_us (unsigned short __x)
      __attribute__ ((__const__));
extern unsigned int stdc_first_leading_zero_ui (unsigned int __x)
      __attribute__ ((__const__));
extern unsigned int stdc_first_leading_zero_ul (unsigned long int __x)
      __attribute__ ((__const__));

extern unsigned int stdc_first_leading_zero_ull (unsigned long long int __x)
      __attribute__ ((__const__));
#line 288 "/usr/include/stdbit.h"

#line 324 "/usr/include/stdbit.h"


extern unsigned int stdc_first_leading_one_uc (unsigned char __x)
      __attribute__ ((__const__));
extern unsigned int stdc_first_leading_one_us (unsigned short __x)
      __attribute__ ((__const__));
extern unsigned int stdc_first_leading_one_ui (unsigned int __x)
      __attribute__ ((__const__));
extern unsigned int stdc_first_leading_one_ul (unsigned long int __x)
      __attribute__ ((__const__));

extern unsigned int stdc_first_leading_one_ull (unsigned long long int __x)
      __attribute__ ((__const__));
#line 342 "/usr/include/stdbit.h"

#line 378 "/usr/include/stdbit.h"


extern unsigned int stdc_first_trailing_zero_uc (unsigned char __x)
      __attribute__ ((__const__));
extern unsigned int stdc_first_trailing_zero_us (unsigned short __x)
      __attribute__ ((__const__));
extern unsigned int stdc_first_trailing_zero_ui (unsigned int __x)
      __attribute__ ((__const__));
extern unsigned int stdc_first_trailing_zero_ul (unsigned long int __x)
      __attribute__ ((__const__));

extern unsigned int stdc_first_trailing_zero_ull (unsigned long long int __x)
      __attribute__ ((__const__));
#line 396 "/usr/include/stdbit.h"

#line 432 "/usr/include/stdbit.h"


extern unsigned int stdc_first_trailing_one_uc (unsigned char __x)
      __attribute__ ((__const__));
extern unsigned int stdc_first_trailing_one_us (unsigned short __x)
      __attribute__ ((__const__));
extern unsigned int stdc_first_trailing_one_ui (unsigned int __x)
      __attribute__ ((__const__));
extern unsigned int stdc_first_trailing_one_ul (unsigned long int __x)
      __attribute__ ((__const__));

extern unsigned int stdc_first_trailing_one_ull (unsigned long long int __x)
      __attribute__ ((__const__));
#line 450 "/usr/include/stdbit.h"

#line 486 "/usr/include/stdbit.h"


extern unsigned int stdc_count_zeros_uc (unsigned char __x)
      __attribute__ ((__const__));
extern unsigned int stdc_count_zeros_us (unsigned short __x)
      __attribute__ ((__const__));
extern unsigned int stdc_count_zeros_ui (unsigned int __x)
      __attribute__ ((__const__));
extern unsigned int stdc_count_zeros_ul (unsigned long int __x)
      __attribute__ ((__const__));

extern unsigned int stdc_count_zeros_ull (unsigned long long int __x)
      __attribute__ ((__const__));
#line 504 "/usr/include/stdbit.h"

#line 540 "/usr/include/stdbit.h"


extern unsigned int stdc_count_ones_uc (unsigned char __x)
      __attribute__ ((__const__));
extern unsigned int stdc_count_ones_us (unsigned short __x)
      __attribute__ ((__const__));
extern unsigned int stdc_count_ones_ui (unsigned int __x)
      __attribute__ ((__const__));
extern unsigned int stdc_count_ones_ul (unsigned long int __x)
      __attribute__ ((__const__));

extern unsigned int stdc_count_ones_ull (unsigned long long int __x)
      __attribute__ ((__const__));
#line 558 "/usr/include/stdbit.h"

#line 594 "/usr/include/stdbit.h"


extern _Bool stdc_has_single_bit_uc (unsigned char __x)
      __attribute__ ((__const__));
extern _Bool stdc_has_single_bit_us (unsigned short __x)
      __attribute__ ((__const__));
extern _Bool stdc_has_single_bit_ui (unsigned int __x)
      __attribute__ ((__const__));
extern _Bool stdc_has_single_bit_ul (unsigned long int __x)
      __attribute__ ((__const__));

extern _Bool stdc_has_single_bit_ull (unsigned long long int __x)
      __attribute__ ((__const__));
#line 612 "/usr/include/stdbit.h"

static __inline __attribute__ ((__always_inline__)) _Bool
__hsb64_inline (uint64_t __x)
{
  return (__x ^ (__x - 1)) > __x - 1;
}

static __inline __attribute__ ((__always_inline__)) _Bool
__hsb32_inline (uint32_t __x)
{
  return (__x ^ (__x - 1)) > __x - 1;
}

static __inline __attribute__ ((__always_inline__)) _Bool
__hsb16_inline (uint16_t __x)
{
  return (__x ^ (__x - 1)) > __x - 1;
}

static __inline __attribute__ ((__always_inline__)) _Bool
__hsb8_inline (uint8_t __x)
{
  return (__x ^ (__x - 1)) > __x - 1;
}

#line 646 "/usr/include/stdbit.h"


extern unsigned int stdc_bit_width_uc (unsigned char __x)
      __attribute__ ((__const__));
extern unsigned int stdc_bit_width_us (unsigned short __x)
      __attribute__ ((__const__));
extern unsigned int stdc_bit_width_ui (unsigned int __x)
      __attribute__ ((__const__));
extern unsigned int stdc_bit_width_ul (unsigned long int __x)
      __attribute__ ((__const__));

extern unsigned int stdc_bit_width_ull (unsigned long long int __x)
      __attribute__ ((__const__));
#line 664 "/usr/include/stdbit.h"

#line 700 "/usr/include/stdbit.h"


extern unsigned char stdc_bit_floor_uc (unsigned char __x)
      __attribute__ ((__const__));
extern unsigned short stdc_bit_floor_us (unsigned short __x)
      __attribute__ ((__const__));
extern unsigned int stdc_bit_floor_ui (unsigned int __x)
      __attribute__ ((__const__));
extern unsigned long int stdc_bit_floor_ul (unsigned long int __x)
      __attribute__ ((__const__));

extern unsigned long long int stdc_bit_floor_ull (unsigned long long int __x)
      __attribute__ ((__const__));
#line 718 "/usr/include/stdbit.h"

#line 756 "/usr/include/stdbit.h"


extern unsigned char stdc_bit_ceil_uc (unsigned char __x)
      __attribute__ ((__const__));
extern unsigned short stdc_bit_ceil_us (unsigned short __x)
      __attribute__ ((__const__));
extern unsigned int stdc_bit_ceil_ui (unsigned int __x)
      __attribute__ ((__const__));
extern unsigned long int stdc_bit_ceil_ul (unsigned long int __x)
      __attribute__ ((__const__));

extern unsigned long long int stdc_bit_ceil_ull (unsigned long long int __x)
      __attribute__ ((__const__));
#line 774 "/usr/include/stdbit.h"

#line 816 "/usr/include/stdbit.h"


#line 88 "all.nc"
#line 1 "/usr/include/stdc-predef.h"
















#line 89 "all.nc"
#line 1 "/usr/include/stdint.h"




















#line 90 "all.nc"
#line 1 "/usr/include/stdio.h"






















#line 91 "all.nc"
#line 1 "/usr/include/stdio_ext.h"





















#line 24 "/usr/include/stdio_ext.h"

#line 1 "/usr/include/stdio.h"






















#line 26 "/usr/include/stdio_ext.h"

enum
{
  
  FSETLOCKING_QUERY = 0,
#line 32 "/usr/include/stdio_ext.h"
  

  FSETLOCKING_INTERNAL,
#line 36 "/usr/include/stdio_ext.h"
  
  FSETLOCKING_BYCALLER
#line 39 "/usr/include/stdio_ext.h"
};






extern size_t __fbufsize (FILE *__fp)  ;




extern int __freading (FILE *__fp)  ;




extern int __fwriting (FILE *__fp)  ;




extern int __freadable (FILE *__fp)  ;


extern int __fwritable (FILE *__fp)  ;



extern int __flbf (FILE *__fp)  ;



extern void __fpurge (FILE *__fp)  ;


extern size_t __fpending (FILE *__fp)  ;


extern void _flushlbf (void);



extern int __fsetlocking (FILE *__fp, int __type)  ;


#line 92 "all.nc"
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


#line 93 "all.nc"
#line 1 "/usr/include/string.h"




















#line 94 "all.nc"
#line 1 "/usr/include/strings.h"
















#line 95 "all.nc"
#line 1 "/usr/include/syscall.h"
#line 1 "/usr/include/sys/syscall.h"

















#line 20 "/usr/include/sys/syscall.h"




#line 1 "/usr/include/asm/unistd.h"

#line 4 "/usr/include/asm/unistd.h"









#line 14 "/usr/include/asm/unistd.h"

#line 1 "/usr/include/asm/unistd_64.h"
#line 3 "/usr/include/asm/unistd_64.h"

#line 386 "/usr/include/asm/unistd_64.h"

#line 21 "/usr/include/asm/unistd.h"
#line 22 "/usr/include/asm/unistd.h"
#line 25 "/usr/include/sys/syscall.h"




#line 1 "/usr/include/bits/syscall.h"



#line 7 "/usr/include/bits/syscall.h"

#line 9 "/usr/include/bits/syscall.h"

#line 13 "/usr/include/bits/syscall.h"

#line 17 "/usr/include/bits/syscall.h"

#line 21 "/usr/include/bits/syscall.h"

#line 25 "/usr/include/bits/syscall.h"

#line 29 "/usr/include/bits/syscall.h"

#line 33 "/usr/include/bits/syscall.h"

#line 37 "/usr/include/bits/syscall.h"

#line 41 "/usr/include/bits/syscall.h"

#line 45 "/usr/include/bits/syscall.h"

#line 49 "/usr/include/bits/syscall.h"

#line 53 "/usr/include/bits/syscall.h"

#line 57 "/usr/include/bits/syscall.h"

#line 61 "/usr/include/bits/syscall.h"

#line 65 "/usr/include/bits/syscall.h"

#line 69 "/usr/include/bits/syscall.h"

#line 73 "/usr/include/bits/syscall.h"

#line 77 "/usr/include/bits/syscall.h"

#line 81 "/usr/include/bits/syscall.h"

#line 85 "/usr/include/bits/syscall.h"

#line 89 "/usr/include/bits/syscall.h"

#line 93 "/usr/include/bits/syscall.h"

#line 97 "/usr/include/bits/syscall.h"

#line 101 "/usr/include/bits/syscall.h"

#line 105 "/usr/include/bits/syscall.h"

#line 109 "/usr/include/bits/syscall.h"

#line 113 "/usr/include/bits/syscall.h"

#line 117 "/usr/include/bits/syscall.h"

#line 121 "/usr/include/bits/syscall.h"

#line 125 "/usr/include/bits/syscall.h"

#line 129 "/usr/include/bits/syscall.h"

#line 133 "/usr/include/bits/syscall.h"

#line 137 "/usr/include/bits/syscall.h"

#line 141 "/usr/include/bits/syscall.h"

#line 145 "/usr/include/bits/syscall.h"

#line 149 "/usr/include/bits/syscall.h"

#line 153 "/usr/include/bits/syscall.h"

#line 157 "/usr/include/bits/syscall.h"

#line 161 "/usr/include/bits/syscall.h"

#line 165 "/usr/include/bits/syscall.h"

#line 169 "/usr/include/bits/syscall.h"

#line 173 "/usr/include/bits/syscall.h"

#line 177 "/usr/include/bits/syscall.h"

#line 181 "/usr/include/bits/syscall.h"

#line 185 "/usr/include/bits/syscall.h"

#line 189 "/usr/include/bits/syscall.h"

#line 193 "/usr/include/bits/syscall.h"

#line 197 "/usr/include/bits/syscall.h"

#line 201 "/usr/include/bits/syscall.h"

#line 205 "/usr/include/bits/syscall.h"

#line 209 "/usr/include/bits/syscall.h"

#line 213 "/usr/include/bits/syscall.h"

#line 217 "/usr/include/bits/syscall.h"

#line 221 "/usr/include/bits/syscall.h"

#line 225 "/usr/include/bits/syscall.h"

#line 229 "/usr/include/bits/syscall.h"

#line 233 "/usr/include/bits/syscall.h"

#line 237 "/usr/include/bits/syscall.h"

#line 241 "/usr/include/bits/syscall.h"

#line 245 "/usr/include/bits/syscall.h"

#line 249 "/usr/include/bits/syscall.h"

#line 253 "/usr/include/bits/syscall.h"

#line 257 "/usr/include/bits/syscall.h"

#line 261 "/usr/include/bits/syscall.h"

#line 265 "/usr/include/bits/syscall.h"

#line 269 "/usr/include/bits/syscall.h"

#line 273 "/usr/include/bits/syscall.h"

#line 277 "/usr/include/bits/syscall.h"

#line 281 "/usr/include/bits/syscall.h"

#line 285 "/usr/include/bits/syscall.h"

#line 289 "/usr/include/bits/syscall.h"

#line 293 "/usr/include/bits/syscall.h"

#line 297 "/usr/include/bits/syscall.h"

#line 301 "/usr/include/bits/syscall.h"

#line 305 "/usr/include/bits/syscall.h"

#line 309 "/usr/include/bits/syscall.h"

#line 313 "/usr/include/bits/syscall.h"

#line 317 "/usr/include/bits/syscall.h"

#line 321 "/usr/include/bits/syscall.h"

#line 325 "/usr/include/bits/syscall.h"

#line 329 "/usr/include/bits/syscall.h"

#line 333 "/usr/include/bits/syscall.h"

#line 337 "/usr/include/bits/syscall.h"

#line 341 "/usr/include/bits/syscall.h"

#line 345 "/usr/include/bits/syscall.h"

#line 349 "/usr/include/bits/syscall.h"

#line 353 "/usr/include/bits/syscall.h"

#line 357 "/usr/include/bits/syscall.h"

#line 361 "/usr/include/bits/syscall.h"

#line 365 "/usr/include/bits/syscall.h"

#line 369 "/usr/include/bits/syscall.h"

#line 373 "/usr/include/bits/syscall.h"

#line 377 "/usr/include/bits/syscall.h"

#line 381 "/usr/include/bits/syscall.h"

#line 385 "/usr/include/bits/syscall.h"

#line 389 "/usr/include/bits/syscall.h"

#line 393 "/usr/include/bits/syscall.h"

#line 397 "/usr/include/bits/syscall.h"

#line 401 "/usr/include/bits/syscall.h"

#line 405 "/usr/include/bits/syscall.h"

#line 409 "/usr/include/bits/syscall.h"

#line 413 "/usr/include/bits/syscall.h"

#line 417 "/usr/include/bits/syscall.h"

#line 421 "/usr/include/bits/syscall.h"

#line 425 "/usr/include/bits/syscall.h"

#line 429 "/usr/include/bits/syscall.h"

#line 433 "/usr/include/bits/syscall.h"

#line 437 "/usr/include/bits/syscall.h"

#line 441 "/usr/include/bits/syscall.h"

#line 445 "/usr/include/bits/syscall.h"

#line 449 "/usr/include/bits/syscall.h"

#line 453 "/usr/include/bits/syscall.h"

#line 457 "/usr/include/bits/syscall.h"

#line 461 "/usr/include/bits/syscall.h"

#line 465 "/usr/include/bits/syscall.h"

#line 469 "/usr/include/bits/syscall.h"

#line 473 "/usr/include/bits/syscall.h"

#line 477 "/usr/include/bits/syscall.h"

#line 481 "/usr/include/bits/syscall.h"

#line 485 "/usr/include/bits/syscall.h"

#line 489 "/usr/include/bits/syscall.h"

#line 493 "/usr/include/bits/syscall.h"

#line 497 "/usr/include/bits/syscall.h"

#line 501 "/usr/include/bits/syscall.h"

#line 505 "/usr/include/bits/syscall.h"

#line 509 "/usr/include/bits/syscall.h"

#line 513 "/usr/include/bits/syscall.h"

#line 517 "/usr/include/bits/syscall.h"

#line 521 "/usr/include/bits/syscall.h"

#line 525 "/usr/include/bits/syscall.h"

#line 529 "/usr/include/bits/syscall.h"

#line 533 "/usr/include/bits/syscall.h"

#line 537 "/usr/include/bits/syscall.h"

#line 541 "/usr/include/bits/syscall.h"

#line 545 "/usr/include/bits/syscall.h"

#line 549 "/usr/include/bits/syscall.h"

#line 553 "/usr/include/bits/syscall.h"

#line 557 "/usr/include/bits/syscall.h"

#line 561 "/usr/include/bits/syscall.h"

#line 565 "/usr/include/bits/syscall.h"

#line 569 "/usr/include/bits/syscall.h"

#line 573 "/usr/include/bits/syscall.h"

#line 577 "/usr/include/bits/syscall.h"

#line 581 "/usr/include/bits/syscall.h"

#line 585 "/usr/include/bits/syscall.h"

#line 589 "/usr/include/bits/syscall.h"

#line 593 "/usr/include/bits/syscall.h"

#line 597 "/usr/include/bits/syscall.h"

#line 601 "/usr/include/bits/syscall.h"

#line 605 "/usr/include/bits/syscall.h"

#line 609 "/usr/include/bits/syscall.h"

#line 613 "/usr/include/bits/syscall.h"

#line 617 "/usr/include/bits/syscall.h"

#line 621 "/usr/include/bits/syscall.h"

#line 625 "/usr/include/bits/syscall.h"

#line 629 "/usr/include/bits/syscall.h"

#line 633 "/usr/include/bits/syscall.h"

#line 637 "/usr/include/bits/syscall.h"

#line 641 "/usr/include/bits/syscall.h"

#line 645 "/usr/include/bits/syscall.h"

#line 649 "/usr/include/bits/syscall.h"

#line 653 "/usr/include/bits/syscall.h"

#line 657 "/usr/include/bits/syscall.h"

#line 661 "/usr/include/bits/syscall.h"

#line 665 "/usr/include/bits/syscall.h"

#line 669 "/usr/include/bits/syscall.h"

#line 673 "/usr/include/bits/syscall.h"

#line 677 "/usr/include/bits/syscall.h"

#line 681 "/usr/include/bits/syscall.h"

#line 685 "/usr/include/bits/syscall.h"

#line 689 "/usr/include/bits/syscall.h"

#line 693 "/usr/include/bits/syscall.h"

#line 697 "/usr/include/bits/syscall.h"

#line 701 "/usr/include/bits/syscall.h"

#line 705 "/usr/include/bits/syscall.h"

#line 709 "/usr/include/bits/syscall.h"

#line 713 "/usr/include/bits/syscall.h"

#line 717 "/usr/include/bits/syscall.h"

#line 721 "/usr/include/bits/syscall.h"

#line 725 "/usr/include/bits/syscall.h"

#line 729 "/usr/include/bits/syscall.h"

#line 733 "/usr/include/bits/syscall.h"

#line 737 "/usr/include/bits/syscall.h"

#line 741 "/usr/include/bits/syscall.h"

#line 745 "/usr/include/bits/syscall.h"

#line 749 "/usr/include/bits/syscall.h"

#line 753 "/usr/include/bits/syscall.h"

#line 757 "/usr/include/bits/syscall.h"

#line 761 "/usr/include/bits/syscall.h"

#line 765 "/usr/include/bits/syscall.h"

#line 769 "/usr/include/bits/syscall.h"

#line 773 "/usr/include/bits/syscall.h"

#line 777 "/usr/include/bits/syscall.h"

#line 781 "/usr/include/bits/syscall.h"

#line 785 "/usr/include/bits/syscall.h"

#line 789 "/usr/include/bits/syscall.h"

#line 793 "/usr/include/bits/syscall.h"

#line 797 "/usr/include/bits/syscall.h"

#line 801 "/usr/include/bits/syscall.h"

#line 805 "/usr/include/bits/syscall.h"

#line 809 "/usr/include/bits/syscall.h"

#line 813 "/usr/include/bits/syscall.h"

#line 817 "/usr/include/bits/syscall.h"

#line 821 "/usr/include/bits/syscall.h"

#line 825 "/usr/include/bits/syscall.h"

#line 829 "/usr/include/bits/syscall.h"

#line 833 "/usr/include/bits/syscall.h"

#line 837 "/usr/include/bits/syscall.h"

#line 841 "/usr/include/bits/syscall.h"

#line 845 "/usr/include/bits/syscall.h"

#line 849 "/usr/include/bits/syscall.h"

#line 853 "/usr/include/bits/syscall.h"

#line 857 "/usr/include/bits/syscall.h"

#line 861 "/usr/include/bits/syscall.h"

#line 865 "/usr/include/bits/syscall.h"

#line 869 "/usr/include/bits/syscall.h"

#line 873 "/usr/include/bits/syscall.h"

#line 877 "/usr/include/bits/syscall.h"

#line 881 "/usr/include/bits/syscall.h"

#line 885 "/usr/include/bits/syscall.h"

#line 889 "/usr/include/bits/syscall.h"

#line 893 "/usr/include/bits/syscall.h"

#line 897 "/usr/include/bits/syscall.h"

#line 901 "/usr/include/bits/syscall.h"

#line 905 "/usr/include/bits/syscall.h"

#line 909 "/usr/include/bits/syscall.h"

#line 913 "/usr/include/bits/syscall.h"

#line 917 "/usr/include/bits/syscall.h"

#line 921 "/usr/include/bits/syscall.h"

#line 925 "/usr/include/bits/syscall.h"

#line 929 "/usr/include/bits/syscall.h"

#line 933 "/usr/include/bits/syscall.h"

#line 937 "/usr/include/bits/syscall.h"

#line 941 "/usr/include/bits/syscall.h"

#line 945 "/usr/include/bits/syscall.h"

#line 949 "/usr/include/bits/syscall.h"

#line 953 "/usr/include/bits/syscall.h"

#line 957 "/usr/include/bits/syscall.h"

#line 961 "/usr/include/bits/syscall.h"

#line 965 "/usr/include/bits/syscall.h"

#line 969 "/usr/include/bits/syscall.h"

#line 973 "/usr/include/bits/syscall.h"

#line 977 "/usr/include/bits/syscall.h"

#line 981 "/usr/include/bits/syscall.h"

#line 985 "/usr/include/bits/syscall.h"

#line 989 "/usr/include/bits/syscall.h"

#line 993 "/usr/include/bits/syscall.h"

#line 997 "/usr/include/bits/syscall.h"

#line 1001 "/usr/include/bits/syscall.h"

#line 1005 "/usr/include/bits/syscall.h"

#line 1009 "/usr/include/bits/syscall.h"

#line 1013 "/usr/include/bits/syscall.h"

#line 1017 "/usr/include/bits/syscall.h"

#line 1021 "/usr/include/bits/syscall.h"

#line 1025 "/usr/include/bits/syscall.h"

#line 1029 "/usr/include/bits/syscall.h"

#line 1033 "/usr/include/bits/syscall.h"

#line 1037 "/usr/include/bits/syscall.h"

#line 1041 "/usr/include/bits/syscall.h"

#line 1045 "/usr/include/bits/syscall.h"

#line 1049 "/usr/include/bits/syscall.h"

#line 1053 "/usr/include/bits/syscall.h"

#line 1057 "/usr/include/bits/syscall.h"

#line 1061 "/usr/include/bits/syscall.h"

#line 1065 "/usr/include/bits/syscall.h"

#line 1069 "/usr/include/bits/syscall.h"

#line 1073 "/usr/include/bits/syscall.h"

#line 1077 "/usr/include/bits/syscall.h"

#line 1081 "/usr/include/bits/syscall.h"

#line 1085 "/usr/include/bits/syscall.h"

#line 1089 "/usr/include/bits/syscall.h"

#line 1093 "/usr/include/bits/syscall.h"

#line 1097 "/usr/include/bits/syscall.h"

#line 1101 "/usr/include/bits/syscall.h"

#line 1105 "/usr/include/bits/syscall.h"

#line 1109 "/usr/include/bits/syscall.h"

#line 1113 "/usr/include/bits/syscall.h"

#line 1117 "/usr/include/bits/syscall.h"

#line 1121 "/usr/include/bits/syscall.h"

#line 1125 "/usr/include/bits/syscall.h"

#line 1129 "/usr/include/bits/syscall.h"

#line 1133 "/usr/include/bits/syscall.h"

#line 1137 "/usr/include/bits/syscall.h"

#line 1141 "/usr/include/bits/syscall.h"

#line 1145 "/usr/include/bits/syscall.h"

#line 1149 "/usr/include/bits/syscall.h"

#line 1153 "/usr/include/bits/syscall.h"

#line 1157 "/usr/include/bits/syscall.h"

#line 1161 "/usr/include/bits/syscall.h"

#line 1165 "/usr/include/bits/syscall.h"

#line 1169 "/usr/include/bits/syscall.h"

#line 1173 "/usr/include/bits/syscall.h"

#line 1177 "/usr/include/bits/syscall.h"

#line 1181 "/usr/include/bits/syscall.h"

#line 1185 "/usr/include/bits/syscall.h"

#line 1189 "/usr/include/bits/syscall.h"

#line 1193 "/usr/include/bits/syscall.h"

#line 1197 "/usr/include/bits/syscall.h"

#line 1201 "/usr/include/bits/syscall.h"

#line 1205 "/usr/include/bits/syscall.h"

#line 1209 "/usr/include/bits/syscall.h"

#line 1213 "/usr/include/bits/syscall.h"

#line 1217 "/usr/include/bits/syscall.h"

#line 1221 "/usr/include/bits/syscall.h"

#line 1225 "/usr/include/bits/syscall.h"

#line 1229 "/usr/include/bits/syscall.h"

#line 1233 "/usr/include/bits/syscall.h"

#line 1237 "/usr/include/bits/syscall.h"

#line 1241 "/usr/include/bits/syscall.h"

#line 1245 "/usr/include/bits/syscall.h"

#line 1249 "/usr/include/bits/syscall.h"

#line 1253 "/usr/include/bits/syscall.h"

#line 1257 "/usr/include/bits/syscall.h"

#line 1261 "/usr/include/bits/syscall.h"

#line 1265 "/usr/include/bits/syscall.h"

#line 1269 "/usr/include/bits/syscall.h"

#line 1273 "/usr/include/bits/syscall.h"

#line 1277 "/usr/include/bits/syscall.h"

#line 1281 "/usr/include/bits/syscall.h"

#line 1285 "/usr/include/bits/syscall.h"

#line 1289 "/usr/include/bits/syscall.h"

#line 1293 "/usr/include/bits/syscall.h"

#line 1297 "/usr/include/bits/syscall.h"

#line 1301 "/usr/include/bits/syscall.h"

#line 1305 "/usr/include/bits/syscall.h"

#line 1309 "/usr/include/bits/syscall.h"

#line 1313 "/usr/include/bits/syscall.h"

#line 1317 "/usr/include/bits/syscall.h"

#line 1321 "/usr/include/bits/syscall.h"

#line 1325 "/usr/include/bits/syscall.h"

#line 1329 "/usr/include/bits/syscall.h"

#line 1333 "/usr/include/bits/syscall.h"

#line 1337 "/usr/include/bits/syscall.h"

#line 1341 "/usr/include/bits/syscall.h"

#line 1345 "/usr/include/bits/syscall.h"

#line 1349 "/usr/include/bits/syscall.h"

#line 1353 "/usr/include/bits/syscall.h"

#line 1357 "/usr/include/bits/syscall.h"

#line 1361 "/usr/include/bits/syscall.h"

#line 1365 "/usr/include/bits/syscall.h"

#line 1369 "/usr/include/bits/syscall.h"

#line 1373 "/usr/include/bits/syscall.h"

#line 1377 "/usr/include/bits/syscall.h"

#line 1381 "/usr/include/bits/syscall.h"

#line 1385 "/usr/include/bits/syscall.h"

#line 1389 "/usr/include/bits/syscall.h"

#line 1393 "/usr/include/bits/syscall.h"

#line 1397 "/usr/include/bits/syscall.h"

#line 1401 "/usr/include/bits/syscall.h"

#line 1405 "/usr/include/bits/syscall.h"

#line 1409 "/usr/include/bits/syscall.h"

#line 1413 "/usr/include/bits/syscall.h"

#line 1417 "/usr/include/bits/syscall.h"

#line 1421 "/usr/include/bits/syscall.h"

#line 1425 "/usr/include/bits/syscall.h"

#line 1429 "/usr/include/bits/syscall.h"

#line 1433 "/usr/include/bits/syscall.h"

#line 1437 "/usr/include/bits/syscall.h"

#line 1441 "/usr/include/bits/syscall.h"

#line 1445 "/usr/include/bits/syscall.h"

#line 1449 "/usr/include/bits/syscall.h"

#line 1453 "/usr/include/bits/syscall.h"

#line 1457 "/usr/include/bits/syscall.h"

#line 1461 "/usr/include/bits/syscall.h"

#line 1465 "/usr/include/bits/syscall.h"

#line 1469 "/usr/include/bits/syscall.h"

#line 1473 "/usr/include/bits/syscall.h"

#line 1477 "/usr/include/bits/syscall.h"

#line 1481 "/usr/include/bits/syscall.h"

#line 1485 "/usr/include/bits/syscall.h"

#line 1489 "/usr/include/bits/syscall.h"

#line 1493 "/usr/include/bits/syscall.h"

#line 1497 "/usr/include/bits/syscall.h"

#line 1501 "/usr/include/bits/syscall.h"

#line 1505 "/usr/include/bits/syscall.h"

#line 1509 "/usr/include/bits/syscall.h"

#line 1513 "/usr/include/bits/syscall.h"

#line 1517 "/usr/include/bits/syscall.h"

#line 1521 "/usr/include/bits/syscall.h"

#line 1525 "/usr/include/bits/syscall.h"

#line 1529 "/usr/include/bits/syscall.h"

#line 1533 "/usr/include/bits/syscall.h"

#line 1537 "/usr/include/bits/syscall.h"

#line 1541 "/usr/include/bits/syscall.h"

#line 1545 "/usr/include/bits/syscall.h"

#line 1549 "/usr/include/bits/syscall.h"

#line 1553 "/usr/include/bits/syscall.h"

#line 1557 "/usr/include/bits/syscall.h"

#line 1561 "/usr/include/bits/syscall.h"

#line 1565 "/usr/include/bits/syscall.h"

#line 1569 "/usr/include/bits/syscall.h"

#line 1573 "/usr/include/bits/syscall.h"

#line 1577 "/usr/include/bits/syscall.h"

#line 1581 "/usr/include/bits/syscall.h"

#line 1585 "/usr/include/bits/syscall.h"

#line 1589 "/usr/include/bits/syscall.h"

#line 1593 "/usr/include/bits/syscall.h"

#line 1597 "/usr/include/bits/syscall.h"

#line 1601 "/usr/include/bits/syscall.h"

#line 1605 "/usr/include/bits/syscall.h"

#line 1609 "/usr/include/bits/syscall.h"

#line 1613 "/usr/include/bits/syscall.h"

#line 1617 "/usr/include/bits/syscall.h"

#line 1621 "/usr/include/bits/syscall.h"

#line 1625 "/usr/include/bits/syscall.h"

#line 1629 "/usr/include/bits/syscall.h"

#line 1633 "/usr/include/bits/syscall.h"

#line 1637 "/usr/include/bits/syscall.h"

#line 1641 "/usr/include/bits/syscall.h"

#line 1645 "/usr/include/bits/syscall.h"

#line 1649 "/usr/include/bits/syscall.h"

#line 1653 "/usr/include/bits/syscall.h"

#line 1657 "/usr/include/bits/syscall.h"

#line 1661 "/usr/include/bits/syscall.h"

#line 1665 "/usr/include/bits/syscall.h"

#line 1669 "/usr/include/bits/syscall.h"

#line 1673 "/usr/include/bits/syscall.h"

#line 1677 "/usr/include/bits/syscall.h"

#line 1681 "/usr/include/bits/syscall.h"

#line 1685 "/usr/include/bits/syscall.h"

#line 1689 "/usr/include/bits/syscall.h"

#line 1693 "/usr/include/bits/syscall.h"

#line 1697 "/usr/include/bits/syscall.h"

#line 1701 "/usr/include/bits/syscall.h"

#line 1705 "/usr/include/bits/syscall.h"

#line 1709 "/usr/include/bits/syscall.h"

#line 1713 "/usr/include/bits/syscall.h"

#line 1717 "/usr/include/bits/syscall.h"

#line 1721 "/usr/include/bits/syscall.h"

#line 1725 "/usr/include/bits/syscall.h"

#line 1729 "/usr/include/bits/syscall.h"

#line 1733 "/usr/include/bits/syscall.h"

#line 1737 "/usr/include/bits/syscall.h"

#line 1741 "/usr/include/bits/syscall.h"

#line 1745 "/usr/include/bits/syscall.h"

#line 1749 "/usr/include/bits/syscall.h"

#line 1753 "/usr/include/bits/syscall.h"

#line 1757 "/usr/include/bits/syscall.h"

#line 1761 "/usr/include/bits/syscall.h"

#line 1765 "/usr/include/bits/syscall.h"

#line 1769 "/usr/include/bits/syscall.h"

#line 1773 "/usr/include/bits/syscall.h"

#line 1777 "/usr/include/bits/syscall.h"

#line 1781 "/usr/include/bits/syscall.h"

#line 1785 "/usr/include/bits/syscall.h"

#line 1789 "/usr/include/bits/syscall.h"

#line 1793 "/usr/include/bits/syscall.h"

#line 1797 "/usr/include/bits/syscall.h"

#line 1801 "/usr/include/bits/syscall.h"

#line 1805 "/usr/include/bits/syscall.h"

#line 1809 "/usr/include/bits/syscall.h"

#line 1813 "/usr/include/bits/syscall.h"

#line 1817 "/usr/include/bits/syscall.h"

#line 1821 "/usr/include/bits/syscall.h"

#line 1825 "/usr/include/bits/syscall.h"

#line 1829 "/usr/include/bits/syscall.h"

#line 1833 "/usr/include/bits/syscall.h"

#line 1837 "/usr/include/bits/syscall.h"

#line 1841 "/usr/include/bits/syscall.h"

#line 1845 "/usr/include/bits/syscall.h"

#line 1849 "/usr/include/bits/syscall.h"

#line 1853 "/usr/include/bits/syscall.h"

#line 1857 "/usr/include/bits/syscall.h"

#line 1861 "/usr/include/bits/syscall.h"

#line 1865 "/usr/include/bits/syscall.h"

#line 1869 "/usr/include/bits/syscall.h"

#line 1873 "/usr/include/bits/syscall.h"

#line 1877 "/usr/include/bits/syscall.h"

#line 1881 "/usr/include/bits/syscall.h"

#line 1885 "/usr/include/bits/syscall.h"

#line 1889 "/usr/include/bits/syscall.h"

#line 1893 "/usr/include/bits/syscall.h"

#line 1897 "/usr/include/bits/syscall.h"

#line 1901 "/usr/include/bits/syscall.h"

#line 1905 "/usr/include/bits/syscall.h"

#line 1909 "/usr/include/bits/syscall.h"

#line 1913 "/usr/include/bits/syscall.h"

#line 1917 "/usr/include/bits/syscall.h"

#line 1921 "/usr/include/bits/syscall.h"

#line 1925 "/usr/include/bits/syscall.h"

#line 1929 "/usr/include/bits/syscall.h"

#line 1933 "/usr/include/bits/syscall.h"

#line 1937 "/usr/include/bits/syscall.h"

#line 1941 "/usr/include/bits/syscall.h"

#line 1945 "/usr/include/bits/syscall.h"

#line 1949 "/usr/include/bits/syscall.h"

#line 1953 "/usr/include/bits/syscall.h"

#line 1957 "/usr/include/bits/syscall.h"

#line 1961 "/usr/include/bits/syscall.h"

#line 1965 "/usr/include/bits/syscall.h"

#line 1969 "/usr/include/bits/syscall.h"

#line 1973 "/usr/include/bits/syscall.h"

#line 1977 "/usr/include/bits/syscall.h"

#line 1981 "/usr/include/bits/syscall.h"

#line 1985 "/usr/include/bits/syscall.h"

#line 1989 "/usr/include/bits/syscall.h"

#line 1993 "/usr/include/bits/syscall.h"

#line 1997 "/usr/include/bits/syscall.h"

#line 2001 "/usr/include/bits/syscall.h"

#line 2005 "/usr/include/bits/syscall.h"

#line 2009 "/usr/include/bits/syscall.h"

#line 2013 "/usr/include/bits/syscall.h"

#line 2017 "/usr/include/bits/syscall.h"

#line 2021 "/usr/include/bits/syscall.h"

#line 2025 "/usr/include/bits/syscall.h"

#line 2029 "/usr/include/bits/syscall.h"

#line 2033 "/usr/include/bits/syscall.h"

#line 2037 "/usr/include/bits/syscall.h"

#line 2041 "/usr/include/bits/syscall.h"

#line 2045 "/usr/include/bits/syscall.h"

#line 2049 "/usr/include/bits/syscall.h"

#line 2053 "/usr/include/bits/syscall.h"

#line 2057 "/usr/include/bits/syscall.h"

#line 2061 "/usr/include/bits/syscall.h"

#line 2065 "/usr/include/bits/syscall.h"

#line 2069 "/usr/include/bits/syscall.h"

#line 2073 "/usr/include/bits/syscall.h"

#line 2077 "/usr/include/bits/syscall.h"

#line 2081 "/usr/include/bits/syscall.h"

#line 2085 "/usr/include/bits/syscall.h"

#line 2089 "/usr/include/bits/syscall.h"

#line 2093 "/usr/include/bits/syscall.h"

#line 2097 "/usr/include/bits/syscall.h"

#line 2101 "/usr/include/bits/syscall.h"

#line 2105 "/usr/include/bits/syscall.h"

#line 2109 "/usr/include/bits/syscall.h"

#line 2113 "/usr/include/bits/syscall.h"

#line 2117 "/usr/include/bits/syscall.h"

#line 2121 "/usr/include/bits/syscall.h"

#line 2125 "/usr/include/bits/syscall.h"

#line 2129 "/usr/include/bits/syscall.h"

#line 2133 "/usr/include/bits/syscall.h"

#line 2137 "/usr/include/bits/syscall.h"

#line 2141 "/usr/include/bits/syscall.h"

#line 2145 "/usr/include/bits/syscall.h"

#line 2149 "/usr/include/bits/syscall.h"

#line 2153 "/usr/include/bits/syscall.h"

#line 2157 "/usr/include/bits/syscall.h"

#line 2161 "/usr/include/bits/syscall.h"

#line 2165 "/usr/include/bits/syscall.h"

#line 2169 "/usr/include/bits/syscall.h"

#line 2173 "/usr/include/bits/syscall.h"

#line 2177 "/usr/include/bits/syscall.h"

#line 2181 "/usr/include/bits/syscall.h"

#line 2185 "/usr/include/bits/syscall.h"

#line 2189 "/usr/include/bits/syscall.h"

#line 2193 "/usr/include/bits/syscall.h"

#line 2197 "/usr/include/bits/syscall.h"

#line 2201 "/usr/include/bits/syscall.h"

#line 2205 "/usr/include/bits/syscall.h"

#line 2209 "/usr/include/bits/syscall.h"

#line 2213 "/usr/include/bits/syscall.h"

#line 2217 "/usr/include/bits/syscall.h"

#line 2221 "/usr/include/bits/syscall.h"

#line 2225 "/usr/include/bits/syscall.h"

#line 2229 "/usr/include/bits/syscall.h"

#line 2233 "/usr/include/bits/syscall.h"

#line 2237 "/usr/include/bits/syscall.h"

#line 2241 "/usr/include/bits/syscall.h"

#line 2245 "/usr/include/bits/syscall.h"

#line 2249 "/usr/include/bits/syscall.h"

#line 2253 "/usr/include/bits/syscall.h"

#line 2257 "/usr/include/bits/syscall.h"

#line 2261 "/usr/include/bits/syscall.h"

#line 2265 "/usr/include/bits/syscall.h"

#line 2269 "/usr/include/bits/syscall.h"

#line 2273 "/usr/include/bits/syscall.h"

#line 2277 "/usr/include/bits/syscall.h"

#line 2281 "/usr/include/bits/syscall.h"

#line 2285 "/usr/include/bits/syscall.h"

#line 2289 "/usr/include/bits/syscall.h"

#line 2293 "/usr/include/bits/syscall.h"

#line 2297 "/usr/include/bits/syscall.h"

#line 2301 "/usr/include/bits/syscall.h"

#line 2305 "/usr/include/bits/syscall.h"

#line 2309 "/usr/include/bits/syscall.h"

#line 2313 "/usr/include/bits/syscall.h"

#line 2317 "/usr/include/bits/syscall.h"

#line 2321 "/usr/include/bits/syscall.h"

#line 2325 "/usr/include/bits/syscall.h"

#line 2329 "/usr/include/bits/syscall.h"

#line 2333 "/usr/include/bits/syscall.h"

#line 2337 "/usr/include/bits/syscall.h"

#line 2341 "/usr/include/bits/syscall.h"

#line 2345 "/usr/include/bits/syscall.h"

#line 2349 "/usr/include/bits/syscall.h"

#line 2353 "/usr/include/bits/syscall.h"

#line 2357 "/usr/include/bits/syscall.h"

#line 2361 "/usr/include/bits/syscall.h"

#line 2365 "/usr/include/bits/syscall.h"

#line 2369 "/usr/include/bits/syscall.h"

#line 2373 "/usr/include/bits/syscall.h"

#line 2377 "/usr/include/bits/syscall.h"

#line 2381 "/usr/include/bits/syscall.h"

#line 2385 "/usr/include/bits/syscall.h"

#line 2389 "/usr/include/bits/syscall.h"

#line 2393 "/usr/include/bits/syscall.h"

#line 2397 "/usr/include/bits/syscall.h"

#line 2401 "/usr/include/bits/syscall.h"

#line 2405 "/usr/include/bits/syscall.h"

#line 2409 "/usr/include/bits/syscall.h"

#line 2413 "/usr/include/bits/syscall.h"

#line 2417 "/usr/include/bits/syscall.h"

#line 2421 "/usr/include/bits/syscall.h"

#line 2425 "/usr/include/bits/syscall.h"

#line 2429 "/usr/include/bits/syscall.h"

#line 2433 "/usr/include/bits/syscall.h"

#line 2437 "/usr/include/bits/syscall.h"

#line 2441 "/usr/include/bits/syscall.h"

#line 2445 "/usr/include/bits/syscall.h"

#line 2449 "/usr/include/bits/syscall.h"

#line 2453 "/usr/include/bits/syscall.h"

#line 2457 "/usr/include/bits/syscall.h"

#line 2461 "/usr/include/bits/syscall.h"

#line 2465 "/usr/include/bits/syscall.h"

#line 2469 "/usr/include/bits/syscall.h"

#line 2473 "/usr/include/bits/syscall.h"

#line 2477 "/usr/include/bits/syscall.h"

#line 2481 "/usr/include/bits/syscall.h"

#line 2485 "/usr/include/bits/syscall.h"

#line 2489 "/usr/include/bits/syscall.h"

#line 2493 "/usr/include/bits/syscall.h"

#line 2497 "/usr/include/bits/syscall.h"

#line 2501 "/usr/include/bits/syscall.h"

#line 2505 "/usr/include/bits/syscall.h"

#line 2509 "/usr/include/bits/syscall.h"

#line 2513 "/usr/include/bits/syscall.h"

#line 2517 "/usr/include/bits/syscall.h"

#line 2521 "/usr/include/bits/syscall.h"

#line 2525 "/usr/include/bits/syscall.h"

#line 2529 "/usr/include/bits/syscall.h"

#line 2533 "/usr/include/bits/syscall.h"

#line 2537 "/usr/include/bits/syscall.h"

#line 2541 "/usr/include/bits/syscall.h"

#line 2545 "/usr/include/bits/syscall.h"

#line 2549 "/usr/include/bits/syscall.h"

#line 2553 "/usr/include/bits/syscall.h"

#line 2557 "/usr/include/bits/syscall.h"

#line 2561 "/usr/include/bits/syscall.h"

#line 2565 "/usr/include/bits/syscall.h"

#line 2569 "/usr/include/bits/syscall.h"

#line 2573 "/usr/include/bits/syscall.h"

#line 2577 "/usr/include/bits/syscall.h"

#line 2581 "/usr/include/bits/syscall.h"

#line 2585 "/usr/include/bits/syscall.h"

#line 2589 "/usr/include/bits/syscall.h"

#line 2593 "/usr/include/bits/syscall.h"

#line 2597 "/usr/include/bits/syscall.h"

#line 2601 "/usr/include/bits/syscall.h"

#line 2605 "/usr/include/bits/syscall.h"

#line 2609 "/usr/include/bits/syscall.h"

#line 2613 "/usr/include/bits/syscall.h"

#line 2617 "/usr/include/bits/syscall.h"

#line 2621 "/usr/include/bits/syscall.h"

#line 2625 "/usr/include/bits/syscall.h"

#line 2629 "/usr/include/bits/syscall.h"

#line 2633 "/usr/include/bits/syscall.h"
#line 30 "/usr/include/sys/syscall.h"
#line 2 "/usr/include/syscall.h"
#line 96 "all.nc"
#line 1 "/usr/include/sysexits.h"































#line 34 "/usr/include/sysexits.h"


























































#line 93 "/usr/include/sysexits.h"

#line 95 "/usr/include/sysexits.h"

#line 111 "/usr/include/sysexits.h"

#line 113 "/usr/include/sysexits.h"
#line 97 "all.nc"
#line 1 "/usr/include/syslog.h"
#line 1 "/usr/include/sys/syslog.h"































#line 34 "/usr/include/sys/syslog.h"

#line 1 "/usr/include/features.h"
















#line 36 "/usr/include/sys/syslog.h"
#line 1 "/usr/lib/clang/21/include/stdarg.h"





















#line 45 "/usr/lib/clang/21/include/stdarg.h"

#line 1 "/usr/lib/clang/21/include/__stdarg___gnuc_va_list.h"








#line 48 "/usr/lib/clang/21/include/stdarg.h"
#line 50 "/usr/lib/clang/21/include/stdarg.h"

#line 55 "/usr/lib/clang/21/include/stdarg.h"

#line 60 "/usr/lib/clang/21/include/stdarg.h"

#line 65 "/usr/lib/clang/21/include/stdarg.h"

#line 70 "/usr/lib/clang/21/include/stdarg.h"
#line 38 "/usr/include/sys/syslog.h"


#line 1 "/usr/include/bits/syslog-path.h"


















#line 22 "/usr/include/bits/syslog-path.h"

#line 25 "/usr/include/bits/syslog-path.h"

#line 27 "/usr/include/bits/syslog-path.h"
#line 41 "/usr/include/sys/syslog.h"










#line 59 "/usr/include/sys/syslog.h"

#line 61 "/usr/include/sys/syslog.h"
				
#line 64 "/usr/include/sys/syslog.h"

#line 91 "/usr/include/sys/syslog.h"


#line 105 "/usr/include/sys/syslog.h"

	
#line 115 "/usr/include/sys/syslog.h"

#line 118 "/usr/include/sys/syslog.h"
				
#line 120 "/usr/include/sys/syslog.h"

#line 149 "/usr/include/sys/syslog.h"




#line 155 "/usr/include/sys/syslog.h"







#line 168 "/usr/include/sys/syslog.h"







extern void closelog (void);





extern void openlog (const char *__ident, int __option, int __facility);


extern int setlogmask (int __mask) ;





extern void syslog (int __pri, const char *__fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));

#line 194 "/usr/include/sys/syslog.h"






extern void vsyslog (int __pri, const char *__fmt, __gnuc_va_list __ap)
     __attribute__ ((__format__ (__printf__, 2, 0)));
#line 203 "/usr/include/sys/syslog.h"



#line 1 "/usr/include/bits/floatn.h"

















#line 210 "/usr/include/sys/syslog.h"
#line 214 "/usr/include/sys/syslog.h"


#line 2 "/usr/include/syslog.h"
#line 98 "all.nc"
#line 1 "/usr/include/tar.h"


















#line 21 "/usr/include/tar.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/tar.h"


















































#line 87 "/usr/include/tar.h"





#line 101 "/usr/include/tar.h"
 


#line 106 "/usr/include/tar.h"


#line 110 "/usr/include/tar.h"
#line 99 "all.nc"
#line 1 "/usr/include/term.h"









































#line 44 "/usr/include/term.h"

#line 47 "/usr/include/term.h"

#line 1 "/usr/include/ncurses_dll.h"





























#line 49 "/usr/include/term.h"

#line 53 "/usr/include/term.h"





#line 76 "/usr/include/term.h"

#line 79 "/usr/include/term.h"

#line 82 "/usr/include/term.h"

#line 85 "/usr/include/term.h"

#line 88 "/usr/include/term.h"

#line 91 "/usr/include/term.h"




#line 98 "/usr/include/term.h"



#line 102 "/usr/include/term.h"

#line 105 "/usr/include/term.h"

#line 1 "/usr/include/termios.h"




















#line 107 "/usr/include/term.h"
#line 108 "/usr/include/term.h"

#line 140 "/usr/include/term.h"

#line 144 "/usr/include/term.h"

#line 152 "/usr/include/term.h"

#line 156 "/usr/include/term.h"

#line 158 "/usr/include/term.h"


#line 161 "/usr/include/term.h"

#line 626 "/usr/include/term.h"

#line 630 "/usr/include/term.h"


#line 634 "/usr/include/term.h"


#line 639 "/usr/include/term.h"

#line 675 "/usr/include/term.h"





#line 683 "/usr/include/term.h"


#line 686 "/usr/include/term.h"

typedef struct termtype {	
    char  *term_names;		
    char  *str_table;		
    char  *Booleans;	
    short *Numbers;		
    char  **Strings;		

#line 695 "/usr/include/term.h"
    char  *ext_str_table;	
    char  **ext_Names;		

    unsigned short num_Booleans;
    unsigned short num_Numbers;	
    unsigned short num_Strings;	

    unsigned short ext_Booleans;
    unsigned short ext_Numbers;	
    unsigned short ext_Strings;	
#line 706 "/usr/include/term.h"

} TERMTYPE;









#line 746 "/usr/include/term.h"

typedef struct term {		
    TERMTYPE	type;		
} TERMINAL;

#line 752 "/usr/include/term.h"


#line 761 "/usr/include/term.h"
extern  TERMINAL * cur_term;
#line 763 "/usr/include/term.h"


#line 787 "/usr/include/term.h"

extern  const char * const boolnames[];
extern  const char * const boolcodes[];
extern  const char * const boolfnames[];
extern  const char * const numnames[];
extern  const char * const numcodes[];
extern  const char * const numfnames[];
extern  const char * const strnames[];
extern  const char * const strcodes[];
extern  const char * const strfnames[];

#line 799 "/usr/include/term.h"




#line 816 "/usr/include/term.h"




extern  TERMINAL *  set_curterm (TERMINAL *);
extern  int  del_curterm (TERMINAL *);


extern  int  restartterm (const char *, int, int *);
extern  int  setupterm (const char *,int,int *);


#line 847 "/usr/include/term.h"


#line 850 "/usr/include/term.h"
extern  char *  tgetstr (const char *, char **);
extern  char *  tgoto (const char *, int, int);
extern  int  tgetent (char *, const char *);
extern  int  tgetflag (const char *);
extern  int  tgetnum (const char *);
extern  int  tputs (const char *, int, int (*)(int));
#line 857 "/usr/include/term.h"




#line 862 "/usr/include/term.h"

extern  char *   tigetstr_sp (SCREEN*, const char *);
extern  int      putp_sp (SCREEN*, const char *);
extern  int      tigetflag_sp (SCREEN*, const char *);
extern  int      tigetnum_sp (SCREEN*, const char *);


#line 870 "/usr/include/term.h"
extern  char *   tparm_sp (SCREEN*, const char *, ...);	
#line 874 "/usr/include/term.h"


extern  char *   tgetstr_sp (SCREEN*, const char *, char **);
extern  char *   tgoto_sp (SCREEN*, const char *, int, int);
extern  int      tgetent_sp (SCREEN*, char *, const char *);
extern  int      tgetflag_sp (SCREEN*, const char *);
extern  int      tgetnum_sp (SCREEN*, const char *);
extern  int      tputs_sp (SCREEN*, const char *, int, NCURSES_OUTC_sp);

extern  TERMINAL *  set_curterm_sp (SCREEN*, TERMINAL *);
extern  int      del_curterm_sp (SCREEN*, TERMINAL *);

extern  int      restartterm_sp (SCREEN*, const char *, int, int *);
#line 888 "/usr/include/term.h"




extern   void     exit_terminfo(int);

#line 897 "/usr/include/term.h"
#line 100 "all.nc"
#line 1 "/usr/include/term_entry.h"









































#line 44 "/usr/include/term_entry.h"


#line 49 "/usr/include/term_entry.h"

#line 1 "/usr/include/curses.h"




































#line 51 "/usr/include/term_entry.h"
#line 1 "/usr/include/term.h"








































#line 52 "/usr/include/term_entry.h"




#line 67 "/usr/include/term_entry.h"

#line 69 "/usr/include/term_entry.h"

#line 73 "/usr/include/term_entry.h"

#line 79 "/usr/include/term_entry.h"

#line 83 "/usr/include/term_entry.h"





#line 204 "/usr/include/term_entry.h"

#line 208 "/usr/include/term_entry.h"


#line 101 "all.nc"
#line 1 "/usr/include/termcap.h"




































#line 39 "/usr/include/termcap.h"

#line 42 "/usr/include/termcap.h"

#line 1 "/usr/include/ncurses_dll.h"





























#line 44 "/usr/include/termcap.h"

#line 49 "/usr/include/termcap.h"

#line 1 "/usr/include/sys/types.h"




















#line 51 "/usr/include/termcap.h"

#line 54 "/usr/include/termcap.h"

extern  char PC;
extern  char * UP;
extern  char * BC;
extern  unsigned ospeed;

#line 68 "/usr/include/termcap.h"

#line 72 "/usr/include/termcap.h"
#line 102 "all.nc"
#line 1 "/usr/include/termios.h"




















#line 103 "all.nc"
#line 1 "/usr/include/tgmath.h"





















#line 24 "/usr/include/tgmath.h"

#line 1 "/usr/include/bits/libc-header-start.h"


























#line 30 "/usr/include/bits/libc-header-start.h"

#line 32 "/usr/include/bits/libc-header-start.h"

#line 1 "/usr/include/features.h"
















#line 34 "/usr/include/bits/libc-header-start.h"



#line 43 "/usr/include/bits/libc-header-start.h"























#line 84 "/usr/include/bits/libc-header-start.h"





#line 101 "/usr/include/bits/libc-header-start.h"


#line 27 "/usr/include/tgmath.h"


#line 1 "/usr/include/bits/floatn.h"

















#line 30 "/usr/include/tgmath.h"
#line 1 "/usr/include/math.h"





















#line 31 "/usr/include/tgmath.h"
#line 1 "/usr/include/complex.h"




















#line 32 "/usr/include/tgmath.h"

















#line 51 "/usr/include/tgmath.h"

#line 53 "/usr/include/tgmath.h"




#line 74 "/usr/include/tgmath.h"

#line 147 "/usr/include/tgmath.h"

#line 154 "/usr/include/tgmath.h"









#line 164 "/usr/include/tgmath.h"





#line 179 "/usr/include/tgmath.h"


#line 182 "/usr/include/tgmath.h"


#line 185 "/usr/include/tgmath.h"





#line 191 "/usr/include/tgmath.h"


#line 194 "/usr/include/tgmath.h"




#line 199 "/usr/include/tgmath.h"


#line 202 "/usr/include/tgmath.h"




#line 207 "/usr/include/tgmath.h"




#line 212 "/usr/include/tgmath.h"




#line 217 "/usr/include/tgmath.h"



#line 229 "/usr/include/tgmath.h"

#line 233 "/usr/include/tgmath.h"







#line 255 "/usr/include/tgmath.h"

#line 257 "/usr/include/tgmath.h"




#line 285 "/usr/include/tgmath.h"

#line 288 "/usr/include/tgmath.h"

#line 290 "/usr/include/tgmath.h"

#line 292 "/usr/include/tgmath.h"

#line 295 "/usr/include/tgmath.h"

#line 299 "/usr/include/tgmath.h"

#line 303 "/usr/include/tgmath.h"

#line 306 "/usr/include/tgmath.h"

#line 309 "/usr/include/tgmath.h"

#line 312 "/usr/include/tgmath.h"



#line 316 "/usr/include/tgmath.h"

#line 318 "/usr/include/tgmath.h"



#line 324 "/usr/include/tgmath.h"

#line 326 "/usr/include/tgmath.h"


#line 330 "/usr/include/tgmath.h"

#line 336 "/usr/include/tgmath.h"















#line 396 "/usr/include/tgmath.h"








#line 405 "/usr/include/tgmath.h"

#line 407 "/usr/include/tgmath.h"

#line 409 "/usr/include/tgmath.h"

#line 411 "/usr/include/tgmath.h"


#line 414 "/usr/include/tgmath.h"

#line 416 "/usr/include/tgmath.h"

#line 418 "/usr/include/tgmath.h"

#line 420 "/usr/include/tgmath.h"

#line 422 "/usr/include/tgmath.h"

#line 424 "/usr/include/tgmath.h"

#line 426 "/usr/include/tgmath.h"

#line 428 "/usr/include/tgmath.h"


#line 431 "/usr/include/tgmath.h"

#line 433 "/usr/include/tgmath.h"

#line 436 "/usr/include/tgmath.h"




#line 441 "/usr/include/tgmath.h"

#line 443 "/usr/include/tgmath.h"

#line 445 "/usr/include/tgmath.h"


#line 448 "/usr/include/tgmath.h"

#line 450 "/usr/include/tgmath.h"

#line 452 "/usr/include/tgmath.h"





#line 458 "/usr/include/tgmath.h"


#line 461 "/usr/include/tgmath.h"


#line 464 "/usr/include/tgmath.h"


#line 467 "/usr/include/tgmath.h"


#line 474 "/usr/include/tgmath.h"


#line 477 "/usr/include/tgmath.h"


#line 480 "/usr/include/tgmath.h"


#line 483 "/usr/include/tgmath.h"


#line 486 "/usr/include/tgmath.h"


#line 489 "/usr/include/tgmath.h"

#line 491 "/usr/include/tgmath.h"

#line 493 "/usr/include/tgmath.h"


#line 496 "/usr/include/tgmath.h"


#line 499 "/usr/include/tgmath.h"


#line 502 "/usr/include/tgmath.h"


#line 505 "/usr/include/tgmath.h"


#line 509 "/usr/include/tgmath.h"





#line 515 "/usr/include/tgmath.h"


#line 518 "/usr/include/tgmath.h"


#line 521 "/usr/include/tgmath.h"


#line 524 "/usr/include/tgmath.h"

#line 526 "/usr/include/tgmath.h"

#line 528 "/usr/include/tgmath.h"


#line 531 "/usr/include/tgmath.h"


#line 534 "/usr/include/tgmath.h"


#line 537 "/usr/include/tgmath.h"


#line 541 "/usr/include/tgmath.h"





#line 547 "/usr/include/tgmath.h"


#line 550 "/usr/include/tgmath.h"


#line 553 "/usr/include/tgmath.h"


#line 556 "/usr/include/tgmath.h"



#line 560 "/usr/include/tgmath.h"



#line 564 "/usr/include/tgmath.h"



#line 568 "/usr/include/tgmath.h"




#line 573 "/usr/include/tgmath.h"



#line 578 "/usr/include/tgmath.h"



#line 583 "/usr/include/tgmath.h"



#line 587 "/usr/include/tgmath.h"


#line 593 "/usr/include/tgmath.h"




#line 598 "/usr/include/tgmath.h"

#line 600 "/usr/include/tgmath.h"

#line 602 "/usr/include/tgmath.h"

#line 605 "/usr/include/tgmath.h"


#line 609 "/usr/include/tgmath.h"


#line 612 "/usr/include/tgmath.h"


#line 617 "/usr/include/tgmath.h"


#line 620 "/usr/include/tgmath.h"


#line 623 "/usr/include/tgmath.h"


#line 626 "/usr/include/tgmath.h"



#line 630 "/usr/include/tgmath.h"

#line 638 "/usr/include/tgmath.h"

#line 640 "/usr/include/tgmath.h"


#line 644 "/usr/include/tgmath.h"



#line 648 "/usr/include/tgmath.h"

#line 650 "/usr/include/tgmath.h"

#line 652 "/usr/include/tgmath.h"

#line 654 "/usr/include/tgmath.h"

#line 656 "/usr/include/tgmath.h"

#line 658 "/usr/include/tgmath.h"

#line 660 "/usr/include/tgmath.h"


#line 664 "/usr/include/tgmath.h"

#line 666 "/usr/include/tgmath.h"

#line 668 "/usr/include/tgmath.h"


#line 672 "/usr/include/tgmath.h"

#line 674 "/usr/include/tgmath.h"

#line 676 "/usr/include/tgmath.h"


#line 679 "/usr/include/tgmath.h"


#line 682 "/usr/include/tgmath.h"


#line 685 "/usr/include/tgmath.h"


#line 688 "/usr/include/tgmath.h"


#line 691 "/usr/include/tgmath.h"


#line 694 "/usr/include/tgmath.h"


#line 698 "/usr/include/tgmath.h"





#line 704 "/usr/include/tgmath.h"


#line 707 "/usr/include/tgmath.h"


#line 710 "/usr/include/tgmath.h"





#line 716 "/usr/include/tgmath.h"


#line 719 "/usr/include/tgmath.h"




#line 724 "/usr/include/tgmath.h"


#line 728 "/usr/include/tgmath.h"


#line 732 "/usr/include/tgmath.h"


#line 736 "/usr/include/tgmath.h"


#line 740 "/usr/include/tgmath.h"


#line 744 "/usr/include/tgmath.h"


#line 748 "/usr/include/tgmath.h"

#line 750 "/usr/include/tgmath.h"

#line 752 "/usr/include/tgmath.h"

#line 761 "/usr/include/tgmath.h"

#line 770 "/usr/include/tgmath.h"

#line 779 "/usr/include/tgmath.h"

#line 788 "/usr/include/tgmath.h"

#line 797 "/usr/include/tgmath.h"

#line 799 "/usr/include/tgmath.h"
#line 104 "all.nc"
#line 1 "/usr/include/thread_db.h"


















#line 21 "/usr/include/thread_db.h"




#line 1 "/usr/include/pthread.h"
















#line 26 "/usr/include/thread_db.h"
#line 1 "/usr/include/stdint.h"




















#line 27 "/usr/include/thread_db.h"
#line 1 "/usr/include/sys/types.h"




















#line 28 "/usr/include/thread_db.h"
#line 1 "/usr/include/sys/procfs.h"


















#line 29 "/usr/include/thread_db.h"



typedef enum
{
  TD_OK,	  
  TD_ERR,	  
  TD_NOTHR,	  
  TD_NOSV,	  
  TD_NOLWP,	  
  TD_BADPH,	  
  TD_BADTH,	  
  TD_BADSH,	  
  TD_BADTA,	  
  TD_BADKEY,	  
  TD_NOMSG,	  
  TD_NOFPREGS,	  
  TD_NOLIBTHREAD, 
  TD_NOEVENT,	  
  TD_NOCAPAB,	  
  TD_DBERR,	  
  TD_NOAPLIC,	  
  TD_NOTSD,	  
  TD_MALLOC,	  
  TD_PARTIALREG,  
  TD_NOXREGS,	  
  TD_TLSDEFER,	  
  TD_NOTALLOC = TD_TLSDEFER,
  TD_VERSION,	  
  TD_NOTLS	  
} td_err_e;




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



typedef enum
{
  TD_THR_ANY_TYPE,
  TD_THR_USER,
  TD_THR_SYSTEM
} td_thr_type_e;





typedef struct td_thragent td_thragent_t;


typedef struct td_thrhandle
{
  td_thragent_t *th_ta_p;
  psaddr_t th_unique;
} td_thrhandle_t;



struct link_map;



#line 107 "/usr/include/thread_db.h"


#line 113 "/usr/include/thread_db.h"


typedef struct td_thr_events
{
  uint32_t event_bits[2];
} td_thr_events_t;


#line 123 "/usr/include/thread_db.h"

#line 125 "/usr/include/thread_db.h"

#line 127 "/usr/include/thread_db.h"

#line 136 "/usr/include/thread_db.h"


typedef enum
{
  TD_ALL_EVENTS,		 
  TD_EVENT_NONE = TD_ALL_EVENTS, 
  TD_READY,			 
  TD_SLEEP,			 
  TD_SWITCHTO,			 
  TD_SWITCHFROM,		 
  TD_LOCK_TRY,			 
  TD_CATCHSIG,			 
  TD_IDLE,			 
  TD_CREATE,			 
  TD_DEATH,			 
  TD_PREEMPT,			 
  TD_PRI_INHERIT,		 
  TD_REAP,			 
  TD_CONCURRENCY,		 
  TD_TIMEOUT,			 
  TD_MIN_EVENT_NUM = TD_READY,
  TD_MAX_EVENT_NUM = TD_TIMEOUT,
  TD_EVENTS_ENABLE = 31		
} td_event_e;


typedef enum
{
  NOTIFY_BPT,			
  NOTIFY_AUTOBPT,		

  NOTIFY_SYSCALL		
} td_notify_e;


typedef struct td_notify
{
  td_notify_e type;		
  union
  {
    psaddr_t bptaddr;		
    int syscallno;		
  } u;
} td_notify_t;


typedef struct td_event_msg
{
  td_event_e event;		
  const td_thrhandle_t *th_p;	
  union
  {
#line 191 "/usr/include/thread_db.h"
    uintptr_t data;		
  } msg;
} td_event_msg_t;


typedef struct
{
  td_thr_events_t eventmask;	
  td_event_e eventnum;		
  void *eventdata;		
} td_eventbuf_t;



typedef struct td_ta_stats
{
  int nthreads;       		
  int r_concurrency;		
  int nrunnable_num;		
  int nrunnable_den;		
  int a_concurrency_num;	
  int a_concurrency_den;	
  int nlwps_num;		

  int nlwps_den;		

  int nidle_num;		

  int nidle_den;		

} td_ta_stats_t;




typedef pthread_t thread_t;
typedef pthread_key_t thread_key_t;



typedef int td_thr_iter_f (const td_thrhandle_t *, void *);


typedef int td_key_iter_f (thread_key_t, void (*) (void *), void *);




struct ps_prochandle;



typedef struct td_thrinfo
{
  td_thragent_t *ti_ta_p;		
  unsigned int ti_user_flags;		
  thread_t ti_tid;			

  char *ti_tls;				
  psaddr_t ti_startfunc;		

  psaddr_t ti_stkbase;			
  long int ti_stksize;			
  psaddr_t ti_ro_area;			
  int ti_ro_size;			
  td_thr_state_e ti_state;		
  unsigned char ti_db_suspended;	
  td_thr_type_e ti_type;		

  intptr_t ti_pc;			
  intptr_t ti_sp;			
  short int ti_flags;			
  int ti_pri;				
  lwpid_t ti_lid;			
  sigset_t ti_sigmask;			
  unsigned char ti_traceme;		

  unsigned char ti_preemptflag;		
  unsigned char ti_pirecflag;		
  sigset_t ti_pending;			
  td_thr_events_t ti_events;		
} td_thrinfo_t;






extern td_err_e td_init (void);


extern td_err_e td_log (void);


extern const char **td_symbol_list (void);


extern td_err_e td_ta_new (struct ps_prochandle *__ps, td_thragent_t **__ta);


extern td_err_e td_ta_delete (td_thragent_t *__ta);


extern td_err_e td_ta_get_nthreads (const td_thragent_t *__ta, int *__np);



extern td_err_e td_ta_get_ph (const td_thragent_t *__ta,
			      struct ps_prochandle **__ph);



extern td_err_e td_ta_map_id2thr (const td_thragent_t *__ta, pthread_t __pt,
				  td_thrhandle_t *__th);



extern td_err_e td_ta_map_lwp2thr (const td_thragent_t *__ta, lwpid_t __lwpid,
				   td_thrhandle_t *__th);




extern td_err_e td_ta_thr_iter (const td_thragent_t *__ta,
				td_thr_iter_f *__callback, void *__cbdata_p,
				td_thr_state_e __state, int __ti_pri,
				sigset_t *__ti_sigmask_p,
				unsigned int __ti_user_flags);


extern td_err_e td_ta_tsd_iter (const td_thragent_t *__ta, td_key_iter_f *__ki,
				void *__p);



extern td_err_e td_ta_event_addr (const td_thragent_t *__ta,
				  td_event_e __event, td_notify_t *__ptr);


extern td_err_e td_ta_set_event (const td_thragent_t *__ta,
				 td_thr_events_t *__event);


extern td_err_e td_ta_clear_event (const td_thragent_t *__ta,
				   td_thr_events_t *__event);


extern td_err_e td_ta_event_getmsg (const td_thragent_t *__ta,
				    td_event_msg_t *__msg);



extern td_err_e td_ta_setconcurrency (const td_thragent_t *__ta, int __level);



extern td_err_e td_ta_enable_stats (const td_thragent_t *__ta, int __enable);


extern td_err_e td_ta_reset_stats (const td_thragent_t *__ta);


extern td_err_e td_ta_get_stats (const td_thragent_t *__ta,
				 td_ta_stats_t *__statsp);



extern td_err_e td_thr_validate (const td_thrhandle_t *__th);


extern td_err_e td_thr_get_info (const td_thrhandle_t *__th,
				 td_thrinfo_t *__infop);


extern td_err_e td_thr_getfpregs (const td_thrhandle_t *__th,
				  prfpregset_t *__regset);


extern td_err_e td_thr_getgregs (const td_thrhandle_t *__th,
				 prgregset_t __gregs);


extern td_err_e td_thr_getxregs (const td_thrhandle_t *__th, void *__xregs);


extern td_err_e td_thr_getxregsize (const td_thrhandle_t *__th, int *__sizep);


extern td_err_e td_thr_setfpregs (const td_thrhandle_t *__th,
				  const prfpregset_t *__fpregs);


extern td_err_e td_thr_setgregs (const td_thrhandle_t *__th,
				 prgregset_t __gregs);


extern td_err_e td_thr_setxregs (const td_thrhandle_t *__th,
				 const void *__addr);



extern td_err_e td_thr_tlsbase (const td_thrhandle_t *__th,
				unsigned long int __modid,
				psaddr_t *__base);


extern td_err_e td_thr_tls_get_addr (const td_thrhandle_t *__th,
				     psaddr_t __map_address, size_t __offset,
				     psaddr_t *__address);



extern td_err_e td_thr_event_enable (const td_thrhandle_t *__th, int __event);


extern td_err_e td_thr_set_event (const td_thrhandle_t *__th,
				  td_thr_events_t *__event);


extern td_err_e td_thr_clear_event (const td_thrhandle_t *__th,
				    td_thr_events_t *__event);


extern td_err_e td_thr_event_getmsg (const td_thrhandle_t *__th,
				     td_event_msg_t *__msg);



extern td_err_e td_thr_setprio (const td_thrhandle_t *__th, int __prio);



extern td_err_e td_thr_setsigpending (const td_thrhandle_t *__th,
				      unsigned char __n, const sigset_t *__ss);


extern td_err_e td_thr_sigsetmask (const td_thrhandle_t *__th,
				   const sigset_t *__ss);



extern td_err_e td_thr_tsd (const td_thrhandle_t *__th,
			    const thread_key_t __tk, void **__data);



extern td_err_e td_thr_dbsuspend (const td_thrhandle_t *__th);


extern td_err_e td_thr_dbresume (const td_thrhandle_t *__th);
#line 105 "all.nc"
#line 1 "/usr/include/threads.h"


















#line 21 "/usr/include/threads.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/threads.h"
#line 1 "/usr/include/time.h"




















#line 24 "/usr/include/threads.h"



#line 1 "/usr/include/bits/thread-shared-types.h"

















#line 28 "/usr/include/threads.h"
#line 1 "/usr/include/bits/types/struct_timespec.h"
#line 29 "/usr/include/threads.h"

#line 33 "/usr/include/threads.h"

#line 35 "/usr/include/threads.h"
typedef __tss_t tss_t;
typedef void (*tss_dtor_t) (void*);

typedef __thrd_t thrd_t;
typedef int (*thrd_start_t) (void*);


enum
{
  thrd_success  = 0,
  thrd_busy     = 1,
  thrd_error    = 2,
  thrd_nomem    = 3,
  thrd_timedout = 4
};


enum
{
  mtx_plain     = 0,
  mtx_recursive = 1,
  mtx_timed     = 2
};

typedef __once_flag once_flag;
#line 61 "/usr/include/threads.h"

typedef union
{
  char __size[40];
  long int __align ;
} mtx_t;

typedef union
{
  char __size[48];
  long long int __align ;
} cnd_t;






extern int thrd_create (thrd_t *__thr, thrd_start_t __func, void *__arg);


extern int thrd_equal (thrd_t __lhs, thrd_t __rhs);


extern thrd_t thrd_current (void);





#line 92 "/usr/include/threads.h"
extern int thrd_sleep (const struct timespec *__time_point,
		       struct timespec *__remaining);
#line 103 "/usr/include/threads.h"



extern void thrd_exit (int __res) __attribute__ ((__noreturn__));



extern int thrd_detach (thrd_t __thr);



extern int thrd_join (thrd_t __thr, int *__res);




extern void thrd_yield (void);

#line 129 "/usr/include/threads.h"






extern int mtx_init (mtx_t *__mutex, int __type);



extern int mtx_lock (mtx_t *__mutex);




#line 145 "/usr/include/threads.h"
extern int mtx_timedlock (mtx_t *__restrict __mutex,
			  const struct timespec *__restrict __time_point);
#line 157 "/usr/include/threads.h"




extern int mtx_trylock (mtx_t *__mutex);



extern int mtx_unlock (mtx_t *__mutex);


extern void mtx_destroy (mtx_t *__mutex);




extern void call_once (once_flag *__flag, void (*__func)(void));





extern int cnd_init (cnd_t *__cond);



extern int cnd_signal (cnd_t *__cond);



extern int cnd_broadcast (cnd_t *__cond);


extern int cnd_wait (cnd_t *__cond, mtx_t *__mutex);




#line 196 "/usr/include/threads.h"
extern int cnd_timedwait (cnd_t *__restrict __cond,
			  mtx_t *__restrict __mutex,
			  const struct timespec *__restrict __time_point);
#line 210 "/usr/include/threads.h"



extern void cnd_destroy (cnd_t *__COND);







extern int tss_create (tss_t *__tss_id, tss_dtor_t __destructor);



extern void *tss_get (tss_t __tss_id);



extern int tss_set (tss_t __tss_id, void *__val);



extern void tss_delete (tss_t __tss_id);


#line 106 "all.nc"
#line 1 "/usr/include/time.h"




















#line 107 "all.nc"
#line 1 "/usr/include/ttyent.h"































#line 34 "/usr/include/ttyent.h"

#line 1 "/usr/include/features.h"
















#line 36 "/usr/include/ttyent.h"

#line 38 "/usr/include/ttyent.h"

#line 43 "/usr/include/ttyent.h"

struct ttyent {
	char	*ty_name;	
	char	*ty_getty;	
	char	*ty_type;	
#line 50 "/usr/include/ttyent.h"
	int	ty_status;	
	char 	*ty_window;	
	char	*ty_comment;	
};




extern struct ttyent *getttyent (void) ;
extern struct ttyent *getttynam (const char *__tty) ;
extern int setttyent (void) ;
extern int endttyent (void) ;


#line 108 "all.nc"
#line 1 "/usr/include/uchar.h"






















#line 25 "/usr/include/uchar.h"

#line 1 "/usr/include/features.h"
















#line 27 "/usr/include/uchar.h"

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
#line 30 "/usr/include/uchar.h"

#line 1 "/usr/include/bits/types.h"





















#line 32 "/usr/include/uchar.h"
#line 1 "/usr/include/bits/types/mbstate_t.h"
#line 33 "/usr/include/uchar.h"



#line 42 "/usr/include/uchar.h"

typedef unsigned char char8_t;
#line 48 "/usr/include/uchar.h"

#line 50 "/usr/include/uchar.h"

typedef __uint_least16_t char16_t;
typedef __uint_least32_t char32_t;
#line 54 "/usr/include/uchar.h"






#line 61 "/usr/include/uchar.h"


extern size_t mbrtoc8  (char8_t *__restrict __pc8,
			const char *__restrict __s, size_t __n,
			mbstate_t *__restrict __p) ;


extern size_t c8rtomb  (char *__restrict __s, char8_t __c8,
			mbstate_t *__restrict __ps) ;
#line 71 "/usr/include/uchar.h"



extern size_t mbrtoc16 (char16_t *__restrict __pc16,
			const char *__restrict __s, size_t __n,
			mbstate_t *__restrict __p) ;


extern size_t c16rtomb (char *__restrict __s, char16_t __c16,
			mbstate_t *__restrict __ps) ;





extern size_t mbrtoc32 (char32_t *__restrict __pc32,
			const char *__restrict __s, size_t __n,
			mbstate_t *__restrict __p) ;


extern size_t c32rtomb (char *__restrict __s, char32_t __c32,
			mbstate_t *__restrict __ps) ;


#line 109 "all.nc"
#line 1 "/usr/include/ucontext.h"



















#line 22 "/usr/include/ucontext.h"

#line 1 "/usr/include/features.h"
















#line 24 "/usr/include/ucontext.h"


#line 1 "/usr/include/bits/indirect-return.h"


















#line 22 "/usr/include/bits/indirect-return.h"



#line 27 "/usr/include/ucontext.h"


#line 1 "/usr/include/sys/ucontext.h"
















#line 30 "/usr/include/ucontext.h"




extern int getcontext (ucontext_t *__ucp) ;


extern int setcontext (const ucontext_t *__ucp) ;



extern int swapcontext (ucontext_t *__restrict __oucp,
			const ucontext_t *__restrict __ucp)
   ;







extern void makecontext (ucontext_t *__ucp, void (*__func) (void),
			 int __argc, ...) ;


#line 110 "all.nc"
#line 1 "/usr/include/ulimit.h"

















#line 20 "/usr/include/ulimit.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/ulimit.h"



enum
{
  UL_GETFSIZE = 1,			

#line 30 "/usr/include/ulimit.h"
  UL_SETFSIZE,				

#line 33 "/usr/include/ulimit.h"
  __UL_GETMAXBRK,			

  __UL_GETOPENMAX			

};





extern long int ulimit (int __cmd, ...) ;


#line 111 "all.nc"
#line 1 "/usr/include/unctrl.h"











































#line 112 "all.nc"
#line 1 "/usr/include/unistd.h"




















#line 113 "all.nc"
#line 1 "/usr/include/utime.h"





















#line 24 "/usr/include/utime.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/utime.h"



#line 1 "/usr/include/bits/types.h"





















#line 30 "/usr/include/utime.h"

#line 1 "/usr/include/bits/types/time_t.h"
#line 33 "/usr/include/utime.h"
#line 34 "/usr/include/utime.h"


struct utimbuf
  {
#line 42 "/usr/include/utime.h"
    __time_t actime;		
    __time_t modtime;		
#line 45 "/usr/include/utime.h"
  };



#line 50 "/usr/include/utime.h"
extern int utime (const char *__file,
		  const struct utimbuf *__file_times)
      ;

#line 63 "/usr/include/utime.h"


#line 114 "all.nc"
#line 1 "/usr/include/utmp.h"
















#line 115 "all.nc"
#line 1 "/usr/include/utmpx.h"

















#line 20 "/usr/include/utmpx.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/utmpx.h"
#line 1 "/usr/include/sys/time.h"
















#line 23 "/usr/include/utmpx.h"


#line 29 "/usr/include/utmpx.h"


#line 1 "/usr/include/bits/utmpx.h"


















#line 22 "/usr/include/bits/utmpx.h"

#line 1 "/usr/include/bits/types.h"





















#line 24 "/usr/include/bits/utmpx.h"
#line 1 "/usr/include/sys/time.h"
















#line 25 "/usr/include/bits/utmpx.h"
#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 26 "/usr/include/bits/utmpx.h"


#line 1 "/usr/include/paths.h"






























#line 30 "/usr/include/bits/utmpx.h"
#line 33 "/usr/include/bits/utmpx.h"


#line 38 "/usr/include/bits/utmpx.h"




struct __exit_status
  {
#line 45 "/usr/include/bits/utmpx.h"
    short int e_termination;	
    short int e_exit;		
#line 51 "/usr/include/bits/utmpx.h"
  };



struct utmpx
{
  short int ut_type;		
  __pid_t ut_pid;		
  char ut_line[32]
    ;	
  char ut_id[4]
    ;	
  char ut_user[32]
    ;	
  char ut_host[256]
    ;	
  struct __exit_status ut_exit;	





#line 74 "/usr/include/bits/utmpx.h"
  __int32_t ut_session;		
  struct
  {
    __uint32_t tv_sec;		
    __int32_t tv_usec;		
  } ut_tv;			
#line 84 "/usr/include/bits/utmpx.h"
  __int32_t ut_addr_v6[4];	
  char __glibc_reserved[20];		
};



#line 91 "/usr/include/bits/utmpx.h"

#line 98 "/usr/include/bits/utmpx.h"

#line 103 "/usr/include/bits/utmpx.h"
#line 32 "/usr/include/utmpx.h"

#line 34 "/usr/include/utmpx.h"

#line 40 "/usr/include/utmpx.h"


#line 43 "/usr/include/utmpx.h"
struct utmp;
#line 45 "/usr/include/utmpx.h"








extern void setutxent (void);





extern void endutxent (void);





extern struct utmpx *getutxent (void);





extern struct utmpx *getutxid (const struct utmpx *__id);





extern struct utmpx *getutxline (const struct utmpx *__line);





extern struct utmpx *pututxline (const struct utmpx *__utmpx);


#line 87 "/usr/include/utmpx.h"






extern int utmpxname (const char *__file);







extern void updwtmpx (const char *__wtmpx_file,
		      const struct utmpx *__utmpx);








extern void getutmp (const struct utmpx *__utmpx,
		     struct utmp *__utmp);







extern void getutmpx (const struct utmp *__utmp, struct utmpx *__utmpx);
#line 122 "/usr/include/utmpx.h"


#line 116 "all.nc"
#line 1 "/usr/include/values.h"





















#line 24 "/usr/include/values.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/values.h"

#line 1 "/usr/include/limits.h"





















#line 116 "/usr/include/limits.h"

 




#line 126 "/usr/include/limits.h"




#line 141 "/usr/include/limits.h"




#line 180 "/usr/include/limits.h"




#line 192 "/usr/include/limits.h"

#line 194 "/usr/include/limits.h"

#line 1 "/usr/include/bits/posix1_lim.h"






















#line 196 "/usr/include/limits.h"
#line 197 "/usr/include/limits.h"

#line 1 "/usr/include/bits/posix2_lim.h"




















#line 200 "/usr/include/limits.h"
#line 201 "/usr/include/limits.h"

#line 1 "/usr/include/bits/xopen_lim.h"



























#line 204 "/usr/include/limits.h"
#line 28 "/usr/include/values.h"

#line 30 "/usr/include/values.h"

#line 38 "/usr/include/values.h"

#line 42 "/usr/include/values.h"

#line 46 "/usr/include/values.h"

#line 49 "/usr/include/values.h"


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
#line 52 "/usr/include/values.h"

#line 61 "/usr/include/values.h"


#line 64 "/usr/include/values.h"

#line 67 "/usr/include/values.h"
#line 117 "all.nc"
#line 1 "/usr/include/wait.h"
#line 1 "/usr/include/sys/wait.h"





















#line 24 "/usr/include/sys/wait.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/sys/wait.h"



#line 1 "/usr/include/bits/types.h"





















#line 30 "/usr/include/sys/wait.h"
#line 34 "/usr/include/sys/wait.h"

#line 1 "/usr/include/signal.h"




















#line 37 "/usr/include/sys/wait.h"
#line 38 "/usr/include/sys/wait.h"

#line 44 "/usr/include/sys/wait.h"


#line 64 "/usr/include/sys/wait.h"

#line 71 "/usr/include/sys/wait.h"


#line 1 "/usr/include/bits/types/idtype_t.h"
#line 3 "/usr/include/bits/types/idtype_t.h"


typedef enum
{
  P_ALL,		
  P_PID,		
  P_PGID,		
  P_PIDFD,		

} idtype_t;
#line 75 "/usr/include/sys/wait.h"
#line 76 "/usr/include/sys/wait.h"







extern __pid_t wait (int *__stat_loc);

#line 86 "/usr/include/sys/wait.h"

#line 90 "/usr/include/sys/wait.h"
















extern __pid_t waitpid (__pid_t __pid, int *__stat_loc, int __options);

#line 113 "/usr/include/sys/wait.h"

#line 1 "/usr/include/bits/types/siginfo_t.h"
#line 115 "/usr/include/sys/wait.h"












extern int waitid (idtype_t __idtype, __id_t __id, siginfo_t *__infop,
		   int __options);
#line 130 "/usr/include/sys/wait.h"

#line 132 "/usr/include/sys/wait.h"


struct rusage;






#line 142 "/usr/include/sys/wait.h"
extern __pid_t wait3 (int *__stat_loc, int __options,
		      struct rusage * __usage) ;
#line 154 "/usr/include/sys/wait.h"

#line 157 "/usr/include/sys/wait.h"

extern __pid_t wait4 (__pid_t __pid, int *__stat_loc, int __options,
		      struct rusage *__usage) ;
#line 170 "/usr/include/sys/wait.h"



#line 2 "/usr/include/wait.h"
#line 118 "all.nc"
#line 1 "/usr/include/wchar.h"





















#line 119 "all.nc"
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


#line 120 "all.nc"
#line 1 "/usr/include/wordexp.h"

















#line 20 "/usr/include/wordexp.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/wordexp.h"
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
#line 24 "/usr/include/wordexp.h"




enum
  {
    WRDE_DOOFFS = (1 << 0),	
    WRDE_APPEND = (1 << 1),	
    WRDE_NOCMD = (1 << 2),	
    WRDE_REUSE = (1 << 3),	
    WRDE_SHOWERR = (1 << 4),	
    WRDE_UNDEF = (1 << 5),	
    __WRDE_FLAGS = (WRDE_DOOFFS | WRDE_APPEND | WRDE_NOCMD
		    | WRDE_REUSE | WRDE_SHOWERR | WRDE_UNDEF)
  };


typedef struct
  {
    size_t we_wordc;		
    char **we_wordv;		
    size_t we_offs;		
  } wordexp_t;


enum
  {
#line 52 "/usr/include/wordexp.h"
    WRDE_NOSYS = -1,		
#line 54 "/usr/include/wordexp.h"
    WRDE_NOSPACE = 1,		
    WRDE_BADCHAR,		
    WRDE_BADVAL,		
    WRDE_CMDSUB,		
    WRDE_SYNTAX			
  };


extern int wordexp (const char *__restrict __words,
		    wordexp_t *__restrict __pwordexp, int __flags);


extern void wordfree (wordexp_t *__wordexp) ;


#line 121 "all.nc"
#line 1 "/usr/include/fstab.h"































#line 34 "/usr/include/fstab.h"

#line 1 "/usr/include/features.h"
















#line 36 "/usr/include/fstab.h"












#line 50 "/usr/include/fstab.h"

#line 56 "/usr/include/fstab.h"

struct fstab
  {
    char *fs_spec;			
    char *fs_file;			
    char *fs_vfstype;			
    char *fs_mntops;			
    const char *fs_type;		
    int	fs_freq;			
    int	fs_passno;			
  };




extern struct fstab *getfsent (void) ;
extern struct fstab *getfsspec (const char *__name) ;
extern struct fstab *getfsfile (const char *__name) ;
extern int setfsent (void) ;
extern void endfsent (void) ;


#line 122 "all.nc"
#line 1 "/usr/include/link.h"



















#line 22 "/usr/include/link.h"

#line 1 "/usr/include/features.h"
















#line 24 "/usr/include/link.h"
#line 1 "/usr/include/elf.h"

















#line 25 "/usr/include/link.h"
#line 1 "/usr/include/dlfcn.h"

















#line 26 "/usr/include/link.h"
#line 1 "/usr/include/sys/types.h"




















#line 27 "/usr/include/link.h"



#line 33 "/usr/include/link.h"

#line 1 "/usr/include/bits/elfclass.h"




#line 8 "/usr/include/bits/elfclass.h"

#line 1 "/usr/include/bits/wordsize.h"


#line 10 "/usr/include/bits/wordsize.h"

#line 12 "/usr/include/bits/wordsize.h"

#line 14 "/usr/include/bits/wordsize.h"
#line 10 "/usr/include/bits/elfclass.h"

#line 12 "/usr/include/bits/elfclass.h"


typedef uint32_t Elf_Symndx;
#line 35 "/usr/include/link.h"
#line 1 "/usr/include/bits/link.h"

















#line 21 "/usr/include/bits/link.h"


#line 65 "/usr/include/bits/link.h"


#line 74 "/usr/include/bits/link.h"
typedef float La_x86_64_xmm __attribute__ ((__mode__ (__V4SF__)));
#line 76 "/usr/include/bits/link.h"

typedef union
{
#line 83 "/usr/include/bits/link.h"
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
#line 99 "/usr/include/bits/link.h"
  __int128_t __glibc_unused1[4];
#line 101 "/usr/include/bits/link.h"
} La_x86_64_regs;


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
#line 115 "/usr/include/bits/link.h"
  __int128_t __glibc_unused1;
  __int128_t __glibc_unused2;
#line 118 "/usr/include/bits/link.h"
} La_x86_64_retval;

#line 122 "/usr/include/bits/link.h"



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


#line 36 "/usr/include/link.h"




struct r_debug
  {
    
    int r_version;

    struct link_map *r_map;	

    




    Elf64_Addr r_brk;
    enum
      {
	

	RT_CONSISTENT,		
	RT_ADD,			
	RT_DELETE		
      } r_state;

    Elf64_Addr r_ldbase;	
  };


extern struct r_debug _r_debug;







struct r_debug_extended
  {
    struct r_debug base;

    

    


    struct r_debug_extended *r_next;
  };








extern Elf64_Dyn _DYNAMIC[];







struct link_map
  {
    


    Elf64_Addr l_addr;		

    char *l_name;		
    Elf64_Dyn *l_ld;		
    struct link_map *l_next, *l_prev; 
  };

#line 114 "/usr/include/link.h"


#line 1 "/usr/include/bits/link_lavcurrent.h"



















#line 23 "/usr/include/bits/link_lavcurrent.h"

#line 117 "/usr/include/link.h"


enum
  {
    LA_ACT_CONSISTENT,		
    LA_ACT_ADD,			
    LA_ACT_DELETE		
  };


enum
  {
    LA_SER_ORIG = 0x01,		
    LA_SER_LIBPATH = 0x02,	
    LA_SER_RUNPATH = 0x04,	
    LA_SER_CONFIG = 0x08,	
    LA_SER_DEFAULT = 0x40,	
    LA_SER_SECURE = 0x80	
  };


enum
  {
    LA_FLG_BINDTO = 0x01,	
    LA_FLG_BINDFROM = 0x02	
  };


enum
  {
    LA_SYMB_NOPLTENTER = 0x01,	
    LA_SYMB_NOPLTEXIT = 0x02,	
    LA_SYMB_STRUCTCALL = 0x04,	
    LA_SYMB_DLSYM = 0x08,	
    LA_SYMB_ALTVALUE = 0x10	

  };

struct dl_phdr_info
  {
    Elf64_Addr dlpi_addr;
    const char *dlpi_name;
    const Elf64_Phdr *dlpi_phdr;
    Elf64_Half dlpi_phnum;

    




    
    unsigned long long int dlpi_adds;
    
    unsigned long long int dlpi_subs;

    

    size_t dlpi_tls_modid;

    


    void *dlpi_tls_data;
  };



extern int dl_iterate_phdr (int (*__callback) (struct dl_phdr_info *,
					       size_t, void *),
			    void *__data);





extern unsigned int la_version (unsigned int __version);
extern void la_activity (uintptr_t *__cookie, unsigned int __flag);
extern char *la_objsearch (const char *__name, uintptr_t *__cookie,
			   unsigned int __flag);
extern unsigned int la_objopen (struct link_map *__map, Lmid_t __lmid,
				uintptr_t *__cookie);
extern void la_preinit (uintptr_t *__cookie);
extern uintptr_t la_symbind32 (Elf32_Sym *__sym, unsigned int __ndx,
			       uintptr_t *__refcook, uintptr_t *__defcook,
			       unsigned int *__flags, const char *__symname);
extern uintptr_t la_symbind64 (Elf64_Sym *__sym, unsigned int __ndx,
			       uintptr_t *__refcook, uintptr_t *__defcook,
			       unsigned int *__flags, const char *__symname);
extern unsigned int la_objclose (uintptr_t *__cookie);



#line 210 "/usr/include/link.h"
#line 123 "all.nc"

//#include <etip.h>
//#include <cursesapp.h>
//#include <cursesf.h>
//#include <cursesm.h>
//#include <cursesp.h>
//#include <cursesw.h>
//#include <cursslk.h>
