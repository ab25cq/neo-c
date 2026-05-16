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
    struct neo_frame*  prev  ;
    char* fun_name;
    unsigned long  int frame_id;
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

struct tuple2$2int$_Bool$
{
    int v1;
    _Bool v2;
};

/// variable definition ///
extern struct _IO_FILE*  stdin  ;
extern struct _IO_FILE*  stdout  ;
extern struct _IO_FILE*  stderr  ;
extern char* program_invocation_name;
extern char* program_invocation_short_name;
extern struct neo_frame*  neo_current_frame  ;

extern unsigned long  int neo_frame_id;

extern struct sMemHeader*  gAllocMem  ;

extern struct sMemHeader*  gFreeMem  ;

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
struct tuple2$2int$_Bool$* get_int(_Bool ok);
static struct tuple2$2int$_Bool$* tuple2$2int$_Bool$_initialize(struct tuple2$2int$_Bool$* self, int v1, _Bool v2);
static void tuple2$2int$_Bool$$p_finalize(struct tuple2$2int$_Bool$* self);
int ignore_error(_Bool ok);
int main();
_Bool neo_frame_is_alive(unsigned long  int frame_id);
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

unsigned long  int neo_frame_id=0;

struct sMemHeader*  gAllocMem  =(void*)0;

struct sMemHeader*  gFreeMem  =(void*)0;

int gNumAlloc=0;

int gNumFree=0;

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
struct tuple2$2int$_Bool$* get_int(_Bool ok)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "get_int"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct tuple2$2int$_Bool$* __result_obj__0;
    if(ok) {
                __result_obj__0 = (struct tuple2$2int$_Bool$*)come_increment_ref_count(((struct tuple2$2int$_Bool$*)(__right_value1=tuple2$2int$_Bool$_initialize((struct tuple2$2int$_Bool$*)come_increment_ref_count((struct tuple2$2int$_Bool$*)come_calloc(1, sizeof(struct tuple2$2int$_Bool$)*(1), "code/test_result_ignore.nc", 6, 1, "struct tuple2$2int$_Bool$"), "code/test_result_ignore.nc", 5, 5),10,(_Bool)0))), "code/test_result_ignore.nc", 6, 6);
        come_call_finalizer(tuple2$2int$_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "code/test_result_ignore.nc}", 5, 7);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple2$2int$_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "code/test_result_ignore.nc}", 6, 8);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2int$_Bool$*)come_increment_ref_count(((struct tuple2$2int$_Bool$*)(__right_value1=tuple2$2int$_Bool$_initialize((struct tuple2$2int$_Bool$*)come_increment_ref_count((struct tuple2$2int$_Bool$*)come_calloc(1, sizeof(struct tuple2$2int$_Bool$)*(1), "code/test_result_ignore.nc", 9, 9, "struct tuple2$2int$_Bool$"), "code/test_result_ignore.nc", 9, 10),0,(_Bool)1))), "code/test_result_ignore.nc", 9, 11);
    come_call_finalizer(tuple2$2int$_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "code/test_result_ignore.nc}", 9, 12);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2int$_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "code/test_result_ignore.nc}", 9, 13);
    return __result_obj__0;
}

static struct tuple2$2int$_Bool$* tuple2$2int$_Bool$_initialize(struct tuple2$2int$_Bool$* self, int v1, _Bool v2)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2int$_Bool$_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct tuple2$2int$_Bool$* __result_obj__0;
    self->v1=v1;
    self->v2=v2;
        __result_obj__0 = (struct tuple2$2int$_Bool$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 4482, 2);
    come_call_finalizer(tuple2$2int$_Bool$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4482, 3);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2int$_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4482, 4);
    return __result_obj__0;
}

static void tuple2$2int$_Bool$$p_finalize(struct tuple2$2int$_Bool$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2int$_Bool$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

int ignore_error(_Bool ok)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "ignore_error"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct tuple2$2int$_Bool$* Value;
    _Bool _conditional_value_X0;
    int _if_result_value1;
    int n;
    int __result_obj__0;
    memset(&Value, 0, sizeof(Value));
    memset(&_if_result_value1, 0, sizeof(_if_result_value1));
    memset(&n, 0, sizeof(n));
    Value=(struct tuple2$2int$_Bool$*)come_increment_ref_count(get_int(ok), "code/test_result_ignore.nc", 14, 14);
    n=    ({    if(({(_conditional_value_X0=(Value->v2));_conditional_value_X0;})) {
        Value->v1=77;
        _if_result_value1 = Value->v1;
    }
    else {
        _if_result_value1 = Value->v1;
    }
    _if_result_value1;});
        __result_obj__0 = n+1;
    come_call_finalizer(tuple2$2int$_Bool$$p_finalize, Value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "code/test_result_ignore.nc}", 18, 15);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int main()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "main"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int __result_obj__0;
    xassert("ignore result ok",ignore_error((_Bool)1)==11);
    xassert("ignore result err",ignore_error((_Bool)0)==78);
        __result_obj__0 = 0;
    neo_current_frame = fr.prev;
    come_memleak_checker();
    return __result_obj__0;
}

_Bool neo_frame_is_alive(unsigned long  int frame_id)
{
    struct neo_frame*  f  ;
    memset(&f, 0, sizeof(f));
    f=neo_current_frame;
    while(f) {
        if(f->frame_id==frame_id) {
                        return (_Bool)1;
        }
        f=f->prev;
    }
        return (_Bool)0;
}

void stackframe()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct neo_frame*  f  ;
    char* fun_name;
    memset(&f, 0, sizeof(f));
    memset(&fun_name, 0, sizeof(fun_name));
    f=neo_current_frame;
    while(f) {
        fun_name=f->fun_name;
        printf("%s\n",fun_name);
        f=f->prev;
    }
    neo_current_frame = fr.prev;
}

void stackframe2(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe2"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    struct neo_frame*  f  ;
    char* fun_name;
    memset(&it, 0, sizeof(it));
    memset(&f, 0, sizeof(f));
    memset(&fun_name, 0, sizeof(fun_name));
    if(come_is_alive(mem)&&mem) {
        it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
        printf("allocated at %s %d #%d. type is %s.\n",it->sname,it->sline,it->id,it->class_name);
    }
    f=neo_current_frame;
    while(f) {
        fun_name=f->fun_name;
        printf("%s\n",fun_name);
        f=f->prev;
    }
    neo_current_frame = fr.prev;
}

_Bool die(const char* msg, char* sname, int sline)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "die"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    puts(((char* )(__right_value6=charp_operator_add(((char*)(__right_value5=xsprintf("\%s \%s : ",((char* )(__right_value3=charp_to_string(sname))),((char* )(__right_value4=int_to_string(sline)))))),msg))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 223, 16));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 223, 17));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 223, 18));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 223, 19));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 223, 20));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 223, 21));
    stackframe();
    exit(4);
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

void come_memleak_checker()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_memleak_checker"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    int n;
    _Bool flag;
    int i;
    memset(&it, 0, sizeof(it));
    memset(&n, 0, sizeof(n));
    memset(&flag, 0, sizeof(flag));
    memset(&i, 0, sizeof(i));
    it=gAllocMem;
    n=0;
    while(it) {
        n++;
        flag=(_Bool)0;
        printf("#%d ",n);
        if(it->class_name) {
            printf("%p (%s) %s %d: ",(char*)it+sizeof(struct sMemHeader )+sizeof(unsigned long  int )+sizeof(unsigned long  int ),it->class_name,it->sname,it->sline);
        }
        for(i=0        ;i<8;i++){
            if(it->fun_name[i]) {
                printf("%s, ",it->fun_name[i]);
                flag=(_Bool)1;
            }
        }
        if(flag) {
            puts("");
        }
        it=it->next;
    }
    if(n>0) {
        printf("%d memory leaks. %d alloc, %d free.\n",n,gNumAlloc,gNumFree);
    }
    neo_current_frame = fr.prev;
}

