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

typedef unsigned int  chtype  ;

typedef unsigned int  mmask_t  ;

typedef long ptrdiff_t;

typedef long  double max_align_t;

typedef unsigned char NCURSES_BOOL;

typedef struct screen SCREEN;

typedef struct _win_st WINDOW;

typedef unsigned int  attr_t  ;

typedef struct anonymous_typeX20 cchar_t;

typedef int (*NCURSES_OUTC)(int);

typedef int (*NCURSES_WINDOW_CB)(struct _win_st* ,void*);

typedef int (*NCURSES_SCREEN_CB)(struct screen* ,void*);

typedef int (*NCURSES_OUTC_sp)(struct screen* ,int);

typedef struct anonymous_typeX21 MEVENT;

typedef unsigned int  socklen_t  ;

typedef int  sig_atomic_t  ;

typedef union sigval  __sigval_t  ;

typedef struct anonymous_typeX22 siginfo_t;

typedef union sigval  sigval_t  ;

typedef struct sigevent  sigevent_t  ;

typedef void (*__sighandler_t)(int);

typedef void (*sighandler_t)(int)  ;

typedef void (*sig_t)(int)  ;

typedef struct anonymous_typeX55 stack_t;

typedef long long int greg_t;

typedef struct _libc_fpstate*  fpregset_t  ;

typedef struct anonymous_typeX56 mcontext_t;

typedef struct ucontext_t  ucontext_t  ;

/// previous struct definition ///
struct _IO_FILE;

struct _IO_marker;

struct _IO_codecvt;

struct _IO_wide_data;

struct obstack;

struct tm;

struct Vi;

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

struct anonymous_typeX20
{
    unsigned int  attr  ;
    int  chars[5]  ;
    int ext_color;
};

struct anonymous_typeX21
{
    short id;
    int x;
    int y;
    int z;
    unsigned int  bstate  ;
};

enum { _PC_LINK_MAX 
,_PC_MAX_CANON 
,_PC_MAX_INPUT 
,_PC_NAME_MAX 
,_PC_PATH_MAX 
,_PC_PIPE_BUF 
,_PC_CHOWN_RESTRICTED 
,_PC_NO_TRUNC 
,_PC_VDISABLE 
,_PC_SYNC_IO 
,_PC_ASYNC_IO 
,_PC_PRIO_IO 
,_PC_SOCK_MAXBUF 
,_PC_FILESIZEBITS 
,_PC_REC_INCR_XFER_SIZE 
,_PC_REC_MAX_XFER_SIZE 
,_PC_REC_MIN_XFER_SIZE 
,_PC_REC_XFER_ALIGN 
,_PC_ALLOC_SIZE_MIN 
,_PC_SYMLINK_MAX 
,_PC_2_SYMLINKS 
};

enum { _SC_ARG_MAX 
,_SC_CHILD_MAX 
,_SC_CLK_TCK 
,_SC_NGROUPS_MAX 
,_SC_OPEN_MAX 
,_SC_STREAM_MAX 
,_SC_TZNAME_MAX 
,_SC_JOB_CONTROL 
,_SC_SAVED_IDS 
,_SC_REALTIME_SIGNALS 
,_SC_PRIORITY_SCHEDULING 
,_SC_TIMERS 
,_SC_ASYNCHRONOUS_IO 
,_SC_PRIORITIZED_IO 
,_SC_SYNCHRONIZED_IO 
,_SC_FSYNC 
,_SC_MAPPED_FILES 
,_SC_MEMLOCK 
,_SC_MEMLOCK_RANGE 
,_SC_MEMORY_PROTECTION 
,_SC_MESSAGE_PASSING 
,_SC_SEMAPHORES 
,_SC_SHARED_MEMORY_OBJECTS 
,_SC_AIO_LISTIO_MAX 
,_SC_AIO_MAX 
,_SC_AIO_PRIO_DELTA_MAX 
,_SC_DELAYTIMER_MAX 
,_SC_MQ_OPEN_MAX 
,_SC_MQ_PRIO_MAX 
,_SC_VERSION 
,_SC_PAGESIZE 
,_SC_RTSIG_MAX 
,_SC_SEM_NSEMS_MAX 
,_SC_SEM_VALUE_MAX 
,_SC_SIGQUEUE_MAX 
,_SC_TIMER_MAX 
,_SC_BC_BASE_MAX 
,_SC_BC_DIM_MAX 
,_SC_BC_SCALE_MAX 
,_SC_BC_STRING_MAX 
,_SC_COLL_WEIGHTS_MAX 
,_SC_EQUIV_CLASS_MAX 
,_SC_EXPR_NEST_MAX 
,_SC_LINE_MAX 
,_SC_RE_DUP_MAX 
,_SC_CHARCLASS_NAME_MAX 
,_SC_2_VERSION 
,_SC_2_C_BIND 
,_SC_2_C_DEV 
,_SC_2_FORT_DEV 
,_SC_2_FORT_RUN 
,_SC_2_SW_DEV 
,_SC_2_LOCALEDEF 
,_SC_PII 
,_SC_PII_XTI 
,_SC_PII_SOCKET 
,_SC_PII_INTERNET 
,_SC_PII_OSI 
,_SC_POLL 
,_SC_SELECT 
,_SC_UIO_MAXIOV 
,_SC_IOV_MAX=((60)),
_SC_PII_INTERNET_STREAM 
,_SC_PII_INTERNET_DGRAM 
,_SC_PII_OSI_COTS 
,_SC_PII_OSI_CLTS 
,_SC_PII_OSI_M 
,_SC_T_IOV_MAX 
,_SC_THREADS 
,_SC_THREAD_SAFE_FUNCTIONS 
,_SC_GETGR_R_SIZE_MAX 
,_SC_GETPW_R_SIZE_MAX 
,_SC_LOGIN_NAME_MAX 
,_SC_TTY_NAME_MAX 
,_SC_THREAD_DESTRUCTOR_ITERATIONS 
,_SC_THREAD_KEYS_MAX 
,_SC_THREAD_STACK_MIN 
,_SC_THREAD_THREADS_MAX 
,_SC_THREAD_ATTR_STACKADDR 
,_SC_THREAD_ATTR_STACKSIZE 
,_SC_THREAD_PRIORITY_SCHEDULING 
,_SC_THREAD_PRIO_INHERIT 
,_SC_THREAD_PRIO_PROTECT 
,_SC_THREAD_PROCESS_SHARED 
,_SC_NPROCESSORS_CONF 
,_SC_NPROCESSORS_ONLN 
,_SC_PHYS_PAGES 
,_SC_AVPHYS_PAGES 
,_SC_ATEXIT_MAX 
,_SC_PASS_MAX 
,_SC_XOPEN_VERSION 
,_SC_XOPEN_XCU_VERSION 
,_SC_XOPEN_UNIX 
,_SC_XOPEN_CRYPT 
,_SC_XOPEN_ENH_I18N 
,_SC_XOPEN_SHM 
,_SC_2_CHAR_TERM 
,_SC_2_C_VERSION 
,_SC_2_UPE 
,_SC_XOPEN_XPG2 
,_SC_XOPEN_XPG3 
,_SC_XOPEN_XPG4 
,_SC_CHAR_BIT 
,_SC_CHAR_MAX 
,_SC_CHAR_MIN 
,_SC_INT_MAX 
,_SC_INT_MIN 
,_SC_LONG_BIT 
,_SC_WORD_BIT 
,_SC_MB_LEN_MAX 
,_SC_NZERO 
,_SC_SSIZE_MAX 
,_SC_SCHAR_MAX 
,_SC_SCHAR_MIN 
,_SC_SHRT_MAX 
,_SC_SHRT_MIN 
,_SC_UCHAR_MAX 
,_SC_UINT_MAX 
,_SC_ULONG_MAX 
,_SC_USHRT_MAX 
,_SC_NL_ARGMAX 
,_SC_NL_LANGMAX 
,_SC_NL_MSGMAX 
,_SC_NL_NMAX 
,_SC_NL_SETMAX 
,_SC_NL_TEXTMAX 
,_SC_XBS5_ILP32_OFF32 
,_SC_XBS5_ILP32_OFFBIG 
,_SC_XBS5_LP64_OFF64 
,_SC_XBS5_LPBIG_OFFBIG 
,_SC_XOPEN_LEGACY 
,_SC_XOPEN_REALTIME 
,_SC_XOPEN_REALTIME_THREADS 
,_SC_ADVISORY_INFO 
,_SC_BARRIERS 
,_SC_BASE 
,_SC_C_LANG_SUPPORT 
,_SC_C_LANG_SUPPORT_R 
,_SC_CLOCK_SELECTION 
,_SC_CPUTIME 
,_SC_THREAD_CPUTIME 
,_SC_DEVICE_IO 
,_SC_DEVICE_SPECIFIC 
,_SC_DEVICE_SPECIFIC_R 
,_SC_FD_MGMT 
,_SC_FIFO 
,_SC_PIPE 
,_SC_FILE_ATTRIBUTES 
,_SC_FILE_LOCKING 
,_SC_FILE_SYSTEM 
,_SC_MONOTONIC_CLOCK 
,_SC_MULTI_PROCESS 
,_SC_SINGLE_PROCESS 
,_SC_NETWORKING 
,_SC_READER_WRITER_LOCKS 
,_SC_SPIN_LOCKS 
,_SC_REGEXP 
,_SC_REGEX_VERSION 
,_SC_SHELL 
,_SC_SIGNALS 
,_SC_SPAWN 
,_SC_SPORADIC_SERVER 
,_SC_THREAD_SPORADIC_SERVER 
,_SC_SYSTEM_DATABASE 
,_SC_SYSTEM_DATABASE_R 
,_SC_TIMEOUTS 
,_SC_TYPED_MEMORY_OBJECTS 
,_SC_USER_GROUPS 
,_SC_USER_GROUPS_R 
,_SC_2_PBS 
,_SC_2_PBS_ACCOUNTING 
,_SC_2_PBS_LOCATE 
,_SC_2_PBS_MESSAGE 
,_SC_2_PBS_TRACK 
,_SC_SYMLOOP_MAX 
,_SC_STREAMS 
,_SC_2_PBS_CHECKPOINT 
,_SC_V6_ILP32_OFF32 
,_SC_V6_ILP32_OFFBIG 
,_SC_V6_LP64_OFF64 
,_SC_V6_LPBIG_OFFBIG 
,_SC_HOST_NAME_MAX 
,_SC_TRACE 
,_SC_TRACE_EVENT_FILTER 
,_SC_TRACE_INHERIT 
,_SC_TRACE_LOG 
,_SC_LEVEL1_ICACHE_SIZE 
,_SC_LEVEL1_ICACHE_ASSOC 
,_SC_LEVEL1_ICACHE_LINESIZE 
,_SC_LEVEL1_DCACHE_SIZE 
,_SC_LEVEL1_DCACHE_ASSOC 
,_SC_LEVEL1_DCACHE_LINESIZE 
,_SC_LEVEL2_CACHE_SIZE 
,_SC_LEVEL2_CACHE_ASSOC 
,_SC_LEVEL2_CACHE_LINESIZE 
,_SC_LEVEL3_CACHE_SIZE 
,_SC_LEVEL3_CACHE_ASSOC 
,_SC_LEVEL3_CACHE_LINESIZE 
,_SC_LEVEL4_CACHE_SIZE 
,_SC_LEVEL4_CACHE_ASSOC 
,_SC_LEVEL4_CACHE_LINESIZE 
,_SC_IPV6=(((60)+125)+50),
_SC_RAW_SOCKETS 
,_SC_V7_ILP32_OFF32 
,_SC_V7_ILP32_OFFBIG 
,_SC_V7_LP64_OFF64 
,_SC_V7_LPBIG_OFFBIG 
,_SC_SS_REPL_MAX 
,_SC_TRACE_EVENT_NAME_MAX 
,_SC_TRACE_NAME_MAX 
,_SC_TRACE_SYS_MAX 
,_SC_TRACE_USER_EVENT_MAX 
,_SC_XOPEN_STREAMS 
,_SC_THREAD_ROBUST_PRIO_INHERIT 
,_SC_THREAD_ROBUST_PRIO_PROTECT 
,_SC_MINSIGSTKSZ 
,_SC_SIGSTKSZ 
};

enum { _CS_PATH 
,_CS_V6_WIDTH_RESTRICTED_ENVS 
,_CS_GNU_LIBC_VERSION 
,_CS_GNU_LIBPTHREAD_VERSION 
,_CS_V5_WIDTH_RESTRICTED_ENVS 
,_CS_V7_WIDTH_RESTRICTED_ENVS 
,_CS_LFS_CFLAGS=(1000),
_CS_LFS_LDFLAGS 
,_CS_LFS_LIBS 
,_CS_LFS_LINTFLAGS 
,_CS_LFS64_CFLAGS 
,_CS_LFS64_LDFLAGS 
,_CS_LFS64_LIBS 
,_CS_LFS64_LINTFLAGS 
,_CS_XBS5_ILP32_OFF32_CFLAGS=(1100),
_CS_XBS5_ILP32_OFF32_LDFLAGS 
,_CS_XBS5_ILP32_OFF32_LIBS 
,_CS_XBS5_ILP32_OFF32_LINTFLAGS 
,_CS_XBS5_ILP32_OFFBIG_CFLAGS 
,_CS_XBS5_ILP32_OFFBIG_LDFLAGS 
,_CS_XBS5_ILP32_OFFBIG_LIBS 
,_CS_XBS5_ILP32_OFFBIG_LINTFLAGS 
,_CS_XBS5_LP64_OFF64_CFLAGS 
,_CS_XBS5_LP64_OFF64_LDFLAGS 
,_CS_XBS5_LP64_OFF64_LIBS 
,_CS_XBS5_LP64_OFF64_LINTFLAGS 
,_CS_XBS5_LPBIG_OFFBIG_CFLAGS 
,_CS_XBS5_LPBIG_OFFBIG_LDFLAGS 
,_CS_XBS5_LPBIG_OFFBIG_LIBS 
,_CS_XBS5_LPBIG_OFFBIG_LINTFLAGS 
,_CS_POSIX_V6_ILP32_OFF32_CFLAGS 
,_CS_POSIX_V6_ILP32_OFF32_LDFLAGS 
,_CS_POSIX_V6_ILP32_OFF32_LIBS 
,_CS_POSIX_V6_ILP32_OFF32_LINTFLAGS 
,_CS_POSIX_V6_ILP32_OFFBIG_CFLAGS 
,_CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS 
,_CS_POSIX_V6_ILP32_OFFBIG_LIBS 
,_CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS 
,_CS_POSIX_V6_LP64_OFF64_CFLAGS 
,_CS_POSIX_V6_LP64_OFF64_LDFLAGS 
,_CS_POSIX_V6_LP64_OFF64_LIBS 
,_CS_POSIX_V6_LP64_OFF64_LINTFLAGS 
,_CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS 
,_CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS 
,_CS_POSIX_V6_LPBIG_OFFBIG_LIBS 
,_CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS 
,_CS_POSIX_V7_ILP32_OFF32_CFLAGS 
,_CS_POSIX_V7_ILP32_OFF32_LDFLAGS 
,_CS_POSIX_V7_ILP32_OFF32_LIBS 
,_CS_POSIX_V7_ILP32_OFF32_LINTFLAGS 
,_CS_POSIX_V7_ILP32_OFFBIG_CFLAGS 
,_CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS 
,_CS_POSIX_V7_ILP32_OFFBIG_LIBS 
,_CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS 
,_CS_POSIX_V7_LP64_OFF64_CFLAGS 
,_CS_POSIX_V7_LP64_OFF64_LDFLAGS 
,_CS_POSIX_V7_LP64_OFF64_LIBS 
,_CS_POSIX_V7_LP64_OFF64_LINTFLAGS 
,_CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS 
,_CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS 
,_CS_POSIX_V7_LPBIG_OFFBIG_LIBS 
,_CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS 
,_CS_V6_ENV 
,_CS_V7_ENV 
};

enum  eMode { kEditMode 
,kInsertMode 
,kVisualMode 
,kCommandMode 
,kSearchMode 
,kHorizonVisualMode 
,kVerticalVisualMode 
,kRewriteMode 
,kShellMode 
,kBinaryMode 
};

struct list_item$1int$ph
{
    int*  item  ;
    struct list_item$1int$ph* prev;
    struct list_item$1int$ph* next;
};

struct list$1int$ph
{
    struct list_item$1int$ph* head;
    struct list_item$1int$ph* tail;
    int len;
    struct list_item$1int$ph* it;
};

struct tuple3$3int$int$int$
{
    int v1;
    int v2;
    int v3;
};

struct list_item$1tuple3$3int$int$int$$ph
{
    struct tuple3$3int$int$int$* item;
    struct list_item$1tuple3$3int$int$int$$ph* prev;
    struct list_item$1tuple3$3int$int$int$$ph* next;
};

struct list$1tuple3$3int$int$int$$ph
{
    struct list_item$1tuple3$3int$int$int$$ph* head;
    struct list_item$1tuple3$3int$int$int$$ph* tail;
    int len;
    struct list_item$1tuple3$3int$int$int$$ph* it;
};

struct list_item$1list$1int$ph$ph
{
    struct list$1int$ph* item;
    struct list_item$1list$1int$ph$ph* prev;
    struct list_item$1list$1int$ph$ph* next;
};

struct list$1list$1int$ph$ph
{
    struct list_item$1list$1int$ph$ph* head;
    struct list_item$1list$1int$ph$ph* tail;
    int len;
    struct list_item$1list$1int$ph$ph* it;
};

struct list_item$1list$1int$$ph
{
    struct list$1int$* item;
    struct list_item$1list$1int$$ph* prev;
    struct list_item$1list$1int$$ph* next;
};

struct list$1list$1int$$ph
{
    struct list_item$1list$1int$$ph* head;
    struct list_item$1list$1int$$ph* tail;
    int len;
    struct list_item$1list$1int$$ph* it;
};

struct map$2int$list$1list$1int$$ph$ph
{
    int* keys;
    unsigned int* hashes;
    _Bool* item_existance;
    struct list$1list$1int$$ph** items;
    int size;
    int len;
    struct list$1int$* key_list;
    int it;
};

struct map$2int$tuple3$3int$int$int$$ph
{
    int*  keys  ;
    unsigned int* hashes;
    _Bool* item_existance;
    struct tuple3$3int$int$int$** items;
    int size;
    int len;
    struct list$1int$* key_list;
    int it;
};

struct ViWin
{
    struct _win_st*  win  ;
    struct list$1int$ph* texts;
    struct list$1int$* texts_length;
    int y;
    int x;
    int width;
    int height;
    int id;
    void* vi;
    int cursorY;
    int cursorX;
    int scroll;
    struct tuple3$3int$int$int$* returnPoint;
    struct list$1tuple3$3int$int$int$$ph* returnPointStack;
    struct list$1list$1int$ph$ph* undo;
    struct list$1int$* undoScroll;
    struct list$1int$* undoCursorX;
    struct list$1int$* undoCursorY;
    int undoIndex;
    char*  fileName  ;
    _Bool writed;
    int visualModeHead;
    int visualModeHeadX;
    int visualModeHeadHorizonScroll;
    int visualModeHeadHorizonX;
    int visualModeHeadHorizonY;
    int visualModeHeadBefore;
    int visualModeTailCursorYBefore;
    int visualModeTailScrollBefore;
    int mRepeatFowardNextCharacterKind;
    int  mRepeatFowardNextCharacter  ;
    struct list$1int$* inputedKeys;
    struct list$1int$* savedInputedKeys;
    _Bool autoInput;
    int digitInput;
    int autoInputIndex;
    _Bool pressedDot;
    struct map$2int$list$1list$1int$$ph$ph* macro;
    int recordingMacroKey;
    struct list$1list$1int$$ph* recordingMacro;
    struct list$1list$1int$$ph* runningMacro;
    int runningMacroIndex1;
    int runningMacroIndex2;
    struct map$2int$tuple3$3int$int$int$$ph* mark;
    int visualModeHorizonHeadScroll;
    int visualModeHorizonHeadX;
    int visualModeHorizonHeadY;
    int visualModeVerticalHeadX;
    int visualModeVerticalHeadY;
    int visualModeVerticalLen;
    int visualModeVerticalStartY;
    int visualModeVerticalStartScroll;
    int visualModeVerticalStartX;
    _Bool visualModeVerticalInserting;
    _Bool pasteMode;
    struct list$1int$ph* completionCandidates;
    int*  completionPrefix  ;
    int completionStartX;
    int completionIndex;
    _Bool completionActive;
};

struct list_item$1ViWin$ph
{
    struct ViWin*  item  ;
    struct list_item$1ViWin$ph* prev;
    struct list_item$1ViWin$ph* next;
};

struct list$1ViWin$ph
{
    struct list_item$1ViWin$ph* head;
    struct list_item$1ViWin$ph* tail;
    int len;
    struct list_item$1ViWin$ph* it;
};

struct list_item$1lambda$
{
    void (*item)(struct Vi* ,int);
    struct list_item$1lambda$* prev;
    struct list_item$1lambda$* next;
};

struct list$1lambda$
{
    struct list_item$1lambda$* head;
    struct list_item$1lambda$* tail;
    int len;
    struct list_item$1lambda$* it;
};

struct Vi
{
    struct list$1ViWin$ph* wins;
    struct ViWin*  activeWin  ;
    struct list$1lambda$* events;
    _Bool appEnd;
    int mode;
    int toggleWin;
    struct list$1int$ph* yank;
    struct list$1int$ph* fileYank;
    int yankKind;
    int  searchString[128]  ;
    _Bool searchReverse;
    _Bool regexSearch;
    int modeBeforeSearch;
    char commandString[128];
};

enum { kYankKindLine 
,kYankKindNoLine 
};

enum  eRepeatForwardNextCharacter { kRFNCNone 
,kRFNC1 
,kRFNC2 
};

union sigval
{
int sival_int;
void* sival_ptr;
};

struct anonymous_typeX24
{
    int  si_pid  ;
    unsigned int  si_uid  ;
};

struct anonymous_typeX25
{
    int si_tid;
    int si_overrun;
    union sigval  si_sigval  ;
};

struct anonymous_typeX26
{
    int  si_pid  ;
    unsigned int  si_uid  ;
    union sigval  si_sigval  ;
};

struct anonymous_typeX27
{
    int  si_pid  ;
    unsigned int  si_uid  ;
    int si_status;
    long  int  si_utime  ;
    long  int  si_stime  ;
};

struct anonymous_typeX30
{
    void* _lower;
    void* _upper;
};

union anonymous_typeZ29
{
    struct {
        void* _lower;
        void* _upper;
    } _addr_bnd;
unsigned int  _pkey  ;
};

struct anonymous_typeX32
{
    void* _lower;
    void* _upper;
};

union anonymous_typeZ31
{
    struct {
        void* _lower;
        void* _upper;
    } _addr_bnd;
unsigned int  _pkey  ;
};

struct anonymous_typeX28
{
    void* si_addr;
    short int si_addr_lsb;
    union {
        struct {
            void* _lower;
            void* _upper;
        } _addr_bnd;
        unsigned int  _pkey  ;
    } _bounds;
};

