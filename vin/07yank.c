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
void ViWin_commandModeView(struct ViWin*  self  , struct Vi*  nvi  );
char*  ViWin_selector(struct ViWin*  self  , struct list$1char$ph* lines);
char*  ViWin_selectFileCompletionCandidate(struct ViWin*  self  , char*  word  );
void ViWin_fileCompetion(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_commandModeInput(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_view_v12(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_input_v12(struct ViWin*  self  , struct Vi*  nvi  );
_Bool ViWin_subAllTextsFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  );
_Bool ViWin_yankLinesFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  );
_Bool ViWin_copyLinesFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  );
_Bool ViWin_moveLinesFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  );
_Bool ViWin_deleteLinesFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_filterTextsFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_filterVerticalTextsFromCommandMode(struct ViWin*  self  , struct Vi*  nvi  );
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
static _Bool is_named_register(int key);
static void save_yank_to_named_register(struct Vi*  nvi  );
static struct map$2int$list$1int$ph$ph* map$2int$list$1int$ph$ph_insert(struct map$2int$list$1int$ph$ph* self, int key, struct list$1int$ph* item, _Bool by_pointer);
static void list$1int$ph$p_finalize(struct list$1int$ph* self);
static void list_item$1int$ph$p_finalize(struct list_item$1int$ph* self);
static void map$2int$list$1int$ph$ph_rehash(struct map$2int$list$1int$ph$ph* self);
static void list$1int$ph_operator_store_element(struct list$1int$ph* self, int position, int*  item  );
static struct list$1int$ph* list$1int$ph_replace(struct list$1int$ph* self, int position, int*  item  );
static struct list$1int$ph* list$1int$ph_push_back(struct list$1int$ph* self, int*  item  );
static void map$2int$list$1int$ph$ph_remove_ordered_entry(struct map$2int$list$1int$ph$ph* self, int key, _Bool by_pointer);
static int map$2int$list$1int$ph$ph_key_position(struct map$2int$list$1int$ph$ph* self, int key, _Bool by_pointer);
static struct list$1int$* list$1int$_delete(struct list$1int$* self, int head, int tail);
static struct list$1int$* list$1int$_reset(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static struct list$1int$ph* list$1int$ph$p_clone(struct list$1int$ph* self);
static struct list$1int$ph* list$1int$ph_initialize(struct list$1int$ph* self);
static struct list$1int$ph* list$1int$ph_add(struct list$1int$ph* self, int*  item  );
static struct map$2int$int$* map$2int$int$_insert(struct map$2int$int$* self, int key, int item, _Bool by_pointer);
static void map$2int$int$_rehash(struct map$2int$int$* self);
static void map$2int$int$_remove_ordered_entry(struct map$2int$int$* self, int key, _Bool by_pointer);
static int map$2int$int$_key_position(struct map$2int$int$* self, int key, _Bool by_pointer);
static _Bool load_yank_from_named_register(struct Vi*  nvi  );
static struct list$1int$ph* map$2int$list$1int$ph$ph_at(struct map$2int$list$1int$ph$ph* self, int key, struct list$1int$ph* default_value, _Bool by_pointer);
static void list$1int$ph_finalize(struct list$1int$ph* self);
static int map$2int$int$_at(struct map$2int$int$* self, int key, int default_value, _Bool by_pointer);
static void ensure_line_has_width(struct ViWin*  self  , int y, int width);
static int*  list$1int$ph_item(struct list$1int$ph* self, int position, int*  default_value  );
static struct list$1int$* list$1int$_replace(struct list$1int$* self, int position, int item);
static void paste_block(struct ViWin*  self  , struct Vi*  nvi  , int insert_x);
static int list$1int$ph_length(struct list$1int$ph* self);
static _Bool prepare_yank_for_paste(struct ViWin*  self  , struct Vi*  nvi  );
_Bool ViWin_saveYankToFile(struct ViWin*  self  , struct Vi*  nvi  );
static int*  list$1int$ph_begin(struct list$1int$ph* self);
static _Bool list$1int$ph_end(struct list$1int$ph* self);
static int*  list$1int$ph_next(struct list$1int$ph* self);
_Bool ViWin_loadYankFromFile(struct ViWin*  self  , struct Vi*  nvi  );
static struct list$1int$ph* list$1int$ph_reset(struct list$1int$ph* self);
_Bool ViWin_saveFileYankToFile(struct ViWin*  self  , struct Vi*  nvi  );
_Bool ViWin_loadFileYankFromFile(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_pasteAfterCursor(struct ViWin*  self  , struct Vi*  nvi  );
static struct list$1int$ph* list$1int$ph_insert(struct list$1int$ph* self, int position, int*  item  );
static struct list$1int$* list$1int$_insert(struct list$1int$* self, int position, int item);
static struct list$1int$ph* list$1int$ph_sublist(struct list$1int$ph* self, int begin, int tail);
void ViWin_pasteBeforeCursor(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_filePasteAfterCursor(struct ViWin*  self  , struct Vi*  nvi  );
static void lambda1(struct Vi*  self  , int key);
static void lambda2(struct Vi*  self  , int key);
static void lambda3(struct Vi*  self  , int key);
struct Vi*  Vi_initialize_v7(struct Vi*  self  );
static struct map$2int$list$1int$ph$ph* map$2int$list$1int$ph$ph_initialize(struct map$2int$list$1int$ph$ph* self);
static struct list$1int$* list$1int$_initialize(struct list$1int$* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list$1int$_finalize(struct list$1int$* self);
static void map$2int$list$1int$ph$ph$p_finalize(struct map$2int$list$1int$ph$ph* self);
static void map$2int$list$1int$ph$ph_finalize(struct map$2int$list$1int$ph$ph* self);
static struct map$2int$int$* map$2int$int$_initialize(struct map$2int$int$* self);
static void map$2int$int$$p_finalize(struct map$2int$int$* self);
static void map$2int$int$_finalize(struct map$2int$int$* self);
static struct list$1lambda$* list$1lambda$_replace(struct list$1lambda$* self, int position, void (*item)(struct Vi* ,int));
static struct list$1lambda$* list$1lambda$_push_back(struct list$1lambda$* self, void (*item)(struct Vi* ,int));
static void Vi_finalize(struct Vi*  self  );
static void list$1ViWin$ph$p_finalize(struct list$1ViWin$ph* self);
static void list_item$1ViWin$ph$p_finalize(struct list_item$1ViWin$ph* self);
static void ViWin_finalize(struct ViWin*  self  );
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
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
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
static _Bool is_named_register(int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_named_register"; neo_current_frame = &fr;
    # 5 "07yank.nc"
        neo_current_frame = fr.prev;
    return key>=97&&key<=122;
    neo_current_frame = fr.prev;
}

static void save_yank_to_named_register(struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "save_yank_to_named_register"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    # 15 "07yank.nc"
    if(is_named_register(nvi->selectedRegister)) {
        # 11 "07yank.nc"
        map$2int$list$1int$ph$ph_insert(nvi->registers,nvi->selectedRegister,(struct list$1int$ph*)come_increment_ref_count(list$1int$ph$p_clone(nvi->yank), "07yank.nc", 11, 81),(_Bool)0);
        # 12 "07yank.nc"
        map$2int$int$_insert(nvi->registerKinds,nvi->selectedRegister,nvi->yankKind,(_Bool)0);
        # 13 "07yank.nc"
        nvi->selectedRegister=-1;
    }
    neo_current_frame = fr.prev;
}

static struct map$2int$list$1int$ph$ph* map$2int$list$1int$ph$ph_insert(struct map$2int$list$1int$ph$ph* self, int key, struct list$1int$ph* item, _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1int$ph$ph_insert"; neo_current_frame = &fr;
    struct map$2int$list$1int$ph$ph* __result_obj__0;
    _Bool add_to_key_list;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 3865 "/usr/local/include/neo-c.h"
    # 3871 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 3868 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        come_call_finalizer(list$1int$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 10, 3);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3874 "/usr/local/include/neo-c.h"
    if(self->len*10>=self->size) {
        # 3872 "/usr/local/include/neo-c.h"
        map$2int$list$1int$ph$ph_rehash(self);
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
                map$2int$list$1int$ph$ph_remove_ordered_entry(self,self->keys[it],by_pointer);
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
                    come_call_finalizer(list$1int$ph$p_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3894, 42);
                    # 3895 "/usr/local/include/neo-c.h"
                    self->items[it]=(struct list$1int$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3895, 43);
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
                self->items[it]=(struct list$1int$ph*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3924, 44);
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
    come_call_finalizer(list$1int$ph$p_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3941, 51);
    neo_current_frame = fr.prev;
    return __result_obj__0;
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
        come_call_finalizer(list_item$1int$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 2);
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
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1int$ph$p_finalize", 2, 1));
    }
            neo_current_frame = fr.prev;
}

static void map$2int$list$1int$ph$ph_rehash(struct map$2int$list$1int$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1int$ph$ph_rehash"; neo_current_frame = &fr;
    int old_size;
    int size;
    void* __right_value0 = (void*)0;
    int* keys;
    struct list$1int$ph** items;
    unsigned int* hashes;
    _Bool* item_existance;
    int i;
    int len;
    int i_0;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    # 3782 "/usr/local/include/neo-c.h"
    # 3784 "/usr/local/include/neo-c.h"
    old_size=self->size;
    # 3785 "/usr/local/include/neo-c.h"
    size=self->size*10;
    # 3786 "/usr/local/include/neo-c.h"
    keys=(int*)come_increment_ref_count(((int*)(__right_value0=(int*)come_calloc(1, sizeof(int)*(1*(size)), "/usr/local/include/neo-c.h", 3786, 4, "int*"))), "/usr/local/include/neo-c.h", 3786, 5);
    # 3787 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    items=(struct list$1int$ph**)come_increment_ref_count(((struct list$1int$ph**)(__right_value0=(struct list$1int$ph**)come_calloc(1, sizeof(struct list$1int$ph*)*(1*(size)), "/usr/local/include/neo-c.h", 3787, 6, "struct list$1int$ph**"))), "/usr/local/include/neo-c.h", 3787, 7);
    # 3788 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "/usr/local/include/neo-c.h", 3788, 8, "unsigned int*"))), "/usr/local/include/neo-c.h", 3788, 9);
    # 3789 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 3789, 10, "_Bool*"))), "/usr/local/include/neo-c.h", 3789, 11);
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
    for(i_0=0    ;i_0<old_size;i_0++){
        # 3802 "/usr/local/include/neo-c.h"
        if(!self->item_existance[i_0]) {
            # 3799 "/usr/local/include/neo-c.h"
            continue;
        }
        # 3802 "/usr/local/include/neo-c.h"
        key_hash=self->hashes[i_0];
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
                keys[n]=self->keys[i_0];
                # 3822 "/usr/local/include/neo-c.h"
                items[n]=self->items[i_0];
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
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3831, 36));
    # 3832 "/usr/local/include/neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3832, 37));
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

static void list$1int$ph_operator_store_element(struct list$1int$ph* self, int position, int*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_operator_store_element"; neo_current_frame = &fr;
    # 2142 "/usr/local/include/neo-c.h"
    list$1int$ph_replace(self,position,(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2142, 34));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3822, 35));
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
    int i_3;
    int*  __dec_obj4  ;
    # 2019 "/usr/local/include/neo-c.h"
    # 2025 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 2022 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2022, 12));
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
            memset(&default_value,0,sizeof(int* ));
            # 2037 "/usr/local/include/neo-c.h"
            list$1int$ph_push_back(self,(int* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2037, 27));
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2039, 28));
        }
        # 2039 "/usr/local/include/neo-c.h"
        list$1int$ph_push_back(self,(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2039, 29));
        # 2040 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2040, 30));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2043 "/usr/local/include/neo-c.h"
    it=self->head;
    # 2044 "/usr/local/include/neo-c.h"
    i_3=0;
    # 2054 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 2050 "/usr/local/include/neo-c.h"
        if(position==i_3) {
            # 2047 "/usr/local/include/neo-c.h"
            __dec_obj4=it->item,
            it->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2047, 32);
            __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 2047, 31);
            # 2048 "/usr/local/include/neo-c.h"
            break;
        }
        # 2050 "/usr/local/include/neo-c.h"
        it=it->next;
        # 2051 "/usr/local/include/neo-c.h"
        i_3++;
    }
    # 2054 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2054, 33));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1int$ph* list$1int$ph_push_back(struct list$1int$ph* self, int*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_push_back"; neo_current_frame = &fr;
    struct list$1int$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$ph* litem;
    int*  __dec_obj1  ;
    struct list_item$1int$ph* litem_1;
    int*  __dec_obj2  ;
    struct list_item$1int$ph* litem_2;
    int*  __dec_obj3  ;
    # 1618 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1615, 13));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/usr/local/include/neo-c.h"
    if(self->len==0) {
        # 1619 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1619, 14, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1619, 15);
        # 1621 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/usr/local/include/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/usr/local/include/neo-c.h"
        __dec_obj1=litem->item,
        litem->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 17);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1623, 16);
        # 1625 "/usr/local/include/neo-c.h"
        self->tail=litem;
        # 1626 "/usr/local/include/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1629, 18, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1629, 19);
        # 1631 "/usr/local/include/neo-c.h"
        litem_1->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_1->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        __dec_obj2=litem_1->item,
        litem_1->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 21);
        __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1633, 20);
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_1;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_1;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1639, 22, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1639, 23);
        # 1641 "/usr/local/include/neo-c.h"
        litem_2->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_2->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        __dec_obj3=litem_2->item,
        litem_2->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 25);
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1643, 24);
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_2;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_2;
    }
    # 1649 "/usr/local/include/neo-c.h"
    self->len++;
    # 1651 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1651, 26));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2int$list$1int$ph$ph_remove_ordered_entry(struct map$2int$list$1int$ph$ph* self, int key, _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1int$ph$ph_remove_ordered_entry"; neo_current_frame = &fr;
    int pos;
    # 3418 "/usr/local/include/neo-c.h"
    pos=map$2int$list$1int$ph$ph_key_position(self,key,by_pointer);
    # 3422 "/usr/local/include/neo-c.h"
    if(pos>=0) {
        # 3420 "/usr/local/include/neo-c.h"
        list$1int$_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2int$list$1int$ph$ph_key_position(struct map$2int$list$1int$ph$ph* self, int key, _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1int$ph$ph_key_position"; neo_current_frame = &fr;
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
    struct list_item$1int$* it_4;
    int i_5;
    struct list_item$1int$* prev_it_6;
    struct list_item$1int$* it_7;
    struct list_item$1int$* head_prev_it;
    struct list_item$1int$* tail_it;
    int i_8;
    struct list_item$1int$* prev_it_9;
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
                come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1934, 39);
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
        it_4=self->head;
        # 1951 "/usr/local/include/neo-c.h"
        i_5=0;
        # 1973 "/usr/local/include/neo-c.h"
        while(it_4!=((void*)0)) {
            # 1958 "/usr/local/include/neo-c.h"
            if(i_5==head) {
                # 1954 "/usr/local/include/neo-c.h"
                self->tail=it_4->prev;
                # 1955 "/usr/local/include/neo-c.h"
                self->tail->next=((void*)0);
            }
            # 1972 "/usr/local/include/neo-c.h"
            if(i_5>=head) {
                # 1959 "/usr/local/include/neo-c.h"
                prev_it_6=it_4;
                # 1961 "/usr/local/include/neo-c.h"
                it_4=it_4->next;
                # 1962 "/usr/local/include/neo-c.h"
                i_5++;
                # 1964 "/usr/local/include/neo-c.h"
                come_call_finalizer(list_item$1int$$p_finalize, prev_it_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1964, 40);
                # 1966 "/usr/local/include/neo-c.h"
                self->len--;
            }
            else {
                # 1969 "/usr/local/include/neo-c.h"
                it_4=it_4->next;
                # 1970 "/usr/local/include/neo-c.h"
                i_5++;
            }
        }
    }
    else {
        # 1975 "/usr/local/include/neo-c.h"
        it_7=self->head;
        # 1977 "/usr/local/include/neo-c.h"
        head_prev_it=((void*)0);
        # 1978 "/usr/local/include/neo-c.h"
        tail_it=((void*)0);
        # 1981 "/usr/local/include/neo-c.h"
        i_8=0;
        # 2007 "/usr/local/include/neo-c.h"
        while(it_7!=((void*)0)) {
            # 1986 "/usr/local/include/neo-c.h"
            if(i_8==head) {
                # 1984 "/usr/local/include/neo-c.h"
                head_prev_it=it_7->prev;
            }
            # 1990 "/usr/local/include/neo-c.h"
            if(i_8==tail) {
                # 1987 "/usr/local/include/neo-c.h"
                tail_it=it_7;
            }
            # 2005 "/usr/local/include/neo-c.h"
            if(i_8>=head&&i_8<tail) {
                # 1992 "/usr/local/include/neo-c.h"
                prev_it_9=it_7;
                # 1994 "/usr/local/include/neo-c.h"
                it_7=it_7->next;
                # 1995 "/usr/local/include/neo-c.h"
                i_8++;
                # 1997 "/usr/local/include/neo-c.h"
                come_call_finalizer(list_item$1int$$p_finalize, prev_it_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1997, 41);
                # 1999 "/usr/local/include/neo-c.h"
                self->len--;
            }
            else {
                # 2002 "/usr/local/include/neo-c.h"
                it_7=it_7->next;
                # 2003 "/usr/local/include/neo-c.h"
                i_8++;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1856, 38);
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

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1int$$p_finalize"
            neo_current_frame = fr.prev;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_push_back"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_10;
    struct list_item$1int$* litem_11;
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1619, 45, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1619, 46);
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
        litem_10=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1629, 47, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1629, 48);
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
        litem_11=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1639, 49, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1639, 50);
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

