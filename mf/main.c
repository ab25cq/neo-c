/// c_include definition ///
/// typedef definition ///
typedef unsigned long size_t;

typedef char* string;

typedef unsigned long  long    ;

typedef __builtin_va_list __gnuc_va_list;

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

typedef long  int (*cookie_read_function_t)(void*,char*,unsigned long );

typedef long  int (*cookie_write_function_t)(void*,const char*,unsigned long );

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

typedef __builtin_va_list va_list;

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

typedef struct anonymous_typeX26 max_align_t;

typedef unsigned char NCURSES_BOOL;

typedef struct screen SCREEN;

typedef struct _win_st WINDOW;

typedef unsigned int  attr_t  ;

typedef struct anonymous_typeX27 cchar_t;

typedef int (*NCURSES_OUTC)(int);

typedef int (*NCURSES_WINDOW_CB)(struct _win_st* ,void*);

typedef int (*NCURSES_SCREEN_CB)(struct screen* ,void*);

typedef int (*NCURSES_OUTC_sp)(struct screen* ,int);

typedef struct anonymous_typeX28 MEVENT;

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

struct re_program;

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
    long  int (*(*read))(void*,char*,unsigned long )  ;
    long  int (*(*write))(void*,const char*,unsigned long )  ;
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

struct anonymous_typeX7
{
    unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
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

struct anonymous_typeX8
{
    long  int  fds_bits[1024/(8*(int)sizeof(long  int ))]  ;
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
    int allocated;
    struct sMemHeader*  next  ;
    struct sMemHeader*  prev  ;
    struct sMemHeader*  free_next  ;
    char* fun_name[8];
    const char* class_name;
};

struct slice$1char$
{
    char* memory;
    char* p;
    unsigned long  len  ;
};

struct smart_pointer$1char$
{
    struct buffer*  memory  ;
    char* p;
};

struct smart_pointer$1int$
{
    struct buffer*  memory  ;
    int* p;
};

struct smart_pointer$1short$
{
    struct buffer*  memory  ;
    short* p;
};

struct smart_pointer$1long$
{
    struct buffer*  memory  ;
    long* p;
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

struct anonymous_typeX26
{
    long long __attribute__((__aligned__(__alignof__(long long)))) __clang_max_align_nonce1 __attribute__((__aligned__(__alignof__(long long))));
    long  double __attribute__((__aligned__(__alignof__(long double)))) __clang_max_align_nonce2 __attribute__((__aligned__(__alignof__(long double))));
};

struct anonymous_typeX27
{
    unsigned int  attr  ;
    int  chars[5]  ;
    int ext_color;
};

struct anonymous_typeX28
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
    enum undo_code what;
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
extern struct anonymous_typeX27*  _nc_wacs  ;
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
unsigned long  __ctype_get_mb_cur_max();
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
int strfromd(char* __dest, unsigned long  __size  , const char* __format, double __f);
int strfromf(char* __dest, unsigned long  __size  , const char* __format, float __f);
int strfroml(char* __dest, unsigned long  __size  , const char* __format, long  double __f);
int strfromf32(char* __dest, unsigned long  __size  , const char* __format, float  __f  );
int strfromf64(char* __dest, unsigned long  __size  , const char* __format, double  __f  );
int strfromf32x(char* __dest, unsigned long  __size  , const char* __format, double  __f  );
int strfromf64x(char* __dest, unsigned long  __size  , const char* __format, long  double  __f  );
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
char* initstate(unsigned int __seed, char* __statebuf, unsigned long  __statelen  );
char* setstate(char* __statebuf);
int random_r(struct random_data* __restrict  __buf  , int* __restrict  __result  );
int srandom_r(unsigned int __seed, struct random_data*  __buf  );
int initstate_r(unsigned int __seed, char* __restrict __statebuf, unsigned long  __statelen  , struct random_data* __restrict  __buf  );
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
void arc4random_buf(void* __buf, unsigned long  __size  );
unsigned int  arc4random_uniform(unsigned int  __upper_bound  );
void* malloc(unsigned long  __size  ) __attribute__ ((__malloc__))
      ;
void* calloc(unsigned long  __nmemb  , unsigned long  __size  ) __attribute__ ((__malloc__))  ;
void* realloc(void* __ptr, unsigned long  __size  );
void free(void* __ptr);
void* reallocarray(void* __ptr, unsigned long  __nmemb  , unsigned long  __size  );
void* alloca(unsigned long  __size  );
void* valloc(unsigned long  __size  ) __attribute__ ((__malloc__))
      ;
int posix_memalign(void** __memptr, unsigned long  __alignment  , unsigned long  __size  );
void* aligned_alloc(unsigned long  __alignment  , unsigned long  __size  ) __attribute__ ((__malloc__)) 
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
void* bsearch(const void* __key, const void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*)  );
void qsort(void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*)  );
void qsort_r(void* __base, unsigned long  __nmemb  , unsigned long  __size  , int (*__compar)(const void*,const void*,void*)  , void* __arg);
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
int ecvt_r(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int fcvt_r(double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int qecvt_r(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int qfcvt_r(long  double __value, int __ndigit, int* __restrict __decpt, int* __restrict __sign, char* __restrict __buf, unsigned long  __len  );
int mblen(const char* __s, unsigned long  __n  );
int mbtowc(int* __restrict  __pwc  , const char* __restrict __s, unsigned long  __n  );
int wctomb(char* __s, int  __wchar  );
unsigned long  mbstowcs(int* __restrict  __pwcs  , const char* __restrict __s, unsigned long  __n  );
unsigned long  wcstombs(char* __restrict __s, const int* __restrict  __pwcs  , unsigned long  __n  );
int rpmatch(const char* __response);
int getsubopt(char** __restrict __optionp, char** const __restrict __tokens, char** __restrict __valuep);
int posix_openpt(int __oflag);
int grantpt(int __fd);
int unlockpt(int __fd);
char* ptsname(int __fd);
int ptsname_r(int __fd, char* __buf, unsigned long  __buflen  );
int getpt();
int getloadavg(double __loadavg[], int __nelem);
void* memcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
void* memmove(void* __dest, const void* __src, unsigned long  __n  );
void* memccpy(void* __restrict __dest, const void* __restrict __src, int __c, unsigned long  __n  );
void* memset(void* __s, int __c, unsigned long  __n  );
int memcmp(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int __memcmpeq(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void* memchr(const void* __s, int __c, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void* rawmemchr(const void* __s, int __c) __attribute__ ((__pure__)) ;
void* memrchr(const void* __s, int __c, unsigned long  __n  ) __attribute__ ((__pure__)) 
      ;
char* strcpy(char* __restrict __dest, const char* __restrict __src);
char* strncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
char* strcat(char* __restrict __dest, const char* __restrict __src);
char* strncat(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
int strcmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
int strncmp(const char* __s1, const char* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int strcoll(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
unsigned long  strxfrm(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
int strcoll_l(const char* __s1, const char* __s2, struct __locale_struct*  __l  ) __attribute__ ((__pure__)) ;
unsigned long  strxfrm_l(char* __dest, const char* __src, unsigned long  __n  , struct __locale_struct*  __l  );
char* strdup(const char* __s) __attribute__ ((__malloc__)) ;
char* strndup(const char* __string, unsigned long  __n  ) __attribute__ ((__malloc__)) ;
char* strchr(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* strrchr(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* strchrnul(const char* __s, int __c) __attribute__ ((__pure__)) ;
unsigned long  strcspn(const char* __s, const char* __reject) __attribute__ ((__pure__)) ;
unsigned long  strspn(const char* __s, const char* __accept) __attribute__ ((__pure__)) ;
char* strpbrk(const char* __s, const char* __accept) __attribute__ ((__pure__)) ;
char* strstr(const char* __haystack, const char* __needle) __attribute__ ((__pure__)) ;
char* strtok(char* __restrict __s, const char* __restrict __delim);
char* __strtok_r(char* __restrict __s, const char* __restrict __delim, char** __restrict __save_ptr);
char* strtok_r(char* __restrict __s, const char* __restrict __delim, char** __restrict __save_ptr);
char* strcasestr(const char* __haystack, const char* __needle) __attribute__ ((__pure__)) ;
void* memmem(const void* __haystack, unsigned long  __haystacklen  , const void* __needle, unsigned long  __needlelen  ) __attribute__ ((__pure__)) 
    
    ;
void* __mempcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
void* mempcpy(void* __restrict __dest, const void* __restrict __src, unsigned long  __n  );
unsigned long  strlen(const char* __s) __attribute__ ((__pure__)) ;
unsigned long  strnlen(const char* __string, unsigned long  __maxlen  ) __attribute__ ((__pure__)) ;
char* strerror(int __errnum);
char* strerror_r(int __errnum, char* __buf, unsigned long  __buflen  );
const char* strerrordesc_np(int __err);
const char* strerrorname_np(int __err);
char* strerror_l(int __errnum, struct __locale_struct*  __l  );
int bcmp(const void* __s1, const void* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
void bcopy(const void* __src, void* __dest, unsigned long  __n  );
void bzero(void* __s, unsigned long  __n  );
char* index(const char* __s, int __c) __attribute__ ((__pure__)) ;
char* rindex(const char* __s, int __c) __attribute__ ((__pure__)) ;
int ffs(int __i) __attribute__ ((__const__));
int ffsl(long  int __l) __attribute__ ((__const__));
int ffsll(long long int __ll) __attribute__ ((__const__));
int strcasecmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
int strncasecmp(const char* __s1, const char* __s2, unsigned long  __n  ) __attribute__ ((__pure__)) ;
int strcasecmp_l(const char* __s1, const char* __s2, struct __locale_struct*  __loc  ) __attribute__ ((__pure__)) ;
int strncasecmp_l(const char* __s1, const char* __s2, unsigned long  __n  , struct __locale_struct*  __loc  ) __attribute__ ((__pure__)) ;
void explicit_bzero(void* __s, unsigned long  __n  );
char* strsep(char** __restrict __stringp, const char* __restrict __delim);
char* strsignal(int __sig);
const char* sigabbrev_np(int __sig);
const char* sigdescr_np(int __sig);
char* __stpcpy(char* __restrict __dest, const char* __restrict __src);
char* stpcpy(char* __restrict __dest, const char* __restrict __src);
char* __stpncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
char* stpncpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
unsigned long  strlcpy(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
unsigned long  strlcat(char* __restrict __dest, const char* __restrict __src, unsigned long  __n  );
int strverscmp(const char* __s1, const char* __s2) __attribute__ ((__pure__)) ;
char* strfry(char* __string);
void* memfrob(void* __s, unsigned long  __n  );
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
int*  wcsncpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
unsigned long  wcslcpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
unsigned long  wcslcat(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
int*  wcscat(int* __restrict  __dest  , const int* __restrict  __src  );
int*  wcsncat(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
int wcscmp(const int*  __s1  , const int*  __s2  ) __attribute__ ((__pure__)) ;
int wcsncmp(const int*  __s1  , const int*  __s2  , unsigned long  __n  ) __attribute__ ((__pure__)) ;
int wcscasecmp(const int*  __s1  , const int*  __s2  );
int wcsncasecmp(const int*  __s1  , const int*  __s2  , unsigned long  __n  );
int wcscasecmp_l(const int*  __s1  , const int*  __s2  , struct __locale_struct*  __loc  );
int wcsncasecmp_l(const int*  __s1  , const int*  __s2  , unsigned long  __n  , struct __locale_struct*  __loc  );
int wcscoll(const int*  __s1  , const int*  __s2  );
unsigned long  wcsxfrm(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  __n  );
int wcscoll_l(const int*  __s1  , const int*  __s2  , struct __locale_struct*  __loc  );
unsigned long  wcsxfrm_l(int*  __s1  , const int*  __s2  , unsigned long  __n  , struct __locale_struct*  __loc  );
int*  wcsdup(const int*  __s  ) __attribute__ ((__malloc__)) ;
int*  wcschr(const int*  __wcs  , int  __wc  ) __attribute__ ((__pure__));
int*  wcsrchr(const int*  __wcs  , int  __wc  ) __attribute__ ((__pure__));
int*  wcschrnul(const int*  __s  , int  __wc  ) __attribute__ ((__pure__));
unsigned long  wcscspn(const int*  __wcs  , const int*  __reject  ) __attribute__ ((__pure__));
unsigned long  wcsspn(const int*  __wcs  , const int*  __accept  ) __attribute__ ((__pure__));
int*  wcspbrk(const int*  __wcs  , const int*  __accept  ) __attribute__ ((__pure__));
int*  wcsstr(const int*  __haystack  , const int*  __needle  ) __attribute__ ((__pure__));
int*  wcstok(int* __restrict  __s  , const int* __restrict  __delim  , int** __restrict  __ptr  );
unsigned long  wcslen(const int*  __s  ) __attribute__ ((__pure__));
int*  wcswcs(const int*  __haystack  , const int*  __needle  ) __attribute__ ((__pure__));
unsigned long  wcsnlen(const int*  __s  , unsigned long  __maxlen  ) __attribute__ ((__pure__));
int*  wmemchr(const int*  __s  , int  __c  , unsigned long  __n  ) __attribute__ ((__pure__));
int wmemcmp(const int*  __s1  , const int*  __s2  , unsigned long  __n  ) __attribute__ ((__pure__));
int*  wmemcpy(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  __n  );
int*  wmemmove(int*  __s1  , const int*  __s2  , unsigned long  __n  );
int*  wmemset(int*  __s  , int  __c  , unsigned long  __n  );
int*  wmempcpy(int* __restrict  __s1  , const int* __restrict  __s2  , unsigned long  __n  );
unsigned int  btowc(int __c);
int wctob(unsigned int  __c  );
int mbsinit(const struct anonymous_typeX1*  __ps  ) __attribute__ ((__pure__));
unsigned long  mbrtowc(int* __restrict  __pwc  , const char* __restrict __s, unsigned long  __n  , struct anonymous_typeX1* __restrict  __p  );
unsigned long  wcrtomb(char* __restrict __s, int  __wc  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  __mbrlen(const char* __restrict __s, unsigned long  __n  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  mbrlen(const char* __restrict __s, unsigned long  __n  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  mbsrtowcs(int* __restrict  __dst  , const char** __restrict __src, unsigned long  __len  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  wcsrtombs(char* __restrict __dst, const int** __restrict  __src  , unsigned long  __len  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  mbsnrtowcs(int* __restrict  __dst  , const char** __restrict __src, unsigned long  __nmc  , unsigned long  __len  , struct anonymous_typeX1* __restrict  __ps  );
unsigned long  wcsnrtombs(char* __restrict __dst, const int** __restrict  __src  , unsigned long  __nwc  , unsigned long  __len  , struct anonymous_typeX1* __restrict  __ps  );
int wcwidth(int  __c  );
int wcswidth(const int*  __s  , unsigned long  __n  );
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
int*  wcpncpy(int* __restrict  __dest  , const int* __restrict  __src  , unsigned long  __n  );
struct _IO_FILE*  open_wmemstream(int**  __bufloc  , unsigned long*  __sizeloc  ) __attribute__ ((__malloc__)) ;
int fwide(struct _IO_FILE*  __fp  , int __mode);
int fwprintf(struct _IO_FILE* __restrict  __stream  , const int* __restrict  __format  , ...);
int wprintf(const int* __restrict  __format  , ...);
int swprintf(int* __restrict  __s  , unsigned long  __n  , const int* __restrict  __format  , ...);
int vfwprintf(struct _IO_FILE* __restrict  __s  , const int* __restrict  __format  , __builtin_va_list  __arg  );
int vwprintf(const int* __restrict  __format  , __builtin_va_list  __arg  );
int vswprintf(int* __restrict  __s  , unsigned long  __n  , const int* __restrict  __format  , __builtin_va_list  __arg  );
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
unsigned long  wcsftime(int* __restrict  __s  , unsigned long  __maxsize  , const int* __restrict  __format  , const struct tm* __restrict  __tp  );
unsigned long  wcsftime_l(int* __restrict  __s  , unsigned long  __maxsize  , const int* __restrict  __format  , const struct tm* __restrict  __tp  , struct __locale_struct*  __loc  );
char* dirname(char* __path);
char* __xpg_basename(char* __path);
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
int vidputs(unsigned int    , int (*anonymous_var_nameY415)(int)  );
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
int use_screen(struct screen*    , int (*anonymous_var_nameY616)(struct screen* ,void*)  , void* );
int use_window(struct _win_st*    , int (*anonymous_var_nameY619)(struct _win_st* ,void*)  , void* );
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
int vidputs_sp(struct screen*    , unsigned int    , int (*anonymous_var_nameY776)(struct screen* ,int)  );
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
int add_wch(const struct anonymous_typeX27*    );
int add_wchnstr(const struct anonymous_typeX27*    , int );
int add_wchstr(const struct anonymous_typeX27*    );
int addnwstr(const int*    , int );
int addwstr(const int*    );
int bkgrnd(const struct anonymous_typeX27*    );
void bkgrndset(const struct anonymous_typeX27*    );
int border_set(const struct anonymous_typeX27*    , const struct anonymous_typeX27*    , const struct anonymous_typeX27*    , const struct anonymous_typeX27*    , const struct anonymous_typeX27*    , const struct anonymous_typeX27*    , const struct anonymous_typeX27*    , const struct anonymous_typeX27*    );
int box_set(struct _win_st*    , const struct anonymous_typeX27*    , const struct anonymous_typeX27*    );
int echo_wchar(const struct anonymous_typeX27*    );
int erasewchar(int*    );
int get_wch(unsigned int*    );
int get_wstr(unsigned int*    );
int getbkgrnd(struct anonymous_typeX27*    );
int getcchar(const struct anonymous_typeX27*    , int*    , unsigned int*    , short* , void* );
int getn_wstr(unsigned int*    , int );
int hline_set(const struct anonymous_typeX27*    , int );
int in_wch(struct anonymous_typeX27*    );
int in_wchnstr(struct anonymous_typeX27*    , int );
int in_wchstr(struct anonymous_typeX27*    );
int innwstr(int*    , int );
int ins_nwstr(const int*    , int );
int ins_wch(const struct anonymous_typeX27*    );
int ins_wstr(const int*    );
int inwstr(int*    );
const char* key_name(int    );
int killwchar(int*    );
int mvadd_wch(int , int , const struct anonymous_typeX27*    );
int mvadd_wchnstr(int , int , const struct anonymous_typeX27*    , int );
int mvadd_wchstr(int , int , const struct anonymous_typeX27*    );
int mvaddnwstr(int , int , const int*    , int );
int mvaddwstr(int , int , const int*    );
int mvget_wch(int , int , unsigned int*    );
int mvget_wstr(int , int , unsigned int*    );
int mvgetn_wstr(int , int , unsigned int*    , int );
int mvhline_set(int , int , const struct anonymous_typeX27*    , int );
int mvin_wch(int , int , struct anonymous_typeX27*    );
int mvin_wchnstr(int , int , struct anonymous_typeX27*    , int );
int mvin_wchstr(int , int , struct anonymous_typeX27*    );
int mvinnwstr(int , int , int*    , int );
int mvins_nwstr(int , int , const int*    , int );
int mvins_wch(int , int , const struct anonymous_typeX27*    );
int mvins_wstr(int , int , const int*    );
int mvinwstr(int , int , int*    );
int mvvline_set(int , int , const struct anonymous_typeX27*    , int );
int mvwadd_wch(struct _win_st*    , int , int , const struct anonymous_typeX27*    );
int mvwadd_wchnstr(struct _win_st*    , int , int , const struct anonymous_typeX27*    , int );
int mvwadd_wchstr(struct _win_st*    , int , int , const struct anonymous_typeX27*    );
int mvwaddnwstr(struct _win_st*    , int , int , const int*    , int );
int mvwaddwstr(struct _win_st*    , int , int , const int*    );
int mvwget_wch(struct _win_st*    , int , int , unsigned int*    );
int mvwget_wstr(struct _win_st*    , int , int , unsigned int*    );
int mvwgetn_wstr(struct _win_st*    , int , int , unsigned int*    , int );
int mvwhline_set(struct _win_st*    , int , int , const struct anonymous_typeX27*    , int );
int mvwin_wch(struct _win_st*    , int , int , struct anonymous_typeX27*    );
int mvwin_wchnstr(struct _win_st*    , int , int , struct anonymous_typeX27*    , int );
int mvwin_wchstr(struct _win_st*    , int , int , struct anonymous_typeX27*    );
int mvwinnwstr(struct _win_st*    , int , int , int*    , int );
int mvwins_nwstr(struct _win_st*    , int , int , const int*    , int );
int mvwins_wch(struct _win_st*    , int , int , const struct anonymous_typeX27*    );
int mvwins_wstr(struct _win_st*    , int , int , const int*    );
int mvwinwstr(struct _win_st*    , int , int , int*    );
int mvwvline_set(struct _win_st*    , int , int , const struct anonymous_typeX27*    , int );
int pecho_wchar(struct _win_st*    , const struct anonymous_typeX27*    );
int setcchar(struct anonymous_typeX27*    , const int*    , const unsigned int    , short , const void* );
int slk_wset(int , const int*    , int );
unsigned int  term_attrs();
int unget_wch(const int    );
int vid_attr(unsigned int    , short , void* );
int vid_puts(unsigned int    , short , void* , int (*anonymous_var_nameY1048)(int)  );
int vline_set(const struct anonymous_typeX27*    , int );
int wadd_wch(struct _win_st*    , const struct anonymous_typeX27*    );
int wadd_wchnstr(struct _win_st*    , const struct anonymous_typeX27*    , int );
int wadd_wchstr(struct _win_st*    , const struct anonymous_typeX27*    );
int waddnwstr(struct _win_st*    , const int*    , int );
int waddwstr(struct _win_st*    , const int*    );
int wbkgrnd(struct _win_st*    , const struct anonymous_typeX27*    );
void wbkgrndset(struct _win_st*    , const struct anonymous_typeX27*    );
int wborder_set(struct _win_st*    , const struct anonymous_typeX27*    , const struct anonymous_typeX27*    , const struct anonymous_typeX27*    , const struct anonymous_typeX27*    , const struct anonymous_typeX27*    , const struct anonymous_typeX27*    , const struct anonymous_typeX27*    , const struct anonymous_typeX27*    );
int wecho_wchar(struct _win_st*    , const struct anonymous_typeX27*    );
int wget_wch(struct _win_st*    , unsigned int*    );
int wget_wstr(struct _win_st*    , unsigned int*    );
int wgetbkgrnd(struct _win_st*    , struct anonymous_typeX27*    );
int wgetn_wstr(struct _win_st*    , unsigned int*    , int );
int whline_set(struct _win_st*    , const struct anonymous_typeX27*    , int );
int win_wch(struct _win_st*    , struct anonymous_typeX27*    );
int win_wchnstr(struct _win_st*    , struct anonymous_typeX27*    , int );
int win_wchstr(struct _win_st*    , struct anonymous_typeX27*    );
int winnwstr(struct _win_st*    , int*    , int );
int wins_nwstr(struct _win_st*    , const int*    , int );
int wins_wch(struct _win_st*    , const struct anonymous_typeX27*    );
int wins_wstr(struct _win_st*    , const int*    );
int winwstr(struct _win_st*    , int*    );
int*  wunctrl(struct anonymous_typeX27*    );
int wvline_set(struct _win_st*    , const struct anonymous_typeX27*    , int );
unsigned int  term_attrs_sp(struct screen*    );
int erasewchar_sp(struct screen*    , int*    );
int killwchar_sp(struct screen*    , int*    );
int unget_wch_sp(struct screen*    , const int    );
int vid_attr_sp(struct screen*    , unsigned int    , short , void* );
int vid_puts_sp(struct screen*    , unsigned int    , short , void* , int (*anonymous_var_nameY1128)(struct screen* ,int)  );
int*  wunctrl_sp(struct screen*    , struct anonymous_typeX27*    );
_Bool has_mouse();
int getmouse(struct anonymous_typeX28*    );
int ungetmouse(struct anonymous_typeX28*    );
unsigned int  mousemask(unsigned int    , unsigned int*    );
_Bool wenclose(const struct _win_st*    , int , int );
int mouseinterval(int );
_Bool wmouse_trafo(const struct _win_st*    , int* , int* , _Bool );
_Bool mouse_trafo(int* , int* , _Bool );
_Bool has_mouse_sp(struct screen*    );
int getmouse_sp(struct screen*    , struct anonymous_typeX28*    );
int ungetmouse_sp(struct screen*    , struct anonymous_typeX28*    );
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
char* _tracecchar_t(const struct anonymous_typeX27*    );
char* _tracecchar_t2(int , const struct anonymous_typeX27*    );
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
long  int  getdirentries(int __fd, char* __restrict __buf, unsigned long  __nbytes  , long  int* __restrict  __basep  );
long  int  getdirentries64(int __fd, char* __restrict __buf, unsigned long  __nbytes  , long  int* __restrict  __basep  );
int versionsort(const struct dirent**  __e1  , const struct dirent**  __e2  ) __attribute__ ((__pure__)) ;
int versionsort64(const struct dirent64**  __e1  , const struct dirent64**  __e2  ) __attribute__ ((__pure__)) ;
long  int  getdents64(int __fd, void* __buffer, unsigned long  __length  );
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
long  int  read(int __fd, void* __buf, unsigned long  __nbytes  );
long  int  write(int __fd, const void* __buf, unsigned long  __n  );
long  int  pread(int __fd, void* __buf, unsigned long  __nbytes  , long  int  __offset  );
long  int  pwrite(int __fd, const void* __buf, unsigned long  __n  , long  int  __offset  );
long  int  pread64(int __fd, void* __buf, unsigned long  __nbytes  , long  int  __offset  );
long  int  pwrite64(int __fd, const void* __buf, unsigned long  __n  , long  int  __offset  );
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
char* getcwd(char* __buf, unsigned long  __size  );
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
unsigned long  confstr(int __name, char* __buf, unsigned long  __len  );
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
int ttyname_r(int __fd, char* __buf, unsigned long  __buflen  );
int isatty(int __fd);
int ttyslot();
int link(const char* __from, const char* __to);
int linkat(int __fromfd, const char* __from, int __tofd, const char* __to, int __flags);
int symlink(const char* __from, const char* __to);
long  int  readlink(const char* __restrict __path, char* __restrict __buf, unsigned long  __len  );
int symlinkat(const char* __from, int __tofd, const char* __to);
long  int  readlinkat(int __fd, const char* __restrict __path, char* __restrict __buf, unsigned long  __len  );
int unlink(const char* __name);
int unlinkat(int __fd, const char* __name, int __flag);
int rmdir(const char* __path);
int  tcgetpgrp(int __fd);
int tcsetpgrp(int __fd, int  __pgrp_id  );
char* getlogin();
int getlogin_r(char* __name, unsigned long  __name_len  );
int setlogin(const char* __name);
int getopt(int ___argc, char** const ___argv, const char* __shortopts);
int gethostname(char* __name, unsigned long  __len  );
int sethostname(const char* __name, unsigned long  __len  );
int sethostid(long  int __id);
int getdomainname(char* __name, unsigned long  __len  );
int setdomainname(const char* __name, unsigned long  __len  );
int vhangup();
int revoke(const char* __file);
int profil(unsigned short int* __sample_buffer, unsigned long  __size  , unsigned long  __offset  , unsigned int __scale);
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
long  int  copy_file_range(int __infd, long  int*  __pinoff  , int __outfd, long  int*  __poutoff  , unsigned long  __length  , unsigned int __flags);
int fdatasync(int __fildes);
char* crypt(const char* __key, const char* __salt);
void swab(const void* __restrict __from, void* __restrict __to, long  int  __n  );
int getentropy(void* __buffer, unsigned long  __length  );
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
void rl_callback_handler_install(const char* , void (*(*anonymous_var_nameY1474))(char*)  );
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
int rl_add_defun(const char* , int (*(*anonymous_var_nameY1577))(int,int)  , int );
int rl_bind_key(int , int (*(*anonymous_var_nameY1580))(int,int)  );
int rl_bind_key_in_map(int , int (*(*anonymous_var_nameY1582))(int,int)  , struct _keymap_entry*    );
int rl_unbind_key(int );
int rl_unbind_key_in_map(int , struct _keymap_entry*    );
int rl_bind_key_if_unbound(int , int (*(*anonymous_var_nameY1588))(int,int)  );
int rl_bind_key_if_unbound_in_map(int , int (*(*anonymous_var_nameY1590))(int,int)  , struct _keymap_entry*    );
int rl_unbind_function_in_map(int (*(*anonymous_var_nameY1592))(int,int)  , struct _keymap_entry*    );
int rl_unbind_command_in_map(const char* , struct _keymap_entry*    );
int rl_bind_keyseq(const char* , int (*(*anonymous_var_nameY1597))(int,int)  );
int rl_bind_keyseq_in_map(const char* , int (*(*anonymous_var_nameY1599))(int,int)  , struct _keymap_entry*    );
int rl_bind_keyseq_if_unbound(const char* , int (*(*anonymous_var_nameY1602))(int,int)  );
int rl_bind_keyseq_if_unbound_in_map(const char* , int (*(*anonymous_var_nameY1604))(int,int)  , struct _keymap_entry*    );
int rl_generic_bind(int , const char* , char* , struct _keymap_entry*    );
char* rl_variable_value(const char* );
int rl_variable_bind(const char* , const char* );
int rl_set_key(const char* , int (*(*anonymous_var_nameY1614))(int,int)  , struct _keymap_entry*    );
int rl_macro_bind(const char* , const char* , struct _keymap_entry*    );
int rl_translate_keyseq(const char* , char* , int* );
char* rl_untranslate_keyseq(int );
int (*(*rl_named_function(const char* )))(int,int) ;
int (*(*rl_function_of_keyseq(const char* , struct _keymap_entry*    , int* )))(int,int) ;
int (*(*rl_function_of_keyseq_len(const char* , unsigned long    , struct _keymap_entry*    , int* )))(int,int) ;
int rl_trim_arg_from_keyseq(const char* , unsigned long    , struct _keymap_entry*    );
void rl_list_funmap_names();
char** rl_invoking_keyseqs_in_map(int (*(*anonymous_var_nameY1634))(int,int)  , struct _keymap_entry*    );
char** rl_invoking_keyseqs(int (*(*anonymous_var_nameY1636))(int,int)  );
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
int rl_add_funmap_entry(const char* , int (*(*anonymous_var_nameY1655))(int,int)  );
const char** rl_funmap_names();
void rl_initialize_funmap();
void rl_push_macro_input(char* );
void rl_add_undo(enum undo_code , int , int , char* );
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
char** rl_completion_matches(const char* , char* (*(*anonymous_var_nameY1704))(const char*,int)  );
char* rl_username_completion_function(const char* , int );
char* rl_filename_completion_function(const char* , int );
int rl_completion_mode(int (*(*anonymous_var_nameY1709))(int,int)  );
int rl_save_state(struct readline_state*    );
int rl_restore_state(struct readline_state*    );
int clock_adjtime(int  __clock_id  , struct timex*  __utx  );
long  int  clock();
long  int  time(long  int*  __timer  );
double difftime(long  int  __time1  , long  int  __time0  );
long  int  mktime(struct tm*  __tp  );
unsigned long  strftime(char* __restrict __s, unsigned long  __maxsize  , const char* __restrict __format, const struct tm* __restrict  __tp  );
char* strptime(const char* __restrict __s, const char* __restrict __fmt, struct tm*  __tp  );
unsigned long  strftime_l(char* __restrict __s, unsigned long  __maxsize  , const char* __restrict __format, const struct tm* __restrict  __tp  , struct __locale_struct*  __loc  );
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
_Bool die(const char* msg);
void come_heap_final();
void* alloc_from_pages(unsigned long  size  );
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  size  , const char* sname, int sline, const char* class_name);
char* come_dynamic_typeof(void* mem);
unsigned long  dynamic_sizeof(void* mem);
void* come_calloc(unsigned long  count  , unsigned long  size  , const char* sname, int sline, const char* class_name);
void come_free(void* mem);
void* come_memdup(void* block, const char* sname, int sline, const char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj);
void xassert(const char* msg, _Bool test);
void* come_null_checker(void* mem, const char* sname, int sline);
char*  __builtin_string(const char* str);
static struct slice$1char$* slice$1char$_initialize(struct slice$1char$* self, char* p, unsigned long  len  );
static void slice$1char$$p_finalize(struct slice$1char$* self);
struct slice$1char$* string_to_slice(char* self);
struct slice$1char$* charp_to_slice(char* self);
static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self);
struct smart_pointer$1char$* buffer_to_pointer(struct buffer*  self  );
static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self);
struct smart_pointer$1int$* buffer_to_int_pointer(struct buffer*  self  );
static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self);
struct smart_pointer$1short$* buffer_to_short_pointer(struct buffer*  self  );
static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self);
struct smart_pointer$1long$* buffer_to_long_pointer(struct buffer*  self  );
struct buffer*  buffer_initialize(struct buffer*  self  );
struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  size  );
void buffer_finalize(struct buffer*  self  );
struct buffer*  buffer_clone(struct buffer*  self  );
_Bool buffer_equals(struct buffer*  left  , struct buffer*  right  );
int buffer_length(struct buffer*  self  );
void buffer_reset(struct buffer*  self  );
void buffer_trim(struct buffer*  self  , int len);
struct buffer*  buffer_append(struct buffer*  self  , const char* mem, unsigned long  size  );
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
struct buffer*  chara_to_buffer(char* self, unsigned long  len  );
struct buffer*  charpa_to_buffer(char** self, unsigned long  len  );
struct buffer*  shorta_to_buffer(short* self, unsigned long  len  );
struct buffer*  inta_to_buffer(int* self, unsigned long  len  );
struct buffer*  longa_to_buffer(long* self, unsigned long  len  );
struct buffer*  floata_to_buffer(float* self, unsigned long  len  );
struct buffer*  doublea_to_buffer(double* self, unsigned long  len  );
char*  buffer_printable(struct buffer*  self  );
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$* chara_to_list(char* self, unsigned long  len  );
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1char$p* charpa_to_list(char** self, unsigned long  len  );
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1short$* shorta_to_list(short* self, unsigned long  len  );
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1int$* inta_to_list(int* self, unsigned long  len  );
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1long$* longa_to_list(long* self, unsigned long  len  );
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1float$* floata_to_list(float* self, unsigned long  len  );
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
struct list$1double$* doublea_to_list(double* self, unsigned long  len  );
_Bool _Bool_equals(_Bool self, _Bool right);
_Bool char_equals(char self, char right);
_Bool short_equals(short self, short right);
_Bool int_equals(int self, int right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(unsigned long  self  , unsigned long  right  );
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
_Bool charpa_contained(const char* self[], unsigned long  len  , const char* str);
unsigned long  shorta_length(short* self, unsigned long  len  );
unsigned long  inta_length(int* self, unsigned long  len  );
unsigned long  longa_length(long* self, unsigned long  len  );
unsigned long  floata_length(float* self, unsigned long  len  );
unsigned long  doublea_length(double* self, unsigned long  len  );
unsigned int _Bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  value  );
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
unsigned long  size_t_clone(unsigned long  self  );
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
char*  size_t_to_string(unsigned long  self  );
char*  float_to_string(float self);
char*  double_to_string(double self);
char*  string_to_string(char* self);
char*  charp_to_string(const char* self);
int _Bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  left  , unsigned long  right  );
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
int*  __builtin_wstring(const char* str);
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
int charp_index(const char* str, const char* search_str, int default_value);
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
unsigned long  xwcslen(const int*  wstr  );
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
int string_index(const char* str, const char* search_str, int default_value);
char*  string_replace(char* self, int index, char c);
char*  string_multiply(const char* str, int n);
struct list$1char$ph* string_split_str(const char* self, const char* str);
int*  string_to_wstring(const char* str);
char*  charp_chomp(const char* str);
_Bool wchar_tp_equals(const int*  left  , const int*  right  );
_Bool wchar_tp_operator_equals(const int*  left  , const int*  right  );
_Bool wchar_tp_operator_not_equals(const int*  left  , const int*  right  );
char*  FILE_read(struct _IO_FILE*  f  );
int FILE_write(struct _IO_FILE*  f  , const char* str);
int FILE_fclose(struct _IO_FILE*  f  );
struct _IO_FILE*  FILE_fprintf(struct _IO_FILE*  f  , const char* msg, ...);
int charp_write(const char* self, const char* file_name, _Bool append);
char*  charp_read(const char* file_name);
struct list$1char$ph* FILE_readlines(struct _IO_FILE*  f  );
_Bool xiswalpha(int  c  );
_Bool xiswblank(int  c  );
_Bool xiswdigit(int  c  );
_Bool xiswalnum(int  c  );
_Bool xiswascii(int  c  );
// uniq global variable
struct neo_frame*  neo_current_frame  =((void*)0);

struct sMemHeader*  gAllocMem  =(void*)0;

int gComeDebugLib=0;

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
int xgetmaxx()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xgetmaxx"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct winsize*  ws  ;
    int result;
    int __result_obj__0;
    ws=(struct winsize* )come_increment_ref_count((struct winsize *)come_calloc(1, sizeof(struct winsize )*(1), (void*)0, 30, "struct winsize* "));
    ioctl(1,0x5413,ws);
    result=((struct winsize* )come_null_checker(ws, "main.nc", 33))->ws_col;
    if(result==-1||result==0) {
        __result_obj__0 = getmaxx(stdscr);
        come_call_finalizer(winsize_finalize, ws, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else {
        __result_obj__0 = result;
        come_call_finalizer(winsize_finalize, ws, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __result_obj__0 = result;
    come_call_finalizer(winsize_finalize, ws, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void winsize_finalize(struct winsize*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "winsize_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

int xgetmaxy()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xgetmaxy"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct winsize*  ws  ;
    int result;
    int __result_obj__0;
    ws=(struct winsize* )come_increment_ref_count((struct winsize *)come_calloc(1, sizeof(struct winsize )*(1), (void*)0, 47, "struct winsize* "));
    ioctl(1,0x5413,ws);
    result=((struct winsize* )come_null_checker(ws, "main.nc", 50))->ws_row;
    if(result==-1||result==0) {
        __result_obj__0 = getmaxy(stdscr);
        come_call_finalizer(winsize_finalize, ws, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else {
        __result_obj__0 = result;
        come_call_finalizer(winsize_finalize, ws, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __result_obj__0 = result;
    come_call_finalizer(winsize_finalize, ws, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static int lambda1(char* left, char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda1"; neo_current_frame = &fr;
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
    memset(&entry, 0, sizeof(entry));
    ((struct sInfo* )come_null_checker(info, "main.nc", 64))->virtual_dir=(_Bool)0;
    __dec_obj1=((struct sInfo* )come_null_checker(info, "main.nc", 65))->files,
    ((struct sInfo* )come_null_checker(info, "main.nc", 65))->files=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 65, "struct list$1char$ph*"))), "main.nc", 65)))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    __dec_obj2=((struct sInfo* )come_null_checker(info, "main.nc", 66))->selected_files,
    ((struct sInfo* )come_null_checker(info, "main.nc", 66))->selected_files=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 66, "struct list$1char$ph*"))), "main.nc", 66)))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    dir=opendir(((struct sInfo* )come_null_checker(info, "main.nc", 68))->path);
    if(dir==((void*)0)) {
        ((struct sInfo* )come_null_checker(info, "main.nc", 71))->cursor=0;
        ((struct sInfo* )come_null_checker(info, "main.nc", 72))->page=0;
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 73))->files, "main.nc", 73)),(char* )come_increment_ref_count(__builtin_string("NO FILES")));
        neo_current_frame = fr.prev;
        return;
    }
    while(entry=readdir(dir)) {
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 79))->files, "main.nc", 79)),(char* )come_increment_ref_count(__builtin_string(((struct dirent* )come_null_checker(entry, "main.nc", 79))->d_name)));
    }
    closedir(dir);
    __dec_obj9=((struct sInfo* )come_null_checker(info, "main.nc", 84))->files,
    ((struct sInfo* )come_null_checker(info, "main.nc", 84))->files=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_sort_with_lambda(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 84))->files, "main.nc", 84)),lambda1));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj9,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1354))->head=((void*)0);
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1355))->tail=((void*)0);
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1356))->len=0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct list_item$1char$ph*)come_null_checker(self, "list_item$1char$ph$p_finalize", 0))->item!=((void*)0)) {
        (((struct list_item$1char$ph*)come_null_checker(self, "list_item$1char$ph$p_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1char$ph*)come_null_checker(self, "list_item$1char$ph$p_finalize", 0))->item, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

static void list$1char$ph_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1491))->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1492, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1494))->prev=((void*)0);
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1495))->next=((void*)0);
        __dec_obj3=((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=(char* )come_increment_ref_count(item);
        __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_0=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1502, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_0, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_0, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        __dec_obj4=((struct list_item$1char$ph*)come_null_checker(litem_0, "/usr/local/include/neo-c.h", 1506))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_0, "/usr/local/include/neo-c.h", 1506))->item=(char* )come_increment_ref_count(item);
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_0;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_0;
    }
    else {
        litem_1=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1512, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        __dec_obj5=((struct list_item$1char$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1516))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_1, "/usr/local/include/neo-c.h", 1516))->item=(char* )come_increment_ref_count(item);
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_1;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_1;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_sort_with_lambda(struct list$1char$ph* self, int (*compare)(char* ,char* ))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_sort_with_lambda"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 2229, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 2229)))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=list$1char$ph_merge_sort_with_lambda(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2231)),compare))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2189))->head==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=list$1char$ph_clone(self))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2192))->head, "/usr/local/include/neo-c.h", 2192))->next==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=list$1char$ph_clone(self))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    list1=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 2196, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 2196)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    list2=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 2197, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 2197)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2199))->head;
    while((_Bool)1) {
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(list1, "/usr/local/include/neo-c.h", 2202)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2202))->item, "/usr/local/include/neo-c.h", 2202, "char* ")));
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(list2, "/usr/local/include/neo-c.h", 2203)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2203))->next, "/usr/local/include/neo-c.h", 2203))->item, "/usr/local/include/neo-c.h", 2203, "char* ")));
        if(((struct list_item$1char$ph*)come_null_checker(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2205))->next, "/usr/local/include/neo-c.h", 2205))->next==((void*)0)) {
            break;
        }
        it=((struct list_item$1char$ph*)come_null_checker(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2209))->next, "/usr/local/include/neo-c.h", 2209))->next;
        if(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2211))->next==((void*)0)) {
            if(1) {
                list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(list1, "/usr/local/include/neo-c.h", 2213)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2213))->item, "/usr/local/include/neo-c.h", 2213, "char* ")));
            }
            else {
                list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(list1, "/usr/local/include/neo-c.h", 2216)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2216))->item, "/usr/local/include/neo-c.h", 2216, "char* ")));
            }
            break;
        }
    }
    left_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_merge_sort_with_lambda(((struct list$1char$ph*)come_null_checker(list1, "/usr/local/include/neo-c.h", 2222)),compare));
    right_list=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_merge_sort_with_lambda(((struct list$1char$ph*)come_null_checker(list2, "/usr/local/include/neo-c.h", 2223)),compare));
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=list$1char$ph_merge_list_with_lambda(((struct list$1char$ph*)come_null_checker(left_list, "/usr/local/include/neo-c.h", 2225)),right_list,compare))));
    come_call_finalizer(list$1char$ph$p_finalize, list1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, list2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, left_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, right_list, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1386, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 1386)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1388))->head;
    while(it!=((void*)0)) {
        if(1) {
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1391)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1391))->item, "/usr/local/include/neo-c.h", 1391, "char* ")));
        }
        else {
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1394)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1394))->item, "/usr/local/include/neo-c.h", 1394, "char* ")));
        }
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1397))->next;
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    if(self==((void*)0)) {
        __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1406))->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1407, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1409))->prev=((void*)0);
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1410))->next=((void*)0);
        __dec_obj6=((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1411))->item=(char* )come_increment_ref_count(item);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1413))->tail=litem;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1414))->head=litem;
    }
    else if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1416))->len==1) {
        litem_2=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1417, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1419))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1419))->head;
        ((struct list_item$1char$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1420))->next=((void*)0);
        __dec_obj7=((struct list_item$1char$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1421))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_2, "/usr/local/include/neo-c.h", 1421))->item=(char* )come_increment_ref_count(item);
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1423))->tail=litem_2;
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1424))->head, "/usr/local/include/neo-c.h", 1424))->next=litem_2;
    }
    else {
        litem_3=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), (void*)0, 1427, "struct list_item$1char$ph*"))));
        ((struct list_item$1char$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1429))->prev=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1429))->tail;
        ((struct list_item$1char$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1430))->next=((void*)0);
        __dec_obj8=((struct list_item$1char$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1431))->item,
        ((struct list_item$1char$ph*)come_null_checker(litem_3, "/usr/local/include/neo-c.h", 1431))->item=(char* )come_increment_ref_count(item);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0);
        ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1433))->tail, "/usr/local/include/neo-c.h", 1433))->next=litem_3;
        ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1434))->tail=litem_3;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1437))->len++;
    __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
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
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 2117, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 2117)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    it=((struct list$1char$ph*)come_null_checker(left, "/usr/local/include/neo-c.h", 2119))->head;
    it2=((struct list$1char$ph*)come_null_checker(right, "/usr/local/include/neo-c.h", 2120))->head;
    while((_Bool)1) {
        if(it&&it2) {
            if(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2124))->item==((void*)0)) {
                it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2125))->next;
            }
            else if(((struct list_item$1char$ph*)come_null_checker(it2, "/usr/local/include/neo-c.h", 2127))->item==((void*)0)) {
                it2=((struct list_item$1char$ph*)come_null_checker(it2, "/usr/local/include/neo-c.h", 2128))->next;
            }
            else if(compare(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2130))->item,((struct list_item$1char$ph*)come_null_checker(it2, "/usr/local/include/neo-c.h", 2130))->item)<=0) {
                if(1) {
                    list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 2133)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2133))->item, "/usr/local/include/neo-c.h", 2133, "char* ")));
                }
                else {
                    list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 2136)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2136))->item, "/usr/local/include/neo-c.h", 2136, "char* ")));
                }
                it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2139))->next;
            }
            else {
                if(1) {
                    list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 2143)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it2, "/usr/local/include/neo-c.h", 2143))->item, "/usr/local/include/neo-c.h", 2143, "char* ")));
                }
                else {
                    list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 2146)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it2, "/usr/local/include/neo-c.h", 2146))->item, "/usr/local/include/neo-c.h", 2146, "char* ")));
                }
                it2=((struct list_item$1char$ph*)come_null_checker(it2, "/usr/local/include/neo-c.h", 2150))->next;
            }
        }
        if(it==((void*)0)) {
            if(it2!=((void*)0)) {
                while(it2!=((void*)0)) {
                    if(1) {
                        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 2158)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it2, "/usr/local/include/neo-c.h", 2158))->item, "/usr/local/include/neo-c.h", 2158, "char* ")));
                    }
                    else {
                        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 2161)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it2, "/usr/local/include/neo-c.h", 2161))->item, "/usr/local/include/neo-c.h", 2161, "char* ")));
                    }
                    it2=((struct list_item$1char$ph*)come_null_checker(it2, "/usr/local/include/neo-c.h", 2164))->next;
                }
            }
            break;
        }
        else if(it2==((void*)0)) {
            if(it!=((void*)0)) {
                while(it!=((void*)0)) {
                    if(1) {
                        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 2173)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2173))->item, "/usr/local/include/neo-c.h", 2173, "char* ")));
                    }
                    else {
                        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 2176)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2176))->item, "/usr/local/include/neo-c.h", 2176, "char* ")));
                    }
                    it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2179))->next;
                }
            }
            break;
        }
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static int lambda2(char* left, char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "lambda2"; neo_current_frame = &fr;
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
    ((struct sInfo* )come_null_checker(info, "main.nc", 89))->virtual_dir=(_Bool)1;
    __dec_obj10=((struct sInfo* )come_null_checker(info, "main.nc", 90))->selected_files,
    ((struct sInfo* )come_null_checker(info, "main.nc", 90))->selected_files=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 90, "struct list$1char$ph*"))), "main.nc", 90)))));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj10,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    history_fname=(char* )come_increment_ref_count(charp_operator_add(((char*)come_null_checker(getenv("HOME"), "main.nc", 91)),"/mf_history"));
    read_history(history_fname);
    line=readline(((char* )(__right_value0=charp_operator_add(((char*)come_null_checker(getenv("PWD"), "main.nc", 95))," > "))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    if(line==((void*)0)) {
        (history_fname = come_decrement_ref_count(history_fname, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return;
    }
    add_history(line);
    write_history(history_fname);
    cmdline=(char* )come_increment_ref_count(__builtin_string(line));
    free(line);
    char buf[8192];
    memset(&buf, 0, sizeof(buf));
    f=popen(cmdline,"r");
    if(f==((void*)0)) {
        (history_fname = come_decrement_ref_count(history_fname, (void*)0, (void*)0, 0, 0, (void*)0));
        (cmdline = come_decrement_ref_count(cmdline, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return;
    }
    list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 114))->files, "main.nc", 114)),(char* )come_increment_ref_count(__builtin_string(".")));
    list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 115))->files, "main.nc", 115)),(char* )come_increment_ref_count(__builtin_string("..")));
    while(1) {
        char file[4096];
        memset(&file, 0, sizeof(file));
        result=fgets(file,4096,f);
        if(result==((void*)0)) {
            break;
        }
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 125))->files, "main.nc", 125)),(char* )come_increment_ref_count(string_chomp(((char* )come_null_checker(((char* )(__right_value0=__builtin_string(result))), "main.nc", 125)))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    }
    if(pclose(f)<0) {
        (history_fname = come_decrement_ref_count(history_fname, (void*)0, (void*)0, 0, 0, (void*)0));
        (cmdline = come_decrement_ref_count(cmdline, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return;
    }
    __dec_obj11=((struct sInfo* )come_null_checker(info, "main.nc", 131))->files,
    ((struct sInfo* )come_null_checker(info, "main.nc", 131))->files=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_sort_with_lambda(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 131))->files, "main.nc", 131)),lambda2));
    come_call_finalizer(list$1char$ph_finalize, __dec_obj11,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    (history_fname = come_decrement_ref_count(history_fname, (void*)0, (void*)0, 0, 0, (void*)0));
    (cmdline = come_decrement_ref_count(cmdline, (void*)0, (void*)0, 0, 0, (void*)0));
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
    struct list$1char$ph* o2_saved;
    char*  it  ;
    _Bool __result_obj__0;
    absolute_path=realpath(path,((void*)0));
    absolute_path2=(char* )come_increment_ref_count(__builtin_string(absolute_path));
    free(absolute_path);
    __dec_obj12=((struct sInfo* )come_null_checker(info, "main.nc", 144))->path,
    ((struct sInfo* )come_null_checker(info, "main.nc", 144))->path=(char* )come_increment_ref_count(absolute_path2);
    __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0);
    read_dir(info);
    chdir(((struct sInfo* )come_null_checker(info, "main.nc", 147))->path);
    setenv("PWD",((struct sInfo* )come_null_checker(info, "main.nc", 148))->path,1);
    if(cursor_file) {
        i=0;
        for(o2_saved=(struct list$1char$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "main.nc", 152))->files),it=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 152)));!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 152)));it=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 152)))){
            if(strcmp(it,cursor_file)==0) {
                ((struct sInfo* )come_null_checker(info, "main.nc", 154))->cursor=i;
                fix_cursor(info);
                break;
            }
            i++;
        }
        come_call_finalizer(list$1char$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        ((struct sInfo* )come_null_checker(info, "main.nc", 163))->cursor=0;
        ((struct sInfo* )come_null_checker(info, "main.nc", 164))->page=0;
    }
    __result_obj__0 = (_Bool)1;
    (absolute_path2 = come_decrement_ref_count(absolute_path2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_4  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1560))->it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1560))->head;
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1562))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1563))->it, "/usr/local/include/neo-c.h", 1563))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_4,0,sizeof(char* ));
    __result_obj__0 = result_4;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_end"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==((void*)0)||((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1590))->it==((void*)0);
    neo_current_frame = fr.prev;
}

