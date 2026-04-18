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

typedef struct __dirstream DIR;

typedef unsigned int  socklen_t  ;

typedef int (*rl_command_func_t)(int,int);

typedef char* (*rl_compentry_func_t)(const char*,int);

typedef char** (*rl_completion_func_t)(const char*,int,int);

typedef char* (*rl_quote_func_t)(char*,int,char*);

typedef char* (*rl_dequote_func_t)(char*,int);

typedef int (*rl_compignore_func_t)(char**);

typedef void (*rl_compdisp_func_t)(char**,int,int);

typedef void (*rl_macro_print_func_t)(const char*,const char*,int,const char*);

typedef int (*rl_hook_func_t)();

typedef int (*rl_getc_func_t)(struct _IO_FILE* );

typedef int (*rl_linebuf_func_t)(char*,int);

typedef int (*rl_intfunc_t)(int);

typedef int (*rl_icpfunc_t)(char*);

typedef int (*rl_icppfunc_t)(char**);

typedef void (*rl_voidfunc_t)();

typedef void (*rl_vintfunc_t)(int);

typedef void (*rl_vcpfunc_t)(char*);

typedef void (*rl_vcppfunc_t)(char**);

typedef char* (*rl_cpvfunc_t)();

typedef char* (*rl_cpifunc_t)(int);

typedef char* (*rl_cpcpfunc_t)(char*);

typedef char* (*rl_cpcppfunc_t)(char**);

typedef struct _keymap_entry  KEYMAP_ENTRY  ;

typedef struct _keymap_entry*  Keymap  ;

typedef char* (*tilde_hook_func_t)(char*);

typedef struct undo_list  UNDO_LIST  ;

typedef struct _funmap  FUNMAP  ;

typedef void* histdata_t;

typedef struct _hist_entry  HIST_ENTRY  ;

typedef struct _hist_state  HISTORY_STATE  ;

/// previous struct definition ///
struct _IO_FILE;

struct _IO_marker;

struct _IO_codecvt;

struct _IO_wide_data;

struct obstack;

struct tm;

struct sigevent;

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

struct stat
{
    unsigned long  int  st_dev  ;
    unsigned long  int  st_ino  ;
    unsigned long  int  st_nlink  ;
    unsigned int  st_mode  ;
    unsigned int  st_uid  ;
    unsigned int  st_gid  ;
    int __pad0;
    unsigned long  int  st_rdev  ;
    long  int  st_size  ;
    long  int  st_blksize  ;
    long  int  st_blocks  ;
    struct timespec  st_atim  ;
    struct timespec  st_mtim  ;
    struct timespec  st_ctim  ;
    long  int  __glibc_reserved[3]  ;
};

struct stat64
{
    unsigned long  int  st_dev  ;
    unsigned long  int  st_ino  ;
    unsigned long  int  st_nlink  ;
    unsigned int  st_mode  ;
    unsigned int  st_uid  ;
    unsigned int  st_gid  ;
    int __pad0;
    unsigned long  int  st_rdev  ;
    long  int  st_size  ;
    long  int  st_blksize  ;
    long  int  st_blocks  ;
    struct timespec  st_atim  ;
    struct timespec  st_mtim  ;
    struct timespec  st_ctim  ;
    long  int  __glibc_reserved[3]  ;
};

struct statx_timestamp
{
    long  int  tv_sec  ;
    unsigned int  tv_nsec  ;
    int  __statx_timestamp_pad1[1]  ;
};

