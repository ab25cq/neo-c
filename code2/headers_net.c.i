#line 1 "headers_net.c"
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

#line 1 "/usr/include/arpa/inet.h"

















#line 20 "/usr/include/arpa/inet.h"

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

#line 22 "/usr/include/arpa/inet.h"
#line 1 "/usr/include/netinet/in.h"

















#line 20 "/usr/include/netinet/in.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/netinet/in.h"
#line 1 "/usr/include/bits/stdint-uintn.h"


















#line 21 "/usr/include/bits/stdint-uintn.h"

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
#line 23 "/usr/include/bits/stdint-uintn.h"

typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
#line 23 "/usr/include/netinet/in.h"
#line 1 "/usr/include/sys/socket.h"


















#line 21 "/usr/include/sys/socket.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/sys/socket.h"



#line 1 "/usr/include/bits/types/struct_iovec.h"


















#line 21 "/usr/include/bits/types/struct_iovec.h"

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
#line 24 "/usr/include/bits/types/struct_iovec.h"


struct iovec
  {
    void *iov_base;	
    size_t iov_len;	
  };
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


#line 23 "/usr/include/arpa/inet.h"


#line 29 "/usr/include/arpa/inet.h"





extern in_addr_t inet_addr (const char *__cp) ;


extern in_addr_t inet_lnaof (struct in_addr __in) ;



extern struct in_addr inet_makeaddr (in_addr_t __net, in_addr_t __host)
     ;


extern in_addr_t inet_netof (struct in_addr __in) ;



extern in_addr_t inet_network (const char *__cp) ;



extern char *inet_ntoa (struct in_addr __in) ;




extern int inet_pton (int __af, const char *__restrict __cp,
		      void *__restrict __buf) ;




extern const char *inet_ntop (int __af, const void *__restrict __cp,
			      char *__restrict __buf, socklen_t __len)
     ;



#line 71 "/usr/include/arpa/inet.h"


extern int inet_aton (const char *__cp, struct in_addr *__inp) ;



extern char *inet_neta (in_addr_t __net, char *__buf, size_t __len) 
  __attribute__ ((__deprecated__));




extern char *inet_net_ntop (int __af, const void *__cp, int __bits,
			    char *__buf, size_t __len) ;




extern int inet_net_pton (int __af, const char *__cp,
			  void *__buf, size_t __len) ;




extern unsigned int inet_nsap_addr (const char *__cp,
				    unsigned char *__buf, int __len) ;



extern char *inet_nsap_ntoa (int __len, const unsigned char *__cp,
			     char *__buf) ;
#line 103 "/usr/include/arpa/inet.h"

#line 108 "/usr/include/arpa/inet.h"


#line 4 "headers_net.c"
#line 1 "/usr/include/netdb.h"
  




















#line 24 "/usr/include/netdb.h"

#line 1 "/usr/include/features.h"
















#line 26 "/usr/include/netdb.h"

#line 1 "/usr/include/netinet/in.h"
















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


#line 5 "headers_net.c"
#line 1 "/usr/include/net/ethernet.h"




















#line 23 "/usr/include/net/ethernet.h"

#line 1 "/usr/include/sys/types.h"




















#line 25 "/usr/include/net/ethernet.h"
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
#line 26 "/usr/include/net/ethernet.h"

#line 1 "/usr/include/linux/if_ether.h"





















#line 24 "/usr/include/linux/if_ether.h"

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
#line 26 "/usr/include/linux/if_ether.h"






#line 39 "/usr/include/linux/if_ether.h"

#line 42 "/usr/include/linux/if_ether.h"





#line 122 "/usr/include/linux/if_ether.h"

#line 125 "/usr/include/linux/if_ether.h"





#line 162 "/usr/include/linux/if_ether.h"






#line 171 "/usr/include/linux/if_ether.h"

#line 173 "/usr/include/linux/if_ether.h"
struct ethhdr {
	unsigned char	h_dest[6];	
	unsigned char	h_source[6];	
	__be16		h_proto;		
} __attribute__((packed));
#line 179 "/usr/include/linux/if_ether.h"

#line 28 "/usr/include/net/ethernet.h"





struct ether_addr
{
  uint8_t ether_addr_octet[6];
} __attribute__ ((__packed__));


struct ether_header
{
  uint8_t  ether_dhost[6];	
  uint8_t  ether_shost[6];	
  uint16_t ether_type;		        
} __attribute__ ((__packed__));


#line 58 "/usr/include/net/ethernet.h"

#line 65 "/usr/include/net/ethernet.h"


#line 68 "/usr/include/net/ethernet.h"






#line 76 "/usr/include/net/ethernet.h"

#line 79 "/usr/include/net/ethernet.h"


#line 6 "headers_net.c"
#line 1 "/usr/include/netinet/in.h"
















#line 7 "headers_net.c"
#line 1 "/usr/include/netinet/ether.h"


















#line 21 "/usr/include/netinet/ether.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/netinet/ether.h"


#line 1 "/usr/include/netinet/if_ether.h"

















#line 19 "/usr/include/netinet/if_ether.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/netinet/if_ether.h"
#line 1 "/usr/include/sys/types.h"




















#line 23 "/usr/include/netinet/if_ether.h"


#line 1 "/usr/include/linux/if_ether.h"




















#line 26 "/usr/include/netinet/if_ether.h"

#line 28 "/usr/include/netinet/if_ether.h"
































#line 1 "/usr/include/net/ethernet.h"



















#line 61 "/usr/include/netinet/if_ether.h"
#line 1 "/usr/include/net/if_arp.h"




















#line 23 "/usr/include/net/if_arp.h"

#line 1 "/usr/include/sys/types.h"




















#line 25 "/usr/include/net/if_arp.h"
#line 1 "/usr/include/sys/socket.h"

















#line 26 "/usr/include/net/if_arp.h"
#line 1 "/usr/include/stdint.h"




















#line 27 "/usr/include/net/if_arp.h"




#line 32 "/usr/include/net/if_arp.h"





#line 44 "/usr/include/net/if_arp.h"








struct arphdr
  {
    unsigned short int ar_hrd;		
    unsigned short int ar_pro;		
    unsigned char ar_hln;		
    unsigned char ar_pln;		
    unsigned short int ar_op;		
#line 67 "/usr/include/net/if_arp.h"
  };



#line 86 "/usr/include/net/if_arp.h"


#line 106 "/usr/include/net/if_arp.h"

#line 133 "/usr/include/net/if_arp.h"

#line 136 "/usr/include/net/if_arp.h"



struct arpreq
  {
    struct sockaddr arp_pa;		
    struct sockaddr arp_ha;		
    int arp_flags;			
    struct sockaddr arp_netmask;	
    char arp_dev[16];
  };

struct arpreq_old
  {
    struct sockaddr arp_pa;		
    struct sockaddr arp_ha;		
    int arp_flags;			
    struct sockaddr arp_netmask;	
  };


#line 165 "/usr/include/net/if_arp.h"



#line 171 "/usr/include/net/if_arp.h"

