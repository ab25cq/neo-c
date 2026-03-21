/// c_include definition ///
/// typedef definition ///
typedef char* string;

typedef char __int8_t;

typedef unsigned char __uint8_t;

typedef short __int16_t;

typedef unsigned short int __uint16_t;

typedef int __int32_t;

typedef unsigned int __uint32_t;

typedef long long __int64_t;

typedef unsigned long  long __uint64_t;

typedef long __darwin_intptr_t;

typedef unsigned int __darwin_natural_t;

typedef int __darwin_ct_rune_t;

typedef union anonymous_typeZ1 __mbstate_t;

typedef union anonymous_typeZ1  __darwin_mbstate_t  ;

typedef long __darwin_ptrdiff_t;

typedef unsigned long  int __darwin_size_t;

typedef __builtin_va_list __darwin_va_list;

typedef int __darwin_wchar_t;

typedef int  __darwin_rune_t  ;

typedef unsigned int __darwin_wint_t;

typedef unsigned long  int __darwin_clock_t;

typedef unsigned int  __darwin_socklen_t  ;

typedef long __darwin_ssize_t;

typedef long __darwin_time_t;

typedef long long  __darwin_blkcnt_t  ;

typedef int  __darwin_blksize_t  ;

typedef int  __darwin_dev_t  ;

typedef unsigned int __darwin_fsblkcnt_t;

typedef unsigned int __darwin_fsfilcnt_t;

typedef unsigned int  __darwin_gid_t  ;

typedef unsigned int  __darwin_id_t  ;

typedef unsigned long  long  __darwin_ino64_t  ;

typedef unsigned long  long  __darwin_ino_t  ;

typedef unsigned int  __darwin_mach_port_name_t  ;

typedef unsigned int  __darwin_mach_port_t  ;

typedef unsigned short int  __darwin_mode_t  ;

typedef long long  __darwin_off_t  ;

typedef int  __darwin_pid_t  ;

typedef unsigned int  __darwin_sigset_t  ;

typedef int  __darwin_suseconds_t  ;

typedef unsigned int  __darwin_uid_t  ;

typedef unsigned int  __darwin_useconds_t  ;

typedef struct _opaque_pthread_attr_t  __darwin_pthread_attr_t  ;

typedef struct _opaque_pthread_cond_t  __darwin_pthread_cond_t  ;

typedef struct _opaque_pthread_condattr_t  __darwin_pthread_condattr_t  ;

typedef unsigned long  int __darwin_pthread_key_t;

typedef struct _opaque_pthread_mutex_t  __darwin_pthread_mutex_t  ;

typedef struct _opaque_pthread_mutexattr_t  __darwin_pthread_mutexattr_t  ;

typedef struct _opaque_pthread_once_t  __darwin_pthread_once_t  ;

typedef struct _opaque_pthread_rwlock_t  __darwin_pthread_rwlock_t  ;

typedef struct _opaque_pthread_rwlockattr_t  __darwin_pthread_rwlockattr_t  ;

typedef struct _opaque_pthread_t*  __darwin_pthread_t  ;

typedef int __darwin_nl_item;

typedef int __darwin_wctrans_t;

typedef unsigned int  __darwin_wctype_t  ;

typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long long int64_t;

typedef unsigned char u_int8_t;

typedef unsigned short int u_int16_t;

typedef unsigned int u_int32_t;

typedef unsigned long  long u_int64_t;

typedef long long  register_t  ;

typedef long  intptr_t  ;

typedef unsigned long  int uintptr_t;

typedef unsigned long  long  user_addr_t  ;

typedef unsigned long  long  user_size_t  ;

typedef long long  user_ssize_t  ;

typedef long long  user_long_t  ;

typedef unsigned long  long  user_ulong_t  ;

typedef long long  user_time_t  ;

typedef long long  user_off_t  ;

typedef unsigned long  long  syscall_arg_t  ;

typedef unsigned long  int  size_t  ;

typedef long long  fpos_t  ;

typedef struct __sFILE  FILE  ;

typedef long long  off_t  ;

typedef long  ssize_t  ;

typedef enum anonymous_typeY1 idtype_t;

typedef int  pid_t  ;

typedef unsigned int  id_t  ;

typedef int sig_atomic_t;

typedef struct __darwin_mcontext64*  mcontext_t  ;

typedef struct _opaque_pthread_attr_t  pthread_attr_t  ;

typedef struct __darwin_sigaltstack  stack_t  ;

typedef struct __darwin_ucontext  ucontext_t  ;

typedef unsigned int  sigset_t  ;

typedef unsigned int  uid_t  ;

typedef struct __siginfo  siginfo_t  ;

typedef void (*sig_t)(int);

typedef unsigned char uint8_t;

typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;

typedef unsigned long  long uint64_t;

typedef char  int_least8_t  ;

typedef short  int_least16_t  ;

typedef int  int_least32_t  ;

typedef long long  int_least64_t  ;

typedef unsigned char  uint_least8_t  ;

typedef unsigned short int  uint_least16_t  ;

typedef unsigned int  uint_least32_t  ;

typedef unsigned long  long  uint_least64_t  ;

typedef char  int_fast8_t  ;

typedef short  int_fast16_t  ;

typedef int  int_fast32_t  ;

typedef long long  int_fast64_t  ;

typedef unsigned char  uint_fast8_t  ;

typedef unsigned short int  uint_fast16_t  ;

typedef unsigned int  uint_fast32_t  ;

typedef unsigned long  long  uint_fast64_t  ;

typedef long  int intmax_t;

typedef unsigned long  int uintmax_t;

typedef unsigned long  long  rlim_t  ;

typedef void* rusage_info_t;

typedef struct rusage_info_v6  rusage_info_current  ;

typedef int  ct_rune_t  ;

typedef int  rune_t  ;

typedef int  wchar_t  ;

typedef struct anonymous_typeX8 div_t;

typedef struct anonymous_typeX9 ldiv_t;

typedef struct anonymous_typeX10 lldiv_t;

typedef unsigned long  long malloc_type_id_t;

typedef struct _malloc_zone_t malloc_zone_t;

typedef int  dev_t  ;

typedef unsigned short int  mode_t  ;

typedef unsigned long  int  rsize_t  ;

typedef int errno_t;

typedef __builtin_va_list  va_list  ;

typedef __builtin_va_list  __gnuc_va_list  ;

typedef struct _xlocale*  locale_t  ;

typedef union anonymous_typeZ1  mbstate_t  ;

typedef unsigned long  int  clock_t  ;

typedef long  time_t  ;

typedef enum anonymous_typeY10 clockid_t;

typedef unsigned int  wint_t  ;

typedef unsigned int  wctype_t  ;

typedef struct anonymous_typeX11 _RuneEntry;

typedef struct anonymous_typeX12 _RuneRange;

typedef struct anonymous_typeX13 _RuneCharClass;

typedef struct anonymous_typeX14 _RuneLocale;

typedef int*  wstring  ;

typedef struct MacroSnapshot MacroSnapshot;

/// previous struct definition ///
struct __sFILEX;

struct _xlocale;

struct sType;

struct sClass;

struct sInfo;

struct sVar;

struct sRightValueObject;

struct sVarTable;

struct sBlock;

/// struct definition ///
union anonymous_typeZ1
{
char __mbstate8[128];
long long _mbstateL;
};

typedef unsigned char __darwin_uuid_t[16];

typedef char __darwin_uuid_string_t[37];

struct __darwin_pthread_handler_rec
{
    void (*__routine)(void*);
    void* __arg;
    struct __darwin_pthread_handler_rec*  __next  ;
};

struct _opaque_pthread_attr_t
{
    long __sig;
    char __opaque[56];
};

struct _opaque_pthread_cond_t
{
    long __sig;
    char __opaque[40];
};

struct _opaque_pthread_condattr_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_mutex_t
{
    long __sig;
    char __opaque[56];
};

struct _opaque_pthread_mutexattr_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_once_t
{
    long __sig;
    char __opaque[8];
};

struct _opaque_pthread_rwlock_t
{
    long __sig;
    char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t
{
    long __sig;
    char __opaque[16];
};

struct _opaque_pthread_t
{
    long __sig;
    struct __darwin_pthread_handler_rec*  __cleanup_stack  ;
    char __opaque[8176];
};

struct __sbuf
{
    unsigned char* _base;
    int _size;
};

struct __sFILE
{
    unsigned char* _p;
    int _r;
    int _w;
    short _flags;
    short _file;
    struct __sbuf  _bf  ;
    int _lbfsize;
    void* _cookie;
    int (*close)(void*);
    int (*read)(void*,char*,int);
    long long  (*_seek)(void*,long long ,int);
    int (*write)(void*,const char*,int);
    struct __sbuf  _ub  ;
    struct __sFILEX*  _extra  ;
    int _ur;
    unsigned char _ubuf[3];
    unsigned char _nbuf[1];
    struct __sbuf  _lb  ;
    int _blksize;
    long long  _offset  ;
};

enum  anonymous_typeY1 { P_ALL 
,P_PID 
,P_PGID 
};

struct __darwin_arm_exception_state
{
    unsigned int  __exception  ;
    unsigned int  __fsr  ;
    unsigned int  __far  ;
};

struct __darwin_arm_exception_state64
{
    unsigned long  long  __far  ;
    unsigned int  __esr  ;
    unsigned int  __exception  ;
};

struct __darwin_arm_exception_state64_v2
{
    unsigned long  long  __far  ;
    unsigned long  long  __esr  ;
};

struct __darwin_arm_thread_state
{
    unsigned int  __r[13]  ;
    unsigned int  __sp  ;
    unsigned int  __lr  ;
    unsigned int  __pc  ;
    unsigned int  __cpsr  ;
};

struct __darwin_arm_thread_state64
{
    unsigned long  long  __x[29]  ;
    unsigned long  long  __fp  ;
    unsigned long  long  __lr  ;
    unsigned long  long  __sp  ;
    unsigned long  long  __pc  ;
    unsigned int  __cpsr  ;
    unsigned int  __pad  ;
};

struct __darwin_arm_vfp_state
{
    unsigned int  __r[64]  ;
    unsigned int  __fpscr  ;
};

struct __darwin_arm_neon_state64
{
    __uint128_t __v[32];
    unsigned int  __fpsr  ;
    unsigned int  __fpcr  ;
};

struct __darwin_arm_neon_state
{
    __uint128_t __v[16];
    unsigned int  __fpsr  ;
    unsigned int  __fpcr  ;
};

struct __arm_pagein_state
{
    int __pagein_error;
};

struct __darwin_arm_sme_state
{
    unsigned long  long  __svcr  ;
    unsigned long  long  __tpidr2_el0  ;
    unsigned short int  __svl_b  ;
};

struct __darwin_arm_sve_z_state
{
    char __z[16][256];
} __attribute__((aligned(4)));

struct __darwin_arm_sve_p_state
{
    char __p[16][256/8];
} __attribute__((aligned(4)));

struct __darwin_arm_sme_za_state
{
    char __za[4096];
} __attribute__((aligned(4)));

struct __darwin_arm_sme2_state
{
    char __zt0[64];
} __attribute__((aligned(4)));

struct __arm_legacy_debug_state
{
    unsigned int  __bvr[16]  ;
    unsigned int  __bcr[16]  ;
    unsigned int  __wvr[16]  ;
    unsigned int  __wcr[16]  ;
};

struct __darwin_arm_debug_state32
{
    unsigned int  __bvr[16]  ;
    unsigned int  __bcr[16]  ;
    unsigned int  __wvr[16]  ;
    unsigned int  __wcr[16]  ;
    unsigned long  long  __mdscr_el1  ;
};

struct __darwin_arm_debug_state64
{
    unsigned long  long  __bvr[16]  ;
    unsigned long  long  __bcr[16]  ;
    unsigned long  long  __wvr[16]  ;
    unsigned long  long  __wcr[16]  ;
    unsigned long  long  __mdscr_el1  ;
};

struct __darwin_arm_cpmu_state64
{
    unsigned long  long  __ctrs[16]  ;
};

struct __darwin_mcontext32
{
    struct __darwin_arm_exception_state  __es  ;
    struct __darwin_arm_thread_state  __ss  ;
    struct __darwin_arm_vfp_state  __fs  ;
};

struct __darwin_mcontext64
{
    struct __darwin_arm_exception_state64  __es  ;
    struct __darwin_arm_thread_state64  __ss  ;
    struct __darwin_arm_neon_state64  __ns  ;
};

struct __darwin_sigaltstack
{
    void* ss_sp;
    unsigned long  int  ss_size  ;
    int ss_flags;
};

struct __darwin_ucontext
{
    int uc_onstack;
    unsigned int  uc_sigmask  ;
    struct __darwin_sigaltstack  uc_stack  ;
    struct __darwin_ucontext*  uc_link  ;
    unsigned long  int  uc_mcsize  ;
    struct __darwin_mcontext64*  uc_mcontext  ;
};

union sigval
{
int sival_int;
void* sival_ptr;
};

struct sigevent
{
    int sigev_notify;
    int sigev_signo;
    union sigval  sigev_value  ;
    void (*sigev_notify_function)(union sigval );
    struct _opaque_pthread_attr_t*  sigev_notify_attributes  ;
};

struct __siginfo
{
    int si_signo;
    int si_errno;
    int si_code;
    int  si_pid  ;
    unsigned int  si_uid  ;
    int si_status;
    void* si_addr;
    union sigval  si_value  ;
    long si_band;
    unsigned long  int __pad[7];
};

union __sigaction_u
{
void (*__sa_handler)(int);
void (*__sa_sigaction)(int,struct __siginfo* ,void*);
};

struct __sigaction
{
    union __sigaction_u  __sigaction_u  ;
    void (*sa_tramp)(void*,int,int,struct __siginfo* ,void*);
    unsigned int  sa_mask  ;
    int sa_flags;
};

struct sigaction
{
    union __sigaction_u  __sigaction_u  ;
    unsigned int  sa_mask  ;
    int sa_flags;
};

struct sigvec
{
    void (*sv_handler)(int);
    int sv_mask;
    int sv_flags;
};

struct sigstack
{
    char* ss_sp;
    int ss_onstack;
};

struct timeval
{
    long  tv_sec  ;
    int  tv_usec  ;
};

struct rusage
{
    struct timeval  ru_utime  ;
    struct timeval  ru_stime  ;
    long ru_maxrss;
    long ru_ixrss;
    long ru_idrss;
    long ru_isrss;
    long ru_minflt;
    long ru_majflt;
    long ru_nswap;
    long ru_inblock;
    long ru_oublock;
    long ru_msgsnd;
    long ru_msgrcv;
    long ru_nsignals;
    long ru_nvcsw;
    long ru_nivcsw;
};

struct rusage_info_v0
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
};

struct rusage_info_v1
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
    unsigned long  long  ri_child_user_time  ;
    unsigned long  long  ri_child_system_time  ;
    unsigned long  long  ri_child_pkg_idle_wkups  ;
    unsigned long  long  ri_child_interrupt_wkups  ;
    unsigned long  long  ri_child_pageins  ;
    unsigned long  long  ri_child_elapsed_abstime  ;
};

struct rusage_info_v2
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
    unsigned long  long  ri_child_user_time  ;
    unsigned long  long  ri_child_system_time  ;
    unsigned long  long  ri_child_pkg_idle_wkups  ;
    unsigned long  long  ri_child_interrupt_wkups  ;
    unsigned long  long  ri_child_pageins  ;
    unsigned long  long  ri_child_elapsed_abstime  ;
    unsigned long  long  ri_diskio_bytesread  ;
    unsigned long  long  ri_diskio_byteswritten  ;
};

struct rusage_info_v3
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
    unsigned long  long  ri_child_user_time  ;
    unsigned long  long  ri_child_system_time  ;
    unsigned long  long  ri_child_pkg_idle_wkups  ;
    unsigned long  long  ri_child_interrupt_wkups  ;
    unsigned long  long  ri_child_pageins  ;
    unsigned long  long  ri_child_elapsed_abstime  ;
    unsigned long  long  ri_diskio_bytesread  ;
    unsigned long  long  ri_diskio_byteswritten  ;
    unsigned long  long  ri_cpu_time_qos_default  ;
    unsigned long  long  ri_cpu_time_qos_maintenance  ;
    unsigned long  long  ri_cpu_time_qos_background  ;
    unsigned long  long  ri_cpu_time_qos_utility  ;
    unsigned long  long  ri_cpu_time_qos_legacy  ;
    unsigned long  long  ri_cpu_time_qos_user_initiated  ;
    unsigned long  long  ri_cpu_time_qos_user_interactive  ;
    unsigned long  long  ri_billed_system_time  ;
    unsigned long  long  ri_serviced_system_time  ;
};

struct rusage_info_v4
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
    unsigned long  long  ri_child_user_time  ;
    unsigned long  long  ri_child_system_time  ;
    unsigned long  long  ri_child_pkg_idle_wkups  ;
    unsigned long  long  ri_child_interrupt_wkups  ;
    unsigned long  long  ri_child_pageins  ;
    unsigned long  long  ri_child_elapsed_abstime  ;
    unsigned long  long  ri_diskio_bytesread  ;
    unsigned long  long  ri_diskio_byteswritten  ;
    unsigned long  long  ri_cpu_time_qos_default  ;
    unsigned long  long  ri_cpu_time_qos_maintenance  ;
    unsigned long  long  ri_cpu_time_qos_background  ;
    unsigned long  long  ri_cpu_time_qos_utility  ;
    unsigned long  long  ri_cpu_time_qos_legacy  ;
    unsigned long  long  ri_cpu_time_qos_user_initiated  ;
    unsigned long  long  ri_cpu_time_qos_user_interactive  ;
    unsigned long  long  ri_billed_system_time  ;
    unsigned long  long  ri_serviced_system_time  ;
    unsigned long  long  ri_logical_writes  ;
    unsigned long  long  ri_lifetime_max_phys_footprint  ;
    unsigned long  long  ri_instructions  ;
    unsigned long  long  ri_cycles  ;
    unsigned long  long  ri_billed_energy  ;
    unsigned long  long  ri_serviced_energy  ;
    unsigned long  long  ri_interval_max_phys_footprint  ;
    unsigned long  long  ri_runnable_time  ;
};

struct rusage_info_v5
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
    unsigned long  long  ri_child_user_time  ;
    unsigned long  long  ri_child_system_time  ;
    unsigned long  long  ri_child_pkg_idle_wkups  ;
    unsigned long  long  ri_child_interrupt_wkups  ;
    unsigned long  long  ri_child_pageins  ;
    unsigned long  long  ri_child_elapsed_abstime  ;
    unsigned long  long  ri_diskio_bytesread  ;
    unsigned long  long  ri_diskio_byteswritten  ;
    unsigned long  long  ri_cpu_time_qos_default  ;
    unsigned long  long  ri_cpu_time_qos_maintenance  ;
    unsigned long  long  ri_cpu_time_qos_background  ;
    unsigned long  long  ri_cpu_time_qos_utility  ;
    unsigned long  long  ri_cpu_time_qos_legacy  ;
    unsigned long  long  ri_cpu_time_qos_user_initiated  ;
    unsigned long  long  ri_cpu_time_qos_user_interactive  ;
    unsigned long  long  ri_billed_system_time  ;
    unsigned long  long  ri_serviced_system_time  ;
    unsigned long  long  ri_logical_writes  ;
    unsigned long  long  ri_lifetime_max_phys_footprint  ;
    unsigned long  long  ri_instructions  ;
    unsigned long  long  ri_cycles  ;
    unsigned long  long  ri_billed_energy  ;
    unsigned long  long  ri_serviced_energy  ;
    unsigned long  long  ri_interval_max_phys_footprint  ;
    unsigned long  long  ri_runnable_time  ;
    unsigned long  long  ri_flags  ;
};

struct rusage_info_v6
{
    unsigned char  ri_uuid[16]  ;
    unsigned long  long  ri_user_time  ;
    unsigned long  long  ri_system_time  ;
    unsigned long  long  ri_pkg_idle_wkups  ;
    unsigned long  long  ri_interrupt_wkups  ;
    unsigned long  long  ri_pageins  ;
    unsigned long  long  ri_wired_size  ;
    unsigned long  long  ri_resident_size  ;
    unsigned long  long  ri_phys_footprint  ;
    unsigned long  long  ri_proc_start_abstime  ;
    unsigned long  long  ri_proc_exit_abstime  ;
    unsigned long  long  ri_child_user_time  ;
    unsigned long  long  ri_child_system_time  ;
    unsigned long  long  ri_child_pkg_idle_wkups  ;
    unsigned long  long  ri_child_interrupt_wkups  ;
    unsigned long  long  ri_child_pageins  ;
    unsigned long  long  ri_child_elapsed_abstime  ;
    unsigned long  long  ri_diskio_bytesread  ;
    unsigned long  long  ri_diskio_byteswritten  ;
    unsigned long  long  ri_cpu_time_qos_default  ;
    unsigned long  long  ri_cpu_time_qos_maintenance  ;
    unsigned long  long  ri_cpu_time_qos_background  ;
    unsigned long  long  ri_cpu_time_qos_utility  ;
    unsigned long  long  ri_cpu_time_qos_legacy  ;
    unsigned long  long  ri_cpu_time_qos_user_initiated  ;
    unsigned long  long  ri_cpu_time_qos_user_interactive  ;
    unsigned long  long  ri_billed_system_time  ;
    unsigned long  long  ri_serviced_system_time  ;
    unsigned long  long  ri_logical_writes  ;
    unsigned long  long  ri_lifetime_max_phys_footprint  ;
    unsigned long  long  ri_instructions  ;
    unsigned long  long  ri_cycles  ;
    unsigned long  long  ri_billed_energy  ;
    unsigned long  long  ri_serviced_energy  ;
    unsigned long  long  ri_interval_max_phys_footprint  ;
    unsigned long  long  ri_runnable_time  ;
    unsigned long  long  ri_flags  ;
    unsigned long  long  ri_user_ptime  ;
    unsigned long  long  ri_system_ptime  ;
    unsigned long  long  ri_pinstructions  ;
    unsigned long  long  ri_pcycles  ;
    unsigned long  long  ri_energy_nj  ;
    unsigned long  long  ri_penergy_nj  ;
    unsigned long  long  ri_secure_time_in_system  ;
    unsigned long  long  ri_secure_ptime_in_system  ;
    unsigned long  long  ri_neural_footprint  ;
    unsigned long  long  ri_lifetime_max_neural_footprint  ;
    unsigned long  long  ri_interval_max_neural_footprint  ;
    unsigned long  long  ri_reserved[9]  ;
};

struct rlimit
{
    unsigned long  long  rlim_cur  ;
    unsigned long  long  rlim_max  ;
};

struct proc_rlimit_control_wakeupmon
{
    unsigned int  wm_flags  ;
    int  wm_rate  ;
};

union anonymous_typeZ2
{
unsigned long  long  _ull  ;
unsigned int  _ul[2]  ;
};

union anonymous_typeZ3
{
unsigned long  long  _ull  ;
unsigned int  _ul[2]  ;
};

union anonymous_typeZ4
{
unsigned long  long  _ull  ;
unsigned int  _ul[2]  ;
};

union anonymous_typeZ5
{
unsigned long  long  _ull  ;
unsigned int  _ul[2]  ;
};

struct anonymous_typeX6
{
    unsigned int w_Termsig:7;
    unsigned int w_Coredump:1;
    unsigned int w_Retcode:8;
    unsigned int w_Filler:16;
};

struct anonymous_typeX7
{
    unsigned int w_Stopval:8;
    unsigned int w_Stopsig:8;
    unsigned int w_Filler:16;
};

union wait
{
int w_status;
    struct {
        unsigned int w_Termsig:7;
        unsigned int w_Coredump:1;
        unsigned int w_Retcode:8;
        unsigned int w_Filler:16;
    } w_T;
    struct {
        unsigned int w_Stopval:8;
        unsigned int w_Stopsig:8;
        unsigned int w_Filler:16;
    } w_S;
};

struct anonymous_typeX8
{
    int quot;
    int rem;
};

struct anonymous_typeX9
{
    long quot;
    long rem;
};

struct anonymous_typeX10
{
    long long quot;
    long long rem;
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
    char int_n_cs_precedes;
    char int_p_sep_by_space;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};

struct timespec
{
    long  tv_sec  ;
    long tv_nsec;
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
    long tm_gmtoff;
    char* tm_zone;
};

enum  anonymous_typeY10 { _CLOCK_REALTIME=(0),
_CLOCK_MONOTONIC=(6),
_CLOCK_MONOTONIC_RAW=(4),
_CLOCK_MONOTONIC_RAW_APPROX=(5),
_CLOCK_UPTIME_RAW=(8),
_CLOCK_UPTIME_RAW_APPROX=(9),
_CLOCK_PROCESS_CPUTIME_ID=(12),
_CLOCK_THREAD_CPUTIME_ID=(16)
};

struct anonymous_typeX11
{
    int  __min  ;
    int  __max  ;
    int  __map  ;
    unsigned int*  __types  ;
};

struct anonymous_typeX12
{
    int __nranges;
    struct {
        int  __min  ;
        int  __max  ;
        int  __map  ;
        unsigned int*  __types  ;
    } __ranges;
};

struct anonymous_typeX13
{
    char __name[14];
    unsigned int  __mask  ;
};

struct anonymous_typeX14
{
    char __magic[8];
    char __encoding[32];
    int  (*__sgetrune)(const char*,unsigned long  int ,char**);
    int (*__sputrune)(int ,char*,unsigned long  int ,char**);
    int  __invalid_rune  ;
    unsigned int  __runetype[(1<<8)]  ;
    int  __maplower[(1<<8)]  ;
    int  __mapupper[(1<<8)]  ;
    struct {
        int __nranges;
        struct {
            int  __min  ;
            int  __max  ;
            int  __map  ;
            unsigned int*  __types  ;
        } __ranges;
    } __runetype_ext;
    struct {
        int __nranges;
        struct {
            int  __min  ;
            int  __max  ;
            int  __map  ;
            unsigned int*  __types  ;
        } __ranges;
    } __maplower_ext;
    struct {
        int __nranges;
        struct {
            int  __min  ;
            int  __max  ;
            int  __map  ;
            unsigned int*  __types  ;
        } __ranges;
    } __mapupper_ext;
    void* __variable;
    int __variable_len;
    int __ncharclasses;
    struct {
        char __name[14];
        unsigned int  __mask  ;
    } __charclasses;
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

struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo* );
    int (*sline)(void*);
    int (*sline_real)(void*);
    char*  (*sname)(void*);
    _Bool (*terminated)(void*);
    char*  (*kind)(void*);
    struct sNode* (*left_value)(void*);
};

struct tuple2$2char$phsType$ph
{
    char*  v1  ;
    struct sType*  v2  ;
};

struct list_item$1tuple2$2char$phsType$ph$ph
{
    struct tuple2$2char$phsType$ph* item;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev;
    struct list_item$1tuple2$2char$phsType$ph$ph* next;
};

struct list$1tuple2$2char$phsType$ph$ph
{
    struct list_item$1tuple2$2char$phsType$ph$ph* head;
    struct list_item$1tuple2$2char$phsType$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
};

struct sClass
{
    _Bool mStruct;
    _Bool mFloat;
    _Bool mUnion;
    _Bool mGenerics;
    _Bool mMethodGenerics;
    _Bool mEnum;
    _Bool mProtocol;
    _Bool mNumber;
    _Bool mUniq;
    _Bool mTypeName;
    _Bool mAnonymous;
    char*  mName  ;
    int mGenericsNum;
    int mMethodGenericsNum;
    struct list$1tuple2$2char$phsType$ph$ph* mFields;
    char*  mParentClassName  ;
    char*  mAttribute  ;
    _Bool mIter;
};

struct list_item$1sType$ph
{
    struct sType*  item  ;
    struct list_item$1sType$ph* prev;
    struct list_item$1sType$ph* next;
};

struct list$1sType$ph
{
    struct list_item$1sType$ph* head;
    struct list_item$1sType$ph* tail;
    int len;
    struct list_item$1sType$ph* it;
};

struct list_item$1sNode$ph
{
    struct sNode* item;
    struct list_item$1sNode$ph* prev;
    struct list_item$1sNode$ph* next;
};

struct list$1sNode$ph
{
    struct list_item$1sNode$ph* head;
    struct list_item$1sNode$ph* tail;
    int len;
    struct list_item$1sNode$ph* it;
};

struct sType
{
    struct sClass*  mClass  ;
    struct sType*  mOriginalLoadVarType  ;
    struct sType*  mChannelType  ;
    struct list$1sType$ph* mGenericsTypes;
    struct sType*  mNoSolvedGenericsType  ;
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    _Bool mAlignasDouble;
    char*  mTupleName  ;
    char*  mAttribute  ;
    char*  mVarAttribute  ;
    char*  mMiddleAttribute  ;
    char*  mPointerAttribute  ;
    _Bool mNew;
    _Bool mAllocaValue;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mAtomic;
    _Bool mThreadLocal;
    _Bool mNorecord;
    _Bool mThread;
    _Bool mComplex;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mNoreturn;
    _Bool mStatic;
    _Bool mWeak;
    _Bool mUniq;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mHeap;
    _Bool mChannel;
    _Bool mDefferRightValue;
    _Bool mNoHeap;
    _Bool mRefference;
    _Bool mSlice;
    _Bool mOptional;
    _Bool mNoCallingDestructor;
    _Bool mTypeName;
    _Bool mAnonymous;
    char*  mAnonymousName  ;
    _Bool mInnerStruct;
    char*  mInnerStructName  ;
    _Bool mAnonymousVarName;
    _Bool mInline;
    char*  mAsmName  ;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    struct list$1sNode$ph* mArrayNum;
    struct list$1sNode$ph* mVarNameArrayNum;
    struct list$1int$* mArrayStatic;
    struct list$1int$* mArrayRestrict;
    int mPointerNum;
    int mFunctionPointerNum;
    int mArrayPointerNum;
    _Bool mPointerParen;
    _Bool mMinusPointerNum;
    struct sType*  mTypedefOriginalType  ;
    char*  mOriginalTypeName  ;
    int mOriginalTypePointerNum;
    int mOriginalTypePointerHeap;
    _Bool mArrayPointerType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct sType*  mResultType  ;
    _Bool mVarArgs;
    struct sNode* mTypeOfNode;
    struct list$1sNode$ph* mHeapArrayNum;
};

struct sVar
{
    char*  mName  ;
    char*  mCValueName  ;
    struct sType*  mType  ;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mNoFree;
    char*  mFunName  ;
    _Bool no_output_come_code;
};

struct list_item$1sVar$ph
{
    struct sVar*  item  ;
    struct list_item$1sVar$ph* prev;
    struct list_item$1sVar$ph* next;
};

struct list$1sVar$ph
{
    struct list_item$1sVar$ph* head;
    struct list_item$1sVar$ph* tail;
    int len;
    struct list_item$1sVar$ph* it;
};

struct sFun
{
    char*  mName  ;
    struct sType*  mResultType  ;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    struct sType*  mLambdaType  ;
    struct list$1sVar$ph* mAllVar;
    struct sBlock*  mBlock  ;
    char*  mTextBlock  ;
    char*  mTextBlockSName  ;
    int mTextBlockSline;
    struct buffer*  mSource  ;
    struct buffer*  mSourceHead  ;
    struct buffer*  mSourceHead2  ;
    struct buffer*  mSourceEnd  ;
    _Bool mStatic;
    _Bool mInline;
    _Bool mUniq;
    _Bool mExternal;
    _Bool mVarArgs;
    _Bool mNoResultType;
    _Bool mConstFun;
    char*  mAttribute  ;
    char*  mMiddleAttribute  ;
    char*  mFunAttribute  ;
    _Bool mGenericsFun;
    _Bool mDefineReturnVar;
    char*  mAsmFun  ;
};

struct sGenericsFun
{
    struct sType*  mImplType  ;
    struct list$1char$ph* mGenericsTypeNames;
    struct list$1char$ph* mMethodGenericsTypeNames;
    char*  mName  ;
    struct sType*  mResultType  ;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    char*  mBlock  ;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char*  mGenericsSName  ;
    int mGenericsSLine;
    _Bool mConstFun;
};

struct CVALUE
{
    char*  c_value  ;
    struct sType*  type  ;
    struct sVar*  var  ;
    struct sRightValueObject*  right_value_objects  ;
    char*  c_value_without_right_value_objects  ;
    char*  c_value_without_cast_object_value  ;
    _Bool mLoadField;
    _Bool mCastValue;
    _Bool mNullValue;
    char*  c_value_without_null_checker  ;
};

