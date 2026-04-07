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

typedef struct re_program*  re_t  ;

typedef struct re_capture  re_capture  ;

typedef struct regex_t regex_t;

typedef struct re_program  regex_program_t  ;

typedef struct anonymous_typeX24 compiler_state;

typedef struct anonymous_typeX25 match_context;

typedef unsigned int wint_t;

typedef struct anonymous_typeX1  mbstate_t  ;

typedef int*  wstring  ;

/// previous struct definition ///
struct _IO_FILE;

struct _IO_marker;

struct _IO_codecvt;

struct _IO_wide_data;

struct obstack;

struct re_program;

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

struct re_capture
{
    int start;
    int length;
};

enum { RE_UNUSED 
,RE_DOT 
,RE_BEGIN 
,RE_END 
,RE_QUESTIONMARK 
,RE_STAR 
,RE_PLUS 
,RE_CHAR 
,RE_CHAR_CLASS 
,RE_INV_CHAR_CLASS 
,RE_DIGIT 
,RE_NOT_DIGIT 
,RE_ALPHA 
,RE_NOT_ALPHA 
,RE_WHITESPACE 
,RE_NOT_WHITESPACE 
,RE_GROUP 
,RE_GROUP_END 
};

struct anonymous_typeX21
{
    struct regex_t*  first  ;
    struct regex_t*  last  ;
    int id;
};

union anonymous_typeZ20
{
unsigned char ch;
unsigned char* ccl;
    struct {
        struct regex_t*  first  ;
        struct regex_t*  last  ;
        int id;
    } group;
};

struct anonymous_typeX23
{
    struct regex_t*  first  ;
    struct regex_t*  last  ;
    int id;
};

union anonymous_typeZ22
{
unsigned char ch;
unsigned char* ccl;
    struct {
        struct regex_t*  first  ;
        struct regex_t*  last  ;
        int id;
    } group;
};

struct regex_t
{
    unsigned char type;
    union {
        unsigned char ch;
        unsigned char* ccl;
        struct {
            struct regex_t*  first  ;
            struct regex_t*  last  ;
            int id;
        } group;
    } u;
    struct regex_t*  next  ;
};

struct re_program
{
    struct regex_t*  start  ;
    int group_count;
};

struct anonymous_typeX24
{
    struct regex_t*  pool  ;
    int pool_capacity;
    int pool_size;
    unsigned char* ccl_buf;
    int ccl_capacity;
    int ccl_idx;
    int group_count;
};

struct anonymous_typeX25
{
    const char* base;
    struct re_capture*  captures  ;
    int capture_capacity;
    int total_groups;
    _Bool ignore_case;
};

/// variable definition ///
extern struct _IO_FILE*  stdin  ;
extern struct _IO_FILE*  stdout  ;
extern struct _IO_FILE*  stderr  ;
extern char* program_invocation_name;
extern char* program_invocation_short_name;
extern struct neo_frame*  neo_current_frame  ;
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
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisspace(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xispunct(char c);
char*  charp_reverse(const char* str);
int string_length(const char* str);
int charp_length(const char* str);
int chara_length(const char* str);
char*  string_operator_load_range_element(char* str, int head, int tail);
char*  charp_operator_load_range_element(char* str, int head, int tail);
char*  charp_delete(char* str, int head, int tail);
char*  charp_xsprintf(char* self, const char* msg, ...);
char*  int_xsprintf(int self, const char* msg, ...);
char*  charp_printable(char* str);
char*  chara_printable(char* str);
char*  charp_sub_plain(char* self, char* str, char* replace);
struct buffer*  buffer_initialize(struct buffer*  self  );
void buffer_finalize(struct buffer*  self  );
struct buffer*  buffer_clone(struct buffer*  self  );
_Bool buffer_equals(struct buffer*  left  , struct buffer*  right  );
struct buffer*  buffer_append_str(struct buffer*  self  , const char* mem);
struct buffer*  buffer_append(struct buffer*  self  , const char* mem, unsigned long  int  size  );
char*  xsprintf(const char* msg, ...);
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
char*  charp_substring(const char* str, int head, int tail);
struct buffer*  buffer_append_format(struct buffer*  self  , const char* msg, ...);
char*  buffer_to_string(struct buffer*  self  );
char*  charp_to_string(const char* self);
char*  double_to_string(double self);
char*  float_to_string(float self);
char*  size_t_to_string(unsigned long  int  self  );
char*  long_to_string(long self);
char*  int_to_string(int self);
char*  short_to_string(short self);
char*  char_to_string(char self);
char*  _Bool_to_string(_Bool self);
_Bool string_equals(char* self, const char* right);
void buffer_reset(struct buffer*  self  );
struct buffer*  buffer_append_char(struct buffer*  self  , char c);
int buffer_length(struct buffer*  self  );
void stackframe();
void stackframe2(void* mem);
_Bool die(const char* msg, char* sname, int sline);
void come_heap_final();
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
struct list$1char$ph* charp_split_char(char* self, char c);
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
char* dirname(char* __path);
char* __xpg_basename(char* __path);
static void match_context_finalize(struct anonymous_typeX25*  self  );
int re_matchp_ex(struct re_program*  pattern  , const char* text, int* matchlength, struct re_capture*  captures  , int max_captures, _Bool ignore_case);
int re_matchp(struct re_program*  pattern  , const char* text, int* matchlength, struct re_capture*  captures  , int max_captures);
int re_match(const char* pattern, const char* text, int* matchlength);
static void regex_program_t_finalize(struct re_program*  self  );
static void compiler_state_finalize(struct anonymous_typeX24*  self  );
struct re_program*  re_compile(const char* pattern);
void re_print(struct re_program*  pattern  );
void clear_captures(struct anonymous_typeX25*  ctx  );
void snapshot_captures(const struct anonymous_typeX25*  ctx  , struct re_capture*  buffer_  );
void restore_captures(struct anonymous_typeX25*  ctx  , const struct re_capture*  buffer_  );
int re_unescape_literal_char(char escaped, unsigned char* out_char);
struct regex_t*  new_token(struct anonymous_typeX24*  st  );
int append_token(struct regex_t**  head  , struct regex_t**  tail  , struct regex_t*  token  );
struct regex_t*  compile_sequence(struct anonymous_typeX24*  st  , const char* pattern, int* pos, int in_group);
const char* matchpattern(struct regex_t*  pattern  , const char* text, struct anonymous_typeX25*  ctx  );
const char* matchgroup(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX25*  ctx  );
const char* matchstar(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX25*  ctx  );
const char* matchplus(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX25*  ctx  );
const char* matchquestion(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX25*  ctx  );
unsigned char re_fold_char(unsigned char c, _Bool ignore_case);
const char* matchtoken(struct regex_t*  token  , const char* text, struct anonymous_typeX25*  ctx  );
int matchdigit(char c);
int matchalpha(char c);
int matchwhitespace(char c);
int matchalphanum(char c);
int matchrange(char c, const char* str, _Bool ignore_case);
int matchdot(char c);
int ismetachar(char c);
int matchmetachar(char c, const char* str);
int matchcharclass(char c, const char* str, _Bool ignore_case);
void re_print_internal(struct regex_t*  pattern  , int depth);
int re_get_group_count(struct re_program*  pattern  );
int charp_index_regex(const char* self, const char* reg, int default_value, _Bool ignore_case);
int charp_rindex_regex(const char* self, const char* reg, int default_value, _Bool ignore_case);
char*  string_chomp(const char* str);
int string_rindex_regex(char* self, const char* reg, int default_value, _Bool ignore_case);
int string_index_regex(char* self, const char* reg, int default_value, _Bool ignore_case);
_Bool charp_match(char* self, const char* reg, _Bool ignore_case);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  );
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
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
// uniq global variable
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
static void match_context_finalize(struct anonymous_typeX25*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "match_context_finalize"; neo_current_frame = &fr;
    # 1 "match_context_finalize"
                neo_current_frame = fr.prev;
}

int re_matchp_ex(struct re_program*  pattern  , const char* text, int* matchlength, struct re_capture*  captures  , int max_captures, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_matchp_ex"; neo_current_frame = &fr;
    struct re_program*  program  ;
    struct regex_t*  start  ;
    struct anonymous_typeX25  ctx  ;
    int __result_obj__0;
    memset(&ctx, 0, sizeof(ctx));
    # 1330 "./neo-c-str.h"
    *matchlength=0;
    # 1336 "./neo-c-str.h"
    if(pattern==0) {
        # 1333 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 1336 "./neo-c-str.h"
    program=(struct re_program* )pattern;
    # 1337 "./neo-c-str.h"
    start=program->start;
    # 1343 "./neo-c-str.h"
    if(start==0) {
        # 1340 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 1343 "./neo-c-str.h"
    # 1344 "./neo-c-str.h"
    ctx.base=text;
    # 1345 "./neo-c-str.h"
    ctx.captures=(((captures!=0&&max_captures>0))?(captures):(0));
    # 1346 "./neo-c-str.h"
    ctx.capture_capacity=(((captures!=0&&max_captures>0))?(max_captures):(0));
    # 1351 "./neo-c-str.h"
    if(ctx.capture_capacity>64) {
        # 1349 "./neo-c-str.h"
        ctx.capture_capacity=64;
    }
    # 1351 "./neo-c-str.h"
    ctx.total_groups=program->group_count;
    # 1352 "./neo-c-str.h"
    ctx.ignore_case=ignore_case;
    # 1359 "./neo-c-str.h"
    if(ctx.captures!=0) {
        # 1356 "./neo-c-str.h"
        clear_captures(&ctx);
    }
    # 1401 "./neo-c-str.h"
    if(start->type==(2)) {
        # 1361 "./neo-c-str.h"
        const char* end=matchpattern(start->next,text,&ctx);
        # 1371 "./neo-c-str.h"
        if(end!=0) {
            # 1364 "./neo-c-str.h"
            *matchlength=(int)(end-text);
            # 1369 "./neo-c-str.h"
            if(ctx.captures!=0) {
            }
            # 1369 "./neo-c-str.h"
                        __result_obj__0 = 0;
            come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0, "./neo-c-str.h}", 1369, 1);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 1371 "./neo-c-str.h"
                __result_obj__0 = -1;
        come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0, "./neo-c-str.h}", 1371, 2);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else {
        # 1375 "./neo-c-str.h"
        const char* cursor=text;
        # 1399 "./neo-c-str.h"
        while(1) {
            # 1382 "./neo-c-str.h"
            if(ctx.captures!=0) {
                # 1380 "./neo-c-str.h"
                clear_captures(&ctx);
            }
            # 1382 "./neo-c-str.h"
            const char* end_0=matchpattern(start,cursor,&ctx);
            # 1393 "./neo-c-str.h"
            if(end_0!=0) {
                # 1389 "./neo-c-str.h"
                if(*cursor==0&&cursor!=text) {
                    # 1387 "./neo-c-str.h"
                                        __result_obj__0 = -1;
                    come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0, "./neo-c-str.h}", 1387, 3);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                # 1389 "./neo-c-str.h"
                *matchlength=(int)(end_0-cursor);
                # 1390 "./neo-c-str.h"
                                __result_obj__0 = (int)(cursor-text);
                come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0, "./neo-c-str.h}", 1390, 4);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            # 1397 "./neo-c-str.h"
            if(*cursor==0) {
                # 1395 "./neo-c-str.h"
                break;
            }
            # 1397 "./neo-c-str.h"
            cursor+=1;
        }
    }
    # 1401 "./neo-c-str.h"
        __result_obj__0 = -1;
    come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0, "./neo-c-str.h}", 1401, 5);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int re_matchp(struct re_program*  pattern  , const char* text, int* matchlength, struct re_capture*  captures  , int max_captures)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_matchp"; neo_current_frame = &fr;
    # 1406 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return re_matchp_ex(pattern,text,matchlength,captures,max_captures,(_Bool)0);
    neo_current_frame = fr.prev;
}

int re_match(const char* pattern, const char* text, int* matchlength)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_match"; neo_current_frame = &fr;
    # 1411 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return re_matchp(re_compile(pattern),text,matchlength,(struct re_capture* )0,0);
    neo_current_frame = fr.prev;
}

static void regex_program_t_finalize(struct re_program*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "regex_program_t_finalize"; neo_current_frame = &fr;
    # 1 "regex_program_t_finalize"
            neo_current_frame = fr.prev;
}

static void compiler_state_finalize(struct anonymous_typeX24*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "compiler_state_finalize"; neo_current_frame = &fr;
    # 1 "compiler_state_finalize"
            neo_current_frame = fr.prev;
}

