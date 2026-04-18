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

struct proc_alias_target
{
    char* name;
};

struct vector$1proc_alias_target$ph
{
    struct proc_alias_target**  items  ;
    int len;
    int size;
    int it;
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
static struct vector$1proc_alias_target$ph* vector$1proc_alias_target$ph_initialize(struct vector$1proc_alias_target$ph* self);
static void vector$1proc_alias_target$ph$p_finalize(struct vector$1proc_alias_target$ph* self);
static void proc_alias_target_finalize(struct proc_alias_target*  self  );
static struct vector$1proc_alias_target$ph* vector$1proc_alias_target$ph_add(struct vector$1proc_alias_target$ph* self, struct proc_alias_target*  item  );
static struct proc_alias_target*  vector$1proc_alias_target$ph_item(struct vector$1proc_alias_target$ph* self, int index, struct proc_alias_target*  default_value  );
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
    struct proc_alias_target*  p  ;
    char* __dec_obj1;
    void* __right_value1 = (void*)0;
    struct vector$1proc_alias_target$ph* xs;
    struct proc_alias_target*  q  ;
    int __result_obj__0;
    memset(&p, 0, sizeof(p));
    memset(&xs, 0, sizeof(xs));
    memset(&q, 0, sizeof(q));
    # 9 "test_vector_nth_dummy_heap.nc"
    p=(struct proc_alias_target* )come_increment_ref_count((struct proc_alias_target *)come_calloc(1, sizeof(struct proc_alias_target )*(1), "test_vector_nth_dummy_heap.nc", 9, 1, "struct proc_alias_target* "), "test_vector_nth_dummy_heap.nc", 9, 2);
    # 10 "test_vector_nth_dummy_heap.nc"
    __right_value0 = (void*)0;
    __dec_obj1=p->name,
    p->name=(char* )come_increment_ref_count(__builtin_string("x","test_vector_nth_dummy_heap.nc",10), "test_vector_nth_dummy_heap.nc", 10, 4);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "test_vector_nth_dummy_heap.nc", 10, 3);
    # 12 "test_vector_nth_dummy_heap.nc"
    __right_value0 = (void*)0;
    xs=(struct vector$1proc_alias_target$ph*)come_increment_ref_count(vector$1proc_alias_target$ph_initialize((struct vector$1proc_alias_target$ph*)come_increment_ref_count((struct vector$1proc_alias_target$ph*)come_calloc(1, sizeof(struct vector$1proc_alias_target$ph)*(1), "test_vector_nth_dummy_heap.nc", 12, 5, "struct vector$1proc_alias_target$ph*"), "test_vector_nth_dummy_heap.nc", 12, 12)), "test_vector_nth_dummy_heap.nc", 12, 13);
    # 13 "test_vector_nth_dummy_heap.nc"
    vector$1proc_alias_target$ph_add(xs,(struct proc_alias_target* )come_increment_ref_count(p, "test_vector_nth_dummy_heap.nc", 13, 16));
    # 15 "test_vector_nth_dummy_heap.nc"
    q=vector$1proc_alias_target$ph_item(xs,0,((void*)0));
    # 17 "test_vector_nth_dummy_heap.nc"
        __result_obj__0 = charp_operator_equals(q->name,"x");
    come_call_finalizer(proc_alias_target_finalize, p, (void*)0, (void*)0, 0, 0, 0, (void*)0, "test_vector_nth_dummy_heap.nc}", 17, 17);
    come_call_finalizer(vector$1proc_alias_target$ph$p_finalize, xs, (void*)0, (void*)0, 0, 0, 0, (void*)0, "test_vector_nth_dummy_heap.nc}", 17, 18);
    neo_current_frame = fr.prev;
    come_memleak_checker();
    return __result_obj__0;
}

static struct vector$1proc_alias_target$ph* vector$1proc_alias_target$ph_initialize(struct vector$1proc_alias_target$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "vector$1proc_alias_target$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct vector$1proc_alias_target$ph* __result_obj__0;
    # 1808 "/home/ab25cq/neo-c/neo-c.h"
    self->size=16;
    # 1809 "/home/ab25cq/neo-c/neo-c.h"
    self->len=0;
    # 1810 "/home/ab25cq/neo-c/neo-c.h"
    self->items=((struct proc_alias_target** )(__right_value0=(struct proc_alias_target* *)come_calloc(1, sizeof(struct proc_alias_target* )*(1*(self->size)), "/home/ab25cq/neo-c/neo-c.h", 1810, 6, "struct proc_alias_target** ")));
    # 1812 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct vector$1proc_alias_target$ph*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1812, 7);
    come_call_finalizer(vector$1proc_alias_target$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 8, 10);
    neo_current_frame = fr.prev;
    come_call_finalizer(vector$1proc_alias_target$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 8, 11);
    return __result_obj__0;
}

static void vector$1proc_alias_target$ph$p_finalize(struct vector$1proc_alias_target$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "vector$1proc_alias_target$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    # 1856 "/home/ab25cq/neo-c/neo-c.h"
    # 1864 "/home/ab25cq/neo-c/neo-c.h"
    if(1) {
        # 1863 "/home/ab25cq/neo-c/neo-c.h"
        for(i=0        ;i<self->len;i++){
            # 1861 "/home/ab25cq/neo-c/neo-c.h"
            come_call_finalizer(proc_alias_target_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1861, 9);
        }
    }
    # 1867 "/home/ab25cq/neo-c/neo-c.h"
    if(self&&self->items) {
        # 1865 "/home/ab25cq/neo-c/neo-c.h"
        come_free((char*)self->items);
    }
        neo_current_frame = fr.prev;
}

static void proc_alias_target_finalize(struct proc_alias_target*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "proc_alias_target_finalize"; neo_current_frame = &fr;
    # 1 "proc_alias_target_finalize"
    # 3 "proc_alias_target_finalize"
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        # 2 "proc_alias_target_finalize"
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0, "proc_alias_target_finalize", 2, 8));
    }
                neo_current_frame = fr.prev;
}

static struct vector$1proc_alias_target$ph* vector$1proc_alias_target$ph_add(struct vector$1proc_alias_target$ph* self, struct proc_alias_target*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "vector$1proc_alias_target$ph_add"; neo_current_frame = &fr;
    int new_size;
    struct proc_alias_target**  items  ;
    int i;
    struct vector$1proc_alias_target$ph* __result_obj__0;
    memset(&new_size, 0, sizeof(new_size));
    memset(&items, 0, sizeof(items));
    memset(&i, 0, sizeof(i));
    # 1923 "/home/ab25cq/neo-c/neo-c.h"
    # 1941 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len==self->size) {
        # 1926 "/home/ab25cq/neo-c/neo-c.h"
        new_size=self->size*2;
        # 1927 "/home/ab25cq/neo-c/neo-c.h"
        items=self->items;
        # 1929 "/home/ab25cq/neo-c/neo-c.h"
        self->items=come_calloc(1,sizeof(struct proc_alias_target* )*new_size,((void*)0),0,0,"");
        # 1931 "/home/ab25cq/neo-c/neo-c.h"
        # 1936 "/home/ab25cq/neo-c/neo-c.h"
        for(i=0        ;i<self->size;i++){
            # 1933 "/home/ab25cq/neo-c/neo-c.h"
            self->items[i]=items[i];
        }
        # 1936 "/home/ab25cq/neo-c/neo-c.h"
        self->size=new_size;
        # 1938 "/home/ab25cq/neo-c/neo-c.h"
        come_free((char*)items);
    }
    # 1947 "/home/ab25cq/neo-c/neo-c.h"
    if(1) {
        # 1942 "/home/ab25cq/neo-c/neo-c.h"
        self->items[self->len]=(struct proc_alias_target* )come_increment_ref_count(item, "/home/ab25cq/neo-c/neo-c.h", 1942, 14);
    }
    else {
        # 1945 "/home/ab25cq/neo-c/neo-c.h"
        self->items[self->len]=item;
    }
    # 1947 "/home/ab25cq/neo-c/neo-c.h"
    self->len++;
    # 1949 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(proc_alias_target_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1949, 15);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct proc_alias_target*  vector$1proc_alias_target$ph_item(struct vector$1proc_alias_target$ph* self, int index, struct proc_alias_target*  default_value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "vector$1proc_alias_target$ph_item"; neo_current_frame = &fr;
    struct proc_alias_target*  __result_obj__0  ;
    # 1954 "/home/ab25cq/neo-c/neo-c.h"
    # 1960 "/home/ab25cq/neo-c/neo-c.h"
    if(index<0) {
        # 1957 "/home/ab25cq/neo-c/neo-c.h"
        index+=self->len;
    }
    # 1965 "/home/ab25cq/neo-c/neo-c.h"
    if(index>=0&&index<self->len) {
        # 1962 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self->items[index];
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1965 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = default_value;
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
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 207, 19));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 207, 20));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 207, 21));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 207, 22));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 207, 23));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 207, 24));
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
    struct sMemHeader*  it_0  ;
    memset(&it, 0, sizeof(it));
    memset(&it_prev, 0, sizeof(it_prev));
    memset(&it_0, 0, sizeof(it_0));
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
    it_0=(struct sMemHeader* )calloc(1,size);
    # 292 "/home/ab25cq/neo-c/neo-c.h"
    it_0->alloc_size=size;
    # 293 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = it_0;
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
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 496, 25));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 496, 26));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 496, 27));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 496, 28));
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
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 522, 29));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 522, 30));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 522, 31));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 522, 32));
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
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 585, 33));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 585, 34));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 585, 35));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 585, 36));
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
    void (*finalizer_1)(void*);
    void (*finalizer_2)(void*);
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    long* ref_count;
    long count;
    void (*finalizer_3)(void*);
    void (*finalizer_4)(void*);
    void (*finalizer_5)(void*);
    memset(&finalizer, 0, sizeof(finalizer));
    memset(&finalizer_1, 0, sizeof(finalizer_1));
    memset(&finalizer_2, 0, sizeof(finalizer_2));
    memset(&ref_count, 0, sizeof(ref_count));
    memset(&count, 0, sizeof(count));
    memset(&finalizer_3, 0, sizeof(finalizer_3));
    memset(&finalizer_4, 0, sizeof(finalizer_4));
    memset(&finalizer_5, 0, sizeof(finalizer_5));
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
            finalizer_1=(void (*)(void*))fun;
            # 631 "/home/ab25cq/neo-c/neo-c.h"
            finalizer_1(mem);
        }
        else {
            # 638 "/home/ab25cq/neo-c/neo-c.h"
            if(protocol_obj&&protocol_fun) {
                # 635 "/home/ab25cq/neo-c/neo-c.h"
                finalizer_2=(void (*)(void*))protocol_fun;
                # 636 "/home/ab25cq/neo-c/neo-c.h"
                finalizer_2(protocol_obj);
            }
        }
    }
    else {
        # 647 "/home/ab25cq/neo-c/neo-c.h"
        if(!come_is_alive(mem)) {
            # 642 "/home/ab25cq/neo-c/neo-c.h"
            puts(((char*)(__right_value3=xsprintf("invalid heap object. \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 642, 37));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 642, 38));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 642, 39));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 642, 40));
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
                        finalizer_3=(void (*)(void*))protocol_fun;
                        # 659 "/home/ab25cq/neo-c/neo-c.h"
                        finalizer_3(protocol_obj);
                        # 660 "/home/ab25cq/neo-c/neo-c.h"
                        come_free(protocol_obj);
                    }
                    # 666 "/home/ab25cq/neo-c/neo-c.h"
                    if(fun) {
                        # 663 "/home/ab25cq/neo-c/neo-c.h"
                        finalizer_4=(void (*)(void*))fun;
                        # 664 "/home/ab25cq/neo-c/neo-c.h"
                        finalizer_4(mem);
                    }
                }
                else {
                    # 673 "/home/ab25cq/neo-c/neo-c.h"
                    if(protocol_obj&&protocol_fun) {
                        # 669 "/home/ab25cq/neo-c/neo-c.h"
                        finalizer_5=(void (*)(void*))protocol_fun;
                        # 670 "/home/ab25cq/neo-c/neo-c.h"
                        finalizer_5(protocol_obj);
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
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 697, 41));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 697, 42));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 697, 43));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 697, 44));
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
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 709, 45));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 709, 46));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 709, 47));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 709, 48));
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
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 715, 49));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 715, 50));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 715, 51));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 715, 52));
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
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "/home/ab25cq/neo-c/neo-c.h", 723, 53);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 723, 54));
        return __result_obj__0;
    }
    # 725 "/home/ab25cq/neo-c/neo-c.h"
    len=strlen(str)+1;
    # 727 "/home/ab25cq/neo-c/neo-c.h"
    result=come_calloc(1,sizeof(char)*(len),sname,sline,0,"string");
    # 730 "/home/ab25cq/neo-c/neo-c.h"
    strncpy(result,str,len);
    # 732 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 732, 55);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 732, 56));
    return __result_obj__0;
}