struct statx
{
    unsigned int  stx_mask  ;
    unsigned int  stx_blksize  ;
    unsigned long  int  stx_attributes  ;
    unsigned int  stx_nlink  ;
    unsigned int  stx_uid  ;
    unsigned int  stx_gid  ;
    unsigned short int  stx_mode  ;
    unsigned short int  __statx_pad1[1]  ;
    unsigned long  int  stx_ino  ;
    unsigned long  int  stx_size  ;
    unsigned long  int  stx_blocks  ;
    unsigned long  int  stx_attributes_mask  ;
    struct statx_timestamp  stx_atime  ;
    struct statx_timestamp  stx_btime  ;
    struct statx_timestamp  stx_ctime  ;
    struct statx_timestamp  stx_mtime  ;
    unsigned int  stx_rdev_major  ;
    unsigned int  stx_rdev_minor  ;
    unsigned int  stx_dev_major  ;
    unsigned int  stx_dev_minor  ;
    unsigned long  int  __statx_pad2[14]  ;
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

struct winsize
{
    unsigned short int ws_row;
    unsigned short int ws_col;
    unsigned short int ws_xpixel;
    unsigned short int ws_ypixel;
};

enum { _ISupper=(((((0)<8)?(((1<<(0))<<8)):(((1<<(0))>>8))))),
_ISlower=(((((1)<8)?(((1<<(1))<<8)):(((1<<(1))>>8))))),
_ISalpha=(((((2)<8)?(((1<<(2))<<8)):(((1<<(2))>>8))))),
_ISdigit=(((((3)<8)?(((1<<(3))<<8)):(((1<<(3))>>8))))),
_ISxdigit=(((((4)<8)?(((1<<(4))<<8)):(((1<<(4))>>8))))),
_ISspace=(((((5)<8)?(((1<<(5))<<8)):(((1<<(5))>>8))))),
_ISprint=(((((6)<8)?(((1<<(6))<<8)):(((1<<(6))>>8))))),
_ISgraph=(((((7)<8)?(((1<<(7))<<8)):(((1<<(7))>>8))))),
_ISblank=(((((8)<8)?(((1<<(8))<<8)):(((1<<(8))>>8))))),
_IScntrl=(((((9)<8)?(((1<<(9))<<8)):(((1<<(9))>>8))))),
_ISpunct=(((((10)<8)?(((1<<(10))<<8)):(((1<<(10))>>8))))),
_ISalnum=(((((11)<8)?(((1<<(11))<<8)):(((1<<(11))>>8)))))
};

struct _keymap_entry
{
    char type;
    int (*(*function))(int,int)  ;
};

typedef struct _keymap_entry  KEYMAP_ENTRY_ARRAY[257]  ;

enum  undo_code { UNDO_DELETE 
,UNDO_INSERT 
,UNDO_BEGIN 
,UNDO_END 
};

struct undo_list
{
    struct undo_list*  next  ;
    int start;
    int end;
    char* text;
    enum undo_code  what  ;
};

struct _funmap
{
    const char* name;
    int (*(*function))(int,int)  ;
};

struct readline_state
{
    int point;
    int end;
    int mark;
    int buflen;
    char* buffer;
    struct undo_list*  ul  ;
    char* prompt;
    int rlstate;
    int done;
    struct _keymap_entry*  kmap  ;
    int (*(*lastfunc))(int,int)  ;
    int insmode;
    int edmode;
    char* kseq;
    int kseqlen;
    int pendingin;
    struct _IO_FILE*  inf  ;
    struct _IO_FILE*  outf  ;
    char* macro;
    int catchsigs;
    int catchsigwinch;
    char* (*(*entryfunc))(const char*,int)  ;
    char* (*(*menuentryfunc))(const char*,int)  ;
    int (*(*ignorefunc))(char**)  ;
    char** (*(*attemptfunc))(const char*,int,int)  ;
    const char* wordbreakchars;
    char reserved[64];
};

struct timex
{
    unsigned int modes;
    long  int  offset  ;
    long  int  freq  ;
    long  int  maxerror  ;
    long  int  esterror  ;
    int status;
    long  int  constant  ;
    long  int  precision  ;
    long  int  tolerance  ;
    struct timeval  time  ;
    long  int  tick  ;
    long  int  ppsfreq  ;
    long  int  jitter  ;
    int shift;
    long  int  stabil  ;
    long  int  jitcnt  ;
    long  int  calcnt  ;
    long  int  errcnt  ;
    long  int  stbcnt  ;
    int tai;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
    int :32;
};

struct tm
{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long  int tm_gmtoff;
    const char* tm_zone;
};

struct itimerspec
{
    struct timespec  it_interval  ;
    struct timespec  it_value  ;
};

struct _hist_entry
{
    char* line;
    char* timestamp;
    void*  data  ;
};

struct _hist_state
{
    struct _hist_entry**  entries  ;
    int offset;
    int length;
    int size;
    int flags;
};

struct sInfo
{
    int cursor;
    int page;
    char*  path  ;
    _Bool app_end;
    _Bool virtual_dir;
    struct list$1char$ph* files;
    struct list$1char$ph* selected_files;
    char*  searching_str  ;
};

struct __current_stack1__
{
    struct sInfo**  info  ;
    int* maxx;
    int* maxy;
    int* files_in_one_page;
    int* head;
    int* tail;
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
extern struct _keymap_entry  emacs_standard_keymap[257]  ;
extern struct _keymap_entry  emacs_meta_keymap[257]  ;
extern struct _keymap_entry  emacs_ctlx_keymap[257]  ;
extern struct _keymap_entry  vi_insertion_keymap[257]  ;
extern struct _keymap_entry  vi_movement_keymap[257]  ;
extern char* (*(*tilde_expansion_preexpansion_hook))(char*)  ;
extern char* (*(*tilde_expansion_failure_hook))(char*)  ;
extern char** tilde_additional_prefixes;
extern char** tilde_additional_suffixes;
extern struct undo_list*  rl_undo_list  ;
extern struct _funmap**  funmap  ;
extern const char* rl_library_version;
extern int rl_readline_version;
extern int rl_gnu_readline_p;
extern unsigned long  int rl_readline_state;
extern int rl_editing_mode;
extern int rl_insert_mode;
extern const char* rl_readline_name;
extern char* rl_prompt;
extern char* rl_display_prompt;
extern char* rl_line_buffer;
extern int rl_point;
extern int rl_end;
extern int rl_mark;
extern int rl_done;
extern int rl_eof_found;
extern int rl_pending_input;
extern int rl_dispatching;
extern int rl_explicit_arg;
extern int rl_numeric_arg;
extern int (*(*rl_last_func))(int,int)  ;
extern const char* rl_terminal_name;
extern struct _IO_FILE*  rl_instream  ;
extern struct _IO_FILE*  rl_outstream  ;
extern int rl_prefer_env_winsize;
extern int (*(*rl_startup_hook))()  ;
extern int (*(*rl_pre_input_hook))()  ;
extern int (*(*rl_event_hook))()  ;
extern int (*(*rl_signal_event_hook))()  ;
extern int (*(*rl_timeout_event_hook))()  ;
extern int (*(*rl_input_available_hook))()  ;
extern int (*(*rl_getc_function))(struct _IO_FILE* )  ;
extern void (*(*rl_redisplay_function))()  ;
extern void (*(*rl_prep_term_function))(int)  ;
extern void (*(*rl_deprep_term_function))()  ;
extern void (*(*rl_macro_display_hook))(const char*,const char*,int,const char*)  ;
extern struct _keymap_entry*  rl_executing_keymap  ;
extern struct _keymap_entry*  rl_binding_keymap  ;
extern int rl_executing_key;
extern char* rl_executing_keyseq;
extern int rl_key_sequence_length;
extern int rl_erase_empty_line;
extern int rl_already_prompted;
extern int rl_num_chars_to_read;
extern char* rl_executing_macro;
extern int rl_catch_signals;
extern int rl_catch_sigwinch;
extern int rl_change_environment;
extern char* (*(*rl_completion_entry_function))(const char*,int)  ;
extern char* (*(*rl_menu_completion_entry_function))(const char*,int)  ;
extern int (*(*rl_ignore_some_completions_function))(char**)  ;
extern char** (*(*rl_attempted_completion_function))(const char*,int,int)  ;
extern const char* rl_basic_word_break_characters;
extern const char* rl_completer_word_break_characters;
extern char* (*(*rl_completion_word_break_hook))()  ;
extern const char* rl_completer_quote_characters;
extern const char* rl_basic_quote_characters;
extern const char* rl_filename_quote_characters;
extern const char* rl_special_prefixes;
extern int (*(*rl_directory_completion_hook))(char**)  ;
extern int (*(*rl_directory_rewrite_hook))(char**)  ;
extern int (*(*rl_filename_stat_hook))(char**)  ;
extern char* (*(*rl_filename_rewrite_hook))(char*,int)  ;
extern char* (*(*rl_completion_rewrite_hook))(char*,int)  ;
extern void (*(*rl_completion_display_matches_hook))(char**,int,int)  ;
extern int rl_filename_completion_desired;
extern int rl_filename_quoting_desired;
extern int rl_full_quoting_desired;
extern char* (*(*rl_filename_quoting_function))(char*,int,char*)  ;
extern char* (*(*rl_filename_dequoting_function))(char*,int)  ;
extern int (*(*rl_char_is_quoted_p))(char*,int)  ;
extern int rl_attempted_completion_over;
extern int rl_completion_type;
extern int rl_completion_invoking_key;
extern int rl_completion_query_items;
extern int rl_completion_append_character;
extern int rl_completion_suppress_append;
extern int rl_completion_quote_character;
extern int rl_completion_found_quote;
extern int rl_completion_suppress_quote;
extern int rl_sort_completion_matches;
extern int rl_completion_mark_symlink_dirs;
extern int rl_ignore_completion_duplicates;
extern int rl_inhibit_completion;
extern int rl_persistent_signal_handlers;
extern char* __tzname[2];
extern int __daylight;
extern long  int __timezone;
extern char* tzname[2];
extern int daylight;
extern long  int timezone;
extern int getdate_err;
extern int history_base;
extern int history_length;
extern int history_max_entries;
extern int history_offset;
extern int history_lines_read_from_file;
extern int history_lines_written_to_file;
extern char history_expansion_char;
extern char history_subst_char;
extern char* history_word_delimiters;
extern char history_comment_char;
extern char* history_no_expand_chars;
extern char* history_search_delimiter_chars;
extern int history_quotes_inhibit_expansion;
extern int history_quoting_state;
extern int history_write_timestamps;
extern int history_multiline_entries;
extern int history_file_version;
extern int max_input_history;
extern int (*(*history_inhibit_expansion_function))(char*,int)  ;
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
int stat(const char* __restrict __file, struct stat* __restrict  __buf  );
int fstat(int __fd, struct stat*  __buf  );
int stat64(const char* __restrict __file, struct stat64* __restrict  __buf  );
int fstat64(int __fd, struct stat64*  __buf  );
int fstatat(int __fd, const char* __restrict __file, struct stat* __restrict  __buf  , int __flag);
int fstatat64(int __fd, const char* __restrict __file, struct stat64* __restrict  __buf  , int __flag);
int lstat(const char* __restrict __file, struct stat* __restrict  __buf  );
int lstat64(const char* __restrict __file, struct stat64* __restrict  __buf  );
int chmod(const char* __file, unsigned int  __mode  );
int lchmod(const char* __file, unsigned int  __mode  );
int fchmod(int __fd, unsigned int  __mode  );
int fchmodat(int __fd, const char* __file, unsigned int  __mode  , int __flag);
unsigned int  umask(unsigned int  __mask  );
unsigned int  getumask();
int mkdir(const char* __path, unsigned int  __mode  );
int mkdirat(int __fd, const char* __path, unsigned int  __mode  );
int mknod(const char* __path, unsigned int  __mode  , unsigned long  int  __dev  );
int mknodat(int __fd, const char* __path, unsigned int  __mode  , unsigned long  int  __dev  );
int mkfifo(const char* __path, unsigned int  __mode  );
int mkfifoat(int __fd, const char* __path, unsigned int  __mode  );
int utimensat(int __fd, const char* __path, const struct timespec  __times[2]  , int __flags);
int futimens(int __fd, const struct timespec  __times[2]  );
int statx(int __dirfd, const char* __restrict __path, int __flags, unsigned int __mask, struct statx* __restrict  __buf  );
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
int ioctl(int __fd, unsigned long  int __request, ...);
const unsigned short int** __ctype_b_loc() __attribute__ ((__const__));
const int**  __ctype_tolower_loc() __attribute__ ((__const__));
const int**  __ctype_toupper_loc() __attribute__ ((__const__));
int isalnum(int );
int isalpha(int );
int iscntrl(int );
int isdigit(int );
int islower(int );
int isgraph(int );
int isprint(int );
int ispunct(int );
int isspace(int );
int isupper(int );
int isxdigit(int );
int tolower(int __c);
int toupper(int __c);
int isblank(int );
int isctype(int __c, int __mask);
int isascii(int __c);
int toascii(int __c);
int _toupper(int );
int _tolower(int );
int isalnum_l(int , struct __locale_struct*    );
int isalpha_l(int , struct __locale_struct*    );
int iscntrl_l(int , struct __locale_struct*    );
int isdigit_l(int , struct __locale_struct*    );
int islower_l(int , struct __locale_struct*    );
int isgraph_l(int , struct __locale_struct*    );
int isprint_l(int , struct __locale_struct*    );
int ispunct_l(int , struct __locale_struct*    );
int isspace_l(int , struct __locale_struct*    );
int isupper_l(int , struct __locale_struct*    );
int isxdigit_l(int , struct __locale_struct*    );
int isblank_l(int , struct __locale_struct*    );
int __tolower_l(int __c, struct __locale_struct*  __l  );
int tolower_l(int __c, struct __locale_struct*  __l  );
int __toupper_l(int __c, struct __locale_struct*  __l  );
int toupper_l(int __c, struct __locale_struct*  __l  );
char* tilde_expand(const char* );
char* tilde_expand_word(const char* );
char* tilde_find_word(const char* , int , int* );
int rl_digit_argument(int , int );
int rl_universal_argument(int , int );
int rl_forward_byte(int , int );
int rl_forward_char(int , int );
int rl_forward(int , int );
int rl_backward_byte(int , int );
int rl_backward_char(int , int );
int rl_backward(int , int );
int rl_beg_of_line(int , int );
int rl_end_of_line(int , int );
int rl_forward_word(int , int );
int rl_backward_word(int , int );
int rl_refresh_line(int , int );
int rl_clear_screen(int , int );
int rl_clear_display(int , int );
int rl_skip_csi_sequence(int , int );
int rl_arrow_keys(int , int );
int rl_previous_screen_line(int , int );
int rl_next_screen_line(int , int );
int rl_insert(int , int );
int rl_quoted_insert(int , int );
int rl_tab_insert(int , int );
int rl_newline(int , int );
int rl_do_lowercase_version(int , int );
int rl_rubout(int , int );
int rl_delete(int , int );
int rl_rubout_or_delete(int , int );
int rl_delete_horizontal_space(int , int );
int rl_delete_or_show_completions(int , int );
int rl_insert_comment(int , int );
int rl_upcase_word(int , int );
int rl_downcase_word(int , int );
int rl_capitalize_word(int , int );
int rl_transpose_words(int , int );
int rl_transpose_chars(int , int );
int rl_char_search(int , int );
int rl_backward_char_search(int , int );
int rl_beginning_of_history(int , int );
int rl_end_of_history(int , int );
int rl_get_next_history(int , int );
int rl_get_previous_history(int , int );
int rl_operate_and_get_next(int , int );
int rl_fetch_history(int , int );
int rl_set_mark(int , int );
int rl_exchange_point_and_mark(int , int );
int rl_vi_editing_mode(int , int );
int rl_emacs_editing_mode(int , int );
int rl_overwrite_mode(int , int );
int rl_re_read_init_file(int , int );
int rl_dump_functions(int , int );
int rl_dump_macros(int , int );
int rl_dump_variables(int , int );
int rl_complete(int , int );
int rl_possible_completions(int , int );
int rl_insert_completions(int , int );
int rl_old_menu_complete(int , int );
int rl_menu_complete(int , int );
int rl_backward_menu_complete(int , int );
int rl_export_completions(int , int );
int rl_kill_word(int , int );
int rl_backward_kill_word(int , int );
int rl_kill_line(int , int );
int rl_backward_kill_line(int , int );
int rl_kill_full_line(int , int );
int rl_unix_word_rubout(int , int );
int rl_unix_filename_rubout(int , int );
int rl_unix_line_discard(int , int );
int rl_copy_region_to_kill(int , int );
int rl_kill_region(int , int );
int rl_copy_forward_word(int , int );
int rl_copy_backward_word(int , int );
int rl_yank(int , int );
int rl_yank_pop(int , int );
int rl_yank_nth_arg(int , int );
int rl_yank_last_arg(int , int );
int rl_bracketed_paste_begin(int , int );
int rl_reverse_search_history(int , int );
int rl_forward_search_history(int , int );
int rl_start_kbd_macro(int , int );
int rl_end_kbd_macro(int , int );
int rl_call_last_kbd_macro(int , int );
int rl_print_last_kbd_macro(int , int );
int rl_revert_line(int , int );
int rl_undo_command(int , int );
int rl_tilde_expand(int , int );
int rl_restart_output(int , int );
int rl_stop_output(int , int );
int rl_abort(int , int );
int rl_tty_status(int , int );
int rl_execute_named_command(int , int );
int rl_history_search_forward(int , int );
int rl_history_search_backward(int , int );
int rl_history_substr_search_forward(int , int );
int rl_history_substr_search_backward(int , int );
int rl_noninc_forward_search(int , int );
int rl_noninc_reverse_search(int , int );
int rl_noninc_forward_search_again(int , int );
int rl_noninc_reverse_search_again(int , int );
int rl_insert_close(int , int );
void rl_callback_handler_install(const char* , void (*(*anonymous_var_nameY1501))(char*)  );
void rl_callback_read_char();
void rl_callback_handler_remove();
void rl_callback_sigcleanup();
int rl_vi_redo(int , int );
int rl_vi_undo(int , int );
int rl_vi_yank_arg(int , int );
int rl_vi_fetch_history(int , int );
int rl_vi_search_again(int , int );
int rl_vi_search(int , int );
int rl_vi_complete(int , int );
int rl_vi_tilde_expand(int , int );
int rl_vi_prev_word(int , int );
int rl_vi_next_word(int , int );
int rl_vi_end_word(int , int );
int rl_vi_insert_beg(int , int );
int rl_vi_append_mode(int , int );
int rl_vi_append_eol(int , int );
int rl_vi_eof_maybe(int , int );
int rl_vi_insertion_mode(int , int );
int rl_vi_insert_mode(int , int );
int rl_vi_movement_mode(int , int );
int rl_vi_arg_digit(int , int );
int rl_vi_change_case(int , int );
int rl_vi_put(int , int );
int rl_vi_column(int , int );
int rl_vi_delete_to(int , int );
int rl_vi_change_to(int , int );
int rl_vi_yank_to(int , int );
int rl_vi_yank_pop(int , int );
int rl_vi_rubout(int , int );
int rl_vi_delete(int , int );
int rl_vi_back_to_indent(int , int );
int rl_vi_unix_word_rubout(int , int );
int rl_vi_first_print(int , int );
int rl_vi_char_search(int , int );
int rl_vi_match(int , int );
int rl_vi_change_char(int , int );
int rl_vi_subst(int , int );
int rl_vi_overstrike(int , int );
int rl_vi_overstrike_delete(int , int );
int rl_vi_replace(int , int );
int rl_vi_set_mark(int , int );
int rl_vi_goto_mark(int , int );
int rl_vi_check();
int rl_vi_domove(int , int* );
int rl_vi_bracktype(int );
void rl_vi_start_inserting(int , int , int );
int rl_vi_fWord(int , int );
int rl_vi_bWord(int , int );
int rl_vi_eWord(int , int );
int rl_vi_fword(int , int );
int rl_vi_bword(int , int );
int rl_vi_eword(int , int );
char* readline(const char* );
int rl_set_prompt(const char* );
int rl_expand_prompt(char* );
int rl_initialize();
int rl_discard_argument();
int rl_add_defun(const char* , int (*(*anonymous_var_nameY1604))(int,int)  , int );
int rl_bind_key(int , int (*(*anonymous_var_nameY1607))(int,int)  );
int rl_bind_key_in_map(int , int (*(*anonymous_var_nameY1609))(int,int)  , struct _keymap_entry*    );
int rl_unbind_key(int );
int rl_unbind_key_in_map(int , struct _keymap_entry*    );
int rl_bind_key_if_unbound(int , int (*(*anonymous_var_nameY1615))(int,int)  );
int rl_bind_key_if_unbound_in_map(int , int (*(*anonymous_var_nameY1617))(int,int)  , struct _keymap_entry*    );
int rl_unbind_function_in_map(int (*(*anonymous_var_nameY1619))(int,int)  , struct _keymap_entry*    );
int rl_unbind_command_in_map(const char* , struct _keymap_entry*    );
int rl_bind_keyseq(const char* , int (*(*anonymous_var_nameY1624))(int,int)  );
int rl_bind_keyseq_in_map(const char* , int (*(*anonymous_var_nameY1626))(int,int)  , struct _keymap_entry*    );
int rl_bind_keyseq_if_unbound(const char* , int (*(*anonymous_var_nameY1629))(int,int)  );
int rl_bind_keyseq_if_unbound_in_map(const char* , int (*(*anonymous_var_nameY1631))(int,int)  , struct _keymap_entry*    );
int rl_generic_bind(int , const char* , char* , struct _keymap_entry*    );
char* rl_variable_value(const char* );
int rl_variable_bind(const char* , const char* );
int rl_set_key(const char* , int (*(*anonymous_var_nameY1641))(int,int)  , struct _keymap_entry*    );
int rl_macro_bind(const char* , const char* , struct _keymap_entry*    );
int rl_translate_keyseq(const char* , char* , int* );
char* rl_untranslate_keyseq(int );
int (*(*rl_named_function(const char* )))(int,int) ;
int (*(*rl_function_of_keyseq(const char* , struct _keymap_entry*    , int* )))(int,int) ;
int (*(*rl_function_of_keyseq_len(const char* , unsigned long  int    , struct _keymap_entry*    , int* )))(int,int) ;
int rl_trim_arg_from_keyseq(const char* , unsigned long  int    , struct _keymap_entry*    );
void rl_list_funmap_names();
char** rl_invoking_keyseqs_in_map(int (*(*anonymous_var_nameY1661))(int,int)  , struct _keymap_entry*    );
char** rl_invoking_keyseqs(int (*(*anonymous_var_nameY1663))(int,int)  );
void rl_print_keybinding(const char* , struct _keymap_entry*    , int );
void rl_function_dumper(int );
void rl_macro_dumper(int );
void rl_variable_dumper(int );
int rl_read_init_file(const char* );
int rl_parse_and_bind(char* );
struct _keymap_entry*  rl_make_bare_keymap();
int rl_empty_keymap(struct _keymap_entry*    );
struct _keymap_entry*  rl_copy_keymap(struct _keymap_entry*    );
struct _keymap_entry*  rl_make_keymap();
void rl_discard_keymap(struct _keymap_entry*    );
void rl_free_keymap(struct _keymap_entry*    );
struct _keymap_entry*  rl_get_keymap_by_name(const char* );
char* rl_get_keymap_name(struct _keymap_entry*    );
void rl_set_keymap(struct _keymap_entry*    );
struct _keymap_entry*  rl_get_keymap();
int rl_set_keymap_name(const char* , struct _keymap_entry*    );
void rl_set_keymap_from_edit_mode();
char* rl_get_keymap_name_from_edit_mode();
int rl_add_funmap_entry(const char* , int (*(*anonymous_var_nameY1682))(int,int)  );
const char** rl_funmap_names();
void rl_initialize_funmap();
void rl_push_macro_input(char* );
void rl_add_undo(enum undo_code    , int , int , char* );
void rl_free_undo_list();
int rl_do_undo();
int rl_begin_undo_group();
int rl_end_undo_group();
int rl_modifying(int , int );
void rl_redisplay();
int rl_on_new_line();
int rl_on_new_line_with_prompt();
int rl_forced_update_display();
int rl_clear_visible_line();
int rl_clear_message();
int rl_reset_line_state();
int rl_crlf();
void rl_keep_mark_active();
void rl_activate_mark();
void rl_deactivate_mark();
int rl_mark_active_p();
int rl_message(const char* , ...) __attribute__((__format__ (printf, 1, 2)));
int rl_show_char(int );
int rl_character_len(int , int );
void rl_redraw_prompt_last_line();
void rl_save_prompt();
void rl_restore_prompt();
void rl_replace_line(const char* , int );
int rl_insert_text(const char* );
int rl_delete_text(int , int );
int rl_kill_text(int , int );
char* rl_copy_text(int , int );
void rl_prep_terminal(int );
void rl_deprep_terminal();
void rl_tty_set_default_bindings(struct _keymap_entry*    );
void rl_tty_unset_default_bindings(struct _keymap_entry*    );
int rl_tty_set_echoing(int );
int rl_reset_terminal(const char* );
void rl_resize_terminal();
void rl_set_screen_size(int , int );
void rl_get_screen_size(int* , int* );
void rl_reset_screen_size();
char* rl_get_termcap(const char* );
void rl_reparse_colors();
int rl_stuff_char(int );
int rl_execute_next(int );
int rl_clear_pending_input();
int rl_read_key();
int rl_getc(struct _IO_FILE*    );
int rl_set_keyboard_input_timeout(int );
int rl_set_timeout(unsigned int , unsigned int );
int rl_timeout_remaining(unsigned int* , unsigned int* );
void rl_extend_line_buffer(int );
int rl_ding();
int rl_alphabetic(int );
void rl_free(void* );
int rl_set_signals();
int rl_clear_signals();
void rl_cleanup_after_signal();
void rl_reset_after_signal();
void rl_free_line_state();
int rl_pending_signal();
void rl_check_signals();
void rl_echo_signal_char(int );
int rl_set_paren_blink_timeout(int );
void rl_clear_history();
int rl_maybe_save_line();
int rl_maybe_unsave_line();
int rl_maybe_replace_line();
int rl_complete_internal(int );
void rl_display_match_list(char** , int , int );
char** rl_completion_matches(const char* , char* (*(*anonymous_var_nameY1731))(const char*,int)  );
char* rl_username_completion_function(const char* , int );
char* rl_filename_completion_function(const char* , int );
int rl_completion_mode(int (*(*anonymous_var_nameY1736))(int,int)  );
int rl_save_state(struct readline_state*    );
int rl_restore_state(struct readline_state*    );
int clock_adjtime(int  __clock_id  , struct timex*  __utx  );
long  int  clock();
long  int  time(long  int*  __timer  );
double difftime(long  int  __time1  , long  int  __time0  );
long  int  mktime(struct tm*  __tp  );
unsigned long  int  strftime(char* __restrict __s, unsigned long  int  __maxsize  , const char* __restrict __format, const struct tm* __restrict  __tp  );
char* strptime(const char* __restrict __s, const char* __restrict __fmt, struct tm*  __tp  );
unsigned long  int  strftime_l(char* __restrict __s, unsigned long  int  __maxsize  , const char* __restrict __format, const struct tm* __restrict  __tp  , struct __locale_struct*  __loc  );
char* strptime_l(const char* __restrict __s, const char* __restrict __fmt, struct tm*  __tp  , struct __locale_struct*  __loc  );
struct tm*  gmtime(const long  int*  __timer  );
struct tm*  localtime(const long  int*  __timer  );
struct tm*  gmtime_r(const long  int* __restrict  __timer  , struct tm* __restrict  __tp  );
struct tm*  localtime_r(const long  int* __restrict  __timer  , struct tm* __restrict  __tp  );
char* asctime(const struct tm*  __tp  );
char* ctime(const long  int*  __timer  );
char* asctime_r(const struct tm* __restrict  __tp  , char* __restrict __buf);
char* ctime_r(const long  int* __restrict  __timer  , char* __restrict __buf);
void tzset();
long  int  timegm(struct tm*  __tp  );
long  int  timelocal(struct tm*  __tp  );
int dysize(int __year) __attribute__ ((__const__));
int nanosleep(const struct timespec*  __requested_time  , struct timespec*  __remaining  );
int clock_getres(int  __clock_id  , struct timespec*  __res  );
int clock_gettime(int  __clock_id  , struct timespec*  __tp  );
int clock_settime(int  __clock_id  , const struct timespec*  __tp  );
int clock_nanosleep(int  __clock_id  , int __flags, const struct timespec*  __req  , struct timespec*  __rem  );
int clock_getcpuclockid(int  __pid  , int*  __clock_id  );
int timer_create(int  __clock_id  , struct sigevent* __restrict  __evp  , void** __restrict  __timerid  );
int timer_delete(void*  __timerid  );
int timer_settime(void*  __timerid  , int __flags, const struct itimerspec* __restrict  __value  , struct itimerspec* __restrict  __ovalue  );
int timer_gettime(void*  __timerid  , struct itimerspec*  __value  );
int timer_getoverrun(void*  __timerid  );
int timespec_get(struct timespec*  __ts  , int __base);
int timespec_getres(struct timespec*  __ts  , int __base);
struct tm*  getdate(const char* __string);
int getdate_r(const char* __restrict __string, struct tm* __restrict  __resbufp  );
void using_history();
struct _hist_state*  history_get_history_state();
void history_set_history_state(struct _hist_state*    );
void add_history(const char* );
void add_history_time(const char* );
struct _hist_entry*  remove_history(int );
struct _hist_entry**  remove_history_range(int , int );
struct _hist_entry*  alloc_history_entry(char* , char* );
struct _hist_entry*  copy_history_entry(struct _hist_entry*    );
void*  free_history_entry(struct _hist_entry*    );
struct _hist_entry*  replace_history_entry(int , const char* , void*    );
void clear_history();
void stifle_history(int );
int unstifle_history();
int history_is_stifled();
struct _hist_entry**  history_list();
int where_history();
struct _hist_entry*  current_history();
struct _hist_entry*  history_get(int );
long  int  history_get_time(struct _hist_entry*    );
int history_total_bytes();
int history_set_pos(int );
struct _hist_entry*  previous_history();
struct _hist_entry*  next_history();
int history_search(const char* , int );
int history_search_prefix(const char* , int );
int history_search_pos(const char* , int , int );
int read_history(const char* );
int read_history_range(const char* , int , int );
int write_history(const char* );
int append_history(int , const char* );
int history_truncate_file(const char* , int );
int history_expand(const char* , char** );
char* history_arg_extract(int , int , const char* );
char* get_history_event(const char* , int* , int );
char** history_tokenize(const char* );
int xgetmaxx();
static void winsize_finalize(struct winsize*  self  );
int xgetmaxy();
static int lambda1(char* left, char* right);
void read_dir(struct sInfo*  info  );
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static struct list$1char$ph* list$1char$ph_sort_with_lambda(struct list$1char$ph* self, int (*compare)(char* ,char* ));
static struct list$1char$ph* list$1char$ph_merge_sort_with_lambda(struct list$1char$ph* self, int (*compare)(char* ,char* ));
static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  );
static struct list$1char$ph* list$1char$ph_merge_list_with_lambda(struct list$1char$ph* left, struct list$1char$ph* right, int (*compare)(char* ,char* ));
static int lambda2(char* left, char* right);
void vd(struct sInfo*  info  );
_Bool change_directory(struct sInfo*  info  , char* path, char* cursor_file);
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
void fix_cursor(struct sInfo*  info  );
static int list$1char$ph_length(struct list$1char$ph* self);
void view(struct sInfo*  info  );
static struct list$1char$ph* list$1char$ph_sublist(struct list$1char$ph* self, int begin, int tail);
static struct list$1char$ph* list$1char$ph_each(struct list$1char$ph* self, void* parent, void (*block)(void*,char* ,int,_Bool*));
void method_block1_mainnc(struct __current_stack1__* parent, char*  it  , int it2, _Bool* it3);
static _Bool list$1char$ph_contained(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static void stat_finalize(struct stat*  self  );
char*  cursor_path(struct sInfo*  info  );
static char*  list$1char$ph_item(struct list$1char$ph* self, int position, char*  default_value  );
char*  cursor_file(struct sInfo*  info  );
char*  selected_files(struct sInfo*  info  );
void search_file(struct sInfo*  info  );
void search_next_file(struct sInfo*  info  );
void search_prev_file(struct sInfo*  info  );
static struct list$1char$ph* list$1char$ph_reverse(struct list$1char$ph* self);
void select_files(struct sInfo*  info  );
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
void manual(struct sInfo*  info  );
void recursive_unlink(char*  path  );
_Bool is_protected_entry(char* name);
char*  resolve_item_path(struct sInfo*  info  , char* item);
char*  deletable_selected_files(struct sInfo*  info  );
void handmade_delete_file(char*  path  , struct sInfo*  info  );
void handmade_selected_delete_file(struct sInfo*  info  );
void input(struct sInfo*  info  );
int main(int argc, char** argv);
static void sInfo_finalize(struct sInfo*  self  );
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
    void* __right_value0 = (void*)0;
    struct winsize*  ws  ;
    int result;
    int __result_obj__0;
    memset(&ws, 0, sizeof(ws));
    memset(&result, 0, sizeof(result));
    # 30 "main.nc"
    ws=(struct winsize* )come_increment_ref_count((struct winsize *)come_calloc(1, sizeof(struct winsize )*(1), "main.nc", 30, 1, "struct winsize* "), "main.nc", 30, 2);
    # 31 "main.nc"
    ioctl(1,0x5413,ws);
    # 33 "main.nc"
    result=ws->ws_col;
    # 42 "main.nc"
    if(result==-1||result==0) {
        # 36 "main.nc"
                __result_obj__0 = getmaxx(stdscr);
        come_call_finalizer(winsize_finalize, ws, (void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc}", 36, 3);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else {
        # 39 "main.nc"
                __result_obj__0 = result;
        come_call_finalizer(winsize_finalize, ws, (void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc}", 39, 4);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 42 "main.nc"
        __result_obj__0 = result;
    come_call_finalizer(winsize_finalize, ws, (void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc}", 42, 5);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void winsize_finalize(struct winsize*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "winsize_finalize"; neo_current_frame = &fr;
    # 1 "winsize_finalize"
            neo_current_frame = fr.prev;
}

int xgetmaxy()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xgetmaxy"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct winsize*  ws  ;
    int result;
    int __result_obj__0;
    memset(&ws, 0, sizeof(ws));
    memset(&result, 0, sizeof(result));
    # 47 "main.nc"
    ws=(struct winsize* )come_increment_ref_count((struct winsize *)come_calloc(1, sizeof(struct winsize )*(1), "main.nc", 47, 6, "struct winsize* "), "main.nc", 47, 7);
    # 48 "main.nc"
    ioctl(1,0x5413,ws);
    # 50 "main.nc"
    result=ws->ws_row;
    # 59 "main.nc"
    if(result==-1||result==0) {
        # 53 "main.nc"
                __result_obj__0 = getmaxy(stdscr);
        come_call_finalizer(winsize_finalize, ws, (void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc}", 53, 8);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else {
        # 56 "main.nc"
                __result_obj__0 = result;
        come_call_finalizer(winsize_finalize, ws, (void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc}", 56, 9);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 59 "main.nc"
        __result_obj__0 = result;
    come_call_finalizer(winsize_finalize, ws, (void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc}", 59, 10);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static int lambda1(char* left, char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda1"; neo_current_frame = &fr;
    # 84 "main.nc"
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

void read_dir(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "read_dir"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj1;
    struct list$1char$ph* __dec_obj2;
    struct __dirstream*  dir  ;
    struct dirent*  entry  ;
    struct list$1char$ph* __dec_obj9;
    memset(&dir, 0, sizeof(dir));
    memset(&entry, 0, sizeof(entry));
    # 64 "main.nc"
    info->virtual_dir=(_Bool)0;
    # 65 "main.nc"
    __dec_obj1=info->files,
    info->files=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "main.nc", 65, 11, "struct list$1char$ph*"), "main.nc", 65, 17)), "main.nc", 2, 20);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc", 2, 19);
    # 66 "main.nc"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __dec_obj2=info->selected_files,
    info->selected_files=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "main.nc", 66, 21, "struct list$1char$ph*"), "main.nc", 66, 22)), "main.nc", 66, 24);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc", 66, 23);
    # 68 "main.nc"
    dir=opendir(info->path);
    # 77 "main.nc"
    if(dir==((void*)0)) {
        # 71 "main.nc"
        info->cursor=0;
        # 72 "main.nc"
        info->page=0;
        # 73 "main.nc"
        __right_value0 = (void*)0;
        list$1char$ph_push_back(info->files,(char* )come_increment_ref_count(__builtin_string("NO FILES","main.nc",73), "main.nc", 73, 39));
        # 74 "main.nc"
                neo_current_frame = fr.prev;
        return;
    }
    # 77 "main.nc"
    # 82 "main.nc"
    while(entry=readdir(dir)) {
        # 79 "main.nc"
        __right_value0 = (void*)0;
        list$1char$ph_push_back(info->files,(char* )come_increment_ref_count(__builtin_string(entry->d_name,"main.nc",79), "main.nc", 79, 40));
    }
    # 82 "main.nc"
    closedir(dir);
    # 84 "main.nc"
    __right_value0 = (void*)0;
    __dec_obj9=info->files,
    info->files=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_sort_with_lambda(info->files,lambda1), "main.nc", 84, 127);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc", 84, 126);
    neo_current_frame = fr.prev;
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
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 12);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 84, 15);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 84, 16);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 14);
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
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 13));
    }
            neo_current_frame = fr.prev;
}

