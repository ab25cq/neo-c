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

enum { kOperatorDelete 
,kOperatorChange 
,kOperatorYank 
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
static _Bool is_text_object_word_char(int  c  );
static void normalize_operator_range(int* head_y, int* head_x, int* tail_y, int* tail_x);
static void clamp_operator_position(struct ViWin*  self  , int y, int* x);
static int*  list$1int$ph_item(struct list$1int$ph* self, int position, int*  default_value  );
static int operator_repeat_count(struct ViWin*  self  );
static _Bool yank_operator_range(struct ViWin*  self  , struct Vi*  nvi  , int head_y, int head_x, int tail_y, int tail_x);
static struct list$1int$ph* list$1int$ph_reset(struct list$1int$ph* self);
static void list_item$1int$ph$p_finalize(struct list_item$1int$ph* self);
static struct list$1int$ph* list$1int$ph_push_back(struct list$1int$ph* self, int*  item  );
static _Bool delete_operator_range(struct ViWin*  self  , struct Vi*  nvi  , int head_y, int head_x, int tail_y, int tail_x);
static struct list$1int$* list$1int$_replace(struct list$1int$* self, int position, int item);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static struct list$1int$ph* list$1int$ph_replace(struct list$1int$ph* self, int position, int*  item  );
static struct list$1int$ph* list$1int$ph_delete(struct list$1int$ph* self, int head, int tail);
static struct list$1int$* list$1int$_delete(struct list$1int$* self, int head, int tail);
static struct list$1int$* list$1int$_reset(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static _Bool get_find_motion_range(struct ViWin*  self  , int motion, int find_char, int* head_y, int* head_x, int* tail_y, int* tail_x);
static _Bool get_motion_range(struct ViWin*  self  , int motion, int* head_y, int* head_x, int* tail_y, int* tail_x);
static _Bool get_ge_motion_range(struct ViWin*  self  , int* head_y, int* head_x, int* tail_y, int* tail_x);
static _Bool get_word_text_object_range(struct ViWin*  self  , _Bool around, int* head, int* tail);
static _Bool get_quote_text_object_range(struct ViWin*  self  , int  quote  , _Bool around, int* head, int* tail);
static _Bool get_block_text_object_range(struct ViWin*  self  , int  open_brace  , int  close_brace  , _Bool around, int* head, int* tail);
static _Bool get_text_object_range(struct ViWin*  self  , _Bool around, int key, int* head, int* tail);
static _Bool yank_text_object(struct ViWin*  self  , struct Vi*  nvi  , _Bool around, int key);
static _Bool delete_text_object(struct ViWin*  self  , struct Vi*  nvi  , _Bool around, int key);
static _Bool apply_text_object_operator(struct Vi*  self  , int operator_kind, _Bool around, int key);
static _Bool apply_motion_operator(struct Vi*  self  , int operator_kind, int motion, int motion_key);
static void run_operator_pending(struct Vi*  self  , int operator_kind);
static int list$1int$ph_length(struct list$1int$ph* self);
struct ViWin*  ViWin_initialize_v10(struct ViWin*  self  , int y, int x, int width, int height, struct Vi*  vi  );
static void ViWin_finalize(struct ViWin*  self  );
static void list$1int$ph$p_finalize(struct list$1int$ph* self);
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
void ViWin_modifyCursorOnDeleting(struct ViWin*  self  );
void ViWin_deleteOneLine_v10(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_deleteOneLine2(struct ViWin*  self  , struct Vi*  nvi  );
static struct list$1int$ph* list$1int$ph_insert(struct list$1int$ph* self, int position, int*  item  );
static struct list$1int$* list$1int$_insert(struct list$1int$* self, int position, int item);
void ViWin_deleteWord(struct ViWin*  self  , struct Vi*  nvi  );
void ViWin_deleteForNextCharacter(struct ViWin*  self  );
void ViWin_deleteForNextCharacter2(struct ViWin*  self  );
void ViWin_deleteCursorCharactor(struct ViWin*  self  );
static int list$1int$_item(struct list$1int$* self, int position, int default_value);
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
static void lambda1(struct Vi*  self  , int key);
static void lambda2(struct Vi*  self  , int key);
static void lambda3(struct Vi*  self  , int key);
static void lambda4(struct Vi*  self  , int key);
static void lambda5(struct Vi*  self  , int key);
static void lambda6(struct Vi*  self  , int key);
static void lambda7(struct Vi*  self  , int key);
static void lambda8(struct Vi*  self  , int key);
static void lambda9(struct Vi*  self  , int key);
static void lambda10(struct Vi*  self  , int key);
static void lambda11(struct Vi*  self  , int key);
static void lambda12(struct Vi*  self  , int key);
static void lambda13(struct Vi*  self  , int key);
static void lambda14(struct Vi*  self  , int key);
static void lambda15(struct Vi*  self  , int key);
static void lambda16(struct Vi*  self  , int key);
static void lambda17(struct Vi*  self  , int key);
static void lambda18(struct Vi*  self  , int key);
static void lambda19(struct Vi*  self  , int key);
static void lambda20(struct Vi*  self  , int key);
static void lambda21(struct Vi*  self  , int key);
static void lambda22(struct Vi*  self  , int key);
static void lambda23(struct Vi*  self  , int key);
static void lambda24(struct Vi*  self  , int key);
static void lambda25(struct Vi*  self  , int key);
struct Vi*  Vi_initialize_v10(struct Vi*  self  );
static struct list$1lambda$* list$1lambda$_replace(struct list$1lambda$* self, int position, void (*item)(struct Vi* ,int));
static struct list$1lambda$* list$1lambda$_push_back(struct list$1lambda$* self, void (*item)(struct Vi* ,int));
static void Vi_finalize(struct Vi*  self  );
static void list$1ViWin$ph$p_finalize(struct list$1ViWin$ph* self);
static void list_item$1ViWin$ph$p_finalize(struct list_item$1ViWin$ph* self);
static void list$1lambda$$p_finalize(struct list$1lambda$* self);
static void list_item$1lambda$$p_finalize(struct list_item$1lambda$* self);
static void map$2int$list$1int$ph$ph$p_finalize(struct map$2int$list$1int$ph$ph* self);
static void map$2int$int$$p_finalize(struct map$2int$int$* self);
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
static _Bool is_text_object_word_char(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_text_object_word_char"; neo_current_frame = &fr;
    # 11 "10edit.nc"
        neo_current_frame = fr.prev;
    return xiswalnum(c)||c==95;
    neo_current_frame = fr.prev;
}

static void normalize_operator_range(int* head_y, int* head_x, int* tail_y, int* tail_x)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "normalize_operator_range"; neo_current_frame = &fr;
    int tmp;
    memset(&tmp, 0, sizeof(tmp));
    # 25 "10edit.nc"
    if(*head_y>*tail_y||(*head_y==*tail_y&&*head_x>*tail_x)) {
        # 17 "10edit.nc"
        tmp=*head_y;
        # 18 "10edit.nc"
        *head_y=*tail_y;
        # 19 "10edit.nc"
        *tail_y=tmp;
        # 21 "10edit.nc"
        tmp=*head_x;
        # 22 "10edit.nc"
        *head_x=*tail_x;
        # 23 "10edit.nc"
        *tail_x=tmp;
    }
    neo_current_frame = fr.prev;
}

static void clamp_operator_position(struct ViWin*  self  , int y, int* x)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "clamp_operator_position"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int*  line  ;
    memset(&line, 0, sizeof(line));
    # 29 "10edit.nc"
    line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,y,((int* )(__right_value0=__builtin_wstring("","10edit.nc",29)))), "10edit.nc", 29, 7);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 29, 8));
    # 34 "10edit.nc"
    if(*x<0) {
        # 32 "10edit.nc"
        *x=0;
    }
    # 37 "10edit.nc"
    if(*x>wstring_length(line)) {
        # 35 "10edit.nc"
        *x=wstring_length(line);
    }
    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 39, 9));
    neo_current_frame = fr.prev;
}

static int*  list$1int$ph_item(struct list$1int$ph* self, int position, int*  default_value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_item"; neo_current_frame = &fr;
    int*  __result_obj__0  ;
    struct list_item$1int$ph* it;
    int i;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    # 1750 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1747 "/usr/local/include/neo-c.h"
                __result_obj__0 = (int* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 1747, 1);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 1747, 2));
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
                        __result_obj__0 = (int* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 1758, 3);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 1758, 4));
            return __result_obj__0;
        }
        # 1760 "/usr/local/include/neo-c.h"
        it=it->next;
        # 1761 "/usr/local/include/neo-c.h"
        i++;
    }
    # 1764 "/usr/local/include/neo-c.h"
        __result_obj__0 = (int* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 1764, 5);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 1764, 6));
    return __result_obj__0;
}

static int operator_repeat_count(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "operator_repeat_count"; neo_current_frame = &fr;
    # 45 "10edit.nc"
    if(self->digitInput>0) {
        # 42 "10edit.nc"
                neo_current_frame = fr.prev;
        return self->digitInput+1;
    }
    # 45 "10edit.nc"
        neo_current_frame = fr.prev;
    return 1;
    neo_current_frame = fr.prev;
}

static _Bool yank_operator_range(struct ViWin*  self  , struct Vi*  nvi  , int head_y, int head_x, int tail_y, int tail_x)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "yank_operator_range"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int*  line  ;
    int*  first_line  ;
    int i;
    void* __right_value2 = (void*)0;
    int*  last_line  ;
    memset(&line, 0, sizeof(line));
    memset(&first_line, 0, sizeof(first_line));
    memset(&i, 0, sizeof(i));
    memset(&last_line, 0, sizeof(last_line));
    # 50 "10edit.nc"
    normalize_operator_range(&head_y,&head_x,&tail_y,&tail_x);
    # 51 "10edit.nc"
    clamp_operator_position(self,head_y,&head_x);
    # 52 "10edit.nc"
    clamp_operator_position(self,tail_y,&tail_x);
    # 58 "10edit.nc"
    if(head_y==tail_y&&head_x==tail_x) {
        # 55 "10edit.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 58 "10edit.nc"
    list$1int$ph_reset(nvi->yank);
    # 59 "10edit.nc"
    nvi->yankKind=(1);
    # 77 "10edit.nc"
    if(head_y==tail_y) {
        # 62 "10edit.nc"
        line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,head_y,((int* )(__right_value0=__builtin_wstring("","10edit.nc",62)))), "10edit.nc", 62, 12);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 62, 13));
        # 63 "10edit.nc"
        __right_value0 = (void*)0;
        list$1int$ph_push_back(nvi->yank,(int* )come_increment_ref_count(wstring_substring(line,head_x,tail_x), "10edit.nc", 63, 28));
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 77, 29));
    }
    else {
        # 66 "10edit.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        first_line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,head_y,((int* )(__right_value0=__builtin_wstring("","10edit.nc",66)))), "10edit.nc", 66, 30);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 66, 31));
        # 67 "10edit.nc"
        __right_value0 = (void*)0;
        list$1int$ph_push_back(nvi->yank,(int* )come_increment_ref_count(wstring_substring(first_line,head_x,-1), "10edit.nc", 67, 32));
        # 73 "10edit.nc"
        for(i=head_y+1        ;i<tail_y;i++){
            # 70 "10edit.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            list$1int$ph_push_back(nvi->yank,(int* )come_increment_ref_count((int* )come_memdup(((int* )(__right_value1=list$1int$ph_item(self->texts,i,((int* )(__right_value0=__builtin_wstring("","10edit.nc",70)))))), "10edit.nc", 70, 33, "int* "), "10edit.nc", 70, 34));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 70, 35));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 70, 36));
        }
        # 73 "10edit.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        last_line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,tail_y,((int* )(__right_value0=__builtin_wstring("","10edit.nc",73)))), "10edit.nc", 73, 37);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 73, 38));
        # 74 "10edit.nc"
        __right_value0 = (void*)0;
        list$1int$ph_push_back(nvi->yank,(int* )come_increment_ref_count(wstring_substring(last_line,0,tail_x), "10edit.nc", 74, 39));
        (first_line = come_decrement_ref_count(first_line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 77, 40));
        (last_line = come_decrement_ref_count(last_line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 77, 41));
    }
    # 77 "10edit.nc"
    ViWin_saveYankToFile(self,nvi);
    # 79 "10edit.nc"
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
    # 1860 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1857 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1860 "/usr/local/include/neo-c.h"
    it=self->head;
    # 1867 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1862 "/usr/local/include/neo-c.h"
        prev_it=it;
        # 1863 "/usr/local/include/neo-c.h"
        it=it->next;
        # 1864 "/usr/local/include/neo-c.h"
        come_call_finalizer(list_item$1int$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1864, 11);
    }
    # 1867 "/usr/local/include/neo-c.h"
    self->head=((void*)0);
    # 1868 "/usr/local/include/neo-c.h"
    self->tail=((void*)0);
    # 1870 "/usr/local/include/neo-c.h"
    self->len=0;
    # 1872 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list_item$1int$ph$p_finalize(struct list_item$1int$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$ph$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1int$ph$p_finalize"
    # 3 "list_item$1int$ph$p_finalize"
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        # 2 "list_item$1int$ph$p_finalize"
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1int$ph$p_finalize", 2, 10));
    }
            neo_current_frame = fr.prev;
}

static struct list$1int$ph* list$1int$ph_push_back(struct list$1int$ph* self, int*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_push_back"; neo_current_frame = &fr;
    struct list$1int$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$ph* litem;
    int*  __dec_obj1  ;
    struct list_item$1int$ph* litem_0;
    int*  __dec_obj2  ;
    struct list_item$1int$ph* litem_1;
    int*  __dec_obj3  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_0, 0, sizeof(litem_0));
    memset(&litem_1, 0, sizeof(litem_1));
    # 1618 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1615, 14));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/usr/local/include/neo-c.h"
    if(self->len==0) {
        # 1619 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1619, 15, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1619, 16);
        # 1621 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/usr/local/include/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/usr/local/include/neo-c.h"
        __dec_obj1=litem->item,
        litem->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 18);
        __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1623, 17);
        # 1625 "/usr/local/include/neo-c.h"
        self->tail=litem;
        # 1626 "/usr/local/include/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1629, 19, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1629, 20);
        # 1631 "/usr/local/include/neo-c.h"
        litem_0->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_0->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        __dec_obj2=litem_0->item,
        litem_0->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 22);
        __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1633, 21);
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_0;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_0;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1639, 23, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1639, 24);
        # 1641 "/usr/local/include/neo-c.h"
        litem_1->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_1->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        __dec_obj3=litem_1->item,
        litem_1->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 26);
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1643, 25);
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_1;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_1;
    }
    # 1649 "/usr/local/include/neo-c.h"
    self->len++;
    # 1651 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1651, 27));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool delete_operator_range(struct ViWin*  self  , struct Vi*  nvi  , int head_y, int head_x, int tail_y, int tail_x)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "delete_operator_range"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int*  line  ;
    int*  first_line  ;
    int*  last_line  ;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    int*  new_line  ;
    memset(&line, 0, sizeof(line));
    memset(&first_line, 0, sizeof(first_line));
    memset(&last_line, 0, sizeof(last_line));
    memset(&new_line, 0, sizeof(new_line));
    # 84 "10edit.nc"
    normalize_operator_range(&head_y,&head_x,&tail_y,&tail_x);
    # 85 "10edit.nc"
    clamp_operator_position(self,head_y,&head_x);
    # 86 "10edit.nc"
    clamp_operator_position(self,tail_y,&tail_x);
    # 92 "10edit.nc"
    if(head_y==tail_y&&head_x==tail_x) {
        # 89 "10edit.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 96 "10edit.nc"
    if(!yank_operator_range(self,nvi,head_y,head_x,tail_y,tail_x)) {
        # 93 "10edit.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 96 "10edit.nc"
    ViWin_pushUndo_v5(self);
    # 114 "10edit.nc"
    if(head_y==tail_y) {
        # 99 "10edit.nc"
        line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,head_y,((int* )(__right_value0=__builtin_wstring("","10edit.nc",99)))), "10edit.nc", 99, 42);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 99, 43));
        # 100 "10edit.nc"
        __right_value0 = (void*)0;
        ((int* )(__right_value0=wstring_delete(line,head_x,tail_x)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 100, 44));
        # 101 "10edit.nc"
        list$1int$_replace(self->texts_length,head_y,wcslen(line));
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 114, 51));
    }
    else {
        # 104 "10edit.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        first_line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,head_y,((int* )(__right_value0=__builtin_wstring("","10edit.nc",104)))), "10edit.nc", 104, 52);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 104, 53));
        # 105 "10edit.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        last_line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,tail_y,((int* )(__right_value0=__builtin_wstring("","10edit.nc",105)))), "10edit.nc", 105, 54);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 105, 55));
        # 106 "10edit.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        new_line=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value2=xsprintf("%ls%ls",((int* )(__right_value0=wstring_substring(first_line,0,head_x))),((int* )(__right_value1=wstring_substring(last_line,tail_x,-1))))))), "10edit.nc", 106, 56);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 106, 57));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 106, 58));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 106, 59));
        # 108 "10edit.nc"
        __right_value0 = (void*)0;
        list$1int$ph_replace(self->texts,head_y,(int* )come_increment_ref_count((int* )come_memdup(new_line, "10edit.nc", 108, 68, "int* "), "10edit.nc", 108, 69));
        # 109 "10edit.nc"
        list$1int$_replace(self->texts_length,head_y,wcslen(new_line));
        # 110 "10edit.nc"
        list$1int$ph_delete(self->texts,head_y+1,tail_y+1);
        # 111 "10edit.nc"
        list$1int$_delete(self->texts_length,head_y+1,tail_y+1);
        (first_line = come_decrement_ref_count(first_line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 114, 77));
        (last_line = come_decrement_ref_count(last_line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 114, 78));
        (new_line = come_decrement_ref_count(new_line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 114, 79));
    }
    # 114 "10edit.nc"
    self->cursorY=head_y-self->scroll;
    # 115 "10edit.nc"
    ViWin_modifyUnderCursorYValue(self);
    # 116 "10edit.nc"
    ViWin_modifyOverCursorYValue(self);
    # 117 "10edit.nc"
    self->cursorX=head_x;
    # 118 "10edit.nc"
    ViWin_modifyUnderCursorXValue(self);
    # 119 "10edit.nc"
    ViWin_modifyOverCursorXValue(self);
    # 121 "10edit.nc"
        neo_current_frame = fr.prev;
    return (_Bool)1;
    neo_current_frame = fr.prev;
}