static char*  list$1char$ph_next(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_5  ;
    if(self==((void*)0)||((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1572))->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1578))->it=((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1578))->it, "/usr/local/include/neo-c.h", 1578))->next;
    if(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1580))->it) {
        __result_obj__0 = ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1581))->it, "/usr/local/include/neo-c.h", 1581))->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_5,0,sizeof(char* ));
    __result_obj__0 = result_5;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void fix_cursor(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "fix_cursor"; neo_current_frame = &fr;
    int maxx;
    int maxy;
    maxx=xgetmaxx();
    maxy=xgetmaxy()-1;
    if(((struct sInfo* )come_null_checker(info, "main.nc", 176))->cursor>=list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 176))->files, "main.nc", 176)))) {
        ((struct sInfo* )come_null_checker(info, "main.nc", 177))->cursor=list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 177))->files, "main.nc", 177)))-1;
    }
    if(((struct sInfo* )come_null_checker(info, "main.nc", 179))->cursor<0) {
        ((struct sInfo* )come_null_checker(info, "main.nc", 180))->cursor=0;
    }
    ((struct sInfo* )come_null_checker(info, "main.nc", 183))->page=((struct sInfo* )come_null_checker(info, "main.nc", 183))->cursor/(3*maxy);
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
    return ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1641))->len;
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
    memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
    maxx=xgetmaxx();
    maxy=xgetmaxy()-1;
    werase(stdscr);
    files_in_one_page=maxy*3;
    head=((struct sInfo* )come_null_checker(info, "main.nc", 195))->page*files_in_one_page;
    tail=(((struct sInfo* )come_null_checker(info, "main.nc", 196))->page+1)*files_in_one_page;
    ({    __current_stack1__.info = &info;
    __current_stack1__.maxx = &maxx;
    __current_stack1__.maxy = &maxy;
    __current_stack1__.files_in_one_page = &files_in_one_page;
    __current_stack1__.head = &head;
    __current_stack1__.tail = &tail;
    })    ,    list$1char$ph_each(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=list$1char$ph_sublist(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 198))->files, "main.nc", 198)),head,tail))), "main.nc", 251)),&__current_stack1__,(void*)method_block1_mainnc);
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    wattr_on(stdscr,(unsigned int )((((unsigned int )((1U))<<((10)+8)))),((void*)0));
    mvprintw(maxy,0,"%s page %d files %d head %d tail %d press ? for manual",((struct sInfo* )come_null_checker(info, "main.nc", 252))->path,((struct sInfo* )come_null_checker(info, "main.nc", 252))->page,list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 252))->files, "main.nc", 252))),head,tail);
    wattr_off(stdscr,(unsigned int )((((unsigned int )((1U))<<((10)+8)))),((void*)0));
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
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1972, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 1972)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(begin<0) {
        begin+=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1975))->len;
    }
    if(tail<0) {
        tail+=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1979))->len+1;
    }
    if(begin<0) {
        begin=0;
    }
    if(begin>=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1986))->len) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1987, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 1987)))))));
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    if(tail>=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1990))->len) {
        tail=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1991))->len;
    }
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1994))->head;
    i=0;
    while(it!=((void*)0)) {
        if(i>=begin&&i<tail) {
            list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1998)),(char* )come_increment_ref_count(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1998))->item));
        }
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 2000))->next;
        i++;
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_each(struct list$1char$ph* self, void* parent, void (*block)(void*,char* ,int,_Bool*))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_each"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    struct list_item$1char$ph* it;
    int i;
    _Bool end_flag;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1598))->head;
    i=0;
    while(it!=((void*)0)) {
        end_flag=(_Bool)0;
        block(parent,(char* )come_increment_ref_count(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1602))->item),i,&end_flag);
        if(end_flag==(_Bool)1) {
            break;
        }
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1607))->next;
        i++;
    }
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
    memset(&stat_, 0, sizeof(stat_));
    path=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value5=string_operator_add(((char* )come_null_checker(((struct sInfo* )come_null_checker((*(parent->info)), "main.nc", 200))->path, "main.nc", 200)),((char* )(__right_value4=__builtin_string("/")))))), "main.nc", 200)),it));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
    (void)(stat)(path,&stat_);
    is_dir=((((stat_.st_mode))&0170000)==(0040000));
    selected=list$1char$ph_contained(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker((*(parent->info)), "main.nc", 206))->selected_files, "main.nc", 206)),it,(_Bool)0);
    index=it2;
    cols=(*(parent->maxx))/3;
    x=(index/(*(parent->maxy)))*cols;
    y=index%(*(parent->maxy));
    if(it2+(*(parent->head))==((struct sInfo* )come_null_checker((*(parent->info)), "main.nc", 212))->cursor) {
        wattr_on(stdscr,(unsigned int )((((unsigned int )((1U))<<((10)+8)))),((void*)0));
        if(selected) {
            if(is_dir) {
                mvprintw(y,x,"* %s/",((char* )(__right_value0=charp_substring(((char* )come_null_checker(it, "main.nc", 216)),0,cols-3))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
                mvprintw(y,x,"* %s",((char* )(__right_value0=charp_substring(((char* )come_null_checker(it, "main.nc", 219)),0,cols-2))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            }
        }
        else {
            if(is_dir) {
                mvprintw(y,x,"%s/",((char* )(__right_value0=charp_substring(((char* )come_null_checker(it, "main.nc", 224)),0,cols-1))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
                mvprintw(y,x,"%s",((char* )(__right_value0=charp_substring(((char* )come_null_checker(it, "main.nc", 227)),0,cols))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            }
        }
        wattr_off(stdscr,(unsigned int )((((unsigned int )((1U))<<((10)+8)))),((void*)0));
    }
    else {
        if(selected) {
            if(is_dir) {
                mvprintw(y,x,"* %s/",((char* )(__right_value0=charp_substring(((char* )come_null_checker(it, "main.nc", 235)),0,cols-3))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
                mvprintw(y,x,"* %s",((char* )(__right_value0=charp_substring(((char* )come_null_checker(it, "main.nc", 238)),0,cols-2))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            }
        }
        else {
            if(is_dir) {
                mvprintw(y,x,"%s/",((char* )(__right_value0=charp_substring(((char* )come_null_checker(it, "main.nc", 243)),0,cols-1))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
                mvprintw(y,x,"%s",((char* )(__right_value0=charp_substring(((char* )come_null_checker(it, "main.nc", 246)),0,cols))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            }
        }
    }
    (it = come_decrement_ref_count(it, (void*)0, (void*)0, 0, 0, (void*)0));
    (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(stat_finalize, (&stat_), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
}

static _Bool list$1char$ph_contained(struct list$1char$ph* self, char*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_contained"; neo_current_frame = &fr;
    char*  it  ;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    for(it=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2108)));!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2108)));it=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 2108)))){
        if((!by_pointer&&string_equals(((char* )come_null_checker(it, "/usr/local/include/neo-c.h", 2109)),item))||(by_pointer&&it==item)) {
            neo_current_frame = fr.prev;
            return (_Bool)1;
        }
    }
    neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

static void stat_finalize(struct stat*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "stat_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

char*  cursor_path(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "cursor_path"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* file_name;
    char*  __result_obj__0  ;
    file_name=((char* )(__right_value0=list$1char$ph_item(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 261))->files, "main.nc", 261)),((struct sInfo* )come_null_checker(info, "main.nc", 261))->cursor,((void*)0))));
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%s/%s",((struct sInfo* )come_null_checker(info, "main.nc", 262))->path,file_name))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static char*  list$1char$ph_item(struct list$1char$ph* self, int position, char*  default_value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_item"; neo_current_frame = &fr;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(default_value);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(position<0) {
        position+=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1620))->len;
    }
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1623))->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
            __result_obj__0 = (char* )come_increment_ref_count(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1627))->item);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
            return __result_obj__0;
        }
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1629))->next;
        i++;
    }
    __result_obj__0 = (char* )come_increment_ref_count(default_value);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  cursor_file(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "cursor_file"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=__builtin_string(((char* )(__right_value0=list$1char$ph_item(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 267))->files, "main.nc", 267)),((struct sInfo* )come_null_checker(info, "main.nc", 267))->cursor,((void*)0))))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  selected_files(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "selected_files"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    struct list$1char$ph* o2_saved;
    char*  it  ;
    char*  __result_obj__0  ;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 272, "struct buffer* "))), "main.nc", 272)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(o2_saved=(struct list$1char$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "main.nc", 273))->selected_files),it=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 273)));!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 273)));it=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 273)))){
        buffer_append_str(((struct buffer* )come_null_checker(buf, "main.nc", 274)),"\"");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "main.nc", 275)),it);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "main.nc", 276)),"\"");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "main.nc", 277))," ");
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "main.nc", 279))))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    struct list$1char$ph* o2_saved;
    char*  it  ;
    char*  __dec_obj14  ;
    str=(char* )come_increment_ref_count(__builtin_string(""));
    while((_Bool)1) {
        key=wgetch(stdscr);
        if(key>=32&&key<=126) {
            __dec_obj13=str,
            str=(char* )come_increment_ref_count(xsprintf("%s%c",str,key));
            __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0);
            n=0;
            for(o2_saved=(struct list$1char$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "main.nc", 291))->files),it=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 291)));!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 291)));it=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 291)))){
                if(strcasestr(it,str)) {
                    ((struct sInfo* )come_null_checker(info, "main.nc", 293))->cursor=n;
                    __dec_obj14=((struct sInfo* )come_null_checker(info, "main.nc", 294))->searching_str,
                    ((struct sInfo* )come_null_checker(info, "main.nc", 294))->searching_str=(char* )come_increment_ref_count(__builtin_string(str));
                    __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0);
                    break;
                }
                n++;
            }
            come_call_finalizer(list$1char$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            break;
        }
    }
    (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

void search_next_file(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "search_next_file"; neo_current_frame = &fr;
    int n;
    void* __right_value0 = (void*)0;
    struct list$1char$ph* o2_saved;
    char*  it  ;
    _Bool _conditional_value_X0;
    _Bool _conditional_value_X1;
    _Bool _conditional_value_X2;
    if(((struct sInfo* )come_null_checker(info, "main.nc", 308))->searching_str==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    n=((struct sInfo* )come_null_checker(info, "main.nc", 311))->cursor+1;
    for(({(_conditional_value_X0=(o2_saved=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_sublist(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 312))->files, "main.nc", 312)),n,-1)),it=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 312)))));_conditional_value_X0;});({(_conditional_value_X1=(!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 312)))));_conditional_value_X1;});({(_conditional_value_X2=(it=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 312)))));_conditional_value_X2;})){
        if(strcasestr(it,((struct sInfo* )come_null_checker(info, "main.nc", 313))->searching_str)) {
            ((struct sInfo* )come_null_checker(info, "main.nc", 314))->cursor=n;
            break;
        }
        n++;
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
}

