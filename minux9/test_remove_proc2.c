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

typedef struct context_t context_t;

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

struct proc
{
    struct context_t  ctx  ;
    int zombie;
};

struct list_item$1proc$p
{
    struct proc*  item  ;
    struct list_item$1proc$p* prev;
    struct list_item$1proc$p* next;
};

struct list$1proc$p
{
    struct list_item$1proc$p* head;
    struct list_item$1proc$p* tail;
    int len;
    struct list_item$1proc$p* it;
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
int main();
static struct list$1proc$p* list$1proc$p_initialize(struct list$1proc$p* self);
static void list$1proc$p$p_finalize(struct list$1proc$p* self);
static void list_item$1proc$p$p_finalize(struct list_item$1proc$p* self);
static struct list$1proc$p* list$1proc$p_remove(struct list$1proc$p* self, struct proc*  item  , _Bool by_pointer);
static _Bool proc_equals(struct proc*  left  , struct proc*  right  );
static _Bool context_t_equals(struct context_t  left  , struct context_t  right  );
static struct list$1proc$p* list$1proc$p_delete(struct list$1proc$p* self, int head, int tail);
static struct list$1proc$p* list$1proc$p_reset(struct list$1proc$p* self);
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
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
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
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
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
int main()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "main"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1proc$p* xs;
    struct proc*  p  ;
    int __result_obj__0;
    memset(&xs, 0, sizeof(xs));
    memset(&p, 0, sizeof(p));
    # 11 "/tmp/test_remove_proc2.nc"
    xs=(struct list$1proc$p*)come_increment_ref_count(list$1proc$p_initialize((struct list$1proc$p*)come_increment_ref_count((struct list$1proc$p*)come_calloc(1, sizeof(struct list$1proc$p)*(1), "/tmp/test_remove_proc2.nc", 11, 1, "struct list$1proc$p*"), "/tmp/test_remove_proc2.nc", 11, 6)), "/tmp/test_remove_proc2.nc", 11, 7);
    # 12 "/tmp/test_remove_proc2.nc"
    p=((void*)0);
    # 13 "/tmp/test_remove_proc2.nc"
    list$1proc$p_remove(xs,p,(_Bool)0);
    # 14 "/tmp/test_remove_proc2.nc"
        __result_obj__0 = 0;
    come_call_finalizer(list$1proc$p$p_finalize, xs, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/tmp/test_remove_proc2.nc}", 14, 12);
    neo_current_frame = fr.prev;
    come_memleak_checker();
    return __result_obj__0;
}

static struct list$1proc$p* list$1proc$p_initialize(struct list$1proc$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1proc$p_initialize"; neo_current_frame = &fr;
    struct list$1proc$p* __result_obj__0;
    # 1481 "/home/ab25cq/neo-c/neo-c.h"
    self->head=((void*)0);
    # 1482 "/home/ab25cq/neo-c/neo-c.h"
    self->tail=((void*)0);
    # 1483 "/home/ab25cq/neo-c/neo-c.h"
    self->len=0;
    # 1485 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1proc$p*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1485, 2);
    come_call_finalizer(list$1proc$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 10, 4);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1proc$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 10, 5);
    return __result_obj__0;
}