static void list$1char$ph_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_finalize"; neo_current_frame = &fr;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 18);
    }
        neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj3  ;
    struct list_item$1char$ph* litem_0;
    char*  __dec_obj4  ;
    struct list_item$1char$ph* litem_1;
    char*  __dec_obj5  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_0, 0, sizeof(litem_0));
    memset(&litem_1, 0, sizeof(litem_1));
    # 1618 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1615 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1615, 25));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1649 "/usr/local/include/neo-c.h"
    if(self->len==0) {
        # 1619 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1619, 26, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1619, 27);
        # 1621 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1622 "/usr/local/include/neo-c.h"
        litem->next=((void*)0);
        # 1623 "/usr/local/include/neo-c.h"
        __dec_obj3=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 29);
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1623, 28);
        # 1625 "/usr/local/include/neo-c.h"
        self->tail=litem;
        # 1626 "/usr/local/include/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1629 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1629, 30, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1629, 31);
        # 1631 "/usr/local/include/neo-c.h"
        litem_0->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_0->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        __dec_obj4=litem_0->item,
        litem_0->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 33);
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1633, 32);
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_0;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_0;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1639, 34, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1639, 35);
        # 1641 "/usr/local/include/neo-c.h"
        litem_1->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_1->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        __dec_obj5=litem_1->item,
        litem_1->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 37);
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1643, 36);
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_1;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_1;
    }
    # 1649 "/usr/local/include/neo-c.h"
    self->len++;
    # 1651 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1651, 38));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_sort_with_lambda(struct list$1char$ph* self, int (*compare)(char* ,char* ))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_sort_with_lambda"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    # 2376 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 2374 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 2374, 41, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 2374, 42)))), "/usr/local/include/neo-c.h", 2374, 43);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 2374, 44);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2374, 45);
        return __result_obj__0;
    }
    # 2376 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=list$1char$ph_merge_sort_with_lambda(self,compare))), "/usr/local/include/neo-c.h", 2376, 123);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 2376, 124);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2376, 125);
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
    # 2337 "/usr/local/include/neo-c.h"
    if(self->head==((void*)0)) {
        # 2335 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=list$1char$ph_clone(self))), "/usr/local/include/neo-c.h", 2335, 72);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 2, 73);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2335, 74);
        return __result_obj__0;
    }
    # 2341 "/usr/local/include/neo-c.h"
    if(self->head->next==((void*)0)) {
        # 2338 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=list$1char$ph_clone(self))), "/usr/local/include/neo-c.h", 2338, 75);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "}", 2338, 76);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2338, 77);
        return __result_obj__0;
    }
    # 2341 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    list1=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 2341, 78, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 2341, 79)), "/usr/local/include/neo-c.h", 2341, 80);
    # 2342 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    list2=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 2342, 81, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 2342, 82)), "/usr/local/include/neo-c.h", 2342, 83);
    # 2344 "/usr/local/include/neo-c.h"
    it=self->head;
    # 2367 "/usr/local/include/neo-c.h"
    while((_Bool)1) {
        # 2347 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        list$1char$ph_push_back(list1,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 2347, 84, "char* "), "/usr/local/include/neo-c.h", 2347, 85));
        # 2348 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        list$1char$ph_push_back(list2,(char* )come_increment_ref_count((char* )come_memdup(it->next->item, "/usr/local/include/neo-c.h", 2348, 86, "char* "), "/usr/local/include/neo-c.h", 2348, 87));
        # 2354 "/usr/local/include/neo-c.h"
        if(it->next->next==((void*)0)) {
            # 2351 "/usr/local/include/neo-c.h"
            break;
        }
        # 2354 "/usr/local/include/neo-c.h"
        it=it->next->next;
        # 2365 "/usr/local/include/neo-c.h"
        if(it->next==((void*)0)) {
            # 2363 "/usr/local/include/neo-c.h"
            if(1) {
                # 2358 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
                list$1char$ph_push_back(list1,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 2358, 88, "char* "), "/usr/local/include/neo-c.h", 2358, 89));
            }
            else {
                # 2361 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
                list$1char$ph_push_back(list1,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 2361, 90, "char* "), "/usr/local/include/neo-c.h", 2361, 91));
            }
            # 2363 "/usr/local/include/neo-c.h"
            break;
        }
    }
    # 2367 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    left_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_merge_sort_with_lambda(list1,compare), "/usr/local/include/neo-c.h", 2367, 92);
    # 2368 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    right_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_merge_sort_with_lambda(list2,compare), "/usr/local/include/neo-c.h", 2368, 93);
    # 2370 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=list$1char$ph_merge_list_with_lambda(left_list,right_list,compare))), "/usr/local/include/neo-c.h", 2370, 116);
    come_call_finalizer(list$1char$ph$p_finalize, list1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2370, 117);
    come_call_finalizer(list$1char$ph$p_finalize, list2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2370, 118);
    come_call_finalizer(list$1char$ph$p_finalize, left_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2370, 119);
    come_call_finalizer(list$1char$ph$p_finalize, right_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2370, 120);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 2370, 121);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2370, 122);
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
    # 1513 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1511 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 46);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 47);
        return __result_obj__0;
    }
    # 1513 "/usr/local/include/neo-c.h"
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1513, 48, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 1513, 49)), "/usr/local/include/neo-c.h", 1513, 50);
    # 1515 "/usr/local/include/neo-c.h"
    it=self->head;
    # 1527 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1524 "/usr/local/include/neo-c.h"
        if(1) {
            # 1518 "/usr/local/include/neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1518, 65, "char* "), "/usr/local/include/neo-c.h", 1518, 66));
        }
        else {
            # 1521 "/usr/local/include/neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1521, 67, "char* "), "/usr/local/include/neo-c.h", 1521, 68));
        }
        # 1524 "/usr/local/include/neo-c.h"
        it=it->next;
    }
    # 1527 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 69);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 70);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 71);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj6  ;
    struct list_item$1char$ph* litem_2;
    char*  __dec_obj7  ;
    struct list_item$1char$ph* litem_3;
    char*  __dec_obj8  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_2, 0, sizeof(litem_2));
    memset(&litem_3, 0, sizeof(litem_3));
    # 1533 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1531 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1531, 51));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1564 "/usr/local/include/neo-c.h"
    if(self->len==0) {
        # 1534 "/usr/local/include/neo-c.h"
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1534, 52, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1534, 53);
        # 1536 "/usr/local/include/neo-c.h"
        litem->prev=((void*)0);
        # 1537 "/usr/local/include/neo-c.h"
        litem->next=((void*)0);
        # 1538 "/usr/local/include/neo-c.h"
        __dec_obj6=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 55);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 54);
        # 1540 "/usr/local/include/neo-c.h"
        self->tail=litem;
        # 1541 "/usr/local/include/neo-c.h"
        self->head=litem;
    }
    else if(self->len==1) {
        # 1544 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1544, 56, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1544, 57);
        # 1546 "/usr/local/include/neo-c.h"
        litem_2->prev=self->head;
        # 1547 "/usr/local/include/neo-c.h"
        litem_2->next=((void*)0);
        # 1548 "/usr/local/include/neo-c.h"
        __dec_obj7=litem_2->item,
        litem_2->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 59);
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 58);
        # 1550 "/usr/local/include/neo-c.h"
        self->tail=litem_2;
        # 1551 "/usr/local/include/neo-c.h"
        self->head->next=litem_2;
    }
    else {
        # 1554 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1554, 60, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1554, 61);
        # 1556 "/usr/local/include/neo-c.h"
        litem_3->prev=self->tail;
        # 1557 "/usr/local/include/neo-c.h"
        litem_3->next=((void*)0);
        # 1558 "/usr/local/include/neo-c.h"
        __dec_obj8=litem_3->item,
        litem_3->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 63);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 62);
        # 1560 "/usr/local/include/neo-c.h"
        self->tail->next=litem_3;
        # 1561 "/usr/local/include/neo-c.h"
        self->tail=litem_3;
    }
    # 1564 "/usr/local/include/neo-c.h"
    self->len++;
    # 1566 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1566, 64));
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
    # 2262 "/usr/local/include/neo-c.h"
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 2262, 94, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 2262, 95)), "/usr/local/include/neo-c.h", 2262, 96);
    # 2264 "/usr/local/include/neo-c.h"
    it=left->head;
    # 2265 "/usr/local/include/neo-c.h"
    it2=right->head;
    # 2331 "/usr/local/include/neo-c.h"
    while((_Bool)1) {
        # 2299 "/usr/local/include/neo-c.h"
        if(it&&it2) {
            # 2297 "/usr/local/include/neo-c.h"
            if(it->item==((void*)0)) {
                # 2270 "/usr/local/include/neo-c.h"
                it=it->next;
            }
            else if(it2->item==((void*)0)) {
                # 2273 "/usr/local/include/neo-c.h"
                it2=it2->next;
            }
            else if(compare(it->item,it2->item)<=0) {
                # 2284 "/usr/local/include/neo-c.h"
                if(1) {
                    # 2278 "/usr/local/include/neo-c.h"
                    __right_value0 = (void*)0;
                    list$1char$ph_push_back(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 2278, 97, "char* "), "/usr/local/include/neo-c.h", 2278, 98));
                }
                else {
                    # 2281 "/usr/local/include/neo-c.h"
                    __right_value0 = (void*)0;
                    list$1char$ph_push_back(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 2281, 99, "char* "), "/usr/local/include/neo-c.h", 2281, 100));
                }
                # 2284 "/usr/local/include/neo-c.h"
                it=it->next;
            }
            else {
                # 2295 "/usr/local/include/neo-c.h"
                if(1) {
                    # 2288 "/usr/local/include/neo-c.h"
                    __right_value0 = (void*)0;
                    list$1char$ph_push_back(result,(char* )come_increment_ref_count((char* )come_memdup(it2->item, "/usr/local/include/neo-c.h", 2288, 101, "char* "), "/usr/local/include/neo-c.h", 2288, 102));
                }
                else {
                    # 2291 "/usr/local/include/neo-c.h"
                    __right_value0 = (void*)0;
                    list$1char$ph_push_back(result,(char* )come_increment_ref_count((char* )come_memdup(it2->item, "/usr/local/include/neo-c.h", 2291, 103, "char* "), "/usr/local/include/neo-c.h", 2291, 104));
                }
                # 2295 "/usr/local/include/neo-c.h"
                it2=it2->next;
            }
        }
        # 2329 "/usr/local/include/neo-c.h"
        if(it==((void*)0)) {
            # 2312 "/usr/local/include/neo-c.h"
            if(it2!=((void*)0)) {
                # 2311 "/usr/local/include/neo-c.h"
                while(it2!=((void*)0)) {
                    # 2309 "/usr/local/include/neo-c.h"
                    if(1) {
                        # 2303 "/usr/local/include/neo-c.h"
                        __right_value0 = (void*)0;
                        list$1char$ph_push_back(result,(char* )come_increment_ref_count((char* )come_memdup(it2->item, "/usr/local/include/neo-c.h", 2303, 105, "char* "), "/usr/local/include/neo-c.h", 2303, 106));
                    }
                    else {
                        # 2306 "/usr/local/include/neo-c.h"
                        __right_value0 = (void*)0;
                        list$1char$ph_push_back(result,(char* )come_increment_ref_count((char* )come_memdup(it2->item, "/usr/local/include/neo-c.h", 2306, 107, "char* "), "/usr/local/include/neo-c.h", 2306, 108));
                    }
                    # 2309 "/usr/local/include/neo-c.h"
                    it2=it2->next;
                }
            }
            # 2312 "/usr/local/include/neo-c.h"
            break;
        }
        else if(it2==((void*)0)) {
            # 2327 "/usr/local/include/neo-c.h"
            if(it!=((void*)0)) {
                # 2326 "/usr/local/include/neo-c.h"
                while(it!=((void*)0)) {
                    # 2324 "/usr/local/include/neo-c.h"
                    if(1) {
                        # 2318 "/usr/local/include/neo-c.h"
                        __right_value0 = (void*)0;
                        list$1char$ph_push_back(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 2318, 109, "char* "), "/usr/local/include/neo-c.h", 2318, 110));
                    }
                    else {
                        # 2321 "/usr/local/include/neo-c.h"
                        __right_value0 = (void*)0;
                        list$1char$ph_push_back(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 2321, 111, "char* "), "/usr/local/include/neo-c.h", 2321, 112));
                    }
                    # 2324 "/usr/local/include/neo-c.h"
                    it=it->next;
                }
            }
            # 2327 "/usr/local/include/neo-c.h"
            break;
        }
    }
    # 2331 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 2331, 113);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2331, 114);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2331, 115);
    return __result_obj__0;
}

static int lambda2(char* left, char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda2"; neo_current_frame = &fr;
    # 131 "main.nc"
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

void vd(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "vd"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __dec_obj10;
    char*  history_fname  ;
    char* line;
    char*  cmdline  ;
    struct _IO_FILE*  f  ;
    char* result;
    struct list$1char$ph* __dec_obj11;
    memset(&history_fname, 0, sizeof(history_fname));
    memset(&line, 0, sizeof(line));
    memset(&cmdline, 0, sizeof(cmdline));
    memset(&f, 0, sizeof(f));
    memset(&result, 0, sizeof(result));
    # 89 "main.nc"
    info->virtual_dir=(_Bool)1;
    # 90 "main.nc"
    __dec_obj10=info->selected_files,
    info->selected_files=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "main.nc", 90, 128, "struct list$1char$ph*"), "main.nc", 90, 129)), "main.nc", 90, 131);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc", 90, 130);
    # 91 "main.nc"
    __right_value0 = (void*)0;
    history_fname=(char* )come_increment_ref_count(charp_operator_add(getenv("HOME"),"/mf_history"), "main.nc", 91, 132);
    # 93 "main.nc"
    read_history(history_fname);
    # 95 "main.nc"
    __right_value0 = (void*)0;
    line=readline(((char* )(__right_value0=charp_operator_add(getenv("PWD")," > "))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 95, 133));
    # 101 "main.nc"
    if(line==((void*)0)) {
        # 98 "main.nc"
                (history_fname = come_decrement_ref_count(history_fname, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 98, 134));
        neo_current_frame = fr.prev;
        return;
    }
    # 101 "main.nc"
    add_history(line);
    # 102 "main.nc"
    write_history(history_fname);
    # 104 "main.nc"
    __right_value0 = (void*)0;
    cmdline=(char* )come_increment_ref_count(__builtin_string(line,"main.nc",104), "main.nc", 104, 135);
    # 106 "main.nc"
    free(line);
    # 108 "main.nc"
    char buf[8192];
    memset(&buf, 0, sizeof(buf));
    # 110 "main.nc"
    f=popen(cmdline,"r");
    # 114 "main.nc"
    if(f==((void*)0)) {
        # 112 "main.nc"
                (history_fname = come_decrement_ref_count(history_fname, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 112, 136));
        (cmdline = come_decrement_ref_count(cmdline, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 112, 137));
        neo_current_frame = fr.prev;
        return;
    }
    # 114 "main.nc"
    __right_value0 = (void*)0;
    list$1char$ph_push_back(info->files,(char* )come_increment_ref_count(__builtin_string(".","main.nc",114), "main.nc", 114, 138));
    # 115 "main.nc"
    __right_value0 = (void*)0;
    list$1char$ph_push_back(info->files,(char* )come_increment_ref_count(__builtin_string("..","main.nc",115), "main.nc", 115, 139));
    # 127 "main.nc"
    while(1) {
        # 118 "main.nc"
        char file[4096];
        memset(&file, 0, sizeof(file));
        # 119 "main.nc"
        result=fgets(file,4096,f);
        # 125 "main.nc"
        if(result==((void*)0)) {
            # 122 "main.nc"
            break;
        }
        # 125 "main.nc"
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        list$1char$ph_push_back(info->files,(char* )come_increment_ref_count(string_chomp(((char* )(__right_value0=__builtin_string(result,"main.nc",125)))), "main.nc", 125, 140));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 125, 141));
    }
    # 131 "main.nc"
    if(pclose(f)<0) {
        # 128 "main.nc"
                (history_fname = come_decrement_ref_count(history_fname, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 128, 142));
        (cmdline = come_decrement_ref_count(cmdline, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 128, 143));
        neo_current_frame = fr.prev;
        return;
    }
    # 131 "main.nc"
    __right_value0 = (void*)0;
    __dec_obj11=info->files,
    info->files=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_sort_with_lambda(info->files,lambda2), "main.nc", 131, 145);
    come_call_finalizer(list$1char$ph_finalize, __dec_obj11,(void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc", 131, 144);
    (history_fname = come_decrement_ref_count(history_fname, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 134, 146));
    (cmdline = come_decrement_ref_count(cmdline, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 134, 147));
    neo_current_frame = fr.prev;
}

_Bool change_directory(struct sInfo*  info  , char* path, char* cursor_file)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "change_directory"; neo_current_frame = &fr;
    char* absolute_path;
    void* __right_value0 = (void*)0;
    char*  absolute_path2  ;
    char*  __dec_obj12  ;
    int i;
    struct list$1char$ph* _o2_saved_1;
    char*  it  ;
    _Bool __result_obj__0;
    memset(&absolute_path, 0, sizeof(absolute_path));
    memset(&absolute_path2, 0, sizeof(absolute_path2));
    memset(&i, 0, sizeof(i));
    memset(&_o2_saved_1, 0, sizeof(_o2_saved_1));
    memset(&it, 0, sizeof(it));
    # 138 "main.nc"
    absolute_path=realpath(path,((void*)0));
    # 140 "main.nc"
    absolute_path2=(char* )come_increment_ref_count(__builtin_string(absolute_path,"main.nc",140), "main.nc", 140, 148);
    # 142 "main.nc"
    free(absolute_path);
    # 144 "main.nc"
    __dec_obj12=info->path,
    info->path=(char* )come_increment_ref_count(absolute_path2, "main.nc", 144, 150);
    __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "main.nc", 144, 149);
    # 145 "main.nc"
    read_dir(info);
    # 147 "main.nc"
    chdir(info->path);
    # 148 "main.nc"
    setenv("PWD",info->path,1);
    # 167 "main.nc"
    if(cursor_file) {
        # 151 "main.nc"
        i=0;
        # 161 "main.nc"
        for(_o2_saved_1=(struct list$1char$ph*)come_increment_ref_count(info->files, "main.nc", 152, 151),it=list$1char$ph_begin(_o2_saved_1)        ;!list$1char$ph_end(_o2_saved_1);it=list$1char$ph_next(_o2_saved_1)){
            # 159 "main.nc"
            if(strcmp(it,cursor_file)==0) {
                # 154 "main.nc"
                info->cursor=i;
                # 155 "main.nc"
                fix_cursor(info);
                # 156 "main.nc"
                break;
            }
            # 159 "main.nc"
            i++;
        }
        come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc}", 167, 152);
    }
    else {
        # 163 "main.nc"
        info->cursor=0;
        # 164 "main.nc"
        info->page=0;
    }
    # 167 "main.nc"
        __result_obj__0 = (_Bool)1;
    (absolute_path2 = come_decrement_ref_count(absolute_path2, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 167, 153));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_4  ;
    # 1682 "/usr/local/include/neo-c.h"
    # 1689 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1685 "/usr/local/include/neo-c.h"
        # 1686 "/usr/local/include/neo-c.h"
        memset(&result,0,sizeof(char* ));
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
    memset(&result_4,0,sizeof(char* ));
    # 1697 "/usr/local/include/neo-c.h"
        __result_obj__0 = result_4;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_end"; neo_current_frame = &fr;
    # 1721 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
            neo_current_frame = fr.prev;
}

