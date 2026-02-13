/// c_include definition ///
/// typedef definition ///
typedef unsigned long size_t;

typedef unsigned long  long    ;

typedef __builtin_va_list __gnuc_va_list;

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

typedef long  int (*cookie_read_function_t)(void*,char*,unsigned long );

typedef long  int (*cookie_write_function_t)(void*,const char*,unsigned long );

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

typedef unsigned char  uint8_t  ;

typedef unsigned short int  uint16_t  ;

typedef unsigned int  uint32_t  ;

typedef unsigned long  int  uint64_t  ;

typedef char  int_least8_t  ;

typedef short int  int_least16_t  ;

typedef int  int_least32_t  ;

typedef long  int  int_least64_t  ;

typedef unsigned char  uint_least8_t  ;

typedef unsigned short int  uint_least16_t  ;

typedef unsigned int  uint_least32_t  ;

typedef unsigned long  int  uint_least64_t  ;

typedef char int_fast8_t;

typedef long  int int_fast16_t;

typedef long  int int_fast32_t;

typedef long  int int_fast64_t;

typedef unsigned char uint_fast8_t;

typedef unsigned long  int uint_fast16_t;

typedef unsigned long  int uint_fast32_t;

typedef unsigned long  int uint_fast64_t;

typedef long  int intptr_t;

typedef unsigned long  int uintptr_t;

typedef long  int  intmax_t  ;

typedef unsigned long  int  uintmax_t  ;

typedef long ptrdiff_t;

typedef struct anonymous_typeX20 max_align_t;

typedef enum memory_order memory_order;

typedef struct atomic_flag  atomic_flag  ;

typedef __builtin_va_list va_list;

typedef struct anonymous_typeX21 Point;

typedef enum anonymous_typeY21 Color;

typedef union anonymous_typeZ22 U32Bytes;

/// previous struct definition ///
struct _IO_FILE;

struct _IO_marker;

struct _IO_codecvt;

struct _IO_wide_data;

struct obstack;

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
    long  int (*(*read))(void*,char*,unsigned long )  ;
    long  int (*(*write))(void*,const char*,unsigned long )  ;
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

