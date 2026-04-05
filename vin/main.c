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
int gBinaryMode=0;
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
static void Vi_finalize(struct Vi*  self  );
static void list$1ViWin$ph$p_finalize(struct list$1ViWin$ph* self);
static void list_item$1ViWin$ph$p_finalize(struct list_item$1ViWin$ph* self);
static void ViWin_finalize(struct ViWin*  self  );
static void list$1int$ph$p_finalize(struct list$1int$ph* self);
static void list_item$1int$ph$p_finalize(struct list_item$1int$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
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
int xgetmaxx()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xgetmaxx"; neo_current_frame = &fr;
    # 14 "main.nc"
        neo_current_frame = fr.prev;
    return getmaxx(stdscr);
    neo_current_frame = fr.prev;
}

int xgetmaxy()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xgetmaxy"; neo_current_frame = &fr;
    # 35 "main.nc"
        neo_current_frame = fr.prev;
    return getmaxy(stdscr);
    neo_current_frame = fr.prev;
}

int main(int argc, char** argv)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "main"; neo_current_frame = &fr;
    int line_num;
    int num_file_names;
    _Bool binary_mode;
    int i;
    char* p;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct Vi*  vi  ;
    int result;
    int __result_obj__0;
    # 50 "main.nc"
    line_num=-1;
    # 51 "main.nc"
    char* file_names[128];
    memset(&file_names, 0, sizeof(file_names));
    # 52 "main.nc"
    num_file_names=0;
    # 54 "main.nc"
    binary_mode=(_Bool)0;
    # 88 "main.nc"
    for(i=1    ;i<argc;i++){
        # 86 "main.nc"
        if(argv[i][0]==43) {
            # 57 "main.nc"
            p=argv[i];
            # 58 "main.nc"
            p++;
            # 59 "main.nc"
            line_num=0;
            # 64 "main.nc"
            while(xisdigit(*p)) {
                # 61 "main.nc"
                line_num=line_num*10+*p-48;
                # 62 "main.nc"
                p++;
            }
            # 64 "main.nc"
            line_num--;
            # 69 "main.nc"
            if(line_num<0) {
                # 67 "main.nc"
                line_num=0;
            }
        }
        else if(charp_operator_equals(argv[i],"-b")) {
            # 71 "main.nc"
            binary_mode=(_Bool)1;
        }
        else if(strcmp(argv[i],"-v")==0||strcmp(argv[i],"-V")==0||strcmp(argv[i],"--version")==0) {
            # 74 "main.nc"
            puts("vin version 1.0.4");
            # 75 "main.nc"
            exit(0);
        }
        else {
            # 78 "main.nc"
            file_names[num_file_names]=argv[i];
            # 79 "main.nc"
            num_file_names++;
            # 85 "main.nc"
            if(num_file_names>=128) {
                # 82 "main.nc"
                printf("overflow file names\n");
                # 83 "main.nc"
                exit(2);
            }
        }
    }
    # 88 "main.nc"
    gBinaryMode=binary_mode;
    # 90 "main.nc"
    vi=(struct Vi* )come_increment_ref_count(Vi_initialize_v21((struct Vi* )come_increment_ref_count((struct Vi *)come_calloc(1, sizeof(struct Vi )*(1), "main.nc", 90, 1, "struct Vi* "), "main.nc", 90, 2)), "main.nc", 90, 3);
    # 99 "main.nc"
    if(num_file_names>0) {
        # 93 "main.nc"
        __right_value0 = (void*)0;
        Vi_openFile_v6(vi,(char* )come_increment_ref_count(__builtin_string(file_names[0],"main.nc",93), "main.nc", 93, 4),line_num,binary_mode);
    }
    else {
        # 96 "main.nc"
        Vi_openFile_v6(vi,((void*)0),-1,binary_mode);
    }
    # 99 "main.nc"
    result=Vi_main_loop_v19(vi);
    # 101 "main.nc"
    Vi_saveSearchString(vi,"searchString.vin");
    # 103 "main.nc"
    endwin();
    # 104 "main.nc"
        __result_obj__0 = result;
    come_call_finalizer(Vi_finalize, vi, (void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc}", 104, 46);
    neo_current_frame = fr.prev;
    come_memleak_checker();
    return __result_obj__0;
}

static void Vi_finalize(struct Vi*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "Vi_finalize"; neo_current_frame = &fr;
    # 1 "Vi_finalize"
    # 3 "Vi_finalize"
    if(self!=((void*)0)&&self->wins!=((void*)0)) {
        # 2 "Vi_finalize"
        come_call_finalizer(list$1ViWin$ph$p_finalize, self->wins, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 5, 41);
    }
    # 4 "Vi_finalize"
    if(self!=((void*)0)&&self->events!=((void*)0)) {
        # 3 "Vi_finalize"
        come_call_finalizer(list$1lambda$$p_finalize, self->events, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 2, 43);
    }
    # 5 "Vi_finalize"
    if(self!=((void*)0)&&self->yank!=((void*)0)) {
        # 4 "Vi_finalize"
        come_call_finalizer(list$1int$ph$p_finalize, self->yank, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 4, 44);
    }
    # 6 "Vi_finalize"
    if(self!=((void*)0)&&self->fileYank!=((void*)0)) {
        # 5 "Vi_finalize"
        come_call_finalizer(list$1int$ph$p_finalize, self->fileYank, (void*)0, (void*)0, 0, 0, 0, (void*)0, "Vi_finalize}", 5, 45);
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
        come_call_finalizer(list_item$1ViWin$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 40);
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
        come_call_finalizer(ViWin_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1ViWin$ph$p_finalize}", 2, 39);
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
        come_call_finalizer(list$1int$ph$p_finalize, self->texts, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 18, 7);
    }
    # 4 "ViWin_finalize"
    if(self!=((void*)0)&&self->texts_length!=((void*)0)) {
        # 3 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->texts_length, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 2, 9);
    }
    # 5 "ViWin_finalize"
    if(self!=((void*)0)&&self->returnPoint!=((void*)0)) {
        # 4 "ViWin_finalize"
        come_call_finalizer(tuple3$3int$int$int$$p_finalize, self->returnPoint, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 4, 10);
    }
    # 6 "ViWin_finalize"
    if(self!=((void*)0)&&self->returnPointStack!=((void*)0)) {
        # 5 "ViWin_finalize"
        come_call_finalizer(list$1tuple3$3int$int$int$$ph$p_finalize, self->returnPointStack, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 0, 13);
    }
    # 7 "ViWin_finalize"
    if(self!=((void*)0)&&self->undo!=((void*)0)) {
        # 6 "ViWin_finalize"
        come_call_finalizer(list$1list$1int$ph$ph$p_finalize, self->undo, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 2, 16);
    }
    # 8 "ViWin_finalize"
    if(self!=((void*)0)&&self->undoScroll!=((void*)0)) {
        # 7 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->undoScroll, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 7, 17);
    }
    # 9 "ViWin_finalize"
    if(self!=((void*)0)&&self->undoCursorX!=((void*)0)) {
        # 8 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->undoCursorX, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 8, 18);
    }
    # 10 "ViWin_finalize"
    if(self!=((void*)0)&&self->undoCursorY!=((void*)0)) {
        # 9 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->undoCursorY, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 9, 19);
    }
    # 11 "ViWin_finalize"
    if(self!=((void*)0)&&self->fileName!=((void*)0)) {
        # 10 "ViWin_finalize"
        (self->fileName = come_decrement_ref_count(self->fileName, (void*)0, (void*)0, 0, 0, (void*)0, "ViWin_finalize", 10, 20));
    }
    # 12 "ViWin_finalize"
    if(self!=((void*)0)&&self->inputedKeys!=((void*)0)) {
        # 11 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->inputedKeys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 11, 21);
    }
    # 13 "ViWin_finalize"
    if(self!=((void*)0)&&self->savedInputedKeys!=((void*)0)) {
        # 12 "ViWin_finalize"
        come_call_finalizer(list$1int$$p_finalize, self->savedInputedKeys, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 12, 22);
    }
    # 14 "ViWin_finalize"
    if(self!=((void*)0)&&self->macro!=((void*)0)) {
        # 13 "ViWin_finalize"
        come_call_finalizer(map$2int$list$1list$1int$$ph$ph$p_finalize, self->macro, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 2, 29);
    }
    # 15 "ViWin_finalize"
    if(self!=((void*)0)&&self->recordingMacro!=((void*)0)) {
        # 14 "ViWin_finalize"
        come_call_finalizer(list$1list$1int$$ph$p_finalize, self->recordingMacro, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 14, 30);
    }
    # 16 "ViWin_finalize"
    if(self!=((void*)0)&&self->runningMacro!=((void*)0)) {
        # 15 "ViWin_finalize"
        come_call_finalizer(list$1list$1int$$ph$p_finalize, self->runningMacro, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 15, 31);
    }
    # 17 "ViWin_finalize"
    if(self!=((void*)0)&&self->mark!=((void*)0)) {
        # 16 "ViWin_finalize"
        come_call_finalizer(map$2int$tuple3$3int$int$int$$ph$p_finalize, self->mark, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 2, 36);
    }
    # 18 "ViWin_finalize"
    if(self!=((void*)0)&&self->completionCandidates!=((void*)0)) {
        # 17 "ViWin_finalize"
        come_call_finalizer(list$1int$ph$p_finalize, self->completionCandidates, (void*)0, (void*)0, 0, 0, 0, (void*)0, "ViWin_finalize}", 17, 37);
    }
    # 19 "ViWin_finalize"
    if(self!=((void*)0)&&self->completionPrefix!=((void*)0)) {
        # 18 "ViWin_finalize"
        (self->completionPrefix = come_decrement_ref_count(self->completionPrefix, (void*)0, (void*)0, 0, 0, (void*)0, "ViWin_finalize", 18, 38));
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
        come_call_finalizer(list_item$1int$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 6);
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
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1int$ph$p_finalize", 2, 5));
    }
            neo_current_frame = fr.prev;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 8);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1int$$p_finalize"
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
        come_call_finalizer(list_item$1tuple3$3int$int$int$$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 12);
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
        come_call_finalizer(tuple3$3int$int$int$$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple3$3int$int$int$$ph$p_finalize}", 2, 11);
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
        come_call_finalizer(list_item$1list$1int$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 15);
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
        come_call_finalizer(list$1int$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1list$1int$ph$ph$p_finalize}", 2, 14);
    }
            neo_current_frame = fr.prev;
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
                come_call_finalizer(list$1list$1int$$ph$p_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2, 25);
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
    come_call_finalizer(list$1int$$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3393, 26);
    # 3395 "/usr/local/include/neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3395, 27));
    # 3396 "/usr/local/include/neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3396, 28));
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
        come_call_finalizer(list_item$1list$1int$$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 24);
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
        come_call_finalizer(list$1int$$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1list$1int$$ph$p_finalize}", 2, 23);
    }
            neo_current_frame = fr.prev;
}

