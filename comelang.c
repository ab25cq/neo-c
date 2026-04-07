/// c_include definition ///
/// typedef definition ///
typedef char* string;

typedef unsigned long  int size_t;

typedef __builtin_va_list  __gnuc_va_list  ;

typedef unsigned char __u_char;

typedef unsigned short int __u_short;

typedef unsigned int __u_int;

typedef unsigned long  int __u_long;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short int __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long  int __int64_t;

typedef unsigned long  int __uint64_t;

typedef char  __int_least8_t  ;

typedef unsigned char  __uint_least8_t  ;

typedef short int  __int_least16_t  ;

typedef unsigned short int  __uint_least16_t  ;

typedef int  __int_least32_t  ;

typedef unsigned int  __uint_least32_t  ;

typedef long  int  __int_least64_t  ;

typedef unsigned long  int  __uint_least64_t  ;

typedef long  int __quad_t;

typedef unsigned long  int __u_quad_t;

typedef long  int __intmax_t;

typedef unsigned long  int __uintmax_t;

typedef unsigned long  int __dev_t;

typedef unsigned int __uid_t;

typedef unsigned int __gid_t;

typedef unsigned long  int __ino_t;

typedef unsigned long  int __ino64_t;

typedef unsigned int __mode_t;

typedef unsigned long  int __nlink_t;

typedef long  int __off_t;

typedef long  int __off64_t;

typedef int __pid_t;

typedef struct __fsid_t  __fsid_t  ;

typedef long  int __clock_t;

typedef unsigned long  int __rlim_t;

typedef unsigned long  int __rlim64_t;

typedef unsigned int __id_t;

typedef long  int __time_t;

typedef unsigned int __useconds_t;

typedef long  int __suseconds_t;

typedef long  int __suseconds64_t;

typedef int __daddr_t;

typedef int __key_t;

typedef int __clockid_t;

typedef void* __timer_t;

typedef long  int __blksize_t;

typedef long  int __blkcnt_t;

typedef long  int __blkcnt64_t;

typedef unsigned long  int __fsblkcnt_t;

typedef unsigned long  int __fsblkcnt64_t;

typedef unsigned long  int __fsfilcnt_t;

typedef unsigned long  int __fsfilcnt64_t;

typedef long  int __fsword_t;

typedef long  int __ssize_t;

typedef long  int __syscall_slong_t;

typedef unsigned long  int __syscall_ulong_t;

typedef long  int  __loff_t  ;

typedef char* __caddr_t;

typedef long  int __intptr_t;

typedef unsigned int __socklen_t;

typedef int __sig_atomic_t;

typedef struct anonymous_typeX1 __mbstate_t;

typedef struct _G_fpos_t  __fpos_t  ;

typedef struct _G_fpos64_t  __fpos64_t  ;

typedef struct _IO_FILE  __FILE  ;

typedef struct _IO_FILE  FILE  ;

typedef void _IO_lock_t;

typedef long  int (*cookie_read_function_t)(void*,char*,unsigned long  int );

typedef long  int (*cookie_write_function_t)(void*,const char*,unsigned long  int );

typedef int (*cookie_seek_function_t)(void*,long  int* ,int);

typedef int (*cookie_close_function_t)(void*);

typedef struct _IO_cookie_io_functions_t  cookie_io_functions_t  ;

typedef long  int  off_t  ;

typedef long  int  off64_t  ;

typedef long  int  ssize_t  ;

typedef struct _G_fpos_t  fpos_t  ;

typedef struct _G_fpos64_t  fpos64_t  ;

typedef int wchar_t;

typedef struct anonymous_typeX4 div_t;

typedef struct anonymous_typeX5 ldiv_t;

typedef struct anonymous_typeX6 lldiv_t;

typedef struct __locale_struct*  __locale_t  ;

typedef struct __locale_struct*  locale_t  ;

typedef unsigned char  u_char  ;

typedef unsigned short int  u_short  ;

typedef unsigned int  u_int  ;

typedef unsigned long  int  u_long  ;

typedef long  int  quad_t  ;

typedef unsigned long  int  u_quad_t  ;

typedef struct __fsid_t  fsid_t  ;

typedef long  int  loff_t  ;

typedef unsigned long  int  ino_t  ;

typedef unsigned long  int  ino64_t  ;

typedef unsigned long  int  dev_t  ;

typedef unsigned int  gid_t  ;

typedef unsigned int  mode_t  ;

typedef unsigned long  int  nlink_t  ;

typedef unsigned int  uid_t  ;

typedef int  pid_t  ;

typedef unsigned int  id_t  ;

typedef int  daddr_t  ;

typedef char*  caddr_t  ;

typedef int  key_t  ;

typedef long  int  clock_t  ;

typedef int  clockid_t  ;

typedef long  int  time_t  ;

typedef void*  timer_t  ;

typedef unsigned int  useconds_t  ;

typedef long  int  suseconds_t  ;

typedef unsigned long  int ulong;

typedef unsigned short int ushort;

typedef unsigned int uint;

typedef char  int8_t  ;

typedef short int  int16_t  ;

typedef int  int32_t  ;

typedef long  int  int64_t  ;

typedef unsigned char  u_int8_t  ;

typedef unsigned short int  u_int16_t  ;

typedef unsigned int  u_int32_t  ;

typedef unsigned long  int  u_int64_t  ;

typedef int __attribute__ ((__mode__ (__word__))) register_t __attribute__ ((__mode__ (__word__)));

typedef struct anonymous_typeX7 __sigset_t;

typedef struct anonymous_typeX7  sigset_t  ;

typedef long  int __fd_mask;

typedef struct anonymous_typeX8 fd_set;

typedef long  int  fd_mask  ;

typedef long  int  blksize_t  ;

typedef long  int  blkcnt_t  ;

typedef unsigned long  int  fsblkcnt_t  ;

typedef unsigned long  int  fsfilcnt_t  ;

typedef long  int  blkcnt64_t  ;

typedef unsigned long  int  fsblkcnt64_t  ;

typedef unsigned long  int  fsfilcnt64_t  ;

typedef union anonymous_typeZ9 __atomic_wide_counter;

typedef struct __pthread_internal_list  __pthread_list_t  ;

typedef struct __pthread_internal_slist  __pthread_slist_t  ;

typedef unsigned int __tss_t;

typedef unsigned long  int __thrd_t;

typedef struct anonymous_typeX11 __once_flag;

typedef unsigned long  int pthread_t;

typedef union anonymous_typeZ12 pthread_mutexattr_t;

typedef union anonymous_typeZ13 pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

typedef union pthread_attr_t  pthread_attr_t  ;

typedef union anonymous_typeZ14 pthread_mutex_t;

typedef union anonymous_typeZ15 pthread_cond_t;

typedef union anonymous_typeZ16 pthread_rwlock_t;

typedef union anonymous_typeZ17 pthread_rwlockattr_t;

typedef volatile int pthread_spinlock_t;

typedef union anonymous_typeZ18 pthread_barrier_t;

typedef union anonymous_typeZ19 pthread_barrierattr_t;

typedef int (*__compar_fn_t)(const void*,const void*);

typedef int (*comparison_fn_t)(const void*,const void*)  ;

typedef int (*__compar_d_fn_t)(const void*,const void*,void*);

typedef __builtin_va_list  va_list  ;

typedef int error_t;

typedef unsigned int wint_t;

typedef struct anonymous_typeX1  mbstate_t  ;

typedef int*  wstring  ;

typedef int (*FP)(int,char*);

typedef int I;

typedef unsigned short int USI;

typedef long long LL;

typedef unsigned long  long ULL;

typedef char SCHAR;

typedef long  double LDBL;

typedef unsigned long  int UL;

typedef char* PCHAR;

typedef int I3;

typedef int I2;

typedef int (*FPX)(int,char*);

typedef int IIIIIIII;

typedef struct Foo Foo;

typedef int (*FPPPPPP)(int,char*);

typedef int IIIIII3;

typedef int (*FPPXUHO)(int);

/// previous struct definition ///
struct _IO_FILE;

struct _IO_marker;

struct _IO_codecvt;

struct _IO_wide_data;

struct obstack;

struct tm;

/// struct definition ///
struct __fsid_t
{
    int __val[2];
};

union anonymous_typeZ2
{
unsigned int __wch;
char __wchb[4];
};

union anonymous_typeZ3
{
unsigned int __wch;
char __wchb[4];
};

struct anonymous_typeX1
{
    int __count;
    union {
        unsigned int __wch;
        char __wchb[4];
    } __value;
};

struct _G_fpos_t
{
    long  int  __pos  ;
    struct {
        int __count;
        union {
            unsigned int __wch;
            char __wchb[4];
        } __value;
    } __state;
};

struct _G_fpos64_t
{
    long  int  __pos  ;
    struct {
        int __count;
        union {
            unsigned int __wch;
            char __wchb[4];
        } __value;
    } __state;
};

struct _IO_FILE
{
    int _flags;
    char* _IO_read_ptr;
    char* _IO_read_end;
    char* _IO_read_base;
    char* _IO_write_base;
    char* _IO_write_ptr;
    char* _IO_write_end;
    char* _IO_buf_base;
    char* _IO_buf_end;
    char* _IO_save_base;
    char* _IO_backup_base;
    char* _IO_save_end;
    struct _IO_marker*  _markers  ;
    struct _IO_FILE*  _chain  ;
    int _fileno;
    int _flags2:24;
    char _short_backupbuf[1];
    long  int  _old_offset  ;
    unsigned short int _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    void*  _lock  ;
    long  int  _offset  ;
    struct _IO_codecvt*  _codecvt  ;
    struct _IO_wide_data*  _wide_data  ;
    struct _IO_FILE*  _freeres_list  ;
    void* _freeres_buf;
    struct _IO_FILE**  _prevchain  ;
    int _mode;
    int _unused3;
    unsigned long  int  _total_written  ;
    char _unused2[12*sizeof(int)-5*sizeof(void*)];
};

struct _IO_cookie_io_functions_t
{
    long  int (*(*read))(void*,char*,unsigned long  int )  ;
    long  int (*(*write))(void*,const char*,unsigned long  int )  ;
    int (*(*seek))(void*,long  int* ,int)  ;
    int (*(*close))(void*)  ;
};

struct anonymous_typeX4
{
    int quot;
    int rem;
};

struct anonymous_typeX5
{
    long  int quot;
    long  int rem;
};

struct anonymous_typeX6
{
    long long int quot;
    long long int rem;
};

struct __locale_struct
{
    struct __locale_data* __locales[13];
    const unsigned short int* __ctype_b;
    const int* __ctype_tolower;
    const int* __ctype_toupper;
    const char* __names[13];
};

struct timeval
{
    long  int  tv_sec  ;
    long  int  tv_usec  ;
};

struct timespec
{
    long  int  tv_sec  ;
    long  int  tv_nsec  ;
};

struct anonymous_typeX10
{
    unsigned int __low;
    unsigned int __high;
};

union anonymous_typeZ9
{
unsigned long long int __value64;
    struct {
        unsigned int __low;
        unsigned int __high;
    } __value32;
};

struct __pthread_internal_list
{
    struct __pthread_internal_list*  __prev  ;
    struct __pthread_internal_list*  __next  ;
};

struct __pthread_internal_slist
{
    struct __pthread_internal_slist*  __next  ;
};

struct __pthread_mutex_s
{
    int __lock;
    unsigned int __count;
    int __owner;
    unsigned int __nusers;
    int __kind;
    short __spins;
    short __elision;
    struct __pthread_internal_list  __list  ;
};

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
    char __rwelision;
    unsigned char __pad1[7];
    unsigned long  int __pad2;
    unsigned int __flags;
};

struct __pthread_cond_s
{
    union {
        unsigned long long int __value64;
        struct {
            unsigned int __low;
            unsigned int __high;
        } __value32;
    } __wseq;
    union {
        unsigned long long int __value64;
        struct {
            unsigned int __low;
            unsigned int __high;
        } __value32;
    } __g1_start;
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
    unsigned int __unused_initialized_1;
    unsigned int __unused_initialized_2;
};

struct anonymous_typeX11
{
    int __data;
};

union anonymous_typeZ12
{
char __size[4];
int __align;
};

union anonymous_typeZ13
{
char __size[4];
int __align;
};

union pthread_attr_t
{
char __size[56];
long  int __align;
};

union anonymous_typeZ14
{
struct __pthread_mutex_s  __data  ;
char __size[40];
long  int __align;
};

union anonymous_typeZ15
{
struct __pthread_cond_s  __data  ;
char __size[48];
long long int __align;
};

union anonymous_typeZ16
{
struct __pthread_rwlock_arch_t  __data  ;
char __size[56];
long  int __align;
};

union anonymous_typeZ17
{
char __size[8];
long  int __align;
};

union anonymous_typeZ18
{
char __size[32];
long  int __align;
};

union anonymous_typeZ19
{
char __size[4];
int __align;
};

struct random_data
{
    int*  fptr  ;
    int*  rptr  ;
    int*  state  ;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int*  end_ptr  ;
};

struct drand48_data
{
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
};

struct lconv
{
    char* decimal_point;
    char* thousands_sep;
    char* grouping;
    char* int_curr_symbol;
    char* currency_symbol;
    char* mon_decimal_point;
    char* mon_thousands_sep;
    char* mon_grouping;
    char* positive_sign;
    char* negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};

struct buffer
{
    char* buf;
    int len;
    int size;
};

struct neo_frame
{
    void* stacktop;
    struct neo_frame*  prev  ;
    char* fun_name;
};

struct sMemHeader
{
    long size;
    long compiletime_size;
    long alloc_size;
    int allocated;
    int alive;
    struct sMemHeader*  next  ;
    struct sMemHeader*  prev  ;
    struct sMemHeader*  free_next  ;
    char* fun_name[8];
    const char* class_name;
    const char* sname;
    int sline;
    int id;
};

struct list_item$1char$
{
    char item;
    struct list_item$1char$* prev;
    struct list_item$1char$* next;
};

struct list$1char$
{
    struct list_item$1char$* head;
    struct list_item$1char$* tail;
    int len;
    struct list_item$1char$* it;
};

struct list_item$1char$p
{
    char* item;
    struct list_item$1char$p* prev;
    struct list_item$1char$p* next;
};

struct list$1char$p
{
    struct list_item$1char$p* head;
    struct list_item$1char$p* tail;
    int len;
    struct list_item$1char$p* it;
};

struct list_item$1short$
{
    short item;
    struct list_item$1short$* prev;
    struct list_item$1short$* next;
};

struct list$1short$
{
    struct list_item$1short$* head;
    struct list_item$1short$* tail;
    int len;
    struct list_item$1short$* it;
};

struct list_item$1int$
{
    int item;
    struct list_item$1int$* prev;
    struct list_item$1int$* next;
};

struct list$1int$
{
    struct list_item$1int$* head;
    struct list_item$1int$* tail;
    int len;
    struct list_item$1int$* it;
};

struct list_item$1long$
{
    long item;
    struct list_item$1long$* prev;
    struct list_item$1long$* next;
};

struct list$1long$
{
    struct list_item$1long$* head;
    struct list_item$1long$* tail;
    int len;
    struct list_item$1long$* it;
};

struct list_item$1float$
{
    float item;
    struct list_item$1float$* prev;
    struct list_item$1float$* next;
};

struct list$1float$
{
    struct list_item$1float$* head;
    struct list_item$1float$* tail;
    int len;
    struct list_item$1float$* it;
};

struct list_item$1double$
{
    double item;
    struct list_item$1double$* prev;
    struct list_item$1double$* next;
};

struct list$1double$
{
    struct list_item$1double$* head;
    struct list_item$1double$* tail;
    int len;
    struct list_item$1double$* it;
};

struct list_item$1char$ph
{
    char*  item  ;
    struct list_item$1char$ph* prev;
    struct list_item$1char$ph* next;
};

struct list$1char$ph
{
    struct list_item$1char$ph* head;
    struct list_item$1char$ph* tail;
    int len;
    struct list_item$1char$ph* it;
};

typedef int (*FP2[2][3])(int,char*);

struct Test
{
    int x;
};

struct B
{
    unsigned int a:1;
    int b:3;
    int :0;
    int c:5;
};

struct P
{
    int x;
    int y;
};

struct P2
{
    int x;
};

enum  E2 { EA=(0)
};

union U
{
int i;
long l;
};

enum  E3 { EA2=(0),
EB2=(1)
};

typedef int A[3][4];

struct PXYZ
{
    int x;
    int y;
};

struct TestStruct
{
    int x;
    long long ll;
    unsigned short int us;
    int bitfield:4;
};

typedef int (*FPXYZ[2])(int);

typedef int (*FPXYZ2[2][3])(int,char*);

struct PXXX
{
    int x;
    int y;
};

typedef int XA[3][4];

typedef int (*FPUHIHI[2])(int);

typedef int (*FPUHIHI2[2][3])(int,char*);

struct anonymous_typeX20
{
    int x;
};

struct anonymous_typeX21
{
    int x;
};

struct anonymous_typeX22
{
    int x;
};

struct anonymous_typeX23
{
    int x;
};

struct anonymous_typeX24
{
    int x;
};

union anonymous_typeZ25
{
char c;
int i;
};

union anonymous_typeZ26
{
char c;
int i;
};

union anonymous_typeZ27
{
char c;
int i;
};

union anonymous_typeZ28
{
char c;
int i;
};

union anonymous_typeZ29
{
char c;
int i;
};

enum  anonymous_typeY30 { XXXXXA=(1),
XXXXXB 
};

struct anonymous_typeX31
{
    int y;
};

struct anonymous_typeX32
{
    int y;
};

struct anonymous_typeX33
{
    int y;
};

struct anonymous_typeX34
{
    int y;
};

struct anonymous_typeX35
{
    int y;
};

enum  E22 { A22=(1),
B22=((1)+2),
C=((((1)+2)<<1)|~0),
D22=((int)(1)),
E122=(120),
F22=(-(1))
};

enum  anonymous_typeY36 { X22=(1),
Y22=((1)+3)
};

struct S22
{
    enum anonymous_typeY36 e;
};

enum  EXX { AXX 
,BXX=(3),
CXX 
};

enum  anonymous_typeY37 { XXXX=(1),
YXX 
};

struct SXX
{
    enum anonymous_typeY37 e;
};

enum  EEEEEEEEEEE { A11111111111111=(10),
A222222222222222 
};

struct AAAAAAAAAAA
{
    enum EEEEEEEEEEE e;
};

struct BBBBBBBBBBB
{
    enum EEEEEEEEEEE  e  ;
};

enum  anonymous_typeY38 { X=(1),
Y 
};

union anonymous_typeZ40
{
char c;
};

union anonymous_typeZ41
{
char c;
};

struct anonymous_typeX39
{
    int a;
    union {
        char c;
    } u;
};

union anonymous_typeZ43
{
char c;
};

union anonymous_typeZ44
{
char c;
};

struct anonymous_typeX42
{
    int a;
    union {
        char c;
    } u;
};

struct Outer
{
    enum anonymous_typeY38 e1;
    struct {
        int a;
        union {
            char c;
        } u;
    } s1;
    struct Named {
        int n;
    } s2;
    union NamedU {
        float f;
    } u2;
};

union anonymous_typeZ46
{
char c;
long l;
};

union anonymous_typeZ47
{
char c;
long l;
};

struct anonymous_typeX45
{
    int x;
    union {
        char c;
        long l;
    } inner_u;
};

union anonymous_typeZ49
{
char c;
long l;
};

union anonymous_typeZ50
{
char c;
long l;
};

struct anonymous_typeX48
{
    int x;
    union {
        char c;
        long l;
    } inner_u;
};

struct anonymous_typeX52
{
    unsigned int u:3;
    int v;
};

union anonymous_typeZ51
{
float f;
    struct {
        unsigned int u:3;
        int v;
    } inner_s;
};

struct anonymous_typeX54
{
    unsigned int u:3;
    int v;
};

union anonymous_typeZ53
{
float f;
    struct {
        unsigned int u:3;
        int v;
    } inner_s;
};

union UUUUUUUUU
{
int x;
unsigned short int y;
};

typedef int AAAAAAAAAAAAA[10];

struct SSS
{
    int a;
    struct {
        int b[5];
    } inner;
};

struct __current_stack1__
{
    int* argc;
    char*** argv;
    int* xxx;
    int (*f)(int,char*)  ;
    struct P*  p  ;
    int (*a)[5];
    int (*__list_values1__)[5];
    struct list$1int$** li;
    int* x_2;
};

struct __current_stack2__
{
    int* argc;
    char*** argv;
    int* xxx;
    int (*f)(int,char*)  ;
    struct P*  p  ;
    int (*a)[5];
    int (*__list_values1__)[5];
    struct list$1int$** li;
    int* x_2;
    int* y;
    int* i;
};

struct list$1__mgenerics_type0$
{
    struct list_item$1int$* head;
    struct list_item$1int$* tail;
    int len;
    struct list_item$1int$* it;
};

struct __current_stack3__
{
    int* argc;
    char*** argv;
    int* xxx;
    int (*f)(int,char*)  ;
    struct P*  p  ;
    int (*__list_values1__)[5];
    struct list$1int$** li;
    int* x_2;
    int* y;
    int* i;
    int* b;
    int* c;
    char**  a_7  ;
    int (*__list_values2__)[3];
};

struct __current_stack4__
{
    int* argc;
    char*** argv;
    int* xxx;
    int (*f)(int,char*)  ;
    struct P*  p  ;
    int (*__list_values1__)[5];
    struct list$1int$** li;
    int* x_2;
    int* y;
    int* i;
    int* b;
    int* c;
    char**  a_7  ;
    int (*__list_values2__)[3];
};

struct __current_stack5__
{
    int* argc;
    char*** argv;
    int* xxx;
    int (*f)(int,char*)  ;
    struct P*  p  ;
    int (*__list_values1__)[5];
    struct list$1int$** li;
    int* x_2;
    int* y;
    int* i;
    int* b;
    int* c;
    char**  a_7  ;
    int (*__list_values2__)[3];
    char* (*__list_values3__)[3];
    int (*__list_values4__)[3];
};

struct __current_stack6__
{
    int* argc;
    char*** argv;
    int* xxx;
    int (*f)(int,char*)  ;
    struct P*  p  ;
    int (*__list_values1__)[5];
    struct list$1int$** li;
    int* x_2;
    int* y;
    int* i;
    int* b;
    int* c;
    char**  a_7  ;
    int (*__list_values2__)[3];
    char* (*__list_values3__)[3];
    int (*__list_values4__)[3];
};

struct __current_stack7__
{
    int* argc;
    char*** argv;
    int* xxx;
    int (*f)(int,char*)  ;
    struct P*  p  ;
    int (*__list_values1__)[5];
    struct list$1int$** li;
    int* x_2;
    int* y;
    int* i;
    int* b;
    int* c;
    char**  a_7  ;
    int (*__list_values2__)[3];
    char* (*__list_values3__)[3];
    int (*__list_values4__)[3];
    char* (*__list_values5__)[3];
    int (*__list_values6__)[5];
};

struct __current_stack8__
{
    int* argc;
    char*** argv;
    int* xxx;
    int (*f)(int,char*)  ;
    struct P*  p  ;
    int (*__list_values1__)[5];
    struct list$1int$** li;
    int* x_2;
    int* y;
    int* i;
    int* b;
    int* c;
    char**  a_7  ;
    int (*__list_values2__)[3];
    char* (*__list_values3__)[3];
    int (*__list_values4__)[3];
    char* (*__list_values5__)[3];
    int (*__list_values6__)[5];
};

struct __current_stack9__
{
    int* argc;
    char*** argv;
    int* xxx;
    int (*f)(int,char*)  ;
    struct P*  p  ;
    int (*__list_values1__)[5];
    struct list$1int$** li;
    int* x_2;
    int* y;
    int* i;
    int* b;
    int* c;
    char**  a_7  ;
    int (*__list_values2__)[3];
    char* (*__list_values3__)[3];
    int (*__list_values4__)[3];
    char* (*__list_values5__)[3];
    int (*__list_values6__)[5];
};

struct __current_stack10__
{
    int* argc;
    char*** argv;
    int* xxx;
    int (*f)(int,char*)  ;
    struct P*  p  ;
    int (*__list_values1__)[5];
    struct list$1int$** li;
    int* x_2;
    int* y;
    int* i;
    int* b;
    int* c;
    char**  a_7  ;
    int (*__list_values2__)[3];
    char* (*__list_values3__)[3];
    int (*__list_values4__)[3];
    char* (*__list_values5__)[3];
    int (*__list_values6__)[5];
};

struct __current_stack11__
{
    int* argc;
    char*** argv;
    int* xxx;
    int (*f)(int,char*)  ;
    struct P*  p  ;
    int (*__list_values1__)[5];
    struct list$1int$** li;
    int* x_2;
    int* y;
    int* i;
    int* b;
    int* c;
    char**  a_7  ;
    int (*__list_values2__)[3];
    char* (*__list_values3__)[3];
    int (*__list_values4__)[3];
    char* (*__list_values5__)[3];
    int (*__list_values6__)[5];
};

struct __current_stack12__
{
    int* argc;
    char*** argv;
    int* xxx;
    int (*f)(int,char*)  ;
    struct P*  p  ;
    int (*__list_values1__)[5];
    struct list$1int$** li;
    int* x_2;
    int* y;
    int* i;
    int* b;
    int* c;
    char**  a_7  ;
    int (*__list_values2__)[3];
    char* (*__list_values3__)[3];
    int (*__list_values4__)[3];
    char* (*__list_values5__)[3];
    int (*__list_values6__)[5];
    int (*__list_values7__)[3];
    int (*__list_values8__)[5];
};

struct __current_stack13__
{
    int* argc;
    char*** argv;
    int* xxx;
    int (*f)(int,char*)  ;
    struct P*  p  ;
    int (*__list_values1__)[5];
    struct list$1int$** li;
    int* x_2;
    int* y;
    int* i;
    int* b;
    int* c;
    char**  a_7  ;
    int (*__list_values2__)[3];
    char* (*__list_values3__)[3];
    int (*__list_values4__)[3];
    char* (*__list_values5__)[3];
    int (*__list_values6__)[5];
    int (*__list_values7__)[3];
    int (*__list_values8__)[5];
};

struct __current_stack14__
{
    int* argc;
    char*** argv;
    int* xxx;
    int (*f)(int,char*)  ;
    struct P*  p  ;
    int (*__list_values1__)[5];
    struct list$1int$** li;
    int* x_2;
    int* y;
    int* i;
    int* b;
    int* c;
    char**  a_7  ;
    int (*__list_values2__)[3];
    char* (*__list_values3__)[3];
    int (*__list_values4__)[3];
    char* (*__list_values5__)[3];
    int (*__list_values6__)[5];
    int (*__list_values7__)[3];
    int (*__list_values8__)[5];
};

struct __current_stack15__
{
    int* argc;
    char*** argv;
    int* xxx;
    int (*f)(int,char*)  ;
    struct P*  p  ;
    int (*__list_values1__)[5];
    struct list$1int$** li;
    int* x_2;
    int* y;
    int* i;
    int* b;
    int* c;
    char**  a_7  ;
    int (*__list_values2__)[3];
    char* (*__list_values3__)[3];
    int (*__list_values4__)[3];
    char* (*__list_values5__)[3];
    int (*__list_values6__)[5];
    int (*__list_values7__)[3];
    int (*__list_values8__)[5];
};

struct __current_stack16__
{
    int* argc;
    char*** argv;
    int* xxx;
    int (*f)(int,char*)  ;
    struct P*  p  ;
    int (*__list_values1__)[5];
    struct list$1int$** li;
    int* x_2;
    int* y;
    int* i;
    int* b;
    int* c;
    char**  a_7  ;
    int (*__list_values2__)[3];
    char* (*__list_values3__)[3];
    int (*__list_values4__)[3];
    char* (*__list_values5__)[3];
    int (*__list_values6__)[5];
    int (*__list_values7__)[3];
    int (*__list_values8__)[5];
};

/// variable definition ///
extern struct _IO_FILE*  stdin  ;
extern struct _IO_FILE*  stdout  ;
extern struct _IO_FILE*  stderr  ;
extern char* program_invocation_name;
extern char* program_invocation_short_name;
extern struct neo_frame*  neo_current_frame  ;

