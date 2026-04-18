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

struct list_item$1proc_alias_target$ph
{
    struct proc_alias_target*  item  ;
    struct list_item$1proc_alias_target$ph* prev;
    struct list_item$1proc_alias_target$ph* next;
};

struct list$1proc_alias_target$ph
{
    struct list_item$1proc_alias_target$ph* head;
    struct list_item$1proc_alias_target$ph* tail;
    int len;
    struct list_item$1proc_alias_target$ph* it;
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
static struct list$1proc_alias_target$ph* list$1proc_alias_target$ph_initialize(struct list$1proc_alias_target$ph* self);
static void list$1proc_alias_target$ph$p_finalize(struct list$1proc_alias_target$ph* self);
static void list_item$1proc_alias_target$ph$p_finalize(struct list_item$1proc_alias_target$ph* self);
static void proc_alias_target_finalize(struct proc_alias_target*  self  );
static struct list$1proc_alias_target$ph* list$1proc_alias_target$ph_add(struct list$1proc_alias_target$ph* self, struct proc_alias_target*  item  );
static struct proc_alias_target*  list$1proc_alias_target$ph_item(struct list$1proc_alias_target$ph* self, int position, struct proc_alias_target*  default_value  );
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
    struct list$1proc_alias_target$ph* xs;
    struct proc_alias_target*  q  ;
    int __result_obj__0;
    memset(&p, 0, sizeof(p));
    memset(&xs, 0, sizeof(xs));
    memset(&q, 0, sizeof(q));
    # 9 "../xxx/tv.nc"
    p=(struct proc_alias_target* )come_increment_ref_count((struct proc_alias_target *)come_calloc(1, sizeof(struct proc_alias_target )*(1), "../xxx/tv.nc", 9, 1, "struct proc_alias_target* "), "../xxx/tv.nc", 9, 2);
    # 10 "../xxx/tv.nc"
    __right_value0 = (void*)0;
    __dec_obj1=p->name,
    p->name=(char* )come_increment_ref_count(__builtin_string("x","../xxx/tv.nc",10), "../xxx/tv.nc", 10, 4);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "../xxx/tv.nc", 10, 3);
    # 12 "../xxx/tv.nc"
    __right_value0 = (void*)0;
    xs=(struct list$1proc_alias_target$ph*)come_increment_ref_count(list$1proc_alias_target$ph_initialize((struct list$1proc_alias_target$ph*)come_increment_ref_count((struct list$1proc_alias_target$ph*)come_calloc(1, sizeof(struct list$1proc_alias_target$ph)*(1), "../xxx/tv.nc", 12, 5, "struct list$1proc_alias_target$ph*"), "../xxx/tv.nc", 12, 12)), "../xxx/tv.nc", 12, 13);
    # 13 "../xxx/tv.nc"
    list$1proc_alias_target$ph_add(xs,(struct proc_alias_target* )come_increment_ref_count(p, "../xxx/tv.nc", 13, 28));
    # 15 "../xxx/tv.nc"
    __right_value0 = (void*)0;
    q=(struct proc_alias_target* )come_increment_ref_count(list$1proc_alias_target$ph_item(xs,0,((void*)0)), "../xxx/tv.nc", 15, 35);
    # 17 "../xxx/tv.nc"
        __result_obj__0 = charp_operator_equals(q->name,"x");
    come_call_finalizer(proc_alias_target_finalize, p, (void*)0, (void*)0, 0, 0, 0, (void*)0, "../xxx/tv.nc}", 17, 36);
    come_call_finalizer(list$1proc_alias_target$ph$p_finalize, xs, (void*)0, (void*)0, 0, 0, 0, (void*)0, "../xxx/tv.nc}", 17, 37);
    come_call_finalizer(proc_alias_target_finalize, q, (void*)0, (void*)0, 0, 0, 0, (void*)0, "../xxx/tv.nc}", 17, 38);
    neo_current_frame = fr.prev;
    come_memleak_checker();
    return __result_obj__0;
}

static struct list$1proc_alias_target$ph* list$1proc_alias_target$ph_initialize(struct list$1proc_alias_target$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1proc_alias_target$ph_initialize"; neo_current_frame = &fr;
    struct list$1proc_alias_target$ph* __result_obj__0;
    # 1481 "/usr/local/include/neo-c.h"
    self->head=((void*)0);
    # 1482 "/usr/local/include/neo-c.h"
    self->tail=((void*)0);
    # 1483 "/usr/local/include/neo-c.h"
    self->len=0;
    # 1485 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1proc_alias_target$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 6);
    come_call_finalizer(list$1proc_alias_target$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 8, 10);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1proc_alias_target$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 8, 11);
    return __result_obj__0;
}

static void list$1proc_alias_target$ph$p_finalize(struct list$1proc_alias_target$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1proc_alias_target$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1proc_alias_target$ph* it;
    struct list_item$1proc_alias_target$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1502 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1500 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "/usr/local/include/neo-c.h"
    it=self->head;
    # 1508 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "/usr/local/include/neo-c.h"
        prev_it=it;
        # 1505 "/usr/local/include/neo-c.h"
        it=it->next;
        # 1506 "/usr/local/include/neo-c.h"
        come_call_finalizer(list_item$1proc_alias_target$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 9);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1proc_alias_target$ph$p_finalize(struct list_item$1proc_alias_target$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1proc_alias_target$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1proc_alias_target$ph$p_finalize"
    # 3 "list_item$1proc_alias_target$ph$p_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 2 "list_item$1proc_alias_target$ph$p_finalize"
        come_call_finalizer(proc_alias_target_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1proc_alias_target$ph$p_finalize}", 2, 8);
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
        (self->name = come_decrement_ref_count(self->name, (void*)0, (void*)0, 0, 0, (void*)0, "proc_alias_target_finalize", 2, 7));
    }
            neo_current_frame = fr.prev;
}

static struct list$1proc_alias_target$ph* list$1proc_alias_target$ph_add(struct list$1proc_alias_target$ph* self, struct proc_alias_target*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1proc_alias_target$ph_add"; neo_current_frame = &fr;
    struct list$1proc_alias_target$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1proc_alias_target$ph* litem;
    struct proc_alias_target*  __dec_obj2  ;
    struct list_item$1proc_alias_target$ph* litem_0;
    struct proc_alias_target*  __dec_obj3  ;
    struct list_item$1proc_alias_target$ph* litem_1;
    struct proc_alias_target*  __dec_obj4  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_0, 0, sizeof(litem_0));
    memset(&litem_1, 0, sizeof(litem_1));
    # 1533 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1531 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(proc_alias_target_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 14);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "/usr/local/include/neo-c.h"
    if(self->len==0) {
        # 1534 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1proc_alias_target$ph*)come_increment_ref_count(((struct list_item$1proc_alias_target$ph*)(__right_value0=(struct list_item$1proc_alias_target$ph*)come_calloc(1, sizeof(struct list_item$1proc_alias_target$ph)*(1), "/usr/local/include/neo-c.h", 1534, 15, "struct list_item$1proc_alias_target$ph*"))), "/usr/local/include/neo-c.h", 1534, 16);
        # 1536 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1537 "/usr/local/include/neo-c.h"
        litem->next=((void*)0);
        # 1538 "/usr/local/include/neo-c.h"
        __dec_obj2=litem->item,
        litem->item=(struct proc_alias_target* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 18);
        come_call_finalizer(proc_alias_target_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 17);
        # 1540 "/usr/local/include/neo-c.h"
        self->tail=litem;
        # 1541 "/usr/local/include/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1proc_alias_target$ph*)come_increment_ref_count(((struct list_item$1proc_alias_target$ph*)(__right_value0=(struct list_item$1proc_alias_target$ph*)come_calloc(1, sizeof(struct list_item$1proc_alias_target$ph)*(1), "/usr/local/include/neo-c.h", 1544, 19, "struct list_item$1proc_alias_target$ph*"))), "/usr/local/include/neo-c.h", 1544, 20);
        # 1546 "/usr/local/include/neo-c.h"
        litem_0->prev=self->head;
        # 1547 "/usr/local/include/neo-c.h"
        litem_0->next=((void*)0);
        # 1548 "/usr/local/include/neo-c.h"
        __dec_obj3=litem_0->item,
        litem_0->item=(struct proc_alias_target* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 22);
        come_call_finalizer(proc_alias_target_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 21);
        # 1550 "/usr/local/include/neo-c.h"
        self->tail=litem_0;
        # 1551 "/usr/local/include/neo-c.h"
        self->head->next=litem_0;
    }
    else {
        # 1554 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1proc_alias_target$ph*)come_increment_ref_count(((struct list_item$1proc_alias_target$ph*)(__right_value0=(struct list_item$1proc_alias_target$ph*)come_calloc(1, sizeof(struct list_item$1proc_alias_target$ph)*(1), "/usr/local/include/neo-c.h", 1554, 23, "struct list_item$1proc_alias_target$ph*"))), "/usr/local/include/neo-c.h", 1554, 24);
        # 1556 "/usr/local/include/neo-c.h"
        litem_1->prev=self->tail;
        # 1557 "/usr/local/include/neo-c.h"
        litem_1->next=((void*)0);
        # 1558 "/usr/local/include/neo-c.h"
        __dec_obj4=litem_1->item,
        litem_1->item=(struct proc_alias_target* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 26);
        come_call_finalizer(proc_alias_target_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 25);
        # 1560 "/usr/local/include/neo-c.h"
        self->tail->next=litem_1;
        # 1561 "/usr/local/include/neo-c.h"
        self->tail=litem_1;
    }
    # 1564 "/usr/local/include/neo-c.h"
    self->len++;
    # 1566 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(proc_alias_target_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 27);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct proc_alias_target*  list$1proc_alias_target$ph_item(struct list$1proc_alias_target$ph* self, int position, struct proc_alias_target*  default_value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1proc_alias_target$ph_item"; neo_current_frame = &fr;
    struct proc_alias_target*  __result_obj__0  ;
    struct list_item$1proc_alias_target$ph* it;
    int i;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    # 1750 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1747 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct proc_alias_target* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 1747, 29);
        neo_current_frame = fr.prev;
        come_call_finalizer(proc_alias_target_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1747, 30);
        return __result_obj__0;
    }
    # 1754 "/usr/local/include/neo-c.h"
    if(position<0) {
        # 1751 "/usr/local/include/neo-c.h"
        position+=self->len;
    }
    # 1754 "/usr/local/include/neo-c.h"
    it=self->head;
    # 1755 "/usr/local/include/neo-c.h"
    i=0;
    # 1762 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1760 "/usr/local/include/neo-c.h"
        if(position==i) {
            # 1758 "/usr/local/include/neo-c.h"
                        __result_obj__0 = (struct proc_alias_target* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 1758, 31);
            neo_current_frame = fr.prev;
            come_call_finalizer(proc_alias_target_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1758, 32);
            return __result_obj__0;
        }
        # 1760 "/usr/local/include/neo-c.h"
        it=it->next;
        # 1761 "/usr/local/include/neo-c.h"
        i++;
    }
    # 1764 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct proc_alias_target* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 1764, 33);
    neo_current_frame = fr.prev;
    come_call_finalizer(proc_alias_target_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1764, 34);
    return __result_obj__0;
}