struct arpd_request
  {
    unsigned short int req;		
    uint32_t ip;			
    unsigned long int dev;		
    unsigned long int stamp;
    unsigned long int updated;
    unsigned char ha[7];	
  };


#line 62 "/usr/include/netinet/if_ether.h"









struct	ether_arp {
	struct	arphdr ea_hdr;		
	uint8_t arp_sha[6];	
	uint8_t arp_spa[4];		
	uint8_t arp_tha[6];	
	uint8_t arp_tpa[4];		
};
#line 83 "/usr/include/netinet/if_ether.h"






#line 90 "/usr/include/netinet/if_ether.h"


#line 93 "/usr/include/netinet/if_ether.h"
#line 26 "/usr/include/netinet/ether.h"

#line 28 "/usr/include/netinet/ether.h"



extern char *ether_ntoa (const struct ether_addr *__addr) ;
extern char *ether_ntoa_r (const struct ether_addr *__addr, char *__buf)
     ;


extern struct ether_addr *ether_aton (const char *__asc) ;
extern struct ether_addr *ether_aton_r (const char *__asc,
					struct ether_addr *__addr) ;


extern int ether_ntohost (char *__hostname, const struct ether_addr *__addr)
     ;


extern int ether_hostton (const char *__hostname, struct ether_addr *__addr)
     ;


extern int ether_line (const char *__line, struct ether_addr *__addr,
		       char *__hostname) ;


#line 54 "/usr/include/netinet/ether.h"
#line 8 "headers_net.c"
#line 1 "/usr/include/netinet/igmp.h"

















#line 20 "/usr/include/netinet/igmp.h"

#line 1 "/usr/include/sys/cdefs.h"

















#line 22 "/usr/include/netinet/igmp.h"
#line 1 "/usr/include/sys/types.h"




















#line 23 "/usr/include/netinet/igmp.h"

#line 25 "/usr/include/netinet/igmp.h"

#line 1 "/usr/include/netinet/in.h"
















#line 27 "/usr/include/netinet/igmp.h"







































struct igmp {
  uint8_t igmp_type;             
  uint8_t igmp_code;             
  uint16_t igmp_cksum;           
  struct in_addr igmp_group;     
};

#line 74 "/usr/include/netinet/igmp.h"




#line 82 "/usr/include/netinet/igmp.h"

#line 86 "/usr/include/netinet/igmp.h"

#line 90 "/usr/include/netinet/igmp.h"

#line 92 "/usr/include/netinet/igmp.h"
						
						
#line 95 "/usr/include/netinet/igmp.h"
						




#line 105 "/usr/include/netinet/igmp.h"




#line 111 "/usr/include/netinet/igmp.h"






#line 121 "/usr/include/netinet/igmp.h"



#line 125 "/usr/include/netinet/igmp.h"
#line 9 "headers_net.c"
#line 1 "/usr/include/netinet/tcp.h"































#line 34 "/usr/include/netinet/tcp.h"

#line 1 "/usr/include/features.h"
















#line 36 "/usr/include/netinet/tcp.h"




#line 83 "/usr/include/netinet/tcp.h"

#line 87 "/usr/include/netinet/tcp.h"

#line 1 "/usr/include/sys/types.h"




















#line 90 "/usr/include/netinet/tcp.h"
#line 1 "/usr/include/sys/socket.h"

















#line 91 "/usr/include/netinet/tcp.h"
#line 1 "/usr/include/stdint.h"




















#line 92 "/usr/include/netinet/tcp.h"

typedef	uint32_t tcp_seq;




struct tcphdr
  {
    union
    {
      struct
      {
	uint16_t th_sport;	
	uint16_t th_dport;	
	tcp_seq th_seq;		
	tcp_seq th_ack;		
#line 109 "/usr/include/netinet/tcp.h"
	uint8_t th_x2:4;	
	uint8_t th_off:4;	
#line 116 "/usr/include/netinet/tcp.h"
	uint8_t th_flags;
#line 123 "/usr/include/netinet/tcp.h"
	uint16_t th_win;	
	uint16_t th_sum;	
	uint16_t th_urp;	
      };
      struct
      {
	uint16_t source;
	uint16_t dest;
	uint32_t seq;
	uint32_t ack_seq;
#line 134 "/usr/include/netinet/tcp.h"
	uint16_t res1:4;
	uint16_t doff:4;
	uint16_t fin:1;
	uint16_t syn:1;
	uint16_t rst:1;
	uint16_t psh:1;
	uint16_t ack:1;
	uint16_t urg:1;
	uint16_t res2:2;
#line 156 "/usr/include/netinet/tcp.h"
	uint16_t window;
	uint16_t check;
	uint16_t urg_ptr;
      };
    };
};

enum
{
  TCP_ESTABLISHED = 1,
  TCP_SYN_SENT,
  TCP_SYN_RECV,
  TCP_FIN_WAIT1,
  TCP_FIN_WAIT2,
  TCP_TIME_WAIT,
  TCP_CLOSE,
  TCP_CLOSE_WAIT,
  TCP_LAST_ACK,
  TCP_LISTEN,
  TCP_CLOSING   
};

#line 190 "/usr/include/netinet/tcp.h"

#line 192 "/usr/include/netinet/tcp.h"







#line 200 "/usr/include/netinet/tcp.h"

#line 202 "/usr/include/netinet/tcp.h"

#line 204 "/usr/include/netinet/tcp.h"

#line 206 "/usr/include/netinet/tcp.h"


#line 216 "/usr/include/netinet/tcp.h"



enum tcp_ca_state
{
  TCP_CA_Open = 0,
  TCP_CA_Disorder = 1,
  TCP_CA_CWR = 2,
  TCP_CA_Recovery = 3,
  TCP_CA_Loss = 4
};

struct tcp_info
{
  uint8_t	tcpi_state;
  uint8_t	tcpi_ca_state;
  uint8_t	tcpi_retransmits;
  uint8_t	tcpi_probes;
  uint8_t	tcpi_backoff;
  uint8_t	tcpi_options;
  uint8_t	tcpi_snd_wscale : 4, tcpi_rcv_wscale : 4;

  uint32_t	tcpi_rto;
  uint32_t	tcpi_ato;
  uint32_t	tcpi_snd_mss;
  uint32_t	tcpi_rcv_mss;

  uint32_t	tcpi_unacked;
  uint32_t	tcpi_sacked;
  uint32_t	tcpi_lost;
  uint32_t	tcpi_retrans;
  uint32_t	tcpi_fackets;

  
  uint32_t	tcpi_last_data_sent;
  uint32_t	tcpi_last_ack_sent;	
  uint32_t	tcpi_last_data_recv;
  uint32_t	tcpi_last_ack_recv;

  
  uint32_t	tcpi_pmtu;
  uint32_t	tcpi_rcv_ssthresh;
  uint32_t	tcpi_rtt;
  uint32_t	tcpi_rttvar;
  uint32_t	tcpi_snd_ssthresh;
  uint32_t	tcpi_snd_cwnd;
  uint32_t	tcpi_advmss;
  uint32_t	tcpi_reordering;