extern struct sMemHeader*  gAllocMem  ;

extern struct sMemHeader*  gFreeMem  ;

extern int gComeDebugLib;

extern int gNumAlloc;

extern int gNumFree;

struct Test  x  ;
struct P  gP  ={ .y = 10 };
int gA[5]={ [2] = 3 };
int* (*fp)(int,char*);
int (*anonymous_var_nameYYY2[2])(int);
int (*arr[2][3])(int);
long  double*** gl;
int*** gi;
int  g  =3;
int (*fpUHO)();
int (*fpGEGEGE)(int,char*);
int a[3]={1,2,3,4};
int b[2][2]={ {1,2,3}, {4,5} };
int c={1,2};
int d[3]={ [1] = 1 };
int e[4]={ [1 ... 3] = 7 };
struct anonymous_typeX24 aXXX;
union anonymous_typeZ29 bXXX;
enum anonymous_typeY30 eXXX;
struct anonymous_typeX35 a2XXX;
struct anonymous_typeX35 a3XXX;
const int gxxxxx=1;
int a3;
int b3;
int* aXYZ;
int* (*fpXYZ)(int,char*);
int* arrXYZ[3];
int* (*fpaXYZ[2])(int);
// source head

// header function
int remove(const char* __filename);
int rename(const char* __old, const char* __new);
int renameat(int __oldfd, const char* __old, int __newfd, const char* __new);
int renameat2(int __oldfd, const char* __old, int __newfd, const char* __new, unsigned int __flags);
int fclose(struct _IO_FILE*  __stream  );
struct _IO_FILE*  tmpfile() __attribute__ ((__malloc__))  ;
struct _IO_FILE*  tmpfile64() __attribute__ ((__malloc__))  ;
char* tmpnam(char [20]);
char* tmpnam_r(char __s[20]);
char* tempnam(const char* __dir, const char* __pfx) __attribute__ ((__malloc__))  ;
int fflush(struct _IO_FILE*  __stream  );
int fflush_unlocked(struct _IO_FILE*  __stream  );
int fcloseall();
struct _IO_FILE*  fopen(const char* __restrict __filename, const char* __restrict __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  freopen(const char* __restrict __filename, const char* __restrict __modes, struct _IO_FILE* __restrict  __stream  );
struct _IO_FILE*  fopen64(const char* __restrict __filename, const char* __restrict __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  freopen64(const char* __restrict __filename, const char* __restrict __modes, struct _IO_FILE* __restrict  __stream  );
struct _IO_FILE*  fdopen(int __fd, const char* __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  fopencookie(void* __restrict __magic_cookie, const char* __restrict __modes, struct _IO_cookie_io_functions_t  __io_funcs  ) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  fmemopen(void* __s, unsigned long  int  __len  , const char* __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  open_memstream(char** __bufloc, unsigned long  int*  __sizeloc  ) __attribute__ ((__malloc__))  ;
void setbuf(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf);
int setvbuf(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf, int __modes, unsigned long  int  __n  );
void setbuffer(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf, unsigned long  int  __size  );
void setlinebuf(struct _IO_FILE*  __stream  );
int fprintf(struct _IO_FILE* __restrict  __stream  , const char* __restrict __format, ...);
int printf(const char* __restrict __format, ...);
int sprintf(char* __restrict __s, const char* __restrict __format, ...);
int vfprintf(struct _IO_FILE* __restrict  __s  , const char* __restrict __format, __builtin_va_list  __arg  );
int vprintf(const char* __restrict __format, __builtin_va_list  __arg  );
int vsprintf(char* __restrict __s, const char* __restrict __format, __builtin_va_list  __arg  );
int snprintf(char* __restrict __s, unsigned long  int  __maxlen  , const char* __restrict __format, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
int vsnprintf(char* __restrict __s, unsigned long  int  __maxlen  , const char* __restrict __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__printf__, 3, 0)));
int vasprintf(char** __restrict __ptr, const char* __restrict __f, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__printf__, 2, 0))) ;
int __asprintf(char** __restrict __ptr, const char* __restrict __fmt, ...) __attribute__ ((__format__ (__printf__, 2, 3))) ;
int asprintf(char** __restrict __ptr, const char* __restrict __fmt, ...) __attribute__ ((__format__ (__printf__, 2, 3))) ;
int vdprintf(int __fd, const char* __restrict __fmt, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__printf__, 2, 0)));
int dprintf(int __fd, const char* __restrict __fmt, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
int fscanf(struct _IO_FILE* __restrict  __stream  , const char* __restrict __format, ...);
int scanf(const char* __restrict __format, ...);
int sscanf(const char* __restrict __s, const char* __restrict __format, ...);
int __isoc23_fscanf(struct _IO_FILE* __restrict  __stream  , const char* __restrict __format, ...);
int __isoc23_scanf(const char* __restrict __format, ...);
int __isoc23_sscanf(const char* __restrict __s, const char* __restrict __format, ...);
int vfscanf(struct _IO_FILE* __restrict  __s  , const char* __restrict __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__scanf__, 2, 0)))  ;
int vscanf(const char* __restrict __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__scanf__, 1, 0))) ;
int vsscanf(const char* __restrict __s, const char* __restrict __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__scanf__, 2, 0)));
int __isoc23_vfscanf(struct _IO_FILE* __restrict  __s  , const char* __restrict __format, __builtin_va_list  __arg  );
int __isoc23_vscanf(const char* __restrict __format, __builtin_va_list  __arg  );
int __isoc23_vsscanf(const char* __restrict __s, const char* __restrict __format, __builtin_va_list  __arg  );
int fgetc(struct _IO_FILE*  __stream  );
int getc(struct _IO_FILE*  __stream  );
int getchar();
int getc_unlocked(struct _IO_FILE*  __stream  );
int getchar_unlocked();
int fgetc_unlocked(struct _IO_FILE*  __stream  );
int fputc(int __c, struct _IO_FILE*  __stream  );
int putc(int __c, struct _IO_FILE*  __stream  );
int putchar(int __c);
int fputc_unlocked(int __c, struct _IO_FILE*  __stream  );
int putc_unlocked(int __c, struct _IO_FILE*  __stream  );
int putchar_unlocked(int __c);
int getw(struct _IO_FILE*  __stream  );
int putw(int __w, struct _IO_FILE*  __stream  );
char* fgets(char* __restrict __s, int __n, struct _IO_FILE* __restrict  __stream  );
char* fgets_unlocked(char* __restrict __s, int __n, struct _IO_FILE* __restrict  __stream  );
long  int  __getdelim(char** __restrict __lineptr, unsigned long  int* __restrict  __n  , int __delimiter, struct _IO_FILE* __restrict  __stream  );
long  int  getdelim(char** __restrict __lineptr, unsigned long  int* __restrict  __n  , int __delimiter, struct _IO_FILE* __restrict  __stream  );
long  int  getline(char** __restrict __lineptr, unsigned long  int* __restrict  __n  , struct _IO_FILE* __restrict  __stream  );
int fputs(const char* __restrict __s, struct _IO_FILE* __restrict  __stream  );
int puts(const char* __s);
int ungetc(int __c, struct _IO_FILE*  __stream  );
unsigned long  int  fread(void* __restrict __ptr, unsigned long  int  __size  , unsigned long  int  __n  , struct _IO_FILE* __restrict  __stream  );
unsigned long  int  fwrite(const void* __restrict __ptr, unsigned long  int  __size  , unsigned long  int  __n  , struct _IO_FILE* __restrict  __s  );
int fputs_unlocked(const char* __restrict __s, struct _IO_FILE* __restrict  __stream  );
unsigned long  int  fread_unlocked(void* __restrict __ptr, unsigned long  int  __size  , unsigned long  int  __n  , struct _IO_FILE* __restrict  __stream  );
unsigned long  int  fwrite_unlocked(const void* __restrict __ptr, unsigned long  int  __size  , unsigned long  int  __n  , struct _IO_FILE* __restrict  __stream  );
int fseek(struct _IO_FILE*  __stream  , long  int __off, int __whence);
long  int ftell(struct _IO_FILE*  __stream  );
void rewind(struct _IO_FILE*  __stream  );
int fseeko(struct _IO_FILE*  __stream  , long  int  __off  , int __whence);
long  int  ftello(struct _IO_FILE*  __stream  );
int fgetpos(struct _IO_FILE* __restrict  __stream  , struct _G_fpos_t* __restrict  __pos  );
int fsetpos(struct _IO_FILE*  __stream  , const struct _G_fpos_t*  __pos  );
int fseeko64(struct _IO_FILE*  __stream  , long  int  __off  , int __whence);
long  int  ftello64(struct _IO_FILE*  __stream  );
int fgetpos64(struct _IO_FILE* __restrict  __stream  , struct _G_fpos64_t* __restrict  __pos  );
int fsetpos64(struct _IO_FILE*  __stream  , const struct _G_fpos64_t*  __pos  );
void clearerr(struct _IO_FILE*  __stream  );
int feof(struct _IO_FILE*  __stream  );
int ferror(struct _IO_FILE*  __stream  );
void clearerr_unlocked(struct _IO_FILE*  __stream  );
int feof_unlocked(struct _IO_FILE*  __stream  );
int ferror_unlocked(struct _IO_FILE*  __stream  );
void perror(const char* __s);
int fileno(struct _IO_FILE*  __stream  );
int fileno_unlocked(struct _IO_FILE*  __stream  );
int pclose(struct _IO_FILE*  __stream  );
struct _IO_FILE*  popen(const char* __command, const char* __modes) __attribute__ ((__malloc__))  ;
char* ctermid(char* __s);
char* cuserid(char* __s);
int obstack_printf(struct obstack* __restrict  __obstack  , const char* __restrict __format, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
int obstack_vprintf(struct obstack* __restrict  __obstack  , const char* __restrict __format, __builtin_va_list  __args  ) __attribute__ ((__format__ (__printf__, 2, 0)));
void flockfile(struct _IO_FILE*  __stream  );
int ftrylockfile(struct _IO_FILE*  __stream  );
void funlockfile(struct _IO_FILE*  __stream  );
int __uflow(struct _IO_FILE*    );
int __overflow(struct _IO_FILE*    , int );
unsigned long  int  __ctype_get_mb_cur_max();
double atof(const char* __nptr) __attribute__ ((__pure__))  ;
int atoi(const char* __nptr) __attribute__ ((__pure__))  ;
long  int atol(const char* __nptr) __attribute__ ((__pure__))  ;
long long int atoll(const char* __nptr) __attribute__ ((__pure__))  ;
double strtod(const char* __restrict __nptr, char** __restrict __endptr);
float strtof(const char* __restrict __nptr, char** __restrict __endptr);
long  double strtold(const char* __restrict __nptr, char** __restrict __endptr);
float  strtof32(const char* __restrict __nptr, char** __restrict __endptr);
double  strtof64(const char* __restrict __nptr, char** __restrict __endptr);
double  strtof32x(const char* __restrict __nptr, char** __restrict __endptr);
long  double  strtof64x(const char* __restrict __nptr, char** __restrict __endptr);
long  int strtol(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long  int strtoul(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long long int strtoq(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long long int strtouq(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long long int strtoll(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long long int strtoull(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long  int __isoc23_strtol(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long  int __isoc23_strtoul(const char* __restrict __nptr, char** __restrict __endptr, int __base);
long long int __isoc23_strtoll(const char* __restrict __nptr, char** __restrict __endptr, int __base);
unsigned long long int __isoc23_strtoull(const char* __restrict __nptr, char** __restrict __endptr, int __base);
int strfromd(char* __dest, unsigned long  int  __size  , const char* __format, double __f);
int strfromf(char* __dest, unsigned long  int  __size  , const char* __format, float __f);
int strfroml(char* __dest, unsigned long  int  __size  , const char* __format, long  double __f);
int strfromf32(char* __dest, unsigned long  int  __size  , const char* __format, float  __f  );
int strfromf64(char* __dest, unsigned long  int  __size  , const char* __format, double  __f  );
int strfromf32x(char* __dest, unsigned long  int  __size  , const char* __format, double  __f  );
int strfromf64x(char* __dest, unsigned long  int  __size  , const char* __format, long  double  __f  );
long  int strtol_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
unsigned long  int strtoul_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
long long int strtoll_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
unsigned long long int strtoull_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
long  int __isoc23_strtol_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
unsigned long  int __isoc23_strtoul_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
long long int __isoc23_strtoll_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
unsigned long long int __isoc23_strtoull_l(const char* __restrict __nptr, char** __restrict __endptr, int __base, struct __locale_struct*  __loc  );
double strtod_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
float strtof_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
long  double strtold_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
float  strtof32_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
double  strtof64_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
double  strtof32x_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
long  double  strtof64x_l(const char* __restrict __nptr, char** __restrict __endptr, struct __locale_struct*  __loc  );
char* l64a(long  int __n);
long  int a64l(const char* __s) __attribute__ ((__pure__))  ;
int select(int __nfds, struct anonymous_typeX8* __restrict  __readfds  , struct anonymous_typeX8* __restrict  __writefds  , struct anonymous_typeX8* __restrict  __exceptfds  , struct timeval* __restrict  __timeout  );
int pselect(int __nfds, struct anonymous_typeX8* __restrict  __readfds  , struct anonymous_typeX8* __restrict  __writefds  , struct anonymous_typeX8* __restrict  __exceptfds  , const struct timespec* __restrict  __timeout  , const struct anonymous_typeX7* __restrict  __sigmask  );
long  int random();
void srandom(unsigned int __seed);
char* initstate(unsigned int __seed, char* __statebuf, unsigned long  int  __statelen  );
char* setstate(char* __statebuf);
int random_r(struct random_data* __restrict  __buf  , int* __restrict  __result  );
int srandom_r(unsigned int __seed, struct random_data*  __buf  );
int initstate_r(unsigned int __seed, char* __restrict __statebuf, unsigned long  int  __statelen  , struct random_data* __restrict  __buf  );
int setstate_r(char* __restrict __statebuf, struct random_data* __restrict  __buf  );
int rand();
void srand(unsigned int __seed);
int rand_r(unsigned int* __seed);
double drand48();
double erand48(unsigned short int __xsubi[3]);
long  int lrand48();
long  int nrand48(unsigned short int __xsubi[3]);
long  int mrand48();
long  int jrand48(unsigned short int __xsubi[3]);
void srand48(long  int __seedval);
unsigned short int* seed48(unsigned short int __seed16v[3]);
void lcong48(unsigned short int __param[7]);
int drand48_r(struct drand48_data* __restrict  __buffer  , double* __restrict __result);
int erand48_r(unsigned short int __xsubi[3], struct drand48_data* __restrict  __buffer  , double* __restrict __result);
int lrand48_r(struct drand48_data* __restrict  __buffer  , long  int* __restrict __result);
int nrand48_r(unsigned short int __xsubi[3], struct drand48_data* __restrict  __buffer  , long  int* __restrict __result);
int mrand48_r(struct drand48_data* __restrict  __buffer  , long  int* __restrict __result);
int jrand48_r(unsigned short int __xsubi[3], struct drand48_data* __restrict  __buffer  , long  int* __restrict __result);
int srand48_r(long  int __seedval, struct drand48_data*  __buffer  );
int seed48_r(unsigned short int __seed16v[3], struct drand48_data*  __buffer  );
int lcong48_r(unsigned short int __param[7], struct drand48_data*  __buffer  );
unsigned int  arc4random();
void arc4random_buf(void* __buf, unsigned long  int  __size  );
unsigned int  arc4random_uniform(unsigned int  __upper_bound  );
void* malloc(unsigned long  int  __size  ) __attribute__ ((__malloc__))
      ;
void* calloc(unsigned long  int  __nmemb  , unsigned long  int  __size  ) __attribute__ ((__malloc__))  ;
void* realloc(void* __ptr, unsigned long  int  __size  );
void free(void* __ptr);
void* reallocarray(void* __ptr, unsigned long  int  __nmemb  , unsigned long  int  __size  );
void* alloca(unsigned long  int  __size  );
void* valloc(unsigned long  int  __size  ) __attribute__ ((__malloc__))
      ;
int posix_memalign(void** __memptr, unsigned long  int  __alignment  , unsigned long  int  __size  );
void* aligned_alloc(unsigned long  int  __alignment  , unsigned long  int  __size  ) __attribute__ ((__malloc__)) 
      ;
void abort() __attribute__ ((__noreturn__)) ;
int atexit(void (*__func)());
int at_quick_exit(void (*__func)());
int on_exit(void (*__func)(int,void*), void* __arg);
void exit(int __status) __attribute__ ((__noreturn__));
void quick_exit(int __status) __attribute__ ((__noreturn__));
void _Exit(int __status) __attribute__ ((__noreturn__));
char* getenv(const char* __name);
char* secure_getenv(const char* __name);
int putenv(char* __string);
int setenv(const char* __name, const char* __value, int __replace);
int unsetenv(const char* __name);
int clearenv();
char* mktemp(char* __template);
int mkstemp(char* __template);
int mkstemp64(char* __template);
int mkstemps(char* __template, int __suffixlen);
int mkstemps64(char* __template, int __suffixlen);
char* mkdtemp(char* __template);
int mkostemp(char* __template, int __flags);
int mkostemp64(char* __template, int __flags);
int mkostemps(char* __template, int __suffixlen, int __flags);
int mkostemps64(char* __template, int __suffixlen, int __flags);
int system(const char* __command);
char* canonicalize_file_name(const char* __name) __attribute__ ((__malloc__))
      ;
char* realpath(const char* __restrict __name, char* __restrict __resolved);
void* bsearch(const void* __key, const void* __base, unsigned long  int  __nmemb  , unsigned long  int  __size  , int (*__compar)(const void*,const void*)  );
void qsort(void* __base, unsigned long  int  __nmemb  , unsigned long  int  __size  , int (*__compar)(const void*,const void*)  );
void qsort_r(void* __base, unsigned long  int  __nmemb  , unsigned long  int  __size  , int (*__compar)(const void*,const void*,void*)  , void* __arg);
int abs(int __x) __attribute__ ((__const__)) ;
long  int labs(long  int __x) __attribute__ ((__const__)) ;
long long int llabs(long long int __x) __attribute__ ((__const__)) ;
unsigned int uabs(int __x) __attribute__ ((__const__)) ;
unsigned long  int ulabs(long  int __x) __attribute__ ((__const__)) ;
unsigned long long int ullabs(long long int __x) __attribute__ ((__const__)) ;
struct anonymous_typeX4  div(int __numer, int __denom) __attribute__ ((__const__)) ;
struct anonymous_typeX5  ldiv(long  int __numer, long  int __denom) __attribute__ ((__const__)) ;
struct anonymous_typeX6  lldiv(long long int __numer, long long int __denom) __attribute__ ((__const__)) ;
char* ecvt(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign);
char* fcvt(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign);
char* gcvt(double __value, int __ndigit, char* __buf);
char* qecvt(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign);
char* qfcvt(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign);
char* qgcvt(long  double __value, int __ndigit, char* __buf);
int ecvt_r(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  int  __len  );
int fcvt_r(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  int  __len  );
int qecvt_r(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  int  __len  );
int qfcvt_r(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  int  __len  );
int mblen(const char* __s, unsigned long  int  __n  );
int mbtowc(int* __restrict  __pwc  , const char* __restrict __s, unsigned long  int  __n  );
int wctomb(char* __s, int  __wchar  );
unsigned long  int  mbstowcs(int* __restrict  __pwcs  , const char* __restrict __s, unsigned long  int  __n  );
unsigned long  int  wcstombs(char* __restrict __s, const int* __restrict  __pwcs  , unsigned long  int  __n  );
int rpmatch(const char* __response);
int getsubopt(char** __restrict __optionp, char** const __restrict __tokens, char** __restrict __valuep);
int posix_openpt(int __oflag);
int grantpt(int __fd);
int unlockpt(int __fd);
char* ptsname(int __fd);
int ptsname_r(int __fd, char* __buf, unsigned long  int  __buflen  );
int getpt();
int getloadavg(double __loadavg[], int __nelem);
void* memcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  int  __n  );
void* memmove(void* __dest, const void* __src, unsigned long  int  __n  );
void* memccpy(void* __restrict __dest, const void* __restrict __src, int __c, unsigned long  int  __n  );
void* memset(void* __s, int __c, unsigned long  int  __n  );
int memcmp(const void* __s1, const void* __s2, unsigned long  int  __n  ) __attribute__ ((__pure__)) ;
int __memcmpeq(const void* __s1, const void* __s2, unsigned long  int  __n  ) __attribute__ ((__pure__)) ;
void* memchr(const void* __s, int __c, unsigned long  int  __n  ) __attribute__ ((__pure__)) ;
void* rawmemchr(const void* __s, int __c) __attribute__ ((__pure__)) ;
void* memrchr(const void* __s, int __c, unsigned long  int  __n  ) __attribute__ ((__pure__)) 
      ;
char* strcpy(char* __restrict __dest, const char* __restrict __src);
char* strncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  int  __n  );
char* strcat(char* __restrict __dest, const char* __restrict __src);
char* strncat(char* __restrict __dest, const char* __restrict __src, unsigned long  int  __n  );
int strcmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
int strncmp(const char* __s1, const char* __s2, unsigned long  int  __n  ) __attribute__ ((__pure__)) ;
int strcoll(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
unsigned long  int  strxfrm(char* __restrict __dest, const char* __restrict __src, unsigned long  int  __n  );
int strcoll_l(const char* __s1, const char* __s2, struct __locale_struct*  __l  ) __attribute__ ((__pure__)) ;
unsigned long  int  strxfrm_l(char* __dest, const char* __src, unsigned long  int  __n  , struct __locale_struct*  __l  );
char* strdup(const char* __s) __attribute__ ((__malloc__)) ;
char* strndup(const char* __string, unsigned long  int  __n  ) __attribute__ ((__malloc__)) ;
char* strchr(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* strrchr(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* strchrnul(const char* __s, int __c) __attribute__ ((__pure__)) ;
unsigned long  int  strcspn(const char* __s, const char* __reject) __attribute__ ((__pure__)) ;
unsigned long  int  strspn(const char* __s, const char* __accept) __attribute__ ((__pure__)) ;
char* strpbrk(const char* __s, const char* __accept) __attribute__ ((__pure__)) ;
char* strstr(const char* __haystack, const char* __needle) __attribute__ ((__pure__)) ;
char* strtok(char* __restrict __s, const char* __restrict __delim);
char* __strtok_r(char* __restrict __s, const char* __restrict __delim, char** __restrict __save_ptr);
char* strtok_r(char* __restrict __s, const char* __restrict __delim, char** __restrict __save_ptr);
char* strcasestr(const char* __haystack, const char* __needle) __attribute__ ((__pure__)) ;
void* memmem(const void* __haystack, unsigned long  int  __haystacklen  , const void* __needle, unsigned long  int  __needlelen  ) __attribute__ ((__pure__)) 
    
    ;
void* __mempcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  int  __n  );
void* mempcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  int  __n  );
unsigned long  int  strlen(const char* __s) __attribute__ ((__pure__)) ;
unsigned long  int  strnlen(const char* __string, unsigned long  int  __maxlen  ) __attribute__ ((__pure__)) ;
char* strerror(int __errnum);
char* strerror_r(int __errnum, char* __buf, unsigned long  int  __buflen  );
const char* strerrordesc_np(int __err);
const char* strerrorname_np(int __err);
char* strerror_l(int __errnum, struct __locale_struct*  __l  );
int bcmp(const void* __s1, const void* __s2, unsigned long  int  __n  ) __attribute__ ((__pure__)) ;
void bcopy(const void* __src, void* __dest, unsigned long  int  __n  );
void bzero(void* __s, unsigned long  int  __n  );
char* index(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* rindex(const char* __s, int __c) __attribute__ ((__pure__)) ;
int ffs(int __i) __attribute__ ((__const__));
int ffsl(long  int __l) __attribute__ ((__const__));
int ffsll(long long int __ll) __attribute__ ((__const__));
int strcasecmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
int strncasecmp(const char* __s1, const char* __s2, unsigned long  int  __n  ) __attribute__ ((__pure__)) ;
int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_struct*  __loc  ) __attribute__ ((__pure__)) ;
int strncasecmp_l(const char* __s1, const char* __s2, unsigned long  int  __n  , struct __locale_struct*  __loc  ) __attribute__ ((__pure__)) ;
void explicit_bzero(void* __s, unsigned long  int  __n  );
char* strsep(char** __restrict __stringp, const char* __restrict __delim);
char* strsignal(int __sig);
const char* sigabbrev_np(int __sig);
const char* sigdescr_np(int __sig);
char* __stpcpy(char* __restrict __dest, const char* __restrict __src);
char* stpcpy(char* __restrict __dest, const char* __restrict __src);
char* __stpncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  int  __n  );
char* stpncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  int  __n  );
unsigned long  int  strlcpy(char* __restrict __dest, const char* __restrict __src, unsigned long  int  __n  );
unsigned long  int  strlcat(char* __restrict __dest, const char* __restrict __src, unsigned long  int  __n  );
int strverscmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
char* strfry(char* __string);
void* memfrob(void* __s, unsigned long  int  __n  );
char* basename(const char* __filename);
long  int __sysconf(int __name);
char* setlocale(int __category, const char* __locale);
struct lconv*  localeconv();
struct __locale_struct*  newlocale(int __category_mask, const char* __locale, struct __locale_struct*  __base  );
struct __locale_struct*  duplocale(struct __locale_struct*  __dataset  );
void freelocale(struct __locale_struct*  __dataset  );
struct __locale_struct*  uselocale(struct __locale_struct*  __dataset  );
int* __errno_location() __attribute__ ((__const__));
void __assert_fail(const char* __assertion, const char* __file, unsigned int __line, const char* __function) __attribute__ ((__noreturn__)) ;
void __assert_perror_fail(int __errnum, const char* __file, unsigned int __line, const char* __function) __attribute__ ((__noreturn__)) ;
void __assert(const char* __assertion, const char* __file, int __line) __attribute__ ((__noreturn__)) ;
int*  wcscpy(int* __restrict  __dest  , const int* __restrict  __src  );
int*  wcsncpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  int  __n  );
unsigned long  int  wcslcpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  int  __n  );
unsigned long  int  wcslcat(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  int  __n  );
int*  wcscat(int* __restrict  __dest  , const int* __restrict  __src  );
int*  wcsncat(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  int  __n  );
int wcscmp(const int*  __s1  , const int*  __s2  ) __attribute__ ((__pure__)) ;
int wcsncmp(const int*  __s1  , const int*  __s2  , unsigned long  int  __n  ) __attribute__ ((__pure__)) ;
int wcscasecmp(const int*  __s1  , const int*  __s2  );
int wcsncasecmp(const int*  __s1  , const int*  __s2  , unsigned long  int  __n  );
int wcscasecmp_l(const int*  __s1  , const int*  __s2  , struct __locale_struct*  __loc  );
int wcsncasecmp_l(const int*  __s1  , const int*  __s2  , unsigned long  int  __n  , struct __locale_struct*  __loc  );
int wcscoll(const int*  __s1  , const int*  __s2  );
unsigned long  int  wcsxfrm(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  int  __n  );
int wcscoll_l(const int*  __s1  , const int*  __s2  , struct __locale_struct*  __loc  );
unsigned long  int  wcsxfrm_l(int*  __s1  , const int*  __s2  , unsigned long  int  __n  , struct __locale_struct*  __loc  );
int*  wcsdup(const int*  __s  ) __attribute__ ((__malloc__)) ;
int*  wcschr(const int*  __wcs  , int  __wc  ) __attribute__ ((__pure__));
int*  wcsrchr(const int*  __wcs  , int  __wc  ) __attribute__ ((__pure__));
int*  wcschrnul(const int*  __s  , int  __wc  ) __attribute__ ((__pure__));
unsigned long  int  wcscspn(const int*  __wcs  , const int*  __reject  ) __attribute__ ((__pure__));
unsigned long  int  wcsspn(const int*  __wcs  , const int*  __accept  ) __attribute__ ((__pure__));
int*  wcspbrk(const int*  __wcs  , const int*  __accept  ) __attribute__ ((__pure__));
int*  wcsstr(const int*  __haystack  , const int*  __needle  ) __attribute__ ((__pure__));
int*  wcstok(int* __restrict  __s  , const int* __restrict  __delim  , int** __restrict  __ptr  );
unsigned long  int  wcslen(const int*  __s  ) __attribute__ ((__pure__));
int*  wcswcs(const int*  __haystack  , const int*  __needle  ) __attribute__ ((__pure__));
unsigned long  int  wcsnlen(const int*  __s  , unsigned long  int  __maxlen  ) __attribute__ ((__pure__));
int*  wmemchr(const int*  __s  , int  __c  , unsigned long  int  __n  ) __attribute__ ((__pure__));
int wmemcmp(const int*  __s1  , const int*  __s2  , unsigned long  int  __n  ) __attribute__ ((__pure__));
int*  wmemcpy(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  int  __n  );
int*  wmemmove(int*  __s1  , const int*  __s2  , unsigned long  int  __n  );
int*  wmemset(int*  __s  , int  __c  , unsigned long  int  __n  );
int*  wmempcpy(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  int  __n  );
unsigned int  btowc(int __c);
int wctob(unsigned int  __c  );
int mbsinit(const struct anonymous_typeX1*  __ps  ) __attribute__ ((__pure__));
unsigned long  int  mbrtowc(int* __restrict  __pwc  , const char* __restrict __s, unsigned long  int  __n  , struct anonymous_typeX1* __restrict  __p  );
unsigned long  int  wcrtomb(char* __restrict __s, int  __wc  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  int  __mbrlen(const char* __restrict __s, unsigned long  int  __n  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  int  mbrlen(const char* __restrict __s, unsigned long  int  __n  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  int  mbsrtowcs(int* __restrict  __dst  , const char** __restrict __src, unsigned long  int  __len  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  int  wcsrtombs(char* __restrict __dst, const int** __restrict  __src  , unsigned long  int  __len  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  int  mbsnrtowcs(int* __restrict  __dst  , const char** __restrict __src, unsigned long  int  __nmc  , unsigned long  int  __len  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  int  wcsnrtombs(char* __restrict __dst, const int** __restrict  __src  , unsigned long  int  __nwc  , unsigned long  int  __len  , struct anonymous_typeX1* __restrict  __ps  );
int wcwidth(int  __c  );
int wcswidth(const int*  __s  , unsigned long  int  __n  );
double wcstod(const int* __restrict  __nptr  , int** __restrict  __endptr  );
float wcstof(const int* __restrict  __nptr  , int** __restrict  __endptr  );
long  double wcstold(const int* __restrict  __nptr  , int** __restrict  __endptr  );
float  wcstof32(const int* __restrict  __nptr  , int** __restrict  __endptr  );
double  wcstof64(const int* __restrict  __nptr  , int** __restrict  __endptr  );
double  wcstof32x(const int* __restrict  __nptr  , int** __restrict  __endptr  );
long  double  wcstof64x(const int* __restrict  __nptr  , int** __restrict  __endptr  );
long  int wcstol(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long  int wcstoul(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long long int wcstoll(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long long int wcstoull(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long long int wcstoq(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long long int wcstouq(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long  int __isoc23_wcstol(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long  int __isoc23_wcstoul(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long long int __isoc23_wcstoll(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
unsigned long long int __isoc23_wcstoull(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base);
long  int wcstol_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long  int wcstoul_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
long long int wcstoll_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long long int wcstoull_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
long  int __isoc23_wcstol_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long  int __isoc23_wcstoul_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
long long int __isoc23_wcstoll_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
unsigned long long int __isoc23_wcstoull_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , int __base, struct __locale_struct*  __loc  );
double wcstod_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
float wcstof_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
long  double wcstold_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
float  wcstof32_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
double  wcstof64_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
double  wcstof32x_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
long  double  wcstof64x_l(const int* __restrict  __nptr  , int** __restrict  __endptr  , struct __locale_struct*  __loc  );
int*  wcpcpy(int* __restrict  __dest  , const int* __restrict  __src  );
int*  wcpncpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  int  __n  );
struct _IO_FILE*  open_wmemstream(int**  __bufloc  , unsigned long  int*  __sizeloc  ) __attribute__ ((__malloc__)) ;
int fwide(struct _IO_FILE*  __fp  , int __mode);
int fwprintf(struct _IO_FILE* __restrict  __stream  , const int* __restrict  __format  , ...);
int wprintf(const int* __restrict  __format  , ...);
int swprintf(int* __restrict  __s  , unsigned long  int  __n  , const int* __restrict  __format  , ...);
int vfwprintf(struct _IO_FILE* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int vwprintf(const int* __restrict  __format  , __builtin_va_list  __arg  );
int vswprintf(int* __restrict  __s  , unsigned long  int  __n  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int fwscanf(struct _IO_FILE* __restrict  __stream  , const int* __restrict  __format  , ...);
int wscanf(const int* __restrict  __format  , ...);
int swscanf(const int* __restrict  __s  , const int* __restrict  __format  , ...);
int __isoc23_fwscanf(struct _IO_FILE* __restrict  __stream  , const int* __restrict  __format  , ...);
int __isoc23_wscanf(const int* __restrict  __format  , ...);
int __isoc23_swscanf(const int* __restrict  __s  , const int* __restrict  __format  , ...);
int vfwscanf(struct _IO_FILE* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int vwscanf(const int* __restrict  __format  , __builtin_va_list  __arg  );
int vswscanf(const int* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int __isoc23_vfwscanf(struct _IO_FILE* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int __isoc23_vwscanf(const int* __restrict  __format  , __builtin_va_list  __arg  );
int __isoc23_vswscanf(const int* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
unsigned int  fgetwc(struct _IO_FILE*  __stream  );
unsigned int  getwc(struct _IO_FILE*  __stream  );
unsigned int  getwchar();
unsigned int  fputwc(int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  putwc(int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  putwchar(int  __wc  );
int*  fgetws(int* __restrict  __ws  , int __n, struct _IO_FILE* __restrict  __stream  );
int fputws(const int* __restrict  __ws  , struct _IO_FILE* __restrict  __stream  );
unsigned int  ungetwc(unsigned int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  getwc_unlocked(struct _IO_FILE*  __stream  );
unsigned int  getwchar_unlocked();
unsigned int  fgetwc_unlocked(struct _IO_FILE*  __stream  );
unsigned int  fputwc_unlocked(int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  putwc_unlocked(int  __wc  , struct _IO_FILE*  __stream  );
unsigned int  putwchar_unlocked(int  __wc  );
int*  fgetws_unlocked(int* __restrict  __ws  , int __n, struct _IO_FILE* __restrict  __stream  );
int fputws_unlocked(const int* __restrict  __ws  , struct _IO_FILE* __restrict  __stream  );
unsigned long  int  wcsftime(int* __restrict  __s  , unsigned long  int  __maxsize  , const int* __restrict  __format  , const struct tm* __restrict  __tp  );
unsigned long  int  wcsftime_l(int* __restrict  __s  , unsigned long  int  __maxsize  , const int* __restrict  __format  , const struct tm* __restrict  __tp  , struct __locale_struct*  __loc  );
int charp_index_regex(const char* self, const char* reg, int default_value, _Bool ignore_case);
int charp_rindex_regex(const char* self, const char* reg, int default_value, _Bool ignore_case);
char*  string_chomp(const char* str);
int string_rindex_regex(char* self, const char* reg, int default_value, _Bool ignore_case);
int string_index_regex(char* self, const char* reg, int default_value, _Bool ignore_case);
_Bool charp_match(char* self, const char* reg, _Bool ignore_case);
struct list$1char$ph* charp_scan(const char* self, const char* reg, _Bool ignore_case);
struct list$1char$ph* charp_split(const char* self, const char* reg, _Bool ignore_case);
char*  string_sub(char* self, const char* reg, const char* replace, _Bool ignore_case);
struct list$1char$ph* string_scan(char* self, const char* reg, _Bool ignore_case);
struct list$1char$ph* string_split(char* self, const char* reg, _Bool ignore_case);
_Bool string_match(char* self, const char* reg, _Bool ignore_case);
char*  charp_sub(char* self, const char* reg, const char* replace, _Bool global, _Bool ignore_case);
char*  charp_sub_block(char* self, const char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
struct list$1char$ph* charp_scan_block(const char* self, const char* reg, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
char*  string_sub_block(char* self, const char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
int*  __builtin_wstring(const char* str, char* sname, int sline);
int wchar_tp_length(const int*  str  );
int wchar_ta_length(const int*  str  );
int wstring_length(const int*  str  );
char*  string_lower_case(char* str);
char*  string_upper_case(char* str);
int*  wchar_tp_substring(const int*  str  , int head, int tail);
int charp_index_count(const char* str, const char* search_str, int count, int default_value);
int charp_rindex(const char* str, const char* search_str, int default_value);
int charp_rindex_count(const char* str, const char* search_str, int count, int default_value);
char*  charp_strip(const char* self);
char*  wchar_tp_to_string(const int*  wstr  );
char*  wchar_ta_to_string(const int*  wstr  );
int*  charp_to_wstring(const char* str);
int*  chara_to_wstring(char* str);
int*  wchar_tp_delete(int*  str  , int head, int tail);
int wchar_tp_index(const int*  str  , const int*  search_str  , int default_value);
int wchar_tp_rindex(const int*  str  , const int*  search_str  , int default_value);
int*  wchar_tp_reverse(const int*  str  );
int*  wchar_tp_multiply(const int*  str  , int n);
int*  wchar_tp_printable(const int*  str  );
int wchar_tp_compare(const int*  left  , int*  right  );
int wstring_compare(const int*  left  , const int*  right  );
int*  wchar_tp_operator_mult(const int*  str  , int n);
int*  wstring_operator_mult(const int*  str  , int n);
_Bool wstring_operator_equals(const int*  left  , const int*  right  );
_Bool wstring_operator_not_equals(const int*  left  , const int*  right  );
int*  wchar_tp_operator_add(const int*  left  , const int*  right  );
int*  wstring_operator_add(const int*  left  , const int*  right  );
char*  charp_replace(char* self, int index, char c);
char*  charp_multiply(const char* str, int n);
struct list$1char$ph* charp_split_str(const char* self, const char* str);
unsigned int wchar_tp_get_hash_key(const int*  value  );
_Bool wstring_equals(const int*  left  , const int*  right  );
_Bool wchar_t_operator_equals(int  left  , int  right  );
_Bool wchar_t_operator_not_equals(int  left  , int  right  );
unsigned int wchar_t_get_hash_key(int  value  );
_Bool wchar_t_equals(int  left  , int  right  );
char*  wchar_t_to_string(int  wc  );
char*  xrealpath(const char* path);
char*  xdirname(const char* path);
unsigned long  int  xwcslen(const int*  wstr  );
int*  wstring_substring(const int*  str  , int head, int tail);
int string_index_count(const char* str, const char* search_str, int count, int default_value);
int string_rindex(const char* str, const char* search_str, int default_value);
int string_rindex_count(const char* str, const char* search_str, int count, int default_value);
char*  string_strip(const char* self);
char*  wstring_to_string(const int*  wstr  );
int*  int_to_wstring(int self);
int*  wstring_delete(int*  str  , int head, int tail);
int wstring_index(const int*  str  , const int*  search_str  , int default_value);
int wstring_rindex(const int*  str  , const int*  search_str  , int default_value);
int*  wstring_reverse(const int*  str  );
int*  wstring_multiply(const int*  str  , int n);
int*  wstring_printable(const int*  str  );
unsigned int wstring_get_hash_key(const int*  value  );
char*  string_replace(char* self, int index, char c);
char*  string_multiply(const char* str, int n);
struct list$1char$ph* string_split_str(const char* self, const char* str);
int*  string_to_wstring(const char* str);
char*  charp_chomp(const char* str);
_Bool wchar_tp_equals(const int*  left  , const int*  right  );
_Bool wchar_tp_operator_equals(const int*  left  , const int*  right  );
_Bool wchar_tp_operator_not_equals(const int*  left  , const int*  right  );
int fun();
void fun2();
void funX();
int funXXX();
int funUHO();
int funZZ();
int fun_v2(int a, int b);
int  f(int  x  );
int funXXXXXXXX();
int funHO();
int main(int argc, char** argv);
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static struct list$1int$* list$1int$_filter(struct list$1int$* self, void* parent, _Bool (*block)(void*,int));
static struct list$1int$* list$1int$_initialize(struct list$1int$* self);
_Bool method_block1_codecomelangnc(struct __current_stack1__* parent, int it);
static int list$1int$_length(struct list$1int$* self);
_Bool method_block2_codecomelangnc(struct __current_stack2__* parent, int it);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
char*  method_block4_codecomelangnc(struct __current_stack4__* parent, int it);
static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values);
static _Bool list$1char$ph$p_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right);
char*  method_block6_codecomelangnc(struct __current_stack6__* parent, int it);
static _Bool list$1char$ph_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right);
_Bool method_block7_codecomelangnc(struct __current_stack7__* parent, int it);
char*  method_block9_codecomelangnc(struct __current_stack9__* parent, int it);
int method_block11_codecomelangnc(struct __current_stack11__* parent, char*  it  );
static _Bool list$1int$$p_operator_equals(struct list$1int$* left, struct list$1int$* right);
_Bool method_block12_codecomelangnc(struct __current_stack12__* parent, int it);
static struct list$1char$ph* list$1int$_map(struct list$1int$* self, void* parent, char*  (*block)(void*,int));
char*  method_block14_codecomelangnc(struct __current_stack14__* parent, int it);
static struct list$1int$* list$1char$ph_map(struct list$1char$ph* self, void* parent, int (*block)(void*,char* ));
int method_block16_codecomelangnc(struct __current_stack16__* parent, char*  it  );
static _Bool list$1int$_operator_equals(struct list$1int$* left, struct list$1int$* right);
void stackframe();
void stackframe2(void* mem);
_Bool die(const char* msg, char* sname, int sline);
void come_memleak_checker();
void* alloc_from_pages(unsigned long  int  size  );
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  int  compiletime_size  , unsigned long  int  size  , const char* sname, int sline, int id, const char* class_name);
char* come_dynamic_typeof(void* mem);
unsigned long  int  dynamic_sizeof(void* mem);
void* come_calloc(unsigned long  int  count  , unsigned long  int  size  , const char* sname, int sline, int id, const char* class_name);
_Bool come_is_alive(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, int id, const char* class_name);
void* come_increment_ref_count(void* mem, char* sname, int sline, int id);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj, char* sname, int sline, int id);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj, char* sname, int sline, int id);
void xassert(const char* msg, _Bool test);
void* come_null_checker(void* mem, const char* sname, int sline, int id);
void* come_heap_checker(void* mem, const char* sname, int sline, int id);
char*  __builtin_string(const char* str, char* sname, int sline);
struct buffer*  buffer_initialize(struct buffer*  self  );
struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  int  size  );
void buffer_finalize(struct buffer*  self  );
struct buffer*  buffer_clone(struct buffer*  self  );
_Bool buffer_equals(struct buffer*  left  , struct buffer*  right  );
int buffer_length(struct buffer*  self  );
void buffer_reset(struct buffer*  self  );
void buffer_trim(struct buffer*  self  , int len);
struct buffer*  buffer_append(struct buffer*  self  , const char* mem, unsigned long  int  size  );
struct buffer*  buffer_append_char(struct buffer*  self  , char c);
struct buffer*  buffer_append_str(struct buffer*  self  , const char* mem);
struct buffer*  buffer_append_format(struct buffer*  self  , const char* msg, ...);
struct buffer*  buffer_append_nullterminated_str(struct buffer*  self  , const char* mem);
struct buffer*  buffer_append_int(struct buffer*  self  , int value);
struct buffer*  buffer_append_long(struct buffer*  self  , long value);
struct buffer*  buffer_append_short(struct buffer*  self  , short value);
struct buffer*  buffer_alignment(struct buffer*  self  );
int buffer_compare(struct buffer*  left  , struct buffer*  right  );
struct buffer*  charp_to_buffer(const char* self);
char*  buffer_to_string(struct buffer*  self  );
unsigned char* buffer_head_pointer(struct buffer*  self  );
struct buffer*  chara_to_buffer(char* self, unsigned long  int  len  );
struct buffer*  charpa_to_buffer(char** self, unsigned long  int  len  );
struct buffer*  shorta_to_buffer(short* self, unsigned long  int  len  );
struct buffer*  inta_to_buffer(int* self, unsigned long  int  len  );
struct buffer*  longa_to_buffer(long* self, unsigned long  int  len  );
struct buffer*  floata_to_buffer(float* self, unsigned long  int  len  );
struct buffer*  doublea_to_buffer(double* self, unsigned long  int  len  );
char*  buffer_printable(struct buffer*  self  );
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$* chara_to_list(char* self, unsigned long  int  len  );
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1char$p* charpa_to_list(char** self, unsigned long  int  len  );
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1short$* shorta_to_list(short* self, unsigned long  int  len  );
struct list$1int$* inta_to_list(int* self, unsigned long  int  len  );
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1long$* longa_to_list(long* self, unsigned long  int  len  );
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1float$* floata_to_list(float* self, unsigned long  int  len  );
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
struct list$1double$* doublea_to_list(double* self, unsigned long  int  len  );
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  int  self  , unsigned long  int  right  );
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool _Bool_operator_equals(_Bool self, _Bool right);
_Bool char_operator_equals(char self, char right);
_Bool short_operator_equals(short self, short right);
_Bool int_operator_equals(int self, int right);
_Bool long_operator_equals(long self, long right);
_Bool _Bool_operator_not_equals(_Bool self, _Bool right);
_Bool char_operator_not_equals(char self, char right);
_Bool short_operator_not_equals(short self, short right);
_Bool int_operator_not_equals(int self, int right);
_Bool long_operator_not_equals(long self, long right);
_Bool charp_equals(const char* self, const char* right);
_Bool string_equals(char* self, const char* right);
_Bool voidp_equals(void* self, void* right);
_Bool _Boolp_equals(_Bool* self, _Bool* right);
_Bool string_operator_equals(char* self, const char* right);
_Bool charp_operator_equals(const char* self, const char* right);
_Bool chara_operator_equals(char* self, const char* right);
_Bool voidp_operator_equals(const char* self, const char* right);
_Bool voidp_operator_not_equals(const char* self, const char* right);
_Bool string_operator_not_equals(char* self, const char* right);
_Bool charp_operator_not_equals(const char* self, const char* right);
_Bool chara_operator_not_equals(char* self, const char* right);
char*  charp_operator_add(const char* self, const char* right);
char*  string_operator_add(char* self, const char* right);
char*  charp_operator_mult(const char* self, int right);
char*  string_operator_mult(const char* self, int right);
_Bool charpa_contained(const char* self[], unsigned long  int  len  , const char* str);
unsigned long  int  shorta_length(short* self, unsigned long  int  len  );
unsigned long  int  inta_length(int* self, unsigned long  int  len  );
unsigned long  int  longa_length(long* self, unsigned long  int  len  );
unsigned long  int  floata_length(float* self, unsigned long  int  len  );
unsigned long  int  doublea_length(double* self, unsigned long  int  len  );
unsigned int _Bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int  value  );
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(const char* value);
unsigned int string_get_hash_key(char* value);
unsigned int voidp_get_hash_key(void* value);
_Bool _Bool_clone(_Bool self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int  size_t_clone(unsigned long  int  self  );
double double_clone(double self);
float float_clone(float self);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisspace(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xispunct(char c);
int string_length(const char* str);
int charp_length(const char* str);
int chara_length(const char* str);
char*  charp_reverse(const char* str);
char*  string_operator_load_range_element(char* str, int head, int tail);
char*  charp_operator_load_range_element(char* str, int head, int tail);
char*  charp_substring(const char* str, int head, int tail);
char*  xsprintf(const char* msg, ...);
char*  charp_delete(char* str, int head, int tail);
struct list$1char$ph* charp_split_char(char* self, char c);
char*  charp_xsprintf(char* self, const char* msg, ...);
char*  int_xsprintf(int self, const char* msg, ...);
char*  charp_printable(char* str);
char*  chara_printable(char* str);
char*  charp_sub_plain(char* self, char* str, char* replace);
char*  xbasename(char* path);
char*  xnoextname(char* path);
char*  xextname(char* path);
char*  _Bool_to_string(_Bool self);
char*  char_to_string(char self);
char*  short_to_string(short self);
char*  int_to_string(int self);
char*  long_to_string(long self);
char*  size_t_to_string(unsigned long  int  self  );
char*  float_to_string(float self);
char*  double_to_string(double self);
char*  string_to_string(char* self);
char*  charp_to_string(const char* self);
int _Bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  int  left  , unsigned long  int  right  );
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char*  charp_puts(char* self);
char*  charp_print(char* self);
char*  charp_printf(char* self, ...);
int int_printf(int self, char* msg);
long long_printf(long self, char* msg);
void int_times(int self, void* parent, void (*block)(void*,int));
struct buffer*  FILE_read(struct _IO_FILE*  f  );
int FILE_write(struct _IO_FILE*  f  , const char* str);
int FILE_fclose(struct _IO_FILE*  f  );
struct _IO_FILE*  FILE_fprintf(struct _IO_FILE*  f  , const char* msg, ...);
int charp_write(const char* self, const char* file_name, _Bool append);
struct buffer*  charp_read(const char* file_name);
struct list$1char$ph* FILE_readlines(struct _IO_FILE*  f  );
_Bool xiswalpha(int  c  );
_Bool xiswblank(int  c  );
_Bool xiswdigit(int  c  );
_Bool xiswalnum(int  c  );
_Bool xiswascii(int  c  );
int string_index(char* str, const char* search_str, int default_value);
int charp_index(const char* str, const char* search_str, int default_value);
// uniq global variable
struct neo_frame*  neo_current_frame  =(void*)0;

struct sMemHeader*  gAllocMem  =(void*)0;

struct sMemHeader*  gFreeMem  =(void*)0;

int gComeDebugLib=0;

int gNumAlloc=0;

int gNumFree=0;

// inline function
static inline unsigned short int  __bswap_16(unsigned short int  __bsx  )
{
    # 38 "/usr/include/bits/byteswap.h"
        return ((unsigned short int )((((__bsx)>>8)&0xff)|(((__bsx)&0xff)<<8)));
}
static inline unsigned int  __bswap_32(unsigned int  __bsx  )
{
    # 51 "/usr/include/bits/byteswap.h"
        return ((((__bsx)&0xff000000u)>>24)|(((__bsx)&0x00ff0000u)>>8)|(((__bsx)&0x0000ff00u)<<8)|(((__bsx)&0x000000ffu)<<24));
}
static inline unsigned long  int  __bswap_64(unsigned long  int  __bsx  )
{
    # 64 "/usr/include/bits/byteswap.h"
        return ((((__bsx)&0xff00000000000000ull)>>56)|(((__bsx)&0x00ff000000000000ull)>>40)|(((__bsx)&0x0000ff0000000000ull)>>24)|(((__bsx)&0x000000ff00000000ull)>>8)|(((__bsx)&0x00000000ff000000ull)<<8)|(((__bsx)&0x0000000000ff0000ull)<<24)|(((__bsx)&0x000000000000ff00ull)<<40)|(((__bsx)&0x00000000000000ffull)<<56));
}
static inline unsigned short int  __uint16_identity(unsigned short int  __x  )
{
    # 35 "/usr/include/bits/uintn-identity.h"
        return __x;
}
static inline unsigned int  __uint32_identity(unsigned int  __x  )
{
    # 41 "/usr/include/bits/uintn-identity.h"
        return __x;
}
static inline unsigned long  int  __uint64_identity(unsigned long  int  __x  )
{
    # 47 "/usr/include/bits/uintn-identity.h"
        return __x;
}

// body function
int fun()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "fun"; neo_current_frame = &fr;
    int x;
    char* s;
    memset(&s, 0, sizeof(s));
    # 23 "code/comelang.nc"
    x=42;
    # 23 "code/comelang.nc"
    # 23 "code/comelang.nc"
        neo_current_frame = fr.prev;
    return x;
    neo_current_frame = fr.prev;
}

void fun2()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "fun2"; neo_current_frame = &fr;
    void* vp;
    long  long* llp;
    unsigned long  long* ullp;
    char* rc;
    struct P2*  pp  ;
    enum E2  e  ;
    # 45 "code/comelang.nc"
    vp=(void*)0;
    # 46 "code/comelang.nc"
    llp=(volatile long  long*)vp;
    # 47 "code/comelang.nc"
    ullp=(volatile unsigned long  long*)vp;
    # 48 "code/comelang.nc"
    rc=(char* restrict)vp;
    # 49 "code/comelang.nc"
    pp=(const struct P2* )vp;
    # 50 "code/comelang.nc"
    e=(enum E2 )0;
    # 51 "code/comelang.nc"
    (void)llp;
    # 51 "code/comelang.nc"
    (void)ullp;
    # 51 "code/comelang.nc"
    (void)rc;
    # 51 "code/comelang.nc"
    (void)pp;
    # 51 "code/comelang.nc"
    (void)e;
    neo_current_frame = fr.prev;
}

void funX()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "funX"; neo_current_frame = &fr;
    void* vp;
    long  double** ldpp;
    int*** ippp;
    union U  u  ;
    enum E3  e  ;
    # 66 "code/comelang.nc"
    vp=(void*)0;
    # 67 "code/comelang.nc"
    ldpp=(long  double**)vp;
    # 68 "code/comelang.nc"
    ippp=(int***)vp;
    # 69 "code/comelang.nc"
    u=(union U )0;
    # 70 "code/comelang.nc"
    e=(enum E3 )1;
    # 71 "code/comelang.nc"
    (void)gl;
    # 71 "code/comelang.nc"
    (void)gi;
    # 71 "code/comelang.nc"
    (void)ldpp;
    # 71 "code/comelang.nc"
    (void)ippp;
    # 71 "code/comelang.nc"
    (void)u;
    # 71 "code/comelang.nc"
    (void)e;
    neo_current_frame = fr.prev;
}

int funXXX()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "funXXX"; neo_current_frame = &fr;
    # 83 "code/comelang.nc"
    struct PXYZ  p  ={ .y = 10, .x = 5 };
    # 84 "code/comelang.nc"
    int a[5]={ [2] = 3, [4] = 7 };
    # 85 "code/comelang.nc"
        neo_current_frame = fr.prev;
    return p.x+a[2];
    neo_current_frame = fr.prev;
}

int funUHO()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "funUHO"; neo_current_frame = &fr;
    # 89 "code/comelang.nc"
    struct PXYZ  p  ={ .y = 10, .x = 5 };
    # 90 "code/comelang.nc"
    int a[5]={ [2] = 3, [4] = 7 };
    # 91 "code/comelang.nc"
        neo_current_frame = fr.prev;
    return p.x+a[2];
    neo_current_frame = fr.prev;
}

int funZZ()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "funZZ"; neo_current_frame = &fr;
    # 126 "code/comelang.nc"
    int a[3]={1,2,3};
    # 127 "code/comelang.nc"
    struct PXXX  p  ={ 10, 20 };
    # 128 "code/comelang.nc"
    int b[2][2]={{1,2},{3,4}};
    # 129 "code/comelang.nc"
        neo_current_frame = fr.prev;
    return a[0];
    neo_current_frame = fr.prev;
}

int fun_v2(int a, int b)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "fun_v2"; neo_current_frame = &fr;
    # 170 "code/comelang.nc"
        neo_current_frame = fr.prev;
    return a+b;
    neo_current_frame = fr.prev;
}

int  f(int  x  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "f"; neo_current_frame = &fr;
    # 173 "code/comelang.nc"
        neo_current_frame = fr.prev;
    return x;
    neo_current_frame = fr.prev;
}

int funXXXXXXXX()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "funXXXXXXXX"; neo_current_frame = &fr;
    int  a  ;
    # 174 "code/comelang.nc"
    a=1;
    # 174 "code/comelang.nc"
        neo_current_frame = fr.prev;
    return f(a);
    neo_current_frame = fr.prev;
}

int funHO()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "funHO"; neo_current_frame = &fr;
    # 186 "code/comelang.nc"
    struct SSS  s  ={ .inner.b[1] = 9, .inner.b[2 ... 4] = 7 };
    # 187 "code/comelang.nc"
    int x[5]={ [0 ... 2] = 1, [4] = 5 };
    # 188 "code/comelang.nc"
        neo_current_frame = fr.prev;
    return s.inner.b[2]+x[0];
    neo_current_frame = fr.prev;
}

int main(int argc, char** argv)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "main"; neo_current_frame = &fr;
    int xxx;
    int  x  ;
    int (*f)(int,char*)  ;
    int __list_values1__[5];
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* li;
    int x_2;
    struct __current_stack1__ __current_stack1__;
    _Bool _conditional_value_X0;
    int y;
    int i;
    struct __current_stack2__ __current_stack2__;
    int a_3;
    int b;
    int a_4;
    int c;
    int a_5;
    int a_6;
    char*  a_7  ;
    int __list_values2__[3];
    struct __current_stack4__ __current_stack4__;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    char* __list_values3__[3];
    void* __right_value6 = (void*)0;
    void* __right_value7 = (void*)0;
    int __list_values4__[3];
    void* __right_value8 = (void*)0;
    void* __right_value9 = (void*)0;
    struct __current_stack6__ __current_stack6__;
    void* __right_value10 = (void*)0;
    void* __right_value11 = (void*)0;
    void* __right_value12 = (void*)0;
    void* __right_value13 = (void*)0;
    char* __list_values5__[3];
    void* __right_value14 = (void*)0;
    void* __right_value15 = (void*)0;
    int __list_values6__[5];
    struct __current_stack7__ __current_stack7__;
    struct __current_stack9__ __current_stack9__;
    struct __current_stack11__ __current_stack11__;
    int __list_values7__[3];
    int __list_values8__[5];
    struct __current_stack12__ __current_stack12__;
    struct __current_stack14__ __current_stack14__;
    struct __current_stack16__ __current_stack16__;
    int __list_values9__[3];
    int x_12;
    int y_13;
    void* vp;
    int* ip;
    struct P*  pp  ;
    int z;
    int __result_obj__0;
    memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
    memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    memset(&__current_stack4__, 0, sizeof(struct __current_stack4__));
    memset(&__current_stack6__, 0, sizeof(struct __current_stack6__));
    memset(&__current_stack7__, 0, sizeof(struct __current_stack7__));
    memset(&__current_stack9__, 0, sizeof(struct __current_stack9__));
    memset(&__current_stack11__, 0, sizeof(struct __current_stack11__));
    memset(&__current_stack12__, 0, sizeof(struct __current_stack12__));
    memset(&__current_stack14__, 0, sizeof(struct __current_stack14__));
    memset(&__current_stack16__, 0, sizeof(struct __current_stack16__));
    # 195 "code/comelang.nc"
    xxx=1;
    # 196 "code/comelang.nc"
    xxx=(int)42;
    # 197 "code/comelang.nc"
    x=1;
    # 198 "code/comelang.nc"
    f=0;
    # 200 "code/comelang.nc"
    struct P  p  ={ .y = 10, .x = 5 };
    # 201 "code/comelang.nc"
    int a[5]={ [2] = 3, [4] = 7 };
    # 203 "code/comelang.nc"
    xassert("C",a[2]==3&&a[4]==7&&p.y==10&&p.x==5&&gP.y==10);
    # 204 "code/comelang.nc"
    xassert("C",int_operator_equals(gA[2],3));
    # 206 "code/comelang.nc"
    li=(struct list$1int$*)come_increment_ref_count((__list_values1__[0]=1,
__list_values1__[1]=2,
__list_values1__[2]=3,
__list_values1__[3]=4,
__list_values1__[4]=5,
list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "code/comelang.nc", 232, 11, "struct list$1int$"), "code/comelang.nc", 232, 12),5,__list_values1__)), "code/comelang.nc", 206, 13);
    # 208 "code/comelang.nc"
    x_2=(_Bool)0;
    # 216 "code/comelang.nc"
    if((_Bool)0) {
    }
    else if(({__current_stack1__.argc = &argc;
__current_stack1__.argv = &argv;
__current_stack1__.xxx = &xxx;
__current_stack1__.f = f;
__current_stack1__.p = &p;
__current_stack1__.a = &a;
__current_stack1__.__list_values1__ = &__list_values1__;
__current_stack1__.li = &li;
__current_stack1__.x_2 = &x_2;
}),__right_value0 = (void*)0,
({(_conditional_value_X0=(list$1int$_length(((struct list$1int$*)(__right_value0=list$1int$_filter(li,&__current_stack1__,(void*)method_block1_codecomelangnc))))>0));    come_call_finalizer(list$1int$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "code/comelang.nc}", 212, 26);
_conditional_value_X0;})) {
        # 213 "code/comelang.nc"
        x_2=(_Bool)1;
    }
    # 216 "code/comelang.nc"
    y=(_Bool)0;
    # 222 "code/comelang.nc"
    for(i=0    ;({__current_stack2__.argc = &argc;
__current_stack2__.argv = &argv;
__current_stack2__.xxx = &xxx;
__current_stack2__.f = f;
__current_stack2__.p = &p;
__current_stack2__.a = &a;
__current_stack2__.__list_values1__ = &__list_values1__;
__current_stack2__.li = &li;
__current_stack2__.x_2 = &x_2;
__current_stack2__.y = &y;
__current_stack2__.i = &i;
}),__right_value0 = (void*)0,
({(_conditional_value_X0=(list$1int$_length(((struct list$1int$*)(__right_value0=list$1int$_filter(li,&__current_stack2__,(void*)method_block2_codecomelangnc))))>0));    come_call_finalizer(list$1int$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "code/comelang.nc}", 217, 27);
_conditional_value_X0;});i++){
        # 218 "code/comelang.nc"
        y=(_Bool)1;
        # 219 "code/comelang.nc"
        break;
    }
    # 222 "code/comelang.nc"
    xassert("method block at conditional test",x_2==(_Bool)1&&y==(_Bool)1);
    # 224 "code/comelang.nc"
    a_3=0;
    # 226 "code/comelang.nc"
    if(!((_Bool)0)) {
        # 225 "code/comelang.nc"
        (a_3=111);
    }
    # 228 "code/comelang.nc"
    if(!((_Bool)1)) {
        # 226 "code/comelang.nc"
        (a_3=222);
    }
    # 228 "code/comelang.nc"
    xassert("or test",a_3==111);
    # 230 "code/comelang.nc"
    b=0;
    # 232 "code/comelang.nc"
    if((_Bool)1) {
        # 231 "code/comelang.nc"
        (b=111);
    }
    # 234 "code/comelang.nc"
    if((_Bool)0) {
        # 232 "code/comelang.nc"
        (b=222);
    }
    # 234 "code/comelang.nc"
    xassert("and test",b==111);
    # 236 "code/comelang.nc"
    (a_4=111);
    # 237 "code/comelang.nc"
    c=(int)b+111;
    # 238 "code/comelang.nc"
    xassert("parse test",c==222);
    # 240 "code/comelang.nc"
    xassert("block test",({a_5=222; })==222);
    # 242 "code/comelang.nc"
    xassert("block test2",({a_6=222; __right_value0 = (void*)0;
__right_value1 = (void*)0;
string_operator_equals(((char* )(__right_value1=__builtin_string("aaa","code/comelang.nc",242))),"aaa"); })==(_Bool)1);
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "code/comelang.nc", 242, 28));
    # 243 "code/comelang.nc"
    xassert("block test3",({__right_value0 = (void*)0;
a_7=(char* )come_increment_ref_count(__builtin_string("aaa","code/comelang.nc",243), "code/comelang.nc", 243, 29); string_operator_equals(a_7,"aaa"); })==(_Bool)1);
    # 245 "code/comelang.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    ({    __current_stack4__.argc = &argc;
    __current_stack4__.argv = &argv;
    __current_stack4__.xxx = &xxx;
    __current_stack4__.f = f;
    __current_stack4__.p = &p;
    __current_stack4__.__list_values1__ = &__list_values1__;
    __current_stack4__.li = &li;
    __current_stack4__.x_2 = &x_2;
    __current_stack4__.y = &y;
    __current_stack4__.i = &i;
    __current_stack4__.b = &b;
    __current_stack4__.c = &c;
    __current_stack4__.a_7 = &a_7;
    __current_stack4__.__list_values2__ = &__list_values2__;
    })    ,    ({    __current_stack6__.argc = &argc;
    __current_stack6__.argv = &argv;
    __current_stack6__.xxx = &xxx;
    __current_stack6__.f = f;
    __current_stack6__.p = &p;
    __current_stack6__.__list_values1__ = &__list_values1__;
    __current_stack6__.li = &li;
    __current_stack6__.x_2 = &x_2;
    __current_stack6__.y = &y;
    __current_stack6__.i = &i;
    __current_stack6__.b = &b;
    __current_stack6__.c = &c;
    __current_stack6__.a_7 = &a_7;
    __current_stack6__.__list_values2__ = &__list_values2__;
    __current_stack6__.__list_values3__ = &__list_values3__;
    __current_stack6__.__list_values4__ = &__list_values4__;
    })    ,    xassert("method block test",list$1char$ph_operator_equals(((struct list$1char$ph*)(__right_value10=list$1int$_map(((struct list$1int$*)(__right_value9=(__list_values4__[0]=1,
__list_values4__[1]=2,
__list_values4__[2]=3,
list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "code/comelang.nc", 245, 95, "struct list$1int$"), "code/comelang.nc", 245, 96),3,__list_values4__)))),&__current_stack6__,(void*)method_block6_codecomelangnc))),((struct list$1char$ph*)(__right_value15=(__list_values5__[0]=((char*)(__right_value11=xsprintf("1"))),
__list_values5__[1]=((char*)(__right_value12=xsprintf("2"))),
__list_values5__[2]=((char*)(__right_value13=xsprintf("3"))),
list$1char$ph_initialize_with_values((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "code/comelang.nc", 245, 115, "struct list$1char$ph"), "code/comelang.nc", 245, 116),3,__list_values5__))))));
    come_call_finalizer(list$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "code/comelang.nc}", 245, 117);
    come_call_finalizer(list$1int$$p_finalize, __right_value9, (void*)0, (void*)0, 0, 1, 0, (void*)0, "code/comelang.nc}", 245, 118);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value10, (void*)0, (void*)0, 0, 1, 0, (void*)0, "code/comelang.nc}", 245, 119);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value15, (void*)0, (void*)0, 0, 1, 0, (void*)0, "code/comelang.nc}", 245, 120);
    # 247 "code/comelang.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    ({    __current_stack7__.argc = &argc;
    __current_stack7__.argv = &argv;
    __current_stack7__.xxx = &xxx;
    __current_stack7__.f = f;
    __current_stack7__.p = &p;
    __current_stack7__.__list_values1__ = &__list_values1__;
    __current_stack7__.li = &li;
    __current_stack7__.x_2 = &x_2;
    __current_stack7__.y = &y;
    __current_stack7__.i = &i;
    __current_stack7__.b = &b;
    __current_stack7__.c = &c;
    __current_stack7__.a_7 = &a_7;
    __current_stack7__.__list_values2__ = &__list_values2__;
    __current_stack7__.__list_values3__ = &__list_values3__;
    __current_stack7__.__list_values4__ = &__list_values4__;
    __current_stack7__.__list_values5__ = &__list_values5__;
    __current_stack7__.__list_values6__ = &__list_values6__;
    })    ,    __right_value2 = (void*)0;
    ({    __current_stack9__.argc = &argc;
    __current_stack9__.argv = &argv;
    __current_stack9__.xxx = &xxx;
    __current_stack9__.f = f;
    __current_stack9__.p = &p;
    __current_stack9__.__list_values1__ = &__list_values1__;
    __current_stack9__.li = &li;
    __current_stack9__.x_2 = &x_2;
    __current_stack9__.y = &y;
    __current_stack9__.i = &i;
    __current_stack9__.b = &b;
    __current_stack9__.c = &c;
    __current_stack9__.a_7 = &a_7;
    __current_stack9__.__list_values2__ = &__list_values2__;
    __current_stack9__.__list_values3__ = &__list_values3__;
    __current_stack9__.__list_values4__ = &__list_values4__;
    __current_stack9__.__list_values5__ = &__list_values5__;
    __current_stack9__.__list_values6__ = &__list_values6__;
    })    ,    __right_value3 = (void*)0;
    ({    __current_stack11__.argc = &argc;
    __current_stack11__.argv = &argv;
    __current_stack11__.xxx = &xxx;
    __current_stack11__.f = f;
    __current_stack11__.p = &p;
    __current_stack11__.__list_values1__ = &__list_values1__;
    __current_stack11__.li = &li;
    __current_stack11__.x_2 = &x_2;
    __current_stack11__.y = &y;
    __current_stack11__.i = &i;
    __current_stack11__.b = &b;
    __current_stack11__.c = &c;
    __current_stack11__.a_7 = &a_7;
    __current_stack11__.__list_values2__ = &__list_values2__;
    __current_stack11__.__list_values3__ = &__list_values3__;
    __current_stack11__.__list_values4__ = &__list_values4__;
    __current_stack11__.__list_values5__ = &__list_values5__;
    __current_stack11__.__list_values6__ = &__list_values6__;
    })    ,    __right_value4 = (void*)0;
    __right_value5 = (void*)0;
    __right_value6 = (void*)0;
    __right_value7 = (void*)0;
    __right_value8 = (void*)0;
    ({    __current_stack12__.argc = &argc;
    __current_stack12__.argv = &argv;
    __current_stack12__.xxx = &xxx;
    __current_stack12__.f = f;
    __current_stack12__.p = &p;
    __current_stack12__.__list_values1__ = &__list_values1__;
    __current_stack12__.li = &li;
    __current_stack12__.x_2 = &x_2;
    __current_stack12__.y = &y;
    __current_stack12__.i = &i;
    __current_stack12__.b = &b;
    __current_stack12__.c = &c;
    __current_stack12__.a_7 = &a_7;
    __current_stack12__.__list_values2__ = &__list_values2__;
    __current_stack12__.__list_values3__ = &__list_values3__;
    __current_stack12__.__list_values4__ = &__list_values4__;
    __current_stack12__.__list_values5__ = &__list_values5__;
    __current_stack12__.__list_values6__ = &__list_values6__;
    __current_stack12__.__list_values7__ = &__list_values7__;
    __current_stack12__.__list_values8__ = &__list_values8__;
    })    ,    __right_value9 = (void*)0;
    ({    __current_stack14__.argc = &argc;
    __current_stack14__.argv = &argv;
    __current_stack14__.xxx = &xxx;
    __current_stack14__.f = f;
    __current_stack14__.p = &p;
    __current_stack14__.__list_values1__ = &__list_values1__;
    __current_stack14__.li = &li;
    __current_stack14__.x_2 = &x_2;
    __current_stack14__.y = &y;
    __current_stack14__.i = &i;
    __current_stack14__.b = &b;
    __current_stack14__.c = &c;
    __current_stack14__.a_7 = &a_7;
    __current_stack14__.__list_values2__ = &__list_values2__;
    __current_stack14__.__list_values3__ = &__list_values3__;
    __current_stack14__.__list_values4__ = &__list_values4__;
    __current_stack14__.__list_values5__ = &__list_values5__;
    __current_stack14__.__list_values6__ = &__list_values6__;
    __current_stack14__.__list_values7__ = &__list_values7__;
    __current_stack14__.__list_values8__ = &__list_values8__;
    })    ,    __right_value10 = (void*)0;
    ({    __current_stack16__.argc = &argc;
    __current_stack16__.argv = &argv;
    __current_stack16__.xxx = &xxx;
    __current_stack16__.f = f;
    __current_stack16__.p = &p;
    __current_stack16__.__list_values1__ = &__list_values1__;
    __current_stack16__.li = &li;
    __current_stack16__.x_2 = &x_2;
    __current_stack16__.y = &y;
    __current_stack16__.i = &i;
    __current_stack16__.b = &b;
    __current_stack16__.c = &c;
    __current_stack16__.a_7 = &a_7;
    __current_stack16__.__list_values2__ = &__list_values2__;
    __current_stack16__.__list_values3__ = &__list_values3__;
    __current_stack16__.__list_values4__ = &__list_values4__;
    __current_stack16__.__list_values5__ = &__list_values5__;
    __current_stack16__.__list_values6__ = &__list_values6__;
    __current_stack16__.__list_values7__ = &__list_values7__;
    __current_stack16__.__list_values8__ = &__list_values8__;
    })    ,    __right_value11 = (void*)0;
    __right_value12 = (void*)0;
    __right_value13 = (void*)0;
    xassert("method block test2",list$1int$_operator_equals(((struct list$1int$*)(__right_value11=list$1char$ph_map(((struct list$1char$ph*)(__right_value10=list$1int$_map(((struct list$1int$*)(__right_value9=list$1int$_filter(((struct list$1int$*)(__right_value8=(__list_values8__[0]=1,
__list_values8__[1]=2,
__list_values8__[2]=3,
__list_values8__[3]=4,
__list_values8__[4]=5,
list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "code/comelang.nc", 247, 168, "struct list$1int$"), "code/comelang.nc", 247, 169),5,__list_values8__)))),&__current_stack12__,(void*)method_block12_codecomelangnc))),&__current_stack14__,(void*)method_block14_codecomelangnc))),&__current_stack16__,(void*)method_block16_codecomelangnc))),((struct list$1int$*)(__right_value13=(__list_values9__[0]=1,
__list_values9__[1]=2,
__list_values9__[2]=3,
list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "code/comelang.nc", 247, 201, "struct list$1int$"), "code/comelang.nc", 247, 202),3,__list_values9__))))));
    come_call_finalizer(list$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "code/comelang.nc}", 247, 203);
    come_call_finalizer(list$1int$$p_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "code/comelang.nc}", 247, 204);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value3, (void*)0, (void*)0, 0, 1, 0, (void*)0, "code/comelang.nc}", 247, 205);
    come_call_finalizer(list$1int$$p_finalize, __right_value8, (void*)0, (void*)0, 0, 1, 0, (void*)0, "code/comelang.nc}", 247, 206);
    come_call_finalizer(list$1int$$p_finalize, __right_value9, (void*)0, (void*)0, 0, 1, 0, (void*)0, "code/comelang.nc}", 247, 207);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value10, (void*)0, (void*)0, 0, 1, 0, (void*)0, "code/comelang.nc}", 247, 208);
    come_call_finalizer(list$1int$$p_finalize, __right_value11, (void*)0, (void*)0, 0, 1, 0, (void*)0, "code/comelang.nc}", 247, 209);
    come_call_finalizer(list$1int$$p_finalize, __right_value13, (void*)0, (void*)0, 0, 1, 0, (void*)0, "code/comelang.nc}", 247, 210);
    # 249 "code/comelang.nc"
    x_12=1;
    # 250 "code/comelang.nc"
    x_12=(unsigned long  int)x_12;
    # 251 "code/comelang.nc"
    x_12=(int)42;
    # 252 "code/comelang.nc"
    y_13=(int)x_12;
    # 253 "code/comelang.nc"
    vp=(void*)0;
    # 254 "code/comelang.nc"
    ip=(const int*)vp;
    # 255 "code/comelang.nc"
    pp=(struct P* )vp;
    # 256 "code/comelang.nc"
    z=(int)(unsigned long  int)0;
    # 259 "code/comelang.nc"
        __result_obj__0 = 0;
    come_call_finalizer(list$1int$$p_finalize, li, (void*)0, (void*)0, 0, 0, 0, (void*)0, "code/comelang.nc}", 259, 211);
    (a_7 = come_decrement_ref_count(a_7, (void*)0, (void*)0, 0, 0, (void*)0, "code/comelang.nc", 259, 212));
    neo_current_frame = fr.prev;
    come_memleak_checker();
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1int$* __result_obj__0;
    # 1489 "./neo-c.h"
    self->head=((void*)0);
    # 1490 "./neo-c.h"
    self->tail=((void*)0);
    # 1491 "./neo-c.h"
    self->len=0;
    # 1497 "./neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "./neo-c.h"
        list$1int$_push_back(self,values[i]);
    }
    # 1497 "./neo-c.h"
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1497, 7);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 232, 9);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 232, 10);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_push_back"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_0;
    struct list_item$1int$* litem_1;
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1619, 1, "struct list_item$1int$*"))), "./neo-c.h", 1619, 2);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        litem->item=item;
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1629, 3, "struct list_item$1int$*"))), "./neo-c.h", 1629, 4);
        # 1631 "./neo-c.h"
        litem_0->prev=self->head;
        # 1632 "./neo-c.h"
        litem_0->next=((void*)0);
        # 1633 "./neo-c.h"
        litem_0->item=item;
        # 1635 "./neo-c.h"
        self->tail=litem_0;
        # 1636 "./neo-c.h"
        self->head->next=litem_0;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1639, 5, "struct list_item$1int$*"))), "./neo-c.h", 1639, 6);
        # 1641 "./neo-c.h"
        litem_1->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_1->next=((void*)0);
        # 1643 "./neo-c.h"
        litem_1->item=item;
        # 1645 "./neo-c.h"
        self->tail->next=litem_1;
        # 1646 "./neo-c.h"
        self->tail=litem_1;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    # 1502 "./neo-c.h"
    if(self==((void*)0)) {
        # 1500 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "./neo-c.h"
    it=self->head;
    # 1508 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "./neo-c.h"
        prev_it=it;
        # 1505 "./neo-c.h"
        it=it->next;
        # 1506 "./neo-c.h"
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 8);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1int$$p_finalize"
            neo_current_frame = fr.prev;
}