struct buffer*  buffer_initialize(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize"; neo_current_frame = &fr;
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
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 4847, 60);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4847, 61);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4847, 62);
    return __result_obj__0;
}

struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  int  size  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize_with_value"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj3;
    struct buffer*  __result_obj__0  ;
    # 4852 "/home/ab25cq/neo-c/neo-c.h"
    self->size=128;
    # 4853 "/home/ab25cq/neo-c/neo-c.h"
    __dec_obj3=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/home/ab25cq/neo-c/neo-c.h", 4853, 63, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4853, 65);
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4853, 64);
    # 4854 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[0]=0;
    # 4855 "/home/ab25cq/neo-c/neo-c.h"
    self->len=0;
    # 4857 "/home/ab25cq/neo-c/neo-c.h"
    buffer_append(self,mem,size);
    # 4859 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 4859, 66);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4859, 67);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4859, 68);
    return __result_obj__0;
}

void buffer_finalize(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_finalize"; neo_current_frame = &fr;
    # 4865 "/home/ab25cq/neo-c/neo-c.h"
    if(self&&self->buf) {
        # 4864 "/home/ab25cq/neo-c/neo-c.h"
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4864, 69));
    }
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_clone(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_clone"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct buffer*  result  ;
    char* __dec_obj4;
    memset(&result, 0, sizeof(result));
    # 4873 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 4870 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((void*)0), "/home/ab25cq/neo-c/neo-c.h", 4870, 70);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4870, 71);
        return __result_obj__0;
    }
    # 4873 "/home/ab25cq/neo-c/neo-c.h"
    result=(struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 4873, 72, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 4873, 73);
    # 4875 "/home/ab25cq/neo-c/neo-c.h"
    result->size=self->size;
    # 4876 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    __dec_obj4=result->buf,
    result->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/home/ab25cq/neo-c/neo-c.h", 4876, 74, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4876, 76);
    __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4876, 75);
    # 4877 "/home/ab25cq/neo-c/neo-c.h"
    result->len=self->len;
    # 4878 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(result->buf,self->buf,self->len);
    # 4880 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 4880, 77);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4880, 78);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4880, 79);
    return __result_obj__0;
}

_Bool buffer_equals(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_equals"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    _Bool __result_obj__0;
    # 4892 "/home/ab25cq/neo-c/neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 4886 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
        # 4889 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 4892 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = string_equals(((char* )(__right_value0=buffer_to_string(left))),((char* )(__right_value1=buffer_to_string(right))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4892, 80));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4892, 81));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_length(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_length"; neo_current_frame = &fr;
    # 4900 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 4898 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 4900 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self->len;
    neo_current_frame = fr.prev;
}

void buffer_reset(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_reset"; neo_current_frame = &fr;
    # 4908 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 4906 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 4908 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[0]=0;
    # 4909 "/home/ab25cq/neo-c/neo-c.h"
    self->len=0;
    neo_current_frame = fr.prev;
}

void buffer_trim(struct buffer*  self  , int len)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_trim"; neo_current_frame = &fr;
    # 4917 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 4915 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 4917 "/home/ab25cq/neo-c/neo-c.h"
    self->len-=len;
    # 4925 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len>=0) {
        # 4919 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[self->len]=0;
    }
    else {
        # 4922 "/home/ab25cq/neo-c/neo-c.h"
        self->len=0;
        # 4923 "/home/ab25cq/neo-c/neo-c.h"
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
    char* __dec_obj5;
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 4932 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)||mem==((void*)0)) {
        # 4930 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 4944 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 4933 "/home/ab25cq/neo-c/neo-c.h"
        old_len=self->len;
        # 4934 "/home/ab25cq/neo-c/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 4934, 82, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4934, 83);
        # 4935 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4937 "/home/ab25cq/neo-c/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 4938 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 4938, 84, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4938, 86);
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4938, 85);
        # 4939 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 4940 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 4941 "/home/ab25cq/neo-c/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4944, 87));
    }
    # 4944 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 4945 "/home/ab25cq/neo-c/neo-c.h"
    self->len+=size;
    # 4946 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 4948 "/home/ab25cq/neo-c/neo-c.h"
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
    char* __dec_obj6;
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 4956 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 4954 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 4968 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len+1+1+1>=self->size) {
        # 4957 "/home/ab25cq/neo-c/neo-c.h"
        old_len=self->len;
        # 4958 "/home/ab25cq/neo-c/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 4958, 88, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4958, 89);
        # 4959 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4961 "/home/ab25cq/neo-c/neo-c.h"
        new_size=(self->size+10+1)*2;
        # 4962 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 4962, 90, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4962, 92);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4962, 91);
        # 4963 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 4964 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 4965 "/home/ab25cq/neo-c/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4968, 93));
    }
    # 4968 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[self->len]=c;
    # 4969 "/home/ab25cq/neo-c/neo-c.h"
    self->len++;
    # 4971 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 4973 "/home/ab25cq/neo-c/neo-c.h"
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
    char* __dec_obj7;
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 4982 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)||mem==((void*)0)) {
        # 4979 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 4982 "/home/ab25cq/neo-c/neo-c.h"
    size=strlen(mem);
    # 4994 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 4984 "/home/ab25cq/neo-c/neo-c.h"
        old_len=self->len;
        # 4985 "/home/ab25cq/neo-c/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 4985, 94, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4985, 95);
        # 4986 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4987 "/home/ab25cq/neo-c/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 4988 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 4988, 96, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4988, 98);
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4988, 97);
        # 4989 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 4990 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 4991 "/home/ab25cq/neo-c/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4994, 99));
    }
    # 4994 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 4995 "/home/ab25cq/neo-c/neo-c.h"
    self->len+=size;
    # 4996 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 4998 "/home/ab25cq/neo-c/neo-c.h"
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
    char* __dec_obj8;
    memset(&result, 0, sizeof(result));
    memset(&len, 0, sizeof(len));
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 5046 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)||msg==((void*)0)) {
        # 5043 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5046 "/home/ab25cq/neo-c/neo-c.h"
    # 5047 "/home/ab25cq/neo-c/neo-c.h"
    __builtin_va_start(args,msg);
    # 5048 "/home/ab25cq/neo-c/neo-c.h"
    # 5049 "/home/ab25cq/neo-c/neo-c.h"
    len=vasprintf(&result,msg,args);
    # 5050 "/home/ab25cq/neo-c/neo-c.h"
    __builtin_va_end(args);
    # 5056 "/home/ab25cq/neo-c/neo-c.h"
    if(len<0) {
        # 5053 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5056 "/home/ab25cq/neo-c/neo-c.h"
    mem=(char* )come_increment_ref_count(__builtin_string(result,"/home/ab25cq/neo-c/neo-c.h",5056), "/home/ab25cq/neo-c/neo-c.h", 5056, 100);
    # 5058 "/home/ab25cq/neo-c/neo-c.h"
    size=strlen(mem);
    # 5070 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 5060 "/home/ab25cq/neo-c/neo-c.h"
        old_len=self->len;
        # 5061 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5061, 101, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5061, 102);
        # 5062 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5063 "/home/ab25cq/neo-c/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5064 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5064, 103, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5064, 105);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5064, 104);
        # 5065 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5066 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5067 "/home/ab25cq/neo-c/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5070, 106));
    }
    # 5070 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5071 "/home/ab25cq/neo-c/neo-c.h"
    self->len+=size;
    # 5072 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5074 "/home/ab25cq/neo-c/neo-c.h"
    free(result);
    # 5076 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = self;
    (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5076, 107));
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
    char* __dec_obj9;
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 5085 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)||mem==((void*)0)) {
        # 5083 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5085 "/home/ab25cq/neo-c/neo-c.h"
    size=strlen(mem)+1;
    # 5097 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len+size+1+1+1>=self->size) {
        # 5087 "/home/ab25cq/neo-c/neo-c.h"
        old_len=self->len;
        # 5088 "/home/ab25cq/neo-c/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5088, 108, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5088, 109);
        # 5089 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5090 "/home/ab25cq/neo-c/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5091 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5091, 110, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5091, 112);
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5091, 111);
        # 5092 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5093 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5094 "/home/ab25cq/neo-c/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5097, 113));
    }
    # 5097 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5098 "/home/ab25cq/neo-c/neo-c.h"
    self->len+=size;
    # 5099 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5100 "/home/ab25cq/neo-c/neo-c.h"
    self->len++;
    # 5102 "/home/ab25cq/neo-c/neo-c.h"
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
    char* __dec_obj10;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 5110 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5108 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5110 "/home/ab25cq/neo-c/neo-c.h"
    mem=&value;
    # 5111 "/home/ab25cq/neo-c/neo-c.h"
    size=sizeof(int);
    # 5124 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 5114 "/home/ab25cq/neo-c/neo-c.h"
        old_len=self->len;
        # 5115 "/home/ab25cq/neo-c/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5115, 114, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5115, 115);
        # 5116 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5117 "/home/ab25cq/neo-c/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5118 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5118, 116, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5118, 118);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5118, 117);
        # 5119 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5120 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5121 "/home/ab25cq/neo-c/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5124, 119));
    }
    # 5124 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5125 "/home/ab25cq/neo-c/neo-c.h"
    self->len+=size;
    # 5126 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5128 "/home/ab25cq/neo-c/neo-c.h"
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
    char* __dec_obj11;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 5136 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5134 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5136 "/home/ab25cq/neo-c/neo-c.h"
    mem=&value;
    # 5137 "/home/ab25cq/neo-c/neo-c.h"
    size=sizeof(long);
    # 5150 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 5140 "/home/ab25cq/neo-c/neo-c.h"
        old_len=self->len;
        # 5141 "/home/ab25cq/neo-c/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5141, 120, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5141, 121);
        # 5142 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5143 "/home/ab25cq/neo-c/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5144 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5144, 122, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5144, 124);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5144, 123);
        # 5145 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5146 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5147 "/home/ab25cq/neo-c/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5150, 125));
    }
    # 5150 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5151 "/home/ab25cq/neo-c/neo-c.h"
    self->len+=size;
    # 5152 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5154 "/home/ab25cq/neo-c/neo-c.h"
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
    char* __dec_obj12;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 5163 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5160 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5163 "/home/ab25cq/neo-c/neo-c.h"
    mem=&value;
    # 5164 "/home/ab25cq/neo-c/neo-c.h"
    size=sizeof(short);
    # 5177 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 5167 "/home/ab25cq/neo-c/neo-c.h"
        old_len=self->len;
        # 5168 "/home/ab25cq/neo-c/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5168, 126, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5168, 127);
        # 5169 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5170 "/home/ab25cq/neo-c/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5171 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5171, 128, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5171, 130);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5171, 129);
        # 5172 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5173 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5174 "/home/ab25cq/neo-c/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5177, 131));
    }
    # 5177 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5178 "/home/ab25cq/neo-c/neo-c.h"
    self->len+=size;
    # 5179 "/home/ab25cq/neo-c/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5181 "/home/ab25cq/neo-c/neo-c.h"
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
    char* __dec_obj13;
    int i;
    memset(&len, 0, sizeof(len));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    memset(&i, 0, sizeof(i));
    # 5190 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5187 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5190 "/home/ab25cq/neo-c/neo-c.h"
    len=self->len;
    # 5191 "/home/ab25cq/neo-c/neo-c.h"
    len=(len+3)&~3;
    # 5204 "/home/ab25cq/neo-c/neo-c.h"
    if(len>=self->size) {
        # 5194 "/home/ab25cq/neo-c/neo-c.h"
        old_len=self->len;
        # 5195 "/home/ab25cq/neo-c/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5195, 132, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5195, 133);
        # 5196 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5197 "/home/ab25cq/neo-c/neo-c.h"
        new_size=(self->size+1+1)*2;
        # 5198 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj13=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5198, 134, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5198, 136);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5198, 135);
        # 5199 "/home/ab25cq/neo-c/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5200 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5201 "/home/ab25cq/neo-c/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5204, 137));
    }
    # 5208 "/home/ab25cq/neo-c/neo-c.h"
    for(i=self->len    ;i<len;i++){
        # 5205 "/home/ab25cq/neo-c/neo-c.h"
        ((char*)self->buf)[i]=0;
    }
    # 5208 "/home/ab25cq/neo-c/neo-c.h"
    self->len=len;
    # 5210 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_compare(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_compare"; neo_current_frame = &fr;
    # 5225 "/home/ab25cq/neo-c/neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 5216 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
        # 5219 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
        # 5222 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 5225 "/home/ab25cq/neo-c/neo-c.h"
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
    # 5230 "/home/ab25cq/neo-c/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5230, 138, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5230, 139)), "/home/ab25cq/neo-c/neo-c.h", 5230, 140);
    # 5236 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5233 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5233, 141);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5233, 142);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5233, 143);
        return __result_obj__0;
    }
    # 5236 "/home/ab25cq/neo-c/neo-c.h"
    buffer_append_str(result,self);
    # 5238 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5238, 144);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5238, 145);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5238, 146);
    return __result_obj__0;
}