static struct list$1int$ph* list$1int$ph$p_clone(struct list$1int$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph$p_clone"; neo_current_frame = &fr;
    struct list$1int$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$ph* result;
    struct list_item$1int$ph* it;
    # 1513 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1511 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct list$1int$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 52);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 53);
        return __result_obj__0;
    }
    # 1513 "/usr/local/include/neo-c.h"
    result=(struct list$1int$ph*)come_increment_ref_count(list$1int$ph_initialize((struct list$1int$ph*)come_increment_ref_count((struct list$1int$ph*)come_calloc(1, sizeof(struct list$1int$ph)*(1), "/usr/local/include/neo-c.h", 1513, 54, "struct list$1int$ph*"), "/usr/local/include/neo-c.h", 1513, 58)), "/usr/local/include/neo-c.h", 1513, 59);
    # 1515 "/usr/local/include/neo-c.h"
    it=self->head;
    # 1527 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "/usr/local/include/neo-c.h"
        if(1) {
            # 1518 "/usr/local/include/neo-c.h"
            __right_value0 = (void*)0;
            list$1int$ph_add(result,(int* )come_increment_ref_count((int* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1518, 74, "int* "), "/usr/local/include/neo-c.h", 1518, 75));
        }
        else {
            # 1521 "/usr/local/include/neo-c.h"
            __right_value0 = (void*)0;
            list$1int$ph_add(result,(int* )come_increment_ref_count((int* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1521, 76, "int* "), "/usr/local/include/neo-c.h", 1521, 77));
        }
        # 1524 "/usr/local/include/neo-c.h"
        it=it->next;
    }
    # 1527 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1int$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 78);
    come_call_finalizer(list$1int$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 79);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 80);
    return __result_obj__0;
}

static struct list$1int$ph* list$1int$ph_initialize(struct list$1int$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_initialize"; neo_current_frame = &fr;
    struct list$1int$ph* __result_obj__0;
    # 1481 "/usr/local/include/neo-c.h"
    self->head=((void*)0);
    # 1482 "/usr/local/include/neo-c.h"
    self->tail=((void*)0);
    # 1483 "/usr/local/include/neo-c.h"
    self->len=0;
    # 1485 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1int$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 55);
    come_call_finalizer(list$1int$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 56);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 57);
    return __result_obj__0;
}

static struct list$1int$ph* list$1int$ph_add(struct list$1int$ph* self, int*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_add"; neo_current_frame = &fr;
    struct list$1int$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$ph* litem;
    int*  __dec_obj5  ;
    struct list_item$1int$ph* litem_12;
    int*  __dec_obj6  ;
    struct list_item$1int$ph* litem_13;
    int*  __dec_obj7  ;
    # 1533 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1531 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1531, 60));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "/usr/local/include/neo-c.h"
    if(self->len==0) {
        # 1534 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1534, 61, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1534, 62);
        # 1536 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1537 "/usr/local/include/neo-c.h"
        litem->next=((void*)0);
        # 1538 "/usr/local/include/neo-c.h"
        __dec_obj5=litem->item,
        litem->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 64);
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 63);
        # 1540 "/usr/local/include/neo-c.h"
        self->tail=litem;
        # 1541 "/usr/local/include/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_12=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1544, 65, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1544, 66);
        # 1546 "/usr/local/include/neo-c.h"
        litem_12->prev=self->head;
        # 1547 "/usr/local/include/neo-c.h"
        litem_12->next=((void*)0);
        # 1548 "/usr/local/include/neo-c.h"
        __dec_obj6=litem_12->item,
        litem_12->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 68);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 67);
        # 1550 "/usr/local/include/neo-c.h"
        self->tail=litem_12;
        # 1551 "/usr/local/include/neo-c.h"
        self->head->next=litem_12;
    }
    else {
        # 1554 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_13=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1554, 69, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1554, 70);
        # 1556 "/usr/local/include/neo-c.h"
        litem_13->prev=self->tail;
        # 1557 "/usr/local/include/neo-c.h"
        litem_13->next=((void*)0);
        # 1558 "/usr/local/include/neo-c.h"
        __dec_obj7=litem_13->item,
        litem_13->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 72);
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 71);
        # 1560 "/usr/local/include/neo-c.h"
        self->tail->next=litem_13;
        # 1561 "/usr/local/include/neo-c.h"
        self->tail=litem_13;
    }
    # 1564 "/usr/local/include/neo-c.h"
    self->len++;
    # 1566 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1566, 73));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct map$2int$int$* map$2int$int$_insert(struct map$2int$int$* self, int key, int item, _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$int$_insert"; neo_current_frame = &fr;
    struct map$2int$int$* __result_obj__0;
    _Bool add_to_key_list;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 3865 "/usr/local/include/neo-c.h"
    # 3871 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 3868 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 3874 "/usr/local/include/neo-c.h"
    if(self->len*10>=self->size) {
        # 3872 "/usr/local/include/neo-c.h"
        map$2int$int$_rehash(self);
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
                map$2int$int$_remove_ordered_entry(self,self->keys[it],by_pointer);
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
                if(0) {
                    # 3894 "/usr/local/include/neo-c.h"
                    # 3895 "/usr/local/include/neo-c.h"
                    self->items[it]=item;
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
            if(0) {
                # 3924 "/usr/local/include/neo-c.h"
                self->items[it]=item;
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
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2int$int$_rehash(struct map$2int$int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$int$_rehash"; neo_current_frame = &fr;
    int old_size;
    int size;
    void* __right_value0 = (void*)0;
    int* keys;
    int* items;
    unsigned int* hashes;
    _Bool* item_existance;
    int i;
    int len;
    int i_14;
    unsigned int key_hash;
    unsigned int hash;
    int n;
    # 3782 "/usr/local/include/neo-c.h"
    # 3784 "/usr/local/include/neo-c.h"
    old_size=self->size;
    # 3785 "/usr/local/include/neo-c.h"
    size=self->size*10;
    # 3786 "/usr/local/include/neo-c.h"
    keys=(int*)come_increment_ref_count(((int*)(__right_value0=(int*)come_calloc(1, sizeof(int)*(1*(size)), "/usr/local/include/neo-c.h", 3786, 82, "int*"))), "/usr/local/include/neo-c.h", 3786, 83);
    # 3787 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    items=(int*)come_increment_ref_count(((int*)(__right_value0=(int*)come_calloc(1, sizeof(int)*(1*(size)), "/usr/local/include/neo-c.h", 3787, 84, "int*"))), "/usr/local/include/neo-c.h", 3787, 85);
    # 3788 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(size)), "/usr/local/include/neo-c.h", 3788, 86, "unsigned int*"))), "/usr/local/include/neo-c.h", 3788, 87);
    # 3789 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 3789, 88, "_Bool*"))), "/usr/local/include/neo-c.h", 3789, 89);
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
    for(i_14=0    ;i_14<old_size;i_14++){
        # 3802 "/usr/local/include/neo-c.h"
        if(!self->item_existance[i_14]) {
            # 3799 "/usr/local/include/neo-c.h"
            continue;
        }
        # 3802 "/usr/local/include/neo-c.h"
        key_hash=self->hashes[i_14];
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
                keys[n]=self->keys[i_14];
                # 3822 "/usr/local/include/neo-c.h"
                items[n]=self->items[i_14];
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
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3831, 90));
    # 3832 "/usr/local/include/neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3832, 91));
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

static void map$2int$int$_remove_ordered_entry(struct map$2int$int$* self, int key, _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$int$_remove_ordered_entry"; neo_current_frame = &fr;
    int pos;
    # 3418 "/usr/local/include/neo-c.h"
    pos=map$2int$int$_key_position(self,key,by_pointer);
    # 3422 "/usr/local/include/neo-c.h"
    if(pos>=0) {
        # 3420 "/usr/local/include/neo-c.h"
        list$1int$_delete(self->key_list,pos,pos+1);
    }
                    neo_current_frame = fr.prev;
}

static int map$2int$int$_key_position(struct map$2int$int$* self, int key, _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$int$_key_position"; neo_current_frame = &fr;
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

static _Bool load_yank_from_named_register(struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "load_yank_from_named_register"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1int$ph* register_yank;
    _Bool __result_obj__0;
    struct list$1int$ph* __dec_obj8;
    # 23 "07yank.nc"
    if(!is_named_register(nvi->selectedRegister)) {
        # 20 "07yank.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 23 "07yank.nc"
    register_yank=(struct list$1int$ph*)come_increment_ref_count(map$2int$list$1int$ph$ph_at(nvi->registers,nvi->selectedRegister,((void*)0),(_Bool)0), "07yank.nc", 23, 107);
    # 29 "07yank.nc"
    if(register_yank==((void*)0)) {
        # 25 "07yank.nc"
        nvi->selectedRegister=-1;
        # 26 "07yank.nc"
                __result_obj__0 = (_Bool)0;
        come_call_finalizer(list$1int$ph$p_finalize, register_yank, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07yank.nc}", 26, 108);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 29 "07yank.nc"
    __right_value0 = (void*)0;
    __dec_obj8=nvi->yank,
    nvi->yank=(struct list$1int$ph*)come_increment_ref_count(list$1int$ph$p_clone(register_yank), "07yank.nc", 24, 111);
    come_call_finalizer(list$1int$ph_finalize, __dec_obj8,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07yank.nc", 24, 110);
    # 30 "07yank.nc"
    nvi->yankKind=map$2int$int$_at(nvi->registerKinds,nvi->selectedRegister,(1),(_Bool)0);
    # 31 "07yank.nc"
    nvi->selectedRegister=-1;
    # 33 "07yank.nc"
        __result_obj__0 = (_Bool)1;
    come_call_finalizer(list$1int$ph$p_finalize, register_yank, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07yank.nc}", 33, 112);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1int$ph* map$2int$list$1int$ph$ph_at(struct map$2int$list$1int$ph$ph* self, int key, struct list$1int$ph* default_value, _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1int$ph$ph_at"; neo_current_frame = &fr;
    struct list$1int$ph* __result_obj__0;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 3493 "/usr/local/include/neo-c.h"
    # 3499 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 3496 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct list$1int$ph*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3496, 92);
        come_call_finalizer(list$1int$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3496, 93);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3496, 94);
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
                                __result_obj__0 = (struct list$1int$ph*)come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3509, 95);
                come_call_finalizer(list$1int$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3509, 96);
                neo_current_frame = fr.prev;
                come_call_finalizer(list$1int$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3509, 97);
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
                                __result_obj__0 = (struct list$1int$ph*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3516, 98);
                come_call_finalizer(list$1int$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3516, 99);
                neo_current_frame = fr.prev;
                come_call_finalizer(list$1int$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3516, 100);
                return __result_obj__0;
            }
        }
        else {
            # 3520 "/usr/local/include/neo-c.h"
                        __result_obj__0 = (struct list$1int$ph*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3520, 101);
            come_call_finalizer(list$1int$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3520, 102);
            neo_current_frame = fr.prev;
            come_call_finalizer(list$1int$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3520, 103);
            return __result_obj__0;
        }
    }
    # 3524 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1int$ph*)come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3524, 104);
    come_call_finalizer(list$1int$ph$p_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 105);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3524, 106);
    return __result_obj__0;
}

static void list$1int$ph_finalize(struct list$1int$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1int$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 109);
    }
        neo_current_frame = fr.prev;
}