static struct list$1int$* list$1int$_filter(struct list$1int$* self, void* parent, _Bool (*block)(void*,int))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_filter"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* result;
    struct list$1int$* __result_obj__0;
    struct list_item$1int$* it;
    # 1539 "./neo-c.h"
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1539, 14, "struct list$1int$*"), "./neo-c.h", 1539, 18)), "./neo-c.h", 1539, 19);
    # 1545 "./neo-c.h"
    if(self==((void*)0)) {
        # 1542 "./neo-c.h"
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1542, 20);
        come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1542, 21);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1542, 22);
        return __result_obj__0;
    }
    # 1545 "./neo-c.h"
    it=self->head;
    # 1554 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1551 "./neo-c.h"
        if(block(parent,it->item)) {
            # 1548 "./neo-c.h"
            list$1int$_push_back(result,it->item);
        }
        # 1551 "./neo-c.h"
        it=it->next;
    }
    # 1554 "./neo-c.h"
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1554, 23);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1554, 24);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1554, 25);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    # 1481 "./neo-c.h"
    self->head=((void*)0);
    # 1482 "./neo-c.h"
    self->tail=((void*)0);
    # 1483 "./neo-c.h"
    self->len=0;
    # 1485 "./neo-c.h"
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1485, 15);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 16);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 17);
    return __result_obj__0;
}