void stackframe()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe"; neo_current_frame = &fr;
    struct neo_frame*  f  ;
    char* fun_name;
    memset(&f, 0, sizeof(f));
    memset(&fun_name, 0, sizeof(fun_name));
    # 177 "/usr/local/include/neo-c.h"
    f=neo_current_frame;
    # 184 "/usr/local/include/neo-c.h"
    while(f) {
        # 179 "/usr/local/include/neo-c.h"
        fun_name=f->fun_name;
        # 181 "/usr/local/include/neo-c.h"
        printf("%s\n",fun_name);
        # 182 "/usr/local/include/neo-c.h"
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
    # 196 "/usr/local/include/neo-c.h"
    if(come_is_alive(mem)&&mem) {
        # 191 "/usr/local/include/neo-c.h"
        it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
        # 193 "/usr/local/include/neo-c.h"
        printf("allocated at %s %d #%d. type is %s.\n",it->sname,it->sline,it->id,it->class_name);
    }
    # 196 "/usr/local/include/neo-c.h"
    f=neo_current_frame;
    # 203 "/usr/local/include/neo-c.h"
    while(f) {
        # 198 "/usr/local/include/neo-c.h"
        fun_name=f->fun_name;
        # 200 "/usr/local/include/neo-c.h"
        printf("%s\n",fun_name);
        # 201 "/usr/local/include/neo-c.h"
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
    # 207 "/usr/local/include/neo-c.h"
    puts(((char* )(__right_value6=charp_operator_add(((char*)(__right_value5=xsprintf("\%s \%s : ",((char* )(__right_value3=charp_to_string(sname))),((char* )(__right_value4=int_to_string(sline)))))),msg))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 207, 39));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 207, 40));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 207, 41));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 207, 42));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 207, 43));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 207, 44));
    # 208 "/usr/local/include/neo-c.h"
    stackframe();
    # 209 "/usr/local/include/neo-c.h"
    exit(4);
    # 211 "/usr/local/include/neo-c.h"
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
    # 244 "/usr/local/include/neo-c.h"
    # 246 "/usr/local/include/neo-c.h"
    it=gAllocMem;
    # 247 "/usr/local/include/neo-c.h"
    n=0;
    # 267 "/usr/local/include/neo-c.h"
    while(it) {
        # 249 "/usr/local/include/neo-c.h"
        n++;
        # 251 "/usr/local/include/neo-c.h"
        flag=(_Bool)0;
        # 252 "/usr/local/include/neo-c.h"
        printf("#%d ",n);
        # 256 "/usr/local/include/neo-c.h"
        if(it->class_name) {
            # 254 "/usr/local/include/neo-c.h"
            printf("%p (%s) %s %d: ",(char*)it+sizeof(struct sMemHeader )+sizeof(unsigned long  int )+sizeof(unsigned long  int ),it->class_name,it->sname,it->sline);
        }
        # 262 "/usr/local/include/neo-c.h"
        for(i=0        ;i<8;i++){
            # 261 "/usr/local/include/neo-c.h"
            if(it->fun_name[i]) {
                # 258 "/usr/local/include/neo-c.h"
                printf("%s, ",it->fun_name[i]);
                # 259 "/usr/local/include/neo-c.h"
                flag=(_Bool)1;
            }
        }
        # 265 "/usr/local/include/neo-c.h"
        if(flag) {
            # 263 "/usr/local/include/neo-c.h"
            puts("");
        }
        # 265 "/usr/local/include/neo-c.h"
        it=it->next;
    }
    # 268 "/usr/local/include/neo-c.h"
    if(n>0) {
        # 267 "/usr/local/include/neo-c.h"
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
    struct sMemHeader*  it_2  ;
    memset(&it, 0, sizeof(it));
    memset(&it_prev, 0, sizeof(it_prev));
    memset(&it_2, 0, sizeof(it_2));
    # 272 "/usr/local/include/neo-c.h"
    # 274 "/usr/local/include/neo-c.h"
    it=gFreeMem;
    # 275 "/usr/local/include/neo-c.h"
    it_prev=((void*)0);
    # 291 "/usr/local/include/neo-c.h"
    while(it) {
        # 287 "/usr/local/include/neo-c.h"
        if(size<=it->alloc_size) {
            # 284 "/usr/local/include/neo-c.h"
            if(it_prev==((void*)0)) {
                # 279 "/usr/local/include/neo-c.h"
                gFreeMem=((void*)0);
            }
            else {
                # 282 "/usr/local/include/neo-c.h"
                it_prev->free_next=it->free_next;
            }
            # 284 "/usr/local/include/neo-c.h"
            memset(it,0,size);
            # 285 "/usr/local/include/neo-c.h"
                        __result_obj__0 = it;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 287 "/usr/local/include/neo-c.h"
        it_prev=it;
        # 288 "/usr/local/include/neo-c.h"
        it=it->free_next;
    }
    # 291 "/usr/local/include/neo-c.h"
    it_2=(struct sMemHeader* )calloc(1,size);
    # 292 "/usr/local/include/neo-c.h"
    it_2->alloc_size=size;
    # 293 "/usr/local/include/neo-c.h"
        __result_obj__0 = it_2;
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
    # 298 "/usr/local/include/neo-c.h"
    # 340 "/usr/local/include/neo-c.h"
    if(mem) {
        # 301 "/usr/local/include/neo-c.h"
        it=(struct sMemHeader* )((char*)mem-sizeof(struct sMemHeader ));
        # 307 "/usr/local/include/neo-c.h"
        if(it->allocated!=177783) {
            # 304 "/usr/local/include/neo-c.h"
                        neo_current_frame = fr.prev;
            return;
        }
        # 307 "/usr/local/include/neo-c.h"
        it->allocated=0;
        # 309 "/usr/local/include/neo-c.h"
        prev_it=it->prev;
        # 310 "/usr/local/include/neo-c.h"
        next_it=it->next;
        # 328 "/usr/local/include/neo-c.h"
        if(gAllocMem==it) {
            # 313 "/usr/local/include/neo-c.h"
            gAllocMem=next_it;
            # 318 "/usr/local/include/neo-c.h"
            if(gAllocMem) {
                # 316 "/usr/local/include/neo-c.h"
                gAllocMem->prev=((void*)0);
            }
        }
        else {
            # 323 "/usr/local/include/neo-c.h"
            if(prev_it) {
                # 321 "/usr/local/include/neo-c.h"
                prev_it->next=next_it;
            }
            # 326 "/usr/local/include/neo-c.h"
            if(next_it) {
                # 324 "/usr/local/include/neo-c.h"
                next_it->prev=prev_it;
            }
        }
        # 328 "/usr/local/include/neo-c.h"
        size=it->size;
        # 330 "/usr/local/include/neo-c.h"
        it->free_next=gFreeMem;
        # 331 "/usr/local/include/neo-c.h"
        gFreeMem=it;
        # 333 "/usr/local/include/neo-c.h"
        it->alive=0;
        # 338 "/usr/local/include/neo-c.h"
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
    # 344 "/usr/local/include/neo-c.h"
    # 346 "/usr/local/include/neo-c.h"
    size2=size+sizeof(struct sMemHeader );
    # 350 "/usr/local/include/neo-c.h"
    size2=(size2+7&~0x7);
    # 352 "/usr/local/include/neo-c.h"
    result=alloc_from_pages(size2);
    # 354 "/usr/local/include/neo-c.h"
    it=result;
    # 356 "/usr/local/include/neo-c.h"
    it->allocated=177783;
    # 358 "/usr/local/include/neo-c.h"
    it->compiletime_size=compiletime_size;
    # 359 "/usr/local/include/neo-c.h"
    it->size=size2;
    # 360 "/usr/local/include/neo-c.h"
    it->free_next=((void*)0);
    # 361 "/usr/local/include/neo-c.h"
    it->alive=1;
    # 363 "/usr/local/include/neo-c.h"
    n=0;
    # 364 "/usr/local/include/neo-c.h"
    f=neo_current_frame;
    # 374 "/usr/local/include/neo-c.h"
    while(f&&n<8) {
        # 366 "/usr/local/include/neo-c.h"
        fun_name=f->fun_name;
        # 368 "/usr/local/include/neo-c.h"
        it->fun_name[n]=fun_name;
        # 370 "/usr/local/include/neo-c.h"
        n++;
        # 371 "/usr/local/include/neo-c.h"
        f=f->prev;
    }
    # 374 "/usr/local/include/neo-c.h"
    it->next=gAllocMem;
    # 375 "/usr/local/include/neo-c.h"
    it->prev=((void*)0);
    # 377 "/usr/local/include/neo-c.h"
    it->class_name=class_name;
    # 378 "/usr/local/include/neo-c.h"
    it->sname=sname;
    # 379 "/usr/local/include/neo-c.h"
    it->sline=sline;
    # 380 "/usr/local/include/neo-c.h"
    it->id=id;
    # 386 "/usr/local/include/neo-c.h"
    if(gAllocMem) {
        # 383 "/usr/local/include/neo-c.h"
        gAllocMem->prev=it;
    }
    # 386 "/usr/local/include/neo-c.h"
    gAllocMem=it;
    # 388 "/usr/local/include/neo-c.h"
    gNumAlloc++;
    # 390 "/usr/local/include/neo-c.h"
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
    # 395 "/usr/local/include/neo-c.h"
    # 403 "/usr/local/include/neo-c.h"
    if(!come_is_alive(mem)) {
        # 398 "/usr/local/include/neo-c.h"
        puts("invalid heap object");
        # 399 "/usr/local/include/neo-c.h"
        stackframe2(mem);
        # 400 "/usr/local/include/neo-c.h"
        exit(3);
    }
    # 403 "/usr/local/include/neo-c.h"
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
    # 411 "/usr/local/include/neo-c.h"
    if(it->allocated!=177783) {
        # 406 "/usr/local/include/neo-c.h"
        printf("invalid heap object(%p)(1)\n",it);
        # 407 "/usr/local/include/neo-c.h"
        stackframe2(mem);
        # 408 "/usr/local/include/neo-c.h"
        exit(2);
    }
    # 411 "/usr/local/include/neo-c.h"
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
    # 416 "/usr/local/include/neo-c.h"
    # 424 "/usr/local/include/neo-c.h"
    if(!come_is_alive(mem)) {
        # 419 "/usr/local/include/neo-c.h"
        puts("invalid heap object");
        # 420 "/usr/local/include/neo-c.h"
        stackframe2(mem);
        # 421 "/usr/local/include/neo-c.h"
        exit(3);
    }
    # 424 "/usr/local/include/neo-c.h"
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
    # 431 "/usr/local/include/neo-c.h"
    if(it->allocated!=177783) {
        # 427 "/usr/local/include/neo-c.h"
        printf("invalid heap object(%p)(1)\n",it);
        # 428 "/usr/local/include/neo-c.h"
        stackframe2(mem);
        # 429 "/usr/local/include/neo-c.h"
        exit(2);
    }
    # 431 "/usr/local/include/neo-c.h"
    size=it->compiletime_size;
    # 433 "/usr/local/include/neo-c.h"
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
    # 443 "/usr/local/include/neo-c.h"
    # 445 "/usr/local/include/neo-c.h"
    mem=come_alloc_mem_from_heap_pool(count*size,sizeof(unsigned long  int )+sizeof(unsigned long  int )+count*size,sname,sline,id,class_name);
    # 447 "/usr/local/include/neo-c.h"
    ref_count=(unsigned long  int* )mem;
    # 449 "/usr/local/include/neo-c.h"
    *ref_count=0;
    # 451 "/usr/local/include/neo-c.h"
    size2=(unsigned long  int* )(mem+sizeof(unsigned long  int ));
    # 453 "/usr/local/include/neo-c.h"
    *size2=size*count+sizeof(unsigned long  int )+sizeof(unsigned long  int );
    # 455 "/usr/local/include/neo-c.h"
        __result_obj__0 = mem+sizeof(unsigned long  int )+sizeof(unsigned long  int );
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool come_is_alive(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_is_alive"; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    memset(&it, 0, sizeof(it));
    # 463 "/usr/local/include/neo-c.h"
    if(mem==((void*)0)) {
        # 461 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 463 "/usr/local/include/neo-c.h"
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
    # 465 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return it->alive;
    neo_current_frame = fr.prev;
}

void come_free(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_free"; neo_current_frame = &fr;
    unsigned long  int*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    # 470 "/usr/local/include/neo-c.h"
    # 476 "/usr/local/include/neo-c.h"
    if(mem==((void*)0)) {
        # 473 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 482 "/usr/local/include/neo-c.h"
    if(!come_is_alive(mem)) {
        # 477 "/usr/local/include/neo-c.h"
        puts("invalid heap object");
        # 478 "/usr/local/include/neo-c.h"
        stackframe2(mem);
        # 479 "/usr/local/include/neo-c.h"
        exit(3);
    }
    # 482 "/usr/local/include/neo-c.h"
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    # 484 "/usr/local/include/neo-c.h"
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
    # 489 "/usr/local/include/neo-c.h"
    # 495 "/usr/local/include/neo-c.h"
    if(block==((void*)0)) {
        # 492 "/usr/local/include/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 501 "/usr/local/include/neo-c.h"
    if(!come_is_alive(block)) {
        # 496 "/usr/local/include/neo-c.h"
        puts(((char*)(__right_value3=xsprintf("invalid heap object. \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 496, 45));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 496, 46));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 496, 47));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 496, 48));
        # 497 "/usr/local/include/neo-c.h"
        stackframe2(block);
        # 498 "/usr/local/include/neo-c.h"
        exit(3);
    }
    # 501 "/usr/local/include/neo-c.h"
    mem=(char*)block-sizeof(unsigned long  int )-sizeof(unsigned long  int );
    # 503 "/usr/local/include/neo-c.h"
    size_p=(unsigned long  int* )(mem+sizeof(unsigned long  int ));
    # 505 "/usr/local/include/neo-c.h"
    size=*size_p-sizeof(unsigned long  int )-sizeof(unsigned long  int );
    # 507 "/usr/local/include/neo-c.h"
    result=come_calloc(1,size,sname,sline,id,class_name);
    # 509 "/usr/local/include/neo-c.h"
    memcpy(result,block,size);
    # 511 "/usr/local/include/neo-c.h"
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
    # 516 "/usr/local/include/neo-c.h"
    # 521 "/usr/local/include/neo-c.h"
    if(mem==((void*)0)) {
        # 519 "/usr/local/include/neo-c.h"
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 527 "/usr/local/include/neo-c.h"
    if(!come_is_alive(mem)) {
        # 522 "/usr/local/include/neo-c.h"
        puts(((char*)(__right_value3=xsprintf("invalid heap object \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 522, 49));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 522, 50));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 522, 51));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 522, 52));
        # 523 "/usr/local/include/neo-c.h"
        stackframe2(mem);
        # 524 "/usr/local/include/neo-c.h"
        exit(3);
    }
    # 527 "/usr/local/include/neo-c.h"
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    # 529 "/usr/local/include/neo-c.h"
    (*ref_count)++;
    # 531 "/usr/local/include/neo-c.h"
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
    # 536 "/usr/local/include/neo-c.h"
    # 541 "/usr/local/include/neo-c.h"
    if(mem==((void*)0)) {
        # 539 "/usr/local/include/neo-c.h"
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 547 "/usr/local/include/neo-c.h"
    if(!come_is_alive(mem)) {
        # 542 "/usr/local/include/neo-c.h"
        puts("invalid heap object");
        # 543 "/usr/local/include/neo-c.h"
        stackframe();
        # 544 "/usr/local/include/neo-c.h"
        exit(3);
    }
    # 547 "/usr/local/include/neo-c.h"
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    # 549 "/usr/local/include/neo-c.h"
    printf("ref_count %ld\n",*ref_count);
    # 551 "/usr/local/include/neo-c.h"
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int come_get_ref_count(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_get_ref_count"; neo_current_frame = &fr;
    unsigned long  int*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    # 556 "/usr/local/include/neo-c.h"
    # 561 "/usr/local/include/neo-c.h"
    if(mem==((void*)0)) {
        # 559 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 567 "/usr/local/include/neo-c.h"
    if(!come_is_alive(mem)) {
        # 562 "/usr/local/include/neo-c.h"
        puts("invalid heap object");
        # 563 "/usr/local/include/neo-c.h"
        stackframe();
        # 564 "/usr/local/include/neo-c.h"
        exit(3);
    }
    # 567 "/usr/local/include/neo-c.h"
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    # 569 "/usr/local/include/neo-c.h"
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
    # 574 "/usr/local/include/neo-c.h"
    # 581 "/usr/local/include/neo-c.h"
    if(result_obj) {
        # 580 "/usr/local/include/neo-c.h"
        if(mem==result_obj) {
            # 578 "/usr/local/include/neo-c.h"
                        __result_obj__0 = mem;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    # 584 "/usr/local/include/neo-c.h"
    if(mem==((void*)0)) {
        # 582 "/usr/local/include/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 590 "/usr/local/include/neo-c.h"
    if(!come_is_alive(mem)) {
        # 585 "/usr/local/include/neo-c.h"
        puts(((char*)(__right_value3=xsprintf("invalid heap object \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 585, 53));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 585, 54));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 585, 55));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 585, 56));
        # 586 "/usr/local/include/neo-c.h"
        stackframe2(mem);
        # 587 "/usr/local/include/neo-c.h"
        exit(3);
    }
    # 590 "/usr/local/include/neo-c.h"
    ref_count=(long*)((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    # 596 "/usr/local/include/neo-c.h"
    if(!no_decrement) {
        # 593 "/usr/local/include/neo-c.h"
        (*ref_count)--;
    }
    # 596 "/usr/local/include/neo-c.h"
    count=*ref_count;
    # 608 "/usr/local/include/neo-c.h"
    if(!no_free&&count<=0) {
        # 604 "/usr/local/include/neo-c.h"
        if(protocol_obj&&protocol_fun) {
            # 599 "/usr/local/include/neo-c.h"
            finalizer=(void (*)(void*))protocol_fun;
            # 600 "/usr/local/include/neo-c.h"
            finalizer(protocol_obj);
            # 602 "/usr/local/include/neo-c.h"
            come_free(protocol_obj);
        }
        # 604 "/usr/local/include/neo-c.h"
        come_free(mem);
        # 605 "/usr/local/include/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 608 "/usr/local/include/neo-c.h"
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj, char* sname, int sline, int id)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_call_finalizer"; neo_current_frame = &fr;
    void (*finalizer)(void*);
    void (*finalizer_3)(void*);
    void (*finalizer_4)(void*);
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    long* ref_count;
    long count;
    void (*finalizer_5)(void*);
    void (*finalizer_6)(void*);
    void (*finalizer_7)(void*);
    memset(&finalizer, 0, sizeof(finalizer));
    memset(&finalizer_3, 0, sizeof(finalizer_3));
    memset(&finalizer_4, 0, sizeof(finalizer_4));
    memset(&ref_count, 0, sizeof(ref_count));
    memset(&count, 0, sizeof(count));
    memset(&finalizer_5, 0, sizeof(finalizer_5));
    memset(&finalizer_6, 0, sizeof(finalizer_6));
    memset(&finalizer_7, 0, sizeof(finalizer_7));
    # 613 "/usr/local/include/neo-c.h"
    # 620 "/usr/local/include/neo-c.h"
    if(result_obj) {
        # 619 "/usr/local/include/neo-c.h"
        if(mem==result_obj) {
            # 617 "/usr/local/include/neo-c.h"
                        neo_current_frame = fr.prev;
            return;
        }
    }
    # 624 "/usr/local/include/neo-c.h"
    if(mem==((void*)0)) {
        # 621 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 678 "/usr/local/include/neo-c.h"
    if(call_finalizer_only) {
        # 639 "/usr/local/include/neo-c.h"
        if(fun) {
            # 630 "/usr/local/include/neo-c.h"
            if(protocol_obj&&protocol_fun) {
                # 627 "/usr/local/include/neo-c.h"
                finalizer=(void (*)(void*))protocol_fun;
                # 628 "/usr/local/include/neo-c.h"
                finalizer(protocol_obj);
            }
            # 630 "/usr/local/include/neo-c.h"
            finalizer_3=(void (*)(void*))fun;
            # 631 "/usr/local/include/neo-c.h"
            finalizer_3(mem);
        }
        else {
            # 638 "/usr/local/include/neo-c.h"
            if(protocol_obj&&protocol_fun) {
                # 635 "/usr/local/include/neo-c.h"
                finalizer_4=(void (*)(void*))protocol_fun;
                # 636 "/usr/local/include/neo-c.h"
                finalizer_4(protocol_obj);
            }
        }
    }
    else {
        # 647 "/usr/local/include/neo-c.h"
        if(!come_is_alive(mem)) {
            # 642 "/usr/local/include/neo-c.h"
            puts(((char*)(__right_value3=xsprintf("invalid heap object. \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 642, 57));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 642, 58));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 642, 59));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 642, 60));
            # 643 "/usr/local/include/neo-c.h"
            stackframe2(mem);
            # 644 "/usr/local/include/neo-c.h"
            exit(3);
        }
        # 647 "/usr/local/include/neo-c.h"
        ref_count=(long*)((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
        # 653 "/usr/local/include/neo-c.h"
        if(!no_decrement) {
            # 650 "/usr/local/include/neo-c.h"
            (*ref_count)--;
        }
        # 653 "/usr/local/include/neo-c.h"
        count=*ref_count;
        # 677 "/usr/local/include/neo-c.h"
        if(!no_free&&count<=0) {
            # 676 "/usr/local/include/neo-c.h"
            if(mem) {
                # 674 "/usr/local/include/neo-c.h"
                if(fun) {
                    # 662 "/usr/local/include/neo-c.h"
                    if(protocol_obj&&protocol_fun) {
                        # 658 "/usr/local/include/neo-c.h"
                        finalizer_5=(void (*)(void*))protocol_fun;
                        # 659 "/usr/local/include/neo-c.h"
                        finalizer_5(protocol_obj);
                        # 660 "/usr/local/include/neo-c.h"
                        come_free(protocol_obj);
                    }
                    # 666 "/usr/local/include/neo-c.h"
                    if(fun) {
                        # 663 "/usr/local/include/neo-c.h"
                        finalizer_6=(void (*)(void*))fun;
                        # 664 "/usr/local/include/neo-c.h"
                        finalizer_6(mem);
                    }
                }
                else {
                    # 673 "/usr/local/include/neo-c.h"
                    if(protocol_obj&&protocol_fun) {
                        # 669 "/usr/local/include/neo-c.h"
                        finalizer_7=(void (*)(void*))protocol_fun;
                        # 670 "/usr/local/include/neo-c.h"
                        finalizer_7(protocol_obj);
                        # 671 "/usr/local/include/neo-c.h"
                        come_free(protocol_obj);
                    }
                }
                # 674 "/usr/local/include/neo-c.h"
                come_free(mem);
            }
        }
    }
    neo_current_frame = fr.prev;
}

void xassert(const char* msg, _Bool test)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xassert"; neo_current_frame = &fr;
    # 682 "/usr/local/include/neo-c.h"
    printf("%s...",msg);
    # 688 "/usr/local/include/neo-c.h"
    if(!test) {
        # 684 "/usr/local/include/neo-c.h"
        puts("false");
        # 685 "/usr/local/include/neo-c.h"
        stackframe();
        # 686 "/usr/local/include/neo-c.h"
        exit(2);
    }
    # 688 "/usr/local/include/neo-c.h"
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
    # 697 "/usr/local/include/neo-c.h"
    if(mem) {
        # 694 "/usr/local/include/neo-c.h"
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 697 "/usr/local/include/neo-c.h"
    puts(((char*)(__right_value3=xsprintf("null pointer exception \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 697, 61));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 697, 62));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 697, 63));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 697, 64));
    # 698 "/usr/local/include/neo-c.h"
    stackframe();
    # 699 "/usr/local/include/neo-c.h"
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
    # 715 "/usr/local/include/neo-c.h"
    if(mem) {
        # 713 "/usr/local/include/neo-c.h"
        if(come_is_alive(mem)) {
            # 706 "/usr/local/include/neo-c.h"
                        __result_obj__0 = mem;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else {
            # 709 "/usr/local/include/neo-c.h"
            puts(((char*)(__right_value3=xsprintf("heap pointer exception \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 709, 65));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 709, 66));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 709, 67));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 709, 68));
            # 710 "/usr/local/include/neo-c.h"
            stackframe();
            # 711 "/usr/local/include/neo-c.h"
            exit(1);
        }
    }
    # 715 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    puts(((char*)(__right_value3=xsprintf("null pointer exception \%s \%s \%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 715, 69));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 715, 70));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 715, 71));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 715, 72));
    # 716 "/usr/local/include/neo-c.h"
    stackframe();
    # 717 "/usr/local/include/neo-c.h"
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
    # 725 "/usr/local/include/neo-c.h"
    if(str==((void*)0)) {
        # 723 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 723, 73);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 723, 74));
        return __result_obj__0;
    }
    # 725 "/usr/local/include/neo-c.h"
    len=strlen(str)+1;
    # 727 "/usr/local/include/neo-c.h"
    result=come_calloc(1,sizeof(char)*(len),sname,sline,0,"string");
    # 730 "/usr/local/include/neo-c.h"
    strncpy(result,str,len);
    # 732 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 732, 75);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 732, 76));
    return __result_obj__0;
}

struct buffer*  buffer_initialize(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj5;
    struct buffer*  __result_obj__0  ;
    # 4842 "/usr/local/include/neo-c.h"
    self->size=128;
    # 4843 "/usr/local/include/neo-c.h"
    __dec_obj5=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 4843, 77, "char*"), "/usr/local/include/neo-c.h", 4843, 79);
    __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4843, 78);
    # 4844 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[0]=0;
    # 4845 "/usr/local/include/neo-c.h"
    self->len=0;
    # 4847 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "/usr/local/include/neo-c.h", 4847, 80);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4847, 81);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4847, 82);
    return __result_obj__0;
}

struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  int  size  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize_with_value"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj6;
    struct buffer*  __result_obj__0  ;
    # 4852 "/usr/local/include/neo-c.h"
    self->size=128;
    # 4853 "/usr/local/include/neo-c.h"
    __dec_obj6=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 4853, 83, "char*"), "/usr/local/include/neo-c.h", 4853, 85);
    __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4853, 84);
    # 4854 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[0]=0;
    # 4855 "/usr/local/include/neo-c.h"
    self->len=0;
    # 4857 "/usr/local/include/neo-c.h"
    buffer_append(self,mem,size);
    # 4859 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "/usr/local/include/neo-c.h", 4859, 86);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4859, 87);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4859, 88);
    return __result_obj__0;
}

void buffer_finalize(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_finalize"; neo_current_frame = &fr;
    # 4865 "/usr/local/include/neo-c.h"
    if(self&&self->buf) {
        # 4864 "/usr/local/include/neo-c.h"
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 4864, 89));
    }
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_clone(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_clone"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct buffer*  result  ;
    char* __dec_obj7;
    memset(&result, 0, sizeof(result));
    # 4873 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 4870 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 4870, 90);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4870, 91);
        return __result_obj__0;
    }
    # 4873 "/usr/local/include/neo-c.h"
    result=(struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 4873, 92, "struct buffer* "), "/usr/local/include/neo-c.h", 4873, 93);
    # 4875 "/usr/local/include/neo-c.h"
    result->size=self->size;
    # 4876 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    __dec_obj7=result->buf,
    result->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 4876, 94, "char*"), "/usr/local/include/neo-c.h", 4876, 96);
    __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4876, 95);
    # 4877 "/usr/local/include/neo-c.h"
    result->len=self->len;
    # 4878 "/usr/local/include/neo-c.h"
    memcpy(result->buf,self->buf,self->len);
    # 4880 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 4880, 97);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4880, 98);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4880, 99);
    return __result_obj__0;
}

_Bool buffer_equals(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_equals"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    _Bool __result_obj__0;
    # 4892 "/usr/local/include/neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 4886 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
        # 4889 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 4892 "/usr/local/include/neo-c.h"
        __result_obj__0 = string_equals(((char* )(__right_value0=buffer_to_string(left))),((char* )(__right_value1=buffer_to_string(right))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 4892, 100));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 4892, 101));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_length(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_length"; neo_current_frame = &fr;
    # 4900 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 4898 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 4900 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self->len;
    neo_current_frame = fr.prev;
}

void buffer_reset(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_reset"; neo_current_frame = &fr;
    # 4908 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 4906 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 4908 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[0]=0;
    # 4909 "/usr/local/include/neo-c.h"
    self->len=0;
    neo_current_frame = fr.prev;
}

void buffer_trim(struct buffer*  self  , int len)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_trim"; neo_current_frame = &fr;
    # 4917 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 4915 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 4917 "/usr/local/include/neo-c.h"
    self->len-=len;
    # 4925 "/usr/local/include/neo-c.h"
    if(self->len>=0) {
        # 4919 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[self->len]=0;
    }
    else {
        # 4922 "/usr/local/include/neo-c.h"
        self->len=0;
        # 4923 "/usr/local/include/neo-c.h"
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
    char* __dec_obj8;
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 4932 "/usr/local/include/neo-c.h"
    if(self==((void*)0)||mem==((void*)0)) {
        # 4930 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 4944 "/usr/local/include/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 4933 "/usr/local/include/neo-c.h"
        old_len=self->len;
        # 4934 "/usr/local/include/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 4934, 102, "char*"), "/usr/local/include/neo-c.h", 4934, 103);
        # 4935 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4937 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 4938 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 4938, 104, "char*"), "/usr/local/include/neo-c.h", 4938, 106);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4938, 105);
        # 4939 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 4940 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 4941 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 4944, 107));
    }
    # 4944 "/usr/local/include/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 4945 "/usr/local/include/neo-c.h"
    self->len+=size;
    # 4946 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 4948 "/usr/local/include/neo-c.h"
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
    char* __dec_obj9;
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 4956 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 4954 "/usr/local/include/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 4968 "/usr/local/include/neo-c.h"
    if(self->len+1+1+1>=self->size) {
        # 4957 "/usr/local/include/neo-c.h"
        old_len=self->len;
        # 4958 "/usr/local/include/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 4958, 108, "char*"), "/usr/local/include/neo-c.h", 4958, 109);
        # 4959 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4961 "/usr/local/include/neo-c.h"
        new_size=(self->size+10+1)*2;
        # 4962 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 4962, 110, "char*"), "/usr/local/include/neo-c.h", 4962, 112);
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4962, 111);
        # 4963 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 4964 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 4965 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 4968, 113));
    }
    # 4968 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[self->len]=c;
    # 4969 "/usr/local/include/neo-c.h"
    self->len++;
    # 4971 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 4973 "/usr/local/include/neo-c.h"
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
    char* __dec_obj10;
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 4982 "/usr/local/include/neo-c.h"
    if(self==((void*)0)||mem==((void*)0)) {
        # 4979 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 4982 "/usr/local/include/neo-c.h"
    size=strlen(mem);
    # 4994 "/usr/local/include/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 4984 "/usr/local/include/neo-c.h"
        old_len=self->len;
        # 4985 "/usr/local/include/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 4985, 114, "char*"), "/usr/local/include/neo-c.h", 4985, 115);
        # 4986 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4987 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 4988 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 4988, 116, "char*"), "/usr/local/include/neo-c.h", 4988, 118);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4988, 117);
        # 4989 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 4990 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 4991 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 4994, 119));
    }
    # 4994 "/usr/local/include/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 4995 "/usr/local/include/neo-c.h"
    self->len+=size;
    # 4996 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 4998 "/usr/local/include/neo-c.h"
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
    char* __dec_obj11;
    memset(&result, 0, sizeof(result));
    memset(&len, 0, sizeof(len));
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 5046 "/usr/local/include/neo-c.h"
    if(self==((void*)0)||msg==((void*)0)) {
        # 5043 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5046 "/usr/local/include/neo-c.h"
    # 5047 "/usr/local/include/neo-c.h"
    __builtin_va_start(args,msg);
    # 5048 "/usr/local/include/neo-c.h"
    # 5049 "/usr/local/include/neo-c.h"
    len=vasprintf(&result,msg,args);
    # 5050 "/usr/local/include/neo-c.h"
    __builtin_va_end(args);
    # 5056 "/usr/local/include/neo-c.h"
    if(len<0) {
        # 5053 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5056 "/usr/local/include/neo-c.h"
    mem=(char* )come_increment_ref_count(__builtin_string(result,"/usr/local/include/neo-c.h",5056), "/usr/local/include/neo-c.h", 5056, 120);
    # 5058 "/usr/local/include/neo-c.h"
    size=strlen(mem);
    # 5070 "/usr/local/include/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 5060 "/usr/local/include/neo-c.h"
        old_len=self->len;
        # 5061 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 5061, 121, "char*"), "/usr/local/include/neo-c.h", 5061, 122);
        # 5062 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5063 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5064 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 5064, 123, "char*"), "/usr/local/include/neo-c.h", 5064, 125);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 5064, 124);
        # 5065 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5066 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5067 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 5070, 126));
    }
    # 5070 "/usr/local/include/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5071 "/usr/local/include/neo-c.h"
    self->len+=size;
    # 5072 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5074 "/usr/local/include/neo-c.h"
    free(result);
    # 5076 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 5076, 127));
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
    char* __dec_obj12;
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 5085 "/usr/local/include/neo-c.h"
    if(self==((void*)0)||mem==((void*)0)) {
        # 5083 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5085 "/usr/local/include/neo-c.h"
    size=strlen(mem)+1;
    # 5097 "/usr/local/include/neo-c.h"
    if(self->len+size+1+1+1>=self->size) {
        # 5087 "/usr/local/include/neo-c.h"
        old_len=self->len;
        # 5088 "/usr/local/include/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 5088, 128, "char*"), "/usr/local/include/neo-c.h", 5088, 129);
        # 5089 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5090 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5091 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 5091, 130, "char*"), "/usr/local/include/neo-c.h", 5091, 132);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 5091, 131);
        # 5092 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5093 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5094 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 5097, 133));
    }
    # 5097 "/usr/local/include/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5098 "/usr/local/include/neo-c.h"
    self->len+=size;
    # 5099 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5100 "/usr/local/include/neo-c.h"
    self->len++;
    # 5102 "/usr/local/include/neo-c.h"
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
    char* __dec_obj13;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 5110 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5108 "/usr/local/include/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5110 "/usr/local/include/neo-c.h"
    mem=&value;
    # 5111 "/usr/local/include/neo-c.h"
    size=sizeof(int);
    # 5124 "/usr/local/include/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 5114 "/usr/local/include/neo-c.h"
        old_len=self->len;
        # 5115 "/usr/local/include/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 5115, 134, "char*"), "/usr/local/include/neo-c.h", 5115, 135);
        # 5116 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5117 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5118 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj13=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 5118, 136, "char*"), "/usr/local/include/neo-c.h", 5118, 138);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 5118, 137);
        # 5119 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5120 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5121 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 5124, 139));
    }
    # 5124 "/usr/local/include/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5125 "/usr/local/include/neo-c.h"
    self->len+=size;
    # 5126 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5128 "/usr/local/include/neo-c.h"
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
    char* __dec_obj14;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 5136 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5134 "/usr/local/include/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5136 "/usr/local/include/neo-c.h"
    mem=&value;
    # 5137 "/usr/local/include/neo-c.h"
    size=sizeof(long);
    # 5150 "/usr/local/include/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 5140 "/usr/local/include/neo-c.h"
        old_len=self->len;
        # 5141 "/usr/local/include/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 5141, 140, "char*"), "/usr/local/include/neo-c.h", 5141, 141);
        # 5142 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5143 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5144 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj14=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 5144, 142, "char*"), "/usr/local/include/neo-c.h", 5144, 144);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 5144, 143);
        # 5145 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5146 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5147 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 5150, 145));
    }
    # 5150 "/usr/local/include/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5151 "/usr/local/include/neo-c.h"
    self->len+=size;
    # 5152 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5154 "/usr/local/include/neo-c.h"
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
    char* __dec_obj15;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    # 5163 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5160 "/usr/local/include/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5163 "/usr/local/include/neo-c.h"
    mem=&value;
    # 5164 "/usr/local/include/neo-c.h"
    size=sizeof(short);
    # 5177 "/usr/local/include/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 5167 "/usr/local/include/neo-c.h"
        old_len=self->len;
        # 5168 "/usr/local/include/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 5168, 146, "char*"), "/usr/local/include/neo-c.h", 5168, 147);
        # 5169 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5170 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5171 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj15=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 5171, 148, "char*"), "/usr/local/include/neo-c.h", 5171, 150);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 5171, 149);
        # 5172 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5173 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5174 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 5177, 151));
    }
    # 5177 "/usr/local/include/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5178 "/usr/local/include/neo-c.h"
    self->len+=size;
    # 5179 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5181 "/usr/local/include/neo-c.h"
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
    char* __dec_obj16;
    int i;
    memset(&len, 0, sizeof(len));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    memset(&i, 0, sizeof(i));
    # 5190 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5187 "/usr/local/include/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5190 "/usr/local/include/neo-c.h"
    len=self->len;
    # 5191 "/usr/local/include/neo-c.h"
    len=(len+3)&~3;
    # 5204 "/usr/local/include/neo-c.h"
    if(len>=self->size) {
        # 5194 "/usr/local/include/neo-c.h"
        old_len=self->len;
        # 5195 "/usr/local/include/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 5195, 152, "char*"), "/usr/local/include/neo-c.h", 5195, 153);
        # 5196 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5197 "/usr/local/include/neo-c.h"
        new_size=(self->size+1+1)*2;
        # 5198 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj16=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 5198, 154, "char*"), "/usr/local/include/neo-c.h", 5198, 156);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 5198, 155);
        # 5199 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5200 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5201 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 5204, 157));
    }
    # 5208 "/usr/local/include/neo-c.h"
    for(i=self->len    ;i<len;i++){
        # 5205 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[i]=0;
    }
    # 5208 "/usr/local/include/neo-c.h"
    self->len=len;
    # 5210 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_compare(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_compare"; neo_current_frame = &fr;
    # 5225 "/usr/local/include/neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 5216 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
        # 5219 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
        # 5222 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 5225 "/usr/local/include/neo-c.h"
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
    # 5230 "/usr/local/include/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5230, 158, "struct buffer* "), "/usr/local/include/neo-c.h", 5230, 159)), "/usr/local/include/neo-c.h", 5230, 160);
    # 5236 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5233 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5233, 161);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5233, 162);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5233, 163);
        return __result_obj__0;
    }
    # 5236 "/usr/local/include/neo-c.h"
    buffer_append_str(result,self);
    # 5238 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5238, 164);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5238, 165);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5238, 166);
    return __result_obj__0;
}

char*  buffer_to_string(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 5247 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5244 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5244))), "/usr/local/include/neo-c.h", 5244, 167);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5244, 168));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5244, 169));
        return __result_obj__0;
    }
    # 5247 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self->buf,"/usr/local/include/neo-c.h",5247))), "/usr/local/include/neo-c.h", 5247, 170);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5247, 171));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5247, 172));
    return __result_obj__0;
}

unsigned char* buffer_head_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_head_pointer"; neo_current_frame = &fr;
    unsigned char* __result_obj__0;
    # 5255 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5253 "/usr/local/include/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5255 "/usr/local/include/neo-c.h"
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
    # 5260 "/usr/local/include/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5260, 173, "struct buffer* "), "/usr/local/include/neo-c.h", 5260, 174)), "/usr/local/include/neo-c.h", 5260, 175);
    # 5264 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5262 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5262, 176);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5262, 177);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5262, 178);
        return __result_obj__0;
    }
    # 5264 "/usr/local/include/neo-c.h"
    buffer_append(result,self,sizeof(char)*len);
    # 5265 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5265, 179);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5265, 180);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5265, 181);
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
    # 5270 "/usr/local/include/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5270, 182, "struct buffer* "), "/usr/local/include/neo-c.h", 5270, 183)), "/usr/local/include/neo-c.h", 5270, 184);
    # 5274 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5272 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5272, 185);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5272, 186);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5272, 187);
        return __result_obj__0;
    }
    # 5277 "/usr/local/include/neo-c.h"
    for(i=0    ;i<len;i++){
        # 5275 "/usr/local/include/neo-c.h"
        buffer_append(result,self[i],strlen(self[i]));
    }
    # 5277 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5277, 188);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5277, 189);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5277, 190);
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
    # 5282 "/usr/local/include/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5282, 191, "struct buffer* "), "/usr/local/include/neo-c.h", 5282, 192)), "/usr/local/include/neo-c.h", 5282, 193);
    # 5286 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5284 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5284, 194);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5284, 195);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5284, 196);
        return __result_obj__0;
    }
    # 5286 "/usr/local/include/neo-c.h"
    buffer_append(result,(char*)self,sizeof(short)*len);
    # 5287 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5287, 197);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5287, 198);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5287, 199);
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
    # 5292 "/usr/local/include/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5292, 200, "struct buffer* "), "/usr/local/include/neo-c.h", 5292, 201)), "/usr/local/include/neo-c.h", 5292, 202);
    # 5296 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5294 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5294, 203);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5294, 204);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5294, 205);
        return __result_obj__0;
    }
    # 5296 "/usr/local/include/neo-c.h"
    buffer_append(result,(char*)self,sizeof(int)*len);
    # 5297 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5297, 206);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5297, 207);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5297, 208);
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
    # 5302 "/usr/local/include/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5302, 209, "struct buffer* "), "/usr/local/include/neo-c.h", 5302, 210)), "/usr/local/include/neo-c.h", 5302, 211);
    # 5306 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5304 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5304, 212);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5304, 213);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5304, 214);
        return __result_obj__0;
    }
    # 5306 "/usr/local/include/neo-c.h"
    buffer_append(result,(char*)self,sizeof(long)*len);
    # 5307 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5307, 215);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5307, 216);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5307, 217);
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
    # 5312 "/usr/local/include/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5312, 218, "struct buffer* "), "/usr/local/include/neo-c.h", 5312, 219)), "/usr/local/include/neo-c.h", 5312, 220);
    # 5316 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5314 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5314, 221);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5314, 222);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5314, 223);
        return __result_obj__0;
    }
    # 5316 "/usr/local/include/neo-c.h"
    buffer_append(result,(char*)self,sizeof(float)*len);
    # 5317 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5317, 224);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5317, 225);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5317, 226);
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
    # 5322 "/usr/local/include/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5322, 227, "struct buffer* "), "/usr/local/include/neo-c.h", 5322, 228)), "/usr/local/include/neo-c.h", 5322, 229);
    # 5326 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5324 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5324, 230);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5324, 231);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5324, 232);
        return __result_obj__0;
    }
    # 5326 "/usr/local/include/neo-c.h"
    buffer_append(result,(char*)self,sizeof(double)*len);
    # 5327 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5327, 233);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5327, 234);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5327, 235);
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
    # 5332 "/usr/local/include/neo-c.h"
    len=self->len;
    # 5333 "/usr/local/include/neo-c.h"
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), "/usr/local/include/neo-c.h", 5333, 236, "char*"), "/usr/local/include/neo-c.h", 5333, 237);
    # 5339 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5336 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5336, 238);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5336, 239));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5336, 240));
        return __result_obj__0;
    }
    # 5339 "/usr/local/include/neo-c.h"
    n=0;
    # 5357 "/usr/local/include/neo-c.h"
    for(i=0    ;i<len;i++){
        # 5341 "/usr/local/include/neo-c.h"
        c=self->buf[i];
        # 5355 "/usr/local/include/neo-c.h"
        if((c>=0&&c<32)||c==127) {
            # 5346 "/usr/local/include/neo-c.h"
            result[n++]=94;
            # 5347 "/usr/local/include/neo-c.h"
            result[n++]=c+65-1;
        }
        else if(c>127) {
            # 5350 "/usr/local/include/neo-c.h"
            result[n++]=63;
        }
        else {
            # 5353 "/usr/local/include/neo-c.h"
            result[n++]=c;
        }
    }
    # 5359 "/usr/local/include/neo-c.h"
    result[n]=0;
    # 5359 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5359, 241);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5359, 242));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5359, 243));
    return __result_obj__0;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1char$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    # 1489 "/usr/local/include/neo-c.h"
    self->head=((void*)0);
    # 1490 "/usr/local/include/neo-c.h"
    self->tail=((void*)0);
    # 1491 "/usr/local/include/neo-c.h"
    self->len=0;
    # 1497 "/usr/local/include/neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "/usr/local/include/neo-c.h"
        list$1char$_push_back(self,values[i]);
    }
    # 1497 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 251);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2, 253);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2, 254);
    return __result_obj__0;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_push_back"; neo_current_frame = &fr;
    struct list$1char$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$* litem;
    struct list_item$1char$* litem_8;
    struct list_item$1char$* litem_9;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_8, 0, sizeof(litem_8));
    memset(&litem_9, 0, sizeof(litem_9));
    # 1618 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/usr/local/include/neo-c.h"
    if(self->len==0) {
        # 1619 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/neo-c.h", 1619, 245, "struct list_item$1char$*"))), "/usr/local/include/neo-c.h", 1619, 246);
        # 1621 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/usr/local/include/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/usr/local/include/neo-c.h"
        litem->item=item;
        # 1625 "/usr/local/include/neo-c.h"
        self->tail=litem;
        # 1626 "/usr/local/include/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/neo-c.h", 1629, 247, "struct list_item$1char$*"))), "/usr/local/include/neo-c.h", 1629, 248);
        # 1631 "/usr/local/include/neo-c.h"
        litem_8->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_8->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        litem_8->item=item;
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_8;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_8;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/neo-c.h", 1639, 249, "struct list_item$1char$*"))), "/usr/local/include/neo-c.h", 1639, 250);
        # 1641 "/usr/local/include/neo-c.h"
        litem_9->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_9->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        litem_9->item=item;
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_9;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_9;
    }
    # 1649 "/usr/local/include/neo-c.h"
    self->len++;
    # 1651 "/usr/local/include/neo-c.h"
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
    # 1502 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1500 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "/usr/local/include/neo-c.h"
    it=self->head;
    # 1508 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "/usr/local/include/neo-c.h"
        prev_it=it;
        # 1505 "/usr/local/include/neo-c.h"
        it=it->next;
        # 1506 "/usr/local/include/neo-c.h"
        come_call_finalizer(list_item$1char$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 252);
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
    # 5384 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value1=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc(1, sizeof(struct list$1char$)*(1), "/usr/local/include/neo-c.h", 5384, 244, "struct list$1char$*"), "/usr/local/include/neo-c.h", 5384, 255),len,self))), "/usr/local/include/neo-c.h", 5384, 256);
    come_call_finalizer(list$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5384, 257);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5384, 258);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1char$p* __result_obj__0;
    memset(&i, 0, sizeof(i));
    # 1489 "/usr/local/include/neo-c.h"
    self->head=((void*)0);
    # 1490 "/usr/local/include/neo-c.h"
    self->tail=((void*)0);
    # 1491 "/usr/local/include/neo-c.h"
    self->len=0;
    # 1497 "/usr/local/include/neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "/usr/local/include/neo-c.h"
        list$1char$p_push_back(self,values[i]);
    }
    # 1497 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 266);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 268);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 269);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_push_back"; neo_current_frame = &fr;
    struct list$1char$p* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$p* litem;
    struct list_item$1char$p* litem_10;
    struct list_item$1char$p* litem_11;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_10, 0, sizeof(litem_10));
    memset(&litem_11, 0, sizeof(litem_11));
    # 1618 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/usr/local/include/neo-c.h"
    if(self->len==0) {
        # 1619 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/neo-c.h", 1619, 260, "struct list_item$1char$p*"))), "/usr/local/include/neo-c.h", 1619, 261);
        # 1621 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/usr/local/include/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/usr/local/include/neo-c.h"
        litem->item=item;
        # 1625 "/usr/local/include/neo-c.h"
        self->tail=litem;
        # 1626 "/usr/local/include/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_10=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/neo-c.h", 1629, 262, "struct list_item$1char$p*"))), "/usr/local/include/neo-c.h", 1629, 263);
        # 1631 "/usr/local/include/neo-c.h"
        litem_10->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_10->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        litem_10->item=item;
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_10;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_10;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_11=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/neo-c.h", 1639, 264, "struct list_item$1char$p*"))), "/usr/local/include/neo-c.h", 1639, 265);
        # 1641 "/usr/local/include/neo-c.h"
        litem_11->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_11->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        litem_11->item=item;
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_11;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_11;
    }
    # 1649 "/usr/local/include/neo-c.h"
    self->len++;
    # 1651 "/usr/local/include/neo-c.h"
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
    # 1502 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1500 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "/usr/local/include/neo-c.h"
    it=self->head;
    # 1508 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "/usr/local/include/neo-c.h"
        prev_it=it;
        # 1505 "/usr/local/include/neo-c.h"
        it=it->next;
        # 1506 "/usr/local/include/neo-c.h"
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 267);
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
    # 5389 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value1=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/neo-c.h", 5389, 259, "struct list$1char$p*"), "/usr/local/include/neo-c.h", 5389, 270),len,self))), "/usr/local/include/neo-c.h", 5389, 271);
    come_call_finalizer(list$1char$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5389, 272);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5389, 273);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1short$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    # 1489 "/usr/local/include/neo-c.h"
    self->head=((void*)0);
    # 1490 "/usr/local/include/neo-c.h"
    self->tail=((void*)0);
    # 1491 "/usr/local/include/neo-c.h"
    self->len=0;
    # 1497 "/usr/local/include/neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "/usr/local/include/neo-c.h"
        list$1short$_push_back(self,values[i]);
    }
    # 1497 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 281);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 283);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 284);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_push_back"; neo_current_frame = &fr;
    struct list$1short$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1short$* litem;
    struct list_item$1short$* litem_12;
    struct list_item$1short$* litem_13;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_12, 0, sizeof(litem_12));
    memset(&litem_13, 0, sizeof(litem_13));
    # 1618 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/usr/local/include/neo-c.h"
    if(self->len==0) {
        # 1619 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/neo-c.h", 1619, 275, "struct list_item$1short$*"))), "/usr/local/include/neo-c.h", 1619, 276);
        # 1621 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/usr/local/include/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/usr/local/include/neo-c.h"
        litem->item=item;
        # 1625 "/usr/local/include/neo-c.h"
        self->tail=litem;
        # 1626 "/usr/local/include/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/neo-c.h", 1629, 277, "struct list_item$1short$*"))), "/usr/local/include/neo-c.h", 1629, 278);
        # 1631 "/usr/local/include/neo-c.h"
        litem_12->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_12->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        litem_12->item=item;
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_12;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_12;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/neo-c.h", 1639, 279, "struct list_item$1short$*"))), "/usr/local/include/neo-c.h", 1639, 280);
        # 1641 "/usr/local/include/neo-c.h"
        litem_13->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_13->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        litem_13->item=item;
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_13;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_13;
    }
    # 1649 "/usr/local/include/neo-c.h"
    self->len++;
    # 1651 "/usr/local/include/neo-c.h"
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
    # 1502 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1500 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "/usr/local/include/neo-c.h"
    it=self->head;
    # 1508 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "/usr/local/include/neo-c.h"
        prev_it=it;
        # 1505 "/usr/local/include/neo-c.h"
        it=it->next;
        # 1506 "/usr/local/include/neo-c.h"
        come_call_finalizer(list_item$1short$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 282);
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
    # 5394 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value1=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc(1, sizeof(struct list$1short$)*(1), "/usr/local/include/neo-c.h", 5394, 274, "struct list$1short$*"), "/usr/local/include/neo-c.h", 5394, 285),len,self))), "/usr/local/include/neo-c.h", 5394, 286);
    come_call_finalizer(list$1short$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5394, 287);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5394, 288);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1int$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    # 1489 "/usr/local/include/neo-c.h"
    self->head=((void*)0);
    # 1490 "/usr/local/include/neo-c.h"
    self->tail=((void*)0);
    # 1491 "/usr/local/include/neo-c.h"
    self->len=0;
    # 1497 "/usr/local/include/neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "/usr/local/include/neo-c.h"
        list$1int$_push_back(self,values[i]);
    }
    # 1497 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 296);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 298);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 299);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_push_back"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_14;
    struct list_item$1int$* litem_15;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_14, 0, sizeof(litem_14));
    memset(&litem_15, 0, sizeof(litem_15));
    # 1618 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/usr/local/include/neo-c.h"
    if(self->len==0) {
        # 1619 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1619, 290, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1619, 291);
        # 1621 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/usr/local/include/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/usr/local/include/neo-c.h"
        litem->item=item;
        # 1625 "/usr/local/include/neo-c.h"
        self->tail=litem;
        # 1626 "/usr/local/include/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_14=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1629, 292, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1629, 293);
        # 1631 "/usr/local/include/neo-c.h"
        litem_14->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_14->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        litem_14->item=item;
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_14;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_14;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_15=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1639, 294, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1639, 295);
        # 1641 "/usr/local/include/neo-c.h"
        litem_15->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_15->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        litem_15->item=item;
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_15;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_15;
    }
    # 1649 "/usr/local/include/neo-c.h"
    self->len++;
    # 1651 "/usr/local/include/neo-c.h"
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
    # 1502 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1500 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "/usr/local/include/neo-c.h"
    it=self->head;
    # 1508 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "/usr/local/include/neo-c.h"
        prev_it=it;
        # 1505 "/usr/local/include/neo-c.h"
        it=it->next;
        # 1506 "/usr/local/include/neo-c.h"
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 297);
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
    # 5399 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value1=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 5399, 289, "struct list$1int$*"), "/usr/local/include/neo-c.h", 5399, 300),len,self))), "/usr/local/include/neo-c.h", 5399, 301);
    come_call_finalizer(list$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5399, 302);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5399, 303);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1long$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    # 1489 "/usr/local/include/neo-c.h"
    self->head=((void*)0);
    # 1490 "/usr/local/include/neo-c.h"
    self->tail=((void*)0);
    # 1491 "/usr/local/include/neo-c.h"
    self->len=0;
    # 1497 "/usr/local/include/neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "/usr/local/include/neo-c.h"
        list$1long$_push_back(self,values[i]);
    }
    # 1497 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 311);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 313);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 314);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_push_back"; neo_current_frame = &fr;
    struct list$1long$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1long$* litem;
    struct list_item$1long$* litem_16;
    struct list_item$1long$* litem_17;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_16, 0, sizeof(litem_16));
    memset(&litem_17, 0, sizeof(litem_17));
    # 1618 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/usr/local/include/neo-c.h"
    if(self->len==0) {
        # 1619 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/neo-c.h", 1619, 305, "struct list_item$1long$*"))), "/usr/local/include/neo-c.h", 1619, 306);
        # 1621 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/usr/local/include/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/usr/local/include/neo-c.h"
        litem->item=item;
        # 1625 "/usr/local/include/neo-c.h"
        self->tail=litem;
        # 1626 "/usr/local/include/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_16=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/neo-c.h", 1629, 307, "struct list_item$1long$*"))), "/usr/local/include/neo-c.h", 1629, 308);
        # 1631 "/usr/local/include/neo-c.h"
        litem_16->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_16->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        litem_16->item=item;
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_16;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_16;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_17=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/neo-c.h", 1639, 309, "struct list_item$1long$*"))), "/usr/local/include/neo-c.h", 1639, 310);
        # 1641 "/usr/local/include/neo-c.h"
        litem_17->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_17->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        litem_17->item=item;
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_17;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_17;
    }
    # 1649 "/usr/local/include/neo-c.h"
    self->len++;
    # 1651 "/usr/local/include/neo-c.h"
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
    # 1502 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1500 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "/usr/local/include/neo-c.h"
    it=self->head;
    # 1508 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "/usr/local/include/neo-c.h"
        prev_it=it;
        # 1505 "/usr/local/include/neo-c.h"
        it=it->next;
        # 1506 "/usr/local/include/neo-c.h"
        come_call_finalizer(list_item$1long$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 312);
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
    # 5404 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value1=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc(1, sizeof(struct list$1long$)*(1), "/usr/local/include/neo-c.h", 5404, 304, "struct list$1long$*"), "/usr/local/include/neo-c.h", 5404, 315),len,self))), "/usr/local/include/neo-c.h", 5404, 316);
    come_call_finalizer(list$1long$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5404, 317);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5404, 318);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1float$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    # 1489 "/usr/local/include/neo-c.h"
    self->head=((void*)0);
    # 1490 "/usr/local/include/neo-c.h"
    self->tail=((void*)0);
    # 1491 "/usr/local/include/neo-c.h"
    self->len=0;
    # 1497 "/usr/local/include/neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "/usr/local/include/neo-c.h"
        list$1float$_push_back(self,values[i]);
    }
    # 1497 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 326);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 328);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 329);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_push_back"; neo_current_frame = &fr;
    struct list$1float$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1float$* litem;
    struct list_item$1float$* litem_18;
    struct list_item$1float$* litem_19;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_18, 0, sizeof(litem_18));
    memset(&litem_19, 0, sizeof(litem_19));
    # 1618 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/usr/local/include/neo-c.h"
    if(self->len==0) {
        # 1619 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/neo-c.h", 1619, 320, "struct list_item$1float$*"))), "/usr/local/include/neo-c.h", 1619, 321);
        # 1621 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/usr/local/include/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/usr/local/include/neo-c.h"
        litem->item=item;
        # 1625 "/usr/local/include/neo-c.h"
        self->tail=litem;
        # 1626 "/usr/local/include/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_18=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/neo-c.h", 1629, 322, "struct list_item$1float$*"))), "/usr/local/include/neo-c.h", 1629, 323);
        # 1631 "/usr/local/include/neo-c.h"
        litem_18->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_18->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        litem_18->item=item;
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_18;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_18;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_19=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/neo-c.h", 1639, 324, "struct list_item$1float$*"))), "/usr/local/include/neo-c.h", 1639, 325);
        # 1641 "/usr/local/include/neo-c.h"
        litem_19->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_19->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        litem_19->item=item;
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_19;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_19;
    }
    # 1649 "/usr/local/include/neo-c.h"
    self->len++;
    # 1651 "/usr/local/include/neo-c.h"
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
    # 1502 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1500 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "/usr/local/include/neo-c.h"
    it=self->head;
    # 1508 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "/usr/local/include/neo-c.h"
        prev_it=it;
        # 1505 "/usr/local/include/neo-c.h"
        it=it->next;
        # 1506 "/usr/local/include/neo-c.h"
        come_call_finalizer(list_item$1float$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 327);
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
    # 5409 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value1=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc(1, sizeof(struct list$1float$)*(1), "/usr/local/include/neo-c.h", 5409, 319, "struct list$1float$*"), "/usr/local/include/neo-c.h", 5409, 330),len,self))), "/usr/local/include/neo-c.h", 5409, 331);
    come_call_finalizer(list$1float$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5409, 332);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5409, 333);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1double$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    # 1489 "/usr/local/include/neo-c.h"
    self->head=((void*)0);
    # 1490 "/usr/local/include/neo-c.h"
    self->tail=((void*)0);
    # 1491 "/usr/local/include/neo-c.h"
    self->len=0;
    # 1497 "/usr/local/include/neo-c.h"
    for(i=0    ;i<num_value;i++){
        # 1494 "/usr/local/include/neo-c.h"
        list$1double$_push_back(self,values[i]);
    }
    # 1497 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 341);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 343);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 344);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_push_back"; neo_current_frame = &fr;
    struct list$1double$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1double$* litem;
    struct list_item$1double$* litem_20;
    struct list_item$1double$* litem_21;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_20, 0, sizeof(litem_20));
    memset(&litem_21, 0, sizeof(litem_21));
    # 1618 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/usr/local/include/neo-c.h"
    if(self->len==0) {
        # 1619 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/neo-c.h", 1619, 335, "struct list_item$1double$*"))), "/usr/local/include/neo-c.h", 1619, 336);
        # 1621 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/usr/local/include/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/usr/local/include/neo-c.h"
        litem->item=item;
        # 1625 "/usr/local/include/neo-c.h"
        self->tail=litem;
        # 1626 "/usr/local/include/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_20=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/neo-c.h", 1629, 337, "struct list_item$1double$*"))), "/usr/local/include/neo-c.h", 1629, 338);
        # 1631 "/usr/local/include/neo-c.h"
        litem_20->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_20->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        litem_20->item=item;
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_20;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_20;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_21=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/neo-c.h", 1639, 339, "struct list_item$1double$*"))), "/usr/local/include/neo-c.h", 1639, 340);
        # 1641 "/usr/local/include/neo-c.h"
        litem_21->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_21->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        litem_21->item=item;
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_21;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_21;
    }
    # 1649 "/usr/local/include/neo-c.h"
    self->len++;
    # 1651 "/usr/local/include/neo-c.h"
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
    # 1502 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1500 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "/usr/local/include/neo-c.h"
    it=self->head;
    # 1508 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "/usr/local/include/neo-c.h"
        prev_it=it;
        # 1505 "/usr/local/include/neo-c.h"
        it=it->next;
        # 1506 "/usr/local/include/neo-c.h"
        come_call_finalizer(list_item$1double$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 342);
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
    # 5414 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value1=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc(1, sizeof(struct list$1double$)*(1), "/usr/local/include/neo-c.h", 5414, 334, "struct list$1double$*"), "/usr/local/include/neo-c.h", 5414, 345),len,self))), "/usr/local/include/neo-c.h", 5414, 346);
    come_call_finalizer(list$1double$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5414, 347);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5414, 348);
    return __result_obj__0;
}