static struct list$1int$* list$1int$_replace(struct list$1int$* self, int position, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_replace"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    int len;
    int i;
    int default_value;
    struct list_item$1int$* it;
    int i_4;
    memset(&len, 0, sizeof(len));
    memset(&i, 0, sizeof(i));
    memset(&it, 0, sizeof(it));
    memset(&i_4, 0, sizeof(i_4));
    # 2027 "/usr/local/include/neo-c.h"
    # 2033 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 2030 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2036 "/usr/local/include/neo-c.h"
    if(position<0) {
        # 2034 "/usr/local/include/neo-c.h"
        position+=self->len;
    }
    # 2040 "/usr/local/include/neo-c.h"
    if(position<0) {
        # 2037 "/usr/local/include/neo-c.h"
        position=0;
    }
    # 2051 "/usr/local/include/neo-c.h"
    if(self->len==0||position>=self->len) {
        # 2041 "/usr/local/include/neo-c.h"
        len=self->len;
        # 2047 "/usr/local/include/neo-c.h"
        for(i=0        ;i<position-len;i++){
            # 2043 "/usr/local/include/neo-c.h"
            # 2044 "/usr/local/include/neo-c.h"
            memset(&default_value,0,sizeof(int));
            # 2045 "/usr/local/include/neo-c.h"
            list$1int$_push_back(self,default_value);
        }
        # 2047 "/usr/local/include/neo-c.h"
        list$1int$_push_back(self,item);
        # 2048 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2051 "/usr/local/include/neo-c.h"
    it=self->head;
    # 2052 "/usr/local/include/neo-c.h"
    i_4=0;
    # 2062 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 2058 "/usr/local/include/neo-c.h"
        if(position==i_4) {
            # 2055 "/usr/local/include/neo-c.h"
            it->item=item;
            # 2056 "/usr/local/include/neo-c.h"
            break;
        }
        # 2058 "/usr/local/include/neo-c.h"
        it=it->next;
        # 2059 "/usr/local/include/neo-c.h"
        i_4++;
    }
    # 2062 "/usr/local/include/neo-c.h"
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
    struct list_item$1int$* litem_2;
    struct list_item$1int$* litem_3;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_2, 0, sizeof(litem_2));
    memset(&litem_3, 0, sizeof(litem_3));
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
        litem_2=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1629, 47, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1629, 48);
        # 1631 "/usr/local/include/neo-c.h"
        litem_2->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_2->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        litem_2->item=item;
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_2;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_2;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1639, 49, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1639, 50);
        # 1641 "/usr/local/include/neo-c.h"
        litem_3->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_3->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        litem_3->item=item;
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_3;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_3;
    }
    # 1649 "/usr/local/include/neo-c.h"
    self->len++;
    # 1651 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1int$ph* list$1int$ph_replace(struct list$1int$ph* self, int position, int*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph_replace"; neo_current_frame = &fr;
    struct list$1int$ph* __result_obj__0;
    int len;
    int i;
    int*  default_value  ;
    struct list_item$1int$ph* it;
    int i_5;
    int*  __dec_obj4  ;
    memset(&len, 0, sizeof(len));
    memset(&i, 0, sizeof(i));
    memset(&it, 0, sizeof(it));
    memset(&i_5, 0, sizeof(i_5));
    # 2027 "/usr/local/include/neo-c.h"
    # 2033 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 2030 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2030, 60));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2036 "/usr/local/include/neo-c.h"
    if(position<0) {
        # 2034 "/usr/local/include/neo-c.h"
        position+=self->len;
    }
    # 2040 "/usr/local/include/neo-c.h"
    if(position<0) {
        # 2037 "/usr/local/include/neo-c.h"
        position=0;
    }
    # 2051 "/usr/local/include/neo-c.h"
    if(self->len==0||position>=self->len) {
        # 2041 "/usr/local/include/neo-c.h"
        len=self->len;
        # 2047 "/usr/local/include/neo-c.h"
        for(i=0        ;i<position-len;i++){
            # 2043 "/usr/local/include/neo-c.h"
            # 2044 "/usr/local/include/neo-c.h"
            memset(&default_value,0,sizeof(int* ));
            # 2045 "/usr/local/include/neo-c.h"
            list$1int$ph_push_back(self,(int* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2045, 61));
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2047, 62));
        }
        # 2047 "/usr/local/include/neo-c.h"
        list$1int$ph_push_back(self,(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2047, 63));
        # 2048 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2048, 64));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2051 "/usr/local/include/neo-c.h"
    it=self->head;
    # 2052 "/usr/local/include/neo-c.h"
    i_5=0;
    # 2062 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 2058 "/usr/local/include/neo-c.h"
        if(position==i_5) {
            # 2055 "/usr/local/include/neo-c.h"
            __dec_obj4=it->item,
            it->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 2055, 66);
            __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 2055, 65);
            # 2056 "/usr/local/include/neo-c.h"
            break;
        }
        # 2058 "/usr/local/include/neo-c.h"
        it=it->next;
        # 2059 "/usr/local/include/neo-c.h"
        i_5++;
    }
    # 2062 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2062, 67));
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
    struct list_item$1int$ph* it_6;
    int i_7;
    struct list_item$1int$ph* prev_it_8;
    struct list_item$1int$ph* it_9;
    struct list_item$1int$ph* head_prev_it;
    struct list_item$1int$ph* tail_it;
    int i_10;
    struct list_item$1int$ph* prev_it_11;
    memset(&tmp, 0, sizeof(tmp));
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    memset(&prev_it, 0, sizeof(prev_it));
    memset(&it_6, 0, sizeof(it_6));
    memset(&i_7, 0, sizeof(i_7));
    memset(&prev_it_8, 0, sizeof(prev_it_8));
    memset(&it_9, 0, sizeof(it_9));
    memset(&head_prev_it, 0, sizeof(head_prev_it));
    memset(&tail_it, 0, sizeof(tail_it));
    memset(&i_10, 0, sizeof(i_10));
    memset(&prev_it_11, 0, sizeof(prev_it_11));
    # 1899 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1896 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1902 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 1900 "/usr/local/include/neo-c.h"
        head+=self->len;
    }
    # 1906 "/usr/local/include/neo-c.h"
    if(tail<0) {
        # 1903 "/usr/local/include/neo-c.h"
        tail+=self->len+1;
    }
    # 1912 "/usr/local/include/neo-c.h"
    if(head>tail) {
        # 1907 "/usr/local/include/neo-c.h"
        tmp=tail;
        # 1908 "/usr/local/include/neo-c.h"
        tail=head;
        # 1909 "/usr/local/include/neo-c.h"
        head=tmp;
    }
    # 1916 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 1913 "/usr/local/include/neo-c.h"
        head=0;
    }
    # 1920 "/usr/local/include/neo-c.h"
    if(tail>self->len) {
        # 1917 "/usr/local/include/neo-c.h"
        tail=self->len;
    }
    # 1924 "/usr/local/include/neo-c.h"
    if(head>=self->len) {
        # 1921 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1928 "/usr/local/include/neo-c.h"
    if(head==tail) {
        # 1925 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2023 "/usr/local/include/neo-c.h"
    if(head==0&&tail==self->len) {
        # 1930 "/usr/local/include/neo-c.h"
        list$1int$ph_reset(self);
    }
    else if(head==0) {
        # 1933 "/usr/local/include/neo-c.h"
        it=self->head;
        # 1934 "/usr/local/include/neo-c.h"
        i=0;
        # 1956 "/usr/local/include/neo-c.h"
        while(it!=((void*)0)) {
            # 1955 "/usr/local/include/neo-c.h"
            if(i<tail) {
                # 1937 "/usr/local/include/neo-c.h"
                prev_it=it;
                # 1939 "/usr/local/include/neo-c.h"
                it=it->next;
                # 1940 "/usr/local/include/neo-c.h"
                i++;
                # 1942 "/usr/local/include/neo-c.h"
                come_call_finalizer(list_item$1int$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1942, 70);
                # 1944 "/usr/local/include/neo-c.h"
                self->len--;
            }
            else if(i==tail) {
                # 1947 "/usr/local/include/neo-c.h"
                self->head=it;
                # 1948 "/usr/local/include/neo-c.h"
                self->head->prev=((void*)0);
                # 1949 "/usr/local/include/neo-c.h"
                break;
            }
            else {
                # 1952 "/usr/local/include/neo-c.h"
                it=it->next;
                # 1953 "/usr/local/include/neo-c.h"
                i++;
            }
        }
    }
    else if(tail==self->len) {
        # 1958 "/usr/local/include/neo-c.h"
        it_6=self->head;
        # 1959 "/usr/local/include/neo-c.h"
        i_7=0;
        # 1981 "/usr/local/include/neo-c.h"
        while(it_6!=((void*)0)) {
            # 1966 "/usr/local/include/neo-c.h"
            if(i_7==head) {
                # 1962 "/usr/local/include/neo-c.h"
                self->tail=it_6->prev;
                # 1963 "/usr/local/include/neo-c.h"
                self->tail->next=((void*)0);
            }
            # 1980 "/usr/local/include/neo-c.h"
            if(i_7>=head) {
                # 1967 "/usr/local/include/neo-c.h"
                prev_it_8=it_6;
                # 1969 "/usr/local/include/neo-c.h"
                it_6=it_6->next;
                # 1970 "/usr/local/include/neo-c.h"
                i_7++;
                # 1972 "/usr/local/include/neo-c.h"
                come_call_finalizer(list_item$1int$ph$p_finalize, prev_it_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1972, 71);
                # 1974 "/usr/local/include/neo-c.h"
                self->len--;
            }
            else {
                # 1977 "/usr/local/include/neo-c.h"
                it_6=it_6->next;
                # 1978 "/usr/local/include/neo-c.h"
                i_7++;
            }
        }
    }
    else {
        # 1983 "/usr/local/include/neo-c.h"
        it_9=self->head;
        # 1985 "/usr/local/include/neo-c.h"
        head_prev_it=((void*)0);
        # 1986 "/usr/local/include/neo-c.h"
        tail_it=((void*)0);
        # 1989 "/usr/local/include/neo-c.h"
        i_10=0;
        # 2015 "/usr/local/include/neo-c.h"
        while(it_9!=((void*)0)) {
            # 1994 "/usr/local/include/neo-c.h"
            if(i_10==head) {
                # 1992 "/usr/local/include/neo-c.h"
                head_prev_it=it_9->prev;
            }
            # 1998 "/usr/local/include/neo-c.h"
            if(i_10==tail) {
                # 1995 "/usr/local/include/neo-c.h"
                tail_it=it_9;
            }
            # 2013 "/usr/local/include/neo-c.h"
            if(i_10>=head&&i_10<tail) {
                # 2000 "/usr/local/include/neo-c.h"
                prev_it_11=it_9;
                # 2002 "/usr/local/include/neo-c.h"
                it_9=it_9->next;
                # 2003 "/usr/local/include/neo-c.h"
                i_10++;
                # 2005 "/usr/local/include/neo-c.h"
                come_call_finalizer(list_item$1int$ph$p_finalize, prev_it_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2005, 72);
                # 2007 "/usr/local/include/neo-c.h"
                self->len--;
            }
            else {
                # 2010 "/usr/local/include/neo-c.h"
                it_9=it_9->next;
                # 2011 "/usr/local/include/neo-c.h"
                i_10++;
            }
        }
        # 2018 "/usr/local/include/neo-c.h"
        if(head_prev_it!=((void*)0)) {
            # 2016 "/usr/local/include/neo-c.h"
            head_prev_it->next=tail_it;
        }
        # 2021 "/usr/local/include/neo-c.h"
        if(tail_it!=((void*)0)) {
            # 2019 "/usr/local/include/neo-c.h"
            tail_it->prev=head_prev_it;
        }
    }
    # 2023 "/usr/local/include/neo-c.h"
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
    struct list_item$1int$* it_12;
    int i_13;
    struct list_item$1int$* prev_it_14;
    struct list_item$1int$* it_15;
    struct list_item$1int$* head_prev_it;
    struct list_item$1int$* tail_it;
    int i_16;
    struct list_item$1int$* prev_it_17;
    memset(&tmp, 0, sizeof(tmp));
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    memset(&prev_it, 0, sizeof(prev_it));
    memset(&it_12, 0, sizeof(it_12));
    memset(&i_13, 0, sizeof(i_13));
    memset(&prev_it_14, 0, sizeof(prev_it_14));
    memset(&it_15, 0, sizeof(it_15));
    memset(&head_prev_it, 0, sizeof(head_prev_it));
    memset(&tail_it, 0, sizeof(tail_it));
    memset(&i_16, 0, sizeof(i_16));
    memset(&prev_it_17, 0, sizeof(prev_it_17));
    # 1899 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1896 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1902 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 1900 "/usr/local/include/neo-c.h"
        head+=self->len;
    }
    # 1906 "/usr/local/include/neo-c.h"
    if(tail<0) {
        # 1903 "/usr/local/include/neo-c.h"
        tail+=self->len+1;
    }
    # 1912 "/usr/local/include/neo-c.h"
    if(head>tail) {
        # 1907 "/usr/local/include/neo-c.h"
        tmp=tail;
        # 1908 "/usr/local/include/neo-c.h"
        tail=head;
        # 1909 "/usr/local/include/neo-c.h"
        head=tmp;
    }
    # 1916 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 1913 "/usr/local/include/neo-c.h"
        head=0;
    }
    # 1920 "/usr/local/include/neo-c.h"
    if(tail>self->len) {
        # 1917 "/usr/local/include/neo-c.h"
        tail=self->len;
    }
    # 1924 "/usr/local/include/neo-c.h"
    if(head>=self->len) {
        # 1921 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1928 "/usr/local/include/neo-c.h"
    if(head==tail) {
        # 1925 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2023 "/usr/local/include/neo-c.h"
    if(head==0&&tail==self->len) {
        # 1930 "/usr/local/include/neo-c.h"
        list$1int$_reset(self);
    }
    else if(head==0) {
        # 1933 "/usr/local/include/neo-c.h"
        it=self->head;
        # 1934 "/usr/local/include/neo-c.h"
        i=0;
        # 1956 "/usr/local/include/neo-c.h"
        while(it!=((void*)0)) {
            # 1955 "/usr/local/include/neo-c.h"
            if(i<tail) {
                # 1937 "/usr/local/include/neo-c.h"
                prev_it=it;
                # 1939 "/usr/local/include/neo-c.h"
                it=it->next;
                # 1940 "/usr/local/include/neo-c.h"
                i++;
                # 1942 "/usr/local/include/neo-c.h"
                come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1942, 74);
                # 1944 "/usr/local/include/neo-c.h"
                self->len--;
            }
            else if(i==tail) {
                # 1947 "/usr/local/include/neo-c.h"
                self->head=it;
                # 1948 "/usr/local/include/neo-c.h"
                self->head->prev=((void*)0);
                # 1949 "/usr/local/include/neo-c.h"
                break;
            }
            else {
                # 1952 "/usr/local/include/neo-c.h"
                it=it->next;
                # 1953 "/usr/local/include/neo-c.h"
                i++;
            }
        }
    }
    else if(tail==self->len) {
        # 1958 "/usr/local/include/neo-c.h"
        it_12=self->head;
        # 1959 "/usr/local/include/neo-c.h"
        i_13=0;
        # 1981 "/usr/local/include/neo-c.h"
        while(it_12!=((void*)0)) {
            # 1966 "/usr/local/include/neo-c.h"
            if(i_13==head) {
                # 1962 "/usr/local/include/neo-c.h"
                self->tail=it_12->prev;
                # 1963 "/usr/local/include/neo-c.h"
                self->tail->next=((void*)0);
            }
            # 1980 "/usr/local/include/neo-c.h"
            if(i_13>=head) {
                # 1967 "/usr/local/include/neo-c.h"
                prev_it_14=it_12;
                # 1969 "/usr/local/include/neo-c.h"
                it_12=it_12->next;
                # 1970 "/usr/local/include/neo-c.h"
                i_13++;
                # 1972 "/usr/local/include/neo-c.h"
                come_call_finalizer(list_item$1int$$p_finalize, prev_it_14, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1972, 75);
                # 1974 "/usr/local/include/neo-c.h"
                self->len--;
            }
            else {
                # 1977 "/usr/local/include/neo-c.h"
                it_12=it_12->next;
                # 1978 "/usr/local/include/neo-c.h"
                i_13++;
            }
        }
    }
    else {
        # 1983 "/usr/local/include/neo-c.h"
        it_15=self->head;
        # 1985 "/usr/local/include/neo-c.h"
        head_prev_it=((void*)0);
        # 1986 "/usr/local/include/neo-c.h"
        tail_it=((void*)0);
        # 1989 "/usr/local/include/neo-c.h"
        i_16=0;
        # 2015 "/usr/local/include/neo-c.h"
        while(it_15!=((void*)0)) {
            # 1994 "/usr/local/include/neo-c.h"
            if(i_16==head) {
                # 1992 "/usr/local/include/neo-c.h"
                head_prev_it=it_15->prev;
            }
            # 1998 "/usr/local/include/neo-c.h"
            if(i_16==tail) {
                # 1995 "/usr/local/include/neo-c.h"
                tail_it=it_15;
            }
            # 2013 "/usr/local/include/neo-c.h"
            if(i_16>=head&&i_16<tail) {
                # 2000 "/usr/local/include/neo-c.h"
                prev_it_17=it_15;
                # 2002 "/usr/local/include/neo-c.h"
                it_15=it_15->next;
                # 2003 "/usr/local/include/neo-c.h"
                i_16++;
                # 2005 "/usr/local/include/neo-c.h"
                come_call_finalizer(list_item$1int$$p_finalize, prev_it_17, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2005, 76);
                # 2007 "/usr/local/include/neo-c.h"
                self->len--;
            }
            else {
                # 2010 "/usr/local/include/neo-c.h"
                it_15=it_15->next;
                # 2011 "/usr/local/include/neo-c.h"
                i_16++;
            }
        }
        # 2018 "/usr/local/include/neo-c.h"
        if(head_prev_it!=((void*)0)) {
            # 2016 "/usr/local/include/neo-c.h"
            head_prev_it->next=tail_it;
        }
        # 2021 "/usr/local/include/neo-c.h"
        if(tail_it!=((void*)0)) {
            # 2019 "/usr/local/include/neo-c.h"
            tail_it->prev=head_prev_it;
        }
    }
    # 2023 "/usr/local/include/neo-c.h"
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
    # 1860 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1857 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1860 "/usr/local/include/neo-c.h"
    it=self->head;
    # 1867 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1862 "/usr/local/include/neo-c.h"
        prev_it=it;
        # 1863 "/usr/local/include/neo-c.h"
        it=it->next;
        # 1864 "/usr/local/include/neo-c.h"
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1864, 73);
    }
    # 1867 "/usr/local/include/neo-c.h"
    self->head=((void*)0);
    # 1868 "/usr/local/include/neo-c.h"
    self->tail=((void*)0);
    # 1870 "/usr/local/include/neo-c.h"
    self->len=0;
    # 1872 "/usr/local/include/neo-c.h"
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

