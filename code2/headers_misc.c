/// c_include definition ///
/// typedef definition ///
typedef unsigned long size_t;

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

typedef unsigned long  int  ino_t  ;

typedef unsigned long  int  ino64_t  ;

typedef struct __dirstream DIR;

typedef unsigned long  long    ;

typedef unsigned short int fexcept_t;

typedef struct anonymous_typeX1 fenv_t;

typedef struct anonymous_typeX2 femode_t;

typedef unsigned long  int __size_t;

typedef unsigned long  long    ;

typedef struct anonymous_typeX3 glob_t;

typedef struct anonymous_typeX4 glob64_t;

typedef void* iconv_t;

typedef void* nl_catd;

typedef int nl_item;

typedef struct __locale_struct*  __locale_t  ;

typedef struct __locale_struct*  locale_t  ;

typedef long ptrdiff_t;

typedef int wchar_t;

typedef struct anonymous_typeX5 max_align_t;

typedef char  int8_t  ;

typedef short int  int16_t  ;

typedef int  int32_t  ;

typedef long  int  int64_t  ;

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

typedef enum memory_order memory_order;

typedef struct atomic_flag  atomic_flag  ;

typedef __builtin_va_list __gnuc_va_list;

typedef float float_t;

typedef double double_t;

typedef struct anonymous_typeX6 __mbstate_t;

typedef struct _G_fpos_t  __fpos_t  ;

typedef struct _G_fpos64_t  __fpos64_t  ;

typedef struct _IO_FILE  __FILE  ;

typedef struct _IO_FILE  FILE  ;

typedef void _IO_lock_t;

typedef long  int (*cookie_read_function_t)(void*,char*,unsigned long );

typedef long  int (*cookie_write_function_t)(void*,const char*,unsigned long );

typedef int (*cookie_seek_function_t)(void*,long  int* ,int);

typedef int (*cookie_close_function_t)(void*);

typedef struct _IO_cookie_io_functions_t  cookie_io_functions_t  ;

typedef __builtin_va_list  va_list  ;

typedef long  int  off_t  ;

typedef long  int  off64_t  ;

typedef long  int  ssize_t  ;

typedef struct _G_fpos_t  fpos_t  ;

typedef struct _G_fpos64_t  fpos64_t  ;

typedef long  int  time_t  ;

typedef int  pid_t  ;

typedef char __s8;

typedef unsigned char __u8;

typedef short __s16;

typedef unsigned short int __u16;

typedef int __s32;

typedef unsigned int __u32;

typedef long long __s64;

typedef unsigned long  long __u64;

typedef struct anonymous_typeX9 __kernel_fd_set;

typedef void (*__kernel_sighandler_t)(int);

typedef int __kernel_key_t;

typedef int __kernel_mqd_t;

typedef unsigned short int __kernel_old_uid_t;

typedef unsigned short int __kernel_old_gid_t;

typedef unsigned long  int __kernel_old_dev_t;

typedef long __kernel_long_t;

typedef unsigned long  int __kernel_ulong_t;

typedef unsigned long  int  __kernel_ino_t  ;

typedef unsigned int __kernel_mode_t;

typedef int __kernel_pid_t;

typedef int __kernel_ipc_pid_t;

typedef unsigned int __kernel_uid_t;

typedef unsigned int __kernel_gid_t;

typedef long  __kernel_suseconds_t  ;

typedef int __kernel_daddr_t;

typedef unsigned int __kernel_uid32_t;

typedef unsigned int __kernel_gid32_t;

typedef unsigned long  int  __kernel_size_t  ;

typedef long  __kernel_ssize_t  ;

typedef long  __kernel_ptrdiff_t  ;

typedef struct anonymous_typeX10 __kernel_fsid_t;

typedef long  __kernel_off_t  ;

typedef long long __kernel_loff_t;

typedef long  __kernel_old_time_t  ;

typedef long  __kernel_time_t  ;

typedef long long __kernel_time64_t;

typedef long  __kernel_clock_t  ;

typedef int __kernel_timer_t;

typedef int __kernel_clockid_t;

typedef char* __kernel_caddr_t;

typedef unsigned short int __kernel_uid16_t;

typedef unsigned short int __kernel_gid16_t;

typedef unsigned short int  __le16  ;

typedef unsigned short int  __be16  ;

typedef unsigned int  __le32  ;

typedef unsigned int  __be32  ;

typedef unsigned long  long  __le64  ;

typedef unsigned long  long  __be64  ;

typedef unsigned short int  __sum16  ;

typedef unsigned int  __wsum  ;

typedef unsigned int __poll_t;

typedef unsigned long  int __cpu_mask;

typedef struct anonymous_typeX11 cpu_set_t;

typedef unsigned char  u_char  ;

typedef unsigned short int  u_short  ;

typedef unsigned int  u_int  ;

typedef unsigned long  int  u_long  ;

typedef long  int  quad_t  ;

typedef unsigned long  int  u_quad_t  ;

typedef struct __fsid_t  fsid_t  ;

typedef long  int  loff_t  ;

typedef unsigned long  int  dev_t  ;

typedef unsigned int  gid_t  ;

typedef unsigned int  mode_t  ;

typedef unsigned long  int  nlink_t  ;

typedef unsigned int  uid_t  ;

typedef unsigned int  id_t  ;

typedef int  daddr_t  ;

typedef char*  caddr_t  ;

typedef int  key_t  ;

typedef long  int  clock_t  ;

typedef int  clockid_t  ;

typedef void*  timer_t  ;

typedef unsigned int  useconds_t  ;

typedef long  int  suseconds_t  ;

typedef unsigned long  int ulong;

typedef unsigned short int ushort;

typedef unsigned int uint;

typedef unsigned char  u_int8_t  ;

typedef unsigned short int  u_int16_t  ;

typedef unsigned int  u_int32_t  ;

typedef unsigned long  int  u_int64_t  ;

typedef int __attribute__ ((__mode__ (__word__))) register_t __attribute__ ((__mode__ (__word__)));

typedef struct anonymous_typeX12 __sigset_t;

typedef struct anonymous_typeX12  sigset_t  ;

typedef long  int __fd_mask;

typedef struct anonymous_typeX13 fd_set;

typedef long  int  fd_mask  ;

typedef long  int  blksize_t  ;

typedef long  int  blkcnt_t  ;

typedef unsigned long  int  fsblkcnt_t  ;

typedef unsigned long  int  fsfilcnt_t  ;

typedef long  int  blkcnt64_t  ;

typedef unsigned long  int  fsblkcnt64_t  ;

typedef unsigned long  int  fsfilcnt64_t  ;

typedef union anonymous_typeZ14 __atomic_wide_counter;

typedef struct __pthread_internal_list  __pthread_list_t  ;

typedef struct __pthread_internal_slist  __pthread_slist_t  ;

typedef unsigned int __tss_t;

typedef unsigned long  int __thrd_t;

typedef struct anonymous_typeX16 __once_flag;

typedef unsigned long  int pthread_t;

typedef union anonymous_typeZ17 pthread_mutexattr_t;

typedef union anonymous_typeZ18 pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

typedef union pthread_attr_t  pthread_attr_t  ;

typedef union anonymous_typeZ19 pthread_mutex_t;

typedef union anonymous_typeZ20 pthread_cond_t;

typedef union anonymous_typeZ21 pthread_rwlock_t;

typedef union anonymous_typeZ22 pthread_rwlockattr_t;

typedef volatile int pthread_spinlock_t;

typedef union anonymous_typeZ23 pthread_barrier_t;

typedef union anonymous_typeZ24 pthread_barrierattr_t;

typedef struct anonymous_typeX25 posix_spawnattr_t;

typedef struct anonymous_typeX26 posix_spawn_file_actions_t;

typedef struct anonymous_typeX27 wordexp_t;

/// previous struct definition ///
struct stat;

struct stat64;

struct _IO_FILE;

struct _IO_marker;

struct _IO_codecvt;

struct _IO_wide_data;

struct obstack;