_Bool _Bool_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_equals"; neo_current_frame = &fr;
    # 5427 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_equals"; neo_current_frame = &fr;
    # 5432 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_equals"; neo_current_frame = &fr;
    # 5437 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_equals"; neo_current_frame = &fr;
    # 5442 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_equals"; neo_current_frame = &fr;
    # 5447 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool size_t_equals(unsigned long  int  self  , unsigned long  int  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_equals"; neo_current_frame = &fr;
    # 5452 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool float_equals(float self, float right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_equals"; neo_current_frame = &fr;
    # 5457 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool double_equals(double self, double right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_equals"; neo_current_frame = &fr;
    # 5462 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_equals"; neo_current_frame = &fr;
    # 5472 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_operator_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_equals"; neo_current_frame = &fr;
    # 5477 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_operator_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_equals"; neo_current_frame = &fr;
    # 5482 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_operator_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_equals"; neo_current_frame = &fr;
    # 5487 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_operator_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_equals"; neo_current_frame = &fr;
    # 5492 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_not_equals"; neo_current_frame = &fr;
    # 5502 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool char_operator_not_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_not_equals"; neo_current_frame = &fr;
    # 5507 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool short_operator_not_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_not_equals"; neo_current_frame = &fr;
    # 5512 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool int_operator_not_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_not_equals"; neo_current_frame = &fr;
    # 5517 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool long_operator_not_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_not_equals"; neo_current_frame = &fr;
    # 5522 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool charp_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_equals"; neo_current_frame = &fr;
    # 5537 "/usr/local/include/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5528 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5531 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
        # 5534 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5537 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool string_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_equals"; neo_current_frame = &fr;
    # 5552 "/usr/local/include/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5543 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5546 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
        # 5549 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5552 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool voidp_equals(void* self, void* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_equals"; neo_current_frame = &fr;
    # 5557 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Boolp_equals(_Bool* self, _Bool* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Boolp_equals"; neo_current_frame = &fr;
    # 5562 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return *self==*right;
    neo_current_frame = fr.prev;
}