struct map$2char$phchar$ph
{
    char**  keys  ;
    _Bool* item_existance;
    char**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sModule
{
    struct buffer*  mSourceHead  ;
    struct buffer*  mSource  ;
    char*  mLastCode  ;
    char*  mLastCode2  ;
    struct map$2char$phchar$ph* mHeader;
};

struct map$2char$phsVar$ph
{
    char**  keys  ;
    _Bool* item_existance;
    struct sVar**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct sVarTable
{
    struct map$2char$phsVar$ph* mVars;
    _Bool mGlobal;
    struct sVarTable*  mParent  ;
};

struct sBlock
{
    struct list$1sNode$ph* mNodes;
    struct sVarTable*  mVarTable  ;
    _Bool mOmitSemicolon;
};

struct sRightValueObject
{
    struct sType*  mType  ;
    char*  mVarName  ;
    char*  mFunName  ;
    char* mSName;
    int mSLine;
    _Bool mFreed;
    int mID;
    int mBlockLevel;
    _Bool mStored;
    _Bool mDecrementRefCount;
    struct sType*  mObjType  ;
    char*  mObjValue  ;
    struct sVar*  mObjVar  ;
    _Bool mNoFree;
};

struct span$1char$p
{
    char* memory;
    char* p;
    unsigned long  int  len  ;
    _Bool local;
    _Bool heap;
    _Bool global;
    void* stacktop;
};

struct map$2char$phsFun$ph
{
    char**  keys  ;
    _Bool* item_existance;
    struct sFun**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char**  keys  ;
    _Bool* item_existance;
    struct sGenericsFun**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char**  keys  ;
    _Bool* item_existance;
    struct sClass**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char**  keys  ;
    _Bool* item_existance;
    struct sType**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char**  keys  ;
    _Bool* item_existance;
    struct buffer**  items  ;
    int size;
    int len;
    struct list$1char$ph* key_list;
    int it;
};

struct list_item$1sRightValueObject$ph
{
    struct sRightValueObject*  item  ;
    struct list_item$1sRightValueObject$ph* prev;
    struct list_item$1sRightValueObject$ph* next;
};

struct list$1sRightValueObject$ph
{
    struct list_item$1sRightValueObject$ph* head;
    struct list_item$1sRightValueObject$ph* tail;
    int len;
    struct list_item$1sRightValueObject$ph* it;
};

struct list_item$1CVALUE$ph
{
    struct CVALUE*  item  ;
    struct list_item$1CVALUE$ph* prev;
    struct list_item$1CVALUE$ph* next;
};

struct list$1CVALUE$ph
{
    struct list_item$1CVALUE$ph* head;
    struct list_item$1CVALUE$ph* tail;
    int len;
    struct list_item$1CVALUE$ph* it;
};

struct sInfo
{
    struct span$1char$p* p;
    char* head;
    struct buffer*  source  ;
    char* end;
    char*  sname  ;
    char*  sname_at_head  ;
    char*  base_sname  ;
    int sline;
    int err_num;
    int warning_num;
    char*  clang_option  ;
    char*  cpp_option  ;
    char*  linker_option  ;
    char*  linker_option2  ;
    _Bool no_output_err;
    _Bool no_output_come_code;
    _Bool undefined_array_num_var;
    struct sFun*  come_fun  ;
    struct sFun*  caller_fun  ;
    int caller_line;
    char*  caller_sname  ;
    int block_level;
    struct map$2char$phsFun$ph* funcs;
    struct map$2char$phsFun$ph* uniq_funcs;
    struct map$2char$phsGenericsFun$ph* generics_funcs;
    struct map$2char$phsClass$ph* classes;
    struct map$2char$phsType$ph* types;
    struct map$2char$phsClass$ph* generics_classes;
    struct map$2char$phbuffer$ph* struct_definition;
    struct map$2char$phbuffer$ph* c_include_definition;
    struct map$2char$phbuffer$ph* var_definition;
    struct map$2char$phbuffer$ph* previous_struct_definition;
    struct map$2char$phbuffer$ph* typedef_definition;
    struct map$2char$phsType$ph* named_child_struct;
    struct map$2char$phchar$ph* reflection_vars;
    struct sModule*  module  ;
    struct sType*  type  ;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct sType*  generics_type  ;
    struct list$1sType$ph* method_generics_types;
    struct list$1CVALUE$ph* stack;
    struct sType*  come_function_result_type  ;
    struct sType*  come_method_block_function_result_type  ;
    struct sVarTable*  lv_table  ;
    struct sVarTable*  gv_table  ;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1char$ph* generics_type_names;
    struct list$1char$ph* method_generics_type_names;
    struct sType*  impl_type  ;
    struct sType*  class_type  ;
    int current_stack_num;
    int num_method_block;
    struct sClass*  current_stack_frame_struct  ;
    _Bool define_struct;
    _Bool in_typedef;
    char*  output_file_name  ;
    struct sVarTable*  current_loop_vtable  ;
    _Bool verbose;
    int num_current_stack;
    int num_source_files;
    int max_source_files;
    _Bool writing_source_file_position;
    struct sType*  function_result_type  ;
    _Bool in_class;
    struct map$2char$phchar$ph* module_params;
    _Bool constructor_;
    struct sClass*  defining_class  ;
    _Bool array_initializer;
    _Bool va_arg;
    _Bool in_fun_param;
    _Bool inhibits_output_code;
    _Bool inhibits_output_code2;
    _Bool in_generics_fun;
    _Bool in_clone_object;
    _Bool in_conditional_operator;
    struct list$1sVar$ph* match_it_var;
    int sline_top;
    struct sFun*  calling_fun  ;
    struct map$2char$phchar$ph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool baremetal_cpp;
    _Bool gcc_compiler;
    _Bool in_method_block;
    _Bool in_offsetof;
    int right_value_num;
    int right_value_max;
    _Bool in_conditional;
    int num_conditional;
    int max_conditional;
    char*  pragma  ;
    struct list$1char$ph* pragma_pack_stack;
    _Bool in_refference;
    struct buffer*  paren_block_buffer  ;
    _Bool in_typeof;
    _Bool in_store_array;
    int parse_struct_recursive_count;
    _Bool exp_value;
    struct buffer*  if_expression_buffer  ;
    char*  if_result_value_name  ;
    _Bool if_result_value_name_defined;
    struct sType*  if_result_type  ;
    _Bool defer_block;
    struct buffer*  loop_expression_buffer  ;
    char*  loop_result_value_name  ;
    _Bool loop_result_value_name_defined;
    struct sType*  loop_result_type  ;
    char*  iter_buffer  ;
    char*  iter_next  ;
    char*  iter_block  ;
    _Bool use_iter_next;
    struct sType*  iter_type  ;
    int id;
};

struct sNodeBase
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sCurrentNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct tuple2$2sType$phchar$ph
{
    struct sType*  v1  ;
    char*  v2  ;
};

struct tuple2$2char$phsGenericsFun$p
{
    char*  v1  ;
    struct sGenericsFun*  v2  ;
};

struct tuple3$3sType$phchar$ph_Bool$
{
    struct sType*  v1  ;
    char*  v2  ;
    _Bool v3;
};

struct tuple2$2char$phchar$ph
{
    char*  v1  ;
    char*  v2  ;
};

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$
{
    struct list$1sType$ph* v1;
    struct list$1char$ph* v2;
    struct list$1char$ph* v3;
    _Bool v4;
};

struct tuple2$2sFun$pchar$ph
{
    struct sFun*  v1  ;
    char*  v2  ;
};

struct tuple2$2char$ph_Bool$
{
    char*  v1  ;
    _Bool v2;
};

struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$
{
    _Bool v1;
    _Bool v2;
    _Bool v3;
    _Bool v4;
    _Bool v5;
};

struct tuple2$2char$phsNode$ph
{
    char*  v1  ;
    struct sNode* v2;
};

struct list_item$1tuple2$2char$phsNode$ph$ph
{
    struct tuple2$2char$phsNode$ph* item;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev;
    struct list_item$1tuple2$2char$phsNode$ph$ph* next;
};

struct list$1tuple2$2char$phsNode$ph$ph
{
    struct list_item$1tuple2$2char$phsNode$ph$ph* head;
    struct list_item$1tuple2$2char$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
};

struct tuple3$3sType$phchar$phsNode$ph
{
    struct sType*  v1  ;
    char*  v2  ;
    struct sNode* v3;
};

struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph
{
    struct tuple3$3sType$phchar$phsNode$ph* item;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* next;
};

struct list$1tuple3$3sType$phchar$phsNode$ph$ph
{
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* head;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
};

struct tuple3$3char$phsFun$psGenericsFun$p
{
    char*  v1  ;
    struct sFun*  v2  ;
    struct sGenericsFun*  v3  ;
};

struct sNothingNode
{
    int sline;
    char*  sname  ;
    int sline_real;
};

struct sNullChecker
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sHeapChecker
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sNode* value;
};

struct sFunNode
{
    int sline;
    char*  sname  ;
    int sline_real;
    struct sFun*  mFun  ;
};

struct __current_stack1__
{
    _Bool* pointer_paren;
    int* paren_num;
    int* array_pointer_num;
    struct list$1sNode$ph** array;
    struct sInfo**  info  ;
    _Bool* parse_variable_name;
    _Bool* parse_multiple_type;
    _Bool* in_function_parametor;
    char** head;
    int* head_sline;
    char**  attribute_before  ;
    char**  type_name  ;
    _Bool* norecord;
    _Bool* constant;
    _Bool* static_;
    _Bool* volatile_;
    _Bool* register_;
    _Bool* unsigned_;
    _Bool* long_;
    _Bool* long_long;
    _Bool* short_;
    _Bool* restrict_;
    _Bool* struct_;
    _Bool* union_;
    _Bool* enum_;
    _Bool* no_heap;
    _Bool* extern_;
    _Bool* inline_;
    _Bool* uniq_;
    _Bool* tuple_;
    _Bool* original_var_name;
    _Bool* complex_;
    _Bool* type_name_;
    _Bool* noreturn_;
    _Bool* weak_;
    struct sNode** alignas_;
    _Bool* alignas_double;
    char**  tag_attribute  ;
    _Bool* struct_define_parsed;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    _Bool* thread_;
    char**  attribute_32  ;
    int* pointer_num;
    char**  pointer_attribute  ;
    _Bool* heap;
    _Bool* refference;
    _Bool* no_refference;
    _Bool* channel;
    _Bool* deffer_;
    _Bool* any_class;
    _Bool* vtable;
    char**  tuple_name  ;
    _Bool* lambda_flag;
    struct sType**  type_33  ;
    char**  var_name_34  ;
    _Bool* function_pointer_flag;
    _Bool* pointer_to_array_flag;
    _Bool* var_name_between_brace;
};

struct __current_stack2__
{
    struct sInfo**  info  ;
    _Bool* parse_variable_name;
    _Bool* parse_multiple_type;
    _Bool* in_function_parametor;
    char** head;
    int* head_sline;
    char**  attribute_before  ;
    char**  type_name  ;
    _Bool* norecord;
    _Bool* constant;
    _Bool* static_;
    _Bool* volatile_;
    _Bool* register_;
    _Bool* unsigned_;
    _Bool* long_;
    _Bool* long_long;
    _Bool* short_;
    _Bool* restrict_;
    _Bool* struct_;
    _Bool* union_;
    _Bool* enum_;
    _Bool* no_heap;
    _Bool* extern_;
    _Bool* inline_;
    _Bool* uniq_;
    _Bool* tuple_;
    _Bool* original_var_name;
    _Bool* complex_;
    _Bool* type_name_;
    _Bool* noreturn_;
    _Bool* weak_;
    struct sNode** alignas_;
    _Bool* alignas_double;
    char**  tag_attribute  ;
    _Bool* struct_define_parsed;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    _Bool* thread_;
    char**  attribute_32  ;
    int* pointer_num;
    char**  pointer_attribute  ;
    _Bool* heap;
    _Bool* refference;
    _Bool* no_refference;
    _Bool* channel;
    _Bool* deffer_;
    _Bool* any_class;
    _Bool* vtable;
    char**  tuple_name  ;
    _Bool* lambda_flag;
    struct sType**  type_33  ;
    char**  var_name_34  ;
    _Bool* function_pointer_flag;
    _Bool* pointer_to_array_flag;
    _Bool* var_name_between_brace;
    struct list$1sNode$ph** array_num_typedef;
};

struct __current_stack3__
{
    struct sInfo**  info  ;
    _Bool* parse_variable_name;
    _Bool* parse_multiple_type;
    _Bool* in_function_parametor;
    char** head;
    int* head_sline;
    char**  attribute_before  ;
    char**  type_name  ;
    _Bool* norecord;
    _Bool* constant;
    _Bool* static_;
    _Bool* volatile_;
    _Bool* register_;
    _Bool* unsigned_;
    _Bool* long_;
    _Bool* long_long;
    _Bool* short_;
    _Bool* restrict_;
    _Bool* struct_;
    _Bool* union_;
    _Bool* enum_;
    _Bool* no_heap;
    _Bool* extern_;
    _Bool* inline_;
    _Bool* uniq_;
    _Bool* tuple_;
    _Bool* original_var_name;
    _Bool* complex_;
    _Bool* type_name_;
    _Bool* noreturn_;
    _Bool* weak_;
    struct sNode** alignas_;
    _Bool* alignas_double;
    char**  tag_attribute  ;
    _Bool* struct_define_parsed;
    _Bool* anonymous_type;
    _Bool* anonymous_name;
    _Bool* atomic_;
    _Bool* thread_local;
    _Bool* thread_;
    char**  attribute_32  ;
    int* pointer_num;
    char**  pointer_attribute  ;
    _Bool* heap;
    _Bool* refference;
    _Bool* no_refference;
    _Bool* channel;
    _Bool* deffer_;
    _Bool* any_class;
    _Bool* vtable;
    char**  tuple_name  ;
    _Bool* lambda_flag;
    struct sType**  type_33  ;
    char**  var_name_34  ;
    _Bool* function_pointer_flag;
    _Bool* pointer_to_array_flag;
    _Bool* var_name_between_brace;
    struct list$1sNode$ph** array_num_typedef;
};

/// variable definition ///
extern struct __sFILE*  __stdinp  ;
extern struct __sFILE*  __stdoutp  ;
extern struct __sFILE*  __stderrp  ;
extern const int sys_nerr;
extern const char* const sys_errlist[];
extern int __mb_cur_max;
extern char* suboptarg;
extern int*  __error(void);
extern char* tzname[];
extern int getdate_err;
extern long timezone;
extern int daylight;
extern struct anonymous_typeX14  _DefaultRuneLocale  ;
extern struct anonymous_typeX14*  _CurrentRuneLocale  ;
extern struct neo_frame*  neo_current_frame  ;

extern struct sMemHeader*  gAllocMem  ;

extern struct sMemHeader*  gFreeMem  ;

extern int gComeDebugLib;

extern int gNumAlloc;

extern int gNumFree;

extern _Bool gComeDebug;
extern _Bool gComeUniq;
extern _Bool gComeC;
extern _Bool gComePthread;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gComeBareMetal;
extern _Bool gComeCPlusPlus;
extern _Bool gComelang;
extern _Bool gComeSafe;
extern _Bool gPortableC;
extern _Bool gComeLowMemory;
// source head

// header function
int renameat(int , const char* , int , const char* );
int renamex_np(const char* , const char* , unsigned int );
int renameatx_np(int , const char* , int , const char* , unsigned int );
int printf(const char* restrict , ...) __attribute__((__format__ (__printf__, 1, 2)));
void clearerr(struct __sFILE*    );
int fclose(struct __sFILE*    );
int feof(struct __sFILE*    );
int ferror(struct __sFILE*    );
int fflush(struct __sFILE*    );
int fgetc(struct __sFILE*    );
int fgetpos(struct __sFILE* restrict    , long long*    );
char* fgets(char* restrict , int __size, struct __sFILE*    );
struct __sFILE*  fopen(const char* restrict __filename, const char* restrict __mode) ;
int fprintf(struct __sFILE* restrict    , const char* restrict , ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int , struct __sFILE*    );
int fputs(const char* restrict , struct __sFILE* restrict    ) ;
unsigned long  int  fread(void* restrict __ptr, unsigned long  int  __size  , unsigned long  int  __nitems  , struct __sFILE* restrict  __stream  );
struct __sFILE*  freopen(const char* restrict , const char* restrict , struct __sFILE* restrict    ) ;
int fscanf(struct __sFILE* restrict    , const char* restrict , ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(struct __sFILE*    , long , int );
int fsetpos(struct __sFILE*    , const long long*    );
long ftell(struct __sFILE*    );
unsigned long  int  fwrite(const void* restrict __ptr, unsigned long  int  __size  , unsigned long  int  __nitems  , struct __sFILE* restrict  __stream  ) ;
int getc(struct __sFILE*    );
int getchar();
char* gets(char* );
void perror(const char* );
int putc(int , struct __sFILE*    );
int putchar(int );
int puts(const char* );
int remove(const char* );
int rename(const char* __old, const char* __new);
void rewind(struct __sFILE*    );
int scanf(const char* restrict , ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(struct __sFILE* restrict    , char* restrict );
int setvbuf(struct __sFILE* restrict    , char* restrict , int , unsigned long  int  __size  );
int sprintf(char* restrict , const char* restrict , ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int sscanf(const char* restrict , const char* restrict , ...) __attribute__((__format__ (__scanf__, 2, 3)));
struct __sFILE*  tmpfile();
char* tmpnam(char* );
int ungetc(int , struct __sFILE*    );
int vfprintf(struct __sFILE* restrict    , const char* restrict , __darwin_va_list    ) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char* restrict , __darwin_va_list    ) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char* restrict , const char* restrict , __darwin_va_list    ) __attribute__((__format__ (__printf__, 2, 0))) ;
char* ctermid(char* );
struct __sFILE*  fdopen(int , const char* ) ;
int fileno(struct __sFILE*    );
int pclose(struct __sFILE*    );
struct __sFILE*  popen(const char* , const char* )  ;
int __srget(struct __sFILE*    );
int __svfscanf(struct __sFILE*    , const char* , __darwin_va_list    ) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int , struct __sFILE*    );
void flockfile(struct __sFILE*    );
int ftrylockfile(struct __sFILE*    );
void funlockfile(struct __sFILE*    );
int getc_unlocked(struct __sFILE*    );
int getchar_unlocked();
int putc_unlocked(int , struct __sFILE*    );
int putchar_unlocked(int );
char* tempnam(const char* __dir, const char* __prefix) ;
int fseeko(struct __sFILE*  __stream  , long long  __offset  , int __whence);
long long  ftello(struct __sFILE*  __stream  );
int snprintf(char* restrict __str, unsigned long  int  __size  , const char* restrict __format, ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(struct __sFILE* restrict  __stream  , const char* restrict __format, __darwin_va_list    ) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char* restrict __format, __darwin_va_list    ) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char* restrict __str, unsigned long  int  __size  , const char* restrict __format, __darwin_va_list    ) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char* restrict __str, const char* restrict __format, __darwin_va_list    ) __attribute__((__format__ (__scanf__, 2, 0)));
int dprintf(int , const char* restrict , ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int vdprintf(int , const char* restrict , __darwin_va_list    ) __attribute__((__format__ (__printf__, 2, 0))) ;
long  getdelim(char** restrict __linep, unsigned long  int* restrict  __linecapp  , int __delimiter, struct __sFILE* restrict  __stream  );
long  getline(char** restrict __linep, unsigned long  int* restrict  __linecapp  , struct __sFILE* restrict  __stream  );
struct __sFILE*  fmemopen(void* restrict __buf, unsigned long  int  __size  , const char* restrict __mode);
struct __sFILE*  open_memstream(char** __bufp, unsigned long  int*  __sizep  );
int asprintf(char** restrict , const char* restrict , ...) __attribute__((__format__ (__printf__, 2, 3)));
char* ctermid_r(char* );
char* fgetln(struct __sFILE*    , unsigned long  int*  __len  );
const char* fmtcheck(const char* , const char* ) __attribute__((format_arg(2)));
int fpurge(struct __sFILE*    );
void setbuffer(struct __sFILE*    , char* , int __size);
int setlinebuf(struct __sFILE*    );
int vasprintf(char** restrict , const char* restrict , __darwin_va_list    ) __attribute__((__format__ (__printf__, 2, 0)));
struct __sFILE*  funopen(const void* , int (*anonymous_lambda_var_nameZ1)(void*,char*,int), int (*anonymous_lambda_var_nameZ2)(void*,const char*,int), long long  (*anonymous_lambda_var_nameZ3)(void*,long long ,int), int (*anonymous_lambda_var_nameZ4)(void*));
int __snprintf_chk(char* restrict , unsigned long  int  __maxlen  , int , unsigned long  int    , const char* restrict , ...);
int __vsnprintf_chk(char* restrict , unsigned long  int  __maxlen  , int , unsigned long  int    , const char* restrict , __darwin_va_list    );
int __sprintf_chk(char* restrict , int , unsigned long  int    , const char* restrict , ...);
int __vsprintf_chk(char* restrict , int , unsigned long  int    , const char* restrict , __darwin_va_list    );
void (*signal(int _function_pointer_result_var_name_a1, void (*_function_pointer_result_var_name_a2)(int)))(int);
int getpriority(int , unsigned int    );
int getiopolicy_np(int , int );
int getrlimit(int , struct rlimit*    ) ;
int getrusage(int , struct rusage*    );
int setpriority(int , unsigned int    , int );
int setiopolicy_np(int , int , int );
int setrlimit(int , const struct rlimit*    ) ;
int  wait(int* ) ;
int  waitpid(int    , int* , int ) ;
int waitid(enum anonymous_typeY1    , unsigned int    , struct __siginfo*    , int ) ;
int  wait3(int* , int , struct rusage*    );
int  wait4(int    , int* , int , struct rusage*    );
void* alloca(unsigned long  int  __size  );
void* malloc_type_malloc(unsigned long  int  size  , unsigned long  long  type_id  );
void* malloc_type_calloc(unsigned long  int  count  , unsigned long  int  size  , unsigned long  long  type_id  );
void malloc_type_free(void* ptr, unsigned long  long  type_id  );
void* malloc_type_realloc(void* ptr, unsigned long  int  size  , unsigned long  long  type_id  );
void* malloc_type_valloc(unsigned long  int  size  , unsigned long  long  type_id  );
void* malloc_type_aligned_alloc(unsigned long  int  alignment  , unsigned long  int  size  , unsigned long  long  type_id  );
int malloc_type_posix_memalign(void** memptr, unsigned long  int  alignment  , unsigned long  int  size  , unsigned long  long  type_id  );
void* malloc_type_zone_malloc(struct _malloc_zone_t*  zone  , unsigned long  int  size  , unsigned long  long  type_id  );
void* malloc_type_zone_calloc(struct _malloc_zone_t*  zone  , unsigned long  int  count  , unsigned long  int  size  , unsigned long  long  type_id  );
void malloc_type_zone_free(struct _malloc_zone_t*  zone  , void* ptr, unsigned long  long  type_id  );
void* malloc_type_zone_realloc(struct _malloc_zone_t*  zone  , void* ptr, unsigned long  int  size  , unsigned long  long  type_id  );
void* malloc_type_zone_valloc(struct _malloc_zone_t*  zone  , unsigned long  int  size  , unsigned long  long  type_id  );
void* malloc_type_zone_memalign(struct _malloc_zone_t*  zone  , unsigned long  int  alignment  , unsigned long  int  size  , unsigned long  long  type_id  );
void* malloc(unsigned long  int  __size  );
void* calloc(unsigned long  int  __count  , unsigned long  int  __size  );
void free(void* );
void* realloc(void* __ptr, unsigned long  int  __size  );
void* reallocf(void* __ptr, unsigned long  int  __size  );
void* valloc(unsigned long  int  __size  );
void* aligned_alloc(unsigned long  int  __alignment  , unsigned long  int  __size  );
int posix_memalign(void** __memptr, unsigned long  int  __alignment  , unsigned long  int  __size  );
void abort() __attribute__((__noreturn__));
int abs(int ) __attribute__((__const__));
int atexit(void (*anonymous_lambda_var_nameZ6)());
int at_quick_exit(void (*anonymous_lambda_var_nameZ7)());
double atof(const char* );
int atoi(const char* );
long atol(const char* );
long long atoll(const char* );
void* bsearch(const void* __key, const void* __base, unsigned long  int  __nel  , unsigned long  int  __width  , int (*__compar)(const void*,const void*));
struct anonymous_typeX8  div(int , int ) __attribute__((__const__));
void exit(int ) __attribute__((__noreturn__));
char* getenv(const char* );
long labs(long ) __attribute__((__const__));
struct anonymous_typeX9  ldiv(long , long ) __attribute__((__const__));
long long llabs(long  long );
struct anonymous_typeX10  lldiv(long  long , long  long );
int mblen(const char* __s, unsigned long  int  __n  );
unsigned long  int  mbstowcs(int* restrict    , const char* restrict , unsigned long  int  __n  );
int mbtowc(int* restrict    , const char* restrict , unsigned long  int  __n  );
void qsort(void* __base, unsigned long  int  __nel  , unsigned long  int  __width  , int (*__compar)(const void*,const void*));
void quick_exit(int ) __attribute__((__noreturn__));
int rand();
void srand(unsigned int );
double strtod(const char* , char** ) ;
float strtof(const char* , char** ) ;
long strtol(const char* __str, char** __endptr, int __base);
long  double strtold(const char* , char** );
long long strtoll(const char* __str, char** __endptr, int __base);
unsigned long  int strtoul(const char* __str, char** __endptr, int __base);
unsigned long  long strtoull(const char* __str, char** __endptr, int __base);
int system(const char* ) ;
unsigned long  int  wcstombs(char* restrict , const int* restrict    , unsigned long  int  __n  );
int wctomb(char* , int    );
void _Exit(int ) __attribute__((__noreturn__));
long a64l(const char* );
double drand48();
char* ecvt(double , int , int* restrict , int* restrict );
double erand48(unsigned short int [3]);
char* fcvt(double , int , int* restrict , int* restrict );
char* gcvt(double , int , char* );
int getsubopt(char** , char** const , char** );
int grantpt(int );
char* initstate(unsigned int , char* , unsigned long  int  __size  );
long jrand48(unsigned short int [3]);
char* l64a(long );
void lcong48(unsigned short int [7]);
long lrand48();
char* mktemp(char* );
int mkstemp(char* );
long mrand48();
long nrand48(unsigned short int [3]);
int posix_openpt(int );
char* ptsname(int );
int ptsname_r(int fildes, char* buffer, unsigned long  int  buflen  );
int putenv(char* ) ;
long random();
int rand_r(unsigned int* );
char* realpath(const char* restrict , char* restrict ) ;
unsigned short int* seed48(unsigned short int [3]);
int setenv(const char* __name, const char* __value, int __overwrite) ;
void setkey(const char* ) ;
char* setstate(const char* );
void srand48(long );
void srandom(unsigned int );
int unlockpt(int );
int unsetenv(const char* ) ;
unsigned int  arc4random();
void arc4random_addrandom(unsigned char* , int __datlen);
void arc4random_buf(void* __buf, unsigned long  int  __nbytes  );
void arc4random_stir();
unsigned int  arc4random_uniform(unsigned int  __upper_bound  );
char* cgetcap(char* , const char* , int );
int cgetclose();
int cgetent(char** , char** , const char* );
int cgetfirst(char** , char** );
int cgetmatch(const char* , const char* );
int cgetnext(char** , char** );
int cgetnum(char* , const char* , long* );
int cgetset(const char* );
int cgetstr(char* , const char* , char** );
int cgetustr(char* , const char* , char** );
int daemon(int , int )    ;
char* devname(int    , unsigned short int    );
char* devname_r(int    , unsigned short int    , char* buf, int len);
char* getbsize(int* , long* );
int getloadavg(double [], int __nelem);
const char* getprogname();
void setprogname(const char* );
int heapsort(void* __base, unsigned long  int  __nel  , unsigned long  int  __width  , int (*__compar)(const void*,const void*));
int mergesort(void* __base, unsigned long  int  __nel  , unsigned long  int  __width  , int (*__compar)(const void*,const void*));
void psort(void* __base, unsigned long  int  __nel  , unsigned long  int  __width  , int (*__compar)(const void*,const void*));
void psort_r(void* __base, unsigned long  int  __nel  , unsigned long  int  __width  , void* , int (*__compar)(void*,const void*,const void*));
void qsort_r(void* __base, unsigned long  int  __nel  , unsigned long  int  __width  , void* , int (*__compar)(void*,const void*,const void*));
int radixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
int rpmatch(const char* );
int sradixsort(const unsigned char** __base, int __nel, const unsigned char* __table, unsigned int __endbyte);
void sranddev();
void srandomdev();
long long strtonum(const char* __numstr, long long __minval, long long __maxval, const char** __errstrp);
long long strtoq(const char* __str, char** __endptr, int __base);
unsigned long  long strtouq(const char* __str, char** __endptr, int __base);
void* memchr(const void* __s, int __c, unsigned long  int  __n  );
int memcmp(const void* __s1, const void* __s2, unsigned long  int  __n  );
void* memcpy(void* __dst, const void* __src, unsigned long  int  __n  );
void* memmove(void* __dst, const void* __src, unsigned long  int  __len  );
void* memset(void* __b, int __c, unsigned long  int  __len  );
char* strcat(char* __s1, const char* __s2);
char* strchr(const char* __s, int __c);
int strcmp(const char* __s1, const char* __s2);
int strcoll(const char* __s1, const char* __s2);
char* strcpy(char* __dst, const char* __src);
unsigned long  int  strcspn(const char* __s, const char* __charset);
char* strerror(int __errnum) ;
unsigned long  int  strlen(const char* __s);
char* strncat(char* __s1, const char* __s2, unsigned long  int  __n  );
int strncmp(const char* __s1, const char* __s2, unsigned long  int  __n  );
char* strncpy(char* __dst, const char* __src, unsigned long  int  __n  );
char* strpbrk(const char* __s, const char* __charset);
char* strrchr(const char* __s, int __c);
unsigned long  int  strspn(const char* __s, const char* __charset);
char* strstr(const char* __big, const char* __little);
char* strtok(char* __str, const char* __sep);
unsigned long  int  strxfrm(char* __s1, const char* __s2, unsigned long  int  __n  );
char* strtok_r(char* __str, const char* __sep, char** __lasts);
int strerror_r(int __errnum, char* __strerrbuf, unsigned long  int  __buflen  );
char* strdup(const char* __s1);
void* memccpy(void* __dst, const void* __src, int __c, unsigned long  int  __n  );
char* stpcpy(char* __dst, const char* __src);
char* stpncpy(char* __dst, const char* __src, unsigned long  int  __n  );
char* strndup(const char* __s1, unsigned long  int  __n  );
unsigned long  int  strnlen(const char* __s1, unsigned long  int  __n  );
char* strsignal(int __sig);
int  memset_s(void* __s, unsigned long  int  __smax  , int __c, unsigned long  int  __n  );
void* memmem(const void* __big, unsigned long  int  __big_len  , const void* __little, unsigned long  int  __little_len  );
void memset_pattern4(void* __b, const void* __pattern4, unsigned long  int  __len  );
void memset_pattern8(void* __b, const void* __pattern8, unsigned long  int  __len  );
void memset_pattern16(void* __b, const void* __pattern16, unsigned long  int  __len  );
char* strcasestr(const char* __big, const char* __little);
char* strchrnul(const char* __s, int __c);
char* strnstr(const char* __big, const char* __little, unsigned long  int  __len  );
unsigned long  int  strlcat(char* __dst, const char* __source, unsigned long  int  __size  );
unsigned long  int  strlcpy(char* __dst, const char* __source, unsigned long  int  __size  );
void strmode(int __mode, char* __bp);
char* strsep(char** __stringp, const char* __delim);
void swab(const void* restrict , void* restrict , long  __len  );
int timingsafe_bcmp(const void* __b1, const void* __b2, unsigned long  int  __len  );
int strsignal_r(int __sig, char* __strsignalbuf, unsigned long  int  __buflen  );
int ffs(int );
int strcasecmp(const char* , const char* );
int strncasecmp(const char* , const char* , unsigned long  int    );
int ffsl(long );
int ffsll(long  long );
int fls(int );
int flsl(long );
int flsll(long  long );
struct _xlocale*  duplocale(struct _xlocale*    );
int freelocale(struct _xlocale*    );
struct _xlocale*  newlocale(int , const char* , struct _xlocale*    );
struct _xlocale*  uselocale(struct _xlocale*    );
struct lconv*  localeconv();
char* setlocale(int , const char* );
void __assert_rtn(const char* , const char* , int , const char* ) __attribute__((__noreturn__))  ;
char* asctime(const struct tm*    );
unsigned long  int  clock() ;
char* ctime(const long*    );
double difftime(long    , long    );
struct tm*  getdate(const char* );
struct tm*  gmtime(const long*    );
struct tm*  localtime(const long*    );
long  mktime(struct tm*    ) ;
unsigned long  int  strftime(char* restrict , unsigned long  int  __maxsize  , const char* restrict , const struct tm* restrict    ) ;
char* strptime(const char* restrict , const char* restrict , struct tm* restrict    ) ;
long  time(long*    );
void tzset();
char* asctime_r(const struct tm* restrict    , char* restrict );
char* ctime_r(const long*    , char* );
struct tm*  gmtime_r(const long* restrict    , struct tm* restrict    );
struct tm*  localtime_r(const long* restrict    , struct tm* restrict    );
long  posix2time(long    );
void tzsetwall();
long  time2posix(long    );
long  timelocal(struct tm* const    );
long  timegm(struct tm* const    );
int nanosleep(const struct timespec*  __rqtp  , struct timespec*  __rmtp  ) ;
int clock_getres(enum anonymous_typeY10  __clock_id  , struct timespec*  __res  );
int clock_gettime(enum anonymous_typeY10  __clock_id  , struct timespec*  __tp  );
unsigned long  long  clock_gettime_nsec_np(enum anonymous_typeY10  __clock_id  );
int clock_settime(enum anonymous_typeY10  __clock_id  , const struct timespec*  __tp  );
int timespec_get(struct timespec*  ts  , int base);
unsigned long  int ___runetype(int    );
int  ___tolower(int    );
int  ___toupper(int    );
int __maskrune(int    , unsigned long  int );
int  __toupper(int    );
int  __tolower(int    );
unsigned int  wctype(const char* );
unsigned int  btowc(int );
unsigned int  fgetwc(struct __sFILE*    );
int*  fgetws(int* restrict    , int __n, struct __sFILE* restrict    );
unsigned int  fputwc(int    , struct __sFILE*    );
int fputws(const int* restrict    , struct __sFILE* restrict    );
int fwide(struct __sFILE*    , int );
int fwprintf(struct __sFILE* restrict    , const int* restrict    , ...);
int fwscanf(struct __sFILE* restrict    , const int* restrict    , ...);
unsigned int  getwc(struct __sFILE*    );
unsigned int  getwchar();
unsigned long  int  mbrlen(const char* restrict , unsigned long  int  __n  , union anonymous_typeZ1* restrict    );
unsigned long  int  mbrtowc(int* restrict    , const char* restrict , unsigned long  int  __n  , union anonymous_typeZ1* restrict    );
int mbsinit(const union anonymous_typeZ1*    );
unsigned long  int  mbsrtowcs(int* restrict    , const char** restrict , unsigned long  int  __len  , union anonymous_typeZ1* restrict    );
unsigned int  putwc(int    , struct __sFILE*    );
unsigned int  putwchar(int    );
int swprintf(int* restrict    , unsigned long  int  __maxlen  , const int* restrict    , ...);
int swscanf(const int* restrict    , const int* restrict    , ...);
unsigned int  ungetwc(unsigned int    , struct __sFILE*    );
int vfwprintf(struct __sFILE* restrict    , const int* restrict    , __darwin_va_list    );
int vswprintf(int* restrict    , unsigned long  int  __maxlen  , const int* restrict    , __darwin_va_list    );
int vwprintf(const int* restrict    , __darwin_va_list    );
unsigned long  int  wcrtomb(char* restrict , int    , union anonymous_typeZ1* restrict    );
int*  wcscat(int* restrict    , const int* restrict    );
int*  wcschr(const int*    , int    );
int wcscmp(const int*    , const int*    );
int wcscoll(const int*    , const int*    );
int*  wcscpy(int* restrict    , const int* restrict    );
unsigned long  int  wcscspn(const int*    , const int*    );
unsigned long  int  wcsftime(int* restrict    , unsigned long  int  __maxlen  , const int* restrict    , const struct tm* restrict    ) ;
unsigned long  int  wcslen(const int*    );
int*  wcsncat(int* restrict    , const int* restrict    , unsigned long  int  __n  );
int wcsncmp(const int*    , const int*    , unsigned long  int    );
int*  wcsncpy(int* restrict    , const int* restrict    , unsigned long  int  __n  );
int*  wcspbrk(const int*    , const int*    );
int*  wcsrchr(const int*    , int    );
unsigned long  int  wcsrtombs(char* restrict , const int** restrict    , unsigned long  int  __len  , union anonymous_typeZ1* restrict    );
unsigned long  int  wcsspn(const int*    , const int*    );
int*  wcsstr(const int* restrict    , const int* restrict    );
unsigned long  int  wcsxfrm(int* restrict    , const int* restrict    , unsigned long  int  __n  );
int wctob(unsigned int    );
double wcstod(const int* restrict    , int** restrict    );
int*  wcstok(int* restrict    , const int* restrict    , int** restrict    );
long wcstol(const int* restrict    , int** restrict    , int );
unsigned long  int wcstoul(const int* restrict    , int** restrict    , int );
int*  wmemchr(const int*    , int    , unsigned long  int  __n  );
int wmemcmp(const int*    , const int*    , unsigned long  int  __n  );
int*  wmemcpy(int* restrict    , const int* restrict    , unsigned long  int  __n  );
int*  wmemmove(int*    , const int*    , unsigned long  int  __n  );
int*  wmemset(int*    , int    , unsigned long  int  __n  );
int wprintf(const int* restrict    , ...);
int wscanf(const int* restrict    , ...);
int wcswidth(const int*    , unsigned long  int  __n  );
int wcwidth(int    );
int vfwscanf(struct __sFILE* restrict    , const int* restrict    , __darwin_va_list    );
int vswscanf(const int* restrict    , const int* restrict    , __darwin_va_list    );
int vwscanf(const int* restrict    , __darwin_va_list    );
float wcstof(const int* restrict    , int** restrict    );
long  double wcstold(const int* restrict    , int** restrict    );
long long wcstoll(const int* restrict    , int** restrict    , int );
unsigned long  long wcstoull(const int* restrict    , int** restrict    , int );
unsigned long  int  mbsnrtowcs(int* restrict    , const char** restrict , unsigned long  int    , unsigned long  int  __len  , union anonymous_typeZ1* restrict    );
int*  wcpcpy(int* restrict    , const int* restrict    );
int*  wcpncpy(int* restrict    , const int* restrict    , unsigned long  int  __n  );
int*  wcsdup(const int*    );
int wcscasecmp(const int*    , const int*    );
int wcsncasecmp(const int*    , const int*    , unsigned long  int  n  );
unsigned long  int  wcsnlen(const int*    , unsigned long  int  __n  );
unsigned long  int  wcsnrtombs(char* restrict , const int** restrict    , unsigned long  int    , unsigned long  int  __len  , union anonymous_typeZ1* restrict    );
struct __sFILE*  open_wmemstream(int**  __bufp  , unsigned long  int*  __sizep  );
int*  fgetwln(struct __sFILE* restrict    , unsigned long  int*  __len  );
unsigned long  int  wcslcat(int*    , const int*    , unsigned long  int  __len  );
unsigned long  int  wcslcpy(int*    , const int*    , unsigned long  int  __len  );
void stackframe();
void stackframe2(void* mem);
_Bool die(const char* msg, char* sname, int sline);
void come_heap_final();
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
struct buffer*  FILE_read(struct __sFILE*  f  );
int FILE_write(struct __sFILE*  f  , const char* str);
int FILE_fclose(struct __sFILE*  f  );
struct __sFILE*  FILE_fprintf(struct __sFILE*  f  , const char* msg, ...);
int charp_write(const char* self, const char* file_name, _Bool append);
struct buffer*  charp_read(const char* file_name);
struct list$1char$ph* FILE_readlines(struct __sFILE*  f  );
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
struct sClass* sClass_initialize(struct sClass* self, char*  name  , _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, _Bool typename, struct sInfo*  info  , _Bool iter_);
struct sType* sType_initialize(struct sType* self, char*  name  , _Bool heap, struct sInfo*  info  , _Bool unsigned_, int pointer_num_);
struct sFun* sFun_initialize(struct sFun* self, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock*  block  , _Bool static_, struct sInfo*  info  , _Bool inline_, _Bool uniq_, char*  attribute  , char*  fun_attribute  , _Bool const_fun, char*  text_block  , char*  generics_sname  , int generics_sline, _Bool immutable_, char*  asm_fun  );
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType*  impl_type  , struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char*  name  , struct sType*  result_type  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char*  block  , struct sInfo*  info  , char*  generics_sname  , int generics_sline, _Bool const_fun);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
struct sModule* sModule_initialize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable*  parent  );
void sVarTable_finalize(struct sVarTable* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo*  info  );
int sNodeBase_sline(struct sNodeBase* self, struct sInfo*  info  );
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo*  info  );
_Bool sNodeBase_terminated(struct sNodeBase* self);
char*  sNodeBase_sname(struct sNodeBase* self, struct sInfo*  info  );
struct sNode* sNodeBase_left_value(struct sNodeBase* self);
struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo*  info  );
int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo*  info  );
char*  sCurrentNode_sname(struct sCurrentNode* self, struct sInfo*  info  );
char*  sCurrentNode_kind(struct sCurrentNode* self);
_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo*  info  );
struct sNode* parse_iterator_it(struct sInfo*  info  );
_Bool transpile_conditional_with_free_right_object_value(struct sNode* node, struct sInfo*  info  );
int err_msg(struct sInfo*  info  , const char* msg, ...);
int warning_msg(struct sInfo*  info  , const char* msg, ...);
int expected_next_character(char c, struct sInfo*  info  );
_Bool node_compile(struct sNode* node, struct sInfo*  info  );
_Bool node_conditional_compile(struct sNode* node, struct sInfo*  info  );
int come_main(int argc, char** argv);
char*  make_type_name_string(struct sType*  type  , struct sInfo*  info  , _Bool no_static, _Bool cast_type, _Bool typedef_extended, _Bool nullchecker);
char*  make_come_type_name_string(struct sType*  type  , struct sInfo*  info  );
char*  make_come_define_var(struct sType*  type  , char* name, struct sInfo*  info  );
struct sType*  get_no_solved_type(struct sType*  type  );
struct sType*  get_no_solved_type2(struct sType*  type  );
char*  header_function(struct sFun*  fun  , struct sInfo*  info  );
_Bool output_source_file(struct sInfo*  info  );
char*  create_generics_name(struct sType*  generics_type  , struct sInfo*  info  );
void add_last_code_to_source(struct sInfo*  info  );
void add_come_code_at_function_head(struct sInfo*  info  , const char* code, ...);
void add_come_code_at_come_header(struct sInfo*  info  , char*  id  , const char* msg, ...);
void add_come_code_no_indent(struct sInfo*  info  , const char* msg, ...);
void add_come_code_at_come_struct_header(struct sInfo*  info  , char*  id  , const char* msg, ...);
void add_come_code_at_function_head2(struct sInfo*  info  , const char* code, ...);
void add_come_code(struct sInfo*  info  , const char* msg, ...);
void add_come_last_code(struct sInfo*  info  , const char* msg, ...);
void add_come_last_code2(struct sInfo*  info  , const char* msg, ...);
void dec_stack_ptr(int value, struct sInfo*  info  );
struct CVALUE*  get_value_from_stack(int offset, struct sInfo*  info  );
char*  make_define_var(struct sType*  type  , char* name, struct sInfo*  info  , _Bool no_static, _Bool in_typedef);
char*  make_var_name(struct sType*  type  , char* name, struct sInfo*  info  , _Bool no_static);
void transpiler_clear_last_code(struct sInfo*  info  );
_Bool output_header_file(struct sInfo*  info  );
void on_drop_object(struct sType*  type  , char* obj, struct sInfo*  info  );
void on_load_object(struct sType*  type  , char* obj, struct sInfo*  info  );
struct sType*  solve_method_generics(struct sType*  type  , struct sInfo*  info  );
_Bool existance_free_right_value_objects(struct sInfo*  info  );
_Bool existance_free_objects_on_return(struct sBlock*  current_block  , struct sInfo*  info  , struct sVar*  ret_value  , _Bool top_block);
void std_move(struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  right_value  , struct sInfo*  info  );
_Bool create_equals_method(struct sType*  type  , struct sInfo*  info  );
_Bool create_operator_equals_method(struct sType*  type  , struct sInfo*  info  );
_Bool create_operator_not_equals_method(struct sType*  type  , struct sInfo*  info  );
_Bool require_explicit_method_in_low_memory_mode(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct sType*  solve_generics(struct sType*  type  , struct sType*  generics_type  , struct sInfo*  info  );
struct sVar*  get_variable_from_table(struct sVarTable*  table  , char* name);
void free_objects_on_return(struct sBlock*  current_block  , struct sInfo*  info  , struct sVar*  ret_value  , _Bool top_block, _Bool ret_value_is_field);
void free_objects_of_match_lv_tables(struct sInfo*  info  );
void free_objects_on_break(struct sInfo*  info  );
void free_object(struct sType*  type  , char* obj, _Bool no_decrement, _Bool no_free, struct sInfo*  info  , _Bool ret_value);
struct tuple2$2sType$phchar$ph* clone_object(struct sType*  type  , char* obj, struct sInfo*  info  );
void free_right_value_objects(struct sInfo*  info  );
void free_objects(struct sVarTable*  table  , struct sVar*  ret_value  , struct sInfo*  info  , _Bool ret_value_is_field);
void append_object_to_right_values(struct CVALUE*  come_value  , struct sType*  type  , struct sInfo*  info  , _Bool decrement_ref_count, struct sType*  obj_type  , char* obj_value, struct sVar*  obj_var  );
void remove_object_from_right_values(int right_value_num, struct sInfo*  info  );
void remove_value_from_right_value_objects(struct CVALUE*  come_value  , struct sInfo*  info  );
char*  increment_ref_count_object(struct sType*  type  , char* obj, struct sInfo*  info  );
void decrement_ref_count_object(struct sType*  type  , char* obj, struct sInfo*  info  , _Bool no_free);
void transpile_toplevel(_Bool block, struct sInfo*  info  );
struct sNode* reverse_node(struct sNode* value, struct sInfo*  info  );
struct sFun*  compile_uniq_function(struct sFun*  fun  , struct sInfo*  info  );
struct sNode* cast_node(struct sType*  type  , struct sNode* node, struct sInfo*  info  );
struct sNode* create_defference_node(struct sNode* value, _Bool quote, struct sInfo*  info  );
struct sNode* reffence_node(struct sNode* value, struct sInfo*  info  );
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char*  fun_name  , struct list$1sType$ph* method_generics_types, struct sInfo*  info  );
struct sNode* create_return_node(struct sNode* value, struct sInfo*  info  );
struct sNode* post_position_operator(struct sNode* node, struct sInfo*  info  );
_Bool create_method_generics_fun(char*  fun_name  , struct sGenericsFun*  generics_fun  , struct sInfo*  info  );
_Bool operator_overload_fun_self(struct sType*  type  , const char* fun_name, struct sNode* node, struct CVALUE*  left_value  , struct sInfo*  info  );
_Bool is_ref_or_optional_type_for_operator(struct sType*  type  , struct sInfo*  info  );
_Bool reject_ref_optional_unary_operator(const char* op_name, struct CVALUE*  value  , struct sInfo*  info  );
_Bool reject_ref_optional_binary_operator(const char* op_name, struct CVALUE*  left_value  , struct CVALUE*  right_value  , struct sInfo*  info  );
void caller_begin(struct sInfo*  info  );
void caller_end(struct sInfo*  info  );
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo*  info  );
void skip_paren(struct sInfo*  info  );
struct sNode* parse_normal_block(_Bool clang, _Bool unsafe_block, struct sInfo*  info  );
void cast_type(struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  );
_Bool check_assign_type(const char* msg, struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  come_value  , struct sInfo*  info  );
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo*  info  );
struct sNode* get_number(_Bool minus, struct sInfo*  info  );
struct sNode* get_oct_number(struct sInfo*  info  );
struct sNode* get_hex_number(_Bool minus, struct sInfo*  info  );
struct sNode* create_int_node(char*  value  , struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType*  type  , char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct tuple2$2sFun$pchar$ph* create_compare_automatically(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
char*  skip_block(struct sInfo*  info  , _Bool return_self_at_last);
_Bool parsecmp(const char* p2, struct sInfo*  info  );
char*  parse_word(_Bool digits, struct sInfo*  info  );
char*  backtrace_parse_word(struct sInfo*  info  );
void skip_spaces_and_lf(struct sInfo*  info  );
void skip_spaces_and_lf2(struct sInfo*  info  );
struct tuple2$2char$ph_Bool$* create_generics_fun(char*  fun_name  , struct sGenericsFun*  generics_fun  , struct sType*  generics_type  , struct sInfo*  info  );
struct sBlock*  parse_block(struct sInfo*  info  , _Bool return_self_at_last, _Bool in_function);
_Bool is_function_attribute_word(char* buf);
int transpile_block(struct sBlock*  block  , struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo*  info  , _Bool no_var_table, _Bool loop_block, _Bool if_result_value, _Bool iter_, _Bool loop_result_type);
void arrange_stack(struct sInfo*  info  , int top);
struct sNode* parse_function(struct sInfo*  info  );
struct sNode* parse_function_call(char* fun_name, struct sInfo*  info  , _Bool come_);
struct sNode* statment(struct sInfo*  info  );
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* expression_node_v1(struct sInfo*  info  );
struct sNode* expression_node_v99(struct sInfo*  info  );
struct sNode* expression_node_v98(struct sInfo*  info  );
struct sNode* expression_node_v97(struct sInfo*  info  );
int transpile(struct sInfo*  info  );
void parse_sharp_v5(struct sInfo*  info  );
char*  create_method_name(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer);
char*  create_method_name_original_obj_type(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer);
char*  create_non_method_name(struct sType*  obj_type  , _Bool no_pointer_name, const char* fun_name, struct sInfo*  info  , _Bool array_equal_pointer);
char*  create_method_name_using_class(struct sClass*  obj_class  , const char* fun_name, struct sInfo*  info  );
struct sNode* create_null_return_value(struct sInfo*  info  );
struct sNode* create_some(struct sNode* exp, struct sInfo*  info  );
struct sNode* create_str_node(char*  value  , int sline, struct sInfo*  info  );
struct sNode* create_buffer_node(struct buffer*  value  , unsigned long  int  size  , struct sInfo*  info  );
struct sNode* create_sstring_node(char*  value  , struct list$1sNode$ph* exps, int sline, struct sInfo*  info  );
struct sNode* create_char_node(int value, struct sInfo*  info  );
struct sNode* create_wchar_node(int  value  , _Bool quote, struct sInfo*  info  );
struct sNode* create_wstring_node(int*  value  , int sline, struct sInfo*  info  );
struct sNode* create_prefixed_char_node(int value, char*  prefix  , struct sInfo*  info  );
struct sNode* create_prefixed_string_node(char*  value  , char*  prefix  , int sline, struct sInfo*  info  );
struct sNode* create_list_node(struct list$1sNode$ph* list_elements, struct sInfo*  info  );
struct sNode* create_vector_node(struct list$1sNode$ph* list_elements, struct sInfo*  info  );
struct sNode* create_tuple_node(struct list$1tuple2$2char$phsNode$ph$ph* tuple_elements, struct sInfo*  info  );
struct sNode* create_map_node(struct list$1sNode$ph* map_key_elements, struct list$1sNode$ph* map_elements, struct sInfo*  info  );
struct sNode* expression_node_v96(struct sInfo*  info  );
struct sNode* parse_tuple(struct sInfo*  info  , _Bool named_tuple);
struct sNode* parse_some(struct sInfo*  info  );
struct sNode* parse_none(struct sInfo*  info  );
_Bool is_inner_calling(struct sNode* node, struct sInfo*  info  );
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo*  info  );
struct sNode* expression_node_v95(struct sInfo*  info  );
struct sNode* store_var(char*  name  , struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType*  type  , _Bool alloc, struct sNode* right_value, struct sInfo*  info  , _Bool iter_);
struct sNode* create_load_var(const char* var_name, struct sInfo*  info  );
struct sNode* parse_array_initializer(struct sInfo*  info  );
struct sNode* parse_struct_initializer(struct sInfo*  info  );
struct sNode* parse_global_variable(struct sInfo*  info  );
struct sNode* load_var(char*  name  , struct sInfo*  info  );
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo*  info  );
void add_variable_to_table(char* name, struct sType*  type  , struct sInfo*  info  , _Bool function_param, _Bool comma, _Bool to_function_table);
void add_variable_to_global_table(char* name, struct sType*  type  , struct sInfo*  info  );
void add_variable_to_global_table_with_int_value(char* name, struct sType*  type  , char* c_value, struct sInfo*  info  );
struct sNode* parse_match(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* parse_catch(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo*  info  );
struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* create_comma_exp(struct sNode* node, struct sNode* node2, struct sInfo*  info  );
struct sNode* create_less(struct sNode* node, struct sNode* right, struct sInfo*  info  );
struct sNode* create_null_node(struct sInfo*  info  );
struct sNode* conditional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo*  info  );
_Bool operator_overload_fun(struct sType*  type  , const char* fun_name, struct sNode* left_node, struct sNode* right_node, struct CVALUE*  left_value  , struct CVALUE*  right_value  , _Bool break_guard, struct sInfo*  info  );
struct sNode* expression_v13(struct sInfo*  info  , _Bool type_name_exp);
struct sNode* post_op_v13(struct sNode* node, struct sInfo*  info  );
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo*  info  );
void output_aggregate_field(struct sType*  type  , char*  tag_name  , struct buffer*  buf  , _Bool* existance_generics, char*  field_name  , int indent, struct sInfo*  info  , _Bool* named_child);
struct sNode* create_nothing_node(struct sInfo*  info  );
_Bool is_contained_method_generics_types(struct sType*  type  , struct sInfo*  info  );
_Bool is_contained_generics_types(struct sType*  type  , struct sInfo*  info  );
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* parse_struct(char*  type_name  , char*  struct_attribute  , struct sInfo*  info  , _Bool anonymous);
char*  get_none_generics_name(char* class_name);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo*  info  );
_Bool output_generics_struct(struct sType*  type  , struct sType*  generics_type  , struct sInfo*  info  );
void output_struct(struct sClass*  klass  , char*  pragma  , struct sInfo*  info  , _Bool anonymous);
struct sNode* string_node_v15(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* parse_union(char*  type_name  , char*  union_attribute  , struct sInfo*  info  , _Bool anonymous);
struct sNode* top_level_v97(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* string_node_v16(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* parse_enum(char*  type_name  , char*  attribute  , struct sInfo*  info  );
struct sNode* top_level_v96(char* buf, char* head, int head_sline, struct sInfo*  info  );
_Bool add_typedef(char*  type_name  , struct sType*  type  , struct sInfo*  info  );
struct sNode* top_level_v95(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* string_node_v17(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* create_nullable_node(struct sNode* left, struct sInfo*  info  );
struct sNode* load_field(struct sNode* left, char*  name  , struct sInfo*  info  );
struct sNode* store_field(struct sNode* left, struct sNode* right, char*  name  , struct sInfo*  info  );
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo*  info  );
struct sNode* parse_method_call_v18(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_, _Bool iter_, struct sNode* obj2);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo*  info  );
struct tuple3$3char$phsFun$psGenericsFun$p* get_method(const char* fun_name, struct sType*  obj_type  , struct sInfo*  info  , _Bool no_make_generics_function);
struct sNode* create_method_call(const char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
struct sNode* create_funcall(const char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer*  method_block  , int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo*  info  , _Bool arrow_);
struct sNode* create_guard_break_method_call(struct sNode* expression_node, struct sInfo*  info  );
_Bool compile_method_block(struct buffer*  method_block  , struct list$1CVALUE$ph* come_params, struct sFun*  fun  , char* fun_name, int method_block_sline, struct sInfo*  info  , _Bool no_create_current_stack);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType*  type  , char*  fun_name  , struct sInfo*  info  , _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_);
struct sNode* parse_iter_call_v20(struct sNode* obj, char*  fun_name  , struct sInfo*  info  , _Bool arrow_, struct sNode* parent_call_node);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* create_implements(struct sNode* node, struct sType*  inf_type  , struct sInfo*  info  );
struct sNode* create_new_node(struct sType*  type  , struct list$1tuple2$2char$phsNode$ph$ph* initializer, struct sNode* initializer_num, struct sInfo*  info  );
struct sNode* create_defer_node(struct sBlock*  block  , struct sInfo*  info  );
struct sNode* create_true_object(struct sInfo*  info  );
struct sNode* create_false_object(struct sInfo*  info  );
struct sNode* create_delete_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_borrow_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_clone_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_dupe_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_dummy_heap_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_gc_inc_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_gc_dec_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_gc_dec_nofree_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_is_heap_node(struct sType*  type  , struct sInfo*  info  );
struct sNode* create_is_pointer_node(struct sType*  type  , struct sInfo*  info  );
struct sNode* create_optional_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_ref_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_span_node(struct sNode* node, struct sInfo*  info  );
struct sNode* create_generic_node(struct sNode* exp, struct list$1sType$ph* types, struct list$1sNode$ph* exps, struct sNode* default_exp, struct sInfo*  info  );
struct sNode* create_offsetof_node(struct sType*  type  , char*  name  , struct sInfo*  info  );
struct sNode* create_sizeof_node(struct sType*  type  , struct sInfo*  info  );
struct sNode* create_sizeof_exp_node(struct sNode* exp, struct sInfo*  info  );
struct sNode* create_dynamic_typeof_node(struct sNode* exp, struct sInfo*  info  );
struct sNode* create_dynamic_sizeof_exp_node(struct sNode* exp, struct sInfo*  info  );
struct sNode* create_alignof_node(struct sType*  type  , struct sInfo*  info  );
struct sNode* create_alignof_exp_node(struct sNode* exp, struct sInfo*  info  );
struct sNode* create_alignof_node2(struct sType*  type  , struct sInfo*  info  );
struct sNode* create_alignof_exp_node2(struct sNode* exp, struct sInfo*  info  );
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo*  info  );
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo*  info  );
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo*  info  );
_Bool sNothingNode_terminated(struct sNothingNode* self);
char*  sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo*  info  );
void preprocess_file_neo_c(const char* path, struct __sFILE*  out  );
void init_ccpp(int argc, char** argv);
void incldue_file_neo_c(char* path, int quoted, struct __sFILE*  out  );
const char* get_macro(const char* macro_name);
void macro_define(const char* def);
void macro_undef(const char* name);
const char* call_func_macro(const char* macro_name, const char* args, const char* file, long line);
void set_macro(const char* name, const char* value);
struct MacroSnapshot*  macro_snapshot_create();
char* macro_snapshot_diff_defines(struct MacroSnapshot*  snap  );
void macro_snapshot_free(struct MacroSnapshot*  snap  );
void init_global_opts();
struct sNode* create_fun_node(struct sFun*  fun  , struct sInfo*  info  );
struct sNode* comelang_top_level(char* buf, char* head, int head_sline, struct sInfo*  info  );
struct sNode* parse_come_gval(struct sInfo*  info  );
struct sNode* parse_come_gvar(struct sInfo*  info  );
struct sNode* parse_come_function(struct sInfo*  info  );
struct sBlock*  parse_come_block(struct sInfo*  info  );
struct sNode* create_null_checker(struct sNode* node, struct sInfo*  info  );
struct sNode* create_heap_checker(struct sNode* node, struct sInfo*  info  );
struct sNullChecker* sNullChecker_initialize(struct sNullChecker* self, struct sNode* value, struct sInfo*  info  );
char*  sNullChecker_kind(struct sNullChecker* self);
_Bool sNullChecker_compile(struct sNullChecker* self, struct sInfo*  info  );
struct sHeapChecker* sHeapChecker_initialize(struct sHeapChecker* self, struct sNode* value, struct sInfo*  info  );
char*  sHeapChecker_kind(struct sHeapChecker* self);
_Bool sHeapChecker_compile(struct sHeapChecker* self, struct sInfo*  info  );
struct sNode* create_new_object(struct sType*  type  , struct sInfo*  info  );
struct sNode* parse_vector(struct sInfo*  info  );
_Bool is_portable_libc_symbol(const char* sym);
struct sNode* add_node(struct sNode* node, struct sNode* right, struct sInfo*  info  );
_Bool is_arithmetic_type(struct sType*  type  , struct sInfo*  info  );
_Bool is_integer_type(struct sType*  type  , struct sInfo*  info  );
_Bool is_null_pointer_constant(struct CVALUE*  come_value  , struct sInfo*  info  );
_Bool is_generic_void_pointer_compatible(struct sType*  left_type  , struct sType*  right_type  , struct sInfo*  info  );
_Bool is_span_class_name(const char* class_name, struct sInfo*  info  );
_Bool is_generic_placeholder_class_name(const char* class_name, struct sInfo*  info  );
_Bool is_generic_placeholder_type(struct sType*  type  , struct sInfo*  info  );
_Bool is_span_wrapper_compatible(struct sType*  left_type  , struct sType*  right_type  , struct sInfo*  info  );
_Bool is_transparent_union_type(struct sType*  type  , struct sInfo*  info  );
_Bool pointer_attr_has_word(struct sType*  type  , const char* word, struct sInfo*  info  );
_Bool is_type_name(char* buf, struct sInfo*  info  );
_Bool is_contained_generics_class(struct sType*  type  , struct sInfo*  info  );
_Bool is_contained_generics_placeholder(struct sType*  type  , struct sInfo*  info  );
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* parse_params(struct sInfo*  info  , _Bool in_constructor_);
char*  parse_square_attribute(struct sInfo*  info  );
char*  parse_declspec_attribute(struct sInfo*  info  );
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo*  info  );
void parse_struct_attribute_skip_paren(struct sInfo*  info  );
_Bool parse_attribute_keyword(struct buffer*  result  , const char* keyword, _Bool allow_end, struct sInfo*  info  );
_Bool parse_common_attribute_keyword(struct buffer*  result  , struct sInfo*  info  , _Bool allow_end);
char*  parse_struct_attribute(struct sInfo*  info  , _Bool allow_end);
char*  merge_tag_attribute(char*  current  , char*  attribute  );
struct tuple2$2sType$phchar$ph* parse_variable_name_on_multiple_declare(struct sType*  base_type_name  , _Bool first, struct sInfo*  info  );
_Bool skip_pointer_attribute(struct sInfo*  info  );
char*  parse_pointer_qualifier(struct sInfo*  info  );
struct tuple3$3sType$phchar$ph_Bool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo*  info  );
struct tuple5$5_Bool$_Bool$_Bool$_Bool$_Bool$* backtrace_struct_union_enum(struct sInfo*  info  );
struct sType*  parse_pointer_attribute(struct sType*  type  , struct sInfo*  info  );
void append_attribute_to_type(struct sType*  type  , char*  attribute  , _Bool for_variable, struct sInfo*  info  );
void apply_type_qualifiers(struct sType*  type  , _Bool constant, _Bool complex_, _Bool atomic_, _Bool thread_local, _Bool thread_, _Bool alignas_double, _Bool register_, _Bool unsigned_, _Bool noreturn_, _Bool volatile_, _Bool uniq_, _Bool static_, _Bool extern_, _Bool inline_, _Bool restrict_, _Bool long_long, _Bool long_, _Bool short_, _Bool norecord, _Bool weak_);
void merge_pointer_attribute_to_type(struct sType*  type  , char*  pointer_attribute  );
char*  parse_variable_name_fun(struct sType*  type  , _Bool anonymous_name, _Bool var_name_between_brace, char*  attribute  , struct sInfo*  info  );
void show_type(struct sType*  type  , struct sInfo*  info  );
_Bool is_pointer_type(struct sType*  type  , struct sInfo*  info  );
_Bool is_owned_main(struct sType*  type_  , struct sClass*  klass  , struct sType*  field_type  , struct sType*  owner  , struct sInfo*  info  );
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun*  fun  , struct sInfo*  info  );
char*  sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo*  info  );
struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo*  info  , _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static char span$1char$p$p_operator_derefference(struct span$1char$p* self);
static char span$1char$p_operator_derefference(struct span$1char$p* self);
static struct tuple3$3sType$phchar$ph_Bool$* tuple3$3sType$phchar$ph_Bool$_initialize(struct tuple3$3sType$phchar$ph_Bool$* self, struct sType*  v1  , char*  v2  , _Bool v3);
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
static struct sType*  map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char*  key  );
static struct sType*  map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char*  key  );
static struct sType*  sType_clone(struct sType*  self  );
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  );
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1int$* list$1int$$p_clone(struct list$1int$* self);
static struct list$1int$* list$1int$_initialize(struct list$1int$* self);
static struct list$1int$* list$1int$_add(struct list$1int$* self, int item);
static void list$1int$_finalize(struct list$1int$* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  );
static void list$1char$ph_finalize(struct list$1char$ph* self);
static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static void sClass_finalize(struct sClass*  self  );
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  );
static _Bool list$1char$ph_contained(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static char*  list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char*  list$1char$ph_next(struct list$1char$ph* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self);
static struct list$1sNode$ph* list$1sNode$ph_each(struct list$1sNode$ph* self, void* parent, void (*block)(void*,struct sNode*,int,_Bool*));
void method_block1_31type2nc(struct __current_stack1__* parent, struct sNode* it, int it2, _Bool* it3);
static struct buffer*  map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  );
static struct buffer*  map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  );
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  );
static struct sClass*  map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  default_value  , _Bool by_pointer);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  item  , _Bool by_pointer);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char*  map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char*  map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char*  item  , _Bool by_pointer);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
void method_block2_31type2nc(struct __current_stack2__* parent, struct sNode* it, int it2, _Bool* it3);
void method_block3_31type2nc(struct __current_stack3__* parent, struct sNode* it, int it2, _Bool* it3);
static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values);
// uniq global variable
// inline function
inline int  __attribute__((__always_inline__))  __sputc(int _c, struct __sFILE*  _p  )
{
    if(--_p->_w>=0||(_p->_w>=_p->_lbfsize&&(char)_c!=10)) {
                return (*_p->_p++=_c);
    }
    else {
                return (__swbuf(_c,_p));
    }
}
static inline unsigned short int  _OSSwapInt16(unsigned short int  _data  )
{
        return (unsigned short int )(_data<<8|_data>>8);
}
static inline unsigned int  _OSSwapInt32(unsigned int  _data  )
{
    _data=(((_data^(_data>>16|(_data<<16)))&0xFF00FFFF)>>8)^(_data>>8|_data<<24);
        return _data;
}
static inline unsigned long  long  _OSSwapInt64(unsigned long  long  _data  )
{
    union anonymous_typeZ5 _u;
    _u._ul[0]=(unsigned int )(_data>>32);
    _u._ul[1]=(unsigned int )(_data&0xffffffff);
    _u._ul[0]=_OSSwapInt32(_u._ul[0]);
    _u._ul[1]=_OSSwapInt32(_u._ul[1]);
        return _u._ull;
}
inline int isascii(int _c)
{
        return ((_c&~0x7F)==0);
}
inline int __istype(int  _c  , unsigned long  int _f)
{
        return (((isascii(_c))?(!!(_DefaultRuneLocale.__runetype[_c]&_f)):(!!__maskrune(_c,_f))));
}
inline int  __isctype(int  _c  , unsigned long  int _f)
{
        return (((_c<0||_c>=(1<<8)))?(0):(!!(_DefaultRuneLocale.__runetype[_c]&_f)));
}
inline int __wcwidth(int  _c  )
{
    unsigned int _x;
    memset(&_x, 0, sizeof(_x));
    if(_c==0) {
                return (0);
    }
    _x=(unsigned int)__maskrune(_c,0xe0000000L|0x00040000L);
    if((_x&0xe0000000L)!=0) {
                return ((_x&0xe0000000L)>>30);
    }
        return ((((_x&0x00040000L)!=0)?(1):(-1)));
}
inline int isalnum(int _c)
{
        return (__istype(_c,0x00000100L|0x00000400L));
}
inline int isalpha(int _c)
{
        return (__istype(_c,0x00000100L));
}
inline int isblank(int _c)
{
        return (__istype(_c,0x00020000L));
}
inline int iscntrl(int _c)
{
        return (__istype(_c,0x00000200L));
}
inline int isdigit(int _c)
{
        return (__isctype(_c,0x00000400L));
}
inline int isgraph(int _c)
{
        return (__istype(_c,0x00000800L));
}
inline int islower(int _c)
{
        return (__istype(_c,0x00001000L));
}
inline int isprint(int _c)
{
        return (__istype(_c,0x00040000L));
}
inline int ispunct(int _c)
{
        return (__istype(_c,0x00002000L));
}
inline int isspace(int _c)
{
        return (__istype(_c,0x00004000L));
}
inline int isupper(int _c)
{
        return (__istype(_c,0x00008000L));
}
inline int isxdigit(int _c)
{
        return (__isctype(_c,0x00010000L));
}
inline int toascii(int _c)
{
        return (_c&0x7F);
}
inline int tolower(int _c)
{
        return (__tolower(_c));
}
inline int toupper(int _c)
{
        return (__toupper(_c));
}
inline int digittoint(int _c)
{
        return (__maskrune(_c,0x0F));
}
inline int ishexnumber(int _c)
{
        return (__istype(_c,0x00010000L));
}
inline int isideogram(int _c)
{
        return (__istype(_c,0x00080000L));
}
inline int isnumber(int _c)
{
        return (__istype(_c,0x00000400L));
}
inline int isphonogram(int _c)
{
        return (__istype(_c,0x00200000L));
}
inline int isrune(int _c)
{
        return (__istype(_c,0xFFFFFFF0L));
}
inline int isspecial(int _c)
{
        return (__istype(_c,0x00100000L));
}
inline int iswalnum(unsigned int  _wc  )
{
        return (__istype(_wc,0x00000100L|0x00000400L));
}
inline int iswalpha(unsigned int  _wc  )
{
        return (__istype(_wc,0x00000100L));
}
inline int iswcntrl(unsigned int  _wc  )
{
        return (__istype(_wc,0x00000200L));
}
inline int iswctype(unsigned int  _wc  , unsigned int  _charclass  )
{
        return (__istype(_wc,_charclass));
}
inline int iswdigit(unsigned int  _wc  )
{
        return (__isctype(_wc,0x00000400L));
}
inline int iswgraph(unsigned int  _wc  )
{
        return (__istype(_wc,0x00000800L));
}
inline int iswlower(unsigned int  _wc  )
{
        return (__istype(_wc,0x00001000L));
}
inline int iswprint(unsigned int  _wc  )
{
        return (__istype(_wc,0x00040000L));
}
inline int iswpunct(unsigned int  _wc  )
{
        return (__istype(_wc,0x00002000L));
}
inline int iswspace(unsigned int  _wc  )
{
        return (__istype(_wc,0x00004000L));
}
inline int iswupper(unsigned int  _wc  )
{
        return (__istype(_wc,0x00008000L));
}
inline int iswxdigit(unsigned int  _wc  )
{
        return (__isctype(_wc,0x00010000L));
}
inline unsigned int  towlower(unsigned int  _wc  )
{
        return (__tolower(_wc));
}
inline unsigned int  towupper(unsigned int  _wc  )
{
        return (__toupper(_wc));
}