struct anonymous_typeX7
{
    unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
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

struct anonymous_typeX8
{
    long  int  fds_bits[1024/(8*(int)sizeof(long  int ))]  ;
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

struct anonymous_typeX20
{
    long long __attribute__((__aligned__(__alignof__(long long)))) __clang_max_align_nonce1 __attribute__((__aligned__(__alignof__(long long))));
    long  double __attribute__((__aligned__(__alignof__(long double)))) __clang_max_align_nonce2 __attribute__((__aligned__(__alignof__(long double))));
};

enum  memory_order { memory_order_relaxed=(0),
memory_order_consume=(1),
memory_order_acquire=(2),
memory_order_release=(3),
memory_order_acq_rel=(4),
memory_order_seq_cst=(5)
};

typedef _Atomic(_Bool) atomic_bool;

typedef _Atomic(char) atomic_char;

typedef _Atomic(char) atomic_schar;

typedef _Atomic(unsigned char) atomic_uchar;

typedef _Atomic(short) atomic_short;

typedef _Atomic(unsigned short int) atomic_ushort;

typedef _Atomic(int) atomic_int;

typedef _Atomic(unsigned int) atomic_uint;

typedef _Atomic(long) atomic_long;

typedef _Atomic(unsigned long  int) atomic_ulong;

typedef _Atomic(long  long) atomic_llong;

typedef _Atomic(unsigned long  long) atomic_ullong;

typedef _Atomic(unsigned short int ) atomic_char16_t  ;

typedef _Atomic(unsigned int ) atomic_char32_t  ;

typedef _Atomic(int ) atomic_wchar_t  ;

typedef _Atomic(char ) atomic_int_least8_t  ;

typedef _Atomic(unsigned char ) atomic_uint_least8_t  ;

typedef _Atomic(short int ) atomic_int_least16_t  ;

typedef _Atomic(unsigned short int ) atomic_uint_least16_t  ;

typedef _Atomic(int ) atomic_int_least32_t  ;

typedef _Atomic(unsigned int ) atomic_uint_least32_t  ;

typedef _Atomic(long  int ) atomic_int_least64_t  ;

typedef _Atomic(unsigned long  int ) atomic_uint_least64_t  ;

typedef _Atomic(char ) atomic_int_fast8_t  ;

typedef _Atomic(unsigned char ) atomic_uint_fast8_t  ;

typedef _Atomic(long  int ) atomic_int_fast16_t  ;

typedef _Atomic(unsigned long  int ) atomic_uint_fast16_t  ;

typedef _Atomic(long  int ) atomic_int_fast32_t  ;

typedef _Atomic(unsigned long  int ) atomic_uint_fast32_t  ;

typedef _Atomic(long  int ) atomic_int_fast64_t  ;

typedef _Atomic(unsigned long  int ) atomic_uint_fast64_t  ;

typedef _Atomic(long  int ) atomic_intptr_t  ;

typedef _Atomic(unsigned long  int ) atomic_uintptr_t  ;

typedef _Atomic(unsigned long ) atomic_size_t  ;

typedef _Atomic(long ) atomic_ptrdiff_t  ;

typedef _Atomic(long  int ) atomic_intmax_t  ;

typedef _Atomic(unsigned long  int ) atomic_uintmax_t  ;

struct atomic_flag
{
    _Atomic(_Bool ) _Value  ;
};

struct anonymous_typeX21
{
    int x;
    int y;
};

enum  anonymous_typeY21 { kRed=(1),
kGreen=(2),
kBlue=(4)
};

union anonymous_typeZ22
{
unsigned int  u32  ;
unsigned char b[4];
};

struct Al16
{
    _Alignas(16) char c;
};

struct V32
{
    _Alignas(32) double v[4];
};

struct V64
{
    _Alignas(64) double v[8];
};

/// variable definition ///
extern struct _IO_FILE*  stdin  ;
extern struct _IO_FILE*  stdout  ;
extern struct _IO_FILE*  stderr  ;
static int total_tests=0;
static int failed_tests=0;
static _Thread_local int g_tls_counter=0;
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
struct _IO_FILE*  fmemopen(void* __s, unsigned long  __len  , const char* __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  open_memstream(char** __bufloc, unsigned long*  __sizeloc  ) __attribute__ ((__malloc__))  ;
void setbuf(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf);
int setvbuf(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf, int __modes, unsigned long  __n  );
void setbuffer(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf, unsigned long  __size  );
void setlinebuf(struct _IO_FILE*  __stream  );
int fprintf(struct _IO_FILE* __restrict  __stream  , const char* __restrict __format, ...);
int printf(const char* __restrict __format, ...);
int sprintf(char* __restrict __s, const char* __restrict __format, ...);
int vfprintf(struct _IO_FILE* __restrict  __s  , const char* __restrict __format, __builtin_va_list  __arg  );
int vprintf(const char* __restrict __format, __builtin_va_list  __arg  );
int vsprintf(char* __restrict __s, const char* __restrict __format, __builtin_va_list  __arg  );
int snprintf(char* __restrict __s, unsigned long  __maxlen  , const char* __restrict __format, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
int vsnprintf(char* __restrict __s, unsigned long  __maxlen  , const char* __restrict __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__printf__, 3, 0)));
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
long  int  __getdelim(char** __restrict __lineptr, unsigned long* __restrict  __n  , int __delimiter, struct _IO_FILE* __restrict  __stream  );
long  int  getdelim(char** __restrict __lineptr, unsigned long* __restrict  __n  , int __delimiter, struct _IO_FILE* __restrict  __stream  );
long  int  getline(char** __restrict __lineptr, unsigned long* __restrict  __n  , struct _IO_FILE* __restrict  __stream  );
int fputs(const char* __restrict __s, struct _IO_FILE* __restrict  __stream  );
int puts(const char* __s);
int ungetc(int __c, struct _IO_FILE*  __stream  );
unsigned long  fread(void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __stream  );
unsigned long  fwrite(const void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __s  );
int fputs_unlocked(const char* __restrict __s, struct _IO_FILE* __restrict  __stream  );
unsigned long  fread_unlocked(void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __stream  );
unsigned long  fwrite_unlocked(const void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __stream  );
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
unsigned long  __ctype_get_mb_cur_max();
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
int strfromd(char* __dest, unsigned long  __size  , const char* __format, double __f);
int strfromf(char* __dest, unsigned long  __size  , const char* __format, float __f);
int strfroml(char* __dest, unsigned long  __size  , const char* __format, long  double __f);
int strfromf32(char* __dest, unsigned long  __size  , const char* __format, float  __f  );
int strfromf64(char* __dest, unsigned long  __size  , const char* __format, double  __f  );
int strfromf32x(char* __dest, unsigned long  __size  , const char* __format, double  __f  );
int strfromf64x(char* __dest, unsigned long  __size  , const char* __format, long  double  __f  );
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
char* initstate(unsigned int __seed, char* __statebuf, unsigned long  __statelen  );
char* setstate(char* __statebuf);
int random_r(struct random_data* __restrict  __buf  , int* __restrict  __result  );
int srandom_r(unsigned int __seed, struct random_data*  __buf  );
int initstate_r(unsigned int __seed, char* __restrict __statebuf, unsigned long  __statelen  , struct random_data* __restrict  __buf  );
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
void arc4random_buf(void* __buf, unsigned long  __size  );
unsigned int  arc4random_uniform(unsigned int  __upper_bound  );
void* malloc(unsigned long  __size  ) __attribute__ ((__malloc__))
      ;
void* calloc(unsigned long  __nmemb  , unsigned long  __size  ) __attribute__ ((__malloc__))  ;
void* realloc(void* __ptr, unsigned long  __size  );
void free(void* __ptr);
void* reallocarray(void* __ptr, unsigned long  __nmemb  , unsigned long  __size  );
void* alloca(unsigned long  __size  );
void* valloc(unsigned long  __size  ) __attribute__ ((__malloc__))
      ;
int posix_memalign(void** __memptr, unsigned long  __alignment  , unsigned long  __size  );
void* aligned_alloc(unsigned long  __alignment  , unsigned long  __size  ) __attribute__ ((__malloc__)) 
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
void* bsearch(const void* __key, const void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*)  );
void qsort(void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*)  );
void qsort_r(void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*,void*)  , void* __arg);
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
int ecvt_r(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int fcvt_r(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int qecvt_r(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int qfcvt_r(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int mblen(const char* __s, unsigned long  __n  );
int mbtowc(int* __restrict  __pwc  , const char* __restrict __s, unsigned long  __n  );
int wctomb(char* __s, int  __wchar  );
unsigned long  mbstowcs(int* __restrict  __pwcs  , const char* __restrict __s, unsigned long  __n  );
unsigned long  wcstombs(char* __restrict __s, const int* __restrict  __pwcs  , unsigned long  __n  );
int rpmatch(const char* __response);
int getsubopt(char** __restrict __optionp, char** const __restrict __tokens, char** __restrict __valuep);
int posix_openpt(int __oflag);
int grantpt(int __fd);
int unlockpt(int __fd);
char* ptsname(int __fd);
int ptsname_r(int __fd, char* __buf, unsigned long  __buflen  );
int getpt();
int getloadavg(double __loadavg[], int __nelem);
void* memcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
void* memmove(void* __dest, const void* __src, unsigned long  __n  );
void* memccpy(void* __restrict __dest, const void* __restrict __src, int __c, unsigned long  __n  );
void* memset(void* __s, int __c, unsigned long  __n  );
int memcmp(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int __memcmpeq(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void* memchr(const void* __s, int __c, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void* rawmemchr(const void* __s, int __c) __attribute__ ((__pure__)) ;
void* memrchr(const void* __s, int __c, unsigned long  __n  ) __attribute__ ((__pure__)) 
      ;
char* strcpy(char* __restrict __dest, const char* __restrict __src);
char* strncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
char* strcat(char* __restrict __dest, const char* __restrict __src);
char* strncat(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
int strcmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
int strncmp(const char* __s1, const char* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int strcoll(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
unsigned long  strxfrm(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
int strcoll_l(const char* __s1, const char* __s2, struct __locale_struct*  __l  ) __attribute__ ((__pure__)) ;
unsigned long  strxfrm_l(char* __dest, const char* __src, unsigned long  __n  , struct __locale_struct*  __l  );
char* strdup(const char* __s) __attribute__ ((__malloc__)) ;
char* strndup(const char* __string, unsigned long  __n  ) __attribute__ ((__malloc__)) ;
char* strchr(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* strrchr(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* strchrnul(const char* __s, int __c) __attribute__ ((__pure__)) ;
unsigned long  strcspn(const char* __s, const char* __reject) __attribute__ ((__pure__)) ;
unsigned long  strspn(const char* __s, const char* __accept) __attribute__ ((__pure__)) ;
char* strpbrk(const char* __s, const char* __accept) __attribute__ ((__pure__)) ;
char* strstr(const char* __haystack, const char* __needle) __attribute__ ((__pure__)) ;
char* strtok(char* __restrict __s, const char* __restrict __delim);
char* __strtok_r(char* __restrict __s, const char* __restrict __delim, char** __restrict __save_ptr);
char* strtok_r(char* __restrict __s, const char* __restrict __delim, char** __restrict __save_ptr);
char* strcasestr(const char* __haystack, const char* __needle) __attribute__ ((__pure__)) ;
void* memmem(const void* __haystack, unsigned long  __haystacklen  , const void* __needle, unsigned long  __needlelen  ) __attribute__ ((__pure__)) 
    
    ;
void* __mempcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
void* mempcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
unsigned long  strlen(const char* __s) __attribute__ ((__pure__)) ;
unsigned long  strnlen(const char* __string, unsigned long  __maxlen  ) __attribute__ ((__pure__)) ;
char* strerror(int __errnum);
char* strerror_r(int __errnum, char* __buf, unsigned long  __buflen  );
const char* strerrordesc_np(int __err);
const char* strerrorname_np(int __err);
char* strerror_l(int __errnum, struct __locale_struct*  __l  );
int bcmp(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void bcopy(const void* __src, void* __dest, unsigned long  __n  );
void bzero(void* __s, unsigned long  __n  );
char* index(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* rindex(const char* __s, int __c) __attribute__ ((__pure__)) ;
int ffs(int __i) __attribute__ ((__const__));
int ffsl(long  int __l) __attribute__ ((__const__));
int ffsll(long long int __ll) __attribute__ ((__const__));
int strcasecmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
int strncasecmp(const char* __s1, const char* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_struct*  __loc  ) __attribute__ ((__pure__)) ;
int strncasecmp_l(const char* __s1, const char* __s2, unsigned long  __n  , struct __locale_struct*  __loc  ) __attribute__ ((__pure__)) ;
void explicit_bzero(void* __s, unsigned long  __n  );
char* strsep(char** __restrict __stringp, const char* __restrict __delim);
char* strsignal(int __sig);
const char* sigabbrev_np(int __sig);
const char* sigdescr_np(int __sig);
char* __stpcpy(char* __restrict __dest, const char* __restrict __src);
char* stpcpy(char* __restrict __dest, const char* __restrict __src);
char* __stpncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
char* stpncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
unsigned long  strlcpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
unsigned long  strlcat(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
int strverscmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
char* strfry(char* __string);
void* memfrob(void* __s, unsigned long  __n  );
char* basename(const char* __filename);
void atomic_thread_fence(enum memory_order    );
void atomic_signal_fence(enum memory_order    );
_Bool atomic_flag_test_and_set(volatile struct atomic_flag*    );
_Bool atomic_flag_test_and_set_explicit(volatile struct atomic_flag*    , enum memory_order    );
void atomic_flag_clear(volatile struct atomic_flag*    );
void atomic_flag_clear_explicit(volatile struct atomic_flag*    , enum memory_order    );
static int add(int a, int b);
static int mul(int a, int b);
static int sub(int a, int b);
static int bump_static_counter();
static int factorial(int n);
static int sum_for_loop(int n);
static int sum_while_loop(int n);
static int sum_do_while_loop(int n);
static void test_arithmetic();
static void test_bit_ops();
static void test_logic_ternary();
static void test_loops();
static void test_arrays_pointers();
static void test_func_pointer_array();
static void test_array_initializers();
static void test_casts();
static void test_atomics();
static void test_atomics_orders_types();
static void test_alignas_alignof();
static void test_simd_alignas();
static void test_noreturn_decl();
static _Noreturn void must_exit(int code);
static void test_generic();
static int max_int(int a, int b);
static long max_long(long a, long b);
static double max_double(double a, double b);
static void test_generic_dispatch();
static void test_vla();
static int sum_vla_param(int len, int arr[len]);
static void test_vla_more();
static int sum_variadic(int count, ...);
static void test_variadic();
static int tls_get();
static void tls_inc();
static int* tls_addr();
static void test_thread_local();
static void test_strings();
static void test_structs_enums_unions();
static void test_macros_static();
static void test_recursion();
static void test_floating_point();
int main();
// uniq global variable
// inline function
static inline unsigned short int  __bswap_16(unsigned short int  __bsx  )
{
    return ((unsigned short int )((((__bsx)>>8)&0xff)|(((__bsx)&0xff)<<8)));
}
static inline unsigned int  __bswap_32(unsigned int  __bsx  )
{
    return ((((__bsx)&0xff000000u)>>24)|(((__bsx)&0x00ff0000u)>>8)|(((__bsx)&0x0000ff00u)<<8)|(((__bsx)&0x000000ffu)<<24));
}
static inline unsigned long  int  __bswap_64(unsigned long  int  __bsx  )
{
    return ((((__bsx)&0xff00000000000000ull)>>56)|(((__bsx)&0x00ff000000000000ull)>>40)|(((__bsx)&0x0000ff0000000000ull)>>24)|(((__bsx)&0x000000ff00000000ull)>>8)|(((__bsx)&0x00000000ff000000ull)<<8)|(((__bsx)&0x0000000000ff0000ull)<<24)|(((__bsx)&0x000000000000ff00ull)<<40)|(((__bsx)&0x00000000000000ffull)<<56));
}
static inline unsigned short int  __uint16_identity(unsigned short int  __x  )
{
    return __x;
}
static inline unsigned int  __uint32_identity(unsigned int  __x  )
{
    return __x;
}
static inline unsigned long  int  __uint64_identity(unsigned long  int  __x  )
{
    return __x;
}

// body function
static int add(int a, int b)
{
    return a+b;
}

static int mul(int a, int b)
{
    return a*b;
}

static int sub(int a, int b)
{
    return a-b;
}

static int bump_static_counter()
{
    static int counter=0;
    counter+=3;
    return counter;
}

static int factorial(int n)
{
    return (((n<=1))?(1):(n*factorial(n-1)));
}

static int sum_for_loop(int n)
{
    int s;
    int i;
    s=0;
    for(i=1;i<=n;i++){
        s+=i;
    }
    return s;
}

static int sum_while_loop(int n)
{
    int  s=0,  i=1;
    while(i<=n) {
        s+=i;
        i++;
    }
    return s;
}

static int sum_do_while_loop(int n)
{
    if(n<=0) {
        return 0;
    }
    int  s=0,  i=1;
    do {
        s+=i;
        i++;
    } while(i<=n);
    return s;
}

static void test_arithmetic()
{
    long long _e;
    long long _g;
    long long _e_0;
    long long _g_1;
    long long _e_2;
    long long _g_3;
    long long _e_4;
    long long _g_5;
    long long _e_6;
    long long _g_7;
    long long _e_8;
    long long _g_9;
    long long _e_10;
    long long _g_11;
    int a;
    long long _e_12;
    long long _g_13;
    long long _e_14;
    long long _g_15;
    long long _e_16;
    long long _g_17;
    long long _e_18;
    long long _g_19;
    unsigned int u;
    do {
        do {
            total_tests++;
        } while(0);
        _e=(long  long)(7);
        _g=(long  long)(3+4);
        if(_e!=_g) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",109,"test_arithmetic",_e,_g);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_0=(long  long)(12);
        _g_1=(long  long)(3*4);
        if(_e_0!=_g_1) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",110,"test_arithmetic",_e_0,_g_1);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_2=(long  long)(2);
        _g_3=(long  long)(7/3);
        if(_e_2!=_g_3) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",111,"test_arithmetic",_e_2,_g_3);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_4=(long  long)(1);
        _g_5=(long  long)(7%3);
        if(_e_4!=_g_5) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",112,"test_arithmetic",_e_4,_g_5);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_6=(long  long)(11);
        _g_7=(long  long)(3+4*2);
        if(_e_6!=_g_7) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",113,"test_arithmetic",_e_6,_g_7);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_8=(long  long)(14);
        _g_9=(long  long)((3+4)*2);
        if(_e_8!=_g_9) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",114,"test_arithmetic",_e_8,_g_9);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_10=(long  long)(-10);
        _g_11=(long  long)(-(3+7));
        if(_e_10!=_g_11) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",115,"test_arithmetic",_e_10,_g_11);
            } while(0);
        }
    } while(0);
    a=5;
    a+=2;
    do {
        do {
            total_tests++;
        } while(0);
        _e_12=(long  long)(7);
        _g_13=(long  long)(a);
        if(_e_12!=_g_13) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",117,"test_arithmetic",_e_12,_g_13);
            } while(0);
        }
    } while(0);
    a|=8;
    do {
        do {
            total_tests++;
        } while(0);
        _e_14=(long  long)(15);
        _g_15=(long  long)(a);
        if(_e_14!=_g_15) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",118,"test_arithmetic",_e_14,_g_15);
            } while(0);
        }
    } while(0);
    a&=~1;
    do {
        do {
            total_tests++;
        } while(0);
        _e_16=(long  long)(14);
        _g_17=(long  long)(a);
        if(_e_16!=_g_17) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",119,"test_arithmetic",_e_16,_g_17);
            } while(0);
        }
    } while(0);
    a^=6;
    do {
        do {
            total_tests++;
        } while(0);
        _e_18=(long  long)(8);
        _g_19=(long  long)(a);
        if(_e_18!=_g_19) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",120,"test_arithmetic",_e_18,_g_19);
            } while(0);
        }
    } while(0);
    u=1u<<31;
    do {
        do {
            total_tests++;
        } while(0);
        if(!(u>0)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> ASSERT_TRUE(%s) failed\n","code/codex.nc",122,"test_arithmetic","u > 0");
            } while(0);
        }
    } while(0);
}

static void test_bit_ops()
{
    unsigned int x;
    unsigned int y;
    unsigned long  long _e;
    unsigned long  long _g;
    unsigned long  long _e_20;
    unsigned long  long _g_21;
    unsigned long  long _e_22;
    unsigned long  long _g_23;
    unsigned long  long _e_24;
    unsigned long  long _g_25;
    unsigned long  long _e_26;
    unsigned long  long _g_27;
    unsigned long  long _e_28;
    unsigned long  long _g_29;
    x=0b10101010u;
    y=0b11001100u;
    do {
        do {
            total_tests++;
        } while(0);
        _e=(unsigned long  long)(0b10001000u);
        _g=(unsigned long  long)(x&y);
        if(_e!=_g) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",128,"test_bit_ops",_e,_g);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_20=(unsigned long  long)(0b11101110u);
        _g_21=(unsigned long  long)(x|y);
        if(_e_20!=_g_21) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",129,"test_bit_ops",_e_20,_g_21);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_22=(unsigned long  long)(0b01100110u);
        _g_23=(unsigned long  long)(x^y);
        if(_e_22!=_g_23) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",130,"test_bit_ops",_e_22,_g_23);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_24=(unsigned long  long)(0b01010101u);
        _g_25=(unsigned long  long)((unsigned int)(~x&0xFF));
        if(_e_24!=_g_25) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",131,"test_bit_ops",_e_24,_g_25);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_26=(unsigned long  long)(0b01010100u);
        _g_27=(unsigned long  long)((x<<1)&0xFFu);
        if(_e_26!=_g_27) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",132,"test_bit_ops",_e_26,_g_27);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_28=(unsigned long  long)(0b01010101u);
        _g_29=(unsigned long  long)(x>>1);
        if(_e_28!=_g_29) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",133,"test_bit_ops",_e_28,_g_29);
            } while(0);
        }
    } while(0);
}

static void test_logic_ternary()
{
    int m;
    long long _e;
    long long _g;
    int  a=3,  b=4;
    do {
        do {
            total_tests++;
        } while(0);
        if(!(a<b&&b>0)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> ASSERT_TRUE(%s) failed\n","code/codex.nc",138,"test_logic_ternary","a < b && b > 0");
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        if(!(!(a==b))) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> ASSERT_TRUE(%s) failed\n","code/codex.nc",139,"test_logic_ternary","!(a == b)");
            } while(0);
        }
    } while(0);
    m=((a>b)?(a):(b));
    do {
        do {
            total_tests++;
        } while(0);
        _e=(long  long)(4);
        _g=(long  long)(m);
        if(_e!=_g) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",141,"test_logic_ternary",_e,_g);
            } while(0);
        }
    } while(0);
}

