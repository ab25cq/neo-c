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
    unsigned int* hashes;
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
    unsigned int* hashes;
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

struct map$2char$phsFun$ph
{
    char**  keys  ;
    unsigned int* hashes;
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
    unsigned int* hashes;
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
    unsigned int* hashes;
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
    unsigned int* hashes;
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
    unsigned int* hashes;
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
    char* p;
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
char* parsecmp_tail(const char* p2, struct sInfo*  info  );
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
void on_load_object(struct sType*  type  , char* obj, struct sInfo*  info  );
struct sType*  solve_method_generics(struct sType*  type  , struct sInfo*  info  );
void std_move(struct sType*  left_type  , struct sType*  right_type  , struct CVALUE*  right_value  , struct sInfo*  info  );
_Bool create_equals_method(struct sType*  type  , struct sInfo*  info  );
_Bool create_operator_equals_method(struct sType*  type  , struct sInfo*  info  );
_Bool create_operator_not_equals_method(struct sType*  type  , struct sInfo*  info  );
_Bool require_explicit_method_in_low_memory_mode(struct sType*  type  , const char* fun_name, struct sInfo*  info  );
struct sType*  solve_generics(struct sType*  type  , struct sType*  generics_type  , struct sInfo*  info  );
void free_objects_of_match_lv_tables(struct sInfo*  info  );
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
int match_common_attribute_keyword_len(const char* p);
char*  parse_word(_Bool digits, struct sInfo*  info  );
char*  backtrace_parse_word(struct sInfo*  info  );
void skip_spaces_and_lf(struct sInfo*  info  );
void skip_spaces_and_lf2(struct sInfo*  info  );
struct tuple2$2char$ph_Bool$* create_generics_fun(char*  fun_name  , struct sGenericsFun*  generics_fun  , struct sType*  generics_type  , struct sInfo*  info  );
struct tuple3$3sType$phchar$ph_Bool$* parse_type(struct sInfo*  info  , _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
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
void on_drop_object(struct sType*  type  , char* obj, struct sInfo*  info  );
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType*  sType_clone(struct sType*  self  );
static void sType_finalize(struct sType*  self  );
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
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
static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static void sFun_finalize(struct sFun*  self  );
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar*  self  );
static void sBlock_finalize(struct sBlock*  self  );
static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  );
static struct sGenericsFun*  map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  );
static void sGenericsFun_finalize(struct sGenericsFun*  self  );
static struct sGenericsFun*  map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  );
static void tuple2$2char$ph_Bool$$p_finalize(struct tuple2$2char$ph_Bool$* self);
void free_object(struct sType*  type  , char* obj, _Bool no_decrement, _Bool no_free, struct sInfo*  info  , _Bool ret_value);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject*  self  );
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void CVALUE_finalize(struct CVALUE*  self  );
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
struct tuple2$2sType$phchar$ph* clone_object(struct sType*  type  , char* obj, struct sInfo*  info  );
static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char*  v2  );
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
void free_right_value_objects(struct sInfo*  info  );
static struct sRightValueObject*  list$1sRightValueObject$ph_begin(struct list$1sRightValueObject$ph* self);
static _Bool list$1sRightValueObject$ph_end(struct list$1sRightValueObject$ph* self);
static struct sRightValueObject*  list$1sRightValueObject$ph_next(struct list$1sRightValueObject$ph* self);
struct sVar*  get_variable_from_table(struct sVarTable*  table  , char* name);
static struct sVar*  map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  );
static struct sVar*  map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  );
void free_objects(struct sVarTable*  table  , struct sVar*  ret_value  , struct sInfo*  info  , _Bool ret_value_is_field);
static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
void free_objects_on_return(struct sBlock*  current_block  , struct sInfo*  info  , struct sVar*  ret_value  , _Bool top_block, _Bool ret_value_is_field);
void free_objects_on_break(struct sInfo*  info  );
_Bool existance_free_objects(struct sVarTable*  table  , struct sVar*  ret_value  , struct sInfo*  info  );
_Bool existance_free_objects_on_return(struct sBlock*  current_block  , struct sInfo*  info  , struct sVar*  ret_value  , _Bool top_block);
_Bool existance_free_right_value_objects(struct sInfo*  info  );
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
void on_drop_object(struct sType*  type  , char* obj, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "on_drop_object"; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    struct sType*  type_  ;
    char*  c_value  ;
    struct sType*  type2  ;
    char*  fun_name2  ;
    struct sFun*  dropper  ;
    char*  none_generics_name  ;
    char*  generics_fun_name  ;
    struct sGenericsFun*  generics_fun  ;
    struct tuple2$2char$ph_Bool$* multiple_assign_var1
;    char*  name  =0;
    _Bool err=0;
    int i;
    char*  new_fun_name  ;
    char*  __dec_obj35  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    memset(&i, 0, sizeof(i));
    if(gComeC) {
                neo_current_frame = fr.prev;
        return;
    }
    if(info->no_output_come_code) {
                neo_current_frame = fr.prev;
        return;
    }
    type_=(struct sType* )come_increment_ref_count(get_no_solved_type2(type), "34heap2.nc", 12, 1);
    if(type_->mClass->mStruct||list$1sType$ph_length(type_->mGenericsTypes)>0) {
        __right_value0 = (void*)0;
        c_value=(char* )come_increment_ref_count(__builtin_string(obj,"34heap2.nc",16), "34heap2.nc", 16, 2);
        const char* fun_name="on_drop";
        __right_value0 = (void*)0;
        type2=(struct sType* )come_increment_ref_count(sType_clone(type_), "34heap2.nc", 20, 212);
        type2->mHeap=(_Bool)0;
        __right_value0 = (void*)0;
        fun_name2=(char* )come_increment_ref_count(create_method_name(type_,(_Bool)0,fun_name,info,(_Bool)1), "34heap2.nc", 23, 213);
        dropper=0;
        if(list$1sType$ph_length(type_->mGenericsTypes)>0) {
            __right_value0 = (void*)0;
            dropper=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            if(dropper==0) {
                __right_value0 = (void*)0;
                none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type2->mClass->mName), "34heap2.nc", 30, 270);
                __right_value0 = (void*)0;
                generics_fun_name=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name), "34heap2.nc", 32, 271);
                __right_value0 = (void*)0;
                generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name)));
                if(generics_fun) {
                    __right_value0 = (void*)0;
                    multiple_assign_var1=((struct tuple2$2char$ph_Bool$*)(__right_value0=create_generics_fun((char* )come_increment_ref_count(fun_name2, "34heap2.nc", 36, 312),generics_fun,type_,info)));
                    name=(char* )come_increment_ref_count(multiple_assign_var1->v1, "34heap2.nc", 36, 313);
                    err=multiple_assign_var1->v2;
                    come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "34heap2.nc}", 36, 315);
                    if(!err) {
                        printf("%s %d: can't create generics dropper\n",info->sname,info->sline);
                        exit(2);
                    }
                    __right_value0 = (void*)0;
                    dropper=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 44, 316));
                }
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 45, 317));
                (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 45, 318));
            }
        }
        else {
            for(i=128-1            ;i>=1;i--){
                __right_value0 = (void*)0;
                new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i), "34heap2.nc", 49, 319);
                __right_value0 = (void*)0;
                dropper=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
                if(dropper) {
                    __right_value0 = (void*)0;
                    __dec_obj35=fun_name2,
                    fun_name2=(char* )come_increment_ref_count(__builtin_string(new_fun_name,"34heap2.nc",53), "34heap2.nc", 53, 321);
                    __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0, (void*)0, "34heap2.nc", 53, 320);
                    (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 54, 322));
                    break;
                }
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 58, 323));
            }
            if(dropper==0) {
                __right_value0 = (void*)0;
                dropper=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            }
        }
        if(dropper!=((void*)0)) {
            if(c_value) {
                __right_value0 = (void*)0;
                add_come_code(info,((char*)(__right_value2=xsprintf("\%s(\%s);\n",((char* )(__right_value0=string_to_string(fun_name2))),((char* )(__right_value1=string_to_string(c_value)))))));
                (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 66, 324));
                (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 66, 325));
                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 66, 326));
            }
        }
        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 70, 327));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 70, 328);
        (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 70, 329));
    }
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 72, 330);
    neo_current_frame = fr.prev;
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

static struct sType*  sType_clone(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_clone"; neo_current_frame = &fr;
    struct sType*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct sType*  result  ;
    struct sType*  __dec_obj1  ;
    struct sType*  __dec_obj2  ;
    struct list$1sType$ph* __dec_obj6;
    struct sType*  __dec_obj7  ;
    struct sNode* __dec_obj8;
    struct sNode* __dec_obj9;
    char*  __dec_obj10  ;
    char*  __dec_obj11  ;
    char*  __dec_obj12  ;
    char*  __dec_obj13  ;
    char*  __dec_obj14  ;
    char*  __dec_obj15  ;
    char*  __dec_obj16  ;
    char*  __dec_obj17  ;
    struct list$1sNode$ph* __dec_obj21;
    struct list$1sNode$ph* __dec_obj22;
    struct list$1int$* __dec_obj23;
    struct list$1int$* __dec_obj24;
    struct sType*  __dec_obj25  ;
    char*  __dec_obj26  ;
    struct list$1sType$ph* __dec_obj27;
    struct list$1char$ph* __dec_obj31;
    struct sType*  __dec_obj32  ;
    struct sNode* __dec_obj33;
    struct list$1sNode$ph* __dec_obj34;
    if(self==(void*)0) {
                __result_obj__0 = (struct sType* )come_increment_ref_count((void*)0, "sType_clone", 4, 3);
        neo_current_frame = fr.prev;
        come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 4, 36);
        return __result_obj__0;
    }
    result=(struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "sType_clone", 5, 37, "struct sType* "), "sType_clone", 5, 38);
    if(self!=((void*)0)) {
        result->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj1=result->mOriginalLoadVarType,
        result->mOriginalLoadVarType=(struct sType* )come_increment_ref_count(sType_clone(self->mOriginalLoadVarType), "sType_clone", 7, 40);
        come_call_finalizer(sType_finalize, __dec_obj1,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 7, 39);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj2=result->mChannelType,
        result->mChannelType=(struct sType* )come_increment_ref_count(sType_clone(self->mChannelType), "sType_clone", 8, 42);
        come_call_finalizer(sType_finalize, __dec_obj2,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 8, 41);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj6=result->mGenericsTypes,
        result->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes), "sType_clone", 9, 72);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj6,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 9, 71);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj7=result->mNoSolvedGenericsType,
        result->mNoSolvedGenericsType=(struct sType* )come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType), "sType_clone", 10, 74);
        come_call_finalizer(sType_finalize, __dec_obj7,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 10, 73);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj8=result->mSizeNum,
        result->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum), "sType_clone", 11, 83);
        (__dec_obj8 ? __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0, (void*)0, "sType_clone", 11, 82) :0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj9=result->mAlignas,
        result->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas), "sType_clone", 12, 85);
        (__dec_obj9 ? __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0, (void*)0, "sType_clone", 12, 84) :0);
    }
    if(self!=((void*)0)) {
        result->mAlignasDouble=self->mAlignasDouble;
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj10=result->mTupleName,
        result->mTupleName=(char* )come_increment_ref_count((char* )come_memdup(self->mTupleName, "sType_clone", 14, 86, "char* "), "sType_clone", 14, 88);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 14, 87);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj11=result->mAttribute,
        result->mAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mAttribute, "sType_clone", 15, 89, "char* "), "sType_clone", 15, 91);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 15, 90);
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj12=result->mVarAttribute,
        result->mVarAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mVarAttribute, "sType_clone", 16, 92, "char* "), "sType_clone", 16, 94);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 16, 93);
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj13=result->mMiddleAttribute,
        result->mMiddleAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mMiddleAttribute, "sType_clone", 17, 95, "char* "), "sType_clone", 17, 97);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 17, 96);
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj14=result->mPointerAttribute,
        result->mPointerAttribute=(char* )come_increment_ref_count((char* )come_memdup(self->mPointerAttribute, "sType_clone", 18, 98, "char* "), "sType_clone", 18, 100);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 18, 99);
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
        __dec_obj15=result->mAnonymousName,
        result->mAnonymousName=(char* )come_increment_ref_count((char* )come_memdup(self->mAnonymousName, "sType_clone", 49, 101, "char* "), "sType_clone", 49, 103);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 49, 102);
    }
    if(self!=((void*)0)) {
        result->mInnerStruct=self->mInnerStruct;
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj16=result->mInnerStructName,
        result->mInnerStructName=(char* )come_increment_ref_count((char* )come_memdup(self->mInnerStructName, "sType_clone", 51, 104, "char* "), "sType_clone", 51, 106);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 51, 105);
    }
    if(self!=((void*)0)) {
        result->mAnonymousVarName=self->mAnonymousVarName;
    }
    if(self!=((void*)0)) {
        result->mInline=self->mInline;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj17=result->mAsmName,
        result->mAsmName=(char* )come_increment_ref_count((char* )come_memdup(self->mAsmName, "sType_clone", 54, 107, "char* "), "sType_clone", 54, 109);
        __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 54, 108);
    }
    if(self!=((void*)0)) {
        result->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj21=result->mArrayNum,
        result->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum), "sType_clone", 57, 139);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj21,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 57, 138);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj22=result->mVarNameArrayNum,
        result->mVarNameArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mVarNameArrayNum), "sType_clone", 58, 141);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj22,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 58, 140);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj23=result->mArrayStatic,
        result->mArrayStatic=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayStatic), "sType_clone", 59, 161);
        come_call_finalizer(list$1int$_finalize, __dec_obj23,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 59, 160);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj24=result->mArrayRestrict,
        result->mArrayRestrict=(struct list$1int$*)come_increment_ref_count(list$1int$$p_clone(self->mArrayRestrict), "sType_clone", 60, 163);
        come_call_finalizer(list$1int$_finalize, __dec_obj24,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 60, 162);
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
        __dec_obj25=result->mTypedefOriginalType,
        result->mTypedefOriginalType=(struct sType* )come_increment_ref_count(sType_clone(self->mTypedefOriginalType), "sType_clone", 66, 165);
        come_call_finalizer(sType_finalize, __dec_obj25,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 66, 164);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj26=result->mOriginalTypeName,
        result->mOriginalTypeName=(char* )come_increment_ref_count((char* )come_memdup(self->mOriginalTypeName, "sType_clone", 67, 166, "char* "), "sType_clone", 67, 168);
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0, (void*)0, "sType_clone", 67, 167);
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
        __dec_obj27=result->mParamTypes,
        result->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes), "sType_clone", 71, 170);
        come_call_finalizer(list$1sType$ph_finalize, __dec_obj27,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 71, 169);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj31=result->mParamNames,
        result->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames), "sType_clone", 72, 202);
        come_call_finalizer(list$1char$ph_finalize, __dec_obj31,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 72, 201);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj32=result->mResultType,
        result->mResultType=(struct sType* )come_increment_ref_count(sType_clone(self->mResultType), "sType_clone", 73, 204);
        come_call_finalizer(sType_finalize, __dec_obj32,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 73, 203);
    }
    if(self!=((void*)0)) {
        result->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj33=result->mTypeOfNode,
        result->mTypeOfNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mTypeOfNode), "sType_clone", 75, 206);
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0, (void*)0, "sType_clone", 75, 205) :0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        __right_value0 = (void*)0;
        __dec_obj34=result->mHeapArrayNum,
        result->mHeapArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mHeapArrayNum), "sType_clone", 76, 208);
        come_call_finalizer(list$1sNode$ph_finalize, __dec_obj34,(void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_clone", 76, 207);
    }
        __result_obj__0 = (struct sType* )come_increment_ref_count(result, "sType_clone", 77, 209);
    come_call_finalizer(sType_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 210);
    neo_current_frame = fr.prev;
    come_call_finalizer(sType_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "sType_clone}", 77, 211);
    return __result_obj__0;
}