void search_prev_file(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "search_prev_file"; neo_current_frame = &fr;
    int n;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* o2_saved;
    char*  it  ;
    _Bool _conditional_value_X0;
    _Bool _conditional_value_X1;
    _Bool _conditional_value_X2;
    if(((struct sInfo* )come_null_checker(info, "main.nc", 323))->searching_str==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    n=((struct sInfo* )come_null_checker(info, "main.nc", 326))->cursor-1;
    for(({(_conditional_value_X0=(o2_saved=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_reverse(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=list$1char$ph_sublist(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 327))->files, "main.nc", 327)),0,n+1))), "main.nc", 327)))),it=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 327)))));    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
_conditional_value_X0;});({(_conditional_value_X1=(!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 327)))));_conditional_value_X1;});({(_conditional_value_X2=(it=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 327)))));_conditional_value_X2;})){
        if(strcasestr(it,((struct sInfo* )come_null_checker(info, "main.nc", 328))->searching_str)) {
            ((struct sInfo* )come_null_checker(info, "main.nc", 329))->cursor=n;
            break;
        }
        n--;
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 1369, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 1369)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->tail;
    while(it!=((void*)0)) {
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 1377)),(char* )come_increment_ref_count((char* )come_memdup(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1377))->item, "/usr/local/include/neo-c.h", 1377, "char* ")));
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->prev;
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

void select_files(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "select_files"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  cursor_file_  ;
    cursor_file_=(char* )come_increment_ref_count(cursor_file(info));
    if(list$1char$ph_contained(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 340))->selected_files, "main.nc", 340)),cursor_file_,(_Bool)0)) {
        list$1char$ph_remove(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 341))->selected_files, "main.nc", 341)),cursor_file_,(_Bool)0);
    }
    else {
        list$1char$ph_add(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 344))->selected_files, "main.nc", 344)),(char* )come_increment_ref_count(cursor_file_));
    }
    (cursor_file_ = come_decrement_ref_count(cursor_file_, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_remove"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    int it2;
    struct list_item$1char$ph* it;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it2=0;
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1739))->head;
    while(it!=((void*)0)) {
        if((!by_pointer&&string_equals(((char* )come_null_checker(((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1741))->item, "/usr/local/include/neo-c.h", 1741)),item))||(by_pointer&&((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1741))->item==item)) {
            list$1char$ph_delete(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1742)),it2,it2+1);
            break;
        }
        it2++;
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1747))->next;
    }
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
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head<0) {
        head+=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1759))->len;
    }
    if(tail<0) {
        tail+=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1762))->len+1;
    }
    if(head>tail) {
        tmp=tail;
        tail=head;
        head=tmp;
    }
    if(head<0) {
        head=0;
    }
    if(tail>((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1775))->len) {
        tail=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1776))->len;
    }
    if(head>=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1779))->len) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==tail) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(head==0&&tail==((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1787))->len) {
        list$1char$ph_reset(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1789)));
    }
    else if(head==0) {
        it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1792))->head;
        i=0;
        while(it!=((void*)0)) {
            if(i<tail) {
                prev_it=it;
                it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1798))->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1803))->len--;
            }
            else if(i==tail) {
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1806))->head=it;
                ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1807))->head, "/usr/local/include/neo-c.h", 1807))->prev=((void*)0);
                break;
            }
            else {
                it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1811))->next;
                i++;
            }
        }
    }
    else if(tail==((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1816))->len) {
        it_6=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1817))->head;
        i_7=0;
        while(it_6!=((void*)0)) {
            if(i_7==head) {
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1821))->tail=((struct list_item$1char$ph*)come_null_checker(it_6, "/usr/local/include/neo-c.h", 1821))->prev;
                ((struct list_item$1char$ph*)come_null_checker(((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1822))->tail, "/usr/local/include/neo-c.h", 1822))->next=((void*)0);
            }
            if(i_7>=head) {
                prev_it_8=it_6;
                it_6=((struct list_item$1char$ph*)come_null_checker(it_6, "/usr/local/include/neo-c.h", 1828))->next;
                i_7++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_8, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1833))->len--;
            }
            else {
                it_6=((struct list_item$1char$ph*)come_null_checker(it_6, "/usr/local/include/neo-c.h", 1836))->next;
                i_7++;
            }
        }
    }
    else {
        it_9=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1842))->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_10=0;
        while(it_9!=((void*)0)) {
            if(i_10==head) {
                head_prev_it=((struct list_item$1char$ph*)come_null_checker(it_9, "/usr/local/include/neo-c.h", 1851))->prev;
            }
            if(i_10==tail) {
                tail_it=it_9;
            }
            if(i_10>=head&&i_10<tail) {
                prev_it_11=it_9;
                it_9=((struct list_item$1char$ph*)come_null_checker(it_9, "/usr/local/include/neo-c.h", 1861))->next;
                i_10++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_11, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1866))->len--;
            }
            else {
                it_9=((struct list_item$1char$ph*)come_null_checker(it_9, "/usr/local/include/neo-c.h", 1869))->next;
                i_10++;
            }
        }
        if(head_prev_it!=((void*)0)) {
            ((struct list_item$1char$ph*)come_null_checker(head_prev_it, "/usr/local/include/neo-c.h", 1875))->next=tail_it;
        }
        if(tail_it!=((void*)0)) {
            ((struct list_item$1char$ph*)come_null_checker(tail_it, "/usr/local/include/neo-c.h", 1878))->prev=head_prev_it;
        }
    }
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
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1719))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$ph*)come_null_checker(it, "/usr/local/include/neo-c.h", 1722))->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1726))->head=((void*)0);
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1727))->tail=((void*)0);
    ((struct list$1char$ph*)come_null_checker(self, "/usr/local/include/neo-c.h", 1729))->len=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void manual(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "manual"; neo_current_frame = &fr;
    wclear(stdscr);
    mvprintw(0,0,"q --> quit");
    mvprintw(1,0,"* --> virtual directory(type shell command, and the result of the command is file list");
    mvprintw(2,0,"ENTER --> run command(type shell command) or insert directory");
    mvprintw(3,0,"~ --> move to home directory");
    mvprintw(4,0,"BACK SPACE ^H --> move to the parent directory");
    mvprintw(5,0,"d --> delete file");
    mvprintw(6,0,"c --> copy file");
    mvprintw(7,0,"m --> move file");
    mvprintw(8,0,"n --> next searching file");
    mvprintw(9,0,"N --> prev searching file");
    mvprintw(10,0,"x --> excute file");
    mvprintw(11,0,"e --> edit file");
    mvprintw(12,0,"LEFT h --> move cursor left");
    mvprintw(13,0,"RIGHT l --> move cursor right");
    mvprintw(14,0,"DOWN j --> move cursor down");
    mvprintw(15,0,"UP k --> move cursor up");
    mvprintw(16,0,"CTRL-L --> reread directory and refresh the window");
    mvprintw(17,0,"/ --> move cursor with searching file (n --> next, N --> prev)");
    mvprintw(18,0,"? --> this manual");
    mvprintw(19,0,": --> run shell");
    mvprintw(20,0,"SPACE --> select files");
    wrefresh(stdscr);
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
    memset(&entry, 0, sizeof(entry));
    if(lstat(path,&stat_)<0) {
        (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(stat_finalize, (&stat_), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return;
    }
    if(((((stat_.st_mode))&0170000)==(0120000))) {
        unlink(path);
        (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0));
        come_call_finalizer(stat_finalize, (&stat_), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return;
    }
    is_dir=((((stat_.st_mode))&0170000)==(0040000));
    if(is_dir) {
        dir=opendir(path);
        if(dir==((void*)0)) {
            (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(stat_finalize, (&stat_), (void*)0, (void*)0, 1, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return;
        }
        while(entry=readdir(dir)) {
            if(chara_operator_not_equals(((struct dirent* )come_null_checker(entry, "main.nc", 400))->d_name,".")&&chara_operator_not_equals(((struct dirent* )come_null_checker(entry, "main.nc", 400))->d_name,"..")) {
                recursive_unlink((char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value6=string_operator_add(((char* )come_null_checker(path, "main.nc", 401)),((char* )(__right_value5=__builtin_string("/")))))), "main.nc", 401)),((char* )(__right_value7=__builtin_string(((struct dirent* )come_null_checker(entry, "main.nc", 401))->d_name))))));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1, 0, (void*)0));
            }
        }
        closedir(dir);
        remove(path);
    }
    else {
        unlink(path);
    }
    (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(stat_finalize, (&stat_), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
}

_Bool is_protected_entry(char* name)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "is_protected_entry"; neo_current_frame = &fr;
    if(name==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
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
    if(item==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(((char*)come_null_checker(item, "main.nc", 427))[0]==47) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(item))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value8=string_operator_add(((char* )come_null_checker(((char* )(__right_value6=string_operator_add(((char* )come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 431))->path, "main.nc", 431)),((char* )(__right_value5=__builtin_string("/")))))), "main.nc", 431)),((char* )(__right_value7=__builtin_string(item)))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    struct list$1char$ph* o2_saved;
    char*  it  ;
    char*  __result_obj__0  ;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 437, "struct buffer* "))), "main.nc", 437)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(o2_saved=(struct list$1char$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "main.nc", 438))->selected_files),it=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 438)));!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 438)));it=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 438)))){
        if(is_protected_entry(it)) {
            continue;
        }
        buffer_append_str(((struct buffer* )come_null_checker(buf, "main.nc", 442)),"\"");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "main.nc", 443)),it);
        buffer_append_str(((struct buffer* )come_null_checker(buf, "main.nc", 444)),"\"");
        buffer_append_str(((struct buffer* )come_null_checker(buf, "main.nc", 445))," ");
    }
    come_call_finalizer(list$1char$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "main.nc", 447))))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