static int map$2int$int$_at(struct map$2int$int$* self, int key, int default_value, _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$int$_at"; neo_current_frame = &fr;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    # 3493 "/usr/local/include/neo-c.h"
    # 3499 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 3496 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return default_value;
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
                                neo_current_frame = fr.prev;
                return self->items[it];
            }
            # 3515 "/usr/local/include/neo-c.h"
            if(++it>=self->size) {
                # 3513 "/usr/local/include/neo-c.h"
                it=0;
            }
            # 3518 "/usr/local/include/neo-c.h"
            if(it==hash) {
                # 3516 "/usr/local/include/neo-c.h"
                                neo_current_frame = fr.prev;
                return default_value;
            }
        }
        else {
            # 3520 "/usr/local/include/neo-c.h"
                        neo_current_frame = fr.prev;
            return default_value;
        }
    }
    # 3524 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return default_value;
        neo_current_frame = fr.prev;
}

static void ensure_line_has_width(struct ViWin*  self  , int y, int width)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ensure_line_has_width"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int*  line  ;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    int*  new_line  ;
    # 38 "07yank.nc"
    line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,y,((int* )(__right_value0=__builtin_wstring("","07yank.nc",38)))), "07yank.nc", 38, 119);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 38, 120));
    # 45 "07yank.nc"
    if(wstring_length(line)<width) {
        # 41 "07yank.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        new_line=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value2=xsprintf("%ls%ls",line,((int* )(__right_value1=wstring_multiply(((int* )(__right_value0=__builtin_wstring(" ","07yank.nc",41))),width-wstring_length(line)))))))), "07yank.nc", 41, 121);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 41, 122));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 41, 123));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 41, 124));
        # 42 "07yank.nc"
        __right_value0 = (void*)0;
        list$1int$ph_replace(self->texts,y,(int* )come_increment_ref_count((int* )come_memdup(new_line, "07yank.nc", 42, 125, "int* "), "07yank.nc", 42, 126));
        # 43 "07yank.nc"
        list$1int$_replace(self->texts_length,y,wcslen(new_line));
        (new_line = come_decrement_ref_count(new_line, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 45, 127));
    }
    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 47, 128));
    neo_current_frame = fr.prev;
}

static int*  list$1int$ph_item(struct list$1int$ph* self, int position, int*  default_value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_item"; neo_current_frame = &fr;
    int*  __result_obj__0  ;
    struct list_item$1int$ph* it;
    int i;
    # 1750 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1747 "/usr/local/include/neo-c.h"
                __result_obj__0 = (int* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 1747, 113);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 1747, 114));
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
                        __result_obj__0 = (int* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 1758, 115);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 1758, 116));
            return __result_obj__0;
        }
        # 1760 "/usr/local/include/neo-c.h"
        it=it->next;
        # 1761 "/usr/local/include/neo-c.h"
        i++;
    }
    # 1764 "/usr/local/include/neo-c.h"
        __result_obj__0 = (int* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 1764, 117);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 1764, 118));
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
    int i_15;
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
            memset(&default_value,0,sizeof(int));
            # 2037 "/usr/local/include/neo-c.h"
            list$1int$_push_back(self,default_value);
        }
        # 2039 "/usr/local/include/neo-c.h"
        list$1int$_push_back(self,item);
        # 2040 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2043 "/usr/local/include/neo-c.h"
    it=self->head;
    # 2044 "/usr/local/include/neo-c.h"
    i_15=0;
    # 2054 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 2050 "/usr/local/include/neo-c.h"
        if(position==i_15) {
            # 2047 "/usr/local/include/neo-c.h"
            it->item=item;
            # 2048 "/usr/local/include/neo-c.h"
            break;
        }
        # 2050 "/usr/local/include/neo-c.h"
        it=it->next;
        # 2051 "/usr/local/include/neo-c.h"
        i_15++;
    }
    # 2054 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void paste_block(struct ViWin*  self  , struct Vi*  nvi  , int insert_x)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "paste_block"; neo_current_frame = &fr;
    int i;
    int y;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int*  line  ;
    int*  yank_line  ;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    int*  new_line  ;
    # 49 "07yank.nc"
    ViWin_pushUndo_v5(self);
    # 71 "07yank.nc"
    for(i=0    ;i<list$1int$ph_length(nvi->yank);i++){
        # 52 "07yank.nc"
        y=self->scroll+self->cursorY+i;
        # 59 "07yank.nc"
        while(y>=list$1int$ph_length(self->texts)) {
            # 55 "07yank.nc"
            list$1int$ph_push_back(self->texts,(int* )come_increment_ref_count(__builtin_wstring("","07yank.nc",55), "07yank.nc", 55, 129));
            # 56 "07yank.nc"
            list$1int$_push_back(self->texts_length,0);
        }
        # 59 "07yank.nc"
        ensure_line_has_width(self,y,insert_x);
        # 61 "07yank.nc"
        __right_value0 = (void*)0;
        line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,y,((int* )(__right_value0=__builtin_wstring("","07yank.nc",61)))), "07yank.nc", 61, 130);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 61, 131));
        # 62 "07yank.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        yank_line=(int* )come_increment_ref_count(list$1int$ph_item(nvi->yank,i,((int* )(__right_value0=__builtin_wstring("","07yank.nc",62)))), "07yank.nc", 62, 132);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 62, 133));
        # 66 "07yank.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        new_line=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value2=xsprintf("%ls%ls%ls",((int* )(__right_value0=wstring_substring(line,0,insert_x))),yank_line,((int* )(__right_value1=wstring_substring(line,insert_x,-1))))))), "07yank.nc", 66, 134);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 65, 135));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 66, 136));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 66, 137));
        # 68 "07yank.nc"
        __right_value0 = (void*)0;
        list$1int$ph_replace(self->texts,y,(int* )come_increment_ref_count((int* )come_memdup(new_line, "07yank.nc", 68, 138, "int* "), "07yank.nc", 68, 139));
        # 69 "07yank.nc"
        list$1int$_replace(self->texts_length,y,wcslen(new_line));
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 71, 140));
        (yank_line = come_decrement_ref_count(yank_line, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 71, 141));
        (new_line = come_decrement_ref_count(new_line, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 71, 142));
    }
    neo_current_frame = fr.prev;
}