static void sType_finalize(struct sType*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sType_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 2, 4);
    }
    if(self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mChannelType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 3, 5);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 4, 8);
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 5, 9);
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 6, 10):(void*)0);
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 7, 11):(void*)0);
    }
    if(self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count(self->mTupleName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 8, 12));
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 9, 13));
    }
    if(self!=((void*)0)&&self->mVarAttribute!=((void*)0)) {
        (self->mVarAttribute = come_decrement_ref_count(self->mVarAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 10, 14));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 11, 15));
    }
    if(self!=((void*)0)&&self->mPointerAttribute!=((void*)0)) {
        (self->mPointerAttribute = come_decrement_ref_count(self->mPointerAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 12, 16));
    }
    if(self!=((void*)0)&&self->mAnonymousName!=((void*)0)) {
        (self->mAnonymousName = come_decrement_ref_count(self->mAnonymousName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 13, 17));
    }
    if(self!=((void*)0)&&self->mInnerStructName!=((void*)0)) {
        (self->mInnerStructName = come_decrement_ref_count(self->mInnerStructName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 14, 18));
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 15, 19));
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 16, 22);
    }
    if(self!=((void*)0)&&self->mVarNameArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mVarNameArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 17, 23);
    }
    if(self!=((void*)0)&&self->mArrayStatic!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayStatic, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 18, 25);
    }
    if(self!=((void*)0)&&self->mArrayRestrict!=((void*)0)) {
        come_call_finalizer(list$1int$$p_finalize, self->mArrayRestrict, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 19, 26);
    }
    if(self!=((void*)0)&&self->mTypedefOriginalType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mTypedefOriginalType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 20, 27);
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, (void*)0, "sType_finalize", 21, 28));
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 22, 29);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 23, 32);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 24, 33);
    }
    if(self!=((void*)0)&&self->mTypeOfNode!=((void*)0)) {
        ((self->mTypeOfNode) ? self->mTypeOfNode = come_decrement_ref_count(self->mTypeOfNode, ((struct sNode*)self->mTypeOfNode)->finalize, ((struct sNode*)self->mTypeOfNode)->_protocol_obj, 0, 0,(void*)0, "sType_finalize", 25, 34):(void*)0);
    }
    if(self!=((void*)0)&&self->mHeapArrayNum!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mHeapArrayNum, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sType_finalize}", 26, 35);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 7);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sType$ph$p_finalize}", 2, 6);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 21);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sNode$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0,(void*)0, "list_item$1sNode$ph$p_finalize", 2, 20):(void*)0);
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 24);
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 31);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 30));
    }
            neo_current_frame = fr.prev;
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
                __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 43);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 44);
        return __result_obj__0;
    }
    result=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./neo-c.h", 1513, 45, "struct list$1sType$ph*"), "./neo-c.h", 1513, 49)), "./neo-c.h", 1513, 50);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1518, 65));
        }
        else {
            __right_value0 = (void*)0;
            list$1sType$ph_add(result,(struct sType* )come_increment_ref_count(sType_clone(it->item), "./neo-c.h", 1521, 66));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 67);
    come_call_finalizer(list$1sType$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 68);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 69);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_initialize"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sType$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 46);
    come_call_finalizer(list$1sType$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 47);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sType$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 48);
    return __result_obj__0;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sType$ph_add"; neo_current_frame = &fr;
    struct list$1sType$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sType$ph* litem;
    struct sType*  __dec_obj3  ;
    struct list_item$1sType$ph* litem_0;
    struct sType*  __dec_obj4  ;
    struct list_item$1sType$ph* litem_1;
    struct sType*  __dec_obj5  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1531, 51);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1534, 52, "struct list_item$1sType$ph*"))), "./neo-c.h", 1534, 53);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj3=litem->item,
        litem->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1538, 55);
        come_call_finalizer(sType_finalize, __dec_obj3,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1538, 54);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_0=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1544, 56, "struct list_item$1sType$ph*"))), "./neo-c.h", 1544, 57);
        litem_0->prev=self->head;
        litem_0->next=((void*)0);
        __dec_obj4=litem_0->item,
        litem_0->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1548, 59);
        come_call_finalizer(sType_finalize, __dec_obj4,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1548, 58);
        self->tail=litem_0;
        self->head->next=litem_0;
    }
    else {
        __right_value0 = (void*)0;
        litem_1=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value0=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./neo-c.h", 1554, 60, "struct list_item$1sType$ph*"))), "./neo-c.h", 1554, 61);
        litem_1->prev=self->tail;
        litem_1->next=((void*)0);
        __dec_obj5=litem_1->item,
        litem_1->item=(struct sType* )come_increment_ref_count(item, "./neo-c.h", 1558, 63);
        come_call_finalizer(sType_finalize, __dec_obj5,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 1558, 62);
        self->tail->next=litem_1;
        self->tail=litem_1;
    }
    self->len++;
        __result_obj__0 = self;
    come_call_finalizer(sType_finalize, item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1566, 64);
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
        come_call_finalizer(list_item$1sType$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 70);
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
                __result_obj__0 = (struct sNode*)come_increment_ref_count((void*)0, "sNode_clone", 4, 75);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 4, 76):(void*)0);
        return __result_obj__0;
    }
    result=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 5, 77, "struct sNode*"), "sNode_clone", 5, 78);
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
        __result_obj__0 = (struct sNode*)come_increment_ref_count(result, "sNode_clone", 16, 79);
    ((result) ? result = come_decrement_ref_count(result, ((struct sNode*)result)->finalize, ((struct sNode*)result)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 80):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "sNode_clone", 16, 81):(void*)0);
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
                __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 110);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 111);
        return __result_obj__0;
    }
    result=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./neo-c.h", 1513, 112, "struct list$1sNode$ph*"), "./neo-c.h", 1513, 116)), "./neo-c.h", 1513, 117);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1518, 132));
        }
        else {
            __right_value0 = (void*)0;
            list$1sNode$ph_add(result,(struct sNode*)come_increment_ref_count(sNode_clone(it->item), "./neo-c.h", 1521, 133));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 134);
    come_call_finalizer(list$1sNode$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 135);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 136);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_initialize"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1sNode$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 113);
    come_call_finalizer(list$1sNode$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 114);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1sNode$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 115);
    return __result_obj__0;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_add"; neo_current_frame = &fr;
    struct list$1sNode$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1sNode$ph* litem;
    struct sNode* __dec_obj18;
    struct list_item$1sNode$ph* litem_2;
    struct sNode* __dec_obj19;
    struct list_item$1sNode$ph* litem_3;
    struct sNode* __dec_obj20;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1531, 118):(void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1534, 119, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1534, 120);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj18=litem->item,
        litem->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1538, 122);
        (__dec_obj18 ? __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1538, 121) :0);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_2=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1544, 123, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1544, 124);
        litem_2->prev=self->head;
        litem_2->next=((void*)0);
        __dec_obj19=litem_2->item,
        litem_2->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1548, 126);
        (__dec_obj19 ? __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1548, 125) :0);
        self->tail=litem_2;
        self->head->next=litem_2;
    }
    else {
        __right_value0 = (void*)0;
        litem_3=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value0=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./neo-c.h", 1554, 127, "struct list_item$1sNode$ph*"))), "./neo-c.h", 1554, 128);
        litem_3->prev=self->tail;
        litem_3->next=((void*)0);
        __dec_obj20=litem_3->item,
        litem_3->item=(struct sNode*)come_increment_ref_count(item, "./neo-c.h", 1558, 130);
        (__dec_obj20 ? __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0, (void*)0, "./neo-c.h", 1558, 129) :0);
        self->tail->next=litem_3;
        self->tail=litem_3;
    }
    self->len++;
        __result_obj__0 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 1566, 131):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 137);
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
                __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 142);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 143);
        return __result_obj__0;
    }
    result=(struct list$1int$*)come_increment_ref_count(list$1int$_initialize((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc(1, sizeof(struct list$1int$)*(1), "./neo-c.h", 1513, 144, "struct list$1int$*"), "./neo-c.h", 1513, 148)), "./neo-c.h", 1513, 149);
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
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(result, "./neo-c.h", 1527, 156);
    come_call_finalizer(list$1int$$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 157);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 158);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize(struct list$1int$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "./neo-c.h", 1485, 145);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 146);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 147);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_add(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_add"; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_4;
    struct list_item$1int$* litem_5;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1534, 150, "struct list_item$1int$*"))), "./neo-c.h", 1534, 151);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_4=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1544, 152, "struct list_item$1int$*"))), "./neo-c.h", 1544, 153);
        litem_4->prev=self->head;
        litem_4->next=((void*)0);
        litem_4->item=item;
        self->tail=litem_4;
        self->head->next=litem_4;
    }
    else {
        __right_value0 = (void*)0;
        litem_5=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./neo-c.h", 1554, 154, "struct list_item$1int$*"))), "./neo-c.h", 1554, 155);
        litem_5->prev=self->tail;
        litem_5->next=((void*)0);
        litem_5->item=item;
        self->tail->next=litem_5;
        self->tail=litem_5;
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
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 159);
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
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((void*)0), "./neo-c.h", 1511, 171);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1511, 172);
        return __result_obj__0;
    }
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./neo-c.h", 1513, 173, "struct list$1char$ph*"), "./neo-c.h", 1513, 177)), "./neo-c.h", 1513, 178);
    it=self->head;
    while(it!=((void*)0)) {
        if(1) {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1518, 193, "char* "), "./neo-c.h", 1518, 194));
        }
        else {
            __right_value0 = (void*)0;
            list$1char$ph_add(result,(char* )come_increment_ref_count((char* )come_memdup(it->item, "./neo-c.h", 1521, 195, "char* "), "./neo-c.h", 1521, 196));
        }
        it=it->next;
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "./neo-c.h", 1527, 197);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 198);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1527, 199);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "./neo-c.h", 1485, 174);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 175);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 1485, 176);
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_add"; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj28  ;
    struct list_item$1char$ph* litem_6;
    char*  __dec_obj29  ;
    struct list_item$1char$ph* litem_7;
    char*  __dec_obj30  ;
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1531, 179));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1534, 180, "struct list_item$1char$ph*"))), "./neo-c.h", 1534, 181);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj28=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1538, 183);
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1538, 182);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_6=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1544, 184, "struct list_item$1char$ph*"))), "./neo-c.h", 1544, 185);
        litem_6->prev=self->head;
        litem_6->next=((void*)0);
        __dec_obj29=litem_6->item,
        litem_6->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1548, 187);
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1548, 186);
        self->tail=litem_6;
        self->head->next=litem_6;
    }
    else {
        __right_value0 = (void*)0;
        litem_7=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./neo-c.h", 1554, 188, "struct list_item$1char$ph*"))), "./neo-c.h", 1554, 189);
        litem_7->prev=self->tail;
        litem_7->next=((void*)0);
        __dec_obj30=litem_7->item,
        litem_7->item=(char* )come_increment_ref_count(item, "./neo-c.h", 1558, 191);
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 1558, 190);
        self->tail->next=litem_7;
        self->tail=litem_7;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 1566, 192));
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
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 200);
    }
            neo_current_frame = fr.prev;
}

static struct sFun*  map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sFun*  default_value  ;
    struct sFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4014, 214);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4014, 241);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4014, 242);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4026, 243);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4026, 244);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4026, 245);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4033, 246);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4033, 247);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4033, 248);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4037, 249);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4037, 250);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4037, 251);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4041, 252);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4041, 253);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4041, 254);
    return __result_obj__0;
}

static void sFun_finalize(struct sFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 2, 215));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 3, 216);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 4, 217);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 5, 218);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 6, 219);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 7, 220);
    }
    if(self!=((void*)0)&&self->mAllVar!=((void*)0)) {
        come_call_finalizer(list$1sVar$ph$p_finalize, self->mAllVar, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 8, 227);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer(sBlock_finalize, self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 9, 230);
    }
    if(self!=((void*)0)&&self->mTextBlock!=((void*)0)) {
        (self->mTextBlock = come_decrement_ref_count(self->mTextBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 10, 231));
    }
    if(self!=((void*)0)&&self->mTextBlockSName!=((void*)0)) {
        (self->mTextBlockSName = come_decrement_ref_count(self->mTextBlockSName, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 11, 232));
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSource, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 12, 233);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 13, 234);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 14, 235);
    }
    if(self!=((void*)0)&&self->mSourceEnd!=((void*)0)) {
        come_call_finalizer(buffer_finalize, self->mSourceEnd, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sFun_finalize}", 15, 236);
    }
    if(self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count(self->mAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 16, 237));
    }
    if(self!=((void*)0)&&self->mMiddleAttribute!=((void*)0)) {
        (self->mMiddleAttribute = come_decrement_ref_count(self->mMiddleAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 17, 238));
    }
    if(self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count(self->mFunAttribute, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 18, 239));
    }
    if(self!=((void*)0)&&self->mAsmFun!=((void*)0)) {
        (self->mAsmFun = come_decrement_ref_count(self->mAsmFun, (void*)0, (void*)0, 0, 0, (void*)0, "sFun_finalize", 19, 240));
    }
            neo_current_frame = fr.prev;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1sVar$ph* it;
    struct list_item$1sVar$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sVar$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 226);
    }
            neo_current_frame = fr.prev;
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sVar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sVar_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sVar$ph$p_finalize}", 2, 225);
    }
            neo_current_frame = fr.prev;
}

static void sVar_finalize(struct sVar*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sVar_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 2, 221));
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 3, 222));
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sVar_finalize}", 4, 223);
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sVar_finalize", 5, 224));
    }
            neo_current_frame = fr.prev;
}

static void sBlock_finalize(struct sBlock*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sBlock_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer(list$1sNode$ph$p_finalize, self->mNodes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 2, 228);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer(sVarTable_finalize, self->mVarTable, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sBlock_finalize}", 3, 229);
    }
            neo_current_frame = fr.prev;
}

static struct sFun*  map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsFun$ph_operator_load_element"; neo_current_frame = &fr;
    struct sFun*  default_value  ;
    struct sFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4014, 255);
        come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4014, 256);
        neo_current_frame = fr.prev;
        come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4014, 257);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4026, 258);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4026, 259);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4026, 260);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4033, 261);
                come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4033, 262);
                neo_current_frame = fr.prev;
                come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4033, 263);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4037, 264);
            come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4037, 265);
            neo_current_frame = fr.prev;
            come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4037, 266);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sFun* )come_increment_ref_count(default_value, "./neo-c.h", 4041, 267);
    come_call_finalizer(sFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4041, 268);
    neo_current_frame = fr.prev;
    come_call_finalizer(sFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4041, 269);
    return __result_obj__0;
}

static struct sGenericsFun*  map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sGenericsFun*  default_value  ;
    struct sGenericsFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sGenericsFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4014, 272);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4014, 283);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4014, 284);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4026, 285);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4026, 286);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4026, 287);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4033, 288);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4033, 289);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4033, 290);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4037, 291);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4037, 292);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4037, 293);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4041, 294);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4041, 295);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4041, 296);
    return __result_obj__0;
}

static void sGenericsFun_finalize(struct sGenericsFun*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sGenericsFun_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mImplType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 2, 273);
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 3, 274);
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 4, 275);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 5, 276));
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mResultType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 6, 277);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer(list$1sType$ph$p_finalize, self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 7, 278);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamNames, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 8, 279);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer(list$1char$ph$p_finalize, self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sGenericsFun_finalize}", 9, 280);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 10, 281));
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, (void*)0, "sGenericsFun_finalize", 11, 282));
    }
            neo_current_frame = fr.prev;
}

static struct sGenericsFun*  map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_operator_load_element"; neo_current_frame = &fr;
    struct sGenericsFun*  default_value  ;
    struct sGenericsFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sGenericsFun* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4014, 297);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4014, 298);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4014, 299);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 4026, 300);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4026, 301);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4026, 302);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4033, 303);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4033, 304);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4033, 305);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4037, 306);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4037, 307);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4037, 308);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 4041, 309);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4041, 310);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4041, 311);
    return __result_obj__0;
}

static void tuple2$2char$ph_Bool$$p_finalize(struct tuple2$2char$ph_Bool$* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$ph_Bool$$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$ph_Bool$$p_finalize", 2, 314));
    }
                        neo_current_frame = fr.prev;
}

void free_object(struct sType*  type  , char* obj, _Bool no_decrement, _Bool no_free, struct sInfo*  info  , _Bool ret_value)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "free_object"; neo_current_frame = &fr;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct sType*  type_before  ;
    void* __right_value0 = (void*)0;
    struct sType*  type_  ;
    char*  c_value  ;
    struct sClass*  klass  ;
    char* class_name;
    struct sType*  type2  ;
    char*  fun_name2  ;
    struct sFun*  finalizer  ;
    char*  none_generics_name  ;
    char*  generics_fun_name  ;
    struct sGenericsFun*  generics_fun  ;
    struct tuple2$2char$ph_Bool$* multiple_assign_var2
;    char*  name  =0;
    _Bool err=0;
    int i;
    char*  new_fun_name  ;
    char*  __dec_obj36  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var3
;    struct sFun*  fun  =0;
    char*  new_fun_name_8  =0;
    char*  __dec_obj37  ;
    char*  type_name  ;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    void* __right_value7 = (void*)0;
    void* __right_value8 = (void*)0;
    void* __right_value9 = (void*)0;
    void* __right_value10 = (void*)0;
    void* __right_value11 = (void*)0;
    void* __right_value12 = (void*)0;
    void* __right_value13 = (void*)0;
    void* __right_value14 = (void*)0;
    void* __right_value15 = (void*)0;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_3;
    struct tuple2$2char$phsType$ph* it;
    struct tuple2$2char$phsType$ph* multiple_assign_var4
;    char*  name_11  =0;
    struct sType*  field_type  =0;
    char*  obj_12  ;
    struct list$1tuple2$2char$phsType$ph$ph* _o2_saved_4;
    struct tuple2$2char$phsType$ph* it_13;
    struct tuple2$2char$phsType$ph* multiple_assign_var5