static void list$1proc$p$p_finalize(struct list$1proc$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1proc$p$p_finalize"; neo_current_frame = &fr;
    struct list_item$1proc$p* it;
    struct list_item$1proc$p* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1502 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1500 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "/home/ab25cq/neo-c/neo-c.h"
    it=self->head;
    # 1508 "/home/ab25cq/neo-c/neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "/home/ab25cq/neo-c/neo-c.h"
        prev_it=it;
        # 1505 "/home/ab25cq/neo-c/neo-c.h"
        it=it->next;
        # 1506 "/home/ab25cq/neo-c/neo-c.h"
        come_call_finalizer(list_item$1proc$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1506, 3);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1proc$p$p_finalize(struct list_item$1proc$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1proc$p$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1proc$p$p_finalize"
            neo_current_frame = fr.prev;
}

static struct list$1proc$p* list$1proc$p_remove(struct list$1proc$p* self, struct proc*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1proc$p_remove"; neo_current_frame = &fr;
    struct list$1proc$p* __result_obj__0;
    int it2;
    struct list_item$1proc$p* it;
    memset(&it2, 0, sizeof(it2));
    memset(&it, 0, sizeof(it));
    # 1879 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1876 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1879 "/home/ab25cq/neo-c/neo-c.h"
    it2=0;
    # 1880 "/home/ab25cq/neo-c/neo-c.h"
    it=self->head;
    # 1891 "/home/ab25cq/neo-c/neo-c.h"
    while(it!=((void*)0)) {
        # 1886 "/home/ab25cq/neo-c/neo-c.h"
        if((!by_pointer&&proc_equals(it->item,item))||(by_pointer&&it->item==item)) {
            # 1883 "/home/ab25cq/neo-c/neo-c.h"
            list$1proc$p_delete(self,it2,it2+1);
            # 1884 "/home/ab25cq/neo-c/neo-c.h"
            break;
        }
        # 1886 "/home/ab25cq/neo-c/neo-c.h"
        it2++;
        # 1888 "/home/ab25cq/neo-c/neo-c.h"
        it=it->next;
    }
    # 1891 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool proc_equals(struct proc*  left  , struct proc*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "proc_equals"; neo_current_frame = &fr;
    # 1 "proc_equals"
    if(!context_t_equals(left->ctx,right->ctx)) {
        # 0 "proc_equals"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 2 "proc_equals"
    if(!int_equals(left->zombie,right->zombie)) {
        # 1 "proc_equals"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 2 "proc_equals"
        neo_current_frame = fr.prev;
    return (_Bool)1;
            neo_current_frame = fr.prev;
}

static _Bool context_t_equals(struct context_t  left  , struct context_t  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "context_t_equals"; neo_current_frame = &fr;
    # 0 "context_t_equals"
        neo_current_frame = fr.prev;
    return (_Bool)1;
    # 1 "context_t_equals"
        neo_current_frame = fr.prev;
    return (_Bool)1;
        neo_current_frame = fr.prev;
}

static struct list$1proc$p* list$1proc$p_delete(struct list$1proc$p* self, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1proc$p_delete"; neo_current_frame = &fr;
    struct list$1proc$p* __result_obj__0;
    int tmp;
    struct list_item$1proc$p* it;
    int i;
    struct list_item$1proc$p* prev_it;
    struct list_item$1proc$p* it_0;
    int i_1;
    struct list_item$1proc$p* prev_it_2;
    struct list_item$1proc$p* it_3;
    struct list_item$1proc$p* head_prev_it;
    struct list_item$1proc$p* tail_it;
    int i_4;
    struct list_item$1proc$p* prev_it_5;
    memset(&tmp, 0, sizeof(tmp));
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    memset(&prev_it, 0, sizeof(prev_it));
    memset(&it_0, 0, sizeof(it_0));
    memset(&i_1, 0, sizeof(i_1));
    memset(&prev_it_2, 0, sizeof(prev_it_2));
    memset(&it_3, 0, sizeof(it_3));
    memset(&head_prev_it, 0, sizeof(head_prev_it));
    memset(&tail_it, 0, sizeof(tail_it));
    memset(&i_4, 0, sizeof(i_4));
    memset(&prev_it_5, 0, sizeof(prev_it_5));
    # 1899 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1896 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1902 "/home/ab25cq/neo-c/neo-c.h"
    if(head<0) {
        # 1900 "/home/ab25cq/neo-c/neo-c.h"
        head+=self->len;
    }
    # 1906 "/home/ab25cq/neo-c/neo-c.h"
    if(tail<0) {
        # 1903 "/home/ab25cq/neo-c/neo-c.h"
        tail+=self->len+1;
    }
    # 1912 "/home/ab25cq/neo-c/neo-c.h"
    if(head>tail) {
        # 1907 "/home/ab25cq/neo-c/neo-c.h"
        tmp=tail;
        # 1908 "/home/ab25cq/neo-c/neo-c.h"
        tail=head;
        # 1909 "/home/ab25cq/neo-c/neo-c.h"
        head=tmp;
    }
    # 1916 "/home/ab25cq/neo-c/neo-c.h"
    if(head<0) {
        # 1913 "/home/ab25cq/neo-c/neo-c.h"
        head=0;
    }
    # 1920 "/home/ab25cq/neo-c/neo-c.h"
    if(tail>self->len) {
        # 1917 "/home/ab25cq/neo-c/neo-c.h"
        tail=self->len;
    }
    # 1924 "/home/ab25cq/neo-c/neo-c.h"
    if(head>=self->len) {
        # 1921 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1928 "/home/ab25cq/neo-c/neo-c.h"
    if(head==tail) {
        # 1925 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2023 "/home/ab25cq/neo-c/neo-c.h"
    if(head==0&&tail==self->len) {
        # 1930 "/home/ab25cq/neo-c/neo-c.h"
        list$1proc$p_reset(self);
    }
    else if(head==0) {
        # 1933 "/home/ab25cq/neo-c/neo-c.h"
        it=self->head;
        # 1934 "/home/ab25cq/neo-c/neo-c.h"
        i=0;
        # 1956 "/home/ab25cq/neo-c/neo-c.h"
        while(it!=((void*)0)) {
            # 1955 "/home/ab25cq/neo-c/neo-c.h"
            if(i<tail) {
                # 1937 "/home/ab25cq/neo-c/neo-c.h"
                prev_it=it;
                # 1939 "/home/ab25cq/neo-c/neo-c.h"
                it=it->next;
                # 1940 "/home/ab25cq/neo-c/neo-c.h"
                i++;
                # 1942 "/home/ab25cq/neo-c/neo-c.h"
                come_call_finalizer(list_item$1proc$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1942, 9);
                # 1944 "/home/ab25cq/neo-c/neo-c.h"
                self->len--;
            }
            else if(i==tail) {
                # 1947 "/home/ab25cq/neo-c/neo-c.h"
                self->head=it;
                # 1948 "/home/ab25cq/neo-c/neo-c.h"
                self->head->prev=((void*)0);
                # 1949 "/home/ab25cq/neo-c/neo-c.h"
                break;
            }
            else {
                # 1952 "/home/ab25cq/neo-c/neo-c.h"
                it=it->next;
                # 1953 "/home/ab25cq/neo-c/neo-c.h"
                i++;
            }
        }
    }
    else if(tail==self->len) {
        # 1958 "/home/ab25cq/neo-c/neo-c.h"
        it_0=self->head;
        # 1959 "/home/ab25cq/neo-c/neo-c.h"
        i_1=0;
        # 1981 "/home/ab25cq/neo-c/neo-c.h"
        while(it_0!=((void*)0)) {
            # 1966 "/home/ab25cq/neo-c/neo-c.h"
            if(i_1==head) {
                # 1962 "/home/ab25cq/neo-c/neo-c.h"
                self->tail=it_0->prev;
                # 1963 "/home/ab25cq/neo-c/neo-c.h"
                self->tail->next=((void*)0);
            }
            # 1980 "/home/ab25cq/neo-c/neo-c.h"
            if(i_1>=head) {
                # 1967 "/home/ab25cq/neo-c/neo-c.h"
                prev_it_2=it_0;
                # 1969 "/home/ab25cq/neo-c/neo-c.h"
                it_0=it_0->next;
                # 1970 "/home/ab25cq/neo-c/neo-c.h"
                i_1++;
                # 1972 "/home/ab25cq/neo-c/neo-c.h"
                come_call_finalizer(list_item$1proc$p$p_finalize, prev_it_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1972, 10);
                # 1974 "/home/ab25cq/neo-c/neo-c.h"
                self->len--;
            }
            else {
                # 1977 "/home/ab25cq/neo-c/neo-c.h"
                it_0=it_0->next;
                # 1978 "/home/ab25cq/neo-c/neo-c.h"
                i_1++;
            }
        }
    }
    else {
        # 1983 "/home/ab25cq/neo-c/neo-c.h"
        it_3=self->head;
        # 1985 "/home/ab25cq/neo-c/neo-c.h"
        head_prev_it=((void*)0);
        # 1986 "/home/ab25cq/neo-c/neo-c.h"
        tail_it=((void*)0);
        # 1989 "/home/ab25cq/neo-c/neo-c.h"
        i_4=0;
        # 2015 "/home/ab25cq/neo-c/neo-c.h"
        while(it_3!=((void*)0)) {
            # 1994 "/home/ab25cq/neo-c/neo-c.h"
            if(i_4==head) {
                # 1992 "/home/ab25cq/neo-c/neo-c.h"
                head_prev_it=it_3->prev;
            }
            # 1998 "/home/ab25cq/neo-c/neo-c.h"
            if(i_4==tail) {
                # 1995 "/home/ab25cq/neo-c/neo-c.h"
                tail_it=it_3;
            }
            # 2013 "/home/ab25cq/neo-c/neo-c.h"
            if(i_4>=head&&i_4<tail) {
                # 2000 "/home/ab25cq/neo-c/neo-c.h"
                prev_it_5=it_3;
                # 2002 "/home/ab25cq/neo-c/neo-c.h"
                it_3=it_3->next;
                # 2003 "/home/ab25cq/neo-c/neo-c.h"
                i_4++;
                # 2005 "/home/ab25cq/neo-c/neo-c.h"
                come_call_finalizer(list_item$1proc$p$p_finalize, prev_it_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 2005, 11);
                # 2007 "/home/ab25cq/neo-c/neo-c.h"
                self->len--;
            }
            else {
                # 2010 "/home/ab25cq/neo-c/neo-c.h"
                it_3=it_3->next;
                # 2011 "/home/ab25cq/neo-c/neo-c.h"
                i_4++;
            }
        }
        # 2018 "/home/ab25cq/neo-c/neo-c.h"
        if(head_prev_it!=((void*)0)) {
            # 2016 "/home/ab25cq/neo-c/neo-c.h"
            head_prev_it->next=tail_it;
        }
        # 2021 "/home/ab25cq/neo-c/neo-c.h"
        if(tail_it!=((void*)0)) {
            # 2019 "/home/ab25cq/neo-c/neo-c.h"
            tail_it->prev=head_prev_it;
        }
    }
    # 2023 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1proc$p* list$1proc$p_reset(struct list$1proc$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1proc$p_reset"; neo_current_frame = &fr;
    struct list$1proc$p* __result_obj__0;
    struct list_item$1proc$p* it;
    struct list_item$1proc$p* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1860 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1857 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1860 "/home/ab25cq/neo-c/neo-c.h"
    it=self->head;
    # 1867 "/home/ab25cq/neo-c/neo-c.h"
    while(it!=((void*)0)) {
        # 1862 "/home/ab25cq/neo-c/neo-c.h"
        prev_it=it;
        # 1863 "/home/ab25cq/neo-c/neo-c.h"
        it=it->next;
        # 1864 "/home/ab25cq/neo-c/neo-c.h"
        come_call_finalizer(list_item$1proc$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1864, 8);
    }
    # 1867 "/home/ab25cq/neo-c/neo-c.h"
    self->head=((void*)0);
    # 1868 "/home/ab25cq/neo-c/neo-c.h"
    self->tail=((void*)0);
    # 1870 "/home/ab25cq/neo-c/neo-c.h"
    self->len=0;
    # 1872 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void stackframe()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe"; neo_current_frame = &fr;
    struct neo_frame*  f  ;
    char* fun_name;
    memset(&f, 0, sizeof(f));
    memset(&fun_name, 0, sizeof(fun_name));
    # 177 "/home/ab25cq/neo-c/neo-c.h"
    f=neo_current_frame;
    # 184 "/home/ab25cq/neo-c/neo-c.h"
    while(f) {
        # 179 "/home/ab25cq/neo-c/neo-c.h"
        fun_name=f->fun_name;
        # 181 "/home/ab25cq/neo-c/neo-c.h"
        printf("%s\n",fun_name);
        # 182 "/home/ab25cq/neo-c/neo-c.h"
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
    memset(&it, 0, sizeof(it));
    memset(&f, 0, sizeof(f));
    memset(&fun_name, 0, sizeof(fun_name));
    # 196 "/home/ab25cq/neo-c/neo-c.h"
    if(come_is_alive(mem)&&mem) {
        # 191 "/home/ab25cq/neo-c/neo-c.h"
        it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
        # 193 "/home/ab25cq/neo-c/neo-c.h"
        printf("allocated at %s %d #%d. type is %s.\n",it->sname,it->sline,it->id,it->class_name);
    }
    # 196 "/home/ab25cq/neo-c/neo-c.h"
    f=neo_current_frame;
    # 203 "/home/ab25cq/neo-c/neo-c.h"
    while(f) {
        # 198 "/home/ab25cq/neo-c/neo-c.h"
        fun_name=f->fun_name;
        # 200 "/home/ab25cq/neo-c/neo-c.h"
        printf("%s\n",fun_name);
        # 201 "/home/ab25cq/neo-c/neo-c.h"
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
    # 207 "/home/ab25cq/neo-c/neo-c.h"
    puts(((char* )(__right_value6=charp_operator_add(((char*)(__right_value5=xsprintf("\%s \%s : ",((char* )(__right_value3=charp_to_string(sname))),((char* )(__right_value4=int_to_string(sline)))))),msg))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 207, 13));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 207, 14));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 207, 15));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 207, 16));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 207, 17));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 207, 18));
    # 208 "/home/ab25cq/neo-c/neo-c.h"
    stackframe();
    # 209 "/home/ab25cq/neo-c/neo-c.h"
    exit(4);
    # 211 "/home/ab25cq/neo-c/neo-c.h"
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
    memset(&it, 0, sizeof(it));
    memset(&n, 0, sizeof(n));
    memset(&flag, 0, sizeof(flag));
    memset(&i, 0, sizeof(i));
    # 244 "/home/ab25cq/neo-c/neo-c.h"
    # 246 "/home/ab25cq/neo-c/neo-c.h"
    it=gAllocMem;
    # 247 "/home/ab25cq/neo-c/neo-c.h"
    n=0;
    # 267 "/home/ab25cq/neo-c/neo-c.h"
    while(it) {
        # 249 "/home/ab25cq/neo-c/neo-c.h"
        n++;
        # 251 "/home/ab25cq/neo-c/neo-c.h"
        flag=(_Bool)0;
        # 252 "/home/ab25cq/neo-c/neo-c.h"
        printf("#%d ",n);
        # 256 "/home/ab25cq/neo-c/neo-c.h"
        if(it->class_name) {
            # 254 "/home/ab25cq/neo-c/neo-c.h"
            printf("%p (%s) %s %d: ",(char*)it+sizeof(struct sMemHeader )+sizeof(unsigned long  int )+sizeof(unsigned long  int ),it->class_name,it->sname,it->sline);
        }
        # 262 "/home/ab25cq/neo-c/neo-c.h"
        for(i=0        ;i<8;i++){
            # 261 "/home/ab25cq/neo-c/neo-c.h"
            if(it->fun_name[i]) {
                # 258 "/home/ab25cq/neo-c/neo-c.h"
                printf("%s, ",it->fun_name[i]);
                # 259 "/home/ab25cq/neo-c/neo-c.h"
                flag=(_Bool)1;
            }
        }
        # 265 "/home/ab25cq/neo-c/neo-c.h"
        if(flag) {
            # 263 "/home/ab25cq/neo-c/neo-c.h"
            puts("");
        }
        # 265 "/home/ab25cq/neo-c/neo-c.h"
        it=it->next;
    }
    # 268 "/home/ab25cq/neo-c/neo-c.h"
    if(n>0) {
        # 267 "/home/ab25cq/neo-c/neo-c.h"
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
    struct sMemHeader*  it_6  ;
    memset(&it, 0, sizeof(it));
    memset(&it_prev, 0, sizeof(it_prev));
    memset(&it_6, 0, sizeof(it_6));
    # 272 "/home/ab25cq/neo-c/neo-c.h"
    # 274 "/home/ab25cq/neo-c/neo-c.h"
    it=gFreeMem;
    # 275 "/home/ab25cq/neo-c/neo-c.h"
    it_prev=((void*)0);
    # 291 "/home/ab25cq/neo-c/neo-c.h"
    while(it) {
        # 287 "/home/ab25cq/neo-c/neo-c.h"
        if(size<=it->alloc_size) {
            # 284 "/home/ab25cq/neo-c/neo-c.h"
            if(it_prev==((void*)0)) {
                # 279 "/home/ab25cq/neo-c/neo-c.h"
                gFreeMem=((void*)0);
            }
            else {
                # 282 "/home/ab25cq/neo-c/neo-c.h"
                it_prev->free_next=it->free_next;
            }
            # 284 "/home/ab25cq/neo-c/neo-c.h"
            memset(it,0,size);
            # 285 "/home/ab25cq/neo-c/neo-c.h"
                        __result_obj__0 = it;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 287 "/home/ab25cq/neo-c/neo-c.h"
        it_prev=it;
        # 288 "/home/ab25cq/neo-c/neo-c.h"
        it=it->free_next;
    }
    # 291 "/home/ab25cq/neo-c/neo-c.h"
    it_6=(struct sMemHeader* )calloc(1,size);
    # 292 "/home/ab25cq/neo-c/neo-c.h"
    it_6->alloc_size=size;
    # 293 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = it_6;
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
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    memset(&next_it, 0, sizeof(next_it));
    memset(&size, 0, sizeof(size));
    # 298 "/home/ab25cq/neo-c/neo-c.h"
    # 340 "/home/ab25cq/neo-c/neo-c.h"
    if(mem) {
        # 301 "/home/ab25cq/neo-c/neo-c.h"
        it=(struct sMemHeader* )((char*)mem-sizeof(struct sMemHeader ));
        # 307 "/home/ab25cq/neo-c/neo-c.h"
        if(it->allocated!=177783) {
            # 304 "/home/ab25cq/neo-c/neo-c.h"
                        neo_current_frame = fr.prev;
            return;
        }
        # 307 "/home/ab25cq/neo-c/neo-c.h"
        it->allocated=0;
        # 309 "/home/ab25cq/neo-c/neo-c.h"
        prev_it=it->prev;
        # 310 "/home/ab25cq/neo-c/neo-c.h"
        next_it=it->next;
        # 328 "/home/ab25cq/neo-c/neo-c.h"
        if(gAllocMem==it) {
            # 313 "/home/ab25cq/neo-c/neo-c.h"
            gAllocMem=next_it;
            # 318 "/home/ab25cq/neo-c/neo-c.h"
            if(gAllocMem) {
                # 316 "/home/ab25cq/neo-c/neo-c.h"
                gAllocMem->prev=((void*)0);
            }
        }
        else {
            # 323 "/home/ab25cq/neo-c/neo-c.h"
            if(prev_it) {
                # 321 "/home/ab25cq/neo-c/neo-c.h"
                prev_it->next=next_it;
            }
            # 326 "/home/ab25cq/neo-c/neo-c.h"
            if(next_it) {
                # 324 "/home/ab25cq/neo-c/neo-c.h"
                next_it->prev=prev_it;
            }
        }
        # 328 "/home/ab25cq/neo-c/neo-c.h"
        size=it->size;
        # 330 "/home/ab25cq/neo-c/neo-c.h"
        it->free_next=gFreeMem;
        # 331 "/home/ab25cq/neo-c/neo-c.h"
        gFreeMem=it;
        # 333 "/home/ab25cq/neo-c/neo-c.h"
        it->alive=0;
        # 338 "/home/ab25cq/neo-c/neo-c.h"
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
    memset(&size2, 0, sizeof(size2));
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    memset(&n, 0, sizeof(n));
    memset(&f, 0, sizeof(f));
    memset(&fun_name, 0, sizeof(fun_name));
    # 344 "/home/ab25cq/neo-c/neo-c.h"
    # 346 "/home/ab25cq/neo-c/neo-c.h"
    size2=size+sizeof(struct sMemHeader );
    # 350 "/home/ab25cq/neo-c/neo-c.h"
    size2=(size2+7&~0x7);
    # 352 "/home/ab25cq/neo-c/neo-c.h"
    result=alloc_from_pages(size2);
    # 354 "/home/ab25cq/neo-c/neo-c.h"
    it=result;
    # 356 "/home/ab25cq/neo-c/neo-c.h"
    it->allocated=177783;
    # 358 "/home/ab25cq/neo-c/neo-c.h"
    it->compiletime_size=compiletime_size;
    # 359 "/home/ab25cq/neo-c/neo-c.h"
    it->size=size2;
    # 360 "/home/ab25cq/neo-c/neo-c.h"
    it->free_next=((void*)0);
    # 361 "/home/ab25cq/neo-c/neo-c.h"
    it->alive=1;
    # 363 "/home/ab25cq/neo-c/neo-c.h"
    n=0;
    # 364 "/home/ab25cq/neo-c/neo-c.h"
    f=neo_current_frame;
    # 374 "/home/ab25cq/neo-c/neo-c.h"
    while(f&&n<8) {
        # 366 "/home/ab25cq/neo-c/neo-c.h"
        fun_name=f->fun_name;
        # 368 "/home/ab25cq/neo-c/neo-c.h"
        it->fun_name[n]=fun_name;
        # 370 "/home/ab25cq/neo-c/neo-c.h"
        n++;
        # 371 "/home/ab25cq/neo-c/neo-c.h"
        f=f->prev;
    }
    # 374 "/home/ab25cq/neo-c/neo-c.h"
    it->next=gAllocMem;
    # 375 "/home/ab25cq/neo-c/neo-c.h"
    it->prev=((void*)0);
    # 377 "/home/ab25cq/neo-c/neo-c.h"
    it->class_name=class_name;
    # 378 "/home/ab25cq/neo-c/neo-c.h"
    it->sname=sname;
    # 379 "/home/ab25cq/neo-c/neo-c.h"
    it->sline=sline;
    # 380 "/home/ab25cq/neo-c/neo-c.h"
    it->id=id;
    # 386 "/home/ab25cq/neo-c/neo-c.h"
    if(gAllocMem) {
        # 383 "/home/ab25cq/neo-c/neo-c.h"
        gAllocMem->prev=it;
    }
    # 386 "/home/ab25cq/neo-c/neo-c.h"
    gAllocMem=it;
    # 388 "/home/ab25cq/neo-c/neo-c.h"
    gNumAlloc++;
    # 390 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char*)result+sizeof(struct sMemHeader );
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* come_dynamic_typeof(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_dynamic_typeof"; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    char* __result_obj__0;
    memset(&it, 0, sizeof(it));
    # 395 "/home/ab25cq/neo-c/neo-c.h"
    # 403 "/home/ab25cq/neo-c/neo-c.h"
    if(!come_is_alive(mem)) {
        # 398 "/home/ab25cq/neo-c/neo-c.h"
        puts("invalid heap object");
        # 399 "/home/ab25cq/neo-c/neo-c.h"
        stackframe2(mem);
        # 400 "/home/ab25cq/neo-c/neo-c.h"
        exit(3);
    }
    # 403 "/home/ab25cq/neo-c/neo-c.h"
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
    # 411 "/home/ab25cq/neo-c/neo-c.h"
    if(it->allocated!=177783) {
        # 406 "/home/ab25cq/neo-c/neo-c.h"
        printf("invalid heap object(%p)(1)\n",it);
        # 407 "/home/ab25cq/neo-c/neo-c.h"
        stackframe2(mem);
        # 408 "/home/ab25cq/neo-c/neo-c.h"
        exit(2);
    }
    # 411 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char*)it->class_name;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

unsigned long  int  dynamic_sizeof(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "dynamic_sizeof"; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    unsigned long  int  size  ;
    memset(&it, 0, sizeof(it));
    memset(&size, 0, sizeof(size));
    # 416 "/home/ab25cq/neo-c/neo-c.h"
    # 424 "/home/ab25cq/neo-c/neo-c.h"
    if(!come_is_alive(mem)) {
        # 419 "/home/ab25cq/neo-c/neo-c.h"
        puts("invalid heap object");
        # 420 "/home/ab25cq/neo-c/neo-c.h"
        stackframe2(mem);
        # 421 "/home/ab25cq/neo-c/neo-c.h"
        exit(3);
    }
    # 424 "/home/ab25cq/neo-c/neo-c.h"
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
    # 431 "/home/ab25cq/neo-c/neo-c.h"
    if(it->allocated!=177783) {
        # 427 "/home/ab25cq/neo-c/neo-c.h"
        printf("invalid heap object(%p)(1)\n",it);
        # 428 "/home/ab25cq/neo-c/neo-c.h"
        stackframe2(mem);
        # 429 "/home/ab25cq/neo-c/neo-c.h"
        exit(2);
    }
    # 431 "/home/ab25cq/neo-c/neo-c.h"
    size=it->compiletime_size;
    # 433 "/home/ab25cq/neo-c/neo-c.h"
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
    memset(&mem, 0, sizeof(mem));
    memset(&ref_count, 0, sizeof(ref_count));
    memset(&size2, 0, sizeof(size2));
    # 443 "/home/ab25cq/neo-c/neo-c.h"
    # 445 "/home/ab25cq/neo-c/neo-c.h"
    mem=come_alloc_mem_from_heap_pool(count*size,sizeof(unsigned long  int )+sizeof(unsigned long  int )+count*size,sname,sline,id,class_name);
    # 447 "/home/ab25cq/neo-c/neo-c.h"
    ref_count=(unsigned long  int* )mem;
    # 449 "/home/ab25cq/neo-c/neo-c.h"
    *ref_count=0;
    # 451 "/home/ab25cq/neo-c/neo-c.h"
    size2=(unsigned long  int* )(mem+sizeof(unsigned long  int ));
    # 453 "/home/ab25cq/neo-c/neo-c.h"
    *size2=size*count+sizeof(unsigned long  int )+sizeof(unsigned long  int );
    # 455 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = mem+sizeof(unsigned long  int )+sizeof(unsigned long  int );
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool come_is_alive(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_is_alive"; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    memset(&it, 0, sizeof(it));
    # 463 "/home/ab25cq/neo-c/neo-c.h"
    if(mem==((void*)0)) {
        # 461 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 463 "/home/ab25cq/neo-c/neo-c.h"
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
    # 465 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return it->alive;
    neo_current_frame = fr.prev;
}

void come_free(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_free"; neo_current_frame = &fr;
    unsigned long  int*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    # 470 "/home/ab25cq/neo-c/neo-c.h"
    # 476 "/home/ab25cq/neo-c/neo-c.h"
    if(mem==((void*)0)) {
        # 473 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 482 "/home/ab25cq/neo-c/neo-c.h"
    if(!come_is_alive(mem)) {
        # 477 "/home/ab25cq/neo-c/neo-c.h"
        puts("invalid heap object");
        # 478 "/home/ab25cq/neo-c/neo-c.h"
        stackframe2(mem);
        # 479 "/home/ab25cq/neo-c/neo-c.h"
        exit(3);
    }
    # 482 "/home/ab25cq/neo-c/neo-c.h"
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    # 484 "/home/ab25cq/neo-c/neo-c.h"
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
    memset(&mem, 0, sizeof(mem));
    memset(&size_p, 0, sizeof(size_p));
    memset(&size, 0, sizeof(size));
    memset(&result, 0, sizeof(result));
    # 489 "/home/ab25cq/neo-c/neo-c.h"
    # 495 "/home/ab25cq/neo-c/neo-c.h"
    if(block==((void*)0)) {
        # 492 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 501 "/home/ab25cq/neo-c/neo-c.h"
    if(!come_is_alive(block)) {
        # 496 "/home/ab25cq/neo-c/neo-c.h"
        puts(((char*)(__right_value3=xsprintf("invalid heap object. \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 496, 19));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 496, 20));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 496, 21));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 496, 22));
        # 497 "/home/ab25cq/neo-c/neo-c.h"
        stackframe2(block);
        # 498 "/home/ab25cq/neo-c/neo-c.h"
        exit(3);
    }
    # 501 "/home/ab25cq/neo-c/neo-c.h"
    mem=(char*)block-sizeof(unsigned long  int )-sizeof(unsigned long  int );
    # 503 "/home/ab25cq/neo-c/neo-c.h"
    size_p=(unsigned long  int* )(mem+sizeof(unsigned long  int ));
    # 505 "/home/ab25cq/neo-c/neo-c.h"
    size=*size_p-sizeof(unsigned long  int )-sizeof(unsigned long  int );
    # 507 "/home/ab25cq/neo-c/neo-c.h"
    result=come_calloc(1,size,sname,sline,id,class_name);
    # 509 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(result,block,size);
    # 511 "/home/ab25cq/neo-c/neo-c.h"
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
    memset(&ref_count, 0, sizeof(ref_count));
    # 516 "/home/ab25cq/neo-c/neo-c.h"
    # 521 "/home/ab25cq/neo-c/neo-c.h"
    if(mem==((void*)0)) {
        # 519 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 527 "/home/ab25cq/neo-c/neo-c.h"
    if(!come_is_alive(mem)) {
        # 522 "/home/ab25cq/neo-c/neo-c.h"
        puts(((char*)(__right_value3=xsprintf("invalid heap object \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 522, 23));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 522, 24));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 522, 25));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 522, 26));
        # 523 "/home/ab25cq/neo-c/neo-c.h"
        stackframe2(mem);
        # 524 "/home/ab25cq/neo-c/neo-c.h"
        exit(3);
    }
    # 527 "/home/ab25cq/neo-c/neo-c.h"
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    # 529 "/home/ab25cq/neo-c/neo-c.h"
    (*ref_count)++;
    # 531 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_print_ref_count(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_print_ref_count"; neo_current_frame = &fr;
    void* __result_obj__0;
    unsigned long  int*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    # 536 "/home/ab25cq/neo-c/neo-c.h"
    # 541 "/home/ab25cq/neo-c/neo-c.h"
    if(mem==((void*)0)) {
        # 539 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 547 "/home/ab25cq/neo-c/neo-c.h"
    if(!come_is_alive(mem)) {
        # 542 "/home/ab25cq/neo-c/neo-c.h"
        puts("invalid heap object");
        # 543 "/home/ab25cq/neo-c/neo-c.h"
        stackframe();
        # 544 "/home/ab25cq/neo-c/neo-c.h"
        exit(3);
    }
    # 547 "/home/ab25cq/neo-c/neo-c.h"
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    # 549 "/home/ab25cq/neo-c/neo-c.h"
    printf("ref_count %ld\n",*ref_count);
    # 551 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int come_get_ref_count(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_get_ref_count"; neo_current_frame = &fr;
    unsigned long  int*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    # 556 "/home/ab25cq/neo-c/neo-c.h"
    # 561 "/home/ab25cq/neo-c/neo-c.h"
    if(mem==((void*)0)) {
        # 559 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 567 "/home/ab25cq/neo-c/neo-c.h"
    if(!come_is_alive(mem)) {
        # 562 "/home/ab25cq/neo-c/neo-c.h"
        puts("invalid heap object");
        # 563 "/home/ab25cq/neo-c/neo-c.h"
        stackframe();
        # 564 "/home/ab25cq/neo-c/neo-c.h"
        exit(3);
    }
    # 567 "/home/ab25cq/neo-c/neo-c.h"
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    # 569 "/home/ab25cq/neo-c/neo-c.h"
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
    memset(&ref_count, 0, sizeof(ref_count));
    memset(&count, 0, sizeof(count));
    memset(&finalizer, 0, sizeof(finalizer));
    # 574 "/home/ab25cq/neo-c/neo-c.h"
    # 581 "/home/ab25cq/neo-c/neo-c.h"
    if(result_obj) {
        # 580 "/home/ab25cq/neo-c/neo-c.h"
        if(mem==result_obj) {
            # 578 "/home/ab25cq/neo-c/neo-c.h"
                        __result_obj__0 = mem;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    # 584 "/home/ab25cq/neo-c/neo-c.h"
    if(mem==((void*)0)) {
        # 582 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 590 "/home/ab25cq/neo-c/neo-c.h"
    if(!come_is_alive(mem)) {
        # 585 "/home/ab25cq/neo-c/neo-c.h"
        puts(((char*)(__right_value3=xsprintf("invalid heap object \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 585, 27));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 585, 28));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 585, 29));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 585, 30));
        # 586 "/home/ab25cq/neo-c/neo-c.h"
        stackframe2(mem);
        # 587 "/home/ab25cq/neo-c/neo-c.h"
        exit(3);
    }
    # 590 "/home/ab25cq/neo-c/neo-c.h"
    ref_count=(long*)((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    # 596 "/home/ab25cq/neo-c/neo-c.h"
    if(!no_decrement) {
        # 593 "/home/ab25cq/neo-c/neo-c.h"
        (*ref_count)--;
    }
    # 596 "/home/ab25cq/neo-c/neo-c.h"
    count=*ref_count;
    # 608 "/home/ab25cq/neo-c/neo-c.h"
    if(!no_free&&count<=0) {
        # 604 "/home/ab25cq/neo-c/neo-c.h"
        if(protocol_obj&&protocol_fun) {
            # 599 "/home/ab25cq/neo-c/neo-c.h"
            finalizer=(void (*)(void*))protocol_fun;
            # 600 "/home/ab25cq/neo-c/neo-c.h"
            finalizer(protocol_obj);
            # 602 "/home/ab25cq/neo-c/neo-c.h"
            come_free(protocol_obj);
        }
        # 604 "/home/ab25cq/neo-c/neo-c.h"
        come_free(mem);
        # 605 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 608 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj, char* sname, int sline, int id)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_call_finalizer"; neo_current_frame = &fr;
    void (*finalizer)(void*);
    void (*finalizer_7)(void*);
    void (*finalizer_8)(void*);
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    long* ref_count;
    long count;
    void (*finalizer_9)(void*);
    void (*finalizer_10)(void*);
    void (*finalizer_11)(void*);
    memset(&finalizer, 0, sizeof(finalizer));
    memset(&finalizer_7, 0, sizeof(finalizer_7));
    memset(&finalizer_8, 0, sizeof(finalizer_8));
    memset(&ref_count, 0, sizeof(ref_count));
    memset(&count, 0, sizeof(count));
    memset(&finalizer_9, 0, sizeof(finalizer_9));
    memset(&finalizer_10, 0, sizeof(finalizer_10));
    memset(&finalizer_11, 0, sizeof(finalizer_11));
    # 613 "/home/ab25cq/neo-c/neo-c.h"
    # 620 "/home/ab25cq/neo-c/neo-c.h"
    if(result_obj) {
        # 619 "/home/ab25cq/neo-c/neo-c.h"
        if(mem==result_obj) {
            # 617 "/home/ab25cq/neo-c/neo-c.h"
                        neo_current_frame = fr.prev;
            return;
        }
    }
    # 624 "/home/ab25cq/neo-c/neo-c.h"
    if(mem==((void*)0)) {
        # 621 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 678 "/home/ab25cq/neo-c/neo-c.h"
    if(call_finalizer_only) {
        # 639 "/home/ab25cq/neo-c/neo-c.h"
        if(fun) {
            # 630 "/home/ab25cq/neo-c/neo-c.h"
            if(protocol_obj&&protocol_fun) {
                # 627 "/home/ab25cq/neo-c/neo-c.h"
                finalizer=(void (*)(void*))protocol_fun;
                # 628 "/home/ab25cq/neo-c/neo-c.h"
                finalizer(protocol_obj);
            }
            # 630 "/home/ab25cq/neo-c/neo-c.h"
            finalizer_7=(void (*)(void*))fun;
            # 631 "/home/ab25cq/neo-c/neo-c.h"
            finalizer_7(mem);
        }
        else {
            # 638 "/home/ab25cq/neo-c/neo-c.h"
            if(protocol_obj&&protocol_fun) {
                # 635 "/home/ab25cq/neo-c/neo-c.h"
                finalizer_8=(void (*)(void*))protocol_fun;
                # 636 "/home/ab25cq/neo-c/neo-c.h"
                finalizer_8(protocol_obj);
            }
        }
    }
    else {
        # 647 "/home/ab25cq/neo-c/neo-c.h"
        if(!come_is_alive(mem)) {
            # 642 "/home/ab25cq/neo-c/neo-c.h"
            puts(((char*)(__right_value3=xsprintf("invalid heap object. \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 642, 31));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 642, 32));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 642, 33));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 642, 34));
            # 643 "/home/ab25cq/neo-c/neo-c.h"
            stackframe2(mem);
            # 644 "/home/ab25cq/neo-c/neo-c.h"
            exit(3);
        }
        # 647 "/home/ab25cq/neo-c/neo-c.h"
        ref_count=(long*)((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
        # 653 "/home/ab25cq/neo-c/neo-c.h"
        if(!no_decrement) {
            # 650 "/home/ab25cq/neo-c/neo-c.h"
            (*ref_count)--;
        }
        # 653 "/home/ab25cq/neo-c/neo-c.h"
        count=*ref_count;
        # 677 "/home/ab25cq/neo-c/neo-c.h"
        if(!no_free&&count<=0) {
            # 676 "/home/ab25cq/neo-c/neo-c.h"
            if(mem) {
                # 674 "/home/ab25cq/neo-c/neo-c.h"
                if(fun) {
                    # 662 "/home/ab25cq/neo-c/neo-c.h"
                    if(protocol_obj&&protocol_fun) {
                        # 658 "/home/ab25cq/neo-c/neo-c.h"
                        finalizer_9=(void (*)(void*))protocol_fun;
                        # 659 "/home/ab25cq/neo-c/neo-c.h"
                        finalizer_9(protocol_obj);
                        # 660 "/home/ab25cq/neo-c/neo-c.h"
                        come_free(protocol_obj);
                    }
                    # 666 "/home/ab25cq/neo-c/neo-c.h"
                    if(fun) {
                        # 663 "/home/ab25cq/neo-c/neo-c.h"
                        finalizer_10=(void (*)(void*))fun;
                        # 664 "/home/ab25cq/neo-c/neo-c.h"
                        finalizer_10(mem);
                    }
                }
                else {
                    # 673 "/home/ab25cq/neo-c/neo-c.h"
                    if(protocol_obj&&protocol_fun) {
                        # 669 "/home/ab25cq/neo-c/neo-c.h"
                        finalizer_11=(void (*)(void*))protocol_fun;
                        # 670 "/home/ab25cq/neo-c/neo-c.h"
                        finalizer_11(protocol_obj);
                        # 671 "/home/ab25cq/neo-c/neo-c.h"
                        come_free(protocol_obj);
                    }
                }
                # 674 "/home/ab25cq/neo-c/neo-c.h"
                come_free(mem);
            }
        }
    }
    neo_current_frame = fr.prev;
}

void xassert(const char* msg, _Bool test)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xassert"; neo_current_frame = &fr;
    # 682 "/home/ab25cq/neo-c/neo-c.h"
    printf("%s...",msg);
    # 688 "/home/ab25cq/neo-c/neo-c.h"
    if(!test) {
        # 684 "/home/ab25cq/neo-c/neo-c.h"
        puts("false");
        # 685 "/home/ab25cq/neo-c/neo-c.h"
        stackframe();
        # 686 "/home/ab25cq/neo-c/neo-c.h"
        exit(2);
    }
    # 688 "/home/ab25cq/neo-c/neo-c.h"
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
    # 697 "/home/ab25cq/neo-c/neo-c.h"
    if(mem) {
        # 694 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 697 "/home/ab25cq/neo-c/neo-c.h"
    puts(((char*)(__right_value3=xsprintf("null pointer exception \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 697, 35));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 697, 36));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 697, 37));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 697, 38));
    # 698 "/home/ab25cq/neo-c/neo-c.h"
    stackframe();
    # 699 "/home/ab25cq/neo-c/neo-c.h"
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
    # 715 "/home/ab25cq/neo-c/neo-c.h"
    if(mem) {
        # 713 "/home/ab25cq/neo-c/neo-c.h"
        if(come_is_alive(mem)) {
            # 706 "/home/ab25cq/neo-c/neo-c.h"
                        __result_obj__0 = mem;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else {
            # 709 "/home/ab25cq/neo-c/neo-c.h"
            puts(((char*)(__right_value3=xsprintf("heap pointer exception \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 709, 39));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 709, 40));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 709, 41));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 709, 42));
            # 710 "/home/ab25cq/neo-c/neo-c.h"
            stackframe();
            # 711 "/home/ab25cq/neo-c/neo-c.h"
            exit(1);
        }
    }
    # 715 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    puts(((char*)(__right_value3=xsprintf("null pointer exception \%s \%s \%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 715, 43));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 715, 44));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 715, 45));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 715, 46));
    # 716 "/home/ab25cq/neo-c/neo-c.h"
    stackframe();
    # 717 "/home/ab25cq/neo-c/neo-c.h"
    exit(1);
    neo_current_frame = fr.prev;
}

char*  __builtin_string(const char* str, char* sname, int sline)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "__builtin_string"; neo_current_frame = &fr;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    # 725 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)) {
        # 723 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "/home/ab25cq/neo-c/neo-c.h", 723, 47);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 723, 48));
        return __result_obj__0;
    }
    # 725 "/home/ab25cq/neo-c/neo-c.h"
    len=strlen(str)+1;
    # 727 "/home/ab25cq/neo-c/neo-c.h"
    result=come_calloc(1,sizeof(char)*(len),sname,sline,0,"string");
    # 730 "/home/ab25cq/neo-c/neo-c.h"
    strncpy(result,str,len);
    # 732 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 732, 49);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 732, 50));
    return __result_obj__0;
}

struct buffer*  buffer_initialize(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj1;
    struct buffer*  __result_obj__0  ;
    # 4832 "/home/ab25cq/neo-c/neo-c.h"
    self->size=128;
    # 4833 "/home/ab25cq/neo-c/neo-c.h"
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/home/ab25cq/neo-c/neo-c.h", 4833, 51, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4833, 53);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4833, 52);
    # 4834 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[0]=0;
    # 4835 "/home/ab25cq/neo-c/neo-c.h"
    self->len=0;
    # 4837 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 4837, 54);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4837, 55);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4837, 56);
    return __result_obj__0;
}

struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  int  size  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize_with_value"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj2;
    struct buffer*  __result_obj__0  ;
    # 4842 "/home/ab25cq/neo-c/neo-c.h"
    self->size=128;
    # 4843 "/home/ab25cq/neo-c/neo-c.h"
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/home/ab25cq/neo-c/neo-c.h", 4843, 57, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4843, 59);
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4843, 58);
    # 4844 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[0]=0;
    # 4845 "/home/ab25cq/neo-c/neo-c.h"
    self->len=0;
    # 4847 "/home/ab25cq/neo-c/neo-c.h"
    buffer_append(self,mem,size);
    # 4849 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 4849, 60);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4849, 61);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4849, 62);
    return __result_obj__0;
}

void buffer_finalize(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_finalize"; neo_current_frame = &fr;
    # 4855 "/home/ab25cq/neo-c/neo-c.h"
    if(self&&self->buf) {
        # 4854 "/home/ab25cq/neo-c/neo-c.h"
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4854, 63));
    }
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_clone(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_clone"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct buffer*  result  ;
    char* __dec_obj3;
    memset(&result, 0, sizeof(result));
    # 4863 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 4860 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((void*)0), "/home/ab25cq/neo-c/neo-c.h", 4860, 64);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4860, 65);
        return __result_obj__0;
    }
    # 4863 "/home/ab25cq/neo-c/neo-c.h"
    result=(struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 4863, 66, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 4863, 67);
    # 4865 "/home/ab25cq/neo-c/neo-c.h"
    result->size=self->size;
    # 4866 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    __dec_obj3=result->buf,
    result->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/home/ab25cq/neo-c/neo-c.h", 4866, 68, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4866, 70);
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4866, 69);
    # 4867 "/home/ab25cq/neo-c/neo-c.h"
    result->len=self->len;
    # 4868 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(result->buf,self->buf,self->len);
    # 4870 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 4870, 71);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4870, 72);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4870, 73);
    return __result_obj__0;
}

_Bool buffer_equals(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_equals"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    _Bool __result_obj__0;
    # 4882 "/home/ab25cq/neo-c/neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 4876 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
        # 4879 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 4882 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = string_equals(((char* )(__right_value0=buffer_to_string(left))),((char* )(__right_value1=buffer_to_string(right))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4882, 74));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4882, 75));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_length(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_length"; neo_current_frame = &fr;
    # 4890 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 4888 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 4890 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self->len;
    neo_current_frame = fr.prev;
}

void buffer_reset(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_reset"; neo_current_frame = &fr;
    # 4898 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 4896 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 4898 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[0]=0;
    # 4899 "/home/ab25cq/neo-c/neo-c.h"
    self->len=0;
    neo_current_frame = fr.prev;
}

void buffer_trim(struct buffer*  self  , int len)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_trim"; neo_current_frame = &fr;
    # 4907 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 4905 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 4907 "/home/ab25cq/neo-c/neo-c.h"
    self->len-=len;
    # 4915 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len>=0) {
        # 4909 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[self->len]=0;
    }
    else {
        # 4912 "/home/ab25cq/neo-c/neo-c.h"
        self->len=0;
        # 4913 "/home/ab25cq/neo-c/neo-c.h"
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
    char* __dec_obj4;
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 4922 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)||mem==((void*)0)) {
        # 4920 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 4934 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 4923 "/home/ab25cq/neo-c/neo-c.h"
        old_len=self->len;
        # 4924 "/home/ab25cq/neo-c/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 4924, 76, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4924, 77);
        # 4925 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4927 "/home/ab25cq/neo-c/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 4928 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 4928, 78, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4928, 80);
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4928, 79);
        # 4929 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 4930 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 4931 "/home/ab25cq/neo-c/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4934, 81));
    }
    # 4934 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 4935 "/home/ab25cq/neo-c/neo-c.h"
    self->len+=size;
    # 4936 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 4938 "/home/ab25cq/neo-c/neo-c.h"
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
    char* __dec_obj5;
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 4946 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 4944 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 4958 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len+1+1+1>=self->size) {
        # 4947 "/home/ab25cq/neo-c/neo-c.h"
        old_len=self->len;
        # 4948 "/home/ab25cq/neo-c/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 4948, 82, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4948, 83);
        # 4949 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4951 "/home/ab25cq/neo-c/neo-c.h"
        new_size=(self->size+10+1)*2;
        # 4952 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 4952, 84, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4952, 86);
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4952, 85);
        # 4953 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 4954 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 4955 "/home/ab25cq/neo-c/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4958, 87));
    }
    # 4958 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[self->len]=c;
    # 4959 "/home/ab25cq/neo-c/neo-c.h"
    self->len++;
    # 4961 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 4963 "/home/ab25cq/neo-c/neo-c.h"
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
    char* __dec_obj6;
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 4972 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)||mem==((void*)0)) {
        # 4969 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 4972 "/home/ab25cq/neo-c/neo-c.h"
    size=strlen(mem);
    # 4984 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 4974 "/home/ab25cq/neo-c/neo-c.h"
        old_len=self->len;
        # 4975 "/home/ab25cq/neo-c/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 4975, 88, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4975, 89);
        # 4976 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4977 "/home/ab25cq/neo-c/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 4978 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 4978, 90, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4978, 92);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4978, 91);
        # 4979 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 4980 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 4981 "/home/ab25cq/neo-c/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4984, 93));
    }
    # 4984 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 4985 "/home/ab25cq/neo-c/neo-c.h"
    self->len+=size;
    # 4986 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 4988 "/home/ab25cq/neo-c/neo-c.h"
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
    char* __dec_obj7;
    memset(&result, 0, sizeof(result));
    memset(&len, 0, sizeof(len));
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 5036 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)||msg==((void*)0)) {
        # 5033 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5036 "/home/ab25cq/neo-c/neo-c.h"
    # 5037 "/home/ab25cq/neo-c/neo-c.h"
    __builtin_va_start(args,msg);
    # 5038 "/home/ab25cq/neo-c/neo-c.h"
    # 5039 "/home/ab25cq/neo-c/neo-c.h"
    len=vasprintf(&result,msg,args);
    # 5040 "/home/ab25cq/neo-c/neo-c.h"
    __builtin_va_end(args);
    # 5046 "/home/ab25cq/neo-c/neo-c.h"
    if(len<0) {
        # 5043 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5046 "/home/ab25cq/neo-c/neo-c.h"
    mem=(char* )come_increment_ref_count(__builtin_string(result,"/home/ab25cq/neo-c/neo-c.h",5046), "/home/ab25cq/neo-c/neo-c.h", 5046, 94);
    # 5048 "/home/ab25cq/neo-c/neo-c.h"
    size=strlen(mem);
    # 5060 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 5050 "/home/ab25cq/neo-c/neo-c.h"
        old_len=self->len;
        # 5051 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5051, 95, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5051, 96);
        # 5052 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5053 "/home/ab25cq/neo-c/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5054 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5054, 97, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5054, 99);
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5054, 98);
        # 5055 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5056 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5057 "/home/ab25cq/neo-c/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5060, 100));
    }
    # 5060 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5061 "/home/ab25cq/neo-c/neo-c.h"
    self->len+=size;
    # 5062 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5064 "/home/ab25cq/neo-c/neo-c.h"
    free(result);
    # 5066 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = self;
    (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5066, 101));
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
    char* __dec_obj8;
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 5075 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)||mem==((void*)0)) {
        # 5073 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5075 "/home/ab25cq/neo-c/neo-c.h"
    size=strlen(mem)+1;
    # 5087 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len+size+1+1+1>=self->size) {
        # 5077 "/home/ab25cq/neo-c/neo-c.h"
        old_len=self->len;
        # 5078 "/home/ab25cq/neo-c/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5078, 102, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5078, 103);
        # 5079 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5080 "/home/ab25cq/neo-c/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5081 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5081, 104, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5081, 106);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5081, 105);
        # 5082 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5083 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5084 "/home/ab25cq/neo-c/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5087, 107));
    }
    # 5087 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5088 "/home/ab25cq/neo-c/neo-c.h"
    self->len+=size;
    # 5089 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5090 "/home/ab25cq/neo-c/neo-c.h"
    self->len++;
    # 5092 "/home/ab25cq/neo-c/neo-c.h"
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
    char* __dec_obj9;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 5100 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5098 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5100 "/home/ab25cq/neo-c/neo-c.h"
    mem=&value;
    # 5101 "/home/ab25cq/neo-c/neo-c.h"
    size=sizeof(int);
    # 5114 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 5104 "/home/ab25cq/neo-c/neo-c.h"
        old_len=self->len;
        # 5105 "/home/ab25cq/neo-c/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5105, 108, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5105, 109);
        # 5106 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5107 "/home/ab25cq/neo-c/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5108 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5108, 110, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5108, 112);
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5108, 111);
        # 5109 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5110 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5111 "/home/ab25cq/neo-c/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5114, 113));
    }
    # 5114 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5115 "/home/ab25cq/neo-c/neo-c.h"
    self->len+=size;
    # 5116 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5118 "/home/ab25cq/neo-c/neo-c.h"
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
    char* __dec_obj10;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 5126 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5124 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5126 "/home/ab25cq/neo-c/neo-c.h"
    mem=&value;
    # 5127 "/home/ab25cq/neo-c/neo-c.h"
    size=sizeof(long);
    # 5140 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 5130 "/home/ab25cq/neo-c/neo-c.h"
        old_len=self->len;
        # 5131 "/home/ab25cq/neo-c/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5131, 114, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5131, 115);
        # 5132 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5133 "/home/ab25cq/neo-c/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5134 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5134, 116, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5134, 118);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5134, 117);
        # 5135 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5136 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5137 "/home/ab25cq/neo-c/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5140, 119));
    }
    # 5140 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5141 "/home/ab25cq/neo-c/neo-c.h"
    self->len+=size;
    # 5142 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5144 "/home/ab25cq/neo-c/neo-c.h"
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
    char* __dec_obj11;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 5153 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5150 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5153 "/home/ab25cq/neo-c/neo-c.h"
    mem=&value;
    # 5154 "/home/ab25cq/neo-c/neo-c.h"
    size=sizeof(short);
    # 5167 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 5157 "/home/ab25cq/neo-c/neo-c.h"
        old_len=self->len;
        # 5158 "/home/ab25cq/neo-c/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5158, 120, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5158, 121);
        # 5159 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5160 "/home/ab25cq/neo-c/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5161 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5161, 122, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5161, 124);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5161, 123);
        # 5162 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5163 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5164 "/home/ab25cq/neo-c/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5167, 125));
    }
    # 5167 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5168 "/home/ab25cq/neo-c/neo-c.h"
    self->len+=size;
    # 5169 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5171 "/home/ab25cq/neo-c/neo-c.h"
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
    char* __dec_obj12;
    int i;
    memset(&len, 0, sizeof(len));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    memset(&i, 0, sizeof(i));
    # 5180 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5177 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5180 "/home/ab25cq/neo-c/neo-c.h"
    len=self->len;
    # 5181 "/home/ab25cq/neo-c/neo-c.h"
    len=(len+3)&~3;
    # 5194 "/home/ab25cq/neo-c/neo-c.h"
    if(len>=self->size) {
        # 5184 "/home/ab25cq/neo-c/neo-c.h"
        old_len=self->len;
        # 5185 "/home/ab25cq/neo-c/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5185, 126, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5185, 127);
        # 5186 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5187 "/home/ab25cq/neo-c/neo-c.h"
        new_size=(self->size+1+1)*2;
        # 5188 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5188, 128, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5188, 130);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5188, 129);
        # 5189 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5190 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5191 "/home/ab25cq/neo-c/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5194, 131));
    }
    # 5198 "/home/ab25cq/neo-c/neo-c.h"
    for(i=self->len    ;i<len;i++){
        # 5195 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[i]=0;
    }
    # 5198 "/home/ab25cq/neo-c/neo-c.h"
    self->len=len;
    # 5200 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_compare(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_compare"; neo_current_frame = &fr;
    # 5215 "/home/ab25cq/neo-c/neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 5206 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
        # 5209 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
        # 5212 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 5215 "/home/ab25cq/neo-c/neo-c.h"
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
    memset(&result, 0, sizeof(result));
    # 5220 "/home/ab25cq/neo-c/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5220, 132, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5220, 133)), "/home/ab25cq/neo-c/neo-c.h", 5220, 134);
    # 5226 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5223 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5223, 135);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5223, 136);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5223, 137);
        return __result_obj__0;
    }
    # 5226 "/home/ab25cq/neo-c/neo-c.h"
    buffer_append_str(result,self);
    # 5228 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5228, 138);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5228, 139);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5228, 140);
    return __result_obj__0;
}

char*  buffer_to_string(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 5237 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5234 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5234))), "/home/ab25cq/neo-c/neo-c.h", 5234, 141);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5234, 142));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5234, 143));
        return __result_obj__0;
    }
    # 5237 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self->buf,"/home/ab25cq/neo-c/neo-c.h",5237))), "/home/ab25cq/neo-c/neo-c.h", 5237, 144);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5237, 145));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5237, 146));
    return __result_obj__0;
}

unsigned char* buffer_head_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_head_pointer"; neo_current_frame = &fr;
    unsigned char* __result_obj__0;
    # 5245 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5243 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5245 "/home/ab25cq/neo-c/neo-c.h"
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
    memset(&result, 0, sizeof(result));
    # 5250 "/home/ab25cq/neo-c/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5250, 147, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5250, 148)), "/home/ab25cq/neo-c/neo-c.h", 5250, 149);
    # 5254 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5252 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5252, 150);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5252, 151);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5252, 152);
        return __result_obj__0;
    }
    # 5254 "/home/ab25cq/neo-c/neo-c.h"
    buffer_append(result,self,sizeof(char)*len);
    # 5255 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5255, 153);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5255, 154);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5255, 155);
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
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    # 5260 "/home/ab25cq/neo-c/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5260, 156, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5260, 157)), "/home/ab25cq/neo-c/neo-c.h", 5260, 158);
    # 5264 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5262 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5262, 159);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5262, 160);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5262, 161);
        return __result_obj__0;
    }
    # 5267 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<len;i++){
        # 5265 "/home/ab25cq/neo-c/neo-c.h"
        buffer_append(result,self[i],strlen(self[i]));
    }
    # 5267 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5267, 162);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5267, 163);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5267, 164);
    return __result_obj__0;
}

struct buffer*  shorta_to_buffer(short* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    # 5272 "/home/ab25cq/neo-c/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5272, 165, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5272, 166)), "/home/ab25cq/neo-c/neo-c.h", 5272, 167);
    # 5276 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5274 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5274, 168);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5274, 169);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5274, 170);
        return __result_obj__0;
    }
    # 5276 "/home/ab25cq/neo-c/neo-c.h"
    buffer_append(result,(char*)self,sizeof(short)*len);
    # 5277 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5277, 171);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5277, 172);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5277, 173);
    return __result_obj__0;
}

struct buffer*  inta_to_buffer(int* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    # 5282 "/home/ab25cq/neo-c/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5282, 174, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5282, 175)), "/home/ab25cq/neo-c/neo-c.h", 5282, 176);
    # 5286 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5284 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5284, 177);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5284, 178);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5284, 179);
        return __result_obj__0;
    }
    # 5286 "/home/ab25cq/neo-c/neo-c.h"
    buffer_append(result,(char*)self,sizeof(int)*len);
    # 5287 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5287, 180);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5287, 181);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5287, 182);
    return __result_obj__0;
}

struct buffer*  longa_to_buffer(long* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    # 5292 "/home/ab25cq/neo-c/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5292, 183, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5292, 184)), "/home/ab25cq/neo-c/neo-c.h", 5292, 185);
    # 5296 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5294 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5294, 186);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5294, 187);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5294, 188);
        return __result_obj__0;
    }
    # 5296 "/home/ab25cq/neo-c/neo-c.h"
    buffer_append(result,(char*)self,sizeof(long)*len);
    # 5297 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5297, 189);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5297, 190);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5297, 191);
    return __result_obj__0;
}

struct buffer*  floata_to_buffer(float* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    # 5302 "/home/ab25cq/neo-c/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5302, 192, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5302, 193)), "/home/ab25cq/neo-c/neo-c.h", 5302, 194);
    # 5306 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5304 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5304, 195);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5304, 196);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5304, 197);
        return __result_obj__0;
    }
    # 5306 "/home/ab25cq/neo-c/neo-c.h"
    buffer_append(result,(char*)self,sizeof(float)*len);
    # 5307 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5307, 198);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5307, 199);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5307, 200);
    return __result_obj__0;
}

struct buffer*  doublea_to_buffer(double* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    # 5312 "/home/ab25cq/neo-c/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5312, 201, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5312, 202)), "/home/ab25cq/neo-c/neo-c.h", 5312, 203);
    # 5316 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5314 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5314, 204);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5314, 205);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5314, 206);
        return __result_obj__0;
    }
    # 5316 "/home/ab25cq/neo-c/neo-c.h"
    buffer_append(result,(char*)self,sizeof(double)*len);
    # 5317 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5317, 207);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5317, 208);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5317, 209);
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
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    memset(&n, 0, sizeof(n));
    memset(&i, 0, sizeof(i));
    memset(&c, 0, sizeof(c));
    # 5322 "/home/ab25cq/neo-c/neo-c.h"
    len=self->len;
    # 5323 "/home/ab25cq/neo-c/neo-c.h"
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), "/home/ab25cq/neo-c/neo-c.h", 5323, 210, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5323, 211);
    # 5329 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5326 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5326, 212);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5326, 213));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5326, 214));
        return __result_obj__0;
    }
    # 5329 "/home/ab25cq/neo-c/neo-c.h"
    n=0;
    # 5347 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<len;i++){
        # 5331 "/home/ab25cq/neo-c/neo-c.h"
        c=self->buf[i];
        # 5345 "/home/ab25cq/neo-c/neo-c.h"
        if((c>=0&&c<32)||c==127) {
            # 5336 "/home/ab25cq/neo-c/neo-c.h"
            result[n++]=94;
            # 5337 "/home/ab25cq/neo-c/neo-c.h"
            result[n++]=c+65-1;
        }
        else if(c>127) {
            # 5340 "/home/ab25cq/neo-c/neo-c.h"
            result[n++]=63;
        }
        else {
            # 5343 "/home/ab25cq/neo-c/neo-c.h"
            result[n++]=c;
        }
    }
    # 5349 "/home/ab25cq/neo-c/neo-c.h"
    result[n]=0;
    # 5349 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5349, 215);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5349, 216));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5349, 217));
    return __result_obj__0;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1char$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    # 1489 "/home/ab25cq/neo-c/neo-c.h"
    self->head=((void*)0);
    # 1490 "/home/ab25cq/neo-c/neo-c.h"
    self->tail=((void*)0);
    # 1491 "/home/ab25cq/neo-c/neo-c.h"
    self->len=0;
    # 1497 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "/home/ab25cq/neo-c/neo-c.h"
        list$1char$_push_back(self,values[i]);
    }
    # 1497 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1497, 225);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 227);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 228);
    return __result_obj__0;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_push_back"; neo_current_frame = &fr;
    struct list$1char$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$* litem;
    struct list_item$1char$* litem_12;
    struct list_item$1char$* litem_13;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_12, 0, sizeof(litem_12));
    memset(&litem_13, 0, sizeof(litem_13));
    # 1618 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len==0) {
        # 1619 "/home/ab25cq/neo-c/neo-c.h"
        litem=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1619, 219, "struct list_item$1char$*"))), "/home/ab25cq/neo-c/neo-c.h", 1619, 220);
        # 1621 "/home/ab25cq/neo-c/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/home/ab25cq/neo-c/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/home/ab25cq/neo-c/neo-c.h"
        litem->item=item;
        # 1625 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem;
        # 1626 "/home/ab25cq/neo-c/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1629, 221, "struct list_item$1char$*"))), "/home/ab25cq/neo-c/neo-c.h", 1629, 222);
        # 1631 "/home/ab25cq/neo-c/neo-c.h"
        litem_12->prev=self->head;
        # 1632 "/home/ab25cq/neo-c/neo-c.h"
        litem_12->next=((void*)0);
        # 1633 "/home/ab25cq/neo-c/neo-c.h"
        litem_12->item=item;
        # 1635 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_12;
        # 1636 "/home/ab25cq/neo-c/neo-c.h"
        self->head->next=litem_12;
    }
    else {
        # 1639 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1639, 223, "struct list_item$1char$*"))), "/home/ab25cq/neo-c/neo-c.h", 1639, 224);
        # 1641 "/home/ab25cq/neo-c/neo-c.h"
        litem_13->prev=self->tail;
        # 1642 "/home/ab25cq/neo-c/neo-c.h"
        litem_13->next=((void*)0);
        # 1643 "/home/ab25cq/neo-c/neo-c.h"
        litem_13->item=item;
        # 1645 "/home/ab25cq/neo-c/neo-c.h"
        self->tail->next=litem_13;
        # 1646 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_13;
    }
    # 1649 "/home/ab25cq/neo-c/neo-c.h"
    self->len++;
    # 1651 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$$p_finalize(struct list$1char$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1char$* it;
    struct list_item$1char$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1502 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1500 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "/home/ab25cq/neo-c/neo-c.h"
    it=self->head;
    # 1508 "/home/ab25cq/neo-c/neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "/home/ab25cq/neo-c/neo-c.h"
        prev_it=it;
        # 1505 "/home/ab25cq/neo-c/neo-c.h"
        it=it->next;
        # 1506 "/home/ab25cq/neo-c/neo-c.h"
        come_call_finalizer(list_item$1char$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1506, 226);
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
    # 5374 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value1=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc(1, sizeof(struct list$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5374, 218, "struct list$1char$*"), "/home/ab25cq/neo-c/neo-c.h", 5374, 229),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5374, 230);
    come_call_finalizer(list$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5374, 231);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5374, 232);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1char$p* __result_obj__0;
    memset(&i, 0, sizeof(i));
    # 1489 "/home/ab25cq/neo-c/neo-c.h"
    self->head=((void*)0);
    # 1490 "/home/ab25cq/neo-c/neo-c.h"
    self->tail=((void*)0);
    # 1491 "/home/ab25cq/neo-c/neo-c.h"
    self->len=0;
    # 1497 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "/home/ab25cq/neo-c/neo-c.h"
        list$1char$p_push_back(self,values[i]);
    }
    # 1497 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1497, 240);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 242);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 243);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_push_back"; neo_current_frame = &fr;
    struct list$1char$p* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$p* litem;
    struct list_item$1char$p* litem_14;
    struct list_item$1char$p* litem_15;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_14, 0, sizeof(litem_14));
    memset(&litem_15, 0, sizeof(litem_15));
    # 1618 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len==0) {
        # 1619 "/home/ab25cq/neo-c/neo-c.h"
        litem=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 1619, 234, "struct list_item$1char$p*"))), "/home/ab25cq/neo-c/neo-c.h", 1619, 235);
        # 1621 "/home/ab25cq/neo-c/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/home/ab25cq/neo-c/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/home/ab25cq/neo-c/neo-c.h"
        litem->item=item;
        # 1625 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem;
        # 1626 "/home/ab25cq/neo-c/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_14=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 1629, 236, "struct list_item$1char$p*"))), "/home/ab25cq/neo-c/neo-c.h", 1629, 237);
        # 1631 "/home/ab25cq/neo-c/neo-c.h"
        litem_14->prev=self->head;
        # 1632 "/home/ab25cq/neo-c/neo-c.h"
        litem_14->next=((void*)0);
        # 1633 "/home/ab25cq/neo-c/neo-c.h"
        litem_14->item=item;
        # 1635 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_14;
        # 1636 "/home/ab25cq/neo-c/neo-c.h"
        self->head->next=litem_14;
    }
    else {
        # 1639 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_15=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 1639, 238, "struct list_item$1char$p*"))), "/home/ab25cq/neo-c/neo-c.h", 1639, 239);
        # 1641 "/home/ab25cq/neo-c/neo-c.h"
        litem_15->prev=self->tail;
        # 1642 "/home/ab25cq/neo-c/neo-c.h"
        litem_15->next=((void*)0);
        # 1643 "/home/ab25cq/neo-c/neo-c.h"
        litem_15->item=item;
        # 1645 "/home/ab25cq/neo-c/neo-c.h"
        self->tail->next=litem_15;
        # 1646 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_15;
    }
    # 1649 "/home/ab25cq/neo-c/neo-c.h"
    self->len++;
    # 1651 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$p$p_finalize(struct list$1char$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p$p_finalize"; neo_current_frame = &fr;
    struct list_item$1char$p* it;
    struct list_item$1char$p* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1502 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1500 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "/home/ab25cq/neo-c/neo-c.h"
    it=self->head;
    # 1508 "/home/ab25cq/neo-c/neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "/home/ab25cq/neo-c/neo-c.h"
        prev_it=it;
        # 1505 "/home/ab25cq/neo-c/neo-c.h"
        it=it->next;
        # 1506 "/home/ab25cq/neo-c/neo-c.h"
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1506, 241);
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
    # 5379 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value1=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 5379, 233, "struct list$1char$p*"), "/home/ab25cq/neo-c/neo-c.h", 5379, 244),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5379, 245);
    come_call_finalizer(list$1char$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5379, 246);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5379, 247);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1short$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    # 1489 "/home/ab25cq/neo-c/neo-c.h"
    self->head=((void*)0);
    # 1490 "/home/ab25cq/neo-c/neo-c.h"
    self->tail=((void*)0);
    # 1491 "/home/ab25cq/neo-c/neo-c.h"
    self->len=0;
    # 1497 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "/home/ab25cq/neo-c/neo-c.h"
        list$1short$_push_back(self,values[i]);
    }
    # 1497 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1497, 255);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 257);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 258);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_push_back"; neo_current_frame = &fr;
    struct list$1short$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1short$* litem;
    struct list_item$1short$* litem_16;
    struct list_item$1short$* litem_17;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_16, 0, sizeof(litem_16));
    memset(&litem_17, 0, sizeof(litem_17));
    # 1618 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len==0) {
        # 1619 "/home/ab25cq/neo-c/neo-c.h"
        litem=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1619, 249, "struct list_item$1short$*"))), "/home/ab25cq/neo-c/neo-c.h", 1619, 250);
        # 1621 "/home/ab25cq/neo-c/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/home/ab25cq/neo-c/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/home/ab25cq/neo-c/neo-c.h"
        litem->item=item;
        # 1625 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem;
        # 1626 "/home/ab25cq/neo-c/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_16=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1629, 251, "struct list_item$1short$*"))), "/home/ab25cq/neo-c/neo-c.h", 1629, 252);
        # 1631 "/home/ab25cq/neo-c/neo-c.h"
        litem_16->prev=self->head;
        # 1632 "/home/ab25cq/neo-c/neo-c.h"
        litem_16->next=((void*)0);
        # 1633 "/home/ab25cq/neo-c/neo-c.h"
        litem_16->item=item;
        # 1635 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_16;
        # 1636 "/home/ab25cq/neo-c/neo-c.h"
        self->head->next=litem_16;
    }
    else {
        # 1639 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_17=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1639, 253, "struct list_item$1short$*"))), "/home/ab25cq/neo-c/neo-c.h", 1639, 254);
        # 1641 "/home/ab25cq/neo-c/neo-c.h"
        litem_17->prev=self->tail;
        # 1642 "/home/ab25cq/neo-c/neo-c.h"
        litem_17->next=((void*)0);
        # 1643 "/home/ab25cq/neo-c/neo-c.h"
        litem_17->item=item;
        # 1645 "/home/ab25cq/neo-c/neo-c.h"
        self->tail->next=litem_17;
        # 1646 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_17;
    }
    # 1649 "/home/ab25cq/neo-c/neo-c.h"
    self->len++;
    # 1651 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1short$$p_finalize(struct list$1short$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1short$* it;
    struct list_item$1short$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1502 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1500 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "/home/ab25cq/neo-c/neo-c.h"
    it=self->head;
    # 1508 "/home/ab25cq/neo-c/neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "/home/ab25cq/neo-c/neo-c.h"
        prev_it=it;
        # 1505 "/home/ab25cq/neo-c/neo-c.h"
        it=it->next;
        # 1506 "/home/ab25cq/neo-c/neo-c.h"
        come_call_finalizer(list_item$1short$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1506, 256);
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
    # 5384 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value1=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc(1, sizeof(struct list$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5384, 248, "struct list$1short$*"), "/home/ab25cq/neo-c/neo-c.h", 5384, 259),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5384, 260);
    come_call_finalizer(list$1short$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5384, 261);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5384, 262);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1int$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    # 1489 "/home/ab25cq/neo-c/neo-c.h"
    self->head=((void*)0);
    # 1490 "/home/ab25cq/neo-c/neo-c.h"
    self->tail=((void*)0);
    # 1491 "/home/ab25cq/neo-c/neo-c.h"
    self->len=0;
    # 1497 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "/home/ab25cq/neo-c/neo-c.h"
        list$1int$_push_back(self,values[i]);
    }
    # 1497 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1497, 270);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 272);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 273);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_push_back"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_18;
    struct list_item$1int$* litem_19;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_18, 0, sizeof(litem_18));
    memset(&litem_19, 0, sizeof(litem_19));
    # 1618 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len==0) {
        # 1619 "/home/ab25cq/neo-c/neo-c.h"
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1619, 264, "struct list_item$1int$*"))), "/home/ab25cq/neo-c/neo-c.h", 1619, 265);
        # 1621 "/home/ab25cq/neo-c/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/home/ab25cq/neo-c/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/home/ab25cq/neo-c/neo-c.h"
        litem->item=item;
        # 1625 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem;
        # 1626 "/home/ab25cq/neo-c/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_18=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1629, 266, "struct list_item$1int$*"))), "/home/ab25cq/neo-c/neo-c.h", 1629, 267);
        # 1631 "/home/ab25cq/neo-c/neo-c.h"
        litem_18->prev=self->head;
        # 1632 "/home/ab25cq/neo-c/neo-c.h"
        litem_18->next=((void*)0);
        # 1633 "/home/ab25cq/neo-c/neo-c.h"
        litem_18->item=item;
        # 1635 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_18;
        # 1636 "/home/ab25cq/neo-c/neo-c.h"
        self->head->next=litem_18;
    }
    else {
        # 1639 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_19=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1639, 268, "struct list_item$1int$*"))), "/home/ab25cq/neo-c/neo-c.h", 1639, 269);
        # 1641 "/home/ab25cq/neo-c/neo-c.h"
        litem_19->prev=self->tail;
        # 1642 "/home/ab25cq/neo-c/neo-c.h"
        litem_19->next=((void*)0);
        # 1643 "/home/ab25cq/neo-c/neo-c.h"
        litem_19->item=item;
        # 1645 "/home/ab25cq/neo-c/neo-c.h"
        self->tail->next=litem_19;
        # 1646 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_19;
    }
    # 1649 "/home/ab25cq/neo-c/neo-c.h"
    self->len++;
    # 1651 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1502 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1500 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "/home/ab25cq/neo-c/neo-c.h"
    it=self->head;
    # 1508 "/home/ab25cq/neo-c/neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "/home/ab25cq/neo-c/neo-c.h"
        prev_it=it;
        # 1505 "/home/ab25cq/neo-c/neo-c.h"
        it=it->next;
        # 1506 "/home/ab25cq/neo-c/neo-c.h"
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1506, 271);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1int$$p_finalize"
            neo_current_frame = fr.prev;
}

