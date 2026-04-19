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

typedef struct __dirstream DIR;

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
    int autoInputRepeat;
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

struct map$2int$list$1int$ph$ph
{
    int* keys;
    unsigned int* hashes;
    _Bool* item_existance;
    struct list$1int$ph** items;
    int size;
    int len;
    struct list$1int$* key_list;
    int it;
};

struct map$2int$int$
{
    int* keys;
    unsigned int* hashes;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$1int$* key_list;
    int it;
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
    struct map$2int$list$1int$ph$ph* registers;
    struct map$2int$int$* registerKinds;
    int selectedRegister;
    int  searchString[128]  ;
    _Bool searchReverse;
    _Bool regexSearch;
    _Bool searchWholeWord;
    _Bool searchIgnoreCase;
    _Bool searchSmartCase;
    int modeBeforeSearch;
    int modeBeforeCommand;
    char commandString[128];
    struct list$1char$ph* commandHistory;
    int commandHistoryIndex;
    _Bool commandHistoryBrowsing;
    char commandStringBeforeHistory[128];
};

enum { kYankKindLine 
,kYankKindNoLine 
,kYankKindBlock 
};

enum  eRepeatForwardNextCharacter { kRFNCNone 
,kRFNC1 
,kRFNC2 
};

struct dirent
{
    unsigned long  int  d_ino  ;
    long  int  d_off  ;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
};

struct dirent64
{
    unsigned long  int  d_ino  ;
    long  int  d_off  ;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
};

enum { DT_UNKNOWN=(0),
DT_FIFO=(1),
DT_CHR=(2),
DT_DIR=(4),
DT_BLK=(6),
DT_REG=(8),
DT_LNK=(10),
DT_SOCK=(12),
DT_WHT=(14)
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
extern int gSigwinch;
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
void ViWin_forwardBigWord(struct ViWin*  self  );
void ViWin_forwardBigWord2(struct ViWin*  self  );
void ViWin_backwardBigWord(struct ViWin*  self  );
void ViWin_backwardEndWord(struct ViWin*  self  );
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
void ViWin_writeFileAs(struct ViWin*  self  , char*  file_name  , _Bool binary_mode, _Bool update_current_file);
void ViWin_writedFlagOn_v6(struct ViWin*  self  );
_Bool ViWin_saveDotToFile_v6(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_resetForOpen(struct ViWin*  self  );
void Vi_openNewFile(struct Vi*  self  , char*  file_name  );
void Vi_editActiveFile(struct Vi*  self  , char*  file_name  , _Bool force);
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
void ViWin_search(struct ViWin*  self  , struct Vi*  nvi  , _Bool whole_word);
void ViWin_searchReverse(struct ViWin*  self  , struct Vi*  nvi  , _Bool whole_word);
void ViWin_searchWordOnCursor(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_searchWordOnCursorReverse(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_searchWordOnCursor2(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_searchWordOnCursorReverse2(struct ViWin*  self  , struct Vi*  nvi  );
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
int*  ViWin_getCompletionWord(struct ViWin*  self  , int* start_pos);
int*  ViWin_selector2(struct ViWin*  self  , struct list$1int$ph* lines);
void ViWin_resetCompletionState(struct ViWin*  self  );
struct ViWin*  ViWin_initialize_v13(struct ViWin*  self  , int y, int x, int width, int height, struct Vi*  vi  );
void ViWin_completion_v13(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_completionFileName_v13(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_completionNext(struct ViWin*  self  , struct Vi*  nvi  , _Bool prev);
void mreset_tty();
struct ViWin*  ViWin_initialize_v14(struct ViWin*  self  , int y, int x, int width, int height, struct Vi*  vi  );
_Bool ViWin_saveDotToFile_v14(struct ViWin*  self  , struct Vi*  nvi  );
_Bool ViWin_loadDotFromFile(struct ViWin*  self  , struct Vi*  nvi  );
int ViWin_getKey_v14(struct ViWin*  self  , _Bool head);
void ViWin_clearInputedKey_v14(struct ViWin*  self  );
void ViWin_saveInputedKeyOnTheMovingCursor_v14(struct ViWin*  self  );
void ViWin_saveInputedKey_v14(struct ViWin*  self  );
void ViWin_makeInputedKeyGVIndent_v14(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_makeInputedKeyGVDeIndent_v14(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_recordMacro(struct ViWin*  self  );
void ViWin_runMacro(struct ViWin*  self  );
struct Vi*  Vi_initialize_v14(struct Vi*  self  );
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
void ViWin_yankOnVerticalVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_deleteLinesOnVerticalVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_changeCaseVerticalVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_rewriteOnVerticalVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_indentVerticalVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_backIndentVerticalVisualMode(struct ViWin*  self  , struct Vi*  nvi  );
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
char* dirname(char* __path);
char* __xpg_basename(char* __path);
int closedir(struct __dirstream*  __dirp  );
struct __dirstream*  opendir(const char* __name) __attribute__ ((__malloc__)) ;
struct __dirstream*  fdopendir(int __fd) __attribute__ ((__malloc__)) ;
struct dirent*  readdir(struct __dirstream*  __dirp  );
struct dirent64*  readdir64(struct __dirstream*  __dirp  );
int readdir_r(struct __dirstream* __restrict  __dirp  , struct dirent* __restrict  __entry  , struct dirent** __restrict  __result  ) __attribute__ ((__deprecated__));
int readdir64_r(struct __dirstream* __restrict  __dirp  , struct dirent64* __restrict  __entry  , struct dirent64** __restrict  __result  ) __attribute__ ((__deprecated__));
void rewinddir(struct __dirstream*  __dirp  );
void seekdir(struct __dirstream*  __dirp  , long  int __pos);
long  int telldir(struct __dirstream*  __dirp  );
int dirfd(struct __dirstream*  __dirp  );
int scandir(const char* __restrict __dir, struct dirent*** __restrict  __namelist  , int (*__selector)(const struct dirent* ), int (*__cmp)(const struct dirent** ,const struct dirent** ));
int scandir64(const char* __restrict __dir, struct dirent64*** __restrict  __namelist  , int (*__selector)(const struct dirent64* ), int (*__cmp)(const struct dirent64** ,const struct dirent64** ));
int scandirat(int __dfd, const char* __restrict __dir, struct dirent*** __restrict  __namelist  , int (*__selector)(const struct dirent* ), int (*__cmp)(const struct dirent** ,const struct dirent** ));
int scandirat64(int __dfd, const char* __restrict __dir, struct dirent64*** __restrict  __namelist  , int (*__selector)(const struct dirent64* ), int (*__cmp)(const struct dirent64** ,const struct dirent64** ));
int alphasort(const struct dirent**  __e1  , const struct dirent**  __e2  ) __attribute__ ((__pure__)) ;
int alphasort64(const struct dirent64**  __e1  , const struct dirent64**  __e2  ) __attribute__ ((__pure__)) ;
long  int  getdirentries(int __fd, char* __restrict __buf, unsigned long  int  __nbytes  , long  int* __restrict  __basep  );
long  int  getdirentries64(int __fd, char* __restrict __buf, unsigned long  int  __nbytes  , long  int* __restrict  __basep  );
int versionsort(const struct dirent**  __e1  , const struct dirent**  __e2  ) __attribute__ ((__pure__)) ;
int versionsort64(const struct dirent64**  __e1  , const struct dirent64**  __e2  ) __attribute__ ((__pure__)) ;
long  int  getdents64(int __fd, void* __buffer, unsigned long  int  __length  );
static _Bool is_directory_path(char* path);
static char*  parse_sp_path(char* command_string);
static void skip_command_spaces(char** p);
static _Bool parse_command_name(char* command_string, char* short_name, char* long_name, _Bool* force);
static char*  parse_edit_path(char* command_string, _Bool* force);
static _Bool get_visual_command_range(struct Vi*  nvi  , struct ViWin*  self  , int* head, int* tail);
static _Bool parse_ex_address(char** p, struct Vi*  nvi  , struct ViWin*  self  , int* value);
static int list$1int$ph_length(struct list$1int$ph* self);
static _Bool parse_ex_range(char** p, struct Vi*  nvi  , struct ViWin*  self  , int* range_head, int* range_tail, _Bool* has_range);
static char*  parse_filter_command(char* command_string, struct Vi*  nvi  , struct ViWin*  self  , int* range_head, int* range_tail);
static char*  parse_shell_command(char* command_string);
static _Bool parse_write_quit_command(char* command_string, _Bool* write, _Bool* quit, _Bool* force);
static char*  parse_write_path(char* command_string, _Bool* force);
static char*  parse_saveas_path(char* command_string, _Bool* force);
static int parse_set_paste_command(char* command_string);
static void run_shell_command(char*  command  );
static struct list$1char$ph* run_filter_command_with_input(char*  command  , struct list$1char$ph* input_lines);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static void append_command_string(char* command_string, char* str);
static void remember_command_line_for_history(struct Vi*  nvi  );
static void stop_command_history_browsing(struct Vi*  nvi  );
static int list$1char$ph_length(struct list$1char$ph* self);
static void browse_command_history_prev(struct Vi*  nvi  );
static char*  list$1char$ph_item(struct list$1char$ph* self, int position, char*  default_value  );
static void browse_command_history_next(struct Vi*  nvi  );
static void add_command_history(struct Vi*  nvi  );
static _Bool parse_substitute_token(char** p, char* buf, int buf_size);
static _Bool parse_substitute_command(char* command_string, struct Vi*  nvi  , struct ViWin*  self  , int* range_head, int* range_tail, char* match, int match_size, char* replace, int replace_size, _Bool* global);
static _Bool parse_delete_command(char* command_string, struct Vi*  nvi  , struct ViWin*  self  , int* range_head, int* range_tail);
static _Bool parse_goto_line_command(char* command_string, struct Vi*  nvi  , struct ViWin*  self  , int* line);
static _Bool parse_copy_move_destination(char** p, struct Vi*  nvi  , struct ViWin*  self  , int* dest);
static _Bool parse_yank_command(char* command_string, struct Vi*  nvi  , struct ViWin*  self  , int* range_head, int* range_tail);
static _Bool parse_copy_command(char* command_string, struct Vi*  nvi  , struct ViWin*  self  , int* range_head, int* range_tail, int* dest);
static _Bool parse_move_command(char* command_string, struct Vi*  nvi  , struct ViWin*  self  , int* range_head, int* range_tail, int* dest);
static struct list$1int$ph* clone_line_range(struct ViWin*  self  , int head, int tail);
static struct list$1int$ph* list$1int$ph_initialize(struct list$1int$ph* self);
static void list$1int$ph$p_finalize(struct list$1int$ph* self);
static void list_item$1int$ph$p_finalize(struct list_item$1int$ph* self);
static struct list$1int$ph* list$1int$ph_push_back(struct list$1int$ph* self, int*  item  );
static int*  list$1int$ph_item(struct list$1int$ph* self, int position, int*  default_value  );
static char*  replace_first_plain(char*  line  , char* match, char* replace);
void ViWin_commandModeView(struct ViWin*  self  , struct Vi*  nvi  );
char*  ViWin_selector(struct ViWin*  self  , struct list$1char$ph* lines);
char*  ViWin_selectFileCompletionCandidate(struct ViWin*  self  , char*  word  );
static int lambda1(char*  left  , char*  right  );
static struct list$1char$ph* list$1char$ph_sort(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_merge_sort_with_lambda(struct list$1char$ph* self, int (*compare)(char* ,char* ));
static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  );
static struct list$1char$ph* list$1char$ph_merge_list_with_lambda(struct list$1char$ph* left, struct list$1char$ph* right, int (*compare)(char* ,char* ));
void ViWin_fileCompetion(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_commandModeInput(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_view_v12(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_input_v12(struct ViWin*  self  , struct Vi*  nvi  );
_Bool ViWin_subAllTextsFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  );
static struct list$1int$ph* list$1int$ph_replace(struct list$1int$ph* self, int position, int*  item  );
static struct list$1int$* list$1int$_replace(struct list$1int$* self, int position, int item);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
_Bool ViWin_deleteLinesFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  );
static struct list$1int$ph* list$1int$ph_reset(struct list$1int$ph* self);
static struct list$1int$ph* list$1int$ph_delete(struct list$1int$ph* self, int head, int tail);
static struct list$1int$* list$1int$_delete(struct list$1int$* self, int head, int tail);
static struct list$1int$* list$1int$_reset(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
_Bool ViWin_yankLinesFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  );
static void list$1int$ph_finalize(struct list$1int$ph* self);
_Bool ViWin_copyLinesFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  );
static struct list$1int$ph* list$1int$ph_insert(struct list$1int$ph* self, int position, int*  item  );
static struct list$1int$* list$1int$_insert(struct list$1int$* self, int position, int item);
_Bool ViWin_moveLinesFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_filterTextsFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_filterVerticalTextsFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  );
void Vi_enterComandMode(struct Vi*  self  );
void Vi_exitFromComandMode(struct Vi*  self  );
static int list$1ViWin$ph_length(struct list$1ViWin$ph* self);
static void lambda2(struct Vi*  self  , int key);
struct Vi*  Vi_initialize_v12(struct Vi*  self  );
static void list$1char$ph_finalize(struct list$1char$ph* self);
static struct list$1lambda$* list$1lambda$_replace(struct list$1lambda$* self, int position, void (*item)(struct Vi* ,int));
static struct list$1lambda$* list$1lambda$_push_back(struct list$1lambda$* self, void (*item)(struct Vi* ,int));
static void Vi_finalize(struct Vi*  self  );
static void list$1ViWin$ph$p_finalize(struct list$1ViWin$ph* self);
static void list_item$1ViWin$ph$p_finalize(struct list_item$1ViWin$ph* self);
static void ViWin_finalize(struct ViWin*  self  );
static void list$1int$$p_finalize(struct list$1int$* self);
static void tuple3$3int$int$int$$p_finalize(struct tuple3$3int$int$int$* self);
static void list$1tuple3$3int$int$int$$ph$p_finalize(struct list$1tuple3$3int$int$int$$ph* self);
static void list_item$1tuple3$3int$int$int$$ph$p_finalize(struct list_item$1tuple3$3int$int$int$$ph* self);
static void list$1list$1int$ph$ph$p_finalize(struct list$1list$1int$ph$ph* self);
static void list_item$1list$1int$ph$ph$p_finalize(struct list_item$1list$1int$ph$ph* self);
static void map$2int$list$1list$1int$$ph$ph$p_finalize(struct map$2int$list$1list$1int$$ph$ph* self);
static void list$1list$1int$$ph$p_finalize(struct list$1list$1int$$ph* self);
static void list_item$1list$1int$$ph$p_finalize(struct list_item$1list$1int$$ph* self);
static void map$2int$tuple3$3int$int$int$$ph$p_finalize(struct map$2int$tuple3$3int$int$int$$ph* self);
static void list$1lambda$$p_finalize(struct list$1lambda$* self);
static void list_item$1lambda$$p_finalize(struct list_item$1lambda$* self);
static void map$2int$list$1int$ph$ph$p_finalize(struct map$2int$list$1int$ph$ph* self);
static void map$2int$int$$p_finalize(struct map$2int$int$* self);
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
static _Bool is_directory_path(char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_directory_path"; neo_current_frame = &fr;
    struct __dirstream*  dir  ;
    memset(&dir, 0, sizeof(dir));
    dir=opendir(path);
    if(dir) {
        closedir(dir);
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    neo_current_frame = fr.prev;
}

static char*  parse_sp_path(char* command_string)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_sp_path"; neo_current_frame = &fr;
    char* p;
    int command_len;
    char*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    char* tail;
    memset(&p, 0, sizeof(p));
    memset(&command_len, 0, sizeof(command_len));
    memset(&tail, 0, sizeof(tail));
    p=command_string;
    while(*p==32||*p==9) {
        p++;
    }
    command_len=0;
    if(strncmp(p,"sp",2)==0&&(p[2]==0||p[2]==32||p[2]==9)) {
        command_len=2;
    }
    else if(strncmp(p,"split",5)==0&&(p[5]==0||p[5]==32||p[5]==9)) {
        command_len=5;
    }
    else {
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "12command.nc", 33, 1);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 33, 2));
        return __result_obj__0;
    }
    p+=command_len;
    while(*p==32||*p==9) {
        p++;
    }
    if(*p==0) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","12command.nc",42))), "12command.nc", 42, 3);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 42, 4));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 42, 5));
        return __result_obj__0;
    }
    tail=command_string+strlen(command_string);
    while(tail>p&&(tail[-1]==32||tail[-1]==9)) {
        tail--;
    }
    if(tail<=p) {
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "12command.nc", 51, 6);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 51, 7));
        return __result_obj__0;
    }
    char buf[tail-p+1];
    memset(&buf, 0, sizeof(buf));
    memcpy(buf,p,tail-p);
    buf[tail-p]=0;
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(buf,"12command.nc",58))), "12command.nc", 58, 8);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 58, 9));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 58, 10));
    return __result_obj__0;
}