;    char*  name_14  =0;
    struct sType*  field_type_15  =0;
    char*  obj_16  ;
    char*  type_name_17  ;
    struct list$1sRightValueObject$ph* __dec_obj38;
    struct list$1CVALUE$ph* __dec_obj39;
    memset(&i, 0, sizeof(i));
    if(gComeC) {
                neo_current_frame = fr.prev;
        return;
    }
    if(info->no_output_come_code) {
                neo_current_frame = fr.prev;
        return;
    }
    if(type->mDefferRightValue) {
        on_drop_object(type,obj,info);
    }
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "34heap2.nc", 83, 331);
    right_value_objects=info->right_value_objects;
    type_before=type;
    type_=(struct sType* )come_increment_ref_count(get_no_solved_type2(type), "34heap2.nc", 88, 332);
    if(type_->mPointerNum>0||type_->mClass->mProtocol||list$1sType$ph_length(type_->mGenericsTypes)>0) {
        __right_value0 = (void*)0;
        c_value=(char* )come_increment_ref_count(__builtin_string(obj,"34heap2.nc",92), "34heap2.nc", 92, 333);
        klass=type_->mClass;
        class_name=klass->mName;
        const char* fun_name="finalize";
        __right_value0 = (void*)0;
        type2=(struct sType* )come_increment_ref_count(sType_clone(type_), "34heap2.nc", 100, 334);
        type2->mHeap=(_Bool)0;
        __right_value0 = (void*)0;
        fun_name2=(char* )come_increment_ref_count(create_method_name(type_,(_Bool)0,fun_name,info,(_Bool)1), "34heap2.nc", 103, 335);
        finalizer=0;
        if(list$1sType$ph_length(type_->mGenericsTypes)>0) {
            __right_value0 = (void*)0;
            finalizer=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            if(finalizer==0) {
                __right_value0 = (void*)0;
                none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type2->mClass->mName), "34heap2.nc", 110, 336);
                __right_value0 = (void*)0;
                generics_fun_name=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name), "34heap2.nc", 112, 337);
                __right_value0 = (void*)0;
                generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name)));
                if(generics_fun) {
                    __right_value0 = (void*)0;
                    multiple_assign_var2=((struct tuple2$2char$ph_Bool$*)(__right_value0=create_generics_fun((char* )come_increment_ref_count(fun_name2, "34heap2.nc", 116, 338),generics_fun,type_,info)));
                    name=(char* )come_increment_ref_count(multiple_assign_var2->v1, "34heap2.nc", 116, 339);
                    err=multiple_assign_var2->v2;
                    come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "34heap2.nc}", 116, 340);
                    if(!err) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    __right_value0 = (void*)0;
                    finalizer=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
                    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 125, 341));
                }
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 126, 342));
                (generics_fun_name = come_decrement_ref_count(generics_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 126, 343));
            }
        }
        else {
            for(i=128-1            ;i>=1;i--){
                __right_value0 = (void*)0;
                new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i), "34heap2.nc", 130, 344);
                __right_value0 = (void*)0;
                finalizer=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
                if(finalizer) {
                    __right_value0 = (void*)0;
                    __dec_obj36=fun_name2,
                    fun_name2=(char* )come_increment_ref_count(__builtin_string(new_fun_name,"34heap2.nc",134), "34heap2.nc", 134, 346);
                    __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0, (void*)0, "34heap2.nc", 134, 345);
                    (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 135, 347));
                    break;
                }
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 139, 348));
            }
            if(finalizer==0) {
                __right_value0 = (void*)0;
                finalizer=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
            }
        }
        if(finalizer==0&&!type_->mClass->mProtocol&&!type_->mClass->mNumber&&list$1sNode$ph_length(type_->mArrayNum)==0) {
            __right_value0 = (void*)0;
            multiple_assign_var3=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_finalizer_automatically(type_,fun_name,info)));
            fun=multiple_assign_var3->v1;
            new_fun_name_8=(char* )come_increment_ref_count(multiple_assign_var3->v2, "34heap2.nc", 146, 349);
            come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "34heap2.nc}", 146, 351);
            __dec_obj37=fun_name2,
            fun_name2=(char* )come_increment_ref_count(new_fun_name_8, "34heap2.nc", 148, 353);
            __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0, (void*)0, "34heap2.nc", 148, 352);
            finalizer=fun;
            (new_fun_name_8 = come_decrement_ref_count(new_fun_name_8, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 153, 354));
        }
        if(finalizer!=((void*)0)) {
            if(klass->mProtocol&&type_->mPointerNum==1) {
                __right_value0 = (void*)0;
                type_name=(char* )come_increment_ref_count(make_type_name_string(type_,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "34heap2.nc", 155, 355);
                if(c_value) {
                    __right_value0 = (void*)0;
                    add_come_code(info,((char*)(__right_value15=xsprintf("come_call_finalizer(\%s, \%s, \%s ? ((\%s)\%s)->finalize :(void*)0, \%s ? ((\%s)\%s)->_protocol_obj :(void*)0, \%s , \%s, \%s, (void*)0, \"\%s\", \%s, \%s)\%s",((char* )(__right_value0=string_to_string(fun_name2))),((char* )(__right_value1=string_to_string(c_value))),((char* )(__right_value2=string_to_string(c_value))),((char* )(__right_value3=string_to_string(type_name))),((char* )(__right_value4=string_to_string(c_value))),((char* )(__right_value5=string_to_string(c_value))),((char* )(__right_value6=string_to_string(type_name))),((char* )(__right_value7=string_to_string(c_value))),((char* )(__right_value8=int_to_string(((type_->mAllocaValue)?(1):(0))))),((char* )(__right_value9=int_to_string(((no_decrement)?(1):(0))))),((char* )(__right_value10=int_to_string(((no_free)?(1):(0))))),((char* )(__right_value11=string_to_string(info->sname))),((char* )(__right_value12=int_to_string(info->sline))),((char* )(__right_value13=int_to_string(++info->id))),((char* )(__right_value14=charp_to_string((((info->in_conditional)?(";"):(";\n"))))))))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 157, 356));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 157, 357));
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 157, 358));
                    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 157, 359));
                    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 157, 360));
                    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 157, 361));
                    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 157, 362));
                    (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 157, 363));
                    (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 157, 364));
                    (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 157, 365));
                    (__right_value10 = come_decrement_ref_count(__right_value10, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 157, 366));
                    (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 157, 367));
                    (__right_value12 = come_decrement_ref_count(__right_value12, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 157, 368));
                    (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 157, 369));
                    (__right_value14 = come_decrement_ref_count(__right_value14, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 157, 370));
                    (__right_value15 = come_decrement_ref_count(__right_value15, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 157, 371));
                }
                (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 165, 372));
            }
            else {
                if(c_value) {
                    __right_value0 = (void*)0;
                    __right_value1 = (void*)0;
                    __right_value2 = (void*)0;
                    __right_value3 = (void*)0;
                    __right_value4 = (void*)0;
                    __right_value5 = (void*)0;
                    __right_value6 = (void*)0;
                    __right_value7 = (void*)0;
                    __right_value8 = (void*)0;
                    __right_value9 = (void*)0;
                    add_come_code(info,((char*)(__right_value9=xsprintf("come_call_finalizer(\%s, \%s, (void*)0, (void*)0, \%s, \%s, \%s, (void*)0, \"\%s\}\", \%s, \%s)\%s",((char* )(__right_value0=string_to_string(fun_name2))),((char* )(__right_value1=string_to_string(c_value))),((char* )(__right_value2=int_to_string(((type_->mAllocaValue)?(1):(0))))),((char* )(__right_value3=int_to_string(((no_decrement)?(1):(0))))),((char* )(__right_value4=int_to_string(((no_free)?(1):(0))))),((char* )(__right_value5=string_to_string(info->sname))),((char* )(__right_value6=int_to_string(info->sline))),((char* )(__right_value7=int_to_string(++info->id))),((char* )(__right_value8=charp_to_string((((info->in_conditional)?(";"):(";\n"))))))))));
                    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 162, 373));
                    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 162, 374));
                    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 162, 375));
                    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 162, 376));
                    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 162, 377));
                    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 162, 378));
                    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 162, 379));
                    (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 162, 380));
                    (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 162, 381));
                    (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 162, 382));
                }
            }
        }
        else {
            if(klass->mStruct&&type_->mPointerNum==0) {
                for(_o2_saved_3=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields, "34heap2.nc", 169, 383),it=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_3)                ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_3);it=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_3)){
                    multiple_assign_var4=it;
                    name_11=(char* )come_increment_ref_count(multiple_assign_var4->v1, "34heap2.nc", 170, 384);
                    field_type=(struct sType* )come_increment_ref_count(multiple_assign_var4->v2, "34heap2.nc", 170, 385);
                    if(field_type->mHeap&&field_type->mPointerNum>0) {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        obj_12=(char* )come_increment_ref_count(xsprintf("(((%s)%s).%s)",((char* )(__right_value0=make_type_name_string(type_,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))),c_value,name_11), "34heap2.nc", 173, 386);
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 173, 387));
                        free_object(field_type,obj_12,no_decrement,no_free,info,(_Bool)0);
                        (obj_12 = come_decrement_ref_count(obj_12, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 176, 388));
                    }
                    (name_11 = come_decrement_ref_count(name_11, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 177, 389));
                    come_call_finalizer(sType_finalize, field_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 177, 390);
                }
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 191, 395);
            }
            else if(klass->mStruct&&type_->mPointerNum==1) {
                for(_o2_saved_4=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(klass->mFields, "34heap2.nc", 180, 396),it_13=list$1tuple2$2char$phsType$ph$ph_begin(_o2_saved_4)                ;!list$1tuple2$2char$phsType$ph$ph_end(_o2_saved_4);it_13=list$1tuple2$2char$phsType$ph$ph_next(_o2_saved_4)){
                    multiple_assign_var5=it_13;
                    name_14=(char* )come_increment_ref_count(multiple_assign_var5->v1, "34heap2.nc", 181, 397);
                    field_type_15=(struct sType* )come_increment_ref_count(multiple_assign_var5->v2, "34heap2.nc", 181, 398);
                    if(field_type_15->mHeap&&field_type_15->mPointerNum>0) {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        obj_16=(char* )come_increment_ref_count(xsprintf("(((%s)%s)->%s)",((char* )(__right_value0=make_type_name_string(type_,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0))),c_value,name_14), "34heap2.nc", 184, 399);
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 184, 400));
                        free_object(field_type_15,obj_16,no_decrement,no_free,info,(_Bool)0);
                        (obj_16 = come_decrement_ref_count(obj_16, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 187, 401));
                    }
                    (name_14 = come_decrement_ref_count(name_14, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 188, 402));
                    come_call_finalizer(sType_finalize, field_type_15, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 188, 403);
                }
                come_call_finalizer(list$1tuple2$2char$phsType$ph$ph$p_finalize, _o2_saved_4, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 191, 404);
            }
            if(!type_->mAllocaValue) {
                if(klass->mProtocol&&type_->mPointerNum==1) {
                    if(c_value) {
                        __right_value0 = (void*)0;
                        type_name_17=(char* )come_increment_ref_count(make_type_name_string(type_,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "34heap2.nc", 194, 405);
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __right_value2 = (void*)0;
                        __right_value3 = (void*)0;
                        __right_value4 = (void*)0;
                        __right_value5 = (void*)0;
                        __right_value6 = (void*)0;
                        __right_value7 = (void*)0;
                        __right_value8 = (void*)0;
                        __right_value9 = (void*)0;
                        __right_value10 = (void*)0;
                        __right_value11 = (void*)0;
                        __right_value12 = (void*)0;
                        __right_value13 = (void*)0;
                        add_come_code(info,((char*)(__right_value13=xsprintf("((\%s) ? \%s = come_decrement_ref_count(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, \%s, \%s,(void*)0, \"\%s\", \%s, \%s):(void*)0)\%s",((char* )(__right_value0=string_to_string(c_value))),((char* )(__right_value1=string_to_string(c_value))),((char* )(__right_value2=string_to_string(c_value))),((char* )(__right_value3=string_to_string(type_name_17))),((char* )(__right_value4=string_to_string(c_value))),((char* )(__right_value5=string_to_string(type_name_17))),((char* )(__right_value6=string_to_string(c_value))),((char* )(__right_value7=int_to_string(((no_decrement)?(1):(0))))),((char* )(__right_value8=int_to_string(((no_free)?(1):(0))))),((char* )(__right_value9=string_to_string(info->sname))),((char* )(__right_value10=int_to_string(info->sline))),((char* )(__right_value11=int_to_string(++info->id))),((char* )(__right_value12=charp_to_string((";\n"))))))));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 195, 406));
                        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 195, 407));
                        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 195, 408));
                        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 195, 409));
                        (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 195, 410));
                        (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 195, 411));
                        (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 195, 412));
                        (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 195, 413));
                        (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 195, 414));
                        (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 195, 415));
                        (__right_value10 = come_decrement_ref_count(__right_value10, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 195, 416));
                        (__right_value11 = come_decrement_ref_count(__right_value11, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 195, 417));
                        (__right_value12 = come_decrement_ref_count(__right_value12, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 195, 418));
                        (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 195, 419));
                        (type_name_17 = come_decrement_ref_count(type_name_17, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 197, 420));
                    }
                }
                else {
                    if(c_value) {
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __right_value2 = (void*)0;
                        __right_value3 = (void*)0;
                        __right_value4 = (void*)0;
                        __right_value5 = (void*)0;
                        __right_value6 = (void*)0;
                        __right_value7 = (void*)0;
                        __right_value8 = (void*)0;
                        add_come_code(info,((char*)(__right_value8=xsprintf("(\%s = come_decrement_ref_count(\%s, (void*)0, (void*)0, \%s, \%s, (void*)0, \"\%s\", \%s, \%s))\%s",((char* )(__right_value0=string_to_string(c_value))),((char* )(__right_value1=string_to_string(c_value))),((char* )(__right_value2=int_to_string(((no_decrement)?(1):(0))))),((char* )(__right_value3=int_to_string(((no_free)?(1):(0))))),((char* )(__right_value4=string_to_string(info->sname))),((char* )(__right_value5=int_to_string(info->sline))),((char* )(__right_value6=int_to_string(++info->id))),((char* )(__right_value7=charp_to_string((";\n"))))))));
                        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 200, 421));
                        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 200, 422));
                        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 200, 423));
                        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 200, 424));
                        (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 200, 425));
                        (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 200, 426));
                        (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 200, 427));
                        (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 200, 428));
                        (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 200, 429));
                    }
                }
            }
        }
        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 207, 430));
        come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 207, 431);
        (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 207, 432));
    }
    __dec_obj38=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "34heap2.nc", 207, 441);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj38,(void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc", 207, 440);
    __dec_obj39=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "34heap2.nc", 208, 450);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj39,(void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc", 208, 449);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 211, 452);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 211, 453);
    neo_current_frame = fr.prev;
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

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sFun$pchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2sFun$pchar$ph$p_finalize", 2, 350));
    }
                neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_begin"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_9;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
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
    memset(&result_9,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result_9;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
                    neo_current_frame = fr.prev;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1tuple2$2char$phsType$ph$ph_next"; neo_current_frame = &fr;
    struct tuple2$2char$phsType$ph* result;
    struct tuple2$2char$phsType$ph* __result_obj__0;
    struct tuple2$2char$phsType$ph* result_10;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct tuple2$2char$phsType$ph*));
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
    memset(&result_10,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__0 = result_10;
    neo_current_frame = fr.prev;
    return __result_obj__0;
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
        come_call_finalizer(list_item$1tuple2$2char$phsType$ph$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 394);
    }
                    neo_current_frame = fr.prev;
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1tuple2$2char$phsType$ph$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(tuple2$2char$phsType$ph$p_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1tuple2$2char$phsType$ph$ph$p_finalize}", 2, 393);
    }
            neo_current_frame = fr.prev;
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2char$phsType$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize", 2, 391));
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2char$phsType$ph$p_finalize}", 3, 392);
    }
            neo_current_frame = fr.prev;
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1sRightValueObject$ph* it;
    struct list_item$1sRightValueObject$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1sRightValueObject$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 439);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1sRightValueObject$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(sRightValueObject_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1sRightValueObject$ph$p_finalize}", 2, 438);
    }
            neo_current_frame = fr.prev;
}

static void sRightValueObject_finalize(struct sRightValueObject*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "sRightValueObject_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sRightValueObject_finalize}", 2, 433);
    }
    if(self!=((void*)0)&&self->mVarName!=((void*)0)) {
        (self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0, 0, (void*)0, "sRightValueObject_finalize", 3, 434));
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, (void*)0, "sRightValueObject_finalize", 4, 435));
    }
    if(self!=((void*)0)&&self->mObjType!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->mObjType, (void*)0, (void*)0, 0, 0, 0, (void*)0, "sRightValueObject_finalize}", 5, 436);
    }
    if(self!=((void*)0)&&self->mObjValue!=((void*)0)) {
        (self->mObjValue = come_decrement_ref_count(self->mObjValue, (void*)0, (void*)0, 0, 0, (void*)0, "sRightValueObject_finalize", 6, 437));
    }
            neo_current_frame = fr.prev;
}

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph_finalize"; neo_current_frame = &fr;
    struct list_item$1CVALUE$ph* it;
    struct list_item$1CVALUE$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 448);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer(CVALUE_finalize, self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0, "list_item$1CVALUE$ph$p_finalize}", 2, 447);
    }
            neo_current_frame = fr.prev;
}

static void CVALUE_finalize(struct CVALUE*  self  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "CVALUE_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 2, 442));
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "CVALUE_finalize}", 3, 443);
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 4, 444));
    }
    if(self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 5, 445));
    }
    if(self!=((void*)0)&&self->c_value_without_null_checker!=((void*)0)) {
        (self->c_value_without_null_checker = come_decrement_ref_count(self->c_value_without_null_checker, (void*)0, (void*)0, 0, 0, (void*)0, "CVALUE_finalize", 6, 446));
    }
            neo_current_frame = fr.prev;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1CVALUE$ph$p_finalize"; neo_current_frame = &fr;
    struct list_item$1CVALUE$ph* it;
    struct list_item$1CVALUE$ph* prev_it;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1CVALUE$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1506, 451);
    }
        neo_current_frame = fr.prev;
}

struct tuple2$2sType$phchar$ph* clone_object(struct sType*  type  , char* obj, struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "clone_object"; neo_current_frame = &fr;
    _Bool in_clone_object;
    void* __right_value0 = (void*)0;
    struct sType*  type2  ;
    struct sType*  type_  ;
    char*  result  ;
    struct sType*  result_type  ;
    struct list$1CVALUE$ph* stack_saved;
    struct list$1sRightValueObject$ph* right_value_objects;
    char*  c_value  ;
    struct sClass*  klass  ;
    char* class_name;
    struct sFun*  cloner  ;
    char*  fun_name2  ;
    char*  none_generics_name  ;
    struct sType*  obj_type  ;
    char*  __dec_obj40  ;
    char*  fun_name3  ;
    struct sGenericsFun*  generics_fun  ;
    void* __right_value1 = (void*)0;
    struct tuple2$2char$ph_Bool$* multiple_assign_var6
;    char*  name  =0;
    _Bool err=0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    struct tuple2$2sType$phchar$ph* __result_obj__0;
    char*  __dec_obj43  ;
    int i;
    char*  new_fun_name  ;
    char*  __dec_obj44  ;
    struct tuple2$2sFun$pchar$ph* multiple_assign_var7
;    struct sFun*  fun  =0;
    char*  new_fun_name_18  =0;
    char*  __dec_obj45  ;
    struct sType*  type__19  ;
    struct sType*  __dec_obj46  ;
    char*  __dec_obj47  ;
    struct sType*  __dec_obj48  ;
    char*  type_name  ;
    char*  __dec_obj49  ;
    struct list$1sRightValueObject$ph* __dec_obj50;
    struct list$1CVALUE$ph* __dec_obj51;
    memset(&fun_name2, 0, sizeof(fun_name2));
    memset(&i, 0, sizeof(i));
    in_clone_object=info->in_clone_object;
    info->in_clone_object=(_Bool)1;
    type2=(struct sType* )come_increment_ref_count(sType_clone(type), "34heap2.nc", 216, 454);
    __right_value0 = (void*)0;
    type_=(struct sType* )come_increment_ref_count(get_no_solved_type2(type), "34heap2.nc", 218, 455);
    result=((void*)0);
    result_type=((void*)0);
    stack_saved=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack, "34heap2.nc", 222, 456);
    right_value_objects=info->right_value_objects;
    __right_value0 = (void*)0;
    c_value=(char* )come_increment_ref_count(__builtin_string(obj,"34heap2.nc",225), "34heap2.nc", 225, 457);
    klass=type_->mClass;
    class_name=klass->mName;
    const char* fun_name="clone";
    cloner=0;
    if(list$1sType$ph_length(type_->mGenericsTypes)>0) {
        __right_value0 = (void*)0;
        none_generics_name=(char* )come_increment_ref_count(get_none_generics_name(type_->mClass->mName), "34heap2.nc", 236, 458);
        __right_value0 = (void*)0;
        obj_type=(struct sType* )come_increment_ref_count(solve_generics(type_,info->generics_type,info), "34heap2.nc", 238, 459);
        __right_value0 = (void*)0;
        __dec_obj40=fun_name2,
        fun_name2=(char* )come_increment_ref_count(create_method_name(obj_type,(_Bool)0,fun_name,info,(_Bool)1), "34heap2.nc", 240, 461);
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0, (void*)0, "34heap2.nc", 240, 460);
        __right_value0 = (void*)0;
        fun_name3=(char* )come_increment_ref_count(xsprintf("%s_%s",none_generics_name,fun_name), "34heap2.nc", 241, 462);
        __right_value0 = (void*)0;
        generics_fun=((struct sGenericsFun* )(__right_value0=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3,((void*)0),(_Bool)0)));
        if(generics_fun) {
            __right_value0 = (void*)0;
            multiple_assign_var6=((struct tuple2$2char$ph_Bool$*)(__right_value1=create_generics_fun((char* )come_increment_ref_count(__builtin_string(fun_name2,"34heap2.nc",246), "34heap2.nc", 246, 478),generics_fun,obj_type,info)));
            name=(char* )come_increment_ref_count(multiple_assign_var6->v1, "34heap2.nc", 246, 479);
            err=multiple_assign_var6->v2;
            come_call_finalizer(tuple2$2char$ph_Bool$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "34heap2.nc}", 246, 480);
            if(!err) {
                                __right_value0 = (void*)0;
                __right_value1 = (void*)0;
                __result_obj__0 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value5=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "34heap2.nc", 249, 484, "struct tuple2$2sType$phchar$ph"), "34heap2.nc", 249, 496),(struct sType*)come_increment_ref_count(sType_initialize((struct sType* )come_increment_ref_count((struct sType *)come_calloc(1, sizeof(struct sType )*(1), "34heap2.nc", 249, 481, "struct sType* "), "34heap2.nc", 249, 482),(char*)come_increment_ref_count(xsprintf("void"), "34heap2.nc", 249, 483),(_Bool)0,info,(_Bool)0,0), "34heap2.nc", 249, 497),(char* )come_increment_ref_count(__builtin_string("","34heap2.nc",249), "34heap2.nc", 249, 498)))), "34heap2.nc", 249, 499);
                (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 249, 500));
                (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 249, 501));
                come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 249, 502);
                (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 249, 503));
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 249, 504);
                come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 249, 505);
                (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 249, 506));
                come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 249, 507);
                come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 249, 508);
                (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 249, 509));
                (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 249, 510));
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value5, (void*)0, (void*)0, 0, 1, 0, (void*)0, "34heap2.nc}", 249, 511);
                neo_current_frame = fr.prev;
                come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "34heap2.nc}", 249, 512);
                return __result_obj__0;
            }
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,name)));
            (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 256, 513));
        }
        else {
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
        (none_generics_name = come_decrement_ref_count(none_generics_name, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 276, 514));
        come_call_finalizer(sType_finalize, obj_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 276, 515);
        (fun_name3 = come_decrement_ref_count(fun_name3, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 276, 516));
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj43=fun_name2,
        fun_name2=(char* )come_increment_ref_count(create_method_name(type_,(_Bool)0,fun_name,info,(_Bool)1), "34heap2.nc", 258, 518);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0, (void*)0, "34heap2.nc", 258, 517);
        for(i=128-1        ;i>=1;i--){
            __right_value0 = (void*)0;
            new_fun_name=(char* )come_increment_ref_count(xsprintf("%s_v%d",fun_name2,i), "34heap2.nc", 262, 519);
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name)));
            if(cloner) {
                __right_value0 = (void*)0;
                __dec_obj44=fun_name2,
                fun_name2=(char* )come_increment_ref_count(__builtin_string(new_fun_name,"34heap2.nc",266), "34heap2.nc", 266, 521);
                __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0, (void*)0, "34heap2.nc", 266, 520);
                (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 267, 522));
                break;
            }
            (new_fun_name = come_decrement_ref_count(new_fun_name, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 271, 523));
        }
        if(cloner==0) {
            __right_value0 = (void*)0;
            cloner=((struct sFun* )(__right_value0=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2)));
        }
    }
    if(cloner==0&&!type_->mClass->mNumber) {
        __right_value0 = (void*)0;
        multiple_assign_var7=((struct tuple2$2sFun$pchar$ph*)(__right_value0=create_cloner_automatically(type_,fun_name,info)));
        fun=multiple_assign_var7->v1;
        new_fun_name_18=(char* )come_increment_ref_count(multiple_assign_var7->v2, "34heap2.nc", 278, 524);
        come_call_finalizer(tuple2$2sFun$pchar$ph$p_finalize, __right_value0, (void*)0, (void*)0, 0, 1, 0, (void*)0, "34heap2.nc}", 278, 525);
        __dec_obj45=fun_name2,
        fun_name2=(char* )come_increment_ref_count(new_fun_name_18, "34heap2.nc", 280, 527);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0, (void*)0, "34heap2.nc", 280, 526);
        cloner=fun;
        (new_fun_name_18 = come_decrement_ref_count(new_fun_name_18, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 285, 528));
    }
    if(cloner!=((void*)0)) {
        __right_value0 = (void*)0;
        type__19=(struct sType* )come_increment_ref_count(sType_clone(cloner->mResultType), "34heap2.nc", 286, 529);
        __right_value0 = (void*)0;
        __dec_obj46=result_type,
        result_type=(struct sType* )come_increment_ref_count(solve_generics(type__19,type__19,info), "34heap2.nc", 287, 531);
        come_call_finalizer(sType_finalize, __dec_obj46,(void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc", 287, 530);
        __right_value0 = (void*)0;
        __dec_obj47=result,
        result=(char* )come_increment_ref_count(xsprintf("%s(%s)",fun_name2,c_value), "34heap2.nc", 289, 533);
        __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0, (void*)0, "34heap2.nc", 289, 532);
        come_call_finalizer(sType_finalize, type__19, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 299, 534);
    }
    else {
        __right_value0 = (void*)0;
        __dec_obj48=result_type,
        result_type=(struct sType* )come_increment_ref_count(sType_clone(type_), "34heap2.nc", 292, 536);
        come_call_finalizer(sType_finalize, __dec_obj48,(void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc", 292, 535);
        type2->mHeap=(_Bool)1;
        __right_value0 = (void*)0;
        type_name=(char* )come_increment_ref_count(make_type_name_string(type2,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0), "34heap2.nc", 294, 537);
        __right_value0 = (void*)0;
        __dec_obj49=result,
        result=(char* )come_increment_ref_count(xsprintf("(%s)come_memdup(%s, \"%s\", %d, %d, \"%s\")",type_name,c_value,info->sname,info->sline,++info->id,type_name), "34heap2.nc", 296, 539);
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0, (void*)0, "34heap2.nc", 296, 538);
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 299, 540));
    }
    __dec_obj50=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects, "34heap2.nc", 299, 542);
    come_call_finalizer(list$1sRightValueObject$ph_finalize, __dec_obj50,(void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc", 299, 541);
    __dec_obj51=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved, "34heap2.nc", 300, 544);
    come_call_finalizer(list$1CVALUE$ph_finalize, __dec_obj51,(void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc", 300, 543);
    info->in_clone_object=in_clone_object;
        __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __result_obj__0 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value1=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "34heap2.nc", 304, 545, "struct tuple2$2sType$phchar$ph"), "34heap2.nc", 304, 546),(struct sType* )come_increment_ref_count(result_type, "34heap2.nc", 304, 547),(char* )come_increment_ref_count(result, "34heap2.nc", 304, 548)))), "34heap2.nc", 304, 549);
    come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 304, 550);
    come_call_finalizer(sType_finalize, type_, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 304, 551);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 304, 552));
    come_call_finalizer(sType_finalize, result_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 304, 553);
    come_call_finalizer(list$1CVALUE$ph$p_finalize, stack_saved, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 304, 554);
    (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 304, 555));
    (fun_name2 = come_decrement_ref_count(fun_name2, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 304, 556));
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "34heap2.nc}", 304, 557);
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "34heap2.nc}", 304, 558);
    return __result_obj__0;
}