char*  buffer_to_string(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 5247 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5244 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5244))), "/home/ab25cq/neo-c/neo-c.h", 5244, 147);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5244, 148));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5244, 149));
        return __result_obj__0;
    }
    # 5247 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self->buf,"/home/ab25cq/neo-c/neo-c.h",5247))), "/home/ab25cq/neo-c/neo-c.h", 5247, 150);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5247, 151));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5247, 152));
    return __result_obj__0;
}

unsigned char* buffer_head_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_head_pointer"; neo_current_frame = &fr;
    unsigned char* __result_obj__0;
    # 5255 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5253 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5255 "/home/ab25cq/neo-c/neo-c.h"
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
    # 5260 "/home/ab25cq/neo-c/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5260, 153, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5260, 154)), "/home/ab25cq/neo-c/neo-c.h", 5260, 155);
    # 5264 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5262 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5262, 156);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5262, 157);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5262, 158);
        return __result_obj__0;
    }
    # 5264 "/home/ab25cq/neo-c/neo-c.h"
    buffer_append(result,self,sizeof(char)*len);
    # 5265 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5265, 159);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5265, 160);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5265, 161);
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
    # 5270 "/home/ab25cq/neo-c/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5270, 162, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5270, 163)), "/home/ab25cq/neo-c/neo-c.h", 5270, 164);
    # 5274 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5272 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5272, 165);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5272, 166);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5272, 167);
        return __result_obj__0;
    }
    # 5277 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<len;i++){
        # 5275 "/home/ab25cq/neo-c/neo-c.h"
        buffer_append(result,self[i],strlen(self[i]));
    }
    # 5277 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5277, 168);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5277, 169);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5277, 170);
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
    # 5282 "/home/ab25cq/neo-c/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5282, 171, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5282, 172)), "/home/ab25cq/neo-c/neo-c.h", 5282, 173);
    # 5286 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5284 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5284, 174);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5284, 175);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5284, 176);
        return __result_obj__0;
    }
    # 5286 "/home/ab25cq/neo-c/neo-c.h"
    buffer_append(result,(char*)self,sizeof(short)*len);
    # 5287 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5287, 177);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5287, 178);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5287, 179);
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
    # 5292 "/home/ab25cq/neo-c/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5292, 180, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5292, 181)), "/home/ab25cq/neo-c/neo-c.h", 5292, 182);
    # 5296 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5294 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5294, 183);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5294, 184);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5294, 185);
        return __result_obj__0;
    }
    # 5296 "/home/ab25cq/neo-c/neo-c.h"
    buffer_append(result,(char*)self,sizeof(int)*len);
    # 5297 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5297, 186);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5297, 187);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5297, 188);
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
    # 5302 "/home/ab25cq/neo-c/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5302, 189, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5302, 190)), "/home/ab25cq/neo-c/neo-c.h", 5302, 191);
    # 5306 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5304 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5304, 192);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5304, 193);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5304, 194);
        return __result_obj__0;
    }
    # 5306 "/home/ab25cq/neo-c/neo-c.h"
    buffer_append(result,(char*)self,sizeof(long)*len);
    # 5307 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5307, 195);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5307, 196);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5307, 197);
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
    # 5312 "/home/ab25cq/neo-c/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5312, 198, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5312, 199)), "/home/ab25cq/neo-c/neo-c.h", 5312, 200);
    # 5316 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5314 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5314, 201);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5314, 202);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5314, 203);
        return __result_obj__0;
    }
    # 5316 "/home/ab25cq/neo-c/neo-c.h"
    buffer_append(result,(char*)self,sizeof(float)*len);
    # 5317 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5317, 204);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5317, 205);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5317, 206);
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
    # 5322 "/home/ab25cq/neo-c/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5322, 207, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5322, 208)), "/home/ab25cq/neo-c/neo-c.h", 5322, 209);
    # 5326 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5324 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5324, 210);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5324, 211);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5324, 212);
        return __result_obj__0;
    }
    # 5326 "/home/ab25cq/neo-c/neo-c.h"
    buffer_append(result,(char*)self,sizeof(double)*len);
    # 5327 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5327, 213);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5327, 214);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5327, 215);
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
    # 5332 "/home/ab25cq/neo-c/neo-c.h"
    len=self->len;
    # 5333 "/home/ab25cq/neo-c/neo-c.h"
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), "/home/ab25cq/neo-c/neo-c.h", 5333, 216, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5333, 217);
    # 5339 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5336 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5336, 218);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5336, 219));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5336, 220));
        return __result_obj__0;
    }
    # 5339 "/home/ab25cq/neo-c/neo-c.h"
    n=0;
    # 5357 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<len;i++){
        # 5341 "/home/ab25cq/neo-c/neo-c.h"
        c=self->buf[i];
        # 5355 "/home/ab25cq/neo-c/neo-c.h"
        if((c>=0&&c<32)||c==127) {
            # 5346 "/home/ab25cq/neo-c/neo-c.h"
            result[n++]=94;
            # 5347 "/home/ab25cq/neo-c/neo-c.h"
            result[n++]=c+65-1;
        }
        else if(c>127) {
            # 5350 "/home/ab25cq/neo-c/neo-c.h"
            result[n++]=63;
        }
        else {
            # 5353 "/home/ab25cq/neo-c/neo-c.h"
            result[n++]=c;
        }
    }
    # 5359 "/home/ab25cq/neo-c/neo-c.h"
    result[n]=0;
    # 5359 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5359, 221);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5359, 222));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5359, 223));
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
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1497, 231);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 2, 233);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 2, 234);
    return __result_obj__0;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_push_back"; neo_current_frame = &fr;
    struct list$1char$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$* litem;
    struct list_item$1char$* litem_6;
    struct list_item$1char$* litem_7;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_6, 0, sizeof(litem_6));
    memset(&litem_7, 0, sizeof(litem_7));
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
        litem=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1619, 225, "struct list_item$1char$*"))), "/home/ab25cq/neo-c/neo-c.h", 1619, 226);
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
        litem_6=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1629, 227, "struct list_item$1char$*"))), "/home/ab25cq/neo-c/neo-c.h", 1629, 228);
        # 1631 "/home/ab25cq/neo-c/neo-c.h"
        litem_6->prev=self->head;
        # 1632 "/home/ab25cq/neo-c/neo-c.h"
        litem_6->next=((void*)0);
        # 1633 "/home/ab25cq/neo-c/neo-c.h"
        litem_6->item=item;
        # 1635 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_6;
        # 1636 "/home/ab25cq/neo-c/neo-c.h"
        self->head->next=litem_6;
    }
    else {
        # 1639 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1639, 229, "struct list_item$1char$*"))), "/home/ab25cq/neo-c/neo-c.h", 1639, 230);
        # 1641 "/home/ab25cq/neo-c/neo-c.h"
        litem_7->prev=self->tail;
        # 1642 "/home/ab25cq/neo-c/neo-c.h"
        litem_7->next=((void*)0);
        # 1643 "/home/ab25cq/neo-c/neo-c.h"
        litem_7->item=item;
        # 1645 "/home/ab25cq/neo-c/neo-c.h"
        self->tail->next=litem_7;
        # 1646 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_7;
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
        come_call_finalizer(list_item$1char$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1506, 232);
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
    # 5384 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value1=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc(1, sizeof(struct list$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5384, 224, "struct list$1char$*"), "/home/ab25cq/neo-c/neo-c.h", 5384, 235),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5384, 236);
    come_call_finalizer(list$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5384, 237);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5384, 238);
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
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1497, 246);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 248);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 249);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_push_back"; neo_current_frame = &fr;
    struct list$1char$p* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$p* litem;
    struct list_item$1char$p* litem_8;
    struct list_item$1char$p* litem_9;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_8, 0, sizeof(litem_8));
    memset(&litem_9, 0, sizeof(litem_9));
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
        litem=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 1619, 240, "struct list_item$1char$p*"))), "/home/ab25cq/neo-c/neo-c.h", 1619, 241);
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
        litem_8=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 1629, 242, "struct list_item$1char$p*"))), "/home/ab25cq/neo-c/neo-c.h", 1629, 243);
        # 1631 "/home/ab25cq/neo-c/neo-c.h"
        litem_8->prev=self->head;
        # 1632 "/home/ab25cq/neo-c/neo-c.h"
        litem_8->next=((void*)0);
        # 1633 "/home/ab25cq/neo-c/neo-c.h"
        litem_8->item=item;
        # 1635 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_8;
        # 1636 "/home/ab25cq/neo-c/neo-c.h"
        self->head->next=litem_8;
    }
    else {
        # 1639 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 1639, 244, "struct list_item$1char$p*"))), "/home/ab25cq/neo-c/neo-c.h", 1639, 245);
        # 1641 "/home/ab25cq/neo-c/neo-c.h"
        litem_9->prev=self->tail;
        # 1642 "/home/ab25cq/neo-c/neo-c.h"
        litem_9->next=((void*)0);
        # 1643 "/home/ab25cq/neo-c/neo-c.h"
        litem_9->item=item;
        # 1645 "/home/ab25cq/neo-c/neo-c.h"
        self->tail->next=litem_9;
        # 1646 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_9;
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
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1506, 247);
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
    # 5389 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value1=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 5389, 239, "struct list$1char$p*"), "/home/ab25cq/neo-c/neo-c.h", 5389, 250),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5389, 251);
    come_call_finalizer(list$1char$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5389, 252);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5389, 253);
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
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1497, 261);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 263);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 264);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_push_back"; neo_current_frame = &fr;
    struct list$1short$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1short$* litem;
    struct list_item$1short$* litem_10;
    struct list_item$1short$* litem_11;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_10, 0, sizeof(litem_10));
    memset(&litem_11, 0, sizeof(litem_11));
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
        litem=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1619, 255, "struct list_item$1short$*"))), "/home/ab25cq/neo-c/neo-c.h", 1619, 256);
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
        litem_10=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1629, 257, "struct list_item$1short$*"))), "/home/ab25cq/neo-c/neo-c.h", 1629, 258);
        # 1631 "/home/ab25cq/neo-c/neo-c.h"
        litem_10->prev=self->head;
        # 1632 "/home/ab25cq/neo-c/neo-c.h"
        litem_10->next=((void*)0);
        # 1633 "/home/ab25cq/neo-c/neo-c.h"
        litem_10->item=item;
        # 1635 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_10;
        # 1636 "/home/ab25cq/neo-c/neo-c.h"
        self->head->next=litem_10;
    }
    else {
        # 1639 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_11=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1639, 259, "struct list_item$1short$*"))), "/home/ab25cq/neo-c/neo-c.h", 1639, 260);
        # 1641 "/home/ab25cq/neo-c/neo-c.h"
        litem_11->prev=self->tail;
        # 1642 "/home/ab25cq/neo-c/neo-c.h"
        litem_11->next=((void*)0);
        # 1643 "/home/ab25cq/neo-c/neo-c.h"
        litem_11->item=item;
        # 1645 "/home/ab25cq/neo-c/neo-c.h"
        self->tail->next=litem_11;
        # 1646 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_11;
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
        come_call_finalizer(list_item$1short$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1506, 262);
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
    # 5394 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value1=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc(1, sizeof(struct list$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5394, 254, "struct list$1short$*"), "/home/ab25cq/neo-c/neo-c.h", 5394, 265),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5394, 266);
    come_call_finalizer(list$1short$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5394, 267);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5394, 268);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1497, 276);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 278);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 279);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_push_back"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_12;
    struct list_item$1int$* litem_13;
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1619, 270, "struct list_item$1int$*"))), "/home/ab25cq/neo-c/neo-c.h", 1619, 271);
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
        litem_12=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1629, 272, "struct list_item$1int$*"))), "/home/ab25cq/neo-c/neo-c.h", 1629, 273);
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
        litem_13=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1639, 274, "struct list_item$1int$*"))), "/home/ab25cq/neo-c/neo-c.h", 1639, 275);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1506, 277);
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
    # 5399 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value1=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5399, 269, "struct list$1int$*"), "/home/ab25cq/neo-c/neo-c.h", 5399, 280),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5399, 281);
    come_call_finalizer(list$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5399, 282);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5399, 283);
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
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1497, 291);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 293);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 294);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_push_back"; neo_current_frame = &fr;
    struct list$1long$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1long$* litem;
    struct list_item$1long$* litem_14;
    struct list_item$1long$* litem_15;
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
        litem=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1619, 285, "struct list_item$1long$*"))), "/home/ab25cq/neo-c/neo-c.h", 1619, 286);
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
        litem_14=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1629, 287, "struct list_item$1long$*"))), "/home/ab25cq/neo-c/neo-c.h", 1629, 288);
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
        litem_15=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1639, 289, "struct list_item$1long$*"))), "/home/ab25cq/neo-c/neo-c.h", 1639, 290);
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
        come_call_finalizer(list_item$1long$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1506, 292);
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
    # 5404 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value1=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc(1, sizeof(struct list$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5404, 284, "struct list$1long$*"), "/home/ab25cq/neo-c/neo-c.h", 5404, 295),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5404, 296);
    come_call_finalizer(list$1long$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5404, 297);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5404, 298);
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
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1497, 306);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 308);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 309);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_push_back"; neo_current_frame = &fr;
    struct list$1float$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1float$* litem;
    struct list_item$1float$* litem_16;
    struct list_item$1float$* litem_17;
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
        litem=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1619, 300, "struct list_item$1float$*"))), "/home/ab25cq/neo-c/neo-c.h", 1619, 301);
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
        litem_16=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1629, 302, "struct list_item$1float$*"))), "/home/ab25cq/neo-c/neo-c.h", 1629, 303);
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
        litem_17=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1639, 304, "struct list_item$1float$*"))), "/home/ab25cq/neo-c/neo-c.h", 1639, 305);
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
        come_call_finalizer(list_item$1float$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1506, 307);
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
    # 5409 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value1=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc(1, sizeof(struct list$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5409, 299, "struct list$1float$*"), "/home/ab25cq/neo-c/neo-c.h", 5409, 310),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5409, 311);
    come_call_finalizer(list$1float$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5409, 312);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5409, 313);
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
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1497, 321);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 323);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 324);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_push_back"; neo_current_frame = &fr;
    struct list$1double$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1double$* litem;
    struct list_item$1double$* litem_18;
    struct list_item$1double$* litem_19;
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
        litem=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1619, 315, "struct list_item$1double$*"))), "/home/ab25cq/neo-c/neo-c.h", 1619, 316);
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
        litem_18=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1629, 317, "struct list_item$1double$*"))), "/home/ab25cq/neo-c/neo-c.h", 1629, 318);
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
        litem_19=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1639, 319, "struct list_item$1double$*"))), "/home/ab25cq/neo-c/neo-c.h", 1639, 320);
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
        come_call_finalizer(list_item$1double$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1506, 322);
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
    # 5414 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value1=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc(1, sizeof(struct list$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5414, 314, "struct list$1double$*"), "/home/ab25cq/neo-c/neo-c.h", 5414, 325),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5414, 326);
    come_call_finalizer(list$1double$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5414, 327);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5414, 328);
    return __result_obj__0;
}