static _Bool get_find_motion_range(struct ViWin*  self  , int motion, int find_char, int* head_y, int* head_x, int* tail_y, int* tail_x)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_find_motion_range"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int*  line  ;
    int count;
    int match_x;
    int start;
    int i;
    int j;
    _Bool __result_obj__0;
    int start_18;
    int i_19;
    int j_20;
    int start_21;
    int i_22;
    int j_23;
    int start_24;
    int i_25;
    int j_26;
    memset(&line, 0, sizeof(line));
    memset(&count, 0, sizeof(count));
    memset(&match_x, 0, sizeof(match_x));
    memset(&start, 0, sizeof(start));
    memset(&i, 0, sizeof(i));
    memset(&j, 0, sizeof(j));
    memset(&start_18, 0, sizeof(start_18));
    memset(&i_19, 0, sizeof(i_19));
    memset(&j_20, 0, sizeof(j_20));
    memset(&start_21, 0, sizeof(start_21));
    memset(&i_22, 0, sizeof(i_22));
    memset(&j_23, 0, sizeof(j_23));
    memset(&start_24, 0, sizeof(start_24));
    memset(&i_25, 0, sizeof(i_25));
    memset(&j_26, 0, sizeof(j_26));
    # 126 "10edit.nc"
    line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((int* )(__right_value0=__builtin_wstring("","10edit.nc",126)))), "10edit.nc", 126, 80);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 126, 81));
    # 127 "10edit.nc"
    count=operator_repeat_count(self);
    # 128 "10edit.nc"
    match_x=-1;
    # 224 "10edit.nc"
    switch (    motion) {
        # 131 "10edit.nc"
        case 102:
        # 154 "10edit.nc"
        {
            # 132 "10edit.nc"
            start=self->cursorX+1;
            # 147 "10edit.nc"
            for(i=0            ;i<count;i++){
                # 134 "10edit.nc"
                match_x=-1;
                # 142 "10edit.nc"
                for(j=start                ;j<wstring_length(line);j++){
                    # 141 "10edit.nc"
                    if(line[j]==find_char) {
                        # 137 "10edit.nc"
                        match_x=j;
                        # 138 "10edit.nc"
                        start=j+1;
                        # 139 "10edit.nc"
                        break;
                    }
                }
                # 145 "10edit.nc"
                if(match_x==-1) {
                    # 143 "10edit.nc"
                                        __result_obj__0 = (_Bool)0;
                    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 143, 82));
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
            }
            # 147 "10edit.nc"
            *head_y=self->scroll+self->cursorY;
            # 148 "10edit.nc"
            *head_x=self->cursorX;
            # 149 "10edit.nc"
            *tail_y=self->scroll+self->cursorY;
            # 150 "10edit.nc"
            *tail_x=match_x+1;
            # 151 "10edit.nc"
                        __result_obj__0 = (_Bool)1;
            (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 151, 83));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 154 "10edit.nc"
        case 116:
        # 177 "10edit.nc"
        {
            # 155 "10edit.nc"
            start_18=self->cursorX+1;
            # 170 "10edit.nc"
            for(i_19=0            ;i_19<count;i_19++){
                # 157 "10edit.nc"
                match_x=-1;
                # 165 "10edit.nc"
                for(j_20=start_18                ;j_20<wstring_length(line);j_20++){
                    # 164 "10edit.nc"
                    if(line[j_20]==find_char) {
                        # 160 "10edit.nc"
                        match_x=j_20;
                        # 161 "10edit.nc"
                        start_18=j_20+1;
                        # 162 "10edit.nc"
                        break;
                    }
                }
                # 168 "10edit.nc"
                if(match_x==-1) {
                    # 166 "10edit.nc"
                                        __result_obj__0 = (_Bool)0;
                    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 166, 84));
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
            }
            # 170 "10edit.nc"
            *head_y=self->scroll+self->cursorY;
            # 171 "10edit.nc"
            *head_x=self->cursorX;
            # 172 "10edit.nc"
            *tail_y=self->scroll+self->cursorY;
            # 173 "10edit.nc"
            *tail_x=match_x;
            # 174 "10edit.nc"
                        __result_obj__0 = (_Bool)1;
            (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 174, 85));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 177 "10edit.nc"
        case 70:
        # 200 "10edit.nc"
        {
            # 178 "10edit.nc"
            start_21=self->cursorX-1;
            # 193 "10edit.nc"
            for(i_22=0            ;i_22<count;i_22++){
                # 180 "10edit.nc"
                match_x=-1;
                # 188 "10edit.nc"
                for(j_23=start_21                ;j_23>=0;j_23--){
                    # 187 "10edit.nc"
                    if(line[j_23]==find_char) {
                        # 183 "10edit.nc"
                        match_x=j_23;
                        # 184 "10edit.nc"
                        start_21=j_23-1;
                        # 185 "10edit.nc"
                        break;
                    }
                }
                # 191 "10edit.nc"
                if(match_x==-1) {
                    # 189 "10edit.nc"
                                        __result_obj__0 = (_Bool)0;
                    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 189, 86));
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
            }
            # 193 "10edit.nc"
            *head_y=self->scroll+self->cursorY;
            # 194 "10edit.nc"
            *head_x=match_x;
            # 195 "10edit.nc"
            *tail_y=self->scroll+self->cursorY;
            # 196 "10edit.nc"
            *tail_x=self->cursorX+1;
            # 197 "10edit.nc"
                        __result_obj__0 = (_Bool)1;
            (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 197, 87));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        # 200 "10edit.nc"
        case 84:
        # 222 "10edit.nc"
        {
            # 201 "10edit.nc"
            start_24=self->cursorX-1;
            # 216 "10edit.nc"
            for(i_25=0            ;i_25<count;i_25++){
                # 203 "10edit.nc"
                match_x=-1;
                # 211 "10edit.nc"
                for(j_26=start_24                ;j_26>=0;j_26--){
                    # 210 "10edit.nc"
                    if(line[j_26]==find_char) {
                        # 206 "10edit.nc"
                        match_x=j_26;
                        # 207 "10edit.nc"
                        start_24=j_26-1;
                        # 208 "10edit.nc"
                        break;
                    }
                }
                # 214 "10edit.nc"
                if(match_x==-1) {
                    # 212 "10edit.nc"
                                        __result_obj__0 = (_Bool)0;
                    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 212, 88));
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
            }
            # 216 "10edit.nc"
            *head_y=self->scroll+self->cursorY;
            # 217 "10edit.nc"
            *head_x=match_x+1;
            # 218 "10edit.nc"
            *tail_y=self->scroll+self->cursorY;
            # 219 "10edit.nc"
            *tail_x=self->cursorX+1;
            # 220 "10edit.nc"
                        __result_obj__0 = (_Bool)1;
            (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 220, 89));
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    # 224 "10edit.nc"
        __result_obj__0 = (_Bool)0;
    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 224, 90));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool get_motion_range(struct ViWin*  self  , int motion, int* head_y, int* head_x, int* tail_y, int* tail_x)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_motion_range"; neo_current_frame = &fr;
    int scroll_before;
    int cursor_y_before;
    int cursor_x_before;
    int count;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int*  line  ;
    _Bool __result_obj__0;
    int i;
    int i_27;
    int i_28;
    int i_29;
    int i_30;
    int i_31;
    memset(&scroll_before, 0, sizeof(scroll_before));
    memset(&cursor_y_before, 0, sizeof(cursor_y_before));
    memset(&cursor_x_before, 0, sizeof(cursor_x_before));
    memset(&count, 0, sizeof(count));
    memset(&line, 0, sizeof(line));
    memset(&i, 0, sizeof(i));
    memset(&i_27, 0, sizeof(i_27));
    memset(&i_28, 0, sizeof(i_28));
    memset(&i_29, 0, sizeof(i_29));
    memset(&i_30, 0, sizeof(i_30));
    memset(&i_31, 0, sizeof(i_31));
    # 229 "10edit.nc"
    scroll_before=self->scroll;
    # 230 "10edit.nc"
    cursor_y_before=self->cursorY;
    # 231 "10edit.nc"
    cursor_x_before=self->cursorX;
    # 232 "10edit.nc"
    count=operator_repeat_count(self);
    # 309 "10edit.nc"
    switch (    motion) {
        # 235 "10edit.nc"
        case 36:
        # 245 "10edit.nc"
        {
            # 236 "10edit.nc"
            line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((int* )(__right_value0=__builtin_wstring("","10edit.nc",236)))), "10edit.nc", 236, 91);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 236, 92));
            # 238 "10edit.nc"
            *head_y=self->scroll+self->cursorY;
            # 239 "10edit.nc"
            *head_x=self->cursorX;
            # 240 "10edit.nc"
            *tail_y=self->scroll+self->cursorY;
            # 241 "10edit.nc"
            *tail_x=wstring_length(line);
            # 242 "10edit.nc"
                        __result_obj__0 = *head_x!=*tail_x;
            (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 242, 93));
            neo_current_frame = fr.prev;
            return __result_obj__0;
            (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 245, 94));
        }
        # 246 "10edit.nc"
        case 119:
        # 249 "10edit.nc"
        for(i=0        ;i<count;i++){
            # 247 "10edit.nc"
            ViWin_forwardWord(self);
        }
        # 249 "10edit.nc"
        *head_y=scroll_before+cursor_y_before;
        # 250 "10edit.nc"
        *head_x=cursor_x_before;
        # 251 "10edit.nc"
        *tail_y=self->scroll+self->cursorY;
        # 252 "10edit.nc"
        *tail_x=self->cursorX;
        # 253 "10edit.nc"
        break;
        # 256 "10edit.nc"
        case 101:
        # 259 "10edit.nc"
        for(i_27=0        ;i_27<count;i_27++){
            # 257 "10edit.nc"
            ViWin_forwardWord2(self);
        }
        # 259 "10edit.nc"
        *head_y=scroll_before+cursor_y_before;
        # 260 "10edit.nc"
        *head_x=cursor_x_before;
        # 261 "10edit.nc"
        *tail_y=self->scroll+self->cursorY;
        # 262 "10edit.nc"
        *tail_x=self->cursorX+1;
        # 263 "10edit.nc"
        break;
        # 266 "10edit.nc"
        case 98:
        # 269 "10edit.nc"
        for(i_28=0        ;i_28<count;i_28++){
            # 267 "10edit.nc"
            ViWin_backwardWord_v4(self);
        }
        # 269 "10edit.nc"
        *head_y=self->scroll+self->cursorY;
        # 270 "10edit.nc"
        *head_x=self->cursorX;
        # 271 "10edit.nc"
        *tail_y=scroll_before+cursor_y_before;
        # 272 "10edit.nc"
        *tail_x=cursor_x_before+1;
        # 273 "10edit.nc"
        break;
        # 276 "10edit.nc"
        case 87:
        # 279 "10edit.nc"
        for(i_29=0        ;i_29<count;i_29++){
            # 277 "10edit.nc"
            ViWin_forwardBigWord(self);
        }
        # 279 "10edit.nc"
        *head_y=scroll_before+cursor_y_before;
        # 280 "10edit.nc"
        *head_x=cursor_x_before;
        # 281 "10edit.nc"
        *tail_y=self->scroll+self->cursorY;
        # 282 "10edit.nc"
        *tail_x=self->cursorX;
        # 283 "10edit.nc"
        break;
        # 286 "10edit.nc"
        case 69:
        # 289 "10edit.nc"
        for(i_30=0        ;i_30<count;i_30++){
            # 287 "10edit.nc"
            ViWin_forwardBigWord2(self);
        }
        # 289 "10edit.nc"
        *head_y=scroll_before+cursor_y_before;
        # 290 "10edit.nc"
        *head_x=cursor_x_before;
        # 291 "10edit.nc"
        *tail_y=self->scroll+self->cursorY;
        # 292 "10edit.nc"
        *tail_x=self->cursorX+1;
        # 293 "10edit.nc"
        break;
        # 296 "10edit.nc"
        case 66:
        # 299 "10edit.nc"
        for(i_31=0        ;i_31<count;i_31++){
            # 297 "10edit.nc"
            ViWin_backwardBigWord(self);
        }
        # 299 "10edit.nc"
        *head_y=self->scroll+self->cursorY;
        # 300 "10edit.nc"
        *head_x=self->cursorX;
        # 301 "10edit.nc"
        *tail_y=scroll_before+cursor_y_before;
        # 302 "10edit.nc"
        *tail_x=cursor_x_before+1;
        # 303 "10edit.nc"
        break;
        # 306 "10edit.nc"
        default:
        # 306 "10edit.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 309 "10edit.nc"
    self->scroll=scroll_before;
    # 310 "10edit.nc"
    self->cursorY=cursor_y_before;
    # 311 "10edit.nc"
    self->cursorX=cursor_x_before;
    # 313 "10edit.nc"
    normalize_operator_range(head_y,head_x,tail_y,tail_x);
    # 314 "10edit.nc"
    clamp_operator_position(self,*head_y,head_x);
    # 315 "10edit.nc"
    clamp_operator_position(self,*tail_y,tail_x);
    # 317 "10edit.nc"
        neo_current_frame = fr.prev;
    return !(*head_y==*tail_y&&*head_x==*tail_x);
    neo_current_frame = fr.prev;
}

static _Bool get_ge_motion_range(struct ViWin*  self  , int* head_y, int* head_x, int* tail_y, int* tail_x)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_ge_motion_range"; neo_current_frame = &fr;
    int scroll_before;
    int cursor_y_before;
    int cursor_x_before;
    int count;
    int i;
    memset(&scroll_before, 0, sizeof(scroll_before));
    memset(&cursor_y_before, 0, sizeof(cursor_y_before));
    memset(&cursor_x_before, 0, sizeof(cursor_x_before));
    memset(&count, 0, sizeof(count));
    memset(&i, 0, sizeof(i));
    # 322 "10edit.nc"
    scroll_before=self->scroll;
    # 323 "10edit.nc"
    cursor_y_before=self->cursorY;
    # 324 "10edit.nc"
    cursor_x_before=self->cursorX;
    # 325 "10edit.nc"
    count=operator_repeat_count(self);
    # 331 "10edit.nc"
    for(i=0    ;i<count;i++){
        # 328 "10edit.nc"
        ViWin_backwardEndWord(self);
    }
    # 331 "10edit.nc"
    *head_y=self->scroll+self->cursorY;
    # 332 "10edit.nc"
    *head_x=self->cursorX;
    # 333 "10edit.nc"
    *tail_y=scroll_before+cursor_y_before;
    # 334 "10edit.nc"
    *tail_x=cursor_x_before+1;
    # 336 "10edit.nc"
    self->scroll=scroll_before;
    # 337 "10edit.nc"
    self->cursorY=cursor_y_before;
    # 338 "10edit.nc"
    self->cursorX=cursor_x_before;
    # 340 "10edit.nc"
    normalize_operator_range(head_y,head_x,tail_y,tail_x);
    # 341 "10edit.nc"
    clamp_operator_position(self,*head_y,head_x);
    # 342 "10edit.nc"
    clamp_operator_position(self,*tail_y,tail_x);
    # 344 "10edit.nc"
        neo_current_frame = fr.prev;
    return !(*head_y==*tail_y&&*head_x==*tail_x);
    neo_current_frame = fr.prev;
}