/// struct definition ///
struct __fsid_t
{
    int __val[2];
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

enum { FE_INVALID=(0x01),
__FE_DENORM=(0x02),
FE_DIVBYZERO=(0x04),
FE_OVERFLOW=(0x08),
FE_UNDERFLOW=(0x10),
FE_INEXACT=(0x20)
};

enum { FE_TONEAREST=(0),
FE_DOWNWARD=(0x400),
FE_UPWARD=(0x800),
FE_TOWARDZERO=(0xc00)
};

struct anonymous_typeX1
{
    unsigned short int __control_word;
    unsigned short int __glibc_reserved1;
    unsigned short int __status_word;
    unsigned short int __glibc_reserved2;
    unsigned short int __tags;
    unsigned short int __glibc_reserved3;
    unsigned int __eip;
    unsigned short int __cs_selector;
    unsigned int __opcode:11;
    unsigned int __glibc_reserved4:5;
    unsigned int __data_offset;
    unsigned short int __data_selector;
    unsigned short int __glibc_reserved5;
    unsigned int __mxcsr;
};

struct anonymous_typeX2
{
    unsigned short int __control_word;
    unsigned short int __glibc_reserved;
    unsigned int __mxcsr;
};

struct anonymous_typeX3
{
    unsigned long  int  gl_pathc  ;
    char** gl_pathv;
    unsigned long  int  gl_offs  ;
    int gl_flags;
    void (*gl_closedir)(void*);
    struct dirent* (*gl_readdir)(void*);
    void* (*gl_opendir)(const char*);
    int (*gl_lstat)(const char* __restrict,struct stat* __restrict );
    int (*gl_stat)(const char* __restrict,struct stat* __restrict );
};

struct anonymous_typeX4
{
    unsigned long  int  gl_pathc  ;
    char** gl_pathv;
    unsigned long  int  gl_offs  ;
    int gl_flags;
    void (*gl_closedir)(void*);
    struct dirent64* (*gl_readdir)(void*);
    void* (*gl_opendir)(const char*);
    int (*gl_lstat)(const char* __restrict,struct stat64* __restrict );
    int (*gl_stat)(const char* __restrict,struct stat64* __restrict );
};

enum { ABDAY_1=((((2)<<16)|(0))),
ABDAY_2 
,ABDAY_3 
,ABDAY_4 
,ABDAY_5 
,ABDAY_6 
,ABDAY_7 
,DAY_1 
,DAY_2 
,DAY_3 
,DAY_4 
,DAY_5 
,DAY_6 
,DAY_7 
,ABMON_1 
,ABMON_2 
,ABMON_3 
,ABMON_4 
,ABMON_5 
,ABMON_6 
,ABMON_7 
,ABMON_8 
,ABMON_9 
,ABMON_10 
,ABMON_11 
,ABMON_12 
,MON_1 
,MON_2 
,MON_3 
,MON_4 
,MON_5 
,MON_6 
,MON_7 
,MON_8 
,MON_9 
,MON_10 
,MON_11 
,MON_12 
,AM_STR 
,PM_STR 
,D_T_FMT 
,D_FMT 
,T_FMT 
,T_FMT_AMPM 
,ERA 
,__ERA_YEAR 
,ERA_D_FMT 
,ALT_DIGITS 
,ERA_D_T_FMT 
,ERA_T_FMT 
,_NL_TIME_ERA_NUM_ENTRIES 
,_NL_TIME_ERA_ENTRIES 
,_NL_WABDAY_1 
,_NL_WABDAY_2 
,_NL_WABDAY_3 
,_NL_WABDAY_4 
,_NL_WABDAY_5 
,_NL_WABDAY_6 
,_NL_WABDAY_7 
,_NL_WDAY_1 
,_NL_WDAY_2 
,_NL_WDAY_3 
,_NL_WDAY_4 
,_NL_WDAY_5 
,_NL_WDAY_6 
,_NL_WDAY_7 
,_NL_WABMON_1 
,_NL_WABMON_2 
,_NL_WABMON_3 
,_NL_WABMON_4 
,_NL_WABMON_5 
,_NL_WABMON_6 
,_NL_WABMON_7 
,_NL_WABMON_8 
,_NL_WABMON_9 
,_NL_WABMON_10 
,_NL_WABMON_11 
,_NL_WABMON_12 
,_NL_WMON_1 
,_NL_WMON_2 
,_NL_WMON_3 
,_NL_WMON_4 
,_NL_WMON_5 
,_NL_WMON_6 
,_NL_WMON_7 
,_NL_WMON_8 
,_NL_WMON_9 
,_NL_WMON_10 
,_NL_WMON_11 
,_NL_WMON_12 
,_NL_WAM_STR 
,_NL_WPM_STR 
,_NL_WD_T_FMT 
,_NL_WD_FMT 
,_NL_WT_FMT 
,_NL_WT_FMT_AMPM 
,_NL_WERA_YEAR 
,_NL_WERA_D_FMT 
,_NL_WALT_DIGITS 
,_NL_WERA_D_T_FMT 
,_NL_WERA_T_FMT 
,_NL_TIME_WEEK_NDAYS 
,_NL_TIME_WEEK_1STDAY 
,_NL_TIME_WEEK_1STWEEK 
,_NL_TIME_FIRST_WEEKDAY 
,_NL_TIME_FIRST_WORKDAY 
,_NL_TIME_CAL_DIRECTION 
,_NL_TIME_TIMEZONE 
,_DATE_FMT 
,_NL_W_DATE_FMT 
,_NL_TIME_CODESET 
,__ALTMON_1 
,__ALTMON_2 
,__ALTMON_3 
,__ALTMON_4 
,__ALTMON_5 
,__ALTMON_6 
,__ALTMON_7 
,__ALTMON_8 
,__ALTMON_9 
,__ALTMON_10 
,__ALTMON_11 
,__ALTMON_12 
,_NL_WALTMON_1 
,_NL_WALTMON_2 
,_NL_WALTMON_3 
,_NL_WALTMON_4 
,_NL_WALTMON_5 
,_NL_WALTMON_6 
,_NL_WALTMON_7 
,_NL_WALTMON_8 
,_NL_WALTMON_9 
,_NL_WALTMON_10 
,_NL_WALTMON_11 
,_NL_WALTMON_12 
,_NL_ABALTMON_1 
,_NL_ABALTMON_2 
,_NL_ABALTMON_3 
,_NL_ABALTMON_4 
,_NL_ABALTMON_5 
,_NL_ABALTMON_6 
,_NL_ABALTMON_7 
,_NL_ABALTMON_8 
,_NL_ABALTMON_9 
,_NL_ABALTMON_10 
,_NL_ABALTMON_11 
,_NL_ABALTMON_12 
,_NL_WABALTMON_1 
,_NL_WABALTMON_2 
,_NL_WABALTMON_3 
,_NL_WABALTMON_4 
,_NL_WABALTMON_5 
,_NL_WABALTMON_6 
,_NL_WABALTMON_7 
,_NL_WABALTMON_8 
,_NL_WABALTMON_9 
,_NL_WABALTMON_10 
,_NL_WABALTMON_11 
,_NL_WABALTMON_12 
,_NL_NUM_LC_TIME 
,_NL_COLLATE_NRULES=((((3)<<16)|(0))),
_NL_COLLATE_RULESETS 
,_NL_COLLATE_TABLEMB 
,_NL_COLLATE_WEIGHTMB 
,_NL_COLLATE_EXTRAMB 
,_NL_COLLATE_INDIRECTMB 
,_NL_COLLATE_GAP1 
,_NL_COLLATE_GAP2 
,_NL_COLLATE_GAP3 
,_NL_COLLATE_TABLEWC 
,_NL_COLLATE_WEIGHTWC 
,_NL_COLLATE_EXTRAWC 
,_NL_COLLATE_INDIRECTWC 
,_NL_COLLATE_SYMB_HASH_SIZEMB 
,_NL_COLLATE_SYMB_TABLEMB 
,_NL_COLLATE_SYMB_EXTRAMB 
,_NL_COLLATE_COLLSEQMB 
,_NL_COLLATE_COLLSEQWC 
,_NL_COLLATE_CODESET 
,_NL_NUM_LC_COLLATE 
,_NL_CTYPE_CLASS=((((0)<<16)|(0))),
_NL_CTYPE_TOUPPER 
,_NL_CTYPE_GAP1 
,_NL_CTYPE_TOLOWER 
,_NL_CTYPE_GAP2 
,_NL_CTYPE_CLASS32 
,_NL_CTYPE_GAP3 
,_NL_CTYPE_GAP4 
,_NL_CTYPE_GAP5 
,_NL_CTYPE_GAP6 
,_NL_CTYPE_CLASS_NAMES 
,_NL_CTYPE_MAP_NAMES 
,_NL_CTYPE_WIDTH 
,_NL_CTYPE_MB_CUR_MAX 
,_NL_CTYPE_CODESET_NAME 
,CODESET=(((((0)<<16)|(0))+14)),
_NL_CTYPE_TOUPPER32 
,_NL_CTYPE_TOLOWER32 
,_NL_CTYPE_CLASS_OFFSET 
,_NL_CTYPE_MAP_OFFSET 
,_NL_CTYPE_INDIGITS_MB_LEN 
,_NL_CTYPE_INDIGITS0_MB 
,_NL_CTYPE_INDIGITS1_MB 
,_NL_CTYPE_INDIGITS2_MB 
,_NL_CTYPE_INDIGITS3_MB 
,_NL_CTYPE_INDIGITS4_MB 
,_NL_CTYPE_INDIGITS5_MB 
,_NL_CTYPE_INDIGITS6_MB 
,_NL_CTYPE_INDIGITS7_MB 
,_NL_CTYPE_INDIGITS8_MB 
,_NL_CTYPE_INDIGITS9_MB 
,_NL_CTYPE_INDIGITS_WC_LEN 
,_NL_CTYPE_INDIGITS0_WC 
,_NL_CTYPE_INDIGITS1_WC 
,_NL_CTYPE_INDIGITS2_WC 
,_NL_CTYPE_INDIGITS3_WC 
,_NL_CTYPE_INDIGITS4_WC 
,_NL_CTYPE_INDIGITS5_WC 
,_NL_CTYPE_INDIGITS6_WC 
,_NL_CTYPE_INDIGITS7_WC 
,_NL_CTYPE_INDIGITS8_WC 
,_NL_CTYPE_INDIGITS9_WC 
,_NL_CTYPE_OUTDIGIT0_MB 
,_NL_CTYPE_OUTDIGIT1_MB 
,_NL_CTYPE_OUTDIGIT2_MB 
,_NL_CTYPE_OUTDIGIT3_MB 
,_NL_CTYPE_OUTDIGIT4_MB 
,_NL_CTYPE_OUTDIGIT5_MB 
,_NL_CTYPE_OUTDIGIT6_MB 
,_NL_CTYPE_OUTDIGIT7_MB 
,_NL_CTYPE_OUTDIGIT8_MB 
,_NL_CTYPE_OUTDIGIT9_MB 
,_NL_CTYPE_OUTDIGIT0_WC 
,_NL_CTYPE_OUTDIGIT1_WC 
,_NL_CTYPE_OUTDIGIT2_WC 
,_NL_CTYPE_OUTDIGIT3_WC 
,_NL_CTYPE_OUTDIGIT4_WC 
,_NL_CTYPE_OUTDIGIT5_WC 
,_NL_CTYPE_OUTDIGIT6_WC 
,_NL_CTYPE_OUTDIGIT7_WC 
,_NL_CTYPE_OUTDIGIT8_WC 
,_NL_CTYPE_OUTDIGIT9_WC 
,_NL_CTYPE_TRANSLIT_TAB_SIZE 
,_NL_CTYPE_TRANSLIT_FROM_IDX 
,_NL_CTYPE_TRANSLIT_FROM_TBL 
,_NL_CTYPE_TRANSLIT_TO_IDX 
,_NL_CTYPE_TRANSLIT_TO_TBL 
,_NL_CTYPE_TRANSLIT_DEFAULT_MISSING_LEN 
,_NL_CTYPE_TRANSLIT_DEFAULT_MISSING 
,_NL_CTYPE_TRANSLIT_IGNORE_LEN 
,_NL_CTYPE_TRANSLIT_IGNORE 
,_NL_CTYPE_MAP_TO_NONASCII 
,_NL_CTYPE_NONASCII_CASE 
,_NL_CTYPE_EXTRA_MAP_1 
,_NL_CTYPE_EXTRA_MAP_2 
,_NL_CTYPE_EXTRA_MAP_3 
,_NL_CTYPE_EXTRA_MAP_4 
,_NL_CTYPE_EXTRA_MAP_5 
,_NL_CTYPE_EXTRA_MAP_6 
,_NL_CTYPE_EXTRA_MAP_7 
,_NL_CTYPE_EXTRA_MAP_8 
,_NL_CTYPE_EXTRA_MAP_9 
,_NL_CTYPE_EXTRA_MAP_10 
,_NL_CTYPE_EXTRA_MAP_11 
,_NL_CTYPE_EXTRA_MAP_12 
,_NL_CTYPE_EXTRA_MAP_13 
,_NL_CTYPE_EXTRA_MAP_14 
,_NL_NUM_LC_CTYPE 
,__INT_CURR_SYMBOL=((((4)<<16)|(0))),
__CURRENCY_SYMBOL 
,__MON_DECIMAL_POINT 
,__MON_THOUSANDS_SEP 
,__MON_GROUPING 
,__POSITIVE_SIGN 
,__NEGATIVE_SIGN 
,__INT_FRAC_DIGITS 
,__FRAC_DIGITS 
,__P_CS_PRECEDES 
,__P_SEP_BY_SPACE 
,__N_CS_PRECEDES 
,__N_SEP_BY_SPACE 
,__P_SIGN_POSN 
,__N_SIGN_POSN 
,_NL_MONETARY_CRNCYSTR 
,__INT_P_CS_PRECEDES 
,__INT_P_SEP_BY_SPACE 
,__INT_N_CS_PRECEDES 
,__INT_N_SEP_BY_SPACE 
,__INT_P_SIGN_POSN 
,__INT_N_SIGN_POSN 
,_NL_MONETARY_DUO_INT_CURR_SYMBOL 
,_NL_MONETARY_DUO_CURRENCY_SYMBOL 
,_NL_MONETARY_DUO_INT_FRAC_DIGITS 
,_NL_MONETARY_DUO_FRAC_DIGITS 
,_NL_MONETARY_DUO_P_CS_PRECEDES 
,_NL_MONETARY_DUO_P_SEP_BY_SPACE 
,_NL_MONETARY_DUO_N_CS_PRECEDES 
,_NL_MONETARY_DUO_N_SEP_BY_SPACE 
,_NL_MONETARY_DUO_INT_P_CS_PRECEDES 
,_NL_MONETARY_DUO_INT_P_SEP_BY_SPACE 
,_NL_MONETARY_DUO_INT_N_CS_PRECEDES 
,_NL_MONETARY_DUO_INT_N_SEP_BY_SPACE 
,_NL_MONETARY_DUO_P_SIGN_POSN 
,_NL_MONETARY_DUO_N_SIGN_POSN 
,_NL_MONETARY_DUO_INT_P_SIGN_POSN 
,_NL_MONETARY_DUO_INT_N_SIGN_POSN 
,_NL_MONETARY_UNO_VALID_FROM 
,_NL_MONETARY_UNO_VALID_TO 
,_NL_MONETARY_DUO_VALID_FROM 
,_NL_MONETARY_DUO_VALID_TO 
,_NL_MONETARY_CONVERSION_RATE 
,_NL_MONETARY_DECIMAL_POINT_WC 
,_NL_MONETARY_THOUSANDS_SEP_WC 
,_NL_MONETARY_CODESET 
,_NL_NUM_LC_MONETARY 
,__DECIMAL_POINT=((((1)<<16)|(0))),
RADIXCHAR=(((((1)<<16)|(0)))),
__THOUSANDS_SEP 
,THOUSEP=((((((1)<<16)|(0)))+1)),
__GROUPING 
,_NL_NUMERIC_DECIMAL_POINT_WC 
,_NL_NUMERIC_THOUSANDS_SEP_WC 
,_NL_NUMERIC_CODESET 
,_NL_NUM_LC_NUMERIC 
,__YESEXPR=((((5)<<16)|(0))),
__NOEXPR 
,__YESSTR 
,__NOSTR 
,_NL_MESSAGES_CODESET 
,_NL_NUM_LC_MESSAGES 
,_NL_PAPER_HEIGHT=((((7)<<16)|(0))),
_NL_PAPER_WIDTH 
,_NL_PAPER_CODESET 
,_NL_NUM_LC_PAPER 
,_NL_NAME_NAME_FMT=((((8)<<16)|(0))),
_NL_NAME_NAME_GEN 
,_NL_NAME_NAME_MR 
,_NL_NAME_NAME_MRS 
,_NL_NAME_NAME_MISS 
,_NL_NAME_NAME_MS 
,_NL_NAME_CODESET 
,_NL_NUM_LC_NAME 
,_NL_ADDRESS_POSTAL_FMT=((((9)<<16)|(0))),
_NL_ADDRESS_COUNTRY_NAME 
,_NL_ADDRESS_COUNTRY_POST 
,_NL_ADDRESS_COUNTRY_AB2 
,_NL_ADDRESS_COUNTRY_AB3 
,_NL_ADDRESS_COUNTRY_CAR 
,_NL_ADDRESS_COUNTRY_NUM 
,_NL_ADDRESS_COUNTRY_ISBN 
,_NL_ADDRESS_LANG_NAME 
,_NL_ADDRESS_LANG_AB 
,_NL_ADDRESS_LANG_TERM 
,_NL_ADDRESS_LANG_LIB 
,_NL_ADDRESS_CODESET 
,_NL_NUM_LC_ADDRESS 
,_NL_TELEPHONE_TEL_INT_FMT=((((10)<<16)|(0))),
_NL_TELEPHONE_TEL_DOM_FMT 
,_NL_TELEPHONE_INT_SELECT 
,_NL_TELEPHONE_INT_PREFIX 
,_NL_TELEPHONE_CODESET 
,_NL_NUM_LC_TELEPHONE 
,_NL_MEASUREMENT_MEASUREMENT=((((11)<<16)|(0))),
_NL_MEASUREMENT_CODESET 
,_NL_NUM_LC_MEASUREMENT 
,_NL_IDENTIFICATION_TITLE=((((12)<<16)|(0))),
_NL_IDENTIFICATION_SOURCE 
,_NL_IDENTIFICATION_ADDRESS 
,_NL_IDENTIFICATION_CONTACT 
,_NL_IDENTIFICATION_EMAIL 
,_NL_IDENTIFICATION_TEL 
,_NL_IDENTIFICATION_FAX 
,_NL_IDENTIFICATION_LANGUAGE 
,_NL_IDENTIFICATION_TERRITORY 
,_NL_IDENTIFICATION_AUDIENCE 
,_NL_IDENTIFICATION_APPLICATION 
,_NL_IDENTIFICATION_ABBREVIATION 
,_NL_IDENTIFICATION_REVISION 
,_NL_IDENTIFICATION_DATE 
,_NL_IDENTIFICATION_CATEGORY 
,_NL_IDENTIFICATION_CODESET 
,_NL_NUM_LC_IDENTIFICATION 
,_NL_NUM 
};

struct __locale_struct
{
    struct __locale_data* __locales[13];
    const unsigned short int* __ctype_b;
    const int* __ctype_tolower;
    const int* __ctype_toupper;
    const char* __names[13];
};

struct anonymous_typeX5
{
    long long __attribute__((__aligned__(__alignof__(long long)))) __clang_max_align_nonce1 __attribute__((__aligned__(__alignof__(long long))));
    long  double __attribute__((__aligned__(__alignof__(long double)))) __clang_max_align_nonce2 __attribute__((__aligned__(__alignof__(long double))));
};

enum  memory_order { memory_order_relaxed=(0),
memory_order_consume=(1),
memory_order_acquire=(2),
memory_order_release=(3),
memory_order_acq_rel=(4),
memory_order_seq_cst=(5)
};

typedef _Atomic(_Bool) atomic_bool;

typedef _Atomic(char) atomic_char;

typedef _Atomic(char) atomic_schar;

typedef _Atomic(unsigned char) atomic_uchar;

typedef _Atomic(short) atomic_short;

typedef _Atomic(unsigned short int) atomic_ushort;

typedef _Atomic(int) atomic_int;

typedef _Atomic(unsigned int) atomic_uint;

typedef _Atomic(long) atomic_long;

typedef _Atomic(unsigned long  int) atomic_ulong;

typedef _Atomic(long  long) atomic_llong;

typedef _Atomic(unsigned long  long) atomic_ullong;

typedef _Atomic(unsigned short int ) atomic_char16_t  ;

typedef _Atomic(unsigned int ) atomic_char32_t  ;

typedef _Atomic(int ) atomic_wchar_t  ;

typedef _Atomic(char ) atomic_int_least8_t  ;

typedef _Atomic(unsigned char ) atomic_uint_least8_t  ;

typedef _Atomic(short int ) atomic_int_least16_t  ;

typedef _Atomic(unsigned short int ) atomic_uint_least16_t  ;

typedef _Atomic(int ) atomic_int_least32_t  ;

typedef _Atomic(unsigned int ) atomic_uint_least32_t  ;

typedef _Atomic(long  int ) atomic_int_least64_t  ;

typedef _Atomic(unsigned long  int ) atomic_uint_least64_t  ;

typedef _Atomic(char ) atomic_int_fast8_t  ;

typedef _Atomic(unsigned char ) atomic_uint_fast8_t  ;

typedef _Atomic(long  int ) atomic_int_fast16_t  ;

typedef _Atomic(unsigned long  int ) atomic_uint_fast16_t  ;

typedef _Atomic(long  int ) atomic_int_fast32_t  ;

typedef _Atomic(unsigned long  int ) atomic_uint_fast32_t  ;

typedef _Atomic(long  int ) atomic_int_fast64_t  ;

typedef _Atomic(unsigned long  int ) atomic_uint_fast64_t  ;

typedef _Atomic(long  int ) atomic_intptr_t  ;

typedef _Atomic(unsigned long  int ) atomic_uintptr_t  ;

typedef _Atomic(unsigned long ) atomic_size_t  ;

typedef _Atomic(long ) atomic_ptrdiff_t  ;

typedef _Atomic(long  int ) atomic_intmax_t  ;

typedef _Atomic(unsigned long  int ) atomic_uintmax_t  ;

struct atomic_flag
{
    _Atomic(_Bool ) _Value  ;
};

enum { FP_INT_UPWARD=(0),
FP_INT_DOWNWARD=(1),
FP_INT_TOWARDZERO=(2),
FP_INT_TONEARESTFROMZERO=(3),
FP_INT_TONEAREST=(4)
};

enum { FP_NAN=(0),
FP_INFINITE=(1),
FP_ZERO=(2),
FP_SUBNORMAL=(3),
FP_NORMAL=(4)
};

union anonymous_typeZ7
{
unsigned int __wch;
char __wchb[4];
};

union anonymous_typeZ8
{
unsigned int __wch;
char __wchb[4];
};

struct anonymous_typeX6
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
    long  int (*(*read))(void*,char*,unsigned long )  ;
    long  int (*(*write))(void*,const char*,unsigned long )  ;
    int (*(*seek))(void*,long  int* ,int)  ;
    int (*(*close))(void*)  ;
};

struct mallinfo
{
    int arena;
    int ordblks;
    int smblks;
    int hblks;
    int hblkhd;
    int usmblks;
    int fsmblks;
    int uordblks;
    int fordblks;
    int keepcost;
};

struct mallinfo2
{
    unsigned long  arena  ;
    unsigned long  ordblks  ;
    unsigned long  smblks  ;
    unsigned long  hblks  ;
    unsigned long  hblkhd  ;
    unsigned long  usmblks  ;
    unsigned long  fsmblks  ;
    unsigned long  uordblks  ;
    unsigned long  fordblks  ;
    unsigned long  keepcost  ;
};

struct timespec
{
    long  int  tv_sec  ;
    long  int  tv_nsec  ;
};

struct anonymous_typeX9
{
    unsigned long  int fds_bits[1024/(8*sizeof(long))];
};

struct anonymous_typeX10
{
    int val[2];
};

