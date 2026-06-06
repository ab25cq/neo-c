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

typedef __builtin_va_list  va_list  ;

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

typedef struct anonymous_typeX20 cpu_t;

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

struct anonymous_typeX20
{
    unsigned int  r[16]  ;
    unsigned int  apsr_n  ;
    unsigned int  apsr_z  ;
    unsigned int  apsr_c  ;
    unsigned int  apsr_v  ;
    unsigned long  int  steps  ;
    unsigned int  exit_code  ;
    unsigned int  systick  ;
    _Bool halt;
    _Bool trace;
};

/// variable definition ///
extern struct _IO_FILE*  stdin  ;
extern struct _IO_FILE*  stdout  ;
extern struct _IO_FILE*  stderr  ;
static unsigned char  g_flash[(2u*1024u*1024u)]  ;
static unsigned char  g_sram[(264u*1024u)]  ;
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
static unsigned short int  rd16(const unsigned char*  p  );
static unsigned int  rd32(const unsigned char*  p  );
static int  sx(unsigned int  value  , int bits);
static unsigned char*  addr_ptr(unsigned int  addr  );
static unsigned char  mem_read8(struct anonymous_typeX20*  cpu  , unsigned int  addr  );
static unsigned short int  mem_read16(struct anonymous_typeX20*  cpu  , unsigned int  addr  );
static unsigned int  mem_read32(struct anonymous_typeX20*  cpu  , unsigned int  addr  );
static void mem_write8(struct anonymous_typeX20*  cpu  , unsigned int  addr  , unsigned char  value  );
static void mem_write16(struct anonymous_typeX20*  cpu  , unsigned int  addr  , unsigned short int  value  );
static void mem_write32(struct anonymous_typeX20*  cpu  , unsigned int  addr  , unsigned int  value  );
static void set_nz(struct anonymous_typeX20*  cpu  , unsigned int  value  );
static void set_add_flags(struct anonymous_typeX20*  cpu  , unsigned int  a  , unsigned int  b  , unsigned int  result  );
static void set_sub_flags(struct anonymous_typeX20*  cpu  , unsigned int  a  , unsigned int  b  , unsigned int  result  );
static void write_reg(struct anonymous_typeX20*  cpu  , int reg, unsigned int  value  );
static unsigned int  read_pc(struct anonymous_typeX20*  cpu  );
static _Bool cond_pass(struct anonymous_typeX20*  cpu  , unsigned int  cond  );
static void push32(struct anonymous_typeX20*  cpu  , unsigned int  value  );
static unsigned int  pop32(struct anonymous_typeX20*  cpu  );
static void unsupported(struct anonymous_typeX20*  cpu  , unsigned short int  op  , unsigned int  pc  );
static void step_thumb(struct anonymous_typeX20*  cpu  );
static int load_elf32(const char* path);
static void cpu_reset(struct anonymous_typeX20*  cpu  );
static void usage(const char* argv0);
int main(int argc, char** argv);
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
static unsigned short int  rd16(const unsigned char*  p  )
{
        return (unsigned short int )p[0]|((unsigned short int )p[1]<<8);
}

static unsigned int  rd32(const unsigned char*  p  )
{
        return (unsigned int )p[0]|((unsigned int )p[1]<<8)|((unsigned int )p[2]<<16)|((unsigned int )p[3]<<24);
}

static int  sx(unsigned int  value  , int bits)
{
    unsigned int  mask  ;
    memset(&mask, 0, sizeof(mask));
    mask=1u<<(bits-1);
    value&=(1u<<bits)-1u;
        return (int )((value^mask)-mask);
}

static unsigned char*  addr_ptr(unsigned int  addr  )
{
    if(addr>=0x10000000u&&addr<0x10000000u+(2u*1024u*1024u)) {
                return &g_flash[addr-0x10000000u];
    }
    if(addr>=0x20000000u&&addr<0x20000000u+(264u*1024u)) {
                return &g_sram[addr-0x20000000u];
    }
        return 0;
}

static unsigned char  mem_read8(struct anonymous_typeX20*  cpu  , unsigned int  addr  )
{
    unsigned char*  p  ;
    memset(&p, 0, sizeof(p));
    p=addr_ptr(addr);
    if(p!=0) {
                return *p;
    }
    if(addr==0xe000e018u) {
                return (unsigned char )(cpu->systick&0xffu);
    }
    fprintf(stderr,"EMU load8 fault: 0x%08x\n",addr);
    cpu->halt=(_Bool)1;
    cpu->exit_code=125;
        return 0;
}

static unsigned short int  mem_read16(struct anonymous_typeX20*  cpu  , unsigned int  addr  )
{
    unsigned short int  a  ;
    unsigned short int  b  ;
    memset(&a, 0, sizeof(a));
    memset(&b, 0, sizeof(b));
    a=mem_read8(cpu,addr);
    b=mem_read8(cpu,addr+1u);
        return a|(unsigned short int )(b<<8);
}

static unsigned int  mem_read32(struct anonymous_typeX20*  cpu  , unsigned int  addr  )
{
    unsigned int  a  ;
    unsigned int  b  ;
    unsigned int  c  ;
    unsigned int  d  ;
    memset(&a, 0, sizeof(a));
    memset(&b, 0, sizeof(b));
    memset(&c, 0, sizeof(c));
    memset(&d, 0, sizeof(d));
    a=mem_read8(cpu,addr);
    b=mem_read8(cpu,addr+1u);
    c=mem_read8(cpu,addr+2u);
    d=mem_read8(cpu,addr+3u);
        return a|(b<<8)|(c<<16)|(d<<24);
}

static void mem_write8(struct anonymous_typeX20*  cpu  , unsigned int  addr  , unsigned char  value  )
{
    unsigned char*  p  ;
    memset(&p, 0, sizeof(p));
    p=addr_ptr(addr);
    if(p!=0&&addr>=0x20000000u) {
        *p=value;
                return;
    }
    if(addr==0x40034000u) {
        putchar((int)value);
        fflush(stdout);
                return;
    }
    if(addr==0x40000000u) {
        cpu->exit_code=value;
        cpu->halt=(_Bool)1;
                return;
    }
    if(addr==0xe000e018u) {
        cpu->systick=value;
                return;
    }
    fprintf(stderr,"EMU store8 fault: 0x%08x = 0x%02x\n",addr,value);
    cpu->halt=(_Bool)1;
    cpu->exit_code=126;
}

static void mem_write16(struct anonymous_typeX20*  cpu  , unsigned int  addr  , unsigned short int  value  )
{
    mem_write8(cpu,addr,(unsigned char )(value&0xffu));
    mem_write8(cpu,addr+1u,(unsigned char )((value>>8)&0xffu));
}