static _Bool get_word_text_object_range(struct ViWin*  self  , _Bool around, int* head, int* tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_word_text_object_range"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int*  line  ;
    _Bool __result_obj__0;
    int pos;
    int tail2;
    int head2;
    memset(&line, 0, sizeof(line));
    memset(&pos, 0, sizeof(pos));
    memset(&tail2, 0, sizeof(tail2));
    memset(&head2, 0, sizeof(head2));
    # 349 "10edit.nc"
    line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((int* )(__right_value0=__builtin_wstring("","10edit.nc",349)))), "10edit.nc", 349, 95);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 349, 96));
    # 355 "10edit.nc"
    if(wstring_length(line)==0) {
        # 352 "10edit.nc"
                __result_obj__0 = (_Bool)0;
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 352, 97));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 355 "10edit.nc"
    pos=self->cursorX;
    # 359 "10edit.nc"
    if(pos>=wstring_length(line)) {
        # 357 "10edit.nc"
        pos=wstring_length(line)-1;
    }
    # 363 "10edit.nc"
    if(pos<0) {
        # 360 "10edit.nc"
        pos=0;
    }
    # 380 "10edit.nc"
    if(!is_text_object_word_char(line[pos])) {
        # 368 "10edit.nc"
        while(pos<wstring_length(line)&&!is_text_object_word_char(line[pos])) {
            # 365 "10edit.nc"
            pos++;
        }
        # 378 "10edit.nc"
        if(pos>=wstring_length(line)) {
            # 369 "10edit.nc"
            pos=self->cursorX;
            # 374 "10edit.nc"
            if(pos>=wstring_length(line)) {
                # 371 "10edit.nc"
                pos=wstring_length(line)-1;
            }
            # 377 "10edit.nc"
            while(pos>=0&&!is_text_object_word_char(line[pos])) {
                # 375 "10edit.nc"
                pos--;
            }
        }
    }
    # 384 "10edit.nc"
    if(pos<0||pos>=wstring_length(line)||!is_text_object_word_char(line[pos])) {
        # 381 "10edit.nc"
                __result_obj__0 = (_Bool)0;
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 381, 98));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 384 "10edit.nc"
    *head=pos;
    # 389 "10edit.nc"
    while(*head>0&&is_text_object_word_char(line[*head-1])) {
        # 386 "10edit.nc"
        (*head)--;
    }
    # 389 "10edit.nc"
    *tail=pos+1;
    # 394 "10edit.nc"
    while(*tail<wstring_length(line)&&is_text_object_word_char(line[*tail])) {
        # 391 "10edit.nc"
        (*tail)++;
    }
    # 412 "10edit.nc"
    if(around) {
        # 395 "10edit.nc"
        tail2=*tail;
        # 400 "10edit.nc"
        while(tail2<wstring_length(line)&&xiswblank(line[tail2])) {
            # 397 "10edit.nc"
            tail2++;
        }
        # 410 "10edit.nc"
        if(tail2>*tail) {
            # 401 "10edit.nc"
            *tail=tail2;
        }
        else {
            # 404 "10edit.nc"
            head2=*head;
            # 408 "10edit.nc"
            while(head2>0&&xiswblank(line[head2-1])) {
                # 406 "10edit.nc"
                head2--;
            }
            # 408 "10edit.nc"
            *head=head2;
        }
    }
    # 412 "10edit.nc"
        __result_obj__0 = (_Bool)1;
    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 412, 99));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool get_quote_text_object_range(struct ViWin*  self  , int  quote  , _Bool around, int* head, int* tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_quote_text_object_range"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int*  line  ;
    _Bool __result_obj__0;
    int pos;
    int left;
    int i;
    int right;
    int i_32;
    memset(&line, 0, sizeof(line));
    memset(&pos, 0, sizeof(pos));
    memset(&left, 0, sizeof(left));
    memset(&i, 0, sizeof(i));
    memset(&right, 0, sizeof(right));
    memset(&i_32, 0, sizeof(i_32));
    # 417 "10edit.nc"
    line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((int* )(__right_value0=__builtin_wstring("","10edit.nc",417)))), "10edit.nc", 417, 100);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 417, 101));
    # 423 "10edit.nc"
    if(wstring_length(line)==0) {
        # 420 "10edit.nc"
                __result_obj__0 = (_Bool)0;
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 420, 102));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 423 "10edit.nc"
    pos=self->cursorX;
    # 427 "10edit.nc"
    if(pos>=wstring_length(line)) {
        # 425 "10edit.nc"
        pos=wstring_length(line)-1;
    }
    # 431 "10edit.nc"
    if(pos<0) {
        # 428 "10edit.nc"
        pos=0;
    }
    # 431 "10edit.nc"
    left=-1;
    # 439 "10edit.nc"
    for(i=pos    ;i>=0;i--){
        # 437 "10edit.nc"
        if(line[i]==quote) {
            # 434 "10edit.nc"
            left=i;
            # 435 "10edit.nc"
            break;
        }
    }
    # 443 "10edit.nc"
    if(left==-1) {
        # 440 "10edit.nc"
                __result_obj__0 = (_Bool)0;
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 440, 103));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 443 "10edit.nc"
    right=-1;
    # 451 "10edit.nc"
    for(i_32=left+1    ;i_32<wstring_length(line);i_32++){
        # 449 "10edit.nc"
        if(line[i_32]==quote) {
            # 446 "10edit.nc"
            right=i_32;
            # 447 "10edit.nc"
            break;
        }
    }
    # 455 "10edit.nc"
    if(right==-1) {
        # 452 "10edit.nc"
                __result_obj__0 = (_Bool)0;
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 452, 104));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 464 "10edit.nc"
    if(around) {
        # 456 "10edit.nc"
        *head=left;
        # 457 "10edit.nc"
        *tail=right+1;
    }
    else {
        # 460 "10edit.nc"
        *head=left+1;
        # 461 "10edit.nc"
        *tail=right;
    }
    # 464 "10edit.nc"
        __result_obj__0 = *head<=*tail;
    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 464, 105));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool get_block_text_object_range(struct ViWin*  self  , int  open_brace  , int  close_brace  , _Bool around, int* head, int* tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_block_text_object_range"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int*  line  ;
    _Bool __result_obj__0;
    int pos;
    int left;
    int nest;
    int i;
    int right;
    int i_33;
    memset(&line, 0, sizeof(line));
    memset(&pos, 0, sizeof(pos));
    memset(&left, 0, sizeof(left));
    memset(&nest, 0, sizeof(nest));
    memset(&i, 0, sizeof(i));
    memset(&right, 0, sizeof(right));
    memset(&i_33, 0, sizeof(i_33));
    # 469 "10edit.nc"
    line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((int* )(__right_value0=__builtin_wstring("","10edit.nc",469)))), "10edit.nc", 469, 106);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 469, 107));
    # 475 "10edit.nc"
    if(wstring_length(line)==0) {
        # 472 "10edit.nc"
                __result_obj__0 = (_Bool)0;
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 472, 108));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 475 "10edit.nc"
    pos=self->cursorX;
    # 479 "10edit.nc"
    if(pos>=wstring_length(line)) {
        # 477 "10edit.nc"
        pos=wstring_length(line)-1;
    }
    # 483 "10edit.nc"
    if(pos<0) {
        # 480 "10edit.nc"
        pos=0;
    }
    # 483 "10edit.nc"
    left=-1;
    # 484 "10edit.nc"
    nest=0;
    # 498 "10edit.nc"
    for(i=pos    ;i>=0;i--){
        # 496 "10edit.nc"
        if(line[i]==open_brace) {
            # 491 "10edit.nc"
            if(nest==0) {
                # 488 "10edit.nc"
                left=i;
                # 489 "10edit.nc"
                break;
            }
            # 491 "10edit.nc"
            nest--;
        }
        else if(line[i]==close_brace) {
            # 494 "10edit.nc"
            nest++;
        }
    }
    # 502 "10edit.nc"
    if(left==-1) {
        # 499 "10edit.nc"
                __result_obj__0 = (_Bool)0;
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 499, 109));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 502 "10edit.nc"
    right=-1;
    # 503 "10edit.nc"
    nest=0;
    # 518 "10edit.nc"
    for(i_33=left    ;i_33<wstring_length(line);i_33++){
        # 516 "10edit.nc"
        if(line[i_33]==open_brace) {
            # 506 "10edit.nc"
            nest++;
        }
        else if(line[i_33]==close_brace) {
            # 509 "10edit.nc"
            nest--;
            # 515 "10edit.nc"
            if(nest==0) {
                # 512 "10edit.nc"
                right=i_33;
                # 513 "10edit.nc"
                break;
            }
        }
    }
    # 522 "10edit.nc"
    if(right==-1||right<left) {
        # 519 "10edit.nc"
                __result_obj__0 = (_Bool)0;
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 519, 110));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 531 "10edit.nc"
    if(around) {
        # 523 "10edit.nc"
        *head=left;
        # 524 "10edit.nc"
        *tail=right+1;
    }
    else {
        # 527 "10edit.nc"
        *head=left+1;
        # 528 "10edit.nc"
        *tail=right;
    }
    # 531 "10edit.nc"
        __result_obj__0 = *head<=*tail;
    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 531, 111));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool get_text_object_range(struct ViWin*  self  , _Bool around, int key, int* head, int* tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_text_object_range"; neo_current_frame = &fr;
    # 557 "10edit.nc"
    switch (    key) {
        # 538 "10edit.nc"
        case 119:
        # 538 "10edit.nc"
                neo_current_frame = fr.prev;
        return get_word_text_object_range(self,around,head,tail);
        # 541 "10edit.nc"
        case 34:
        # 542 "10edit.nc"
        case 39:
        # 542 "10edit.nc"
                neo_current_frame = fr.prev;
        return get_quote_text_object_range(self,key,around,head,tail);
        # 545 "10edit.nc"
        case 40:
        # 546 "10edit.nc"
        case 41:
        # 546 "10edit.nc"
                neo_current_frame = fr.prev;
        return get_block_text_object_range(self,40,41,around,head,tail);
        # 549 "10edit.nc"
        case 91:
        # 550 "10edit.nc"
        case 93:
        # 550 "10edit.nc"
                neo_current_frame = fr.prev;
        return get_block_text_object_range(self,91,93,around,head,tail);
        # 553 "10edit.nc"
        case 123:
        # 554 "10edit.nc"
        case 125:
        # 554 "10edit.nc"
                neo_current_frame = fr.prev;
        return get_block_text_object_range(self,123,125,around,head,tail);
    }
    # 557 "10edit.nc"
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

static _Bool yank_text_object(struct ViWin*  self  , struct Vi*  nvi  , _Bool around, int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "yank_text_object"; neo_current_frame = &fr;
    int head;
    int tail;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int*  line  ;
    _Bool __result_obj__0;
    memset(&head, 0, sizeof(head));
    memset(&tail, 0, sizeof(tail));
    memset(&line, 0, sizeof(line));
    # 562 "10edit.nc"
    # 563 "10edit.nc"
    # 569 "10edit.nc"
    if(!get_text_object_range(self,around,key,&head,&tail)) {
        # 566 "10edit.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 569 "10edit.nc"
    line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((int* )(__right_value0=__builtin_wstring("","10edit.nc",569)))), "10edit.nc", 569, 112);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 569, 113));
    # 571 "10edit.nc"
    list$1int$ph_reset(nvi->yank);
    # 572 "10edit.nc"
    __right_value0 = (void*)0;
    list$1int$ph_push_back(nvi->yank,(int* )come_increment_ref_count(wstring_substring(line,head,tail), "10edit.nc", 572, 114));
    # 573 "10edit.nc"
    nvi->yankKind=(1);
    # 574 "10edit.nc"
    ViWin_saveYankToFile(self,nvi);
    # 576 "10edit.nc"
        __result_obj__0 = (_Bool)1;
    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 576, 115));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool delete_text_object(struct ViWin*  self  , struct Vi*  nvi  , _Bool around, int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "delete_text_object"; neo_current_frame = &fr;
    int head;
    int tail;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int*  line  ;
    _Bool __result_obj__0;
    memset(&head, 0, sizeof(head));
    memset(&tail, 0, sizeof(tail));
    memset(&line, 0, sizeof(line));
    # 581 "10edit.nc"
    # 582 "10edit.nc"
    # 588 "10edit.nc"
    if(!get_text_object_range(self,around,key,&head,&tail)) {
        # 585 "10edit.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 588 "10edit.nc"
    line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((int* )(__right_value0=__builtin_wstring("","10edit.nc",588)))), "10edit.nc", 588, 116);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 588, 117));
    # 590 "10edit.nc"
    list$1int$ph_reset(nvi->yank);
    # 591 "10edit.nc"
    __right_value0 = (void*)0;
    list$1int$ph_push_back(nvi->yank,(int* )come_increment_ref_count(wstring_substring(line,head,tail), "10edit.nc", 591, 118));
    # 592 "10edit.nc"
    nvi->yankKind=(1);
    # 593 "10edit.nc"
    ViWin_saveYankToFile(self,nvi);
    # 595 "10edit.nc"
    ViWin_pushUndo_v5(self);
    # 596 "10edit.nc"
    __right_value0 = (void*)0;
    ((int* )(__right_value0=wstring_delete(line,head,tail)));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 596, 119));
    # 597 "10edit.nc"
    list$1int$_replace(self->texts_length,self->scroll+self->cursorY,wcslen(line));
    # 598 "10edit.nc"
    self->cursorX=head;
    # 599 "10edit.nc"
    ViWin_modifyUnderCursorXValue(self);
    # 600 "10edit.nc"
    ViWin_modifyOverCursorXValue(self);
    # 602 "10edit.nc"
        __result_obj__0 = (_Bool)1;
    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 602, 120));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool apply_text_object_operator(struct Vi*  self  , int operator_kind, _Bool around, int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "apply_text_object_operator"; neo_current_frame = &fr;
    # 627 "10edit.nc"
    switch (    operator_kind) {
        # 609 "10edit.nc"
        case (0):
        # 613 "10edit.nc"
        if(delete_text_object(self->activeWin,self,around,key)) {
            # 610 "10edit.nc"
            self->activeWin->writed=(_Bool)1;
            # 611 "10edit.nc"
                        neo_current_frame = fr.prev;
            return (_Bool)1;
        }
        # 613 "10edit.nc"
        break;
        # 616 "10edit.nc"
        case (1):
        # 621 "10edit.nc"
        if(delete_text_object(self->activeWin,self,around,key)) {
            # 617 "10edit.nc"
            Vi_enterInsertMode2_v3(self);
            # 618 "10edit.nc"
            self->activeWin->writed=(_Bool)1;
            # 619 "10edit.nc"
                        neo_current_frame = fr.prev;
            return (_Bool)1;
        }
        # 621 "10edit.nc"
        break;
        # 624 "10edit.nc"
        case (2):
        # 624 "10edit.nc"
                neo_current_frame = fr.prev;
        return yank_text_object(self->activeWin,self,around,key);
    }
    # 627 "10edit.nc"
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

static _Bool apply_motion_operator(struct Vi*  self  , int operator_kind, int motion, int motion_key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "apply_motion_operator"; neo_current_frame = &fr;
    int head_y;
    int head_x;
    int tail_y;
    int tail_x;
    _Bool result;
    memset(&head_y, 0, sizeof(head_y));
    memset(&head_x, 0, sizeof(head_x));
    memset(&tail_y, 0, sizeof(tail_y));
    memset(&tail_x, 0, sizeof(tail_x));
    memset(&result, 0, sizeof(result));
    # 632 "10edit.nc"
    # 633 "10edit.nc"
    # 634 "10edit.nc"
    # 635 "10edit.nc"
    # 636 "10edit.nc"
    result=(_Bool)0;
    # 648 "10edit.nc"
    if(motion==102||motion==116||motion==70||motion==84) {
        # 639 "10edit.nc"
        result=get_find_motion_range(self->activeWin,motion,motion_key,&head_y,&head_x,&tail_y,&tail_x);
    }
    else if(motion==103&&motion_key==101) {
        # 642 "10edit.nc"
        result=get_ge_motion_range(self->activeWin,&head_y,&head_x,&tail_y,&tail_x);
    }
    else {
        # 645 "10edit.nc"
        result=get_motion_range(self->activeWin,motion,&head_y,&head_x,&tail_y,&tail_x);
    }
    # 652 "10edit.nc"
    if(!result) {
        # 649 "10edit.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 672 "10edit.nc"
    switch (    operator_kind) {
        # 654 "10edit.nc"
        case (0):
        # 658 "10edit.nc"
        if(delete_operator_range(self->activeWin,self,head_y,head_x,tail_y,tail_x)) {
            # 655 "10edit.nc"
            self->activeWin->writed=(_Bool)1;
            # 656 "10edit.nc"
                        neo_current_frame = fr.prev;
            return (_Bool)1;
        }
        # 658 "10edit.nc"
        break;
        # 661 "10edit.nc"
        case (1):
        # 666 "10edit.nc"
        if(delete_operator_range(self->activeWin,self,head_y,head_x,tail_y,tail_x)) {
            # 662 "10edit.nc"
            Vi_enterInsertMode2_v3(self);
            # 663 "10edit.nc"
            self->activeWin->writed=(_Bool)1;
            # 664 "10edit.nc"
                        neo_current_frame = fr.prev;
            return (_Bool)1;
        }
        # 666 "10edit.nc"
        break;
        # 669 "10edit.nc"
        case (2):
        # 669 "10edit.nc"
                neo_current_frame = fr.prev;
        return yank_operator_range(self->activeWin,self,head_y,head_x,tail_y,tail_x);
    }
    # 672 "10edit.nc"
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

static void run_operator_pending(struct Vi*  self  , int operator_kind)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "run_operator_pending"; neo_current_frame = &fr;
    int key2;
    _Bool handled;
    memset(&key2, 0, sizeof(key2));
    memset(&handled, 0, sizeof(handled));
    # 677 "10edit.nc"
    key2=ViWin_getKey_v14(self->activeWin,(_Bool)1);
    # 678 "10edit.nc"
    handled=(_Bool)0;
    # 735 "10edit.nc"
    switch (    key2) {
        # 682 "10edit.nc"
        case 100:
        # 687 "10edit.nc"
        if(operator_kind==(0)) {
            # 683 "10edit.nc"
            ViWin_deleteOneLine_v10(self->activeWin,self);
            # 684 "10edit.nc"
            self->activeWin->writed=(_Bool)1;
            # 685 "10edit.nc"
            handled=(_Bool)1;
        }
        # 687 "10edit.nc"
        break;
        # 690 "10edit.nc"
        case 99:
        # 699 "10edit.nc"
        if(operator_kind==(1)) {
            # 691 "10edit.nc"
            ViWin_deleteOneLine2(self->activeWin,self);
            # 692 "10edit.nc"
            Vi_enterInsertMode_v5(self);
            # 696 "10edit.nc"
            if(list$1int$ph_length(self->activeWin->texts)!=0) {
                # 694 "10edit.nc"
                self->activeWin->cursorX=0;
            }
            # 696 "10edit.nc"
            self->activeWin->writed=(_Bool)1;
            # 697 "10edit.nc"
            handled=(_Bool)1;
        }
        # 699 "10edit.nc"
        break;
        # 702 "10edit.nc"
        case 121:
        # 706 "10edit.nc"
        if(operator_kind==(2)) {
            # 703 "10edit.nc"
            ViWin_yankOneLine(self->activeWin,self);
            # 704 "10edit.nc"
            handled=(_Bool)1;
        }
        # 706 "10edit.nc"
        break;
        # 709 "10edit.nc"
        case 105:
        # 710 "10edit.nc"
        case 97:
        # 710 "10edit.nc"
        handled=apply_text_object_operator(self,operator_kind,key2==97,ViWin_getKey_v14(self->activeWin,(_Bool)0));
        # 711 "10edit.nc"
        break;
        # 714 "10edit.nc"
        case 119:
        # 715 "10edit.nc"
        case 101:
        # 716 "10edit.nc"
        case 98:
        # 717 "10edit.nc"
        case 87:
        # 718 "10edit.nc"
        case 69:
        # 719 "10edit.nc"
        case 66:
        # 720 "10edit.nc"
        case 36:
        # 720 "10edit.nc"
        handled=apply_motion_operator(self,operator_kind,key2,-1);
        # 721 "10edit.nc"
        break;
        # 724 "10edit.nc"
        case 102:
        # 725 "10edit.nc"
        case 116:
        # 726 "10edit.nc"
        case 70:
        # 727 "10edit.nc"
        case 84:
        # 727 "10edit.nc"
        handled=apply_motion_operator(self,operator_kind,key2,ViWin_getKey_v14(self->activeWin,(_Bool)0));
        # 728 "10edit.nc"
        break;
        # 731 "10edit.nc"
        case 103:
        # 731 "10edit.nc"
        handled=apply_motion_operator(self,operator_kind,key2,ViWin_getKey_v14(self->activeWin,(_Bool)0));
        # 732 "10edit.nc"
        break;
    }
    # 735 "10edit.nc"
    self->activeWin->digitInput=0;
    # 736 "10edit.nc"
    ViWin_saveInputedKey_v14(self->activeWin);
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

struct ViWin*  ViWin_initialize_v10(struct ViWin*  self  , int y, int x, int width, int height, struct Vi*  vi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_initialize_v10"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct ViWin*  result  ;
    struct ViWin*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    # 741 "10edit.nc"
    result=(struct ViWin* )come_increment_ref_count(ViWin_initialize_v8((struct ViWin* )come_increment_ref_count(self, "10edit.nc", 741, 121),y,x,width,height,vi), "10edit.nc", 741, 122);
    # 743 "10edit.nc"
    result->mRepeatFowardNextCharacterKind=(0);
    # 744 "10edit.nc"
    result->mRepeatFowardNextCharacter=0;
    # 746 "10edit.nc"
        __result_obj__0 = (struct ViWin* )come_increment_ref_count(result, "10edit.nc", 746, 123);
    come_call_finalizer(ViWin_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10edit.nc}", 746, 157);
    come_call_finalizer(ViWin_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10edit.nc}", 746, 158);
    neo_current_frame = fr.prev;
    come_call_finalizer(ViWin_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10edit.nc}", 746, 159);
    return __result_obj__0;
}

static void ViWin_finalize(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_finalize"; neo_current_frame = &fr;
    # 1 "ViWin_finalize"
    # 3 "ViWin_finalize"
    if(self!=((void*)0)&&self->texts!=((void*)0)) {
        # 2 "ViWin_finalize"
        come_call_finalizer(list$1int$ph$p_finalize, self->texts, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 18, 125);
    }
    # 4 "ViWin_finalize"
    if(self!=((void*)0)&&self->texts_length!=((void*)0)) {
        # 3 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->texts_length, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 18, 127);
    }
    # 5 "ViWin_finalize"
    if(self!=((void*)0)&&self->returnPoint!=((void*)0)) {
        # 4 "ViWin_finalize"
        come_call_finalizer(tuple3$3int$int$int$$p_finalize, self->returnPoint, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 4, 128);
    }
    # 6 "ViWin_finalize"
    if(self!=((void*)0)&&self->returnPointStack!=((void*)0)) {
        # 5 "ViWin_finalize"
        come_call_finalizer(list$1tuple3$3int$int$int$$ph$p_finalize, self->returnPointStack, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 0, 131);
    }
    # 7 "ViWin_finalize"
    if(self!=((void*)0)&&self->undo!=((void*)0)) {
        # 6 "ViWin_finalize"
        come_call_finalizer(list$1list$1int$ph$ph$p_finalize, self->undo, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 2, 134);
    }
    # 8 "ViWin_finalize"
    if(self!=((void*)0)&&self->undoScroll!=((void*)0)) {
        # 7 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->undoScroll, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 7, 135);
    }
    # 9 "ViWin_finalize"
    if(self!=((void*)0)&&self->undoCursorX!=((void*)0)) {
        # 8 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->undoCursorX, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 8, 136);
    }
    # 10 "ViWin_finalize"
    if(self!=((void*)0)&&self->undoCursorY!=((void*)0)) {
        # 9 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->undoCursorY, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 9, 137);
    }
    # 11 "ViWin_finalize"
    if(self!=((void*)0)&&self->fileName!=((void*)0)) {
        # 10 "ViWin_finalize"
        (self->fileName = come_decrement_ref_count(self->fileName, (void*)0, (void*)0, 0, 0, (void*)0, "ViWin_finalize", 10, 138));
    }
    # 12 "ViWin_finalize"
    if(self!=((void*)0)&&self->inputedKeys!=((void*)0)) {
        # 11 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->inputedKeys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 11, 139);
    }
    # 13 "ViWin_finalize"
    if(self!=((void*)0)&&self->savedInputedKeys!=((void*)0)) {
        # 12 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->savedInputedKeys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 12, 140);
    }
    # 14 "ViWin_finalize"
    if(self!=((void*)0)&&self->macro!=((void*)0)) {
        # 13 "ViWin_finalize"
        come_call_finalizer(map$2int$list$1list$1int$$ph$ph$p_finalize, self->macro, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 2, 147);
    }
    # 15 "ViWin_finalize"
    if(self!=((void*)0)&&self->recordingMacro!=((void*)0)) {
        # 14 "ViWin_finalize"
        come_call_finalizer(list$1list$1int$$ph$p_finalize, self->recordingMacro, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 14, 148);
    }
    # 16 "ViWin_finalize"
    if(self!=((void*)0)&&self->runningMacro!=((void*)0)) {
        # 15 "ViWin_finalize"
        come_call_finalizer(list$1list$1int$$ph$p_finalize, self->runningMacro, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 15, 149);
    }
    # 17 "ViWin_finalize"
    if(self!=((void*)0)&&self->mark!=((void*)0)) {
        # 16 "ViWin_finalize"
        come_call_finalizer(map$2int$tuple3$3int$int$int$$ph$p_finalize, self->mark, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 2, 154);
    }
    # 18 "ViWin_finalize"
    if(self!=((void*)0)&&self->completionCandidates!=((void*)0)) {
        # 17 "ViWin_finalize"
        come_call_finalizer(list$1int$ph$p_finalize, self->completionCandidates, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 17, 155);
    }
    # 19 "ViWin_finalize"
    if(self!=((void*)0)&&self->completionPrefix!=((void*)0)) {
        # 18 "ViWin_finalize"
        (self->completionPrefix = come_decrement_ref_count(self->completionPrefix, (void*)0, (void*)0, 0, 0, (void*)0, "ViWin_finalize", 18, 156));
    }
        neo_current_frame = fr.prev;
}

static void list$1int$ph$p_finalize(struct list$1int$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1int$ph* it;
    struct list_item$1int$ph* prev_it;
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
        come_call_finalizer(list_item$1int$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 124);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 126);
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
        come_call_finalizer(list_item$1tuple3$3int$int$int$$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 130);
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
        come_call_finalizer(tuple3$3int$int$int$$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple3$3int$int$int$$ph$p_finalize}", 2, 129);
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
        come_call_finalizer(list_item$1list$1int$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 133);
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
        come_call_finalizer(list$1int$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1list$1int$ph$ph$p_finalize}", 2, 132);
    }
            neo_current_frame = fr.prev;
}

static void map$2int$list$1list$1int$$ph$ph$p_finalize(struct map$2int$list$1list$1int$$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1list$1int$$ph$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_34;
    memset(&i, 0, sizeof(i));
    memset(&i_34, 0, sizeof(i_34));
    # 3399 "/usr/local/include/neo-c.h"
    # 3408 "/usr/local/include/neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3407 "/usr/local/include/neo-c.h"
        if(self->item_existance[i]) {
            # 3406 "/usr/local/include/neo-c.h"
            if(1) {
                # 3404 "/usr/local/include/neo-c.h"
                come_call_finalizer(list$1list$1int$$ph$p_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2, 143);
            }
        }
    }
    # 3408 "/usr/local/include/neo-c.h"
    come_free((char*)self->items);
    # 3417 "/usr/local/include/neo-c.h"
    for(i_34=0    ;i_34<self->size;i_34++){
        # 3416 "/usr/local/include/neo-c.h"
        if(self->item_existance[i_34]) {
            # 3415 "/usr/local/include/neo-c.h"
            if(0) {
                # 3413 "/usr/local/include/neo-c.h"
            }
        }
    }
    # 3417 "/usr/local/include/neo-c.h"
    come_free((char*)self->keys);
    # 3419 "/usr/local/include/neo-c.h"
    come_call_finalizer(list$1int$$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3419, 144);
    # 3421 "/usr/local/include/neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3421, 145));
    # 3422 "/usr/local/include/neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3422, 146));
            neo_current_frame = fr.prev;
}

static void list$1list$1int$$ph$p_finalize(struct list$1list$1int$$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1list$1int$$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1list$1int$$ph* it;
    struct list_item$1list$1int$$ph* prev_it;
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
        come_call_finalizer(list_item$1list$1int$$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 142);
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
        come_call_finalizer(list$1int$$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1list$1int$$ph$p_finalize}", 2, 141);
    }
            neo_current_frame = fr.prev;
}

static void map$2int$tuple3$3int$int$int$$ph$p_finalize(struct map$2int$tuple3$3int$int$int$$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$tuple3$3int$int$int$$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_35;
    memset(&i, 0, sizeof(i));
    memset(&i_35, 0, sizeof(i_35));
    # 3399 "/usr/local/include/neo-c.h"
    # 3408 "/usr/local/include/neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3407 "/usr/local/include/neo-c.h"
        if(self->item_existance[i]) {
            # 3406 "/usr/local/include/neo-c.h"
            if(1) {
                # 3404 "/usr/local/include/neo-c.h"
                come_call_finalizer(tuple3$3int$int$int$$p_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3404, 150);
            }
        }
    }
    # 3408 "/usr/local/include/neo-c.h"
    come_free((char*)self->items);
    # 3417 "/usr/local/include/neo-c.h"
    for(i_35=0    ;i_35<self->size;i_35++){
        # 3416 "/usr/local/include/neo-c.h"
        if(self->item_existance[i_35]) {
            # 3415 "/usr/local/include/neo-c.h"
            if(0) {
                # 3413 "/usr/local/include/neo-c.h"
            }
        }
    }
    # 3417 "/usr/local/include/neo-c.h"
    come_free((char*)self->keys);
    # 3419 "/usr/local/include/neo-c.h"
    come_call_finalizer(list$1int$$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3419, 151);
    # 3421 "/usr/local/include/neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3421, 152));
    # 3422 "/usr/local/include/neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3422, 153));
            neo_current_frame = fr.prev;
}

void ViWin_modifyCursorOnDeleting(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_modifyCursorOnDeleting"; neo_current_frame = &fr;
    # 751 "10edit.nc"
    ViWin_modifyOverCursorYValue(self);
    # 752 "10edit.nc"
    ViWin_modifyOverCursorXValue2(self);
    neo_current_frame = fr.prev;
}