void handmade_delete_file(char*  path  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "handmade_delete_file"; neo_current_frame = &fr;
    int key;
    werase(stdscr);
    mvprintw(0,0,"Is %s delete OK? (y,Y,ENTER/other",path);
    wrefresh(stdscr);
    while((_Bool)1) {
        key=wgetch(stdscr);
        if(key==121||key==89||key==10) {
            recursive_unlink((char* )come_increment_ref_count(path));
            break;
        }
        else {
            break;
        }
    }
    (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
}

void handmade_selected_delete_file(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "handmade_selected_delete_file"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  li  ;
    int key;
    struct list$1char$ph* o2_saved;
    char*  it  ;
    char*  path  ;
    li=(char* )come_increment_ref_count(deletable_selected_files(info));
    if(string_length(((char* )come_null_checker(li, "main.nc", 472)))==0) {
        werase(stdscr);
        mvprintw(0,0,"No deletable files selected");
        wrefresh(stdscr);
        wgetch(stdscr);
        (li = come_decrement_ref_count(li, (void*)0, (void*)0, 0, 0, (void*)0));
        neo_current_frame = fr.prev;
        return;
    }
    werase(stdscr);
    mvprintw(0,0,"Are %s delete OK? (y,Y,ENTER/other",li);
    wrefresh(stdscr);
    while((_Bool)1) {
        key=wgetch(stdscr);
        if(key==121||key==89||key==10) {
            for(o2_saved=(struct list$1char$ph*)come_increment_ref_count(((struct sInfo* )come_null_checker(info, "main.nc", 488))->selected_files),it=list$1char$ph_begin(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 488)));!list$1char$ph_end(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 488)));it=list$1char$ph_next(((struct list$1char$ph*)come_null_checker(o2_saved, "main.nc", 488)))){
                if(is_protected_entry(it)) {
                    continue;
                }
                path=(char* )come_increment_ref_count(resolve_item_path(info,it));
                recursive_unlink((char* )come_increment_ref_count(path));
                (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            come_call_finalizer(list$1char$ph$p_finalize, o2_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        else {
            break;
        }
    }
    (li = come_decrement_ref_count(li, (void*)0, (void*)0, 0, 0, (void*)0));
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
    memset(&stat_, 0, sizeof(stat_));
    maxx=xgetmaxx();
    maxy=xgetmaxy()-1;
    key=wgetch(stdscr);
    switch (    key) {
        case 113:
        ((struct sInfo* )come_null_checker(info, "main.nc", 512))->app_end=(_Bool)1;
        break;
        case 42:
        endwin();
        list$1char$ph_reset(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 517))->files, "main.nc", 517)));
        vd(info);
        initscr();
        keypad(stdscr,(_Bool)1);
        raw();
        noecho();
        break;
        case 0527:
        case 10:
        {
            path=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((char* )(__right_value6=string_operator_add(((char* )come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 527))->path, "main.nc", 527)),((char* )(__right_value5=__builtin_string("/")))))), "main.nc", 527)),((char* )(__right_value7=cursor_file(info)))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1, 0, (void*)0));
            (void)(stat)(path,&stat_);
            is_dir=((((stat_.st_mode))&0170000)==(0040000));
            if(is_dir) {
                change_directory(info,path,((void*)0));
            }
            else {
                endwin();
                if(list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 539))->selected_files, "main.nc", 539)))>0) {
                    system(((char* )(__right_value1=xsprintf("shsh -i ' \"%s\"' -n 0 -o",((char* )(__right_value0=selected_files(info)))))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                }
                else {
                    system(((char* )(__right_value1=xsprintf("shsh -i ' \"%s\"' -n 0 -o",((char* )(__right_value0=cursor_file(info)))))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
                }
                read_dir(info);
                puts("HIT ANY KEY");
                initscr();
                keypad(stdscr,(_Bool)1);
                raw();
                noecho();
                getchar();
            }
            (path = come_decrement_ref_count(path, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(stat_finalize, (&stat_), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        break;
        case 126:
        {
            path_12=(char* )come_increment_ref_count(__builtin_string(getenv("HOME")));
            change_directory(info,path_12,((void*)0));
            (path_12 = come_decrement_ref_count(path_12, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        break;
        case 0407:
        case 8:
        case 127:
        {
            current_directory_name=(char* )come_increment_ref_count(xbasename(((struct sInfo* )come_null_checker(info, "main.nc", 566))->path));
            path_13=(char* )come_increment_ref_count(string_operator_add(((char* )come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 567))->path, "main.nc", 567)),((char* )(__right_value1=__builtin_string("/..")))));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            change_directory(info,path_13,current_directory_name);
            (current_directory_name = come_decrement_ref_count(current_directory_name, (void*)0, (void*)0, 0, 0, (void*)0));
            (path_13 = come_decrement_ref_count(path_13, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        break;
        case 100:
        {
            endwin();
            if(list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 574))->selected_files, "main.nc", 574)))>0) {
                handmade_selected_delete_file(info);
            }
            else {
                item=(char* )come_increment_ref_count(cursor_file(info));
                if(is_protected_entry(item)) {
                    werase(stdscr);
                    mvprintw(0,0,"Refuse to delete %s",item);
                    wrefresh(stdscr);
                    wgetch(stdscr);
                }
                else {
                    handmade_delete_file((char* )come_increment_ref_count(resolve_item_path(info,item)),info);
                }
                (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            read_dir(info);
            initscr();
            keypad(stdscr,(_Bool)1);
            raw();
            noecho();
        }
        break;
        case 99:
        {
            endwin();
            if(list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 599))->selected_files, "main.nc", 599)))>0) {
                system(((char* )(__right_value1=xsprintf("shsh -i 'cp -r \"%s\" ' -o",((char* )(__right_value0=selected_files(info)))))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
                system(((char* )(__right_value1=xsprintf("shsh -i 'cp -r \"%s\" ' -o",((char* )(__right_value0=cursor_file(info)))))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            read_dir(info);
            puts("HIT ANY KEY");
            initscr();
            keypad(stdscr,(_Bool)1);
            raw();
            noecho();
            getchar();
        }
        break;
        case 109:
        {
            endwin();
            if(list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 617))->selected_files, "main.nc", 617)))>0) {
                system(((char* )(__right_value1=xsprintf("shsh -i 'mv \"%s\" ' -o",((char* )(__right_value0=selected_files(info)))))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
                system(((char* )(__right_value1=xsprintf("shsh -i 'mv \"%s\" ' -o",((char* )(__right_value0=cursor_file(info)))))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            read_dir(info);
            puts("HIT ANY KEY");
            initscr();
            keypad(stdscr,(_Bool)1);
            raw();
            noecho();
            getchar();
        }
        break;
        case 110:
        {
            search_next_file(info);
        }
        break;
        case 78:
        {
            search_prev_file(info);
        }
        break;
        case 120:
        {
            endwin();
            if(list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 645))->selected_files, "main.nc", 645)))>0) {
                system(((char* )(__right_value1=xsprintf("shsh -i ' \"%s\"' -n 0 -o",((char* )(__right_value0=selected_files(info)))))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            else {
                system(((char* )(__right_value1=xsprintf("shsh -i ' ./\"%s\"' -n 0 -o",((char* )(__right_value0=cursor_file(info)))))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            }
            read_dir(info);
            puts("HIT ANY KEY");
            initscr();
            keypad(stdscr,(_Bool)1);
            raw();
            noecho();
            getchar();
        }
        break;
        case 101:
        {
            endwin();
            system(((char* )(__right_value1=xsprintf("vin %s",((char* )(__right_value0=cursor_file(info)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
            initscr();
            keypad(stdscr,(_Bool)1);
            raw();
            noecho();
        }
        break;
        case 0404:
        case 104:
        case 66-65+1:
        if(((struct sInfo* )come_null_checker(info, "main.nc", 674))->cursor>=maxy) {
            ((struct sInfo* )come_null_checker(info, "main.nc", 675))->cursor-=maxy;
        }
        break;
        case 0405:
        case 108:
        case 70-65+1:
        if(((struct sInfo* )come_null_checker(info, "main.nc", 682))->cursor+maxy<list$1char$ph_length(((struct list$1char$ph*)come_null_checker(((struct sInfo* )come_null_checker(info, "main.nc", 682))->files, "main.nc", 682)))) {
            ((struct sInfo* )come_null_checker(info, "main.nc", 683))->cursor+=maxy;
        }
        break;
        case 0402:
        case 106:
        case 78-65+1:
        ((struct sInfo* )come_null_checker(info, "main.nc", 690))->cursor++;
        break;
        case 0403:
        case 107:
        case 80-65+1:
        ((struct sInfo* )come_null_checker(info, "main.nc", 696))->cursor--;
        break;
        case 76-65+1:
        wclear(stdscr);
        read_dir(info);
        view(info);
        wrefresh(stdscr);
        break;
        case 47:
        search_file(info);
        view(info);
        wrefresh(stdscr);
        break;
        case 63:
        manual(info);
        break;
        case 58:
        {
            endwin();
            system("shsh -o");
            read_dir(info);
            puts("HIT ANY KEY");
            initscr();
            keypad(stdscr,(_Bool)1);
            raw();
            noecho();
            getchar();
        }
        break;
        case 0x04:
        case 0522:
        {
            ((struct sInfo* )come_null_checker(info, "main.nc", 732))->cursor+=10;
        }
        break;
        case 32:
        {
            select_files(info);
        }
        break;
        case 0x15:
        case 0523:
        {
            ((struct sInfo* )come_null_checker(info, "main.nc", 743))->cursor-=10;
        }
        break;
    }
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
    setlocale(6,"");
    setenv("EDITOR","vin",1);
    memset(&info,0,sizeof(struct sInfo ));
    cwd=getenv("PWD");
    __dec_obj15=info.path,
    info.path=(char* )come_increment_ref_count(__builtin_string(cwd));
    __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0);
    read_dir(&info);
    initscr();
    keypad(stdscr,1);
    raw();
    noecho();
    while(!info.app_end) {
        view(&info);
        input(&info);
    }
    endwin();
    __result_obj__0 = 0;
    come_call_finalizer(sInfo_finalize, (&info), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_heap_final();
    return __result_obj__0;
}

static void sInfo_finalize(struct sInfo*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sInfo_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct sInfo* )come_null_checker(self, "sInfo_finalize", 0))->path!=((void*)0)) {
        (((struct sInfo* )come_null_checker(self, "sInfo_finalize", 0))->path = come_decrement_ref_count(((struct sInfo* )come_null_checker(self, "sInfo_finalize", 0))->path, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    if(self!=((void*)0)&&((struct sInfo* )come_null_checker(self, "sInfo_finalize", 1))->files!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sInfo* )come_null_checker(self, "sInfo_finalize", 1))->files, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sInfo* )come_null_checker(self, "sInfo_finalize", 2))->selected_files!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, ((struct sInfo* )come_null_checker(self, "sInfo_finalize", 2))->selected_files, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&((struct sInfo* )come_null_checker(self, "sInfo_finalize", 3))->searching_str!=((void*)0)) {
        (((struct sInfo* )come_null_checker(self, "sInfo_finalize", 3))->searching_str = come_decrement_ref_count(((struct sInfo* )come_null_checker(self, "sInfo_finalize", 3))->searching_str, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

void stackframe()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe"; neo_current_frame = &fr;
    struct neo_frame*  f  ;
    char* fun_name;
    f=neo_current_frame;
    while(f) {
        fun_name=((struct neo_frame* )come_null_checker(f, "/usr/local/include/neo-c.h", 169))->fun_name;
        printf("%s\n",fun_name);
        f=((struct neo_frame* )come_null_checker(f, "/usr/local/include/neo-c.h", 172))->prev;
    }
    neo_current_frame = fr.prev;
}

_Bool die(const char* msg)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "die"; neo_current_frame = &fr;
    puts(msg);
    stackframe();
    exit(4);
    neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

void come_heap_final()
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_heap_final"; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    int n;
    _Bool flag;
    int i;
    it=gAllocMem;
    n=0;
    while(it) {
        n++;
        flag=(_Bool)0;
        printf("#%d ",n);
        if(((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 212))->class_name) {
            printf("%p (%s): ",(char*)it+sizeof(struct sMemHeader )+sizeof(unsigned long )+sizeof(unsigned long ),((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 213))->class_name);
        }
        for(i=0;i<8;i++){
            if(((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 216))->fun_name[i]) {
                printf("%s, ",((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 217))->fun_name[i]);
                flag=(_Bool)1;
            }
        }
        if(flag) {
            puts("");
        }
        it=((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 224))->next;
    }
    if(n>0) {
        printf("%d memory leaks. %d alloc, %d free.\n",n,gNumAlloc,gNumFree);
    }
    neo_current_frame = fr.prev;
}

void* alloc_from_pages(unsigned long  size  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "alloc_from_pages"; neo_current_frame = &fr;
    void* __result_obj__0;
    __result_obj__0 = calloc(1,size);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_free_mem_of_heap_pool(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_free_mem_of_heap_pool"; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    struct sMemHeader*  prev_it  ;
    struct sMemHeader*  next_it  ;
    unsigned long  size  ;
    if(mem) {
        it=(struct sMemHeader* )((char*)mem-sizeof(struct sMemHeader ));
        if(((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 239))->allocated!=177783) {
            neo_current_frame = fr.prev;
            return;
        }
        ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 243))->allocated=0;
        prev_it=((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 245))->prev;
        next_it=((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 246))->next;
        if(gAllocMem==it) {
            gAllocMem=next_it;
            if(gAllocMem) {
                ((struct sMemHeader* )come_null_checker(gAllocMem, "/usr/local/include/neo-c.h", 252))->prev=((void*)0);
            }
        }
        else {
            if(prev_it) {
                ((struct sMemHeader* )come_null_checker(prev_it, "/usr/local/include/neo-c.h", 257))->next=next_it;
            }
            if(next_it) {
                ((struct sMemHeader* )come_null_checker(next_it, "/usr/local/include/neo-c.h", 260))->prev=prev_it;
            }
        }
        size=((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 264))->size;
        free(it);
        gNumFree++;
    }
    neo_current_frame = fr.prev;
}

void* come_alloc_mem_from_heap_pool(unsigned long  size  , const char* sname, int sline, const char* class_name)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_alloc_mem_from_heap_pool"; neo_current_frame = &fr;
    unsigned long  size2  ;
    void* result;
    struct sMemHeader*  it  ;
    int n;
    struct neo_frame*  f  ;
    char* fun_name;
    void* __result_obj__0;
    size2=size+sizeof(struct sMemHeader );
    size2=(size2+7&~0x7);
    result=alloc_from_pages(size2);
    it=result;
    ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 284))->allocated=177783;
    ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 286))->size=size2;
    ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 287))->free_next=((void*)0);
    n=0;
    f=neo_current_frame;
    while(f&&n<8) {
        fun_name=((struct neo_frame* )come_null_checker(f, "/usr/local/include/neo-c.h", 292))->fun_name;
        ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 294))->fun_name[n]=fun_name;
        n++;
        f=((struct neo_frame* )come_null_checker(f, "/usr/local/include/neo-c.h", 297))->prev;
    }
    ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 300))->next=gAllocMem;
    ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 301))->prev=((void*)0);
    ((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 303))->class_name=class_name;
    if(gAllocMem) {
        ((struct sMemHeader* )come_null_checker(gAllocMem, "/usr/local/include/neo-c.h", 306))->prev=it;
    }
    gAllocMem=it;
    gNumAlloc++;
    __result_obj__0 = (char*)result+sizeof(struct sMemHeader );
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* come_dynamic_typeof(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_dynamic_typeof"; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    char* __result_obj__0;
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long )-sizeof(struct sMemHeader ));
    if(((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 320))->allocated!=177783) {
        printf("invalid heap object(%p)(1)\n",it);
        stackframe();
        exit(2);
    }
    __result_obj__0 = (char*)((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 326))->class_name;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

unsigned long  dynamic_sizeof(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "dynamic_sizeof"; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    unsigned long  size  ;
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long )-sizeof(struct sMemHeader ));
    if(((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 333))->allocated!=177783) {
        printf("invalid heap object(%p)(1)\n",it);
        stackframe();
        exit(2);
    }
    size=((struct sMemHeader* )come_null_checker(it, "/usr/local/include/neo-c.h", 338))->size-sizeof(struct sMemHeader )-sizeof(unsigned long )-sizeof(unsigned long );
    neo_current_frame = fr.prev;
    return size;
    neo_current_frame = fr.prev;
}

void* come_calloc(unsigned long  count  , unsigned long  size  , const char* sname, int sline, const char* class_name)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_calloc"; neo_current_frame = &fr;
    char* mem;
    unsigned long*  ref_count  ;
    unsigned long*  size2  ;
    void* __result_obj__0;
    mem=come_alloc_mem_from_heap_pool(sizeof(unsigned long )+sizeof(unsigned long )+count*size,sname,sline,class_name);
    ref_count=(unsigned long* )mem;
    *ref_count=0;
    size2=(unsigned long* )(mem+sizeof(unsigned long ));
    *size2=size*count+sizeof(unsigned long )+sizeof(unsigned long );
    __result_obj__0 = mem+sizeof(unsigned long )+sizeof(unsigned long );
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_free(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_free"; neo_current_frame = &fr;
    unsigned long*  ref_count  ;
    if(mem==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    ref_count=(unsigned long* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    come_free_mem_of_heap_pool((char*)ref_count);
    neo_current_frame = fr.prev;
}

void* come_memdup(void* block, const char* sname, int sline, const char* class_name)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_memdup"; neo_current_frame = &fr;
    void* __result_obj__0;
    char* mem;
    unsigned long*  size_p  ;
    unsigned long  size  ;
    void* result;
    if(!block) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=(char*)block-sizeof(unsigned long )-sizeof(unsigned long );
    size_p=(unsigned long* )(mem+sizeof(unsigned long ));
    size=*size_p-sizeof(unsigned long )-sizeof(unsigned long );
    result=come_calloc(1,size,sname,sline,class_name);
    memcpy(result,block,size);
    __result_obj__0 = result;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_increment_ref_count(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_increment_ref_count"; neo_current_frame = &fr;
    void* __result_obj__0;
    unsigned long*  ref_count  ;
    if(mem==((void*)0)) {
        __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ref_count=(unsigned long* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    (*ref_count)++;
    __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_print_ref_count(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_print_ref_count"; neo_current_frame = &fr;
    void* __result_obj__0;
    unsigned long*  ref_count  ;
    if(mem==((void*)0)) {
        __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ref_count=(unsigned long* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    printf("ref_count %ld\n",*ref_count);
    __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int come_get_ref_count(void* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_get_ref_count"; neo_current_frame = &fr;
    unsigned long*  ref_count  ;
    if(mem==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    ref_count=(unsigned long* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    neo_current_frame = fr.prev;
    return *ref_count;
    neo_current_frame = fr.prev;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, void* result_obj)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_decrement_ref_count"; neo_current_frame = &fr;
    void* __result_obj__0;
    long* ref_count;
    long count;
    void (*finalizer)(void*);
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
    ref_count=(long*)((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
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

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_call_finalizer"; neo_current_frame = &fr;
    void (*finalizer)(void*);
    void (*finalizer_14)(void*);
    void (*finalizer_15)(void*);
    long* ref_count;
    long count;
    void (*finalizer_16)(void*);
    void (*finalizer_17)(void*);
    void (*finalizer_18)(void*);
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
            finalizer_14=(void (*)(void*))fun;
            finalizer_14(mem);
        }
        else {
            if(protocol_obj&&protocol_fun) {
                finalizer_15=(void (*)(void*))protocol_fun;
                finalizer_15(protocol_obj);
            }
        }
    }
    else {
        ref_count=(long*)((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
        if(!no_decrement) {
            (*ref_count)--;
        }
        count=*ref_count;
        if(!no_free&&count<=0) {
            if(mem) {
                if(fun) {
                    if(protocol_obj&&protocol_fun) {
                        finalizer_16=(void (*)(void*))protocol_fun;
                        finalizer_16(protocol_obj);
                        come_free(protocol_obj);
                    }
                    if(fun) {
                        finalizer_17=(void (*)(void*))fun;
                        finalizer_17(mem);
                    }
                }
                else {
                    if(protocol_obj&&protocol_fun) {
                        finalizer_18=(void (*)(void*))protocol_fun;
                        finalizer_18(protocol_obj);
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xassert"; neo_current_frame = &fr;
    printf("%s...",msg);
    if(!test) {
        puts("false");
        stackframe();
        exit(2);
    }
    puts("ok");
    neo_current_frame = fr.prev;
}

void* come_null_checker(void* mem, const char* sname, int sline)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "come_null_checker"; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    if(mem) {
        __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    puts(((char*)(__right_value2=xsprintf("null pointer exception \%s \%s",((char* )(__right_value0=charp_to_string(((const char*)come_null_checker(sname, "/usr/local/include/neo-c.h", 554))))),((char* )(__right_value1=int_to_string(sline)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0));
    stackframe();
    exit(1);
    neo_current_frame = fr.prev;
}

char*  __builtin_string(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "__builtin_string"; neo_current_frame = &fr;
    char*  __result_obj__0  ;
    int len;
    void* __right_value0 = (void*)0;
    char* result;
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str)+1;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len)), (void*)0, 566, "char*"));
    strncpy(result,str,len);
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static struct slice$1char$* slice$1char$_initialize(struct slice$1char$* self, char* p, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "slice$1char$_initialize"; neo_current_frame = &fr;
    struct slice$1char$* __result_obj__0;
    ((struct slice$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 876))->memory=(char*)p;
    ((struct slice$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 877))->p=p;
    ((struct slice$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 878))->len=len;
    __result_obj__0 = (struct slice$1char$*)come_increment_ref_count(self);
    come_call_finalizer(slice$1char$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(slice$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void slice$1char$$p_finalize(struct slice$1char$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "slice$1char$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct slice$1char$* string_to_slice(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_to_slice"; neo_current_frame = &fr;
    unsigned long  size  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct slice$1char$* __result_obj__0;
    size=string_length(self);
    __result_obj__0 = (struct slice$1char$*)come_increment_ref_count(((struct slice$1char$*)(__right_value1=slice$1char$_initialize((struct slice$1char$*)come_increment_ref_count(((struct slice$1char$*)come_null_checker(((struct slice$1char$*)(__right_value0=(struct slice$1char$*)come_calloc(1, sizeof(struct slice$1char$)*(1), (void*)0, 1085, "struct slice$1char$*"))), "/usr/local/include/neo-c.h", 1085))),self,size))));
    (self = come_decrement_ref_count(self, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(slice$1char$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(slice$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(slice$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct slice$1char$* charp_to_slice(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_slice"; neo_current_frame = &fr;
    int len;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct slice$1char$* __result_obj__0;
    len=string_length(self);
    __result_obj__0 = (struct slice$1char$*)come_increment_ref_count(((struct slice$1char$*)(__right_value1=slice$1char$_initialize((struct slice$1char$*)come_increment_ref_count(((struct slice$1char$*)come_null_checker(((struct slice$1char$*)(__right_value0=(struct slice$1char$*)come_calloc(1, sizeof(struct slice$1char$)*(1), (void*)0, 1092, "struct slice$1char$*"))), "/usr/local/include/neo-c.h", 1092))),self,len))));
    (self = come_decrement_ref_count(self, (void*)0, (void*)0, 0, 0, (void*)0));
    come_call_finalizer(slice$1char$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(slice$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(slice$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "smart_pointer$1char$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct smart_pointer$1char$*)come_null_checker(self, "smart_pointer$1char$$p_finalize", 0))->memory!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct smart_pointer$1char$*)come_null_checker(self, "smart_pointer$1char$$p_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct smart_pointer$1char$* buffer_to_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_pointer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct smart_pointer$1char$* result;
    struct buffer*  __dec_obj16  ;
    struct smart_pointer$1char$* __result_obj__0;
    result=(struct smart_pointer$1char$*)come_increment_ref_count((struct smart_pointer$1char$*)come_calloc(1, sizeof(struct smart_pointer$1char$)*(1), (void*)0, 1237, "struct smart_pointer$1char$*"));
    __dec_obj16=((struct smart_pointer$1char$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1239))->memory,
    ((struct smart_pointer$1char$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1239))->memory=(struct buffer* )come_increment_ref_count(buffer_clone(self));
    come_call_finalizer(buffer_finalize, __dec_obj16,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct smart_pointer$1char$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1240))->p=((struct buffer* )come_null_checker(((struct smart_pointer$1char$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1240))->memory, "/usr/local/include/neo-c.h", 1240))->buf;
    __result_obj__0 = (struct smart_pointer$1char$*)come_increment_ref_count(result);
    come_call_finalizer(smart_pointer$1char$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(smart_pointer$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "smart_pointer$1int$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct smart_pointer$1int$*)come_null_checker(self, "smart_pointer$1int$$p_finalize", 0))->memory!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct smart_pointer$1int$*)come_null_checker(self, "smart_pointer$1int$$p_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct smart_pointer$1int$* buffer_to_int_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_int_pointer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct smart_pointer$1int$* result;
    struct buffer*  __dec_obj17  ;
    struct smart_pointer$1int$* __result_obj__0;
    result=(struct smart_pointer$1int$*)come_increment_ref_count((struct smart_pointer$1int$*)come_calloc(1, sizeof(struct smart_pointer$1int$)*(1), (void*)0, 1247, "struct smart_pointer$1int$*"));
    __dec_obj17=((struct smart_pointer$1int$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1249))->memory,
    ((struct smart_pointer$1int$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1249))->memory=(struct buffer* )come_increment_ref_count(buffer_clone(self));
    come_call_finalizer(buffer_finalize, __dec_obj17,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct smart_pointer$1int$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1250))->p=(int*)((struct buffer* )come_null_checker(((struct smart_pointer$1int$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1250))->memory, "/usr/local/include/neo-c.h", 1250))->buf;
    __result_obj__0 = (struct smart_pointer$1int$*)come_increment_ref_count(result);
    come_call_finalizer(smart_pointer$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(smart_pointer$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "smart_pointer$1short$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct smart_pointer$1short$*)come_null_checker(self, "smart_pointer$1short$$p_finalize", 0))->memory!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct smart_pointer$1short$*)come_null_checker(self, "smart_pointer$1short$$p_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct smart_pointer$1short$* buffer_to_short_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_short_pointer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct smart_pointer$1short$* result;
    struct buffer*  __dec_obj18  ;
    struct smart_pointer$1short$* __result_obj__0;
    result=(struct smart_pointer$1short$*)come_increment_ref_count((struct smart_pointer$1short$*)come_calloc(1, sizeof(struct smart_pointer$1short$)*(1), (void*)0, 1257, "struct smart_pointer$1short$*"));
    __dec_obj18=((struct smart_pointer$1short$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1259))->memory,
    ((struct smart_pointer$1short$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1259))->memory=(struct buffer* )come_increment_ref_count(buffer_clone(self));
    come_call_finalizer(buffer_finalize, __dec_obj18,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct smart_pointer$1short$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1260))->p=(short*)((struct buffer* )come_null_checker(((struct smart_pointer$1short$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1260))->memory, "/usr/local/include/neo-c.h", 1260))->buf;
    __result_obj__0 = (struct smart_pointer$1short$*)come_increment_ref_count(result);
    come_call_finalizer(smart_pointer$1short$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(smart_pointer$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "smart_pointer$1long$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&((struct smart_pointer$1long$*)come_null_checker(self, "smart_pointer$1long$$p_finalize", 0))->memory!=((void*)0)) {
        come_call_finalizer(buffer_finalize, ((struct smart_pointer$1long$*)come_null_checker(self, "smart_pointer$1long$$p_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

struct smart_pointer$1long$* buffer_to_long_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_long_pointer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct smart_pointer$1long$* result;
    struct buffer*  __dec_obj19  ;
    struct smart_pointer$1long$* __result_obj__0;
    result=(struct smart_pointer$1long$*)come_increment_ref_count((struct smart_pointer$1long$*)come_calloc(1, sizeof(struct smart_pointer$1long$)*(1), (void*)0, 1267, "struct smart_pointer$1long$*"));
    __dec_obj19=((struct smart_pointer$1long$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1269))->memory,
    ((struct smart_pointer$1long$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1269))->memory=(struct buffer* )come_increment_ref_count(buffer_clone(self));
    come_call_finalizer(buffer_finalize, __dec_obj19,(void*)0, (void*)0, 0, 0, 0, (void*)0);
    ((struct smart_pointer$1long$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1270))->p=(long*)((struct buffer* )come_null_checker(((struct smart_pointer$1long$*)come_null_checker(result, "/usr/local/include/neo-c.h", 1270))->memory, "/usr/local/include/neo-c.h", 1270))->buf;
    __result_obj__0 = (struct smart_pointer$1long$*)come_increment_ref_count(result);
    come_call_finalizer(smart_pointer$1long$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(smart_pointer$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer*  buffer_initialize(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj20;
    struct buffer*  __result_obj__0  ;
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3551))->size=128;
    __dec_obj20=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3552))->buf,
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3552))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3552))->size)), (void*)0, 3552, "char*"));
    __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0);
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3553))->buf, "/usr/local/include/neo-c.h", 3553))[0]=0;
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3554))->len=0;
    __result_obj__0 = (struct buffer* )come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  size  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize_with_value"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj21;
    struct buffer*  __result_obj__0  ;
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3561))->size=128;
    __dec_obj21=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3562))->buf,
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3562))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3562))->size)), (void*)0, 3562, "char*"));
    __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0);
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3563))->buf, "/usr/local/include/neo-c.h", 3563))[0]=0;
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3564))->len=0;
    buffer_append(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3566)),mem,size);
    __result_obj__0 = (struct buffer* )come_increment_ref_count(self);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