static void map$2int$tuple3$3int$int$int$$ph$p_finalize(struct map$2int$tuple3$3int$int$int$$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2int$tuple3$3int$int$int$$ph$p_finalize"; neo_current_frame = &fr;
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
                come_call_finalizer(tuple3$3int$int$int$$p_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3378, 32);
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
    come_call_finalizer(list$1int$$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3393, 33);
    # 3395 "/usr/local/include/neo-c.h"
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3395, 34));
    # 3396 "/usr/local/include/neo-c.h"
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3396, 35));
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
        come_call_finalizer(list_item$1lambda$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 42);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1lambda$$p_finalize(struct list_item$1lambda$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1lambda$$p_finalize"; neo_current_frame = &fr;
    # 1 "list_item$1lambda$$p_finalize"
            neo_current_frame = fr.prev;
}

void stackframe()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe"; neo_current_frame = &fr;
    struct neo_frame*  f  ;
    char* fun_name;
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
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 207, 47));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 207, 48));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 207, 49));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 207, 50));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 207, 51));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 207, 52));
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
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 496, 53));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 496, 54));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 496, 55));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 496, 56));
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
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 522, 57));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 522, 58));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 522, 59));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 522, 60));
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
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 585, 61));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 585, 62));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 585, 63));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 585, 64));
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
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 642, 65));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 642, 66));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 642, 67));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 642, 68));
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
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 697, 69));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 697, 70));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 697, 71));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 697, 72));
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
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 709, 73));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 709, 74));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 709, 75));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 709, 76));
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
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 715, 77));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 715, 78));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 715, 79));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 715, 80));
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
    # 725 "/usr/local/include/neo-c.h"
    if(str==((void*)0)) {
        # 723 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 723, 81);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 723, 82));
        return __result_obj__0;
    }
    # 725 "/usr/local/include/neo-c.h"
    len=strlen(str)+1;
    # 727 "/usr/local/include/neo-c.h"
    result=come_calloc(1,sizeof(char)*(len),sname,sline,0,"string");
    # 730 "/usr/local/include/neo-c.h"
    strncpy(result,str,len);
    # 732 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 732, 83);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 732, 84));
    return __result_obj__0;
}

struct buffer*  buffer_initialize(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj1;
    struct buffer*  __result_obj__0  ;
    # 4723 "/usr/local/include/neo-c.h"
    self->size=128;
    # 4724 "/usr/local/include/neo-c.h"
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 4724, 85, "char*"), "/usr/local/include/neo-c.h", 4724, 87);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4724, 86);
    # 4725 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[0]=0;
    # 4726 "/usr/local/include/neo-c.h"
    self->len=0;
    # 4728 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "/usr/local/include/neo-c.h", 4728, 88);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4728, 89);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4728, 90);
    return __result_obj__0;
}

struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  int  size  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize_with_value"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj2;
    struct buffer*  __result_obj__0  ;
    # 4733 "/usr/local/include/neo-c.h"
    self->size=128;
    # 4734 "/usr/local/include/neo-c.h"
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 4734, 91, "char*"), "/usr/local/include/neo-c.h", 4734, 93);
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4734, 92);
    # 4735 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[0]=0;
    # 4736 "/usr/local/include/neo-c.h"
    self->len=0;
    # 4738 "/usr/local/include/neo-c.h"
    buffer_append(self,mem,size);
    # 4740 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "/usr/local/include/neo-c.h", 4740, 94);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4740, 95);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4740, 96);
    return __result_obj__0;
}

void buffer_finalize(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_finalize"; neo_current_frame = &fr;
    # 4746 "/usr/local/include/neo-c.h"
    if(self&&self->buf) {
        # 4745 "/usr/local/include/neo-c.h"
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 4745, 97));
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
    # 4754 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 4751 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 4751, 98);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4751, 99);
        return __result_obj__0;
    }
    # 4754 "/usr/local/include/neo-c.h"
    result=(struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 4754, 100, "struct buffer* "), "/usr/local/include/neo-c.h", 4754, 101);
    # 4756 "/usr/local/include/neo-c.h"
    result->size=self->size;
    # 4757 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    __dec_obj3=result->buf,
    result->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 4757, 102, "char*"), "/usr/local/include/neo-c.h", 4757, 104);
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4757, 103);
    # 4758 "/usr/local/include/neo-c.h"
    result->len=self->len;
    # 4759 "/usr/local/include/neo-c.h"
    memcpy(result->buf,self->buf,self->len);
    # 4761 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 4761, 105);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4761, 106);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4761, 107);
    return __result_obj__0;
}

_Bool buffer_equals(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_equals"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    _Bool __result_obj__0;
    # 4773 "/usr/local/include/neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 4767 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
        # 4770 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 4773 "/usr/local/include/neo-c.h"
        __result_obj__0 = string_equals(((char* )(__right_value0=buffer_to_string(left))),((char* )(__right_value1=buffer_to_string(right))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 4773, 108));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 4773, 109));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_length(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_length"; neo_current_frame = &fr;
    # 4781 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 4779 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 4781 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self->len;
    neo_current_frame = fr.prev;
}

void buffer_reset(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_reset"; neo_current_frame = &fr;
    # 4789 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 4787 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 4789 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[0]=0;
    # 4790 "/usr/local/include/neo-c.h"
    self->len=0;
    neo_current_frame = fr.prev;
}

void buffer_trim(struct buffer*  self  , int len)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_trim"; neo_current_frame = &fr;
    # 4798 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 4796 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return;
    }
    # 4798 "/usr/local/include/neo-c.h"
    self->len-=len;
    # 4806 "/usr/local/include/neo-c.h"
    if(self->len>=0) {
        # 4800 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[self->len]=0;
    }
    else {
        # 4803 "/usr/local/include/neo-c.h"
        self->len=0;
        # 4804 "/usr/local/include/neo-c.h"
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
    # 4813 "/usr/local/include/neo-c.h"
    if(self==((void*)0)||mem==((void*)0)) {
        # 4811 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 4825 "/usr/local/include/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 4814 "/usr/local/include/neo-c.h"
        old_len=self->len;
        # 4815 "/usr/local/include/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 4815, 110, "char*"), "/usr/local/include/neo-c.h", 4815, 111);
        # 4816 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4818 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 4819 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 4819, 112, "char*"), "/usr/local/include/neo-c.h", 4819, 114);
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4819, 113);
        # 4820 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 4821 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 4822 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 4825, 115));
    }
    # 4825 "/usr/local/include/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 4826 "/usr/local/include/neo-c.h"
    self->len+=size;
    # 4827 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 4829 "/usr/local/include/neo-c.h"
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
    # 4837 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 4835 "/usr/local/include/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 4849 "/usr/local/include/neo-c.h"
    if(self->len+1+1+1>=self->size) {
        # 4838 "/usr/local/include/neo-c.h"
        old_len=self->len;
        # 4839 "/usr/local/include/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 4839, 116, "char*"), "/usr/local/include/neo-c.h", 4839, 117);
        # 4840 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4842 "/usr/local/include/neo-c.h"
        new_size=(self->size+10+1)*2;
        # 4843 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 4843, 118, "char*"), "/usr/local/include/neo-c.h", 4843, 120);
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4843, 119);
        # 4844 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 4845 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 4846 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 4849, 121));
    }
    # 4849 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[self->len]=c;
    # 4850 "/usr/local/include/neo-c.h"
    self->len++;
    # 4852 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 4854 "/usr/local/include/neo-c.h"
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
    # 4863 "/usr/local/include/neo-c.h"
    if(self==((void*)0)||mem==((void*)0)) {
        # 4860 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 4863 "/usr/local/include/neo-c.h"
    size=strlen(mem);
    # 4875 "/usr/local/include/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 4865 "/usr/local/include/neo-c.h"
        old_len=self->len;
        # 4866 "/usr/local/include/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 4866, 122, "char*"), "/usr/local/include/neo-c.h", 4866, 123);
        # 4867 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4868 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 4869 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 4869, 124, "char*"), "/usr/local/include/neo-c.h", 4869, 126);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4869, 125);
        # 4870 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 4871 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 4872 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 4875, 127));
    }
    # 4875 "/usr/local/include/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 4876 "/usr/local/include/neo-c.h"
    self->len+=size;
    # 4877 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 4879 "/usr/local/include/neo-c.h"
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
    # 4927 "/usr/local/include/neo-c.h"
    if(self==((void*)0)||msg==((void*)0)) {
        # 4924 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 4927 "/usr/local/include/neo-c.h"
    # 4928 "/usr/local/include/neo-c.h"
    __builtin_va_start(args,msg);
    # 4929 "/usr/local/include/neo-c.h"
    # 4930 "/usr/local/include/neo-c.h"
    len=vasprintf(&result,msg,args);
    # 4931 "/usr/local/include/neo-c.h"
    __builtin_va_end(args);
    # 4937 "/usr/local/include/neo-c.h"
    if(len<0) {
        # 4934 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 4937 "/usr/local/include/neo-c.h"
    mem=(char* )come_increment_ref_count(__builtin_string(result,"/usr/local/include/neo-c.h",4937), "/usr/local/include/neo-c.h", 4937, 128);
    # 4939 "/usr/local/include/neo-c.h"
    size=strlen(mem);
    # 4951 "/usr/local/include/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 4941 "/usr/local/include/neo-c.h"
        old_len=self->len;
        # 4942 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 4942, 129, "char*"), "/usr/local/include/neo-c.h", 4942, 130);
        # 4943 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4944 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 4945 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 4945, 131, "char*"), "/usr/local/include/neo-c.h", 4945, 133);
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4945, 132);
        # 4946 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 4947 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 4948 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 4951, 134));
    }
    # 4951 "/usr/local/include/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 4952 "/usr/local/include/neo-c.h"
    self->len+=size;
    # 4953 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 4955 "/usr/local/include/neo-c.h"
    free(result);
    # 4957 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 4957, 135));
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
    # 4966 "/usr/local/include/neo-c.h"
    if(self==((void*)0)||mem==((void*)0)) {
        # 4964 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 4966 "/usr/local/include/neo-c.h"
    size=strlen(mem)+1;
    # 4978 "/usr/local/include/neo-c.h"
    if(self->len+size+1+1+1>=self->size) {
        # 4968 "/usr/local/include/neo-c.h"
        old_len=self->len;
        # 4969 "/usr/local/include/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 4969, 136, "char*"), "/usr/local/include/neo-c.h", 4969, 137);
        # 4970 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4971 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 4972 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 4972, 138, "char*"), "/usr/local/include/neo-c.h", 4972, 140);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4972, 139);
        # 4973 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 4974 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 4975 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 4978, 141));
    }
    # 4978 "/usr/local/include/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 4979 "/usr/local/include/neo-c.h"
    self->len+=size;
    # 4980 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 4981 "/usr/local/include/neo-c.h"
    self->len++;
    # 4983 "/usr/local/include/neo-c.h"
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
    # 4991 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 4989 "/usr/local/include/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 4991 "/usr/local/include/neo-c.h"
    mem=&value;
    # 4992 "/usr/local/include/neo-c.h"
    size=sizeof(int);
    # 5005 "/usr/local/include/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 4995 "/usr/local/include/neo-c.h"
        old_len=self->len;
        # 4996 "/usr/local/include/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 4996, 142, "char*"), "/usr/local/include/neo-c.h", 4996, 143);
        # 4997 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4998 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 4999 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 4999, 144, "char*"), "/usr/local/include/neo-c.h", 4999, 146);
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4999, 145);
        # 5000 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5001 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5002 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 5005, 147));
    }
    # 5005 "/usr/local/include/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5006 "/usr/local/include/neo-c.h"
    self->len+=size;
    # 5007 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5009 "/usr/local/include/neo-c.h"
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
    # 5017 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5015 "/usr/local/include/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5017 "/usr/local/include/neo-c.h"
    mem=&value;
    # 5018 "/usr/local/include/neo-c.h"
    size=sizeof(long);
    # 5031 "/usr/local/include/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 5021 "/usr/local/include/neo-c.h"
        old_len=self->len;
        # 5022 "/usr/local/include/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 5022, 148, "char*"), "/usr/local/include/neo-c.h", 5022, 149);
        # 5023 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5024 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5025 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 5025, 150, "char*"), "/usr/local/include/neo-c.h", 5025, 152);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 5025, 151);
        # 5026 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5027 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5028 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 5031, 153));
    }
    # 5031 "/usr/local/include/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5032 "/usr/local/include/neo-c.h"
    self->len+=size;
    # 5033 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5035 "/usr/local/include/neo-c.h"
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
    # 5044 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5041 "/usr/local/include/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5044 "/usr/local/include/neo-c.h"
    mem=&value;
    # 5045 "/usr/local/include/neo-c.h"
    size=sizeof(short);
    # 5058 "/usr/local/include/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 5048 "/usr/local/include/neo-c.h"
        old_len=self->len;
        # 5049 "/usr/local/include/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 5049, 154, "char*"), "/usr/local/include/neo-c.h", 5049, 155);
        # 5050 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5051 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5052 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 5052, 156, "char*"), "/usr/local/include/neo-c.h", 5052, 158);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 5052, 157);
        # 5053 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5054 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5055 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 5058, 159));
    }
    # 5058 "/usr/local/include/neo-c.h"
    memcpy(self->buf+self->len,mem,size);
    # 5059 "/usr/local/include/neo-c.h"
    self->len+=size;
    # 5060 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[self->len]=0;
    # 5062 "/usr/local/include/neo-c.h"
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
    # 5071 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5068 "/usr/local/include/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5071 "/usr/local/include/neo-c.h"
    len=self->len;
    # 5072 "/usr/local/include/neo-c.h"
    len=(len+3)&~3;
    # 5085 "/usr/local/include/neo-c.h"
    if(len>=self->size) {
        # 5075 "/usr/local/include/neo-c.h"
        old_len=self->len;
        # 5076 "/usr/local/include/neo-c.h"
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 5076, 160, "char*"), "/usr/local/include/neo-c.h", 5076, 161);
        # 5077 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5078 "/usr/local/include/neo-c.h"
        new_size=(self->size+1+1)*2;
        # 5079 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 5079, 162, "char*"), "/usr/local/include/neo-c.h", 5079, 164);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 5079, 163);
        # 5080 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5081 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5082 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 5085, 165));
    }
    # 5089 "/usr/local/include/neo-c.h"
    for(i=self->len    ;i<len;i++){
        # 5086 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[i]=0;
    }
    # 5089 "/usr/local/include/neo-c.h"
    self->len=len;
    # 5091 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_compare(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_compare"; neo_current_frame = &fr;
    # 5106 "/usr/local/include/neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 5097 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
        # 5100 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
        # 5103 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 5106 "/usr/local/include/neo-c.h"
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
    # 5111 "/usr/local/include/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5111, 166, "struct buffer* "), "/usr/local/include/neo-c.h", 5111, 167)), "/usr/local/include/neo-c.h", 5111, 168);
    # 5117 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5114 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5114, 169);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5114, 170);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5114, 171);
        return __result_obj__0;
    }
    # 5117 "/usr/local/include/neo-c.h"
    buffer_append_str(result,self);
    # 5119 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5119, 172);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5119, 173);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5119, 174);
    return __result_obj__0;
}