static void mem_write32(struct anonymous_typeX20*  cpu  , unsigned int  addr  , unsigned int  value  )
{
    if(addr==0x40034000u) {
        putchar((int)(value&0xffu));
        fflush(stdout);
                return;
    }
    if(addr==0x40000000u) {
        cpu->exit_code=value;
        cpu->halt=(_Bool)1;
                return;
    }
    if(addr==0xe000e018u) {
        cpu->systick=value;
                return;
    }
    mem_write8(cpu,addr,(unsigned char )(value&0xffu));
    mem_write8(cpu,addr+1u,(unsigned char )((value>>8)&0xffu));
    mem_write8(cpu,addr+2u,(unsigned char )((value>>16)&0xffu));
    mem_write8(cpu,addr+3u,(unsigned char )((value>>24)&0xffu));
}

static void set_nz(struct anonymous_typeX20*  cpu  , unsigned int  value  )
{
    cpu->apsr_n=(value>>31)&1u;
    cpu->apsr_z=value==0;
}

static void set_add_flags(struct anonymous_typeX20*  cpu  , unsigned int  a  , unsigned int  b  , unsigned int  result  )
{
    set_nz(cpu,result);
    cpu->apsr_c=result<a;
    cpu->apsr_v=(((a^result)&(b^result))>>31)&1u;
}

static void set_sub_flags(struct anonymous_typeX20*  cpu  , unsigned int  a  , unsigned int  b  , unsigned int  result  )
{
    set_nz(cpu,result);
    cpu->apsr_c=a>=b;
    cpu->apsr_v=(((a^b)&(a^result))>>31)&1u;
}

static void write_reg(struct anonymous_typeX20*  cpu  , int reg, unsigned int  value  )
{
    if(reg==15) {
        ({ long long __neo_array_index3_0 = (long long)(15); if(__neo_array_index3_0 < 0 || __neo_array_index3_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index3_0] = value&~1u; });
    }
    else {
        ({ long long __neo_array_index4_0 = (long long)(reg); if(__neo_array_index4_0 < 0 || __neo_array_index4_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index4_0] = value; });
    }
}

static unsigned int  read_pc(struct anonymous_typeX20*  cpu  )
{
        return ((*({ long long __neo_array_index5_0 = (long long)(15); if(__neo_array_index5_0 < 0 || __neo_array_index5_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index5_0]; }))+2u)&~3u;
}

static _Bool cond_pass(struct anonymous_typeX20*  cpu  , unsigned int  cond  )
{
    switch (    cond) {
        case 0x0:
                return cpu->apsr_z!=0;
        case 0x1:
                return cpu->apsr_z==0;
        case 0x2:
                return cpu->apsr_c!=0;
        case 0x3:
                return cpu->apsr_c==0;
        case 0x4:
                return cpu->apsr_n!=0;
        case 0x5:
                return cpu->apsr_n==0;
        case 0x6:
                return cpu->apsr_v!=0;
        case 0x7:
                return cpu->apsr_v==0;
        case 0x8:
                return cpu->apsr_c!=0&&cpu->apsr_z==0;
        case 0x9:
                return cpu->apsr_c==0||cpu->apsr_z!=0;
        case 0xa:
                return cpu->apsr_n==cpu->apsr_v;
        case 0xb:
                return cpu->apsr_n!=cpu->apsr_v;
        case 0xc:
                return cpu->apsr_z==0&&cpu->apsr_n==cpu->apsr_v;
        case 0xd:
                return cpu->apsr_z!=0||cpu->apsr_n!=cpu->apsr_v;
        case 0xe:
                return (_Bool)1;
        default:
                return (_Bool)0;
    }
}

static void push32(struct anonymous_typeX20*  cpu  , unsigned int  value  )
{
    (*({ long long __neo_array_index6_0 = (long long)(13); if(__neo_array_index6_0 < 0 || __neo_array_index6_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index6_0]; }))-=4u;
    mem_write32(cpu,(*({ long long __neo_array_index7_0 = (long long)(13); if(__neo_array_index7_0 < 0 || __neo_array_index7_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index7_0]; })),value);
}

static unsigned int  pop32(struct anonymous_typeX20*  cpu  )
{
    unsigned int  value  ;
    memset(&value, 0, sizeof(value));
    value=mem_read32(cpu,(*({ long long __neo_array_index8_0 = (long long)(13); if(__neo_array_index8_0 < 0 || __neo_array_index8_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index8_0]; })));
    (*({ long long __neo_array_index9_0 = (long long)(13); if(__neo_array_index9_0 < 0 || __neo_array_index9_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index9_0]; }))+=4u;
        return value;
}

static void unsupported(struct anonymous_typeX20*  cpu  , unsigned short int  op  , unsigned int  pc  )
{
    fprintf(stderr,"EMU unsupported thumb op 0x%04x at 0x%08x\n",op,pc);
    cpu->halt=(_Bool)1;
    cpu->exit_code=127;
}