void ViWin_deleteOneLine_v10(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_deleteOneLine_v10"; neo_current_frame = &fr;
    int i;
    void* __right_value0 = (void*)0;
    int*  line  ;
    int*  line_36  ;
    memset(&i, 0, sizeof(i));
    memset(&line, 0, sizeof(line));
    memset(&line_36, 0, sizeof(line_36));
    # 794 "10edit.nc"
    if(self->digitInput>0&&!gBinaryMode) {
        # 758 "10edit.nc"
        ViWin_pushUndo_v5(self);
        # 760 "10edit.nc"
        list$1int$ph_reset(nvi->yank);
        # 761 "10edit.nc"
        nvi->yankKind=(0);
        # 777 "10edit.nc"
        for(i=0        ;i<self->digitInput+1;i++){
            # 764 "10edit.nc"
            line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 764, 160);
            # 775 "10edit.nc"
            if(line!=((void*)0)) {
                # 767 "10edit.nc"
                __right_value0 = (void*)0;
                list$1int$ph_push_back(nvi->yank,(int* )come_increment_ref_count((int* )come_memdup(line, "10edit.nc", 767, 161, "int* "), "10edit.nc", 767, 162));
                # 769 "10edit.nc"
                list$1int$ph_delete(self->texts,self->scroll+self->cursorY,self->scroll+self->cursorY+1);
                # 770 "10edit.nc"
                list$1int$_delete(self->texts_length,self->scroll+self->cursorY,self->scroll+self->cursorY+1);
                # 772 "10edit.nc"
                ViWin_modifyCursorOnDeleting(self);
            }
            (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 777, 163));
        }
        # 777 "10edit.nc"
        ViWin_saveYankToFile(self,nvi);
        # 778 "10edit.nc"
        self->digitInput=0;
    }
    else {
        # 781 "10edit.nc"
        __right_value0 = (void*)0;
        line_36=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 781, 164);
        # 793 "10edit.nc"
        if(line_36!=((void*)0)) {
            # 783 "10edit.nc"
            ViWin_pushUndo_v5(self);
            # 784 "10edit.nc"
            list$1int$ph_reset(nvi->yank);
            # 785 "10edit.nc"
            __right_value0 = (void*)0;
            list$1int$ph_push_back(nvi->yank,(int* )come_increment_ref_count((int* )come_memdup(line_36, "10edit.nc", 785, 165, "int* "), "10edit.nc", 785, 166));
            # 786 "10edit.nc"
            nvi->yankKind=(0);
            # 787 "10edit.nc"
            ViWin_saveYankToFile(self,nvi);
            # 788 "10edit.nc"
            list$1int$ph_delete(self->texts,self->scroll+self->cursorY,self->scroll+self->cursorY+1);
            # 789 "10edit.nc"
            list$1int$_delete(self->texts_length,self->scroll+self->cursorY,self->scroll+self->cursorY+1);
            # 791 "10edit.nc"
            ViWin_modifyCursorOnDeleting(self);
        }
        (line_36 = come_decrement_ref_count(line_36, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 794, 167));
    }
    neo_current_frame = fr.prev;
}

void ViWin_deleteOneLine2(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_deleteOneLine2"; neo_current_frame = &fr;
    int i;
    void* __right_value0 = (void*)0;
    int*  line  ;
    int*  line_37  ;
    memset(&i, 0, sizeof(i));
    memset(&line, 0, sizeof(line));
    memset(&line_37, 0, sizeof(line_37));
    # 832 "10edit.nc"
    if(self->digitInput>0) {
        # 799 "10edit.nc"
        ViWin_pushUndo_v5(self);
        # 801 "10edit.nc"
        list$1int$ph_reset(nvi->yank);
        # 802 "10edit.nc"
        nvi->yankKind=(0);
        # 817 "10edit.nc"
        for(i=0        ;i<self->digitInput+1;i++){
            # 805 "10edit.nc"
            line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 805, 168);
            # 815 "10edit.nc"
            if(line!=((void*)0)) {
                # 808 "10edit.nc"
                __right_value0 = (void*)0;
                list$1int$ph_push_back(nvi->yank,(int* )come_increment_ref_count((int* )come_memdup(line, "10edit.nc", 808, 169, "int* "), "10edit.nc", 808, 170));
                # 810 "10edit.nc"
                list$1int$ph_delete(self->texts,self->scroll+self->cursorY,self->scroll+self->cursorY+1);
                # 811 "10edit.nc"
                list$1int$_delete(self->texts_length,self->scroll+self->cursorY,self->scroll+self->cursorY+1);
                # 813 "10edit.nc"
                ViWin_modifyCursorOnDeleting(self);
            }
            (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 817, 171));
        }
        # 817 "10edit.nc"
        self->digitInput=0;
        # 818 "10edit.nc"
        ViWin_saveYankToFile(self,nvi);
    }
    else {
        # 821 "10edit.nc"
        __right_value0 = (void*)0;
        line_37=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 821, 172);
        # 831 "10edit.nc"
        if(line_37!=((void*)0)) {
            # 823 "10edit.nc"
            ViWin_pushUndo_v5(self);
            # 824 "10edit.nc"
            list$1int$ph_delete(self->texts,self->scroll+self->cursorY,self->scroll+self->cursorY+1);
            # 825 "10edit.nc"
            list$1int$_delete(self->texts_length,self->scroll+self->cursorY,self->scroll+self->cursorY+1);
            # 826 "10edit.nc"
            __right_value0 = (void*)0;
            list$1int$ph_insert(self->texts,self->scroll+self->cursorY,(int* )come_increment_ref_count(__builtin_wstring("","10edit.nc",826), "10edit.nc", 826, 191));
            # 827 "10edit.nc"
            list$1int$_insert(self->texts_length,self->scroll+self->cursorY,0);
            # 829 "10edit.nc"
            ViWin_modifyCursorOnDeleting(self);
        }
        (line_37 = come_decrement_ref_count(line_37, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 832, 198));
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
    int*  __dec_obj5  ;
    struct list_item$1int$ph* litem_38;
    int*  __dec_obj6  ;
    struct list_item$1int$ph* it;
    int i_39;
    struct list_item$1int$ph* litem_40;
    int*  __dec_obj7  ;
    memset(&len, 0, sizeof(len));
    memset(&i, 0, sizeof(i));
    memset(&litem, 0, sizeof(litem));
    memset(&litem_38, 0, sizeof(litem_38));
    memset(&it, 0, sizeof(it));
    memset(&i_39, 0, sizeof(i_39));
    memset(&litem_40, 0, sizeof(litem_40));
    # 1785 "/usr/local/include/neo-c.h"
    # 1790 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1788 "/usr/local/include/neo-c.h"
                __result_obj__0 = ((void*)0);
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1788, 173));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1793 "/usr/local/include/neo-c.h"
    if(position<0) {
        # 1791 "/usr/local/include/neo-c.h"
        position+=self->len+1;
    }
    # 1796 "/usr/local/include/neo-c.h"
    if(position<0) {
        # 1794 "/usr/local/include/neo-c.h"
        position=0;
    }
    # 1807 "/usr/local/include/neo-c.h"
    if(self->len==0||position>=self->len) {
        # 1797 "/usr/local/include/neo-c.h"
        len=self->len;
        # 1803 "/usr/local/include/neo-c.h"
        for(i=0        ;i<position-len;i++){
            # 1799 "/usr/local/include/neo-c.h"
            # 1800 "/usr/local/include/neo-c.h"
            memset(&default_value,0,sizeof(int* ));
            # 1801 "/usr/local/include/neo-c.h"
            list$1int$ph_push_back(self,(int* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 1801, 174));
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1803, 175));
        }
        # 1803 "/usr/local/include/neo-c.h"
        list$1int$ph_push_back(self,(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1803, 176));
        # 1804 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1804, 177));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1853 "/usr/local/include/neo-c.h"
    if(position==0) {
        # 1808 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1808, 178, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1808, 179);
        # 1810 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1811 "/usr/local/include/neo-c.h"
        litem->next=self->head;
        # 1812 "/usr/local/include/neo-c.h"
        __dec_obj5=litem->item,
        litem->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1812, 181);
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1812, 180);
        # 1814 "/usr/local/include/neo-c.h"
        self->head->prev=litem;
        # 1815 "/usr/local/include/neo-c.h"
        self->head=litem;
        # 1817 "/usr/local/include/neo-c.h"
        self->len++;
    }
    else if(self->len==1) {
        # 1820 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_38=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1820, 182, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1820, 183);
        # 1822 "/usr/local/include/neo-c.h"
        litem_38->prev=self->head;
        # 1823 "/usr/local/include/neo-c.h"
        litem_38->next=self->tail;
        # 1824 "/usr/local/include/neo-c.h"
        __dec_obj6=litem_38->item,
        litem_38->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1824, 185);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1824, 184);
        # 1826 "/usr/local/include/neo-c.h"
        self->tail->prev=litem_38;
        # 1827 "/usr/local/include/neo-c.h"
        self->head->next=litem_38;
        # 1829 "/usr/local/include/neo-c.h"
        self->len++;
    }
    else {
        # 1832 "/usr/local/include/neo-c.h"
        it=self->head;
        # 1833 "/usr/local/include/neo-c.h"
        i_39=0;
        # 1851 "/usr/local/include/neo-c.h"
        while(it!=((void*)0)) {
            # 1848 "/usr/local/include/neo-c.h"
            if(position==i_39) {
                # 1836 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
                litem_40=(struct list_item$1int$ph*)come_increment_ref_count(((struct list_item$1int$ph*)(__right_value0=(struct list_item$1int$ph*)come_calloc(1, sizeof(struct list_item$1int$ph)*(1), "/usr/local/include/neo-c.h", 1836, 186, "struct list_item$1int$ph*"))), "/usr/local/include/neo-c.h", 1836, 187);
                # 1838 "/usr/local/include/neo-c.h"
                litem_40->prev=it->prev;
                # 1839 "/usr/local/include/neo-c.h"
                litem_40->next=it;
                # 1840 "/usr/local/include/neo-c.h"
                __dec_obj7=litem_40->item,
                litem_40->item=(int* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1840, 189);
                __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1840, 188);
                # 1842 "/usr/local/include/neo-c.h"
                it->prev->next=litem_40;
                # 1843 "/usr/local/include/neo-c.h"
                it->prev=litem_40;
                # 1845 "/usr/local/include/neo-c.h"
                self->len++;
            }
            # 1848 "/usr/local/include/neo-c.h"
            it=it->next;
            # 1849 "/usr/local/include/neo-c.h"
            i_39++;
        }
    }
    # 1853 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1853, 190));
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
    struct list_item$1int$* litem_41;
    struct list_item$1int$* it;
    int i_42;
    struct list_item$1int$* litem_43;
    memset(&len, 0, sizeof(len));
    memset(&i, 0, sizeof(i));
    memset(&litem, 0, sizeof(litem));
    memset(&litem_41, 0, sizeof(litem_41));
    memset(&it, 0, sizeof(it));
    memset(&i_42, 0, sizeof(i_42));
    memset(&litem_43, 0, sizeof(litem_43));
    # 1785 "/usr/local/include/neo-c.h"
    # 1790 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1788 "/usr/local/include/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1793 "/usr/local/include/neo-c.h"
    if(position<0) {
        # 1791 "/usr/local/include/neo-c.h"
        position+=self->len+1;
    }
    # 1796 "/usr/local/include/neo-c.h"
    if(position<0) {
        # 1794 "/usr/local/include/neo-c.h"
        position=0;
    }
    # 1807 "/usr/local/include/neo-c.h"
    if(self->len==0||position>=self->len) {
        # 1797 "/usr/local/include/neo-c.h"
        len=self->len;
        # 1803 "/usr/local/include/neo-c.h"
        for(i=0        ;i<position-len;i++){
            # 1799 "/usr/local/include/neo-c.h"
            # 1800 "/usr/local/include/neo-c.h"
            memset(&default_value,0,sizeof(int));
            # 1801 "/usr/local/include/neo-c.h"
            list$1int$_push_back(self,default_value);
        }
        # 1803 "/usr/local/include/neo-c.h"
        list$1int$_push_back(self,item);
        # 1804 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1853 "/usr/local/include/neo-c.h"
    if(position==0) {
        # 1808 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1808, 192, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1808, 193);
        # 1810 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1811 "/usr/local/include/neo-c.h"
        litem->next=self->head;
        # 1812 "/usr/local/include/neo-c.h"
        litem->item=item;
        # 1814 "/usr/local/include/neo-c.h"
        self->head->prev=litem;
        # 1815 "/usr/local/include/neo-c.h"
        self->head=litem;
        # 1817 "/usr/local/include/neo-c.h"
        self->len++;
    }
    else if(self->len==1) {
        # 1820 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_41=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1820, 194, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1820, 195);
        # 1822 "/usr/local/include/neo-c.h"
        litem_41->prev=self->head;
        # 1823 "/usr/local/include/neo-c.h"
        litem_41->next=self->tail;
        # 1824 "/usr/local/include/neo-c.h"
        litem_41->item=item;
        # 1826 "/usr/local/include/neo-c.h"
        self->tail->prev=litem_41;
        # 1827 "/usr/local/include/neo-c.h"
        self->head->next=litem_41;
        # 1829 "/usr/local/include/neo-c.h"
        self->len++;
    }
    else {
        # 1832 "/usr/local/include/neo-c.h"
        it=self->head;
        # 1833 "/usr/local/include/neo-c.h"
        i_42=0;
        # 1851 "/usr/local/include/neo-c.h"
        while(it!=((void*)0)) {
            # 1848 "/usr/local/include/neo-c.h"
            if(position==i_42) {
                # 1836 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
                litem_43=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1836, 196, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1836, 197);
                # 1838 "/usr/local/include/neo-c.h"
                litem_43->prev=it->prev;
                # 1839 "/usr/local/include/neo-c.h"
                litem_43->next=it;
                # 1840 "/usr/local/include/neo-c.h"
                litem_43->item=item;
                # 1842 "/usr/local/include/neo-c.h"
                it->prev->next=litem_43;
                # 1843 "/usr/local/include/neo-c.h"
                it->prev=litem_43;
                # 1845 "/usr/local/include/neo-c.h"
                self->len++;
            }
            # 1848 "/usr/local/include/neo-c.h"
            it=it->next;
            # 1849 "/usr/local/include/neo-c.h"
            i_42++;
        }
    }
    # 1853 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void ViWin_deleteWord(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_deleteWord"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int*  line  ;
    int count;
    int x;
    int i;
    int*  p  ;
    int*  line_44  ;
    int x_45;
    int*  p_46  ;
    memset(&line, 0, sizeof(line));
    memset(&count, 0, sizeof(count));
    memset(&x, 0, sizeof(x));
    memset(&i, 0, sizeof(i));
    memset(&p, 0, sizeof(p));
    memset(&line_44, 0, sizeof(line_44));
    memset(&x_45, 0, sizeof(x_45));
    memset(&p_46, 0, sizeof(p_46));
    # 836 "10edit.nc"
    ViWin_pushUndo_v5(self);
    # 979 "10edit.nc"
    if(self->digitInput>0) {
        # 839 "10edit.nc"
        line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((int* )(__right_value0=__builtin_wstring("","10edit.nc",839)))), "10edit.nc", 839, 199);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 839, 200));
        # 910 "10edit.nc"
        if(wcslen(line)==0) {
            # 842 "10edit.nc"
            ViWin_deleteOneLine_v10(self,nvi);
        }
        else {
            # 845 "10edit.nc"
            count=self->digitInput+1;
            # 847 "10edit.nc"
            x=self->cursorX;
            # 901 "10edit.nc"
            for(i=0            ;i<count;i++){
                # 850 "10edit.nc"
                p=line+x;
                # 899 "10edit.nc"
                if((*p>=33&&*p<=47)||(*p>=58&&*p<=64)||(*p>=123&&*p<=126)) {
                    # 864 "10edit.nc"
                    while((*p>=33&&*p<=47)||(*p>=58&&*p<=64)||(*p>=123&&*p<=126)) {
                        # 856 "10edit.nc"
                        p++;
                        # 857 "10edit.nc"
                        x++;
                        # 863 "10edit.nc"
                        if(x>=wstring_length(line)) {
                            # 861 "10edit.nc"
                            break;
                        }
                    }
                }
                else if(xiswalnum(*p)||*p==95) {
                    # 875 "10edit.nc"
                    while(xiswalnum(*p)||*p==95) {
                        # 867 "10edit.nc"
                        p++;
                        # 868 "10edit.nc"
                        x++;
                        # 874 "10edit.nc"
                        if(x>=wstring_length(line)) {
                            # 872 "10edit.nc"
                            break;
                        }
                    }
                }
                else if(xiswblank(*p)) {
                    # 886 "10edit.nc"
                    while(xiswblank(*p)) {
                        # 878 "10edit.nc"
                        p++;
                        # 879 "10edit.nc"
                        x++;
                        # 885 "10edit.nc"
                        if(x>=wstring_length(line)) {
                            # 883 "10edit.nc"
                            break;
                        }
                    }
                }
                else if(xiswdigit(*p)) {
                    # 897 "10edit.nc"
                    while(xiswdigit(*p)) {
                        # 889 "10edit.nc"
                        p++;
                        # 890 "10edit.nc"
                        x++;
                        # 896 "10edit.nc"
                        if(x>=wstring_length(line)) {
                            # 894 "10edit.nc"
                            break;
                        }
                    }
                }
            }
            # 901 "10edit.nc"
            list$1int$ph_reset(nvi->yank);
            # 902 "10edit.nc"
            __right_value0 = (void*)0;
            list$1int$ph_push_back(nvi->yank,(int* )come_increment_ref_count(wstring_substring(line,self->cursorX,x), "10edit.nc", 902, 201));
            # 903 "10edit.nc"
            nvi->yankKind=(1);
            # 904 "10edit.nc"
            ViWin_saveYankToFile(self,nvi);
            # 905 "10edit.nc"
            __right_value0 = (void*)0;
            ((int* )(__right_value0=wstring_delete(line,self->cursorX,x)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 905, 202));
            # 907 "10edit.nc"
            ViWin_modifyCursorOnDeleting(self);
        }
        # 910 "10edit.nc"
        self->digitInput=0;
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 979, 203));
    }
    else {
        # 913 "10edit.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        line_44=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((int* )(__right_value0=__builtin_wstring("","10edit.nc",913)))), "10edit.nc", 913, 204);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 913, 205));
        # 978 "10edit.nc"
        if(wcslen(line_44)==0) {
            # 916 "10edit.nc"
            ViWin_deleteOneLine_v10(self,nvi);
        }
        else {
            # 919 "10edit.nc"
            x_45=self->cursorX;
            # 921 "10edit.nc"
            p_46=line_44+x_45;
            # 970 "10edit.nc"
            if((*p_46>=33&&*p_46<=47)||(*p_46>=58&&*p_46<=64)||(*p_46>=123&&*p_46<=126)) {
                # 935 "10edit.nc"
                while((*p_46>=33&&*p_46<=47)||(*p_46>=58&&*p_46<=64)||(*p_46>=123&&*p_46<=126)) {
                    # 927 "10edit.nc"
                    p_46++;
                    # 928 "10edit.nc"
                    x_45++;
                    # 934 "10edit.nc"
                    if(x_45>=wstring_length(line_44)) {
                        # 932 "10edit.nc"
                        break;
                    }
                }
            }
            else if(xiswalnum(*p_46)||*p_46==95) {
                # 946 "10edit.nc"
                while(xiswalnum(*p_46)||*p_46==95) {
                    # 938 "10edit.nc"
                    p_46++;
                    # 939 "10edit.nc"
                    x_45++;
                    # 945 "10edit.nc"
                    if(x_45>=wstring_length(line_44)) {
                        # 943 "10edit.nc"
                        break;
                    }
                }
            }
            else if(xiswblank(*p_46)) {
                # 957 "10edit.nc"
                while(xiswblank(*p_46)) {
                    # 949 "10edit.nc"
                    p_46++;
                    # 950 "10edit.nc"
                    x_45++;
                    # 956 "10edit.nc"
                    if(x_45>=wstring_length(line_44)) {
                        # 954 "10edit.nc"
                        break;
                    }
                }
            }
            else if(xiswdigit(*p_46)) {
                # 968 "10edit.nc"
                while(xiswdigit(*p_46)) {
                    # 960 "10edit.nc"
                    p_46++;
                    # 961 "10edit.nc"
                    x_45++;
                    # 967 "10edit.nc"
                    if(x_45>=wstring_length(line_44)) {
                        # 965 "10edit.nc"
                        break;
                    }
                }
            }
            # 970 "10edit.nc"
            list$1int$ph_reset(nvi->yank);
            # 971 "10edit.nc"
            __right_value0 = (void*)0;
            list$1int$ph_push_back(nvi->yank,(int* )come_increment_ref_count(wstring_substring(line_44,self->cursorX,x_45), "10edit.nc", 971, 206));
            # 972 "10edit.nc"
            nvi->yankKind=(1);
            # 973 "10edit.nc"
            ViWin_saveYankToFile(self,nvi);
            # 974 "10edit.nc"
            __right_value0 = (void*)0;
            ((int* )(__right_value0=wstring_delete(line_44,self->cursorX,x_45)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 974, 207));
            # 976 "10edit.nc"
            ViWin_modifyCursorOnDeleting(self);
        }
        (line_44 = come_decrement_ref_count(line_44, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 979, 208));
    }
    neo_current_frame = fr.prev;
}