char*  buffer_to_string(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 5128 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5125 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5125))), "/usr/local/include/neo-c.h", 5125, 175);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5125, 176));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5125, 177));
        return __result_obj__0;
    }
    # 5128 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self->buf,"/usr/local/include/neo-c.h",5128))), "/usr/local/include/neo-c.h", 5128, 178);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5128, 179));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5128, 180));
    return __result_obj__0;
}

unsigned char* buffer_head_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_head_pointer"; neo_current_frame = &fr;
    unsigned char* __result_obj__0;
    # 5136 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5134 "/usr/local/include/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 5136 "/usr/local/include/neo-c.h"
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
    # 5141 "/usr/local/include/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5141, 181, "struct buffer* "), "/usr/local/include/neo-c.h", 5141, 182)), "/usr/local/include/neo-c.h", 5141, 183);
    # 5145 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5143 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5143, 184);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5143, 185);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5143, 186);
        return __result_obj__0;
    }
    # 5145 "/usr/local/include/neo-c.h"
    buffer_append(result,self,sizeof(char)*len);
    # 5146 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5146, 187);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5146, 188);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5146, 189);
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
    # 5151 "/usr/local/include/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5151, 190, "struct buffer* "), "/usr/local/include/neo-c.h", 5151, 191)), "/usr/local/include/neo-c.h", 5151, 192);
    # 5155 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5153 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5153, 193);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5153, 194);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5153, 195);
        return __result_obj__0;
    }
    # 5158 "/usr/local/include/neo-c.h"
    for(i=0    ;i<len;i++){
        # 5156 "/usr/local/include/neo-c.h"
        buffer_append(result,self[i],strlen(self[i]));
    }
    # 5158 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5158, 196);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5158, 197);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5158, 198);
    return __result_obj__0;
}

struct buffer*  shorta_to_buffer(short* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    # 5163 "/usr/local/include/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5163, 199, "struct buffer* "), "/usr/local/include/neo-c.h", 5163, 200)), "/usr/local/include/neo-c.h", 5163, 201);
    # 5167 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5165 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5165, 202);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5165, 203);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5165, 204);
        return __result_obj__0;
    }
    # 5167 "/usr/local/include/neo-c.h"
    buffer_append(result,(char*)self,sizeof(short)*len);
    # 5168 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5168, 205);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5168, 206);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5168, 207);
    return __result_obj__0;
}

struct buffer*  inta_to_buffer(int* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    # 5173 "/usr/local/include/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5173, 208, "struct buffer* "), "/usr/local/include/neo-c.h", 5173, 209)), "/usr/local/include/neo-c.h", 5173, 210);
    # 5177 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5175 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5175, 211);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5175, 212);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5175, 213);
        return __result_obj__0;
    }
    # 5177 "/usr/local/include/neo-c.h"
    buffer_append(result,(char*)self,sizeof(int)*len);
    # 5178 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5178, 214);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5178, 215);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5178, 216);
    return __result_obj__0;
}

struct buffer*  longa_to_buffer(long* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    # 5183 "/usr/local/include/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5183, 217, "struct buffer* "), "/usr/local/include/neo-c.h", 5183, 218)), "/usr/local/include/neo-c.h", 5183, 219);
    # 5187 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5185 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5185, 220);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5185, 221);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5185, 222);
        return __result_obj__0;
    }
    # 5187 "/usr/local/include/neo-c.h"
    buffer_append(result,(char*)self,sizeof(long)*len);
    # 5188 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5188, 223);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5188, 224);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5188, 225);
    return __result_obj__0;
}

struct buffer*  floata_to_buffer(float* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    # 5193 "/usr/local/include/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5193, 226, "struct buffer* "), "/usr/local/include/neo-c.h", 5193, 227)), "/usr/local/include/neo-c.h", 5193, 228);
    # 5197 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5195 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5195, 229);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5195, 230);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5195, 231);
        return __result_obj__0;
    }
    # 5197 "/usr/local/include/neo-c.h"
    buffer_append(result,(char*)self,sizeof(float)*len);
    # 5198 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5198, 232);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5198, 233);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5198, 234);
    return __result_obj__0;
}