void buffer_finalize(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_finalize"; neo_current_frame = &fr;
    if(self&&((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3573))->buf) {
        (((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3573))->buf = come_decrement_ref_count(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3573))->buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_clone(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_clone"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct buffer*  result  ;
    char* __dec_obj22;
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 3582, "struct buffer* "));
    ((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3584))->size=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3584))->size;
    __dec_obj22=((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3585))->buf,
    ((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3585))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3585))->size)), (void*)0, 3585, "char*"));
    __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0);
    ((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3586))->len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3586))->len;
    memcpy(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3587))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3587))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3587))->len);
    __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool buffer_equals(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_equals"; neo_current_frame = &fr;
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
    __result_obj__0 = string_equals(((char* )come_null_checker(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(left, "/usr/local/include/neo-c.h", 3601))))), "/usr/local/include/neo-c.h", 3601)),((char* )(__right_value1=buffer_to_string(((struct buffer* )come_null_checker(right, "/usr/local/include/neo-c.h", 3601))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_length(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3609))->len;
    neo_current_frame = fr.prev;
}

void buffer_reset(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_reset"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3617))->buf, "/usr/local/include/neo-c.h", 3617))[0]=0;
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3618))->len=0;
    neo_current_frame = fr.prev;
}

void buffer_trim(struct buffer*  self  , int len)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_trim"; neo_current_frame = &fr;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3626))->len-=len;
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3627))->len>=0) {
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3628))->buf, "/usr/local/include/neo-c.h", 3628))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3628))->len]=0;
    }
    else {
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3631))->len=0;
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3632))->buf, "/usr/local/include/neo-c.h", 3632))[0]=0;
    }
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_append(struct buffer*  self  , const char* mem, unsigned long  size  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj23;
    if(self==((void*)0)||mem==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3641))->len+size+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3641))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3642))->size)), (void*)0, 3642, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3643))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3643))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3644))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3646))->size+size+1)*2;
        __dec_obj23=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3647))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3647))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3647, "char*"));
        __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3648))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3649))->buf, "/usr/local/include/neo-c.h", 3649))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3650))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3653))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3653))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3654))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3655))->buf, "/usr/local/include/neo-c.h", 3655))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3655))->len]=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_char(struct buffer*  self  , char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_char"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj24;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3665))->len+1+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3665))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3666))->size)), (void*)0, 3666, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3667))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3667))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3668))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3670))->size+10+1)*2;
        __dec_obj24=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3671))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3671))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3671, "char*"));
        __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3672))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3673))->buf, "/usr/local/include/neo-c.h", 3673))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3674))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3677))->buf, "/usr/local/include/neo-c.h", 3677))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3677))->len]=c;
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3678))->len++;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3680))->buf, "/usr/local/include/neo-c.h", 3680))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3680))->len]=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_str(struct buffer*  self  , const char* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_str"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj25;
    if(self==((void*)0)||mem==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    size=strlen(mem);
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3692))->len+size+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3692))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3693))->size)), (void*)0, 3693, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3694))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3694))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3695))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3696))->size+size+1)*2;
        __dec_obj25=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3697))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3697))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3697, "char*"));
        __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3698))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3699))->buf, "/usr/local/include/neo-c.h", 3699))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3700))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3703))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3703))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3704))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3705))->buf, "/usr/local/include/neo-c.h", 3705))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3705))->len]=0;
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
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj26;
    memset(&result, 0, sizeof(result));
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
    mem=(char* )come_increment_ref_count(__builtin_string(result));
    size=strlen(mem);
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3768))->len+size+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3768))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3769))->size)), (void*)0, 3769, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3770))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3770))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3771))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3772))->size+size+1)*2;
        __dec_obj26=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3773))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3773))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3773, "char*"));
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3774))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3775))->buf, "/usr/local/include/neo-c.h", 3775))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3776))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3779))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3779))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3780))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3781))->buf, "/usr/local/include/neo-c.h", 3781))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3781))->len]=0;
    free(result);
    __result_obj__0 = self;
    (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_nullterminated_str(struct buffer*  self  , const char* mem)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_nullterminated_str"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int size;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj27;
    if(self==((void*)0)||mem==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    size=strlen(mem)+1;
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3795))->len+size+1+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3795))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3796))->size)), (void*)0, 3796, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3797))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3797))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3798))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3799))->size+size+1)*2;
        __dec_obj27=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3800))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3800))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3800, "char*"));
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3801))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3802))->buf, "/usr/local/include/neo-c.h", 3802))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3803))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3806))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3806))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3807))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3808))->buf, "/usr/local/include/neo-c.h", 3808))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3808))->len]=0;
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3809))->len++;
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
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj28;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(int);
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3822))->len+size+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3822))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3823))->size)), (void*)0, 3823, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3824))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3824))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3825))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3826))->size+size+1)*2;
        __dec_obj28=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3827))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3827))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3827, "char*"));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3828))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3829))->buf, "/usr/local/include/neo-c.h", 3829))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3830))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3833))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3833))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3834))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3835))->buf, "/usr/local/include/neo-c.h", 3835))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3835))->len]=0;
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
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj29;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(long);
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3848))->len+size+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3848))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3849))->size)), (void*)0, 3849, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3850))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3850))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3851))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3852))->size+size+1)*2;
        __dec_obj29=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3853))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3853))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3853, "char*"));
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3854))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3855))->buf, "/usr/local/include/neo-c.h", 3855))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3856))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3859))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3859))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3860))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3861))->buf, "/usr/local/include/neo-c.h", 3861))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3861))->len]=0;
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
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj30;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(short);
    if(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3875))->len+size+1+1>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3875))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3876))->size)), (void*)0, 3876, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3877))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3877))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3878))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3879))->size+size+1)*2;
        __dec_obj30=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3880))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3880))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3880, "char*"));
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3881))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3882))->buf, "/usr/local/include/neo-c.h", 3882))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3883))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3886))->buf+((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3886))->len,mem,size);
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3887))->len+=size;
    ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3888))->buf, "/usr/local/include/neo-c.h", 3888))[((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3888))->len]=0;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_alignment(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_alignment"; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int old_len;
    int new_size;
    char* __dec_obj31;
    int i;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3899))->len;
    len=(len+3)&~3;
    if(len>=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3902))->size) {
        old_buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3903))->size)), (void*)0, 3903, "char*"));
        memcpy(old_buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3904))->buf,((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3904))->size);
        old_len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3905))->len;
        new_size=(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3906))->size+1+1)*2;
        __dec_obj31=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3907))->buf,
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3907))->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size)), (void*)0, 3907, "char*"));
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0);
        memcpy(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3908))->buf,old_buf,old_len);
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3909))->buf, "/usr/local/include/neo-c.h", 3909))[old_len]=0;
        ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3910))->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    for(i=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3913))->len;i<len;i++){
        ((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3914))->buf, "/usr/local/include/neo-c.h", 3914))[i]=0;
    }
    ((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3917))->len=len;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_compare(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_compare"; neo_current_frame = &fr;
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
    return strcmp(((struct buffer* )come_null_checker(left, "/usr/local/include/neo-c.h", 3934))->buf,((struct buffer* )come_null_checker(right, "/usr/local/include/neo-c.h", 3934))->buf);
    neo_current_frame = fr.prev;
}

struct buffer*  charp_to_buffer(const char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 3939, "struct buffer* "))), "/usr/local/include/neo-c.h", 3939)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3945)),self);
    __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  buffer_to_string(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3956))->buf))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

unsigned char* buffer_head_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_head_pointer"; neo_current_frame = &fr;
    unsigned char* __result_obj__0;
    if(self==((void*)0)) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    __result_obj__0 = (unsigned char*)((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 3964))->buf;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  chara_to_buffer(char* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 3969, "struct buffer* "))), "/usr/local/include/neo-c.h", 3969)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3973)),self,sizeof(char)*len);
    __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer*  charpa_to_buffer(char** self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    int i;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 3979, "struct buffer* "))), "/usr/local/include/neo-c.h", 3979)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    for(i=0;i<len;i++){
        buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3984)),((char**)come_null_checker(self, "/usr/local/include/neo-c.h", 3984))[i],strlen(((char**)come_null_checker(self, "/usr/local/include/neo-c.h", 3984))[i]));
    }
    __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer*  shorta_to_buffer(short* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 3991, "struct buffer* "))), "/usr/local/include/neo-c.h", 3991)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 3995)),(char*)self,sizeof(short)*len);
    __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer*  inta_to_buffer(int* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4001, "struct buffer* "))), "/usr/local/include/neo-c.h", 4001)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4005)),(char*)self,sizeof(int)*len);
    __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer*  longa_to_buffer(long* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4011, "struct buffer* "))), "/usr/local/include/neo-c.h", 4011)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4015)),(char*)self,sizeof(long)*len);
    __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer*  floata_to_buffer(float* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4021, "struct buffer* "))), "/usr/local/include/neo-c.h", 4021)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4025)),(char*)self,sizeof(float)*len);
    __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct buffer*  doublea_to_buffer(double* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_buffer"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4031, "struct buffer* "))), "/usr/local/include/neo-c.h", 4031)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(self==((void*)0)) {
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4035)),(char*)self,sizeof(double)*len);
    __result_obj__0 = (struct buffer* )come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    len=((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4041))->len;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), (void*)0, 4042, "char*"));
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(result);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    n=0;
    for(i=0;i<len;i++){
        c=((char*)come_null_checker(((struct buffer* )come_null_checker(self, "/usr/local/include/neo-c.h", 4050))->buf, "/usr/local/include/neo-c.h", 4050))[i];
        if((c>=0&&c<32)||c==127) {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4055))[n++]=94;
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4056))[n++]=c+65-1;
        }
        else if(c>127) {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4059))[n++]=63;
        }
        else {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4062))[n++]=c;
        }
    }
    ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4068))[n]=0;
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1char$* __result_obj__0;
    ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1362))->head=((void*)0);
    ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1363))->tail=((void*)0);
    ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1364))->len=0;
    for(i=0;i<num_value;i++){
        list$1char$_push_back(((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1367)),((char*)come_null_checker(values, "/usr/local/include/neo-c.h", 1367))[i]);
    }
    __result_obj__0 = (struct list$1char$*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_push_back"; neo_current_frame = &fr;
    struct list$1char$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$* litem;
    struct list_item$1char$* litem_19;
    struct list_item$1char$* litem_20;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1491))->len==0) {
        litem=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), (void*)0, 1492, "struct list_item$1char$*"))));
        ((struct list_item$1char$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1494))->prev=((void*)0);
        ((struct list_item$1char$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1495))->next=((void*)0);
        ((struct list_item$1char$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=item;
        ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_19=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), (void*)0, 1502, "struct list_item$1char$*"))));
        ((struct list_item$1char$*)come_null_checker(litem_19, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1char$*)come_null_checker(litem_19, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        ((struct list_item$1char$*)come_null_checker(litem_19, "/usr/local/include/neo-c.h", 1506))->item=item;
        ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_19;
        ((struct list_item$1char$*)come_null_checker(((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_19;
    }
    else {
        litem_20=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), (void*)0, 1512, "struct list_item$1char$*"))));
        ((struct list_item$1char$*)come_null_checker(litem_20, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1char$*)come_null_checker(litem_20, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        ((struct list_item$1char$*)come_null_checker(litem_20, "/usr/local/include/neo-c.h", 1516))->item=item;
        ((struct list_item$1char$*)come_null_checker(((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_20;
        ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_20;
    }
    ((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$$p_finalize(struct list$1char$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1char$* it;
    struct list_item$1char$* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=((struct list$1char$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1char$* chara_to_list(char* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$* __result_obj__0;
    __result_obj__0 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value1=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count(((struct list$1char$*)come_null_checker(((struct list$1char$*)(__right_value0=(struct list$1char$*)come_calloc(1, sizeof(struct list$1char$)*(1), (void*)0, 4093, "struct list$1char$*"))), "/usr/local/include/neo-c.h", 4093))),len,self))));
    come_call_finalizer(list$1char$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1char$p* __result_obj__0;
    ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1362))->head=((void*)0);
    ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1363))->tail=((void*)0);
    ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1364))->len=0;
    for(i=0;i<num_value;i++){
        list$1char$p_push_back(((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1367)),((char**)come_null_checker(values, "/usr/local/include/neo-c.h", 1367))[i]);
    }
    __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(self);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_push_back"; neo_current_frame = &fr;
    struct list$1char$p* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$p* litem;
    struct list_item$1char$p* litem_21;
    struct list_item$1char$p* litem_22;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1491))->len==0) {
        litem=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), (void*)0, 1492, "struct list_item$1char$p*"))));
        ((struct list_item$1char$p*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1494))->prev=((void*)0);
        ((struct list_item$1char$p*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1495))->next=((void*)0);
        ((struct list_item$1char$p*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=item;
        ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_21=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), (void*)0, 1502, "struct list_item$1char$p*"))));
        ((struct list_item$1char$p*)come_null_checker(litem_21, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1char$p*)come_null_checker(litem_21, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        ((struct list_item$1char$p*)come_null_checker(litem_21, "/usr/local/include/neo-c.h", 1506))->item=item;
        ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_21;
        ((struct list_item$1char$p*)come_null_checker(((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_21;
    }
    else {
        litem_22=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), (void*)0, 1512, "struct list_item$1char$p*"))));
        ((struct list_item$1char$p*)come_null_checker(litem_22, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1char$p*)come_null_checker(litem_22, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        ((struct list_item$1char$p*)come_null_checker(litem_22, "/usr/local/include/neo-c.h", 1516))->item=item;
        ((struct list_item$1char$p*)come_null_checker(((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_22;
        ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_22;
    }
    ((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$p$p_finalize(struct list$1char$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p$p_finalize"; neo_current_frame = &fr;
    struct list_item$1char$p* it;
    struct list_item$1char$p* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=((struct list$1char$p*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1char$p*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$p$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1char$p* charpa_to_list(char** self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$p* __result_obj__0;
    __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value1=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)come_null_checker(((struct list$1char$p*)(__right_value0=(struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), (void*)0, 4098, "struct list$1char$p*"))), "/usr/local/include/neo-c.h", 4098))),len,self))));
    come_call_finalizer(list$1char$p$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1char$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1short$* __result_obj__0;
    ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1362))->head=((void*)0);
    ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1363))->tail=((void*)0);
    ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1364))->len=0;
    for(i=0;i<num_value;i++){
        list$1short$_push_back(((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1367)),((short*)come_null_checker(values, "/usr/local/include/neo-c.h", 1367))[i]);
    }
    __result_obj__0 = (struct list$1short$*)come_increment_ref_count(self);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_push_back"; neo_current_frame = &fr;
    struct list$1short$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1short$* litem;
    struct list_item$1short$* litem_23;
    struct list_item$1short$* litem_24;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1491))->len==0) {
        litem=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), (void*)0, 1492, "struct list_item$1short$*"))));
        ((struct list_item$1short$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1494))->prev=((void*)0);
        ((struct list_item$1short$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1495))->next=((void*)0);
        ((struct list_item$1short$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=item;
        ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_23=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), (void*)0, 1502, "struct list_item$1short$*"))));
        ((struct list_item$1short$*)come_null_checker(litem_23, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1short$*)come_null_checker(litem_23, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        ((struct list_item$1short$*)come_null_checker(litem_23, "/usr/local/include/neo-c.h", 1506))->item=item;
        ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_23;
        ((struct list_item$1short$*)come_null_checker(((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_23;
    }
    else {
        litem_24=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), (void*)0, 1512, "struct list_item$1short$*"))));
        ((struct list_item$1short$*)come_null_checker(litem_24, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1short$*)come_null_checker(litem_24, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        ((struct list_item$1short$*)come_null_checker(litem_24, "/usr/local/include/neo-c.h", 1516))->item=item;
        ((struct list_item$1short$*)come_null_checker(((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_24;
        ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_24;
    }
    ((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1short$$p_finalize(struct list$1short$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1short$* it;
    struct list_item$1short$* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=((struct list$1short$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1short$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1short$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1short$* shorta_to_list(short* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1short$* __result_obj__0;
    __result_obj__0 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value1=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count(((struct list$1short$*)come_null_checker(((struct list$1short$*)(__right_value0=(struct list$1short$*)come_calloc(1, sizeof(struct list$1short$)*(1), (void*)0, 4103, "struct list$1short$*"))), "/usr/local/include/neo-c.h", 4103))),len,self))));
    come_call_finalizer(list$1short$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1short$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1int$* __result_obj__0;
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1362))->head=((void*)0);
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1363))->tail=((void*)0);
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1364))->len=0;
    for(i=0;i<num_value;i++){
        list$1int$_push_back(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1367)),((int*)come_null_checker(values, "/usr/local/include/neo-c.h", 1367))[i]);
    }
    __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_push_back"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_25;
    struct list_item$1int$* litem_26;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1491))->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1492, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1494))->prev=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1495))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_25=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1502, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_25, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1int$*)come_null_checker(litem_25, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_25, "/usr/local/include/neo-c.h", 1506))->item=item;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_25;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_25;
    }
    else {
        litem_26=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), (void*)0, 1512, "struct list_item$1int$*"))));
        ((struct list_item$1int$*)come_null_checker(litem_26, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1int$*)come_null_checker(litem_26, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        ((struct list_item$1int$*)come_null_checker(litem_26, "/usr/local/include/neo-c.h", 1516))->item=item;
        ((struct list_item$1int$*)come_null_checker(((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_26;
        ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_26;
    }
    ((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=((struct list$1int$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1int$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1int$* inta_to_list(int* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* __result_obj__0;
    __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value1=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count(((struct list$1int$*)come_null_checker(((struct list$1int$*)(__right_value0=(struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), (void*)0, 4108, "struct list$1int$*"))), "/usr/local/include/neo-c.h", 4108))),len,self))));
    come_call_finalizer(list$1int$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1long$* __result_obj__0;
    ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1362))->head=((void*)0);
    ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1363))->tail=((void*)0);
    ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1364))->len=0;
    for(i=0;i<num_value;i++){
        list$1long$_push_back(((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1367)),((long*)come_null_checker(values, "/usr/local/include/neo-c.h", 1367))[i]);
    }
    __result_obj__0 = (struct list$1long$*)come_increment_ref_count(self);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_push_back"; neo_current_frame = &fr;
    struct list$1long$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1long$* litem;
    struct list_item$1long$* litem_27;
    struct list_item$1long$* litem_28;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1491))->len==0) {
        litem=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), (void*)0, 1492, "struct list_item$1long$*"))));
        ((struct list_item$1long$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1494))->prev=((void*)0);
        ((struct list_item$1long$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1495))->next=((void*)0);
        ((struct list_item$1long$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=item;
        ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_27=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), (void*)0, 1502, "struct list_item$1long$*"))));
        ((struct list_item$1long$*)come_null_checker(litem_27, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1long$*)come_null_checker(litem_27, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        ((struct list_item$1long$*)come_null_checker(litem_27, "/usr/local/include/neo-c.h", 1506))->item=item;
        ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_27;
        ((struct list_item$1long$*)come_null_checker(((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_27;
    }
    else {
        litem_28=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), (void*)0, 1512, "struct list_item$1long$*"))));
        ((struct list_item$1long$*)come_null_checker(litem_28, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1long$*)come_null_checker(litem_28, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        ((struct list_item$1long$*)come_null_checker(litem_28, "/usr/local/include/neo-c.h", 1516))->item=item;
        ((struct list_item$1long$*)come_null_checker(((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_28;
        ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_28;
    }
    ((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1long$$p_finalize(struct list$1long$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1long$* it;
    struct list_item$1long$* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=((struct list$1long$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1long$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1long$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1long$* longa_to_list(long* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1long$* __result_obj__0;
    __result_obj__0 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value1=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count(((struct list$1long$*)come_null_checker(((struct list$1long$*)(__right_value0=(struct list$1long$*)come_calloc(1, sizeof(struct list$1long$)*(1), (void*)0, 4113, "struct list$1long$*"))), "/usr/local/include/neo-c.h", 4113))),len,self))));
    come_call_finalizer(list$1long$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1long$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1float$* __result_obj__0;
    ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1362))->head=((void*)0);
    ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1363))->tail=((void*)0);
    ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1364))->len=0;
    for(i=0;i<num_value;i++){
        list$1float$_push_back(((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1367)),((float*)come_null_checker(values, "/usr/local/include/neo-c.h", 1367))[i]);
    }
    __result_obj__0 = (struct list$1float$*)come_increment_ref_count(self);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_push_back"; neo_current_frame = &fr;
    struct list$1float$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1float$* litem;
    struct list_item$1float$* litem_29;
    struct list_item$1float$* litem_30;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1491))->len==0) {
        litem=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), (void*)0, 1492, "struct list_item$1float$*"))));
        ((struct list_item$1float$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1494))->prev=((void*)0);
        ((struct list_item$1float$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1495))->next=((void*)0);
        ((struct list_item$1float$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=item;
        ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_29=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), (void*)0, 1502, "struct list_item$1float$*"))));
        ((struct list_item$1float$*)come_null_checker(litem_29, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1float$*)come_null_checker(litem_29, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        ((struct list_item$1float$*)come_null_checker(litem_29, "/usr/local/include/neo-c.h", 1506))->item=item;
        ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_29;
        ((struct list_item$1float$*)come_null_checker(((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), (void*)0, 1512, "struct list_item$1float$*"))));
        ((struct list_item$1float$*)come_null_checker(litem_30, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1float$*)come_null_checker(litem_30, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        ((struct list_item$1float$*)come_null_checker(litem_30, "/usr/local/include/neo-c.h", 1516))->item=item;
        ((struct list_item$1float$*)come_null_checker(((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_30;
        ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_30;
    }
    ((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1float$$p_finalize(struct list$1float$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1float$* it;
    struct list_item$1float$* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=((struct list$1float$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1float$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1float$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1float$* floata_to_list(float* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1float$* __result_obj__0;
    __result_obj__0 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value1=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count(((struct list$1float$*)come_null_checker(((struct list$1float$*)(__right_value0=(struct list$1float$*)come_calloc(1, sizeof(struct list$1float$)*(1), (void*)0, 4118, "struct list$1float$*"))), "/usr/local/include/neo-c.h", 4118))),len,self))));
    come_call_finalizer(list$1float$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1float$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1double$* __result_obj__0;
    ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1362))->head=((void*)0);
    ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1363))->tail=((void*)0);
    ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1364))->len=0;
    for(i=0;i<num_value;i++){
        list$1double$_push_back(((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1367)),((double*)come_null_checker(values, "/usr/local/include/neo-c.h", 1367))[i]);
    }
    __result_obj__0 = (struct list$1double$*)come_increment_ref_count(self);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_push_back"; neo_current_frame = &fr;
    struct list$1double$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1double$* litem;
    struct list_item$1double$* litem_31;
    struct list_item$1double$* litem_32;
    if(self==((void*)0)) {
        __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1491))->len==0) {
        litem=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), (void*)0, 1492, "struct list_item$1double$*"))));
        ((struct list_item$1double$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1494))->prev=((void*)0);
        ((struct list_item$1double$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1495))->next=((void*)0);
        ((struct list_item$1double$*)come_null_checker(litem, "/usr/local/include/neo-c.h", 1496))->item=item;
        ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1498))->tail=litem;
        ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1499))->head=litem;
    }
    else if(((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1501))->len==1) {
        litem_31=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), (void*)0, 1502, "struct list_item$1double$*"))));
        ((struct list_item$1double$*)come_null_checker(litem_31, "/usr/local/include/neo-c.h", 1504))->prev=((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1504))->head;
        ((struct list_item$1double$*)come_null_checker(litem_31, "/usr/local/include/neo-c.h", 1505))->next=((void*)0);
        ((struct list_item$1double$*)come_null_checker(litem_31, "/usr/local/include/neo-c.h", 1506))->item=item;
        ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1508))->tail=litem_31;
        ((struct list_item$1double$*)come_null_checker(((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1509))->head, "/usr/local/include/neo-c.h", 1509))->next=litem_31;
    }
    else {
        litem_32=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), (void*)0, 1512, "struct list_item$1double$*"))));
        ((struct list_item$1double$*)come_null_checker(litem_32, "/usr/local/include/neo-c.h", 1514))->prev=((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1514))->tail;
        ((struct list_item$1double$*)come_null_checker(litem_32, "/usr/local/include/neo-c.h", 1515))->next=((void*)0);
        ((struct list_item$1double$*)come_null_checker(litem_32, "/usr/local/include/neo-c.h", 1516))->item=item;
        ((struct list_item$1double$*)come_null_checker(((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1518))->tail, "/usr/local/include/neo-c.h", 1518))->next=litem_32;
        ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1519))->tail=litem_32;
    }
    ((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1522))->len++;
    __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1double$$p_finalize(struct list$1double$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$$p_finalize"; neo_current_frame = &fr;
    struct list_item$1double$* it;
    struct list_item$1double$* prev_it;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return;
    }
    it=((struct list$1double$*)come_null_checker(self, "/usr/local/include/neo-c.h", 1375))->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=((struct list_item$1double$*)come_null_checker(it, "/usr/local/include/neo-c.h", 1378))->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    neo_current_frame = fr.prev;
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1double$$p_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