static void skip_command_spaces(char** p)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "skip_command_spaces"; neo_current_frame = &fr;
    while(**p==32||**p==9) {
        (*p)++;
    }
    neo_current_frame = fr.prev;
}

static _Bool parse_command_name(char* command_string, char* short_name, char* long_name, _Bool* force)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_command_name"; neo_current_frame = &fr;
    char* p;
    int len;
    memset(&p, 0, sizeof(p));
    memset(&len, 0, sizeof(len));
    p=command_string;
    skip_command_spaces(&p);
    len=0;
    if(short_name!=((void*)0)&&strncmp(p,short_name,strlen(short_name))==0) {
        len=strlen(short_name);
    }
    else if(long_name!=((void*)0)&&strncmp(p,long_name,strlen(long_name))==0) {
        len=strlen(long_name);
    }
    else {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    p+=len;
    if(force!=((void*)0)) {
        *force=(_Bool)0;
        if(*p==33) {
            *force=(_Bool)1;
            p++;
        }
    }
    skip_command_spaces(&p);
        neo_current_frame = fr.prev;
    return *p==0;
    neo_current_frame = fr.prev;
}

static char*  parse_edit_path(char* command_string, _Bool* force)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_edit_path"; neo_current_frame = &fr;
    char* p;
    int command_len;
    char*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    char* tail;
    memset(&p, 0, sizeof(p));
    memset(&command_len, 0, sizeof(command_len));
    memset(&tail, 0, sizeof(tail));
    p=command_string;
    skip_command_spaces(&p);
    command_len=0;
    if(strncmp(p,"e",1)==0&&(p[1]==0||p[1]==33||p[1]==32||p[1]==9)) {
        command_len=1;
    }
    else if(strncmp(p,"edit",4)==0&&(p[4]==0||p[4]==33||p[4]==32||p[4]==9)) {
        command_len=4;
    }
    else {
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "12command.nc", 113, 11);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 113, 12));
        return __result_obj__0;
    }
    p+=command_len;
    *force=(_Bool)0;
    if(*p==33) {
        *force=(_Bool)1;
        p++;
    }
    skip_command_spaces(&p);
    if(*p==0) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","12command.nc",126))), "12command.nc", 126, 13);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 126, 14));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 126, 15));
        return __result_obj__0;
    }
    tail=command_string+strlen(command_string);
    while(tail>p&&(tail[-1]==32||tail[-1]==9)) {
        tail--;
    }
    char buf[tail-p+1];
    memset(&buf, 0, sizeof(buf));
    memcpy(buf,p,tail-p);
    buf[tail-p]=0;
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(buf,"12command.nc",138))), "12command.nc", 138, 16);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 138, 17));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 138, 18));
    return __result_obj__0;
}

static _Bool get_visual_command_range(struct Vi*  nvi  , struct ViWin*  self  , int* head, int* tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_visual_command_range"; neo_current_frame = &fr;
    if(nvi->modeBeforeCommand==(2)) {
        *head=self->visualModeHead;
        *tail=self->scroll+self->cursorY;
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(nvi->modeBeforeCommand==(5)) {
        *head=self->visualModeHorizonHeadScroll+self->visualModeHorizonHeadY;
        *tail=self->scroll+self->cursorY;
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(nvi->modeBeforeCommand==(6)) {
        *head=self->visualModeVerticalHeadY;
        *tail=self->scroll+self->cursorY;
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

static _Bool parse_ex_address(char** p, struct Vi*  nvi  , struct ViWin*  self  , int* value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_ex_address"; neo_current_frame = &fr;
    int head;
    int tail;
    int tmp;
    memset(&head, 0, sizeof(head));
    memset(&tail, 0, sizeof(tail));
    memset(&tmp, 0, sizeof(tmp));
    if(**p==46) {
        *value=self->scroll+self->cursorY;
        (*p)++;
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(**p==36) {
        *value=list$1int$ph_length(self->texts)-1;
        (*p)++;
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(**p>=48&&**p<=57) {
        *value=atoi(*p)-1;
        while(**p>=48&&**p<=57) {
            (*p)++;
        }
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(**p==39&&((*p)[1]==60||(*p)[1]==62)) {
        head=0;
        tail=0;
        if(!get_visual_command_range(nvi,self,&head,&tail)) {
                        neo_current_frame = fr.prev;
            return (_Bool)0;
        }
        if(head>tail) {
            tmp=head;
            head=tail;
            tail=tmp;
        }
        *value=(((*p)[1]==60)?(head):(tail));
        *p+=2;
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

static int list$1int$ph_length(struct list$1int$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
            neo_current_frame = fr.prev;
}

static _Bool parse_ex_range(char** p, struct Vi*  nvi  , struct ViWin*  self  , int* range_head, int* range_tail, _Bool* has_range)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_ex_range"; neo_current_frame = &fr;
    int current_line;
    int head;
    int tail;
    memset(&current_line, 0, sizeof(current_line));
    memset(&head, 0, sizeof(head));
    memset(&tail, 0, sizeof(tail));
    current_line=self->scroll+self->cursorY;
    if(current_line<0) {
        current_line=0;
    }
    if(current_line>=list$1int$ph_length(self->texts)) {
        current_line=list$1int$ph_length(self->texts)-1;
    }
    *range_head=current_line;
    *range_tail=current_line;
    *has_range=(_Bool)0;
    skip_command_spaces(p);
    if(**p==37) {
        *range_head=0;
        *range_tail=list$1int$ph_length(self->texts)-1;
        *has_range=(_Bool)1;
        (*p)++;
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    head=0;
    if(!parse_ex_address(p,nvi,self,&head)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    *has_range=(_Bool)1;
    *range_head=head;
    *range_tail=head;
    skip_command_spaces(p);
    if(**p==44) {
        tail=0;
        (*p)++;
        skip_command_spaces(p);
        if(!parse_ex_address(p,nvi,self,&tail)) {
                        neo_current_frame = fr.prev;
            return (_Bool)0;
        }
        *range_tail=tail;
    }
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static char*  parse_filter_command(char* command_string, struct Vi*  nvi  , struct ViWin*  self  , int* range_head, int* range_tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_filter_command"; neo_current_frame = &fr;
    char* p;
    _Bool has_range;
    char*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    memset(&p, 0, sizeof(p));
    memset(&has_range, 0, sizeof(has_range));
    p=command_string;
    has_range=(_Bool)0;
    if(!parse_ex_range(&p,nvi,self,range_head,range_tail,&has_range)||!has_range) {
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "12command.nc", 260, 19);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 260, 20));
        return __result_obj__0;
    }
    skip_command_spaces(&p);
    if(*p!=33) {
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "12command.nc", 265, 21);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 265, 22));
        return __result_obj__0;
    }
    p++;
    skip_command_spaces(&p);
    if(*p==0) {
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "12command.nc", 272, 23);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 272, 24));
        return __result_obj__0;
    }
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p,"12command.nc",275))), "12command.nc", 275, 25);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 275, 26));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 275, 27));
    return __result_obj__0;
}

static char*  parse_shell_command(char* command_string)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_shell_command"; neo_current_frame = &fr;
    char* p;
    char*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    memset(&p, 0, sizeof(p));
    p=command_string;
    skip_command_spaces(&p);
    if(*p!=33) {
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "12command.nc", 284, 28);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 284, 29));
        return __result_obj__0;
    }
    p++;
    skip_command_spaces(&p);
    if(*p==0) {
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "12command.nc", 291, 30);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 291, 31));
        return __result_obj__0;
    }
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p,"12command.nc",294))), "12command.nc", 294, 32);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 294, 33));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 294, 34));
    return __result_obj__0;
}

static _Bool parse_write_quit_command(char* command_string, _Bool* write, _Bool* quit, _Bool* force)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_write_quit_command"; neo_current_frame = &fr;
    *write=(_Bool)0;
    *quit=(_Bool)0;
    *force=(_Bool)0;
    if(parse_command_name(command_string,"w","write",force)) {
        *write=(_Bool)1;
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_command_name(command_string,"q","quit",force)) {
        *quit=(_Bool)1;
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(parse_command_name(command_string,"wq",((void*)0),force)||parse_command_name(command_string,"x",((void*)0),force)||parse_command_name(command_string,"xit",((void*)0),force)) {
        *write=(_Bool)1;
        *quit=(_Bool)1;
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

static char*  parse_write_path(char* command_string, _Bool* force)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_write_path"; neo_current_frame = &fr;
    char* p;
    int command_len;
    char*  __result_obj__0  ;
    char* tail;
    void* __right_value0 = (void*)0;
    memset(&p, 0, sizeof(p));
    memset(&command_len, 0, sizeof(command_len));
    memset(&tail, 0, sizeof(tail));
    p=command_string;
    skip_command_spaces(&p);
    command_len=0;
    if(strncmp(p,"w",1)==0&&(p[1]==0||p[1]==33||p[1]==32||p[1]==9)) {
        command_len=1;
    }
    else if(strncmp(p,"write",5)==0&&(p[5]==0||p[5]==33||p[5]==32||p[5]==9)) {
        command_len=5;
    }
    else {
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "12command.nc", 336, 35);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 336, 36));
        return __result_obj__0;
    }
    p+=command_len;
    *force=(_Bool)0;
    if(*p==33) {
        *force=(_Bool)1;
        p++;
    }
    skip_command_spaces(&p);
    if(*p==0) {
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "12command.nc", 348, 37);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 348, 38));
        return __result_obj__0;
    }
    tail=command_string+strlen(command_string);
    while(tail>p&&(tail[-1]==32||tail[-1]==9)) {
        tail--;
    }
    char buf[tail-p+1];
    memset(&buf, 0, sizeof(buf));
    memcpy(buf,p,tail-p);
    buf[tail-p]=0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(buf,"12command.nc",360))), "12command.nc", 360, 39);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 360, 40));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 360, 41));
    return __result_obj__0;
}

static char*  parse_saveas_path(char* command_string, _Bool* force)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_saveas_path"; neo_current_frame = &fr;
    char* p;
    char*  __result_obj__0  ;
    char* tail;
    void* __right_value0 = (void*)0;
    memset(&p, 0, sizeof(p));
    memset(&tail, 0, sizeof(tail));
    p=command_string;
    skip_command_spaces(&p);
    if(strncmp(p,"saveas",6)!=0||(p[6]!=0&&p[6]!=33&&p[6]!=32&&p[6]!=9)) {
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "12command.nc", 369, 42);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 369, 43));
        return __result_obj__0;
    }
    p+=6;
    *force=(_Bool)0;
    if(*p==33) {
        *force=(_Bool)1;
        p++;
    }
    skip_command_spaces(&p);
    if(*p==0) {
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "12command.nc", 381, 44);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 381, 45));
        return __result_obj__0;
    }
    tail=command_string+strlen(command_string);
    while(tail>p&&(tail[-1]==32||tail[-1]==9)) {
        tail--;
    }
    char buf[tail-p+1];
    memset(&buf, 0, sizeof(buf));
    memcpy(buf,p,tail-p);
    buf[tail-p]=0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(buf,"12command.nc",393))), "12command.nc", 393, 46);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 393, 47));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 393, 48));
    return __result_obj__0;
}

static int parse_set_paste_command(char* command_string)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_set_paste_command"; neo_current_frame = &fr;
    if(parse_command_name(command_string,((void*)0),"set paste",((void*)0))||parse_command_name(command_string,((void*)0),"paste",((void*)0))) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else if(parse_command_name(command_string,((void*)0),"set nopaste",((void*)0))||parse_command_name(command_string,((void*)0),"nopaste",((void*)0))) {
                neo_current_frame = fr.prev;
        return -1;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

static void run_shell_command(char*  command  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "run_shell_command"; neo_current_frame = &fr;
    int c;
    memset(&c, 0, sizeof(c));
    endwin();
    (void)system(command);
    printf("\nPress ENTER to continue");
    fflush(stdout);
    c=0;
    while((c=getchar())!=10&&c!=(-1)) {
    }
    (command = come_decrement_ref_count(command, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 424, 49));
    neo_current_frame = fr.prev;
}

static struct list$1char$ph* run_filter_command_with_input(char*  command  , struct list$1char$ph* input_lines)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "run_filter_command_with_input"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  input_path  ;
    char*  output_path  ;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct _IO_FILE*  input_fp  ;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* _o2_saved_1;
    char*  it  ;
    struct _IO_FILE*  output_fp  ;
    int len;
    memset(&input_path, 0, sizeof(input_path));
    memset(&output_path, 0, sizeof(output_path));
    memset(&result, 0, sizeof(result));
    memset(&input_fp, 0, sizeof(input_fp));
    memset(&_o2_saved_1, 0, sizeof(_o2_saved_1));
    memset(&it, 0, sizeof(it));
    memset(&output_fp, 0, sizeof(output_fp));
    memset(&len, 0, sizeof(len));
    input_path=(char* )come_increment_ref_count(xsprintf("/tmp/vin-filter-input-%d",getpid()), "12command.nc", 426, 50);
    __right_value0 = (void*)0;
    output_path=(char* )come_increment_ref_count(xsprintf("/tmp/vin-filter-output-%d",getpid()), "12command.nc", 427, 51);
    __right_value0 = (void*)0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "12command.nc", 428, 52, "struct list$1char$ph*"), "12command.nc", 428, 58)), "12command.nc", 428, 59);
    input_fp=fopen(input_path,"w");
    if(input_fp==((void*)0)) {
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "12command.nc", 432, 60);
        (command = come_decrement_ref_count(command, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 432, 61));
        (input_path = come_decrement_ref_count(input_path, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 432, 62));
        (output_path = come_decrement_ref_count(output_path, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 432, 63));
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "12command.nc}", 432, 64);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "12command.nc}", 432, 65);
        return __result_obj__0;
    }
    for(_o2_saved_1=input_lines,it=list$1char$ph_begin(_o2_saved_1)    ;!list$1char$ph_end(_o2_saved_1);it=list$1char$ph_next(_o2_saved_1)){
        fprintf(input_fp,"%s\n",it);
    }
    fclose(input_fp);
    __right_value0 = (void*)0;
    (void)system(((char* )(__right_value0=xsprintf("(%s) < '%s' > '%s'",command,input_path,output_path))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 440, 66));
    output_fp=fopen(output_path,"r");
    if(output_fp!=((void*)0)) {
        char line[4096];
        memset(&line, 0, sizeof(line));
        while(fgets(line,4096,output_fp)!=((void*)0)) {
            len=strlen(line);
            if(len>0&&line[len-1]==10) {
                line[len-1]=0;
            }
            __right_value0 = (void*)0;
            list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(line,"12command.nc",452), "12command.nc", 452, 81));
        }
        fclose(output_fp);
    }
    unlink(input_path);
    unlink(output_path);
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "12command.nc", 461, 82);
    (command = come_decrement_ref_count(command, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 461, 83));
    (input_path = come_decrement_ref_count(input_path, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 461, 84));
    (output_path = come_decrement_ref_count(output_path, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 461, 85));
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "12command.nc}", 461, 86);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "12command.nc}", 461, 87);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 53);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 448, 56);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 448, 57);
    return __result_obj__0;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 55);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 54));
    }
            neo_current_frame = fr.prev;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_0  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->it=self->head;
    if(self->it) {
                __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_0,0,sizeof(char* ));
        __result_obj__0 = result_0;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static char*  list$1char$ph_next(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_1  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->it=self->it->next;
    if(self->it) {
                __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_1,0,sizeof(char* ));
        __result_obj__0 = result_1;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj1  ;
    struct list_item$1char$ph* litem_2;
    char*  __dec_obj2  ;
    struct list_item$1char$ph* litem_3;
    char*  __dec_obj3  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_2, 0, sizeof(litem_2));
    memset(&litem_3, 0, sizeof(litem_3));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1615, 67));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1619, 68, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1619, 69);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj1=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 71);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1623, 70);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1629, 72, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1629, 73);
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj2=litem_2->item,
        litem_2->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 75);
        __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1633, 74);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1639, 76, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1639, 77);
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj3=litem_3->item,
        litem_3->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 79);
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1643, 78);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1651, 80));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void append_command_string(char* command_string, char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "append_command_string"; neo_current_frame = &fr;
    int len;
    memset(&len, 0, sizeof(len));
    len=strlen(command_string);
    if(len>=127) {
                neo_current_frame = fr.prev;
        return;
    }
    strncat(command_string,str,127-len);
    neo_current_frame = fr.prev;
}