_Bool _Bool_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_equals"; neo_current_frame = &fr;
    # 5427 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_equals"; neo_current_frame = &fr;
    # 5432 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_equals"; neo_current_frame = &fr;
    # 5437 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_equals"; neo_current_frame = &fr;
    # 5442 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_equals"; neo_current_frame = &fr;
    # 5447 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool size_t_equals(unsigned long  int  self  , unsigned long  int  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_equals"; neo_current_frame = &fr;
    # 5452 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool float_equals(float self, float right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_equals"; neo_current_frame = &fr;
    # 5457 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool double_equals(double self, double right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_equals"; neo_current_frame = &fr;
    # 5462 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_equals"; neo_current_frame = &fr;
    # 5472 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_operator_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_equals"; neo_current_frame = &fr;
    # 5477 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_operator_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_equals"; neo_current_frame = &fr;
    # 5482 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_operator_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_equals"; neo_current_frame = &fr;
    # 5487 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_operator_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_equals"; neo_current_frame = &fr;
    # 5492 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_not_equals"; neo_current_frame = &fr;
    # 5502 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool char_operator_not_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_not_equals"; neo_current_frame = &fr;
    # 5507 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool short_operator_not_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_not_equals"; neo_current_frame = &fr;
    # 5512 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool int_operator_not_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_not_equals"; neo_current_frame = &fr;
    # 5517 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool long_operator_not_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_not_equals"; neo_current_frame = &fr;
    # 5522 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool charp_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_equals"; neo_current_frame = &fr;
    # 5537 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5528 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5531 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
        # 5534 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5537 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool string_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_equals"; neo_current_frame = &fr;
    # 5552 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5543 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5546 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
        # 5549 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5552 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool voidp_equals(void* self, void* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_equals"; neo_current_frame = &fr;
    # 5557 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Boolp_equals(_Bool* self, _Bool* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Boolp_equals"; neo_current_frame = &fr;
    # 5562 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return *self==*right;
    neo_current_frame = fr.prev;
}

_Bool string_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_equals"; neo_current_frame = &fr;
    # 5577 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5568 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5571 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
        # 5574 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5577 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool charp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_equals"; neo_current_frame = &fr;
    # 5592 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5583 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5586 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
        # 5589 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5592 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool chara_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_equals"; neo_current_frame = &fr;
    # 5604 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5598 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5601 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 5604 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool voidp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_equals"; neo_current_frame = &fr;
    # 5609 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool voidp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_not_equals"; neo_current_frame = &fr;
    # 5614 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return !charp_operator_equals(self,right);
    neo_current_frame = fr.prev;
}

_Bool string_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_not_equals"; neo_current_frame = &fr;
    # 5626 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5620 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5623 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5626 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool charp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_not_equals"; neo_current_frame = &fr;
    # 5638 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5632 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5635 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5638 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool chara_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_not_equals"; neo_current_frame = &fr;
    # 5650 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5644 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5647 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5650 "/home/ab25cq/neo-c/neo-c.h"
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
    # 5659 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)||right==((void*)0)) {
        # 5657 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5657))), "/home/ab25cq/neo-c/neo-c.h", 5657, 329);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5657, 330));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5657, 331));
        return __result_obj__0;
    }
    # 5659 "/home/ab25cq/neo-c/neo-c.h"
    len=strlen(self)+strlen(right);
    # 5661 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "/home/ab25cq/neo-c/neo-c.h", 5661, 332, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5661, 333);
    # 5663 "/home/ab25cq/neo-c/neo-c.h"
    strncpy(result,self,len+1);
    # 5664 "/home/ab25cq/neo-c/neo-c.h"
    strncat(result,right,len+1);
    # 5666 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5666, 334);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5666, 335));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5666, 336));
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
    # 5674 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)||right==((void*)0)) {
        # 5672 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5672))), "/home/ab25cq/neo-c/neo-c.h", 5672, 337);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5672, 338));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5672, 339));
        return __result_obj__0;
    }
    # 5674 "/home/ab25cq/neo-c/neo-c.h"
    len=strlen(self)+strlen(right);
    # 5676 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "/home/ab25cq/neo-c/neo-c.h", 5676, 340, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5676, 341);
    # 5678 "/home/ab25cq/neo-c/neo-c.h"
    strncpy(result,self,len+1);
    # 5679 "/home/ab25cq/neo-c/neo-c.h"
    strncat(result,right,len+1);
    # 5681 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5681, 342);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5681, 343));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5681, 344));
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
    # 5689 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5687 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5687))), "/home/ab25cq/neo-c/neo-c.h", 5687, 345);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5687, 346));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5687, 347));
        return __result_obj__0;
    }
    # 5689 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5689, 348, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5689, 349)), "/home/ab25cq/neo-c/neo-c.h", 5689, 350);
    # 5695 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<right;i++){
        # 5692 "/home/ab25cq/neo-c/neo-c.h"
        buffer_append_str(buf,self);
    }
    # 5695 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "/home/ab25cq/neo-c/neo-c.h", 5695, 351);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5695, 352);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5695, 353));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5695, 354));
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
    # 5703 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5701 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5701))), "/home/ab25cq/neo-c/neo-c.h", 5701, 355);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5701, 356));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5701, 357));
        return __result_obj__0;
    }
    # 5703 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5703, 358, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5703, 359)), "/home/ab25cq/neo-c/neo-c.h", 5703, 360);
    # 5709 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<right;i++){
        # 5706 "/home/ab25cq/neo-c/neo-c.h"
        buffer_append_str(buf,self);
    }
    # 5709 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "/home/ab25cq/neo-c/neo-c.h", 5709, 361);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5709, 362);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5709, 363));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5709, 364));
    return __result_obj__0;
}