static int list$1int$ph_length(struct list$1int$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_length"; neo_current_frame = &fr;
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

static _Bool prepare_yank_for_paste(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "prepare_yank_for_paste"; neo_current_frame = &fr;
    # 79 "07yank.nc"
    if(is_named_register(nvi->selectedRegister)) {
        # 76 "07yank.nc"
                neo_current_frame = fr.prev;
        return load_yank_from_named_register(nvi);
    }
    # 83 "07yank.nc"
    if(list$1int$ph_length(nvi->yank)>0) {
        # 80 "07yank.nc"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 83 "07yank.nc"
        neo_current_frame = fr.prev;
    return ViWin_loadYankFromFile(self,nvi);
    neo_current_frame = fr.prev;
}

_Bool ViWin_saveYankToFile(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_saveYankToFile"; neo_current_frame = &fr;
    char* home;
    void* __right_value0 = (void*)0;
    char*  path  ;
    struct _IO_FILE*  f  ;
    _Bool __result_obj__0;
    struct list$1int$ph* _o2_saved_1;
    int*  it  ;
    # 88 "07yank.nc"
    home=getenv("HOME");
    # 89 "07yank.nc"
    save_yank_to_named_register(nvi);
    # 94 "07yank.nc"
    if(home==((void*)0)) {
        # 91 "07yank.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 94 "07yank.nc"
    path=(char* )come_increment_ref_count(xsprintf("%s/.vin/yank.txt",home), "07yank.nc", 94, 143);
    # 95 "07yank.nc"
    f=fopen(path,"w");
    # 101 "07yank.nc"
    if(f==((void*)0)) {
        # 98 "07yank.nc"
                __result_obj__0 = (_Bool)0;
        (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 98, 144));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 101 "07yank.nc"
    fprintf(f,"__VIN_YANK_KIND__:%d\n",nvi->yankKind);
    # 108 "07yank.nc"
    for(_o2_saved_1=(struct list$1int$ph*)come_increment_ref_count(nvi->yank, "07yank.nc", 103, 145),it=list$1int$ph_begin(_o2_saved_1)    ;!list$1int$ph_end(_o2_saved_1);it=list$1int$ph_next(_o2_saved_1)){
        # 104 "07yank.nc"
        __right_value0 = (void*)0;
        fputs(((char* )(__right_value0=wstring_to_string(it))),f);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 104, 146));
        # 105 "07yank.nc"
        fputs("\n",f);
    }
    # 108 "07yank.nc"
    fclose(f);
    # 110 "07yank.nc"
        __result_obj__0 = (_Bool)1;
    (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 110, 147));
    come_call_finalizer(list$1int$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07yank.nc}", 110, 148);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static int*  list$1int$ph_begin(struct list$1int$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_begin"; neo_current_frame = &fr;
    int*  result  ;
    int*  __result_obj__0  ;
    int*  result_16  ;
    # 1682 "/usr/local/include/neo-c.h"
    # 1689 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1685 "/usr/local/include/neo-c.h"
        # 1686 "/usr/local/include/neo-c.h"
        memset(&result,0,sizeof(int* ));
        # 1687 "/usr/local/include/neo-c.h"
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1689 "/usr/local/include/neo-c.h"
    self->it=self->head;
    # 1695 "/usr/local/include/neo-c.h"
    if(self->it) {
        # 1692 "/usr/local/include/neo-c.h"
                __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1695 "/usr/local/include/neo-c.h"
    # 1696 "/usr/local/include/neo-c.h"
    memset(&result_16,0,sizeof(int* ));
    # 1697 "/usr/local/include/neo-c.h"
        __result_obj__0 = result_16;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1int$ph_end(struct list$1int$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_end"; neo_current_frame = &fr;
    # 1721 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static int*  list$1int$ph_next(struct list$1int$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_next"; neo_current_frame = &fr;
    int*  result  ;
    int*  __result_obj__0  ;
    int*  result_17  ;
    # 1701 "/usr/local/include/neo-c.h"
    # 1709 "/usr/local/include/neo-c.h"
    if(self==((void*)0)||self->it==((void*)0)) {
        # 1704 "/usr/local/include/neo-c.h"
        # 1705 "/usr/local/include/neo-c.h"
        memset(&result,0,sizeof(int* ));
        # 1706 "/usr/local/include/neo-c.h"
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1709 "/usr/local/include/neo-c.h"
    self->it=self->it->next;
    # 1715 "/usr/local/include/neo-c.h"
    if(self->it) {
        # 1712 "/usr/local/include/neo-c.h"
                __result_obj__0 = self->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1715 "/usr/local/include/neo-c.h"
    # 1716 "/usr/local/include/neo-c.h"
    memset(&result_17,0,sizeof(int* ));
    # 1717 "/usr/local/include/neo-c.h"
        __result_obj__0 = result_17;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool ViWin_loadYankFromFile(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_loadYankFromFile"; neo_current_frame = &fr;
    char* home;
    void* __right_value0 = (void*)0;
    char*  path  ;
    struct _IO_FILE*  f  ;
    _Bool __result_obj__0;
    _Bool first_line;
    char c;
    # 119 "07yank.nc"
    if(load_yank_from_named_register(nvi)) {
        # 116 "07yank.nc"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 119 "07yank.nc"
    home=getenv("HOME");
    # 124 "07yank.nc"
    if(home==((void*)0)) {
        # 121 "07yank.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 124 "07yank.nc"
    path=(char* )come_increment_ref_count(xsprintf("%s/.vin/yank.txt",home), "07yank.nc", 124, 149);
    # 125 "07yank.nc"
    f=fopen(path,"r");
    # 131 "07yank.nc"
    if(f==((void*)0)) {
        # 128 "07yank.nc"
                __result_obj__0 = (_Bool)0;
        (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 128, 150));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 131 "07yank.nc"
    char line[4096];
    memset(&line, 0, sizeof(line));
    # 133 "07yank.nc"
    list$1int$ph_reset(nvi->yank);
    # 135 "07yank.nc"
    first_line=(_Bool)1;
    # 150 "07yank.nc"
    while(fgets(line,4096,f)!=((void*)0)) {
        # 139 "07yank.nc"
        c=line[strlen(line)-1];
        # 140 "07yank.nc"
        line[strlen(line)-1]=0;
        # 146 "07yank.nc"
        if(first_line&&strncmp(line,"__VIN_YANK_KIND__:",18)==0) {
            # 142 "07yank.nc"
            nvi->yankKind=atoi(line+18);
            # 143 "07yank.nc"
            first_line=(_Bool)0;
            # 144 "07yank.nc"
            continue;
        }
        # 147 "07yank.nc"
        __right_value0 = (void*)0;
        list$1int$ph_push_back(nvi->yank,(int* )come_increment_ref_count(__builtin_wstring(line,"07yank.nc",146), "07yank.nc", 147, 152));
        # 147 "07yank.nc"
        first_line=(_Bool)0;
    }
    # 150 "07yank.nc"
    fclose(f);
    # 152 "07yank.nc"
        __result_obj__0 = (_Bool)1;
    (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 152, 153));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1int$ph* list$1int$ph_reset(struct list$1int$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_reset"; neo_current_frame = &fr;
    struct list$1int$ph* __result_obj__0;
    struct list_item$1int$ph* it;
    struct list_item$1int$ph* prev_it;
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
        come_call_finalizer(list_item$1int$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1856, 151);
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

_Bool ViWin_saveFileYankToFile(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_saveFileYankToFile"; neo_current_frame = &fr;
    char* home;
    void* __right_value0 = (void*)0;
    char*  path  ;
    struct _IO_FILE*  f  ;
    _Bool __result_obj__0;
    struct list$1int$ph* _o2_saved_2;
    int*  it  ;
    # 157 "07yank.nc"
    home=getenv("HOME");
    # 162 "07yank.nc"
    if(home==((void*)0)) {
        # 159 "07yank.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 162 "07yank.nc"
    path=(char* )come_increment_ref_count(xsprintf("%s/.vin/fyank.txt",home), "07yank.nc", 162, 154);
    # 163 "07yank.nc"
    f=fopen(path,"w");
    # 169 "07yank.nc"
    if(f==((void*)0)) {
        # 166 "07yank.nc"
                __result_obj__0 = (_Bool)0;
        (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 166, 155));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 174 "07yank.nc"
    for(_o2_saved_2=(struct list$1int$ph*)come_increment_ref_count(nvi->fileYank, "07yank.nc", 169, 156),it=list$1int$ph_begin(_o2_saved_2)    ;!list$1int$ph_end(_o2_saved_2);it=list$1int$ph_next(_o2_saved_2)){
        # 170 "07yank.nc"
        __right_value0 = (void*)0;
        fputs(((char* )(__right_value0=wstring_to_string(it))),f);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 170, 157));
        # 171 "07yank.nc"
        fputs("\n",f);
    }
    # 174 "07yank.nc"
    fclose(f);
    # 176 "07yank.nc"
        __result_obj__0 = (_Bool)1;
    (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 176, 158));
    come_call_finalizer(list$1int$ph$p_finalize, _o2_saved_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07yank.nc}", 176, 159);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool ViWin_loadFileYankFromFile(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_loadFileYankFromFile"; neo_current_frame = &fr;
    char* home;
    void* __right_value0 = (void*)0;
    char*  path  ;
    struct _IO_FILE*  f  ;
    _Bool __result_obj__0;
    char c;
    # 181 "07yank.nc"
    home=getenv("HOME");
    # 186 "07yank.nc"
    if(home==((void*)0)) {
        # 183 "07yank.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 186 "07yank.nc"
    path=(char* )come_increment_ref_count(xsprintf("%s/.vin/fyank.txt",home), "07yank.nc", 186, 160);
    # 187 "07yank.nc"
    f=fopen(path,"r");
    # 193 "07yank.nc"
    if(f==((void*)0)) {
        # 190 "07yank.nc"
                __result_obj__0 = (_Bool)0;
        (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 190, 161));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 193 "07yank.nc"
    char line[4096];
    memset(&line, 0, sizeof(line));
    # 195 "07yank.nc"
    list$1int$ph_reset(nvi->fileYank);
    # 204 "07yank.nc"
    while(fgets(line,4096,f)!=((void*)0)) {
        # 199 "07yank.nc"
        c=line[strlen(line)-1];
        # 200 "07yank.nc"
        line[strlen(line)-1]=0;
        # 202 "07yank.nc"
        __right_value0 = (void*)0;
        list$1int$ph_push_back(nvi->fileYank,(int* )come_increment_ref_count(__builtin_wstring(line,"07yank.nc",201), "07yank.nc", 202, 162));
    }
    # 204 "07yank.nc"
    fclose(f);
    # 206 "07yank.nc"
        __result_obj__0 = (_Bool)1;
    (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 206, 163));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void ViWin_pasteAfterCursor(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_pasteAfterCursor"; neo_current_frame = &fr;
    int it2;
    struct list$1int$ph* _o2_saved_3;
    int*  it  ;
    void* __right_value0 = (void*)0;
    int*  line  ;
    int*  yank_first_line  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    int*  new_line  ;
    int*  yank_first_line_24  ;
    int*  new_line_25  ;
    int*  after_line  ;
    int*  yank_last_line  ;
    int*  new_line2  ;
    int*  yank_first_line_26  ;
    int*  new_line_27  ;
    int*  after_line_28  ;
    int it2_29;
    struct list$1int$ph* _o2_saved_4;
    int*  it_30  ;
    _Bool _conditional_value_X0;
    _Bool _conditional_value_X1;
    _Bool _conditional_value_X2;
    int*  yank_last_line_31  ;
    int*  new_line2_32  ;
    # 211 "07yank.nc"
    prepare_yank_for_paste(self,nvi);
    # 288 "07yank.nc"
    if(nvi->yankKind==(0)) {
        # 213 "07yank.nc"
        ViWin_pushUndo_v5(self);
        # 215 "07yank.nc"
        it2=0;
        # 221 "07yank.nc"
        for(_o2_saved_3=(struct list$1int$ph*)come_increment_ref_count(nvi->yank, "07yank.nc", 216, 164),it=list$1int$ph_begin(_o2_saved_3)        ;!list$1int$ph_end(_o2_saved_3);it=list$1int$ph_next(_o2_saved_3)){
            # 217 "07yank.nc"
            list$1int$ph_insert(self->texts,self->scroll+self->cursorY+it2+1,(int* )come_increment_ref_count((int* )come_memdup(it, "07yank.nc", 217, 183, "int* "), "07yank.nc", 217, 184));
            # 218 "07yank.nc"
            list$1int$_insert(self->texts_length,self->scroll+self->cursorY+it2+1,wcslen(it));
            # 219 "07yank.nc"
            it2++;
        }
        come_call_finalizer(list$1int$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07yank.nc}", 288, 191);
    }
    else if(nvi->yankKind==(2)) {
        # 223 "07yank.nc"
        paste_block(self,nvi,self->cursorX+1);
    }
    else {
        # 226 "07yank.nc"
        ViWin_pushUndo_v5(self);
        # 228 "07yank.nc"
        __right_value0 = (void*)0;
        line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "07yank.nc", 228, 192);
        # 287 "07yank.nc"
        if(list$1int$ph_length(nvi->yank)==1) {
            # 231 "07yank.nc"
            __right_value0 = (void*)0;
            yank_first_line=(int* )come_increment_ref_count(list$1int$ph_item(nvi->yank,0,((void*)0)), "07yank.nc", 231, 193);
            # 236 "07yank.nc"
            __right_value0 = (void*)0;
            new_line=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value2=xsprintf("%ls%ls%ls",((int* )(__right_value0=wstring_substring(line,0,self->cursorX+1))),yank_first_line,((int* )(__right_value1=wstring_substring(line,self->cursorX+1,-1))))))), "07yank.nc", 236, 194);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 235, 195));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 236, 196));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 236, 197));
            # 238 "07yank.nc"
            list$1int$ph_replace(self->texts,self->scroll+self->cursorY,(int* )come_increment_ref_count(new_line, "07yank.nc", 238, 198));
            # 239 "07yank.nc"
            list$1int$_replace(self->texts_length,self->scroll+self->cursorY,wcslen(new_line));
            (yank_first_line = come_decrement_ref_count(yank_first_line, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 287, 199));
            (new_line = come_decrement_ref_count(new_line, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 287, 200));
        }
        else if(list$1int$ph_length(nvi->yank)==2) {
            # 242 "07yank.nc"
            __right_value0 = (void*)0;
            yank_first_line_24=(int* )come_increment_ref_count(list$1int$ph_item(nvi->yank,0,((void*)0)), "07yank.nc", 242, 201);
            # 246 "07yank.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            new_line_25=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value1=xsprintf("%ls%ls",((int* )(__right_value0=wstring_substring(line,0,self->cursorX+1))),yank_first_line_24)))), "07yank.nc", 246, 202);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 246, 203));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 246, 204));
            # 248 "07yank.nc"
            __right_value0 = (void*)0;
            after_line=(int* )come_increment_ref_count(wstring_substring(line,self->cursorX+1,-1), "07yank.nc", 248, 205);
            # 250 "07yank.nc"
            list$1int$ph_replace(self->texts,self->scroll+self->cursorY,(int* )come_increment_ref_count(new_line_25, "07yank.nc", 250, 206));
            # 251 "07yank.nc"
            list$1int$_replace(self->texts_length,self->scroll+self->cursorY,wcslen(new_line_25));
            # 253 "07yank.nc"
            __right_value0 = (void*)0;
            yank_last_line=(int* )come_increment_ref_count(list$1int$ph_item(nvi->yank,-1,((void*)0)), "07yank.nc", 253, 207);
            # 257 "07yank.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            new_line2=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value0=xsprintf("%ls%ls",yank_last_line,after_line)))), "07yank.nc", 257, 208);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 257, 209));
            # 258 "07yank.nc"
            list$1int$ph_insert(self->texts,self->scroll+self->cursorY+1,(int* )come_increment_ref_count(new_line2, "07yank.nc", 258, 210));
            # 259 "07yank.nc"
            list$1int$_insert(self->texts_length,self->scroll+self->cursorY+1,wcslen(new_line2));
            (yank_first_line_24 = come_decrement_ref_count(yank_first_line_24, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 287, 211));
            (new_line_25 = come_decrement_ref_count(new_line_25, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 287, 212));
            (after_line = come_decrement_ref_count(after_line, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 287, 213));
            (yank_last_line = come_decrement_ref_count(yank_last_line, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 287, 214));
            (new_line2 = come_decrement_ref_count(new_line2, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 287, 215));
        }
        else if(list$1int$ph_length(nvi->yank)>2) {
            # 262 "07yank.nc"
            __right_value0 = (void*)0;
            yank_first_line_26=(int* )come_increment_ref_count(list$1int$ph_item(nvi->yank,0,((void*)0)), "07yank.nc", 262, 216);
            # 266 "07yank.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            new_line_27=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value1=xsprintf("%ls%ls",((int* )(__right_value0=wstring_substring(line,0,self->cursorX+1))),yank_first_line_26)))), "07yank.nc", 266, 217);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 266, 218));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 266, 219));
            # 267 "07yank.nc"
            __right_value0 = (void*)0;
            after_line_28=(int* )come_increment_ref_count(wstring_substring(line,self->cursorX+1,-1), "07yank.nc", 267, 220);
            # 269 "07yank.nc"
            list$1int$ph_replace(self->texts,self->scroll+self->cursorY,(int* )come_increment_ref_count(new_line_27, "07yank.nc", 269, 221));
            # 270 "07yank.nc"
            list$1int$_replace(self->texts_length,self->scroll+self->cursorY,wcslen(new_line_27));
            # 272 "07yank.nc"
            it2_29=0;
            # 279 "07yank.nc"
            for(__right_value0 = (void*)0,
({(_conditional_value_X0=(_o2_saved_4=(struct list$1int$ph*)come_increment_ref_count(list$1int$ph_sublist(nvi->yank,1,-2), "07yank.nc", 273, 237),it_30=list$1int$ph_begin(_o2_saved_4)));_conditional_value_X0;})            ;({(_conditional_value_X1=(!list$1int$ph_end(_o2_saved_4)));_conditional_value_X1;});({(_conditional_value_X2=(it_30=list$1int$ph_next(_o2_saved_4)));_conditional_value_X2;})){
                # 274 "07yank.nc"
                __right_value0 = (void*)0;
                list$1int$ph_insert(self->texts,self->scroll+self->cursorY+it2_29+1,(int* )come_increment_ref_count((int* )come_memdup(it_30, "07yank.nc", 274, 238, "int* "), "07yank.nc", 274, 239));
                # 275 "07yank.nc"
                list$1int$_insert(self->texts_length,self->scroll+self->cursorY+it2_29+1,wcslen(it_30));
                # 276 "07yank.nc"
                it2_29++;
            }
            # 279 "07yank.nc"
            __right_value0 = (void*)0;
            yank_last_line_31=(int* )come_increment_ref_count(list$1int$ph_item(nvi->yank,-1,((void*)0)), "07yank.nc", 279, 240);
            # 283 "07yank.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            new_line2_32=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value0=xsprintf("%ls%ls",yank_last_line_31,after_line_28)))), "07yank.nc", 283, 241);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 283, 242));
            # 284 "07yank.nc"
            list$1int$ph_insert(self->texts,self->scroll+self->cursorY+list$1int$ph_length(nvi->yank)-1,(int* )come_increment_ref_count(new_line2_32, "07yank.nc", 284, 243));
            # 285 "07yank.nc"
            list$1int$_insert(self->texts_length,self->scroll+self->cursorY+list$1int$ph_length(nvi->yank)-1,wcslen(new_line2_32));
            (yank_first_line_26 = come_decrement_ref_count(yank_first_line_26, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 287, 244));
            (new_line_27 = come_decrement_ref_count(new_line_27, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 287, 245));
            (after_line_28 = come_decrement_ref_count(after_line_28, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 287, 246));
            come_call_finalizer(list$1int$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07yank.nc}", 287, 247);
            (yank_last_line_31 = come_decrement_ref_count(yank_last_line_31, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 287, 248));
            (new_line2_32 = come_decrement_ref_count(new_line2_32, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 287, 249));
        }
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 288, 250));
    }
    neo_current_frame = fr.prev;
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
    int*  __dec_obj9  ;
    struct list_item$1int$ph* litem_18;
    int*  __dec_obj10  ;
    struct list_item$1int$ph* it;
    int i_19;
    struct list_item$1int$ph* litem_20;
    int*  __dec_obj11  ;
    # 1777 "/usr/local/include/neo-c.h"
    # 1782 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1780 "/usr/local/include/neo-c.h"
                __result_obj__0 = ((void*)0);
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1780, 165));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1785 "/usr/local/include/neo-c.h"
    if(position<0) {
        # 1783 "/usr/local/include/neo-c.h"
        position+=self->len+1;
    }
    # 1788 "/usr/local/include/neo-c.h"
    if(position<0) {
        # 1786 "/usr/local/include/neo-c.h"
        position=0;
    }
    # 1799 "/usr/local/include/neo-c.h"
    if(self->len==0||position>=self->len) {
        # 1789 "/usr/local/include/neo-c.h"
        len=self->len;
        # 1795 "/usr/local/include/neo-c.h"
        for(i=0        ;i<position-len;i++){
            # 1791 "/usr/local/include/neo-c.h"
            # 1792 "/usr/local/include/neo-c.h"
            memset(&default_value,0,sizeof(int* ));
            # 1793 "/usr/local/include/neo-c.h"
            list$1int$ph_push_back(self,(int* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 1793, 166));
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1795, 167));
        }
        # 1795 "/usr/local/include/neo-c.h"
        list$1int$ph_push_back(self,(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1795, 168));
        # 1796 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1796, 169));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1845 "/usr/local/include/neo-c.h"
    if(position==0) {
        # 1800 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1800, 170, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1800, 171);
        # 1802 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1803 "/usr/local/include/neo-c.h"
        litem->next=self->head;
        # 1804 "/usr/local/include/neo-c.h"
        __dec_obj9=litem->item,
        litem->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1804, 173);
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1804, 172);
        # 1806 "/usr/local/include/neo-c.h"
        self->head->prev=litem;
        # 1807 "/usr/local/include/neo-c.h"
        self->head=litem;
        # 1809 "/usr/local/include/neo-c.h"
        self->len++;
    }
    else if(self->len==1) {
        # 1812 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_18=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1812, 174, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1812, 175);
        # 1814 "/usr/local/include/neo-c.h"
        litem_18->prev=self->head;
        # 1815 "/usr/local/include/neo-c.h"
        litem_18->next=self->tail;
        # 1816 "/usr/local/include/neo-c.h"
        __dec_obj10=litem_18->item,
        litem_18->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1816, 177);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1816, 176);
        # 1818 "/usr/local/include/neo-c.h"
        self->tail->prev=litem_18;
        # 1819 "/usr/local/include/neo-c.h"
        self->head->next=litem_18;
        # 1821 "/usr/local/include/neo-c.h"
        self->len++;
    }
    else {
        # 1824 "/usr/local/include/neo-c.h"
        it=self->head;
        # 1825 "/usr/local/include/neo-c.h"
        i_19=0;
        # 1843 "/usr/local/include/neo-c.h"
        while(it!=((void*)0)) {
            # 1840 "/usr/local/include/neo-c.h"
            if(position==i_19) {
                # 1828 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
                litem_20=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1828, 178, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1828, 179);
                # 1830 "/usr/local/include/neo-c.h"
                litem_20->prev=it->prev;
                # 1831 "/usr/local/include/neo-c.h"
                litem_20->next=it;
                # 1832 "/usr/local/include/neo-c.h"
                __dec_obj11=litem_20->item,
                litem_20->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1832, 181);
                __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1832, 180);
                # 1834 "/usr/local/include/neo-c.h"
                it->prev->next=litem_20;
                # 1835 "/usr/local/include/neo-c.h"
                it->prev=litem_20;
                # 1837 "/usr/local/include/neo-c.h"
                self->len++;
            }
            # 1840 "/usr/local/include/neo-c.h"
            it=it->next;
            # 1841 "/usr/local/include/neo-c.h"
            i_19++;
        }
    }
    # 1845 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1845, 182));
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
    struct list_item$1int$* litem_21;
    struct list_item$1int$* it;
    int i_22;
    struct list_item$1int$* litem_23;
    # 1777 "/usr/local/include/neo-c.h"
    # 1782 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1780 "/usr/local/include/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1785 "/usr/local/include/neo-c.h"
    if(position<0) {
        # 1783 "/usr/local/include/neo-c.h"
        position+=self->len+1;
    }
    # 1788 "/usr/local/include/neo-c.h"
    if(position<0) {
        # 1786 "/usr/local/include/neo-c.h"
        position=0;
    }
    # 1799 "/usr/local/include/neo-c.h"
    if(self->len==0||position>=self->len) {
        # 1789 "/usr/local/include/neo-c.h"
        len=self->len;
        # 1795 "/usr/local/include/neo-c.h"
        for(i=0        ;i<position-len;i++){
            # 1791 "/usr/local/include/neo-c.h"
            # 1792 "/usr/local/include/neo-c.h"
            memset(&default_value,0,sizeof(int));
            # 1793 "/usr/local/include/neo-c.h"
            list$1int$_push_back(self,default_value);
        }
        # 1795 "/usr/local/include/neo-c.h"
        list$1int$_push_back(self,item);
        # 1796 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1845 "/usr/local/include/neo-c.h"
    if(position==0) {
        # 1800 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1800, 185, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1800, 186);
        # 1802 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1803 "/usr/local/include/neo-c.h"
        litem->next=self->head;
        # 1804 "/usr/local/include/neo-c.h"
        litem->item=item;
        # 1806 "/usr/local/include/neo-c.h"
        self->head->prev=litem;
        # 1807 "/usr/local/include/neo-c.h"
        self->head=litem;
        # 1809 "/usr/local/include/neo-c.h"
        self->len++;
    }
    else if(self->len==1) {
        # 1812 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_21=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1812, 187, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1812, 188);
        # 1814 "/usr/local/include/neo-c.h"
        litem_21->prev=self->head;
        # 1815 "/usr/local/include/neo-c.h"
        litem_21->next=self->tail;
        # 1816 "/usr/local/include/neo-c.h"
        litem_21->item=item;
        # 1818 "/usr/local/include/neo-c.h"
        self->tail->prev=litem_21;
        # 1819 "/usr/local/include/neo-c.h"
        self->head->next=litem_21;
        # 1821 "/usr/local/include/neo-c.h"
        self->len++;
    }
    else {
        # 1824 "/usr/local/include/neo-c.h"
        it=self->head;
        # 1825 "/usr/local/include/neo-c.h"
        i_22=0;
        # 1843 "/usr/local/include/neo-c.h"
        while(it!=((void*)0)) {
            # 1840 "/usr/local/include/neo-c.h"
            if(position==i_22) {
                # 1828 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
                litem_23=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1828, 189, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1828, 190);
                # 1830 "/usr/local/include/neo-c.h"
                litem_23->prev=it->prev;
                # 1831 "/usr/local/include/neo-c.h"
                litem_23->next=it;
                # 1832 "/usr/local/include/neo-c.h"
                litem_23->item=item;
                # 1834 "/usr/local/include/neo-c.h"
                it->prev->next=litem_23;
                # 1835 "/usr/local/include/neo-c.h"
                it->prev=litem_23;
                # 1837 "/usr/local/include/neo-c.h"
                self->len++;
            }
            # 1840 "/usr/local/include/neo-c.h"
            it=it->next;
            # 1841 "/usr/local/include/neo-c.h"
            i_22++;
        }
    }
    # 1845 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1int$ph* list$1int$ph_sublist(struct list$1int$ph* self, int begin, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_sublist"; neo_current_frame = &fr;
    struct list$1int$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$ph* result;
    struct list_item$1int$ph* it;
    int i;
    # 2107 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 2104 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct list$1int$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 2104, 222);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2104, 223);
        return __result_obj__0;
    }
    # 2107 "/usr/local/include/neo-c.h"
    result=(struct list$1int$ph*)come_increment_ref_count(list$1int$ph_initialize((struct list$1int$ph*)come_increment_ref_count((struct list$1int$ph*)come_calloc(1, sizeof(struct list$1int$ph)*(1), "/usr/local/include/neo-c.h", 2107, 224, "struct list$1int$ph*"), "/usr/local/include/neo-c.h", 2107, 225)), "/usr/local/include/neo-c.h", 2107, 226);
    # 2113 "/usr/local/include/neo-c.h"
    if(begin<0) {
        # 2110 "/usr/local/include/neo-c.h"
        begin+=self->len;
    }
    # 2117 "/usr/local/include/neo-c.h"
    if(tail<0) {
        # 2114 "/usr/local/include/neo-c.h"
        tail+=self->len+1;
    }
    # 2121 "/usr/local/include/neo-c.h"
    if(begin<0) {
        # 2118 "/usr/local/include/neo-c.h"
        begin=0;
    }
    # 2125 "/usr/local/include/neo-c.h"
    if(begin>=self->len) {
        # 2122 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct list$1int$ph*)come_increment_ref_count(((struct list$1int$ph*)(__right_value1=list$1int$ph_initialize((struct list$1int$ph*)come_increment_ref_count((struct list$1int$ph*)come_calloc(1, sizeof(struct list$1int$ph)*(1), "/usr/local/include/neo-c.h", 2122, 227, "struct list$1int$ph*"), "/usr/local/include/neo-c.h", 2122, 228)))), "/usr/local/include/neo-c.h", 2122, 229);
        come_call_finalizer(list$1int$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2122, 230);
        come_call_finalizer(list$1int$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 2122, 231);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2122, 232);
        return __result_obj__0;
    }
    # 2129 "/usr/local/include/neo-c.h"
    if(tail>=self->len) {
        # 2126 "/usr/local/include/neo-c.h"
        tail=self->len;
    }
    # 2129 "/usr/local/include/neo-c.h"
    it=self->head;
    # 2130 "/usr/local/include/neo-c.h"
    i=0;
    # 2137 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 2135 "/usr/local/include/neo-c.h"
        if(i>=begin&&i<tail) {
            # 2133 "/usr/local/include/neo-c.h"
            list$1int$ph_push_back(result,(int* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2133, 233));
        }
        # 2135 "/usr/local/include/neo-c.h"
        it=it->next;
        # 2136 "/usr/local/include/neo-c.h"
        i++;
    }
    # 2139 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1int$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 2139, 234);
    come_call_finalizer(list$1int$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2139, 235);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2139, 236);
    return __result_obj__0;
}