_Bool method_block1_codecomelangnc(struct __current_stack1__* parent, int it)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block1_codecomelangnc"; neo_current_frame = &fr;
# 214 "code/comelang.nc"
neo_current_frame = fr.prev;
return it>4;
neo_current_frame = fr.prev;
}

static int list$1int$_length(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_length"; neo_current_frame = &fr;
    # 1772 "./neo-c.h"
    if(self==((void*)0)) {
        # 1770 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 1772 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self->len;
        neo_current_frame = fr.prev;
}

_Bool method_block2_codecomelangnc(struct __current_stack2__* parent, int it)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block2_codecomelangnc"; neo_current_frame = &fr;
# 219 "code/comelang.nc"
neo_current_frame = fr.prev;
return it>4;
neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    # 1481 "./neo-c.h"
    self->head=((void*)0);
    # 1482 "./neo-c.h"
    self->tail=((void*)0);
    # 1483 "./neo-c.h"
    self->len=0;
    # 1485 "./neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 54);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 57);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 58);
    return __result_obj__0;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    # 1502 "./neo-c.h"
    if(self==((void*)0)) {
        # 1500 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "./neo-c.h"
    it=self->head;
    # 1508 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "./neo-c.h"
        prev_it=it;
        # 1505 "./neo-c.h"
        it=it->next;
        # 1506 "./neo-c.h"
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 56);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1char$ph$p_finalize"
    # 3 "list_item$1char$ph$p_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 2 "list_item$1char$ph$p_finalize"
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 55));
    }
            neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj1  ;
    struct list_item$1char$ph* litem_10;
    char*  __dec_obj2  ;
    struct list_item$1char$ph* litem_11;
    char*  __dec_obj3  ;
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1615, 67));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1619, 68, "struct list_item$1char$ph*"))), "./neo-c.h", 1619, 69);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        __dec_obj1=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1623, 71);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1623, 70);
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_10=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1629, 72, "struct list_item$1char$ph*"))), "./neo-c.h", 1629, 73);
        # 1631 "./neo-c.h"
        litem_10->prev=self->head;
        # 1632 "./neo-c.h"
        litem_10->next=((void*)0);
        # 1633 "./neo-c.h"
        __dec_obj2=litem_10->item,
        litem_10->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1633, 75);
        __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1633, 74);
        # 1635 "./neo-c.h"
        self->tail=litem_10;
        # 1636 "./neo-c.h"
        self->head->next=litem_10;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_11=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1639, 76, "struct list_item$1char$ph*"))), "./neo-c.h", 1639, 77);
        # 1641 "./neo-c.h"
        litem_11->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_11->next=((void*)0);
        # 1643 "./neo-c.h"
        __dec_obj3=litem_11->item,
        litem_11->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1643, 79);
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1643, 78);
        # 1645 "./neo-c.h"
        self->tail->next=litem_11;
        # 1646 "./neo-c.h"
        self->tail=litem_11;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1651, 80));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char*  method_block4_codecomelangnc(struct __current_stack4__* parent, int it)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block4_codecomelangnc"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 247 "code/comelang.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=int_to_string(it))), "code/comelang.nc", 247, 86);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "code/comelang.nc", 246, 87));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "code/comelang.nc", 247, 88));
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1char$ph* __result_obj__0;
    # 1489 "./neo-c.h"
    self->head=((void*)0);
    # 1490 "./neo-c.h"
    self->tail=((void*)0);
    # 1491 "./neo-c.h"
    self->len=0;
    # 1497 "./neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "./neo-c.h"
        list$1char$ph_push_back(self,(char*)come_increment_ref_count(values[i], "./neo-c.h", 1494, 89));
    }
    # 1497 "./neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1497, 90);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1497, 91);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1497, 92);
    return __result_obj__0;
}

static _Bool list$1char$ph$p_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_operator_equals"; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* it2;
    # 2227 "./neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 2221 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
        # 2224 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 2231 "./neo-c.h"
    if(left->len!=right->len) {
        # 2228 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 2231 "./neo-c.h"
    it=left->head;
    # 2232 "./neo-c.h"
    it2=right->head;
    # 2243 "./neo-c.h"
    while(it!=((void*)0)) {
        # 2239 "./neo-c.h"
        if(!(string_operator_equals(it->item,it2->item))) {
            # 2236 "./neo-c.h"
                        neo_current_frame = fr.prev;
            return (_Bool)0;
        }
        # 2239 "./neo-c.h"
        it=it->next;
        # 2240 "./neo-c.h"
        it2=it2->next;
    }
    # 2243 "./neo-c.h"
        neo_current_frame = fr.prev;
    return (_Bool)1;
        neo_current_frame = fr.prev;
}

char*  method_block6_codecomelangnc(struct __current_stack6__* parent, int it)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block6_codecomelangnc"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 247 "code/comelang.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=int_to_string(it))), "code/comelang.nc", 247, 112);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "code/comelang.nc", 246, 113));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "code/comelang.nc", 247, 114));
    return __result_obj__0;
}

static _Bool list$1char$ph_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_operator_equals"; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* it2;
    # 2227 "./neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 2221 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
        # 2224 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 2231 "./neo-c.h"
    if(left->len!=right->len) {
        # 2228 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 2231 "./neo-c.h"
    it=left->head;
    # 2232 "./neo-c.h"
    it2=right->head;
    # 2243 "./neo-c.h"
    while(it!=((void*)0)) {
        # 2239 "./neo-c.h"
        if(!(string_operator_equals(it->item,it2->item))) {
            # 2236 "./neo-c.h"
                        neo_current_frame = fr.prev;
            return (_Bool)0;
        }
        # 2239 "./neo-c.h"
        it=it->next;
        # 2240 "./neo-c.h"
        it2=it2->next;
    }
    # 2243 "./neo-c.h"
        neo_current_frame = fr.prev;
    return (_Bool)1;
        neo_current_frame = fr.prev;
}