struct list$1double$* doublea_to_list(double* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_list"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1double$* __result_obj__0;
    __result_obj__0 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value1=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count(((struct list$1double$*)come_null_checker(((struct list$1double$*)(__right_value0=(struct list$1double$*)come_calloc(1, sizeof(struct list$1double$)*(1), (void*)0, 4123, "struct list$1double$*"))), "/usr/local/include/neo-c.h", 4123))),len,self))));
    come_call_finalizer(list$1double$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    come_call_finalizer(list$1double$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool _Bool_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool size_t_equals(unsigned long  self  , unsigned long  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool float_equals(float self, float right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool double_equals(double self, double right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool char_operator_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool short_operator_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool int_operator_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool long_operator_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Bool_operator_not_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool char_operator_not_equals(char self, char right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool short_operator_not_equals(short self, short right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool int_operator_not_equals(int self, int right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool long_operator_not_equals(long self, long right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool charp_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_equals"; neo_current_frame = &fr;
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

_Bool string_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_equals"; neo_current_frame = &fr;
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

_Bool voidp_equals(void* self, void* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool _Boolp_equals(_Bool* self, _Bool* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Boolp_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return *self==*right;
    neo_current_frame = fr.prev;
}

_Bool string_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_equals"; neo_current_frame = &fr;
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

_Bool charp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_equals"; neo_current_frame = &fr;
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

_Bool chara_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_equals"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool voidp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return !charp_operator_equals(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 4311)),right);
    neo_current_frame = fr.prev;
}

_Bool string_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_not_equals"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_not_equals"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_not_equals"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_add"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    if(self==((void*)0)||right==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), (void*)0, 4358, "char*"));
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  string_operator_add(char* self, const char* right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_add"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    if(self==((void*)0)||right==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), (void*)0, 4373, "char*"));
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4386, "struct buffer* "))), "/usr/local/include/neo-c.h", 4386)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(i=0;i<right;i++){
        buffer_append_str(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 4389)),self);
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 4392))))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4400, "struct buffer* "))), "/usr/local/include/neo-c.h", 4400)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(i=0;i<right;i++){
        buffer_append_str(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 4403)),self);
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 4406))))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool charpa_contained(const char* self[], unsigned long  len  , const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_contained"; neo_current_frame = &fr;
    _Bool result;
    int i;
    result=(_Bool)0;
    if(self==((void*)0)) {
        neo_current_frame = fr.prev;
        return result;
    }
    for(i=0;i<len;i++){
        if(strncmp(self[i],str,strlen(self[i]))==0) {
            result=(_Bool)1;
            break;
        }
    }
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned long  shorta_length(short* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_length"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  inta_length(int* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "inta_length"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  longa_length(long* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "longa_length"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  floata_length(float* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "floata_length"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  doublea_length(double* self, unsigned long  len  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_length"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned int _Bool_get_hash_key(_Bool value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

unsigned int char_get_hash_key(char value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int short_get_hash_key(short int value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int int_get_hash_key(int value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int long_get_hash_key(long value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int size_t_get_hash_key(unsigned long  value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int float_get_hash_key(float value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int double_get_hash_key(double value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int charp_get_hash_key(const char* value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_get_hash_key"; neo_current_frame = &fr;
    int result;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_get_hash_key"; neo_current_frame = &fr;
    int result;
    char* p;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

_Bool _Bool_clone(_Bool self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

char char_clone(char self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

short int short_clone(short self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

int int_clone(int self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long  int long_clone(long self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

unsigned long  size_t_clone(unsigned long  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

double double_clone(double self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

float float_clone(float self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_clone"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

_Bool xisalpha(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisalpha"; neo_current_frame = &fr;
    _Bool result;
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xisblank(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisblank"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xisdigit(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisdigit"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xisspace(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisspace"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return c==32||c==9||c==10||c==13||c==28||c==11;
    neo_current_frame = fr.prev;
}

_Bool xisalnum(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisalnum"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return xisalpha(c)||xisdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xisascii(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xisascii"; neo_current_frame = &fr;
    _Bool result;
    result=(c>=32&&c<=126);
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xispunct(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xispunct"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
    neo_current_frame = fr.prev;
}

int string_length(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_length"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_length"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_length"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_reverse"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str);
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len+1)), (void*)0, 4654, "char*"));
    for(i=0;i<len;i++){
        ((char*)come_null_checker(result, "/usr/local/include/neo-c.h", 4657))[i]=((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 4657))[len-i-1];
    }
    ((char*)come_null_checker(result, "/usr/local/include/neo-c.h", 4660))[len]=0;
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )come_null_checker(((char* )(__right_value0=charp_substring(((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 4681)),tail,head))), "/usr/local/include/neo-c.h", 4681))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), (void*)0, 4700, "char*"));
    memcpy(result,str+head,tail-head);
    ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4703))[tail-head]=0;
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )come_null_checker(((char* )(__right_value0=charp_substring(((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 4724)),tail,head))), "/usr/local/include/neo-c.h", 4724))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), (void*)0, 4743, "char*"));
    memcpy(result,str+head,tail-head);
    ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4746))[tail-head]=0;
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )come_null_checker(((char* )(__right_value0=charp_substring(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 4767)),tail,head))), "/usr/local/include/neo-c.h", 4767))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), (void*)0, 4786, "char*"));
    memcpy(result,str+head,tail-head);
    ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4789))[tail-head]=0;
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    if(msg==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&result,msg,args);
    __builtin_va_end(args);
    if(len<0) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result2=(char* )come_increment_ref_count(__builtin_string(result));
    free(result);
    __result_obj__0 = (char* )come_increment_ref_count(result2);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  charp_delete(char* str, int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_delete"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head>=len) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(strcmp(str,"")==0) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail>=len) {
        tail=len;
    }
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len-(tail-head)+1)), (void*)0, 4852, "char*"));
    memcpy(result,str,head);
    memcpy(result+head,str+tail,len-tail);
    ((char*)come_null_checker(result, "/usr/local/include/neo-c.h", 4857))[len-(tail-head)]=0;
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    int i;
    if(self==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 4865, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 4865)))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 4868, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 4868)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    str=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4870, "struct buffer* "))), "/usr/local/include/neo-c.h", 4870)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(i=0;i<charp_length(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 4872)));i++){
        if(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 4873))[i]==c) {
            list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 4874)),(char* )come_increment_ref_count(__builtin_string(((struct buffer* )come_null_checker(str, "/usr/local/include/neo-c.h", 4874))->buf)));
            buffer_reset(((struct buffer* )come_null_checker(str, "/usr/local/include/neo-c.h", 4875)));
        }
        else {
            buffer_append_char(((struct buffer* )come_null_checker(str, "/usr/local/include/neo-c.h", 4878)),((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 4878))[i]);
        }
    }
    if(buffer_length(((struct buffer* )come_null_checker(str, "/usr/local/include/neo-c.h", 4881)))!=0) {
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 4882)),(char* )come_increment_ref_count(__builtin_string(((struct buffer* )come_null_checker(str, "/usr/local/include/neo-c.h", 4882))->buf)));
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  charp_xsprintf(char* self, const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_xsprintf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  int_xsprintf(int self, const char* msg, ...)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_xsprintf"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=charp_length(((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 4903)));
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len*2+1)), (void*)0, 4904, "char*"));
    n=0;
    for(i=0;i<len;i++){
        c=((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 4908))[i];
        if((c>=0&&c<32)||c==127) {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4913))[n++]=94;
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4914))[n++]=c+65-1;
        }
        else {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4917))[n++]=c;
        }
    }
    ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 4923))[n]=0;
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  chara_printable(char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_printable"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_printable(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    if(self==((void*)0)||str==((void*)0)||replace==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 4937, "struct buffer* "))), "/usr/local/include/neo-c.h", 4937)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    p=self;
    while((_Bool)1) {
        p2=strstr(p,str);
        if(p2==((void*)0)) {
            p2=p;
            while(*p2) {
                p2++;
            }
            buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4949)),p,p2-p);
            break;
        }
        buffer_append(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4953)),p,p2-p);
        buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4954)),replace);
        p=p2+strlen(str);
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 4959))))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  xbasename(char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xbasename"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    if(path==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  xnoextname(char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xnoextname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  path2  ;
    char* p;
    if(path==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    path2=(char* )come_increment_ref_count(xbasename(path));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path2))));
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(((char* )come_null_checker(path2, "/usr/local/include/neo-c.h", 5013)),0,p-path2))));
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
    (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  xextname(char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xextname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    if(path==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  _Bool_to_string(_Bool self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("true"))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("false"))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

char*  char_to_string(char self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%c",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  short_to_string(short self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  int_to_string(int self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  long_to_string(long self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  size_t_to_string(unsigned long  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  float_to_string(float self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%f",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  double_to_string(double self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%lf",self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  string_to_string(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  charp_to_string(const char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int _Bool_compare(_Bool left, _Bool right)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_compare"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "char_compare"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "short_compare"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_compare"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_compare"; neo_current_frame = &fr;
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

int size_t_compare(unsigned long  left  , unsigned long  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_compare"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "float_compare"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "double_compare"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_compare"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_compare"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_puts"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    puts(self);
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  charp_print(char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_print"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    printf("%s",self);
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __builtin_va_start(args,self);
    vasprintf(&msg2,self,args);
    __builtin_va_end(args);
    printf("%s",msg2);
    free(msg2);
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int int_printf(int self, char* msg)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_printf"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "long_printf"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_times"; neo_current_frame = &fr;
    int i;
    for(i=0;i<self;i++){
        block(parent,i);
    }
    neo_current_frame = fr.prev;
}

static void match_context_finalize(struct anonymous_typeX25*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "match_context_finalize"; neo_current_frame = &fr;
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
    *matchlength=0;
    if(pattern==0) {
        neo_current_frame = fr.prev;
        return -1;
    }
    program=(struct re_program* )pattern;
    start=((struct re_program* )come_null_checker(program, "/usr/local/include/neo-c.h", 5523))->start;
    if(start==0) {
        neo_current_frame = fr.prev;
        return -1;
    }
    ctx.base=text;
    ctx.captures=(((captures!=0&&max_captures>0))?(captures):(0));
    ctx.capture_capacity=(((captures!=0&&max_captures>0))?(max_captures):(0));
    if(ctx.capture_capacity>64) {
        ctx.capture_capacity=64;
    }
    ctx.total_groups=((struct re_program* )come_null_checker(program, "/usr/local/include/neo-c.h", 5537))->group_count;
    ctx.ignore_case=ignore_case;
    if(ctx.captures!=0) {
        clear_captures(&ctx);
    }
    if(((struct regex_t* )come_null_checker(start, "/usr/local/include/neo-c.h", 5545))->type==(2)) {
        const char* end=matchpattern(((struct regex_t* )come_null_checker(start, "/usr/local/include/neo-c.h", 5547))->next,text,&ctx);
        if(end!=0) {
            *matchlength=(int)(end-text);
            if(ctx.captures!=0) {
            }
            __result_obj__0 = 0;
            come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __result_obj__0 = -1;
        come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else {
        const char* cursor=text;
        while(1) {
            if(ctx.captures!=0) {
                clear_captures(&ctx);
            }
            const char* end_33=matchpattern(start,cursor,&ctx);
            if(end_33!=0) {
                if(*cursor==0&&cursor!=text) {
                    __result_obj__0 = -1;
                    come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                *matchlength=(int)(end_33-cursor);
                __result_obj__0 = (int)(cursor-text);
                come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            if(*cursor==0) {
                break;
            }
            cursor+=1;
        }
    }
    __result_obj__0 = -1;
    come_call_finalizer(match_context_finalize, (&ctx), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int re_matchp(struct re_program*  pattern  , const char* text, int* matchlength, struct re_capture*  captures  , int max_captures)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_matchp"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return re_matchp_ex(pattern,text,matchlength,captures,max_captures,(_Bool)0);
    neo_current_frame = fr.prev;
}

int re_match(const char* pattern, const char* text, int* matchlength)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_match"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return re_matchp(re_compile(pattern),text,matchlength,(struct re_capture* )0,0);
    neo_current_frame = fr.prev;
}

static void regex_program_t_finalize(struct re_program*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "regex_program_t_finalize"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
}

static void compiler_state_finalize(struct anonymous_typeX24*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "compiler_state_finalize"; neo_current_frame = &fr;
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
    static struct regex_t  re_compiled[64]  ;
    memset(&re_compiled, 0, sizeof(re_compiled));
    static unsigned char ccl_buf[40];
    memset(&ccl_buf, 0, sizeof(ccl_buf));
    state.pool=re_compiled;
    state.pool_capacity=64;
    state.pool_size=0;
    state.ccl_buf=ccl_buf;
    state.ccl_capacity=40;
    state.ccl_idx=1;
    state.group_count=0;
    if(state.ccl_capacity>0) {
        ((unsigned char*)come_null_checker(state.ccl_buf, "/usr/local/include/neo-c.h", 5617))[0]=0;
    }
    pos=0;
    head=compile_sequence(&state,pattern,&pos,0);
    if((head==0)||(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5622))[pos]!=0)) {
        __result_obj__0 = ((void*)0);
        come_call_finalizer(regex_program_t_finalize, (&program), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer(compiler_state_finalize, (&state), (void*)0, (void*)0, 1, 0, 0, (void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    program.start=head;
    program.group_count=state.group_count;
    __result_obj__0 = (struct re_program* )&program;
    come_call_finalizer(regex_program_t_finalize, (&program), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer(compiler_state_finalize, (&state), (void*)0, (void*)0, 1, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void re_print(struct re_program*  pattern  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_print"; neo_current_frame = &fr;
    struct re_program*  program  ;
    if(pattern==0) {
        neo_current_frame = fr.prev;
        return;
    }
    program=(struct re_program* )pattern;
    if(((struct re_program* )come_null_checker(program, "/usr/local/include/neo-c.h", 5641))->start==0) {
        neo_current_frame = fr.prev;
        return;
    }
    re_print_internal(((struct re_program* )come_null_checker(program, "/usr/local/include/neo-c.h", 5646))->start,0);
    neo_current_frame = fr.prev;
}

void clear_captures(struct anonymous_typeX25*  ctx  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "clear_captures"; neo_current_frame = &fr;
    int i;
    if((((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5653))->captures==0)||(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5653))->capture_capacity<=0)) {
        neo_current_frame = fr.prev;
        return;
    }
    for(i=0;i<((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5658))->capture_capacity;++i){
        ((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5660))->captures, "/usr/local/include/neo-c.h", 5660))[i].start=-1;
        ((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5661))->captures, "/usr/local/include/neo-c.h", 5661))[i].length=0;
    }
    neo_current_frame = fr.prev;
}

void snapshot_captures(const struct anonymous_typeX25*  ctx  , struct re_capture*  buffer_  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "snapshot_captures"; neo_current_frame = &fr;
    if((((const struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5667))->captures==0)||(((const struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5667))->capture_capacity<=0)) {
        neo_current_frame = fr.prev;
        return;
    }
    memcpy(buffer_,((const struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5672))->captures,sizeof(struct re_capture )*((const struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5672))->capture_capacity);
    neo_current_frame = fr.prev;
}

void restore_captures(struct anonymous_typeX25*  ctx  , const struct re_capture*  buffer_  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "restore_captures"; neo_current_frame = &fr;
    if((((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5677))->captures==0)||(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5677))->capture_capacity<=0)) {
        neo_current_frame = fr.prev;
        return;
    }
    memcpy(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5682))->captures,buffer_,sizeof(struct re_capture )*((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5682))->capture_capacity);
    neo_current_frame = fr.prev;
}

struct regex_t*  new_token(struct anonymous_typeX24*  st  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "new_token"; neo_current_frame = &fr;
    struct regex_t*  __result_obj__0  ;
    struct regex_t*  token  ;
    if(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5688))->pool_size>=((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5688))->pool_capacity) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    token=&((struct regex_t* )come_null_checker(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5693))->pool, "/usr/local/include/neo-c.h", 5693))[((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5693))->pool_size++];
    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5694))->type=(0);
    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5695))->u.ccl=((void*)0);
    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5696))->next=((void*)0);
    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5697))->u.group.first=((void*)0);
    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5698))->u.group.last=((void*)0);
    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5699))->u.group.id=0;
    __result_obj__0 = token;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int append_token(struct regex_t**  head  , struct regex_t**  tail  , struct regex_t*  token  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "append_token"; neo_current_frame = &fr;
    if(token==0) {
        neo_current_frame = fr.prev;
        return 0;
    }
    if(*head==0) {
        *head=token;
    }
    else {
        ((struct regex_t* )come_null_checker((*tail), "/usr/local/include/neo-c.h", 5716))->next=token;
    }
    *tail=token;
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
    int buf_begin;
    int negated;
    struct regex_t*  inner  ;
    struct regex_t*  tail_34  ;
    struct regex_t*  sentinel  ;
    head=(struct regex_t* )0;
    tail=(struct regex_t* )0;
    while(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5727))[*pos]!=0) {
        c=((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5729))[*pos];
        if(in_group&&(c==41)) {
            break;
        }
        token=(struct regex_t* )0;
        switch (        c) {
            case 94:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5744))->type=(2);
                (*pos)++;
            }
            break;
            case 36:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5752))->type=(3);
                (*pos)++;
            }
            break;
            case 46:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5760))->type=(1);
                (*pos)++;
            }
            break;
            case 42:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5768))->type=(5);
                (*pos)++;
            }
            break;
            case 43:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5776))->type=(6);
                (*pos)++;
            }
            break;
            case 63:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5784))->type=(4);
                (*pos)++;
            }
            break;
            case 92:
            {
                (*pos)++;
                if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5791))[*pos]==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                switch (                ((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5799))[*pos]) {
                    case 100:
                    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5801))->type=(10);
                    break;
                    case 68:
                    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5802))->type=(11);
                    break;
                    case 119:
                    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5803))->type=(12);
                    break;
                    case 87:
                    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5804))->type=(13);
                    break;
                    case 115:
                    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5805))->type=(14);
                    break;
                    case 83:
                    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5806))->type=(15);
                    break;
                    default:
                    {
                        ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5809))->type=(7);
                        ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5810))->u.ch=(unsigned char)((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5810))[*pos];
                    }
                    break;
                }
                (*pos)++;
            }
            break;
            case 91:
            {
                buf_begin=((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5818))->ccl_idx;
                negated=0;
                (*pos)++;
                if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5822))[*pos]==94) {
                    negated=1;
                    (*pos)++;
                    if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5826))[*pos]==0) {
                        __result_obj__0 = ((void*)0);
                        neo_current_frame = fr.prev;
                        return __result_obj__0;
                    }
                }
                if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5832))[*pos]==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                while((((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5837))[*pos]!=0)&&(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5837))[*pos]!=93)) {
                    if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5839))[*pos]==92) {
                        if(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5841))->ccl_idx>=(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5841))->ccl_capacity-1)) {
                            __result_obj__0 = ((void*)0);
                            neo_current_frame = fr.prev;
                            return __result_obj__0;
                        }
                        ((unsigned char*)come_null_checker(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5845))->ccl_buf, "/usr/local/include/neo-c.h", 5845))[((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5845))->ccl_idx++]=92;
                        (*pos)++;
                        if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5847))[*pos]==0) {
                            __result_obj__0 = ((void*)0);
                            neo_current_frame = fr.prev;
                            return __result_obj__0;
                        }
                    }
                    if(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5853))->ccl_idx>=((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5853))->ccl_capacity) {
                        __result_obj__0 = ((void*)0);
                        neo_current_frame = fr.prev;
                        return __result_obj__0;
                    }
                    ((unsigned char*)come_null_checker(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5857))->ccl_buf, "/usr/local/include/neo-c.h", 5857))[((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5857))->ccl_idx++]=(unsigned char)((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5857))[*pos];
                    (*pos)++;
                }
                if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5861))[*pos]!=93) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                if(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5866))->ccl_idx>=((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5866))->ccl_capacity) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((unsigned char*)come_null_checker(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5870))->ccl_buf, "/usr/local/include/neo-c.h", 5870))[((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5870))->ccl_idx++]=0;
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5874))->type=((negated)?((9)):((8)));
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5875))->u.ccl=&((unsigned char*)come_null_checker(((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5875))->ccl_buf, "/usr/local/include/neo-c.h", 5875))[buf_begin];
                (*pos)++;
            }
            break;
            case 40:
            {
                (*pos)++;
                inner=compile_sequence(st,pattern,pos,1);
                if(inner==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                if(((const char*)come_null_checker(pattern, "/usr/local/include/neo-c.h", 5888))[*pos]!=41) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                tail_34=inner;
                while((tail_34!=0)&&(((struct regex_t* )come_null_checker(tail_34, "/usr/local/include/neo-c.h", 5894))->type!=(0))) {
                    tail_34=((struct regex_t* )come_null_checker(tail_34, "/usr/local/include/neo-c.h", 5896))->next;
                }
                if(tail_34==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5905))->type=(16);
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5906))->u.group.first=inner;
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5907))->u.group.last=tail_34;
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5908))->u.group.id=++((struct anonymous_typeX24* )come_null_checker(st, "/usr/local/include/neo-c.h", 5908))->group_count;
                ((struct regex_t* )come_null_checker(tail_34, "/usr/local/include/neo-c.h", 5910))->type=(17);
                ((struct regex_t* )come_null_checker(tail_34, "/usr/local/include/neo-c.h", 5911))->u.group.first=token;
                (*pos)++;
            }
            break;
            case 41:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5920))->type=(7);
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5921))->u.ch=(unsigned char)c;
                (*pos)++;
            }
            break;
            default:
            {
                token=new_token(st);
                if(token==0) {
                    __result_obj__0 = ((void*)0);
                    neo_current_frame = fr.prev;
                    return __result_obj__0;
                }
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5929))->type=(7);
                ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 5930))->u.ch=(unsigned char)c;
                (*pos)++;
            }
            break;
        }
        if(!append_token(&head,&tail,token)) {
            __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    sentinel=new_token(st);
    if(sentinel==0) {
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ((struct regex_t* )come_null_checker(sentinel, "/usr/local/include/neo-c.h", 5946))->type=(0);
    ((struct regex_t* )come_null_checker(sentinel, "/usr/local/include/neo-c.h", 5947))->next=((void*)0);
    if(head==0) {
        head=sentinel;
    }
    else {
        ((struct regex_t* )come_null_checker(tail, "/usr/local/include/neo-c.h", 5955))->next=sentinel;
    }
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
    if(pattern==0) {
        __result_obj__0 = text;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 5968))->type==(0)) {
        __result_obj__0 = text;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    struct re_capture  snapshot[64]  ;
    memset(&snapshot, 0, sizeof(snapshot));
    snapshot_captures(ctx,snapshot);
    current=pattern;
    const char* cursor=text;
    while(current!=0&&((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 5979))->type!=(0)) {
        next=((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 5981))->next;
        if(((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 5983))->type==(17)) {
            owner=((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 5985))->u.group.first;
            if((owner!=0)&&(((struct regex_t* )come_null_checker(owner, "/usr/local/include/neo-c.h", 5986))->u.group.id>0)&&(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5986))->captures!=0)) {
                idx=((struct regex_t* )come_null_checker(owner, "/usr/local/include/neo-c.h", 5988))->u.group.id-1;
                if(idx<((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5989))->capture_capacity) {
                    start=((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5991))->captures, "/usr/local/include/neo-c.h", 5991))[idx].start;
                    if(start>=0) {
                        ((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5994))->captures, "/usr/local/include/neo-c.h", 5994))[idx].length=(int)(cursor-((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5994))->base)-start;
                        if(((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5995))->captures, "/usr/local/include/neo-c.h", 5995))[idx].length<0) {
                            ((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 5997))->captures, "/usr/local/include/neo-c.h", 5997))[idx].length=0;
                        }
                    }
                }
            }
            current=((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 6002))->next;
            continue;
        }
        if((next!=0)&&(((struct regex_t* )come_null_checker(next, "/usr/local/include/neo-c.h", 6006))->type==(4))) {
            const char* result=matchquestion(current,((struct regex_t* )come_null_checker(next, "/usr/local/include/neo-c.h", 6008))->next,cursor,ctx);
            if(result!=0) {
                __result_obj__0 = result;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            restore_captures(ctx,snapshot);
            __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if((next!=0)&&(((struct regex_t* )come_null_checker(next, "/usr/local/include/neo-c.h", 6016))->type==(5))) {
            const char* result_35=matchstar(current,((struct regex_t* )come_null_checker(next, "/usr/local/include/neo-c.h", 6018))->next,cursor,ctx);
            if(result_35!=0) {
                __result_obj__0 = result_35;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            restore_captures(ctx,snapshot);
            __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if((next!=0)&&(((struct regex_t* )come_null_checker(next, "/usr/local/include/neo-c.h", 6026))->type==(6))) {
            const char* result_36=matchplus(current,((struct regex_t* )come_null_checker(next, "/usr/local/include/neo-c.h", 6028))->next,cursor,ctx);
            if(result_36!=0) {
                __result_obj__0 = result_36;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            restore_captures(ctx,snapshot);
            __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 6036))->type==(16)) {
            const char* result_37=matchgroup(current,next,cursor,ctx);
            if(result_37!=0) {
                __result_obj__0 = result_37;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            restore_captures(ctx,snapshot);
            __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 6046))->type==(3)) {
            if(*cursor!=0) {
                restore_captures(ctx,snapshot);
                __result_obj__0 = ((void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            current=((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 6053))->next;
        }
        else {
            const char* after=matchtoken(current,cursor,ctx);
            if(after==0) {
                restore_captures(ctx,snapshot);
                __result_obj__0 = ((void*)0);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            cursor=after;
            current=((struct regex_t* )come_null_checker(current, "/usr/local/include/neo-c.h", 6064))->next;
        }
    }
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
    struct re_capture  snapshot_entry[64]  ;
    memset(&snapshot_entry, 0, sizeof(snapshot_entry));
    snapshot_captures(ctx,snapshot_entry);
    end_token=((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6076))->u.group.last;
    saved_next=((end_token!=0)?(((struct regex_t* )come_null_checker(end_token, "/usr/local/include/neo-c.h", 6077))->next):(0));
    if(end_token!=0) {
        ((struct regex_t* )come_null_checker(end_token, "/usr/local/include/neo-c.h", 6080))->next=rest;
    }
    if(((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6083))->u.group.id>0&&((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6083))->captures!=0) {
        idx=((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6085))->u.group.id-1;
        if(idx<((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6086))->capture_capacity) {
            ((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6088))->captures, "/usr/local/include/neo-c.h", 6088))[idx].start=(int)(text-((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6088))->base);
            ((struct re_capture* )come_null_checker(((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6089))->captures, "/usr/local/include/neo-c.h", 6089))[idx].length=0;
        }
    }
    const char* result=matchpattern(((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6093))->u.group.first,text,ctx);
    if(end_token!=0) {
        ((struct regex_t* )come_null_checker(end_token, "/usr/local/include/neo-c.h", 6097))->next=saved_next;
    }
    if(result==0) {
        restore_captures(ctx,snapshot_entry);
    }
    __result_obj__0 = result;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

const char* matchstar(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX25*  ctx  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchstar"; neo_current_frame = &fr;
    const char* __result_obj__0;
    struct re_capture  snapshot_entry[64]  ;
    memset(&snapshot_entry, 0, sizeof(snapshot_entry));
    snapshot_captures(ctx,snapshot_entry);
    const char* consume=matchtoken(token,text,ctx);
    while((consume!=0)&&(consume!=text)) {
        struct re_capture  snapshot_after_token[64]  ;
        memset(&snapshot_after_token, 0, sizeof(snapshot_after_token));
        snapshot_captures(ctx,snapshot_after_token);
        const char* recursive=matchstar(token,rest,consume,ctx);
        if(recursive!=0) {
            __result_obj__0 = recursive;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        restore_captures(ctx,snapshot_after_token);
        consume=matchtoken(token,consume,ctx);
    }
    restore_captures(ctx,snapshot_entry);
    __result_obj__0 = matchpattern(rest,text,ctx);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

const char* matchplus(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX25*  ctx  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchplus"; neo_current_frame = &fr;
    const char* __result_obj__0;
    struct re_capture  snapshot_entry[64]  ;
    memset(&snapshot_entry, 0, sizeof(snapshot_entry));
    snapshot_captures(ctx,snapshot_entry);
    const char* first=matchtoken(token,text,ctx);
    if((first==0)||(first==text)) {
        restore_captures(ctx,snapshot_entry);
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    const char* result=matchstar(token,rest,first,ctx);
    if(result!=0) {
        __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    restore_captures(ctx,snapshot_entry);
    __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

const char* matchquestion(struct regex_t*  token  , struct regex_t*  rest  , const char* text, struct anonymous_typeX25*  ctx  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchquestion"; neo_current_frame = &fr;
    const char* __result_obj__0;
    struct re_capture  snapshot_entry[64]  ;
    memset(&snapshot_entry, 0, sizeof(snapshot_entry));
    snapshot_captures(ctx,snapshot_entry);
    const char* skipped=matchpattern(rest,text,ctx);
    if(skipped!=0) {
        __result_obj__0 = skipped;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    restore_captures(ctx,snapshot_entry);
    const char* consumed=matchtoken(token,text,ctx);
    if((consumed==0)||(consumed==text)) {
        restore_captures(ctx,snapshot_entry);
        __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    const char* with=matchpattern(rest,consumed,ctx);
    if(with!=0) {
        __result_obj__0 = with;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    restore_captures(ctx,snapshot_entry);
    __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

unsigned char re_fold_char(unsigned char c, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_fold_char"; neo_current_frame = &fr;
    if(ignore_case&&c>=65&&c<=90) {
        neo_current_frame = fr.prev;
        return (unsigned char)(c-65+97);
    }
    neo_current_frame = fr.prev;
    return c;
    neo_current_frame = fr.prev;
}

const char* matchtoken(struct regex_t*  token  , const char* text, struct anonymous_typeX25*  ctx  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchtoken"; neo_current_frame = &fr;
    const char* __result_obj__0;
    switch (    ((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6196))->type) {
        case (1):
        __result_obj__0 = (((*text!=0&&matchdot(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (7):
        __result_obj__0 = (((*text!=0&&re_fold_char(((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6203))->u.ch,((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6203))->ignore_case)==re_fold_char((unsigned char)*text,((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6203))->ignore_case)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (8):
        __result_obj__0 = (((*text!=0&&matchcharclass(*text,(const char*)((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6207))->u.ccl,((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6207))->ignore_case)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (9):
        __result_obj__0 = (((*text!=0&&!matchcharclass(*text,(const char*)((struct regex_t* )come_null_checker(token, "/usr/local/include/neo-c.h", 6210))->u.ccl,((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6210))->ignore_case)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (10):
        __result_obj__0 = (((*text!=0&&matchdigit(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (11):
        __result_obj__0 = (((*text!=0&&!matchdigit(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (12):
        __result_obj__0 = (((*text!=0&&matchalphanum(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (13):
        __result_obj__0 = (((*text!=0&&!matchalphanum(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (14):
        __result_obj__0 = (((*text!=0&&matchwhitespace(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (15):
        __result_obj__0 = (((*text!=0&&!matchwhitespace(*text)))?(text+1):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (16):
        __result_obj__0 = matchgroup(token,(struct regex_t* )0,text,ctx);
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (2):
        __result_obj__0 = (((text==((struct anonymous_typeX25* )come_null_checker(ctx, "/usr/local/include/neo-c.h", 6234))->base))?(text):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case (3):
        __result_obj__0 = (((*text==0))?(text):(0));
        neo_current_frame = fr.prev;
        return __result_obj__0;
        default:
        break;
    }
    __result_obj__0 = (const char*)0;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int matchdigit(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchdigit"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return xisdigit((unsigned char)c);
    neo_current_frame = fr.prev;
}

int matchalpha(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchalpha"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return xisalpha((unsigned char)c);
    neo_current_frame = fr.prev;
}

int matchwhitespace(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchwhitespace"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return xisspace((unsigned char)c);
    neo_current_frame = fr.prev;
}

int matchalphanum(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchalphanum"; neo_current_frame = &fr;
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
    needle=(unsigned char)c;
    start=(unsigned char)((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6266))[0];
    end=(unsigned char)((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6267))[2];
    if(ignore_case) {
        needle=re_fold_char(needle,(_Bool)1);
        start=re_fold_char(start,(_Bool)1);
        end=re_fold_char(end,(_Bool)1);
    }
    neo_current_frame = fr.prev;
    return ((needle!=45)&&(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6275))[0]!=0)&&(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6276))[0]!=45)&&(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6277))[1]==45)&&(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6278))[2]!=0)&&((needle>=start)&&(needle<=end)));
    neo_current_frame = fr.prev;
}

int matchdot(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchdot"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return c!=10&&c!=13;
    neo_current_frame = fr.prev;
}

int ismetachar(char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "ismetachar"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return ((c==115)||(c==83)||(c==119)||(c==87)||(c==100)||(c==68));
    neo_current_frame = fr.prev;
}

int matchmetachar(char c, const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchmetachar"; neo_current_frame = &fr;
    switch (    ((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6297))[0]) {
        case 100:
        neo_current_frame = fr.prev;
        return matchdigit(c);
        case 68:
        neo_current_frame = fr.prev;
        return !matchdigit(c);
        case 119:
        neo_current_frame = fr.prev;
        return matchalphanum(c);
        case 87:
        neo_current_frame = fr.prev;
        return !matchalphanum(c);
        case 115:
        neo_current_frame = fr.prev;
        return matchwhitespace(c);
        case 83:
        neo_current_frame = fr.prev;
        return !matchwhitespace(c);
        default:
        neo_current_frame = fr.prev;
        return (c==((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6305))[0]);
    }
    neo_current_frame = fr.prev;
}

int matchcharclass(char c, const char* str, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "matchcharclass"; neo_current_frame = &fr;
    unsigned char needle;
    needle=re_fold_char((unsigned char)c,ignore_case);
    do {
        if(matchrange((char)needle,str,ignore_case)) {
            neo_current_frame = fr.prev;
            return 1;
        }
        else if(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6318))[0]==92) {
            str+=1;
            if(matchmetachar((char)needle,str)) {
                neo_current_frame = fr.prev;
                return 1;
            }
            else if((needle==re_fold_char((unsigned char)((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6325))[0],ignore_case))&&!ismetachar((char)needle)) {
                neo_current_frame = fr.prev;
                return 1;
            }
        }
        else if(needle==re_fold_char((unsigned char)((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6330))[0],ignore_case)) {
            if(needle==45) {
                neo_current_frame = fr.prev;
                return ((((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6334))[-1]==0)||(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 6334))[1]==0));
            }
            else {
                neo_current_frame = fr.prev;
                return 1;
            }
        }
    } while(*str++!=0);
    neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

void re_print_internal(struct regex_t*  pattern  , int depth)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_print_internal"; neo_current_frame = &fr;
    int i;
    const char* types[]={
    "RE_UNUSED", "RE_DOT", "RE_BEGIN", "RE_END", "RE_QUESTIONMARK", "RE_STAR", "RE_PLUS", "RE_CHAR",
    "RE_CHAR_CLASS", "RE_INV_CHAR_CLASS", "RE_DIGIT", "RE_NOT_DIGIT", "RE_ALPHA", "RE_NOT_ALPHA",
    "RE_WHITESPACE", "RE_NOT_WHITESPACE", "RE_GROUP", "RE_GROUP_END"
  };
    while(pattern!=0&&((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6356))->type!=(0)) {
        for(i=0;i<depth;++i){
            putchar(32);
        }
        printf("type: %s",types[((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6362))->type]);
        if((((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6364))->type==(8))||(((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6364))->type==(9))) {
            printf(" [");
            const unsigned char* ccl=((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6367))->u.ccl;
            while(*ccl!=0&&*ccl!=93) {
                printf("%c",*ccl);
                ++ccl;
            }
            printf("]");
        }
        else if(((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6375))->type==(7)) {
            printf(" '%c'",((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6377))->u.ch);
        }
        else if(((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6379))->type==(16)) {
            printf(" id=%d\n",((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6381))->u.group.id);
            re_print_internal(((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6382))->u.group.first,depth+2);
            pattern=((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6383))->next;
            continue;
        }
        printf("\n");
        pattern=((struct regex_t* )come_null_checker(pattern, "/usr/local/include/neo-c.h", 6388))->next;
    }
    neo_current_frame = fr.prev;
}

int re_get_group_count(struct re_program*  pattern  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "re_get_group_count"; neo_current_frame = &fr;
    struct re_program*  program  ;
    if(pattern==0) {
        neo_current_frame = fr.prev;
        return 0;
    }
    program=(struct re_program* )pattern;
    neo_current_frame = fr.prev;
    return ((struct re_program* )come_null_checker(program, "/usr/local/include/neo-c.h", 6400))->group_count;
    neo_current_frame = fr.prev;
}

int charp_index_regex(const char* self, const char* reg, int default_value, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index_regex"; neo_current_frame = &fr;
    struct re_program*  re  ;
    int result;
    int offset;
    int n;
    int result_38;
    int matchlength;
    int max_captures;
    int regex_result;
    if(self==((void*)0)||reg==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    re=re_compile(reg);
    if(re==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    result=default_value;
    offset=0;
    n=0;
    result_38=default_value;
    while((_Bool)1) {
        matchlength=0;
        max_captures=8;
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0) {
            result_38=regex_result;
            break;
        }
        {
            break;
        }
    }
    neo_current_frame = fr.prev;
    return result_38;
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
    int result_39;
    int matchlength;
    int max_captures;
    int regex_result;
    int __result_obj__0;
    if(self==((void*)0)||reg==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    re=re_compile(reg);
    if(re==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    result=default_value;
    offset=0;
    n=0;
    self2=(char* )come_increment_ref_count(charp_reverse(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6518))));
    result_39=default_value;
    while((_Bool)1) {
        matchlength=0;
        max_captures=8;
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self2,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0) {
            result_39=strlen(self)-matchlength;
            break;
        }
        {
            break;
        }
    }
    __result_obj__0 = result_39;
    (self2 = come_decrement_ref_count(self2, (void*)0, (void*)0, 0, 0, (void*)0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char*  string_chomp(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_chomp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char* )come_increment_ref_count(__builtin_string(str));
    if(((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 6587))[string_length(((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 6587)))-1]==10) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 6588)),0,-2))));
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int string_rindex_regex(char* self, const char* reg, int default_value, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_rindex_regex"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return charp_rindex_regex(self,reg,default_value,ignore_case);
    neo_current_frame = fr.prev;
}

int string_index_regex(char* self, const char* reg, int default_value, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_index_regex"; neo_current_frame = &fr;
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
    if(self==((void*)0)||reg==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    re=re_compile(reg);
    if(re==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    offset=0;
    n=0;
    matchlength=0;
    max_captures=8;
    struct re_capture  captures[max_captures]  ;
    memset(&captures, 0, sizeof(captures));
    regex_result=re_matchp_ex(re,self,&matchlength,captures,max_captures,ignore_case);
    if(regex_result>=0) {
        __result_obj__0 = (_Bool)1;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    else {
        __result_obj__0 = (_Bool)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
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
    int i;
    struct re_capture*  cp  ;
    char*  match_string  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6756, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 6756)))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6758, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 6758)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6763, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 6763)))))));
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    offset=0;
    n=0;
    group_count=re_get_group_count(re);
    while((_Bool)1) {
        matchlength=0;
        max_captures=8;
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            str=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6781)),offset+regex_result,offset+regex_result+matchlength));
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 6783)),(char* )come_increment_ref_count(str));
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(regex_result>=0&&group_count>0) {
            for(i=0;i<group_count;i++){
                cp=&captures[i];
                match_string=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker((self+offset), "/usr/local/include/neo-c.h", 6796)),((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 6796))->start,((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 6796))->start+((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 6796))->length));
                list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 6797)),(char* )come_increment_ref_count(match_string));
                (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
        }
        else {
            break;
        }
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
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
    char*  str_40  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6819, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 6819)))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6822, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 6822)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6827, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 6827)))))));
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    offset=0;
    n=0;
    group_count=re_get_group_count(re);
    while((_Bool)1) {
        matchlength=0;
        max_captures=8;
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            str=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6845)),offset,offset+regex_result));
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 6847)),(char* )come_increment_ref_count(str));
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            break;
        }
    }
    if(offset<charp_length(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6863)))) {
        str_40=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6864)),offset,-1));
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 6865)),(char* )come_increment_ref_count(str_40));
        (str_40 = come_decrement_ref_count(str_40, (void*)0, (void*)0, 0, 0, (void*)0));
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  string_sub(char* self, const char* reg, const char* replace, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_sub"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_sub(self,reg,replace,(_Bool)1,ignore_case))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* string_scan(char* self, const char* reg, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_scan"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=charp_scan(self,reg,ignore_case))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