void ViWin_pasteBeforeCursor(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_pasteBeforeCursor"; neo_current_frame = &fr;
    int it2;
    struct list$1int$ph* _o2_saved_5;
    int*  it  ;
    void* __right_value0 = (void*)0;
    int*  line  ;
    int*  yank_first_line  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    int*  new_line  ;
    int*  yank_first_line_33  ;
    int*  new_line_34  ;
    int*  after_line  ;
    int*  yank_last_line  ;
    int*  new_line2  ;
    int*  yank_first_line_35  ;
    int*  new_line_36  ;
    int*  after_line_37  ;
    int it2_38;
    struct list$1int$ph* _o2_saved_6;
    int*  it_39  ;
    _Bool _conditional_value_X0;
    _Bool _conditional_value_X1;
    _Bool _conditional_value_X2;
    int*  yank_last_line_40  ;
    int*  new_line2_41  ;
    # 292 "07yank.nc"
    prepare_yank_for_paste(self,nvi);
    # 367 "07yank.nc"
    if(nvi->yankKind==(0)) {
        # 294 "07yank.nc"
        ViWin_pushUndo_v5(self);
        # 295 "07yank.nc"
        it2=0;
        # 301 "07yank.nc"
        for(_o2_saved_5=(struct list$1int$ph*)come_increment_ref_count(nvi->yank, "07yank.nc", 296, 251),it=list$1int$ph_begin(_o2_saved_5)        ;!list$1int$ph_end(_o2_saved_5);it=list$1int$ph_next(_o2_saved_5)){
            # 297 "07yank.nc"
            list$1int$ph_insert(self->texts,self->scroll+self->cursorY+it2,(int* )come_increment_ref_count((int* )come_memdup(it, "07yank.nc", 297, 252, "int* "), "07yank.nc", 297, 253));
            # 298 "07yank.nc"
            list$1int$_insert(self->texts_length,self->scroll+self->cursorY+it2,wcslen(it));
            # 299 "07yank.nc"
            it2++;
        }
        come_call_finalizer(list$1int$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07yank.nc}", 367, 254);
    }
    else if(nvi->yankKind==(2)) {
        # 303 "07yank.nc"
        paste_block(self,nvi,self->cursorX);
    }
    else {
        # 306 "07yank.nc"
        ViWin_pushUndo_v5(self);
        # 308 "07yank.nc"
        __right_value0 = (void*)0;
        line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "07yank.nc", 308, 255);
        # 366 "07yank.nc"
        if(list$1int$ph_length(nvi->yank)==1) {
            # 311 "07yank.nc"
            __right_value0 = (void*)0;
            yank_first_line=(int* )come_increment_ref_count(list$1int$ph_item(nvi->yank,0,((void*)0)), "07yank.nc", 311, 256);
            # 316 "07yank.nc"
            __right_value0 = (void*)0;
            new_line=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value2=xsprintf("%ls%ls%ls",((int* )(__right_value0=wstring_substring(line,0,self->cursorX))),yank_first_line,((int* )(__right_value1=wstring_substring(line,self->cursorX,-1))))))), "07yank.nc", 316, 257);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 315, 258));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 316, 259));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 316, 260));
            # 318 "07yank.nc"
            list$1int$ph_replace(self->texts,self->scroll+self->cursorY,(int* )come_increment_ref_count(new_line, "07yank.nc", 318, 261));
            # 319 "07yank.nc"
            list$1int$_replace(self->texts_length,self->scroll+self->cursorY,wcslen(new_line));
            (yank_first_line = come_decrement_ref_count(yank_first_line, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 366, 262));
            (new_line = come_decrement_ref_count(new_line, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 366, 263));
        }
        else if(list$1int$ph_length(nvi->yank)==2) {
            # 322 "07yank.nc"
            __right_value0 = (void*)0;
            yank_first_line_33=(int* )come_increment_ref_count(list$1int$ph_item(nvi->yank,0,((void*)0)), "07yank.nc", 322, 264);
            # 326 "07yank.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            new_line_34=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value1=xsprintf("%ls%ls",((int* )(__right_value0=wstring_substring(line,0,self->cursorX))),yank_first_line_33)))), "07yank.nc", 326, 265);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 326, 266));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 326, 267));
            # 328 "07yank.nc"
            __right_value0 = (void*)0;
            after_line=(int* )come_increment_ref_count(wstring_substring(line,self->cursorX,-1), "07yank.nc", 328, 268);
            # 330 "07yank.nc"
            list$1int$ph_replace(self->texts,self->scroll+self->cursorY,(int* )come_increment_ref_count(new_line_34, "07yank.nc", 330, 269));
            # 331 "07yank.nc"
            list$1int$_replace(self->texts_length,self->scroll+self->cursorY,wcslen(new_line_34));
            # 333 "07yank.nc"
            __right_value0 = (void*)0;
            yank_last_line=(int* )come_increment_ref_count(list$1int$ph_item(nvi->yank,-1,((void*)0)), "07yank.nc", 333, 270);
            # 337 "07yank.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            new_line2=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value0=xsprintf("%ls%ls",yank_last_line,after_line)))), "07yank.nc", 337, 271);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 337, 272));
            # 338 "07yank.nc"
            list$1int$ph_insert(self->texts,self->scroll+self->cursorY+1,(int* )come_increment_ref_count(new_line2, "07yank.nc", 338, 273));
            # 339 "07yank.nc"
            list$1int$_insert(self->texts_length,self->scroll+self->cursorY+1,wcslen(new_line2));
            (yank_first_line_33 = come_decrement_ref_count(yank_first_line_33, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 366, 274));
            (new_line_34 = come_decrement_ref_count(new_line_34, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 366, 275));
            (after_line = come_decrement_ref_count(after_line, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 366, 276));
            (yank_last_line = come_decrement_ref_count(yank_last_line, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 366, 277));
            (new_line2 = come_decrement_ref_count(new_line2, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 366, 278));
        }
        else if(list$1int$ph_length(nvi->yank)>2) {
            # 342 "07yank.nc"
            __right_value0 = (void*)0;
            yank_first_line_35=(int* )come_increment_ref_count(list$1int$ph_item(nvi->yank,0,((void*)0)), "07yank.nc", 342, 279);
            # 346 "07yank.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            new_line_36=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value1=xsprintf("%ls%ls",((int* )(__right_value0=wstring_substring(line,0,self->cursorX))),yank_first_line_35)))), "07yank.nc", 346, 280);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 346, 281));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 346, 282));
            # 347 "07yank.nc"
            __right_value0 = (void*)0;
            after_line_37=(int* )come_increment_ref_count(wstring_substring(line,self->cursorX,-1), "07yank.nc", 347, 283);
            # 349 "07yank.nc"
            list$1int$ph_replace(self->texts,self->scroll+self->cursorY,(int* )come_increment_ref_count(new_line_36, "07yank.nc", 349, 284));
            # 350 "07yank.nc"
            list$1int$_replace(self->texts_length,self->scroll+self->cursorY,wcslen(new_line_36));
            # 351 "07yank.nc"
            it2_38=0;
            # 358 "07yank.nc"
            for(__right_value0 = (void*)0,
({(_conditional_value_X0=(_o2_saved_6=(struct list$1int$ph*)come_increment_ref_count(list$1int$ph_sublist(nvi->yank,1,-2), "07yank.nc", 352, 285),it_39=list$1int$ph_begin(_o2_saved_6)));_conditional_value_X0;})            ;({(_conditional_value_X1=(!list$1int$ph_end(_o2_saved_6)));_conditional_value_X1;});({(_conditional_value_X2=(it_39=list$1int$ph_next(_o2_saved_6)));_conditional_value_X2;})){
                # 353 "07yank.nc"
                __right_value0 = (void*)0;
                list$1int$ph_insert(self->texts,self->scroll+self->cursorY+it2_38+1,(int* )come_increment_ref_count((int* )come_memdup(it_39, "07yank.nc", 353, 286, "int* "), "07yank.nc", 353, 287));
                # 354 "07yank.nc"
                list$1int$_insert(self->texts_length,self->scroll+self->cursorY+it2_38+1,wcslen(it_39));
                # 355 "07yank.nc"
                it2_38++;
            }
            # 358 "07yank.nc"
            __right_value0 = (void*)0;
            yank_last_line_40=(int* )come_increment_ref_count(list$1int$ph_item(nvi->yank,-1,((void*)0)), "07yank.nc", 358, 288);
            # 362 "07yank.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            new_line2_41=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value0=xsprintf("%ls%ls",yank_last_line_40,after_line_37)))), "07yank.nc", 362, 289);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 362, 290));
            # 363 "07yank.nc"
            list$1int$ph_insert(self->texts,self->scroll+self->cursorY+list$1int$ph_length(nvi->yank)-1,(int* )come_increment_ref_count(new_line2_41, "07yank.nc", 363, 291));
            # 364 "07yank.nc"
            list$1int$_insert(self->texts_length,self->scroll+self->cursorY+list$1int$ph_length(nvi->yank)-1,wcslen(new_line2_41));
            (yank_first_line_35 = come_decrement_ref_count(yank_first_line_35, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 366, 292));
            (new_line_36 = come_decrement_ref_count(new_line_36, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 366, 293));
            (after_line_37 = come_decrement_ref_count(after_line_37, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 366, 294));
            come_call_finalizer(list$1int$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07yank.nc}", 366, 295);
            (yank_last_line_40 = come_decrement_ref_count(yank_last_line_40, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 366, 296));
            (new_line2_41 = come_decrement_ref_count(new_line2_41, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 366, 297));
        }
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 367, 298));
    }
    neo_current_frame = fr.prev;
}