// body function
struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo*  info  , _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "parse_type"; neo_current_frame = &fr;
    char* head;
    int head_sline;
    void* __right_value0 = (void*)0;
    char*  attribute_before  ;
    char*  type_name  ;
    _Bool norecord;
    _Bool constant;
    _Bool static_;
    _Bool volatile_;
    _Bool register_;
    _Bool unsigned_;
    _Bool long_;
    _Bool long_long;
    _Bool short_;
    _Bool restrict_;
    _Bool struct_;
    _Bool union_;
    _Bool enum_;
    _Bool no_heap;
    _Bool extern_;
    _Bool inline_;
    _Bool uniq_;
    _Bool tuple_;
    _Bool original_var_name;
    _Bool complex_;
    _Bool type_name_;
    _Bool noreturn_;
    _Bool weak_;
    struct sNode* alignas_;
    _Bool alignas_double;
    char*  tag_attribute  ;
    _Bool struct_define_parsed;
    _Bool anonymous_type;
    _Bool anonymous_name;
    _Bool atomic_;
    _Bool thread_local;
    _Bool thread_;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    char*  __dec_obj1  ;
    char*  __dec_obj2  ;
    char*  __dec_obj3  ;
    char*  __dec_obj4  ;
    char*  __dec_obj5  ;
    char*  __dec_obj6  ;
    char*  __dec_obj7  ;
    struct buffer*  attr  ;
    char* p;
    char* tail;
    char*  attr_str  ;
    void* __right_value2 = (void*)0;
    char*  __dec_obj8  ;
    char*  __dec_obj9  ;
    char*  __dec_obj10  ;
    char*  attr_0  ;
    char*  __dec_obj11  ;
    char*  __dec_obj12  ;
    char*  __dec_obj13  ;
    char*  __dec_obj14  ;
    char*  __dec_obj15  ;
    char*  __dec_obj16  ;
    char*  __dec_obj17  ;
    struct sNode* __dec_obj18;
    char*  __dec_obj19  ;
    char*  __dec_obj20  ;
    char*  __dec_obj21  ;
    char*  __dec_obj22  ;
    char*  __dec_obj23  ;
    char*  __dec_obj24  ;
    char*  __dec_obj25  ;
    char*  __dec_obj26  ;
    char*  __dec_obj27  ;
    char* p_1;
    int sline;
    char*  __dec_obj28  ;
    char*  __dec_obj29  ;
    char*  __dec_obj30  ;
    char*  struct_attribute_after_name  ;
    char*  __dec_obj31  ;
    char* p_2;
    int sline_3;
    struct tuple3$3sType$phchar$ph_Bool$* __result_obj__0;
    char*  struct_attribute_after_generics  ;
    char*  __dec_obj34  ;
    char* p_4;
    int sline_5;
    struct sNode* node;
    _Bool Value;
    char*  __dec_obj35  ;
    char* p_6;
    int sline_7;
    char*  __dec_obj36  ;
    char*  __dec_obj37  ;
    char*  __dec_obj38  ;
    char* p_8;
    int sline_9;
    struct tuple2$2char$phchar$ph* multiple_assign_var1