static void test_loops()
{
    long long _e;
    long long _g;
    long long _e_30;
    long long _g_31;
    long long _e_32;
    long long _g_33;
    long long _e_34;
    long long _g_35;
    do {
        do {
            total_tests++;
        } while(0);
        _e=(long  long)(55);
        _g=(long  long)(sum_for_loop(10));
        if(_e!=_g) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",145,"test_loops",_e,_g);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_30=(long  long)(55);
        _g_31=(long  long)(sum_while_loop(10));
        if(_e_30!=_g_31) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",146,"test_loops",_e_30,_g_31);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_32=(long  long)(55);
        _g_33=(long  long)(sum_do_while_loop(10));
        if(_e_32!=_g_33) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",147,"test_loops",_e_32,_g_33);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_34=(long  long)(0);
        _g_35=(long  long)(sum_do_while_loop(0));
        if(_e_34!=_g_35) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",148,"test_loops",_e_34,_g_35);
            } while(0);
        }
    } while(0);
}

static void test_arrays_pointers()
{
    long long _e;
    long long _g;
    long long _e_36;
    long long _g_37;
    int* p;
    long long _e_38;
    long long _g_39;
    long long _e_40;
    long long _g_41;
    long long _e_42;
    long long _g_43;
    int (*op)(int,int);
    long long _e_44;
    long long _g_45;
    long long _e_46;
    long long _g_47;
    int arr[5]={1,2,3,4,5};
    do {
        do {
            total_tests++;
        } while(0);
        _e=(long  long)(1);
        _g=(long  long)(arr[0]);
        if(_e!=_g) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",153,"test_arrays_pointers",_e,_g);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_36=(long  long)(5);
        _g_37=(long  long)(arr[4]);
        if(_e_36!=_g_37) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",154,"test_arrays_pointers",_e_36,_g_37);
            } while(0);
        }
    } while(0);
    p=arr;
    do {
        do {
            total_tests++;
        } while(0);
        _e_38=(long  long)(3);
        _g_39=(long  long)(*(p+2));
        if(_e_38!=_g_39) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",156,"test_arrays_pointers",_e_38,_g_39);
            } while(0);
        }
    } while(0);
    *(p+1)=20;
    do {
        do {
            total_tests++;
        } while(0);
        _e_40=(long  long)(20);
        _g_41=(long  long)(arr[1]);
        if(_e_40!=_g_41) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",157,"test_arrays_pointers",_e_40,_g_41);
            } while(0);
        }
    } while(0);
    int mat[2][3]={{1,2,3},{4,5,6}};
    do {
        do {
            total_tests++;
        } while(0);
        _e_42=(long  long)(5);
        _g_43=(long  long)(mat[1][1]);
        if(_e_42!=_g_43) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",160,"test_arrays_pointers",_e_42,_g_43);
            } while(0);
        }
    } while(0);
    op=add;
    do {
        do {
            total_tests++;
        } while(0);
        _e_44=(long  long)(9);
        _g_45=(long  long)(op(4,5));
        if(_e_44!=_g_45) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",164,"test_arrays_pointers",_e_44,_g_45);
            } while(0);
        }
    } while(0);
    op=mul;
    do {
        do {
            total_tests++;
        } while(0);
        _e_46=(long  long)(20);
        _g_47=(long  long)(op(4,5));
        if(_e_46!=_g_47) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",166,"test_arrays_pointers",_e_46,_g_47);
            } while(0);
        }
    } while(0);
}