struct list$1char$ph* string_split(char* self, const char* reg, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_split"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=charp_split(self,reg,ignore_case))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool string_match(char* self, const char* reg, _Bool ignore_case)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_match"; neo_current_frame = &fr;
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
    char*  str_41  ;
    char*  str_42  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    offset=0;
    n=0;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 6912, "struct buffer* "))), "/usr/local/include/neo-c.h", 6912)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    group_count=re_get_group_count(re);
    while((_Bool)1) {
        matchlength=0;
        max_captures=8;
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            str=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6925)),offset,offset+regex_result));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 6927)),str);
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 6928)),replace);
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            if(!global) {
                str_41=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6938)),offset,-1));
                buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 6939)),str_41);
                (str_41 = come_decrement_ref_count(str_41, (void*)0, (void*)0, 0, 0, (void*)0));
                (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
                (str_41 = come_decrement_ref_count(str_41, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            str_42=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6945)),offset,-1));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 6946)),str_42);
            (str_42 = come_decrement_ref_count(str_42, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
            (str_42 = come_decrement_ref_count(str_42, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 6951))))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    char*  str_43  ;
    char*  str_44  ;
    struct list$1char$ph* group_strings_45;
    int i;
    struct re_capture*  cp  ;
    char*  match_string_46  ;
    char*  match_string_47  ;
    char*  block_result_48  ;
    char*  str_49  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 6960, "struct buffer* "))), "/usr/local/include/neo-c.h", 6960)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    offset=0;
    n=0;
    group_count=re_get_group_count(re);
    while((_Bool)1) {
        matchlength=0;
        max_captures=8;
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            str=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6983)),offset,offset+regex_result));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 6985)),str);
            group_strings=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 6987, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 6987)))));
            come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            match_string=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 6989)),offset+regex_result,offset+regex_result+matchlength));
            block_result=(char*)come_increment_ref_count(block(parent,match_string,group_strings));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 6993)),block_result);
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            if(!global) {
                str_43=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7003)),offset,-1));
                buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7004)),str_43);
                (str_43 = come_decrement_ref_count(str_43, (void*)0, (void*)0, 0, 0, (void*)0));
                (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
                come_call_finalizer(list$1char$ph$p_finalize, group_strings, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0));
                (block_result = come_decrement_ref_count(block_result, (void*)0, (void*)0, 0, 0, (void*)0));
                break;
                (str_43 = come_decrement_ref_count(str_43, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            (str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1char$ph$p_finalize, group_strings, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result = come_decrement_ref_count(block_result, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(regex_result>=0&&group_count>0) {
            str_44=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7011)),offset,offset+regex_result));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7013)),str_44);
            group_strings_45=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7015, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7015)))));
            come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            for(i=0;i<group_count;i++){
                cp=&captures[i];
                match_string_46=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker((self+offset), "/usr/local/include/neo-c.h", 7019)),((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7019))->start,((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7019))->start+((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7019))->length));
                list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(group_strings_45, "/usr/local/include/neo-c.h", 7020)),(char* )come_increment_ref_count(match_string_46));
                (match_string_46 = come_decrement_ref_count(match_string_46, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            match_string_47=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7023)),offset+regex_result,offset+regex_result+matchlength));
            block_result_48=(char*)come_increment_ref_count(block(parent,match_string_47,group_strings_45));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7027)),block_result_48);
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            (str_44 = come_decrement_ref_count(str_44, (void*)0, (void*)0, 0, 0, (void*)0));
            come_call_finalizer(list$1char$ph$p_finalize, group_strings_45, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string_47 = come_decrement_ref_count(match_string_47, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result_48 = come_decrement_ref_count(block_result_48, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            str_49=(char* )come_increment_ref_count(charp_substring(((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7038)),offset,-1));
            buffer_append_str(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7039)),str_49);
            (str_49 = come_decrement_ref_count(str_49, (void*)0, (void*)0, 0, 0, (void*)0));
            break;
            (str_49 = come_decrement_ref_count(str_49, (void*)0, (void*)0, 0, 0, (void*)0));
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(result, "/usr/local/include/neo-c.h", 7043))))));
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    struct list$1char$ph* group_strings_50;
    int i;
    struct re_capture*  cp  ;
    char*  match_string_51  ;
    char*  match_string_52  ;
    char*  block_result_53  ;
    if(self==((void*)0)||reg==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7049, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7049)))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7051, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7051)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    re=re_compile(reg);
    if(re==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7056, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7056)))))));
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    offset=0;
    n=0;
    group_count=re_get_group_count(re);
    while((_Bool)1) {
        matchlength=0;
        max_captures=8;
        struct re_capture  captures[max_captures]  ;
        memset(&captures, 0, sizeof(captures));
        regex_result=re_matchp_ex(re,self+offset,&matchlength,captures,max_captures,ignore_case);
        if(regex_result>=0&&group_count==0) {
            group_strings=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7074, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7074)))));
            come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            match_string=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7076)),offset+regex_result,offset+regex_result+matchlength));
            block_result=(char*)come_increment_ref_count(block(parent,match_string,group_strings));
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 7080)),(char* )come_increment_ref_count(block_result));
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            come_call_finalizer(list$1char$ph$p_finalize, group_strings, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string = come_decrement_ref_count(match_string, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result = come_decrement_ref_count(block_result, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else if(regex_result>=0&&group_count>0) {
            group_strings_50=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7091, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7091)))));
            come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            for(i=0;i<group_count;i++){
                cp=&captures[i];
                match_string_51=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker((self+offset), "/usr/local/include/neo-c.h", 7095)),((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7095))->start,((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7095))->start+((struct re_capture* )come_null_checker(cp, "/usr/local/include/neo-c.h", 7095))->length));
                list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(group_strings_50, "/usr/local/include/neo-c.h", 7096)),(char* )come_increment_ref_count(match_string_51));
                (match_string_51 = come_decrement_ref_count(match_string_51, (void*)0, (void*)0, 0, 0, (void*)0));
            }
            match_string_52=(char* )come_increment_ref_count(charp_substring(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7099)),offset+regex_result,offset+regex_result+matchlength));
            block_result_53=(char*)come_increment_ref_count(block(parent,match_string_52,group_strings_50));
            list$1char$ph_add(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 7103)),(char* )come_increment_ref_count(block_result_53));
            if(matchlength==0) {
                offset++;
            }
            else {
                offset=offset+regex_result+matchlength;
            }
            come_call_finalizer(list$1char$ph$p_finalize, group_strings_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            (match_string_52 = come_decrement_ref_count(match_string_52, (void*)0, (void*)0, 0, 0, (void*)0));
            (block_result_53 = come_decrement_ref_count(block_result_53, (void*)0, (void*)0, 0, 0, (void*)0));
        }
        else {
            break;
        }
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