static char*  list$1char$ph_next(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_5  ;
    # 1701 "/usr/local/include/neo-c.h"
    # 1709 "/usr/local/include/neo-c.h"
    if(self==((void*)0)||self->it==((void*)0)) {
        # 1704 "/usr/local/include/neo-c.h"
        # 1705 "/usr/local/include/neo-c.h"
        memset(&result,0,sizeof(char* ));
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
    memset(&result_5,0,sizeof(char* ));
    # 1717 "/usr/local/include/neo-c.h"
        __result_obj__0 = result_5;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void fix_cursor(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "fix_cursor"; neo_current_frame = &fr;
    int maxx;
    int maxy;
    memset(&maxx, 0, sizeof(maxx));
    memset(&maxy, 0, sizeof(maxy));
    # 173 "main.nc"
    maxx=xgetmaxx();
    # 174 "main.nc"
    maxy=xgetmaxy()-1;
    # 179 "main.nc"
    if(info->cursor>=list$1char$ph_length(info->files)) {
        # 177 "main.nc"
        info->cursor=list$1char$ph_length(info->files)-1;
    }
    # 183 "main.nc"
    if(info->cursor<0) {
        # 180 "main.nc"
        info->cursor=0;
    }
    # 183 "main.nc"
    info->page=info->cursor/(3*maxy);
    neo_current_frame = fr.prev;
}

static int list$1char$ph_length(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_length"; neo_current_frame = &fr;
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

void view(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "view"; neo_current_frame = &fr;
    int maxx;
    int maxy;
    int files_in_one_page;
    int head;
    int tail;
    void* __right_value0 = (void*)0;
    struct __current_stack1__ __current_stack1__;
    memset(&maxx, 0, sizeof(maxx));
    memset(&maxy, 0, sizeof(maxy));
    memset(&files_in_one_page, 0, sizeof(files_in_one_page));
    memset(&head, 0, sizeof(head));
    memset(&tail, 0, sizeof(tail));
    memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
    # 188 "main.nc"
    maxx=xgetmaxx();
    # 189 "main.nc"
    maxy=xgetmaxy()-1;
    # 191 "main.nc"
    werase(stdscr);
    # 193 "main.nc"
    files_in_one_page=maxy*3;
    # 195 "main.nc"
    head=info->page*files_in_one_page;
    # 196 "main.nc"
    tail=(info->page+1)*files_in_one_page;
    # 251 "main.nc"
    ({    __current_stack1__.info = &info;
    __current_stack1__.maxx = &maxx;
    __current_stack1__.maxy = &maxy;
    __current_stack1__.files_in_one_page = &files_in_one_page;
    __current_stack1__.head = &head;
    __current_stack1__.tail = &tail;
    })    ,    list$1char$ph_each(((struct list$1char$ph*)(__right_value0=list$1char$ph_sublist(info->files,head,tail))),&__current_stack1__,(void*)method_block1_mainnc);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "main.nc}", 198, 185);
    # 251 "main.nc"
    wattr_on(stdscr,(unsigned int )((((unsigned int )((1U))<<((10)+8)))),((void*)0));
    # 252 "main.nc"
    mvprintw(maxy,0,"%s page %d files %d head %d tail %d press ? for manual",info->path,info->page,list$1char$ph_length(info->files),head,tail);
    # 253 "main.nc"
    wattr_off(stdscr,(unsigned int )((((unsigned int )((1U))<<((10)+8)))),((void*)0));
    # 255 "main.nc"
    wrefresh(stdscr);
    neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_sublist(struct list$1char$ph* self, int begin, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_sublist"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct list_item$1char$ph* it;
    int i;
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    # 2115 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 2112 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 2112, 154);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2112, 155);
        return __result_obj__0;
    }
    # 2115 "/usr/local/include/neo-c.h"
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 2115, 156, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 2115, 157)), "/usr/local/include/neo-c.h", 2115, 158);
    # 2121 "/usr/local/include/neo-c.h"
    if(begin<0) {
        # 2118 "/usr/local/include/neo-c.h"
        begin+=self->len;
    }
    # 2125 "/usr/local/include/neo-c.h"
    if(tail<0) {
        # 2122 "/usr/local/include/neo-c.h"
        tail+=self->len+1;
    }
    # 2129 "/usr/local/include/neo-c.h"
    if(begin<0) {
        # 2126 "/usr/local/include/neo-c.h"
        begin=0;
    }
    # 2133 "/usr/local/include/neo-c.h"
    if(begin>=self->len) {
        # 2130 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 2130, 159, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 2130, 160)))), "/usr/local/include/neo-c.h", 2130, 161);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2130, 162);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 2130, 163);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2130, 164);
        return __result_obj__0;
    }
    # 2137 "/usr/local/include/neo-c.h"
    if(tail>=self->len) {
        # 2134 "/usr/local/include/neo-c.h"
        tail=self->len;
    }
    # 2137 "/usr/local/include/neo-c.h"
    it=self->head;
    # 2138 "/usr/local/include/neo-c.h"
    i=0;
    # 2145 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 2143 "/usr/local/include/neo-c.h"
        if(i>=begin&&i<tail) {
            # 2141 "/usr/local/include/neo-c.h"
            list$1char$ph_push_back(result,(char* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2141, 165));
        }
        # 2143 "/usr/local/include/neo-c.h"
        it=it->next;
        # 2144 "/usr/local/include/neo-c.h"
        i++;
    }
    # 2147 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 2147, 166);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2147, 167);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 2147, 168);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_each(struct list$1char$ph* self, void* parent, void (*block)(void*,char* ,int,_Bool*))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_each"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    struct list_item$1char$ph* it;
    int i;
    _Bool end_flag;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    memset(&end_flag, 0, sizeof(end_flag));
    # 1729 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1726 "/usr/local/include/neo-c.h"
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1729 "/usr/local/include/neo-c.h"
    it=self->head;
    # 1730 "/usr/local/include/neo-c.h"
    i=0;
    # 1742 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1732 "/usr/local/include/neo-c.h"
        end_flag=(_Bool)0;
        # 1733 "/usr/local/include/neo-c.h"
        block(parent,(char* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 1733, 169),i,&end_flag);
        # 1738 "/usr/local/include/neo-c.h"
        if(end_flag==(_Bool)1) {
            # 1736 "/usr/local/include/neo-c.h"
            break;
        }
        # 1738 "/usr/local/include/neo-c.h"
        it=it->next;
        # 1739 "/usr/local/include/neo-c.h"
        i++;
    }
    # 1742 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void method_block1_mainnc(struct __current_stack1__* parent, char*  it  , int it2, _Bool* it3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block1_mainnc"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    char*  path  ;
    struct stat  stat_  ;
    _Bool is_dir;
    _Bool selected;
    int index;
    int cols;
    int x;
    int y;
    memset(&path, 0, sizeof(path));
    memset(&stat_, 0, sizeof(stat_));
    memset(&is_dir, 0, sizeof(is_dir));
    memset(&selected, 0, sizeof(selected));
    memset(&index, 0, sizeof(index));
    memset(&cols, 0, sizeof(cols));
    memset(&x, 0, sizeof(x));
    memset(&y, 0, sizeof(y));
    # 200 "main.nc"
    path=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value5=string_operator_add((*(parent->info))->path,((char* )(__right_value4=__builtin_string("/","main.nc",200)))))),it), "main.nc", 200, 170);
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 200, 171));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 200, 172));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 200, 173));
    # 202 "main.nc"
    # 203 "main.nc"
    (void)stat(path,&stat_);
    # 205 "main.nc"
    is_dir=((((stat_.st_mode))&0170000)==(0040000));
    # 206 "main.nc"
    selected=list$1char$ph_contained((*(parent->info))->selected_files,it,(_Bool)0);
    # 208 "main.nc"
    index=it2;
    # 209 "main.nc"
    cols=(*(parent->maxx))/3;
    # 210 "main.nc"
    x=(index/(*(parent->maxy)))*cols;
    # 211 "main.nc"
    y=index%(*(parent->maxy));
    # 250 "main.nc"
    if(it2+(*(parent->head))==(*(parent->info))->cursor) {
        # 213 "main.nc"
        wattr_on(stdscr,(unsigned int )((((unsigned int )((1U))<<((10)+8)))),((void*)0));
        # 230 "main.nc"
        if(selected) {
            # 221 "main.nc"
            if(is_dir) {
                # 216 "main.nc"
                __right_value0 = (void*)0;
                mvprintw(y,x,"* %s/",((char* )(__right_value0=charp_substring(it,0,cols-3))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 216, 174));
            }
            else {
                # 219 "main.nc"
                __right_value0 = (void*)0;
                mvprintw(y,x,"* %s",((char* )(__right_value0=charp_substring(it,0,cols-2))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 219, 175));
            }
        }
        else {
            # 229 "main.nc"
            if(is_dir) {
                # 224 "main.nc"
                __right_value0 = (void*)0;
                mvprintw(y,x,"%s/",((char* )(__right_value0=charp_substring(it,0,cols-1))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 224, 176));
            }
            else {
                # 227 "main.nc"
                __right_value0 = (void*)0;
                mvprintw(y,x,"%s",((char* )(__right_value0=charp_substring(it,0,cols))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 227, 177));
            }
        }
        # 230 "main.nc"
        wattr_off(stdscr,(unsigned int )((((unsigned int )((1U))<<((10)+8)))),((void*)0));
    }
    else {
        # 249 "main.nc"
        if(selected) {
            # 240 "main.nc"
            if(is_dir) {
                # 235 "main.nc"
                __right_value0 = (void*)0;
                mvprintw(y,x,"* %s/",((char* )(__right_value0=charp_substring(it,0,cols-3))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 235, 178));
            }
            else {
                # 238 "main.nc"
                __right_value0 = (void*)0;
                mvprintw(y,x,"* %s",((char* )(__right_value0=charp_substring(it,0,cols-2))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 238, 179));
            }
        }
        else {
            # 248 "main.nc"
            if(is_dir) {
                # 243 "main.nc"
                __right_value0 = (void*)0;
                mvprintw(y,x,"%s/",((char* )(__right_value0=charp_substring(it,0,cols-1))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 243, 180));
            }
            else {
                # 246 "main.nc"
                __right_value0 = (void*)0;
                mvprintw(y,x,"%s",((char* )(__right_value0=charp_substring(it,0,cols))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 246, 181));
            }
        }
    }
    (it = come_decrement_ref_count(it, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 253, 182));
    (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 253, 183));
    come_call_finalizer(stat_finalize, (&stat_), (void*)0, (void*)0, 1, 0, 0, (void*)0, "main.nc}", 253, 184);
        neo_current_frame = fr.prev;
}

static _Bool list$1char$ph_contained(struct list$1char$ph* self, char*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_contained"; neo_current_frame = &fr;
    char*  it  ;
    memset(&it, 0, sizeof(it));
    # 2253 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 2250 "/usr/local/include/neo-c.h"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 2259 "/usr/local/include/neo-c.h"
    for(it=list$1char$ph_begin(self)    ;!list$1char$ph_end(self);it=list$1char$ph_next(self)){
        # 2257 "/usr/local/include/neo-c.h"
        if((!by_pointer&&string_equals(it,item))||(by_pointer&&it==item)) {
            # 2255 "/usr/local/include/neo-c.h"
                        neo_current_frame = fr.prev;
            return (_Bool)1;
        }
    }
    # 2259 "/usr/local/include/neo-c.h"
        neo_current_frame = fr.prev;
    return (_Bool)0;
        neo_current_frame = fr.prev;
}

static void stat_finalize(struct stat*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "stat_finalize"; neo_current_frame = &fr;
    # 1 "stat_finalize"
        neo_current_frame = fr.prev;
}

char*  cursor_path(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "cursor_path"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* file_name;
    char*  __result_obj__0  ;
    memset(&file_name, 0, sizeof(file_name));
    # 261 "main.nc"
    file_name=((char* )(__right_value0=list$1char$ph_item(info->files,info->cursor,((void*)0))));
    # 262 "main.nc"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%s/%s",info->path,file_name))), "main.nc", 262, 192);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 262, 193));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "main.nc", 262, 194));
    return __result_obj__0;
}

static char*  list$1char$ph_item(struct list$1char$ph* self, int position, char*  default_value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_item"; neo_current_frame = &fr;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    memset(&it, 0, sizeof(it));
    memset(&i, 0, sizeof(i));
    # 1750 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1747 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 1747, 186);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 1747, 187));
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
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 1758, 188);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 1758, 189));
            return __result_obj__0;
        }
        # 1760 "/usr/local/include/neo-c.h"
        it=it->next;
        # 1761 "/usr/local/include/neo-c.h"
        i++;
    }
    # 1764 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 1764, 190);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 1764, 191));
    return __result_obj__0;
}

char*  cursor_file(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "cursor_file"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    char*  __result_obj__0  ;
    # 267 "main.nc"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=__builtin_string(((char* )(__right_value0=list$1char$ph_item(info->files,info->cursor,((void*)0)))),"main.nc",267))), "main.nc", 267, 195);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 267, 196));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 267, 197));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "main.nc", 267, 198));
    return __result_obj__0;
}

char*  selected_files(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "selected_files"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    struct list$1char$ph* _o2_saved_2;
    char*  it  ;
    char*  __result_obj__0  ;
    memset(&buf, 0, sizeof(buf));
    memset(&_o2_saved_2, 0, sizeof(_o2_saved_2));
    memset(&it, 0, sizeof(it));
    # 272 "main.nc"
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "main.nc", 272, 199, "struct buffer* "), "main.nc", 272, 200)), "main.nc", 272, 201);
    # 279 "main.nc"
    for(_o2_saved_2=(struct list$1char$ph*)come_increment_ref_count(info->selected_files, "main.nc", 273, 202),it=list$1char$ph_begin(_o2_saved_2)    ;!list$1char$ph_end(_o2_saved_2);it=list$1char$ph_next(_o2_saved_2)){
        # 274 "main.nc"
        buffer_append_str(buf,"\"");
        # 275 "main.nc"
        buffer_append_str(buf,it);
        # 276 "main.nc"
        buffer_append_str(buf,"\"");
        # 277 "main.nc"
        buffer_append_str(buf," ");
    }
    # 279 "main.nc"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "main.nc", 279, 203);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc}", 279, 204);
    come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc}", 279, 205);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 279, 206));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "main.nc", 279, 207));
    return __result_obj__0;
}

void search_file(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "search_file"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  str  ;
    int key;
    char*  __dec_obj13  ;
    int n;
    struct list$1char$ph* _o2_saved_3;
    char*  it  ;
    char*  __dec_obj14  ;
    memset(&str, 0, sizeof(str));
    memset(&key, 0, sizeof(key));
    memset(&n, 0, sizeof(n));
    memset(&_o2_saved_3, 0, sizeof(_o2_saved_3));
    memset(&it, 0, sizeof(it));
    # 284 "main.nc"
    str=(char* )come_increment_ref_count(__builtin_string("","main.nc",284), "main.nc", 284, 208);
    # 304 "main.nc"
    while((_Bool)1) {
        # 286 "main.nc"
        key=wgetch(stdscr);
        # 303 "main.nc"
        if(key>=32&&key<=126) {
            # 289 "main.nc"
            __right_value0 = (void*)0;
            __dec_obj13=str,
            str=(char* )come_increment_ref_count(xsprintf("%s%c",str,key), "main.nc", 289, 210);
            __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "main.nc", 289, 209);
            # 290 "main.nc"
            n=0;
            # 299 "main.nc"
            for(_o2_saved_3=(struct list$1char$ph*)come_increment_ref_count(info->files, "main.nc", 291, 211),it=list$1char$ph_begin(_o2_saved_3)            ;!list$1char$ph_end(_o2_saved_3);it=list$1char$ph_next(_o2_saved_3)){
                # 297 "main.nc"
                if(strcasestr(it,str)) {
                    # 293 "main.nc"
                    info->cursor=n;
                    # 294 "main.nc"
                    __right_value0 = (void*)0;
                    __dec_obj14=info->searching_str,
                    info->searching_str=(char* )come_increment_ref_count(__builtin_string(str,"main.nc",294), "main.nc", 294, 213);
                    __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "main.nc", 294, 212);
                    # 295 "main.nc"
                    break;
                }
                # 297 "main.nc"
                n++;
            }
            come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc}", 303, 214);
        }
        else {
            # 301 "main.nc"
            break;
        }
    }
    (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 306, 215));
    neo_current_frame = fr.prev;
}