static void step_thumb(struct anonymous_typeX20*  cpu  )
{
    unsigned int  pc  ;
    unsigned short int  op  ;
    int imm;
    int rs;
    int rd;
    unsigned int  value  ;
    int imm_0;
    int rs_1;
    int rd_2;
    unsigned int  value_3  ;
    int imm_4;
    int rs_5;
    int rd_6;
    unsigned int  value_7  ;
    int imm_mode;
    int sub;
    int rn;
    int rs_8;
    int rd_9;
    unsigned int  rhs  ;
    unsigned int  lhs  ;
    unsigned int  result  ;
    int kind;
    int rd_10;
    unsigned int  imm_11  ;
    unsigned int  result_12  ;
    int alu;
    int rs_13;
    int rd_14;
    unsigned int  a  ;
    unsigned int  b  ;
    unsigned int  result_15  ;
    unsigned int  carry  ;
    unsigned int  borrow  ;
    unsigned int  rot  ;
    int kind_16;
    int rs_17;
    int rd_18;
    unsigned int  result_19  ;
    int rd_20;
    unsigned int  addr  ;
    int kind_21;
    int rm;
    int rn_22;
    int rt;
    unsigned int  addr_23  ;
    int ldr;
    int imm_24;
    int rn_25;
    int rt_26;
    unsigned int  addr_27  ;
    int ldr_28;
    int imm_29;
    int rn_30;
    int rt_31;
    unsigned int  addr_32  ;
    int ldr_33;
    int imm_34;
    int rn_35;
    int rt_36;
    unsigned int  addr_37  ;
    int ldr_38;
    int rt_39;
    unsigned int  addr_40  ;
    int rd_41;
    unsigned int  imm_42  ;
    unsigned int  imm_43  ;
    int rn_44;
    int rd_45;
    int kind_46;
    unsigned int  list  ;
    int i;
    unsigned int  list_47  ;
    int i_48;
    int rn_49;
    unsigned int  imm_50  ;
    _Bool nonzero;
    _Bool take;
    int ldm;
    int rn_51;
    unsigned int  list_52  ;
    unsigned int  addr_53  ;
    int i_54;
    unsigned int  cond  ;
    unsigned short int  op2  ;
    unsigned int  s  ;
    unsigned int  j1  ;
    unsigned int  j2  ;
    unsigned int  i1  ;
    unsigned int  i2  ;
    unsigned int  imm_55  ;
    int  off  ;
    memset(&pc, 0, sizeof(pc));
    memset(&op, 0, sizeof(op));
    memset(&imm, 0, sizeof(imm));
    memset(&rs, 0, sizeof(rs));
    memset(&rd, 0, sizeof(rd));
    memset(&value, 0, sizeof(value));
    memset(&imm_0, 0, sizeof(imm_0));
    memset(&rs_1, 0, sizeof(rs_1));
    memset(&rd_2, 0, sizeof(rd_2));
    memset(&value_3, 0, sizeof(value_3));
    memset(&imm_4, 0, sizeof(imm_4));
    memset(&rs_5, 0, sizeof(rs_5));
    memset(&rd_6, 0, sizeof(rd_6));
    memset(&value_7, 0, sizeof(value_7));
    memset(&imm_mode, 0, sizeof(imm_mode));
    memset(&sub, 0, sizeof(sub));
    memset(&rn, 0, sizeof(rn));
    memset(&rs_8, 0, sizeof(rs_8));
    memset(&rd_9, 0, sizeof(rd_9));
    memset(&rhs, 0, sizeof(rhs));
    memset(&lhs, 0, sizeof(lhs));
    memset(&result, 0, sizeof(result));
    memset(&kind, 0, sizeof(kind));
    memset(&rd_10, 0, sizeof(rd_10));
    memset(&imm_11, 0, sizeof(imm_11));
    memset(&result_12, 0, sizeof(result_12));
    memset(&alu, 0, sizeof(alu));
    memset(&rs_13, 0, sizeof(rs_13));
    memset(&rd_14, 0, sizeof(rd_14));
    memset(&a, 0, sizeof(a));
    memset(&b, 0, sizeof(b));
    memset(&result_15, 0, sizeof(result_15));
    memset(&carry, 0, sizeof(carry));
    memset(&borrow, 0, sizeof(borrow));
    memset(&rot, 0, sizeof(rot));
    memset(&kind_16, 0, sizeof(kind_16));
    memset(&rs_17, 0, sizeof(rs_17));
    memset(&rd_18, 0, sizeof(rd_18));
    memset(&result_19, 0, sizeof(result_19));
    memset(&rd_20, 0, sizeof(rd_20));
    memset(&addr, 0, sizeof(addr));
    memset(&kind_21, 0, sizeof(kind_21));
    memset(&rm, 0, sizeof(rm));
    memset(&rn_22, 0, sizeof(rn_22));
    memset(&rt, 0, sizeof(rt));
    memset(&addr_23, 0, sizeof(addr_23));
    memset(&ldr, 0, sizeof(ldr));
    memset(&imm_24, 0, sizeof(imm_24));
    memset(&rn_25, 0, sizeof(rn_25));
    memset(&rt_26, 0, sizeof(rt_26));
    memset(&addr_27, 0, sizeof(addr_27));
    memset(&ldr_28, 0, sizeof(ldr_28));
    memset(&imm_29, 0, sizeof(imm_29));
    memset(&rn_30, 0, sizeof(rn_30));
    memset(&rt_31, 0, sizeof(rt_31));
    memset(&addr_32, 0, sizeof(addr_32));
    memset(&ldr_33, 0, sizeof(ldr_33));
    memset(&imm_34, 0, sizeof(imm_34));
    memset(&rn_35, 0, sizeof(rn_35));
    memset(&rt_36, 0, sizeof(rt_36));
    memset(&addr_37, 0, sizeof(addr_37));
    memset(&ldr_38, 0, sizeof(ldr_38));
    memset(&rt_39, 0, sizeof(rt_39));
    memset(&addr_40, 0, sizeof(addr_40));
    memset(&rd_41, 0, sizeof(rd_41));
    memset(&imm_42, 0, sizeof(imm_42));
    memset(&imm_43, 0, sizeof(imm_43));
    memset(&rn_44, 0, sizeof(rn_44));
    memset(&rd_45, 0, sizeof(rd_45));
    memset(&kind_46, 0, sizeof(kind_46));
    memset(&list, 0, sizeof(list));
    memset(&i, 0, sizeof(i));
    memset(&list_47, 0, sizeof(list_47));
    memset(&i_48, 0, sizeof(i_48));
    memset(&rn_49, 0, sizeof(rn_49));
    memset(&imm_50, 0, sizeof(imm_50));
    memset(&nonzero, 0, sizeof(nonzero));
    memset(&take, 0, sizeof(take));
    memset(&ldm, 0, sizeof(ldm));
    memset(&rn_51, 0, sizeof(rn_51));
    memset(&list_52, 0, sizeof(list_52));
    memset(&addr_53, 0, sizeof(addr_53));
    memset(&i_54, 0, sizeof(i_54));
    memset(&cond, 0, sizeof(cond));
    memset(&op2, 0, sizeof(op2));
    memset(&s, 0, sizeof(s));
    memset(&j1, 0, sizeof(j1));
    memset(&j2, 0, sizeof(j2));
    memset(&i1, 0, sizeof(i1));
    memset(&i2, 0, sizeof(i2));
    memset(&imm_55, 0, sizeof(imm_55));
    memset(&off, 0, sizeof(off));
    pc=(*({ long long __neo_array_index10_0 = (long long)(15); if(__neo_array_index10_0 < 0 || __neo_array_index10_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index10_0]; }));
    op=mem_read16(cpu,pc);
    ({ long long __neo_array_index11_0 = (long long)(15); if(__neo_array_index11_0 < 0 || __neo_array_index11_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index11_0] = pc+2u; });
    cpu->steps++;
    cpu->systick++;
    if(cpu->trace) {
        fprintf(stderr,"%08x  %04x  r0=%08x r1=%08x r3=%08x sp=%08x z=%u\n",pc,op,(*({ long long __neo_array_index12_0 = (long long)(0); if(__neo_array_index12_0 < 0 || __neo_array_index12_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index12_0]; })),(*({ long long __neo_array_index13_0 = (long long)(1); if(__neo_array_index13_0 < 0 || __neo_array_index13_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index13_0]; })),(*({ long long __neo_array_index14_0 = (long long)(3); if(__neo_array_index14_0 < 0 || __neo_array_index14_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index14_0]; })),(*({ long long __neo_array_index15_0 = (long long)(13); if(__neo_array_index15_0 < 0 || __neo_array_index15_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index15_0]; })),cpu->apsr_z);
    }
    if((op&0xf800u)==0x0000u) {
        imm=(op>>6)&0x1f;
        rs=(op>>3)&7;
        rd=op&7;
        value=(*({ long long __neo_array_index16_0 = (long long)(rs); if(__neo_array_index16_0 < 0 || __neo_array_index16_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index16_0]; }))<<imm;
        ({ long long __neo_array_index17_0 = (long long)(rd); if(__neo_array_index17_0 < 0 || __neo_array_index17_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index17_0] = value; });
        set_nz(cpu,value);
        if(imm!=0) {
            cpu->apsr_c=((*({ long long __neo_array_index18_0 = (long long)(rs); if(__neo_array_index18_0 < 0 || __neo_array_index18_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index18_0]; }))>>(32-imm))&1u;
        }
                return;
    }
    if((op&0xf800u)==0x0800u) {
        imm_0=(op>>6)&0x1f;
        rs_1=(op>>3)&7;
        rd_2=op&7;
        if(imm_0==0) {
            value_3=0;
            cpu->apsr_c=((*({ long long __neo_array_index19_0 = (long long)(rs_1); if(__neo_array_index19_0 < 0 || __neo_array_index19_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index19_0]; }))>>31)&1u;
        }
        else {
            value_3=(*({ long long __neo_array_index20_0 = (long long)(rs_1); if(__neo_array_index20_0 < 0 || __neo_array_index20_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index20_0]; }))>>imm_0;
            cpu->apsr_c=((*({ long long __neo_array_index21_0 = (long long)(rs_1); if(__neo_array_index21_0 < 0 || __neo_array_index21_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index21_0]; }))>>(imm_0-1))&1u;
        }
        ({ long long __neo_array_index22_0 = (long long)(rd_2); if(__neo_array_index22_0 < 0 || __neo_array_index22_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index22_0] = value_3; });
        set_nz(cpu,value_3);
                return;
    }
    if((op&0xf800u)==0x1000u) {
        imm_4=(op>>6)&0x1f;
        rs_5=(op>>3)&7;
        rd_6=op&7;
        if(imm_4==0) {
            value_7=((((*({ long long __neo_array_index23_0 = (long long)(rs_5); if(__neo_array_index23_0 < 0 || __neo_array_index23_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index23_0]; }))&0x80000000u))?(0xffffffffu):(0));
            cpu->apsr_c=((*({ long long __neo_array_index24_0 = (long long)(rs_5); if(__neo_array_index24_0 < 0 || __neo_array_index24_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index24_0]; }))>>31)&1u;
        }
        else {
            value_7=(unsigned int )(((int )(*({ long long __neo_array_index25_0 = (long long)(rs_5); if(__neo_array_index25_0 < 0 || __neo_array_index25_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index25_0]; })))>>imm_4);
            cpu->apsr_c=((*({ long long __neo_array_index26_0 = (long long)(rs_5); if(__neo_array_index26_0 < 0 || __neo_array_index26_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index26_0]; }))>>(imm_4-1))&1u;
        }
        ({ long long __neo_array_index27_0 = (long long)(rd_6); if(__neo_array_index27_0 < 0 || __neo_array_index27_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index27_0] = value_7; });
        set_nz(cpu,value_7);
                return;
    }
    if((op&0xf800u)==0x1800u) {
        imm_mode=(op>>10)&1;
        sub=(op>>9)&1;
        rn=(op>>6)&7;
        rs_8=(op>>3)&7;
        rd_9=op&7;
        rhs=((imm_mode)?((unsigned int )rn):((*({ long long __neo_array_index28_0 = (long long)(rn); if(__neo_array_index28_0 < 0 || __neo_array_index28_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index28_0]; }))));
        lhs=(*({ long long __neo_array_index29_0 = (long long)(rs_8); if(__neo_array_index29_0 < 0 || __neo_array_index29_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index29_0]; }));
        result=((sub)?(lhs-rhs):(lhs+rhs));
        ({ long long __neo_array_index30_0 = (long long)(rd_9); if(__neo_array_index30_0 < 0 || __neo_array_index30_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index30_0] = result; });
        if(sub) {
            set_sub_flags(cpu,lhs,rhs,result);
        }
        else {
            set_add_flags(cpu,lhs,rhs,result);
        }
                return;
    }
    if((op&0xe000u)==0x2000u) {
        kind=(op>>11)&3;
        rd_10=(op>>8)&7;
        imm_11=op&0xffu;
        if(kind==0) {
            ({ long long __neo_array_index31_0 = (long long)(rd_10); if(__neo_array_index31_0 < 0 || __neo_array_index31_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index31_0] = imm_11; });
            set_nz(cpu,imm_11);
        }
        else if(kind==1) {
            result_12=(*({ long long __neo_array_index32_0 = (long long)(rd_10); if(__neo_array_index32_0 < 0 || __neo_array_index32_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index32_0]; }))-imm_11;
            set_sub_flags(cpu,(*({ long long __neo_array_index33_0 = (long long)(rd_10); if(__neo_array_index33_0 < 0 || __neo_array_index33_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index33_0]; })),imm_11,result_12);
        }
        else if(kind==2) {
            result_12=(*({ long long __neo_array_index34_0 = (long long)(rd_10); if(__neo_array_index34_0 < 0 || __neo_array_index34_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index34_0]; }))+imm_11;
            ({ long long __neo_array_index35_0 = (long long)(rd_10); if(__neo_array_index35_0 < 0 || __neo_array_index35_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index35_0] = result_12; });
            set_add_flags(cpu,(*({ long long __neo_array_index36_0 = (long long)(rd_10); if(__neo_array_index36_0 < 0 || __neo_array_index36_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index36_0]; }))-imm_11,imm_11,result_12);
        }
        else {
            result_12=(*({ long long __neo_array_index37_0 = (long long)(rd_10); if(__neo_array_index37_0 < 0 || __neo_array_index37_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index37_0]; }))-imm_11;
            ({ long long __neo_array_index38_0 = (long long)(rd_10); if(__neo_array_index38_0 < 0 || __neo_array_index38_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index38_0] = result_12; });
            set_sub_flags(cpu,(*({ long long __neo_array_index39_0 = (long long)(rd_10); if(__neo_array_index39_0 < 0 || __neo_array_index39_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index39_0]; }))+imm_11,imm_11,result_12);
        }
                return;
    }
    if((op&0xfc00u)==0x4000u) {
        alu=(op>>6)&0xf;
        rs_13=(op>>3)&7;
        rd_14=op&7;
        a=(*({ long long __neo_array_index40_0 = (long long)(rd_14); if(__neo_array_index40_0 < 0 || __neo_array_index40_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index40_0]; }));
        b=(*({ long long __neo_array_index41_0 = (long long)(rs_13); if(__neo_array_index41_0 < 0 || __neo_array_index41_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index41_0]; }));
        result_15=0;
        switch (        alu) {
            case 0x0:
            result_15=a&b;
            ({ long long __neo_array_index42_0 = (long long)(rd_14); if(__neo_array_index42_0 < 0 || __neo_array_index42_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index42_0] = result_15; });
            set_nz(cpu,result_15);
            break;
            case 0x1:
            result_15=a^b;
            ({ long long __neo_array_index43_0 = (long long)(rd_14); if(__neo_array_index43_0 < 0 || __neo_array_index43_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index43_0] = result_15; });
            set_nz(cpu,result_15);
            break;
            case 0x2:
            result_15=((b>=32)?(0):(a<<b));
            if(b!=0&&b<=32) {
                cpu->apsr_c=(a>>(32-b))&1u;
            }
            ({ long long __neo_array_index44_0 = (long long)(rd_14); if(__neo_array_index44_0 < 0 || __neo_array_index44_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index44_0] = result_15; });
            set_nz(cpu,result_15);
            break;
            case 0x3:
            result_15=((b>=32)?(0):(a>>b));
            if(b!=0&&b<=32) {
                cpu->apsr_c=(a>>(b-1))&1u;
            }
            ({ long long __neo_array_index45_0 = (long long)(rd_14); if(__neo_array_index45_0 < 0 || __neo_array_index45_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index45_0] = result_15; });
            set_nz(cpu,result_15);
            break;
            case 0x4:
            result_15=((b>=32)?(((((a&0x80000000u))?(0xffffffffu):(0)))):((unsigned int )((int )a>>b)));
            if(b!=0&&b<=32) {
                cpu->apsr_c=(a>>(b-1))&1u;
            }
            ({ long long __neo_array_index46_0 = (long long)(rd_14); if(__neo_array_index46_0 < 0 || __neo_array_index46_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index46_0] = result_15; });
            set_nz(cpu,result_15);
            break;
            case 0x5:
            {
                carry=((cpu->apsr_c)?(1u):(0u));
                result_15=a+b+carry;
                ({ long long __neo_array_index47_0 = (long long)(rd_14); if(__neo_array_index47_0 < 0 || __neo_array_index47_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index47_0] = result_15; });
                set_add_flags(cpu,a,b+carry,result_15);
                break;
            }
            case 0x6:
            {
                borrow=((cpu->apsr_c)?(0u):(1u));
                result_15=a-b-borrow;
                ({ long long __neo_array_index48_0 = (long long)(rd_14); if(__neo_array_index48_0 < 0 || __neo_array_index48_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index48_0] = result_15; });
                set_sub_flags(cpu,a,b+borrow,result_15);
                break;
            }
            case 0x7:
            {
                rot=b&31u;
                result_15=((rot==0)?(a):(((a>>rot)|(a<<(32u-rot)))));
                if(rot!=0) {
                    cpu->apsr_c=(result_15>>31)&1u;
                }
                ({ long long __neo_array_index49_0 = (long long)(rd_14); if(__neo_array_index49_0 < 0 || __neo_array_index49_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index49_0] = result_15; });
                set_nz(cpu,result_15);
                break;
            }
            case 0x8:
            result_15=a&b;
            set_nz(cpu,result_15);
            break;
            case 0x9:
            result_15=0u-b;
            ({ long long __neo_array_index50_0 = (long long)(rd_14); if(__neo_array_index50_0 < 0 || __neo_array_index50_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index50_0] = result_15; });
            set_sub_flags(cpu,0,b,result_15);
            break;
            case 0xa:
            result_15=a-b;
            set_sub_flags(cpu,a,b,result_15);
            break;
            case 0xb:
            result_15=a+b;
            set_add_flags(cpu,a,b,result_15);
            break;
            case 0xc:
            result_15=a|b;
            ({ long long __neo_array_index51_0 = (long long)(rd_14); if(__neo_array_index51_0 < 0 || __neo_array_index51_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index51_0] = result_15; });
            set_nz(cpu,result_15);
            break;
            case 0xd:
            result_15=a*b;
            ({ long long __neo_array_index52_0 = (long long)(rd_14); if(__neo_array_index52_0 < 0 || __neo_array_index52_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index52_0] = result_15; });
            set_nz(cpu,result_15);
            break;
            case 0xe:
            result_15=a&~b;
            ({ long long __neo_array_index53_0 = (long long)(rd_14); if(__neo_array_index53_0 < 0 || __neo_array_index53_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index53_0] = result_15; });
            set_nz(cpu,result_15);
            break;
            case 0xf:
            result_15=~b;
            ({ long long __neo_array_index54_0 = (long long)(rd_14); if(__neo_array_index54_0 < 0 || __neo_array_index54_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index54_0] = result_15; });
            set_nz(cpu,result_15);
            break;
            default:
            unsupported(cpu,op,pc);
            break;
        }
                return;
    }
    if((op&0xfc00u)==0x4400u) {
        kind_16=(op>>8)&3;
        rs_17=((op>>3)&0xf);
        rd_18=(op&7)|((op>>4)&8);
        if(kind_16==0) {
            result_19=(*({ long long __neo_array_index55_0 = (long long)(rd_18); if(__neo_array_index55_0 < 0 || __neo_array_index55_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index55_0]; }))+(*({ long long __neo_array_index56_0 = (long long)(rs_17); if(__neo_array_index56_0 < 0 || __neo_array_index56_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index56_0]; }));
            write_reg(cpu,rd_18,result_19);
        }
        else if(kind_16==1) {
            result_19=(*({ long long __neo_array_index57_0 = (long long)(rd_18); if(__neo_array_index57_0 < 0 || __neo_array_index57_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index57_0]; }))-(*({ long long __neo_array_index58_0 = (long long)(rs_17); if(__neo_array_index58_0 < 0 || __neo_array_index58_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index58_0]; }));
            set_sub_flags(cpu,(*({ long long __neo_array_index59_0 = (long long)(rd_18); if(__neo_array_index59_0 < 0 || __neo_array_index59_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index59_0]; })),(*({ long long __neo_array_index60_0 = (long long)(rs_17); if(__neo_array_index60_0 < 0 || __neo_array_index60_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index60_0]; })),result_19);
        }
        else if(kind_16==2) {
            write_reg(cpu,rd_18,(*({ long long __neo_array_index61_0 = (long long)(rs_17); if(__neo_array_index61_0 < 0 || __neo_array_index61_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index61_0]; })));
        }
        else {
            if((op&0x0080u)!=0) {
                ({ long long __neo_array_index63_0 = (long long)(14); if(__neo_array_index63_0 < 0 || __neo_array_index63_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index63_0] = (*({ long long __neo_array_index62_0 = (long long)(15); if(__neo_array_index62_0 < 0 || __neo_array_index62_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index62_0]; }))|1u; });
            }
            ({ long long __neo_array_index65_0 = (long long)(15); if(__neo_array_index65_0 < 0 || __neo_array_index65_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index65_0] = (*({ long long __neo_array_index64_0 = (long long)(rs_17); if(__neo_array_index64_0 < 0 || __neo_array_index64_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index64_0]; }))&~1u; });
        }
                return;
    }
    if((op&0xf800u)==0x4800u) {
        rd_20=(op>>8)&7;
        addr=(read_pc(cpu)+((op&0xffu)<<2))&~3u;
        ({ long long __neo_array_index66_0 = (long long)(rd_20); if(__neo_array_index66_0 < 0 || __neo_array_index66_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index66_0] = mem_read32(cpu,addr); });
                return;
    }
    if((op&0xf200u)==0x5000u) {
        kind_21=(op>>9)&7;
        rm=(op>>6)&7;
        rn_22=(op>>3)&7;
        rt=op&7;
        addr_23=(*({ long long __neo_array_index67_0 = (long long)(rn_22); if(__neo_array_index67_0 < 0 || __neo_array_index67_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index67_0]; }))+(*({ long long __neo_array_index68_0 = (long long)(rm); if(__neo_array_index68_0 < 0 || __neo_array_index68_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index68_0]; }));
        if(kind_21==0) {
            mem_write32(cpu,addr_23,(*({ long long __neo_array_index69_0 = (long long)(rt); if(__neo_array_index69_0 < 0 || __neo_array_index69_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index69_0]; })));
        }
        else if(kind_21==1) {
            mem_write16(cpu,addr_23,(unsigned short int )(*({ long long __neo_array_index70_0 = (long long)(rt); if(__neo_array_index70_0 < 0 || __neo_array_index70_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index70_0]; })));
        }
        else if(kind_21==2) {
            mem_write8(cpu,addr_23,(unsigned char )(*({ long long __neo_array_index71_0 = (long long)(rt); if(__neo_array_index71_0 < 0 || __neo_array_index71_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index71_0]; })));
        }
        else if(kind_21==3) {
            ({ long long __neo_array_index72_0 = (long long)(rt); if(__neo_array_index72_0 < 0 || __neo_array_index72_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index72_0] = (unsigned int )(int )(char )mem_read8(cpu,addr_23); });
        }
        else if(kind_21==4) {
            ({ long long __neo_array_index73_0 = (long long)(rt); if(__neo_array_index73_0 < 0 || __neo_array_index73_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index73_0] = mem_read32(cpu,addr_23); });
        }
        else if(kind_21==5) {
            ({ long long __neo_array_index74_0 = (long long)(rt); if(__neo_array_index74_0 < 0 || __neo_array_index74_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index74_0] = mem_read16(cpu,addr_23); });
        }
        else if(kind_21==6) {
            ({ long long __neo_array_index75_0 = (long long)(rt); if(__neo_array_index75_0 < 0 || __neo_array_index75_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index75_0] = mem_read8(cpu,addr_23); });
        }
        else {
            ({ long long __neo_array_index76_0 = (long long)(rt); if(__neo_array_index76_0 < 0 || __neo_array_index76_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index76_0] = (unsigned int )(int )(short int )mem_read16(cpu,addr_23); });
        }
                return;
    }
    if((op&0xf000u)==0x6000u) {
        ldr=(op>>11)&1;
        imm_24=(op>>6)&0x1f;
        rn_25=(op>>3)&7;
        rt_26=op&7;
        addr_27=(*({ long long __neo_array_index77_0 = (long long)(rn_25); if(__neo_array_index77_0 < 0 || __neo_array_index77_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index77_0]; }))+((unsigned int )imm_24<<2);
        if(ldr) {
            ({ long long __neo_array_index78_0 = (long long)(rt_26); if(__neo_array_index78_0 < 0 || __neo_array_index78_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index78_0] = mem_read32(cpu,addr_27); });
        }
        else {
            mem_write32(cpu,addr_27,(*({ long long __neo_array_index79_0 = (long long)(rt_26); if(__neo_array_index79_0 < 0 || __neo_array_index79_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index79_0]; })));
        }
                return;
    }
    if((op&0xf000u)==0x7000u) {
        ldr_28=(op>>11)&1;
        imm_29=(op>>6)&0x1f;
        rn_30=(op>>3)&7;
        rt_31=op&7;
        addr_32=(*({ long long __neo_array_index80_0 = (long long)(rn_30); if(__neo_array_index80_0 < 0 || __neo_array_index80_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index80_0]; }))+(unsigned int )imm_29;
        if(ldr_28) {
            ({ long long __neo_array_index81_0 = (long long)(rt_31); if(__neo_array_index81_0 < 0 || __neo_array_index81_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index81_0] = mem_read8(cpu,addr_32); });
        }
        else {
            mem_write8(cpu,addr_32,(unsigned char )(*({ long long __neo_array_index82_0 = (long long)(rt_31); if(__neo_array_index82_0 < 0 || __neo_array_index82_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index82_0]; })));
        }
                return;
    }
    if((op&0xf000u)==0x8000u) {
        ldr_33=(op>>11)&1;
        imm_34=(op>>6)&0x1f;
        rn_35=(op>>3)&7;
        rt_36=op&7;
        addr_37=(*({ long long __neo_array_index83_0 = (long long)(rn_35); if(__neo_array_index83_0 < 0 || __neo_array_index83_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index83_0]; }))+((unsigned int )imm_34<<1);
        if(ldr_33) {
            ({ long long __neo_array_index84_0 = (long long)(rt_36); if(__neo_array_index84_0 < 0 || __neo_array_index84_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index84_0] = mem_read16(cpu,addr_37); });
        }
        else {
            mem_write16(cpu,addr_37,(unsigned short int )(*({ long long __neo_array_index85_0 = (long long)(rt_36); if(__neo_array_index85_0 < 0 || __neo_array_index85_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index85_0]; })));
        }
                return;
    }
    if((op&0xf000u)==0x9000u) {
        ldr_38=(op>>11)&1;
        rt_39=(op>>8)&7;
        addr_40=(*({ long long __neo_array_index86_0 = (long long)(13); if(__neo_array_index86_0 < 0 || __neo_array_index86_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index86_0]; }))+((op&0xffu)<<2);
        if(ldr_38) {
            ({ long long __neo_array_index87_0 = (long long)(rt_39); if(__neo_array_index87_0 < 0 || __neo_array_index87_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index87_0] = mem_read32(cpu,addr_40); });
        }
        else {
            mem_write32(cpu,addr_40,(*({ long long __neo_array_index88_0 = (long long)(rt_39); if(__neo_array_index88_0 < 0 || __neo_array_index88_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index88_0]; })));
        }
                return;
    }
    if((op&0xf000u)==0xa000u) {
        rd_41=(op>>8)&7;
        imm_42=(op&0xffu)<<2;
        if((op&0x0800u)!=0) {
            ({ long long __neo_array_index90_0 = (long long)(rd_41); if(__neo_array_index90_0 < 0 || __neo_array_index90_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index90_0] = (*({ long long __neo_array_index89_0 = (long long)(13); if(__neo_array_index89_0 < 0 || __neo_array_index89_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index89_0]; }))+imm_42; });
        }
        else {
            ({ long long __neo_array_index91_0 = (long long)(rd_41); if(__neo_array_index91_0 < 0 || __neo_array_index91_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index91_0] = read_pc(cpu)+imm_42; });
        }
                return;
    }
    if((op&0xff00u)==0xb000u) {
        imm_43=(op&0x7fu)<<2;
        if((op&0x0080u)!=0) {
            (*({ long long __neo_array_index92_0 = (long long)(13); if(__neo_array_index92_0 < 0 || __neo_array_index92_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index92_0]; }))-=imm_43;
        }
        else {
            (*({ long long __neo_array_index93_0 = (long long)(13); if(__neo_array_index93_0 < 0 || __neo_array_index93_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index93_0]; }))+=imm_43;
        }
                return;
    }
    if((op&0xff00u)==0xb200u) {
        rn_44=(op>>3)&7;
        rd_45=op&7;
        kind_46=(op>>6)&3;
        if(kind_46==0) {
            ({ long long __neo_array_index95_0 = (long long)(rd_45); if(__neo_array_index95_0 < 0 || __neo_array_index95_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index95_0] = (unsigned int )(int )(short int )((*({ long long __neo_array_index94_0 = (long long)(rn_44); if(__neo_array_index94_0 < 0 || __neo_array_index94_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index94_0]; }))&0xffffu); });
        }
        else if(kind_46==1) {
            ({ long long __neo_array_index97_0 = (long long)(rd_45); if(__neo_array_index97_0 < 0 || __neo_array_index97_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index97_0] = (unsigned int )(int )(char )((*({ long long __neo_array_index96_0 = (long long)(rn_44); if(__neo_array_index96_0 < 0 || __neo_array_index96_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index96_0]; }))&0xffu); });
        }
        else if(kind_46==2) {
            ({ long long __neo_array_index99_0 = (long long)(rd_45); if(__neo_array_index99_0 < 0 || __neo_array_index99_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index99_0] = (*({ long long __neo_array_index98_0 = (long long)(rn_44); if(__neo_array_index98_0 < 0 || __neo_array_index98_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index98_0]; }))&0xffffu; });
        }
        else {
            ({ long long __neo_array_index101_0 = (long long)(rd_45); if(__neo_array_index101_0 < 0 || __neo_array_index101_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index101_0] = (*({ long long __neo_array_index100_0 = (long long)(rn_44); if(__neo_array_index100_0 < 0 || __neo_array_index100_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index100_0]; }))&0xffu; });
        }
                return;
    }
    if((op&0xfe00u)==0xb400u) {
        list=op&0xffu;
        if((op&0x0100u)!=0) {
            push32(cpu,(*({ long long __neo_array_index102_0 = (long long)(14); if(__neo_array_index102_0 < 0 || __neo_array_index102_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index102_0]; })));
        }
        for(i=7        ;i>=0;i--){
            if((list&(1u<<i))!=0) {
                push32(cpu,(*({ long long __neo_array_index103_0 = (long long)(i); if(__neo_array_index103_0 < 0 || __neo_array_index103_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index103_0]; })));
            }
        }
                return;
    }
    if((op&0xfe00u)==0xbc00u) {
        list_47=op&0xffu;
        for(i_48=0        ;i_48<8;i_48++){
            if((list_47&(1u<<i_48))!=0) {
                ({ long long __neo_array_index104_0 = (long long)(i_48); if(__neo_array_index104_0 < 0 || __neo_array_index104_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index104_0] = pop32(cpu); });
            }
        }
        if((op&0x0100u)!=0) {
            ({ long long __neo_array_index105_0 = (long long)(15); if(__neo_array_index105_0 < 0 || __neo_array_index105_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index105_0] = pop32(cpu)&~1u; });
        }
                return;
    }
    if((op&0xf500u)==0xb100u) {
        rn_49=op&7;
        imm_50=(((op>>9)&1u)<<6)|(((op>>3)&0x1fu)<<1);
        nonzero=(op&0x0800u)!=0;
        take=((nonzero)?((*({ long long __neo_array_index106_0 = (long long)(rn_49); if(__neo_array_index106_0 < 0 || __neo_array_index106_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index106_0]; }))!=0):((*({ long long __neo_array_index107_0 = (long long)(rn_49); if(__neo_array_index107_0 < 0 || __neo_array_index107_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index107_0]; }))==0));
        if(take) {
            (*({ long long __neo_array_index108_0 = (long long)(15); if(__neo_array_index108_0 < 0 || __neo_array_index108_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index108_0]; }))+=imm_50+2u;
        }
                return;
    }
    if((op&0xf000u)==0xc000u) {
        ldm=(op>>11)&1;
        rn_51=(op>>8)&7;
        list_52=op&0xffu;
        addr_53=(*({ long long __neo_array_index109_0 = (long long)(rn_51); if(__neo_array_index109_0 < 0 || __neo_array_index109_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index109_0]; }));
        for(i_54=0        ;i_54<8;i_54++){
            if((list_52&(1u<<i_54))!=0) {
                if(ldm) {
                    ({ long long __neo_array_index110_0 = (long long)(i_54); if(__neo_array_index110_0 < 0 || __neo_array_index110_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index110_0] = mem_read32(cpu,addr_53); });
                }
                else {
                    mem_write32(cpu,addr_53,(*({ long long __neo_array_index111_0 = (long long)(i_54); if(__neo_array_index111_0 < 0 || __neo_array_index111_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index111_0]; })));
                }
                addr_53+=4u;
            }
        }
        ({ long long __neo_array_index112_0 = (long long)(rn_51); if(__neo_array_index112_0 < 0 || __neo_array_index112_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index112_0] = addr_53; });
                return;
    }
    if((op&0xf000u)==0xd000u) {
        cond=(op>>8)&0xfu;
        if(cond==0xfu) {
            cpu->exit_code=(*({ long long __neo_array_index113_0 = (long long)(0); if(__neo_array_index113_0 < 0 || __neo_array_index113_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index113_0]; }));
            cpu->halt=(_Bool)1;
                        return;
        }
        if(cond_pass(cpu,cond)) {
            ({ long long __neo_array_index115_0 = (long long)(15); if(__neo_array_index115_0 < 0 || __neo_array_index115_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index115_0] = (unsigned int )((int )((*({ long long __neo_array_index114_0 = (long long)(15); if(__neo_array_index114_0 < 0 || __neo_array_index114_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index114_0]; }))+2u)+sx((op&0xffu)<<1,9)); });
        }
                return;
    }
    if((op&0xf800u)==0xe000u) {
        ({ long long __neo_array_index117_0 = (long long)(15); if(__neo_array_index117_0 < 0 || __neo_array_index117_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index117_0] = (unsigned int )((int )((*({ long long __neo_array_index116_0 = (long long)(15); if(__neo_array_index116_0 < 0 || __neo_array_index116_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index116_0]; }))+2u)+sx((op&0x7ffu)<<1,12)); });
                return;
    }
    if((op&0xf800u)==0xf000u||(op&0xf800u)==0xf800u) {
        op2=mem_read16(cpu,(*({ long long __neo_array_index118_0 = (long long)(15); if(__neo_array_index118_0 < 0 || __neo_array_index118_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index118_0]; })));
        if((op2&0xd000u)==0xd000u) {
            (*({ long long __neo_array_index119_0 = (long long)(15); if(__neo_array_index119_0 < 0 || __neo_array_index119_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index119_0]; }))+=2u;
            s=(op>>10)&1u;
            j1=(op2>>13)&1u;
            j2=(op2>>11)&1u;
            i1=(~(j1^s))&1u;
            i2=(~(j2^s))&1u;
            imm_55=(s<<24)|(i1<<23)|(i2<<22)|((op&0x03ffu)<<12)|((op2&0x07ffu)<<1);
            off=sx(imm_55,25);
            ({ long long __neo_array_index121_0 = (long long)(14); if(__neo_array_index121_0 < 0 || __neo_array_index121_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index121_0] = (*({ long long __neo_array_index120_0 = (long long)(15); if(__neo_array_index120_0 < 0 || __neo_array_index120_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index120_0]; }))|1u; });
            ({ long long __neo_array_index123_0 = (long long)(15); if(__neo_array_index123_0 < 0 || __neo_array_index123_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index123_0] = (unsigned int )((int )(*({ long long __neo_array_index122_0 = (long long)(15); if(__neo_array_index122_0 < 0 || __neo_array_index122_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index122_0]; }))+off); });
                        return;
        }
    }
    unsupported(cpu,op,pc);
}