struct sched_attr
{
    unsigned int  size  ;
    unsigned int  sched_policy  ;
    unsigned long  long  sched_flags  ;
    int  sched_nice  ;
    unsigned int  sched_priority  ;
    unsigned long  long  sched_runtime  ;
    unsigned long  long  sched_deadline  ;
    unsigned long  long  sched_period  ;
    unsigned int  sched_util_min  ;
    unsigned int  sched_util_max  ;
};

struct sched_param
{
    int sched_priority;
};

struct anonymous_typeX11
{
    unsigned long  int  __bits[1024/(8*sizeof(unsigned long  int ))]  ;
};

struct anonymous_typeX12
{
    unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
};

struct timeval
{
    long  int  tv_sec  ;
    long  int  tv_usec  ;
};

struct anonymous_typeX13
{
    long  int  fds_bits[1024/(8*(int)sizeof(long  int ))]  ;
};

struct anonymous_typeX15
{
    unsigned int __low;
    unsigned int __high;
};

union anonymous_typeZ14
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

struct anonymous_typeX16
{
    int __data;
};

union anonymous_typeZ17
{
char __size[4];
int __align;
};

union anonymous_typeZ18
{
char __size[4];
int __align;
};

union pthread_attr_t
{
char __size[56];
long  int __align;
};

union anonymous_typeZ19
{
struct __pthread_mutex_s  __data  ;
char __size[40];
long  int __align;
};

union anonymous_typeZ20
{
struct __pthread_cond_s  __data  ;
char __size[48];
long long int __align;
};

union anonymous_typeZ21
{
struct __pthread_rwlock_arch_t  __data  ;
char __size[56];
long  int __align;
};

union anonymous_typeZ22
{
char __size[8];
long  int __align;
};

union anonymous_typeZ23
{
char __size[32];
long  int __align;
};

union anonymous_typeZ24
{
char __size[4];
int __align;
};

struct anonymous_typeX25
{
    short int __flags;
    int  __pgrp  ;
    struct {
        unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
    } __sd;
    struct {
        unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
    } __ss;
    struct sched_param  __sp  ;
    int __policy;
    int __cgroup;
    int __pad[15];
};

struct anonymous_typeX26
{
    int __allocated;
    int __used;
    struct __spawn_action* __actions;
    int __pad[16];
};

enum { WRDE_DOOFFS=((1<<0)),
WRDE_APPEND=((1<<1)),
WRDE_NOCMD=((1<<2)),
WRDE_REUSE=((1<<3)),
WRDE_SHOWERR=((1<<4)),
WRDE_UNDEF=((1<<5)),
__WRDE_FLAGS=((((1<<0))|((1<<1))|((1<<2))|((1<<3))|((1<<4))|((1<<5))))
};

struct anonymous_typeX27
{
    unsigned long  we_wordc  ;
    char** we_wordv;
    unsigned long  we_offs  ;
};

enum { WRDE_NOSYS=(-1),
WRDE_NOSPACE=(1),
WRDE_BADCHAR 
,WRDE_BADVAL 
,WRDE_CMDSUB 
,WRDE_SYNTAX 
};

/// variable definition ///
extern int signgam;
extern struct _IO_FILE*  stdin  ;
extern struct _IO_FILE*  stdout  ;
extern struct _IO_FILE*  stderr  ;
// source head