_Bool string_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_equals"; neo_current_frame = &fr;
    # 5577 "/usr/local/include/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5568 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5571 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
        # 5574 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5577 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool charp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_equals"; neo_current_frame = &fr;
    # 5592 "/usr/local/include/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5583 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5586 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
        # 5589 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5592 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool chara_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_equals"; neo_current_frame = &fr;
    # 5604 "/usr/local/include/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5598 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5601 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 5604 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool voidp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_equals"; neo_current_frame = &fr;
    # 5609 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool voidp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_not_equals"; neo_current_frame = &fr;
    # 5614 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return !charp_operator_equals(self,right);
    neo_current_frame = fr.prev;
}

_Bool string_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_not_equals"; neo_current_frame = &fr;
    # 5626 "/usr/local/include/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5620 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5623 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5626 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool charp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_not_equals"; neo_current_frame = &fr;
    # 5638 "/usr/local/include/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5632 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5635 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5638 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool chara_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_not_equals"; neo_current_frame = &fr;
    # 5650 "/usr/local/include/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5644 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5647 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5650 "/usr/local/include/neo-c.h"
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
    # 5659 "/usr/local/include/neo-c.h"
    if(self==((void*)0)||right==((void*)0)) {
        # 5657 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5657))), "/usr/local/include/neo-c.h", 5657, 349);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5657, 350));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5657, 351));
        return __result_obj__0;
    }
    # 5659 "/usr/local/include/neo-c.h"
    len=strlen(self)+strlen(right);
    # 5661 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "/usr/local/include/neo-c.h", 5661, 352, "char*"), "/usr/local/include/neo-c.h", 5661, 353);
    # 5663 "/usr/local/include/neo-c.h"
    strncpy(result,self,len+1);
    # 5664 "/usr/local/include/neo-c.h"
    strncat(result,right,len+1);
    # 5666 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5666, 354);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5666, 355));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5666, 356));
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
    # 5674 "/usr/local/include/neo-c.h"
    if(self==((void*)0)||right==((void*)0)) {
        # 5672 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5672))), "/usr/local/include/neo-c.h", 5672, 357);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5672, 358));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5672, 359));
        return __result_obj__0;
    }
    # 5674 "/usr/local/include/neo-c.h"
    len=strlen(self)+strlen(right);
    # 5676 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "/usr/local/include/neo-c.h", 5676, 360, "char*"), "/usr/local/include/neo-c.h", 5676, 361);
    # 5678 "/usr/local/include/neo-c.h"
    strncpy(result,self,len+1);
    # 5679 "/usr/local/include/neo-c.h"
    strncat(result,right,len+1);
    # 5681 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5681, 362);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5681, 363));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5681, 364));
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
    # 5689 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5687 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5687))), "/usr/local/include/neo-c.h", 5687, 365);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5687, 366));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5687, 367));
        return __result_obj__0;
    }
    # 5689 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5689, 368, "struct buffer* "), "/usr/local/include/neo-c.h", 5689, 369)), "/usr/local/include/neo-c.h", 5689, 370);
    # 5695 "/usr/local/include/neo-c.h"
    for(i=0    ;i<right;i++){
        # 5692 "/usr/local/include/neo-c.h"
        buffer_append_str(buf,self);
    }
    # 5695 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "/usr/local/include/neo-c.h", 5695, 371);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 5695, 372);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5695, 373));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5695, 374));
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
    # 5703 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5701 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5701))), "/usr/local/include/neo-c.h", 5701, 375);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5701, 376));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5701, 377));
        return __result_obj__0;
    }
    # 5703 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5703, 378, "struct buffer* "), "/usr/local/include/neo-c.h", 5703, 379)), "/usr/local/include/neo-c.h", 5703, 380);
    # 5709 "/usr/local/include/neo-c.h"
    for(i=0    ;i<right;i++){
        # 5706 "/usr/local/include/neo-c.h"
        buffer_append_str(buf,self);
    }
    # 5709 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "/usr/local/include/neo-c.h", 5709, 381);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 5709, 382);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5709, 383));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5709, 384));
    return __result_obj__0;
}