struct buffer*  doublea_to_buffer(double* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    # 5203 "/usr/local/include/neo-c.h"
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5203, 235, "struct buffer* "), "/usr/local/include/neo-c.h", 5203, 236)), "/usr/local/include/neo-c.h", 5203, 237);
    # 5207 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5205 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5205, 238);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5205, 239);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5205, 240);
        return __result_obj__0;
    }
    # 5207 "/usr/local/include/neo-c.h"
    buffer_append(result,(char*)self,sizeof(double)*len);
    # 5208 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5208, 241);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5208, 242);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5208, 243);
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
    # 5213 "/usr/local/include/neo-c.h"
    len=self->len;
    # 5214 "/usr/local/include/neo-c.h"
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), "/usr/local/include/neo-c.h", 5214, 244, "char*"), "/usr/local/include/neo-c.h", 5214, 245);
    # 5220 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5217 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5217, 246);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5217, 247));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5217, 248));
        return __result_obj__0;
    }
    # 5220 "/usr/local/include/neo-c.h"
    n=0;
    # 5238 "/usr/local/include/neo-c.h"
    for(i=0    ;i<len;i++){
        # 5222 "/usr/local/include/neo-c.h"
        c=self->buf[i];
        # 5236 "/usr/local/include/neo-c.h"
        if((c>=0&&c<32)||c==127) {
            # 5227 "/usr/local/include/neo-c.h"
            result[n++]=94;
            # 5228 "/usr/local/include/neo-c.h"
            result[n++]=c+65-1;
        }
        else if(c>127) {
            # 5231 "/usr/local/include/neo-c.h"
            result[n++]=63;
        }
        else {
            # 5234 "/usr/local/include/neo-c.h"
            result[n++]=c;
        }
    }
    # 5240 "/usr/local/include/neo-c.h"
    result[n]=0;
    # 5240 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5240, 249);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5240, 250));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5240, 251));
    return __result_obj__0;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1char$* __result_obj__0;
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
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 259);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 261);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 262);
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
        litem=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/neo-c.h", 1619, 253, "struct list_item$1char$*"))), "/usr/local/include/neo-c.h", 1619, 254);
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
        litem_8=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/neo-c.h", 1629, 255, "struct list_item$1char$*"))), "/usr/local/include/neo-c.h", 1629, 256);
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
        litem_9=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/neo-c.h", 1639, 257, "struct list_item$1char$*"))), "/usr/local/include/neo-c.h", 1639, 258);
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
        come_call_finalizer(list_item$1char$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 260);
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
    # 5265 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value1=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc(1, sizeof(struct list$1char$)*(1), "/usr/local/include/neo-c.h", 5265, 252, "struct list$1char$*"), "/usr/local/include/neo-c.h", 5265, 263),len,self))), "/usr/local/include/neo-c.h", 5265, 264);
    come_call_finalizer(list$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5265, 265);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5265, 266);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1char$p* __result_obj__0;
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
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 274);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 276);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 277);
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
        litem=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/neo-c.h", 1619, 268, "struct list_item$1char$p*"))), "/usr/local/include/neo-c.h", 1619, 269);
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
        litem_10=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/neo-c.h", 1629, 270, "struct list_item$1char$p*"))), "/usr/local/include/neo-c.h", 1629, 271);
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
        litem_11=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/neo-c.h", 1639, 272, "struct list_item$1char$p*"))), "/usr/local/include/neo-c.h", 1639, 273);
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
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 275);
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
    # 5270 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value1=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/neo-c.h", 5270, 267, "struct list$1char$p*"), "/usr/local/include/neo-c.h", 5270, 278),len,self))), "/usr/local/include/neo-c.h", 5270, 279);
    come_call_finalizer(list$1char$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5270, 280);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5270, 281);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1short$* __result_obj__0;
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
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 289);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 291);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 292);
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
        litem=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/neo-c.h", 1619, 283, "struct list_item$1short$*"))), "/usr/local/include/neo-c.h", 1619, 284);
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
        litem_12=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/neo-c.h", 1629, 285, "struct list_item$1short$*"))), "/usr/local/include/neo-c.h", 1629, 286);
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
        litem_13=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/neo-c.h", 1639, 287, "struct list_item$1short$*"))), "/usr/local/include/neo-c.h", 1639, 288);
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
        come_call_finalizer(list_item$1short$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 290);
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
    # 5275 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value1=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc(1, sizeof(struct list$1short$)*(1), "/usr/local/include/neo-c.h", 5275, 282, "struct list$1short$*"), "/usr/local/include/neo-c.h", 5275, 293),len,self))), "/usr/local/include/neo-c.h", 5275, 294);
    come_call_finalizer(list$1short$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5275, 295);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5275, 296);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1int$* __result_obj__0;
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 304);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1497, 305);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1497, 306);
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1619, 298, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1619, 299);
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
        litem_14=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1629, 300, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1629, 301);
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
        litem_15=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1639, 302, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1639, 303);
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

struct list$1int$* inta_to_list(int* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* __result_obj__0;
    # 5280 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value1=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 5280, 297, "struct list$1int$*"), "/usr/local/include/neo-c.h", 5280, 307),len,self))), "/usr/local/include/neo-c.h", 5280, 308);
    come_call_finalizer(list$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5280, 309);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5280, 310);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1long$* __result_obj__0;
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
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 318);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 320);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 321);
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
        litem=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/neo-c.h", 1619, 312, "struct list_item$1long$*"))), "/usr/local/include/neo-c.h", 1619, 313);
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
        litem_16=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/neo-c.h", 1629, 314, "struct list_item$1long$*"))), "/usr/local/include/neo-c.h", 1629, 315);
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
        litem_17=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/neo-c.h", 1639, 316, "struct list_item$1long$*"))), "/usr/local/include/neo-c.h", 1639, 317);
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
        come_call_finalizer(list_item$1long$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 319);
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
    # 5285 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value1=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc(1, sizeof(struct list$1long$)*(1), "/usr/local/include/neo-c.h", 5285, 311, "struct list$1long$*"), "/usr/local/include/neo-c.h", 5285, 322),len,self))), "/usr/local/include/neo-c.h", 5285, 323);
    come_call_finalizer(list$1long$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5285, 324);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5285, 325);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1float$* __result_obj__0;
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
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 333);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 335);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 336);
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
        litem=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/neo-c.h", 1619, 327, "struct list_item$1float$*"))), "/usr/local/include/neo-c.h", 1619, 328);
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
        litem_18=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/neo-c.h", 1629, 329, "struct list_item$1float$*"))), "/usr/local/include/neo-c.h", 1629, 330);
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
        litem_19=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/neo-c.h", 1639, 331, "struct list_item$1float$*"))), "/usr/local/include/neo-c.h", 1639, 332);
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
        come_call_finalizer(list_item$1float$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 334);
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
    # 5290 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value1=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc(1, sizeof(struct list$1float$)*(1), "/usr/local/include/neo-c.h", 5290, 326, "struct list$1float$*"), "/usr/local/include/neo-c.h", 5290, 337),len,self))), "/usr/local/include/neo-c.h", 5290, 338);
    come_call_finalizer(list$1float$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5290, 339);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5290, 340);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1double$* __result_obj__0;
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
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 348);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 350);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 351);
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
        litem=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/neo-c.h", 1619, 342, "struct list_item$1double$*"))), "/usr/local/include/neo-c.h", 1619, 343);
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
        litem_20=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/neo-c.h", 1629, 344, "struct list_item$1double$*"))), "/usr/local/include/neo-c.h", 1629, 345);
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
        litem_21=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/neo-c.h", 1639, 346, "struct list_item$1double$*"))), "/usr/local/include/neo-c.h", 1639, 347);
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
        come_call_finalizer(list_item$1double$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 349);
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
    # 5295 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value1=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc(1, sizeof(struct list$1double$)*(1), "/usr/local/include/neo-c.h", 5295, 341, "struct list$1double$*"), "/usr/local/include/neo-c.h", 5295, 352),len,self))), "/usr/local/include/neo-c.h", 5295, 353);
    come_call_finalizer(list$1double$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5295, 354);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5295, 355);
    return __result_obj__0;
}

_Bool _Bool_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_equals"; neo_current_frame = &fr;
    # 5308 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_equals"; neo_current_frame = &fr;
    # 5313 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_equals"; neo_current_frame = &fr;
    # 5318 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_equals"; neo_current_frame = &fr;
    # 5323 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_equals"; neo_current_frame = &fr;
    # 5328 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool size_t_equals(unsigned long  int  self  , unsigned long  int  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_equals"; neo_current_frame = &fr;
    # 5333 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool float_equals(float self, float right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_equals"; neo_current_frame = &fr;
    # 5338 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool double_equals(double self, double right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_equals"; neo_current_frame = &fr;
    # 5343 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_equals"; neo_current_frame = &fr;
    # 5353 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_operator_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_equals"; neo_current_frame = &fr;
    # 5358 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_operator_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_equals"; neo_current_frame = &fr;
    # 5363 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_operator_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_equals"; neo_current_frame = &fr;
    # 5368 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_operator_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_equals"; neo_current_frame = &fr;
    # 5373 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_not_equals"; neo_current_frame = &fr;
    # 5383 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool char_operator_not_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_not_equals"; neo_current_frame = &fr;
    # 5388 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool short_operator_not_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_not_equals"; neo_current_frame = &fr;
    # 5393 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool int_operator_not_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_not_equals"; neo_current_frame = &fr;
    # 5398 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool long_operator_not_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_not_equals"; neo_current_frame = &fr;
    # 5403 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool charp_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_equals"; neo_current_frame = &fr;
    # 5418 "/usr/local/include/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5409 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5412 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
        # 5415 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5418 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool string_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_equals"; neo_current_frame = &fr;
    # 5433 "/usr/local/include/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5424 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5427 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
        # 5430 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5433 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool voidp_equals(void* self, void* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_equals"; neo_current_frame = &fr;
    # 5438 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Boolp_equals(_Bool* self, _Bool* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Boolp_equals"; neo_current_frame = &fr;
    # 5443 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return *self==*right;
    neo_current_frame = fr.prev;
}

_Bool string_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_equals"; neo_current_frame = &fr;
    # 5458 "/usr/local/include/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5449 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5452 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
        # 5455 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5458 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool charp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_equals"; neo_current_frame = &fr;
    # 5473 "/usr/local/include/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5464 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5467 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
        # 5470 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5473 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool chara_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_equals"; neo_current_frame = &fr;
    # 5485 "/usr/local/include/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5479 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5482 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 5485 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool voidp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_equals"; neo_current_frame = &fr;
    # 5490 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool voidp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_not_equals"; neo_current_frame = &fr;
    # 5495 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return !charp_operator_equals(self,right);
    neo_current_frame = fr.prev;
}

_Bool string_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_not_equals"; neo_current_frame = &fr;
    # 5507 "/usr/local/include/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5501 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5504 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5507 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool charp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_not_equals"; neo_current_frame = &fr;
    # 5519 "/usr/local/include/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5513 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5516 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5519 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool chara_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_not_equals"; neo_current_frame = &fr;
    # 5531 "/usr/local/include/neo-c.h"
    if(self==((void*)0)&&right==((void*)0)) {
        # 5525 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
        # 5528 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    # 5531 "/usr/local/include/neo-c.h"
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
    # 5540 "/usr/local/include/neo-c.h"
    if(self==((void*)0)||right==((void*)0)) {
        # 5538 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5538))), "/usr/local/include/neo-c.h", 5538, 356);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5538, 357));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5538, 358));
        return __result_obj__0;
    }
    # 5540 "/usr/local/include/neo-c.h"
    len=strlen(self)+strlen(right);
    # 5542 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "/usr/local/include/neo-c.h", 5542, 359, "char*"), "/usr/local/include/neo-c.h", 5542, 360);
    # 5544 "/usr/local/include/neo-c.h"
    strncpy(result,self,len+1);
    # 5545 "/usr/local/include/neo-c.h"
    strncat(result,right,len+1);
    # 5547 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5547, 361);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5547, 362));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5547, 363));
    return __result_obj__0;
}

char*  string_operator_add(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_add"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    # 5555 "/usr/local/include/neo-c.h"
    if(self==((void*)0)||right==((void*)0)) {
        # 5553 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5553))), "/usr/local/include/neo-c.h", 5553, 364);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5553, 365));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5553, 366));
        return __result_obj__0;
    }
    # 5555 "/usr/local/include/neo-c.h"
    len=strlen(self)+strlen(right);
    # 5557 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "/usr/local/include/neo-c.h", 5557, 367, "char*"), "/usr/local/include/neo-c.h", 5557, 368);
    # 5559 "/usr/local/include/neo-c.h"
    strncpy(result,self,len+1);
    # 5560 "/usr/local/include/neo-c.h"
    strncat(result,right,len+1);
    # 5562 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5562, 369);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5562, 370));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5562, 371));
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
    # 5570 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5568 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5568))), "/usr/local/include/neo-c.h", 5568, 372);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5568, 373));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5568, 374));
        return __result_obj__0;
    }
    # 5570 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5570, 375, "struct buffer* "), "/usr/local/include/neo-c.h", 5570, 376)), "/usr/local/include/neo-c.h", 5570, 377);
    # 5576 "/usr/local/include/neo-c.h"
    for(i=0    ;i<right;i++){
        # 5573 "/usr/local/include/neo-c.h"
        buffer_append_str(buf,self);
    }
    # 5576 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "/usr/local/include/neo-c.h", 5576, 378);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 5576, 379);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5576, 380));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5576, 381));
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
    # 5584 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5582 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5582))), "/usr/local/include/neo-c.h", 5582, 382);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5582, 383));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5582, 384));
        return __result_obj__0;
    }
    # 5584 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5584, 385, "struct buffer* "), "/usr/local/include/neo-c.h", 5584, 386)), "/usr/local/include/neo-c.h", 5584, 387);
    # 5590 "/usr/local/include/neo-c.h"
    for(i=0    ;i<right;i++){
        # 5587 "/usr/local/include/neo-c.h"
        buffer_append_str(buf,self);
    }
    # 5590 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "/usr/local/include/neo-c.h", 5590, 388);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 5590, 389);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5590, 390));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5590, 391));
    return __result_obj__0;
}