void ViWin_deleteForNextCharacter(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_deleteForNextCharacter"; neo_current_frame = &fr;
    int key;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int*  line  ;
    int x;
    int count;
    int*  p  ;
    int i;
    int key_47;
    int*  line_48  ;
    int x_49;
    int*  p_50  ;
    memset(&key, 0, sizeof(key));
    memset(&line, 0, sizeof(line));
    memset(&x, 0, sizeof(x));
    memset(&count, 0, sizeof(count));
    memset(&p, 0, sizeof(p));
    memset(&i, 0, sizeof(i));
    memset(&key_47, 0, sizeof(key_47));
    memset(&line_48, 0, sizeof(line_48));
    memset(&x_49, 0, sizeof(x_49));
    memset(&p_50, 0, sizeof(p_50));
    # 983 "10edit.nc"
    ViWin_pushUndo_v5(self);
    # 1048 "10edit.nc"
    if(self->digitInput>0) {
        # 986 "10edit.nc"
        key=ViWin_getKey_v14(self,(_Bool)0);
        # 988 "10edit.nc"
        line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((int* )(__right_value0=__builtin_wstring("","10edit.nc",988)))), "10edit.nc", 988, 209);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 988, 210));
        # 1021 "10edit.nc"
        if(wcslen(line)>0) {
            # 991 "10edit.nc"
            x=self->cursorX;
            # 993 "10edit.nc"
            count=self->digitInput+1;
            # 995 "10edit.nc"
            # 1016 "10edit.nc"
            for(i=0            ;i<count;i++){
                # 998 "10edit.nc"
                p=line+x;
                # 1010 "10edit.nc"
                while(*p!=key) {
                    # 1001 "10edit.nc"
                    p++;
                    # 1002 "10edit.nc"
                    x++;
                    # 1008 "10edit.nc"
                    if(x>=wstring_length(line)) {
                        # 1006 "10edit.nc"
                        break;
                    }
                }
                # 1014 "10edit.nc"
                if(i!=count-1) {
                    # 1011 "10edit.nc"
                    x++;
                }
            }
            # 1019 "10edit.nc"
            if(*p==key) {
                # 1017 "10edit.nc"
                __right_value0 = (void*)0;
                ((int* )(__right_value0=wstring_delete(line,self->cursorX,x+1)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1017, 211));
            }
        }
        # 1021 "10edit.nc"
        self->digitInput=0;
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1048, 212));
    }
    else {
        # 1024 "10edit.nc"
        key_47=ViWin_getKey_v14(self,(_Bool)0);
        # 1026 "10edit.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        line_48=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((int* )(__right_value0=__builtin_wstring("","10edit.nc",1026)))), "10edit.nc", 1026, 213);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1026, 214));
        # 1047 "10edit.nc"
        if(wcslen(line_48)>0) {
            # 1029 "10edit.nc"
            x_49=self->cursorX;
            # 1031 "10edit.nc"
            p_50=line_48+x_49;
            # 1043 "10edit.nc"
            while(*p_50!=key_47) {
                # 1034 "10edit.nc"
                p_50++;
                # 1035 "10edit.nc"
                x_49++;
                # 1041 "10edit.nc"
                if(x_49>=wstring_length(line_48)) {
                    # 1039 "10edit.nc"
                    break;
                }
            }
            # 1046 "10edit.nc"
            if(*p_50==key_47) {
                # 1044 "10edit.nc"
                __right_value0 = (void*)0;
                ((int* )(__right_value0=wstring_delete(line_48,self->cursorX,x_49+1)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1044, 215));
            }
        }
        (line_48 = come_decrement_ref_count(line_48, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1048, 216));
    }
    neo_current_frame = fr.prev;
}

void ViWin_deleteForNextCharacter2(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_deleteForNextCharacter2"; neo_current_frame = &fr;
    int key;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int*  line  ;
    int x;
    int count;
    int*  p  ;
    int i;
    int key_51;
    int*  line_52  ;
    int x_53;
    int*  p_54  ;
    memset(&key, 0, sizeof(key));
    memset(&line, 0, sizeof(line));
    memset(&x, 0, sizeof(x));
    memset(&count, 0, sizeof(count));
    memset(&p, 0, sizeof(p));
    memset(&i, 0, sizeof(i));
    memset(&key_51, 0, sizeof(key_51));
    memset(&line_52, 0, sizeof(line_52));
    memset(&x_53, 0, sizeof(x_53));
    memset(&p_54, 0, sizeof(p_54));
    # 1052 "10edit.nc"
    ViWin_pushUndo_v5(self);
    # 1117 "10edit.nc"
    if(self->digitInput>0) {
        # 1055 "10edit.nc"
        key=ViWin_getKey_v14(self,(_Bool)0);
        # 1057 "10edit.nc"
        line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((int* )(__right_value0=__builtin_wstring("","10edit.nc",1057)))), "10edit.nc", 1057, 217);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1057, 218));
        # 1090 "10edit.nc"
        if(wcslen(line)>0) {
            # 1060 "10edit.nc"
            x=self->cursorX;
            # 1062 "10edit.nc"
            count=self->digitInput+1;
            # 1064 "10edit.nc"
            # 1085 "10edit.nc"
            for(i=0            ;i<count;i++){
                # 1067 "10edit.nc"
                p=line+x;
                # 1079 "10edit.nc"
                while(*p!=key) {
                    # 1070 "10edit.nc"
                    p++;
                    # 1071 "10edit.nc"
                    x++;
                    # 1077 "10edit.nc"
                    if(x>=wstring_length(line)) {
                        # 1075 "10edit.nc"
                        break;
                    }
                }
                # 1083 "10edit.nc"
                if(i!=count-1) {
                    # 1080 "10edit.nc"
                    x++;
                }
            }
            # 1088 "10edit.nc"
            if(*p==key) {
                # 1086 "10edit.nc"
                __right_value0 = (void*)0;
                ((int* )(__right_value0=wstring_delete(line,self->cursorX,x)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1086, 219));
            }
        }
        # 1090 "10edit.nc"
        self->digitInput=0;
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1117, 220));
    }
    else {
        # 1093 "10edit.nc"
        key_51=ViWin_getKey_v14(self,(_Bool)0);
        # 1095 "10edit.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        line_52=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((int* )(__right_value0=__builtin_wstring("","10edit.nc",1095)))), "10edit.nc", 1095, 221);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1095, 222));
        # 1116 "10edit.nc"
        if(wcslen(line_52)>0) {
            # 1098 "10edit.nc"
            x_53=self->cursorX;
            # 1100 "10edit.nc"
            p_54=line_52+x_53;
            # 1112 "10edit.nc"
            while(*p_54!=key_51) {
                # 1103 "10edit.nc"
                p_54++;
                # 1104 "10edit.nc"
                x_53++;
                # 1110 "10edit.nc"
                if(x_53>=wstring_length(line_52)) {
                    # 1108 "10edit.nc"
                    break;
                }
            }
            # 1115 "10edit.nc"
            if(*p_54==key_51) {
                # 1113 "10edit.nc"
                __right_value0 = (void*)0;
                ((int* )(__right_value0=wstring_delete(line_52,self->cursorX,x_53)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1113, 223));
            }
        }
        (line_52 = come_decrement_ref_count(line_52, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1117, 224));
    }
    neo_current_frame = fr.prev;
}

void ViWin_deleteCursorCharactor(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_deleteCursorCharactor"; neo_current_frame = &fr;
    int num;
    void* __right_value0 = (void*)0;
    int*  line  ;
    int deleted_num;
    int i;
    int len;
    int*  line_55  ;
    int len_56;
    int*  new_line  ;
    int*  line_57  ;
    int len_58;
    memset(&num, 0, sizeof(num));
    memset(&line, 0, sizeof(line));
    memset(&deleted_num, 0, sizeof(deleted_num));
    memset(&i, 0, sizeof(i));
    memset(&len, 0, sizeof(len));
    memset(&line_55, 0, sizeof(line_55));
    memset(&len_56, 0, sizeof(len_56));
    memset(&new_line, 0, sizeof(new_line));
    memset(&line_57, 0, sizeof(line_57));
    memset(&len_58, 0, sizeof(len_58));
    # 1121 "10edit.nc"
    ViWin_pushUndo_v5(self);
    # 1179 "10edit.nc"
    if(self->digitInput>0&&!gBinaryMode) {
        # 1124 "10edit.nc"
        num=self->digitInput+1;
        # 1126 "10edit.nc"
        line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 1126, 225);
        # 1127 "10edit.nc"
        deleted_num=0;
        # 1137 "10edit.nc"
        for(i=0        ;i<num;i++){
            # 1133 "10edit.nc"
            if(self->cursorX>=wstring_length(line)) {
                # 1131 "10edit.nc"
                break;
            }
            # 1133 "10edit.nc"
            __right_value0 = (void*)0;
            ((int* )(__right_value0=wstring_delete(line,self->cursorX,self->cursorX+1)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1133, 226));
            # 1134 "10edit.nc"
            deleted_num++;
        }
        # 1137 "10edit.nc"
        len=list$1int$_item(self->texts_length,self->scroll+self->cursorY,-1);
        # 1146 "10edit.nc"
        if(len!=-1) {
            # 1139 "10edit.nc"
            len-=deleted_num;
            # 1143 "10edit.nc"
            if(len<0) {
                # 1141 "10edit.nc"
                len=0;
            }
            # 1143 "10edit.nc"
            list$1int$_replace(self->texts_length,self->scroll+self->cursorY,len);
        }
        # 1146 "10edit.nc"
        ViWin_modifyOverCursorXValue(self);
        # 1148 "10edit.nc"
        self->digitInput=0;
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1179, 227));
    }
    else {
        # 1178 "10edit.nc"
        if(gBinaryMode) {
            # 1152 "10edit.nc"
            __right_value0 = (void*)0;
            line_55=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 1152, 228);
            # 1154 "10edit.nc"
            len_56=list$1int$_item(self->texts_length,self->scroll+self->cursorY,-1);
            # 1155 "10edit.nc"
            len_56--;
            # 1156 "10edit.nc"
            list$1int$_replace(self->texts_length,self->scroll+self->cursorY,len_56);
            # 1167 "10edit.nc"
            if(len_56>=1) {
                # 1159 "10edit.nc"
                __right_value0 = (void*)0;
                new_line=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(len_56+1)), "10edit.nc", 1159, 229, "int* "), "10edit.nc", 1159, 230);
                # 1161 "10edit.nc"
                memcpy(new_line,line_55,sizeof(int )*self->cursorX);
                # 1162 "10edit.nc"
                memcpy(new_line+self->cursorX,line_55+self->cursorX+1,sizeof(int )*(len_56-self->cursorX));
                # 1163 "10edit.nc"
                list$1int$ph_replace(self->texts,self->scroll+self->cursorY,(int* )come_increment_ref_count(new_line, "10edit.nc", 1163, 231));
                # 1165 "10edit.nc"
                ViWin_modifyOverCursorXValue(self);
                (new_line = come_decrement_ref_count(new_line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1167, 232));
            }
            (line_55 = come_decrement_ref_count(line_55, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1178, 233));
        }
        else {
            # 1169 "10edit.nc"
            __right_value0 = (void*)0;
            line_57=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 1169, 234);
            # 1170 "10edit.nc"
            __right_value0 = (void*)0;
            ((int* )(__right_value0=wstring_delete(line_57,self->cursorX,self->cursorX+1)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1170, 235));
            # 1172 "10edit.nc"
            len_58=list$1int$_item(self->texts_length,self->scroll+self->cursorY,-1);
            # 1173 "10edit.nc"
            len_58--;
            # 1174 "10edit.nc"
            list$1int$_replace(self->texts_length,self->scroll+self->cursorY,len_58);
            # 1176 "10edit.nc"
            ViWin_modifyOverCursorXValue(self);
            (line_57 = come_decrement_ref_count(line_57, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1178, 236));
        }
    }
    neo_current_frame = fr.prev;
}

static int list$1int$_item(struct list$1int$* self, int position, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_item"; neo_current_frame = &fr;
    struct list_item$1int$* it;
    int i;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
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

void ViWin_deleteBack(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_deleteBack"; neo_current_frame = &fr;
    int num;
    void* __right_value0 = (void*)0;
    int*  line  ;
    int i;
    int*  line_59  ;
    memset(&num, 0, sizeof(num));
    memset(&line, 0, sizeof(line));
    memset(&i, 0, sizeof(i));
    memset(&line_59, 0, sizeof(line_59));
    # 1183 "10edit.nc"
    ViWin_pushUndo_v5(self);
    # 1212 "10edit.nc"
    if(self->digitInput>0) {
        # 1186 "10edit.nc"
        num=self->digitInput+1;
        # 1188 "10edit.nc"
        line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 1188, 237);
        # 1198 "10edit.nc"
        for(i=0        ;i<num;i++){
            # 1196 "10edit.nc"
            if(self->cursorX>0) {
                # 1192 "10edit.nc"
                self->cursorX--;
                # 1193 "10edit.nc"
                __right_value0 = (void*)0;
                ((int* )(__right_value0=wstring_delete(line,self->cursorX,self->cursorX+1)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1193, 238));
            }
        }
        # 1198 "10edit.nc"
        ViWin_modifyOverCursorXValue(self);
        # 1200 "10edit.nc"
        self->digitInput=0;
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1212, 239));
    }
    else {
        # 1203 "10edit.nc"
        __right_value0 = (void*)0;
        line_59=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 1203, 240);
        # 1210 "10edit.nc"
        if(self->cursorX>0) {
            # 1206 "10edit.nc"
            self->cursorX--;
            # 1207 "10edit.nc"
            __right_value0 = (void*)0;
            ((int* )(__right_value0=wstring_delete(line_59,self->cursorX,self->cursorX+1)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1207, 241));
        }
        # 1210 "10edit.nc"
        ViWin_modifyOverCursorXValue(self);
        (line_59 = come_decrement_ref_count(line_59, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1212, 242));
    }
    neo_current_frame = fr.prev;
}

void ViWin_getCursorNumber(struct ViWin*  self  , int* head, int* tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_getCursorNumber"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  line  ;
    int  c  ;
    int  c_60  ;
    int  c_61  ;
    memset(&line, 0, sizeof(line));
    memset(&c, 0, sizeof(c));
    memset(&c_60, 0, sizeof(c_60));
    memset(&c_61, 0, sizeof(c_61));
    # 1216 "10edit.nc"
    line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 1216, 243);
    # 1218 "10edit.nc"
    c=line[self->cursorX];
    # 1263 "10edit.nc"
    if(xiswdigit(c)) {
        # 1222 "10edit.nc"
        *head=self->cursorX;
        # 1242 "10edit.nc"
        if(*head>0) {
            # 1240 "10edit.nc"
            while((_Bool)1) {
                # 1230 "10edit.nc"
                if(*head<0) {
                    # 1227 "10edit.nc"
                    break;
                }
                # 1230 "10edit.nc"
                c_60=line[*head];
                # 1239 "10edit.nc"
                if(xiswdigit(c_60)) {
                    # 1233 "10edit.nc"
                    (*head)--;
                }
                else {
                    # 1236 "10edit.nc"
                    (*head)++;
                    # 1237 "10edit.nc"
                    break;
                }
            }
        }
        # 1246 "10edit.nc"
        if(*head<0) {
            # 1243 "10edit.nc"
            *head=0;
        }
        # 1246 "10edit.nc"
        *tail=self->cursorX;
        # 1258 "10edit.nc"
        while((_Bool)1) {
            # 1249 "10edit.nc"
            c_61=line[*tail];
            # 1257 "10edit.nc"
            if(xiswdigit(c_61)) {
                # 1252 "10edit.nc"
                (*tail)++;
            }
            else {
                # 1255 "10edit.nc"
                break;
            }
        }
    }
    else {
        # 1260 "10edit.nc"
        *head=-1;
        # 1261 "10edit.nc"
        *tail=-1;
    }
    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1265, 244));
    neo_current_frame = fr.prev;
}

void ViWin_incrementNumber(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_incrementNumber"; neo_current_frame = &fr;
    int num;
    void* __right_value0 = (void*)0;
    int*  line  ;
    int head;
    int tail;
    void* __right_value1 = (void*)0;
    char*  number_string  ;
    int n;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    int*  new_line  ;
    int*  line_62  ;
    int head_63;
    int tail_64;
    char*  number_string_65  ;
    int n_66;
    int*  new_line_67  ;
    memset(&num, 0, sizeof(num));
    memset(&line, 0, sizeof(line));
    memset(&head, 0, sizeof(head));
    memset(&tail, 0, sizeof(tail));
    memset(&number_string, 0, sizeof(number_string));
    memset(&n, 0, sizeof(n));
    memset(&new_line, 0, sizeof(new_line));
    memset(&line_62, 0, sizeof(line_62));
    memset(&head_63, 0, sizeof(head_63));
    memset(&tail_64, 0, sizeof(tail_64));
    memset(&number_string_65, 0, sizeof(number_string_65));
    memset(&n_66, 0, sizeof(n_66));
    memset(&new_line_67, 0, sizeof(new_line_67));
    # 1267 "10edit.nc"
    ViWin_pushUndo_v5(self);
    # 1317 "10edit.nc"
    if(self->digitInput>0) {
        # 1270 "10edit.nc"
        num=self->digitInput+1;
        # 1272 "10edit.nc"
        line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 1272, 245);
        # 1274 "10edit.nc"
        # 1275 "10edit.nc"
        # 1276 "10edit.nc"
        ViWin_getCursorNumber(self,&head,&tail);
        # 1291 "10edit.nc"
        if(head!=-1&&tail!=-1) {
            # 1279 "10edit.nc"
            __right_value0 = (void*)0;
            number_string=(char* )come_increment_ref_count(wstring_to_string(((int* )(__right_value0=wstring_substring(line,head,tail)))), "10edit.nc", 1279, 246);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1279, 247));
            # 1281 "10edit.nc"
            n=atoi(number_string);
            # 1283 "10edit.nc"
            n+=num;
            # 1285 "10edit.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            new_line=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value2=xsprintf("%ls%d%ls",((int* )(__right_value0=wstring_substring(line,0,head))),n,((int* )(__right_value1=wstring_substring(line,tail,-1))))))), "10edit.nc", 1285, 248);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1285, 249));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1285, 250));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1285, 251));
            # 1287 "10edit.nc"
            list$1int$ph_replace(self->texts,self->scroll+self->cursorY,(int* )come_increment_ref_count(new_line, "10edit.nc", 1287, 252));
            # 1288 "10edit.nc"
            list$1int$_replace(self->texts_length,self->scroll+self->cursorY,wcslen(new_line));
            (number_string = come_decrement_ref_count(number_string, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1291, 253));
            (new_line = come_decrement_ref_count(new_line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1291, 254));
        }
        # 1291 "10edit.nc"
        ViWin_modifyOverCursorXValue(self);
        # 1293 "10edit.nc"
        self->digitInput=0;
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1317, 255));
    }
    else {
        # 1296 "10edit.nc"
        __right_value0 = (void*)0;
        line_62=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 1296, 256);
        # 1298 "10edit.nc"
        # 1299 "10edit.nc"
        # 1300 "10edit.nc"
        ViWin_getCursorNumber(self,&head_63,&tail_64);
        # 1315 "10edit.nc"
        if(head_63!=-1&&tail_64!=-1) {
            # 1303 "10edit.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            number_string_65=(char* )come_increment_ref_count(wstring_to_string(((int* )(__right_value0=wstring_substring(line_62,head_63,tail_64)))), "10edit.nc", 1303, 257);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1303, 258));
            # 1305 "10edit.nc"
            n_66=atoi(number_string_65);
            # 1307 "10edit.nc"
            n_66++;
            # 1309 "10edit.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __right_value3 = (void*)0;
            new_line_67=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value2=xsprintf("%ls%d%ls",((int* )(__right_value0=wstring_substring(line_62,0,head_63))),n_66,((int* )(__right_value1=wstring_substring(line_62,tail_64,-1))))))), "10edit.nc", 1309, 259);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1309, 260));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1309, 261));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1309, 262));
            # 1311 "10edit.nc"
            list$1int$ph_replace(self->texts,self->scroll+self->cursorY,(int* )come_increment_ref_count(new_line_67, "10edit.nc", 1311, 263));
            # 1312 "10edit.nc"
            list$1int$_replace(self->texts_length,self->scroll+self->cursorY,wcslen(new_line_67));
            (number_string_65 = come_decrement_ref_count(number_string_65, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1315, 264));
            (new_line_67 = come_decrement_ref_count(new_line_67, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1315, 265));
        }
        # 1315 "10edit.nc"
        ViWin_modifyOverCursorXValue(self);
        (line_62 = come_decrement_ref_count(line_62, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1317, 266));
    }
    neo_current_frame = fr.prev;
}