struct re_program*  re_compile(const char* pattern)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_compile"; neo_current_frame = &fr;
    static struct re_program  program  ;
    struct anonymous_typeX24  state  ;
    int pos;
    struct regex_t*  head  ;
    struct re_program*  __result_obj__0  ;
    memset(&program, 0, sizeof(program));
    memset(&state, 0, sizeof(state));
    # 1416 "./neo-c-str.h"
    static struct regex_t  re_compiled[64]  ;
    memset(&re_compiled, 0, sizeof(re_compiled));
    # 1417 "./neo-c-str.h"
    static unsigned char ccl_buf[40];
    memset(&ccl_buf, 0, sizeof(ccl_buf));
    # 1418 "./neo-c-str.h"
    # 1420 "./neo-c-str.h"
    # 1421 "./neo-c-str.h"
    state.pool=re_compiled;
    # 1422 "./neo-c-str.h"
    state.pool_capacity=64;
    # 1423 "./neo-c-str.h"
    state.pool_size=0;
    # 1424 "./neo-c-str.h"
    state.ccl_buf=ccl_buf;
    # 1425 "./neo-c-str.h"
    state.ccl_capacity=40;
    # 1426 "./neo-c-str.h"
    state.ccl_idx=1;
    # 1427 "./neo-c-str.h"
    state.group_count=0;
    # 1434 "./neo-c-str.h"
    if(state.ccl_capacity>0) {
        # 1431 "./neo-c-str.h"
        state.ccl_buf[0]=0;
    }
    # 1434 "./neo-c-str.h"
    pos=0;
    # 1435 "./neo-c-str.h"
    head=compile_sequence(&state,pattern,&pos,0);
    # 1441 "./neo-c-str.h"
    if((head==0)||(pattern[pos]!=0)) {
        # 1438 "./neo-c-str.h"
                __result_obj__0 = ((void*)0);
        come_call_finalizer(regex_program_t_finalize, (&program), (void*)0, (void*)0, 1, 0, 0, (void*)0, "./neo-c-str.h}", 1438, 6);
        come_call_finalizer(compiler_state_finalize, (&state), (void*)0, (void*)0, 1, 0, 0, (void*)0, "./neo-c-str.h}", 1438, 7);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1441 "./neo-c-str.h"
    program.start=head;
    # 1442 "./neo-c-str.h"
    program.group_count=state.group_count;
    # 1443 "./neo-c-str.h"
        __result_obj__0 = (struct re_program* )&program;
    come_call_finalizer(regex_program_t_finalize, (&program), (void*)0, (void*)0, 1, 0, 0, (void*)0, "./neo-c-str.h}", 1443, 8);
    come_call_finalizer(compiler_state_finalize, (&state), (void*)0, (void*)0, 1, 0, 0, (void*)0, "./neo-c-str.h}", 1443, 9);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void re_print(struct re_program*  pattern  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_print"; neo_current_frame = &fr;
    struct re_program*  program  ;
    # 1454 "./neo-c-str.h"
    if(pattern==0) {
        # 1451 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1454 "./neo-c-str.h"
    program=(struct re_program* )pattern;
    # 1460 "./neo-c-str.h"
    if(program->start==0) {
        # 1457 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1460 "./neo-c-str.h"
    re_print_internal(program->start,0);
    neo_current_frame = fr.prev;
}

void clear_captures(struct anonymous_typeX25*  ctx  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "clear_captures"; neo_current_frame = &fr;
    int i;
    # 1472 "./neo-c-str.h"
    if((ctx->captures==0)||(ctx->capture_capacity<=0)) {
        # 1469 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1477 "./neo-c-str.h"
    for(i=0    ;i<ctx->capture_capacity;++i){
        # 1474 "./neo-c-str.h"
        ctx->captures[i].start=-1;
        # 1475 "./neo-c-str.h"
        ctx->captures[i].length=0;
    }
    neo_current_frame = fr.prev;
}

void snapshot_captures(const struct anonymous_typeX25*  ctx  , struct re_capture*  buffer_  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "snapshot_captures"; neo_current_frame = &fr;
    # 1486 "./neo-c-str.h"
    if((ctx->captures==0)||(ctx->capture_capacity<=0)) {
        # 1483 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1486 "./neo-c-str.h"
    memcpy(buffer_,ctx->captures,sizeof(struct re_capture )*ctx->capture_capacity);
    neo_current_frame = fr.prev;
}

void restore_captures(struct anonymous_typeX25*  ctx  , const struct re_capture*  buffer_  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "restore_captures"; neo_current_frame = &fr;
    # 1496 "./neo-c-str.h"
    if((ctx->captures==0)||(ctx->capture_capacity<=0)) {
        # 1493 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 1496 "./neo-c-str.h"
    memcpy(ctx->captures,buffer_,sizeof(struct re_capture )*ctx->capture_capacity);
    neo_current_frame = fr.prev;
}

int re_unescape_literal_char(char escaped, unsigned char* out_char)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_unescape_literal_char"; neo_current_frame = &fr;
    # 1521 "./neo-c-str.h"
    switch (    escaped) {
        # 1504 "./neo-c-str.h"
        case 116:
        # 1504 "./neo-c-str.h"
        *out_char=(unsigned char)9;
        # 1505 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return 1;
        # 1507 "./neo-c-str.h"
        case 110:
        # 1507 "./neo-c-str.h"
        *out_char=(unsigned char)10;
        # 1508 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return 1;
        # 1510 "./neo-c-str.h"
        case 114:
        # 1510 "./neo-c-str.h"
        *out_char=(unsigned char)13;
        # 1511 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return 1;
        # 1513 "./neo-c-str.h"
        case 118:
        # 1513 "./neo-c-str.h"
        *out_char=(unsigned char)11;
        # 1514 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return 1;
        # 1516 "./neo-c-str.h"
        case 102:
        # 1516 "./neo-c-str.h"
        *out_char=(unsigned char)12;
        # 1517 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return 1;
        # 1519 "./neo-c-str.h"
        default:
        # 1519 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
}

struct regex_t*  new_token(struct anonymous_typeX24*  st  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "new_token"; neo_current_frame = &fr;
    struct regex_t*  __result_obj__0  ;
    struct regex_t*  token  ;
    # 1531 "./neo-c-str.h"
    if(st->pool_size>=st->pool_capacity) {
        # 1528 "./neo-c-str.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1531 "./neo-c-str.h"
    token=&st->pool[st->pool_size++];
    # 1532 "./neo-c-str.h"
    token->type=(0);
    # 1533 "./neo-c-str.h"
    token->u.ccl=((void*)0);
    # 1534 "./neo-c-str.h"
    token->next=((void*)0);
    # 1535 "./neo-c-str.h"
    token->u.group.first=((void*)0);
    # 1536 "./neo-c-str.h"
    token->u.group.last=((void*)0);
    # 1537 "./neo-c-str.h"
    token->u.group.id=0;
    # 1538 "./neo-c-str.h"
        __result_obj__0 = token;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int append_token(struct regex_t**  head  , struct regex_t**  tail  , struct regex_t*  token  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "append_token"; neo_current_frame = &fr;
    # 1548 "./neo-c-str.h"
    if(token==0) {
        # 1545 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 1556 "./neo-c-str.h"
    if(*head==0) {
        # 1550 "./neo-c-str.h"
        *head=token;
    }
    else {
        # 1554 "./neo-c-str.h"
        (*tail)->next=token;
    }
    # 1556 "./neo-c-str.h"
    *tail=token;
    # 1557 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return 1;
    neo_current_frame = fr.prev;
}

struct regex_t*  compile_sequence(struct anonymous_typeX24*  st  , const char* pattern, int* pos, int in_group)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "compile_sequence"; neo_current_frame = &fr;
    struct regex_t*  head  ;
    struct regex_t*  tail  ;
    char c;
    struct regex_t*  token  ;
    struct regex_t*  __result_obj__0  ;
    unsigned char escaped;
    int buf_begin;
    int negated;
    struct regex_t*  inner  ;
    struct regex_t*  tail_1  ;
    struct regex_t*  sentinel  ;
    # 1562 "./neo-c-str.h"
    head=(struct regex_t* )0;
    # 1563 "./neo-c-str.h"
    tail=(struct regex_t* )0;
    # 1787 "./neo-c-str.h"
    while(pattern[*pos]!=0) {
        # 1567 "./neo-c-str.h"
        c=pattern[*pos];
        # 1574 "./neo-c-str.h"
        if(in_group&&(c==41)) {
            # 1571 "./neo-c-str.h"
            break;
        }
        # 1574 "./neo-c-str.h"
        token=(struct regex_t* )0;
        # 1781 "./neo-c-str.h"
        switch (        c) {
            # 1579 "./neo-c-str.h"
            case 94:
            # 1584 "./neo-c-str.h"
            {
                # 1580 "./neo-c-str.h"
                token=new_token(st);
                # 1582 "./neo-c-str.h"
                if(token==0) {
                    # 1581 "./neo-c-str.h"
                                        __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                # 1582 "./neo-c-str.h"
                token->type=(2);
                # 1583 "./neo-c-str.h"
                (*pos)++;
            }
            # 1584 "./neo-c-str.h"
            break;
            # 1587 "./neo-c-str.h"
            case 36:
            # 1592 "./neo-c-str.h"
            {
                # 1588 "./neo-c-str.h"
                token=new_token(st);
                # 1590 "./neo-c-str.h"
                if(token==0) {
                    # 1589 "./neo-c-str.h"
                                        __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                # 1590 "./neo-c-str.h"
                token->type=(3);
                # 1591 "./neo-c-str.h"
                (*pos)++;
            }
            # 1592 "./neo-c-str.h"
            break;
            # 1595 "./neo-c-str.h"
            case 46:
            # 1600 "./neo-c-str.h"
            {
                # 1596 "./neo-c-str.h"
                token=new_token(st);
                # 1598 "./neo-c-str.h"
                if(token==0) {
                    # 1597 "./neo-c-str.h"
                                        __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                # 1598 "./neo-c-str.h"
                token->type=(1);
                # 1599 "./neo-c-str.h"
                (*pos)++;
            }
            # 1600 "./neo-c-str.h"
            break;
            # 1603 "./neo-c-str.h"
            case 42:
            # 1608 "./neo-c-str.h"
            {
                # 1604 "./neo-c-str.h"
                token=new_token(st);
                # 1606 "./neo-c-str.h"
                if(token==0) {
                    # 1605 "./neo-c-str.h"
                                        __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                # 1606 "./neo-c-str.h"
                token->type=(5);
                # 1607 "./neo-c-str.h"
                (*pos)++;
            }
            # 1608 "./neo-c-str.h"
            break;
            # 1611 "./neo-c-str.h"
            case 43:
            # 1616 "./neo-c-str.h"
            {
                # 1612 "./neo-c-str.h"
                token=new_token(st);
                # 1614 "./neo-c-str.h"
                if(token==0) {
                    # 1613 "./neo-c-str.h"
                                        __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                # 1614 "./neo-c-str.h"
                token->type=(6);
                # 1615 "./neo-c-str.h"
                (*pos)++;
            }
            # 1616 "./neo-c-str.h"
            break;
            # 1619 "./neo-c-str.h"
            case 63:
            # 1624 "./neo-c-str.h"
            {
                # 1620 "./neo-c-str.h"
                token=new_token(st);
                # 1622 "./neo-c-str.h"
                if(token==0) {
                    # 1621 "./neo-c-str.h"
                                        __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                # 1622 "./neo-c-str.h"
                token->type=(4);
                # 1623 "./neo-c-str.h"
                (*pos)++;
            }
            # 1624 "./neo-c-str.h"
            break;
            # 1627 "./neo-c-str.h"
            case 92:
            # 1660 "./neo-c-str.h"
            {
                # 1628 "./neo-c-str.h"
                (*pos)++;
                # 1634 "./neo-c-str.h"
                if(pattern[*pos]==0) {
                    # 1631 "./neo-c-str.h"
                                        __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                # 1634 "./neo-c-str.h"
                token=new_token(st);
                # 1637 "./neo-c-str.h"
                if(token==0) {
                    # 1635 "./neo-c-str.h"
                                        __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                # 1659 "./neo-c-str.h"
                switch (                pattern[*pos]) {
                    # 1639 "./neo-c-str.h"
                    case 100:
                    # 1639 "./neo-c-str.h"
                    token->type=(10);
                    # 1639 "./neo-c-str.h"
                    break;
                    # 1640 "./neo-c-str.h"
                    case 68:
                    # 1640 "./neo-c-str.h"
                    token->type=(11);
                    # 1640 "./neo-c-str.h"
                    break;
                    # 1641 "./neo-c-str.h"
                    case 119:
                    # 1641 "./neo-c-str.h"
                    token->type=(12);
                    # 1641 "./neo-c-str.h"
                    break;
                    # 1642 "./neo-c-str.h"
                    case 87:
                    # 1642 "./neo-c-str.h"
                    token->type=(13);
                    # 1642 "./neo-c-str.h"
                    break;
                    # 1643 "./neo-c-str.h"
                    case 115:
                    # 1643 "./neo-c-str.h"
                    token->type=(14);
                    # 1643 "./neo-c-str.h"
                    break;
                    # 1644 "./neo-c-str.h"
                    case 83:
                    # 1644 "./neo-c-str.h"
                    token->type=(15);
                    # 1644 "./neo-c-str.h"
                    break;
                    # 1646 "./neo-c-str.h"
                    default:
                    # 1657 "./neo-c-str.h"
                    {
                        # 1647 "./neo-c-str.h"
                        token->type=(7);
                        # 1648 "./neo-c-str.h"
                        escaped=0;
                        # 1657 "./neo-c-str.h"
                        if(re_unescape_literal_char(pattern[*pos],&escaped)) {
                            # 1651 "./neo-c-str.h"
                            token->u.ch=escaped;
                        }
                        else {
                            # 1655 "./neo-c-str.h"
                            token->u.ch=(unsigned char)pattern[*pos];
                        }
                    }
                    # 1657 "./neo-c-str.h"
                    break;
                }
                # 1659 "./neo-c-str.h"
                (*pos)++;
            }
            # 1660 "./neo-c-str.h"
            break;
            # 1663 "./neo-c-str.h"
            case 91:
            # 1724 "./neo-c-str.h"
            {
                # 1664 "./neo-c-str.h"
                buf_begin=st->ccl_idx;
                # 1665 "./neo-c-str.h"
                negated=0;
                # 1666 "./neo-c-str.h"
                (*pos)++;
                # 1678 "./neo-c-str.h"
                if(pattern[*pos]==94) {
                    # 1670 "./neo-c-str.h"
                    negated=1;
                    # 1671 "./neo-c-str.h"
                    (*pos)++;
                    # 1676 "./neo-c-str.h"
                    if(pattern[*pos]==0) {
                        # 1674 "./neo-c-str.h"
                                                __result_obj__0 = ((void*)0);
                        neo_current_frame = fr.prev;
                        return __result_obj__0;
                    }
                }
                # 1683 "./neo-c-str.h"
                if(pattern[*pos]==0) {
                    # 1680 "./neo-c-str.h"
                                        __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                # 1707 "./neo-c-str.h"
                while((pattern[*pos]!=0)&&(pattern[*pos]!=93)) {
                    # 1699 "./neo-c-str.h"
                    if(pattern[*pos]==92) {
                        # 1691 "./neo-c-str.h"
                        if(st->ccl_idx>=(st->ccl_capacity-1)) {
                            # 1689 "./neo-c-str.h"
                                                        __result_obj__0 = ((void*)0);
                            neo_current_frame = fr.prev;
                            return __result_obj__0;
                        }
                        # 1691 "./neo-c-str.h"
                        st->ccl_buf[st->ccl_idx++]=92;
                        # 1692 "./neo-c-str.h"
                        (*pos)++;
                        # 1697 "./neo-c-str.h"
                        if(pattern[*pos]==0) {
                            # 1695 "./neo-c-str.h"
                                                        __result_obj__0 = ((void*)0);
                            neo_current_frame = fr.prev;
                            return __result_obj__0;
                        }
                    }
                    # 1703 "./neo-c-str.h"
                    if(st->ccl_idx>=st->ccl_capacity) {
                        # 1701 "./neo-c-str.h"
                                                __result_obj__0 = ((void*)0);
                        neo_current_frame = fr.prev;
                        return __result_obj__0;
                    }
                    # 1703 "./neo-c-str.h"
                    st->ccl_buf[st->ccl_idx++]=(unsigned char)pattern[*pos];
                    # 1704 "./neo-c-str.h"
                    (*pos)++;
                }
                # 1712 "./neo-c-str.h"
                if(pattern[*pos]!=93) {
                    # 1709 "./neo-c-str.h"
                                        __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                # 1716 "./neo-c-str.h"
                if(st->ccl_idx>=st->ccl_capacity) {
                    # 1714 "./neo-c-str.h"
                                        __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                # 1716 "./neo-c-str.h"
                st->ccl_buf[st->ccl_idx++]=0;
                # 1718 "./neo-c-str.h"
                token=new_token(st);
                # 1720 "./neo-c-str.h"
                if(token==0) {
                    # 1719 "./neo-c-str.h"
                                        __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                # 1720 "./neo-c-str.h"
                token->type=((negated)?((9)):((8)));
                # 1721 "./neo-c-str.h"
                token->u.ccl=&st->ccl_buf[buf_begin];
                # 1723 "./neo-c-str.h"
                (*pos)++;
            }
            # 1724 "./neo-c-str.h"
            break;
            # 1727 "./neo-c-str.h"
            case 40:
            # 1760 "./neo-c-str.h"
            {
                # 1728 "./neo-c-str.h"
                (*pos)++;
                # 1729 "./neo-c-str.h"
                inner=compile_sequence(st,pattern,pos,1);
                # 1734 "./neo-c-str.h"
                if(inner==0) {
                    # 1732 "./neo-c-str.h"
                                        __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                # 1739 "./neo-c-str.h"
                if(pattern[*pos]!=41) {
                    # 1736 "./neo-c-str.h"
                                        __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                # 1739 "./neo-c-str.h"
                tail_1=inner;
                # 1744 "./neo-c-str.h"
                while((tail_1!=0)&&(tail_1->type!=(0))) {
                    # 1742 "./neo-c-str.h"
                    tail_1=tail_1->next;
                }
                # 1749 "./neo-c-str.h"
                if(tail_1==0) {
                    # 1746 "./neo-c-str.h"
                                        __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                # 1749 "./neo-c-str.h"
                token=new_token(st);
                # 1751 "./neo-c-str.h"
                if(token==0) {
                    # 1750 "./neo-c-str.h"
                                        __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                # 1751 "./neo-c-str.h"
                token->type=(16);
                # 1752 "./neo-c-str.h"
                token->u.group.first=inner;
                # 1753 "./neo-c-str.h"
                token->u.group.last=tail_1;
                # 1754 "./neo-c-str.h"
                token->u.group.id=++st->group_count;
                # 1756 "./neo-c-str.h"
                tail_1->type=(17);
                # 1757 "./neo-c-str.h"
                tail_1->u.group.first=token;
                # 1759 "./neo-c-str.h"
                (*pos)++;
            }
            # 1760 "./neo-c-str.h"
            break;
            # 1763 "./neo-c-str.h"
            case 41:
            # 1769 "./neo-c-str.h"
            {
                # 1764 "./neo-c-str.h"
                token=new_token(st);
                # 1766 "./neo-c-str.h"
                if(token==0) {
                    # 1765 "./neo-c-str.h"
                                        __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                # 1766 "./neo-c-str.h"
                token->type=(7);
                # 1767 "./neo-c-str.h"
                token->u.ch=(unsigned char)c;
                # 1768 "./neo-c-str.h"
                (*pos)++;
            }
            # 1769 "./neo-c-str.h"
            break;
            # 1772 "./neo-c-str.h"
            default:
            # 1778 "./neo-c-str.h"
            {
                # 1773 "./neo-c-str.h"
                token=new_token(st);
                # 1775 "./neo-c-str.h"
                if(token==0) {
                    # 1774 "./neo-c-str.h"
                                        __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                # 1775 "./neo-c-str.h"
                token->type=(7);
                # 1776 "./neo-c-str.h"
                token->u.ch=(unsigned char)c;
                # 1777 "./neo-c-str.h"
                (*pos)++;
            }
            # 1778 "./neo-c-str.h"
            break;
        }
        # 1785 "./neo-c-str.h"
        if(!append_token(&head,&tail,token)) {
            # 1783 "./neo-c-str.h"
                        __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    # 1787 "./neo-c-str.h"
    sentinel=new_token(st);
    # 1792 "./neo-c-str.h"
    if(sentinel==0) {
        # 1790 "./neo-c-str.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1792 "./neo-c-str.h"
    sentinel->type=(0);
    # 1793 "./neo-c-str.h"
    sentinel->next=((void*)0);
    # 1804 "./neo-c-str.h"
    if(head==0) {
        # 1797 "./neo-c-str.h"
        head=sentinel;
    }
    else {
        # 1801 "./neo-c-str.h"
        tail->next=sentinel;
    }
    # 1804 "./neo-c-str.h"
        __result_obj__0 = head;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

const char* matchpattern(struct regex_t*  pattern  , const char* text, struct anonymous_typeX25*  ctx  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchpattern"; neo_current_frame = &fr;
    const char* __result_obj__0;
    struct regex_t*  current  ;
    struct regex_t*  next  ;
    struct regex_t*  owner  ;
    int idx;
    int start;
    # 1814 "./neo-c-str.h"
    if(pattern==0) {
        # 1811 "./neo-c-str.h"
                __result_obj__0 = text;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1819 "./neo-c-str.h"
    if(pattern->type==(0)) {
        # 1816 "./neo-c-str.h"
                __result_obj__0 = text;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1819 "./neo-c-str.h"
    struct re_capture  snapshot[64]  ;
    memset(&snapshot, 0, sizeof(snapshot));
    # 1820 "./neo-c-str.h"
    snapshot_captures(ctx,snapshot);
    # 1822 "./neo-c-str.h"
    current=pattern;
    # 1823 "./neo-c-str.h"
    const char* cursor=text;
    # 1914 "./neo-c-str.h"
    while(current!=0&&current->type!=(0)) {
        # 1827 "./neo-c-str.h"
        next=current->next;
        # 1852 "./neo-c-str.h"
        if(current->type==(17)) {
            # 1831 "./neo-c-str.h"
            owner=current->u.group.first;
            # 1848 "./neo-c-str.h"
            if((owner!=0)&&(owner->u.group.id>0)&&(ctx->captures!=0)) {
                # 1834 "./neo-c-str.h"
                idx=owner->u.group.id-1;
                # 1847 "./neo-c-str.h"
                if(idx<ctx->capture_capacity) {
                    # 1837 "./neo-c-str.h"
                    start=ctx->captures[idx].start;
                    # 1846 "./neo-c-str.h"
                    if(start>=0) {
                        # 1840 "./neo-c-str.h"
                        ctx->captures[idx].length=(int)(cursor-ctx->base)-start;
                        # 1845 "./neo-c-str.h"
                        if(ctx->captures[idx].length<0) {
                            # 1843 "./neo-c-str.h"
                            ctx->captures[idx].length=0;
                        }
                    }
                }
            }
            # 1848 "./neo-c-str.h"
            current=current->next;
            # 1849 "./neo-c-str.h"
            continue;
        }
        # 1912 "./neo-c-str.h"
        if((next!=0)&&(next->type==(4))) {
            # 1854 "./neo-c-str.h"
            const char* result=matchquestion(current,next->next,cursor,ctx);
            # 1859 "./neo-c-str.h"
            if(result!=0) {
                # 1857 "./neo-c-str.h"
                                __result_obj__0 = result;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            # 1859 "./neo-c-str.h"
            restore_captures(ctx,snapshot);
            # 1860 "./neo-c-str.h"
                        __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if((next!=0)&&(next->type==(5))) {
            # 1864 "./neo-c-str.h"
            const char* result_2=matchstar(current,next->next,cursor,ctx);
            # 1869 "./neo-c-str.h"
            if(result_2!=0) {
                # 1867 "./neo-c-str.h"
                                __result_obj__0 = result_2;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            # 1869 "./neo-c-str.h"
            restore_captures(ctx,snapshot);
            # 1870 "./neo-c-str.h"
                        __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if((next!=0)&&(next->type==(6))) {
            # 1874 "./neo-c-str.h"
            const char* result_3=matchplus(current,next->next,cursor,ctx);
            # 1879 "./neo-c-str.h"
            if(result_3!=0) {
                # 1877 "./neo-c-str.h"
                                __result_obj__0 = result_3;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            # 1879 "./neo-c-str.h"
            restore_captures(ctx,snapshot);
            # 1880 "./neo-c-str.h"
                        __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(current->type==(16)) {
            # 1884 "./neo-c-str.h"
            const char* result_4=matchgroup(current,next,cursor,ctx);
            # 1889 "./neo-c-str.h"
            if(result_4!=0) {
                # 1887 "./neo-c-str.h"
                                __result_obj__0 = result_4;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            # 1889 "./neo-c-str.h"
            restore_captures(ctx,snapshot);
            # 1890 "./neo-c-str.h"
                        __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(current->type==(3)) {
            # 1899 "./neo-c-str.h"
            if(*cursor!=0) {
                # 1896 "./neo-c-str.h"
                restore_captures(ctx,snapshot);
                # 1897 "./neo-c-str.h"
                                __result_obj__0 = ((void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            # 1899 "./neo-c-str.h"
            current=current->next;
        }
        else {
            # 1903 "./neo-c-str.h"
            const char* after=matchtoken(current,cursor,ctx);
            # 1909 "./neo-c-str.h"
            if(after==0) {
                # 1906 "./neo-c-str.h"
                restore_captures(ctx,snapshot);
                # 1907 "./neo-c-str.h"
                                __result_obj__0 = ((void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            # 1909 "./neo-c-str.h"
            cursor=after;
            # 1910 "./neo-c-str.h"
            current=current->next;
        }
    }
    # 1914 "./neo-c-str.h"
        __result_obj__0 = cursor;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

const char* matchgroup(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX25*  ctx  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchgroup"; neo_current_frame = &fr;
    struct regex_t*  end_token  ;
    struct regex_t*  saved_next  ;
    int idx;
    const char* __result_obj__0;
    # 1919 "./neo-c-str.h"
    struct re_capture  snapshot_entry[64]  ;
    memset(&snapshot_entry, 0, sizeof(snapshot_entry));
    # 1920 "./neo-c-str.h"
    snapshot_captures(ctx,snapshot_entry);
    # 1922 "./neo-c-str.h"
    end_token=token->u.group.last;
    # 1923 "./neo-c-str.h"
    saved_next=((end_token!=0)?(end_token->next):(0));
    # 1929 "./neo-c-str.h"
    if(end_token!=0) {
        # 1926 "./neo-c-str.h"
        end_token->next=rest;
    }
    # 1939 "./neo-c-str.h"
    if(token->u.group.id>0&&ctx->captures!=0) {
        # 1931 "./neo-c-str.h"
        idx=token->u.group.id-1;
        # 1937 "./neo-c-str.h"
        if(idx<ctx->capture_capacity) {
            # 1934 "./neo-c-str.h"
            ctx->captures[idx].start=(int)(text-ctx->base);
            # 1935 "./neo-c-str.h"
            ctx->captures[idx].length=0;
        }
    }
    # 1939 "./neo-c-str.h"
    const char* result=matchpattern(token->u.group.first,text,ctx);
    # 1946 "./neo-c-str.h"
    if(end_token!=0) {
        # 1943 "./neo-c-str.h"
        end_token->next=saved_next;
    }
    # 1951 "./neo-c-str.h"
    if(result==0) {
        # 1948 "./neo-c-str.h"
        restore_captures(ctx,snapshot_entry);
    }
    # 1951 "./neo-c-str.h"
        __result_obj__0 = result;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

const char* matchstar(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX25*  ctx  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchstar"; neo_current_frame = &fr;
    const char* __result_obj__0;
    # 1956 "./neo-c-str.h"
    struct re_capture  snapshot_entry[64]  ;
    memset(&snapshot_entry, 0, sizeof(snapshot_entry));
    # 1957 "./neo-c-str.h"
    snapshot_captures(ctx,snapshot_entry);
    # 1959 "./neo-c-str.h"
    const char* consume=matchtoken(token,text,ctx);
    # 1975 "./neo-c-str.h"
    while((consume!=0)&&(consume!=text)) {
        # 1962 "./neo-c-str.h"
        struct re_capture  snapshot_after_token[64]  ;
        memset(&snapshot_after_token, 0, sizeof(snapshot_after_token));
        # 1963 "./neo-c-str.h"
        snapshot_captures(ctx,snapshot_after_token);
        # 1965 "./neo-c-str.h"
        const char* recursive=matchstar(token,rest,consume,ctx);
        # 1971 "./neo-c-str.h"
        if(recursive!=0) {
            # 1968 "./neo-c-str.h"
                        __result_obj__0 = recursive;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 1971 "./neo-c-str.h"
        restore_captures(ctx,snapshot_after_token);
        # 1972 "./neo-c-str.h"
        consume=matchtoken(token,consume,ctx);
    }
    # 1975 "./neo-c-str.h"
    restore_captures(ctx,snapshot_entry);
    # 1976 "./neo-c-str.h"
        __result_obj__0 = matchpattern(rest,text,ctx);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

const char* matchplus(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX25*  ctx  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchplus"; neo_current_frame = &fr;
    const char* __result_obj__0;
    # 1981 "./neo-c-str.h"
    struct re_capture  snapshot_entry[64]  ;
    memset(&snapshot_entry, 0, sizeof(snapshot_entry));
    # 1982 "./neo-c-str.h"
    snapshot_captures(ctx,snapshot_entry);
    # 1984 "./neo-c-str.h"
    const char* first=matchtoken(token,text,ctx);
    # 1991 "./neo-c-str.h"
    if((first==0)||(first==text)) {
        # 1987 "./neo-c-str.h"
        restore_captures(ctx,snapshot_entry);
        # 1988 "./neo-c-str.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1991 "./neo-c-str.h"
    const char* result=matchstar(token,rest,first,ctx);
    # 1997 "./neo-c-str.h"
    if(result!=0) {
        # 1994 "./neo-c-str.h"
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1997 "./neo-c-str.h"
    restore_captures(ctx,snapshot_entry);
    # 1998 "./neo-c-str.h"
        __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

const char* matchquestion(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX25*  ctx  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchquestion"; neo_current_frame = &fr;
    const char* __result_obj__0;
    # 2003 "./neo-c-str.h"
    struct re_capture  snapshot_entry[64]  ;
    memset(&snapshot_entry, 0, sizeof(snapshot_entry));
    # 2004 "./neo-c-str.h"
    snapshot_captures(ctx,snapshot_entry);
    # 2006 "./neo-c-str.h"
    const char* skipped=matchpattern(rest,text,ctx);
    # 2012 "./neo-c-str.h"
    if(skipped!=0) {
        # 2009 "./neo-c-str.h"
                __result_obj__0 = skipped;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2012 "./neo-c-str.h"
    restore_captures(ctx,snapshot_entry);
    # 2014 "./neo-c-str.h"
    const char* consumed=matchtoken(token,text,ctx);
    # 2021 "./neo-c-str.h"
    if((consumed==0)||(consumed==text)) {
        # 2017 "./neo-c-str.h"
        restore_captures(ctx,snapshot_entry);
        # 2018 "./neo-c-str.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2021 "./neo-c-str.h"
    const char* with=matchpattern(rest,consumed,ctx);
    # 2027 "./neo-c-str.h"
    if(with!=0) {
        # 2024 "./neo-c-str.h"
                __result_obj__0 = with;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2027 "./neo-c-str.h"
    restore_captures(ctx,snapshot_entry);
    # 2028 "./neo-c-str.h"
        __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

unsigned char re_fold_char(unsigned char c, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_fold_char"; neo_current_frame = &fr;
    # 2037 "./neo-c-str.h"
    if(ignore_case&&c>=65&&c<=90) {
        # 2035 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return (unsigned char)(c-65+97);
    }
    # 2037 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return c;
    neo_current_frame = fr.prev;
}

const char* matchtoken(struct regex_t*  token  , const char* text, struct anonymous_typeX25*  ctx  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchtoken"; neo_current_frame = &fr;
    const char* __result_obj__0;
    # 2089 "./neo-c-str.h"
    switch (    token->type) {
        # 2045 "./neo-c-str.h"
        case (1):
        # 2045 "./neo-c-str.h"
                __result_obj__0 = (((*text!=0&&matchdot(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        # 2048 "./neo-c-str.h"
        case (7):
        # 2050 "./neo-c-str.h"
                __result_obj__0 = (((*text!=0&&re_fold_char(token->u.ch,ctx->ignore_case)==re_fold_char((unsigned char)*text,ctx->ignore_case)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        # 2053 "./neo-c-str.h"
        case (8):
        # 2053 "./neo-c-str.h"
                __result_obj__0 = (((*text!=0&&matchcharclass(*text,(const char*)token->u.ccl,ctx->ignore_case)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        # 2056 "./neo-c-str.h"
        case (9):
        # 2056 "./neo-c-str.h"
                __result_obj__0 = (((*text!=0&&!matchcharclass(*text,(const char*)token->u.ccl,ctx->ignore_case)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        # 2059 "./neo-c-str.h"
        case (10):
        # 2059 "./neo-c-str.h"
                __result_obj__0 = (((*text!=0&&matchdigit(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        # 2062 "./neo-c-str.h"
        case (11):
        # 2062 "./neo-c-str.h"
                __result_obj__0 = (((*text!=0&&!matchdigit(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        # 2065 "./neo-c-str.h"
        case (12):
        # 2065 "./neo-c-str.h"
                __result_obj__0 = (((*text!=0&&matchalphanum(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        # 2068 "./neo-c-str.h"
        case (13):
        # 2068 "./neo-c-str.h"
                __result_obj__0 = (((*text!=0&&!matchalphanum(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        # 2071 "./neo-c-str.h"
        case (14):
        # 2071 "./neo-c-str.h"
                __result_obj__0 = (((*text!=0&&matchwhitespace(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        # 2074 "./neo-c-str.h"
        case (15):
        # 2074 "./neo-c-str.h"
                __result_obj__0 = (((*text!=0&&!matchwhitespace(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        # 2077 "./neo-c-str.h"
        case (16):
        # 2077 "./neo-c-str.h"
                __result_obj__0 = matchgroup(token,(struct regex_t* )0,text,ctx);
        neo_current_frame = fr.prev;
        return __result_obj__0;
        # 2080 "./neo-c-str.h"
        case (2):
        # 2080 "./neo-c-str.h"
                __result_obj__0 = (((text==ctx->base))?(text):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        # 2083 "./neo-c-str.h"
        case (3):
        # 2083 "./neo-c-str.h"
                __result_obj__0 = (((*text==0))?(text):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        # 2086 "./neo-c-str.h"
        default:
        # 2086 "./neo-c-str.h"
        break;
    }
    # 2089 "./neo-c-str.h"
        __result_obj__0 = (const char*)0;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int matchdigit(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchdigit"; neo_current_frame = &fr;
    # 2095 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return xisdigit((unsigned char)c);
    neo_current_frame = fr.prev;
}

int matchalpha(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchalpha"; neo_current_frame = &fr;
    # 2099 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return xisalpha((unsigned char)c);
    neo_current_frame = fr.prev;
}

int matchwhitespace(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchwhitespace"; neo_current_frame = &fr;
    # 2103 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return xisspace((unsigned char)c);
    neo_current_frame = fr.prev;
}

int matchalphanum(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchalphanum"; neo_current_frame = &fr;
    # 2107 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return ((c==95)||matchalpha(c)||matchdigit(c));
    neo_current_frame = fr.prev;
}

int matchrange(char c, const char* str, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchrange"; neo_current_frame = &fr;
    unsigned char needle;
    unsigned char start;
    unsigned char end;
    # 2111 "./neo-c-str.h"
    needle=(unsigned char)c;
    # 2112 "./neo-c-str.h"
    start=(unsigned char)str[0];
    # 2113 "./neo-c-str.h"
    end=(unsigned char)str[2];
    # 2120 "./neo-c-str.h"
    if(ignore_case) {
        # 2116 "./neo-c-str.h"
        needle=re_fold_char(needle,(_Bool)1);
        # 2117 "./neo-c-str.h"
        start=re_fold_char(start,(_Bool)1);
        # 2118 "./neo-c-str.h"
        end=re_fold_char(end,(_Bool)1);
    }
    # 2126 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return ((needle!=45)&&(str[0]!=0)&&(str[0]!=45)&&(str[1]==45)&&(str[2]!=0)&&((needle>=start)&&(needle<=end)));
    neo_current_frame = fr.prev;
}

int matchdot(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchdot"; neo_current_frame = &fr;
    # 2133 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return c!=10&&c!=13;
    neo_current_frame = fr.prev;
}

int ismetachar(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ismetachar"; neo_current_frame = &fr;
    # 2139 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return ((c==115)||(c==83)||(c==119)||(c==87)||(c==100)||(c==68)||(c==116)||(c==110)||(c==114)||(c==118)||(c==102));
    neo_current_frame = fr.prev;
}

int matchmetachar(char c, const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchmetachar"; neo_current_frame = &fr;
    # 2159 "./neo-c-str.h"
    switch (    str[0]) {
        # 2146 "./neo-c-str.h"
        case 100:
        # 2146 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return matchdigit(c);
        # 2147 "./neo-c-str.h"
        case 68:
        # 2147 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return !matchdigit(c);
        # 2148 "./neo-c-str.h"
        case 119:
        # 2148 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return matchalphanum(c);
        # 2149 "./neo-c-str.h"
        case 87:
        # 2149 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return !matchalphanum(c);
        # 2150 "./neo-c-str.h"
        case 115:
        # 2150 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return matchwhitespace(c);
        # 2151 "./neo-c-str.h"
        case 83:
        # 2151 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return !matchwhitespace(c);
        # 2152 "./neo-c-str.h"
        case 116:
        # 2152 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return (c==9);
        # 2153 "./neo-c-str.h"
        case 110:
        # 2153 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return (c==10);
        # 2154 "./neo-c-str.h"
        case 114:
        # 2154 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return (c==13);
        # 2155 "./neo-c-str.h"
        case 118:
        # 2155 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return (c==11);
        # 2156 "./neo-c-str.h"
        case 102:
        # 2156 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return (c==12);
        # 2157 "./neo-c-str.h"
        default:
        # 2157 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return (c==str[0]);
    }
    neo_current_frame = fr.prev;
}

int matchcharclass(char c, const char* str, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchcharclass"; neo_current_frame = &fr;
    unsigned char needle;
    # 2163 "./neo-c-str.h"
    needle=re_fold_char((unsigned char)c,ignore_case);
    # 2194 "./neo-c-str.h"
    do {
        # 2193 "./neo-c-str.h"
        if(matchrange((char)needle,str,ignore_case)) {
            # 2168 "./neo-c-str.h"
                        neo_current_frame = fr.prev;
            return 1;
        }
        else if(str[0]==92) {
            # 2172 "./neo-c-str.h"
            str+=1;
            # 2181 "./neo-c-str.h"
            if(matchmetachar((char)needle,str)) {
                # 2175 "./neo-c-str.h"
                                neo_current_frame = fr.prev;
                return 1;
            }
            else if((needle==re_fold_char((unsigned char)str[0],ignore_case))&&!ismetachar((char)str[0])) {
                # 2179 "./neo-c-str.h"
                                neo_current_frame = fr.prev;
                return 1;
            }
        }
        else if(needle==re_fold_char((unsigned char)str[0],ignore_case)) {
            # 2192 "./neo-c-str.h"
            if(needle==45) {
                # 2186 "./neo-c-str.h"
                                neo_current_frame = fr.prev;
                return ((str[-1]==0)||(str[1]==0));
            }
            else {
                # 2190 "./neo-c-str.h"
                                neo_current_frame = fr.prev;
                return 1;
            }
        }
    } while(*str++!=0);
    # 2196 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

void re_print_internal(struct regex_t*  pattern  , int depth)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_print_internal"; neo_current_frame = &fr;
    int i;
    # 2206 "./neo-c-str.h"
    const char* types[]={
    "RE_UNUSED", "RE_DOT", "RE_BEGIN", "RE_END", "RE_QUESTIONMARK", "RE_STAR", "RE_PLUS", "RE_CHAR",
    "RE_CHAR_CLASS", "RE_INV_CHAR_CLASS", "RE_DIGIT", "RE_NOT_DIGIT", "RE_ALPHA", "RE_NOT_ALPHA",
    "RE_WHITESPACE", "RE_NOT_WHITESPACE", "RE_GROUP", "RE_GROUP_END"
  };
    # 2242 "./neo-c-str.h"
    while(pattern!=0&&pattern->type!=(0)) {
        # 2214 "./neo-c-str.h"
        for(i=0        ;i<depth;++i){
            # 2212 "./neo-c-str.h"
            putchar(32);
        }
        # 2214 "./neo-c-str.h"
        printf("type: %s",types[pattern->type]);
        # 2239 "./neo-c-str.h"
        if((pattern->type==(8))||(pattern->type==(9))) {
            # 2218 "./neo-c-str.h"
            printf(" [");
            # 2219 "./neo-c-str.h"
            const unsigned char* ccl=pattern->u.ccl;
            # 2225 "./neo-c-str.h"
            while(*ccl!=0&&*ccl!=93) {
                # 2222 "./neo-c-str.h"
                printf("%c",*ccl);
                # 2223 "./neo-c-str.h"
                ++ccl;
            }
            # 2225 "./neo-c-str.h"
            printf("]");
        }
        else if(pattern->type==(7)) {
            # 2229 "./neo-c-str.h"
            printf(" '%c'",pattern->u.ch);
        }
        else if(pattern->type==(16)) {
            # 2233 "./neo-c-str.h"
            printf(" id=%d\n",pattern->u.group.id);
            # 2234 "./neo-c-str.h"
            re_print_internal(pattern->u.group.first,depth+2);
            # 2235 "./neo-c-str.h"
            pattern=pattern->next;
            # 2236 "./neo-c-str.h"
            continue;
        }
        # 2239 "./neo-c-str.h"
        printf("\n");
        # 2240 "./neo-c-str.h"
        pattern=pattern->next;
    }
    neo_current_frame = fr.prev;
}

int re_get_group_count(struct re_program*  pattern  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_get_group_count"; neo_current_frame = &fr;
    struct re_program*  program  ;
    # 2251 "./neo-c-str.h"
    if(pattern==0) {
        # 2248 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 2251 "./neo-c-str.h"
    program=(struct re_program* )pattern;
    # 2252 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return program->group_count;
    neo_current_frame = fr.prev;
}

int charp_index_regex(const char* self, const char* reg, int default_value, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index_regex"; neo_current_frame = &fr;
    struct re_program*  re  ;
    int result;
    int offset;
    int n;
    int result_5;
    int matchlength;
    int max_captures;
    int regex_result;
    # 2299 "./neo-c-str.h"
    if(self==((void*)0)||reg==((void*)0)) {
        # 2296 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 2299 "./neo-c-str.h"
    re=re_compile(reg);
    # 2305 "./neo-c-str.h"
    if(re==((void*)0)) {
        # 2302 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 2305 "./neo-c-str.h"
    result=default_value;
    # 2307 "./neo-c-str.h"
    offset=0;
    # 2309 "./neo-c-str.h"
    n=0;
    # 2311 "./neo-c-str.h"
    result_5=default_value;
    # 2331 "./neo-c-str.h"
    while((_Bool)1) {
        # 2314 "./neo-c-str.h"
        matchlength=0;
        # 2315 "./neo-c-str.h"
        max_captures=8;
        # 2316 "./neo-c-str.h"
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        # 2317 "./neo-c-str.h"
        regex_result=re_matchp_ex(re,self,&matchlength,captures,max_captures,ignore_case);
        # 2326 "./neo-c-str.h"
        if(regex_result>=0) {
            # 2322 "./neo-c-str.h"
            result_5=regex_result;
            # 2323 "./neo-c-str.h"
            break;
        }
        # 2329 "./neo-c-str.h"
        {
            # 2327 "./neo-c-str.h"
            break;
        }
    }
    # 2331 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return result_5;
    neo_current_frame = fr.prev;
}

int charp_rindex_regex(const char* self, const char* reg, int default_value, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_rindex_regex"; neo_current_frame = &fr;
    struct re_program*  re  ;
    int result;
    int offset;
    int n;
    void* __right_value0 = (void*)0;
    char*  self2  ;
    int result_6;
    int matchlength;
    int max_captures;
    int regex_result;
    int __result_obj__0;
    # 2367 "./neo-c-str.h"
    if(self==((void*)0)||reg==((void*)0)) {
        # 2364 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 2367 "./neo-c-str.h"
    re=re_compile(reg);
    # 2373 "./neo-c-str.h"
    if(re==((void*)0)) {
        # 2370 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 2373 "./neo-c-str.h"
    result=default_value;
    # 2375 "./neo-c-str.h"
    offset=0;
    # 2377 "./neo-c-str.h"
    n=0;
    # 2379 "./neo-c-str.h"
    self2=(char* )come_increment_ref_count(charp_reverse(self), "./neo-c-str.h", 2379, 10);
    # 2381 "./neo-c-str.h"
    result_6=default_value;
    # 2401 "./neo-c-str.h"
    while((_Bool)1) {
        # 2384 "./neo-c-str.h"
        matchlength=0;
        # 2385 "./neo-c-str.h"
        max_captures=8;
        # 2386 "./neo-c-str.h"
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        # 2387 "./neo-c-str.h"
        regex_result=re_matchp_ex(re,self2,&matchlength,captures,max_captures,ignore_case);
        # 2396 "./neo-c-str.h"
        if(regex_result>=0) {
            # 2392 "./neo-c-str.h"
            result_6=strlen(self)-matchlength;
            # 2393 "./neo-c-str.h"
            break;
        }
        # 2399 "./neo-c-str.h"
        {
            # 2397 "./neo-c-str.h"
            break;
        }
    }
    # 2401 "./neo-c-str.h"
        __result_obj__0 = result_6;
    (self2 = come_decrement_ref_count(self2, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2401, 11));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char*  string_chomp(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_chomp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  result  ;
    # 2432 "./neo-c-str.h"
    if(str==((void*)0)) {
        # 2430 "./neo-c-str.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c-str.h",2430))), "./neo-c-str.h", 2430, 12);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 2430, 13));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 2430, 14));
        return __result_obj__0;
    }
    # 2432 "./neo-c-str.h"
    __right_value0 = (void*)0;
    result=(char* )come_increment_ref_count(__builtin_string(str,"./neo-c-str.h",2432), "./neo-c-str.h", 2432, 15);
    # 2438 "./neo-c-str.h"
    if(result[string_length(result)-1]==10) {
        # 2435 "./neo-c-str.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(result,0,-2))), "./neo-c-str.h", 2435, 16);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2435, 17));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 2435, 18));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 2435, 19));
        return __result_obj__0;
    }
    # 2438 "./neo-c-str.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c-str.h", 2438, 20);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 2438, 21));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 2438, 22));
    return __result_obj__0;
}

int string_rindex_regex(char* self, const char* reg, int default_value, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_rindex_regex"; neo_current_frame = &fr;
    # 2541 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return charp_rindex_regex(self,reg,default_value,ignore_case);
    neo_current_frame = fr.prev;
}

int string_index_regex(char* self, const char* reg, int default_value, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_index_regex"; neo_current_frame = &fr;
    # 2552 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return charp_index_regex(self,reg,default_value,ignore_case);
    neo_current_frame = fr.prev;
}

_Bool charp_match(char* self, const char* reg, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_match"; neo_current_frame = &fr;
    struct re_program*  re  ;
    int offset;
    int n;
    int matchlength;
    int max_captures;
    int regex_result;
    _Bool __result_obj__0;
    # 2571 "./neo-c-str.h"
    if(self==((void*)0)||reg==((void*)0)) {
        # 2568 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 2571 "./neo-c-str.h"
    re=re_compile(reg);
    # 2577 "./neo-c-str.h"
    if(re==((void*)0)) {
        # 2574 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 2577 "./neo-c-str.h"
    offset=0;
    # 2579 "./neo-c-str.h"
    n=0;
    # 2581 "./neo-c-str.h"
    matchlength=0;
    # 2582 "./neo-c-str.h"
    max_captures=8;
    # 2583 "./neo-c-str.h"
    struct re_capture  captures[max_captures]  ;
    memset(&captures, 0, sizeof(captures));
    # 2584 "./neo-c-str.h"
    regex_result=re_matchp_ex(re,self,&matchlength,captures,max_captures,ignore_case);
    # 2596 "./neo-c-str.h"
    if(regex_result>=0) {
        # 2589 "./neo-c-str.h"
                __result_obj__0 = (_Bool)1;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else {
        # 2594 "./neo-c-str.h"
                __result_obj__0 = (_Bool)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    # 157 "./neo-c-str.h"
    self->head=((void*)0);
    # 158 "./neo-c-str.h"
    self->tail=((void*)0);
    # 159 "./neo-c-str.h"
    self->len=0;
    # 161 "./neo-c-str.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c-str.h", 161, 24);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c-str.h}", 0, 27);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c-str.h}", 0, 28);
    return __result_obj__0;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    # 178 "./neo-c-str.h"
    if(self==((void*)0)) {
        # 176 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 178 "./neo-c-str.h"
    it=self->head;
    # 184 "./neo-c-str.h"
    while(it!=((void*)0)) {
        # 180 "./neo-c-str.h"
        prev_it=it;
        # 181 "./neo-c-str.h"
        it=it->next;
        # 182 "./neo-c-str.h"
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c-str.h}", 182, 26);
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
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 25));
    }
            neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj1  ;
    struct list_item$1char$ph* litem_7;
    char*  __dec_obj2  ;
    struct list_item$1char$ph* litem_8;
    char*  __dec_obj3  ;
    # 209 "./neo-c-str.h"
    if(self==((void*)0)) {
        # 207 "./neo-c-str.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 207, 43));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 240 "./neo-c-str.h"
    if(self->len==0) {
        # 210 "./neo-c-str.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c-str.h", 210, 44, "struct list_item$1char$ph*"))), "./neo-c-str.h", 210, 45);
        # 212 "./neo-c-str.h"
        litem->prev=((void*)0);
        # 213 "./neo-c-str.h"
        litem->next=((void*)0);
        # 214 "./neo-c-str.h"
        __dec_obj1=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c-str.h", 214, 47);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c-str.h", 214, 46);
        # 216 "./neo-c-str.h"
        self->tail=litem;
        # 217 "./neo-c-str.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 220 "./neo-c-str.h"
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c-str.h", 220, 48, "struct list_item$1char$ph*"))), "./neo-c-str.h", 220, 49);
        # 222 "./neo-c-str.h"
        litem_7->prev=self->head;
        # 223 "./neo-c-str.h"
        litem_7->next=((void*)0);
        # 224 "./neo-c-str.h"
        __dec_obj2=litem_7->item,
        litem_7->item=(char* )come_increment_ref_count(item, "./neo-c-str.h", 224, 51);
        __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c-str.h", 224, 50);
        # 226 "./neo-c-str.h"
        self->tail=litem_7;
        # 227 "./neo-c-str.h"
        self->head->next=litem_7;
    }
    else {
        # 230 "./neo-c-str.h"
        __right_value0 = (void*)0;
        litem_8=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c-str.h", 230, 52, "struct list_item$1char$ph*"))), "./neo-c-str.h", 230, 53);
        # 232 "./neo-c-str.h"
        litem_8->prev=self->tail;
        # 233 "./neo-c-str.h"
        litem_8->next=((void*)0);
        # 234 "./neo-c-str.h"
        __dec_obj3=litem_8->item,
        litem_8->item=(char* )come_increment_ref_count(item, "./neo-c-str.h", 234, 55);
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c-str.h", 234, 54);
        # 236 "./neo-c-str.h"
        self->tail->next=litem_8;
        # 237 "./neo-c-str.h"
        self->tail=litem_8;
    }
    # 240 "./neo-c-str.h"
    self->len++;
    # 242 "./neo-c-str.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 242, 56));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj4  ;
    struct list_item$1char$ph* litem_9;
    char*  __dec_obj5  ;
    struct list_item$1char$ph* litem_10;
    char*  __dec_obj6  ;
    # 294 "./neo-c-str.h"
    if(self==((void*)0)) {
        # 291 "./neo-c-str.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 291, 59));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 325 "./neo-c-str.h"
    if(self->len==0) {
        # 295 "./neo-c-str.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c-str.h", 295, 60, "struct list_item$1char$ph*"))), "./neo-c-str.h", 295, 61);
        # 297 "./neo-c-str.h"
        litem->prev=((void*)0);
        # 298 "./neo-c-str.h"
        litem->next=((void*)0);
        # 299 "./neo-c-str.h"
        __dec_obj4=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c-str.h", 299, 63);
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c-str.h", 299, 62);
        # 301 "./neo-c-str.h"
        self->tail=litem;
        # 302 "./neo-c-str.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 305 "./neo-c-str.h"
        __right_value0 = (void*)0;
        litem_9=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c-str.h", 305, 64, "struct list_item$1char$ph*"))), "./neo-c-str.h", 305, 65);
        # 307 "./neo-c-str.h"
        litem_9->prev=self->head;
        # 308 "./neo-c-str.h"
        litem_9->next=((void*)0);
        # 309 "./neo-c-str.h"
        __dec_obj5=litem_9->item,
        litem_9->item=(char* )come_increment_ref_count(item, "./neo-c-str.h", 309, 67);
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c-str.h", 309, 66);
        # 311 "./neo-c-str.h"
        self->tail=litem_9;
        # 312 "./neo-c-str.h"
        self->head->next=litem_9;
    }
    else {
        # 315 "./neo-c-str.h"
        __right_value0 = (void*)0;
        litem_10=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c-str.h", 315, 68, "struct list_item$1char$ph*"))), "./neo-c-str.h", 315, 69);
        # 317 "./neo-c-str.h"
        litem_10->prev=self->tail;
        # 318 "./neo-c-str.h"
        litem_10->next=((void*)0);
        # 319 "./neo-c-str.h"
        __dec_obj6=litem_10->item,
        litem_10->item=(char* )come_increment_ref_count(item, "./neo-c-str.h", 319, 71);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c-str.h", 319, 70);
        # 321 "./neo-c-str.h"
        self->tail->next=litem_10;
        # 322 "./neo-c-str.h"
        self->tail=litem_10;
    }
    # 325 "./neo-c-str.h"
    self->len++;
    # 327 "./neo-c-str.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 327, 72));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct list$1char$ph* charp_scan(const char* self, const char* reg, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_scan"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct re_program*  re  ;
    int offset;
    int n;
    int group_count;
    int matchlength;
    int max_captures;
    int regex_result;
    char*  str  ;
    int capture_count;
    int i;
    struct re_capture*  cp  ;
    char*  match_string  ;
    # 2603 "./neo-c-str.h"
    if(self==((void*)0)||reg==((void*)0)) {
        # 2601 "./neo-c-str.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c-str.h", 2601, 23, "struct list$1char$ph*"), "./neo-c-str.h", 2601, 29)))), "./neo-c-str.h", 2601, 30);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c-str.h}", 2601, 31);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c-str.h}", 2601, 32);
        return __result_obj__0;
    }
    # 2603 "./neo-c-str.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c-str.h", 2603, 33, "struct list$1char$ph*"), "./neo-c-str.h", 2603, 34)), "./neo-c-str.h", 2603, 35);
    # 2605 "./neo-c-str.h"
    re=re_compile(reg);
    # 2611 "./neo-c-str.h"
    if(re==((void*)0)) {
        # 2608 "./neo-c-str.h"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c-str.h", 2608, 36, "struct list$1char$ph*"), "./neo-c-str.h", 2608, 37)))), "./neo-c-str.h", 2608, 38);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c-str.h}", 2608, 39);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c-str.h}", 2608, 40);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c-str.h}", 2608, 41);
        return __result_obj__0;
    }
    # 2611 "./neo-c-str.h"
    offset=0;
    # 2613 "./neo-c-str.h"
    n=0;
    # 2615 "./neo-c-str.h"
    group_count=re_get_group_count(re);
    # 2666 "./neo-c-str.h"
    while((_Bool)1) {
        # 2618 "./neo-c-str.h"
        matchlength=0;
        # 2619 "./neo-c-str.h"
        max_captures=8;
        # 2620 "./neo-c-str.h"
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        # 2621 "./neo-c-str.h"
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        # 2664 "./neo-c-str.h"
        if(regex_result>=0&&group_count==0) {
            # 2626 "./neo-c-str.h"
            __right_value0 = (void*)0;
            str=(char* )come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength), "./neo-c-str.h", 2626, 42);
            # 2628 "./neo-c-str.h"
            list$1char$ph_add(result,(char* )come_increment_ref_count(str, "./neo-c-str.h", 2628, 57));
            # 2636 "./neo-c-str.h"
            if(matchlength==0) {
                # 2631 "./neo-c-str.h"
                offset++;
            }
            else {
                # 2634 "./neo-c-str.h"
                offset=offset+regex_result+matchlength;
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2664, 58));
        }
        else if(regex_result>=0&&group_count>0) {
            # 2639 "./neo-c-str.h"
            capture_count=group_count;
            # 2643 "./neo-c-str.h"
            if(capture_count>max_captures) {
                # 2641 "./neo-c-str.h"
                capture_count=max_captures;
            }
            # 2653 "./neo-c-str.h"
            for(i=0            ;i<capture_count;i++){
                # 2644 "./neo-c-str.h"
                cp=&captures[i];
                # 2649 "./neo-c-str.h"
                if(cp->start<0||cp->length<0) {
                    # 2646 "./neo-c-str.h"
                    __right_value0 = (void*)0;
                    list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string("","./neo-c-str.h",2646), "./neo-c-str.h", 2646, 73));
                    # 2647 "./neo-c-str.h"
                    continue;
                }
                # 2649 "./neo-c-str.h"
                __right_value0 = (void*)0;
                match_string=(char* )come_increment_ref_count(charp_substring((self+offset),cp->start,cp->start+cp->length), "./neo-c-str.h", 2649, 74);
                # 2650 "./neo-c-str.h"
                list$1char$ph_push_back(result,(char* )come_increment_ref_count(match_string, "./neo-c-str.h", 2650, 75));
                (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2653, 76));
            }
            # 2659 "./neo-c-str.h"
            if(matchlength==0) {
                # 2654 "./neo-c-str.h"
                offset++;
            }
            else {
                # 2657 "./neo-c-str.h"
                offset=offset+regex_result+matchlength;
            }
        }
        else {
            # 2662 "./neo-c-str.h"
            break;
        }
    }
    # 2666 "./neo-c-str.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c-str.h", 2666, 77);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c-str.h}", 2666, 78);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c-str.h}", 2666, 79);
    return __result_obj__0;
}

struct list$1char$ph* charp_split(const char* self, const char* reg, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_split"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct re_program*  re  ;
    int offset;
    int n;
    int group_count;
    int matchlength;
    int max_captures;
    int regex_result;
    char*  str  ;
    char*  str_11  ;
    # 2675 "./neo-c-str.h"
    if(self==((void*)0)||reg==((void*)0)) {
        # 2672 "./neo-c-str.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c-str.h", 2672, 80, "struct list$1char$ph*"), "./neo-c-str.h", 2672, 81)))), "./neo-c-str.h", 2672, 82);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c-str.h}", 2672, 83);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c-str.h}", 2672, 84);
        return __result_obj__0;
    }
    # 2675 "./neo-c-str.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c-str.h", 2675, 85, "struct list$1char$ph*"), "./neo-c-str.h", 2675, 86)), "./neo-c-str.h", 2675, 87);
    # 2677 "./neo-c-str.h"
    re=re_compile(reg);
    # 2683 "./neo-c-str.h"
    if(re==((void*)0)) {
        # 2680 "./neo-c-str.h"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c-str.h", 2680, 88, "struct list$1char$ph*"), "./neo-c-str.h", 2680, 89)))), "./neo-c-str.h", 2680, 90);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c-str.h}", 2680, 91);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c-str.h}", 2680, 92);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c-str.h}", 2680, 93);
        return __result_obj__0;
    }
    # 2683 "./neo-c-str.h"
    offset=0;
    # 2685 "./neo-c-str.h"
    n=0;
    # 2687 "./neo-c-str.h"
    group_count=re_get_group_count(re);
    # 2716 "./neo-c-str.h"
    while((_Bool)1) {
        # 2690 "./neo-c-str.h"
        matchlength=0;
        # 2691 "./neo-c-str.h"
        max_captures=8;
        # 2692 "./neo-c-str.h"
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        # 2693 "./neo-c-str.h"
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        # 2714 "./neo-c-str.h"
        if(regex_result>=0&&group_count==0) {
            # 2698 "./neo-c-str.h"
            __right_value0 = (void*)0;
            str=(char* )come_increment_ref_count(charp_substring(self,offset,offset+regex_result), "./neo-c-str.h", 2698, 94);
            # 2700 "./neo-c-str.h"
            list$1char$ph_add(result,(char* )come_increment_ref_count(str, "./neo-c-str.h", 2700, 95));
            # 2708 "./neo-c-str.h"
            if(matchlength==0) {
                # 2703 "./neo-c-str.h"
                offset++;
            }
            else {
                # 2706 "./neo-c-str.h"
                offset=offset+regex_result+matchlength;
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2714, 96));
        }
        else {
            # 2712 "./neo-c-str.h"
            break;
        }
    }
    # 2721 "./neo-c-str.h"
    if(offset<charp_length(self)) {
        # 2717 "./neo-c-str.h"
        __right_value0 = (void*)0;
        str_11=(char* )come_increment_ref_count(charp_substring(self,offset,-1), "./neo-c-str.h", 2717, 97);
        # 2718 "./neo-c-str.h"
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(str_11, "./neo-c-str.h", 2718, 98));
        (str_11 = come_decrement_ref_count(str_11, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2721, 99));
    }
    # 2721 "./neo-c-str.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c-str.h", 2721, 100);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c-str.h}", 2721, 101);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c-str.h}", 2721, 102);
    return __result_obj__0;
}

char*  string_sub(char* self, const char* reg, const char* replace, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_sub"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 2726 "./neo-c-str.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_sub(self,reg,replace,(_Bool)1,ignore_case))), "./neo-c-str.h", 2726, 103);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 2726, 104));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 2726, 105));
    return __result_obj__0;
}

struct list$1char$ph* string_scan(char* self, const char* reg, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_scan"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    # 2736 "./neo-c-str.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=charp_scan(self,reg,ignore_case))), "./neo-c-str.h", 2736, 106);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c-str.h}", 2736, 107);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c-str.h}", 2736, 108);
    return __result_obj__0;
}

struct list$1char$ph* string_split(char* self, const char* reg, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_split"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    # 2741 "./neo-c-str.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=charp_split(self,reg,ignore_case))), "./neo-c-str.h", 2741, 109);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c-str.h}", 2741, 110);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c-str.h}", 2741, 111);
    return __result_obj__0;
}

_Bool string_match(char* self, const char* reg, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_match"; neo_current_frame = &fr;
    # 2746 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return charp_match(self,reg,ignore_case);
    neo_current_frame = fr.prev;
}

char*  charp_sub(char* self, const char* reg, const char* replace, _Bool global, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_sub"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    struct re_program*  re  ;
    int offset;
    int n;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    int group_count;
    int matchlength;
    int max_captures;
    int regex_result;
    char*  str  ;
    char*  str_12  ;
    char*  str_13  ;
    # 2755 "./neo-c-str.h"
    if(self==((void*)0)||reg==((void*)0)) {
        # 2752 "./neo-c-str.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c-str.h",2752))), "./neo-c-str.h", 2752, 112);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 2752, 113));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 2752, 114));
        return __result_obj__0;
    }
    # 2755 "./neo-c-str.h"
    re=re_compile(reg);
    # 2761 "./neo-c-str.h"
    if(re==((void*)0)) {
        # 2758 "./neo-c-str.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c-str.h",2758))), "./neo-c-str.h", 2758, 115);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 2758, 116));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 2758, 117));
        return __result_obj__0;
    }
    # 2761 "./neo-c-str.h"
    offset=0;
    # 2763 "./neo-c-str.h"
    n=0;
    # 2765 "./neo-c-str.h"
    __right_value0 = (void*)0;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c-str.h", 2765, 118, "struct buffer* "), "./neo-c-str.h", 2765, 119)), "./neo-c-str.h", 2765, 120);
    # 2767 "./neo-c-str.h"
    group_count=re_get_group_count(re);
    # 2804 "./neo-c-str.h"
    while((_Bool)1) {
        # 2770 "./neo-c-str.h"
        matchlength=0;
        # 2771 "./neo-c-str.h"
        max_captures=8;
        # 2772 "./neo-c-str.h"
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        # 2773 "./neo-c-str.h"
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        # 2802 "./neo-c-str.h"
        if(regex_result>=0&&group_count==0) {
            # 2778 "./neo-c-str.h"
            __right_value0 = (void*)0;
            str=(char* )come_increment_ref_count(charp_substring(self,offset,offset+regex_result), "./neo-c-str.h", 2778, 121);
            # 2780 "./neo-c-str.h"
            buffer_append_str(result,str);
            # 2781 "./neo-c-str.h"
            buffer_append_str(result,replace);
            # 2790 "./neo-c-str.h"
            if(matchlength==0) {
                # 2784 "./neo-c-str.h"
                offset++;
            }
            else {
                # 2787 "./neo-c-str.h"
                offset=offset+regex_result+matchlength;
            }
            # 2795 "./neo-c-str.h"
            if(!global) {
                # 2791 "./neo-c-str.h"
                __right_value0 = (void*)0;
                str_12=(char* )come_increment_ref_count(charp_substring(self,offset,-1), "./neo-c-str.h", 2791, 122);
                # 2792 "./neo-c-str.h"
                buffer_append_str(result,str_12);
                # 2793 "./neo-c-str.h"
                (str_12 = come_decrement_ref_count(str_12, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2793, 123));
                (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2793, 124));
                break;
                (str_12 = come_decrement_ref_count(str_12, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2795, 125));
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2802, 126));
        }
        else {
            # 2798 "./neo-c-str.h"
            __right_value0 = (void*)0;
            str_13=(char* )come_increment_ref_count(charp_substring(self,offset,-1), "./neo-c-str.h", 2798, 127);
            # 2799 "./neo-c-str.h"
            buffer_append_str(result,str_13);
            # 2800 "./neo-c-str.h"
            (str_13 = come_decrement_ref_count(str_13, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2800, 128));
            break;
            (str_13 = come_decrement_ref_count(str_13, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2802, 129));
        }
    }
    # 2804 "./neo-c-str.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(result))), "./neo-c-str.h", 2804, 130);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c-str.h}", 2804, 131);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 2804, 132));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 2804, 133));
    return __result_obj__0;
}

char*  charp_sub_block(char* self, const char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_sub_block"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct re_program*  re  ;
    int offset;
    int n;
    int group_count;
    int matchlength;
    int max_captures;
    int regex_result;
    char*  str  ;
    struct list$1char$ph* group_strings;
    char*  match_string  ;
    char*  block_result  ;
    char*  str_14  ;
    char*  str_15  ;
    struct list$1char$ph* group_strings_16;
    int capture_count;
    int i;
    struct re_capture*  cp  ;
    char*  match_string_17  ;
    char*  match_string_18  ;
    char*  block_result_19  ;
    char*  str_20  ;
    # 2813 "./neo-c-str.h"
    if(self==((void*)0)||reg==((void*)0)) {
        # 2810 "./neo-c-str.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c-str.h",2810))), "./neo-c-str.h", 2810, 134);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 2810, 135));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 2810, 136));
        return __result_obj__0;
    }
    # 2813 "./neo-c-str.h"
    __right_value0 = (void*)0;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c-str.h", 2813, 137, "struct buffer* "), "./neo-c-str.h", 2813, 138)), "./neo-c-str.h", 2813, 139);
    # 2815 "./neo-c-str.h"
    re=re_compile(reg);
    # 2821 "./neo-c-str.h"
    if(re==((void*)0)) {
        # 2818 "./neo-c-str.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c-str.h",2818))), "./neo-c-str.h", 2818, 140);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c-str.h}", 2818, 141);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 2818, 142));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 2818, 143));
        return __result_obj__0;
    }
    # 2821 "./neo-c-str.h"
    offset=0;
    # 2823 "./neo-c-str.h"
    n=0;
    # 2825 "./neo-c-str.h"
    group_count=re_get_group_count(re);
    # 2904 "./neo-c-str.h"
    while((_Bool)1) {
        # 2828 "./neo-c-str.h"
        matchlength=0;
        # 2829 "./neo-c-str.h"
        max_captures=8;
        # 2830 "./neo-c-str.h"
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        # 2831 "./neo-c-str.h"
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        # 2903 "./neo-c-str.h"
        if(regex_result>=0&&group_count==0) {
            # 2836 "./neo-c-str.h"
            __right_value0 = (void*)0;
            str=(char* )come_increment_ref_count(charp_substring(self,offset,offset+regex_result), "./neo-c-str.h", 2836, 144);
            # 2838 "./neo-c-str.h"
            buffer_append_str(result,str);
            # 2840 "./neo-c-str.h"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            group_strings=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c-str.h", 2840, 145, "struct list$1char$ph*"), "./neo-c-str.h", 2840, 146)), "./neo-c-str.h", 2840, 147);
            # 2842 "./neo-c-str.h"
            __right_value0 = (void*)0;
            match_string=(char* )come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength), "./neo-c-str.h", 2842, 148);
            # 2844 "./neo-c-str.h"
            __right_value0 = (void*)0;
            block_result=(char*)come_increment_ref_count(block(parent,match_string,group_strings), "./neo-c-str.h", 2844, 149);
            # 2846 "./neo-c-str.h"
            buffer_append_str(result,block_result);
            # 2855 "./neo-c-str.h"
            if(matchlength==0) {
                # 2849 "./neo-c-str.h"
                offset++;
            }
            else {
                # 2852 "./neo-c-str.h"
                offset=offset+regex_result+matchlength;
            }
            # 2860 "./neo-c-str.h"
            if(!global) {
                # 2856 "./neo-c-str.h"
                __right_value0 = (void*)0;
                str_14=(char* )come_increment_ref_count(charp_substring(self,offset,-1), "./neo-c-str.h", 2856, 150);
                # 2857 "./neo-c-str.h"
                buffer_append_str(result,str_14);
                # 2858 "./neo-c-str.h"
                (str_14 = come_decrement_ref_count(str_14, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2858, 151));
                (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2858, 152));
                come_call_finalizer(list$1char$ph$p_finalize, group_strings, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c-str.h}", 2858, 153);
                (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2858, 154));
                (block_result = come_decrement_ref_count(block_result, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2858, 155));
                break;
                (str_14 = come_decrement_ref_count(str_14, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2860, 156));
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2903, 157));
            come_call_finalizer(list$1char$ph$p_finalize, group_strings, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c-str.h}", 2903, 158);
            (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2903, 159));
            (block_result = come_decrement_ref_count(block_result, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2903, 160));
        }
        else if(regex_result>=0&&group_count>0) {
            # 2864 "./neo-c-str.h"
            __right_value0 = (void*)0;
            str_15=(char* )come_increment_ref_count(charp_substring(self,offset,offset+regex_result), "./neo-c-str.h", 2864, 161);
            # 2866 "./neo-c-str.h"
            buffer_append_str(result,str_15);
            # 2868 "./neo-c-str.h"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            group_strings_16=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c-str.h", 2868, 162, "struct list$1char$ph*"), "./neo-c-str.h", 2868, 163)), "./neo-c-str.h", 2868, 164);
            # 2870 "./neo-c-str.h"
            capture_count=group_count;
            # 2874 "./neo-c-str.h"
            if(capture_count>max_captures) {
                # 2872 "./neo-c-str.h"
                capture_count=max_captures;
            }
            # 2884 "./neo-c-str.h"
            for(i=0            ;i<capture_count;i++){
                # 2875 "./neo-c-str.h"
                cp=&captures[i];
                # 2880 "./neo-c-str.h"
                if(cp->start<0||cp->length<0) {
                    # 2877 "./neo-c-str.h"
                    __right_value0 = (void*)0;
                    list$1char$ph_push_back(group_strings_16,(char* )come_increment_ref_count(__builtin_string("","./neo-c-str.h",2877), "./neo-c-str.h", 2877, 165));
                    # 2878 "./neo-c-str.h"
                    continue;
                }
                # 2880 "./neo-c-str.h"
                __right_value0 = (void*)0;
                match_string_17=(char* )come_increment_ref_count(charp_substring((self+offset),cp->start,cp->start+cp->length), "./neo-c-str.h", 2880, 166);
                # 2881 "./neo-c-str.h"
                list$1char$ph_push_back(group_strings_16,(char* )come_increment_ref_count(match_string_17, "./neo-c-str.h", 2881, 167));
                (match_string_17 = come_decrement_ref_count(match_string_17, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2884, 168));
            }
            # 2884 "./neo-c-str.h"
            __right_value0 = (void*)0;
            match_string_18=(char* )come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength), "./neo-c-str.h", 2884, 169);
            # 2886 "./neo-c-str.h"
            __right_value0 = (void*)0;
            block_result_19=(char*)come_increment_ref_count(block(parent,match_string_18,group_strings_16), "./neo-c-str.h", 2886, 170);
            # 2888 "./neo-c-str.h"
            buffer_append_str(result,block_result_19);
            # 2896 "./neo-c-str.h"
            if(matchlength==0) {
                # 2891 "./neo-c-str.h"
                offset++;
            }
            else {
                # 2894 "./neo-c-str.h"
                offset=offset+regex_result+matchlength;
            }
            (str_15 = come_decrement_ref_count(str_15, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2903, 171));
            come_call_finalizer(list$1char$ph$p_finalize, group_strings_16, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c-str.h}", 2903, 172);
            (match_string_18 = come_decrement_ref_count(match_string_18, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2903, 173));
            (block_result_19 = come_decrement_ref_count(block_result_19, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2903, 174));
        }
        else {
            # 2899 "./neo-c-str.h"
            __right_value0 = (void*)0;
            str_20=(char* )come_increment_ref_count(charp_substring(self,offset,-1), "./neo-c-str.h", 2899, 175);
            # 2900 "./neo-c-str.h"
            buffer_append_str(result,str_20);
            # 2901 "./neo-c-str.h"
            (str_20 = come_decrement_ref_count(str_20, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2901, 176));
            break;
            (str_20 = come_decrement_ref_count(str_20, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2903, 177));
        }
    }
    # 2904 "./neo-c-str.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(result))), "./neo-c-str.h", 2904, 178);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c-str.h}", 2904, 179);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 2904, 180));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 2904, 181));
    return __result_obj__0;
}

struct list$1char$ph* charp_scan_block(const char* self, const char* reg, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_scan_block"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct re_program*  re  ;
    int offset;
    int n;
    int group_count;
    int matchlength;
    int max_captures;
    int regex_result;
    struct list$1char$ph* group_strings;
    char*  match_string  ;
    char*  block_result  ;
    struct list$1char$ph* group_strings_21;
    int capture_count;
    int i;
    struct re_capture*  cp  ;
    char*  match_string_22  ;
    char*  match_string_23  ;
    char*  block_result_24  ;
    # 2912 "./neo-c-str.h"
    if(self==((void*)0)||reg==((void*)0)) {
        # 2910 "./neo-c-str.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c-str.h", 2910, 182, "struct list$1char$ph*"), "./neo-c-str.h", 2910, 183)))), "./neo-c-str.h", 2910, 184);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c-str.h}", 2910, 185);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c-str.h}", 2910, 186);
        return __result_obj__0;
    }
    # 2912 "./neo-c-str.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c-str.h", 2912, 187, "struct list$1char$ph*"), "./neo-c-str.h", 2912, 188)), "./neo-c-str.h", 2912, 189);
    # 2914 "./neo-c-str.h"
    re=re_compile(reg);
    # 2920 "./neo-c-str.h"
    if(re==((void*)0)) {
        # 2917 "./neo-c-str.h"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c-str.h", 2917, 190, "struct list$1char$ph*"), "./neo-c-str.h", 2917, 191)))), "./neo-c-str.h", 2917, 192);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c-str.h}", 2917, 193);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c-str.h}", 2917, 194);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c-str.h}", 2917, 195);
        return __result_obj__0;
    }
    # 2920 "./neo-c-str.h"
    offset=0;
    # 2922 "./neo-c-str.h"
    n=0;
    # 2924 "./neo-c-str.h"
    group_count=re_get_group_count(re);
    # 2987 "./neo-c-str.h"
    while((_Bool)1) {
        # 2927 "./neo-c-str.h"
        matchlength=0;
        # 2928 "./neo-c-str.h"
        max_captures=8;
        # 2929 "./neo-c-str.h"
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        # 2930 "./neo-c-str.h"
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        # 2985 "./neo-c-str.h"
        if(regex_result>=0&&group_count==0) {
            # 2935 "./neo-c-str.h"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            group_strings=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c-str.h", 2935, 196, "struct list$1char$ph*"), "./neo-c-str.h", 2935, 197)), "./neo-c-str.h", 2935, 198);
            # 2937 "./neo-c-str.h"
            __right_value0 = (void*)0;
            match_string=(char* )come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength), "./neo-c-str.h", 2937, 199);
            # 2939 "./neo-c-str.h"
            __right_value0 = (void*)0;
            block_result=(char*)come_increment_ref_count(block(parent,match_string,group_strings), "./neo-c-str.h", 2939, 200);
            # 2941 "./neo-c-str.h"
            list$1char$ph_add(result,(char* )come_increment_ref_count(block_result, "./neo-c-str.h", 2941, 201));
            # 2949 "./neo-c-str.h"
            if(matchlength==0) {
                # 2944 "./neo-c-str.h"
                offset++;
            }
            else {
                # 2947 "./neo-c-str.h"
                offset=offset+regex_result+matchlength;
            }
            come_call_finalizer(list$1char$ph$p_finalize, group_strings, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c-str.h}", 2985, 202);
            (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2985, 203));
            (block_result = come_decrement_ref_count(block_result, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2985, 204));
        }
        else if(regex_result>=0&&group_count>0) {
            # 2952 "./neo-c-str.h"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            group_strings_21=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c-str.h", 2952, 205, "struct list$1char$ph*"), "./neo-c-str.h", 2952, 206)), "./neo-c-str.h", 2952, 207);
            # 2954 "./neo-c-str.h"
            capture_count=group_count;
            # 2958 "./neo-c-str.h"
            if(capture_count>max_captures) {
                # 2956 "./neo-c-str.h"
                capture_count=max_captures;
            }
            # 2968 "./neo-c-str.h"
            for(i=0            ;i<capture_count;i++){
                # 2959 "./neo-c-str.h"
                cp=&captures[i];
                # 2964 "./neo-c-str.h"
                if(cp->start<0||cp->length<0) {
                    # 2961 "./neo-c-str.h"
                    __right_value0 = (void*)0;
                    list$1char$ph_push_back(group_strings_21,(char* )come_increment_ref_count(__builtin_string("","./neo-c-str.h",2961), "./neo-c-str.h", 2961, 208));
                    # 2962 "./neo-c-str.h"
                    continue;
                }
                # 2964 "./neo-c-str.h"
                __right_value0 = (void*)0;
                match_string_22=(char* )come_increment_ref_count(charp_substring((self+offset),cp->start,cp->start+cp->length), "./neo-c-str.h", 2964, 209);
                # 2965 "./neo-c-str.h"
                list$1char$ph_push_back(group_strings_21,(char* )come_increment_ref_count(match_string_22, "./neo-c-str.h", 2965, 210));
                (match_string_22 = come_decrement_ref_count(match_string_22, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2968, 211));
            }
            # 2968 "./neo-c-str.h"
            __right_value0 = (void*)0;
            match_string_23=(char* )come_increment_ref_count(charp_substring(self,offset+regex_result,offset+regex_result+matchlength), "./neo-c-str.h", 2968, 212);
            # 2970 "./neo-c-str.h"
            __right_value0 = (void*)0;
            block_result_24=(char*)come_increment_ref_count(block(parent,match_string_23,group_strings_21), "./neo-c-str.h", 2970, 213);
            # 2972 "./neo-c-str.h"
            list$1char$ph_add(result,(char* )come_increment_ref_count(block_result_24, "./neo-c-str.h", 2972, 214));
            # 2980 "./neo-c-str.h"
            if(matchlength==0) {
                # 2975 "./neo-c-str.h"
                offset++;
            }
            else {
                # 2978 "./neo-c-str.h"
                offset=offset+regex_result+matchlength;
            }
            come_call_finalizer(list$1char$ph$p_finalize, group_strings_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c-str.h}", 2985, 215);
            (match_string_23 = come_decrement_ref_count(match_string_23, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2985, 216));
            (block_result_24 = come_decrement_ref_count(block_result_24, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 2985, 217));
        }
        else {
            # 2983 "./neo-c-str.h"
            break;
        }
    }
    # 2987 "./neo-c-str.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c-str.h", 2987, 218);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c-str.h}", 2987, 219);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c-str.h}", 2987, 220);
    return __result_obj__0;
}

char*  string_sub_block(char* self, const char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_sub_block"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 2992 "./neo-c-str.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_sub_block(self,reg,global,ignore_case,parent,block))), "./neo-c-str.h", 2992, 221);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 2992, 222));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 2992, 223));
    return __result_obj__0;
}

int*  __builtin_wstring(const char* str, char* sname, int sline)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "__builtin_wstring"; neo_current_frame = &fr;
    int*  __result_obj__0  ;
    int len;
    int*  wstr  ;
    int ret;
    # 3010 "./neo-c-str.h"
    if(str==((void*)0)) {
        # 3008 "./neo-c-str.h"
                __result_obj__0 = (int* )come_increment_ref_count(((void*)0), "./neo-c-str.h", 3008, 224);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3008, 225));
        return __result_obj__0;
    }
    # 3010 "./neo-c-str.h"
    len=strlen(str);
    # 3012 "./neo-c-str.h"
    wstr=come_calloc(1,sizeof(int )*(len+1),sname,sline,0,"wstring");
    # 3015 "./neo-c-str.h"
    ret=mbstowcs(wstr,str,len+1);
    # 3016 "./neo-c-str.h"
    wstr[ret]=0;
    # 3022 "./neo-c-str.h"
    if(ret<0) {
        # 3019 "./neo-c-str.h"
        wstr[0]=0;
    }
    # 3022 "./neo-c-str.h"
        __result_obj__0 = (int* )come_increment_ref_count(wstr, "./neo-c-str.h", 3022, 226);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3022, 227));
    return __result_obj__0;
}

int wchar_tp_length(const int*  str  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_length"; neo_current_frame = &fr;
    # 3030 "./neo-c-str.h"
    if(str==((void*)0)) {
        # 3028 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 3030 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return wcslen(str);
    neo_current_frame = fr.prev;
}

int wchar_ta_length(const int*  str  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_ta_length"; neo_current_frame = &fr;
    # 3038 "./neo-c-str.h"
    if(str==((void*)0)) {
        # 3036 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 3038 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return wcslen(str);
    neo_current_frame = fr.prev;
}

int wstring_length(const int*  str  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_length"; neo_current_frame = &fr;
    # 3043 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return wchar_tp_length(str);
    neo_current_frame = fr.prev;
}

char*  string_lower_case(char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_lower_case"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  result  ;
    int len;
    int i;
    # 3051 "./neo-c-str.h"
    if(str==((void*)0)) {
        # 3049 "./neo-c-str.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c-str.h",3049))), "./neo-c-str.h", 3049, 228);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3049, 229));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3049, 230));
        return __result_obj__0;
    }
    # 3051 "./neo-c-str.h"
    __right_value0 = (void*)0;
    result=(char* )come_increment_ref_count(__builtin_string(str,"./neo-c-str.h",3051), "./neo-c-str.h", 3051, 231);
    # 3052 "./neo-c-str.h"
    len=strlen(str);
    # 3059 "./neo-c-str.h"
    for(i=0    ;i<len;i++){
        # 3057 "./neo-c-str.h"
        if(str[i]>=65&&str[i]<=90) {
            # 3055 "./neo-c-str.h"
            result[i]=str[i]-65+97;
        }
    }
    # 3059 "./neo-c-str.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c-str.h", 3059, 232);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3059, 233));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3059, 234));
    return __result_obj__0;
}

char*  string_upper_case(char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_upper_case"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  result  ;
    int len;
    int i;
    # 3067 "./neo-c-str.h"
    if(str==((void*)0)) {
        # 3065 "./neo-c-str.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c-str.h",3065))), "./neo-c-str.h", 3065, 235);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3065, 236));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3065, 237));
        return __result_obj__0;
    }
    # 3067 "./neo-c-str.h"
    __right_value0 = (void*)0;
    result=(char* )come_increment_ref_count(__builtin_string(str,"./neo-c-str.h",3067), "./neo-c-str.h", 3067, 238);
    # 3068 "./neo-c-str.h"
    len=strlen(str);
    # 3075 "./neo-c-str.h"
    for(i=0    ;i<len;i++){
        # 3073 "./neo-c-str.h"
        if(str[i]>=97&&str[i]<=122) {
            # 3071 "./neo-c-str.h"
            result[i]=str[i]-97+65;
        }
    }
    # 3075 "./neo-c-str.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c-str.h", 3075, 239);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3075, 240));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3075, 241));
    return __result_obj__0;
}

int*  wchar_tp_substring(const int*  str  , int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_substring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    int len;
    int*  result  ;
    # 3084 "./neo-c-str.h"
    if(str==((void*)0)) {
        # 3081 "./neo-c-str.h"
                __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring("","./neo-c-str.h",3081))), "./neo-c-str.h", 3081, 242);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3081, 243));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3081, 244));
        return __result_obj__0;
    }
    # 3084 "./neo-c-str.h"
    len=wcslen(str);
    # 3089 "./neo-c-str.h"
    if(head<0) {
        # 3087 "./neo-c-str.h"
        head+=len;
    }
    # 3093 "./neo-c-str.h"
    if(tail<0) {
        # 3090 "./neo-c-str.h"
        tail+=len+1;
    }
    # 3097 "./neo-c-str.h"
    if(head>tail) {
        # 3094 "./neo-c-str.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring("","./neo-c-str.h",3094))), "./neo-c-str.h", 3094, 245);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3094, 246));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3094, 247));
        return __result_obj__0;
    }
    # 3101 "./neo-c-str.h"
    if(head<0) {
        # 3098 "./neo-c-str.h"
        head=0;
    }
    # 3105 "./neo-c-str.h"
    if(tail>=len) {
        # 3102 "./neo-c-str.h"
        tail=len;
    }
    # 3109 "./neo-c-str.h"
    if(head>=len) {
        # 3106 "./neo-c-str.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring("","./neo-c-str.h",3106))), "./neo-c-str.h", 3106, 248);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3106, 249));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3106, 250));
        return __result_obj__0;
    }
    # 3113 "./neo-c-str.h"
    if(head==tail) {
        # 3110 "./neo-c-str.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring("","./neo-c-str.h",3110))), "./neo-c-str.h", 3110, 251);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3110, 252));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3110, 253));
        return __result_obj__0;
    }
    # 3117 "./neo-c-str.h"
    if(tail-head+1<1) {
        # 3114 "./neo-c-str.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring("","./neo-c-str.h",3114))), "./neo-c-str.h", 3114, 254);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3114, 255));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3114, 256));
        return __result_obj__0;
    }
    # 3117 "./neo-c-str.h"
    __right_value0 = (void*)0;
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(tail-head+1)), "./neo-c-str.h", 3117, 257, "int* "), "./neo-c-str.h", 3117, 258);
    # 3119 "./neo-c-str.h"
    memcpy(result,str+head,sizeof(int )*(tail-head));
    # 3120 "./neo-c-str.h"
    result[tail-head]=0;
    # 3122 "./neo-c-str.h"
        __result_obj__0 = (int* )come_increment_ref_count(result, "./neo-c-str.h", 3122, 259);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3122, 260));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3122, 261));
    return __result_obj__0;
}

int charp_index_count(const char* str, const char* search_str, int count, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index_count"; neo_current_frame = &fr;
    int n;
    int len;
    int len2;
    int i;
    int j;
    memset(&j, 0, sizeof(j));
    # 3131 "./neo-c-str.h"
    if(str==((void*)0)||search_str==((void*)0)) {
        # 3128 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 3131 "./neo-c-str.h"
    n=0;
    # 3132 "./neo-c-str.h"
    len=strlen(str);
    # 3133 "./neo-c-str.h"
    len2=strlen(search_str);
    # 3151 "./neo-c-str.h"
    for(i=0    ;i<len;i++){
        # 3135 "./neo-c-str.h"
        # 3142 "./neo-c-str.h"
        for(j=0        ;j<len2;j++){
            # 3140 "./neo-c-str.h"
            if(str[i+j]!=search_str[j]) {
                # 3138 "./neo-c-str.h"
                break;
            }
        }
        # 3149 "./neo-c-str.h"
        if(j==len2) {
            # 3143 "./neo-c-str.h"
            n++;
            # 3148 "./neo-c-str.h"
            if(n==count) {
                # 3146 "./neo-c-str.h"
                                neo_current_frame = fr.prev;
                return i;
            }
        }
    }
    # 3151 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return default_value;
    neo_current_frame = fr.prev;
}

int charp_rindex(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_rindex"; neo_current_frame = &fr;
    int len;
    int str_len;
    char* p;
    # 3160 "./neo-c-str.h"
    if(str==((void*)0)||search_str==((void*)0)) {
        # 3158 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 3160 "./neo-c-str.h"
    len=strlen(search_str);
    # 3161 "./neo-c-str.h"
    str_len=strlen(str);
    # 3165 "./neo-c-str.h"
    if(len==0) {
        # 3163 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return str_len;
    }
    # 3168 "./neo-c-str.h"
    if(len>str_len) {
        # 3166 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 3168 "./neo-c-str.h"
    p=(char*)(str+str_len-len);
    # 3178 "./neo-c-str.h"
    while(p>=str) {
        # 3175 "./neo-c-str.h"
        if(strncmp(p,search_str,len)==0) {
            # 3172 "./neo-c-str.h"
                        neo_current_frame = fr.prev;
            return p-str;
        }
        # 3175 "./neo-c-str.h"
        p--;
    }
    # 3178 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return default_value;
    neo_current_frame = fr.prev;
}

int charp_rindex_count(const char* str, const char* search_str, int count, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_rindex_count"; neo_current_frame = &fr;
    int len;
    int str_len;
    int n;
    # 3187 "./neo-c-str.h"
    if(str==((void*)0)||search_str==((void*)0)) {
        # 3185 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 3187 "./neo-c-str.h"
    len=strlen(search_str);
    # 3188 "./neo-c-str.h"
    str_len=strlen(str);
    # 3192 "./neo-c-str.h"
    if(len==0) {
        # 3190 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return ((count<=1)?(str_len):(default_value));
    }
    # 3195 "./neo-c-str.h"
    if(len>str_len) {
        # 3193 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 3195 "./neo-c-str.h"
    const char* p=(char*)str+str_len-len;
    # 3197 "./neo-c-str.h"
    n=0;
    # 3210 "./neo-c-str.h"
    while(p>=str) {
        # 3207 "./neo-c-str.h"
        if(strncmp(p,search_str,len)==0) {
            # 3201 "./neo-c-str.h"
            n++;
            # 3205 "./neo-c-str.h"
            if(n==count) {
                # 3203 "./neo-c-str.h"
                                neo_current_frame = fr.prev;
                return p-str;
            }
        }
        # 3207 "./neo-c-str.h"
        p--;
    }
    # 3210 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return default_value;
    neo_current_frame = fr.prev;
}

char*  charp_strip(const char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_strip"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  result  ;
    int len;
    # 3219 "./neo-c-str.h"
    if(self==((void*)0)) {
        # 3216 "./neo-c-str.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c-str.h",3216))), "./neo-c-str.h", 3216, 262);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3216, 263));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3216, 264));
        return __result_obj__0;
    }
    # 3219 "./neo-c-str.h"
    __right_value0 = (void*)0;
    result=(char* )come_increment_ref_count(__builtin_string(self,"./neo-c-str.h",3219), "./neo-c-str.h", 3219, 265);
    # 3221 "./neo-c-str.h"
    len=strlen(self);
    # 3233 "./neo-c-str.h"
    if(self[len-1]==10) {
        # 3224 "./neo-c-str.h"
        result[len-1]=0;
    }
    else if(self[len-1]==13) {
        # 3227 "./neo-c-str.h"
        result[len-1]=0;
    }
    else if(len>2&&self[len-2]==13&&self[len-1]==10) {
        # 3230 "./neo-c-str.h"
        result[len-2]=0;
    }
    # 3233 "./neo-c-str.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c-str.h", 3233, 266);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3233, 267));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3233, 268));
    return __result_obj__0;
}

char*  wchar_tp_to_string(const int*  wstr  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char*  result  ;
    # 3242 "./neo-c-str.h"
    if(wstr==((void*)0)) {
        # 3239 "./neo-c-str.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c-str.h",3239))), "./neo-c-str.h", 3239, 269);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3239, 270));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3239, 271));
        return __result_obj__0;
    }
    # 3242 "./neo-c-str.h"
    len=16*(wcslen(wstr)+1);
    # 3244 "./neo-c-str.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len)), "./neo-c-str.h", 3244, 272, "char*"), "./neo-c-str.h", 3244, 273);
    # 3251 "./neo-c-str.h"
    if(wcstombs(result,wstr,len)<0) {
        # 3248 "./neo-c-str.h"
        strncpy(result,"",len);
    }
    # 3251 "./neo-c-str.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c-str.h", 3251, 274);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3251, 275));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3251, 276));
    return __result_obj__0;
}

char*  wchar_ta_to_string(const int*  wstr  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_ta_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 3259 "./neo-c-str.h"
    if(wstr==((void*)0)) {
        # 3257 "./neo-c-str.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c-str.h",3257))), "./neo-c-str.h", 3257, 277);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3257, 278));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3257, 279));
        return __result_obj__0;
    }
    # 3259 "./neo-c-str.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=wchar_tp_to_string(wstr))), "./neo-c-str.h", 3259, 280);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3259, 281));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3259, 282));
    return __result_obj__0;
}

int*  charp_to_wstring(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_wstring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    # 3267 "./neo-c-str.h"
    if(str==((void*)0)) {
        # 3265 "./neo-c-str.h"
                __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring("","./neo-c-str.h",3265))), "./neo-c-str.h", 3265, 283);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3265, 284));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3265, 285));
        return __result_obj__0;
    }
    # 3267 "./neo-c-str.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(str,"./neo-c-str.h",3267))), "./neo-c-str.h", 3267, 286);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3267, 287));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3267, 288));
    return __result_obj__0;
}

int*  chara_to_wstring(char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_wstring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    # 3275 "./neo-c-str.h"
    if(str==((void*)0)) {
        # 3273 "./neo-c-str.h"
                __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring("","./neo-c-str.h",3273))), "./neo-c-str.h", 3273, 289);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3273, 290));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3273, 291));
        return __result_obj__0;
    }
    # 3275 "./neo-c-str.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(str,"./neo-c-str.h",3275))), "./neo-c-str.h", 3275, 292);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3275, 293));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3275, 294));
    return __result_obj__0;
}

int*  wchar_tp_delete(int*  str  , int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_delete"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    int*  sub_str  ;
    # 3283 "./neo-c-str.h"
    if(str==((void*)0)) {
        # 3281 "./neo-c-str.h"
                __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring("","./neo-c-str.h",3281))), "./neo-c-str.h", 3281, 295);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3281, 296));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3281, 297));
        return __result_obj__0;
    }
    # 3283 "./neo-c-str.h"
    len=wcslen(str);
    # 3289 "./neo-c-str.h"
    if(len==0) {
        # 3286 "./neo-c-str.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value1=string_to_wstring(((char* )(__right_value0=wchar_tp_to_string(str)))))), "./neo-c-str.h", 3286, 298);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3286, 299));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3286, 300));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3286, 301));
        return __result_obj__0;
    }
    # 3293 "./neo-c-str.h"
    if(head<0) {
        # 3290 "./neo-c-str.h"
        head+=len;
    }
    # 3297 "./neo-c-str.h"
    if(tail<0) {
        # 3294 "./neo-c-str.h"
        tail+=len+1;
    }
    # 3301 "./neo-c-str.h"
    if(head<0) {
        # 3298 "./neo-c-str.h"
        head=0;
    }
    # 3305 "./neo-c-str.h"
    if(tail<0) {
        # 3302 "./neo-c-str.h"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value1=string_to_wstring(((char* )(__right_value0=wchar_tp_to_string(str)))))), "./neo-c-str.h", 3302, 302);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3302, 303));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3302, 304));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3302, 305));
        return __result_obj__0;
    }
    # 3309 "./neo-c-str.h"
    if(tail>=len) {
        # 3306 "./neo-c-str.h"
        tail=len;
    }
    # 3309 "./neo-c-str.h"
    __right_value0 = (void*)0;
    sub_str=(int* )come_increment_ref_count(wchar_tp_substring(str,tail,-1), "./neo-c-str.h", 3309, 306);
    # 3311 "./neo-c-str.h"
    memcpy(str+head,sub_str,sizeof(int )*(wstring_length(sub_str)+1));
    # 3313 "./neo-c-str.h"
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value1=string_to_wstring(((char* )(__right_value0=wchar_tp_to_string(str)))))), "./neo-c-str.h", 3313, 307);
    (sub_str = come_decrement_ref_count(sub_str, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c-str.h", 3313, 308));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3313, 309));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3313, 310));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3313, 311));
    return __result_obj__0;
}

int wchar_tp_index(const int*  str  , const int*  search_str  , int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_index"; neo_current_frame = &fr;
    int*  head  ;
    # 3322 "./neo-c-str.h"
    if(str==((void*)0)||search_str==((void*)0)) {
        # 3319 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 3322 "./neo-c-str.h"
    head=wcsstr(str,search_str);
    # 3328 "./neo-c-str.h"
    if(head==((void*)0)) {
        # 3325 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 3328 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return head-str;
    neo_current_frame = fr.prev;
}

int wchar_tp_rindex(const int*  str  , const int*  search_str  , int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_rindex"; neo_current_frame = &fr;
    int len;
    int*  p  ;
    int len2;
    _Bool result;
    int i;
    memset(&i, 0, sizeof(i));
    # 3337 "./neo-c-str.h"
    if(str==((void*)0)||search_str==((void*)0)) {
        # 3334 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 3337 "./neo-c-str.h"
    len=wcslen(search_str);
    # 3339 "./neo-c-str.h"
    p=(int* )str+wcslen(str)-len;
    # 3357 "./neo-c-str.h"
    while(p>=str) {
        # 3342 "./neo-c-str.h"
        len2=wcslen(p);
        # 3343 "./neo-c-str.h"
        result=(_Bool)1;
        # 3344 "./neo-c-str.h"
        # 3350 "./neo-c-str.h"
        for(i=0        ;i<len&&i<len2;i++){
            # 3349 "./neo-c-str.h"
            if(p[i]!=search_str[i]) {
                # 3347 "./neo-c-str.h"
                result=(_Bool)0;
            }
        }
        # 3354 "./neo-c-str.h"
        if(result) {
            # 3351 "./neo-c-str.h"
                        neo_current_frame = fr.prev;
            return (p-str);
        }
        # 3354 "./neo-c-str.h"
        p--;
    }
    # 3357 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return default_value;
    neo_current_frame = fr.prev;
}

int*  wchar_tp_reverse(const int*  str  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_reverse"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    int len;
    int*  result  ;
    int i;
    # 3366 "./neo-c-str.h"
    if(str==((void*)0)) {
        # 3363 "./neo-c-str.h"
                __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring("","./neo-c-str.h",3363))), "./neo-c-str.h", 3363, 312);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3363, 313));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3363, 314));
        return __result_obj__0;
    }
    # 3366 "./neo-c-str.h"
    len=wcslen(str);
    # 3367 "./neo-c-str.h"
    __right_value0 = (void*)0;
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(len+1)), "./neo-c-str.h", 3367, 315, "int* "), "./neo-c-str.h", 3367, 316);
    # 3373 "./neo-c-str.h"
    for(i=0    ;i<len;i++){
        # 3370 "./neo-c-str.h"
        result[i]=str[len-i-1];
    }
    # 3373 "./neo-c-str.h"
    result[len]=0;
    # 3375 "./neo-c-str.h"
        __result_obj__0 = (int* )come_increment_ref_count(result, "./neo-c-str.h", 3375, 317);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3375, 318));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3375, 319));
    return __result_obj__0;
}

int*  wchar_tp_multiply(const int*  str  , int n)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_multiply"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    int len;
    int*  result  ;
    int i;
    # 3384 "./neo-c-str.h"
    if(str==((void*)0)) {
        # 3381 "./neo-c-str.h"
                __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring("","./neo-c-str.h",3381))), "./neo-c-str.h", 3381, 320);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3381, 321));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3381, 322));
        return __result_obj__0;
    }
    # 3384 "./neo-c-str.h"
    len=wcslen(str)*n+1;
    # 3386 "./neo-c-str.h"
    __right_value0 = (void*)0;
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(len)), "./neo-c-str.h", 3386, 323, "int* "), "./neo-c-str.h", 3386, 324);
    # 3388 "./neo-c-str.h"
    result[0]=0;
    # 3394 "./neo-c-str.h"
    for(i=0    ;i<n;i++){
        # 3391 "./neo-c-str.h"
        wcscat(result,str);
    }
    # 3394 "./neo-c-str.h"
        __result_obj__0 = (int* )come_increment_ref_count(result, "./neo-c-str.h", 3394, 325);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3394, 326));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3394, 327));
    return __result_obj__0;
}

int*  wchar_tp_printable(const int*  str  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_printable"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    int len;
    int*  result  ;
    int n;
    int i;
    int  c  ;
    # 3402 "./neo-c-str.h"
    if(str==((void*)0)) {
        # 3400 "./neo-c-str.h"
                __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring("","./neo-c-str.h",3400))), "./neo-c-str.h", 3400, 328);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3400, 329));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3400, 330));
        return __result_obj__0;
    }
    # 3402 "./neo-c-str.h"
    len=wchar_tp_length(str);
    # 3403 "./neo-c-str.h"
    __right_value0 = (void*)0;
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(len*2+1)), "./neo-c-str.h", 3403, 331, "int* "), "./neo-c-str.h", 3403, 332);
    # 3405 "./neo-c-str.h"
    n=0;
    # 3420 "./neo-c-str.h"
    for(i=0    ;i<len;i++){
        # 3407 "./neo-c-str.h"
        c=str[i];
        # 3418 "./neo-c-str.h"
        if((c>=0&&c<32)||c==127) {
            # 3412 "./neo-c-str.h"
            result[n++]=94;
            # 3413 "./neo-c-str.h"
            result[n++]=c+65-1;
        }
        else {
            # 3416 "./neo-c-str.h"
            result[n++]=c;
        }
    }
    # 3422 "./neo-c-str.h"
    result[n]=0;
    # 3422 "./neo-c-str.h"
        __result_obj__0 = (int* )come_increment_ref_count(result, "./neo-c-str.h", 3422, 333);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3422, 334));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3422, 335));
    return __result_obj__0;
}