_Bool charpa_contained(const char* self[], unsigned long  int  len  , const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_contained"; neo_current_frame = &fr;
    _Bool result;
    int i;
    # 5600 "/usr/local/include/neo-c.h"
    result=(_Bool)0;
    # 5604 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5602 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return result;
    }
    # 5610 "/usr/local/include/neo-c.h"
    for(i=0    ;i<len;i++){
        # 5609 "/usr/local/include/neo-c.h"
        if(strncmp(self[i],str,strlen(self[i]))==0) {
            # 5606 "/usr/local/include/neo-c.h"
            result=(_Bool)1;
            # 5607 "/usr/local/include/neo-c.h"
            break;
        }
    }
    # 5610 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned long  int  shorta_length(short* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_length"; neo_current_frame = &fr;
    # 5615 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  inta_length(int* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "inta_length"; neo_current_frame = &fr;
    # 5620 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  longa_length(long* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "longa_length"; neo_current_frame = &fr;
    # 5625 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  floata_length(float* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "floata_length"; neo_current_frame = &fr;
    # 5630 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  int  doublea_length(double* self, unsigned long  int  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_length"; neo_current_frame = &fr;
    # 5635 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned int _Bool_get_hash_key(_Bool value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_get_hash_key"; neo_current_frame = &fr;
    # 5648 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