static void test_func_pointer_array()
{
    long long _e;
    long long _g;
    long long _e_48;
    long long _g_49;
    long long _e_50;
    long long _g_51;
    int i;
    long long _e_52;
    long long _g_53;
    int (*ops[3])(int,int)={ add, mul, sub };
    int  a=4,  b=2;
    do {
        do {
            total_tests++;
        } while(0);
        _e=(long  long)(6);
        _g=(long  long)((ops[0])(a,b));
        if(_e!=_g) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",173,"test_func_pointer_array",_e,_g);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_48=(long  long)(8);
        _g_49=(long  long)((ops[1])(a,b));
        if(_e_48!=_g_49) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",174,"test_func_pointer_array",_e_48,_g_49);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_50=(long  long)(2);
        _g_51=(long  long)((ops[2])(a,b));
        if(_e_50!=_g_51) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",175,"test_func_pointer_array",_e_50,_g_51);
            } while(0);
        }
    } while(0);
    int expected[3]={6, 8, 2};
    for(i=0;i<3;++i){
        do {
            do {
                total_tests++;
            } while(0);
            _e_52=(long  long)(expected[i]);
            _g_53=(long  long)((ops[i])(a,b));
            if(_e_52!=_g_53) {
                do {
                    failed_tests++;
                    printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",180,"test_func_pointer_array",_e_52,_g_53);
                } while(0);
            }
        } while(0);
    }
}

static void test_array_initializers()
{
    long long _e;
    long long _g;
    long long _e_54;
    long long _g_55;
    long long _e_56;
    long long _g_57;
    long long _e_58;
    long long _g_59;
    long long _e_60;
    long long _g_61;
    long long _e_62;
    long long _g_63;
    long long _e_64;
    long long _g_65;
    long long _e_66;
    long long _g_67;
    long long _e_68;
    long long _g_69;
    long long _e_70;
    long long _g_71;
    long long _e_72;
    long long _g_73;
    long long _e_74;
    long long _g_75;
    long long _e_76;
    long long _g_77;
    long long _e_78;
    long long _g_79;
    long long _e_80;
    long long _g_81;
    long long _e_82;
    long long _g_83;
    long long _e_84;
    long long _g_85;
    long long _e_86;
    long long _g_87;
    long long _e_88;
    long long _g_89;
    long long _e_90;
    long long _g_91;
    long long _e_92;
    long long _g_93;
    long long _e_94;
    long long _g_95;
    long long _e_96;
    long long _g_97;
    long long _e_98;
    long long _g_99;
    long long _e_100;
    long long _g_101;
    long long _e_102;
    long long _g_103;
    long long _e_104;
    long long _g_105;
    long long _e_106;
    long long _g_107;
    long long _e_108;
    long long _g_109;
    long long _e_110;
    long long _g_111;
    struct anonymous_typeX21*  qp  ;
    long long _e_112;
    long long _g_113;
    long long _e_114;
    long long _g_115;
    int a1[5]={1, 2, 3};
    do {
        do {
            total_tests++;
        } while(0);
        _e=(long  long)(1);
        _g=(long  long)(a1[0]);
        if(_e!=_g) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",187,"test_array_initializers",_e,_g);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_54=(long  long)(2);
        _g_55=(long  long)(a1[1]);
        if(_e_54!=_g_55) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",188,"test_array_initializers",_e_54,_g_55);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_56=(long  long)(3);
        _g_57=(long  long)(a1[2]);
        if(_e_56!=_g_57) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",189,"test_array_initializers",_e_56,_g_57);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_58=(long  long)(0);
        _g_59=(long  long)(a1[3]);
        if(_e_58!=_g_59) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",190,"test_array_initializers",_e_58,_g_59);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_60=(long  long)(0);
        _g_61=(long  long)(a1[4]);
        if(_e_60!=_g_61) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",191,"test_array_initializers",_e_60,_g_61);
            } while(0);
        }
    } while(0);
    int a2[6]={ [4] = 40, [2] = 20, [0] = 10 };
    do {
        do {
            total_tests++;
        } while(0);
        _e_62=(long  long)(10);
        _g_63=(long  long)(a2[0]);
        if(_e_62!=_g_63) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",194,"test_array_initializers",_e_62,_g_63);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_64=(long  long)(0);
        _g_65=(long  long)(a2[1]);
        if(_e_64!=_g_65) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",195,"test_array_initializers",_e_64,_g_65);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_66=(long  long)(20);
        _g_67=(long  long)(a2[2]);
        if(_e_66!=_g_67) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",196,"test_array_initializers",_e_66,_g_67);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_68=(long  long)(0);
        _g_69=(long  long)(a2[3]);
        if(_e_68!=_g_69) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",197,"test_array_initializers",_e_68,_g_69);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_70=(long  long)(40);
        _g_71=(long  long)(a2[4]);
        if(_e_70!=_g_71) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",198,"test_array_initializers",_e_70,_g_71);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_72=(long  long)(0);
        _g_73=(long  long)(a2[5]);
        if(_e_72!=_g_73) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",199,"test_array_initializers",_e_72,_g_73);
            } while(0);
        }
    } while(0);
    int m[2][3]={ [1] = { [2] = 9 } };
    do {
        do {
            total_tests++;
        } while(0);
        _e_74=(long  long)(0);
        _g_75=(long  long)(m[0][0]);
        if(_e_74!=_g_75) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",202,"test_array_initializers",_e_74,_g_75);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_76=(long  long)(0);
        _g_77=(long  long)(m[0][1]);
        if(_e_76!=_g_77) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",203,"test_array_initializers",_e_76,_g_77);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_78=(long  long)(0);
        _g_79=(long  long)(m[0][2]);
        if(_e_78!=_g_79) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",204,"test_array_initializers",_e_78,_g_79);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_80=(long  long)(0);
        _g_81=(long  long)(m[1][0]);
        if(_e_80!=_g_81) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",205,"test_array_initializers",_e_80,_g_81);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_82=(long  long)(0);
        _g_83=(long  long)(m[1][1]);
        if(_e_82!=_g_83) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",206,"test_array_initializers",_e_82,_g_83);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_84=(long  long)(9);
        _g_85=(long  long)(m[1][2]);
        if(_e_84!=_g_85) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",207,"test_array_initializers",_e_84,_g_85);
            } while(0);
        }
    } while(0);
    char s[]="ABC";
    do {
        do {
            total_tests++;
        } while(0);
        _e_86=(long  long)(4);
        _g_87=(long  long)((int)sizeof(s));
        if(_e_86!=_g_87) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",211,"test_array_initializers",_e_86,_g_87);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_88=(long  long)(65);
        _g_89=(long  long)(s[0]);
        if(_e_88!=_g_89) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",212,"test_array_initializers",_e_88,_g_89);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_90=(long  long)(66);
        _g_91=(long  long)(s[1]);
        if(_e_90!=_g_91) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",213,"test_array_initializers",_e_90,_g_91);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_92=(long  long)(67);
        _g_93=(long  long)(s[2]);
        if(_e_92!=_g_93) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",214,"test_array_initializers",_e_92,_g_93);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_94=(long  long)(0);
        _g_95=(long  long)(s[3]);
        if(_e_94!=_g_95) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",215,"test_array_initializers",_e_94,_g_95);
            } while(0);
        }
    } while(0);
    struct anonymous_typeX21  pts[3]  ={ [1] = {.x = 2, .y = 3}, [0] = {.y = 1} };
    do {
        do {
            total_tests++;
        } while(0);
        _e_96=(long  long)(0);
        _g_97=(long  long)(pts[0].x);
        if(_e_96!=_g_97) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",219,"test_array_initializers",_e_96,_g_97);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_98=(long  long)(1);
        _g_99=(long  long)(pts[0].y);
        if(_e_98!=_g_99) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",220,"test_array_initializers",_e_98,_g_99);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_100=(long  long)(2);
        _g_101=(long  long)(pts[1].x);
        if(_e_100!=_g_101) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",221,"test_array_initializers",_e_100,_g_101);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_102=(long  long)(3);
        _g_103=(long  long)(pts[1].y);
        if(_e_102!=_g_103) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",222,"test_array_initializers",_e_102,_g_103);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_104=(long  long)(0);
        _g_105=(long  long)(pts[2].x);
        if(_e_104!=_g_105) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",223,"test_array_initializers",_e_104,_g_105);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_106=(long  long)(0);
        _g_107=(long  long)(pts[2].y);
        if(_e_106!=_g_107) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",224,"test_array_initializers",_e_106,_g_107);
            } while(0);
        }
    } while(0);
    struct anonymous_typeX21  q  =(struct anonymous_typeX21 ){ .x = 7, .y = 8 };
    do {
        do {
            total_tests++;
        } while(0);
        _e_108=(long  long)(7);
        _g_109=(long  long)(q.x);
        if(_e_108!=_g_109) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",228,"test_array_initializers",_e_108,_g_109);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_110=(long  long)(8);
        _g_111=(long  long)(q.y);
        if(_e_110!=_g_111) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",229,"test_array_initializers",_e_110,_g_111);
            } while(0);
        }
    } while(0);
    qp=&(struct anonymous_typeX21 ){ .x = 1, .y = 2 };
    do {
        do {
            total_tests++;
        } while(0);
        _e_112=(long  long)(1);
        _g_113=(long  long)(qp->x);
        if(_e_112!=_g_113) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",231,"test_array_initializers",_e_112,_g_113);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_114=(long  long)(2);
        _g_115=(long  long)(qp->y);
        if(_e_114!=_g_115) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",232,"test_array_initializers",_e_114,_g_115);
            } while(0);
        }
    } while(0);
}