static struct sGenericsFun*  map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char*  key  , struct sGenericsFun*  default_value  , _Bool by_pointer)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsGenericsFun$ph_at"; neo_current_frame = &fr;
    struct sGenericsFun*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    if(self==((void*)0)) {
                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 3471, 463);
        come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3471, 464);
        neo_current_frame = fr.prev;
        come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3471, 465);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&((!by_pointer&&string_equals(self->keys[it],key))||(by_pointer&&self->keys[it]==key))) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(self->items[it], "./neo-c.h", 3484, 466);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3484, 467);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3484, 468);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 3491, 469);
                come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3491, 470);
                neo_current_frame = fr.prev;
                come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3491, 471);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 3495, 472);
            come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3495, 473);
            neo_current_frame = fr.prev;
            come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3495, 474);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sGenericsFun* )come_increment_ref_count(default_value, "./neo-c.h", 3499, 475);
    come_call_finalizer(sGenericsFun_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3499, 476);
    neo_current_frame = fr.prev;
    come_call_finalizer(sGenericsFun_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 3499, 477);
    return __result_obj__0;
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char*  v2  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sType$phchar$ph_initialize"; neo_current_frame = &fr;
    struct sType*  __dec_obj41  ;
    char*  __dec_obj42  ;
    struct tuple2$2sType$phchar$ph* __result_obj__0;
    __dec_obj41=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1, "./neo-c.h", 4411, 486);
    come_call_finalizer(sType_finalize, __dec_obj41,(void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h", 4411, 485);
    __dec_obj42=self->v2,
    self->v2=(char* )come_increment_ref_count(v2, "./neo-c.h", 4412, 488);
    __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0, (void*)0, "./neo-c.h", 4412, 487);
        __result_obj__0 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(self, "./neo-c.h", 4414, 489);
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4414, 492);
    come_call_finalizer(sType_finalize, v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4414, 493);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 4414, 494));
    neo_current_frame = fr.prev;
    come_call_finalizer(tuple2$2sType$phchar$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4414, 495);
    return __result_obj__0;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "tuple2$2sType$phchar$ph$p_finalize"; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer(sType_finalize, self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0, "tuple2$2sType$phchar$ph$p_finalize}", 2, 490);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, (void*)0, "tuple2$2sType$phchar$ph$p_finalize", 3, 491));
    }
        neo_current_frame = fr.prev;
}

void free_right_value_objects(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "free_right_value_objects"; neo_current_frame = &fr;
    _Bool free_right_value;
    struct list$1sRightValueObject$ph* right_value_objects;
    int n;
    struct list$1sRightValueObject$ph* _o2_saved_5;
    struct sRightValueObject*  it  ;
    struct sVar*  var_  ;
    char*  __dec_obj52  ;
    struct list$1sRightValueObject$ph* _o2_saved_6;
    struct sRightValueObject*  it_22  ;
    struct sType*  type  ;
    void* __right_value0 = (void*)0;
    struct sType*  type2  ;
    struct sType*  __dec_obj53  ;
    char*  sname_saved  ;
    int sline_saved;
    char*  __dec_obj54  ;
    char*  __dec_obj55  ;
    int max_num;
    struct list$1sRightValueObject$ph* _o2_saved_7;
    struct sRightValueObject*  it_23  ;
    if(gComeC) {
                neo_current_frame = fr.prev;
        return;
    }
    if(info->no_output_come_code) {
                neo_current_frame = fr.prev;
        return;
    }
    free_right_value=(_Bool)0;
    right_value_objects=info->right_value_objects;
    n=0;
    for(_o2_saved_5=right_value_objects,it=list$1sRightValueObject$ph_begin(_o2_saved_5)    ;!list$1sRightValueObject$ph_end(_o2_saved_5);it=list$1sRightValueObject$ph_next(_o2_saved_5)){
        if(it&&!it->mFreed) {
            if(string_operator_equals(it->mFunName,info->come_fun->mName)&&it->mBlockLevel==info->block_level&&!it->mStored) {
                if(it->mObjType) {
                    on_drop_object(it->mObjType,it->mObjValue,info);
                    var_=it->mObjVar;
                    __dec_obj52=var_->mCValueName,
                    var_->mCValueName=((void*)0);
                    __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0, (void*)0, "34heap2.nc", 327, 559);
                }
            }
        }
        n++;
    }
    for(_o2_saved_6=right_value_objects,it_22=list$1sRightValueObject$ph_begin(_o2_saved_6)    ;!list$1sRightValueObject$ph_end(_o2_saved_6);it_22=list$1sRightValueObject$ph_next(_o2_saved_6)){
        if(it_22&&!it_22->mFreed) {
            if(string_operator_equals(it_22->mFunName,info->come_fun->mName)&&it_22->mBlockLevel==info->block_level&&!it_22->mStored&&!it_22->mNoFree) {
                type=(struct sType* )come_increment_ref_count(it_22->mType, "34heap2.nc", 337, 560);
                type2=(struct sType* )come_increment_ref_count(sType_clone(type), "34heap2.nc", 339, 561);
                if(info->generics_type) {
                    __right_value0 = (void*)0;
                    __dec_obj53=type,
                    type=(struct sType* )come_increment_ref_count(solve_generics(type2,info->generics_type,info), "34heap2.nc", 342, 563);
                    come_call_finalizer(sType_finalize, __dec_obj53,(void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc", 342, 562);
                }
                __right_value0 = (void*)0;
                sname_saved=(char* )come_increment_ref_count(__builtin_string(info->sname,"34heap2.nc",345), "34heap2.nc", 345, 564);
                sline_saved=info->sline;
                __right_value0 = (void*)0;
                __dec_obj54=info->sname,
                info->sname=(char* )come_increment_ref_count(__builtin_string(it_22->mSName,"34heap2.nc",347), "34heap2.nc", 347, 566);
                __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0, (void*)0, "34heap2.nc", 347, 565);
                info->sline=it_22->mSLine;
                free_object(type,it_22->mVarName,!it_22->mDecrementRefCount,(_Bool)0,info,(_Bool)0);
                __dec_obj55=info->sname,
                info->sname=(char* )come_increment_ref_count(sname_saved, "34heap2.nc", 350, 568);
                __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0, (void*)0, "34heap2.nc", 350, 567);
                info->sline=sline_saved;
                it_22->mFreed=(_Bool)1;
                free_right_value=(_Bool)1;
                come_call_finalizer(sType_finalize, type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 356, 569);
                come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 356, 570);
                (sname_saved = come_decrement_ref_count(sname_saved, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 356, 571));
            }
        }
        n++;
    }
    max_num=0;
    for(_o2_saved_7=right_value_objects,it_23=list$1sRightValueObject$ph_begin(_o2_saved_7)    ;!list$1sRightValueObject$ph_end(_o2_saved_7);it_23=list$1sRightValueObject$ph_next(_o2_saved_7)){
        if(it_23->mID+1>max_num) {
            max_num=it_23->mID+1;
        }
    }
    info->right_value_num=0;
    if(max_num>=info->right_value_max) {
        info->right_value_max=max_num;
    }
    neo_current_frame = fr.prev;
}

static struct sRightValueObject*  list$1sRightValueObject$ph_begin(struct list$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph_begin"; neo_current_frame = &fr;
    struct sRightValueObject*  result  ;
    struct sRightValueObject*  __result_obj__0  ;
    struct sRightValueObject*  result_20  ;
    if(self==((void*)0)) {
        memset(&result,0,sizeof(struct sRightValueObject* ));
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
    memset(&result_20,0,sizeof(struct sRightValueObject* ));
        __result_obj__0 = result_20;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool list$1sRightValueObject$ph_end(struct list$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->it==((void*)0);
        neo_current_frame = fr.prev;
}

static struct sRightValueObject*  list$1sRightValueObject$ph_next(struct list$1sRightValueObject$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sRightValueObject$ph_next"; neo_current_frame = &fr;
    struct sRightValueObject*  result  ;
    struct sRightValueObject*  __result_obj__0  ;
    struct sRightValueObject*  result_21  ;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result,0,sizeof(struct sRightValueObject* ));
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
    memset(&result_21,0,sizeof(struct sRightValueObject* ));
        __result_obj__0 = result_21;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct sVar*  get_variable_from_table(struct sVarTable*  table  , char* name)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "get_variable_from_table"; neo_current_frame = &fr;
    struct sVarTable*  it  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sVar*  var_  ;
    struct sVar*  __result_obj__0  ;
    it=table;
    while(it) {
        var_=((struct sVar* )(__right_value2=map$2char$phsVar$ph_operator_load_element(it->mVars,((char* )(__right_value1=__builtin_string(name,"34heap2.nc",378))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 378, 602));
        if(var_) {
                        __result_obj__0 = var_;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        it=it->mParent;
    }
        __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sVar*  map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sVar*  default_value  ;
    struct sVar*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sVar* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4014, 572);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4014, 573);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4014, 574);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "./neo-c.h", 4026, 575);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4026, 576);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4026, 577);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4033, 578);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4033, 579);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4033, 580);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4037, 581);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4037, 582);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4037, 583);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4041, 584);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4041, 585);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4041, 586);
    return __result_obj__0;
}

static struct sVar*  map$2char$phsVar$ph_operator_load_element(struct map$2char$phsVar$ph* self, char*  key  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_operator_load_element"; neo_current_frame = &fr;
    struct sVar*  default_value  ;
    struct sVar*  __result_obj__0  ;
    unsigned int key_hash;
    unsigned int hash;
    unsigned int it;
    memset(&default_value,0,sizeof(struct sVar* ));
    if(self==((void*)0)) {
                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4014, 587);
        come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4014, 588);
        neo_current_frame = fr.prev;
        come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4014, 589);
        return __result_obj__0;
    }
    key_hash=string_get_hash_key(((char* )key));
    hash=key_hash%self->size;
    it=hash;
    while((_Bool)1) {
        if(self->item_existance[it]) {
            if(self->hashes[it]==key_hash&&string_equals(self->keys[it],key)) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(self->items[it], "./neo-c.h", 4026, 590);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 4026, 591);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4026, 592);
                return __result_obj__0;
            }
            if(++it>=self->size) {
                it=0;
            }
            if(it==hash) {
                                __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4033, 593);
                come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4033, 594);
                neo_current_frame = fr.prev;
                come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4033, 595);
                return __result_obj__0;
            }
        }
        else {
                        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4037, 596);
            come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4037, 597);
            neo_current_frame = fr.prev;
            come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4037, 598);
            return __result_obj__0;
        }
    }
        __result_obj__0 = (struct sVar* )come_increment_ref_count(default_value, "./neo-c.h", 4041, 599);
    come_call_finalizer(sVar_finalize, default_value, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4041, 600);
    neo_current_frame = fr.prev;
    come_call_finalizer(sVar_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "./neo-c.h}", 4041, 601);
    return __result_obj__0;
}