unsigned int char_get_hash_key(char value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_get_hash_key"; neo_current_frame = &fr;
    # 5653 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int short_get_hash_key(short int value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_get_hash_key"; neo_current_frame = &fr;
    # 5658 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int int_get_hash_key(int value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_get_hash_key"; neo_current_frame = &fr;
    # 5663 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int long_get_hash_key(long value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_get_hash_key"; neo_current_frame = &fr;
    # 5668 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int size_t_get_hash_key(unsigned long  int  value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_get_hash_key"; neo_current_frame = &fr;
    # 5673 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int float_get_hash_key(float value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_get_hash_key"; neo_current_frame = &fr;
    # 5678 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int double_get_hash_key(double value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_get_hash_key"; neo_current_frame = &fr;
    # 5683 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int charp_get_hash_key(const char* value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_get_hash_key"; neo_current_frame = &fr;
    int result;
    # 5691 "/usr/local/include/neo-c.h"
    if(value==((void*)0)) {
        # 5689 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5691 "/usr/local/include/neo-c.h"
    result=0;
    # 5692 "/usr/local/include/neo-c.h"
    const char* p=value;
    # 5697 "/usr/local/include/neo-c.h"
    while(*p) {
        # 5694 "/usr/local/include/neo-c.h"
        result+=(*p);
        # 5695 "/usr/local/include/neo-c.h"
        p++;
    }
    # 5697 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned int string_get_hash_key(char* value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_get_hash_key"; neo_current_frame = &fr;
    int result;
    char* p;
    # 5705 "/usr/local/include/neo-c.h"
    if(value==((void*)0)) {
        # 5703 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5705 "/usr/local/include/neo-c.h"
    result=0;
    # 5706 "/usr/local/include/neo-c.h"
    p=value;
    # 5711 "/usr/local/include/neo-c.h"
    while(*p) {
        # 5708 "/usr/local/include/neo-c.h"
        result+=(*p);
        # 5709 "/usr/local/include/neo-c.h"
        p++;
    }
    # 5711 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned int voidp_get_hash_key(void* value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_get_hash_key"; neo_current_frame = &fr;
    # 5716 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

_Bool _Bool_clone(_Bool self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_clone"; neo_current_frame = &fr;
    # 5729 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

char char_clone(char self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_clone"; neo_current_frame = &fr;
    # 5734 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

short int short_clone(short self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_clone"; neo_current_frame = &fr;
    # 5739 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

int int_clone(int self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_clone"; neo_current_frame = &fr;
    # 5744 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long  int long_clone(long self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_clone"; neo_current_frame = &fr;
    # 5749 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

unsigned long  int  size_t_clone(unsigned long  int  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_clone"; neo_current_frame = &fr;
    # 5754 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

double double_clone(double self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_clone"; neo_current_frame = &fr;
    # 5759 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

float float_clone(float self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_clone"; neo_current_frame = &fr;
    # 5764 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

_Bool xisalpha(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisalpha"; neo_current_frame = &fr;
    _Bool result;
    # 5773 "/usr/local/include/neo-c.h"
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 5774 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xisblank(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisblank"; neo_current_frame = &fr;
    # 5779 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xisdigit(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisdigit"; neo_current_frame = &fr;
    # 5784 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xisspace(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisspace"; neo_current_frame = &fr;
    # 5789 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return c==32||c==9||c==10||c==13||c==28||c==11;
    neo_current_frame = fr.prev;
}

_Bool xisalnum(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisalnum"; neo_current_frame = &fr;
    # 5794 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return xisalpha(c)||xisdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xisascii(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisascii"; neo_current_frame = &fr;
    _Bool result;
    # 5799 "/usr/local/include/neo-c.h"
    result=(c>=32&&c<=126);
    # 5800 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xispunct(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xispunct"; neo_current_frame = &fr;
    # 5804 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
    neo_current_frame = fr.prev;
}

int string_length(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_length"; neo_current_frame = &fr;
    # 5815 "/usr/local/include/neo-c.h"
    if(str==((void*)0)) {
        # 5813 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5815 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int charp_length(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_length"; neo_current_frame = &fr;
    # 5822 "/usr/local/include/neo-c.h"
    if(str==((void*)0)) {
        # 5820 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5822 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int chara_length(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_length"; neo_current_frame = &fr;
    # 5836 "/usr/local/include/neo-c.h"
    if(str==((void*)0)) {
        # 5834 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 5836 "/usr/local/include/neo-c.h"
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
    # 5844 "/usr/local/include/neo-c.h"
    if(str==((void*)0)) {
        # 5842 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5842))), "/usr/local/include/neo-c.h", 5842, 392);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5842, 393));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5842, 394));
        return __result_obj__0;
    }
    # 5844 "/usr/local/include/neo-c.h"
    len=strlen(str);
    # 5845 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "/usr/local/include/neo-c.h", 5845, 395, "char*"), "/usr/local/include/neo-c.h", 5845, 396);
    # 5851 "/usr/local/include/neo-c.h"
    for(i=0    ;i<len;i++){
        # 5848 "/usr/local/include/neo-c.h"
        result[i]=str[len-i-1];
    }
    # 5851 "/usr/local/include/neo-c.h"
    result[len]=0;
    # 5853 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5853, 397);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5853, 398));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5853, 399));
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
    # 5862 "/usr/local/include/neo-c.h"
    if(str==((void*)0)) {
        # 5859 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5859))), "/usr/local/include/neo-c.h", 5859, 400);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5859, 401));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5859, 402));
        return __result_obj__0;
    }
    # 5862 "/usr/local/include/neo-c.h"
    len=strlen(str);
    # 5867 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 5865 "/usr/local/include/neo-c.h"
        head+=len;
    }
    # 5871 "/usr/local/include/neo-c.h"
    if(tail<0) {
        # 5868 "/usr/local/include/neo-c.h"
        tail+=len+1;
    }
    # 5875 "/usr/local/include/neo-c.h"
    if(head>tail) {
        # 5872 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/usr/local/include/neo-c.h", 5872, 403);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5872, 404));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5872, 405));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5872, 406));
        return __result_obj__0;
    }
    # 5879 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 5876 "/usr/local/include/neo-c.h"
        head=0;
    }
    # 5883 "/usr/local/include/neo-c.h"
    if(tail>=len) {
        # 5880 "/usr/local/include/neo-c.h"
        tail=len;
    }
    # 5887 "/usr/local/include/neo-c.h"
    if(head==tail) {
        # 5884 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5884))), "/usr/local/include/neo-c.h", 5884, 407);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5884, 408));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5884, 409));
        return __result_obj__0;
    }
    # 5891 "/usr/local/include/neo-c.h"
    if(tail-head+1<1) {
        # 5888 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5888))), "/usr/local/include/neo-c.h", 5888, 410);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5888, 411));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5888, 412));
        return __result_obj__0;
    }
    # 5891 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/neo-c.h", 5891, 413, "char*"), "/usr/local/include/neo-c.h", 5891, 414);
    # 5893 "/usr/local/include/neo-c.h"
    memcpy(result,str+head,tail-head);
    # 5894 "/usr/local/include/neo-c.h"
    result[tail-head]=0;
    # 5896 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5896, 415);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5896, 416));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5896, 417));
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
    # 5905 "/usr/local/include/neo-c.h"
    if(str==((void*)0)) {
        # 5902 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5902))), "/usr/local/include/neo-c.h", 5902, 418);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5902, 419));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5902, 420));
        return __result_obj__0;
    }
    # 5905 "/usr/local/include/neo-c.h"
    len=strlen(str);
    # 5910 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 5908 "/usr/local/include/neo-c.h"
        head+=len;
    }
    # 5914 "/usr/local/include/neo-c.h"
    if(tail<0) {
        # 5911 "/usr/local/include/neo-c.h"
        tail+=len+1;
    }
    # 5918 "/usr/local/include/neo-c.h"
    if(head>tail) {
        # 5915 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/usr/local/include/neo-c.h", 5915, 421);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5915, 422));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5915, 423));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5915, 424));
        return __result_obj__0;
    }
    # 5922 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 5919 "/usr/local/include/neo-c.h"
        head=0;
    }
    # 5926 "/usr/local/include/neo-c.h"
    if(tail>=len) {
        # 5923 "/usr/local/include/neo-c.h"
        tail=len;
    }
    # 5930 "/usr/local/include/neo-c.h"
    if(head==tail) {
        # 5927 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5927))), "/usr/local/include/neo-c.h", 5927, 425);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5927, 426));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5927, 427));
        return __result_obj__0;
    }
    # 5934 "/usr/local/include/neo-c.h"
    if(tail-head+1<1) {
        # 5931 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5931))), "/usr/local/include/neo-c.h", 5931, 428);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5931, 429));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5931, 430));
        return __result_obj__0;
    }
    # 5934 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/neo-c.h", 5934, 431, "char*"), "/usr/local/include/neo-c.h", 5934, 432);
    # 5936 "/usr/local/include/neo-c.h"
    memcpy(result,str+head,tail-head);
    # 5937 "/usr/local/include/neo-c.h"
    result[tail-head]=0;
    # 5939 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5939, 433);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5939, 434));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5939, 435));
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
    # 5948 "/usr/local/include/neo-c.h"
    if(str==((void*)0)) {
        # 5945 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5945))), "/usr/local/include/neo-c.h", 5945, 436);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5945, 437));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5945, 438));
        return __result_obj__0;
    }
    # 5948 "/usr/local/include/neo-c.h"
    len=strlen(str);
    # 5953 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 5951 "/usr/local/include/neo-c.h"
        head+=len;
    }
    # 5957 "/usr/local/include/neo-c.h"
    if(tail<0) {
        # 5954 "/usr/local/include/neo-c.h"
        tail+=len+1;
    }
    # 5961 "/usr/local/include/neo-c.h"
    if(head>tail) {
        # 5958 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/usr/local/include/neo-c.h", 5958, 439);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5958, 440));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5958, 441));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5958, 442));
        return __result_obj__0;
    }
    # 5965 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 5962 "/usr/local/include/neo-c.h"
        head=0;
    }
    # 5969 "/usr/local/include/neo-c.h"
    if(tail>=len) {
        # 5966 "/usr/local/include/neo-c.h"
        tail=len;
    }
    # 5973 "/usr/local/include/neo-c.h"
    if(head==tail) {
        # 5970 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5970))), "/usr/local/include/neo-c.h", 5970, 443);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5970, 444));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5970, 445));
        return __result_obj__0;
    }
    # 5977 "/usr/local/include/neo-c.h"
    if(tail-head+1<1) {
        # 5974 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5974))), "/usr/local/include/neo-c.h", 5974, 446);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5974, 447));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5974, 448));
        return __result_obj__0;
    }
    # 5977 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/neo-c.h", 5977, 449, "char*"), "/usr/local/include/neo-c.h", 5977, 450);
    # 5979 "/usr/local/include/neo-c.h"
    memcpy(result,str+head,tail-head);
    # 5980 "/usr/local/include/neo-c.h"
    result[tail-head]=0;
    # 5982 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5982, 451);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5982, 452));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5982, 453));
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
    # 5990 "/usr/local/include/neo-c.h"
    if(msg==((void*)0)) {
        # 5988 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5988))), "/usr/local/include/neo-c.h", 5988, 454);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5988, 455));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5988, 456));
        return __result_obj__0;
    }
    # 5990 "/usr/local/include/neo-c.h"
    # 5991 "/usr/local/include/neo-c.h"
    __builtin_va_start(args,msg);
    # 5992 "/usr/local/include/neo-c.h"
    # 5993 "/usr/local/include/neo-c.h"
    len=vasprintf(&result,msg,args);
    # 5994 "/usr/local/include/neo-c.h"
    __builtin_va_end(args);
    # 6000 "/usr/local/include/neo-c.h"
    if(len<0) {
        # 5997 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5997))), "/usr/local/include/neo-c.h", 5997, 457);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5997, 458));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5997, 459));
        return __result_obj__0;
    }
    # 6000 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result2=(char* )come_increment_ref_count(__builtin_string(result,"/usr/local/include/neo-c.h",6000), "/usr/local/include/neo-c.h", 6000, 460);
    # 6002 "/usr/local/include/neo-c.h"
    free(result);
    # 6004 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result2, "/usr/local/include/neo-c.h", 6004, 461);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6004, 462));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6004, 463));
    return __result_obj__0;
}

char*  charp_delete(char* str, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_delete"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    # 6013 "/usr/local/include/neo-c.h"
    if(str==((void*)0)) {
        # 6010 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6010))), "/usr/local/include/neo-c.h", 6010, 464);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6010, 465));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6010, 466));
        return __result_obj__0;
    }
    # 6013 "/usr/local/include/neo-c.h"
    len=strlen(str);
    # 6019 "/usr/local/include/neo-c.h"
    if(head>=len) {
        # 6016 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/usr/local/include/neo-c.h",6016))), "/usr/local/include/neo-c.h", 6016, 467);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6016, 468));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6016, 469));
        return __result_obj__0;
    }
    # 6023 "/usr/local/include/neo-c.h"
    if(strcmp(str,"")==0) {
        # 6020 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/usr/local/include/neo-c.h",6020))), "/usr/local/include/neo-c.h", 6020, 470);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6020, 471));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6020, 472));
        return __result_obj__0;
    }
    # 6027 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 6024 "/usr/local/include/neo-c.h"
        head+=len;
    }
    # 6031 "/usr/local/include/neo-c.h"
    if(tail<0) {
        # 6028 "/usr/local/include/neo-c.h"
        tail+=len+1;
    }
    # 6035 "/usr/local/include/neo-c.h"
    if(head<0) {
        # 6032 "/usr/local/include/neo-c.h"
        head=0;
    }
    # 6039 "/usr/local/include/neo-c.h"
    if(tail<0) {
        # 6036 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/usr/local/include/neo-c.h",6036))), "/usr/local/include/neo-c.h", 6036, 473);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6036, 474));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6036, 475));
        return __result_obj__0;
    }
    # 6043 "/usr/local/include/neo-c.h"
    if(tail>=len) {
        # 6040 "/usr/local/include/neo-c.h"
        tail=len;
    }
    # 6043 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len-(tail-head)+1)), "/usr/local/include/neo-c.h", 6043, 476, "char*"), "/usr/local/include/neo-c.h", 6043, 477);
    # 6045 "/usr/local/include/neo-c.h"
    memcpy(result,str,head);
    # 6046 "/usr/local/include/neo-c.h"
    memcpy(result+head,str+tail,len-tail);
    # 6048 "/usr/local/include/neo-c.h"
    result[len-(tail-head)]=0;
    # 6050 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6050, 478);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6050, 479));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6050, 480));
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
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 482);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 485);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 486);
    return __result_obj__0;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 484);
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
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 483));
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
    struct list_item$1char$ph* litem_22;
    char*  __dec_obj14  ;
    struct list_item$1char$ph* litem_23;
    char*  __dec_obj15  ;
    # 1618 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1615, 497));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/usr/local/include/neo-c.h"
    if(self->len==0) {
        # 1619 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1619, 498, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1619, 499);
        # 1621 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/usr/local/include/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/usr/local/include/neo-c.h"
        __dec_obj13=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 501);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1623, 500);
        # 1625 "/usr/local/include/neo-c.h"
        self->tail=litem;
        # 1626 "/usr/local/include/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_22=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1629, 502, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1629, 503);
        # 1631 "/usr/local/include/neo-c.h"
        litem_22->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_22->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        __dec_obj14=litem_22->item,
        litem_22->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 505);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1633, 504);
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_22;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_22;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_23=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1639, 506, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1639, 507);
        # 1641 "/usr/local/include/neo-c.h"
        litem_23->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_23->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        __dec_obj15=litem_23->item,
        litem_23->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 509);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1643, 508);
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_23;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_23;
    }
    # 1649 "/usr/local/include/neo-c.h"
    self->len++;
    # 1651 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1651, 510));
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
    # 6059 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 6056 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6056, 481, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 6056, 487)))), "/usr/local/include/neo-c.h", 6056, 488);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 6056, 489);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6056, 490);
        return __result_obj__0;
    }
    # 6059 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6059, 491, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 6059, 492)), "/usr/local/include/neo-c.h", 6059, 493);
    # 6061 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    str=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 6061, 494, "struct buffer* "), "/usr/local/include/neo-c.h", 6061, 495)), "/usr/local/include/neo-c.h", 6061, 496);
    # 6063 "/usr/local/include/neo-c.h"
    self_len=charp_length(self);
    # 6073 "/usr/local/include/neo-c.h"
    for(i=0    ;i<self_len;i++){
        # 6072 "/usr/local/include/neo-c.h"
        if(self[i]==c) {
            # 6066 "/usr/local/include/neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"/usr/local/include/neo-c.h",6066), "/usr/local/include/neo-c.h", 6066, 511));
            # 6067 "/usr/local/include/neo-c.h"
            buffer_reset(str);
        }
        else {
            # 6070 "/usr/local/include/neo-c.h"
            buffer_append_char(str,self[i]);
        }
    }
    # 6077 "/usr/local/include/neo-c.h"
    if(buffer_length(str)!=0) {
        # 6074 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"/usr/local/include/neo-c.h",6074), "/usr/local/include/neo-c.h", 6074, 512));
    }
    # 6077 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6077, 513);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6077, 514);
    come_call_finalizer(buffer_finalize, str, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 6077, 515);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6077, 516);
    return __result_obj__0;
}

char*  charp_xsprintf(char* self, const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_xsprintf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6082 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "/usr/local/include/neo-c.h", 6082, 517);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6082, 518));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6082, 519));
    return __result_obj__0;
}

char*  int_xsprintf(int self, const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_xsprintf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6087 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "/usr/local/include/neo-c.h", 6087, 520);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6087, 521));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6087, 522));
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
    # 6095 "/usr/local/include/neo-c.h"
    if(str==((void*)0)) {
        # 6093 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6093))), "/usr/local/include/neo-c.h", 6093, 523);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6093, 524));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6093, 525));
        return __result_obj__0;
    }
    # 6095 "/usr/local/include/neo-c.h"
    len=charp_length(str);
    # 6096 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), "/usr/local/include/neo-c.h", 6096, 526, "char*"), "/usr/local/include/neo-c.h", 6096, 527);
    # 6098 "/usr/local/include/neo-c.h"
    n=0;
    # 6113 "/usr/local/include/neo-c.h"
    for(i=0    ;i<len;i++){
        # 6100 "/usr/local/include/neo-c.h"
        c=str[i];
        # 6111 "/usr/local/include/neo-c.h"
        if((c>=0&&c<32)||c==127) {
            # 6105 "/usr/local/include/neo-c.h"
            result[n++]=94;
            # 6106 "/usr/local/include/neo-c.h"
            result[n++]=c+65-1;
        }
        else {
            # 6109 "/usr/local/include/neo-c.h"
            result[n++]=c;
        }
    }
    # 6115 "/usr/local/include/neo-c.h"
    result[n]=0;
    # 6115 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6115, 528);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6115, 529));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6115, 530));
    return __result_obj__0;
}