_Bool charpa_contained(const char* self[], unsigned long  int  len  , const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_contained"; neo_current_frame = &fr;
    _Bool result;
    int i;
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    # 5719 "/usr/local/include/neo-c.h"
    result=(_Bool)0;
    # 5723 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5721 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return result;
    }
    # 5729 "/usr/local/include/neo-c.h"
    for(i=0    ;i<len;i++){
        # 5728 "/usr/local/include/neo-c.h"
        if(strncmp(self[i],str,strlen(self[i]))==0) {
            # 5725 "/usr/local/include/neo-c.h"
            result=(_Bool)1;
            # 5726 "/usr/local/include/neo-c.h"
            break;
        }
    }
    # 5729 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned long  int  shorta_length(short* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_length"; neo_current_frame = &fr;
    # 5734 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  inta_length(int* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "inta_length"; neo_current_frame = &fr;
    # 5739 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  longa_length(long* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "longa_length"; neo_current_frame = &fr;
    # 5744 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  floata_length(float* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "floata_length"; neo_current_frame = &fr;
    # 5749 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  doublea_length(double* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_length"; neo_current_frame = &fr;
    # 5754 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned int _Bool_get_hash_key(_Bool value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_get_hash_key"; neo_current_frame = &fr;
    # 5767 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