int wchar_tp_compare(const int*  left  , int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_compare"; neo_current_frame = &fr;
    # 3444 "./neo-c-str.h"
    if(left==((void*)0)) {
        # 3435 "./neo-c-str.h"
        if(right==((void*)0)) {
            # 3430 "./neo-c-str.h"
                        neo_current_frame = fr.prev;
            return 0;
        }
        else {
            # 3433 "./neo-c-str.h"
                        neo_current_frame = fr.prev;
            return 1;
        }
    }
    else if(right==((void*)0)) {
        # 3443 "./neo-c-str.h"
        if(left==((void*)0)) {
            # 3438 "./neo-c-str.h"
                        neo_current_frame = fr.prev;
            return 0;
        }
        else {
            # 3441 "./neo-c-str.h"
                        neo_current_frame = fr.prev;
            return -1;
        }
    }
    # 3444 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return wcscmp(left,right);
    neo_current_frame = fr.prev;
}

int wstring_compare(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_compare"; neo_current_frame = &fr;
    # 3465 "./neo-c-str.h"
    if(left==((void*)0)) {
        # 3456 "./neo-c-str.h"
        if(right==((void*)0)) {
            # 3451 "./neo-c-str.h"
                        neo_current_frame = fr.prev;
            return 0;
        }
        else {
            # 3454 "./neo-c-str.h"
                        neo_current_frame = fr.prev;
            return 1;
        }
    }
    else if(right==((void*)0)) {
        # 3464 "./neo-c-str.h"
        if(left==((void*)0)) {
            # 3459 "./neo-c-str.h"
                        neo_current_frame = fr.prev;
            return 0;
        }
        else {
            # 3462 "./neo-c-str.h"
                        neo_current_frame = fr.prev;
            return -1;
        }
    }
    # 3465 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return wcscmp(left,right);
    neo_current_frame = fr.prev;
}