void* alloc_from_pages(unsigned long  int  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "alloc_from_pages"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    struct sMemHeader*  it_prev  ;
    void* __result_obj__0;
    struct sMemHeader*  it_0  ;
    memset(&it, 0, sizeof(it));
    memset(&it_prev, 0, sizeof(it_prev));
    memset(&it_0, 0, sizeof(it_0));
    it=gFreeMem;
    it_prev=((void*)0);
    while(it) {
        if(size<=it->alloc_size) {
            if(it_prev==((void*)0)) {
                gFreeMem=((void*)0);
            }
            else {
                it_prev->free_next=it->free_next;
            }
            memset(it,0,size);
                        __result_obj__0 = it;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        it_prev=it;
        it=it->free_next;
    }
    it_0=(struct sMemHeader* )calloc(1,size);
    it_0->alloc_size=size;
        __result_obj__0 = it_0;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_free_mem_of_heap_pool(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_free_mem_of_heap_pool"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    struct sMemHeader*  prev_it  ;
    struct sMemHeader*  next_it  ;
    unsigned long  int  size  ;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    memset(&next_it, 0, sizeof(next_it));
    memset(&size, 0, sizeof(size));
    if(mem) {
        it=(struct sMemHeader* )((char*)mem-sizeof(struct sMemHeader ));
        if(it->allocated!=177783) {
                        neo_current_frame = fr.prev;
            return;
        }
        it->allocated=0;
        prev_it=it->prev;
        next_it=it->next;
        if(gAllocMem==it) {
            gAllocMem=next_it;
            if(gAllocMem) {
                gAllocMem->prev=((void*)0);
            }
        }
        else {
            if(prev_it) {
                prev_it->next=next_it;
            }
            if(next_it) {
                next_it->prev=prev_it;
            }
        }
        size=it->size;
        it->free_next=gFreeMem;
        gFreeMem=it;
        it->alive=0;
        gNumFree++;
    }
    neo_current_frame = fr.prev;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int  compiletime_size  , unsigned long  int  size  , const char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_alloc_mem_from_heap_pool"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
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
    size2=size+sizeof(struct sMemHeader );
    size2=(size2+7&~0x7);
    result=alloc_from_pages(size2);
    it=result;
    it->allocated=177783;
    it->compiletime_size=compiletime_size;
    it->size=size2;
    it->free_next=((void*)0);
    it->alive=1;
    n=0;
    f=neo_current_frame;
    while(f&&n<8) {
        fun_name=f->fun_name;
        it->fun_name[n]=fun_name;
        n++;
        f=f->prev;
    }
    it->next=gAllocMem;
    it->prev=((void*)0);
    it->class_name=class_name;
    it->sname=sname;
    it->sline=sline;
    it->id=id;
    if(gAllocMem) {
        gAllocMem->prev=it;
    }
    gAllocMem=it;
    gNumAlloc++;
        __result_obj__0 = (char*)result+sizeof(struct sMemHeader );
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* come_dynamic_typeof(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_dynamic_typeof"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    char* __result_obj__0;
    memset(&it, 0, sizeof(it));
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe2(mem);
        exit(3);
    }
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
    if(it->allocated!=177783) {
        printf("invalid heap object(%p)(1)\n",it);
        stackframe2(mem);
        exit(2);
    }
        __result_obj__0 = (char*)it->class_name;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

unsigned long  int  dynamic_sizeof(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "dynamic_sizeof"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    unsigned long  int  size  ;
    memset(&it, 0, sizeof(it));
    memset(&size, 0, sizeof(size));
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe2(mem);
        exit(3);
    }
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
    if(it->allocated!=177783) {
        printf("invalid heap object(%p)(1)\n",it);
        stackframe2(mem);
        exit(2);
    }
    size=it->compiletime_size;
        neo_current_frame = fr.prev;
    return size;
    neo_current_frame = fr.prev;
}

void* come_calloc(unsigned long  int  count  , unsigned long  int  size  , const char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_calloc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* mem;
    unsigned long  int*  ref_count  ;
    unsigned long  int*  size2  ;
    void* __result_obj__0;
    memset(&mem, 0, sizeof(mem));
    memset(&ref_count, 0, sizeof(ref_count));
    memset(&size2, 0, sizeof(size2));
    mem=come_alloc_mem_from_heap_pool(count*size,sizeof(unsigned long  int )+sizeof(unsigned long  int )+count*size,sname,sline,id,class_name);
    ref_count=(unsigned long  int* )mem;
    *ref_count=0;
    size2=(unsigned long  int* )(mem+sizeof(unsigned long  int ));
    *size2=size*count+sizeof(unsigned long  int )+sizeof(unsigned long  int );
        __result_obj__0 = mem+sizeof(unsigned long  int )+sizeof(unsigned long  int );
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool come_is_alive(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_is_alive"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    memset(&it, 0, sizeof(it));
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int )-sizeof(struct sMemHeader ));
        neo_current_frame = fr.prev;
    return it->alive;
    neo_current_frame = fr.prev;
}

void come_free(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_free"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe2(mem);
        exit(3);
    }
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    come_free_mem_of_heap_pool((char*)ref_count);
    neo_current_frame = fr.prev;
}