  uint32_t	tcpi_rcv_rtt;
  uint32_t	tcpi_rcv_space;

  uint32_t	tcpi_total_retrans;
};



#line 274 "/usr/include/netinet/tcp.h"


#line 278 "/usr/include/netinet/tcp.h"

struct tcp_md5sig
{
  struct sockaddr_storage tcpm_addr;		
  uint8_t	tcpm_flags;			
  uint8_t	tcpm_prefixlen;			
  uint16_t	tcpm_keylen;			
  int		tcpm_ifindex;			
  uint8_t	tcpm_key[80];	
};


struct tcp_repair_opt
{
  uint32_t	opt_code;
  uint32_t	opt_val;
};


enum
{
  TCP_NO_QUEUE,
  TCP_RECV_QUEUE,
  TCP_SEND_QUEUE,
  TCP_QUEUES_NR,
};


#line 309 "/usr/include/netinet/tcp.h"


#line 314 "/usr/include/netinet/tcp.h"


#line 318 "/usr/include/netinet/tcp.h"

#line 321 "/usr/include/netinet/tcp.h"

struct tcp_cookie_transactions
{
  uint16_t	tcpct_flags;
  uint8_t	__tcpct_pad1;
  uint8_t	tcpct_cookie_desired;
  uint16_t	tcpct_s_data_desired;
  uint16_t	tcpct_used;
  uint8_t	tcpct_value[536U];
};


struct tcp_repair_window
{
  uint32_t snd_wl1;
  uint32_t snd_wnd;
  uint32_t max_window;
  uint32_t rcv_wnd;
  uint32_t rcv_wup;
};


struct tcp_zerocopy_receive
{
  uint64_t address; 
  uint32_t length; 
  uint32_t recv_skip_hint; 
};

#line 351 "/usr/include/netinet/tcp.h"
#line 10 "headers_net.c"
#line 1 "/usr/include/sys/socket.h"

















#line 11 "headers_net.c"
#line 1 "/usr/include/sys/un.h"

















#line 20 "/usr/include/sys/un.h"

#line 1 "/usr/include/sys/cdefs.h"

















#line 22 "/usr/include/sys/un.h"


#line 1 "/usr/include/bits/sockaddr.h"





















#line 25 "/usr/include/sys/un.h"




struct __attribute__ ((__may_alias__)) sockaddr_un
  {
    sa_family_t sun_family;
    char sun_path[108];		
  };


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
#line 38 "/usr/include/sys/un.h"
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


#line 39 "/usr/include/sys/un.h"


#line 43 "/usr/include/sys/un.h"


#line 12 "headers_net.c"
#line 1 "/usr/include/ifaddrs.h"


















#line 21 "/usr/include/ifaddrs.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/ifaddrs.h"
#line 1 "/usr/include/sys/socket.h"

















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


#line 14 "headers_net.c"
#line 1 "/usr/include/net/if.h"


















#line 21 "/usr/include/net/if.h"

#line 1 "/usr/include/features.h"
















#line 23 "/usr/include/net/if.h"

#line 1 "/usr/include/sys/types.h"




















#line 26 "/usr/include/net/if.h"
#line 1 "/usr/include/sys/socket.h"

















#line 27 "/usr/include/net/if.h"
#line 28 "/usr/include/net/if.h"



#line 32 "/usr/include/net/if.h"

struct if_nameindex
  {
    unsigned int if_index;	
    char *if_name;		
  };


#line 41 "/usr/include/net/if.h"

enum
  {
    IFF_UP = 0x1,		
#line 46 "/usr/include/net/if.h"
    IFF_BROADCAST = 0x2,	
#line 48 "/usr/include/net/if.h"
    IFF_DEBUG = 0x4,		
#line 50 "/usr/include/net/if.h"
    IFF_LOOPBACK = 0x8,		
#line 52 "/usr/include/net/if.h"
    IFF_POINTOPOINT = 0x10,	
#line 54 "/usr/include/net/if.h"
    IFF_NOTRAILERS = 0x20,	
#line 56 "/usr/include/net/if.h"
    IFF_RUNNING = 0x40,		
#line 58 "/usr/include/net/if.h"
    IFF_NOARP = 0x80,		
#line 60 "/usr/include/net/if.h"
    IFF_PROMISC = 0x100,	
#line 62 "/usr/include/net/if.h"

    
    IFF_ALLMULTI = 0x200,	
#line 66 "/usr/include/net/if.h"

    IFF_MASTER = 0x400,		
#line 69 "/usr/include/net/if.h"
    IFF_SLAVE = 0x800,		
#line 71 "/usr/include/net/if.h"

    IFF_MULTICAST = 0x1000,	
#line 74 "/usr/include/net/if.h"

    IFF_PORTSEL = 0x2000,	
#line 77 "/usr/include/net/if.h"
    IFF_AUTOMEDIA = 0x4000,	
#line 79 "/usr/include/net/if.h"
    IFF_DYNAMIC = 0x8000	
#line 81 "/usr/include/net/if.h"
  };






struct ifaddr
  {
    struct sockaddr ifa_addr;	
    union
      {
	struct sockaddr	ifu_broadaddr;
	struct sockaddr	ifu_dstaddr;
      } ifa_ifu;
    struct iface *ifa_ifp;	
    struct ifaddr *ifa_next;	
  };

#line 102 "/usr/include/net/if.h"









struct ifmap
  {
    unsigned long int mem_start;
    unsigned long int mem_end;
    unsigned short int base_addr;
    unsigned char irq;
    unsigned char dma;
    unsigned char port;
    
  };





struct ifreq
  {
#line 130 "/usr/include/net/if.h"
    union
      {
	char ifrn_name[16];	
      } ifr_ifrn;

    union
      {
	struct sockaddr ifru_addr;
	struct sockaddr ifru_dstaddr;
	struct sockaddr ifru_broadaddr;
	struct sockaddr ifru_netmask;
	struct sockaddr ifru_hwaddr;
	short int ifru_flags;
	int ifru_ivalue;
	int ifru_mtu;
	struct ifmap ifru_map;
	char ifru_slave[16];	
	char ifru_newname[16];
	__caddr_t ifru_data;
      } ifr_ifru;
  };
#line 170 "/usr/include/net/if.h"






struct ifconf
  {
    int	ifc_len;			
    union
      {
	__caddr_t ifcu_buf;
	struct ifreq *ifcu_req;
      } ifc_ifcu;
  };
#line 189 "/usr/include/net/if.h"




extern unsigned int if_nametoindex (const char *__ifname) ;
extern char *if_indextoname (unsigned int __ifindex,
			     char __ifname[16]) 
    ;


extern struct if_nameindex *if_nameindex (void) ;


extern void if_freenameindex (struct if_nameindex *__ptr) ;


#line 17 "headers_net.c"
#line 1 "/usr/include/netpacket/packet.h"


















#line 21 "/usr/include/netpacket/packet.h"