void ViWin_replaceCursorCharactor(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_replaceCursorCharactor"; neo_current_frame = &fr;
    int key;
    void* __right_value0 = (void*)0;
    int*  line  ;
    memset(&key, 0, sizeof(key));
    memset(&line, 0, sizeof(line));
    # 1321 "10edit.nc"
    ViWin_pushUndo_v5(self);
    # 1323 "10edit.nc"
    key=ViWin_getKey_v14(self,(_Bool)0);
    # 1339 "10edit.nc"
    line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 1339, 267);
    # 1340 "10edit.nc"
    line[self->cursorX]=(int )key;
    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1344, 268));
    neo_current_frame = fr.prev;
}

void ViWin_deleteUntilTail(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_deleteUntilTail"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  line  ;
    int num;
    int i;
    int*  line_68  ;
    int*  line_69  ;
    memset(&line, 0, sizeof(line));
    memset(&num, 0, sizeof(num));
    memset(&i, 0, sizeof(i));
    memset(&line_68, 0, sizeof(line_68));
    memset(&line_69, 0, sizeof(line_69));
    # 1346 "10edit.nc"
    ViWin_pushUndo_v5(self);
    # 1377 "10edit.nc"
    if(self->digitInput>0) {
        # 1349 "10edit.nc"
        line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 1349, 269);
        # 1351 "10edit.nc"
        __right_value0 = (void*)0;
        ((int* )(__right_value0=wstring_delete(line,self->cursorX,-1)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1351, 270));
        # 1353 "10edit.nc"
        num=self->digitInput+1;
        # 1367 "10edit.nc"
        for(i=1        ;i<num;i++){
            # 1356 "10edit.nc"
            __right_value0 = (void*)0;
            line_68=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY+1,((void*)0)), "10edit.nc", 1356, 271);
            # 1365 "10edit.nc"
            if(line_68!=((void*)0)) {
                # 1359 "10edit.nc"
                list$1int$ph_delete(self->texts,self->scroll+self->cursorY+1,self->scroll+self->cursorY+1+1);
                # 1360 "10edit.nc"
                list$1int$_delete(self->texts_length,self->scroll+self->cursorY+1,self->scroll+self->cursorY+1+1);
                # 1362 "10edit.nc"
                ViWin_modifyCursorOnDeleting(self);
            }
            (line_68 = come_decrement_ref_count(line_68, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1367, 272));
        }
        # 1367 "10edit.nc"
        ViWin_modifyOverCursorXValue(self);
        # 1369 "10edit.nc"
        self->digitInput=0;
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1377, 273));
    }
    else {
        # 1372 "10edit.nc"
        __right_value0 = (void*)0;
        line_69=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 1372, 274);
        # 1373 "10edit.nc"
        __right_value0 = (void*)0;
        ((int* )(__right_value0=wstring_delete(line_69,self->cursorX,-1)));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1373, 275));
        # 1375 "10edit.nc"
        ViWin_modifyOverCursorXValue(self);
        (line_69 = come_decrement_ref_count(line_69, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1377, 276));
    }
    neo_current_frame = fr.prev;
}

void ViWin_joinLines(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_joinLines"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  line  ;
    int*  next_line  ;
    void* __right_value1 = (void*)0;
    int*  line2  ;
    memset(&line, 0, sizeof(line));
    memset(&next_line, 0, sizeof(next_line));
    memset(&line2, 0, sizeof(line2));
    # 1381 "10edit.nc"
    ViWin_pushUndo_v5(self);
    # 1396 "10edit.nc"
    if(self->scroll+self->cursorY+1<list$1int$ph_length(self->texts)) {
        # 1384 "10edit.nc"
        line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 1384, 277);
        # 1385 "10edit.nc"
        __right_value0 = (void*)0;
        next_line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY+1,((void*)0)), "10edit.nc", 1385, 278);
        # 1387 "10edit.nc"
        __right_value0 = (void*)0;
        line2=(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value0=xsprintf("%ls %ls",line,next_line)))), "10edit.nc", 1387, 279);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1387, 280));
        # 1389 "10edit.nc"
        list$1int$ph_replace(self->texts,self->scroll+self->cursorY,(int* )come_increment_ref_count(line2, "10edit.nc", 1389, 281));
        # 1390 "10edit.nc"
        list$1int$_replace(self->texts_length,self->scroll+self->cursorY,wcslen(line2));
        # 1391 "10edit.nc"
        list$1int$ph_delete(self->texts,self->scroll+self->cursorY+1,self->scroll+self->cursorY+1+1);
        # 1392 "10edit.nc"
        list$1int$_delete(self->texts_length,self->scroll+self->cursorY+1,self->scroll+self->cursorY+1+1);
        # 1393 "10edit.nc"
        list$1int$_delete(self->texts_length,self->scroll+self->cursorY+1,self->scroll+self->cursorY+1+1);
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1396, 282));
        (next_line = come_decrement_ref_count(next_line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1396, 283));
        (line2 = come_decrement_ref_count(line2, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1396, 284));
    }
    # 1396 "10edit.nc"
    ViWin_modifyOverCursorXValue(self);
    neo_current_frame = fr.prev;
}

void ViWin_yankOneLine(struct ViWin*  self  , struct Vi*  nvi  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_yankOneLine"; neo_current_frame = &fr;
    int i;
    void* __right_value0 = (void*)0;
    int*  line  ;
    int*  line_70  ;
    memset(&i, 0, sizeof(i));
    memset(&line, 0, sizeof(line));
    memset(&line_70, 0, sizeof(line_70));
    # 1430 "10edit.nc"
    if(self->digitInput>0) {
        # 1402 "10edit.nc"
        ViWin_pushUndo_v5(self);
        # 1404 "10edit.nc"
        list$1int$ph_reset(nvi->yank);
        # 1405 "10edit.nc"
        nvi->yankKind=(0);
        # 1416 "10edit.nc"
        for(i=0        ;i<self->digitInput+1;i++){
            # 1408 "10edit.nc"
            line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY+i,((void*)0)), "10edit.nc", 1408, 285);
            # 1414 "10edit.nc"
            if(line!=((void*)0)) {
                # 1411 "10edit.nc"
                __right_value0 = (void*)0;
                list$1int$ph_push_back(nvi->yank,(int* )come_increment_ref_count((int* )come_memdup(line, "10edit.nc", 1411, 286, "int* "), "10edit.nc", 1411, 287));
            }
            (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1416, 288));
        }
        # 1416 "10edit.nc"
        self->digitInput=0;
        # 1417 "10edit.nc"
        ViWin_saveYankToFile(self,nvi);
    }
    else {
        # 1420 "10edit.nc"
        __right_value0 = (void*)0;
        line_70=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 1420, 289);
        # 1429 "10edit.nc"
        if(line_70!=((void*)0)) {
            # 1423 "10edit.nc"
            ViWin_pushUndo_v5(self);
            # 1424 "10edit.nc"
            list$1int$ph_reset(nvi->yank);
            # 1425 "10edit.nc"
            __right_value0 = (void*)0;
            list$1int$ph_push_back(nvi->yank,(int* )come_increment_ref_count((int* )come_memdup(line_70, "10edit.nc", 1425, 290, "int* "), "10edit.nc", 1425, 291));
            # 1426 "10edit.nc"
            nvi->yankKind=(0);
            # 1427 "10edit.nc"
            ViWin_saveYankToFile(self,nvi);
        }
        (line_70 = come_decrement_ref_count(line_70, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1430, 292));
    }
    neo_current_frame = fr.prev;
}

void ViWin_joinLines2_v10(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_joinLines2_v10"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  line  ;
    void* __right_value1 = (void*)0;
    int*  next_line  ;
    memset(&line, 0, sizeof(line));
    memset(&next_line, 0, sizeof(next_line));
    # 1434 "10edit.nc"
    ViWin_pushUndo_v5(self);
    # 1446 "10edit.nc"
    if(self->scroll+self->cursorY+1<list$1int$ph_length(self->texts)) {
        # 1437 "10edit.nc"
        line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 1437, 293);
        # 1438 "10edit.nc"
        __right_value0 = (void*)0;
        next_line=(int* )come_increment_ref_count((int* )come_memdup(((int* )(__right_value0=list$1int$ph_item(self->texts,self->scroll+self->cursorY+1,((void*)0)))), "10edit.nc", 1438, 294, "int* "), "10edit.nc", 1438, 295);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1438, 296));
        # 1440 "10edit.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1int$ph_replace(self->texts,self->scroll+self->cursorY,(int* )come_increment_ref_count(string_to_wstring(((char* )(__right_value0=xsprintf("%ls%ls",line,next_line)))), "10edit.nc", 1440, 297));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1440, 298));
        # 1441 "10edit.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1int$_replace(self->texts_length,self->scroll+self->cursorY,wcslen(((int* )(__right_value1=string_to_wstring(((char* )(__right_value0=xsprintf("%ls%ls",line,next_line))))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1441, 299));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1441, 300));
        # 1442 "10edit.nc"
        list$1int$ph_delete(self->texts,self->scroll+self->cursorY+1,self->scroll+self->cursorY+1+1);
        # 1443 "10edit.nc"
        list$1int$_delete(self->texts_length,self->scroll+self->cursorY+1,self->scroll+self->cursorY+1+1);
        (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1446, 301));
        (next_line = come_decrement_ref_count(next_line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1446, 302));
    }
    # 1446 "10edit.nc"
    ViWin_modifyOverCursorXValue(self);
    neo_current_frame = fr.prev;
}

void ViWin_forwardToNextCharacter1(struct ViWin*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_forwardToNextCharacter1"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  line  ;
    int i;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    int cursor_x;
    int cursor_x_71;
    memset(&line, 0, sizeof(line));
    memset(&i, 0, sizeof(i));
    memset(&cursor_x, 0, sizeof(cursor_x));
    memset(&cursor_x_71, 0, sizeof(cursor_x_71));
    # 1451 "10edit.nc"
    self->mRepeatFowardNextCharacterKind=(1);
    # 1452 "10edit.nc"
    self->mRepeatFowardNextCharacter=key;
    # 1454 "10edit.nc"
    line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 1454, 303);
    # 1478 "10edit.nc"
    if(self->digitInput>0) {
        # 1469 "10edit.nc"
        for(i=0        ;i<self->digitInput+1;i++){
            # 1458 "10edit.nc"
            __right_value0 = (void*)0;
            cursor_x=wstring_index(((int* )(__right_value0=wstring_substring(line,self->cursorX+1,-1))),((int* )(__right_value2=string_to_wstring(((char* )(__right_value1=xsprintf("%c",key)))))),-1);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1458, 304));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1458, 305));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1458, 306));
            # 1467 "10edit.nc"
            if(cursor_x!=-1) {
                # 1461 "10edit.nc"
                self->cursorX+=cursor_x+1;
            }
            else {
                # 1464 "10edit.nc"
                break;
            }
        }
        # 1469 "10edit.nc"
        self->digitInput=0;
    }
    else {
        # 1472 "10edit.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        cursor_x_71=wstring_index(((int* )(__right_value0=wstring_substring(line,self->cursorX+1,-1))),((int* )(__right_value2=string_to_wstring(((char* )(__right_value1=xsprintf("%c",key)))))),-1);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1472, 307));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1472, 308));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1472, 309));
        # 1477 "10edit.nc"
        if(cursor_x_71!=-1) {
            # 1475 "10edit.nc"
            self->cursorX+=cursor_x_71+1;
        }
    }
    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1480, 310));
    neo_current_frame = fr.prev;
}

void ViWin_forwardToNextCharacter2(struct ViWin*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_forwardToNextCharacter2"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  line  ;
    int i;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    int cursor_x;
    int cursor_x_72;
    memset(&line, 0, sizeof(line));
    memset(&i, 0, sizeof(i));
    memset(&cursor_x, 0, sizeof(cursor_x));
    memset(&cursor_x_72, 0, sizeof(cursor_x_72));
    # 1482 "10edit.nc"
    self->mRepeatFowardNextCharacterKind=(2);
    # 1483 "10edit.nc"
    self->mRepeatFowardNextCharacter=key;
    # 1485 "10edit.nc"
    line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 1485, 311);
    # 1509 "10edit.nc"
    if(self->digitInput>0) {
        # 1500 "10edit.nc"
        for(i=0        ;i<self->digitInput+1;i++){
            # 1489 "10edit.nc"
            __right_value0 = (void*)0;
            cursor_x=wstring_index(((int* )(__right_value0=wstring_substring(line,self->cursorX+2,-1))),((int* )(__right_value2=string_to_wstring(((char* )(__right_value1=xsprintf("%c",key)))))),-1);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1489, 312));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1489, 313));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1489, 314));
            # 1498 "10edit.nc"
            if(cursor_x!=-1) {
                # 1492 "10edit.nc"
                self->cursorX+=cursor_x+1;
            }
            else {
                # 1495 "10edit.nc"
                break;
            }
        }
        # 1500 "10edit.nc"
        self->digitInput=0;
    }
    else {
        # 1503 "10edit.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        cursor_x_72=wstring_index(((int* )(__right_value0=wstring_substring(line,self->cursorX+1,-1))),((int* )(__right_value2=string_to_wstring(((char* )(__right_value1=xsprintf("%c",key)))))),-1);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1503, 315));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1503, 316));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1503, 317));
        # 1508 "10edit.nc"
        if(cursor_x_72!=-1) {
            # 1506 "10edit.nc"
            self->cursorX+=cursor_x_72;
        }
    }
    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1511, 318));
    neo_current_frame = fr.prev;
}

void ViWin_repeatForwardNextCharacter(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_repeatForwardNextCharacter"; neo_current_frame = &fr;
    # 1523 "10edit.nc"
    switch (    self->mRepeatFowardNextCharacterKind) {
        # 1515 "10edit.nc"
        case (1):
        # 1515 "10edit.nc"
        ViWin_forwardToNextCharacter1(self,self->mRepeatFowardNextCharacter);
        # 1516 "10edit.nc"
        break;
        # 1519 "10edit.nc"
        case (2):
        # 1519 "10edit.nc"
        self->cursorX++;
        # 1520 "10edit.nc"
        ViWin_forwardToNextCharacter2(self,self->mRepeatFowardNextCharacter);
        # 1521 "10edit.nc"
        break;
    }
    neo_current_frame = fr.prev;
}

void ViWin_backwardToNextCharacter1(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_backwardToNextCharacter1"; neo_current_frame = &fr;
    int key;
    void* __right_value0 = (void*)0;
    int*  line  ;
    int i;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    int cursor_x;
    int cursor_x_73;
    memset(&key, 0, sizeof(key));
    memset(&line, 0, sizeof(line));
    memset(&i, 0, sizeof(i));
    memset(&cursor_x, 0, sizeof(cursor_x));
    memset(&cursor_x_73, 0, sizeof(cursor_x_73));
    # 1527 "10edit.nc"
    key=ViWin_getKey_v14(self,(_Bool)0);
    # 1529 "10edit.nc"
    line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 1529, 319);
    # 1553 "10edit.nc"
    if(self->digitInput>0) {
        # 1544 "10edit.nc"
        for(i=0        ;i<self->digitInput+1;i++){
            # 1533 "10edit.nc"
            __right_value0 = (void*)0;
            cursor_x=wstring_rindex(((int* )(__right_value0=wstring_substring(line,0,self->cursorX))),((int* )(__right_value2=string_to_wstring(((char* )(__right_value1=xsprintf("%c",key)))))),-1);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1533, 320));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1533, 321));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1533, 322));
            # 1542 "10edit.nc"
            if(cursor_x!=-1) {
                # 1536 "10edit.nc"
                self->cursorX=cursor_x;
            }
            else {
                # 1539 "10edit.nc"
                break;
            }
        }
        # 1544 "10edit.nc"
        self->digitInput=0;
    }
    else {
        # 1547 "10edit.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        cursor_x_73=wstring_rindex(((int* )(__right_value0=wstring_substring(line,0,self->cursorX))),((int* )(__right_value2=string_to_wstring(((char* )(__right_value1=xsprintf("%c",key)))))),-1);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1547, 323));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1547, 324));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1547, 325));
        # 1552 "10edit.nc"
        if(cursor_x_73!=-1) {
            # 1550 "10edit.nc"
            self->cursorX=cursor_x_73;
        }
    }
    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1555, 326));
    neo_current_frame = fr.prev;
}

void ViWin_backwardToNextCharacter2(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_backwardToNextCharacter2"; neo_current_frame = &fr;
    int key;
    void* __right_value0 = (void*)0;
    int*  line  ;
    int i;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    int cursor_x;
    int cursor_x_74;
    memset(&key, 0, sizeof(key));
    memset(&line, 0, sizeof(line));
    memset(&i, 0, sizeof(i));
    memset(&cursor_x, 0, sizeof(cursor_x));
    memset(&cursor_x_74, 0, sizeof(cursor_x_74));
    # 1557 "10edit.nc"
    key=ViWin_getKey_v14(self,(_Bool)0);
    # 1559 "10edit.nc"
    line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 1559, 327);
    # 1583 "10edit.nc"
    if(self->digitInput>0) {
        # 1574 "10edit.nc"
        for(i=0        ;i<self->digitInput+1;i++){
            # 1563 "10edit.nc"
            __right_value0 = (void*)0;
            cursor_x=wstring_rindex(((int* )(__right_value0=wstring_substring(line,0,self->cursorX-1))),((int* )(__right_value2=string_to_wstring(((char* )(__right_value1=xsprintf("%c",key)))))),-1);
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1563, 328));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1563, 329));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1563, 330));
            # 1572 "10edit.nc"
            if(cursor_x!=-1) {
                # 1566 "10edit.nc"
                self->cursorX=cursor_x+1;
            }
            else {
                # 1569 "10edit.nc"
                break;
            }
        }
        # 1574 "10edit.nc"
        self->digitInput=0;
    }
    else {
        # 1577 "10edit.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        cursor_x_74=wstring_rindex(((int* )(__right_value0=wstring_substring(line,0,self->cursorX))),((int* )(__right_value2=string_to_wstring(((char* )(__right_value1=xsprintf("%c",key)))))),-1);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1577, 331));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1577, 332));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "10edit.nc", 1577, 333));
        # 1582 "10edit.nc"
        if(cursor_x_74!=-1) {
            # 1580 "10edit.nc"
            self->cursorX=cursor_x_74+1;
        }
    }
    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1585, 334));
    neo_current_frame = fr.prev;
}

void ViWin_changeCase(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_changeCase"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  line  ;
    int i;
    int  c  ;
    int  c2  ;
    int  c2_75  ;
    int  c_76  ;
    int  c2_77  ;
    int  c2_78  ;
    memset(&line, 0, sizeof(line));
    memset(&i, 0, sizeof(i));
    memset(&c, 0, sizeof(c));
    memset(&c2, 0, sizeof(c2));
    memset(&c2_75, 0, sizeof(c2_75));
    memset(&c_76, 0, sizeof(c_76));
    memset(&c2_77, 0, sizeof(c2_77));
    memset(&c2_78, 0, sizeof(c2_78));
    # 1587 "10edit.nc"
    ViWin_pushUndo_v5(self);
    # 1589 "10edit.nc"
    line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 1589, 335);
    # 1631 "10edit.nc"
    if(self->digitInput>0) {
        # 1613 "10edit.nc"
        for(i=0        ;i<self->digitInput+1;i++){
            # 1593 "10edit.nc"
            c=line[self->cursorX+i];
            # 1611 "10edit.nc"
            if(c!=-1) {
                # 1606 "10edit.nc"
                if(c>=97&&c<=122) {
                    # 1597 "10edit.nc"
                    c2=c-97+65;
                    # 1599 "10edit.nc"
                    line[self->cursorX+i]=c2;
                }
                else if(c>=65&&c<=90) {
                    # 1602 "10edit.nc"
                    c2_75=c-65+97;
                    # 1604 "10edit.nc"
                    line[self->cursorX+i]=c2_75;
                }
            }
            else {
                # 1608 "10edit.nc"
                break;
            }
        }
        # 1613 "10edit.nc"
        self->digitInput=0;
    }
    else {
        # 1616 "10edit.nc"
        c_76=line[self->cursorX];
        # 1630 "10edit.nc"
        if(c_76!=-1) {
            # 1629 "10edit.nc"
            if(c_76>=97&&c_76<=122) {
                # 1620 "10edit.nc"
                c2_77=c_76-97+65;
                # 1622 "10edit.nc"
                line[self->cursorX]=c2_77;
            }
            else if(c_76>=65&&c_76<=90) {
                # 1625 "10edit.nc"
                c2_78=c_76-65+97;
                # 1627 "10edit.nc"
                line[self->cursorX]=c2_78;
            }
        }
    }
    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1633, 336));
    neo_current_frame = fr.prev;
}