void* come_memdup(void* block, char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_memdup"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
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
    if(block==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(block)) {
        puts(((char*)(__right_value3=xsprintf("invalid heap object. \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 510, 22));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 510, 23));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 510, 24));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 510, 25));
        stackframe2(block);
        exit(3);
    }
    mem=(char*)block-sizeof(unsigned long  int )-sizeof(unsigned long  int );
    size_p=(unsigned long  int* )(mem+sizeof(unsigned long  int ));
    size=*size_p-sizeof(unsigned long  int )-sizeof(unsigned long  int );
    result=come_calloc(1,size,sname,sline,id,class_name);
    memcpy(result,block,size);
        __result_obj__0 = result;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_increment_ref_count(void* mem, char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_increment_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    unsigned long  int*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(mem)) {
        puts(((char*)(__right_value3=xsprintf("invalid heap object \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 536, 26));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 536, 27));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 536, 28));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 536, 29));
        stackframe2(mem);
        exit(3);
    }
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    (*ref_count)++;
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_print_ref_count(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_print_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    unsigned long  int*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe();
        exit(3);
    }
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    printf("ref_count %ld\n",*ref_count);
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int come_get_ref_count(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_get_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  int*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe();
        exit(3);
    }
    ref_count=(unsigned long  int* )((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
        neo_current_frame = fr.prev;
    return *ref_count;
    neo_current_frame = fr.prev;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj, char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_decrement_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
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
    if(result_obj) {
        if(mem==result_obj) {
                        __result_obj__0 = mem;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    if(mem==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(mem)) {
        puts(((char*)(__right_value3=xsprintf("invalid heap object \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 599, 30));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 599, 31));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 599, 32));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 599, 33));
        stackframe2(mem);
        exit(3);
    }
    ref_count=(long*)((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
    if(!no_decrement) {
        (*ref_count)--;
    }
    count=*ref_count;
    if(!no_free&&count<=0) {
        if(protocol_obj&&protocol_fun) {
            finalizer=(void (*)(void*))protocol_fun;
            finalizer(protocol_obj);
            come_free(protocol_obj);
        }
        come_free(mem);
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj, char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_call_finalizer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
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
    if(result_obj) {
        if(mem==result_obj) {
                        neo_current_frame = fr.prev;
            return;
        }
    }
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj&&protocol_fun) {
                finalizer=(void (*)(void*))protocol_fun;
                finalizer(protocol_obj);
            }
            finalizer_1=(void (*)(void*))fun;
            finalizer_1(mem);
        }
        else {
            if(protocol_obj&&protocol_fun) {
                finalizer_2=(void (*)(void*))protocol_fun;
                finalizer_2(protocol_obj);
            }
        }
    }
    else {
        if(!come_is_alive(mem)) {
            puts(((char*)(__right_value3=xsprintf("invalid heap object. \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 656, 34));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 656, 35));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 656, 36));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 656, 37));
            stackframe2(mem);
            exit(3);
        }
        ref_count=(long*)((char*)mem-sizeof(unsigned long  int )-sizeof(unsigned long  int ));
        if(!no_decrement) {
            (*ref_count)--;
        }
        count=*ref_count;
        if(!no_free&&count<=0) {
            if(mem) {
                if(fun) {
                    if(protocol_obj&&protocol_fun) {
                        finalizer_3=(void (*)(void*))protocol_fun;
                        finalizer_3(protocol_obj);
                        come_free(protocol_obj);
                    }
                    if(fun) {
                        finalizer_4=(void (*)(void*))fun;
                        finalizer_4(mem);
                    }
                }
                else {
                    if(protocol_obj&&protocol_fun) {
                        finalizer_5=(void (*)(void*))protocol_fun;
                        finalizer_5(protocol_obj);
                        come_free(protocol_obj);
                    }
                }
                come_free(mem);
            }
        }
    }
    neo_current_frame = fr.prev;
}

void xassert(const char* msg, _Bool test)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xassert"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    printf("%s...",msg);
    if(!test) {
        puts("false");
        stackframe();
        exit(2);
    }
    puts("ok");
    neo_current_frame = fr.prev;
}

void* come_null_checker(void* mem, const char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_null_checker"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    if(mem) {
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    puts(((char*)(__right_value3=xsprintf("null pointer exception \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 711, 38));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 711, 39));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 711, 40));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 711, 41));
    stackframe();
    exit(1);
    neo_current_frame = fr.prev;
}

void* come_heap_checker(void* mem, const char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_heap_checker"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    if(mem) {
        if(come_is_alive(mem)) {
                        __result_obj__0 = mem;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else {
            puts(((char*)(__right_value3=xsprintf("heap pointer exception \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 723, 42));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 723, 43));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 723, 44));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 723, 45));
            stackframe();
            exit(1);
        }
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    puts(((char*)(__right_value3=xsprintf("null pointer exception \%s \%s \%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 729, 46));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 729, 47));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 729, 48));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 729, 49));
    stackframe();
    exit(1);
    neo_current_frame = fr.prev;
}

char*  __builtin_string(const char* str, char* sname, int sline)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__builtin_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "/home/ab25cq/neo-c/neo-c.h", 737, 50);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 737, 51));
        return __result_obj__0;
    }
    len=strlen(str)+1;
    result=come_calloc(1,sizeof(char)*(len),sname,sline,0,"string");
    strncpy(result,str,len);
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 746, 52);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 746, 53));
    return __result_obj__0;
}

struct buffer*  buffer_initialize(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj1;
    struct buffer*  __result_obj__0  ;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/home/ab25cq/neo-c/neo-c.h", 4857, 54, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4857, 56);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4857, 55);
    ((char*)self->buf)[0]=0;
    self->len=0;
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 4861, 57);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4861, 58);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4861, 59);
    return __result_obj__0;
}

struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  int  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize_with_value"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj2;
    struct buffer*  __result_obj__0  ;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/home/ab25cq/neo-c/neo-c.h", 4867, 60, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4867, 62);
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4867, 61);
    ((char*)self->buf)[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 4873, 63);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4873, 64);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4873, 65);
    return __result_obj__0;
}

void buffer_finalize(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self&&self->buf) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4878, 66));
    }
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_clone(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct buffer*  result  ;
    char* __dec_obj3;
    memset(&result, 0, sizeof(result));
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((void*)0), "/home/ab25cq/neo-c/neo-c.h", 4884, 67);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4884, 68);
        return __result_obj__0;
    }
    result=(struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 4887, 69, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 4887, 70);
    result->size=self->size;
    __right_value0 = (void*)0;
    __dec_obj3=result->buf,
    result->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/home/ab25cq/neo-c/neo-c.h", 4890, 71, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4890, 73);
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4890, 72);
    result->len=self->len;
    memcpy(result->buf,self->buf,self->len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 4894, 74);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4894, 75);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4894, 76);
    return __result_obj__0;
}

_Bool buffer_equals(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    _Bool __result_obj__0;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
        __result_obj__0 = string_equals(((char* )(__right_value0=buffer_to_string(left))),((char* )(__right_value1=buffer_to_string(right))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4906, 77));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4906, 78));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_length(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
    neo_current_frame = fr.prev;
}

void buffer_reset(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_reset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    ((char*)self->buf)[0]=0;
    self->len=0;
    neo_current_frame = fr.prev;
}

void buffer_trim(struct buffer*  self  , int len)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_trim"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    self->len-=len;
    if(self->len>=0) {
        ((char*)self->buf)[self->len]=0;
    }
    else {
        self->len=0;
        ((char*)self->buf)[0]=0;
    }
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_append(struct buffer*  self  , const char* mem, unsigned long  int  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj4;
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)||mem==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 4948, 79, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4948, 80);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 4952, 81, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4952, 83);
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4952, 82);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4958, 84));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_char(struct buffer*  self  , char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_char"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj5;
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len+1+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 4972, 85, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4972, 86);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+10+1)*2;
        __right_value0 = (void*)0;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 4976, 87, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4976, 89);
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4976, 88);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4982, 90));
    }
    ((char*)self->buf)[self->len]=c;
    self->len++;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_str(struct buffer*  self  , const char* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_str"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
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
    if(self==((void*)0)||mem==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    size=strlen(mem);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 4999, 91, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4999, 92);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5002, 93, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5002, 95);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5002, 94);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5008, 96));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_format(struct buffer*  self  , const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_format"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
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
    if(self==((void*)0)||msg==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&result,msg,args);
    __builtin_va_end(args);
    if(len<0) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=(char* )come_increment_ref_count(__builtin_string(result,"/home/ab25cq/neo-c/neo-c.h",5070), "/home/ab25cq/neo-c/neo-c.h", 5070, 97);
    size=strlen(mem);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        __right_value0 = (void*)0;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5075, 98, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5075, 99);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5078, 100, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5078, 102);
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5078, 101);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5084, 103));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
    free(result);
        __result_obj__0 = self;
    (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5090, 104));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_nullterminated_str(struct buffer*  self  , const char* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_nullterminated_str"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
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
    if(self==((void*)0)||mem==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    size=strlen(mem)+1;
    if(self->len+size+1+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5102, 105, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5102, 106);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5105, 107, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5105, 109);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5105, 108);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5111, 110));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_int(struct buffer*  self  , int value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_int"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
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
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(int);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5129, 111, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5129, 112);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5132, 113, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5132, 115);
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5132, 114);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5138, 116));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_long(struct buffer*  self  , long value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_long"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
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
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(long);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5155, 117, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5155, 118);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5158, 119, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5158, 121);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5158, 120);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5164, 122));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_short(struct buffer*  self  , short value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_short"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
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
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(short);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5182, 123, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5182, 124);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5185, 125, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5185, 127);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5185, 126);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5191, 128));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_alignment(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_alignment"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
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
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    len=self->len;
    len=(len+3)&~3;
    if(len>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5209, 129, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5209, 130);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+1+1)*2;
        __right_value0 = (void*)0;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5212, 131, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5212, 133);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5212, 132);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5218, 134));
    }
    for(i=self->len    ;i<len;i++){
        ((char*)self->buf)[i]=0;
    }
    self->len=len;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_compare(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return strcmp(left->buf,right->buf);
    neo_current_frame = fr.prev;
}

struct buffer*  charp_to_buffer(const char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5244, 135, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5244, 136)), "/home/ab25cq/neo-c/neo-c.h", 5244, 137);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5247, 138);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5247, 139);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5247, 140);
        return __result_obj__0;
    }
    buffer_append_str(result,self);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5252, 141);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5252, 142);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5252, 143);
    return __result_obj__0;
}

char*  buffer_to_string(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5258))), "/home/ab25cq/neo-c/neo-c.h", 5258, 144);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5258, 145));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5258, 146));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self->buf,"/home/ab25cq/neo-c/neo-c.h",5261))), "/home/ab25cq/neo-c/neo-c.h", 5261, 147);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5261, 148));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5261, 149));
    return __result_obj__0;
}

unsigned char* buffer_head_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_head_pointer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned char* __result_obj__0;
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = (unsigned char*)self->buf;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  chara_to_buffer(char* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5274, 150, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5274, 151)), "/home/ab25cq/neo-c/neo-c.h", 5274, 152);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5276, 153);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5276, 154);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5276, 155);
        return __result_obj__0;
    }
    buffer_append(result,self,sizeof(char)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5279, 156);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5279, 157);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5279, 158);
    return __result_obj__0;
}