_Bool method_block7_codecomelangnc(struct __current_stack7__* parent, int it)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block7_codecomelangnc"; neo_current_frame = &fr;
    # 249 "code/comelang.nc"
        neo_current_frame = fr.prev;
    return it<4;
        neo_current_frame = fr.prev;
}

char*  method_block9_codecomelangnc(struct __current_stack9__* parent, int it)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block9_codecomelangnc"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 249 "code/comelang.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=int_to_string(it))), "code/comelang.nc", 249, 138);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "code/comelang.nc", 248, 139));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "code/comelang.nc", 249, 140));
    return __result_obj__0;
}

int method_block11_codecomelangnc(struct __current_stack11__* parent, char*  it  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block11_codecomelangnc"; neo_current_frame = &fr;
    int __result_obj__0;
    # 249 "code/comelang.nc"
        __result_obj__0 = atoi(it);
    (it = come_decrement_ref_count(it, (void*)0, (void*)0, 0, 0, (void*)0, "code/comelang.nc", 249, 165));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1int$$p_operator_equals(struct list$1int$* left, struct list$1int$* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_operator_equals"; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* it2;
    # 2227 "./neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 2221 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
        # 2224 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 2231 "./neo-c.h"
    if(left->len!=right->len) {
        # 2228 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 2231 "./neo-c.h"
    it=left->head;
    # 2232 "./neo-c.h"
    it2=right->head;
    # 2243 "./neo-c.h"
    while(it!=((void*)0)) {
        # 2239 "./neo-c.h"
        if(!(int_operator_equals(it->item,it2->item))) {
            # 2236 "./neo-c.h"
                        neo_current_frame = fr.prev;
            return (_Bool)0;
        }
        # 2239 "./neo-c.h"
        it=it->next;
        # 2240 "./neo-c.h"
        it2=it2->next;
    }
    # 2243 "./neo-c.h"
        neo_current_frame = fr.prev;
    return (_Bool)1;
        neo_current_frame = fr.prev;
}

_Bool method_block12_codecomelangnc(struct __current_stack12__* parent, int it)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block12_codecomelangnc"; neo_current_frame = &fr;
    # 249 "code/comelang.nc"
        neo_current_frame = fr.prev;
    return it<4;
        neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1int$_map(struct list$1int$* self, void* parent, char*  (*block)(void*,int))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_map"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct list_item$1int$* it;
    char*  item  ;
    # 1483 "./neo-c.h"
    if(self==((void*)0)) {
        # 1481 "./neo-c.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1481, 171, "struct list$1char$ph*"), "./neo-c.h", 1481, 172)))), "./neo-c.h", 1481, 173);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 1481, 174);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1481, 175);
        return __result_obj__0;
    }
    # 1483 "./neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1483, 176, "struct list$1char$ph*"), "./neo-c.h", 1483, 177)), "./neo-c.h", 1483, 178);
    # 1485 "./neo-c.h"
    it=self->head;
    # 1493 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1487 "./neo-c.h"
        __right_value0 = (void*)0;
        item=(char* )come_increment_ref_count(block(parent,it->item), "./neo-c.h", 1487, 179);
        # 1488 "./neo-c.h"
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(item, "./neo-c.h", 1488, 180));
        # 1490 "./neo-c.h"
        it=it->next;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1493, 181));
    }
    # 1493 "./neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1493, 182);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1493, 183);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1493, 184);
    return __result_obj__0;
}

char*  method_block14_codecomelangnc(struct __current_stack14__* parent, int it)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block14_codecomelangnc"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 249 "code/comelang.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=int_to_string(it))), "code/comelang.nc", 249, 185);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "code/comelang.nc", 248, 186));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "code/comelang.nc", 249, 187));
    return __result_obj__0;
}

static struct list$1int$* list$1char$ph_map(struct list$1char$ph* self, void* parent, int (*block)(void*,char* ))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_map"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* __result_obj__0;
    struct list$1int$* result;
    struct list_item$1char$ph* it;
    int item;
    # 1483 "./neo-c.h"
    if(self==((void*)0)) {
        # 1481 "./neo-c.h"
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value1=list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1481, 188, "struct list$1int$*"), "./neo-c.h", 1481, 189)))), "./neo-c.h", 1481, 190);
        come_call_finalizer(list$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 1481, 191);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1481, 192);
        return __result_obj__0;
    }
    # 1483 "./neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1483, 193, "struct list$1int$*"), "./neo-c.h", 1483, 194)), "./neo-c.h", 1483, 195);
    # 1485 "./neo-c.h"
    it=self->head;
    # 1493 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1487 "./neo-c.h"
        item=block(parent,(char* )come_increment_ref_count(it->item, "./neo-c.h", 1487, 196));
        # 1488 "./neo-c.h"
        list$1int$_push_back(result,item);
        # 1490 "./neo-c.h"
        it=it->next;
    }
    # 1493 "./neo-c.h"
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1493, 197);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1493, 198);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1493, 199);
    return __result_obj__0;
}

int method_block16_codecomelangnc(struct __current_stack16__* parent, char*  it  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block16_codecomelangnc"; neo_current_frame = &fr;
    int __result_obj__0;
    # 249 "code/comelang.nc"
        __result_obj__0 = atoi(it);
    (it = come_decrement_ref_count(it, (void*)0, (void*)0, 0, 0, (void*)0, "code/comelang.nc", 249, 200));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1int$_operator_equals(struct list$1int$* left, struct list$1int$* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_operator_equals"; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* it2;
    # 2227 "./neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 2221 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
        # 2224 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 2231 "./neo-c.h"
    if(left->len!=right->len) {
        # 2228 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 2231 "./neo-c.h"
    it=left->head;
    # 2232 "./neo-c.h"
    it2=right->head;
    # 2243 "./neo-c.h"
    while(it!=((void*)0)) {
        # 2239 "./neo-c.h"
        if(!(int_operator_equals(it->item,it2->item))) {
            # 2236 "./neo-c.h"
                        neo_current_frame = fr.prev;
            return (_Bool)0;
        }
        # 2239 "./neo-c.h"
        it=it->next;
        # 2240 "./neo-c.h"
        it2=it2->next;
    }
    # 2243 "./neo-c.h"
        neo_current_frame = fr.prev;
    return (_Bool)1;
        neo_current_frame = fr.prev;
}

void stackframe()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe"; neo_current_frame = &fr;
    struct neo_frame*  f  ;
    char* fun_name;
    # 177 "./neo-c.h"
    f=neo_current_frame;
    # 184 "./neo-c.h"
    while(f) {
        # 179 "./neo-c.h"
        fun_name=f->fun_name;
        # 181 "./neo-c.h"
        printf("%s\n",fun_name);
        # 182 "./neo-c.h"
        f=f->prev;
    }
    neo_current_frame = fr.prev;
}

void stackframe2(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe2"; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    struct neo_frame*  f  ;
    char* fun_name;
    # 196 "./neo-c.h"
    if(come_is_alive(mem)&&mem) {
        # 191 "./neo-c.h"
        it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
        # 193 "./neo-c.h"
        printf("allocated at %s %d #%d. type is %s.\n",it->sname,it->sline,it->id,it->class_name);
    }
    # 196 "./neo-c.h"
    f=neo_current_frame;
    # 203 "./neo-c.h"
    while(f) {
        # 198 "./neo-c.h"
        fun_name=f->fun_name;
        # 200 "./neo-c.h"
        printf("%s\n",fun_name);
        # 201 "./neo-c.h"
        f=f->prev;
    }
    neo_current_frame = fr.prev;
}

_Bool die(const char* msg, char* sname, int sline)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "die"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    # 207 "./neo-c.h"
    puts(((char* )(__right_value6=charp_operator_add(((char*)(__right_value5=xsprintf("\%s \%s : ",((char* )(__right_value3=charp_to_string(sname))),((char* )(__right_value4=int_to_string(sline)))))),msg))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 207, 213));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 207, 214));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 207, 215));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 207, 216));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 207, 217));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 207, 218));
    # 208 "./neo-c.h"
    stackframe();
    # 209 "./neo-c.h"
    exit(4);
    # 211 "./neo-c.h"
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

void come_memleak_checker()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_memleak_checker"; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    int n;
    _Bool flag;
    int i;
    # 244 "./neo-c.h"
    # 246 "./neo-c.h"
    it=gAllocMem;
    # 247 "./neo-c.h"
    n=0;
    # 267 "./neo-c.h"
    while(it) {
        # 249 "./neo-c.h"
        n++;
        # 251 "./neo-c.h"
        flag=(_Bool)0;
        # 252 "./neo-c.h"
        printf("#%d ",n);
        # 256 "./neo-c.h"
        if(it->class_name) {
            # 254 "./neo-c.h"
            printf("%p (%s) %s %d: ",(char*)it+sizeof(struct sMemHeader )+sizeof(unsigned long  int )+sizeof(unsigned long  int ),it->class_name,it->sname,it->sline);
        }
        # 262 "./neo-c.h"
        for(i=0        ;i<8;i++){
            # 261 "./neo-c.h"
            if(it->fun_name[i]) {
                # 258 "./neo-c.h"
                printf("%s, ",it->fun_name[i]);
                # 259 "./neo-c.h"
                flag=(_Bool)1;
            }
        }
        # 265 "./neo-c.h"
        if(flag) {
            # 263 "./neo-c.h"
            puts("");
        }
        # 265 "./neo-c.h"
        it=it->next;
    }
    # 268 "./neo-c.h"
    if(n>0) {
        # 267 "./neo-c.h"
        printf("%d memory leaks. %d alloc, %d free.\n",n,gNumAlloc,gNumFree);
    }
    neo_current_frame = fr.prev;
}