int*  wchar_tp_operator_mult(const int*  str  , int n)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_operator_mult"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    # 3477 "./neo-c-str.h"
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_multiply(str,n))), "./neo-c-str.h", 3477, 336);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3477, 337));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3477, 338));
    return __result_obj__0;
}

int*  wstring_operator_mult(const int*  str  , int n)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_operator_mult"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    # 3482 "./neo-c-str.h"
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_multiply(str,n))), "./neo-c-str.h", 3482, 339);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3482, 340));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3482, 341));
    return __result_obj__0;
}

_Bool wstring_operator_equals(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_operator_equals"; neo_current_frame = &fr;
    # 3492 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return wcscmp(left,right)==0;
    neo_current_frame = fr.prev;
}

_Bool wstring_operator_not_equals(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_operator_not_equals"; neo_current_frame = &fr;
    # 3502 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return wcscmp(left,right)!=0;
    neo_current_frame = fr.prev;
}

int*  wchar_tp_operator_add(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_operator_add"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    int*  result  ;
    # 3511 "./neo-c-str.h"
    if(left==((void*)0)||right==((void*)0)) {
        # 3509 "./neo-c-str.h"
                __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring("","./neo-c-str.h",3509))), "./neo-c-str.h", 3509, 342);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3509, 343));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3509, 344));
        return __result_obj__0;
    }
    # 3511 "./neo-c-str.h"
    __right_value0 = (void*)0;
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(wcslen(left)+wcslen(right)+1)), "./neo-c-str.h", 3511, 345, "int* "), "./neo-c-str.h", 3511, 346);
    # 3513 "./neo-c-str.h"
    wcscpy(result,left);
    # 3514 "./neo-c-str.h"
    wcscat(result,right);
    # 3516 "./neo-c-str.h"
        __result_obj__0 = (int* )come_increment_ref_count(result, "./neo-c-str.h", 3516, 347);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3516, 348));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3516, 349));
    return __result_obj__0;
}