void ViWin_filePasteAfterCursor(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_filePasteAfterCursor"; neo_current_frame = &fr;
    int it2;
    struct list$1int$ph* _o2_saved_7;
    int*  it  ;
    void* __right_value0 = (void*)0;
    int*  line  ;
    int*  yank_first_line  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    int*  new_line  ;
    int*  yank_first_line_42  ;
    int*  new_line_43  ;
    int*  after_line  ;
    int*  yank_last_line  ;
    int*  new_line2  ;
    int*  yank_first_line_44  ;
    int*  new_line_45  ;
    int*  after_line_46  ;
    int it2_47;
    struct list$1int$ph* _o2_saved_8;
    int*  it_48  ;
    _Bool _conditional_value_X0;
    _Bool _conditional_value_X1;
    _Bool _conditional_value_X2;
    int*  yank_last_line_49  ;
    int*  new_line2_50  ;
    # 371 "07yank.nc"
    ViWin_loadFileYankFromFile(self,nvi);
    # 445 "07yank.nc"
    if(nvi->yankKind==(0)) {
        # 373 "07yank.nc"
        ViWin_pushUndo_v5(self);
        # 375 "07yank.nc"
        it2=0;
        # 381 "07yank.nc"
        for(_o2_saved_7=(struct list$1int$ph*)come_increment_ref_count(nvi->fileYank, "07yank.nc", 376, 299),it=list$1int$ph_begin(_o2_saved_7)        ;!list$1int$ph_end(_o2_saved_7);it=list$1int$ph_next(_o2_saved_7)){
            # 377 "07yank.nc"
            list$1int$ph_insert(self->texts,self->scroll+self->cursorY+it2+1,(int* )come_increment_ref_count((int* )come_memdup(it, "07yank.nc", 377, 300, "int* "), "07yank.nc", 377, 301));
            # 378 "07yank.nc"
            list$1int$_insert(self->texts_length,self->scroll+self->cursorY+it2+1,wcslen(it));
            # 379 "07yank.nc"
            it2++;
        }
        come_call_finalizer(list$1int$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07yank.nc}", 445, 302);
    }
    else {
        # 383 "07yank.nc"
        ViWin_pushUndo_v5(self);
        # 385 "07yank.nc"
        __right_value0 = (void*)0;
        line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "07yank.nc", 385, 303);
        # 444 "07yank.nc"
        if(list$1int$ph_length(nvi->fileYank)==1) {
            # 388 "07yank.nc"
            __right_value0 = (void*)0;
            yank_first_line=(int* )come_increment_ref_count(list$1int$ph_item(nvi->fileYank,0,((void*)0)), "07yank.nc", 388, 304);
            # 393 "07yank.nc"
            __right_value0 = (void*)0;
            new_line=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value2=xsprintf("%ls%ls%ls",((int* )(__right_value0=wstring_substring(line,0,self->cursorX+1))),yank_first_line,((int* )(__right_value1=wstring_substring(line,self->cursorX+1,-1))))))), "07yank.nc", 393, 305);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 392, 306));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 393, 307));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 393, 308));
            # 395 "07yank.nc"
            list$1int$ph_replace(self->texts,self->scroll+self->cursorY,(int* )come_increment_ref_count(new_line, "07yank.nc", 395, 309));
            # 396 "07yank.nc"
            list$1int$_replace(self->texts_length,self->scroll+self->cursorY,wcslen(new_line));
            (yank_first_line = come_decrement_ref_count(yank_first_line, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 444, 310));
            (new_line = come_decrement_ref_count(new_line, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 444, 311));
        }
        else if(list$1int$ph_length(nvi->fileYank)==2) {
            # 399 "07yank.nc"
            __right_value0 = (void*)0;
            yank_first_line_42=(int* )come_increment_ref_count(list$1int$ph_item(nvi->yank,0,((void*)0)), "07yank.nc", 399, 312);
            # 403 "07yank.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            new_line_43=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value1=xsprintf("%ls%ls",((int* )(__right_value0=wstring_substring(line,0,self->cursorX+1))),yank_first_line_42)))), "07yank.nc", 403, 313);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 403, 314));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 403, 315));
            # 405 "07yank.nc"
            __right_value0 = (void*)0;
            after_line=(int* )come_increment_ref_count(wstring_substring(line,self->cursorX+1,-1), "07yank.nc", 405, 316);
            # 407 "07yank.nc"
            list$1int$ph_replace(self->texts,self->scroll+self->cursorY,(int* )come_increment_ref_count(new_line_43, "07yank.nc", 407, 317));
            # 408 "07yank.nc"
            list$1int$_replace(self->texts_length,self->scroll+self->cursorY,wcslen(new_line_43));
            # 410 "07yank.nc"
            __right_value0 = (void*)0;
            yank_last_line=(int* )come_increment_ref_count(list$1int$ph_item(nvi->fileYank,-1,((void*)0)), "07yank.nc", 410, 318);
            # 414 "07yank.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            new_line2=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value0=xsprintf("%ls%ls",yank_last_line,after_line)))), "07yank.nc", 414, 319);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 414, 320));
            # 415 "07yank.nc"
            list$1int$ph_insert(self->texts,self->scroll+self->cursorY+1,(int* )come_increment_ref_count(new_line2, "07yank.nc", 415, 321));
            # 416 "07yank.nc"
            list$1int$_insert(self->texts_length,self->scroll+self->cursorY+1,wcslen(new_line2));
            (yank_first_line_42 = come_decrement_ref_count(yank_first_line_42, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 444, 322));
            (new_line_43 = come_decrement_ref_count(new_line_43, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 444, 323));
            (after_line = come_decrement_ref_count(after_line, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 444, 324));
            (yank_last_line = come_decrement_ref_count(yank_last_line, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 444, 325));
            (new_line2 = come_decrement_ref_count(new_line2, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 444, 326));
        }
        else if(list$1int$ph_length(nvi->fileYank)>2) {
            # 419 "07yank.nc"
            __right_value0 = (void*)0;
            yank_first_line_44=(int* )come_increment_ref_count(list$1int$ph_item(nvi->fileYank,0,((void*)0)), "07yank.nc", 419, 327);
            # 423 "07yank.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            new_line_45=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value1=xsprintf("%ls%ls",((int* )(__right_value0=wstring_substring(line,0,self->cursorX+1))),yank_first_line_44)))), "07yank.nc", 423, 328);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 423, 329));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 423, 330));
            # 424 "07yank.nc"
            __right_value0 = (void*)0;
            after_line_46=(int* )come_increment_ref_count(wstring_substring(line,self->cursorX+1,-1), "07yank.nc", 424, 331);
            # 426 "07yank.nc"
            list$1int$ph_replace(self->texts,self->scroll+self->cursorY,(int* )come_increment_ref_count(new_line_45, "07yank.nc", 426, 332));
            # 427 "07yank.nc"
            list$1int$_replace(self->texts_length,self->scroll+self->cursorY,wcslen(new_line_45));
            # 429 "07yank.nc"
            it2_47=0;
            # 436 "07yank.nc"
            for(__right_value0 = (void*)0,
({(_conditional_value_X0=(_o2_saved_8=(struct list$1int$ph*)come_increment_ref_count(list$1int$ph_sublist(nvi->fileYank,1,-2), "07yank.nc", 430, 333),it_48=list$1int$ph_begin(_o2_saved_8)));_conditional_value_X0;})            ;({(_conditional_value_X1=(!list$1int$ph_end(_o2_saved_8)));_conditional_value_X1;});({(_conditional_value_X2=(it_48=list$1int$ph_next(_o2_saved_8)));_conditional_value_X2;})){
                # 431 "07yank.nc"
                __right_value0 = (void*)0;
                list$1int$ph_insert(self->texts,self->scroll+self->cursorY+it2_47+1,(int* )come_increment_ref_count((int* )come_memdup(it_48, "07yank.nc", 431, 334, "int* "), "07yank.nc", 431, 335));
                # 432 "07yank.nc"
                list$1int$_insert(self->texts_length,self->scroll+self->cursorY+it2_47+1,wcslen(it_48));
                # 433 "07yank.nc"
                it2_47++;
            }
            # 436 "07yank.nc"
            __right_value0 = (void*)0;
            yank_last_line_49=(int* )come_increment_ref_count(list$1int$ph_item(nvi->fileYank,-1,((void*)0)), "07yank.nc", 436, 336);
            # 440 "07yank.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            new_line2_50=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value0=xsprintf("%ls%ls",yank_last_line_49,after_line_46)))), "07yank.nc", 440, 337);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "07yank.nc", 440, 338));
            # 441 "07yank.nc"
            list$1int$ph_insert(self->texts,self->scroll+self->cursorY+list$1int$ph_length(nvi->yank)-1,(int* )come_increment_ref_count(new_line2_50, "07yank.nc", 441, 339));
            # 442 "07yank.nc"
            list$1int$_insert(self->texts_length,self->scroll+self->cursorY+list$1int$ph_length(nvi->yank)-1,wcslen(new_line2_50));
            (yank_first_line_44 = come_decrement_ref_count(yank_first_line_44, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 444, 340));
            (new_line_45 = come_decrement_ref_count(new_line_45, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 444, 341));
            (after_line_46 = come_decrement_ref_count(after_line_46, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 444, 342));
            come_call_finalizer(list$1int$ph$p_finalize, _o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07yank.nc}", 444, 343);
            (yank_last_line_49 = come_decrement_ref_count(yank_last_line_49, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 444, 344));
            (new_line2_50 = come_decrement_ref_count(new_line2_50, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 444, 345));
        }
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "07yank.nc", 445, 346));
    }
    neo_current_frame = fr.prev;
}