void* alloc_from_pages(unsigned long  int  size  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "alloc_from_pages"; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    struct sMemHeader*  it_prev  ;
    void* __result_obj__0;
    struct sMemHeader*  it_14  ;
    # 272 "./neo-c.h"
    # 274 "./neo-c.h"
    it=gFreeMem;
    # 275 "./neo-c.h"
    it_prev=((void*)0);
    # 291 "./neo-c.h"
    while(it) {
        # 287 "./neo-c.h"
        if(size<=it->alloc_size) {
            # 284 "./neo-c.h"
            if(it_prev==((void*)0)) {
                # 279 "./neo-c.h"
                gFreeMem=((void*)0);
            }
            else {
                # 282 "./neo-c.h"
                it_prev->free_next=it->free_next;
            }
            # 284 "./neo-c.h"
            memset(it,0,size);
            # 285 "./neo-c.h"
                        __result_obj__0 = it;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 287 "./neo-c.h"
        it_prev=it;
        # 288 "./neo-c.h"
        it=it->free_next;
    }
    # 291 "./neo-c.h"
    it_14=(struct sMemHeader* )calloc(1,size);
    # 292 "./neo-c.h"
    it_14->alloc_size=size;
    # 293 "./neo-c.h"
        __result_obj__0 = it_14;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_free_mem_of_heap_pool(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_free_mem_of_heap_pool"; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    struct sMemHeader*  prev_it  ;
    struct sMemHeader*  next_it  ;
    unsigned long  int  size  ;
    # 298 "./neo-c.h"
    # 340 "./neo-c.h"
    if(mem) {
        # 301 "./neo-c.h"
        it=(struct sMemHeader* )((char*)mem-sizeof(struct sMemHeader ));
        # 307 "./neo-c.h"
        if(it->allocated!=177783) {
            # 304 "./neo-c.h"
                        neo_current_frame = fr.prev;
            return;
        }
        # 307 "./neo-c.h"
        it->allocated=0;
        # 309 "./neo-c.h"
        prev_it=it->prev;
        # 310 "./neo-c.h"
        next_it=it->next;
        # 328 "./neo-c.h"
        if(gAllocMem==it) {
            # 313 "./neo-c.h"
            gAllocMem=next_it;
            # 318 "./neo-c.h"
            if(gAllocMem) {
                # 316 "./neo-c.h"
                gAllocMem->prev=((void*)0);
            }
        }
        else {
            # 323 "./neo-c.h"
            if(prev_it) {
                # 321 "./neo-c.h"
                prev_it->next=next_it;
            }
            # 326 "./neo-c.h"
            if(next_it) {
                # 324 "./neo-c.h"
                next_it->prev=prev_it;
            }
        }
        # 328 "./neo-c.h"
        size=it->size;
        # 330 "./neo-c.h"
        it->free_next=gFreeMem;
        # 331 "./neo-c.h"
        gFreeMem=it;
        # 333 "./neo-c.h"
        it->alive=0;
        # 338 "./neo-c.h"
        gNumFree++;
    }
    neo_current_frame = fr.prev;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int  compiletime_size  , unsigned long  int  size  , const char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_alloc_mem_from_heap_pool"; neo_current_frame = &fr;
    unsigned long  int  size2  ;
    void* result;
    struct sMemHeader*  it  ;
    int n;
    struct neo_frame*  f  ;
    char* fun_name;
    void* __result_obj__0;
    # 344 "./neo-c.h"
    # 346 "./neo-c.h"
    size2=size+sizeof(struct sMemHeader );
    # 350 "./neo-c.h"
    size2=(size2+7&~0x7);
    # 352 "./neo-c.h"
    result=alloc_from_pages(size2);
    # 354 "./neo-c.h"
    it=result;
    # 356 "./neo-c.h"
    it->allocated=177783;
    # 358 "./neo-c.h"
    it->compiletime_size=compiletime_size;
    # 359 "./neo-c.h"
    it->size=size2;
    # 360 "./neo-c.h"
    it->free_next=((void*)0);
    # 361 "./neo-c.h"
    it->alive=1;
    # 363 "./neo-c.h"
    n=0;
    # 364 "./neo-c.h"
    f=neo_current_frame;
    # 374 "./neo-c.h"
    while(f&&n<8) {
        # 366 "./neo-c.h"
        fun_name=f->fun_name;
        # 368 "./neo-c.h"
        it->fun_name[n]=fun_name;
        # 370 "./neo-c.h"
        n++;
        # 371 "./neo-c.h"
        f=f->prev;
    }
    # 374 "./neo-c.h"
    it->next=gAllocMem;
    # 375 "./neo-c.h"
    it->prev=((void*)0);
    # 377 "./neo-c.h"
    it->class_name=class_name;
    # 378 "./neo-c.h"
    it->sname=sname;
    # 379 "./neo-c.h"
    it->sline=sline;
    # 380 "./neo-c.h"
    it->id=id;
    # 386 "./neo-c.h"
    if(gAllocMem) {
        # 383 "./neo-c.h"
        gAllocMem->prev=it;
    }
    # 386 "./neo-c.h"
    gAllocMem=it;
    # 388 "./neo-c.h"
    gNumAlloc++;
    # 390 "./neo-c.h"
        __result_obj__0 = (char*)result+sizeof(struct sMemHeader );
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* come_dynamic_typeof(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_dynamic_typeof"; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    char* __result_obj__0;
    # 395 "./neo-c.h"
    # 403 "./neo-c.h"
    if(!come_is_alive(mem)) {
        # 398 "./neo-c.h"
        puts("invalid heap object");
        # 399 "./neo-c.h"
        stackframe2(mem);
        # 400 "./neo-c.h"
        exit(3);
    }
    # 403 "./neo-c.h"
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
    # 411 "./neo-c.h"
    if(it->allocated!=177783) {
        # 406 "./neo-c.h"
        printf("invalid heap object(%p)(1)\n",it);
        # 407 "./neo-c.h"
        stackframe2(mem);
        # 408 "./neo-c.h"
        exit(2);
    }
    # 411 "./neo-c.h"
        __result_obj__0 = (char*)it->class_name;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

unsigned long  int  dynamic_sizeof(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "dynamic_sizeof"; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    unsigned long  int  size  ;
    # 416 "./neo-c.h"
    # 424 "./neo-c.h"
    if(!come_is_alive(mem)) {
        # 419 "./neo-c.h"
        puts("invalid heap object");
        # 420 "./neo-c.h"
        stackframe2(mem);
        # 421 "./neo-c.h"
        exit(3);
    }
    # 424 "./neo-c.h"
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
    # 431 "./neo-c.h"
    if(it->allocated!=177783) {
        # 427 "./neo-c.h"
        printf("invalid heap object(%p)(1)\n",it);
        # 428 "./neo-c.h"
        stackframe2(mem);
        # 429 "./neo-c.h"
        exit(2);
    }
    # 431 "./neo-c.h"
    size=it->compiletime_size;
    # 433 "./neo-c.h"
        neo_current_frame = fr.prev;
    return size;
    neo_current_frame = fr.prev;
}

void* come_calloc(unsigned long  int  count  , unsigned long  int  size  , const char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_calloc"; neo_current_frame = &fr;
    char* mem;
    unsigned long  int*  ref_count  ;
    unsigned long  int*  size2  ;
    void* __result_obj__0;
    # 443 "./neo-c.h"
    # 445 "./neo-c.h"
    mem=come_alloc_mem_from_heap_pool(count*size,sizeof(unsigned long  int )+sizeof(unsigned long  int )+count*size,sname,sline,id,class_name);
    # 447 "./neo-c.h"
    ref_count=(unsigned long  int* )mem;
    # 449 "./neo-c.h"
    *ref_count=0;
    # 451 "./neo-c.h"
    size2=(unsigned long  int* )(mem+sizeof(unsigned long  int ));
    # 453 "./neo-c.h"
    *size2=size*count+sizeof(unsigned long  int )+sizeof(unsigned long  int );
    # 455 "./neo-c.h"
        __result_obj__0 = mem+sizeof(unsigned long  int )+sizeof(unsigned long  int );
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool come_is_alive(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_is_alive"; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    # 463 "./neo-c.h"
    if(mem==((void*)0)) {
        # 461 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 463 "./neo-c.h"
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
    # 465 "./neo-c.h"
        neo_current_frame = fr.prev;
    return it->alive;
    neo_current_frame = fr.prev;
}

void come_free(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_free"; neo_current_frame = &fr;
    unsigned long  int*  ref_count  ;
    # 470 "./neo-c.h"
    # 476 "./neo-c.h"
    if(mem==((void*)0)) {
        # 473 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 482 "./neo-c.h"
    if(!come_is_alive(mem)) {
        # 477 "./neo-c.h"
        puts("invalid heap object");
        # 478 "./neo-c.h"
        stackframe2(mem);
        # 479 "./neo-c.h"
        exit(3);
    }
    # 482 "./neo-c.h"
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    # 484 "./neo-c.h"
    come_free_mem_of_heap_pool((char*)ref_count);
    neo_current_frame = fr.prev;
}

void* come_memdup(void* block, char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_memdup"; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    char* mem;
    unsigned long  int*  size_p  ;
    unsigned long  int  size  ;
    void* result;
    # 489 "./neo-c.h"
    # 495 "./neo-c.h"
    if(block==((void*)0)) {
        # 492 "./neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 501 "./neo-c.h"
    if(!come_is_alive(block)) {
        # 496 "./neo-c.h"
        puts(((char*)(__right_value3=xsprintf("invalid heap object. \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 496, 219));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 496, 220));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 496, 221));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 496, 222));
        # 497 "./neo-c.h"
        stackframe2(block);
        # 498 "./neo-c.h"
        exit(3);
    }
    # 501 "./neo-c.h"
    mem=(char*)block-sizeof(unsigned long  int )-sizeof(unsigned long  int );
    # 503 "./neo-c.h"
    size_p=(unsigned long  int* )(mem+sizeof(unsigned long  int ));
    # 505 "./neo-c.h"
    size=*size_p-sizeof(unsigned long  int )-sizeof(unsigned long  int );
    # 507 "./neo-c.h"
    result=come_calloc(1,size,sname,sline,id,class_name);
    # 509 "./neo-c.h"
    memcpy(result,block,size);
    # 511 "./neo-c.h"
        __result_obj__0 = result;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_increment_ref_count(void* mem, char* sname, int sline, int id)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_increment_ref_count"; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    unsigned long  int*  ref_count  ;
    # 516 "./neo-c.h"
    # 521 "./neo-c.h"
    if(mem==((void*)0)) {
        # 519 "./neo-c.h"
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 527 "./neo-c.h"
    if(!come_is_alive(mem)) {
        # 522 "./neo-c.h"
        puts(((char*)(__right_value3=xsprintf("invalid heap object \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 522, 223));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 522, 224));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 522, 225));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 522, 226));
        # 523 "./neo-c.h"
        stackframe2(mem);
        # 524 "./neo-c.h"
        exit(3);
    }
    # 527 "./neo-c.h"
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    # 529 "./neo-c.h"
    (*ref_count)++;
    # 531 "./neo-c.h"
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_print_ref_count(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_print_ref_count"; neo_current_frame = &fr;
    void* __result_obj__0;
    unsigned long  int*  ref_count  ;
    # 536 "./neo-c.h"
    # 541 "./neo-c.h"
    if(mem==((void*)0)) {
        # 539 "./neo-c.h"
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 547 "./neo-c.h"
    if(!come_is_alive(mem)) {
        # 542 "./neo-c.h"
        puts("invalid heap object");
        # 543 "./neo-c.h"
        stackframe();
        # 544 "./neo-c.h"
        exit(3);
    }
    # 547 "./neo-c.h"
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    # 549 "./neo-c.h"
    printf("ref_count %ld\n",*ref_count);
    # 551 "./neo-c.h"
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int come_get_ref_count(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_get_ref_count"; neo_current_frame = &fr;
    unsigned long  int*  ref_count  ;
    # 556 "./neo-c.h"
    # 561 "./neo-c.h"
    if(mem==((void*)0)) {
        # 559 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 567 "./neo-c.h"
    if(!come_is_alive(mem)) {
        # 562 "./neo-c.h"
        puts("invalid heap object");
        # 563 "./neo-c.h"
        stackframe();
        # 564 "./neo-c.h"
        exit(3);
    }
    # 567 "./neo-c.h"
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    # 569 "./neo-c.h"
        neo_current_frame = fr.prev;
    return *ref_count;
    neo_current_frame = fr.prev;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj, char* sname, int sline, int id)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_decrement_ref_count"; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    long* ref_count;
    long count;
    void (*finalizer)(void*);
    # 574 "./neo-c.h"
    # 581 "./neo-c.h"
    if(result_obj) {
        # 580 "./neo-c.h"
        if(mem==result_obj) {
            # 578 "./neo-c.h"
                        __result_obj__0 = mem;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    # 584 "./neo-c.h"
    if(mem==((void*)0)) {
        # 582 "./neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 590 "./neo-c.h"
    if(!come_is_alive(mem)) {
        # 585 "./neo-c.h"
        puts(((char*)(__right_value3=xsprintf("invalid heap object \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 585, 227));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 585, 228));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 585, 229));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 585, 230));
        # 586 "./neo-c.h"
        stackframe2(mem);
        # 587 "./neo-c.h"
        exit(3);
    }
    # 590 "./neo-c.h"
    ref_count=(long*)((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    # 596 "./neo-c.h"
    if(!no_decrement) {
        # 593 "./neo-c.h"
        (*ref_count)--;
    }
    # 596 "./neo-c.h"
    count=*ref_count;
    # 608 "./neo-c.h"
    if(!no_free&&count<=0) {
        # 604 "./neo-c.h"
        if(protocol_obj&&protocol_fun) {
            # 599 "./neo-c.h"
            finalizer=(void (*)(void*))protocol_fun;
            # 600 "./neo-c.h"
            finalizer(protocol_obj);
            # 602 "./neo-c.h"
            come_free(protocol_obj);
        }
        # 604 "./neo-c.h"
        come_free(mem);
        # 605 "./neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 608 "./neo-c.h"
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj, char* sname, int sline, int id)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_call_finalizer"; neo_current_frame = &fr;
    void (*finalizer)(void*);
    void (*finalizer_15)(void*);
    void (*finalizer_16)(void*);
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    long* ref_count;
    long count;
    void (*finalizer_17)(void*);
    void (*finalizer_18)(void*);
    void (*finalizer_19)(void*);
    # 613 "./neo-c.h"
    # 620 "./neo-c.h"
    if(result_obj) {
        # 619 "./neo-c.h"
        if(mem==result_obj) {
            # 617 "./neo-c.h"
                        neo_current_frame = fr.prev;
            return;
        }
    }
    # 624 "./neo-c.h"
    if(mem==((void*)0)) {
        # 621 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 678 "./neo-c.h"
    if(call_finalizer_only) {
        # 639 "./neo-c.h"
        if(fun) {
            # 630 "./neo-c.h"
            if(protocol_obj&&protocol_fun) {
                # 627 "./neo-c.h"
                finalizer=(void (*)(void*))protocol_fun;
                # 628 "./neo-c.h"
                finalizer(protocol_obj);
            }
            # 630 "./neo-c.h"
            finalizer_15=(void (*)(void*))fun;
            # 631 "./neo-c.h"
            finalizer_15(mem);
        }
        else {
            # 638 "./neo-c.h"
            if(protocol_obj&&protocol_fun) {
                # 635 "./neo-c.h"
                finalizer_16=(void (*)(void*))protocol_fun;
                # 636 "./neo-c.h"
                finalizer_16(protocol_obj);
            }
        }
    }
    else {
        # 647 "./neo-c.h"
        if(!come_is_alive(mem)) {
            # 642 "./neo-c.h"
            puts(((char*)(__right_value3=xsprintf("invalid heap object. \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 642, 231));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 642, 232));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 642, 233));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 642, 234));
            # 643 "./neo-c.h"
            stackframe2(mem);
            # 644 "./neo-c.h"
            exit(3);
        }
        # 647 "./neo-c.h"
        ref_count=(long*)((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
        # 653 "./neo-c.h"
        if(!no_decrement) {
            # 650 "./neo-c.h"
            (*ref_count)--;
        }
        # 653 "./neo-c.h"
        count=*ref_count;
        # 677 "./neo-c.h"
        if(!no_free&&count<=0) {
            # 676 "./neo-c.h"
            if(mem) {
                # 674 "./neo-c.h"
                if(fun) {
                    # 662 "./neo-c.h"
                    if(protocol_obj&&protocol_fun) {
                        # 658 "./neo-c.h"
                        finalizer_17=(void (*)(void*))protocol_fun;
                        # 659 "./neo-c.h"
                        finalizer_17(protocol_obj);
                        # 660 "./neo-c.h"
                        come_free(protocol_obj);
                    }
                    # 666 "./neo-c.h"
                    if(fun) {
                        # 663 "./neo-c.h"
                        finalizer_18=(void (*)(void*))fun;
                        # 664 "./neo-c.h"
                        finalizer_18(mem);
                    }
                }
                else {
                    # 673 "./neo-c.h"
                    if(protocol_obj&&protocol_fun) {
                        # 669 "./neo-c.h"
                        finalizer_19=(void (*)(void*))protocol_fun;
                        # 670 "./neo-c.h"
                        finalizer_19(protocol_obj);
                        # 671 "./neo-c.h"
                        come_free(protocol_obj);
                    }
                }
                # 674 "./neo-c.h"
                come_free(mem);
            }
        }
    }
    neo_current_frame = fr.prev;
}

void xassert(const char* msg, _Bool test)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xassert"; neo_current_frame = &fr;
    # 682 "./neo-c.h"
    printf("%s...",msg);
    # 688 "./neo-c.h"
    if(!test) {
        # 684 "./neo-c.h"
        puts("false");
        # 685 "./neo-c.h"
        stackframe();
        # 686 "./neo-c.h"
        exit(2);
    }
    # 688 "./neo-c.h"
    puts("ok");
    neo_current_frame = fr.prev;
}

void* come_null_checker(void* mem, const char* sname, int sline, int id)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_null_checker"; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    # 697 "./neo-c.h"
    if(mem) {
        # 694 "./neo-c.h"
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 697 "./neo-c.h"
    puts(((char*)(__right_value3=xsprintf("null pointer exception \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 697, 235));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 697, 236));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 697, 237));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 697, 238));
    # 698 "./neo-c.h"
    stackframe();
    # 699 "./neo-c.h"
    exit(1);
    neo_current_frame = fr.prev;
}

void* come_heap_checker(void* mem, const char* sname, int sline, int id)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_heap_checker"; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    # 715 "./neo-c.h"
    if(mem) {
        # 713 "./neo-c.h"
        if(come_is_alive(mem)) {
            # 706 "./neo-c.h"
                        __result_obj__0 = mem;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else {
            # 709 "./neo-c.h"
            puts(((char*)(__right_value3=xsprintf("heap pointer exception \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 709, 239));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 709, 240));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 709, 241));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 709, 242));
            # 710 "./neo-c.h"
            stackframe();
            # 711 "./neo-c.h"
            exit(1);
        }
    }
    # 715 "./neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    puts(((char*)(__right_value3=xsprintf("null pointer exception \%s \%s \%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 715, 243));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 715, 244));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 715, 245));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 715, 246));
    # 716 "./neo-c.h"
    stackframe();
    # 717 "./neo-c.h"
    exit(1);
    neo_current_frame = fr.prev;
}

char*  __builtin_string(const char* str, char* sname, int sline)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "__builtin_string"; neo_current_frame = &fr;
    char*  __result_obj__0  ;
    int len;
    char* result;
    # 725 "./neo-c.h"
    if(str==((void*)0)) {
        # 723 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "./neo-c.h", 723, 247);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 723, 248));
        return __result_obj__0;
    }
    # 725 "./neo-c.h"
    len=strlen(str)+1;
    # 727 "./neo-c.h"
    result=come_calloc(1,sizeof(char)*(len),sname,sline,0,"string");
    # 730 "./neo-c.h"
    strncpy(result,str,len);
    # 732 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 732, 249);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 732, 250));
    return __result_obj__0;
}

struct buffer*  buffer_initialize(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj4;
    struct buffer*  __result_obj__0  ;
    # 4832 "./neo-c.h"
    self->size=128;
    # 4833 "./neo-c.h"
    __dec_obj4=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./neo-c.h", 4833, 251, "char*"), "./neo-c.h", 4833, 253);
    __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4833, 252);
    # 4834 "./neo-c.h"
    ((char*)self->buf)[0]=0;
    # 4835 "./neo-c.h"
    self->len=0;
    # 4837 "./neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "./neo-c.h", 4837, 254);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4837, 255);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4837, 256);
    return __result_obj__0;
}

struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  int  size  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize_with_value"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj5;
    struct buffer*  __result_obj__0  ;
    # 4842 "./neo-c.h"
    self->size=128;
    # 4843 "./neo-c.h"
    __dec_obj5=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./neo-c.h", 4843, 257, "char*"), "./neo-c.h", 4843, 259);
    __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4843, 258);
    # 4844 "./neo-c.h"
    ((char*)self->buf)[0]=0;
    # 4845 "./neo-c.h"
    self->len=0;
    # 4847 "./neo-c.h"
    buffer_append(self,mem,size);
    # 4849 "./neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "./neo-c.h", 4849, 260);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4849, 261);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4849, 262);
    return __result_obj__0;
}

void buffer_finalize(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_finalize"; neo_current_frame = &fr;
    # 4855 "./neo-c.h"
    if(self&&self->buf) {
        # 4854 "./neo-c.h"
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4854, 263));
    }
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_clone(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_clone"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct buffer*  result  ;
    char* __dec_obj6;
    # 4863 "./neo-c.h"
    if(self==((void*)0)) {
        # 4860 "./neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((void*)0), "./neo-c.h", 4860, 264);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4860, 265);
        return __result_obj__0;
    }
    # 4863 "./neo-c.h"
    result=(struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 4863, 266, "struct buffer* "), "./neo-c.h", 4863, 267);
    # 4865 "./neo-c.h"
    result->size=self->size;
    # 4866 "./neo-c.h"
    __right_value0 = (void*)0;
    __dec_obj6=result->buf,
    result->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./neo-c.h", 4866, 268, "char*"), "./neo-c.h", 4866, 270);
    __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4866, 269);
    # 4867 "./neo-c.h"
    result->len=self->len;
    # 4868 "./neo-c.h"
    memcpy(result->buf,self->buf,self->len);
    # 4870 "./neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 4870, 271);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4870, 272);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4870, 273);
    return __result_obj__0;
}

_Bool buffer_equals(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_equals"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    _Bool __result_obj__0;
    # 4882 "./neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 4876 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
        # 4879 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 4882 "./neo-c.h"
        __result_obj__0 = string_equals(((char* )(__right_value0=buffer_to_string(left))),((char* )(__right_value1=buffer_to_string(right))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 4882, 274));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 4882, 275));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_length(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_length"; neo_current_frame = &fr;
    # 4890 "./neo-c.h"
    if(self==((void*)0)) {
        # 4888 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 4890 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self->len;
    neo_current_frame = fr.prev;
}

void buffer_reset(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_reset"; neo_current_frame = &fr;
    # 4898 "./neo-c.h"
    if(self==((void*)0)) {
        # 4896 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 4898 "./neo-c.h"
    ((char*)self->buf)[0]=0;
    # 4899 "./neo-c.h"
    self->len=0;
    neo_current_frame = fr.prev;
}

void buffer_trim(struct buffer*  self  , int len)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_trim"; neo_current_frame = &fr;
    # 4907 "./neo-c.h"
    if(self==((void*)0)) {
        # 4905 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 4907 "./neo-c.h"
    self->len-=len;
    # 4915 "./neo-c.h"
    if(self->len>=0) {
        # 4909 "./neo-c.h"
        ((char*)self->buf)[self->len]=0;
    }
    else {
        # 4912 "./neo-c.h"
        self->len=0;
        # 4913 "./neo-c.h"
        ((char*)self->buf)[0]=0;
    }
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_append(struct buffer*  self  , const char* mem, unsigned long  int  size  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj7;
    # 4922 "./neo-c.h"
    if(self==((void*)0)||mem==((void*)0)) {
        # 4920 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 4934 "./neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 4923 "./neo-c.h"
        old_len=self->len;
        # 4924 "./neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 4924, 276, "char*"), "./neo-c.h", 4924, 277);
        # 4925 "./neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4927 "./neo-c.h"
        new_size=(self->size+size+1)*2;
        # 4928 "./neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 4928, 278, "char*"), "./neo-c.h", 4928, 280);
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4928, 279);
        # 4929 "./neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 4930 "./neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 4931 "./neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4934, 281));
    }
    # 4934 "./neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 4935 "./neo-c.h"
    self->len+=size;
    # 4936 "./neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 4938 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_char(struct buffer*  self  , char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_char"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj8;
    # 4946 "./neo-c.h"
    if(self==((void*)0)) {
        # 4944 "./neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 4958 "./neo-c.h"
    if(self->len+1+1+1>=self->size) {
        # 4947 "./neo-c.h"
        old_len=self->len;
        # 4948 "./neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 4948, 282, "char*"), "./neo-c.h", 4948, 283);
        # 4949 "./neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4951 "./neo-c.h"
        new_size=(self->size+10+1)*2;
        # 4952 "./neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 4952, 284, "char*"), "./neo-c.h", 4952, 286);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4952, 285);
        # 4953 "./neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 4954 "./neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 4955 "./neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4958, 287));
    }
    # 4958 "./neo-c.h"
    ((char*)self->buf)[self->len]=c;
    # 4959 "./neo-c.h"
    self->len++;
    # 4961 "./neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 4963 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_str(struct buffer*  self  , const char* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_str"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj9;
    # 4972 "./neo-c.h"
    if(self==((void*)0)||mem==((void*)0)) {
        # 4969 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 4972 "./neo-c.h"
    size=strlen(mem);
    # 4984 "./neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 4974 "./neo-c.h"
        old_len=self->len;
        # 4975 "./neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 4975, 288, "char*"), "./neo-c.h", 4975, 289);
        # 4976 "./neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4977 "./neo-c.h"
        new_size=(self->size+size+1)*2;
        # 4978 "./neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 4978, 290, "char*"), "./neo-c.h", 4978, 292);
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4978, 291);
        # 4979 "./neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 4980 "./neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 4981 "./neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4984, 293));
    }
    # 4984 "./neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 4985 "./neo-c.h"
    self->len+=size;
    # 4986 "./neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 4988 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_format(struct buffer*  self  , const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_format"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    __builtin_va_list  args  ;
    char* result;
    int len;
    void* __right_value0 = (void*)0;
    char*  mem  ;
    int size;
    int old_len;
    char* old_buf;
    int new_size;
    char* __dec_obj10;
    memset(&result, 0, sizeof(result));
    # 5036 "./neo-c.h"
    if(self==((void*)0)||msg==((void*)0)) {
        # 5033 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5036 "./neo-c.h"
    # 5037 "./neo-c.h"
    __builtin_va_start(args,msg);
    # 5038 "./neo-c.h"
    # 5039 "./neo-c.h"
    len=vasprintf(&result,msg,args);
    # 5040 "./neo-c.h"
    __builtin_va_end(args);
    # 5046 "./neo-c.h"
    if(len<0) {
        # 5043 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5046 "./neo-c.h"
    mem=(char* )come_increment_ref_count(__builtin_string(result,"./neo-c.h",5046), "./neo-c.h", 5046, 294);
    # 5048 "./neo-c.h"
    size=strlen(mem);
    # 5060 "./neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 5050 "./neo-c.h"
        old_len=self->len;
        # 5051 "./neo-c.h"
        __right_value0 = (void*)0;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5051, 295, "char*"), "./neo-c.h", 5051, 296);
        # 5052 "./neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5053 "./neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5054 "./neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5054, 297, "char*"), "./neo-c.h", 5054, 299);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5054, 298);
        # 5055 "./neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5056 "./neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5057 "./neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5060, 300));
    }
    # 5060 "./neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5061 "./neo-c.h"
    self->len+=size;
    # 5062 "./neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5064 "./neo-c.h"
    free(result);
    # 5066 "./neo-c.h"
        __result_obj__0 = self;
    (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5066, 301));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_nullterminated_str(struct buffer*  self  , const char* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_nullterminated_str"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj11;
    # 5075 "./neo-c.h"
    if(self==((void*)0)||mem==((void*)0)) {
        # 5073 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5075 "./neo-c.h"
    size=strlen(mem)+1;
    # 5087 "./neo-c.h"
    if(self->len+size+1+1+1>=self->size) {
        # 5077 "./neo-c.h"
        old_len=self->len;
        # 5078 "./neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5078, 302, "char*"), "./neo-c.h", 5078, 303);
        # 5079 "./neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5080 "./neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5081 "./neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5081, 304, "char*"), "./neo-c.h", 5081, 306);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5081, 305);
        # 5082 "./neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5083 "./neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5084 "./neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5087, 307));
    }
    # 5087 "./neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5088 "./neo-c.h"
    self->len+=size;
    # 5089 "./neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5090 "./neo-c.h"
    self->len++;
    # 5092 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_int(struct buffer*  self  , int value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_int"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int* mem;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj12;
    # 5100 "./neo-c.h"
    if(self==((void*)0)) {
        # 5098 "./neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5100 "./neo-c.h"
    mem=&value;
    # 5101 "./neo-c.h"
    size=sizeof(int);
    # 5114 "./neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 5104 "./neo-c.h"
        old_len=self->len;
        # 5105 "./neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5105, 308, "char*"), "./neo-c.h", 5105, 309);
        # 5106 "./neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5107 "./neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5108 "./neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5108, 310, "char*"), "./neo-c.h", 5108, 312);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5108, 311);
        # 5109 "./neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5110 "./neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5111 "./neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5114, 313));
    }
    # 5114 "./neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5115 "./neo-c.h"
    self->len+=size;
    # 5116 "./neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5118 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_long(struct buffer*  self  , long value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_long"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    long* mem;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj13;
    # 5126 "./neo-c.h"
    if(self==((void*)0)) {
        # 5124 "./neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5126 "./neo-c.h"
    mem=&value;
    # 5127 "./neo-c.h"
    size=sizeof(long);
    # 5140 "./neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 5130 "./neo-c.h"
        old_len=self->len;
        # 5131 "./neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5131, 314, "char*"), "./neo-c.h", 5131, 315);
        # 5132 "./neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5133 "./neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5134 "./neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj13=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5134, 316, "char*"), "./neo-c.h", 5134, 318);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5134, 317);
        # 5135 "./neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5136 "./neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5137 "./neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5140, 319));
    }
    # 5140 "./neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5141 "./neo-c.h"
    self->len+=size;
    # 5142 "./neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5144 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_short(struct buffer*  self  , short value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_short"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    short* mem;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj14;
    # 5153 "./neo-c.h"
    if(self==((void*)0)) {
        # 5150 "./neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5153 "./neo-c.h"
    mem=&value;
    # 5154 "./neo-c.h"
    size=sizeof(short);
    # 5167 "./neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 5157 "./neo-c.h"
        old_len=self->len;
        # 5158 "./neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5158, 320, "char*"), "./neo-c.h", 5158, 321);
        # 5159 "./neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5160 "./neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5161 "./neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj14=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5161, 322, "char*"), "./neo-c.h", 5161, 324);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5161, 323);
        # 5162 "./neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5163 "./neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5164 "./neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5167, 325));
    }
    # 5167 "./neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5168 "./neo-c.h"
    self->len+=size;
    # 5169 "./neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5171 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_alignment(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_alignment"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int len;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj15;
    int i;
    # 5180 "./neo-c.h"
    if(self==((void*)0)) {
        # 5177 "./neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5180 "./neo-c.h"
    len=self->len;
    # 5181 "./neo-c.h"
    len=(len+3)&~3;
    # 5194 "./neo-c.h"
    if(len>=self->size) {
        # 5184 "./neo-c.h"
        old_len=self->len;
        # 5185 "./neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "./neo-c.h", 5185, 326, "char*"), "./neo-c.h", 5185, 327);
        # 5186 "./neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5187 "./neo-c.h"
        new_size=(self->size+1+1)*2;
        # 5188 "./neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj15=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "./neo-c.h", 5188, 328, "char*"), "./neo-c.h", 5188, 330);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 5188, 329);
        # 5189 "./neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5190 "./neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5191 "./neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 5194, 331));
    }
    # 5198 "./neo-c.h"
    for(i=self->len    ;i<len;i++){
        # 5195 "./neo-c.h"
        ((char*)self->buf)[i]=0;
    }
    # 5198 "./neo-c.h"
    self->len=len;
    # 5200 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_compare(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_compare"; neo_current_frame = &fr;
    # 5215 "./neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 5206 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
        # 5209 "./neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
        # 5212 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 5215 "./neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(left->buf,right->buf);
    neo_current_frame = fr.prev;
}

struct buffer*  charp_to_buffer(const char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    # 5220 "./neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5220, 332, "struct buffer* "), "./neo-c.h", 5220, 333)), "./neo-c.h", 5220, 334);
    # 5226 "./neo-c.h"
    if(self==((void*)0)) {
        # 5223 "./neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5223, 335);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5223, 336);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5223, 337);
        return __result_obj__0;
    }
    # 5226 "./neo-c.h"
    buffer_append_str(result,self);
    # 5228 "./neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5228, 338);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5228, 339);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5228, 340);
    return __result_obj__0;
}

char*  buffer_to_string(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 5237 "./neo-c.h"
    if(self==((void*)0)) {
        # 5234 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",5234))), "./neo-c.h", 5234, 341);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5234, 342));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5234, 343));
        return __result_obj__0;
    }
    # 5237 "./neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self->buf,"./neo-c.h",5237))), "./neo-c.h", 5237, 344);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5237, 345));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5237, 346));
    return __result_obj__0;
}

unsigned char* buffer_head_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_head_pointer"; neo_current_frame = &fr;
    unsigned char* __result_obj__0;
    # 5245 "./neo-c.h"
    if(self==((void*)0)) {
        # 5243 "./neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5245 "./neo-c.h"
        __result_obj__0 = (unsigned char*)self->buf;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  chara_to_buffer(char* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    # 5250 "./neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5250, 347, "struct buffer* "), "./neo-c.h", 5250, 348)), "./neo-c.h", 5250, 349);
    # 5254 "./neo-c.h"
    if(self==((void*)0)) {
        # 5252 "./neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5252, 350);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5252, 351);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5252, 352);
        return __result_obj__0;
    }
    # 5254 "./neo-c.h"
    buffer_append(result,self,sizeof(char)*len);
    # 5255 "./neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5255, 353);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5255, 354);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5255, 355);
    return __result_obj__0;
}

struct buffer*  charpa_to_buffer(char** self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    int i;
    # 5260 "./neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5260, 356, "struct buffer* "), "./neo-c.h", 5260, 357)), "./neo-c.h", 5260, 358);
    # 5264 "./neo-c.h"
    if(self==((void*)0)) {
        # 5262 "./neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5262, 359);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5262, 360);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5262, 361);
        return __result_obj__0;
    }
    # 5267 "./neo-c.h"
    for(i=0    ;i<len;i++){
        # 5265 "./neo-c.h"
        buffer_append(result,self[i],strlen(self[i]));
    }
    # 5267 "./neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5267, 362);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5267, 363);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5267, 364);
    return __result_obj__0;
}

struct buffer*  shorta_to_buffer(short* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    # 5272 "./neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5272, 365, "struct buffer* "), "./neo-c.h", 5272, 366)), "./neo-c.h", 5272, 367);
    # 5276 "./neo-c.h"
    if(self==((void*)0)) {
        # 5274 "./neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5274, 368);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5274, 369);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5274, 370);
        return __result_obj__0;
    }
    # 5276 "./neo-c.h"
    buffer_append(result,(char*)self,sizeof(short)*len);
    # 5277 "./neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5277, 371);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5277, 372);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5277, 373);
    return __result_obj__0;
}

struct buffer*  inta_to_buffer(int* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    # 5282 "./neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5282, 374, "struct buffer* "), "./neo-c.h", 5282, 375)), "./neo-c.h", 5282, 376);
    # 5286 "./neo-c.h"
    if(self==((void*)0)) {
        # 5284 "./neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5284, 377);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5284, 378);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5284, 379);
        return __result_obj__0;
    }
    # 5286 "./neo-c.h"
    buffer_append(result,(char*)self,sizeof(int)*len);
    # 5287 "./neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5287, 380);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5287, 381);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5287, 382);
    return __result_obj__0;
}

struct buffer*  longa_to_buffer(long* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    # 5292 "./neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5292, 383, "struct buffer* "), "./neo-c.h", 5292, 384)), "./neo-c.h", 5292, 385);
    # 5296 "./neo-c.h"
    if(self==((void*)0)) {
        # 5294 "./neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5294, 386);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5294, 387);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5294, 388);
        return __result_obj__0;
    }
    # 5296 "./neo-c.h"
    buffer_append(result,(char*)self,sizeof(long)*len);
    # 5297 "./neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5297, 389);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5297, 390);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5297, 391);
    return __result_obj__0;
}

struct buffer*  floata_to_buffer(float* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    # 5302 "./neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5302, 392, "struct buffer* "), "./neo-c.h", 5302, 393)), "./neo-c.h", 5302, 394);
    # 5306 "./neo-c.h"
    if(self==((void*)0)) {
        # 5304 "./neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5304, 395);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5304, 396);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5304, 397);
        return __result_obj__0;
    }
    # 5306 "./neo-c.h"
    buffer_append(result,(char*)self,sizeof(float)*len);
    # 5307 "./neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5307, 398);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5307, 399);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5307, 400);
    return __result_obj__0;
}

struct buffer*  doublea_to_buffer(double* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    # 5312 "./neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5312, 401, "struct buffer* "), "./neo-c.h", 5312, 402)), "./neo-c.h", 5312, 403);
    # 5316 "./neo-c.h"
    if(self==((void*)0)) {
        # 5314 "./neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5314, 404);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5314, 405);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5314, 406);
        return __result_obj__0;
    }
    # 5316 "./neo-c.h"
    buffer_append(result,(char*)self,sizeof(double)*len);
    # 5317 "./neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "./neo-c.h", 5317, 407);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5317, 408);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5317, 409);
    return __result_obj__0;
}

char*  buffer_printable(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_printable"; neo_current_frame = &fr;
    int len;
    void* __right_value0 = (void*)0;
    char*  result  ;
    char*  __result_obj__0  ;
    int n;
    int i;
    unsigned char c;
    # 5322 "./neo-c.h"
    len=self->len;
    # 5323 "./neo-c.h"
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), "./neo-c.h", 5323, 410, "char*"), "./neo-c.h", 5323, 411);
    # 5329 "./neo-c.h"
    if(self==((void*)0)) {
        # 5326 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 5326, 412);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5326, 413));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5326, 414));
        return __result_obj__0;
    }
    # 5329 "./neo-c.h"
    n=0;
    # 5347 "./neo-c.h"
    for(i=0    ;i<len;i++){
        # 5331 "./neo-c.h"
        c=self->buf[i];
        # 5345 "./neo-c.h"
        if((c>=0&&c<32)||c==127) {
            # 5336 "./neo-c.h"
            result[n++]=94;
            # 5337 "./neo-c.h"
            result[n++]=c+65-1;
        }
        else if(c>127) {
            # 5340 "./neo-c.h"
            result[n++]=63;
        }
        else {
            # 5343 "./neo-c.h"
            result[n++]=c;
        }
    }
    # 5349 "./neo-c.h"
    result[n]=0;
    # 5349 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 5349, 415);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5349, 416));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5349, 417));
    return __result_obj__0;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1char$* __result_obj__0;
    # 1489 "./neo-c.h"
    self->head=((void*)0);
    # 1490 "./neo-c.h"
    self->tail=((void*)0);
    # 1491 "./neo-c.h"
    self->len=0;
    # 1497 "./neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "./neo-c.h"
        list$1char$_push_back(self,values[i]);
    }
    # 1497 "./neo-c.h"
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(self, "./neo-c.h", 1497, 425);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2, 427);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 2, 428);
    return __result_obj__0;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_push_back"; neo_current_frame = &fr;
    struct list$1char$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$* litem;
    struct list_item$1char$* litem_20;
    struct list_item$1char$* litem_21;
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./neo-c.h", 1619, 419, "struct list_item$1char$*"))), "./neo-c.h", 1619, 420);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        litem->item=item;
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_20=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./neo-c.h", 1629, 421, "struct list_item$1char$*"))), "./neo-c.h", 1629, 422);
        # 1631 "./neo-c.h"
        litem_20->prev=self->head;
        # 1632 "./neo-c.h"
        litem_20->next=((void*)0);
        # 1633 "./neo-c.h"
        litem_20->item=item;
        # 1635 "./neo-c.h"
        self->tail=litem_20;
        # 1636 "./neo-c.h"
        self->head->next=litem_20;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_21=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./neo-c.h", 1639, 423, "struct list_item$1char$*"))), "./neo-c.h", 1639, 424);
        # 1641 "./neo-c.h"
        litem_21->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_21->next=((void*)0);
        # 1643 "./neo-c.h"
        litem_21->item=item;
        # 1645 "./neo-c.h"
        self->tail->next=litem_21;
        # 1646 "./neo-c.h"
        self->tail=litem_21;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$$p_finalize(struct list$1char$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1char$* it;
    struct list_item$1char$* prev_it;
    # 1502 "./neo-c.h"
    if(self==((void*)0)) {
        # 1500 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "./neo-c.h"
    it=self->head;
    # 1508 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "./neo-c.h"
        prev_it=it;
        # 1505 "./neo-c.h"
        it=it->next;
        # 1506 "./neo-c.h"
        come_call_finalizer(list_item$1char$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 426);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1char$$p_finalize"
            neo_current_frame = fr.prev;
}

struct list$1char$* chara_to_list(char* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$* __result_obj__0;
    # 5374 "./neo-c.h"
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value1=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc(1, sizeof(struct list$1char$)*(1), "./neo-c.h", 5374, 418, "struct list$1char$*"), "./neo-c.h", 5374, 429),len,self))), "./neo-c.h", 5374, 430);
    come_call_finalizer(list$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5374, 431);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5374, 432);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1char$p* __result_obj__0;
    # 1489 "./neo-c.h"
    self->head=((void*)0);
    # 1490 "./neo-c.h"
    self->tail=((void*)0);
    # 1491 "./neo-c.h"
    self->len=0;
    # 1497 "./neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "./neo-c.h"
        list$1char$p_push_back(self,values[i]);
    }
    # 1497 "./neo-c.h"
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(self, "./neo-c.h", 1497, 440);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 442);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 443);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_push_back"; neo_current_frame = &fr;
    struct list$1char$p* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$p* litem;
    struct list_item$1char$p* litem_22;
    struct list_item$1char$p* litem_23;
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./neo-c.h", 1619, 434, "struct list_item$1char$p*"))), "./neo-c.h", 1619, 435);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        litem->item=item;
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_22=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./neo-c.h", 1629, 436, "struct list_item$1char$p*"))), "./neo-c.h", 1629, 437);
        # 1631 "./neo-c.h"
        litem_22->prev=self->head;
        # 1632 "./neo-c.h"
        litem_22->next=((void*)0);
        # 1633 "./neo-c.h"
        litem_22->item=item;
        # 1635 "./neo-c.h"
        self->tail=litem_22;
        # 1636 "./neo-c.h"
        self->head->next=litem_22;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_23=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./neo-c.h", 1639, 438, "struct list_item$1char$p*"))), "./neo-c.h", 1639, 439);
        # 1641 "./neo-c.h"
        litem_23->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_23->next=((void*)0);
        # 1643 "./neo-c.h"
        litem_23->item=item;
        # 1645 "./neo-c.h"
        self->tail->next=litem_23;
        # 1646 "./neo-c.h"
        self->tail=litem_23;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$p$p_finalize(struct list$1char$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p$p_finalize"; neo_current_frame = &fr;
    struct list_item$1char$p* it;
    struct list_item$1char$p* prev_it;
    # 1502 "./neo-c.h"
    if(self==((void*)0)) {
        # 1500 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "./neo-c.h"
    it=self->head;
    # 1508 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "./neo-c.h"
        prev_it=it;
        # 1505 "./neo-c.h"
        it=it->next;
        # 1506 "./neo-c.h"
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 441);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$p$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1char$p$p_finalize"
            neo_current_frame = fr.prev;
}

struct list$1char$p* charpa_to_list(char** self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$p* __result_obj__0;
    # 5379 "./neo-c.h"
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value1=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./neo-c.h", 5379, 433, "struct list$1char$p*"), "./neo-c.h", 5379, 444),len,self))), "./neo-c.h", 5379, 445);
    come_call_finalizer(list$1char$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5379, 446);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5379, 447);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1short$* __result_obj__0;
    # 1489 "./neo-c.h"
    self->head=((void*)0);
    # 1490 "./neo-c.h"
    self->tail=((void*)0);
    # 1491 "./neo-c.h"
    self->len=0;
    # 1497 "./neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "./neo-c.h"
        list$1short$_push_back(self,values[i]);
    }
    # 1497 "./neo-c.h"
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(self, "./neo-c.h", 1497, 455);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 457);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 458);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_push_back"; neo_current_frame = &fr;
    struct list$1short$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1short$* litem;
    struct list_item$1short$* litem_24;
    struct list_item$1short$* litem_25;
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./neo-c.h", 1619, 449, "struct list_item$1short$*"))), "./neo-c.h", 1619, 450);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        litem->item=item;
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_24=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./neo-c.h", 1629, 451, "struct list_item$1short$*"))), "./neo-c.h", 1629, 452);
        # 1631 "./neo-c.h"
        litem_24->prev=self->head;
        # 1632 "./neo-c.h"
        litem_24->next=((void*)0);
        # 1633 "./neo-c.h"
        litem_24->item=item;
        # 1635 "./neo-c.h"
        self->tail=litem_24;
        # 1636 "./neo-c.h"
        self->head->next=litem_24;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_25=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./neo-c.h", 1639, 453, "struct list_item$1short$*"))), "./neo-c.h", 1639, 454);
        # 1641 "./neo-c.h"
        litem_25->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_25->next=((void*)0);
        # 1643 "./neo-c.h"
        litem_25->item=item;
        # 1645 "./neo-c.h"
        self->tail->next=litem_25;
        # 1646 "./neo-c.h"
        self->tail=litem_25;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1short$$p_finalize(struct list$1short$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1short$* it;
    struct list_item$1short$* prev_it;
    # 1502 "./neo-c.h"
    if(self==((void*)0)) {
        # 1500 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "./neo-c.h"
    it=self->head;
    # 1508 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "./neo-c.h"
        prev_it=it;
        # 1505 "./neo-c.h"
        it=it->next;
        # 1506 "./neo-c.h"
        come_call_finalizer(list_item$1short$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 456);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1short$$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1short$$p_finalize"
            neo_current_frame = fr.prev;
}

struct list$1short$* shorta_to_list(short* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1short$* __result_obj__0;
    # 5384 "./neo-c.h"
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value1=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc(1, sizeof(struct list$1short$)*(1), "./neo-c.h", 5384, 448, "struct list$1short$*"), "./neo-c.h", 5384, 459),len,self))), "./neo-c.h", 5384, 460);
    come_call_finalizer(list$1short$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5384, 461);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5384, 462);
    return __result_obj__0;
}

struct list$1int$* inta_to_list(int* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* __result_obj__0;
    # 5389 "./neo-c.h"
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value1=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 5389, 463, "struct list$1int$*"), "./neo-c.h", 5389, 464),len,self))), "./neo-c.h", 5389, 465);
    come_call_finalizer(list$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5389, 466);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5389, 467);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1long$* __result_obj__0;
    # 1489 "./neo-c.h"
    self->head=((void*)0);
    # 1490 "./neo-c.h"
    self->tail=((void*)0);
    # 1491 "./neo-c.h"
    self->len=0;
    # 1497 "./neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "./neo-c.h"
        list$1long$_push_back(self,values[i]);
    }
    # 1497 "./neo-c.h"
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(self, "./neo-c.h", 1497, 475);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 477);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 478);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_push_back"; neo_current_frame = &fr;
    struct list$1long$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1long$* litem;
    struct list_item$1long$* litem_26;
    struct list_item$1long$* litem_27;
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./neo-c.h", 1619, 469, "struct list_item$1long$*"))), "./neo-c.h", 1619, 470);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        litem->item=item;
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_26=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./neo-c.h", 1629, 471, "struct list_item$1long$*"))), "./neo-c.h", 1629, 472);
        # 1631 "./neo-c.h"
        litem_26->prev=self->head;
        # 1632 "./neo-c.h"
        litem_26->next=((void*)0);
        # 1633 "./neo-c.h"
        litem_26->item=item;
        # 1635 "./neo-c.h"
        self->tail=litem_26;
        # 1636 "./neo-c.h"
        self->head->next=litem_26;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_27=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./neo-c.h", 1639, 473, "struct list_item$1long$*"))), "./neo-c.h", 1639, 474);
        # 1641 "./neo-c.h"
        litem_27->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_27->next=((void*)0);
        # 1643 "./neo-c.h"
        litem_27->item=item;
        # 1645 "./neo-c.h"
        self->tail->next=litem_27;
        # 1646 "./neo-c.h"
        self->tail=litem_27;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1long$$p_finalize(struct list$1long$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1long$* it;
    struct list_item$1long$* prev_it;
    # 1502 "./neo-c.h"
    if(self==((void*)0)) {
        # 1500 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "./neo-c.h"
    it=self->head;
    # 1508 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "./neo-c.h"
        prev_it=it;
        # 1505 "./neo-c.h"
        it=it->next;
        # 1506 "./neo-c.h"
        come_call_finalizer(list_item$1long$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 476);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1long$$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1long$$p_finalize"
            neo_current_frame = fr.prev;
}

struct list$1long$* longa_to_list(long* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1long$* __result_obj__0;
    # 5394 "./neo-c.h"
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value1=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc(1, sizeof(struct list$1long$)*(1), "./neo-c.h", 5394, 468, "struct list$1long$*"), "./neo-c.h", 5394, 479),len,self))), "./neo-c.h", 5394, 480);
    come_call_finalizer(list$1long$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5394, 481);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5394, 482);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1float$* __result_obj__0;
    # 1489 "./neo-c.h"
    self->head=((void*)0);
    # 1490 "./neo-c.h"
    self->tail=((void*)0);
    # 1491 "./neo-c.h"
    self->len=0;
    # 1497 "./neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "./neo-c.h"
        list$1float$_push_back(self,values[i]);
    }
    # 1497 "./neo-c.h"
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(self, "./neo-c.h", 1497, 490);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 492);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 493);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_push_back"; neo_current_frame = &fr;
    struct list$1float$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1float$* litem;
    struct list_item$1float$* litem_28;
    struct list_item$1float$* litem_29;
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./neo-c.h", 1619, 484, "struct list_item$1float$*"))), "./neo-c.h", 1619, 485);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        litem->item=item;
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_28=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./neo-c.h", 1629, 486, "struct list_item$1float$*"))), "./neo-c.h", 1629, 487);
        # 1631 "./neo-c.h"
        litem_28->prev=self->head;
        # 1632 "./neo-c.h"
        litem_28->next=((void*)0);
        # 1633 "./neo-c.h"
        litem_28->item=item;
        # 1635 "./neo-c.h"
        self->tail=litem_28;
        # 1636 "./neo-c.h"
        self->head->next=litem_28;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_29=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./neo-c.h", 1639, 488, "struct list_item$1float$*"))), "./neo-c.h", 1639, 489);
        # 1641 "./neo-c.h"
        litem_29->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_29->next=((void*)0);
        # 1643 "./neo-c.h"
        litem_29->item=item;
        # 1645 "./neo-c.h"
        self->tail->next=litem_29;
        # 1646 "./neo-c.h"
        self->tail=litem_29;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1float$$p_finalize(struct list$1float$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1float$* it;
    struct list_item$1float$* prev_it;
    # 1502 "./neo-c.h"
    if(self==((void*)0)) {
        # 1500 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "./neo-c.h"
    it=self->head;
    # 1508 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "./neo-c.h"
        prev_it=it;
        # 1505 "./neo-c.h"
        it=it->next;
        # 1506 "./neo-c.h"
        come_call_finalizer(list_item$1float$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 491);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1float$$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1float$$p_finalize"
            neo_current_frame = fr.prev;
}

struct list$1float$* floata_to_list(float* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1float$* __result_obj__0;
    # 5399 "./neo-c.h"
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value1=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc(1, sizeof(struct list$1float$)*(1), "./neo-c.h", 5399, 483, "struct list$1float$*"), "./neo-c.h", 5399, 494),len,self))), "./neo-c.h", 5399, 495);
    come_call_finalizer(list$1float$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5399, 496);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5399, 497);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1double$* __result_obj__0;
    # 1489 "./neo-c.h"
    self->head=((void*)0);
    # 1490 "./neo-c.h"
    self->tail=((void*)0);
    # 1491 "./neo-c.h"
    self->len=0;
    # 1497 "./neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "./neo-c.h"
        list$1double$_push_back(self,values[i]);
    }
    # 1497 "./neo-c.h"
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(self, "./neo-c.h", 1497, 505);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 507);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 0, 508);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_push_back"; neo_current_frame = &fr;
    struct list$1double$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1double$* litem;
    struct list_item$1double$* litem_30;
    struct list_item$1double$* litem_31;
    # 1618 "./neo-c.h"
    if(self==((void*)0)) {
        # 1615 "./neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "./neo-c.h"
    if(self->len==0) {
        # 1619 "./neo-c.h"
        litem=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./neo-c.h", 1619, 499, "struct list_item$1double$*"))), "./neo-c.h", 1619, 500);
        # 1621 "./neo-c.h"
        litem->prev=((void*)0);
        # 1622 "./neo-c.h"
        litem->next=((void*)0);
        # 1623 "./neo-c.h"
        litem->item=item;
        # 1625 "./neo-c.h"
        self->tail=litem;
        # 1626 "./neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_30=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./neo-c.h", 1629, 501, "struct list_item$1double$*"))), "./neo-c.h", 1629, 502);
        # 1631 "./neo-c.h"
        litem_30->prev=self->head;
        # 1632 "./neo-c.h"
        litem_30->next=((void*)0);
        # 1633 "./neo-c.h"
        litem_30->item=item;
        # 1635 "./neo-c.h"
        self->tail=litem_30;
        # 1636 "./neo-c.h"
        self->head->next=litem_30;
    }
    else {
        # 1639 "./neo-c.h"
        __right_value0 = (void*)0;
        litem_31=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./neo-c.h", 1639, 503, "struct list_item$1double$*"))), "./neo-c.h", 1639, 504);
        # 1641 "./neo-c.h"
        litem_31->prev=self->tail;
        # 1642 "./neo-c.h"
        litem_31->next=((void*)0);
        # 1643 "./neo-c.h"
        litem_31->item=item;
        # 1645 "./neo-c.h"
        self->tail->next=litem_31;
        # 1646 "./neo-c.h"
        self->tail=litem_31;
    }
    # 1649 "./neo-c.h"
    self->len++;
    # 1651 "./neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1double$$p_finalize(struct list$1double$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1double$* it;
    struct list_item$1double$* prev_it;
    # 1502 "./neo-c.h"
    if(self==((void*)0)) {
        # 1500 "./neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "./neo-c.h"
    it=self->head;
    # 1508 "./neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "./neo-c.h"
        prev_it=it;
        # 1505 "./neo-c.h"
        it=it->next;
        # 1506 "./neo-c.h"
        come_call_finalizer(list_item$1double$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 506);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1double$$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1double$$p_finalize"
            neo_current_frame = fr.prev;
}

struct list$1double$* doublea_to_list(double* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1double$* __result_obj__0;
    # 5404 "./neo-c.h"
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value1=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc(1, sizeof(struct list$1double$)*(1), "./neo-c.h", 5404, 498, "struct list$1double$*"), "./neo-c.h", 5404, 509),len,self))), "./neo-c.h", 5404, 510);
    come_call_finalizer(list$1double$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 5404, 511);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 5404, 512);
    return __result_obj__0;
}