struct list$1int$* inta_to_list(int* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* __result_obj__0;
    # 5389 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value1=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5389, 263, "struct list$1int$*"), "/home/ab25cq/neo-c/neo-c.h", 5389, 274),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5389, 275);
    come_call_finalizer(list$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5389, 276);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5389, 277);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1long$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    # 1489 "/home/ab25cq/neo-c/neo-c.h"
    self->head=((void*)0);
    # 1490 "/home/ab25cq/neo-c/neo-c.h"
    self->tail=((void*)0);
    # 1491 "/home/ab25cq/neo-c/neo-c.h"
    self->len=0;
    # 1497 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "/home/ab25cq/neo-c/neo-c.h"
        list$1long$_push_back(self,values[i]);
    }
    # 1497 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1497, 285);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 287);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 288);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_push_back"; neo_current_frame = &fr;
    struct list$1long$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1long$* litem;
    struct list_item$1long$* litem_20;
    struct list_item$1long$* litem_21;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_20, 0, sizeof(litem_20));
    memset(&litem_21, 0, sizeof(litem_21));
    # 1618 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len==0) {
        # 1619 "/home/ab25cq/neo-c/neo-c.h"
        litem=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1619, 279, "struct list_item$1long$*"))), "/home/ab25cq/neo-c/neo-c.h", 1619, 280);
        # 1621 "/home/ab25cq/neo-c/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/home/ab25cq/neo-c/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/home/ab25cq/neo-c/neo-c.h"
        litem->item=item;
        # 1625 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem;
        # 1626 "/home/ab25cq/neo-c/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_20=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1629, 281, "struct list_item$1long$*"))), "/home/ab25cq/neo-c/neo-c.h", 1629, 282);
        # 1631 "/home/ab25cq/neo-c/neo-c.h"
        litem_20->prev=self->head;
        # 1632 "/home/ab25cq/neo-c/neo-c.h"
        litem_20->next=((void*)0);
        # 1633 "/home/ab25cq/neo-c/neo-c.h"
        litem_20->item=item;
        # 1635 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_20;
        # 1636 "/home/ab25cq/neo-c/neo-c.h"
        self->head->next=litem_20;
    }
    else {
        # 1639 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_21=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1639, 283, "struct list_item$1long$*"))), "/home/ab25cq/neo-c/neo-c.h", 1639, 284);
        # 1641 "/home/ab25cq/neo-c/neo-c.h"
        litem_21->prev=self->tail;
        # 1642 "/home/ab25cq/neo-c/neo-c.h"
        litem_21->next=((void*)0);
        # 1643 "/home/ab25cq/neo-c/neo-c.h"
        litem_21->item=item;
        # 1645 "/home/ab25cq/neo-c/neo-c.h"
        self->tail->next=litem_21;
        # 1646 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_21;
    }
    # 1649 "/home/ab25cq/neo-c/neo-c.h"
    self->len++;
    # 1651 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1long$$p_finalize(struct list$1long$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1long$* it;
    struct list_item$1long$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1502 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1500 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "/home/ab25cq/neo-c/neo-c.h"
    it=self->head;
    # 1508 "/home/ab25cq/neo-c/neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "/home/ab25cq/neo-c/neo-c.h"
        prev_it=it;
        # 1505 "/home/ab25cq/neo-c/neo-c.h"
        it=it->next;
        # 1506 "/home/ab25cq/neo-c/neo-c.h"
        come_call_finalizer(list_item$1long$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1506, 286);
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
    # 5394 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value1=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc(1, sizeof(struct list$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5394, 278, "struct list$1long$*"), "/home/ab25cq/neo-c/neo-c.h", 5394, 289),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5394, 290);
    come_call_finalizer(list$1long$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5394, 291);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5394, 292);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1float$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    # 1489 "/home/ab25cq/neo-c/neo-c.h"
    self->head=((void*)0);
    # 1490 "/home/ab25cq/neo-c/neo-c.h"
    self->tail=((void*)0);
    # 1491 "/home/ab25cq/neo-c/neo-c.h"
    self->len=0;
    # 1497 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "/home/ab25cq/neo-c/neo-c.h"
        list$1float$_push_back(self,values[i]);
    }
    # 1497 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1497, 300);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 302);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 303);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_push_back"; neo_current_frame = &fr;
    struct list$1float$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1float$* litem;
    struct list_item$1float$* litem_22;
    struct list_item$1float$* litem_23;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_22, 0, sizeof(litem_22));
    memset(&litem_23, 0, sizeof(litem_23));
    # 1618 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len==0) {
        # 1619 "/home/ab25cq/neo-c/neo-c.h"
        litem=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1619, 294, "struct list_item$1float$*"))), "/home/ab25cq/neo-c/neo-c.h", 1619, 295);
        # 1621 "/home/ab25cq/neo-c/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/home/ab25cq/neo-c/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/home/ab25cq/neo-c/neo-c.h"
        litem->item=item;
        # 1625 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem;
        # 1626 "/home/ab25cq/neo-c/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_22=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1629, 296, "struct list_item$1float$*"))), "/home/ab25cq/neo-c/neo-c.h", 1629, 297);
        # 1631 "/home/ab25cq/neo-c/neo-c.h"
        litem_22->prev=self->head;
        # 1632 "/home/ab25cq/neo-c/neo-c.h"
        litem_22->next=((void*)0);
        # 1633 "/home/ab25cq/neo-c/neo-c.h"
        litem_22->item=item;
        # 1635 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_22;
        # 1636 "/home/ab25cq/neo-c/neo-c.h"
        self->head->next=litem_22;
    }
    else {
        # 1639 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_23=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1639, 298, "struct list_item$1float$*"))), "/home/ab25cq/neo-c/neo-c.h", 1639, 299);
        # 1641 "/home/ab25cq/neo-c/neo-c.h"
        litem_23->prev=self->tail;
        # 1642 "/home/ab25cq/neo-c/neo-c.h"
        litem_23->next=((void*)0);
        # 1643 "/home/ab25cq/neo-c/neo-c.h"
        litem_23->item=item;
        # 1645 "/home/ab25cq/neo-c/neo-c.h"
        self->tail->next=litem_23;
        # 1646 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_23;
    }
    # 1649 "/home/ab25cq/neo-c/neo-c.h"
    self->len++;
    # 1651 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1float$$p_finalize(struct list$1float$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1float$* it;
    struct list_item$1float$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1502 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1500 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "/home/ab25cq/neo-c/neo-c.h"
    it=self->head;
    # 1508 "/home/ab25cq/neo-c/neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "/home/ab25cq/neo-c/neo-c.h"
        prev_it=it;
        # 1505 "/home/ab25cq/neo-c/neo-c.h"
        it=it->next;
        # 1506 "/home/ab25cq/neo-c/neo-c.h"
        come_call_finalizer(list_item$1float$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1506, 301);
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
    # 5399 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value1=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc(1, sizeof(struct list$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5399, 293, "struct list$1float$*"), "/home/ab25cq/neo-c/neo-c.h", 5399, 304),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5399, 305);
    come_call_finalizer(list$1float$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5399, 306);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5399, 307);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1double$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    # 1489 "/home/ab25cq/neo-c/neo-c.h"
    self->head=((void*)0);
    # 1490 "/home/ab25cq/neo-c/neo-c.h"
    self->tail=((void*)0);
    # 1491 "/home/ab25cq/neo-c/neo-c.h"
    self->len=0;
    # 1497 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "/home/ab25cq/neo-c/neo-c.h"
        list$1double$_push_back(self,values[i]);
    }
    # 1497 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1497, 315);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 317);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 318);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_push_back"; neo_current_frame = &fr;
    struct list$1double$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1double$* litem;
    struct list_item$1double$* litem_24;
    struct list_item$1double$* litem_25;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_24, 0, sizeof(litem_24));
    memset(&litem_25, 0, sizeof(litem_25));
    # 1618 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len==0) {
        # 1619 "/home/ab25cq/neo-c/neo-c.h"
        litem=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1619, 309, "struct list_item$1double$*"))), "/home/ab25cq/neo-c/neo-c.h", 1619, 310);
        # 1621 "/home/ab25cq/neo-c/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/home/ab25cq/neo-c/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/home/ab25cq/neo-c/neo-c.h"
        litem->item=item;
        # 1625 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem;
        # 1626 "/home/ab25cq/neo-c/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_24=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1629, 311, "struct list_item$1double$*"))), "/home/ab25cq/neo-c/neo-c.h", 1629, 312);
        # 1631 "/home/ab25cq/neo-c/neo-c.h"
        litem_24->prev=self->head;
        # 1632 "/home/ab25cq/neo-c/neo-c.h"
        litem_24->next=((void*)0);
        # 1633 "/home/ab25cq/neo-c/neo-c.h"
        litem_24->item=item;
        # 1635 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_24;
        # 1636 "/home/ab25cq/neo-c/neo-c.h"
        self->head->next=litem_24;
    }
    else {
        # 1639 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_25=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1639, 313, "struct list_item$1double$*"))), "/home/ab25cq/neo-c/neo-c.h", 1639, 314);
        # 1641 "/home/ab25cq/neo-c/neo-c.h"
        litem_25->prev=self->tail;
        # 1642 "/home/ab25cq/neo-c/neo-c.h"
        litem_25->next=((void*)0);
        # 1643 "/home/ab25cq/neo-c/neo-c.h"
        litem_25->item=item;
        # 1645 "/home/ab25cq/neo-c/neo-c.h"
        self->tail->next=litem_25;
        # 1646 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_25;
    }
    # 1649 "/home/ab25cq/neo-c/neo-c.h"
    self->len++;
    # 1651 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1double$$p_finalize(struct list$1double$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1double$* it;
    struct list_item$1double$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1502 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1500 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "/home/ab25cq/neo-c/neo-c.h"
    it=self->head;
    # 1508 "/home/ab25cq/neo-c/neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "/home/ab25cq/neo-c/neo-c.h"
        prev_it=it;
        # 1505 "/home/ab25cq/neo-c/neo-c.h"
        it=it->next;
        # 1506 "/home/ab25cq/neo-c/neo-c.h"
        come_call_finalizer(list_item$1double$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1506, 316);
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
    # 5404 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value1=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc(1, sizeof(struct list$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5404, 308, "struct list$1double$*"), "/home/ab25cq/neo-c/neo-c.h", 5404, 319),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5404, 320);
    come_call_finalizer(list$1double$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5404, 321);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5404, 322);
    return __result_obj__0;
}