;    char*  asm_name  =0;
    char*  enum_attribute  =0;
    char*  __dec_obj39  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var2
;    struct sType*  type  =0;
    char*  name  =0;
    _Bool err=0;
    char* p_10;
    int sline_11;
    char*  __dec_obj40  ;
    char*  __dec_obj41  ;
    char*  enum_attribute_after_name  ;
    char*  __dec_obj42  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var3
;    struct sType*  type_12  =0;
    char*  name_13  =0;
    _Bool err_14=0;
    char*  enum_attribute_after_type  ;
    char*  __dec_obj43  ;
    char* p_15;
    int sline_16;
    char* p_17;
    int sline_18;
    char*  __dec_obj44  ;
    char* p2;
    int sline2;
    char*  __dec_obj45  ;
    char*  __dec_obj46  ;
    char*  __dec_obj47  ;
    char*  __dec_obj48  ;
    char*  __dec_obj49  ;
    char*  __dec_obj50  ;
    char*  __dec_obj51  ;
    char* p_19;
    int sline_20;
    char*  __dec_obj52  ;
    char*  __dec_obj53  ;
    char*  __dec_obj54  ;
    char* p_21;
    int sline_22;
    char*  __dec_obj55  ;
    char* p_23;
    int sline_24;
    char*  __dec_obj56  ;
    char*  __dec_obj57  ;
    char*  __dec_obj58  ;
    char* p_25;
    int sline_26;
    char*  __dec_obj59  ;
    char*  __dec_obj60  ;
    char*  __dec_obj61  ;
    char*  __dec_obj62  ;
    char*  __dec_obj63  ;
    char* p_27;
    int sline_28;
    char*  __dec_obj64  ;
    char*  __dec_obj65  ;
    char*  __dec_obj66  ;
    char*  __dec_obj67  ;
    char*  __dec_obj68  ;
    char*  __dec_obj69  ;
    char* p_29;
    int sline_30;
    char*  __dec_obj70  ;
    char*  __dec_obj71  ;
    char*  __dec_obj72  ;
    _Bool no_comma;
    struct sNode* exp;
    struct sType*  type_31  ;
    struct sNode* __dec_obj73;
    char*  var_name  ;
    struct sType*  __dec_obj74  ;
    char*  attribute  ;
    char*  __dec_obj75  ;
    char*  attribute_32  ;
    char*  __dec_obj76  ;
    char*  __dec_obj77  ;
    char*  __dec_obj78  ;
    char*  __dec_obj79  ;
    int pointer_num;
    char*  pointer_attribute  ;
    _Bool heap;
    _Bool refference;
    _Bool no_refference;
    _Bool channel;
    _Bool deffer_;
    _Bool any_class;
    _Bool vtable;
    char*  pointer_attr  ;
    char*  __dec_obj80  ;
    char*  __dec_obj81  ;
    char*  tuple_name  ;
    char*  __dec_obj82  ;
    _Bool lambda_flag;
    char* pX;
    int slineX;
    struct sType*  type_33  ;
    char*  var_name_34  ;
    _Bool function_pointer_flag;
    _Bool pointer_to_array_flag;
    char* p_35;
    int sline_36;
    char*  word  ;
    char*  __dec_obj83  ;
    _Bool no_output_come_code;
    struct sNode* exp_37;
    char*  word_38  ;
    _Bool var_name_between_brace;
    char* p_39;
    int sline_40;
    char*  word_41  ;
    _Bool anonymous;
    char*  __dec_obj84  ;
    struct sNode* node_42;
    _Bool Value_43;
    int pointer_num_44;
    struct sType*  __dec_obj119  ;
    struct sType*  __dec_obj120  ;
    struct sClass*  klass  ;
    char*  __dec_obj121  ;
    char*  __dec_obj122  ;
    char*  __dec_obj123  ;
    struct sNode* node_53;
    _Bool Value_54;
    struct sType*  __dec_obj124  ;
    struct sType*  __dec_obj125  ;
    _Bool anonymous_55;
    char*  __dec_obj126  ;
    struct sNode* node_56;
    _Bool Value_57;
    int pointer_num_58;
    struct sType*  __dec_obj127  ;
    struct sType*  __dec_obj128  ;
    struct sClass*  klass_59  ;
    char*  __dec_obj129  ;
    char*  attribute_60  ;
    char*  __dec_obj130  ;
    struct sType*  result_type  ;
    _Bool _conditional_value_X0;
    struct sType*  __dec_obj131  ;
    int i;
    _Bool _conditional_value_X1;
    struct sType*  __dec_obj132  ;
    int i_65;
    _Bool _conditional_value_X2;
    struct sType*  __dec_obj133  ;
    struct sType*  __dec_obj134  ;
    struct sType*  __dec_obj135  ;
    struct sNode* __dec_obj136;
    char*  __dec_obj137  ;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var4
;    struct list$1sType$ph* param_types=0;
    struct list$1char$ph* param_names=0;
    struct list$1char$ph* param_default_parametors=0;
    _Bool var_args=0;
    struct sType*  __dec_obj138  ;
    struct sType*  __dec_obj139  ;
    struct list$1sType$ph* __dec_obj140;
    struct list$1char$ph* __dec_obj141;
    _Bool pointer_paren;
    int paren_num;
    int array_pointer_num;
    struct sType*  __dec_obj142  ;
    struct sType*  __dec_obj143  ;
    struct sNode* __dec_obj144;
    char*  __dec_obj145  ;
    char*  __dec_obj146  ;
    char*  __dec_obj147  ;
    struct list$1sNode$ph* array;
    struct sNode* node_66;
    struct list$1sNode$ph* __dec_obj148;
    struct __current_stack1__ __current_stack1__;
    struct sNode* node_67;
    char*  function_pointer_attribute  ;
    int function_pointer_num;
    char*  pointer_attr_68  ;
    char*  __dec_obj149  ;
    char*  __dec_obj150  ;
    char*  pointer_attr2  ;
    char*  __dec_obj151  ;
    char*  __dec_obj152  ;
    struct sType*  result_type_69  ;
    _Bool _conditional_value_X3;
    struct sType*  __dec_obj153  ;
    int i_70;
    _Bool _conditional_value_X4;
    struct sType*  __dec_obj154  ;
    int i_71;
    _Bool _conditional_value_X5;
    struct sType*  __dec_obj155  ;
    struct sType*  __dec_obj156  ;
    struct sType*  __dec_obj157  ;
    struct sNode* __dec_obj158;
    int paren_flag;
    int array_pointer;
    char*  __dec_obj159  ;
    char*  __dec_obj160  ;
    struct sType*  __dec_obj161  ;
    struct sNode* node_72;
    struct sNode* node_73;
    struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* multiple_assign_var5
;    struct list$1sType$ph* param_types_74=0;
    struct list$1char$ph* param_names_75=0;
    struct list$1char$ph* param_default_parametors_76=0;
    _Bool var_args_77=0;
    struct sType*  __dec_obj162  ;
    struct list$1sType$ph* __dec_obj163;
    struct list$1char$ph* __dec_obj164;
    char*  __dec_obj165  ;
    _Bool _conditional_value_X6;
    struct sType*  __dec_obj166  ;
    struct buffer*  t  ;
    struct sType*  type_  ;
    char*  __dec_obj167  ;
    struct sType*  __dec_obj168  ;
    char*  __dec_obj169  ;
    char*  __dec_obj170  ;
    struct sNode* __dec_obj171;
    char*  __dec_obj172  ;
    struct sType*  __dec_obj173  ;
    int i_78;
    _Bool _conditional_value_X7;
    struct sType*  __dec_obj174  ;
    struct sNode* __dec_obj175;
    char*  __dec_obj176  ;
    struct sType*  __dec_obj177  ;
    int i_79;
    _Bool _conditional_value_X8;
    struct sType*  __dec_obj178  ;
    struct sNode* __dec_obj179;
    char*  __dec_obj180  ;
    struct sType*  __dec_obj181  ;
    _Bool _conditional_value_X9;
    struct sType*  __dec_obj182  ;
    struct sType*  __dec_obj183  ;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var6
;    struct sType*  generics_type  =0;
    char*  var_name_80  =0;
    _Bool err_81=0;
    int expected_generics_num;
    struct sClass*  generics_class  ;
    struct sType*  __dec_obj187  ;
    char*  new_name  ;
    struct sNode* __dec_obj188;
    char*  __dec_obj189  ;
    char*  __dec_obj190  ;
    struct sType*  __dec_obj191  ;
    struct sClass*  klass_84  ;
    void* __right_value3 = (void*)0;
    struct sClass*  klass_96  ;
    struct sType*  __dec_obj195  ;
    struct sType*  __dec_obj196  ;
    struct sNode* __dec_obj197;
    char*  __dec_obj198  ;
    struct sType*  __dec_obj199  ;
    struct list$1sType$ph* types;
    struct tuple3$3sType$phchar$ph_Bool$* multiple_assign_var7
;    struct sType*  type2  =0;
    char*  name_97  =0;
    _Bool err_98=0;
    int num_tuples;
    struct sType*  __dec_obj200  ;
    struct list$1sType$ph* _o2_saved_3;
    struct sType*  it  ;
    struct sType*  __dec_obj201  ;
    struct sType*  __dec_obj202  ;
    char*  new_name_101  ;
    char*  __dec_obj203  ;
    char*  attribute_102  ;
    char*  __dec_obj204  ;
    char*  __dec_obj205  ;
    char*  __dec_obj206  ;
    char*  __dec_obj207  ;
    struct list$1sNode$ph* array_num_typedef;
    struct list$1sNode$ph* __dec_obj208;
    _Bool array_static;
    _Bool array_restrict;
    struct sNode* node_103;
    struct __current_stack2__ __current_stack2__;
    struct __current_stack3__ __current_stack3__;
    struct tuple2$2char$phchar$ph* multiple_assign_var8