static void remember_command_line_for_history(struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "remember_command_line_for_history"; neo_current_frame = &fr;
    if(!nvi->commandHistoryBrowsing) {
        strncpy(nvi->commandStringBeforeHistory,nvi->commandString,128);
        nvi->commandHistoryBrowsing=(_Bool)1;
    }
    neo_current_frame = fr.prev;
}

static void stop_command_history_browsing(struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "stop_command_history_browsing"; neo_current_frame = &fr;
    nvi->commandHistoryBrowsing=(_Bool)0;
    nvi->commandHistoryIndex=list$1char$ph_length(nvi->commandHistory);
    neo_current_frame = fr.prev;
}

static int list$1char$ph_length(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
        neo_current_frame = fr.prev;
}

static void browse_command_history_prev(struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "browse_command_history_prev"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    char*  command  ;
    memset(&command, 0, sizeof(command));
    if(list$1char$ph_length(nvi->commandHistory)==0) {
                neo_current_frame = fr.prev;
        return;
    }
    remember_command_line_for_history(nvi);
    if(nvi->commandHistoryIndex<=0) {
        nvi->commandHistoryIndex=0;
    }
    else {
        nvi->commandHistoryIndex--;
    }
    command=(char* )come_increment_ref_count(list$1char$ph_item(nvi->commandHistory,nvi->commandHistoryIndex,((char* )(__right_value0=__builtin_string("","12command.nc",504)))), "12command.nc", 504, 94);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 504, 95));
    strncpy(nvi->commandString,command,128);
    (command = come_decrement_ref_count(command, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 508, 96));
    neo_current_frame = fr.prev;
}

static char*  list$1char$ph_item(struct list$1char$ph* self, int position, char*  default_value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_item"; neo_current_frame = &fr;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 1747, 88);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 1747, 89));
        return __result_obj__0;
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 1758, 90);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 1758, 91));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
        __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 1764, 92);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 1764, 93));
    return __result_obj__0;
}

static void browse_command_history_next(struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "browse_command_history_next"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    char*  command  ;
    memset(&command, 0, sizeof(command));
    if(!nvi->commandHistoryBrowsing) {
                neo_current_frame = fr.prev;
        return;
    }
    if(nvi->commandHistoryIndex<list$1char$ph_length(nvi->commandHistory)-1) {
        nvi->commandHistoryIndex++;
        command=(char* )come_increment_ref_count(list$1char$ph_item(nvi->commandHistory,nvi->commandHistoryIndex,((char* )(__right_value0=__builtin_string("","12command.nc",516)))), "12command.nc", 516, 97);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 516, 98));
        strncpy(nvi->commandString,command,128);
        (command = come_decrement_ref_count(command, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 523, 99));
    }
    else {
        strncpy(nvi->commandString,nvi->commandStringBeforeHistory,128);
        stop_command_history_browsing(nvi);
    }
    neo_current_frame = fr.prev;
}

static void add_command_history(struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "add_command_history"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    if(nvi->commandString[0]==0) {
                neo_current_frame = fr.prev;
        return;
    }
    list$1char$ph_push_back(nvi->commandHistory,(char* )come_increment_ref_count(__builtin_string(nvi->commandString,"12command.nc",531), "12command.nc", 531, 100));
    stop_command_history_browsing(nvi);
    strncpy(nvi->commandStringBeforeHistory,"",128);
    neo_current_frame = fr.prev;
}

static _Bool parse_substitute_token(char** p, char* buf, int buf_size)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_substitute_token"; neo_current_frame = &fr;
    int len;
    memset(&len, 0, sizeof(len));
    len=0;
    while(**p!=0&&**p!=47) {
        if(**p==92&&(*p)[1]!=0) {
            (*p)++;
        }
        if(len<buf_size-1) {
            buf[len++]=**p;
        }
        (*p)++;
    }
    buf[len]=0;
    if(**p!=47) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    (*p)++;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static _Bool parse_substitute_command(char* command_string, struct Vi*  nvi  , struct ViWin*  self  , int* range_head, int* range_tail, char* match, int match_size, char* replace, int replace_size, _Bool* global)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_substitute_command"; neo_current_frame = &fr;
    char* p;
    _Bool has_range;
    memset(&p, 0, sizeof(p));
    memset(&has_range, 0, sizeof(has_range));
    p=command_string;
    has_range=(_Bool)0;
    *global=(_Bool)0;
    if(!parse_ex_range(&p,nvi,self,range_head,range_tail,&has_range)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    skip_command_spaces(&p);
    if(*p!=115) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    p++;
    if(*p!=47) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    p++;
    if(!parse_substitute_token(&p,match,match_size)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    if(!parse_substitute_token(&p,replace,replace_size)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    while(*p==32||*p==9) {
        p++;
    }
    while(*p!=0) {
        if(*p==103) {
            *global=(_Bool)1;
        }
        else if(*p!=32&&*p!=9) {
                        neo_current_frame = fr.prev;
            return (_Bool)0;
        }
        p++;
    }
        neo_current_frame = fr.prev;
    return match[0]!=0;
    neo_current_frame = fr.prev;
}

static _Bool parse_delete_command(char* command_string, struct Vi*  nvi  , struct ViWin*  self  , int* range_head, int* range_tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_delete_command"; neo_current_frame = &fr;
    char* p;
    _Bool has_range;
    memset(&p, 0, sizeof(p));
    memset(&has_range, 0, sizeof(has_range));
    p=command_string;
    has_range=(_Bool)0;
    if(!parse_ex_range(&p,nvi,self,range_head,range_tail,&has_range)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    skip_command_spaces(&p);
    if(strncmp(p,"d",1)==0&&(p[1]==0||p[1]==32||p[1]==9)) {
        p++;
    }
    else if(strncmp(p,"delete",6)==0&&(p[6]==0||p[6]==32||p[6]==9)) {
        p+=6;
    }
    else {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    skip_command_spaces(&p);
        neo_current_frame = fr.prev;
    return *p==0;
    neo_current_frame = fr.prev;
}

static _Bool parse_goto_line_command(char* command_string, struct Vi*  nvi  , struct ViWin*  self  , int* line)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_goto_line_command"; neo_current_frame = &fr;
    char* p;
    _Bool has_range;
    int head;
    int tail;
    memset(&p, 0, sizeof(p));
    memset(&has_range, 0, sizeof(has_range));
    memset(&head, 0, sizeof(head));
    memset(&tail, 0, sizeof(tail));
    p=command_string;
    has_range=(_Bool)0;
    head=0;
    tail=0;
    if(!parse_ex_range(&p,nvi,self,&head,&tail,&has_range)||!has_range) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    skip_command_spaces(&p);
    if(*p!=0||head!=tail) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    *line=head;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static _Bool parse_copy_move_destination(char** p, struct Vi*  nvi  , struct ViWin*  self  , int* dest)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_copy_move_destination"; neo_current_frame = &fr;
    skip_command_spaces(p);
    if(!parse_ex_address(p,nvi,self,dest)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    skip_command_spaces(p);
        neo_current_frame = fr.prev;
    return **p==0;
    neo_current_frame = fr.prev;
}

static _Bool parse_yank_command(char* command_string, struct Vi*  nvi  , struct ViWin*  self  , int* range_head, int* range_tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_yank_command"; neo_current_frame = &fr;
    char* p;
    _Bool has_range;
    memset(&p, 0, sizeof(p));
    memset(&has_range, 0, sizeof(has_range));
    p=command_string;
    has_range=(_Bool)0;
    if(!parse_ex_range(&p,nvi,self,range_head,range_tail,&has_range)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    skip_command_spaces(&p);
    if(strncmp(p,"y",1)==0&&(p[1]==0||p[1]==32||p[1]==9)) {
        p++;
    }
    else if(strncmp(p,"yank",4)==0&&(p[4]==0||p[4]==32||p[4]==9)) {
        p+=4;
    }
    else {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    skip_command_spaces(&p);
        neo_current_frame = fr.prev;
    return *p==0;
    neo_current_frame = fr.prev;
}

static _Bool parse_copy_command(char* command_string, struct Vi*  nvi  , struct ViWin*  self  , int* range_head, int* range_tail, int* dest)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_copy_command"; neo_current_frame = &fr;
    char* p;
    _Bool has_range;
    memset(&p, 0, sizeof(p));
    memset(&has_range, 0, sizeof(has_range));
    p=command_string;
    has_range=(_Bool)0;
    if(!parse_ex_range(&p,nvi,self,range_head,range_tail,&has_range)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    skip_command_spaces(&p);
    if(strncmp(p,"t",1)==0) {
        p++;
    }
    else if(strncmp(p,"co",2)==0&&!(xiswalpha(p[2])||p[2]==95)) {
        p+=2;
    }
    else if(strncmp(p,"copy",4)==0&&!(xiswalpha(p[4])||p[4]==95)) {
        p+=4;
    }
    else {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
        neo_current_frame = fr.prev;
    return parse_copy_move_destination(&p,nvi,self,dest);
    neo_current_frame = fr.prev;
}

static _Bool parse_move_command(char* command_string, struct Vi*  nvi  , struct ViWin*  self  , int* range_head, int* range_tail, int* dest)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_move_command"; neo_current_frame = &fr;
    char* p;
    _Bool has_range;
    memset(&p, 0, sizeof(p));
    memset(&has_range, 0, sizeof(has_range));
    p=command_string;
    has_range=(_Bool)0;
    if(!parse_ex_range(&p,nvi,self,range_head,range_tail,&has_range)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    skip_command_spaces(&p);
    if(strncmp(p,"m",1)==0) {
        p++;
    }
    else if(strncmp(p,"move",4)==0&&!(xiswalpha(p[4])||p[4]==95)) {
        p+=4;
    }
    else {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
        neo_current_frame = fr.prev;
    return parse_copy_move_destination(&p,nvi,self,dest);
    neo_current_frame = fr.prev;
}

static struct list$1int$ph* clone_line_range(struct ViWin*  self  , int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "clone_line_range"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$ph* result;
    int i;
    void* __right_value2 = (void*)0;
    struct list$1int$ph* __result_obj__0;
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    result=(struct list$1int$ph*)come_increment_ref_count(list$1int$ph_initialize((struct list$1int$ph*)come_increment_ref_count((struct list$1int$ph*)come_calloc(1, sizeof(struct list$1int$ph)*(1), "12command.nc", 748, 101, "struct list$1int$ph*"), "12command.nc", 748, 107)), "12command.nc", 748, 108);
    for(i=head    ;i<=tail;i++){
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1int$ph_push_back(result,(int* )come_increment_ref_count((int* )come_memdup(((int* )(__right_value1=list$1int$ph_item(self->texts,i,((int* )(__right_value0=__builtin_wstring("","12command.nc",751)))))), "12command.nc", 751, 129, "int* "), "12command.nc", 751, 130));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 751, 131));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 751, 132));
    }
        __result_obj__0 = (struct list$1int$ph*)come_increment_ref_count(result, "12command.nc", 754, 133);
    come_call_finalizer(list$1int$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "12command.nc}", 754, 134);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "12command.nc}", 754, 135);
    return __result_obj__0;
}

static struct list$1int$ph* list$1int$ph_initialize(struct list$1int$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_initialize"; neo_current_frame = &fr;
    struct list$1int$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 102);
    come_call_finalizer(list$1int$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 750, 105);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 750, 106);
    return __result_obj__0;
}

static void list$1int$ph$p_finalize(struct list$1int$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1int$ph* it;
    struct list_item$1int$ph* prev_it;
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
        come_call_finalizer(list_item$1int$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 104);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1int$ph$p_finalize(struct list_item$1int$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1int$ph$p_finalize", 2, 103));
    }
            neo_current_frame = fr.prev;
}

static struct list$1int$ph* list$1int$ph_push_back(struct list$1int$ph* self, int*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_push_back"; neo_current_frame = &fr;
    struct list$1int$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$ph* litem;
    int*  __dec_obj4  ;
    struct list_item$1int$ph* litem_4;
    int*  __dec_obj5  ;
    struct list_item$1int$ph* litem_5;
    int*  __dec_obj6  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_4, 0, sizeof(litem_4));
    memset(&litem_5, 0, sizeof(litem_5));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1615, 109));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1619, 110, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1619, 111);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj4=litem->item,
        litem->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 113);
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1623, 112);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1629, 114, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1629, 115);
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        __dec_obj5=litem_4->item,
        litem_4->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 117);
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1633, 116);
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1639, 118, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1639, 119);
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        __dec_obj6=litem_5->item,
        litem_5->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 121);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1643, 120);
        self->tail->next=litem_5;
        self->tail=litem_5;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1651, 122));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static int*  list$1int$ph_item(struct list$1int$ph* self, int position, int*  default_value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_item"; neo_current_frame = &fr;
    int*  __result_obj__0  ;
    struct list_item$1int$ph* it;
    int i;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = (int* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 1747, 123);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 1747, 124));
        return __result_obj__0;
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (int* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 1758, 125);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 1758, 126));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
        __result_obj__0 = (int* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 1764, 127);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 1764, 128));
    return __result_obj__0;
}

static char*  replace_first_plain(char*  line  , char* match, char* replace)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "replace_first_plain"; neo_current_frame = &fr;
    int index;
    char*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    memset(&index, 0, sizeof(index));
    index=string_index(line,match,-1);
    if(index<0) {
                __result_obj__0 = (char* )come_increment_ref_count(line, "12command.nc", 762, 136);
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 762, 137));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 762, 138));
        return __result_obj__0;
    }
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value2=xsprintf("%s%s%s",((char* )(__right_value0=charp_substring(line,0,index))),replace,((char* )(__right_value1=charp_substring(line,index+strlen(match),-1)))))), "12command.nc", 768, 139);
    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 768, 140));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 767, 141));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 768, 142));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 768, 143));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 768, 144));
    return __result_obj__0;
}

void ViWin_commandModeView(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_commandModeView"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    werase(self->win);
    ViWin_textsView(self,nvi);
    wattr_on(self->win,(unsigned int )(((unsigned int )((1U))<<((10)+8))),((void*)0));
    mvwprintw(self->win,self->height-1,0,":%s",((char* )(__right_value0=chara_printable(nvi->commandString))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 778, 145));
    wattr_off(self->win,(unsigned int )(((unsigned int )((1U))<<((10)+8))),((void*)0));
    wrefresh(self->win);
    neo_current_frame = fr.prev;
}