_Bool _Bool_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_equals"; neo_current_frame = &fr;
    # 5417 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_equals"; neo_current_frame = &fr;
    # 5422 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_equals"; neo_current_frame = &fr;
    # 5427 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_equals"; neo_current_frame = &fr;
    # 5432 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_equals"; neo_current_frame = &fr;
    # 5437 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool size_t_equals(unsigned long  int  self  , unsigned long  int  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_equals"; neo_current_frame = &fr;
    # 5442 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool float_equals(float self, float right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_equals"; neo_current_frame = &fr;
    # 5447 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool double_equals(double self, double right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_equals"; neo_current_frame = &fr;
    # 5452 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_equals"; neo_current_frame = &fr;
    # 5462 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_operator_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_equals"; neo_current_frame = &fr;
    # 5467 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_operator_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_equals"; neo_current_frame = &fr;
    # 5472 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_operator_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_equals"; neo_current_frame = &fr;
    # 5477 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_operator_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_equals"; neo_current_frame = &fr;
    # 5482 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_not_equals"; neo_current_frame = &fr;
    # 5492 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool char_operator_not_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_not_equals"; neo_current_frame = &fr;
    # 5497 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool short_operator_not_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_not_equals"; neo_current_frame = &fr;
    # 5502 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool int_operator_not_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_not_equals"; neo_current_frame = &fr;
    # 5507 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool long_operator_not_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_not_equals"; neo_current_frame = &fr;
    # 5512 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool charp_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_equals"; neo_current_frame = &fr;
    # 5527 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5518 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5521 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
        # 5524 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5527 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool string_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_equals"; neo_current_frame = &fr;
    # 5542 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5533 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5536 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
        # 5539 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5542 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool voidp_equals(void* self, void* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_equals"; neo_current_frame = &fr;
    # 5547 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Boolp_equals(_Bool* self, _Bool* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Boolp_equals"; neo_current_frame = &fr;
    # 5552 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return *self==*right;
    neo_current_frame = fr.prev;
}