struct anonymous_typeX33
{
    long  int si_band;
    int si_fd;
};

struct anonymous_typeX34
{
    void* _call_addr;
    int _syscall;
    unsigned int _arch;
};

union anonymous_typeZ23
{
int _pad[((128/sizeof(int))-4)];
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
    } _kill;
    struct {
        int si_tid;
        int si_overrun;
        union sigval  si_sigval  ;
    } _timer;
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
        union sigval  si_sigval  ;
    } _rt;
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
        int si_status;
        long  int  si_utime  ;
        long  int  si_stime  ;
    } _sigchld;
    struct {
        void* si_addr;
        short int si_addr_lsb;
        union {
            struct {
                void* _lower;
                void* _upper;
            } _addr_bnd;
            unsigned int  _pkey  ;
        } _bounds;
    } _sigfault;
    struct {
        long  int si_band;
        int si_fd;
    } _sigpoll;
    struct {
        void* _call_addr;
        int _syscall;
        unsigned int _arch;
    } _sigsys;
};

struct anonymous_typeX36
{
    int  si_pid  ;
    unsigned int  si_uid  ;
};

struct anonymous_typeX37
{
    int si_tid;
    int si_overrun;
    union sigval  si_sigval  ;
};

struct anonymous_typeX38
{
    int  si_pid  ;
    unsigned int  si_uid  ;
    union sigval  si_sigval  ;
};

struct anonymous_typeX39
{
    int  si_pid  ;
    unsigned int  si_uid  ;
    int si_status;
    long  int  si_utime  ;
    long  int  si_stime  ;
};

struct anonymous_typeX42
{
    void* _lower;
    void* _upper;
};

union anonymous_typeZ41
{
    struct {
        void* _lower;
        void* _upper;
    } _addr_bnd;
unsigned int  _pkey  ;
};

struct anonymous_typeX44
{
    void* _lower;
    void* _upper;
};

union anonymous_typeZ43
{
    struct {
        void* _lower;
        void* _upper;
    } _addr_bnd;
unsigned int  _pkey  ;
};

struct anonymous_typeX40
{
    void* si_addr;
    short int si_addr_lsb;
    union {
        struct {
            void* _lower;
            void* _upper;
        } _addr_bnd;
        unsigned int  _pkey  ;
    } _bounds;
};

struct anonymous_typeX45
{
    long  int si_band;
    int si_fd;
};

struct anonymous_typeX46
{
    void* _call_addr;
    int _syscall;
    unsigned int _arch;
};

union anonymous_typeZ35
{
int _pad[((128/sizeof(int))-4)];
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
    } _kill;
    struct {
        int si_tid;
        int si_overrun;
        union sigval  si_sigval  ;
    } _timer;
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
        union sigval  si_sigval  ;
    } _rt;
    struct {
        int  si_pid  ;
        unsigned int  si_uid  ;
        int si_status;
        long  int  si_utime  ;
        long  int  si_stime  ;
    } _sigchld;
    struct {
        void* si_addr;
        short int si_addr_lsb;
        union {
            struct {
                void* _lower;
                void* _upper;
            } _addr_bnd;
            unsigned int  _pkey  ;
        } _bounds;
    } _sigfault;
    struct {
        long  int si_band;
        int si_fd;
    } _sigpoll;
    struct {
        void* _call_addr;
        int _syscall;
        unsigned int _arch;
    } _sigsys;
};

struct anonymous_typeX22
{
    int si_signo;
    int si_errno;
    int si_code;
    int __pad0;
    union {
        int _pad[((128/sizeof(int))-4)];
        struct {
            int  si_pid  ;
            unsigned int  si_uid  ;
        } _kill;
        struct {
            int si_tid;
            int si_overrun;
            union sigval  si_sigval  ;
        } _timer;
        struct {
            int  si_pid  ;
            unsigned int  si_uid  ;
            union sigval  si_sigval  ;
        } _rt;
        struct {
            int  si_pid  ;
            unsigned int  si_uid  ;
            int si_status;
            long  int  si_utime  ;
            long  int  si_stime  ;
        } _sigchld;
        struct {
            void* si_addr;
            short int si_addr_lsb;
            union {
                struct {
                    void* _lower;
                    void* _upper;
                } _addr_bnd;
                unsigned int  _pkey  ;
            } _bounds;
        } _sigfault;
        struct {
            long  int si_band;
            int si_fd;
        } _sigpoll;
        struct {
            void* _call_addr;
            int _syscall;
            unsigned int _arch;
        } _sigsys;
    } _sifields;
};

enum { SI_ASYNCNL=(-60),
SI_DETHREAD=(-7),
SI_TKILL 
,SI_SIGIO 
,SI_ASYNCIO 
,SI_MESGQ 
,SI_TIMER 
,SI_QUEUE 
,SI_USER 
,SI_KERNEL=(0x80)
};

enum { ILL_ILLOPC=(1),
ILL_ILLOPN 
,ILL_ILLADR 
,ILL_ILLTRP 
,ILL_PRVOPC 
,ILL_PRVREG 
,ILL_COPROC 
,ILL_BADSTK 
,ILL_BADIADDR 
};

enum { FPE_INTDIV=(1),
FPE_INTOVF 
,FPE_FLTDIV 
,FPE_FLTOVF 
,FPE_FLTUND 
,FPE_FLTRES 
,FPE_FLTINV 
,FPE_FLTSUB 
,FPE_FLTUNK=(14),
FPE_CONDTRAP 
};

enum { SEGV_MAPERR=(1),
SEGV_ACCERR 
,SEGV_BNDERR 
,SEGV_PKUERR 
,SEGV_ACCADI 
,SEGV_ADIDERR 
,SEGV_ADIPERR 
,SEGV_MTEAERR 
,SEGV_MTESERR 
,SEGV_CPERR 
};

enum { BUS_ADRALN=(1),
BUS_ADRERR 
,BUS_OBJERR 
,BUS_MCEERR_AR 
,BUS_MCEERR_AO 
};

enum { TRAP_BRKPT=(1),
TRAP_TRACE 
,TRAP_BRANCH 
,TRAP_HWBKPT 
,TRAP_UNK 
};

enum { CLD_EXITED=(1),
CLD_KILLED 
,CLD_DUMPED 
,CLD_TRAPPED 
,CLD_STOPPED 
,CLD_CONTINUED 
};

enum { POLL_IN=(1),
POLL_OUT 
,POLL_MSG 
,POLL_ERR 
,POLL_PRI 
,POLL_HUP 
};

struct anonymous_typeX48
{
    void (*_function)(union sigval );
    union pthread_attr_t*  _attribute  ;
};

union anonymous_typeZ47
{
int _pad[((64/sizeof(int))-4)];
int  _tid  ;
    struct {
        void (*_function)(union sigval );
        union pthread_attr_t*  _attribute  ;
    } _sigev_thread;
};

struct anonymous_typeX50
{
    void (*_function)(union sigval );
    union pthread_attr_t*  _attribute  ;
};

union anonymous_typeZ49
{
int _pad[((64/sizeof(int))-4)];
int  _tid  ;
    struct {
        void (*_function)(union sigval );
        union pthread_attr_t*  _attribute  ;
    } _sigev_thread;
};

struct sigevent
{
    union sigval  sigev_value  ;
    int sigev_signo;
    int sigev_notify;
    union {
        int _pad[((64/sizeof(int))-4)];
        int  _tid  ;
        struct {
            void (*_function)(union sigval );
            union pthread_attr_t*  _attribute  ;
        } _sigev_thread;
    } _sigev_un;
};

enum { SIGEV_SIGNAL=(0),
SIGEV_NONE 
,SIGEV_THREAD 
,SIGEV_THREAD_ID=(4)
};

union anonymous_typeZ51
{
void (*sa_handler)(int)  ;
void (*sa_sigaction)(int,struct anonymous_typeX22* ,void*);
};

union anonymous_typeZ52
{
void (*sa_handler)(int)  ;
void (*sa_sigaction)(int,struct anonymous_typeX22* ,void*);
};

struct sigaction
{
    union {
        void (*sa_handler)(int)  ;
        void (*sa_sigaction)(int,struct anonymous_typeX22* ,void*);
    } __sigaction_handler;
    struct {
        unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
    } sa_mask;
    int sa_flags;
    void (*sa_restorer)();
};

struct _fpx_sw_bytes
{
    unsigned int  magic1  ;
    unsigned int  extended_size  ;
    unsigned long  int  xstate_bv  ;
    unsigned int  xstate_size  ;
    unsigned int  __glibc_reserved1[7]  ;
};

struct _fpreg
{
    unsigned short int significand[4];
    unsigned short int exponent;
};

struct _fpxreg
{
    unsigned short int significand[4];
    unsigned short int exponent;
    unsigned short int __glibc_reserved1[3];
};

struct _xmmreg
{
    unsigned int  element[4]  ;
};

struct _fpstate
{
    unsigned short int  cwd  ;
    unsigned short int  swd  ;
    unsigned short int  ftw  ;
    unsigned short int  fop  ;
    unsigned long  int  rip  ;
    unsigned long  int  rdp  ;
    unsigned int  mxcsr  ;
    unsigned int  mxcr_mask  ;
    struct _fpxreg  _st[8]  ;
    struct _xmmreg  _xmm[16]  ;
    unsigned int  __glibc_reserved1[24]  ;
};

union anonymous_typeZ53
{
struct _fpstate*  fpstate  ;
unsigned long  int  __fpstate_word  ;
};

union anonymous_typeZ54
{
struct _fpstate*  fpstate  ;
unsigned long  int  __fpstate_word  ;
};

struct sigcontext
{
    unsigned long  int  r8  ;
    unsigned long  int  r9  ;
    unsigned long  int  r10  ;
    unsigned long  int  r11  ;
    unsigned long  int  r12  ;
    unsigned long  int  r13  ;
    unsigned long  int  r14  ;
    unsigned long  int  r15  ;
    unsigned long  int  rdi  ;
    unsigned long  int  rsi  ;
    unsigned long  int  rbp  ;
    unsigned long  int  rbx  ;
    unsigned long  int  rdx  ;
    unsigned long  int  rax  ;
    unsigned long  int  rcx  ;
    unsigned long  int  rsp  ;
    unsigned long  int  rip  ;
    unsigned long  int  eflags  ;
    unsigned short int cs;
    unsigned short int gs;
    unsigned short int fs;
    unsigned short int __pad0;
    unsigned long  int  err  ;
    unsigned long  int  trapno  ;
    unsigned long  int  oldmask  ;
    unsigned long  int  cr2  ;
    union {
        struct _fpstate*  fpstate  ;
        unsigned long  int  __fpstate_word  ;
    };
    unsigned long  int  __reserved1[8]  ;
};

struct _xsave_hdr
{
    unsigned long  int  xstate_bv  ;
    unsigned long  int  __glibc_reserved1[2]  ;
    unsigned long  int  __glibc_reserved2[5]  ;
};

struct _ymmh_state
{
    unsigned int  ymmh_space[64]  ;
};

struct _xstate
{
    struct _fpstate  fpstate  ;
    struct _xsave_hdr  xstate_hdr  ;
    struct _ymmh_state  ymmh  ;
};

struct anonymous_typeX55
{
    void* ss_sp;
    int ss_flags;
    unsigned long  int  ss_size  ;
};

typedef long long int  gregset_t[23]  ;

enum { REG_R8=(0),
REG_R9 
,REG_R10 
,REG_R11 
,REG_R12 
,REG_R13 
,REG_R14 
,REG_R15 
,REG_RDI 
,REG_RSI 
,REG_RBP 
,REG_RBX 
,REG_RDX 
,REG_RAX 
,REG_RCX 
,REG_RSP 
,REG_RIP 
,REG_EFL 
,REG_CSGSFS 
,REG_ERR 
,REG_TRAPNO 
,REG_OLDMASK 
,REG_CR2 
};

struct _libc_fpxreg
{
    unsigned short int significand[4];
    unsigned short int exponent;
    unsigned short int __glibc_reserved1[3];
};

struct _libc_xmmreg
{
    unsigned int  element[4]  ;
};

struct _libc_fpstate
{
    unsigned short int  cwd  ;
    unsigned short int  swd  ;
    unsigned short int  ftw  ;
    unsigned short int  fop  ;
    unsigned long  int  rip  ;
    unsigned long  int  rdp  ;
    unsigned int  mxcsr  ;
    unsigned int  mxcr_mask  ;
    struct _libc_fpxreg  _st[8]  ;
    struct _libc_xmmreg  _xmm[16]  ;
    unsigned int  __glibc_reserved1[24]  ;
};

struct anonymous_typeX56
{
    long long int  gregs[23]  ;
    struct _libc_fpstate*  fpregs  ;
    unsigned long  long __reserved1[8];
};

struct ucontext_t
{
    unsigned long  int uc_flags;
    struct ucontext_t*  uc_link  ;
    struct {
        void* ss_sp;
        int ss_flags;
        unsigned long  int  ss_size  ;
    } uc_stack;
    struct {
        long long int  gregs[23]  ;
        struct _libc_fpstate*  fpregs  ;
        unsigned long  long __reserved1[8];
    } uc_mcontext;
    struct {
        unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
    } uc_sigmask;
    struct _libc_fpstate  __fpregs_mem  ;
    unsigned long long int __ssp[4];
};

enum { SS_ONSTACK=(1),
SS_DISABLE 
};

struct sigstack
{
    void* ss_sp;
    int ss_onstack;
};