void search_next_file(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "search_next_file"; neo_current_frame = &fr;
    int n;
    void* __right_value0 = (void*)0;
    struct list$1char$ph* _o2_saved_4;
    char*  it  ;
    _Bool _conditional_value_X0;
    _Bool _conditional_value_X1;
    _Bool _conditional_value_X2;
    memset(&n, 0, sizeof(n));
    memset(&_o2_saved_4, 0, sizeof(_o2_saved_4));
    memset(&it, 0, sizeof(it));
    # 311 "main.nc"
    if(info->searching_str==((void*)0)) {
        # 309 "main.nc"
                neo_current_frame = fr.prev;
        return;
    }
    # 311 "main.nc"
    n=info->cursor+1;
    # 319 "main.nc"
    for(({(_conditional_value_X0=(_o2_saved_4=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_sublist(info->files,n,-1), "main.nc", 312, 216),it=list$1char$ph_begin(_o2_saved_4)));_conditional_value_X0;})    ;({(_conditional_value_X1=(!list$1char$ph_end(_o2_saved_4)));_conditional_value_X1;});({(_conditional_value_X2=(it=list$1char$ph_next(_o2_saved_4)));_conditional_value_X2;})){
        # 317 "main.nc"
        if(strcasestr(it,info->searching_str)) {
            # 314 "main.nc"
            info->cursor=n;
            # 315 "main.nc"
            break;
        }
        # 317 "main.nc"
        n++;
    }
    come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc}", 321, 217);
    neo_current_frame = fr.prev;
}

void search_prev_file(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "search_prev_file"; neo_current_frame = &fr;
    int n;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* _o2_saved_5;
    char*  it  ;
    _Bool _conditional_value_X0;
    _Bool _conditional_value_X1;
    _Bool _conditional_value_X2;
    memset(&n, 0, sizeof(n));
    memset(&_o2_saved_5, 0, sizeof(_o2_saved_5));
    memset(&it, 0, sizeof(it));
    # 326 "main.nc"
    if(info->searching_str==((void*)0)) {
        # 324 "main.nc"
                neo_current_frame = fr.prev;
        return;
    }
    # 326 "main.nc"
    n=info->cursor-1;
    # 334 "main.nc"
    for(({(_conditional_value_X0=(_o2_saved_5=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_reverse(((struct list$1char$ph*)(__right_value0=list$1char$ph_sublist(info->files,0,n+1)))), "main.nc", 327, 229),it=list$1char$ph_begin(_o2_saved_5)));    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "main.nc}", 327, 230);
_conditional_value_X0;})    ;({(_conditional_value_X1=(!list$1char$ph_end(_o2_saved_5)));_conditional_value_X1;});({(_conditional_value_X2=(it=list$1char$ph_next(_o2_saved_5)));_conditional_value_X2;})){
        # 332 "main.nc"
        if(strcasestr(it,info->searching_str)) {
            # 329 "main.nc"
            info->cursor=n;
            # 330 "main.nc"
            break;
        }
        # 332 "main.nc"
        n--;
    }
    come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_5, (void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc}", 336, 231);
    neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_reverse(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_reverse"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct list$1char$ph* __result_obj__0;
    struct list_item$1char$ph* it;
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    # 1496 "/usr/local/include/neo-c.h"
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1496, 218, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 1496, 219)), "/usr/local/include/neo-c.h", 1496, 220);
    # 1502 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1499 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1499, 221);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1499, 222);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1499, 223);
        return __result_obj__0;
    }
    # 1502 "/usr/local/include/neo-c.h"
    it=self->tail;
    # 1506 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1504 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1504, 224, "char* "), "/usr/local/include/neo-c.h", 1504, 225));
        # 1505 "/usr/local/include/neo-c.h"
        it=it->prev;
    }
    # 1508 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1508, 226);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1508, 227);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1508, 228);
    return __result_obj__0;
}

void select_files(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "select_files"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  cursor_file_  ;
    memset(&cursor_file_, 0, sizeof(cursor_file_));
    # 338 "main.nc"
    cursor_file_=(char* )come_increment_ref_count(cursor_file(info), "main.nc", 338, 232);
    # 346 "main.nc"
    if(list$1char$ph_contained(info->selected_files,cursor_file_,(_Bool)0)) {
        # 341 "main.nc"
        list$1char$ph_remove(info->selected_files,cursor_file_,(_Bool)0);
    }
    else {
        # 344 "main.nc"
        list$1char$ph_add(info->selected_files,(char* )come_increment_ref_count(cursor_file_, "main.nc", 344, 237));
    }
    (cursor_file_ = come_decrement_ref_count(cursor_file_, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 348, 238));
    neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_remove"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    int it2;
    struct list_item$1char$ph* it;
    memset(&it2, 0, sizeof(it2));
    memset(&it, 0, sizeof(it));
    # 1879 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 1876 "/usr/local/include/neo-c.h"
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    # 1879 "/usr/local/include/neo-c.h"
    it2=0;
    # 1880 "/usr/local/include/neo-c.h"
    it=self->head;
    # 1891 "/usr/local/include/neo-c.h"
    while(it!=((void*)0)) {
        # 1886 "/usr/local/include/neo-c.h"
        if((!by_pointer&&string_equals(it->item,item))||(by_pointer&&it->item==item)) {
            # 1883 "/usr/local/include/neo-c.h"
            list$1char$ph_delete(self,it2,it2+1);
            # 1884 "/usr/local/include/neo-c.h"
            break;
        }
        # 1886 "/usr/local/include/neo-c.h"
        it2++;
        # 1888 "/usr/local/include/neo-c.h"
        it=it->next;
    }
    # 1891 "/usr/local/include/neo-c.h"
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_delete"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    int tmp;
    struct list_item$1char$ph* it;
    int i;
    struct list_item$1char$ph* prev_it;
    struct list_item$1char$ph* it_6;
    int i_7;
    struct list_item$1char$ph* prev_it_8;
    struct list_item$1char$ph* it_9;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_10;
    struct list_item$1char$ph* prev_it_11;
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
        list$1char$ph_reset(self);
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1942, 234);
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1972, 235);
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
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_11, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 2005, 236);
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

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_reset"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1864, 233);
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

void manual(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "manual"; neo_current_frame = &fr;
    # 350 "main.nc"
    wclear(stdscr);
    # 351 "main.nc"
    mvprintw(0,0,"q --> quit");
    # 352 "main.nc"
    mvprintw(1,0,"* --> virtual directory(type shell command, and the result of the command is file list");
    # 353 "main.nc"
    mvprintw(2,0,"ENTER --> run command(type shell command) or insert directory");
    # 354 "main.nc"
    mvprintw(3,0,"~ --> move to home directory");
    # 355 "main.nc"
    mvprintw(4,0,"BACK SPACE ^H --> move to the parent directory");
    # 356 "main.nc"
    mvprintw(5,0,"d --> delete file");
    # 357 "main.nc"
    mvprintw(6,0,"c --> copy file");
    # 358 "main.nc"
    mvprintw(7,0,"m --> move file");
    # 359 "main.nc"
    mvprintw(8,0,"n --> next searching file");
    # 360 "main.nc"
    mvprintw(9,0,"N --> prev searching file");
    # 361 "main.nc"
    mvprintw(10,0,"x --> excute file");
    # 362 "main.nc"
    mvprintw(11,0,"e --> edit file");
    # 363 "main.nc"
    mvprintw(12,0,"LEFT h --> move cursor left");
    # 364 "main.nc"
    mvprintw(13,0,"RIGHT l --> move cursor right");
    # 365 "main.nc"
    mvprintw(14,0,"DOWN j --> move cursor down");
    # 366 "main.nc"
    mvprintw(15,0,"UP k --> move cursor up");
    # 367 "main.nc"
    mvprintw(16,0,"CTRL-L --> reread directory and refresh the window");
    # 368 "main.nc"
    mvprintw(17,0,"/ --> move cursor with searching file (n --> next, N --> prev)");
    # 369 "main.nc"
    mvprintw(18,0,"? --> this manual");
    # 370 "main.nc"
    mvprintw(19,0,": --> run shell");
    # 371 "main.nc"
    mvprintw(20,0,"SPACE --> select files");
    # 373 "main.nc"
    wrefresh(stdscr);
    # 374 "main.nc"
    wgetch(stdscr);
    neo_current_frame = fr.prev;
}

void recursive_unlink(char*  path  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "recursive_unlink"; neo_current_frame = &fr;
    struct stat  stat_  ;
    _Bool is_dir;
    struct __dirstream*  dir  ;
    struct dirent*  entry  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    void* __right_value7 = (void*)0;
    void* __right_value8 = (void*)0;
    memset(&stat_, 0, sizeof(stat_));
    memset(&is_dir, 0, sizeof(is_dir));
    memset(&dir, 0, sizeof(dir));
    memset(&entry, 0, sizeof(entry));
    # 379 "main.nc"
    # 384 "main.nc"
    if(lstat(path,&stat_)<0) {
        # 381 "main.nc"
                (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 381, 239));
        come_call_finalizer(stat_finalize, (&stat_), (void*)0, (void*)0, 1, 0, 0, (void*)0, "main.nc}", 381, 240);
        neo_current_frame = fr.prev;
        return;
    }
    # 389 "main.nc"
    if(((((stat_.st_mode))&0170000)==(0120000))) {
        # 385 "main.nc"
        unlink(path);
        # 386 "main.nc"
                (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 386, 241));
        come_call_finalizer(stat_finalize, (&stat_), (void*)0, (void*)0, 1, 0, 0, (void*)0, "main.nc}", 386, 242);
        neo_current_frame = fr.prev;
        return;
    }
    # 389 "main.nc"
    is_dir=((((stat_.st_mode))&0170000)==(0040000));
    # 412 "main.nc"
    if(is_dir) {
        # 392 "main.nc"
        dir=opendir(path);
        # 398 "main.nc"
        if(dir==((void*)0)) {
            # 395 "main.nc"
                        (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 395, 243));
            come_call_finalizer(stat_finalize, (&stat_), (void*)0, (void*)0, 1, 0, 0, (void*)0, "main.nc}", 395, 244);
            neo_current_frame = fr.prev;
            return;
        }
        # 398 "main.nc"
        # 405 "main.nc"
        while(entry=readdir(dir)) {
            # 403 "main.nc"
            if(chara_operator_not_equals(entry->d_name,".")&&chara_operator_not_equals(entry->d_name,"..")) {
                # 401 "main.nc"
                recursive_unlink((char* )come_increment_ref_count(string_operator_add(((char* )(__right_value6=string_operator_add(path,((char* )(__right_value5=__builtin_string("/","main.nc",401)))))),((char* )(__right_value7=__builtin_string(entry->d_name,"main.nc",401)))), "main.nc", 401, 245));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 401, 246));
                (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 401, 247));
                (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 401, 248));
                (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 401, 249));
            }
        }
        # 405 "main.nc"
        closedir(dir);
        # 407 "main.nc"
        remove(path);
    }
    else {
        # 410 "main.nc"
        unlink(path);
    }
    (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 414, 250));
    come_call_finalizer(stat_finalize, (&stat_), (void*)0, (void*)0, 1, 0, 0, (void*)0, "main.nc}", 414, 251);
    neo_current_frame = fr.prev;
}

_Bool is_protected_entry(char* name)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_protected_entry"; neo_current_frame = &fr;
    # 419 "main.nc"
    if(name==((void*)0)) {
        # 417 "main.nc"
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    # 419 "main.nc"
        neo_current_frame = fr.prev;
    return strcmp(name,".")==0||strcmp(name,"..")==0||strcmp(name,"NO FILES")==0;
    neo_current_frame = fr.prev;
}

char*  resolve_item_path(struct sInfo*  info  , char* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "resolve_item_path"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    void* __right_value7 = (void*)0;
    void* __right_value8 = (void*)0;
    # 427 "main.nc"
    if(item==((void*)0)) {
        # 425 "main.nc"
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","main.nc",425))), "main.nc", 425, 252);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 425, 253));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "main.nc", 425, 254));
        return __result_obj__0;
    }
    # 433 "main.nc"
    if(item[0]==47) {
        # 428 "main.nc"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(item,"main.nc",428))), "main.nc", 428, 255);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 428, 256));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "main.nc", 428, 257));
        return __result_obj__0;
    }
    else {
        # 431 "main.nc"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value8=string_operator_add(((char* )(__right_value6=string_operator_add(info->path,((char* )(__right_value5=__builtin_string("/","main.nc",431)))))),((char* )(__right_value7=__builtin_string(item,"main.nc",431)))))), "main.nc", 431, 258);
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 431, 259));
        (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 431, 260));
        (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 431, 261));
        (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 431, 262));
        (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 431, 263));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "main.nc", 431, 264));
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

char*  deletable_selected_files(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "deletable_selected_files"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    struct list$1char$ph* _o2_saved_6;
    char*  it  ;
    char*  __result_obj__0  ;
    memset(&buf, 0, sizeof(buf));
    memset(&_o2_saved_6, 0, sizeof(_o2_saved_6));
    memset(&it, 0, sizeof(it));
    # 437 "main.nc"
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "main.nc", 437, 265, "struct buffer* "), "main.nc", 437, 266)), "main.nc", 437, 267);
    # 447 "main.nc"
    for(_o2_saved_6=(struct list$1char$ph*)come_increment_ref_count(info->selected_files, "main.nc", 438, 268),it=list$1char$ph_begin(_o2_saved_6)    ;!list$1char$ph_end(_o2_saved_6);it=list$1char$ph_next(_o2_saved_6)){
        # 442 "main.nc"
        if(is_protected_entry(it)) {
            # 440 "main.nc"
            continue;
        }
        # 442 "main.nc"
        buffer_append_str(buf,"\"");
        # 443 "main.nc"
        buffer_append_str(buf,it);
        # 444 "main.nc"
        buffer_append_str(buf,"\"");
        # 445 "main.nc"
        buffer_append_str(buf," ");
    }
    # 447 "main.nc"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "main.nc", 447, 269);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc}", 447, 270);
    come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_6, (void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc}", 447, 271);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 447, 272));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "main.nc", 447, 273));
    return __result_obj__0;
}

void handmade_delete_file(char*  path  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "handmade_delete_file"; neo_current_frame = &fr;
    int key;
    memset(&key, 0, sizeof(key));
    # 452 "main.nc"
    werase(stdscr);
    # 453 "main.nc"
    mvprintw(0,0,"Is %s delete OK? (y,Y,ENTER/other",path);
    # 454 "main.nc"
    wrefresh(stdscr);
    # 467 "main.nc"
    while((_Bool)1) {
        # 457 "main.nc"
        key=wgetch(stdscr);
        # 466 "main.nc"
        if(key==121||key==89||key==10) {
            # 460 "main.nc"
            recursive_unlink((char* )come_increment_ref_count(path, "main.nc", 460, 274));
            # 461 "main.nc"
            break;
        }
        else {
            # 464 "main.nc"
            break;
        }
    }
    (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 469, 275));
    neo_current_frame = fr.prev;
}

void handmade_selected_delete_file(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "handmade_selected_delete_file"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  li  ;
    int key;
    struct list$1char$ph* _o2_saved_7;
    char*  it  ;
    char*  path  ;
    memset(&li, 0, sizeof(li));
    memset(&key, 0, sizeof(key));
    memset(&_o2_saved_7, 0, sizeof(_o2_saved_7));
    memset(&it, 0, sizeof(it));
    memset(&path, 0, sizeof(path));
    # 471 "main.nc"
    li=(char* )come_increment_ref_count(deletable_selected_files(info), "main.nc", 471, 276);
    # 480 "main.nc"
    if(string_length(li)==0) {
        # 473 "main.nc"
        werase(stdscr);
        # 474 "main.nc"
        mvprintw(0,0,"No deletable files selected");
        # 475 "main.nc"
        wrefresh(stdscr);
        # 476 "main.nc"
        wgetch(stdscr);
        # 477 "main.nc"
                (li = come_decrement_ref_count(li, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 477, 277));
        neo_current_frame = fr.prev;
        return;
    }
    # 480 "main.nc"
    werase(stdscr);
    # 481 "main.nc"
    mvprintw(0,0,"Are %s delete OK? (y,Y,ENTER/other",li);
    # 482 "main.nc"
    wrefresh(stdscr);
    # 501 "main.nc"
    while((_Bool)1) {
        # 485 "main.nc"
        key=wgetch(stdscr);
        # 500 "main.nc"
        if(key==121||key==89||key==10) {
            # 495 "main.nc"
            for(_o2_saved_7=(struct list$1char$ph*)come_increment_ref_count(info->selected_files, "main.nc", 488, 278),it=list$1char$ph_begin(_o2_saved_7)            ;!list$1char$ph_end(_o2_saved_7);it=list$1char$ph_next(_o2_saved_7)){
                # 492 "main.nc"
                if(is_protected_entry(it)) {
                    # 490 "main.nc"
                    continue;
                }
                # 492 "main.nc"
                __right_value0 = (void*)0;
                path=(char* )come_increment_ref_count(resolve_item_path(info,it), "main.nc", 492, 279);
                # 493 "main.nc"
                recursive_unlink((char* )come_increment_ref_count(path, "main.nc", 493, 280));
                (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 495, 281));
            }
            # 495 "main.nc"
            come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc}", 495, 282);
            break;
            come_call_finalizer(list$1char$ph$p_finalize, _o2_saved_7, (void*)0, (void*)0, 0, 0, 0, (void*)0, "main.nc}", 500, 283);
        }
        else {
            # 498 "main.nc"
            break;
        }
    }
    (li = come_decrement_ref_count(li, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 503, 284));
    neo_current_frame = fr.prev;
}