_Bool string_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_equals"; neo_current_frame = &fr;
    # 5567 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5558 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5561 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
        # 5564 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5567 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool charp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_equals"; neo_current_frame = &fr;
    # 5582 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5573 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5576 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
        # 5579 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5582 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool chara_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_equals"; neo_current_frame = &fr;
    # 5594 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5588 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5591 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 5594 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool voidp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_equals"; neo_current_frame = &fr;
    # 5599 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool voidp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_not_equals"; neo_current_frame = &fr;
    # 5604 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return !charp_operator_equals(self,right);
    neo_current_frame = fr.prev;
}

_Bool string_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_not_equals"; neo_current_frame = &fr;
    # 5616 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5610 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5613 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5616 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool charp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_not_equals"; neo_current_frame = &fr;
    # 5628 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5622 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5625 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5628 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool chara_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_not_equals"; neo_current_frame = &fr;
    # 5640 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5634 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5637 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5640 "/home/ab25cq/neo-c/neo-c.h"
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
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    # 5649 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)||right==((void*)0)) {
        # 5647 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5647))), "/home/ab25cq/neo-c/neo-c.h", 5647, 323);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5647, 324));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5647, 325));
        return __result_obj__0;
    }
    # 5649 "/home/ab25cq/neo-c/neo-c.h"
    len=strlen(self)+strlen(right);
    # 5651 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "/home/ab25cq/neo-c/neo-c.h", 5651, 326, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5651, 327);
    # 5653 "/home/ab25cq/neo-c/neo-c.h"
    strncpy(result,self,len+1);
    # 5654 "/home/ab25cq/neo-c/neo-c.h"
    strncat(result,right,len+1);
    # 5656 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5656, 328);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5656, 329));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5656, 330));
    return __result_obj__0;
}