struct buffer*  charpa_to_buffer(char** self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    int i;
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5284, 159, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5284, 160)), "/home/ab25cq/neo-c/neo-c.h", 5284, 161);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5286, 162);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5286, 163);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5286, 164);
        return __result_obj__0;
    }
    for(i=0    ;i<len;i++){
        buffer_append(result,self[i],strlen(self[i]));
    }
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5291, 165);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5291, 166);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5291, 167);
    return __result_obj__0;
}

struct buffer*  shorta_to_buffer(short* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5296, 168, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5296, 169)), "/home/ab25cq/neo-c/neo-c.h", 5296, 170);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5298, 171);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5298, 172);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5298, 173);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(short)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5301, 174);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5301, 175);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5301, 176);
    return __result_obj__0;
}

struct buffer*  inta_to_buffer(int* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5306, 177, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5306, 178)), "/home/ab25cq/neo-c/neo-c.h", 5306, 179);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5308, 180);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5308, 181);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5308, 182);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(int)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5311, 183);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5311, 184);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5311, 185);
    return __result_obj__0;
}

struct buffer*  longa_to_buffer(long* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5316, 186, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5316, 187)), "/home/ab25cq/neo-c/neo-c.h", 5316, 188);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5318, 189);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5318, 190);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5318, 191);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(long)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5321, 192);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5321, 193);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5321, 194);
    return __result_obj__0;
}

struct buffer*  floata_to_buffer(float* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5326, 195, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5326, 196)), "/home/ab25cq/neo-c/neo-c.h", 5326, 197);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5328, 198);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5328, 199);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5328, 200);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(float)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5331, 201);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5331, 202);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5331, 203);
    return __result_obj__0;
}

struct buffer*  doublea_to_buffer(double* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5336, 204, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5336, 205)), "/home/ab25cq/neo-c/neo-c.h", 5336, 206);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5338, 207);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5338, 208);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5338, 209);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(double)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5341, 210);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5341, 211);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5341, 212);
    return __result_obj__0;
}

char*  buffer_printable(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_printable"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
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
    len=self->len;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), "/home/ab25cq/neo-c/neo-c.h", 5347, 213, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5347, 214);
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5350, 215);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5350, 216));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5350, 217));
        return __result_obj__0;
    }
    n=0;
    for(i=0    ;i<len;i++){
        c=self->buf[i];
        if((c>=0&&c<32)||c==127) {
            result[n++]=94;
            result[n++]=c+65-1;
        }
        else if(c>127) {
            result[n++]=63;
        }
        else {
            result[n++]=c;
        }
    }
    result[n]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5373, 218);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5373, 219));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5373, 220));
    return __result_obj__0;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1char$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1char$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1511, 228);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 22, 230);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 22, 231);
    return __result_obj__0;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$* litem;
    struct list_item$1char$* litem_6;
    struct list_item$1char$* litem_7;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_6, 0, sizeof(litem_6));
    memset(&litem_7, 0, sizeof(litem_7));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1633, 222, "struct list_item$1char$*"))), "/home/ab25cq/neo-c/neo-c.h", 1633, 223);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1643, 224, "struct list_item$1char$*"))), "/home/ab25cq/neo-c/neo-c.h", 1643, 225);
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        litem_6->item=item;
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1653, 226, "struct list_item$1char$*"))), "/home/ab25cq/neo-c/neo-c.h", 1653, 227);
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        litem_7->item=item;
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$$p_finalize(struct list$1char$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1char$* it;
    struct list_item$1char$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1520, 229);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1char$* chara_to_list(char* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$* __result_obj__0;
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value1=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc(1, sizeof(struct list$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5398, 221, "struct list$1char$*"), "/home/ab25cq/neo-c/neo-c.h", 5398, 232),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5398, 233);
    come_call_finalizer(list$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5398, 234);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5398, 235);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1char$p* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1char$p_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1511, 243);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 245);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 246);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$p* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$p* litem;
    struct list_item$1char$p* litem_8;
    struct list_item$1char$p* litem_9;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_8, 0, sizeof(litem_8));
    memset(&litem_9, 0, sizeof(litem_9));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 1633, 237, "struct list_item$1char$p*"))), "/home/ab25cq/neo-c/neo-c.h", 1633, 238);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 1643, 239, "struct list_item$1char$p*"))), "/home/ab25cq/neo-c/neo-c.h", 1643, 240);
        litem_8->prev=self->head;
        litem_8->next=((void*)0);
        litem_8->item=item;
        self->tail=litem_8;
        self->head->next=litem_8;
    }
    else {
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 1653, 241, "struct list_item$1char$p*"))), "/home/ab25cq/neo-c/neo-c.h", 1653, 242);
        litem_9->prev=self->tail;
        litem_9->next=((void*)0);
        litem_9->item=item;
        self->tail->next=litem_9;
        self->tail=litem_9;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$p$p_finalize(struct list$1char$p* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1char$p* it;
    struct list_item$1char$p* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1520, 244);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$p$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1char$p* charpa_to_list(char** self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$p* __result_obj__0;
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value1=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 5403, 236, "struct list$1char$p*"), "/home/ab25cq/neo-c/neo-c.h", 5403, 247),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5403, 248);
    come_call_finalizer(list$1char$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5403, 249);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5403, 250);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1short$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1short$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1511, 258);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 260);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 261);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1short$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1short$* litem;
    struct list_item$1short$* litem_10;
    struct list_item$1short$* litem_11;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_10, 0, sizeof(litem_10));
    memset(&litem_11, 0, sizeof(litem_11));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1633, 252, "struct list_item$1short$*"))), "/home/ab25cq/neo-c/neo-c.h", 1633, 253);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_10=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1643, 254, "struct list_item$1short$*"))), "/home/ab25cq/neo-c/neo-c.h", 1643, 255);
        litem_10->prev=self->head;
        litem_10->next=((void*)0);
        litem_10->item=item;
        self->tail=litem_10;
        self->head->next=litem_10;
    }
    else {
        __right_value0 = (void*)0;
        litem_11=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1653, 256, "struct list_item$1short$*"))), "/home/ab25cq/neo-c/neo-c.h", 1653, 257);
        litem_11->prev=self->tail;
        litem_11->next=((void*)0);
        litem_11->item=item;
        self->tail->next=litem_11;
        self->tail=litem_11;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1short$$p_finalize(struct list$1short$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1short$* it;
    struct list_item$1short$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1520, 259);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1short$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1short$* shorta_to_list(short* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1short$* __result_obj__0;
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value1=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc(1, sizeof(struct list$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5408, 251, "struct list$1short$*"), "/home/ab25cq/neo-c/neo-c.h", 5408, 262),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5408, 263);
    come_call_finalizer(list$1short$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5408, 264);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5408, 265);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1int$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1int$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1511, 273);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 275);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 276);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_12;
    struct list_item$1int$* litem_13;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_12, 0, sizeof(litem_12));
    memset(&litem_13, 0, sizeof(litem_13));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1633, 267, "struct list_item$1int$*"))), "/home/ab25cq/neo-c/neo-c.h", 1633, 268);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1643, 269, "struct list_item$1int$*"))), "/home/ab25cq/neo-c/neo-c.h", 1643, 270);
        litem_12->prev=self->head;
        litem_12->next=((void*)0);
        litem_12->item=item;
        self->tail=litem_12;
        self->head->next=litem_12;
    }
    else {
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1653, 271, "struct list_item$1int$*"))), "/home/ab25cq/neo-c/neo-c.h", 1653, 272);
        litem_13->prev=self->tail;
        litem_13->next=((void*)0);
        litem_13->item=item;
        self->tail->next=litem_13;
        self->tail=litem_13;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1520, 274);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1int$* inta_to_list(int* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* __result_obj__0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value1=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5413, 266, "struct list$1int$*"), "/home/ab25cq/neo-c/neo-c.h", 5413, 277),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5413, 278);
    come_call_finalizer(list$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5413, 279);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5413, 280);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1long$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1long$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1511, 288);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 290);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 291);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1long$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1long$* litem;
    struct list_item$1long$* litem_14;
    struct list_item$1long$* litem_15;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_14, 0, sizeof(litem_14));
    memset(&litem_15, 0, sizeof(litem_15));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1633, 282, "struct list_item$1long$*"))), "/home/ab25cq/neo-c/neo-c.h", 1633, 283);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_14=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1643, 284, "struct list_item$1long$*"))), "/home/ab25cq/neo-c/neo-c.h", 1643, 285);
        litem_14->prev=self->head;
        litem_14->next=((void*)0);
        litem_14->item=item;
        self->tail=litem_14;
        self->head->next=litem_14;
    }
    else {
        __right_value0 = (void*)0;
        litem_15=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1653, 286, "struct list_item$1long$*"))), "/home/ab25cq/neo-c/neo-c.h", 1653, 287);
        litem_15->prev=self->tail;
        litem_15->next=((void*)0);
        litem_15->item=item;
        self->tail->next=litem_15;
        self->tail=litem_15;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1long$$p_finalize(struct list$1long$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1long$* it;
    struct list_item$1long$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1520, 289);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1long$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1long$* longa_to_list(long* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1long$* __result_obj__0;
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value1=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc(1, sizeof(struct list$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5418, 281, "struct list$1long$*"), "/home/ab25cq/neo-c/neo-c.h", 5418, 292),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5418, 293);
    come_call_finalizer(list$1long$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5418, 294);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5418, 295);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1float$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1float$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1511, 303);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 305);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 306);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1float$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1float$* litem;
    struct list_item$1float$* litem_16;
    struct list_item$1float$* litem_17;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_16, 0, sizeof(litem_16));
    memset(&litem_17, 0, sizeof(litem_17));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1633, 297, "struct list_item$1float$*"))), "/home/ab25cq/neo-c/neo-c.h", 1633, 298);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_16=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1643, 299, "struct list_item$1float$*"))), "/home/ab25cq/neo-c/neo-c.h", 1643, 300);
        litem_16->prev=self->head;
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head->next=litem_16;
    }
    else {
        __right_value0 = (void*)0;
        litem_17=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1653, 301, "struct list_item$1float$*"))), "/home/ab25cq/neo-c/neo-c.h", 1653, 302);
        litem_17->prev=self->tail;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail->next=litem_17;
        self->tail=litem_17;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1float$$p_finalize(struct list$1float$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1float$* it;
    struct list_item$1float$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1520, 304);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1float$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1float$* floata_to_list(float* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1float$* __result_obj__0;
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value1=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc(1, sizeof(struct list$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5423, 296, "struct list$1float$*"), "/home/ab25cq/neo-c/neo-c.h", 5423, 307),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5423, 308);
    come_call_finalizer(list$1float$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5423, 309);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5423, 310);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1double$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1double$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1511, 318);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 320);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 321);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1double$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1double$* litem;
    struct list_item$1double$* litem_18;
    struct list_item$1double$* litem_19;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_18, 0, sizeof(litem_18));
    memset(&litem_19, 0, sizeof(litem_19));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1633, 312, "struct list_item$1double$*"))), "/home/ab25cq/neo-c/neo-c.h", 1633, 313);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_18=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1643, 314, "struct list_item$1double$*"))), "/home/ab25cq/neo-c/neo-c.h", 1643, 315);
        litem_18->prev=self->head;
        litem_18->next=((void*)0);
        litem_18->item=item;
        self->tail=litem_18;
        self->head->next=litem_18;
    }
    else {
        __right_value0 = (void*)0;
        litem_19=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1653, 316, "struct list_item$1double$*"))), "/home/ab25cq/neo-c/neo-c.h", 1653, 317);
        litem_19->prev=self->tail;
        litem_19->next=((void*)0);
        litem_19->item=item;
        self->tail->next=litem_19;
        self->tail=litem_19;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1double$$p_finalize(struct list$1double$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1double$* it;
    struct list_item$1double$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1520, 319);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1double$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1double$* doublea_to_list(double* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1double$* __result_obj__0;
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value1=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc(1, sizeof(struct list$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5428, 311, "struct list$1double$*"), "/home/ab25cq/neo-c/neo-c.h", 5428, 322),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5428, 323);
    come_call_finalizer(list$1double$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5428, 324);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5428, 325);
    return __result_obj__0;
}