char*  chara_printable(char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_printable"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6120 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_printable(str))), "/usr/local/include/neo-c.h", 6120, 531);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6120, 532));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6120, 533));
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
    # 6129 "/usr/local/include/neo-c.h"
    if(self==((void*)0)||str==((void*)0)||replace==((void*)0)) {
        # 6126 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/usr/local/include/neo-c.h",6126))), "/usr/local/include/neo-c.h", 6126, 534);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6126, 535));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6126, 536));
        return __result_obj__0;
    }
    # 6129 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 6129, 537, "struct buffer* "), "/usr/local/include/neo-c.h", 6129, 538)), "/usr/local/include/neo-c.h", 6129, 539);
    # 6131 "/usr/local/include/neo-c.h"
    p=self;
    # 6151 "/usr/local/include/neo-c.h"
    while((_Bool)1) {
        # 6134 "/usr/local/include/neo-c.h"
        p2=strstr(p,str);
        # 6145 "/usr/local/include/neo-c.h"
        if(p2==((void*)0)) {
            # 6137 "/usr/local/include/neo-c.h"
            p2=p;
            # 6141 "/usr/local/include/neo-c.h"
            while(*p2) {
                # 6139 "/usr/local/include/neo-c.h"
                p2++;
            }
            # 6141 "/usr/local/include/neo-c.h"
            buffer_append(result,p,p2-p);
            # 6142 "/usr/local/include/neo-c.h"
            break;
        }
        # 6145 "/usr/local/include/neo-c.h"
        buffer_append(result,p,p2-p);
        # 6146 "/usr/local/include/neo-c.h"
        buffer_append_str(result,replace);
        # 6148 "/usr/local/include/neo-c.h"
        p=p2+strlen(str);
    }
    # 6151 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(result))), "/usr/local/include/neo-c.h", 6151, 540);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 6151, 541);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6151, 542));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6151, 543));
    return __result_obj__0;
}

char*  xbasename(char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xbasename"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    # 6162 "/usr/local/include/neo-c.h"
    if(path==((void*)0)) {
        # 6160 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6160))), "/usr/local/include/neo-c.h", 6160, 544);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6160, 545));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6160, 546));
        return __result_obj__0;
    }
    # 6162 "/usr/local/include/neo-c.h"
    p=path+strlen(path);
    # 6173 "/usr/local/include/neo-c.h"
    while(p>=path) {
        # 6171 "/usr/local/include/neo-c.h"
        if(*p==47) {
            # 6166 "/usr/local/include/neo-c.h"
            break;
        }
        else {
            # 6169 "/usr/local/include/neo-c.h"
            p--;
        }
    }
    # 6180 "/usr/local/include/neo-c.h"
    if(p<path) {
        # 6174 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"/usr/local/include/neo-c.h",6174))), "/usr/local/include/neo-c.h", 6174, 547);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6174, 548));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6174, 549));
        return __result_obj__0;
    }
    else {
        # 6177 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"/usr/local/include/neo-c.h",6177))), "/usr/local/include/neo-c.h", 6177, 550);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6177, 551));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6177, 552));
        return __result_obj__0;
    }
    # 6180 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6180))), "/usr/local/include/neo-c.h", 6180, 553);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6180, 554));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6180, 555));
    return __result_obj__0;
}

char*  xnoextname(char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xnoextname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  path2  ;
    char* p;
    # 6188 "/usr/local/include/neo-c.h"
    if(path==((void*)0)) {
        # 6186 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6186))), "/usr/local/include/neo-c.h", 6186, 556);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6186, 557));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6186, 558));
        return __result_obj__0;
    }
    # 6188 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    path2=(char* )come_increment_ref_count(xbasename(path), "/usr/local/include/neo-c.h", 6188, 559);
    # 6190 "/usr/local/include/neo-c.h"
    p=path2+strlen(path2);
    # 6201 "/usr/local/include/neo-c.h"
    while(p>=path2) {
        # 6199 "/usr/local/include/neo-c.h"
        if(*p==46) {
            # 6194 "/usr/local/include/neo-c.h"
            break;
        }
        else {
            # 6197 "/usr/local/include/neo-c.h"
            p--;
        }
    }
    # 6208 "/usr/local/include/neo-c.h"
    if(p<path2) {
        # 6202 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path2,"/usr/local/include/neo-c.h",6202))), "/usr/local/include/neo-c.h", 6202, 560);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 6202, 561));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6202, 562));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6202, 563));
        return __result_obj__0;
    }
    else {
        # 6205 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(path2,0,p-path2))), "/usr/local/include/neo-c.h", 6205, 564);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 6205, 565));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6205, 566));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6205, 567));
        return __result_obj__0;
    }
    # 6208 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6208))), "/usr/local/include/neo-c.h", 6208, 568);
    (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 6208, 569));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6208, 570));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6208, 571));
    return __result_obj__0;
}

char*  xextname(char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xextname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    # 6216 "/usr/local/include/neo-c.h"
    if(path==((void*)0)) {
        # 6214 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6214))), "/usr/local/include/neo-c.h", 6214, 572);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6214, 573));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6214, 574));
        return __result_obj__0;
    }
    # 6216 "/usr/local/include/neo-c.h"
    p=path+strlen(path);
    # 6227 "/usr/local/include/neo-c.h"
    while(p>=path) {
        # 6225 "/usr/local/include/neo-c.h"
        if(*p==46) {
            # 6220 "/usr/local/include/neo-c.h"
            break;
        }
        else {
            # 6223 "/usr/local/include/neo-c.h"
            p--;
        }
    }
    # 6234 "/usr/local/include/neo-c.h"
    if(p<path) {
        # 6228 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"/usr/local/include/neo-c.h",6228))), "/usr/local/include/neo-c.h", 6228, 575);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6228, 576));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6228, 577));
        return __result_obj__0;
    }
    else {
        # 6231 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"/usr/local/include/neo-c.h",6231))), "/usr/local/include/neo-c.h", 6231, 578);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6231, 579));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6231, 580));
        return __result_obj__0;
    }
    # 6234 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6234))), "/usr/local/include/neo-c.h", 6234, 581);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6234, 582));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6234, 583));
    return __result_obj__0;
}

char*  _Bool_to_string(_Bool self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6258 "/usr/local/include/neo-c.h"
    if(self) {
        # 6253 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("true","/usr/local/include/neo-c.h",6253))), "/usr/local/include/neo-c.h", 6253, 584);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6253, 585));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6253, 586));
        return __result_obj__0;
    }
    else {
        # 6256 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("false","/usr/local/include/neo-c.h",6256))), "/usr/local/include/neo-c.h", 6256, 587);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6256, 588));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6256, 589));
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

char*  char_to_string(char self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6262 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%c",self))), "/usr/local/include/neo-c.h", 6262, 590);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6262, 591));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6262, 592));
    return __result_obj__0;
}

char*  short_to_string(short self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6267 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "/usr/local/include/neo-c.h", 6267, 593);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6267, 594));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6267, 595));
    return __result_obj__0;
}

char*  int_to_string(int self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6272 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "/usr/local/include/neo-c.h", 6272, 596);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6272, 597));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6272, 598));
    return __result_obj__0;
}

char*  long_to_string(long self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6277 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "/usr/local/include/neo-c.h", 6277, 599);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6277, 600));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6277, 601));
    return __result_obj__0;
}

char*  size_t_to_string(unsigned long  int  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6282 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "/usr/local/include/neo-c.h", 6282, 602);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6282, 603));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6282, 604));
    return __result_obj__0;
}

char*  float_to_string(float self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6287 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%f",self))), "/usr/local/include/neo-c.h", 6287, 605);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6287, 606));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6287, 607));
    return __result_obj__0;
}

char*  double_to_string(double self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6292 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%lf",self))), "/usr/local/include/neo-c.h", 6292, 608);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6292, 609));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6292, 610));
    return __result_obj__0;
}

char*  string_to_string(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6300 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 6298 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6298))), "/usr/local/include/neo-c.h", 6298, 611);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6298, 612));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6298, 613));
        return __result_obj__0;
    }
    # 6300 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/usr/local/include/neo-c.h",6300))), "/usr/local/include/neo-c.h", 6300, 614);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6300, 615));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6300, 616));
    return __result_obj__0;
}

char*  charp_to_string(const char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6308 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 6306 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6306))), "/usr/local/include/neo-c.h", 6306, 617);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6306, 618));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6306, 619));
        return __result_obj__0;
    }
    # 6308 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/usr/local/include/neo-c.h",6308))), "/usr/local/include/neo-c.h", 6308, 620);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6308, 621));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6308, 622));
    return __result_obj__0;
}