struct sockaddr_ll
  {
    unsigned short int sll_family;
    unsigned short int sll_protocol;
    int sll_ifindex;
    unsigned short int sll_hatype;
    unsigned char sll_pkttype;
    unsigned char sll_halen;
    unsigned char sll_addr[8];
  };



#line 42 "/usr/include/netpacket/packet.h"



#line 68 "/usr/include/netpacket/packet.h"

struct packet_mreq
  {
    int mr_ifindex;
    unsigned short int mr_type;
    unsigned short int mr_alen;
    unsigned char mr_address[8];
  };

#line 81 "/usr/include/netpacket/packet.h"
#line 20 "headers_net.c"
#line 1 "/usr/include/linux/if_packet.h"

#line 4 "/usr/include/linux/if_packet.h"

#line 1 "/usr/include/asm/byteorder.h"

#line 4 "/usr/include/asm/byteorder.h"

#line 1 "/usr/include/linux/byteorder/little_endian.h"

#line 4 "/usr/include/linux/byteorder/little_endian.h"

#line 11 "/usr/include/linux/byteorder/little_endian.h"

#line 1 "/usr/include/linux/stddef.h"
#line 13 "/usr/include/linux/byteorder/little_endian.h"
#line 1 "/usr/include/linux/types.h"
#line 14 "/usr/include/linux/byteorder/little_endian.h"
#line 1 "/usr/include/linux/swab.h"

#line 4 "/usr/include/linux/swab.h"

#line 1 "/usr/include/linux/types.h"
#line 6 "/usr/include/linux/swab.h"
#line 1 "/usr/include/linux/stddef.h"
#line 7 "/usr/include/linux/swab.h"
#line 1 "/usr/include/asm/bitsperlong.h"

#line 14 "/usr/include/asm/bitsperlong.h"
#line 8 "/usr/include/linux/swab.h"
#line 1 "/usr/include/asm/swab.h"

#line 4 "/usr/include/asm/swab.h"

#line 1 "/usr/include/linux/types.h"
#line 6 "/usr/include/asm/swab.h"


static __inline__  __u32 __arch_swab32(__u32 val)
{
	__asm__("bswapl %0" : "=r" (val) : "0" (val));
	return val;
}
#line 14 "/usr/include/asm/swab.h"

static __inline__  __u64 __arch_swab64(__u64 val)
{
#line 31 "/usr/include/asm/swab.h"
	__asm__("bswapq %0" : "=r" (val) : "0" (val));
	return val;
#line 34 "/usr/include/asm/swab.h"
}
#line 36 "/usr/include/asm/swab.h"
#line 9 "/usr/include/linux/swab.h"





#line 15 "/usr/include/linux/swab.h"

#line 17 "/usr/include/linux/swab.h"

#line 19 "/usr/include/linux/swab.h"

#line 21 "/usr/include/linux/swab.h"

#line 23 "/usr/include/linux/swab.h"







static __inline__  __u16 __fswab16(__u16 val)
{
#line 35 "/usr/include/linux/swab.h"
	return ((__u16)(					(((__u16)(val) & (__u16)0x00ffU) << 8) |				(((__u16)(val) & (__u16)0xff00U) >> 8)));
#line 37 "/usr/include/linux/swab.h"
}

static __inline__  __u32 __fswab32(__u32 val)
{
#line 42 "/usr/include/linux/swab.h"
	return __arch_swab32(val);
#line 46 "/usr/include/linux/swab.h"
}

static __inline__  __u64 __fswab64(__u64 val)
{
#line 51 "/usr/include/linux/swab.h"
	return __arch_swab64(val);
#line 59 "/usr/include/linux/swab.h"
}

static __inline__  __u32 __fswahw32(__u32 val)
{
#line 66 "/usr/include/linux/swab.h"
	return ((__u32)(				(((__u32)(val) & (__u32)0x0000ffffUL) << 16) |			(((__u32)(val) & (__u32)0xffff0000UL) >> 16)));
#line 68 "/usr/include/linux/swab.h"
}

static __inline__  __u32 __fswahb32(__u32 val)
{
#line 75 "/usr/include/linux/swab.h"
	return ((__u32)(				(((__u32)(val) & (__u32)0x00ff00ffUL) << 8) |			(((__u32)(val) & (__u32)0xff00ff00UL) >> 8)));
#line 77 "/usr/include/linux/swab.h"
}





#line 88 "/usr/include/linux/swab.h"





#line 98 "/usr/include/linux/swab.h"





#line 108 "/usr/include/linux/swab.h"

static __inline __attribute__ ((__always_inline__)) unsigned long __swab(const unsigned long y)
{
#line 112 "/usr/include/linux/swab.h"
	return (__u64)(__builtin_constant_p(y) ?		((__u64)(					(((__u64)(y) & (__u64)0x00000000000000ffULL) << 56) |		(((__u64)(y) & (__u64)0x000000000000ff00ULL) << 40) |		(((__u64)(y) & (__u64)0x0000000000ff0000ULL) << 24) |		(((__u64)(y) & (__u64)0x00000000ff000000ULL) <<  8) |		(((__u64)(y) & (__u64)0x000000ff00000000ULL) >>  8) |		(((__u64)(y) & (__u64)0x0000ff0000000000ULL) >> 24) |		(((__u64)(y) & (__u64)0x00ff000000000000ULL) >> 40) |		(((__u64)(y) & (__u64)0xff00000000000000ULL) >> 56))) :				__fswab64(y));
#line 116 "/usr/include/linux/swab.h"
}







#line 125 "/usr/include/linux/swab.h"







#line 133 "/usr/include/linux/swab.h"





static __inline __attribute__ ((__always_inline__)) __u16 __swab16p(const __u16 *p)
{
#line 143 "/usr/include/linux/swab.h"
	return (__u16)(__builtin_constant_p(*p) ?		((__u16)(					(((__u16)(*p) & (__u16)0x00ffU) << 8) |				(((__u16)(*p) & (__u16)0xff00U) >> 8))) :				__fswab16(*p));
#line 145 "/usr/include/linux/swab.h"
}





static __inline __attribute__ ((__always_inline__)) __u32 __swab32p(const __u32 *p)
{
#line 156 "/usr/include/linux/swab.h"
	return (__u32)(__builtin_constant_p(*p) ?		((__u32)(					(((__u32)(*p) & (__u32)0x000000ffUL) << 24) |			(((__u32)(*p) & (__u32)0x0000ff00UL) <<  8) |			(((__u32)(*p) & (__u32)0x00ff0000UL) >>  8) |			(((__u32)(*p) & (__u32)0xff000000UL) >> 24))) :				__fswab32(*p));
#line 158 "/usr/include/linux/swab.h"
}