_Bool _Bool_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool size_t_equals(unsigned long  int  self  , unsigned long  int  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool float_equals(float self, float right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool double_equals(double self, double right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_operator_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_operator_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_operator_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_operator_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool char_operator_not_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool short_operator_not_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool int_operator_not_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool long_operator_not_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool charp_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool string_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool voidp_equals(void* self, void* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Boolp_equals(_Bool* self, _Bool* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Boolp_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return *self==*right;
    neo_current_frame = fr.prev;
}

_Bool string_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool charp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool chara_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool voidp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool voidp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !charp_operator_equals(self,right);
    neo_current_frame = fr.prev;
}

_Bool string_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool charp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool chara_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

char*  charp_operator_add(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(self==((void*)0)||right==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5671))), "/home/ab25cq/neo-c/neo-c.h", 5671, 326);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5671, 327));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5671, 328));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "/home/ab25cq/neo-c/neo-c.h", 5675, 329, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5675, 330);
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5680, 331);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5680, 332));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5680, 333));
    return __result_obj__0;
}

char*  string_operator_add(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(self==((void*)0)||right==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5686))), "/home/ab25cq/neo-c/neo-c.h", 5686, 334);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5686, 335));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5686, 336));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "/home/ab25cq/neo-c/neo-c.h", 5690, 337, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5690, 338);
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5695, 339);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5695, 340));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5695, 341));
    return __result_obj__0;
}

char*  charp_operator_mult(const char* self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_mult"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int i;
    memset(&buf, 0, sizeof(buf));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5701))), "/home/ab25cq/neo-c/neo-c.h", 5701, 342);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5701, 343));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5701, 344));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5703, 345, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5703, 346)), "/home/ab25cq/neo-c/neo-c.h", 5703, 347);
    for(i=0    ;i<right;i++){
        buffer_append_str(buf,self);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "/home/ab25cq/neo-c/neo-c.h", 5709, 348);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5709, 349);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5709, 350));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5709, 351));
    return __result_obj__0;
}

char*  string_operator_mult(const char* self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_mult"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int i;
    memset(&buf, 0, sizeof(buf));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5715))), "/home/ab25cq/neo-c/neo-c.h", 5715, 352);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5715, 353));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5715, 354));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5717, 355, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5717, 356)), "/home/ab25cq/neo-c/neo-c.h", 5717, 357);
    for(i=0    ;i<right;i++){
        buffer_append_str(buf,self);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "/home/ab25cq/neo-c/neo-c.h", 5723, 358);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5723, 359);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5723, 360));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5723, 361));
    return __result_obj__0;
}