void ViWin_moveToHead(struct ViWin*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ViWin_moveToHead"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  line  ;
    int i;
    memset(&line, 0, sizeof(line));
    memset(&i, 0, sizeof(i));
    # 1635 "10edit.nc"
    line=(int* )come_increment_ref_count(list$1int$ph_item(self->texts,self->scroll+self->cursorY,((void*)0)), "10edit.nc", 1635, 337);
    # 1637 "10edit.nc"
    # 1644 "10edit.nc"
    for(i=0    ;i<wstring_length(line);i++){
        # 1642 "10edit.nc"
        if(!(line[i]==32&&line[i]==9)) {
            # 1640 "10edit.nc"
            break;
        }
    }
    # 1644 "10edit.nc"
    self->cursorX=i;
    (line = come_decrement_ref_count(line, (void*)0, (void*)0, 0, 0, (void*)0, "10edit.nc", 1647, 338));
    neo_current_frame = fr.prev;
}

static void lambda1(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda1"; neo_current_frame = &fr;
    # 1652 "10edit.nc"
    run_operator_pending(self,(0));
    neo_current_frame = fr.prev;
}

static void lambda2(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda2"; neo_current_frame = &fr;
    # 1656 "10edit.nc"
    run_operator_pending(self,(1));
    neo_current_frame = fr.prev;
}

static void lambda3(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda3"; neo_current_frame = &fr;
    # 1659 "10edit.nc"
    run_operator_pending(self,(2));
    neo_current_frame = fr.prev;
}

static void lambda4(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda4"; neo_current_frame = &fr;
    # 1662 "10edit.nc"
    ViWin_yankOneLine(self->activeWin,self);
    neo_current_frame = fr.prev;
}

static void lambda5(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda5"; neo_current_frame = &fr;
    # 1665 "10edit.nc"
    ViWin_deleteUntilTail(self->activeWin);
    # 1666 "10edit.nc"
    self->activeWin->writed=(_Bool)1;
    # 1668 "10edit.nc"
    ViWin_saveInputedKey_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

static void lambda6(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda6"; neo_current_frame = &fr;
    # 1672 "10edit.nc"
    ViWin_deleteUntilTail(self->activeWin);
    # 1673 "10edit.nc"
    Vi_enterInsertMode_v5(self);
    # 1677 "10edit.nc"
    if(list$1int$ph_length(self->activeWin->texts)!=0) {
        # 1675 "10edit.nc"
        self->activeWin->cursorX++;
    }
    # 1677 "10edit.nc"
    self->activeWin->writed=(_Bool)1;
    neo_current_frame = fr.prev;
}

static void lambda7(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda7"; neo_current_frame = &fr;
    # 1680 "10edit.nc"
    ViWin_deleteCursorCharactor(self->activeWin);
    # 1681 "10edit.nc"
    self->activeWin->writed=(_Bool)1;
    # 1683 "10edit.nc"
    ViWin_saveInputedKey_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

static void lambda8(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda8"; neo_current_frame = &fr;
    # 1686 "10edit.nc"
    ViWin_deleteBack(self->activeWin);
    # 1687 "10edit.nc"
    self->activeWin->writed=(_Bool)1;
    # 1689 "10edit.nc"
    ViWin_saveInputedKey_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

static void lambda9(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda9"; neo_current_frame = &fr;
    # 1700 "10edit.nc"
    ViWin_replaceCursorCharactor(self->activeWin);
    # 1701 "10edit.nc"
    self->activeWin->writed=(_Bool)1;
    # 1703 "10edit.nc"
    ViWin_saveInputedKey_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

static void lambda10(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda10"; neo_current_frame = &fr;
    # 1706 "10edit.nc"
    ViWin_replaceCursorCharactor(self->activeWin);
    # 1707 "10edit.nc"
    self->activeWin->writed=(_Bool)1;
    # 1708 "10edit.nc"
    Vi_enterInsertMode_v5(self);
    neo_current_frame = fr.prev;
}

static void lambda11(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda11"; neo_current_frame = &fr;
    # 1711 "10edit.nc"
    ViWin_moveToHead(self->activeWin);
    # 1712 "10edit.nc"
    ViWin_deleteUntilTail(self->activeWin);
    # 1713 "10edit.nc"
    self->activeWin->writed=(_Bool)1;
    # 1714 "10edit.nc"
    Vi_enterInsertMode_v5(self);
    # 1718 "10edit.nc"
    if(self->activeWin->cursorX!=0) {
        # 1716 "10edit.nc"
        self->activeWin->cursorX++;
    }
    neo_current_frame = fr.prev;
}

static void lambda12(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda12"; neo_current_frame = &fr;
    # 1720 "10edit.nc"
    ViWin_joinLines(self->activeWin);
    # 1721 "10edit.nc"
    self->activeWin->writed=(_Bool)1;
    # 1723 "10edit.nc"
    ViWin_saveInputedKey_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

static void lambda13(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda13"; neo_current_frame = &fr;
    # 1726 "10edit.nc"
    ViWin_changeCase(self->activeWin);
    # 1728 "10edit.nc"
    ViWin_saveInputedKey_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

static void lambda14(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda14"; neo_current_frame = &fr;
    int key2;
    memset(&key2, 0, sizeof(key2));
    # 1731 "10edit.nc"
    key2=ViWin_getKey_v14(self->activeWin,(_Bool)0);
    # 1733 "10edit.nc"
    ViWin_forwardToNextCharacter1(self->activeWin,key2);
    # 1735 "10edit.nc"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

static void lambda15(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda15"; neo_current_frame = &fr;
    int key2;
    memset(&key2, 0, sizeof(key2));
    # 1738 "10edit.nc"
    key2=ViWin_getKey_v14(self->activeWin,(_Bool)0);
    # 1740 "10edit.nc"
    ViWin_forwardToNextCharacter2(self->activeWin,key2);
    # 1742 "10edit.nc"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

static void lambda16(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda16"; neo_current_frame = &fr;
    # 1745 "10edit.nc"
    ViWin_repeatForwardNextCharacter(self->activeWin);
    # 1747 "10edit.nc"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

static void lambda17(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda17"; neo_current_frame = &fr;
    # 1750 "10edit.nc"
    ViWin_backwardToNextCharacter1(self->activeWin);
    # 1752 "10edit.nc"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

static void lambda18(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda18"; neo_current_frame = &fr;
    # 1755 "10edit.nc"
    ViWin_backwardToNextCharacter2(self->activeWin);
    # 1757 "10edit.nc"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

static void lambda19(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda19"; neo_current_frame = &fr;
    # 1767 "10edit.nc"
    ViWin_moveToHead(self->activeWin);
    # 1769 "10edit.nc"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

static void lambda20(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda20"; neo_current_frame = &fr;
    # 1772 "10edit.nc"
    ViWin_moveToHead(self->activeWin);
    # 1774 "10edit.nc"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

static void lambda21(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda21"; neo_current_frame = &fr;
    # 1777 "10edit.nc"
    self->activeWin->cursorX=0;
    # 1778 "10edit.nc"
    self->activeWin->cursorY=0;
    # 1780 "10edit.nc"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

static void lambda22(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda22"; neo_current_frame = &fr;
    # 1783 "10edit.nc"
    self->activeWin->cursorY=self->activeWin->height-2;
    # 1784 "10edit.nc"
    ViWin_modifyOverCursorYValue(self->activeWin);
    # 1786 "10edit.nc"
    ViWin_moveToHead(self->activeWin);
    # 1788 "10edit.nc"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

static void lambda23(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda23"; neo_current_frame = &fr;
    # 1791 "10edit.nc"
    self->activeWin->cursorY++;
    # 1792 "10edit.nc"
    ViWin_modifyOverCursorYValue(self->activeWin);
    # 1793 "10edit.nc"
    ViWin_moveToHead(self->activeWin);
    # 1795 "10edit.nc"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

static void lambda24(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda24"; neo_current_frame = &fr;
    # 1798 "10edit.nc"
    self->activeWin->scroll--;
    # 1803 "10edit.nc"
    if(self->activeWin->scroll<0) {
        # 1800 "10edit.nc"
        self->activeWin->scroll=0;
    }
    # 1803 "10edit.nc"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

static void lambda25(struct Vi*  self  , int key)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda25"; neo_current_frame = &fr;
    # 1830 "10edit.nc"
    if(self->activeWin->digitInput>0) {
        # 1820 "10edit.nc"
        self->activeWin->cursorY+=self->activeWin->digitInput;
        # 1821 "10edit.nc"
        ViWin_modifyOverCursorYValue(self->activeWin);
        # 1823 "10edit.nc"
        self->activeWin->digitInput=0;
        # 1824 "10edit.nc"
        ViWin_moveAtTail(self->activeWin);
    }
    else {
        # 1827 "10edit.nc"
        ViWin_moveAtTail(self->activeWin);
    }
    # 1830 "10edit.nc"
    ViWin_saveInputedKeyOnTheMovingCursor_v14(self->activeWin);
    neo_current_frame = fr.prev;
}

struct Vi*  Vi_initialize_v10(struct Vi*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "Vi_initialize_v10"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct Vi*  result  ;
    struct Vi*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    # 1649 "10edit.nc"
    result=(struct Vi* )come_increment_ref_count(Vi_initialize_v9((struct Vi* )come_increment_ref_count(self, "10edit.nc", 1649, 339)), "10edit.nc", 1649, 340);
    # 1653 "10edit.nc"
    list$1lambda$_replace(result->events,100,lambda1);
    # 1657 "10edit.nc"
    list$1lambda$_replace(result->events,99,lambda2);
    # 1660 "10edit.nc"
    list$1lambda$_replace(result->events,121,lambda3);
    # 1663 "10edit.nc"
    list$1lambda$_replace(result->events,89,lambda4);
    # 1669 "10edit.nc"
    list$1lambda$_replace(result->events,68,lambda5);
    # 1678 "10edit.nc"
    list$1lambda$_replace(result->events,67,lambda6);
    # 1684 "10edit.nc"
    list$1lambda$_replace(result->events,120,lambda7);
    # 1690 "10edit.nc"
    list$1lambda$_replace(result->events,88,lambda8);
    # 1704 "10edit.nc"
    list$1lambda$_replace(result->events,114,lambda9);
    # 1709 "10edit.nc"
    list$1lambda$_replace(result->events,115,lambda10);
    # 1718 "10edit.nc"
    list$1lambda$_replace(result->events,83,lambda11);
    # 1724 "10edit.nc"
    list$1lambda$_replace(result->events,74,lambda12);
    # 1729 "10edit.nc"
    list$1lambda$_replace(result->events,126,lambda13);
    # 1736 "10edit.nc"
    list$1lambda$_replace(result->events,102,lambda14);
    # 1743 "10edit.nc"
    list$1lambda$_replace(result->events,116,lambda15);
    # 1748 "10edit.nc"
    list$1lambda$_replace(result->events,59,lambda16);
    # 1753 "10edit.nc"
    list$1lambda$_replace(result->events,70,lambda17);
    # 1758 "10edit.nc"
    list$1lambda$_replace(result->events,84,lambda18);
    # 1770 "10edit.nc"
    list$1lambda$_replace(result->events,45,lambda19);
    # 1775 "10edit.nc"
    list$1lambda$_replace(result->events,95,lambda20);
    # 1781 "10edit.nc"
    list$1lambda$_replace(result->events,72,lambda21);
    # 1789 "10edit.nc"
    list$1lambda$_replace(result->events,76,lambda22);
    # 1796 "10edit.nc"
    list$1lambda$_replace(result->events,43,lambda23);
    # 1804 "10edit.nc"
    list$1lambda$_replace(result->events,89-65+1,lambda24);
    # 1831 "10edit.nc"
    list$1lambda$_replace(self->events,69-65+1,lambda25);
    # 1833 "10edit.nc"
        __result_obj__0 = (struct Vi* )come_increment_ref_count(result, "10edit.nc", 1833, 347);
    come_call_finalizer(Vi_finalize, self, (void*)0, (void*)0, 0, 0, 0, (void*)0, "10edit.nc}", 1833, 367);
    come_call_finalizer(Vi_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10edit.nc}", 1833, 368);
    neo_current_frame = fr.prev;
    come_call_finalizer(Vi_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "10edit.nc}", 1833, 369);
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
    int i_81;
    memset(&len, 0, sizeof(len));
    memset(&i, 0, sizeof(i));
    memset(&it, 0, sizeof(it));
    memset(&i_81, 0, sizeof(i_81));
    # 2027 "/usr/local/include/neo-c.h"
    # 2033 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 2030 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2036 "/usr/local/include/neo-c.h"
    if(position<0) {
        # 2034 "/usr/local/include/neo-c.h"
        position+=self->len;
    }
    # 2040 "/usr/local/include/neo-c.h"
    if(position<0) {
        # 2037 "/usr/local/include/neo-c.h"
        position=0;
    }
    # 2051 "/usr/local/include/neo-c.h"
    if(self->len==0||position>=self->len) {
        # 2041 "/usr/local/include/neo-c.h"
        len=self->len;
        # 2047 "/usr/local/include/neo-c.h"
        for(i=0        ;i<position-len;i++){
            # 2043 "/usr/local/include/neo-c.h"
            # 2044 "/usr/local/include/neo-c.h"
            memset(&default_value,0,sizeof(void (*)(struct Vi* ,int)));
            # 2045 "/usr/local/include/neo-c.h"
            list$1lambda$_push_back(self,default_value);
        }
        # 2047 "/usr/local/include/neo-c.h"
        list$1lambda$_push_back(self,item);
        # 2048 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 2051 "/usr/local/include/neo-c.h"
    it=self->head;
    # 2052 "/usr/local/include/neo-c.h"
    i_81=0;
    # 2062 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 2058 "/usr/local/include/neo-c.h"
        if(position==i_81) {
            # 2055 "/usr/local/include/neo-c.h"
            it->item=item;
            # 2056 "/usr/local/include/neo-c.h"
            break;
        }
        # 2058 "/usr/local/include/neo-c.h"
        it=it->next;
        # 2059 "/usr/local/include/neo-c.h"
        i_81++;
    }
    # 2062 "/usr/local/include/neo-c.h"
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
    struct list_item$1lambda$* litem_79;
    struct list_item$1lambda$* litem_80;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_79, 0, sizeof(litem_79));
    memset(&litem_80, 0, sizeof(litem_80));
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
        litem=(struct list_item$1lambda$*)come_increment_ref_count(((struct list_item$1lambda$*)(__right_value0=(struct list_item$1lambda$*)come_calloc(1, sizeof(struct list_item$1lambda$)*(1), "/usr/local/include/neo-c.h", 1619, 341, "struct list_item$1lambda$*"))), "/usr/local/include/neo-c.h", 1619, 342);
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
        litem_79=(struct list_item$1lambda$*)come_increment_ref_count(((struct list_item$1lambda$*)(__right_value0=(struct list_item$1lambda$*)come_calloc(1, sizeof(struct list_item$1lambda$)*(1), "/usr/local/include/neo-c.h", 1629, 343, "struct list_item$1lambda$*"))), "/usr/local/include/neo-c.h", 1629, 344);
        # 1631 "/usr/local/include/neo-c.h"
        litem_79->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_79->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        litem_79->item=item;
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_79;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_79;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_80=(struct list_item$1lambda$*)come_increment_ref_count(((struct list_item$1lambda$*)(__right_value0=(struct list_item$1lambda$*)come_calloc(1, sizeof(struct list_item$1lambda$)*(1), "/usr/local/include/neo-c.h", 1639, 345, "struct list_item$1lambda$*"))), "/usr/local/include/neo-c.h", 1639, 346);
        # 1641 "/usr/local/include/neo-c.h"
        litem_80->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_80->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        litem_80->item=item;
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_80;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_80;
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
        come_call_finalizer(list$1ViWin$ph$p_finalize, self->wins, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 8, 350);
    }
    # 4 "Vi_finalize"
    if(self!=((void*)0)&&self->events!=((void*)0)) {
        # 3 "Vi_finalize"
        come_call_finalizer(list$1lambda$$p_finalize, self->events, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 2, 352);
    }
    # 5 "Vi_finalize"
    if(self!=((void*)0)&&self->yank!=((void*)0)) {
        # 4 "Vi_finalize"
        come_call_finalizer(list$1int$ph$p_finalize, self->yank, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 4, 353);
    }
    # 6 "Vi_finalize"
    if(self!=((void*)0)&&self->fileYank!=((void*)0)) {
        # 5 "Vi_finalize"
        come_call_finalizer(list$1int$ph$p_finalize, self->fileYank, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 5, 354);
    }
    # 7 "Vi_finalize"
    if(self!=((void*)0)&&self->registers!=((void*)0)) {
        # 6 "Vi_finalize"
        come_call_finalizer(map$2int$list$1int$ph$ph$p_finalize, self->registers, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 0, 359);
    }
    # 8 "Vi_finalize"
    if(self!=((void*)0)&&self->registerKinds!=((void*)0)) {
        # 7 "Vi_finalize"
        come_call_finalizer(map$2int$int$$p_finalize, self->registerKinds, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 0, 363);
    }
    # 9 "Vi_finalize"
    if(self!=((void*)0)&&self->commandHistory!=((void*)0)) {
        # 8 "Vi_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->commandHistory, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 0, 366);
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
        come_call_finalizer(list_item$1ViWin$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 349);
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
        come_call_finalizer(ViWin_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1ViWin$ph$p_finalize}", 2, 348);
    }
            neo_current_frame = fr.prev;
}

static void list$1lambda$$p_finalize(struct list$1lambda$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1lambda$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1lambda$* it;
    struct list_item$1lambda$* prev_it;
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
        come_call_finalizer(list_item$1lambda$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 351);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1lambda$$p_finalize(struct list_item$1lambda$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1lambda$$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1lambda$$p_finalize"
            neo_current_frame = fr.prev;
}

static void map$2int$list$1int$ph$ph$p_finalize(struct map$2int$list$1int$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$list$1int$ph$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_82;
    memset(&i, 0, sizeof(i));
    memset(&i_82, 0, sizeof(i_82));
    # 3399 "/usr/local/include/neo-c.h"
    # 3408 "/usr/local/include/neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3407 "/usr/local/include/neo-c.h"
        if(self->item_existance[i]) {
            # 3406 "/usr/local/include/neo-c.h"
            if(1) {
                # 3404 "/usr/local/include/neo-c.h"
                come_call_finalizer(list$1int$ph$p_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3404, 355);
            }
        }
    }
    # 3408 "/usr/local/include/neo-c.h"
    come_free((char*)self->items);
    # 3417 "/usr/local/include/neo-c.h"
    for(i_82=0    ;i_82<self->size;i_82++){
        # 3416 "/usr/local/include/neo-c.h"
        if(self->item_existance[i_82]) {
            # 3415 "/usr/local/include/neo-c.h"
            if(0) {
                # 3413 "/usr/local/include/neo-c.h"
            }
        }
    }
    # 3417 "/usr/local/include/neo-c.h"
    come_free((char*)self->keys);
    # 3419 "/usr/local/include/neo-c.h"
    come_call_finalizer(list$1int$$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3419, 356);
    # 3421 "/usr/local/include/neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3421, 357));
    # 3422 "/usr/local/include/neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3422, 358));
            neo_current_frame = fr.prev;
}

static void map$2int$int$$p_finalize(struct map$2int$int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$int$$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_83;
    memset(&i, 0, sizeof(i));
    memset(&i_83, 0, sizeof(i_83));
    # 3399 "/usr/local/include/neo-c.h"
    # 3408 "/usr/local/include/neo-c.h"
    for(i=0    ;i<self->size;i++){
        # 3407 "/usr/local/include/neo-c.h"
        if(self->item_existance[i]) {
            # 3406 "/usr/local/include/neo-c.h"
            if(0) {
                # 3404 "/usr/local/include/neo-c.h"
            }
        }
    }
    # 3408 "/usr/local/include/neo-c.h"
    come_free((char*)self->items);
    # 3417 "/usr/local/include/neo-c.h"
    for(i_83=0    ;i_83<self->size;i_83++){
        # 3416 "/usr/local/include/neo-c.h"
        if(self->item_existance[i_83]) {
            # 3415 "/usr/local/include/neo-c.h"
            if(0) {
                # 3413 "/usr/local/include/neo-c.h"
            }
        }
    }
    # 3417 "/usr/local/include/neo-c.h"
    come_free((char*)self->keys);
    # 3419 "/usr/local/include/neo-c.h"
    come_call_finalizer(list$1int$$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3419, 360);
    # 3421 "/usr/local/include/neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3421, 361));
    # 3422 "/usr/local/include/neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3422, 362));
            neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 365);
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
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 364));
    }
            neo_current_frame = fr.prev;
}