_Bool _Bool_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_equals"; neo_current_frame = &fr;
    # 5417 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_equals"; neo_current_frame = &fr;
    # 5422 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_equals"; neo_current_frame = &fr;
    # 5427 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_equals"; neo_current_frame = &fr;
    # 5432 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_equals"; neo_current_frame = &fr;
    # 5437 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool size_t_equals(unsigned long  int  self  , unsigned long  int  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_equals"; neo_current_frame = &fr;
    # 5442 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool float_equals(float self, float right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_equals"; neo_current_frame = &fr;
    # 5447 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool double_equals(double self, double right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_equals"; neo_current_frame = &fr;
    # 5452 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_equals"; neo_current_frame = &fr;
    # 5462 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_operator_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_equals"; neo_current_frame = &fr;
    # 5467 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_operator_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_equals"; neo_current_frame = &fr;
    # 5472 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_operator_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_equals"; neo_current_frame = &fr;
    # 5477 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_operator_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_equals"; neo_current_frame = &fr;
    # 5482 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_not_equals"; neo_current_frame = &fr;
    # 5492 "./neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool char_operator_not_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_not_equals"; neo_current_frame = &fr;
    # 5497 "./neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool short_operator_not_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_not_equals"; neo_current_frame = &fr;
    # 5502 "./neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool int_operator_not_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_not_equals"; neo_current_frame = &fr;
    # 5507 "./neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool long_operator_not_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_not_equals"; neo_current_frame = &fr;
    # 5512 "./neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool charp_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_equals"; neo_current_frame = &fr;
    # 5527 "./neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5518 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5521 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
        # 5524 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5527 "./neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool string_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_equals"; neo_current_frame = &fr;
    # 5542 "./neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5533 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5536 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
        # 5539 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5542 "./neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool voidp_equals(void* self, void* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_equals"; neo_current_frame = &fr;
    # 5547 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Boolp_equals(_Bool* self, _Bool* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Boolp_equals"; neo_current_frame = &fr;
    # 5552 "./neo-c.h"
        neo_current_frame = fr.prev;
    return *self==*right;
    neo_current_frame = fr.prev;
}

_Bool string_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_equals"; neo_current_frame = &fr;
    # 5567 "./neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5558 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5561 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
        # 5564 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5567 "./neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool charp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_equals"; neo_current_frame = &fr;
    # 5582 "./neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5573 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5576 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
        # 5579 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5582 "./neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool chara_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_equals"; neo_current_frame = &fr;
    # 5594 "./neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5588 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5591 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 5594 "./neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool voidp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_equals"; neo_current_frame = &fr;
    # 5599 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool voidp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_not_equals"; neo_current_frame = &fr;
    # 5604 "./neo-c.h"
        neo_current_frame = fr.prev;
    return !charp_operator_equals(self,right);
    neo_current_frame = fr.prev;
}

_Bool string_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_not_equals"; neo_current_frame = &fr;
    # 5616 "./neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5610 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5613 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5616 "./neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool charp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_not_equals"; neo_current_frame = &fr;
    # 5628 "./neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5622 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5625 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5628 "./neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool chara_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_not_equals"; neo_current_frame = &fr;
    # 5640 "./neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5634 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5637 "./neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5640 "./neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

char*  charp_operator_add(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_add"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    # 5649 "./neo-c.h"
    if(self==((void*)0)||right==((void*)0)) {
        # 5647 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",5647))), "./neo-c.h", 5647, 513);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5647, 514));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5647, 515));
        return __result_obj__0;
    }
    # 5649 "./neo-c.h"
    len=strlen(self)+strlen(right);
    # 5651 "./neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "./neo-c.h", 5651, 516, "char*"), "./neo-c.h", 5651, 517);
    # 5653 "./neo-c.h"
    strncpy(result,self,len+1);
    # 5654 "./neo-c.h"
    strncat(result,right,len+1);
    # 5656 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 5656, 518);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5656, 519));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5656, 520));
    return __result_obj__0;
}

char*  string_operator_add(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_add"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    # 5664 "./neo-c.h"
    if(self==((void*)0)||right==((void*)0)) {
        # 5662 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",5662))), "./neo-c.h", 5662, 521);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5662, 522));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5662, 523));
        return __result_obj__0;
    }
    # 5664 "./neo-c.h"
    len=strlen(self)+strlen(right);
    # 5666 "./neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "./neo-c.h", 5666, 524, "char*"), "./neo-c.h", 5666, 525);
    # 5668 "./neo-c.h"
    strncpy(result,self,len+1);
    # 5669 "./neo-c.h"
    strncat(result,right,len+1);
    # 5671 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 5671, 526);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5671, 527));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5671, 528));
    return __result_obj__0;
}

char*  charp_operator_mult(const char* self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_mult"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int i;
    # 5679 "./neo-c.h"
    if(self==((void*)0)) {
        # 5677 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",5677))), "./neo-c.h", 5677, 529);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5677, 530));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5677, 531));
        return __result_obj__0;
    }
    # 5679 "./neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5679, 532, "struct buffer* "), "./neo-c.h", 5679, 533)), "./neo-c.h", 5679, 534);
    # 5685 "./neo-c.h"
    for(i=0    ;i<right;i++){
        # 5682 "./neo-c.h"
        buffer_append_str(buf,self);
    }
    # 5685 "./neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "./neo-c.h", 5685, 535);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 5685, 536);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5685, 537));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5685, 538));
    return __result_obj__0;
}

char*  string_operator_mult(const char* self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_mult"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int i;
    # 5693 "./neo-c.h"
    if(self==((void*)0)) {
        # 5691 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",5691))), "./neo-c.h", 5691, 539);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5691, 540));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5691, 541));
        return __result_obj__0;
    }
    # 5693 "./neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 5693, 542, "struct buffer* "), "./neo-c.h", 5693, 543)), "./neo-c.h", 5693, 544);
    # 5699 "./neo-c.h"
    for(i=0    ;i<right;i++){
        # 5696 "./neo-c.h"
        buffer_append_str(buf,self);
    }
    # 5699 "./neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "./neo-c.h", 5699, 545);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 5699, 546);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5699, 547));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5699, 548));
    return __result_obj__0;
}

_Bool charpa_contained(const char* self[], unsigned long  int  len  , const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_contained"; neo_current_frame = &fr;
    _Bool result;
    int i;
    # 5709 "./neo-c.h"
    result=(_Bool)0;
    # 5713 "./neo-c.h"
    if(self==((void*)0)) {
        # 5711 "./neo-c.h"
                neo_current_frame = fr.prev;
        return result;
    }
    # 5719 "./neo-c.h"
    for(i=0    ;i<len;i++){
        # 5718 "./neo-c.h"
        if(strncmp(self[i],str,strlen(self[i]))==0) {
            # 5715 "./neo-c.h"
            result=(_Bool)1;
            # 5716 "./neo-c.h"
            break;
        }
    }
    # 5719 "./neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned long  int  shorta_length(short* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_length"; neo_current_frame = &fr;
    # 5724 "./neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  inta_length(int* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "inta_length"; neo_current_frame = &fr;
    # 5729 "./neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  longa_length(long* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "longa_length"; neo_current_frame = &fr;
    # 5734 "./neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  floata_length(float* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "floata_length"; neo_current_frame = &fr;
    # 5739 "./neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  doublea_length(double* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_length"; neo_current_frame = &fr;
    # 5744 "./neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned int _Bool_get_hash_key(_Bool value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_get_hash_key"; neo_current_frame = &fr;
    # 5757 "./neo-c.h"
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

unsigned int char_get_hash_key(char value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_get_hash_key"; neo_current_frame = &fr;
    # 5762 "./neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int short_get_hash_key(short int value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_get_hash_key"; neo_current_frame = &fr;
    # 5767 "./neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int int_get_hash_key(int value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_get_hash_key"; neo_current_frame = &fr;
    # 5772 "./neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int long_get_hash_key(long value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_get_hash_key"; neo_current_frame = &fr;
    # 5777 "./neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int size_t_get_hash_key(unsigned long  int  value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_get_hash_key"; neo_current_frame = &fr;
    # 5782 "./neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int float_get_hash_key(float value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_get_hash_key"; neo_current_frame = &fr;
    # 5787 "./neo-c.h"
        neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int double_get_hash_key(double value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_get_hash_key"; neo_current_frame = &fr;
    # 5792 "./neo-c.h"
        neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int charp_get_hash_key(const char* value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_get_hash_key"; neo_current_frame = &fr;
    int result;
    # 5800 "./neo-c.h"
    if(value==((void*)0)) {
        # 5798 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5800 "./neo-c.h"
    result=0;
    # 5801 "./neo-c.h"
    const char* p=value;
    # 5806 "./neo-c.h"
    while(*p) {
        # 5803 "./neo-c.h"
        result+=(*p);
        # 5804 "./neo-c.h"
        p++;
    }
    # 5806 "./neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned int string_get_hash_key(char* value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_get_hash_key"; neo_current_frame = &fr;
    int result;
    char* p;
    # 5814 "./neo-c.h"
    if(value==((void*)0)) {
        # 5812 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5814 "./neo-c.h"
    result=0;
    # 5815 "./neo-c.h"
    p=value;
    # 5820 "./neo-c.h"
    while(*p) {
        # 5817 "./neo-c.h"
        result+=(*p);
        # 5818 "./neo-c.h"
        p++;
    }
    # 5820 "./neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned int voidp_get_hash_key(void* value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_get_hash_key"; neo_current_frame = &fr;
    # 5825 "./neo-c.h"
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

_Bool _Bool_clone(_Bool self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_clone"; neo_current_frame = &fr;
    # 5838 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

char char_clone(char self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_clone"; neo_current_frame = &fr;
    # 5843 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

short int short_clone(short self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_clone"; neo_current_frame = &fr;
    # 5848 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

int int_clone(int self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_clone"; neo_current_frame = &fr;
    # 5853 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long  int long_clone(long self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_clone"; neo_current_frame = &fr;
    # 5858 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

unsigned long  int  size_t_clone(unsigned long  int  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_clone"; neo_current_frame = &fr;
    # 5863 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

double double_clone(double self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_clone"; neo_current_frame = &fr;
    # 5868 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

float float_clone(float self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_clone"; neo_current_frame = &fr;
    # 5873 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

_Bool xisalpha(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisalpha"; neo_current_frame = &fr;
    _Bool result;
    # 5882 "./neo-c.h"
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 5883 "./neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xisblank(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisblank"; neo_current_frame = &fr;
    # 5888 "./neo-c.h"
        neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xisdigit(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisdigit"; neo_current_frame = &fr;
    # 5893 "./neo-c.h"
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xisspace(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisspace"; neo_current_frame = &fr;
    # 5898 "./neo-c.h"
        neo_current_frame = fr.prev;
    return c==32||c==9||c==10||c==13||c==28||c==11;
    neo_current_frame = fr.prev;
}

_Bool xisalnum(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisalnum"; neo_current_frame = &fr;
    # 5903 "./neo-c.h"
        neo_current_frame = fr.prev;
    return xisalpha(c)||xisdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xisascii(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisascii"; neo_current_frame = &fr;
    _Bool result;
    # 5908 "./neo-c.h"
    result=(c>=32&&c<=126);
    # 5909 "./neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xispunct(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xispunct"; neo_current_frame = &fr;
    # 5913 "./neo-c.h"
        neo_current_frame = fr.prev;
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
    neo_current_frame = fr.prev;
}

int string_length(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_length"; neo_current_frame = &fr;
    # 5924 "./neo-c.h"
    if(str==((void*)0)) {
        # 5922 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5924 "./neo-c.h"
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int charp_length(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_length"; neo_current_frame = &fr;
    # 5931 "./neo-c.h"
    if(str==((void*)0)) {
        # 5929 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5931 "./neo-c.h"
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int chara_length(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_length"; neo_current_frame = &fr;
    # 5945 "./neo-c.h"
    if(str==((void*)0)) {
        # 5943 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5945 "./neo-c.h"
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

char*  charp_reverse(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_reverse"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    int i;
    # 5953 "./neo-c.h"
    if(str==((void*)0)) {
        # 5951 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",5951))), "./neo-c.h", 5951, 549);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5951, 550));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5951, 551));
        return __result_obj__0;
    }
    # 5953 "./neo-c.h"
    len=strlen(str);
    # 5954 "./neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "./neo-c.h", 5954, 552, "char*"), "./neo-c.h", 5954, 553);
    # 5960 "./neo-c.h"
    for(i=0    ;i<len;i++){
        # 5957 "./neo-c.h"
        result[i]=str[len-i-1];
    }
    # 5960 "./neo-c.h"
    result[len]=0;
    # 5962 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 5962, 554);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5962, 555));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5962, 556));
    return __result_obj__0;
}

char*  string_operator_load_range_element(char* str, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_load_range_element"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    # 5971 "./neo-c.h"
    if(str==((void*)0)) {
        # 5968 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",5968))), "./neo-c.h", 5968, 557);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5968, 558));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5968, 559));
        return __result_obj__0;
    }
    # 5971 "./neo-c.h"
    len=strlen(str);
    # 5976 "./neo-c.h"
    if(head<0) {
        # 5974 "./neo-c.h"
        head+=len;
    }
    # 5980 "./neo-c.h"
    if(tail<0) {
        # 5977 "./neo-c.h"
        tail+=len+1;
    }
    # 5984 "./neo-c.h"
    if(head>tail) {
        # 5981 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "./neo-c.h", 5981, 560);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5981, 561));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5981, 562));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5981, 563));
        return __result_obj__0;
    }
    # 5988 "./neo-c.h"
    if(head<0) {
        # 5985 "./neo-c.h"
        head=0;
    }
    # 5992 "./neo-c.h"
    if(tail>=len) {
        # 5989 "./neo-c.h"
        tail=len;
    }
    # 5996 "./neo-c.h"
    if(head==tail) {
        # 5993 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",5993))), "./neo-c.h", 5993, 564);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5993, 565));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5993, 566));
        return __result_obj__0;
    }
    # 6000 "./neo-c.h"
    if(tail-head+1<1) {
        # 5997 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",5997))), "./neo-c.h", 5997, 567);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 5997, 568));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 5997, 569));
        return __result_obj__0;
    }
    # 6000 "./neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./neo-c.h", 6000, 570, "char*"), "./neo-c.h", 6000, 571);
    # 6002 "./neo-c.h"
    memcpy(result,str+head,tail-head);
    # 6003 "./neo-c.h"
    result[tail-head]=0;
    # 6005 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 6005, 572);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6005, 573));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6005, 574));
    return __result_obj__0;
}

char*  charp_operator_load_range_element(char* str, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_load_range_element"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    # 6014 "./neo-c.h"
    if(str==((void*)0)) {
        # 6011 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6011))), "./neo-c.h", 6011, 575);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6011, 576));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6011, 577));
        return __result_obj__0;
    }
    # 6014 "./neo-c.h"
    len=strlen(str);
    # 6019 "./neo-c.h"
    if(head<0) {
        # 6017 "./neo-c.h"
        head+=len;
    }
    # 6023 "./neo-c.h"
    if(tail<0) {
        # 6020 "./neo-c.h"
        tail+=len+1;
    }
    # 6027 "./neo-c.h"
    if(head>tail) {
        # 6024 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "./neo-c.h", 6024, 578);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6024, 579));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6024, 580));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6024, 581));
        return __result_obj__0;
    }
    # 6031 "./neo-c.h"
    if(head<0) {
        # 6028 "./neo-c.h"
        head=0;
    }
    # 6035 "./neo-c.h"
    if(tail>=len) {
        # 6032 "./neo-c.h"
        tail=len;
    }
    # 6039 "./neo-c.h"
    if(head==tail) {
        # 6036 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6036))), "./neo-c.h", 6036, 582);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6036, 583));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6036, 584));
        return __result_obj__0;
    }
    # 6043 "./neo-c.h"
    if(tail-head+1<1) {
        # 6040 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6040))), "./neo-c.h", 6040, 585);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6040, 586));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6040, 587));
        return __result_obj__0;
    }
    # 6043 "./neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./neo-c.h", 6043, 588, "char*"), "./neo-c.h", 6043, 589);
    # 6045 "./neo-c.h"
    memcpy(result,str+head,tail-head);
    # 6046 "./neo-c.h"
    result[tail-head]=0;
    # 6048 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 6048, 590);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6048, 591));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6048, 592));
    return __result_obj__0;
}

char*  charp_substring(const char* str, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_substring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    # 6057 "./neo-c.h"
    if(str==((void*)0)) {
        # 6054 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6054))), "./neo-c.h", 6054, 593);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6054, 594));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6054, 595));
        return __result_obj__0;
    }
    # 6057 "./neo-c.h"
    len=strlen(str);
    # 6062 "./neo-c.h"
    if(head<0) {
        # 6060 "./neo-c.h"
        head+=len;
    }
    # 6066 "./neo-c.h"
    if(tail<0) {
        # 6063 "./neo-c.h"
        tail+=len+1;
    }
    # 6070 "./neo-c.h"
    if(head>tail) {
        # 6067 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "./neo-c.h", 6067, 596);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6067, 597));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6067, 598));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6067, 599));
        return __result_obj__0;
    }
    # 6074 "./neo-c.h"
    if(head<0) {
        # 6071 "./neo-c.h"
        head=0;
    }
    # 6078 "./neo-c.h"
    if(tail>=len) {
        # 6075 "./neo-c.h"
        tail=len;
    }
    # 6082 "./neo-c.h"
    if(head==tail) {
        # 6079 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6079))), "./neo-c.h", 6079, 600);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6079, 601));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6079, 602));
        return __result_obj__0;
    }
    # 6086 "./neo-c.h"
    if(tail-head+1<1) {
        # 6083 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6083))), "./neo-c.h", 6083, 603);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6083, 604));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6083, 605));
        return __result_obj__0;
    }
    # 6086 "./neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./neo-c.h", 6086, 606, "char*"), "./neo-c.h", 6086, 607);
    # 6088 "./neo-c.h"
    memcpy(result,str+head,tail-head);
    # 6089 "./neo-c.h"
    result[tail-head]=0;
    # 6091 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 6091, 608);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6091, 609));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6091, 610));
    return __result_obj__0;
}

char*  xsprintf(const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xsprintf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __builtin_va_list  args  ;
    char* result;
    int len;
    char*  result2  ;
    memset(&result, 0, sizeof(result));
    # 6099 "./neo-c.h"
    if(msg==((void*)0)) {
        # 6097 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6097))), "./neo-c.h", 6097, 611);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6097, 612));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6097, 613));
        return __result_obj__0;
    }
    # 6099 "./neo-c.h"
    # 6100 "./neo-c.h"
    __builtin_va_start(args,msg);
    # 6101 "./neo-c.h"
    # 6102 "./neo-c.h"
    len=vasprintf(&result,msg,args);
    # 6103 "./neo-c.h"
    __builtin_va_end(args);
    # 6109 "./neo-c.h"
    if(len<0) {
        # 6106 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6106))), "./neo-c.h", 6106, 614);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6106, 615));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6106, 616));
        return __result_obj__0;
    }
    # 6109 "./neo-c.h"
    __right_value0 = (void*)0;
    result2=(char* )come_increment_ref_count(__builtin_string(result,"./neo-c.h",6109), "./neo-c.h", 6109, 617);
    # 6111 "./neo-c.h"
    free(result);
    # 6113 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result2, "./neo-c.h", 6113, 618);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6113, 619));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6113, 620));
    return __result_obj__0;
}

char*  charp_delete(char* str, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_delete"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    # 6122 "./neo-c.h"
    if(str==((void*)0)) {
        # 6119 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6119))), "./neo-c.h", 6119, 621);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6119, 622));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6119, 623));
        return __result_obj__0;
    }
    # 6122 "./neo-c.h"
    len=strlen(str);
    # 6128 "./neo-c.h"
    if(head>=len) {
        # 6125 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"./neo-c.h",6125))), "./neo-c.h", 6125, 624);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6125, 625));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6125, 626));
        return __result_obj__0;
    }
    # 6132 "./neo-c.h"
    if(strcmp(str,"")==0) {
        # 6129 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"./neo-c.h",6129))), "./neo-c.h", 6129, 627);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6129, 628));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6129, 629));
        return __result_obj__0;
    }
    # 6136 "./neo-c.h"
    if(head<0) {
        # 6133 "./neo-c.h"
        head+=len;
    }
    # 6140 "./neo-c.h"
    if(tail<0) {
        # 6137 "./neo-c.h"
        tail+=len+1;
    }
    # 6144 "./neo-c.h"
    if(head<0) {
        # 6141 "./neo-c.h"
        head=0;
    }
    # 6148 "./neo-c.h"
    if(tail<0) {
        # 6145 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"./neo-c.h",6145))), "./neo-c.h", 6145, 630);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6145, 631));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6145, 632));
        return __result_obj__0;
    }
    # 6152 "./neo-c.h"
    if(tail>=len) {
        # 6149 "./neo-c.h"
        tail=len;
    }
    # 6152 "./neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len-(tail-head)+1)), "./neo-c.h", 6152, 633, "char*"), "./neo-c.h", 6152, 634);
    # 6154 "./neo-c.h"
    memcpy(result,str,head);
    # 6155 "./neo-c.h"
    memcpy(result+head,str+tail,len-tail);
    # 6157 "./neo-c.h"
    result[len-(tail-head)]=0;
    # 6159 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 6159, 635);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6159, 636));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6159, 637));
    return __result_obj__0;
}

struct list$1char$ph* charp_split_char(char* self, char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_split_char"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct buffer*  str  ;
    int self_len;
    int i;
    # 6168 "./neo-c.h"
    if(self==((void*)0)) {
        # 6165 "./neo-c.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 6165, 638, "struct list$1char$ph*"), "./neo-c.h", 6165, 639)))), "./neo-c.h", 6165, 640);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6165, 641);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6165, 642);
        return __result_obj__0;
    }
    # 6168 "./neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 6168, 643, "struct list$1char$ph*"), "./neo-c.h", 6168, 644)), "./neo-c.h", 6168, 645);
    # 6170 "./neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    str=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 6170, 646, "struct buffer* "), "./neo-c.h", 6170, 647)), "./neo-c.h", 6170, 648);
    # 6172 "./neo-c.h"
    self_len=charp_length(self);
    # 6182 "./neo-c.h"
    for(i=0    ;i<self_len;i++){
        # 6181 "./neo-c.h"
        if(self[i]==c) {
            # 6175 "./neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"./neo-c.h",6175), "./neo-c.h", 6175, 649));
            # 6176 "./neo-c.h"
            buffer_reset(str);
        }
        else {
            # 6179 "./neo-c.h"
            buffer_append_char(str,self[i]);
        }
    }
    # 6186 "./neo-c.h"
    if(buffer_length(str)!=0) {
        # 6183 "./neo-c.h"
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"./neo-c.h",6183), "./neo-c.h", 6183, 650));
    }
    # 6186 "./neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 6186, 651);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6186, 652);
    come_call_finalizer(buffer_finalize, str, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 6186, 653);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6186, 654);
    return __result_obj__0;
}

char*  charp_xsprintf(char* self, const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_xsprintf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6191 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "./neo-c.h", 6191, 655);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6191, 656));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6191, 657));
    return __result_obj__0;
}

char*  int_xsprintf(int self, const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_xsprintf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6196 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "./neo-c.h", 6196, 658);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6196, 659));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6196, 660));
    return __result_obj__0;
}

char*  charp_printable(char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_printable"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char*  result  ;
    int n;
    int i;
    char c;
    # 6204 "./neo-c.h"
    if(str==((void*)0)) {
        # 6202 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6202))), "./neo-c.h", 6202, 661);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6202, 662));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6202, 663));
        return __result_obj__0;
    }
    # 6204 "./neo-c.h"
    len=charp_length(str);
    # 6205 "./neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), "./neo-c.h", 6205, 664, "char*"), "./neo-c.h", 6205, 665);
    # 6207 "./neo-c.h"
    n=0;
    # 6222 "./neo-c.h"
    for(i=0    ;i<len;i++){
        # 6209 "./neo-c.h"
        c=str[i];
        # 6220 "./neo-c.h"
        if((c>=0&&c<32)||c==127) {
            # 6214 "./neo-c.h"
            result[n++]=94;
            # 6215 "./neo-c.h"
            result[n++]=c+65-1;
        }
        else {
            # 6218 "./neo-c.h"
            result[n++]=c;
        }
    }
    # 6224 "./neo-c.h"
    result[n]=0;
    # 6224 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c.h", 6224, 666);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6224, 667));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6224, 668));
    return __result_obj__0;
}

char*  chara_printable(char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_printable"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6229 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_printable(str))), "./neo-c.h", 6229, 669);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6229, 670));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6229, 671));
    return __result_obj__0;
}

char*  charp_sub_plain(char* self, char* str, char* replace)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_sub_plain"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    char* p;
    char* p2;
    # 6238 "./neo-c.h"
    if(self==((void*)0)||str==((void*)0)||replace==((void*)0)) {
        # 6235 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"./neo-c.h",6235))), "./neo-c.h", 6235, 672);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6235, 673));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6235, 674));
        return __result_obj__0;
    }
    # 6238 "./neo-c.h"
    __right_value0 = (void*)0;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 6238, 675, "struct buffer* "), "./neo-c.h", 6238, 676)), "./neo-c.h", 6238, 677);
    # 6240 "./neo-c.h"
    p=self;
    # 6260 "./neo-c.h"
    while((_Bool)1) {
        # 6243 "./neo-c.h"
        p2=strstr(p,str);
        # 6254 "./neo-c.h"
        if(p2==((void*)0)) {
            # 6246 "./neo-c.h"
            p2=p;
            # 6250 "./neo-c.h"
            while(*p2) {
                # 6248 "./neo-c.h"
                p2++;
            }
            # 6250 "./neo-c.h"
            buffer_append(result,p,p2-p);
            # 6251 "./neo-c.h"
            break;
        }
        # 6254 "./neo-c.h"
        buffer_append(result,p,p2-p);
        # 6255 "./neo-c.h"
        buffer_append_str(result,replace);
        # 6257 "./neo-c.h"
        p=p2+strlen(str);
    }
    # 6260 "./neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(result))), "./neo-c.h", 6260, 678);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 6260, 679);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6260, 680));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6260, 681));
    return __result_obj__0;
}

char*  xbasename(char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xbasename"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    # 6271 "./neo-c.h"
    if(path==((void*)0)) {
        # 6269 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6269))), "./neo-c.h", 6269, 682);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6269, 683));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6269, 684));
        return __result_obj__0;
    }
    # 6271 "./neo-c.h"
    p=path+strlen(path);
    # 6282 "./neo-c.h"
    while(p>=path) {
        # 6280 "./neo-c.h"
        if(*p==47) {
            # 6275 "./neo-c.h"
            break;
        }
        else {
            # 6278 "./neo-c.h"
            p--;
        }
    }
    # 6289 "./neo-c.h"
    if(p<path) {
        # 6283 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"./neo-c.h",6283))), "./neo-c.h", 6283, 685);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6283, 686));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6283, 687));
        return __result_obj__0;
    }
    else {
        # 6286 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"./neo-c.h",6286))), "./neo-c.h", 6286, 688);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6286, 689));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6286, 690));
        return __result_obj__0;
    }
    # 6289 "./neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6289))), "./neo-c.h", 6289, 691);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6289, 692));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6289, 693));
    return __result_obj__0;
}

char*  xnoextname(char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xnoextname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  path2  ;
    char* p;
    # 6297 "./neo-c.h"
    if(path==((void*)0)) {
        # 6295 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6295))), "./neo-c.h", 6295, 694);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6295, 695));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6295, 696));
        return __result_obj__0;
    }
    # 6297 "./neo-c.h"
    __right_value0 = (void*)0;
    path2=(char* )come_increment_ref_count(xbasename(path), "./neo-c.h", 6297, 697);
    # 6299 "./neo-c.h"
    p=path2+strlen(path2);
    # 6310 "./neo-c.h"
    while(p>=path2) {
        # 6308 "./neo-c.h"
        if(*p==46) {
            # 6303 "./neo-c.h"
            break;
        }
        else {
            # 6306 "./neo-c.h"
            p--;
        }
    }
    # 6317 "./neo-c.h"
    if(p<path2) {
        # 6311 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path2,"./neo-c.h",6311))), "./neo-c.h", 6311, 698);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 6311, 699));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6311, 700));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6311, 701));
        return __result_obj__0;
    }
    else {
        # 6314 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(path2,0,p-path2))), "./neo-c.h", 6314, 702);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 6314, 703));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6314, 704));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6314, 705));
        return __result_obj__0;
    }
    # 6317 "./neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6317))), "./neo-c.h", 6317, 706);
    (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 6317, 707));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6317, 708));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6317, 709));
    return __result_obj__0;
}