static __inline __attribute__ ((__always_inline__)) __u64 __swab64p(const __u64 *p)
{
#line 169 "/usr/include/linux/swab.h"
	return (__u64)(__builtin_constant_p(*p) ?		((__u64)(					(((__u64)(*p) & (__u64)0x00000000000000ffULL) << 56) |		(((__u64)(*p) & (__u64)0x000000000000ff00ULL) << 40) |		(((__u64)(*p) & (__u64)0x0000000000ff0000ULL) << 24) |		(((__u64)(*p) & (__u64)0x00000000ff000000ULL) <<  8) |		(((__u64)(*p) & (__u64)0x000000ff00000000ULL) >>  8) |		(((__u64)(*p) & (__u64)0x0000ff0000000000ULL) >> 24) |		(((__u64)(*p) & (__u64)0x00ff000000000000ULL) >> 40) |		(((__u64)(*p) & (__u64)0xff00000000000000ULL) >> 56))) :				__fswab64(*p));
#line 171 "/usr/include/linux/swab.h"
}







static __inline__ __u32 __swahw32p(const __u32 *p)
{
#line 184 "/usr/include/linux/swab.h"
	return (__builtin_constant_p((__u32)(*p)) ?		((__u32)(				(((__u32)(*p) & (__u32)0x0000ffffUL) << 16) |			(((__u32)(*p) & (__u32)0xffff0000UL) >> 16))) :			__fswahw32(*p));
#line 186 "/usr/include/linux/swab.h"
}







static __inline__ __u32 __swahb32p(const __u32 *p)
{
#line 199 "/usr/include/linux/swab.h"
	return (__builtin_constant_p((__u32)(*p)) ?		((__u32)(				(((__u32)(*p) & (__u32)0x00ff00ffUL) << 8) |			(((__u32)(*p) & (__u32)0xff00ff00UL) >> 8))) :			__fswahb32(*p));
#line 201 "/usr/include/linux/swab.h"
}





static __inline__ void __swab16s(__u16 *p)
{
#line 212 "/usr/include/linux/swab.h"
	*p = __swab16p(p);
#line 214 "/usr/include/linux/swab.h"
}




static __inline __attribute__ ((__always_inline__)) void __swab32s(__u32 *p)
{
#line 224 "/usr/include/linux/swab.h"
	*p = __swab32p(p);
#line 226 "/usr/include/linux/swab.h"
}





static __inline __attribute__ ((__always_inline__)) void __swab64s(__u64 *p)
{
#line 237 "/usr/include/linux/swab.h"
	*p = __swab64p(p);
#line 239 "/usr/include/linux/swab.h"
}







static __inline__ void __swahw32s(__u32 *p)
{
#line 252 "/usr/include/linux/swab.h"
	*p = __swahw32p(p);
#line 254 "/usr/include/linux/swab.h"
}







static __inline__ void __swahb32s(__u32 *p)
{
#line 267 "/usr/include/linux/swab.h"
	*p = __swahb32p(p);
#line 269 "/usr/include/linux/swab.h"
}

#line 15 "/usr/include/linux/byteorder/little_endian.h"

#line 44 "/usr/include/linux/byteorder/little_endian.h"

static __inline __attribute__ ((__always_inline__)) __le64 __cpu_to_le64p(const __u64 *p)
{
	return (__le64)*p;
}
static __inline __attribute__ ((__always_inline__)) __u64 __le64_to_cpup(const __le64 *p)
{
	return (__u64)*p;
}
static __inline __attribute__ ((__always_inline__)) __le32 __cpu_to_le32p(const __u32 *p)
{
	return (__le32)*p;
}
static __inline __attribute__ ((__always_inline__)) __u32 __le32_to_cpup(const __le32 *p)
{
	return (__u32)*p;
}
static __inline __attribute__ ((__always_inline__)) __le16 __cpu_to_le16p(const __u16 *p)
{
	return (__le16)*p;
}
static __inline __attribute__ ((__always_inline__)) __u16 __le16_to_cpup(const __le16 *p)
{
	return (__u16)*p;
}
static __inline __attribute__ ((__always_inline__)) __be64 __cpu_to_be64p(const __u64 *p)
{
	return (__be64)__swab64p(p);
}
static __inline __attribute__ ((__always_inline__)) __u64 __be64_to_cpup(const __be64 *p)
{
	return __swab64p((__u64 *)p);
}
static __inline __attribute__ ((__always_inline__)) __be32 __cpu_to_be32p(const __u32 *p)
{
	return (__be32)__swab32p(p);
}
static __inline __attribute__ ((__always_inline__)) __u32 __be32_to_cpup(const __be32 *p)
{
	return __swab32p((__u32 *)p);
}
static __inline __attribute__ ((__always_inline__)) __be16 __cpu_to_be16p(const __u16 *p)
{
	return (__be16)__swab16p(p);
}
static __inline __attribute__ ((__always_inline__)) __u16 __be16_to_cpup(const __be16 *p)
{
	return __swab16p((__u16 *)p);
}
#line 105 "/usr/include/linux/byteorder/little_endian.h"

#line 6 "/usr/include/asm/byteorder.h"
#line 6 "/usr/include/linux/if_packet.h"
#line 1 "/usr/include/linux/types.h"
#line 7 "/usr/include/linux/if_packet.h"

struct sockaddr_pkt {
	unsigned short spkt_family;
	unsigned char spkt_device[14];
	__be16 spkt_protocol;
};

struct sockaddr_ll {
	unsigned short	sll_family;
	__be16		sll_protocol;
	int		sll_ifindex;
	unsigned short	sll_hatype;
	unsigned char	sll_pkttype;
	unsigned char	sll_halen;
	unsigned char	sll_addr[8];
};



#line 34 "/usr/include/linux/if_packet.h"

#line 36 "/usr/include/linux/if_packet.h"



#line 42 "/usr/include/linux/if_packet.h"

#line 63 "/usr/include/linux/if_packet.h"

#line 76 "/usr/include/linux/if_packet.h"

struct tpacket_stats {
	unsigned int	tp_packets;
	unsigned int	tp_drops;
};

struct tpacket_stats_v3 {
	unsigned int	tp_packets;
	unsigned int	tp_drops;
	unsigned int	tp_freeze_q_cnt;
};

struct tpacket_rollover_stats {
	__u64 __attribute__((aligned(8)))	tp_all;
	__u64 __attribute__((aligned(8)))	tp_huge;
	__u64 __attribute__((aligned(8)))	tp_failed;
};

union tpacket_stats_u {
	struct tpacket_stats stats1;
	struct tpacket_stats_v3 stats3;
};

struct tpacket_auxdata {
	__u32		tp_status;
	__u32		tp_len;
	__u32		tp_snaplen;
	__u16		tp_mac;
	__u16		tp_net;
	__u16		tp_vlan_tci;
	__u16		tp_vlan_tpid;
};


#line 120 "/usr/include/linux/if_packet.h"


#line 126 "/usr/include/linux/if_packet.h"


#line 131 "/usr/include/linux/if_packet.h"


#line 134 "/usr/include/linux/if_packet.h"

struct tpacket_hdr {
	unsigned long	tp_status;
	unsigned int	tp_len;
	unsigned int	tp_snaplen;
	unsigned short	tp_mac;
	unsigned short	tp_net;
	unsigned int	tp_sec;
	unsigned int	tp_usec;
};

#line 148 "/usr/include/linux/if_packet.h"

