/// c_include definition ///
/// typedef definition ///
typedef unsigned long size_t;

typedef int wchar_t;

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

typedef unsigned long  int  ino_t  ;

typedef unsigned long  int  ino64_t  ;

typedef struct __dirstream DIR;

typedef unsigned long  long    ;

typedef int error_t;

typedef unsigned int  mode_t  ;

typedef long  int  off_t  ;

typedef long  int  off64_t  ;

typedef int  pid_t  ;

typedef long  int  time_t  ;

typedef unsigned int  gid_t  ;

typedef struct _IO_FILE  FILE  ;

typedef struct anonymous_typeX1 __sigset_t;

typedef unsigned long  int nfds_t;

typedef unsigned int  uid_t  ;

typedef unsigned char  u_char  ;

typedef unsigned short int  u_short  ;

typedef unsigned int  u_int  ;

typedef unsigned long  int  u_long  ;

typedef long  int  quad_t  ;

typedef unsigned long  int  u_quad_t  ;

typedef struct __fsid_t  fsid_t  ;

typedef long  int  loff_t  ;

typedef unsigned long  int  dev_t  ;

typedef unsigned long  int  nlink_t  ;

typedef unsigned int  id_t  ;

typedef long  int  ssize_t  ;

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

typedef char  int8_t  ;

typedef short int  int16_t  ;

typedef int  int32_t  ;

typedef long  int  int64_t  ;

typedef unsigned char  u_int8_t  ;

typedef unsigned short int  u_int16_t  ;

typedef unsigned int  u_int32_t  ;

typedef unsigned long  int  u_int64_t  ;

typedef int __attribute__ ((__mode__ (__word__))) register_t __attribute__ ((__mode__ (__word__)));

typedef struct anonymous_typeX1  sigset_t  ;

typedef long  int __fd_mask;

typedef struct anonymous_typeX2 fd_set;

typedef long  int  fd_mask  ;

typedef long  int  blksize_t  ;

typedef long  int  blkcnt_t  ;

typedef unsigned long  int  fsblkcnt_t  ;

typedef unsigned long  int  fsfilcnt_t  ;

typedef long  int  blkcnt64_t  ;

typedef unsigned long  int  fsblkcnt64_t  ;

typedef unsigned long  int  fsfilcnt64_t  ;

typedef union anonymous_typeZ3 __atomic_wide_counter;

typedef struct __pthread_internal_list  __pthread_list_t  ;

typedef struct __pthread_internal_slist  __pthread_slist_t  ;

typedef unsigned int __tss_t;

typedef unsigned long  int __thrd_t;

typedef struct anonymous_typeX5 __once_flag;

typedef unsigned long  int pthread_t;

typedef union anonymous_typeZ6 pthread_mutexattr_t;

typedef union anonymous_typeZ7 pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

typedef union pthread_attr_t  pthread_attr_t  ;

typedef union anonymous_typeZ8 pthread_mutex_t;

typedef union anonymous_typeZ9 pthread_cond_t;

typedef union anonymous_typeZ10 pthread_rwlock_t;

typedef union anonymous_typeZ11 pthread_rwlockattr_t;

typedef volatile int pthread_spinlock_t;

typedef union anonymous_typeZ12 pthread_barrier_t;

typedef union anonymous_typeZ13 pthread_barrierattr_t;

typedef unsigned int __re_size_t;

typedef unsigned long  int __re_long_size_t;

typedef long  int s_reg_t;

typedef unsigned long  int active_reg_t;

typedef unsigned long  int reg_syntax_t;

typedef enum anonymous_typeY13 reg_errcode_t;

typedef struct re_pattern_buffer  regex_t  ;

typedef int regoff_t;

typedef struct anonymous_typeX14 regmatch_t;

typedef unsigned long  int  rlim_t  ;

typedef unsigned long  int  rlim64_t  ;

typedef enum __rlimit_resource __rlimit_resource_t;

typedef enum __rusage_who __rusage_who_t;

typedef enum __priority_which __priority_which_t;

typedef enum __itimer_which __itimer_which_t;

typedef int  sig_atomic_t  ;

typedef union sigval  __sigval_t  ;

typedef struct anonymous_typeX43 siginfo_t;

typedef union sigval  sigval_t  ;

typedef struct sigevent  sigevent_t  ;

typedef void (*__sighandler_t)(int);

typedef void (*sighandler_t)(int)  ;

typedef void (*sig_t)(int)  ;

typedef struct anonymous_typeX76 stack_t;

typedef long long int greg_t;

typedef struct _libc_fpstate*  fpregset_t  ;

typedef struct anonymous_typeX77 mcontext_t;

typedef struct ucontext_t  ucontext_t  ;

typedef long  int  intptr_t  ;

typedef unsigned int  socklen_t  ;

typedef enum anonymous_typeY77 idtype_t;

typedef unsigned char cc_t;

typedef unsigned int speed_t;

typedef unsigned int tcflag_t;

typedef unsigned int  baud_t  ;

/// previous struct definition ///
struct _IO_FILE;

struct iovec;

struct rusage;

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

struct flock
{
    short int l_type;
    short int l_whence;
    long  int  l_start  ;
    long  int  l_len  ;
    int  l_pid  ;
};