_Bool charpa_contained(const char* self[], unsigned long  int  len  , const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_contained"; neo_current_frame = &fr;
    _Bool result;
    int i;
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    # 5719 "/home/ab25cq/neo-c/neo-c.h"
    result=(_Bool)0;
    # 5723 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 5721 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return result;
    }
    # 5729 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<len;i++){
        # 5728 "/home/ab25cq/neo-c/neo-c.h"
        if(strncmp(self[i],str,strlen(self[i]))==0) {
            # 5725 "/home/ab25cq/neo-c/neo-c.h"
            result=(_Bool)1;
            # 5726 "/home/ab25cq/neo-c/neo-c.h"
            break;
        }
    }
    # 5729 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned long  int  shorta_length(short* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_length"; neo_current_frame = &fr;
    # 5734 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  inta_length(int* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "inta_length"; neo_current_frame = &fr;
    # 5739 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  longa_length(long* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "longa_length"; neo_current_frame = &fr;
    # 5744 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  floata_length(float* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "floata_length"; neo_current_frame = &fr;
    # 5749 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  doublea_length(double* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_length"; neo_current_frame = &fr;
    # 5754 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned int _Bool_get_hash_key(_Bool value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_get_hash_key"; neo_current_frame = &fr;
    # 5767 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

unsigned int char_get_hash_key(char value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_get_hash_key"; neo_current_frame = &fr;
    # 5772 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int short_get_hash_key(short int value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_get_hash_key"; neo_current_frame = &fr;
    # 5777 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int int_get_hash_key(int value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_get_hash_key"; neo_current_frame = &fr;
    # 5782 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int long_get_hash_key(long value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_get_hash_key"; neo_current_frame = &fr;
    # 5787 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int size_t_get_hash_key(unsigned long  int  value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_get_hash_key"; neo_current_frame = &fr;
    # 5792 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int float_get_hash_key(float value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_get_hash_key"; neo_current_frame = &fr;
    # 5797 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int double_get_hash_key(double value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_get_hash_key"; neo_current_frame = &fr;
    # 5802 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int charp_get_hash_key(const char* value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_get_hash_key"; neo_current_frame = &fr;
    int result;
    memset(&result, 0, sizeof(result));
    # 5810 "/home/ab25cq/neo-c/neo-c.h"
    if(value==((void*)0)) {
        # 5808 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5810 "/home/ab25cq/neo-c/neo-c.h"
    result=0;
    # 5811 "/home/ab25cq/neo-c/neo-c.h"
    const char* p=value;
    # 5816 "/home/ab25cq/neo-c/neo-c.h"
    while(*p) {
        # 5813 "/home/ab25cq/neo-c/neo-c.h"
        result+=(*p);
        # 5814 "/home/ab25cq/neo-c/neo-c.h"
        p++;
    }
    # 5816 "/home/ab25cq/neo-c/neo-c.h"
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
    # 5824 "/home/ab25cq/neo-c/neo-c.h"
    if(value==((void*)0)) {
        # 5822 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5824 "/home/ab25cq/neo-c/neo-c.h"
    result=0;
    # 5825 "/home/ab25cq/neo-c/neo-c.h"
    p=value;
    # 5830 "/home/ab25cq/neo-c/neo-c.h"
    while(*p) {
        # 5827 "/home/ab25cq/neo-c/neo-c.h"
        result+=(*p);
        # 5828 "/home/ab25cq/neo-c/neo-c.h"
        p++;
    }
    # 5830 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned int voidp_get_hash_key(void* value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_get_hash_key"; neo_current_frame = &fr;
    # 5835 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

_Bool _Bool_clone(_Bool self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_clone"; neo_current_frame = &fr;
    # 5848 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

char char_clone(char self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_clone"; neo_current_frame = &fr;
    # 5853 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

short int short_clone(short self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_clone"; neo_current_frame = &fr;
    # 5858 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

int int_clone(int self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_clone"; neo_current_frame = &fr;
    # 5863 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long  int long_clone(long self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_clone"; neo_current_frame = &fr;
    # 5868 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

unsigned long  int  size_t_clone(unsigned long  int  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_clone"; neo_current_frame = &fr;
    # 5873 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

double double_clone(double self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_clone"; neo_current_frame = &fr;
    # 5878 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

float float_clone(float self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_clone"; neo_current_frame = &fr;
    # 5883 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

_Bool xisalpha(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisalpha"; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    # 5892 "/home/ab25cq/neo-c/neo-c.h"
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 5893 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xisblank(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisblank"; neo_current_frame = &fr;
    # 5898 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xisdigit(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisdigit"; neo_current_frame = &fr;
    # 5903 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xisspace(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisspace"; neo_current_frame = &fr;
    # 5908 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return c==32||c==9||c==10||c==13||c==28||c==11;
    neo_current_frame = fr.prev;
}

_Bool xisalnum(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisalnum"; neo_current_frame = &fr;
    # 5913 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return xisalpha(c)||xisdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xisascii(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisascii"; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    # 5918 "/home/ab25cq/neo-c/neo-c.h"
    result=(c>=32&&c<=126);
    # 5919 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xispunct(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xispunct"; neo_current_frame = &fr;
    # 5923 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
    neo_current_frame = fr.prev;
}

int string_length(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_length"; neo_current_frame = &fr;
    # 5934 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)) {
        # 5932 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5934 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int charp_length(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_length"; neo_current_frame = &fr;
    # 5941 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)) {
        # 5939 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5941 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int chara_length(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_length"; neo_current_frame = &fr;
    # 5955 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)) {
        # 5953 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5955 "/home/ab25cq/neo-c/neo-c.h"
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
    # 5963 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)) {
        # 5961 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5961))), "/home/ab25cq/neo-c/neo-c.h", 5961, 365);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5961, 366));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5961, 367));
        return __result_obj__0;
    }
    # 5963 "/home/ab25cq/neo-c/neo-c.h"
    len=strlen(str);
    # 5964 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "/home/ab25cq/neo-c/neo-c.h", 5964, 368, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5964, 369);
    # 5970 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<len;i++){
        # 5967 "/home/ab25cq/neo-c/neo-c.h"
        result[i]=str[len-i-1];
    }
    # 5970 "/home/ab25cq/neo-c/neo-c.h"
    result[len]=0;
    # 5972 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5972, 370);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5972, 371));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5972, 372));
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
    # 5981 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)) {
        # 5978 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5978))), "/home/ab25cq/neo-c/neo-c.h", 5978, 373);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5978, 374));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5978, 375));
        return __result_obj__0;
    }
    # 5981 "/home/ab25cq/neo-c/neo-c.h"
    len=strlen(str);
    # 5986 "/home/ab25cq/neo-c/neo-c.h"
    if(head<0) {
        # 5984 "/home/ab25cq/neo-c/neo-c.h"
        head+=len;
    }
    # 5990 "/home/ab25cq/neo-c/neo-c.h"
    if(tail<0) {
        # 5987 "/home/ab25cq/neo-c/neo-c.h"
        tail+=len+1;
    }
    # 5994 "/home/ab25cq/neo-c/neo-c.h"
    if(head>tail) {
        # 5991 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/home/ab25cq/neo-c/neo-c.h", 5991, 376);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5991, 377));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5991, 378));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5991, 379));
        return __result_obj__0;
    }
    # 5998 "/home/ab25cq/neo-c/neo-c.h"
    if(head<0) {
        # 5995 "/home/ab25cq/neo-c/neo-c.h"
        head=0;
    }
    # 6002 "/home/ab25cq/neo-c/neo-c.h"
    if(tail>=len) {
        # 5999 "/home/ab25cq/neo-c/neo-c.h"
        tail=len;
    }
    # 6006 "/home/ab25cq/neo-c/neo-c.h"
    if(head==tail) {
        # 6003 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6003))), "/home/ab25cq/neo-c/neo-c.h", 6003, 380);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6003, 381));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6003, 382));
        return __result_obj__0;
    }
    # 6010 "/home/ab25cq/neo-c/neo-c.h"
    if(tail-head+1<1) {
        # 6007 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6007))), "/home/ab25cq/neo-c/neo-c.h", 6007, 383);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6007, 384));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6007, 385));
        return __result_obj__0;
    }
    # 6010 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/home/ab25cq/neo-c/neo-c.h", 6010, 386, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6010, 387);
    # 6012 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(result,str+head,tail-head);
    # 6013 "/home/ab25cq/neo-c/neo-c.h"
    result[tail-head]=0;
    # 6015 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6015, 388);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6015, 389));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6015, 390));
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
    # 6024 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)) {
        # 6021 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6021))), "/home/ab25cq/neo-c/neo-c.h", 6021, 391);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6021, 392));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6021, 393));
        return __result_obj__0;
    }
    # 6024 "/home/ab25cq/neo-c/neo-c.h"
    len=strlen(str);
    # 6029 "/home/ab25cq/neo-c/neo-c.h"
    if(head<0) {
        # 6027 "/home/ab25cq/neo-c/neo-c.h"
        head+=len;
    }
    # 6033 "/home/ab25cq/neo-c/neo-c.h"
    if(tail<0) {
        # 6030 "/home/ab25cq/neo-c/neo-c.h"
        tail+=len+1;
    }
    # 6037 "/home/ab25cq/neo-c/neo-c.h"
    if(head>tail) {
        # 6034 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/home/ab25cq/neo-c/neo-c.h", 6034, 394);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6034, 395));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6034, 396));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6034, 397));
        return __result_obj__0;
    }
    # 6041 "/home/ab25cq/neo-c/neo-c.h"
    if(head<0) {
        # 6038 "/home/ab25cq/neo-c/neo-c.h"
        head=0;
    }
    # 6045 "/home/ab25cq/neo-c/neo-c.h"
    if(tail>=len) {
        # 6042 "/home/ab25cq/neo-c/neo-c.h"
        tail=len;
    }
    # 6049 "/home/ab25cq/neo-c/neo-c.h"
    if(head==tail) {
        # 6046 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6046))), "/home/ab25cq/neo-c/neo-c.h", 6046, 398);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6046, 399));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6046, 400));
        return __result_obj__0;
    }
    # 6053 "/home/ab25cq/neo-c/neo-c.h"
    if(tail-head+1<1) {
        # 6050 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6050))), "/home/ab25cq/neo-c/neo-c.h", 6050, 401);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6050, 402));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6050, 403));
        return __result_obj__0;
    }
    # 6053 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/home/ab25cq/neo-c/neo-c.h", 6053, 404, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6053, 405);
    # 6055 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(result,str+head,tail-head);
    # 6056 "/home/ab25cq/neo-c/neo-c.h"
    result[tail-head]=0;
    # 6058 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6058, 406);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6058, 407));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6058, 408));
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
    # 6067 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)) {
        # 6064 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6064))), "/home/ab25cq/neo-c/neo-c.h", 6064, 409);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6064, 410));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6064, 411));
        return __result_obj__0;
    }
    # 6067 "/home/ab25cq/neo-c/neo-c.h"
    len=strlen(str);
    # 6072 "/home/ab25cq/neo-c/neo-c.h"
    if(head<0) {
        # 6070 "/home/ab25cq/neo-c/neo-c.h"
        head+=len;
    }
    # 6076 "/home/ab25cq/neo-c/neo-c.h"
    if(tail<0) {
        # 6073 "/home/ab25cq/neo-c/neo-c.h"
        tail+=len+1;
    }
    # 6080 "/home/ab25cq/neo-c/neo-c.h"
    if(head>tail) {
        # 6077 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/home/ab25cq/neo-c/neo-c.h", 6077, 412);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6077, 413));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6077, 414));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6077, 415));
        return __result_obj__0;
    }
    # 6084 "/home/ab25cq/neo-c/neo-c.h"
    if(head<0) {
        # 6081 "/home/ab25cq/neo-c/neo-c.h"
        head=0;
    }
    # 6088 "/home/ab25cq/neo-c/neo-c.h"
    if(tail>=len) {
        # 6085 "/home/ab25cq/neo-c/neo-c.h"
        tail=len;
    }
    # 6092 "/home/ab25cq/neo-c/neo-c.h"
    if(head==tail) {
        # 6089 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6089))), "/home/ab25cq/neo-c/neo-c.h", 6089, 416);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6089, 417));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6089, 418));
        return __result_obj__0;
    }
    # 6096 "/home/ab25cq/neo-c/neo-c.h"
    if(tail-head+1<1) {
        # 6093 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6093))), "/home/ab25cq/neo-c/neo-c.h", 6093, 419);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6093, 420));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6093, 421));
        return __result_obj__0;
    }
    # 6096 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/home/ab25cq/neo-c/neo-c.h", 6096, 422, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6096, 423);
    # 6098 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(result,str+head,tail-head);
    # 6099 "/home/ab25cq/neo-c/neo-c.h"
    result[tail-head]=0;
    # 6101 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6101, 424);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6101, 425));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6101, 426));
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
    # 6109 "/home/ab25cq/neo-c/neo-c.h"
    if(msg==((void*)0)) {
        # 6107 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6107))), "/home/ab25cq/neo-c/neo-c.h", 6107, 427);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6107, 428));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6107, 429));
        return __result_obj__0;
    }
    # 6109 "/home/ab25cq/neo-c/neo-c.h"
    # 6110 "/home/ab25cq/neo-c/neo-c.h"
    __builtin_va_start(args,msg);
    # 6111 "/home/ab25cq/neo-c/neo-c.h"
    # 6112 "/home/ab25cq/neo-c/neo-c.h"
    len=vasprintf(&result,msg,args);
    # 6113 "/home/ab25cq/neo-c/neo-c.h"
    __builtin_va_end(args);
    # 6119 "/home/ab25cq/neo-c/neo-c.h"
    if(len<0) {
        # 6116 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6116))), "/home/ab25cq/neo-c/neo-c.h", 6116, 430);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6116, 431));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6116, 432));
        return __result_obj__0;
    }
    # 6119 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    result2=(char* )come_increment_ref_count(__builtin_string(result,"/home/ab25cq/neo-c/neo-c.h",6119), "/home/ab25cq/neo-c/neo-c.h", 6119, 433);
    # 6121 "/home/ab25cq/neo-c/neo-c.h"
    free(result);
    # 6123 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result2, "/home/ab25cq/neo-c/neo-c.h", 6123, 434);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6123, 435));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6123, 436));
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
    # 6132 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)) {
        # 6129 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6129))), "/home/ab25cq/neo-c/neo-c.h", 6129, 437);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6129, 438));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6129, 439));
        return __result_obj__0;
    }
    # 6132 "/home/ab25cq/neo-c/neo-c.h"
    len=strlen(str);
    # 6138 "/home/ab25cq/neo-c/neo-c.h"
    if(head>=len) {
        # 6135 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/home/ab25cq/neo-c/neo-c.h",6135))), "/home/ab25cq/neo-c/neo-c.h", 6135, 440);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6135, 441));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6135, 442));
        return __result_obj__0;
    }
    # 6142 "/home/ab25cq/neo-c/neo-c.h"
    if(strcmp(str,"")==0) {
        # 6139 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/home/ab25cq/neo-c/neo-c.h",6139))), "/home/ab25cq/neo-c/neo-c.h", 6139, 443);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6139, 444));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6139, 445));
        return __result_obj__0;
    }
    # 6146 "/home/ab25cq/neo-c/neo-c.h"
    if(head<0) {
        # 6143 "/home/ab25cq/neo-c/neo-c.h"
        head+=len;
    }
    # 6150 "/home/ab25cq/neo-c/neo-c.h"
    if(tail<0) {
        # 6147 "/home/ab25cq/neo-c/neo-c.h"
        tail+=len+1;
    }
    # 6154 "/home/ab25cq/neo-c/neo-c.h"
    if(head<0) {
        # 6151 "/home/ab25cq/neo-c/neo-c.h"
        head=0;
    }
    # 6158 "/home/ab25cq/neo-c/neo-c.h"
    if(tail<0) {
        # 6155 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/home/ab25cq/neo-c/neo-c.h",6155))), "/home/ab25cq/neo-c/neo-c.h", 6155, 446);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6155, 447));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6155, 448));
        return __result_obj__0;
    }
    # 6162 "/home/ab25cq/neo-c/neo-c.h"
    if(tail>=len) {
        # 6159 "/home/ab25cq/neo-c/neo-c.h"
        tail=len;
    }
    # 6162 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len-(tail-head)+1)), "/home/ab25cq/neo-c/neo-c.h", 6162, 449, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6162, 450);
    # 6164 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(result,str,head);
    # 6165 "/home/ab25cq/neo-c/neo-c.h"
    memcpy(result+head,str+tail,len-tail);
    # 6167 "/home/ab25cq/neo-c/neo-c.h"
    result[len-(tail-head)]=0;
    # 6169 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6169, 451);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6169, 452));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6169, 453));
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
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1485, 455);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 458);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 459);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1506, 457);
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
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 456));
    }
            neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj14  ;
    struct list_item$1char$ph* litem_20;
    char*  __dec_obj15  ;
    struct list_item$1char$ph* litem_21;
    char*  __dec_obj16  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_20, 0, sizeof(litem_20));
    memset(&litem_21, 0, sizeof(litem_21));
    # 1618 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1615, 470));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/home/ab25cq/neo-c/neo-c.h"
    if(self->len==0) {
        # 1619 "/home/ab25cq/neo-c/neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 1619, 471, "struct list_item$1char$ph*"))), "/home/ab25cq/neo-c/neo-c.h", 1619, 472);
        # 1621 "/home/ab25cq/neo-c/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/home/ab25cq/neo-c/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/home/ab25cq/neo-c/neo-c.h"
        __dec_obj14=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/home/ab25cq/neo-c/neo-c.h", 1623, 474);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1623, 473);
        # 1625 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem;
        # 1626 "/home/ab25cq/neo-c/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_20=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 1629, 475, "struct list_item$1char$ph*"))), "/home/ab25cq/neo-c/neo-c.h", 1629, 476);
        # 1631 "/home/ab25cq/neo-c/neo-c.h"
        litem_20->prev=self->head;
        # 1632 "/home/ab25cq/neo-c/neo-c.h"
        litem_20->next=((void*)0);
        # 1633 "/home/ab25cq/neo-c/neo-c.h"
        __dec_obj15=litem_20->item,
        litem_20->item=(char* )come_increment_ref_count(item, "/home/ab25cq/neo-c/neo-c.h", 1633, 478);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1633, 477);
        # 1635 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_20;
        # 1636 "/home/ab25cq/neo-c/neo-c.h"
        self->head->next=litem_20;
    }
    else {
        # 1639 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        litem_21=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 1639, 479, "struct list_item$1char$ph*"))), "/home/ab25cq/neo-c/neo-c.h", 1639, 480);
        # 1641 "/home/ab25cq/neo-c/neo-c.h"
        litem_21->prev=self->tail;
        # 1642 "/home/ab25cq/neo-c/neo-c.h"
        litem_21->next=((void*)0);
        # 1643 "/home/ab25cq/neo-c/neo-c.h"
        __dec_obj16=litem_21->item,
        litem_21->item=(char* )come_increment_ref_count(item, "/home/ab25cq/neo-c/neo-c.h", 1643, 482);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1643, 481);
        # 1645 "/home/ab25cq/neo-c/neo-c.h"
        self->tail->next=litem_21;
        # 1646 "/home/ab25cq/neo-c/neo-c.h"
        self->tail=litem_21;
    }
    # 1649 "/home/ab25cq/neo-c/neo-c.h"
    self->len++;
    # 1651 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1651, 483));
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
    # 6178 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 6175 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 6175, 454, "struct list$1char$ph*"), "/home/ab25cq/neo-c/neo-c.h", 6175, 460)))), "/home/ab25cq/neo-c/neo-c.h", 6175, 461);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6175, 462);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6175, 463);
        return __result_obj__0;
    }
    # 6178 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 6178, 464, "struct list$1char$ph*"), "/home/ab25cq/neo-c/neo-c.h", 6178, 465)), "/home/ab25cq/neo-c/neo-c.h", 6178, 466);
    # 6180 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    str=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 6180, 467, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 6180, 468)), "/home/ab25cq/neo-c/neo-c.h", 6180, 469);
    # 6182 "/home/ab25cq/neo-c/neo-c.h"
    self_len=charp_length(self);
    # 6192 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<self_len;i++){
        # 6191 "/home/ab25cq/neo-c/neo-c.h"
        if(self[i]==c) {
            # 6185 "/home/ab25cq/neo-c/neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"/home/ab25cq/neo-c/neo-c.h",6185), "/home/ab25cq/neo-c/neo-c.h", 6185, 484));
            # 6186 "/home/ab25cq/neo-c/neo-c.h"
            buffer_reset(str);
        }
        else {
            # 6189 "/home/ab25cq/neo-c/neo-c.h"
            buffer_append_char(str,self[i]);
        }
    }
    # 6196 "/home/ab25cq/neo-c/neo-c.h"
    if(buffer_length(str)!=0) {
        # 6193 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"/home/ab25cq/neo-c/neo-c.h",6193), "/home/ab25cq/neo-c/neo-c.h", 6193, 485));
    }
    # 6196 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6196, 486);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6196, 487);
    come_call_finalizer(buffer_finalize, str, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6196, 488);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6196, 489);
    return __result_obj__0;
}