struct winsize
{
    unsigned short int ws_row;
    unsigned short int ws_col;
    unsigned short int ws_xpixel;
    unsigned short int ws_ypixel;
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

extern unsigned int  acs_map[]  ;
extern struct _win_st*  curscr  ;
extern struct _win_st*  newscr  ;
extern struct _win_st*  stdscr  ;
extern char ttytype[];
extern int COLORS;
extern int COLOR_PAIRS;
extern int COLS;
extern int ESCDELAY;
extern int LINES;
extern int TABSIZE;
extern struct anonymous_typeX20*  _nc_wacs  ;
extern char** __environ;
extern char** environ;
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern int gBinaryMode;
static volatile int  gInterruptRepetitionRequested  =0;
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
struct list$1char$* chara_to_list(char* self, unsigned long  int  len  );
struct list$1char$p* charpa_to_list(char** self, unsigned long  int  len  );
struct list$1short$* shorta_to_list(short* self, unsigned long  int  len  );
struct list$1int$* inta_to_list(int* self, unsigned long  int  len  );
struct list$1long$* longa_to_list(long* self, unsigned long  int  len  );
struct list$1float$* floata_to_list(float* self, unsigned long  int  len  );
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
int addch(const unsigned int    );
int addchnstr(const unsigned int*    , int );
int addchstr(const unsigned int*    );
int addnstr(const char* , int );
int addstr(const char* );
int attroff(int );
int attron(int );
int attrset(int );
int attr_get(unsigned int*    , short* , void* );
int attr_off(unsigned int    , void* );
int attr_on(unsigned int    , void* );
int attr_set(unsigned int    , short , void* );
int baudrate();
int beep();
int bkgd(unsigned int    );
void bkgdset(unsigned int    );
int border(unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    );
int box(struct _win_st*    , unsigned int    , unsigned int    );
_Bool can_change_color();
int cbreak();
int chgat(int , unsigned int    , short , const void* );
int clear();
int clearok(struct _win_st*    , _Bool );
int clrtobot();
int clrtoeol();
int color_content(short , short* , short* , short* );
int color_set(short , void* );
int COLOR_PAIR(int );
int copywin(const struct _win_st*    , struct _win_st*    , int , int , int , int , int , int , int );
int curs_set(int );
int def_prog_mode();
int def_shell_mode();
int delay_output(int );
int delch();
void delscreen(struct screen*    );
int delwin(struct _win_st*    );
int deleteln();
struct _win_st*  derwin(struct _win_st*    , int , int , int , int );
int doupdate();
struct _win_st*  dupwin(struct _win_st*    );
int echo();
int echochar(const unsigned int    );
int erase();
int endwin();
char erasechar();
void filter();
int flash();
int flushinp();
unsigned int  getbkgd(struct _win_st*    );
int getch();
int getnstr(char* , int );
int getstr(char* );
struct _win_st*  getwin(struct _IO_FILE*    );
int halfdelay(int );
_Bool has_colors();
_Bool has_ic();
_Bool has_il();
int hline(unsigned int    , int );
void idcok(struct _win_st*    , _Bool );
int idlok(struct _win_st*    , _Bool );
void immedok(struct _win_st*    , _Bool );
unsigned int  inch();
int inchnstr(unsigned int*    , int );
int inchstr(unsigned int*    );
struct _win_st*  initscr();
int init_color(short , short , short , short );
int init_pair(short , short , short );
int innstr(char* , int );
int insch(unsigned int    );
int insdelln(int );
int insertln();
int insnstr(const char* , int );
int insstr(const char* );
int instr(char* );
int intrflush(struct _win_st*    , _Bool );
_Bool isendwin();
_Bool is_linetouched(struct _win_st*    , int );
_Bool is_wintouched(struct _win_st*    );
const char* keyname(int );
int keypad(struct _win_st*    , _Bool );
char killchar();
int leaveok(struct _win_st*    , _Bool );
char* longname();
int meta(struct _win_st*    , _Bool );
int move(int , int );
int mvaddch(int , int , const unsigned int    );
int mvaddchnstr(int , int , const unsigned int*    , int );
int mvaddchstr(int , int , const unsigned int*    );
int mvaddnstr(int , int , const char* , int );
int mvaddstr(int , int , const char* );
int mvchgat(int , int , int , unsigned int    , short , const void* );
int mvcur(int , int , int , int );
int mvdelch(int , int );
int mvderwin(struct _win_st*    , int , int );
int mvgetch(int , int );
int mvgetnstr(int , int , char* , int );
int mvgetstr(int , int , char* );
int mvhline(int , int , unsigned int    , int );
unsigned int  mvinch(int , int );
int mvinchnstr(int , int , unsigned int*    , int );
int mvinchstr(int , int , unsigned int*    );
int mvinnstr(int , int , char* , int );
int mvinsch(int , int , unsigned int    );
int mvinsnstr(int , int , const char* , int );
int mvinsstr(int , int , const char* );
int mvinstr(int , int , char* );
int mvprintw(int , int , const char* , ...) __attribute__((format(printf,3,4)));
int mvscanw(int , int , const char* , ...);
int mvvline(int , int , unsigned int    , int );
int mvwaddch(struct _win_st*    , int , int , const unsigned int    );
int mvwaddchnstr(struct _win_st*    , int , int , const unsigned int*    , int );
int mvwaddchstr(struct _win_st*    , int , int , const unsigned int*    );
int mvwaddnstr(struct _win_st*    , int , int , const char* , int );
int mvwaddstr(struct _win_st*    , int , int , const char* );
int mvwchgat(struct _win_st*    , int , int , int , unsigned int    , short , const void* );
int mvwdelch(struct _win_st*    , int , int );
int mvwgetch(struct _win_st*    , int , int );
int mvwgetnstr(struct _win_st*    , int , int , char* , int );
int mvwgetstr(struct _win_st*    , int , int , char* );
int mvwhline(struct _win_st*    , int , int , unsigned int    , int );
int mvwin(struct _win_st*    , int , int );
unsigned int  mvwinch(struct _win_st*    , int , int );
int mvwinchnstr(struct _win_st*    , int , int , unsigned int*    , int );
int mvwinchstr(struct _win_st*    , int , int , unsigned int*    );
int mvwinnstr(struct _win_st*    , int , int , char* , int );
int mvwinsch(struct _win_st*    , int , int , unsigned int    );
int mvwinsnstr(struct _win_st*    , int , int , const char* , int );
int mvwinsstr(struct _win_st*    , int , int , const char* );
int mvwinstr(struct _win_st*    , int , int , char* );
int mvwprintw(struct _win_st*    , int , int , const char* , ...) __attribute__((format(printf,4,5)));
int mvwscanw(struct _win_st*    , int , int , const char* , ...);
int mvwvline(struct _win_st*    , int , int , unsigned int    , int );
int napms(int );
struct _win_st*  newpad(int , int );
struct screen*  newterm(const char* , struct _IO_FILE*    , struct _IO_FILE*    );
struct _win_st*  newwin(int , int , int , int );
int nl();
int nocbreak();
int nodelay(struct _win_st*    , _Bool );
int noecho();
int nonl();
void noqiflush();
int noraw();
int notimeout(struct _win_st*    , _Bool );
int overlay(const struct _win_st*    , struct _win_st*    );
int overwrite(const struct _win_st*    , struct _win_st*    );
int pair_content(short , short* , short* );
int PAIR_NUMBER(int );
int pechochar(struct _win_st*    , const unsigned int    );
int pnoutrefresh(struct _win_st*    , int , int , int , int , int , int );
int prefresh(struct _win_st*    , int , int , int , int , int , int );
int printw(const char* , ...) __attribute__((format(printf,1,2)));
int putwin(struct _win_st*    , struct _IO_FILE*    );
void qiflush();
int raw();
int redrawwin(struct _win_st*    );
int refresh();
int resetty();
int reset_prog_mode();
int reset_shell_mode();
int ripoffline(int , int (*anonymous_lambda_var_nameZ1)(struct _win_st* ,int));
int savetty();
int scanw(const char* , ...);
int scr_dump(const char* );
int scr_init(const char* );
int scrl(int );
int scroll(struct _win_st*    );
int scrollok(struct _win_st*    , _Bool );
int scr_restore(const char* );
int scr_set(const char* );
int setscrreg(int , int );
struct screen*  set_term(struct screen*    );
int slk_attroff(const unsigned int    );
int slk_attr_off(const unsigned int    , void* );
int slk_attron(const unsigned int    );
int slk_attr_on(unsigned int    , void* );
int slk_attrset(const unsigned int    );
unsigned int  slk_attr();
int slk_attr_set(const unsigned int    , short , void* );
int slk_clear();
int slk_color(short );
int slk_init(int );
char* slk_label(int );
int slk_noutrefresh();
int slk_refresh();
int slk_restore();
int slk_set(int , const char* , int );
int slk_touch();
int standout();
int standend();
int start_color();
struct _win_st*  subpad(struct _win_st*    , int , int , int , int );
struct _win_st*  subwin(struct _win_st*    , int , int , int , int );
int syncok(struct _win_st*    , _Bool );
unsigned int  termattrs();
char* termname();
void timeout(int );
int touchline(struct _win_st*    , int , int );
int touchwin(struct _win_st*    );
int typeahead(int );
int ungetch(int );
int untouchwin(struct _win_st*    );
void use_env(_Bool );
void use_tioctl(_Bool );
int vidattr(unsigned int    );
int vidputs(unsigned int    , int (*anonymous_var_nameY442)(int)  );
int vline(unsigned int    , int );
int vwprintw(struct _win_st*    , const char* , __builtin_va_list    ) __attribute__((deprecated))	
		__attribute__((format(printf,2,0)));
int vw_printw(struct _win_st*    , const char* , __builtin_va_list    ) __attribute__((format(printf,2,0)));
int vwscanw(struct _win_st*    , const char* , __builtin_va_list    ) __attribute__((deprecated))	
		;
int vw_scanw(struct _win_st*    , const char* , __builtin_va_list    );
int waddch(struct _win_st*    , const unsigned int    );
int waddchnstr(struct _win_st*    , const unsigned int*    , int );
int waddchstr(struct _win_st*    , const unsigned int*    );
int waddnstr(struct _win_st*    , const char* , int );
int waddstr(struct _win_st*    , const char* );
int wattron(struct _win_st*    , int );
int wattroff(struct _win_st*    , int );
int wattrset(struct _win_st*    , int );
int wattr_get(struct _win_st*    , unsigned int*    , short* , void* );
int wattr_on(struct _win_st*    , unsigned int    , void* );
int wattr_off(struct _win_st*    , unsigned int    , void* );
int wattr_set(struct _win_st*    , unsigned int    , short , void* );
int wbkgd(struct _win_st*    , unsigned int    );
void wbkgdset(struct _win_st*    , unsigned int    );
int wborder(struct _win_st*    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    , unsigned int    );
int wchgat(struct _win_st*    , int , unsigned int    , short , const void* );
int wclear(struct _win_st*    );
int wclrtobot(struct _win_st*    );
int wclrtoeol(struct _win_st*    );
int wcolor_set(struct _win_st*    , short , void* );
void wcursyncup(struct _win_st*    );
int wdelch(struct _win_st*    );
int wdeleteln(struct _win_st*    );
int wechochar(struct _win_st*    , const unsigned int    );
int werase(struct _win_st*    );
int wgetch(struct _win_st*    );
int wgetnstr(struct _win_st*    , char* , int );
int wgetstr(struct _win_st*    , char* );
int whline(struct _win_st*    , unsigned int    , int );
unsigned int  winch(struct _win_st*    );
int winchnstr(struct _win_st*    , unsigned int*    , int );
int winchstr(struct _win_st*    , unsigned int*    );
int winnstr(struct _win_st*    , char* , int );
int winsch(struct _win_st*    , unsigned int    );
int winsdelln(struct _win_st*    , int );
int winsertln(struct _win_st*    );
int winsnstr(struct _win_st*    , const char* , int );
int winsstr(struct _win_st*    , const char* );
int winstr(struct _win_st*    , char* );
int wmove(struct _win_st*    , int , int );
int wnoutrefresh(struct _win_st*    );
int wprintw(struct _win_st*    , const char* , ...) __attribute__((format(printf,2,3)));
int wredrawln(struct _win_st*    , int , int );
int wrefresh(struct _win_st*    );
int wscanw(struct _win_st*    , const char* , ...);
int wscrl(struct _win_st*    , int );
int wsetscrreg(struct _win_st*    , int , int );
int wstandout(struct _win_st*    );
int wstandend(struct _win_st*    );
void wsyncdown(struct _win_st*    );
void wsyncup(struct _win_st*    );
void wtimeout(struct _win_st*    , int );
int wtouchln(struct _win_st*    , int , int , int );
int wvline(struct _win_st*    , unsigned int    , int );
int tigetflag(const char* );
int tigetnum(const char* );
char* tigetstr(const char* );
int putp(const char* );
char* tparm(const char* , ...);
char* tiparm(const char* , ...);
char* tiparm_s(int , int , const char* , ...);
int tiscan_s(int* , int* , const char* );
int getattrs(const struct _win_st*    );
int getcurx(const struct _win_st*    );
int getcury(const struct _win_st*    );
int getbegx(const struct _win_st*    );
int getbegy(const struct _win_st*    );
int getmaxx(const struct _win_st*    );
int getmaxy(const struct _win_st*    );
int getparx(const struct _win_st*    );
int getpary(const struct _win_st*    );
int alloc_pair(int , int );
int assume_default_colors(int , int );
const char* curses_version();
int define_key(const char* , int );
int extended_color_content(int , int* , int* , int* );
int extended_pair_content(int , int* , int* );
int extended_slk_color(int );
int find_pair(int , int );
int free_pair(int );
int get_escdelay();
int init_extended_color(int , int , int , int );
int init_extended_pair(int , int , int );
int is_cbreak();
int is_echo();
int is_nl();
int is_raw();
_Bool is_term_resized(int , int );
int key_defined(const char* );
char* keybound(int , int );
int keyok(int , _Bool );
void nofilter();
void reset_color_pairs();
int resize_term(int , int );
int resizeterm(int , int );
int set_escdelay(int );
int set_tabsize(int );
int use_default_colors();
int use_legacy_coding(int );
int use_screen(struct screen*    , int (*anonymous_var_nameY643)(struct screen* ,void*)  , void* );
int use_window(struct _win_st*    , int (*anonymous_var_nameY646)(struct _win_st* ,void*)  , void* );
int wresize(struct _win_st*    , int , int );
int use_extended_names(_Bool );
struct _win_st*  wgetparent(const struct _win_st*    );
_Bool is_cleared(const struct _win_st*    );
_Bool is_idcok(const struct _win_st*    );
_Bool is_idlok(const struct _win_st*    );
_Bool is_immedok(const struct _win_st*    );
_Bool is_keypad(const struct _win_st*    );
_Bool is_leaveok(const struct _win_st*    );
_Bool is_nodelay(const struct _win_st*    );
_Bool is_notimeout(const struct _win_st*    );
_Bool is_pad(const struct _win_st*    );
_Bool is_scrollok(const struct _win_st*    );
_Bool is_subwin(const struct _win_st*    );
_Bool is_syncok(const struct _win_st*    );
int wgetdelay(const struct _win_st*    );
int wgetscrreg(const struct _win_st*    , int* , int* );
struct screen*  new_prescr();
int baudrate_sp(struct screen*    );
int beep_sp(struct screen*    );
_Bool can_change_color_sp(struct screen*    );
int cbreak_sp(struct screen*    );
int curs_set_sp(struct screen*    , int );
int color_content_sp(struct screen*    , short , short* , short* , short* );
int def_prog_mode_sp(struct screen*    );
int def_shell_mode_sp(struct screen*    );
int delay_output_sp(struct screen*    , int );
int doupdate_sp(struct screen*    );
int echo_sp(struct screen*    );
int endwin_sp(struct screen*    );
char erasechar_sp(struct screen*    );
void filter_sp(struct screen*    );
int flash_sp(struct screen*    );
int flushinp_sp(struct screen*    );
struct _win_st*  getwin_sp(struct screen*    , struct _IO_FILE*    );
int halfdelay_sp(struct screen*    , int );
_Bool has_colors_sp(struct screen*    );
_Bool has_ic_sp(struct screen*    );
_Bool has_il_sp(struct screen*    );
int init_color_sp(struct screen*    , short , short , short , short );
int init_pair_sp(struct screen*    , short , short , short );
int intrflush_sp(struct screen*    , struct _win_st*    , _Bool );
_Bool isendwin_sp(struct screen*    );
const char* keyname_sp(struct screen*    , int );
char killchar_sp(struct screen*    );
char* longname_sp(struct screen*    );
int mvcur_sp(struct screen*    , int , int , int , int );
int napms_sp(struct screen*    , int );
struct _win_st*  newpad_sp(struct screen*    , int , int );
struct screen*  newterm_sp(struct screen*    , const char* , struct _IO_FILE*    , struct _IO_FILE*    );
struct _win_st*  newwin_sp(struct screen*    , int , int , int , int );
int nl_sp(struct screen*    );
int nocbreak_sp(struct screen*    );
int noecho_sp(struct screen*    );
int nonl_sp(struct screen*    );
void noqiflush_sp(struct screen*    );
int noraw_sp(struct screen*    );
int pair_content_sp(struct screen*    , short , short* , short* );
void qiflush_sp(struct screen*    );
int raw_sp(struct screen*    );
int reset_prog_mode_sp(struct screen*    );
int reset_shell_mode_sp(struct screen*    );
int resetty_sp(struct screen*    );
int ripoffline_sp(struct screen*    , int , int (*anonymous_lambda_var_nameZ2)(struct _win_st* ,int));
int savetty_sp(struct screen*    );
int scr_init_sp(struct screen*    , const char* );
int scr_restore_sp(struct screen*    , const char* );
int scr_set_sp(struct screen*    , const char* );
int slk_attroff_sp(struct screen*    , const unsigned int    );
int slk_attron_sp(struct screen*    , const unsigned int    );
int slk_attrset_sp(struct screen*    , const unsigned int    );
unsigned int  slk_attr_sp(struct screen*    );
int slk_attr_set_sp(struct screen*    , const unsigned int    , short , void* );
int slk_clear_sp(struct screen*    );
int slk_color_sp(struct screen*    , short );
int slk_init_sp(struct screen*    , int );
char* slk_label_sp(struct screen*    , int );
int slk_noutrefresh_sp(struct screen*    );
int slk_refresh_sp(struct screen*    );
int slk_restore_sp(struct screen*    );
int slk_set_sp(struct screen*    , int , const char* , int );
int slk_touch_sp(struct screen*    );
int start_color_sp(struct screen*    );
unsigned int  termattrs_sp(struct screen*    );
char* termname_sp(struct screen*    );
int typeahead_sp(struct screen*    , int );
int ungetch_sp(struct screen*    , int );
void use_env_sp(struct screen*    , _Bool );
void use_tioctl_sp(struct screen*    , _Bool );
int vidattr_sp(struct screen*    , unsigned int    );
int vidputs_sp(struct screen*    , unsigned int    , int (*anonymous_var_nameY803)(struct screen* ,int)  );
int alloc_pair_sp(struct screen*    , int , int );
int assume_default_colors_sp(struct screen*    , int , int );
int define_key_sp(struct screen*    , const char* , int );
int extended_color_content_sp(struct screen*    , int , int* , int* , int* );
int extended_pair_content_sp(struct screen*    , int , int* , int* );
int extended_slk_color_sp(struct screen*    , int );
int find_pair_sp(struct screen*    , int , int );
int free_pair_sp(struct screen*    , int );
int get_escdelay_sp(struct screen*    );
int init_extended_color_sp(struct screen*    , int , int , int , int );
int init_extended_pair_sp(struct screen*    , int , int , int );
int is_cbreak_sp(struct screen*    );
int is_echo_sp(struct screen*    );
int is_nl_sp(struct screen*    );
int is_raw_sp(struct screen*    );
_Bool is_term_resized_sp(struct screen*    , int , int );
int key_defined_sp(struct screen*    , const char* );
char* keybound_sp(struct screen*    , int , int );
int keyok_sp(struct screen*    , int , _Bool );
void nofilter_sp(struct screen*    );
void reset_color_pairs_sp(struct screen*    );
int resize_term_sp(struct screen*    , int , int );
int resizeterm_sp(struct screen*    , int , int );
int set_escdelay_sp(struct screen*    , int );
int set_tabsize_sp(struct screen*    , int );
int use_default_colors_sp(struct screen*    );
int use_legacy_coding_sp(struct screen*    , int );
int add_wch(const struct anonymous_typeX20*    );
int add_wchnstr(const struct anonymous_typeX20*    , int );
int add_wchstr(const struct anonymous_typeX20*    );
int addnwstr(const int*    , int );
int addwstr(const int*    );
int bkgrnd(const struct anonymous_typeX20*    );
void bkgrndset(const struct anonymous_typeX20*    );
int border_set(const struct anonymous_typeX20*    , const struct anonymous_typeX20*    , const struct anonymous_typeX20*    , const struct anonymous_typeX20*    , const struct anonymous_typeX20*    , const struct anonymous_typeX20*    , const struct anonymous_typeX20*    , const struct anonymous_typeX20*    );
int box_set(struct _win_st*    , const struct anonymous_typeX20*    , const struct anonymous_typeX20*    );
int echo_wchar(const struct anonymous_typeX20*    );
int erasewchar(int*    );
int get_wch(unsigned int*    );
int get_wstr(unsigned int*    );
int getbkgrnd(struct anonymous_typeX20*    );
int getcchar(const struct anonymous_typeX20*    , int*    , unsigned int*    , short* , void* );
int getn_wstr(unsigned int*    , int );
int hline_set(const struct anonymous_typeX20*    , int );
int in_wch(struct anonymous_typeX20*    );
int in_wchnstr(struct anonymous_typeX20*    , int );
int in_wchstr(struct anonymous_typeX20*    );
int innwstr(int*    , int );
int ins_nwstr(const int*    , int );
int ins_wch(const struct anonymous_typeX20*    );
int ins_wstr(const int*    );
int inwstr(int*    );
const char* key_name(int    );
int killwchar(int*    );
int mvadd_wch(int , int , const struct anonymous_typeX20*    );
int mvadd_wchnstr(int , int , const struct anonymous_typeX20*    , int );
int mvadd_wchstr(int , int , const struct anonymous_typeX20*    );
int mvaddnwstr(int , int , const int*    , int );
int mvaddwstr(int , int , const int*    );
int mvget_wch(int , int , unsigned int*    );
int mvget_wstr(int , int , unsigned int*    );
int mvgetn_wstr(int , int , unsigned int*    , int );
int mvhline_set(int , int , const struct anonymous_typeX20*    , int );
int mvin_wch(int , int , struct anonymous_typeX20*    );
int mvin_wchnstr(int , int , struct anonymous_typeX20*    , int );
int mvin_wchstr(int , int , struct anonymous_typeX20*    );
int mvinnwstr(int , int , int*    , int );
int mvins_nwstr(int , int , const int*    , int );
int mvins_wch(int , int , const struct anonymous_typeX20*    );
int mvins_wstr(int , int , const int*    );
int mvinwstr(int , int , int*    );
int mvvline_set(int , int , const struct anonymous_typeX20*    , int );
int mvwadd_wch(struct _win_st*    , int , int , const struct anonymous_typeX20*    );
int mvwadd_wchnstr(struct _win_st*    , int , int , const struct anonymous_typeX20*    , int );
int mvwadd_wchstr(struct _win_st*    , int , int , const struct anonymous_typeX20*    );
int mvwaddnwstr(struct _win_st*    , int , int , const int*    , int );
int mvwaddwstr(struct _win_st*    , int , int , const int*    );
int mvwget_wch(struct _win_st*    , int , int , unsigned int*    );
int mvwget_wstr(struct _win_st*    , int , int , unsigned int*    );
int mvwgetn_wstr(struct _win_st*    , int , int , unsigned int*    , int );
int mvwhline_set(struct _win_st*    , int , int , const struct anonymous_typeX20*    , int );
int mvwin_wch(struct _win_st*    , int , int , struct anonymous_typeX20*    );
int mvwin_wchnstr(struct _win_st*    , int , int , struct anonymous_typeX20*    , int );
int mvwin_wchstr(struct _win_st*    , int , int , struct anonymous_typeX20*    );
int mvwinnwstr(struct _win_st*    , int , int , int*    , int );
int mvwins_nwstr(struct _win_st*    , int , int , const int*    , int );
int mvwins_wch(struct _win_st*    , int , int , const struct anonymous_typeX20*    );
int mvwins_wstr(struct _win_st*    , int , int , const int*    );
int mvwinwstr(struct _win_st*    , int , int , int*    );
int mvwvline_set(struct _win_st*    , int , int , const struct anonymous_typeX20*    , int );
int pecho_wchar(struct _win_st*    , const struct anonymous_typeX20*    );
int setcchar(struct anonymous_typeX20*    , const int*    , const unsigned int    , short , const void* );
int slk_wset(int , const int*    , int );
unsigned int  term_attrs();
int unget_wch(const int    );
int vid_attr(unsigned int    , short , void* );
int vid_puts(unsigned int    , short , void* , int (*anonymous_var_nameY1075)(int)  );
int vline_set(const struct anonymous_typeX20*    , int );
int wadd_wch(struct _win_st*    , const struct anonymous_typeX20*    );
int wadd_wchnstr(struct _win_st*    , const struct anonymous_typeX20*    , int );
int wadd_wchstr(struct _win_st*    , const struct anonymous_typeX20*    );
int waddnwstr(struct _win_st*    , const int*    , int );
int waddwstr(struct _win_st*    , const int*    );
int wbkgrnd(struct _win_st*    , const struct anonymous_typeX20*    );
void wbkgrndset(struct _win_st*    , const struct anonymous_typeX20*    );
int wborder_set(struct _win_st*    , const struct anonymous_typeX20*    , const struct anonymous_typeX20*    , const struct anonymous_typeX20*    , const struct anonymous_typeX20*    , const struct anonymous_typeX20*    , const struct anonymous_typeX20*    , const struct anonymous_typeX20*    , const struct anonymous_typeX20*    );
int wecho_wchar(struct _win_st*    , const struct anonymous_typeX20*    );
int wget_wch(struct _win_st*    , unsigned int*    );
int wget_wstr(struct _win_st*    , unsigned int*    );
int wgetbkgrnd(struct _win_st*    , struct anonymous_typeX20*    );
int wgetn_wstr(struct _win_st*    , unsigned int*    , int );
int whline_set(struct _win_st*    , const struct anonymous_typeX20*    , int );
int win_wch(struct _win_st*    , struct anonymous_typeX20*    );
int win_wchnstr(struct _win_st*    , struct anonymous_typeX20*    , int );
int win_wchstr(struct _win_st*    , struct anonymous_typeX20*    );
int winnwstr(struct _win_st*    , int*    , int );
int wins_nwstr(struct _win_st*    , const int*    , int );
int wins_wch(struct _win_st*    , const struct anonymous_typeX20*    );
int wins_wstr(struct _win_st*    , const int*    );
int winwstr(struct _win_st*    , int*    );
int*  wunctrl(struct anonymous_typeX20*    );
int wvline_set(struct _win_st*    , const struct anonymous_typeX20*    , int );
unsigned int  term_attrs_sp(struct screen*    );
int erasewchar_sp(struct screen*    , int*    );
int killwchar_sp(struct screen*    , int*    );
int unget_wch_sp(struct screen*    , const int    );
int vid_attr_sp(struct screen*    , unsigned int    , short , void* );
int vid_puts_sp(struct screen*    , unsigned int    , short , void* , int (*anonymous_var_nameY1155)(struct screen* ,int)  );
int*  wunctrl_sp(struct screen*    , struct anonymous_typeX20*    );
_Bool has_mouse();
int getmouse(struct anonymous_typeX21*    );
int ungetmouse(struct anonymous_typeX21*    );
unsigned int  mousemask(unsigned int    , unsigned int*    );
_Bool wenclose(const struct _win_st*    , int , int );
int mouseinterval(int );
_Bool wmouse_trafo(const struct _win_st*    , int* , int* , _Bool );
_Bool mouse_trafo(int* , int* , _Bool );
_Bool has_mouse_sp(struct screen*    );
int getmouse_sp(struct screen*    , struct anonymous_typeX21*    );
int ungetmouse_sp(struct screen*    , struct anonymous_typeX21*    );
unsigned int  mousemask_sp(struct screen*    , unsigned int    , unsigned int*    );
int mouseinterval_sp(struct screen*    , int );
int mcprint(char* , int );
int has_key(int );
int has_key_sp(struct screen*    , int );
int mcprint_sp(struct screen*    , char* , int );
void _tracef(const char* , ...) __attribute__((format(printf,1,2)));
char* _traceattr(unsigned int    );
char* _traceattr2(int , unsigned int    );
char* _tracechar(int );
char* _tracechtype(unsigned int    );
char* _tracechtype2(int , unsigned int    );
char* _tracecchar_t(const struct anonymous_typeX20*    );
char* _tracecchar_t2(int , const struct anonymous_typeX20*    );
void trace(const unsigned int ) __attribute__((deprecated));
unsigned int curses_trace(const unsigned int );
void exit_curses(int );
const char* unctrl(unsigned int    );
const char* unctrl_sp(struct screen*    , unsigned int    );
int access(const char* __name, int __type);
int euidaccess(const char* __name, int __type);
int eaccess(const char* __name, int __type);
int execveat(int __fd, const char* __path, char* const __argv[], char* const __envp[], int __flags);
int faccessat(int __fd, const char* __file, int __type, int __flag);
long  int  lseek(int __fd, long  int  __offset  , int __whence);
long  int  lseek64(int __fd, long  int  __offset  , int __whence);
int close(int __fd);
void closefrom(int __lowfd);
long  int  read(int __fd, void* __buf, unsigned long  int  __nbytes  );
long  int  write(int __fd, const void* __buf, unsigned long  int  __n  );
long  int  pread(int __fd, void* __buf, unsigned long  int  __nbytes  , long  int  __offset  );
long  int  pwrite(int __fd, const void* __buf, unsigned long  int  __n  , long  int  __offset  );
long  int  pread64(int __fd, void* __buf, unsigned long  int  __nbytes  , long  int  __offset  );
long  int  pwrite64(int __fd, const void* __buf, unsigned long  int  __n  , long  int  __offset  );
int pipe(int __pipedes[2]);
int pipe2(int __pipedes[2], int __flags);
unsigned int alarm(unsigned int __seconds);
unsigned int sleep(unsigned int __seconds);
unsigned int  ualarm(unsigned int  __value  , unsigned int  __interval  );
int usleep(unsigned int  __useconds  );
int pause();
int chown(const char* __file, unsigned int  __owner  , unsigned int  __group  );
int fchown(int __fd, unsigned int  __owner  , unsigned int  __group  );
int lchown(const char* __file, unsigned int  __owner  , unsigned int  __group  );
int fchownat(int __fd, const char* __file, unsigned int  __owner  , unsigned int  __group  , int __flag);
int chdir(const char* __path);
int fchdir(int __fd);
char* getcwd(char* __buf, unsigned long  int  __size  );
char* get_current_dir_name();
char* getwd(char* __buf) __attribute__ ((__deprecated__)) 
    ;
int dup(int __fd);
int dup2(int __fd, int __fd2);
int dup3(int __fd, int __fd2, int __flags);
int execve(const char* __path, char* const __argv[], char* const __envp[]);
int fexecve(int __fd, char* const __argv[], char* const __envp[]);
int execv(const char* __path, char* const __argv[]);
int execle(const char* __path, const char* __arg, ...);
int execl(const char* __path, const char* __arg, ...);
int execvp(const char* __file, char* const __argv[]);
int execlp(const char* __file, const char* __arg, ...);
int execvpe(const char* __file, char* const __argv[], char* const __envp[]);
int nice(int __inc);
void _exit(int __status) __attribute__ ((__noreturn__));
long  int pathconf(const char* __path, int __name);
long  int fpathconf(int __fd, int __name);
long  int sysconf(int __name);
unsigned long  int  confstr(int __name, char* __buf, unsigned long  int  __len  );
int  getpid();
int  getppid();
int  getpgrp();
int  __getpgid(int  __pid  );
int  getpgid(int  __pid  );
int setpgid(int  __pid  , int  __pgid  );
int setpgrp();
int  setsid();
int  getsid(int  __pid  );
unsigned int  getuid();
unsigned int  geteuid();
unsigned int  getgid();
unsigned int  getegid();
int getgroups(int __size, unsigned int  __list[]  );
int group_member(unsigned int  __gid  );
int setuid(unsigned int  __uid  );
int setreuid(unsigned int  __ruid  , unsigned int  __euid  );
int seteuid(unsigned int  __uid  );
int setgid(unsigned int  __gid  );
int setregid(unsigned int  __rgid  , unsigned int  __egid  );
int setegid(unsigned int  __gid  );
int getresuid(unsigned int*  __ruid  , unsigned int*  __euid  , unsigned int*  __suid  );
int getresgid(unsigned int*  __rgid  , unsigned int*  __egid  , unsigned int*  __sgid  );
int setresuid(unsigned int  __ruid  , unsigned int  __euid  , unsigned int  __suid  );
int setresgid(unsigned int  __rgid  , unsigned int  __egid  , unsigned int  __sgid  );
int  fork();
int  vfork();
int  _Fork();
char* ttyname(int __fd);
int ttyname_r(int __fd, char* __buf, unsigned long  int  __buflen  );
int isatty(int __fd);
int ttyslot();
int link(const char* __from, const char* __to);
int linkat(int __fromfd, const char* __from, int __tofd, const char* __to, int __flags);
int symlink(const char* __from, const char* __to);
long  int  readlink(const char* __restrict __path, char* __restrict __buf, unsigned long  int  __len  );
int symlinkat(const char* __from, int __tofd, const char* __to);
long  int  readlinkat(int __fd, const char* __restrict __path, char* __restrict __buf, unsigned long  int  __len  );
int unlink(const char* __name);
int unlinkat(int __fd, const char* __name, int __flag);
int rmdir(const char* __path);
int  tcgetpgrp(int __fd);
int tcsetpgrp(int __fd, int  __pgrp_id  );
char* getlogin();
int getlogin_r(char* __name, unsigned long  int  __name_len  );
int setlogin(const char* __name);
int getopt(int ___argc, char** const ___argv, const char* __shortopts);
int gethostname(char* __name, unsigned long  int  __len  );
int sethostname(const char* __name, unsigned long  int  __len  );
int sethostid(long  int __id);
int getdomainname(char* __name, unsigned long  int  __len  );
int setdomainname(const char* __name, unsigned long  int  __len  );
int vhangup();
int revoke(const char* __file);
int profil(unsigned short int* __sample_buffer, unsigned long  int  __size  , unsigned long  int  __offset  , unsigned int __scale);
int acct(const char* __name);
char* getusershell();
void endusershell();
void setusershell();
int daemon(int __nochdir, int __noclose);
int chroot(const char* __path);
char* getpass(const char* __prompt);
int fsync(int __fd);
int syncfs(int __fd);
long  int gethostid();
void sync();
int getpagesize() __attribute__ ((__const__));
int getdtablesize();
int truncate(const char* __file, long  int  __length  );
int truncate64(const char* __file, long  int  __length  );
int ftruncate(int __fd, long  int  __length  );
int ftruncate64(int __fd, long  int  __length  );
int brk(void* __addr);
void* sbrk(long  int  __delta  );
long  int syscall(long  int __sysno, ...);
int lockf(int __fd, int __cmd, long  int  __len  );
int lockf64(int __fd, int __cmd, long  int  __len  );
long  int  copy_file_range(int __infd, long  int*  __pinoff  , int __outfd, long  int*  __poutoff  , unsigned long  int  __length  , unsigned int __flags);
int fdatasync(int __fildes);
char* crypt(const char* __key, const char* __salt);
void swab(const void* __restrict __from, void* __restrict __to, long  int  __n  );
int getentropy(void* __buffer, unsigned long  int  __length  );
int close_range(unsigned int __fd, unsigned int __max_fd, int __flags);
int  gettid();
struct ViWin*  ViWin_initialize_v1(struct ViWin*  self  , int y, int x, int width, int height, struct Vi*  vi  );
void ViWin_view_v1(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_input_v1(struct ViWin*  self  , struct Vi*  nvi  );
struct Vi*  Vi_initialize_v1(struct Vi*  self  );
_Bool ViWin_equals(struct ViWin*  left  , struct ViWin*  right  );
int Vi_main_loop_v1(struct Vi*  self  );
void Vi_init_curses(struct Vi*  self  );
void ViWin_shellMode_v2(struct ViWin*  self  , struct Vi*  nvi  );
struct ViWin*  ViWin_initialize_v2(struct ViWin*  self  , int y, int x, int width, int height, struct Vi*  vi  );
void ViWin_textsView(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_statusBarView_v2(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_view_v2(struct ViWin*  self  , struct Vi*  nvi  );
int ViWin_getKey_v2(struct ViWin*  self  , _Bool head);
void ViWin_input_v2(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_modifyUnderCursorYValue(struct ViWin*  self  );
void ViWin_modifyOverCursorYValue(struct ViWin*  self  );
void ViWin_modifyOverCursorXValue(struct ViWin*  self  );
void ViWin_modifyOverCursorXValue2(struct ViWin*  self  );
void ViWin_modifyUnderCursorXValue(struct ViWin*  self  );
void ViWin_forward_v2(struct ViWin*  self  );
void ViWin_backward_v2(struct ViWin*  self  );
void ViWin_prevLine(struct ViWin*  self  );
void ViWin_nextLine(struct ViWin*  self  );
void ViWin_halfScrollUp(struct ViWin*  self  );
void ViWin_halfScrollDown(struct ViWin*  self  );
void ViWin_centeringCursor(struct ViWin*  self  );
void ViWin_topCursor(struct ViWin*  self  );
void ViWin_moveAtHead(struct ViWin*  self  );
void ViWin_moveAtTail(struct ViWin*  self  );
void ViWin_moveTop(struct ViWin*  self  );
void ViWin_restoreVisualMode_v2(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_keyG(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_moveBottom(struct ViWin*  self  );
void ViWin_openFile_v2(struct ViWin*  self  , char*  file_name  , int line_num, _Bool binary_mode);
void ViWin_saveReturnPoint(struct ViWin*  self  );
void ViWin_saveInputedKeyOnTheMovingCursor_v2(struct ViWin*  self  );
void ViWin_joinLines2_v2(struct ViWin*  self  );
struct Vi*  Vi_initialize_v2(struct Vi*  self  );
void Vi_exitFromApp_v2(struct Vi*  self  );
void Vi_view(struct Vi*  self  );
void Vi_clearView(struct Vi*  self  );
int Vi_main_loop_v2(struct Vi*  self  );
void Vi_openFile_v2(struct Vi*  self  , char*  file_name  , int line_num, _Bool binary_mode);
void Vi_repositionWindows_v2(struct Vi*  self  );
void Vi_enterSearchMode_v2(struct Vi*  self  , _Bool regex_search, _Bool search_reverse);
void ViWin_insertModeView(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_view_v3(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_insertText(struct ViWin*  self  , int*  text  );
void ViWin_enterNewLine(struct ViWin*  self  );
void ViWin_enterNewLine2(struct ViWin*  self  );
void ViWin_backSpace(struct ViWin*  self  );
void ViWin_backIndent(struct ViWin*  self  );
void ViWin_blinkBraceFoward(struct ViWin*  self  , int  head  , int  tail  , struct Vi*  nvi  );
void ViWin_blinkBraceEnd(struct ViWin*  self  , int  head  , int  tail  , struct Vi*  nvi  );
void ViWin_inputInsertMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_input_v3(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_pushUndo_v3(struct ViWin*  self  );
void ViWin_writedFlagOn_v3(struct ViWin*  self  );
void ViWin_completion_v3(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_completion_neo_c2_v3(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_completionFileName_v3(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_completionNext_v3(struct ViWin*  self  , struct Vi*  nvi  , _Bool prev);
void ViWin_clearInputedKey_v3(struct ViWin*  self  );
void ViWin_resetCompletionState_v3(struct ViWin*  self  );
void ViWin_saveInputedKey_v3(struct ViWin*  self  );
void ViWin_backwardWord_v3(struct ViWin*  self  );
void Vi_enterInsertMode_v3(struct Vi*  self  );
void Vi_enterInsertMode2_v3(struct Vi*  self  );
void Vi_exitFromInsertMode_v3(struct Vi*  self  );
struct Vi*  Vi_initialize_v3(struct Vi*  self  );
int Vi_main_loop_v3(struct Vi*  self  );
void ViWin_forwardWord(struct ViWin*  self  );
void ViWin_forwardWord2(struct ViWin*  self  );
void ViWin_backwardWord_v4(struct ViWin*  self  );
struct Vi*  Vi_initialize_v4(struct Vi*  self  );
struct ViWin*  ViWin_initialize_v5(struct ViWin*  self  , int y, int x, int width, int height, struct Vi*  vi  );
void ViWin_pushUndo_v5(struct ViWin*  self  );
void ViWin_redo(struct ViWin*  self  );
void ViWin_undo(struct ViWin*  self  );
struct Vi*  Vi_initialize_v5(struct Vi*  self  );
void Vi_enterInsertMode_v5(struct Vi*  self  );
struct ViWin*  ViWin_initialize_v6(struct ViWin*  self  , int y, int x, int width, int height, struct Vi*  vi  );
void ViWin_statusBarView_v6(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_saveCursorPosition(struct ViWin*  self  , char* file_name);
void ViWin_readCursorPosition(struct ViWin*  self  , char* file_name);
void ViWin_openFile_v6(struct ViWin*  self  , char*  file_name  , int line_num, _Bool binary_mode);
void ViWin_makeTmpFile(struct ViWin*  self  );
void ViWin_deleteTmpFile(struct ViWin*  self  );
void ViWin_writeFile(struct ViWin*  self  , _Bool binary_mode);
void ViWin_writedFlagOn_v6(struct ViWin*  self  );
_Bool ViWin_saveDotToFile_v6(struct ViWin*  self  , struct Vi*  nvi  );
void Vi_openNewFile(struct Vi*  self  , char*  file_name  );
void Vi_closeActiveWin(struct Vi*  self  );
void Vi_exitFromApp_v6(struct Vi*  self  );
void Vi_toggleWin(struct Vi*  self  );
void Vi_nextWin(struct Vi*  self  );
void Vi_prevWin(struct Vi*  self  );
struct Vi*  Vi_initialize_v6(struct Vi*  self  );
void Vi_repositionWindows_v6(struct Vi*  self  );
void Vi_saveLastOpenFile(struct Vi*  self  , char* file_name);
char*  Vi_readLastOpenFile(struct Vi*  self  );
void Vi_openFile_v6(struct Vi*  self  , char*  file_name  , int line_num, _Bool binary_mode);
_Bool ViWin_saveYankToFile(struct ViWin*  self  , struct Vi*  nvi  );
_Bool ViWin_loadYankFromFile(struct ViWin*  self  , struct Vi*  nvi  );
_Bool ViWin_saveFileYankToFile(struct ViWin*  self  , struct Vi*  nvi  );
_Bool ViWin_loadFileYankFromFile(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_pasteAfterCursor(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_pasteBeforeCursor(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_filePasteAfterCursor(struct ViWin*  self  , struct Vi*  nvi  );
struct Vi*  Vi_initialize_v7(struct Vi*  self  );
struct ViWin*  ViWin_initialize_v8(struct ViWin*  self  , int y, int x, int width, int height, struct Vi*  vi  );
void ViWin_visualModeView(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_view_v8(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_yankOnVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_fileYankOnVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_indentVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_backIndentVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_changeCaseVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_joinVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_equalVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_rewriteVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_deleteOnVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_makeInputedKeyGVIndent_v8(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_makeInputedKeyGVDeIndent_v8(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_inputVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_input_v8(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_restoreVisualMode_v8(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_gotoBraceEnd_v8(struct ViWin*  self  , struct Vi*  nvi  );
struct Vi*  Vi_initialize_v8(struct Vi*  self  );
void Vi_enterVisualMode(struct Vi*  self  );
void Vi_exitFromVisualMode(struct Vi*  self  );
void ViWin_searchModeView(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_view_v9(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_search(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_searchReverse(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_searchWordOnCursor(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_searchWordOnCursorReverse(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_inputSearchlMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_input_v9(struct ViWin*  self  , struct Vi*  nvi  );
void Vi_saveSearchString(struct Vi*  self  , const char* file_name);
void Vi_readSearchString(struct Vi*  self  , const char* file_name);
void Vi_enterSearchMode_v9(struct Vi*  self  , _Bool regex_search, _Bool reverse);
void Vi_exitFromSearchMode(struct Vi*  self  );
struct Vi*  Vi_initialize_v9(struct Vi*  self  );
struct ViWin*  ViWin_initialize_v10(struct ViWin*  self  , int y, int x, int width, int height, struct Vi*  vi  );
void ViWin_modifyCursorOnDeleting(struct ViWin*  self  );
void ViWin_deleteOneLine_v10(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_deleteOneLine2(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_deleteWord(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_deleteForNextCharacter(struct ViWin*  self  );
void ViWin_deleteForNextCharacter2(struct ViWin*  self  );
void ViWin_deleteCursorCharactor(struct ViWin*  self  );
void ViWin_deleteBack(struct ViWin*  self  );
void ViWin_getCursorNumber(struct ViWin*  self  , int* head, int* tail);
void ViWin_incrementNumber(struct ViWin*  self  );
void ViWin_replaceCursorCharactor(struct ViWin*  self  );
void ViWin_deleteUntilTail(struct ViWin*  self  );
void ViWin_joinLines(struct ViWin*  self  );
void ViWin_yankOneLine(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_joinLines2_v10(struct ViWin*  self  );
void ViWin_forwardToNextCharacter1(struct ViWin*  self  , int key);
void ViWin_forwardToNextCharacter2(struct ViWin*  self  , int key);
void ViWin_repeatForwardNextCharacter(struct ViWin*  self  );
void ViWin_backwardToNextCharacter1(struct ViWin*  self  );
void ViWin_backwardToNextCharacter2(struct ViWin*  self  );
void ViWin_changeCase(struct ViWin*  self  );
void ViWin_moveToHead(struct ViWin*  self  );
struct Vi*  Vi_initialize_v10(struct Vi*  self  );
void ViWin_toggleBraceForward(struct ViWin*  self  , int  head  , int  tail  );
void ViWin_toggleBraceBack(struct ViWin*  self  , int  head  , int  tail  );
void ViWin_toggleCommentForward(struct ViWin*  self  );
void ViWin_toggleCommentBackward(struct ViWin*  self  );
void ViWin_gotoBraceEnd_v11(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_gotoFunctionTop(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_gotoFunctionBottom(struct ViWin*  self  , struct Vi*  nvi  );
struct Vi*  Vi_initialize_v11(struct Vi*  self  );
void ViWin_commandModeView(struct ViWin*  self  , struct Vi*  nvi  );
char*  ViWin_selector(struct ViWin*  self  , struct list$1char$ph* lines);
char*  ViWin_selectFileCompletionCandidate(struct ViWin*  self  , char*  word  );
void ViWin_fileCompetion(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_commandModeInput(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_view_v12(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_input_v12(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_subAllTextsFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_filterTextsFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  );
void Vi_enterComandMode(struct Vi*  self  );
void Vi_exitFromComandMode(struct Vi*  self  );
struct Vi*  Vi_initialize_v12(struct Vi*  self  );
int*  ViWin_getCompletionWord(struct ViWin*  self  , int* start_pos);
int*  ViWin_selector2(struct ViWin*  self  , struct list$1int$ph* lines);
void ViWin_resetCompletionState(struct ViWin*  self  );
struct ViWin*  ViWin_initialize_v13(struct ViWin*  self  , int y, int x, int width, int height, struct Vi*  vi  );
void ViWin_completion_v13(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_completionFileName_v13(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_completionNext(struct ViWin*  self  , struct Vi*  nvi  , _Bool prev);
struct ViWin*  ViWin_initialize_v16(struct ViWin*  self  , int y, int x, int width, int height, struct Vi*  vi  );
void ViWin_markAtCurrentPoint(struct ViWin*  self  , int  c  );
void ViWin_returnAtMarkedPoint(struct ViWin*  self  , int  c  );
void ViWin_returnBack(struct ViWin*  self  );
void ViWin_returnBackOfStack(struct ViWin*  self  );
struct Vi*  Vi_initialize_v16(struct Vi*  self  );
struct ViWin*  ViWin_initialize_v17(struct ViWin*  self  , int y, int x, int width, int height, struct Vi*  vi  );
void ViWin_horizonVisualModeView(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_view_v17(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_yankOnHorizonVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_deleteOnHorizonVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_changeCaseHorizonVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_rewriteOnHorizonVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_inputHorizonVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_input_v17(struct ViWin*  self  , struct Vi*  nvi  );
void Vi_enterHorizonVisualMode(struct Vi*  self  );
struct Vi*  Vi_initialize_v17(struct Vi*  self  );
struct ViWin*  ViWin_initialize_v18(struct ViWin*  self  , int y, int x, int width, int height, struct Vi*  vi  );
void ViWin_verticalVisualModeView(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_view_v18(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_deleteOnVerticalVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_deleteLinesOnVerticalVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_changeCaseVerticalVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_rewriteOnVerticalVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_insertOnVerticalVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_inputVerticalVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_input_v18(struct ViWin*  self  , struct Vi*  nvi  );
void Vi_enterVerticalVisualMode(struct Vi*  self  );
struct Vi*  Vi_initialize_v18(struct Vi*  self  );
void ViWin_rewriteModeView(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_view_v19(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_insertText2(struct ViWin*  self  , int*  text  );
void ViWin_inputRewritetMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_input_v19(struct ViWin*  self  , struct Vi*  nvi  );
void Vi_enterRewriteMode(struct Vi*  self  );
void Vi_exitFromRewiteMode(struct Vi*  self  );
struct Vi*  Vi_initialize_v19(struct Vi*  self  );
int Vi_main_loop_v19(struct Vi*  self  );
void Vi_exitFromBinaryMode(struct Vi*  self  );
struct Vi*  Vi_initialize_v21(struct Vi*  self  );
void Vi_enterBinaryMode(struct Vi*  self  );
void ViWin_input_v21(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_view_v21(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_binaryModeView(struct ViWin*  self  , struct Vi*  nvi  );
int xgetmaxx();
int xgetmaxy();
int main(int argc, char** argv);
void (*__sysv_signal(int __sig, void (*__handler)(int)  ))(int) ;
void (*sysv_signal(int __sig, void (*__handler)(int)  ))(int) ;
void (*signal(int __sig, void (*__handler)(int)  ))(int) ;
int kill(int  __pid  , int __sig);
int killpg(int  __pgrp  , int __sig);
int raise(int __sig);
void (*ssignal(int __sig, void (*__handler)(int)  ))(int) ;
int gsignal(int __sig);
void psignal(int __sig, const char* __s);
void psiginfo(const struct anonymous_typeX22*  __pinfo  , const char* __s);
int sigpause(int __sig) __asm__ ("__xpg_sigpause")
  __attribute__ ((__deprecated__));
int sigblock(int __mask) __attribute__ ((__deprecated__));
int sigsetmask(int __mask) __attribute__ ((__deprecated__));
int siggetmask() __attribute__ ((__deprecated__));
int sigemptyset(struct anonymous_typeX7*  __set  );
int sigfillset(struct anonymous_typeX7*  __set  );
int sigaddset(struct anonymous_typeX7*  __set  , int __signo);
int sigdelset(struct anonymous_typeX7*  __set  , int __signo);
int sigismember(const struct anonymous_typeX7*  __set  , int __signo);
int sigisemptyset(const struct anonymous_typeX7*  __set  );
int sigandset(struct anonymous_typeX7*  __set  , const struct anonymous_typeX7*  __left  , const struct anonymous_typeX7*  __right  );
int sigorset(struct anonymous_typeX7*  __set  , const struct anonymous_typeX7*  __left  , const struct anonymous_typeX7*  __right  );
int sigprocmask(int __how, const struct anonymous_typeX7* __restrict  __set  , struct anonymous_typeX7* __restrict  __oset  );
int sigsuspend(const struct anonymous_typeX7*  __set  );
int sigaction(int __sig, const struct sigaction* __restrict  __act  , struct sigaction* __restrict  __oact  );
int sigpending(struct anonymous_typeX7*  __set  );
int sigwait(const struct anonymous_typeX7* __restrict  __set  , int* __restrict __sig);
int sigwaitinfo(const struct anonymous_typeX7* __restrict  __set  , struct anonymous_typeX22* __restrict  __info  );
int sigtimedwait(const struct anonymous_typeX7* __restrict  __set  , struct anonymous_typeX22* __restrict  __info  , const struct timespec* __restrict  __timeout  );
int sigqueue(int  __pid  , int __sig, const union sigval  __val  );
int sigreturn(struct sigcontext*  __scp  );
int siginterrupt(int __sig, int __interrupt) __attribute__ ((__deprecated__));
int sigaltstack(const struct anonymous_typeX55* __restrict  __ss  , struct anonymous_typeX55* __restrict  __oss  );
int sigstack(struct sigstack*  __ss  , struct sigstack*  __oss  ) __attribute__ ((__deprecated__));
int sighold(int __sig) __attribute__ ((__deprecated__));
int sigrelse(int __sig) __attribute__ ((__deprecated__));
int sigignore(int __sig) __attribute__ ((__deprecated__));
void (*sigset(int __sig, void (*__disp)(int)  ))(int)  __attribute__ ((__deprecated__)) ;
int pthread_sigmask(int __how, const struct anonymous_typeX7* __restrict  __newmask  , struct anonymous_typeX7* __restrict  __oldmask  );
int pthread_kill(unsigned long  int  __threadid  , int __signo);
int pthread_sigqueue(unsigned long  int  __threadid  , int __signo, const union sigval  __value  );
int __libc_current_sigrtmin();
int __libc_current_sigrtmax();
int tgkill(int  __tgid  , int  __tid  , int __signal);
int ioctl(int __fd, unsigned long  int __request, ...);
static void handle_repeat_interrupt(int signum);
static int peek_repeat_interrupt_key(struct _win_st*  win  );
void mreset_tty();
struct ViWin*  ViWin_initialize_v14(struct ViWin*  self  , int y, int x, int width, int height, struct Vi*  vi  );
static struct list$1int$* list$1int$_initialize(struct list$1int$* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1int$_finalize(struct list$1int$* self);
static struct map$2int$list$1list$1int$$ph$ph* map$2int$list$1list$1int$$ph$ph_initialize(struct map$2int$list$1list$1int$$ph$ph* self);
static void map$2int$list$1list$1int$$ph$ph$p_finalize(struct map$2int$list$1list$1int$$ph$ph* self);
static void list$1list$1int$$ph$p_finalize(struct list$1list$1int$$ph* self);
static void list_item$1list$1int$$ph$p_finalize(struct list_item$1list$1int$$ph* self);
static void map$2int$list$1list$1int$$ph$ph_finalize(struct map$2int$list$1list$1int$$ph$ph* self);
static void list$1list$1int$$ph_finalize(struct list$1list$1int$$ph* self);
static void ViWin_finalize(struct ViWin*  self  );
static void list$1int$ph$p_finalize(struct list$1int$ph* self);
static void list_item$1int$ph$p_finalize(struct list_item$1int$ph* self);
static void tuple3$3int$int$int$$p_finalize(struct tuple3$3int$int$int$* self);
static void list$1tuple3$3int$int$int$$ph$p_finalize(struct list$1tuple3$3int$int$int$$ph* self);
static void list_item$1tuple3$3int$int$int$$ph$p_finalize(struct list_item$1tuple3$3int$int$int$$ph* self);
static void list$1list$1int$ph$ph$p_finalize(struct list$1list$1int$ph$ph* self);
static void list_item$1list$1int$ph$ph$p_finalize(struct list_item$1list$1int$ph$ph* self);
static void map$2int$tuple3$3int$int$int$$ph$p_finalize(struct map$2int$tuple3$3int$int$int$$ph* self);
_Bool ViWin_saveDotToFile_v14(struct ViWin*  self  , struct Vi*  nvi  );
static int list$1int$_begin(struct list$1int$* self);
static _Bool list$1int$_end(struct list$1int$* self);
static int list$1int$_next(struct list$1int$* self);
_Bool ViWin_loadDotFromFile(struct ViWin*  self  , struct Vi*  nvi  );
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
int ViWin_getKey_v14(struct ViWin*  self  , _Bool head);
static int list$1int$_length(struct list$1int$* self);
static int list$1list$1int$$ph_length(struct list$1list$1int$$ph* self);
static struct list$1int$* list$1list$1int$$ph_item(struct list$1list$1int$$ph* self, int position, struct list$1int$* default_value);
static int list$1int$_item(struct list$1int$* self, int position, int default_value);
static struct list$1int$* list$1int$_reset(struct list$1int$* self);
void ViWin_clearInputedKey_v14(struct ViWin*  self  );
void ViWin_saveInputedKeyOnTheMovingCursor_v14(struct ViWin*  self  );
void ViWin_saveInputedKey_v14(struct ViWin*  self  );
static struct list$1int$* list$1int$$p_clone(struct list$1int$* self);
static struct list$1int$* list$1int$_add(struct list$1int$* self, int item);
static struct list$1list$1int$$ph* list$1list$1int$$ph_push_back(struct list$1list$1int$$ph* self, struct list$1int$* item);
void ViWin_makeInputedKeyGVIndent_v14(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_makeInputedKeyGVDeIndent_v14(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_recordMacro(struct ViWin*  self  );
static struct list$1list$1int$$ph* list$1list$1int$$ph_initialize(struct list$1list$1int$$ph* self);
static struct list$1list$1int$$ph* list$1list$1int$$ph$p_clone(struct list$1list$1int$$ph* self);
static struct list$1list$1int$$ph* list$1list$1int$$ph_add(struct list$1list$1int$$ph* self, struct list$1int$* item);
static struct list$1int$* list$1int$_clone(struct list$1int$* self);
static struct map$2int$list$1list$1int$$ph$ph* map$2int$list$1list$1int$$ph$ph_insert(struct map$2int$list$1list$1int$$ph$ph* self, int key, struct list$1list$1int$$ph* item, _Bool by_pointer);
static void map$2int$list$1list$1int$$ph$ph_rehash(struct map$2int$list$1list$1int$$ph$ph* self);
static void list$1list$1int$$ph_operator_store_element(struct list$1list$1int$$ph* self, int position, struct list$1int$* item);
static struct list$1list$1int$$ph* list$1list$1int$$ph_replace(struct list$1list$1int$$ph* self, int position, struct list$1int$* item);
static void map$2int$list$1list$1int$$ph$ph_remove_ordered_entry(struct map$2int$list$1list$1int$$ph$ph* self, int key, _Bool by_pointer);
static int map$2int$list$1list$1int$$ph$ph_key_position(struct map$2int$list$1list$1int$$ph$ph* self, int key, _Bool by_pointer);
static struct list$1int$* list$1int$_delete(struct list$1int$* self, int head, int tail);
void ViWin_runMacro(struct ViWin*  self  );
static struct list$1list$1int$$ph* map$2int$list$1list$1int$$ph$ph_at(struct map$2int$list$1list$1int$$ph$ph* self, int key, struct list$1list$1int$$ph* default_value, _Bool by_pointer);
static void lambda1(struct Vi*  self  , int key);
static void lambda2(struct Vi*  self  , int key);
static void lambda3(struct Vi*  self  , int key);
struct Vi*  Vi_initialize_v14(struct Vi*  self  );
static struct list$1lambda$* list$1lambda$_replace(struct list$1lambda$* self, int position, void (*item)(struct Vi* ,int));
static struct list$1lambda$* list$1lambda$_push_back(struct list$1lambda$* self, void (*item)(struct Vi* ,int));
static void Vi_finalize(struct Vi*  self  );
static void list$1ViWin$ph$p_finalize(struct list$1ViWin$ph* self);
static void list_item$1ViWin$ph$p_finalize(struct list_item$1ViWin$ph* self);
static void list$1lambda$$p_finalize(struct list$1lambda$* self);
static void list_item$1lambda$$p_finalize(struct list_item$1lambda$* self);
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
static void handle_repeat_interrupt(int signum)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "handle_repeat_interrupt"; neo_current_frame = &fr;
    # 14 "14dot.nc"
    gInterruptRepetitionRequested=1;
    neo_current_frame = fr.prev;
}

static int peek_repeat_interrupt_key(struct _win_st*  win  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "peek_repeat_interrupt_key"; neo_current_frame = &fr;
    int nread;
    int key;
    # 19 "14dot.nc"
    nread=0;
    # 29 "14dot.nc"
    if(ioctl(0,0x541B,&nread)==0&&nread>0) {
        # 22 "14dot.nc"
        nodelay(win,(_Bool)1);
        # 23 "14dot.nc"
        key=wgetch(win);
        # 24 "14dot.nc"
        nodelay(win,(_Bool)0);
        # 26 "14dot.nc"
                neo_current_frame = fr.prev;
        return key;
    }
    # 29 "14dot.nc"
        neo_current_frame = fr.prev;
    return (-1);
    neo_current_frame = fr.prev;
}

void mreset_tty()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "mreset_tty"; neo_current_frame = &fr;
    # 34 "14dot.nc"
    system("tset");
    neo_current_frame = fr.prev;
}

struct ViWin*  ViWin_initialize_v14(struct ViWin*  self  , int y, int x, int width, int height, struct Vi*  vi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_initialize_v14"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct ViWin*  result  ;
    void* __right_value1 = (void*)0;
    struct list$1int$* __dec_obj1;
    struct map$2int$list$1list$1int$$ph$ph* __dec_obj3;
    struct list$1list$1int$$ph* __dec_obj4;
    struct list$1list$1int$$ph* __dec_obj5;
    struct ViWin*  __result_obj__0  ;
    # 39 "14dot.nc"
    result=(struct ViWin* )come_increment_ref_count(ViWin_initialize_v13((struct ViWin* )come_increment_ref_count(self, "14dot.nc", 39, 1),y,x,width,height,vi), "14dot.nc", 39, 2);
    # 41 "14dot.nc"
    signal(2,handle_repeat_interrupt);
    # 43 "14dot.nc"
    __right_value0 = (void*)0;
    __dec_obj1=result->inputedKeys,
    result->inputedKeys=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "14dot.nc", 43, 3, "struct list$1int$*"), "14dot.nc", 43, 8)), "14dot.nc", 0, 11);
    come_call_finalizer(list$1int$_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc", 0, 10);
    # 44 "14dot.nc"
    result->autoInput=(_Bool)0;
    # 45 "14dot.nc"
    result->digitInput=0;
    # 46 "14dot.nc"
    result->autoInputIndex=0;
    # 48 "14dot.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj3=result->macro,
    result->macro=(struct map$2int$list$1list$1int$$ph$ph*)come_increment_ref_count(map$2int$list$1list$1int$$ph$ph_initialize((struct map$2int$list$1list$1int$$ph$ph*)come_increment_ref_count((struct map$2int$list$1list$1int$$ph$ph*)come_calloc(1, sizeof(struct map$2int$list$1list$1int$$ph$ph)*(1), "14dot.nc", 48, 12, "struct map$2int$list$1list$1int$$ph$ph*"), "14dot.nc", 48, 34)), "14dot.nc", 2, 40);
    come_call_finalizer(map$2int$list$1list$1int$$ph$ph_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc", 2, 39);
    # 49 "14dot.nc"
    result->recordingMacroKey=-1;
    # 50 "14dot.nc"
    __dec_obj4=result->recordingMacro,
    result->recordingMacro=((void*)0);
    come_call_finalizer(list$1list$1int$$ph_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc", 2, 42);
    # 52 "14dot.nc"
    __dec_obj5=result->runningMacro,
    result->runningMacro=((void*)0);
    come_call_finalizer(list$1list$1int$$ph_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc", 52, 43);
    # 54 "14dot.nc"
    (void)ViWin_loadDotFromFile(result,vi);
    # 56 "14dot.nc"
        __result_obj__0 = (struct ViWin* )come_increment_ref_count(result, "14dot.nc", 56, 44);
    come_call_finalizer(ViWin_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc}", 56, 72);
    come_call_finalizer(ViWin_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "14dot.nc}", 56, 73);
    neo_current_frame = fr.prev;
    come_call_finalizer(ViWin_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "14dot.nc}", 56, 74);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    # 1481 "/usr/local/include/neo-c.h"
    self->head=((void*)0);
    # 1482 "/usr/local/include/neo-c.h"
    self->tail=((void*)0);
    # 1483 "/usr/local/include/neo-c.h"
    self->len=0;
    # 1485 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 4);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 38, 6);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 38, 7);
    return __result_obj__0;
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 5);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1int$$p_finalize"
            neo_current_frame = fr.prev;
}

static void list$1int$_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_finalize"; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 9);
    }
        neo_current_frame = fr.prev;
}

static struct map$2int$list$1list$1int$$ph$ph* map$2int$list$1list$1int$$ph$ph_initialize(struct map$2int$list$1list$1int$$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1list$1int$$ph$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1int$* __dec_obj2;
    struct map$2int$list$1list$1int$$ph$ph* __result_obj__0;
    # 3322 "/usr/local/include/neo-c.h"
    # 3324 "/usr/local/include/neo-c.h"
    self->keys=(int*)come_increment_ref_count(((int*)(__right_value0=(int*)come_calloc(1, sizeof(int)*(1*(128)), "/usr/local/include/neo-c.h", 3324, 13, "int*"))), "/usr/local/include/neo-c.h", 3324, 14);
    # 3325 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    self->items=(struct list$1list$1int$$ph**)come_increment_ref_count(((struct list$1list$1int$$ph**)(__right_value0=(struct list$1list$1int$$ph**)come_calloc(1, sizeof(struct list$1list$1int$$ph*)*(1*(128)), "/usr/local/include/neo-c.h", 3325, 15, "struct list$1list$1int$$ph**"))), "/usr/local/include/neo-c.h", 3325, 16);
    # 3326 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    self->hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(128)), "/usr/local/include/neo-c.h", 3326, 17, "unsigned int*"))), "/usr/local/include/neo-c.h", 3326, 18);
    # 3327 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/neo-c.h", 3327, 19, "_Bool*"))), "/usr/local/include/neo-c.h", 3327, 20);
    # 3335 "/usr/local/include/neo-c.h"
    for(i=0    ;i<128;i++){
        # 3331 "/usr/local/include/neo-c.h"
        self->hashes[i]=0;
        # 3332 "/usr/local/include/neo-c.h"
        self->item_existance[i]=(_Bool)0;
    }
    # 3335 "/usr/local/include/neo-c.h"
    self->size=128;
    # 3336 "/usr/local/include/neo-c.h"
    self->len=0;
    # 3338 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    __dec_obj2=self->key_list,
    self->key_list=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 3338, 21, "struct list$1int$*"), "/usr/local/include/neo-c.h", 3338, 22)), "/usr/local/include/neo-c.h", 3338, 24);
    come_call_finalizer(list$1int$_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3338, 23);
    # 3340 "/usr/local/include/neo-c.h"
    self->it=0;
    # 3342 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct map$2int$list$1list$1int$$ph$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3342, 25);
    come_call_finalizer(map$2int$list$1list$1int$$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 32);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2int$list$1list$1int$$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 33);
    return __result_obj__0;
}

static void map$2int$list$1list$1int$$ph$ph$p_finalize(struct map$2int$list$1list$1int$$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1list$1int$$ph$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_0;
    # 3373 "/usr/local/include/neo-c.h"
    # 3382 "/usr/local/include/neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3381 "/usr/local/include/neo-c.h"
        if(self->item_existance[i]) {
            # 3380 "/usr/local/include/neo-c.h"
            if(1) {
                # 3378 "/usr/local/include/neo-c.h"
                come_call_finalizer(list$1list$1int$$ph$p_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 0, 28);
            }
        }
    }
    # 3382 "/usr/local/include/neo-c.h"
    come_free((char*)self->items);
    # 3391 "/usr/local/include/neo-c.h"
    for(i_0=0    ;i_0<self->size;i_0++){
        # 3390 "/usr/local/include/neo-c.h"
        if(self->item_existance[i_0]) {
            # 3389 "/usr/local/include/neo-c.h"
            if(0) {
                # 3387 "/usr/local/include/neo-c.h"
            }
        }
    }
    # 3391 "/usr/local/include/neo-c.h"
    come_free((char*)self->keys);
    # 3393 "/usr/local/include/neo-c.h"
    come_call_finalizer(list$1int$$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3393, 29);
    # 3395 "/usr/local/include/neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3395, 30));
    # 3396 "/usr/local/include/neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3396, 31));
        neo_current_frame = fr.prev;
}

static void list$1list$1int$$ph$p_finalize(struct list$1list$1int$$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1list$1int$$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1list$1int$$ph* it;
    struct list_item$1list$1int$$ph* prev_it;
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
        come_call_finalizer(list_item$1list$1int$$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 27);
    }
                    neo_current_frame = fr.prev;
}

static void list_item$1list$1int$$ph$p_finalize(struct list_item$1list$1int$$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1list$1int$$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1list$1int$$ph$p_finalize"
    # 3 "list_item$1list$1int$$ph$p_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 2 "list_item$1list$1int$$ph$p_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1list$1int$$ph$p_finalize}", 2, 26);
    }
            neo_current_frame = fr.prev;
}

static void map$2int$list$1list$1int$$ph$ph_finalize(struct map$2int$list$1list$1int$$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1list$1int$$ph$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_1;
    # 3373 "/usr/local/include/neo-c.h"
    # 3382 "/usr/local/include/neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3381 "/usr/local/include/neo-c.h"
        if(self->item_existance[i]) {
            # 3380 "/usr/local/include/neo-c.h"
            if(1) {
                # 3378 "/usr/local/include/neo-c.h"
                come_call_finalizer(list$1list$1int$$ph$p_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3378, 35);
            }
        }
    }
    # 3382 "/usr/local/include/neo-c.h"
    come_free((char*)self->items);
    # 3391 "/usr/local/include/neo-c.h"
    for(i_1=0    ;i_1<self->size;i_1++){
        # 3390 "/usr/local/include/neo-c.h"
        if(self->item_existance[i_1]) {
            # 3389 "/usr/local/include/neo-c.h"
            if(0) {
                # 3387 "/usr/local/include/neo-c.h"
            }
        }
    }
    # 3391 "/usr/local/include/neo-c.h"
    come_free((char*)self->keys);
    # 3393 "/usr/local/include/neo-c.h"
    come_call_finalizer(list$1int$$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3393, 36);
    # 3395 "/usr/local/include/neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3395, 37));
    # 3396 "/usr/local/include/neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3396, 38));
        neo_current_frame = fr.prev;
}

static void list$1list$1int$$ph_finalize(struct list$1list$1int$$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1list$1int$$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1list$1int$$ph* it;
    struct list_item$1list$1int$$ph* prev_it;
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
        come_call_finalizer(list_item$1list$1int$$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 41);
    }
        neo_current_frame = fr.prev;
}

static void ViWin_finalize(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_finalize"; neo_current_frame = &fr;
    # 1 "ViWin_finalize"
    # 3 "ViWin_finalize"
    if(self!=((void*)0)&&self->texts!=((void*)0)) {
        # 2 "ViWin_finalize"
        come_call_finalizer(list$1int$ph$p_finalize, self->texts, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 18, 47);
    }
    # 4 "ViWin_finalize"
    if(self!=((void*)0)&&self->texts_length!=((void*)0)) {
        # 3 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->texts_length, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 3, 48);
    }
    # 5 "ViWin_finalize"
    if(self!=((void*)0)&&self->returnPoint!=((void*)0)) {
        # 4 "ViWin_finalize"
        come_call_finalizer(tuple3$3int$int$int$$p_finalize, self->returnPoint, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 4, 49);
    }
    # 6 "ViWin_finalize"
    if(self!=((void*)0)&&self->returnPointStack!=((void*)0)) {
        # 5 "ViWin_finalize"
        come_call_finalizer(list$1tuple3$3int$int$int$$ph$p_finalize, self->returnPointStack, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 0, 52);
    }
    # 7 "ViWin_finalize"
    if(self!=((void*)0)&&self->undo!=((void*)0)) {
        # 6 "ViWin_finalize"
        come_call_finalizer(list$1list$1int$ph$ph$p_finalize, self->undo, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 2, 55);
    }
    # 8 "ViWin_finalize"
    if(self!=((void*)0)&&self->undoScroll!=((void*)0)) {
        # 7 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->undoScroll, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 7, 56);
    }
    # 9 "ViWin_finalize"
    if(self!=((void*)0)&&self->undoCursorX!=((void*)0)) {
        # 8 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->undoCursorX, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 8, 57);
    }
    # 10 "ViWin_finalize"
    if(self!=((void*)0)&&self->undoCursorY!=((void*)0)) {
        # 9 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->undoCursorY, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 9, 58);
    }
    # 11 "ViWin_finalize"
    if(self!=((void*)0)&&self->fileName!=((void*)0)) {
        # 10 "ViWin_finalize"
        (self->fileName = come_decrement_ref_count(self->fileName, (void*)0, (void*)0, 0, 0, (void*)0, "ViWin_finalize", 10, 59));
    }
    # 12 "ViWin_finalize"
    if(self!=((void*)0)&&self->inputedKeys!=((void*)0)) {
        # 11 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->inputedKeys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 11, 60);
    }
    # 13 "ViWin_finalize"
    if(self!=((void*)0)&&self->savedInputedKeys!=((void*)0)) {
        # 12 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->savedInputedKeys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 12, 61);
    }
    # 14 "ViWin_finalize"
    if(self!=((void*)0)&&self->macro!=((void*)0)) {
        # 13 "ViWin_finalize"
        come_call_finalizer(map$2int$list$1list$1int$$ph$ph$p_finalize, self->macro, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 13, 62);
    }
    # 15 "ViWin_finalize"
    if(self!=((void*)0)&&self->recordingMacro!=((void*)0)) {
        # 14 "ViWin_finalize"
        come_call_finalizer(list$1list$1int$$ph$p_finalize, self->recordingMacro, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 14, 63);
    }
    # 16 "ViWin_finalize"
    if(self!=((void*)0)&&self->runningMacro!=((void*)0)) {
        # 15 "ViWin_finalize"
        come_call_finalizer(list$1list$1int$$ph$p_finalize, self->runningMacro, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 15, 64);
    }
    # 17 "ViWin_finalize"
    if(self!=((void*)0)&&self->mark!=((void*)0)) {
        # 16 "ViWin_finalize"
        come_call_finalizer(map$2int$tuple3$3int$int$int$$ph$p_finalize, self->mark, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 2, 69);
    }
    # 18 "ViWin_finalize"
    if(self!=((void*)0)&&self->completionCandidates!=((void*)0)) {
        # 17 "ViWin_finalize"
        come_call_finalizer(list$1int$ph$p_finalize, self->completionCandidates, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 17, 70);
    }
    # 19 "ViWin_finalize"
    if(self!=((void*)0)&&self->completionPrefix!=((void*)0)) {
        # 18 "ViWin_finalize"
        (self->completionPrefix = come_decrement_ref_count(self->completionPrefix, (void*)0, (void*)0, 0, 0, (void*)0, "ViWin_finalize", 18, 71));
    }
        neo_current_frame = fr.prev;
}

static void list$1int$ph$p_finalize(struct list$1int$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1int$ph* it;
    struct list_item$1int$ph* prev_it;
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
        come_call_finalizer(list_item$1int$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 46);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1int$ph$p_finalize(struct list_item$1int$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1int$ph$p_finalize"
    # 3 "list_item$1int$ph$p_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 2 "list_item$1int$ph$p_finalize"
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1int$ph$p_finalize", 2, 45));
    }
            neo_current_frame = fr.prev;
}

static void tuple3$3int$int$int$$p_finalize(struct tuple3$3int$int$int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3int$int$int$$p_finalize"; neo_current_frame = &fr;
    # 1 "tuple3$3int$int$int$$p_finalize"
            neo_current_frame = fr.prev;
}

static void list$1tuple3$3int$int$int$$ph$p_finalize(struct list$1tuple3$3int$int$int$$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3int$int$int$$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple3$3int$int$int$$ph* it;
    struct list_item$1tuple3$3int$int$int$$ph* prev_it;
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
        come_call_finalizer(list_item$1tuple3$3int$int$int$$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 51);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple3$3int$int$int$$ph$p_finalize(struct list_item$1tuple3$3int$int$int$$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple3$3int$int$int$$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1tuple3$3int$int$int$$ph$p_finalize"
    # 3 "list_item$1tuple3$3int$int$int$$ph$p_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 2 "list_item$1tuple3$3int$int$int$$ph$p_finalize"
        come_call_finalizer(tuple3$3int$int$int$$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple3$3int$int$int$$ph$p_finalize}", 2, 50);
    }
            neo_current_frame = fr.prev;
}

static void list$1list$1int$ph$ph$p_finalize(struct list$1list$1int$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1list$1int$ph$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1list$1int$ph$ph* it;
    struct list_item$1list$1int$ph$ph* prev_it;
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
        come_call_finalizer(list_item$1list$1int$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 54);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1list$1int$ph$ph$p_finalize(struct list_item$1list$1int$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1list$1int$ph$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1list$1int$ph$ph$p_finalize"
    # 3 "list_item$1list$1int$ph$ph$p_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 2 "list_item$1list$1int$ph$ph$p_finalize"
        come_call_finalizer(list$1int$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1list$1int$ph$ph$p_finalize}", 2, 53);
    }
            neo_current_frame = fr.prev;
}

static void map$2int$tuple3$3int$int$int$$ph$p_finalize(struct map$2int$tuple3$3int$int$int$$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$tuple3$3int$int$int$$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_2;
    # 3373 "/usr/local/include/neo-c.h"
    # 3382 "/usr/local/include/neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3381 "/usr/local/include/neo-c.h"
        if(self->item_existance[i]) {
            # 3380 "/usr/local/include/neo-c.h"
            if(1) {
                # 3378 "/usr/local/include/neo-c.h"
                come_call_finalizer(tuple3$3int$int$int$$p_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3378, 65);
            }
        }
    }
    # 3382 "/usr/local/include/neo-c.h"
    come_free((char*)self->items);
    # 3391 "/usr/local/include/neo-c.h"
    for(i_2=0    ;i_2<self->size;i_2++){
        # 3390 "/usr/local/include/neo-c.h"
        if(self->item_existance[i_2]) {
            # 3389 "/usr/local/include/neo-c.h"
            if(0) {
                # 3387 "/usr/local/include/neo-c.h"
            }
        }
    }
    # 3391 "/usr/local/include/neo-c.h"
    come_free((char*)self->keys);
    # 3393 "/usr/local/include/neo-c.h"
    come_call_finalizer(list$1int$$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3393, 66);
    # 3395 "/usr/local/include/neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3395, 67));
    # 3396 "/usr/local/include/neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3396, 68));
            neo_current_frame = fr.prev;
}

_Bool ViWin_saveDotToFile_v14(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_saveDotToFile_v14"; neo_current_frame = &fr;
    char* home;
    void* __right_value0 = (void*)0;
    char*  path0  ;
    char*  path  ;
    struct _IO_FILE*  f  ;
    _Bool __result_obj__0;
    struct list$1int$* _o2_saved_1;
    int it;
    # 61 "14dot.nc"
    home=getenv("HOME");
    # 66 "14dot.nc"
    if(home==((void*)0)) {
        # 63 "14dot.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 66 "14dot.nc"
    path0=(char* )come_increment_ref_count(xsprintf("%s/.vin",home), "14dot.nc", 66, 75);
    # 67 "14dot.nc"
    __right_value0 = (void*)0;
    system(((char* )(__right_value0=xsprintf("mkdir -p '%s'",path0))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "14dot.nc", 67, 76));
    # 69 "14dot.nc"
    __right_value0 = (void*)0;
    path=(char* )come_increment_ref_count(xsprintf("%s/.vin/dot.txt",home), "14dot.nc", 69, 77);
    # 70 "14dot.nc"
    f=fopen(path,"w");
    # 76 "14dot.nc"
    if(f==((void*)0)) {
        # 73 "14dot.nc"
                __result_obj__0 = (_Bool)0;
        (path0 = come_decrement_ref_count(path0, (void*)0, (void*)0, 0, 0, (void*)0, "14dot.nc", 73, 78));
        (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "14dot.nc", 73, 79));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 84 "14dot.nc"
    if(self->savedInputedKeys) {
        # 82 "14dot.nc"
        for(_o2_saved_1=(struct list$1int$*)come_increment_ref_count(self->savedInputedKeys, "14dot.nc", 77, 80),it=list$1int$_begin(_o2_saved_1)        ;!list$1int$_end(_o2_saved_1);it=list$1int$_next(_o2_saved_1)){
            # 81 "14dot.nc"
            if(fputc(it,f)<0) {
                # 79 "14dot.nc"
                break;
            }
        }
        come_call_finalizer(list$1int$$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc}", 84, 81);
    }
    # 84 "14dot.nc"
    fclose(f);
    # 86 "14dot.nc"
        __result_obj__0 = (_Bool)1;
    (path0 = come_decrement_ref_count(path0, (void*)0, (void*)0, 0, 0, (void*)0, "14dot.nc", 86, 82));
    (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "14dot.nc", 86, 83));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static int list$1int$_begin(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_begin"; neo_current_frame = &fr;
    int result;
    int result_3;
    # 1682 "/usr/local/include/neo-c.h"
    # 1689 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1685 "/usr/local/include/neo-c.h"
        # 1686 "/usr/local/include/neo-c.h"
        memset(&result,0,sizeof(int));
        # 1687 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return result;
    }
    # 1689 "/usr/local/include/neo-c.h"
    self->it=self->head;
    # 1695 "/usr/local/include/neo-c.h"
    if(self->it) {
        # 1692 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return self->it->item;
    }
    # 1695 "/usr/local/include/neo-c.h"
    # 1696 "/usr/local/include/neo-c.h"
    memset(&result_3,0,sizeof(int));
    # 1697 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return result_3;
            neo_current_frame = fr.prev;
}

static _Bool list$1int$_end(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_end"; neo_current_frame = &fr;
    # 1721 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
            neo_current_frame = fr.prev;
}

static int list$1int$_next(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_next"; neo_current_frame = &fr;
    int result;
    int result_4;
    # 1701 "/usr/local/include/neo-c.h"
    # 1709 "/usr/local/include/neo-c.h"
    if(self==((void*)0)||self->it==((void*)0)) {
        # 1704 "/usr/local/include/neo-c.h"
        # 1705 "/usr/local/include/neo-c.h"
        memset(&result,0,sizeof(int));
        # 1706 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return result;
    }
    # 1709 "/usr/local/include/neo-c.h"
    self->it=self->it->next;
    # 1715 "/usr/local/include/neo-c.h"
    if(self->it) {
        # 1712 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return self->it->item;
    }
    # 1715 "/usr/local/include/neo-c.h"
    # 1716 "/usr/local/include/neo-c.h"
    memset(&result_4,0,sizeof(int));
    # 1717 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return result_4;
            neo_current_frame = fr.prev;
}

_Bool ViWin_loadDotFromFile(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_loadDotFromFile"; neo_current_frame = &fr;
    char* home;
    void* __right_value0 = (void*)0;
    char*  path  ;
    struct _IO_FILE*  f  ;
    _Bool __result_obj__0;
    void* __right_value1 = (void*)0;
    struct list$1int$* __dec_obj6;
    char c;
    memset(&c, 0, sizeof(c));
    # 91 "14dot.nc"
    home=getenv("HOME");
    # 96 "14dot.nc"
    if(home==((void*)0)) {
        # 93 "14dot.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 96 "14dot.nc"
    path=(char* )come_increment_ref_count(xsprintf("%s/.vin/dot.txt",home), "14dot.nc", 96, 84);
    # 97 "14dot.nc"
    f=fopen(path,"r");
    # 103 "14dot.nc"
    if(f==((void*)0)) {
        # 100 "14dot.nc"
                __result_obj__0 = (_Bool)0;
        (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "14dot.nc", 100, 85));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 103 "14dot.nc"
    __right_value0 = (void*)0;
    __dec_obj6=self->savedInputedKeys,
    self->savedInputedKeys=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "14dot.nc", 103, 86, "struct list$1int$*"), "14dot.nc", 103, 87)), "14dot.nc", 103, 89);
    come_call_finalizer(list$1int$_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc", 103, 88);
    # 114 "14dot.nc"
    while((_Bool)1) {
        # 106 "14dot.nc"
        # 111 "14dot.nc"
        if(fread(&c,sizeof(char),1,f)==0) {
            # 108 "14dot.nc"
            break;
        }
        # 111 "14dot.nc"
        list$1int$_push_back(self->savedInputedKeys,c);
    }
    # 114 "14dot.nc"
    fclose(f);
    # 116 "14dot.nc"
        __result_obj__0 = (_Bool)1;
    (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "14dot.nc", 116, 96));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_push_back"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_5;
    struct list_item$1int$* litem_6;
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1619, 90, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1619, 91);
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
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1629, 92, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1629, 93);
        # 1631 "/usr/local/include/neo-c.h"
        litem_5->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_5->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        litem_5->item=item;
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_5;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_5;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1639, 94, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1639, 95);
        # 1641 "/usr/local/include/neo-c.h"
        litem_6->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_6->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        litem_6->item=item;
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_6;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_6;
    }
    # 1649 "/usr/local/include/neo-c.h"
    self->len++;
    # 1651 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int ViWin_getKey_v14(struct ViWin*  self  , _Bool head)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_getKey_v14"; neo_current_frame = &fr;
    struct list$1list$1int$$ph* __dec_obj7;
    int real_key;
    struct list$1list$1int$$ph* __dec_obj8;
    struct list$1list$1int$$ph* __dec_obj9;
    void* __right_value0 = (void*)0;
    struct list$1int$* inputed_key_vec;
    int inputed_key_vec2;
    int __result_obj__0;
    int real_key_7;
    int key;
    int key_8;
    int key_9;
    int key_10;
    struct Vi*  vi  ;
    int num;
    # 174 "14dot.nc"
    if(self->runningMacro) {
        # 132 "14dot.nc"
        if(gInterruptRepetitionRequested) {
            # 124 "14dot.nc"
            gInterruptRepetitionRequested=0;
            # 125 "14dot.nc"
            __dec_obj7=self->runningMacro,
            self->runningMacro=((void*)0);
            come_call_finalizer(list$1list$1int$$ph_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc", 125, 97);
            # 126 "14dot.nc"
            self->runningMacroIndex1=0;
            # 127 "14dot.nc"
            self->runningMacroIndex2=0;
            # 129 "14dot.nc"
                        neo_current_frame = fr.prev;
            return 3;
        }
        # 132 "14dot.nc"
        real_key=peek_repeat_interrupt_key(self->win);
        # 149 "14dot.nc"
        if(real_key==3) {
            # 135 "14dot.nc"
            __dec_obj8=self->runningMacro,
            self->runningMacro=((void*)0);
            come_call_finalizer(list$1list$1int$$ph_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc", 135, 98);
            # 136 "14dot.nc"
            self->runningMacroIndex1=0;
            # 137 "14dot.nc"
            self->runningMacroIndex2=0;
            # 143 "14dot.nc"
            if(list$1int$_length(self->inputedKeys)<256) {
                # 140 "14dot.nc"
                list$1int$_push_back(self->inputedKeys,real_key);
            }
            # 143 "14dot.nc"
                        neo_current_frame = fr.prev;
            return real_key;
        }
        else if(real_key!=(-1)) {
            # 146 "14dot.nc"
            ungetch(real_key);
        }
        # 172 "14dot.nc"
        if(self->runningMacroIndex1>=list$1list$1int$$ph_length(self->runningMacro)) {
            # 151 "14dot.nc"
            __dec_obj9=self->runningMacro,
            self->runningMacro=((void*)0);
            come_call_finalizer(list$1list$1int$$ph_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc", 151, 99);
            # 152 "14dot.nc"
            self->runningMacroIndex1=0;
            # 153 "14dot.nc"
            self->runningMacroIndex2=0;
        }
        else {
            # 156 "14dot.nc"
            inputed_key_vec=(struct list$1int$*)come_increment_ref_count(list$1list$1int$$ph_item(self->runningMacro,self->runningMacroIndex1,((void*)0)), "14dot.nc", 156, 106);
            # 171 "14dot.nc"
            if(self->runningMacroIndex2<list$1int$_length(inputed_key_vec)) {
                # 160 "14dot.nc"
                inputed_key_vec2=list$1int$_item(inputed_key_vec,self->runningMacroIndex2,-1);
                # 161 "14dot.nc"
                self->runningMacroIndex2++;
                # 163 "14dot.nc"
                                __result_obj__0 = inputed_key_vec2;
                come_call_finalizer(list$1int$$p_finalize, inputed_key_vec, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc}", 163, 107);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            else {
                # 166 "14dot.nc"
                self->runningMacroIndex1++;
                # 167 "14dot.nc"
                self->runningMacroIndex2=0;
                # 169 "14dot.nc"
                                __result_obj__0 = ViWin_getKey_v14(self,head);
                come_call_finalizer(list$1int$$p_finalize, inputed_key_vec, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc}", 169, 108);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            come_call_finalizer(list$1int$$p_finalize, inputed_key_vec, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc}", 172, 109);
        }
    }
    # 275 "14dot.nc"
    if(self->autoInput&&self->savedInputedKeys) {
        # 185 "14dot.nc"
        if(gInterruptRepetitionRequested) {
            # 177 "14dot.nc"
            gInterruptRepetitionRequested=0;
            # 178 "14dot.nc"
            self->autoInput=(_Bool)0;
            # 179 "14dot.nc"
            self->autoInputIndex=0;
            # 180 "14dot.nc"
            self->pressedDot=(_Bool)0;
            # 182 "14dot.nc"
                        neo_current_frame = fr.prev;
            return 3;
        }
        # 185 "14dot.nc"
        real_key_7=peek_repeat_interrupt_key(self->win);
        # 202 "14dot.nc"
        if(real_key_7==3) {
            # 188 "14dot.nc"
            self->autoInput=(_Bool)0;
            # 189 "14dot.nc"
            self->autoInputIndex=0;
            # 190 "14dot.nc"
            self->pressedDot=(_Bool)0;
            # 196 "14dot.nc"
            if(list$1int$_length(self->inputedKeys)<256) {
                # 193 "14dot.nc"
                list$1int$_push_back(self->inputedKeys,real_key_7);
            }
            # 196 "14dot.nc"
                        neo_current_frame = fr.prev;
            return real_key_7;
        }
        else if(real_key_7!=(-1)) {
            # 199 "14dot.nc"
            ungetch(real_key_7);
        }
        # 232 "14dot.nc"
        if(self->autoInputIndex<list$1int$_length(self->savedInputedKeys)) {
            # 203 "14dot.nc"
            key=list$1int$_item(self->savedInputedKeys,self->autoInputIndex,-1);
            # 204 "14dot.nc"
            self->autoInputIndex++;
            # 206 "14dot.nc"
                        neo_current_frame = fr.prev;
            return key;
        }
        else {
            # 231 "14dot.nc"
            if(self->pressedDot) {
                # 210 "14dot.nc"
                self->autoInputIndex=0;
                # 211 "14dot.nc"
                self->autoInput=(_Bool)0;
                # 212 "14dot.nc"
                self->pressedDot=(_Bool)0;
                # 214 "14dot.nc"
                key_8=wgetch(self->win);
                # 219 "14dot.nc"
                if(list$1int$_length(self->inputedKeys)<256) {
                    # 217 "14dot.nc"
                    list$1int$_push_back(self->inputedKeys,key_8);
                }
                # 219 "14dot.nc"
                                neo_current_frame = fr.prev;
                return key_8;
            }
            else {
                # 222 "14dot.nc"
                list$1int$_reset(self->savedInputedKeys);
                # 223 "14dot.nc"
                self->autoInput=(_Bool)0;
                # 224 "14dot.nc"
                self->autoInputIndex=0;
                # 225 "14dot.nc"
                self->pressedDot=(_Bool)0;
                # 227 "14dot.nc"
                key_9=wgetch(self->win);
                # 228 "14dot.nc"
                list$1int$_push_back(self->inputedKeys,key_9);
                # 229 "14dot.nc"
                                neo_current_frame = fr.prev;
                return key_9;
            }
        }
    }
    else {
        # 234 "14dot.nc"
        self->pressedDot=(_Bool)0;
        # 236 "14dot.nc"
        key_10=wgetch(self->win);
        # 272 "14dot.nc"
        if(key_10==26) {
            # 239 "14dot.nc"
            endwin();
            # 240 "14dot.nc"
            mreset_tty();
            # 241 "14dot.nc"
            kill(getpid(),19);
            # 242 "14dot.nc"
            vi=self->vi;
            # 243 "14dot.nc"
            Vi_init_curses(vi);
        }
        else if(head&&key_10>=49&&key_10<=57&&((struct Vi* )self->vi)->mode!=(1)) {
            # 246 "14dot.nc"
            num=key_10-48;
            # 248 "14dot.nc"
            key_10=wgetch(self->win);
            # 256 "14dot.nc"
            while(key_10>=48&&key_10<=57) {
                # 251 "14dot.nc"
                num=num*10+key_10-48;
                # 253 "14dot.nc"
                key_10=wgetch(self->win);
            }
            # 256 "14dot.nc"
            self->digitInput=num-1;
            # 262 "14dot.nc"
            if(list$1int$_length(self->inputedKeys)<256) {
                # 259 "14dot.nc"
                list$1int$_push_back(self->inputedKeys,key_10);
            }
            # 262 "14dot.nc"
                        neo_current_frame = fr.prev;
            return key_10;
        }
        else {
            # 269 "14dot.nc"
            if(list$1int$_length(self->inputedKeys)<256) {
                # 266 "14dot.nc"
                list$1int$_push_back(self->inputedKeys,key_10);
            }
            # 269 "14dot.nc"
                        neo_current_frame = fr.prev;
            return key_10;
        }
        # 272 "14dot.nc"
                neo_current_frame = fr.prev;
        return key_10;
    }
    # 275 "14dot.nc"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

static int list$1int$_length(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_length"; neo_current_frame = &fr;
    # 1772 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1770 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 1772 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self->len;
                neo_current_frame = fr.prev;
}

static int list$1list$1int$$ph_length(struct list$1list$1int$$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1list$1int$$ph_length"; neo_current_frame = &fr;
    # 1772 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1770 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 1772 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self->len;
            neo_current_frame = fr.prev;
}

static struct list$1int$* list$1list$1int$$ph_item(struct list$1list$1int$$ph* self, int position, struct list$1int$* default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1list$1int$$ph_item"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    struct list_item$1list$1int$$ph* it;
    int i;
    # 1750 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1747 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 1747, 100);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1747, 101);
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
                        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 1758, 102);
            neo_current_frame = fr.prev;
            come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1758, 103);
            return __result_obj__0;
        }
        # 1760 "/usr/local/include/neo-c.h"
        it=it->next;
        # 1761 "/usr/local/include/neo-c.h"
        i++;
    }
    # 1764 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 1764, 104);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1764, 105);
    return __result_obj__0;
}

static int list$1int$_item(struct list$1int$* self, int position, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_item"; neo_current_frame = &fr;
    struct list_item$1int$* it;
    int i;
    # 1750 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1747 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return default_value;
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
                        neo_current_frame = fr.prev;
            return it->item;
        }
        # 1760 "/usr/local/include/neo-c.h"
        it=it->next;
        # 1761 "/usr/local/include/neo-c.h"
        i++;
    }
    # 1764 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return default_value;
                    neo_current_frame = fr.prev;
}

static struct list$1int$* list$1int$_reset(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_reset"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    # 1852 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1849 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1852 "/usr/local/include/neo-c.h"
    it=self->head;
    # 1859 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1854 "/usr/local/include/neo-c.h"
        prev_it=it;
        # 1855 "/usr/local/include/neo-c.h"
        it=it->next;
        # 1856 "/usr/local/include/neo-c.h"
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1856, 110);
    }
    # 1859 "/usr/local/include/neo-c.h"
    self->head=((void*)0);
    # 1860 "/usr/local/include/neo-c.h"
    self->tail=((void*)0);
    # 1862 "/usr/local/include/neo-c.h"
    self->len=0;
    # 1864 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void ViWin_clearInputedKey_v14(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_clearInputedKey_v14"; neo_current_frame = &fr;
    # 280 "14dot.nc"
    list$1int$_reset(self->inputedKeys);
    neo_current_frame = fr.prev;
}

void ViWin_saveInputedKeyOnTheMovingCursor_v14(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_saveInputedKeyOnTheMovingCursor_v14"; neo_current_frame = &fr;
    # 288 "14dot.nc"
    if(self->recordingMacro) {
        # 286 "14dot.nc"
        ViWin_saveInputedKey_v14(self);
    }
    neo_current_frame = fr.prev;
}

void ViWin_saveInputedKey_v14(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_saveInputedKey_v14"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* __dec_obj10;
    int i;
    struct list$1int$* _o2_saved_2;
    int it;
    struct list$1int$* __dec_obj11;
    # 310 "14dot.nc"
    if(!self->autoInput&&!self->pressedDot) {
        # 308 "14dot.nc"
        if(self->digitInput>0) {
            # 294 "14dot.nc"
            self->autoInput=(_Bool)1;
            # 295 "14dot.nc"
            self->autoInputIndex=0;
            # 296 "14dot.nc"
            __dec_obj10=self->savedInputedKeys,
            self->savedInputedKeys=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "14dot.nc", 296, 111, "struct list$1int$*"), "14dot.nc", 296, 112)), "14dot.nc", 296, 114);
            come_call_finalizer(list$1int$_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc", 296, 113);
            # 303 "14dot.nc"
            for(i=0            ;i<self->digitInput;i++){
                # 302 "14dot.nc"
                for(_o2_saved_2=(struct list$1int$*)come_increment_ref_count(self->inputedKeys, "14dot.nc", 298, 115),it=list$1int$_begin(_o2_saved_2)                ;!list$1int$_end(_o2_saved_2);it=list$1int$_next(_o2_saved_2)){
                    # 299 "14dot.nc"
                    list$1int$_push_back(self->savedInputedKeys,it);
                }
                come_call_finalizer(list$1int$$p_finalize, _o2_saved_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc}", 303, 116);
            }
            # 303 "14dot.nc"
            self->digitInput=0;
        }
        else {
            # 306 "14dot.nc"
            __right_value0 = (void*)0;
            __dec_obj11=self->savedInputedKeys,
            self->savedInputedKeys=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->inputedKeys), "14dot.nc", 306, 132);
            come_call_finalizer(list$1int$_finalize, __dec_obj11,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc", 306, 131);
        }
    }
    # 313 "14dot.nc"
    if(self->recordingMacroKey!=-1) {
        # 311 "14dot.nc"
        __right_value0 = (void*)0;
        list$1list$1int$$ph_push_back(self->recordingMacro,(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->savedInputedKeys), "14dot.nc", 311, 147));
    }
    neo_current_frame = fr.prev;
}

static struct list$1int$* list$1int$$p_clone(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_clone"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* result;
    struct list_item$1int$* it;
    # 1513 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1511 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 117);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 118);
        return __result_obj__0;
    }
    # 1513 "/usr/local/include/neo-c.h"
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1513, 119, "struct list$1int$*"), "/usr/local/include/neo-c.h", 1513, 120)), "/usr/local/include/neo-c.h", 1513, 121);
    # 1515 "/usr/local/include/neo-c.h"
    it=self->head;
    # 1527 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "/usr/local/include/neo-c.h"
        if(0) {
            # 1518 "/usr/local/include/neo-c.h"
            list$1int$_add(result,it->item);
        }
        else {
            # 1521 "/usr/local/include/neo-c.h"
            list$1int$_add(result,it->item);
        }
        # 1524 "/usr/local/include/neo-c.h"
        it=it->next;
    }
    # 1527 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 128);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 129);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 130);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_11;
    struct list_item$1int$* litem_12;
    # 1533 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1531 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "/usr/local/include/neo-c.h"
    if(self->len==0) {
        # 1534 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1534, 122, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1534, 123);
        # 1536 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1537 "/usr/local/include/neo-c.h"
        litem->next=((void*)0);
        # 1538 "/usr/local/include/neo-c.h"
        litem->item=item;
        # 1540 "/usr/local/include/neo-c.h"
        self->tail=litem;
        # 1541 "/usr/local/include/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_11=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1544, 124, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1544, 125);
        # 1546 "/usr/local/include/neo-c.h"
        litem_11->prev=self->head;
        # 1547 "/usr/local/include/neo-c.h"
        litem_11->next=((void*)0);
        # 1548 "/usr/local/include/neo-c.h"
        litem_11->item=item;
        # 1550 "/usr/local/include/neo-c.h"
        self->tail=litem_11;
        # 1551 "/usr/local/include/neo-c.h"
        self->head->next=litem_11;
    }
    else {
        # 1554 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1554, 126, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1554, 127);
        # 1556 "/usr/local/include/neo-c.h"
        litem_12->prev=self->tail;
        # 1557 "/usr/local/include/neo-c.h"
        litem_12->next=((void*)0);
        # 1558 "/usr/local/include/neo-c.h"
        litem_12->item=item;
        # 1560 "/usr/local/include/neo-c.h"
        self->tail->next=litem_12;
        # 1561 "/usr/local/include/neo-c.h"
        self->tail=litem_12;
    }
    # 1564 "/usr/local/include/neo-c.h"
    self->len++;
    # 1566 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1list$1int$$ph* list$1list$1int$$ph_push_back(struct list$1list$1int$$ph* self, struct list$1int$* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1list$1int$$ph_push_back"; neo_current_frame = &fr;
    struct list$1list$1int$$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1list$1int$$ph* litem;
    struct list$1int$* __dec_obj12;
    struct list_item$1list$1int$$ph* litem_13;
    struct list$1int$* __dec_obj13;
    struct list_item$1list$1int$$ph* litem_14;
    struct list$1int$* __dec_obj14;
    # 1618 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(list$1int$$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1615, 133);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/usr/local/include/neo-c.h"
    if(self->len==0) {
        # 1619 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1list$1int$$ph*)come_increment_ref_count(((struct list_item$1list$1int$$ph*)(__right_value0=(struct list_item$1list$1int$$ph*)come_calloc(1, sizeof(struct list_item$1list$1int$$ph)*(1), "/usr/local/include/neo-c.h", 1619, 134, "struct list_item$1list$1int$$ph*"))), "/usr/local/include/neo-c.h", 1619, 135);
        # 1621 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/usr/local/include/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/usr/local/include/neo-c.h"
        __dec_obj12=litem->item,
        litem->item=(struct list$1int$*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 137);
        come_call_finalizer(list$1int$_finalize, __dec_obj12,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1623, 136);
        # 1625 "/usr/local/include/neo-c.h"
        self->tail=litem;
        # 1626 "/usr/local/include/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1list$1int$$ph*)come_increment_ref_count(((struct list_item$1list$1int$$ph*)(__right_value0=(struct list_item$1list$1int$$ph*)come_calloc(1, sizeof(struct list_item$1list$1int$$ph)*(1), "/usr/local/include/neo-c.h", 1629, 138, "struct list_item$1list$1int$$ph*"))), "/usr/local/include/neo-c.h", 1629, 139);
        # 1631 "/usr/local/include/neo-c.h"
        litem_13->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_13->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        __dec_obj13=litem_13->item,
        litem_13->item=(struct list$1int$*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 141);
        come_call_finalizer(list$1int$_finalize, __dec_obj13,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1633, 140);
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_13;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_13;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_14=(struct list_item$1list$1int$$ph*)come_increment_ref_count(((struct list_item$1list$1int$$ph*)(__right_value0=(struct list_item$1list$1int$$ph*)come_calloc(1, sizeof(struct list_item$1list$1int$$ph)*(1), "/usr/local/include/neo-c.h", 1639, 142, "struct list_item$1list$1int$$ph*"))), "/usr/local/include/neo-c.h", 1639, 143);
        # 1641 "/usr/local/include/neo-c.h"
        litem_14->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_14->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        __dec_obj14=litem_14->item,
        litem_14->item=(struct list$1int$*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 145);
        come_call_finalizer(list$1int$_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1643, 144);
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_14;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_14;
    }
    # 1649 "/usr/local/include/neo-c.h"
    self->len++;
    # 1651 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(list$1int$$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1651, 146);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void ViWin_makeInputedKeyGVIndent_v14(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_makeInputedKeyGVIndent_v14"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* __dec_obj15;
    # 317 "14dot.nc"
    __dec_obj15=self->inputedKeys,
    self->inputedKeys=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "14dot.nc", 317, 148, "struct list$1int$*"), "14dot.nc", 317, 149)), "14dot.nc", 317, 151);
    come_call_finalizer(list$1int$_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc", 317, 150);
    # 319 "14dot.nc"
    list$1int$_push_back(self->inputedKeys,103);
    # 320 "14dot.nc"
    list$1int$_push_back(self->inputedKeys,118);
    # 321 "14dot.nc"
    list$1int$_push_back(self->inputedKeys,62);
    # 323 "14dot.nc"
    ViWin_saveInputedKey_v14(self);
    neo_current_frame = fr.prev;
}

void ViWin_makeInputedKeyGVDeIndent_v14(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_makeInputedKeyGVDeIndent_v14"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* __dec_obj16;
    # 328 "14dot.nc"
    __dec_obj16=self->inputedKeys,
    self->inputedKeys=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "14dot.nc", 328, 152, "struct list$1int$*"), "14dot.nc", 328, 153)), "14dot.nc", 328, 155);
    come_call_finalizer(list$1int$_finalize, __dec_obj16,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc", 328, 154);
    # 330 "14dot.nc"
    list$1int$_push_back(self->inputedKeys,103);
    # 331 "14dot.nc"
    list$1int$_push_back(self->inputedKeys,118);
    # 332 "14dot.nc"
    list$1int$_push_back(self->inputedKeys,60);
    # 334 "14dot.nc"
    ViWin_saveInputedKey_v14(self);
    neo_current_frame = fr.prev;
}

void ViWin_recordMacro(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_recordMacro"; neo_current_frame = &fr;
    int key;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1list$1int$$ph* __dec_obj17;
    struct list$1list$1int$$ph* macro_;
    struct list$1list$1int$$ph* __dec_obj22;
    # 352 "14dot.nc"
    if(self->recordingMacroKey==-1) {
        # 340 "14dot.nc"
        key=ViWin_getKey_v14(self,(_Bool)0);
        # 342 "14dot.nc"
        self->recordingMacroKey=key;
        # 343 "14dot.nc"
        __dec_obj17=self->recordingMacro,
        self->recordingMacro=(struct list$1list$1int$$ph*)come_increment_ref_count(list$1list$1int$$ph_initialize((struct list$1list$1int$$ph*)come_increment_ref_count((struct list$1list$1int$$ph*)come_calloc(1, sizeof(struct list$1list$1int$$ph)*(1), "14dot.nc", 343, 156, "struct list$1list$1int$$ph*"), "14dot.nc", 343, 160)), "14dot.nc", 343, 162);
        come_call_finalizer(list$1list$1int$$ph_finalize, __dec_obj17,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc", 343, 161);
    }
    else {
        # 346 "14dot.nc"
        __right_value0 = (void*)0;
        macro_=(struct list$1list$1int$$ph*)come_increment_ref_count(list$1list$1int$$ph$p_clone(self->recordingMacro), "14dot.nc", 346, 195);
        # 347 "14dot.nc"
        __right_value0 = (void*)0;
        map$2int$list$1list$1int$$ph$ph_insert(self->macro,self->recordingMacroKey,(struct list$1list$1int$$ph*)come_increment_ref_count(list$1list$1int$$ph$p_clone(macro_), "14dot.nc", 347, 224),(_Bool)0);
        # 349 "14dot.nc"
        self->recordingMacroKey=-1;
        # 350 "14dot.nc"
        __dec_obj22=self->recordingMacro,
        self->recordingMacro=((void*)0);
        come_call_finalizer(list$1list$1int$$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc", 350, 225);
        come_call_finalizer(list$1list$1int$$ph$p_finalize, macro_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc}", 352, 226);
    }
    neo_current_frame = fr.prev;
}

static struct list$1list$1int$$ph* list$1list$1int$$ph_initialize(struct list$1list$1int$$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1list$1int$$ph_initialize"; neo_current_frame = &fr;
    struct list$1list$1int$$ph* __result_obj__0;
    # 1481 "/usr/local/include/neo-c.h"
    self->head=((void*)0);
    # 1482 "/usr/local/include/neo-c.h"
    self->tail=((void*)0);
    # 1483 "/usr/local/include/neo-c.h"
    self->len=0;
    # 1485 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1list$1int$$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 157);
    come_call_finalizer(list$1list$1int$$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 158);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1list$1int$$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 159);
    return __result_obj__0;
}

static struct list$1list$1int$$ph* list$1list$1int$$ph$p_clone(struct list$1list$1int$$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1list$1int$$ph$p_clone"; neo_current_frame = &fr;
    struct list$1list$1int$$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1list$1int$$ph* result;
    struct list_item$1list$1int$$ph* it;
    # 1513 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1511 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct list$1list$1int$$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 163);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1list$1int$$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 164);
        return __result_obj__0;
    }
    # 1513 "/usr/local/include/neo-c.h"
    result=(struct list$1list$1int$$ph*)come_increment_ref_count(list$1list$1int$$ph_initialize((struct list$1list$1int$$ph*)come_increment_ref_count((struct list$1list$1int$$ph*)come_calloc(1, sizeof(struct list$1list$1int$$ph)*(1), "/usr/local/include/neo-c.h", 1513, 165, "struct list$1list$1int$$ph*"), "/usr/local/include/neo-c.h", 1513, 166)), "/usr/local/include/neo-c.h", 1513, 167);
    # 1515 "/usr/local/include/neo-c.h"
    it=self->head;
    # 1527 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "/usr/local/include/neo-c.h"
        if(1) {
            # 1518 "/usr/local/include/neo-c.h"
            __right_value0 = (void*)0;
            list$1list$1int$$ph_add(result,(struct list$1int$*)come_increment_ref_count(list$1int$_clone(it->item), "/usr/local/include/neo-c.h", 1518, 190));
        }
        else {
            # 1521 "/usr/local/include/neo-c.h"
            __right_value0 = (void*)0;
            list$1list$1int$$ph_add(result,(struct list$1int$*)come_increment_ref_count(list$1int$_clone(it->item), "/usr/local/include/neo-c.h", 1521, 191));
        }
        # 1524 "/usr/local/include/neo-c.h"
        it=it->next;
    }
    # 1527 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1list$1int$$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 192);
    come_call_finalizer(list$1list$1int$$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 193);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1list$1int$$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 194);
    return __result_obj__0;
}

static struct list$1list$1int$$ph* list$1list$1int$$ph_add(struct list$1list$1int$$ph* self, struct list$1int$* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1list$1int$$ph_add"; neo_current_frame = &fr;
    struct list$1list$1int$$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1list$1int$$ph* litem;
    struct list$1int$* __dec_obj18;
    struct list_item$1list$1int$$ph* litem_15;
    struct list$1int$* __dec_obj19;
    struct list_item$1list$1int$$ph* litem_16;
    struct list$1int$* __dec_obj20;
    # 1533 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1531 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(list$1int$$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 168);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "/usr/local/include/neo-c.h"
    if(self->len==0) {
        # 1534 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1list$1int$$ph*)come_increment_ref_count(((struct list_item$1list$1int$$ph*)(__right_value0=(struct list_item$1list$1int$$ph*)come_calloc(1, sizeof(struct list_item$1list$1int$$ph)*(1), "/usr/local/include/neo-c.h", 1534, 169, "struct list_item$1list$1int$$ph*"))), "/usr/local/include/neo-c.h", 1534, 170);
        # 1536 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1537 "/usr/local/include/neo-c.h"
        litem->next=((void*)0);
        # 1538 "/usr/local/include/neo-c.h"
        __dec_obj18=litem->item,
        litem->item=(struct list$1int$*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 172);
        come_call_finalizer(list$1int$_finalize, __dec_obj18,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 171);
        # 1540 "/usr/local/include/neo-c.h"
        self->tail=litem;
        # 1541 "/usr/local/include/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_15=(struct list_item$1list$1int$$ph*)come_increment_ref_count(((struct list_item$1list$1int$$ph*)(__right_value0=(struct list_item$1list$1int$$ph*)come_calloc(1, sizeof(struct list_item$1list$1int$$ph)*(1), "/usr/local/include/neo-c.h", 1544, 173, "struct list_item$1list$1int$$ph*"))), "/usr/local/include/neo-c.h", 1544, 174);
        # 1546 "/usr/local/include/neo-c.h"
        litem_15->prev=self->head;
        # 1547 "/usr/local/include/neo-c.h"
        litem_15->next=((void*)0);
        # 1548 "/usr/local/include/neo-c.h"
        __dec_obj19=litem_15->item,
        litem_15->item=(struct list$1int$*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 176);
        come_call_finalizer(list$1int$_finalize, __dec_obj19,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 175);
        # 1550 "/usr/local/include/neo-c.h"
        self->tail=litem_15;
        # 1551 "/usr/local/include/neo-c.h"
        self->head->next=litem_15;
    }
    else {
        # 1554 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_16=(struct list_item$1list$1int$$ph*)come_increment_ref_count(((struct list_item$1list$1int$$ph*)(__right_value0=(struct list_item$1list$1int$$ph*)come_calloc(1, sizeof(struct list_item$1list$1int$$ph)*(1), "/usr/local/include/neo-c.h", 1554, 177, "struct list_item$1list$1int$$ph*"))), "/usr/local/include/neo-c.h", 1554, 178);
        # 1556 "/usr/local/include/neo-c.h"
        litem_16->prev=self->tail;
        # 1557 "/usr/local/include/neo-c.h"
        litem_16->next=((void*)0);
        # 1558 "/usr/local/include/neo-c.h"
        __dec_obj20=litem_16->item,
        litem_16->item=(struct list$1int$*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 180);
        come_call_finalizer(list$1int$_finalize, __dec_obj20,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 179);
        # 1560 "/usr/local/include/neo-c.h"
        self->tail->next=litem_16;
        # 1561 "/usr/local/include/neo-c.h"
        self->tail=litem_16;
    }
    # 1564 "/usr/local/include/neo-c.h"
    self->len++;
    # 1566 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(list$1int$$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 181);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1int$* list$1int$_clone(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_clone"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* result;
    struct list_item$1int$* it;
    # 1513 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1511 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 182);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 183);
        return __result_obj__0;
    }
    # 1513 "/usr/local/include/neo-c.h"
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1513, 184, "struct list$1int$*"), "/usr/local/include/neo-c.h", 1513, 185)), "/usr/local/include/neo-c.h", 1513, 186);
    # 1515 "/usr/local/include/neo-c.h"
    it=self->head;
    # 1527 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "/usr/local/include/neo-c.h"
        if(0) {
            # 1518 "/usr/local/include/neo-c.h"
            list$1int$_add(result,it->item);
        }
        else {
            # 1521 "/usr/local/include/neo-c.h"
            list$1int$_add(result,it->item);
        }
        # 1524 "/usr/local/include/neo-c.h"
        it=it->next;
    }
    # 1527 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 187);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 188);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 189);
    return __result_obj__0;
}