char*  ViWin_selector(struct ViWin*  self  , struct list$1char$ph* lines)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_selector"; neo_current_frame = &fr;
    _Bool end_of_select;
    _Bool canceled;
    int maxx;
    int maxy;
    int scrolltop;
    int cursor;
    int maxy2;
    int y;
    void* __right_value0 = (void*)0;
    char*  it  ;
    char*  line  ;
    int key;
    int scroll_size;
    int scroll_size_6;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    memset(&end_of_select, 0, sizeof(end_of_select));
    memset(&canceled, 0, sizeof(canceled));
    memset(&maxx, 0, sizeof(maxx));
    memset(&maxy, 0, sizeof(maxy));
    memset(&scrolltop, 0, sizeof(scrolltop));
    memset(&cursor, 0, sizeof(cursor));
    memset(&maxy2, 0, sizeof(maxy2));
    memset(&y, 0, sizeof(y));
    memset(&it, 0, sizeof(it));
    memset(&line, 0, sizeof(line));
    memset(&key, 0, sizeof(key));
    memset(&scroll_size, 0, sizeof(scroll_size));
    memset(&scroll_size_6, 0, sizeof(scroll_size_6));
    end_of_select=(_Bool)0;
    canceled=(_Bool)0;
    maxx=getmaxx(self->win);
    maxy=getmaxy(self->win);
    scrolltop=0;
    cursor=0;
    while(!end_of_select) {
        wclear(stdscr);
        maxy2=list$1char$ph_length(lines)-scrolltop;
        for(y=0        ;y<maxy&&y<maxy2;y++){
            it=(char* )come_increment_ref_count(list$1char$ph_item(lines,scrolltop+y,((void*)0)), "12command.nc", 801, 146);
            __right_value0 = (void*)0;
            line=(char* )come_increment_ref_count(charp_substring(it,0,maxx-1), "12command.nc", 803, 147);
            if(cursor==y) {
                wattr_on(stdscr,(unsigned int )((((unsigned int )((1U))<<((10)+8)))),((void*)0));
                mvprintw(y,0,"%s",line);
                wattr_off(stdscr,(unsigned int )((((unsigned int )((1U))<<((10)+8)))),((void*)0));
            }
            else {
                mvprintw(y,0,"%s",line);
            }
            (it = come_decrement_ref_count(it, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 814, 148));
            (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 814, 149));
        }
        wrefresh(stdscr);
        key=wgetch(stdscr);
        switch (        key) {
            case 0403:
            case 107:
            case 80-65+1:
            cursor--;
            break;
            case 0402:
            case 106:
            case 78-65+1:
            case ((73-65)+1):
            cursor++;
            break;
            case 68-65+1:
            case 0522:
            cursor+=10;
            break;
            case ((85-65)+1):
            case 0523:
            cursor-=10;
            break;
            case (67-65)+1:
            case 113:
            case (91-65)+1:
            canceled=(_Bool)1;
            end_of_select=(_Bool)1;
            break;
            case 0527:
            case (74-65)+1:
            end_of_select=(_Bool)1;
            break;
        }
        if(cursor<0) {
            scroll_size=-cursor+1;
            cursor=0;
            scrolltop-=scroll_size;
            if(scrolltop<0) {
                scrolltop=0;
                cursor=0;
            }
        }
        if(maxy2<maxy) {
            if(cursor>=maxy2) {
                cursor=maxy2-1;
            }
        }
        else {
            if(cursor>=maxy) {
                scroll_size_6=cursor-maxy+1;
                scrolltop+=scroll_size_6;
                cursor-=scroll_size_6;
            }
        }
    }
    if(canceled) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","12command.nc",886))), "12command.nc", 886, 150);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 886, 151));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 886, 152));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value2=__builtin_string(((char* )(__right_value1=list$1char$ph_item(lines,scrolltop+cursor,((char* )(__right_value0=__builtin_string("","12command.nc",888)))))),"12command.nc",888))), "12command.nc", 888, 153);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 888, 154));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 888, 155));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 888, 156));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 888, 157));
    return __result_obj__0;
}

char*  ViWin_selectFileCompletionCandidate(struct ViWin*  self  , char*  word  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_selectFileCompletionCandidate"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  dir_name  ;
    char*  __dec_obj7  ;
    char*  tmp  ;
    char* dname;
    char*  __dec_obj8  ;
    char*  __dec_obj9  ;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* words;
    char* cwd;
    struct __dirstream*  dir  ;
    struct dirent*  entry  ;
    char*  path  ;
    char*  item  ;
    struct __dirstream*  dir_7  ;
    struct dirent*  entry_8  ;
    char*  path_9  ;
    char*  item_10  ;
    struct __dirstream*  dir_11  ;
    struct dirent*  entry_12  ;
    char*  path_13  ;
    char*  item_14  ;
    struct list$1char$ph* words2;
    struct list$1char$ph* _o2_saved_2;
    char*  it  ;
    struct list$1char$ph* words3;
    memset(&dir_name, 0, sizeof(dir_name));
    memset(&tmp, 0, sizeof(tmp));
    memset(&dname, 0, sizeof(dname));
    memset(&words, 0, sizeof(words));
    memset(&cwd, 0, sizeof(cwd));
    memset(&dir, 0, sizeof(dir));
    memset(&entry, 0, sizeof(entry));
    memset(&path, 0, sizeof(path));
    memset(&item, 0, sizeof(item));
    memset(&dir_7, 0, sizeof(dir_7));
    memset(&entry_8, 0, sizeof(entry_8));
    memset(&path_9, 0, sizeof(path_9));
    memset(&item_10, 0, sizeof(item_10));
    memset(&dir_11, 0, sizeof(dir_11));
    memset(&entry_12, 0, sizeof(entry_12));
    memset(&path_13, 0, sizeof(path_13));
    memset(&item_14, 0, sizeof(item_14));
    memset(&words2, 0, sizeof(words2));
    memset(&_o2_saved_2, 0, sizeof(_o2_saved_2));
    memset(&it, 0, sizeof(it));
    memset(&words3, 0, sizeof(words3));
    if(strcmp(word,"")==0) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","12command.nc",894))), "12command.nc", 894, 158);
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 894, 159));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 894, 160));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 894, 161));
        return __result_obj__0;
    }
    dir_name=((void*)0);
    if(word[strlen(word)-1]==47) {
        __right_value0 = (void*)0;
        __dec_obj7=dir_name,
        dir_name=(char* )come_increment_ref_count(__builtin_string(word,"12command.nc",899), "12command.nc", 899, 163);
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "12command.nc", 899, 162);
    }
    else {
        __right_value0 = (void*)0;
        tmp=(char* )come_increment_ref_count((char* )come_memdup(word, "12command.nc", 902, 164, "char* "), "12command.nc", 902, 165);
        dname=dirname(tmp);
        if(strcmp(dname,"/")==0) {
            __right_value0 = (void*)0;
            __dec_obj8=dir_name,
            dir_name=(char* )come_increment_ref_count(__builtin_string("/","12command.nc",906), "12command.nc", 906, 167);
            __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "12command.nc", 906, 166);
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj9=dir_name,
            dir_name=(char* )come_increment_ref_count(xsprintf("%s/",dname), "12command.nc", 909, 169);
            __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "12command.nc", 909, 168);
        }
        (tmp = come_decrement_ref_count(tmp, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 913, 170));
    }
    __right_value0 = (void*)0;
    words=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "12command.nc", 913, 171, "struct list$1char$ph*"), "12command.nc", 913, 172)), "12command.nc", 913, 173);
    if(string_equals(dir_name,"./")) {
        cwd=getenv("PWD");
        char cwd2[4096];
        memset(&cwd2, 0, sizeof(cwd2));
        if(cwd==((void*)0)) {
            if(getcwd(cwd2,4096)==((void*)0)) {
                                __right_value0 = (void*)0;
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","12command.nc",921))), "12command.nc", 921, 174);
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 921, 175));
                (dir_name = come_decrement_ref_count(dir_name, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 921, 176));
                come_call_finalizer(list$1char$ph$p_finalize, words, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12command.nc}", 921, 177);
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 921, 178));
                neo_current_frame = fr.prev;
                (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 921, 179));
                return __result_obj__0;
            }
            cwd=cwd2;
        }
        dir=opendir(cwd);
        if(dir==((void*)0)) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","12command.nc",929))), "12command.nc", 929, 180);
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 929, 181));
            (dir_name = come_decrement_ref_count(dir_name, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 929, 182));
            come_call_finalizer(list$1char$ph$p_finalize, words, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12command.nc}", 929, 183);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 929, 184));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 929, 185));
            return __result_obj__0;
        }
        while((_Bool)1) {
            entry=readdir(dir);
            if(entry==((void*)0)) {
                break;
            }
            __right_value0 = (void*)0;
            path=(char* )come_increment_ref_count(xsprintf("%s/%s",cwd,entry->d_name), "12command.nc", 939, 186);
            if(is_directory_path(path)) {
                __right_value0 = (void*)0;
                item=(char* )come_increment_ref_count(xsprintf("%s/",entry->d_name), "12command.nc", 942, 187);
                list$1char$ph_push_back(words,(char* )come_increment_ref_count(item, "12command.nc", 943, 188));
                (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 948, 189));
            }
            else {
                __right_value0 = (void*)0;
                list$1char$ph_push_back(words,(char* )come_increment_ref_count(__builtin_string(entry->d_name,"12command.nc",946), "12command.nc", 946, 190));
            }
            (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 950, 191));
        }
        closedir(dir);
    }
    else if(dir_name[0]==47) {
        if(strcmp(word,"/")!=0&&word[strlen(word)-1]==47) {
            __right_value0 = (void*)0;
            dir_7=opendir(((char* )(__right_value0=charp_substring(word,0,-2))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 955, 192));
        }
        else {
            dir_7=opendir(dir_name);
        }
        if(dir_7==((void*)0)) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","12command.nc",962))), "12command.nc", 962, 193);
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 962, 194));
            (dir_name = come_decrement_ref_count(dir_name, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 962, 195));
            come_call_finalizer(list$1char$ph$p_finalize, words, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12command.nc}", 962, 196);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 962, 197));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 962, 198));
            return __result_obj__0;
        }
        while((_Bool)1) {
            entry_8=readdir(dir_7);
            if(entry_8==((void*)0)) {
                break;
            }
            __right_value0 = (void*)0;
            path_9=(char* )come_increment_ref_count(xsprintf("%s%s",dir_name,entry_8->d_name), "12command.nc", 972, 199);
            if(is_directory_path(path_9)) {
                __right_value0 = (void*)0;
                item_10=(char* )come_increment_ref_count(xsprintf("%s%s/",dir_name,entry_8->d_name), "12command.nc", 975, 200);
                list$1char$ph_push_back(words,(char* )come_increment_ref_count(item_10, "12command.nc", 976, 201));
                (item_10 = come_decrement_ref_count(item_10, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 981, 202));
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                list$1char$ph_push_back(words,(char* )come_increment_ref_count(xsprintf("%s%s",dir_name,((char* )(__right_value0=__builtin_string(entry_8->d_name,"12command.nc",979)))), "12command.nc", 979, 203));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 979, 204));
            }
            (path_9 = come_decrement_ref_count(path_9, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 983, 205));
        }
        closedir(dir_7);
    }
    else {
        if(word[strlen(word)-1]==47) {
            __right_value0 = (void*)0;
            dir_11=opendir(((char* )(__right_value0=charp_substring(word,0,-2))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 988, 206));
        }
        else {
            dir_11=opendir(dir_name);
        }
        if(dir_11==((void*)0)) {
                        __right_value0 = (void*)0;
            __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","12command.nc",995))), "12command.nc", 995, 207);
            (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 995, 208));
            (dir_name = come_decrement_ref_count(dir_name, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 995, 209));
            come_call_finalizer(list$1char$ph$p_finalize, words, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12command.nc}", 995, 210);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 995, 211));
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 995, 212));
            return __result_obj__0;
        }
        while((_Bool)1) {
            entry_12=readdir(dir_11);
            if(entry_12==((void*)0)) {
                break;
            }
            __right_value0 = (void*)0;
            path_13=(char* )come_increment_ref_count(xsprintf("%s%s",dir_name,entry_12->d_name), "12command.nc", 1005, 213);
            if(is_directory_path(path_13)) {
                __right_value0 = (void*)0;
                item_14=(char* )come_increment_ref_count(xsprintf("%s%s/",dir_name,entry_12->d_name), "12command.nc", 1008, 214);
                list$1char$ph_push_back(words,(char* )come_increment_ref_count(item_14, "12command.nc", 1009, 215));
                (item_14 = come_decrement_ref_count(item_14, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1014, 216));
            }
            else {
                __right_value0 = (void*)0;
                list$1char$ph_push_back(words,(char* )come_increment_ref_count(xsprintf("%s%s",dir_name,entry_12->d_name), "12command.nc", 1012, 217));
            }
            (path_13 = come_decrement_ref_count(path_13, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1016, 218));
        }
        closedir(dir_11);
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    words2=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "12command.nc", 1019, 219, "struct list$1char$ph*"), "12command.nc", 1019, 220)), "12command.nc", 1019, 221);
    for(_o2_saved_2=(struct list$1char$ph*)come_increment_ref_count(words, "12command.nc", 1021, 222),it=list$1char$ph_begin(_o2_saved_2)    ;!list$1char$ph_end(_o2_saved_2);it=list$1char$ph_next(_o2_saved_2)){
        if(strstr(it,word)==it) {
            __right_value0 = (void*)0;
            list$1char$ph_push_back(words2,(char* )come_increment_ref_count((char* )come_memdup(it, "12command.nc", 1023, 223, "char* "), "12command.nc", 1023, 224));
        }
    }
    if(list$1char$ph_length(words2)==0) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","12command.nc",1028))), "12command.nc", 1028, 225);
        (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1028, 226));
        (dir_name = come_decrement_ref_count(dir_name, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1028, 227));
        come_call_finalizer(list$1char$ph$p_finalize, words, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12command.nc}", 1028, 228);
        come_call_finalizer(list$1char$ph$p_finalize, words2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12command.nc}", 1028, 229);
        come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12command.nc}", 1028, 230);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1028, 231));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 1028, 232));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    words3=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_sort(words2), "12command.nc", 1031, 318);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=ViWin_selector(self,words3))), "12command.nc", 1033, 319);
    (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1033, 320));
    (dir_name = come_decrement_ref_count(dir_name, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1033, 321));
    come_call_finalizer(list$1char$ph$p_finalize, words, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12command.nc}", 1033, 322);
    come_call_finalizer(list$1char$ph$p_finalize, words2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12command.nc}", 1033, 323);
    come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12command.nc}", 1033, 324);
    come_call_finalizer(list$1char$ph$p_finalize, words3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12command.nc}", 1033, 325);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1033, 326));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "12command.nc", 1033, 327));
    return __result_obj__0;
}