;    char*  asm_name_108  =0;
    char*  attribute2  =0;
    char*  __dec_obj212  ;
    struct sType*  type_before  ;
    struct sType*  __dec_obj213  ;
    struct sNode* __list_values1__[1];
    struct list$1sNode$ph* __dec_obj214;
    struct sType*  __dec_obj215  ;
    char*  __dec_obj216  ;
    char*  __dec_obj217  ;
    char*  __dec_obj218  ;
    memset(&type_33, 0, sizeof(type_33));
    memset(&var_name_34, 0, sizeof(var_name_34));
    memset(&result_type, 0, sizeof(result_type));
    memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
    memset(&result_type_69, 0, sizeof(result_type_69));
    memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    memset(&__current_stack3__, 0, sizeof(struct __current_stack3__));
    head=info->p->p;
    head_sline=info->sline;
    attribute_before=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "31type2.nc", 8, 1);
    __right_value0 = (void*)0;
    type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 9, 2);
    norecord=(_Bool)0;
    constant=(_Bool)0;
    static_=(_Bool)0;
    volatile_=(_Bool)0;
    register_=(_Bool)0;
    unsigned_=(_Bool)0;
    long_=(_Bool)0;
    long_long=(_Bool)0;
    short_=(_Bool)0;
    restrict_=(_Bool)0;
    struct_=(_Bool)0;
    union_=(_Bool)0;
    enum_=(_Bool)0;
    no_heap=(_Bool)0;
    extern_=(_Bool)0;
    inline_=(_Bool)0;
    uniq_=(_Bool)0;
    tuple_=(_Bool)0;
    original_var_name=(_Bool)0;
    complex_=(_Bool)0;
    type_name_=(_Bool)0;
    noreturn_=(_Bool)0;
    weak_=(_Bool)0;
    alignas_=((void*)0);
    alignas_double=(_Bool)0;
    __right_value0 = (void*)0;
    tag_attribute=(char*)come_increment_ref_count(xsprintf(""), "31type2.nc", 38, 3);
    struct_define_parsed=(_Bool)0;
    anonymous_type=(_Bool)0;
    anonymous_name=(_Bool)0;
    atomic_=(_Bool)0;
    thread_local=(_Bool)0;
    thread_=(_Bool)0;
    while((_Bool)1) {
        if(string_operator_equals(type_name,"__type__")) {
            if(span$1char$p_operator_derefference(info->p)==40) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            __right_value0 = (void*)0;
            buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "31type2.nc", 53, 4, "struct buffer* "), "31type2.nc", 53, 5)), "31type2.nc", 53, 6);
            while(span$1char$p_operator_derefference(info->p)) {
                if(span$1char$p_operator_derefference(info->p)==41) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    buffer_append_char(buf,span$1char$p_operator_derefference(info->p));
                    info->p->p++;
                }
            }
            __right_value0 = (void*)0;
            __dec_obj1=type_name,
            type_name=(char* )come_increment_ref_count(buffer_to_string(buf), "31type2.nc", 65, 8);
            __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 65, 7);
            type_name_=(_Bool)1;
            come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 700, 9);
        }
        else if(string_operator_equals(type_name,"_Thread_local")) {
            __right_value0 = (void*)0;
            __dec_obj2=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 70, 11);
            __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 70, 10);
            thread_local=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"_norecord")) {
            __right_value0 = (void*)0;
            __dec_obj3=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 74, 13);
            __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 74, 12);
            norecord=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"_weak")) {
            __right_value0 = (void*)0;
            __dec_obj4=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 78, 15);
            __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 78, 14);
            weak_=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"__thread")) {
            __right_value0 = (void*)0;
            __dec_obj5=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 82, 17);
            __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 82, 16);
            thread_=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"_Atomic")) {
            if(span$1char$p_operator_derefference(info->p)==40) {
                expected_next_character(40,info);
            }
            __right_value0 = (void*)0;
            __dec_obj6=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 89, 19);
            __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 89, 18);
            atomic_=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"__extension__")) {
            __right_value0 = (void*)0;
            __dec_obj7=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 93, 21);
            __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 93, 20);
        }
        else if(string_operator_equals(type_name,"__attribute__")) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            attr=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc(1, sizeof(struct buffer )*(1), "31type2.nc", 96, 22, "struct buffer* "), "31type2.nc", 96, 23)), "31type2.nc", 96, 24);
            buffer_append_str(attr,"__attribute__");
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==40) {
                p=info->p->p;
                skip_paren(info);
                tail=info->p->p;
                buffer_append(attr,p,tail-p);
            }
            __right_value0 = (void*)0;
            attr_str=(char* )come_increment_ref_count(buffer_to_string(attr), "31type2.nc", 109, 25);
            if(string_operator_not_equals(attribute_before,"")) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __dec_obj8=attribute_before,
                attribute_before=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(attribute_before," "))),attr_str), "31type2.nc", 111, 27);
                __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 111, 26);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 111, 28));
            }
            else {
                __dec_obj9=attribute_before,
                attribute_before=(char* )come_increment_ref_count(attr_str, "31type2.nc", 114, 30);
                __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 114, 29);
            }
            __right_value0 = (void*)0;
            __dec_obj10=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 117, 32);
            __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 117, 31);
            come_call_finalizer(buffer_finalize, attr, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 700, 33);
            (attr_str = come_decrement_ref_count(attr_str, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 700, 34));
        }
        else if(string_operator_equals(type_name,"__declspec")) {
            __right_value0 = (void*)0;
            attr_0=(char* )come_increment_ref_count(parse_declspec_attribute(info), "31type2.nc", 120, 35);
            if(string_operator_not_equals(attr_0,"")) {
                if(string_operator_not_equals(attribute_before,"")) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj11=attribute_before,
                    attribute_before=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(attribute_before," "))),attr_0), "31type2.nc", 123, 37);
                    __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 123, 36);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 123, 38));
                }
                else {
                    __dec_obj12=attribute_before,
                    attribute_before=(char* )come_increment_ref_count(attr_0, "31type2.nc", 126, 40);
                    __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 126, 39);
                }
            }
            __right_value0 = (void*)0;
            __dec_obj13=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 130, 42);
            __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 130, 41);
            (attr_0 = come_decrement_ref_count(attr_0, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 700, 43));
        }
        else if(string_operator_equals(type_name,"_Noreturn")) {
            __right_value0 = (void*)0;
            __dec_obj14=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 133, 45);
            __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 133, 44);
            noreturn_=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"__noreturn")) {
            __right_value0 = (void*)0;
            __dec_obj15=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 137, 47);
            __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 137, 46);
            noreturn_=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"_Nullable")) {
            __right_value0 = (void*)0;
            __dec_obj16=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 141, 49);
            __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 141, 48);
        }
        else if(string_operator_equals(type_name,"_noreturn")) {
            __right_value0 = (void*)0;
            __dec_obj17=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 144, 51);
            __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 144, 50);
            noreturn_=(_Bool)1;
        }
        else if(string_operator_equals(type_name,"_Alignas")) {
            expected_next_character(40,info);
            if((info->end-info->p->p)>strlen("double")&&memcmp(info->p->p,"double",strlen("double"))==0) {
                __right_value0 = (void*)0;
                (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 152, 52));
                alignas_double=(_Bool)1;
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj18=alignas_,
                alignas_=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "31type2.nc", 156, 54);
                (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 156, 53) :0);
            }
            expected_next_character(41,info);
            __right_value0 = (void*)0;
            __dec_obj19=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 161, 56);
            __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 161, 55);
        }
        else if(string_operator_equals(type_name,"const")) {
            constant=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj20=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 166, 58);
            __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 166, 57);
        }
        else if(string_operator_equals(type_name,"_Complex")) {
            complex_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj21=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 171, 60);
            __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 171, 59);
        }
        else if(string_operator_equals(type_name,"static")) {
            static_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj22=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 176, 62);
            __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 176, 61);
        }
        else if(string_operator_equals(type_name,"uniq")) {
            uniq_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj23=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 181, 64);
            __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 181, 63);
        }
        else if(string_operator_equals(type_name,"extern")) {
            extern_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj24=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 186, 66);
            __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 186, 65);
        }
        else if(string_operator_equals(type_name,"inline")||string_operator_equals(type_name,"__inline")||string_operator_equals(type_name,"__inline__")||string_operator_equals(type_name,"__always_inline")||string_operator_equals(type_name,"__forceinline")) {
            inline_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj25=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 192, 68);
            __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 192, 67);
        }
        else if(string_operator_equals(type_name,"volatile")||string_operator_equals(type_name,"__volatile__")) {
            volatile_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj26=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 197, 70);
            __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 197, 69);
        }
        else if(string_operator_equals(type_name,"struct")) {
            struct_=(_Bool)1;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj27=tag_attribute,
            tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "31type2.nc", 201, 71),(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "31type2.nc", 201, 72)), "31type2.nc", 201, 74);
            __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 201, 73);
            if(span$1char$p_operator_derefference(info->p)==123) {
                p_1=info->p->p;
                sline=info->sline;
                __right_value0 = (void*)0;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 207, 75));
                if(span$1char$p_operator_derefference(info->p)==59) {
                    anonymous_name=(_Bool)1;
                    anonymous_type=(_Bool)1;
                    __right_value0 = (void*)0;
                    __dec_obj28=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("","31type2.nc",212), "31type2.nc", 212, 77);
                    __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 212, 76);
                    info->p->p=p_1;
                    info->sline=sline;
                    struct_define_parsed=(_Bool)1;
                    break;
                }
                else {
                    anonymous_type=(_Bool)1;
                    __right_value0 = (void*)0;
                    __dec_obj29=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("","31type2.nc",220), "31type2.nc", 220, 79);
                    __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 220, 78);
                    info->p->p=p_1;
                    info->sline=sline;
                    struct_define_parsed=(_Bool)1;
                    break;
                }
            }
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)!=62) {
                __right_value0 = (void*)0;
                __dec_obj30=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 231, 81);
                __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 231, 80);
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                struct_attribute_after_name=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "31type2.nc", 235, 82);
                __right_value0 = (void*)0;
                __dec_obj31=tag_attribute,
                tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "31type2.nc", 236, 83),(char* )come_increment_ref_count(struct_attribute_after_name, "31type2.nc", 236, 84)), "31type2.nc", 236, 86);
                __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 236, 85);
                if(span$1char$p_operator_derefference(info->p)==60) {
                    p_2=info->p->p;
                    sline_3=info->sline;
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        if(span$1char$p_operator_derefference(info->p)==62) {
                            info->p->p++;
                            skip_spaces_and_lf(info);
                            if(span$1char$p_operator_derefference(info->p)==123) {
                            }
                            else {
                                info->p->p=p_2;
                                info->sline=sline_3;
                            }
                            break;
                        }
                        else if(span$1char$p_operator_derefference(info->p)==0) {
                            err_msg(info,"invalid struct definition");
                                                        __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 260, 87, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 260, 131),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 260, 132),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 260, 133),(_Bool)0))), "31type2.nc", 260, 134);
                            (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 260, 135));
                            (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 260, 136));
                            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 260, 137));
                            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 260, 138):(void*)0);
                            (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 260, 139));
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 260, 140);
                            neo_current_frame = fr.prev;
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 260, 141);
                            return __result_obj__0;
                        }
                        else {
                            info->p->p++;
                        }
                    }
                }
                __right_value0 = (void*)0;
                struct_attribute_after_generics=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "31type2.nc", 268, 142);
                __right_value0 = (void*)0;
                __dec_obj34=tag_attribute,
                tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "31type2.nc", 269, 143),(char* )come_increment_ref_count(struct_attribute_after_generics, "31type2.nc", 269, 144)), "31type2.nc", 269, 146);
                __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 269, 145);
                if(span$1char$p_operator_derefference(info->p)==123) {
                    p_4=info->p->p;
                    sline_5=info->sline;
                    __right_value0 = (void*)0;
                    ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 275, 147));
                    __right_value0 = (void*)0;
                    (void)((char* )(__right_value0=parse_struct_attribute(info,(_Bool)1)));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 277, 148));
                    if(span$1char$p_operator_derefference(info->p)==59) {
                        info->p->p=head;
                        info->sline=head_sline;
                                                __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 282, 149, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 282, 150),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 282, 151),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 282, 152),(_Bool)0))), "31type2.nc", 282, 153);
                        (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 282, 154));
                        (struct_attribute_after_generics = come_decrement_ref_count(struct_attribute_after_generics, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 282, 155));
                        (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 282, 156));
                        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 282, 157));
                        ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 282, 158):(void*)0);
                        (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 282, 159));
                        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 282, 160);
                        neo_current_frame = fr.prev;
                        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 282, 161);
                        return __result_obj__0;
                    }
                    else {
                        info->p->p=p_4;
                        info->sline=sline_5;
                        __right_value0 = (void*)0;
                        node=(struct sNode*)come_increment_ref_count(parse_struct((char* )come_increment_ref_count(type_name, "31type2.nc", 288, 162),(char* )come_increment_ref_count(tag_attribute, "31type2.nc", 288, 163),info,(_Bool)0), "31type2.nc", 288, 164);
                        Value=node_compile(node,info);
                        if(!Value) {
                                                        __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 291, 165, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 291, 166),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 291, 167),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 291, 168),(_Bool)0))), "31type2.nc", 291, 169);
                            ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 291, 170):(void*)0);
                            (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 291, 171));
                            (struct_attribute_after_generics = come_decrement_ref_count(struct_attribute_after_generics, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 291, 172));
                            (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 291, 173));
                            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 291, 174));
                            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 291, 175):(void*)0);
                            (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 291, 176));
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 291, 177);
                            neo_current_frame = fr.prev;
                            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 291, 178);
                            return __result_obj__0;
                        }
                        struct_define_parsed=(_Bool)1;
                        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 294, 179):(void*)0);
                        (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 294, 180));
                        (struct_attribute_after_generics = come_decrement_ref_count(struct_attribute_after_generics, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 294, 181));
                        break;
                        ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 296, 182):(void*)0);
                    }
                }
                (struct_attribute_after_name = come_decrement_ref_count(struct_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 298, 183));
                (struct_attribute_after_generics = come_decrement_ref_count(struct_attribute_after_generics, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 298, 184));
            }
        }
        else if(string_operator_equals(type_name,"union")) {
            union_=(_Bool)1;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj35=tag_attribute,
            tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "31type2.nc", 301, 185),(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "31type2.nc", 301, 186)), "31type2.nc", 301, 188);
            __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 301, 187);
            if(span$1char$p_operator_derefference(info->p)==123) {
                p_6=info->p->p;
                sline_7=info->sline;
                __right_value0 = (void*)0;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 307, 189));
                if((info->end-info->p->p)>=strlen("__attribute__")&&memcmp(info->p->p,"__attribute__",strlen("__attribute__"))==0) {
                    __right_value0 = (void*)0;
                    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
                    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 310, 192);
                }
                if(span$1char$p_operator_derefference(info->p)==59) {
                    info->p->p=head;
                    info->sline=head_sline;
                    anonymous_type=(_Bool)1;
                    __right_value0 = (void*)0;
                    __dec_obj36=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("","31type2.nc",317), "31type2.nc", 317, 194);
                    __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 317, 193);
                    info->p->p=p_6;
                    info->sline=sline_7;
                    break;
                }
                else {
                    anonymous_type=(_Bool)1;
                    __right_value0 = (void*)0;
                    __dec_obj37=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("","31type2.nc",324), "31type2.nc", 324, 196);
                    __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 324, 195);
                    info->p->p=p_6;
                    info->sline=sline_7;
                    break;
                }
            }
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __dec_obj38=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 333, 198);
            __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 333, 197);
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==123) {
                p_8=info->p->p;
                sline_9=info->sline;
                __right_value0 = (void*)0;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 341, 199));
                if(span$1char$p_operator_derefference(info->p)==59) {
                    info->p->p=head;
                    info->sline=head_sline;
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 346, 200, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 346, 201),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 346, 202),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 346, 203),(_Bool)0))), "31type2.nc", 346, 204);
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 346, 205));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 346, 206));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 346, 207):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 346, 208));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 346, 209);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 346, 210);
                    return __result_obj__0;
                }
                else {
                    anonymous_type=(_Bool)1;
                    info->p->p=p_8;
                    info->sline=sline_9;
                    break;
                }
            }
        }
        else if(string_operator_equals(type_name,"enum")) {
            enum_=(_Bool)1;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            multiple_assign_var1=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
            asm_name=(char* )come_increment_ref_count(multiple_assign_var1->v1, "31type2.nc", 361, 211);
            enum_attribute=(char* )come_increment_ref_count(multiple_assign_var1->v2, "31type2.nc", 361, 212);
            come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 361, 213);
            __right_value0 = (void*)0;
            __dec_obj39=tag_attribute,
            tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "31type2.nc", 362, 214),(char* )come_increment_ref_count(enum_attribute, "31type2.nc", 362, 215)), "31type2.nc", 362, 217);
            __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 362, 216);
            if(span$1char$p_operator_derefference(info->p)==58) {
                info->p->p++;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                multiple_assign_var2=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type=(struct sType* )come_increment_ref_count(multiple_assign_var2->v1, "31type2.nc", 368, 218);
                name=(char* )come_increment_ref_count(multiple_assign_var2->v2, "31type2.nc", 368, 219);
                err=multiple_assign_var2->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 368, 220);
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 371, 221);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 371, 222));
            }
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==123) {
                p_10=info->p->p;
                sline_11=info->sline;
                __right_value0 = (void*)0;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 377, 223));
                if((info->end-info->p->p)>=strlen("__attribute__")&&memcmp(info->p->p,"__attribute__",strlen("__attribute__"))==0) {
                    __right_value0 = (void*)0;
                    ((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
                    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 380, 224);
                }
                if(span$1char$p_operator_derefference(info->p)==59) {
                    info->p->p=head;
                    info->sline=head_sline;
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 386, 225, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 386, 226),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 386, 227),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 386, 228),(_Bool)0))), "31type2.nc", 386, 229);
                    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 386, 230));
                    (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 386, 231));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 386, 232));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 386, 233));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 386, 234):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 386, 235));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 386, 236);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 386, 237);
                    return __result_obj__0;
                }
                else {
                    anonymous_type=(_Bool)1;
                    __right_value0 = (void*)0;
                    __dec_obj40=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("","31type2.nc",390), "31type2.nc", 390, 239);
                    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 390, 238);
                    info->p->p=p_10;
                    info->sline=sline_11;
                    struct_define_parsed=(_Bool)1;
                    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 394, 240));
                    (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 394, 241));
                    break;
                }
            }
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            __dec_obj41=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 400, 243);
            __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 400, 242);
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            enum_attribute_after_name=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "31type2.nc", 404, 244);
            __right_value0 = (void*)0;
            __dec_obj42=tag_attribute,
            tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "31type2.nc", 405, 245),(char* )come_increment_ref_count(enum_attribute_after_name, "31type2.nc", 405, 246)), "31type2.nc", 405, 248);
            __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 405, 247);
            if(span$1char$p_operator_derefference(info->p)==58) {
                info->p->p++;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                multiple_assign_var3=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_12=(struct sType* )come_increment_ref_count(multiple_assign_var3->v1, "31type2.nc", 411, 249);
                name_13=(char* )come_increment_ref_count(multiple_assign_var3->v2, "31type2.nc", 411, 250);
                err_14=multiple_assign_var3->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 411, 251);
                come_call_finalizer(sType_finalize, type_12, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 414, 252);
                (name_13 = come_decrement_ref_count(name_13, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 414, 253));
            }
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            enum_attribute_after_type=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)1), "31type2.nc", 416, 254);
            __right_value0 = (void*)0;
            __dec_obj43=tag_attribute,
            tag_attribute=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "31type2.nc", 417, 255),(char* )come_increment_ref_count(enum_attribute_after_type, "31type2.nc", 417, 256)), "31type2.nc", 417, 258);
            __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 417, 257);
            if(span$1char$p_operator_derefference(info->p)==123) {
                p_15=info->p->p;
                sline_16=info->sline;
                __right_value0 = (void*)0;
                ((char* )(__right_value0=skip_block(info,(_Bool)0)));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 423, 259));
                if(span$1char$p_operator_derefference(info->p)==59) {
                    info->p->p=head;
                    info->sline=head_sline;
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 428, 260, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 428, 261),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 428, 262),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 428, 263),(_Bool)0))), "31type2.nc", 428, 264);
                    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 428, 265));
                    (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 428, 266));
                    (enum_attribute_after_name = come_decrement_ref_count(enum_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 428, 267));
                    (enum_attribute_after_type = come_decrement_ref_count(enum_attribute_after_type, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 428, 268));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 428, 269));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 428, 270));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 428, 271):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 428, 272));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 428, 273);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 428, 274);
                    return __result_obj__0;
                }
                else {
                    anonymous_type=(_Bool)1;
                    info->p->p=p_15;
                    info->sline=sline_16;
                    struct_define_parsed=(_Bool)1;
                    (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 435, 275));
                    (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 435, 276));
                    (enum_attribute_after_name = come_decrement_ref_count(enum_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 435, 277));
                    (enum_attribute_after_type = come_decrement_ref_count(enum_attribute_after_type, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 435, 278));
                    break;
                }
            }
            (asm_name = come_decrement_ref_count(asm_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 700, 279));
            (enum_attribute = come_decrement_ref_count(enum_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 700, 280));
            (enum_attribute_after_name = come_decrement_ref_count(enum_attribute_after_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 700, 281));
            (enum_attribute_after_type = come_decrement_ref_count(enum_attribute_after_type, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 700, 282));
        }
        else if(string_operator_equals(type_name,"long")) {
            {
                p_17=info->p->p;
                sline_18=info->sline;
                if(!(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95)) {
                    __right_value0 = (void*)0;
                    __dec_obj44=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("long","31type2.nc",446), "31type2.nc", 446, 284);
                    __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 446, 283);
                    break;
                }
                else {
                    p2=info->p->p;
                    sline2=info->sline;
                    __right_value0 = (void*)0;
                    __dec_obj45=type_name,
                    type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 453, 286);
                    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 453, 285);
                    if(string_operator_equals(type_name,"double")) {
                        long_=(_Bool)1;
                        break;
                    }
                    else if(string_operator_equals(type_name,"unsigned")) {
                        __right_value0 = (void*)0;
                        __dec_obj46=type_name,
                        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 460, 288);
                        __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 460, 287);
                        if(string_operator_equals(type_name,"int")) {
                            long_=(_Bool)1;
                            unsigned_=(_Bool)1;
                            break;
                        }
                    }
                    else if(string_operator_equals(type_name,"signed")) {
                        __right_value0 = (void*)0;
                        __dec_obj47=type_name,
                        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 469, 290);
                        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 469, 289);
                        if(string_operator_equals(type_name,"int")) {
                            long_=(_Bool)1;
                            unsigned_=(_Bool)0;
                            break;
                        }
                    }
                    else if(string_operator_equals(type_name,"long")) {
                        p_17=info->p->p;
                        sline_18=info->sline;
                        if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                            long_long=(_Bool)1;
                            __right_value0 = (void*)0;
                            __dec_obj48=type_name,
                            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 482, 292);
                            __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 482, 291);
                        }
                        else if(span$1char$p_operator_derefference(info->p)==58) {
                            __right_value0 = (void*)0;
                            __dec_obj49=type_name,
                            type_name=(char* )come_increment_ref_count(__builtin_string("long","31type2.nc",485), "31type2.nc", 485, 294);
                            __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 485, 293);
                            info->p->p=p2;
                            info->sline=sline2;
                            break;
                        }
                        else {
                            long_=(_Bool)1;
                            break;
                        }
                        if(string_operator_equals(type_name,"int")) {
                            long_long=(_Bool)1;
                            break;
                        }
                        else if(!is_type_name(type_name,info)) {
                            __right_value0 = (void*)0;
                            __dec_obj50=type_name,
                            type_name=(char* )come_increment_ref_count(__builtin_string("long","31type2.nc",500), "31type2.nc", 500, 296);
                            __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 500, 295);
                            long_long=(_Bool)1;
                            info->p->p=p_17;
                            info->sline=sline_18;
                            break;
                        }
                    }
                    else if(is_type_name(type_name,info)) {
                        if(long_) {
                            long_long=(_Bool)1;
                            long_=(_Bool)0;
                        }
                        else {
                            long_=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p->p=p_17;
                        info->sline=sline_18;
                        __right_value0 = (void*)0;
                        __dec_obj51=type_name,
                        type_name=(char* )come_increment_ref_count(__builtin_string("long","31type2.nc",521), "31type2.nc", 521, 298);
                        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 521, 297);
                        break;
                    }
                }
            }
        }
        else if(string_operator_equals(type_name,"signed")) {
            unsigned_=(_Bool)0;
            if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                p_19=info->p->p;
                sline_20=info->sline;
                __right_value0 = (void*)0;
                __dec_obj52=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 534, 300);
                __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 534, 299);
                if(string_operator_equals(type_name,"char")||string_operator_equals(type_name,"short")||string_operator_equals(type_name,"long")||string_operator_equals(type_name,"int")) {
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj53=type_name,
                    type_name=(char*)come_increment_ref_count(xsprintf("int"), "31type2.nc", 539, 302);
                    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 539, 301);
                    info->p->p=p_19;
                    info->sline=sline_20;
                    break;
                }
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj54=type_name,
                type_name=(char*)come_increment_ref_count(xsprintf("int"), "31type2.nc", 546, 304);
                __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 546, 303);
                break;
            }
        }
        else if(string_operator_equals(type_name,"unsigned")) {
            unsigned_=(_Bool)1;
            if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                p_21=info->p->p;
                sline_22=info->sline;
                __right_value0 = (void*)0;
                __dec_obj55=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 557, 306);
                __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 557, 305);
                if(string_operator_equals(type_name,"short")) {
                    if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                        p_23=info->p->p;
                        sline_24=info->sline;
                        __right_value0 = (void*)0;
                        __dec_obj56=type_name,
                        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 564, 308);
                        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 564, 307);
                        if(is_type_name(type_name,info)) {
                            short_=(_Bool)1;
                        }
                        else {
                            short_=(_Bool)1;
                            __right_value0 = (void*)0;
                            __dec_obj57=type_name,
                            type_name=(char* )come_increment_ref_count(__builtin_string("int","31type2.nc",571), "31type2.nc", 571, 310);
                            __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 571, 309);
                            info->p->p=p_23;
                            info->sline=sline_24;
                        }
                    }
                    else {
                        short_=(_Bool)1;
                        __right_value0 = (void*)0;
                        __dec_obj58=type_name,
                        type_name=(char* )come_increment_ref_count(__builtin_string("int","31type2.nc",579), "31type2.nc", 579, 312);
                        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 579, 311);
                        break;
                    }
                }
                else if(string_operator_equals(type_name,"long")) {
                    if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                        p_25=info->p->p;
                        sline_26=info->sline;
                        __right_value0 = (void*)0;
                        __dec_obj59=type_name,
                        type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 588, 314);
                        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 588, 313);
                        if(is_type_name(type_name,info)) {
                            long_=(_Bool)1;
                        }
                        else {
                            long_=(_Bool)1;
                            __right_value0 = (void*)0;
                            __dec_obj60=type_name,
                            type_name=(char* )come_increment_ref_count(__builtin_string("int","31type2.nc",595), "31type2.nc", 595, 316);
                            __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 595, 315);
                            info->p->p=p_25;
                            info->sline=sline_26;
                        }
                    }
                    else {
                        long_=(_Bool)1;
                        __right_value0 = (void*)0;
                        __dec_obj61=type_name,
                        type_name=(char* )come_increment_ref_count(__builtin_string("int","31type2.nc",603), "31type2.nc", 603, 318);
                        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 603, 317);
                        break;
                    }
                }
                else if(!is_type_name(type_name,info)) {
                    __right_value0 = (void*)0;
                    __dec_obj62=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("int","31type2.nc",608), "31type2.nc", 608, 320);
                    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 608, 319);
                    info->p->p=p_21;
                    info->sline=sline_22;
                    break;
                }
            }
            else {
                __right_value0 = (void*)0;
                __dec_obj63=type_name,
                type_name=(char* )come_increment_ref_count(__builtin_string("int","31type2.nc",615), "31type2.nc", 615, 322);
                __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 615, 321);
                break;
            }
        }
        else if(string_operator_equals(type_name,"signed")||string_operator_equals(type_name,"__signed__")) {
            unsigned_=(_Bool)0;
            p_27=info->p->p;
            sline_28=info->sline;
            __right_value0 = (void*)0;
            __dec_obj64=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 625, 324);
            __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 625, 323);
            if(span$1char$p_operator_derefference(info->p)==58&&*(info->p->p+1)==58) {
                __right_value0 = (void*)0;
                __dec_obj65=type_name,
                type_name=(char* )come_increment_ref_count(__builtin_string("int","31type2.nc",628), "31type2.nc", 628, 326);
                __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 628, 325);
                info->p->p=p_27;
                info->sline=sline_28;
                break;
            }
        }
        else if(string_operator_equals(type_name,"register")) {
            register_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj66=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 637, 328);
            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 637, 327);
        }
        else if(string_operator_equals(type_name,"restrict")) {
            restrict_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj67=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 642, 330);
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 642, 329);
        }
        else if(string_operator_equals(type_name,"_Addr")) {
            __right_value0 = (void*)0;
            __dec_obj68=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 645, 332);
            __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 645, 331);
        }
        else if(string_operator_equals(type_name,"__restrict")) {
            restrict_=(_Bool)1;
            __right_value0 = (void*)0;
            __dec_obj69=type_name,
            type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 650, 334);
            __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 650, 333);
        }
        else if(string_operator_equals(type_name,"tup")) {
            err_msg(info,"tup shorthand was removed. use tuple2/tuple3/... explicit types");
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 654, 335, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 654, 336),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 654, 337),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 654, 338),(_Bool)0))), "31type2.nc", 654, 339);
            (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 654, 340));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 654, 341));
            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 654, 342):(void*)0);
            (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 654, 343));
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 654, 344);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 654, 345);
            return __result_obj__0;
        }
        else if(string_operator_equals(type_name,"short")) {
            short_=(_Bool)0;
            if(span$1char$p_operator_derefference(info->p)==58) {
                break;
            }
            else if(xisalnum(*info->p->p)) {
                p_29=info->p->p;
                sline_30=info->sline;
                __right_value0 = (void*)0;
                __dec_obj70=type_name,
                type_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 665, 347);
                __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 665, 346);
                if(span$1char$p_operator_derefference(info->p)==58&&*(info->p->p+1)==58) {
                    __right_value0 = (void*)0;
                    __dec_obj71=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("short","31type2.nc",668), "31type2.nc", 668, 349);
                    __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 668, 348);
                    info->p->p=p_29;
                    info->sline=sline_30;
                    break;
                }
                if(string_operator_equals(type_name,"int")) {
                    short_=(_Bool)1;
                    break;
                }
                else if(string_operator_equals(type_name,"short")) {
                    short_=(_Bool)1;
                    break;
                }
                else if(is_type_name(type_name,info)) {
                    info->p->p=p_29;
                    info->sline=sline_30;
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj72=type_name,
                    type_name=(char* )come_increment_ref_count(__builtin_string("short","31type2.nc",687), "31type2.nc", 687, 351);
                    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 687, 350);
                    info->p->p=p_29;
                    info->sline=sline_30;
                    break;
                }
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    if((string_operator_equals(type_name,"typeof")||string_operator_equals(type_name,"__typeof__"))&&span$1char$p_operator_derefference(info->p)==40) {
        info->p->p++;
        skip_spaces_and_lf(info);
        no_comma=info->no_comma;
        info->no_comma=(_Bool)0;
        __right_value0 = (void*)0;
        exp=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "31type2.nc", 708, 352);
        info->no_comma=no_comma;
        expected_next_character(41,info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        type_31=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 713, 353, "struct sType* "), "31type2.nc", 713, 354),(char*)come_increment_ref_count(xsprintf("int"), "31type2.nc", 713, 355),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 713, 356);
        __dec_obj73=type_31->mTypeOfNode,
        type_31->mTypeOfNode=(struct sNode*)come_increment_ref_count(exp, "31type2.nc", 714, 358);
        (__dec_obj73 ? __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 714, 357) :0);
        var_name=((void*)0);
        __right_value0 = (void*)0;
        __dec_obj74=type_31,
        type_31=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_31, "31type2.nc", 718, 359),info), "31type2.nc", 718, 361);
        come_call_finalizer(sType_finalize, __dec_obj74,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 718, 360);
        attribute=((void*)0);
        if(parse_variable_name) {
            __right_value0 = (void*)0;
            __dec_obj75=var_name,
            var_name=(char* )come_increment_ref_count(parse_variable_name_fun(type_31,anonymous_name,(_Bool)0,(char* )come_increment_ref_count(attribute, "31type2.nc", 723, 362),info), "31type2.nc", 723, 364);
            __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 723, 363);
        }
                __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 725, 365, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 725, 366),(struct sType* )come_increment_ref_count(type_31, "31type2.nc", 725, 367),(char* )come_increment_ref_count(var_name, "31type2.nc", 725, 368),(_Bool)1))), "31type2.nc", 725, 369);
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 725, 370):(void*)0);
        come_call_finalizer(sType_finalize, type_31, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 725, 371);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 725, 372));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 725, 373));
        (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 725, 374));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 725, 375));
        ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 725, 376):(void*)0);
        (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 725, 377));
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 725, 378);
        neo_current_frame = fr.prev;
        come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 725, 379);
        return __result_obj__0;
        ((exp) ? exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 728, 380):(void*)0);
        come_call_finalizer(sType_finalize, type_31, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 728, 381);
        (var_name = come_decrement_ref_count(var_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 728, 382));
        (attribute = come_decrement_ref_count(attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 728, 383));
    }
    __right_value0 = (void*)0;
    attribute_32=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)0), "31type2.nc", 728, 384);
    if(string_operator_not_equals(attribute_before,"")) {
        if(string_operator_equals(attribute_32,"")) {
            __dec_obj76=attribute_32,
            attribute_32=(char* )come_increment_ref_count(attribute_before, "31type2.nc", 731, 386);
            __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 731, 385);
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj77=attribute_32,
            attribute_32=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(attribute_before," "))),attribute_32), "31type2.nc", 734, 388);
            __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 734, 387);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 734, 389));
        }
        __right_value0 = (void*)0;
        __dec_obj78=attribute_before,
        attribute_before=(char*)come_increment_ref_count(xsprintf(""), "31type2.nc", 736, 391);
        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 736, 390);
    }
    if(!struct_define_parsed&&(struct_||enum_)&&string_operator_not_equals(tag_attribute,"")) {
        __right_value0 = (void*)0;
        __dec_obj79=attribute_32,
        attribute_32=(char* )come_increment_ref_count(merge_tag_attribute((char* )come_increment_ref_count(tag_attribute, "31type2.nc", 739, 392),(char* )come_increment_ref_count(attribute_32, "31type2.nc", 739, 393)), "31type2.nc", 739, 395);
        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 739, 394);
    }
    skip_pointer_attribute(info);
    pointer_num=0;
    __right_value0 = (void*)0;
    pointer_attribute=(char*)come_increment_ref_count(xsprintf(""), "31type2.nc", 745, 396);
    heap=(_Bool)0;
    refference=(_Bool)0;
    no_refference=(_Bool)0;
    channel=(_Bool)0;
    deffer_=(_Bool)0;
    any_class=(_Bool)0;
    vtable=(_Bool)0;
    while(1) {
        if(span$1char$p_operator_derefference(info->p)==42) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            pointer_attr=(char* )come_increment_ref_count(parse_pointer_qualifier(info), "31type2.nc", 757, 397);
            if(string_operator_not_equals(pointer_attr,"")) {
                if(string_operator_not_equals(pointer_attribute,"")) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj80=pointer_attribute,
                    pointer_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(pointer_attribute," "))),pointer_attr), "31type2.nc", 760, 399);
                    __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 760, 398);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 760, 400));
                }
                else {
                    __dec_obj81=pointer_attribute,
                    pointer_attribute=(char* )come_increment_ref_count(pointer_attr, "31type2.nc", 763, 402);
                    __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 763, 401);
                }
            }
            pointer_num++;
            (pointer_attr = come_decrement_ref_count(pointer_attr, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 791, 403));
        }
        else if(span$1char$p_operator_derefference(info->p)==37) {
            info->p->p++;
            skip_spaces_and_lf(info);
            heap=(_Bool)1;
        }
        else if(gComePthread&&span$1char$p_operator_derefference(info->p)==124) {
            info->p->p++;
            skip_spaces_and_lf(info);
            channel=(_Bool)1;
        }
        else if(span$1char$p_operator_derefference(info->p)==64) {
            info->p->p++;
            while(xisalnum(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                info->p->p++;
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name=((void*)0);
    if(span$1char$p_operator_derefference(info->p)==58&&*(info->p->p+1)!=58&&tuple_) {
        info->p->p++;
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        __dec_obj82=tuple_name,
        tuple_name=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 800, 405);
        __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 800, 404);
    }
    if(atomic_&&span$1char$p_operator_derefference(info->p)==41) {
        expected_next_character(41,info);
    }
    lambda_flag=(_Bool)0;
    {
        pX=info->p->p;
        slineX=info->sline;
        if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
            __right_value0 = (void*)0;
            (void)((char* )(__right_value0=parse_word((_Bool)0,info)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 813, 406));
            if(span$1char$p_operator_derefference(info->p)==40&&info->in_typedef) {
                lambda_flag=(_Bool)1;
            }
        }
        info->p->p=pX;
        info->sline=slineX;
    }
    function_pointer_flag=(_Bool)0;
    pointer_to_array_flag=(_Bool)0;
    {
        p_35=info->p->p;
        sline_36=info->sline;
        if(span$1char$p_operator_derefference(info->p)==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(span$1char$p_operator_derefference(info->p)==40) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            if(span$1char$p_operator_derefference(info->p)==42||span$1char$p_operator_derefference(info->p)==94) {
                while(span$1char$p_operator_derefference(info->p)==42||span$1char$p_operator_derefference(info->p)==94) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                function_pointer_flag=(_Bool)1;
                word=((void*)0);
                if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                    __right_value0 = (void*)0;
                    __dec_obj83=word,
                    word=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 854, 408);
                    __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 854, 407);
                }
                if(span$1char$p_operator_derefference(info->p)==91) {
                    pointer_to_array_flag=(_Bool)1;
                    while(span$1char$p_operator_derefference(info->p)==91) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        if(span$1char$p_operator_derefference(info->p)==93) {
                            info->p->p++;
                            skip_spaces_and_lf(info);
                            break;
                        }
                        no_output_come_code=info->no_output_come_code;
                        info->no_output_come_code=(_Bool)1;
                        __right_value0 = (void*)0;
                        exp_37=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "31type2.nc", 870, 409);
                        info->no_output_come_code=no_output_come_code;
                        if(span$1char$p_operator_derefference(info->p)==93) {
                            info->p->p++;
                            skip_spaces_and_lf(info);
                        }
                        ((exp_37) ? exp_37 = come_decrement_ref_count(exp_37, ((struct sNode*)exp_37)->finalize, ((struct sNode*)exp_37)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 879, 410):(void*)0);
                    }
                    if(span$1char$p_operator_derefference(info->p)==41) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        if(span$1char$p_operator_derefference(info->p)==40) {
                            function_pointer_flag=(_Bool)1;
                            pointer_to_array_flag=(_Bool)0;
                        }
                        else if(span$1char$p_operator_derefference(info->p)==91) {
                            function_pointer_flag=(_Bool)0;
                            pointer_to_array_flag=(_Bool)1;
                        }
                    }
                }
                else if(span$1char$p_operator_derefference(info->p)==41) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    if(span$1char$p_operator_derefference(info->p)==41) {
                        info->p->p++;
                        skip_spaces_and_lf(info);
                        pointer_to_array_flag=(_Bool)1;
                        function_pointer_flag=(_Bool)0;
                    }
                    if(span$1char$p_operator_derefference(info->p)==91) {
                        pointer_to_array_flag=(_Bool)1;
                        function_pointer_flag=(_Bool)0;
                    }
                    else if(span$1char$p_operator_derefference(info->p)==40) {
                        function_pointer_flag=(_Bool)1;
                    }
                }
                (word = come_decrement_ref_count(word, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 925, 411));
            }
            else if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                __right_value0 = (void*)0;
                word_38=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 914, 412);
                if(span$1char$p_operator_derefference(info->p)==41) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    if(span$1char$p_operator_derefference(info->p)==40) {
                        function_pointer_flag=(_Bool)1;
                    }
                }
                (word_38 = come_decrement_ref_count(word_38, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 925, 413));
            }
        }
        info->p->p=p_35;
        info->sline=sline_36;
    }
    var_name_between_brace=(_Bool)0;
    {
        p_39=info->p->p;
        sline_40=info->sline;
        if(span$1char$p_operator_derefference(info->p)==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
                __right_value0 = (void*)0;
                word_41=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 943, 414);
                if(is_type_name(word_41,info)) {
                }
                else if(span$1char$p_operator_derefference(info->p)==41) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    if(span$1char$p_operator_derefference(info->p)!=40) {
                        var_name_between_brace=(_Bool)1;
                    }
                }
                (word_41 = come_decrement_ref_count(word_41, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 956, 415));
            }
        }
        info->p->p=p_39;
        info->sline=sline_40;
    }
    if(anonymous_type&&span$1char$p_operator_derefference(info->p)==123) {
        static int anonymous_num=0;
        if(struct_) {
            anonymous=(_Bool)0;
            if(string_operator_equals(type_name,"")) {
                anonymous=(_Bool)1;
                __right_value0 = (void*)0;
                __dec_obj84=type_name,
                type_name=(char* )come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num), "31type2.nc", 969, 417);
                __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 969, 416);
            }
            __right_value0 = (void*)0;
            node_42=(struct sNode*)come_increment_ref_count(parse_struct((char* )come_increment_ref_count(type_name, "31type2.nc", 972, 418),(char* )come_increment_ref_count(tag_attribute, "31type2.nc", 972, 419),info,anonymous), "31type2.nc", 972, 420);
            Value_43=node_compile(node_42,info);
            if(!Value_43) {
                err_msg(info,"parse_struct is failed");
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 976, 421, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 976, 422),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 976, 423),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 976, 424),(_Bool)0))), "31type2.nc", 976, 425);
                ((node_42) ? node_42 = come_decrement_ref_count(node_42, ((struct sNode*)node_42)->finalize, ((struct sNode*)node_42)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 976, 426):(void*)0);
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 976, 427));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 976, 428));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 976, 429):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 976, 430));
                (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 976, 431));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 976, 432));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 976, 433));
                come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 976, 434);
                (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 976, 435));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 976, 436);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 976, 437);
                return __result_obj__0;
            }
            pointer_num_44=0;
            while(span$1char$p_operator_derefference(info->p)==42) {
                info->p->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_44++;
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj119=type_33,
            type_33=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 990, 646);
            come_call_finalizer(sType_finalize, __dec_obj119,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 990, 645);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 990, 647);
            if(type_33==((void*)0)) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj120=type_33,
                type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 993, 648, "struct sType* "), "31type2.nc", 993, 649),(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",993), "31type2.nc", 993, 650),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 993, 652);
                come_call_finalizer(sType_finalize, __dec_obj120,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 993, 651);
            }
            __right_value0 = (void*)0;
            klass=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,type_name), "31type2.nc", 995, 691);
            klass->mAnonymous=(_Bool)1;
            type_33->mAnonymous=anonymous;
            type_33->mAnonymous=anonymous;
            __right_value0 = (void*)0;
            __dec_obj121=type_33->mAnonymousName,
            type_33->mAnonymousName=(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",999), "31type2.nc", 999, 693);
            __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 999, 692);
            type_33->mPointerNum=pointer_num_44;
            ((node_42) ? node_42 = come_decrement_ref_count(node_42, ((struct sNode*)node_42)->finalize, ((struct sNode*)node_42)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1072, 694):(void*)0);
            come_call_finalizer(sClass_finalize, klass, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1072, 695);
        }
        else if(enum_) {
            if(string_operator_equals(type_name,"")) {
                if(!info->no_output_err) {
                    __right_value0 = (void*)0;
                    __dec_obj122=type_name,
                    type_name=(char* )come_increment_ref_count(xsprintf("anonymous_typeY%d",anonymous_num), "31type2.nc", 1006, 697);
                    __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1006, 696);
                }
                else {
                    __right_value0 = (void*)0;
                    __dec_obj123=type_name,
                    type_name=(char* )come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num), "31type2.nc", 1009, 699);
                    __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1009, 698);
                }
            }
            __right_value0 = (void*)0;
            node_53=(struct sNode*)come_increment_ref_count(parse_enum((char* )come_increment_ref_count(type_name, "31type2.nc", 1013, 700),(char* )come_increment_ref_count(tag_attribute, "31type2.nc", 1013, 701),info), "31type2.nc", 1013, 702);
            if(!info->no_output_err) {
                Value_54=node_compile(node_53,info);
                if(!Value_54) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1018, 703, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1018, 704),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 1018, 705),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 1018, 706),(_Bool)0))), "31type2.nc", 1018, 707);
                    ((node_53) ? node_53 = come_decrement_ref_count(node_53, ((struct sNode*)node_53)->finalize, ((struct sNode*)node_53)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1018, 708):(void*)0);
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1018, 709));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1018, 710));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1018, 711):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1018, 712));
                    (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1018, 713));
                    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1018, 714));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1018, 715));
                    come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1018, 716);
                    (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1018, 717));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1018, 718);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1018, 719);
                    return __result_obj__0;
                }
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj124=type_33,
            type_33=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 1022, 721);
            come_call_finalizer(sType_finalize, __dec_obj124,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1022, 720);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1022, 722);
            if(type_33==((void*)0)) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj125=type_33,
                type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1025, 723, "struct sType* "), "31type2.nc", 1025, 724),(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1025), "31type2.nc", 1025, 725),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1025, 727);
                come_call_finalizer(sType_finalize, __dec_obj125,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1025, 726);
            }
            ((node_53) ? node_53 = come_decrement_ref_count(node_53, ((struct sNode*)node_53)->finalize, ((struct sNode*)node_53)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1072, 728):(void*)0);
        }
        else if(union_) {
            anonymous_55=(_Bool)0;
            if(string_operator_equals(type_name,"")) {
                __right_value0 = (void*)0;
                __dec_obj126=type_name,
                type_name=(char* )come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num), "31type2.nc", 1031, 730);
                __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1031, 729);
                anonymous_55=(_Bool)1;
            }
            __right_value0 = (void*)0;
            node_56=(struct sNode*)come_increment_ref_count(parse_union((char* )come_increment_ref_count(type_name, "31type2.nc", 1035, 731),(char* )come_increment_ref_count(tag_attribute, "31type2.nc", 1035, 732),info,(_Bool)1), "31type2.nc", 1035, 733);
            Value_57=node_compile(node_56,info);
            if(!Value_57) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1039, 734, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1039, 735),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 1039, 736),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 1039, 737),(_Bool)0))), "31type2.nc", 1039, 738);
                ((node_56) ? node_56 = come_decrement_ref_count(node_56, ((struct sNode*)node_56)->finalize, ((struct sNode*)node_56)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1039, 739):(void*)0);
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1039, 740));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1039, 741));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1039, 742):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1039, 743));
                (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1039, 744));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1039, 745));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1039, 746));
                come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1039, 747);
                (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1039, 748));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1039, 749);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1039, 750);
                return __result_obj__0;
            }
            pointer_num_58=0;
            while(span$1char$p_operator_derefference(info->p)==42) {
                info->p->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_58++;
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj127=type_33,
            type_33=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 1053, 752);
            come_call_finalizer(sType_finalize, __dec_obj127,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1053, 751);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1053, 753);
            if(type_33==((void*)0)) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj128=type_33,
                type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1056, 754, "struct sType* "), "31type2.nc", 1056, 755),(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1056), "31type2.nc", 1056, 756),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1056, 758);
                come_call_finalizer(sType_finalize, __dec_obj128,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1056, 757);
            }
            __right_value0 = (void*)0;
            klass_59=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_operator_load_element(info->classes,type_name), "31type2.nc", 1060, 759);
            klass_59->mAnonymous=(_Bool)1;
            type_33->mPointerNum=pointer_num_58;
            type_33->mAnonymous=anonymous_55;
            __right_value0 = (void*)0;
            __dec_obj129=type_33->mAnonymousName,
            type_33->mAnonymousName=(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1065), "31type2.nc", 1065, 761);
            __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1065, 760);
            ((node_56) ? node_56 = come_decrement_ref_count(node_56, ((struct sNode*)node_56)->finalize, ((struct sNode*)node_56)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1072, 762):(void*)0);
            come_call_finalizer(sClass_finalize, klass_59, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1072, 763);
        }
        else {
            err_msg(info,"unexpected { character");
                        __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1069, 764, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1069, 765),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 1069, 766),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 1069, 767),(_Bool)0))), "31type2.nc", 1069, 768);
            (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1069, 769));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1069, 770));
            ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1069, 771):(void*)0);
            (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1069, 772));
            (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1069, 773));
            (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1069, 774));
            (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1069, 775));
            come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1069, 776);
            (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1069, 777));
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1069, 778);
            neo_current_frame = fr.prev;
            come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1069, 779);
            return __result_obj__0;
        }
        __right_value0 = (void*)0;
        attribute_60=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)0), "31type2.nc", 1072, 780);
        if(!parse_variable_name) {
            append_attribute_to_type(type_33,(char* )come_increment_ref_count(attribute_60, "31type2.nc", 1075, 781),(_Bool)0,info);
        }
        if(parse_variable_name) {
            __right_value0 = (void*)0;
            __dec_obj130=var_name_34,
            var_name_34=(char* )come_increment_ref_count(parse_variable_name_fun(type_33,anonymous_name,var_name_between_brace,(char* )come_increment_ref_count(attribute_60, "31type2.nc", 1079, 782),info), "31type2.nc", 1079, 784);
            __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1079, 783);
        }
        (attribute_60 = come_decrement_ref_count(attribute_60, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1633, 785));
    }
    else if(lambda_flag) {
        if(__right_value0 = (void*)0,
({(_conditional_value_X0=(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1084, 786);
_conditional_value_X0;})) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj131=result_type,
            result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 1085, 788);
            come_call_finalizer(sType_finalize, __dec_obj131,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1085, 787);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1085, 789);
            __right_value0 = (void*)0;
            result_type->mClass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,result_type->mClass->mName)));
        }
        else if(list$1char$ph_contained(info->generics_type_names,type_name,(_Bool)0)) {
            for(i=0            ;i<list$1char$ph_length(info->generics_type_names);i++){
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X1=(string_operator_equals(((char* )(__right_value1=list$1char$ph_operator_load_element(info->generics_type_names,i))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1090, 808));
_conditional_value_X1;})) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj132=result_type,
                    result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1091, 809, "struct sType* "), "31type2.nc", 1091, 810),(char* )come_increment_ref_count(xsprintf("__generics_type%d",i), "31type2.nc", 1091, 811),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1091, 813);
                    come_call_finalizer(sType_finalize, __dec_obj132,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1091, 812);
                }
            }
        }
        else if(list$1char$ph_contained(info->method_generics_type_names,type_name,(_Bool)0)) {
            for(i_65=0            ;i_65<list$1char$ph_length(info->method_generics_type_names);i_65++){
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X2=(string_operator_equals(((char* )(__right_value1=list$1char$ph_operator_load_element(info->method_generics_type_names,i_65))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1097, 814));
_conditional_value_X2;})) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj133=result_type,
                    result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1098, 815, "struct sType* "), "31type2.nc", 1098, 816),(char* )come_increment_ref_count(xsprintf("__mgenerics_type%d",i_65), "31type2.nc", 1098, 817),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1098, 819);
                    come_call_finalizer(sType_finalize, __dec_obj133,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1098, 818);
                }
            }
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj134=result_type,
            result_type=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 1104, 821);
            come_call_finalizer(sType_finalize, __dec_obj134,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1104, 820);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1104, 822);
            if(result_type==((void*)0)) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj135=result_type,
                result_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1107, 823, "struct sType* "), "31type2.nc", 1107, 824),(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1107), "31type2.nc", 1107, 825),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1107, 827);
                come_call_finalizer(sType_finalize, __dec_obj135,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1107, 826);
            }
        }
        apply_type_qualifiers(result_type,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
        __dec_obj136=result_type->mAlignas,
        result_type->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "31type2.nc", 1112, 829);
        (__dec_obj136 ? __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 1112, 828) :0);
        result_type->mPointerNum=pointer_num;
        result_type->mHeap=result_type->mHeap||heap;
        result_type->mChannel=result_type->mChannel||channel;
        result_type->mDefferRightValue=result_type->mDefferRightValue||deffer_;
        merge_pointer_attribute_to_type(result_type,(char* )come_increment_ref_count(pointer_attribute, "31type2.nc", 1117, 830));
        __right_value0 = (void*)0;
        __dec_obj137=var_name_34,
        var_name_34=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 1119, 832);
        __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1119, 831);
        __right_value0 = (void*)0;
        multiple_assign_var4=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,(_Bool)0)));
        param_types=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var4->v1, "31type2.nc", 1121, 833);
        param_names=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var4->v2, "31type2.nc", 1121, 834);
        param_default_parametors=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var4->v3, "31type2.nc", 1121, 835);
        var_args=multiple_assign_var4->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1121, 839);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj138=type_33,
        type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1123, 840, "struct sType* "), "31type2.nc", 1123, 841),(char*)come_increment_ref_count(xsprintf("lambda"), "31type2.nc", 1123, 842),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1123, 844);
        come_call_finalizer(sType_finalize, __dec_obj138,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1123, 843);
        __dec_obj139=type_33->mResultType,
        type_33->mResultType=(struct sType* )come_increment_ref_count(result_type, "31type2.nc", 1125, 846);
        come_call_finalizer(sType_finalize, __dec_obj139,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1125, 845);
        __dec_obj140=type_33->mParamTypes,
        type_33->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types, "31type2.nc", 1126, 848);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj140,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1126, 847);
        __dec_obj141=type_33->mParamNames,
        type_33->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names, "31type2.nc", 1127, 850);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj141,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1127, 849);
        type_33->mVarArgs=var_args;
        type_33->mExtern=extern_;
        come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1633, 851);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1633, 852);
        come_call_finalizer(list$1char$ph$p_finalize, param_names, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1633, 853);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1633, 854);
    }
    else if(pointer_to_array_flag) {
        expected_next_character(40,info);
        skip_pointer_attribute(info);
        pointer_paren=(_Bool)0;
        paren_num=1;
        if(span$1char$p_operator_derefference(info->p)==40) {
            pointer_paren=(_Bool)1;
            info->p->p++;
            skip_spaces_and_lf(info);
            paren_num++;
        }
        array_pointer_num=0;
        while(span$1char$p_operator_derefference(info->p)==42||span$1char$p_operator_derefference(info->p)==94) {
            info->p->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            array_pointer_num++;
        }
        skip_pointer_attribute(info);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __dec_obj142=type_33,
        type_33=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 1155, 856);
        come_call_finalizer(sType_finalize, __dec_obj142,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1155, 855);
        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1155, 857);
        if(type_33==((void*)0)) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj143=type_33,
            type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1158, 858, "struct sType* "), "31type2.nc", 1158, 859),(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1158), "31type2.nc", 1158, 860),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1158, 862);
            come_call_finalizer(sType_finalize, __dec_obj143,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1158, 861);
        }
        apply_type_qualifiers(type_33,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
        __dec_obj144=type_33->mAlignas,
        type_33->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "31type2.nc", 1162, 864);
        (__dec_obj144 ? __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 1162, 863) :0);
        type_33->mPointerNum+=pointer_num;
        type_33->mHeap=type_33->mHeap||heap;
        type_33->mChannel=type_33->mChannel||channel;
        __dec_obj145=type_33->mTupleName,
        type_33->mTupleName=(char* )come_increment_ref_count(tuple_name, "31type2.nc", 1166, 866);
        __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1166, 865);
        type_33->mDefferRightValue=type_33->mDefferRightValue||deffer_;
        merge_pointer_attribute_to_type(type_33,(char* )come_increment_ref_count(pointer_attribute, "31type2.nc", 1168, 867));
        if(xisalpha(span$1char$p_operator_derefference(info->p))||span$1char$p_operator_derefference(info->p)==95) {
            __right_value0 = (void*)0;
            __dec_obj146=var_name_34,
            var_name_34=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 1171, 869);
            __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1171, 868);
        }
        else {
            __right_value0 = (void*)0;
            __dec_obj147=var_name_34,
            var_name_34=(char*)come_increment_ref_count(xsprintf(""), "31type2.nc", 1174, 871);
            __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1174, 870);
        }
        if(span$1char$p_operator_derefference(info->p)==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
            paren_num--;
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        array=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "31type2.nc", 1182, 872, "struct list$1sNode$ph*"), "31type2.nc", 1182, 873)), "31type2.nc", 1182, 874);
        while(span$1char$p_operator_derefference(info->p)==91) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            node_66=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "31type2.nc", 1187, 875);
            list$1sNode$ph_add(array,(struct sNode*)come_increment_ref_count(node_66, "31type2.nc", 1189, 876));
            if(span$1char$p_operator_derefference(info->p)==93) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            ((node_66) ? node_66 = come_decrement_ref_count(node_66, ((struct sNode*)node_66)->finalize, ((struct sNode*)node_66)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1196, 877):(void*)0);
        }
        if(paren_num>0&&span$1char$p_operator_derefference(info->p)==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __dec_obj148=type_33->mVarNameArrayNum,
            type_33->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array, "31type2.nc", 1200, 879);
            come_call_finalizer(list$1sNode$ph_finalize, __dec_obj148,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1200, 878);
        }
        else {
            ({            __current_stack1__.pointer_paren = &pointer_paren;
            __current_stack1__.paren_num = &paren_num;
            __current_stack1__.array_pointer_num = &array_pointer_num;
            __current_stack1__.array = &array;
            __current_stack1__.info = &info;
            __current_stack1__.parse_variable_name = &parse_variable_name;
            __current_stack1__.parse_multiple_type = &parse_multiple_type;
            __current_stack1__.in_function_parametor = &in_function_parametor;
            __current_stack1__.head = &head;
            __current_stack1__.head_sline = &head_sline;
            __current_stack1__.attribute_before = &attribute_before;
            __current_stack1__.type_name = &type_name;
            __current_stack1__.norecord = &norecord;
            __current_stack1__.constant = &constant;
            __current_stack1__.static_ = &static_;
            __current_stack1__.volatile_ = &volatile_;
            __current_stack1__.register_ = &register_;
            __current_stack1__.unsigned_ = &unsigned_;
            __current_stack1__.long_ = &long_;
            __current_stack1__.long_long = &long_long;
            __current_stack1__.short_ = &short_;
            __current_stack1__.restrict_ = &restrict_;
            __current_stack1__.struct_ = &struct_;
            __current_stack1__.union_ = &union_;
            __current_stack1__.enum_ = &enum_;
            __current_stack1__.no_heap = &no_heap;
            __current_stack1__.extern_ = &extern_;
            __current_stack1__.inline_ = &inline_;
            __current_stack1__.uniq_ = &uniq_;
            __current_stack1__.tuple_ = &tuple_;
            __current_stack1__.original_var_name = &original_var_name;
            __current_stack1__.complex_ = &complex_;
            __current_stack1__.type_name_ = &type_name_;
            __current_stack1__.noreturn_ = &noreturn_;
            __current_stack1__.weak_ = &weak_;
            __current_stack1__.alignas_ = &alignas_;
            __current_stack1__.alignas_double = &alignas_double;
            __current_stack1__.tag_attribute = &tag_attribute;
            __current_stack1__.struct_define_parsed = &struct_define_parsed;
            __current_stack1__.anonymous_type = &anonymous_type;
            __current_stack1__.anonymous_name = &anonymous_name;
            __current_stack1__.atomic_ = &atomic_;
            __current_stack1__.thread_local = &thread_local;
            __current_stack1__.thread_ = &thread_;
            __current_stack1__.attribute_32 = &attribute_32;
            __current_stack1__.pointer_num = &pointer_num;
            __current_stack1__.pointer_attribute = &pointer_attribute;
            __current_stack1__.heap = &heap;
            __current_stack1__.refference = &refference;
            __current_stack1__.no_refference = &no_refference;
            __current_stack1__.channel = &channel;
            __current_stack1__.deffer_ = &deffer_;
            __current_stack1__.any_class = &any_class;
            __current_stack1__.vtable = &vtable;
            __current_stack1__.tuple_name = &tuple_name;
            __current_stack1__.lambda_flag = &lambda_flag;
            __current_stack1__.type_33 = &type_33;
            __current_stack1__.var_name_34 = &var_name_34;
            __current_stack1__.function_pointer_flag = &function_pointer_flag;
            __current_stack1__.pointer_to_array_flag = &pointer_to_array_flag;
            __current_stack1__.var_name_between_brace = &var_name_between_brace;
            })            ,            list$1sNode$ph_each(array,&__current_stack1__,(void*)method_block1_31type2nc);
        }
        while(span$1char$p_operator_derefference(info->p)==91) {
            info->p->p++;
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==93) {
                info->p->p++;
                skip_spaces_and_lf(info);
                type_33->mArrayPointerType=(_Bool)1;
                break;
            }
            __right_value0 = (void*)0;
            node_67=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "31type2.nc", 1219, 883);
            list$1sNode$ph_add(type_33->mArrayNum,(struct sNode*)come_increment_ref_count(node_67, "31type2.nc", 1221, 884));
            if(span$1char$p_operator_derefference(info->p)==93) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            ((node_67) ? node_67 = come_decrement_ref_count(node_67, ((struct sNode*)node_67)->finalize, ((struct sNode*)node_67)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1229, 885):(void*)0);
        }
        type_33->mArrayPointerNum=array_pointer_num;
        type_33->mPointerParen=pointer_paren;
        come_call_finalizer(list$1sNode$ph$p_finalize, array, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1633, 886);
    }
    else if(function_pointer_flag) {
        info->p->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        __right_value0 = (void*)0;
        function_pointer_attribute=(char*)come_increment_ref_count(xsprintf(""), "31type2.nc", 1237, 887);
        function_pointer_num=0;
        while(span$1char$p_operator_derefference(info->p)==42||span$1char$p_operator_derefference(info->p)==94) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            pointer_attr_68=(char* )come_increment_ref_count(parse_pointer_qualifier(info), "31type2.nc", 1243, 888);
            if(string_operator_not_equals(pointer_attr_68,"")) {
                if(string_operator_not_equals(function_pointer_attribute,"")) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj149=function_pointer_attribute,
                    function_pointer_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(function_pointer_attribute," "))),pointer_attr_68), "31type2.nc", 1246, 890);
                    __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1246, 889);
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1246, 891));
                }
                else {
                    __dec_obj150=function_pointer_attribute,
                    function_pointer_attribute=(char* )come_increment_ref_count(pointer_attr_68, "31type2.nc", 1249, 893);
                    __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1249, 892);
                }
            }
            function_pointer_num++;
            (pointer_attr_68 = come_decrement_ref_count(pointer_attr_68, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1255, 894));
        }
        __right_value0 = (void*)0;
        pointer_attr2=(char* )come_increment_ref_count(parse_pointer_qualifier(info), "31type2.nc", 1255, 895);
        if(string_operator_not_equals(pointer_attr2,"")) {
            if(string_operator_not_equals(function_pointer_attribute,"")) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj151=function_pointer_attribute,
                function_pointer_attribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(function_pointer_attribute," "))),pointer_attr2), "31type2.nc", 1258, 897);
                __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1258, 896);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1258, 898));
            }
            else {
                __dec_obj152=function_pointer_attribute,
                function_pointer_attribute=(char* )come_increment_ref_count(pointer_attr2, "31type2.nc", 1261, 900);
                __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1261, 899);
            }
        }
        if(__right_value0 = (void*)0,
({(_conditional_value_X3=(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1266, 901);
_conditional_value_X3;})) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj153=result_type_69,
            result_type_69=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 1267, 903);
            come_call_finalizer(sType_finalize, __dec_obj153,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1267, 902);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1267, 904);
            __right_value0 = (void*)0;
            result_type_69->mClass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,result_type_69->mClass->mName)));
        }
        else if(list$1char$ph_contained(info->generics_type_names,type_name,(_Bool)0)) {
            for(i_70=0            ;i_70<list$1char$ph_length(info->generics_type_names);i_70++){
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X4=(string_operator_equals(((char* )(__right_value1=list$1char$ph_operator_load_element(info->generics_type_names,i_70))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1272, 905));
_conditional_value_X4;})) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj154=result_type_69,
                    result_type_69=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1273, 906, "struct sType* "), "31type2.nc", 1273, 907),(char* )come_increment_ref_count(xsprintf("__generics_type%d",i_70), "31type2.nc", 1273, 908),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1273, 910);
                    come_call_finalizer(sType_finalize, __dec_obj154,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1273, 909);
                }
            }
        }
        else if(list$1char$ph_contained(info->method_generics_type_names,type_name,(_Bool)0)) {
            for(i_71=0            ;i_71<list$1char$ph_length(info->method_generics_type_names);i_71++){
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X5=(string_operator_equals(((char* )(__right_value1=list$1char$ph_operator_load_element(info->method_generics_type_names,i_71))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1279, 911));
_conditional_value_X5;})) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj155=result_type_69,
                    result_type_69=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1280, 912, "struct sType* "), "31type2.nc", 1280, 913),(char* )come_increment_ref_count(xsprintf("__mgenerics_type%d",i_71), "31type2.nc", 1280, 914),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1280, 916);
                    come_call_finalizer(sType_finalize, __dec_obj155,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1280, 915);
                }
            }
        }
        else {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj156=result_type_69,
            result_type_69=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 1285, 918);
            come_call_finalizer(sType_finalize, __dec_obj156,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1285, 917);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1285, 919);
            if(result_type_69==((void*)0)) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj157=result_type_69,
                result_type_69=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1288, 920, "struct sType* "), "31type2.nc", 1288, 921),(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1288), "31type2.nc", 1288, 922),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1288, 924);
                come_call_finalizer(sType_finalize, __dec_obj157,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1288, 923);
            }
        }
        apply_type_qualifiers(result_type_69,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
        __dec_obj158=result_type_69->mAlignas,
        result_type_69->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "31type2.nc", 1293, 926);
        (__dec_obj158 ? __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 1293, 925) :0);
        result_type_69->mPointerNum+=pointer_num;
        result_type_69->mHeap=result_type_69->mHeap||heap;
        result_type_69->mChannel=result_type_69->mChannel||channel;
        result_type_69->mDefferRightValue=result_type_69->mDefferRightValue||deffer_;
        merge_pointer_attribute_to_type(result_type_69,(char* )come_increment_ref_count(pointer_attribute, "31type2.nc", 1298, 927));
        paren_flag=(_Bool)0;
        if(span$1char$p_operator_derefference(info->p)==40) {
            info->p->p++;
            skip_spaces_and_lf(info);
            paren_flag=(_Bool)1;
        }
        array_pointer=0;
        while(span$1char$p_operator_derefference(info->p)==42) {
            info->p->p++;
            skip_spaces_and_lf(info);
            array_pointer++;
        }
        if(xisalnum(*info->p->p)||span$1char$p_operator_derefference(info->p)==95) {
            __right_value0 = (void*)0;
            __dec_obj159=var_name_34,
            var_name_34=(char* )come_increment_ref_count(parse_word((_Bool)0,info), "31type2.nc", 1315, 929);
            __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1315, 928);
            if(!paren_flag&&span$1char$p_operator_derefference(info->p)==40) {
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1317, 930, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1317, 931),(struct sType* )come_increment_ref_count(result_type_69, "31type2.nc", 1317, 932),(char* )come_increment_ref_count(var_name_34, "31type2.nc", 1317, 933),(_Bool)0))), "31type2.nc", 1317, 934);
                (function_pointer_attribute = come_decrement_ref_count(function_pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1317, 935));
                (pointer_attr2 = come_decrement_ref_count(pointer_attr2, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1317, 936));
                come_call_finalizer(sType_finalize, result_type_69, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1317, 937);
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1317, 938));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1317, 939));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1317, 940):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1317, 941));
                (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1317, 942));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1317, 943));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1317, 944));
                come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1317, 945);
                (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1317, 946));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1317, 947);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1317, 948);
                return __result_obj__0;
            }
        }
        else {
            static int num_anonymous_var_name=0;
            num_anonymous_var_name++;
            __right_value0 = (void*)0;
            __dec_obj160=var_name_34,
            var_name_34=(char* )come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name), "31type2.nc", 1323, 950);
            __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1323, 949);
        }
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj161=type_33,
        type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1326, 951, "struct sType* "), "31type2.nc", 1326, 952),(char*)come_increment_ref_count(xsprintf("lambda"), "31type2.nc", 1326, 953),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1326, 955);
        come_call_finalizer(sType_finalize, __dec_obj161,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1326, 954);
        while(span$1char$p_operator_derefference(info->p)==91) {
            info->p->p++;
            skip_spaces_and_lf(info);
            if(span$1char$p_operator_derefference(info->p)==93) {
                info->p->p++;
                skip_spaces_and_lf(info);
                type_33->mArrayPointerType=(_Bool)1;
                break;
            }
            else {
                __right_value0 = (void*)0;
                node_72=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "31type2.nc", 1339, 956);
                list$1sNode$ph_add(type_33->mArrayNum,(struct sNode*)come_increment_ref_count(node_72, "31type2.nc", 1341, 957));
                if(span$1char$p_operator_derefference(info->p)==93) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                ((node_72) ? node_72 = come_decrement_ref_count(node_72, ((struct sNode*)node_72)->finalize, ((struct sNode*)node_72)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1348, 958):(void*)0);
            }
        }
        if(paren_flag&&span$1char$p_operator_derefference(info->p)==41) {
            info->p->p++;
            skip_spaces_and_lf(info);
        }
        while(span$1char$p_operator_derefference(info->p)==91) {
            info->p->p++;
            skip_spaces_and_lf(info);
            __right_value0 = (void*)0;
            node_73=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "31type2.nc", 1359, 959);
            list$1sNode$ph_add(type_33->mArrayNum,(struct sNode*)come_increment_ref_count(node_73, "31type2.nc", 1361, 960));
            if(span$1char$p_operator_derefference(info->p)==93) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            ((node_73) ? node_73 = come_decrement_ref_count(node_73, ((struct sNode*)node_73)->finalize, ((struct sNode*)node_73)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1368, 961):(void*)0);
        }
        expected_next_character(41,info);
        __right_value0 = (void*)0;
        multiple_assign_var5=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$*)(__right_value0=parse_params(info,(_Bool)0)));
        param_types_74=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var5->v1, "31type2.nc", 1370, 962);
        param_names_75=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var5->v2, "31type2.nc", 1370, 963);
        param_default_parametors_76=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var5->v3, "31type2.nc", 1370, 964);
        var_args_77=multiple_assign_var5->v4;
        come_call_finalizer(tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1370, 965);
        __right_value0 = (void*)0;
        __dec_obj162=type_33->mResultType,
        type_33->mResultType=(struct sType* )come_increment_ref_count(sType_clone(result_type_69), "31type2.nc", 1372, 967);
        come_call_finalizer(sType_finalize, __dec_obj162,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1372, 966);
        __dec_obj163=type_33->mParamTypes,
        type_33->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types_74, "31type2.nc", 1373, 969);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj163,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1373, 968);
        __dec_obj164=type_33->mParamNames,
        type_33->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names_75, "31type2.nc", 1374, 971);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj164,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1374, 970);
        type_33->mVarArgs=var_args_77;
        type_33->mExtern=extern_;
        __dec_obj165=type_33->mPointerAttribute,
        type_33->mPointerAttribute=(char* )come_increment_ref_count(function_pointer_attribute, "31type2.nc", 1377, 973);
        __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1377, 972);
        type_33->mFunctionPointerNum=function_pointer_num;
        type_33->mArrayPointerNum=array_pointer;
        (function_pointer_attribute = come_decrement_ref_count(function_pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1633, 974));
        (pointer_attr2 = come_decrement_ref_count(pointer_attr2, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1633, 975));
        come_call_finalizer(sType_finalize, result_type_69, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1633, 976);
        come_call_finalizer(list$1sType$ph$p_finalize, param_types_74, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1633, 977);
        come_call_finalizer(list$1char$ph$p_finalize, param_names_75, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1633, 978);
        come_call_finalizer(list$1char$ph$p_finalize, param_default_parametors_76, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1633, 979);
    }
    else {
        if(__right_value0 = (void*)0,
({(_conditional_value_X6=(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))));        come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1383, 980);
_conditional_value_X6;})) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj166=type_33,
            type_33=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 1384, 982);
            come_call_finalizer(sType_finalize, __dec_obj166,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1384, 981);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1384, 983);
            __right_value0 = (void*)0;
            type_33->mClass=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type_33->mClass->mName)));
            __right_value0 = (void*)0;
            t=((struct buffer* )(__right_value0=map$2char$phbuffer$ph_operator_load_element(info->typedef_definition,type_name)));
            type_33->mOriginalTypePointerNum=pointer_num;
            type_33->mOriginalTypePointerHeap=heap;
            if(type_33->mTypedef||t) {
                __right_value0 = (void*)0;
                type_=(struct sType* )come_increment_ref_count(sType_clone(type_33), "31type2.nc", 1392, 1014);
                __right_value0 = (void*)0;
                __dec_obj167=type_->mAttribute,
                type_->mAttribute=(char*)come_increment_ref_count(xsprintf(""), "31type2.nc", 1393, 1016);
                __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1393, 1015);
                __right_value0 = (void*)0;
                __dec_obj168=type_33->mTypedefOriginalType,
                type_33->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(type_), "31type2.nc", 1394, 1018);
                come_call_finalizer(sType_finalize, __dec_obj168,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1394, 1017);
                come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1397, 1019);
            }
            __right_value0 = (void*)0;
            __dec_obj169=type_33->mAttribute,
            type_33->mAttribute=(char*)come_increment_ref_count(xsprintf(""), "31type2.nc", 1397, 1021);
            __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1397, 1020);
            __right_value0 = (void*)0;
            __dec_obj170=type_33->mVarAttribute,
            type_33->mVarAttribute=(char*)come_increment_ref_count(xsprintf(""), "31type2.nc", 1398, 1023);
            __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1398, 1022);
            apply_type_qualifiers(type_33,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
            __dec_obj171=type_33->mAlignas,
            type_33->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "31type2.nc", 1401, 1025);
            (__dec_obj171 ? __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 1401, 1024) :0);
            if(string_operator_equals(type_33->mClass->mName,"lambda")||list$1sNode$ph_length(type_33->mArrayNum)>0) {
                type_33->mArrayPointerNum+=pointer_num;
            }
            else {
                type_33->mPointerNum+=pointer_num;
            }
            type_33->mHeap=type_33->mHeap||heap;
            type_33->mChannel=type_33->mChannel||channel;
            type_33->mDefferRightValue=type_33->mDefferRightValue||deffer_;
            __dec_obj172=type_33->mTupleName,
            type_33->mTupleName=(char* )come_increment_ref_count(tuple_name, "31type2.nc", 1411, 1027);
            __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1411, 1026);
            __right_value0 = (void*)0;
            __dec_obj173=type_33,
            type_33=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_33, "31type2.nc", 1413, 1028),info), "31type2.nc", 1413, 1030);
            come_call_finalizer(sType_finalize, __dec_obj173,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1413, 1029);
        }
        else if(list$1char$ph_contained(info->generics_type_names,type_name,(_Bool)0)) {
            for(i_78=0            ;i_78<list$1char$ph_length(info->generics_type_names);i_78++){
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X7=(string_operator_equals(((char* )(__right_value1=list$1char$ph_operator_load_element(info->generics_type_names,i_78))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1417, 1031));
_conditional_value_X7;})) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj174=type_33,
                    type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1418, 1032, "struct sType* "), "31type2.nc", 1418, 1033),(char* )come_increment_ref_count(xsprintf("__generics_type%d",i_78), "31type2.nc", 1418, 1034),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1418, 1036);
                    come_call_finalizer(sType_finalize, __dec_obj174,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1418, 1035);
                }
            }
            apply_type_qualifiers(type_33,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
            __dec_obj175=type_33->mAlignas,
            type_33->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "31type2.nc", 1423, 1038);
            (__dec_obj175 ? __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 1423, 1037) :0);
            type_33->mPointerNum+=pointer_num;
            type_33->mHeap=type_33->mHeap||heap;
            type_33->mChannel=type_33->mChannel||channel;
            type_33->mDefferRightValue=type_33->mDefferRightValue||deffer_;
            __dec_obj176=type_33->mTupleName,
            type_33->mTupleName=(char* )come_increment_ref_count(tuple_name, "31type2.nc", 1428, 1040);
            __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1428, 1039);
            __right_value0 = (void*)0;
            __dec_obj177=type_33,
            type_33=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_33, "31type2.nc", 1430, 1041),info), "31type2.nc", 1430, 1043);
            come_call_finalizer(sType_finalize, __dec_obj177,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1430, 1042);
        }
        else if(list$1char$ph_contained(info->method_generics_type_names,type_name,(_Bool)0)) {
            for(i_79=0            ;i_79<list$1char$ph_length(info->method_generics_type_names);i_79++){
                if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
({(_conditional_value_X8=(string_operator_equals(((char* )(__right_value1=list$1char$ph_operator_load_element(info->method_generics_type_names,i_79))),type_name)));                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1434, 1044));
_conditional_value_X8;})) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __dec_obj178=type_33,
                    type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1435, 1045, "struct sType* "), "31type2.nc", 1435, 1046),(char* )come_increment_ref_count(xsprintf("__mgenerics_type%d",i_79), "31type2.nc", 1435, 1047),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1435, 1049);
                    come_call_finalizer(sType_finalize, __dec_obj178,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1435, 1048);
                }
            }
            apply_type_qualifiers(type_33,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
            __dec_obj179=type_33->mAlignas,
            type_33->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "31type2.nc", 1440, 1051);
            (__dec_obj179 ? __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 1440, 1050) :0);
            type_33->mPointerNum+=pointer_num;
            type_33->mHeap=type_33->mHeap||heap;
            type_33->mChannel=type_33->mChannel||channel;
            type_33->mDefferRightValue=type_33->mDefferRightValue||deffer_;
            __dec_obj180=type_33->mTupleName,
            type_33->mTupleName=(char* )come_increment_ref_count(tuple_name, "31type2.nc", 1445, 1053);
            __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1445, 1052);
            __right_value0 = (void*)0;
            __dec_obj181=type_33,
            type_33=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_33, "31type2.nc", 1447, 1054),info), "31type2.nc", 1447, 1056);
            come_call_finalizer(sType_finalize, __dec_obj181,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1447, 1055);
        }
        else if(span$1char$p_operator_derefference(info->p)==60) {
            info->p->p++;
            skip_spaces_and_lf(info);
            if(__right_value0 = (void*)0,
__right_value1 = (void*)0,
__right_value2 = (void*)0,
({(_conditional_value_X9=(((struct sClass* )(__right_value2=map$2char$phsClass$ph_operator_load_element(info->generics_classes,((char* )(__right_value1=__builtin_string(type_name,"31type2.nc",1453))))))==((void*)0)));            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1453, 1057));
            come_call_finalizer(sClass_finalize, __right_value2, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1453, 1058);
_conditional_value_X9;})) {
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1455, 1059, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1455, 1060),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 1455, 1061),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 1455, 1062),(_Bool)0))), "31type2.nc", 1455, 1063);
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1455, 1064));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1455, 1065));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1455, 1066):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1455, 1067));
                (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1455, 1068));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1455, 1069));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1455, 1070));
                come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1455, 1071);
                (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1455, 1072));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1455, 1073);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1455, 1074);
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj182=type_33,
            type_33=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 1460, 1076);
            come_call_finalizer(sType_finalize, __dec_obj182,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1460, 1075);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1460, 1077);
            if(type_33==((void*)0)) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj183=type_33,
                type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1463, 1078, "struct sType* "), "31type2.nc", 1463, 1079),(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1463), "31type2.nc", 1463, 1080),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1463, 1082);
                come_call_finalizer(sType_finalize, __dec_obj183,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1463, 1081);
            }
            while((_Bool)1) {
                __right_value0 = (void*)0;
                multiple_assign_var6=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type=(struct sType* )come_increment_ref_count(multiple_assign_var6->v1, "31type2.nc", 1467, 1083);
                var_name_80=(char* )come_increment_ref_count(multiple_assign_var6->v2, "31type2.nc", 1467, 1084);
                err_81=multiple_assign_var6->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1467, 1085);
                if(!err_81) {
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1470, 1086, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1470, 1087),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 1470, 1088),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 1470, 1089),(_Bool)0))), "31type2.nc", 1470, 1090);
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1470, 1091);
                    (var_name_80 = come_decrement_ref_count(var_name_80, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1470, 1092));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1470, 1093));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1470, 1094));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1470, 1095):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1470, 1096));
                    (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1470, 1097));
                    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1470, 1098));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1470, 1099));
                    come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1470, 1100);
                    (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1470, 1101));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1470, 1102);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1470, 1103);
                    return __result_obj__0;
                }
                list$1sType$ph_push_back(type_33->mGenericsTypes,(struct sType* )come_increment_ref_count(generics_type, "31type2.nc", 1473, 1118));
                if(span$1char$p_operator_derefference(info->p)==44) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                }
                else if(span$1char$p_operator_derefference(info->p)==62) {
                    info->p->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1483, 1119);
                    (var_name_80 = come_decrement_ref_count(var_name_80, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1483, 1120));
                    break;
                }
                else {
                    err_msg(info,"invalid generics type(%c)(%c)(%c)",span$1char$p_operator_derefference(info->p),*(info->p->p+1),*(info->p->p+2));
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1487, 1121, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1487, 1122),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 1487, 1123),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 1487, 1124),(_Bool)0))), "31type2.nc", 1487, 1125);
                    come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1487, 1126);
                    (var_name_80 = come_decrement_ref_count(var_name_80, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1487, 1127));
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1487, 1128));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1487, 1129));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1487, 1130):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1487, 1131));
                    (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1487, 1132));
                    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1487, 1133));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1487, 1134));
                    come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1487, 1135);
                    (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1487, 1136));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1487, 1137);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1487, 1138);
                    return __result_obj__0;
                }
                come_call_finalizer(sType_finalize, generics_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1491, 1139);
                (var_name_80 = come_decrement_ref_count(var_name_80, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1491, 1140));
            }
            expected_generics_num=-1;
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            generics_class=((struct sClass* )(__right_value1=map$2char$phsClass$ph_at(info->generics_classes,((char* )(__right_value0=__builtin_string(type_name,"31type2.nc",1492))),((void*)0),(_Bool)0)));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1492, 1156));
            if(generics_class) {
                expected_generics_num=generics_class->mGenericsNum;
            }
            if(expected_generics_num>=0&&list$1sType$ph_length(type_33->mGenericsTypes)!=expected_generics_num) {
                err_msg(info,"invalid count of generics type arguments. %s requires %d but got %d",type_name,expected_generics_num,list$1sType$ph_length(type_33->mGenericsTypes));
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1498, 1157, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1498, 1158),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 1498, 1159),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 1498, 1160),(_Bool)0))), "31type2.nc", 1498, 1161);
                (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1498, 1162));
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1498, 1163));
                ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1498, 1164):(void*)0);
                (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1498, 1165));
                (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1498, 1166));
                (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1498, 1167));
                (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1498, 1168));
                come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1498, 1169);
                (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1498, 1170));
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1498, 1171);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1498, 1172);
                return __result_obj__0;
            }
            if(is_contained_generics_class(type_33,info)) {
                __right_value0 = (void*)0;
                __dec_obj187=type_33,
                type_33=(struct sType* )come_increment_ref_count(solve_generics(type_33,info->generics_type,info), "31type2.nc", 1502, 1174);
                come_call_finalizer(sType_finalize, __dec_obj187,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1502, 1173);
            }
            else {
                if(!output_generics_struct(type_33,type_33,info)) {
                    __right_value0 = (void*)0;
                    new_name=(char* )come_increment_ref_count(create_generics_name(type_33,info), "31type2.nc", 1507, 1175);
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name);
                    exit(7);
                    (new_name = come_decrement_ref_count(new_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1511, 1176));
                }
            }
            apply_type_qualifiers(type_33,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
            __dec_obj188=type_33->mAlignas,
            type_33->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "31type2.nc", 1514, 1178);
            (__dec_obj188 ? __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 1514, 1177) :0);
            type_33->mPointerNum+=pointer_num;
            type_33->mHeap=type_33->mHeap||heap;
            type_33->mChannel=type_33->mChannel||channel;
            type_33->mDefferRightValue=type_33->mDefferRightValue||deffer_;
            __dec_obj189=type_33->mTupleName,
            type_33->mTupleName=(char* )come_increment_ref_count(tuple_name, "31type2.nc", 1519, 1180);
            __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1519, 1179);
            __dec_obj190=type_name,
            type_name=(char* )come_increment_ref_count(type_33->mClass->mName, "31type2.nc", 1521, 1182);
            __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1521, 1181);
            __right_value0 = (void*)0;
            __dec_obj191=type_33,
            type_33=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_33, "31type2.nc", 1523, 1183),info), "31type2.nc", 1523, 1185);
            come_call_finalizer(sType_finalize, __dec_obj191,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1523, 1184);
        }
        else {
            if(struct_) {
                __right_value0 = (void*)0;
                klass_84=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type_name)));
                if(klass_84==((void*)0)&&span$1char$p_operator_derefference(info->p)!=60) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    map$2char$phsClass$ph_insert(info->classes,(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1530), "31type2.nc", 1530, 1229),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count((struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), "31type2.nc", 1530, 1230, "struct sClass* "), "31type2.nc", 1530, 1232),(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1530), "31type2.nc", 1530, 1231),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0), "31type2.nc", 1530, 1233),(_Bool)0);
                }
            }
            if(union_) {
                __right_value0 = (void*)0;
                klass_96=((struct sClass* )(__right_value0=map$2char$phsClass$ph_operator_load_element(info->classes,type_name)));
                if(klass_96==((void*)0)&&span$1char$p_operator_derefference(info->p)!=60) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __right_value3 = (void*)0;
                    map$2char$phsClass$ph_insert(info->classes,(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1537), "31type2.nc", 1537, 1234),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass* )come_increment_ref_count((struct sClass *)come_calloc(1, sizeof(struct sClass )*(1), "31type2.nc", 1537, 1235, "struct sClass* "), "31type2.nc", 1537, 1237),(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1537), "31type2.nc", 1537, 1236),(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0), "31type2.nc", 1537, 1238),(_Bool)0);
                }
            }
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __dec_obj195=type_33,
            type_33=(struct sType* )come_increment_ref_count(sType_clone(((struct sType* )(__right_value0=map$2char$phsType$ph_operator_load_element(info->types,type_name)))), "31type2.nc", 1543, 1240);
            come_call_finalizer(sType_finalize, __dec_obj195,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1543, 1239);
            come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1543, 1241);
            if(type_33==((void*)0)) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj196=type_33,
                type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1546, 1242, "struct sType* "), "31type2.nc", 1546, 1243),(char* )come_increment_ref_count(__builtin_string(type_name,"31type2.nc",1546), "31type2.nc", 1546, 1244),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1546, 1246);
                come_call_finalizer(sType_finalize, __dec_obj196,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1546, 1245);
            }
            apply_type_qualifiers(type_33,constant,complex_,atomic_,thread_local,thread_,alignas_double,register_,unsigned_,noreturn_,volatile_,uniq_,static_,extern_,inline_,restrict_,long_long,long_,short_,norecord,weak_);
            __dec_obj197=type_33->mAlignas,
            type_33->mAlignas=(struct sNode*)come_increment_ref_count(alignas_, "31type2.nc", 1550, 1248);
            (__dec_obj197 ? __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0, (void*)0, "31type2.nc", 1550, 1247) :0);
            type_33->mPointerNum+=pointer_num;
            type_33->mHeap=type_33->mHeap||heap;
            type_33->mChannel=type_33->mChannel||channel;
            type_33->mDefferRightValue=type_33->mDefferRightValue||deffer_;
            __dec_obj198=type_33->mTupleName,
            type_33->mTupleName=(char* )come_increment_ref_count(tuple_name, "31type2.nc", 1555, 1250);
            __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1555, 1249);
        }
        merge_pointer_attribute_to_type(type_33,(char* )come_increment_ref_count(pointer_attribute, "31type2.nc", 1558, 1251));
        __right_value0 = (void*)0;
        __dec_obj199=type_33,
        type_33=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_33, "31type2.nc", 1560, 1252),info), "31type2.nc", 1560, 1254);
        come_call_finalizer(sType_finalize, __dec_obj199,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1560, 1253);
        if(parse_multiple_type&&span$1char$p_operator_derefference(info->p)==44&&!info->in_offsetof) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            types=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "31type2.nc", 1563, 1255, "struct list$1sType$ph*"), "31type2.nc", 1563, 1256)), "31type2.nc", 1563, 1257);
            __right_value0 = (void*)0;
            list$1sType$ph_push_back(types,(struct sType* )come_increment_ref_count(sType_clone(type_33), "31type2.nc", 1565, 1258));
            while(span$1char$p_operator_derefference(info->p)==44) {
                info->p->p++;
                skip_spaces_and_lf(info);
                __right_value0 = (void*)0;
                multiple_assign_var7=((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value0=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2=(struct sType* )come_increment_ref_count(multiple_assign_var7->v1, "31type2.nc", 1571, 1259);
                name_97=(char* )come_increment_ref_count(multiple_assign_var7->v2, "31type2.nc", 1571, 1260);
                err_98=multiple_assign_var7->v3;
                come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1571, 1261);
                if(!err_98) {
                                        __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1574, 1262, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1574, 1263),(struct sType* )come_increment_ref_count((struct sType* )((void*)0), "31type2.nc", 1574, 1264),(char* )come_increment_ref_count((char* )((void*)0), "31type2.nc", 1574, 1265),(_Bool)0))), "31type2.nc", 1574, 1266);
                    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1574, 1267);
                    (name_97 = come_decrement_ref_count(name_97, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1574, 1268));
                    come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1574, 1269);
                    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1574, 1270));
                    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1574, 1271));
                    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1574, 1272):(void*)0);
                    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1574, 1273));
                    (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1574, 1274));
                    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1574, 1275));
                    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1574, 1276));
                    come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1574, 1277);
                    (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1574, 1278));
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1574, 1279);
                    neo_current_frame = fr.prev;
                    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1574, 1280);
                    return __result_obj__0;
                }
                __right_value0 = (void*)0;
                list$1sType$ph_push_back(types,(struct sType* )come_increment_ref_count(sType_clone(type2), "31type2.nc", 1577, 1281));
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1580, 1282);
                (name_97 = come_decrement_ref_count(name_97, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1580, 1283));
            }
            if(span$1char$p_operator_derefference(info->p)==41) {
                info->p->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples=list$1sType$ph_length(types);
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj200=type_33,
            type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1587, 1284, "struct sType* "), "31type2.nc", 1587, 1285),(char* )come_increment_ref_count(xsprintf("tuple%d",num_tuples), "31type2.nc", 1587, 1286),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1587, 1288);
            come_call_finalizer(sType_finalize, __dec_obj200,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1587, 1287);
            type_33->mPointerNum++;
            type_33->mHeap=(_Bool)1;
            for(_o2_saved_3=(struct list$1sType$ph*)come_increment_ref_count(types, "31type2.nc", 1591, 1289),it=list$1sType$ph_begin(_o2_saved_3)            ;!list$1sType$ph_end(_o2_saved_3);it=list$1sType$ph_next(_o2_saved_3)){
                __right_value0 = (void*)0;
                list$1sType$ph_push_back(type_33->mGenericsTypes,(struct sType* )come_increment_ref_count((((struct sType* )(__right_value0=sType_clone(it)))), "31type2.nc", 1592, 1290));
                come_call_finalizer(sType_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "}", 1592, 1291);
            }
            __right_value0 = (void*)0;
            __dec_obj201=type_33,
            type_33=(struct sType* )come_increment_ref_count(parse_pointer_attribute((struct sType* )come_increment_ref_count(type_33, "31type2.nc", 1595, 1292),info), "31type2.nc", 1595, 1294);
            come_call_finalizer(sType_finalize, __dec_obj201,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1595, 1293);
            if(is_contained_generics_class(type_33,info)) {
                __right_value0 = (void*)0;
                __dec_obj202=type_33,
                type_33=(struct sType* )come_increment_ref_count(solve_generics(type_33,info->generics_type,info), "31type2.nc", 1598, 1296);
                come_call_finalizer(sType_finalize, __dec_obj202,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1598, 1295);
            }
            else {
                if(!output_generics_struct(type_33,type_33,info)) {
                    __right_value0 = (void*)0;
                    new_name_101=(char* )come_increment_ref_count(create_generics_name(type_33,info), "31type2.nc", 1603, 1297);
                    printf("output generics is failed(%s)\n",new_name_101);
                    exit(9);
                    (new_name_101 = come_decrement_ref_count(new_name_101, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1607, 1298));
                }
            }
            type_33->mMultipleTypes=(_Bool)1;
            __dec_obj203=type_name,
            type_name=(char* )come_increment_ref_count(type_33->mClass->mName, "31type2.nc", 1610, 1300);
            __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1610, 1299);
            come_call_finalizer(list$1sType$ph$p_finalize, types, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1613, 1301);
            come_call_finalizer(list$1sType$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1613, 1302);
        }
        __right_value0 = (void*)0;
        attribute_102=(char* )come_increment_ref_count(parse_struct_attribute(info,(_Bool)0), "31type2.nc", 1613, 1303);
        if(type_33&&string_operator_equals(type_33->mClass->mName,"lambda")&&string_operator_not_equals(attribute_102,"")) {
            if(type_33->mMiddleAttribute!=((void*)0)&&string_operator_not_equals(type_33->mMiddleAttribute,"")) {
                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __right_value2 = (void*)0;
                __dec_obj204=type_33->mMiddleAttribute,
                type_33->mMiddleAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(type_33->mMiddleAttribute," "))),attribute_102), "31type2.nc", 1617, 1305);
                __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1617, 1304);
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1617, 1306));
            }
            else {
                __dec_obj205=type_33->mMiddleAttribute,
                type_33->mMiddleAttribute=(char* )come_increment_ref_count(attribute_102, "31type2.nc", 1620, 1308);
                __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1620, 1307);
            }
            __right_value0 = (void*)0;
            __dec_obj206=attribute_102,
            attribute_102=(char*)come_increment_ref_count(xsprintf(""), "31type2.nc", 1622, 1310);
            __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1622, 1309);
        }
        if(!parse_variable_name) {
            append_attribute_to_type(type_33,(char* )come_increment_ref_count(attribute_102, "31type2.nc", 1626, 1311),(_Bool)0,info);
        }
        if(parse_variable_name) {
            __right_value0 = (void*)0;
            __dec_obj207=var_name_34,
            var_name_34=(char* )come_increment_ref_count(parse_variable_name_fun(type_33,anonymous_name,var_name_between_brace,(char* )come_increment_ref_count(attribute_102, "31type2.nc", 1630, 1312),info), "31type2.nc", 1630, 1314);
            __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1630, 1313);
        }
        (attribute_102 = come_decrement_ref_count(attribute_102, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1633, 1315));
    }
    skip_spaces_and_lf(info);
    array_num_typedef=((void*)0);
    if(list$1sNode$ph_length(type_33->mArrayNum)>0) {
        __right_value0 = (void*)0;
        __dec_obj208=array_num_typedef,
        array_num_typedef=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(type_33->mArrayNum), "31type2.nc", 1636, 1317);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj208,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1636, 1316);
        list$1sNode$ph_reset(type_33->mArrayNum);
    }
    while(span$1char$p_operator_derefference(info->p)==91) {
        info->p->p++;
        skip_spaces_and_lf(info);
        array_static=(_Bool)0;
        array_restrict=(_Bool)0;
        while(1) {
            if(parsecmp("static",info)) {
                info->p->p+=strlen("static");
                skip_spaces_and_lf(info);
                array_static=(_Bool)1;
            }
            else if(parsecmp("restrict",info)) {
                info->p->p+=strlen("restrict");
                skip_spaces_and_lf(info);
                array_restrict=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        if(span$1char$p_operator_derefference(info->p)==93) {
            info->p->p++;
            skip_spaces_and_lf(info);
            type_33->mArrayPointerType=(_Bool)1;
            break;
        }
        skip_spaces_and_lf(info);
        __right_value0 = (void*)0;
        node_103=(struct sNode*)come_increment_ref_count(expression_v13(info,(_Bool)0), "31type2.nc", 1676, 1319);
        list$1sNode$ph_push_back(type_33->mArrayNum,(struct sNode*)come_increment_ref_count(node_103, "31type2.nc", 1677, 1334));
        list$1int$_push_back(type_33->mArrayStatic,array_static);
        list$1int$_push_back(type_33->mArrayRestrict,array_restrict);
        expected_next_character(93,info);
        ((node_103) ? node_103 = come_decrement_ref_count(node_103, ((struct sNode*)node_103)->finalize, ((struct sNode*)node_103)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1684, 1341):(void*)0);
    }
    if(array_num_typedef) {
        ({        __current_stack2__.info = &info;
        __current_stack2__.parse_variable_name = &parse_variable_name;
        __current_stack2__.parse_multiple_type = &parse_multiple_type;
        __current_stack2__.in_function_parametor = &in_function_parametor;
        __current_stack2__.head = &head;
        __current_stack2__.head_sline = &head_sline;
        __current_stack2__.attribute_before = &attribute_before;
        __current_stack2__.type_name = &type_name;
        __current_stack2__.norecord = &norecord;
        __current_stack2__.constant = &constant;
        __current_stack2__.static_ = &static_;
        __current_stack2__.volatile_ = &volatile_;
        __current_stack2__.register_ = &register_;
        __current_stack2__.unsigned_ = &unsigned_;
        __current_stack2__.long_ = &long_;
        __current_stack2__.long_long = &long_long;
        __current_stack2__.short_ = &short_;
        __current_stack2__.restrict_ = &restrict_;
        __current_stack2__.struct_ = &struct_;
        __current_stack2__.union_ = &union_;
        __current_stack2__.enum_ = &enum_;
        __current_stack2__.no_heap = &no_heap;
        __current_stack2__.extern_ = &extern_;
        __current_stack2__.inline_ = &inline_;
        __current_stack2__.uniq_ = &uniq_;
        __current_stack2__.tuple_ = &tuple_;
        __current_stack2__.original_var_name = &original_var_name;
        __current_stack2__.complex_ = &complex_;
        __current_stack2__.type_name_ = &type_name_;
        __current_stack2__.noreturn_ = &noreturn_;
        __current_stack2__.weak_ = &weak_;
        __current_stack2__.alignas_ = &alignas_;
        __current_stack2__.alignas_double = &alignas_double;
        __current_stack2__.tag_attribute = &tag_attribute;
        __current_stack2__.struct_define_parsed = &struct_define_parsed;
        __current_stack2__.anonymous_type = &anonymous_type;
        __current_stack2__.anonymous_name = &anonymous_name;
        __current_stack2__.atomic_ = &atomic_;
        __current_stack2__.thread_local = &thread_local;
        __current_stack2__.thread_ = &thread_;
        __current_stack2__.attribute_32 = &attribute_32;
        __current_stack2__.pointer_num = &pointer_num;
        __current_stack2__.pointer_attribute = &pointer_attribute;
        __current_stack2__.heap = &heap;
        __current_stack2__.refference = &refference;
        __current_stack2__.no_refference = &no_refference;
        __current_stack2__.channel = &channel;
        __current_stack2__.deffer_ = &deffer_;
        __current_stack2__.any_class = &any_class;
        __current_stack2__.vtable = &vtable;
        __current_stack2__.tuple_name = &tuple_name;
        __current_stack2__.lambda_flag = &lambda_flag;
        __current_stack2__.type_33 = &type_33;
        __current_stack2__.var_name_34 = &var_name_34;
        __current_stack2__.function_pointer_flag = &function_pointer_flag;
        __current_stack2__.pointer_to_array_flag = &pointer_to_array_flag;
        __current_stack2__.var_name_between_brace = &var_name_between_brace;
        __current_stack2__.array_num_typedef = &array_num_typedef;
        })        ,        list$1sNode$ph_each(type_33->mArrayNum,&__current_stack2__,(void*)method_block2_31type2nc);
        list$1sNode$ph_reset(type_33->mArrayNum);
        ({        __current_stack3__.info = &info;
        __current_stack3__.parse_variable_name = &parse_variable_name;
        __current_stack3__.parse_multiple_type = &parse_multiple_type;
        __current_stack3__.in_function_parametor = &in_function_parametor;
        __current_stack3__.head = &head;
        __current_stack3__.head_sline = &head_sline;
        __current_stack3__.attribute_before = &attribute_before;
        __current_stack3__.type_name = &type_name;
        __current_stack3__.norecord = &norecord;
        __current_stack3__.constant = &constant;
        __current_stack3__.static_ = &static_;
        __current_stack3__.volatile_ = &volatile_;
        __current_stack3__.register_ = &register_;
        __current_stack3__.unsigned_ = &unsigned_;
        __current_stack3__.long_ = &long_;
        __current_stack3__.long_long = &long_long;
        __current_stack3__.short_ = &short_;
        __current_stack3__.restrict_ = &restrict_;
        __current_stack3__.struct_ = &struct_;
        __current_stack3__.union_ = &union_;
        __current_stack3__.enum_ = &enum_;
        __current_stack3__.no_heap = &no_heap;
        __current_stack3__.extern_ = &extern_;
        __current_stack3__.inline_ = &inline_;
        __current_stack3__.uniq_ = &uniq_;
        __current_stack3__.tuple_ = &tuple_;
        __current_stack3__.original_var_name = &original_var_name;
        __current_stack3__.complex_ = &complex_;
        __current_stack3__.type_name_ = &type_name_;
        __current_stack3__.noreturn_ = &noreturn_;
        __current_stack3__.weak_ = &weak_;
        __current_stack3__.alignas_ = &alignas_;
        __current_stack3__.alignas_double = &alignas_double;
        __current_stack3__.tag_attribute = &tag_attribute;
        __current_stack3__.struct_define_parsed = &struct_define_parsed;
        __current_stack3__.anonymous_type = &anonymous_type;
        __current_stack3__.anonymous_name = &anonymous_name;
        __current_stack3__.atomic_ = &atomic_;
        __current_stack3__.thread_local = &thread_local;
        __current_stack3__.thread_ = &thread_;
        __current_stack3__.attribute_32 = &attribute_32;
        __current_stack3__.pointer_num = &pointer_num;
        __current_stack3__.pointer_attribute = &pointer_attribute;
        __current_stack3__.heap = &heap;
        __current_stack3__.refference = &refference;
        __current_stack3__.no_refference = &no_refference;
        __current_stack3__.channel = &channel;
        __current_stack3__.deffer_ = &deffer_;
        __current_stack3__.any_class = &any_class;
        __current_stack3__.vtable = &vtable;
        __current_stack3__.tuple_name = &tuple_name;
        __current_stack3__.lambda_flag = &lambda_flag;
        __current_stack3__.type_33 = &type_33;
        __current_stack3__.var_name_34 = &var_name_34;
        __current_stack3__.function_pointer_flag = &function_pointer_flag;
        __current_stack3__.pointer_to_array_flag = &pointer_to_array_flag;
        __current_stack3__.var_name_between_brace = &var_name_between_brace;
        __current_stack3__.array_num_typedef = &array_num_typedef;
        })        ,        list$1sNode$ph_each(array_num_typedef,&__current_stack3__,(void*)method_block3_31type2nc);
    }
    __right_value0 = (void*)0;
    multiple_assign_var8=((struct tuple2$2char$phchar$ph*)(__right_value0=parse_attribute(info)));
    asm_name_108=(char* )come_increment_ref_count(multiple_assign_var8->v1, "31type2.nc", 1693, 1346);
    attribute2=(char* )come_increment_ref_count(multiple_assign_var8->v2, "31type2.nc", 1693, 1347);
    come_call_finalizer(tuple2$2char$phchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1693, 1348);
    append_attribute_to_type(type_33,(char* )come_increment_ref_count(attribute2, "31type2.nc", 1695, 1349),parse_variable_name,info);
    __dec_obj212=type_33->mAsmName,
    type_33->mAsmName=(char* )come_increment_ref_count(asm_name_108, "31type2.nc", 1697, 1351);
    __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1697, 1350);
    skip_spaces_and_lf(info);
    if(type_33->mChannel) {
        __right_value0 = (void*)0;
        type_before=(struct sType* )come_increment_ref_count(sType_clone(type_33), "31type2.nc", 1702, 1352);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __dec_obj213=type_33,
        type_33=(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "31type2.nc", 1703, 1353, "struct sType* "), "31type2.nc", 1703, 1354),(char*)come_increment_ref_count(xsprintf("int"), "31type2.nc", 1703, 1355),(_Bool)0,info,(_Bool)0,0), "31type2.nc", 1703, 1357);
        come_call_finalizer(sType_finalize, __dec_obj213,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1703, 1356);
        __right_value0 = (void*)0;
        __right_value1 = (void*)0;
        __right_value2 = (void*)0;
        __right_value3 = (void*)0;
        __dec_obj214=type_33->mArrayNum,
        type_33->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count((__list_values1__[0]=((struct sNode*)(__right_value1=create_int_node((char*)come_increment_ref_count(xsprintf("2"), "31type2.nc", 1704, 1358),info))),
list$1sNode$ph_initialize_with_values((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "31type2.nc", 1704, 1363, "struct list$1sNode$ph"), "31type2.nc", 1704, 1364),1,__list_values1__)), "31type2.nc", 1704, 1366);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj214,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1704, 1365);
        __dec_obj215=type_33->mChannelType,
        type_33->mChannelType=(struct sType* )come_increment_ref_count(type_before, "31type2.nc", 1705, 1368);
        come_call_finalizer(sType_finalize, __dec_obj215,(void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc", 1705, 1367);
        type_33->mChannel=(_Bool)1;
        come_call_finalizer(sType_finalize, type_before, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1709, 1369);
    }
    if(type_33&&string_operator_equals(type_33->mClass->mName,"lambda")&&string_operator_not_equals(attribute_32,"")) {
        if(type_33->mMiddleAttribute!=((void*)0)&&string_operator_not_equals(type_33->mMiddleAttribute,"")) {
            __right_value0 = (void*)0;
            __right_value1 = (void*)0;
            __right_value2 = (void*)0;
            __dec_obj216=type_33->mMiddleAttribute,
            type_33->mMiddleAttribute=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value1=string_operator_add(type_33->mMiddleAttribute," "))),attribute_32), "31type2.nc", 1711, 1371);
            __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1711, 1370);
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "31type2.nc", 1711, 1372));
        }
        else {
            __dec_obj217=type_33->mMiddleAttribute,
            type_33->mMiddleAttribute=(char* )come_increment_ref_count(attribute_32, "31type2.nc", 1714, 1374);
            __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1714, 1373);
        }
        __right_value0 = (void*)0;
        __dec_obj218=attribute_32,
        attribute_32=(char*)come_increment_ref_count(xsprintf(""), "31type2.nc", 1716, 1376);
        __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0,0, (void*)0, "31type2.nc", 1716, 1375);
    }
    append_attribute_to_type(type_33,(char* )come_increment_ref_count(attribute_32, "31type2.nc", 1718, 1377),parse_variable_name,info);
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(((struct tuple3$3sType$phchar$ph_Bool$*)(__right_value1=tuple3$3sType$phchar$ph_Bool$_initialize((struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count((struct tuple3$3sType$phchar$ph_Bool$*)come_calloc(1, sizeof(struct tuple3$3sType$phchar$ph_Bool$)*(1), "31type2.nc", 1720, 1378, "struct tuple3$3sType$phchar$ph_Bool$"), "31type2.nc", 1720, 1379),(struct sType* )come_increment_ref_count(type_33, "31type2.nc", 1720, 1380),(char* )come_increment_ref_count(var_name_34, "31type2.nc", 1720, 1381),(_Bool)1))), "31type2.nc", 1720, 1382);
    (attribute_before = come_decrement_ref_count(attribute_before, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1720, 1383));
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1720, 1384));
    ((alignas_) ? alignas_ = come_decrement_ref_count(alignas_, ((struct sNode*)alignas_)->finalize, ((struct sNode*)alignas_)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1720, 1385):(void*)0);
    (tag_attribute = come_decrement_ref_count(tag_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1720, 1386));
    (attribute_32 = come_decrement_ref_count(attribute_32, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1720, 1387));
    (pointer_attribute = come_decrement_ref_count(pointer_attribute, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1720, 1388));
    (tuple_name = come_decrement_ref_count(tuple_name, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1720, 1389));
    come_call_finalizer(sType_finalize, type_33, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1720, 1390);
    (var_name_34 = come_decrement_ref_count(var_name_34, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1720, 1391));
    come_call_finalizer(list$1sNode$ph$p_finalize, array_num_typedef, (void*)0, (void*)0, 0, 0, 0, (void*)0, "31type2.nc}", 1720, 1392);
    (asm_name_108 = come_decrement_ref_count(asm_name_108, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1720, 1393));
    (attribute2 = come_decrement_ref_count(attribute2, (void*)0, (void*)0, 0, 0, (void*)0, "31type2.nc", 1720, 1394));
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "31type2.nc}", 1720, 1395);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "31type2.nc}", 1720, 1396);
    return __result_obj__0;
}