static int load_elf32(const char* path)
{
    struct _IO_FILE*  fp  ;
    long size;
    unsigned char*  buf  ;
    unsigned int  phoff  ;
    unsigned short int  phentsize  ;
    unsigned short int  phnum  ;
    unsigned short int  i  ;
    unsigned char*  ph  ;
    unsigned int  type  ;
    unsigned int  offset  ;
    unsigned int  paddr  ;
    unsigned int  filesz  ;
    unsigned int  memsz  ;
    unsigned char*  dst  ;
    memset(&fp, 0, sizeof(fp));
    memset(&size, 0, sizeof(size));
    memset(&buf, 0, sizeof(buf));
    memset(&phoff, 0, sizeof(phoff));
    memset(&phentsize, 0, sizeof(phentsize));
    memset(&phnum, 0, sizeof(phnum));
    memset(&i, 0, sizeof(i));
    memset(&ph, 0, sizeof(ph));
    memset(&type, 0, sizeof(type));
    memset(&offset, 0, sizeof(offset));
    memset(&paddr, 0, sizeof(paddr));
    memset(&filesz, 0, sizeof(filesz));
    memset(&memsz, 0, sizeof(memsz));
    memset(&dst, 0, sizeof(dst));
    fp=fopen(path,"rb");
    if(fp==0) {
        perror(path);
                return 1;
    }
    if(fseek(fp,0,2)!=0) {
        perror("fseek");
        fclose(fp);
                return 1;
    }
    size=ftell(fp);
    if(size<=0) {
        perror("ftell");
        fclose(fp);
                return 1;
    }
    rewind(fp);
    buf=(unsigned char* )malloc((unsigned long )size);
    if(buf==0) {
        fclose(fp);
                return 1;
    }
    if(fread(buf,1,(unsigned long )size,fp)!=(unsigned long )size) {
        perror("fread");
        free(buf);
        fclose(fp);
                return 1;
    }
    fclose(fp);
    if(size<52||buf[0]!=0x7f||buf[1]!=69||buf[2]!=76||buf[3]!=70||buf[4]!=1||buf[5]!=1) {
        fprintf(stderr,"not a little-endian ELF32 file\n");
        free(buf);
                return 1;
    }
    if(rd16(buf+18)!=40) {
        fprintf(stderr,"ELF machine is not ARM\n");
        free(buf);
                return 1;
    }
    phoff=rd32(buf+28);
    phentsize=rd16(buf+42);
    phnum=rd16(buf+44);
    for(i=0    ;i<phnum;i++){
        ph=buf+phoff+(unsigned int )i*phentsize;
        type=rd32(ph+0);
        if(type!=1) {
            continue;
        }
        offset=rd32(ph+4);
        paddr=rd32(ph+12);
        filesz=rd32(ph+16);
        memsz=rd32(ph+20);
        dst=addr_ptr(paddr);
        if(dst==0||offset+filesz>(unsigned int )size) {
            fprintf(stderr,"cannot load segment at 0x%08x\n",paddr);
            free(buf);
                        return 1;
        }
        memset(dst,0,memsz);
        memcpy(dst,buf+offset,filesz);
    }
    free(buf);
        return 0;
}