void free_objects(struct sVarTable*  table  , struct sVar*  ret_value  , struct sInfo*  info  , _Bool ret_value_is_field)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "free_objects"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* _o2_saved_8;
    char*  it  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sVar*  p  ;
    struct sType*  type  ;
    struct sClass*  klass  ;
    struct sNode* node;
    _Bool Value;
    struct CVALUE*  come_value  ;
    int n;
    int i;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    void* __right_value7 = (void*)0;
    void* __right_value8 = (void*)0;
    void* __right_value9 = (void*)0;
    void* __right_value10 = (void*)0;
    char*  c_value  ;
    struct sType*  element_type  ;
    struct sNode* node_28;
    _Bool Value_29;
    struct CVALUE*  come_value_30  ;
    int n_31;
    struct sNode* node2;
    _Bool Value_32;
    struct CVALUE*  come_value2  ;
    int m;
    int i_33;
    int j;
    void* __right_value11 = (void*)0;
    void* __right_value12 = (void*)0;
    void* __right_value13 = (void*)0;
    void* __right_value14 = (void*)0;
    void* __right_value15 = (void*)0;
    void* __right_value16 = (void*)0;
    void* __right_value17 = (void*)0;
    void* __right_value18 = (void*)0;
    void* __right_value19 = (void*)0;
    void* __right_value20 = (void*)0;
    void* __right_value21 = (void*)0;
    void* __right_value22 = (void*)0;
    void* __right_value23 = (void*)0;
    void* __right_value24 = (void*)0;
    void* __right_value25 = (void*)0;
    void* __right_value26 = (void*)0;
    void* __right_value27 = (void*)0;
    void* __right_value28 = (void*)0;
    void* __right_value29 = (void*)0;
    void* __right_value30 = (void*)0;
    void* __right_value31 = (void*)0;
    void* __right_value32 = (void*)0;
    void* __right_value33 = (void*)0;
    void* __right_value34 = (void*)0;
    void* __right_value35 = (void*)0;
    void* __right_value36 = (void*)0;
    void* __right_value37 = (void*)0;
    void* __right_value38 = (void*)0;
    void* __right_value39 = (void*)0;
    void* __right_value40 = (void*)0;
    void* __right_value41 = (void*)0;
    void* __right_value42 = (void*)0;
    void* __right_value43 = (void*)0;
    void* __right_value44 = (void*)0;
    void* __right_value45 = (void*)0;
    void* __right_value46 = (void*)0;
    void* __right_value47 = (void*)0;
    void* __right_value48 = (void*)0;
    void* __right_value49 = (void*)0;
    void* __right_value50 = (void*)0;
    void* __right_value51 = (void*)0;
    void* __right_value52 = (void*)0;
    void* __right_value53 = (void*)0;
    void* __right_value54 = (void*)0;
    void* __right_value55 = (void*)0;
    void* __right_value56 = (void*)0;
    void* __right_value57 = (void*)0;
    void* __right_value58 = (void*)0;
    void* __right_value59 = (void*)0;
    void* __right_value60 = (void*)0;
    void* __right_value61 = (void*)0;
    void* __right_value62 = (void*)0;
    void* __right_value63 = (void*)0;
    void* __right_value64 = (void*)0;
    void* __right_value65 = (void*)0;
    void* __right_value66 = (void*)0;
    void* __right_value67 = (void*)0;
    void* __right_value68 = (void*)0;
    void* __right_value69 = (void*)0;
    void* __right_value70 = (void*)0;
    void* __right_value71 = (void*)0;
    void* __right_value72 = (void*)0;
    void* __right_value73 = (void*)0;
    void* __right_value74 = (void*)0;
    void* __right_value75 = (void*)0;
    void* __right_value76 = (void*)0;
    void* __right_value77 = (void*)0;
    void* __right_value78 = (void*)0;
    void* __right_value79 = (void*)0;
    void* __right_value80 = (void*)0;
    void* __right_value81 = (void*)0;
    void* __right_value82 = (void*)0;
    void* __right_value83 = (void*)0;
    void* __right_value84 = (void*)0;
    void* __right_value85 = (void*)0;
    void* __right_value86 = (void*)0;
    void* __right_value87 = (void*)0;
    void* __right_value88 = (void*)0;
    void* __right_value89 = (void*)0;
    void* __right_value90 = (void*)0;
    void* __right_value91 = (void*)0;
    void* __right_value92 = (void*)0;
    void* __right_value93 = (void*)0;
    void* __right_value94 = (void*)0;
    void* __right_value95 = (void*)0;
    void* __right_value96 = (void*)0;
    void* __right_value97 = (void*)0;
    void* __right_value98 = (void*)0;
    char*  c_value_34  ;
    struct sType*  element_type_35  ;
    struct sNode* node_36;
    _Bool Value_37;
    struct CVALUE*  come_value_38  ;
    int n_39;
    struct sNode* node2_40;
    _Bool Value_41;
    struct CVALUE*  come_value2_42  ;
    int m_43;
    struct sNode* node3;
    _Bool Value_44;
    struct CVALUE*  come_value3  ;
    int l;
    int i_45;
    int j_46;
    int k;
    void* __right_value99 = (void*)0;
    void* __right_value100 = (void*)0;
    void* __right_value101 = (void*)0;
    void* __right_value102 = (void*)0;
    void* __right_value103 = (void*)0;
    void* __right_value104 = (void*)0;
    void* __right_value105 = (void*)0;
    void* __right_value106 = (void*)0;
    void* __right_value107 = (void*)0;
    void* __right_value108 = (void*)0;
    void* __right_value109 = (void*)0;
    void* __right_value110 = (void*)0;
    void* __right_value111 = (void*)0;
    void* __right_value112 = (void*)0;
    void* __right_value113 = (void*)0;
    void* __right_value114 = (void*)0;
    void* __right_value115 = (void*)0;
    void* __right_value116 = (void*)0;
    void* __right_value117 = (void*)0;
    void* __right_value118 = (void*)0;
    void* __right_value119 = (void*)0;
    void* __right_value120 = (void*)0;
    void* __right_value121 = (void*)0;
    void* __right_value122 = (void*)0;
    void* __right_value123 = (void*)0;
    void* __right_value124 = (void*)0;
    void* __right_value125 = (void*)0;
    void* __right_value126 = (void*)0;
    void* __right_value127 = (void*)0;
    void* __right_value128 = (void*)0;
    void* __right_value129 = (void*)0;
    void* __right_value130 = (void*)0;
    void* __right_value131 = (void*)0;
    void* __right_value132 = (void*)0;
    void* __right_value133 = (void*)0;
    void* __right_value134 = (void*)0;
    void* __right_value135 = (void*)0;
    void* __right_value136 = (void*)0;
    void* __right_value137 = (void*)0;
    void* __right_value138 = (void*)0;
    void* __right_value139 = (void*)0;
    void* __right_value140 = (void*)0;
    void* __right_value141 = (void*)0;
    void* __right_value142 = (void*)0;
    void* __right_value143 = (void*)0;
    void* __right_value144 = (void*)0;
    void* __right_value145 = (void*)0;
    void* __right_value146 = (void*)0;
    void* __right_value147 = (void*)0;
    void* __right_value148 = (void*)0;
    void* __right_value149 = (void*)0;
    void* __right_value150 = (void*)0;
    void* __right_value151 = (void*)0;
    void* __right_value152 = (void*)0;
    void* __right_value153 = (void*)0;
    void* __right_value154 = (void*)0;
    void* __right_value155 = (void*)0;
    void* __right_value156 = (void*)0;
    void* __right_value157 = (void*)0;
    void* __right_value158 = (void*)0;
    void* __right_value159 = (void*)0;
    void* __right_value160 = (void*)0;
    void* __right_value161 = (void*)0;
    void* __right_value162 = (void*)0;
    void* __right_value163 = (void*)0;
    void* __right_value164 = (void*)0;
    void* __right_value165 = (void*)0;
    void* __right_value166 = (void*)0;
    void* __right_value167 = (void*)0;
    void* __right_value168 = (void*)0;
    void* __right_value169 = (void*)0;
    void* __right_value170 = (void*)0;
    void* __right_value171 = (void*)0;
    void* __right_value172 = (void*)0;
    void* __right_value173 = (void*)0;
    void* __right_value174 = (void*)0;
    void* __right_value175 = (void*)0;
    void* __right_value176 = (void*)0;
    void* __right_value177 = (void*)0;
    void* __right_value178 = (void*)0;
    void* __right_value179 = (void*)0;
    void* __right_value180 = (void*)0;
    void* __right_value181 = (void*)0;
    void* __right_value182 = (void*)0;
    void* __right_value183 = (void*)0;
    void* __right_value184 = (void*)0;
    void* __right_value185 = (void*)0;
    void* __right_value186 = (void*)0;
    void* __right_value187 = (void*)0;
    void* __right_value188 = (void*)0;
    void* __right_value189 = (void*)0;
    void* __right_value190 = (void*)0;
    void* __right_value191 = (void*)0;
    void* __right_value192 = (void*)0;
    void* __right_value193 = (void*)0;
    void* __right_value194 = (void*)0;
    void* __right_value195 = (void*)0;
    void* __right_value196 = (void*)0;
    void* __right_value197 = (void*)0;
    void* __right_value198 = (void*)0;
    void* __right_value199 = (void*)0;
    void* __right_value200 = (void*)0;
    void* __right_value201 = (void*)0;
    void* __right_value202 = (void*)0;
    void* __right_value203 = (void*)0;
    void* __right_value204 = (void*)0;
    void* __right_value205 = (void*)0;
    void* __right_value206 = (void*)0;
    void* __right_value207 = (void*)0;
    void* __right_value208 = (void*)0;
    void* __right_value209 = (void*)0;
    void* __right_value210 = (void*)0;
    void* __right_value211 = (void*)0;
    void* __right_value212 = (void*)0;
    void* __right_value213 = (void*)0;
    void* __right_value214 = (void*)0;
    void* __right_value215 = (void*)0;
    void* __right_value216 = (void*)0;
    void* __right_value217 = (void*)0;
    void* __right_value218 = (void*)0;
    void* __right_value219 = (void*)0;
    void* __right_value220 = (void*)0;
    void* __right_value221 = (void*)0;
    void* __right_value222 = (void*)0;
    void* __right_value223 = (void*)0;
    void* __right_value224 = (void*)0;
    void* __right_value225 = (void*)0;
    void* __right_value226 = (void*)0;
    void* __right_value227 = (void*)0;
    void* __right_value228 = (void*)0;
    void* __right_value229 = (void*)0;
    void* __right_value230 = (void*)0;
    void* __right_value231 = (void*)0;
    void* __right_value232 = (void*)0;
    void* __right_value233 = (void*)0;
    void* __right_value234 = (void*)0;
    void* __right_value235 = (void*)0;
    void* __right_value236 = (void*)0;
    void* __right_value237 = (void*)0;
    void* __right_value238 = (void*)0;
    void* __right_value239 = (void*)0;
    void* __right_value240 = (void*)0;
    void* __right_value241 = (void*)0;
    void* __right_value242 = (void*)0;
    void* __right_value243 = (void*)0;
    void* __right_value244 = (void*)0;
    void* __right_value245 = (void*)0;
    void* __right_value246 = (void*)0;
    void* __right_value247 = (void*)0;
    void* __right_value248 = (void*)0;
    void* __right_value249 = (void*)0;
    void* __right_value250 = (void*)0;
    void* __right_value251 = (void*)0;
    void* __right_value252 = (void*)0;
    void* __right_value253 = (void*)0;
    void* __right_value254 = (void*)0;
    void* __right_value255 = (void*)0;
    void* __right_value256 = (void*)0;
    void* __right_value257 = (void*)0;
    void* __right_value258 = (void*)0;
    void* __right_value259 = (void*)0;
    void* __right_value260 = (void*)0;
    void* __right_value261 = (void*)0;
    void* __right_value262 = (void*)0;
    void* __right_value263 = (void*)0;
    void* __right_value264 = (void*)0;
    void* __right_value265 = (void*)0;
    void* __right_value266 = (void*)0;
    void* __right_value267 = (void*)0;
    void* __right_value268 = (void*)0;
    void* __right_value269 = (void*)0;
    void* __right_value270 = (void*)0;
    void* __right_value271 = (void*)0;
    void* __right_value272 = (void*)0;
    void* __right_value273 = (void*)0;
    void* __right_value274 = (void*)0;
    void* __right_value275 = (void*)0;
    void* __right_value276 = (void*)0;
    void* __right_value277 = (void*)0;
    void* __right_value278 = (void*)0;
    void* __right_value279 = (void*)0;
    void* __right_value280 = (void*)0;
    void* __right_value281 = (void*)0;
    void* __right_value282 = (void*)0;
    void* __right_value283 = (void*)0;
    void* __right_value284 = (void*)0;
    void* __right_value285 = (void*)0;
    void* __right_value286 = (void*)0;
    void* __right_value287 = (void*)0;
    void* __right_value288 = (void*)0;
    void* __right_value289 = (void*)0;
    void* __right_value290 = (void*)0;
    void* __right_value291 = (void*)0;
    void* __right_value292 = (void*)0;
    void* __right_value293 = (void*)0;
    void* __right_value294 = (void*)0;
    void* __right_value295 = (void*)0;
    void* __right_value296 = (void*)0;
    void* __right_value297 = (void*)0;
    void* __right_value298 = (void*)0;
    void* __right_value299 = (void*)0;
    void* __right_value300 = (void*)0;
    void* __right_value301 = (void*)0;
    void* __right_value302 = (void*)0;
    void* __right_value303 = (void*)0;
    void* __right_value304 = (void*)0;
    void* __right_value305 = (void*)0;
    void* __right_value306 = (void*)0;
    void* __right_value307 = (void*)0;
    void* __right_value308 = (void*)0;
    void* __right_value309 = (void*)0;
    void* __right_value310 = (void*)0;
    void* __right_value311 = (void*)0;
    void* __right_value312 = (void*)0;
    void* __right_value313 = (void*)0;
    void* __right_value314 = (void*)0;
    void* __right_value315 = (void*)0;
    void* __right_value316 = (void*)0;
    void* __right_value317 = (void*)0;
    void* __right_value318 = (void*)0;
    void* __right_value319 = (void*)0;
    void* __right_value320 = (void*)0;
    void* __right_value321 = (void*)0;
    void* __right_value322 = (void*)0;
    void* __right_value323 = (void*)0;
    void* __right_value324 = (void*)0;
    void* __right_value325 = (void*)0;
    void* __right_value326 = (void*)0;
    void* __right_value327 = (void*)0;
    void* __right_value328 = (void*)0;
    void* __right_value329 = (void*)0;
    void* __right_value330 = (void*)0;
    void* __right_value331 = (void*)0;
    void* __right_value332 = (void*)0;
    void* __right_value333 = (void*)0;
    void* __right_value334 = (void*)0;
    void* __right_value335 = (void*)0;
    void* __right_value336 = (void*)0;
    void* __right_value337 = (void*)0;
    void* __right_value338 = (void*)0;
    void* __right_value339 = (void*)0;
    void* __right_value340 = (void*)0;
    void* __right_value341 = (void*)0;
    void* __right_value342 = (void*)0;
    void* __right_value343 = (void*)0;
    void* __right_value344 = (void*)0;
    void* __right_value345 = (void*)0;
    void* __right_value346 = (void*)0;
    void* __right_value347 = (void*)0;
    void* __right_value348 = (void*)0;
    void* __right_value349 = (void*)0;
    void* __right_value350 = (void*)0;
    void* __right_value351 = (void*)0;
    void* __right_value352 = (void*)0;
    void* __right_value353 = (void*)0;
    void* __right_value354 = (void*)0;
    void* __right_value355 = (void*)0;
    void* __right_value356 = (void*)0;
    void* __right_value357 = (void*)0;
    void* __right_value358 = (void*)0;
    void* __right_value359 = (void*)0;
    void* __right_value360 = (void*)0;
    void* __right_value361 = (void*)0;
    void* __right_value362 = (void*)0;
    void* __right_value363 = (void*)0;
    void* __right_value364 = (void*)0;
    void* __right_value365 = (void*)0;
    void* __right_value366 = (void*)0;
    void* __right_value367 = (void*)0;
    void* __right_value368 = (void*)0;
    void* __right_value369 = (void*)0;
    void* __right_value370 = (void*)0;
    void* __right_value371 = (void*)0;
    void* __right_value372 = (void*)0;
    void* __right_value373 = (void*)0;
    void* __right_value374 = (void*)0;
    void* __right_value375 = (void*)0;
    void* __right_value376 = (void*)0;
    void* __right_value377 = (void*)0;
    void* __right_value378 = (void*)0;
    void* __right_value379 = (void*)0;
    void* __right_value380 = (void*)0;
    void* __right_value381 = (void*)0;
    void* __right_value382 = (void*)0;
    void* __right_value383 = (void*)0;
    void* __right_value384 = (void*)0;
    void* __right_value385 = (void*)0;
    void* __right_value386 = (void*)0;
    void* __right_value387 = (void*)0;
    void* __right_value388 = (void*)0;
    void* __right_value389 = (void*)0;
    void* __right_value390 = (void*)0;
    void* __right_value391 = (void*)0;
    void* __right_value392 = (void*)0;
    void* __right_value393 = (void*)0;
    void* __right_value394 = (void*)0;
    void* __right_value395 = (void*)0;
    void* __right_value396 = (void*)0;
    void* __right_value397 = (void*)0;
    void* __right_value398 = (void*)0;
    void* __right_value399 = (void*)0;
    void* __right_value400 = (void*)0;
    void* __right_value401 = (void*)0;
    void* __right_value402 = (void*)0;
    void* __right_value403 = (void*)0;
    void* __right_value404 = (void*)0;
    void* __right_value405 = (void*)0;
    void* __right_value406 = (void*)0;
    void* __right_value407 = (void*)0;
    void* __right_value408 = (void*)0;
    void* __right_value409 = (void*)0;
    void* __right_value410 = (void*)0;
    void* __right_value411 = (void*)0;
    void* __right_value412 = (void*)0;
    void* __right_value413 = (void*)0;
    void* __right_value414 = (void*)0;
    void* __right_value415 = (void*)0;
    void* __right_value416 = (void*)0;
    void* __right_value417 = (void*)0;
    void* __right_value418 = (void*)0;
    void* __right_value419 = (void*)0;
    void* __right_value420 = (void*)0;
    void* __right_value421 = (void*)0;
    void* __right_value422 = (void*)0;
    void* __right_value423 = (void*)0;
    void* __right_value424 = (void*)0;
    void* __right_value425 = (void*)0;
    void* __right_value426 = (void*)0;
    void* __right_value427 = (void*)0;
    void* __right_value428 = (void*)0;
    void* __right_value429 = (void*)0;
    void* __right_value430 = (void*)0;
    void* __right_value431 = (void*)0;
    void* __right_value432 = (void*)0;
    void* __right_value433 = (void*)0;
    void* __right_value434 = (void*)0;
    void* __right_value435 = (void*)0;
    void* __right_value436 = (void*)0;
    void* __right_value437 = (void*)0;
    void* __right_value438 = (void*)0;
    void* __right_value439 = (void*)0;
    void* __right_value440 = (void*)0;
    void* __right_value441 = (void*)0;
    void* __right_value442 = (void*)0;
    void* __right_value443 = (void*)0;
    void* __right_value444 = (void*)0;
    void* __right_value445 = (void*)0;
    void* __right_value446 = (void*)0;
    void* __right_value447 = (void*)0;
    void* __right_value448 = (void*)0;
    void* __right_value449 = (void*)0;
    void* __right_value450 = (void*)0;
    void* __right_value451 = (void*)0;
    void* __right_value452 = (void*)0;
    void* __right_value453 = (void*)0;
    void* __right_value454 = (void*)0;
    void* __right_value455 = (void*)0;
    void* __right_value456 = (void*)0;
    void* __right_value457 = (void*)0;
    void* __right_value458 = (void*)0;
    void* __right_value459 = (void*)0;
    void* __right_value460 = (void*)0;
    void* __right_value461 = (void*)0;
    void* __right_value462 = (void*)0;
    void* __right_value463 = (void*)0;
    void* __right_value464 = (void*)0;
    void* __right_value465 = (void*)0;
    void* __right_value466 = (void*)0;
    void* __right_value467 = (void*)0;
    void* __right_value468 = (void*)0;
    void* __right_value469 = (void*)0;
    void* __right_value470 = (void*)0;
    void* __right_value471 = (void*)0;
    void* __right_value472 = (void*)0;
    void* __right_value473 = (void*)0;
    void* __right_value474 = (void*)0;
    void* __right_value475 = (void*)0;
    void* __right_value476 = (void*)0;
    void* __right_value477 = (void*)0;
    void* __right_value478 = (void*)0;
    void* __right_value479 = (void*)0;
    void* __right_value480 = (void*)0;
    void* __right_value481 = (void*)0;
    void* __right_value482 = (void*)0;
    void* __right_value483 = (void*)0;
    void* __right_value484 = (void*)0;
    void* __right_value485 = (void*)0;
    void* __right_value486 = (void*)0;
    void* __right_value487 = (void*)0;
    void* __right_value488 = (void*)0;
    void* __right_value489 = (void*)0;
    void* __right_value490 = (void*)0;
    void* __right_value491 = (void*)0;
    void* __right_value492 = (void*)0;
    void* __right_value493 = (void*)0;
    void* __right_value494 = (void*)0;
    void* __right_value495 = (void*)0;
    void* __right_value496 = (void*)0;
    void* __right_value497 = (void*)0;
    void* __right_value498 = (void*)0;
    void* __right_value499 = (void*)0;
    void* __right_value500 = (void*)0;
    void* __right_value501 = (void*)0;
    void* __right_value502 = (void*)0;
    void* __right_value503 = (void*)0;
    void* __right_value504 = (void*)0;
    void* __right_value505 = (void*)0;
    void* __right_value506 = (void*)0;
    void* __right_value507 = (void*)0;
    void* __right_value508 = (void*)0;
    void* __right_value509 = (void*)0;
    void* __right_value510 = (void*)0;
    void* __right_value511 = (void*)0;
    void* __right_value512 = (void*)0;
    void* __right_value513 = (void*)0;
    void* __right_value514 = (void*)0;
    void* __right_value515 = (void*)0;
    void* __right_value516 = (void*)0;
    void* __right_value517 = (void*)0;
    void* __right_value518 = (void*)0;
    void* __right_value519 = (void*)0;
    void* __right_value520 = (void*)0;
    void* __right_value521 = (void*)0;
    void* __right_value522 = (void*)0;
    void* __right_value523 = (void*)0;
    void* __right_value524 = (void*)0;
    void* __right_value525 = (void*)0;
    void* __right_value526 = (void*)0;
    void* __right_value527 = (void*)0;
    void* __right_value528 = (void*)0;
    void* __right_value529 = (void*)0;
    void* __right_value530 = (void*)0;
    void* __right_value531 = (void*)0;
    void* __right_value532 = (void*)0;
    void* __right_value533 = (void*)0;
    void* __right_value534 = (void*)0;
    void* __right_value535 = (void*)0;
    void* __right_value536 = (void*)0;
    void* __right_value537 = (void*)0;
    void* __right_value538 = (void*)0;
    void* __right_value539 = (void*)0;
    void* __right_value540 = (void*)0;
    void* __right_value541 = (void*)0;
    void* __right_value542 = (void*)0;
    void* __right_value543 = (void*)0;
    void* __right_value544 = (void*)0;
    void* __right_value545 = (void*)0;
    void* __right_value546 = (void*)0;
    void* __right_value547 = (void*)0;
    void* __right_value548 = (void*)0;
    void* __right_value549 = (void*)0;
    void* __right_value550 = (void*)0;
    void* __right_value551 = (void*)0;
    void* __right_value552 = (void*)0;
    void* __right_value553 = (void*)0;
    void* __right_value554 = (void*)0;
    void* __right_value555 = (void*)0;
    void* __right_value556 = (void*)0;
    void* __right_value557 = (void*)0;
    void* __right_value558 = (void*)0;
    void* __right_value559 = (void*)0;
    void* __right_value560 = (void*)0;
    void* __right_value561 = (void*)0;
    void* __right_value562 = (void*)0;
    void* __right_value563 = (void*)0;
    void* __right_value564 = (void*)0;
    void* __right_value565 = (void*)0;
    void* __right_value566 = (void*)0;
    void* __right_value567 = (void*)0;
    void* __right_value568 = (void*)0;
    void* __right_value569 = (void*)0;
    void* __right_value570 = (void*)0;
    void* __right_value571 = (void*)0;
    void* __right_value572 = (void*)0;
    void* __right_value573 = (void*)0;
    void* __right_value574 = (void*)0;
    void* __right_value575 = (void*)0;
    void* __right_value576 = (void*)0;
    void* __right_value577 = (void*)0;
    void* __right_value578 = (void*)0;
    void* __right_value579 = (void*)0;
    void* __right_value580 = (void*)0;
    void* __right_value581 = (void*)0;
    void* __right_value582 = (void*)0;
    void* __right_value583 = (void*)0;
    void* __right_value584 = (void*)0;
    void* __right_value585 = (void*)0;
    void* __right_value586 = (void*)0;
    void* __right_value587 = (void*)0;
    void* __right_value588 = (void*)0;
    void* __right_value589 = (void*)0;
    void* __right_value590 = (void*)0;
    void* __right_value591 = (void*)0;
    void* __right_value592 = (void*)0;
    void* __right_value593 = (void*)0;
    void* __right_value594 = (void*)0;
    void* __right_value595 = (void*)0;
    void* __right_value596 = (void*)0;
    void* __right_value597 = (void*)0;
    void* __right_value598 = (void*)0;
    void* __right_value599 = (void*)0;
    void* __right_value600 = (void*)0;
    void* __right_value601 = (void*)0;
    void* __right_value602 = (void*)0;
    void* __right_value603 = (void*)0;
    void* __right_value604 = (void*)0;
    void* __right_value605 = (void*)0;
    void* __right_value606 = (void*)0;
    void* __right_value607 = (void*)0;
    void* __right_value608 = (void*)0;
    void* __right_value609 = (void*)0;
    void* __right_value610 = (void*)0;
    void* __right_value611 = (void*)0;
    void* __right_value612 = (void*)0;
    void* __right_value613 = (void*)0;
    void* __right_value614 = (void*)0;
    void* __right_value615 = (void*)0;
    void* __right_value616 = (void*)0;
    void* __right_value617 = (void*)0;
    void* __right_value618 = (void*)0;
    void* __right_value619 = (void*)0;
    void* __right_value620 = (void*)0;
    void* __right_value621 = (void*)0;
    void* __right_value622 = (void*)0;
    void* __right_value623 = (void*)0;
    void* __right_value624 = (void*)0;
    void* __right_value625 = (void*)0;
    void* __right_value626 = (void*)0;
    void* __right_value627 = (void*)0;
    void* __right_value628 = (void*)0;
    void* __right_value629 = (void*)0;
    void* __right_value630 = (void*)0;
    void* __right_value631 = (void*)0;
    void* __right_value632 = (void*)0;
    void* __right_value633 = (void*)0;
    void* __right_value634 = (void*)0;
    void* __right_value635 = (void*)0;
    void* __right_value636 = (void*)0;
    void* __right_value637 = (void*)0;
    void* __right_value638 = (void*)0;
    void* __right_value639 = (void*)0;
    void* __right_value640 = (void*)0;
    void* __right_value641 = (void*)0;
    void* __right_value642 = (void*)0;
    void* __right_value643 = (void*)0;
    void* __right_value644 = (void*)0;
    void* __right_value645 = (void*)0;
    void* __right_value646 = (void*)0;
    void* __right_value647 = (void*)0;
    void* __right_value648 = (void*)0;
    void* __right_value649 = (void*)0;
    void* __right_value650 = (void*)0;
    void* __right_value651 = (void*)0;
    void* __right_value652 = (void*)0;
    void* __right_value653 = (void*)0;
    void* __right_value654 = (void*)0;
    void* __right_value655 = (void*)0;
    void* __right_value656 = (void*)0;
    void* __right_value657 = (void*)0;
    void* __right_value658 = (void*)0;
    void* __right_value659 = (void*)0;
    void* __right_value660 = (void*)0;
    void* __right_value661 = (void*)0;
    void* __right_value662 = (void*)0;
    void* __right_value663 = (void*)0;
    void* __right_value664 = (void*)0;
    void* __right_value665 = (void*)0;
    void* __right_value666 = (void*)0;
    void* __right_value667 = (void*)0;
    void* __right_value668 = (void*)0;
    void* __right_value669 = (void*)0;
    void* __right_value670 = (void*)0;
    void* __right_value671 = (void*)0;
    void* __right_value672 = (void*)0;
    void* __right_value673 = (void*)0;
    void* __right_value674 = (void*)0;
    void* __right_value675 = (void*)0;
    void* __right_value676 = (void*)0;
    void* __right_value677 = (void*)0;
    void* __right_value678 = (void*)0;
    void* __right_value679 = (void*)0;
    void* __right_value680 = (void*)0;
    void* __right_value681 = (void*)0;
    void* __right_value682 = (void*)0;
    void* __right_value683 = (void*)0;
    void* __right_value684 = (void*)0;
    void* __right_value685 = (void*)0;
    void* __right_value686 = (void*)0;
    void* __right_value687 = (void*)0;
    void* __right_value688 = (void*)0;
    void* __right_value689 = (void*)0;
    void* __right_value690 = (void*)0;
    void* __right_value691 = (void*)0;
    void* __right_value692 = (void*)0;
    void* __right_value693 = (void*)0;
    void* __right_value694 = (void*)0;
    void* __right_value695 = (void*)0;
    void* __right_value696 = (void*)0;
    void* __right_value697 = (void*)0;
    void* __right_value698 = (void*)0;
    void* __right_value699 = (void*)0;
    void* __right_value700 = (void*)0;
    void* __right_value701 = (void*)0;
    void* __right_value702 = (void*)0;
    void* __right_value703 = (void*)0;
    void* __right_value704 = (void*)0;
    void* __right_value705 = (void*)0;
    void* __right_value706 = (void*)0;
    void* __right_value707 = (void*)0;
    void* __right_value708 = (void*)0;
    void* __right_value709 = (void*)0;
    void* __right_value710 = (void*)0;
    void* __right_value711 = (void*)0;
    void* __right_value712 = (void*)0;
    void* __right_value713 = (void*)0;
    void* __right_value714 = (void*)0;
    void* __right_value715 = (void*)0;
    void* __right_value716 = (void*)0;
    void* __right_value717 = (void*)0;
    void* __right_value718 = (void*)0;
    void* __right_value719 = (void*)0;
    void* __right_value720 = (void*)0;
    void* __right_value721 = (void*)0;
    void* __right_value722 = (void*)0;
    void* __right_value723 = (void*)0;
    void* __right_value724 = (void*)0;
    void* __right_value725 = (void*)0;
    void* __right_value726 = (void*)0;
    void* __right_value727 = (void*)0;
    void* __right_value728 = (void*)0;
    void* __right_value729 = (void*)0;
    void* __right_value730 = (void*)0;
    void* __right_value731 = (void*)0;
    void* __right_value732 = (void*)0;
    void* __right_value733 = (void*)0;
    void* __right_value734 = (void*)0;
    void* __right_value735 = (void*)0;
    void* __right_value736 = (void*)0;
    void* __right_value737 = (void*)0;
    void* __right_value738 = (void*)0;
    void* __right_value739 = (void*)0;
    void* __right_value740 = (void*)0;
    void* __right_value741 = (void*)0;
    void* __right_value742 = (void*)0;
    void* __right_value743 = (void*)0;
    void* __right_value744 = (void*)0;
    void* __right_value745 = (void*)0;
    void* __right_value746 = (void*)0;
    void* __right_value747 = (void*)0;
    void* __right_value748 = (void*)0;
    void* __right_value749 = (void*)0;
    void* __right_value750 = (void*)0;
    void* __right_value751 = (void*)0;
    void* __right_value752 = (void*)0;
    void* __right_value753 = (void*)0;
    void* __right_value754 = (void*)0;
    void* __right_value755 = (void*)0;
    void* __right_value756 = (void*)0;
    void* __right_value757 = (void*)0;
    void* __right_value758 = (void*)0;
    void* __right_value759 = (void*)0;
    void* __right_value760 = (void*)0;
    void* __right_value761 = (void*)0;
    void* __right_value762 = (void*)0;
    void* __right_value763 = (void*)0;
    void* __right_value764 = (void*)0;
    void* __right_value765 = (void*)0;
    void* __right_value766 = (void*)0;
    void* __right_value767 = (void*)0;
    void* __right_value768 = (void*)0;
    void* __right_value769 = (void*)0;
    void* __right_value770 = (void*)0;
    void* __right_value771 = (void*)0;
    void* __right_value772 = (void*)0;
    void* __right_value773 = (void*)0;
    void* __right_value774 = (void*)0;
    void* __right_value775 = (void*)0;
    void* __right_value776 = (void*)0;
    void* __right_value777 = (void*)0;
    void* __right_value778 = (void*)0;
    void* __right_value779 = (void*)0;
    void* __right_value780 = (void*)0;
    void* __right_value781 = (void*)0;
    void* __right_value782 = (void*)0;
    void* __right_value783 = (void*)0;
    void* __right_value784 = (void*)0;
    void* __right_value785 = (void*)0;
    void* __right_value786 = (void*)0;
    void* __right_value787 = (void*)0;
    void* __right_value788 = (void*)0;
    void* __right_value789 = (void*)0;
    void* __right_value790 = (void*)0;
    void* __right_value791 = (void*)0;
    void* __right_value792 = (void*)0;
    void* __right_value793 = (void*)0;
    void* __right_value794 = (void*)0;
    void* __right_value795 = (void*)0;
    void* __right_value796 = (void*)0;
    void* __right_value797 = (void*)0;
    void* __right_value798 = (void*)0;
    void* __right_value799 = (void*)0;
    void* __right_value800 = (void*)0;
    void* __right_value801 = (void*)0;
    void* __right_value802 = (void*)0;
    char*  c_value_47  ;
    struct sType*  element_type_48  ;
    char*  c_value_49  ;
    struct sType*  type2  ;
    if(gComeC) {
                neo_current_frame = fr.prev;
        return;
    }
    if(info->no_output_come_code) {
                neo_current_frame = fr.prev;
        return;
    }
    for(_o2_saved_8=(struct map$2char$phsVar$ph*)come_increment_ref_count(table->mVars, "34heap2.nc", 398, 603),it=map$2char$phsVar$ph_begin(_o2_saved_8)    ;!map$2char$phsVar$ph_end(_o2_saved_8);it=map$2char$phsVar$ph_next(_o2_saved_8)){
        p=((struct sVar* )(__right_value2=map$2char$phsVar$ph_operator_load_element(table->mVars,((char* )(__right_value1=__builtin_string(it,"34heap2.nc",399))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 399, 604));
        type=p->mType;
        klass=type->mClass;
        if(p->no_output_come_code) {
        }
        else if(type->mChannel) {
            add_come_code(info,"(%s[0]) ? close(%s[0]):0;\n",p->mCValueName,p->mCValueName);
            add_come_code(info,"(%s[1]) ? close(%s[1]):0;\n",p->mCValueName,p->mCValueName);
        }
        else if(ret_value!=((void*)0)&&p->mCValueName!=((void*)0)&&string_operator_equals(p->mCValueName,ret_value->mCValueName)&&type->mHeap) {
            if(list$1sNode$ph_length(type->mArrayNum)>0) {
                err_msg(info,"no support array element with heap object result");
                exit(1);
            }
            if(ret_value_is_field) {
                free_object(type,p->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)1);
            }
            else {
                free_object(type,p->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)1);
            }
        }
        else if(type->mHeap&&p->mCValueName) {
            if(list$1sNode$ph_length(type->mArrayNum)>0) {
                if(list$1sNode$ph_length(type->mArrayNum)==1) {
                    __right_value0 = (void*)0;
                    node=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,0), "34heap2.nc", 425, 623);
                    Value=node_compile(node,info);
                    if(!Value) {
                        err_msg(info,"invalid array number");
                        exit(1);
                    }
                    __right_value0 = (void*)0;
                    come_value=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "34heap2.nc", 432, 624);
                    n=atoi(come_value->c_value);
                    for(i=0                    ;i<n;i++){
                        __right_value0 = (void*)0;
                        __right_value1 = (void*)0;
                        __right_value2 = (void*)0;
                        c_value=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value9=string_operator_add(((char* )(__right_value7=string_operator_add(p->mCValueName,"["))),((char* )(__right_value8=int_to_string(i)))))),"]"), "34heap2.nc", 437, 625);
                        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 437, 626));
                        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 437, 627));
                        (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 437, 628));
                        (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 437, 629));
                        (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 437, 630));
                        __right_value0 = (void*)0;
                        element_type=(struct sType* )come_increment_ref_count(sType_clone(type), "34heap2.nc", 438, 631);
                        list$1sNode$ph_reset(element_type->mArrayNum);
                        free_object(element_type,c_value,(_Bool)0,(_Bool)0,info,(_Bool)0);
                        (c_value = come_decrement_ref_count(c_value, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 443, 633));
                        come_call_finalizer(sType_finalize, element_type, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 443, 634);
                    }
                    ((node) ? node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0,(void*)0, "34heap2.nc", 529, 635):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 529, 636);
                }
                else if(list$1sNode$ph_length(type->mArrayNum)==2) {
                    __right_value0 = (void*)0;
                    node_28=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,0), "34heap2.nc", 445, 637);
                    Value_29=node_compile(node_28,info);
                    if(!Value_29) {
                        err_msg(info,"invalid array number");
                        exit(1);
                    }
                    __right_value0 = (void*)0;
                    come_value_30=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "34heap2.nc", 452, 638);
                    n_31=atoi(come_value_30->c_value);
                    __right_value0 = (void*)0;
                    node2=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,1), "34heap2.nc", 456, 639);
                    Value_32=node_compile(node2,info);
                    if(!Value_32) {
                        err_msg(info,"invalid array number");
                        exit(1);
                    }
                    __right_value0 = (void*)0;
                    come_value2=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "34heap2.nc", 463, 640);
                    m=atoi(come_value2->c_value);
                    for(i_33=0                    ;i_33<n_31;i_33++){
                        for(j=0                        ;j<m;j++){
                            __right_value0 = (void*)0;
                            __right_value1 = (void*)0;
                            __right_value2 = (void*)0;
                            __right_value3 = (void*)0;
                            __right_value4 = (void*)0;
                            __right_value5 = (void*)0;
                            __right_value6 = (void*)0;
                            __right_value7 = (void*)0;
                            __right_value8 = (void*)0;
                            __right_value9 = (void*)0;
                            __right_value10 = (void*)0;
                            c_value_34=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value97=string_operator_add(((char* )(__right_value95=string_operator_add(((char* )(__right_value94=string_operator_add(((char* )(__right_value93=string_operator_add(((char* )(__right_value91=string_operator_add(p->mCValueName,"["))),((char* )(__right_value92=int_to_string(i_33)))))),"]"))),"["))),((char* )(__right_value96=int_to_string(j)))))),"]"), "34heap2.nc", 469, 641);
                            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 642));
                            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 643));
                            (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 644));
                            (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 645));
                            (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 646));
                            (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 647));
                            (__right_value14 = come_decrement_ref_count(__right_value14, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 648));
                            (__right_value18 = come_decrement_ref_count(__right_value18, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 649));
                            (__right_value19 = come_decrement_ref_count(__right_value19, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 650));
                            (__right_value20 = come_decrement_ref_count(__right_value20, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 651));
                            (__right_value21 = come_decrement_ref_count(__right_value21, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 652));
                            (__right_value26 = come_decrement_ref_count(__right_value26, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 653));
                            (__right_value27 = come_decrement_ref_count(__right_value27, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 654));
                            (__right_value31 = come_decrement_ref_count(__right_value31, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 655));
                            (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 656));
                            (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 657));
                            (__right_value37 = come_decrement_ref_count(__right_value37, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 658));
                            (__right_value38 = come_decrement_ref_count(__right_value38, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 659));
                            (__right_value42 = come_decrement_ref_count(__right_value42, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 660));
                            (__right_value43 = come_decrement_ref_count(__right_value43, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 661));
                            (__right_value44 = come_decrement_ref_count(__right_value44, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 662));
                            (__right_value45 = come_decrement_ref_count(__right_value45, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 663));
                            (__right_value46 = come_decrement_ref_count(__right_value46, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 664));
                            (__right_value47 = come_decrement_ref_count(__right_value47, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 665));
                            (__right_value51 = come_decrement_ref_count(__right_value51, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 666));
                            (__right_value52 = come_decrement_ref_count(__right_value52, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 667));
                            (__right_value56 = come_decrement_ref_count(__right_value56, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 668));
                            (__right_value57 = come_decrement_ref_count(__right_value57, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 669));
                            (__right_value58 = come_decrement_ref_count(__right_value58, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 670));
                            (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 671));
                            (__right_value63 = come_decrement_ref_count(__right_value63, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 672));
                            (__right_value67 = come_decrement_ref_count(__right_value67, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 673));
                            (__right_value68 = come_decrement_ref_count(__right_value68, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 674));
                            (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 675));
                            (__right_value70 = come_decrement_ref_count(__right_value70, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 676));
                            (__right_value75 = come_decrement_ref_count(__right_value75, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 677));
                            (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 678));
                            (__right_value80 = come_decrement_ref_count(__right_value80, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 679));
                            (__right_value81 = come_decrement_ref_count(__right_value81, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 680));
                            (__right_value82 = come_decrement_ref_count(__right_value82, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 681));
                            (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 682));
                            (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 683));
                            (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 684));
                            (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 685));
                            (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 686));
                            (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 687));
                            (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 688));
                            (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 689));
                            (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 469, 690));
                            __right_value0 = (void*)0;
                            element_type_35=(struct sType* )come_increment_ref_count(sType_clone(type), "34heap2.nc", 471, 691);
                            list$1sNode$ph_reset(element_type_35->mArrayNum);
                            free_object(element_type_35,c_value_34,(_Bool)0,(_Bool)0,info,(_Bool)0);
                            (c_value_34 = come_decrement_ref_count(c_value_34, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 476, 692));
                            come_call_finalizer(sType_finalize, element_type_35, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 476, 693);
                        }
                    }
                    ((node_28) ? node_28 = come_decrement_ref_count(node_28, ((struct sNode*)node_28)->finalize, ((struct sNode*)node_28)->_protocol_obj, 0, 0,(void*)0, "34heap2.nc", 529, 694):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value_30, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 529, 695);
                    ((node2) ? node2 = come_decrement_ref_count(node2, ((struct sNode*)node2)->finalize, ((struct sNode*)node2)->_protocol_obj, 0, 0,(void*)0, "34heap2.nc", 529, 696):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 529, 697);
                }
                else if(list$1sNode$ph_length(type->mArrayNum)==3) {
                    __right_value0 = (void*)0;
                    node_36=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,0), "34heap2.nc", 479, 698);
                    Value_37=node_compile(node_36,info);
                    if(!Value_37) {
                        err_msg(info,"invalid array number");
                        exit(1);
                    }
                    __right_value0 = (void*)0;
                    come_value_38=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "34heap2.nc", 486, 699);
                    n_39=atoi(come_value_38->c_value);
                    __right_value0 = (void*)0;
                    node2_40=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,1), "34heap2.nc", 490, 700);
                    Value_41=node_compile(node2_40,info);
                    if(!Value_41) {
                        err_msg(info,"invalid array number");
                        exit(1);
                    }
                    __right_value0 = (void*)0;
                    come_value2_42=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "34heap2.nc", 497, 701);
                    m_43=atoi(come_value2_42->c_value);
                    __right_value0 = (void*)0;
                    node3=(struct sNode*)come_increment_ref_count(list$1sNode$ph_operator_load_element(type->mArrayNum,2), "34heap2.nc", 501, 702);
                    Value_44=node_compile(node3,info);
                    if(!Value_44) {
                        err_msg(info,"invalid array number");
                        exit(1);
                    }
                    __right_value0 = (void*)0;
                    come_value3=(struct CVALUE* )come_increment_ref_count(get_value_from_stack(-1,info), "34heap2.nc", 508, 703);
                    l=atoi(come_value3->c_value);
                    for(i_45=0                    ;i_45<n_39;i_45++){
                        for(j_46=0                        ;j_46<m_43;j_46++){
                            for(k=0                            ;k<l;k++){
                                __right_value0 = (void*)0;
                                __right_value1 = (void*)0;
                                __right_value2 = (void*)0;
                                __right_value3 = (void*)0;
                                __right_value4 = (void*)0;
                                __right_value5 = (void*)0;
                                __right_value6 = (void*)0;
                                __right_value7 = (void*)0;
                                __right_value8 = (void*)0;
                                __right_value9 = (void*)0;
                                __right_value10 = (void*)0;
                                __right_value11 = (void*)0;
                                __right_value12 = (void*)0;
                                __right_value13 = (void*)0;
                                __right_value14 = (void*)0;
                                __right_value15 = (void*)0;
                                __right_value16 = (void*)0;
                                __right_value17 = (void*)0;
                                __right_value18 = (void*)0;
                                __right_value19 = (void*)0;
                                __right_value20 = (void*)0;
                                __right_value21 = (void*)0;
                                __right_value22 = (void*)0;
                                __right_value23 = (void*)0;
                                __right_value24 = (void*)0;
                                __right_value25 = (void*)0;
                                __right_value26 = (void*)0;
                                __right_value27 = (void*)0;
                                __right_value28 = (void*)0;
                                __right_value29 = (void*)0;
                                __right_value30 = (void*)0;
                                __right_value31 = (void*)0;
                                __right_value32 = (void*)0;
                                __right_value33 = (void*)0;
                                __right_value34 = (void*)0;
                                __right_value35 = (void*)0;
                                __right_value36 = (void*)0;
                                __right_value37 = (void*)0;
                                __right_value38 = (void*)0;
                                __right_value39 = (void*)0;
                                __right_value40 = (void*)0;
                                __right_value41 = (void*)0;
                                __right_value42 = (void*)0;
                                __right_value43 = (void*)0;
                                __right_value44 = (void*)0;
                                __right_value45 = (void*)0;
                                __right_value46 = (void*)0;
                                __right_value47 = (void*)0;
                                __right_value48 = (void*)0;
                                __right_value49 = (void*)0;
                                __right_value50 = (void*)0;
                                __right_value51 = (void*)0;
                                __right_value52 = (void*)0;
                                __right_value53 = (void*)0;
                                __right_value54 = (void*)0;
                                __right_value55 = (void*)0;
                                __right_value56 = (void*)0;
                                __right_value57 = (void*)0;
                                __right_value58 = (void*)0;
                                __right_value59 = (void*)0;
                                __right_value60 = (void*)0;
                                __right_value61 = (void*)0;
                                __right_value62 = (void*)0;
                                __right_value63 = (void*)0;
                                __right_value64 = (void*)0;
                                __right_value65 = (void*)0;
                                __right_value66 = (void*)0;
                                __right_value67 = (void*)0;
                                __right_value68 = (void*)0;
                                __right_value69 = (void*)0;
                                __right_value70 = (void*)0;
                                __right_value71 = (void*)0;
                                __right_value72 = (void*)0;
                                __right_value73 = (void*)0;
                                __right_value74 = (void*)0;
                                __right_value75 = (void*)0;
                                __right_value76 = (void*)0;
                                __right_value77 = (void*)0;
                                __right_value78 = (void*)0;
                                __right_value79 = (void*)0;
                                __right_value80 = (void*)0;
                                __right_value81 = (void*)0;
                                __right_value82 = (void*)0;
                                __right_value83 = (void*)0;
                                __right_value84 = (void*)0;
                                __right_value85 = (void*)0;
                                __right_value86 = (void*)0;
                                __right_value87 = (void*)0;
                                __right_value88 = (void*)0;
                                __right_value89 = (void*)0;
                                __right_value90 = (void*)0;
                                __right_value91 = (void*)0;
                                __right_value92 = (void*)0;
                                __right_value93 = (void*)0;
                                __right_value94 = (void*)0;
                                __right_value95 = (void*)0;
                                __right_value96 = (void*)0;
                                __right_value97 = (void*)0;
                                __right_value98 = (void*)0;
                                c_value_47=(char* )come_increment_ref_count(string_operator_add(((char* )(__right_value801=string_operator_add(((char* )(__right_value799=string_operator_add(((char* )(__right_value798=string_operator_add(((char* )(__right_value797=string_operator_add(((char* )(__right_value795=string_operator_add(((char* )(__right_value794=string_operator_add(((char* )(__right_value793=string_operator_add(((char* )(__right_value791=string_operator_add(p->mCValueName,"["))),((char* )(__right_value792=int_to_string(i_45)))))),"]"))),"["))),((char* )(__right_value796=int_to_string(j_46)))))),"]"))),"["))),((char* )(__right_value800=int_to_string(k)))))),"]"), "34heap2.nc", 515, 704);
                                (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 705));
                                (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 706));
                                (__right_value7 = come_decrement_ref_count(__right_value7, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 707));
                                (__right_value8 = come_decrement_ref_count(__right_value8, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 708));
                                (__right_value9 = come_decrement_ref_count(__right_value9, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 709));
                                (__right_value13 = come_decrement_ref_count(__right_value13, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 710));
                                (__right_value14 = come_decrement_ref_count(__right_value14, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 711));
                                (__right_value18 = come_decrement_ref_count(__right_value18, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 712));
                                (__right_value19 = come_decrement_ref_count(__right_value19, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 713));
                                (__right_value20 = come_decrement_ref_count(__right_value20, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 714));
                                (__right_value21 = come_decrement_ref_count(__right_value21, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 715));
                                (__right_value26 = come_decrement_ref_count(__right_value26, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 716));
                                (__right_value27 = come_decrement_ref_count(__right_value27, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 717));
                                (__right_value31 = come_decrement_ref_count(__right_value31, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 718));
                                (__right_value32 = come_decrement_ref_count(__right_value32, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 719));
                                (__right_value33 = come_decrement_ref_count(__right_value33, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 720));
                                (__right_value37 = come_decrement_ref_count(__right_value37, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 721));
                                (__right_value38 = come_decrement_ref_count(__right_value38, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 722));
                                (__right_value42 = come_decrement_ref_count(__right_value42, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 723));
                                (__right_value43 = come_decrement_ref_count(__right_value43, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 724));
                                (__right_value44 = come_decrement_ref_count(__right_value44, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 725));
                                (__right_value45 = come_decrement_ref_count(__right_value45, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 726));
                                (__right_value46 = come_decrement_ref_count(__right_value46, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 727));
                                (__right_value47 = come_decrement_ref_count(__right_value47, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 728));
                                (__right_value51 = come_decrement_ref_count(__right_value51, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 729));
                                (__right_value52 = come_decrement_ref_count(__right_value52, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 730));
                                (__right_value56 = come_decrement_ref_count(__right_value56, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 731));
                                (__right_value57 = come_decrement_ref_count(__right_value57, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 732));
                                (__right_value58 = come_decrement_ref_count(__right_value58, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 733));
                                (__right_value62 = come_decrement_ref_count(__right_value62, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 734));
                                (__right_value63 = come_decrement_ref_count(__right_value63, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 735));
                                (__right_value67 = come_decrement_ref_count(__right_value67, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 736));
                                (__right_value68 = come_decrement_ref_count(__right_value68, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 737));
                                (__right_value69 = come_decrement_ref_count(__right_value69, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 738));
                                (__right_value70 = come_decrement_ref_count(__right_value70, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 739));
                                (__right_value75 = come_decrement_ref_count(__right_value75, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 740));
                                (__right_value76 = come_decrement_ref_count(__right_value76, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 741));
                                (__right_value80 = come_decrement_ref_count(__right_value80, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 742));
                                (__right_value81 = come_decrement_ref_count(__right_value81, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 743));
                                (__right_value82 = come_decrement_ref_count(__right_value82, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 744));
                                (__right_value86 = come_decrement_ref_count(__right_value86, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 745));
                                (__right_value87 = come_decrement_ref_count(__right_value87, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 746));
                                (__right_value91 = come_decrement_ref_count(__right_value91, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 747));
                                (__right_value92 = come_decrement_ref_count(__right_value92, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 748));
                                (__right_value93 = come_decrement_ref_count(__right_value93, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 749));
                                (__right_value94 = come_decrement_ref_count(__right_value94, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 750));
                                (__right_value95 = come_decrement_ref_count(__right_value95, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 751));
                                (__right_value96 = come_decrement_ref_count(__right_value96, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 752));
                                (__right_value97 = come_decrement_ref_count(__right_value97, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 753));
                                (__right_value101 = come_decrement_ref_count(__right_value101, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 754));
                                (__right_value102 = come_decrement_ref_count(__right_value102, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 755));
                                (__right_value106 = come_decrement_ref_count(__right_value106, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 756));
                                (__right_value107 = come_decrement_ref_count(__right_value107, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 757));
                                (__right_value108 = come_decrement_ref_count(__right_value108, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 758));
                                (__right_value112 = come_decrement_ref_count(__right_value112, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 759));
                                (__right_value113 = come_decrement_ref_count(__right_value113, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 760));
                                (__right_value117 = come_decrement_ref_count(__right_value117, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 761));
                                (__right_value118 = come_decrement_ref_count(__right_value118, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 762));
                                (__right_value119 = come_decrement_ref_count(__right_value119, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 763));
                                (__right_value120 = come_decrement_ref_count(__right_value120, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 764));
                                (__right_value125 = come_decrement_ref_count(__right_value125, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 765));
                                (__right_value126 = come_decrement_ref_count(__right_value126, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 766));
                                (__right_value130 = come_decrement_ref_count(__right_value130, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 767));
                                (__right_value131 = come_decrement_ref_count(__right_value131, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 768));
                                (__right_value132 = come_decrement_ref_count(__right_value132, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 769));
                                (__right_value136 = come_decrement_ref_count(__right_value136, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 770));
                                (__right_value137 = come_decrement_ref_count(__right_value137, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 771));
                                (__right_value141 = come_decrement_ref_count(__right_value141, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 772));
                                (__right_value142 = come_decrement_ref_count(__right_value142, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 773));
                                (__right_value143 = come_decrement_ref_count(__right_value143, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 774));
                                (__right_value144 = come_decrement_ref_count(__right_value144, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 775));
                                (__right_value145 = come_decrement_ref_count(__right_value145, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 776));
                                (__right_value146 = come_decrement_ref_count(__right_value146, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 777));
                                (__right_value150 = come_decrement_ref_count(__right_value150, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 778));
                                (__right_value151 = come_decrement_ref_count(__right_value151, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 779));
                                (__right_value155 = come_decrement_ref_count(__right_value155, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 780));
                                (__right_value156 = come_decrement_ref_count(__right_value156, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 781));
                                (__right_value157 = come_decrement_ref_count(__right_value157, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 782));
                                (__right_value161 = come_decrement_ref_count(__right_value161, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 783));
                                (__right_value162 = come_decrement_ref_count(__right_value162, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 784));
                                (__right_value166 = come_decrement_ref_count(__right_value166, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 785));
                                (__right_value167 = come_decrement_ref_count(__right_value167, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 786));
                                (__right_value168 = come_decrement_ref_count(__right_value168, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 787));
                                (__right_value169 = come_decrement_ref_count(__right_value169, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 788));
                                (__right_value174 = come_decrement_ref_count(__right_value174, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 789));
                                (__right_value175 = come_decrement_ref_count(__right_value175, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 790));
                                (__right_value179 = come_decrement_ref_count(__right_value179, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 791));
                                (__right_value180 = come_decrement_ref_count(__right_value180, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 792));
                                (__right_value181 = come_decrement_ref_count(__right_value181, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 793));
                                (__right_value185 = come_decrement_ref_count(__right_value185, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 794));
                                (__right_value186 = come_decrement_ref_count(__right_value186, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 795));
                                (__right_value190 = come_decrement_ref_count(__right_value190, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 796));
                                (__right_value191 = come_decrement_ref_count(__right_value191, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 797));
                                (__right_value192 = come_decrement_ref_count(__right_value192, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 798));
                                (__right_value193 = come_decrement_ref_count(__right_value193, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 799));
                                (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 800));
                                (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 801));
                                (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 802));
                                (__right_value197 = come_decrement_ref_count(__right_value197, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 803));
                                (__right_value202 = come_decrement_ref_count(__right_value202, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 804));
                                (__right_value203 = come_decrement_ref_count(__right_value203, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 805));
                                (__right_value207 = come_decrement_ref_count(__right_value207, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 806));
                                (__right_value208 = come_decrement_ref_count(__right_value208, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 807));
                                (__right_value209 = come_decrement_ref_count(__right_value209, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 808));
                                (__right_value213 = come_decrement_ref_count(__right_value213, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 809));
                                (__right_value214 = come_decrement_ref_count(__right_value214, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 810));
                                (__right_value218 = come_decrement_ref_count(__right_value218, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 811));
                                (__right_value219 = come_decrement_ref_count(__right_value219, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 812));
                                (__right_value220 = come_decrement_ref_count(__right_value220, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 813));
                                (__right_value221 = come_decrement_ref_count(__right_value221, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 814));
                                (__right_value226 = come_decrement_ref_count(__right_value226, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 815));
                                (__right_value227 = come_decrement_ref_count(__right_value227, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 816));
                                (__right_value231 = come_decrement_ref_count(__right_value231, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 817));
                                (__right_value232 = come_decrement_ref_count(__right_value232, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 818));
                                (__right_value233 = come_decrement_ref_count(__right_value233, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 819));
                                (__right_value237 = come_decrement_ref_count(__right_value237, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 820));
                                (__right_value238 = come_decrement_ref_count(__right_value238, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 821));
                                (__right_value242 = come_decrement_ref_count(__right_value242, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 822));
                                (__right_value243 = come_decrement_ref_count(__right_value243, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 823));
                                (__right_value244 = come_decrement_ref_count(__right_value244, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 824));
                                (__right_value245 = come_decrement_ref_count(__right_value245, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 825));
                                (__right_value246 = come_decrement_ref_count(__right_value246, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 826));
                                (__right_value247 = come_decrement_ref_count(__right_value247, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 827));
                                (__right_value251 = come_decrement_ref_count(__right_value251, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 828));
                                (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 829));
                                (__right_value256 = come_decrement_ref_count(__right_value256, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 830));
                                (__right_value257 = come_decrement_ref_count(__right_value257, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 831));
                                (__right_value258 = come_decrement_ref_count(__right_value258, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 832));
                                (__right_value262 = come_decrement_ref_count(__right_value262, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 833));
                                (__right_value263 = come_decrement_ref_count(__right_value263, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 834));
                                (__right_value267 = come_decrement_ref_count(__right_value267, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 835));
                                (__right_value268 = come_decrement_ref_count(__right_value268, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 836));
                                (__right_value269 = come_decrement_ref_count(__right_value269, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 837));
                                (__right_value270 = come_decrement_ref_count(__right_value270, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 838));
                                (__right_value275 = come_decrement_ref_count(__right_value275, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 839));
                                (__right_value276 = come_decrement_ref_count(__right_value276, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 840));
                                (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 841));
                                (__right_value281 = come_decrement_ref_count(__right_value281, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 842));
                                (__right_value282 = come_decrement_ref_count(__right_value282, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 843));
                                (__right_value286 = come_decrement_ref_count(__right_value286, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 844));
                                (__right_value287 = come_decrement_ref_count(__right_value287, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 845));
                                (__right_value291 = come_decrement_ref_count(__right_value291, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 846));
                                (__right_value292 = come_decrement_ref_count(__right_value292, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 847));
                                (__right_value293 = come_decrement_ref_count(__right_value293, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 848));
                                (__right_value294 = come_decrement_ref_count(__right_value294, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 849));
                                (__right_value295 = come_decrement_ref_count(__right_value295, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 850));
                                (__right_value296 = come_decrement_ref_count(__right_value296, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 851));
                                (__right_value297 = come_decrement_ref_count(__right_value297, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 852));
                                (__right_value301 = come_decrement_ref_count(__right_value301, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 853));
                                (__right_value302 = come_decrement_ref_count(__right_value302, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 854));
                                (__right_value306 = come_decrement_ref_count(__right_value306, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 855));
                                (__right_value307 = come_decrement_ref_count(__right_value307, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 856));
                                (__right_value308 = come_decrement_ref_count(__right_value308, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 857));
                                (__right_value312 = come_decrement_ref_count(__right_value312, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 858));
                                (__right_value313 = come_decrement_ref_count(__right_value313, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 859));
                                (__right_value317 = come_decrement_ref_count(__right_value317, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 860));
                                (__right_value318 = come_decrement_ref_count(__right_value318, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 861));
                                (__right_value319 = come_decrement_ref_count(__right_value319, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 862));
                                (__right_value320 = come_decrement_ref_count(__right_value320, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 863));
                                (__right_value325 = come_decrement_ref_count(__right_value325, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 864));
                                (__right_value326 = come_decrement_ref_count(__right_value326, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 865));
                                (__right_value330 = come_decrement_ref_count(__right_value330, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 866));
                                (__right_value331 = come_decrement_ref_count(__right_value331, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 867));
                                (__right_value332 = come_decrement_ref_count(__right_value332, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 868));
                                (__right_value336 = come_decrement_ref_count(__right_value336, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 869));
                                (__right_value337 = come_decrement_ref_count(__right_value337, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 870));
                                (__right_value341 = come_decrement_ref_count(__right_value341, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 871));
                                (__right_value342 = come_decrement_ref_count(__right_value342, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 872));
                                (__right_value343 = come_decrement_ref_count(__right_value343, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 873));
                                (__right_value344 = come_decrement_ref_count(__right_value344, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 874));
                                (__right_value345 = come_decrement_ref_count(__right_value345, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 875));
                                (__right_value346 = come_decrement_ref_count(__right_value346, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 876));
                                (__right_value350 = come_decrement_ref_count(__right_value350, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 877));
                                (__right_value351 = come_decrement_ref_count(__right_value351, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 878));
                                (__right_value355 = come_decrement_ref_count(__right_value355, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 879));
                                (__right_value356 = come_decrement_ref_count(__right_value356, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 880));
                                (__right_value357 = come_decrement_ref_count(__right_value357, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 881));
                                (__right_value361 = come_decrement_ref_count(__right_value361, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 882));
                                (__right_value362 = come_decrement_ref_count(__right_value362, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 883));
                                (__right_value366 = come_decrement_ref_count(__right_value366, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 884));
                                (__right_value367 = come_decrement_ref_count(__right_value367, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 885));
                                (__right_value368 = come_decrement_ref_count(__right_value368, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 886));
                                (__right_value369 = come_decrement_ref_count(__right_value369, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 887));
                                (__right_value374 = come_decrement_ref_count(__right_value374, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 888));
                                (__right_value375 = come_decrement_ref_count(__right_value375, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 889));
                                (__right_value379 = come_decrement_ref_count(__right_value379, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 890));
                                (__right_value380 = come_decrement_ref_count(__right_value380, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 891));
                                (__right_value381 = come_decrement_ref_count(__right_value381, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 892));
                                (__right_value385 = come_decrement_ref_count(__right_value385, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 893));
                                (__right_value386 = come_decrement_ref_count(__right_value386, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 894));
                                (__right_value390 = come_decrement_ref_count(__right_value390, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 895));
                                (__right_value391 = come_decrement_ref_count(__right_value391, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 896));
                                (__right_value392 = come_decrement_ref_count(__right_value392, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 897));
                                (__right_value393 = come_decrement_ref_count(__right_value393, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 898));
                                (__right_value394 = come_decrement_ref_count(__right_value394, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 899));
                                (__right_value395 = come_decrement_ref_count(__right_value395, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 900));
                                (__right_value396 = come_decrement_ref_count(__right_value396, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 901));
                                (__right_value397 = come_decrement_ref_count(__right_value397, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 902));
                                (__right_value398 = come_decrement_ref_count(__right_value398, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 903));
                                (__right_value399 = come_decrement_ref_count(__right_value399, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 904));
                                (__right_value403 = come_decrement_ref_count(__right_value403, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 905));
                                (__right_value404 = come_decrement_ref_count(__right_value404, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 906));
                                (__right_value408 = come_decrement_ref_count(__right_value408, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 907));
                                (__right_value409 = come_decrement_ref_count(__right_value409, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 908));
                                (__right_value410 = come_decrement_ref_count(__right_value410, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 909));
                                (__right_value414 = come_decrement_ref_count(__right_value414, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 910));
                                (__right_value415 = come_decrement_ref_count(__right_value415, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 911));
                                (__right_value419 = come_decrement_ref_count(__right_value419, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 912));
                                (__right_value420 = come_decrement_ref_count(__right_value420, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 913));
                                (__right_value421 = come_decrement_ref_count(__right_value421, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 914));
                                (__right_value422 = come_decrement_ref_count(__right_value422, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 915));
                                (__right_value427 = come_decrement_ref_count(__right_value427, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 916));
                                (__right_value428 = come_decrement_ref_count(__right_value428, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 917));
                                (__right_value432 = come_decrement_ref_count(__right_value432, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 918));
                                (__right_value433 = come_decrement_ref_count(__right_value433, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 919));
                                (__right_value434 = come_decrement_ref_count(__right_value434, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 920));
                                (__right_value438 = come_decrement_ref_count(__right_value438, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 921));
                                (__right_value439 = come_decrement_ref_count(__right_value439, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 922));
                                (__right_value443 = come_decrement_ref_count(__right_value443, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 923));
                                (__right_value444 = come_decrement_ref_count(__right_value444, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 924));
                                (__right_value445 = come_decrement_ref_count(__right_value445, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 925));
                                (__right_value446 = come_decrement_ref_count(__right_value446, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 926));
                                (__right_value447 = come_decrement_ref_count(__right_value447, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 927));
                                (__right_value448 = come_decrement_ref_count(__right_value448, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 928));
                                (__right_value452 = come_decrement_ref_count(__right_value452, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 929));
                                (__right_value453 = come_decrement_ref_count(__right_value453, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 930));
                                (__right_value457 = come_decrement_ref_count(__right_value457, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 931));
                                (__right_value458 = come_decrement_ref_count(__right_value458, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 932));
                                (__right_value459 = come_decrement_ref_count(__right_value459, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 933));
                                (__right_value463 = come_decrement_ref_count(__right_value463, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 934));
                                (__right_value464 = come_decrement_ref_count(__right_value464, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 935));
                                (__right_value468 = come_decrement_ref_count(__right_value468, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 936));
                                (__right_value469 = come_decrement_ref_count(__right_value469, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 937));
                                (__right_value470 = come_decrement_ref_count(__right_value470, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 938));
                                (__right_value471 = come_decrement_ref_count(__right_value471, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 939));
                                (__right_value476 = come_decrement_ref_count(__right_value476, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 940));
                                (__right_value477 = come_decrement_ref_count(__right_value477, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 941));
                                (__right_value481 = come_decrement_ref_count(__right_value481, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 942));
                                (__right_value482 = come_decrement_ref_count(__right_value482, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 943));
                                (__right_value483 = come_decrement_ref_count(__right_value483, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 944));
                                (__right_value487 = come_decrement_ref_count(__right_value487, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 945));
                                (__right_value488 = come_decrement_ref_count(__right_value488, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 946));
                                (__right_value492 = come_decrement_ref_count(__right_value492, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 947));
                                (__right_value493 = come_decrement_ref_count(__right_value493, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 948));
                                (__right_value494 = come_decrement_ref_count(__right_value494, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 949));
                                (__right_value495 = come_decrement_ref_count(__right_value495, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 950));
                                (__right_value496 = come_decrement_ref_count(__right_value496, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 951));
                                (__right_value497 = come_decrement_ref_count(__right_value497, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 952));
                                (__right_value498 = come_decrement_ref_count(__right_value498, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 953));
                                (__right_value502 = come_decrement_ref_count(__right_value502, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 954));
                                (__right_value503 = come_decrement_ref_count(__right_value503, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 955));
                                (__right_value507 = come_decrement_ref_count(__right_value507, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 956));
                                (__right_value508 = come_decrement_ref_count(__right_value508, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 957));
                                (__right_value509 = come_decrement_ref_count(__right_value509, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 958));
                                (__right_value513 = come_decrement_ref_count(__right_value513, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 959));
                                (__right_value514 = come_decrement_ref_count(__right_value514, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 960));
                                (__right_value518 = come_decrement_ref_count(__right_value518, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 961));
                                (__right_value519 = come_decrement_ref_count(__right_value519, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 962));
                                (__right_value520 = come_decrement_ref_count(__right_value520, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 963));
                                (__right_value521 = come_decrement_ref_count(__right_value521, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 964));
                                (__right_value526 = come_decrement_ref_count(__right_value526, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 965));
                                (__right_value527 = come_decrement_ref_count(__right_value527, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 966));
                                (__right_value531 = come_decrement_ref_count(__right_value531, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 967));
                                (__right_value532 = come_decrement_ref_count(__right_value532, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 968));
                                (__right_value533 = come_decrement_ref_count(__right_value533, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 969));
                                (__right_value537 = come_decrement_ref_count(__right_value537, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 970));
                                (__right_value538 = come_decrement_ref_count(__right_value538, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 971));
                                (__right_value542 = come_decrement_ref_count(__right_value542, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 972));
                                (__right_value543 = come_decrement_ref_count(__right_value543, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 973));
                                (__right_value544 = come_decrement_ref_count(__right_value544, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 974));
                                (__right_value545 = come_decrement_ref_count(__right_value545, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 975));
                                (__right_value546 = come_decrement_ref_count(__right_value546, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 976));
                                (__right_value547 = come_decrement_ref_count(__right_value547, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 977));
                                (__right_value551 = come_decrement_ref_count(__right_value551, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 978));
                                (__right_value552 = come_decrement_ref_count(__right_value552, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 979));
                                (__right_value556 = come_decrement_ref_count(__right_value556, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 980));
                                (__right_value557 = come_decrement_ref_count(__right_value557, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 981));
                                (__right_value558 = come_decrement_ref_count(__right_value558, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 982));
                                (__right_value562 = come_decrement_ref_count(__right_value562, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 983));
                                (__right_value563 = come_decrement_ref_count(__right_value563, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 984));
                                (__right_value567 = come_decrement_ref_count(__right_value567, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 985));
                                (__right_value568 = come_decrement_ref_count(__right_value568, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 986));
                                (__right_value569 = come_decrement_ref_count(__right_value569, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 987));
                                (__right_value570 = come_decrement_ref_count(__right_value570, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 988));
                                (__right_value575 = come_decrement_ref_count(__right_value575, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 989));
                                (__right_value576 = come_decrement_ref_count(__right_value576, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 990));
                                (__right_value580 = come_decrement_ref_count(__right_value580, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 991));
                                (__right_value581 = come_decrement_ref_count(__right_value581, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 992));
                                (__right_value582 = come_decrement_ref_count(__right_value582, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 993));
                                (__right_value586 = come_decrement_ref_count(__right_value586, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 994));
                                (__right_value587 = come_decrement_ref_count(__right_value587, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 995));
                                (__right_value591 = come_decrement_ref_count(__right_value591, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 996));
                                (__right_value592 = come_decrement_ref_count(__right_value592, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 997));
                                (__right_value593 = come_decrement_ref_count(__right_value593, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 998));
                                (__right_value594 = come_decrement_ref_count(__right_value594, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 999));
                                (__right_value595 = come_decrement_ref_count(__right_value595, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1000));
                                (__right_value596 = come_decrement_ref_count(__right_value596, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1001));
                                (__right_value597 = come_decrement_ref_count(__right_value597, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1002));
                                (__right_value598 = come_decrement_ref_count(__right_value598, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1003));
                                (__right_value603 = come_decrement_ref_count(__right_value603, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1004));
                                (__right_value604 = come_decrement_ref_count(__right_value604, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1005));
                                (__right_value608 = come_decrement_ref_count(__right_value608, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1006));
                                (__right_value609 = come_decrement_ref_count(__right_value609, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1007));
                                (__right_value610 = come_decrement_ref_count(__right_value610, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1008));
                                (__right_value614 = come_decrement_ref_count(__right_value614, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1009));
                                (__right_value615 = come_decrement_ref_count(__right_value615, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1010));
                                (__right_value619 = come_decrement_ref_count(__right_value619, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1011));
                                (__right_value620 = come_decrement_ref_count(__right_value620, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1012));
                                (__right_value621 = come_decrement_ref_count(__right_value621, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1013));
                                (__right_value622 = come_decrement_ref_count(__right_value622, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1014));
                                (__right_value627 = come_decrement_ref_count(__right_value627, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1015));
                                (__right_value628 = come_decrement_ref_count(__right_value628, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1016));
                                (__right_value632 = come_decrement_ref_count(__right_value632, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1017));
                                (__right_value633 = come_decrement_ref_count(__right_value633, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1018));
                                (__right_value634 = come_decrement_ref_count(__right_value634, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1019));
                                (__right_value638 = come_decrement_ref_count(__right_value638, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1020));
                                (__right_value639 = come_decrement_ref_count(__right_value639, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1021));
                                (__right_value643 = come_decrement_ref_count(__right_value643, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1022));
                                (__right_value644 = come_decrement_ref_count(__right_value644, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1023));
                                (__right_value645 = come_decrement_ref_count(__right_value645, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1024));
                                (__right_value646 = come_decrement_ref_count(__right_value646, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1025));
                                (__right_value647 = come_decrement_ref_count(__right_value647, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1026));
                                (__right_value648 = come_decrement_ref_count(__right_value648, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1027));
                                (__right_value652 = come_decrement_ref_count(__right_value652, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1028));
                                (__right_value653 = come_decrement_ref_count(__right_value653, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1029));
                                (__right_value657 = come_decrement_ref_count(__right_value657, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1030));
                                (__right_value658 = come_decrement_ref_count(__right_value658, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1031));
                                (__right_value659 = come_decrement_ref_count(__right_value659, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1032));
                                (__right_value663 = come_decrement_ref_count(__right_value663, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1033));
                                (__right_value664 = come_decrement_ref_count(__right_value664, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1034));
                                (__right_value668 = come_decrement_ref_count(__right_value668, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1035));
                                (__right_value669 = come_decrement_ref_count(__right_value669, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1036));
                                (__right_value670 = come_decrement_ref_count(__right_value670, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1037));
                                (__right_value671 = come_decrement_ref_count(__right_value671, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1038));
                                (__right_value676 = come_decrement_ref_count(__right_value676, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1039));
                                (__right_value677 = come_decrement_ref_count(__right_value677, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1040));
                                (__right_value681 = come_decrement_ref_count(__right_value681, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1041));
                                (__right_value682 = come_decrement_ref_count(__right_value682, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1042));
                                (__right_value683 = come_decrement_ref_count(__right_value683, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1043));
                                (__right_value687 = come_decrement_ref_count(__right_value687, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1044));
                                (__right_value688 = come_decrement_ref_count(__right_value688, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1045));
                                (__right_value692 = come_decrement_ref_count(__right_value692, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1046));
                                (__right_value693 = come_decrement_ref_count(__right_value693, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1047));
                                (__right_value694 = come_decrement_ref_count(__right_value694, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1048));
                                (__right_value695 = come_decrement_ref_count(__right_value695, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1049));
                                (__right_value696 = come_decrement_ref_count(__right_value696, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1050));
                                (__right_value697 = come_decrement_ref_count(__right_value697, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1051));
                                (__right_value698 = come_decrement_ref_count(__right_value698, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1052));
                                (__right_value702 = come_decrement_ref_count(__right_value702, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1053));
                                (__right_value703 = come_decrement_ref_count(__right_value703, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1054));
                                (__right_value707 = come_decrement_ref_count(__right_value707, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1055));
                                (__right_value708 = come_decrement_ref_count(__right_value708, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1056));
                                (__right_value709 = come_decrement_ref_count(__right_value709, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1057));
                                (__right_value713 = come_decrement_ref_count(__right_value713, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1058));
                                (__right_value714 = come_decrement_ref_count(__right_value714, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1059));
                                (__right_value718 = come_decrement_ref_count(__right_value718, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1060));
                                (__right_value719 = come_decrement_ref_count(__right_value719, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1061));
                                (__right_value720 = come_decrement_ref_count(__right_value720, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1062));
                                (__right_value721 = come_decrement_ref_count(__right_value721, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1063));
                                (__right_value726 = come_decrement_ref_count(__right_value726, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1064));
                                (__right_value727 = come_decrement_ref_count(__right_value727, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1065));
                                (__right_value731 = come_decrement_ref_count(__right_value731, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1066));
                                (__right_value732 = come_decrement_ref_count(__right_value732, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1067));
                                (__right_value733 = come_decrement_ref_count(__right_value733, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1068));
                                (__right_value737 = come_decrement_ref_count(__right_value737, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1069));
                                (__right_value738 = come_decrement_ref_count(__right_value738, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1070));
                                (__right_value742 = come_decrement_ref_count(__right_value742, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1071));
                                (__right_value743 = come_decrement_ref_count(__right_value743, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1072));
                                (__right_value744 = come_decrement_ref_count(__right_value744, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1073));
                                (__right_value745 = come_decrement_ref_count(__right_value745, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1074));
                                (__right_value746 = come_decrement_ref_count(__right_value746, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1075));
                                (__right_value747 = come_decrement_ref_count(__right_value747, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1076));
                                (__right_value751 = come_decrement_ref_count(__right_value751, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1077));
                                (__right_value752 = come_decrement_ref_count(__right_value752, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1078));
                                (__right_value756 = come_decrement_ref_count(__right_value756, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1079));
                                (__right_value757 = come_decrement_ref_count(__right_value757, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1080));
                                (__right_value758 = come_decrement_ref_count(__right_value758, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1081));
                                (__right_value762 = come_decrement_ref_count(__right_value762, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1082));
                                (__right_value763 = come_decrement_ref_count(__right_value763, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1083));
                                (__right_value767 = come_decrement_ref_count(__right_value767, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1084));
                                (__right_value768 = come_decrement_ref_count(__right_value768, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1085));
                                (__right_value769 = come_decrement_ref_count(__right_value769, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1086));
                                (__right_value770 = come_decrement_ref_count(__right_value770, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1087));
                                (__right_value775 = come_decrement_ref_count(__right_value775, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1088));
                                (__right_value776 = come_decrement_ref_count(__right_value776, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1089));
                                (__right_value780 = come_decrement_ref_count(__right_value780, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1090));
                                (__right_value781 = come_decrement_ref_count(__right_value781, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1091));
                                (__right_value782 = come_decrement_ref_count(__right_value782, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1092));
                                (__right_value786 = come_decrement_ref_count(__right_value786, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1093));
                                (__right_value787 = come_decrement_ref_count(__right_value787, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1094));
                                (__right_value791 = come_decrement_ref_count(__right_value791, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1095));
                                (__right_value792 = come_decrement_ref_count(__right_value792, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1096));
                                (__right_value793 = come_decrement_ref_count(__right_value793, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1097));
                                (__right_value794 = come_decrement_ref_count(__right_value794, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1098));
                                (__right_value795 = come_decrement_ref_count(__right_value795, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1099));
                                (__right_value796 = come_decrement_ref_count(__right_value796, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1100));
                                (__right_value797 = come_decrement_ref_count(__right_value797, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1101));
                                (__right_value798 = come_decrement_ref_count(__right_value798, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1102));
                                (__right_value799 = come_decrement_ref_count(__right_value799, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1103));
                                (__right_value800 = come_decrement_ref_count(__right_value800, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1104));
                                (__right_value801 = come_decrement_ref_count(__right_value801, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 515, 1105));
                                __right_value0 = (void*)0;
                                element_type_48=(struct sType* )come_increment_ref_count(sType_clone(type), "34heap2.nc", 517, 1106);
                                list$1sNode$ph_reset(element_type_48->mArrayNum);
                                free_object(element_type_48,c_value_47,(_Bool)0,(_Bool)0,info,(_Bool)0);
                                (c_value_47 = come_decrement_ref_count(c_value_47, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 522, 1107));
                                come_call_finalizer(sType_finalize, element_type_48, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 522, 1108);
                            }
                        }
                    }
                    ((node_36) ? node_36 = come_decrement_ref_count(node_36, ((struct sNode*)node_36)->finalize, ((struct sNode*)node_36)->_protocol_obj, 0, 0,(void*)0, "34heap2.nc", 529, 1109):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value_38, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 529, 1110);
                    ((node2_40) ? node2_40 = come_decrement_ref_count(node2_40, ((struct sNode*)node2_40)->finalize, ((struct sNode*)node2_40)->_protocol_obj, 0, 0,(void*)0, "34heap2.nc", 529, 1111):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value2_42, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 529, 1112);
                    ((node3) ? node3 = come_decrement_ref_count(node3, ((struct sNode*)node3)->finalize, ((struct sNode*)node3)->_protocol_obj, 0, 0,(void*)0, "34heap2.nc", 529, 1113):(void*)0);
                    come_call_finalizer(CVALUE_finalize, come_value3, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 529, 1114);
                }
                else {
                    err_msg(info,"no support more 4 dimention array with heap object");
                    exit(1);
                }
            }
            else {
                free_object(type,p->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0);
            }
        }
        else if(klass->mStruct&&p->mCValueName&&type->mAllocaValue&&!type->mNoCallingDestructor) {
            __right_value0 = (void*)0;
            c_value_49=(char* )come_increment_ref_count(xsprintf("(&%s)",p->mCValueName), "34heap2.nc", 535, 1115);
            __right_value0 = (void*)0;
            type2=(struct sType* )come_increment_ref_count(sType_clone(type), "34heap2.nc", 536, 1116);
            type2->mPointerNum++;
            free_object(type2,c_value_49,(_Bool)0,(_Bool)0,info,(_Bool)0);
            (c_value_49 = come_decrement_ref_count(c_value_49, (void*)0, (void*)0, 0, 0, (void*)0, "34heap2.nc", 540, 1117));
            come_call_finalizer(sType_finalize, type2, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 540, 1118);
        }
    }
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, _o2_saved_8, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 543, 1124);
    neo_current_frame = fr.prev;
}