char*  string_sub_block(char* self, const char* reg, _Bool global, _Bool ignore_case, void* parent, char* (*block)(void*,char*,struct list$1char$ph*))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_sub_block"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_sub_block(self,reg,global,ignore_case,parent,block))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  __builtin_wstring(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "__builtin_wstring"; neo_current_frame = &fr;
    int*  __result_obj__0  ;
    int len;
    void* __right_value0 = (void*)0;
    int*  wstr  ;
    int ret;
    if(str==((void*)0)) {
        __result_obj__0 = (int* )come_increment_ref_count(((void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str);
    wstr=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(len+1)), (void*)0, 7143, "int* "));
    ret=mbstowcs(wstr,str,len+1);
    ((int* )come_null_checker(wstr, "/usr/local/include/neo-c.h", 7146))[ret]=0;
    if(ret<0) {
        ((int* )come_null_checker(wstr, "/usr/local/include/neo-c.h", 7149))[0]=0;
    }
    __result_obj__0 = (int* )come_increment_ref_count(wstr);
    (wstr = come_decrement_ref_count(wstr, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int wchar_tp_length(const int*  str  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_length"; neo_current_frame = &fr;
    if(str==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return wcslen(str);
    neo_current_frame = fr.prev;
}

int wchar_ta_length(const int*  str  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_ta_length"; neo_current_frame = &fr;
    if(str==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    neo_current_frame = fr.prev;
    return wcslen(str);
    neo_current_frame = fr.prev;
}

int wstring_length(const int*  str  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_length"; neo_current_frame = &fr;
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
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char* )come_increment_ref_count(__builtin_string(str));
    for(i=0;i<strlen(str);i++){
        if(((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7183))[i]>=65&&((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7183))[i]<=90) {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 7184))[i]=((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7184))[i]-65+97;
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  string_upper_case(char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_upper_case"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  result  ;
    int i;
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char* )come_increment_ref_count(__builtin_string(str));
    for(i=0;i<strlen(str);i++){
        if(((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7198))[i]>=97&&((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7198))[i]<=122) {
            ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 7199))[i]=((char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7199))[i]-97+65;
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  wchar_tp_substring(const int*  str  , int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_substring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    int len;
    int*  result  ;
    if(str==((void*)0)) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=wcslen(str);
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head>tail) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head>=len) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(head==tail) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(tail-head+1)), (void*)0, 7245, "int* "));
    memcpy(result,str+head,sizeof(int )*(tail-head));
    ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7248))[tail-head]=0;
    __result_obj__0 = (int* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int charp_index_count(const char* str, const char* search_str, int count, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index_count"; neo_current_frame = &fr;
    int n;
    int len;
    int i;
    int len2;
    int j;
    memset(&j, 0, sizeof(j));
    if(str==((void*)0)||search_str==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    n=0;
    len=strlen(str);
    for(i=0;i<len;i++){
        len2=strlen(search_str);
        for(j=0;j<len2;j++){
            if(((const char*)come_null_checker(str, "/usr/local/include/neo-c.h", 7265))[i+j]!=((const char*)come_null_checker(search_str, "/usr/local/include/neo-c.h", 7265))[j]) {
                break;
            }
        }
        if(j==len2) {
            n++;
            if(n==count) {
                neo_current_frame = fr.prev;
                return i;
            }
        }
    }
    neo_current_frame = fr.prev;
    return default_value;
    neo_current_frame = fr.prev;
}

int charp_rindex(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_rindex"; neo_current_frame = &fr;
    int len;
    char* p;
    if(str==((void*)0)||search_str==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    len=strlen(search_str);
    p=(char*)(str+strlen(str)-len);
    while(p>=str) {
        if(strncmp(p,search_str,len)==0) {
            neo_current_frame = fr.prev;
            return p-str;
        }
        p--;
    }
    neo_current_frame = fr.prev;
    return default_value;
    neo_current_frame = fr.prev;
}

int charp_rindex_count(const char* str, const char* search_str, int count, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_rindex_count"; neo_current_frame = &fr;
    int len;
    int n;
    if(str==((void*)0)||search_str==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    len=strlen(search_str);
    const char* p=(char*)str+strlen(str)-len;
    n=0;
    while(p>=str) {
        if(strncmp(p,search_str,len)==0) {
            n++;
            if(n==count) {
                neo_current_frame = fr.prev;
                return p-str;
            }
        }
        p--;
    }
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
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(char* )come_increment_ref_count(__builtin_string(self));
    len=strlen(self);
    if(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7337))[len-1]==10) {
        ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 7338))[len-1]=0;
    }
    else if(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7340))[len-1]==13) {
        ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 7341))[len-1]=0;
    }
    else if(len>2&&((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7343))[len-2]==13&&((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7343))[len-1]==10) {
        ((char* )come_null_checker(result, "/usr/local/include/neo-c.h", 7344))[len-2]=0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  wchar_tp_to_string(const int*  wstr  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char*  result  ;
    if(wstr==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=16*(wcslen(wstr)+1);
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len)), (void*)0, 7358, "char*"));
    if(wcstombs(result,wstr,len)<0) {
        strncpy(result,"",len);
    }
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  wchar_ta_to_string(const int*  wstr  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_ta_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(wstr==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=wchar_tp_to_string(wstr))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  charp_to_wstring(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_wstring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    if(str==((void*)0)) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  chara_to_wstring(char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_wstring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    if(str==((void*)0)) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    if(str==((void*)0)) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=wcslen(str);
    if(len==0) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value1=string_to_wstring(((char* )come_null_checker(((char* )(__right_value0=wchar_tp_to_string(((int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7400))))), "/usr/local/include/neo-c.h", 7400))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value1=string_to_wstring(((char* )come_null_checker(((char* )(__right_value0=wchar_tp_to_string(((int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7416))))), "/usr/local/include/neo-c.h", 7416))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(tail>=len) {
        tail=len;
    }
    sub_str=(int* )come_increment_ref_count(wchar_tp_substring(((int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7423)),tail,-1));
    memcpy(str+head,sub_str,sizeof(int )*(wstring_length(((int* )come_null_checker(sub_str, "/usr/local/include/neo-c.h", 7425)))+1));
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value1=string_to_wstring(((char* )come_null_checker(((char* )(__right_value0=wchar_tp_to_string(((int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7427))))), "/usr/local/include/neo-c.h", 7427))))));
    (sub_str = come_decrement_ref_count(sub_str, (void*)0, (void*)0, 0, 0, (void*)0));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int wchar_tp_index(const int*  str  , const int*  search_str  , int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_index"; neo_current_frame = &fr;
    int*  head  ;
    if(str==((void*)0)||search_str==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    head=wcsstr(str,search_str);
    if(head==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
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
    if(str==((void*)0)||search_str==((void*)0)) {
        neo_current_frame = fr.prev;
        return default_value;
    }
    len=wcslen(search_str);
    p=(int* )str+wcslen(str)-len;
    while(p>=str) {
        len2=wcslen(p);
        result=(_Bool)1;
        for(i=0;i<len&&i<len2;i++){
            if(((int* )come_null_checker(p, "/usr/local/include/neo-c.h", 7460))[i]!=((const int* )come_null_checker(search_str, "/usr/local/include/neo-c.h", 7460))[i]) {
                result=(_Bool)0;
            }
        }
        if(result) {
            neo_current_frame = fr.prev;
            return (p-str);
        }
        p--;
    }
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
    if(str==((void*)0)) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=wcslen(str);
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(len+1)), (void*)0, 7481, "int* "));
    for(i=0;i<len;i++){
        ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7484))[i]=((const int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7484))[len-i-1];
    }
    ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7487))[len]=0;
    __result_obj__0 = (int* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    if(str==((void*)0)) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=wcslen(str)*n+1;
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(len)), (void*)0, 7500, "int* "));
    ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7502))[0]=0;
    for(i=0;i<n;i++){
        wcscat(result,str);
    }
    __result_obj__0 = (int* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    if(str==((void*)0)) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=wchar_tp_length(((const int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7516)));
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(len*2+1)), (void*)0, 7517, "int* "));
    n=0;
    for(i=0;i<len;i++){
        c=((const int* )come_null_checker(str, "/usr/local/include/neo-c.h", 7521))[i];
        if((c>=0&&c<32)||c==127) {
            ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7526))[n++]=94;
            ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7527))[n++]=c+65-1;
        }
        else {
            ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7530))[n++]=c;
        }
    }
    ((int* )come_null_checker(result, "/usr/local/include/neo-c.h", 7536))[n]=0;
    __result_obj__0 = (int* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int wchar_tp_compare(const int*  left  , int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_compare"; neo_current_frame = &fr;
    if(left==((void*)0)) {
        if(right==((void*)0)) {
            neo_current_frame = fr.prev;
            return 0;
        }
        else {
            neo_current_frame = fr.prev;
            return 1;
        }
    }
    else if(right==((void*)0)) {
        if(left==((void*)0)) {
            neo_current_frame = fr.prev;
            return 0;
        }
        else {
            neo_current_frame = fr.prev;
            return -1;
        }
    }
    neo_current_frame = fr.prev;
    return wcscmp(left,right);
    neo_current_frame = fr.prev;
}

int wstring_compare(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_compare"; neo_current_frame = &fr;
    if(left==((void*)0)) {
        if(right==((void*)0)) {
            neo_current_frame = fr.prev;
            return 0;
        }
        else {
            neo_current_frame = fr.prev;
            return 1;
        }
    }
    else if(right==((void*)0)) {
        if(left==((void*)0)) {
            neo_current_frame = fr.prev;
            return 0;
        }
        else {
            neo_current_frame = fr.prev;
            return -1;
        }
    }
    neo_current_frame = fr.prev;
    return wcscmp(left,right);
    neo_current_frame = fr.prev;
}

int*  wchar_tp_operator_mult(const int*  str  , int n)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_operator_mult"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_multiply(str,n))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  wstring_operator_mult(const int*  str  , int n)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_operator_mult"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_multiply(str,n))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool wstring_operator_equals(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wcscmp(left,right)==0;
    neo_current_frame = fr.prev;
}

_Bool wstring_operator_not_equals(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_operator_not_equals"; neo_current_frame = &fr;
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
    if(left==((void*)0)||right==((void*)0)) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(wcslen(left)+wcslen(right)+1)), (void*)0, 7625, "int* "));
    wcscpy(result,left);
    wcscat(result,right);
    __result_obj__0 = (int* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  wstring_operator_add(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_operator_add"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    int*  result  ;
    if(left==((void*)0)||right==((void*)0)) {
        __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=__builtin_wstring(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=(int* )come_increment_ref_count((int *)come_calloc(1, sizeof(int )*(1*(wcslen(left)+wcslen(right)+1)), (void*)0, 7638, "int* "));
    wcscpy(result,left);
    wcscat(result,right);
    __result_obj__0 = (int* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int charp_index(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index"; neo_current_frame = &fr;
    char* head;
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

char*  charp_replace(char* self, int index, char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_replace"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    if(self==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(self);
    if(strcmp(self,"")==0) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    if(index<0) {
        index+=len;
    }
    if(index>=len) {
        index=len-1;
    }
    if(index<0) {
        index=0;
    }
    ((char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7683))[index]=c;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    if(str==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    len=strlen(str)*n+1;
    result=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len)), (void*)0, 7695, "char*"));
    ((char*)come_null_checker(result, "/usr/local/include/neo-c.h", 7697))[0]=0;
    for(i=0;i<n;i++){
        strcat(result,str);
    }
    __result_obj__0 = (char* )come_increment_ref_count(result);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
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
    int i;
    if(self==((void*)0)||str==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7709, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7709)))))));
        come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 7711, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 7711)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 7713, "struct buffer* "))), "/usr/local/include/neo-c.h", 7713)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    for(i=0;i<charp_length(((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7715)));i++){
        if(strstr(self+i,str)==self+i) {
            list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 7717)),(char* )come_increment_ref_count(__builtin_string(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 7717))->buf)));
            buffer_reset(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 7718)));
            i+=strlen(str)-1;
        }
        else {
            buffer_append_char(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 7722)),((const char*)come_null_checker(self, "/usr/local/include/neo-c.h", 7722))[i]);
        }
    }
    if(buffer_length(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 7725)))!=0) {
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 7726)),(char* )come_increment_ref_count(__builtin_string(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 7726))->buf)));
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

unsigned int wchar_tp_get_hash_key(const int*  value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_get_hash_key"; neo_current_frame = &fr;
    int result;
    int*  p  ;
    if(value==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    result=0;
    p=(int* )value;
    while(*p) {
        result+=(*p);
        p++;
    }
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool wstring_equals(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_equals"; neo_current_frame = &fr;
    if(left==((void*)0)&&right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
        neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    neo_current_frame = fr.prev;
    return wcscmp(left,right)==0;
    neo_current_frame = fr.prev;
}

_Bool wchar_t_operator_equals(int  left  , int  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_t_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return left==right;
    neo_current_frame = fr.prev;
}

_Bool wchar_t_operator_not_equals(int  left  , int  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_t_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return left!=right;
    neo_current_frame = fr.prev;
}

unsigned int wchar_t_get_hash_key(int  value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_t_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

_Bool wchar_t_equals(int  left  , int  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_t_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return left==right;
    neo_current_frame = fr.prev;
}

char*  wchar_t_to_string(int  wc  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_t_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ls",wc))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  xrealpath(const char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xrealpath"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* result;
    char*  result2  ;
    if(path==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    result=realpath(path,((void*)0));
    result2=(char* )come_increment_ref_count(__builtin_string(result));
    free(result);
    __result_obj__0 = (char* )come_increment_ref_count(result2);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  xdirname(const char* path)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xdirname"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    if(path==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=__builtin_string(dirname(((char* )(__right_value0=__builtin_string(path))))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

unsigned long  xwcslen(const int*  wstr  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xwcslen"; neo_current_frame = &fr;
    int*  p  ;
    unsigned long  len  ;
    if(wstr==((void*)0)) {
        neo_current_frame = fr.prev;
        return 0;
    }
    p=(int* )wstr;
    len=0;
    while(*p) {
        p++;
        len++;
    }
    neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

int*  wstring_substring(const int*  str  , int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_substring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_substring(str,head,tail))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int string_index_count(const char* str, const char* search_str, int count, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_index_count"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return charp_index_count(str,search_str,count,default_value);
    neo_current_frame = fr.prev;
}

int string_rindex(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_rindex"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return charp_rindex(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int string_rindex_count(const char* str, const char* search_str, int count, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_rindex_count"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return charp_rindex_count(str,search_str,count,default_value);
    neo_current_frame = fr.prev;
}

char*  string_strip(const char* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_strip"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_strip(self))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  wstring_to_string(const int*  wstr  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_to_string"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=wchar_tp_to_string(wstr))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  int_to_wstring(int self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "int_to_wstring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    int*  __result_obj__0  ;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value1=string_to_wstring(((char* )come_null_checker(((char* )(__right_value0=xsprintf("%d",self))), "/usr/local/include/neo-c.h", 7870))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  wstring_delete(int*  str  , int head, int tail)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_delete"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_delete(str,head,tail))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int wstring_index(const int*  str  , const int*  search_str  , int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_index"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wchar_tp_index(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int wstring_rindex(const int*  str  , const int*  search_str  , int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_rindex"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wchar_tp_rindex(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int*  wstring_reverse(const int*  str  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_reverse"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_reverse(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  wstring_multiply(const int*  str  , int n)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_multiply"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_multiply(str,n))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int*  wstring_printable(const int*  str  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_printable"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=wchar_tp_printable(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

unsigned int wstring_get_hash_key(const int*  value  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wstring_get_hash_key"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wchar_tp_get_hash_key(value);
    neo_current_frame = fr.prev;
}

int string_index(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_index"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return charp_index(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

char*  string_replace(char* self, int index, char c)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_replace"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_replace(self,index,c))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  string_multiply(const char* str, int n)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_multiply"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_multiply(str,n))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* string_split_str(const char* self, const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_split_str"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value0=charp_split_str(self,str))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

int*  string_to_wstring(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "string_to_wstring"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    int*  __result_obj__0  ;
    __result_obj__0 = (int* )come_increment_ref_count(((int* )(__right_value0=charp_to_wstring(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

char*  charp_chomp(const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_chomp"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=string_chomp(str))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

_Bool wchar_tp_equals(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wcscmp(left,right)==0;
    neo_current_frame = fr.prev;
}

_Bool wchar_tp_operator_equals(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_operator_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wcscmp(left,right)==0;
    neo_current_frame = fr.prev;
}

_Bool wchar_tp_operator_not_equals(const int*  left  , const int*  right  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "wchar_tp_operator_not_equals"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return wcscmp(left,right)!=0;
    neo_current_frame = fr.prev;
}

char*  FILE_read(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_read"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int size;
    if(f==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 7964, "struct buffer* "))), "/usr/local/include/neo-c.h", 7964)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    while(1) {
        char buf2[8192];
        memset(&buf2, 0, sizeof(buf2));
        size=fread(buf2,1,8192,f);
        buffer_append(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 7971)),buf2,size);
        if(size<8192) {
            break;
        }
    }
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 7978))))));
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

int FILE_write(struct _IO_FILE*  f  , const char* str)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_write"; neo_current_frame = &fr;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fclose"; neo_current_frame = &fr;
    int result;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_fprintf"; neo_current_frame = &fr;
    struct _IO_FILE*  __result_obj__0  ;
    __builtin_va_list  args  ;
    int result;
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
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_write"; neo_current_frame = &fr;
    struct _IO_FILE*  f  ;
    int result;
    int result2;
    memset(&f, 0, sizeof(f));
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

char*  charp_read(const char* file_name)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "charp_read"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    struct _IO_FILE*  f  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int size;
    char*  result  ;
    int result2;
    if(file_name==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    f=fopen(file_name,"r");
    if(f==((void*)0)) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count(((struct buffer* )come_null_checker(((struct buffer* )(__right_value0=(struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), (void*)0, 8071, "struct buffer* "))), "/usr/local/include/neo-c.h", 8071)))));
    come_call_finalizer(buffer_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    while(1) {
        char buf2[8192];
        memset(&buf2, 0, sizeof(buf2));
        size=fread(buf2,1,8192,f);
        buffer_append(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 8078)),buf2,size);
        if(size<8192) {
            break;
        }
    }
    result=(char* )come_increment_ref_count(buffer_to_string(((struct buffer* )come_null_checker(buf, "/usr/local/include/neo-c.h", 8085))));
    result2=fclose(f);
    if(result2<0) {
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(""))));
        come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
        return __result_obj__0;
    }
    __result_obj__0 = (char* )come_increment_ref_count(result);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0));
    return __result_obj__0;
}

struct list$1char$ph* FILE_readlines(struct _IO_FILE*  f  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "FILE_readlines"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct list$1char$ph* __result_obj__0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)come_null_checker(((struct list$1char$ph*)(__right_value0=(struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), (void*)0, 8098, "struct list$1char$ph*"))), "/usr/local/include/neo-c.h", 8098)))));
    come_call_finalizer(list$1char$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    if(f==((void*)0)) {
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
        come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
        return __result_obj__0;
    }
    while(1) {
        char buf[8192];
        memset(&buf, 0, sizeof(buf));
        if(fgets(buf,8192,f)==((void*)0)) {
            break;
        }
        list$1char$ph_push_back(((struct list$1char$ph*)come_null_checker(result, "/usr/local/include/neo-c.h", 8111)),(char* )come_increment_ref_count(__builtin_string(buf)));
    }
    __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0);
    return __result_obj__0;
}

_Bool xiswalpha(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalpha"; neo_current_frame = &fr;
    _Bool result;
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool xiswblank(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswblank"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool xiswdigit(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswdigit"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool xiswalnum(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswalnum"; neo_current_frame = &fr;
    neo_current_frame = fr.prev;
    return xiswalpha(c)||xiswdigit(c);
    neo_current_frame = fr.prev;
}

_Bool xiswascii(int  c  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "xiswascii"; neo_current_frame = &fr;
    _Bool result;
    result=(c>=32&&c<=126);
    neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