static int lambda1(char*  left  , char*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda1"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return string_compare(left,right);
    neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_sort(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_sort"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 2380, 233, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 2380, 234)))), "/usr/local/include/neo-c.h", 2380, 235);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 2380, 236);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2380, 237);
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=list$1char$ph_merge_sort_with_lambda(self,lambda1))), "/usr/local/include/neo-c.h", 2382, 315);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 2382, 316);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2382, 317);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_merge_sort_with_lambda(struct list$1char$ph* self, int (*compare)(char* ,char* ))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_merge_sort_with_lambda"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* list1;
    struct list$1char$ph* list2;
    struct list_item$1char$ph* it;
    struct list$1char$ph* left_list;
    struct list$1char$ph* right_list;
    memset(&list1, 0, sizeof(list1));
    memset(&list2, 0, sizeof(list2));
    memset(&it, 0, sizeof(it));
    memset(&left_list, 0, sizeof(left_list));
    memset(&right_list, 0, sizeof(right_list));
    if(self->head==((void*)0)) {
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=list$1char$ph_clone(self))), "/usr/local/include/neo-c.h", 2335, 264);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 1027, 265);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2335, 266);
        return __result_obj__0;
    }
    if(self->head->next==((void*)0)) {
                __right_value0 = (void*)0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=list$1char$ph_clone(self))), "/usr/local/include/neo-c.h", 2338, 267);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "}", 2338, 268);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2338, 269);
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    list1=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 2341, 270, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 2341, 271)), "/usr/local/include/neo-c.h", 2341, 272);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list2=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 2342, 273, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 2342, 274)), "/usr/local/include/neo-c.h", 2342, 275);
    it=self->head;
    while((_Bool)1) {
        __right_value0 = (void*)0;
        list$1char$ph_push_back(list1,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 2347, 276, "char* "), "/usr/local/include/neo-c.h", 2347, 277));
        __right_value0 = (void*)0;
        list$1char$ph_push_back(list2,(char* )come_increment_ref_count((char* )come_memdup(it->next->item, "/usr/local/include/neo-c.h", 2348, 278, "char* "), "/usr/local/include/neo-c.h", 2348, 279));
        if(it->next->next==((void*)0)) {
            break;
        }
        it=it->next->next;
        if(it->next==((void*)0)) {
            if(1) {
                __right_value0 = (void*)0;
                list$1char$ph_push_back(list1,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 2358, 280, "char* "), "/usr/local/include/neo-c.h", 2358, 281));
            }
            else {
                __right_value0 = (void*)0;
                list$1char$ph_push_back(list1,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 2361, 282, "char* "), "/usr/local/include/neo-c.h", 2361, 283));
            }
            break;
        }
    }
    __right_value0 = (void*)0;
    left_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_merge_sort_with_lambda(list1,compare), "/usr/local/include/neo-c.h", 2367, 284);
    __right_value0 = (void*)0;
    right_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_merge_sort_with_lambda(list2,compare), "/usr/local/include/neo-c.h", 2368, 285);
        __right_value0 = (void*)0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=list$1char$ph_merge_list_with_lambda(left_list,right_list,compare))), "/usr/local/include/neo-c.h", 2370, 308);
    come_call_finalizer(list$1char$ph$p_finalize, list1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2370, 309);
    come_call_finalizer(list$1char$ph$p_finalize, list2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2370, 310);
    come_call_finalizer(list$1char$ph$p_finalize, left_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2370, 311);
    come_call_finalizer(list$1char$ph$p_finalize, right_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2370, 312);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 2370, 313);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2370, 314);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_clone"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct list_item$1char$ph* it;
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 238);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 239);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1513, 240, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 1513, 241)), "/usr/local/include/neo-c.h", 1513, 242);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1518, 257, "char* "), "/usr/local/include/neo-c.h", 1518, 258));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1521, 259, "char* "), "/usr/local/include/neo-c.h", 1521, 260));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 261);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 262);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 263);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj10  ;
    struct list_item$1char$ph* litem_15;
    char*  __dec_obj11  ;
    struct list_item$1char$ph* litem_16;
    char*  __dec_obj12  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_15, 0, sizeof(litem_15));
    memset(&litem_16, 0, sizeof(litem_16));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1531, 243));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1534, 244, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1534, 245);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj10=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 247);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 246);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_15=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1544, 248, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1544, 249);
        litem_15->prev=self->head;
        litem_15->next=((void*)0);
        __dec_obj11=litem_15->item,
        litem_15->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 251);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 250);
        self->tail=litem_15;
        self->head->next=litem_15;
    }
    else {
        __right_value0 = (void*)0;
        litem_16=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1554, 252, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1554, 253);
        litem_16->prev=self->tail;
        litem_16->next=((void*)0);
        __dec_obj12=litem_16->item,
        litem_16->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 255);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 254);
        self->tail->next=litem_16;
        self->tail=litem_16;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1566, 256));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_merge_list_with_lambda(struct list$1char$ph* left, struct list$1char$ph* right, int (*compare)(char* ,char* ))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_merge_list_with_lambda"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* it2;
    struct list$1char$ph* __result_obj__0;
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    memset(&it2, 0, sizeof(it2));
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 2262, 286, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 2262, 287)), "/usr/local/include/neo-c.h", 2262, 288);
    it=left->head;
    it2=right->head;
    while((_Bool)1) {
        if(it&&it2) {
            if(it->item==((void*)0)) {
                it=it->next;
            }
            else if(it2->item==((void*)0)) {
                it2=it2->next;
            }
            else if(compare(it->item,it2->item)<=0) {
                if(1) {
                    __right_value0 = (void*)0;
                    list$1char$ph_push_back(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 2278, 289, "char* "), "/usr/local/include/neo-c.h", 2278, 290));
                }
                else {
                    __right_value0 = (void*)0;
                    list$1char$ph_push_back(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 2281, 291, "char* "), "/usr/local/include/neo-c.h", 2281, 292));
                }
                it=it->next;
            }
            else {
                if(1) {
                    __right_value0 = (void*)0;
                    list$1char$ph_push_back(result,(char* )come_increment_ref_count((char* )come_memdup(it2->item, "/usr/local/include/neo-c.h", 2288, 293, "char* "), "/usr/local/include/neo-c.h", 2288, 294));
                }
                else {
                    __right_value0 = (void*)0;
                    list$1char$ph_push_back(result,(char* )come_increment_ref_count((char* )come_memdup(it2->item, "/usr/local/include/neo-c.h", 2291, 295, "char* "), "/usr/local/include/neo-c.h", 2291, 296));
                }
                it2=it2->next;
            }
        }
        if(it==((void*)0)) {
            if(it2!=((void*)0)) {
                while(it2!=((void*)0)) {
                    if(1) {
                        __right_value0 = (void*)0;
                        list$1char$ph_push_back(result,(char* )come_increment_ref_count((char* )come_memdup(it2->item, "/usr/local/include/neo-c.h", 2303, 297, "char* "), "/usr/local/include/neo-c.h", 2303, 298));
                    }
                    else {
                        __right_value0 = (void*)0;
                        list$1char$ph_push_back(result,(char* )come_increment_ref_count((char* )come_memdup(it2->item, "/usr/local/include/neo-c.h", 2306, 299, "char* "), "/usr/local/include/neo-c.h", 2306, 300));
                    }
                    it2=it2->next;
                }
            }
            break;
        }
        else if(it2==((void*)0)) {
            if(it!=((void*)0)) {
                while(it!=((void*)0)) {
                    if(1) {
                        __right_value0 = (void*)0;
                        list$1char$ph_push_back(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 2318, 301, "char* "), "/usr/local/include/neo-c.h", 2318, 302));
                    }
                    else {
                        __right_value0 = (void*)0;
                        list$1char$ph_push_back(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 2321, 303, "char* "), "/usr/local/include/neo-c.h", 2321, 304));
                    }
                    it=it->next;
                }
            }
            break;
        }
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 2331, 305);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2331, 306);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2331, 307);
    return __result_obj__0;
}

void ViWin_fileCompetion(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_fileCompetion"; neo_current_frame = &fr;
    char* line;
    char* p;
    void* __right_value0 = (void*)0;
    char*  word  ;
    char*  candidate  ;
    char*  file_name  ;
    memset(&line, 0, sizeof(line));
    memset(&p, 0, sizeof(p));
    memset(&word, 0, sizeof(word));
    memset(&candidate, 0, sizeof(candidate));
    memset(&file_name, 0, sizeof(file_name));
    line=nvi->commandString;
    p=line+strlen(line)-1;
    while(p>=line) {
        if(*p==32||*p==9) {
            p++;
            break;
        }
        else {
            p--;
        }
    }
    word=(char* )come_increment_ref_count(__builtin_string(p,"12command.nc",1052), "12command.nc", 1052, 328);
    __right_value0 = (void*)0;
    candidate=(char* )come_increment_ref_count(ViWin_selectFileCompletionCandidate(self,(char* )come_increment_ref_count(word, "12command.nc", 1053, 329)), "12command.nc", 1053, 330);
    if(strcmp(candidate,"")!=0&&strstr(candidate,word)==candidate) {
        __right_value0 = (void*)0;
        file_name=(char* )come_increment_ref_count(charp_substring(candidate,strlen(word),-1), "12command.nc", 1056, 331);
        append_command_string(nvi->commandString,file_name);
        (file_name = come_decrement_ref_count(file_name, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1059, 332));
    }
    (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1061, 333));
    (candidate = come_decrement_ref_count(candidate, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1061, 334));
    neo_current_frame = fr.prev;
}

void ViWin_commandModeInput(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_commandModeInput"; neo_current_frame = &fr;
    int key;
    int key2;
    int len;
    memset(&key, 0, sizeof(key));
    memset(&key2, 0, sizeof(key2));
    memset(&len, 0, sizeof(len));
    key=ViWin_getKey_v14(self,(_Bool)0);
    if(key==410) {
        key=ViWin_getKey_v14(self,(_Bool)0);
    }
    char a[128];
    memset(&a, 0, sizeof(a));
    snprintf(a,128,"%c",key);
    switch (    key) {
        case 10:
        add_command_history(nvi);
        Vi_exitFromComandMode(nvi);
        break;
        case 3:
        case 27:
        stop_command_history_browsing(nvi);
        nvi->mode=(0);
        break;
        case 0403:
        case 80-65+1:
        browse_command_history_prev(nvi);
        break;
        case 0402:
        case 78-65+1:
        browse_command_history_next(nvi);
        break;
        case 86-65+1:
        {
            key2=ViWin_getKey_v14(self,(_Bool)0);
            if(key2==10) {
                char a_17[128];
                memset(&a_17, 0, sizeof(a_17));
                a_17[0]=13;
                a_17[1]=0;
                stop_command_history_browsing(nvi);
                append_command_string(nvi->commandString,a_17);
            }
            else {
                char a_18[128];
                memset(&a_18, 0, sizeof(a_18));
                a_18[0]=key2;
                a_18[1]=0;
                stop_command_history_browsing(nvi);
                append_command_string(nvi->commandString,a_18);
            }
        }
        break;
        case 9:
        ViWin_fileCompetion(self,nvi);
        break;
        case 8:
        case 127:
        case 0407:
        {
            len=strlen(nvi->commandString);
            if(len>0) {
                stop_command_history_browsing(nvi);
                nvi->commandString[len-1]=0;
            }
        }
        break;
        default:
        {
            stop_command_history_browsing(nvi);
            append_command_string(nvi->commandString,a);
        }
        break;
    }
    neo_current_frame = fr.prev;
}

void ViWin_view_v12(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_view_v12"; neo_current_frame = &fr;
    if(nvi->mode==(3)&&self==nvi->activeWin) {
        ViWin_commandModeView(self,nvi);
    }
    else {
        ViWin_view_v9(self,nvi);
    }
    neo_current_frame = fr.prev;
}

void ViWin_input_v12(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_input_v12"; neo_current_frame = &fr;
    if(nvi->mode==(3)) {
        ViWin_commandModeInput(self,nvi);
    }
    else {
        ViWin_input_v9(self,nvi);
    }
    neo_current_frame = fr.prev;
}