static char*  map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_begin"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_24  ;
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
    memset(&result_24,0,sizeof(char* ));
        __result_obj__0 = result_24;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_end"; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
        neo_current_frame = fr.prev;
}

static char*  map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph_next"; neo_current_frame = &fr;
    char*  result  ;
    char*  __result_obj__0  ;
    char*  result_25  ;
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
    memset(&result_25,0,sizeof(char* ));
        __result_obj__0 = result_25;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph$p_operator_load_element"; neo_current_frame = &fr;
    struct sNode* default_value;
    struct sNode* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    struct sNode* default_value_26;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sNode*));
                __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value, "./neo-c.h", 2150, 605);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2150, 606):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2150, 607):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 2153, 608):(void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item, "./neo-c.h", 2161, 609);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2161, 610):(void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_26,0,sizeof(struct sNode*));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_26, "./neo-c.h", 2169, 611);
    ((default_value_26) ? default_value_26 = come_decrement_ref_count(default_value_26, ((struct sNode*)default_value_26)->finalize, ((struct sNode*)default_value_26)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2169, 612):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2169, 613):(void*)0);
    return __result_obj__0;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "list$1sNode$ph_operator_load_element"; neo_current_frame = &fr;
    struct sNode* default_value;
    struct sNode* __result_obj__0;
    struct list_item$1sNode$ph* it;
    int i;
    struct sNode* default_value_27;
    if(self==((void*)0)) {
        memset(&default_value,0,sizeof(struct sNode*));
                __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value, "./neo-c.h", 2150, 614);
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2150, 615):(void*)0);
        neo_current_frame = fr.prev;
        ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2150, 616):(void*)0);
        return __result_obj__0;
        ((default_value) ? default_value = come_decrement_ref_count(default_value, ((struct sNode*)default_value)->finalize, ((struct sNode*)default_value)->_protocol_obj, 0, 0,(void*)0, "./neo-c.h", 2153, 617):(void*)0);
    }
    if(position<0) {
        position+=self->len;
    }
    it=self->head;
    i=0;
    while(it!=((void*)0)) {
        if(position==i) {
                        __result_obj__0 = (struct sNode*)come_increment_ref_count(it->item, "./neo-c.h", 2161, 618);
            neo_current_frame = fr.prev;
            ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2161, 619):(void*)0);
            return __result_obj__0;
        }
        it=it->next;
        i++;
    }
    memset(&default_value_27,0,sizeof(struct sNode*));
        __result_obj__0 = (struct sNode*)come_increment_ref_count(default_value_27, "./neo-c.h", 2169, 620);
    ((default_value_27) ? default_value_27 = come_decrement_ref_count(default_value_27, ((struct sNode*)default_value_27)->finalize, ((struct sNode*)default_value_27)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2169, 621):(void*)0);
    neo_current_frame = fr.prev;
    ((__result_obj__0) ? __result_obj__0 = come_decrement_ref_count(__result_obj__0, ((struct sNode*)__result_obj__0)->finalize, ((struct sNode*)__result_obj__0)->_protocol_obj, 0, 1,(void*)0, "./neo-c.h", 2169, 622):(void*)0);
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
        come_call_finalizer(list_item$1sNode$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 1856, 632);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "map$2char$phsVar$ph$p_finalize"; neo_current_frame = &fr;
    int i;
    int i_50;
    for(i=0    ;i<self->size;i++){
        if(self->item_existance[i]) {
            if(1) {
                come_call_finalizer(sVar_finalize, self->items[i], (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3378, 1119);
            }
        }
    }
    come_free((char*)self->items);
    for(i_50=0    ;i_50<self->size;i_50++){
        if(self->item_existance[i_50]) {
            if(1) {
                (self->keys[i_50] = come_decrement_ref_count(self->keys[i_50], (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3387, 1120));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer(list$1char$ph$p_finalize, self->key_list, (void*)0, (void*)0, 0, 0, 0, (void*)0, "./neo-c.h}", 3393, 1121);
    (self->hashes = come_decrement_ref_count(self->hashes, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3395, 1122));
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, (void*)0, "./neo-c.h", 3396, 1123));
        neo_current_frame = fr.prev;
}

void free_objects_on_return(struct sBlock*  current_block  , struct sInfo*  info  , struct sVar*  ret_value  , _Bool top_block, _Bool ret_value_is_field)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "free_objects_on_return"; neo_current_frame = &fr;
    struct sVarTable*  it  ;
    if(gComeC) {
                neo_current_frame = fr.prev;
        return;
    }
    if(info->no_output_come_code) {
                neo_current_frame = fr.prev;
        return;
    }
    it=info->lv_table;
    if(it==info->come_fun->mBlock->mVarTable) {
        free_objects(it,ret_value,info,ret_value_is_field);
    }
    else {
        while(it!=info->come_fun->mBlock->mVarTable) {
            free_objects(it,ret_value,info,ret_value_is_field);
            it=it->mParent;
        }
        free_objects(it,ret_value,info,ret_value_is_field);
    }
    neo_current_frame = fr.prev;
}

void free_objects_on_break(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "free_objects_on_break"; neo_current_frame = &fr;
    struct sVar*  ret_value  ;
    struct sVarTable*  current_loop_vtable  ;
    struct sVarTable*  it  ;
    if(gComeC) {
                neo_current_frame = fr.prev;
        return;
    }
    if(info->no_output_come_code) {
                neo_current_frame = fr.prev;
        return;
    }
    ret_value=((void*)0);
    current_loop_vtable=info->current_loop_vtable;
    if(current_loop_vtable!=((void*)0)) {
        it=info->lv_table;
        while(it!=current_loop_vtable) {
            free_objects(it,ret_value,info,(_Bool)0);
            it=it->mParent;
        }
        free_objects(it,ret_value,info,(_Bool)0);
    }
    neo_current_frame = fr.prev;
}

_Bool existance_free_objects(struct sVarTable*  table  , struct sVar*  ret_value  , struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "existance_free_objects"; neo_current_frame = &fr;
    struct map$2char$phsVar$ph* _o2_saved_9;
    char*  it  ;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    struct sVar*  p  ;
    struct sType*  type  ;
    struct sClass*  klass  ;
    _Bool __result_obj__0;
    if(gComeC) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    for(_o2_saved_9=(struct map$2char$phsVar$ph*)come_increment_ref_count(table->mVars, "34heap2.nc", 594, 1125),it=map$2char$phsVar$ph_begin(_o2_saved_9)    ;!map$2char$phsVar$ph_end(_o2_saved_9);it=map$2char$phsVar$ph_next(_o2_saved_9)){
        p=((struct sVar* )(__right_value2=map$2char$phsVar$ph_operator_load_element(table->mVars,((char* )(__right_value1=__builtin_string(it,"34heap2.nc",595))))));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "34heap2.nc", 595, 1126));
        type=p->mType;
        klass=type->mClass;
        if(type->mChannel) {
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(map$2char$phsVar$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 600, 1127);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(ret_value!=((void*)0)&&p->mCValueName!=((void*)0)&&string_operator_equals(p->mCValueName,ret_value->mCValueName)&&type->mHeap) {
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(map$2char$phsVar$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 604, 1128);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(type->mHeap&&p->mCValueName) {
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(map$2char$phsVar$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 607, 1129);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else if(klass->mStruct&&p->mCValueName&&type->mAllocaValue&&!type->mNoCallingDestructor) {
                        __result_obj__0 = (_Bool)1;
            come_call_finalizer(map$2char$phsVar$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 610, 1130);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
        __result_obj__0 = (_Bool)0;
    come_call_finalizer(map$2char$phsVar$ph$p_finalize, _o2_saved_9, (void*)0, (void*)0, 0, 0, 0, (void*)0, "34heap2.nc}", 614, 1131);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool existance_free_objects_on_return(struct sBlock*  current_block  , struct sInfo*  info  , struct sVar*  ret_value  , _Bool top_block)
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "existance_free_objects_on_return"; neo_current_frame = &fr;
    struct sVarTable*  it  ;
    if(gComeC) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    it=info->lv_table;
    if(it==info->come_fun->mBlock->mVarTable) {
        if(existance_free_objects(it,ret_value,info)) {
                        neo_current_frame = fr.prev;
            return (_Bool)1;
        }
    }
    else {
        while(it!=info->come_fun->mBlock->mVarTable) {
            if(existance_free_objects(it,ret_value,info)) {
                                neo_current_frame = fr.prev;
                return (_Bool)1;
            }
            it=it->mParent;
        }
        if(existance_free_objects(it,ret_value,info)) {
                        neo_current_frame = fr.prev;
            return (_Bool)1;
        }
    }
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

_Bool existance_free_right_value_objects(struct sInfo*  info  )
{
    struct neo_frame fr; fr.stacktop =&fr; fr.prev = neo_current_frame; fr.fun_name = "existance_free_right_value_objects"; neo_current_frame = &fr;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct list$1sRightValueObject$ph* _o2_saved_10;
    struct sRightValueObject*  it  ;
    if(gComeC) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    right_value_objects=info->right_value_objects;
    for(_o2_saved_10=right_value_objects,it=list$1sRightValueObject$ph_begin(_o2_saved_10)    ;!list$1sRightValueObject$ph_end(_o2_saved_10);it=list$1sRightValueObject$ph_next(_o2_saved_10)){
        if(it&&!it->mFreed) {
            if(string_operator_equals(it->mFunName,info->come_fun->mName)&&it->mBlockLevel==info->block_level) {
                                neo_current_frame = fr.prev;
                return (_Bool)1;
            }
        }
    }
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