_Bool charpa_contained(const char* self[], unsigned long  int  len  , const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_contained"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool result;
    int i;
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    result=(_Bool)0;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return result;
    }
    for(i=0    ;i<len;i++){
        if(strncmp(self[i],str,strlen(self[i]))==0) {
            result=(_Bool)1;
            break;
        }
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned long  int  shorta_length(short* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  inta_length(int* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  longa_length(long* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  floata_length(float* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  doublea_length(double* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned int _Bool_get_hash_key(_Bool value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

unsigned int char_get_hash_key(char value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int short_get_hash_key(short int value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int int_get_hash_key(int value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int long_get_hash_key(long value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int size_t_get_hash_key(unsigned long  int  value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int float_get_hash_key(float value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int double_get_hash_key(double value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int charp_get_hash_key(const char* value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int result;
    memset(&result, 0, sizeof(result));
    if(value==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    result=0;
    const char* p=value;
    while(*p) {
        result+=(*p);
        p++;
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned int string_get_hash_key(char* value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int result;
    char* p;
    memset(&result, 0, sizeof(result));
    memset(&p, 0, sizeof(p));
    if(value==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    result=0;
    p=value;
    while(*p) {
        result+=(*p);
        p++;
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned int voidp_get_hash_key(void* value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

_Bool _Bool_clone(_Bool self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

char char_clone(char self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

short int short_clone(short self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

int int_clone(int self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long  int long_clone(long self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

unsigned long  int  size_t_clone(unsigned long  int  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

double double_clone(double self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

float float_clone(float self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

_Bool xisalpha(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisalpha"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xisblank(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisblank"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xisdigit(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisdigit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xisspace(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisspace"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c==32||c==9||c==10||c==13||c==28||c==11;
    neo_current_frame = fr.prev;
}

_Bool xisalnum(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisalnum"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return xisalpha(c)||xisdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xisascii(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisascii"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    result=(c>=32&&c<=126);
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xispunct(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xispunct"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
    neo_current_frame = fr.prev;
}

int string_length(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(str==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int charp_length(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(str==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int chara_length(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(str==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

char*  charp_reverse(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_reverse"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    int i;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5975))), "/home/ab25cq/neo-c/neo-c.h", 5975, 362);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5975, 363));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5975, 364));
        return __result_obj__0;
    }
    len=strlen(str);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "/home/ab25cq/neo-c/neo-c.h", 5978, 365, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5978, 366);
    for(i=0    ;i<len;i++){
        result[i]=str[len-i-1];
    }
    result[len]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5986, 367);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5986, 368));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5986, 369));
    return __result_obj__0;
}

char*  string_operator_load_range_element(char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_load_range_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5992))), "/home/ab25cq/neo-c/neo-c.h", 5992, 370);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5992, 371));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5992, 372));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head>tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/home/ab25cq/neo-c/neo-c.h", 6005, 373);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6005, 374));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6005, 375));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6005, 376));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6017))), "/home/ab25cq/neo-c/neo-c.h", 6017, 377);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6017, 378));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6017, 379));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6021))), "/home/ab25cq/neo-c/neo-c.h", 6021, 380);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6021, 381));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6021, 382));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/home/ab25cq/neo-c/neo-c.h", 6024, 383, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6024, 384);
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6029, 385);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6029, 386));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6029, 387));
    return __result_obj__0;
}

char*  charp_operator_load_range_element(char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_load_range_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6035))), "/home/ab25cq/neo-c/neo-c.h", 6035, 388);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6035, 389));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6035, 390));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head>tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/home/ab25cq/neo-c/neo-c.h", 6048, 391);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6048, 392));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6048, 393));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6048, 394));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6060))), "/home/ab25cq/neo-c/neo-c.h", 6060, 395);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6060, 396));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6060, 397));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6064))), "/home/ab25cq/neo-c/neo-c.h", 6064, 398);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6064, 399));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6064, 400));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/home/ab25cq/neo-c/neo-c.h", 6067, 401, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6067, 402);
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6072, 403);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6072, 404));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6072, 405));
    return __result_obj__0;
}

char*  charp_substring(const char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_substring"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6078))), "/home/ab25cq/neo-c/neo-c.h", 6078, 406);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6078, 407));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6078, 408));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head>tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/home/ab25cq/neo-c/neo-c.h", 6091, 409);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6091, 410));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6091, 411));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6091, 412));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6103))), "/home/ab25cq/neo-c/neo-c.h", 6103, 413);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6103, 414));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6103, 415));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6107))), "/home/ab25cq/neo-c/neo-c.h", 6107, 416);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6107, 417));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6107, 418));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/home/ab25cq/neo-c/neo-c.h", 6110, 419, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6110, 420);
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6115, 421);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6115, 422));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6115, 423));
    return __result_obj__0;
}

char*  xsprintf(const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __builtin_va_list  args  ;
    char* result;
    int len;
    char*  result2  ;
    memset(&result, 0, sizeof(result));
    memset(&len, 0, sizeof(len));
    memset(&result2, 0, sizeof(result2));
    if(msg==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6121))), "/home/ab25cq/neo-c/neo-c.h", 6121, 424);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6121, 425));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6121, 426));
        return __result_obj__0;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&result,msg,args);
    __builtin_va_end(args);
    if(len<0) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6130))), "/home/ab25cq/neo-c/neo-c.h", 6130, 427);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6130, 428));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6130, 429));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result2=(char* )come_increment_ref_count(__builtin_string(result,"/home/ab25cq/neo-c/neo-c.h",6133), "/home/ab25cq/neo-c/neo-c.h", 6133, 430);
    free(result);
        __result_obj__0 = (char* )come_increment_ref_count(result2, "/home/ab25cq/neo-c/neo-c.h", 6137, 431);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6137, 432));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6137, 433));
    return __result_obj__0;
}

char*  charp_delete(char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_delete"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6143))), "/home/ab25cq/neo-c/neo-c.h", 6143, 434);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6143, 435));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6143, 436));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head>=len) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/home/ab25cq/neo-c/neo-c.h",6149))), "/home/ab25cq/neo-c/neo-c.h", 6149, 437);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6149, 438));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6149, 439));
        return __result_obj__0;
    }
    if(strcmp(str,"")==0) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/home/ab25cq/neo-c/neo-c.h",6153))), "/home/ab25cq/neo-c/neo-c.h", 6153, 440);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6153, 441));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6153, 442));
        return __result_obj__0;
    }
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head<0) {
        head=0;
    }
    if(tail<0) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/home/ab25cq/neo-c/neo-c.h",6169))), "/home/ab25cq/neo-c/neo-c.h", 6169, 443);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6169, 444));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6169, 445));
        return __result_obj__0;
    }
    if(tail>=len) {
        tail=len;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len-(tail-head)+1)), "/home/ab25cq/neo-c/neo-c.h", 6176, 446, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6176, 447);
    memcpy(result,str,head);
    memcpy(result+head,str+tail,len-tail);
    result[len-(tail-head)]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6183, 448);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6183, 449));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6183, 450));
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1499, 452);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 455);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 456);
    return __result_obj__0;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1520, 454);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 453));
    }
            neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj13  ;
    struct list_item$1char$ph* litem_20;
    char*  __dec_obj14  ;
    struct list_item$1char$ph* litem_21;
    char*  __dec_obj15  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_20, 0, sizeof(litem_20));
    memset(&litem_21, 0, sizeof(litem_21));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1629, 467));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 1633, 468, "struct list_item$1char$ph*"))), "/home/ab25cq/neo-c/neo-c.h", 1633, 469);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj13=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/home/ab25cq/neo-c/neo-c.h", 1637, 471);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1637, 470);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_20=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 1643, 472, "struct list_item$1char$ph*"))), "/home/ab25cq/neo-c/neo-c.h", 1643, 473);
        litem_20->prev=self->head;
        litem_20->next=((void*)0);
        __dec_obj14=litem_20->item,
        litem_20->item=(char* )come_increment_ref_count(item, "/home/ab25cq/neo-c/neo-c.h", 1647, 475);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1647, 474);
        self->tail=litem_20;
        self->head->next=litem_20;
    }
    else {
        __right_value0 = (void*)0;
        litem_21=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 1653, 476, "struct list_item$1char$ph*"))), "/home/ab25cq/neo-c/neo-c.h", 1653, 477);
        litem_21->prev=self->tail;
        litem_21->next=((void*)0);
        __dec_obj15=litem_21->item,
        litem_21->item=(char* )come_increment_ref_count(item, "/home/ab25cq/neo-c/neo-c.h", 1657, 479);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1657, 478);
        self->tail->next=litem_21;
        self->tail=litem_21;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1665, 480));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct list$1char$ph* charp_split_char(char* self, char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_split_char"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
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
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 6189, 451, "struct list$1char$ph*"), "/home/ab25cq/neo-c/neo-c.h", 6189, 457)))), "/home/ab25cq/neo-c/neo-c.h", 6189, 458);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6189, 459);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6189, 460);
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 6192, 461, "struct list$1char$ph*"), "/home/ab25cq/neo-c/neo-c.h", 6192, 462)), "/home/ab25cq/neo-c/neo-c.h", 6192, 463);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    str=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 6194, 464, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 6194, 465)), "/home/ab25cq/neo-c/neo-c.h", 6194, 466);
    self_len=charp_length(self);
    for(i=0    ;i<self_len;i++){
        if(self[i]==c) {
            __right_value0 = (void*)0;
            list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"/home/ab25cq/neo-c/neo-c.h",6199), "/home/ab25cq/neo-c/neo-c.h", 6199, 481));
            buffer_reset(str);
        }
        else {
            buffer_append_char(str,self[i]);
        }
    }
    if(buffer_length(str)!=0) {
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"/home/ab25cq/neo-c/neo-c.h",6207), "/home/ab25cq/neo-c/neo-c.h", 6207, 482));
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6210, 483);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6210, 484);
    come_call_finalizer(buffer_finalize, str, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6210, 485);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6210, 486);
    return __result_obj__0;
}