int*  wstring_operator_add(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_operator_add"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    int*  result  ;
    # 3524 "./neo-c-str.h"
    if(left==((void*)0)||right==((void*)0)) {
        # 3522 "./neo-c-str.h"
                __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring("","./neo-c-str.h",3522))), "./neo-c-str.h", 3522, 350);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3522, 351));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3522, 352));
        return __result_obj__0;
    }
    # 3524 "./neo-c-str.h"
    __right_value0 = (void*)0;
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(wcslen(left)+wcslen(right)+1)), "./neo-c-str.h", 3524, 353, "int* "), "./neo-c-str.h", 3524, 354);
    # 3526 "./neo-c-str.h"
    wcscpy(result,left);
    # 3527 "./neo-c-str.h"
    wcscat(result,right);
    # 3529 "./neo-c-str.h"
        __result_obj__0 = (int* )come_increment_ref_count(result, "./neo-c-str.h", 3529, 355);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3529, 356));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3529, 357));
    return __result_obj__0;
}

char*  charp_replace(char* self, int index, char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_replace"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    # 3538 "./neo-c-str.h"
    if(self==((void*)0)) {
        # 3536 "./neo-c-str.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c-str.h",3536))), "./neo-c-str.h", 3536, 358);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3536, 359));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3536, 360));
        return __result_obj__0;
    }
    # 3538 "./neo-c-str.h"
    len=strlen(self);
    # 3544 "./neo-c-str.h"
    if(strcmp(self,"")==0) {
        # 3541 "./neo-c-str.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"./neo-c-str.h",3541))), "./neo-c-str.h", 3541, 361);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3541, 362));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3541, 363));
        return __result_obj__0;
    }
    # 3548 "./neo-c-str.h"
    if(index<0) {
        # 3545 "./neo-c-str.h"
        index+=len;
    }
    # 3552 "./neo-c-str.h"
    if(index>=len) {
        # 3549 "./neo-c-str.h"
        index=len-1;
    }
    # 3556 "./neo-c-str.h"
    if(index<0) {
        # 3553 "./neo-c-str.h"
        index=0;
    }
    # 3556 "./neo-c-str.h"
    self[index]=c;
    # 3558 "./neo-c-str.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"./neo-c-str.h",3558))), "./neo-c-str.h", 3558, 364);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3558, 365));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3558, 366));
    return __result_obj__0;
}