static void test_casts()
{
    double d;
    int i;
    long long _e;
    long long _g;
    unsigned char  small  ;
    unsigned long  long _e_116;
    unsigned long  long _g_117;
    unsigned int all1;
    unsigned long  long _e_118;
    unsigned long  long _g_119;
    int neg;
    unsigned int u;
    int v;
    int* pi;
    void* pv;
    int* pi2;
    unsigned long  int  addr  ;
    int* pi3;
    int* pncx;
    d=3.9;
    i=(int)d;
    do {
        do {
            total_tests++;
        } while(0);
        _e=(long  long)(3);
        _g=(long  long)(i);
        if(_e!=_g) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",240,"test_casts",_e,_g);
            } while(0);
        }
    } while(0);
    small=(unsigned char )260;
    do {
        do {
            total_tests++;
        } while(0);
        _e_116=(unsigned long  long)(4u);
        _g_117=(unsigned long  long)((unsigned int)small);
        if(_e_116!=_g_117) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",243,"test_casts",_e_116,_g_117);
            } while(0);
        }
    } while(0);
    all1=(unsigned int)-1;
    do {
        do {
            total_tests++;
        } while(0);
        _e_118=(unsigned long  long)(~0u);
        _g_119=(unsigned long  long)(all1);
        if(_e_118!=_g_119) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",246,"test_casts",_e_118,_g_119);
            } while(0);
        }
    } while(0);
    neg=-5;
    u=(unsigned int)neg;
    do {
        do {
            total_tests++;
        } while(0);
        if(!(u>1000000u||sizeof(unsigned int)==2)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> ASSERT_TRUE(%s) failed\n","code/codex.nc",251,"test_casts","u > 1000000u || sizeof(unsigned) == 2");
            } while(0);
        }
    } while(0);
    v=42;
    pi=&v;
    pv=(void*)pi;
    pi2=(int*)pv;
    do {
        do {
            total_tests++;
        } while(0);
        if(!(pi==pi2)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> ASSERT_TRUE(%s) failed\n","code/codex.nc",258,"test_casts","pi == pi2");
            } while(0);
        }
    } while(0);
    addr=(unsigned long  int )pi;
    pi3=(int*)addr;
    do {
        do {
            total_tests++;
        } while(0);
        if(!(pi3==pi)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> ASSERT_TRUE(%s) failed\n","code/codex.nc",263,"test_casts","pi3 == pi");
            } while(0);
        }
    } while(0);
    const int cx=7;
    const int* pcx=&cx;
    pncx=(int*)(unsigned long  int )pcx;
    do {
        do {
            total_tests++;
        } while(0);
        if(!((void*)pncx==(void*)pcx)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> ASSERT_TRUE(%s) failed\n","code/codex.nc",269,"test_casts","(void*)pncx == (void*)pcx");
            } while(0);
        }
    } while(0);
}

static void test_atomics()
{
    _Atomic(int) ai;
    long long _e;
    long long _g;
    int old;
    long long _e_120;
    long long _g_121;
    long long _e_122;
    long long _g_123;
    int expected;
    _Bool exchanged;
    long long _e_124;
    long long _g_125;
    _Atomic(unsigned long  int) au;
    unsigned long  int prev;
    unsigned long  long _e_126;
    unsigned long  long _g_127;
    unsigned long  long _e_128;
    unsigned long  long _g_129;
    ai=(3);
    __c11_atomic_store(&ai,10,(0));
    do {
        do {
            total_tests++;
        } while(0);
        _e=(long  long)(10);
        _g=(long  long)(__c11_atomic_load(&ai,(0)));
        if(_e!=_g) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",277,"test_atomics",_e,_g);
            } while(0);
        }
    } while(0);
    old=__c11_atomic_fetch_add(&ai,5,(0));
    do {
        do {
            total_tests++;
        } while(0);
        _e_120=(long  long)(10);
        _g_121=(long  long)(old);
        if(_e_120!=_g_121) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",280,"test_atomics",_e_120,_g_121);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_122=(long  long)(15);
        _g_123=(long  long)(__c11_atomic_load(&ai,(0)));
        if(_e_122!=_g_123) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",281,"test_atomics",_e_122,_g_123);
            } while(0);
        }
    } while(0);
    expected=15;
    exchanged=__c11_atomic_compare_exchange_strong(&ai,&expected,99,(0),(0));
    do {
        do {
            total_tests++;
        } while(0);
        if(!(exchanged)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> ASSERT_TRUE(%s) failed\n","code/codex.nc",286,"test_atomics","exchanged");
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_124=(long  long)(99);
        _g_125=(long  long)(__c11_atomic_load(&ai,(0)));
        if(_e_124!=_g_125) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",287,"test_atomics",_e_124,_g_125);
            } while(0);
        }
    } while(0);
    au=0;
    prev=__c11_atomic_fetch_or(&au,0xAUL,(0));
    do {
        do {
            total_tests++;
        } while(0);
        _e_126=(unsigned long  long)(0u);
        _g_127=(unsigned long  long)((unsigned int)prev);
        if(_e_126!=_g_127) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",292,"test_atomics",_e_126,_g_127);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_128=(unsigned long  long)(0xAUL);
        _g_129=(unsigned long  long)((unsigned int)__c11_atomic_load(&au,(0)));
        if(_e_128!=_g_129) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",293,"test_atomics",_e_128,_g_129);
            } while(0);
        }
    } while(0);
}