static void cpu_reset(struct anonymous_typeX20*  cpu  )
{
    memset(cpu,0,sizeof(*cpu));
    ({ long long __neo_array_index124_0 = (long long)(13); if(__neo_array_index124_0 < 0 || __neo_array_index124_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index124_0] = mem_read32(cpu,0x10000000u); });
    ({ long long __neo_array_index125_0 = (long long)(15); if(__neo_array_index125_0 < 0 || __neo_array_index125_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index125_0] = mem_read32(cpu,0x10000000u+4u)&~1u; });
}

static void usage(const char* argv0)
{
    fprintf(stderr,"usage: %s [--trace] [--max-steps N] utkernel.elf\n",argv0);
}

int main(int argc, char** argv)
{
    unsigned long  int  max_steps  ;
    _Bool trace;
    struct anonymous_typeX20  cpu  ;
    int i;
    memset(&max_steps, 0, sizeof(max_steps));
    memset(&trace, 0, sizeof(trace));
    memset(&cpu, 0, sizeof(cpu));
    memset(&i, 0, sizeof(i));
    const char* image=0;
    max_steps=20000000u;
    trace=(_Bool)0;
    for(i=1    ;i<argc;i++){
        if(strcmp(argv[i],"--trace")==0) {
            trace=(_Bool)1;
        }
        else if(strcmp(argv[i],"--max-steps")==0&&i+1<argc) {
            i++;
            max_steps=(unsigned long  int )strtoull(argv[i],0,0);
        }
        else {
            image=argv[i];
        }
    }
    if(image==0) {
        usage(argv[0]);
                return 2;
    }
    memset(g_flash,0xff,sizeof(g_flash));
    memset(g_sram,0,sizeof(g_sram));
    if(load_elf32(image)!=0) {
                return 1;
    }
    cpu_reset(&cpu);
    cpu.trace=trace;
    while(!cpu.halt /* uho */&&cpu.steps /* uho */<max_steps) {
        step_thumb(&cpu);
    }
    if(!cpu.halt /* uho */) {
        fprintf(stderr,"EMU step limit reached at pc=0x%08x\n",(*({ long long __neo_array_index126_0 = (long long)(15); if(__neo_array_index126_0 < 0 || __neo_array_index126_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu.r /* uho */[__neo_array_index126_0]; })));
        cpu.exit_code=124;
    }
    printf("EMU exit: %u\n",cpu.exit_code /* uho */);
        return (int)cpu.exit_code /* uho */;
}