char*  charp_multiply(const char* str, int n)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_multiply"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    int i;
    # 3566 "./neo-c-str.h"
    if(str==((void*)0)) {
        # 3564 "./neo-c-str.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c-str.h",3564))), "./neo-c-str.h", 3564, 367);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3564, 368));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3564, 369));
        return __result_obj__0;
    }
    # 3566 "./neo-c-str.h"
    len=strlen(str)*n+1;
    # 3568 "./neo-c-str.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len)), "./neo-c-str.h", 3568, 370, "char*"), "./neo-c-str.h", 3568, 371);
    # 3570 "./neo-c-str.h"
    result[0]=0;
    # 3576 "./neo-c-str.h"
    for(i=0    ;i<n;i++){
        # 3573 "./neo-c-str.h"
        strcat(result,str);
    }
    # 3576 "./neo-c-str.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "./neo-c-str.h", 3576, 372);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3576, 373));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3576, 374));
    return __result_obj__0;
}

struct list$1char$ph* charp_split_str(const char* self, const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_split_str"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct buffer*  buf  ;
    int self_len;
    int needle_len;
    int i;
    # 3584 "./neo-c-str.h"
    if(self==((void*)0)||str==((void*)0)) {
        # 3582 "./neo-c-str.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c-str.h", 3582, 375, "struct list$1char$ph*"), "./neo-c-str.h", 3582, 376)))), "./neo-c-str.h", 3582, 377);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c-str.h}", 3582, 378);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c-str.h}", 3582, 379);
        return __result_obj__0;
    }
    # 3584 "./neo-c-str.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c-str.h", 3584, 380, "struct list$1char$ph*"), "./neo-c-str.h", 3584, 381)), "./neo-c-str.h", 3584, 382);
    # 3586 "./neo-c-str.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "./neo-c-str.h", 3586, 383, "struct buffer* "), "./neo-c-str.h", 3586, 384)), "./neo-c-str.h", 3586, 385);
    # 3588 "./neo-c-str.h"
    self_len=charp_length(self);
    # 3589 "./neo-c-str.h"
    needle_len=strlen(str);
    # 3600 "./neo-c-str.h"
    for(i=0    ;i<self_len;i++){
        # 3599 "./neo-c-str.h"
        if(strstr(self+i,str)==self+i) {
            # 3592 "./neo-c-str.h"
            __right_value0 = (void*)0;
            list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(buf->buf,"./neo-c-str.h",3592), "./neo-c-str.h", 3592, 386));
            # 3593 "./neo-c-str.h"
            buffer_reset(buf);
            # 3594 "./neo-c-str.h"
            i+=needle_len-1;
        }
        else {
            # 3597 "./neo-c-str.h"
            buffer_append_char(buf,self[i]);
        }
    }
    # 3604 "./neo-c-str.h"
    if(buffer_length(buf)!=0) {
        # 3601 "./neo-c-str.h"
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(buf->buf,"./neo-c-str.h",3601), "./neo-c-str.h", 3601, 387));
    }
    # 3604 "./neo-c-str.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c-str.h", 3604, 388);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c-str.h}", 3604, 389);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c-str.h}", 3604, 390);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c-str.h}", 3604, 391);
    return __result_obj__0;
}