_Bool ViWin_subAllTextsFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_subAllTextsFromCommandMode"; neo_current_frame = &fr;
    int head;
    int tail;
    _Bool global;
    int tmp;
    _Bool changed;
    int i;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    char*  line  ;
    char*  new_line  ;
    int*  wide_line  ;
    memset(&head, 0, sizeof(head));
    memset(&tail, 0, sizeof(tail));
    memset(&global, 0, sizeof(global));
    memset(&tmp, 0, sizeof(tmp));
    memset(&changed, 0, sizeof(changed));
    memset(&i, 0, sizeof(i));
    memset(&line, 0, sizeof(line));
    memset(&new_line, 0, sizeof(new_line));
    memset(&wide_line, 0, sizeof(wide_line));
    char match[128];
    memset(&match, 0, sizeof(match));
    char replace[128];
    memset(&replace, 0, sizeof(replace));
    head=0;
    tail=0;
    global=(_Bool)0;
    if(!parse_substitute_command(nvi->commandString,nvi,self,&head,&tail,match,128,replace,128,&global)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    if(list$1int$ph_length(self->texts)==0) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    if(head>tail) {
        tmp=head;
        head=tail;
        tail=tmp;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=list$1int$ph_length(self->texts)) {
        tail=list$1int$ph_length(self->texts)-1;
    }
    changed=(_Bool)0;
    for(i=head    ;i<=tail;i++){
        line=(char* )come_increment_ref_count(wstring_to_string(((int* )(__right_value1=list$1int$ph_item(self->texts,i,((int* )(__right_value0=__builtin_wstring("","12command.nc",1189))))))), "12command.nc", 1189, 335);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1189, 336));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1189, 337));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        new_line=(char* )come_increment_ref_count(((global)?(((char* )(__right_value0=charp_sub_plain(line,match,replace)))):(((char* )(__right_value1=replace_first_plain((char* )come_increment_ref_count(line, "12command.nc", 1190, 338),match,replace))))), "12command.nc", 1190, 339);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1190, 340));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1190, 341));
        if(strcmp(line,new_line)!=0) {
            if(!changed) {
                ViWin_pushUndo_v5(self);
                changed=(_Bool)1;
            }
            __right_value0 = (void*)0;
            wide_line=(int* )come_increment_ref_count(string_to_wstring(new_line), "12command.nc", 1198, 342);
            __right_value0 = (void*)0;
            list$1int$ph_replace(self->texts,i,(int* )come_increment_ref_count((int* )come_memdup(wide_line, "12command.nc", 1199, 351, "int* "), "12command.nc", 1199, 352));
            list$1int$_replace(self->texts_length,i,wcslen(wide_line));
            (wide_line = come_decrement_ref_count(wide_line, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1202, 359));
        }
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1204, 360));
        (new_line = come_decrement_ref_count(new_line, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1204, 361));
    }
    if(changed) {
        self->writed=(_Bool)1;
        ViWin_modifyUnderCursorYValue(self);
        ViWin_modifyOverCursorYValue(self);
        ViWin_modifyOverCursorXValue(self);
    }
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static struct list$1int$ph* list$1int$ph_replace(struct list$1int$ph* self, int position, int*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_replace"; neo_current_frame = &fr;
    struct list$1int$ph* __result_obj__0;
    int len;
    int i;
    int*  default_value  ;
    struct list_item$1int$ph* it;
    int i_19;
    int*  __dec_obj13  ;
    memset(&len, 0, sizeof(len));
    memset(&i, 0, sizeof(i));
    memset(&it, 0, sizeof(it));
    memset(&i_19, 0, sizeof(i_19));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2030, 343));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(position<0) {
        position+=self->len;
    }
    if(position<0) {
        position=0;
    }
    if(self->len==0||position>=self->len) {
        len=self->len;
        for(i=0        ;i<position-len;i++){
            memset(&default_value,0,sizeof(int* ));
            list$1int$ph_push_back(self,(int* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2045, 344));
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2047, 345));
        }
        list$1int$ph_push_back(self,(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2047, 346));
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2048, 347));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    i_19=0;
    while(it!=((void*)0)) {
        if(position==i_19) {
            __dec_obj13=it->item,
            it->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2055, 349);
            __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 2055, 348);
            break;
        }
        it=it->next;
        i_19++;
    }
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2062, 350));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1int$* list$1int$_replace(struct list$1int$* self, int position, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_replace"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    int len;
    int i;
    int default_value;
    struct list_item$1int$* it;
    int i_22;
    memset(&len, 0, sizeof(len));
    memset(&i, 0, sizeof(i));
    memset(&it, 0, sizeof(it));
    memset(&i_22, 0, sizeof(i_22));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(position<0) {
        position+=self->len;
    }
    if(position<0) {
        position=0;
    }
    if(self->len==0||position>=self->len) {
        len=self->len;
        for(i=0        ;i<position-len;i++){
            memset(&default_value,0,sizeof(int));
            list$1int$_push_back(self,default_value);
        }
        list$1int$_push_back(self,item);
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    i_22=0;
    while(it!=((void*)0)) {
        if(position==i_22) {
            it->item=item;
            break;
        }
        it=it->next;
        i_22++;
    }
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_push_back"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_20;
    struct list_item$1int$* litem_21;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_20, 0, sizeof(litem_20));
    memset(&litem_21, 0, sizeof(litem_21));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1619, 353, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1619, 354);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_20=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1629, 355, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1629, 356);
        litem_20->prev=self->head;
        litem_20->next=((void*)0);
        litem_20->item=item;
        self->tail=litem_20;
        self->head->next=litem_20;
    }
    else {
        __right_value0 = (void*)0;
        litem_21=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1639, 357, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1639, 358);
        litem_21->prev=self->tail;
        litem_21->next=((void*)0);
        litem_21->item=item;
        self->tail->next=litem_21;
        self->tail=litem_21;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool ViWin_deleteLinesFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_deleteLinesFromCommandMode"; neo_current_frame = &fr;
    int head;
    int tail;
    int tmp;
    int i;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    memset(&head, 0, sizeof(head));
    memset(&tail, 0, sizeof(tail));
    memset(&tmp, 0, sizeof(tmp));
    memset(&i, 0, sizeof(i));
    head=0;
    tail=0;
    if(!parse_delete_command(nvi->commandString,nvi,self,&head,&tail)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    if(list$1int$ph_length(self->texts)==0) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    if(head>tail) {
        tmp=head;
        head=tail;
        tail=tmp;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=list$1int$ph_length(self->texts)) {
        tail=list$1int$ph_length(self->texts)-1;
    }
    ViWin_pushUndo_v5(self);
    list$1int$ph_reset(nvi->yank);
    nvi->yankKind=(0);
    for(i=head    ;i<=tail;i++){
        list$1int$ph_push_back(nvi->yank,(int* )come_increment_ref_count((int* )come_memdup(((int* )(__right_value1=list$1int$ph_item(self->texts,i,((int* )(__right_value0=__builtin_wstring("","12command.nc",1245)))))), "12command.nc", 1245, 363, "int* "), "12command.nc", 1245, 364));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1245, 365));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1245, 366));
    }
    ViWin_saveYankToFile(self,nvi);
    list$1int$ph_delete(self->texts,head,tail+1);
    list$1int$_delete(self->texts_length,head,tail+1);
    if(list$1int$ph_length(self->texts)==0) {
        __right_value0 = (void*)0;
        list$1int$ph_push_back(self->texts,(int* )come_increment_ref_count(__builtin_wstring("","12command.nc",1253), "12command.nc", 1253, 374));
        list$1int$_push_back(self->texts_length,0);
    }
    self->scroll=0;
    self->cursorY=head;
    ViWin_modifyUnderCursorYValue(self);
    ViWin_modifyOverCursorYValue(self);
    self->cursorX=0;
    ViWin_modifyUnderCursorXValue(self);
    ViWin_modifyOverCursorXValue(self);
    self->writed=(_Bool)1;
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static struct list$1int$ph* list$1int$ph_reset(struct list$1int$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_reset"; neo_current_frame = &fr;
    struct list$1int$ph* __result_obj__0;
    struct list_item$1int$ph* it;
    struct list_item$1int$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1864, 362);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1int$ph* list$1int$ph_delete(struct list$1int$ph* self, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_delete"; neo_current_frame = &fr;
    struct list$1int$ph* __result_obj__0;
    int tmp;
    struct list_item$1int$ph* it;
    int i;
    struct list_item$1int$ph* prev_it;
    struct list_item$1int$ph* it_23;
    int i_24;
    struct list_item$1int$ph* prev_it_25;
    struct list_item$1int$ph* it_26;
    struct list_item$1int$ph* head_prev_it;
    struct list_item$1int$ph* tail_it;
    int i_27;
    struct list_item$1int$ph* prev_it_28;
    memset(&tmp, 0, sizeof(tmp));
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    memset(&prev_it, 0, sizeof(prev_it));
    memset(&it_23, 0, sizeof(it_23));
    memset(&i_24, 0, sizeof(i_24));
    memset(&prev_it_25, 0, sizeof(prev_it_25));
    memset(&it_26, 0, sizeof(it_26));
    memset(&head_prev_it, 0, sizeof(head_prev_it));
    memset(&tail_it, 0, sizeof(tail_it));
    memset(&i_27, 0, sizeof(i_27));
    memset(&prev_it_28, 0, sizeof(prev_it_28));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head>=self->len) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==tail) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==0&&tail==self->len) {
        list$1int$ph_reset(self);
    }
    else if(head==0) {
        it=self->head;
        i=0;
        while(it!=((void*)0)) {
            if(i<tail) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1int$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1942, 367);
                self->len--;
            }
            else if(i==tail) {
                self->head=it;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it=it->next;
                i++;
            }
        }
    }
    else if(tail==self->len) {
        it_23=self->head;
        i_24=0;
        while(it_23!=((void*)0)) {
            if(i_24==head) {
                self->tail=it_23->prev;
                self->tail->next=((void*)0);
            }
            if(i_24>=head) {
                prev_it_25=it_23;
                it_23=it_23->next;
                i_24++;
                come_call_finalizer(list_item$1int$ph$p_finalize, prev_it_25, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1972, 368);
                self->len--;
            }
            else {
                it_23=it_23->next;
                i_24++;
            }
        }
    }
    else {
        it_26=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_27=0;
        while(it_26!=((void*)0)) {
            if(i_27==head) {
                head_prev_it=it_26->prev;
            }
            if(i_27==tail) {
                tail_it=it_26;
            }
            if(i_27>=head&&i_27<tail) {
                prev_it_28=it_26;
                it_26=it_26->next;
                i_27++;
                come_call_finalizer(list_item$1int$ph$p_finalize, prev_it_28, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2005, 369);
                self->len--;
            }
            else {
                it_26=it_26->next;
                i_27++;
            }
        }
        if(head_prev_it!=((void*)0)) {
            head_prev_it->next=tail_it;
        }
        if(tail_it!=((void*)0)) {
            tail_it->prev=head_prev_it;
        }
    }
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1int$* list$1int$_delete(struct list$1int$* self, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_delete"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    int tmp;
    struct list_item$1int$* it;
    int i;
    struct list_item$1int$* prev_it;
    struct list_item$1int$* it_29;
    int i_30;
    struct list_item$1int$* prev_it_31;
    struct list_item$1int$* it_32;
    struct list_item$1int$* head_prev_it;
    struct list_item$1int$* tail_it;
    int i_33;
    struct list_item$1int$* prev_it_34;
    memset(&tmp, 0, sizeof(tmp));
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    memset(&prev_it, 0, sizeof(prev_it));
    memset(&it_29, 0, sizeof(it_29));
    memset(&i_30, 0, sizeof(i_30));
    memset(&prev_it_31, 0, sizeof(prev_it_31));
    memset(&it_32, 0, sizeof(it_32));
    memset(&head_prev_it, 0, sizeof(head_prev_it));
    memset(&tail_it, 0, sizeof(tail_it));
    memset(&i_33, 0, sizeof(i_33));
    memset(&prev_it_34, 0, sizeof(prev_it_34));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head>=self->len) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==tail) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==0&&tail==self->len) {
        list$1int$_reset(self);
    }
    else if(head==0) {
        it=self->head;
        i=0;
        while(it!=((void*)0)) {
            if(i<tail) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1942, 371);
                self->len--;
            }
            else if(i==tail) {
                self->head=it;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it=it->next;
                i++;
            }
        }
    }
    else if(tail==self->len) {
        it_29=self->head;
        i_30=0;
        while(it_29!=((void*)0)) {
            if(i_30==head) {
                self->tail=it_29->prev;
                self->tail->next=((void*)0);
            }
            if(i_30>=head) {
                prev_it_31=it_29;
                it_29=it_29->next;
                i_30++;
                come_call_finalizer(list_item$1int$$p_finalize, prev_it_31, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1972, 372);
                self->len--;
            }
            else {
                it_29=it_29->next;
                i_30++;
            }
        }
    }
    else {
        it_32=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_33=0;
        while(it_32!=((void*)0)) {
            if(i_33==head) {
                head_prev_it=it_32->prev;
            }
            if(i_33==tail) {
                tail_it=it_32;
            }
            if(i_33>=head&&i_33<tail) {
                prev_it_34=it_32;
                it_32=it_32->next;
                i_33++;
                come_call_finalizer(list_item$1int$$p_finalize, prev_it_34, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2005, 373);
                self->len--;
            }
            else {
                it_32=it_32->next;
                i_33++;
            }
        }
        if(head_prev_it!=((void*)0)) {
            head_prev_it->next=tail_it;
        }
        if(tail_it!=((void*)0)) {
            tail_it->prev=head_prev_it;
        }
    }
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1int$* list$1int$_reset(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_reset"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1864, 370);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

_Bool ViWin_yankLinesFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_yankLinesFromCommandMode"; neo_current_frame = &fr;
    int head;
    int tail;
    int tmp;
    void* __right_value0 = (void*)0;
    struct list$1int$ph* __dec_obj14;
    memset(&head, 0, sizeof(head));
    memset(&tail, 0, sizeof(tail));
    memset(&tmp, 0, sizeof(tmp));
    head=0;
    tail=0;
    if(!parse_yank_command(nvi->commandString,nvi,self,&head,&tail)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    if(list$1int$ph_length(self->texts)==0) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    if(head>tail) {
        tmp=head;
        head=tail;
        tail=tmp;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=list$1int$ph_length(self->texts)) {
        tail=list$1int$ph_length(self->texts)-1;
    }
    __dec_obj14=nvi->yank,
    nvi->yank=(struct list$1int$ph*)come_increment_ref_count((clone_line_range)(self,head,tail), "12command.nc", 1291, 377);
    come_call_finalizer(list$1int$ph_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12command.nc", 1291, 376);
    nvi->yankKind=(0);
    ViWin_saveYankToFile(self,nvi);
    self->scroll=0;
    self->cursorY=head;
    ViWin_modifyUnderCursorYValue(self);
    ViWin_modifyOverCursorYValue(self);
    self->cursorX=0;
    ViWin_modifyUnderCursorXValue(self);
    ViWin_modifyOverCursorXValue(self);
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static void list$1int$ph_finalize(struct list$1int$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1int$ph* it;
    struct list_item$1int$ph* prev_it;
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
        come_call_finalizer(list_item$1int$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 375);
    }
        neo_current_frame = fr.prev;
}

_Bool ViWin_copyLinesFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_copyLinesFromCommandMode"; neo_current_frame = &fr;
    int head;
    int tail;
    int dest;
    int tmp;
    void* __right_value0 = (void*)0;
    struct list$1int$ph* lines;
    int i;
    void* __right_value1 = (void*)0;
    int*  line  ;
    _Bool __result_obj__0;
    memset(&head, 0, sizeof(head));
    memset(&tail, 0, sizeof(tail));
    memset(&dest, 0, sizeof(dest));
    memset(&tmp, 0, sizeof(tmp));
    memset(&lines, 0, sizeof(lines));
    memset(&i, 0, sizeof(i));
    memset(&line, 0, sizeof(line));
    head=0;
    tail=0;
    dest=0;
    if(!parse_copy_command(nvi->commandString,nvi,self,&head,&tail,&dest)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    if(list$1int$ph_length(self->texts)==0) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    if(head>tail) {
        tmp=head;
        head=tail;
        tail=tmp;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=list$1int$ph_length(self->texts)) {
        tail=list$1int$ph_length(self->texts)-1;
    }
    if(dest<-1) {
        dest=-1;
    }
    if(dest>=list$1int$ph_length(self->texts)) {
        dest=list$1int$ph_length(self->texts)-1;
    }
    lines=(struct list$1int$ph*)come_increment_ref_count((clone_line_range)(self,head,tail), "12command.nc", 1343, 378);
    ViWin_pushUndo_v5(self);
    for(i=0    ;i<list$1int$ph_length(lines);i++){
        __right_value0 = (void*)0;
        line=(int* )come_increment_ref_count(list$1int$ph_item(lines,i,((int* )(__right_value0=__builtin_wstring("","12command.nc",1348)))), "12command.nc", 1348, 379);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1348, 380));
        __right_value0 = (void*)0;
        list$1int$ph_insert(self->texts,dest+1+i,(int* )come_increment_ref_count((int* )come_memdup(line, "12command.nc", 1349, 399, "int* "), "12command.nc", 1349, 400));
        list$1int$_insert(self->texts_length,dest+1+i,wcslen(line));
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1353, 407));
    }
    self->scroll=0;
    self->cursorY=dest+1;
    ViWin_modifyUnderCursorYValue(self);
    ViWin_modifyOverCursorYValue(self);
    self->cursorX=0;
    ViWin_modifyUnderCursorXValue(self);
    ViWin_modifyOverCursorXValue(self);
    self->writed=(_Bool)1;
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(list$1int$ph$p_finalize, lines, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12command.nc}", 1362, 408);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1int$ph* list$1int$ph_insert(struct list$1int$ph* self, int position, int*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_insert"; neo_current_frame = &fr;
    struct list$1int$ph* __result_obj__0;
    int len;
    int i;
    int*  default_value  ;
    void* __right_value0 = (void*)0;
    struct list_item$1int$ph* litem;
    int*  __dec_obj15  ;
    struct list_item$1int$ph* litem_35;
    int*  __dec_obj16  ;
    struct list_item$1int$ph* it;
    int i_36;
    struct list_item$1int$ph* litem_37;
    int*  __dec_obj17  ;
    memset(&len, 0, sizeof(len));
    memset(&i, 0, sizeof(i));
    memset(&litem, 0, sizeof(litem));
    memset(&litem_35, 0, sizeof(litem_35));
    memset(&it, 0, sizeof(it));
    memset(&i_36, 0, sizeof(i_36));
    memset(&litem_37, 0, sizeof(litem_37));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1788, 381));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(position<0) {
        position+=self->len+1;
    }
    if(position<0) {
        position=0;
    }
    if(self->len==0||position>=self->len) {
        len=self->len;
        for(i=0        ;i<position-len;i++){
            memset(&default_value,0,sizeof(int* ));
            list$1int$ph_push_back(self,(int* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 1801, 382));
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1803, 383));
        }
        list$1int$ph_push_back(self,(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1803, 384));
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1804, 385));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(position==0) {
        litem=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1808, 386, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1808, 387);
        litem->prev=((void*)0);
        litem->next=self->head;
        __dec_obj15=litem->item,
        litem->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1812, 389);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1812, 388);
        self->head->prev=litem;
        self->head=litem;
        self->len++;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_35=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1820, 390, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1820, 391);
        litem_35->prev=self->head;
        litem_35->next=self->tail;
        __dec_obj16=litem_35->item,
        litem_35->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1824, 393);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1824, 392);
        self->tail->prev=litem_35;
        self->head->next=litem_35;
        self->len++;
    }
    else {
        it=self->head;
        i_36=0;
        while(it!=((void*)0)) {
            if(position==i_36) {
                __right_value0 = (void*)0;
                litem_37=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1836, 394, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1836, 395);
                litem_37->prev=it->prev;
                litem_37->next=it;
                __dec_obj17=litem_37->item,
                litem_37->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1840, 397);
                __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1840, 396);
                it->prev->next=litem_37;
                it->prev=litem_37;
                self->len++;
            }
            it=it->next;
            i_36++;
        }
    }
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1853, 398));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1int$* list$1int$_insert(struct list$1int$* self, int position, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_insert"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    int len;
    int i;
    int default_value;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_38;
    struct list_item$1int$* it;
    int i_39;
    struct list_item$1int$* litem_40;
    memset(&len, 0, sizeof(len));
    memset(&i, 0, sizeof(i));
    memset(&litem, 0, sizeof(litem));
    memset(&litem_38, 0, sizeof(litem_38));
    memset(&it, 0, sizeof(it));
    memset(&i_39, 0, sizeof(i_39));
    memset(&litem_40, 0, sizeof(litem_40));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(position<0) {
        position+=self->len+1;
    }
    if(position<0) {
        position=0;
    }
    if(self->len==0||position>=self->len) {
        len=self->len;
        for(i=0        ;i<position-len;i++){
            memset(&default_value,0,sizeof(int));
            list$1int$_push_back(self,default_value);
        }
        list$1int$_push_back(self,item);
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(position==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1808, 401, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1808, 402);
        litem->prev=((void*)0);
        litem->next=self->head;
        litem->item=item;
        self->head->prev=litem;
        self->head=litem;
        self->len++;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_38=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1820, 403, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1820, 404);
        litem_38->prev=self->head;
        litem_38->next=self->tail;
        litem_38->item=item;
        self->tail->prev=litem_38;
        self->head->next=litem_38;
        self->len++;
    }
    else {
        it=self->head;
        i_39=0;
        while(it!=((void*)0)) {
            if(position==i_39) {
                __right_value0 = (void*)0;
                litem_40=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1836, 405, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1836, 406);
                litem_40->prev=it->prev;
                litem_40->next=it;
                litem_40->item=item;
                it->prev->next=litem_40;
                it->prev=litem_40;
                self->len++;
            }
            it=it->next;
            i_39++;
        }
    }
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool ViWin_moveLinesFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_moveLinesFromCommandMode"; neo_current_frame = &fr;
    int head;
    int tail;
    int dest;
    int tmp;
    void* __right_value0 = (void*)0;
    struct list$1int$ph* lines;
    int len;
    int i;
    void* __right_value1 = (void*)0;
    int*  line  ;
    _Bool __result_obj__0;
    memset(&head, 0, sizeof(head));
    memset(&tail, 0, sizeof(tail));
    memset(&dest, 0, sizeof(dest));
    memset(&tmp, 0, sizeof(tmp));
    memset(&lines, 0, sizeof(lines));
    memset(&len, 0, sizeof(len));
    memset(&i, 0, sizeof(i));
    memset(&line, 0, sizeof(line));
    head=0;
    tail=0;
    dest=0;
    if(!parse_move_command(nvi->commandString,nvi,self,&head,&tail,&dest)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    if(list$1int$ph_length(self->texts)==0) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    if(head>tail) {
        tmp=head;
        head=tail;
        tail=tmp;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=list$1int$ph_length(self->texts)) {
        tail=list$1int$ph_length(self->texts)-1;
    }
    if(dest<-1) {
        dest=-1;
    }
    if(dest>=list$1int$ph_length(self->texts)) {
        dest=list$1int$ph_length(self->texts)-1;
    }
    if(dest>=head&&dest<=tail) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    lines=(struct list$1int$ph*)come_increment_ref_count((clone_line_range)(self,head,tail), "12command.nc", 1402, 409);
    len=tail-head+1;
    ViWin_pushUndo_v5(self);
    list$1int$ph_delete(self->texts,head,tail+1);
    list$1int$_delete(self->texts_length,head,tail+1);
    if(dest>tail) {
        dest-=len;
    }
    for(i=0    ;i<list$1int$ph_length(lines);i++){
        __right_value0 = (void*)0;
        line=(int* )come_increment_ref_count(list$1int$ph_item(lines,i,((int* )(__right_value0=__builtin_wstring("","12command.nc",1415)))), "12command.nc", 1415, 410);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1415, 411));
        __right_value0 = (void*)0;
        list$1int$ph_insert(self->texts,dest+1+i,(int* )come_increment_ref_count((int* )come_memdup(line, "12command.nc", 1416, 412, "int* "), "12command.nc", 1416, 413));
        list$1int$_insert(self->texts_length,dest+1+i,wcslen(line));
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1420, 414));
    }
    self->scroll=0;
    self->cursorY=dest+1;
    ViWin_modifyUnderCursorYValue(self);
    ViWin_modifyOverCursorYValue(self);
    self->cursorX=0;
    ViWin_modifyUnderCursorXValue(self);
    ViWin_modifyOverCursorXValue(self);
    self->writed=(_Bool)1;
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(list$1int$ph$p_finalize, lines, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12command.nc}", 1429, 415);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void ViWin_filterTextsFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_filterTextsFromCommandMode"; neo_current_frame = &fr;
    int head;
    int tail;
    void* __right_value0 = (void*)0;
    char*  command  ;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* input_lines;
    int tmp;
    int i;
    void* __right_value2 = (void*)0;
    struct list$1char$ph* lines;
    int i_41;
    memset(&head, 0, sizeof(head));
    memset(&tail, 0, sizeof(tail));
    memset(&command, 0, sizeof(command));
    memset(&input_lines, 0, sizeof(input_lines));
    memset(&tmp, 0, sizeof(tmp));
    memset(&i, 0, sizeof(i));
    memset(&lines, 0, sizeof(lines));
    memset(&i_41, 0, sizeof(i_41));
    head=0;
    tail=0;
    command=(char* )come_increment_ref_count(parse_filter_command(nvi->commandString,nvi,self,&head,&tail), "12command.nc", 1436, 416);
    if(command==((void*)0)) {
                (command = come_decrement_ref_count(command, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1439, 417));
        neo_current_frame = fr.prev;
        return;
    }
    __right_value0 = (void*)0;
    input_lines=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "12command.nc", 1442, 418, "struct list$1char$ph*"), "12command.nc", 1442, 419)), "12command.nc", 1442, 420);
    if(head>tail) {
        tmp=head;
        head=tail;
        tail=tmp;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=list$1int$ph_length(self->texts)) {
        tail=list$1int$ph_length(self->texts)-1;
    }
    for(i=head    ;i<=tail;i++){
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1char$ph_push_back(input_lines,(char* )come_increment_ref_count(wstring_to_string(((int* )(__right_value1=list$1int$ph_item(self->texts,i,((int* )(__right_value0=__builtin_wstring("","12command.nc",1457))))))), "12command.nc", 1457, 421));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1457, 422));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1457, 423));
    }
    __right_value0 = (void*)0;
    lines=(struct list$1char$ph*)come_increment_ref_count(run_filter_command_with_input((char* )come_increment_ref_count(command, "12command.nc", 1459, 424),input_lines), "12command.nc", 1459, 425);
    ViWin_pushUndo_v5(self);
    if(list$1char$ph_length(lines)==0) {
        list$1int$ph_delete(self->texts,head,tail+1);
        list$1int$_delete(self->texts_length,head,tail+1);
        __right_value0 = (void*)0;
        list$1int$ph_insert(self->texts,head,(int* )come_increment_ref_count(__builtin_wstring("","12command.nc",1466), "12command.nc", 1466, 426));
        list$1int$_insert(self->texts_length,head,0);
    }
    else {
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        list$1int$ph_replace(self->texts,head,(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value1=list$1char$ph_item(lines,0,((char* )(__right_value0=__builtin_string("","12command.nc",1470))))))), "12command.nc", 1470, 427));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1470, 428));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1470, 429));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1int$_replace(self->texts_length,head,string_length(((char* )(__right_value1=list$1char$ph_item(lines,0,((char* )(__right_value0=__builtin_string("","12command.nc",1471))))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1471, 430));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1471, 431));
        for(i_41=1        ;i_41<list$1char$ph_length(lines);i_41++){
            if(head+i_41<=tail) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                list$1int$ph_replace(self->texts,head+i_41,(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value1=list$1char$ph_item(lines,i_41,((char* )(__right_value0=__builtin_string("","12command.nc",1475))))))), "12command.nc", 1475, 432));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1475, 433));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1475, 434));
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                list$1int$_replace(self->texts_length,head+i_41,string_length(((char* )(__right_value1=list$1char$ph_item(lines,i_41,((char* )(__right_value0=__builtin_string("","12command.nc",1476))))))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1476, 435));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1476, 436));
            }
            else {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                list$1int$ph_insert(self->texts,head+i_41,(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value1=list$1char$ph_item(lines,i_41,((char* )(__right_value0=__builtin_string("","12command.nc",1479))))))), "12command.nc", 1479, 437));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1479, 438));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1479, 439));
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                list$1int$_insert(self->texts_length,head+i_41,string_length(((char* )(__right_value1=list$1char$ph_item(lines,i_41,((char* )(__right_value0=__builtin_string("","12command.nc",1480))))))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1480, 440));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1480, 441));
            }
        }
        if(head+list$1char$ph_length(lines)<=tail) {
            list$1int$ph_delete(self->texts,head+list$1char$ph_length(lines),tail+1);
            list$1int$_delete(self->texts_length,head+list$1char$ph_length(lines),tail+1);
        }
    }
    self->scroll=0;
    self->cursorY=head;
    self->cursorX=0;
    ViWin_modifyUnderCursorYValue(self);
    ViWin_modifyOverCursorYValue(self);
    ViWin_modifyOverCursorXValue(self);
    self->writed=(_Bool)1;
    (command = come_decrement_ref_count(command, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1499, 442));
    come_call_finalizer(list$1char$ph$p_finalize, input_lines, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12command.nc}", 1499, 443);
    come_call_finalizer(list$1char$ph$p_finalize, lines, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12command.nc}", 1499, 444);
    neo_current_frame = fr.prev;
}