static void test_atomics_orders_types()
{
    _Atomic(int) ai;
    int li;
    long long _e;
    long long _g;
    int expected;
    _Bool ok;
    long long _e_130;
    long long _g_131;
    _Atomic(long long) all;
    long long prevll;
    long long _e_132;
    long long _g_133;
    long long _e_134;
    long long _g_135;
    _Atomic(unsigned int ) au32  ;
    unsigned int  prev  ;
    unsigned long  long _e_136;
    unsigned long  long _g_137;
    unsigned long  long _e_138;
    unsigned long  long _g_139;
    unsigned int  expu  ;
    _Bool ok2;
    unsigned long  long _e_140;
    unsigned long  long _g_141;
    _Atomic(_Bool) ab;
    _Bool oldb;
    memset(&au32, 0, sizeof(au32));
    ai=0;
    __c11_atomic_store(&ai,1,(3));
    li=__c11_atomic_load(&ai,(2));
    do {
        do {
            total_tests++;
        } while(0);
        _e=(long  long)(1);
        _g=(long  long)(li);
        if(_e!=_g) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",302,"test_atomics_orders_types",_e,_g);
            } while(0);
        }
    } while(0);
    expected=1;
    ok=__c11_atomic_compare_exchange_weak(&ai,&expected,2,(4),(0));
    do {
        do {
            total_tests++;
        } while(0);
        if(!(ok)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> ASSERT_TRUE(%s) failed\n","code/codex.nc",305,"test_atomics_orders_types","ok");
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_130=(long  long)(2);
        _g_131=(long  long)(__c11_atomic_load(&ai,(5)));
        if(_e_130!=_g_131) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",306,"test_atomics_orders_types",_e_130,_g_131);
            } while(0);
        }
    } while(0);
    all=0;
    prevll=__c11_atomic_exchange(&all,123LL,(5));
    do {
        do {
            total_tests++;
        } while(0);
        _e_132=(long  long)(0);
        _g_133=(long  long)((int)prevll);
        if(_e_132!=_g_133) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",311,"test_atomics_orders_types",_e_132,_g_133);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_134=(long  long)(123);
        _g_135=(long  long)((int)__c11_atomic_load(&all,(0)));
        if(_e_134!=_g_135) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",312,"test_atomics_orders_types",_e_134,_g_135);
            } while(0);
        }
    } while(0);
    __c11_atomic_init(&au32,0u);
    prev=__c11_atomic_fetch_add(&au32,5u,(4));
    do {
        do {
            total_tests++;
        } while(0);
        _e_136=(unsigned long  long)(0u);
        _g_137=(unsigned long  long)(prev);
        if(_e_136!=_g_137) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",317,"test_atomics_orders_types",_e_136,_g_137);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_138=(unsigned long  long)(5u);
        _g_139=(unsigned long  long)(__c11_atomic_load(&au32,(0)));
        if(_e_138!=_g_139) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",318,"test_atomics_orders_types",_e_138,_g_139);
            } while(0);
        }
    } while(0);
    expu=999u;
    ok2=__c11_atomic_compare_exchange_strong(&au32,&expu,42u,(3),(0));
    do {
        do {
            total_tests++;
        } while(0);
        if(!(!ok2)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> ASSERT_TRUE(%s) failed\n","code/codex.nc",321,"test_atomics_orders_types","!ok2");
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_140=(unsigned long  long)(5u);
        _g_141=(unsigned long  long)(expu);
        if(_e_140!=_g_141) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",322,"test_atomics_orders_types",_e_140,_g_141);
            } while(0);
        }
    } while(0);
    ab=(_Bool)0;
    oldb=__c11_atomic_exchange(&ab,(_Bool)1,(5));
    do {
        do {
            total_tests++;
        } while(0);
        if(!(!oldb&&__c11_atomic_load(&ab,5))) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> ASSERT_TRUE(%s) failed\n","code/codex.nc",327,"test_atomics_orders_types","!oldb && atomic_load(&ab)");
            } while(0);
        }
    } while(0);
}

static void test_alignas_alignof()
{
    unsigned long  long _e;
    unsigned long  long _g;
    struct Al16  s  ;
    unsigned long  long _e_142;
    unsigned long  long _g_143;
    memset(&s, 0, sizeof(s));
    _Alignas(16) unsigned char buf[64];
    memset(&buf, 0, sizeof(buf));
    do {
        do {
            total_tests++;
        } while(0);
        _e=(unsigned long  long)(0u);
        _g=(unsigned long  long)((unsigned int)((unsigned long  int )buf%16u));
        if(_e!=_g) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",333,"test_alignas_alignof",_e,_g);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        if(!(_Alignof(struct Al16 )>=16)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> ASSERT_TRUE(%s) failed\n","code/codex.nc",336,"test_alignas_alignof","_Alignof(struct Al16) >= 16");
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_142=(unsigned long  long)(0u);
        _g_143=(unsigned long  long)((unsigned int)((unsigned long  int )&s%16u));
        if(_e_142!=_g_143) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",338,"test_alignas_alignof",_e_142,_g_143);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        if(!(_Alignof(int)<=_Alignof(struct anonymous_typeX20 ))) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> ASSERT_TRUE(%s) failed\n","code/codex.nc",340,"test_alignas_alignof","_Alignof(int) <= _Alignof(max_align_t)");
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        if(!(_Alignof(double)<=_Alignof(struct anonymous_typeX20 ))) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> ASSERT_TRUE(%s) failed\n","code/codex.nc",341,"test_alignas_alignof","_Alignof(double) <= _Alignof(max_align_t)");
            } while(0);
        }
    } while(0);
}

static void test_simd_alignas()
{
    unsigned long  long _e;
    unsigned long  long _g;
    unsigned long  long _e_144;
    unsigned long  long _g_145;
    struct V32  v32  ;
    struct V64  v64  ;
    unsigned long  long _e_146;
    unsigned long  long _g_147;
    unsigned long  long _e_148;
    unsigned long  long _g_149;
    memset(&v32, 0, sizeof(v32));
    memset(&v64, 0, sizeof(v64));
    _Alignas(32) static unsigned char buf32[128];
    memset(&buf32, 0, sizeof(buf32));
    _Alignas(64) static unsigned char buf64[128];
    memset(&buf64, 0, sizeof(buf64));
    do {
        do {
            total_tests++;
        } while(0);
        _e=(unsigned long  long)(0u);
        _g=(unsigned long  long)((unsigned int)((unsigned long  int )buf32%32u));
        if(_e!=_g) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",348,"test_simd_alignas",_e,_g);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_144=(unsigned long  long)(0u);
        _g_145=(unsigned long  long)((unsigned int)((unsigned long  int )buf64%64u));
        if(_e_144!=_g_145) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",349,"test_simd_alignas",_e_144,_g_145);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_146=(unsigned long  long)(0u);
        _g_147=(unsigned long  long)((unsigned int)((unsigned long  int )&v32%32u));
        if(_e_146!=_g_147) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",355,"test_simd_alignas",_e_146,_g_147);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_148=(unsigned long  long)(0u);
        _g_149=(unsigned long  long)((unsigned int)((unsigned long  int )&v64%64u));
        if(_e_148!=_g_149) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",356,"test_simd_alignas",_e_148,_g_149);
            } while(0);
        }
    } while(0);
}

static void test_noreturn_decl()
{
    void (*fp)(int);
    fp=must_exit;
    do {
        do {
            total_tests++;
        } while(0);
        if(!(fp!=((void*)0))) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> ASSERT_TRUE(%s) failed\n","code/codex.nc",362,"test_noreturn_decl","fp != NULL");
            } while(0);
        }
    } while(0);
}

static _Noreturn void must_exit(int code)
{
    exit(code);
}