char*  charp_xsprintf(char* self, const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_xsprintf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6201 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "/home/ab25cq/neo-c/neo-c.h", 6201, 490);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6201, 491));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6201, 492));
    return __result_obj__0;
}

char*  int_xsprintf(int self, const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_xsprintf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6206 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "/home/ab25cq/neo-c/neo-c.h", 6206, 493);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6206, 494));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6206, 495));
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
    # 6214 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)) {
        # 6212 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6212))), "/home/ab25cq/neo-c/neo-c.h", 6212, 496);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6212, 497));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6212, 498));
        return __result_obj__0;
    }
    # 6214 "/home/ab25cq/neo-c/neo-c.h"
    len=charp_length(str);
    # 6215 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), "/home/ab25cq/neo-c/neo-c.h", 6215, 499, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6215, 500);
    # 6217 "/home/ab25cq/neo-c/neo-c.h"
    n=0;
    # 6232 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<len;i++){
        # 6219 "/home/ab25cq/neo-c/neo-c.h"
        c=str[i];
        # 6230 "/home/ab25cq/neo-c/neo-c.h"
        if((c>=0&&c<32)||c==127) {
            # 6224 "/home/ab25cq/neo-c/neo-c.h"
            result[n++]=94;
            # 6225 "/home/ab25cq/neo-c/neo-c.h"
            result[n++]=c+65-1;
        }
        else {
            # 6228 "/home/ab25cq/neo-c/neo-c.h"
            result[n++]=c;
        }
    }
    # 6234 "/home/ab25cq/neo-c/neo-c.h"
    result[n]=0;
    # 6234 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6234, 501);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6234, 502));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6234, 503));
    return __result_obj__0;
}