void input(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "input"; neo_current_frame = &fr;
    int maxx;
    int maxy;
    int key;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    void* __right_value7 = (void*)0;
    void* __right_value8 = (void*)0;
    char*  path  ;
    struct stat  stat_  ;
    _Bool is_dir;
    char*  path_12  ;
    char*  current_directory_name  ;
    char*  path_13  ;
    char*  item  ;
    memset(&maxx, 0, sizeof(maxx));
    memset(&maxy, 0, sizeof(maxy));
    memset(&key, 0, sizeof(key));
    memset(&path, 0, sizeof(path));
    memset(&stat_, 0, sizeof(stat_));
    memset(&is_dir, 0, sizeof(is_dir));
    memset(&path_12, 0, sizeof(path_12));
    memset(&current_directory_name, 0, sizeof(current_directory_name));
    memset(&path_13, 0, sizeof(path_13));
    memset(&item, 0, sizeof(item));
    # 505 "main.nc"
    maxx=xgetmaxx();
    # 506 "main.nc"
    maxy=xgetmaxy()-1;
    # 508 "main.nc"
    key=wgetch(stdscr);
    # 749 "main.nc"
    switch (    key) {
        # 512 "main.nc"
        case 113:
        # 512 "main.nc"
        info->app_end=(_Bool)1;
        # 513 "main.nc"
        break;
        # 516 "main.nc"
        case 42:
        # 516 "main.nc"
        endwin();
        # 517 "main.nc"
        list$1char$ph_reset(info->files);
        # 518 "main.nc"
        vd(info);
        # 519 "main.nc"
        initscr();
        # 520 "main.nc"
        keypad(stdscr,(_Bool)1);
        # 521 "main.nc"
        raw();
        # 522 "main.nc"
        noecho();
        # 523 "main.nc"
        break;
        # 526 "main.nc"
        case 0527:
        # 526 "main.nc"
        case 10:
        # 554 "main.nc"
        {
            # 527 "main.nc"
            path=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value6=string_operator_add(info->path,((char* )(__right_value5=__builtin_string("/","main.nc",527)))))),((char* )(__right_value7=cursor_file(info)))), "main.nc", 527, 285);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 527, 286));
            (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 527, 287));
            (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 527, 288));
            (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 527, 289));
            # 529 "main.nc"
            # 530 "main.nc"
            (void)stat(path,&stat_);
            # 532 "main.nc"
            is_dir=((((stat_.st_mode))&0170000)==(0040000));
            # 553 "main.nc"
            if(is_dir) {
                # 535 "main.nc"
                change_directory(info,path,((void*)0));
            }
            else {
                # 538 "main.nc"
                endwin();
                # 545 "main.nc"
                if(list$1char$ph_length(info->selected_files)>0) {
                    # 540 "main.nc"
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    system(((char* )(__right_value1=xsprintf("shsh -i ' \"%s\"' -n 0 -o",((char* )(__right_value0=selected_files(info)))))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 540, 290));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 540, 291));
                }
                else {
                    # 543 "main.nc"
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    system(((char* )(__right_value1=xsprintf("shsh -i ' \"%s\"' -n 0 -o",((char* )(__right_value0=cursor_file(info)))))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 543, 292));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 543, 293));
                }
                # 545 "main.nc"
                read_dir(info);
                # 546 "main.nc"
                puts("HIT ANY KEY");
                # 547 "main.nc"
                initscr();
                # 548 "main.nc"
                keypad(stdscr,(_Bool)1);
                # 549 "main.nc"
                raw();
                # 550 "main.nc"
                noecho();
                # 551 "main.nc"
                getchar();
            }
            (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 554, 294));
            come_call_finalizer(stat_finalize, (&stat_), (void*)0, (void*)0, 1, 0, 0, (void*)0, "main.nc}", 554, 295);
        }
        # 554 "main.nc"
        break;
        # 556 "main.nc"
        case 126:
        # 561 "main.nc"
        {
            # 557 "main.nc"
            __right_value0 = (void*)0;
            path_12=(char* )come_increment_ref_count(__builtin_string(getenv("HOME"),"main.nc",557), "main.nc", 557, 296);
            # 559 "main.nc"
            change_directory(info,path_12,((void*)0));
            (path_12 = come_decrement_ref_count(path_12, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 561, 297));
        }
        # 561 "main.nc"
        break;
        # 564 "main.nc"
        case 0407:
        # 565 "main.nc"
        case 8:
        # 565 "main.nc"
        case 127:
        # 570 "main.nc"
        {
            # 566 "main.nc"
            __right_value0 = (void*)0;
            current_directory_name=(char* )come_increment_ref_count(xbasename(info->path), "main.nc", 566, 298);
            # 567 "main.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            path_13=(char* )come_increment_ref_count(string_operator_add(info->path,((char* )(__right_value1=__builtin_string("/..","main.nc",567)))), "main.nc", 567, 299);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 567, 300));
            # 568 "main.nc"
            change_directory(info,path_13,current_directory_name);
            (current_directory_name = come_decrement_ref_count(current_directory_name, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 570, 301));
            (path_13 = come_decrement_ref_count(path_13, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 570, 302));
        }
        # 570 "main.nc"
        break;
        # 572 "main.nc"
        case 100:
        # 595 "main.nc"
        {
            # 573 "main.nc"
            endwin();
            # 589 "main.nc"
            if(list$1char$ph_length(info->selected_files)>0) {
                # 575 "main.nc"
                handmade_selected_delete_file(info);
            }
            else {
                # 578 "main.nc"
                __right_value0 = (void*)0;
                item=(char* )come_increment_ref_count(cursor_file(info), "main.nc", 578, 303);
                # 588 "main.nc"
                if(is_protected_entry(item)) {
                    # 580 "main.nc"
                    werase(stdscr);
                    # 581 "main.nc"
                    mvprintw(0,0,"Refuse to delete %s",item);
                    # 582 "main.nc"
                    wrefresh(stdscr);
                    # 583 "main.nc"
                    wgetch(stdscr);
                }
                else {
                    # 586 "main.nc"
                    __right_value0 = (void*)0;
                    handmade_delete_file((char* )come_increment_ref_count(resolve_item_path(info,item), "main.nc", 586, 304),info);
                }
                (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "main.nc", 589, 305));
            }
            # 589 "main.nc"
            read_dir(info);
            # 590 "main.nc"
            initscr();
            # 591 "main.nc"
            keypad(stdscr,(_Bool)1);
            # 592 "main.nc"
            raw();
            # 593 "main.nc"
            noecho();
        }
        # 595 "main.nc"
        break;
        # 597 "main.nc"
        case 99:
        # 613 "main.nc"
        {
            # 598 "main.nc"
            endwin();
            # 605 "main.nc"
            if(list$1char$ph_length(info->selected_files)>0) {
                # 600 "main.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                system(((char* )(__right_value1=xsprintf("shsh -i 'cp -r \"%s\" ' -o",((char* )(__right_value0=selected_files(info)))))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 600, 306));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 600, 307));
            }
            else {
                # 603 "main.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                system(((char* )(__right_value1=xsprintf("shsh -i 'cp -r \"%s\" ' -o",((char* )(__right_value0=cursor_file(info)))))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 603, 308));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 603, 309));
            }
            # 605 "main.nc"
            read_dir(info);
            # 606 "main.nc"
            puts("HIT ANY KEY");
            # 607 "main.nc"
            initscr();
            # 608 "main.nc"
            keypad(stdscr,(_Bool)1);
            # 609 "main.nc"
            raw();
            # 610 "main.nc"
            noecho();
            # 611 "main.nc"
            getchar();
        }
        # 613 "main.nc"
        break;
        # 615 "main.nc"
        case 109:
        # 631 "main.nc"
        {
            # 616 "main.nc"
            endwin();
            # 623 "main.nc"
            if(list$1char$ph_length(info->selected_files)>0) {
                # 618 "main.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                system(((char* )(__right_value1=xsprintf("shsh -i 'mv \"%s\" ' -o",((char* )(__right_value0=selected_files(info)))))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 618, 310));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 618, 311));
            }
            else {
                # 621 "main.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                system(((char* )(__right_value1=xsprintf("shsh -i 'mv \"%s\" ' -o",((char* )(__right_value0=cursor_file(info)))))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 621, 312));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 621, 313));
            }
            # 623 "main.nc"
            read_dir(info);
            # 624 "main.nc"
            puts("HIT ANY KEY");
            # 625 "main.nc"
            initscr();
            # 626 "main.nc"
            keypad(stdscr,(_Bool)1);
            # 627 "main.nc"
            raw();
            # 628 "main.nc"
            noecho();
            # 629 "main.nc"
            getchar();
        }
        # 631 "main.nc"
        break;
        # 633 "main.nc"
        case 110:
        # 636 "main.nc"
        {
            # 634 "main.nc"
            search_next_file(info);
        }
        # 636 "main.nc"
        break;
        # 638 "main.nc"
        case 78:
        # 641 "main.nc"
        {
            # 640 "main.nc"
            search_prev_file(info);
        }
        # 641 "main.nc"
        break;
        # 643 "main.nc"
        case 120:
        # 659 "main.nc"
        {
            # 644 "main.nc"
            endwin();
            # 651 "main.nc"
            if(list$1char$ph_length(info->selected_files)>0) {
                # 646 "main.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                system(((char* )(__right_value1=xsprintf("shsh -i ' \"%s\"' -n 0 -o",((char* )(__right_value0=selected_files(info)))))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 646, 314));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 646, 315));
            }
            else {
                # 649 "main.nc"
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                system(((char* )(__right_value1=xsprintf("shsh -i ' ./\"%s\"' -n 0 -o",((char* )(__right_value0=cursor_file(info)))))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 649, 316));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 649, 317));
            }
            # 651 "main.nc"
            read_dir(info);
            # 652 "main.nc"
            puts("HIT ANY KEY");
            # 653 "main.nc"
            initscr();
            # 654 "main.nc"
            keypad(stdscr,(_Bool)1);
            # 655 "main.nc"
            raw();
            # 656 "main.nc"
            noecho();
            # 657 "main.nc"
            getchar();
        }
        # 659 "main.nc"
        break;
        # 661 "main.nc"
        case 101:
        # 669 "main.nc"
        {
            # 662 "main.nc"
            endwin();
            # 663 "main.nc"
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            system(((char* )(__right_value1=xsprintf("vin %s",((char* )(__right_value0=cursor_file(info)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 663, 318));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "main.nc", 663, 319));
            # 664 "main.nc"
            initscr();
            # 665 "main.nc"
            keypad(stdscr,(_Bool)1);
            # 666 "main.nc"
            raw();
            # 667 "main.nc"
            noecho();
        }
        # 669 "main.nc"
        break;
        # 672 "main.nc"
        case 0404:
        # 673 "main.nc"
        case 104:
        # 674 "main.nc"
        case 66-65+1:
        # 677 "main.nc"
        if(info->cursor>=maxy) {
            # 675 "main.nc"
            info->cursor-=maxy;
        }
        # 677 "main.nc"
        break;
        # 680 "main.nc"
        case 0405:
        # 681 "main.nc"
        case 108:
        # 682 "main.nc"
        case 70-65+1:
        # 685 "main.nc"
        if(info->cursor+maxy<list$1char$ph_length(info->files)) {
            # 683 "main.nc"
            info->cursor+=maxy;
        }
        # 685 "main.nc"
        break;
        # 688 "main.nc"
        case 0402:
        # 689 "main.nc"
        case 106:
        # 690 "main.nc"
        case 78-65+1:
        # 690 "main.nc"
        info->cursor++;
        # 691 "main.nc"
        break;
        # 694 "main.nc"
        case 0403:
        # 695 "main.nc"
        case 107:
        # 696 "main.nc"
        case 80-65+1:
        # 696 "main.nc"
        info->cursor--;
        # 698 "main.nc"
        break;
        # 701 "main.nc"
        case 76-65+1:
        # 701 "main.nc"
        wclear(stdscr);
        # 702 "main.nc"
        read_dir(info);
        # 703 "main.nc"
        view(info);
        # 704 "main.nc"
        wrefresh(stdscr);
        # 705 "main.nc"
        break;
        # 708 "main.nc"
        case 47:
        # 708 "main.nc"
        search_file(info);
        # 709 "main.nc"
        view(info);
        # 710 "main.nc"
        wrefresh(stdscr);
        # 711 "main.nc"
        break;
        # 714 "main.nc"
        case 63:
        # 714 "main.nc"
        manual(info);
        # 715 "main.nc"
        break;
        # 717 "main.nc"
        case 58:
        # 728 "main.nc"
        {
            # 718 "main.nc"
            endwin();
            # 719 "main.nc"
            system("shsh -o");
            # 720 "main.nc"
            read_dir(info);
            # 721 "main.nc"
            puts("HIT ANY KEY");
            # 722 "main.nc"
            initscr();
            # 723 "main.nc"
            keypad(stdscr,(_Bool)1);
            # 724 "main.nc"
            raw();
            # 725 "main.nc"
            noecho();
            # 726 "main.nc"
            getchar();
        }
        # 728 "main.nc"
        break;
        # 731 "main.nc"
        case 0x04:
        # 731 "main.nc"
        case 0522:
        # 734 "main.nc"
        {
            # 732 "main.nc"
            info->cursor+=10;
        }
        # 734 "main.nc"
        break;
        # 736 "main.nc"
        case 32:
        # 739 "main.nc"
        {
            # 737 "main.nc"
            select_files(info);
        }
        # 739 "main.nc"
        break;
        # 742 "main.nc"
        case 0x15:
        # 742 "main.nc"
        case 0523:
        # 745 "main.nc"
        {
            # 743 "main.nc"
            info->cursor-=10;
        }
        # 745 "main.nc"
        break;
    }
    # 749 "main.nc"
    fix_cursor(info);
    neo_current_frame = fr.prev;
}

int main(int argc, char** argv)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "main"; neo_current_frame = &fr;
    struct sInfo  info  ;
    char* cwd;
    void* __right_value0 = (void*)0;
    char*  __dec_obj15  ;
    int __result_obj__0;
    memset(&info, 0, sizeof(info));
    memset(&cwd, 0, sizeof(cwd));
    # 754 "main.nc"
    setlocale(6,"");
    # 755 "main.nc"
    setenv("EDITOR","vin",1);
    # 757 "main.nc"
    # 759 "main.nc"
    memset(&info,0,sizeof(struct sInfo ));
    # 761 "main.nc"
    cwd=getenv("PWD");
    # 763 "main.nc"
    __dec_obj15=info.path,
    info.path=(char* )come_increment_ref_count(__builtin_string(cwd,"main.nc",763), "main.nc", 763, 321);
    __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "main.nc", 763, 320);
    # 765 "main.nc"
    read_dir(&info);
    # 767 "main.nc"
    initscr();
    # 768 "main.nc"
    keypad(stdscr,1);
    # 769 "main.nc"
    raw();
    # 770 "main.nc"
    noecho();
    # 777 "main.nc"
    while(!info.app_end) {
        # 773 "main.nc"
        view(&info);
        # 774 "main.nc"
        input(&info);
    }
    # 777 "main.nc"
    endwin();
    # 779 "main.nc"
        __result_obj__0 = 0;
    come_call_finalizer(sInfo_finalize, (&info), (void*)0, (void*)0, 1, 0, 0, (void*)0, "main.nc}", 779, 326);
    neo_current_frame = fr.prev;
    come_memleak_checker();
    return __result_obj__0;
}

static void sInfo_finalize(struct sInfo*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInfo_finalize"; neo_current_frame = &fr;
    # 1 "sInfo_finalize"
    # 3 "sInfo_finalize"
    if(self!=((void*)0)&&self->path!=((void*)0)) {
        # 2 "sInfo_finalize"
        (self->path = come_decrement_ref_count(self->path, (void*)0, (void*)0, 0, 0, (void*)0, "sInfo_finalize", 2, 322));
    }
    # 4 "sInfo_finalize"
    if(self!=((void*)0)&&self->files!=((void*)0)) {
        # 3 "sInfo_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->files, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sInfo_finalize}", 3, 323);
    }
    # 5 "sInfo_finalize"
    if(self!=((void*)0)&&self->selected_files!=((void*)0)) {
        # 4 "sInfo_finalize"
        come_call_finalizer(list$1char$ph$p_finalize, self->selected_files, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sInfo_finalize}", 4, 324);
    }
    # 6 "sInfo_finalize"
    if(self!=((void*)0)&&self->searching_str!=((void*)0)) {
        # 5 "sInfo_finalize"
        (self->searching_str = come_decrement_ref_count(self->searching_str, (void*)0, (void*)0, 0, 0, (void*)0, "sInfo_finalize", 5, 325));
    }
        neo_current_frame = fr.prev;
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
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 207, 327));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 207, 328));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 207, 329));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 207, 330));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 207, 331));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 207, 332));
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
    struct sMemHeader*  it_14  ;
    memset(&it, 0, sizeof(it));
    memset(&it_prev, 0, sizeof(it_prev));
    memset(&it_14, 0, sizeof(it_14));
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
    it_14=(struct sMemHeader* )calloc(1,size);
    # 292 "/usr/local/include/neo-c.h"
    it_14->alloc_size=size;
    # 293 "/usr/local/include/neo-c.h"
        __result_obj__0 = it_14;
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
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 496, 333));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 496, 334));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 496, 335));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 496, 336));
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
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 522, 337));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 522, 338));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 522, 339));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 522, 340));
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
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 585, 341));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 585, 342));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 585, 343));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 585, 344));
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
    void (*finalizer_15)(void*);
    void (*finalizer_16)(void*);
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    long* ref_count;
    long count;
    void (*finalizer_17)(void*);
    void (*finalizer_18)(void*);
    void (*finalizer_19)(void*);
    memset(&finalizer, 0, sizeof(finalizer));
    memset(&finalizer_15, 0, sizeof(finalizer_15));
    memset(&finalizer_16, 0, sizeof(finalizer_16));
    memset(&ref_count, 0, sizeof(ref_count));
    memset(&count, 0, sizeof(count));
    memset(&finalizer_17, 0, sizeof(finalizer_17));
    memset(&finalizer_18, 0, sizeof(finalizer_18));
    memset(&finalizer_19, 0, sizeof(finalizer_19));
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
            finalizer_15=(void (*)(void*))fun;
            # 631 "/usr/local/include/neo-c.h"
            finalizer_15(mem);
        }
        else {
            # 638 "/usr/local/include/neo-c.h"
            if(protocol_obj&&protocol_fun) {
                # 635 "/usr/local/include/neo-c.h"
                finalizer_16=(void (*)(void*))protocol_fun;
                # 636 "/usr/local/include/neo-c.h"
                finalizer_16(protocol_obj);
            }
        }
    }
    else {
        # 647 "/usr/local/include/neo-c.h"
        if(!come_is_alive(mem)) {
            # 642 "/usr/local/include/neo-c.h"
            puts(((char*)(__right_value3=xsprintf("invalid heap object. \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 642, 345));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 642, 346));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 642, 347));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 642, 348));
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
                        finalizer_17=(void (*)(void*))protocol_fun;
                        # 659 "/usr/local/include/neo-c.h"
                        finalizer_17(protocol_obj);
                        # 660 "/usr/local/include/neo-c.h"
                        come_free(protocol_obj);
                    }
                    # 666 "/usr/local/include/neo-c.h"
                    if(fun) {
                        # 663 "/usr/local/include/neo-c.h"
                        finalizer_18=(void (*)(void*))fun;
                        # 664 "/usr/local/include/neo-c.h"
                        finalizer_18(mem);
                    }
                }
                else {
                    # 673 "/usr/local/include/neo-c.h"
                    if(protocol_obj&&protocol_fun) {
                        # 669 "/usr/local/include/neo-c.h"
                        finalizer_19=(void (*)(void*))protocol_fun;
                        # 670 "/usr/local/include/neo-c.h"
                        finalizer_19(protocol_obj);
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
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 697, 349));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 697, 350));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 697, 351));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 697, 352));
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
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 709, 353));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 709, 354));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 709, 355));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 709, 356));
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
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 715, 357));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 715, 358));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 715, 359));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 715, 360));
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
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 723, 361);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 723, 362));
        return __result_obj__0;
    }
    # 725 "/usr/local/include/neo-c.h"
    len=strlen(str)+1;
    # 727 "/usr/local/include/neo-c.h"
    result=come_calloc(1,sizeof(char)*(len),sname,sline,0,"string");
    # 730 "/usr/local/include/neo-c.h"
    strncpy(result,str,len);
    # 732 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 732, 363);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 732, 364));
    return __result_obj__0;
}

struct buffer*  buffer_initialize(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj16;
    struct buffer*  __result_obj__0  ;
    # 4842 "/usr/local/include/neo-c.h"
    self->size=128;
    # 4843 "/usr/local/include/neo-c.h"
    __dec_obj16=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 4843, 365, "char*"), "/usr/local/include/neo-c.h", 4843, 367);
    __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4843, 366);
    # 4844 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[0]=0;
    # 4845 "/usr/local/include/neo-c.h"
    self->len=0;
    # 4847 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "/usr/local/include/neo-c.h", 4847, 368);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4847, 369);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4847, 370);
    return __result_obj__0;
}

struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  int  size  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize_with_value"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj17;
    struct buffer*  __result_obj__0  ;
    # 4852 "/usr/local/include/neo-c.h"
    self->size=128;
    # 4853 "/usr/local/include/neo-c.h"
    __dec_obj17=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 4853, 371, "char*"), "/usr/local/include/neo-c.h", 4853, 373);
    __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4853, 372);
    # 4854 "/usr/local/include/neo-c.h"
    ((char*)self->buf)[0]=0;
    # 4855 "/usr/local/include/neo-c.h"
    self->len=0;
    # 4857 "/usr/local/include/neo-c.h"
    buffer_append(self,mem,size);
    # 4859 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "/usr/local/include/neo-c.h", 4859, 374);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4859, 375);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4859, 376);
    return __result_obj__0;
}