static char span$1char$p$p_operator_derefference(struct span$1char$p* self)
{
    char* p;
    if(self==((void*)0)) {
        puts("null pointer exception. self is null");
        stackframe();
        exit(2);
    }
    if(self->local) {
        if(self->stacktop<neo_current_frame->stacktop) {
            puts("refferenced stack object is vanished");
            stackframe2(self);
            exit(127);
        }
    }
    if(self->heap) {
        if(!come_is_alive(self->memory)) {
            puts("refferenced heap object is vanished");
            stackframe2(self);
            exit(127);
        }
    }
    p=self->p;
    if(sizeof(char)>self->len) {
        puts("invalid span. len is few");
        stackframe2(self);
        exit(2);
    }
    if(self->p>=(char*)self->memory+self->len) {
        puts("out of range of span(3)");
        stackframe2(self);
        exit(1);
    }
    if(self->p<(char*)self->memory) {
        puts("out of range of span(4)");
        stackframe2(self);
        exit(1);
    }
        return *p;
}

static char span$1char$p_operator_derefference(struct span$1char$p* self)
{
    char* p;
    if(self==((void*)0)) {
        puts("null pointer exception. self is null");
        stackframe();
        exit(2);
    }
    if(self->local) {
        if(self->stacktop<neo_current_frame->stacktop) {
            puts("refferenced stack object is vanished");
            stackframe2(self);
            exit(127);
        }
    }
    if(self->heap) {
        if(!come_is_alive(self->memory)) {
            puts("refferenced heap object is vanished");
            stackframe2(self);
            exit(127);
        }
    }
    p=self->p;
    if(sizeof(char)>self->len) {
        puts("invalid span. len is few");
        stackframe2(self);
        exit(2);
    }
    if(self->p>=(char*)self->memory+self->len) {
        puts("out of range of span(3)");
        stackframe2(self);
        exit(1);
    }
    if(self->p<(char*)self->memory) {
        puts("out of range of span(4)");
        stackframe2(self);
        exit(1);
    }
        return *p;
}