char*  xextname(char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xextname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    # 6325 "./neo-c.h"
    if(path==((void*)0)) {
        # 6323 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6323))), "./neo-c.h", 6323, 710);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6323, 711));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6323, 712));
        return __result_obj__0;
    }
    # 6325 "./neo-c.h"
    p=path+strlen(path);
    # 6336 "./neo-c.h"
    while(p>=path) {
        # 6334 "./neo-c.h"
        if(*p==46) {
            # 6329 "./neo-c.h"
            break;
        }
        else {
            # 6332 "./neo-c.h"
            p--;
        }
    }
    # 6343 "./neo-c.h"
    if(p<path) {
        # 6337 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"./neo-c.h",6337))), "./neo-c.h", 6337, 713);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6337, 714));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6337, 715));
        return __result_obj__0;
    }
    else {
        # 6340 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"./neo-c.h",6340))), "./neo-c.h", 6340, 716);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6340, 717));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6340, 718));
        return __result_obj__0;
    }
    # 6343 "./neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6343))), "./neo-c.h", 6343, 719);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6343, 720));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6343, 721));
    return __result_obj__0;
}

char*  _Bool_to_string(_Bool self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6367 "./neo-c.h"
    if(self) {
        # 6362 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("true","./neo-c.h",6362))), "./neo-c.h", 6362, 722);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6362, 723));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6362, 724));
        return __result_obj__0;
    }
    else {
        # 6365 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("false","./neo-c.h",6365))), "./neo-c.h", 6365, 725);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6365, 726));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6365, 727));
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

char*  char_to_string(char self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6371 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%c",self))), "./neo-c.h", 6371, 728);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6371, 729));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6371, 730));
    return __result_obj__0;
}

char*  short_to_string(short self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6376 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "./neo-c.h", 6376, 731);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6376, 732));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6376, 733));
    return __result_obj__0;
}

char*  int_to_string(int self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6381 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "./neo-c.h", 6381, 734);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6381, 735));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6381, 736));
    return __result_obj__0;
}

char*  long_to_string(long self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6386 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "./neo-c.h", 6386, 737);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6386, 738));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6386, 739));
    return __result_obj__0;
}

char*  size_t_to_string(unsigned long  int  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6391 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "./neo-c.h", 6391, 740);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6391, 741));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6391, 742));
    return __result_obj__0;
}

char*  float_to_string(float self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6396 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%f",self))), "./neo-c.h", 6396, 743);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6396, 744));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6396, 745));
    return __result_obj__0;
}

char*  double_to_string(double self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6401 "./neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%lf",self))), "./neo-c.h", 6401, 746);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6401, 747));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6401, 748));
    return __result_obj__0;
}

char*  string_to_string(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6409 "./neo-c.h"
    if(self==((void*)0)) {
        # 6407 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6407))), "./neo-c.h", 6407, 749);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6407, 750));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6407, 751));
        return __result_obj__0;
    }
    # 6409 "./neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"./neo-c.h",6409))), "./neo-c.h", 6409, 752);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6409, 753));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6409, 754));
    return __result_obj__0;
}

char*  charp_to_string(const char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6417 "./neo-c.h"
    if(self==((void*)0)) {
        # 6415 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6415))), "./neo-c.h", 6415, 755);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6415, 756));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6415, 757));
        return __result_obj__0;
    }
    # 6417 "./neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"./neo-c.h",6417))), "./neo-c.h", 6417, 758);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6417, 759));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6417, 760));
    return __result_obj__0;
}

int _Bool_compare(_Bool left, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_compare"; neo_current_frame = &fr;
    # 6456 "./neo-c.h"
    if(!left&&right) {
        # 6444 "./neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left&&right) {
        # 6447 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(!left&&!right) {
        # 6450 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else {
        # 6453 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 6456 "./neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int char_compare(char left, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_compare"; neo_current_frame = &fr;
    # 6471 "./neo-c.h"
    if(left<right) {
        # 6462 "./neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6465 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6468 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6471 "./neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int short_compare(short left, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_compare"; neo_current_frame = &fr;
    # 6486 "./neo-c.h"
    if(left<right) {
        # 6477 "./neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6480 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6483 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6486 "./neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int int_compare(int left, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_compare"; neo_current_frame = &fr;
    # 6501 "./neo-c.h"
    if(left<right) {
        # 6492 "./neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6495 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6498 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6501 "./neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int long_compare(long left, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_compare"; neo_current_frame = &fr;
    # 6516 "./neo-c.h"
    if(left<right) {
        # 6507 "./neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6510 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6513 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6516 "./neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int size_t_compare(unsigned long  int  left  , unsigned long  int  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_compare"; neo_current_frame = &fr;
    # 6531 "./neo-c.h"
    if(left<right) {
        # 6522 "./neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6525 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6528 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6531 "./neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int float_compare(float left, float right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_compare"; neo_current_frame = &fr;
    # 6546 "./neo-c.h"
    if(left<right) {
        # 6537 "./neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6540 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6543 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6546 "./neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int double_compare(double left, double right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_compare"; neo_current_frame = &fr;
    # 6561 "./neo-c.h"
    if(left<right) {
        # 6552 "./neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6555 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6558 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6561 "./neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int string_compare(char* left, char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_compare"; neo_current_frame = &fr;
    # 6576 "./neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 6567 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
        # 6570 "./neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
        # 6573 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 6576 "./neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

int charp_compare(char* left, char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_compare"; neo_current_frame = &fr;
    # 6591 "./neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 6582 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
        # 6585 "./neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
        # 6588 "./neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 6591 "./neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

char*  charp_puts(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_puts"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6602 "./neo-c.h"
    if(self==((void*)0)) {
        # 6600 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6600))), "./neo-c.h", 6600, 761);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6600, 762));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6600, 763));
        return __result_obj__0;
    }
    # 6602 "./neo-c.h"
    puts(self);
    # 6604 "./neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"./neo-c.h",6604))), "./neo-c.h", 6604, 764);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6604, 765));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6604, 766));
    return __result_obj__0;
}

char*  charp_print(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_print"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6612 "./neo-c.h"
    if(self==((void*)0)) {
        # 6610 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6610))), "./neo-c.h", 6610, 767);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6610, 768));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6610, 769));
        return __result_obj__0;
    }
    # 6612 "./neo-c.h"
    printf("%s",self);
    # 6614 "./neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"./neo-c.h",6614))), "./neo-c.h", 6614, 770);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6614, 771));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6614, 772));
    return __result_obj__0;
}

char*  charp_printf(char* self, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_printf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* msg2;
    __builtin_va_list  args  ;
    memset(&msg2, 0, sizeof(msg2));
    # 6644 "./neo-c.h"
    if(self==((void*)0)) {
        # 6642 "./neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c.h",6642))), "./neo-c.h", 6642, 773);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6642, 774));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6642, 775));
        return __result_obj__0;
    }
    # 6644 "./neo-c.h"
    # 6646 "./neo-c.h"
    # 6647 "./neo-c.h"
    __builtin_va_start(args,self);
    # 6648 "./neo-c.h"
    vasprintf(&msg2,self,args);
    # 6649 "./neo-c.h"
    __builtin_va_end(args);
    # 6651 "./neo-c.h"
    printf("%s",msg2);
    # 6653 "./neo-c.h"
    free(msg2);
    # 6655 "./neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"./neo-c.h",6655))), "./neo-c.h", 6655, 776);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c.h", 6655, 777));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c.h", 6655, 778));
    return __result_obj__0;
}

int int_printf(int self, char* msg)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_printf"; neo_current_frame = &fr;
    # 6664 "./neo-c.h"
    if(self==((void*)0)) {
        # 6662 "./neo-c.h"
                neo_current_frame = fr.prev;
        return self;
    }
    # 6664 "./neo-c.h"
    printf(msg,self);
    # 6666 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long long_printf(long self, char* msg)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_printf"; neo_current_frame = &fr;
    # 6674 "./neo-c.h"
    if(self==((void*)0)) {
        # 6672 "./neo-c.h"
                neo_current_frame = fr.prev;
        return self;
    }
    # 6674 "./neo-c.h"
    printf(msg,self);
    # 6676 "./neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

void int_times(int self, void* parent, void (*block)(void*,int))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_times"; neo_current_frame = &fr;
    int i;
    # 6684 "./neo-c.h"
    for(i=0    ;i<self;i++){
        # 6682 "./neo-c.h"
        block(parent,i);
    }
    neo_current_frame = fr.prev;
}

struct buffer*  FILE_read(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_read"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct buffer*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int size;
    # 6696 "./neo-c.h"
    if(f==((void*)0)) {
        # 6694 "./neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "./neo-c.h", 6694, 779, "buffer"), "./neo-c.h", 6694, 780), "", 0))), "./neo-c.h", 6694, 781);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6694, 782);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6694, 783);
        return __result_obj__0;
    }
    # 6696 "./neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 6696, 784, "struct buffer* "), "./neo-c.h", 6696, 785)), "./neo-c.h", 6696, 786);
    # 6710 "./neo-c.h"
    while(1) {
        # 6699 "./neo-c.h"
        char buf2[8192];
        memset(&buf2, 0, sizeof(buf2));
        # 6701 "./neo-c.h"
        size=fread(buf2,1,8192,f);
        # 6703 "./neo-c.h"
        buffer_append(buf,buf2,size);
        # 6708 "./neo-c.h"
        if(size<8192) {
            # 6706 "./neo-c.h"
            break;
        }
    }
    # 6710 "./neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(buf, "./neo-c.h", 6710, 787);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6710, 788);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6710, 789);
    return __result_obj__0;
}

int FILE_write(struct _IO_FILE*  f  , const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_write"; neo_current_frame = &fr;
    # 6719 "./neo-c.h"
    if(f==((void*)0)||str==((void*)0)) {
        # 6716 "./neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 6719 "./neo-c.h"
        neo_current_frame = fr.prev;
    return fwrite(str,strlen(str),1,f);
    neo_current_frame = fr.prev;
}

int FILE_fclose(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fclose"; neo_current_frame = &fr;
    int result;
    # 6728 "./neo-c.h"
    if(f==((void*)0)) {
        # 6725 "./neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 6728 "./neo-c.h"
    result=fclose(f);
    # 6734 "./neo-c.h"
    if(result<0) {
        # 6731 "./neo-c.h"
                neo_current_frame = fr.prev;
        return result;
    }
    # 6734 "./neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

struct _IO_FILE*  FILE_fprintf(struct _IO_FILE*  f  , const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fprintf"; neo_current_frame = &fr;
    struct _IO_FILE*  __result_obj__0  ;
    __builtin_va_list  args  ;
    int result;
    # 6742 "./neo-c.h"
    if(f==((void*)0)||msg==((void*)0)) {
        # 6740 "./neo-c.h"
                __result_obj__0 = f;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 6742 "./neo-c.h"
    char msg2[1024*2*2*2];
    memset(&msg2, 0, sizeof(msg2));
    # 6744 "./neo-c.h"
    # 6745 "./neo-c.h"
    __builtin_va_start(args,msg);
    # 6746 "./neo-c.h"
    vsnprintf(msg2,1024*2*2*2,msg,args);
    # 6747 "./neo-c.h"
    __builtin_va_end(args);
    # 6749 "./neo-c.h"
    result=fprintf(f,"%s",msg2);
    # 6755 "./neo-c.h"
    if(result<0) {
        # 6752 "./neo-c.h"
                __result_obj__0 = f;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 6755 "./neo-c.h"
        __result_obj__0 = f;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int charp_write(const char* self, const char* file_name, _Bool append)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_write"; neo_current_frame = &fr;
    struct _IO_FILE*  f  ;
    int result;
    int result2;
    memset(&f, 0, sizeof(f));
    # 6764 "./neo-c.h"
    if(self==((void*)0)||file_name==((void*)0)) {
        # 6761 "./neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 6764 "./neo-c.h"
    # 6772 "./neo-c.h"
    if(append) {
        # 6766 "./neo-c.h"
        f=fopen(file_name,"a");
    }
    else {
        # 6769 "./neo-c.h"
        f=fopen(file_name,"w");
    }
    # 6776 "./neo-c.h"
    if(f==((void*)0)) {
        # 6773 "./neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 6776 "./neo-c.h"
    result=fwrite(self,strlen(self),1,f);
    # 6782 "./neo-c.h"
    if(result!=1) {
        # 6779 "./neo-c.h"
                neo_current_frame = fr.prev;
        return result;
    }
    # 6784 "./neo-c.h"
    result2=fclose(f);
    # 6788 "./neo-c.h"
    if(result2<0) {
        # 6785 "./neo-c.h"
                neo_current_frame = fr.prev;
        return result2;
    }
    # 6788 "./neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

struct buffer*  charp_read(const char* file_name)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_read"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct buffer*  __result_obj__0  ;
    struct _IO_FILE*  f  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int size;
    int result2;
    # 6797 "./neo-c.h"
    if(file_name==((void*)0)) {
        # 6794 "./neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "./neo-c.h", 6794, 790, "buffer"), "./neo-c.h", 6794, 791), "", 0))), "./neo-c.h", 6794, 792);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6794, 793);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6794, 794);
        return __result_obj__0;
    }
    # 6797 "./neo-c.h"
    f=fopen(file_name,"r");
    # 6803 "./neo-c.h"
    if(f==((void*)0)) {
        # 6800 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "./neo-c.h", 6800, 795, "buffer"), "./neo-c.h", 6800, 796), "", 0))), "./neo-c.h", 6800, 797);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6800, 798);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6800, 799);
        return __result_obj__0;
    }
    # 6803 "./neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c.h", 6803, 800, "struct buffer* "), "./neo-c.h", 6803, 801)), "./neo-c.h", 6803, 802);
    # 6817 "./neo-c.h"
    while(1) {
        # 6806 "./neo-c.h"
        char buf2[8192];
        memset(&buf2, 0, sizeof(buf2));
        # 6808 "./neo-c.h"
        size=fread(buf2,1,8192,f);
        # 6810 "./neo-c.h"
        buffer_append(buf,buf2,size);
        # 6815 "./neo-c.h"
        if(size<8192) {
            # 6813 "./neo-c.h"
            break;
        }
    }
    # 6819 "./neo-c.h"
    result2=fclose(f);
    # 6823 "./neo-c.h"
    if(result2<0) {
        # 6820 "./neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "./neo-c.h", 6820, 803, "buffer"), "./neo-c.h", 6820, 804), "", 0))), "./neo-c.h", 6820, 805);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 6820, 806);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c.h}", 6820, 807);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6820, 808);
        return __result_obj__0;
    }
    # 6823 "./neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(buf, "./neo-c.h", 6823, 809);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6823, 810);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6823, 811);
    return __result_obj__0;
}

struct list$1char$ph* FILE_readlines(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_readlines"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct list$1char$ph* __result_obj__0;
    # 6828 "./neo-c.h"
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 6828, 812, "struct list$1char$ph*"), "./neo-c.h", 6828, 813)), "./neo-c.h", 6828, 814);
    # 6834 "./neo-c.h"
    if(f==((void*)0)) {
        # 6831 "./neo-c.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 6831, 815);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6831, 816);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6831, 817);
        return __result_obj__0;
    }
    # 6844 "./neo-c.h"
    while(1) {
        # 6835 "./neo-c.h"
        char buf[8192];
        memset(&buf, 0, sizeof(buf));
        # 6841 "./neo-c.h"
        if(fgets(buf,8192,f)==((void*)0)) {
            # 6838 "./neo-c.h"
            break;
        }
        # 6841 "./neo-c.h"
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(buf,"./neo-c.h",6841), "./neo-c.h", 6841, 818));
    }
    # 6844 "./neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 6844, 819);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6844, 820);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 6844, 821);
    return __result_obj__0;
}

_Bool xiswalpha(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalpha"; neo_current_frame = &fr;
    _Bool result;
    # 6849 "./neo-c.h"
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 6850 "./neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xiswblank(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswblank"; neo_current_frame = &fr;
    # 6855 "./neo-c.h"
        neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xiswdigit(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswdigit"; neo_current_frame = &fr;
    # 6860 "./neo-c.h"
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xiswalnum(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalnum"; neo_current_frame = &fr;
    # 6865 "./neo-c.h"
        neo_current_frame = fr.prev;
    return xiswalpha(c)||xiswdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xiswascii(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswascii"; neo_current_frame = &fr;
    _Bool result;
    # 6870 "./neo-c.h"
    result=(c>=32&&c<=126);
    # 6871 "./neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

int string_index(char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_index"; neo_current_frame = &fr;
    # 7208 "./neo-c.h"
        neo_current_frame = fr.prev;
    return charp_index(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int charp_index(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index"; neo_current_frame = &fr;
    char* head;
    # 7217 "./neo-c.h"
    if(str==((void*)0)||search_str==((void*)0)) {
        # 7214 "./neo-c.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 7217 "./neo-c.h"
    head=strstr(str,search_str);
    # 7223 "./neo-c.h"
    if(head==((void*)0)) {
        # 7220 "./neo-c.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 7223 "./neo-c.h"
        neo_current_frame = fr.prev;
    return head-str;
    neo_current_frame = fr.prev;
}