char*  charp_xsprintf(char* self, const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_xsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "/home/ab25cq/neo-c/neo-c.h", 6215, 487);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6215, 488));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6215, 489));
    return __result_obj__0;
}

char*  int_xsprintf(int self, const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_xsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "/home/ab25cq/neo-c/neo-c.h", 6220, 490);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6220, 491));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6220, 492));
    return __result_obj__0;
}

char*  charp_printable(char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_printable"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
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
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6226))), "/home/ab25cq/neo-c/neo-c.h", 6226, 493);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6226, 494));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6226, 495));
        return __result_obj__0;
    }
    len=charp_length(str);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), "/home/ab25cq/neo-c/neo-c.h", 6229, 496, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6229, 497);
    n=0;
    for(i=0    ;i<len;i++){
        c=str[i];
        if((c>=0&&c<32)||c==127) {
            result[n++]=94;
            result[n++]=c+65-1;
        }
        else {
            result[n++]=c;
        }
    }
    result[n]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6248, 498);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6248, 499));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6248, 500));
    return __result_obj__0;
}

char*  chara_printable(char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_printable"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_printable(str))), "/home/ab25cq/neo-c/neo-c.h", 6253, 501);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6253, 502));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6253, 503));
    return __result_obj__0;
}

char*  charp_sub_plain(char* self, char* str, char* replace)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_sub_plain"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    char* p;
    char* p2;
    memset(&result, 0, sizeof(result));
    memset(&p, 0, sizeof(p));
    memset(&p2, 0, sizeof(p2));
    if(self==((void*)0)||str==((void*)0)||replace==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6259))), "/home/ab25cq/neo-c/neo-c.h", 6259, 504);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6259, 505));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6259, 506));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 6262, 507, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 6262, 508)), "/home/ab25cq/neo-c/neo-c.h", 6262, 509);
    p=self;
    while((_Bool)1) {
        p2=strstr(p,str);
        if(p2==((void*)0)) {
            p2=p;
            while(*p2) {
                p2++;
            }
            buffer_append(result,p,p2-p);
            break;
        }
        buffer_append(result,p,p2-p);
        buffer_append_str(result,replace);
        p=p2+strlen(str);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(result))), "/home/ab25cq/neo-c/neo-c.h", 6284, 510);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6284, 511);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6284, 512));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6284, 513));
    return __result_obj__0;
}

char*  xbasename(char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xbasename"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    memset(&p, 0, sizeof(p));
    if(path==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6293))), "/home/ab25cq/neo-c/neo-c.h", 6293, 514);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6293, 515));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6293, 516));
        return __result_obj__0;
    }
    p=path+strlen(path);
    while(p>=path) {
        if(*p==47) {
            break;
        }
        else {
            p--;
        }
    }
    if(p<path) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"/home/ab25cq/neo-c/neo-c.h",6307))), "/home/ab25cq/neo-c/neo-c.h", 6307, 517);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6307, 518));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6307, 519));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"/home/ab25cq/neo-c/neo-c.h",6310))), "/home/ab25cq/neo-c/neo-c.h", 6310, 520);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6310, 521));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6310, 522));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6313))), "/home/ab25cq/neo-c/neo-c.h", 6313, 523);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6313, 524));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6313, 525));
    return __result_obj__0;
}

char*  xnoextname(char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xnoextname"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  path2  ;
    char* p;
    memset(&path2, 0, sizeof(path2));
    memset(&p, 0, sizeof(p));
    if(path==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6319))), "/home/ab25cq/neo-c/neo-c.h", 6319, 526);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6319, 527));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6319, 528));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    path2=(char* )come_increment_ref_count(xbasename(path), "/home/ab25cq/neo-c/neo-c.h", 6321, 529);
    p=path2+strlen(path2);
    while(p>=path2) {
        if(*p==46) {
            break;
        }
        else {
            p--;
        }
    }
    if(p<path2) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path2,"/home/ab25cq/neo-c/neo-c.h",6335))), "/home/ab25cq/neo-c/neo-c.h", 6335, 530);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6335, 531));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6335, 532));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6335, 533));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(path2,0,p-path2))), "/home/ab25cq/neo-c/neo-c.h", 6338, 534);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6338, 535));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6338, 536));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6338, 537));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6341))), "/home/ab25cq/neo-c/neo-c.h", 6341, 538);
    (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6341, 539));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6341, 540));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6341, 541));
    return __result_obj__0;
}

char*  xextname(char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xextname"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    memset(&p, 0, sizeof(p));
    if(path==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6347))), "/home/ab25cq/neo-c/neo-c.h", 6347, 542);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6347, 543));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6347, 544));
        return __result_obj__0;
    }
    p=path+strlen(path);
    while(p>=path) {
        if(*p==46) {
            break;
        }
        else {
            p--;
        }
    }
    if(p<path) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"/home/ab25cq/neo-c/neo-c.h",6361))), "/home/ab25cq/neo-c/neo-c.h", 6361, 545);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6361, 546));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6361, 547));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"/home/ab25cq/neo-c/neo-c.h",6364))), "/home/ab25cq/neo-c/neo-c.h", 6364, 548);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6364, 549));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6364, 550));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6367))), "/home/ab25cq/neo-c/neo-c.h", 6367, 551);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6367, 552));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6367, 553));
    return __result_obj__0;
}

char*  _Bool_to_string(_Bool self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("true","/home/ab25cq/neo-c/neo-c.h",6386))), "/home/ab25cq/neo-c/neo-c.h", 6386, 554);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6386, 555));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6386, 556));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("false","/home/ab25cq/neo-c/neo-c.h",6389))), "/home/ab25cq/neo-c/neo-c.h", 6389, 557);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6389, 558));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6389, 559));
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

char*  char_to_string(char self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%c",self))), "/home/ab25cq/neo-c/neo-c.h", 6395, 560);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6395, 561));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6395, 562));
    return __result_obj__0;
}

char*  short_to_string(short self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "/home/ab25cq/neo-c/neo-c.h", 6400, 563);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6400, 564));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6400, 565));
    return __result_obj__0;
}

char*  int_to_string(int self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "/home/ab25cq/neo-c/neo-c.h", 6405, 566);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6405, 567));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6405, 568));
    return __result_obj__0;
}

char*  long_to_string(long self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "/home/ab25cq/neo-c/neo-c.h", 6410, 569);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6410, 570));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6410, 571));
    return __result_obj__0;
}

char*  size_t_to_string(unsigned long  int  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "/home/ab25cq/neo-c/neo-c.h", 6415, 572);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6415, 573));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6415, 574));
    return __result_obj__0;
}

char*  float_to_string(float self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%f",self))), "/home/ab25cq/neo-c/neo-c.h", 6420, 575);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6420, 576));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6420, 577));
    return __result_obj__0;
}

char*  double_to_string(double self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%lf",self))), "/home/ab25cq/neo-c/neo-c.h", 6425, 578);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6425, 579));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6425, 580));
    return __result_obj__0;
}

char*  string_to_string(char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6431))), "/home/ab25cq/neo-c/neo-c.h", 6431, 581);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6431, 582));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6431, 583));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6433))), "/home/ab25cq/neo-c/neo-c.h", 6433, 584);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6433, 585));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6433, 586));
    return __result_obj__0;
}

char*  charp_to_string(const char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6439))), "/home/ab25cq/neo-c/neo-c.h", 6439, 587);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6439, 588));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6439, 589));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6441))), "/home/ab25cq/neo-c/neo-c.h", 6441, 590);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6441, 591));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6441, 592));
    return __result_obj__0;
}