static struct tuple3$3sType$phchar$ph_Bool$* tuple3$3sType$phchar$ph_Bool$_initialize(struct tuple3$3sType$phchar$ph_Bool$* self, struct sType*  v1  , char*  v2  , _Bool v3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$_initialize"; neo_current_frame = &fr;
    struct sType*  __dec_obj32  ;
    char*  __dec_obj33  ;
    struct tuple3$3sType$phchar$ph_Bool$* __result_obj__0;
    __dec_obj32=self->v1,
    self->v1=(struct sType* )come_increment_ref_count(v1, "/usr/local/include/neo-c.h", 3988, 121);
    come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3988, 120);
    __dec_obj33=self->v2,
    self->v2=(char* )come_increment_ref_count(v2, "/usr/local/include/neo-c.h", 3989, 123);
    __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 3989, 122);
    self->v3=v3;
        __result_obj__0 = (struct tuple3$3sType$phchar$ph_Bool$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 3992, 124);
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3992, 127);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3992, 128);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3992, 129));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple3$3sType$phchar$ph_Bool$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3992, 130);
    return __result_obj__0;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 88);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 89);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 92);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 93);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 94):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 95):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 96));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 97));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 98));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 99));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 100));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 101));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 102));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 103));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 106);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 107);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 109);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 110);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 111);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 112));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 113);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 116);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 117);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 118):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 119);
    }
        neo_current_frame = fr.prev;
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1sType$ph* it;
    struct list_item$1sType$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 91);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 90);
    }
            neo_current_frame = fr.prev;
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 105);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 104):(void*)0);
    }
            neo_current_frame = fr.prev;
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 108);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 115);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 114));
    }
            neo_current_frame = fr.prev;
}