static void test_generic()
{
    int gi;
    int gd;
    int gf;
    int gp;
    long long _e_160;
    long long _g_161;
    long long _e_162;
    long long _g_163;
    long long _e_164;
    long long _g_165;
    long long _e_166;
    long long _g_167;
    do {
        do {
            total_tests++;
        } while(0);
        const char* _e=("int");
        const char* _g=(_Generic(((1)), int: "int",unsigned int: "unsigned",long: "long",float: "float",double: "double",const char*: "cstr",char*: "char*",default: "other"));
        if((_e==((void*)0)&&_g!=((void*)0))||(_e!=((void*)0)&&_g==((void*)0))||(_e&&_g&&strcmp(_e,_g)!=0)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> STR expected=\"%s\" got=\"%s\"\n","code/codex.nc",374,"test_generic",((_e)?(_e):("(null)")),((_g)?(_g):("(null)")));
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        const char* _e_150=("double");
        const char* _g_151=(_Generic(((1.0)), int: "int",unsigned int: "unsigned",long: "long",float: "float",double: "double",const char*: "cstr",char*: "char*",default: "other"));
        if((_e_150==((void*)0)&&_g_151!=((void*)0))||(_e_150!=((void*)0)&&_g_151==((void*)0))||(_e_150&&_g_151&&strcmp(_e_150,_g_151)!=0)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> STR expected=\"%s\" got=\"%s\"\n","code/codex.nc",375,"test_generic",((_e_150)?(_e_150):("(null)")),((_g_151)?(_g_151):("(null)")));
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        const char* _e_152=("float");
        const char* _g_153=(_Generic(((1.0f)), int: "int",unsigned int: "unsigned",long: "long",float: "float",double: "double",const char*: "cstr",char*: "char*",default: "other"));
        if((_e_152==((void*)0)&&_g_153!=((void*)0))||(_e_152!=((void*)0)&&_g_153==((void*)0))||(_e_152&&_g_153&&strcmp(_e_152,_g_153)!=0)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> STR expected=\"%s\" got=\"%s\"\n","code/codex.nc",376,"test_generic",((_e_152)?(_e_152):("(null)")),((_g_153)?(_g_153):("(null)")));
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        const char* _e_154=("cstr");
        const char* _g_155=(_Generic((((const char*)"hi")), int: "int",unsigned int: "unsigned",long: "long",float: "float",double: "double",const char*: "cstr",char*: "char*",default: "other"));
        if((_e_154==((void*)0)&&_g_155!=((void*)0))||(_e_154!=((void*)0)&&_g_155==((void*)0))||(_e_154&&_g_155&&strcmp(_e_154,_g_155)!=0)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> STR expected=\"%s\" got=\"%s\"\n","code/codex.nc",377,"test_generic",((_e_154)?(_e_154):("(null)")),((_g_155)?(_g_155):("(null)")));
            } while(0);
        }
    } while(0);
    char buf[1];
    memset(&buf, 0, sizeof(buf));
    do {
        do {
            total_tests++;
        } while(0);
        const char* _e_156=("char*");
        const char* _g_157=(_Generic((((char*)buf)), int: "int",unsigned int: "unsigned",long: "long",float: "float",double: "double",const char*: "cstr",char*: "char*",default: "other"));
        if((_e_156==((void*)0)&&_g_157!=((void*)0))||(_e_156!=((void*)0)&&_g_157==((void*)0))||(_e_156&&_g_157&&strcmp(_e_156,_g_157)!=0)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> STR expected=\"%s\" got=\"%s\"\n","code/codex.nc",379,"test_generic",((_e_156)?(_e_156):("(null)")),((_g_157)?(_g_157):("(null)")));
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        const char* _e_158=("other");
        const char* _g_159=(_Generic((((short)1)), int: "int",unsigned int: "unsigned",long: "long",float: "float",double: "double",const char*: "cstr",char*: "char*",default: "other"));
        if((_e_158==((void*)0)&&_g_159!=((void*)0))||(_e_158!=((void*)0)&&_g_159==((void*)0))||(_e_158&&_g_159&&strcmp(_e_158,_g_159)!=0)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> STR expected=\"%s\" got=\"%s\"\n","code/codex.nc",380,"test_generic",((_e_158)?(_e_158):("(null)")),((_g_159)?(_g_159):("(null)")));
            } while(0);
        }
    } while(0);
    gi=_Generic((0), int: 1,default: 2);
    gd=_Generic((0.0), double: 3,float: 4,default: 5);
    gf=_Generic((0.0f), double: 3,float: 4,default: 5);
    gp=_Generic(((const char*)0), const char*: 7,char*: 8,default: 9);
    do {
        do {
            total_tests++;
        } while(0);
        _e_160=(long  long)(1);
        _g_161=(long  long)(gi);
        if(_e_160!=_g_161) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",386,"test_generic",_e_160,_g_161);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_162=(long  long)(3);
        _g_163=(long  long)(gd);
        if(_e_162!=_g_163) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",387,"test_generic",_e_162,_g_163);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_164=(long  long)(4);
        _g_165=(long  long)(gf);
        if(_e_164!=_g_165) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",388,"test_generic",_e_164,_g_165);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_166=(long  long)(7);
        _g_167=(long  long)(gp);
        if(_e_166!=_g_167) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",389,"test_generic",_e_166,_g_167);
            } while(0);
        }
    } while(0);
}

static int max_int(int a, int b)
{
    return ((a>b)?(a):(b));
}

static long max_long(long a, long b)
{
    return ((a>b)?(a):(b));
}

static double max_double(double a, double b)
{
    return ((a>b)?(a):(b));
}

static void test_generic_dispatch()
{
    int (*fi)(int,int);
    long (*fl)(long,long);
    double (*fd)(double,double);
    long long _e;
    long long _g;
    long long _e_168;
    long long _g_169;
    fi=_Generic((0), int: max_int,default: max_int);
    fl=_Generic((0L), long: max_long,default: max_long);
    fd=_Generic((0.0), double: max_double,default: max_double);
    do {
        do {
            total_tests++;
        } while(0);
        if(!(fi==max_int)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> ASSERT_TRUE(%s) failed\n","code/codex.nc",404,"test_generic_dispatch","fi == max_int");
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        if(!(fl==max_long)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> ASSERT_TRUE(%s) failed\n","code/codex.nc",405,"test_generic_dispatch","fl == max_long");
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        if(!(fd==max_double)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> ASSERT_TRUE(%s) failed\n","code/codex.nc",406,"test_generic_dispatch","fd == max_double");
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e=(long  long)(5);
        _g=(long  long)((_Generic(((3)), int: max_int,long: max_long,double: max_double,default: max_double))(3,5));
        if(_e!=_g) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",409,"test_generic_dispatch",_e,_g);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_168=(long  long)(7L);
        _g_169=(long  long)((long)(_Generic(((7L)), int: max_int,long: max_long,double: max_double,default: max_double))(7L,2L));
        if(_e_168!=_g_169) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",410,"test_generic_dispatch",_e_168,_g_169);
            } while(0);
        }
    } while(0);
}

static void test_vla()
{
    int n;
    int i;
    unsigned long  bytes  ;
    unsigned long  long _e;
    unsigned long  long _g;
    int s;
    int i_170;
    long long _e_171;
    long long _g_172;
    int i_173;
    int j;
    long long _e_174;
    long long _g_175;
    long long _e_176;
    long long _g_177;
    long long _e_178;
    long long _g_179;
    n=10;
    int a[n];
    memset(&a, 0, sizeof(a));
    for(i=0;i<n;++i){
        a[i]=i+1;
    }
    bytes=sizeof(a);
    do {
        do {
            total_tests++;
        } while(0);
        _e=(unsigned long  long)((unsigned int)(n*(int)sizeof(int)));
        _g=(unsigned long  long)((unsigned int)bytes);
        if(_e!=_g) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",420,"test_vla",_e,_g);
            } while(0);
        }
    } while(0);
    s=0;
    for(i_170=0;i_170<n;++i_170){
        s+=a[i_170];
    }
    do {
        do {
            total_tests++;
        } while(0);
        _e_171=(long  long)(n*(n+1)/2);
        _g_172=(long  long)(s);
        if(_e_171!=_g_172) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",422,"test_vla",_e_171,_g_172);
            } while(0);
        }
    } while(0);
    int  r=3,  c=4;
    int m[r][c];
    memset(&m, 0, sizeof(m));
    for(i_173=0;i_173<r;++i_173){
        for(j=0;j<c;++j){
            m[i_173][j]=i_173*10+j;
        }
    }
    do {
        do {
            total_tests++;
        } while(0);
        _e_174=(long  long)(0);
        _g_175=(long  long)(m[0][0]);
        if(_e_174!=_g_175) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",430,"test_vla",_e_174,_g_175);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_176=(long  long)(11);
        _g_177=(long  long)(m[1][1]);
        if(_e_176!=_g_177) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",431,"test_vla",_e_176,_g_177);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_178=(long  long)(23);
        _g_179=(long  long)(m[2][3]);
        if(_e_178!=_g_179) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",432,"test_vla",_e_178,_g_179);
            } while(0);
        }
    } while(0);
}

static int sum_vla_param(int len, int arr[len])
{
    int sum;
    int i;
    sum=0;
    for(i=0;i<len;++i){
        sum+=arr[i];
    }
    return sum;
}

static void test_vla_more()
{
    int n;
    int i;
    long long _e;
    long long _g;
    n=7;
    int arr[n];
    memset(&arr, 0, sizeof(arr));
    for(i=0;i<n;++i){
        arr[i]=i;
    }
    do {
        do {
            total_tests++;
        } while(0);
        _e=(long  long)((n-1)*n/2);
        _g=(long  long)(sum_vla_param(n,arr));
        if(_e!=_g) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",445,"test_vla_more",_e,_g);
            } while(0);
        }
    } while(0);
}

static int sum_variadic(int count, ...)
{
    __builtin_va_list  ap  ;
    int s;
    int i;
    memset(&ap, 0, sizeof(ap));
    __builtin_va_start(ap,count);
    s=0;
    for(i=0;i<count;++i){
        s+=__builtin_va_arg(ap,int);
    }
    __builtin_va_end(ap);
    return s;
}

static void test_variadic()
{
    long long _e;
    long long _g;
    long long _e_180;
    long long _g_181;
    long long _e_182;
    long long _g_183;
    do {
        do {
            total_tests++;
        } while(0);
        _e=(long  long)(0);
        _g=(long  long)(sum_variadic(0));
        if(_e!=_g) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",458,"test_variadic",_e,_g);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_180=(long  long)(6);
        _g_181=(long  long)(sum_variadic(3,1,2,3));
        if(_e_180!=_g_181) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",459,"test_variadic",_e_180,_g_181);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_182=(long  long)(55);
        _g_183=(long  long)(sum_variadic(10,1,2,3,4,5,6,7,8,9,10));
        if(_e_182!=_g_183) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",460,"test_variadic",_e_182,_g_183);
            } while(0);
        }
    } while(0);
}