struct tpacket2_hdr {
	__u32		tp_status;
	__u32		tp_len;
	__u32		tp_snaplen;
	__u16		tp_mac;
	__u16		tp_net;
	__u32		tp_sec;
	__u32		tp_nsec;
	__u16		tp_vlan_tci;
	__u16		tp_vlan_tpid;
	__u8		tp_padding[4];
};

struct tpacket_hdr_variant1 {
	__u32	tp_rxhash;
	__u32	tp_vlan_tci;
	__u16	tp_vlan_tpid;
	__u16	tp_padding;
};

struct tpacket3_hdr {
	__u32		tp_next_offset;
	__u32		tp_sec;
	__u32		tp_nsec;
	__u32		tp_snaplen;
	__u32		tp_len;
	__u32		tp_status;
	__u16		tp_mac;
	__u16		tp_net;
	
	union {
		struct tpacket_hdr_variant1 hv1;
	};
	__u8		tp_padding[8];
};

struct tpacket_bd_ts {
	unsigned int ts_sec;
	union {
		unsigned int ts_usec;
		unsigned int ts_nsec;
	};
};

struct tpacket_hdr_v1 {
	__u32	block_status;
	__u32	num_pkts;
	__u32	offset_to_first_pkt;

	


	__u32	blk_len;

	








	__u64 __attribute__((aligned(8)))	seq_num;

	
























	struct tpacket_bd_ts	ts_first_pkt, ts_last_pkt;
};

union tpacket_bd_header_u {
	struct tpacket_hdr_v1 bh1;
};

struct tpacket_block_desc {
	__u32 version;
	__u32 offset_to_priv;
	union tpacket_bd_header_u hdr;
};

#line 254 "/usr/include/linux/if_packet.h"

enum tpacket_versions {
	TPACKET_V1,
	TPACKET_V2,
	TPACKET_V3
};















struct tpacket_req {
	unsigned int	tp_block_size;	
	unsigned int	tp_block_nr;	
	unsigned int	tp_frame_size;	
	unsigned int	tp_frame_nr;	
};

struct tpacket_req3 {
	unsigned int	tp_block_size;	
	unsigned int	tp_block_nr;	
	unsigned int	tp_frame_size;	
	unsigned int	tp_frame_nr;	
	unsigned int	tp_retire_blk_tov; 
	unsigned int	tp_sizeof_priv; 
	unsigned int	tp_feature_req_word;
};

union tpacket_req_u {
	struct tpacket_req	req;
	struct tpacket_req3	req3;
};

struct packet_mreq {
	int		mr_ifindex;
	unsigned short	mr_type;
	unsigned short	mr_alen;
	unsigned char	mr_address[8];
};

struct fanout_args {
#line 306 "/usr/include/linux/if_packet.h"
	__u16		id;
	__u16		type_flags;
#line 312 "/usr/include/linux/if_packet.h"
	__u32		max_num_members;
};

#line 319 "/usr/include/linux/if_packet.h"
#line 23 "headers_net.c"
#line 1 "/usr/include/netinet/ip_icmp.h"

















#line 20 "/usr/include/netinet/ip_icmp.h"

#line 1 "/usr/include/sys/types.h"




















#line 22 "/usr/include/netinet/ip_icmp.h"
#line 1 "/usr/include/stdint.h"




















#line 23 "/usr/include/netinet/ip_icmp.h"



struct icmphdr
{
  uint8_t type;		
  uint8_t code;		
  uint16_t checksum;
  union
  {
    struct
    {
      uint16_t	id;
      uint16_t	sequence;
    } echo;			
    uint32_t	gateway;	
    struct
    {
      uint16_t	__glibc_reserved;
      uint16_t	mtu;
    } frag;			
  } un;
};

#line 61 "/usr/include/netinet/ip_icmp.h"



#line 81 "/usr/include/netinet/ip_icmp.h"


#line 87 "/usr/include/netinet/ip_icmp.h"


#line 91 "/usr/include/netinet/ip_icmp.h"


#line 99 "/usr/include/netinet/ip_icmp.h"


#line 109 "/usr/include/netinet/ip_icmp.h"


#line 112 "/usr/include/netinet/ip_icmp.h"































#line 1 "/usr/include/netinet/in.h"
















#line 144 "/usr/include/netinet/ip_icmp.h"
#line 1 "/usr/include/netinet/ip.h"

















#line 20 "/usr/include/netinet/ip.h"

#line 1 "/usr/include/features.h"
















#line 22 "/usr/include/netinet/ip.h"
#line 1 "/usr/include/sys/types.h"




















#line 23 "/usr/include/netinet/ip.h"

#line 1 "/usr/include/netinet/in.h"
















#line 25 "/usr/include/netinet/ip.h"



struct timestamp
  {
    uint8_t len;
    uint8_t ptr;
#line 33 "/usr/include/netinet/ip.h"
    unsigned int flags:4;
    unsigned int overflow:4;
#line 41 "/usr/include/netinet/ip.h"
    uint32_t data[9];
  };

struct iphdr
  {
#line 47 "/usr/include/netinet/ip.h"
    unsigned int ihl:4;
    unsigned int version:4;
#line 55 "/usr/include/netinet/ip.h"
    uint8_t tos;
    uint16_t tot_len;
    uint16_t id;
    uint16_t frag_off;
    uint8_t ttl;
    uint8_t protocol;
    uint16_t check;
    uint32_t saddr;
    uint32_t daddr;
    
  };

#line 68 "/usr/include/netinet/ip.h"







































struct ip
  {
#line 110 "/usr/include/netinet/ip.h"
    unsigned int ip_hl:4;		
    unsigned int ip_v:4;		
#line 117 "/usr/include/netinet/ip.h"
    uint8_t ip_tos;			
    unsigned short ip_len;		
    unsigned short ip_id;		
    unsigned short ip_off;		
#line 125 "/usr/include/netinet/ip.h"
    uint8_t ip_ttl;			
    uint8_t ip_p;			
    unsigned short ip_sum;		
    struct in_addr ip_src, ip_dst;	
  };




struct ip_timestamp
  {
    uint8_t ipt_code;			
    uint8_t ipt_len;			
    uint8_t ipt_ptr;			
#line 140 "/usr/include/netinet/ip.h"
    unsigned int ipt_flg:4;		
    unsigned int ipt_oflw:4;		
#line 147 "/usr/include/netinet/ip.h"
    uint32_t data[9];
  };
#line 150 "/usr/include/netinet/ip.h"

#line 153 "/usr/include/netinet/ip.h"







#line 166 "/usr/include/netinet/ip.h"







#line 188 "/usr/include/netinet/ip.h"




#line 193 "/usr/include/netinet/ip.h"




#line 198 "/usr/include/netinet/ip.h"






#line 214 "/usr/include/netinet/ip.h"

#line 216 "/usr/include/netinet/ip.h"





#line 228 "/usr/include/netinet/ip.h"




#line 242 "/usr/include/netinet/ip.h"




#line 249 "/usr/include/netinet/ip.h"