void buffer_finalize(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_finalize"; neo_current_frame = &fr;
    # 4865 "/usr/local/include/neo-c.h"
    if(self&&self->buf) {
        # 4864 "/usr/local/include/neo-c.h"
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 4864, 377));
    }
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_clone(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_clone"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct buffer*  result  ;
    char* __dec_obj18;
    memset(&result, 0, sizeof(result));
    # 4873 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 4870 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 4870, 378);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4870, 379);
        return __result_obj__0;
    }
    # 4873 "/usr/local/include/neo-c.h"
    result=(struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 4873, 380, "struct buffer* "), "/usr/local/include/neo-c.h", 4873, 381);
    # 4875 "/usr/local/include/neo-c.h"
    result->size=self->size;
    # 4876 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    __dec_obj18=result->buf,
    result->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "/usr/local/include/neo-c.h", 4876, 382, "char*"), "/usr/local/include/neo-c.h", 4876, 384);
    __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4876, 383);
    # 4877 "/usr/local/include/neo-c.h"
    result->len=self->len;
    # 4878 "/usr/local/include/neo-c.h"
    memcpy(result->buf,self->buf,self->len);
    # 4880 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 4880, 385);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4880, 386);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 4880, 387);
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
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 4892, 388));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 4892, 389));
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
    char* __dec_obj19;
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
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 4934, 390, "char*"), "/usr/local/include/neo-c.h", 4934, 391);
        # 4935 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4937 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 4938 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj19=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 4938, 392, "char*"), "/usr/local/include/neo-c.h", 4938, 394);
        __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4938, 393);
        # 4939 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 4940 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 4941 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 4944, 395));
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
    char* __dec_obj20;
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
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 4958, 396, "char*"), "/usr/local/include/neo-c.h", 4958, 397);
        # 4959 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4961 "/usr/local/include/neo-c.h"
        new_size=(self->size+10+1)*2;
        # 4962 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj20=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 4962, 398, "char*"), "/usr/local/include/neo-c.h", 4962, 400);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4962, 399);
        # 4963 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 4964 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 4965 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 4968, 401));
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
    char* __dec_obj21;
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
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 4985, 402, "char*"), "/usr/local/include/neo-c.h", 4985, 403);
        # 4986 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 4987 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 4988 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj21=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 4988, 404, "char*"), "/usr/local/include/neo-c.h", 4988, 406);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 4988, 405);
        # 4989 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 4990 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 4991 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 4994, 407));
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
    char* __dec_obj22;
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
    mem=(char* )come_increment_ref_count(__builtin_string(result,"/usr/local/include/neo-c.h",5056), "/usr/local/include/neo-c.h", 5056, 408);
    # 5058 "/usr/local/include/neo-c.h"
    size=strlen(mem);
    # 5070 "/usr/local/include/neo-c.h"
    if(self->len+size+1+1>=self->size) {
        # 5060 "/usr/local/include/neo-c.h"
        old_len=self->len;
        # 5061 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 5061, 409, "char*"), "/usr/local/include/neo-c.h", 5061, 410);
        # 5062 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5063 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5064 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj22=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 5064, 411, "char*"), "/usr/local/include/neo-c.h", 5064, 413);
        __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 5064, 412);
        # 5065 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5066 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5067 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 5070, 414));
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
    (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 5076, 415));
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
    char* __dec_obj23;
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
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 5088, 416, "char*"), "/usr/local/include/neo-c.h", 5088, 417);
        # 5089 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5090 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5091 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj23=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 5091, 418, "char*"), "/usr/local/include/neo-c.h", 5091, 420);
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 5091, 419);
        # 5092 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5093 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5094 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 5097, 421));
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
    char* __dec_obj24;
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
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 5115, 422, "char*"), "/usr/local/include/neo-c.h", 5115, 423);
        # 5116 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5117 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5118 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj24=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 5118, 424, "char*"), "/usr/local/include/neo-c.h", 5118, 426);
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 5118, 425);
        # 5119 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5120 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5121 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 5124, 427));
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
    char* __dec_obj25;
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
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 5141, 428, "char*"), "/usr/local/include/neo-c.h", 5141, 429);
        # 5142 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5143 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5144 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj25=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 5144, 430, "char*"), "/usr/local/include/neo-c.h", 5144, 432);
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 5144, 431);
        # 5145 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5146 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5147 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 5150, 433));
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
    char* __dec_obj26;
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
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 5168, 434, "char*"), "/usr/local/include/neo-c.h", 5168, 435);
        # 5169 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5170 "/usr/local/include/neo-c.h"
        new_size=(self->size+size+1)*2;
        # 5171 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj26=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 5171, 436, "char*"), "/usr/local/include/neo-c.h", 5171, 438);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 5171, 437);
        # 5172 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5173 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5174 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 5177, 439));
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
    char* __dec_obj27;
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
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(old_len+1)), "/usr/local/include/neo-c.h", 5195, 440, "char*"), "/usr/local/include/neo-c.h", 5195, 441);
        # 5196 "/usr/local/include/neo-c.h"
        memcpy(old_buf,self->buf,old_len+1);
        # 5197 "/usr/local/include/neo-c.h"
        new_size=(self->size+1+1)*2;
        # 5198 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        __dec_obj27=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), "/usr/local/include/neo-c.h", 5198, 442, "char*"), "/usr/local/include/neo-c.h", 5198, 444);
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 5198, 443);
        # 5199 "/usr/local/include/neo-c.h"
        memcpy(self->buf,old_buf,old_len);
        # 5200 "/usr/local/include/neo-c.h"
        ((char*)self->buf)[old_len]=0;
        # 5201 "/usr/local/include/neo-c.h"
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 5204, 445));
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5230, 446, "struct buffer* "), "/usr/local/include/neo-c.h", 5230, 447)), "/usr/local/include/neo-c.h", 5230, 448);
    # 5236 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5233 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5233, 449);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5233, 450);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5233, 451);
        return __result_obj__0;
    }
    # 5236 "/usr/local/include/neo-c.h"
    buffer_append_str(result,self);
    # 5238 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5238, 452);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5238, 453);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5238, 454);
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5244))), "/usr/local/include/neo-c.h", 5244, 455);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5244, 456));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5244, 457));
        return __result_obj__0;
    }
    # 5247 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self->buf,"/usr/local/include/neo-c.h",5247))), "/usr/local/include/neo-c.h", 5247, 458);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5247, 459));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5247, 460));
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5260, 461, "struct buffer* "), "/usr/local/include/neo-c.h", 5260, 462)), "/usr/local/include/neo-c.h", 5260, 463);
    # 5264 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5262 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5262, 464);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5262, 465);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5262, 466);
        return __result_obj__0;
    }
    # 5264 "/usr/local/include/neo-c.h"
    buffer_append(result,self,sizeof(char)*len);
    # 5265 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5265, 467);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5265, 468);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5265, 469);
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5270, 470, "struct buffer* "), "/usr/local/include/neo-c.h", 5270, 471)), "/usr/local/include/neo-c.h", 5270, 472);
    # 5274 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5272 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5272, 473);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5272, 474);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5272, 475);
        return __result_obj__0;
    }
    # 5277 "/usr/local/include/neo-c.h"
    for(i=0    ;i<len;i++){
        # 5275 "/usr/local/include/neo-c.h"
        buffer_append(result,self[i],strlen(self[i]));
    }
    # 5277 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5277, 476);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5277, 477);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5277, 478);
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5282, 479, "struct buffer* "), "/usr/local/include/neo-c.h", 5282, 480)), "/usr/local/include/neo-c.h", 5282, 481);
    # 5286 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5284 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5284, 482);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5284, 483);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5284, 484);
        return __result_obj__0;
    }
    # 5286 "/usr/local/include/neo-c.h"
    buffer_append(result,(char*)self,sizeof(short)*len);
    # 5287 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5287, 485);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5287, 486);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5287, 487);
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5292, 488, "struct buffer* "), "/usr/local/include/neo-c.h", 5292, 489)), "/usr/local/include/neo-c.h", 5292, 490);
    # 5296 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5294 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5294, 491);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5294, 492);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5294, 493);
        return __result_obj__0;
    }
    # 5296 "/usr/local/include/neo-c.h"
    buffer_append(result,(char*)self,sizeof(int)*len);
    # 5297 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5297, 494);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5297, 495);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5297, 496);
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5302, 497, "struct buffer* "), "/usr/local/include/neo-c.h", 5302, 498)), "/usr/local/include/neo-c.h", 5302, 499);
    # 5306 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5304 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5304, 500);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5304, 501);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5304, 502);
        return __result_obj__0;
    }
    # 5306 "/usr/local/include/neo-c.h"
    buffer_append(result,(char*)self,sizeof(long)*len);
    # 5307 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5307, 503);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5307, 504);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5307, 505);
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5312, 506, "struct buffer* "), "/usr/local/include/neo-c.h", 5312, 507)), "/usr/local/include/neo-c.h", 5312, 508);
    # 5316 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5314 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5314, 509);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5314, 510);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5314, 511);
        return __result_obj__0;
    }
    # 5316 "/usr/local/include/neo-c.h"
    buffer_append(result,(char*)self,sizeof(float)*len);
    # 5317 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5317, 512);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5317, 513);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5317, 514);
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
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5322, 515, "struct buffer* "), "/usr/local/include/neo-c.h", 5322, 516)), "/usr/local/include/neo-c.h", 5322, 517);
    # 5326 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5324 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5324, 518);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5324, 519);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5324, 520);
        return __result_obj__0;
    }
    # 5326 "/usr/local/include/neo-c.h"
    buffer_append(result,(char*)self,sizeof(double)*len);
    # 5327 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5327, 521);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5327, 522);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5327, 523);
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
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), "/usr/local/include/neo-c.h", 5333, 524, "char*"), "/usr/local/include/neo-c.h", 5333, 525);
    # 5339 "/usr/local/include/neo-c.h"
    if(self==((void*)0)) {
        # 5336 "/usr/local/include/neo-c.h"
                __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5336, 526);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5336, 527));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5336, 528));
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
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5359, 529);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5359, 530));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5359, 531));
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
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 539);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5, 541);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5, 542);
    return __result_obj__0;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_push_back"; neo_current_frame = &fr;
    struct list$1char$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$* litem;
    struct list_item$1char$* litem_20;
    struct list_item$1char$* litem_21;
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
        litem=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/neo-c.h", 1619, 533, "struct list_item$1char$*"))), "/usr/local/include/neo-c.h", 1619, 534);
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
        litem_20=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/neo-c.h", 1629, 535, "struct list_item$1char$*"))), "/usr/local/include/neo-c.h", 1629, 536);
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
        litem_21=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "/usr/local/include/neo-c.h", 1639, 537, "struct list_item$1char$*"))), "/usr/local/include/neo-c.h", 1639, 538);
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
        come_call_finalizer(list_item$1char$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 540);
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
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value1=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc(1, sizeof(struct list$1char$)*(1), "/usr/local/include/neo-c.h", 5384, 532, "struct list$1char$*"), "/usr/local/include/neo-c.h", 5384, 543),len,self))), "/usr/local/include/neo-c.h", 5384, 544);
    come_call_finalizer(list$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5384, 545);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5384, 546);
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
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 554);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 556);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 557);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_push_back"; neo_current_frame = &fr;
    struct list$1char$p* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$p* litem;
    struct list_item$1char$p* litem_22;
    struct list_item$1char$p* litem_23;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_22, 0, sizeof(litem_22));
    memset(&litem_23, 0, sizeof(litem_23));
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
        litem=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/neo-c.h", 1619, 548, "struct list_item$1char$p*"))), "/usr/local/include/neo-c.h", 1619, 549);
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
        litem_22=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/neo-c.h", 1629, 550, "struct list_item$1char$p*"))), "/usr/local/include/neo-c.h", 1629, 551);
        # 1631 "/usr/local/include/neo-c.h"
        litem_22->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_22->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        litem_22->item=item;
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_22;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_22;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_23=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "/usr/local/include/neo-c.h", 1639, 552, "struct list_item$1char$p*"))), "/usr/local/include/neo-c.h", 1639, 553);
        # 1641 "/usr/local/include/neo-c.h"
        litem_23->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_23->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        litem_23->item=item;
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_23;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_23;
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
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 555);
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
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value1=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "/usr/local/include/neo-c.h", 5389, 547, "struct list$1char$p*"), "/usr/local/include/neo-c.h", 5389, 558),len,self))), "/usr/local/include/neo-c.h", 5389, 559);
    come_call_finalizer(list$1char$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5389, 560);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5389, 561);
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
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 569);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 571);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 572);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_push_back"; neo_current_frame = &fr;
    struct list$1short$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1short$* litem;
    struct list_item$1short$* litem_24;
    struct list_item$1short$* litem_25;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_24, 0, sizeof(litem_24));
    memset(&litem_25, 0, sizeof(litem_25));
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
        litem=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/neo-c.h", 1619, 563, "struct list_item$1short$*"))), "/usr/local/include/neo-c.h", 1619, 564);
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
        litem_24=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/neo-c.h", 1629, 565, "struct list_item$1short$*"))), "/usr/local/include/neo-c.h", 1629, 566);
        # 1631 "/usr/local/include/neo-c.h"
        litem_24->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_24->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        litem_24->item=item;
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_24;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_24;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_25=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "/usr/local/include/neo-c.h", 1639, 567, "struct list_item$1short$*"))), "/usr/local/include/neo-c.h", 1639, 568);
        # 1641 "/usr/local/include/neo-c.h"
        litem_25->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_25->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        litem_25->item=item;
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_25;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_25;
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
        come_call_finalizer(list_item$1short$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 570);
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
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value1=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc(1, sizeof(struct list$1short$)*(1), "/usr/local/include/neo-c.h", 5394, 562, "struct list$1short$*"), "/usr/local/include/neo-c.h", 5394, 573),len,self))), "/usr/local/include/neo-c.h", 5394, 574);
    come_call_finalizer(list$1short$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5394, 575);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5394, 576);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 584);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 586);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 587);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_push_back"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_26;
    struct list_item$1int$* litem_27;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_26, 0, sizeof(litem_26));
    memset(&litem_27, 0, sizeof(litem_27));
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
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1619, 578, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1619, 579);
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
        litem_26=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1629, 580, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1629, 581);
        # 1631 "/usr/local/include/neo-c.h"
        litem_26->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_26->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        litem_26->item=item;
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_26;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_26;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_27=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1639, 582, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1639, 583);
        # 1641 "/usr/local/include/neo-c.h"
        litem_27->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_27->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        litem_27->item=item;
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_27;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_27;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 585);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value1=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 5399, 577, "struct list$1int$*"), "/usr/local/include/neo-c.h", 5399, 588),len,self))), "/usr/local/include/neo-c.h", 5399, 589);
    come_call_finalizer(list$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5399, 590);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5399, 591);
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
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 599);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 601);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 602);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_push_back"; neo_current_frame = &fr;
    struct list$1long$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1long$* litem;
    struct list_item$1long$* litem_28;
    struct list_item$1long$* litem_29;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_28, 0, sizeof(litem_28));
    memset(&litem_29, 0, sizeof(litem_29));
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
        litem=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/neo-c.h", 1619, 593, "struct list_item$1long$*"))), "/usr/local/include/neo-c.h", 1619, 594);
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
        litem_28=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/neo-c.h", 1629, 595, "struct list_item$1long$*"))), "/usr/local/include/neo-c.h", 1629, 596);
        # 1631 "/usr/local/include/neo-c.h"
        litem_28->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_28->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        litem_28->item=item;
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_28;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_28;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_29=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "/usr/local/include/neo-c.h", 1639, 597, "struct list_item$1long$*"))), "/usr/local/include/neo-c.h", 1639, 598);
        # 1641 "/usr/local/include/neo-c.h"
        litem_29->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_29->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        litem_29->item=item;
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_29;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_29;
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
        come_call_finalizer(list_item$1long$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 600);
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
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value1=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc(1, sizeof(struct list$1long$)*(1), "/usr/local/include/neo-c.h", 5404, 592, "struct list$1long$*"), "/usr/local/include/neo-c.h", 5404, 603),len,self))), "/usr/local/include/neo-c.h", 5404, 604);
    come_call_finalizer(list$1long$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5404, 605);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5404, 606);
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
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 614);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 616);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 617);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_push_back"; neo_current_frame = &fr;
    struct list$1float$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1float$* litem;
    struct list_item$1float$* litem_30;
    struct list_item$1float$* litem_31;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_30, 0, sizeof(litem_30));
    memset(&litem_31, 0, sizeof(litem_31));
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
        litem=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/neo-c.h", 1619, 608, "struct list_item$1float$*"))), "/usr/local/include/neo-c.h", 1619, 609);
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
        litem_30=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/neo-c.h", 1629, 610, "struct list_item$1float$*"))), "/usr/local/include/neo-c.h", 1629, 611);
        # 1631 "/usr/local/include/neo-c.h"
        litem_30->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_30->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        litem_30->item=item;
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_30;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_30;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_31=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "/usr/local/include/neo-c.h", 1639, 612, "struct list_item$1float$*"))), "/usr/local/include/neo-c.h", 1639, 613);
        # 1641 "/usr/local/include/neo-c.h"
        litem_31->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_31->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        litem_31->item=item;
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_31;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_31;
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
        come_call_finalizer(list_item$1float$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 615);
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
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value1=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc(1, sizeof(struct list$1float$)*(1), "/usr/local/include/neo-c.h", 5409, 607, "struct list$1float$*"), "/usr/local/include/neo-c.h", 5409, 618),len,self))), "/usr/local/include/neo-c.h", 5409, 619);
    come_call_finalizer(list$1float$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5409, 620);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5409, 621);
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
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 629);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 631);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 0, 632);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_push_back"; neo_current_frame = &fr;
    struct list$1double$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1double$* litem;
    struct list_item$1double$* litem_32;
    struct list_item$1double$* litem_33;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_32, 0, sizeof(litem_32));
    memset(&litem_33, 0, sizeof(litem_33));
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
        litem=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/neo-c.h", 1619, 623, "struct list_item$1double$*"))), "/usr/local/include/neo-c.h", 1619, 624);
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
        litem_32=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/neo-c.h", 1629, 625, "struct list_item$1double$*"))), "/usr/local/include/neo-c.h", 1629, 626);
        # 1631 "/usr/local/include/neo-c.h"
        litem_32->prev=self->head;
        # 1632 "/usr/local/include/neo-c.h"
        litem_32->next=((void*)0);
        # 1633 "/usr/local/include/neo-c.h"
        litem_32->item=item;
        # 1635 "/usr/local/include/neo-c.h"
        self->tail=litem_32;
        # 1636 "/usr/local/include/neo-c.h"
        self->head->next=litem_32;
    }
    else {
        # 1639 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
        litem_33=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "/usr/local/include/neo-c.h", 1639, 627, "struct list_item$1double$*"))), "/usr/local/include/neo-c.h", 1639, 628);
        # 1641 "/usr/local/include/neo-c.h"
        litem_33->prev=self->tail;
        # 1642 "/usr/local/include/neo-c.h"
        litem_33->next=((void*)0);
        # 1643 "/usr/local/include/neo-c.h"
        litem_33->item=item;
        # 1645 "/usr/local/include/neo-c.h"
        self->tail->next=litem_33;
        # 1646 "/usr/local/include/neo-c.h"
        self->tail=litem_33;
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
        come_call_finalizer(list_item$1double$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 630);
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
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value1=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc(1, sizeof(struct list$1double$)*(1), "/usr/local/include/neo-c.h", 5414, 622, "struct list$1double$*"), "/usr/local/include/neo-c.h", 5414, 633),len,self))), "/usr/local/include/neo-c.h", 5414, 634);
    come_call_finalizer(list$1double$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 5414, 635);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 5414, 636);
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5657))), "/usr/local/include/neo-c.h", 5657, 637);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5657, 638));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5657, 639));
        return __result_obj__0;
    }
    # 5659 "/usr/local/include/neo-c.h"
    len=strlen(self)+strlen(right);
    # 5661 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "/usr/local/include/neo-c.h", 5661, 640, "char*"), "/usr/local/include/neo-c.h", 5661, 641);
    # 5663 "/usr/local/include/neo-c.h"
    strncpy(result,self,len+1);
    # 5664 "/usr/local/include/neo-c.h"
    strncat(result,right,len+1);
    # 5666 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5666, 642);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5666, 643));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5666, 644));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5672))), "/usr/local/include/neo-c.h", 5672, 645);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5672, 646));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5672, 647));
        return __result_obj__0;
    }
    # 5674 "/usr/local/include/neo-c.h"
    len=strlen(self)+strlen(right);
    # 5676 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "/usr/local/include/neo-c.h", 5676, 648, "char*"), "/usr/local/include/neo-c.h", 5676, 649);
    # 5678 "/usr/local/include/neo-c.h"
    strncpy(result,self,len+1);
    # 5679 "/usr/local/include/neo-c.h"
    strncat(result,right,len+1);
    # 5681 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5681, 650);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5681, 651));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5681, 652));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5687))), "/usr/local/include/neo-c.h", 5687, 653);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5687, 654));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5687, 655));
        return __result_obj__0;
    }
    # 5689 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5689, 656, "struct buffer* "), "/usr/local/include/neo-c.h", 5689, 657)), "/usr/local/include/neo-c.h", 5689, 658);
    # 5695 "/usr/local/include/neo-c.h"
    for(i=0    ;i<right;i++){
        # 5692 "/usr/local/include/neo-c.h"
        buffer_append_str(buf,self);
    }
    # 5695 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "/usr/local/include/neo-c.h", 5695, 659);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 5695, 660);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5695, 661));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5695, 662));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5701))), "/usr/local/include/neo-c.h", 5701, 663);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5701, 664));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5701, 665));
        return __result_obj__0;
    }
    # 5703 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 5703, 666, "struct buffer* "), "/usr/local/include/neo-c.h", 5703, 667)), "/usr/local/include/neo-c.h", 5703, 668);
    # 5709 "/usr/local/include/neo-c.h"
    for(i=0    ;i<right;i++){
        # 5706 "/usr/local/include/neo-c.h"
        buffer_append_str(buf,self);
    }
    # 5709 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "/usr/local/include/neo-c.h", 5709, 669);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 5709, 670);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5709, 671));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5709, 672));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5961))), "/usr/local/include/neo-c.h", 5961, 673);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5961, 674));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5961, 675));
        return __result_obj__0;
    }
    # 5963 "/usr/local/include/neo-c.h"
    len=strlen(str);
    # 5964 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), "/usr/local/include/neo-c.h", 5964, 676, "char*"), "/usr/local/include/neo-c.h", 5964, 677);
    # 5970 "/usr/local/include/neo-c.h"
    for(i=0    ;i<len;i++){
        # 5967 "/usr/local/include/neo-c.h"
        result[i]=str[len-i-1];
    }
    # 5970 "/usr/local/include/neo-c.h"
    result[len]=0;
    # 5972 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 5972, 678);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5972, 679));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5972, 680));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",5978))), "/usr/local/include/neo-c.h", 5978, 681);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5978, 682));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5978, 683));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/usr/local/include/neo-c.h", 5991, 684);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5991, 685));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 5991, 686));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 5991, 687));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6003))), "/usr/local/include/neo-c.h", 6003, 688);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6003, 689));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6003, 690));
        return __result_obj__0;
    }
    # 6010 "/usr/local/include/neo-c.h"
    if(tail-head+1<1) {
        # 6007 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6007))), "/usr/local/include/neo-c.h", 6007, 691);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6007, 692));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6007, 693));
        return __result_obj__0;
    }
    # 6010 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/neo-c.h", 6010, 694, "char*"), "/usr/local/include/neo-c.h", 6010, 695);
    # 6012 "/usr/local/include/neo-c.h"
    memcpy(result,str+head,tail-head);
    # 6013 "/usr/local/include/neo-c.h"
    result[tail-head]=0;
    # 6015 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6015, 696);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6015, 697));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6015, 698));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6021))), "/usr/local/include/neo-c.h", 6021, 699);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6021, 700));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6021, 701));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/usr/local/include/neo-c.h", 6034, 702);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6034, 703));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6034, 704));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6034, 705));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6046))), "/usr/local/include/neo-c.h", 6046, 706);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6046, 707));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6046, 708));
        return __result_obj__0;
    }
    # 6053 "/usr/local/include/neo-c.h"
    if(tail-head+1<1) {
        # 6050 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6050))), "/usr/local/include/neo-c.h", 6050, 709);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6050, 710));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6050, 711));
        return __result_obj__0;
    }
    # 6053 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/neo-c.h", 6053, 712, "char*"), "/usr/local/include/neo-c.h", 6053, 713);
    # 6055 "/usr/local/include/neo-c.h"
    memcpy(result,str+head,tail-head);
    # 6056 "/usr/local/include/neo-c.h"
    result[tail-head]=0;
    # 6058 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6058, 714);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6058, 715));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6058, 716));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6064))), "/usr/local/include/neo-c.h", 6064, 717);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6064, 718));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6064, 719));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/usr/local/include/neo-c.h", 6077, 720);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6077, 721));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6077, 722));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6077, 723));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6089))), "/usr/local/include/neo-c.h", 6089, 724);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6089, 725));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6089, 726));
        return __result_obj__0;
    }
    # 6096 "/usr/local/include/neo-c.h"
    if(tail-head+1<1) {
        # 6093 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6093))), "/usr/local/include/neo-c.h", 6093, 727);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6093, 728));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6093, 729));
        return __result_obj__0;
    }
    # 6096 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "/usr/local/include/neo-c.h", 6096, 730, "char*"), "/usr/local/include/neo-c.h", 6096, 731);
    # 6098 "/usr/local/include/neo-c.h"
    memcpy(result,str+head,tail-head);
    # 6099 "/usr/local/include/neo-c.h"
    result[tail-head]=0;
    # 6101 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6101, 732);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6101, 733));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6101, 734));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6107))), "/usr/local/include/neo-c.h", 6107, 735);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6107, 736));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6107, 737));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6116))), "/usr/local/include/neo-c.h", 6116, 738);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6116, 739));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6116, 740));
        return __result_obj__0;
    }
    # 6119 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result2=(char* )come_increment_ref_count(__builtin_string(result,"/usr/local/include/neo-c.h",6119), "/usr/local/include/neo-c.h", 6119, 741);
    # 6121 "/usr/local/include/neo-c.h"
    free(result);
    # 6123 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result2, "/usr/local/include/neo-c.h", 6123, 742);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6123, 743));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6123, 744));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6129))), "/usr/local/include/neo-c.h", 6129, 745);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6129, 746));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6129, 747));
        return __result_obj__0;
    }
    # 6132 "/usr/local/include/neo-c.h"
    len=strlen(str);
    # 6138 "/usr/local/include/neo-c.h"
    if(head>=len) {
        # 6135 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/usr/local/include/neo-c.h",6135))), "/usr/local/include/neo-c.h", 6135, 748);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6135, 749));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6135, 750));
        return __result_obj__0;
    }
    # 6142 "/usr/local/include/neo-c.h"
    if(strcmp(str,"")==0) {
        # 6139 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/usr/local/include/neo-c.h",6139))), "/usr/local/include/neo-c.h", 6139, 751);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6139, 752));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6139, 753));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/usr/local/include/neo-c.h",6155))), "/usr/local/include/neo-c.h", 6155, 754);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6155, 755));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6155, 756));
        return __result_obj__0;
    }
    # 6162 "/usr/local/include/neo-c.h"
    if(tail>=len) {
        # 6159 "/usr/local/include/neo-c.h"
        tail=len;
    }
    # 6162 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len-(tail-head)+1)), "/usr/local/include/neo-c.h", 6162, 757, "char*"), "/usr/local/include/neo-c.h", 6162, 758);
    # 6164 "/usr/local/include/neo-c.h"
    memcpy(result,str,head);
    # 6165 "/usr/local/include/neo-c.h"
    memcpy(result+head,str+tail,len-tail);
    # 6167 "/usr/local/include/neo-c.h"
    result[len-(tail-head)]=0;
    # 6169 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6169, 759);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6169, 760));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6169, 761));
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6175, 762, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 6175, 763)))), "/usr/local/include/neo-c.h", 6175, 764);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 6175, 765);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6175, 766);
        return __result_obj__0;
    }
    # 6178 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6178, 767, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 6178, 768)), "/usr/local/include/neo-c.h", 6178, 769);
    # 6180 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    str=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 6180, 770, "struct buffer* "), "/usr/local/include/neo-c.h", 6180, 771)), "/usr/local/include/neo-c.h", 6180, 772);
    # 6182 "/usr/local/include/neo-c.h"
    self_len=charp_length(self);
    # 6192 "/usr/local/include/neo-c.h"
    for(i=0    ;i<self_len;i++){
        # 6191 "/usr/local/include/neo-c.h"
        if(self[i]==c) {
            # 6185 "/usr/local/include/neo-c.h"
            __right_value0 = (void*)0;
            list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"/usr/local/include/neo-c.h",6185), "/usr/local/include/neo-c.h", 6185, 773));
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
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"/usr/local/include/neo-c.h",6193), "/usr/local/include/neo-c.h", 6193, 774));
    }
    # 6196 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6196, 775);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6196, 776);
    come_call_finalizer(buffer_finalize, str, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 6196, 777);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6196, 778);
    return __result_obj__0;
}