void ViWin_filterVerticalTextsFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_filterVerticalTextsFromCommandMode"; neo_current_frame = &fr;
    int head;
    int tail;
    void* __right_value0 = (void*)0;
    char*  command  ;
    int tmp;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* input_lines;
    int i;
    int*  line  ;
    struct list$1char$ph* lines;
    int i_42;
    int*  line_43  ;
    int*  head_line  ;
    int*  tail_line  ;
    void* __right_value2 = (void*)0;
    int*  middle_line  ;
    int*  new_line  ;
    memset(&head, 0, sizeof(head));
    memset(&tail, 0, sizeof(tail));
    memset(&command, 0, sizeof(command));
    memset(&tmp, 0, sizeof(tmp));
    memset(&input_lines, 0, sizeof(input_lines));
    memset(&i, 0, sizeof(i));
    memset(&line, 0, sizeof(line));
    memset(&lines, 0, sizeof(lines));
    memset(&i_42, 0, sizeof(i_42));
    memset(&line_43, 0, sizeof(line_43));
    memset(&head_line, 0, sizeof(head_line));
    memset(&tail_line, 0, sizeof(tail_line));
    memset(&middle_line, 0, sizeof(middle_line));
    memset(&new_line, 0, sizeof(new_line));
    head=0;
    tail=0;
    command=(char* )come_increment_ref_count(parse_filter_command(nvi->commandString,nvi,self,&head,&tail), "12command.nc", 1503, 445);
    if(command==((void*)0)) {
                (command = come_decrement_ref_count(command, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1506, 446));
        neo_current_frame = fr.prev;
        return;
    }
    if(head>tail) {
        tmp=head;
        head=tail;
        tail=tmp;
    }
    __right_value0 = (void*)0;
    input_lines=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "12command.nc", 1515, 447, "struct list$1char$ph*"), "12command.nc", 1515, 448)), "12command.nc", 1515, 449);
    for(i=head    ;i<=tail;i++){
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,i,((int* )(__right_value0=__builtin_wstring("","12command.nc",1518)))), "12command.nc", 1518, 450);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1518, 451));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1char$ph_push_back(input_lines,(char* )come_increment_ref_count(wstring_to_string(((int* )(__right_value0=wstring_substring(line,self->visualModeVerticalHeadX,self->visualModeVerticalHeadX+self->visualModeVerticalLen)))), "12command.nc", 1520, 452));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1520, 453));
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1523, 454));
    }
    __right_value0 = (void*)0;
    lines=(struct list$1char$ph*)come_increment_ref_count(run_filter_command_with_input((char* )come_increment_ref_count(command, "12command.nc", 1523, 455),input_lines), "12command.nc", 1523, 456);
    ViWin_pushUndo_v5(self);
    for(i_42=head    ;i_42<=tail;i_42++){
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        line_43=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,i_42,((int* )(__right_value0=__builtin_wstring("","12command.nc",1528)))), "12command.nc", 1528, 457);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1528, 458));
        __right_value0 = (void*)0;
        head_line=(int* )come_increment_ref_count(wstring_substring(line_43,0,self->visualModeVerticalHeadX), "12command.nc", 1529, 459);
        __right_value0 = (void*)0;
        tail_line=(int* )come_increment_ref_count(wstring_substring(line_43,self->visualModeVerticalHeadX+self->visualModeVerticalLen,-1), "12command.nc", 1530, 460);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        middle_line=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value1=list$1char$ph_item(lines,i_42-head,((char* )(__right_value0=__builtin_string("","12command.nc",1531))))))), "12command.nc", 1531, 461);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1531, 462));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1531, 463));
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        new_line=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value0=xsprintf("%ls%ls%ls",head_line,middle_line,tail_line)))), "12command.nc", 1532, 464);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "12command.nc", 1532, 465));
        __right_value0 = (void*)0;
        list$1int$ph_replace(self->texts,i_42,(int* )come_increment_ref_count((int* )come_memdup(new_line, "12command.nc", 1534, 466, "int* "), "12command.nc", 1534, 467));
        list$1int$_replace(self->texts_length,i_42,wcslen(new_line));
        (line_43 = come_decrement_ref_count(line_43, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1538, 468));
        (head_line = come_decrement_ref_count(head_line, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1538, 469));
        (tail_line = come_decrement_ref_count(tail_line, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1538, 470));
        (middle_line = come_decrement_ref_count(middle_line, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1538, 471));
        (new_line = come_decrement_ref_count(new_line, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1538, 472));
    }
    self->cursorY=self->visualModeVerticalStartY;
    self->scroll=self->visualModeVerticalStartScroll;
    self->cursorX=self->visualModeVerticalStartX;
    ViWin_modifyUnderCursorYValue(self);
    ViWin_modifyOverCursorYValue(self);
    ViWin_modifyOverCursorXValue(self);
    self->writed=(_Bool)1;
    (command = come_decrement_ref_count(command, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1547, 473));
    come_call_finalizer(list$1char$ph$p_finalize, input_lines, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12command.nc}", 1547, 474);
    come_call_finalizer(list$1char$ph$p_finalize, lines, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12command.nc}", 1547, 475);
    neo_current_frame = fr.prev;
}

void Vi_enterComandMode(struct Vi*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "Vi_enterComandMode"; neo_current_frame = &fr;
    self->modeBeforeCommand=self->mode;
    self->mode=(3);
    if(self->modeBeforeCommand==(2)||self->modeBeforeCommand==(5)||self->modeBeforeCommand==(6)) {
        strncpy(self->commandString,"'<,'>",128);
    }
    else {
        strncpy(self->commandString,"",128);
    }
    self->commandHistoryIndex=list$1char$ph_length(self->commandHistory);
    self->commandHistoryBrowsing=(_Bool)0;
    strncpy(self->commandStringBeforeHistory,self->commandString,128);
    neo_current_frame = fr.prev;
}

void Vi_exitFromComandMode(struct Vi*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "Vi_exitFromComandMode"; neo_current_frame = &fr;
    _Bool force_edit;
    _Bool force_write;
    _Bool force_saveas;
    _Bool write;
    _Bool quit;
    _Bool force_command;
    int filter_head;
    int filter_tail;
    int goto_line;
    void* __right_value0 = (void*)0;
    char*  edit_path  ;
    char*  write_path  ;
    char*  saveas_path  ;
    char*  split_path  ;
    int set_paste;
    char*  shell_command  ;
    char*  filter_command  ;
    _Bool writed;
    memset(&force_edit, 0, sizeof(force_edit));
    memset(&force_write, 0, sizeof(force_write));
    memset(&force_saveas, 0, sizeof(force_saveas));
    memset(&write, 0, sizeof(write));
    memset(&quit, 0, sizeof(quit));
    memset(&force_command, 0, sizeof(force_command));
    memset(&filter_head, 0, sizeof(filter_head));
    memset(&filter_tail, 0, sizeof(filter_tail));
    memset(&goto_line, 0, sizeof(goto_line));
    memset(&edit_path, 0, sizeof(edit_path));
    memset(&write_path, 0, sizeof(write_path));
    memset(&saveas_path, 0, sizeof(saveas_path));
    memset(&split_path, 0, sizeof(split_path));
    memset(&set_paste, 0, sizeof(set_paste));
    memset(&shell_command, 0, sizeof(shell_command));
    memset(&filter_command, 0, sizeof(filter_command));
    memset(&writed, 0, sizeof(writed));
    force_edit=(_Bool)0;
    force_write=(_Bool)0;
    force_saveas=(_Bool)0;
    write=(_Bool)0;
    quit=(_Bool)0;
    force_command=(_Bool)0;
    filter_head=0;
    filter_tail=0;
    goto_line=0;
    edit_path=(char* )come_increment_ref_count(parse_edit_path(self->commandString,&force_edit), "12command.nc", 1578, 476);
    __right_value0 = (void*)0;
    write_path=(char* )come_increment_ref_count(parse_write_path(self->commandString,&force_write), "12command.nc", 1579, 477);
    __right_value0 = (void*)0;
    saveas_path=(char* )come_increment_ref_count(parse_saveas_path(self->commandString,&force_saveas), "12command.nc", 1580, 478);
    __right_value0 = (void*)0;
    split_path=(char* )come_increment_ref_count(parse_sp_path(self->commandString), "12command.nc", 1581, 479);
    set_paste=parse_set_paste_command(self->commandString);
    __right_value0 = (void*)0;
    shell_command=(char* )come_increment_ref_count(parse_shell_command(self->commandString), "12command.nc", 1583, 480);
    __right_value0 = (void*)0;
    filter_command=(char* )come_increment_ref_count(parse_filter_command(self->commandString,self,self->activeWin,&filter_head,&filter_tail), "12command.nc", 1584, 481);
    if(split_path!=((void*)0)) {
        if(string_length(split_path)==0) {
            Vi_openNewFile(self,(char* )come_increment_ref_count(self->activeWin->fileName, "12command.nc", 1588, 482));
        }
        else {
            Vi_openNewFile(self,(char* )come_increment_ref_count(split_path, "12command.nc", 1591, 483));
        }
    }
    else if(saveas_path!=((void*)0)) {
        ViWin_writeFileAs(self->activeWin,(char* )come_increment_ref_count(saveas_path, "12command.nc", 1595, 484),gBinaryMode,(_Bool)1);
    }
    else if(write_path!=((void*)0)) {
        ViWin_writeFileAs(self->activeWin,(char* )come_increment_ref_count(write_path, "12command.nc", 1598, 485),gBinaryMode,(_Bool)0);
    }
    else if(edit_path!=((void*)0)) {
        if(string_length(edit_path)==0) {
            Vi_editActiveFile(self,(char* )come_increment_ref_count(self->activeWin->fileName, "12command.nc", 1602, 486),force_edit);
        }
        else {
            Vi_editActiveFile(self,(char* )come_increment_ref_count(edit_path, "12command.nc", 1605, 487),force_edit);
        }
    }
    else if(parse_command_name(self->commandString,"bn","bnext",((void*)0))) {
        Vi_nextWin(self);
    }
    else if(parse_command_name(self->commandString,"bp","bprevious",((void*)0))) {
        Vi_prevWin(self);
    }
    else if(parse_command_name(self->commandString,"bd","bdelete",&force_command)) {
        if(list$1ViWin$ph_length(self->wins)>1) {
            Vi_closeActiveWin(self);
        }
    }
    else if(set_paste!=0) {
        self->activeWin->pasteMode=set_paste>0;
    }
    else if(filter_command!=((void*)0)) {
        if(self->modeBeforeCommand==(6)) {
            ViWin_filterVerticalTextsFromCommandMode(self->activeWin,self);
        }
        else {
            ViWin_filterTextsFromCommandMode(self->activeWin,self);
        }
    }
    else if(ViWin_moveLinesFromCommandMode(self->activeWin,self)) {
    }
    else if(ViWin_copyLinesFromCommandMode(self->activeWin,self)) {
    }
    else if(ViWin_yankLinesFromCommandMode(self->activeWin,self)) {
    }
    else if(ViWin_deleteLinesFromCommandMode(self->activeWin,self)) {
    }
    else if(ViWin_subAllTextsFromCommandMode(self->activeWin,self)) {
    }
    else if(parse_goto_line_command(self->commandString,self,self->activeWin,&goto_line)) {
        self->activeWin->scroll=0;
        self->activeWin->cursorY=goto_line;
        ViWin_modifyUnderCursorYValue(self->activeWin);
        ViWin_modifyOverCursorYValue(self->activeWin);
        ViWin_modifyUnderCursorXValue(self->activeWin);
        ViWin_modifyOverCursorXValue(self->activeWin);
    }
    else if(shell_command!=((void*)0)) {
        run_shell_command((char* )come_increment_ref_count(shell_command, "12command.nc", 1649, 488));
        Vi_init_curses(self);
    }
    else if(parse_write_quit_command(self->commandString,&write,&quit,&force_command)) {
        if(write) {
            ViWin_writeFile(self->activeWin,gBinaryMode);
        }
        if(quit) {
            writed=self->activeWin->writed;
            if(!writed||force_command||write) {
                if(list$1ViWin$ph_length(self->wins)==1) {
                    ViWin_saveCursorPosition(self->activeWin,self->activeWin->fileName);
                    self->appEnd=(_Bool)1;
                }
                else {
                    Vi_closeActiveWin(self);
                }
            }
        }
    }
    else {
        if(parse_command_name(self->commandString,((void*)0),"shell",((void*)0))) {
            endwin();
            (void)system("bash");
            Vi_init_curses(self);
        }
    }
    self->mode=(0);
    self->modeBeforeCommand=(0);
    (edit_path = come_decrement_ref_count(edit_path, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1686, 489));
    (write_path = come_decrement_ref_count(write_path, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1686, 490));
    (saveas_path = come_decrement_ref_count(saveas_path, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1686, 491));
    (split_path = come_decrement_ref_count(split_path, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1686, 492));
    (shell_command = come_decrement_ref_count(shell_command, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1686, 493));
    (filter_command = come_decrement_ref_count(filter_command, (void*)0, (void*)0, 0, 0, (void*)0, "12command.nc", 1686, 494));
    neo_current_frame = fr.prev;
}