static void tuple3$3sType$phchar$ph_Bool$$p_finalize(struct tuple3$3sType$phchar$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple3$3sType$phchar$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize}", 2, 125);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple3$3sType$phchar$ph_Bool$$p_finalize", 3, 126));
    }
        neo_current_frame = fr.prev;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phchar$ph$p_finalize", 2, 190));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phchar$ph$p_finalize", 3, 191));
    }
                        neo_current_frame = fr.prev;
}

static struct sType*  map$2char$phsType$ph$p_operator_load_element(struct map$2char$phsType$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sType* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 438);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 439);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 440);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sType* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 441);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 442);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 443);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 444);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 445);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 446);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 447);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 448);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 449);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 450);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 451);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 452);
    return __result_obj__0;
}

static struct sType*  map$2char$phsType$ph_operator_load_element(struct map$2char$phsType$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsType$ph_operator_load_element"; neo_current_frame = &fr;
    struct sType*  default_value  ;
    struct sType*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sType* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 453);
        come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 454);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 455);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sType* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 456);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 457);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 458);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 459);
                come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 460);
                neo_current_frame = fr.prev;
                come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 461);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 462);
            come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 463);
            neo_current_frame = fr.prev;
            come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 464);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 465);
    come_call_finalizer(sType_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 466);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 467);
    return __result_obj__0;
}

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj85  ;
    struct sType*  __dec_obj86  ;
    struct list$1sType$ph* __dec_obj90;
    struct sType*  __dec_obj91  ;
    struct sNode* __dec_obj92;
    struct sNode* __dec_obj93;
    char*  __dec_obj94  ;
    char*  __dec_obj95  ;
    char*  __dec_obj96  ;
    char*  __dec_obj97  ;
    char*  __dec_obj98  ;
    char*  __dec_obj99  ;
    char*  __dec_obj100  ;
    char*  __dec_obj101  ;
    struct list$1sNode$ph* __dec_obj105;
    struct list$1sNode$ph* __dec_obj106;
    struct list$1int$* __dec_obj107;
    struct list$1int$* __dec_obj108;
    struct sType*  __dec_obj109  ;
    char*  __dec_obj110  ;
    struct list$1sType$ph* __dec_obj111;
    struct list$1char$ph* __dec_obj115;
    struct sType*  __dec_obj116  ;
    struct sNode* __dec_obj117;
    struct list$1sNode$ph* __dec_obj118;
    if(self==(void*)0) {
                __result_obj__0 = (struct sType* )come_increment_ref_count((void*)0, "sType_clone", 4, 468);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 4, 469);
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 470, "struct sType* "), "sType_clone", 5, 471);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj85=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 473);
        come_call_finalizer(sType_finalize, __dec_obj85,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 472);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj86=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 475);
        come_call_finalizer(sType_finalize, __dec_obj86,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 474);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj90=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 505);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj90,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 504);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj91=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 507);
        come_call_finalizer(sType_finalize, __dec_obj91,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 506);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj92=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 516);
        (__dec_obj92 ? __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 515) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj93=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 518);
        (__dec_obj93 ? __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 517) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj94=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 519, "char* "), "sType_clone", 14, 521);
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 520);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj95=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 522, "char* "), "sType_clone", 15, 524);
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 523);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj96=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 525, "char* "), "sType_clone", 16, 527);
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 526);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj97=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 528, "char* "), "sType_clone", 17, 530);
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 529);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj98=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 531, "char* "), "sType_clone", 18, 533);
        __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 532);
    }
    if(self!=((void*)0)) {
        result->mNew=self->mNew;
    }
    if(self!=((void*)0)) {
        result->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result->mAtomic=self->mAtomic;
    }
    if(self!=((void*)0)) {
        result->mThreadLocal=self->mThreadLocal;
    }
    if(self!=((void*)0)) {
        result->mNorecord=self->mNorecord;
    }
    if(self!=((void*)0)) {
        result->mThread=self->mThread;
    }
    if(self!=((void*)0)) {
        result->mComplex=self->mComplex;
    }
    if(self!=((void*)0)) {
        result->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result->mNoreturn=self->mNoreturn;
    }
    if(self!=((void*)0)) {
        result->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result->mWeak=self->mWeak;
    }
    if(self!=((void*)0)) {
        result->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result->mChannel=self->mChannel;
    }
    if(self!=((void*)0)) {
        result->mDefferRightValue=self->mDefferRightValue;
    }
    if(self!=((void*)0)) {
        result->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result->mSlice=self->mSlice;
    }
    if(self!=((void*)0)) {
        result->mOptional=self->mOptional;
    }
    if(self!=((void*)0)) {
        result->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result->mTypeName=self->mTypeName;
    }
    if(self!=((void*)0)) {
        result->mAnonymous=self->mAnonymous;
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj99=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 534, "char* "), "sType_clone", 49, 536);
        __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 535);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj100=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 537, "char* "), "sType_clone", 51, 539);
        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 538);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj101=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 540, "char* "), "sType_clone", 54, 542);
        __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 541);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj105=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 572);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj105,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 571);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj106=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 574);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj106,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 573);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj107=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 594);
        come_call_finalizer(list$1int$_finalize, __dec_obj107,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 593);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj108=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 596);
        come_call_finalizer(list$1int$_finalize, __dec_obj108,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 595);
    }
    if(self!=((void*)0)) {
        result->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        result->mArrayPointerNum=self->mArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result->mPointerParen=self->mPointerParen;
    }
    if(self!=((void*)0)) {
        result->mMinusPointerNum=self->mMinusPointerNum;
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj109=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 598);
        come_call_finalizer(sType_finalize, __dec_obj109,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 597);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj110=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 599, "char* "), "sType_clone", 67, 601);
        __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 600);
    }
    if(self!=((void*)0)) {
        result->mOriginalTypePointerNum=self->mOriginalTypePointerNum;
    }
    if(self!=((void*)0)) {
        result->mOriginalTypePointerHeap=self->mOriginalTypePointerHeap;
    }
    if(self!=((void*)0)) {
        result->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj111=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 603);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj111,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 602);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj115=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 635);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj115,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 634);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj116=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 637);
        come_call_finalizer(sType_finalize, __dec_obj116,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 636);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj117=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 639);
        (__dec_obj117 ? __dec_obj117 = come_decrement_ref_count(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 638) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj118=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 641);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj118,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 640);
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "sType_clone", 77, 642);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 643);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 644);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph$p_clone"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sType$ph* result;
    struct list_item$1sType$ph* it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 476);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 477);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1513, 478, "struct list$1sType$ph*"), "/usr/local/include/neo-c.h", 1513, 482)), "/usr/local/include/neo-c.h", 1513, 483);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1518, 498));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "/usr/local/include/neo-c.h", 1521, 499));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 500);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 501);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 502);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 479);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 480);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 481);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj87  ;
    struct list_item$1sType$ph* litem_45;
    struct sType*  __dec_obj88  ;
    struct list_item$1sType$ph* litem_46;
    struct sType*  __dec_obj89  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1531, 484);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1534, 485, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1534, 486);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj87=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 488);
        come_call_finalizer(sType_finalize, __dec_obj87,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1538, 487);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_45=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1544, 489, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1544, 490);
        litem_45->prev=self->head;
        litem_45->next=((void*)0);
        __dec_obj88=litem_45->item,
        litem_45->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 492);
        come_call_finalizer(sType_finalize, __dec_obj88,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1548, 491);
        self->tail=litem_45;
        self->head->next=litem_45;
    }
    else {
        __right_value0 = (void*)0;
        litem_46=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1554, 493, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1554, 494);
        litem_46->prev=self->tail;
        litem_46->next=((void*)0);
        __dec_obj89=litem_46->item,
        litem_46->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 496);
        come_call_finalizer(sType_finalize, __dec_obj89,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1558, 495);
        self->tail->next=litem_46;
        self->tail=litem_46;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1566, 497);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1sType$ph* it;
    struct list_item$1sType$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 503);
    }
            neo_current_frame = fr.prev;
}

static struct sNode* sNode_clone(struct sNode* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sNode_clone"; neo_current_frame = &fr;
    struct sNode* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct sNode* result;
    if(self==(void*)0) {
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 508);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 509):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 510, "struct sNode*"), "sNode_clone", 5, 511);
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result->sline_real=self->sline_real;
    }
    if(self!=((void*)0)) {
        result->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result->kind=self->kind;
    }
    if(self!=((void*)0)) {
        result->left_value=self->left_value;
    }
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 512);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 513):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 514):(void*)0);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_clone"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1sNode$ph* result;
    struct list_item$1sNode$ph* it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 543);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 544);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1513, 545, "struct list$1sNode$ph*"), "/usr/local/include/neo-c.h", 1513, 549)), "/usr/local/include/neo-c.h", 1513, 550);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1518, 565));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "/usr/local/include/neo-c.h", 1521, 566));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 567);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 568);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 569);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 546);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 547);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 548);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj102;
    struct list_item$1sNode$ph* litem_47;
    struct sNode* __dec_obj103;
    struct list_item$1sNode$ph* litem_48;
    struct sNode* __dec_obj104;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1531, 551):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1534, 552, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1534, 553);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj102=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 555);
        (__dec_obj102 ? __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 554) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_47=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1544, 556, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1544, 557);
        litem_47->prev=self->head;
        litem_47->next=((void*)0);
        __dec_obj103=litem_47->item,
        litem_47->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 559);
        (__dec_obj103 ? __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 558) :0);
        self->tail=litem_47;
        self->head->next=litem_47;
    }
    else {
        __right_value0 = (void*)0;
        litem_48=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1554, 560, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1554, 561);
        litem_48->prev=self->tail;
        litem_48->next=((void*)0);
        __dec_obj104=litem_48->item,
        litem_48->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 563);
        (__dec_obj104 ? __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 562) :0);
        self->tail->next=litem_48;
        self->tail=litem_48;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1566, 564):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 570);
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
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 575);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 576);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "/usr/local/include/neo-c.h", 1513, 577, "struct list$1int$*"), "/usr/local/include/neo-c.h", 1513, 581)), "/usr/local/include/neo-c.h", 1513, 582);
    it=self->head;
    while(it!=((void*)0)) {
        if(0) {
            list$1int$_add(result,it->item);
        }
        else {
            list$1int$_add(result,it->item);
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 589);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 590);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 591);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 578);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 579);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 580);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_49;
    struct list_item$1int$* litem_50;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1534, 583, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1534, 584);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_49=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1544, 585, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1544, 586);
        litem_49->prev=self->head;
        litem_49->next=((void*)0);
        litem_49->item=item;
        self->tail=litem_49;
        self->head->next=litem_49;
    }
    else {
        __right_value0 = (void*)0;
        litem_50=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1554, 587, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1554, 588);
        litem_50->prev=self->tail;
        litem_50->next=((void*)0);
        litem_50->item=item;
        self->tail->next=litem_50;
        self->tail=litem_50;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1int$_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_finalize"; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 592);
    }
            neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_clone"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* result;
    struct list_item$1char$ph* it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "/usr/local/include/neo-c.h", 1511, 604);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1511, 605);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "/usr/local/include/neo-c.h", 1513, 606, "struct list$1char$ph*"), "/usr/local/include/neo-c.h", 1513, 610)), "/usr/local/include/neo-c.h", 1513, 611);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1518, 626, "char* "), "/usr/local/include/neo-c.h", 1518, 627));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "/usr/local/include/neo-c.h", 1521, 628, "char* "), "/usr/local/include/neo-c.h", 1521, 629));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/usr/local/include/neo-c.h", 1527, 630);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 631);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1527, 632);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1485, 607);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 608);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1485, 609);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj112  ;
    struct list_item$1char$ph* litem_51;
    char*  __dec_obj113  ;
    struct list_item$1char$ph* litem_52;
    char*  __dec_obj114  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1531, 612));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1534, 613, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1534, 614);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj112=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1538, 616);
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1538, 615);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_51=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1544, 617, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1544, 618);
        litem_51->prev=self->head;
        litem_51->next=((void*)0);
        __dec_obj113=litem_51->item,
        litem_51->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1548, 620);
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1548, 619);
        self->tail=litem_51;
        self->head->next=litem_51;
    }
    else {
        __right_value0 = (void*)0;
        litem_52=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1554, 621, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1554, 622);
        litem_52->prev=self->tail;
        litem_52->next=((void*)0);
        __dec_obj114=litem_52->item,
        litem_52->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1558, 624);
        __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1558, 623);
        self->tail->next=litem_52;
        self->tail=litem_52;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1566, 625));
    neo_current_frame = fr.prev;
    return __result_obj__0;
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 633);
    }
            neo_current_frame = fr.prev;
}

static struct sClass*  map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sClass*  default_value  ;
    struct sClass*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sClass* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 653);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 662);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 663);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 664);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 665);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 666);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 667);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 668);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 669);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 670);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 671);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 672);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 673);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 674);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 675);
    return __result_obj__0;
}

static void sClass_finalize(struct sClass*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sClass_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 2, 654));
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, self->mFields, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sClass_finalize}", 3, 659);
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count(self->mParentClassName, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 4, 660));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sClass_finalize", 5, 661));
    }
            neo_current_frame = fr.prev;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1506, 658);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 657);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 655));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 656);
    }
            neo_current_frame = fr.prev;
}

static struct sClass*  map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_operator_load_element"; neo_current_frame = &fr;
    struct sClass*  default_value  ;
    struct sClass*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sClass* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 676);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 677);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 678);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 679);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 680);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 681);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 682);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 683);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 684);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 685);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 686);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 687);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 688);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 689);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 690);
    return __result_obj__0;
}

static _Bool list$1char$ph_contained(struct list$1char$ph* self, char*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_contained"; neo_current_frame = &fr;
    char*  it  ;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    for(it=list$1char$ph_begin(self)    ;!list$1char$ph_end(self);it=list$1char$ph_next(self)){
        if((!by_pointer&&string_equals(it,item))||(by_pointer&&it==item)) {
                        neo_current_frame = fr.prev;
            return (_Bool)1;
        }
    }
        neo_current_frame = fr.prev;
    return (_Bool)0;
            neo_current_frame = fr.prev;
}

static char*  list$1char$ph_begin(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_61  ;
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
    memset(&result_61,0,sizeof(char* ));
        __result_obj__0 = result_61;
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
    char*  result_62  ;
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
    memset(&result_62,0,sizeof(char* ));
        __result_obj__0 = result_62;
    neo_current_frame = fr.prev;
    return __result_obj__0;
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

static char*  list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_63  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 790);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2150, 791));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2150, 792));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2153, 793));
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 794);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2161, 795));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_63,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value_63, "/usr/local/include/neo-c.h", 2169, 796);
    (default_value_63 = come_decrement_ref_count(default_value_63, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2169, 797));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2169, 798));
    return __result_obj__0;
}

static char*  list$1char$ph_operator_load_element(struct list$1char$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_operator_load_element"; neo_current_frame = &fr;
    char*  default_value  ;
    char*  __result_obj__0  ;
    struct list_item$1char$ph* it;
    int i;
    char*  default_value_64  ;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(char* ));
                __result_obj__0 = (char* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 2150, 799);
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2150, 800));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2150, 801));
        return __result_obj__0;
        (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 2153, 802));
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (char* )come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 2161, 803);
            neo_current_frame = fr.prev;
            (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2161, 804));
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_64,0,sizeof(char* ));
        __result_obj__0 = (char* )come_increment_ref_count(default_value_64, "/usr/local/include/neo-c.h", 2169, 805);
    (default_value_64 = come_decrement_ref_count(default_value_64, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2169, 806));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/usr/local/include/neo-c.h", 2169, 807));
    return __result_obj__0;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize}", 2, 836);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize}", 3, 837);
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->v3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$ph_Bool$$p_finalize}", 4, 838);
    }
            neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_each(struct list$1sNode$ph* self, void* parent, void (*block)(void*,struct sNode*,int,_Bool*))
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_each"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    _Bool end_flag;
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        end_flag=(_Bool)0;
        block(parent,(struct sNode*)come_increment_ref_count(it->item, "/usr/local/include/neo-c.h", 1733, 880),i,&end_flag);
        if(end_flag==(_Bool)1) {
            break;
        }
        it=it->next;
        i++;
    }
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void method_block1_31type2nc(struct __current_stack1__* parent, struct sNode* it, int it2, _Bool* it3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block1_31type2nc"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    list$1sNode$ph_add((*(parent->type_33))->mArrayNum,(struct sNode*)come_increment_ref_count(sNode_clone(it), "31type2.nc", 1205, 881));
    ((it) ? it = come_decrement_ref_count(it, ((struct sNode*)it)->finalize, ((struct sNode*)it)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1208, 882):(void*)0);
                neo_current_frame = fr.prev;
}

static struct buffer*  map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct buffer*  default_value  ;
    struct buffer*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct buffer* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 984);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 985);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 986);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 987);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 988);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 989);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 990);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 991);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 992);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 993);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 994);
            neo_current_frame = fr.prev;
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 995);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 996);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 997);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 998);
    return __result_obj__0;
}

static struct buffer*  map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phbuffer$ph_operator_load_element"; neo_current_frame = &fr;
    struct buffer*  default_value  ;
    struct buffer*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct buffer* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3515, 999);
        come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 1000);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3515, 1001);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3526, 1002);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3526, 1003);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3526, 1004);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3535, 1005);
                come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 1006);
                neo_current_frame = fr.prev;
                come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3535, 1007);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3539, 1008);
            come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 1009);
            neo_current_frame = fr.prev;
            come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3539, 1010);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct buffer* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3543, 1011);
    come_call_finalizer(buffer_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 1012);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3543, 1013);
    return __result_obj__0;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
                neo_current_frame = fr.prev;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_push_back"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj184  ;
    struct list_item$1sType$ph* litem_82;
    struct sType*  __dec_obj185  ;
    struct list_item$1sType$ph* litem_83;
    struct sType*  __dec_obj186  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1615, 1104);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1619, 1105, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1619, 1106);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj184=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 1108);
        come_call_finalizer(sType_finalize, __dec_obj184,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1623, 1107);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_82=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1629, 1109, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1629, 1110);
        litem_82->prev=self->head;
        litem_82->next=((void*)0);
        __dec_obj185=litem_82->item,
        litem_82->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 1112);
        come_call_finalizer(sType_finalize, __dec_obj185,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1633, 1111);
        self->tail=litem_82;
        self->head->next=litem_82;
    }
    else {
        __right_value0 = (void*)0;
        litem_83=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "/usr/local/include/neo-c.h", 1639, 1113, "struct list_item$1sType$ph*"))), "/usr/local/include/neo-c.h", 1639, 1114);
        litem_83->prev=self->tail;
        litem_83->next=((void*)0);
        __dec_obj186=litem_83->item,
        litem_83->item=(struct sType* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 1116);
        come_call_finalizer(sType_finalize, __dec_obj186,(void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1643, 1115);
        self->tail->next=litem_83;
        self->tail=litem_83;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1651, 1117);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sClass*  map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_at"; neo_current_frame = &fr;
    struct sClass*  __result_obj__0  ;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3141, 1141);
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 1142);
        neo_current_frame = fr.prev;
        come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3141, 1143);
        return __result_obj__0;
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(self->items[it], "/usr/local/include/neo-c.h", 3152, 1144);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3152, 1145);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3152, 1146);
                return __result_obj__0;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                                __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3161, 1147);
                come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 1148);
                neo_current_frame = fr.prev;
                come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3161, 1149);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3165, 1150);
            come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 1151);
            neo_current_frame = fr.prev;
            come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3165, 1152);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3169, 1153);
    come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 1154);
    neo_current_frame = fr.prev;
    come_call_finalizer(sClass_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 3169, 1155);
    return __result_obj__0;
}

static int list$1sType$ph_length(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_length"; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
                neo_current_frame = fr.prev;
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char*  key  , struct sClass*  item  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_insert"; neo_current_frame = &fr;
    struct map$2char$phsClass$ph* __result_obj__0;
    unsigned int hash;
    unsigned int it;
    _Bool same_key_exist;
    char*  it2  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3348, 1186));
        come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3348, 1187);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash=string_get_hash_key(((char* )key))%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key)) {
                if(1) {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    (self->keys[it] = come_decrement_ref_count(self->keys[it], (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3364, 1206));
                    self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3365, 1207);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it],(_Bool)0);
                    self->keys[it]=key;
                }
                if(1) {
                    come_call_finalizer(sClass_finalize, self->items[it], (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3372, 1208);
                    self->items[it]=(struct sClass* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3373, 1209);
                }
                else {
                    self->items[it]=item;
                }
                break;
            }
            it++;
            if(it>=self->size) {
                it=0;
            }
            else if(it==hash) {
                printf("unexpected error in map.insert\n");
                stackframe2(self);
                exit(2);
            }
        }
        else {
            self->item_existance[it]=(_Bool)1;
            if(1) {
                self->keys[it]=(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3395, 1210);
            }
            else {
                self->keys[it]=key;
            }
            if(1) {
                self->items[it]=(struct sClass* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 3401, 1211);
            }
            else {
                self->items[it]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist=(_Bool)0;
    for(it2=list$1char$ph_begin(self->key_list)    ;!list$1char$ph_end(self->key_list);it2=list$1char$ph_next(self->key_list)){
        if((!by_pointer&&string_equals(it2,key))||(by_pointer&&it2==key)) {
            same_key_exist=(_Bool)1;
        }
    }
    if(!same_key_exist) {
        list$1char$ph_push_back(self->key_list,(char* )come_increment_ref_count(key, "/usr/local/include/neo-c.h", 3421, 1226));
    }
        __result_obj__0 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3424, 1227));
    come_call_finalizer(sClass_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3424, 1228);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_rehash"; neo_current_frame = &fr;
    int size;
    void* __right_value0 = (void*)0;
    char**  keys  ;
    struct sClass**  items  ;
    _Bool* item_existance;
    int len;
    char*  it  ;
    struct sClass*  default_value  ;
    struct sClass*  it2  ;
    unsigned int hash;
    int n;
    struct sClass*  default_value_87  ;
    size=self->size*10;
    keys=(char** )come_increment_ref_count(((char** )(__right_value0=(char* *)come_calloc(1, sizeof(char* )*(1*(size)), "/usr/local/include/neo-c.h", 3272, 1188, "char** "))), "/usr/local/include/neo-c.h", 3272, 1189);
    __right_value0 = (void*)0;
    items=(struct sClass** )come_increment_ref_count(((struct sClass** )(__right_value0=(struct sClass* *)come_calloc(1, sizeof(struct sClass* )*(1*(size)), "/usr/local/include/neo-c.h", 3273, 1190, "struct sClass** "))), "/usr/local/include/neo-c.h", 3273, 1191);
    __right_value0 = (void*)0;
    item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value0=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size)), "/usr/local/include/neo-c.h", 3274, 1192, "_Bool*"))), "/usr/local/include/neo-c.h", 3274, 1193);
    len=0;
    for(it=map$2char$phsClass$ph_begin(self)    ;!map$2char$phsClass$ph_end(self);it=map$2char$phsClass$ph_next(self)){
        memset(&default_value,0,sizeof(struct sClass* ));
        __right_value0 = (void*)0;
        it2=(struct sClass* )come_increment_ref_count(map$2char$phsClass$ph_at(self,it,(struct sClass* )come_increment_ref_count(default_value, "/usr/local/include/neo-c.h", 3281, 1194),(_Bool)0), "/usr/local/include/neo-c.h", 3281, 1195);
        hash=string_get_hash_key(((char* )it))%size;
        n=hash;
        while((_Bool)1) {
            if(item_existance[n]) {
                n++;
                if(n>=size) {
                    n=0;
                }
                else if(n==hash) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe2(self);
                    exit(2);
                }
            }
            else {
                item_existance[n]=(_Bool)1;
                keys[n]=it;
                memset(&default_value_87,0,sizeof(struct sClass* ));
                __right_value0 = (void*)0;
                items[n]=((struct sClass* )(__right_value0=map$2char$phsClass$ph_at(self,it,(struct sClass* )come_increment_ref_count(default_value_87, "/usr/local/include/neo-c.h", 3304, 1196),(_Bool)0)));
                len++;
                come_call_finalizer(sClass_finalize, default_value_87, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3307, 1197);
                break;
                come_call_finalizer(sClass_finalize, default_value_87, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3309, 1198);
            }
        }
        come_call_finalizer(sClass_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3312, 1199);
        come_call_finalizer(sClass_finalize, it2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 3312, 1200);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 3313, 1201));
    come_free((char*)self->keys);
    self->keys=keys;
    self->items=items;
    self->item_existance=item_existance;
    self->size=size;
    self->len=len;
            neo_current_frame = fr.prev;
}

static char*  map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_85  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(char* ));
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
                __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_85,0,sizeof(char* ));
        __result_obj__0 = result_85;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        neo_current_frame = fr.prev;
}

static char*  map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsClass$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_86  ;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result,0,sizeof(char* ));
                __result_obj__0 = result;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
                __result_obj__0 = self->key_list->it->item;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    memset(&result_86,0,sizeof(char* ));
        __result_obj__0 = result_86;
    neo_current_frame = fr.prev;
    return __result_obj__0;
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
    it=self->head;
    while(it!=((void*)0)) {
        if((!by_pointer&&string_equals(it->item,item))||(by_pointer&&it->item==item)) {
            list$1char$ph_delete(self,it2,it2+1);
            break;
        }
        it2++;
        it=it->next;
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
    struct list_item$1char$ph* it_88;
    int i_89;
    struct list_item$1char$ph* prev_it_90;
    struct list_item$1char$ph* it_91;
    struct list_item$1char$ph* head_prev_it;
    struct list_item$1char$ph* tail_it;
    int i_92;
    struct list_item$1char$ph* prev_it_93;
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
        list$1char$ph_reset(self);
    }
    else if(head==0) {
        it=self->head;
        i=0;
        while(it!=((void*)0)) {
            if(i<tail) {
                prev_it=it;
                it=it->next;
                i++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1934, 1203);
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
        it_88=self->head;
        i_89=0;
        while(it_88!=((void*)0)) {
            if(i_89==head) {
                self->tail=it_88->prev;
                self->tail->next=((void*)0);
            }
            if(i_89>=head) {
                prev_it_90=it_88;
                it_88=it_88->next;
                i_89++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_90, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1964, 1204);
                self->len--;
            }
            else {
                it_88=it_88->next;
                i_89++;
            }
        }
    }
    else {
        it_91=self->head;
        head_prev_it=((void*)0);
        tail_it=((void*)0);
        i_92=0;
        while(it_91!=((void*)0)) {
            if(i_92==head) {
                head_prev_it=it_91->prev;
            }
            if(i_92==tail) {
                tail_it=it_91;
            }
            if(i_92>=head&&i_92<tail) {
                prev_it_93=it_91;
                it_91=it_91->next;
                i_92++;
                come_call_finalizer(list_item$1char$ph$p_finalize, prev_it_93, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1997, 1205);
                self->len--;
            }
            else {
                it_91=it_91->next;
                i_92++;
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
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1856, 1202);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj192  ;
    struct list_item$1char$ph* litem_94;
    char*  __dec_obj193  ;
    struct list_item$1char$ph* litem_95;
    char*  __dec_obj194  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1615, 1212));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1619, 1213, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1619, 1214);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj192=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 1216);
        __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1623, 1215);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_94=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1629, 1217, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1629, 1218);
        litem_94->prev=self->head;
        litem_94->next=((void*)0);
        __dec_obj193=litem_94->item,
        litem_94->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 1220);
        __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1633, 1219);
        self->tail=litem_94;
        self->head->next=litem_94;
    }
    else {
        __right_value0 = (void*)0;
        litem_95=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "/usr/local/include/neo-c.h", 1639, 1221, "struct list_item$1char$ph*"))), "/usr/local/include/neo-c.h", 1639, 1222);
        litem_95->prev=self->tail;
        litem_95->next=((void*)0);
        __dec_obj194=litem_95->item,
        litem_95->item=(char* )come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 1224);
        __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1643, 1223);
        self->tail->next=litem_95;
        self->tail=litem_95;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/usr/local/include/neo-c.h", 1651, 1225));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sType*  list$1sType$ph_begin(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_begin"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_99  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sType* ));
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
    memset(&result_99,0,sizeof(struct sType* ));
        __result_obj__0 = result_99;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
                neo_current_frame = fr.prev;
}

static struct sType*  list$1sType$ph_next(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_next"; neo_current_frame = &fr;
    struct sType*  result  ;
    struct sType*  __result_obj__0  ;
    struct sType*  result_100  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sType* ));
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
    memset(&result_100,0,sizeof(struct sType* ));
        __result_obj__0 = result_100;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_reset"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    struct list_item$1sNode$ph* it;
    struct list_item$1sNode$ph* prev_it;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/usr/local/include/neo-c.h}", 1856, 1318);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_push_back"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj209;
    struct list_item$1sNode$ph* litem_104;
    struct sNode* __dec_obj210;
    struct list_item$1sNode$ph* litem_105;
    struct sNode* __dec_obj211;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1615, 1320):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1619, 1321, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1619, 1322);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj209=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1623, 1324);
        (__dec_obj209 ? __dec_obj209 = come_decrement_ref_count(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1623, 1323) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_104=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1629, 1325, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1629, 1326);
        litem_104->prev=self->head;
        litem_104->next=((void*)0);
        __dec_obj210=litem_104->item,
        litem_104->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1633, 1328);
        (__dec_obj210 ? __dec_obj210 = come_decrement_ref_count(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1633, 1327) :0);
        self->tail=litem_104;
        self->head->next=litem_104;
    }
    else {
        __right_value0 = (void*)0;
        litem_105=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "/usr/local/include/neo-c.h", 1639, 1329, "struct list_item$1sNode$ph*"))), "/usr/local/include/neo-c.h", 1639, 1330);
        litem_105->prev=self->tail;
        litem_105->next=((void*)0);
        __dec_obj211=litem_105->item,
        litem_105->item=(struct sNode*)come_increment_ref_count(item, "/usr/local/include/neo-c.h", 1643, 1332);
        (__dec_obj211 ? __dec_obj211 = come_decrement_ref_count(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0,0, (void*)0, "/usr/local/include/neo-c.h", 1643, 1331) :0);
        self->tail->next=litem_105;
        self->tail=litem_105;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "/usr/local/include/neo-c.h", 1651, 1333):(void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_push_back"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_106;
    struct list_item$1int$* litem_107;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1619, 1335, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1619, 1336);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_106=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1629, 1337, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1629, 1338);
        litem_106->prev=self->head;
        litem_106->next=((void*)0);
        litem_106->item=item;
        self->tail=litem_106;
        self->head->next=litem_106;
    }
    else {
        __right_value0 = (void*)0;
        litem_107=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "/usr/local/include/neo-c.h", 1639, 1339, "struct list_item$1int$*"))), "/usr/local/include/neo-c.h", 1639, 1340);
        litem_107->prev=self->tail;
        litem_107->next=((void*)0);
        litem_107->item=item;
        self->tail->next=litem_107;
        self->tail=litem_107;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void method_block2_31type2nc(struct __current_stack2__* parent, struct sNode* it, int it2, _Bool* it3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block2_31type2nc"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    list$1sNode$ph_add((*(parent->type_33))->mVarNameArrayNum,(struct sNode*)come_increment_ref_count(sNode_clone(it), "31type2.nc", 1687, 1342));
    ((it) ? it = come_decrement_ref_count(it, ((struct sNode*)it)->finalize, ((struct sNode*)it)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1690, 1343):(void*)0);
            neo_current_frame = fr.prev;
}

void method_block3_31type2nc(struct __current_stack3__* parent, struct sNode* it, int it2, _Bool* it3)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "method_block3_31type2nc"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    list$1sNode$ph_add((*(parent->type_33))->mArrayNum,(struct sNode*)come_increment_ref_count(sNode_clone(it), "31type2.nc", 1691, 1344));
    ((it) ? it = come_decrement_ref_count(it, ((struct sNode*)it)->finalize, ((struct sNode*)it)->_protocol_obj, 0, 0,(void*)0, "31type2.nc", 1694, 1345):(void*)0);
            neo_current_frame = fr.prev;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize_with_values(struct list$1sNode$ph* self, int num_value, struct sNode** values)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize_with_values"; neo_current_frame = &fr;
    int i;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1sNode$ph_push_back(self,(struct sNode*)come_increment_ref_count(values[i], "/usr/local/include/neo-c.h", 1494, 1359));
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "/usr/local/include/neo-c.h", 1497, 1360);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1497, 1361);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/usr/local/include/neo-c.h}", 1497, 1362);
    return __result_obj__0;
}