char*  string_operator_add(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_add"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    # 5664 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)||right==((void*)0)) {
        # 5662 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5662))), "/home/ab25cq/neo-c/neo-c.h", 5662, 331);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5662, 332));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5662, 333));
        return __result_obj__0;
    }
    # 5664 "/home/ab25cq/neo-c/neo-c.h"
    len=strlen(self)+strlen(right);
    # 5666 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "/home/ab25cq/neo-c/neo-c.h", 5666, 334, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5666, 335);
    # 5668 "/home/ab25cq/neo-c/neo-c.h"
    strncpy(result,self,len+1);
    # 5669 "/home/ab25cq/neo-c/neo-c.h"
    strncat(result,right,len+1);
    # 5671 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5671, 336);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5671, 337));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5671, 338));
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
    memset(&buf, 0, sizeof(buf));
    memset(&i, 0, sizeof(i));
    # 5679 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5677 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5677))), "/home/ab25cq/neo-c/neo-c.h", 5677, 339);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5677, 340));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5677, 341));
        return __result_obj__0;
    }
    # 5679 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5679, 342, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5679, 343)), "/home/ab25cq/neo-c/neo-c.h", 5679, 344);
    # 5685 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<right;i++){
        # 5682 "/home/ab25cq/neo-c/neo-c.h"
        buffer_append_str(buf,self);
    }
    # 5685 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "/home/ab25cq/neo-c/neo-c.h", 5685, 345);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5685, 346);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5685, 347));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5685, 348));
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
    memset(&buf, 0, sizeof(buf));
    memset(&i, 0, sizeof(i));
    # 5693 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5691 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5691))), "/home/ab25cq/neo-c/neo-c.h", 5691, 349);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5691, 350));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5691, 351));
        return __result_obj__0;
    }
    # 5693 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5693, 352, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5693, 353)), "/home/ab25cq/neo-c/neo-c.h", 5693, 354);
    # 5699 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<right;i++){
        # 5696 "/home/ab25cq/neo-c/neo-c.h"
        buffer_append_str(buf,self);
    }
    # 5699 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "/home/ab25cq/neo-c/neo-c.h", 5699, 355);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5699, 356);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5699, 357));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5699, 358));
    return __result_obj__0;
}

_Bool charpa_contained(const char* self[], unsigned long  int  len  , const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_contained"; neo_current_frame = &fr;
    _Bool result;
    int i;
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    # 5709 "/home/ab25cq/neo-c/neo-c.h"
    result=(_Bool)0;
    # 5713 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5711 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return result;
    }
    # 5719 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<len;i++){
        # 5718 "/home/ab25cq/neo-c/neo-c.h"
        if(strncmp(self[i],str,strlen(self[i]))==0) {
            # 5715 "/home/ab25cq/neo-c/neo-c.h"
            result=(_Bool)1;
            # 5716 "/home/ab25cq/neo-c/neo-c.h"
            break;
        }
    }
    # 5719 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned long  int  shorta_length(short* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_length"; neo_current_frame = &fr;
    # 5724 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  inta_length(int* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "inta_length"; neo_current_frame = &fr;
    # 5729 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  longa_length(long* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "longa_length"; neo_current_frame = &fr;
    # 5734 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  floata_length(float* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "floata_length"; neo_current_frame = &fr;
    # 5739 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  doublea_length(double* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_length"; neo_current_frame = &fr;
    # 5744 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned int _Bool_get_hash_key(_Bool value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_get_hash_key"; neo_current_frame = &fr;
    # 5757 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

unsigned int char_get_hash_key(char value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_get_hash_key"; neo_current_frame = &fr;
    # 5762 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int short_get_hash_key(short int value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_get_hash_key"; neo_current_frame = &fr;
    # 5767 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int int_get_hash_key(int value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_get_hash_key"; neo_current_frame = &fr;
    # 5772 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int long_get_hash_key(long value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_get_hash_key"; neo_current_frame = &fr;
    # 5777 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int size_t_get_hash_key(unsigned long  int  value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_get_hash_key"; neo_current_frame = &fr;
    # 5782 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int float_get_hash_key(float value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_get_hash_key"; neo_current_frame = &fr;
    # 5787 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int double_get_hash_key(double value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_get_hash_key"; neo_current_frame = &fr;
    # 5792 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int charp_get_hash_key(const char* value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_get_hash_key"; neo_current_frame = &fr;
    int result;
    memset(&result, 0, sizeof(result));
    # 5800 "/home/ab25cq/neo-c/neo-c.h"
    if(value==((void*)0)) {
        # 5798 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5800 "/home/ab25cq/neo-c/neo-c.h"
    result=0;
    # 5801 "/home/ab25cq/neo-c/neo-c.h"
    const char* p=value;
    # 5806 "/home/ab25cq/neo-c/neo-c.h"
    while(*p) {
        # 5803 "/home/ab25cq/neo-c/neo-c.h"
        result+=(*p);
        # 5804 "/home/ab25cq/neo-c/neo-c.h"
        p++;
    }
    # 5806 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned int string_get_hash_key(char* value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_get_hash_key"; neo_current_frame = &fr;
    int result;
    char* p;
    memset(&result, 0, sizeof(result));
    memset(&p, 0, sizeof(p));
    # 5814 "/home/ab25cq/neo-c/neo-c.h"
    if(value==((void*)0)) {
        # 5812 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5814 "/home/ab25cq/neo-c/neo-c.h"
    result=0;
    # 5815 "/home/ab25cq/neo-c/neo-c.h"
    p=value;
    # 5820 "/home/ab25cq/neo-c/neo-c.h"
    while(*p) {
        # 5817 "/home/ab25cq/neo-c/neo-c.h"
        result+=(*p);
        # 5818 "/home/ab25cq/neo-c/neo-c.h"
        p++;
    }
    # 5820 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned int voidp_get_hash_key(void* value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_get_hash_key"; neo_current_frame = &fr;
    # 5825 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

_Bool _Bool_clone(_Bool self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_clone"; neo_current_frame = &fr;
    # 5838 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

char char_clone(char self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_clone"; neo_current_frame = &fr;
    # 5843 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

short int short_clone(short self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_clone"; neo_current_frame = &fr;
    # 5848 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

int int_clone(int self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_clone"; neo_current_frame = &fr;
    # 5853 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long  int long_clone(long self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_clone"; neo_current_frame = &fr;
    # 5858 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

unsigned long  int  size_t_clone(unsigned long  int  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_clone"; neo_current_frame = &fr;
    # 5863 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

double double_clone(double self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_clone"; neo_current_frame = &fr;
    # 5868 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

float float_clone(float self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_clone"; neo_current_frame = &fr;
    # 5873 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

_Bool xisalpha(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisalpha"; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    # 5882 "/home/ab25cq/neo-c/neo-c.h"
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 5883 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xisblank(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisblank"; neo_current_frame = &fr;
    # 5888 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xisdigit(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisdigit"; neo_current_frame = &fr;
    # 5893 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xisspace(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisspace"; neo_current_frame = &fr;
    # 5898 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return c==32||c==9||c==10||c==13||c==28||c==11;
    neo_current_frame = fr.prev;
}

_Bool xisalnum(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisalnum"; neo_current_frame = &fr;
    # 5903 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return xisalpha(c)||xisdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xisascii(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisascii"; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    # 5908 "/home/ab25cq/neo-c/neo-c.h"
    result=(c>=32&&c<=126);
    # 5909 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xispunct(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xispunct"; neo_current_frame = &fr;
    # 5913 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
    neo_current_frame = fr.prev;
}

int string_length(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_length"; neo_current_frame = &fr;
    # 5924 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)) {
        # 5922 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5924 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int charp_length(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_length"; neo_current_frame = &fr;
    # 5931 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)) {
        # 5929 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5931 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int chara_length(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_length"; neo_current_frame = &fr;
    # 5945 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)) {
        # 5943 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5945 "/home/ab25cq/neo-c/neo-c.h"
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
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    # 5953 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)) {
        # 5951 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5951))), "/home/ab25cq/neo-c/neo-c.h", 5951, 359);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5951, 360));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5951, 361));
        return __result_obj__0;
    }
    # 5953 "/home/ab25cq/neo-c/neo-c.h"
    len=strlen(str);
    # 5954 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "/home/ab25cq/neo-c/neo-c.h", 5954, 362, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5954, 363);
    # 5960 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<len;i++){
        # 5957 "/home/ab25cq/neo-c/neo-c.h"
        result[i]=str[len-i-1];
    }
    # 5960 "/home/ab25cq/neo-c/neo-c.h"
    result[len]=0;
    # 5962 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5962, 364);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5962, 365));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5962, 366));
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
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    # 5971 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)) {
        # 5968 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5968))), "/home/ab25cq/neo-c/neo-c.h", 5968, 367);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5968, 368));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5968, 369));
        return __result_obj__0;
    }
    # 5971 "/home/ab25cq/neo-c/neo-c.h"
    len=strlen(str);
    # 5976 "/home/ab25cq/neo-c/neo-c.h"
    if(head<0) {
        # 5974 "/home/ab25cq/neo-c/neo-c.h"
        head+=len;
    }
    # 5980 "/home/ab25cq/neo-c/neo-c.h"
    if(tail<0) {
        # 5977 "/home/ab25cq/neo-c/neo-c.h"
        tail+=len+1;
    }
    # 5984 "/home/ab25cq/neo-c/neo-c.h"
    if(head>tail) {
        # 5981 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/home/ab25cq/neo-c/neo-c.h", 5981, 370);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5981, 371));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5981, 372));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5981, 373));
        return __result_obj__0;
    }
    # 5988 "/home/ab25cq/neo-c/neo-c.h"
    if(head<0) {
        # 5985 "/home/ab25cq/neo-c/neo-c.h"
        head=0;
    }
    # 5992 "/home/ab25cq/neo-c/neo-c.h"
    if(tail>=len) {
        # 5989 "/home/ab25cq/neo-c/neo-c.h"
        tail=len;
    }
    # 5996 "/home/ab25cq/neo-c/neo-c.h"
    if(head==tail) {
        # 5993 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5993))), "/home/ab25cq/neo-c/neo-c.h", 5993, 374);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5993, 375));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5993, 376));
        return __result_obj__0;
    }
    # 6000 "/home/ab25cq/neo-c/neo-c.h"
    if(tail-head+1<1) {
        # 5997 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5997))), "/home/ab25cq/neo-c/neo-c.h", 5997, 377);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5997, 378));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5997, 379));
        return __result_obj__0;
    }
    # 6000 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/home/ab25cq/neo-c/neo-c.h", 6000, 380, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6000, 381);
    # 6002 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(result,str+head,tail-head);
    # 6003 "/home/ab25cq/neo-c/neo-c.h"
    result[tail-head]=0;
    # 6005 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6005, 382);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6005, 383));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6005, 384));
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
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    # 6014 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)) {
        # 6011 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6011))), "/home/ab25cq/neo-c/neo-c.h", 6011, 385);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6011, 386));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6011, 387));
        return __result_obj__0;
    }
    # 6014 "/home/ab25cq/neo-c/neo-c.h"
    len=strlen(str);
    # 6019 "/home/ab25cq/neo-c/neo-c.h"
    if(head<0) {
        # 6017 "/home/ab25cq/neo-c/neo-c.h"
        head+=len;
    }
    # 6023 "/home/ab25cq/neo-c/neo-c.h"
    if(tail<0) {
        # 6020 "/home/ab25cq/neo-c/neo-c.h"
        tail+=len+1;
    }
    # 6027 "/home/ab25cq/neo-c/neo-c.h"
    if(head>tail) {
        # 6024 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/home/ab25cq/neo-c/neo-c.h", 6024, 388);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6024, 389));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6024, 390));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6024, 391));
        return __result_obj__0;
    }
    # 6031 "/home/ab25cq/neo-c/neo-c.h"
    if(head<0) {
        # 6028 "/home/ab25cq/neo-c/neo-c.h"
        head=0;
    }
    # 6035 "/home/ab25cq/neo-c/neo-c.h"
    if(tail>=len) {
        # 6032 "/home/ab25cq/neo-c/neo-c.h"
        tail=len;
    }
    # 6039 "/home/ab25cq/neo-c/neo-c.h"
    if(head==tail) {
        # 6036 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6036))), "/home/ab25cq/neo-c/neo-c.h", 6036, 392);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6036, 393));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6036, 394));
        return __result_obj__0;
    }
    # 6043 "/home/ab25cq/neo-c/neo-c.h"
    if(tail-head+1<1) {
        # 6040 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6040))), "/home/ab25cq/neo-c/neo-c.h", 6040, 395);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6040, 396));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6040, 397));
        return __result_obj__0;
    }
    # 6043 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/home/ab25cq/neo-c/neo-c.h", 6043, 398, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6043, 399);
    # 6045 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(result,str+head,tail-head);
    # 6046 "/home/ab25cq/neo-c/neo-c.h"
    result[tail-head]=0;
    # 6048 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6048, 400);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6048, 401));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6048, 402));
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
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    # 6057 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)) {
        # 6054 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6054))), "/home/ab25cq/neo-c/neo-c.h", 6054, 403);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6054, 404));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6054, 405));
        return __result_obj__0;
    }
    # 6057 "/home/ab25cq/neo-c/neo-c.h"
    len=strlen(str);
    # 6062 "/home/ab25cq/neo-c/neo-c.h"
    if(head<0) {
        # 6060 "/home/ab25cq/neo-c/neo-c.h"
        head+=len;
    }
    # 6066 "/home/ab25cq/neo-c/neo-c.h"
    if(tail<0) {
        # 6063 "/home/ab25cq/neo-c/neo-c.h"
        tail+=len+1;
    }
    # 6070 "/home/ab25cq/neo-c/neo-c.h"
    if(head>tail) {
        # 6067 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/home/ab25cq/neo-c/neo-c.h", 6067, 406);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6067, 407));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6067, 408));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6067, 409));
        return __result_obj__0;
    }
    # 6074 "/home/ab25cq/neo-c/neo-c.h"
    if(head<0) {
        # 6071 "/home/ab25cq/neo-c/neo-c.h"
        head=0;
    }
    # 6078 "/home/ab25cq/neo-c/neo-c.h"
    if(tail>=len) {
        # 6075 "/home/ab25cq/neo-c/neo-c.h"
        tail=len;
    }
    # 6082 "/home/ab25cq/neo-c/neo-c.h"
    if(head==tail) {
        # 6079 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6079))), "/home/ab25cq/neo-c/neo-c.h", 6079, 410);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6079, 411));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6079, 412));
        return __result_obj__0;
    }
    # 6086 "/home/ab25cq/neo-c/neo-c.h"
    if(tail-head+1<1) {
        # 6083 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6083))), "/home/ab25cq/neo-c/neo-c.h", 6083, 413);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6083, 414));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6083, 415));
        return __result_obj__0;
    }
    # 6086 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/home/ab25cq/neo-c/neo-c.h", 6086, 416, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6086, 417);
    # 6088 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(result,str+head,tail-head);
    # 6089 "/home/ab25cq/neo-c/neo-c.h"
    result[tail-head]=0;
    # 6091 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6091, 418);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6091, 419));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6091, 420));
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
    memset(&len, 0, sizeof(len));
    memset(&result2, 0, sizeof(result2));
    # 6099 "/home/ab25cq/neo-c/neo-c.h"
    if(msg==((void*)0)) {
        # 6097 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6097))), "/home/ab25cq/neo-c/neo-c.h", 6097, 421);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6097, 422));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6097, 423));
        return __result_obj__0;
    }
    # 6099 "/home/ab25cq/neo-c/neo-c.h"
    # 6100 "/home/ab25cq/neo-c/neo-c.h"
    __builtin_va_start(args,msg);
    # 6101 "/home/ab25cq/neo-c/neo-c.h"
    # 6102 "/home/ab25cq/neo-c/neo-c.h"
    len=vasprintf(&result,msg,args);
    # 6103 "/home/ab25cq/neo-c/neo-c.h"
    __builtin_va_end(args);
    # 6109 "/home/ab25cq/neo-c/neo-c.h"
    if(len<0) {
        # 6106 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6106))), "/home/ab25cq/neo-c/neo-c.h", 6106, 424);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6106, 425));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6106, 426));
        return __result_obj__0;
    }
    # 6109 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    result2=(char* )come_increment_ref_count(__builtin_string(result,"/home/ab25cq/neo-c/neo-c.h",6109), "/home/ab25cq/neo-c/neo-c.h", 6109, 427);
    # 6111 "/home/ab25cq/neo-c/neo-c.h"
    free(result);
    # 6113 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result2, "/home/ab25cq/neo-c/neo-c.h", 6113, 428);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6113, 429));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6113, 430));
    return __result_obj__0;
}

char*  charp_delete(char* str, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_delete"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    # 6122 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)) {
        # 6119 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6119))), "/home/ab25cq/neo-c/neo-c.h", 6119, 431);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6119, 432));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6119, 433));
        return __result_obj__0;
    }
    # 6122 "/home/ab25cq/neo-c/neo-c.h"
    len=strlen(str);
    # 6128 "/home/ab25cq/neo-c/neo-c.h"
    if(head>=len) {
        # 6125 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/home/ab25cq/neo-c/neo-c.h",6125))), "/home/ab25cq/neo-c/neo-c.h", 6125, 434);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6125, 435));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6125, 436));
        return __result_obj__0;
    }
    # 6132 "/home/ab25cq/neo-c/neo-c.h"
    if(strcmp(str,"")==0) {
        # 6129 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/home/ab25cq/neo-c/neo-c.h",6129))), "/home/ab25cq/neo-c/neo-c.h", 6129, 437);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6129, 438));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6129, 439));
        return __result_obj__0;
    }
    # 6136 "/home/ab25cq/neo-c/neo-c.h"
    if(head<0) {
        # 6133 "/home/ab25cq/neo-c/neo-c.h"
        head+=len;
    }
    # 6140 "/home/ab25cq/neo-c/neo-c.h"
    if(tail<0) {
        # 6137 "/home/ab25cq/neo-c/neo-c.h"
        tail+=len+1;
    }
    # 6144 "/home/ab25cq/neo-c/neo-c.h"
    if(head<0) {
        # 6141 "/home/ab25cq/neo-c/neo-c.h"
        head=0;
    }
    # 6148 "/home/ab25cq/neo-c/neo-c.h"
    if(tail<0) {
        # 6145 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/home/ab25cq/neo-c/neo-c.h",6145))), "/home/ab25cq/neo-c/neo-c.h", 6145, 440);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6145, 441));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6145, 442));
        return __result_obj__0;
    }
    # 6152 "/home/ab25cq/neo-c/neo-c.h"
    if(tail>=len) {
        # 6149 "/home/ab25cq/neo-c/neo-c.h"
        tail=len;
    }
    # 6152 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len-(tail-head)+1)), "/home/ab25cq/neo-c/neo-c.h", 6152, 443, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6152, 444);
    # 6154 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(result,str,head);
    # 6155 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(result+head,str+tail,len-tail);
    # 6157 "/home/ab25cq/neo-c/neo-c.h"
    result[len-(tail-head)]=0;
    # 6159 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6159, 445);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6159, 446));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6159, 447));
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    # 1481 "/home/ab25cq/neo-c/neo-c.h"
    self->head=((void*)0);
    # 1482 "/home/ab25cq/neo-c/neo-c.h"
    self->tail=((void*)0);
    # 1483 "/home/ab25cq/neo-c/neo-c.h"
    self->len=0;
    # 1485 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1485, 449);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 452);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 453);
    return __result_obj__0;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1502 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1500 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "/home/ab25cq/neo-c/neo-c.h"
    it=self->head;
    # 1508 "/home/ab25cq/neo-c/neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "/home/ab25cq/neo-c/neo-c.h"
        prev_it=it;
        # 1505 "/home/ab25cq/neo-c/neo-c.h"
        it=it->next;
        # 1506 "/home/ab25cq/neo-c/neo-c.h"
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1506, 451);
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
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 450));
    }
            neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj13  ;
    struct list_item$1char$ph* litem_26;
    char*  __dec_obj14  ;
    struct list_item$1char$ph* litem_27;
    char*  __dec_obj15  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_26, 0, sizeof(litem_26));
    memset(&litem_27, 0, sizeof(litem_27));
    # 1618 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1615, 464));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len==0) {
        # 1619 "/home/ab25cq/neo-c/neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 1619, 465, "struct list_item$1char$ph*"))), "/home/ab25cq/neo-c/neo-c.h", 1619, 466);
        # 1621 "/home/ab25cq/neo-c/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/home/ab25cq/neo-c/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/home/ab25cq/neo-c/neo-c.h"
        __dec_obj13=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/home/ab25cq/neo-c/neo-c.h", 1623, 468);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1623, 467);
        # 1625 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem;
        # 1626 "/home/ab25cq/neo-c/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_26=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 1629, 469, "struct list_item$1char$ph*"))), "/home/ab25cq/neo-c/neo-c.h", 1629, 470);
        # 1631 "/home/ab25cq/neo-c/neo-c.h"
        litem_26->prev=self->head;
        # 1632 "/home/ab25cq/neo-c/neo-c.h"
        litem_26->next=((void*)0);
        # 1633 "/home/ab25cq/neo-c/neo-c.h"
        __dec_obj14=litem_26->item,
        litem_26->item=(char* )come_increment_ref_count(item, "/home/ab25cq/neo-c/neo-c.h", 1633, 472);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1633, 471);
        # 1635 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_26;
        # 1636 "/home/ab25cq/neo-c/neo-c.h"
        self->head->next=litem_26;
    }
    else {
        # 1639 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_27=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 1639, 473, "struct list_item$1char$ph*"))), "/home/ab25cq/neo-c/neo-c.h", 1639, 474);
        # 1641 "/home/ab25cq/neo-c/neo-c.h"
        litem_27->prev=self->tail;
        # 1642 "/home/ab25cq/neo-c/neo-c.h"
        litem_27->next=((void*)0);
        # 1643 "/home/ab25cq/neo-c/neo-c.h"
        __dec_obj15=litem_27->item,
        litem_27->item=(char* )come_increment_ref_count(item, "/home/ab25cq/neo-c/neo-c.h", 1643, 476);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1643, 475);
        # 1645 "/home/ab25cq/neo-c/neo-c.h"
        self->tail->next=litem_27;
        # 1646 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_27;
    }
    # 1649 "/home/ab25cq/neo-c/neo-c.h"
    self->len++;
    # 1651 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1651, 477));
    neo_current_frame = fr.prev;
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
    memset(&result, 0, sizeof(result));
    memset(&str, 0, sizeof(str));
    memset(&self_len, 0, sizeof(self_len));
    memset(&i, 0, sizeof(i));
    # 6168 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 6165 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 6165, 448, "struct list$1char$ph*"), "/home/ab25cq/neo-c/neo-c.h", 6165, 454)))), "/home/ab25cq/neo-c/neo-c.h", 6165, 455);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6165, 456);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6165, 457);
        return __result_obj__0;
    }
    # 6168 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 6168, 458, "struct list$1char$ph*"), "/home/ab25cq/neo-c/neo-c.h", 6168, 459)), "/home/ab25cq/neo-c/neo-c.h", 6168, 460);
    # 6170 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    str=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 6170, 461, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 6170, 462)), "/home/ab25cq/neo-c/neo-c.h", 6170, 463);
    # 6172 "/home/ab25cq/neo-c/neo-c.h"
    self_len=charp_length(self);
    # 6182 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<self_len;i++){
        # 6181 "/home/ab25cq/neo-c/neo-c.h"
        if(self[i]==c) {
            # 6175 "/home/ab25cq/neo-c/neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"/home/ab25cq/neo-c/neo-c.h",6175), "/home/ab25cq/neo-c/neo-c.h", 6175, 478));
            # 6176 "/home/ab25cq/neo-c/neo-c.h"
            buffer_reset(str);
        }
        else {
            # 6179 "/home/ab25cq/neo-c/neo-c.h"
            buffer_append_char(str,self[i]);
        }
    }
    # 6186 "/home/ab25cq/neo-c/neo-c.h"
    if(buffer_length(str)!=0) {
        # 6183 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"/home/ab25cq/neo-c/neo-c.h",6183), "/home/ab25cq/neo-c/neo-c.h", 6183, 479));
    }
    # 6186 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6186, 480);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6186, 481);
    come_call_finalizer(buffer_finalize, str, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6186, 482);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6186, 483);
    return __result_obj__0;
}

