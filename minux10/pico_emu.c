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
    unsigned int  systick_csr  ;
    unsigned int  systick_rvr  ;
    unsigned int  nvic_enable  ;
    unsigned int  nvic_pending  ;
    unsigned char  nvic_priority[32]  ;
    unsigned int  vector_table  ;
    unsigned int  active_exception  ;
    _Bool halt;
    _Bool trace;
};

/// variable definition ///
extern struct _IO_FILE*  stdin  ;
extern struct _IO_FILE*  stdout  ;
extern struct _IO_FILE*  stderr  ;
static unsigned char  g_flash[(2u*1024u*1024u)]  ;
static unsigned char  g_sram[(264u*1024u)]  ;
static unsigned int  g_apb_regs[(0x40070000u-0x40000000u) / 4u]  ;
static unsigned int  g_dma_regs[0x1000u / 4u]  ;
static unsigned char  g_usb_dpram[0x1000u]  ;
static unsigned int  g_usb_regs[0x1000u / 4u]  ;
static unsigned int  g_pio0_regs[0x1000u / 4u]  ;
static unsigned int  g_pio1_regs[0x1000u / 4u]  ;
static unsigned int  g_sio_gpio_out  ;
static unsigned int  g_sio_gpio_oe  ;
static unsigned int  g_sio_gpio_input  ;
static unsigned int  g_timer_alarm[4]  ;
static unsigned int  g_timer_armed  ;
static unsigned int  g_watchdog_load  ;
static unsigned int  g_watchdog_count  ;
static unsigned int  g_watchdog_reason  ;
static unsigned int  g_adc_sample  =2048u;
static unsigned int  g_spi0_data  ;
static unsigned int  g_spi1_data  ;
static unsigned int  g_i2c0_data  ;
static unsigned int  g_i2c1_data  ;
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
static void wr32(unsigned char*  p  , unsigned int  value  );
static _Bool in_range(unsigned int  addr  , unsigned int  base  , unsigned int  size  );
static unsigned int  apply_atomic_alias(unsigned int  old  , unsigned int  value  , unsigned int  alias  );
static unsigned int  timer_value(struct anonymous_typeX20*  cpu  );
static void dma_trigger(struct anonymous_typeX20*  cpu  , unsigned int  channel  );
static unsigned int  peripheral_read32(struct anonymous_typeX20*  cpu  , unsigned int  addr  );
static void peripheral_write32(struct anonymous_typeX20*  cpu  , unsigned int  addr  , unsigned int  value  );
static void peripheral_tick(struct anonymous_typeX20*  cpu  );
static _Bool is_systick_addr(unsigned int  addr  );
static unsigned int  systick_read32(struct anonymous_typeX20*  cpu  , unsigned int  addr  );
static void systick_write32(struct anonymous_typeX20*  cpu  , unsigned int  addr  , unsigned int  value  );
static _Bool is_system_control_addr(unsigned int  addr  );
static int selected_pending_irq(struct anonymous_typeX20*  cpu  );
static unsigned int  system_control_read32(struct anonymous_typeX20*  cpu  , unsigned int  addr  );
static void system_control_write32(struct anonymous_typeX20*  cpu  , unsigned int  addr  , unsigned int  value  );
static void system_control_write8(struct anonymous_typeX20*  cpu  , unsigned int  addr  , unsigned char  value  );
static int  sx(unsigned int  value  , int bits);
static unsigned char*  addr_ptr(unsigned int  addr  );
static _Bool is_peripheral_addr(unsigned int  addr  );
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
static unsigned int  current_xpsr(struct anonymous_typeX20*  cpu  );
static void exception_enter(struct anonymous_typeX20*  cpu  , unsigned int  exception_number  );
static void exception_return(struct anonymous_typeX20*  cpu  );
static _Bool service_pending_interrupt(struct anonymous_typeX20*  cpu  );
static void unsupported(struct anonymous_typeX20*  cpu  , unsigned short int  op  , unsigned int  pc  );
static void step_thumb(struct anonymous_typeX20*  cpu  );
static int load_elf32(const char* path);
static void cpu_reset(struct anonymous_typeX20*  cpu  );
static void self_expect(const char* name, _Bool ok, int* failures);
static int peripheral_self_test();
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

static void wr32(unsigned char*  p  , unsigned int  value  )
{
    p[0]=(unsigned char )value;
    p[1]=(unsigned char )(value>>8);
    p[2]=(unsigned char )(value>>16);
    p[3]=(unsigned char )(value>>24);
}

static _Bool in_range(unsigned int  addr  , unsigned int  base  , unsigned int  size  )
{
        return addr>=base&&addr<base+size;
}

static unsigned int  apply_atomic_alias(unsigned int  old  , unsigned int  value  , unsigned int  alias  )
{
    if(alias==0x1000u) {
                return old^value;
    }
    if(alias==0x2000u) {
                return old|value;
    }
    if(alias==0x3000u) {
                return old&~value;
    }
        return value;
}

static unsigned int  timer_value(struct anonymous_typeX20*  cpu  )
{
        return (unsigned int )cpu->steps;
}