char*  charp_xsprintf(char* self, const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_xsprintf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6201 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "/usr/local/include/neo-c.h", 6201, 779);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6201, 780));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6201, 781));
    return __result_obj__0;
}

char*  int_xsprintf(int self, const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_xsprintf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6206 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "/usr/local/include/neo-c.h", 6206, 782);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6206, 783));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6206, 784));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6212))), "/usr/local/include/neo-c.h", 6212, 785);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6212, 786));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6212, 787));
        return __result_obj__0;
    }
    # 6214 "/usr/local/include/neo-c.h"
    len=charp_length(str);
    # 6215 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), "/usr/local/include/neo-c.h", 6215, 788, "char*"), "/usr/local/include/neo-c.h", 6215, 789);
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
        __result_obj__0 = (char* )come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6234, 790);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6234, 791));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6234, 792));
    return __result_obj__0;
}

char*  chara_printable(char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_printable"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6239 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_printable(str))), "/usr/local/include/neo-c.h", 6239, 793);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6239, 794));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6239, 795));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/usr/local/include/neo-c.h",6245))), "/usr/local/include/neo-c.h", 6245, 796);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6245, 797));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6245, 798));
        return __result_obj__0;
    }
    # 6248 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 6248, 799, "struct buffer* "), "/usr/local/include/neo-c.h", 6248, 800)), "/usr/local/include/neo-c.h", 6248, 801);
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
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(result))), "/usr/local/include/neo-c.h", 6270, 802);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 6270, 803);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6270, 804));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6270, 805));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6279))), "/usr/local/include/neo-c.h", 6279, 806);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6279, 807));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6279, 808));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"/usr/local/include/neo-c.h",6293))), "/usr/local/include/neo-c.h", 6293, 809);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6293, 810));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6293, 811));
        return __result_obj__0;
    }
    else {
        # 6296 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"/usr/local/include/neo-c.h",6296))), "/usr/local/include/neo-c.h", 6296, 812);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6296, 813));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6296, 814));
        return __result_obj__0;
    }
    # 6299 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6299))), "/usr/local/include/neo-c.h", 6299, 815);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6299, 816));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6299, 817));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6305))), "/usr/local/include/neo-c.h", 6305, 818);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6305, 819));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6305, 820));
        return __result_obj__0;
    }
    # 6307 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    path2=(char* )come_increment_ref_count(xbasename(path), "/usr/local/include/neo-c.h", 6307, 821);
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path2,"/usr/local/include/neo-c.h",6321))), "/usr/local/include/neo-c.h", 6321, 822);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 6321, 823));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6321, 824));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6321, 825));
        return __result_obj__0;
    }
    else {
        # 6324 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(path2,0,p-path2))), "/usr/local/include/neo-c.h", 6324, 826);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 6324, 827));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6324, 828));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6324, 829));
        return __result_obj__0;
    }
    # 6327 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6327))), "/usr/local/include/neo-c.h", 6327, 830);
    (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 6327, 831));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6327, 832));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6327, 833));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6333))), "/usr/local/include/neo-c.h", 6333, 834);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6333, 835));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6333, 836));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"/usr/local/include/neo-c.h",6347))), "/usr/local/include/neo-c.h", 6347, 837);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6347, 838));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6347, 839));
        return __result_obj__0;
    }
    else {
        # 6350 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"/usr/local/include/neo-c.h",6350))), "/usr/local/include/neo-c.h", 6350, 840);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6350, 841));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6350, 842));
        return __result_obj__0;
    }
    # 6353 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6353))), "/usr/local/include/neo-c.h", 6353, 843);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6353, 844));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6353, 845));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("true","/usr/local/include/neo-c.h",6372))), "/usr/local/include/neo-c.h", 6372, 846);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6372, 847));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6372, 848));
        return __result_obj__0;
    }
    else {
        # 6375 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("false","/usr/local/include/neo-c.h",6375))), "/usr/local/include/neo-c.h", 6375, 849);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6375, 850));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6375, 851));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%c",self))), "/usr/local/include/neo-c.h", 6381, 852);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6381, 853));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6381, 854));
    return __result_obj__0;
}

char*  short_to_string(short self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6386 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "/usr/local/include/neo-c.h", 6386, 855);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6386, 856));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6386, 857));
    return __result_obj__0;
}

char*  int_to_string(int self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6391 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "/usr/local/include/neo-c.h", 6391, 858);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6391, 859));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6391, 860));
    return __result_obj__0;
}

char*  long_to_string(long self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6396 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "/usr/local/include/neo-c.h", 6396, 861);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6396, 862));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6396, 863));
    return __result_obj__0;
}

char*  size_t_to_string(unsigned long  int  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6401 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "/usr/local/include/neo-c.h", 6401, 864);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6401, 865));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6401, 866));
    return __result_obj__0;
}

char*  float_to_string(float self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6406 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%f",self))), "/usr/local/include/neo-c.h", 6406, 867);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6406, 868));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6406, 869));
    return __result_obj__0;
}

char*  double_to_string(double self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    # 6411 "/usr/local/include/neo-c.h"
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%lf",self))), "/usr/local/include/neo-c.h", 6411, 870);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6411, 871));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6411, 872));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6417))), "/usr/local/include/neo-c.h", 6417, 873);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6417, 874));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6417, 875));
        return __result_obj__0;
    }
    # 6419 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/usr/local/include/neo-c.h",6419))), "/usr/local/include/neo-c.h", 6419, 876);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6419, 877));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6419, 878));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6425))), "/usr/local/include/neo-c.h", 6425, 879);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6425, 880));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6425, 881));
        return __result_obj__0;
    }
    # 6427 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/usr/local/include/neo-c.h",6427))), "/usr/local/include/neo-c.h", 6427, 882);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6427, 883));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6427, 884));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6610))), "/usr/local/include/neo-c.h", 6610, 885);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6610, 886));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6610, 887));
        return __result_obj__0;
    }
    # 6612 "/usr/local/include/neo-c.h"
    puts(self);
    # 6614 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/usr/local/include/neo-c.h",6614))), "/usr/local/include/neo-c.h", 6614, 888);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6614, 889));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6614, 890));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6620))), "/usr/local/include/neo-c.h", 6620, 891);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6620, 892));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6620, 893));
        return __result_obj__0;
    }
    # 6622 "/usr/local/include/neo-c.h"
    printf("%s",self);
    # 6624 "/usr/local/include/neo-c.h"
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/usr/local/include/neo-c.h",6624))), "/usr/local/include/neo-c.h", 6624, 894);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6624, 895));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6624, 896));
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
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/usr/local/include/neo-c.h",6652))), "/usr/local/include/neo-c.h", 6652, 897);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6652, 898));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6652, 899));
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
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/usr/local/include/neo-c.h",6665))), "/usr/local/include/neo-c.h", 6665, 900);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/usr/local/include/neo-c.h", 6665, 901));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 6665, 902));
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
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/usr/local/include/neo-c.h", 6704, 903, "buffer"), "/usr/local/include/neo-c.h", 6704, 904), "", 0))), "/usr/local/include/neo-c.h", 6704, 905);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 6704, 906);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6704, 907);
        return __result_obj__0;
    }
    # 6706 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 6706, 908, "struct buffer* "), "/usr/local/include/neo-c.h", 6706, 909)), "/usr/local/include/neo-c.h", 6706, 910);
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
        __result_obj__0 = (struct buffer* )come_increment_ref_count(buf, "/usr/local/include/neo-c.h", 6720, 911);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6720, 912);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6720, 913);
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
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/usr/local/include/neo-c.h", 6804, 914, "buffer"), "/usr/local/include/neo-c.h", 6804, 915), "", 0))), "/usr/local/include/neo-c.h", 6804, 916);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 6804, 917);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6804, 918);
        return __result_obj__0;
    }
    # 6807 "/usr/local/include/neo-c.h"
    f=fopen(file_name,"r");
    # 6813 "/usr/local/include/neo-c.h"
    if(f==((void*)0)) {
        # 6810 "/usr/local/include/neo-c.h"
                __right_value0 = (void*)0;
        __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/usr/local/include/neo-c.h", 6810, 919, "buffer"), "/usr/local/include/neo-c.h", 6810, 920), "", 0))), "/usr/local/include/neo-c.h", 6810, 921);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 6810, 922);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6810, 923);
        return __result_obj__0;
    }
    # 6813 "/usr/local/include/neo-c.h"
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "/usr/local/include/neo-c.h", 6813, 924, "struct buffer* "), "/usr/local/include/neo-c.h", 6813, 925)), "/usr/local/include/neo-c.h", 6813, 926);
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
        __result_obj__0 = (struct buffer* )come_increment_ref_count(((struct buffer*)(__right_value0=buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), "/usr/local/include/neo-c.h", 6830, 927, "buffer"), "/usr/local/include/neo-c.h", 6830, 928), "", 0))), "/usr/local/include/neo-c.h", 6830, 929);
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 6830, 930);
        come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/usr/local/include/neo-c.h}", 6830, 931);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6830, 932);
        return __result_obj__0;
    }
    # 6833 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct buffer* )come_increment_ref_count(buf, "/usr/local/include/neo-c.h", 6833, 933);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6833, 934);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6833, 935);
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
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 6838, 936, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 6838, 937)), "/usr/local/include/neo-c.h", 6838, 938);
    # 6844 "/usr/local/include/neo-c.h"
    if(f==((void*)0)) {
        # 6841 "/usr/local/include/neo-c.h"
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6841, 939);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6841, 940);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6841, 941);
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
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(buf,"/usr/local/include/neo-c.h",6851), "/usr/local/include/neo-c.h", 6851, 942));
    }
    # 6854 "/usr/local/include/neo-c.h"
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 6854, 943);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6854, 944);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 6854, 945);
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