char*  charp_xsprintf(char* self, const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_xsprintf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6191 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "/home/ab25cq/neo-c/neo-c.h", 6191, 484);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6191, 485));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6191, 486));
    return __result_obj__0;
}

char*  int_xsprintf(int self, const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_xsprintf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6196 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "/home/ab25cq/neo-c/neo-c.h", 6196, 487);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6196, 488));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6196, 489));
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
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    memset(&n, 0, sizeof(n));
    memset(&i, 0, sizeof(i));
    memset(&c, 0, sizeof(c));
    # 6204 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)) {
        # 6202 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6202))), "/home/ab25cq/neo-c/neo-c.h", 6202, 490);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6202, 491));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6202, 492));
        return __result_obj__0;
    }
    # 6204 "/home/ab25cq/neo-c/neo-c.h"
    len=charp_length(str);
    # 6205 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), "/home/ab25cq/neo-c/neo-c.h", 6205, 493, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6205, 494);
    # 6207 "/home/ab25cq/neo-c/neo-c.h"
    n=0;
    # 6222 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<len;i++){
        # 6209 "/home/ab25cq/neo-c/neo-c.h"
        c=str[i];
        # 6220 "/home/ab25cq/neo-c/neo-c.h"
        if((c>=0&&c<32)||c==127) {
            # 6214 "/home/ab25cq/neo-c/neo-c.h"
            result[n++]=94;
            # 6215 "/home/ab25cq/neo-c/neo-c.h"
            result[n++]=c+65-1;
        }
        else {
            # 6218 "/home/ab25cq/neo-c/neo-c.h"
            result[n++]=c;
        }
    }
    # 6224 "/home/ab25cq/neo-c/neo-c.h"
    result[n]=0;
    # 6224 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6224, 495);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6224, 496));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6224, 497));
    return __result_obj__0;
}

char*  chara_printable(char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_printable"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6229 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_printable(str))), "/home/ab25cq/neo-c/neo-c.h", 6229, 498);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6229, 499));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6229, 500));
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
    memset(&result, 0, sizeof(result));
    memset(&p, 0, sizeof(p));
    memset(&p2, 0, sizeof(p2));
    # 6238 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)||str==((void*)0)||replace==((void*)0)) {
        # 6235 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6235))), "/home/ab25cq/neo-c/neo-c.h", 6235, 501);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6235, 502));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6235, 503));
        return __result_obj__0;
    }
    # 6238 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 6238, 504, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 6238, 505)), "/home/ab25cq/neo-c/neo-c.h", 6238, 506);
    # 6240 "/home/ab25cq/neo-c/neo-c.h"
    p=self;
    # 6260 "/home/ab25cq/neo-c/neo-c.h"
    while((_Bool)1) {
        # 6243 "/home/ab25cq/neo-c/neo-c.h"
        p2=strstr(p,str);
        # 6254 "/home/ab25cq/neo-c/neo-c.h"
        if(p2==((void*)0)) {
            # 6246 "/home/ab25cq/neo-c/neo-c.h"
            p2=p;
            # 6250 "/home/ab25cq/neo-c/neo-c.h"
            while(*p2) {
                # 6248 "/home/ab25cq/neo-c/neo-c.h"
                p2++;
            }
            # 6250 "/home/ab25cq/neo-c/neo-c.h"
            buffer_append(result,p,p2-p);
            # 6251 "/home/ab25cq/neo-c/neo-c.h"
            break;
        }
        # 6254 "/home/ab25cq/neo-c/neo-c.h"
        buffer_append(result,p,p2-p);
        # 6255 "/home/ab25cq/neo-c/neo-c.h"
        buffer_append_str(result,replace);
        # 6257 "/home/ab25cq/neo-c/neo-c.h"
        p=p2+strlen(str);
    }
    # 6260 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(result))), "/home/ab25cq/neo-c/neo-c.h", 6260, 507);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6260, 508);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6260, 509));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6260, 510));
    return __result_obj__0;
}

char*  xbasename(char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xbasename"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    memset(&p, 0, sizeof(p));
    # 6271 "/home/ab25cq/neo-c/neo-c.h"
    if(path==((void*)0)) {
        # 6269 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6269))), "/home/ab25cq/neo-c/neo-c.h", 6269, 511);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6269, 512));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6269, 513));
        return __result_obj__0;
    }
    # 6271 "/home/ab25cq/neo-c/neo-c.h"
    p=path+strlen(path);
    # 6282 "/home/ab25cq/neo-c/neo-c.h"
    while(p>=path) {
        # 6280 "/home/ab25cq/neo-c/neo-c.h"
        if(*p==47) {
            # 6275 "/home/ab25cq/neo-c/neo-c.h"
            break;
        }
        else {
            # 6278 "/home/ab25cq/neo-c/neo-c.h"
            p--;
        }
    }
    # 6289 "/home/ab25cq/neo-c/neo-c.h"
    if(p<path) {
        # 6283 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"/home/ab25cq/neo-c/neo-c.h",6283))), "/home/ab25cq/neo-c/neo-c.h", 6283, 514);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6283, 515));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6283, 516));
        return __result_obj__0;
    }
    else {
        # 6286 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"/home/ab25cq/neo-c/neo-c.h",6286))), "/home/ab25cq/neo-c/neo-c.h", 6286, 517);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6286, 518));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6286, 519));
        return __result_obj__0;
    }
    # 6289 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6289))), "/home/ab25cq/neo-c/neo-c.h", 6289, 520);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6289, 521));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6289, 522));
    return __result_obj__0;
}

char*  xnoextname(char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xnoextname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  path2  ;
    char* p;
    memset(&path2, 0, sizeof(path2));
    memset(&p, 0, sizeof(p));
    # 6297 "/home/ab25cq/neo-c/neo-c.h"
    if(path==((void*)0)) {
        # 6295 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6295))), "/home/ab25cq/neo-c/neo-c.h", 6295, 523);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6295, 524));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6295, 525));
        return __result_obj__0;
    }
    # 6297 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    path2=(char* )come_increment_ref_count(xbasename(path), "/home/ab25cq/neo-c/neo-c.h", 6297, 526);
    # 6299 "/home/ab25cq/neo-c/neo-c.h"
    p=path2+strlen(path2);
    # 6310 "/home/ab25cq/neo-c/neo-c.h"
    while(p>=path2) {
        # 6308 "/home/ab25cq/neo-c/neo-c.h"
        if(*p==46) {
            # 6303 "/home/ab25cq/neo-c/neo-c.h"
            break;
        }
        else {
            # 6306 "/home/ab25cq/neo-c/neo-c.h"
            p--;
        }
    }
    # 6317 "/home/ab25cq/neo-c/neo-c.h"
    if(p<path2) {
        # 6311 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path2,"/home/ab25cq/neo-c/neo-c.h",6311))), "/home/ab25cq/neo-c/neo-c.h", 6311, 527);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6311, 528));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6311, 529));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6311, 530));
        return __result_obj__0;
    }
    else {
        # 6314 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(path2,0,p-path2))), "/home/ab25cq/neo-c/neo-c.h", 6314, 531);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6314, 532));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6314, 533));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6314, 534));
        return __result_obj__0;
    }
    # 6317 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6317))), "/home/ab25cq/neo-c/neo-c.h", 6317, 535);
    (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6317, 536));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6317, 537));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6317, 538));
    return __result_obj__0;
}

char*  xextname(char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xextname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    memset(&p, 0, sizeof(p));
    # 6325 "/home/ab25cq/neo-c/neo-c.h"
    if(path==((void*)0)) {
        # 6323 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6323))), "/home/ab25cq/neo-c/neo-c.h", 6323, 539);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6323, 540));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6323, 541));
        return __result_obj__0;
    }
    # 6325 "/home/ab25cq/neo-c/neo-c.h"
    p=path+strlen(path);
    # 6336 "/home/ab25cq/neo-c/neo-c.h"
    while(p>=path) {
        # 6334 "/home/ab25cq/neo-c/neo-c.h"
        if(*p==46) {
            # 6329 "/home/ab25cq/neo-c/neo-c.h"
            break;
        }
        else {
            # 6332 "/home/ab25cq/neo-c/neo-c.h"
            p--;
        }
    }
    # 6343 "/home/ab25cq/neo-c/neo-c.h"
    if(p<path) {
        # 6337 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"/home/ab25cq/neo-c/neo-c.h",6337))), "/home/ab25cq/neo-c/neo-c.h", 6337, 542);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6337, 543));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6337, 544));
        return __result_obj__0;
    }
    else {
        # 6340 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"/home/ab25cq/neo-c/neo-c.h",6340))), "/home/ab25cq/neo-c/neo-c.h", 6340, 545);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6340, 546));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6340, 547));
        return __result_obj__0;
    }
    # 6343 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6343))), "/home/ab25cq/neo-c/neo-c.h", 6343, 548);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6343, 549));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6343, 550));
    return __result_obj__0;
}