// header function
char* strdup(const char* );
_Complex double cacos(_Complex double __z);
_Complex double __cacos(_Complex double __z);
_Complex double casin(_Complex double __z);
_Complex double __casin(_Complex double __z);
_Complex double catan(_Complex double __z);
_Complex double __catan(_Complex double __z);
_Complex double ccos(_Complex double __z);
_Complex double __ccos(_Complex double __z);
_Complex double csin(_Complex double __z);
_Complex double __csin(_Complex double __z);
_Complex double ctan(_Complex double __z);
_Complex double __ctan(_Complex double __z);
_Complex double cacosh(_Complex double __z);
_Complex double __cacosh(_Complex double __z);
_Complex double casinh(_Complex double __z);
_Complex double __casinh(_Complex double __z);
_Complex double catanh(_Complex double __z);
_Complex double __catanh(_Complex double __z);
_Complex double ccosh(_Complex double __z);
_Complex double __ccosh(_Complex double __z);
_Complex double csinh(_Complex double __z);
_Complex double __csinh(_Complex double __z);
_Complex double ctanh(_Complex double __z);
_Complex double __ctanh(_Complex double __z);
_Complex double cexp(_Complex double __z);
_Complex double __cexp(_Complex double __z);
_Complex double clog(_Complex double __z);
_Complex double __clog(_Complex double __z);
_Complex double clog10(_Complex double __z);
_Complex double __clog10(_Complex double __z);
_Complex double cpow(_Complex double __x, _Complex double __y);
_Complex double __cpow(_Complex double __x, _Complex double __y);
_Complex double csqrt(_Complex double __z);
_Complex double __csqrt(_Complex double __z);
double cabs(_Complex double __z);
double __cabs(_Complex double __z);
double carg(_Complex double __z);
double __carg(_Complex double __z);
_Complex double conj(_Complex double __z);
_Complex double __conj(_Complex double __z);
_Complex double cproj(_Complex double __z);
_Complex double __cproj(_Complex double __z);
double cimag(_Complex double __z);
double __cimag(_Complex double __z);
double creal(_Complex double __z);
double __creal(_Complex double __z);
_Complex float cacosf(_Complex float __z);
_Complex float __cacosf(_Complex float __z);
_Complex float casinf(_Complex float __z);
_Complex float __casinf(_Complex float __z);
_Complex float catanf(_Complex float __z);
_Complex float __catanf(_Complex float __z);
_Complex float ccosf(_Complex float __z);
_Complex float __ccosf(_Complex float __z);
_Complex float csinf(_Complex float __z);
_Complex float __csinf(_Complex float __z);
_Complex float ctanf(_Complex float __z);
_Complex float __ctanf(_Complex float __z);
_Complex float cacoshf(_Complex float __z);
_Complex float __cacoshf(_Complex float __z);
_Complex float casinhf(_Complex float __z);
_Complex float __casinhf(_Complex float __z);
_Complex float catanhf(_Complex float __z);
_Complex float __catanhf(_Complex float __z);
_Complex float ccoshf(_Complex float __z);
_Complex float __ccoshf(_Complex float __z);
_Complex float csinhf(_Complex float __z);
_Complex float __csinhf(_Complex float __z);
_Complex float ctanhf(_Complex float __z);
_Complex float __ctanhf(_Complex float __z);
_Complex float cexpf(_Complex float __z);
_Complex float __cexpf(_Complex float __z);
_Complex float clogf(_Complex float __z);
_Complex float __clogf(_Complex float __z);
_Complex float clog10f(_Complex float __z);
_Complex float __clog10f(_Complex float __z);
_Complex float cpowf(_Complex float __x, _Complex float __y);
_Complex float __cpowf(_Complex float __x, _Complex float __y);
_Complex float csqrtf(_Complex float __z);
_Complex float __csqrtf(_Complex float __z);
float cabsf(_Complex float __z);
float __cabsf(_Complex float __z);
float cargf(_Complex float __z);
float __cargf(_Complex float __z);
_Complex float conjf(_Complex float __z);
_Complex float __conjf(_Complex float __z);
_Complex float cprojf(_Complex float __z);
_Complex float __cprojf(_Complex float __z);
float cimagf(_Complex float __z);
float __cimagf(_Complex float __z);
float crealf(_Complex float __z);
float __crealf(_Complex float __z);
_Complex long  double cacosl(_Complex long  double __z);
_Complex long  double __cacosl(_Complex long  double __z);
_Complex long  double casinl(_Complex long  double __z);
_Complex long  double __casinl(_Complex long  double __z);
_Complex long  double catanl(_Complex long  double __z);
_Complex long  double __catanl(_Complex long  double __z);
_Complex long  double ccosl(_Complex long  double __z);
_Complex long  double __ccosl(_Complex long  double __z);
_Complex long  double csinl(_Complex long  double __z);
_Complex long  double __csinl(_Complex long  double __z);
_Complex long  double ctanl(_Complex long  double __z);
_Complex long  double __ctanl(_Complex long  double __z);
_Complex long  double cacoshl(_Complex long  double __z);
_Complex long  double __cacoshl(_Complex long  double __z);
_Complex long  double casinhl(_Complex long  double __z);
_Complex long  double __casinhl(_Complex long  double __z);
_Complex long  double catanhl(_Complex long  double __z);
_Complex long  double __catanhl(_Complex long  double __z);
_Complex long  double ccoshl(_Complex long  double __z);
_Complex long  double __ccoshl(_Complex long  double __z);
_Complex long  double csinhl(_Complex long  double __z);
_Complex long  double __csinhl(_Complex long  double __z);
_Complex long  double ctanhl(_Complex long  double __z);
_Complex long  double __ctanhl(_Complex long  double __z);
_Complex long  double cexpl(_Complex long  double __z);
_Complex long  double __cexpl(_Complex long  double __z);
_Complex long  double clogl(_Complex long  double __z);
_Complex long  double __clogl(_Complex long  double __z);
_Complex long  double clog10l(_Complex long  double __z);
_Complex long  double __clog10l(_Complex long  double __z);
_Complex long  double cpowl(_Complex long  double __x, _Complex long  double __y);
_Complex long  double __cpowl(_Complex long  double __x, _Complex long  double __y);
_Complex long  double csqrtl(_Complex long  double __z);
_Complex long  double __csqrtl(_Complex long  double __z);
long  double cabsl(_Complex long  double __z);
long  double __cabsl(_Complex long  double __z);
long  double cargl(_Complex long  double __z);
long  double __cargl(_Complex long  double __z);
_Complex long  double conjl(_Complex long  double __z);
_Complex long  double __conjl(_Complex long  double __z);
_Complex long  double cprojl(_Complex long  double __z);
_Complex long  double __cprojl(_Complex long  double __z);
long  double cimagl(_Complex long  double __z);
long  double __cimagl(_Complex long  double __z);
long  double creall(_Complex long  double __z);
long  double __creall(_Complex long  double __z);
_Complex float cacosf32(_Complex float __z);
_Complex float __cacosf32(_Complex float __z);
_Complex float casinf32(_Complex float __z);
_Complex float __casinf32(_Complex float __z);
_Complex float catanf32(_Complex float __z);
_Complex float __catanf32(_Complex float __z);
_Complex float ccosf32(_Complex float __z);
_Complex float __ccosf32(_Complex float __z);
_Complex float csinf32(_Complex float __z);
_Complex float __csinf32(_Complex float __z);
_Complex float ctanf32(_Complex float __z);
_Complex float __ctanf32(_Complex float __z);
_Complex float cacoshf32(_Complex float __z);
_Complex float __cacoshf32(_Complex float __z);
_Complex float casinhf32(_Complex float __z);
_Complex float __casinhf32(_Complex float __z);
_Complex float catanhf32(_Complex float __z);
_Complex float __catanhf32(_Complex float __z);
_Complex float ccoshf32(_Complex float __z);
_Complex float __ccoshf32(_Complex float __z);
_Complex float csinhf32(_Complex float __z);
_Complex float __csinhf32(_Complex float __z);
_Complex float ctanhf32(_Complex float __z);
_Complex float __ctanhf32(_Complex float __z);
_Complex float cexpf32(_Complex float __z);
_Complex float __cexpf32(_Complex float __z);
_Complex float clogf32(_Complex float __z);
_Complex float __clogf32(_Complex float __z);
_Complex float clog10f32(_Complex float __z);
_Complex float __clog10f32(_Complex float __z);
_Complex float cpowf32(_Complex float __x, _Complex float __y);
_Complex float __cpowf32(_Complex float __x, _Complex float __y);
_Complex float csqrtf32(_Complex float __z);
_Complex float __csqrtf32(_Complex float __z);
float  cabsf32(_Complex float __z);
float  __cabsf32(_Complex float __z);
float  cargf32(_Complex float __z);
float  __cargf32(_Complex float __z);
_Complex float conjf32(_Complex float __z);
_Complex float __conjf32(_Complex float __z);
_Complex float cprojf32(_Complex float __z);
_Complex float __cprojf32(_Complex float __z);
float  cimagf32(_Complex float __z);
float  __cimagf32(_Complex float __z);
float  crealf32(_Complex float __z);
float  __crealf32(_Complex float __z);
_Complex double cacosf64(_Complex double __z);
_Complex double __cacosf64(_Complex double __z);
_Complex double casinf64(_Complex double __z);
_Complex double __casinf64(_Complex double __z);
_Complex double catanf64(_Complex double __z);
_Complex double __catanf64(_Complex double __z);
_Complex double ccosf64(_Complex double __z);
_Complex double __ccosf64(_Complex double __z);
_Complex double csinf64(_Complex double __z);
_Complex double __csinf64(_Complex double __z);
_Complex double ctanf64(_Complex double __z);
_Complex double __ctanf64(_Complex double __z);
_Complex double cacoshf64(_Complex double __z);
_Complex double __cacoshf64(_Complex double __z);
_Complex double casinhf64(_Complex double __z);
_Complex double __casinhf64(_Complex double __z);
_Complex double catanhf64(_Complex double __z);
_Complex double __catanhf64(_Complex double __z);
_Complex double ccoshf64(_Complex double __z);
_Complex double __ccoshf64(_Complex double __z);
_Complex double csinhf64(_Complex double __z);
_Complex double __csinhf64(_Complex double __z);
_Complex double ctanhf64(_Complex double __z);
_Complex double __ctanhf64(_Complex double __z);
_Complex double cexpf64(_Complex double __z);
_Complex double __cexpf64(_Complex double __z);
_Complex double clogf64(_Complex double __z);
_Complex double __clogf64(_Complex double __z);
_Complex double clog10f64(_Complex double __z);
_Complex double __clog10f64(_Complex double __z);
_Complex double cpowf64(_Complex double __x, _Complex double __y);
_Complex double __cpowf64(_Complex double __x, _Complex double __y);
_Complex double csqrtf64(_Complex double __z);
_Complex double __csqrtf64(_Complex double __z);
double  cabsf64(_Complex double __z);
double  __cabsf64(_Complex double __z);
double  cargf64(_Complex double __z);
double  __cargf64(_Complex double __z);
_Complex double conjf64(_Complex double __z);
_Complex double __conjf64(_Complex double __z);
_Complex double cprojf64(_Complex double __z);
_Complex double __cprojf64(_Complex double __z);
double  cimagf64(_Complex double __z);
double  __cimagf64(_Complex double __z);
double  crealf64(_Complex double __z);
double  __crealf64(_Complex double __z);
_Complex double cacosf32x(_Complex double __z);
_Complex double __cacosf32x(_Complex double __z);
_Complex double casinf32x(_Complex double __z);
_Complex double __casinf32x(_Complex double __z);
_Complex double catanf32x(_Complex double __z);
_Complex double __catanf32x(_Complex double __z);
_Complex double ccosf32x(_Complex double __z);
_Complex double __ccosf32x(_Complex double __z);
_Complex double csinf32x(_Complex double __z);
_Complex double __csinf32x(_Complex double __z);
_Complex double ctanf32x(_Complex double __z);
_Complex double __ctanf32x(_Complex double __z);
_Complex double cacoshf32x(_Complex double __z);
_Complex double __cacoshf32x(_Complex double __z);
_Complex double casinhf32x(_Complex double __z);
_Complex double __casinhf32x(_Complex double __z);
_Complex double catanhf32x(_Complex double __z);
_Complex double __catanhf32x(_Complex double __z);
_Complex double ccoshf32x(_Complex double __z);
_Complex double __ccoshf32x(_Complex double __z);
_Complex double csinhf32x(_Complex double __z);
_Complex double __csinhf32x(_Complex double __z);
_Complex double ctanhf32x(_Complex double __z);
_Complex double __ctanhf32x(_Complex double __z);
_Complex double cexpf32x(_Complex double __z);
_Complex double __cexpf32x(_Complex double __z);
_Complex double clogf32x(_Complex double __z);
_Complex double __clogf32x(_Complex double __z);
_Complex double clog10f32x(_Complex double __z);
_Complex double __clog10f32x(_Complex double __z);
_Complex double cpowf32x(_Complex double __x, _Complex double __y);
_Complex double __cpowf32x(_Complex double __x, _Complex double __y);
_Complex double csqrtf32x(_Complex double __z);
_Complex double __csqrtf32x(_Complex double __z);
double  cabsf32x(_Complex double __z);
double  __cabsf32x(_Complex double __z);
double  cargf32x(_Complex double __z);
double  __cargf32x(_Complex double __z);
_Complex double conjf32x(_Complex double __z);
_Complex double __conjf32x(_Complex double __z);
_Complex double cprojf32x(_Complex double __z);
_Complex double __cprojf32x(_Complex double __z);
double  cimagf32x(_Complex double __z);
double  __cimagf32x(_Complex double __z);
double  crealf32x(_Complex double __z);
double  __crealf32x(_Complex double __z);
_Complex long  double cacosf64x(_Complex long  double __z);
_Complex long  double __cacosf64x(_Complex long  double __z);
_Complex long  double casinf64x(_Complex long  double __z);
_Complex long  double __casinf64x(_Complex long  double __z);
_Complex long  double catanf64x(_Complex long  double __z);
_Complex long  double __catanf64x(_Complex long  double __z);
_Complex long  double ccosf64x(_Complex long  double __z);
_Complex long  double __ccosf64x(_Complex long  double __z);
_Complex long  double csinf64x(_Complex long  double __z);
_Complex long  double __csinf64x(_Complex long  double __z);
_Complex long  double ctanf64x(_Complex long  double __z);
_Complex long  double __ctanf64x(_Complex long  double __z);
_Complex long  double cacoshf64x(_Complex long  double __z);
_Complex long  double __cacoshf64x(_Complex long  double __z);
_Complex long  double casinhf64x(_Complex long  double __z);
_Complex long  double __casinhf64x(_Complex long  double __z);
_Complex long  double catanhf64x(_Complex long  double __z);
_Complex long  double __catanhf64x(_Complex long  double __z);
_Complex long  double ccoshf64x(_Complex long  double __z);
_Complex long  double __ccoshf64x(_Complex long  double __z);
_Complex long  double csinhf64x(_Complex long  double __z);
_Complex long  double __csinhf64x(_Complex long  double __z);
_Complex long  double ctanhf64x(_Complex long  double __z);
_Complex long  double __ctanhf64x(_Complex long  double __z);
_Complex long  double cexpf64x(_Complex long  double __z);
_Complex long  double __cexpf64x(_Complex long  double __z);
_Complex long  double clogf64x(_Complex long  double __z);
_Complex long  double __clogf64x(_Complex long  double __z);
_Complex long  double clog10f64x(_Complex long  double __z);
_Complex long  double __clog10f64x(_Complex long  double __z);
_Complex long  double cpowf64x(_Complex long  double __x, _Complex long  double __y);
_Complex long  double __cpowf64x(_Complex long  double __x, _Complex long  double __y);
_Complex long  double csqrtf64x(_Complex long  double __z);
_Complex long  double __csqrtf64x(_Complex long  double __z);
long  double  cabsf64x(_Complex long  double __z);
long  double  __cabsf64x(_Complex long  double __z);
long  double  cargf64x(_Complex long  double __z);
long  double  __cargf64x(_Complex long  double __z);
_Complex long  double conjf64x(_Complex long  double __z);
_Complex long  double __conjf64x(_Complex long  double __z);
_Complex long  double cprojf64x(_Complex long  double __z);
_Complex long  double __cprojf64x(_Complex long  double __z);
long  double  cimagf64x(_Complex long  double __z);
long  double  __cimagf64x(_Complex long  double __z);
long  double  crealf64x(_Complex long  double __z);
long  double  __crealf64x(_Complex long  double __z);
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
long  int __sysconf(int __name);
int scandir(const char* __restrict __dir, struct dirent*** __restrict  __namelist  , int (*__selector)(const struct dirent* ), int (*__cmp)(const struct dirent** ,const struct dirent** ));
int scandir64(const char* __restrict __dir, struct dirent64*** __restrict  __namelist  , int (*__selector)(const struct dirent64* ), int (*__cmp)(const struct dirent64** ,const struct dirent64** ));
int scandirat(int __dfd, const char* __restrict __dir, struct dirent*** __restrict  __namelist  , int (*__selector)(const struct dirent* ), int (*__cmp)(const struct dirent** ,const struct dirent** ));
int scandirat64(int __dfd, const char* __restrict __dir, struct dirent64*** __restrict  __namelist  , int (*__selector)(const struct dirent64* ), int (*__cmp)(const struct dirent64** ,const struct dirent64** ));
int alphasort(const struct dirent**  __e1  , const struct dirent**  __e2  ) __attribute__ ((__pure__)) ;
int alphasort64(const struct dirent64**  __e1  , const struct dirent64**  __e2  ) __attribute__ ((__pure__)) ;
long  int  getdirentries(int __fd, char* __restrict __buf, unsigned long  __nbytes  , long  int* __restrict  __basep  );
long  int  getdirentries64(int __fd, char* __restrict __buf, unsigned long  __nbytes  , long  int* __restrict  __basep  );
int versionsort(const struct dirent**  __e1  , const struct dirent**  __e2  ) __attribute__ ((__pure__)) ;
int versionsort64(const struct dirent64**  __e1  , const struct dirent64**  __e2  ) __attribute__ ((__pure__)) ;
long  int  getdents64(int __fd, void* __buffer, unsigned long  __length  );
int feclearexcept(int __excepts);
int fegetexceptflag(unsigned short int*  __flagp  , int __excepts);
int feraiseexcept(int __excepts);
int fesetexcept(int __excepts);
int fesetexceptflag(const unsigned short int*  __flagp  , int __excepts);
int fetestexcept(int __excepts);
int fetestexceptflag(const unsigned short int*  __flagp  , int __excepts);
int fegetround() __attribute__ ((__pure__));
int fesetround(int __rounding_direction);
int fegetenv(struct anonymous_typeX1*  __envp  );
int feholdexcept(struct anonymous_typeX1*  __envp  );
int fesetenv(const struct anonymous_typeX1*  __envp  );
int feupdateenv(const struct anonymous_typeX1*  __envp  );
int fegetmode(struct anonymous_typeX2*  __modep  );
int fesetmode(const struct anonymous_typeX2*  __modep  );
int feenableexcept(int __excepts);
int fedisableexcept(int __excepts);
int fegetexcept();
int fnmatch(const char* __pattern, const char* __name, int __flags);
int glob(const char* __restrict __pattern, int __flags, int (*__errfunc)(const char*,int), struct anonymous_typeX3* __restrict  __pglob  );
void globfree(struct anonymous_typeX3*  __pglob  );
int glob64(const char* __restrict __pattern, int __flags, int (*__errfunc)(const char*,int), struct anonymous_typeX4* __restrict  __pglob  );
void globfree64(struct anonymous_typeX4*  __pglob  );
int glob_pattern_p(const char* __pattern, int __quote);
int iconv_close(void*  __cd  );
void*  iconv_open(const char* __tocode, const char* __fromcode) __attribute__ ((__malloc__)) ;
unsigned long  iconv(void*  __cd  , char** __restrict __inbuf, unsigned long* __restrict  __inbytesleft  , char** __restrict __outbuf, unsigned long* __restrict  __outbytesleft  );
void*  catopen(const char* __cat_name, int __flag);
char* catgets(void*  __catalog  , int __set, int __number, const char* __string);
int catclose(void*  __catalog  );
char* nl_langinfo(int  __item  );
char* nl_langinfo_l(int  __item  , struct __locale_struct*  __l  );
void atomic_thread_fence(enum memory_order    );
void atomic_signal_fence(enum memory_order    );
_Bool atomic_flag_test_and_set(volatile struct atomic_flag*    );
_Bool atomic_flag_test_and_set_explicit(volatile struct atomic_flag*    , enum memory_order    );
void atomic_flag_clear(volatile struct atomic_flag*    );
void atomic_flag_clear_explicit(volatile struct atomic_flag*    , enum memory_order    );
void closelog();
void openlog(const char* __ident, int __option, int __facility);
int setlogmask(int __mask);
void syslog(int __pri, const char* __fmt, ...) __attribute__ ((__format__ (__printf__, 2, 3)));
void vsyslog(int __pri, const char* __fmt, __builtin_va_list  __ap  ) __attribute__ ((__format__ (__printf__, 2, 0)));
int __fpclassify(double __value) __attribute__ ((__const__));
int __signbit(double __value) __attribute__ ((__const__));
int __isinf(double __value) __attribute__ ((__const__));
int __finite(double __value) __attribute__ ((__const__));
int __isnan(double __value) __attribute__ ((__const__));
int __iseqsig(double __x, double __y);
int __issignaling(double __value) __attribute__ ((__const__));
double acos(double __x);
double __acos(double __x);
double asin(double __x);
double __asin(double __x);
double atan(double __x);
double __atan(double __x);
double atan2(double __y, double __x);
double __atan2(double __y, double __x);
double cos(double __x);
double __cos(double __x);
double sin(double __x);
double __sin(double __x);
double tan(double __x);
double __tan(double __x);
double acospi(double __x);
double __acospi(double __x);
double asinpi(double __x);
double __asinpi(double __x);
double atanpi(double __x);
double __atanpi(double __x);
double atan2pi(double __y, double __x);
double __atan2pi(double __y, double __x);
double cospi(double __x);
double __cospi(double __x);
double sinpi(double __x);
double __sinpi(double __x);
double tanpi(double __x);
double __tanpi(double __x);
double cosh(double __x);
double __cosh(double __x);
double sinh(double __x);
double __sinh(double __x);
double tanh(double __x);
double __tanh(double __x);
void sincos(double __x, double* __sinx, double* __cosx);
void __sincos(double __x, double* __sinx, double* __cosx);
double acosh(double __x);
double __acosh(double __x);
double asinh(double __x);
double __asinh(double __x);
double atanh(double __x);
double __atanh(double __x);
double exp(double __x);
double __exp(double __x);
double frexp(double __x, int* __exponent);
double __frexp(double __x, int* __exponent);
double ldexp(double __x, int __exponent);
double __ldexp(double __x, int __exponent);
double log(double __x);
double __log(double __x);
double log10(double __x);
double __log10(double __x);
double modf(double __x, double* __iptr);
double __modf(double __x, double* __iptr);
double exp10(double __x);
double __exp10(double __x);
double exp2m1(double __x);
double __exp2m1(double __x);
double exp10m1(double __x);
double __exp10m1(double __x);
double log2p1(double __x);
double __log2p1(double __x);
double log10p1(double __x);
double __log10p1(double __x);
double logp1(double __x);
double __logp1(double __x);
double expm1(double __x);
double __expm1(double __x);
double log1p(double __x);
double __log1p(double __x);
double logb(double __x);
double __logb(double __x);
double exp2(double __x);
double __exp2(double __x);
double log2(double __x);
double __log2(double __x);
double pow(double __x, double __y);
double __pow(double __x, double __y);
double sqrt(double __x);
double __sqrt(double __x);
double hypot(double __x, double __y);
double __hypot(double __x, double __y);
double cbrt(double __x);
double __cbrt(double __x);
double compoundn(double __x, long long int __y);
double __compoundn(double __x, long long int __y);
double pown(double __x, long long int __y);
double __pown(double __x, long long int __y);
double powr(double __x, double __y);
double __powr(double __x, double __y);
double rootn(double __x, long long int __y);
double __rootn(double __x, long long int __y);
double rsqrt(double __x);
double __rsqrt(double __x);
double ceil(double __x) __attribute__ ((__const__));
double fabs(double __x) __attribute__ ((__const__));
double floor(double __x) __attribute__ ((__const__));
double fmod(double __x, double __y);
double __fmod(double __x, double __y);
int isinf(double __value) __attribute__ ((__const__));
int finite(double __value) __attribute__ ((__const__));
double drem(double __x, double __y);
double __drem(double __x, double __y);
double significand(double __x);
double __significand(double __x);
double copysign(double __x, double __y) __attribute__ ((__const__));
double nan(const char* __tagb);
double __nan(const char* __tagb);
int isnan(double __value) __attribute__ ((__const__));
double j0(double );
double __j0(double );
double j1(double );
double __j1(double );
double jn(int , double );
double __jn(int , double );
double y0(double );
double __y0(double );
double y1(double );
double __y1(double );
double yn(int , double );
double __yn(int , double );
double erf(double );
double __erf(double );
double erfc(double );
double __erfc(double );
double lgamma(double );
double __lgamma(double );
double tgamma(double );
double __tgamma(double );
double gamma(double );
double __gamma(double );
double lgamma_r(double , int* __signgamp);
double __lgamma_r(double , int* __signgamp);
double rint(double __x);
double __rint(double __x);
double nextafter(double __x, double __y);
double __nextafter(double __x, double __y);
double nexttoward(double __x, long  double __y);
double __nexttoward(double __x, long  double __y);
double nextdown(double __x);
double __nextdown(double __x);
double nextup(double __x);
double __nextup(double __x);
double remainder(double __x, double __y);
double __remainder(double __x, double __y);
double scalbn(double __x, int __n);
double __scalbn(double __x, int __n);
int ilogb(double __x);
int __ilogb(double __x);
long  int llogb(double __x);
long  int __llogb(double __x);
double scalbln(double __x, long  int __n);
double __scalbln(double __x, long  int __n);
double nearbyint(double __x);
double __nearbyint(double __x);
double round(double __x) __attribute__ ((__const__));
double trunc(double __x) __attribute__ ((__const__));
double remquo(double __x, double __y, int* __quo);
double __remquo(double __x, double __y, int* __quo);
long  int lrint(double __x);
long  int __lrint(double __x);
long long int llrint(double __x);
long long int __llrint(double __x);
long  int lround(double __x);
long  int __lround(double __x);
long long int llround(double __x);
long long int __llround(double __x);
double fdim(double __x, double __y);
double __fdim(double __x, double __y);
double fmax(double __x, double __y) __attribute__ ((__const__));
double fmin(double __x, double __y) __attribute__ ((__const__));
double fma(double __x, double __y, double __z);
double __fma(double __x, double __y, double __z);
double roundeven(double __x) __attribute__ ((__const__));
long  int  fromfp(double __x, int __round, unsigned int __width);
long  int  __fromfp(double __x, int __round, unsigned int __width);
unsigned long  int  ufromfp(double __x, int __round, unsigned int __width);
unsigned long  int  __ufromfp(double __x, int __round, unsigned int __width);
long  int  fromfpx(double __x, int __round, unsigned int __width);
long  int  __fromfpx(double __x, int __round, unsigned int __width);
unsigned long  int  ufromfpx(double __x, int __round, unsigned int __width);
unsigned long  int  __ufromfpx(double __x, int __round, unsigned int __width);
int canonicalize(double* __cx, const double* __x);
double fmaxmag(double __x, double __y) __attribute__ ((__const__));
double fminmag(double __x, double __y) __attribute__ ((__const__));
double fmaximum(double __x, double __y) __attribute__ ((__const__));
double fminimum(double __x, double __y) __attribute__ ((__const__));
double fmaximum_num(double __x, double __y) __attribute__ ((__const__));
double fminimum_num(double __x, double __y) __attribute__ ((__const__));
double fmaximum_mag(double __x, double __y) __attribute__ ((__const__));
double fminimum_mag(double __x, double __y) __attribute__ ((__const__));
double fmaximum_mag_num(double __x, double __y) __attribute__ ((__const__));
double fminimum_mag_num(double __x, double __y) __attribute__ ((__const__));
int totalorder(const double* __x, const double* __y) __attribute__ ((__pure__));
int totalordermag(const double* __x, const double* __y) __attribute__ ((__pure__));
double getpayload(const double* __x);
double __getpayload(const double* __x);
int setpayload(double* __x, double __payload);
int setpayloadsig(double* __x, double __payload);
double scalb(double __x, double __n);
double __scalb(double __x, double __n);
int __fpclassifyf(float __value) __attribute__ ((__const__));
int __signbitf(float __value) __attribute__ ((__const__));
int __isinff(float __value) __attribute__ ((__const__));
int __finitef(float __value) __attribute__ ((__const__));
int __isnanf(float __value) __attribute__ ((__const__));
int __iseqsigf(float __x, float __y);
int __issignalingf(float __value) __attribute__ ((__const__));
float acosf(float __x);
float __acosf(float __x);
float asinf(float __x);
float __asinf(float __x);
float atanf(float __x);
float __atanf(float __x);
float atan2f(float __y, float __x);
float __atan2f(float __y, float __x);
float cosf(float __x);
float __cosf(float __x);
float sinf(float __x);
float __sinf(float __x);
float tanf(float __x);
float __tanf(float __x);
float acospif(float __x);
float __acospif(float __x);
float asinpif(float __x);
float __asinpif(float __x);
float atanpif(float __x);
float __atanpif(float __x);
float atan2pif(float __y, float __x);
float __atan2pif(float __y, float __x);
float cospif(float __x);
float __cospif(float __x);
float sinpif(float __x);
float __sinpif(float __x);
float tanpif(float __x);
float __tanpif(float __x);
float coshf(float __x);
float __coshf(float __x);
float sinhf(float __x);
float __sinhf(float __x);
float tanhf(float __x);
float __tanhf(float __x);
void sincosf(float __x, float* __sinx, float* __cosx);
void __sincosf(float __x, float* __sinx, float* __cosx);
float acoshf(float __x);
float __acoshf(float __x);
float asinhf(float __x);
float __asinhf(float __x);
float atanhf(float __x);
float __atanhf(float __x);
float expf(float __x);
float __expf(float __x);
float frexpf(float __x, int* __exponent);
float __frexpf(float __x, int* __exponent);
float ldexpf(float __x, int __exponent);
float __ldexpf(float __x, int __exponent);
float logf(float __x);
float __logf(float __x);
float log10f(float __x);
float __log10f(float __x);
float modff(float __x, float* __iptr);
float __modff(float __x, float* __iptr);
float exp10f(float __x);
float __exp10f(float __x);
float exp2m1f(float __x);
float __exp2m1f(float __x);
float exp10m1f(float __x);
float __exp10m1f(float __x);
float log2p1f(float __x);
float __log2p1f(float __x);
float log10p1f(float __x);
float __log10p1f(float __x);
float logp1f(float __x);
float __logp1f(float __x);
float expm1f(float __x);
float __expm1f(float __x);
float log1pf(float __x);
float __log1pf(float __x);
float logbf(float __x);
float __logbf(float __x);
float exp2f(float __x);
float __exp2f(float __x);
float log2f(float __x);
float __log2f(float __x);
float powf(float __x, float __y);
float __powf(float __x, float __y);
float sqrtf(float __x);
float __sqrtf(float __x);
float hypotf(float __x, float __y);
float __hypotf(float __x, float __y);
float cbrtf(float __x);
float __cbrtf(float __x);
float compoundnf(float __x, long long int __y);
float __compoundnf(float __x, long long int __y);
float pownf(float __x, long long int __y);
float __pownf(float __x, long long int __y);
float powrf(float __x, float __y);
float __powrf(float __x, float __y);
float rootnf(float __x, long long int __y);
float __rootnf(float __x, long long int __y);
float rsqrtf(float __x);
float __rsqrtf(float __x);
float ceilf(float __x) __attribute__ ((__const__));
float fabsf(float __x) __attribute__ ((__const__));
float floorf(float __x) __attribute__ ((__const__));
float fmodf(float __x, float __y);
float __fmodf(float __x, float __y);
int isinff(float __value) __attribute__ ((__const__));
int finitef(float __value) __attribute__ ((__const__));
float dremf(float __x, float __y);
float __dremf(float __x, float __y);
float significandf(float __x);
float __significandf(float __x);
float copysignf(float __x, float __y) __attribute__ ((__const__));
float nanf(const char* __tagb);
float __nanf(const char* __tagb);
int isnanf(float __value) __attribute__ ((__const__));
float j0f(float );
float __j0f(float );
float j1f(float );
float __j1f(float );
float jnf(int , float );
float __jnf(int , float );
float y0f(float );
float __y0f(float );
float y1f(float );
float __y1f(float );
float ynf(int , float );
float __ynf(int , float );
float erff(float );
float __erff(float );
float erfcf(float );
float __erfcf(float );
float lgammaf(float );
float __lgammaf(float );
float tgammaf(float );
float __tgammaf(float );
float gammaf(float );
float __gammaf(float );
float lgammaf_r(float , int* __signgamp);
float __lgammaf_r(float , int* __signgamp);
float rintf(float __x);
float __rintf(float __x);
float nextafterf(float __x, float __y);
float __nextafterf(float __x, float __y);
float nexttowardf(float __x, long  double __y);
float __nexttowardf(float __x, long  double __y);
float nextdownf(float __x);
float __nextdownf(float __x);
float nextupf(float __x);
float __nextupf(float __x);
float remainderf(float __x, float __y);
float __remainderf(float __x, float __y);
float scalbnf(float __x, int __n);
float __scalbnf(float __x, int __n);
int ilogbf(float __x);
int __ilogbf(float __x);
long  int llogbf(float __x);
long  int __llogbf(float __x);
float scalblnf(float __x, long  int __n);
float __scalblnf(float __x, long  int __n);
float nearbyintf(float __x);
float __nearbyintf(float __x);
float roundf(float __x) __attribute__ ((__const__));
float truncf(float __x) __attribute__ ((__const__));
float remquof(float __x, float __y, int* __quo);
float __remquof(float __x, float __y, int* __quo);
long  int lrintf(float __x);
long  int __lrintf(float __x);
long long int llrintf(float __x);
long long int __llrintf(float __x);
long  int lroundf(float __x);
long  int __lroundf(float __x);
long long int llroundf(float __x);
long long int __llroundf(float __x);
float fdimf(float __x, float __y);
float __fdimf(float __x, float __y);
float fmaxf(float __x, float __y) __attribute__ ((__const__));
float fminf(float __x, float __y) __attribute__ ((__const__));
float fmaf(float __x, float __y, float __z);
float __fmaf(float __x, float __y, float __z);
float roundevenf(float __x) __attribute__ ((__const__));
long  int  fromfpf(float __x, int __round, unsigned int __width);
long  int  __fromfpf(float __x, int __round, unsigned int __width);
unsigned long  int  ufromfpf(float __x, int __round, unsigned int __width);
unsigned long  int  __ufromfpf(float __x, int __round, unsigned int __width);
long  int  fromfpxf(float __x, int __round, unsigned int __width);
long  int  __fromfpxf(float __x, int __round, unsigned int __width);
unsigned long  int  ufromfpxf(float __x, int __round, unsigned int __width);
unsigned long  int  __ufromfpxf(float __x, int __round, unsigned int __width);
int canonicalizef(float* __cx, const float* __x);
float fmaxmagf(float __x, float __y) __attribute__ ((__const__));
float fminmagf(float __x, float __y) __attribute__ ((__const__));
float fmaximumf(float __x, float __y) __attribute__ ((__const__));
float fminimumf(float __x, float __y) __attribute__ ((__const__));
float fmaximum_numf(float __x, float __y) __attribute__ ((__const__));
float fminimum_numf(float __x, float __y) __attribute__ ((__const__));
float fmaximum_magf(float __x, float __y) __attribute__ ((__const__));
float fminimum_magf(float __x, float __y) __attribute__ ((__const__));
float fmaximum_mag_numf(float __x, float __y) __attribute__ ((__const__));
float fminimum_mag_numf(float __x, float __y) __attribute__ ((__const__));
int totalorderf(const float* __x, const float* __y) __attribute__ ((__pure__));
int totalordermagf(const float* __x, const float* __y) __attribute__ ((__pure__));
float getpayloadf(const float* __x);
float __getpayloadf(const float* __x);
int setpayloadf(float* __x, float __payload);
int setpayloadsigf(float* __x, float __payload);
float scalbf(float __x, float __n);
float __scalbf(float __x, float __n);
int __fpclassifyl(long  double __value) __attribute__ ((__const__));
int __signbitl(long  double __value) __attribute__ ((__const__));
int __isinfl(long  double __value) __attribute__ ((__const__));
int __finitel(long  double __value) __attribute__ ((__const__));
int __isnanl(long  double __value) __attribute__ ((__const__));
int __iseqsigl(long  double __x, long  double __y);
int __issignalingl(long  double __value) __attribute__ ((__const__));
long  double acosl(long  double __x);
long  double __acosl(long  double __x);
long  double asinl(long  double __x);
long  double __asinl(long  double __x);
long  double atanl(long  double __x);
long  double __atanl(long  double __x);
long  double atan2l(long  double __y, long  double __x);
long  double __atan2l(long  double __y, long  double __x);
long  double cosl(long  double __x);
long  double __cosl(long  double __x);
long  double sinl(long  double __x);
long  double __sinl(long  double __x);
long  double tanl(long  double __x);
long  double __tanl(long  double __x);
long  double acospil(long  double __x);
long  double __acospil(long  double __x);
long  double asinpil(long  double __x);
long  double __asinpil(long  double __x);
long  double atanpil(long  double __x);
long  double __atanpil(long  double __x);
long  double atan2pil(long  double __y, long  double __x);
long  double __atan2pil(long  double __y, long  double __x);
long  double cospil(long  double __x);
long  double __cospil(long  double __x);
long  double sinpil(long  double __x);
long  double __sinpil(long  double __x);
long  double tanpil(long  double __x);
long  double __tanpil(long  double __x);
long  double coshl(long  double __x);
long  double __coshl(long  double __x);
long  double sinhl(long  double __x);
long  double __sinhl(long  double __x);
long  double tanhl(long  double __x);
long  double __tanhl(long  double __x);
void sincosl(long  double __x, long  double* __sinx, long  double* __cosx);
void __sincosl(long  double __x, long  double* __sinx, long  double* __cosx);
long  double acoshl(long  double __x);
long  double __acoshl(long  double __x);
long  double asinhl(long  double __x);
long  double __asinhl(long  double __x);
long  double atanhl(long  double __x);
long  double __atanhl(long  double __x);
long  double expl(long  double __x);
long  double __expl(long  double __x);
long  double frexpl(long  double __x, int* __exponent);
long  double __frexpl(long  double __x, int* __exponent);
long  double ldexpl(long  double __x, int __exponent);
long  double __ldexpl(long  double __x, int __exponent);
long  double logl(long  double __x);
long  double __logl(long  double __x);
long  double log10l(long  double __x);
long  double __log10l(long  double __x);
long  double modfl(long  double __x, long  double* __iptr);
long  double __modfl(long  double __x, long  double* __iptr);
long  double exp10l(long  double __x);
long  double __exp10l(long  double __x);
long  double exp2m1l(long  double __x);
long  double __exp2m1l(long  double __x);
long  double exp10m1l(long  double __x);
long  double __exp10m1l(long  double __x);
long  double log2p1l(long  double __x);
long  double __log2p1l(long  double __x);
long  double log10p1l(long  double __x);
long  double __log10p1l(long  double __x);
long  double logp1l(long  double __x);
long  double __logp1l(long  double __x);
long  double expm1l(long  double __x);
long  double __expm1l(long  double __x);
long  double log1pl(long  double __x);
long  double __log1pl(long  double __x);
long  double logbl(long  double __x);
long  double __logbl(long  double __x);
long  double exp2l(long  double __x);
long  double __exp2l(long  double __x);
long  double log2l(long  double __x);
long  double __log2l(long  double __x);
long  double powl(long  double __x, long  double __y);
long  double __powl(long  double __x, long  double __y);
long  double sqrtl(long  double __x);
long  double __sqrtl(long  double __x);
long  double hypotl(long  double __x, long  double __y);
long  double __hypotl(long  double __x, long  double __y);
long  double cbrtl(long  double __x);
long  double __cbrtl(long  double __x);
long  double compoundnl(long  double __x, long long int __y);
long  double __compoundnl(long  double __x, long long int __y);
long  double pownl(long  double __x, long long int __y);
long  double __pownl(long  double __x, long long int __y);
long  double powrl(long  double __x, long  double __y);
long  double __powrl(long  double __x, long  double __y);
long  double rootnl(long  double __x, long long int __y);
long  double __rootnl(long  double __x, long long int __y);
long  double rsqrtl(long  double __x);
long  double __rsqrtl(long  double __x);
long  double ceill(long  double __x) __attribute__ ((__const__));
long  double fabsl(long  double __x) __attribute__ ((__const__));
long  double floorl(long  double __x) __attribute__ ((__const__));
long  double fmodl(long  double __x, long  double __y);
long  double __fmodl(long  double __x, long  double __y);
int isinfl(long  double __value) __attribute__ ((__const__));
int finitel(long  double __value) __attribute__ ((__const__));
long  double dreml(long  double __x, long  double __y);
long  double __dreml(long  double __x, long  double __y);
long  double significandl(long  double __x);
long  double __significandl(long  double __x);
long  double copysignl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double nanl(const char* __tagb);
long  double __nanl(const char* __tagb);
int isnanl(long  double __value) __attribute__ ((__const__));
long  double j0l(long  double );
long  double __j0l(long  double );
long  double j1l(long  double );
long  double __j1l(long  double );
long  double jnl(int , long  double );
long  double __jnl(int , long  double );
long  double y0l(long  double );
long  double __y0l(long  double );
long  double y1l(long  double );
long  double __y1l(long  double );
long  double ynl(int , long  double );
long  double __ynl(int , long  double );
long  double erfl(long  double );
long  double __erfl(long  double );
long  double erfcl(long  double );
long  double __erfcl(long  double );
long  double lgammal(long  double );
long  double __lgammal(long  double );
long  double tgammal(long  double );
long  double __tgammal(long  double );
long  double gammal(long  double );
long  double __gammal(long  double );
long  double lgammal_r(long  double , int* __signgamp);
long  double __lgammal_r(long  double , int* __signgamp);
long  double rintl(long  double __x);
long  double __rintl(long  double __x);
long  double nextafterl(long  double __x, long  double __y);
long  double __nextafterl(long  double __x, long  double __y);
long  double nexttowardl(long  double __x, long  double __y);
long  double __nexttowardl(long  double __x, long  double __y);
long  double nextdownl(long  double __x);
long  double __nextdownl(long  double __x);
long  double nextupl(long  double __x);
long  double __nextupl(long  double __x);
long  double remainderl(long  double __x, long  double __y);
long  double __remainderl(long  double __x, long  double __y);
long  double scalbnl(long  double __x, int __n);
long  double __scalbnl(long  double __x, int __n);
int ilogbl(long  double __x);
int __ilogbl(long  double __x);
long  int llogbl(long  double __x);
long  int __llogbl(long  double __x);
long  double scalblnl(long  double __x, long  int __n);
long  double __scalblnl(long  double __x, long  int __n);
long  double nearbyintl(long  double __x);
long  double __nearbyintl(long  double __x);
long  double roundl(long  double __x) __attribute__ ((__const__));
long  double truncl(long  double __x) __attribute__ ((__const__));
long  double remquol(long  double __x, long  double __y, int* __quo);
long  double __remquol(long  double __x, long  double __y, int* __quo);
long  int lrintl(long  double __x);
long  int __lrintl(long  double __x);
long long int llrintl(long  double __x);
long long int __llrintl(long  double __x);
long  int lroundl(long  double __x);
long  int __lroundl(long  double __x);
long long int llroundl(long  double __x);
long long int __llroundl(long  double __x);
long  double fdiml(long  double __x, long  double __y);
long  double __fdiml(long  double __x, long  double __y);
long  double fmaxl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fminl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fmal(long  double __x, long  double __y, long  double __z);
long  double __fmal(long  double __x, long  double __y, long  double __z);
long  double roundevenl(long  double __x) __attribute__ ((__const__));
long  int  fromfpl(long  double __x, int __round, unsigned int __width);
long  int  __fromfpl(long  double __x, int __round, unsigned int __width);
unsigned long  int  ufromfpl(long  double __x, int __round, unsigned int __width);
unsigned long  int  __ufromfpl(long  double __x, int __round, unsigned int __width);
long  int  fromfpxl(long  double __x, int __round, unsigned int __width);
long  int  __fromfpxl(long  double __x, int __round, unsigned int __width);
unsigned long  int  ufromfpxl(long  double __x, int __round, unsigned int __width);
unsigned long  int  __ufromfpxl(long  double __x, int __round, unsigned int __width);
int canonicalizel(long  double* __cx, const long  double* __x);
long  double fmaxmagl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fminmagl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fmaximuml(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fminimuml(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fmaximum_numl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fminimum_numl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fmaximum_magl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fminimum_magl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fmaximum_mag_numl(long  double __x, long  double __y) __attribute__ ((__const__));
long  double fminimum_mag_numl(long  double __x, long  double __y) __attribute__ ((__const__));
int totalorderl(const long  double* __x, const long  double* __y) __attribute__ ((__pure__));
int totalordermagl(const long  double* __x, const long  double* __y) __attribute__ ((__pure__));
long  double getpayloadl(const long  double* __x);
long  double __getpayloadl(const long  double* __x);
int setpayloadl(long  double* __x, long  double __payload);
int setpayloadsigl(long  double* __x, long  double __payload);
long  double scalbl(long  double __x, long  double __n);
long  double __scalbl(long  double __x, long  double __n);
float  acosf32(float  __x  );
float  __acosf32(float  __x  );
float  asinf32(float  __x  );
float  __asinf32(float  __x  );
float  atanf32(float  __x  );
float  __atanf32(float  __x  );
float  atan2f32(float  __y  , float  __x  );
float  __atan2f32(float  __y  , float  __x  );
float  cosf32(float  __x  );
float  __cosf32(float  __x  );
float  sinf32(float  __x  );
float  __sinf32(float  __x  );
float  tanf32(float  __x  );
float  __tanf32(float  __x  );
float  acospif32(float  __x  );
float  __acospif32(float  __x  );
float  asinpif32(float  __x  );
float  __asinpif32(float  __x  );
float  atanpif32(float  __x  );
float  __atanpif32(float  __x  );
float  atan2pif32(float  __y  , float  __x  );
float  __atan2pif32(float  __y  , float  __x  );
float  cospif32(float  __x  );
float  __cospif32(float  __x  );
float  sinpif32(float  __x  );
float  __sinpif32(float  __x  );
float  tanpif32(float  __x  );
float  __tanpif32(float  __x  );
float  coshf32(float  __x  );
float  __coshf32(float  __x  );
float  sinhf32(float  __x  );
float  __sinhf32(float  __x  );
float  tanhf32(float  __x  );
float  __tanhf32(float  __x  );
void sincosf32(float  __x  , float*  __sinx  , float*  __cosx  );
void __sincosf32(float  __x  , float*  __sinx  , float*  __cosx  );
float  acoshf32(float  __x  );
float  __acoshf32(float  __x  );
float  asinhf32(float  __x  );
float  __asinhf32(float  __x  );
float  atanhf32(float  __x  );
float  __atanhf32(float  __x  );
float  expf32(float  __x  );
float  __expf32(float  __x  );
float  frexpf32(float  __x  , int* __exponent);
float  __frexpf32(float  __x  , int* __exponent);
float  ldexpf32(float  __x  , int __exponent);
float  __ldexpf32(float  __x  , int __exponent);
float  logf32(float  __x  );
float  __logf32(float  __x  );
float  log10f32(float  __x  );
float  __log10f32(float  __x  );
float  modff32(float  __x  , float*  __iptr  );
float  __modff32(float  __x  , float*  __iptr  );
float  exp10f32(float  __x  );
float  __exp10f32(float  __x  );
float  exp2m1f32(float  __x  );
float  __exp2m1f32(float  __x  );
float  exp10m1f32(float  __x  );
float  __exp10m1f32(float  __x  );
float  log2p1f32(float  __x  );
float  __log2p1f32(float  __x  );
float  log10p1f32(float  __x  );
float  __log10p1f32(float  __x  );
float  logp1f32(float  __x  );
float  __logp1f32(float  __x  );
float  expm1f32(float  __x  );
float  __expm1f32(float  __x  );
float  log1pf32(float  __x  );
float  __log1pf32(float  __x  );
float  logbf32(float  __x  );
float  __logbf32(float  __x  );
float  exp2f32(float  __x  );
float  __exp2f32(float  __x  );
float  log2f32(float  __x  );
float  __log2f32(float  __x  );
float  powf32(float  __x  , float  __y  );
float  __powf32(float  __x  , float  __y  );
float  sqrtf32(float  __x  );
float  __sqrtf32(float  __x  );
float  hypotf32(float  __x  , float  __y  );
float  __hypotf32(float  __x  , float  __y  );
float  cbrtf32(float  __x  );
float  __cbrtf32(float  __x  );
float  compoundnf32(float  __x  , long long int __y);
float  __compoundnf32(float  __x  , long long int __y);
float  pownf32(float  __x  , long long int __y);
float  __pownf32(float  __x  , long long int __y);
float  powrf32(float  __x  , float  __y  );
float  __powrf32(float  __x  , float  __y  );
float  rootnf32(float  __x  , long long int __y);
float  __rootnf32(float  __x  , long long int __y);
float  rsqrtf32(float  __x  );
float  __rsqrtf32(float  __x  );
float  ceilf32(float  __x  ) __attribute__ ((__const__));
float  fabsf32(float  __x  ) __attribute__ ((__const__));
float  floorf32(float  __x  ) __attribute__ ((__const__));
float  fmodf32(float  __x  , float  __y  );
float  __fmodf32(float  __x  , float  __y  );
float  copysignf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  nanf32(const char* __tagb);
float  __nanf32(const char* __tagb);
float  j0f32(float    );
float  __j0f32(float    );
float  j1f32(float    );
float  __j1f32(float    );
float  jnf32(int , float    );
float  __jnf32(int , float    );
float  y0f32(float    );
float  __y0f32(float    );
float  y1f32(float    );
float  __y1f32(float    );
float  ynf32(int , float    );
float  __ynf32(int , float    );
float  erff32(float    );
float  __erff32(float    );
float  erfcf32(float    );
float  __erfcf32(float    );
float  lgammaf32(float    );
float  __lgammaf32(float    );
float  tgammaf32(float    );
float  __tgammaf32(float    );
float  lgammaf32_r(float    , int* __signgamp);
float  __lgammaf32_r(float    , int* __signgamp);
float  rintf32(float  __x  );
float  __rintf32(float  __x  );
float  nextafterf32(float  __x  , float  __y  );
float  __nextafterf32(float  __x  , float  __y  );
float  nextdownf32(float  __x  );
float  __nextdownf32(float  __x  );
float  nextupf32(float  __x  );
float  __nextupf32(float  __x  );
float  remainderf32(float  __x  , float  __y  );
float  __remainderf32(float  __x  , float  __y  );
float  scalbnf32(float  __x  , int __n);
float  __scalbnf32(float  __x  , int __n);
int ilogbf32(float  __x  );
int __ilogbf32(float  __x  );
long  int llogbf32(float  __x  );
long  int __llogbf32(float  __x  );
float  scalblnf32(float  __x  , long  int __n);
float  __scalblnf32(float  __x  , long  int __n);
float  nearbyintf32(float  __x  );
float  __nearbyintf32(float  __x  );
float  roundf32(float  __x  ) __attribute__ ((__const__));
float  truncf32(float  __x  ) __attribute__ ((__const__));
float  remquof32(float  __x  , float  __y  , int* __quo);
float  __remquof32(float  __x  , float  __y  , int* __quo);
long  int lrintf32(float  __x  );
long  int __lrintf32(float  __x  );
long long int llrintf32(float  __x  );
long long int __llrintf32(float  __x  );
long  int lroundf32(float  __x  );
long  int __lroundf32(float  __x  );
long long int llroundf32(float  __x  );
long long int __llroundf32(float  __x  );
float  fdimf32(float  __x  , float  __y  );
float  __fdimf32(float  __x  , float  __y  );
float  fmaxf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fminf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fmaf32(float  __x  , float  __y  , float  __z  );
float  __fmaf32(float  __x  , float  __y  , float  __z  );
float  roundevenf32(float  __x  ) __attribute__ ((__const__));
long  int  fromfpf32(float  __x  , int __round, unsigned int __width);
long  int  __fromfpf32(float  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpf32(float  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpf32(float  __x  , int __round, unsigned int __width);
long  int  fromfpxf32(float  __x  , int __round, unsigned int __width);
long  int  __fromfpxf32(float  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpxf32(float  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpxf32(float  __x  , int __round, unsigned int __width);
int canonicalizef32(float*  __cx  , const float*  __x  );
float  fmaxmagf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fminmagf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fmaximumf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fminimumf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fmaximum_numf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fminimum_numf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fmaximum_magf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fminimum_magf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fmaximum_mag_numf32(float  __x  , float  __y  ) __attribute__ ((__const__));
float  fminimum_mag_numf32(float  __x  , float  __y  ) __attribute__ ((__const__));
int totalorderf32(const float*  __x  , const float*  __y  ) __attribute__ ((__pure__));
int totalordermagf32(const float*  __x  , const float*  __y  ) __attribute__ ((__pure__));
float  getpayloadf32(const float*  __x  );
float  __getpayloadf32(const float*  __x  );
int setpayloadf32(float*  __x  , float  __payload  );
int setpayloadsigf32(float*  __x  , float  __payload  );
double  acosf64(double  __x  );
double  __acosf64(double  __x  );
double  asinf64(double  __x  );
double  __asinf64(double  __x  );
double  atanf64(double  __x  );
double  __atanf64(double  __x  );
double  atan2f64(double  __y  , double  __x  );
double  __atan2f64(double  __y  , double  __x  );
double  cosf64(double  __x  );
double  __cosf64(double  __x  );
double  sinf64(double  __x  );
double  __sinf64(double  __x  );
double  tanf64(double  __x  );
double  __tanf64(double  __x  );
double  acospif64(double  __x  );
double  __acospif64(double  __x  );
double  asinpif64(double  __x  );
double  __asinpif64(double  __x  );
double  atanpif64(double  __x  );
double  __atanpif64(double  __x  );
double  atan2pif64(double  __y  , double  __x  );
double  __atan2pif64(double  __y  , double  __x  );
double  cospif64(double  __x  );
double  __cospif64(double  __x  );
double  sinpif64(double  __x  );
double  __sinpif64(double  __x  );
double  tanpif64(double  __x  );
double  __tanpif64(double  __x  );
double  coshf64(double  __x  );
double  __coshf64(double  __x  );
double  sinhf64(double  __x  );
double  __sinhf64(double  __x  );
double  tanhf64(double  __x  );
double  __tanhf64(double  __x  );
void sincosf64(double  __x  , double*  __sinx  , double*  __cosx  );
void __sincosf64(double  __x  , double*  __sinx  , double*  __cosx  );
double  acoshf64(double  __x  );
double  __acoshf64(double  __x  );
double  asinhf64(double  __x  );
double  __asinhf64(double  __x  );
double  atanhf64(double  __x  );
double  __atanhf64(double  __x  );
double  expf64(double  __x  );
double  __expf64(double  __x  );
double  frexpf64(double  __x  , int* __exponent);
double  __frexpf64(double  __x  , int* __exponent);
double  ldexpf64(double  __x  , int __exponent);
double  __ldexpf64(double  __x  , int __exponent);
double  logf64(double  __x  );
double  __logf64(double  __x  );
double  log10f64(double  __x  );
double  __log10f64(double  __x  );
double  modff64(double  __x  , double*  __iptr  );
double  __modff64(double  __x  , double*  __iptr  );
double  exp10f64(double  __x  );
double  __exp10f64(double  __x  );
double  exp2m1f64(double  __x  );
double  __exp2m1f64(double  __x  );
double  exp10m1f64(double  __x  );
double  __exp10m1f64(double  __x  );
double  log2p1f64(double  __x  );
double  __log2p1f64(double  __x  );
double  log10p1f64(double  __x  );
double  __log10p1f64(double  __x  );
double  logp1f64(double  __x  );
double  __logp1f64(double  __x  );
double  expm1f64(double  __x  );
double  __expm1f64(double  __x  );
double  log1pf64(double  __x  );
double  __log1pf64(double  __x  );
double  logbf64(double  __x  );
double  __logbf64(double  __x  );
double  exp2f64(double  __x  );
double  __exp2f64(double  __x  );
double  log2f64(double  __x  );
double  __log2f64(double  __x  );
double  powf64(double  __x  , double  __y  );
double  __powf64(double  __x  , double  __y  );
double  sqrtf64(double  __x  );
double  __sqrtf64(double  __x  );
double  hypotf64(double  __x  , double  __y  );
double  __hypotf64(double  __x  , double  __y  );
double  cbrtf64(double  __x  );
double  __cbrtf64(double  __x  );
double  compoundnf64(double  __x  , long long int __y);
double  __compoundnf64(double  __x  , long long int __y);
double  pownf64(double  __x  , long long int __y);
double  __pownf64(double  __x  , long long int __y);
double  powrf64(double  __x  , double  __y  );
double  __powrf64(double  __x  , double  __y  );
double  rootnf64(double  __x  , long long int __y);
double  __rootnf64(double  __x  , long long int __y);
double  rsqrtf64(double  __x  );
double  __rsqrtf64(double  __x  );
double  ceilf64(double  __x  ) __attribute__ ((__const__));
double  fabsf64(double  __x  ) __attribute__ ((__const__));
double  floorf64(double  __x  ) __attribute__ ((__const__));
double  fmodf64(double  __x  , double  __y  );
double  __fmodf64(double  __x  , double  __y  );
double  copysignf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  nanf64(const char* __tagb);
double  __nanf64(const char* __tagb);
double  j0f64(double    );
double  __j0f64(double    );
double  j1f64(double    );
double  __j1f64(double    );
double  jnf64(int , double    );
double  __jnf64(int , double    );
double  y0f64(double    );
double  __y0f64(double    );
double  y1f64(double    );
double  __y1f64(double    );
double  ynf64(int , double    );
double  __ynf64(int , double    );
double  erff64(double    );
double  __erff64(double    );
double  erfcf64(double    );
double  __erfcf64(double    );
double  lgammaf64(double    );
double  __lgammaf64(double    );
double  tgammaf64(double    );
double  __tgammaf64(double    );
double  lgammaf64_r(double    , int* __signgamp);
double  __lgammaf64_r(double    , int* __signgamp);
double  rintf64(double  __x  );
double  __rintf64(double  __x  );
double  nextafterf64(double  __x  , double  __y  );
double  __nextafterf64(double  __x  , double  __y  );
double  nextdownf64(double  __x  );
double  __nextdownf64(double  __x  );
double  nextupf64(double  __x  );
double  __nextupf64(double  __x  );
double  remainderf64(double  __x  , double  __y  );
double  __remainderf64(double  __x  , double  __y  );
double  scalbnf64(double  __x  , int __n);
double  __scalbnf64(double  __x  , int __n);
int ilogbf64(double  __x  );
int __ilogbf64(double  __x  );
long  int llogbf64(double  __x  );
long  int __llogbf64(double  __x  );
double  scalblnf64(double  __x  , long  int __n);
double  __scalblnf64(double  __x  , long  int __n);
double  nearbyintf64(double  __x  );
double  __nearbyintf64(double  __x  );
double  roundf64(double  __x  ) __attribute__ ((__const__));
double  truncf64(double  __x  ) __attribute__ ((__const__));
double  remquof64(double  __x  , double  __y  , int* __quo);
double  __remquof64(double  __x  , double  __y  , int* __quo);
long  int lrintf64(double  __x  );
long  int __lrintf64(double  __x  );
long long int llrintf64(double  __x  );
long long int __llrintf64(double  __x  );
long  int lroundf64(double  __x  );
long  int __lroundf64(double  __x  );
long long int llroundf64(double  __x  );
long long int __llroundf64(double  __x  );
double  fdimf64(double  __x  , double  __y  );
double  __fdimf64(double  __x  , double  __y  );
double  fmaxf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaf64(double  __x  , double  __y  , double  __z  );
double  __fmaf64(double  __x  , double  __y  , double  __z  );
double  roundevenf64(double  __x  ) __attribute__ ((__const__));
long  int  fromfpf64(double  __x  , int __round, unsigned int __width);
long  int  __fromfpf64(double  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpf64(double  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpf64(double  __x  , int __round, unsigned int __width);
long  int  fromfpxf64(double  __x  , int __round, unsigned int __width);
long  int  __fromfpxf64(double  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpxf64(double  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpxf64(double  __x  , int __round, unsigned int __width);
int canonicalizef64(double*  __cx  , const double*  __x  );
double  fmaxmagf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminmagf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximumf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimumf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximum_numf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimum_numf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximum_magf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimum_magf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximum_mag_numf64(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimum_mag_numf64(double  __x  , double  __y  ) __attribute__ ((__const__));
int totalorderf64(const double*  __x  , const double*  __y  ) __attribute__ ((__pure__));
int totalordermagf64(const double*  __x  , const double*  __y  ) __attribute__ ((__pure__));
double  getpayloadf64(const double*  __x  );
double  __getpayloadf64(const double*  __x  );
int setpayloadf64(double*  __x  , double  __payload  );
int setpayloadsigf64(double*  __x  , double  __payload  );
double  acosf32x(double  __x  );
double  __acosf32x(double  __x  );
double  asinf32x(double  __x  );
double  __asinf32x(double  __x  );
double  atanf32x(double  __x  );
double  __atanf32x(double  __x  );
double  atan2f32x(double  __y  , double  __x  );
double  __atan2f32x(double  __y  , double  __x  );
double  cosf32x(double  __x  );
double  __cosf32x(double  __x  );
double  sinf32x(double  __x  );
double  __sinf32x(double  __x  );
double  tanf32x(double  __x  );
double  __tanf32x(double  __x  );
double  acospif32x(double  __x  );
double  __acospif32x(double  __x  );
double  asinpif32x(double  __x  );
double  __asinpif32x(double  __x  );
double  atanpif32x(double  __x  );
double  __atanpif32x(double  __x  );
double  atan2pif32x(double  __y  , double  __x  );
double  __atan2pif32x(double  __y  , double  __x  );
double  cospif32x(double  __x  );
double  __cospif32x(double  __x  );
double  sinpif32x(double  __x  );
double  __sinpif32x(double  __x  );
double  tanpif32x(double  __x  );
double  __tanpif32x(double  __x  );
double  coshf32x(double  __x  );
double  __coshf32x(double  __x  );
double  sinhf32x(double  __x  );
double  __sinhf32x(double  __x  );
double  tanhf32x(double  __x  );
double  __tanhf32x(double  __x  );
void sincosf32x(double  __x  , double*  __sinx  , double*  __cosx  );
void __sincosf32x(double  __x  , double*  __sinx  , double*  __cosx  );
double  acoshf32x(double  __x  );
double  __acoshf32x(double  __x  );
double  asinhf32x(double  __x  );
double  __asinhf32x(double  __x  );
double  atanhf32x(double  __x  );
double  __atanhf32x(double  __x  );
double  expf32x(double  __x  );
double  __expf32x(double  __x  );
double  frexpf32x(double  __x  , int* __exponent);
double  __frexpf32x(double  __x  , int* __exponent);
double  ldexpf32x(double  __x  , int __exponent);
double  __ldexpf32x(double  __x  , int __exponent);
double  logf32x(double  __x  );
double  __logf32x(double  __x  );
double  log10f32x(double  __x  );
double  __log10f32x(double  __x  );
double  modff32x(double  __x  , double*  __iptr  );
double  __modff32x(double  __x  , double*  __iptr  );
double  exp10f32x(double  __x  );
double  __exp10f32x(double  __x  );
double  exp2m1f32x(double  __x  );
double  __exp2m1f32x(double  __x  );
double  exp10m1f32x(double  __x  );
double  __exp10m1f32x(double  __x  );
double  log2p1f32x(double  __x  );
double  __log2p1f32x(double  __x  );
double  log10p1f32x(double  __x  );
double  __log10p1f32x(double  __x  );
double  logp1f32x(double  __x  );
double  __logp1f32x(double  __x  );
double  expm1f32x(double  __x  );
double  __expm1f32x(double  __x  );
double  log1pf32x(double  __x  );
double  __log1pf32x(double  __x  );
double  logbf32x(double  __x  );
double  __logbf32x(double  __x  );
double  exp2f32x(double  __x  );
double  __exp2f32x(double  __x  );
double  log2f32x(double  __x  );
double  __log2f32x(double  __x  );
double  powf32x(double  __x  , double  __y  );
double  __powf32x(double  __x  , double  __y  );
double  sqrtf32x(double  __x  );
double  __sqrtf32x(double  __x  );
double  hypotf32x(double  __x  , double  __y  );
double  __hypotf32x(double  __x  , double  __y  );
double  cbrtf32x(double  __x  );
double  __cbrtf32x(double  __x  );
double  compoundnf32x(double  __x  , long long int __y);
double  __compoundnf32x(double  __x  , long long int __y);
double  pownf32x(double  __x  , long long int __y);
double  __pownf32x(double  __x  , long long int __y);
double  powrf32x(double  __x  , double  __y  );
double  __powrf32x(double  __x  , double  __y  );
double  rootnf32x(double  __x  , long long int __y);
double  __rootnf32x(double  __x  , long long int __y);
double  rsqrtf32x(double  __x  );
double  __rsqrtf32x(double  __x  );
double  ceilf32x(double  __x  ) __attribute__ ((__const__));
double  fabsf32x(double  __x  ) __attribute__ ((__const__));
double  floorf32x(double  __x  ) __attribute__ ((__const__));
double  fmodf32x(double  __x  , double  __y  );
double  __fmodf32x(double  __x  , double  __y  );
double  copysignf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  nanf32x(const char* __tagb);
double  __nanf32x(const char* __tagb);
double  j0f32x(double    );
double  __j0f32x(double    );
double  j1f32x(double    );
double  __j1f32x(double    );
double  jnf32x(int , double    );
double  __jnf32x(int , double    );
double  y0f32x(double    );
double  __y0f32x(double    );
double  y1f32x(double    );
double  __y1f32x(double    );
double  ynf32x(int , double    );
double  __ynf32x(int , double    );
double  erff32x(double    );
double  __erff32x(double    );
double  erfcf32x(double    );
double  __erfcf32x(double    );
double  lgammaf32x(double    );
double  __lgammaf32x(double    );
double  tgammaf32x(double    );
double  __tgammaf32x(double    );
double  lgammaf32x_r(double    , int* __signgamp);
double  __lgammaf32x_r(double    , int* __signgamp);
double  rintf32x(double  __x  );
double  __rintf32x(double  __x  );
double  nextafterf32x(double  __x  , double  __y  );
double  __nextafterf32x(double  __x  , double  __y  );
double  nextdownf32x(double  __x  );
double  __nextdownf32x(double  __x  );
double  nextupf32x(double  __x  );
double  __nextupf32x(double  __x  );
double  remainderf32x(double  __x  , double  __y  );
double  __remainderf32x(double  __x  , double  __y  );
double  scalbnf32x(double  __x  , int __n);
double  __scalbnf32x(double  __x  , int __n);
int ilogbf32x(double  __x  );
int __ilogbf32x(double  __x  );
long  int llogbf32x(double  __x  );
long  int __llogbf32x(double  __x  );
double  scalblnf32x(double  __x  , long  int __n);
double  __scalblnf32x(double  __x  , long  int __n);
double  nearbyintf32x(double  __x  );
double  __nearbyintf32x(double  __x  );
double  roundf32x(double  __x  ) __attribute__ ((__const__));
double  truncf32x(double  __x  ) __attribute__ ((__const__));
double  remquof32x(double  __x  , double  __y  , int* __quo);
double  __remquof32x(double  __x  , double  __y  , int* __quo);
long  int lrintf32x(double  __x  );
long  int __lrintf32x(double  __x  );
long long int llrintf32x(double  __x  );
long long int __llrintf32x(double  __x  );
long  int lroundf32x(double  __x  );
long  int __lroundf32x(double  __x  );
long long int llroundf32x(double  __x  );
long long int __llroundf32x(double  __x  );
double  fdimf32x(double  __x  , double  __y  );
double  __fdimf32x(double  __x  , double  __y  );
double  fmaxf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaf32x(double  __x  , double  __y  , double  __z  );
double  __fmaf32x(double  __x  , double  __y  , double  __z  );
double  roundevenf32x(double  __x  ) __attribute__ ((__const__));
long  int  fromfpf32x(double  __x  , int __round, unsigned int __width);
long  int  __fromfpf32x(double  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpf32x(double  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpf32x(double  __x  , int __round, unsigned int __width);
long  int  fromfpxf32x(double  __x  , int __round, unsigned int __width);
long  int  __fromfpxf32x(double  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpxf32x(double  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpxf32x(double  __x  , int __round, unsigned int __width);
int canonicalizef32x(double*  __cx  , const double*  __x  );
double  fmaxmagf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminmagf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximumf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimumf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximum_numf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimum_numf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximum_magf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimum_magf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fmaximum_mag_numf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
double  fminimum_mag_numf32x(double  __x  , double  __y  ) __attribute__ ((__const__));
int totalorderf32x(const double*  __x  , const double*  __y  ) __attribute__ ((__pure__));
int totalordermagf32x(const double*  __x  , const double*  __y  ) __attribute__ ((__pure__));
double  getpayloadf32x(const double*  __x  );
double  __getpayloadf32x(const double*  __x  );
int setpayloadf32x(double*  __x  , double  __payload  );
int setpayloadsigf32x(double*  __x  , double  __payload  );
long  double  acosf64x(long  double  __x  );
long  double  __acosf64x(long  double  __x  );
long  double  asinf64x(long  double  __x  );
long  double  __asinf64x(long  double  __x  );
long  double  atanf64x(long  double  __x  );
long  double  __atanf64x(long  double  __x  );
long  double  atan2f64x(long  double  __y  , long  double  __x  );
long  double  __atan2f64x(long  double  __y  , long  double  __x  );
long  double  cosf64x(long  double  __x  );
long  double  __cosf64x(long  double  __x  );
long  double  sinf64x(long  double  __x  );
long  double  __sinf64x(long  double  __x  );
long  double  tanf64x(long  double  __x  );
long  double  __tanf64x(long  double  __x  );
long  double  acospif64x(long  double  __x  );
long  double  __acospif64x(long  double  __x  );
long  double  asinpif64x(long  double  __x  );
long  double  __asinpif64x(long  double  __x  );
long  double  atanpif64x(long  double  __x  );
long  double  __atanpif64x(long  double  __x  );
long  double  atan2pif64x(long  double  __y  , long  double  __x  );
long  double  __atan2pif64x(long  double  __y  , long  double  __x  );
long  double  cospif64x(long  double  __x  );
long  double  __cospif64x(long  double  __x  );
long  double  sinpif64x(long  double  __x  );
long  double  __sinpif64x(long  double  __x  );
long  double  tanpif64x(long  double  __x  );
long  double  __tanpif64x(long  double  __x  );
long  double  coshf64x(long  double  __x  );
long  double  __coshf64x(long  double  __x  );
long  double  sinhf64x(long  double  __x  );
long  double  __sinhf64x(long  double  __x  );
long  double  tanhf64x(long  double  __x  );
long  double  __tanhf64x(long  double  __x  );
void sincosf64x(long  double  __x  , long  double*  __sinx  , long  double*  __cosx  );
void __sincosf64x(long  double  __x  , long  double*  __sinx  , long  double*  __cosx  );
long  double  acoshf64x(long  double  __x  );
long  double  __acoshf64x(long  double  __x  );
long  double  asinhf64x(long  double  __x  );
long  double  __asinhf64x(long  double  __x  );
long  double  atanhf64x(long  double  __x  );
long  double  __atanhf64x(long  double  __x  );
long  double  expf64x(long  double  __x  );
long  double  __expf64x(long  double  __x  );
long  double  frexpf64x(long  double  __x  , int* __exponent);
long  double  __frexpf64x(long  double  __x  , int* __exponent);
long  double  ldexpf64x(long  double  __x  , int __exponent);
long  double  __ldexpf64x(long  double  __x  , int __exponent);
long  double  logf64x(long  double  __x  );
long  double  __logf64x(long  double  __x  );
long  double  log10f64x(long  double  __x  );
long  double  __log10f64x(long  double  __x  );
long  double  modff64x(long  double  __x  , long  double*  __iptr  );
long  double  __modff64x(long  double  __x  , long  double*  __iptr  );
long  double  exp10f64x(long  double  __x  );
long  double  __exp10f64x(long  double  __x  );
long  double  exp2m1f64x(long  double  __x  );
long  double  __exp2m1f64x(long  double  __x  );
long  double  exp10m1f64x(long  double  __x  );
long  double  __exp10m1f64x(long  double  __x  );
long  double  log2p1f64x(long  double  __x  );
long  double  __log2p1f64x(long  double  __x  );
long  double  log10p1f64x(long  double  __x  );
long  double  __log10p1f64x(long  double  __x  );
long  double  logp1f64x(long  double  __x  );
long  double  __logp1f64x(long  double  __x  );
long  double  expm1f64x(long  double  __x  );
long  double  __expm1f64x(long  double  __x  );
long  double  log1pf64x(long  double  __x  );
long  double  __log1pf64x(long  double  __x  );
long  double  logbf64x(long  double  __x  );
long  double  __logbf64x(long  double  __x  );
long  double  exp2f64x(long  double  __x  );
long  double  __exp2f64x(long  double  __x  );
long  double  log2f64x(long  double  __x  );
long  double  __log2f64x(long  double  __x  );
long  double  powf64x(long  double  __x  , long  double  __y  );
long  double  __powf64x(long  double  __x  , long  double  __y  );
long  double  sqrtf64x(long  double  __x  );
long  double  __sqrtf64x(long  double  __x  );
long  double  hypotf64x(long  double  __x  , long  double  __y  );
long  double  __hypotf64x(long  double  __x  , long  double  __y  );
long  double  cbrtf64x(long  double  __x  );
long  double  __cbrtf64x(long  double  __x  );
long  double  compoundnf64x(long  double  __x  , long long int __y);
long  double  __compoundnf64x(long  double  __x  , long long int __y);
long  double  pownf64x(long  double  __x  , long long int __y);
long  double  __pownf64x(long  double  __x  , long long int __y);
long  double  powrf64x(long  double  __x  , long  double  __y  );
long  double  __powrf64x(long  double  __x  , long  double  __y  );
long  double  rootnf64x(long  double  __x  , long long int __y);
long  double  __rootnf64x(long  double  __x  , long long int __y);
long  double  rsqrtf64x(long  double  __x  );
long  double  __rsqrtf64x(long  double  __x  );
long  double  ceilf64x(long  double  __x  ) __attribute__ ((__const__));
long  double  fabsf64x(long  double  __x  ) __attribute__ ((__const__));
long  double  floorf64x(long  double  __x  ) __attribute__ ((__const__));
long  double  fmodf64x(long  double  __x  , long  double  __y  );
long  double  __fmodf64x(long  double  __x  , long  double  __y  );
long  double  copysignf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  nanf64x(const char* __tagb);
long  double  __nanf64x(const char* __tagb);
long  double  j0f64x(long  double    );
long  double  __j0f64x(long  double    );
long  double  j1f64x(long  double    );
long  double  __j1f64x(long  double    );
long  double  jnf64x(int , long  double    );
long  double  __jnf64x(int , long  double    );
long  double  y0f64x(long  double    );
long  double  __y0f64x(long  double    );
long  double  y1f64x(long  double    );
long  double  __y1f64x(long  double    );
long  double  ynf64x(int , long  double    );
long  double  __ynf64x(int , long  double    );
long  double  erff64x(long  double    );
long  double  __erff64x(long  double    );
long  double  erfcf64x(long  double    );
long  double  __erfcf64x(long  double    );
long  double  lgammaf64x(long  double    );
long  double  __lgammaf64x(long  double    );
long  double  tgammaf64x(long  double    );
long  double  __tgammaf64x(long  double    );
long  double  lgammaf64x_r(long  double    , int* __signgamp);
long  double  __lgammaf64x_r(long  double    , int* __signgamp);
long  double  rintf64x(long  double  __x  );
long  double  __rintf64x(long  double  __x  );
long  double  nextafterf64x(long  double  __x  , long  double  __y  );
long  double  __nextafterf64x(long  double  __x  , long  double  __y  );
long  double  nextdownf64x(long  double  __x  );
long  double  __nextdownf64x(long  double  __x  );
long  double  nextupf64x(long  double  __x  );
long  double  __nextupf64x(long  double  __x  );
long  double  remainderf64x(long  double  __x  , long  double  __y  );
long  double  __remainderf64x(long  double  __x  , long  double  __y  );
long  double  scalbnf64x(long  double  __x  , int __n);
long  double  __scalbnf64x(long  double  __x  , int __n);
int ilogbf64x(long  double  __x  );
int __ilogbf64x(long  double  __x  );
long  int llogbf64x(long  double  __x  );
long  int __llogbf64x(long  double  __x  );
long  double  scalblnf64x(long  double  __x  , long  int __n);
long  double  __scalblnf64x(long  double  __x  , long  int __n);
long  double  nearbyintf64x(long  double  __x  );
long  double  __nearbyintf64x(long  double  __x  );
long  double  roundf64x(long  double  __x  ) __attribute__ ((__const__));
long  double  truncf64x(long  double  __x  ) __attribute__ ((__const__));
long  double  remquof64x(long  double  __x  , long  double  __y  , int* __quo);
long  double  __remquof64x(long  double  __x  , long  double  __y  , int* __quo);
long  int lrintf64x(long  double  __x  );
long  int __lrintf64x(long  double  __x  );
long long int llrintf64x(long  double  __x  );
long long int __llrintf64x(long  double  __x  );
long  int lroundf64x(long  double  __x  );
long  int __lroundf64x(long  double  __x  );
long long int llroundf64x(long  double  __x  );
long long int __llroundf64x(long  double  __x  );
long  double  fdimf64x(long  double  __x  , long  double  __y  );
long  double  __fdimf64x(long  double  __x  , long  double  __y  );
long  double  fmaxf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fminf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fmaf64x(long  double  __x  , long  double  __y  , long  double  __z  );
long  double  __fmaf64x(long  double  __x  , long  double  __y  , long  double  __z  );
long  double  roundevenf64x(long  double  __x  ) __attribute__ ((__const__));
long  int  fromfpf64x(long  double  __x  , int __round, unsigned int __width);
long  int  __fromfpf64x(long  double  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpf64x(long  double  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpf64x(long  double  __x  , int __round, unsigned int __width);
long  int  fromfpxf64x(long  double  __x  , int __round, unsigned int __width);
long  int  __fromfpxf64x(long  double  __x  , int __round, unsigned int __width);
unsigned long  int  ufromfpxf64x(long  double  __x  , int __round, unsigned int __width);
unsigned long  int  __ufromfpxf64x(long  double  __x  , int __round, unsigned int __width);
int canonicalizef64x(long  double*  __cx  , const long  double*  __x  );
long  double  fmaxmagf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fminmagf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fmaximumf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fminimumf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fmaximum_numf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fminimum_numf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fmaximum_magf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fminimum_magf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fmaximum_mag_numf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
long  double  fminimum_mag_numf64x(long  double  __x  , long  double  __y  ) __attribute__ ((__const__));
int totalorderf64x(const long  double*  __x  , const long  double*  __y  ) __attribute__ ((__pure__));
int totalordermagf64x(const long  double*  __x  , const long  double*  __y  ) __attribute__ ((__pure__));
long  double  getpayloadf64x(const long  double*  __x  );
long  double  __getpayloadf64x(const long  double*  __x  );
int setpayloadf64x(long  double*  __x  , long  double  __payload  );
int setpayloadsigf64x(long  double*  __x  , long  double  __payload  );
float fadd(double __x, double __y);
float fdiv(double __x, double __y);
float ffma(double __x, double __y, double __z);
float fmul(double __x, double __y);
float fsqrt(double __x);
float fsub(double __x, double __y);
float faddl(long  double __x, long  double __y);
float fdivl(long  double __x, long  double __y);
float ffmal(long  double __x, long  double __y, long  double __z);
float fmull(long  double __x, long  double __y);
float fsqrtl(long  double __x);
float fsubl(long  double __x, long  double __y);
double daddl(long  double __x, long  double __y);
double ddivl(long  double __x, long  double __y);
double dfmal(long  double __x, long  double __y, long  double __z);
double dmull(long  double __x, long  double __y);
double dsqrtl(long  double __x);
double dsubl(long  double __x, long  double __y);
float  f32addf32x(double  __x  , double  __y  );
float  f32divf32x(double  __x  , double  __y  );
float  f32fmaf32x(double  __x  , double  __y  , double  __z  );
float  f32mulf32x(double  __x  , double  __y  );
float  f32sqrtf32x(double  __x  );
float  f32subf32x(double  __x  , double  __y  );
float  f32addf64(double  __x  , double  __y  );
float  f32divf64(double  __x  , double  __y  );
float  f32fmaf64(double  __x  , double  __y  , double  __z  );
float  f32mulf64(double  __x  , double  __y  );
float  f32sqrtf64(double  __x  );
float  f32subf64(double  __x  , double  __y  );
float  f32addf64x(long  double  __x  , long  double  __y  );
float  f32divf64x(long  double  __x  , long  double  __y  );
float  f32fmaf64x(long  double  __x  , long  double  __y  , long  double  __z  );
float  f32mulf64x(long  double  __x  , long  double  __y  );
float  f32sqrtf64x(long  double  __x  );
float  f32subf64x(long  double  __x  , long  double  __y  );
double  f32xaddf64(double  __x  , double  __y  );
double  f32xdivf64(double  __x  , double  __y  );
double  f32xfmaf64(double  __x  , double  __y  , double  __z  );
double  f32xmulf64(double  __x  , double  __y  );
double  f32xsqrtf64(double  __x  );
double  f32xsubf64(double  __x  , double  __y  );
double  f32xaddf64x(long  double  __x  , long  double  __y  );
double  f32xdivf64x(long  double  __x  , long  double  __y  );
double  f32xfmaf64x(long  double  __x  , long  double  __y  , long  double  __z  );
double  f32xmulf64x(long  double  __x  , long  double  __y  );
double  f32xsqrtf64x(long  double  __x  );
double  f32xsubf64x(long  double  __x  , long  double  __y  );
double  f64addf64x(long  double  __x  , long  double  __y  );
double  f64divf64x(long  double  __x  , long  double  __y  );
double  f64fmaf64x(long  double  __x  , long  double  __y  , long  double  __z  );
double  f64mulf64x(long  double  __x  , long  double  __y  );
double  f64sqrtf64x(long  double  __x  );
double  f64subf64x(long  double  __x  , long  double  __y  );
int __iscanonicall(long  double __x) __attribute__ ((__const__));
int backtrace(void** __array, int __size);
char** backtrace_symbols(void** const __array, int __size);
void backtrace_symbols_fd(void** const __array, int __size, int __fd);
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
struct _IO_FILE*  fmemopen(void* __s, unsigned long  __len  , const char* __modes) __attribute__ ((__malloc__))  ;
struct _IO_FILE*  open_memstream(char** __bufloc, unsigned long*  __sizeloc  ) __attribute__ ((__malloc__))  ;
void setbuf(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf);
int setvbuf(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf, int __modes, unsigned long  __n  );
void setbuffer(struct _IO_FILE* __restrict  __stream  , char* __restrict __buf, unsigned long  __size  );
void setlinebuf(struct _IO_FILE*  __stream  );
int fprintf(struct _IO_FILE* __restrict  __stream  , const char* __restrict __format, ...);
int printf(const char* __restrict __format, ...);
int sprintf(char* __restrict __s, const char* __restrict __format, ...);
int vfprintf(struct _IO_FILE* __restrict  __s  , const char* __restrict __format, __builtin_va_list  __arg  );
int vprintf(const char* __restrict __format, __builtin_va_list  __arg  );
int vsprintf(char* __restrict __s, const char* __restrict __format, __builtin_va_list  __arg  );
int snprintf(char* __restrict __s, unsigned long  __maxlen  , const char* __restrict __format, ...) __attribute__ ((__format__ (__printf__, 3, 4)));
int vsnprintf(char* __restrict __s, unsigned long  __maxlen  , const char* __restrict __format, __builtin_va_list  __arg  ) __attribute__ ((__format__ (__printf__, 3, 0)));
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
long  int  __getdelim(char** __restrict __lineptr, unsigned long* __restrict  __n  , int __delimiter, struct _IO_FILE* __restrict  __stream  );
long  int  getdelim(char** __restrict __lineptr, unsigned long* __restrict  __n  , int __delimiter, struct _IO_FILE* __restrict  __stream  );
long  int  getline(char** __restrict __lineptr, unsigned long* __restrict  __n  , struct _IO_FILE* __restrict  __stream  );
int fputs(const char* __restrict __s, struct _IO_FILE* __restrict  __stream  );
int puts(const char* __s);
int ungetc(int __c, struct _IO_FILE*  __stream  );
unsigned long  fread(void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __stream  );
unsigned long  fwrite(const void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __s  );
int fputs_unlocked(const char* __restrict __s, struct _IO_FILE* __restrict  __stream  );
unsigned long  fread_unlocked(void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __stream  );
unsigned long  fwrite_unlocked(const void* __restrict __ptr, unsigned long  __size  , unsigned long  __n  , struct _IO_FILE* __restrict  __stream  );
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
void* malloc(unsigned long  __size  ) __attribute__ ((__malloc__))
      ;
void* calloc(unsigned long  __nmemb  , unsigned long  __size  ) __attribute__ ((__malloc__))  ;
void* realloc(void* __ptr, unsigned long  __size  );
void* reallocarray(void* __ptr, unsigned long  __nmemb  , unsigned long  __size  );
void free(void* __ptr);
void* memalign(unsigned long  __alignment  , unsigned long  __size  ) __attribute__ ((__malloc__)) 
    ;
void* valloc(unsigned long  __size  ) __attribute__ ((__malloc__))
       ;
void* pvalloc(unsigned long  __size  ) __attribute__ ((__malloc__))
   ;
struct mallinfo  mallinfo() __attribute__ ((__deprecated__));
struct mallinfo2  mallinfo2();
int mallopt(int __param, int __val);
int malloc_trim(unsigned long  __pad  );
unsigned long  malloc_usable_size(void* __ptr);
void malloc_stats();
int malloc_info(int __options, struct _IO_FILE*  __fp  );
int clone(int (*__fn)(void*), void* __child_stack, int __flags, void* __arg, ...);
int unshare(int __flags);
int sched_getcpu();
int getcpu(unsigned int* , unsigned int* );
int setns(int __fd, int __nstype);
int sched_setattr(int  tid  , struct sched_attr*  attr  , unsigned int flags);
int sched_getattr(int  tid  , struct sched_attr*  attr  , unsigned int size, unsigned int flags);
int __sched_cpucount(unsigned long  __setsize  , const struct anonymous_typeX11*  __setp  );
struct anonymous_typeX11*  __sched_cpualloc(unsigned long  __count  );
void __sched_cpufree(struct anonymous_typeX11*  __set  );
int sched_setparam(int  __pid  , const struct sched_param*  __param  );
int sched_getparam(int  __pid  , struct sched_param*  __param  );
int sched_setscheduler(int  __pid  , int __policy, const struct sched_param*  __param  );
int sched_getscheduler(int  __pid  );
int sched_yield();
int sched_get_priority_max(int __algorithm);
int sched_get_priority_min(int __algorithm);
int sched_rr_get_interval(int  __pid  , struct timespec*  __t  );
int sched_setaffinity(int  __pid  , unsigned long  __cpusetsize  , const struct anonymous_typeX11*  __cpuset  );
int sched_getaffinity(int  __pid  , unsigned long  __cpusetsize  , struct anonymous_typeX11*  __cpuset  );
int select(int __nfds, struct anonymous_typeX13* __restrict  __readfds  , struct anonymous_typeX13* __restrict  __writefds  , struct anonymous_typeX13* __restrict  __exceptfds  , struct timeval* __restrict  __timeout  );
int pselect(int __nfds, struct anonymous_typeX13* __restrict  __readfds  , struct anonymous_typeX13* __restrict  __writefds  , struct anonymous_typeX13* __restrict  __exceptfds  , const struct timespec* __restrict  __timeout  , const struct anonymous_typeX12* __restrict  __sigmask  );
int posix_spawn(int* __restrict  __pid  , const char* __restrict __path, const struct anonymous_typeX26* __restrict  __file_actions  , const struct anonymous_typeX25* __restrict  __attrp  , char* const __argv[], char* const __envp[]);
int posix_spawnp(int*  __pid  , const char* __file, const struct anonymous_typeX26*  __file_actions  , const struct anonymous_typeX25*  __attrp  , char* const __argv[], char* const __envp[]);
int posix_spawnattr_init(struct anonymous_typeX25*  __attr  );
int posix_spawnattr_destroy(struct anonymous_typeX25*  __attr  );
int posix_spawnattr_getsigdefault(const struct anonymous_typeX25* __restrict  __attr  , struct anonymous_typeX12* __restrict  __sigdefault  );
int posix_spawnattr_setsigdefault(struct anonymous_typeX25* __restrict  __attr  , const struct anonymous_typeX12* __restrict  __sigdefault  );
int posix_spawnattr_getsigmask(const struct anonymous_typeX25* __restrict  __attr  , struct anonymous_typeX12* __restrict  __sigmask  );
int posix_spawnattr_setsigmask(struct anonymous_typeX25* __restrict  __attr  , const struct anonymous_typeX12* __restrict  __sigmask  );
int posix_spawnattr_getflags(const struct anonymous_typeX25* __restrict  __attr  , short int* __restrict __flags);
int posix_spawnattr_setflags(struct anonymous_typeX25*  _attr  , short int __flags);
int posix_spawnattr_getpgroup(const struct anonymous_typeX25* __restrict  __attr  , int* __restrict  __pgroup  );
int posix_spawnattr_setpgroup(struct anonymous_typeX25*  __attr  , int  __pgroup  );
int posix_spawnattr_getschedpolicy(const struct anonymous_typeX25* __restrict  __attr  , int* __restrict __schedpolicy);
int posix_spawnattr_setschedpolicy(struct anonymous_typeX25*  __attr  , int __schedpolicy);
int posix_spawnattr_getschedparam(const struct anonymous_typeX25* __restrict  __attr  , struct sched_param* __restrict  __schedparam  );
int posix_spawnattr_setschedparam(struct anonymous_typeX25* __restrict  __attr  , const struct sched_param* __restrict  __schedparam  );
int posix_spawn_file_actions_init(struct anonymous_typeX26*  __file_actions  );
int posix_spawn_file_actions_destroy(struct anonymous_typeX26*  __file_actions  );
int posix_spawn_file_actions_addopen(struct anonymous_typeX26* __restrict  __file_actions  , int __fd, const char* __restrict __path, int __oflag, unsigned int  __mode  );
int posix_spawn_file_actions_addclose(struct anonymous_typeX26*  __file_actions  , int __fd);
int posix_spawn_file_actions_adddup2(struct anonymous_typeX26*  __file_actions  , int __fd, int __newfd);
int posix_spawn_file_actions_addchdir_np(struct anonymous_typeX26* __restrict  __actions  , const char* __restrict __path);
int posix_spawn_file_actions_addfchdir_np(struct anonymous_typeX26*    , int __fd);
int posix_spawn_file_actions_addclosefrom_np(struct anonymous_typeX26*    , int __from);
int posix_spawn_file_actions_addtcsetpgrp_np(struct anonymous_typeX26*    , int __tcfd);
int posix_spawnattr_getcgroup_np(const struct anonymous_typeX25* __restrict  __attr  , int* __restrict __cgroup);
int posix_spawnattr_setcgroup_np(struct anonymous_typeX25*  __attr  , int __cgroup);
int pidfd_spawn(int* __restrict __pidfd, const char* __restrict __path, const struct anonymous_typeX26* __restrict  __facts  , const struct anonymous_typeX25* __restrict  __attrp  , char* const __argv[], char* const __envp[]);
int pidfd_spawnp(int* __restrict __pidfd, const char* __restrict __file, const struct anonymous_typeX26* __restrict  __facts  , const struct anonymous_typeX25* __restrict  __attrp  , char* const __argv[], char* const __envp[]);
int wordexp(const char* __restrict __words, struct anonymous_typeX27* __restrict  __pwordexp  , int __flags);
void wordfree(struct anonymous_typeX27*  __wordexp  );
int test_headers_misc();
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
int test_headers_misc()
{
    return 0;
}