static void dma_trigger(struct anonymous_typeX20*  cpu  , unsigned int  channel  )
{
    unsigned int  base  ;
    unsigned int  read_addr  ;
    unsigned int  write_addr  ;
    unsigned int  count  ;
    unsigned int  ctrl  ;
    unsigned int  size_code  ;
    unsigned int  transfer_size  ;
    _Bool increment_read;
    _Bool increment_write;
    unsigned int  i  ;
    unsigned int  value  ;
    memset(&base, 0, sizeof(base));
    memset(&read_addr, 0, sizeof(read_addr));
    memset(&write_addr, 0, sizeof(write_addr));
    memset(&count, 0, sizeof(count));
    memset(&ctrl, 0, sizeof(ctrl));
    memset(&size_code, 0, sizeof(size_code));
    memset(&transfer_size, 0, sizeof(transfer_size));
    memset(&increment_read, 0, sizeof(increment_read));
    memset(&increment_write, 0, sizeof(increment_write));
    memset(&i, 0, sizeof(i));
    memset(&value, 0, sizeof(value));
    base=({ __typeof__(4u) __neo_div_right1 = (4u); if(__neo_div_right1 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (channel*0x40u) / __neo_div_right1; });
    read_addr=(*({ long long __neo_array_index1_0 = (long long)(base+0u); if(__neo_array_index1_0 < 0 || __neo_array_index1_0 >= (long long)(({ __typeof__(4u) __neo_div_right2 = (4u); if(__neo_div_right2 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (0x1000u) / __neo_div_right2; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_dma_regs[__neo_array_index1_0]; }));
    write_addr=(*({ long long __neo_array_index2_0 = (long long)(base+1u); if(__neo_array_index2_0 < 0 || __neo_array_index2_0 >= (long long)(({ __typeof__(4u) __neo_div_right3 = (4u); if(__neo_div_right3 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (0x1000u) / __neo_div_right3; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_dma_regs[__neo_array_index2_0]; }));
    count=(*({ long long __neo_array_index3_0 = (long long)(base+2u); if(__neo_array_index3_0 < 0 || __neo_array_index3_0 >= (long long)(({ __typeof__(4u) __neo_div_right4 = (4u); if(__neo_div_right4 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (0x1000u) / __neo_div_right4; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_dma_regs[__neo_array_index3_0]; }));
    ctrl=(*({ long long __neo_array_index4_0 = (long long)(base+3u); if(__neo_array_index4_0 < 0 || __neo_array_index4_0 >= (long long)(({ __typeof__(4u) __neo_div_right5 = (4u); if(__neo_div_right5 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (0x1000u) / __neo_div_right5; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_dma_regs[__neo_array_index4_0]; }));
    size_code=(ctrl>>2)&3u;
    transfer_size=((size_code==0)?(1u):((((size_code==1)?(2u):(4u)))));
    increment_read=(ctrl&(1u<<4))!=0;
    increment_write=(ctrl&(1u<<5))!=0;
    if((ctrl&1u)==0||count>4096u) {
                return;
    }
    for(i=0    ;i<count;i++){
        if(transfer_size==1u) {
            value=mem_read8(cpu,read_addr);
            mem_write8(cpu,write_addr,(unsigned char )value);
        }
        else {
            value=mem_read32(cpu,read_addr);
            mem_write32(cpu,write_addr,value);
        }
        if(increment_read) {
            read_addr+=transfer_size;
        }
        if(increment_write) {
            write_addr+=transfer_size;
        }
    }
    ({ long long __neo_array_index5_0 = (long long)(base+0u); if(__neo_array_index5_0 < 0 || __neo_array_index5_0 >= (long long)(({ __typeof__(4u) __neo_div_right6 = (4u); if(__neo_div_right6 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (0x1000u) / __neo_div_right6; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } g_dma_regs[__neo_array_index5_0] = read_addr; });
    ({ long long __neo_array_index6_0 = (long long)(base+1u); if(__neo_array_index6_0 < 0 || __neo_array_index6_0 >= (long long)(({ __typeof__(4u) __neo_div_right7 = (4u); if(__neo_div_right7 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (0x1000u) / __neo_div_right7; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } g_dma_regs[__neo_array_index6_0] = write_addr; });
    ({ long long __neo_array_index7_0 = (long long)(base+2u); if(__neo_array_index7_0 < 0 || __neo_array_index7_0 >= (long long)(({ __typeof__(4u) __neo_div_right8 = (4u); if(__neo_div_right8 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (0x1000u) / __neo_div_right8; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } g_dma_regs[__neo_array_index7_0] = 0; });
    ({ long long __neo_array_index8_0 = (long long)(base+3u); if(__neo_array_index8_0 < 0 || __neo_array_index8_0 >= (long long)(({ __typeof__(4u) __neo_div_right9 = (4u); if(__neo_div_right9 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (0x1000u) / __neo_div_right9; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } g_dma_regs[__neo_array_index8_0] = ctrl&~(1u<<24); });
}

static unsigned int  peripheral_read32(struct anonymous_typeX20*  cpu  , unsigned int  addr  )
{
    unsigned int  aligned  ;
    unsigned int  offset  ;
    unsigned int  offset_0  ;
    unsigned int  base  ;
    unsigned int*  regs  ;
    unsigned int  offset_1  ;
    unsigned int  alias  ;
    unsigned int  physical  ;
    unsigned int  offset_2  ;
    unsigned int  intr  ;
    unsigned int  inte  ;
    unsigned int  intf  ;
    memset(&aligned, 0, sizeof(aligned));
    memset(&offset, 0, sizeof(offset));
    memset(&offset_0, 0, sizeof(offset_0));
    memset(&base, 0, sizeof(base));
    memset(&regs, 0, sizeof(regs));
    memset(&offset_1, 0, sizeof(offset_1));
    memset(&alias, 0, sizeof(alias));
    memset(&physical, 0, sizeof(physical));
    memset(&offset_2, 0, sizeof(offset_2));
    memset(&intr, 0, sizeof(intr));
    memset(&inte, 0, sizeof(inte));
    memset(&intf, 0, sizeof(intf));
    aligned=addr&~3u;
    if(in_range(aligned,0xd0000000u,0x1000u)) {
        offset=aligned-0xd0000000u;
        if(offset==0x000u) {
                        return 0;
        }
        if(offset==0x004u) {
                        return g_sio_gpio_input|(g_sio_gpio_out&g_sio_gpio_oe);
        }
        if(offset==0x010u) {
                        return g_sio_gpio_out;
        }
        if(offset==0x020u) {
                        return g_sio_gpio_oe;
        }
        if(offset==0x050u) {
                        return 2u;
        }
        if(offset==0x05cu) {
                        return 0xffffffffu;
        }
        if(offset>=0x100u&&offset<0x180u) {
                        return 1u;
        }
                return 0;
    }
    if(in_range(aligned,0x50000000u,0x1000u)) {
                return (*({ long long __neo_array_index9_0 = (long long)(({ __typeof__(4u) __neo_div_right10 = (4u); if(__neo_div_right10 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((aligned-0x50000000u)) / __neo_div_right10; })); if(__neo_array_index9_0 < 0 || __neo_array_index9_0 >= (long long)(({ __typeof__(4u) __neo_div_right11 = (4u); if(__neo_div_right11 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (0x1000u) / __neo_div_right11; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_dma_regs[__neo_array_index9_0]; }));
    }
    if(in_range(aligned,0x50100000u,0x1000u)) {
        offset_0=aligned-0x50100000u;
                return rd32(&g_usb_dpram[offset_0]);
    }
    if(in_range(aligned,0x50110000u,0x1000u)) {
                return (*({ long long __neo_array_index11_0 = (long long)(({ __typeof__(4u) __neo_div_right12 = (4u); if(__neo_div_right12 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((aligned-0x50110000u)) / __neo_div_right12; })); if(__neo_array_index11_0 < 0 || __neo_array_index11_0 >= (long long)(({ __typeof__(4u) __neo_div_right13 = (4u); if(__neo_div_right13 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (0x1000u) / __neo_div_right13; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_usb_regs[__neo_array_index11_0]; }));
    }
    if(in_range(aligned,0x50200000u,0x1000u)||in_range(aligned,0x50300000u,0x1000u)) {
        base=((aligned>=0x50300000u)?(0x50300000u):(0x50200000u));
        regs=((base==0x50200000u)?(g_pio0_regs):(g_pio1_regs));
        offset_1=aligned-base;
        if(offset_1==0x004u) {
                        return 0x0f000f00u;
        }
                return regs[({ __typeof__(4u) __neo_div_right14 = (4u); if(__neo_div_right14 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (offset_1) / __neo_div_right14; })];
    }
    if(in_range(aligned,0x40000000u,0x40070000u-0x40000000u)) {
        alias=aligned&0x3000u;
        physical=aligned&~0x3000u;
        offset_2=physical-0x40000000u;
        (void)alias;
        if(physical==0x40054000u+0x00u||physical==0x40054000u+0x08u) {
                        return 0;
        }
        if(physical==0x40054000u+0x04u||physical==0x40054000u+0x0cu||physical==0x40054000u+0x28u) {
                        return timer_value(cpu);
        }
        if(physical==0x40054000u+0x20u) {
                        return g_timer_armed;
        }
        if(physical==0x40054000u+0x40u) {
            intr=(*({ long long __neo_array_index12_0 = (long long)(({ __typeof__(4u) __neo_div_right15 = (4u); if(__neo_div_right15 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40054000u+0x34u-0x40000000u)) / __neo_div_right15; })); if(__neo_array_index12_0 < 0 || __neo_array_index12_0 >= (long long)(({ __typeof__(4u) __neo_div_right16 = (4u); if(__neo_div_right16 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40070000u-0x40000000u)) / __neo_div_right16; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_apb_regs[__neo_array_index12_0]; }));
            inte=(*({ long long __neo_array_index13_0 = (long long)(({ __typeof__(4u) __neo_div_right17 = (4u); if(__neo_div_right17 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40054000u+0x38u-0x40000000u)) / __neo_div_right17; })); if(__neo_array_index13_0 < 0 || __neo_array_index13_0 >= (long long)(({ __typeof__(4u) __neo_div_right18 = (4u); if(__neo_div_right18 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40070000u-0x40000000u)) / __neo_div_right18; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_apb_regs[__neo_array_index13_0]; }));
            intf=(*({ long long __neo_array_index14_0 = (long long)(({ __typeof__(4u) __neo_div_right19 = (4u); if(__neo_div_right19 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40054000u+0x3cu-0x40000000u)) / __neo_div_right19; })); if(__neo_array_index14_0 < 0 || __neo_array_index14_0 >= (long long)(({ __typeof__(4u) __neo_div_right20 = (4u); if(__neo_div_right20 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40070000u-0x40000000u)) / __neo_div_right20; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_apb_regs[__neo_array_index14_0]; }));
                        return (intr&inte)|intf;
        }
        if(physical==0x40058000u+0x04u) {
                        return g_watchdog_count;
        }
        if(physical==0x40058000u+0x08u) {
                        return g_watchdog_reason;
        }
        if(physical==0x4004c000u+0x04u) {
                        return g_adc_sample&0xfffu;
        }
        if(physical==0x4004c000u+0x08u) {
                        return (1u<<8)|1u;
        }
        if(physical==0x4004c000u+0x0cu) {
                        return g_adc_sample&0xfffu;
        }
        if(physical==0x4003c000u+0x08u) {
                        return g_spi0_data;
        }
        if(physical==0x40040000u+0x08u) {
                        return g_spi1_data;
        }
        if(physical==0x4003c000u+0x0cu||physical==0x40040000u+0x0cu) {
                        return 7u;
        }
        if(physical==0x40044000u+0x10u) {
                        return g_i2c0_data;
        }
        if(physical==0x40048000u+0x10u) {
                        return g_i2c1_data;
        }
        if(physical==0x40044000u+0x70u||physical==0x40048000u+0x70u) {
                        return 6u;
        }
        if(physical==0x40044000u+0x78u||physical==0x40048000u+0x78u) {
                        return 1u;
        }
        if(physical==0x4000c000u+0x08u) {
                        return 0x01ffffffu;
        }
        if(physical==0x40024004u) {
                        return 0x80000000u;
        }
        if(physical==0x40028000u||physical==0x4002c000u) {
                        return 0x80000000u;
        }
                return (*({ long long __neo_array_index15_0 = (long long)(({ __typeof__(4u) __neo_div_right21 = (4u); if(__neo_div_right21 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (offset_2) / __neo_div_right21; })); if(__neo_array_index15_0 < 0 || __neo_array_index15_0 >= (long long)(({ __typeof__(4u) __neo_div_right22 = (4u); if(__neo_div_right22 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40070000u-0x40000000u)) / __neo_div_right22; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_apb_regs[__neo_array_index15_0]; }));
    }
        return 0;
}

static void peripheral_write32(struct anonymous_typeX20*  cpu  , unsigned int  addr  , unsigned int  value  )
{
    unsigned int  aligned  ;
    unsigned int  offset  ;
    unsigned int  index  ;
    unsigned int  offset_3  ;
    unsigned int  base  ;
    unsigned int*  regs  ;
    unsigned int  offset_4  ;
    unsigned int  alias  ;
    unsigned int  physical  ;
    unsigned int  offset_5  ;
    unsigned int  old  ;
    unsigned int  alarm  ;
    memset(&aligned, 0, sizeof(aligned));
    memset(&offset, 0, sizeof(offset));
    memset(&index, 0, sizeof(index));
    memset(&offset_3, 0, sizeof(offset_3));
    memset(&base, 0, sizeof(base));
    memset(&regs, 0, sizeof(regs));
    memset(&offset_4, 0, sizeof(offset_4));
    memset(&alias, 0, sizeof(alias));
    memset(&physical, 0, sizeof(physical));
    memset(&offset_5, 0, sizeof(offset_5));
    memset(&old, 0, sizeof(old));
    memset(&alarm, 0, sizeof(alarm));
    aligned=addr&~3u;
    if(in_range(aligned,0xd0000000u,0x1000u)) {
        offset=aligned-0xd0000000u;
        if(offset==0x010u) {
            g_sio_gpio_out=value&0x3fffffffu;
        }
        else if(offset==0x014u) {
            g_sio_gpio_out|=value&0x3fffffffu;
        }
        else if(offset==0x018u) {
            g_sio_gpio_out&=~(value&0x3fffffffu);
        }
        else if(offset==0x01cu) {
            g_sio_gpio_out^=value&0x3fffffffu;
        }
        else if(offset==0x020u) {
            g_sio_gpio_oe=value&0x3fffffffu;
        }
        else if(offset==0x024u) {
            g_sio_gpio_oe|=value&0x3fffffffu;
        }
        else if(offset==0x028u) {
            g_sio_gpio_oe&=~(value&0x3fffffffu);
        }
        else if(offset==0x02cu) {
            g_sio_gpio_oe^=value&0x3fffffffu;
        }
                return;
    }
    if(in_range(aligned,0x50000000u,0x1000u)) {
        index=({ __typeof__(4u) __neo_div_right23 = (4u); if(__neo_div_right23 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((aligned-0x50000000u)) / __neo_div_right23; });
        ({ long long __neo_array_index16_0 = (long long)(index); if(__neo_array_index16_0 < 0 || __neo_array_index16_0 >= (long long)(({ __typeof__(4u) __neo_div_right24 = (4u); if(__neo_div_right24 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (0x1000u) / __neo_div_right24; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } g_dma_regs[__neo_array_index16_0] = value; });
        if((aligned-0x50000000u)<12u*0x40u&&((aligned-0x50000000u)&0x3fu)==0x0cu) {
            dma_trigger(cpu,({ __typeof__(0x40u) __neo_div_right25 = (0x40u); if(__neo_div_right25 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((aligned-0x50000000u)) / __neo_div_right25; }));
        }
                return;
    }
    if(in_range(aligned,0x50100000u,0x1000u)) {
        offset_3=aligned-0x50100000u;
        ({ long long __neo_array_index17_0 = (long long)(offset_3); if(__neo_array_index17_0 < 0 || __neo_array_index17_0 >= (long long)(0x1000u)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } g_usb_dpram[__neo_array_index17_0] = (unsigned char )value; });
        ({ long long __neo_array_index18_0 = (long long)(offset_3+1u); if(__neo_array_index18_0 < 0 || __neo_array_index18_0 >= (long long)(0x1000u)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } g_usb_dpram[__neo_array_index18_0] = (unsigned char )(value>>8); });
        ({ long long __neo_array_index19_0 = (long long)(offset_3+2u); if(__neo_array_index19_0 < 0 || __neo_array_index19_0 >= (long long)(0x1000u)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } g_usb_dpram[__neo_array_index19_0] = (unsigned char )(value>>16); });
        ({ long long __neo_array_index20_0 = (long long)(offset_3+3u); if(__neo_array_index20_0 < 0 || __neo_array_index20_0 >= (long long)(0x1000u)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } g_usb_dpram[__neo_array_index20_0] = (unsigned char )(value>>24); });
                return;
    }
    if(in_range(aligned,0x50110000u,0x1000u)) {
        ({ long long __neo_array_index21_0 = (long long)(({ __typeof__(4u) __neo_div_right26 = (4u); if(__neo_div_right26 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((aligned-0x50110000u)) / __neo_div_right26; })); if(__neo_array_index21_0 < 0 || __neo_array_index21_0 >= (long long)(({ __typeof__(4u) __neo_div_right27 = (4u); if(__neo_div_right27 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (0x1000u) / __neo_div_right27; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } g_usb_regs[__neo_array_index21_0] = value; });
                return;
    }
    if(in_range(aligned,0x50200000u,0x1000u)||in_range(aligned,0x50300000u,0x1000u)) {
        base=((aligned>=0x50300000u)?(0x50300000u):(0x50200000u));
        regs=((base==0x50200000u)?(g_pio0_regs):(g_pio1_regs));
        offset_4=aligned-base;
        regs[({ __typeof__(4u) __neo_div_right28 = (4u); if(__neo_div_right28 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (offset_4) / __neo_div_right28; })]=value;
        if(offset_4>=0x010u&&offset_4<0x020u) {
            regs[({ __typeof__(4u) __neo_div_right29 = (4u); if(__neo_div_right29 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((offset_4+0x10u)) / __neo_div_right29; })]=value;
        }
                return;
    }
    if(in_range(aligned,0x40000000u,0x40070000u-0x40000000u)) {
        alias=aligned&0x3000u;
        physical=aligned&~0x3000u;
        offset_5=physical-0x40000000u;
        old=(*({ long long __neo_array_index22_0 = (long long)(({ __typeof__(4u) __neo_div_right30 = (4u); if(__neo_div_right30 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (offset_5) / __neo_div_right30; })); if(__neo_array_index22_0 < 0 || __neo_array_index22_0 >= (long long)(({ __typeof__(4u) __neo_div_right31 = (4u); if(__neo_div_right31 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40070000u-0x40000000u)) / __neo_div_right31; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_apb_regs[__neo_array_index22_0]; }));
        if(physical==0x40054000u+0x34u&&alias==0) {
            ({ long long __neo_array_index23_0 = (long long)(({ __typeof__(4u) __neo_div_right32 = (4u); if(__neo_div_right32 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (offset_5) / __neo_div_right32; })); if(__neo_array_index23_0 < 0 || __neo_array_index23_0 >= (long long)(({ __typeof__(4u) __neo_div_right33 = (4u); if(__neo_div_right33 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40070000u-0x40000000u)) / __neo_div_right33; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } g_apb_regs[__neo_array_index23_0] = old&~value; });
                        return;
        }
        ({ long long __neo_array_index24_0 = (long long)(({ __typeof__(4u) __neo_div_right34 = (4u); if(__neo_div_right34 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (offset_5) / __neo_div_right34; })); if(__neo_array_index24_0 < 0 || __neo_array_index24_0 >= (long long)(({ __typeof__(4u) __neo_div_right35 = (4u); if(__neo_div_right35 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40070000u-0x40000000u)) / __neo_div_right35; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } g_apb_regs[__neo_array_index24_0] = apply_atomic_alias(old,value,alias); });
        if(physical>=0x40054000u+0x10u&&physical<=0x40054000u+0x1cu) {
            alarm=({ __typeof__(4u) __neo_div_right36 = (4u); if(__neo_div_right36 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((physical-0x40054000u-0x10u)) / __neo_div_right36; });
            ({ long long __neo_array_index25_0 = (long long)(alarm); if(__neo_array_index25_0 < 0 || __neo_array_index25_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } g_timer_alarm[__neo_array_index25_0] = value; });
            g_timer_armed|=1u<<alarm;
        }
        else if(physical==0x40054000u+0x20u) {
            g_timer_armed&=~value;
        }
        else if(physical==0x40058000u+0x04u) {
            g_watchdog_load=value&0x00ffffffu;
            g_watchdog_count=g_watchdog_load;
        }
        else if(physical==0x4003c000u+0x08u) {
            g_spi0_data=value;
        }
        else if(physical==0x40040000u+0x08u) {
            g_spi1_data=value;
        }
        else if(physical==0x40044000u+0x10u) {
            g_i2c0_data=value&0xffu;
        }
        else if(physical==0x40048000u+0x10u) {
            g_i2c1_data=value&0xffu;
        }
        else if(physical==0x4004c000u+0x00u&&(value&4u)!=0) {
            (*({ long long __neo_array_index26_0 = (long long)(({ __typeof__(4u) __neo_div_right37 = (4u); if(__neo_div_right37 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (offset_5) / __neo_div_right37; })); if(__neo_array_index26_0 < 0 || __neo_array_index26_0 >= (long long)(({ __typeof__(4u) __neo_div_right38 = (4u); if(__neo_div_right38 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40070000u-0x40000000u)) / __neo_div_right38; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_apb_regs[__neo_array_index26_0]; }))|=1u<<8;
        }
    }
}

static void peripheral_tick(struct anonymous_typeX20*  cpu  )
{
    unsigned int  now  ;
    int i;
    unsigned int  inte  ;
    unsigned int  watchdog_ctrl  ;
    unsigned int  pwm_enable  ;
    int slice;
    unsigned int  ctr_index  ;
    memset(&now, 0, sizeof(now));
    memset(&i, 0, sizeof(i));
    memset(&inte, 0, sizeof(inte));
    memset(&watchdog_ctrl, 0, sizeof(watchdog_ctrl));
    memset(&pwm_enable, 0, sizeof(pwm_enable));
    memset(&slice, 0, sizeof(slice));
    memset(&ctr_index, 0, sizeof(ctr_index));
    now=timer_value(cpu);
    for(i=0    ;i<4;i++){
        if((g_timer_armed&(1u<<i))!=0&&now>=(*({ long long __neo_array_index27_0 = (long long)(i); if(__neo_array_index27_0 < 0 || __neo_array_index27_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_timer_alarm[__neo_array_index27_0]; }))) {
            g_timer_armed&=~(1u<<i);
            (*({ long long __neo_array_index28_0 = (long long)(({ __typeof__(4u) __neo_div_right39 = (4u); if(__neo_div_right39 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40054000u+0x34u-0x40000000u)) / __neo_div_right39; })); if(__neo_array_index28_0 < 0 || __neo_array_index28_0 >= (long long)(({ __typeof__(4u) __neo_div_right40 = (4u); if(__neo_div_right40 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40070000u-0x40000000u)) / __neo_div_right40; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_apb_regs[__neo_array_index28_0]; }))|=1u<<i;
            inte=(*({ long long __neo_array_index29_0 = (long long)(({ __typeof__(4u) __neo_div_right41 = (4u); if(__neo_div_right41 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40054000u+0x38u-0x40000000u)) / __neo_div_right41; })); if(__neo_array_index29_0 < 0 || __neo_array_index29_0 >= (long long)(({ __typeof__(4u) __neo_div_right42 = (4u); if(__neo_div_right42 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40070000u-0x40000000u)) / __neo_div_right42; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_apb_regs[__neo_array_index29_0]; }));
            if((inte&(1u<<i))!=0) {
                cpu->nvic_pending|=1u<<i;
            }
        }
    }
    watchdog_ctrl=(*({ long long __neo_array_index30_0 = (long long)(({ __typeof__(4u) __neo_div_right43 = (4u); if(__neo_div_right43 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40058000u-0x40000000u)) / __neo_div_right43; })); if(__neo_array_index30_0 < 0 || __neo_array_index30_0 >= (long long)(({ __typeof__(4u) __neo_div_right44 = (4u); if(__neo_div_right44 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40070000u-0x40000000u)) / __neo_div_right44; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_apb_regs[__neo_array_index30_0]; }));
    if((watchdog_ctrl&(1u<<30))!=0&&g_watchdog_count!=0) {
        g_watchdog_count--;
        if(g_watchdog_count==0) {
            g_watchdog_reason=1u;
        }
    }
    pwm_enable=(*({ long long __neo_array_index31_0 = (long long)(({ __typeof__(4u) __neo_div_right45 = (4u); if(__neo_div_right45 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40050000u+0xa0u-0x40000000u)) / __neo_div_right45; })); if(__neo_array_index31_0 < 0 || __neo_array_index31_0 >= (long long)(({ __typeof__(4u) __neo_div_right46 = (4u); if(__neo_div_right46 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40070000u-0x40000000u)) / __neo_div_right46; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_apb_regs[__neo_array_index31_0]; }));
    for(slice=0    ;slice<8;slice++){
        if((pwm_enable&(1u<<slice))!=0) {
            ctr_index=({ __typeof__(4u) __neo_div_right47 = (4u); if(__neo_div_right47 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40050000u+(unsigned int )slice*0x14u+0x08u-0x40000000u)) / __neo_div_right47; });
            (*({ long long __neo_array_index32_0 = (long long)(ctr_index); if(__neo_array_index32_0 < 0 || __neo_array_index32_0 >= (long long)(({ __typeof__(4u) __neo_div_right48 = (4u); if(__neo_div_right48 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((0x40070000u-0x40000000u)) / __neo_div_right48; }))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_apb_regs[__neo_array_index32_0]; }))++;
        }
    }
}

static _Bool is_systick_addr(unsigned int  addr  )
{
        return addr>=0xe000e010u&&addr<0xe000e018u+4u;
}

static unsigned int  systick_read32(struct anonymous_typeX20*  cpu  , unsigned int  addr  )
{
    unsigned int  reg  ;
    memset(&reg, 0, sizeof(reg));
    reg=addr&~3u;
    if(reg==0xe000e010u) {
                return cpu->systick_csr;
    }
    if(reg==0xe000e014u) {
                return cpu->systick_rvr;
    }
    if(reg==0xe000e018u) {
                return cpu->systick;
    }
        return 0;
}

static void systick_write32(struct anonymous_typeX20*  cpu  , unsigned int  addr  , unsigned int  value  )
{
    unsigned int  reg  ;
    memset(&reg, 0, sizeof(reg));
    reg=addr&~3u;
    if(reg==0xe000e010u) {
        cpu->systick_csr=value;
    }
    else if(reg==0xe000e014u) {
        cpu->systick_rvr=value;
    }
    else if(reg==0xe000e018u) {
        cpu->systick=value;
    }
}

static _Bool is_system_control_addr(unsigned int  addr  )
{
        return in_range(addr,0xe000e000u,0x1000u);
}

static int selected_pending_irq(struct anonymous_typeX20*  cpu  )
{
    unsigned int  ready  ;
    int selected;
    unsigned char  selected_priority  ;
    int i;
    memset(&ready, 0, sizeof(ready));
    memset(&selected, 0, sizeof(selected));
    memset(&selected_priority, 0, sizeof(selected_priority));
    memset(&i, 0, sizeof(i));
    ready=cpu->nvic_pending&cpu->nvic_enable;
    selected=-1;
    selected_priority=0xffu;
    for(i=0    ;i<32;i++){
        if((ready&(1u<<i))!=0&&(selected<0||(*({ long long __neo_array_index33_0 = (long long)(i); if(__neo_array_index33_0 < 0 || __neo_array_index33_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->nvic_priority[__neo_array_index33_0]; }))<selected_priority)) {
            selected=i;
            selected_priority=(*({ long long __neo_array_index34_0 = (long long)(i); if(__neo_array_index34_0 < 0 || __neo_array_index34_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->nvic_priority[__neo_array_index34_0]; }));
        }
    }
        return selected;
}

static unsigned int  system_control_read32(struct anonymous_typeX20*  cpu  , unsigned int  addr  )
{
    unsigned int  reg  ;
    unsigned int  first  ;
    unsigned int  vector_pending  ;
    int selected;
    memset(&reg, 0, sizeof(reg));
    memset(&first, 0, sizeof(first));
    memset(&vector_pending, 0, sizeof(vector_pending));
    memset(&selected, 0, sizeof(selected));
    reg=addr&~3u;
    if(is_systick_addr(reg)) {
                return systick_read32(cpu,reg);
    }
    if(reg==0xe000e100u||reg==0xe000e180u) {
                return cpu->nvic_enable;
    }
    if(reg==0xe000e200u||reg==0xe000e280u) {
                return cpu->nvic_pending;
    }
    if(reg>=0xe000e400u&&reg<0xe000e400u+32u) {
        first=reg-0xe000e400u;
                return (unsigned int )(*({ long long __neo_array_index35_0 = (long long)(first); if(__neo_array_index35_0 < 0 || __neo_array_index35_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->nvic_priority[__neo_array_index35_0]; }))|((unsigned int )(*({ long long __neo_array_index36_0 = (long long)(first+1u); if(__neo_array_index36_0 < 0 || __neo_array_index36_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->nvic_priority[__neo_array_index36_0]; }))<<8)|((unsigned int )(*({ long long __neo_array_index37_0 = (long long)(first+2u); if(__neo_array_index37_0 < 0 || __neo_array_index37_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->nvic_priority[__neo_array_index37_0]; }))<<16)|((unsigned int )(*({ long long __neo_array_index38_0 = (long long)(first+3u); if(__neo_array_index38_0 < 0 || __neo_array_index38_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->nvic_priority[__neo_array_index38_0]; }))<<24);
    }
    if(reg==0xe000ed04u) {
        vector_pending=0;
        selected=selected_pending_irq(cpu);
        if(selected>=0) {
            vector_pending=16u+(unsigned int )selected;
        }
                return (cpu->active_exception&0x1ffu)|(vector_pending<<12);
    }
    if(reg==0xe000ed08u) {
                return cpu->vector_table;
    }
        return 0;
}

static void system_control_write32(struct anonymous_typeX20*  cpu  , unsigned int  addr  , unsigned int  value  )
{
    unsigned int  reg  ;
    unsigned int  first  ;
    memset(&reg, 0, sizeof(reg));
    memset(&first, 0, sizeof(first));
    reg=addr&~3u;
    if(is_systick_addr(reg)) {
        systick_write32(cpu,reg,value);
    }
    else if(reg==0xe000e100u) {
        cpu->nvic_enable|=value;
    }
    else if(reg==0xe000e180u) {
        cpu->nvic_enable&=~value;
    }
    else if(reg==0xe000e200u) {
        cpu->nvic_pending|=value;
    }
    else if(reg==0xe000e280u) {
        cpu->nvic_pending&=~value;
    }
    else if(reg>=0xe000e400u&&reg<0xe000e400u+32u) {
        first=reg-0xe000e400u;
        ({ long long __neo_array_index39_0 = (long long)(first); if(__neo_array_index39_0 < 0 || __neo_array_index39_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->nvic_priority[__neo_array_index39_0] = (unsigned char )value; });
        ({ long long __neo_array_index40_0 = (long long)(first+1u); if(__neo_array_index40_0 < 0 || __neo_array_index40_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->nvic_priority[__neo_array_index40_0] = (unsigned char )(value>>8); });
        ({ long long __neo_array_index41_0 = (long long)(first+2u); if(__neo_array_index41_0 < 0 || __neo_array_index41_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->nvic_priority[__neo_array_index41_0] = (unsigned char )(value>>16); });
        ({ long long __neo_array_index42_0 = (long long)(first+3u); if(__neo_array_index42_0 < 0 || __neo_array_index42_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->nvic_priority[__neo_array_index42_0] = (unsigned char )(value>>24); });
    }
    else if(reg==0xe000ed08u) {
        cpu->vector_table=value&0xffffff80u;
    }
}

static void system_control_write8(struct anonymous_typeX20*  cpu  , unsigned int  addr  , unsigned char  value  )
{
    unsigned int  reg  ;
    unsigned int  shift  ;
    unsigned int  old  ;
    unsigned int  mask  ;
    memset(&reg, 0, sizeof(reg));
    memset(&shift, 0, sizeof(shift));
    memset(&old, 0, sizeof(old));
    memset(&mask, 0, sizeof(mask));
    reg=addr&~3u;
    shift=(addr&3u)*8u;
    if(reg==0xe000e100u||reg==0xe000e180u||reg==0xe000e200u||reg==0xe000e280u) {
        system_control_write32(cpu,reg,(unsigned int )value<<shift);
    }
    else {
        old=system_control_read32(cpu,reg);
        mask=0xffu<<shift;
        system_control_write32(cpu,reg,(old&~mask)|((unsigned int )value<<shift));
    }
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

static _Bool is_peripheral_addr(unsigned int  addr  )
{
        return in_range(addr,0x40000000u,0x40070000u-0x40000000u)||in_range(addr,0x50000000u,0x1000u)||in_range(addr,0x50100000u,0x1000u)||in_range(addr,0x50110000u,0x1000u)||in_range(addr,0x50200000u,0x1000u)||in_range(addr,0x50300000u,0x1000u)||in_range(addr,0xd0000000u,0x1000u);
}

static unsigned char  mem_read8(struct anonymous_typeX20*  cpu  , unsigned int  addr  )
{
    unsigned char*  p  ;
    unsigned int  value  ;
    unsigned int  value_6  ;
    memset(&p, 0, sizeof(p));
    memset(&value, 0, sizeof(value));
    memset(&value_6, 0, sizeof(value_6));
    p=addr_ptr(addr);
    if(p!=0) {
                return *p;
    }
    if(is_system_control_addr(addr)) {
        value=system_control_read32(cpu,addr);
                return (unsigned char )((value>>((addr&3u)*8u))&0xffu);
    }
    if(is_peripheral_addr(addr)) {
        value_6=peripheral_read32(cpu,addr);
                return (unsigned char )((value_6>>((addr&3u)*8u))&0xffu);
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
    unsigned int  aligned  ;
    unsigned int  shift  ;
    unsigned int  old  ;
    unsigned int  mask  ;
    memset(&p, 0, sizeof(p));
    memset(&aligned, 0, sizeof(aligned));
    memset(&shift, 0, sizeof(shift));
    memset(&old, 0, sizeof(old));
    memset(&mask, 0, sizeof(mask));
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
    if(is_system_control_addr(addr)) {
        system_control_write8(cpu,addr,value);
                return;
    }
    if(is_peripheral_addr(addr)) {
        aligned=addr&~3u;
        shift=(addr&3u)*8u;
        old=peripheral_read32(cpu,aligned);
        mask=0xffu<<shift;
        peripheral_write32(cpu,aligned,(old&~mask)|((unsigned int )value<<shift));
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
    if(is_system_control_addr(addr)) {
        system_control_write32(cpu,addr,value);
                return;
    }
    if(is_peripheral_addr(addr)) {
        peripheral_write32(cpu,addr,value);
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
        ({ long long __neo_array_index45_0 = (long long)(15); if(__neo_array_index45_0 < 0 || __neo_array_index45_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index45_0] = value&~1u; });
    }
    else {
        ({ long long __neo_array_index46_0 = (long long)(reg); if(__neo_array_index46_0 < 0 || __neo_array_index46_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index46_0] = value; });
    }
}

static unsigned int  read_pc(struct anonymous_typeX20*  cpu  )
{
        return ((*({ long long __neo_array_index47_0 = (long long)(15); if(__neo_array_index47_0 < 0 || __neo_array_index47_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index47_0]; }))+2u)&~3u;
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
    (*({ long long __neo_array_index48_0 = (long long)(13); if(__neo_array_index48_0 < 0 || __neo_array_index48_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index48_0]; }))-=4u;
    mem_write32(cpu,(*({ long long __neo_array_index49_0 = (long long)(13); if(__neo_array_index49_0 < 0 || __neo_array_index49_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index49_0]; })),value);
}

static unsigned int  pop32(struct anonymous_typeX20*  cpu  )
{
    unsigned int  value  ;
    memset(&value, 0, sizeof(value));
    value=mem_read32(cpu,(*({ long long __neo_array_index50_0 = (long long)(13); if(__neo_array_index50_0 < 0 || __neo_array_index50_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index50_0]; })));
    (*({ long long __neo_array_index51_0 = (long long)(13); if(__neo_array_index51_0 < 0 || __neo_array_index51_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index51_0]; }))+=4u;
        return value;
}

static unsigned int  current_xpsr(struct anonymous_typeX20*  cpu  )
{
        return 0x01000000u|(cpu->apsr_n<<31)|(cpu->apsr_z<<30)|(cpu->apsr_c<<29)|(cpu->apsr_v<<28)|(cpu->active_exception&0x1ffu);
}

static void exception_enter(struct anonymous_typeX20*  cpu  , unsigned int  exception_number  )
{
    unsigned int  sp  ;
    memset(&sp, 0, sizeof(sp));
    sp=(*({ long long __neo_array_index52_0 = (long long)(13); if(__neo_array_index52_0 < 0 || __neo_array_index52_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index52_0]; }))-32u;
    mem_write32(cpu,sp+0u,(*({ long long __neo_array_index53_0 = (long long)(0); if(__neo_array_index53_0 < 0 || __neo_array_index53_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index53_0]; })));
    mem_write32(cpu,sp+4u,(*({ long long __neo_array_index54_0 = (long long)(1); if(__neo_array_index54_0 < 0 || __neo_array_index54_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index54_0]; })));
    mem_write32(cpu,sp+8u,(*({ long long __neo_array_index55_0 = (long long)(2); if(__neo_array_index55_0 < 0 || __neo_array_index55_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index55_0]; })));
    mem_write32(cpu,sp+12u,(*({ long long __neo_array_index56_0 = (long long)(3); if(__neo_array_index56_0 < 0 || __neo_array_index56_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index56_0]; })));
    mem_write32(cpu,sp+16u,(*({ long long __neo_array_index57_0 = (long long)(12); if(__neo_array_index57_0 < 0 || __neo_array_index57_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index57_0]; })));
    mem_write32(cpu,sp+20u,(*({ long long __neo_array_index58_0 = (long long)(14); if(__neo_array_index58_0 < 0 || __neo_array_index58_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index58_0]; })));
    mem_write32(cpu,sp+24u,(*({ long long __neo_array_index59_0 = (long long)(15); if(__neo_array_index59_0 < 0 || __neo_array_index59_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index59_0]; })));
    mem_write32(cpu,sp+28u,current_xpsr(cpu));
    ({ long long __neo_array_index60_0 = (long long)(13); if(__neo_array_index60_0 < 0 || __neo_array_index60_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index60_0] = sp; });
    ({ long long __neo_array_index61_0 = (long long)(14); if(__neo_array_index61_0 < 0 || __neo_array_index61_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index61_0] = 0xfffffff9u; });
    cpu->active_exception=exception_number;
    ({ long long __neo_array_index62_0 = (long long)(15); if(__neo_array_index62_0 < 0 || __neo_array_index62_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index62_0] = mem_read32(cpu,cpu->vector_table+exception_number*4u)&~1u; });
}

static void exception_return(struct anonymous_typeX20*  cpu  )
{
    unsigned int  sp  ;
    unsigned int  xpsr  ;
    memset(&sp, 0, sizeof(sp));
    memset(&xpsr, 0, sizeof(xpsr));
    sp=(*({ long long __neo_array_index63_0 = (long long)(13); if(__neo_array_index63_0 < 0 || __neo_array_index63_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index63_0]; }));
    ({ long long __neo_array_index64_0 = (long long)(0); if(__neo_array_index64_0 < 0 || __neo_array_index64_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index64_0] = mem_read32(cpu,sp+0u); });
    ({ long long __neo_array_index65_0 = (long long)(1); if(__neo_array_index65_0 < 0 || __neo_array_index65_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index65_0] = mem_read32(cpu,sp+4u); });
    ({ long long __neo_array_index66_0 = (long long)(2); if(__neo_array_index66_0 < 0 || __neo_array_index66_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index66_0] = mem_read32(cpu,sp+8u); });
    ({ long long __neo_array_index67_0 = (long long)(3); if(__neo_array_index67_0 < 0 || __neo_array_index67_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index67_0] = mem_read32(cpu,sp+12u); });
    ({ long long __neo_array_index68_0 = (long long)(12); if(__neo_array_index68_0 < 0 || __neo_array_index68_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index68_0] = mem_read32(cpu,sp+16u); });
    ({ long long __neo_array_index69_0 = (long long)(14); if(__neo_array_index69_0 < 0 || __neo_array_index69_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index69_0] = mem_read32(cpu,sp+20u); });
    ({ long long __neo_array_index70_0 = (long long)(15); if(__neo_array_index70_0 < 0 || __neo_array_index70_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index70_0] = mem_read32(cpu,sp+24u)&~1u; });
    xpsr=mem_read32(cpu,sp+28u);
    ({ long long __neo_array_index71_0 = (long long)(13); if(__neo_array_index71_0 < 0 || __neo_array_index71_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index71_0] = sp+32u; });
    cpu->apsr_n=(xpsr>>31)&1u;
    cpu->apsr_z=(xpsr>>30)&1u;
    cpu->apsr_c=(xpsr>>29)&1u;
    cpu->apsr_v=(xpsr>>28)&1u;
    cpu->active_exception=xpsr&0x1ffu;
}

static _Bool service_pending_interrupt(struct anonymous_typeX20*  cpu  )
{
    int selected;
    memset(&selected, 0, sizeof(selected));
    if(cpu->active_exception!=0) {
                return (_Bool)0;
    }
    selected=selected_pending_irq(cpu);
    if(selected<0) {
                return (_Bool)0;
    }
    cpu->nvic_pending&=~(1u<<selected);
    exception_enter(cpu,16u+(unsigned int )selected);
        return (_Bool)1;
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
    int imm_7;
    int rs_8;
    int rd_9;
    unsigned int  value_10  ;
    int imm_11;
    int rs_12;
    int rd_13;
    unsigned int  value_14  ;
    int imm_mode;
    int sub;
    int rn;
    int rs_15;
    int rd_16;
    unsigned int  rhs  ;
    unsigned int  lhs  ;
    unsigned int  result  ;
    int kind;
    int rd_17;
    unsigned int  imm_18  ;
    unsigned int  result_19  ;
    int alu;
    int rs_20;
    int rd_21;
    unsigned int  a  ;
    unsigned int  b  ;
    unsigned int  result_22  ;
    unsigned int  carry  ;
    unsigned int  borrow  ;
    unsigned int  rot  ;
    int kind_23;
    int rs_24;
    int rd_25;
    unsigned int  result_26  ;
    unsigned int  target  ;
    int rd_27;
    unsigned int  addr  ;
    int kind_28;
    int rm;
    int rn_29;
    int rt;
    unsigned int  addr_30  ;
    int ldr;
    int imm_31;
    int rn_32;
    int rt_33;
    unsigned int  addr_34  ;
    int ldr_35;
    int imm_36;
    int rn_37;
    int rt_38;
    unsigned int  addr_39  ;
    int ldr_40;
    int imm_41;
    int rn_42;
    int rt_43;
    unsigned int  addr_44  ;
    int ldr_45;
    int rt_46;
    unsigned int  addr_47  ;
    int rd_48;
    unsigned int  imm_49  ;
    unsigned int  imm_50  ;
    int rn_51;
    int rd_52;
    int kind_53;
    unsigned int  list  ;
    int i;
    unsigned int  list_54  ;
    int i_55;
    int rn_56;
    unsigned int  imm_57  ;
    _Bool nonzero;
    _Bool take;
    int ldm;
    int rn_58;
    unsigned int  list_59  ;
    unsigned int  addr_60  ;
    int i_61;
    unsigned int  cond  ;
    unsigned short int  op2  ;
    unsigned int  s  ;
    unsigned int  j1  ;
    unsigned int  j2  ;
    unsigned int  i1  ;
    unsigned int  i2  ;
    unsigned int  imm_62  ;
    int  off  ;
    memset(&pc, 0, sizeof(pc));
    memset(&op, 0, sizeof(op));
    memset(&imm, 0, sizeof(imm));
    memset(&rs, 0, sizeof(rs));
    memset(&rd, 0, sizeof(rd));
    memset(&value, 0, sizeof(value));
    memset(&imm_7, 0, sizeof(imm_7));
    memset(&rs_8, 0, sizeof(rs_8));
    memset(&rd_9, 0, sizeof(rd_9));
    memset(&value_10, 0, sizeof(value_10));
    memset(&imm_11, 0, sizeof(imm_11));
    memset(&rs_12, 0, sizeof(rs_12));
    memset(&rd_13, 0, sizeof(rd_13));
    memset(&value_14, 0, sizeof(value_14));
    memset(&imm_mode, 0, sizeof(imm_mode));
    memset(&sub, 0, sizeof(sub));
    memset(&rn, 0, sizeof(rn));
    memset(&rs_15, 0, sizeof(rs_15));
    memset(&rd_16, 0, sizeof(rd_16));
    memset(&rhs, 0, sizeof(rhs));
    memset(&lhs, 0, sizeof(lhs));
    memset(&result, 0, sizeof(result));
    memset(&kind, 0, sizeof(kind));
    memset(&rd_17, 0, sizeof(rd_17));
    memset(&imm_18, 0, sizeof(imm_18));
    memset(&result_19, 0, sizeof(result_19));
    memset(&alu, 0, sizeof(alu));
    memset(&rs_20, 0, sizeof(rs_20));
    memset(&rd_21, 0, sizeof(rd_21));
    memset(&a, 0, sizeof(a));
    memset(&b, 0, sizeof(b));
    memset(&result_22, 0, sizeof(result_22));
    memset(&carry, 0, sizeof(carry));
    memset(&borrow, 0, sizeof(borrow));
    memset(&rot, 0, sizeof(rot));
    memset(&kind_23, 0, sizeof(kind_23));
    memset(&rs_24, 0, sizeof(rs_24));
    memset(&rd_25, 0, sizeof(rd_25));
    memset(&result_26, 0, sizeof(result_26));
    memset(&target, 0, sizeof(target));
    memset(&rd_27, 0, sizeof(rd_27));
    memset(&addr, 0, sizeof(addr));
    memset(&kind_28, 0, sizeof(kind_28));
    memset(&rm, 0, sizeof(rm));
    memset(&rn_29, 0, sizeof(rn_29));
    memset(&rt, 0, sizeof(rt));
    memset(&addr_30, 0, sizeof(addr_30));
    memset(&ldr, 0, sizeof(ldr));
    memset(&imm_31, 0, sizeof(imm_31));
    memset(&rn_32, 0, sizeof(rn_32));
    memset(&rt_33, 0, sizeof(rt_33));
    memset(&addr_34, 0, sizeof(addr_34));
    memset(&ldr_35, 0, sizeof(ldr_35));
    memset(&imm_36, 0, sizeof(imm_36));
    memset(&rn_37, 0, sizeof(rn_37));
    memset(&rt_38, 0, sizeof(rt_38));
    memset(&addr_39, 0, sizeof(addr_39));
    memset(&ldr_40, 0, sizeof(ldr_40));
    memset(&imm_41, 0, sizeof(imm_41));
    memset(&rn_42, 0, sizeof(rn_42));
    memset(&rt_43, 0, sizeof(rt_43));
    memset(&addr_44, 0, sizeof(addr_44));
    memset(&ldr_45, 0, sizeof(ldr_45));
    memset(&rt_46, 0, sizeof(rt_46));
    memset(&addr_47, 0, sizeof(addr_47));
    memset(&rd_48, 0, sizeof(rd_48));
    memset(&imm_49, 0, sizeof(imm_49));
    memset(&imm_50, 0, sizeof(imm_50));
    memset(&rn_51, 0, sizeof(rn_51));
    memset(&rd_52, 0, sizeof(rd_52));
    memset(&kind_53, 0, sizeof(kind_53));
    memset(&list, 0, sizeof(list));
    memset(&i, 0, sizeof(i));
    memset(&list_54, 0, sizeof(list_54));
    memset(&i_55, 0, sizeof(i_55));
    memset(&rn_56, 0, sizeof(rn_56));
    memset(&imm_57, 0, sizeof(imm_57));
    memset(&nonzero, 0, sizeof(nonzero));
    memset(&take, 0, sizeof(take));
    memset(&ldm, 0, sizeof(ldm));
    memset(&rn_58, 0, sizeof(rn_58));
    memset(&list_59, 0, sizeof(list_59));
    memset(&addr_60, 0, sizeof(addr_60));
    memset(&i_61, 0, sizeof(i_61));
    memset(&cond, 0, sizeof(cond));
    memset(&op2, 0, sizeof(op2));
    memset(&s, 0, sizeof(s));
    memset(&j1, 0, sizeof(j1));
    memset(&j2, 0, sizeof(j2));
    memset(&i1, 0, sizeof(i1));
    memset(&i2, 0, sizeof(i2));
    memset(&imm_62, 0, sizeof(imm_62));
    memset(&off, 0, sizeof(off));
    pc=(*({ long long __neo_array_index72_0 = (long long)(15); if(__neo_array_index72_0 < 0 || __neo_array_index72_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index72_0]; }));
    op=mem_read16(cpu,pc);
    ({ long long __neo_array_index73_0 = (long long)(15); if(__neo_array_index73_0 < 0 || __neo_array_index73_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index73_0] = pc+2u; });
    cpu->steps++;
    cpu->systick++;
    peripheral_tick(cpu);
    if(cpu->trace) {
        fprintf(stderr,"%08x  %04x  r0=%08x r1=%08x r3=%08x sp=%08x z=%u\n",pc,op,(*({ long long __neo_array_index74_0 = (long long)(0); if(__neo_array_index74_0 < 0 || __neo_array_index74_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index74_0]; })),(*({ long long __neo_array_index75_0 = (long long)(1); if(__neo_array_index75_0 < 0 || __neo_array_index75_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index75_0]; })),(*({ long long __neo_array_index76_0 = (long long)(3); if(__neo_array_index76_0 < 0 || __neo_array_index76_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index76_0]; })),(*({ long long __neo_array_index77_0 = (long long)(13); if(__neo_array_index77_0 < 0 || __neo_array_index77_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index77_0]; })),cpu->apsr_z);
    }
    if((op&0xf800u)==0x0000u) {
        imm=(op>>6)&0x1f;
        rs=(op>>3)&7;
        rd=op&7;
        value=(*({ long long __neo_array_index78_0 = (long long)(rs); if(__neo_array_index78_0 < 0 || __neo_array_index78_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index78_0]; }))<<imm;
        ({ long long __neo_array_index79_0 = (long long)(rd); if(__neo_array_index79_0 < 0 || __neo_array_index79_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index79_0] = value; });
        set_nz(cpu,value);
        if(imm!=0) {
            cpu->apsr_c=((*({ long long __neo_array_index80_0 = (long long)(rs); if(__neo_array_index80_0 < 0 || __neo_array_index80_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index80_0]; }))>>(32-imm))&1u;
        }
                return;
    }
    if((op&0xf800u)==0x0800u) {
        imm_7=(op>>6)&0x1f;
        rs_8=(op>>3)&7;
        rd_9=op&7;
        if(imm_7==0) {
            value_10=0;
            cpu->apsr_c=((*({ long long __neo_array_index81_0 = (long long)(rs_8); if(__neo_array_index81_0 < 0 || __neo_array_index81_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index81_0]; }))>>31)&1u;
        }
        else {
            value_10=(*({ long long __neo_array_index82_0 = (long long)(rs_8); if(__neo_array_index82_0 < 0 || __neo_array_index82_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index82_0]; }))>>imm_7;
            cpu->apsr_c=((*({ long long __neo_array_index83_0 = (long long)(rs_8); if(__neo_array_index83_0 < 0 || __neo_array_index83_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index83_0]; }))>>(imm_7-1))&1u;
        }
        ({ long long __neo_array_index84_0 = (long long)(rd_9); if(__neo_array_index84_0 < 0 || __neo_array_index84_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index84_0] = value_10; });
        set_nz(cpu,value_10);
                return;
    }
    if((op&0xf800u)==0x1000u) {
        imm_11=(op>>6)&0x1f;
        rs_12=(op>>3)&7;
        rd_13=op&7;
        if(imm_11==0) {
            value_14=((((*({ long long __neo_array_index85_0 = (long long)(rs_12); if(__neo_array_index85_0 < 0 || __neo_array_index85_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index85_0]; }))&0x80000000u))?(0xffffffffu):(0));
            cpu->apsr_c=((*({ long long __neo_array_index86_0 = (long long)(rs_12); if(__neo_array_index86_0 < 0 || __neo_array_index86_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index86_0]; }))>>31)&1u;
        }
        else {
            value_14=(unsigned int )(((int )(*({ long long __neo_array_index87_0 = (long long)(rs_12); if(__neo_array_index87_0 < 0 || __neo_array_index87_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index87_0]; })))>>imm_11);
            cpu->apsr_c=((*({ long long __neo_array_index88_0 = (long long)(rs_12); if(__neo_array_index88_0 < 0 || __neo_array_index88_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index88_0]; }))>>(imm_11-1))&1u;
        }
        ({ long long __neo_array_index89_0 = (long long)(rd_13); if(__neo_array_index89_0 < 0 || __neo_array_index89_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index89_0] = value_14; });
        set_nz(cpu,value_14);
                return;
    }
    if((op&0xf800u)==0x1800u) {
        imm_mode=(op>>10)&1;
        sub=(op>>9)&1;
        rn=(op>>6)&7;
        rs_15=(op>>3)&7;
        rd_16=op&7;
        rhs=((imm_mode)?((unsigned int )rn):((*({ long long __neo_array_index90_0 = (long long)(rn); if(__neo_array_index90_0 < 0 || __neo_array_index90_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index90_0]; }))));
        lhs=(*({ long long __neo_array_index91_0 = (long long)(rs_15); if(__neo_array_index91_0 < 0 || __neo_array_index91_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index91_0]; }));
        result=((sub)?(lhs-rhs):(lhs+rhs));
        ({ long long __neo_array_index92_0 = (long long)(rd_16); if(__neo_array_index92_0 < 0 || __neo_array_index92_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index92_0] = result; });
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
        rd_17=(op>>8)&7;
        imm_18=op&0xffu;
        if(kind==0) {
            ({ long long __neo_array_index93_0 = (long long)(rd_17); if(__neo_array_index93_0 < 0 || __neo_array_index93_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index93_0] = imm_18; });
            set_nz(cpu,imm_18);
        }
        else if(kind==1) {
            result_19=(*({ long long __neo_array_index94_0 = (long long)(rd_17); if(__neo_array_index94_0 < 0 || __neo_array_index94_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index94_0]; }))-imm_18;
            set_sub_flags(cpu,(*({ long long __neo_array_index95_0 = (long long)(rd_17); if(__neo_array_index95_0 < 0 || __neo_array_index95_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index95_0]; })),imm_18,result_19);
        }
        else if(kind==2) {
            result_19=(*({ long long __neo_array_index96_0 = (long long)(rd_17); if(__neo_array_index96_0 < 0 || __neo_array_index96_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index96_0]; }))+imm_18;
            ({ long long __neo_array_index97_0 = (long long)(rd_17); if(__neo_array_index97_0 < 0 || __neo_array_index97_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index97_0] = result_19; });
            set_add_flags(cpu,(*({ long long __neo_array_index98_0 = (long long)(rd_17); if(__neo_array_index98_0 < 0 || __neo_array_index98_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index98_0]; }))-imm_18,imm_18,result_19);
        }
        else {
            result_19=(*({ long long __neo_array_index99_0 = (long long)(rd_17); if(__neo_array_index99_0 < 0 || __neo_array_index99_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index99_0]; }))-imm_18;
            ({ long long __neo_array_index100_0 = (long long)(rd_17); if(__neo_array_index100_0 < 0 || __neo_array_index100_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index100_0] = result_19; });
            set_sub_flags(cpu,(*({ long long __neo_array_index101_0 = (long long)(rd_17); if(__neo_array_index101_0 < 0 || __neo_array_index101_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index101_0]; }))+imm_18,imm_18,result_19);
        }
                return;
    }
    if((op&0xfc00u)==0x4000u) {
        alu=(op>>6)&0xf;
        rs_20=(op>>3)&7;
        rd_21=op&7;
        a=(*({ long long __neo_array_index102_0 = (long long)(rd_21); if(__neo_array_index102_0 < 0 || __neo_array_index102_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index102_0]; }));
        b=(*({ long long __neo_array_index103_0 = (long long)(rs_20); if(__neo_array_index103_0 < 0 || __neo_array_index103_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index103_0]; }));
        result_22=0;
        switch (        alu) {
            case 0x0:
            result_22=a&b;
            ({ long long __neo_array_index104_0 = (long long)(rd_21); if(__neo_array_index104_0 < 0 || __neo_array_index104_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index104_0] = result_22; });
            set_nz(cpu,result_22);
            break;
            case 0x1:
            result_22=a^b;
            ({ long long __neo_array_index105_0 = (long long)(rd_21); if(__neo_array_index105_0 < 0 || __neo_array_index105_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index105_0] = result_22; });
            set_nz(cpu,result_22);
            break;
            case 0x2:
            result_22=((b>=32)?(0):(a<<b));
            if(b!=0&&b<=32) {
                cpu->apsr_c=(a>>(32-b))&1u;
            }
            ({ long long __neo_array_index106_0 = (long long)(rd_21); if(__neo_array_index106_0 < 0 || __neo_array_index106_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index106_0] = result_22; });
            set_nz(cpu,result_22);
            break;
            case 0x3:
            result_22=((b>=32)?(0):(a>>b));
            if(b!=0&&b<=32) {
                cpu->apsr_c=(a>>(b-1))&1u;
            }
            ({ long long __neo_array_index107_0 = (long long)(rd_21); if(__neo_array_index107_0 < 0 || __neo_array_index107_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index107_0] = result_22; });
            set_nz(cpu,result_22);
            break;
            case 0x4:
            result_22=((b>=32)?(((((a&0x80000000u))?(0xffffffffu):(0)))):((unsigned int )((int )a>>b)));
            if(b!=0&&b<=32) {
                cpu->apsr_c=(a>>(b-1))&1u;
            }
            ({ long long __neo_array_index108_0 = (long long)(rd_21); if(__neo_array_index108_0 < 0 || __neo_array_index108_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index108_0] = result_22; });
            set_nz(cpu,result_22);
            break;
            case 0x5:
            {
                carry=((cpu->apsr_c)?(1u):(0u));
                result_22=a+b+carry;
                ({ long long __neo_array_index109_0 = (long long)(rd_21); if(__neo_array_index109_0 < 0 || __neo_array_index109_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index109_0] = result_22; });
                set_add_flags(cpu,a,b+carry,result_22);
                break;
            }
            case 0x6:
            {
                borrow=((cpu->apsr_c)?(0u):(1u));
                result_22=a-b-borrow;
                ({ long long __neo_array_index110_0 = (long long)(rd_21); if(__neo_array_index110_0 < 0 || __neo_array_index110_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index110_0] = result_22; });
                set_sub_flags(cpu,a,b+borrow,result_22);
                break;
            }
            case 0x7:
            {
                rot=b&31u;
                result_22=((rot==0)?(a):(((a>>rot)|(a<<(32u-rot)))));
                if(rot!=0) {
                    cpu->apsr_c=(result_22>>31)&1u;
                }
                ({ long long __neo_array_index111_0 = (long long)(rd_21); if(__neo_array_index111_0 < 0 || __neo_array_index111_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index111_0] = result_22; });
                set_nz(cpu,result_22);
                break;
            }
            case 0x8:
            result_22=a&b;
            set_nz(cpu,result_22);
            break;
            case 0x9:
            result_22=0u-b;
            ({ long long __neo_array_index112_0 = (long long)(rd_21); if(__neo_array_index112_0 < 0 || __neo_array_index112_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index112_0] = result_22; });
            set_sub_flags(cpu,0,b,result_22);
            break;
            case 0xa:
            result_22=a-b;
            set_sub_flags(cpu,a,b,result_22);
            break;
            case 0xb:
            result_22=a+b;
            set_add_flags(cpu,a,b,result_22);
            break;
            case 0xc:
            result_22=a|b;
            ({ long long __neo_array_index113_0 = (long long)(rd_21); if(__neo_array_index113_0 < 0 || __neo_array_index113_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index113_0] = result_22; });
            set_nz(cpu,result_22);
            break;
            case 0xd:
            result_22=a*b;
            ({ long long __neo_array_index114_0 = (long long)(rd_21); if(__neo_array_index114_0 < 0 || __neo_array_index114_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index114_0] = result_22; });
            set_nz(cpu,result_22);
            break;
            case 0xe:
            result_22=a&~b;
            ({ long long __neo_array_index115_0 = (long long)(rd_21); if(__neo_array_index115_0 < 0 || __neo_array_index115_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index115_0] = result_22; });
            set_nz(cpu,result_22);
            break;
            case 0xf:
            result_22=~b;
            ({ long long __neo_array_index116_0 = (long long)(rd_21); if(__neo_array_index116_0 < 0 || __neo_array_index116_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index116_0] = result_22; });
            set_nz(cpu,result_22);
            break;
            default:
            unsupported(cpu,op,pc);
            break;
        }
                return;
    }
    if((op&0xfc00u)==0x4400u) {
        kind_23=(op>>8)&3;
        rs_24=((op>>3)&0xf);
        rd_25=(op&7)|((op>>4)&8);
        if(kind_23==0) {
            result_26=(*({ long long __neo_array_index117_0 = (long long)(rd_25); if(__neo_array_index117_0 < 0 || __neo_array_index117_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index117_0]; }))+(*({ long long __neo_array_index118_0 = (long long)(rs_24); if(__neo_array_index118_0 < 0 || __neo_array_index118_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index118_0]; }));
            write_reg(cpu,rd_25,result_26);
        }
        else if(kind_23==1) {
            result_26=(*({ long long __neo_array_index119_0 = (long long)(rd_25); if(__neo_array_index119_0 < 0 || __neo_array_index119_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index119_0]; }))-(*({ long long __neo_array_index120_0 = (long long)(rs_24); if(__neo_array_index120_0 < 0 || __neo_array_index120_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index120_0]; }));
            set_sub_flags(cpu,(*({ long long __neo_array_index121_0 = (long long)(rd_25); if(__neo_array_index121_0 < 0 || __neo_array_index121_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index121_0]; })),(*({ long long __neo_array_index122_0 = (long long)(rs_24); if(__neo_array_index122_0 < 0 || __neo_array_index122_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index122_0]; })),result_26);
        }
        else if(kind_23==2) {
            write_reg(cpu,rd_25,(*({ long long __neo_array_index123_0 = (long long)(rs_24); if(__neo_array_index123_0 < 0 || __neo_array_index123_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index123_0]; })));
        }
        else {
            if((op&0x0080u)!=0) {
                ({ long long __neo_array_index125_0 = (long long)(14); if(__neo_array_index125_0 < 0 || __neo_array_index125_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index125_0] = (*({ long long __neo_array_index124_0 = (long long)(15); if(__neo_array_index124_0 < 0 || __neo_array_index124_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index124_0]; }))|1u; });
            }
            target=(*({ long long __neo_array_index126_0 = (long long)(rs_24); if(__neo_array_index126_0 < 0 || __neo_array_index126_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index126_0]; }));
            if(target>=0xfffffff0u&&cpu->active_exception!=0) {
                exception_return(cpu);
            }
            else {
                ({ long long __neo_array_index127_0 = (long long)(15); if(__neo_array_index127_0 < 0 || __neo_array_index127_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index127_0] = target&~1u; });
            }
        }
                return;
    }
    if((op&0xf800u)==0x4800u) {
        rd_27=(op>>8)&7;
        addr=(read_pc(cpu)+((op&0xffu)<<2))&~3u;
        ({ long long __neo_array_index128_0 = (long long)(rd_27); if(__neo_array_index128_0 < 0 || __neo_array_index128_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index128_0] = mem_read32(cpu,addr); });
                return;
    }
    if((op&0xf200u)==0x5000u) {
        kind_28=(op>>9)&7;
        rm=(op>>6)&7;
        rn_29=(op>>3)&7;
        rt=op&7;
        addr_30=(*({ long long __neo_array_index129_0 = (long long)(rn_29); if(__neo_array_index129_0 < 0 || __neo_array_index129_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index129_0]; }))+(*({ long long __neo_array_index130_0 = (long long)(rm); if(__neo_array_index130_0 < 0 || __neo_array_index130_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index130_0]; }));
        if(kind_28==0) {
            mem_write32(cpu,addr_30,(*({ long long __neo_array_index131_0 = (long long)(rt); if(__neo_array_index131_0 < 0 || __neo_array_index131_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index131_0]; })));
        }
        else if(kind_28==1) {
            mem_write16(cpu,addr_30,(unsigned short int )(*({ long long __neo_array_index132_0 = (long long)(rt); if(__neo_array_index132_0 < 0 || __neo_array_index132_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index132_0]; })));
        }
        else if(kind_28==2) {
            mem_write8(cpu,addr_30,(unsigned char )(*({ long long __neo_array_index133_0 = (long long)(rt); if(__neo_array_index133_0 < 0 || __neo_array_index133_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index133_0]; })));
        }
        else if(kind_28==3) {
            ({ long long __neo_array_index134_0 = (long long)(rt); if(__neo_array_index134_0 < 0 || __neo_array_index134_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index134_0] = (unsigned int )(int )(char )mem_read8(cpu,addr_30); });
        }
        else if(kind_28==4) {
            ({ long long __neo_array_index135_0 = (long long)(rt); if(__neo_array_index135_0 < 0 || __neo_array_index135_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index135_0] = mem_read32(cpu,addr_30); });
        }
        else if(kind_28==5) {
            ({ long long __neo_array_index136_0 = (long long)(rt); if(__neo_array_index136_0 < 0 || __neo_array_index136_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index136_0] = mem_read16(cpu,addr_30); });
        }
        else if(kind_28==6) {
            ({ long long __neo_array_index137_0 = (long long)(rt); if(__neo_array_index137_0 < 0 || __neo_array_index137_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index137_0] = mem_read8(cpu,addr_30); });
        }
        else {
            ({ long long __neo_array_index138_0 = (long long)(rt); if(__neo_array_index138_0 < 0 || __neo_array_index138_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index138_0] = (unsigned int )(int )(short int )mem_read16(cpu,addr_30); });
        }
                return;
    }
    if((op&0xf000u)==0x6000u) {
        ldr=(op>>11)&1;
        imm_31=(op>>6)&0x1f;
        rn_32=(op>>3)&7;
        rt_33=op&7;
        addr_34=(*({ long long __neo_array_index139_0 = (long long)(rn_32); if(__neo_array_index139_0 < 0 || __neo_array_index139_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index139_0]; }))+((unsigned int )imm_31<<2);
        if(ldr) {
            ({ long long __neo_array_index140_0 = (long long)(rt_33); if(__neo_array_index140_0 < 0 || __neo_array_index140_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index140_0] = mem_read32(cpu,addr_34); });
        }
        else {
            mem_write32(cpu,addr_34,(*({ long long __neo_array_index141_0 = (long long)(rt_33); if(__neo_array_index141_0 < 0 || __neo_array_index141_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index141_0]; })));
        }
                return;
    }
    if((op&0xf000u)==0x7000u) {
        ldr_35=(op>>11)&1;
        imm_36=(op>>6)&0x1f;
        rn_37=(op>>3)&7;
        rt_38=op&7;
        addr_39=(*({ long long __neo_array_index142_0 = (long long)(rn_37); if(__neo_array_index142_0 < 0 || __neo_array_index142_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index142_0]; }))+(unsigned int )imm_36;
        if(ldr_35) {
            ({ long long __neo_array_index143_0 = (long long)(rt_38); if(__neo_array_index143_0 < 0 || __neo_array_index143_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index143_0] = mem_read8(cpu,addr_39); });
        }
        else {
            mem_write8(cpu,addr_39,(unsigned char )(*({ long long __neo_array_index144_0 = (long long)(rt_38); if(__neo_array_index144_0 < 0 || __neo_array_index144_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index144_0]; })));
        }
                return;
    }
    if((op&0xf000u)==0x8000u) {
        ldr_40=(op>>11)&1;
        imm_41=(op>>6)&0x1f;
        rn_42=(op>>3)&7;
        rt_43=op&7;
        addr_44=(*({ long long __neo_array_index145_0 = (long long)(rn_42); if(__neo_array_index145_0 < 0 || __neo_array_index145_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index145_0]; }))+((unsigned int )imm_41<<1);
        if(ldr_40) {
            ({ long long __neo_array_index146_0 = (long long)(rt_43); if(__neo_array_index146_0 < 0 || __neo_array_index146_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index146_0] = mem_read16(cpu,addr_44); });
        }
        else {
            mem_write16(cpu,addr_44,(unsigned short int )(*({ long long __neo_array_index147_0 = (long long)(rt_43); if(__neo_array_index147_0 < 0 || __neo_array_index147_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index147_0]; })));
        }
                return;
    }
    if((op&0xf000u)==0x9000u) {
        ldr_45=(op>>11)&1;
        rt_46=(op>>8)&7;
        addr_47=(*({ long long __neo_array_index148_0 = (long long)(13); if(__neo_array_index148_0 < 0 || __neo_array_index148_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index148_0]; }))+((op&0xffu)<<2);
        if(ldr_45) {
            ({ long long __neo_array_index149_0 = (long long)(rt_46); if(__neo_array_index149_0 < 0 || __neo_array_index149_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index149_0] = mem_read32(cpu,addr_47); });
        }
        else {
            mem_write32(cpu,addr_47,(*({ long long __neo_array_index150_0 = (long long)(rt_46); if(__neo_array_index150_0 < 0 || __neo_array_index150_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index150_0]; })));
        }
                return;
    }
    if((op&0xf000u)==0xa000u) {
        rd_48=(op>>8)&7;
        imm_49=(op&0xffu)<<2;
        if((op&0x0800u)!=0) {
            ({ long long __neo_array_index152_0 = (long long)(rd_48); if(__neo_array_index152_0 < 0 || __neo_array_index152_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index152_0] = (*({ long long __neo_array_index151_0 = (long long)(13); if(__neo_array_index151_0 < 0 || __neo_array_index151_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index151_0]; }))+imm_49; });
        }
        else {
            ({ long long __neo_array_index153_0 = (long long)(rd_48); if(__neo_array_index153_0 < 0 || __neo_array_index153_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index153_0] = read_pc(cpu)+imm_49; });
        }
                return;
    }
    if((op&0xff00u)==0xb000u) {
        imm_50=(op&0x7fu)<<2;
        if((op&0x0080u)!=0) {
            (*({ long long __neo_array_index154_0 = (long long)(13); if(__neo_array_index154_0 < 0 || __neo_array_index154_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index154_0]; }))-=imm_50;
        }
        else {
            (*({ long long __neo_array_index155_0 = (long long)(13); if(__neo_array_index155_0 < 0 || __neo_array_index155_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index155_0]; }))+=imm_50;
        }
                return;
    }
    if((op&0xff00u)==0xb200u) {
        rn_51=(op>>3)&7;
        rd_52=op&7;
        kind_53=(op>>6)&3;
        if(kind_53==0) {
            ({ long long __neo_array_index157_0 = (long long)(rd_52); if(__neo_array_index157_0 < 0 || __neo_array_index157_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index157_0] = (unsigned int )(int )(short int )((*({ long long __neo_array_index156_0 = (long long)(rn_51); if(__neo_array_index156_0 < 0 || __neo_array_index156_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index156_0]; }))&0xffffu); });
        }
        else if(kind_53==1) {
            ({ long long __neo_array_index159_0 = (long long)(rd_52); if(__neo_array_index159_0 < 0 || __neo_array_index159_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index159_0] = (unsigned int )(int )(char )((*({ long long __neo_array_index158_0 = (long long)(rn_51); if(__neo_array_index158_0 < 0 || __neo_array_index158_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index158_0]; }))&0xffu); });
        }
        else if(kind_53==2) {
            ({ long long __neo_array_index161_0 = (long long)(rd_52); if(__neo_array_index161_0 < 0 || __neo_array_index161_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index161_0] = (*({ long long __neo_array_index160_0 = (long long)(rn_51); if(__neo_array_index160_0 < 0 || __neo_array_index160_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index160_0]; }))&0xffffu; });
        }
        else {
            ({ long long __neo_array_index163_0 = (long long)(rd_52); if(__neo_array_index163_0 < 0 || __neo_array_index163_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index163_0] = (*({ long long __neo_array_index162_0 = (long long)(rn_51); if(__neo_array_index162_0 < 0 || __neo_array_index162_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index162_0]; }))&0xffu; });
        }
                return;
    }
    if((op&0xfe00u)==0xb400u) {
        list=op&0xffu;
        if((op&0x0100u)!=0) {
            push32(cpu,(*({ long long __neo_array_index164_0 = (long long)(14); if(__neo_array_index164_0 < 0 || __neo_array_index164_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index164_0]; })));
        }
        for(i=7        ;i>=0;i--){
            if((list&(1u<<i))!=0) {
                push32(cpu,(*({ long long __neo_array_index165_0 = (long long)(i); if(__neo_array_index165_0 < 0 || __neo_array_index165_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index165_0]; })));
            }
        }
                return;
    }
    if((op&0xfe00u)==0xbc00u) {
        list_54=op&0xffu;
        for(i_55=0        ;i_55<8;i_55++){
            if((list_54&(1u<<i_55))!=0) {
                ({ long long __neo_array_index166_0 = (long long)(i_55); if(__neo_array_index166_0 < 0 || __neo_array_index166_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index166_0] = pop32(cpu); });
            }
        }
        if((op&0x0100u)!=0) {
            ({ long long __neo_array_index167_0 = (long long)(15); if(__neo_array_index167_0 < 0 || __neo_array_index167_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index167_0] = pop32(cpu)&~1u; });
        }
                return;
    }
    if((op&0xf500u)==0xb100u) {
        rn_56=op&7;
        imm_57=(((op>>9)&1u)<<6)|(((op>>3)&0x1fu)<<1);
        nonzero=(op&0x0800u)!=0;
        take=((nonzero)?((*({ long long __neo_array_index168_0 = (long long)(rn_56); if(__neo_array_index168_0 < 0 || __neo_array_index168_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index168_0]; }))!=0):((*({ long long __neo_array_index169_0 = (long long)(rn_56); if(__neo_array_index169_0 < 0 || __neo_array_index169_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index169_0]; }))==0));
        if(take) {
            (*({ long long __neo_array_index170_0 = (long long)(15); if(__neo_array_index170_0 < 0 || __neo_array_index170_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index170_0]; }))+=imm_57+2u;
        }
                return;
    }
    if((op&0xf000u)==0xc000u) {
        ldm=(op>>11)&1;
        rn_58=(op>>8)&7;
        list_59=op&0xffu;
        addr_60=(*({ long long __neo_array_index171_0 = (long long)(rn_58); if(__neo_array_index171_0 < 0 || __neo_array_index171_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index171_0]; }));
        for(i_61=0        ;i_61<8;i_61++){
            if((list_59&(1u<<i_61))!=0) {
                if(ldm) {
                    ({ long long __neo_array_index172_0 = (long long)(i_61); if(__neo_array_index172_0 < 0 || __neo_array_index172_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index172_0] = mem_read32(cpu,addr_60); });
                }
                else {
                    mem_write32(cpu,addr_60,(*({ long long __neo_array_index173_0 = (long long)(i_61); if(__neo_array_index173_0 < 0 || __neo_array_index173_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index173_0]; })));
                }
                addr_60+=4u;
            }
        }
        ({ long long __neo_array_index174_0 = (long long)(rn_58); if(__neo_array_index174_0 < 0 || __neo_array_index174_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index174_0] = addr_60; });
                return;
    }
    if((op&0xf000u)==0xd000u) {
        cond=(op>>8)&0xfu;
        if(cond==0xfu) {
            cpu->exit_code=(*({ long long __neo_array_index175_0 = (long long)(0); if(__neo_array_index175_0 < 0 || __neo_array_index175_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index175_0]; }));
            cpu->halt=(_Bool)1;
                        return;
        }
        if(cond_pass(cpu,cond)) {
            ({ long long __neo_array_index177_0 = (long long)(15); if(__neo_array_index177_0 < 0 || __neo_array_index177_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index177_0] = (unsigned int )((int )((*({ long long __neo_array_index176_0 = (long long)(15); if(__neo_array_index176_0 < 0 || __neo_array_index176_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index176_0]; }))+2u)+sx((op&0xffu)<<1,9)); });
        }
                return;
    }
    if((op&0xf800u)==0xe000u) {
        ({ long long __neo_array_index179_0 = (long long)(15); if(__neo_array_index179_0 < 0 || __neo_array_index179_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index179_0] = (unsigned int )((int )((*({ long long __neo_array_index178_0 = (long long)(15); if(__neo_array_index178_0 < 0 || __neo_array_index178_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index178_0]; }))+2u)+sx((op&0x7ffu)<<1,12)); });
                return;
    }
    if((op&0xf800u)==0xf000u||(op&0xf800u)==0xf800u) {
        op2=mem_read16(cpu,(*({ long long __neo_array_index180_0 = (long long)(15); if(__neo_array_index180_0 < 0 || __neo_array_index180_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index180_0]; })));
        if((op2&0xd000u)==0xd000u) {
            (*({ long long __neo_array_index181_0 = (long long)(15); if(__neo_array_index181_0 < 0 || __neo_array_index181_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index181_0]; }))+=2u;
            s=(op>>10)&1u;
            j1=(op2>>13)&1u;
            j2=(op2>>11)&1u;
            i1=(~(j1^s))&1u;
            i2=(~(j2^s))&1u;
            imm_62=(s<<24)|(i1<<23)|(i2<<22)|((op&0x03ffu)<<12)|((op2&0x07ffu)<<1);
            off=sx(imm_62,25);
            ({ long long __neo_array_index183_0 = (long long)(14); if(__neo_array_index183_0 < 0 || __neo_array_index183_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index183_0] = (*({ long long __neo_array_index182_0 = (long long)(15); if(__neo_array_index182_0 < 0 || __neo_array_index182_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index182_0]; }))|1u; });
            ({ long long __neo_array_index185_0 = (long long)(15); if(__neo_array_index185_0 < 0 || __neo_array_index185_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index185_0] = (unsigned int )((int )(*({ long long __neo_array_index184_0 = (long long)(15); if(__neo_array_index184_0 < 0 || __neo_array_index184_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu->r[__neo_array_index184_0]; }))+off); });
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
    cpu->vector_table=0x10000000u;
    ({ long long __neo_array_index186_0 = (long long)(13); if(__neo_array_index186_0 < 0 || __neo_array_index186_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index186_0] = mem_read32(cpu,0x10000000u); });
    ({ long long __neo_array_index187_0 = (long long)(15); if(__neo_array_index187_0 < 0 || __neo_array_index187_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu->r[__neo_array_index187_0] = mem_read32(cpu,0x10000000u+4u)&~1u; });
}

static void self_expect(const char* name, _Bool ok, int* failures)
{
    if(!ok) {
        fprintf(stderr,"PERIPHERAL SELFTEST FAIL: %s\n",name);
        (*failures)++;
    }
}

static int peripheral_self_test()
{
    struct anonymous_typeX20  cpu  ;
    int failures;
    unsigned int  interrupted_sp  ;
    unsigned int  interrupted_pc  ;
    memset(&cpu, 0, sizeof(cpu));
    memset(&failures, 0, sizeof(failures));
    memset(&interrupted_sp, 0, sizeof(interrupted_sp));
    memset(&interrupted_pc, 0, sizeof(interrupted_pc));
    failures=0;
    memset(&cpu,0,sizeof(cpu));
    memset(g_sram,0,sizeof(g_sram));
    mem_write32(&cpu,0xd0000000u+0x024u,1u<<25);
    mem_write32(&cpu,0xd0000000u+0x014u,1u<<25);
    self_expect("GPIO output enable",(mem_read32(&cpu,0xd0000000u+0x020u)&(1u<<25))!=0,&failures);
    self_expect("GPIO output value",(mem_read32(&cpu,0xd0000000u+0x004u)&(1u<<25))!=0,&failures);
    mem_write32(&cpu,0x40014000u+25u*8u+4u,5u);
    self_expect("IO_BANK0 GPIO control",mem_read32(&cpu,0x40014000u+25u*8u+4u)==5u,&failures);
    mem_write32(&cpu,0x50200000u+0x010u,0x12345678u);
    self_expect("PIO FIFO loopback",mem_read32(&cpu,0x50200000u+0x020u)==0x12345678u,&failures);
    mem_write32(&cpu,0x20000000u+0x000u,0x11223344u);
    mem_write32(&cpu,0x20000000u+0x004u,0x55667788u);
    mem_write32(&cpu,0x50000000u+0x000u,0x20000000u);
    mem_write32(&cpu,0x50000000u+0x004u,0x20000000u+0x100u);
    mem_write32(&cpu,0x50000000u+0x008u,2u);
    mem_write32(&cpu,0x50000000u+0x00cu,1u|(2u<<2)|(1u<<4)|(1u<<5));
    self_expect("DMA word 0",mem_read32(&cpu,0x20000000u+0x100u)==0x11223344u,&failures);
    self_expect("DMA word 1",mem_read32(&cpu,0x20000000u+0x104u)==0x55667788u,&failures);
    mem_write32(&cpu,0x40050000u+0xa0u,1u);
    peripheral_tick(&cpu);
    peripheral_tick(&cpu);
    self_expect("PWM counter",mem_read32(&cpu,0x40050000u+0x08u)==2u,&failures);
    mem_write32(&cpu,0x4004c000u+0x00u,4u);
    self_expect("ADC ready",(mem_read32(&cpu,0x4004c000u+0x00u)&(1u<<8))!=0,&failures);
    self_expect("ADC sample",mem_read32(&cpu,0x4004c000u+0x04u)==2048u,&failures);
    mem_write32(&cpu,0x4003c000u+0x08u,0x5au);
    self_expect("SPI loopback",mem_read32(&cpu,0x4003c000u+0x08u)==0x5au,&failures);
    mem_write32(&cpu,0x40044000u+0x10u,0xa5u);
    self_expect("I2C loopback",mem_read32(&cpu,0x40044000u+0x10u)==0xa5u,&failures);
    mem_write32(&cpu,0x50100000u+0x40u,0xdeadbeefu);
    mem_write32(&cpu,0x50110000u+0x08u,0x00000001u);
    self_expect("USB DPRAM",mem_read32(&cpu,0x50100000u+0x40u)==0xdeadbeefu,&failures);
    self_expect("USB registers",mem_read32(&cpu,0x50110000u+0x08u)==1u,&failures);
    cpu.steps=100u;
    mem_write32(&cpu,0x40054000u+0x38u,1u);
    mem_write32(&cpu,0xe000e100u,1u);
    mem_write32(&cpu,0x40054000u+0x10u,102u);
    cpu.steps=102u;
    peripheral_tick(&cpu);
    self_expect("Timer alarm",(mem_read32(&cpu,0x40054000u+0x34u)&1u)!=0,&failures);
    self_expect("Timer IRQ pending",(mem_read32(&cpu,0xe000e200u)&1u)!=0,&failures);
    cpu.vector_table=0x10000000u;
    ({ long long __neo_array_index188_0 = (long long)(13); if(__neo_array_index188_0 < 0 || __neo_array_index188_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu.r /* uho */[__neo_array_index188_0] = 0x20000000u+0x800u; });
    ({ long long __neo_array_index189_0 = (long long)(15); if(__neo_array_index189_0 < 0 || __neo_array_index189_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu.r /* uho */[__neo_array_index189_0] = 0x10000000u+0x100u; });
    ({ long long __neo_array_index190_0 = (long long)(0); if(__neo_array_index190_0 < 0 || __neo_array_index190_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } cpu.r /* uho */[__neo_array_index190_0] = 0x12345678u; });
    wr32(&g_flash[16u*4u],0x10000000u+0x201u);
    ({ long long __neo_array_index192_0 = (long long)(0x200u); if(__neo_array_index192_0 < 0 || __neo_array_index192_0 >= (long long)((2u*1024u*1024u))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } g_flash[__neo_array_index192_0] = 0x70u; });
    ({ long long __neo_array_index193_0 = (long long)(0x201u); if(__neo_array_index193_0 < 0 || __neo_array_index193_0 >= (long long)((2u*1024u*1024u))) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } g_flash[__neo_array_index193_0] = 0x47u; });
    interrupted_sp=(*({ long long __neo_array_index194_0 = (long long)(13); if(__neo_array_index194_0 < 0 || __neo_array_index194_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu.r /* uho */[__neo_array_index194_0]; }));
    interrupted_pc=(*({ long long __neo_array_index195_0 = (long long)(15); if(__neo_array_index195_0 < 0 || __neo_array_index195_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu.r /* uho */[__neo_array_index195_0]; }));
    self_expect("NVIC interrupt service",service_pending_interrupt(&cpu),&failures);
    self_expect("Exception handler PC",(*({ long long __neo_array_index196_0 = (long long)(15); if(__neo_array_index196_0 < 0 || __neo_array_index196_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu.r /* uho */[__neo_array_index196_0]; }))==0x10000000u+0x200u,&failures);
    self_expect("Exception frame SP",(*({ long long __neo_array_index197_0 = (long long)(13); if(__neo_array_index197_0 < 0 || __neo_array_index197_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu.r /* uho */[__neo_array_index197_0]; }))==interrupted_sp-32u,&failures);
    self_expect("Exception frame r0",mem_read32(&cpu,(*({ long long __neo_array_index198_0 = (long long)(13); if(__neo_array_index198_0 < 0 || __neo_array_index198_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu.r /* uho */[__neo_array_index198_0]; })))==0x12345678u,&failures);
    step_thumb(&cpu);
    self_expect("Exception return PC",(*({ long long __neo_array_index199_0 = (long long)(15); if(__neo_array_index199_0 < 0 || __neo_array_index199_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu.r /* uho */[__neo_array_index199_0]; }))==interrupted_pc,&failures);
    self_expect("Exception return SP",(*({ long long __neo_array_index200_0 = (long long)(13); if(__neo_array_index200_0 < 0 || __neo_array_index200_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu.r /* uho */[__neo_array_index200_0]; }))==interrupted_sp,&failures);
    self_expect("Exception return state",cpu.active_exception /* uho */==0,&failures);
    mem_write32(&cpu,0x40054000u+0x34u,1u);
    self_expect("Timer IRQ clear",(mem_read32(&cpu,0x40054000u+0x34u)&1u)==0,&failures);
    wr32(&g_flash[17u*4u],0x10000000u+0x201u);
    mem_write32(&cpu,0xe000e400u,0x00000080u);
    mem_write32(&cpu,0xe000e100u,3u);
    mem_write32(&cpu,0xe000e200u,3u);
    self_expect("NVIC priority pending vector",((mem_read32(&cpu,0xe000ed04u)>>12)&0x1ffu)==17u,&failures);
    self_expect("NVIC priority service",service_pending_interrupt(&cpu),&failures);
    self_expect("NVIC priority selected IRQ1",cpu.active_exception /* uho */==17u,&failures);
    step_thumb(&cpu);
    mem_write8(&cpu,0xe000e180u,1u);
    mem_write8(&cpu,0xe000e280u,1u);
    self_expect("NVIC byte disable",(mem_read32(&cpu,0xe000e100u)&1u)==0,&failures);
    self_expect("NVIC byte pending clear",(mem_read32(&cpu,0xe000e200u)&1u)==0,&failures);
    mem_write32(&cpu,0x40058000u+0x04u,2u);
    mem_write32(&cpu,0x40058000u+0x00u,1u<<30);
    peripheral_tick(&cpu);
    peripheral_tick(&cpu);
    self_expect("Watchdog expiry",mem_read32(&cpu,0x40058000u+0x08u)==1u,&failures);
    mem_write32(&cpu,0x40008000u+0x48u,1u);
    mem_write32(&cpu,0x40008000u+0x2048u,4u);
    self_expect("Clock atomic alias",mem_read32(&cpu,0x40008000u+0x48u)==5u,&failures);
    self_expect("Reset done",mem_read32(&cpu,0x4000c000u+0x08u)==0x01ffffffu,&failures);
    if(failures==0) {
        puts("PERIPHERAL SELFTEST PASS");
                return 0;
    }
        return 1;
}

static void usage(const char* argv0)
{
    fprintf(stderr,"usage: %s [--self-test] [--trace] [--max-steps N] utkernel.elf\n",argv0);
}

int main(int argc, char** argv)
{
    unsigned long  int  max_steps  ;
    _Bool trace;
    _Bool self_test;
    struct anonymous_typeX20  cpu  ;
    int i;
    memset(&max_steps, 0, sizeof(max_steps));
    memset(&trace, 0, sizeof(trace));
    memset(&self_test, 0, sizeof(self_test));
    memset(&cpu, 0, sizeof(cpu));
    memset(&i, 0, sizeof(i));
    const char* image=0;
    max_steps=20000000u;
    trace=(_Bool)0;
    self_test=(_Bool)0;
    for(i=1    ;i<argc;i++){
        if(strcmp(argv[i],"--self-test")==0) {
            self_test=(_Bool)1;
        }
        else if(strcmp(argv[i],"--trace")==0) {
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
    if(self_test) {
                return peripheral_self_test();
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
        service_pending_interrupt(&cpu);
        step_thumb(&cpu);
    }
    if(!cpu.halt /* uho */) {
        fprintf(stderr,"EMU step limit reached at pc=0x%08x\n",(*({ long long __neo_array_index202_0 = (long long)(15); if(__neo_array_index202_0 < 0 || __neo_array_index202_0 >= (long long)(16)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &cpu.r /* uho */[__neo_array_index202_0]; })));
        cpu.exit_code=124;
    }
    printf("EMU exit: %u\n",cpu.exit_code /* uho */);
        return (int)cpu.exit_code /* uho */;
}