#line 253 "/usr/include/netinet/ip.h"

#line 259 "/usr/include/netinet/ip.h"

#line 264 "/usr/include/netinet/ip.h"

#line 275 "/usr/include/netinet/ip.h"




#line 283 "/usr/include/netinet/ip.h"

#line 285 "/usr/include/netinet/ip.h"


#line 290 "/usr/include/netinet/ip.h"


#line 299 "/usr/include/netinet/ip.h"




#line 307 "/usr/include/netinet/ip.h"

#line 309 "/usr/include/netinet/ip.h"


#line 145 "/usr/include/netinet/ip_icmp.h"




struct icmp_ra_addr
{
  uint32_t ira_addr;
  uint32_t ira_preference;
};

struct icmp
{
  uint8_t  icmp_type;	
  uint8_t  icmp_code;	
  uint16_t icmp_cksum;	
  union
  {
    unsigned char ih_pptr;	
    struct in_addr ih_gwaddr;	
    struct 		
    {
      uint16_t icd_id;
      uint16_t icd_seq;
    } ih_idseq;
    uint32_t ih_void;

    
    struct 
    {
      uint16_t ipm_void;
      uint16_t ipm_nextmtu;
    } ih_pmtu;

    struct 
    {
      uint8_t irt_num_addrs;
      uint8_t irt_wpa;
      uint16_t irt_lifetime;
    } ih_rtradv;
  } icmp_hun;
#line 195 "/usr/include/netinet/ip_icmp.h"
  union
  {
    struct
    {
      uint32_t its_otime;
      uint32_t its_rtime;
      uint32_t its_ttime;
    } id_ts;
    struct
    {
      struct ip idi_ip;
      
    } id_ip;
    struct icmp_ra_addr id_radv;
    uint32_t   id_mask;
    uint8_t    id_data[1];
  } icmp_dun;
#line 219 "/usr/include/netinet/ip_icmp.h"
};









#line 235 "/usr/include/netinet/ip_icmp.h"
	
#line 240 "/usr/include/netinet/ip_icmp.h"



#line 255 "/usr/include/netinet/ip_icmp.h"

#line 257 "/usr/include/netinet/ip_icmp.h"


#line 275 "/usr/include/netinet/ip_icmp.h"


#line 281 "/usr/include/netinet/ip_icmp.h"


#line 285 "/usr/include/netinet/ip_icmp.h"


#line 288 "/usr/include/netinet/ip_icmp.h"

#line 290 "/usr/include/netinet/ip_icmp.h"

#line 292 "/usr/include/netinet/ip_icmp.h"


#line 26 "headers_net.c"
#line 1 "/usr/include/netinet/ip.h"
















#line 31 "headers_net.c"
#line 1 "/usr/include/netinet/ip6.h"

















#line 20 "/usr/include/netinet/ip6.h"

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


#line 22 "/usr/include/netinet/ip6.h"
#line 1 "/usr/include/netinet/in.h"
















#line 23 "/usr/include/netinet/ip6.h"

struct ip6_hdr
  {
    union
      {
	struct 
	  {
	    uint32_t ip6_un1_flow;   

	    uint16_t ip6_un1_plen;   
	    uint8_t  ip6_un1_nxt;    
	    uint8_t  ip6_un1_hlim;   
	  } ip6_un1;
	uint8_t ip6_un2_vfc;       
      } ip6_ctlun;
    struct in6_addr ip6_src;      
    struct in6_addr ip6_dst;      
  };

#line 48 "/usr/include/netinet/ip6.h"

#line 51 "/usr/include/netinet/ip6.h"

#line 59 "/usr/include/netinet/ip6.h"


struct ip6_ext
  {
    uint8_t  ip6e_nxt;		
    uint8_t  ip6e_len;		
  };


struct ip6_hbh
  {
    uint8_t  ip6h_nxt;		
    uint8_t  ip6h_len;		
    
  };


struct ip6_dest
  {
    uint8_t  ip6d_nxt;		
    uint8_t  ip6d_len;		
    
  };


struct ip6_rthdr
  {
    uint8_t  ip6r_nxt;		
    uint8_t  ip6r_len;		
    uint8_t  ip6r_type;		
    uint8_t  ip6r_segleft;	
    
  };


struct ip6_rthdr0
  {
    uint8_t  ip6r0_nxt;		
    uint8_t  ip6r0_len;		
    uint8_t  ip6r0_type;	
    uint8_t  ip6r0_segleft;	
    uint8_t  ip6r0_reserved;	
    uint8_t  ip6r0_slmap[3];	
    
    struct in6_addr ip6r0_addr[0];
  };


struct ip6_frag
  {
    uint8_t   ip6f_nxt;		
    uint8_t   ip6f_reserved;	
    uint16_t  ip6f_offlg;	
    uint32_t  ip6f_ident;	
  };

#line 124 "/usr/include/netinet/ip6.h"


struct ip6_opt
  {
    uint8_t  ip6o_type;
    uint8_t  ip6o_len;
  };





#line 142 "/usr/include/netinet/ip6.h"


#line 146 "/usr/include/netinet/ip6.h"

#line 151 "/usr/include/netinet/ip6.h"


struct ip6_opt_jumbo
  {
    uint8_t  ip6oj_type;
    uint8_t  ip6oj_len;
    uint8_t  ip6oj_jumbo_len[4];
  };
#line 160 "/usr/include/netinet/ip6.h"


struct ip6_opt_nsap
  {
    uint8_t  ip6on_type;
    uint8_t  ip6on_len;
    uint8_t  ip6on_src_nsap_len;
    uint8_t  ip6on_dst_nsap_len;
      
      
  };


struct ip6_opt_tunnel
  {
    uint8_t  ip6ot_type;
    uint8_t  ip6ot_len;
    uint8_t  ip6ot_encap_limit;
  };


struct ip6_opt_router
  {
    uint8_t  ip6or_type;
    uint8_t  ip6or_len;
    uint8_t  ip6or_value[2];
  };


#line 198 "/usr/include/netinet/ip6.h"
#line 34 "headers_net.c"
#line 1 "/usr/include/netinet/icmp6.h"

















#line 20 "/usr/include/netinet/icmp6.h"

#line 1 "/usr/include/inttypes.h"




















#line 22 "/usr/include/netinet/icmp6.h"
#line 1 "/usr/include/string.h"




















#line 23 "/usr/include/netinet/icmp6.h"
#line 1 "/usr/include/sys/types.h"




















#line 24 "/usr/include/netinet/icmp6.h"
#line 1 "/usr/include/netinet/in.h"
















#line 25 "/usr/include/netinet/icmp6.h"

#line 27 "/usr/include/netinet/icmp6.h"

#line 32 "/usr/include/netinet/icmp6.h"

struct icmp6_filter
  {
    uint32_t icmp6_filt[8];
  };

struct icmp6_hdr
  {
    uint8_t     icmp6_type;   
    uint8_t     icmp6_code;   
    uint16_t    icmp6_cksum;  
    union
      {
	uint32_t  icmp6_un_data32[1]; 
	uint16_t  icmp6_un_data16[2]; 
	uint8_t   icmp6_un_data8[4];  
      } icmp6_dataun;
  };