static void lambda1(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda1"; neo_current_frame = &fr;
    # 461 "07yank.nc"
    self->selectedRegister=ViWin_getKey_v14(self->activeWin,(_Bool)0);
    # 462 "07yank.nc"
    ViWin_saveInputedKey_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

static void lambda2(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda2"; neo_current_frame = &fr;
    # 467 "07yank.nc"
    ViWin_pasteAfterCursor(self->activeWin,self);
    # 468 "07yank.nc"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

static void lambda3(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda3"; neo_current_frame = &fr;
    # 473 "07yank.nc"
    ViWin_pasteBeforeCursor(self->activeWin,self);
    # 474 "07yank.nc"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

struct Vi*  Vi_initialize_v7(struct Vi*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "Vi_initialize_v7"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct Vi*  result  ;
    void* __right_value1 = (void*)0;
    struct list$1int$ph* __dec_obj12;
    struct list$1int$ph* __dec_obj13;
    struct map$2int$list$1int$ph$ph* __dec_obj15;
    struct map$2int$int$* __dec_obj17;
    struct Vi*  __result_obj__0  ;
    # 449 "07yank.nc"
    result=(struct Vi* )come_increment_ref_count(Vi_initialize_v6((struct Vi* )come_increment_ref_count(self, "07yank.nc", 449, 347)), "07yank.nc", 449, 348);
    # 451 "07yank.nc"
    __right_value0 = (void*)0;
    __dec_obj12=result->yank,
    result->yank=(struct list$1int$ph*)come_increment_ref_count(list$1int$ph_initialize((struct list$1int$ph*)come_increment_ref_count((struct list$1int$ph*)come_calloc(1, sizeof(struct list$1int$ph)*(1), "07yank.nc", 451, 349, "struct list$1int$ph*"), "07yank.nc", 451, 350)), "07yank.nc", 451, 352);
    come_call_finalizer(list$1int$ph_finalize, __dec_obj12,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07yank.nc", 451, 351);
    # 452 "07yank.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj13=result->fileYank,
    result->fileYank=(struct list$1int$ph*)come_increment_ref_count(list$1int$ph_initialize((struct list$1int$ph*)come_increment_ref_count((struct list$1int$ph*)come_calloc(1, sizeof(struct list$1int$ph)*(1), "07yank.nc", 452, 353, "struct list$1int$ph*"), "07yank.nc", 452, 354)), "07yank.nc", 452, 356);
    come_call_finalizer(list$1int$ph_finalize, __dec_obj13,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07yank.nc", 452, 355);
    # 453 "07yank.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj15=result->registers,
    result->registers=(struct map$2int$list$1int$ph$ph*)come_increment_ref_count(map$2int$list$1int$ph$ph_initialize((struct map$2int$list$1int$ph$ph*)come_increment_ref_count((struct map$2int$list$1int$ph$ph*)come_calloc(1, sizeof(struct map$2int$list$1int$ph$ph)*(1), "07yank.nc", 453, 357, "struct map$2int$list$1int$ph$ph*"), "07yank.nc", 453, 382)), "07yank.nc", 472, 388);
    come_call_finalizer(map$2int$list$1int$ph$ph_finalize, __dec_obj15,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07yank.nc", 472, 387);
    # 454 "07yank.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj17=result->registerKinds,
    result->registerKinds=(struct map$2int$int$*)come_increment_ref_count(map$2int$int$_initialize((struct map$2int$int$*)come_increment_ref_count((struct map$2int$int$*)come_calloc(1, sizeof(struct map$2int$int$)*(1), "07yank.nc", 454, 389, "struct map$2int$int$*"), "07yank.nc", 454, 408)), "07yank.nc", 472, 413);
    come_call_finalizer(map$2int$int$_finalize, __dec_obj17,(void*)0, (void*)0, 0, 0, 0, (void*)0, "07yank.nc", 472, 412);
    # 455 "07yank.nc"
    result->selectedRegister=-1;
    # 457 "07yank.nc"
    result->yankKind=0;
    # 463 "07yank.nc"
    list$1lambda$_replace(result->events,34,lambda1);
    # 469 "07yank.nc"
    list$1lambda$_replace(result->events,112,lambda2);
    # 475 "07yank.nc"
    list$1lambda$_replace(result->events,80,lambda3);
    # 485 "07yank.nc"
        __result_obj__0 = (struct Vi* )come_increment_ref_count(result, "07yank.nc", 485, 420);
    come_call_finalizer(Vi_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0, "07yank.nc}", 485, 464);
    come_call_finalizer(Vi_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "07yank.nc}", 485, 465);
    neo_current_frame = fr.prev;
    come_call_finalizer(Vi_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "07yank.nc}", 485, 466);
    return __result_obj__0;
}

static struct map$2int$list$1int$ph$ph* map$2int$list$1int$ph$ph_initialize(struct map$2int$list$1int$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1int$ph$ph_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1int$* __dec_obj14;
    struct map$2int$list$1int$ph$ph* __result_obj__0;
    # 3322 "/usr/local/include/neo-c.h"
    # 3324 "/usr/local/include/neo-c.h"
    self->keys=(int*)come_increment_ref_count(((int*)(__right_value0=(int*)come_calloc(1, sizeof(int)*(1*(128)), "/usr/local/include/neo-c.h", 3324, 358, "int*"))), "/usr/local/include/neo-c.h", 3324, 359);
    # 3325 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    self->items=(struct list$1int$ph**)come_increment_ref_count(((struct list$1int$ph**)(__right_value0=(struct list$1int$ph**)come_calloc(1, sizeof(struct list$1int$ph*)*(1*(128)), "/usr/local/include/neo-c.h", 3325, 360, "struct list$1int$ph**"))), "/usr/local/include/neo-c.h", 3325, 361);
    # 3326 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    self->hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(128)), "/usr/local/include/neo-c.h", 3326, 362, "unsigned int*"))), "/usr/local/include/neo-c.h", 3326, 363);
    # 3327 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/neo-c.h", 3327, 364, "_Bool*"))), "/usr/local/include/neo-c.h", 3327, 365);
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
    __dec_obj14=self->key_list,
    self->key_list=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 3338, 366, "struct list$1int$*"), "/usr/local/include/neo-c.h", 3338, 371)), "/usr/local/include/neo-c.h", 472, 374);
    come_call_finalizer(list$1int$_finalize, __dec_obj14,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 472, 373);
    # 3340 "/usr/local/include/neo-c.h"
    self->it=0;
    # 3342 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct map$2int$list$1int$ph$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3342, 375);
    come_call_finalizer(map$2int$list$1int$ph$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 472, 380);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2int$list$1int$ph$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 472, 381);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 367);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 472, 369);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 472, 370);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 368);
    }
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 372);
    }
        neo_current_frame = fr.prev;
}

static void map$2int$list$1int$ph$ph$p_finalize(struct map$2int$list$1int$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1int$ph$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_51;
    # 3373 "/usr/local/include/neo-c.h"
    # 3382 "/usr/local/include/neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3381 "/usr/local/include/neo-c.h"
        if(self->item_existance[i]) {
            # 3380 "/usr/local/include/neo-c.h"
            if(1) {
                # 3378 "/usr/local/include/neo-c.h"
                come_call_finalizer(list$1int$ph$p_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3378, 376);
            }
        }
    }
    # 3382 "/usr/local/include/neo-c.h"
    come_free((char*)self->items);
    # 3391 "/usr/local/include/neo-c.h"
    for(i_51=0    ;i_51<self->size;i_51++){
        # 3390 "/usr/local/include/neo-c.h"
        if(self->item_existance[i_51]) {
            # 3389 "/usr/local/include/neo-c.h"
            if(0) {
                # 3387 "/usr/local/include/neo-c.h"
            }
        }
    }
    # 3391 "/usr/local/include/neo-c.h"
    come_free((char*)self->keys);
    # 3393 "/usr/local/include/neo-c.h"
    come_call_finalizer(list$1int$$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3393, 377);
    # 3395 "/usr/local/include/neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3395, 378));
    # 3396 "/usr/local/include/neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3396, 379));
        neo_current_frame = fr.prev;
}

static void map$2int$list$1int$ph$ph_finalize(struct map$2int$list$1int$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1int$ph$ph_finalize"; neo_current_frame = &fr;
    int i;
    int i_52;
    # 3373 "/usr/local/include/neo-c.h"
    # 3382 "/usr/local/include/neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3381 "/usr/local/include/neo-c.h"
        if(self->item_existance[i]) {
            # 3380 "/usr/local/include/neo-c.h"
            if(1) {
                # 3378 "/usr/local/include/neo-c.h"
                come_call_finalizer(list$1int$ph$p_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3378, 383);
            }
        }
    }
    # 3382 "/usr/local/include/neo-c.h"
    come_free((char*)self->items);
    # 3391 "/usr/local/include/neo-c.h"
    for(i_52=0    ;i_52<self->size;i_52++){
        # 3390 "/usr/local/include/neo-c.h"
        if(self->item_existance[i_52]) {
            # 3389 "/usr/local/include/neo-c.h"
            if(0) {
                # 3387 "/usr/local/include/neo-c.h"
            }
        }
    }
    # 3391 "/usr/local/include/neo-c.h"
    come_free((char*)self->keys);
    # 3393 "/usr/local/include/neo-c.h"
    come_call_finalizer(list$1int$$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3393, 384);
    # 3395 "/usr/local/include/neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3395, 385));
    # 3396 "/usr/local/include/neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3396, 386));
        neo_current_frame = fr.prev;
}

static struct map$2int$int$* map$2int$int$_initialize(struct map$2int$int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$int$_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int i;
    void* __right_value1 = (void*)0;
    struct list$1int$* __dec_obj16;
    struct map$2int$int$* __result_obj__0;
    # 3322 "/usr/local/include/neo-c.h"
    # 3324 "/usr/local/include/neo-c.h"
    self->keys=(int*)come_increment_ref_count(((int*)(__right_value0=(int*)come_calloc(1, sizeof(int)*(1*(128)), "/usr/local/include/neo-c.h", 3324, 390, "int*"))), "/usr/local/include/neo-c.h", 3324, 391);
    # 3325 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    self->items=(int*)come_increment_ref_count(((int*)(__right_value0=(int*)come_calloc(1, sizeof(int)*(1*(128)), "/usr/local/include/neo-c.h", 3325, 392, "int*"))), "/usr/local/include/neo-c.h", 3325, 393);
    # 3326 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    self->hashes=(unsigned int*)come_increment_ref_count(((unsigned int*)(__right_value0=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(128)), "/usr/local/include/neo-c.h", 3326, 394, "unsigned int*"))), "/usr/local/include/neo-c.h", 3326, 395);
    # 3327 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "/usr/local/include/neo-c.h", 3327, 396, "_Bool*"))), "/usr/local/include/neo-c.h", 3327, 397);
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
    __dec_obj16=self->key_list,
    self->key_list=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 3338, 398, "struct list$1int$*"), "/usr/local/include/neo-c.h", 3338, 399)), "/usr/local/include/neo-c.h", 3338, 401);
    come_call_finalizer(list$1int$_finalize, __dec_obj16,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3338, 400);
    # 3340 "/usr/local/include/neo-c.h"
    self->it=0;
    # 3342 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct map$2int$int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3342, 402);
    come_call_finalizer(map$2int$int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 472, 406);
    neo_current_frame = fr.prev;
    come_call_finalizer(map$2int$int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 472, 407);
    return __result_obj__0;
}