unsigned int char_get_hash_key(char value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_get_hash_key"; neo_current_frame = &fr;
    # 5772 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int short_get_hash_key(short int value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_get_hash_key"; neo_current_frame = &fr;
    # 5777 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int int_get_hash_key(int value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_get_hash_key"; neo_current_frame = &fr;
    # 5782 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int long_get_hash_key(long value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_get_hash_key"; neo_current_frame = &fr;
    # 5787 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int size_t_get_hash_key(unsigned long  int  value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_get_hash_key"; neo_current_frame = &fr;
    # 5792 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int float_get_hash_key(float value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_get_hash_key"; neo_current_frame = &fr;
    # 5797 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int double_get_hash_key(double value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_get_hash_key"; neo_current_frame = &fr;
    # 5802 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int charp_get_hash_key(const char* value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_get_hash_key"; neo_current_frame = &fr;
    int result;
    memset(&result, 0, sizeof(result));
    # 5810 "/usr/local/include/neo-c.h"
    if(value==((void*)0)) {
        # 5808 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5810 "/usr/local/include/neo-c.h"
    result=0;
    # 5811 "/usr/local/include/neo-c.h"
    const char* p=value;
    # 5816 "/usr/local/include/neo-c.h"
    while(*p) {
        # 5813 "/usr/local/include/neo-c.h"
        result+=(*p);
        # 5814 "/usr/local/include/neo-c.h"
        p++;
    }
    # 5816 "/usr/local/include/neo-c.h"
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
    # 5824 "/usr/local/include/neo-c.h"
    if(value==((void*)0)) {
        # 5822 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5824 "/usr/local/include/neo-c.h"
    result=0;
    # 5825 "/usr/local/include/neo-c.h"
    p=value;
    # 5830 "/usr/local/include/neo-c.h"
    while(*p) {
        # 5827 "/usr/local/include/neo-c.h"
        result+=(*p);
        # 5828 "/usr/local/include/neo-c.h"
        p++;
    }
    # 5830 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned int voidp_get_hash_key(void* value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_get_hash_key"; neo_current_frame = &fr;
    # 5835 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

_Bool _Bool_clone(_Bool self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_clone"; neo_current_frame = &fr;
    # 5848 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

char char_clone(char self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_clone"; neo_current_frame = &fr;
    # 5853 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

short int short_clone(short self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_clone"; neo_current_frame = &fr;
    # 5858 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

int int_clone(int self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_clone"; neo_current_frame = &fr;
    # 5863 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long  int long_clone(long self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_clone"; neo_current_frame = &fr;
    # 5868 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

unsigned long  int  size_t_clone(unsigned long  int  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_clone"; neo_current_frame = &fr;
    # 5873 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

double double_clone(double self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_clone"; neo_current_frame = &fr;
    # 5878 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

float float_clone(float self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_clone"; neo_current_frame = &fr;
    # 5883 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

_Bool xisalpha(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisalpha"; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    # 5892 "/usr/local/include/neo-c.h"
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 5893 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xisblank(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisblank"; neo_current_frame = &fr;
    # 5898 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xisdigit(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisdigit"; neo_current_frame = &fr;
    # 5903 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xisspace(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisspace"; neo_current_frame = &fr;
    # 5908 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return c==32||c==9||c==10||c==13||c==28||c==11;
    neo_current_frame = fr.prev;
}

_Bool xisalnum(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisalnum"; neo_current_frame = &fr;
    # 5913 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return xisalpha(c)||xisdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xisascii(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisascii"; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    # 5918 "/usr/local/include/neo-c.h"
    result=(c>=32&&c<=126);
    # 5919 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xispunct(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xispunct"; neo_current_frame = &fr;
    # 5923 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
    neo_current_frame = fr.prev;
}

int string_length(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_length"; neo_current_frame = &fr;
    # 5934 "/usr/local/include/neo-c.h"
    if(str==((void*)0)) {
        # 5932 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5934 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int charp_length(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_length"; neo_current_frame = &fr;
    # 5941 "/usr/local/include/neo-c.h"
    if(str==((void*)0)) {
        # 5939 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5941 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int chara_length(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_length"; neo_current_frame = &fr;
    # 5955 "/usr/local/include/neo-c.h"
    if(str==((void*)0)) {
        # 5953 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5955 "/usr/local/include/neo-c.h"
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
    # 5963 "/usr/local/include/neo-c.h"
    if(str==((void*)0)) {
        # 5961 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5961))), "/usr/local/include/neo-c.h", 5961, 385);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5961, 386));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5961, 387));
        return __result_obj__0;
    }
    # 5963 "/usr/local/include/neo-c.h"
    len=strlen(str);
    # 5964 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "/usr/local/include/neo-c.h", 5964, 388, "char*"), "/usr/local/include/neo-c.h", 5964, 389);
    # 5970 "/usr/local/include/neo-c.h"
    for(i=0    ;i<len;i++){
        # 5967 "/usr/local/include/neo-c.h"
        result[i]=str[len-i-1];
    }
    # 5970 "/usr/local/include/neo-c.h"
    result[len]=0;
    # 5972 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5972, 390);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5972, 391));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5972, 392));
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
    # 5981 "/usr/local/include/neo-c.h"
    if(str==((void*)0)) {
        # 5978 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5978))), "/usr/local/include/neo-c.h", 5978, 393);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5978, 394));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5978, 395));
        return __result_obj__0;
    }
    # 5981 "/usr/local/include/neo-c.h"
    len=strlen(str);
    # 5986 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 5984 "/usr/local/include/neo-c.h"
        head+=len;
    }
    # 5990 "/usr/local/include/neo-c.h"
    if(tail<0) {
        # 5987 "/usr/local/include/neo-c.h"
        tail+=len+1;
    }
    # 5994 "/usr/local/include/neo-c.h"
    if(head>tail) {
        # 5991 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/usr/local/include/neo-c.h", 5991, 396);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5991, 397));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5991, 398));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5991, 399));
        return __result_obj__0;
    }
    # 5998 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 5995 "/usr/local/include/neo-c.h"
        head=0;
    }
    # 6002 "/usr/local/include/neo-c.h"
    if(tail>=len) {
        # 5999 "/usr/local/include/neo-c.h"
        tail=len;
    }
    # 6006 "/usr/local/include/neo-c.h"
    if(head==tail) {
        # 6003 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6003))), "/usr/local/include/neo-c.h", 6003, 400);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6003, 401));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6003, 402));
        return __result_obj__0;
    }
    # 6010 "/usr/local/include/neo-c.h"
    if(tail-head+1<1) {
        # 6007 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6007))), "/usr/local/include/neo-c.h", 6007, 403);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6007, 404));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6007, 405));
        return __result_obj__0;
    }
    # 6010 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/neo-c.h", 6010, 406, "char*"), "/usr/local/include/neo-c.h", 6010, 407);
    # 6012 "/usr/local/include/neo-c.h"
    memcpy(result,str+head,tail-head);
    # 6013 "/usr/local/include/neo-c.h"
    result[tail-head]=0;
    # 6015 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6015, 408);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6015, 409));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6015, 410));
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
    # 6024 "/usr/local/include/neo-c.h"
    if(str==((void*)0)) {
        # 6021 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6021))), "/usr/local/include/neo-c.h", 6021, 411);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6021, 412));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6021, 413));
        return __result_obj__0;
    }
    # 6024 "/usr/local/include/neo-c.h"
    len=strlen(str);
    # 6029 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 6027 "/usr/local/include/neo-c.h"
        head+=len;
    }
    # 6033 "/usr/local/include/neo-c.h"
    if(tail<0) {
        # 6030 "/usr/local/include/neo-c.h"
        tail+=len+1;
    }
    # 6037 "/usr/local/include/neo-c.h"
    if(head>tail) {
        # 6034 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/usr/local/include/neo-c.h", 6034, 414);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6034, 415));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6034, 416));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6034, 417));
        return __result_obj__0;
    }
    # 6041 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 6038 "/usr/local/include/neo-c.h"
        head=0;
    }
    # 6045 "/usr/local/include/neo-c.h"
    if(tail>=len) {
        # 6042 "/usr/local/include/neo-c.h"
        tail=len;
    }
    # 6049 "/usr/local/include/neo-c.h"
    if(head==tail) {
        # 6046 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6046))), "/usr/local/include/neo-c.h", 6046, 418);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6046, 419));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6046, 420));
        return __result_obj__0;
    }
    # 6053 "/usr/local/include/neo-c.h"
    if(tail-head+1<1) {
        # 6050 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6050))), "/usr/local/include/neo-c.h", 6050, 421);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6050, 422));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6050, 423));
        return __result_obj__0;
    }
    # 6053 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/neo-c.h", 6053, 424, "char*"), "/usr/local/include/neo-c.h", 6053, 425);
    # 6055 "/usr/local/include/neo-c.h"
    memcpy(result,str+head,tail-head);
    # 6056 "/usr/local/include/neo-c.h"
    result[tail-head]=0;
    # 6058 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6058, 426);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6058, 427));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6058, 428));
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
    # 6067 "/usr/local/include/neo-c.h"
    if(str==((void*)0)) {
        # 6064 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6064))), "/usr/local/include/neo-c.h", 6064, 429);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6064, 430));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6064, 431));
        return __result_obj__0;
    }
    # 6067 "/usr/local/include/neo-c.h"
    len=strlen(str);
    # 6072 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 6070 "/usr/local/include/neo-c.h"
        head+=len;
    }
    # 6076 "/usr/local/include/neo-c.h"
    if(tail<0) {
        # 6073 "/usr/local/include/neo-c.h"
        tail+=len+1;
    }
    # 6080 "/usr/local/include/neo-c.h"
    if(head>tail) {
        # 6077 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/usr/local/include/neo-c.h", 6077, 432);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6077, 433));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6077, 434));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6077, 435));
        return __result_obj__0;
    }
    # 6084 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 6081 "/usr/local/include/neo-c.h"
        head=0;
    }
    # 6088 "/usr/local/include/neo-c.h"
    if(tail>=len) {
        # 6085 "/usr/local/include/neo-c.h"
        tail=len;
    }
    # 6092 "/usr/local/include/neo-c.h"
    if(head==tail) {
        # 6089 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6089))), "/usr/local/include/neo-c.h", 6089, 436);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6089, 437));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6089, 438));
        return __result_obj__0;
    }
    # 6096 "/usr/local/include/neo-c.h"
    if(tail-head+1<1) {
        # 6093 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6093))), "/usr/local/include/neo-c.h", 6093, 439);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6093, 440));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6093, 441));
        return __result_obj__0;
    }
    # 6096 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/neo-c.h", 6096, 442, "char*"), "/usr/local/include/neo-c.h", 6096, 443);
    # 6098 "/usr/local/include/neo-c.h"
    memcpy(result,str+head,tail-head);
    # 6099 "/usr/local/include/neo-c.h"
    result[tail-head]=0;
    # 6101 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6101, 444);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6101, 445));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6101, 446));
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
    # 6109 "/usr/local/include/neo-c.h"
    if(msg==((void*)0)) {
        # 6107 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6107))), "/usr/local/include/neo-c.h", 6107, 447);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6107, 448));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6107, 449));
        return __result_obj__0;
    }
    # 6109 "/usr/local/include/neo-c.h"
    # 6110 "/usr/local/include/neo-c.h"
    __builtin_va_start(args,msg);
    # 6111 "/usr/local/include/neo-c.h"
    # 6112 "/usr/local/include/neo-c.h"
    len=vasprintf(&result,msg,args);
    # 6113 "/usr/local/include/neo-c.h"
    __builtin_va_end(args);
    # 6119 "/usr/local/include/neo-c.h"
    if(len<0) {
        # 6116 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6116))), "/usr/local/include/neo-c.h", 6116, 450);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6116, 451));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6116, 452));
        return __result_obj__0;
    }
    # 6119 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result2=(char* )come_increment_ref_count(__builtin_string(result,"/usr/local/include/neo-c.h",6119), "/usr/local/include/neo-c.h", 6119, 453);
    # 6121 "/usr/local/include/neo-c.h"
    free(result);
    # 6123 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result2, "/usr/local/include/neo-c.h", 6123, 454);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6123, 455));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6123, 456));
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
    # 6132 "/usr/local/include/neo-c.h"
    if(str==((void*)0)) {
        # 6129 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6129))), "/usr/local/include/neo-c.h", 6129, 457);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6129, 458));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6129, 459));
        return __result_obj__0;
    }
    # 6132 "/usr/local/include/neo-c.h"
    len=strlen(str);
    # 6138 "/usr/local/include/neo-c.h"
    if(head>=len) {
        # 6135 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/usr/local/include/neo-c.h",6135))), "/usr/local/include/neo-c.h", 6135, 460);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6135, 461));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6135, 462));
        return __result_obj__0;
    }
    # 6142 "/usr/local/include/neo-c.h"
    if(strcmp(str,"")==0) {
        # 6139 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/usr/local/include/neo-c.h",6139))), "/usr/local/include/neo-c.h", 6139, 463);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6139, 464));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6139, 465));
        return __result_obj__0;
    }
    # 6146 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 6143 "/usr/local/include/neo-c.h"
        head+=len;
    }
    # 6150 "/usr/local/include/neo-c.h"
    if(tail<0) {
        # 6147 "/usr/local/include/neo-c.h"
        tail+=len+1;
    }
    # 6154 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 6151 "/usr/local/include/neo-c.h"
        head=0;
    }
    # 6158 "/usr/local/include/neo-c.h"
    if(tail<0) {
        # 6155 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/usr/local/include/neo-c.h",6155))), "/usr/local/include/neo-c.h", 6155, 466);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6155, 467));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6155, 468));
        return __result_obj__0;
    }
    # 6162 "/usr/local/include/neo-c.h"
    if(tail>=len) {
        # 6159 "/usr/local/include/neo-c.h"
        tail=len;
    }
    # 6162 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len-(tail-head)+1)), "/usr/local/include/neo-c.h", 6162, 469, "char*"), "/usr/local/include/neo-c.h", 6162, 470);
    # 6164 "/usr/local/include/neo-c.h"
    memcpy(result,str,head);
    # 6165 "/usr/local/include/neo-c.h"
    memcpy(result+head,str+tail,len-tail);
    # 6167 "/usr/local/include/neo-c.h"
    result[len-(tail-head)]=0;
    # 6169 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6169, 471);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6169, 472));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6169, 473));
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    # 1481 "/usr/local/include/neo-c.h"
    self->head=((void*)0);
    # 1482 "/usr/local/include/neo-c.h"
    self->tail=((void*)0);
    # 1483 "/usr/local/include/neo-c.h"
    self->len=0;
    # 1485 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 475);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 478);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 479);
    return __result_obj__0;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    # 1502 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1500 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1502 "/usr/local/include/neo-c.h"
    it=self->head;
    # 1508 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "/usr/local/include/neo-c.h"
        prev_it=it;
        # 1505 "/usr/local/include/neo-c.h"
        it=it->next;
        # 1506 "/usr/local/include/neo-c.h"
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 477);
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
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 476));
    }
            neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj17  ;
    struct list_item$1char$ph* litem_22;
    char*  __dec_obj18  ;
    struct list_item$1char$ph* litem_23;
    char*  __dec_obj19  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_22, 0, sizeof(litem_22));
    memset(&litem_23, 0, sizeof(litem_23));
    # 1618 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1615, 490));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/usr/local/include/neo-c.h"
    if(self->len==0) {
        # 1619 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1619, 491, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1619, 492);
        # 1621 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/usr/local/include/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/usr/local/include/neo-c.h"
        __dec_obj17=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 494);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1623, 493);
        # 1625 "/usr/local/include/neo-c.h"
        self->tail=litem;
        # 1626 "/usr/local/include/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_22=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1629, 495, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1629, 496);
        # 1631 "/usr/local/include/neo-c.h"
        litem_22->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_22->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        __dec_obj18=litem_22->item,
        litem_22->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 498);
        __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1633, 497);
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_22;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_22;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_23=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1639, 499, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1639, 500);
        # 1641 "/usr/local/include/neo-c.h"
        litem_23->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_23->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        __dec_obj19=litem_23->item,
        litem_23->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 502);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1643, 501);
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_23;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_23;
    }
    # 1649 "/usr/local/include/neo-c.h"
    self->len++;
    # 1651 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1651, 503));
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
    # 6178 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 6175 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6175, 474, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 6175, 480)))), "/usr/local/include/neo-c.h", 6175, 481);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 6175, 482);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6175, 483);
        return __result_obj__0;
    }
    # 6178 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6178, 484, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 6178, 485)), "/usr/local/include/neo-c.h", 6178, 486);
    # 6180 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    str=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 6180, 487, "struct buffer* "), "/usr/local/include/neo-c.h", 6180, 488)), "/usr/local/include/neo-c.h", 6180, 489);
    # 6182 "/usr/local/include/neo-c.h"
    self_len=charp_length(self);
    # 6192 "/usr/local/include/neo-c.h"
    for(i=0    ;i<self_len;i++){
        # 6191 "/usr/local/include/neo-c.h"
        if(self[i]==c) {
            # 6185 "/usr/local/include/neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"/usr/local/include/neo-c.h",6185), "/usr/local/include/neo-c.h", 6185, 504));
            # 6186 "/usr/local/include/neo-c.h"
            buffer_reset(str);
        }
        else {
            # 6189 "/usr/local/include/neo-c.h"
            buffer_append_char(str,self[i]);
        }
    }
    # 6196 "/usr/local/include/neo-c.h"
    if(buffer_length(str)!=0) {
        # 6193 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"/usr/local/include/neo-c.h",6193), "/usr/local/include/neo-c.h", 6193, 505));
    }
    # 6196 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6196, 506);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6196, 507);
    come_call_finalizer(buffer_finalize, str, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 6196, 508);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6196, 509);
    return __result_obj__0;
}