#line 59 "/usr/include/netinet/icmp6.h"

#line 64 "/usr/include/netinet/icmp6.h"

#line 66 "/usr/include/netinet/icmp6.h"

#line 74 "/usr/include/netinet/icmp6.h"

#line 77 "/usr/include/netinet/icmp6.h"
                                        
#line 81 "/usr/include/netinet/icmp6.h"

#line 84 "/usr/include/netinet/icmp6.h"

#line 88 "/usr/include/netinet/icmp6.h"

#line 90 "/usr/include/netinet/icmp6.h"

#line 92 "/usr/include/netinet/icmp6.h"

#line 94 "/usr/include/netinet/icmp6.h"

#line 96 "/usr/include/netinet/icmp6.h"

#line 98 "/usr/include/netinet/icmp6.h"

#line 100 "/usr/include/netinet/icmp6.h"

#line 106 "/usr/include/netinet/icmp6.h"

struct nd_router_solicit      
  {
    struct icmp6_hdr  nd_rs_hdr;
    
  };

#line 117 "/usr/include/netinet/icmp6.h"

struct nd_router_advert       
  {
    struct icmp6_hdr  nd_ra_hdr;
    uint32_t   nd_ra_reachable;   
    uint32_t   nd_ra_retransmit;  
    
  };

#line 135 "/usr/include/netinet/icmp6.h"

struct nd_neighbor_solicit    
  {
    struct icmp6_hdr  nd_ns_hdr;
    struct in6_addr   nd_ns_target; 
    
  };

#line 147 "/usr/include/netinet/icmp6.h"

struct nd_neighbor_advert     
  {
    struct icmp6_hdr  nd_na_hdr;
    struct in6_addr   nd_na_target; 
    
  };

#line 168 "/usr/include/netinet/icmp6.h"

struct nd_redirect            
  {
    struct icmp6_hdr  nd_rd_hdr;
    struct in6_addr   nd_rd_target; 
    struct in6_addr   nd_rd_dst;    
    
  };

#line 181 "/usr/include/netinet/icmp6.h"

struct nd_opt_hdr             
  {
    uint8_t  nd_opt_type;
    uint8_t  nd_opt_len;        
    
  };

#line 196 "/usr/include/netinet/icmp6.h"

struct nd_opt_prefix_info     
  {
    uint8_t   nd_opt_pi_type;
    uint8_t   nd_opt_pi_len;
    uint8_t   nd_opt_pi_prefix_len;
    uint8_t   nd_opt_pi_flags_reserved;
    uint32_t  nd_opt_pi_valid_time;
    uint32_t  nd_opt_pi_preferred_time;
    uint32_t  nd_opt_pi_reserved2;
    struct in6_addr  nd_opt_pi_prefix;
  };

#line 212 "/usr/include/netinet/icmp6.h"

struct nd_opt_rd_hdr          
  {
    uint8_t   nd_opt_rh_type;
    uint8_t   nd_opt_rh_len;
    uint16_t  nd_opt_rh_reserved1;
    uint32_t  nd_opt_rh_reserved2;
    
  };

struct nd_opt_mtu             
  {
    uint8_t   nd_opt_mtu_type;
    uint8_t   nd_opt_mtu_len;
    uint16_t  nd_opt_mtu_reserved;
    uint32_t  nd_opt_mtu_mtu;
  };

struct mld_hdr
  {
    struct icmp6_hdr    mld_icmp6_hdr;
    struct in6_addr     mld_addr; 
  };

#line 241 "/usr/include/netinet/icmp6.h"

#line 243 "/usr/include/netinet/icmp6.h"

struct icmp6_router_renum    
  {
    struct icmp6_hdr    rr_hdr;
    uint8_t             rr_segnum;
    uint8_t             rr_flags;
    uint16_t            rr_maxdelay;
    uint32_t            rr_reserved;
  };

#line 257 "/usr/include/netinet/icmp6.h"


#line 264 "/usr/include/netinet/icmp6.h"

struct rr_pco_match    
  {
    uint8_t             rpm_code;
    uint8_t             rpm_len;
    uint8_t             rpm_ordinal;
    uint8_t             rpm_matchlen;
    uint8_t             rpm_minlen;
    uint8_t             rpm_maxlen;
    uint16_t            rpm_reserved;
    struct in6_addr     rpm_prefix;
  };


#line 281 "/usr/include/netinet/icmp6.h"

struct rr_pco_use      
  {
    uint8_t             rpu_uselen;
    uint8_t             rpu_keeplen;
    uint8_t             rpu_ramask;
    uint8_t             rpu_raflags;
    uint32_t            rpu_vltime;
    uint32_t            rpu_pltime;
    uint32_t            rpu_flags;
    struct in6_addr     rpu_prefix;
  };

#line 296 "/usr/include/netinet/icmp6.h"

#line 304 "/usr/include/netinet/icmp6.h"

struct rr_result       
  {
    uint16_t            rrr_flags;
    uint8_t             rrr_ordinal;
    uint8_t             rrr_matchedlen;
    uint32_t            rrr_ifid;
    struct in6_addr     rrr_prefix;
  };

#line 321 "/usr/include/netinet/icmp6.h"


struct nd_opt_adv_interval
  {
    uint8_t   nd_opt_adv_interval_type;
    uint8_t   nd_opt_adv_interval_len;
    uint16_t  nd_opt_adv_interval_reserved;
    uint32_t  nd_opt_adv_interval_ival;
  };


struct nd_opt_home_agent_info
  {
    uint8_t   nd_opt_home_agent_info_type;
    uint8_t   nd_opt_home_agent_info_len;
    uint16_t  nd_opt_home_agent_info_reserved;
    uint16_t  nd_opt_home_agent_info_preference;
    uint16_t  nd_opt_home_agent_info_lifetime;
  };
#line 37 "headers_net.c"
#line 1 "/usr/include/netinet/udp.h"














































#line 49 "/usr/include/netinet/udp.h"

#line 1 "/usr/include/sys/types.h"




















#line 51 "/usr/include/netinet/udp.h"
#line 1 "/usr/include/stdint.h"




















#line 52 "/usr/include/netinet/udp.h"



struct udphdr
{
  union
  {
    struct
    {
      uint16_t uh_sport;	
      uint16_t uh_dport;	
      uint16_t uh_ulen;		
      uint16_t uh_sum;		
    };
    struct
    {
      uint16_t source;
      uint16_t dest;
      uint16_t len;
      uint16_t check;
    };
  };
};


#line 86 "/usr/include/netinet/udp.h"


#line 93 "/usr/include/netinet/udp.h"

#line 95 "/usr/include/netinet/udp.h"
#line 40 "headers_net.c"
#line 1 "/usr/include/net/if_arp.h"



















#line 43 "headers_net.c"
#line 44 "headers_net.c"
}

int test_headers_net(void)
{
    return 0;
}