static void map$2int$int$$p_finalize(struct map$2int$int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$int$$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_53;
    # 3373 "/usr/local/include/neo-c.h"
    # 3382 "/usr/local/include/neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3381 "/usr/local/include/neo-c.h"
        if(self->item_existance[i]) {
            # 3380 "/usr/local/include/neo-c.h"
            if(0) {
                # 3378 "/usr/local/include/neo-c.h"
            }
        }
    }
    # 3382 "/usr/local/include/neo-c.h"
    come_free((char*)self->items);
    # 3391 "/usr/local/include/neo-c.h"
    for(i_53=0    ;i_53<self->size;i_53++){
        # 3390 "/usr/local/include/neo-c.h"
        if(self->item_existance[i_53]) {
            # 3389 "/usr/local/include/neo-c.h"
            if(0) {
                # 3387 "/usr/local/include/neo-c.h"
            }
        }
    }
    # 3391 "/usr/local/include/neo-c.h"
    come_free((char*)self->keys);
    # 3393 "/usr/local/include/neo-c.h"
    come_call_finalizer(list$1int$$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3393, 403);
    # 3395 "/usr/local/include/neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3395, 404));
    # 3396 "/usr/local/include/neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3396, 405));
        neo_current_frame = fr.prev;
}

static void map$2int$int$_finalize(struct map$2int$int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$int$_finalize"; neo_current_frame = &fr;
    int i;
    int i_54;
    # 3373 "/usr/local/include/neo-c.h"
    # 3382 "/usr/local/include/neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3381 "/usr/local/include/neo-c.h"
        if(self->item_existance[i]) {
            # 3380 "/usr/local/include/neo-c.h"
            if(0) {
                # 3378 "/usr/local/include/neo-c.h"
            }
        }
    }
    # 3382 "/usr/local/include/neo-c.h"
    come_free((char*)self->items);
    # 3391 "/usr/local/include/neo-c.h"
    for(i_54=0    ;i_54<self->size;i_54++){
        # 3390 "/usr/local/include/neo-c.h"
        if(self->item_existance[i_54]) {
            # 3389 "/usr/local/include/neo-c.h"
            if(0) {
                # 3387 "/usr/local/include/neo-c.h"
            }
        }
    }
    # 3391 "/usr/local/include/neo-c.h"
    come_free((char*)self->keys);
    # 3393 "/usr/local/include/neo-c.h"
    come_call_finalizer(list$1int$$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3393, 409);
    # 3395 "/usr/local/include/neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3395, 410));
    # 3396 "/usr/local/include/neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3396, 411));
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
    int i_57;
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
    i_57=0;
    # 2054 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 2050 "/usr/local/include/neo-c.h"
        if(position==i_57) {
            # 2047 "/usr/local/include/neo-c.h"
            it->item=item;
            # 2048 "/usr/local/include/neo-c.h"
            break;
        }
        # 2050 "/usr/local/include/neo-c.h"
        it=it->next;
        # 2051 "/usr/local/include/neo-c.h"
        i_57++;
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
    struct list_item$1lambda$* litem_55;
    struct list_item$1lambda$* litem_56;
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
        litem=(struct list_item$1lambda$*)come_increment_ref_count(((struct list_item$1lambda$*)(__right_value0=(struct list_item$1lambda$*)come_calloc(1, sizeof(struct list_item$1lambda$)*(1), "/usr/local/include/neo-c.h", 1619, 414, "struct list_item$1lambda$*"))), "/usr/local/include/neo-c.h", 1619, 415);
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
        litem_55=(struct list_item$1lambda$*)come_increment_ref_count(((struct list_item$1lambda$*)(__right_value0=(struct list_item$1lambda$*)come_calloc(1, sizeof(struct list_item$1lambda$)*(1), "/usr/local/include/neo-c.h", 1629, 416, "struct list_item$1lambda$*"))), "/usr/local/include/neo-c.h", 1629, 417);
        # 1631 "/usr/local/include/neo-c.h"
        litem_55->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_55->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        litem_55->item=item;
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_55;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_55;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_56=(struct list_item$1lambda$*)come_increment_ref_count(((struct list_item$1lambda$*)(__right_value0=(struct list_item$1lambda$*)come_calloc(1, sizeof(struct list_item$1lambda$)*(1), "/usr/local/include/neo-c.h", 1639, 418, "struct list_item$1lambda$*"))), "/usr/local/include/neo-c.h", 1639, 419);
        # 1641 "/usr/local/include/neo-c.h"
        litem_56->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_56->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        litem_56->item=item;
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_56;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_56;
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
        come_call_finalizer(list$1ViWin$ph$p_finalize, self->wins, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 8, 454);
    }
    # 4 "Vi_finalize"
    if(self!=((void*)0)&&self->events!=((void*)0)) {
        # 3 "Vi_finalize"
        come_call_finalizer(list$1lambda$$p_finalize, self->events, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 2, 456);
    }
    # 5 "Vi_finalize"
    if(self!=((void*)0)&&self->yank!=((void*)0)) {
        # 4 "Vi_finalize"
        come_call_finalizer(list$1int$ph$p_finalize, self->yank, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 4, 457);
    }
    # 6 "Vi_finalize"
    if(self!=((void*)0)&&self->fileYank!=((void*)0)) {
        # 5 "Vi_finalize"
        come_call_finalizer(list$1int$ph$p_finalize, self->fileYank, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 5, 458);
    }
    # 7 "Vi_finalize"
    if(self!=((void*)0)&&self->registers!=((void*)0)) {
        # 6 "Vi_finalize"
        come_call_finalizer(map$2int$list$1int$ph$ph$p_finalize, self->registers, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 6, 459);
    }
    # 8 "Vi_finalize"
    if(self!=((void*)0)&&self->registerKinds!=((void*)0)) {
        # 7 "Vi_finalize"
        come_call_finalizer(map$2int$int$$p_finalize, self->registerKinds, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 7, 460);
    }
    # 9 "Vi_finalize"
    if(self!=((void*)0)&&self->commandHistory!=((void*)0)) {
        # 8 "Vi_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->commandHistory, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 0, 463);
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
        come_call_finalizer(list_item$1ViWin$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 453);
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
        come_call_finalizer(ViWin_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1ViWin$ph$p_finalize}", 2, 452);
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
        come_call_finalizer(list$1int$ph$p_finalize, self->texts, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 2, 421);
    }
    # 4 "ViWin_finalize"
    if(self!=((void*)0)&&self->texts_length!=((void*)0)) {
        # 3 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->texts_length, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 3, 422);
    }
    # 5 "ViWin_finalize"
    if(self!=((void*)0)&&self->returnPoint!=((void*)0)) {
        # 4 "ViWin_finalize"
        come_call_finalizer(tuple3$3int$int$int$$p_finalize, self->returnPoint, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 4, 423);
    }
    # 6 "ViWin_finalize"
    if(self!=((void*)0)&&self->returnPointStack!=((void*)0)) {
        # 5 "ViWin_finalize"
        come_call_finalizer(list$1tuple3$3int$int$int$$ph$p_finalize, self->returnPointStack, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 0, 426);
    }
    # 7 "ViWin_finalize"
    if(self!=((void*)0)&&self->undo!=((void*)0)) {
        # 6 "ViWin_finalize"
        come_call_finalizer(list$1list$1int$ph$ph$p_finalize, self->undo, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 2, 429);
    }
    # 8 "ViWin_finalize"
    if(self!=((void*)0)&&self->undoScroll!=((void*)0)) {
        # 7 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->undoScroll, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 7, 430);
    }
    # 9 "ViWin_finalize"
    if(self!=((void*)0)&&self->undoCursorX!=((void*)0)) {
        # 8 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->undoCursorX, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 8, 431);
    }
    # 10 "ViWin_finalize"
    if(self!=((void*)0)&&self->undoCursorY!=((void*)0)) {
        # 9 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->undoCursorY, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 9, 432);
    }
    # 11 "ViWin_finalize"
    if(self!=((void*)0)&&self->fileName!=((void*)0)) {
        # 10 "ViWin_finalize"
        (self->fileName = come_decrement_ref_count(self->fileName, (void*)0, (void*)0, 0, 0, (void*)0, "ViWin_finalize", 10, 433));
    }
    # 12 "ViWin_finalize"
    if(self!=((void*)0)&&self->inputedKeys!=((void*)0)) {
        # 11 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->inputedKeys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 11, 434);
    }
    # 13 "ViWin_finalize"
    if(self!=((void*)0)&&self->savedInputedKeys!=((void*)0)) {
        # 12 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->savedInputedKeys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 12, 435);
    }
    # 14 "ViWin_finalize"
    if(self!=((void*)0)&&self->macro!=((void*)0)) {
        # 13 "ViWin_finalize"
        come_call_finalizer(map$2int$list$1list$1int$$ph$ph$p_finalize, self->macro, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 2, 442);
    }
    # 15 "ViWin_finalize"
    if(self!=((void*)0)&&self->recordingMacro!=((void*)0)) {
        # 14 "ViWin_finalize"
        come_call_finalizer(list$1list$1int$$ph$p_finalize, self->recordingMacro, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 14, 443);
    }
    # 16 "ViWin_finalize"
    if(self!=((void*)0)&&self->runningMacro!=((void*)0)) {
        # 15 "ViWin_finalize"
        come_call_finalizer(list$1list$1int$$ph$p_finalize, self->runningMacro, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 15, 444);
    }
    # 17 "ViWin_finalize"
    if(self!=((void*)0)&&self->mark!=((void*)0)) {
        # 16 "ViWin_finalize"
        come_call_finalizer(map$2int$tuple3$3int$int$int$$ph$p_finalize, self->mark, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 2, 449);
    }
    # 18 "ViWin_finalize"
    if(self!=((void*)0)&&self->completionCandidates!=((void*)0)) {
        # 17 "ViWin_finalize"
        come_call_finalizer(list$1int$ph$p_finalize, self->completionCandidates, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 17, 450);
    }
    # 19 "ViWin_finalize"
    if(self!=((void*)0)&&self->completionPrefix!=((void*)0)) {
        # 18 "ViWin_finalize"
        (self->completionPrefix = come_decrement_ref_count(self->completionPrefix, (void*)0, (void*)0, 0, 0, (void*)0, "ViWin_finalize", 18, 451));
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
        come_call_finalizer(list_item$1tuple3$3int$int$int$$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 425);
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
        come_call_finalizer(tuple3$3int$int$int$$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple3$3int$int$int$$ph$p_finalize}", 2, 424);
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
        come_call_finalizer(list_item$1list$1int$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 428);
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
        come_call_finalizer(list$1int$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1list$1int$ph$ph$p_finalize}", 2, 427);
    }
            neo_current_frame = fr.prev;
}

static void map$2int$list$1list$1int$$ph$ph$p_finalize(struct map$2int$list$1list$1int$$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1list$1int$$ph$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_58;
    # 3373 "/usr/local/include/neo-c.h"
    # 3382 "/usr/local/include/neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3381 "/usr/local/include/neo-c.h"
        if(self->item_existance[i]) {
            # 3380 "/usr/local/include/neo-c.h"
            if(1) {
                # 3378 "/usr/local/include/neo-c.h"
                come_call_finalizer(list$1list$1int$$ph$p_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2, 438);
            }
        }
    }
    # 3382 "/usr/local/include/neo-c.h"
    come_free((char*)self->items);
    # 3391 "/usr/local/include/neo-c.h"
    for(i_58=0    ;i_58<self->size;i_58++){
        # 3390 "/usr/local/include/neo-c.h"
        if(self->item_existance[i_58]) {
            # 3389 "/usr/local/include/neo-c.h"
            if(0) {
                # 3387 "/usr/local/include/neo-c.h"
            }
        }
    }
    # 3391 "/usr/local/include/neo-c.h"
    come_free((char*)self->keys);
    # 3393 "/usr/local/include/neo-c.h"
    come_call_finalizer(list$1int$$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3393, 439);
    # 3395 "/usr/local/include/neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3395, 440));
    # 3396 "/usr/local/include/neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3396, 441));
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
        come_call_finalizer(list_item$1list$1int$$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 437);
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
        come_call_finalizer(list$1int$$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1list$1int$$ph$p_finalize}", 2, 436);
    }
            neo_current_frame = fr.prev;
}

static void map$2int$tuple3$3int$int$int$$ph$p_finalize(struct map$2int$tuple3$3int$int$int$$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$tuple3$3int$int$int$$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_59;
    # 3373 "/usr/local/include/neo-c.h"
    # 3382 "/usr/local/include/neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3381 "/usr/local/include/neo-c.h"
        if(self->item_existance[i]) {
            # 3380 "/usr/local/include/neo-c.h"
            if(1) {
                # 3378 "/usr/local/include/neo-c.h"
                come_call_finalizer(tuple3$3int$int$int$$p_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3378, 445);
            }
        }
    }
    # 3382 "/usr/local/include/neo-c.h"
    come_free((char*)self->items);
    # 3391 "/usr/local/include/neo-c.h"
    for(i_59=0    ;i_59<self->size;i_59++){
        # 3390 "/usr/local/include/neo-c.h"
        if(self->item_existance[i_59]) {
            # 3389 "/usr/local/include/neo-c.h"
            if(0) {
                # 3387 "/usr/local/include/neo-c.h"
            }
        }
    }
    # 3391 "/usr/local/include/neo-c.h"
    come_free((char*)self->keys);
    # 3393 "/usr/local/include/neo-c.h"
    come_call_finalizer(list$1int$$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3393, 446);
    # 3395 "/usr/local/include/neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3395, 447));
    # 3396 "/usr/local/include/neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3396, 448));
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
        come_call_finalizer(list_item$1lambda$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 455);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1lambda$$p_finalize(struct list_item$1lambda$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1lambda$$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1lambda$$p_finalize"
            neo_current_frame = fr.prev;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 462);
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
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 461));
    }
            neo_current_frame = fr.prev;
}