struct flock64
{
    short int l_type;
    short int l_whence;
    long  int  l_start  ;
    long  int  l_len  ;
    int  l_pid  ;
};

struct iovec
{
    void* iov_base;
    unsigned long  iov_len  ;
};

enum  __pid_type { F_OWNER_TID=(0),
F_OWNER_PID 
,F_OWNER_PGRP 
,F_OWNER_GID=((0+2))
};

struct f_owner_ex
{
    enum __pid_type type;
    int  pid  ;
};

struct file_handle
{
    unsigned int handle_bytes;
    int handle_type;
    unsigned char f_handle[0];
};

struct timespec
{
    long  int  tv_sec  ;
    long  int  tv_nsec  ;
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

struct group
{
    char* gr_name;
    char* gr_passwd;
    unsigned int  gr_gid  ;
    char** gr_mem;
};

struct anonymous_typeX1
{
    unsigned long  int __val[(1024/(8*sizeof(unsigned long  int)))];
};

struct pollfd
{
    int fd;
    short int events;
    short int revents;
};

struct passwd
{
    char* pw_name;
    char* pw_passwd;
    unsigned int  pw_uid  ;
    unsigned int  pw_gid  ;
    char* pw_gecos;
    char* pw_dir;
    char* pw_shell;
};

struct timeval
{
    long  int  tv_sec  ;
    long  int  tv_usec  ;
};

struct anonymous_typeX2
{
    long  int  fds_bits[1024/(8*(int)sizeof(long  int ))]  ;
};

struct anonymous_typeX4
{
    unsigned int __low;
    unsigned int __high;
};

union anonymous_typeZ3
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

struct anonymous_typeX5
{
    int __data;
};

union anonymous_typeZ6
{
char __size[4];
int __align;
};

union anonymous_typeZ7
{
char __size[4];
int __align;
};

union pthread_attr_t
{
char __size[56];
long  int __align;
};

union anonymous_typeZ8
{
struct __pthread_mutex_s  __data  ;
char __size[40];
long  int __align;
};

union anonymous_typeZ9
{
struct __pthread_cond_s  __data  ;
char __size[48];
long long int __align;
};

union anonymous_typeZ10
{
struct __pthread_rwlock_arch_t  __data  ;
char __size[56];
long  int __align;
};

union anonymous_typeZ11
{
char __size[8];
long  int __align;
};

union anonymous_typeZ12
{
char __size[32];
long  int __align;
};

union anonymous_typeZ13
{
char __size[4];
int __align;
};

enum  anonymous_typeY13 { _REG_ENOSYS=(-1),
_REG_NOERROR=(0),
_REG_NOMATCH 
,_REG_BADPAT 
,_REG_ECOLLATE 
,_REG_ECTYPE 
,_REG_EESCAPE 
,_REG_ESUBREG 
,_REG_EBRACK 
,_REG_EPAREN 
,_REG_EBRACE 
,_REG_BADBR 
,_REG_ERANGE 
,_REG_ESPACE 
,_REG_BADRPT 
,_REG_EEND 
,_REG_ESIZE 
,_REG_ERPAREN 
};

struct re_pattern_buffer
{
    struct re_dfa_t* buffer;
    unsigned long  int  allocated  ;
    unsigned long  int  used  ;
    unsigned long  int  syntax  ;
    char* fastmap;
    unsigned char* translate;
    unsigned long  re_nsub  ;
    unsigned int can_be_null:1;
    unsigned int regs_allocated:2;
    unsigned int fastmap_accurate:1;
    unsigned int no_sub:1;
    unsigned int not_bol:1;
    unsigned int not_eol:1;
    unsigned int newline_anchor:1;
};

struct re_registers
{
    unsigned int  num_regs  ;
    int*  start  ;
    int*  end  ;
};

struct anonymous_typeX14
{
    int  rm_so  ;
    int  rm_eo  ;
};

struct winsize
{
    unsigned short int ws_row;
    unsigned short int ws_col;
    unsigned short int ws_xpixel;
    unsigned short int ws_ypixel;
};

enum  __rlimit_resource { RLIMIT_CPU=(0),
RLIMIT_FSIZE=(1),
RLIMIT_DATA=(2),
RLIMIT_STACK=(3),
RLIMIT_CORE=(4),
__RLIMIT_RSS=(5),
RLIMIT_NOFILE=(7),
__RLIMIT_OFILE=((7)),
RLIMIT_AS=(9),
__RLIMIT_NPROC=(6),
__RLIMIT_MEMLOCK=(8),
__RLIMIT_LOCKS=(10),
__RLIMIT_SIGPENDING=(11),
__RLIMIT_MSGQUEUE=(12),
__RLIMIT_NICE=(13),
__RLIMIT_RTPRIO=(14),
__RLIMIT_RTTIME=(15),
__RLIMIT_NLIMITS=(16),
__RLIM_NLIMITS=((16))
};

struct rlimit
{
    unsigned long  int  rlim_cur  ;
    unsigned long  int  rlim_max  ;
};

struct rlimit64
{
    unsigned long  int  rlim_cur  ;
    unsigned long  int  rlim_max  ;
};

enum  __rusage_who { RUSAGE_SELF=(0),
RUSAGE_CHILDREN=(-1),
RUSAGE_THREAD=(1)
};

union anonymous_typeZ15
{
long  int ru_maxrss;
long  int  __ru_maxrss_word  ;
};

union anonymous_typeZ16
{
long  int ru_maxrss;
long  int  __ru_maxrss_word  ;
};

union anonymous_typeZ17
{
long  int ru_ixrss;
long  int  __ru_ixrss_word  ;
};

union anonymous_typeZ18
{
long  int ru_ixrss;
long  int  __ru_ixrss_word  ;
};

union anonymous_typeZ19
{
long  int ru_idrss;
long  int  __ru_idrss_word  ;
};

union anonymous_typeZ20
{
long  int ru_idrss;
long  int  __ru_idrss_word  ;
};

union anonymous_typeZ21
{
long  int ru_isrss;
long  int  __ru_isrss_word  ;
};

union anonymous_typeZ22
{
long  int ru_isrss;
long  int  __ru_isrss_word  ;
};

union anonymous_typeZ23
{
long  int ru_minflt;
long  int  __ru_minflt_word  ;
};

union anonymous_typeZ24
{
long  int ru_minflt;
long  int  __ru_minflt_word  ;
};

union anonymous_typeZ25
{
long  int ru_majflt;
long  int  __ru_majflt_word  ;
};

union anonymous_typeZ26
{
long  int ru_majflt;
long  int  __ru_majflt_word  ;
};

union anonymous_typeZ27
{
long  int ru_nswap;
long  int  __ru_nswap_word  ;
};

union anonymous_typeZ28
{
long  int ru_nswap;
long  int  __ru_nswap_word  ;
};

union anonymous_typeZ29
{
long  int ru_inblock;
long  int  __ru_inblock_word  ;
};

union anonymous_typeZ30
{
long  int ru_inblock;
long  int  __ru_inblock_word  ;
};

union anonymous_typeZ31
{
long  int ru_oublock;
long  int  __ru_oublock_word  ;
};

union anonymous_typeZ32
{
long  int ru_oublock;
long  int  __ru_oublock_word  ;
};

union anonymous_typeZ33
{
long  int ru_msgsnd;
long  int  __ru_msgsnd_word  ;
};

union anonymous_typeZ34
{
long  int ru_msgsnd;
long  int  __ru_msgsnd_word  ;
};

union anonymous_typeZ35
{
long  int ru_msgrcv;
long  int  __ru_msgrcv_word  ;
};

union anonymous_typeZ36
{
long  int ru_msgrcv;
long  int  __ru_msgrcv_word  ;
};

union anonymous_typeZ37
{
long  int ru_nsignals;
long  int  __ru_nsignals_word  ;
};

union anonymous_typeZ38
{
long  int ru_nsignals;
long  int  __ru_nsignals_word  ;
};

union anonymous_typeZ39
{
long  int ru_nvcsw;
long  int  __ru_nvcsw_word  ;
};

union anonymous_typeZ40
{
long  int ru_nvcsw;
long  int  __ru_nvcsw_word  ;
};

union anonymous_typeZ41
{
long  int ru_nivcsw;
long  int  __ru_nivcsw_word  ;
};

union anonymous_typeZ42
{
long  int ru_nivcsw;
long  int  __ru_nivcsw_word  ;
};

struct rusage
{
    struct timeval  ru_utime  ;
    struct timeval  ru_stime  ;
    union {
        long  int ru_maxrss;
        long  int  __ru_maxrss_word  ;
    };
    union {
        long  int ru_ixrss;
        long  int  __ru_ixrss_word  ;
    };
    union {
        long  int ru_idrss;
        long  int  __ru_idrss_word  ;
    };
    union {
        long  int ru_isrss;
        long  int  __ru_isrss_word  ;
    };
    union {
        long  int ru_minflt;
        long  int  __ru_minflt_word  ;
    };
    union {
        long  int ru_majflt;
        long  int  __ru_majflt_word  ;
    };
    union {
        long  int ru_nswap;
        long  int  __ru_nswap_word  ;
    };
    union {
        long  int ru_inblock;
        long  int  __ru_inblock_word  ;
    };
    union {
        long  int ru_oublock;
        long  int  __ru_oublock_word  ;
    };
    union {
        long  int ru_msgsnd;
        long  int  __ru_msgsnd_word  ;
    };
    union {
        long  int ru_msgrcv;
        long  int  __ru_msgrcv_word  ;
    };
    union {
        long  int ru_nsignals;
        long  int  __ru_nsignals_word  ;
    };
    union {
        long  int ru_nvcsw;
        long  int  __ru_nvcsw_word  ;
    };
    union {
        long  int ru_nivcsw;
        long  int  __ru_nivcsw_word  ;
    };
};

enum  __priority_which { PRIO_PROCESS=(0),
PRIO_PGRP=(1),
PRIO_USER=(2)
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

struct statvfs
{
    unsigned long  int f_bsize;
    unsigned long  int f_frsize;
    unsigned long  int  f_blocks  ;
    unsigned long  int  f_bfree  ;
    unsigned long  int  f_bavail  ;
    unsigned long  int  f_files  ;
    unsigned long  int  f_ffree  ;
    unsigned long  int  f_favail  ;
    unsigned long  int f_fsid;
    unsigned long  int f_flag;
    unsigned long  int f_namemax;
    unsigned int f_type;
    int __f_spare[5];
};

struct statvfs64
{
    unsigned long  int f_bsize;
    unsigned long  int f_frsize;
    unsigned long  int  f_blocks  ;
    unsigned long  int  f_bfree  ;
    unsigned long  int  f_bavail  ;
    unsigned long  int  f_files  ;
    unsigned long  int  f_ffree  ;
    unsigned long  int  f_favail  ;
    unsigned long  int f_fsid;
    unsigned long  int f_flag;
    unsigned long  int f_namemax;
    unsigned int f_type;
    int __f_spare[5];
};

enum { ST_RDONLY=(1),
ST_NOSUID=(2),
ST_NODEV=(4),
ST_NOEXEC=(8),
ST_SYNCHRONOUS=(16),
ST_MANDLOCK=(64),
ST_WRITE=(128),
ST_APPEND=(256),
ST_IMMUTABLE=(512),
ST_NOATIME=(1024),
ST_NODIRATIME=(2048),
ST_RELATIME=(4096),
ST_NOSYMFOLLOW=(8192)
};

struct timezone
{
    int tz_minuteswest;
    int tz_dsttime;
};

enum  __itimer_which { ITIMER_REAL=(0),
ITIMER_VIRTUAL=(1),
ITIMER_PROF=(2)
};

struct itimerval
{
    struct timeval  it_interval  ;
    struct timeval  it_value  ;
};

struct tms
{
    long  int  tms_utime  ;
    long  int  tms_stime  ;
    long  int  tms_cutime  ;
    long  int  tms_cstime  ;
};

struct utsname
{
    char sysname[65];
    char nodename[65];
    char release[65];
    char version[65];
    char machine[65];
    char domainname[65];
};

union sigval
{
int sival_int;
void* sival_ptr;
};

struct anonymous_typeX45
{
    int  si_pid  ;
    unsigned int  si_uid  ;
};

struct anonymous_typeX46
{
    int si_tid;
    int si_overrun;
    union sigval  si_sigval  ;
};

struct anonymous_typeX47
{
    int  si_pid  ;
    unsigned int  si_uid  ;
    union sigval  si_sigval  ;
};

struct anonymous_typeX48
{
    int  si_pid  ;
    unsigned int  si_uid  ;
    int si_status;
    long  int  si_utime  ;
    long  int  si_stime  ;
};

struct anonymous_typeX51
{
    void* _lower;
    void* _upper;
};

union anonymous_typeZ50
{
    struct {
        void* _lower;
        void* _upper;
    } _addr_bnd;
unsigned int  _pkey  ;
};

struct anonymous_typeX53
{
    void* _lower;
    void* _upper;
};

union anonymous_typeZ52
{
    struct {
        void* _lower;
        void* _upper;
    } _addr_bnd;
unsigned int  _pkey  ;
};

struct anonymous_typeX49
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

struct anonymous_typeX54
{
    long  int si_band;
    int si_fd;
};

struct anonymous_typeX55
{
    void* _call_addr;
    int _syscall;
    unsigned int _arch;
};

union anonymous_typeZ44
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

struct anonymous_typeX57
{
    int  si_pid  ;
    unsigned int  si_uid  ;
};

struct anonymous_typeX58
{
    int si_tid;
    int si_overrun;
    union sigval  si_sigval  ;
};

struct anonymous_typeX59
{
    int  si_pid  ;
    unsigned int  si_uid  ;
    union sigval  si_sigval  ;
};

struct anonymous_typeX60
{
    int  si_pid  ;
    unsigned int  si_uid  ;
    int si_status;
    long  int  si_utime  ;
    long  int  si_stime  ;
};

struct anonymous_typeX63
{
    void* _lower;
    void* _upper;
};

union anonymous_typeZ62
{
    struct {
        void* _lower;
        void* _upper;
    } _addr_bnd;
unsigned int  _pkey  ;
};

struct anonymous_typeX65
{
    void* _lower;
    void* _upper;
};

union anonymous_typeZ64
{
    struct {
        void* _lower;
        void* _upper;
    } _addr_bnd;
unsigned int  _pkey  ;
};

struct anonymous_typeX61
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

struct anonymous_typeX66
{
    long  int si_band;
    int si_fd;
};

struct anonymous_typeX67
{
    void* _call_addr;
    int _syscall;
    unsigned int _arch;
};

union anonymous_typeZ56
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

struct anonymous_typeX43
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

struct anonymous_typeX69
{
    void (*_function)(union sigval );
    union pthread_attr_t*  _attribute  ;
};

union anonymous_typeZ68
{
int _pad[((64/sizeof(int))-4)];
int  _tid  ;
    struct {
        void (*_function)(union sigval );
        union pthread_attr_t*  _attribute  ;
    } _sigev_thread;
};

struct anonymous_typeX71
{
    void (*_function)(union sigval );
    union pthread_attr_t*  _attribute  ;
};

union anonymous_typeZ70
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

union anonymous_typeZ72
{
void (*sa_handler)(int)  ;
void (*sa_sigaction)(int,struct anonymous_typeX43* ,void*);
};

union anonymous_typeZ73
{
void (*sa_handler)(int)  ;
void (*sa_sigaction)(int,struct anonymous_typeX43* ,void*);
};

struct sigaction
{
    union {
        void (*sa_handler)(int)  ;
        void (*sa_sigaction)(int,struct anonymous_typeX43* ,void*);
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

union anonymous_typeZ74
{
struct _fpstate*  fpstate  ;
unsigned long  int  __fpstate_word  ;
};

union anonymous_typeZ75
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

struct anonymous_typeX76
{
    void* ss_sp;
    int ss_flags;
    unsigned long  ss_size  ;
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

struct anonymous_typeX77
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
        unsigned long  ss_size  ;
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

enum { SS_ONSTACK=(1),
SS_DISABLE 
};

struct sigstack
{
    void* ss_sp;
    int ss_onstack;
};

enum  anonymous_typeY77 { P_ALL 
,P_PID 
,P_PGID 
,P_PIDFD 
};

union anonymous_typeZ78
{
unsigned int  __ispeed  ;
unsigned int  c_ispeed  ;
};

union anonymous_typeZ79
{
unsigned int  __ispeed  ;
unsigned int  c_ispeed  ;
};

union anonymous_typeZ80
{
unsigned int  __ospeed  ;
unsigned int  c_ospeed  ;
};

union anonymous_typeZ81
{
unsigned int  __ospeed  ;
unsigned int  c_ospeed  ;
};

struct termios
{
    unsigned int  c_iflag  ;
    unsigned int  c_oflag  ;
    unsigned int  c_cflag  ;
    unsigned int  c_lflag  ;
    unsigned char  c_line  ;
    unsigned char  c_cc[32]  ;
    union {
        unsigned int  __ispeed  ;
        unsigned int  c_ispeed  ;
    };
    union {
        unsigned int  __ospeed  ;
        unsigned int  c_ospeed  ;
    };
};

/// variable definition ///
extern char* program_invocation_name;
extern char* program_invocation_short_name;
extern unsigned long  int  re_syntax_options  ;
extern char** __environ;
extern char** environ;
extern char* optarg;
extern int optind;
extern int opterr;
extern int optopt;
// source head

// header function
char* strdup(const char* );
int vsnprintf(char* , unsigned long  int , const char* , __builtin_va_list );
int snprintf(char* , unsigned long  int , const char* , ...);
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
int* __errno_location() __attribute__ ((__const__));
long  int  readahead(int __fd, long  int  __offset  , unsigned long  __count  );
int sync_file_range(int __fd, long  int  __offset  , long  int  __count  , unsigned int __flags);
long  int  vmsplice(int __fdout, const struct iovec*  __iov  , unsigned long  __count  , unsigned int __flags);
long  int  splice(int __fdin, long  int*  __offin  , int __fdout, long  int*  __offout  , unsigned long  __len  , unsigned int __flags);
long  int  tee(int __fdin, int __fdout, unsigned long  __len  , unsigned int __flags);
int fallocate(int __fd, int __mode, long  int  __offset  , long  int  __len  );
int fallocate64(int __fd, int __mode, long  int  __offset  , long  int  __len  );
int name_to_handle_at(int __dfd, const char* __name, struct file_handle*  __handle  , int* __mnt_id, int __flags);
int open_by_handle_at(int __mountdirfd, struct file_handle*  __handle  , int __flags);
int fcntl(int __fd, int __cmd, ...);
int fcntl64(int __fd, int __cmd, ...);
int open(const char* __file, int __oflag, ...);
int open64(const char* __file, int __oflag, ...);
int openat(int __fd, const char* __file, int __oflag, ...);
int openat64(int __fd, const char* __file, int __oflag, ...);
int creat(const char* __file, unsigned int  __mode  );
int creat64(const char* __file, unsigned int  __mode  );
int lockf(int __fd, int __cmd, long  int  __len  );
int lockf64(int __fd, int __cmd, long  int  __len  );
int posix_fadvise(int __fd, long  int  __offset  , long  int  __len  , int __advise);
int posix_fadvise64(int __fd, long  int  __offset  , long  int  __len  , int __advise);
int posix_fallocate(int __fd, long  int  __offset  , long  int  __len  );
int posix_fallocate64(int __fd, long  int  __offset  , long  int  __len  );
void setgrent();
void endgrent();
struct group*  getgrent();
struct group*  fgetgrent(struct _IO_FILE*  __stream  );
int putgrent(const struct group* __restrict  __p  , struct _IO_FILE* __restrict  __f  );
struct group*  getgrgid(unsigned int  __gid  );
struct group*  getgrnam(const char* __name);
int getgrent_r(struct group* __restrict  __resultbuf  , char* __restrict __buffer, unsigned long  __buflen  , struct group** __restrict  __result  );
int getgrgid_r(unsigned int  __gid  , struct group* __restrict  __resultbuf  , char* __restrict __buffer, unsigned long  __buflen  , struct group** __restrict  __result  );
int getgrnam_r(const char* __restrict __name, struct group* __restrict  __resultbuf  , char* __restrict __buffer, unsigned long  __buflen  , struct group** __restrict  __result  );
int fgetgrent_r(struct _IO_FILE* __restrict  __stream  , struct group* __restrict  __resultbuf  , char* __restrict __buffer, unsigned long  __buflen  , struct group** __restrict  __result  );
int setgroups(unsigned long  __n  , const unsigned int*  __groups  );
int getgrouplist(const char* , unsigned int  __group  , unsigned int*  __groups  , int* __ngroups);
int initgroups(const char* , unsigned int  __group  );
int poll(struct pollfd*  __fds  , unsigned long  int  __nfds  , int __timeout);
int ppoll(struct pollfd*  __fds  , unsigned long  int  __nfds  , const struct timespec*  __timeout  , const struct anonymous_typeX1*  __ss  );
void setpwent();
void endpwent();
struct passwd*  getpwent();
struct passwd*  fgetpwent(struct _IO_FILE*  __stream  );
int putpwent(const struct passwd* __restrict  __p  , struct _IO_FILE* __restrict  __f  );
struct passwd*  getpwuid(unsigned int  __uid  );
struct passwd*  getpwnam(const char* __name);
int getpwent_r(struct passwd* __restrict  __resultbuf  , char* __restrict __buffer, unsigned long  __buflen  , struct passwd** __restrict  __result  );
int getpwuid_r(unsigned int  __uid  , struct passwd* __restrict  __resultbuf  , char* __restrict __buffer, unsigned long  __buflen  , struct passwd** __restrict  __result  );
int getpwnam_r(const char* __restrict __name, struct passwd* __restrict  __resultbuf  , char* __restrict __buffer, unsigned long  __buflen  , struct passwd** __restrict  __result  );
int fgetpwent_r(struct _IO_FILE* __restrict  __stream  , struct passwd* __restrict  __resultbuf  , char* __restrict __buffer, unsigned long  __buflen  , struct passwd** __restrict  __result  );
int getpw(unsigned int  __uid  , char* __buffer);
int select(int __nfds, struct anonymous_typeX2* __restrict  __readfds  , struct anonymous_typeX2* __restrict  __writefds  , struct anonymous_typeX2* __restrict  __exceptfds  , struct timeval* __restrict  __timeout  );
int pselect(int __nfds, struct anonymous_typeX2* __restrict  __readfds  , struct anonymous_typeX2* __restrict  __writefds  , struct anonymous_typeX2* __restrict  __exceptfds  , const struct timespec* __restrict  __timeout  , const struct anonymous_typeX1* __restrict  __sigmask  );
unsigned long  int  re_set_syntax(unsigned long  int  __syntax  );
const char* re_compile_pattern(const char* __pattern, unsigned long  __length  , struct re_pattern_buffer*  __buffer  );
int re_compile_fastmap(struct re_pattern_buffer*  __buffer  );
int  re_search(struct re_pattern_buffer*  __buffer  , const char* __String, int  __length  , int  __start  , int  __range  , struct re_registers*  __regs  );
int  re_search_2(struct re_pattern_buffer*  __buffer  , const char* __string1, int  __length1  , const char* __string2, int  __length2  , int  __start  , int  __range  , struct re_registers*  __regs  , int  __stop  );
int  re_match(struct re_pattern_buffer*  __buffer  , const char* __String, int  __length  , int  __start  , struct re_registers*  __regs  );
int  re_match_2(struct re_pattern_buffer*  __buffer  , const char* __string1, int  __length1  , const char* __string2, int  __length2  , int  __start  , struct re_registers*  __regs  , int  __stop  );
void re_set_registers(struct re_pattern_buffer*  __buffer  , struct re_registers*  __regs  , unsigned int  __num_regs  , int*  __starts  , int*  __ends  );
int regcomp(struct re_pattern_buffer* __restrict  __preg  , const char* __restrict __pattern, int __cflags);
int regexec(const struct re_pattern_buffer* __restrict  __preg  , const char* __restrict __String, unsigned long  __nmatch  , struct anonymous_typeX14  __pmatch[]  , int __eflags);
unsigned long  regerror(int __errcode, const struct re_pattern_buffer* __restrict  __preg  , char* __restrict __errbuf, unsigned long  __errbuf_size  );
void regfree(struct re_pattern_buffer*  __preg  );
int flock(int __fd, int __operation);
int ioctl(int __fd, unsigned long  int __request, ...);
int memfd_create(const char* __name, unsigned int __flags);
int mlock2(const void* __addr, unsigned long  __length  , unsigned int __flags);
int pkey_alloc(unsigned int __flags, unsigned int __access_restrictions);
int pkey_set(int __key, unsigned int __access_restrictions);
int pkey_get(int __key);
int pkey_free(int __key);
int pkey_mprotect(void* __addr, unsigned long  __len  , int __prot, int __pkey);
void* mmap(void* __addr, unsigned long  __len  , int __prot, int __flags, int __fd, long  int  __offset  );
void* mmap64(void* __addr, unsigned long  __len  , int __prot, int __flags, int __fd, long  int  __offset  );
int munmap(void* __addr, unsigned long  __len  );
int mprotect(void* __addr, unsigned long  __len  , int __prot);
int msync(void* __addr, unsigned long  __len  , int __flags);
int madvise(void* __addr, unsigned long  __len  , int __advice);
int posix_madvise(void* __addr, unsigned long  __len  , int __advice);
int mlock(const void* __addr, unsigned long  __len  );
int munlock(const void* __addr, unsigned long  __len  );
int mlockall(int __flags);
int munlockall();
int mincore(void* __start, unsigned long  __len  , unsigned char* __vec);
void* mremap(void* __addr, unsigned long  __old_len  , unsigned long  __new_len  , int __flags, ...);
int remap_file_pages(void* __start, unsigned long  __size  , int __prot, unsigned long  __pgoff  , int __flags);
int shm_open(const char* __name, int __oflag, unsigned int  __mode  );
int shm_unlink(const char* __name);
long  int  process_madvise(int __pid_fd, const struct iovec*  __iov  , unsigned long  __count  , int __advice, unsigned int __flags);
int process_mrelease(int pidfd, unsigned int flags);
int prlimit(int  __pid  , enum __rlimit_resource __resource, const struct rlimit*  __new_limit  , struct rlimit*  __old_limit  );
int prlimit64(int  __pid  , enum __rlimit_resource __resource, const struct rlimit64*  __new_limit  , struct rlimit64*  __old_limit  );
int getrlimit(enum __rlimit_resource  __resource  , struct rlimit*  __rlimits  );
int getrlimit64(enum __rlimit_resource  __resource  , struct rlimit64*  __rlimits  );
int setrlimit(enum __rlimit_resource  __resource  , const struct rlimit*  __rlimits  );
int setrlimit64(enum __rlimit_resource  __resource  , const struct rlimit64*  __rlimits  );
int getrusage(enum __rusage_who  __who  , struct rusage*  __usage  );
int getpriority(enum __priority_which  __which  , unsigned int  __who  );
int setpriority(enum __priority_which  __which  , unsigned int  __who  , int __prio);
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
int statvfs(const char* __restrict __file, struct statvfs* __restrict  __buf  );
int statvfs64(const char* __restrict __file, struct statvfs64* __restrict  __buf  );
int fstatvfs(int __fildes, struct statvfs*  __buf  );
int fstatvfs64(int __fildes, struct statvfs64*  __buf  );
int gettimeofday(struct timeval* __restrict  __tv  , void* __restrict __tz);
int settimeofday(const struct timeval*  __tv  , const struct timezone*  __tz  );
int adjtime(const struct timeval*  __delta  , struct timeval*  __olddelta  );
int getitimer(enum __itimer_which  __which  , struct itimerval*  __value  );
int setitimer(enum __itimer_which  __which  , const struct itimerval* __restrict  __new  , struct itimerval* __restrict  __old  );
int utimes(const char* __file, const struct timeval  __tvp[2]  );
int lutimes(const char* __file, const struct timeval  __tvp[2]  );
int futimes(int __fd, const struct timeval  __tvp[2]  );
int futimesat(int __fd, const char* __file, const struct timeval  __tvp[2]  );
long  int  times(struct tms*  __buffer  );
long  int  readv(int __fd, const struct iovec*  __iovec  , int __count);
long  int  writev(int __fd, const struct iovec*  __iovec  , int __count);
long  int  preadv(int __fd, const struct iovec*  __iovec  , int __count, long  int  __offset  );
long  int  pwritev(int __fd, const struct iovec*  __iovec  , int __count, long  int  __offset  );
long  int  preadv64(int __fd, const struct iovec*  __iovec  , int __count, long  int  __offset  );
long  int  pwritev64(int __fd, const struct iovec*  __iovec  , int __count, long  int  __offset  );
long  int  preadv2(int __fp, const struct iovec*  __iovec  , int __count, long  int  __offset  , int ___flags);
long  int  pwritev2(int __fd, const struct iovec*  __iodev  , int __count, long  int  __offset  , int __flags);
long  int  preadv64v2(int __fp, const struct iovec*  __iovec  , int __count, long  int  __offset  , int ___flags);
long  int  pwritev64v2(int __fd, const struct iovec*  __iodev  , int __count, long  int  __offset  , int __flags);
long  int  process_vm_readv(int  __pid  , const struct iovec*  __lvec  , unsigned long  int __liovcnt, const struct iovec*  __rvec  , unsigned long  int __riovcnt, unsigned long  int __flags);
long  int  process_vm_writev(int  __pid  , const struct iovec*  __lvec  , unsigned long  int __liovcnt, const struct iovec*  __rvec  , unsigned long  int __riovcnt, unsigned long  int __flags);
int uname(struct utsname*  __name  );
void (*__sysv_signal(int __sig, void (*__handler)(int)  ))(int) ;
void (*sysv_signal(int __sig, void (*__handler)(int)  ))(int) ;
void (*signal(int __sig, void (*__handler)(int)  ))(int) ;
int kill(int  __pid  , int __sig);
int killpg(int  __pgrp  , int __sig);
int raise(int __sig);
void (*ssignal(int __sig, void (*__handler)(int)  ))(int) ;
int gsignal(int __sig);
void psignal(int __sig, const char* __s);
void psiginfo(const struct anonymous_typeX43*  __pinfo  , const char* __s);
int sigpause(int __sig) __asm__ ("__xpg_sigpause")
  __attribute__ ((__deprecated__));
int sigblock(int __mask) __attribute__ ((__deprecated__));
int sigsetmask(int __mask) __attribute__ ((__deprecated__));
int siggetmask() __attribute__ ((__deprecated__));
int sigemptyset(struct anonymous_typeX1*  __set  );
int sigfillset(struct anonymous_typeX1*  __set  );
int sigaddset(struct anonymous_typeX1*  __set  , int __signo);
int sigdelset(struct anonymous_typeX1*  __set  , int __signo);
int sigismember(const struct anonymous_typeX1*  __set  , int __signo);
int sigisemptyset(const struct anonymous_typeX1*  __set  );
int sigandset(struct anonymous_typeX1*  __set  , const struct anonymous_typeX1*  __left  , const struct anonymous_typeX1*  __right  );
int sigorset(struct anonymous_typeX1*  __set  , const struct anonymous_typeX1*  __left  , const struct anonymous_typeX1*  __right  );
int sigprocmask(int __how, const struct anonymous_typeX1* __restrict  __set  , struct anonymous_typeX1* __restrict  __oset  );
int sigsuspend(const struct anonymous_typeX1*  __set  );
int sigaction(int __sig, const struct sigaction* __restrict  __act  , struct sigaction* __restrict  __oact  );
int sigpending(struct anonymous_typeX1*  __set  );
int sigwait(const struct anonymous_typeX1* __restrict  __set  , int* __restrict __sig);
int sigwaitinfo(const struct anonymous_typeX1* __restrict  __set  , struct anonymous_typeX43* __restrict  __info  );
int sigtimedwait(const struct anonymous_typeX1* __restrict  __set  , struct anonymous_typeX43* __restrict  __info  , const struct timespec* __restrict  __timeout  );
int sigqueue(int  __pid  , int __sig, const union sigval  __val  );
int sigreturn(struct sigcontext*  __scp  );
int siginterrupt(int __sig, int __interrupt) __attribute__ ((__deprecated__));
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
long  int  copy_file_range(int __infd, long  int*  __pinoff  , int __outfd, long  int*  __poutoff  , unsigned long  __length  , unsigned int __flags);
int fdatasync(int __fildes);
char* crypt(const char* __key, const char* __salt);
void swab(const void* __restrict __from, void* __restrict __to, long  int  __n  );
int getentropy(void* __buffer, unsigned long  __length  );
int close_range(unsigned int __fd, unsigned int __max_fd, int __flags);
int  gettid();
int sigaltstack(const struct anonymous_typeX76* __restrict  __ss  , struct anonymous_typeX76* __restrict  __oss  );
int sigstack(struct sigstack*  __ss  , struct sigstack*  __oss  ) __attribute__ ((__deprecated__));
int sighold(int __sig) __attribute__ ((__deprecated__));
int sigrelse(int __sig) __attribute__ ((__deprecated__));
int sigignore(int __sig) __attribute__ ((__deprecated__));
void (*sigset(int __sig, void (*__disp)(int)  ))(int)  __attribute__ ((__deprecated__)) ;
int pthread_sigmask(int __how, const struct anonymous_typeX1* __restrict  __newmask  , struct anonymous_typeX1* __restrict  __oldmask  );
int pthread_kill(unsigned long  int  __threadid  , int __signo);
int pthread_sigqueue(unsigned long  int  __threadid  , int __signo, const union sigval  __value  );
int __libc_current_sigrtmin();
int __libc_current_sigrtmax();
int tgkill(int  __tgid  , int  __tid  , int __signal);
int  wait(int* __stat_loc);
int  waitpid(int  __pid  , int* __stat_loc, int __options);
int waitid(enum anonymous_typeY77  __idtype  , unsigned int  __id  , struct anonymous_typeX43*  __infop  , int __options);
int  wait3(int* __stat_loc, int __options, struct rusage*  __usage  );
int  wait4(int  __pid  , int* __stat_loc, int __options, struct rusage*  __usage  );
unsigned int  cfgetospeed(const struct termios*  __termios_p  );
unsigned int  cfgetispeed(const struct termios*  __termios_p  );
int cfsetospeed(struct termios*  __termios_p  , unsigned int  __speed  );
int cfsetispeed(struct termios*  __termios_p  , unsigned int  __speed  );
int cfsetspeed(struct termios*  __termios_p  , unsigned int  __speed  );
unsigned int  cfgetobaud(const struct termios*  __termios_p  );
unsigned int  cfgetibaud(const struct termios*  __termios_p  );
int cfsetobaud(struct termios*  __termios_p  , unsigned int  __baud  );
int cfsetibaud(struct termios*  __termios_p  , unsigned int  __baud  );
int cfsetbaud(struct termios*  __termios_p  , unsigned int  __baud  );
int tcgetattr(int __fd, struct termios*  __termios_p  );
int tcsetattr(int __fd, int __optional_actions, const struct termios*  __termios_p  );
void cfmakeraw(struct termios*  __termios_p  );
int tcsendbreak(int __fd, int __duration);
int tcdrain(int __fd);
int tcflush(int __fd, int __queue_selector);
int tcflow(int __fd, int __action);
int  tcgetsid(int __fd);
int test_headers_posix();
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
int test_headers_posix()
{
        return 0;
}