int _Bool_compare(_Bool left, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_compare"; neo_current_frame = &fr;
    # 6347 "/usr/local/include/neo-c.h"
    if(!left&&right) {
        # 6335 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left&&right) {
        # 6338 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(!left&&!right) {
        # 6341 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else {
        # 6344 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 6347 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int char_compare(char left, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_compare"; neo_current_frame = &fr;
    # 6362 "/usr/local/include/neo-c.h"
    if(left<right) {
        # 6353 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6356 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6359 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6362 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int short_compare(short left, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_compare"; neo_current_frame = &fr;
    # 6377 "/usr/local/include/neo-c.h"
    if(left<right) {
        # 6368 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6371 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6374 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6377 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int int_compare(int left, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_compare"; neo_current_frame = &fr;
    # 6392 "/usr/local/include/neo-c.h"
    if(left<right) {
        # 6383 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6386 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6389 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6392 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int long_compare(long left, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_compare"; neo_current_frame = &fr;
    # 6407 "/usr/local/include/neo-c.h"
    if(left<right) {
        # 6398 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6401 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6404 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6407 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int size_t_compare(unsigned long  int  left  , unsigned long  int  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_compare"; neo_current_frame = &fr;
    # 6422 "/usr/local/include/neo-c.h"
    if(left<right) {
        # 6413 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6416 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6419 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6422 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int float_compare(float left, float right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_compare"; neo_current_frame = &fr;
    # 6437 "/usr/local/include/neo-c.h"
    if(left<right) {
        # 6428 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6431 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6434 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6437 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int double_compare(double left, double right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_compare"; neo_current_frame = &fr;
    # 6452 "/usr/local/include/neo-c.h"
    if(left<right) {
        # 6443 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
        # 6446 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
        # 6449 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    # 6452 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int string_compare(char* left, char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_compare"; neo_current_frame = &fr;
    # 6467 "/usr/local/include/neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 6458 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
        # 6461 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
        # 6464 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 6467 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

int charp_compare(char* left, char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_compare"; neo_current_frame = &fr;
    # 6482 "/usr/local/include/neo-c.h"
    if(left==((void*)0)&&right==((void*)0)) {
        # 6473 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
        # 6476 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
        # 6479 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return 1;
    }
    # 6482 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

char*  charp_puts(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_puts"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6493 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 6491 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6491))), "/usr/local/include/neo-c.h", 6491, 623);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6491, 624));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6491, 625));
        return __result_obj__0;
    }
    # 6493 "/usr/local/include/neo-c.h"
    puts(self);
    # 6495 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/usr/local/include/neo-c.h",6495))), "/usr/local/include/neo-c.h", 6495, 626);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6495, 627));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6495, 628));
    return __result_obj__0;
}

char*  charp_print(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_print"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6503 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 6501 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6501))), "/usr/local/include/neo-c.h", 6501, 629);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6501, 630));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6501, 631));
        return __result_obj__0;
    }
    # 6503 "/usr/local/include/neo-c.h"
    printf("%s",self);
    # 6505 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/usr/local/include/neo-c.h",6505))), "/usr/local/include/neo-c.h", 6505, 632);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6505, 633));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6505, 634));
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
    # 6535 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 6533 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6533))), "/usr/local/include/neo-c.h", 6533, 635);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6533, 636));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6533, 637));
        return __result_obj__0;
    }
    # 6535 "/usr/local/include/neo-c.h"
    # 6537 "/usr/local/include/neo-c.h"
    # 6538 "/usr/local/include/neo-c.h"
    __builtin_va_start(args,self);
    # 6539 "/usr/local/include/neo-c.h"
    vasprintf(&msg2,self,args);
    # 6540 "/usr/local/include/neo-c.h"
    __builtin_va_end(args);
    # 6542 "/usr/local/include/neo-c.h"
    printf("%s",msg2);
    # 6544 "/usr/local/include/neo-c.h"
    free(msg2);
    # 6546 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/usr/local/include/neo-c.h",6546))), "/usr/local/include/neo-c.h", 6546, 638);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6546, 639));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6546, 640));
    return __result_obj__0;
}

int int_printf(int self, char* msg)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_printf"; neo_current_frame = &fr;
    # 6555 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 6553 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return self;
    }
    # 6555 "/usr/local/include/neo-c.h"
    printf(msg,self);
    # 6557 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long long_printf(long self, char* msg)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_printf"; neo_current_frame = &fr;
    # 6565 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 6563 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return self;
    }
    # 6565 "/usr/local/include/neo-c.h"
    printf(msg,self);
    # 6567 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

void int_times(int self, void* parent, void (*block)(void*,int))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_times"; neo_current_frame = &fr;
    int i;
    # 6575 "/usr/local/include/neo-c.h"
    for(i=0    ;i<self;i++){
        # 6573 "/usr/local/include/neo-c.h"
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
    # 6587 "/usr/local/include/neo-c.h"
    if(f==((void*)0)) {
        # 6585 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/usr/local/include/neo-c.h", 6585, 641, "buffer"), "/usr/local/include/neo-c.h", 6585, 642), "", 0))), "/usr/local/include/neo-c.h", 6585, 643);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 6585, 644);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6585, 645);
        return __result_obj__0;
    }
    # 6587 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 6587, 646, "struct buffer* "), "/usr/local/include/neo-c.h", 6587, 647)), "/usr/local/include/neo-c.h", 6587, 648);
    # 6601 "/usr/local/include/neo-c.h"
    while(1) {
        # 6590 "/usr/local/include/neo-c.h"
        char buf2[8192];
        memset(&buf2, 0, sizeof(buf2));
        # 6592 "/usr/local/include/neo-c.h"
        size=fread(buf2,1,8192,f);
        # 6594 "/usr/local/include/neo-c.h"
        buffer_append(buf,buf2,size);
        # 6599 "/usr/local/include/neo-c.h"
        if(size<8192) {
            # 6597 "/usr/local/include/neo-c.h"
            break;
        }
    }
    # 6601 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(buf, "/usr/local/include/neo-c.h", 6601, 649);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6601, 650);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6601, 651);
    return __result_obj__0;
}

int FILE_write(struct _IO_FILE*  f  , const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_write"; neo_current_frame = &fr;
    # 6610 "/usr/local/include/neo-c.h"
    if(f==((void*)0)||str==((void*)0)) {
        # 6607 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 6610 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return fwrite(str,strlen(str),1,f);
    neo_current_frame = fr.prev;
}

int FILE_fclose(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fclose"; neo_current_frame = &fr;
    int result;
    # 6619 "/usr/local/include/neo-c.h"
    if(f==((void*)0)) {
        # 6616 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 6619 "/usr/local/include/neo-c.h"
    result=fclose(f);
    # 6625 "/usr/local/include/neo-c.h"
    if(result<0) {
        # 6622 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return result;
    }
    # 6625 "/usr/local/include/neo-c.h"
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
    # 6633 "/usr/local/include/neo-c.h"
    if(f==((void*)0)||msg==((void*)0)) {
        # 6631 "/usr/local/include/neo-c.h"
                __result_obj__0 = f;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 6633 "/usr/local/include/neo-c.h"
    char msg2[1024*2*2*2];
    memset(&msg2, 0, sizeof(msg2));
    # 6635 "/usr/local/include/neo-c.h"
    # 6636 "/usr/local/include/neo-c.h"
    __builtin_va_start(args,msg);
    # 6637 "/usr/local/include/neo-c.h"
    vsnprintf(msg2,1024*2*2*2,msg,args);
    # 6638 "/usr/local/include/neo-c.h"
    __builtin_va_end(args);
    # 6640 "/usr/local/include/neo-c.h"
    result=fprintf(f,"%s",msg2);
    # 6646 "/usr/local/include/neo-c.h"
    if(result<0) {
        # 6643 "/usr/local/include/neo-c.h"
                __result_obj__0 = f;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 6646 "/usr/local/include/neo-c.h"
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
    # 6655 "/usr/local/include/neo-c.h"
    if(self==((void*)0)||file_name==((void*)0)) {
        # 6652 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 6655 "/usr/local/include/neo-c.h"
    # 6663 "/usr/local/include/neo-c.h"
    if(append) {
        # 6657 "/usr/local/include/neo-c.h"
        f=fopen(file_name,"a");
    }
    else {
        # 6660 "/usr/local/include/neo-c.h"
        f=fopen(file_name,"w");
    }
    # 6667 "/usr/local/include/neo-c.h"
    if(f==((void*)0)) {
        # 6664 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return -1;
    }
    # 6667 "/usr/local/include/neo-c.h"
    result=fwrite(self,strlen(self),1,f);
    # 6673 "/usr/local/include/neo-c.h"
    if(result!=1) {
        # 6670 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return result;
    }
    # 6675 "/usr/local/include/neo-c.h"
    result2=fclose(f);
    # 6679 "/usr/local/include/neo-c.h"
    if(result2<0) {
        # 6676 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return result2;
    }
    # 6679 "/usr/local/include/neo-c.h"
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
    # 6688 "/usr/local/include/neo-c.h"
    if(file_name==((void*)0)) {
        # 6685 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/usr/local/include/neo-c.h", 6685, 652, "buffer"), "/usr/local/include/neo-c.h", 6685, 653), "", 0))), "/usr/local/include/neo-c.h", 6685, 654);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 6685, 655);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6685, 656);
        return __result_obj__0;
    }
    # 6688 "/usr/local/include/neo-c.h"
    f=fopen(file_name,"r");
    # 6694 "/usr/local/include/neo-c.h"
    if(f==((void*)0)) {
        # 6691 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/usr/local/include/neo-c.h", 6691, 657, "buffer"), "/usr/local/include/neo-c.h", 6691, 658), "", 0))), "/usr/local/include/neo-c.h", 6691, 659);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 6691, 660);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6691, 661);
        return __result_obj__0;
    }
    # 6694 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 6694, 662, "struct buffer* "), "/usr/local/include/neo-c.h", 6694, 663)), "/usr/local/include/neo-c.h", 6694, 664);
    # 6708 "/usr/local/include/neo-c.h"
    while(1) {
        # 6697 "/usr/local/include/neo-c.h"
        char buf2[8192];
        memset(&buf2, 0, sizeof(buf2));
        # 6699 "/usr/local/include/neo-c.h"
        size=fread(buf2,1,8192,f);
        # 6701 "/usr/local/include/neo-c.h"
        buffer_append(buf,buf2,size);
        # 6706 "/usr/local/include/neo-c.h"
        if(size<8192) {
            # 6704 "/usr/local/include/neo-c.h"
            break;
        }
    }
    # 6710 "/usr/local/include/neo-c.h"
    result2=fclose(f);
    # 6714 "/usr/local/include/neo-c.h"
    if(result2<0) {
        # 6711 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/usr/local/include/neo-c.h", 6711, 665, "buffer"), "/usr/local/include/neo-c.h", 6711, 666), "", 0))), "/usr/local/include/neo-c.h", 6711, 667);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 6711, 668);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 6711, 669);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6711, 670);
        return __result_obj__0;
    }
    # 6714 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(buf, "/usr/local/include/neo-c.h", 6714, 671);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6714, 672);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6714, 673);
    return __result_obj__0;
}

struct list$1char$ph* FILE_readlines(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_readlines"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct list$1char$ph* __result_obj__0;
    # 6719 "/usr/local/include/neo-c.h"
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6719, 674, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 6719, 675)), "/usr/local/include/neo-c.h", 6719, 676);
    # 6725 "/usr/local/include/neo-c.h"
    if(f==((void*)0)) {
        # 6722 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6722, 677);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6722, 678);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6722, 679);
        return __result_obj__0;
    }
    # 6735 "/usr/local/include/neo-c.h"
    while(1) {
        # 6726 "/usr/local/include/neo-c.h"
        char buf[8192];
        memset(&buf, 0, sizeof(buf));
        # 6732 "/usr/local/include/neo-c.h"
        if(fgets(buf,8192,f)==((void*)0)) {
            # 6729 "/usr/local/include/neo-c.h"
            break;
        }
        # 6732 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(buf,"/usr/local/include/neo-c.h",6732), "/usr/local/include/neo-c.h", 6732, 680));
    }
    # 6735 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6735, 681);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6735, 682);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6735, 683);
    return __result_obj__0;
}

_Bool xiswalpha(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalpha"; neo_current_frame = &fr;
    _Bool result;
    # 6740 "/usr/local/include/neo-c.h"
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    # 6741 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xiswblank(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswblank"; neo_current_frame = &fr;
    # 6746 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xiswdigit(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswdigit"; neo_current_frame = &fr;
    # 6751 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xiswalnum(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalnum"; neo_current_frame = &fr;
    # 6756 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return xiswalpha(c)||xiswdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xiswascii(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswascii"; neo_current_frame = &fr;
    _Bool result;
    # 6761 "/usr/local/include/neo-c.h"
    result=(c>=32&&c<=126);
    # 6762 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

int string_index(char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_index"; neo_current_frame = &fr;
    # 7099 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return charp_index(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int charp_index(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index"; neo_current_frame = &fr;
    char* head;
    # 7108 "/usr/local/include/neo-c.h"
    if(str==((void*)0)||search_str==((void*)0)) {
        # 7105 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 7108 "/usr/local/include/neo-c.h"
    head=strstr(str,search_str);
    # 7114 "/usr/local/include/neo-c.h"
    if(head==((void*)0)) {
        # 7111 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return default_value;
    }
    # 7114 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return head-str;
    neo_current_frame = fr.prev;
}