char*  chara_printable(char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_printable"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6239 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_printable(str))), "/home/ab25cq/neo-c/neo-c.h", 6239, 504);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6239, 505));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6239, 506));
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
    # 6248 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)||str==((void*)0)||replace==((void*)0)) {
        # 6245 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6245))), "/home/ab25cq/neo-c/neo-c.h", 6245, 507);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6245, 508));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6245, 509));
        return __result_obj__0;
    }
    # 6248 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 6248, 510, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 6248, 511)), "/home/ab25cq/neo-c/neo-c.h", 6248, 512);
    # 6250 "/home/ab25cq/neo-c/neo-c.h"
    p=self;
    # 6270 "/home/ab25cq/neo-c/neo-c.h"
    while((_Bool)1) {
        # 6253 "/home/ab25cq/neo-c/neo-c.h"
        p2=strstr(p,str);
        # 6264 "/home/ab25cq/neo-c/neo-c.h"
        if(p2==((void*)0)) {
            # 6256 "/home/ab25cq/neo-c/neo-c.h"
            p2=p;
            # 6260 "/home/ab25cq/neo-c/neo-c.h"
            while(*p2) {
                # 6258 "/home/ab25cq/neo-c/neo-c.h"
                p2++;
            }
            # 6260 "/home/ab25cq/neo-c/neo-c.h"
            buffer_append(result,p,p2-p);
            # 6261 "/home/ab25cq/neo-c/neo-c.h"
            break;
        }
        # 6264 "/home/ab25cq/neo-c/neo-c.h"
        buffer_append(result,p,p2-p);
        # 6265 "/home/ab25cq/neo-c/neo-c.h"
        buffer_append_str(result,replace);
        # 6267 "/home/ab25cq/neo-c/neo-c.h"
        p=p2+strlen(str);
    }
    # 6270 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(result))), "/home/ab25cq/neo-c/neo-c.h", 6270, 513);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6270, 514);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6270, 515));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6270, 516));
    return __result_obj__0;
}

char*  xbasename(char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xbasename"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    memset(&p, 0, sizeof(p));
    # 6281 "/home/ab25cq/neo-c/neo-c.h"
    if(path==((void*)0)) {
        # 6279 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6279))), "/home/ab25cq/neo-c/neo-c.h", 6279, 517);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6279, 518));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6279, 519));
        return __result_obj__0;
    }
    # 6281 "/home/ab25cq/neo-c/neo-c.h"
    p=path+strlen(path);
    # 6292 "/home/ab25cq/neo-c/neo-c.h"
    while(p>=path) {
        # 6290 "/home/ab25cq/neo-c/neo-c.h"
        if(*p==47) {
            # 6285 "/home/ab25cq/neo-c/neo-c.h"
            break;
        }
        else {
            # 6288 "/home/ab25cq/neo-c/neo-c.h"
            p--;
        }
    }
    # 6299 "/home/ab25cq/neo-c/neo-c.h"
    if(p<path) {
        # 6293 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"/home/ab25cq/neo-c/neo-c.h",6293))), "/home/ab25cq/neo-c/neo-c.h", 6293, 520);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6293, 521));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6293, 522));
        return __result_obj__0;
    }
    else {
        # 6296 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"/home/ab25cq/neo-c/neo-c.h",6296))), "/home/ab25cq/neo-c/neo-c.h", 6296, 523);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6296, 524));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6296, 525));
        return __result_obj__0;
    }
    # 6299 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6299))), "/home/ab25cq/neo-c/neo-c.h", 6299, 526);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6299, 527));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6299, 528));
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
    # 6307 "/home/ab25cq/neo-c/neo-c.h"
    if(path==((void*)0)) {
        # 6305 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6305))), "/home/ab25cq/neo-c/neo-c.h", 6305, 529);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6305, 530));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6305, 531));
        return __result_obj__0;
    }
    # 6307 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    path2=(char* )come_increment_ref_count(xbasename(path), "/home/ab25cq/neo-c/neo-c.h", 6307, 532);
    # 6309 "/home/ab25cq/neo-c/neo-c.h"
    p=path2+strlen(path2);
    # 6320 "/home/ab25cq/neo-c/neo-c.h"
    while(p>=path2) {
        # 6318 "/home/ab25cq/neo-c/neo-c.h"
        if(*p==46) {
            # 6313 "/home/ab25cq/neo-c/neo-c.h"
            break;
        }
        else {
            # 6316 "/home/ab25cq/neo-c/neo-c.h"
            p--;
        }
    }
    # 6327 "/home/ab25cq/neo-c/neo-c.h"
    if(p<path2) {
        # 6321 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path2,"/home/ab25cq/neo-c/neo-c.h",6321))), "/home/ab25cq/neo-c/neo-c.h", 6321, 533);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6321, 534));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6321, 535));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6321, 536));
        return __result_obj__0;
    }
    else {
        # 6324 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(path2,0,p-path2))), "/home/ab25cq/neo-c/neo-c.h", 6324, 537);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6324, 538));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6324, 539));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6324, 540));
        return __result_obj__0;
    }
    # 6327 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6327))), "/home/ab25cq/neo-c/neo-c.h", 6327, 541);
    (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6327, 542));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6327, 543));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6327, 544));
    return __result_obj__0;
}

char*  xextname(char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xextname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    memset(&p, 0, sizeof(p));
    # 6335 "/home/ab25cq/neo-c/neo-c.h"
    if(path==((void*)0)) {
        # 6333 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6333))), "/home/ab25cq/neo-c/neo-c.h", 6333, 545);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6333, 546));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6333, 547));
        return __result_obj__0;
    }
    # 6335 "/home/ab25cq/neo-c/neo-c.h"
    p=path+strlen(path);
    # 6346 "/home/ab25cq/neo-c/neo-c.h"
    while(p>=path) {
        # 6344 "/home/ab25cq/neo-c/neo-c.h"
        if(*p==46) {
            # 6339 "/home/ab25cq/neo-c/neo-c.h"
            break;
        }
        else {
            # 6342 "/home/ab25cq/neo-c/neo-c.h"
            p--;
        }
    }
    # 6353 "/home/ab25cq/neo-c/neo-c.h"
    if(p<path) {
        # 6347 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"/home/ab25cq/neo-c/neo-c.h",6347))), "/home/ab25cq/neo-c/neo-c.h", 6347, 548);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6347, 549));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6347, 550));
        return __result_obj__0;
    }
    else {
        # 6350 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"/home/ab25cq/neo-c/neo-c.h",6350))), "/home/ab25cq/neo-c/neo-c.h", 6350, 551);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6350, 552));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6350, 553));
        return __result_obj__0;
    }
    # 6353 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6353))), "/home/ab25cq/neo-c/neo-c.h", 6353, 554);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6353, 555));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6353, 556));
    return __result_obj__0;
}

char*  _Bool_to_string(_Bool self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6377 "/home/ab25cq/neo-c/neo-c.h"
    if(self) {
        # 6372 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("true","/home/ab25cq/neo-c/neo-c.h",6372))), "/home/ab25cq/neo-c/neo-c.h", 6372, 557);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6372, 558));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6372, 559));
        return __result_obj__0;
    }
    else {
        # 6375 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("false","/home/ab25cq/neo-c/neo-c.h",6375))), "/home/ab25cq/neo-c/neo-c.h", 6375, 560);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6375, 561));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6375, 562));
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

char*  char_to_string(char self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6381 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%c",self))), "/home/ab25cq/neo-c/neo-c.h", 6381, 563);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6381, 564));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6381, 565));
    return __result_obj__0;
}

char*  short_to_string(short self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6386 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "/home/ab25cq/neo-c/neo-c.h", 6386, 566);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6386, 567));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6386, 568));
    return __result_obj__0;
}

char*  int_to_string(int self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6391 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "/home/ab25cq/neo-c/neo-c.h", 6391, 569);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6391, 570));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6391, 571));
    return __result_obj__0;
}

char*  long_to_string(long self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6396 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "/home/ab25cq/neo-c/neo-c.h", 6396, 572);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6396, 573));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6396, 574));
    return __result_obj__0;
}

char*  size_t_to_string(unsigned long  int  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6401 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "/home/ab25cq/neo-c/neo-c.h", 6401, 575);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6401, 576));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6401, 577));
    return __result_obj__0;
}

char*  float_to_string(float self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6406 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%f",self))), "/home/ab25cq/neo-c/neo-c.h", 6406, 578);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6406, 579));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6406, 580));
    return __result_obj__0;
}

char*  double_to_string(double self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6411 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%lf",self))), "/home/ab25cq/neo-c/neo-c.h", 6411, 581);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6411, 582));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6411, 583));
    return __result_obj__0;
}

char*  string_to_string(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6419 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 6417 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6417))), "/home/ab25cq/neo-c/neo-c.h", 6417, 584);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6417, 585));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6417, 586));
        return __result_obj__0;
    }
    # 6419 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6419))), "/home/ab25cq/neo-c/neo-c.h", 6419, 587);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6419, 588));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6419, 589));
    return __result_obj__0;
}

char*  charp_to_string(const char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6427 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 6425 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6425))), "/home/ab25cq/neo-c/neo-c.h", 6425, 590);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6425, 591));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6425, 592));
        return __result_obj__0;
    }
    # 6427 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6427))), "/home/ab25cq/neo-c/neo-c.h", 6427, 593);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6427, 594));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6427, 595));
    return __result_obj__0;
}