static struct map$2int$list$1list$1int$$ph$ph* map$2int$list$1list$1int$$ph$ph_insert(struct map$2int$list$1list$1int$$ph$ph* self, int key, struct list$1list$1int$$ph* item, _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1list$1int$$ph$ph_insert"; neo_current_frame = &fr;
    struct map$2int$list$1list$1int$$ph$ph* __result_obj__0;
    _Bool add_to_key_list;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 3865 "/usr/local/include/neo-c.h"
    # 3871 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 3868 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(list$1list$1int$$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3868, 196);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3874 "/usr/local/include/neo-c.h"
    if(self->len*10>=self->size) {
        # 3872 "/usr/local/include/neo-c.h"
        map$2int$list$1list$1int$$ph$ph_rehash(self);
    }
    # 3874 "/usr/local/include/neo-c.h"
    add_to_key_list=(_Bool)0;
    # 3875 "/usr/local/include/neo-c.h"
    key_hash=int_get_hash_key(((int)key));
    # 3876 "/usr/local/include/neo-c.h"
    hash=key_hash%self->size;
    # 3877 "/usr/local/include/neo-c.h"
    it=hash;
    # 3937 "/usr/local/include/neo-c.h"
    while((_Bool)1) {
        # 3935 "/usr/local/include/neo-c.h"
        if(self->item_existance[it]) {
            # 3905 "/usr/local/include/neo-c.h"
            if(self->hashes[it]==key_hash&&((!by_pointer&&int_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                # 3885 "/usr/local/include/neo-c.h"
                map$2int$list$1list$1int$$ph$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
                # 3893 "/usr/local/include/neo-c.h"
                if(0) {
                    # 3887 "/usr/local/include/neo-c.h"
                    # 3888 "/usr/local/include/neo-c.h"
                    self->keys[it]=key;
                }
                else {
                    # 3891 "/usr/local/include/neo-c.h"
                    self->keys[it]=key;
                }
                # 3900 "/usr/local/include/neo-c.h"
                if(1) {
                    # 3894 "/usr/local/include/neo-c.h"
                    come_call_finalizer(list$1list$1int$$ph$p_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3894, 220);
                    # 3895 "/usr/local/include/neo-c.h"
                    self->items[it]=(struct list$1list$1int$$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3895, 221);
                }
                else {
                    # 3898 "/usr/local/include/neo-c.h"
                    self->items[it]=item;
                }
                # 3900 "/usr/local/include/neo-c.h"
                self->hashes[it]=key_hash;
                # 3901 "/usr/local/include/neo-c.h"
                add_to_key_list=(_Bool)1;
                # 3902 "/usr/local/include/neo-c.h"
                break;
            }
            # 3908 "/usr/local/include/neo-c.h"
            if(++it>=self->size) {
                # 3906 "/usr/local/include/neo-c.h"
                it=0;
            }
            # 3913 "/usr/local/include/neo-c.h"
            if(it==hash) {
                # 3909 "/usr/local/include/neo-c.h"
                printf("unexpected error in map.insert\n");
                # 3910 "/usr/local/include/neo-c.h"
                stackframe2(self);
                # 3911 "/usr/local/include/neo-c.h"
                exit(2);
            }
        }
        else {
            # 3915 "/usr/local/include/neo-c.h"
            self->item_existance[it]=(_Bool)1;
            # 3916 "/usr/local/include/neo-c.h"
            self->hashes[it]=key_hash;
            # 3923 "/usr/local/include/neo-c.h"
            if(0) {
                # 3918 "/usr/local/include/neo-c.h"
                self->keys[it]=key;
            }
            else {
                # 3921 "/usr/local/include/neo-c.h"
                self->keys[it]=key;
            }
            # 3930 "/usr/local/include/neo-c.h"
            if(1) {
                # 3924 "/usr/local/include/neo-c.h"
                self->items[it]=(struct list$1list$1int$$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3924, 222);
            }
            else {
                # 3927 "/usr/local/include/neo-c.h"
                self->items[it]=item;
            }
            # 3930 "/usr/local/include/neo-c.h"
            self->len++;
            # 3931 "/usr/local/include/neo-c.h"
            add_to_key_list=(_Bool)1;
            # 3933 "/usr/local/include/neo-c.h"
            break;
        }
    }
    # 3941 "/usr/local/include/neo-c.h"
    if(add_to_key_list) {
        # 3938 "/usr/local/include/neo-c.h"
        list$1int$_push_back(self->key_list,key);
    }
    # 3941 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(list$1list$1int$$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3941, 223);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2int$list$1list$1int$$ph$ph_rehash(struct map$2int$list$1list$1int$$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1list$1int$$ph$ph_rehash"; neo_current_frame = &fr;
    int old_size;
    int size;
    void* __right_value0 = (void*)0;
    int* keys;
    struct list$1list$1int$$ph** items;
    unsigned int* hashes;
    _Bool* item_existance;
    int i;
    int len;
    int i_17;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    # 3782 "/usr/local/include/neo-c.h"
    # 3784 "/usr/local/include/neo-c.h"
    old_size=self->size;
    # 3785 "/usr/local/include/neo-c.h"
    size=self->size*10;
    # 3786 "/usr/local/include/neo-c.h"
    keys=(int*)come_increment_ref_count(((int*)(__right_value0=(int*)come_calloc(1, sizeof(int)*(1*(size)), "/usr/local/include/neo-c.h", 3786, 197, "int*"))), "/usr/local/include/neo-c.h", 3786, 198);
    # 3787 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    items=(struct list$1list$1int$$ph**)come_increment_ref_count(((struct list$1list$1int$$ph**)(__right_value0=(struct list$1list$1int$$ph**)come_calloc(1, sizeof(struct list$1list$1int$$ph*)*(1*(size)), "/usr/local/include/neo-c.h", 3787, 199, "struct list$1list$1int$$ph**"))), "/usr/local/include/neo-c.h", 3787, 200);
    # 3788 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "/usr/local/include/neo-c.h", 3788, 201, "unsigned int*"))), "/usr/local/include/neo-c.h", 3788, 202);
    # 3789 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 3789, 203, "_Bool*"))), "/usr/local/include/neo-c.h", 3789, 204);
    # 3795 "/usr/local/include/neo-c.h"
    for(i=0    ;i<size;i++){
        # 3791 "/usr/local/include/neo-c.h"
        hashes[i]=0;
        # 3792 "/usr/local/include/neo-c.h"
        item_existance[i]=(_Bool)0;
    }
    # 3795 "/usr/local/include/neo-c.h"
    len=0;
    # 3830 "/usr/local/include/neo-c.h"
    for(i_17=0    ;i_17<old_size;i_17++){
        # 3802 "/usr/local/include/neo-c.h"
        if(!self->item_existance[i_17]) {
            # 3799 "/usr/local/include/neo-c.h"
            continue;
        }
        # 3802 "/usr/local/include/neo-c.h"
        key_hash=self->hashes[i_17];
        # 3803 "/usr/local/include/neo-c.h"
        hash=key_hash%size;
        # 3804 "/usr/local/include/neo-c.h"
        n=hash;
        # 3828 "/usr/local/include/neo-c.h"
        while((_Bool)1) {
            # 3827 "/usr/local/include/neo-c.h"
            if(item_existance[n]) {
                # 3812 "/usr/local/include/neo-c.h"
                if(++n>=size) {
                    # 3810 "/usr/local/include/neo-c.h"
                    n=0;
                }
                # 3817 "/usr/local/include/neo-c.h"
                if(n==hash) {
                    # 3813 "/usr/local/include/neo-c.h"
                    printf("unexpected error in map.rehash(1)\n");
                    # 3814 "/usr/local/include/neo-c.h"
                    stackframe2(self);
                    # 3815 "/usr/local/include/neo-c.h"
                    exit(2);
                }
            }
            else {
                # 3819 "/usr/local/include/neo-c.h"
                item_existance[n]=(_Bool)1;
                # 3820 "/usr/local/include/neo-c.h"
                hashes[n]=key_hash;
                # 3821 "/usr/local/include/neo-c.h"
                keys[n]=self->keys[i_17];
                # 3822 "/usr/local/include/neo-c.h"
                items[n]=self->items[i_17];
                # 3824 "/usr/local/include/neo-c.h"
                len++;
                # 3825 "/usr/local/include/neo-c.h"
                break;
            }
        }
    }
    # 3830 "/usr/local/include/neo-c.h"
    come_free((char*)self->items);
    # 3831 "/usr/local/include/neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3831, 215));
    # 3832 "/usr/local/include/neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3832, 216));
    # 3833 "/usr/local/include/neo-c.h"
    come_free((char*)self->keys);
    # 3835 "/usr/local/include/neo-c.h"
    self->keys=keys;
    # 3836 "/usr/local/include/neo-c.h"
    self->items=items;
    # 3837 "/usr/local/include/neo-c.h"
    self->hashes=hashes;
    # 3838 "/usr/local/include/neo-c.h"
    self->item_existance=item_existance;
    # 3840 "/usr/local/include/neo-c.h"
    self->size=size;
    # 3841 "/usr/local/include/neo-c.h"
    self->len=len;
            neo_current_frame = fr.prev;
}

static void list$1list$1int$$ph_operator_store_element(struct list$1list$1int$$ph* self, int position, struct list$1int$* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1list$1int$$ph_operator_store_element"; neo_current_frame = &fr;
    # 2142 "/usr/local/include/neo-c.h"
    list$1list$1int$$ph_replace(self,position,(struct list$1int$*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2142, 213));
    come_call_finalizer(list$1int$$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3822, 214);
                    neo_current_frame = fr.prev;
}

static struct list$1list$1int$$ph* list$1list$1int$$ph_replace(struct list$1list$1int$$ph* self, int position, struct list$1int$* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1list$1int$$ph_replace"; neo_current_frame = &fr;
    struct list$1list$1int$$ph* __result_obj__0;
    int len;
    int i;
    struct list$1int$* default_value;
    struct list_item$1list$1int$$ph* it;
    int i_18;
    struct list$1int$* __dec_obj21;
    # 2019 "/usr/local/include/neo-c.h"
    # 2025 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 2022 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(list$1int$$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2022, 205);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2028 "/usr/local/include/neo-c.h"
    if(position<0) {
        # 2026 "/usr/local/include/neo-c.h"
        position+=self->len;
    }
    # 2032 "/usr/local/include/neo-c.h"
    if(position<0) {
        # 2029 "/usr/local/include/neo-c.h"
        position=0;
    }
    # 2043 "/usr/local/include/neo-c.h"
    if(self->len==0||position>=self->len) {
        # 2033 "/usr/local/include/neo-c.h"
        len=self->len;
        # 2039 "/usr/local/include/neo-c.h"
        for(i=0        ;i<position-len;i++){
            # 2035 "/usr/local/include/neo-c.h"
            # 2036 "/usr/local/include/neo-c.h"
            memset(&default_value,0,sizeof(struct list$1int$*));
            # 2037 "/usr/local/include/neo-c.h"
            list$1list$1int$$ph_push_back(self,(struct list$1int$*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2037, 206));
            come_call_finalizer(list$1int$$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2039, 207);
        }
        # 2039 "/usr/local/include/neo-c.h"
        list$1list$1int$$ph_push_back(self,(struct list$1int$*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2039, 208));
        # 2040 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(list$1int$$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2040, 209);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2043 "/usr/local/include/neo-c.h"
    it=self->head;
    # 2044 "/usr/local/include/neo-c.h"
    i_18=0;
    # 2054 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 2050 "/usr/local/include/neo-c.h"
        if(position==i_18) {
            # 2047 "/usr/local/include/neo-c.h"
            __dec_obj21=it->item,
            it->item=(struct list$1int$*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2047, 211);
            come_call_finalizer(list$1int$_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2047, 210);
            # 2048 "/usr/local/include/neo-c.h"
            break;
        }
        # 2050 "/usr/local/include/neo-c.h"
        it=it->next;
        # 2051 "/usr/local/include/neo-c.h"
        i_18++;
    }
    # 2054 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    come_call_finalizer(list$1int$$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2054, 212);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2int$list$1list$1int$$ph$ph_remove_ordered_entry(struct map$2int$list$1list$1int$$ph$ph* self, int key, _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1list$1int$$ph$ph_remove_ordered_entry"; neo_current_frame = &fr;
    int pos;
    # 3418 "/usr/local/include/neo-c.h"
    pos=map$2int$list$1list$1int$$ph$ph_key_position(self,key,by_pointer);
    # 3422 "/usr/local/include/neo-c.h"
    if(pos>=0) {
        # 3420 "/usr/local/include/neo-c.h"
        list$1int$_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2int$list$1list$1int$$ph$ph_key_position(struct map$2int$list$1list$1int$$ph$ph* self, int key, _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1list$1int$$ph$ph_key_position"; neo_current_frame = &fr;
    int pos;
    struct list_item$1int$* it;
    # 3404 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 3401 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 3404 "/usr/local/include/neo-c.h"
    pos=0;
    # 3405 "/usr/local/include/neo-c.h"
    it=self->key_list->head;
    # 3414 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 3410 "/usr/local/include/neo-c.h"
        if((!by_pointer&&int_equals(it->item,key))||(by_pointer&&it->item==key)) {
            # 3408 "/usr/local/include/neo-c.h"
                        neo_current_frame = fr.prev;
            return pos;
        }
        # 3410 "/usr/local/include/neo-c.h"
        it=it->next;
        # 3411 "/usr/local/include/neo-c.h"
        pos++;
    }
    # 3414 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return -1;
        neo_current_frame = fr.prev;
}

static struct list$1int$* list$1int$_delete(struct list$1int$* self, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_delete"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    int tmp;
    struct list_item$1int$* it;
    int i;
    struct list_item$1int$* prev_it;
    struct list_item$1int$* it_19;
    int i_20;
    struct list_item$1int$* prev_it_21;
    struct list_item$1int$* it_22;
    struct list_item$1int$* head_prev_it;
    struct list_item$1int$* tail_it;
    int i_23;
    struct list_item$1int$* prev_it_24;
    # 1891 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1888 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1894 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 1892 "/usr/local/include/neo-c.h"
        head+=self->len;
    }
    # 1898 "/usr/local/include/neo-c.h"
    if(tail<0) {
        # 1895 "/usr/local/include/neo-c.h"
        tail+=self->len+1;
    }
    # 1904 "/usr/local/include/neo-c.h"
    if(head>tail) {
        # 1899 "/usr/local/include/neo-c.h"
        tmp=tail;
        # 1900 "/usr/local/include/neo-c.h"
        tail=head;
        # 1901 "/usr/local/include/neo-c.h"
        head=tmp;
    }
    # 1908 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 1905 "/usr/local/include/neo-c.h"
        head=0;
    }
    # 1912 "/usr/local/include/neo-c.h"
    if(tail>self->len) {
        # 1909 "/usr/local/include/neo-c.h"
        tail=self->len;
    }
    # 1916 "/usr/local/include/neo-c.h"
    if(head>=self->len) {
        # 1913 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1920 "/usr/local/include/neo-c.h"
    if(head==tail) {
        # 1917 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2015 "/usr/local/include/neo-c.h"
    if(head==0&&tail==self->len) {
        # 1922 "/usr/local/include/neo-c.h"
        list$1int$_reset(self);
    }
    else if(head==0) {
        # 1925 "/usr/local/include/neo-c.h"
        it=self->head;
        # 1926 "/usr/local/include/neo-c.h"
        i=0;
        # 1948 "/usr/local/include/neo-c.h"
        while(it!=((void*)0)) {
            # 1947 "/usr/local/include/neo-c.h"
            if(i<tail) {
                # 1929 "/usr/local/include/neo-c.h"
                prev_it=it;
                # 1931 "/usr/local/include/neo-c.h"
                it=it->next;
                # 1932 "/usr/local/include/neo-c.h"
                i++;
                # 1934 "/usr/local/include/neo-c.h"
                come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1934, 217);
                # 1936 "/usr/local/include/neo-c.h"
                self->len--;
            }
            else if(i==tail) {
                # 1939 "/usr/local/include/neo-c.h"
                self->head=it;
                # 1940 "/usr/local/include/neo-c.h"
                self->head->prev=((void*)0);
                # 1941 "/usr/local/include/neo-c.h"
                break;
            }
            else {
                # 1944 "/usr/local/include/neo-c.h"
                it=it->next;
                # 1945 "/usr/local/include/neo-c.h"
                i++;
            }
        }
    }
    else if(tail==self->len) {
        # 1950 "/usr/local/include/neo-c.h"
        it_19=self->head;
        # 1951 "/usr/local/include/neo-c.h"
        i_20=0;
        # 1973 "/usr/local/include/neo-c.h"
        while(it_19!=((void*)0)) {
            # 1958 "/usr/local/include/neo-c.h"
            if(i_20==head) {
                # 1954 "/usr/local/include/neo-c.h"
                self->tail=it_19->prev;
                # 1955 "/usr/local/include/neo-c.h"
                self->tail->next=((void*)0);
            }
            # 1972 "/usr/local/include/neo-c.h"
            if(i_20>=head) {
                # 1959 "/usr/local/include/neo-c.h"
                prev_it_21=it_19;
                # 1961 "/usr/local/include/neo-c.h"
                it_19=it_19->next;
                # 1962 "/usr/local/include/neo-c.h"
                i_20++;
                # 1964 "/usr/local/include/neo-c.h"
                come_call_finalizer(list_item$1int$$p_finalize, prev_it_21, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1964, 218);
                # 1966 "/usr/local/include/neo-c.h"
                self->len--;
            }
            else {
                # 1969 "/usr/local/include/neo-c.h"
                it_19=it_19->next;
                # 1970 "/usr/local/include/neo-c.h"
                i_20++;
            }
        }
    }
    else {
        # 1975 "/usr/local/include/neo-c.h"
        it_22=self->head;
        # 1977 "/usr/local/include/neo-c.h"
        head_prev_it=((void*)0);
        # 1978 "/usr/local/include/neo-c.h"
        tail_it=((void*)0);
        # 1981 "/usr/local/include/neo-c.h"
        i_23=0;
        # 2007 "/usr/local/include/neo-c.h"
        while(it_22!=((void*)0)) {
            # 1986 "/usr/local/include/neo-c.h"
            if(i_23==head) {
                # 1984 "/usr/local/include/neo-c.h"
                head_prev_it=it_22->prev;
            }
            # 1990 "/usr/local/include/neo-c.h"
            if(i_23==tail) {
                # 1987 "/usr/local/include/neo-c.h"
                tail_it=it_22;
            }
            # 2005 "/usr/local/include/neo-c.h"
            if(i_23>=head&&i_23<tail) {
                # 1992 "/usr/local/include/neo-c.h"
                prev_it_24=it_22;
                # 1994 "/usr/local/include/neo-c.h"
                it_22=it_22->next;
                # 1995 "/usr/local/include/neo-c.h"
                i_23++;
                # 1997 "/usr/local/include/neo-c.h"
                come_call_finalizer(list_item$1int$$p_finalize, prev_it_24, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1997, 219);
                # 1999 "/usr/local/include/neo-c.h"
                self->len--;
            }
            else {
                # 2002 "/usr/local/include/neo-c.h"
                it_22=it_22->next;
                # 2003 "/usr/local/include/neo-c.h"
                i_23++;
            }
        }
        # 2010 "/usr/local/include/neo-c.h"
        if(head_prev_it!=((void*)0)) {
            # 2008 "/usr/local/include/neo-c.h"
            head_prev_it->next=tail_it;
        }
        # 2013 "/usr/local/include/neo-c.h"
        if(tail_it!=((void*)0)) {
            # 2011 "/usr/local/include/neo-c.h"
            tail_it->prev=head_prev_it;
        }
    }
    # 2015 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void ViWin_runMacro(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_runMacro"; neo_current_frame = &fr;
    int key;
    void* __right_value0 = (void*)0;
    struct list$1list$1int$$ph* macro_;
    struct list$1list$1int$$ph* __dec_obj23;
    # 356 "14dot.nc"
    key=ViWin_getKey_v14(self,(_Bool)0);
    # 358 "14dot.nc"
    macro_=(struct list$1list$1int$$ph*)come_increment_ref_count(map$2int$list$1list$1int$$ph$ph_at(self->macro,key,((void*)0),(_Bool)0), "14dot.nc", 358, 242);
    # 365 "14dot.nc"
    if(macro_) {
        # 361 "14dot.nc"
        __right_value0 = (void*)0;
        __dec_obj23=self->runningMacro,
        self->runningMacro=(struct list$1list$1int$$ph*)come_increment_ref_count(list$1list$1int$$ph$p_clone(macro_), "14dot.nc", 361, 244);
        come_call_finalizer(list$1list$1int$$ph_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc", 361, 243);
        # 362 "14dot.nc"
        self->runningMacroIndex1=0;
        # 363 "14dot.nc"
        self->runningMacroIndex2=0;
    }
    come_call_finalizer(list$1list$1int$$ph$p_finalize, macro_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc}", 367, 245);
    neo_current_frame = fr.prev;
}

static struct list$1list$1int$$ph* map$2int$list$1list$1int$$ph$ph_at(struct map$2int$list$1list$1int$$ph$ph* self, int key, struct list$1list$1int$$ph* default_value, _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1list$1int$$ph$ph_at"; neo_current_frame = &fr;
    struct list$1list$1int$$ph* __result_obj__0;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 3493 "/usr/local/include/neo-c.h"
    # 3499 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 3496 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct list$1list$1int$$ph*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3496, 227);
        come_call_finalizer(list$1list$1int$$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3496, 228);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1list$1int$$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3496, 229);
        return __result_obj__0;
    }
    # 3499 "/usr/local/include/neo-c.h"
    key_hash=int_get_hash_key(((int)key));
    # 3500 "/usr/local/include/neo-c.h"
    hash=key_hash%self->size;
    # 3501 "/usr/local/include/neo-c.h"
    it=hash;
    # 3524 "/usr/local/include/neo-c.h"
    while((_Bool)1) {
        # 3522 "/usr/local/include/neo-c.h"
        if(self->item_existance[it]) {
            # 3512 "/usr/local/include/neo-c.h"
            if(self->hashes[it]==key_hash&&((!by_pointer&&int_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                # 3509 "/usr/local/include/neo-c.h"
                                __result_obj__0 = (struct list$1list$1int$$ph*)come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3509, 230);
                come_call_finalizer(list$1list$1int$$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3509, 231);
                neo_current_frame = fr.prev;
                come_call_finalizer(list$1list$1int$$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3509, 232);
                return __result_obj__0;
            }
            # 3515 "/usr/local/include/neo-c.h"
            if(++it>=self->size) {
                # 3513 "/usr/local/include/neo-c.h"
                it=0;
            }
            # 3518 "/usr/local/include/neo-c.h"
            if(it==hash) {
                # 3516 "/usr/local/include/neo-c.h"
                                __result_obj__0 = (struct list$1list$1int$$ph*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3516, 233);
                come_call_finalizer(list$1list$1int$$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3516, 234);
                neo_current_frame = fr.prev;
                come_call_finalizer(list$1list$1int$$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3516, 235);
                return __result_obj__0;
            }
        }
        else {
            # 3520 "/usr/local/include/neo-c.h"
                        __result_obj__0 = (struct list$1list$1int$$ph*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3520, 236);
            come_call_finalizer(list$1list$1int$$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3520, 237);
            neo_current_frame = fr.prev;
            come_call_finalizer(list$1list$1int$$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3520, 238);
            return __result_obj__0;
        }
    }
    # 3524 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1list$1int$$ph*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3524, 239);
    come_call_finalizer(list$1list$1int$$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 240);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1list$1int$$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 241);
    return __result_obj__0;
}

static void lambda1(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda1"; neo_current_frame = &fr;
    # 373 "14dot.nc"
    self->activeWin->autoInput=(_Bool)1;
    # 374 "14dot.nc"
    self->activeWin->pressedDot=(_Bool)1;
    neo_current_frame = fr.prev;
}

static void lambda2(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda2"; neo_current_frame = &fr;
    # 379 "14dot.nc"
    ViWin_recordMacro(self->activeWin);
    neo_current_frame = fr.prev;
}

static void lambda3(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda3"; neo_current_frame = &fr;
    # 383 "14dot.nc"
    ViWin_runMacro(self->activeWin);
    neo_current_frame = fr.prev;
}

struct Vi*  Vi_initialize_v14(struct Vi*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "Vi_initialize_v14"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct Vi*  result  ;
    struct Vi*  __result_obj__0  ;
    # 369 "14dot.nc"
    result=(struct Vi* )come_increment_ref_count(Vi_initialize_v12((struct Vi* )come_increment_ref_count(self, "14dot.nc", 369, 246)), "14dot.nc", 369, 247);
    # 375 "14dot.nc"
    list$1lambda$_replace(result->events,46,lambda1);
    # 380 "14dot.nc"
    list$1lambda$_replace(result->events,113,lambda2);
    # 384 "14dot.nc"
    list$1lambda$_replace(result->events,64,lambda3);
    # 386 "14dot.nc"
        __result_obj__0 = (struct Vi* )come_increment_ref_count(result, "14dot.nc", 386, 254);
    come_call_finalizer(Vi_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0, "14dot.nc}", 386, 262);
    come_call_finalizer(Vi_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "14dot.nc}", 386, 263);
    neo_current_frame = fr.prev;
    come_call_finalizer(Vi_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "14dot.nc}", 386, 264);
    return __result_obj__0;
}

static struct list$1lambda$* list$1lambda$_replace(struct list$1lambda$* self, int position, void (*item)(struct Vi* ,int))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1lambda$_replace"; neo_current_frame = &fr;
    struct list$1lambda$* __result_obj__0;
    int len;
    int i;
    void (*default_value)(struct Vi* ,int);
    struct list_item$1lambda$* it;
    int i_27;
    # 2019 "/usr/local/include/neo-c.h"
    # 2025 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 2022 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2028 "/usr/local/include/neo-c.h"
    if(position<0) {
        # 2026 "/usr/local/include/neo-c.h"
        position+=self->len;
    }
    # 2032 "/usr/local/include/neo-c.h"
    if(position<0) {
        # 2029 "/usr/local/include/neo-c.h"
        position=0;
    }
    # 2043 "/usr/local/include/neo-c.h"
    if(self->len==0||position>=self->len) {
        # 2033 "/usr/local/include/neo-c.h"
        len=self->len;
        # 2039 "/usr/local/include/neo-c.h"
        for(i=0        ;i<position-len;i++){
            # 2035 "/usr/local/include/neo-c.h"
            # 2036 "/usr/local/include/neo-c.h"
            memset(&default_value,0,sizeof(void (*)(struct Vi* ,int)));
            # 2037 "/usr/local/include/neo-c.h"
            list$1lambda$_push_back(self,default_value);
        }
        # 2039 "/usr/local/include/neo-c.h"
        list$1lambda$_push_back(self,item);
        # 2040 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2043 "/usr/local/include/neo-c.h"
    it=self->head;
    # 2044 "/usr/local/include/neo-c.h"
    i_27=0;
    # 2054 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 2050 "/usr/local/include/neo-c.h"
        if(position==i_27) {
            # 2047 "/usr/local/include/neo-c.h"
            it->item=item;
            # 2048 "/usr/local/include/neo-c.h"
            break;
        }
        # 2050 "/usr/local/include/neo-c.h"
        it=it->next;
        # 2051 "/usr/local/include/neo-c.h"
        i_27++;
    }
    # 2054 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1lambda$* list$1lambda$_push_back(struct list$1lambda$* self, void (*item)(struct Vi* ,int))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1lambda$_push_back"; neo_current_frame = &fr;
    struct list$1lambda$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1lambda$* litem;
    struct list_item$1lambda$* litem_25;
    struct list_item$1lambda$* litem_26;
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
        litem=(struct list_item$1lambda$*)come_increment_ref_count(((struct list_item$1lambda$*)(__right_value0=(struct list_item$1lambda$*)come_calloc(1, sizeof(struct list_item$1lambda$)*(1), "/usr/local/include/neo-c.h", 1619, 248, "struct list_item$1lambda$*"))), "/usr/local/include/neo-c.h", 1619, 249);
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
        litem_25=(struct list_item$1lambda$*)come_increment_ref_count(((struct list_item$1lambda$*)(__right_value0=(struct list_item$1lambda$*)come_calloc(1, sizeof(struct list_item$1lambda$)*(1), "/usr/local/include/neo-c.h", 1629, 250, "struct list_item$1lambda$*"))), "/usr/local/include/neo-c.h", 1629, 251);
        # 1631 "/usr/local/include/neo-c.h"
        litem_25->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_25->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        litem_25->item=item;
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_25;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_25;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_26=(struct list_item$1lambda$*)come_increment_ref_count(((struct list_item$1lambda$*)(__right_value0=(struct list_item$1lambda$*)come_calloc(1, sizeof(struct list_item$1lambda$)*(1), "/usr/local/include/neo-c.h", 1639, 252, "struct list_item$1lambda$*"))), "/usr/local/include/neo-c.h", 1639, 253);
        # 1641 "/usr/local/include/neo-c.h"
        litem_26->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_26->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        litem_26->item=item;
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_26;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_26;
    }
    # 1649 "/usr/local/include/neo-c.h"
    self->len++;
    # 1651 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void Vi_finalize(struct Vi*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "Vi_finalize"; neo_current_frame = &fr;
    # 1 "Vi_finalize"
    # 3 "Vi_finalize"
    if(self!=((void*)0)&&self->wins!=((void*)0)) {
        # 2 "Vi_finalize"
        come_call_finalizer(list$1ViWin$ph$p_finalize, self->wins, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 5, 257);
    }
    # 4 "Vi_finalize"
    if(self!=((void*)0)&&self->events!=((void*)0)) {
        # 3 "Vi_finalize"
        come_call_finalizer(list$1lambda$$p_finalize, self->events, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 2, 259);
    }
    # 5 "Vi_finalize"
    if(self!=((void*)0)&&self->yank!=((void*)0)) {
        # 4 "Vi_finalize"
        come_call_finalizer(list$1int$ph$p_finalize, self->yank, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 4, 260);
    }
    # 6 "Vi_finalize"
    if(self!=((void*)0)&&self->fileYank!=((void*)0)) {
        # 5 "Vi_finalize"
        come_call_finalizer(list$1int$ph$p_finalize, self->fileYank, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 5, 261);
    }
        neo_current_frame = fr.prev;
}

static void list$1ViWin$ph$p_finalize(struct list$1ViWin$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1ViWin$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1ViWin$ph* it;
    struct list_item$1ViWin$ph* prev_it;
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
        come_call_finalizer(list_item$1ViWin$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 256);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1ViWin$ph$p_finalize(struct list_item$1ViWin$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1ViWin$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1ViWin$ph$p_finalize"
    # 3 "list_item$1ViWin$ph$p_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 2 "list_item$1ViWin$ph$p_finalize"
        come_call_finalizer(ViWin_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1ViWin$ph$p_finalize}", 2, 255);
    }
            neo_current_frame = fr.prev;
}

static void list$1lambda$$p_finalize(struct list$1lambda$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1lambda$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1lambda$* it;
    struct list_item$1lambda$* prev_it;
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
        come_call_finalizer(list_item$1lambda$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 258);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1lambda$$p_finalize(struct list_item$1lambda$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1lambda$$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1lambda$$p_finalize"
            neo_current_frame = fr.prev;
}