static int tls_get()
{
    return g_tls_counter;
}

static void tls_inc()
{
    g_tls_counter++;
}

static int* tls_addr()
{
    return &g_tls_counter;
}

static void test_thread_local()
{
    int* a1;
    int start;
    long long _e;
    long long _g;
    int* a2;
    a1=tls_addr();
    start=tls_get();
    tls_inc();
    tls_inc();
    do {
        do {
            total_tests++;
        } while(0);
        _e=(long  long)(start+2);
        _g=(long  long)(tls_get());
        if(_e!=_g) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",473,"test_thread_local",_e,_g);
            } while(0);
        }
    } while(0);
    a2=tls_addr();
    do {
        do {
            total_tests++;
        } while(0);
        if(!(a1==a2)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> ASSERT_TRUE(%s) failed\n","code/codex.nc",475,"test_thread_local","a1 == a2");
            } while(0);
        }
    } while(0);
}

static void test_strings()
{
    long long _e_184;
    long long _g_185;
    int i;
    long long _e_186;
    long long _g_187;
    char buf[32];
    memset(&buf, 0, sizeof(buf));
    strcpy(buf,"Hello");
    strcat(buf,", ");
    strcat(buf,"World");
    do {
        do {
            total_tests++;
        } while(0);
        const char* _e=("Hello, World");
        const char* _g=(buf);
        if((_e==((void*)0)&&_g!=((void*)0))||(_e!=((void*)0)&&_g==((void*)0))||(_e&&_g&&strcmp(_e,_g)!=0)) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> STR expected=\"%s\" got=\"%s\"\n","code/codex.nc",482,"test_strings",((_e)?(_e):("(null)")),((_g)?(_g):("(null)")));
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_184=(long  long)(12);
        _g_185=(long  long)((int)strlen(buf));
        if(_e_184!=_g_185) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",483,"test_strings",_e_184,_g_185);
            } while(0);
        }
    } while(0);
    char a[8]={0};
    char b[8]={0};
    for(i=0;i<8;i++){
        a[i]=(char)(i+1);
    }
    memcpy(b,a,sizeof(a));
    do {
        do {
            total_tests++;
        } while(0);
        _e_186=(long  long)(0);
        _g_187=(long  long)(memcmp(a,b,sizeof(a)));
        if(_e_186!=_g_187) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",490,"test_strings",_e_186,_g_187);
            } while(0);
        }
    } while(0);
}

static void test_structs_enums_unions()
{
    long long _e;
    long long _g;
    long long _e_188;
    long long _g_189;
    struct anonymous_typeX21*  pp  ;
    long long _e_190;
    long long _g_191;
    long long _e_192;
    long long _g_193;
    enum anonymous_typeY21  c  ;
    int res;
    long long _e_194;
    long long _g_195;
    union anonymous_typeZ22  u  ;
    unsigned long  long _e_196;
    unsigned long  long _g_197;
    unsigned long  long _e_198;
    unsigned long  long _g_199;
    memset(&u, 0, sizeof(u));
    struct anonymous_typeX21  p  ={ .x = 3, .y = 4 };
    do {
        do {
            total_tests++;
        } while(0);
        _e=(long  long)(3);
        _g=(long  long)(p.x);
        if(_e!=_g) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",495,"test_structs_enums_unions",_e,_g);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_188=(long  long)(4);
        _g_189=(long  long)(p.y);
        if(_e_188!=_g_189) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",496,"test_structs_enums_unions",_e_188,_g_189);
            } while(0);
        }
    } while(0);
    pp=&p;
    pp->x+=7;
    pp->y+=6;
    do {
        do {
            total_tests++;
        } while(0);
        _e_190=(long  long)(10);
        _g_191=(long  long)(p.x);
        if(_e_190!=_g_191) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",498,"test_structs_enums_unions",_e_190,_g_191);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_192=(long  long)(10);
        _g_193=(long  long)(p.y);
        if(_e_192!=_g_193) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",499,"test_structs_enums_unions",_e_192,_g_193);
            } while(0);
        }
    } while(0);
    c=(2);
    res=0;
    switch (    c) {
        case (1):
        res=1;
        break;
        case (2):
        res=2;
        break;
        case (4):
        res=3;
        break;
        default:
        res=-1;
        break;
    }
    do {
        do {
            total_tests++;
        } while(0);
        _e_194=(long  long)(2);
        _g_195=(long  long)(res);
        if(_e_194!=_g_195) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",509,"test_structs_enums_unions",_e_194,_g_195);
            } while(0);
        }
    } while(0);
    u.u32=0x11223344u;
    do {
        do {
            total_tests++;
        } while(0);
        _e_196=(unsigned long  long)(0x44u);
        _g_197=(unsigned long  long)((unsigned int)u.b[0]);
        if(_e_196!=_g_197) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",512,"test_structs_enums_unions",_e_196,_g_197);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_198=(unsigned long  long)(0x33u);
        _g_199=(unsigned long  long)((unsigned int)u.b[1]);
        if(_e_198!=_g_199) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> UINT expected=%llu got=%llu\n","code/codex.nc",513,"test_structs_enums_unions",_e_198,_g_199);
            } while(0);
        }
    } while(0);
}

static void test_macros_static()
{
    long long _e;
    long long _g;
    long long _e_200;
    long long _g_201;
    long long _e_202;
    long long _g_203;
    int a;
    int b;
    int c;
    long long _e_204;
    long long _g_205;
    long long _e_206;
    long long _g_207;
    long long _e_208;
    long long _g_209;
    do {
        do {
            total_tests++;
        } while(0);
        _e=(long  long)(25);
        _g=(long  long)(((5)*(5)));
        if(_e!=_g) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",517,"test_macros_static",_e,_g);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_200=(long  long)(36);
        _g_201=(long  long)(((5+1)*(5+1)));
        if(_e_200!=_g_201) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",518,"test_macros_static",_e_200,_g_201);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_202=(long  long)(9);
        _g_203=(long  long)(((((9)>(-1))?((9)):((-1)))));
        if(_e_202!=_g_203) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",519,"test_macros_static",_e_202,_g_203);
            } while(0);
        }
    } while(0);
    a=bump_static_counter();
    b=bump_static_counter();
    c=bump_static_counter();
    do {
        do {
            total_tests++;
        } while(0);
        _e_204=(long  long)(3);
        _g_205=(long  long)(a);
        if(_e_204!=_g_205) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",524,"test_macros_static",_e_204,_g_205);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_206=(long  long)(6);
        _g_207=(long  long)(b);
        if(_e_206!=_g_207) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",525,"test_macros_static",_e_206,_g_207);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_208=(long  long)(9);
        _g_209=(long  long)(c);
        if(_e_208!=_g_209) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",526,"test_macros_static",_e_208,_g_209);
            } while(0);
        }
    } while(0);
}

static void test_recursion()
{
    long long _e;
    long long _g;
    long long _e_210;
    long long _g_211;
    long long _e_212;
    long long _g_213;
    do {
        do {
            total_tests++;
        } while(0);
        _e=(long  long)(1);
        _g=(long  long)(factorial(0));
        if(_e!=_g) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",530,"test_recursion",_e,_g);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_210=(long  long)(1);
        _g_211=(long  long)(factorial(1));
        if(_e_210!=_g_211) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",531,"test_recursion",_e_210,_g_211);
            } while(0);
        }
    } while(0);
    do {
        do {
            total_tests++;
        } while(0);
        _e_212=(long  long)(120);
        _g_213=(long  long)(factorial(5));
        if(_e_212!=_g_213) {
            do {
                failed_tests++;
                printf("FAIL: %s:%d in %s() -> INT expected=%lld got=%lld\n","code/codex.nc",532,"test_recursion",_e_212,_g_213);
            } while(0);
        }
    } while(0);
}

static void test_floating_point()
{
    double x;
    x=0.1+0.2;
}

int main()
{
    int passed;
    printf("Running C syntax/feature tests...\n");
    test_arithmetic();
    test_bit_ops();
    test_logic_ternary();
    test_loops();
    test_arrays_pointers();
    test_strings();
    test_structs_enums_unions();
    test_macros_static();
    test_recursion();
    test_floating_point();
    test_func_pointer_array();
    test_array_initializers();
    test_casts();
    test_generic();
    test_generic_dispatch();
    test_vla();
    test_vla_more();
    test_variadic();
    test_thread_local();
    test_atomics();
    test_atomics_orders_types();
    test_alignas_alignof();
    test_simd_alignas();
    test_noreturn_decl();
    passed=total_tests-failed_tests;
    printf("\nSummary: %d tests, %d passed, %d failed\n",total_tests,passed,failed_tests);
    if(failed_tests==0) {
    }
    else {
    }
    return ((failed_tests==0)?(0):(1));
}