char*  charp_xsprintf(char* self, const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_xsprintf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6201 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "/usr/local/include/neo-c.h", 6201, 510);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6201, 511));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6201, 512));
    return __result_obj__0;
}

char*  int_xsprintf(int self, const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_xsprintf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6206 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "/usr/local/include/neo-c.h", 6206, 513);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6206, 514));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6206, 515));
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
    # 6214 "/usr/local/include/neo-c.h"
    if(str==((void*)0)) {
        # 6212 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6212))), "/usr/local/include/neo-c.h", 6212, 516);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6212, 517));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6212, 518));
        return __result_obj__0;
    }
    # 6214 "/usr/local/include/neo-c.h"
    len=charp_length(str);
    # 6215 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), "/usr/local/include/neo-c.h", 6215, 519, "char*"), "/usr/local/include/neo-c.h", 6215, 520);
    # 6217 "/usr/local/include/neo-c.h"
    n=0;
    # 6232 "/usr/local/include/neo-c.h"
    for(i=0    ;i<len;i++){
        # 6219 "/usr/local/include/neo-c.h"
        c=str[i];
        # 6230 "/usr/local/include/neo-c.h"
        if((c>=0&&c<32)||c==127) {
            # 6224 "/usr/local/include/neo-c.h"
            result[n++]=94;
            # 6225 "/usr/local/include/neo-c.h"
            result[n++]=c+65-1;
        }
        else {
            # 6228 "/usr/local/include/neo-c.h"
            result[n++]=c;
        }
    }
    # 6234 "/usr/local/include/neo-c.h"
    result[n]=0;
    # 6234 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6234, 521);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6234, 522));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6234, 523));
    return __result_obj__0;
}

char*  chara_printable(char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_printable"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6239 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_printable(str))), "/usr/local/include/neo-c.h", 6239, 524);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6239, 525));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6239, 526));
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
    # 6248 "/usr/local/include/neo-c.h"
    if(self==((void*)0)||str==((void*)0)||replace==((void*)0)) {
        # 6245 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/usr/local/include/neo-c.h",6245))), "/usr/local/include/neo-c.h", 6245, 527);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6245, 528));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6245, 529));
        return __result_obj__0;
    }
    # 6248 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 6248, 530, "struct buffer* "), "/usr/local/include/neo-c.h", 6248, 531)), "/usr/local/include/neo-c.h", 6248, 532);
    # 6250 "/usr/local/include/neo-c.h"
    p=self;
    # 6270 "/usr/local/include/neo-c.h"
    while((_Bool)1) {
        # 6253 "/usr/local/include/neo-c.h"
        p2=strstr(p,str);
        # 6264 "/usr/local/include/neo-c.h"
        if(p2==((void*)0)) {
            # 6256 "/usr/local/include/neo-c.h"
            p2=p;
            # 6260 "/usr/local/include/neo-c.h"
            while(*p2) {
                # 6258 "/usr/local/include/neo-c.h"
                p2++;
            }
            # 6260 "/usr/local/include/neo-c.h"
            buffer_append(result,p,p2-p);
            # 6261 "/usr/local/include/neo-c.h"
            break;
        }
        # 6264 "/usr/local/include/neo-c.h"
        buffer_append(result,p,p2-p);
        # 6265 "/usr/local/include/neo-c.h"
        buffer_append_str(result,replace);
        # 6267 "/usr/local/include/neo-c.h"
        p=p2+strlen(str);
    }
    # 6270 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(result))), "/usr/local/include/neo-c.h", 6270, 533);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 6270, 534);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6270, 535));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6270, 536));
    return __result_obj__0;
}

char*  xbasename(char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xbasename"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    memset(&p, 0, sizeof(p));
    # 6281 "/usr/local/include/neo-c.h"
    if(path==((void*)0)) {
        # 6279 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6279))), "/usr/local/include/neo-c.h", 6279, 537);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6279, 538));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6279, 539));
        return __result_obj__0;
    }
    # 6281 "/usr/local/include/neo-c.h"
    p=path+strlen(path);
    # 6292 "/usr/local/include/neo-c.h"
    while(p>=path) {
        # 6290 "/usr/local/include/neo-c.h"
        if(*p==47) {
            # 6285 "/usr/local/include/neo-c.h"
            break;
        }
        else {
            # 6288 "/usr/local/include/neo-c.h"
            p--;
        }
    }
    # 6299 "/usr/local/include/neo-c.h"
    if(p<path) {
        # 6293 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"/usr/local/include/neo-c.h",6293))), "/usr/local/include/neo-c.h", 6293, 540);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6293, 541));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6293, 542));
        return __result_obj__0;
    }
    else {
        # 6296 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"/usr/local/include/neo-c.h",6296))), "/usr/local/include/neo-c.h", 6296, 543);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6296, 544));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6296, 545));
        return __result_obj__0;
    }
    # 6299 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6299))), "/usr/local/include/neo-c.h", 6299, 546);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6299, 547));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6299, 548));
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
    # 6307 "/usr/local/include/neo-c.h"
    if(path==((void*)0)) {
        # 6305 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6305))), "/usr/local/include/neo-c.h", 6305, 549);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6305, 550));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6305, 551));
        return __result_obj__0;
    }
    # 6307 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    path2=(char* )come_increment_ref_count(xbasename(path), "/usr/local/include/neo-c.h", 6307, 552);
    # 6309 "/usr/local/include/neo-c.h"
    p=path2+strlen(path2);
    # 6320 "/usr/local/include/neo-c.h"
    while(p>=path2) {
        # 6318 "/usr/local/include/neo-c.h"
        if(*p==46) {
            # 6313 "/usr/local/include/neo-c.h"
            break;
        }
        else {
            # 6316 "/usr/local/include/neo-c.h"
            p--;
        }
    }
    # 6327 "/usr/local/include/neo-c.h"
    if(p<path2) {
        # 6321 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path2,"/usr/local/include/neo-c.h",6321))), "/usr/local/include/neo-c.h", 6321, 553);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 6321, 554));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6321, 555));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6321, 556));
        return __result_obj__0;
    }
    else {
        # 6324 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(path2,0,p-path2))), "/usr/local/include/neo-c.h", 6324, 557);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 6324, 558));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6324, 559));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6324, 560));
        return __result_obj__0;
    }
    # 6327 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6327))), "/usr/local/include/neo-c.h", 6327, 561);
    (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 6327, 562));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6327, 563));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6327, 564));
    return __result_obj__0;
}

char*  xextname(char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xextname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    memset(&p, 0, sizeof(p));
    # 6335 "/usr/local/include/neo-c.h"
    if(path==((void*)0)) {
        # 6333 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6333))), "/usr/local/include/neo-c.h", 6333, 565);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6333, 566));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6333, 567));
        return __result_obj__0;
    }
    # 6335 "/usr/local/include/neo-c.h"
    p=path+strlen(path);
    # 6346 "/usr/local/include/neo-c.h"
    while(p>=path) {
        # 6344 "/usr/local/include/neo-c.h"
        if(*p==46) {
            # 6339 "/usr/local/include/neo-c.h"
            break;
        }
        else {
            # 6342 "/usr/local/include/neo-c.h"
            p--;
        }
    }
    # 6353 "/usr/local/include/neo-c.h"
    if(p<path) {
        # 6347 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"/usr/local/include/neo-c.h",6347))), "/usr/local/include/neo-c.h", 6347, 568);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6347, 569));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6347, 570));
        return __result_obj__0;
    }
    else {
        # 6350 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"/usr/local/include/neo-c.h",6350))), "/usr/local/include/neo-c.h", 6350, 571);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6350, 572));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6350, 573));
        return __result_obj__0;
    }
    # 6353 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6353))), "/usr/local/include/neo-c.h", 6353, 574);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6353, 575));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6353, 576));
    return __result_obj__0;
}