int _Bool_compare(_Bool left, _Bool right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!left&&right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left&&right) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(!left&&!right) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int char_compare(char left, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int short_compare(short left, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int int_compare(int left, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int long_compare(long left, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int size_t_compare(unsigned long  int  left  , unsigned long  int  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int float_compare(float left, float right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int double_compare(double left, double right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int string_compare(char* left, char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

int charp_compare(char* left, char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

char*  charp_puts(char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_puts"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6624))), "/home/ab25cq/neo-c/neo-c.h", 6624, 593);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6624, 594));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6624, 595));
        return __result_obj__0;
    }
    puts(self);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6628))), "/home/ab25cq/neo-c/neo-c.h", 6628, 596);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6628, 597));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6628, 598));
    return __result_obj__0;
}

char*  charp_print(char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_print"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6634))), "/home/ab25cq/neo-c/neo-c.h", 6634, 599);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6634, 600));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6634, 601));
        return __result_obj__0;
    }
    printf("%s",self);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6638))), "/home/ab25cq/neo-c/neo-c.h", 6638, 602);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6638, 603));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6638, 604));
    return __result_obj__0;
}

char*  charp_printf(char* self, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_printf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* msg2;
    __builtin_va_list  args  ;
    memset(&msg2, 0, sizeof(msg2));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6666))), "/home/ab25cq/neo-c/neo-c.h", 6666, 605);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6666, 606));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6666, 607));
        return __result_obj__0;
    }
    __builtin_va_start(args,self);
    vasprintf(&msg2,self,args);
    __builtin_va_end(args);
    printf("%s",msg2);
    free(msg2);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6679))), "/home/ab25cq/neo-c/neo-c.h", 6679, 608);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6679, 609));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6679, 610));
    return __result_obj__0;
}

int int_printf(int self, char* msg)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_printf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return self;
    }
    printf(msg,self);
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long long_printf(long self, char* msg)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_printf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return self;
    }
    printf(msg,self);
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

void int_times(int self, void* parent, void (*block)(void*,int))
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_times"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    for(i=0    ;i<self;i++){
        block(parent,i);
    }
    neo_current_frame = fr.prev;
}

struct buffer*  FILE_read(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_read"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct buffer*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int size;
    memset(&buf, 0, sizeof(buf));
    memset(&size, 0, sizeof(size));
    if(f==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/home/ab25cq/neo-c/neo-c.h", 6718, 611, "buffer"), "/home/ab25cq/neo-c/neo-c.h", 6718, 612), "", 0))), "/home/ab25cq/neo-c/neo-c.h", 6718, 613);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6718, 614);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6718, 615);
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 6720, 616, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 6720, 617)), "/home/ab25cq/neo-c/neo-c.h", 6720, 618);
    while(1) {
        char buf2[8192];
        memset(&buf2, 0, sizeof(buf2));
        size=fread(buf2,1,8192,f);
        buffer_append(buf,buf2,size);
        if(size<8192) {
            break;
        }
    }
        __result_obj__0 = (struct buffer* )come_increment_ref_count(buf, "/home/ab25cq/neo-c/neo-c.h", 6734, 619);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6734, 620);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6734, 621);
    return __result_obj__0;
}

int FILE_write(struct _IO_FILE*  f  , const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_write"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(f==((void*)0)||str==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
        neo_current_frame = fr.prev;
    return fwrite(str,strlen(str),1,f);
    neo_current_frame = fr.prev;
}

int FILE_fclose(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fclose"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int result;
    memset(&result, 0, sizeof(result));
    if(f==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    result=fclose(f);
    if(result<0) {
                neo_current_frame = fr.prev;
        return result;
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

struct _IO_FILE*  FILE_fprintf(struct _IO_FILE*  f  , const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct _IO_FILE*  __result_obj__0  ;
    __builtin_va_list  args  ;
    int result;
    memset(&result, 0, sizeof(result));
    if(f==((void*)0)||msg==((void*)0)) {
                __result_obj__0 = f;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    char msg2[1024*2*2*2];
    memset(&msg2, 0, sizeof(msg2));
    __builtin_va_start(args,msg);
    vsnprintf(msg2,1024*2*2*2,msg,args);
    __builtin_va_end(args);
    result=fprintf(f,"%s",msg2);
    if(result<0) {
                __result_obj__0 = f;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = f;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int charp_write(const char* self, const char* file_name, _Bool append)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_write"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct _IO_FILE*  f  ;
    int result;
    int result2;
    memset(&f, 0, sizeof(f));
    memset(&result, 0, sizeof(result));
    memset(&result2, 0, sizeof(result2));
    if(self==((void*)0)||file_name==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    if(append) {
        f=fopen(file_name,"a");
    }
    else {
        f=fopen(file_name,"w");
    }
    if(f==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    result=fwrite(self,strlen(self),1,f);
    if(result!=1) {
                neo_current_frame = fr.prev;
        return result;
    }
    result2=fclose(f);
    if(result2<0) {
                neo_current_frame = fr.prev;
        return result2;
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

struct buffer*  charp_read(const char* file_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_read"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
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
    if(file_name==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/home/ab25cq/neo-c/neo-c.h", 6818, 622, "buffer"), "/home/ab25cq/neo-c/neo-c.h", 6818, 623), "", 0))), "/home/ab25cq/neo-c/neo-c.h", 6818, 624);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6818, 625);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6818, 626);
        return __result_obj__0;
    }
    f=fopen(file_name,"r");
    if(f==((void*)0)) {
                __right_value0 = (void*)0;
        __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/home/ab25cq/neo-c/neo-c.h", 6824, 627, "buffer"), "/home/ab25cq/neo-c/neo-c.h", 6824, 628), "", 0))), "/home/ab25cq/neo-c/neo-c.h", 6824, 629);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6824, 630);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6824, 631);
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 6827, 632, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 6827, 633)), "/home/ab25cq/neo-c/neo-c.h", 6827, 634);
    while(1) {
        char buf2[8192];
        memset(&buf2, 0, sizeof(buf2));
        size=fread(buf2,1,8192,f);
        buffer_append(buf,buf2,size);
        if(size<8192) {
            break;
        }
    }
    result2=fclose(f);
    if(result2<0) {
                __right_value0 = (void*)0;
        __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/home/ab25cq/neo-c/neo-c.h", 6844, 635, "buffer"), "/home/ab25cq/neo-c/neo-c.h", 6844, 636), "", 0))), "/home/ab25cq/neo-c/neo-c.h", 6844, 637);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6844, 638);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6844, 639);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6844, 640);
        return __result_obj__0;
    }
        __result_obj__0 = (struct buffer* )come_increment_ref_count(buf, "/home/ab25cq/neo-c/neo-c.h", 6847, 641);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6847, 642);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6847, 643);
    return __result_obj__0;
}

struct list$1char$ph* FILE_readlines(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_readlines"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct list$1char$ph* __result_obj__0;
    memset(&result, 0, sizeof(result));
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 6852, 644, "struct list$1char$ph*"), "/home/ab25cq/neo-c/neo-c.h", 6852, 645)), "/home/ab25cq/neo-c/neo-c.h", 6852, 646);
    if(f==((void*)0)) {
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6855, 647);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6855, 648);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6855, 649);
        return __result_obj__0;
    }
    while(1) {
        char buf[8192];
        memset(&buf, 0, sizeof(buf));
        if(fgets(buf,8192,f)==((void*)0)) {
            break;
        }
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(buf,"/home/ab25cq/neo-c/neo-c.h",6865), "/home/ab25cq/neo-c/neo-c.h", 6865, 650));
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6868, 651);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6868, 652);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6868, 653);
    return __result_obj__0;
}

_Bool xiswalpha(int  c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalpha"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xiswblank(int  c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xiswblank"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xiswdigit(int  c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xiswdigit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xiswalnum(int  c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalnum"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return xiswalpha(c)||xiswdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xiswascii(int  c  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xiswascii"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool result;
    memset(&result, 0, sizeof(result));
    result=(c>=32&&c<=126);
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

int string_index(char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_index"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return charp_index(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int charp_index(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* head;
    memset(&head, 0, sizeof(head));
    if(str==((void*)0)||search_str==((void*)0)) {
                neo_current_frame = fr.prev;
        return default_value;
    }
    head=strstr(str,search_str);
    if(head==((void*)0)) {
                neo_current_frame = fr.prev;
        return default_value;
    }
        neo_current_frame = fr.prev;
    return head-str;
    neo_current_frame = fr.prev;
}