char*  _Bool_to_string(_Bool self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6367 "/home/ab25cq/neo-c/neo-c.h"
    if(self) {
        # 6362 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("true","/home/ab25cq/neo-c/neo-c.h",6362))), "/home/ab25cq/neo-c/neo-c.h", 6362, 551);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6362, 552));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6362, 553));
        return __result_obj__0;
    }
    else {
        # 6365 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("false","/home/ab25cq/neo-c/neo-c.h",6365))), "/home/ab25cq/neo-c/neo-c.h", 6365, 554);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6365, 555));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6365, 556));
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

char*  char_to_string(char self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6371 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%c",self))), "/home/ab25cq/neo-c/neo-c.h", 6371, 557);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6371, 558));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6371, 559));
    return __result_obj__0;
}

char*  short_to_string(short self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6376 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "/home/ab25cq/neo-c/neo-c.h", 6376, 560);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6376, 561));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6376, 562));
    return __result_obj__0;
}

char*  int_to_string(int self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6381 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "/home/ab25cq/neo-c/neo-c.h", 6381, 563);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6381, 564));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6381, 565));
    return __result_obj__0;
}

char*  long_to_string(long self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6386 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "/home/ab25cq/neo-c/neo-c.h", 6386, 566);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6386, 567));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6386, 568));
    return __result_obj__0;
}

char*  size_t_to_string(unsigned long  int  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6391 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "/home/ab25cq/neo-c/neo-c.h", 6391, 569);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6391, 570));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6391, 571));
    return __result_obj__0;
}

char*  float_to_string(float self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6396 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%f",self))), "/home/ab25cq/neo-c/neo-c.h", 6396, 572);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6396, 573));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6396, 574));
    return __result_obj__0;
}

char*  double_to_string(double self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6401 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%lf",self))), "/home/ab25cq/neo-c/neo-c.h", 6401, 575);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6401, 576));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6401, 577));
    return __result_obj__0;
}

char*  string_to_string(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6409 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 6407 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6407))), "/home/ab25cq/neo-c/neo-c.h", 6407, 578);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6407, 579));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6407, 580));
        return __result_obj__0;
    }
    # 6409 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6409))), "/home/ab25cq/neo-c/neo-c.h", 6409, 581);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6409, 582));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6409, 583));
    return __result_obj__0;
}

char*  charp_to_string(const char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6417 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 6415 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6415))), "/home/ab25cq/neo-c/neo-c.h", 6415, 584);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6415, 585));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6415, 586));
        return __result_obj__0;
    }
    # 6417 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6417))), "/home/ab25cq/neo-c/neo-c.h", 6417, 587);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6417, 588));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6417, 589));
    return __result_obj__0;
}

int _Bool_compare(_Bool left, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_compare"; neo_current_frame = &fr;
    # 6456 "/home/ab25cq/neo-c/neo-c.h"
    if(!left&&right) {
        # 6444 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left&&right) {
        # 6447 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(!left&&!right) {
        # 6450 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else {
        # 6453 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 6456 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int char_compare(char left, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_compare"; neo_current_frame = &fr;
    # 6471 "/home/ab25cq/neo-c/neo-c.h"
    if(left<right) {
        # 6462 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6465 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6468 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6471 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int short_compare(short left, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_compare"; neo_current_frame = &fr;
    # 6486 "/home/ab25cq/neo-c/neo-c.h"
    if(left<right) {
        # 6477 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6480 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6483 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6486 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int int_compare(int left, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_compare"; neo_current_frame = &fr;
    # 6501 "/home/ab25cq/neo-c/neo-c.h"
    if(left<right) {
        # 6492 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6495 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6498 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6501 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int long_compare(long left, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_compare"; neo_current_frame = &fr;
    # 6516 "/home/ab25cq/neo-c/neo-c.h"
    if(left<right) {
        # 6507 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6510 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6513 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6516 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int size_t_compare(unsigned long  int  left  , unsigned long  int  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_compare"; neo_current_frame = &fr;
    # 6531 "/home/ab25cq/neo-c/neo-c.h"
    if(left<right) {
        # 6522 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6525 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6528 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6531 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int float_compare(float left, float right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_compare"; neo_current_frame = &fr;
    # 6546 "/home/ab25cq/neo-c/neo-c.h"
    if(left<right) {
        # 6537 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6540 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6543 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6546 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int double_compare(double left, double right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_compare"; neo_current_frame = &fr;
    # 6561 "/home/ab25cq/neo-c/neo-c.h"
    if(left<right) {
        # 6552 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6555 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6558 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6561 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int string_compare(char* left, char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_compare"; neo_current_frame = &fr;
    # 6576 "/home/ab25cq/neo-c/neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 6567 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
        # 6570 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
        # 6573 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 6576 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

int charp_compare(char* left, char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_compare"; neo_current_frame = &fr;
    # 6591 "/home/ab25cq/neo-c/neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 6582 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
        # 6585 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
        # 6588 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 6591 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

char*  charp_puts(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_puts"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6602 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 6600 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6600))), "/home/ab25cq/neo-c/neo-c.h", 6600, 590);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6600, 591));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6600, 592));
        return __result_obj__0;
    }
    # 6602 "/home/ab25cq/neo-c/neo-c.h"
    puts(self);
    # 6604 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6604))), "/home/ab25cq/neo-c/neo-c.h", 6604, 593);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6604, 594));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6604, 595));
    return __result_obj__0;
}

char*  charp_print(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_print"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6612 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 6610 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6610))), "/home/ab25cq/neo-c/neo-c.h", 6610, 596);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6610, 597));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6610, 598));
        return __result_obj__0;
    }
    # 6612 "/home/ab25cq/neo-c/neo-c.h"
    printf("%s",self);
    # 6614 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6614))), "/home/ab25cq/neo-c/neo-c.h", 6614, 599);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6614, 600));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6614, 601));
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
    # 6644 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 6642 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6642))), "/home/ab25cq/neo-c/neo-c.h", 6642, 602);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6642, 603));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6642, 604));
        return __result_obj__0;
    }
    # 6644 "/home/ab25cq/neo-c/neo-c.h"
    # 6646 "/home/ab25cq/neo-c/neo-c.h"
    # 6647 "/home/ab25cq/neo-c/neo-c.h"
    __builtin_va_start(args,self);
    # 6648 "/home/ab25cq/neo-c/neo-c.h"
    vasprintf(&msg2,self,args);
    # 6649 "/home/ab25cq/neo-c/neo-c.h"
    __builtin_va_end(args);
    # 6651 "/home/ab25cq/neo-c/neo-c.h"
    printf("%s",msg2);
    # 6653 "/home/ab25cq/neo-c/neo-c.h"
    free(msg2);
    # 6655 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6655))), "/home/ab25cq/neo-c/neo-c.h", 6655, 605);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6655, 606));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6655, 607));
    return __result_obj__0;
}

int int_printf(int self, char* msg)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_printf"; neo_current_frame = &fr;
    # 6664 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 6662 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return self;
    }
    # 6664 "/home/ab25cq/neo-c/neo-c.h"
    printf(msg,self);
    # 6666 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long long_printf(long self, char* msg)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_printf"; neo_current_frame = &fr;
    # 6674 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 6672 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return self;
    }
    # 6674 "/home/ab25cq/neo-c/neo-c.h"
    printf(msg,self);
    # 6676 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

void int_times(int self, void* parent, void (*block)(void*,int))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_times"; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    # 6684 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<self;i++){
        # 6682 "/home/ab25cq/neo-c/neo-c.h"
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
    memset(&buf, 0, sizeof(buf));
    memset(&size, 0, sizeof(size));
    # 6696 "/home/ab25cq/neo-c/neo-c.h"
    if(f==((void*)0)) {
        # 6694 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/home/ab25cq/neo-c/neo-c.h", 6694, 608, "buffer"), "/home/ab25cq/neo-c/neo-c.h", 6694, 609), "", 0))), "/home/ab25cq/neo-c/neo-c.h", 6694, 610);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6694, 611);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6694, 612);
        return __result_obj__0;
    }
    # 6696 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 6696, 613, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 6696, 614)), "/home/ab25cq/neo-c/neo-c.h", 6696, 615);
    # 6710 "/home/ab25cq/neo-c/neo-c.h"
    while(1) {
        # 6699 "/home/ab25cq/neo-c/neo-c.h"
        char buf2[8192];
        memset(&buf2, 0, sizeof(buf2));
        # 6701 "/home/ab25cq/neo-c/neo-c.h"
        size=fread(buf2,1,8192,f);
        # 6703 "/home/ab25cq/neo-c/neo-c.h"
        buffer_append(buf,buf2,size);
        # 6708 "/home/ab25cq/neo-c/neo-c.h"
        if(size<8192) {
            # 6706 "/home/ab25cq/neo-c/neo-c.h"
            break;
        }
    }
    # 6710 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(buf, "/home/ab25cq/neo-c/neo-c.h", 6710, 616);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6710, 617);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6710, 618);
    return __result_obj__0;
}

int FILE_write(struct _IO_FILE*  f  , const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_write"; neo_current_frame = &fr;
    # 6719 "/home/ab25cq/neo-c/neo-c.h"
    if(f==((void*)0)||str==((void*)0)) {
        # 6716 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 6719 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return fwrite(str,strlen(str),1,f);
    neo_current_frame = fr.prev;
}

int FILE_fclose(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fclose"; neo_current_frame = &fr;
    int result;
    memset(&result, 0, sizeof(result));
    # 6728 "/home/ab25cq/neo-c/neo-c.h"
    if(f==((void*)0)) {
        # 6725 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 6728 "/home/ab25cq/neo-c/neo-c.h"
    result=fclose(f);
    # 6734 "/home/ab25cq/neo-c/neo-c.h"
    if(result<0) {
        # 6731 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return result;
    }
    # 6734 "/home/ab25cq/neo-c/neo-c.h"
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
    memset(&result, 0, sizeof(result));
    # 6742 "/home/ab25cq/neo-c/neo-c.h"
    if(f==((void*)0)||msg==((void*)0)) {
        # 6740 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = f;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 6742 "/home/ab25cq/neo-c/neo-c.h"
    char msg2[1024*2*2*2];
    memset(&msg2, 0, sizeof(msg2));
    # 6744 "/home/ab25cq/neo-c/neo-c.h"
    # 6745 "/home/ab25cq/neo-c/neo-c.h"
    __builtin_va_start(args,msg);
    # 6746 "/home/ab25cq/neo-c/neo-c.h"
    vsnprintf(msg2,1024*2*2*2,msg,args);
    # 6747 "/home/ab25cq/neo-c/neo-c.h"
    __builtin_va_end(args);
    # 6749 "/home/ab25cq/neo-c/neo-c.h"
    result=fprintf(f,"%s",msg2);
    # 6755 "/home/ab25cq/neo-c/neo-c.h"
    if(result<0) {
        # 6752 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = f;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 6755 "/home/ab25cq/neo-c/neo-c.h"
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
    memset(&result, 0, sizeof(result));
    memset(&result2, 0, sizeof(result2));
    # 6764 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)||file_name==((void*)0)) {
        # 6761 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 6764 "/home/ab25cq/neo-c/neo-c.h"
    # 6772 "/home/ab25cq/neo-c/neo-c.h"
    if(append) {
        # 6766 "/home/ab25cq/neo-c/neo-c.h"
        f=fopen(file_name,"a");
    }
    else {
        # 6769 "/home/ab25cq/neo-c/neo-c.h"
        f=fopen(file_name,"w");
    }
    # 6776 "/home/ab25cq/neo-c/neo-c.h"
    if(f==((void*)0)) {
        # 6773 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 6776 "/home/ab25cq/neo-c/neo-c.h"
    result=fwrite(self,strlen(self),1,f);
    # 6782 "/home/ab25cq/neo-c/neo-c.h"
    if(result!=1) {
        # 6779 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return result;
    }
    # 6784 "/home/ab25cq/neo-c/neo-c.h"
    result2=fclose(f);
    # 6788 "/home/ab25cq/neo-c/neo-c.h"
    if(result2<0) {
        # 6785 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return result2;
    }
    # 6788 "/home/ab25cq/neo-c/neo-c.h"
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
    memset(&f, 0, sizeof(f));
    memset(&buf, 0, sizeof(buf));
    memset(&size, 0, sizeof(size));
    memset(&result2, 0, sizeof(result2));
    # 6797 "/home/ab25cq/neo-c/neo-c.h"
    if(file_name==((void*)0)) {
        # 6794 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/home/ab25cq/neo-c/neo-c.h", 6794, 619, "buffer"), "/home/ab25cq/neo-c/neo-c.h", 6794, 620), "", 0))), "/home/ab25cq/neo-c/neo-c.h", 6794, 621);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6794, 622);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6794, 623);
        return __result_obj__0;
    }
    # 6797 "/home/ab25cq/neo-c/neo-c.h"
    f=fopen(file_name,"r");
    # 6803 "/home/ab25cq/neo-c/neo-c.h"
    if(f==((void*)0)) {
        # 6800 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/home/ab25cq/neo-c/neo-c.h", 6800, 624, "buffer"), "/home/ab25cq/neo-c/neo-c.h", 6800, 625), "", 0))), "/home/ab25cq/neo-c/neo-c.h", 6800, 626);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6800, 627);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6800, 628);
        return __result_obj__0;
    }
    # 6803 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 6803, 629, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 6803, 630)), "/home/ab25cq/neo-c/neo-c.h", 6803, 631);
    # 6817 "/home/ab25cq/neo-c/neo-c.h"
    while(1) {
        # 6806 "/home/ab25cq/neo-c/neo-c.h"
        char buf2[8192];
        memset(&buf2, 0, sizeof(buf2));
        # 6808 "/home/ab25cq/neo-c/neo-c.h"
        size=fread(buf2,1,8192,f);
        # 6810 "/home/ab25cq/neo-c/neo-c.h"
        buffer_append(buf,buf2,size);
        # 6815 "/home/ab25cq/neo-c/neo-c.h"
        if(size<8192) {
            # 6813 "/home/ab25cq/neo-c/neo-c.h"
            break;
        }
    }
    # 6819 "/home/ab25cq/neo-c/neo-c.h"
    result2=fclose(f);
    # 6823 "/home/ab25cq/neo-c/neo-c.h"
    if(result2<0) {
        # 6820 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/home/ab25cq/neo-c/neo-c.h", 6820, 632, "buffer"), "/home/ab25cq/neo-c/neo-c.h", 6820, 633), "", 0))), "/home/ab25cq/neo-c/neo-c.h", 6820, 634);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6820, 635);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6820, 636);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6820, 637);
        return __result_obj__0;
    }
    # 6823 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(buf, "/home/ab25cq/neo-c/neo-c.h", 6823, 638);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6823, 639);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6823, 640);
    return __result_obj__0;
}

struct list$1char$ph* FILE_readlines(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_readlines"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct list$1char$ph* __result_obj__0;
    memset(&result, 0, sizeof(result));
    # 6828 "/home/ab25cq/neo-c/neo-c.h"
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 6828, 641, "struct list$1char$ph*"), "/home/ab25cq/neo-c/neo-c.h", 6828, 642)), "/home/ab25cq/neo-c/neo-c.h", 6828, 643);
    # 6834 "/home/ab25cq/neo-c/neo-c.h"
    if(f==((void*)0)) {
        # 6831 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6831, 644);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6831, 645);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6831, 646);
        return __result_obj__0;
    }
    # 6844 "/home/ab25cq/neo-c/neo-c.h"
    while(1) {
        # 6835 "/home/ab25cq/neo-c/neo-c.h"
        char buf[8192];
        memset(&buf, 0, sizeof(buf));
        # 6841 "/home/ab25cq/neo-c/neo-c.h"
        if(fgets(buf,8192,f)==((void*)0)) {
            # 6838 "/home/ab25cq/neo-c/neo-c.h"
            break;
        }
        # 6841 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(buf,"/home/ab25cq/neo-c/neo-c.h",6841), "/home/ab25cq/neo-c/neo-c.h", 6841, 647));
    }
    # 6844 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6844, 648);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6844, 649);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6844, 650);
    return __result_obj__0;
}

_Bool xiswalpha(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalpha"; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    # 6849 "/home/ab25cq/neo-c/neo-c.h"
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 6850 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xiswblank(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswblank"; neo_current_frame = &fr;
    # 6855 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xiswdigit(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswdigit"; neo_current_frame = &fr;
    # 6860 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xiswalnum(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalnum"; neo_current_frame = &fr;
    # 6865 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return xiswalpha(c)||xiswdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xiswascii(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswascii"; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    # 6870 "/home/ab25cq/neo-c/neo-c.h"
    result=(c>=32&&c<=126);
    # 6871 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

int string_index(char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_index"; neo_current_frame = &fr;
    # 7208 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return charp_index(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int charp_index(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index"; neo_current_frame = &fr;
    char* head;
    memset(&head, 0, sizeof(head));
    # 7217 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)||search_str==((void*)0)) {
        # 7214 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 7217 "/home/ab25cq/neo-c/neo-c.h"
    head=strstr(str,search_str);
    # 7223 "/home/ab25cq/neo-c/neo-c.h"
    if(head==((void*)0)) {
        # 7220 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 7223 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return head-str;
    neo_current_frame = fr.prev;
}