unsigned int wchar_tp_get_hash_key(const int*  value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_get_hash_key"; neo_current_frame = &fr;
    int result;
    int*  p  ;
    # 3612 "./neo-c-str.h"
    if(value==((void*)0)) {
        # 3610 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 3612 "./neo-c-str.h"
    result=0;
    # 3613 "./neo-c-str.h"
    p=(int* )value;
    # 3618 "./neo-c-str.h"
    while(*p) {
        # 3615 "./neo-c-str.h"
        result+=(*p);
        # 3616 "./neo-c-str.h"
        p++;
    }
    # 3618 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool wstring_equals(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_equals"; neo_current_frame = &fr;
    # 3640 "./neo-c-str.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 3635 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
        # 3638 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 3640 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return wcscmp(left,right)==0;
    neo_current_frame = fr.prev;
}

_Bool wchar_t_operator_equals(int  left  , int  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_t_operator_equals"; neo_current_frame = &fr;
    # 3646 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return left==right;
    neo_current_frame = fr.prev;
}

_Bool wchar_t_operator_not_equals(int  left  , int  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_t_operator_not_equals"; neo_current_frame = &fr;
    # 3651 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return left!=right;
    neo_current_frame = fr.prev;
}

unsigned int wchar_t_get_hash_key(int  value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_t_get_hash_key"; neo_current_frame = &fr;
    # 3656 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

_Bool wchar_t_equals(int  left  , int  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_t_equals"; neo_current_frame = &fr;
    # 3661 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return left==right;
    neo_current_frame = fr.prev;
}

char*  wchar_t_to_string(int  wc  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_t_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 3666 "./neo-c-str.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ls",wc))), "./neo-c-str.h", 3666, 392);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3666, 393));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3666, 394));
    return __result_obj__0;
}