char*  _Bool_to_string(_Bool self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6377 "/usr/local/include/neo-c.h"
    if(self) {
        # 6372 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("true","/usr/local/include/neo-c.h",6372))), "/usr/local/include/neo-c.h", 6372, 577);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6372, 578));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6372, 579));
        return __result_obj__0;
    }
    else {
        # 6375 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("false","/usr/local/include/neo-c.h",6375))), "/usr/local/include/neo-c.h", 6375, 580);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6375, 581));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6375, 582));
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

char*  char_to_string(char self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6381 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%c",self))), "/usr/local/include/neo-c.h", 6381, 583);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6381, 584));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6381, 585));
    return __result_obj__0;
}

char*  short_to_string(short self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6386 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "/usr/local/include/neo-c.h", 6386, 586);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6386, 587));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6386, 588));
    return __result_obj__0;
}

char*  int_to_string(int self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6391 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "/usr/local/include/neo-c.h", 6391, 589);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6391, 590));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6391, 591));
    return __result_obj__0;
}

char*  long_to_string(long self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6396 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "/usr/local/include/neo-c.h", 6396, 592);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6396, 593));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6396, 594));
    return __result_obj__0;
}

char*  size_t_to_string(unsigned long  int  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6401 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "/usr/local/include/neo-c.h", 6401, 595);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6401, 596));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6401, 597));
    return __result_obj__0;
}

char*  float_to_string(float self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6406 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%f",self))), "/usr/local/include/neo-c.h", 6406, 598);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6406, 599));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6406, 600));
    return __result_obj__0;
}

char*  double_to_string(double self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6411 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%lf",self))), "/usr/local/include/neo-c.h", 6411, 601);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6411, 602));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6411, 603));
    return __result_obj__0;
}

char*  string_to_string(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6419 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 6417 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6417))), "/usr/local/include/neo-c.h", 6417, 604);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6417, 605));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6417, 606));
        return __result_obj__0;
    }
    # 6419 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/usr/local/include/neo-c.h",6419))), "/usr/local/include/neo-c.h", 6419, 607);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6419, 608));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6419, 609));
    return __result_obj__0;
}

char*  charp_to_string(const char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6427 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 6425 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6425))), "/usr/local/include/neo-c.h", 6425, 610);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6425, 611));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6425, 612));
        return __result_obj__0;
    }
    # 6427 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/usr/local/include/neo-c.h",6427))), "/usr/local/include/neo-c.h", 6427, 613);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6427, 614));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6427, 615));
    return __result_obj__0;
}

int _Bool_compare(_Bool left, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_compare"; neo_current_frame = &fr;
    # 6466 "/usr/local/include/neo-c.h"
    if(!left&&right) {
        # 6454 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left&&right) {
        # 6457 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(!left&&!right) {
        # 6460 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else {
        # 6463 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 6466 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int char_compare(char left, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_compare"; neo_current_frame = &fr;
    # 6481 "/usr/local/include/neo-c.h"
    if(left<right) {
        # 6472 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6475 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6478 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6481 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int short_compare(short left, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_compare"; neo_current_frame = &fr;
    # 6496 "/usr/local/include/neo-c.h"
    if(left<right) {
        # 6487 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6490 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6493 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6496 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int int_compare(int left, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_compare"; neo_current_frame = &fr;
    # 6511 "/usr/local/include/neo-c.h"
    if(left<right) {
        # 6502 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6505 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6508 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6511 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int long_compare(long left, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_compare"; neo_current_frame = &fr;
    # 6526 "/usr/local/include/neo-c.h"
    if(left<right) {
        # 6517 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6520 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6523 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6526 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int size_t_compare(unsigned long  int  left  , unsigned long  int  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_compare"; neo_current_frame = &fr;
    # 6541 "/usr/local/include/neo-c.h"
    if(left<right) {
        # 6532 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6535 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6538 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6541 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int float_compare(float left, float right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_compare"; neo_current_frame = &fr;
    # 6556 "/usr/local/include/neo-c.h"
    if(left<right) {
        # 6547 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6550 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6553 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6556 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int double_compare(double left, double right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_compare"; neo_current_frame = &fr;
    # 6571 "/usr/local/include/neo-c.h"
    if(left<right) {
        # 6562 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6565 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6568 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6571 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int string_compare(char* left, char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_compare"; neo_current_frame = &fr;
    # 6586 "/usr/local/include/neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 6577 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
        # 6580 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
        # 6583 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 6586 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

int charp_compare(char* left, char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_compare"; neo_current_frame = &fr;
    # 6601 "/usr/local/include/neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 6592 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
        # 6595 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
        # 6598 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 6601 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

char*  charp_puts(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_puts"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6612 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 6610 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6610))), "/usr/local/include/neo-c.h", 6610, 616);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6610, 617));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6610, 618));
        return __result_obj__0;
    }
    # 6612 "/usr/local/include/neo-c.h"
    puts(self);
    # 6614 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/usr/local/include/neo-c.h",6614))), "/usr/local/include/neo-c.h", 6614, 619);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6614, 620));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6614, 621));
    return __result_obj__0;
}

char*  charp_print(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_print"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6622 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 6620 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6620))), "/usr/local/include/neo-c.h", 6620, 622);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6620, 623));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6620, 624));
        return __result_obj__0;
    }
    # 6622 "/usr/local/include/neo-c.h"
    printf("%s",self);
    # 6624 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/usr/local/include/neo-c.h",6624))), "/usr/local/include/neo-c.h", 6624, 625);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6624, 626));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6624, 627));
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
    # 6654 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 6652 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6652))), "/usr/local/include/neo-c.h", 6652, 628);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6652, 629));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6652, 630));
        return __result_obj__0;
    }
    # 6654 "/usr/local/include/neo-c.h"
    # 6656 "/usr/local/include/neo-c.h"
    # 6657 "/usr/local/include/neo-c.h"
    __builtin_va_start(args,self);
    # 6658 "/usr/local/include/neo-c.h"
    vasprintf(&msg2,self,args);
    # 6659 "/usr/local/include/neo-c.h"
    __builtin_va_end(args);
    # 6661 "/usr/local/include/neo-c.h"
    printf("%s",msg2);
    # 6663 "/usr/local/include/neo-c.h"
    free(msg2);
    # 6665 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/usr/local/include/neo-c.h",6665))), "/usr/local/include/neo-c.h", 6665, 631);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6665, 632));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6665, 633));
    return __result_obj__0;
}

int int_printf(int self, char* msg)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_printf"; neo_current_frame = &fr;
    # 6674 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 6672 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return self;
    }
    # 6674 "/usr/local/include/neo-c.h"
    printf(msg,self);
    # 6676 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long long_printf(long self, char* msg)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_printf"; neo_current_frame = &fr;
    # 6684 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 6682 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return self;
    }
    # 6684 "/usr/local/include/neo-c.h"
    printf(msg,self);
    # 6686 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

void int_times(int self, void* parent, void (*block)(void*,int))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_times"; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    # 6694 "/usr/local/include/neo-c.h"
    for(i=0    ;i<self;i++){
        # 6692 "/usr/local/include/neo-c.h"
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
    # 6706 "/usr/local/include/neo-c.h"
    if(f==((void*)0)) {
        # 6704 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/usr/local/include/neo-c.h", 6704, 634, "buffer"), "/usr/local/include/neo-c.h", 6704, 635), "", 0))), "/usr/local/include/neo-c.h", 6704, 636);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 6704, 637);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6704, 638);
        return __result_obj__0;
    }
    # 6706 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 6706, 639, "struct buffer* "), "/usr/local/include/neo-c.h", 6706, 640)), "/usr/local/include/neo-c.h", 6706, 641);
    # 6720 "/usr/local/include/neo-c.h"
    while(1) {
        # 6709 "/usr/local/include/neo-c.h"
        char buf2[8192];
        memset(&buf2, 0, sizeof(buf2));
        # 6711 "/usr/local/include/neo-c.h"
        size=fread(buf2,1,8192,f);
        # 6713 "/usr/local/include/neo-c.h"
        buffer_append(buf,buf2,size);
        # 6718 "/usr/local/include/neo-c.h"
        if(size<8192) {
            # 6716 "/usr/local/include/neo-c.h"
            break;
        }
    }
    # 6720 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(buf, "/usr/local/include/neo-c.h", 6720, 642);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6720, 643);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6720, 644);
    return __result_obj__0;
}

int FILE_write(struct _IO_FILE*  f  , const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_write"; neo_current_frame = &fr;
    # 6729 "/usr/local/include/neo-c.h"
    if(f==((void*)0)||str==((void*)0)) {
        # 6726 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 6729 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return fwrite(str,strlen(str),1,f);
    neo_current_frame = fr.prev;
}

int FILE_fclose(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fclose"; neo_current_frame = &fr;
    int result;
    memset(&result, 0, sizeof(result));
    # 6738 "/usr/local/include/neo-c.h"
    if(f==((void*)0)) {
        # 6735 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 6738 "/usr/local/include/neo-c.h"
    result=fclose(f);
    # 6744 "/usr/local/include/neo-c.h"
    if(result<0) {
        # 6741 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return result;
    }
    # 6744 "/usr/local/include/neo-c.h"
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
    # 6752 "/usr/local/include/neo-c.h"
    if(f==((void*)0)||msg==((void*)0)) {
        # 6750 "/usr/local/include/neo-c.h"
                __result_obj__0 = f;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 6752 "/usr/local/include/neo-c.h"
    char msg2[1024*2*2*2];
    memset(&msg2, 0, sizeof(msg2));
    # 6754 "/usr/local/include/neo-c.h"
    # 6755 "/usr/local/include/neo-c.h"
    __builtin_va_start(args,msg);
    # 6756 "/usr/local/include/neo-c.h"
    vsnprintf(msg2,1024*2*2*2,msg,args);
    # 6757 "/usr/local/include/neo-c.h"
    __builtin_va_end(args);
    # 6759 "/usr/local/include/neo-c.h"
    result=fprintf(f,"%s",msg2);
    # 6765 "/usr/local/include/neo-c.h"
    if(result<0) {
        # 6762 "/usr/local/include/neo-c.h"
                __result_obj__0 = f;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 6765 "/usr/local/include/neo-c.h"
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
    # 6774 "/usr/local/include/neo-c.h"
    if(self==((void*)0)||file_name==((void*)0)) {
        # 6771 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 6774 "/usr/local/include/neo-c.h"
    # 6782 "/usr/local/include/neo-c.h"
    if(append) {
        # 6776 "/usr/local/include/neo-c.h"
        f=fopen(file_name,"a");
    }
    else {
        # 6779 "/usr/local/include/neo-c.h"
        f=fopen(file_name,"w");
    }
    # 6786 "/usr/local/include/neo-c.h"
    if(f==((void*)0)) {
        # 6783 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 6786 "/usr/local/include/neo-c.h"
    result=fwrite(self,strlen(self),1,f);
    # 6792 "/usr/local/include/neo-c.h"
    if(result!=1) {
        # 6789 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return result;
    }
    # 6794 "/usr/local/include/neo-c.h"
    result2=fclose(f);
    # 6798 "/usr/local/include/neo-c.h"
    if(result2<0) {
        # 6795 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return result2;
    }
    # 6798 "/usr/local/include/neo-c.h"
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
    # 6807 "/usr/local/include/neo-c.h"
    if(file_name==((void*)0)) {
        # 6804 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/usr/local/include/neo-c.h", 6804, 645, "buffer"), "/usr/local/include/neo-c.h", 6804, 646), "", 0))), "/usr/local/include/neo-c.h", 6804, 647);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 6804, 648);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6804, 649);
        return __result_obj__0;
    }
    # 6807 "/usr/local/include/neo-c.h"
    f=fopen(file_name,"r");
    # 6813 "/usr/local/include/neo-c.h"
    if(f==((void*)0)) {
        # 6810 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/usr/local/include/neo-c.h", 6810, 650, "buffer"), "/usr/local/include/neo-c.h", 6810, 651), "", 0))), "/usr/local/include/neo-c.h", 6810, 652);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 6810, 653);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6810, 654);
        return __result_obj__0;
    }
    # 6813 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 6813, 655, "struct buffer* "), "/usr/local/include/neo-c.h", 6813, 656)), "/usr/local/include/neo-c.h", 6813, 657);
    # 6827 "/usr/local/include/neo-c.h"
    while(1) {
        # 6816 "/usr/local/include/neo-c.h"
        char buf2[8192];
        memset(&buf2, 0, sizeof(buf2));
        # 6818 "/usr/local/include/neo-c.h"
        size=fread(buf2,1,8192,f);
        # 6820 "/usr/local/include/neo-c.h"
        buffer_append(buf,buf2,size);
        # 6825 "/usr/local/include/neo-c.h"
        if(size<8192) {
            # 6823 "/usr/local/include/neo-c.h"
            break;
        }
    }
    # 6829 "/usr/local/include/neo-c.h"
    result2=fclose(f);
    # 6833 "/usr/local/include/neo-c.h"
    if(result2<0) {
        # 6830 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/usr/local/include/neo-c.h", 6830, 658, "buffer"), "/usr/local/include/neo-c.h", 6830, 659), "", 0))), "/usr/local/include/neo-c.h", 6830, 660);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 6830, 661);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 6830, 662);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6830, 663);
        return __result_obj__0;
    }
    # 6833 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(buf, "/usr/local/include/neo-c.h", 6833, 664);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6833, 665);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6833, 666);
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
    # 6838 "/usr/local/include/neo-c.h"
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6838, 667, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 6838, 668)), "/usr/local/include/neo-c.h", 6838, 669);
    # 6844 "/usr/local/include/neo-c.h"
    if(f==((void*)0)) {
        # 6841 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6841, 670);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6841, 671);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6841, 672);
        return __result_obj__0;
    }
    # 6854 "/usr/local/include/neo-c.h"
    while(1) {
        # 6845 "/usr/local/include/neo-c.h"
        char buf[8192];
        memset(&buf, 0, sizeof(buf));
        # 6851 "/usr/local/include/neo-c.h"
        if(fgets(buf,8192,f)==((void*)0)) {
            # 6848 "/usr/local/include/neo-c.h"
            break;
        }
        # 6851 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(buf,"/usr/local/include/neo-c.h",6851), "/usr/local/include/neo-c.h", 6851, 673));
    }
    # 6854 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6854, 674);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6854, 675);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6854, 676);
    return __result_obj__0;
}

_Bool xiswalpha(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalpha"; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    # 6859 "/usr/local/include/neo-c.h"
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 6860 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xiswblank(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswblank"; neo_current_frame = &fr;
    # 6865 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xiswdigit(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswdigit"; neo_current_frame = &fr;
    # 6870 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xiswalnum(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalnum"; neo_current_frame = &fr;
    # 6875 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return xiswalpha(c)||xiswdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xiswascii(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswascii"; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    # 6880 "/usr/local/include/neo-c.h"
    result=(c>=32&&c<=126);
    # 6881 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

int string_index(char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_index"; neo_current_frame = &fr;
    # 7218 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return charp_index(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int charp_index(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index"; neo_current_frame = &fr;
    char* head;
    memset(&head, 0, sizeof(head));
    # 7227 "/usr/local/include/neo-c.h"
    if(str==((void*)0)||search_str==((void*)0)) {
        # 7224 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 7227 "/usr/local/include/neo-c.h"
    head=strstr(str,search_str);
    # 7233 "/usr/local/include/neo-c.h"
    if(head==((void*)0)) {
        # 7230 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 7233 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return head-str;
    neo_current_frame = fr.prev;
}