int _Bool_compare(_Bool left, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_compare"; neo_current_frame = &fr;
    # 6466 "/home/ab25cq/neo-c/neo-c.h"
    if(!left&&right) {
        # 6454 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left&&right) {
        # 6457 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(!left&&!right) {
        # 6460 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else {
        # 6463 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 6466 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int char_compare(char left, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_compare"; neo_current_frame = &fr;
    # 6481 "/home/ab25cq/neo-c/neo-c.h"
    if(left<right) {
        # 6472 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6475 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6478 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6481 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int short_compare(short left, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_compare"; neo_current_frame = &fr;
    # 6496 "/home/ab25cq/neo-c/neo-c.h"
    if(left<right) {
        # 6487 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6490 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6493 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6496 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int int_compare(int left, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_compare"; neo_current_frame = &fr;
    # 6511 "/home/ab25cq/neo-c/neo-c.h"
    if(left<right) {
        # 6502 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6505 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6508 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6511 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int long_compare(long left, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_compare"; neo_current_frame = &fr;
    # 6526 "/home/ab25cq/neo-c/neo-c.h"
    if(left<right) {
        # 6517 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6520 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6523 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6526 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int size_t_compare(unsigned long  int  left  , unsigned long  int  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_compare"; neo_current_frame = &fr;
    # 6541 "/home/ab25cq/neo-c/neo-c.h"
    if(left<right) {
        # 6532 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6535 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6538 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6541 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int float_compare(float left, float right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_compare"; neo_current_frame = &fr;
    # 6556 "/home/ab25cq/neo-c/neo-c.h"
    if(left<right) {
        # 6547 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6550 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6553 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6556 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int double_compare(double left, double right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_compare"; neo_current_frame = &fr;
    # 6571 "/home/ab25cq/neo-c/neo-c.h"
    if(left<right) {
        # 6562 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6565 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6568 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6571 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int string_compare(char* left, char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_compare"; neo_current_frame = &fr;
    # 6586 "/home/ab25cq/neo-c/neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 6577 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
        # 6580 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
        # 6583 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 6586 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

int charp_compare(char* left, char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_compare"; neo_current_frame = &fr;
    # 6601 "/home/ab25cq/neo-c/neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 6592 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
        # 6595 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
        # 6598 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 6601 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

char*  charp_puts(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_puts"; neo_current_frame = &fr;
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
    puts(self);
    # 6614 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6614))), "/home/ab25cq/neo-c/neo-c.h", 6614, 599);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6614, 600));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6614, 601));
    return __result_obj__0;
}

char*  charp_print(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_print"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6622 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 6620 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6620))), "/home/ab25cq/neo-c/neo-c.h", 6620, 602);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6620, 603));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6620, 604));
        return __result_obj__0;
    }
    # 6622 "/home/ab25cq/neo-c/neo-c.h"
    printf("%s",self);
    # 6624 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6624))), "/home/ab25cq/neo-c/neo-c.h", 6624, 605);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6624, 606));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6624, 607));
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
    # 6654 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 6652 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6652))), "/home/ab25cq/neo-c/neo-c.h", 6652, 608);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6652, 609));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6652, 610));
        return __result_obj__0;
    }
    # 6654 "/home/ab25cq/neo-c/neo-c.h"
    # 6656 "/home/ab25cq/neo-c/neo-c.h"
    # 6657 "/home/ab25cq/neo-c/neo-c.h"
    __builtin_va_start(args,self);
    # 6658 "/home/ab25cq/neo-c/neo-c.h"
    vasprintf(&msg2,self,args);
    # 6659 "/home/ab25cq/neo-c/neo-c.h"
    __builtin_va_end(args);
    # 6661 "/home/ab25cq/neo-c/neo-c.h"
    printf("%s",msg2);
    # 6663 "/home/ab25cq/neo-c/neo-c.h"
    free(msg2);
    # 6665 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6665))), "/home/ab25cq/neo-c/neo-c.h", 6665, 611);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6665, 612));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6665, 613));
    return __result_obj__0;
}

int int_printf(int self, char* msg)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_printf"; neo_current_frame = &fr;
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

long long_printf(long self, char* msg)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_printf"; neo_current_frame = &fr;
    # 6684 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)) {
        # 6682 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return self;
    }
    # 6684 "/home/ab25cq/neo-c/neo-c.h"
    printf(msg,self);
    # 6686 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

void int_times(int self, void* parent, void (*block)(void*,int))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_times"; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    # 6694 "/home/ab25cq/neo-c/neo-c.h"
    for(i=0    ;i<self;i++){
        # 6692 "/home/ab25cq/neo-c/neo-c.h"
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
    # 6706 "/home/ab25cq/neo-c/neo-c.h"
    if(f==((void*)0)) {
        # 6704 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/home/ab25cq/neo-c/neo-c.h", 6704, 614, "buffer"), "/home/ab25cq/neo-c/neo-c.h", 6704, 615), "", 0))), "/home/ab25cq/neo-c/neo-c.h", 6704, 616);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6704, 617);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6704, 618);
        return __result_obj__0;
    }
    # 6706 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 6706, 619, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 6706, 620)), "/home/ab25cq/neo-c/neo-c.h", 6706, 621);
    # 6720 "/home/ab25cq/neo-c/neo-c.h"
    while(1) {
        # 6709 "/home/ab25cq/neo-c/neo-c.h"
        char buf2[8192];
        memset(&buf2, 0, sizeof(buf2));
        # 6711 "/home/ab25cq/neo-c/neo-c.h"
        size=fread(buf2,1,8192,f);
        # 6713 "/home/ab25cq/neo-c/neo-c.h"
        buffer_append(buf,buf2,size);
        # 6718 "/home/ab25cq/neo-c/neo-c.h"
        if(size<8192) {
            # 6716 "/home/ab25cq/neo-c/neo-c.h"
            break;
        }
    }
    # 6720 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(buf, "/home/ab25cq/neo-c/neo-c.h", 6720, 622);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6720, 623);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6720, 624);
    return __result_obj__0;
}

int FILE_write(struct _IO_FILE*  f  , const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_write"; neo_current_frame = &fr;
    # 6729 "/home/ab25cq/neo-c/neo-c.h"
    if(f==((void*)0)||str==((void*)0)) {
        # 6726 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 6729 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return fwrite(str,strlen(str),1,f);
    neo_current_frame = fr.prev;
}

int FILE_fclose(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fclose"; neo_current_frame = &fr;
    int result;
    memset(&result, 0, sizeof(result));
    # 6738 "/home/ab25cq/neo-c/neo-c.h"
    if(f==((void*)0)) {
        # 6735 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 6738 "/home/ab25cq/neo-c/neo-c.h"
    result=fclose(f);
    # 6744 "/home/ab25cq/neo-c/neo-c.h"
    if(result<0) {
        # 6741 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return result;
    }
    # 6744 "/home/ab25cq/neo-c/neo-c.h"
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
    # 6752 "/home/ab25cq/neo-c/neo-c.h"
    if(f==((void*)0)||msg==((void*)0)) {
        # 6750 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = f;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 6752 "/home/ab25cq/neo-c/neo-c.h"
    char msg2[1024*2*2*2];
    memset(&msg2, 0, sizeof(msg2));
    # 6754 "/home/ab25cq/neo-c/neo-c.h"
    # 6755 "/home/ab25cq/neo-c/neo-c.h"
    __builtin_va_start(args,msg);
    # 6756 "/home/ab25cq/neo-c/neo-c.h"
    vsnprintf(msg2,1024*2*2*2,msg,args);
    # 6757 "/home/ab25cq/neo-c/neo-c.h"
    __builtin_va_end(args);
    # 6759 "/home/ab25cq/neo-c/neo-c.h"
    result=fprintf(f,"%s",msg2);
    # 6765 "/home/ab25cq/neo-c/neo-c.h"
    if(result<0) {
        # 6762 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = f;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 6765 "/home/ab25cq/neo-c/neo-c.h"
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
    # 6774 "/home/ab25cq/neo-c/neo-c.h"
    if(self==((void*)0)||file_name==((void*)0)) {
        # 6771 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 6774 "/home/ab25cq/neo-c/neo-c.h"
    # 6782 "/home/ab25cq/neo-c/neo-c.h"
    if(append) {
        # 6776 "/home/ab25cq/neo-c/neo-c.h"
        f=fopen(file_name,"a");
    }
    else {
        # 6779 "/home/ab25cq/neo-c/neo-c.h"
        f=fopen(file_name,"w");
    }
    # 6786 "/home/ab25cq/neo-c/neo-c.h"
    if(f==((void*)0)) {
        # 6783 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 6786 "/home/ab25cq/neo-c/neo-c.h"
    result=fwrite(self,strlen(self),1,f);
    # 6792 "/home/ab25cq/neo-c/neo-c.h"
    if(result!=1) {
        # 6789 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return result;
    }
    # 6794 "/home/ab25cq/neo-c/neo-c.h"
    result2=fclose(f);
    # 6798 "/home/ab25cq/neo-c/neo-c.h"
    if(result2<0) {
        # 6795 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return result2;
    }
    # 6798 "/home/ab25cq/neo-c/neo-c.h"
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
    # 6807 "/home/ab25cq/neo-c/neo-c.h"
    if(file_name==((void*)0)) {
        # 6804 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/home/ab25cq/neo-c/neo-c.h", 6804, 625, "buffer"), "/home/ab25cq/neo-c/neo-c.h", 6804, 626), "", 0))), "/home/ab25cq/neo-c/neo-c.h", 6804, 627);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6804, 628);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6804, 629);
        return __result_obj__0;
    }
    # 6807 "/home/ab25cq/neo-c/neo-c.h"
    f=fopen(file_name,"r");
    # 6813 "/home/ab25cq/neo-c/neo-c.h"
    if(f==((void*)0)) {
        # 6810 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/home/ab25cq/neo-c/neo-c.h", 6810, 630, "buffer"), "/home/ab25cq/neo-c/neo-c.h", 6810, 631), "", 0))), "/home/ab25cq/neo-c/neo-c.h", 6810, 632);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6810, 633);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6810, 634);
        return __result_obj__0;
    }
    # 6813 "/home/ab25cq/neo-c/neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 6813, 635, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 6813, 636)), "/home/ab25cq/neo-c/neo-c.h", 6813, 637);
    # 6827 "/home/ab25cq/neo-c/neo-c.h"
    while(1) {
        # 6816 "/home/ab25cq/neo-c/neo-c.h"
        char buf2[8192];
        memset(&buf2, 0, sizeof(buf2));
        # 6818 "/home/ab25cq/neo-c/neo-c.h"
        size=fread(buf2,1,8192,f);
        # 6820 "/home/ab25cq/neo-c/neo-c.h"
        buffer_append(buf,buf2,size);
        # 6825 "/home/ab25cq/neo-c/neo-c.h"
        if(size<8192) {
            # 6823 "/home/ab25cq/neo-c/neo-c.h"
            break;
        }
    }
    # 6829 "/home/ab25cq/neo-c/neo-c.h"
    result2=fclose(f);
    # 6833 "/home/ab25cq/neo-c/neo-c.h"
    if(result2<0) {
        # 6830 "/home/ab25cq/neo-c/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/home/ab25cq/neo-c/neo-c.h", 6830, 638, "buffer"), "/home/ab25cq/neo-c/neo-c.h", 6830, 639), "", 0))), "/home/ab25cq/neo-c/neo-c.h", 6830, 640);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6830, 641);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6830, 642);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6830, 643);
        return __result_obj__0;
    }
    # 6833 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(buf, "/home/ab25cq/neo-c/neo-c.h", 6833, 644);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6833, 645);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6833, 646);
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
    # 6838 "/home/ab25cq/neo-c/neo-c.h"
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 6838, 647, "struct list$1char$ph*"), "/home/ab25cq/neo-c/neo-c.h", 6838, 648)), "/home/ab25cq/neo-c/neo-c.h", 6838, 649);
    # 6844 "/home/ab25cq/neo-c/neo-c.h"
    if(f==((void*)0)) {
        # 6841 "/home/ab25cq/neo-c/neo-c.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6841, 650);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6841, 651);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6841, 652);
        return __result_obj__0;
    }
    # 6854 "/home/ab25cq/neo-c/neo-c.h"
    while(1) {
        # 6845 "/home/ab25cq/neo-c/neo-c.h"
        char buf[8192];
        memset(&buf, 0, sizeof(buf));
        # 6851 "/home/ab25cq/neo-c/neo-c.h"
        if(fgets(buf,8192,f)==((void*)0)) {
            # 6848 "/home/ab25cq/neo-c/neo-c.h"
            break;
        }
        # 6851 "/home/ab25cq/neo-c/neo-c.h"
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(buf,"/home/ab25cq/neo-c/neo-c.h",6851), "/home/ab25cq/neo-c/neo-c.h", 6851, 653));
    }
    # 6854 "/home/ab25cq/neo-c/neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6854, 654);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6854, 655);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6854, 656);
    return __result_obj__0;
}

_Bool xiswalpha(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalpha"; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    # 6859 "/home/ab25cq/neo-c/neo-c.h"
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 6860 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xiswblank(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswblank"; neo_current_frame = &fr;
    # 6865 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xiswdigit(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswdigit"; neo_current_frame = &fr;
    # 6870 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xiswalnum(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalnum"; neo_current_frame = &fr;
    # 6875 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return xiswalpha(c)||xiswdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xiswascii(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswascii"; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    # 6880 "/home/ab25cq/neo-c/neo-c.h"
    result=(c>=32&&c<=126);
    # 6881 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

int string_index(char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_index"; neo_current_frame = &fr;
    # 7218 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return charp_index(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int charp_index(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index"; neo_current_frame = &fr;
    char* head;
    memset(&head, 0, sizeof(head));
    # 7227 "/home/ab25cq/neo-c/neo-c.h"
    if(str==((void*)0)||search_str==((void*)0)) {
        # 7224 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 7227 "/home/ab25cq/neo-c/neo-c.h"
    head=strstr(str,search_str);
    # 7233 "/home/ab25cq/neo-c/neo-c.h"
    if(head==((void*)0)) {
        # 7230 "/home/ab25cq/neo-c/neo-c.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 7233 "/home/ab25cq/neo-c/neo-c.h"
        neo_current_frame = fr.prev;
    return head-str;
    neo_current_frame = fr.prev;
}