char*  xrealpath(const char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xrealpath"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* result;
    char*  result2  ;
    # 3674 "./neo-c-str.h"
    if(path==((void*)0)) {
        # 3672 "./neo-c-str.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c-str.h",3672))), "./neo-c-str.h", 3672, 395);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3672, 396));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3672, 397));
        return __result_obj__0;
    }
    # 3674 "./neo-c-str.h"
    result=realpath(path,((void*)0));
    # 3676 "./neo-c-str.h"
    __right_value0 = (void*)0;
    result2=(char* )come_increment_ref_count(__builtin_string(result,"./neo-c-str.h",3676), "./neo-c-str.h", 3676, 398);
    # 3678 "./neo-c-str.h"
    free(result);
    # 3680 "./neo-c-str.h"
        __result_obj__0 = (char* )come_increment_ref_count(result2, "./neo-c-str.h", 3680, 399);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3680, 400));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3680, 401));
    return __result_obj__0;
}

char*  xdirname(const char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xdirname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    # 3688 "./neo-c-str.h"
    if(path==((void*)0)) {
        # 3686 "./neo-c-str.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","./neo-c-str.h",3686))), "./neo-c-str.h", 3686, 402);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3686, 403));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3686, 404));
        return __result_obj__0;
    }
    # 3688 "./neo-c-str.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=__builtin_string(dirname(((char* )(__right_value0=__builtin_string(path,"./neo-c-str.h",3688)))),"./neo-c-str.h",3688))), "./neo-c-str.h", 3688, 405);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3688, 406));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3688, 407));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3688, 408));
    return __result_obj__0;
}

unsigned long  int  xwcslen(const int*  wstr  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xwcslen"; neo_current_frame = &fr;
    int*  p  ;
    unsigned long  int  len  ;
    # 3696 "./neo-c-str.h"
    if(wstr==((void*)0)) {
        # 3694 "./neo-c-str.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 3696 "./neo-c-str.h"
    p=(int* )wstr;
    # 3698 "./neo-c-str.h"
    len=0;
    # 3704 "./neo-c-str.h"
    while(*p) {
        # 3700 "./neo-c-str.h"
        p++;
        # 3701 "./neo-c-str.h"
        len++;
    }
    # 3704 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

int*  wstring_substring(const int*  str  , int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_substring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    # 3709 "./neo-c-str.h"
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_substring(str,head,tail))), "./neo-c-str.h", 3709, 409);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3709, 410));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3709, 411));
    return __result_obj__0;
}

int string_index_count(const char* str, const char* search_str, int count, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_index_count"; neo_current_frame = &fr;
    # 3714 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return charp_index_count(str,search_str,count,default_value);
    neo_current_frame = fr.prev;
}

int string_rindex(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_rindex"; neo_current_frame = &fr;
    # 3720 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return charp_rindex(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int string_rindex_count(const char* str, const char* search_str, int count, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_rindex_count"; neo_current_frame = &fr;
    # 3725 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return charp_rindex_count(str,search_str,count,default_value);
    neo_current_frame = fr.prev;
}

char*  string_strip(const char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_strip"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 3730 "./neo-c-str.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_strip(self))), "./neo-c-str.h", 3730, 412);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3730, 413));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3730, 414));
    return __result_obj__0;
}

char*  wstring_to_string(const int*  wstr  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 3740 "./neo-c-str.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=wchar_tp_to_string(wstr))), "./neo-c-str.h", 3740, 415);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3740, 416));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3740, 417));
    return __result_obj__0;
}

int*  int_to_wstring(int self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_to_wstring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int*  __result_obj__0  ;
    # 3745 "./neo-c-str.h"
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value1=string_to_wstring(((char* )(__right_value0=xsprintf("%d",self)))))), "./neo-c-str.h", 3745, 418);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3745, 419));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3745, 420));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3745, 421));
    return __result_obj__0;
}

int*  wstring_delete(int*  str  , int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_delete"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    # 3750 "./neo-c-str.h"
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_delete(str,head,tail))), "./neo-c-str.h", 3750, 422);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3750, 423));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3750, 424));
    return __result_obj__0;
}

int wstring_index(const int*  str  , const int*  search_str  , int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_index"; neo_current_frame = &fr;
    # 3755 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return wchar_tp_index(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int wstring_rindex(const int*  str  , const int*  search_str  , int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_rindex"; neo_current_frame = &fr;
    # 3760 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return wchar_tp_rindex(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int*  wstring_reverse(const int*  str  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_reverse"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    # 3765 "./neo-c-str.h"
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_reverse(str))), "./neo-c-str.h", 3765, 425);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3765, 426));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3765, 427));
    return __result_obj__0;
}

int*  wstring_multiply(const int*  str  , int n)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_multiply"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    # 3770 "./neo-c-str.h"
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_multiply(str,n))), "./neo-c-str.h", 3770, 428);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3770, 429));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3770, 430));
    return __result_obj__0;
}

int*  wstring_printable(const int*  str  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_printable"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    # 3775 "./neo-c-str.h"
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_printable(str))), "./neo-c-str.h", 3775, 431);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3775, 432));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3775, 433));
    return __result_obj__0;
}

unsigned int wstring_get_hash_key(const int*  value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_get_hash_key"; neo_current_frame = &fr;
    # 3780 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return wchar_tp_get_hash_key(value);
    neo_current_frame = fr.prev;
}

char*  string_replace(char* self, int index, char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_replace"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 3787 "./neo-c-str.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_replace(self,index,c))), "./neo-c-str.h", 3787, 434);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3787, 435));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3787, 436));
    return __result_obj__0;
}

char*  string_multiply(const char* str, int n)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_multiply"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 3792 "./neo-c-str.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_multiply(str,n))), "./neo-c-str.h", 3792, 437);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3792, 438));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3792, 439));
    return __result_obj__0;
}

struct list$1char$ph* string_split_str(const char* self, const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_split_str"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    # 3797 "./neo-c-str.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=charp_split_str(self,str))), "./neo-c-str.h", 3797, 440);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "./neo-c-str.h}", 3797, 441);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c-str.h}", 3797, 442);
    return __result_obj__0;
}

int*  string_to_wstring(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_to_wstring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    # 3802 "./neo-c-str.h"
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=charp_to_wstring(str))), "./neo-c-str.h", 3802, 443);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3802, 444));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3802, 445));
    return __result_obj__0;
}

char*  charp_chomp(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_chomp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 3807 "./neo-c-str.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=string_chomp(str))), "./neo-c-str.h", 3807, 446);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "./neo-c-str.h", 3807, 447));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "./neo-c-str.h", 3807, 448));
    return __result_obj__0;
}

_Bool wchar_tp_equals(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_equals"; neo_current_frame = &fr;
    # 3812 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return wcscmp(left,right)==0;
    neo_current_frame = fr.prev;
}

_Bool wchar_tp_operator_equals(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_operator_equals"; neo_current_frame = &fr;
    # 3817 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return wcscmp(left,right)==0;
    neo_current_frame = fr.prev;
}

_Bool wchar_tp_operator_not_equals(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_operator_not_equals"; neo_current_frame = &fr;
    # 3822 "./neo-c-str.h"
        neo_current_frame = fr.prev;
    return wcscmp(left,right)!=0;
    neo_current_frame = fr.prev;
}