static int list$1ViWin$ph_length(struct list$1ViWin$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1ViWin$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
            neo_current_frame = fr.prev;
}

static void lambda2(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda2"; neo_current_frame = &fr;
    Vi_enterComandMode(self);
    neo_current_frame = fr.prev;
}

struct Vi*  Vi_initialize_v12(struct Vi*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "Vi_initialize_v12"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct Vi*  result  ;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj18;
    struct Vi*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct Vi* )come_increment_ref_count(Vi_initialize_v11((struct Vi* )come_increment_ref_count(self, "12command.nc", 1688, 495)), "12command.nc", 1688, 496);
    strncpy(result->commandString,"",128);
    __right_value0 = (void*)0;
    __dec_obj18=result->commandHistory,
    result->commandHistory=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "12command.nc", 1691, 497, "struct list$1char$ph*"), "12command.nc", 1691, 498)), "12command.nc", 1697, 501);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj18,(void*)0, (void*)0, 0, 0, 0, (void*)0, "12command.nc", 1697, 500);
    result->commandHistoryIndex=0;
    result->commandHistoryBrowsing=(_Bool)0;
    strncpy(result->commandStringBeforeHistory,"",128);
    result->modeBeforeCommand=(0);
    list$1lambda$_replace(result->events,58,lambda2);
        __result_obj__0 = (struct Vi* )come_increment_ref_count(result, "12command.nc", 1701, 508);
    come_call_finalizer(Vi_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0, "12command.nc}", 1701, 558);
    come_call_finalizer(Vi_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "12command.nc}", 1701, 559);
    neo_current_frame = fr.prev;
    come_call_finalizer(Vi_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "12command.nc}", 1701, 560);
    return __result_obj__0;
}

static void list$1char$ph_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 499);
    }
        neo_current_frame = fr.prev;
}

static struct list$1lambda$* list$1lambda$_replace(struct list$1lambda$* self, int position, void (*item)(struct Vi* ,int))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1lambda$_replace"; neo_current_frame = &fr;
    struct list$1lambda$* __result_obj__0;
    int len;
    int i;
    void (*default_value)(struct Vi* ,int);
    struct list_item$1lambda$* it;
    int i_46;
    memset(&len, 0, sizeof(len));
    memset(&i, 0, sizeof(i));
    memset(&it, 0, sizeof(it));
    memset(&i_46, 0, sizeof(i_46));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(position<0) {
        position+=self->len;
    }
    if(position<0) {
        position=0;
    }
    if(self->len==0||position>=self->len) {
        len=self->len;
        for(i=0        ;i<position-len;i++){
            memset(&default_value,0,sizeof(void (*)(struct Vi* ,int)));
            list$1lambda$_push_back(self,default_value);
        }
        list$1lambda$_push_back(self,item);
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    i_46=0;
    while(it!=((void*)0)) {
        if(position==i_46) {
            it->item=item;
            break;
        }
        it=it->next;
        i_46++;
    }
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
    struct list_item$1lambda$* litem_44;
    struct list_item$1lambda$* litem_45;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_44, 0, sizeof(litem_44));
    memset(&litem_45, 0, sizeof(litem_45));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1lambda$*)come_increment_ref_count(((struct list_item$1lambda$*)(__right_value0=(struct list_item$1lambda$*)come_calloc(1, sizeof(struct list_item$1lambda$)*(1), "/usr/local/include/neo-c.h", 1619, 502, "struct list_item$1lambda$*"))), "/usr/local/include/neo-c.h", 1619, 503);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_44=(struct list_item$1lambda$*)come_increment_ref_count(((struct list_item$1lambda$*)(__right_value0=(struct list_item$1lambda$*)come_calloc(1, sizeof(struct list_item$1lambda$)*(1), "/usr/local/include/neo-c.h", 1629, 504, "struct list_item$1lambda$*"))), "/usr/local/include/neo-c.h", 1629, 505);
        litem_44->prev=self->head;
        litem_44->next=((void*)0);
        litem_44->item=item;
        self->tail=litem_44;
        self->head->next=litem_44;
    }
    else {
        __right_value0 = (void*)0;
        litem_45=(struct list_item$1lambda$*)come_increment_ref_count(((struct list_item$1lambda$*)(__right_value0=(struct list_item$1lambda$*)come_calloc(1, sizeof(struct list_item$1lambda$)*(1), "/usr/local/include/neo-c.h", 1639, 506, "struct list_item$1lambda$*"))), "/usr/local/include/neo-c.h", 1639, 507);
        litem_45->prev=self->tail;
        litem_45->next=((void*)0);
        litem_45->item=item;
        self->tail->next=litem_45;
        self->tail=litem_45;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void Vi_finalize(struct Vi*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "Vi_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->wins!=((void*)0)) {
        come_call_finalizer(list$1ViWin$ph$p_finalize, self->wins, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 8, 543);
    }
    if(self!=((void*)0)&&self->events!=((void*)0)) {
        come_call_finalizer(list$1lambda$$p_finalize, self->events, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 2, 545);
    }
    if(self!=((void*)0)&&self->yank!=((void*)0)) {
        come_call_finalizer(list$1int$ph$p_finalize, self->yank, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 4, 546);
    }
    if(self!=((void*)0)&&self->fileYank!=((void*)0)) {
        come_call_finalizer(list$1int$ph$p_finalize, self->fileYank, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 5, 547);
    }
    if(self!=((void*)0)&&self->registers!=((void*)0)) {
        come_call_finalizer(map$2int$list$1int$ph$ph$p_finalize, self->registers, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 0, 552);
    }
    if(self!=((void*)0)&&self->registerKinds!=((void*)0)) {
        come_call_finalizer(map$2int$int$$p_finalize, self->registerKinds, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 0, 556);
    }
    if(self!=((void*)0)&&self->commandHistory!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->commandHistory, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 8, 557);
    }
        neo_current_frame = fr.prev;
}

static void list$1ViWin$ph$p_finalize(struct list$1ViWin$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1ViWin$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1ViWin$ph* it;
    struct list_item$1ViWin$ph* prev_it;
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
        come_call_finalizer(list_item$1ViWin$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 542);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1ViWin$ph$p_finalize(struct list_item$1ViWin$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1ViWin$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(ViWin_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1ViWin$ph$p_finalize}", 2, 541);
    }
            neo_current_frame = fr.prev;
}

static void ViWin_finalize(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->texts!=((void*)0)) {
        come_call_finalizer(list$1int$ph$p_finalize, self->texts, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 2, 509);
    }
    if(self!=((void*)0)&&self->texts_length!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->texts_length, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 18, 511);
    }
    if(self!=((void*)0)&&self->returnPoint!=((void*)0)) {
        come_call_finalizer(tuple3$3int$int$int$$p_finalize, self->returnPoint, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 4, 512);
    }
    if(self!=((void*)0)&&self->returnPointStack!=((void*)0)) {
        come_call_finalizer(list$1tuple3$3int$int$int$$ph$p_finalize, self->returnPointStack, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 0, 515);
    }
    if(self!=((void*)0)&&self->undo!=((void*)0)) {
        come_call_finalizer(list$1list$1int$ph$ph$p_finalize, self->undo, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 2, 518);
    }
    if(self!=((void*)0)&&self->undoScroll!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->undoScroll, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 7, 519);
    }
    if(self!=((void*)0)&&self->undoCursorX!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->undoCursorX, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 8, 520);
    }
    if(self!=((void*)0)&&self->undoCursorY!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->undoCursorY, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 9, 521);
    }
    if(self!=((void*)0)&&self->fileName!=((void*)0)) {
        (self->fileName = come_decrement_ref_count(self->fileName, (void*)0, (void*)0, 0, 0, (void*)0, "ViWin_finalize", 10, 522));
    }
    if(self!=((void*)0)&&self->inputedKeys!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->inputedKeys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 11, 523);
    }
    if(self!=((void*)0)&&self->savedInputedKeys!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->savedInputedKeys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 12, 524);
    }
    if(self!=((void*)0)&&self->macro!=((void*)0)) {
        come_call_finalizer(map$2int$list$1list$1int$$ph$ph$p_finalize, self->macro, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 2, 531);
    }
    if(self!=((void*)0)&&self->recordingMacro!=((void*)0)) {
        come_call_finalizer(list$1list$1int$$ph$p_finalize, self->recordingMacro, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 14, 532);
    }
    if(self!=((void*)0)&&self->runningMacro!=((void*)0)) {
        come_call_finalizer(list$1list$1int$$ph$p_finalize, self->runningMacro, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 15, 533);
    }
    if(self!=((void*)0)&&self->mark!=((void*)0)) {
        come_call_finalizer(map$2int$tuple3$3int$int$int$$ph$p_finalize, self->mark, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 2, 538);
    }
    if(self!=((void*)0)&&self->completionCandidates!=((void*)0)) {
        come_call_finalizer(list$1int$ph$p_finalize, self->completionCandidates, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 17, 539);
    }
    if(self!=((void*)0)&&self->completionPrefix!=((void*)0)) {
        (self->completionPrefix = come_decrement_ref_count(self->completionPrefix, (void*)0, (void*)0, 0, 0, (void*)0, "ViWin_finalize", 18, 540));
    }
            neo_current_frame = fr.prev;
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 510);
    }
            neo_current_frame = fr.prev;
}

static void tuple3$3int$int$int$$p_finalize(struct tuple3$3int$int$int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3int$int$int$$p_finalize"; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

static void list$1tuple3$3int$int$int$$ph$p_finalize(struct list$1tuple3$3int$int$int$$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple3$3int$int$int$$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple3$3int$int$int$$ph* it;
    struct list_item$1tuple3$3int$int$int$$ph* prev_it;
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
        come_call_finalizer(list_item$1tuple3$3int$int$int$$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 514);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple3$3int$int$int$$ph$p_finalize(struct list_item$1tuple3$3int$int$int$$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple3$3int$int$int$$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple3$3int$int$int$$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple3$3int$int$int$$ph$p_finalize}", 2, 513);
    }
            neo_current_frame = fr.prev;
}

static void list$1list$1int$ph$ph$p_finalize(struct list$1list$1int$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1list$1int$ph$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1list$1int$ph$ph* it;
    struct list_item$1list$1int$ph$ph* prev_it;
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
        come_call_finalizer(list_item$1list$1int$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 517);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1list$1int$ph$ph$p_finalize(struct list_item$1list$1int$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1list$1int$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(list$1int$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1list$1int$ph$ph$p_finalize}", 2, 516);
    }
            neo_current_frame = fr.prev;
}

static void map$2int$list$1list$1int$$ph$ph$p_finalize(struct map$2int$list$1list$1int$$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1list$1int$$ph$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_47;
    memset(&i, 0, sizeof(i));
    memset(&i_47, 0, sizeof(i_47));
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(list$1list$1int$$ph$p_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2, 527);
            }
        }
    }
    come_free((char*)self->items);
    for(i_47=0    ;i_47<self->size;i_47++){
        if(self->item_existance[i_47]) {
            if(0) {
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1int$$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3419, 528);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3421, 529));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3422, 530));
            neo_current_frame = fr.prev;
}

static void list$1list$1int$$ph$p_finalize(struct list$1list$1int$$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1list$1int$$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1list$1int$$ph* it;
    struct list_item$1list$1int$$ph* prev_it;
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
        come_call_finalizer(list_item$1list$1int$$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 526);
    }
                    neo_current_frame = fr.prev;
}

static void list_item$1list$1int$$ph$p_finalize(struct list_item$1list$1int$$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1list$1int$$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1list$1int$$ph$p_finalize}", 2, 525);
    }
            neo_current_frame = fr.prev;
}

static void map$2int$tuple3$3int$int$int$$ph$p_finalize(struct map$2int$tuple3$3int$int$int$$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$tuple3$3int$int$int$$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_48;
    memset(&i, 0, sizeof(i));
    memset(&i_48, 0, sizeof(i_48));
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(tuple3$3int$int$int$$p_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3404, 534);
            }
        }
    }
    come_free((char*)self->items);
    for(i_48=0    ;i_48<self->size;i_48++){
        if(self->item_existance[i_48]) {
            if(0) {
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1int$$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3419, 535);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3421, 536));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3422, 537));
            neo_current_frame = fr.prev;
}

static void list$1lambda$$p_finalize(struct list$1lambda$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1lambda$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1lambda$* it;
    struct list_item$1lambda$* prev_it;
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
        come_call_finalizer(list_item$1lambda$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 544);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1lambda$$p_finalize(struct list_item$1lambda$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1lambda$$p_finalize"; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

static void map$2int$list$1int$ph$ph$p_finalize(struct map$2int$list$1int$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1int$ph$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_49;
    memset(&i, 0, sizeof(i));
    memset(&i_49, 0, sizeof(i_49));
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(list$1int$ph$p_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3404, 548);
            }
        }
    }
    come_free((char*)self->items);
    for(i_49=0    ;i_49<self->size;i_49++){
        if(self->item_existance[i_49]) {
            if(0) {
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1int$$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3419, 549);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3421, 550));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3422, 551));
            neo_current_frame = fr.prev;
}

static void map$2int$int$$p_finalize(struct map$2int$int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$int$$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_50;
    memset(&i, 0, sizeof(i));
    memset(&i_50, 0, sizeof(i_50));
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(0) {
            }
        }
    }
    come_free((char*)self->items);
    for(i_50=0    ;i_50<self->size;i_50++){
        if(self->item_existance[i_50]) {
            if(0) {
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1int$$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3419, 553);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3421, 554));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3422, 555));
            neo_current_frame = fr.prev;
}

